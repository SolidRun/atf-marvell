/*
 * Copyright (c) 2013-2020, ARM Limited and Contributors. All rights reserved.
 * Copyright (c) 2021 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#include <assert.h>
#include <errno.h>
#include <string.h>

#include <arch.h>
#include <arch_features.h>
#include <arch_helpers.h>
#include <common/bl_common.h>
#include <common/debug.h>
#include <drivers/auth/auth_mod.h>
#include <drivers/auth/crypto_mod.h>
#include <drivers/io/io_storage.h>
#include <drivers/io/io_driver.h>
#include <drivers/io/io_block.h>
#include <drivers/io/io_mmc.h>
#include <libfdt.h>
#include <lib/utils.h>
#include <lib/xlat_tables/xlat_tables_defs.h>
#include <plat/common/platform.h>
#include <octeontx_common.h>
#include <octeontx_mmap_utils.h>
#include <plat_board_cfg.h>
#include <ehsm.h>
#include <ehsm-drv.h>
#include <spi_ops.h>
#include "libtim.h"

#undef DEBUG_IMAGE_LOAD

#ifdef DEBUG_IMAGE_LOAD
#define DBG	printf
#else
#define DBG(...) ((void) (0))
#endif

#define TIM_BLOCK_MAX_SIZE	0x4000

#define MMAP_IMAGE_BUF_EN	((uint32_t)1 << 31)
#define MMAP_ATTR(attr)		((uint32_t)attr & (MMAP_IMAGE_BUF_EN - 1))

static const io_dev_connector_t *emmc_dev_con;
static uintptr_t emmc_dev_handle;
static uintptr_t emmc_io_handle;
static io_block_dev_spec_t emmc_spec;

struct spi_image_info {
	int bus;
	int cs;
	uint32_t offset;
	uint32_t size;
	char *file;
};

struct emmc_image_info {
	uint32_t offset;
	uint32_t size;
	char *file;
	int bus;
	uint16_t rca;
	bool byte_mode;
	bool is_sd;
	bool v17_195;
	bool v27_36;
};

/* Buffer to read TIMs */
static __aligned(32) uint8_t tim_block_buf[TIM_BLOCK_MAX_SIZE];

static struct tim_handle tim_handle;
static struct tim_header_info tim_header_info;
static struct tim_load_info tim_load_info;

extern int spi_dev_read_aligned(uintptr_t user_buffer, size_t size,
			  size_t loc, int bus, int cs);
extern unsigned long spi_dev_read(uintptr_t efi_buf, uint64_t *efi_size,
		int loc, int bus, int cs);

extern int spi_dev_write(uintptr_t efi_buf, uint64_t efi_size,
			   int loc, int bus, int cs);

extern void emmc_set_initialized(bool initialized, uint16_t rca,
				 bool byte_mode, bool is_sd,
				 bool v17_195, bool v27_36);
#if defined(IMAGE_BL2)
/*******************************************************************************
 * Internal function to load an image at a specific address given
 * an image ID and extents of free memory.
 *
 * If the load is successful then the image information is updated.
 *
 * Returns 0 on success, a negative error code otherwise.
 ******************************************************************************/
static int load_image(unsigned int image_id, image_info_t *image_data)
{
	uintptr_t dev_handle;
	uintptr_t image_handle;
	uintptr_t image_spec;
	uintptr_t image_base;
	size_t image_size;
	size_t bytes_read;
	int io_result;

	assert(image_data != NULL);

	image_base = image_data->image_base;

	/* Obtain a reference to the image by querying the platform layer */
	io_result = plat_get_image_source(image_id, &dev_handle, &image_spec);
	if (io_result != 0) {
		WARN("Failed to obtain reference to image id=%u (%i)\n",
			image_id, io_result);
		return io_result;
	}

	/* Attempt to access the image */
	io_result = io_open(dev_handle, image_spec, &image_handle);
	if (io_result != 0) {
		WARN("Failed to access image id=%u (%i)\n",
			image_id, io_result);
		return io_result;
	}

	INFO("Loading image id=%u at address 0x%lx\n", image_id, image_base);

	/* Find the size of the image */
	io_result = io_size(image_handle, &image_size);
	if ((io_result != 0) || (image_size == 0U)) {
		WARN("Failed to determine the size of the image id=%u (%i)\n",
			image_id, io_result);
		goto exit;
	}

	/* Check that the image size to load is within limit */
	if (image_size > image_data->image_max_size) {
		WARN("Image id=%u size out of bounds\n", image_id);
		io_result = -EFBIG;
		goto exit;
	}

	/*
	 * image_data->image_max_size is a uint32_t so image_size will always
	 * fit in image_data->image_size.
	 */
	image_data->image_size = (uint32_t)image_size;

	io_result = io_read(image_handle, image_base, image_size, &bytes_read);
	if ((io_result != 0) || (bytes_read < image_size)) {
		WARN("Failed to load image id=%u (%i)\n", image_id, io_result);
		goto exit;
	}

	INFO("Image id=%u loaded: 0x%lx - 0x%lx\n", image_id, image_base,
	     (uintptr_t)(image_base + image_size));

exit:
	(void)io_close(image_handle);

	(void)io_dev_close(dev_handle);

	return io_result;
}
#endif

