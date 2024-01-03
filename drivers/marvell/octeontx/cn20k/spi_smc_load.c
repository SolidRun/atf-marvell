/*
 * Copyright (c) 2023 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <inttypes.h>
#include <spi.h>
#include <octeontx_common.h>
#include <assert.h>
#include <errno.h>
#include <debug.h>
#include <libfdt.h>
#include <plat_board_cfg.h>
#include <octeontx_mmap_utils.h>
#include "libtim.h"
#include <ehsm.h>
#include <ehsm-drv.h>
#include <spi_ops.h>
#include <plat_mem_alloc.h>
#include <octeontx_semaphore.h>

#undef DEBUG_SPI_NOR

#ifdef DEBUG_SPI_NOR
#define debug_spi_nor	printf
#else
#define debug_spi_nor(...) ((void) (0))
#endif

#define CHECK_AND_CONFIG_SPI(bus, cs)	\
{ \
	if (!plat_octeontx_bcfg->spi_cfg[bus].configured[cs]) { \
		if (spi_config(CONFIG_SPI_FREQUENCY, 0, 0, 0, bus, cs)) { \
			WARN("SPI: Config flash failed\n"); \
			return -1; \
		} \
		plat_octeontx_bcfg->spi_cfg[bus].configured[cs] = 1; \
	} \
}

#define TIM_BLOCK_MAX_SIZE	0x1000
#define MAX_EFI_VAR_SIZE	0x4000
#define MAX_EFI_STORAGE		0x10000

extern octeontx_ctr_sem_t octeontx_smc_spi_lock;

/**
 * struct efi_var_file - file for storing UEFI variables
 *
 * @reserved:	unused, may be overwritten by memory probing
 * @magic:	identifies file format, takes value %EFI_VAR_FILE_MAGIC
 * @length:	length including header
 * @crc32:	CRC32 without header
 * @var:	variables
 */
struct efi_var_file_hdr {
	uint64_t reserved;
	uint64_t magic;
	uint32_t length;
	uint32_t crc32;
};
#define EFI_VAR_FILE_MAGIC 0x0161566966456255 /* UbEfiVa, version 1 */

/* Buffer to read TIMs */
static inline int get_spi_mode(uint64_t offset)
{
	return (offset >= (1 << 24)) ?
				SPI_ADDRESSING_32BIT : SPI_ADDRESSING_24BIT;
}

int spi_dev_read_aligned(uintptr_t user_buffer, size_t size,
			  size_t loc, int bus, int cs)
{
	uint64_t offset = loc;
	int mode = get_spi_mode(loc);
	int ret = 0;

	if (spi_dev_lock(bus)) {
		ERROR("%s: SPI_%d: Lock failed\n", __func__, bus);
		return -1;
	}

	CHECK_AND_CONFIG_SPI(bus, cs)

	if (spi_nor_read((uint8_t *) user_buffer, size, offset,
			 mode, bus, cs) < 0) {
		debug_spi_nor("SPI: Read flash failed\n");
		ret = -1;
	}

	if (spi_dev_unlock(bus)) {
		WARN("%s: SPI_%d: Unlock failed\n", __func__, bus);
		return -1;
	}
	return ret;
}

extern int parse_fw_address_size(const char *name, uint32_t *addr,
				 uint32_t *size);

#define BUF_SIZE	4096
__aligned(8) static uint8_t wr_buffer[BUF_SIZE] = {0xFF};

#define BUF_SIZE_64K	65536
__aligned(8) static uint8_t rd_buffer[BUF_SIZE_64K] = {0xFF};

