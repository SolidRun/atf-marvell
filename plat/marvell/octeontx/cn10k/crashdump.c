/*
 * Copyright (c) 2022 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#include <stdio.h>
#include <string.h>
#include <debug.h>
#include <platform_def.h>
#include <crashdump.h>
#include <assert.h>
#include <spinlock.h>
#include <spi.h>
#include <libfdt.h>
#include <plat_board_cfg.h>

#ifndef DEBUG_CRASHDUMP
#define DEBUG_CRASHDUMP 0
#endif

#if DEBUG_CRASHDUMP == 1
#define debug_printf(...) printf(__VA_ARGS__)
#else
#define debug_printf(...)
#endif

#define ERASE_SIZE		4096
#define MAX_PAGE_SIZE		ERASE_SIZE
#define MAX_FLASH_SIZE        0x10000000

#define CRASHDUMP_SAVE_VERSION 0
#define CRASHDUMP_SRC_ATF      0
#define CRASHDUMP_SRC_M3_1     1
#define CRASHDUMP_SRC_M3_2     2

/*
 * Crashdump private data
 */
struct {
	uint8_t   to_mem   : 1;
	uint8_t   to_flash : 1;
	uint8_t   to_uart  : 1;
	uint8_t   reserved : 5;
	uint8_t   flash_clean;
	uint16_t  flash_blk_idx;

	uint32_t  flash_cd_next;
	uint32_t  flash_cd_offset;
	uint32_t  flash_cd_size;
	uint32_t  flash_pagesize;
} crashdump;

/* Global spinlock to make sure only one thread can update crashdump data */
spinlock_t crashdump_lock;

__aligned(8) static uint8_t buf[MAX_PAGE_SIZE];
__aligned(8) static uint8_t wrbuf[MAX_PAGE_SIZE];

static uint32_t bus;
static uint32_t cs;
static uint32_t mode;

void cn10k_print_crashdump_data(void *buf, int len);

static int erase_crashdump_region()
{
	uint32_t offset;
	int i = 0;

	/* Check if flash region for crash dump is erased */
	debug_printf("Checking if flash %x had been erased...\n", crashdump.flash_cd_offset);
	for (offset = crashdump.flash_cd_offset;
		offset < (crashdump.flash_cd_offset + crashdump.flash_cd_size);
		offset += crashdump.flash_pagesize) {

		if (spi_nor_read(buf, crashdump.flash_pagesize, offset, mode, bus, cs) < 0) {
			debug_printf("Read offset %x failed\n", offset);
			return -1;
		}

		for (i = 0; i < crashdump.flash_pagesize; i++) {
			if (buf[i] != 0xFF) {
				debug_printf("Offset %x not clean\n", offset + i);
				break;
			}
		}
	}

	if (i >= crashdump.flash_pagesize)
		return 0;

	/* Erase if it is not yet done so */
	debug_printf("Erasing offset %x, size %x\n",
		crashdump.flash_cd_offset, crashdump.flash_cd_size);
	memset(wrbuf, 0, MAX_PAGE_SIZE);

	offset = crashdump.flash_cd_offset;

	while (offset < (crashdump.flash_cd_offset + crashdump.flash_cd_size)) {
		if (spi_nor_erase(offset, mode, bus, cs)) {
			debug_printf("Unable to erase spi offset 0x%x\n", offset);
			return -1;
		}
		if (spi_nor_write(wrbuf, ERASE_SIZE, offset, mode, bus, cs) < 0) {
			debug_printf("Write flash failed offset: 0x%x\n", offset);
			return -1;
		}
		offset += MAX_PAGE_SIZE;
	}

	return 0;
}

void dump_console_crashdump(void *data, uint32_t size, int current)
{
	struct crashdump_block *blk = (struct crashdump_block *) data;

	debug_printf("Crashdump size %d\n", SIZEOF_CRASHDUMP_BLK(blk->data_size));

	debug_printf("signature 0x%x\n", blk->signature);
	debug_printf("version %d\n", blk->version);
	debug_printf("type %d\n", blk->data_type);
	debug_printf("size %d\n", blk->data_size);
	debug_printf("checksum %d\n", blk->checksum);

	cn10k_print_crashdump_data((void *)blk, current);
}

static void parse_crashdump_fdt_config(const void *fdt)
{
	int child;
	int offset;
	uint32_t cd_base = 0, cd_size = 0;

	/* Parse for secure-spi config */
	offset = fdt_node_offset_by_compatible(fdt, -1, "fixed-partitions");
	if (offset < 0) {
		debug_printf("Fixed partitions node not found in FDT\n");
		return;
	}

	while (offset > 0) {
		fdt_for_each_subnode(child, fdt, offset) {
			const char *name;
			const char *flabel;
			const uint32_t *preg;
			const fdt32_t *freg;
			uint32_t addr;

			name = fdt_get_name(fdt, child, NULL);
			flabel = fdt_getprop(fdt, child, "label", NULL);
			if (!name || !flabel)
				continue;
			else
				debug_printf("name %s flabel %s %ld\n", name, flabel, sizeof(flabel));

			if (strncmp(flabel, "fatal_error_atf", sizeof("fatal_error_atf")) == 0) {
				freg = fdt_getprop(fdt, child, "reg", NULL);
				cd_base = fdt32p_to_cpu(&freg[0]);
				cd_size = fdt32p_to_cpu(&freg[1]);
				debug_printf("Crashdump base 0x%x size 0x%x\n", cd_base, cd_size);
				/* Read parent node to get bus num */
				preg = fdt_getprop(fdt, fdt_parent_offset(fdt, offset),	"reg", NULL);
				if (preg) {
					addr = fdt32_to_cpu(*preg);
					if (addr == SPI_CTRL0_ADDR)
						bus = 0;
					else if (addr == SPI_CTRL1_ADDR)
						bus = 1;
					else {
						debug_printf("Invalid SPI bus address 0x%x\n", addr);
						continue;
					}
				} else {
					debug_printf("Missing reg field for SPI bus\n");
					continue;
				}
				break;
			}
		}
		if (cd_size != 0)
			break;

		offset = fdt_node_offset_by_compatible(fdt, offset, "fixed-partitions");
	}

	bus = 1;

	crashdump.flash_cd_offset = cd_base;
	crashdump.flash_cd_size = cd_size;
	crashdump.flash_cd_next = cd_base;
}