int parse_fw_address_size(const char *name, uint32_t *addr, uint32_t *size)
{
	const void *fdt = fdt_ptr;
	int ret;
	int r_offset, offset;
	const char *desc;
	const uint32_t *addr_size;
	int len = 0;

	ret = fdt_check_header(fdt);
	if (ret) {
		DBG("Invalid device tree\n");
		return ret;
	}
	r_offset = fdt_path_offset(fdt,
				   "/marvell,ebf/firmware-layout");
	if (r_offset < 0) {
		DBG("Could not find firmware-layout in device tree!\n");
		return r_offset;
	}

	for (offset = fdt_first_subnode(fdt, r_offset); offset >= 0;
	     offset = fdt_next_subnode(fdt, offset)) {
		desc = fdt_getprop(fdt, offset, "description", NULL);
		if (!desc) {
			DBG("Could not find description field in device tree\n");
			return -1;
		}
		if (strcmp(desc, name))
			continue;

		addr_size = fdt_getprop(fdt, offset, "reg", &len);
		if (!addr_size || len != 2 * sizeof(uint32_t)) {
			DBG("Could not obtain formware address and size for %s\n",
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
 * Function to load fimrware image from SPI flash.
 * spi_dev: Image information. Caller of the function fills the SPI
 *	bus number, CS and name of the image be loaded.
 * This function updates the SPI offset and size of the image in spi_dev
 */
static int spi_get_image_info(struct spi_image_info *spi_dev)
{
	int err = 0;

	spi_dev->offset  = spi_dev->size = 0;

	DBG("SPI: bus:0x%x cs:0x%x\n", spi_dev->bus, spi_dev->cs);

	err = parse_fw_address_size(spi_dev->file, &spi_dev->offset, &spi_dev->size);
	if (err) {
		DBG("File %s not found in device tree\n", spi_dev->file);
		return err;
	}
	DBG("%s %s %x %x\n", __func__, spi_dev->file, spi_dev->offset, spi_dev->size);
	return 0;
}

/*
 * Function to load fimrware image from SPI flash.
 * spi_dev: Image information. Caller of the function fills the SPI
 *	bus number, CS and name of the image, SPI offset and size to be loaded.
 * img_addr: DRAM address to be used to load the firmware image.
 * size: Updated by this function after successful load.
 * map_attr: Caller sets the map enable and attribute of the memory pointed by img_addr.
 *	If the img_addr is already mapped, map_attr should be zero.
 */
static int spi_load_fw_image(struct spi_image_info *spi_dev, uintptr_t img_addr, uint32_t *size, uint32_t map_attr)
{
	union tim_headers *hdr = (union tim_headers *)tim_block_buf;
	struct tim_header_info *hinfo = &tim_header_info;
	struct tim_handle *handle = &tim_handle;
	struct tim_load_info *tim_info = &tim_load_info;
	int err = 0;
	uint32_t map_required = MMAP_IMAGE_BUF_EN & map_attr;

	memset(hdr, 0, TIM_BLOCK_MAX_SIZE);

	DBG("SPI: bus:0x%x cs:0x%x 0x%llx 0x%x 0x%x\n", spi_dev->bus, spi_dev->cs, (uint64_t) img_addr, spi_dev->offset, spi_dev->size);

	if (map_required) {
		/* Map Non-secure memory buffer */
		if (octeontx_mmap_add_dynamic_region_with_sync(img_addr, img_addr,
						       spi_dev->size,
						       MMAP_ATTR(map_attr))) {
			DBG("Switch: mmap failed (%d)\n", err);
			return -SPI_MMAP_ERR;
		}
	}

	/* Read the TIM header */
	if (spi_dev_read_aligned((uintptr_t)hdr, (uint64_t) TIM_TIMH_SIZE, spi_dev->offset, spi_dev->bus, spi_dev->cs)) {
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
	DBG("%s %s %x %x\n", __func__, spi_dev->file, (uint32_t) TIM_TIMH_SIZE,
		      (uint32_t) hinfo.signed_tim_size);
	if (hinfo->signed_tim_size > TIM_BLOCK_MAX_SIZE) {
		ERROR("TIM size 0x%x exceeds maximum size 0x%x\n",
		      hinfo->signed_tim_size, TIM_BLOCK_MAX_SIZE);
		err = -1;
		goto err;
	}
	/* Read the rest of the TIM */
	if (spi_dev_read_aligned((uintptr_t)tim_block_buf + TIM_TIMH_SIZE,
			   (uint64_t) (hinfo->signed_tim_size - TIM_TIMH_SIZE),
			   spi_dev->offset + TIM_TIMH_SIZE, spi_dev->bus, spi_dev->cs)) {
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
	DBG("%s %s %llx %x\n", __func__, spi_dev->file, tim_info.src_address,
		      tim_info.image_length);

	spi_dev->offset += tim_info->src_address;
	/* Read the image */
	if (spi_dev_read_aligned(img_addr, tim_info->image_length,
				       spi_dev->offset, spi_dev->bus,
				       spi_dev->cs)) {
		err = -EIO;
		goto err;
	}

	err = ehsm_verify_image((const void *)img_addr, tim_info, NULL, NULL);
	if (err) {
		ERROR("Hash for %s mismatch\n", spi_dev->file);
		err = -EIO;
		goto err;
	}

	*size = tim_info->image_length;
err:
	memset(handle, 0, sizeof(*handle));
	memset(hinfo, 0, sizeof(*hinfo));
	memset(tim_info, 0, sizeof(*tim_info));

	if (map_required) {
		/* unmap non-secure memory buffer */
		octeontx_mmap_remove_dynamic_region_with_sync(img_addr,
							      spi_dev->size);
	}

	return err;
}

int load_image_from_boot_device_emmc(struct emmc_image_info *emmc_dev,
			     uintptr_t img_addr,
			     uint32_t *size, uint32_t map_attr)
{
	union tim_headers *hdr = (union tim_headers *)tim_block_buf;
	struct tim_header_info *hinfo = &tim_header_info;
	struct tim_handle *handle = &tim_handle;
	struct tim_load_info *tim_info = &tim_load_info;
	uint32_t map_required = MMAP_IMAGE_BUF_EN & map_attr;
	size_t bytes_read = 0;
	int ret;
	bool io_dev_opened = false;
	bool io_opened = false;

	if (size != NULL)
		*size = 0;
	if (map_required) {
		/* Map Non-secure memory buffer */
		if (octeontx_mmap_add_dynamic_region_with_sync(img_addr, img_addr,
							       emmc_dev->size,
							       MMAP_ATTR(map_attr))) {
			DBG("Switch: mmap failed (%d)\n", err);
			return -SPI_MMAP_ERR;
		}
	}
	if (emmc_dev_con == NULL) {
		ret = register_io_dev_emmc(&emmc_dev_con);
		if (ret != 0) {
			ERROR("Could not register eMMC device\n");
			goto error;
		}
	}
	emmc_set_initialized(true, emmc_dev->rca, emmc_dev->byte_mode, emmc_dev->is_sd,
			     emmc_dev->v17_195, emmc_dev->v27_36);

	ret = io_dev_open(emmc_dev_con, (uintptr_t)&emmc_spec, &emmc_dev_handle);
	if (ret != 0) {
		ERROR("Could not open EMMC device connector\n");
		goto error;
	}
	io_dev_opened = true;
	ret = io_dev_init(emmc_dev_handle, (uintptr_t)NULL);
	if (ret != 0) {
		ERROR("Could not initialize eMMC device\n");
		goto error;
	}
	ret = io_open(emmc_dev_handle, (uintptr_t)&emmc_spec,
		      &emmc_io_handle);
	if (ret != 0) {
		ERROR("Could not open eMMC device\n");
		goto error;
	}
	io_opened = true;
	ret = io_seek(emmc_io_handle, IO_SEEK_SET, emmc_dev->offset);
	if (ret) {
		ERROR("Could not seek to eMMC address 0x%x\n", emmc_dev->offset);
		goto error;
	};

	ret = io_read(emmc_io_handle, (uintptr_t)hdr, TIM_TIMH_SIZE, &bytes_read);
	if (ret != 0) {
		ERROR("Could not read from eMMC device\n");
		goto error;
	}
	ret = tim_get_timh_info(hdr, hinfo);
	if (ret != 0) {
		ERROR("Could not parse TIM header\n");
		goto error;
	}
	if (hinfo->signed_tim_size > TIM_BLOCK_MAX_SIZE) {
		ERROR("TIM size 0x%x exceeds maximum size 0x%x\n",
		      hinfo->signed_tim_size, TIM_BLOCK_MAX_SIZE);
		ret = -1;
		goto error;
	}
	ret = io_read(emmc_io_handle, (uintptr_t)tim_block_buf + TIM_TIMH_SIZE,
		      hinfo->signed_tim_size - TIM_TIMH_SIZE, &bytes_read);
	if (ret != 0) {
		ERROR("Could not read from eMMC device\n");
		goto error;
	}

	ret = tim_load(hdr, emmc_dev->offset, handle);
	if (ret != 0) {
		ERROR("Error %d parsing TIM\n", ret);
		goto error;
	}

	ret = tim_get_load_info(handle, tim_info);
	if (ret != TIM_NO_ERROR) {
		ERROR("Error %d getting TIM file information\n", ret);
		ret = -ENOENT;
		goto error;
	}
	if (!tim_info->lodi_parsed && !tim_info->litc_parsed) {
		ERROR("Could not find LODI or LITC block in TIM\n");
		ret = -ENOENT;
		goto error;
	}
	if (!tim_info->hshi_parsed) {
		ERROR("Could not find HSHI block in TIM\n");
		ret = -ENOENT;
		goto error;
	}
	ret = io_seek(emmc_io_handle, IO_SEEK_SET, (uint32_t)tim_get_file_src_address(tim_info));
	if (ret) {
		ERROR("Could not seek to address 0x%x\n",
		      (uint32_t)tim_get_file_src_address(tim_info));
		ret = -EIO;
		goto error;
	}
	ret = io_read(emmc_io_handle, img_addr, tim_get_file_size(tim_info), &bytes_read);
	if (ret != 0) {
		ERROR("Could not read object, 0x%lx bytes\n", tim_get_file_size(tim_info));
		ret = -EIO;
		goto error;
	}

	ret = ehsm_verify_image((const void *)img_addr, tim_info, NULL, NULL);
	if (ret != 0) {
		ERROR("Hash for %s mismatch\n", emmc_dev->file);
		ret = -EIO;
		goto error;
	}
	if (size != NULL)
		*size = tim_get_file_size(tim_info);
error:
	if (io_opened)
		io_close(emmc_io_handle);
	emmc_io_handle = 0;

	if (io_dev_opened)
		io_dev_close(emmc_dev_handle);
	emmc_dev_handle = 0;
	zeromem(handle, sizeof(*handle));
	zeromem(hinfo, sizeof(*hinfo));
	zeromem(tim_info, sizeof(*tim_info));

	if (map_required) {
		/* unmap non-secure memory buffer */
		octeontx_mmap_remove_dynamic_region_with_sync(img_addr,
							      emmc_dev->size);
	}
	return ret;
}

int load_image_from_boot_device_spi(struct spi_image_info spi_dev,
			     uintptr_t img_buf,
			     uint32_t *size, uint32_t map_attr)
{
	int err;
	uint32_t img_size = 0;

	/* Load image from SPI flash */
	err = spi_get_image_info(&spi_dev);
	if (err) {
		DBG("Failed to find image %s\n", spi_dev.file);
		return err;
	}

	err = spi_load_fw_image(&spi_dev, img_buf, &img_size, map_attr);

	if (size != NULL)
		*size = img_size;

	return err;
}

#if defined(IMAGE_BL2)
int load_gserx_images(void *gserm_buf, uint32_t *gserm_buf_size,
		     void *gserh_buf, uint32_t *gserh_buf_size)
{
	image_info_t gserx_image_data;
	int err = 0;

	memset((void *)&gserx_image_data, 0, sizeof(image_info_t));
	gserx_image_data.image_base = (uintptr_t) gserm_buf;
	gserx_image_data.image_size = 0;
	gserx_image_data.image_max_size = *gserm_buf_size;

	err = load_image(SOC_FW_CONFIG_ID, &gserx_image_data);
	if (err == 0) {
		flush_dcache_range(gserx_image_data.image_base,
				gserx_image_data.image_size);
		*gserm_buf_size = gserx_image_data.image_size;

		INFO("%s GSERM Image @0x%lx MaxBufSz 0x%x Image size 0x%x\n",
		       __func__, (unsigned long)gserm_buf, gserx_image_data.image_max_size, *gserm_buf_size);

	} else {
		ERROR("%s: failed to load GSERM Image\n", __func__);
		return err;
	}

	memset((void *)&gserx_image_data, 0, sizeof(image_info_t));
	gserx_image_data.image_base = (uintptr_t) gserh_buf;
	gserx_image_data.image_size = 0;
	gserx_image_data.image_max_size = *gserh_buf_size;

	err = load_image(FW_CONFIG_ID, &gserx_image_data);
	if (err == 0) {
		flush_dcache_range(gserx_image_data.image_base,
				gserx_image_data.image_size);
		*gserh_buf_size = gserx_image_data.image_size;

		INFO("%s GSERH Image @0x%lx MaxBufSz 0x%x Image size 0x%x\n",
		       __func__, (unsigned long)gserh_buf, gserx_image_data.image_max_size, *gserh_buf_size);

	} else {
		ERROR("%s: failed to load GSERH Image\n", __func__);
		return err;
	}

	return 0;
}
#endif

/*
 * Function to load firmwae from boot device image.
 */
int load_image_from_boot_device(uintptr_t img_buf, uint64_t *size,
		   uint64_t load_params, char *name, bool nsec)
{
	int err = 0;
	uint32_t img_size, attr;
	int boot_type = plat_octeontx_bcfg->bcfg.boot_dev.boot_type;

	if (nsec)
		attr = MMAP_IMAGE_BUF_EN | MT_RW | MT_NS;
	else
		attr = 0;


	if (boot_type == OCTEONTX_BOOT_SPI) {
		struct spi_image_info spi_dev;

		spi_dev.bus = plat_octeontx_bcfg->bcfg.boot_dev.controller;
		spi_dev.cs = plat_octeontx_bcfg->bcfg.boot_dev.cs;
		spi_dev.file = name;

		err = load_image_from_boot_device_spi(spi_dev, img_buf, &img_size, attr);
	} else if (boot_type == OCTEONTX_BOOT_EMMC) {
		struct emmc_image_info emmc_dev;
		uint32_t cs = (uint32_t)load_params;

		emmc_dev.bus = plat_octeontx_bcfg->bcfg.boot_dev.controller;
		emmc_dev.rca = cs & 0xffff;
		emmc_dev.byte_mode = !!(cs & (1 << 16));
		emmc_dev.is_sd = !!(cs & (1 << 17));
		emmc_dev.v17_195 = !!(cs & (1 << 18));
		emmc_dev.v27_36 = !!(cs & (1 << 20));
		emmc_dev.file = name;
		err = parse_fw_address_size(name, &emmc_dev.offset, &emmc_dev.size);
		if (err) {
			DBG("Failed to find %s image\n", emmc_dev.file);
			return err;
		}
		if (!(cs & (1U << 31))) {
			ERROR("%s: eMMC chip select value 0x%x not marked for eMMC!\n", __func__,
			      cs);
			return -EIO;
		}
		err = load_image_from_boot_device_emmc(&emmc_dev, img_buf, &img_size, attr);
	} else {
		WARN("Unsupported boot device: %d\n", boot_type);
		return -1;
	}

	if (err) {
		DBG("Failed to load efi app\n");
		return err;

	}
	*size = img_size;
	return 0;
}

/*
 * Function to load switch firmware.
 */
int load_switch_fw(uintptr_t super_img_buf, uintptr_t cm3_img_buf,
		      uint64_t *cm3_size, uint64_t load_params, bool nsec)
{
#define BUF_SIZE 20
	int err = 0;
	char name[BUF_SIZE];
	uint64_t img_size = 0;

	/* Load super image */
	snprintf(name, BUF_SIZE, "switch_fw_super.fw");

	err = load_image_from_boot_device(super_img_buf, &img_size,
					  load_params, name, nsec);

	if (err) {
		DBG("Failed to load Switch Super Image %s\n", name);
		return err;
	}

	/* Load cm3 image */
	snprintf(name, BUF_SIZE, "switch_fw_ap.fw");

	err = load_image_from_boot_device(cm3_img_buf, &img_size,
					  load_params, name, nsec);

	if (err) {
		DBG("Failed to load Switch CM3 Image %s\n", name);
		return err;
	}

	*cm3_size = img_size;

	return err;
}
