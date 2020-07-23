/*
 * Copyright (C) 2019 Marvell International Ltd.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#ifndef __SPI_SMC_UPDATE_H__
#define __SPI_SMC_UPDATE_H__

#define SPI_CONFIG_ERR		2
#define SPI_MMAP_ERR		3
#define SPI_IMG_VALIDATE_ERR	4
#define SPI_IMG_UPDATE_ERR	5

int spi_smc_update(uintptr_t user_buf, uintptr_t size,
				uint32_t bus, uint32_t cs);
#endif /* __SPI_SMC_UPDATE_H__ */
