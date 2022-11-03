/***********************license start***********************************
 * Copyright (c) 2021 Marvell.
 * SPDX-License-Identifier: BSD-3-Clause
 * https://spdx.org/licenses
 **********************license end**************************************/

#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <utils.h>
#include <drivers/delay_timer.h>
#include <octeontx_common.h>
#include <drivers/io/io_storage.h>
#include <assert.h>
#include <drivers/io/io_driver.h>
#include <debug.h>
#include <plat_board_cfg.h>
#include <spi.h>

#include "cavm-csrs-gpio.h"
#include "cavm-csrs-spi.h"
#include "cavm-csrs-rst.h"
#include "cavm-csrs-cpc.h"

#define CDNS_XSPI_AUTO_PIO_VAL     0x01
#define CDNS_XSPI_AUTO_PIO_OFFSET  30
#define CDNS_XSPI_AUTO_BANK_OFFSET 20
#define CDNS_XSPI_AUTO_ERASE_CMD   0x1000
#define CDNS_XSPI_AUTO_READ_CMD    0x2200
#define CDNS_XSPI_AUTO_PROGRAM_CMD 0x2100

#define CDNS_XSPI_AUTO_STATUS_COMPLETED_OFFSET 15
#define CNNS_XSPI_AUTO_STATUS_FAIL_OFFSET 14
#define CDNS_XSPI_MAGIC_NUMBER 0x6522

#define CDNS_XSPI_CLOCK_IO_Hz 800000000
#define CDNS_XSPI_CLOCK_DIVIDED(div) ((CDNS_XSPI_CLOCK_IO_Hz)/(div))

#define SPI_SAFEMODE_CLOCK_HZ 12500000
#define SPI_CLOCK_HZ          25000000

//4byte commands
#define SPINOR_OP_BE_4K_4B      0x21
#define SPINOR_OP_BE_64K_4B     0xDC
#define SPINOR_OP_PP_4B	        0x12
#define SPINOR_OP_PP_1_4_4_4B	0x3e
#define SPINOR_OP_READ_4B       0x13
#define SPINOR_OP_READ_1_4_4_4B	0xec


//3byte commands, for now only x1
#define SPINOR_OP_BE_4K         0x20
#define SPINOR_OP_BE_64K        0xD8
#define SPINOR_OP_PP	        0x02
#define SPINOR_OP_READ          0x03
#define SPINOR_OP_READ_1_4_4	0xeb
#define SPINOR_OP_PP_1_4_4	0x38

#define ADDR_LIMIT_3B 0x1000000

#define SPI_OP_DIRECT_TIMEOUT_MS 5
#define SPI_OP_IDLE_TIMEOUT_MS 100

#define CONFIG_OK 0
#define CONFIG_INVALID_SPI 1
#define CONFIG_NOT_STORED 2
#define CONFIG_INCORECT_MODE 3

#define BOOTROM_AP_SECURE_ARB 2

#define SPI_MAX_STATES		(MAX_SPI_BUS * MAX_SPI_CS)

#define RDID_OPCMD 0x9f
#define RDID_DATA_LEN 6
#define STIG_OPCMD_OFFSET 16
#define STIG_CS_OFFSET 12
#define STIG_CMD 1

#define STIG_DSEQ_CMD 127
#define STIG_DSEQ_DATA_LEN_OFFSET 16
#define STIG_DSEQ_DIR_OFFSET 4
#define STIG_DSEQ_DIR_FROM_FLASH 0

#define AUTOCMD_READ_FROM_FLASH 0
#define AUTOCMD_WRITE_INTO_FLASH 1
#define SPI_FLASH_PROGRAM_PAGE_SIZE 256

extern int handle_gpio_as_spi(int spi_conn);

uint32_t spi_mode;
static file_state_t spi_state_data[SPI_MAX_STATES];

/* Global lock to sync between ATF and OS */
#define SPI_0_LOCK_BYTE (uint32_t *)0x80400000208c
#define SPI_1_LOCK_BYTE (uint32_t *)0x80500000208c
static uint32_t *spi_lock[] = {SPI_0_LOCK_BYTE, SPI_1_LOCK_BYTE};
#define ATF_OWN		0x01

/** Needed for block writes to temporarily store data */
static uint8_t spi_buffer[SPI_NOR_ERASE_SIZE];

/* JEDEC-ID mesasge printed */
static bool jedec_displayed = false;

enum cdns_xspi_mode {
	XSPI_MODE_DIRECT = 0x00,
	XSPI_MODE_AUTO = 0x03,
	XSPI_MODE_STIG = 0x01,
};

