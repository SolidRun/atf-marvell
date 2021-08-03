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
 * 24000	3EFFF		Unused
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
	int mode = SPI_ADDRESSING_24BIT, ret = 0;

	CHECK_AND_CONFIG_SPI(bus, cs)

	if (spi_dev_lock(bus)) {
		WARN("SPI: Lock SPI%d failed\n", bus);
		return -1;
	}

	if (spi_nor_read((uint8_t *) user_buffer, size, offset,
			 mode, bus, cs) < 0) {
		debug_spi_nor("SPI: Read flash failed\n");
		ret = -1;
	}

	if (spi_dev_unlock(bus)) {
		WARN("SPI: Unlock SPI%d failed\n", bus);
		return -1;
	}

	return ret;
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

int cn10k_spi_dev_write(uintptr_t efi_buf, uint64_t efi_size,
			   int loc, int bus, int cs)
{
	size_t size = efi_size;
	uint64_t offset = loc, xfer_len;
	int mode = SPI_ADDRESSING_24BIT, ret = 0;
	const void *user_buffer = (void *)efi_buf;

	memset(wr_buffer, 0, BUF_SIZE);
	memset(rd_buffer, 0, BUF_SIZE);

	CHECK_AND_CONFIG_SPI(bus, cs)

	if (spi_dev_lock(bus)) {
		WARN("SPI: Lock SPI%d failed\n", bus);
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
		WARN("SPI: Unlock SPI%d failed\n", bus);
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
		WARN("SPI: Lock SPI%d failed\n", bus);
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
		WARN("SPI: unlock SPI%d failed\n", bus);
		return -1;
	}

	return ret;
}

int spi_write_efi_var(uintptr_t efi_buf, uint64_t efi_size,
			  int bus, int cs)
{
	/* Confirm offset for EFI variables available */
	if (!plat_octeontx_bcfg->spi_cfg[bus].efivar_offset) {
		WARN("%s: Offset in flash unknown, check device tree\n",
		     __func__);
		return -1;
	}

	CHECK_AND_CONFIG_SPI(bus, cs)

	return cn10k_spi_dev_write(efi_buf, efi_size,
			     plat_octeontx_bcfg->spi_cfg[bus].efivar_offset,
			     bus, cs);
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

	if (cn10k_spi_dev_read(log_entry, (uint64_t *)sz, offset, cfg->bus, cfg->cs) < 0)
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

	if (cn10k_spi_dev_read(log_entry, (uint64_t *)sz, offset, cfg->bus, cfg->cs) < 0)
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

	bus = op & 0xF;
	cs = (op >> 4) & 0xF;
	operation = (op >> 8) & 0xF;

	switch (operation) {
	case 1:
		aligned_base = efi_buf & ~0xFFF;
		aligned_size = (*efi_size + (PAGE_SIZE_4KB * 2) - 1) & ~0xFFF;
		/* Map Non-secure memory buffer */
		if (octeontx_mmap_add_dynamic_region_with_sync(aligned_base, aligned_base,
							       aligned_size,
							       MT_RW | MT_NS)) {
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
