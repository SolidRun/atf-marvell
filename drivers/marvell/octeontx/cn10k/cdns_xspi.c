/***********************license start***********************************
 * Copyright (C) 2021 Marvell International Ltd.
 * SPDX-License-Identifier: BSD-3-Clause
 * https://spdx.org/licenses
 **********************license end**************************************/

#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <spi.h>
#include <drivers/delay_timer.h>
#include <octeontx_common.h>
#include <drivers/io/io_storage.h>
#include <assert.h>
#include <drivers/io/io_driver.h>
#include <debug.h>
#include <plat_board_cfg.h>

#include "cavm-csrs-gpio.h"
#include "cavm-csrs-spi.h"
#include "cavm-csrs-rst.h"

#define CDNS_XSPI_AUTO_PIO_VAL 0x01
#define CDNS_XSPI_AUTO_PIO_OFFSET 30
#define CDNS_XSPI_AUTO_BANK_OFFSET 20
#define CDNS_XSPI_AUTO_ERASE_CMD 0x1000

#define CDNS_XSPI_AUTO_STATUS_COMPLETED_OFFSET 15
#define CNNS_XSPI_AUTO_STATUS_FAIL_OFFSET 14
#define CDNS_XSPI_MAGIC_NUMBER 0x6522
#define MEMORY_ALIGN_TO             (8)
#define DIRECT_SIZE                 (0x10000)
#define min(a, b)	(((a) > (b)) ? (b) : (a))

#define CDNS_XSPI_CLOCK_IO_Hz 800000000
#define CDNS_XSPI_CLOCK_DIVIDED(div) ((CDNS_XSPI_CLOCK_IO_Hz)/(div))

#define SPINOR_OP_BE_4K_4B      0x21
#define SPINOR_OP_PP_4B	        0x12
#define SPINOR_OP_PP_1_4_4_4B	0x3e
#define SPINOR_OP_READ_4B       0x13
#define SPINOR_OP_READ_1_4_4_4B	0xec

#define SPI_OP_DIRECT_TIMEOUT_MS 5
#define SPI_OP_IDLE_TIMEOUT_MS 100

static file_state_t current_file = { 0 };

uint32_t spi_mode;

enum direct_mode_operation {
	CDNS_DIRECT_WRITE,
	CDNS_DIRECT_READ
};

enum cdns_xspi_mode {
	XSPI_MODE_DIRECT = 0x00,
	XSPI_MODE_AUTO = 0x03,
	XSPI_MODE_STIG = 0x01,
};

const int cdns_xspi_clk_div_list[] = {
	4,	//0x0 = Divide by 4.   SPI clock is 200 MHz.
	6,	//0x1 = Divide by 6.   SPI clock is 133.33 MHz.
	8,	//0x2 = Divide by 8.   SPI clock is 100 MHz.
	10,	//0x3 = Divide by 10.  SPI clock is 80 MHz.
	12,	//0x4 = Divide by 12.  SPI clock is 66.666 MHz.
	16,	//0x5 = Divide by 16.  SPI clock is 50 MHz.
	18,	//0x6 = Divide by 18.  SPI clock is 44.44 MHz.
	20,	//0x7 = Divide by 20.  SPI clock is 40 MHz.
	24,	//0x8 = Divide by 24.  SPI clock is 33.33 MHz.
	32,	//0x9 = Divide by 32.  SPI clock is 25 MHz.
	40,	//0xA = Divide by 40.  SPI clock is 20 MHz.
	50,	//0xB = Divide by 50.  SPI clock is 16 MHz.
	64,	//0xC = Divide by 64.  SPI clock is 12.5 MHz.
	128,	//0xD = Divide by 128. SPI clock is 6.25 MHz.
	-1	//End of list
};

