/***********************license start***********************************
 * Copyright (c) 2020 Marvell.
 * SPDX-License-Identifier: BSD-3-Clause
 * https://spdx.org/licenses
 **********************license end**************************************/

#include <string.h>
#include "emmc_wrapper_funcs.h"
#include "emmc_driver_funcs.h"

/****************************************************************
 *   Description:
 *   Input: None
 *   Output: None
 *   Returns: None
 *****************************************************************/
extern card_properties_t crd_prop;
extern emmc_response_t   last_cmd_resp;
extern img_txfer_t       img_txfer_upd;
extern card_transfer_t   card_txfer_upd;
extern cmd_framed_t      last_cmd_framed;
extern card_registers_t  card_reg;
extern emmc_blk_cntl   blk_ctrl;

/******************************************************************************
 *  Description: Initialize the card
 *  Input Parameters: None
 *  Output Parameters: None
 *  Returns: None
 *******************************************************************************/
uint32_t card_init(void)
{
	uint32_t rca = 0;
	uint32_t result  = 0;
	uint32_t argument = 0;
	uint32_t bus_width = 0;

	debug_emmc("EMMC Starting card init\n");

	if (!cavm_is_platform(PLATFORM_ASIM)) {
		bus_width = 8;
	}

	crd_prop.SdhClock = EMMC_CLOCK50MHZRATE;
	udelay(1000);
	crd_prop.strictErrChk = 0;
	crd_prop.emmc_dma_type = NODMA;
	crd_prop.last_send_cmd_resptype = 0;
	crd_prop.card_state = UNINITIALIZED;

	/* Issue a full reset. */
	if (emmc_FullSWReset() != NO_ERROR)
		return SDMMC_INIT_TIMEOUT_ERROR;
	/* HRS00 & HRS02 Setup */
	if (emmc_IPSpecificInit() != NO_ERROR)
		return SDMMC_INIT_TIMEOUT_ERROR;
	/* Card Detection  */
	if (emmc_IsCardInserted() != NO_ERROR)
		return STD_SDMMCNotFound;

	emmc_SetControllerVoltage();
	emmc_SetBusRate(crd_prop.SdhClock, EMMC_CLOCK200KHZRATE);
	emmc_SetDataTimeout(EMMC_CLOCK_27_MULT);
	emmc_EnableDisableIntSources(1);

	result = identify_card();
	if (result != NO_ERROR)
		return STD_SDMMCNotFound;
	/* Set up State */
	crd_prop.card_state = INITIALIZE;

	/* SD and MMC joint functionality again
	 * At this point we should have our OCR contents.
	 * See if they match the voltage range we choose for the controller
	 */
	result = emmc_CheckVoltageCompatibility((uint32_t)EMMC_VLTGSEL_3_3);
	if (result != NO_ERROR)
		return SDMMCInitializationError;

	/*send CMD2 to get the CID numbers */
	wrapper_SendSetupCommand(STD_MMC_CMD2, 0, EMMC_RESTYPE_R2 | EMMC_136_RES);
	result = get_response(MMC_RESPONSE_R2);
	if (result != NO_ERROR)
		return SDMMCInitializationError;

	/* Next its CMD3 to assign an RCA to the cards */
	if (crd_prop.SD == TYPE_SD) {
		wrapper_SendSetupCommand(STD_MMC_CMD3, argument, EMMC_RESTYPE_R6 | EMMC_48_RES);
		result = get_response(MMC_RESPONSE_R6);
	} else {
		/* build an RCA for this session. Try to base the RCA on the serial number.
		 * rca is only 16 bits long.
		 */
		rca = (card_reg.cid.serialnum) & 0x0000ffff;
		/* make sure RCA is valid (must be greater than 0) */
		if (!rca)
			rca = 1;
		/* rca occupies high order 16 bits of 32 bit argument. */
		card_reg.rca = rca << 16;

		argument = card_reg.rca;
		wrapper_SendSetupCommand(STD_MMC_CMD3, argument, EMMC_RESTYPE_R1 | EMMC_48_RES);
		result = get_response(MMC_RESPONSE_R1);
	}
	if (result != NO_ERROR)
		return SDMMCInitializationError;

	/* send CMD13 to check the status of the card
	 * Make sure card is stdby mode
	 */
	result = emmc_CheckCardStatus((uint32_t)0x700, (uint32_t)R1_LOCKEDCARDMASK);
	if (result != NO_ERROR)
		return SDMMCInitializationError;

	/* now we are beyond the point where some cards have subtle
	 * non-compliance issues with the spec.
	 * for example, some cards leave the error bits from
	 * unrecognized commands (like 55 & 41) set
	 * until this point - which is correct (since CMD3 was the first
	 * R1 type command). other cards clear them earlier, which is incorrect -
	 * but presents fewer initialization failures.
	 * at this point it is safe, and necessary, to begin rigorously
	 * examining all error status bits.
	 */
	crd_prop.StrictErrorCheck = 1;

	/* Send CMD 9 to retrieve the CSD */
	argument = card_reg.rca;
	wrapper_SendSetupCommand(STD_MMC_CMD9, argument, EMMC_RESTYPE_R2 | EMMC_136_RES);
	result = get_response(MMC_RESPONSE_R2);

	/*send CMD7 to get card into transfer state */
	argument = card_reg.rca;
	wrapper_SendSetupCommand(STD_MMC_CMD7, argument, EMMC_RESTYPE_R1 | EMMC_48_RES);
	result |= get_response(MMC_RESPONSE_R1);

	/*send CMD13 to check the status of the card */
	result |= emmc_CheckCardStatus((uint32_t)0x900, (uint32_t)R1_LOCKEDCARDMASK);
	if (result != NO_ERROR)
		return SDMMCInitializationError;

	/* CMD 16 Set Block Length */
	argument = crd_prop.ReadBlockSize;
	wrapper_SendSetupCommand(STD_MMC_CMD16, argument, EMMC_RESTYPE_R1 | EMMC_48_RES);
	result = get_response(MMC_RESPONSE_R1);
	/* Set the block length for the controller */
	CSR_WRITE(CAVM_EMMCX_HOST_SRS_SRS01(0), argument);

	if (!cavm_is_platform(PLATFORM_ASIM)) {

		result = SetHighSpeedTiming();
		/*send CMD13 to check the status of the card */
		result = emmc_CheckCardStatus((uint32_t)0x900, (uint32_t)R1_LOCKEDCARDMASK);
		if (result != NO_ERROR)
			return SDMMCInitializationError;

		/*Attempt to Increase Bus width */
		result = emmc_SetBusWidth(bus_width);

		/*send CMD13 to check the status of the card */
		result = emmc_CheckCardStatus((uint32_t)0x900, (uint32_t)R1_LOCKEDCARDMASK);
		if (result != NO_ERROR)
			return SDMMCInitializationError;
	}

	/* Set up State, Ready for Data transfers */
	crd_prop.card_state = READY;

	return NO_ERROR;
}

/******************************************************************************
 *  Description: Analyze the response
 *  Input Parameters: None
 *  Output Parameters: None
 *  Returns: None
 *******************************************************************************/
