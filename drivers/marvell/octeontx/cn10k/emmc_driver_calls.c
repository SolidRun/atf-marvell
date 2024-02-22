/***********************license start***********************************
 * Copyright (c) 2020 Marvell.
 * SPDX-License-Identifier: BSD-3-Clause
 * https://spdx.org/licenses
 **********************license end**************************************/

#include "emmc_wrapper_funcs.h"
#include "emmc_driver_funcs.h"
#include "emmc_driver_calls.h"

/****************************************************************
 *   Description:
 *   Input: None
 *   Output: None
 *   Returns: None
 *****************************************************************/
card_properties_t crd_prop;
emmc_response_t   last_cmd_resp;
img_txfer_t       img_txfer_upd;
card_transfer_t   card_txfer_upd;
cmd_framed_t      last_cmd_framed;
card_registers_t  card_reg;
emmc_blk_cntl   blk_ctrl;

uint8_t is_last_read_success;
static bool init_completed;

/****************************************************************
 *   Description: Allows skipping of initialization, i.e. SMC calls
 *   Input: initialized - set true to skip initialization in open
 *   Output: All the needed hardware should be un-initialized.
 *   Returns: None
 *****************************************************************/
void emmc_set_initialized(bool initialized)
{
	debug_emmc("%s(%d) Entry\n", __func__, initialized);
	init_completed = initialized;
	if (initialized) {
		crd_prop.StrictErrorCheck = 1;
		crd_prop.card_state = READY;
		crd_prop.AccessMode = SECTOR_ACCESS;
		crd_prop.ReadBlockSize = HARD512BLOCKLENGTH;
		crd_prop.WriteBlockSize = HARD512BLOCKLENGTH;
		is_last_read_success = true;
		fake_card_init();
	}
}

/****************************************************************
 *   Description: Initializes the SDMMC port on the platform and
 *                all of the other necessary hardware needed for
 *                SDMMC reading, writing and erasing.
 *   Input: partition number
 *   Output: None
 *   Returns: status
 *****************************************************************/
uint32_t emmc_open(uint32_t part_num)
{
	uint32_t status = NO_ERROR;

	if (init_completed) {
		debug_emmc("%s(%u): Init already completed (skipped)\n", __func__, part_num);
		return NO_ERROR;
	}

	if ((crd_prop.card_state == READY) && is_last_read_success) {
		debug_emmc("%s(%u): card state is ready, no init needed\n",
			   __func__, part_num);
		return NO_ERROR;
	}
	crd_prop.StrictErrorCheck = 0;

	/* Find a card in the desired controller */
	status = card_init();
	if (status != NO_ERROR) {
		debug_emmc("%s: card_init() returned 0x%x\n", __func__, status);
		emmc_close();
		return status;
	}
	debug_emmc("Done card init - card state::%d\n\n",
		   crd_prop.card_state);
	/*TBD check if needed*/
#ifdef TBD
	if (change_parition(part_num) != NO_ERROR)
		return SDMMC_SWITCH_ERROR;
	debug_emmc("change_parition done!!!\n");
#endif
	// to handle only open close calls without read
	if (status == NO_ERROR)
		is_last_read_success = 1;
	return status;
}

/****************************************************************
 *   Description: Shutsdown and cleans up after the SDMMC device
 *   Input: None
 *   Output: All the needed hardware should be un-initialized.
 *   Returns: None
 *****************************************************************/
uint32_t emmc_close(void)
{
	uint32_t result = NO_ERROR;

	/* Is this even initialized? */
	if (crd_prop.card_state == UNINITIALIZED)
		return result;
	if ((crd_prop.card_state == READY) && is_last_read_success) {
		return NO_ERROR;
	}

	/* Shutdown */
	emmc_CardShutdown();

	/* Restore MMC GPIO's to their default settings */
#ifdef TBD
	emmc_DisableMMCSlots();
#endif

	crd_prop.card_state = UNINITIALIZED;
	return result;
}

