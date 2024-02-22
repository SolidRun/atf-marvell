/***********************license start***********************************
 * Copyright (c) 2020 Marvell.
 * SPDX-License-Identifier: BSD-3-Clause
 * https://spdx.org/licenses
 **********************license end**************************************/

#include "emmc_driver_funcs.h"
#include <plat_board_cfg.h>

uint32_t emmc_last_cmd;

extern void octeontx_gpio_init(void);

/*****************************************************************************
 *  Description: Read a phy register
 *  Input Parameters: register to read
 *  Output Parameters: None
 *  Returns: Value of register
 ****************************************************************************/
static uint32_t emmc_read_sd6_phy_reg(uint32_t reg) __attribute__((unused));
static uint32_t emmc_read_sd6_phy_reg(uint32_t reg)
{
	CSR_WRITE(CAVM_EMMCX_HOST_HRS_HRS04(0), reg);
	return CSR_READ(CAVM_EMMCX_HOST_HRS_HRS05(0));
}

/*****************************************************************************
 *  Description: Write to a phy register
 *  Input Parameters: register to write to and value
 *  Output Parameters: None
 *  Returns: None
 ****************************************************************************/
static void emmc_write_sd6_phy_reg(uint32_t reg, uint32_t value)
{
	CSR_WRITE(CAVM_EMMCX_HOST_HRS_HRS04(0), reg);
	CSR_WRITE(CAVM_EMMCX_HOST_HRS_HRS05(0), value);
	CSR_WRITE(CAVM_EMMCX_HOST_HRS_HRS04(0), reg);
	CSR_READ(CAVM_EMMCX_HOST_HRS_HRS05(0));
}

/*****************************************************************************
 *  Description: Reset emmc interrupt bits
 *  Input Parameters: interrupt bits to clear
 *  Output Parameters: None
 *  Returns: None
 ****************************************************************************/
void emmc_clear_interrupts(uint32_t int_mask)
{
		/* Clear the interrupts */
	CSR_WRITE(CAVM_EMMCX_HOST_SRS_SRS12(0), int_mask);
	CSR_READ(CAVM_EMMCX_HOST_SRS_SRS12(0));

}

/******************************************************************************
 *  Description: Set the DMA mode
 *  Input Parameters: dma_mode - DMA mode to use
 *  Output Parameters: None
 *  Returns: None
 *******************************************************************************/
void emmc_SetDmaMode(uint32_t dma_mode)
{
	emmc_cntl1 cdns_cntl1;

	cdns_cntl1.all = CSR_READ(CAVM_EMMCX_HOST_SRS_SRS10(0));
	cdns_cntl1.s.dma_sel = dma_mode;
	CSR_WRITE(CAVM_EMMCX_HOST_SRS_SRS10(0), cdns_cntl1.all);
}

/******************************************************************************
 *  Description: Full software reset of all emmc controller
 *  Input Parameters: None
 *  Output Parameters: None
 *  Returns: NO_ERROR or timeout error
 *******************************************************************************/
uint32_t emmc_FullSWReset(void)
{
	uint32_t reg_srs11 = 0;

	reg_srs11 = CSR_READ(CAVM_EMMCX_HOST_SRS_SRS11(0));
	reg_srs11 |= (EMMC_SRS11_SW_RESET_ALL);
	CSR_WRITE(CAVM_EMMCX_HOST_SRS_SRS11(0), reg_srs11);

	if (EMMC_CSR_WAIT_FOR_FIELD(CAVM_EMMCX_HOST_SRS_SRS11(0), srfa, ==, 0, 10000)) {
		debug_emmc("Failed to do Software full reset of eMMC controller\n");
		debug_emmc("Failure in reset of eMMC controller\n");
	} else {
		debug_emmc("Success in reset of eMMC controller\n");
		return NO_ERROR;
	}
	return STD_TimeOutError;
}

/****************************************************************
 *   Description: 1. Set SD Bus Voltage Select to 3.3
 *                2. Set SD Bus Power
 *   Input: None
 *   Output: None
 *   Returns: None
 *****************************************************************/
