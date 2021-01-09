/*
 * Copyright (C) 2020 Marvell International Ltd.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#ifndef __SPI_SMC_LOAD_H__
#define __SPI_SMC_LOAD_H__

#define SPI_CONFIG_ERR		2
#define SPI_MMAP_ERR		3

int spi_smc_write_efi_var(uintptr_t efi_buf, uint64_t efi_size,
			  int bus, int cs);
int spi_smc_load_efi_image(uintptr_t efi_img_buf, uint64_t *efi_img_size,
			   int image_id);
int spi_smc_load_switch_fw(uintptr_t super_img_buf, uintptr_t cm3_img_buf,
			   uint64_t *cm3_size);
int spi_smc_load_oem_data(int spi_id, int cs, uintptr_t img_buf,
			  uint64_t *img_size);
#endif /* __SPI_SMC_SWTICH_H__ */
