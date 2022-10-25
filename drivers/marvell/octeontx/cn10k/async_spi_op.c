#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <debug.h>

#include <platform_def.h>
#include <spi.h>
#include <timers.h>
#include <drivers/delay_timer.h>
#include <octeontx_semaphore.h>


#define SPI_PAGE_ALIGN (0x111ll)
#define SPI_ERASE_SIZE (0x1000)
#define SPI_OP_SLEEP_TIME_MS 10

extern uint64_t get_usecs(void);
extern octeontx_ctr_sem_t octeontx_smc_spi_lock;

struct async_perf_counter {
	uint64_t time_min;
	uint64_t time_max;
	uint64_t time_avg;
	uint64_t time_count;
	uint64_t total_time;
};

enum spi_op_result {
	SPI_OP_OK,
	SPI_OP_FAIL,
	SPI_OP_COMP_FAIL,
};

static struct async_perf_counter aperf_counter;

uint8_t spi_update_buffer[SPI_ERASE_SIZE];

struct delayed_spi_op      spi_ops[SPI_OP_COUNT];
struct delayed_block_op    block_ops[BLOCK_OP_COUNT];

enum spi_dc_ret (*delayed_callback)(void *cb_param);
void *callback_params;

int spi_op_cnt, block_op_cnt;
uint64_t delayed_spi_in_progress;

static uint32_t timer_hd;
static uint32_t tim_initialized;

static void spi_async_block_completed(bool start);

static void spi_init_l1_desc(void)
{
	int i;

	for (i = 0; i < BLOCK_OP_COUNT; i++) {
		block_ops[i].type = BLOCK_NONE;
		block_ops[i].status = BLOCK_STATUS_WAITING;
		block_ops[i].block_callback = NULL;
	}
	block_op_cnt = 0;
}

static void spi_init_l2_desc(void)
{
	int i;

	for (i = 0; i < SPI_OP_COUNT; i++) {
		spi_ops[i].type = SPI_OP_NONE;
	}
	spi_op_cnt = 0;
}

static enum spi_op_result op_read(struct delayed_spi_params p)
{
	spi_nor_read((void *)p.memory_addr, p.size, p.spi_addr, 0, p.bus, p.cs);
	return SPI_OP_OK;
}

static enum spi_op_result op_update(struct delayed_spi_params p)
{
	uint64_t start_page_addr = p.spi_addr & (~SPI_PAGE_ALIGN);
	uint64_t data_offset = p.spi_addr - start_page_addr;

	spi_nor_read((void *)spi_update_buffer, SPI_ERASE_SIZE, p.spi_addr, 0, p.bus, p.cs);
	memcpy(spi_update_buffer+data_offset, (void *)p.memory_addr, p.size);
	spi_nor_erase(start_page_addr, 0, p.bus, p.cs);
	spi_nor_write(spi_update_buffer, SPI_ERASE_SIZE, start_page_addr, 0, p.bus, p.cs);

	return SPI_OP_OK;
}

static enum spi_op_result op_program(struct delayed_spi_params p)
{
	spi_nor_write((uint8_t *)p.memory_addr, p.size, p.spi_addr, 0, p.bus, p.cs);
	return SPI_OP_OK;
}

static enum spi_op_result op_erase(struct delayed_spi_params p)
{
	int erase_count = p.erase_block_count;

	while (erase_count--)
		spi_nor_erase(p.spi_addr, 0, p.bus, p.cs);

	return SPI_OP_OK;
}

static enum spi_op_result op_update_verify(struct delayed_spi_params p)
{
	spi_nor_read((void *)spi_update_buffer, p.size, p.spi_addr, 0, p.bus, p.cs);
	if (!memcmp((void *)p.memory_addr, (void *)spi_update_buffer, p.size)) {
		return SPI_OP_OK;
	}

	op_erase(p);
	op_program(p);

	spi_nor_read((void *)spi_update_buffer, p.size, p.spi_addr, 0, p.bus, p.cs);
	if (memcmp((void *)p.memory_addr, (void *)spi_update_buffer, p.size)) {
		return SPI_OP_COMP_FAIL;
	}

	return SPI_OP_OK;
}

