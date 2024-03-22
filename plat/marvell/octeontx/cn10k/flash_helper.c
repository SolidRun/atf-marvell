/*
 * Copyright (c) 2024 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#include <stdio.h>
#include <string.h>
#include <debug.h>
#include <platform_def.h>
#include <assert.h>
#include <spinlock.h>
#include <spi.h>
#include <flash_helper.h>
#include <libfdt.h>
#include <plat_board_cfg.h>
#include <ppr.h>

#if DEBUG_FLASH_HELPER == 1
#define debug_printf(...) printf(__VA_ARGS__)
#else
#define debug_printf(...)
#endif

#define ERASE_SIZE_4K           4096
#define ERASE_SIZE_64K          (64*1024)

static void flash_dump(uint32_t addr, void *buf, void *reference_buf, uint32_t length)
{
	if (!(mrvl_tf_log_modules & MRVL_TF_LOG_MODULE_PPR))
		return;

	uint32_t *_buf = (uint32_t *)buf;
	uint32_t _addr = addr;
	uint32_t _length = length;

	printf("\nSaved Data:");
	for (int i = 0; i < _length/4; i++, _addr += 4) {
		if (i == 0 || (i > 15 && i%16 == 0))
			printf("\n0x%08x: ", _addr);
		printf("%08x ", _buf[i]);
	}

	_buf = (uint32_t *)reference_buf;
	_addr = addr;
	printf("\nReference Data:");
	for (int i = 0; i < _length/4; i++, _addr += 4) {
		if (i == 0 || (i > 15 && i%16 == 0))
			printf("\n0x%08x: ", _addr);
		printf("%08x ", _buf[i]);
	}
	printf("\n");
}

int save_to_flash(void *blk, uint32_t size, struct flash_data *fdata)
{
	__aligned(8) static uint8_t wrbuf[ERASE_SIZE_64K] = {0};
	__aligned(8) static uint8_t buf[ERASE_SIZE_64K] = {0};

	int bytes_remain = size;
	int sector_addr = 0;
	int sector_offset = 0;
	int chunk = 0;
	void *wr = 0;
	static uint32_t bus, cs, mode, ERASE_SIZE, loc;
	int ret;

	bus = fdata->bus;
	cs = fdata->cs;
	mode = fdata->mode;
	ERASE_SIZE = fdata->erase_size;
	loc = fdata->location;

	debug_printf("%s blk %p size %d loc 0x%x bytes_remain %d\n", __func__, blk, size, loc, size);

	while (bytes_remain > 0) {

		blk += chunk;
		wr = blk;

		sector_addr   = loc & ~(ERASE_SIZE - 1);
		sector_offset = loc &  (ERASE_SIZE - 1);

		chunk = ERASE_SIZE - sector_offset;
		chunk = (chunk <= bytes_remain) ? chunk : bytes_remain;

		debug_printf("sector_addr=0x%x, sector_offset=0x%x, chunk=0x%x\n",
			  sector_addr, sector_offset, chunk);

		/* Read and writeback the page only when the sector offset is not aligned
		 *  by page size.
		 */
		if (sector_offset) {
			wr = wrbuf;
			memset(wr, 0, ERASE_SIZE);
			if (spi_nor_read(wr, ERASE_SIZE, sector_addr, mode, bus, cs) < 0) {
				debug_printf("Failed read flash offset: 0x%x\n", sector_addr);
				return size - bytes_remain;
			}
			debug_printf("copy chunk %d at 0x%x\n", chunk, (sector_addr + sector_offset));
			memcpy(wr + sector_offset, blk, chunk);
		}

		if (spi_nor_erase(sector_addr, mode, bus, cs)) {
			debug_printf("Failed erase flash offset: 0x%x\n", sector_addr);
			return size - bytes_remain;
		}

		if (spi_nor_write(wr, ERASE_SIZE, sector_addr, mode, bus, cs) < 0) {
			debug_printf("Failed write flash offset 0x%x\n", sector_addr);
			return size - bytes_remain;
		}

		bytes_remain -= chunk;
		loc += chunk;

		if (cavm_is_platform(PLATFORM_ASIM))
			continue;

		memset(buf, 0, ERASE_SIZE);
		debug_printf("buf %p sector_addr 0x%x\n", buf, sector_addr);
		if (spi_nor_read(buf, ERASE_SIZE, sector_addr, mode, bus, cs) < 0) {
			debug_printf("Failed read flash offset 0x%x\n", sector_addr);
			return size - bytes_remain;
		}
		ret = memcmp(buf, wr, ERASE_SIZE);
		if (ret) {
			debug_printf("Failed compare flash data failed 0x%x %d\n", sector_addr, ret);
			flash_dump(sector_addr, wr, buf, ERASE_SIZE);
			return size - bytes_remain;
		}
	}

	debug_printf("saved size %d\n", size);

	return size;
}