static int cdns_xspi_wait_for_controller_idle(int spi_con)
{
	uint32_t timeout = SPI_OP_IDLE_TIMEOUT_MS * 100;
	union cavm_spix_ctrl_cmd_stat_ctrl_status spi_status;

	do {
		spi_status.u = CSR_READ(CAVM_SPIX_CTRL_CMD_STAT_CTRL_STATUS(spi_con));
		if (spi_status.s.ctrl_busy) {
			udelay(10);
			timeout--;
		}
	} while (spi_status.s.ctrl_busy);

	if (timeout == 0)
		return -1;
	else
		return 0;
}

static int cdns_xspi_wait_for_auto_complete(int spi_con)
{
	int ret;
	bool cmd_done = false;
	union cavm_spix_ctrl_cmd_stat_cmd_status auto_cmd_status;

	while (!cmd_done) {
		auto_cmd_status.u = CSR_READ(CAVM_SPIX_CTRL_CMD_STAT_CMD_STATUS(spi_con));
		if (auto_cmd_status.u & (1<<CDNS_XSPI_AUTO_STATUS_COMPLETED_OFFSET)) {
			ret = 0;
			cmd_done = true;
		} else if (auto_cmd_status.u & (1<<CNNS_XSPI_AUTO_STATUS_FAIL_OFFSET)) {
			printf("%s: Auto command fail\n", __func__);
			ret = -1;
			cmd_done = true;
		}
	}
	return ret;
}

static int cdns_xspi_wait_for_direct_engine_ready(int spi_con)
{
	uint32_t timeout = SPI_OP_DIRECT_TIMEOUT_MS * 100;

	CSR_INIT(ctrl_stat, CAVM_SPIX_CTRL_CMD_STAT_CTRL_STATUS(spi_con));

	do {
		ctrl_stat.u = CSR_READ(CAVM_SPIX_CTRL_CMD_STAT_CTRL_STATUS(spi_con));
		if (ctrl_stat.s.gcmd_eng_busy) {
			udelay(10);
			timeout--;
		}
	} while (ctrl_stat.s.gcmd_eng_busy && (timeout != 0));

	if (timeout == 0)
		return -1;
	else
		return 0;
}

// Find max avalible clocl
static bool cdns_xspi_setup_clock(int requested_clk, int spi_con)
{
	int i = 0;
	int clk_val;
	bool update_clk;

	CSR_INIT(clk_ctrl, CAVM_SPIX_CLK_CTRL(spi_con));

	INFO("%s: Requested clk for SPI%d: %d\n", __func__, spi_con, requested_clk);
	while (cdns_xspi_clk_div_list[i] > 0) {
		clk_val = CDNS_XSPI_CLOCK_DIVIDED(cdns_xspi_clk_div_list[i]);
		if (clk_val <= requested_clk)
			break;
		i++;
	}

	if (cdns_xspi_clk_div_list[i] == -1) {
		printf("%s: Unable to find clock divider - setting 6MHz\n", __func__);
		i--;
	} else {
		INFO("%s: Found clk div: %d, clk val: %d\n", __func__,
				cdns_xspi_clk_div_list[i],
				CDNS_XSPI_CLOCK_DIVIDED(cdns_xspi_clk_div_list[i]));
	}

	if (clk_ctrl.s.spi_io_clk_div != i) {
		clk_ctrl.s.spi_io_clk_div = i;
		update_clk = true;
	}

	if (clk_ctrl.s.spi_clk_en != 1) {
		clk_ctrl.s.spi_clk_en = 1;
		update_clk = true;
	}

	if (update_clk) {
		CSR_WRITE(CAVM_SPIX_CLK_CTRL(spi_con), clk_ctrl.u);
	}

	return update_clk;
}

static bool cdns_xspi_verify_cs(int spi_con, int cs)
{
	CSR_INIT(direct_config, CAVM_SPIX_CMN_SEQ_REGS_DIRECT_ACCESS_CFG(spi_con));

	if (direct_config.s.dac_bank_num == cs)
		return true;
	else
		return false;
}

