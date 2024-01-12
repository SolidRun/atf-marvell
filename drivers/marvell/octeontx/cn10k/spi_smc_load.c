/*
 * Copyright (c) 2020 Marvell.
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
#include <platform_dt.h>

#undef DEBUG_SPI_NOR

#ifdef DEBUG_SPI_NOR
#define debug_spi_nor	printf
#else
#define debug_spi_nor(...) ((void) (0))
#endif

/*
 * Start Offset	End Offset	Data Structure
 * 0		1FFF		Network Settings
 * 2000		2FFF		MAC Addresses
 * 3000		3FFF		Mem Preserve
 * 4000		23FFF		PPR
 * 24000	3DFFF		Unused
 * 3E000	3EFFF		Memory POST
 * 3F000	3FFFF		Reset Counters
 */

#define PERSIST_NETWORK_SETTINGS_OFFSET		0x0000
#define PERSIST_NETWORK_SETTINGS_LEN		0x2000

#define PERSIST_MAC_ADDRESS_OFFSET		0x2000
#define PERSIST_MAC_ADDRESS_LEN			0x1000

#define PERSIST_RPRAM_DATA_OFFSET		0x3000
#define PERSIST_RPRAM_DATA_LEN			0x1000

#define PERSIST_PPR_OFFSET			0x4000
#define PERSIST_PPR_LEN				0x20000

#ifdef PLAT_cnf10kb
#define PERSIST_RETIMER_CONFIG_OFFSET		0x24000
#define PERSIST_RETIMER_CONFIG_LEN		0x1000
#endif

#define PERSIST_PORTM_MODE_BOOT_CFG_OFFSET	0x25000
#define PERSIST_PORTM_MODE_BOOT_CFG_LEN		0x1000

#define PERSIST_MEMTEST_DATA_OFFSET		0x3E000
#define PERSIST_MEMTEST_DATA_LEN		0x1000

#define PERSIST_RESET_CNTRS_OFFSET		0x3F000
#define PERSIST_RESET_CNTRS_LEN			0x1000

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

extern octeontx_ctr_sem_t octeontx_smc_spi_lock[MAX_SPI_BUS];
static struct tim_handle tim_handle;
static struct tim_header_info tim_header_info;
static struct tim_load_info tim_load_info;

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

void *cn10k_persistent_data_base(void)
{
	if (!plat_octeontx_bcfg->persist_cfg.valid)
		return NULL;
	else
		return &plat_octeontx_bcfg->persist_cfg;
}