enum xspi_addressing {
	XSPI_ADDRESSING_3B = 0,
	XSPI_ADDRESSING_4B = 1,
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

static inline enum xspi_addressing xspi_get_addr_mode(uint32_t addr, uint32_t size)
{
	if (addr + size >= 0x1 << 24)
		return XSPI_ADDRESSING_4B;
	else
		return XSPI_ADDRESSING_3B;
}

#if defined(IMAGE_BL2)
int handle_gpio_as_spi(int spi_con)
{
	return 0;
}
#endif

#define REGCHECK(reg, val, result) if(CSR_READ(reg) != val) result=true;
static int cdns_xspi_verify_phy(int spi_con)
{
	if (!cavm_is_platform(PLATFORM_HW))
		return 0;

	bool do_phy_training = false;
	uint32_t timeout = SPI_OP_IDLE_TIMEOUT_MS * 100;

	REGCHECK(CAVM_SPIX_RF_MINICTRL_REGS_DLL_PHY_CTRL(spi_con), 0x01000707, do_phy_training);
	REGCHECK(CAVM_SPIX_PHY_CTB_RFILE_PHY_CTRL(spi_con), 0x00004000, do_phy_training);
	REGCHECK(CAVM_SPIX_PHY_CTB_RFILE_PHY_TSEL(spi_con), 0x00000000, do_phy_training);
	REGCHECK(CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_DQ_TIMING(spi_con), 0x00000101, do_phy_training);
	REGCHECK(CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_DQS_TIMING(spi_con), 0x00700404, do_phy_training);
	REGCHECK(CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_GATE_LPBK_CTRL(spi_con), 0x00200030, do_phy_training);
	REGCHECK(CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_MASTER_CTRL(spi_con), 0x00800000, do_phy_training);
	REGCHECK(CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_SLAVE_CTRL(spi_con), 0x0000ff01, do_phy_training);

	if (do_phy_training) {

		INFO("%s: xSPI_%d: PHY config update\n", __func__, spi_con);

		CSR_WRITE(CAVM_SPIX_RF_MINICTRL_REGS_DLL_PHY_CTRL(spi_con), 0x00000707);
		CSR_WRITE(CAVM_SPIX_PHY_CTB_RFILE_PHY_CTRL(spi_con), 0x00004000);
		CSR_WRITE(CAVM_SPIX_PHY_CTB_RFILE_PHY_TSEL(spi_con), 0x00000000);
		CSR_WRITE(CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_DQ_TIMING(spi_con), 0x00000101);
		CSR_WRITE(CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_DQS_TIMING(spi_con), 0x00700404);
		CSR_WRITE(CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_GATE_LPBK_CTRL(spi_con), 0x00200030);
		CSR_WRITE(CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_MASTER_CTRL(spi_con), 0x00800000);
		CSR_WRITE(CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_SLAVE_CTRL(spi_con), 0x0000ff01);

		// Reset DLL
		INFO("%s: xSPI_%d: Reset DLL\n", __func__, spi_con);
		CSR_INIT(dll_phy, CAVM_SPIX_RF_MINICTRL_REGS_DLL_PHY_CTRL(spi_con));
		dll_phy.s.dll_rst_n = 1;
		CSR_WRITE(CAVM_SPIX_RF_MINICTRL_REGS_DLL_PHY_CTRL(spi_con), dll_phy.u);

		//Poll for DLL Lock
		INFO("%s: xSPI_%d: Wait for DLL lock\n", __func__, spi_con);
		CSR_INIT(phy_dataslice, CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_0(spi_con));
		do {
			phy_dataslice.u = CSR_READ(CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_0(spi_con));
			if (phy_dataslice.s.dll_lock != 1) {
				udelay(10);
				timeout--;
			}
		} while (phy_dataslice.s.dll_lock != 1 && timeout > 0);

		if (timeout == 0) {
			ERROR("%s: xSPI_%d: Failed to lock DLL\n", __func__, spi_con);
			return -1;
		}
	}
	return 0;
}

static int cdns_xspi_store_cs_configuration(int spi_con, int cs, bool safemode)
{
	if (cs >= MAX_SPI_CS) {
		ERROR("%s: SPI_%d: Unsupported CS(%d) config store.\n", __func__, spi_con, cs);
		return CONFIG_INVALID_SPI;
	}
	if (spi_con >= MAX_SPI_BUS) {
		ERROR("%s: SPI_%d: Unsupported SPI config store.\n", __func__, spi_con);
		return CONFIG_INVALID_SPI;
	}

	plat_octeontx_bcfg->spi_cfg[spi_con].cs_configuration[spi_con][cs].read_seq_0 =
					CSR_READ(CAVM_SPIX_DEV_SEQ_REGS_READ_SEQ_CFG_0(spi_con));
	plat_octeontx_bcfg->spi_cfg[spi_con].cs_configuration[spi_con][cs].read_seq_1 =
					CSR_READ(CAVM_SPIX_DEV_SEQ_REGS_READ_SEQ_CFG_1(spi_con));
	plat_octeontx_bcfg->spi_cfg[spi_con].cs_configuration[spi_con][cs].read_seq_2 =
					CSR_READ(CAVM_SPIX_DEV_SEQ_REGS_READ_SEQ_CFG_2(spi_con));
	plat_octeontx_bcfg->spi_cfg[spi_con].cs_configuration[spi_con][cs].prog_seq_0 =
					CSR_READ(CAVM_SPIX_DEV_SEQ_REGS_PROG_SEQ_CFG_0(spi_con));
	plat_octeontx_bcfg->spi_cfg[spi_con].cs_configuration[spi_con][cs].prog_seq_1 =
					CSR_READ(CAVM_SPIX_DEV_SEQ_REGS_PROG_SEQ_CFG_1(spi_con));
	plat_octeontx_bcfg->spi_cfg[spi_con].cs_configuration[spi_con][cs].prog_seq_2 =
					CSR_READ(CAVM_SPIX_DEV_SEQ_REGS_PROG_SEQ_CFG_2(spi_con));
	plat_octeontx_bcfg->spi_cfg[spi_con].cs_configuration[spi_con][cs].erase_seq_0 =
					CSR_READ(CAVM_SPIX_DEV_SEQ_REGS_ERS_SEQ_CFG_0(spi_con));
	plat_octeontx_bcfg->spi_cfg[spi_con].cs_configuration[spi_con][cs].erase_seq_1 =
					CSR_READ(CAVM_SPIX_DEV_SEQ_REGS_ERS_SEQ_CFG_1(spi_con));
	plat_octeontx_bcfg->spi_cfg[spi_con].cs_configuration[spi_con][cs].erase_seq_2 =
					CSR_READ(CAVM_SPIX_DEV_SEQ_REGS_ERS_SEQ_CFG_2(spi_con));

	plat_octeontx_bcfg->spi_cfg[spi_con].cs_configuration[spi_con][cs].safemode_triggered = safemode;
	plat_octeontx_bcfg->spi_cfg[spi_con].cs_configuration[spi_con][cs].config_valid = true;

	INFO("%s: SPI_%d: Config db stored: CS: %d, safemode: %d\n",
						__func__, spi_con, cs, safemode);

	return CONFIG_OK;
}

static int cdns_xspi_wait_for_controller_idle(int spi_con)
{
	uint32_t timeout = SPI_OP_IDLE_TIMEOUT_MS * 100;
	union cavm_spix_ctrl_cmd_stat_ctrl_status spi_status;

	do {
		spi_status.u = CSR_READ(CAVM_SPIX_CTRL_CMD_STAT_CTRL_STATUS(spi_con));
		udelay(10);
	} while (spi_status.s.ctrl_busy && timeout--);

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
	bool update_clk = false;

	CSR_INIT(clk_ctrl, CAVM_SPIX_CLK_CTRL(spi_con));

	while (cdns_xspi_clk_div_list[i] > 0) {
		clk_val = CDNS_XSPI_CLOCK_DIVIDED(cdns_xspi_clk_div_list[i]);
		if (clk_val <= requested_clk)
			break;
		i++;
	}

	if (cdns_xspi_clk_div_list[i] == -1) {
		ERROR("%s: SPI_%d: Unable to find clock div for requested: %dHz- setting 6.25MHz\n",
					__func__, spi_con, requested_clk);
		i--;
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
		INFO("%s: SPI_%d: %dHz, divider: %d, clock val: %dHz\n",
					__func__, spi_con, requested_clk,
					cdns_xspi_clk_div_list[i],
					CDNS_XSPI_CLOCK_DIVIDED(cdns_xspi_clk_div_list[i]));
		CSR_WRITE(CAVM_SPIX_CLK_CTRL(spi_con), clk_ctrl.u);
	}

	return update_clk;
}

static int cdns_xspi_load_cs_configuration(int spi_con, int cs, bool safemode)
{
	CSR_INIT(direct_config, CAVM_SPIX_CMN_SEQ_REGS_DIRECT_ACCESS_CFG(spi_con));

	if (cs >= MAX_SPI_CS) {
		ERROR("%s: SPI_%d: Unsupported CS(%d) config store.\n", __func__, spi_con, cs);
		return -1;
	}
	if (spi_con >= MAX_SPI_BUS) {
		ERROR("%s: SPI_%d: Unsupported SPI config store.\n", __func__, spi_con);
		return -1;
	}

	//Check if config was already stored
	if (!plat_octeontx_bcfg->spi_cfg[spi_con].cs_configuration[spi_con][cs].config_valid) {
		INFO("%s: SPI_%d: Config was not stored.\n", __func__, spi_con);
		return CONFIG_NOT_STORED;
	}

	//Check if safemode was triggered in current run
	//Do not allow to run in non safemode if safemode was triggered
	if (safemode &&
	    plat_octeontx_bcfg->spi_cfg[spi_con].cs_configuration[spi_con][cs].safemode_triggered != safemode) {
		INFO("%s: SPI_%d: Safemode status change\n", __func__, spi_con);
		return CONFIG_INCORECT_MODE;
	}

	CSR_WRITE(CAVM_SPIX_DEV_SEQ_REGS_READ_SEQ_CFG_0(spi_con),
			plat_octeontx_bcfg->spi_cfg[spi_con].cs_configuration[spi_con][cs].read_seq_0);
	CSR_WRITE(CAVM_SPIX_DEV_SEQ_REGS_READ_SEQ_CFG_1(spi_con),
			plat_octeontx_bcfg->spi_cfg[spi_con].cs_configuration[spi_con][cs].read_seq_1);
	CSR_WRITE(CAVM_SPIX_DEV_SEQ_REGS_READ_SEQ_CFG_2(spi_con),
			plat_octeontx_bcfg->spi_cfg[spi_con].cs_configuration[spi_con][cs].read_seq_2);
	CSR_WRITE(CAVM_SPIX_DEV_SEQ_REGS_PROG_SEQ_CFG_0(spi_con),
			plat_octeontx_bcfg->spi_cfg[spi_con].cs_configuration[spi_con][cs].prog_seq_0);
	CSR_WRITE(CAVM_SPIX_DEV_SEQ_REGS_PROG_SEQ_CFG_1(spi_con),
			plat_octeontx_bcfg->spi_cfg[spi_con].cs_configuration[spi_con][cs].prog_seq_1);
	CSR_WRITE(CAVM_SPIX_DEV_SEQ_REGS_PROG_SEQ_CFG_2(spi_con),
			plat_octeontx_bcfg->spi_cfg[spi_con].cs_configuration[spi_con][cs].prog_seq_2);
	CSR_WRITE(CAVM_SPIX_DEV_SEQ_REGS_ERS_SEQ_CFG_0(spi_con),
			plat_octeontx_bcfg->spi_cfg[spi_con].cs_configuration[spi_con][cs].erase_seq_0);
	CSR_WRITE(CAVM_SPIX_DEV_SEQ_REGS_ERS_SEQ_CFG_1(spi_con),
			plat_octeontx_bcfg->spi_cfg[spi_con].cs_configuration[spi_con][cs].erase_seq_1);
	CSR_WRITE(CAVM_SPIX_DEV_SEQ_REGS_ERS_SEQ_CFG_2(spi_con),
			plat_octeontx_bcfg->spi_cfg[spi_con].cs_configuration[spi_con][cs].erase_seq_2);

	//Verify clock and PHY configuration
	cdns_xspi_wait_for_controller_idle(spi_con);
	if (plat_octeontx_bcfg->spi_cfg[spi_con].cs_configuration[spi_con][cs].safemode_triggered)
		cdns_xspi_setup_clock(SPI_SAFEMODE_CLOCK_HZ, spi_con);
	else
		cdns_xspi_setup_clock(SPI_CLOCK_HZ, spi_con);
	cdns_xspi_verify_phy(spi_con);
	cdns_xspi_wait_for_controller_idle(spi_con);


	//Set correct CS
	direct_config.s.dac_bank_num = cs;
	CSR_WRITE(CAVM_SPIX_CMN_SEQ_REGS_DIRECT_ACCESS_CFG(spi_con), direct_config.u);

	INFO("%s: SPI_%d: Config for CS: %d, safemode: %d stored safemode: %d loaded from db\n", __func__,
									spi_con, cs, safemode,
		plat_octeontx_bcfg->spi_cfg[spi_con].cs_configuration[spi_con][cs].safemode_triggered);

	return CONFIG_OK;
}

static int cdns_xspi_wait_for_auto_complete(int spi_con, int timeout)
{
	int ret = 0;
	union cavm_spix_ctrl_cmd_stat_cmd_status auto_cmd_status;

	auto_cmd_status.u = CSR_READ(CAVM_SPIX_CTRL_CMD_STAT_CMD_STATUS(spi_con));
	while ((!(auto_cmd_status.s.cmd_status & (1<<CDNS_XSPI_AUTO_STATUS_COMPLETED_OFFSET))) &&
		timeout--) {
		udelay(10);
		auto_cmd_status.u = CSR_READ(CAVM_SPIX_CTRL_CMD_STAT_CMD_STATUS(spi_con));
	}

	if (timeout <= 0) {
		ERROR("%s: SPI_%d: Auto command timeout\n", __func__, spi_con);
		ret = -1;
	}

	if (auto_cmd_status.u & (1<<CNNS_XSPI_AUTO_STATUS_FAIL_OFFSET)) {
		ERROR("%s: SPI_%d: Auto command fail\n", __func__, spi_con);
		ret = -1;
	}
	return ret;
}

static int wait_for_sdma(int spi) {
	int timeout = SPI_OP_IDLE_TIMEOUT_MS * 100;
	union cavm_spix_ctrl_cmd_stat_intr_status spi_status;

	spi_status.u = CSR_READ(CAVM_SPIX_CTRL_CMD_STAT_INTR_STATUS(spi));
	while (!spi_status.s.sdma_trigg && timeout--) {
		spi_status.u = CSR_READ(CAVM_SPIX_CTRL_CMD_STAT_INTR_STATUS(spi));
		udelay(10);
	}

	CSR_WRITE(CAVM_SPIX_CTRL_CMD_STAT_INTR_STATUS(spi), spi_status.u);

	return -1 ? 0 : timeout <= 0;
}

static void spi_ioreadq(int spi, void *buf, int len)
{
	int i = 0;
	int rcount = len / 8;
	int rcount_nf = len % 8;
	uint64_t tmp;
	uint64_t *buf64 = (uint64_t *)buf;

	if (((uint64_t)buf % 8) == 0) {
		for (i = 0; i < rcount; i++)
			*buf64++ = CSR_READ(CAVM_SPIX_DIRECT_ACCESSX(spi, 0));
	} else {
		for (i = 0; i < rcount; i++) {
			tmp = CSR_READ(CAVM_SPIX_DIRECT_ACCESSX(spi, 0));
			memcpy(buf+(i*8), &tmp, 8);
		}
	}

	if (rcount_nf != 0) {
		tmp = CSR_READ(CAVM_SPIX_DIRECT_ACCESSX(spi, 0));
		memcpy(buf+(i*8), &tmp, rcount_nf);
	}
}

static void spi_iowriteq(int spi, void *buf, int len)
{
	int i = 0;
	int rcount = len / 8;
	int rcount_nf = len % 8;
	uint64_t tmp;
	uint64_t *buf64 = (uint64_t *)buf;

	if (((uint64_t)buf % 8) == 0) {
		for (i = 0; i < rcount; i++)
			CSR_WRITE(CAVM_SPIX_DIRECT_ACCESSX(spi, 0), *buf64++);
	} else {
		for (i = 0; i < rcount; i++) {
			memcpy(&tmp, buf+(i*8), 8);
			CSR_WRITE(CAVM_SPIX_DIRECT_ACCESSX(spi, 0), tmp);
		}
	}

	if (rcount_nf != 0) {
		memcpy(&tmp, buf+(i*8), rcount_nf);
		CSR_WRITE(CAVM_SPIX_DIRECT_ACCESSX(spi, 0), tmp);
	}
}

static int handle_sdma(int spi, void *addr) {
	CSR_INIT(sdma_size, CAVM_SPIX_CTRL_CFG_COMMON_SDMA_SIZE(spi));
	CSR_INIT(sdma_dir, CAVM_SPIX_CTRL_CFG_COMMON_SDMA_TRD_INFO(spi));

	if (sdma_dir.s.sdma_dir == 0)
		spi_ioreadq(spi, addr, sdma_size.s.sdma_size); //Read from SPI flash
	else
		spi_iowriteq(spi, addr, sdma_size.s.sdma_size); //Write to SPI flash

	return 0;
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

static void print_jedecid(int spi_id, int cs) {
	union cavm_spix_ctrl_cmd_stat_cmd_reg0 reg_0;
	union cavm_spix_ctrl_cmd_stat_cmd_reg1 reg_1;
	union cavm_spix_ctrl_cmd_stat_cmd_reg2 reg_2;
	union cavm_spix_ctrl_cmd_stat_cmd_reg3 reg_3;
	union cavm_spix_ctrl_cmd_stat_cmd_reg4 reg_4;
	char JEDEC_ID[RDID_DATA_LEN];

	cdns_xspi_set_mode(spi_id, XSPI_MODE_STIG);

	reg_0.s.cmd0 = 0;
	reg_1.s.cmd1 = STIG_CMD;		//Generic STIG instruction
	reg_2.s.cmd2 = 0;
	reg_3.s.cmd3 = RDID_OPCMD << STIG_OPCMD_OFFSET;
	reg_4.s.cmd4 = cs << STIG_CS_OFFSET;	//chip-select

	CSR_WRITE(CAVM_SPIX_CTRL_CMD_STAT_CMD_REG1(spi_id), reg_1.u);
	CSR_WRITE(CAVM_SPIX_CTRL_CMD_STAT_CMD_REG2(spi_id), reg_2.u);
	CSR_WRITE(CAVM_SPIX_CTRL_CMD_STAT_CMD_REG3(spi_id), reg_3.u);
	CSR_WRITE(CAVM_SPIX_CTRL_CMD_STAT_CMD_REG4(spi_id), reg_4.u);
	CSR_WRITE(CAVM_SPIX_CTRL_CMD_STAT_CMD_REG0(spi_id), reg_0.u);

	reg_1.s.cmd1 = STIG_DSEQ_CMD;
	reg_2.s.cmd2 = RDID_DATA_LEN << STIG_DSEQ_DATA_LEN_OFFSET;
	reg_3.s.cmd3 = 0;
	reg_4.s.cmd4 = STIG_DSEQ_DIR_FROM_FLASH << STIG_DSEQ_DIR_OFFSET; //dir = 0 read, dir =1 write
	reg_4.s.cmd4 |= cs << STIG_CS_OFFSET;

	CSR_WRITE(CAVM_SPIX_CTRL_CMD_STAT_CMD_REG1(spi_id), reg_1.u);
	CSR_WRITE(CAVM_SPIX_CTRL_CMD_STAT_CMD_REG2(spi_id), reg_2.u);
	CSR_WRITE(CAVM_SPIX_CTRL_CMD_STAT_CMD_REG3(spi_id), reg_3.u);
	CSR_WRITE(CAVM_SPIX_CTRL_CMD_STAT_CMD_REG4(spi_id), reg_4.u);
	CSR_WRITE(CAVM_SPIX_CTRL_CMD_STAT_CMD_REG0(spi_id), reg_0.u);

	wait_for_sdma(spi_id);
	handle_sdma(spi_id, JEDEC_ID);

	NOTICE("SPI_%d CS:%d ID: 0x%x%x%x - 0x%x%x%x\n", spi_id, cs,
				JEDEC_ID[0],JEDEC_ID[1],JEDEC_ID[2],
				JEDEC_ID[3],JEDEC_ID[4],JEDEC_ID[5]);
}

static void update_spi_op_read_params(int spi_con, int mode,
				      enum xspi_addressing addressing_mode)
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
		read_seq_0.s.read_seq_p1_dummy_cnt = 0;
		if (addressing_mode == XSPI_ADDRESSING_4B) {
			read_seq_0.s.read_seq_p1_addr_cnt = 4;
			read_seq_0.s.read_seq_p1_cmd_val = SPINOR_OP_READ_4B;
		} else {
			read_seq_0.s.read_seq_p1_addr_cnt = 3;
			read_seq_0.s.read_seq_p1_cmd_val = SPINOR_OP_READ;
		}

		/* disable dummy bits, disable command extension */
		read_seq_1.s.read_seq_p1_mb_en = 0;
		read_seq_1.s.read_seq_p1_mb_dummy_cnt = 0;
		read_seq_1.s.read_seq_p1_cmd_ext_en = 0;
	} else {
		//set addr and data to x4, use quad fast read cmd, 4-byte addr
		read_seq_0.s.read_seq_p1_cmd_ios = 0; // 0 = x1
		read_seq_0.s.read_seq_p1_addr_ios = 2; // 2 = x4
		read_seq_0.s.read_seq_p1_data_ios = 2; // 2 = x4
		if (addressing_mode == XSPI_ADDRESSING_4B) {
			read_seq_0.s.read_seq_p1_addr_cnt = 4;
			read_seq_0.s.read_seq_p1_cmd_val = SPINOR_OP_READ_1_4_4_4B;
		} else {
			read_seq_0.s.read_seq_p1_addr_cnt = 3;
			read_seq_0.s.read_seq_p1_cmd_val = SPINOR_OP_READ_1_4_4;
		}
	}