int spi_dev_erase(uint64_t offset, uint64_t len, int bus, int cs)
{
	uint64_t sector_offset, sector_addr, sector_size, window_size;
	int64_t last_sector;
	int mode = SPI_ADDRESSING_24BIT;

	debug_spi_nor("%s buf %lx len %" PRIx64 " loc %x bus %d cs %d\n",
		      __func__, buf, len, offset, bus, cs);

	CHECK_AND_CONFIG_SPI(bus, cs)

	if (plat_octeontx_bcfg->spi_cfg[bus].erase_64k[cs])
		sector_size = BUF_SIZE_64K;
	else
		sector_size = BUF_SIZE;

	sector_addr = offset & ~(sector_size - 1);
	sector_offset = offset &  (sector_size - 1);
	last_sector = ((offset + len - 1) & ~(sector_size - 1));

	/* First sector: keep possible heading and trailing bytes */
	if ((sector_offset > 0) || (len < sector_size)) {
		if (spi_nor_read(rd_buffer, sector_size, sector_addr,
				 mode, bus, cs) < 0) {
			WARN("SPI: Read flash failed for offset: 0x%" PRIx64
				 ", len: 0x%" PRIx64 ", file: EFI_VAR\n",
			     sector_addr, sector_size );
			return -1;
		}

		if (sector_offset + len < sector_size)
			window_size = len;
		else
			window_size = sector_size - sector_offset;

		memset(rd_buffer + sector_offset, 0xFF, window_size);

		if (spi_nor_erase(sector_addr, mode, bus, cs)) {
			WARN("SPI: Erase flash failed for offset: 0x%" PRIx64
				 ", sector size: 0x%" PRIx64 ", file: EFI_VAR\n",
			     sector_addr, sector_size );
			return -1;
		}

		if (spi_nor_write(rd_buffer, sector_size, sector_addr,
				  mode, bus, cs) < 0) {
			WARN("SPI: Write flash failed for offset: 0x%" PRIx64
				 ", len: 0x%" PRIx64 ", file: EFI_VAR\n",
			     sector_addr, sector_size );
			return -1;
		}

		sector_addr += sector_size;
	}

	window_size = (offset + len) & (sector_size - 1);

	/* Erase middle sector(s) */
	while ((sector_addr < last_sector) ||
		   ((sector_addr == last_sector) && (window_size == 0))) {
		if (spi_nor_erase(sector_addr, mode, bus, cs)) {
			WARN("SPI: Erase flash failed for offset: 0x%" PRIx64
				 ", sector size: 0x%" PRIx64 ", file: EFI_VAR\n",
			     sector_addr, sector_size );
			return -1;
		}
		sector_addr += sector_size;
	}

	/* Last sector: keep possible trailing bytes */
	if ((sector_addr == last_sector) && (window_size > 0)) {
		if (spi_nor_read(rd_buffer, sector_size, sector_addr,
				 mode, bus, cs) < 0) {
			WARN("SPI: Read flash failed for offset: 0x%" PRIx64
				 ", len: 0x%" PRIx64 ", file: EFI_VAR\n",
			     sector_addr, sector_size );
			return -1;
		}

		memset(rd_buffer, 0xFF, window_size);

		if (spi_nor_erase(sector_addr, mode, bus, cs)) {
			WARN("SPI: Erase flash failed for offset: 0x%" PRIx64
				 ", sector size: 0x%" PRIx64 ", file: EFI_VAR\n",
			     sector_addr, sector_size );
			return -1;
		}

		if (spi_nor_write(rd_buffer, sector_size, sector_addr,
				  mode, bus, cs) < 0) {
			WARN("SPI: Write flash failed for offset: 0x%" PRIx64
				 ", len: 0x%" PRIx64 ", file: EFI_VAR\n",
			     sector_addr, sector_size );
			return -1;
		}
	}

	return 0;
}

static int spi_dev_write(uintptr_t efi_buf, uint64_t efi_size,
			   int loc, int bus, int cs)
{
	size_t size = efi_size;
	int mode = SPI_ADDRESSING_24BIT;
	const uint8_t *user_buffer = (uint8_t *)efi_buf;
	uint64_t sector_addr, sector_offset, window_size;

	CHECK_AND_CONFIG_SPI(bus, cs)

	sector_addr = loc & ~(BUF_SIZE - 1);
	sector_offset = loc & (BUF_SIZE - 1);

	while (size > 0) {
		if (spi_nor_read(wr_buffer, BUF_SIZE, sector_addr,
				 mode, bus, cs) < 0) {
			WARN("SPI: Erase flash failed for offset: 0x%" PRIx64 ", file: EFI_VAR\n",
			     sector_addr);
			return -1;
		}

		if (sector_offset + size < BUF_SIZE)
			window_size = size;
		else
			window_size = BUF_SIZE - sector_offset;

		memcpy(wr_buffer + sector_offset, user_buffer, window_size);

		if (spi_nor_write(wr_buffer, BUF_SIZE, sector_addr,
				  mode, bus, cs) < 0) {
			WARN("SPI: Write flash failed for offset: 0x%" PRIx64 ", file: EFI_VAR\n",
			     sector_addr);
			return -1;
		}

		if (spi_nor_read(rd_buffer, BUF_SIZE, sector_addr,
				 mode, bus, cs) < 0) {
			WARN("SPI: Read flash failed for offset: 0x%" PRIx64 ", file: EFI_VAR\n",
			     sector_addr);
			return -1;
		}

		if (memcmp(rd_buffer, wr_buffer, BUF_SIZE)) {
			WARN("SPI: Compare data failed for file: EFI_VAR\n");
			return -1;
		}

		sector_addr += BUF_SIZE;
		user_buffer += window_size;
		size -= window_size;
		sector_offset = 0;
	}

	return 0;
}