int crashdump_init(void *fdt)
{
	//const struct fdt_property *property = NULL;
	struct crashdump_block *blk;

	memset(&crashdump, 0, sizeof(crashdump));

	/* Currently fixed for BUS:0, CS:0 */
	bus = 0;
	cs = 0;
	mode = SPI_ADDRESSING_32BIT;

	crashdump.to_uart = 1;
	crashdump.to_mem = 0;

	/* Retrieve flash info from FDT */
	crashdump.to_flash = 0;

	parse_crashdump_fdt_config(fdt);

	if ((crashdump.flash_cd_offset == 0) || (crashdump.flash_cd_size == 0)) {
		debug_printf("Crashdump configuration not found in FDT\n");
		return -1;
	}

	crashdump.flash_pagesize = ERASE_SIZE;
	crashdump.flash_blk_idx = 0;
	crashdump.flash_clean = 0;

	/* Check if first page has crashdump data */
	if (spi_nor_read(buf, crashdump.flash_pagesize, crashdump.flash_cd_offset, mode, bus, cs) < 0) {
		debug_printf("Failed to access flash. Crash-dump to flash disabled.\n");
		goto flash_exit;
	}

	blk = (struct crashdump_block *) buf;
	if (blk->signature != CRASHDUMP_SIGNATURE) {
		/* Valid crashdump is not present flash. Erase the crashdump region */
		if (erase_crashdump_region())
			goto flash_exit;
		crashdump.flash_clean = 1;
	}

	/* Enable dumping to flash if no errors */
	crashdump.to_flash = 1;
flash_exit:

	return 0;
}

static inline int save_to_flash(void *blk, uint32_t size)
{
	int bytes_remain = size;
	int sector_addr = 0;
	int sector_offset = 0;
	int chunk = 0;
	uint32_t loc;
	void *wr = 0;

	if (!crashdump.to_flash)
		return 0;

	if ((crashdump.flash_cd_next + size) >= (crashdump.flash_cd_offset + crashdump.flash_cd_size))
		debug_printf("Crashdump data size exceeding the crashdump region\n");

	loc = crashdump.flash_cd_next;

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

#ifdef CHECK_SPI_WRITE
		memset(buf, 0, ERASE_SIZE);
		debug_printf("buf %p sector_addr 0x%x\n", buf, sector_addr);
		if (spi_nor_read(buf, ERASE_SIZE, sector_addr, mode, bus, cs) < 0) {
			debug_printf("Failed read flash offset 0x%x\n", sector_addr);
			return size - bytes_remain;
		}
		ret = memcmp(buf, wr, ERASE_SIZE);
		if (ret) {
			debug_printf("Failed compare flash data failed 0x%x %d\n", sector_addr, ret);
			return size - bytes_remain;
		}
#endif
	}

	debug_printf("Crashdump saved size %d\n", size);
	crashdump.flash_cd_next += size;

	return 0;
}

int32_t crashdump_add(uint8_t type, void *data, uint32_t size)
{
	struct crashdump_block *blk;
	uint8_t *ptr;
	uint8_t checksum;
	int index;

	debug_printf("%s data %p len %d\n", __func__, data, size);
	if (type == CRASHDUMP_TYPE_HALT) {
		debug_printf("Mark end of crashdump\n");
	}

	/* TODO check size */
	assert(size <= (MAX_BLOCK_SIZE - CRASH_HDR_SIZE));

	spin_lock(&crashdump_lock);
	/* Prepare crashdump header */
	blk = (struct crashdump_block *)buf;
	blk->signature = CRASHDUMP_SIGNATURE;
	blk->version   = CRASHDUMP_VERSION;
	blk->data_type = type;
	blk->data_size = size;
	blk->reserved  = 0;
	blk->sequence = 0;
	blk->checksum  = 0;
	memcpy(&blk->data, data, size);

	/* Calculate checksum */
	checksum = 0;
	ptr = (uint8_t *) blk;
	for (index = 0; index < SIZEOF_CRASHDUMP_BLK(size); index++) {
		checksum += ptr[index];
	}
	blk->checksum = -checksum;

	if (crashdump.to_uart)
		dump_console_crashdump(blk, SIZEOF_CRASHDUMP_BLK(size), 1);

	/* Dump to flash */
	save_to_flash(blk, SIZEOF_CRASHDUMP_BLK(size));

	spin_unlock(&crashdump_lock);
	return 0;
}

uint8_t dump_to_console(void)
{
	return crashdump.to_uart;
}

uint8_t set_dump_to_console(uint8_t enable)
{
	uint8_t ret = crashdump.to_uart;

	crashdump.to_uart = enable;
	return ret;
}

uint8_t set_dump_to_flash(uint8_t enable)
{
	uint8_t ret = crashdump.to_flash;
	crashdump.to_flash = enable;
	return ret;
}