void emmc_SetControllerVoltage(void)
{
	uint32_t controller_setting = 0;

	debug_emmc("Setting eMMC voltage to 3.3v\n");
	controller_setting = CSR_READ(CAVM_EMMCX_HOST_SRS_SRS10(0));
	controller_setting &= ~(EMMC_SRS10_SD_BUS_VOLT_SIZE << EMMC_SRS10_SD_BUS_VOLT_BASE);

	controller_setting |= (EMMC_VOLTAGE_3_3 << EMMC_SRS10_SD_BUS_VOLT_BASE);
	controller_setting |= (EMMC_SD_BUS_POWER);

	CSR_WRITE(CAVM_EMMCX_HOST_SRS_SRS10(0), controller_setting);
}

/******************************************************************************
 *  Description: Configure PHY reset
 *  Input Parameters: enable reset, true to enable reset
 *  Output Parameters: None
 *  Returns: None
 *******************************************************************************/
static void card_phy_reset(bool enable_reset)
{
	uint32_t data;

	data = CSR_READ(CAVM_EMMCX_HOST_HRS_HRS09(0));
	if (enable_reset)
		data &= EMMC_CLEAR_PHY_SW_RESET;
	else
		data |= EMMC_SET_PHY_SW_RESET;
	CSR_WRITE(CAVM_EMMCX_HOST_HRS_HRS09(0), data);
	if (!enable_reset) {
		do {
			data = CSR_READ(CAVM_EMMCX_HOST_HRS_HRS09(0));
		} while (!(data & EMMC_PHY_INIT_COMPLETE_BIT));
	}
}

/****************************************************************
 *   Description: pre-initialization sequence, which should be
 *               used before SD/eMMC Initialization sequence, and
 *               before each change of speed mode.
 *               This is mentioned in the user document for the
 *               host controller.
 *               By default initializing to MMC-CFG i.e MMC_SDR
 *   Input: sdclk
 *   Output: None
 *   Returns: None
 *****************************************************************/
void emmc_PreInitSequence(uint32_t sdclk)
{
	uint32_t data = 0;
	uint32_t sdclk_adj = 0;

	debug_emmc("Performing eMMC pre-init sequence\n");

	card_phy_reset(true);
	card_phy_reset(false);

	/* Program DLL PHY_DQS_TIMING_REG */
	data = (1 << EMMC_SET_EXT_LPBK_DQS_) | (1 << EMMC_SET_LPBK_DQS_) |
		(1 << EMMC_SET_PHONY_DQS_) | (1 << EMMC_SET_PHONY_DQS_CMD_);
	emmc_write_sd6_phy_reg(EMMC_PHY_DQS_TIMING_ADDR, data);

	/* Program DLL PHY_GATE_LPBK_CTRL_REG */
	data = (1u << EMMC_SET_SYNC_METHOD_) |
		(0 << EMMC_SET_SW_HALF_CYCLE_SHIFT_) |
		(52 << EMMC_SET_RD_DEL_SEL_) | (0 << EMMC_SET_UNDERRUN_SUPPRESS_) |
		(1 << EMMC_SET_GATE_ALWAYS_ON);
	emmc_write_sd6_phy_reg(EMMC_PHY_GATE_LPBK_CTRL_ADDR, data);

	data = (1 << EMMC_SET_DLL_BYPASS_MODE_) |
		(2 << 20) | (4 << EMMC_SET_DLL_START_POINT_);
	emmc_write_sd6_phy_reg(EMMC_PHY_MASTER_CTRL_ADDR, data);

	/* Program DLL PHY_DLL_SLAVE_CTRL_REG */
	data = (0 << EMMC_SET_READ_DQS_CMD_DELAY_) |
	       (0 << EMMC_SET_CLK_WRDQS_DELAY_) |
	       (0 << EMMC_SET_CLK_WR_DELAY_) |
	       (0 << EMMC_SET_READ_DQS_DELAY_);
	emmc_write_sd6_phy_reg(EMMC_PHY_SLAVE_CTRL_ADDR, data);

	/* Program DLL PHY_CTRL_REG */
	data = emmc_read_sd6_phy_reg(EMMC_PHY_CTRL_ADDR);
	data &= ~EMMC_PHY_CTRL_PHONY_DQS_TIMING;
	emmc_write_sd6_phy_reg(EMMC_PHY_CTRL_ADDR, data);

	/* To Switch Off DLL Reset write 1 to field PHY_SW_RESET */
	card_phy_reset(false);

	    /* Wait for phy_init_complete */
	/* check if asim required */
	while ((CSR_READ(CAVM_EMMCX_HOST_HRS_HRS09(0)) & EMMC_PHY_INIT_COMPLETE_BIT) == 0)
		;

	/* Program DLL PHY_DQ_TIMING_REG */
	data = emmc_read_sd6_phy_reg(EMMC_PHY_DQ_TIMING_ADDR) & 0x07FFFF8;
	data |= (0 << 31) | (0 << 27) | (0 << 24) | (1 << 0);
	emmc_write_sd6_phy_reg(EMMC_PHY_DQ_TIMING_ADDR, data);

	/* Program HRS PHY Control and Status register */
	data = CSR_READ(CAVM_EMMCX_HOST_HRS_HRS09(0)) & EMMC_HRS_CNTL_STAT_INIT_MASK;
	data |= (1 << 16) | (1 << 15) | (1 << 3) | (1 << 2);
	CSR_WRITE(CAVM_EMMCX_HOST_HRS_HRS09(0), data);

	switch (sdclk) {
	case EMMC_CLOCK50MHZRATE:
		sdclk_adj = 3;
		break;
	case EMMC_CLOCK12_5MHZRATE:
		sdclk_adj = 2;
		break;
	case EMMC_CLOCK200KHZRATE:
		sdclk_adj = 1;
		break;
	default:
		sdclk_adj = 1;
		break;
	}

	/* Program HRS Host Controller SDCLK start point adjustment */
	data = CSR_READ(CAVM_EMMCX_HOST_HRS_HRS10(0)) & EMMC_HRS_SDCLK_ADJ_INIT_MASK;
	CSR_WRITE(CAVM_EMMCX_HOST_HRS_HRS10(0), (data | (sdclk_adj << 16)));

	/* Program HRS CMD/DAT output delay */
	CSR_WRITE(CAVM_EMMCX_HOST_HRS_HRS16(0),
		  ((0 << 28) | (0 << 24) | (0 << 20) | (0 << 16) | (0 << 12) |
		  (1 << 8) | (0 << 4) | (1 << 0)));

	/* Program HRS PIO Delay Information Register */
	CSR_WRITE(CAVM_EMMCX_HOST_HRS_HRS07(0), ((9 << 16) | (0 << 0)));
}