static long spi_dev_read(uintptr_t efi_buf, uint64_t *efi_size,
		int loc, int bus, int cs)
{
	size_t size = *efi_size;
	uint64_t offset = loc, xfer_len;
	int mode = SPI_ADDRESSING_24BIT, ret = 0;
	void *user_buffer = (void *)efi_buf;

	/* Check if device is present */
	if (!plat_octeontx_bcfg->spi_cfg[bus].cs[cs]) {
		*efi_size = 0;
		return -1;
	}

	memset(rd_buffer, 0, BUF_SIZE);

	CHECK_AND_CONFIG_SPI(bus, cs)

	while (size > 0) {
		xfer_len = size < BUF_SIZE ? size : BUF_SIZE;
		if (spi_nor_read(rd_buffer, xfer_len, offset,
		   mode, bus, cs) < 0) {
			WARN("SPI: Read flash failed for offset: 0x%" PRIx64 ", file: EFI_VAR\n",
				offset);
			ret = -1;
			break;
		}
		memcpy((void *)user_buffer, (const void *)rd_buffer, xfer_len);
		offset += xfer_len;
		user_buffer += xfer_len;
		size -= xfer_len;
	}

	return ret;
}

int spi_write_efi_var(uintptr_t efi_buf, uint64_t efi_size)
{
	uint32_t i, j, spi_bus, spi_cs, found, ret = 0;
	uint64_t flash_off, sector_off;

	if (efi_size < offsetof(struct efi_var_file_hdr, crc32)) {
		WARN("%s: EFI variable smaller than pure header\n", __func__);
		return -1;
	}

	found = 0;
	for (i = 0; i < MAX_SPI_BUS; i++) {
		for (j = 0; j < MAX_SPI_CS; j++) {
			if (plat_octeontx_bcfg->spi_cfg[i].has_efivar &&
			    plat_octeontx_bcfg->spi_cfg[i].cs[j]) {
				found = 1;
				spi_bus = i;
				spi_cs = j;
				break;
			}
		}
	}

	if (!found) {
		WARN("%s: EFI variable flash unknown, check device tree\n",
		     __func__);
		return -1;
	}

	if (efi_size > MAX_EFI_VAR_SIZE) {
		WARN("%s: EFI variable write too big\n", __func__);
		return -1;
	}

	/* Confirm offset for EFI variables available */
	flash_off = plat_octeontx_bcfg->spi_cfg[spi_bus].efivar_offset;
	if (!flash_off) {
		WARN("%s: Offset in flash unknown, check device tree\n",
		     __func__);
		return -1;
	}

	if (spi_dev_lock(spi_bus)) {
		ERROR("%s: SPI_%d: Lock failed\n", __func__, spi_bus);
		return -1;
	}

	/* find end of container chain */
	sector_off = 0;

	while (sector_off < MAX_EFI_STORAGE) {
		struct efi_var_file_hdr container_hdr;
		uint64_t hdr_size = sizeof(container_hdr);

		if (spi_dev_read((uintptr_t)&container_hdr, &hdr_size,
									flash_off + sector_off, spi_bus, spi_cs) ||
			(hdr_size != sizeof(container_hdr)) ||
			(container_hdr.magic != EFI_VAR_FILE_MAGIC))
			break;

		sector_off += container_hdr.length;
	}

	/* save behind last container, erase if needed */
	if (sector_off + efi_size > MAX_EFI_STORAGE) {
		ret = spi_dev_erase(flash_off, MAX_EFI_STORAGE, spi_bus, spi_cs);
		sector_off = 0;
	}

	if (ret == 0) {
		ret = spi_dev_write(efi_buf, efi_size, flash_off + sector_off,
								  spi_bus, spi_cs);
		/* in case some garbage lead to fail erase all and restart from 0 */
		if ((ret != 0) && (sector_off != 0)) {
			ret = spi_dev_erase(flash_off, MAX_EFI_STORAGE,
									  spi_bus, spi_cs);
			if (ret == 0)
				ret = spi_dev_write(efi_buf, efi_size,
										  flash_off, spi_bus, spi_cs);
		}
	}

	if (spi_dev_unlock(spi_bus)) {
		WARN("%s: SPI_%d: Unlock failed\n", __func__, spi_bus);
		return -1;
	}

	return ret;
}