	CSR_WRITE(CAVM_SPIX_DEV_SEQ_REGS_READ_SEQ_CFG_0(spi_con), read_seq_0.u);
	CSR_WRITE(CAVM_SPIX_DEV_SEQ_REGS_READ_SEQ_CFG_1(spi_con), read_seq_1.u);
}

static void update_spi_op_prog_params(int spi_con, int mode,
				      enum xspi_addressing addressing_mode)
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
		prog_seq_0.s.prog_seq_p1_dummy_cnt = 0;
		if (addressing_mode == XSPI_ADDRESSING_4B) {
			prog_seq_0.s.prog_seq_p1_addr_cnt = 4;
			prog_seq_0.s.prog_seq_p1_cmd_val = SPINOR_OP_PP_4B;
		} else {
			prog_seq_0.s.prog_seq_p1_addr_cnt = 3;
			prog_seq_0.s.prog_seq_p1_cmd_val = SPINOR_OP_PP;
		}

		/* disable dummy bits, disable command extension */
		prog_seq_1.s.prog_seq_p1_cmd_ext_en = 0;
	} else {
		prog_seq_0.s.prog_seq_p1_cmd_ios = 0;
		prog_seq_0.s.prog_seq_p1_addr_ios = 2;
		prog_seq_0.s.prog_seq_p1_data_ios = 2;
		if (addressing_mode == XSPI_ADDRESSING_4B) {
			prog_seq_0.s.prog_seq_p1_addr_cnt = 4;
			prog_seq_0.s.prog_seq_p1_cmd_val = SPINOR_OP_PP_1_4_4_4B;
		} else {
			prog_seq_0.s.prog_seq_p1_addr_cnt = 3;
			prog_seq_0.s.prog_seq_p1_cmd_val = SPINOR_OP_PP_1_4_4;
		}
	}

	CSR_WRITE(CAVM_SPIX_DEV_SEQ_REGS_PROG_SEQ_CFG_0(spi_con), prog_seq_0.u);
	CSR_WRITE(CAVM_SPIX_DEV_SEQ_REGS_PROG_SEQ_CFG_1(spi_con), prog_seq_1.u);
}

