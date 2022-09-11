/*
 * Copyright (c) 2015, ARM Limited and Contributors. All rights reserved.
 * Copyright (c) 2016 Marvell. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * Redistributions of source code must retain the above copyright notice, this
 * list of conditions and the following disclaimer.
 *
 * Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * Neither the name of ARM nor the names of its contributors may be used
 * to endorse or promote products derived from this software without specific
 * prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */
#include <assert.h>
#include <bl_common.h>		/* For ARRAY_SIZE */
#include <debug.h>
#include <tools_share/firmware_image_package.h>
#include <drivers/io/io_driver.h>
#include <drivers/io/io_spi.h>
#include <drivers/io/io_mmc.h>
#include <drivers/io/io_memmap.h>
#include <drivers/io/io_storage.h>
#include <drivers/io/io_dummy.h>
#include <platform_def.h>
#include <string.h>
#include <octeontx_common.h>
#include <octeontx_utils.h>
#include <plat_board_cfg.h>
#include <plat_tim.h>
#include <spi.h>
#include <strncasecmp.h>

#include <cavm-arch.h>
#include <octeontx_io_storage.h>

#define FIP_NAME "fip.bin"
#define ROMFS_NAME "ROM-FS"

/* IO devices */
static const io_dev_connector_t *bl31_dev_con;
static uintptr_t bl31_dev_handle;
static const io_dev_connector_t *soc_fw_dev_con;
static uintptr_t soc_fw_dev_handle;
#ifdef NT_FW_CONFIG
static const io_dev_connector_t *nt_fw_dev_con;
static uintptr_t nt_fw_dev_handle;
#endif
static const io_dev_connector_t *bl33_dev_con;
static uintptr_t bl33_dev_handle;
static const io_dev_connector_t *spi_dev_con;
static uintptr_t spi_dev_handle;
static const io_dev_connector_t *emmc_dev_con;
static uintptr_t emmc_dev_handle;
//static const io_dev_connector_t *memmap_dev_con;

static const io_uuid_spec_t bl31_uuid_spec = {
	.uuid = UUID_EL3_RUNTIME_FIRMWARE_BL31,
};

static const io_uuid_spec_t bl33_uuid_spec = {
	.uuid = UUID_NON_TRUSTED_FIRMWARE_BL33,
};

static const io_uuid_spec_t soc_fw_config_uuid_spec = {
	.uuid = UUID_SOC_FW_CONFIG,
};

#if defined(NT_FW_CONFIG)
static const io_uuid_spec_t nt_fw_config_uuid_spec = {
	.uuid = UUID_NT_FW_CONFIG,
};
#endif /* NT_FW_CONFIG */

static int spi_boot_try;

static const int spi_boot_method[] = {
	0,				/* Use native mode */
	SPI_FORCE_X1_READ,		/* Disable QuadSPI read */
	SPI_FORCE_LEGACY_MODE		/* Force legacy mode */
};

static int open_bl31_image(const uintptr_t spec);
static int open_bl33_image(const uintptr_t spec);
static int open_soc_fw_image(const uintptr_t spec);
#ifdef NT_FW_CONFIG
static int open_nt_fw_image(const uintptr_t spec);
#endif

struct plat_io_policy {
	uintptr_t *dev_handle;
	uintptr_t image_spec;
	const char *filename;
	tim_spec_info_t *tspec;
	int (*check)(const uintptr_t spec);
};

static tim_spec_info_t tim_specs[TIM_NUM_SPECS];

/* By default, ARM platforms load images from the FIP. Now, it is changed
 * to non-FIP format
 */
static const struct plat_io_policy policies[] = {
	[BL31_IMAGE_ID] = {
		&bl31_dev_handle,
		(uintptr_t)&bl31_uuid_spec,
		"bl31.bin",
		&tim_specs[TIM_SPEC_BL31],
		open_bl31_image,
	},
	[BL33_IMAGE_ID] = {
		&bl33_dev_handle,
		(uintptr_t)&bl33_uuid_spec,
#if defined(BUILD_UEFI)
		"uefi.bin",
#else
		"u-boot-nodtb.bin",
#endif
		&tim_specs[TIM_SPEC_BL33],
		open_bl33_image,
	},
	[SOC_FW_CONFIG_ID] = {
		&soc_fw_dev_handle,
		(uintptr_t)&soc_fw_config_uuid_spec,
		"gserm-cn10xx.fw",
		&tim_specs[TIM_SPEC_SOC_FW_CONFIG],
		open_soc_fw_image,
	},
#if defined(NT_FW_CONFIG)
	[NT_FW_CONFIG_ID] = {
		&nt_fw_dev_handle,
		(uintptr_t)&nt_fw_config_uuid_spec,
		"npc_mkex-cn10xx.fw",
		&tim_specs[TIM_SPEC_NT_FW_CONFIG],
		open_nt_fw_image,
	},
#endif /* NT_FW_CONFIG */
};

static int open_bl31_image(const uintptr_t spec)
{
	return io_dev_init(bl31_dev_handle, 0);
}

static int open_bl33_image(const uintptr_t spec)
{
	return io_dev_init(bl33_dev_handle, 0);
}

static int open_soc_fw_image(const uintptr_t spec)
{
	return io_dev_init(soc_fw_dev_handle, 0);
}

#ifdef NT_FW_CONFIG
static int open_nt_fw_image(const uintptr_t spec)
{
	return io_dev_init(nt_fw_dev_handle, 0);
}
#endif

