/*
 * Copyright (C) 2019 Marvell International Ltd.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#ifndef __TIM_UPDATE_H__
#define __TIM_UPDATE_H__

#define SPI_CONFIG_ERR		2
#define SPI_MMAP_ERR		3
#define SPI_IMG_VALIDATE_ERR	4
#define SPI_IMG_UPDATE_ERR	5

enum update_ret {
	/** No errors */
	UPDATE_OK = 0,
	/** Error with the CPIO image */
	UPDATE_CPIO_ERROR = -1,
	/** Invalid TIM found in update */
	UPDATE_TIM_ERROR = -2,
	/** One or more files failed hash check */
	UPDATE_HASH_ERROR = -3,
	/** Update authentication error */
	UPDATE_AUTH_ERROR = -4,
	/** I/O error reading or writing to the flash */
	UPDATE_IO_ERROR = -5,
	/**
	 * Error found that requires all objects to be updated,
	 * i.e. a corrupt object found in the existing flash
	 */
	UPDATE_REQUIRE_FULL = -6,
	/** Out of resources, too many files, etc. */
	UPDATE_NO_MEM = -7,
	/** Problem found with device tree firmware-update section */
	UPDATE_DT_ERROR = -8,
	/** Incomplete file grouping found */
	UPDATE_GROUP_ERROR = -9,
	/** Location or size of an object invalid */
	UPDATE_LOCATION_ERROR = -10,
	/** Unsupported media */
	UPDATE_INVALID_MEDIA = -11,
	/** Invalid alignment of update file */
	UPDATE_BAD_ALIGNMENT = -12,
	/** TIM is missing in an object */
	UPDATE_MISSING_TIM = -13,
	/** File is missing in an object */
	UPDATE_MISSING_FILE = -14,
	/** TIM is missing in flash */
	UPDATE_TIM_MISSING = -15,
	/** I/O issue with eHSM component */
	UPDATE_EHSM_ERROR = -16,
	/** Update rejected due to version check */
	UPDATE_VERSION_CHECK_FAIL = -17,
	/** Bad magic number in update descriptor */
	UPDATE_BAD_DESC_MAGIC = -18,
	/** Unsupported version in update descriptor */
	UPDATE_BAD_DESC_VERSION = -19,
	/** Error mapping update to secure memory */
	UPDATE_MMAP_ERROR = -20,
	/** Unknown error */
	UPDATE_UNKNOWN_ERROR = -1000,
};

/**
 * Note: the following needs to be updated in U-Boot and other update tools
 * whenever this is changed.
 */
#define UPDATE_MAGIC		0x55504454	/* UPDT */
/** Current smc_update_descriptor version */
#define UPDATE_VERSION		0x0001

#define UPDATE_FLAG_BACKUP	0x0001	/** Set to update secondary location */
#define UPDATE_FLAG_EMMC	0x0002	/** Set to update eMMC instead of SPI */
#define UPDATE_FLAG_ERASE_PART	0x0004	/** Erase eMMC partition data */
#define UPDATE_FLAG_IGNORE_VERSION 0x0008 /** Don't perform version check */
/** Set when user parameters are passed */
#define UPDATE_FLAG_USER_PARMS	0x8000

#define BACKUP_IMAGE_OFFSET	0x1000000
/**
 * This descriptor is passed by U-Boot or other software performing an update
 */
struct smc_update_descriptor {
	uint32_t	magic;		/** UPDATE_MAGIC */
	uint16_t	version;	/** Version of descriptor */
	uint16_t	update_flags;	/** Flags passed to update process */
	uint64_t	image_addr;	/** Address of image (CPIO file) */
	uint64_t	image_size;	/** Size of image (CPIO file) */
	uint32_t	bus;		/** SPI BUS number */
	uint32_t	cs;		/** SPI chip select number */
	uint64_t	reserved;	/** Space to add stuff */
	uint64_t	user_addr;	/** Passed to customer function */
	uint64_t	user_size;	/** Passed to customer function */
	uint64_t	user_flags;	/** Passed to customer function */
};

int spi_smc_update(uintptr_t desc_buf, uint64_t desc_size,
		   uint64_t dram_end, enum update_ret *uret);
#endif	/* __TIM_UPDATE_H__ */