static void update_spi_op_erase_params(int spi_con,
				       enum xspi_addressing addressing_mode)
{
	CSR_INIT(erase_ctrl, CAVM_SPIX_DEV_SEQ_REGS_ERS_SEQ_CFG_0(spi_con));

	if (addressing_mode == XSPI_ADDRESSING_4B) {
		erase_ctrl.s.erss_seq_p1_addr_cnt = 4;
		erase_ctrl.s.erss_seq_p1_cmd_val = SPINOR_OP_BE_4K_4B;
	} else {
		erase_ctrl.s.erss_seq_p1_addr_cnt = 3;
		erase_ctrl.s.erss_seq_p1_cmd_val = SPINOR_OP_BE_4K;
	}

	CSR_WRITE(CAVM_SPIX_DEV_SEQ_REGS_ERS_SEQ_CFG_0(spi_con), erase_ctrl.u);
}

static bool verify_discovery_opcmd(int spi_con)
{
	CSR_INIT(read_seq_0, CAVM_SPIX_DEV_SEQ_REGS_READ_SEQ_CFG_0(spi_con));
	CSR_INIT(prog_seq_0, CAVM_SPIX_DEV_SEQ_REGS_PROG_SEQ_CFG_0(spi_con));

	if (read_seq_0.s.read_seq_p1_cmd_val != SPINOR_OP_READ_1_4_4_4B &&
	    read_seq_0.s.read_seq_p1_cmd_val != SPINOR_OP_READ_1_4_4)
		return false;

	if (prog_seq_0.s.prog_seq_p1_cmd_val != SPINOR_OP_PP_1_4_4_4B &&
	    prog_seq_0.s.prog_seq_p1_cmd_val != SPINOR_OP_PP_1_4_4)
		return false;

	return true;
}