/****************************************************************
 *   Description: Stops MMC bus clock.
 *   Input: None
 *   Output: None
 *   Returns: None
 *****************************************************************/

void emmc_StopBusClock(void)
{
	uint32_t reg_srs11;

	debug_emmc("Stopping eMMC bus clock\n");
	reg_srs11 = CSR_READ(CAVM_EMMCX_HOST_SRS_SRS11(0));
	reg_srs11 &= ~(EMMC_SRS11_SD_CLK_EN);
	CSR_WRITE(CAVM_EMMCX_HOST_SRS_SRS11(0), reg_srs11);
}

/****************************************************************
 *   Description: Start MMC bus clock. Only after starting bus
 *                clock, communication between controller and card
 *                is possible.
 *   Input: None
 *   Output: None
 *   Returns: None
 *****************************************************************/

void emmc_StartBusClock(void)
{
	uint32_t reg_srs11;

	debug_emmc("Starting eMMC bus clock\n");
	reg_srs11 = CSR_READ(CAVM_EMMCX_HOST_SRS_SRS11(0));
	reg_srs11 |= EMMC_SRS11_SD_CLK_EN;
	CSR_WRITE(CAVM_EMMCX_HOST_SRS_SRS11(0), reg_srs11);
}


/****************************************************************
 *   Description: Stops the MMC/SD Internal bus clock.
 *   Input: None
 *   Output: None
 *   Returns: None
 *****************************************************************/

void emmc_StopInternalBusClock(void)
{
	uint32_t reg_srs11;

	debug_emmc("%s\n", __func__);
	reg_srs11 = CSR_READ(CAVM_EMMCX_HOST_SRS_SRS11(0));
	reg_srs11 &= ~(EMMC_SRS11_CLOCK_CTRL_INT_CLK_EN);
	CSR_WRITE(CAVM_EMMCX_HOST_SRS_SRS11(0), reg_srs11);
	if (EMMC_CSR_WAIT_FOR_FIELD(CAVM_EMMCX_HOST_SRS_SRS11(0), ics, ==, 0, 1000)) {
		debug_emmc("Failed to stop internal mmc clock\n");
	} else {
		debug_emmc("Success in stopping internal mmc clock\n");
	}
}