static enum spi_op_result op_update_verify_na(struct delayed_spi_params p)
{
	op_update(p);

	//Readout and compare and verify
	spi_nor_read((void *)spi_update_buffer, p.size, p.spi_addr, 0, p.bus, p.cs);
	if (memcmp((void *)p.memory_addr, (void *)spi_update_buffer, p.size)) {
		return SPI_OP_COMP_FAIL;
	}

	return SPI_OP_OK;
}

static int op_callback(int *op_counter)
{
	const uint64_t tcallback_tmax = block_ops[block_op_cnt].dc.max_usec_time;
	int (*cb_cont)(void *) = block_ops[block_op_cnt].dc.callback_continuous;
	void *cb_cont_params = block_ops[block_op_cnt].dc.continuous_ptr;
	bool time_tracking = block_ops[block_op_cnt].dc.time_tracking;

	int64_t tcallback_tleft;
	uint64_t tcallback_duration;

	enum spi_op_result res = SPI_OP_OK;
	int spi_cb_ret;

	if (cb_cont != NULL) {
		tcallback_tleft = tcallback_tmax;
		while (true) {
			tcallback_duration = get_usecs();
			spi_cb_ret = cb_cont(cb_cont_params);
			tcallback_duration = get_usecs() - tcallback_duration;

			tcallback_tleft -= tcallback_duration;
			if (spi_cb_ret == SPI_OP_CALLBACK_CONTINUE) {
				*op_counter = 0;
				if (!time_tracking)
					break;
				if (tcallback_tleft < tcallback_duration)
					break;
			} else if (spi_cb_ret == SPI_OP_CALLBACK_FINISHED) {
				*op_counter = SPI_OP_COUNT;
				break;
			} else {
				*op_counter = SPI_OP_COUNT;
				res = SPI_OP_FAIL;
				ERROR("%s: Error during callback\n", __func__);
				break;
			}
		}
	} else {
		spi_op_cnt = SPI_OP_COUNT;
	}

	return res;
}

#define CALC_MOVING_AVERAGE(avg, count, val) \
	(((avg)*(count)) + (val)) / ((count + 1))

static int async_tim_handler(int tim)
{
	uint64_t async_handler_start = get_usecs();
	uint64_t async_handler_time_total = 0;

	enum spi_op_result res = SPI_OP_OK;
	uint32_t bus = (uint32_t)spi_ops[spi_op_cnt].op_config.bus;

	//In error case try to lock bus later
	if (spi_dev_lock(bus)) {
		ERROR("%s: SPI_%d: Lock failed\n", __func__, bus);
		timer_start(timer_hd);
		return 0;
	}

	if (octeontx_ctr_sem_try_lock(&octeontx_smc_spi_lock) != 0) {
		ERROR("%s: SPI_%d: Sem Lock failed\n", __func__, bus);
		spi_dev_unlock(bus);
		timer_start(timer_hd);
		return 0;
	}

	switch (spi_ops[spi_op_cnt].type) {
	case SPI_OP_ERASE:
		res = op_erase(spi_ops[spi_op_cnt].op_config);
		break;
	case SPI_OP_PROGRAM:
		res = op_program(spi_ops[spi_op_cnt].op_config);
		break;
	case SPI_OP_UPDATE:
		res = op_update(spi_ops[spi_op_cnt].op_config);
		break;
	case SPI_OP_READ:
		res = op_read(spi_ops[spi_op_cnt].op_config);
		break;
	case SPI_OP_UPDATE_VERIFY:
		res = op_update_verify(spi_ops[spi_op_cnt].op_config);
		break;
	case SPI_OP_UPDATE_VERIFY_NA:
		res = op_update_verify_na(spi_ops[spi_op_cnt].op_config);
		break;
	case SPI_OP_NONE:
		spi_op_cnt = SPI_OP_COUNT;
		break;
	case SPI_OP_CALLBACK:
		res = op_callback(&spi_op_cnt);
		break;
	default:
		INFO("%s: Unsupported op: %d\n", __func__, spi_op_cnt);
		break;
	}

	//Skip current vlock in case of failure?
	if (res != SPI_OP_OK) {
		ERROR("Fail during SPI async operation SPI_%lld:%lld\n", spi_ops[spi_op_cnt].op_config.bus, spi_ops[spi_op_cnt].op_config.cs);
		ERROR("Operation: %d, block: %d, type: %d\n", spi_op_cnt, block_op_cnt, spi_ops[spi_op_cnt].type);
	}

	if (spi_op_cnt < SPI_OP_COUNT) {
		spi_op_cnt++;
		timer_start(timer_hd);
	} else {
		spi_async_block_completed(false);
	}

	async_handler_time_total = get_usecs() - async_handler_start;

	if (async_handler_time_total > aperf_counter.time_max)
		aperf_counter.time_max = async_handler_time_total;

	if (async_handler_time_total < aperf_counter.time_min)
		aperf_counter.time_min = async_handler_time_total;

	aperf_counter.time_avg = CALC_MOVING_AVERAGE(aperf_counter.time_avg,
						     aperf_counter.time_count,
						     async_handler_time_total);
	aperf_counter.time_count++;
	aperf_counter.total_time += async_handler_time_total;

	spi_dev_unlock(bus);
	octeontx_ctr_sem_unlock(&octeontx_smc_spi_lock);

	return 0;
}