static int cdns_xspi_set_mode(int spi_con, enum cdns_xspi_mode m)
{
	union cavm_spix_ctrl_cfg_common_ctrl_config work_mode;

	cdns_xspi_wait_for_controller_idle(spi_con);
	work_mode.u = CSR_READ(CAVM_SPIX_CTRL_CFG_COMMON_CTRL_CONFIG(spi_con));
	work_mode.s.work_mode = m;
	CSR_WRITE(CAVM_SPIX_CTRL_CFG_COMMON_CTRL_CONFIG(spi_con), work_mode.u);

	return 0;
}

static void update_spi_op_read_params(int spi_con, int mode)
{
	/* Discovery Debug */
	CSR_INIT(read_seq_0, CAVM_SPIX_DEV_SEQ_REGS_READ_SEQ_CFG_0(spi_con));
	CSR_INIT(read_seq_1, CAVM_SPIX_DEV_SEQ_REGS_READ_SEQ_CFG_1(spi_con));

	if (mode) {
		/* Force x1 mode */
		/* set all lines to one bit, use 4-bit address, use 0x13 read cmd */
		read_seq_0.s.read_seq_p1_cmd_ios = 0;
		read_seq_0.s.read_seq_p1_addr_ios = 0;
		read_seq_0.s.read_seq_p1_data_ios = 0;
		read_seq_0.s.read_seq_p1_addr_cnt = 4;
		read_seq_0.s.read_seq_p1_dummy_cnt = 0;
		read_seq_0.s.read_seq_p1_cmd_val = SPINOR_OP_READ_4B;

		/* disable dummy bits, disable command extension */
		read_seq_1.s.read_seq_p1_mb_en = 0;
		read_seq_1.s.read_seq_p1_mb_dummy_cnt = 0;
		read_seq_1.s.read_seq_p1_cmd_ext_en = 0;
	} else {
		//set addr and data to x4, use quad fast read cmd, 4-byte addr
		read_seq_0.s.read_seq_p1_cmd_ios = 0; // 0 = x1
		read_seq_0.s.read_seq_p1_addr_ios = 2; // 2 = x4
		read_seq_0.s.read_seq_p1_data_ios = 2; // 2 = x4
		read_seq_0.s.read_seq_p1_cmd_val = SPINOR_OP_READ_1_4_4_4B;
		read_seq_0.s.read_seq_p1_addr_cnt = 4;
	}

	CSR_WRITE(CAVM_SPIX_DEV_SEQ_REGS_READ_SEQ_CFG_0(spi_con), read_seq_0.u);
	CSR_WRITE(CAVM_SPIX_DEV_SEQ_REGS_READ_SEQ_CFG_1(spi_con), read_seq_1.u);
}

static void update_spi_op_prog_params(int spi_con, int mode)
{
	/* Discovery Debug */
	CSR_INIT(prog_seq_0, CAVM_SPIX_DEV_SEQ_REGS_PROG_SEQ_CFG_0(spi_con));
	CSR_INIT(prog_seq_1, CAVM_SPIX_DEV_SEQ_REGS_PROG_SEQ_CFG_1(spi_con));

	if (mode) {
		/* Force x1 mode */
		/* set all lines to one bit, use 4-bit address, use 0x12 program cmd */
		prog_seq_0.s.prog_seq_p1_cmd_ios = 0;
		prog_seq_0.s.prog_seq_p1_addr_ios = 0;
		prog_seq_0.s.prog_seq_p1_data_ios = 0;
		prog_seq_0.s.prog_seq_p1_addr_cnt = 4;
		prog_seq_0.s.prog_seq_p1_dummy_cnt = 0;
		prog_seq_0.s.prog_seq_p1_cmd_val = SPINOR_OP_PP_4B;

		/* disable dummy bits, disable command extension */
		prog_seq_1.s.prog_seq_p1_cmd_ext_en = 0;
	} else {
		prog_seq_0.s.prog_seq_p1_cmd_ios = 0;
		prog_seq_0.s.prog_seq_p1_addr_ios = 2;
		prog_seq_0.s.prog_seq_p1_data_ios = 2;
		prog_seq_0.s.prog_seq_p1_addr_cnt = 4;
		prog_seq_0.s.prog_seq_p1_cmd_val = SPINOR_OP_PP_1_4_4_4B;
	}

	CSR_WRITE(CAVM_SPIX_DEV_SEQ_REGS_PROG_SEQ_CFG_0(spi_con), prog_seq_0.u);
	CSR_WRITE(CAVM_SPIX_DEV_SEQ_REGS_PROG_SEQ_CFG_1(spi_con), prog_seq_1.u);
}