/****************************************************************
 *   Description: Starts internal bus clock. Only after starting bus
 *                clock, communication between controller and card
 *                is possible.
 *   Input: None
 *   Output: None
 *   Returns: None
 *****************************************************************/

void emmc_StartInternalBusClock(void)
{
	uint32_t reg_srs11;

	debug_emmc("%s\n", __func__);
	reg_srs11 = CSR_READ(CAVM_EMMCX_HOST_SRS_SRS11(0));
	reg_srs11 |= (EMMC_SRS11_CLOCK_CTRL_INT_CLK_EN);
	CSR_WRITE(CAVM_EMMCX_HOST_SRS_SRS11(0), reg_srs11);
	if (EMMC_CSR_WAIT_FOR_FIELD(CAVM_EMMCX_HOST_SRS_SRS11(0), ics, ==, 1, 1000)) {
		debug_emmc("Failed to do stable internal mmc clock\n");
	} else {
		debug_emmc("Success in stable of internal mmc clock\n");
	}
}


/****************************************************************
 *   Description: Set a new MMC bus clock rate. This function
 *                stops and resumes bus clock.
 *   Input: sdhclock - SD Master clock rate
 *          sdclk - bus clock speed
 *   Output: None
 *   Returns: None
 *****************************************************************/
void emmc_SetBusRate(uint32_t sdhClock, uint32_t sdclk)
{
	uint32_t reg_srs11;
	uint32_t divider;

	debug_emmc("%s\n", __func__);
	/* Stop the bus clock stop, set rate, then start the bus clock. */
	emmc_StopBusClock();

	/* Updated for SD card working */
	emmc_StartInternalBusClock();

	/* Pre-init sequence setting to MMC_SDR*/
	emmc_PreInitSequence(sdclk);

	/* change the frequency: */
	reg_srs11 = CSR_READ(CAVM_EMMCX_HOST_SRS_SRS11(0));
	reg_srs11 &= ~(EMMC_CLOCK_CTRL_SD_FREQ_SEL_LO_MSK);
	reg_srs11 &= ~(EMMC_CLOCK_CTRL_SD_FREQ_SEL_HI_MSK);

	/*calculate divider */
	divider = ((EMMC_CLOCK200MHZRATE / 2) / sdclk);

	/* the divider cannot overflow 10bits, which is 0x3FF */
	if (divider > MAXCLOCKDIVIDER)
		divider = MAXCLOCKDIVIDER;

	reg_srs11 |= ((divider & 0xff) << EMMC_CLOCK_CTRL_SD_FREQ_SEL_LO_BASE);
	reg_srs11 |= ((divider >> 8) << EMMC_CLOCK_CTRL_SD_FREQ_SEL_HI_BASE);

	CSR_WRITE(CAVM_EMMCX_HOST_SRS_SRS11(0), reg_srs11);

	/* now ready to turn on the clock at the new frequency.
	 * make sure bus clocks are running before returning.
	 */
	emmc_StartBusClock();
	//debug_emmc("Done emmc_SetBusRate\n");
}

/****************************************************************
 *   Description: Set the data response timeout value.
 *   Input: timeout - the value which will be written into DTOCNTR
 *   Output: None
 *   Returns: None
 *****************************************************************/
void emmc_SetDataTimeout(uint8_t timeout)
{
	uint32_t reg_srs11;

	debug_emmc("%s\n", __func__);
	reg_srs11 = CSR_READ(CAVM_EMMCX_HOST_SRS_SRS11(0));
	reg_srs11 &= ~(EMMC_SRS11_DTCO_MSK);
	reg_srs11 |= (timeout << (EMMC_SRS11_DTCO_BASE));
	CSR_WRITE(CAVM_EMMCX_HOST_SRS_SRS11(0), reg_srs11);
}

/****************************************************************
 *   Description: will induce a software reset of all cmd lines.
 *   Input: None
 *   Output: None
 *   Returns: None
 *****************************************************************/
void emmc_CMDSWReset(void)
{
	uint32_t reg_srs11;

	debug_emmc("%s\n", __func__);
	reg_srs11 = CSR_READ(CAVM_EMMCX_HOST_SRS_SRS11(0));
	reg_srs11 |= (EMMC_SRS11_SW_RESET_CMD);
	CSR_WRITE(CAVM_EMMCX_HOST_SRS_SRS11(0), reg_srs11);

	if (EMMC_CSR_WAIT_FOR_FIELD(CAVM_EMMCX_HOST_SRS_SRS11(0), srcmd, ==, 0, 1000)) {
		debug_emmc("Failure in cmd lines reset of eMMC controller\n");
	} else {
		debug_emmc("Success in cmd lines reset of eMMC controller\n");
	}
}