/****************************************************************
 *   Description: This function will read as many bytes as
 *                specified from flash_offset to Local Buffer.
 *                The flash driver must have been previously
 *                initailized using InitializeSDMMCDriver.
 *                If the function encounters an error it will not
 *                re-attempt the operation.
 *   Input: flash_offset - The source address on the flash where
 *          data will come from specified as a byte value. Must be
 *          32 bits aligned.
 *          pBuffer - Local address where data will be read in to.
 *          size - Specifies number of bytes to read - 32 bits
 *          aligned
 *   Output: buffer will have read data
 *   Returns: Status of read
 *****************************************************************/
uint32_t emmc_read(uint64_t pBuffer, uint32_t flash_offset, uint32_t length)
{
	uint32_t result = NO_ERROR;
	uint32_t temp_img_sz;

	debug_emmc("%s: flash_offset::%x pbuffer::%lx length::%x\n",
		__func__, flash_offset, pBuffer, length);
	is_last_read_success = 0;
	/* We will divide the original data we want to read from flash into
	 * big chunks.
	 * BLOCK_COUNT register of the controller can support at most 65535
	 * blocks in one read operation.
	 * Also note that the block size is 512 bytes.
	 * As a result, the biggest chunk supported is 65535*512 =
	 * 33553920 bytes!
	 * TDB: setting read_chunk to 512 is because the limitation of ASIM,
	 *  for now, ASIM only support read 1 block command
	 */
	uint32_t read_chunk = 512;
	uint64_t local_buffer = pBuffer;

	/* Remaining size to read from flash. Initially equal to the
	 * original size.
	 */
	uint32_t remaining_size = length;
	/* This is the size for the current read in the main loop.
	 */
	uint32_t current_read_size = 0;
	/* Offset in Flash for the remaining data. Initially equal to original
	 *  flash offset.
	 */
	uint32_t remaining_flash_offset = flash_offset;
	uint32_t block_boundary;

	/* Make sure State is correct
	 */
	if (crd_prop.card_state != READY) {
		debug_emmc("%s: Card not ready\n", __func__);
		return SDMMCDeviceNotReadyError;
	}
	/* LPAddress is 0 by default but could be non-zero if enabled by IOCTL.
	 */
	/* TBD need to understand
	 */
#ifdef TBD
	flash_offset += this->LPAddress;
#endif
	/*Block boundary offset
	 */
	block_boundary = HARD512BLOCKLENGTH - 1;

	/*fill the image attributes
	 */
	img_txfer_upd.img_start_addr = flash_offset & (~block_boundary);
	temp_img_sz = length + (flash_offset - img_txfer_upd.img_start_addr);
	img_txfer_upd.img_size = temp_img_sz % HARD512BLOCKLENGTH ?
		((temp_img_sz & (~block_boundary)) + HARD512BLOCKLENGTH) :
		temp_img_sz;
	img_txfer_upd.img_cur_sz_txfer = 0;
	img_txfer_upd.img_txfer_status = IMAGE_XFR_NOTDONE;


	/* RAZA TODO - check that flash offset and size are in range
	 * Check if Start Address and size are word aligned
	 */
	if (((flash_offset % 4) != 0) || ((local_buffer % 4) != 0)) {
		debug_emmc("%s: Alignment error\n", __func__);
		return SDMMC_ADDR_MISALIGN_ERROR;
	}

	if (flash_offset % HARD512BLOCKLENGTH) {
		debug_emmc("%s: Using non-block flash offset 0x%x\n",
			   __func__, flash_offset);
	}
	/* We divide the initial size that will be read from the flash into
	 * chunks whose size is determined by read_chunk variable.
	 * This while loop iterates through each chunk and and calls the READ
	 * FLASH function for each.
	 */
	debug_emmc("%s: Remaining size: %u\n", __func__,
		   remaining_size);
	while (remaining_size > 0) {
		/* Calculate read size */
		if (remaining_size > read_chunk) {
			current_read_size = read_chunk -
				(remaining_flash_offset % read_chunk);
		} else {
			/* Checking the read size exceed the chunk boundary
			 * or not.
			 * If start offset + read size larger than chunk
			 * boundary, we  minus the extra part.
			 */
			if ((remaining_flash_offset + remaining_size) >
				(remaining_flash_offset + read_chunk -
				(remaining_flash_offset % read_chunk))) {

				current_read_size = remaining_size -
				((remaining_size + remaining_flash_offset) % read_chunk);
			} else {
				current_read_size = remaining_size;
			}
		}
		debug_emmc("Current read size: %u\n", current_read_size);
		/* Does the start/end addresses align on Block Boundries?
		 *  Probably not, record discard bytes
		 */
		card_txfer_upd.card_addr = remaining_flash_offset;
		card_txfer_upd.StartDiscardWords = remaining_flash_offset %
			HARD512BLOCKLENGTH;

		if (((remaining_flash_offset + current_read_size) %
			HARD512BLOCKLENGTH) == 0)
			card_txfer_upd.EndDiscardWords = 0;
		else
			card_txfer_upd.EndDiscardWords = HARD512BLOCKLENGTH -
				((remaining_flash_offset + current_read_size) %
				HARD512BLOCKLENGTH);

		card_txfer_upd.NumBlocks = (card_txfer_upd.EndDiscardWords +
			card_txfer_upd.StartDiscardWords + current_read_size) /
			HARD512BLOCKLENGTH;
		/* Total Transfer size including pre and post, in words
		 */
		card_txfer_upd.TransWordSize = card_txfer_upd.NumBlocks *
			HARD512BLOCKLENGTH / 4;

		/* Convert to # of words
		 */
		card_txfer_upd.LocalAddr = local_buffer;
		card_txfer_upd.StartDiscardWords /= 4;
		card_txfer_upd.EndDiscardWords /= 4;
		/* Stores Index of Current read position
		 */
		card_txfer_upd.WordIndex = 0;

		/* Kick off the Read
		 */
		debug_emmc("Num blocks: %u, local addr: 0x%lx\n",
			   card_txfer_upd.NumBlocks, card_txfer_upd.LocalAddr);
		debug_emmc("Start discard words: %u, end discard words: %u, num blocks: %u\n",
			   card_txfer_upd.StartDiscardWords,
			   card_txfer_upd.EndDiscardWords,
			   card_txfer_upd.NumBlocks);
		debug_emmc("%s: Calling emmc_read_blocks()\n", __func__);
		result = emmc_read_blocks();
		if (crd_prop.card_state == FAULT) {
			result = (emmc_GetCardErrorState());

			debug_emmc("%s: error state: 0x%x\n", __func__, result);
			break;
		}

		/* Adjust the local_buffer address, flash_offset, and the remaining_size
		 *  which are used in the while loop.
		 */
		local_buffer += current_read_size;
		remaining_flash_offset += current_read_size;
		remaining_size -= current_read_size;
	} /* End while */

	crd_prop.card_state = READY;
	is_last_read_success = 1;
	debug_emmc("%s: returning 0x%x\n", __func__, result);
	return result;
}