static int cdns_xspi_config(int spi_con, int cs, bool phy_training, int mode)
{
	union cavm_spix_ctrl_consts_spi_ctrl_version hw_version;
	union cavm_spix_cmn_seq_regs_direct_access_cfg direct_config;
	union cavm_spix_ctrl_cfg_common_discovery_control discovery_ctrl;
	union cavm_spix_ctrl_cmd_stat_ctrl_status spi_status;
	int safemode;

	hw_version.u = CSR_READ(CAVM_SPIX_CTRL_CONSTS_SPI_CTRL_VERSION(spi_con));
	discovery_ctrl.u = CSR_READ(CAVM_SPIX_CTRL_CFG_COMMON_DISCOVERY_CONTROL(spi_con));

	if (hw_version.s.spi_ctrl_magic_number != CDNS_XSPI_MAGIC_NUMBER) {
		WARN("xSPI not detected\n");
		return -1;
	}

	/* Run discovery config.
	 * In normal mode use X4
	 * In Legacy or X1 modes use x1
	 */
	discovery_ctrl.s.discovery_req = 1;
	discovery_ctrl.s.discovery_abnum = 1;
	discovery_ctrl.s.discovery_bank = cs;
	discovery_ctrl.s.discovery_num_lines = 0;
	if (mode & SPI_FORCE_X1_READ ||
	    mode & SPI_FORCE_LEGACY_MODE) {
		discovery_ctrl.s.discovery_num_lines = 1;
		safemode = 1;
	}

	CSR_WRITE(CAVM_SPIX_CTRL_CFG_COMMON_DISCOVERY_CONTROL(spi_con),
		  discovery_ctrl.u);
	do {
		spi_status.u = CSR_READ(CAVM_SPIX_CTRL_CMD_STAT_CTRL_STATUS(spi_con));
	} while (spi_status.s.discovery_busy);


	update_spi_op_read_params(spi_con, safemode);
	update_spi_op_prog_params(spi_con, safemode);

	/* Finish config */
	direct_config.u = CSR_READ(CAVM_SPIX_CMN_SEQ_REGS_DIRECT_ACCESS_CFG(spi_con));
	direct_config.s.dac_bank_num = cs;
	CSR_WRITE(CAVM_SPIX_CMN_SEQ_REGS_DIRECT_ACCESS_CFG(spi_con),
			  direct_config.u);
	cdns_xspi_set_mode(spi_con, XSPI_MODE_DIRECT);

	return 0;
}

