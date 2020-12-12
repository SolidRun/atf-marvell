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

/**
 * Note: the following needs to be updated in U-Boot and other update tools
 * whenever this is changed.
 */
#ifdef PLAT_CN10K_FAMILY
#define UPDATE_MAGIC		0x55504454	/* UPDT */
/** Current smc_update_descriptor version */
#define UPDATE_VERSION		0x0001

#define UPDATE_FLAG_BACKUP	0x0001	/** Set to update secondary location */
#define UPDATE_FLAG_EMMC	0x0002	/** Set to update eMMC instead of SPI */
#define UPDATE_FLAG_ERASE_PART	0x0004	/** Erase eMMC partition data */
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
		   uint64_t dram_end);
#else
int spi_smc_update(uintptr_t user_buf, uintptr_t size,
				uint32_t bus, uint32_t cs);
#endif	/* PLAT_CN10K_FAMILY */
#endif	/* __TIM_UPDATE_H__ */
