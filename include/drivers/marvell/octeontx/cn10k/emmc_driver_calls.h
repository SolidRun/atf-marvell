/***********************license start***********************************
 * Copyright (c) 2020 Marvell.
 * SPDX-License-Identifier: BSD-3-Clause
 * https://spdx.org/licenses
 **********************license end**************************************/
#ifndef _EMMC_DRIVER_FUNC_H
#define _EMMC_DRIVER_FUNC_H

struct emmc_driver {
	uint32_t (*open)(uint32_t part_num);
	uint32_t (*close)(void);
	uint32_t (*read)(uint64_t addr, uint32_t flash_offset, uint32_t size);
	uint32_t (*setpartition)(uint32_t part_num);
	uint32_t (*GetCardErrorState)(void);
	uint32_t (*write)(uint64_t addr, uint32_t flash_offset, uint32_t size);
	uint32_t (*erase)(uint32_t flash_offset, uint32_t size);
};

/****************************************************************
 *   Description: Initializes the SDMMC port on the platform and
 *                all of the other necessary hardware needed for
 *                SDMMC reading, writing and erasing.
 *   Input: partition number
 *   Output: None
 *   Returns: status
 *****************************************************************/
uint32_t emmc_open(uint32_t part_num);

/****************************************************************
 *   Description: Shutsdown and cleans up after the SDMMC device
 *   Input: None
 *   Output: All the needed hardware should be un-initialized.
 *   Returns: None
 *****************************************************************/
uint32_t emmc_close(void);

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
 *          addr - Local address where data will be read in to.
 *          size - Specifies number of bytes to read - 32 bits
 *          aligned
 *   Output: buffer will have read data
 *   Returns: Status of read
 *****************************************************************/
uint32_t emmc_read(uint64_t addr, uint32_t flash_offset, uint32_t size);

/****************************************************************
 *   Description: This function will call into the MMC device to
 *                change to the specified partition
 *   Input: part_num - Partition Number to set in the device
 *   Output: None
 *   Returns: None
 *****************************************************************/
uint32_t emmc_setpartition(uint32_t part_num);

/****************************************************************
 *   Description: To get the current error state
 *   Input: None
 *   Output: None
 *   Returns: None
 *****************************************************************/
uint32_t emmc_GetCardErrorState(void);

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
uint32_t emmc_write(uint64_t flash_offset, uint32_t pBuffer,
	uint32_t size);

/****************************************************************
 *   Description: This function will erase bytes that fall on
 *                erase group boundries. If the starting address
 *                and size do not fall on erase group boundries,
 *                they will be rounded up to do so.
 *   Input: flash_offset - The source address on the flash where
 *          data will begin to be erased
 *          size - Specifies number of bytes to erase. Note that
 *          flash technology dictates flash be erased on erase
 *          group granularity
 *   Output: Desired blocks are erased from flash
 *   Returns: status
 *****************************************************************/
uint32_t emmc_erase(uint32_t flash_offset, uint32_t size);
#endif /* _EMMC_DRIVER_FUNC_H */