/****************************************************************
 *   Description: will induce a software reset of all data lines.
 *   Input: None
 *   Output: None
 *   Returns: None
 *****************************************************************/
void emmc_DataSWReset(void)
{
	uint32_t reg_srs11;

	debug_emmc("%s\n", __func__);
	reg_srs11 = CSR_READ(CAVM_EMMCX_HOST_SRS_SRS11(0));
	reg_srs11 |= (EMMC_SRS11_SW_RESET_DAT);
	CSR_WRITE(CAVM_EMMCX_HOST_SRS_SRS11(0), reg_srs11);

	if (EMMC_CSR_WAIT_FOR_FIELD(CAVM_EMMCX_HOST_SRS_SRS11(0), srdat, ==, 0, 1000)) {
		debug_emmc("Failure in data lines reset of eMMC controller\n");
	} else {
		debug_emmc("Success in data lines reset of eMMC controller\n");
	}
}

void emmc_set_adma_desc(adma_desc_t *desc, uint64_t addr, uint16_t len, bool end)
{
	desc->attr = ADMA_DESC_ATTR_VALID | ADMA_DESC_ATTR_XFER_DATA;
	if (end)
		desc->attr |= ADMA_DESC_ATTR_END;
	desc->len = len;
	desc->reserved = 0;
	desc->addr_lo = addr & 0xffffffff;
	desc->addr_hi = (addr >> 16) >> 16;
}

uint32_t emmc_setup_adma_table(adma_desc_t *table, uint64_t addr,
			       uint32_t block_size, uint32_t num_blocks)
{
	uint32_t num_bytes = block_size * num_blocks;
	uint32_t num_descr = DIV_ROUND_UP_2EVAL(num_bytes, EMMC_MAX_ADMA_LEN);
	adma_desc_t *desc = table;
	uint32_t cur_descr = 0;

	if (num_descr >= ADMA_TABLE_MAX_ENTRIES) {
		ERROR("MMC DMA, too many blocks (%u)\n", num_blocks);
		return SDMMC_GENERAL_ERROR;
	}

	for (cur_descr = 0; cur_descr < num_descr; cur_descr++) {
		emmc_set_adma_desc(desc, addr,
				   (uint16_t)EMMC_MAX_ADMA_LEN, false);
		desc++;
		addr += EMMC_MAX_ADMA_LEN;
		num_bytes -= EMMC_MAX_ADMA_LEN;
	}
	emmc_set_adma_desc(desc, addr, num_bytes, true);

	flush_dcache_range((uintptr_t)table, sizeof(*desc) * (num_descr + 1));

	return 0;
}

/****************************************************************
 *   Description: Set up the registers of the controller to start
 *                the transaction to communicate to the card for
 *                data related command. The commands are clearly
 *                defined in the MMC specification.
 *   Input: cmd - See MMC or SD specification
 *          argument - argument of  the command
 *          blockType - Single or Multiple block type
 *          resType - Expected response type
 *          dmaMode - type of DMA
 *          AutoCmd23En - command 23 enable
 *          rpmb_enable = emmc special partition access
 *   Output: None
 *   Returns: Possible TimeOutError, otherwise NO_ERROR
 *****************************************************************/