static void tim_init(void)
{
	if (!tim_initialized) {
		timer_hd = timer_create(TM_ONE_SHOT, SPI_OP_SLEEP_TIME_MS, async_tim_handler);
		tim_initialized = 1;
	}
	if ((int)timer_hd < 0) {
		ERROR("%s: async SPI can't create new timer\n", __func__);
	} else {
		INFO("%s: async SPI using timeout timer: %d\n", __func__, timer_hd);
		timer_start(timer_hd);
		delayed_spi_in_progress = 1;
	}
}

static void spi_calculate_update_params(struct delayed_spi_params *p, uint64_t *addr,
					uint64_t *buffer, uint64_t *size)
{
	uint64_t page_addr = *addr & (~SPI_PAGE_ALIGN);
	uint64_t data_offset = *addr - page_addr;
	uint64_t next_page = page_addr + SPI_ERASE_SIZE;
	uint64_t data_left = next_page - data_offset;

	if (*size < SPI_ERASE_SIZE) {
		data_left = *size;
	}

	p->spi_addr = *addr;
	p->memory_addr = *buffer;
	p->size = data_left;

	*buffer += data_left;
	*size -= data_left;
	*addr += data_left;
}

static void spi_update_delayed(uint64_t addr, uint64_t size, uint64_t buffer, int bus, int cs)
{
	int op_size = 1, so_op_count, calc_done = 0, i = 0;

	//In update we need single op for
	//update and verify
	do {
		so_op_count = size / (op_size*SPI_ERASE_SIZE);
		if (so_op_count < (SPI_OP_COUNT))
			calc_done = 1;
		else
			op_size += 1;

		if (so_op_count == 0)
			so_op_count = 1;

	} while (!calc_done);

	while (size) {
		if (addr & SPI_PAGE_ALIGN || size < SPI_ERASE_SIZE) {
			spi_ops[i].type = SPI_OP_UPDATE_VERIFY_NA;
			spi_calculate_update_params(&spi_ops[i].op_config, &addr, &buffer, &size);
			spi_ops[i].op_config.bus = bus;
			spi_ops[i].op_config.cs = cs;
			i++;
		} else {
			//Write full block
			spi_ops[i].type = SPI_OP_UPDATE_VERIFY;
			spi_ops[i].op_config.spi_addr = addr;
			spi_ops[i].op_config.memory_addr = buffer;
			spi_ops[i].op_config.size = SPI_ERASE_SIZE*op_size;
			spi_ops[i].op_config.erase_block_count = op_size;
			spi_ops[i].op_config.bus = bus;
			spi_ops[i].op_config.cs = cs;
			i++;
			//Update params
			addr += SPI_ERASE_SIZE*op_size;
			size -= SPI_ERASE_SIZE*op_size;
			buffer += SPI_ERASE_SIZE*op_size;
		}

	}
}