static int open_spi(const uintptr_t spec)
{
	int result;
	uintptr_t local_image_handle;

	result = io_dev_init(spi_dev_handle,
		(uintptr_t)&(spi_boot_method[spi_boot_try]));
	if (result == 0) {
		result = io_open(spi_dev_handle, spec, &local_image_handle);
		if (result == 0) {
			VERBOSE("Using SPI\n");
			io_close(local_image_handle);
		}
	}

	return result;
}


static int open_emmc(const uintptr_t spec)
{
	int result;
	uintptr_t local_image_handle;

	result = io_dev_init(emmc_dev_handle, (uintptr_t)NULL);
	if (result == 0) {
		result = io_open(emmc_dev_handle, spec, &local_image_handle);
		if (result == 0) {
			VERBOSE("Using (e)MMC\n");
			io_close(local_image_handle);
		}
	}
	return result;
}

static const char *spi_boot_method_to_string(int method)
{
	switch (method) {
	case 0:
		return "X4";
	case SPI_FORCE_X1_READ:
		return "X1";
	case SPI_FORCE_LEGACY_MODE:
		return "legacy";
	default:
		return "unknown";
	}
}

int plat_try_next_boot_source(void)
{
	const char *method;

	switch (plat_octeontx_bcfg->bcfg.boot_dev.boot_type) {
	case OCTEONTX_BOOT_SPI:
		method = spi_boot_method_to_string(
			spi_boot_method[spi_boot_try]);
		NOTICE("Could not load image using SPI in %s mode\n",
				method);
		spi_boot_try++;
		if (spi_boot_try < ARRAY_SIZE(spi_boot_method)) {
			method = spi_boot_method_to_string(
					spi_boot_method[spi_boot_try]);
			NOTICE("Try SPI %s mode\n", method);
			return 1;
		}
	}

	return 0;
}

void octeontx_io_setup(void)
{
	int io_result;

	io_result = register_io_dev_dummy(&bl31_dev_con);
	assert(io_result == 0);

	io_result = register_io_dev_dummy(&soc_fw_dev_con);
	assert(io_result == 0);

#ifdef NT_FW_CONFIG
	io_result = register_io_dev_dummy(&nt_fw_dev_con);
	assert(io_result == 0);
#endif
	io_result = register_io_dev_dummy(&bl33_dev_con);
	assert(io_result == 0);

	io_result = register_io_dev_spi(&spi_dev_con);
	assert(io_result == 0);

	io_result = register_io_dev_emmc(&emmc_dev_con);
	assert(io_result == 0);

	io_result = io_dev_open(bl31_dev_con, (uintptr_t)NULL,
				&bl31_dev_handle);
	assert(io_result == 0);

	io_result = io_dev_open(soc_fw_dev_con, (uintptr_t)NULL,
				&soc_fw_dev_handle);
	assert(io_result == 0);
#ifdef NT_FW_CONFIG
	io_result = io_dev_open(nt_fw_dev_con, (uintptr_t)NULL,
				&nt_fw_dev_handle);
	assert(io_result == 0);
#endif
	io_result = io_dev_open(bl33_dev_con, (uintptr_t)NULL,
				&bl33_dev_handle);
	assert(io_result == 0);

	io_result = io_dev_open(spi_dev_con, (uintptr_t)NULL,
				&spi_dev_handle);
	assert(io_result == 0);

	io_result = io_dev_open(emmc_dev_con, (uintptr_t)NULL,
				&emmc_dev_handle);
	assert(io_result == 0);

	/* Ignore improbable errors in release builds */
	(void)io_result;
}

/* Return an IO device handle and specification which can be used to access
 * an image. Use this to enforce platform load policy
 */
int plat_get_image_source(unsigned int image_id, uintptr_t *dev_handle,
			  uintptr_t *image_spec)
{
	const char *medium;
	int (*check)(const uintptr_t spec);
	uintptr_t handle;
	/* Temp spec to probe IO medium */
	io_block_spec_t spec = {
		.offset	= 0x361100,
		.length = 0xF000,
	};
	int boot_type;
	int result;
	const struct plat_io_policy *policy;

	assert(image_id < ARRAY_SIZE(policies));

	if (image_id == FIP_IMAGE_ID) {
		ERROR("%s: Image ID is FIP_IMAGE_ID\n", __func__);
		return -ENOENT;
	}

	policy = &policies[image_id];
	result = policy->check(policy->image_spec);

	/* Check for boot type */
	boot_type = plat_octeontx_bcfg->bcfg.boot_dev.boot_type;
	switch (boot_type) {
	case OCTEONTX_BOOT_SPI:
		handle = spi_dev_handle;
		check = open_spi;
		medium = "SPI";
		break;
	case OCTEONTX_BOOT_EMMC:
		handle = emmc_dev_handle;
		check = open_emmc;
		medium = "MMC";
		break;
	default:
		ERROR("Boot medium: 0x%02x is not supported!\n", boot_type);
		while (1)
			;
	}
	result = check((uintptr_t)&spec);
	if (result) {
		ERROR("Boot Medium %s not accesible\n", medium);
		result = -ENOENT;
	}

	/* Read TIM from Source device */
	result = plat_read_tim(boot_type, image_id, handle, image_spec);
	if (result) {
		WARN("Reading TIM returned %d\n", result);
		return -ENOENT;
	}
	*dev_handle = handle;
	return result;
}
