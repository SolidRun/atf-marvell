/*
 * Copyright (c) 2019 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#ifndef __SPI_H__
#define __SPI_H__

#include <drivers/io/io_driver.h>

/* Flag used to change configuration of SPI */
#define	SPI_CS_HIGH		0x04		/* CS active high */
#define	SPI_LSB_FIRST		0x08		/* per-word bits-on-wire */
#define	SPI_3WIRE		0x10		/* SI/SO signals shared */
#define SPI_FORCE_X1_READ	0x20
#define SPI_FORCE_LEGACY_MODE	0x40
#define SPI_FORCE_4B_OPCODE	0x80

#define PLL_REF_CLK_CN8XXX	50000000	/* 50 MHz */
#define PLL_REF_CLK_CN9XXX	100000000	/* 100 MHz */
#define PLL_REF_CLK_CN10K	800000000	/* 800 MHz */

/* Max data per one transfer in legacy mode (CN8xxx) */
#define MPI_MAX_DATA	8

/* MPI_WIDE_BUF has 144 registers. Each is 64 bit, so contains 8 bytes. */
#define MPI_MAX_DATA_CN9XXX	(144 * 8)

#define SPI_NOR_CMD_READ		0x03
#define SPI_NOR_CMD_READ_4B		0x13
#define SPI_NOR_CMD_READ_FAST		0x0b
#define SPI_NOR_CMD_QREAD		0x6b

#define SPI_NOR_CMD_WREN		0x06
#define SPI_NOR_CMD_WRDI		0x04

#define SPI_NOR_CMD_PROGRAM		0x02
#define SPI_NOR_CMD_PROGRAM_4B		0x12

#define SPI_NOR_CMD_ERASE		0x20
#define SPI_NOR_CMD_ERASE_4B		0x21

#define SPI_NOR_CMD_RDSR		0x5

#define SPI_STATUS_WIP			(1 << 0)

#define SPI_ADDRESSING_24BIT		24
#define SPI_ADDRESSING_32BIT		32

#define SPI_PAGE_SIZE			256

#define SPI_NOR_ERASE_SIZE		4096
#define SPI_NOR_PROGRAM_TIMEOUT		1000		/* 1 sec */
#define SPI_NOR_ERASE_TIMEOUT		2000		/* 2 sec */
/* Driver will select 12.5MHz */
#define CONFIG_SPI_FREQUENCY		13000000

typedef struct file_state {
	/*
	 * Use the 'in_use' flag as any value for base and file_pos could be
	 * valid.
	 */
	int		in_use;
	io_entity_t	*entity;	/** IO handle we belong to */
	unsigned int	spi_con;	/** Bus number */
	unsigned int	cs;		/** chip select */
	size_t		file_pos;
	size_t		offset_address;
	size_t		length;
} file_state_t;

enum direct_mode_operation {
	CDNS_DIRECT_WRITE,
	CDNS_DIRECT_READ,
};

#if (defined(PLAT_CN10K_FAMILY))
/* Params for delayed SPI operations */
#define SPI_OP_COUNT 2048
#define BLOCK_OP_COUNT 64

#define SPI_OP_CALLBACK_CONTINUE 0x00
#define SPI_OP_CALLBACK_FINISHED 0x01
#define SPI_OP_CALLBACK_ERROR    0x02
#define SPI_OP_CALLBACK_NA       0xFF

enum spi_dc_ret {
	DC_RET_DONE = 0, //All delayed operations are done
	DC_RET_CONTINUE, //Callback generated new chain, continue operations.
};


/* Lelvel 2 descriptors */
enum delayed_spi_op_type {
	SPI_OP_ERASE,
	SPI_OP_PROGRAM,
	SPI_OP_READ,
	SPI_OP_UPDATE,
	SPI_OP_UPDATE_VERIFY,    //Updat verify block - aligned
	SPI_OP_UPDATE_VERIFY_NA, //Update verify block - not aligned
	SPI_OP_CALLBACK,
	SPI_OP_NONE,
};