/****************************************************************
 *   Description: This function will call into the MMC device to
 *                change to the specified partition
 *   Input: part_num - Partition Number to set in the device
 *   Output: None
 *   Returns: None
 *****************************************************************/
uint32_t emmc_setpartition(uint32_t part_num)
{
	uint32_t result = NO_ERROR;

	/* Make sure State is correct
	 */
	if (crd_prop.card_state != READY)
		return SDMMCDeviceNotReadyError;

	/* If we can't switch partitions we continue don't flag an error
	 */
	change_parition(part_num);
	crd_prop.card_state = READY;

	return result;
}

/****************************************************************
 *   Description: To get the current error state
 *   Input: None
 *   Output: None
 *   Returns: returns current error state
 *****************************************************************/
uint32_t emmc_GetCardErrorState(void)
{
	uint32_t result = SDMMC_GENERAL_ERROR;

	if ((last_cmd_resp.R1_RESP & R1_SWITCH_ERROR) ==
		R1_SWITCH_ERROR)
		result = SDMMC_SWITCH_ERROR;
	else if ((last_cmd_resp.R1_RESP & R1_ERASE_RESET_ERROR) ==
		R1_ERASE_RESET_ERROR)
		result = SDMMC_ERASE_RESET_ERROR;
	else if ((last_cmd_resp.R1_RESP & R1_CIDCSD_OVERWRITE_ERROR) ==
		R1_CIDCSD_OVERWRITE_ERROR)
		result = SDMMC_CIDCSD_OVERWRITE_ERROR;
	else if ((last_cmd_resp.R1_RESP & R1_OVERRUN_ERROR) ==
		R1_OVERRUN_ERROR)
		result = SDMMC_OVERRUN_ERROR;
	else if ((last_cmd_resp.R1_RESP & R1_UNDERRUN_ERROR) ==
		R1_UNDERRUN_ERROR)
		result = SDMMC_UNDERRUN_ERROR;
	else if ((last_cmd_resp.R1_RESP & R1_CC_ERROR) ==
		R1_CC_ERROR)
		result = SDMMC_CC_ERROR;
	else if ((last_cmd_resp.R1_RESP & R1_ECC_ERROR) ==
		R1_ECC_ERROR)
		result = SDMMC_ECC_ERROR;
	else if ((last_cmd_resp.R1_RESP & R1_ILL_CMD_ERROR) ==
		R1_ILL_CMD_ERROR)
		result = SDMMC_ILL_CMD_ERROR;
	else if ((last_cmd_resp.R1_RESP & R1_COM_CRC_ERROR) ==
		R1_COM_CRC_ERROR)
		result = SDMMC_COM_CRC_ERROR;
	else if ((last_cmd_resp.R1_RESP & R1_LOCK_ULOCK_ERRROR) ==
		R1_LOCK_ULOCK_ERRROR)
		result = SDMMC_LOCK_ULOCK_ERRROR;
	else if ((last_cmd_resp.R1_RESP & R1_LOCK_ERROR) == R1_LOCK_ERROR)
		result = SDMMC_LOCK_ERROR;
	else if ((last_cmd_resp.R1_RESP & R1_WP_ERROR) == R1_WP_ERROR)
		result = SDMMC_WP_ERROR;
	else if ((last_cmd_resp.R1_RESP & R1_ERASE_PARAM_ERROR) ==
		R1_ERASE_PARAM_ERROR)
		result = SDMMC_ERASE_PARAM_ERROR;
	else if ((last_cmd_resp.R1_RESP & R1_ERASE_SEQ_ERROR) ==
		R1_ERASE_SEQ_ERROR)
		result = SDMMC_ERASE_SEQ_ERROR;
	else if ((last_cmd_resp.R1_RESP & R1_BLK_LEN_ERROR) ==
		R1_BLK_LEN_ERROR)
		result = SDMMC_BLK_LEN_ERROR;
	else if ((last_cmd_resp.R1_RESP & R1_ADDR_MISALIGN_ERROR) ==
		R1_ADDR_MISALIGN_ERROR)
		result = SDMMC_ADDR_MISALIGN_ERROR;
	else if ((last_cmd_resp.R1_RESP & R1_ADDR_RANGE_ERROR) ==
		R1_ADDR_RANGE_ERROR)
		result = SDMMC_ADDR_RANGE_ERROR;

	return result;
}