uint32_t get_response(uint32_t response_type)
{
	uint32_t i, temp, temp2, temp3;
	uint32_t result = 0;
	/*100 millisecond check time*/
	uint32_t timeout = 100000;

	do {

		emmc_isr();

		/* if the command had an error, the command may have aborted
		 * without setting the command complete bit. for example,
		 * if no response is received, then the command is aborted,
		 * the emmc_isr sets the state to FAULT, and command complete
		 * will not assert. check for such a scenario here.
		 */
		if (crd_prop.card_state == FAULT) {
			result = SDMMC_GENERAL_ERROR;
			return result;
		}

		if (last_cmd_resp.CommandComplete) {
			if (response_type != MMC_RESPONSE_R1B)
				break;
			else if (last_cmd_resp.TransferComplete)
				break;
		}
		udelay(1);
	} while (timeout--);
	if (!timeout)
		return SDMMC_CMD_TIMEOUT;

	/* Read in the Buffers */
	switch (response_type) {
	case MMC_RESPONSE_R1:
	case MMC_RESPONSE_R1B:
		last_cmd_resp.R1_RESP = last_cmd_resp.pBuffer[0];
		break;
	case MMC_RESPONSE_R2: /* This is for CID or CSD register */
	{
		last_cmd_framed.all = CSR_READ(CAVM_EMMCX_HOST_SRS_SRS03(0));
		if (last_cmd_framed.s.cmd_idx == STD_MMC_CMD9) /*CSD */ {
			/* Copy the CSD values from the buffer */
			for (i = 0; i < 4; i++)
				card_reg.csd.csd_value[i] = last_cmd_resp.pBuffer[i];

			/* Optionally we could record maximum block lengths from the CSD.
			 * But some devices cheat and put incorrect values in this field.
			 * Save off read Block Size, play it safe, for now hard code to 512 Bytes
			 */
			crd_prop.ReadBlockSize = HARD512BLOCKLENGTH;
			/* Save off Write Block Size */
			crd_prop.WriteBlockSize = HARD512BLOCKLENGTH;

			/* Capture Erase Granularity. */
			if (crd_prop.SD == TYPE_SD) {
				/* Check Erase Single Block Enable - Bit 46 */
				if ((card_reg.csd.csd_value[1] >> 14) & 1)
					crd_prop.EraseSize = crd_prop.WriteBlockSize;
				else {
					crd_prop.EraseSize = ((card_reg.csd.csd_value[1] >> 7) &
						0x7F) + 1;
					crd_prop.EraseSize *= crd_prop.WriteBlockSize;
				}
			} else /* MMC Card */ {
				crd_prop.EraseSize = ((card_reg.csd.csd_value[1] >> 5) & 0x1F) + 1;
				crd_prop.EraseSize *= (((card_reg.csd.csd_value[1] >> 10) &
					0x1F) + 1);
				crd_prop.EraseSize *= crd_prop.WriteBlockSize;
			}

			/* Now calculate the capacity of this card */
			temp = ((card_reg.csd.csd_value[2] >> 16) & 0xF);   /* Get READ_BL_LEN */
			temp = 1 << temp;  /* Now we have Max Block Length */
			temp2 = ((card_reg.csd.csd_value[1] >> 15) & 0x7) + 2; /* Get C_SIZE_MULT */
			temp2 = 1 << temp2;
			temp3 = ((card_reg.csd.csd_value[1] >> 30) & 0x3);	 /* Get C_SIZE */
			temp3 |= ((card_reg.csd.csd_value[2] & 0x3FF) << 2); /* Get C_SIZE */
			temp3++;
			crd_prop.CardCapacity = temp3 * temp2 * temp; /*Total Size of the card in Bytes*/
		} else /* Assume CID */ {
			/* Copy the CSD values from the buffer */
			for (i = 0; i < 4; i++)
				card_reg.cid.cid_value[i] = last_cmd_resp.pBuffer[i];

			/* Now capture the serial number from the CID - 32 bit number */
			if (crd_prop.SD == TYPE_MMC) {
				card_reg.cid.serialnum = (card_reg.cid.cid_value[0] >> 16) & (0xFFFF);
				card_reg.cid.serialnum |= (card_reg.cid.cid_value[1] << 16);
			} else {
				card_reg.cid.serialnum = (card_reg.cid.cid_value[0] >> 24) & (0xFF);
				card_reg.cid.serialnum |= (card_reg.cid.cid_value[1] << 8);
			}
		}
		break;
	}
	case MMC_RESPONSE_R3:
	{
		card_reg.ocr = last_cmd_resp.pBuffer[0];
		break;
	}
	/* These modes are not supported by the driver */
	case MMC_RESPONSE_R4:
	case MMC_RESPONSE_R5:
	case MMC_RESPONSE_R5B:
		break;
	case MMC_RESPONSE_R6:
	{
		card_reg.rca = last_cmd_resp.pBuffer[0];
		break;
	}
	case MMC_RESPONSE_R7:
	{
		crd_prop.SD_VHS = last_cmd_resp.pBuffer[0];
		break;
	}
	case MMC_RESPONSE_NONE:
	default:
		break;
	}
	return result;
}

/****************************************************************
 *   Description: Interrupt Service Routine for SDMMC controller
 *                Controls flow and catches faults asynchronously.
 *   Input: None
 *   Output: result - command status
 *   Returns: None
 *****************************************************************/