int spi_read_efi_var(uintptr_t efi_buf, uint64_t *efi_size)
{
	uint32_t i, j, bus, cs, found;
	int ret = 0;
	uint64_t flash_off, sector_off, found_off;

	if (*efi_size < offsetof(struct efi_var_file_hdr, crc32)) {
		WARN("%s: Receive buffer too small (0x%" PRIx64 "), even header won't fit\n",
		     __func__, *efi_size);
		return -1;
	}

	found = 0;
	for (i = 0; i < MAX_SPI_BUS; i++) {
		for (j = 0; j < MAX_SPI_CS; j++) {
			if (plat_octeontx_bcfg->spi_cfg[i].has_efivar &&
			    plat_octeontx_bcfg->spi_cfg[i].cs[j]) {
				found = 1;
				bus = i;
				cs = j;
				break;
			}
		}
	}

	if (!found) {
		WARN("%s: EFI variable flash unknown, check device tree\n",
		     __func__);
		return -1;
	}

	flash_off = plat_octeontx_bcfg->spi_cfg[bus].efivar_offset;
	if (!flash_off) {
		WARN("%s: Offset in flash unknown, check device tree\n",
		     __func__);
		return -1;
	}

	if (spi_dev_lock(bus)) {
		ERROR("%s: SPI_%d: Lock failed\n", __func__, bus);
		return -1;
	}

	/* find end of container chain */
	sector_off = 0;
	found_off = 0;

	while (sector_off < MAX_EFI_STORAGE) {
		struct efi_var_file_hdr container_hdr;
		uint64_t hdr_size = sizeof(container_hdr);

		if (spi_dev_read((uintptr_t)&container_hdr, &hdr_size,
									flash_off + sector_off, bus, cs) ||
			(hdr_size != sizeof(container_hdr)) ||
			(container_hdr.magic != EFI_VAR_FILE_MAGIC))
			break;

		found_off = sector_off;
		sector_off += container_hdr.length;
	}

	/* read content of last container */
	if (! spi_dev_read(efi_buf, (uint64_t *)efi_size,
							flash_off + found_off, bus, cs)) {
		if (((struct efi_var_file_hdr*)efi_buf)->length > *efi_size)
			ret = -EFBIG;
		else
			ret = 0;

		*efi_size = ((struct efi_var_file_hdr*)efi_buf)->length;
	}

	if (found == 0) {
		WARN("%s: No valid container found\n", __func__);
		ret = -1;
	}

	if (spi_dev_unlock(bus)) {
		WARN("%s: SPI_%d: Unlock failed\n", __func__, bus);
		return -1;
	}

	return ret;
}

/* Gather info about all secure busses and chip selects */
unsigned long sec_spi_get_info(void)
{
	unsigned long spi_info;
	uint8_t *buscs, total_bus, total_cs, i, j;

	spi_info = 0;
	total_bus = 0;
	total_cs = 0;
	buscs = (uint8_t *)&spi_info;

	for (i = 0; i < MAX_SPI_BUS; i++) {
		if (!plat_octeontx_bcfg->spi_cfg[i].is_secure)
			continue;
		total_bus++;
		for (j = 0; j < MAX_SPI_CS; j++) {
			if (!plat_octeontx_bcfg->spi_cfg[i].cs[j])
				continue;
			total_cs++;
			buscs[j + 1] = (i & 0xF) | (j << 4);
		}
	}
	buscs[0] = (total_bus & 0xF) | (total_cs << 4);

	return spi_info;
}

/* Execute secure spi operation */
unsigned long sec_spi_operation(int offset, uintptr_t efi_buf, uint64_t *efi_size, int op)
{
	int bus, cs, operation;
	uintptr_t aligned_base;
	size_t aligned_size;
	unsigned long r = 0;
	int err;

	bus = op & 0xF;
	cs = (op >> 4) & 0xF;
	operation = (op >> 8) & 0xF;

	switch (operation) {
	case 1:
		aligned_base = efi_buf & ~0xFFF;
		aligned_size = (*efi_size + (PAGE_SIZE_4KB * 2) - 1) & ~0xFFF;
		/* Map Non-secure memory buffer */
		err = octeontx_mmap_add_dynamic_region_with_sync(aligned_base,
								 aligned_base,
								 aligned_size,
								 MT_RW | MT_NS);
		if (err) {
			debug_spi_nor("SPI-S: mmap failed (%d)\n", err);
			return -SPI_MMAP_ERR;
		}

		if (spi_dev_lock(bus)) {
			ERROR("%s: SPI_%d: Lock failed\n", __func__, bus);
			r = -1;
			goto err;
		}

		r =  spi_dev_read(efi_buf, efi_size, offset, bus, cs);

		if (spi_dev_unlock(bus)) {
			WARN("%s: SPI_%d: Unlock failed\n", __func__, bus);
			r = -1;
		}

err:
		/* unmap non-secure memory buffer */
		octeontx_mmap_remove_dynamic_region_with_sync(aligned_base, aligned_size);
		break;
	case 4:
		r = sec_spi_get_info();
		break;
	default:
		r = -1;
		break;
	}

	return r;
}