uint32_t emmc_SendDataCommand(uint32_t cmd, uint32_t argument,
			      uint32_t blockType,
			      uint32_t dataDir,
			      uint32_t resType,
			      uint32_t dmaMode,
			      uint32_t AutoCmd23En,
			      uint32_t rbmp_enable)
{
	uint32_t cmd_framed;
	union cavm_emmcx_host_srs_srs11 srs11;
	union cavm_emmcx_host_srs_srs01 srs01;

	emmc_last_cmd = cmd;

	debug_emmc("%s: cmd: %u, argument: 0x%x, block type: 0x%x, data dir: 0x%x, block type: 0x%x\n",
		   __func__, cmd, argument, blockType, dataDir, blockType);
	debug_emmc("response type: 0x%x, dma mode: 0x%x, auto cmd23: 0x%x, rbmp_enable: 0x%x\n",
		   resType, dmaMode, AutoCmd23En, rbmp_enable);
	/* Make sure the controller is ready to accept the next data command */
	/* See SDHCI_PRESENT_STATE */
	if (EMMC_CSR_WAIT_FOR_FIELD(CAVM_EMMCX_HOST_SRS_SRS09(0),
				    cidat, !=, 1, 100000)) {
		debug_emmc("Failure next data command cannot be sent to eMMC controller\n");
		debug_emmc("CAVM_EMMC(0)_HOST_SRS_SRS09: 0x%lx\n",
			   CSR_READ(CAVM_EMMCX_HOST_SRS_SRS09(0)));
		debug_emmc("CAVM_EMMC(0)_HOST_SRS_SRS12: 0x%lx\n",
			   CSR_READ(CAVM_EMMCX_HOST_SRS_SRS12(0)));
		return STD_TimeOutError;
	}

	emmc_clear_interrupts(0xffffffff);

	srs11.u = CSR_READ(CAVM_EMMCX_HOST_SRS_SRS11(0));
	srs11.s.dtcv = 0xe;	/* Set data timeout to  t_sdmclk*2^(27+2) */
	CSR_WRITE(CAVM_EMMCX_HOST_SRS_SRS11(0), srs11.u);
	srs01.u = CSR_READ(CAVM_EMMCX_HOST_SRS_SRS01(0));
	srs01.s.tbs = SDHC_BLOCK_LEN;
	srs01.s.sdmabb = MM4_512_HOST_DMA_BDRY;
	CSR_WRITE(CAVM_EMMCX_HOST_SRS_SRS01(0), srs01.u);
	/* Set the Argument Field */
	CSR_WRITE(CAVM_EMMCX_HOST_SRS_SRS02(0), argument);

	/* Set the Command fields. */
	cmd_framed = ((cmd << EMMC_CMD_CMD_INDEX_BASE) |
		      (EMMC_CMD_TYPE_NORMAL << EMMC_CMD_CMD_TYPE_BASE) |
		      (resType << EMMC_CMD_RESP_TYPE_BASE) |
		      EMMC_CMD_DATA_PRESENT | EMMC_TRANSFER_MODE_BLK_CNT_EN);

	/* Set the Transfer Mode fields */
	if (blockType == MM4_MULTI_BLOCK_TRAN)
		cmd_framed |= EMMC_TRANSFER_MODE_MULTI_BLK_SEL;
	cmd_framed |= dataDir << EMMC_TRANSFER_MODE_TO_HOST_DIR_BASE;

	/* if SDMA/ADMA2 */
	if (dmaMode)
		cmd_framed |= EMMC_TRANSFER_MODE_DMA_EN;

	/* CMD23 -> Lets the card know about number of blocks to transfer for the
	 * upcoming read/write transaction.
	 * AutoCMD23 should be sent prior to CMD18 or CMD25 if ADMA2 is used and
	 * BLK_CNT is disabled for ADMA2.
	 * Since AutoCMD23 is sent, AutoCMD12 is not required
	 * RPMB do not need AutoCMD23
	 */
	if (AutoCmd23En && (!rbmp_enable)) {
		cmd_framed |= EMMC_TRANSFER_MODE_AUTO_CMD23_EN;
	} else {
		/*For PIO and SDMA mode,  notice that autocmd12 is not set for RPMB xfers */
		if (!rbmp_enable && (blockType == MM4_MULTI_BLOCK_TRAN))
			cmd_framed |= EMMC_TRANSFER_MODE_AUTO_CMD12_EN;
	}

	debug_emmc("in emmc_SendDataCommand for cmd::%x cmd_framed::%x\n", cmd, cmd_framed);
	/* start the command execution*/
	CSR_WRITE(CAVM_EMMCX_HOST_SRS_SRS03(0), cmd_framed);
	return 0;
}

/****************************************************************
 *   Description: Set up the registers of the controller to start
 *                the transaction to communicate to the card for
 *                data related command. The commands are clearly
 *                defined in the MMC specification.
 *   Input: cmd - See MMC or SD specification
 *          argument - argument of  the command
 *          blockType - Single or Multiple block type
 *          resType - Expected response type
 *          dmaMode - type of DMA
 *          blkcnt_enable -
 *   Output: None
 *   Returns: Possible TimeOutError, otherwise NO_ERROR
 *****************************************************************/