void emmc_isr(void)
{

	srs12_intr_res_t result;
	uint32_t cmderror = 0;
	uint32_t reg_srs15 = 0;
	uint32_t resptype = 0;
	uint32_t temp = 0;
	/* that strange mask is all possible error bits in the card stat field. */
	uint32_t   r1_resp_error_bits = 0xfdffc080;

	/*EMMC Host Error/Normal Interrupt Statu Register*/
	result.all = CSR_READ(CAVM_EMMCX_HOST_SRS_SRS12(0));

	/* Check for any error */
	if (result.s.cmd_complete) {
		/* if we're in strict error checking mode, and
		 * if the completing command has an R1 or R1B status,
		 * look for any error bits in the card status field
		 */
		if (crd_prop.strictErrChk) {
			resptype = (crd_prop.last_send_cmd_resptype << 8) & EMMC_RESTYPE_MASK;
			if (resptype == EMMC_RESTYPE_R1) {
				/* that strange mask is all possible error bits. */
				cmderror = (CSR_READ(CAVM_EMMCX_HOST_SRS_SRS04(0)) & r1_resp_error_bits);
			}
		} else {
			/* don't examine error because not strict error checking mode or this is not an R1 type of command. */
			cmderror = 0;
		}
	}

	if (result.s.err_intr || cmderror) {
		if ((result.s.cmd_tout_err) ||  (result.s.data_tout_err) || cmderror) {
			/* this cleas the command inhibit flag in sd_present_state_1. */
			emmc_CMDSWReset();
			/* this clears the data inhibit flag and stops mclk. */
			emmc_DataSWReset();
		} else if (result.s.auto_cmd12_err) {
			/* acmd 12 error requires examining a separate error status register: */
			reg_srs15 = CSR_READ(CAVM_EMMCX_HOST_SRS_SRS15(0));

			/* any acmd12 error requires an sd host controller reset
			 * because there's no way to know if the command was processed.
			 * this cleas the command inhibit flag in sd_present_state_1.
			 */
			emmc_CMDSWReset();
			/* this clears the data inhibit flag and stops mclk. */
			emmc_DataSWReset();

			/* clear the acmd12 error bits. */
			CSR_WRITE(CAVM_EMMCX_HOST_SRS_SRS15(0), reg_srs15);
		}

		/* clear the general error status bits */
		CSR_WRITE(CAVM_EMMCX_HOST_SRS_SRS12(0), result.all);
		CSR_READ(CAVM_EMMCX_HOST_SRS_SRS12(0)); /* Must make a dummy read to allow ints to clear. */

		crd_prop.card_state = FAULT;
		/* done with handling an error condition. */
		/* nothing more to do. */
		return;
	}

	/* Has the Command completed? If so read the response register */
	if (result.s.cmd_complete) {
		/* Indicate that the response has been read */
		last_cmd_resp.CommandComplete = 1;
		last_cmd_resp.pBuffer[0] = CSR_READ(CAVM_EMMCX_HOST_SRS_SRS04(0));
		last_cmd_resp.pBuffer[1] = CSR_READ(CAVM_EMMCX_HOST_SRS_SRS05(0));
		last_cmd_resp.pBuffer[2] = CSR_READ(CAVM_EMMCX_HOST_SRS_SRS06(0));
		last_cmd_resp.pBuffer[3] = CSR_READ(CAVM_EMMCX_HOST_SRS_SRS07(0));
	}

	if (result.s.txfr_complete) {
		/* Indicate that the response has been read */
		last_cmd_resp.TransferComplete = 1;
	}

	/* Are we DMA enabled? */
	if ((crd_prop.emmc_dma_type)) {
		if (result.s.txfr_complete) {
#ifdef TBD
			if (crd_prop.OpModeAttribs.OpMode == NORMAL_MODE) {
				img_txfer_upd.img_cur_sz_txfer += (img_txfer_upd.NumBlocks * crd_prop.ReadBlockSize);
				/* Update the image read status when the whole image is read                 */
				if (img_txfer_upd.img_cur_sz_txfer == img_txfer_upd.img_size)
					img_txfer_upd.img_txfer_status = 1;

				crd_prop.card_state = READY;
			} else {
				/* STREAMING_MODE
				 * xfrcomp interrupt occurs only once for the streaming that is a
				 * the end of all transfers
				 */
				crd_prop.card_state = READY;
			}
#endif
		}
	}

	CSR_INIT(sts_reg, CAVM_EMMCX_HOST_SRS_SRS09(0));
	/* Clear the interrupts */
	CSR_WRITE(CAVM_EMMCX_HOST_SRS_SRS12(0), result.all);
	CSR_READ(CAVM_EMMCX_HOST_SRS_SRS12(0));

	if (crd_prop.emmc_dma_type == NODMA) {
		/* Handle State based interrupts XFRCOMP, BUFRDRDY, BUFWRRDY */
		switch (crd_prop.card_state) {
		case WRITE:
		{
			temp = card_txfer_upd.WordIndex;
			if (sts_reg.s.bwe)
				emmc_writefifo();

			img_txfer_upd.img_cur_sz_txfer += (card_txfer_upd.WordIndex * 4);
			/* Update the image read status when the whole image is written */
			if (img_txfer_upd.img_cur_sz_txfer == img_txfer_upd.img_size)
				img_txfer_upd.img_txfer_status = 1;

			/* Are we done sending all of data? */
			if (card_txfer_upd.TransWordSize == card_txfer_upd.WordIndex)
				crd_prop.card_state = DATATRAN;
			/*since we are doing block by block, write 1 block*/
			if (card_txfer_upd.WordIndex >= ((temp*4) + crd_prop.WriteBlockSize)/4)
				crd_prop.card_state = READY;

			break;
		}
		case READ:
		{ // NO READ
			temp = card_txfer_upd.WordIndex;
			if (result.s.buf_rd_rdy)
				emmc_readfifo();

			img_txfer_upd.img_cur_sz_txfer += (card_txfer_upd.WordIndex * 4);
			/* Update the image read status when the whole image is read */
			if (img_txfer_upd.img_cur_sz_txfer == img_txfer_upd.img_size)
				img_txfer_upd.img_txfer_status = 1;

			/* Are we done sending all of data? */
			if (card_txfer_upd.TransWordSize == card_txfer_upd.WordIndex)
				crd_prop.card_state = DATATRAN;
			/*since we are doing block by block, read 1 block*/
			if (card_txfer_upd.WordIndex >= ((temp*4) + crd_prop.ReadBlockSize)/4)
				crd_prop.card_state = READY;
			break;
		}
		case DATATRAN:
		{
			/* Wait for Transfer Complete Signal */
			if (result.s.txfr_complete)
				crd_prop.card_state = READY;

			break;
		}
		default:
			break;
		}
	}
}

/****************************************************************
 *   Description: Reads the contents of the read fifo (512 words)
 *   Input: None
 *   Output: buffer will contain the contents of the read fifo
 *   Returns: None
 *****************************************************************/

void emmc_readfifo(void)
{
	uint32_t data;
	uint32_t index = 0;
	uint32_t temp_index = 0;

	volatile uint32_t *pBuffer;

	pBuffer = &data;
	temp_index = card_txfer_upd.WordIndex;
	debug_emmc("In start emmc_readinfo temp_index::%x\n", temp_index);
	/* Ignore Pre Bytes */
	for (index = 0; (index < EMMC_FIFOWORDSIZE) && (temp_index <
		card_txfer_upd.StartDiscardWords); index++, temp_index++) {
		*pBuffer = CSR_READ(CAVM_EMMCX_HOST_SRS_SRS08(0));
	}

	/* Read Requested Data */
	for (; ((index < EMMC_FIFOWORDSIZE) && (temp_index <
		(card_txfer_upd.TransWordSize - card_txfer_upd.EndDiscardWords)));
		index++, temp_index++) {
		((uint32_t *)((unsigned long)(card_txfer_upd.LocalAddr)))[temp_index] =
			CSR_READ(CAVM_EMMCX_HOST_SRS_SRS08(0));
	}

	/* Ignore Trailing Bytes */
	for (; (index < EMMC_FIFOWORDSIZE) && (temp_index <
		card_txfer_upd.TransWordSize); index++, temp_index++) {
		*pBuffer = CSR_READ(CAVM_EMMCX_HOST_SRS_SRS08(0));
	}

	card_txfer_upd.WordIndex = temp_index;
	debug_emmc("In end emmc_readinfo temp_index::%x\n", temp_index);
}

/****************************************************************
 *   Description: Writes 2048 bytes (512 words) to the FIFO
 *   Input: None
 *   Output: None
 *   Returns: None
 *****************************************************************/
