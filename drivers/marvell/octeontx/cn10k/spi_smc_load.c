/*
 * Copyright (c) 2020 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#include <stdint.h>
#include <stdio.h>
#include <string.h>
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

static struct tim_handle tim_handle;
static struct tim_header_info tim_header_info;
static struct tim_load_info tim_load_info;

/* Buffer to read TIMs */
static inline int get_spi_mode(uint64_t offset)
{
	return (offset >= (1 << 24)) ?
				SPI_ADDRESSING_32BIT : SPI_ADDRESSING_24BIT;
}

static void *cn10k_persistent_data_base(void)
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

	CHECK_AND_CONFIG_SPI(bus, cs)

	if (spi_dev_lock(bus)) {
		ERROR("%s: SPI_%d: Lock failed\n", __func__, bus);
		return -1;
	}

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
			 get_spi_mode(addr), bus, cs))
		return -EIO;

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
		goto err;
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

	debug_spi_nor("%s %s %llx %x\n", __func__, file, tim_info.src_address,
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
	if (spi_dev_unlock(bus))
		WARN("%s: SPI_%d: Unlock failed\n", __func__, bus);

	octeontx_free(tim_block_buf);
	memset(handle, 0, sizeof(*handle));
	memset(hinfo, 0, sizeof(*hinfo));
	memset(tim_info, 0, sizeof(*tim_info));

	/* unmap non-secure memory buffer */
	octeontx_mmap_remove_dynamic_region_with_sync(img_addr, map_size);
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

	if (cn10k_spi_dev_read_aligned(img_buf, OEM_DATA_SIZE, OEM_DATA_OFFSET, spi_id, cs))
		return -EIO;

	*img_size = OEM_DATA_SIZE;

	return 0;
}

#define BUF_SIZE	4096
__aligned(8) static uint8_t wr_buffer[BUF_SIZE] = {0};
__aligned(8) static uint8_t rd_buffer[BUF_SIZE] = {0};

#define BUF_SIZE_64K	65536
__aligned(8) static uint8_t rd_buffer64[BUF_SIZE_64K] = {0};

int cn10k_spi_dev_write_64k(uintptr_t buf, uint64_t buf_size,
			    int loc, int bus, int cs)
{
	size_t size = buf_size;
	uint64_t offset = loc, xfer_len;
	uint64_t sector_offset, sector_addr;
	int mode = SPI_ADDRESSING_24BIT, ret = 0;
	const void *user_buffer = (void *)buf;

	debug_spi_nor("%s buf %lx len %llx loc %x bus %d cs %d\n",
		      __func__, buf, buf_size, loc, bus, cs);
	memset(rd_buffer64, 0, BUF_SIZE_64K);

	memset(wr_buffer, 0, BUF_SIZE);
	memset(rd_buffer, 0, BUF_SIZE);

	CHECK_AND_CONFIG_SPI(bus, cs)

	if (spi_dev_lock(bus)) {
		ERROR("%s: SPI_%d: Lock failed\n", __func__, bus);
		return -1;
	}

	/* Update data */
	while (size > 0) {
		sector_addr   = offset & ~(BUF_SIZE_64K - 1);
		sector_offset = offset &  (BUF_SIZE_64K - 1);
		xfer_len = size < BUF_SIZE_64K ? size : BUF_SIZE_64K;
		if (sector_offset + xfer_len > BUF_SIZE_64K)
			xfer_len = BUF_SIZE_64K - sector_offset;

		debug_spi_nor("%s sect addr %llx offset %llx xferlen %llx\n",
			      __func__, sector_addr, sector_offset, xfer_len);
		if (spi_nor_read(rd_buffer64, BUF_SIZE_64K, sector_addr,
				 mode, bus, cs) < 0) {
			WARN("SPI: Read flash failed for offset: 0x%llx, file: EFI_VAR\n",
			     offset);
			ret = -1;
			break;
		}
		memcpy((void *)(rd_buffer64 + sector_offset),
		       (const void *)user_buffer, xfer_len);

		if (spi_nor_erase(sector_addr, mode, bus, cs)) {
			WARN("SPI: Erase flash failed for offset: 0x%llx, file: EFI_VAR\n",
			     offset);
			ret = -1;
			break;
		}
		if (spi_nor_write(rd_buffer64, BUF_SIZE_64K, sector_addr,
				  mode, bus, cs) < 0) {
			WARN("SPI: Write flash failed for offset: 0x%llx, file: EFI_VAR\n",
			     offset);
			ret = -1;
			break;
		}
		offset += xfer_len;
		user_buffer += xfer_len;
		size -= xfer_len;
	}

	if (ret == -1)
		goto fail;

	/* Verify data */
	offset = loc;
	size = buf_size;
	user_buffer = (void *)buf;
	while (size > 0) {
		xfer_len = size < BUF_SIZE ? size : BUF_SIZE;
		memcpy((void *)wr_buffer, (const void *)user_buffer, xfer_len);

		if (spi_nor_read(rd_buffer, BUF_SIZE, offset,
				 mode, bus, cs) < 0) {
			WARN("SPI: Read flash failed for offset: 0x%llx, file: EFI_VAR\n",
			     offset);
			ret = -1;
			break;
		}
		if (memcmp(rd_buffer, wr_buffer, xfer_len)) {
			WARN("SPI: Compare data failed for file: EFI_VAR\n");
			ret = -1;
			break;
		}
		offset += xfer_len;
		user_buffer += xfer_len;
		size -= xfer_len;
	}

fail:
	if (spi_dev_unlock(bus)) {
		WARN("%s: SPI_%d: Unlock failed\n", __func__, bus);
		return -1;
	}

	return ret;
}

