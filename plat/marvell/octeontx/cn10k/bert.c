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
#include <libfdt.h>
#include <plat_board_cfg.h>
#include <bert.h>

#ifndef DEBUG_BERT
#define DEBUG_BERT 0
#endif

#if DEBUG_BERT == 1
#define debug_printf(...) printf(__VA_ARGS__)
#else
#define debug_printf(...)
#endif

static uint32_t ERASE_SIZE;

#define ERASE_SIZE_4K		4096
#define ERASE_SIZE_64K		(64*1024)
#define MAX_FLASH_SIZE		0x10000000

/*
 * BERT private data
 */
struct {
	uint32_t bert_offset;
	uint32_t bert_size;
	uint32_t bert_pagesize;
	uint32_t bert_next;
} bert;

__aligned(8) static uint8_t buf[ERASE_SIZE_64K];
__aligned(8) static uint8_t buf_add[ERASE_SIZE_64K];
__aligned(8) static uint8_t wrbuf[ERASE_SIZE_64K];

static uint32_t bus;
static uint32_t cs;
static uint32_t mode;

static int erase_bert_region(void)
{
	uint32_t offset;
	int i = 0;

	/* Check if flash region for bert is erased */
	debug_printf("Checking if flash %x had been erased...\n", bert.bert_offset);
	for (offset = bert.bert_offset;
		offset < (bert.bert_offset + bert.bert_size);
		offset += bert.bert_pagesize) {

		if (spi_nor_read(buf, bert.bert_pagesize, offset, mode, bus, cs) < 0) {
			debug_printf("Read offset %x failed\n", offset);
			return -1;
		}

		for (i = 0; i < bert.bert_pagesize; i++) {
			if (buf[i] != 0xFF) {
				debug_printf("Offset %x not clean\n", offset + i);
				break;
			}
		}
	}

	if (i >= bert.bert_pagesize)
		return 0;

	/* Erase if it is not yet done so */
	debug_printf("Erasing offset %x, size %x\n",
		bert.bert_offset, bert.bert_size);
	memset(wrbuf, 0, ERASE_SIZE);

	offset = bert.bert_offset;

	while (offset < (bert.bert_offset + bert.bert_size)) {
		if (spi_nor_erase(offset, mode, bus, cs)) {
			debug_printf("Unable to erase spi offset 0x%x\n", offset);
			return -1;
		}
		if (spi_nor_write(wrbuf, ERASE_SIZE, offset, mode, bus, cs) < 0) {
			debug_printf("Write flash failed offset: 0x%x\n", offset);
			return -1;
		}
		offset += ERASE_SIZE;
	}

	return 0;
}

static void parse_bert_fdt_config(const void *fdt)
{
	int child;
	int offset;
	uint32_t bert_base = 0, bert_size = 0;
	uint32_t reg_base = 0, reg_size = 0;

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
				debug_printf("BERT: name %s flabel %s %ld\n", name, flabel, sizeof(flabel));

			if (strncmp(flabel, "fatal_error_atf", sizeof("fatal_error_atf")) == 0) {
				freg = fdt_getprop(fdt, child, "reg", NULL);
				if (freg == NULL) {
					debug_printf("reg property missing!\n");
					return;
				}
				reg_base = fdt32p_to_cpu(&freg[0]);
				reg_size = fdt32p_to_cpu(&freg[1]);
				freg = fdt_getprop(fdt, child, "bert-offset", NULL);
				if (freg == NULL) {
					debug_printf("BERT offset not present!\n");
					return;
				}
				bert_base = fdt32p_to_cpu(&freg[0]);
				bert_size = reg_size - bert_base;
				bert_base += reg_base;
				debug_printf("BERT base 0x%x size 0x%x\n", bert_base, bert_size);
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
		if (bert_size != 0)
			break;

		offset = fdt_node_offset_by_compatible(fdt, offset, "fixed-partitions");
	}

	bus = 1;

	bert.bert_offset = bert_base;
	bert.bert_size = bert_size;
	bert.bert_next = bert_base;
}

void plat_remove_bert_fdt_nodes(void)
{
	const char *ghes_bert_name = "/reserved-memory/ghes-bert";
	const char *bed_bert_name = "/soc@0/bed-bert";
	int ghes_bert_off, bed_bert_off;
	void *fdt = fdt_ptr;

	ghes_bert_off = fdt_path_offset(fdt, ghes_bert_name);
	if (ghes_bert_off == -1)
		VERBOSE("Missing GHES BERT area from DT\n");
	else
		fdt_del_node((void *) fdt, ghes_bert_off);

	bed_bert_off = fdt_path_offset(fdt, bed_bert_name);
	if (bed_bert_off == -1)
		VERBOSE("Missing BERT area from DT\n");
	else
		fdt_del_node((void *) fdt, bed_bert_off);
}

int bert_init(void *fdt)
{
	//const struct fdt_property *property = NULL;
	struct bert_block *blk;

	memset(&bert, 0, sizeof(bert));

	/* Currently fixed for BUS:0, CS:0 */
	bus = 0;
	cs = 0;
	mode = SPI_ADDRESSING_32BIT;

	ERASE_SIZE = ERASE_SIZE_4K;
	if (plat_octeontx_bcfg->spi_cfg[bus].erase_64k[cs] == 1)
		ERASE_SIZE = ERASE_SIZE_64K;

	parse_bert_fdt_config(fdt);

	if ((bert.bert_offset == 0) || (bert.bert_size == 0)) {
		debug_printf("BERT configuration not found in FDT\n");
		plat_remove_bert_fdt_nodes();
		return -1;
	}

	bert.bert_pagesize = ERASE_SIZE;

	/* Check if first page has bert data */
	if (spi_nor_read(buf, bert.bert_pagesize, bert.bert_offset, mode, bus, cs) < 0) {
		debug_printf("Failed to access flash. bert to flash disabled.\n");
		goto flash_exit;
	}

	blk = (struct bert_block *) buf;
	if (blk->signature != BERT_SIGNATURE) {
		/* Valid bert is not present in flash. Erase the bert node */
		plat_remove_bert_fdt_nodes();
		goto flash_exit;
	} else {
		struct otx2_ghes_err_mem_rec *r = NULL;
		struct fdt_ghes *fdt_ghes = NULL;

		fdt_ghes = otx2_find_ghes(&plat_octeontx_bcfg->ras_config, "bert");
		if (!fdt_ghes)
			return -1;

		r = fdt_ghes->base[GHES_PTR_STATUS];
		memcpy(r, &blk->rec, sizeof(struct otx2_ghes_err_mem_rec));
		if (erase_bert_region())
			goto flash_exit;
	}

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

	if ((bert.bert_next + size) >= (bert.bert_offset + bert.bert_size))
		debug_printf("bert data size exceeding the bert region\n");

	loc = bert.bert_next;

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

	debug_printf("BERT saved size %d\n", size);

	return 0;
}

int32_t bert_add(struct otx2_ghes_err_mem_rec *data)
{
	struct bert_block *blk;
	uint32_t size;

	size = sizeof(struct otx2_ghes_err_mem_rec);

	blk = (struct bert_block *)buf_add;
	blk->signature = BERT_SIGNATURE;
	memcpy(&blk->rec, data, size);

	/* Dump to flash */
	save_to_flash(blk, sizeof(struct bert_block));

	return 0;
}