static void cdns_xspi_remap_config(bool enabled, uint64_t remap_addr,
								   int spi_con)
{
	union cavm_spix_cmn_seq_regs_direct_access_cfg config;
	union cavm_spix_cmn_seq_regs_direct_access_rmp remap_addr_low;
	union cavm_spix_cmn_seq_regs_direct_access_rmp_1 remap_addr_high;

	config.u = CSR_READ(CAVM_SPIX_CMN_SEQ_REGS_DIRECT_ACCESS_CFG(spi_con));
	remap_addr_low.u = CSR_READ(CAVM_SPIX_CMN_SEQ_REGS_DIRECT_ACCESS_RMP(spi_con));
	remap_addr_high.u = CSR_READ(CAVM_SPIX_CMN_SEQ_REGS_DIRECT_ACCESS_RMP_1(spi_con));

	if (!enabled) {
		remap_addr_low.s.rmp_addr_val = 0x00;
		remap_addr_high.s.rmp_addr_val_1 = 0x00;
		config.s.rmp_addr_en = 0x00;
	} else {
		remap_addr_low.s.rmp_addr_val = remap_addr & 0xffffffff;
		remap_addr_high.s.rmp_addr_val_1 = (remap_addr >> 32) & 0xffffffff;
		config.s.rmp_addr_en = 0x01;
	}

	CSR_WRITE(CAVM_SPIX_CMN_SEQ_REGS_DIRECT_ACCESS_RMP(spi_con),
			  remap_addr_low.u);
	CSR_WRITE(CAVM_SPIX_CMN_SEQ_REGS_DIRECT_ACCESS_RMP_1(spi_con),
			  remap_addr_high.u);
	CSR_WRITE(CAVM_SPIX_CMN_SEQ_REGS_DIRECT_ACCESS_CFG(spi_con),
			  config.u);
}

static int cdns_xspi_memread(void *destination, uint64_t offset,
			      int data_len, int spi_con)
{
	uint64_t tmp = (uint64_t)destination % 8;
	uint64_t *dst = (uint64_t *)destination;
	uint64_t offset_64b = offset / 8;
	uint64_t tmp_data;

	if ((uint64_t)destination % 8 != 0) {
		uint8_t *dst8 = (uint8_t *)destination;
		int i;
		int bytes_to_read;

		while (data_len) {
			if (cdns_xspi_wait_for_direct_engine_ready(spi_con)) {
				WARN("%s: SPI Direct engine read fail\n", __func__);
				return -1;
			}
			bytes_to_read = min(8, data_len);
			tmp_data = CSR_READ(CAVM_SPIX_DIRECT_ACCESSX(spi_con, offset_64b));

			for (i = 0; i < bytes_to_read; i++)
				*dst8++ = tmp_data >> (i * 8);
			data_len -= bytes_to_read;
			offset_64b++;
		}
	} else {
		while (data_len >= 8) {
			if (cdns_xspi_wait_for_direct_engine_ready(spi_con)) {
				WARN("%s: SPI Direct engine read fail\n", __func__);
				return -1;
			}
			*dst++ = CSR_READ(CAVM_SPIX_DIRECT_ACCESSX(spi_con,
								   offset_64b));
			offset_64b++;
			data_len -= 8;
		}
		if (data_len > 0) {
			if (cdns_xspi_wait_for_direct_engine_ready(spi_con)) {
				WARN("%s: SPI Direct engine read fail\n", __func__);
				return -1;
			}
			tmp = CSR_READ(CAVM_SPIX_DIRECT_ACCESSX(spi_con,
								offset_64b));
			memcpy(dst, &tmp, data_len);
		}
	}
	return 0;
}

