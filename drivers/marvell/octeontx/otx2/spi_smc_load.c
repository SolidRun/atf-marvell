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
#include <spi_smc_load.h>

#undef DEBUG_SPI_NOR

#ifdef DEBUG_SPI_NOR
#define debug_spi_nor	printf
#else
#define debug_spi_nor(...) ((void) (0))
#endif

#define MAX_EFI_VAR_SIZE	0x4000

#if defined(PLAT_CN10K_FAMILY)
#define TIM_BLOCK_MAX_SIZE	0x1000

/* Buffer to read TIMs */
uint8_t tim_block_buf[TIM_BLOCK_MAX_SIZE] __aligned(8);

static int parse_fw_address_size(const char *name, uint32_t *addr,
				 uint32_t *size)
{
	const void *fdt = fdt_ptr;
	int ret;
	int r_offset, offset;
	const char *desc;
	const uint32_t *addr_size;
	int len = 0;

	ret = fdt_check_header(fdt);
	if (ret) {
		debug_spi_nor("Invalid device tree\n");
		return ret;
	}
	r_offset = fdt_path_offset(fdt,
				   "/cavium,bdk/firmware-layout");
	if (r_offset < 0) {
		debug_spi_nor("Could not find firmware-layout in device tree!\n");
		return r_offset;
	}

	for (offset = fdt_first_subnode(fdt, r_offset); offset >= 0;
	     offset = fdt_next_subnode(fdt, offset)) {
		desc = fdt_getprop(fdt, offset, "description", NULL);
		if (!desc) {
			debug_spi_nor("Could not find description field in device tree\n");
			return -1;
		}
		if (strcmp(desc, name))
			continue;

		addr_size = fdt_getprop(fdt, offset, "reg", &len);
		if (!addr_size || len != 2 * sizeof(uint32_t)) {
			debug_spi_nor("Could not obtain formware address and size for %s\n",
				      name);
			return -1;
		}
		*addr = fdt32_to_cpu(addr_size[0]);
		*size = fdt32_to_cpu(addr_size[1]);
		return 0;
	}
	ERROR("Could not find filename %s\n", name);
	return -1;
}

static int __spi_read_img(uintptr_t user_buffer, size_t size,
			  size_t loc, int bus, int cs)
{
	uint64_t offset = loc;
	int mode = SPI_ADDRESSING_24BIT, ret = 0;

	if (spi_nor_read((uint8_t *) user_buffer, size, offset,
			 mode, bus, cs) < 0) {
		debug_spi_nor("SPI: Read flash failed\n");
		ret = -1;
	}

	return ret;
}

static int parse_fw_image(const char *name, uintptr_t img_addr, uint32_t *size)
{
	union tim_headers *hdr = (union tim_headers *)tim_block_buf;
	struct tim_header_info hinfo;
	struct tim_handle handle;
	struct tim_load_info tim_info;
	int err = 0;
	uint32_t addr;
	uint32_t map_size;
	int bus = 0, cs = 0;
	const char *file = name;

	memset(hdr, 0, TIM_BLOCK_MAX_SIZE);

	debug_spi_nor("SPI: bus:0x%llx cs:0x%llx\n", bus, cs);
	/* Init Secure SPI */
	/* FIXME */
	/* Need to parse FDT to config SPI */
	if (spi_config(CONFIG_SPI_FREQUENCY, 0, 0, 0, bus, cs)) {
		debug_spi_nor("SPI: Config flash failed\n");
		return -SPI_CONFIG_ERR;
	}

	err = parse_fw_address_size(file, &addr, &map_size);
	if (err) {
		debug_spi_nor("File %s not found in device tree\n", file);
		return err;
	}
	debug_spi_nor("%s %s %x %x\n", __func__, file, addr, map_size);
	/* Map Non-secure memory buffer */
	if (octeontx_mmap_add_dynamic_region_with_sync(img_addr, img_addr,
						       map_size,
						       MT_RW | MT_NS)) {
		debug_spi_nor("Switch: mmap failed (%d)\n", err);
		return -SPI_MMAP_ERR;
	}

	/* Read the TIM header */
	if (__spi_read_img((uintptr_t)hdr, TIM_TIMH_SIZE, addr, bus, cs)) {
		err = -EIO;
		goto err;
	}

	/* Get TIM header info to read rest of the TIM */
	err = tim_get_timh_info(hdr, &hinfo);
	if (err != TIM_NO_ERROR) {
		ERROR("Could not parse TIM header\n");
		err = -ENOENT;
		goto err;
	}
	debug_spi_nor("%s %s %lx %x\n", __func__, file, TIM_TIMH_SIZE,
		      hinfo.signed_tim_size);
	/* Read the rest of the TIM */
	if (__spi_read_img((uintptr_t)tim_block_buf + TIM_TIMH_SIZE,
			   hinfo.signed_tim_size - TIM_TIMH_SIZE,
			   addr + TIM_TIMH_SIZE, bus, cs)) {
		err = -EIO;
		goto err;
	}

	/* Validate TIM */
	err = tim_load(hdr, 0, &handle);
	if (err != TIM_NO_ERROR) {
		ERROR("Error %d parsing TIM\n", err);
		err = -ENOENT;
		goto err;
	}

	err = tim_get_load_info(&handle, &tim_info);
	if (err != TIM_NO_ERROR) {
		ERROR("Error %d getting TIM file information\n", err);
		err = -ENOENT;
		goto err;
	}
	if (!tim_info.lodi_parsed && !tim_info.litc_parsed) {
		ERROR("Could not find LODI or LITC block in TIM\n");
		err = -ENOENT;
		goto err;
	}
	if (!tim_info.hshi_parsed) {
		ERROR("Could not find HSHI block in TIM\n");
		err = -ENOENT;
		goto err;
	}
	debug_spi_nor("%s %s %llx %x\n", __func__, file, tim_info.src_address,
		      tim_info.image_length);

	addr += tim_info.src_address;
	/* Read the image */
	if (__spi_read_img(img_addr, tim_info.image_length, addr, bus, cs)) {
		err = -EIO;
		goto err;
	}

	err = ehsm_verify_image((const void *)img_addr, &tim_info);
	if (err) {
		ERROR("Hash for %s mismatch\n", name);
		err = -EIO;
		goto err;
	}

	*size = tim_info.image_length;
err:
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
	if (err) {
		debug_spi_nor("Failed to load Switch CM3 Image %s\n", name);
		return err;
	}
	*cm3_size = img_size;
	return 0;
}