int cn10k_spi_dev_write(uintptr_t efi_buf, uint64_t efi_size,
			   int loc, int bus, int cs)
{
	size_t size = efi_size;
	uint64_t offset = loc, xfer_len;
	int mode = SPI_ADDRESSING_24BIT, ret = 0;
	const void *user_buffer = (void *)efi_buf;

	if (plat_octeontx_bcfg->spi_cfg[bus].erase_64k[cs]) {
		return cn10k_spi_dev_write_64k(efi_buf, efi_size, loc, bus, cs);
	}

	memset(wr_buffer, 0, BUF_SIZE);
	memset(rd_buffer, 0, BUF_SIZE);

	CHECK_AND_CONFIG_SPI(bus, cs)

	if (spi_dev_lock(bus)) {
		ERROR("%s: SPI_%d: Lock failed\n", __func__, bus);
		return -1;
	}

	while (size > 0) {
		xfer_len = size < BUF_SIZE ? size : BUF_SIZE;
		memcpy((void *)wr_buffer, (const void *)user_buffer, xfer_len);

		if (spi_nor_erase(offset, mode, bus, cs)) {
			WARN("SPI: Erase flash failed for offset: 0x%llx, file: EFI_VAR\n",
			     offset);
			ret = -1;
			break;
		}

		if (spi_nor_write(wr_buffer, BUF_SIZE, offset,
				  mode, bus, cs) < 0) {
			WARN("SPI: Write flash failed for offset: 0x%llx, file: EFI_VAR\n",
			     offset);
			ret = -1;
			break;
		}
		if (spi_nor_read(rd_buffer, BUF_SIZE, offset,
				 mode, bus, cs) < 0) {
			WARN("SPI: Read flash failed for offset: 0x%llx, file: EFI_VAR\n",
			     offset);
			ret = -1;
			break;
		}
		if (memcmp(rd_buffer, wr_buffer, xfer_len)) {
			WARN("SPI: Compare data failed for file: EFI_VAR\n");
			ret = -1;
			break;
		}
		offset += xfer_len;
		user_buffer += xfer_len;
		size -= xfer_len;
	}

	if (spi_dev_unlock(bus)) {
		WARN("%s: SPI_%d: Unlock failed\n", __func__, bus);
		return -1;
	}

	return ret;
}

unsigned long cn10k_spi_dev_read(uintptr_t efi_buf, uint64_t *efi_size,
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

	if (spi_dev_lock(bus)) {
		ERROR("%s: SPI_%d: Lock failed\n", __func__, bus);
		return -1;
	}

	while (size > 0) {
		xfer_len = size < BUF_SIZE ? size : BUF_SIZE;
		if (spi_nor_read(rd_buffer, xfer_len, offset,
		   mode, bus, cs) < 0) {
			WARN("SPI: Read flash failed for offset: 0x%llx, file: EFI_VAR\n",
				offset);
			ret = -1;
			break;
		}
		memcpy((void *)user_buffer, (const void *)rd_buffer, xfer_len);
		offset += xfer_len;
		user_buffer += xfer_len;
		size -= xfer_len;
	}

	if (spi_dev_unlock(bus)) {
		WARN("%s: SPI_%d: Unlock failed\n", __func__, bus);
		return -1;
	}

	return ret;
}

