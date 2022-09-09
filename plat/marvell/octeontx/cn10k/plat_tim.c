/*
 * Copyright (c) 2020 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#include <drivers/io/io_driver.h>
#include <platform_def.h>
#include <debug.h>
#include <libfdt.h>
#include <octeontx_io_storage.h>
#include <plat_tim.h>
#include "libtim.h"
#include "cavm-platform.h"

#define TIM_BLOCK_MAX_SIZE	0x1000

static tim_spec_info_t tim_specs[TIM_NUM_SPECS];
/* Buffer to read TIMs */
__aligned(8) static uint8_t tim_buffer[TIM_BLOCK_MAX_SIZE] = {0};

static struct tim_header_info tim_hdr_info;
static struct tim_handle tim_handle;

int tim_is_emulator(void)
{
	return cavm_is_platform(PLATFORM_EMULATOR);
}

int cn10k_get_firmware_layout_root(const void *fdt_addr)
{
	static int offset = -1;

	if (offset < 0)
		offset = fdt_path_offset(fdt_addr,
					 "/cavium,bdk/firmware-layout");
	return offset;
}

extern void *fdt_ptr;

int get_tim_address_size(const char *name, size_t *addr, size_t *size)
{
	const void *fdt = fdt_ptr;
	int ret;
	int fl_offset;
	int offset;
	const char *desc;
	const uint32_t *addr_size;
	int len = 0;

	ret = fdt_check_header(fdt);
	if (ret) {
		ERROR("Invalid device tree\n");
		return ret;
	}
	fl_offset = cn10k_get_firmware_layout_root(fdt);
	if (fl_offset < 0) {
		ERROR("Could not find firmware-layout in device tree!\n");
		return fl_offset;
	}

	for (offset = fdt_first_subnode(fdt, fl_offset); offset >= 0;
	     offset = fdt_next_subnode(fdt, offset)) {
		desc = fdt_getprop(fdt, offset, "description", NULL);
		if (!desc) {
			ERROR("Could not find description field in firmware-offset of device tree\n");
			return -1;
		}
		if (strcmp(desc, name))
			continue;

		addr_size = fdt_getprop(fdt, offset, "reg", &len);
		if (!addr_size || len != 2 * sizeof(uint32_t)) {
			ERROR("Could not obtain formware address and size for %s\n",
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

/*
 * Parse the TIM and return image address/length
 */
int plat_read_tim(int boot_type, unsigned int image_id,
		  uintptr_t dev_handle, uintptr_t *image_spec)
{
	int ret = -ENOENT;
	tim_spec_info_t *tspec;
	union tim_headers *hdr = (union tim_headers *)tim_buffer;
	struct tim_header_info *hinfo = &tim_hdr_info;
	struct tim_handle *handle = &tim_handle;
	uintptr_t image_handle;
	size_t bytes_read;
	size_t addr;
	size_t size;
	const char *filename;

	switch (image_id) {
	case BL31_IMAGE_ID:
		filename = "bl31.bin";
		tspec = &tim_specs[TIM_SPEC_BL31];
		break;
	case BL33_IMAGE_ID:
#if defined(BUILD_UEFI)
		filename = "uefi.bin";
#else
		filename = "u-boot-nodtb.bin";
#endif
		tspec = &tim_specs[TIM_SPEC_BL33];
		break;
#ifdef NT_FW_CONFIG
	case NT_FW_CONFIG_ID:
		filename = "npc_mkex-cn10xx.fw";
		tspec = &tim_specs[TIM_SPEC_NT_FW_CONFIG];
		break;
#endif
	case SOC_FW_CONFIG_ID:
		filename = "gserm-cn10xx.fw";
		tspec = &tim_specs[TIM_SPEC_SOC_FW_CONFIG];
		break;
	default:
		ERROR("Unknown image ID %d\n", image_id);
		return -ENOENT;
	}

	ret = get_tim_address_size(filename, &addr, &size);
	if (ret)
		return -ENOENT;

	tspec->signature = TIM_SPEC_SIGNATURE;
	tspec->image_id = image_id;
	tspec->spec.offset = addr;
	tspec->spec.length = TIM_BLOCK_MAX_SIZE;

	INFO("%s address: 0x%lx, size: 0x%lx\n", filename, addr, size);

	/* Open the SPI device */
	ret = io_open(dev_handle, (uintptr_t)(&tspec->spec), &image_handle);
	if (ret != 0) {
		ERROR("Failed to access TIM image\n");
		return ret;
	}

	INFO("Loading TIM for %s from address 0x%lx size 0x%lx\n",
	     filename, tspec->spec.offset, tspec->spec.length);

	/* Read the TIM header */
	ret = io_read(image_handle, (uintptr_t)hdr, (size_t)TIM_TIMH_SIZE,
		      &bytes_read);
	if ((ret != 0) || (bytes_read < TIM_TIMH_SIZE)) {
		ERROR("Failed to load TIM from address 0x%lx\n",
		      tspec->spec.offset);
		goto done;
	}
	/* Get TIM header info to read rest of the TIM */
	ret = tim_get_timh_info(hdr, hinfo);
	if (ret != TIM_NO_ERROR) {
		ERROR("Could not parse TIM header\n");
		ret = -ENOENT;
		goto done;
	}
	/* Read the rest of the TIM */
	ret = io_read(image_handle, (uint64_t)tim_buffer + TIM_TIMH_SIZE,
		      hinfo->signed_tim_size - TIM_TIMH_SIZE, &bytes_read);
	if (bytes_read != hinfo->signed_tim_size - TIM_TIMH_SIZE) {
		ERROR("Could not read TIM\n");
		ret = -ENOENT;
		goto done;
	}

	/* Validate TIM */
	ret = tim_load(hdr, 0, handle);
	if (ret != TIM_NO_ERROR) {
		ERROR("Error %d parsing TIM\n", ret);
		ret = -ENOENT;
		goto done;
	}

	ret = tim_get_load_info(handle, &tspec->tim_info);
	if (ret != TIM_NO_ERROR) {
		ERROR("Error %d getting TIM file information\n", ret);
		ret = -ENOENT;
		goto done;
	}
	if (!tspec->tim_info.lodi_parsed && !tspec->tim_info.litc_parsed) {
		ERROR("Could not find LODI or LITC block in TIM\n");
		ret = -ENOENT;
		goto done;
	}

	/* The address is actually relative since the IO handle uses its own
	 * offset.
	 */
	tspec->spec.offset += tspec->tim_info.src_address;
	tspec->spec.length = tspec->tim_info.image_length;
	*image_spec = (uintptr_t)&tspec->spec;

	INFO("Found %s at address 0x%lx size 0x%lx\n",
	     filename, tspec->spec.offset, tspec->spec.length);
done:
	/* Close the SPI device before return */
	io_close(image_handle);
	memset(hinfo, 0, sizeof(*hinfo));
	memset(handle, 0, sizeof(*handle));

	return ret;
}

/**
 * Given an image_id return the TIM spec info
 */
const tim_spec_info_t *plat_find_tim_spec(unsigned int image_id)
{
	tim_spec_info_t *tspec;
	switch (image_id) {
	case BL31_IMAGE_ID:
		tspec = &tim_specs[TIM_SPEC_BL31];
		break;
	case BL33_IMAGE_ID:
		tspec = &tim_specs[TIM_SPEC_BL33];
		break;
#ifdef NT_FW_CONFIG
	case NT_FW_CONFIG_ID:
		tspec = &tim_specs[TIM_SPEC_NT_FW_CONFIG];
		break;
#endif
	case SOC_FW_CONFIG_ID:
		tspec = &tim_specs[TIM_SPEC_SOC_FW_CONFIG];
		break;
	default:
		ERROR("Unknown image ID %d\n", image_id);
		return NULL;
	}
	if (tspec->signature != TIM_SPEC_SIGNATURE)
		return NULL;

	return tspec;
}