static int cdns_xspi_memwrite(void *destination, uint64_t offset,
			       int data_len, int spi_con)
{
	uint64_t tmp;
	uint64_t *dst = (uint64_t *)destination;
	uint64_t offset_64b = offset / 8;
	uint8_t *tmpdst;

	if ((uint64_t)destination % 8 != 0) {
		while (data_len) {
			if (cdns_xspi_wait_for_direct_engine_ready(spi_con)) {
				WARN("%s: SPI Direct engine prog fail\n", __func__);
				return -1;
			}
			tmp = 0;
			memcpy(&tmp, dst, min(data_len, 8));
			CSR_WRITE(CAVM_SPIX_DIRECT_ACCESSX(spi_con, offset_64b),
				  tmp);
			data_len = (data_len < 8) ? 0 : (data_len - 8);
			offset_64b++;
			dst++;
		}
		return 0;
	}

	while (data_len) {
		if (data_len >= 8) {
			if (cdns_xspi_wait_for_direct_engine_ready(spi_con)) {
				WARN("%s: SPI Direct engine prog fail\n", __func__);
				return -1;
			}
			CSR_WRITE(CAVM_SPIX_DIRECT_ACCESSX(spi_con, offset_64b),
				  *dst);
			offset_64b++;
			data_len -= 8;
			dst++;
		} else {
			tmpdst = (uint8_t *)dst;
			if (cdns_xspi_wait_for_direct_engine_ready(spi_con)) {
				WARN("%s: SPI Direct engine prog fail\n", __func__);
				return -1;
			}
			tmp = CSR_READ(CAVM_SPIX_DIRECT_ACCESSX(spi_con,
								offset_64b));
			while (data_len) {
				tmp &= ~(0xff << (8 * data_len));
				tmp |= (*tmpdst) << (8 * data_len);
				tmpdst++;
				data_len--;
			}
			if (cdns_xspi_wait_for_direct_engine_ready(spi_con)) {
				WARN("%s: SPI Direct engine prog fail\n", __func__);
				return -1;
			}
			CSR_WRITE(CAVM_SPIX_DIRECT_ACCESSX(spi_con, offset_64b),
				  tmp);
		}
	}
	return 0;
}

static int cdns_xspi_direct_op(uint64_t spi_addr, void *buf, uint64_t read_len,
			       int spi_con, enum direct_mode_operation op)
{
	int ret = 0;
	uint8_t *destination = (uint8_t *)buf;
	uint32_t offset, window_read_len;
	uint64_t window_start, window_end;
	uint8_t total_window_loops;
	uint64_t remap_base_addr = CAVM_SPIX_DIRECT_ACCESSX(spi_con, 0);

	/*Calculate total number of windows for that read */
	total_window_loops = read_len / DIRECT_SIZE;
	if (read_len % DIRECT_SIZE != 0)
		total_window_loops++;

	if (spi_addr % MEMORY_ALIGN_TO != 0) {
		WARN("%s: SPI addr not aligned\n", __func__);
		return -1;
	}

	cdns_xspi_set_mode(spi_con, XSPI_MODE_DIRECT);

	while (total_window_loops) {
	/* Calculate initial window parameter */
		offset = spi_addr % DIRECT_SIZE;
		window_start = spi_addr - offset;
		window_end   = window_start + (DIRECT_SIZE - 1);
		window_read_len =  min((window_end - (offset + window_start) + 1),
								read_len);

		/*Set remapping regisers if necessary*/
		cdns_xspi_remap_config(true, remap_base_addr - window_start, spi_con);
		cdns_xspi_wait_for_direct_engine_ready(spi_con);

		if (op == CDNS_DIRECT_READ)
			ret = cdns_xspi_memread(destination, offset, window_read_len, spi_con);
		else
			ret = cdns_xspi_memwrite(destination, offset, window_read_len, spi_con);

		if (ret) {
			ERROR("%s: SPI fail to process cmd\n", __func__);
			return -1;
		}

		spi_addr += window_read_len;
		read_len -= window_read_len;
		destination += window_read_len;
		total_window_loops -= 1;
	}

	cdns_xspi_remap_config(false, 0, spi_con);
	return 0;
}