static int cdns_xspi_config(int spi_con, int cs, bool phy_training,
			    enum xspi_addressing mode, int smode)
{
	union cavm_spix_ctrl_consts_spi_ctrl_version hw_version;
	union cavm_spix_cmn_seq_regs_direct_access_cfg direct_config;
	union cavm_spix_ctrl_cfg_common_discovery_control discovery_ctrl;
	union cavm_spix_ctrl_cmd_stat_ctrl_status spi_status;
	int safemode = smode;

	INFO("%s: SPI_%d: Running device-discovery\n", __func__, spi_con);

	hw_version.u = CSR_READ(CAVM_SPIX_CTRL_CONSTS_SPI_CTRL_VERSION(spi_con));
	discovery_ctrl.u = CSR_READ(CAVM_SPIX_CTRL_CFG_COMMON_DISCOVERY_CONTROL(spi_con));

	if (hw_version.s.spi_ctrl_magic_number != CDNS_XSPI_MAGIC_NUMBER) {
		ERROR("%s: SPI_%d: xSPI not detected\n", __func__, spi_con);
		return -1;
	}

	/* Configure clock and PHY
	 * Before DD use safe settings(12.5MHz)
	 */
	cdns_xspi_wait_for_controller_idle(spi_con);
	cdns_xspi_setup_clock(SPI_CLOCK_HZ, spi_con);
	cdns_xspi_verify_phy(spi_con);
	cdns_xspi_wait_for_controller_idle(spi_con);

	/* Run discovery config.
	 * In normal mode use X4
	 * In Legacy or X1 modes use x1
	 */
	discovery_ctrl.s.discovery_req = 1;
	discovery_ctrl.s.discovery_abnum = 1;
	discovery_ctrl.s.discovery_bank = cs;
	discovery_ctrl.s.discovery_num_lines = 0;

	CSR_WRITE(CAVM_SPIX_CTRL_CFG_COMMON_DISCOVERY_CONTROL(spi_con),
		  discovery_ctrl.u);
	do {
		spi_status.u = CSR_READ(CAVM_SPIX_CTRL_CMD_STAT_CTRL_STATUS(spi_con));
	} while (spi_status.s.discovery_busy);

	/* If dd was not sucessfull fall to safemode
	 * It is possible that dd will fail on unsupported x8 devices
	 */
	discovery_ctrl.u = CSR_READ(CAVM_SPIX_CTRL_CFG_COMMON_DISCOVERY_CONTROL(spi_con));
	if (discovery_ctrl.s.discovery_fail == 0x01) {
		INFO("%s: SPI_%d: Device discovery fail, fallback to safemode\n", __func__, spi_con);
		safemode = 1;
	}

	/* Verify if DD found corrext opcode
	 * SPINOR_OP_READ_1_4_4 or SPINOR_OP_READ_1_4_4_4B
	 */
	if (!verify_discovery_opcmd(spi_con)) {
		INFO("%s: SPI_%d: Incorrect params after DD, fallback to safemode", __func__, spi_con);
		safemode = 1;
	}

	cdns_xspi_wait_for_controller_idle(spi_con);
	if (safemode) {
		cdns_xspi_setup_clock(SPI_SAFEMODE_CLOCK_HZ, spi_con);
		INFO("%s: SPI_%d: CS: %d config: x1 12.5MHz\n", __func__, spi_con, cs);
	} else {
		cdns_xspi_setup_clock(SPI_CLOCK_HZ, spi_con);
		INFO("%s: SPI_%d: CS: %d config: x4 25MHz\n", __func__, spi_con, cs);
	}

	/* Clock is enabled, read jedec-id once, only if xSPI is secure */
	if (!jedec_displayed && plat_octeontx_bcfg->spi_cfg[spi_con].is_secure) {
		print_jedecid(spi_con, cs);
		jedec_displayed = true;
	}

	if (mode == XSPI_ADDRESSING_3B) {
		update_spi_op_read_params(spi_con, safemode, XSPI_ADDRESSING_3B);
		update_spi_op_prog_params(spi_con, safemode, XSPI_ADDRESSING_3B);
		update_spi_op_erase_params(spi_con, XSPI_ADDRESSING_3B);
	} else {
		update_spi_op_read_params(spi_con, safemode, XSPI_ADDRESSING_4B);
		update_spi_op_prog_params(spi_con, safemode, XSPI_ADDRESSING_4B);
		update_spi_op_erase_params(spi_con, XSPI_ADDRESSING_4B);
	}