void emmc_writefifo(void)
{
	uint32_t index;
	uint32_t buffer = 0x0;
	uint32_t temp_index = 0;

	temp_index = card_txfer_upd.WordIndex;

	debug_emmc("In start emmc_writeinfo temp_index::%x\n", temp_index);
	/* Ignore Pre Bytes */
	for (index = 0; (index < EMMC_FIFOWORDSIZE) && (temp_index <
		card_txfer_upd.StartDiscardWords); index++, temp_index++) {
		CSR_WRITE(CAVM_EMMCX_HOST_SRS_SRS08(0), buffer);
	}

	/* Write Requested Data */
	for (; ((index < EMMC_FIFOWORDSIZE) && (temp_index <
		(card_txfer_upd.TransWordSize - card_txfer_upd.EndDiscardWords)))
		; index++, temp_index++) {
		CSR_WRITE(CAVM_EMMCX_HOST_SRS_SRS08(0),
			((uint32_t *)((unsigned long)(card_txfer_upd.LocalAddr)))[temp_index]);
	}

	/* Ignore Trailing Bytes */
	for (; (index < EMMC_FIFOWORDSIZE) && (temp_index <
		card_txfer_upd.TransWordSize); index++, temp_index++) {
		CSR_WRITE(CAVM_EMMCX_HOST_SRS_SRS08(0), buffer);
	}

	card_txfer_upd.WordIndex = temp_index;
	debug_emmc("In end emmc_writeinfo temp_index::%x\n", temp_index);
}

/****************************************************************
 *   Description: Identifies which type of card was inserted
 *   Input: None
 *   Output: WTP recoginized Success/Fail return code
 *   Returns: None
 *****************************************************************/
uint32_t identify_card(void)
{
	uint32_t error = 0;
	uint32_t result = 0;
	uint32_t argument = 0;
	uint32_t HighCapacity = 0;
	uint32_t attempts = 0;
	uint32_t F8_Return = 0;
	uint32_t loop_count  = 5;

	crd_prop.SD = TYPE_SD;
	/* Send CMD0 (GO_IDLE_STATE) to get card into idle state */
	wrapper_SendSetupCommand(STD_MMC_CMD0, argument,
		(EMMC_RESTYPE_NONE | EMMC_NO_RES));
	error =  get_response(MMC_RESPONSE_NONE);
	/* Check for High Capacity Cards First
	 * This do while sending SD specific command, not necessarily for MMC
	 */
	do {
		/* Start with SD
		 * Try High Voltage range first:
		 * Note: this is a valid command for SD cards in the idle state.
		 * for mmc cards in the idle state, this is not valid, so no reponse is generated.
		 * however, even some SD cards may miss this command, so that's why it is
		 * sent out twice. See SD spec, step 4 of figure 9 in card init and id section.
		 */
		argument = (SDVHS_2_7_TO_3_6 << SDVHSARGSHIFT) | SDVHSCHECKPATTERN;
		wrapper_SendSetupCommand(STD_SD_CMD8, argument, EMMC_RESTYPE_R7 | EMMC_48_RES);

		/* get the response (if any) to XLLP_SD_CMD8. */
		result = get_response(MMC_RESPONSE_R7);
		if (crd_prop.card_state == FAULT) {
			crd_prop.SD = TYPE_MMC;
			break;
		}
		if (result == NO_ERROR)
			F8_Return = 1;
		else
			F8_Return = 0;

		/* Check for High Capacity Cards */
		HighCapacity = (crd_prop.SD_VHS == argument);
		attempts++;
	} while (!HighCapacity && (attempts < 3));

	/* First time, pass NULL argument to get back values card is compatible with
	 * Send appropriate CMD Sequence to Identify the type of card inserted
	 * Set HCS and voltage window for ACMD41 to start initialization.
	 */
	argument = HOST_CAPACITY_SUPPORTED | VDD_WINDOW_V33;
	card_reg.ocr = 0; /* Make sure to clear out OCR. */

	/*  Wait for the Response based on the CommandComplete interrupt signal */
	for (attempts = 0; attempts <= loop_count; attempts++) {
		switch (crd_prop.SD) {
		case TYPE_SD: /* Assume SD */
			wrapper_SendSetupCommand(STD_SD_CMD55, 0, EMMC_RESTYPE_R1 | EMMC_48_RES);
			error = get_response(MMC_RESPONSE_R1);
			wrapper_SendSetupCommand(STD_SD_ACMD41, argument, EMMC_RESTYPE_R3 |
				EMMC_48_RES);
			error = get_response(MMC_RESPONSE_R3);

			if (card_reg.ocr == 0)
				crd_prop.SD = TYPE_MMC;
			else
				result = NO_ERROR;
			break;
		case TYPE_MMC: /* Assume MMC */
			wrapper_SendSetupCommand(STD_MMC_CMD1, argument, EMMC_RESTYPE_R3 | EMMC_48_RES);
			error = get_response(MMC_RESPONSE_R3);

			if (card_reg.ocr == 0)
				result = STD_NotFoundError;
			else
				result = NO_ERROR;
			break;
		default:
			return STD_NotFoundError;
		}

		if ((card_reg.ocr & 0x80000000) == 0x80000000)
			break;
		else if (attempts == loop_count)
			return STD_NotFoundError;
		udelay(1000);
	};

	if (error != NO_ERROR)
		return STD_NotFoundError;

	/* Assign Access Mode. */
	if (!F8_Return && (crd_prop.SD == TYPE_SD))
		crd_prop.AccessMode = BYTE_ACCESS;
	else if (card_reg.ocr & OCR_ACCESS_MODE_MASK)
		crd_prop.AccessMode = SECTOR_ACCESS;
	else
		crd_prop.AccessMode = BYTE_ACCESS;
	return result;
}

/****************************************************************
 *   Description: Checks to make sure that the OCR register of
 *                the device supports the voltage range that was
 *                selected for the controller
 *   Input: None
 *   Output: None
 *   Returns: None
 *****************************************************************/
uint32_t emmc_CheckVoltageCompatibility(uint32_t ctrlr_voltage)
{
	/* Check SD vs MMC */
	if (crd_prop.SD == TYPE_SD) {
		switch (ctrlr_voltage) {
		case EMMC_VLTGSEL_3_3:
			if (card_reg.ocr & MMC_OCR_VOLTAGE_3_3_TO_3_6)
				return NO_ERROR;
			break;
		case EMMC_VLTGSEL_3_0:
			if (card_reg.ocr & MMC_OCR_VOLTAGE_1_8_TO_3_3)
				return NO_ERROR;
			break;
		case EMMC_VLTGSEL_1_8:
			if (card_reg.ocr & MMC_OCR_VOLTAGE_1_8)
				return NO_ERROR;
			break;
		default:
			return SDMMCDeviceVoltageNotSupported;
		}
	} else {
		if ((card_reg.ocr & MMC_OCR_VOLTAGE_ALL) == MMC_OCR_VOLTAGE_ALL)
			return NO_ERROR;
	}
	return SDMMCDeviceVoltageNotSupported;
}

/****************************************************************
 *   Description: Gets the status of the card by issuing CMD 13.
 *                The return from the routine is based on a check
 *                against the expected value which is passed in.
 *   Input: R1_Resp_Match - card response match.
 *          Mask - mask to remove undesired bits
 *   Output: None
 *   Returns: Result of the card status
 *****************************************************************/
uint32_t emmc_CheckCardStatus(uint32_t resp_to_match, uint32_t mask)
{
	uint32_t argument;
	uint32_t result;
	uint32_t cardstatus;

	/*send CMD13 to check the status of the card */
	argument = card_reg.rca;
	wrapper_SendSetupCommand(STD_MMC_CMD13, argument, EMMC_RESTYPE_R1 | EMMC_48_RES);
	result = get_response(MMC_RESPONSE_R1);

	/* Mask out undesired check bits */
	cardstatus = (last_cmd_resp.R1_RESP) & mask;

	if ((cardstatus == resp_to_match) && (result == NO_ERROR))
		return NO_ERROR;
	else
		return STD_TimeOutError;
}

