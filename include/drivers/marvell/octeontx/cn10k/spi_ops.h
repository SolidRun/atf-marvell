/*
 * Copyright (c) 2021 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#ifndef __SPI_OPS_H__
#define __SPI_OPS_H__

#define SPI_CONFIG_ERR		2
#define SPI_MMAP_ERR		3

int spi_write_efi_var(uintptr_t efi_buf, uint64_t efi_size);
int load_efi_image(uintptr_t efi_img_buf, uint64_t *efi_img_size,
			   int image_id, bool nsec);
unsigned long sec_spi_operation(int offset, uintptr_t efi_buf, uint64_t *efi_size,
		      int op);
int load_switch_fw(uintptr_t super_img_buf, uintptr_t cm3_img_buf,
			   uint64_t *cm3_size, bool nsec);
int spi_load_oem_data(int spi_id, int cs, uintptr_t img_buf,
			  uint64_t *img_size, bool nsec);
int spi_update_mac_addr_persistent_data(uintptr_t log_entry, size_t sz);
int spi_read_mac_addr_persistent_data(uintptr_t log_entry, size_t *sz);
int spi_update_ethernet_persistent_data(uintptr_t log_entry, size_t sz);
int spi_read_ethernet_persistent_data(uintptr_t log_entry, uint64_t *sz);
int spi_read_memtest_persistent_data(uintptr_t buf, uint64_t *sz);
int spi_write_memtest_persistent_data(uintptr_t buf, uint64_t sz);

#endif
