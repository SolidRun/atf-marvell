/*
 * Copyright (C) 2020 Marvell International Ltd.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#include <drivers/io/io_driver.h>
#include <platform_def.h>
#include <debug.h>
#include <libfdt.h>
#include "libtim.h"


#define TIM_BLOCK_MAX_SIZE	0x1000

static io_block_spec_t bl31_block_spec = {
	/* ATF BL31 base address obtained from device tree
	 * followed by the TIM which returns the length.
	 */
	.offset = 0,
	.length = 0,
};

static io_block_spec_t bl33_block_spec = {
	/* ATF BL33 base address obtained from device tree
	 * followed by the TIM which returns the length.
	 */
	.offset = 0,
	.length = 0,
};

#ifdef NT_FW_CONFIG
static io_block_spec_t nt_fw_config_block_spec = {
	/* NT FW image base address obtained from device tree
	 * followed by the TIM which returns the length.
	 */
	.offset = 0,
	.length = 0,
};
#endif

/* Buffer to read TIMs */
uint8_t tim_buffer[TIM_BLOCK_MAX_SIZE] = {0};

static int cn10k_get_firmware_layout_root(const void *fdt_addr)
{
	static int offset = -1;

	if (offset < 0)
		offset = fdt_path_offset(fdt_addr,
					 "/cavium,bdk/firmware-layout");
	return offset;
}

extern void *fdt_ptr;
static int get_tim_address_size(const char *name, size_t *addr, size_t *size)
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
	io_block_spec_t *spec;
	union tim_headers *hdr = (union tim_headers *)tim_buffer;
	struct tim_header_info hinfo;
	struct tim_handle handle;
	uintptr_t image_handle;
	size_t bytes_read;
	struct tim_load_info tim_info;
	size_t addr;
	size_t size;
	const char *filename;

	switch (image_id) {
	case BL31_IMAGE_ID:
		filename = "bl31.bin";
		spec = &bl31_block_spec;
		break;
	case BL33_IMAGE_ID:
		filename = "u-boot.bin";
		spec = &bl33_block_spec;
		break;
#ifdef NT_FW_CONFIG
	case NT_FW_CONFIG_ID:
		filename = "npc_mkex.fw";
		spec = &nt_fw_config_block_spec;
		break;
#endif
	default:
		ERROR("Unknown image ID %d\n", image_id);
		return -ENOENT;
	}

	ret = get_tim_address_size(filename, &addr, &size);
	if (ret)
		return -ENOENT;

	spec->offset = addr;
	spec->length = TIM_BLOCK_MAX_SIZE;

	INFO("%s address: 0x%lx, size: 0x%lx\n", filename, addr, size);

	/* Open the SPI device */
	ret = io_open(dev_handle, (uintptr_t)spec, &image_handle);
	if (ret != 0) {
		ERROR("Failed to access TIM image\n");
		return ret;
	}

	INFO("Loading TIM for %s from address 0x%lx size 0x%lx\n",
	     filename, spec->offset, spec->length);

	/* Read the TIM header */
	ret = io_read(image_handle, (uintptr_t)hdr, (size_t)TIM_TIMH_SIZE,
		      &bytes_read);
	if ((ret != 0) || (bytes_read < TIM_TIMH_SIZE)) {
		ERROR("Failed to load TIM from address 0x%lx\n", spec->offset);
		goto done;
	}
	/* Get TIM header info to read rest of the TIM */
	ret = tim_get_timh_info(hdr, &hinfo);
	if (ret != TIM_NO_ERROR) {
		ERROR("Could not parse TIM header\n");
		ret = -ENOENT;
		goto done;
	}
	/* Read the rest of the TIM */
	ret = io_read(image_handle, (uint64_t)tim_buffer + TIM_TIMH_SIZE,
		      hinfo.signed_tim_size - TIM_TIMH_SIZE, &bytes_read);
	if (bytes_read != hinfo.signed_tim_size - TIM_TIMH_SIZE) {
		ERROR("Could not read TIM\n");
		ret = -ENOENT;
		goto done;
	}

	/* Validate TIM */
	ret = tim_load(hdr, 0, &handle);
	if (ret != TIM_NO_ERROR) {
		ERROR("Error %d parsing TIM\n", ret);
		ret = -ENOENT;
		goto done;
	}

	ret = tim_get_load_info(&handle, &tim_info);
	if (ret != TIM_NO_ERROR) {
		ERROR("Error %d getting TIM file information\n", ret);
		ret = -ENOENT;
		goto done;
	}
	if (!tim_info.lodi_parsed && !tim_info.litc_parsed) {
		ERROR("Could not find LODI or LITC block in TIM\n");
		ret = -ENOENT;
		goto done;
	}

	/* The address is actually relative since the IO handle uses its own
	 * offset.
	 */
	spec->offset += tim_info.src_address;
	spec->length = tim_info.image_length;
	*image_spec = (uintptr_t)spec;

	INFO("Found %s at address 0x%lx size 0x%lx\n",
	     filename, spec->offset, spec->length);
done:
	/* Close the SPI device before return */
	ret = io_close(image_handle);

	return ret;
}
