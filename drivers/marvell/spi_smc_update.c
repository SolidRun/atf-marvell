/*
 * Copyright (C) 2020 Marvell International Ltd.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

/* Wrapper calls for SPI update via SMC (CN10xx) */

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
#include <spi_smc_update.h>
#include <octeontx_mmap_utils.h>

#undef DEBUG_SPI_NOR

#ifdef DEBUG_SPI_NOR
#define debug_spi_nor	printf
#else
#define debug_spi_nor(...) ((void) (0))
#endif

/* FIXME */
/* Currently not supported */
static int __spi_smc_validate_img(uintptr_t user_buf, uintptr_t size,
					uint32_t bus, uint32_t cs)
{
	return 0;
}

/* FIXME */
/* To support image validation before update,
 * we have to make a complete copy of the image to update
 * locally in secure memory. The validation & update
 * must be done using the secure copy.
 * For now, using a small local buffer
 */
#define BUF_SIZE	4096
__aligned(8) uint8_t wr_buffer[BUF_SIZE] = {0};
__aligned(8) uint8_t rd_buffer[BUF_SIZE] = {0};

static int __spi_smc_update_img(uintptr_t user_buffer, uintptr_t size,
					uint32_t bus, uint32_t cs)
{
	uint64_t offset = 0, xfer_len;
	int mode = SPI_ADDRESSING_24BIT, ret = 0;

	while (size > 0) {

		xfer_len = size < BUF_SIZE ? size : BUF_SIZE;

#ifdef DEBUG_SPI_NOR
		uint8_t *test_buf = (uint8_t *)user_buffer;

		debug_spi_nor("NS buffer:\n");
		for (int i = 0; i < xfer_len; i++) {
			debug_spi_nor("0x%x ", test_buf[i]);
			if (i%20 == 0)
				debug_spi_nor("\n");
		}
		debug_spi_nor("\n");
#endif
		memcpy((void *)wr_buffer, (const void *)user_buffer, xfer_len);

#ifdef DEBUG_SPI_NOR
		test_buf = (uint8_t *)wr_buffer;
		debug_spi_nor("Secure buffer:\n");
		for (int i = 0; i < xfer_len; i++) {
			debug_spi_nor("0x%x ", test_buf[i]);
			if (i%20 == 0)
				debug_spi_nor("\n");
		}
		debug_spi_nor("\n");
#endif

		if (spi_nor_erase(offset, mode, bus, cs)) {
			debug_spi_nor("SPI: Erase flash failed\n");
			ret = -1;
			break;
		}

		if (spi_nor_write((uint8_t *)wr_buffer, BUF_SIZE, offset,
				    mode, bus, cs) < 0) {
			debug_spi_nor("SPI: Write flash failed\n");
			ret = -1;
			break;
		}
		if (spi_nor_read((uint8_t *) rd_buffer, BUF_SIZE, offset,
					mode, bus, cs) < 0) {
			debug_spi_nor("SPI: Read flash failed\n");
			ret = -1;
			break;
		}
#ifdef DEBUG_SPI_NOR
		test_buf = (uint8_t *)rd_buffer;
		debug_spi_nor("Compare buffer:\n");
		for (int i = 0; i < xfer_len; i++) {
			debug_spi_nor("0x%x ", test_buf[i]);
			if (i%20 == 0)
				debug_spi_nor("\n");
		}
		debug_spi_nor("\n");
#endif
		if (memcmp((const void *)rd_buffer,
			(const void *)wr_buffer, BUF_SIZE)) {

			debug_spi_nor("SPI: Compare data failed\n");
			ret = -1;
			break;
		}

		offset += xfer_len;
		user_buffer += xfer_len;
		size -= xfer_len;
	}

	/* Clear secure buffers as a sanity */
	memset(wr_buffer, 0, BUF_SIZE);
	memset(rd_buffer, 0, BUF_SIZE);

	return ret;
}

int spi_smc_update(uintptr_t user_buf, uintptr_t size,
				uint32_t bus, uint32_t cs)
{
	int err = 0, ns_map_size;

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
	if (octeontx_mmap_add_dynamic_region_with_sync(user_buf,
		user_buf, ns_map_size, MT_RW | MT_NS)) {
		debug_spi_nor("SPI: mmap failed (%d)\n", err);
		return -SPI_MMAP_ERR;
	}

	/* Validate image before update */
	if (__spi_smc_validate_img(user_buf, size, bus, cs)) {
		debug_spi_nor("SPI: Update image validation failed\n");
		err = -SPI_IMG_VALIDATE_ERR;
		goto err;
	}

	/* Update image */
	if (__spi_smc_update_img(user_buf, size, bus, cs)) {
		err = -SPI_IMG_UPDATE_ERR;
	}

err:
	/* unmap non-sercure memory buffer */
	octeontx_mmap_remove_dynamic_region_with_sync(user_buf,
		ns_map_size);
	return err;
}