struct delayed_spi_params {
	uint64_t spi_addr;
	uint64_t memory_addr;
	uint64_t size;
	uint64_t erase_block_count;
	uint64_t bus;
	uint64_t cs;
};

struct delayed_spi_op {
	enum delayed_spi_op_type type;
	struct delayed_spi_params op_config;
};

/* Level 1 descriptors */
enum delayed_block_op_type {
	BLOCK_WRITE_SPI,
	BLOCK_READ_SPI,
	BLOCK_UPDATE_SPI,
	BLOCK_CALLBACK,
	BLOCK_NONE,
};

enum delayed_block_op_status {
	BLOCK_STATUS_PENDING,
	BLOCK_STATUS_PROCESSING,
	BLOCK_STATUS_FINISHED_OK,
	BLOCK_STATUS_FINISHED_FAILED,
	BLOCK_STATUS_WAITING,
};

struct delayed_block_params {
	uint64_t spi_addr;
	uint64_t memory_addr;
	uint64_t size;
	int bus;
	int cs;
};

struct delayed_callbacks {
	int (*callback_initial)(void *param);
	void *initial_ptr;
	bool initial_executed;
	int (*callback_continuous)(void *param);
	void *continuous_ptr;
	bool time_tracking;
	int max_usec_time;
};

struct delayed_block_op {
	enum delayed_block_op_type type;
	enum delayed_block_op_status status;
	struct delayed_block_params param;
	struct delayed_callbacks dc;
	int (*block_callback)(void*, int, struct delayed_block_params *);
	void *block_cb_params;
};
#endif


void prepare_opcomands(int spi_con, int cs, uint64_t end_spi_addr);
int cdns_xspi_direct_op(uint64_t spi_addr, void *buf, uint64_t read_len,
			       int spi_con, enum direct_mode_operation op);
int cdns_xspi_auto_erase(uint64_t spi_addr, uint32_t block_erase_cnt,
								int spi_con, int cs);

int spi_nor_erase(uint32_t addr, int addr_len, int spi_con, int cs);

#if (defined(PLAT_CN10K_FAMILY))
int spi_nor_write(const uint8_t *buf, int buf_size, uint32_t addr,
			int addr_len, int spi_con, int cs);
#else
int spi_nor_write(uint8_t *buf, int buf_size, uint32_t addr,
			int addr_len, int spi_con, int cs);
#endif
int spi_nor_read(uint8_t *buf, int buf_size, uint32_t addr,
			int addr_len, int spi_con, int cs);
int spi_config(uint64_t spi_clk, uint32_t mode, int cpol, int cpha,
		      int spi_con, int cs);
uint32_t spi_dev_lock(int spi_con);
uint32_t spi_dev_unlock(int spi_con);

/* Async operations are avalible only in CN10K*/
#if (defined(PLAT_CN10K_FAMILY))
/**
 * Set the SPI controller and chip select for an open handle
 */
int spi_block_config(uintptr_t handle, uint32_t spi_con, uint32_t cs);

void spi_async_start(enum spi_dc_ret (*block_callback)(void *), void *params);
void spi_async_add_block_write(int bus, int cs, uint64_t spi_addr, void *mem_addr, uint64_t size,
			       int (*block_callback)(void*, int, struct delayed_block_params *),
			       void *cb_params);
void spi_async_add_block_read(int bus, int cs, uint64_t spi_addr, void *mem_addr, uint64_t size,
			      int (*block_callback)(void*, int, struct delayed_block_params *),
			      void *cb_params);
void spi_async_add_block_update(int bus, int cs, uint64_t spi_addr, void *mem_addr, uint64_t size,
			      int (*block_callback)(void*, int, struct delayed_block_params *),
			      void *cb_params);
void spi_async_add_block_callback(int (*callback)(void*, int, struct delayed_block_params *),
				  void *cb_params,
				  int (*callback_init)(void *), void *cb_init,
				  int (*callback_cont)(void *), void *cb_cont,
				  uint64_t callback_tmax_usec);
int spi_async_init_delayed(void);
bool spi_async_working(void);

#endif

#endif /* __SPI_H__ */