int cn10k_spi_dev_read_aligned(uintptr_t user_buffer, size_t size,
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

static int load_and_verify_image(uint32_t addr, int bus, int cs,
				 uintptr_t img_addr,
				 const struct tim_load_info *tim_info,
				 const char *name)
{
	int err;

	if (spi_dev_lock(bus)) {
		WARN("%s: SPI_%d: Lock failed\n", __func__, bus);
		return -1;
	}

	if (spi_nor_read((uint8_t *)img_addr, tim_info->image_length, addr,
			 get_spi_mode(addr), bus, cs)) {

		spi_dev_unlock(bus);

		return -EIO;
	}

	if (spi_dev_unlock(bus)) {
		WARN("%s: SPI_%d: Unlock failed\n", __func__, bus);
		return -1;
	}

	err = ehsm_verify_image((const void *)img_addr, tim_info, NULL, NULL);
	if (err) {
		ERROR("Hash for %s mismatch\n", name);
		return -EIO;
	}
	return 0;
}

extern int parse_fw_address_size(const char *name, uint32_t *addr,
				 uint32_t *size);

static int parse_fw_image(const char *name, uintptr_t img_addr, uint32_t *size)
{
	uint8_t *tim_block_buf = octeontx_memalign(EHSM_ALIGNMENT,
						   TIM_BLOCK_MAX_SIZE);
	union tim_headers *hdr = (union tim_headers *)tim_block_buf;
	struct tim_header_info *hinfo = &tim_header_info;
	struct tim_handle *handle = &tim_handle;
	struct tim_load_info *tim_info = &tim_load_info;
	int err = 0;
	uint32_t addr;
	uint32_t map_size;
	int bus = 0, cs = 0;
	const char *file = name;

	if (tim_block_buf == NULL) {
		debug_spi_nor("Out of heap memory!\n");
		return -ENOMEM;
	}

	memset(hdr, 0, TIM_BLOCK_MAX_SIZE);

	debug_spi_nor("SPI: bus:0x%x cs:0x%x\n", bus, cs);
	/* Init Secure SPI */
	/* FIXME */
	/* Need to parse FDT to config SPI */
	if (spi_dev_lock(bus)) {
		ERROR("%s: SPI_%d: Lock failed\n", __func__, bus);
		return -1;
	}

	if (spi_config(CONFIG_SPI_FREQUENCY, 0, 0, 0, bus, cs)) {
		debug_spi_nor("SPI: Config flash failed\n");
		err = -SPI_CONFIG_ERR;
		goto err1;
	}

	err = parse_fw_address_size(file, &addr, &map_size);
	if (err) {
		debug_spi_nor("File %s not found in device tree\n", file);
		if (spi_dev_unlock(bus))
			WARN("%s: SPI_%d: Unlock failed\n", __func__, bus);

		return err;
	}
	debug_spi_nor("%s %s %x %x\n", __func__, file, addr, map_size);
	/* Map Non-secure memory buffer */
	if (octeontx_mmap_add_dynamic_region_with_sync(img_addr, img_addr,
						       map_size,
						       MT_RW | MT_NS)) {
		debug_spi_nor("Switch: mmap failed (%d)\n", err);
		err = -SPI_MMAP_ERR;
		goto err;
	}

	/* Read the TIM header */
	if (cn10k_spi_dev_read_aligned((uintptr_t)hdr, TIM_TIMH_SIZE, addr,
				       bus, cs)) {
		err = -EIO;
		goto err;
	}

	/* Get TIM header info to read rest of the TIM */
	err = tim_get_timh_info(hdr, hinfo);
	if (err != TIM_NO_ERROR) {
		ERROR("Could not parse TIM header\n");
		err = -ENOENT;
		goto err;
	}
	debug_spi_nor("%s %s %lx %x\n", __func__, file, TIM_TIMH_SIZE,
		      hinfo.signed_tim_size);
	/* Read the rest of the TIM */
	if (spi_nor_read(&tim_block_buf[TIM_TIMH_SIZE],
			   hinfo->signed_tim_size - TIM_TIMH_SIZE,
			   addr + TIM_TIMH_SIZE,
			   get_spi_mode(addr + TIM_TIMH_SIZE), bus, cs)) {
		err = -EIO;
		goto err;
	}

	/* Validate TIM */
	err = tim_load(hdr, 0, handle);
	if (err != TIM_NO_ERROR) {
		ERROR("Error %d parsing TIM\n", err);
		err = -ENOENT;
		goto err;
	}

	err = tim_get_load_info(handle, tim_info);
	if (err != TIM_NO_ERROR) {
		ERROR("Error %d getting TIM file information\n", err);
		err = -ENOENT;
		goto err;
	}
	if (!tim_info->lodi_parsed && !tim_info->litc_parsed) {
		ERROR("Could not find LODI or LITC block in TIM\n");
		err = -ENOENT;
		goto err;
	}
	if (!tim_info->hshi_parsed) {
		ERROR("Could not find HSHI block in TIM\n");
		err = -ENOENT;
		goto err;
	}

	debug_spi_nor("%s %s %" PRIx64 " %x\n", __func__, file, tim_info.src_address,
		      tim_info.image_length);

	debug_spi_nor("Verifying digital signature\n");
	err = ehsm_verify_tim_digital_signature(handle, hinfo, tim_block_buf);
	if (err) {
		ERROR("Digital signature failed for %s: %d\n", name, err);
		err = -EAUTH;
		goto err;
	}

	addr += tim_info->src_address;
	err = load_and_verify_image(addr, bus, cs, img_addr, tim_info, name);

	*size = tim_info->image_length;

err:
	/* unmap non-secure memory buffer */
	octeontx_mmap_remove_dynamic_region_with_sync(img_addr, map_size);

err1:
	if (spi_dev_unlock(bus))
		WARN("%s: SPI_%d: Unlock failed\n", __func__, bus);

	octeontx_free(tim_block_buf);
	memset(handle, 0, sizeof(*handle));
	memset(hinfo, 0, sizeof(*hinfo));
	memset(tim_info, 0, sizeof(*tim_info));

	return err;
}

int spi_smc_load_switch_fw(uintptr_t super_img_buf, uintptr_t cm3_img_buf,
			   uint64_t *cm3_size)
{
	int err = 0;
	const char *name;
	uint32_t img_size;

	/* Load super image */
	name = "switch_fw_super.fw";
	err = parse_fw_image(name, super_img_buf, &img_size);
	if (err) {
		debug_spi_nor("Failed to load Switch Super Image %s\n", name);
		return err;
	}

	/* Load cm3 image */
	name = "switch_fw_ap.fw";
	err = parse_fw_image(name, cm3_img_buf, &img_size);
	if (err)
		debug_spi_nor("Failed to load Switch CM3 Image %s\n", name);

	return err;
}

int spi_load_oem_data(int spi_id, int cs, uintptr_t img_buf,
			  uint64_t *img_size, bool nsec)
{
	if (plat_octeontx_bcfg->spi_cfg[spi_id].cs[cs] == -1) {
		WARN("%s: Invalid SPI%d.CS%d is used for reading OEM data\n",
			__func__, spi_id, cs);
		return -1;
	}

	if (spi_dev_lock(spi_id)) {
		ERROR("%s: SPI_%d: Lock failed\n", __func__, spi_id);
		return -1;
	}

	if (cn10k_spi_dev_read_aligned(img_buf, OEM_DATA_SIZE, OEM_DATA_OFFSET, spi_id, cs))
		return -EIO;

	*img_size = OEM_DATA_SIZE;

	return 0;
}

#define BUF_SIZE	4096
__aligned(8) static uint8_t wr_buffer[BUF_SIZE] = {0xFF};

#define BUF_SIZE_64K	65536
__aligned(8) static uint8_t rd_buffer[BUF_SIZE_64K] = {0xFF};

int cn10k_spi_dev_erase(uint64_t offset, uint64_t len, int bus, int cs)
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

static int cn10k_spi_dev_write(uintptr_t efi_buf, uint64_t efi_size,
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

static long cn10k_spi_dev_read(uintptr_t efi_buf, uint64_t *efi_size,
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

		if (cn10k_spi_dev_read((uintptr_t)&container_hdr, &hdr_size,
									flash_off + sector_off, spi_bus, spi_cs) ||
			(hdr_size != sizeof(container_hdr)) ||
			(container_hdr.magic != EFI_VAR_FILE_MAGIC))
			break;

		sector_off += container_hdr.length;
	}

	/* save behind last container, erase if needed */
	if (sector_off + efi_size > MAX_EFI_STORAGE) {
		ret = cn10k_spi_dev_erase(flash_off, MAX_EFI_STORAGE, spi_bus, spi_cs);
		sector_off = 0;
	}

	if (ret == 0) {
		ret = cn10k_spi_dev_write(efi_buf, efi_size, flash_off + sector_off,
								  spi_bus, spi_cs);
		/* in case some garbage lead to fail erase all and restart from 0 */
		if ((ret != 0) && (sector_off != 0)) {
			ret = cn10k_spi_dev_erase(flash_off, MAX_EFI_STORAGE,
									  spi_bus, spi_cs);
			if (ret == 0)
				ret = cn10k_spi_dev_write(efi_buf, efi_size,
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

		if (cn10k_spi_dev_read((uintptr_t)&container_hdr, &hdr_size,
									flash_off + sector_off, bus, cs) ||
			(hdr_size != sizeof(container_hdr)) ||
			(container_hdr.magic != EFI_VAR_FILE_MAGIC))
			break;

		found_off = sector_off;
		sector_off += container_hdr.length;
	}

	/* read content of last container */
	if (! cn10k_spi_dev_read(efi_buf, (uint64_t *)efi_size,
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

static int _spi_update_persistent_data(uintptr_t buffer, uint64_t sz, size_t pdata_offset)
{
	persist_data_cfg_t *cfg = cn10k_persistent_data_base();
	uint64_t offset;
	int ret = -1;

	if (cfg == NULL)
		return -1;

	offset = cfg->offset + pdata_offset;

	if (octeontx_ctr_sem_try_lock(&octeontx_smc_spi_lock[cfg->bus]) != 0) {
		ERROR("%s: SPI_%d: Sem Lock failed\n", __func__, cfg->bus);
		ret = -1;
		goto err;
	}

	if (spi_dev_lock(cfg->bus)) {
		ERROR("%s: SPI_%d: Lock failed\n", __func__, cfg->bus);
		ret = -1;
		goto err;
	}

	ret = cn10k_spi_dev_erase(offset, sz, cfg->bus, cfg->cs);

	if (ret == 0 && (void *)buffer != NULL)
		ret = cn10k_spi_dev_write(buffer, sz, offset, cfg->bus, cfg->cs);

	if (spi_dev_unlock(cfg->bus)) {
		WARN("%s: SPI_%d: Unlock failed\n", __func__, cfg->bus);
		ret = -1;
	}

err:
	octeontx_ctr_sem_unlock(&octeontx_smc_spi_lock[cfg->bus]);

	return ret;
}

static int _spi_read_persistent_data(uintptr_t buffer, uint64_t *sz, size_t pdata_offset)
{
	persist_data_cfg_t *cfg = cn10k_persistent_data_base();
	uint64_t offset;
	int ret;

	if (cfg == NULL)
		return -1;

	offset = cfg->offset + pdata_offset;

	if (octeontx_ctr_sem_try_lock(&octeontx_smc_spi_lock[cfg->bus]) != 0) {
		ERROR("%s: SPI_%d: Sem Lock failed\n", __func__, cfg->bus);
		ret = -1;
		goto err;
	}

	if (spi_dev_lock(cfg->bus)) {
		ERROR("%s: SPI_%d: Lock failed\n", __func__, cfg->bus);
		ret = -1;
		goto err;
	}

	ret = cn10k_spi_dev_read(buffer, (uint64_t *)sz, offset, cfg->bus, cfg->cs);

	if (spi_dev_unlock(cfg->bus)) {
		WARN("%s: SPI_%d: Unlock failed\n", __func__, cfg->bus);
		ret = -1;
	}

err:
	octeontx_ctr_sem_unlock(&octeontx_smc_spi_lock[cfg->bus]);

	return ret;
}

int spi_update_ethernet_persistent_data(uintptr_t log_entry, size_t sz)
{
	return _spi_update_persistent_data(log_entry, sz,
					   PERSIST_NETWORK_SETTINGS_OFFSET);
}

int spi_read_ethernet_persistent_data(uintptr_t log_entry, uint64_t *sz)
{
	return _spi_read_persistent_data(log_entry, sz,
					 PERSIST_NETWORK_SETTINGS_OFFSET);
}

int spi_update_mac_addr_persistent_data(uintptr_t log_entry, size_t sz)
{
	persist_data_cfg_t *cfg = cn10k_persistent_data_base();
	uint64_t offset;
	int ret = -1;

	if (cfg == NULL)
		return -1;

	offset = PERSIST_MAC_ADDRESS_OFFSET + cfg->offset;

	if (octeontx_ctr_sem_try_lock(&octeontx_smc_spi_lock[cfg->bus]) != 0) {
		ERROR("%s: SPI_%d: Sem Lock failed\n", __func__, cfg->bus);
		octeontx_ctr_sem_unlock(&octeontx_smc_spi_lock[cfg->bus]);
		return -1;
	}

	if (spi_dev_lock(cfg->bus)) {
		ERROR("%s: SPI_%d: Lock failed\n", __func__, cfg->bus);
		ret = -1;
		goto err;
	}

	ret = cn10k_spi_dev_erase(offset, sz, cfg->bus, cfg->cs);

	if (ret == 0)
		ret = cn10k_spi_dev_write(log_entry, sz, offset, cfg->bus, cfg->cs);

	if (spi_dev_unlock(cfg->bus)) {
		WARN("%s: SPI_%d: Unlock failed\n", __func__, cfg->bus);
		ret = -1;
	}

err:
	octeontx_ctr_sem_unlock(&octeontx_smc_spi_lock[cfg->bus]);
	return ret;
}

int spi_read_mac_addr_persistent_data(uintptr_t log_entry, size_t *sz)
{
	persist_data_cfg_t *cfg = cn10k_persistent_data_base();
	uint64_t offset;
	int ret;

	if (cfg == NULL)
		return -1;

	offset = PERSIST_MAC_ADDRESS_OFFSET + cfg->offset;

	if (octeontx_ctr_sem_try_lock(&octeontx_smc_spi_lock[cfg->bus]) != 0) {
		ERROR("%s: SPI_%d: Sem Lock failed\n", __func__, cfg->bus);
		octeontx_ctr_sem_unlock(&octeontx_smc_spi_lock[cfg->bus]);
		return -1;
	}

	if (spi_dev_lock(cfg->bus)) {
		ERROR("%s: SPI_%d: Lock failed\n", __func__, cfg->bus);
		ret = -1;
		goto err;
	}

	ret = cn10k_spi_dev_read(log_entry, (uint64_t *)sz, offset, cfg->bus, cfg->cs);

	if (spi_dev_unlock(cfg->bus)) {
		WARN("%s: SPI_%d: Unlock failed\n", __func__, cfg->bus);
		ret = -1;
	}

err:
	octeontx_ctr_sem_unlock(&octeontx_smc_spi_lock[cfg->bus]);
	return ret;
}

int spi_update_preserve_memconfig(uintptr_t wrbuf, uint64_t wrsize)
{
	persist_data_cfg_t *cfg = cn10k_persistent_data_base();
	uint64_t rpram_offset;
	int ret;

	if (cfg == NULL)
		return -1;

	rpram_offset = PERSIST_RPRAM_DATA_OFFSET + cfg->offset;

	if (spi_dev_lock(cfg->bus)) {
		ERROR("%s: SPI_%d: Lock failed\n", __func__, cfg->bus);
		return -1;
	}

	ret = cn10k_spi_dev_erase(rpram_offset, wrsize, cfg->bus, cfg->cs);

	if (ret == 0)
		ret = cn10k_spi_dev_write(wrbuf, wrsize, rpram_offset, cfg->bus, cfg->cs);

	if (spi_dev_unlock(cfg->bus)) {
		WARN("%s: SPI_%d: Unlock failed\n", __func__, cfg->bus);
		return -1;
	}

	return ret;
}

int spi_read_memtest_persistent_data(uintptr_t buf, uint64_t *sz)
{
	persist_data_cfg_t *cfg = cn10k_persistent_data_base();
	uint64_t offset;
	int ret;

	if (cfg == NULL)
		return -2;

	offset = PERSIST_MEMTEST_DATA_OFFSET + cfg->offset;

	if (spi_dev_lock(cfg->bus)) {
		ERROR("%s: SPI_%d: Lock failed\n", __func__, cfg->bus);
		return -1;
	}

	ret = cn10k_spi_dev_read(buf, sz, offset, cfg->bus, cfg->cs);

	if (spi_dev_unlock(cfg->bus)) {
		WARN("%s: SPI_%d: Unlock failed\n", __func__, cfg->bus);
		return -1;
	}

	return ret;
}

int spi_write_memtest_persistent_data(uintptr_t buf, uint64_t sz)
{
	persist_data_cfg_t *cfg = cn10k_persistent_data_base();
	uint64_t offset;
	int ret;

	if (cfg == NULL)
		return -2;

	offset = PERSIST_MEMTEST_DATA_OFFSET + cfg->offset;

	if (spi_dev_lock(cfg->bus)) {
		ERROR("%s: SPI_%d: Lock failed\n", __func__, cfg->bus);
		return -1;
	}

	ret = cn10k_spi_dev_erase(offset, sz, cfg->bus, cfg->cs);

	if (ret == 0)
		ret = cn10k_spi_dev_write(buf, sz, offset, cfg->bus, cfg->cs);

	if (spi_dev_unlock(cfg->bus)) {
		WARN("%s: SPI_%d: Unlock failed\n", __func__, cfg->bus);
		return -1;
	}

	return ret;
}

#ifdef PLAT_cnf10kb
int spi_read_retimer_persistent_data(uintptr_t log_entry, uint64_t *sz)
{
	return _spi_read_persistent_data(log_entry, sz,
					 PERSIST_RETIMER_CONFIG_OFFSET);
}

int spi_update_retimer_persistent_data(uintptr_t log_entry, size_t sz)
{
	return _spi_update_persistent_data(log_entry, sz,
					   PERSIST_RETIMER_CONFIG_OFFSET);
}
#endif

int spi_read_portm_boot_persistent_data(uintptr_t buffer, uint64_t *sz)
{
	return _spi_read_persistent_data(buffer, sz,
					 PERSIST_PORTM_MODE_BOOT_CFG_OFFSET);
}

int spi_update_portm_boot_persistent_data(uintptr_t buffer, uint64_t sz)
{
	return _spi_update_persistent_data(buffer, (size_t)sz,
					   PERSIST_PORTM_MODE_BOOT_CFG_OFFSET);
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

		r =  cn10k_spi_dev_read(efi_buf, efi_size, offset, bus, cs);

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
