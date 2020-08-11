/*
 * Copyright (C) 2020 Marvell International Ltd.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <spi.h>
#include <octeontx_common.h>
#include <drivers/io/io_storage.h>
#include <assert.h>
#include <drivers/io/io_driver.h>
#include <debug.h>
#include <plat_board_cfg.h>
#include <octeontx_mmap_utils.h>
#include <spi_smc_switch.h>

#undef DEBUG_SPI_NOR

#ifdef DEBUG_SPI_NOR
#define debug_spi_nor	printf
#else
#define debug_spi_nor(...) ((void) (0))
#endif

/*
 * For now, using a small local buffer
 */
#define BUF_SIZE	4096
__aligned(8) uint8_t tmp_buf[BUF_SIZE] = {0};

static int __spi_smc_load_img(uintptr_t user_buffer, uintptr_t size,
			      uint32_t loc)
{
	int bus = 0, cs = 0;
	uint64_t offset = loc, xfer_len;
	int mode = SPI_ADDRESSING_24BIT, ret = 0;

	while (size > 0) {

		xfer_len = size < BUF_SIZE ? size : BUF_SIZE;

		if (spi_nor_read((uint8_t *) tmp_buf, BUF_SIZE, offset,
					mode, bus, cs) < 0) {
			debug_spi_nor("SPI: Read flash failed\n");
			ret = -1;
			break;
		}
		memcpy((void *)user_buffer, tmp_buf, xfer_len);
		offset += xfer_len;
		user_buffer += xfer_len;
		size -= xfer_len;
		/* Clear secure buffers as a sanity */
		memset(tmp_buf, 0, BUF_SIZE);
	}

	return ret;
}

int spi_smc_switch_fw(uintptr_t super_img_buf, uintptr_t cm3_img_buf)
{
	int err = 0, ns_map_size, size = 0x80000;
	int bus = 0, cs = 0;

	debug_spi_nor("SPI: bus:0x%llx cs:0x%llx\n", bus, cs);

	/* Init Secure SPI */
	/* FIXME */
	/* Need to parse FDT to config SPI */
	if (spi_config(CONFIG_SPI_FREQUENCY, 0, 0, 0, bus, cs)) {
		debug_spi_nor("SPI: Config flash failed\n");
		return -SPI_CONFIG_ERR;
	}

	ns_map_size = size < PAGE_SIZE ? PAGE_SIZE :
			(((size/PAGE_SIZE) + 1) * PAGE_SIZE);

	/* Map Non-secure memory buffer */
	if (octeontx_mmap_add_dynamic_region_with_sync(super_img_buf,
		super_img_buf, ns_map_size, MT_RW | MT_NS)) {
		debug_spi_nor("SPI: mmap failed (%d)\n", err);
		return -SPI_MMAP_ERR;
	}

	/* Load super image */
	if (__spi_smc_load_img(super_img_buf, size, 0x520000)) {
		err = -EIO;
		goto err;
	}

	/* Map Non-secure memory buffer */
	if (octeontx_mmap_add_dynamic_region_with_sync(cm3_img_buf,
		cm3_img_buf, ns_map_size, MT_RW | MT_NS)) {
		debug_spi_nor("SPI: mmap failed (%d)\n", err);
		err = -SPI_MMAP_ERR;
		goto err;
	}

	/* Load cm3 image */
	if (__spi_smc_load_img(cm3_img_buf, size, 0x5a0000)) {
		err = -EIO;
	}

	octeontx_mmap_remove_dynamic_region_with_sync(cm3_img_buf,
		ns_map_size);
err:
	/* unmap non-secure memory buffer */
	octeontx_mmap_remove_dynamic_region_with_sync(super_img_buf,
		ns_map_size);
	return err;
}