/****************************************************************
 *   Description: reads the scr value
 *   Input: None
 *   Output: None
 *   Returns: status
 *****************************************************************/
uint32_t emmc_SDGet_SCR(void)
{
	uint32_t temp = 0;
	uint32_t argument = 0;
	uint32_t org_blk_size;
	volatile uint32_t result = NO_ERROR;
	emmc_blk_cntl ctrl_blk;

	/* Issue ACMD51 to read in the SCR */
	wrapper_SendSetupCommand(STD_SD_CMD55, card_reg.rca, MM4_RT_R1 | EMMC_48_RES);
	result = get_response(MMC_RESPONSE_R1);

	/* Set up State */
	crd_prop.card_state = READ;

	/* This requires a transfer over the data lines. */
	ctrl_blk.all = CSR_READ(CAVM_EMMCX_HOST_SRS_SRS01(0));
	org_blk_size = ctrl_blk.s.xfr_blksz;
	ctrl_blk.s.blk_cnt = 1;
	ctrl_blk.s.xfr_blksz = sizeof(scr_layout_t);
	card_txfer_upd.StartDiscardWords = 0;
	/*(512 - 8) / 4; 126 words - SCR is only 2 words of data. */
	card_txfer_upd.EndDiscardWords = 0;
	/* ReadBlockSize / 4; Total Transfer Size including pre and post bytes */
	card_txfer_upd.TransWordSize = 2;
	card_txfer_upd.LocalAddr = (uintptr_t)((&card_reg.scr.scr_value[0]));
	/* Stores Index of Current write position */
	card_txfer_upd.WordIndex = 0;

	if (crd_prop.emmc_dma_type == SDMA) {
		ctrl_blk.s.dma_bufsz = MM4_512_HOST_DMA_BDRY;
		/*TBD why writing 32 bit address, LW - mask - 0xFFFFFFFF*/
		CSR_WRITE(CAVM_EMMCX_HOST_SRS_SRS01(0), (uintptr_t)(&card_reg.scr.scr_value[0]));
	}

	CSR_WRITE(CAVM_EMMCX_HOST_SRS_SRS01(0), ctrl_blk.all);

	result = wrapper_SendDataCommandNoAuto12(STD_SD_ACMD51, argument,
		MM4_SINGLE_BLOCK_TRAN, MM4_CARD_TO_HOST_DATA,
		MM4_RT_R1 | EMMC_48_RES);
	if (result != NO_ERROR) {
		ctrl_blk.s.xfr_blksz = org_blk_size;
		CSR_WRITE(CAVM_EMMCX_HOST_SRS_SRS01(0), ctrl_blk.all);
		return result;
	}

	/* Wait for the Read to Complete */
	result = get_status_within(1);
	if (result != NO_ERROR) {
		ctrl_blk.s.xfr_blksz = org_blk_size;
		CSR_WRITE(CAVM_EMMCX_HOST_SRS_SRS01(0), ctrl_blk.all);
		return result;
	}

	/* Restore back to original blk size.        */
	ctrl_blk.s.xfr_blksz = org_blk_size;
	CSR_WRITE(CAVM_EMMCX_HOST_SRS_SRS01(0), ctrl_blk.all);
	/* Get the Card Response */
	result = get_response(MMC_RESPONSE_R1);
	if ((result != NO_ERROR) || (last_cmd_resp.R1_RESP != 0x920))
		emmc_SendStopCommand(); /* Send a stop command */
	crd_prop.card_state = READY;

	/* send CMD13 to check the status of the card
	 * Make sure card is transfer mode
	 */
	result |= emmc_CheckCardStatus((uint32_t)0x900, (uint32_t)R1_LOCKEDCARDMASK);
	if (result != NO_ERROR) {
		ctrl_blk.s.xfr_blksz = org_blk_size;
		CSR_WRITE(CAVM_EMMCX_HOST_SRS_SRS01(0), ctrl_blk.all);
		return SDMMC_SWITCH_ERROR;
	}

	/* Swap the byte ordering */
	temp = card_reg.scr.scr_value[0];
	card_reg.scr.scr_value[0] = card_reg.scr.scr_value[1];
	card_reg.scr.scr_value[1] = temp;

	return NO_ERROR;
}

/****************************************************************
 *   Description: setup the card structure and call
 *                senddatacmdnoAuto12
 *   Input: None
 *   Output: None
 *   Returns: Result
 *****************************************************************/
uint32_t wrapper_SendDataCommandNoAuto12(uint32_t cmd,
	uint32_t argument, uint32_t blk_type, uint32_t data_dir,
	uint32_t resp_type)
{
	uint32_t result = NO_ERROR;
	uint32_t blk_count = 0;

	/* no need to clear out any fault state that may be left
	 * over from a previously failed transaction.
	 * that's because the caller has set State to read or
	 * write before calling here.
	 */
	last_cmd_resp.CommandComplete = 0;
	last_cmd_resp.TransferComplete = 0;

	/* save the info for use by the isr: */
	card_txfer_upd.RespType = (resp_type >> 8) & 0x000000ff;
	card_txfer_upd.cmd = cmd;

	/*Block count is disabled for ADMA2 */
	blk_count = (crd_prop.emmc_dma_type == ADMA2) ? 0 : 1;

	/*TBD DMA support*/
	result = emmc_SendDataCommandNoAuto12(cmd, argument, blk_type, data_dir,
		resp_type & 0x000000ff, 0, blk_count);
	return result;
}

/****************************************************************
 *   Description: setup the card structure and call senddatacmd
 *   Input: None
 *   Output: None
 *   Returns: Result
 *****************************************************************/

uint32_t wrapper_SendDataCommand(uint32_t cmd, uint32_t argument,
	uint32_t blk_type, uint32_t data_dir, uint32_t resp_type)
{
	uint32_t result = NO_ERROR;
	uint32_t fAutoCmd23En;

	/* no need to clear out any fault state that may be left
	 * over from a previously failed transaction.
	 * that's because the caller has set State to read or
	 * write before calling here.
	 */

	/* No Response to the command yet */
	last_cmd_resp.CommandComplete = 0;
	last_cmd_resp.TransferComplete = 0;

	/* save the info for use by the isr: */
	card_txfer_upd.RespType = (resp_type >> 8) & 0x000000ff;
	card_txfer_upd.cmd = cmd;

	if ((crd_prop.emmc_dma_type == ADMA2) && (crd_prop.SD == TYPE_MMC))
		fAutoCmd23En = 1;
	else
		fAutoCmd23En = 0;

	if (crd_prop.card_state == WRITE)
		emmc_isr();
	result = emmc_SendDataCommand(cmd, argument, blk_type, data_dir,
		resp_type & 0x000000ff, 0, fAutoCmd23En,
		((crd_prop.RPMB_Enable) ? 1 : 0));
	return result;
}

/****************************************************************
 *   Description: setup the card structure and call sendsetupcmd
 *   Input: None
 *   Output: None
 *   Returns: Result
 *****************************************************************/