uint32_t emmc_SendDataCommandNoAuto12(uint32_t cmd,
				      uint32_t argument,
				      uint32_t blockType,
				      uint32_t dataDir,
				      uint32_t resType,
				      uint32_t dmaMode,
				      uint32_t blkcnt_enable)
{
	uint32_t cmd_framed;

	debug_emmc("%s\n", __func__);
	/* Make sure the controller is ready to accept the next data command */
	if (EMMC_CSR_WAIT_FOR_FIELD(CAVM_EMMCX_HOST_SRS_SRS09(0), cidat, !=, 1, 10000)) {
		debug_emmc("Failure next data command cannot be sent to eMMC controller\n");
		return STD_TimeOutError;
	}

	/* Set the Argument Field */
	CSR_WRITE(CAVM_EMMCX_HOST_SRS_SRS02(0), argument);

	/* Set the Command fields. */
	cmd_framed = ((cmd << EMMC_CMD_CMD_INDEX_BASE) |
		      (EMMC_CMD_TYPE_NORMAL << EMMC_CMD_CMD_TYPE_BASE) |
		      (resType << EMMC_CMD_RESP_TYPE_BASE) |
		      (EMMC_CMD_DATA_PRESENT));

	/* Set the Transfer Mode fields */
	cmd_framed |= ((blockType << EMMC_TRANSFER_MODE_MULTI_BLK_SEL_BASE) |
		(dataDir << EMMC_TRANSFER_MODE_TO_HOST_DIR_BASE));

	/* note that auto_cmd12 & auto_cmd23 are both clear... */

	/*if SDMA/ADMA2 */
	if (dmaMode)
		cmd_framed |= EMMC_TRANSFER_MODE_DMA_EN;

	if (blkcnt_enable)
		cmd_framed |= EMMC_TRANSFER_MODE_BLK_CNT_EN;

	/* start the command execution*/
	CSR_WRITE(CAVM_EMMCX_HOST_SRS_SRS03(0), cmd_framed);
	return 0;
}


/****************************************************************
 *   Description: Set up the registers of the controller to start
 *                the transaction to communicate to the card for
 *                data related command. The commands are clearly
 *                defined in the MMC specification.
 *   Input: cmd - See MMC or SD specification
 *          argument - argument of  the command
 *          resType - Expected response type
 *   Output: None
 *   Returns: Possible TimeOutError, otherwise NO_ERROR
 *****************************************************************/
uint32_t emmc_SendSetupCommand(uint32_t cmd, uint32_t argument, uint32_t resType)
{
	uint32_t cmd_framed;

	emmc_last_cmd = cmd;

	debug_emmc("%s\n", __func__);
	//debug_emmc("In emmc_SendSetupCommand cmd::%d\n",cmd);
	/* Make sure the controller is ready to accept the next data command */
	if (EMMC_CSR_WAIT_FOR_FIELD(CAVM_EMMCX_HOST_SRS_SRS09(0), cicmd, !=, 1, 10000)) {
		debug_emmc("Failure next command cannot be sent to eMMC controller\n");
		return STD_TimeOutError;
	}

	/*emmc_clear_interrupts(0xffffffff);*/

	//debug_emmc("Ready In emmc_SendSetupCommand cmd::%d\n",cmd);
	/* Set the Argument Field */
	CSR_WRITE(CAVM_EMMCX_HOST_SRS_SRS02(0), argument);

	/* Set the Command fields. */
	cmd_framed = ((cmd << EMMC_CMD_CMD_INDEX_BASE) |
		(EMMC_CMD_TYPE_NORMAL << EMMC_CMD_CMD_TYPE_BASE) |
		(resType << EMMC_CMD_RESP_TYPE_BASE));

	switch (resType & EMMC_RESTYPE_MASK) {
	case EMMC_RESTYPE_NONE:
		break;
	case EMMC_RESTYPE_R2:
		cmd_framed |= EMMC_CMD_CMD_CRC_CHK_EN;
		break;
	case EMMC_RESTYPE_R3:
	case EMMC_RESTYPE_R4:
		break;
	case EMMC_RESTYPE_R1:
	case EMMC_RESTYPE_R5:
	case EMMC_RESTYPE_R6:
	case EMMC_RESTYPE_R7:
		cmd_framed |= (EMMC_CMD_CMD_INDEX_CHK_EN | EMMC_CMD_CMD_CRC_CHK_EN);
		break;
	default:
		break;
	}

	if (cmd == STD_MMC_CMD14)
		cmd_framed &= ~(EMMC_CMD_CMD_CRC_CHK_EN);

	//debug_emmc("Sending In emmc_SendSetupCommand cmd::%d cmd_framed::%x\n",cmd, cmd_framed);
	/* start the command execution*/
	CSR_WRITE(CAVM_EMMCX_HOST_SRS_SRS03(0), cmd_framed);
	return 0;
}