int spi_write_efi_var(uintptr_t efi_buf, uint64_t efi_size)
{
	uint32_t i, j, spi_bus, spi_cs, found;

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
	if (!plat_octeontx_bcfg->spi_cfg[spi_bus].efivar_offset) {
		WARN("%s: Offset in flash unknown, check device tree\n",
		     __func__);
		return -1;
	}

	return cn10k_spi_dev_write(efi_buf, efi_size,
			     plat_octeontx_bcfg->spi_cfg[spi_bus].efivar_offset,
			     spi_bus, spi_cs);
}

int spi_update_ethernet_persistent_data(uintptr_t log_entry, size_t sz)
{
	persist_data_cfg_t *cfg = cn10k_persistent_data_base();
	uint64_t offset;

	if (cfg == NULL)
		return -1;

	offset = cfg->offset + PERSIST_NETWORK_SETTINGS_OFFSET;

	if (cn10k_spi_dev_write(log_entry, sz, offset, cfg->bus, cfg->cs) < 0)
		return -1;

	return 0;
}

int spi_read_ethernet_persistent_data(uintptr_t log_entry, uint64_t *sz)
{
	persist_data_cfg_t *cfg = cn10k_persistent_data_base();
	uint64_t offset;

	if (cfg == NULL)
		return -1;

	offset = cfg->offset + PERSIST_NETWORK_SETTINGS_OFFSET;

	if ((long)cn10k_spi_dev_read(log_entry, (uint64_t *)sz, offset, cfg->bus, cfg->cs) < 0)
		return -1;

	return 0;
}

int spi_update_mac_addr_persistent_data(uintptr_t log_entry, size_t sz)
{
	persist_data_cfg_t *cfg = cn10k_persistent_data_base();
	uint64_t offset;

	if (cfg == NULL)
		return -1;

	offset = PERSIST_MAC_ADDRESS_OFFSET + cfg->offset;

	if (cn10k_spi_dev_write(log_entry, sz, offset, cfg->bus, cfg->cs) < 0)
		return -1;

	return 0;
}

int spi_read_mac_addr_persistent_data(uintptr_t log_entry, size_t *sz)
{
	persist_data_cfg_t *cfg = cn10k_persistent_data_base();
	uint64_t offset;

	if (cfg == NULL)
		return -1;

	offset = PERSIST_MAC_ADDRESS_OFFSET + cfg->offset;

	if ((long)cn10k_spi_dev_read(log_entry, (uint64_t *)sz, offset, cfg->bus, cfg->cs) < 0)
		return -1;

	return 0;
}

int spi_update_preserve_memconfig(uintptr_t wrbuf, uint64_t wrsize)
{
	persist_data_cfg_t *cfg = cn10k_persistent_data_base();
	uint64_t rpram_offset;

	if (cfg == NULL)
		return -1;

	rpram_offset = PERSIST_RPRAM_DATA_OFFSET + cfg->offset;

	return cn10k_spi_dev_write(wrbuf, wrsize, rpram_offset, cfg->bus, cfg->cs);
}

int spi_read_memtest_persistent_data(uintptr_t buf, uint64_t *sz)
{
	persist_data_cfg_t *cfg = cn10k_persistent_data_base();
	uint64_t offset;

	if (cfg == NULL)
		return -2;

	offset = PERSIST_MEMTEST_DATA_OFFSET + cfg->offset;
	return cn10k_spi_dev_read(buf, sz, offset, cfg->bus, cfg->cs);
}

int spi_write_memtest_persistent_data(uintptr_t buf, uint64_t sz)
{
	persist_data_cfg_t *cfg = cn10k_persistent_data_base();
	uint64_t offset;

	if (cfg == NULL)
		return -2;

	offset = PERSIST_MEMTEST_DATA_OFFSET + cfg->offset;
	return cn10k_spi_dev_write(buf, sz, offset, cfg->bus, cfg->cs);
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
		r =  cn10k_spi_dev_read(efi_buf, efi_size, offset, bus, cs);
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