	/* Finish config */
	direct_config.u = CSR_READ(CAVM_SPIX_CMN_SEQ_REGS_DIRECT_ACCESS_CFG(spi_con));
	direct_config.s.dac_bank_num = cs;
	CSR_WRITE(CAVM_SPIX_CMN_SEQ_REGS_DIRECT_ACCESS_CFG(spi_con),
			  direct_config.u);
	cdns_xspi_set_mode(spi_con, XSPI_MODE_DIRECT);

	/* Store config params in db */
	if (cdns_xspi_store_cs_configuration(spi_con, cs, safemode))
		ERROR("%s: SPI_%d: Failed to store config params", __func__, spi_con);


	return 0;
}

static void handle_opcmd_reload(int spi_con, int cs, int safemode)
{
	int loadres = cdns_xspi_load_cs_configuration(spi_con, cs, safemode);

	if (loadres)
		cdns_xspi_config(spi_con, cs, false, XSPI_ADDRESSING_3B,
				loadres == CONFIG_INCORECT_MODE ? 1 : 0);
}

void prepare_opcomands(int spi_con, int cs, uint64_t end_spi_addr)
{
	enum xspi_addressing addr_current, addr_new;
	char *currstr, *newstr;
	int safemode = 0;

	/*Check current and new xSPI mode*/
	CSR_INIT(read_seq_0, CAVM_SPIX_DEV_SEQ_REGS_READ_SEQ_CFG_0(spi_con));
	if (read_seq_0.s.read_seq_p1_cmd_val == SPINOR_OP_READ_4B ||
	    read_seq_0.s.read_seq_p1_cmd_val == SPINOR_OP_READ_1_4_4_4B)
		addr_current = XSPI_ADDRESSING_4B;
	else
		addr_current = XSPI_ADDRESSING_3B;
	addr_new = end_spi_addr < ADDR_LIMIT_3B ? XSPI_ADDRESSING_3B : XSPI_ADDRESSING_4B;

	/*Check if we are in safemode now*/
	if (read_seq_0.s.read_seq_p1_cmd_val == SPINOR_OP_READ_4B)
		safemode = 1;

	/* There is no need to switch addressing */
	if (addr_current == addr_new)
		return;

	currstr = addr_current == XSPI_ADDRESSING_3B ? "XSPI_ADDRESSING_3B" : "XSPI_ADDRESSING_4B";
	newstr = addr_new == XSPI_ADDRESSING_3B ? "XSPI_ADDRESSING_3B" : "XSPI_ADDRESSING_4B";

	INFO("%s: SPI_%d CS: %d - Mode change: previous: %s, new %s\n", __func__, spi_con, cs, currstr, newstr);

	cdns_xspi_config(spi_con, cs, false, addr_new, safemode);
}

int cdns_xspi_auto_erase(uint64_t spi_addr, uint32_t block_erase_cnt,
			 int spi_con, int cs)
{
	CSR_INIT(erase_ctrl, CAVM_SPIX_DEV_SEQ_REGS_ERS_SEQ_CFG_0(spi_con));
	union cavm_spix_ctrl_cmd_stat_cmd_reg0 reg_0;
	union cavm_spix_ctrl_cmd_stat_cmd_reg1 reg_1;
	union cavm_spix_ctrl_cmd_stat_cmd_reg4 reg_4;
	union cavm_spix_ctrl_cmd_stat_cmd_reg5 reg_5;
	int timeout = 100 * 100;

	cdns_xspi_set_mode(spi_con, XSPI_MODE_AUTO);

	reg_0.s.cmd0 = CDNS_XSPI_AUTO_PIO_VAL << CDNS_XSPI_AUTO_PIO_OFFSET;
	reg_0.s.cmd0 |= cs << CDNS_XSPI_AUTO_BANK_OFFSET;
	reg_0.s.cmd0 |= CDNS_XSPI_AUTO_ERASE_CMD;

	reg_1.s.cmd1 = spi_addr & 0xffffffff;
	reg_4.s.cmd4 = block_erase_cnt;
	reg_5.s.cmd5 = (spi_addr >> 32) & 0xffffffff;

	if (plat_octeontx_bcfg->spi_cfg[spi_con].erase_64k[cs]) {
		if (erase_ctrl.s.erss_seq_p1_cmd_val == SPINOR_OP_BE_4K_4B)
			erase_ctrl.s.erss_seq_p1_cmd_val = SPINOR_OP_BE_64K_4B;
		if (erase_ctrl.s.erss_seq_p1_cmd_val == SPINOR_OP_BE_4K)
			erase_ctrl.s.erss_seq_p1_cmd_val = SPINOR_OP_BE_64K;
		timeout = 500 * 100;
	}
	CSR_WRITE(CAVM_SPIX_DEV_SEQ_REGS_ERS_SEQ_CFG_0(spi_con), erase_ctrl.u);
	CSR_WRITE(CAVM_SPIX_CTRL_CMD_STAT_CMD_REG5(spi_con), reg_5.u);
	CSR_WRITE(CAVM_SPIX_CTRL_CMD_STAT_CMD_REG4(spi_con), reg_4.u);
	CSR_WRITE(CAVM_SPIX_CTRL_CMD_STAT_CMD_REG1(spi_con), reg_1.u);
	CSR_WRITE(CAVM_SPIX_CTRL_CMD_STAT_CMD_REG0(spi_con), reg_0.u);

	return cdns_xspi_wait_for_auto_complete(spi_con, timeout);
}

int cdns_xspi_auto_memop(uint64_t spi_addr, uint32_t len, void* buf,
			 int spi_con, int cs, int dir)
{
	union cavm_spix_ctrl_cmd_stat_cmd_reg0 reg_0;
	union cavm_spix_ctrl_cmd_stat_cmd_reg1 reg_1;
	union cavm_spix_ctrl_cmd_stat_cmd_reg2 reg_2;
	union cavm_spix_ctrl_cmd_stat_cmd_reg3 reg_3;
	union cavm_spix_ctrl_cmd_stat_cmd_reg4 reg_4;
	union cavm_spix_ctrl_cmd_stat_cmd_reg5 reg_5;
	int timeout = 100 * 100;

	cdns_xspi_set_mode(spi_con, XSPI_MODE_AUTO);

	reg_0.s.cmd0 = CDNS_XSPI_AUTO_PIO_VAL << CDNS_XSPI_AUTO_PIO_OFFSET;
	reg_0.s.cmd0 |= cs << CDNS_XSPI_AUTO_BANK_OFFSET;
	reg_0.s.cmd0 |= 0 << 19; //DMA slave

	if (dir == AUTOCMD_READ_FROM_FLASH) {
		reg_0.s.cmd0 |= CDNS_XSPI_AUTO_READ_CMD;
	} else if (dir == AUTOCMD_WRITE_INTO_FLASH) {
		reg_0.s.cmd0 |= CDNS_XSPI_AUTO_PROGRAM_CMD;
	} else {
		ERROR("Incorrect AUTO operation\n");
		return -1;
	}

	//SPI addr
	reg_1.s.cmd1 = spi_addr & 0xffffffff;
	reg_5.s.cmd5 = (spi_addr >> 32) & 0xffffffff;

	reg_2.s.cmd2 = (uint64_t)buf & 0xffffffff;
	reg_3.s.cmd3 = (((uint64_t)buf)>>32) & 0xffffffff;

	reg_4.s.cmd4 = len - 1;

	CSR_WRITE(CAVM_SPIX_CTRL_CMD_STAT_CMD_REG5(spi_con), reg_5.u);
	CSR_WRITE(CAVM_SPIX_CTRL_CMD_STAT_CMD_REG4(spi_con), reg_4.u);
	CSR_WRITE(CAVM_SPIX_CTRL_CMD_STAT_CMD_REG3(spi_con), reg_3.u);
	CSR_WRITE(CAVM_SPIX_CTRL_CMD_STAT_CMD_REG2(spi_con), reg_2.u);
	CSR_WRITE(CAVM_SPIX_CTRL_CMD_STAT_CMD_REG1(spi_con), reg_1.u);
	CSR_WRITE(CAVM_SPIX_CTRL_CMD_STAT_CMD_REG0(spi_con), reg_0.u);

	if (wait_for_sdma(spi_con)) {
		ERROR("SDMA irq timeout\n");
		return -1;
	}
	handle_sdma(spi_con, buf);

	return cdns_xspi_wait_for_auto_complete(spi_con, timeout);
}