uint32_t wrapper_SendSetupCommand(uint32_t cmd, uint32_t argument, uint32_t resp_type)
{
	uint32_t result = NO_ERROR;
	/* clear out any fault status that may be left over from a previously
	 * failed transaction.
	 */
	crd_prop.card_state = READY;

	/* No Response to the command yet */
	last_cmd_resp.CommandComplete = 0;
	last_cmd_resp.TransferComplete = 0;

	/* save the info for use by the isr: */
	card_txfer_upd.RespType = (resp_type >> 8) & 0x000000ff;
	card_txfer_upd.cmd = cmd;

	/* clear out any bits not for the SD_CMD.RES_TYPE field */
	//debug_emmc("In wrapper_SendSetupCommand for cmd::%d argument::%x\n",cmd,argument);
	result = emmc_SendSetupCommand(cmd, argument, (resp_type & 0x000000ff));
	return result;
}

/****************************************************************
 *   Description: checks the status within the given milliseconds
 *   Input: Number of millisceonds to loop around
 *   Output: None
 *   Returns: Result
 *****************************************************************/
uint32_t get_status_within(uint32_t msecs)
{
	uint32_t timeout = msecs;

	do {
		emmc_isr();
		if ((crd_prop.card_state == FAULT) || (crd_prop.card_state == READY))
			return NO_ERROR;
		mdelay(1);
	} while (timeout--); /* detection loop with timeout */

	return STD_TimeOutError;
}

/****************************************************************
 *   Description: send stop command for read and write
 *   Input: Number of millisceonds to loop around
 *   Output: None
 *   Returns: Result
 *****************************************************************/
void emmc_SendStopCommand(void)
{
	if (crd_prop.card_state == READ) {
		/* Send a CMD 12 to stop transmissions. */
		emmc_SendSetupCommand(STD_MMC_CMD12, 0, EMMC_RESTYPE_R1 | EMMC_48_RES);
		get_response(MMC_RESPONSE_R1);
	}
	if (crd_prop.card_state == WRITE) {
		/*  Send a CMD 12 to stop transmissions. */
		emmc_SendSetupCommand(STD_MMC_CMD12, 0,
			EMMC_RESTYPE_R1 | EMMC_RT_BUSY | EMMC_48_RES_WITH_BUSY);
		get_response(MMC_RESPONSE_R1B);
	}
}

/****************************************************************
 *   Description: Sets the Bus width highest bus width supported
 *   Input: width
 *   Output: None
 *   Returns: Result
 *****************************************************************/
uint32_t emmc_SetBusWidth(uint32_t width)
{
	uint32_t result = NO_ERROR;
	uint8_t  sdcard_width = 0;
	emmc_cntl1 emmc_ctrl1;

	volatile mmc_cmd6_struct mmc_cmd6;

	emmc_ctrl1.all = CSR_READ(CAVM_EMMCX_HOST_SRS_SRS10(0));
	/* Check supported configurations first */
	if (crd_prop.SD == TYPE_SD) {
		/* Check do we support 4 bit mode? */
		result = emmc_SDGet_SCR();
		/* Irrespective of the input 'Width', max bus width that SD supports is 4 bit  */
		sdcard_width = ((card_reg.scr.scr_value[1] >> 16) & 0xF);

		if (sdcard_width == SCRSD4BITMODE) {
			/* Issue ACMD 6 to set the bus width */
			wrapper_SendSetupCommand(STD_SD_CMD55, card_reg.rca, EMMC_RESTYPE_R1 |
				EMMC_48_RES);
			result = get_response(MMC_RESPONSE_R1);
			wrapper_SendSetupCommand(STD_SD_ACMD6, SD_CMD6_4BITMODE, EMMC_RESTYPE_R1 |
				EMMC_48_RES);
			result = get_response(MMC_RESPONSE_R1);
		}
	} else {
		/* Issue CMD 6 to set BUS WIDTH bits in EXT_CSD register byte 183 */
		mmc_cmd6.s.Access = EXT_CSD_ACCESS_WRITE_BYTE;   /*Write Byte */
		mmc_cmd6.s.CmdSet = 0;						   /* Don't Care */
		mmc_cmd6.s.Index = BUS_WIDTH_MMC_EXT_CSD_OFFSET; /* Choose Bus Width */
		mmc_cmd6.s.Reserved0 = 0;
		mmc_cmd6.s.Reserved1 = 0;
		mmc_cmd6.s.Value = (width == 8) ? (uint8_t)2 : (uint8_t)1; /* Choose 8 bit mode.*/

		wrapper_SendSetupCommand(STD_MMC_CMD6, mmc_cmd6.all,
			EMMC_RESTYPE_R1 |  EMMC_RT_BUSY | EMMC_48_RES_WITH_BUSY);
		result = get_response(MMC_RESPONSE_R1B);
	}

	/* send CMD13 to check the status of the card
	 * Make sure card is transfer mode
	 * Make sure card is transfer mode
	 */
	result |= emmc_CheckCardStatus((uint32_t)0x900, (uint32_t)R1_LOCKEDCARDMASK);
	if (result != NO_ERROR) {
		crd_prop.card_state = READY;
		return SDMMC_SWITCH_ERROR;
	}

	/* Now change the controller to boost bus width */
	if (crd_prop.SD == TYPE_SD) {
		if (sdcard_width == SCRSD4BITMODE) {
			emmc_ctrl1.s.datawidth = 1; /* Move to 4-bit mode */
			CSR_WRITE(CAVM_EMMCX_HOST_SRS_SRS10(0), emmc_ctrl1.all);
			return NO_ERROR;
		}
	}
	if (width == 8)
		emmc_ctrl1.s.ex_data_width = 1; /* Move to 8-bit mode. */
	else
		emmc_ctrl1.s.datawidth = 1; /* Move to 4-bit mode */
	CSR_WRITE(CAVM_EMMCX_HOST_SRS_SRS10(0), emmc_ctrl1.all);

	return NO_ERROR;
}

/****************************************************************
 *   Description: stops the card with cmd0 and shuts the clock
 *   Input: None
 *   Output: None
 *   Returns: Result
 *****************************************************************/
uint32_t emmc_CardShutdown(void)
{
	emmc_cntl1    emmc_ctrl1;

	/* Initialize Flash Properties */
	emmc_ctrl1.all = CSR_READ(CAVM_EMMCX_HOST_SRS_SRS10(0));

	/* send a CMD0, go idle here so the card gets into the idle state.
	 * even though that forces any subsequent software, like the os,
	 * to rediscover and reinit the card, this is worth doing. by
	 * putting the card into the idle state, it will be able to handle
	 * any bootrom flash probe operation if a platform reset occurs
	 * before the OS has completely initialized the device.
	 */

	/* Send CMD0 (GO_IDLE_STATE) to get card into idle state */
	emmc_SendSetupCommand(STD_MMC_CMD0, 0, EMMC_RESTYPE_NONE | EMMC_NO_RES);
	get_response(MMC_RESPONSE_NONE);

	/* Disable Bus Power */
	emmc_ctrl1.s.buspwr = 0;
	CSR_WRITE(CAVM_EMMCX_HOST_SRS_SRS10(0), emmc_ctrl1.all);

	/* Stop Bus Clock */
	emmc_StopBusClock();

	/* Mask all interrupts */
	emmc_EnableDisableIntSources(0);

	/* Disable internal clocks. */
	emmc_StopInternalBusClock();

	return NO_ERROR;
}

