/*
 * Copyright (C) 2020 Marvell International Ltd.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#ifndef __SPI_SMC_SWTICH_H__
#define __SPI_SMC_SWITCH_H__

#define SPI_CONFIG_ERR		2
#define SPI_MMAP_ERR		3

int spi_smc_load_switch_fw(uintptr_t super_img_buf, uintptr_t cm3_img_buf,
			   uint64_t *cm3_size);
#endif /* __SPI_SMC_SWTICH_H__ */