static void spi_write_delayed(uint64_t addr, uint64_t size, uint64_t buffer, int bus, int cs)
{
	int op_size = 1, so_op_count, calc_done = 0, i = 0;

	do {
		so_op_count = size / (op_size*SPI_ERASE_SIZE);
		if (so_op_count < (SPI_OP_COUNT / 2))
			calc_done = 1;
		else
			op_size += 1;

		if (so_op_count == 0)
			so_op_count = 1;

	} while (!calc_done);

	while (size) {
		if (addr & SPI_PAGE_ALIGN || size < SPI_ERASE_SIZE) {
			spi_ops[i].type = SPI_OP_UPDATE;
			spi_calculate_update_params(&spi_ops[i].op_config, &addr, &buffer, &size);
			spi_ops[i].op_config.bus = bus;
			spi_ops[i].op_config.cs = cs;
			i++;
		} else {
			//Erase full block
			spi_ops[i].type = SPI_OP_ERASE;
			spi_ops[i].op_config.spi_addr = addr;
			spi_ops[i].op_config.erase_block_count = op_size;
			i++;
			//Write full block
			spi_ops[i].type = SPI_OP_PROGRAM;
			spi_ops[i].op_config.spi_addr = addr;
			spi_ops[i].op_config.memory_addr = buffer;
			spi_ops[i].op_config.size = SPI_ERASE_SIZE*op_size;
			spi_ops[i].op_config.bus = bus;
			spi_ops[i].op_config.cs = cs;
			i++;
			//Update params
			addr += SPI_ERASE_SIZE*op_size;
			size -= SPI_ERASE_SIZE*op_size;
			buffer += SPI_ERASE_SIZE*op_size;
		}
	}
}

static void spi_read_delayed(uint64_t addr, uint64_t size, uint64_t buffer, int bus, int cs)
{
	int op_size = 1, so_op_count, calc_done = 0, i = 0;

	do {
		so_op_count = size / (op_size*SPI_ERASE_SIZE);
		if (so_op_count < (SPI_OP_COUNT / 2))
			calc_done = 1;
		else
			op_size += 1;

		if (so_op_count == 0)
			so_op_count = 1;

	} while (!calc_done);

	while (size) {
		spi_ops[i].type = SPI_OP_READ;
		spi_ops[i].op_config.spi_addr = addr;
		spi_ops[i].op_config.memory_addr = buffer;
		spi_ops[i].op_config.bus = bus;
		spi_ops[i].op_config.cs = cs;
		if (size > SPI_ERASE_SIZE*op_size) {
			spi_ops[i].op_config.size = SPI_ERASE_SIZE*op_size;
			size -= SPI_ERASE_SIZE*op_size;
			addr += SPI_ERASE_SIZE*op_size;
			buffer += SPI_ERASE_SIZE*op_size;
		} else {
			spi_ops[i].op_config.size = size;
			size = 0;
		}
		i++;
	}
}