uint32_t spi_dev_lock(int spi_con)
{
	uint32_t val = 0;
	int timeout = 0xFF;

	while (timeout-- >= 0) {
		val = *spi_lock[spi_con];
		if (val == 0 || val == ATF_OWN) {
			*spi_lock[spi_con] = ATF_OWN;
			break;
		}
	}

	if (timeout <= 0)
		goto fail;

	timeout = 3;
	while (timeout-- >= 0) {
		if (*spi_lock[spi_con] != ATF_OWN)
			break;
	}

	if (timeout > 0) {
		val = *spi_lock[spi_con];
		goto fail;
	}

	return 0;

fail:
	ERROR("%s: SPI_%d: Flash lock failed: 0x%x!\n", __func__, spi_con, val);
	return val;
}

uint32_t spi_dev_unlock(int spi_con)
{
	if (*spi_lock[spi_con] != ATF_OWN)
		return *spi_lock[spi_con];

	*spi_lock[spi_con] = 0;

	return 0;
}

int spi_config(uint64_t spi_clk, uint32_t mode, int cpol, int cpha,
		      int spi_con, int cs)
{
	bool safemode = false;

	handle_gpio_as_spi(spi_con);

	if (mode != 0)
		safemode = true;

	/* Try to load config from db
	 * In caise of load fail, rerun device-discovery
	 */
	handle_opcmd_reload(spi_con, cs, safemode);

	return 0;
}

int spi_nor_read(uint8_t *buf, int buf_size, uint32_t addr,
			int addr_len, int spi_con, int cs)
{
	handle_gpio_as_spi(spi_con);
	if (!cdns_xspi_verify_cs(spi_con, cs))
		handle_opcmd_reload(spi_con, cs, 0);

	/* Verify if opcomands are valid for addressing mode that will be used */
	prepare_opcomands(spi_con, cs, addr + buf_size);

	if (cdns_xspi_auto_memop(addr, buf_size, buf, spi_con, cs, AUTOCMD_READ_FROM_FLASH) != 0)
		 return -1;
	return buf_size;
}

int spi_nor_write(const uint8_t *buf, int buf_size, uint32_t addr,
		  int addr_len, int spi_con, int cs)
{
	int op_size;
	int bs = buf_size;

	handle_gpio_as_spi(spi_con);
	if (!cdns_xspi_verify_cs(spi_con, cs))
		handle_opcmd_reload(spi_con, cs, 0);

	/* Verify if opcomands are valid for addressing mode that will be used */
	prepare_opcomands(spi_con, cs, addr + buf_size);

	while (buf_size) {
		if (buf_size > SPI_FLASH_PROGRAM_PAGE_SIZE)
			op_size = SPI_FLASH_PROGRAM_PAGE_SIZE;
		else
			op_size = buf_size;
		if (cdns_xspi_auto_memop(addr, op_size, (void *)buf, spi_con, cs, AUTOCMD_WRITE_INTO_FLASH) != 0)
			return -1;
		buf_size -= op_size;
		addr += op_size;
		buf += op_size;
	}
	return bs;
}