/****************************************************************
 *   Description: If the Card supports partitioning (eSD) this
 *                routine will switch to the appropriate partition
 *                by using extended partition command set CMD37.
 *   Input: part_num - Contains the partition Number to switch to
 *                and enable bits for the boot partitions.
 *   Output: None
 *   Returns: Result
 *****************************************************************/
uint32_t change_parition(uint32_t part_num)
{
	uint32_t result = NO_ERROR;

	volatile mmc_cmd6_struct mmc_cmd6;

	crd_prop.RPMB_Enable = 0;

	/* CN10xxx platform doesn't support DMA data to CPC RAM so force it as NODMA mode */
	crd_prop.emmc_dma_type = NODMA;
#ifdef TBD
	SetDMAMode();
#endif

	/* Must set partition */
	if (crd_prop.SD == TYPE_SD) {
		return NO_ERROR;
#ifdef TBD
		/* CMD 43 Select Partition */
		/* Cmd = XLLP_eSD_CMD43;
		 * argument = PartitionNumber << 24;
		 * partition number goes in bits [31:24], rest are 0's
		 */

		/* emmc_SendSetupCommand(pSDMMCP, Cmd, EMMC_CMD_TYPE_NORMAL, argument,
		 * EMMC_RT_R1 | EMMC_RT_BUSY | EMMC_48_RES_WITH_BUSY);
		 * result = emmc_Interpret_Response(MMC_RESPONSE_R1B,
		 * MMC_RESPONSE_R1B_TIMEOUT);
		 */
#endif
	} else {
		/* Issue CMD 6 to clear PARTITION_ACCESS bits in EXT_CSD register byte 179 */
		mmc_cmd6.s.Access = EXT_CSD_ACCESS_CLEAR_BITS;		  /* Clear bits */
		mmc_cmd6.s.CmdSet = 0;	  /* Don't Care */
		mmc_cmd6.s.Index = PARTITION_CONFIG_MMC_EXT_CSD_OFFSET; /* Choose Boot Config */
		mmc_cmd6.s.Reserved0 = 0;
		mmc_cmd6.s.Reserved1 = 0;
		mmc_cmd6.s.Value = PARTITION_ACCESS_BITS; /* Clear out Partition Access bits */

		emmc_SendSetupCommand(STD_MMC_CMD6, mmc_cmd6.all,
			EMMC_RESTYPE_R1 |  EMMC_RT_BUSY | EMMC_48_RES_WITH_BUSY);
		result = get_response(MMC_RESPONSE_R1B);

		/* Now issue CMD 6 again to set the right bits. */
		mmc_cmd6.s.Access = EXT_CSD_ACCESS_SET_BITS;			  /* Clear bits */
		mmc_cmd6.s.CmdSet = 0;  ///* Don't Care */
		mmc_cmd6.s.Index = PARTITION_CONFIG_MMC_EXT_CSD_OFFSET;// /* Choose Boot Config */
		mmc_cmd6.s.Reserved0 = 0;
		mmc_cmd6.s.Reserved1 = 0;
		mmc_cmd6.s.Value = part_num; //Set the correct partition

		wrapper_SendSetupCommand(STD_MMC_CMD6, mmc_cmd6.all,
			EMMC_RESTYPE_R1 |  EMMC_RT_BUSY | EMMC_48_RES_WITH_BUSY);
		result |= get_response(MMC_RESPONSE_R1B);
	}

	result |= emmc_CheckCardStatus((uint32_t)0x900, (uint32_t)R1_LOCKEDCARDMASK);
	if (result != NO_ERROR) {
		crd_prop.card_state = READY;
		return SDMMC_SWITCH_ERROR;
	}
	return NO_ERROR;
}

/****************************************************************
 *   Description: Reads the given block off of the SD/MMC card and
 *                into LocalAddr or empty buffer
 *   Input: None
 *   Output: LocalAddr will contain the contents of the block
 *   Returns: None
 *****************************************************************/
uint32_t emmc_read_blocks(void)
{
	uint8_t  buffer[512];
	uint32_t argument;
	uint32_t result = NO_ERROR;
	emmc_blk_cntl emmc_blk;

#ifdef TBD
	ADMA_DESCRIPTOR admaDesc[NO_ADMA_TX_DESCS];
#endif
	/*clear the pre and post bytes buffer. for debug purposes
	 */
	memset((void *)buffer, 0, 512);
#ifdef TBD
	memset((void *)admaDesc, 0, NO_ADMA_TX_DESCS * sizeof(ADMA_DESCRIPTOR));
#endif

	/* Must set MMC NUMBLK
	 */
	emmc_blk.all = CSR_READ(CAVM_EMMCX_HOST_SRS_SRS01(0));
	/*blk_cnt is used in PIO/SDMA mode
	 */
	emmc_blk.s.blk_cnt = card_txfer_upd.NumBlocks;

	if (crd_prop.emmc_dma_type == SDMA) {
		emmc_blk.s.dma_bufsz = MM4_512_HOST_DMA_BDRY;
		CSR_WRITE(CAVM_EMMCX_HOST_SRS_SRS00(0), card_txfer_upd.LocalAddr);
	}
	CSR_WRITE(CAVM_EMMCX_HOST_SRS_SRS01(0), emmc_blk.all);

	/* Set up State
	 */
	crd_prop.card_state = READ;

	/* Set up the loading address, to consistent with the reading routine,
	 *  always read from the beginning of a block
	 */
	argument = card_txfer_upd.card_addr;
	/* In sector mode addressing; all addresses need to be specified
	 *  as block offsets.
	 */
	if (crd_prop.AccessMode == SECTOR_ACCESS)
		argument /= HARD512BLOCKLENGTH;
	else if (crd_prop.AccessMode == BYTE_ACCESS)
		argument = argument - (argument % crd_prop.ReadBlockSize);

	// Send Read Command
	// TBD: Update CMD17 Read 1 blcok -> CMD18 Read N blocks
	result = wrapper_SendDataCommand(STD_MMC_CMD17, argument,
		MM4_SINGLE_BLOCK_TRAN, MM4_CARD_TO_HOST_DATA,
		EMMC_RESTYPE_R1 | EMMC_48_RES);
	if (result != NO_ERROR)
		return result;

	result = get_status_within(4);
	if (result != NO_ERROR)
		return STD_TimeOutError;

	/* This state entered if ISR detected an error.
	 */
	if (crd_prop.card_state == FAULT)
		return STD_ReadError;

	/* Get the Card Response
	 */
	result = get_response(MMC_RESPONSE_R1);
	if ((result != NO_ERROR) || ((last_cmd_resp.R1_RESP & R1_LOCKEDCARDMASK)
		!= 0x900) || (crd_prop.card_state == FAULT)) {
		result = STD_ReadError;
		crd_prop.card_state = FAULT;
		/* Send a stop command
		 */
		emmc_SendStopCommand();
	} else {
		crd_prop.card_state = READY;
	}
	return result;
}

/****************************************************************
 *   Description: Writes the required number of blocks to
 *                CardAddress
 *   Input: None
 *   Output: Address starting with CardAddress will contain
 *           content from LocalAddress
 *   Returns: None
 *****************************************************************/