static void spi_async_block_completed(bool start)
{
	bool restart_timer = false;
	int cb_ret = 0;
	int cb_init_ret = 0;
	enum spi_dc_ret callback_ret = DC_RET_DONE;

	if (!start && block_ops[block_op_cnt].block_callback != NULL) {
		block_ops[block_op_cnt].status = BLOCK_STATUS_FINISHED_OK;
		cb_ret = block_ops[block_op_cnt].block_callback(
						       block_ops[block_op_cnt].block_cb_params,
						       block_op_cnt,
						       &block_ops[block_op_cnt].param);
	}

	if (!start) {
		INFO("%s: Block: %d completed.\n", __func__, block_op_cnt);
		block_op_cnt++;
		block_ops[block_op_cnt].status = BLOCK_STATUS_PROCESSING;
	} else {
		block_ops[block_op_cnt].status = BLOCK_STATUS_PROCESSING;
	}

	if (block_ops[block_op_cnt].type == BLOCK_CALLBACK) {
		if (!block_ops[block_op_cnt].dc.initial_executed) {
			block_ops[block_op_cnt].dc.initial_executed = true;
			if (block_ops[block_op_cnt].dc.callback_initial != NULL)
				cb_init_ret = block_ops[block_op_cnt].dc.callback_initial(
						block_ops[block_op_cnt].dc.initial_ptr);
		}
	}

	spi_init_l2_desc();
	spi_config(0, 0, 0, 0, block_ops[block_op_cnt].param.bus, block_ops[block_op_cnt].param.cs);
	switch (block_ops[block_op_cnt].type) {
	case BLOCK_WRITE_SPI:
		spi_write_delayed(block_ops[block_op_cnt].param.spi_addr,
				block_ops[block_op_cnt].param.size,
				block_ops[block_op_cnt].param.memory_addr,
				block_ops[block_op_cnt].param.bus,
				block_ops[block_op_cnt].param.cs);
		restart_timer = true;
		break;
	case BLOCK_READ_SPI:
		spi_read_delayed(block_ops[block_op_cnt].param.spi_addr,
				block_ops[block_op_cnt].param.size,
				block_ops[block_op_cnt].param.memory_addr,
				block_ops[block_op_cnt].param.bus,
				block_ops[block_op_cnt].param.cs);
		restart_timer = true;
		break;
	case BLOCK_UPDATE_SPI:
		spi_update_delayed(block_ops[block_op_cnt].param.spi_addr,
				block_ops[block_op_cnt].param.size,
				block_ops[block_op_cnt].param.memory_addr,
				block_ops[block_op_cnt].param.bus,
				block_ops[block_op_cnt].param.cs);
		restart_timer = true;
		break;
	case BLOCK_CALLBACK:
		if (cb_init_ret == SPI_OP_CALLBACK_CONTINUE) {
			spi_ops[0].type = SPI_OP_CALLBACK;
			spi_ops[1].type = SPI_OP_CALLBACK;
		}
		restart_timer = true;
		break;
	default:
		break;
	}

	/* Make sure ATF will use correct opcommand */
	prepare_opcomands(block_ops[block_op_cnt].param.bus,
			  block_ops[block_op_cnt].param.cs,
			  block_ops[block_op_cnt].param.spi_addr + block_ops[block_op_cnt].param.size);

	if (cb_ret) {
		/* Error condition ignore callback_ret value */
		ERROR("%s: Stopping due to callback error\n", __func__);
		if (delayed_callback != NULL)
			delayed_callback(callback_params);

		delayed_callback = NULL;
		delayed_spi_in_progress = 0;
	} else {
		if (restart_timer) {
			tim_init();
		} else {
			block_op_cnt = 0;
			spi_init_l1_desc();
			spi_init_l2_desc();

			if (delayed_callback != NULL)
				callback_ret = delayed_callback(callback_params);

			if (callback_ret == DC_RET_DONE) {
				delayed_callback = NULL;
				delayed_spi_in_progress = 0;

				INFO("%s: Block chain completed\n", __func__);
				INFO("Block chain stats:\nTime MIN: %lldus\n"
				"Time MAX: %lldus\nTime AVG: %lldus\n"
				"Total: %lldus\n",
					aperf_counter.time_min,
					aperf_counter.time_max,
					aperf_counter.time_avg,
					aperf_counter.total_time);
			} else {
				tim_init();
			}
		}
	}
}
/**
 * Create callback descriptor for async SPI operations
 *
 * @param	callback		callback function - executed after completing block
 *					Callback params:
 *					void* - pointer to user data
 *					int - current block number
 *					struct delayed_block_params* - pointer to structure
 *								describing performed operation
 *					returns callback status. Value not equal to 0 will break
 *					async execution with error, and call last transfer callback.
 * @param	cb_params		pointer to user callback params
 * @param	callback_init		callback_init fuction - executed as first callback
 * 					Callback params:
 * 					void* - pointer to userdata
 * 					returns callback status. Value other than
 * 					SPI_OP_CALLBACK_CONTINUE will finish current block
 * @param	cb_init			pointer to init callback params
 * @param	callback_cont		callback_cont fuction - executed as continous callback
 * 					Callback params:
 * 					void* - pointer to userdata
 * 					returns callback status. Value other than
 * 					SPI_OP_CALLBACK_CONTINUE will finish current block
 * @param	cb_cont			pointer to continous callback params
 * @param	callback_tmax_usec	Max duration of time tracking block. if set to 0 time
 * 					tracking will be disabled.
 */
