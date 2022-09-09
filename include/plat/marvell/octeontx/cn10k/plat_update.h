/*
 * Copyright (c) 2020 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#ifndef __PLAT_UPDATE_H__
#define __PLAT_UPDATE_H__

/**
 * Validates and updates the firmware in secure storage for CN10K.
 *
 * @param addr	Address in non-secure memory of the firmware image
 * @param size	Size in bytes of the firmware image
 * @param media_type	0 for SPI, 1 for eMMC
 * @param secondary	0 for primary, 1 for secondary
 */
int plat_fw_update(uint64_t addr, uint64_t size, uint64_t media_type,
		   uint64_t secondary);

#endif /* __PLAT_UPDATE_H__ */