uint32_t emmc_WriteBlocks(void)
{
	uint8_t  buffer[512];
	uint32_t argument;
	uint32_t result = NO_ERROR;
	emmc_blk_cntl emmc_blk;
#ifdef TBD
	ADMA_DESCRIPTOR admaDesc[NO_ADMA_TX_DESCS];
#endif

	/*clear the pre and post bytes buffer. for debug purposes
	 */
	memset((void *)buffer, 0, 512);
#ifdef TBD
	memset((void *)admaDesc, 0, NO_ADMA_TX_DESCS * sizeof(ADMA_DESCRIPTOR));
#endif

	/* Must set MMC NUMBLK
	 */
	emmc_blk.all = CSR_READ(CAVM_EMMCX_HOST_SRS_SRS01(0));
	/*blk_cnt is used in PIO/SDMA mode
	 */
	emmc_blk.s.blk_cnt = card_txfer_upd.NumBlocks;

	if (crd_prop.emmc_dma_type == SDMA) {
		emmc_blk.s.dma_bufsz = MM4_512_HOST_DMA_BDRY;
		CSR_WRITE(CAVM_EMMCX_HOST_SRS_SRS00(0), card_txfer_upd.LocalAddr);
	}
	CSR_WRITE(CAVM_EMMCX_HOST_SRS_SRS01(0), emmc_blk.all);

	/* Set up State
	 */
	crd_prop.card_state = WRITE;

	/* Do a CMD 24 single block write
	 */
	argument = card_txfer_upd.card_addr;
	if (crd_prop.AccessMode == SECTOR_ACCESS)
		/* In sector mode addressing; all addresses need to be specified as
		 * ^block offsets.
		 */
		argument /= HARD512BLOCKLENGTH;
	else if (crd_prop.AccessMode == BYTE_ACCESS)
		argument = argument - (argument % crd_prop.WriteBlockSize);

	result = wrapper_SendDataCommand(STD_MMC_CMD24, argument,
		MM4_SINGLE_BLOCK_TRAN, MM4_HOST_TO_CARD_DATA,
		EMMC_RESTYPE_R1 | EMMC_48_RES);
	if (result != NO_ERROR)
		return result;

	result = get_status_within(4);

	/* This state entered if ISR detected an error.
	 */
	if (crd_prop.card_state == FAULT)
		return SDMMCWriteError;

	/* Get the Card Response
	 */
	result = get_response(MMC_RESPONSE_R1);
	if ((result != NO_ERROR) || (crd_prop.card_state == FAULT) ||
		((last_cmd_resp.R1_RESP & R1_NOMASK) != 0x900)) {
		result = STD_WriteError;
		crd_prop.card_state = FAULT;
		/* Send a stop command
		 */
		emmc_SendStopCommand();
		return result;
	}

	/* the write data transfer completed...now must wait for the card to
	 * assert the ready line.
	 * (the ready status from the last data transfer is meaningless here
	 * because it was left
	 * over from the write command that initiated the data transfer.)
	 * section 7.7.2 of the mmc 4.3 spec defines a formula for the
	 * timeout value.
	 * for now, just use a constant. Samsung KLMxGxxExM defines max write
	 * timeout as 600 ms
	 */
	/* FIXME: implement the formula, which is based on info from the CSD...
	 */
	if (!emmc_WaitReady(6)) {
		result = STD_WriteError;
		crd_prop.card_state = FAULT;
		/* Send a stop command
		 */
		emmc_SendStopCommand();
		return result;
	}

	crd_prop.card_state = READY;
	return NO_ERROR;
}

/****************************************************************
 *   Description: Writes the required number of blocks to
 *                CardAddress
 *   Input: None
 *   Output: Address starting with CardAddress will contain
 *           content from LocalAddress
 *   Returns: None
 *****************************************************************/

/* TBD: change this to use an r1b type... */

uint32_t emmc_WaitReady(uint32_t timeout)
{
	uint32_t writecomplete = 0;
	uint32_t result = NO_ERROR;
	uint32_t argument = card_reg.rca;
	uint32_t time_out = timeout;

	/* issue a series of get status commands until the (new) status
	 * indicates ready.
	 * limit the amount of time to wait to the input parameter
	 * TimeOutMilliSec
	 */
	do {
		/*send CMD13 to check the status of the card
		 */
		wrapper_SendSetupCommand(STD_MMC_CMD13, argument,
			EMMC_RESTYPE_R1 | EMMC_48_RES);
		/*  TBD: this timeout value should be dependent on CSD and operating
		 *  configuration
		 */
		result = get_response(MMC_RESPONSE_R1);
		if (result != NO_ERROR)
			break; // failed to complete transaction

		/* examine the new status, which was just extracted from the response
		 * field of the get stauts command.
		 * card_status:READY_FOR_DATA asserted. write is complete.
		 */
		if ((last_cmd_resp.R1_RESP & 0x00000100) == 0x00000100) {
			writecomplete = 1;
			break;
		}

	} while (time_out--);

	return writecomplete;
}

/******************************************************************************
 *  Description: Sets the Bus speed to high speed timing
 *  Input Parameters: None
 *  Output Parameters: None
 *  Returns: NO_ERROR or failed response
 *******************************************************************************/
uint32_t SetHighSpeedTiming(void)
{
	volatile mmc_cmd6_struct mmc_cmd6;
	emmc_cntl1 emmc_ctrl1;
	uint32_t result = NO_ERROR;

	emmc_ctrl1.all = CSR_READ(CAVM_EMMCX_HOST_SRS_SRS10(0));

	/* Check supported configurations first */
	if (crd_prop.SD != TYPE_SD) {
		/* Issue CMD 6 to set BUS WIDTH bits in EXT_CSD register byte 183 */
		mmc_cmd6.s.Access = EXT_CSD_ACCESS_WRITE_BYTE;
		mmc_cmd6.s.CmdSet = 0;
		mmc_cmd6.s.Index = HS_TIMING_MMC_EXT_CSD_OFFSET;
		mmc_cmd6.s.Reserved0 = 0;
		mmc_cmd6.s.Reserved1 = 0;
		mmc_cmd6.s.Value = 1; /* Choose High Speed Timing. */

		wrapper_SendSetupCommand(STD_MMC_CMD6, mmc_cmd6.all,
			EMMC_RESTYPE_R1 | EMMC_RT_BUSY | EMMC_48_RES_WITH_BUSY);
			result = get_response(MMC_RESPONSE_R1B);
	} else {
		emmc_SetBusRate(crd_prop.SdhClock, EMMC_CLOCK12_5MHZRATE);
		return NO_ERROR;
	}

	/* send CMD13 to check the status of the card */
	/* Make sure card is transfer mode */
	result |= emmc_CheckCardStatus((uint32_t)0x900, R1_LOCKEDCARDMASK);
	if (result == NO_ERROR) {
		emmc_ctrl1.s.hispeed = 1;
		CSR_WRITE(CAVM_EMMCX_HOST_SRS_SRS10(0), emmc_ctrl1.all);
	} else {
		crd_prop.card_state = READY;
		/* Failed, stick with lower speed */
		emmc_SetBusRate(crd_prop.SdhClock, EMMC_CLOCK12_5MHZRATE);
		return NO_ERROR;
	}

	/* Now change the speed to max through the controller  */
	emmc_SetBusRate(crd_prop.SdhClock, EMMC_CLOCK50MHZRATE);

	return NO_ERROR;
}