void spi_async_add_block_callback(int (*callback)(void*, int, struct delayed_block_params *),
				  void *cb_params,
				  int (*callback_init)(void *), void *cb_init,
				  int (*callback_cont)(void *), void *cb_cont,
				  uint64_t callback_tmax_usec)

{
	block_ops[block_op_cnt].type = BLOCK_CALLBACK;
	block_ops[block_op_cnt].status = BLOCK_STATUS_PENDING;
	block_ops[block_op_cnt].block_callback = callback;
	block_ops[block_op_cnt].block_cb_params = cb_params;
	block_ops[block_op_cnt].param.spi_addr = 0;
	block_ops[block_op_cnt].param.memory_addr = 0;
	block_ops[block_op_cnt].param.size = 0;
	block_ops[block_op_cnt].param.bus = 0;
	block_ops[block_op_cnt].param.cs = 0;

	block_ops[block_op_cnt].dc.initial_executed = false;
	block_ops[block_op_cnt].dc.callback_initial = callback_init;
	block_ops[block_op_cnt].dc.callback_continuous = callback_cont;
	block_ops[block_op_cnt].dc.initial_ptr = cb_init;
	block_ops[block_op_cnt].dc.continuous_ptr = cb_cont;

	block_ops[block_op_cnt].dc.max_usec_time = callback_tmax_usec;
	block_ops[block_op_cnt].dc.time_tracking =
				callback_tmax_usec != 0 ? true : false;

	block_op_cnt++;

	INFO("%s: Adding spi callback block: %d\n", __func__, (block_op_cnt-1));
}

/**
 * Create write transfer descriptor for async SPI operations
 *
 * @param[in]	bus		spi bus
 * @param	cs		spi cs
 * @param	spi_addr	Address where data will be written
 * @param	mem_addr	Address of memory buffer
 * @param	data_size	Size of the data to be written
 * @param	callback	callback function - executed after completing block
 * 				Callback params:
 * 				void* - pointer to user data
 * 				int - current block number
 * 				struct delayed_block_params* - pointer to structure 
 * 								describing performed operation
 * 				returns callback status. Value not equal to 0 will break
 * 				async execution with error, and call last transfer callback.
 * @param	cb_params	pointer to user callback params
 */
void spi_async_add_block_write(int bus, int cs, uint64_t spi_addr, void *mem_addr,
			       uint64_t size,
			       int (*callback)(void*, int, struct delayed_block_params *),
			       void *cb_params)
{
	uint64_t maddr = (uint64_t)mem_addr;

	block_ops[block_op_cnt].type = BLOCK_WRITE_SPI;
	block_ops[block_op_cnt].status = BLOCK_STATUS_PENDING;
	block_ops[block_op_cnt].block_callback = callback;
	block_ops[block_op_cnt].block_cb_params = cb_params;
	block_ops[block_op_cnt].param.spi_addr = spi_addr;
	block_ops[block_op_cnt].param.memory_addr = maddr;
	block_ops[block_op_cnt].param.size = size;
	block_ops[block_op_cnt].param.bus = bus;
	block_ops[block_op_cnt].param.cs = cs;
	block_op_cnt++;

	INFO("%s: Adding spi%d:%d write block: %d: from: %llx, spiaddr: %llx, size: %llx\n",
								__func__,
								bus, cs,
								(block_op_cnt-1),
								maddr,
								spi_addr, size);
}

/**
 * Create write transfer descriptor for async SPI operations
 *
 * @param[in]	bus		spi bus
 * @param	cs		spi cs
 * @param	spi_addr	Address from where data will be read
 * @param	mem_addr	Address of memory buffer
 * @param	data_size	Size of the data to be read
 * @param	callback	callback function - executed after completing block
 * 				Callback params:
 * 				void* - pointer to user data
 * 				int - current block number
 * 				struct delayed_block_params* - pointer to structure 
 * 								describing performed operation
 * 				returns callback status. Value not equal to 0 will break
 * 				async execution with error, and call last transfer callback.
 * @param	cb_params	pointer to user callback params
 */
