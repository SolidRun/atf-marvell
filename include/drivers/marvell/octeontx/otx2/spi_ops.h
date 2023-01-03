/*
 * Copyright (c) 2022 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#ifndef __SPI_OPS_H__
#define __SPI_OPS_H__

int spi_read_memtest_persistent_data(uintptr_t buf, uint64_t *sz);
int spi_write_memtest_persistent_data(uintptr_t buf, uint64_t sz);

#endif