static int cdns_xspi_auto_erase(uint64_t spi_addr, uint32_t block_erase_cnt,
								int spi_con, int cs)
{
	CSR_INIT(erase_ctrl, CAVM_SPIX_DEV_SEQ_REGS_ERS_SEQ_CFG_0(spi_con));
	union cavm_spix_ctrl_cmd_stat_cmd_reg0 reg_0;
	union cavm_spix_ctrl_cmd_stat_cmd_reg1 reg_1;
	union cavm_spix_ctrl_cmd_stat_cmd_reg4 reg_4;
	union cavm_spix_ctrl_cmd_stat_cmd_reg5 reg_5;

	cdns_xspi_set_mode(spi_con, XSPI_MODE_AUTO);

	/* Set erase opcmd to 4 byte SPINOR_OP_BE_4K_4B */
	erase_ctrl.s.erss_seq_p1_addr_cnt = 4;
	erase_ctrl.s.erss_seq_p1_cmd_val = SPINOR_OP_BE_4K_4B;

	reg_0.s.cmd0 = CDNS_XSPI_AUTO_PIO_VAL << CDNS_XSPI_AUTO_PIO_OFFSET;
	reg_0.s.cmd0 |= cs << CDNS_XSPI_AUTO_BANK_OFFSET;
	reg_0.s.cmd0 |= CDNS_XSPI_AUTO_ERASE_CMD;

	reg_1.s.cmd1 = spi_addr & 0xffffffff;
	reg_4.s.cmd4 = block_erase_cnt;
	reg_5.s.cmd5 = (spi_addr >> 32) & 0xffffffff;

	CSR_WRITE(CAVM_SPIX_DEV_SEQ_REGS_ERS_SEQ_CFG_0(spi_con), erase_ctrl.u);
	CSR_WRITE(CAVM_SPIX_CTRL_CMD_STAT_CMD_REG5(spi_con), reg_5.u);
	CSR_WRITE(CAVM_SPIX_CTRL_CMD_STAT_CMD_REG4(spi_con), reg_4.u);
	CSR_WRITE(CAVM_SPIX_CTRL_CMD_STAT_CMD_REG1(spi_con), reg_1.u);
	CSR_WRITE(CAVM_SPIX_CTRL_CMD_STAT_CMD_REG0(spi_con), reg_0.u);

	return cdns_xspi_wait_for_auto_complete(spi_con);
}

int spi_config(uint64_t spi_clk, uint32_t mode, int cpol, int cpha,
		      int spi_con, int cs)
{
	bool phy_training = cdns_xspi_setup_clock(spi_clk, spi_con);

	return cdns_xspi_config(spi_con, cs, phy_training, mode);
}

int spi_nor_read(uint8_t *buf, int buf_size, uint32_t addr,
			int addr_len, int spi_con, int cs)
{
	if (!cdns_xspi_verify_cs(spi_con, cs))
		cdns_xspi_config(spi_con, cs, false, spi_mode);
	if (cdns_xspi_direct_op(addr, buf, buf_size, spi_con, CDNS_DIRECT_READ) != 0)
		return -1;
	return buf_size;
}

int spi_nor_write(uint8_t *buf, int buf_size, uint32_t addr,
			int addr_len, int spi_con, int cs)
{
	if (!cdns_xspi_verify_cs(spi_con, cs))
		cdns_xspi_config(spi_con, cs, false, spi_mode);
	if (cdns_xspi_direct_op(addr, buf, buf_size, spi_con, CDNS_DIRECT_WRITE) != 0)
		return -1;
	return buf_size;
}

int spi_nor_erase(uint32_t addr, int addr_len, int spi_con, int cs)
{
	if (!cdns_xspi_verify_cs(spi_con, cs))
		cdns_xspi_config(spi_con, cs, false, spi_mode);
	return cdns_xspi_auto_erase(addr, 0, spi_con, cs);
}


/*
 * APIs to read from SPI NOR flash
 */

/* ---- */

/* Identify the device type as spi */
static io_type_t device_type_spi(void)
{
	return IO_TYPE_SPI;
}

static int spi_block_open(io_dev_info_t *dev_info, const uintptr_t spec,
			     io_entity_t *entity)
{
	int result = -ENOMEM;
	const io_block_spec_t *block_spec = (io_block_spec_t *)spec;

	/* Since we need to track open state for seek() we only allow one open
	 * spec at a time. When we have dynamic memory we can malloc and set
	 * entity->info.
	 */
	if (current_file.in_use == 0) {
		assert(block_spec != NULL);
		assert(entity != NULL);

		current_file.in_use = 1;
		// FIXME current_file.cs = block_spec->offset;
		/* File cursor offset for seek and incremental reads etc. */
		current_file.file_pos = 0;
		current_file.offset_address = block_spec->offset;
		current_file.length = block_spec->length;
		current_file.spi_con = plat_octeontx_bcfg->bcfg.boot_dev.controller;
		current_file.cs = plat_octeontx_bcfg->bcfg.boot_dev.cs;
		entity->info = (uintptr_t)&current_file;

		return spi_config(CONFIG_SPI_FREQUENCY, spi_mode, 0, 0,
				  current_file.spi_con, current_file.cs);
	} else {
		WARN("An SPI device is already active. Close first.\n");
	}

	return result;
}