/****************************************************************
 *   Description: This function will write as many bytes as
 *                specified from local_buffer to Flash Offset. The
 *                flash driver must have been previously
 *                initialized using InitializeSDMMCDriver. The
 *                relavent addresses must have been previously
 *                erased. If the function encounters an error it
 *                will not re-attempt the operation.
 *   Input: flash_offset - The source address on the flash where
 *          data will be written to specified as a byte value.
 *          It must be 32 bits aligned.
 *          pBuffer - Local address where data will be copied from.
 *          size - Specifies number of bytes to write -
 *          32 bits aligned
 *   Output: Desired Values are written to flash
 *   Returns: status
 *****************************************************************/
uint32_t emmc_write(uint64_t pBuffer, uint32_t flash_offset, uint32_t size)
{
	uint32_t result = NO_ERROR;
	uintptr_t local_buffer = (uintptr_t)pBuffer;
	uint8_t temp_block_buffer[HARD512BLOCKLENGTH];
	uint32_t start_offset;

	debug_emmc("%s flash_offset::%x pbuffer::%lx length::%x\n",
		__func__, flash_offset, pBuffer, size);
	/* We will divide the original data we want to write to flash into big
	 * chunks.
	 * BLOCK_COUNT register of the controller can support at most 65535
	 * blocks in one write operation.
	 * Also note that the block size is 512 bytes.
	 * As a result, the biggest chunk supported is
	 * 65535*512 = 33553920 bytes!
	 */
	uint32_t write_chunk = 512;

	/* Remaining size to write to flash. Initially equal to the original
	 *  size.
	 */
	uint32_t remaining_size = size;
	/* This is the size for the current write in the main loop.
	 */
	uint32_t current_write_size = 0;
	/* Offset in Flash for the remaining data. Initially equal to original
	 *  flash offset.
	 */
	uint32_t remaining_flash_offset = flash_offset;
	uint32_t block_boundary;
#ifdef TBD
	// LPAddress is 0 by default but could be non-zero if enabled by IOCTL.
	flash_offset += this->LPAddress;
#endif

	/* Check if Start Address and size are word aligned
	 */
	if (((flash_offset % 4) != 0) || ((local_buffer % 4) != 0))
		return SDMMC_ADDR_MISALIGN_ERROR;

	/* Block boundary offset */
	block_boundary = crd_prop.WriteBlockSize - 1;
	start_offset = flash_offset % HARD512BLOCKLENGTH;
	if (crd_prop.card_state != READY)
		return SDMMCDeviceNotReadyError;
	card_txfer_upd.StartDiscardWords = 0;
	card_txfer_upd.EndDiscardWords = 0;

	/* If we don't start on a block boundary, perform a read-modify-write */
	if (start_offset) {
		uint32_t write_size = HARD512BLOCKLENGTH - start_offset;

		if (size < write_size)
			write_size = size;
		result = emmc_read((uint64_t)temp_block_buffer,
				   flash_offset & ~HARD512BLOCKLENGTH,
				   HARD512BLOCKLENGTH);
		if (result != NO_ERROR) {
			debug_emmc("%s error reading block\n", __func__);
			return result;
		}
		debug_emmc("%s: Performing start read-modify-write for offset %u, size %u\n",
			   __func__, start_offset, write_size);
		memcpy(temp_block_buffer + start_offset,
		       (void *)pBuffer,
		       write_size);
		img_txfer_upd.img_size = HARD512BLOCKLENGTH;
		img_txfer_upd.img_cur_sz_txfer = 0;
		img_txfer_upd.img_start_addr = flash_offset & ~(HARD512BLOCKLENGTH - 1);
		img_txfer_upd.img_txfer_status = IMAGE_XFR_NOTDONE;

		card_txfer_upd.card_addr = flash_offset & ~block_boundary;
		card_txfer_upd.LocalAddr = (uint64_t)temp_block_buffer;
		card_txfer_upd.NumBlocks = 1;
		card_txfer_upd.WordIndex = 0;
		card_txfer_upd.TransWordSize = HARD512BLOCKLENGTH / 4;
		if (crd_prop.card_state != READY)
			return SDMMCDeviceNotReadyError;
		result = emmc_WriteBlocks();
		if (crd_prop.card_state == FAULT)
			result = emmc_GetCardErrorState();

		if (result != NO_ERROR) {
			debug_emmc("%s: Error 0x%x writing partial block\n", __func__, result);
			return result;
		}
		if (size == write_size)
			return result;
		if (crd_prop.card_state != READY)
			return SDMMCDeviceNotReadyError;

		/* Move to next block */
		remaining_flash_offset += HARD512BLOCKLENGTH - start_offset;
		local_buffer += write_size;
		remaining_size -= write_size;
	}
	/* fill the image attributes */
	img_txfer_upd.img_start_addr = remaining_flash_offset;
	img_txfer_upd.img_size = remaining_size > HARD512BLOCKLENGTH ?
		HARD512BLOCKLENGTH : remaining_size;
	img_txfer_upd.img_cur_sz_txfer = 0;
	img_txfer_upd.img_txfer_status = IMAGE_XFR_NOTDONE;


	/* We divide the initial size that will be written to the flash into
	 * chunks whose size is determined by write_chunk variable.
	 * This while loop iterates through each chunk and and calls the
	 * WRITE FLASH function for each.
	 */
	while (remaining_size >= write_chunk) {
		/* If the remaining size is larger than 32 MB, then we keep
		 * writing 32 MB.
		 * Otherwise, we only write the remaining number of bytes.
		 */
		current_write_size = write_chunk;

		/* Does the start/end addresses align on Block Boundries? Probably not,
		 * record discard bytes
		 */
		card_txfer_upd.card_addr = remaining_flash_offset;


		card_txfer_upd.NumBlocks = 1;
		/* Total Transfer size including pre and post, in words
		 */
		card_txfer_upd.TransWordSize = card_txfer_upd.NumBlocks *
			crd_prop.WriteBlockSize / 4;

		/* Convert to # of words */
		card_txfer_upd.LocalAddr = local_buffer;
		/* Stores Index of Current write position
		 */
		card_txfer_upd.WordIndex = 0;

		/* Kick off the Write
		 */
		result = emmc_WriteBlocks();
		if (crd_prop.card_state == FAULT) {
			result = (emmc_GetCardErrorState());
			break;
		}

		/*
		 * Adjust the local_buffer address, flash_offset, and the
		 * remaining_size which are used in the while loop.
		 */
		local_buffer += current_write_size;
		remaining_flash_offset += current_write_size;
		remaining_size -= current_write_size;

	} /* End while */

	/* If there's a partial block at the end, perform another read-modify-write */
	if (remaining_size) {
		debug_emmc("%s: Writing partial block at end of size %u to offset 0x%x\n",
			   __func__, remaining_size, remaining_flash_offset);
		result = emmc_read((uint64_t)temp_block_buffer,
				   remaining_flash_offset,
				   HARD512BLOCKLENGTH);
		if (result != NO_ERROR) {
			debug_emmc("%s: Error reading last partial block at %u\n",
				   __func__, remaining_flash_offset);
			return result;
		}
		memcpy(temp_block_buffer, (void *)local_buffer, remaining_size);
		img_txfer_upd.img_size = HARD512BLOCKLENGTH;
		img_txfer_upd.img_cur_sz_txfer = 0;
		img_txfer_upd.img_start_addr = remaining_flash_offset;
		img_txfer_upd.img_txfer_status = IMAGE_XFR_NOTDONE;

		card_txfer_upd.card_addr = remaining_flash_offset;
		card_txfer_upd.LocalAddr = (uint64_t)temp_block_buffer;
		card_txfer_upd.NumBlocks = 1;
		card_txfer_upd.WordIndex = 0;
		card_txfer_upd.TransWordSize = HARD512BLOCKLENGTH / 4;
		if (crd_prop.card_state != READY)
			return SDMMCDeviceNotReadyError;
		result = emmc_WriteBlocks();
		if (crd_prop.card_state == FAULT)  {
			result = emmc_GetCardErrorState();
			debug_emmc("%s: Error 0x%x writing last partial block\n",
				   __func__, result);
		}
	}

	crd_prop.card_state = READY;

	return result;
}

