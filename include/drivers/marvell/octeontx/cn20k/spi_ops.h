/*
 * Copyright (c) 2024 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#ifndef __SPI_OPS_H__
#define __SPI_OPS_H__

#define SPI_CONFIG_ERR		2
#define SPI_MMAP_ERR		3

int spi_write_efi_var(uintptr_t efi_buf, uint64_t efi_size);
int spi_read_efi_var(uintptr_t efi_buf, uint64_t *efi_size);
unsigned long sec_spi_operation(int offset, uintptr_t efi_buf, uint64_t *efi_size,
		      int op);
#endif