int spi_nor_erase(uint32_t addr, int addr_len, int spi_con, int cs)
{
	handle_gpio_as_spi(spi_con);
	if (!cdns_xspi_verify_cs(spi_con, cs))
		handle_opcmd_reload(spi_con, cs, 0);

	/* Verify if opcomands are valid for addressing mode that will be used */
	prepare_opcomands(spi_con, cs, addr);

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

static file_state_t *spi_state_alloc(io_entity_t *entity,
				     uint32_t spi_con, uint32_t cs,
				     size_t length,
				     size_t offset_address)
{
	int i;
	file_state_t *fs;

	assert(entity != NULL);

	for (i = 0; i < SPI_MAX_STATES; i++) {
		fs = &spi_state_data[i];
		if (fs->in_use && fs->spi_con == spi_con && fs->cs == cs)
			/* Technically this is OK */
			WARN("SPI controller %u:%u already in use\n",
			     spi_con, cs);
	}
	for (i = 0; i < SPI_MAX_STATES; i++) {
		fs = &spi_state_data[i];
		if (!fs->in_use) {
			zeromem(fs, sizeof(*fs));
			fs->in_use = 1;
			fs->spi_con = spi_con;
			fs->cs = cs;
			fs->entity = entity;
			fs->length = length;
			fs->offset_address = offset_address;
			entity->info = (uintptr_t)fs;
			return fs;
		}
	}
	return NULL;
}

static void spi_state_free(file_state_t *fs)
{

	assert(fs != NULL);
	assert(fs->in_use);
	assert(fs->entity != NULL);

	fs->entity->info = (uintptr_t)NULL;
	zeromem(fs, sizeof(*fs));
}

static int spi_block_open(io_dev_info_t *dev_info, const uintptr_t spec,
			  io_entity_t *entity)
{
	const io_block_spec_t *block_spec = (io_block_spec_t *)spec;
	file_state_t *fs;

	assert(dev_info != NULL);
	assert(spec != 0);
	assert(block_spec != NULL);
	assert(entity != NULL);

	fs = spi_state_alloc(entity,
			     plat_octeontx_bcfg->bcfg.boot_dev.controller,
			     plat_octeontx_bcfg->bcfg.boot_dev.cs,
			     block_spec->length,
			     block_spec->offset);

	if (fs == NULL) {
		WARN("Error: out of state handles!\n");
		return -ENOMEM;
	}

	/* Since we need to track open state for seek() we only allow one open
	 * spec at a time. When we have dynamic memory we can malloc and set
	 * entity->info.
	 */

	return spi_config(CONFIG_SPI_FREQUENCY, spi_mode, 0, 0,
			  fs->spi_con, fs->cs);
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
	if (ret < 0) {
		WARN("%s: Error reading 0x%lx bytes from SPI %u:%u address 0x%lx\n",
		     __func__, length, fp->spi_con, fp->cs,
		     fp->file_pos + fp->offset_address);
		*length_read = 0;
		return ret;
	}

	*length_read = ret;
	fp->file_pos += ret;

	return 0;
}

static int spi_block_write(io_entity_t *entity, const uintptr_t buffer,
			   size_t length, size_t *length_written)
{
	file_state_t *fp;
	const uint8_t *bptr = (uint8_t *)buffer;
	ssize_t ret;
	int addr_mode = SPI_ADDRESSING_24BIT;
	uint32_t start_addr;
	uint32_t block_start_addr;
	uint32_t block_start_off;
	uint32_t block_end_off;
	uint32_t end_addr;
	uint32_t write_len;
	uint32_t erase_blk_cnt;
	uint32_t erase_addr;

	assert(entity != NULL);
	assert(buffer != (uintptr_t)NULL);
	assert(length_written != NULL);

	fp = (file_state_t *)entity->info;
	assert(fp != NULL);

	start_addr = fp->offset_address + fp->file_pos;
	end_addr = start_addr + length;
	block_start_off = start_addr % SPI_NOR_ERASE_SIZE;
	block_end_off = end_addr % SPI_NOR_ERASE_SIZE;
	/* Starting block address */
	block_start_addr = start_addr & ~(SPI_NOR_ERASE_SIZE - 1);
	*length_written = 0;

	/*
	 * Handle the first block if it does not begin on an erase block
	 * boundary by first reading the block into a buffer, write to the
	 * block buffer, then write the block back.
	 */
	if (block_start_off != 0) {
		ret = spi_nor_read(spi_buffer, SPI_NOR_ERASE_SIZE,
				   block_start_addr, addr_mode,
				   fp->spi_con, fp->cs);
		if (ret != SPI_NOR_ERASE_SIZE) {
			WARN("%s: Error reading 0x%x bytes from SPI %u:%u at address 0x%x\n",
			     __func__, SPI_NOR_ERASE_SIZE, fp->spi_con, fp->cs,
			     block_start_addr);
			goto error;
		}

		if (start_addr - block_start_addr > SPI_NOR_ERASE_SIZE)
			write_len = SPI_NOR_ERASE_SIZE - (start_addr % SPI_NOR_ERASE_SIZE);
		else
			write_len = length;
		memcpy(spi_buffer + block_start_off, bptr, write_len);
		bptr += write_len;
		length -= write_len;
		ret = spi_nor_erase(block_start_addr, 0,
				    fp->spi_con, fp->cs);
		if (ret < 0) {
			WARN("Error erasing SPI NOR at address 0x%x\n",
			     block_start_addr);
			goto error;
		}
		ret = spi_nor_write(spi_buffer, SPI_NOR_ERASE_SIZE,
				    block_start_addr, addr_mode,
				    fp->spi_con, fp->cs);
		if (ret != SPI_NOR_ERASE_SIZE) {
			WARN("Error writing block to SPI NOR at address 0x%x\n",
			     block_start_addr);
			goto error;
		}
		block_start_addr += SPI_NOR_ERASE_SIZE;
		*length_written += write_len;
	}

	if (length > 0) {
		write_len = length & ~(SPI_NOR_ERASE_SIZE - 1);
		erase_blk_cnt = write_len / SPI_NOR_ERASE_SIZE;
		/* Write entire blocks */
		if (write_len > 0) {
			/* Erase all of the blocks */
			erase_addr = block_start_addr;
			while (erase_blk_cnt) {
				ret = spi_nor_erase(erase_addr, addr_mode,
						    fp->spi_con, fp->cs);
				if (ret < 0) {
					WARN("Error erasing block at address 0x%x\n",
					     block_start_addr);
					goto error;
				}
				erase_addr += SPI_NOR_ERASE_SIZE;
				erase_blk_cnt--;
			}
			/* Now write them */
			ret = spi_nor_write(bptr, write_len,
					    block_start_addr, addr_mode,
					    fp->spi_con, fp->cs);
			if (ret != write_len) {
				WARN("Error writing 0x%x  bytes at address 0x%x\n",
					write_len, block_start_addr);
				goto error;
			}
			*length_written += write_len;
			bptr += write_len;
			length -= write_len;
			block_start_addr += write_len;
		}
		/* Check for end partial write at end */
		if (length) {
			block_start_addr = end_addr & ~(SPI_NOR_ERASE_SIZE - 1);
			block_end_off = end_addr % SPI_NOR_ERASE_SIZE;
			/* Read block of data */
			ret = spi_nor_read(spi_buffer, SPI_NOR_ERASE_SIZE,
					   block_start_addr, addr_mode,
					   fp->spi_con, fp->cs);
			if (ret != SPI_NOR_ERASE_SIZE) {
				WARN("Error reading last block at address 0x%x\n",
				     block_start_addr);
				goto error;
			}
			ret = spi_nor_erase(block_start_addr, addr_mode,
					    fp->spi_con, fp->cs);
			if (ret != 0) {
				WARN("Error erasing SPI %u:%u block at 0x%x\n",
				     fp->spi_con, fp->cs, block_start_addr);
				goto error;
			}
			memcpy(spi_buffer, bptr, block_end_off);
			ret = spi_nor_write(spi_buffer, SPI_NOR_ERASE_SIZE,
					    block_start_addr,
					    addr_mode, fp->spi_con, fp->cs);
			if (ret != SPI_NOR_ERASE_SIZE) {
				WARN("Error writing 0x%x bytes to SPI %u:%u address 0x%x\n",
				     SPI_NOR_ERASE_SIZE, fp->spi_con, fp->cs,
				     block_start_addr);
				goto error;
			}
			*length_written += block_end_off;
		}
	}

	fp->file_pos += *length_written;

	return 0;

error:
	return -EIO;
}

static int spi_block_close(io_entity_t *entity)
{
	file_state_t *fp;

	assert(entity != NULL);

	fp = (file_state_t *)entity->info;
	assert(fp != NULL);

	spi_state_free(fp);
	entity->info = 0;

	return 0;
}

static int spi_block_size(io_entity_t *entity, size_t *length)
{
	file_state_t *fp = (file_state_t *)entity->info;
	*length = fp->length;
	return 0;
}

int spi_block_config(uintptr_t handle, uint32_t spi_con, uint32_t cs)
{
	io_entity_t *entity = (io_entity_t *)handle;
	file_state_t *fp;

	assert(entity != NULL);
	fp = (file_state_t *)entity->info;
	assert(fp != NULL);

	if (spi_con >= MAX_SPI_BUS) {
		WARN("%s: SPI_%u: Unsupported SPI controller\n", __func__,
		     spi_con);
		return -EINVAL;
	}
	if (cs >= MAX_SPI_CS) {
		WARN("%s: SPI_%u: Unsupported SPI CS %u\n", __func__,
		     spi_con, cs);
		return -EINVAL;
	}
	fp->spi_con = spi_con;
	fp->cs = cs;

	spi_config(CONFIG_SPI_FREQUENCY, 0, 0, 0, spi_con, cs);

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
	/* TODO: Consider tracking open files and cleaning them up here */
	return 0;
}


static const io_dev_funcs_t spi_dev_funcs = {
	.type = device_type_spi,
	.open = spi_block_open,
	.seek = spi_block_seek,
	.size = spi_block_size,
	.read = spi_block_read,
	.write = spi_block_write,
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