static int spi_block_seek(io_entity_t *entity, int mode,
			     signed long long offset)
{
	int result = -ENOENT;

	/* We only support IO_SEEK_SET and CUR for the moment. */
	if (mode == IO_SEEK_SET) {
		assert(entity != NULL);

		/* TODO: can we do some basic limit checks on seek? */
		((file_state_t *)entity->info)->file_pos = offset;
		result = 0;
	} else if (mode == IO_SEEK_CUR) {
		assert(entity != NULL);

		/* TODO: can we do some basic limit checks on seek? */
		((file_state_t *)entity->info)->file_pos += offset;
		result = 0;
	}

	return result;
}


static int spi_block_read(io_entity_t *entity, uintptr_t buffer,
			     size_t length, size_t *length_read)
{
	file_state_t *fp;
	ssize_t ret;
	int addr_mode = SPI_ADDRESSING_32BIT;

	assert(entity != NULL);
	assert(buffer != (uintptr_t)NULL);
	assert(length_read != NULL);

	fp = (file_state_t *)entity->info;

	ret = spi_nor_read((void *)buffer, length,
			   fp->offset_address + fp->file_pos,
			   addr_mode, fp->spi_con, fp->cs);
	if (ret < 0)
		return ret;

	*length_read = ret;
	fp->file_pos += ret;

	return 0;
}

static int spi_block_close(io_entity_t *entity)
{
	assert(entity != NULL);

	entity->info = 0;

	/* This would be a mem free() if we had malloc.*/
	memset((void *)&current_file, 0, sizeof(current_file));

	return 0;
}

static int spi_block_size(io_entity_t *entity, size_t *length)
{
	*length = current_file.length;
	return 0;
}

static int spi_dev_init(io_dev_info_t *dev_info, const uintptr_t init_params)
{
	if (init_params != (uintptr_t)NULL)
		spi_mode = *(int *)init_params;
	return 0;
}

static int spi_dev_close(io_dev_info_t *dev_info)
{
	/* NOP */
	/* TODO: Consider tracking open files and cleaning them up here */
	return 0;
}


static const io_dev_funcs_t spi_dev_funcs = {
	.type = device_type_spi,
	.open = spi_block_open,
	.seek = spi_block_seek,
	.size = spi_block_size,
	.read = spi_block_read,
	.write = NULL,
	.close = spi_block_close,
	.dev_init = spi_dev_init,
	.dev_close = spi_dev_close,
};


/* No state associated with this device so structure can be const */
static const io_dev_info_t spi_dev_info = {
	.funcs = &spi_dev_funcs,
	.info = (uintptr_t)NULL
};

/* Open a connection to the spi device */
static int spi_dev_open(const uintptr_t dev_spec __attribute__((unused)),
			   io_dev_info_t **dev_info)
{
	assert(dev_info != NULL);
	*dev_info = (io_dev_info_t *)&spi_dev_info; /* cast away const */

	return 0;
}

static const io_dev_connector_t spi_dev_connector = {
	.dev_open = spi_dev_open
};

/* Register the spi driver with the IO abstraction */
int register_io_dev_spi(const io_dev_connector_t **dev_con)
{
	int result;

	assert(dev_con != NULL);
	result = io_register_device(&spi_dev_info);
	if (result == 0)
		*dev_con = &spi_dev_connector;

	return result;
}