void spi_async_add_block_read(int bus, int cs, uint64_t spi_addr, void *mem_addr,
			      uint64_t size,
			      int (*callback)(void*, int, struct delayed_block_params *),
			      void *cb_params)
{
	uint64_t maddr = (uint64_t)mem_addr;

	block_ops[block_op_cnt].type = BLOCK_READ_SPI;
	block_ops[block_op_cnt].status = BLOCK_STATUS_PENDING;
	block_ops[block_op_cnt].block_callback = callback;
	block_ops[block_op_cnt].block_cb_params = cb_params;
	block_ops[block_op_cnt].param.spi_addr = spi_addr;
	block_ops[block_op_cnt].param.memory_addr = maddr;
	block_ops[block_op_cnt].param.size = size;
	block_ops[block_op_cnt].param.bus = bus;
	block_ops[block_op_cnt].param.cs = cs;
	block_op_cnt++;

	INFO("%s: Adding spi%d:%d read block: %d: from: %llx, spiaddr: %llx, size: %llx\n",
								__func__,
								bus, cs,
								(block_op_cnt-1),
								maddr,
								spi_addr, size);
}

/**
 * Create write transfer descriptor for async SPI operations
 *
 * @param[in]	bus		spi bus
 * @param	cs		spi cs
 * @param	spi_addr	Address from where data will be read
 * @param	mem_addr	Address of memory buffer
 * @param	data_size	Size of the data to be read
 * @param	callback	callback function - executed after completing block
 *				Callback params:
 *				void* - pointer to user data
 *				int - current block number
 *				struct delayed_block_params* - pointer to structure
 *								describing performed operation
 *				returns callback status. Value not equal to 0 will break
 *				async execution with error, and call last transfer callback.
 * @param	cb_params	pointer to user callback params
 */
void spi_async_add_block_update(int bus, int cs, uint64_t spi_addr, void *mem_addr,
			      uint64_t size,
			      int (*callback)(void*, int, struct delayed_block_params *),
			      void *cb_params)
{
	uint64_t maddr = (uint64_t)mem_addr;

	block_ops[block_op_cnt].type = BLOCK_UPDATE_SPI;
	block_ops[block_op_cnt].status = BLOCK_STATUS_PENDING;
	block_ops[block_op_cnt].block_callback = callback;
	block_ops[block_op_cnt].block_cb_params = cb_params;
	block_ops[block_op_cnt].param.spi_addr = spi_addr;
	block_ops[block_op_cnt].param.memory_addr = maddr;
	block_ops[block_op_cnt].param.size = size;
	block_ops[block_op_cnt].param.bus = bus;
	block_ops[block_op_cnt].param.cs = cs;
	block_op_cnt++;

	INFO("%s: Adding spi%d:%d update block: %d: from: %llx, spiaddr: %llx, size: %llx\n",
								__func__,
								bus, cs,
								(block_op_cnt-1),
								maddr,
								spi_addr, size);
}

/**
 * Initialize internal data structures.
 * Should be called before starting configuring new transfer chain.
 */
int spi_async_init_delayed(void)
{

	if (delayed_spi_in_progress) {
		INFO("%s: Delayed op in progress\n", __func__);
		return 1;
	}

	spi_init_l1_desc();
	spi_init_l2_desc();

	INFO("%s: delayed op init completed\n", __func__);
	return 0;
}

/**
 * Start async spi operation.
 * Start SPI operations in timer callback.
 *
 * @param	block_callback	callback function - executed after completing whole transfer chain
 * 				Callback params:
 * 				void* - pointer to user data
 * @param	params		pointer to user callback params
 */
void spi_async_start(enum spi_dc_ret (*block_callback)(void *), void *params)
{
	INFO("%s: Starting delayed spi\n", __func__);
	aperf_counter.time_min = 0xFFFFFFFFFFFFFFFF;
	aperf_counter.time_max = 0;
	aperf_counter.time_avg = 0;
	aperf_counter.time_count = 0;
	aperf_counter.total_time = 0;

	block_op_cnt = 0;
	delayed_callback = block_callback;
	callback_params = params;
	spi_async_block_completed(true);
}

bool spi_async_working(void)
{
	return delayed_spi_in_progress;
}