/****************************************************************
 *   Description: This routine unmasks and enables or masks and
 *                disables required interrupts needed by the driver.
 *   Input: enable/disable interrupts
 *   Output: None
 *   Returns: None
 *****************************************************************/
void emmc_EnableDisableIntSources(uint8_t int_cfg)
{
	uint32_t reg_srs14 = 0;
	uint32_t reg_srs13 = 0;
	uint32_t mask = 0;

	debug_emmc("%s\n", __func__);
	/* these are the only bits of interest: */
	mask = (EMMC_NORMAL_INT_STATUS_CMD_COMPLETE |
	EMMC_NORMAL_INT_STATUS_XFER_COMPLETE |
	EMMC_NORMAL_INT_STATUS_DMA_INT |
	EMMC_NORMAL_INT_STATUS_TX_RDY |
	EMMC_NORMAL_INT_STATUS_RX_RDY |
	EMMC_ERROR_INT_STATUS_CMD_TIMEOUT_ERR |
	EMMC_ERROR_INT_STATUS_CMD_END_BIT_ERR |
	EMMC_ERROR_INT_STATUS_DATA_TIMEOUT_ERR |
	EMMC_ERROR_INT_STATUS_RD_DATA_CRC_ERR |
	EMMC_ERROR_INT_STATUS_RD_DATA_END_BIT_ERR |
	EMMC_ERROR_INT_STATUS_ADMA_ERR);

	reg_srs14 = CSR_READ(CAVM_EMMCX_HOST_SRS_SRS14(0));
	if (int_cfg) {
		/* set the bits to enable the interupts */
		reg_srs14 |= mask;
	} else {
		/* clear the bits to disable the interrupts */
		reg_srs14 &= ~mask;
	}
	CSR_WRITE(CAVM_EMMCX_HOST_SRS_SRS14(0), reg_srs14);

	reg_srs13 = CSR_READ(CAVM_EMMCX_HOST_SRS_SRS13(0));
	if (int_cfg) {
		/* set the bits to enable the interupts */
		reg_srs13 |= mask;
	} else {
		/* clear the bits to disable the interrupts */
		reg_srs13 &= ~mask;
	}
	CSR_WRITE(CAVM_EMMCX_HOST_SRS_SRS13(0), reg_srs13);
}

/****************************************************************
 *   Description: This function will indicate if the card is
 *                inserted inside the slot.
 *   Input: None
 *   Output: None
 *   Returns: NO_ERROR or timeout error
 *****************************************************************/
uint32_t emmc_IsCardInserted(void)
{
	uint32_t timeout = 100;

	do	{
		if ((CSR_READ(CAVM_EMMCX_HOST_SRS_SRS09(0)) & (SETBIT(16))) != 0) {
			/* desired condition met? */
			return NO_ERROR;
		}
		udelay(10);
	} while (timeout--);
	debug_emmc("%s car not inserted\n", __func__);
	return STD_TimeOutError;
}

/****************************************************************
 *   Description: This function will induce a Cadence specific
 *                setup for software reset
 *   Input: None
 *   Output: None
 *   Returns: NO_ERROR or timeout error
 *****************************************************************/
uint32_t emmc_IPSpecificInit(void)
{
	uint32_t timeout = 100;

	debug_emmc("%s\n", __func__);
	CSR_WRITE(CAVM_EMMCX_HOST_HRS_HRS00(0),
		(CSR_READ(CAVM_EMMCX_HOST_HRS_HRS00(0)) | 1));
	CSR_WRITE(CAVM_EMMCX_HOST_HRS_HRS02(0), (3 << 16 | 4 << 0));

	do {
		if (!(CSR_READ(CAVM_EMMCX_HOST_HRS_HRS00(0)) & 1)) {
			/* desired condition met? */
			udelay(100);
			return NO_ERROR;
		}
		udelay(10);
	} while (timeout--);
	return STD_TimeOutError;
}