int spi_smc_load_efi_image(uintptr_t efi_img_buf, uint64_t *efi_img_size,
			   int image_id)
{
	int err = 0;
	char buf[16];
	const char *name;
	uint32_t img_size;

	/* Load efi image */
	snprintf(buf, 16, "efi_app%d.efi", image_id);
	name = buf;
	err = parse_fw_image(name, efi_img_buf, &img_size);
	if (err) {
		debug_spi_nor("Failed to load efi app %s\n", name);
		return err;
	}
	*efi_img_size = img_size;
	return 0;
}

int spi_smc_load_oem_data(int spi_id, int cs, uintptr_t img_buf,
			  uint64_t *img_size)
{
	if (plat_octeontx_bcfg->spi_cfg[spi_id].cs[cs] == -1) {
		WARN("%s: Invalid SPI%d.CS%d is used for reading OEM data\n",
			__func__, spi_id, cs);
		return -1;
	}

	if (__spi_read_img(img_buf, OEM_DATA_SIZE, OEM_DATA_OFFSET, spi_id, cs))
		return -EIO;

	*img_size = OEM_DATA_SIZE;

	return 0;
}
#endif

#define BUF_SIZE	4096
__aligned(8) static uint8_t wr_buffer[BUF_SIZE] = {0};
__aligned(8) static uint8_t rd_buffer[BUF_SIZE] = {0};

int spi_smc_write(uintptr_t efi_buf, uint64_t efi_size,
			   int loc, int bus, int cs)
{
	size_t size = efi_size;
	uint64_t offset = loc, xfer_len;
	int mode = SPI_ADDRESSING_24BIT, ret = 0;
	const void *user_buffer = (void *)efi_buf;

	memset(wr_buffer, 0, BUF_SIZE);
	memset(rd_buffer, 0, BUF_SIZE);

	if (spi_config(CONFIG_SPI_FREQUENCY, 0, 0, 0, bus, cs)) {
		WARN("SPI: Config flash failed\n");
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

	return ret;
}

int spi_smc_write_efi_var(uintptr_t efi_buf, uint64_t efi_size)
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

	return spi_smc_write(efi_buf, efi_size,
			     plat_octeontx_bcfg->spi_cfg[spi_bus].efivar_offset,
			     spi_bus, spi_cs);
}

unsigned long spi_smc_read(uintptr_t efi_buf, uint64_t *efi_size,
		int loc, int bus, int cs)
{
	size_t size = *efi_size;
	uint64_t offset = loc, xfer_len;
	int mode = SPI_ADDRESSING_24BIT, ret = 0;
	const void *user_buffer = (void *)efi_buf;

	/* Check if device is present */
	if (!plat_octeontx_bcfg->spi_cfg[bus].cs[cs]) {
		*efi_size = 0;
		return -1;
	}

	memset(rd_buffer, 0, BUF_SIZE);

	if (spi_config(CONFIG_SPI_FREQUENCY, 0, 0, 0, bus, cs)) {
		WARN("SPI: Config flash failed\n");
		return -1;
	}

	while (size > 0) {
		xfer_len = size < BUF_SIZE ? size : BUF_SIZE;
		if (spi_nor_read(rd_buffer, BUF_SIZE, offset,
		   mode, bus, cs) < 0) {
			WARN("SPI: Read flash failed for offset: 0x%llx, file: EFI_VAR\n",
				offset);
			ret = -1;
			break;
		}
		offset += xfer_len;
		user_buffer += xfer_len;
		size -= xfer_len;
	}

	return ret;
}

/* Gather info about all secure busses and chip selects */
unsigned long sec_spi_get_info(void)
{
	return 0;
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
		r =  spi_smc_read(efi_buf, efi_size, offset, bus, cs);
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