/****************************************************************
 *   Description: This function will erase bytes that fall on
 *                erase group boundries. If the starting address
 *                and size do not fall on erase group boundries,
 *                they will be ro/nded up to do so.
 *   Input: flash_offset - The source address on the flash where
 *          data will begin to be erased
 *          size - Specifies number of bytes to erase. Note that
 *          flash technology dictates flash be erased on erase
 *          group granularity
 *   Output: Desired blocks are erased from flash
 *   Returns: status
 *****************************************************************/
uint32_t emmc_erase(uint32_t flash_offset, uint32_t size)
{
	uint32_t result = NO_ERROR;

	/* Make sure State is correct
	 */
	if (crd_prop.card_state != READY)
		return SDMMCDeviceNotReadyError;

	/* Set the correct state */
	crd_prop.card_state = ERASE;
	card_txfer_upd.card_addr = flash_offset;
	card_txfer_upd.TransWordSize = size / 4;

#ifdef TBD // need to understand
	// LPAddress is 0 by default but could be non-zero if enabled by IOCTL.
	flash_offset += this->LPAddress;

	//Kick off the read
	//TODO. Enable for debug.
	//result = crd_prop.Funcs.Erase_F(pSDMMCP);
#endif
	/*send CMD13 to check the status of the card
	 * TBD s/w reset?
	 */
	if (crd_prop.card_state == FAULT)
		result = (emmc_GetCardErrorState());
	crd_prop.card_state = READY;

	return result;
}

struct emmc_driver emmc_drv = {
	.open = emmc_open,
	.close = emmc_close,
	.read = emmc_read,
	.setpartition = emmc_setpartition,
	.GetCardErrorState = emmc_GetCardErrorState,
	.write = emmc_write,
	.erase = emmc_erase
};
