/***********************license start***********************************
 * Copyright (c) 2020 Marvell.
 * SPDX-License-Identifier: BSD-3-Clause
 * https://spdx.org/licenses
 **********************license end**************************************/

#include "emmc_driver_funcs.h"
#include <plat_board_cfg.h>

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

	controller_setting = CSR_READ(CAVM_EMMCX_HOST_SRS_SRS10(0));
	controller_setting &= ~(EMMC_SRS10_SD_BUS_VOLT_SIZE << EMMC_SRS10_SD_BUS_VOLT_BASE);

	controller_setting |= (EMMC_VOLTAGE_3_3 << EMMC_SRS10_SD_BUS_VOLT_BASE);
	controller_setting |= (EMMC_SD_BUS_POWER);

	CSR_WRITE(CAVM_EMMCX_HOST_SRS_SRS10(0), controller_setting);
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

	/* To Switch On DLL Reset write 0 to field PHY_SW_RESET in HRS09 register 42.*/
	CSR_WRITE(CAVM_EMMCX_HOST_HRS_HRS09(0),
		(CSR_READ(CAVM_EMMCX_HOST_HRS_HRS09(0)) & EMMC_CLEAR_PHY_SW_RESET));

	/* Program DLL PHY_DQS_TIMING_REG */
	CSR_WRITE(CAVM_EMMCX_HOST_HRS_HRS04(0), EMMC_PHY_DQS_TIMING_ADDR);
	//data = CSR_READ(CAVM_EMMCX_HOST_HRS_HRS05(0)) &
	//	EMMC_PHY_DQS_TIMING_INIT_MASK;
	data = (1 << EMMC_SET_EXT_LPBK_DQS_) | (1 << EMMC_SET_LPBK_DQS_) |
		(1 << EMMC_SET_PHONY_DQS_) | (1 << EMMC_SET_PHONY_DQS_CMD_);
	CSR_WRITE(CAVM_EMMCX_HOST_HRS_HRS05(0), data);

	/* Program DLL PHY_GATE_LPBK_CTRL_REG */
	CSR_WRITE(CAVM_EMMCX_HOST_HRS_HRS04(0), EMMC_PHY_GATE_LPBK_CTRL_ADDR);
	//data = CSR_READ(CAVM_EMMCX_HOST_HRS_HRS05(0)) &
	//	EMMC_PHY_GATE_LPBK_CTRL_INIT_MASK;
	data = ((uint32_t)1 << ((uint32_t) (EMMC_SET_SYNC_METHOD_))) |
		(0 << EMMC_SET_SW_HALF_CYCLE_SHIFT_) |
		(52 << EMMC_SET_RD_DEL_SEL_) | (1 << EMMC_SET_UNDERRUN_SUPPRESS_) |
		(1 << EMMC_SET_GATE_ALWAYS_ON);
	CSR_WRITE(CAVM_EMMCX_HOST_HRS_HRS05(0), data);

	/* Program DLL PHY_DLL_MASTER_CTRL_REG */
	CSR_WRITE(CAVM_EMMCX_HOST_HRS_HRS04(0), EMMC_PHY_MASTER_CTRL_ADDR);
	data = (CSR_READ(CAVM_EMMCX_HOST_HRS_HRS05(0))) &
		~((0x1 << 23) | (0x7 << 20) | (0xff << 0));
	data |= (1 << EMMC_SET_DLL_BYPASS_MODE_) |
		(2 << 20) | (4 << EMMC_SET_DLL_START_POINT_);
	CSR_WRITE(CAVM_EMMCX_HOST_HRS_HRS05(0), data);

	/* Program DLL PHY_DLL_SLAVE_CTRL_REG */
	CSR_WRITE(CAVM_EMMCX_HOST_HRS_HRS04(0), EMMC_PHY_SLAVE_CTRL_ADDR);
	data = (0 << EMMC_SET_READ_DQS_CMD_DELAY_) |
		(0 << EMMC_SET_CLK_WRDQS_DELAY_) |
		(0 << EMMC_SET_CLK_WR_DELAY_) |
		(0 << EMMC_SET_READ_DQS_DELAY_);
	CSR_WRITE(CAVM_EMMCX_HOST_HRS_HRS05(0), data);

	/* Program DLL PHY_CTRL_REG */
	CSR_WRITE(CAVM_EMMCX_HOST_HRS_HRS04(0), EMMC_PHY_CTRL_ADDR);
	data = CSR_READ(CAVM_EMMCX_HOST_HRS_HRS05(0));
	data &= ~(0x3f << 4);
	CSR_WRITE(CAVM_EMMCX_HOST_HRS_HRS05(0), data);

	/* To Switch Off DLL Reset write 1 to field PHY_SW_RESET */
	CSR_WRITE(CAVM_EMMCX_HOST_HRS_HRS09(0),
		(CSR_READ(CAVM_EMMCX_HOST_HRS_HRS09(0)) | EMMC_SET_PHY_SW_RESET));

	/* Wait for phy_init_complete */
	/* check if asim required */
	while ((CSR_READ(CAVM_EMMCX_HOST_HRS_HRS09(0))
		& EMMC_PHY_INIT_COMPLETE_BIT) == 0) {
		}

	/* Program DLL PHY_DQ_TIMING_REG */
	CSR_WRITE(CAVM_EMMCX_HOST_HRS_HRS04(0), EMMC_PHY_DQ_TIMING_ADDR);
	data = CSR_READ(CAVM_EMMCX_HOST_HRS_HRS05(0)) & 0x07FFFF8;
	CSR_WRITE(CAVM_EMMCX_HOST_HRS_HRS05(0),
		(data | (0 << 31) | (0 << 27) | (0 << 24) | (1 << 0)));

	/* Program HRS PHY Control and Status register */
	data = CSR_READ(CAVM_EMMCX_HOST_HRS_HRS09(0)) &
		EMMC_HRS_CNTL_STAT_INIT_MASK;
	CSR_WRITE(CAVM_EMMCX_HOST_HRS_HRS09(0), (data | (1 << 16) |
		(1 << 15) | (1 << 3) | (1 << 2)));

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
	data = CSR_READ(CAVM_EMMCX_HOST_HRS_HRS10(0)) &
		EMMC_HRS_SDCLK_ADJ_INIT_MASK;
	CSR_WRITE(CAVM_EMMCX_HOST_HRS_HRS10(0), (data | (sdclk_adj << 16)));

	/* Program HRS CMD/DAT output delay */
	CSR_WRITE(CAVM_EMMCX_HOST_HRS_HRS16(0), ((0 << 28) | (0 << 24) |
		(0 << 20) | (0 << 16) | (0 << 12) | (1 << 8) | (0 << 4) | (1 << 0)));

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

	reg_srs11 = CSR_READ(CAVM_EMMCX_HOST_SRS_SRS11(0));
	reg_srs11 |= (EMMC_SRS11_SD_CLK_EN);
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

	reg_srs11 = CSR_READ(CAVM_EMMCX_HOST_SRS_SRS11(0));
	reg_srs11 &= ~(EMMC_SRS11_CLOCK_CTRL_INT_CLK_EN);
	CSR_WRITE(CAVM_EMMCX_HOST_SRS_SRS11(0), reg_srs11);
	if (EMMC_CSR_WAIT_FOR_FIELD(CAVM_EMMCX_HOST_SRS_SRS11(0), ics, ==, 0, 1000)) {
		debug_emmc("Failed to stop internal mmc clock\n");
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

	reg_srs11 = CSR_READ(CAVM_EMMCX_HOST_SRS_SRS11(0));
	reg_srs11 |= (EMMC_SRS11_CLOCK_CTRL_INT_CLK_EN);
	CSR_WRITE(CAVM_EMMCX_HOST_SRS_SRS11(0), reg_srs11);
	if (EMMC_CSR_WAIT_FOR_FIELD(CAVM_EMMCX_HOST_SRS_SRS11(0), ics, ==, 1, 1000)) {
		debug_emmc("Failed to do stable internal mmc clock\n");
		debug_emmc("Failure to do stable internal mmc clock\n");
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
	if (sdclk == EMMC_CLOCK200KHZRATE)
		divider = 250;

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

	reg_srs11 = CSR_READ(CAVM_EMMCX_HOST_SRS_SRS11(0));
	reg_srs11 |= (EMMC_SRS11_SW_RESET_CMD);
	CSR_WRITE(CAVM_EMMCX_HOST_SRS_SRS11(0), reg_srs11);

	if (EMMC_CSR_WAIT_FOR_FIELD(CAVM_EMMCX_HOST_SRS_SRS11(0), srcmd, ==, 0, 1000)) {
		debug_emmc("Failed to do cmd lines reset of eMMC controller\n");
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

	reg_srs11 = CSR_READ(CAVM_EMMCX_HOST_SRS_SRS11(0));
	reg_srs11 |= (EMMC_SRS11_SW_RESET_DAT);
	CSR_WRITE(CAVM_EMMCX_HOST_SRS_SRS11(0), reg_srs11);

	if (EMMC_CSR_WAIT_FOR_FIELD(CAVM_EMMCX_HOST_SRS_SRS11(0), srdat, ==, 0, 1000)) {
		debug_emmc("Failed to do data lines reset of eMMC controller\n");
		debug_emmc("Failure in data lines reset of eMMC controller\n");
	} else {
		debug_emmc("Success in data lines reset of eMMC controller\n");
	}
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
								uint32_t blockType, uint32_t dataDir,
								uint32_t resType, uint32_t dmaMode,
								uint32_t AutoCmd23En,
								uint32_t rbmp_enable)
{
	uint32_t cmd_framed;

	/* Make sure the controller is ready to accept the next data command */
	if (EMMC_CSR_WAIT_FOR_FIELD(CAVM_EMMCX_HOST_SRS_SRS09(0), cidat, !=, 1, 10000)) {
		debug_emmc("Failure next data command cannot be sent to eMMC controller\n");
		return STD_TimeOutError;
	}

	/* Set the Argument Field */
	CSR_WRITE(CAVM_EMMCX_HOST_SRS_SRS02(0), argument);

	/* Set the Command fields. */
	cmd_framed = ((cmd << EMMC_CMD_CMD_INDEX_BASE) | (EMMC_CMD_TYPE_NORMAL <<
		EMMC_CMD_CMD_TYPE_BASE) | (resType << EMMC_CMD_RESP_TYPE_BASE) |
		(EMMC_CMD_DATA_PRESENT));

	/* Set the Transfer Mode fields */
	cmd_framed |= ((blockType << EMMC_TRANSFER_MODE_MULTI_BLK_SEL_BASE) |
		(dataDir << EMMC_TRANSFER_MODE_TO_HOST_DIR_BASE));

	/*if SDMA/ADMA2 */
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

		cmd_framed |= EMMC_TRANSFER_MODE_BLK_CNT_EN;
	}

	/*if Write & ADMA2, enable BlockCount */
	if ((!dataDir) & AutoCmd23En)
		cmd_framed |= EMMC_TRANSFER_MODE_BLK_CNT_EN;

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
uint32_t emmc_SendDataCommandNoAuto12(uint32_t cmd, uint32_t argument,
								uint32_t blockType, uint32_t dataDir,
								uint32_t resType, uint32_t dmaMode,
								uint32_t blkcnt_enable)
{
	uint32_t cmd_framed;

	/* Make sure the controller is ready to accept the next data command */
	if (EMMC_CSR_WAIT_FOR_FIELD(CAVM_EMMCX_HOST_SRS_SRS09(0), cidat, !=, 1, 10000)) {
		debug_emmc("Failure next data command cannot be sent to eMMC controller\n");
		debug_emmc("Failure next data command cannot be sent to eMMC controller\n");
		return STD_TimeOutError;
	}

	/* Set the Argument Field */
	CSR_WRITE(CAVM_EMMCX_HOST_SRS_SRS02(0), argument);

	/* Set the Command fields. */
	cmd_framed = ((cmd << EMMC_CMD_CMD_INDEX_BASE) | (EMMC_CMD_TYPE_NORMAL <<
		EMMC_CMD_CMD_TYPE_BASE) | (resType << EMMC_CMD_RESP_TYPE_BASE) |
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

	//debug_emmc("In emmc_SendSetupCommand cmd::%d\n",cmd);
	/* Make sure the controller is ready to accept the next data command */
	if (EMMC_CSR_WAIT_FOR_FIELD(CAVM_EMMCX_HOST_SRS_SRS09(0), cicmd, !=, 1, 10000)) {
		debug_emmc("Failure next command cannot be sent to eMMC controller\n");
		debug_emmc("Failure next command cannot be sent to eMMC controller\n");
		return STD_TimeOutError;
	}

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
