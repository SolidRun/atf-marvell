/*
 * Copyright (c) 2024 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#include <debug.h>
#include <runtime_svc.h>
#include <octeontx_svc.h>
#include <platform_svc.h>
#include <octeontx_common.h>
#include <stdint.h>
#include <plat_scmi.h>
#include <spi_ops.h>
#include <platform_def.h>
#include <spinlock.h>
#include <plat_board_cfg.h>
#include <octeontx_semaphore.h>
#include <smccc_helpers.h>
#include <fw_load.h>

#include "cavm-csrs-gpio.h"

#define NSEC_BUF	1

extern void *scmi_handle;

octeontx_ctr_sem_t octeontx_smc_spi_lock[MAX_SPI_BUS];

WEAK uintptr_t cn20k_svc_smc_handler(uint32_t smc_fid,
				    u_register_t x1,
				    u_register_t x2,
				    u_register_t x3,
				    u_register_t x4,
				    void *cookie,
				    void *handle,
				    u_register_t flags)
{
	WARN("Unimplemented OcteonTX Service Call: 0x%x\n", smc_fid);
	SMC_RET1(handle, SMC_UNK);
}

int get_efivar_spi_bus(void)
{
	int found = 0, bus, i, j;

	for (i = 0; i < MAX_SPI_BUS; i++) {
		for (j = 0; j < MAX_SPI_CS; j++) {
			if (plat_octeontx_bcfg->spi_cfg[i].has_efivar &&
			    plat_octeontx_bcfg->spi_cfg[i].cs[j]) {
				found = 1;
				bus = i;
				break;
			}
		}
	}

	if (found)
		return bus;

	return -1;
}

uintptr_t plat_octeontx_svc_smc_handler(uint32_t smc_fid,
					u_register_t x1,
					u_register_t x2,
					u_register_t x3,
					u_register_t x4,
					void *cookie,
					void *handle,
					u_register_t flags)
{
	uintptr_t user_buf;
	uint64_t img_size = 0;
	int ret = 0;

	VERBOSE("%s: smc_fid = 0x%x\n", __func__, smc_fid);

	switch (smc_fid) {
	case PLAT_OCTEONTX_FLSF_FW_BOOTED:
		ret = scmi_octeontx_flsf_fw_booted(scmi_handle);
		SMC_RET1(handle, ret);
		break;

	case PLAT_OCTEONTX_FLSF_CLEAR_FORCE_2NDRY:
		ret = scmi_octeontx_flsf_clear_force_2ndry(scmi_handle);
		SMC_RET1(handle, ret);
		break;

	case PLAT_OCTEONTX_LOAD_SWITCH_FW:
	{
		uintptr_t user_buf1;
		uint64_t load_params;
		user_buf = x1;
		user_buf1 = x2;
		load_params = x3;

		/* Check if NS user_buf is a valid DRAM address */
		if ((NULL == (void *)user_buf) || (NULL == (void *)user_buf1)) {
			ret = -1;
			goto err1;
		}

		/* Perform Switch firmware load */
		ret = load_switch_fw(user_buf, user_buf1, &img_size,
					load_params, NSEC_BUF);

err1:
		SMC_RET2(handle, ret, img_size);
		break;
	}
	case PLAT_OCTEONTX_LOAD_EFI_APP:
	{
		uint64_t efi_params = 0;

		int spi_bus = plat_octeontx_bcfg->bcfg.boot_dev.controller;

		user_buf = x1;
		efi_params = x2;
		if (octeontx_ctr_sem_try_lock_timeout(&octeontx_smc_spi_lock[spi_bus], 1000) != 0) {
			ret = -2;
		} else {
			/* Check if NS user_buf is a valid DRAM address */
			if (NULL == (void *)user_buf) {
				ret = -1;
			} else {
				/* Perform EFI App load */
				ret = load_image_from_boot_device(user_buf,
					    &img_size, efi_params,
					    "efi_app1.efi", NSEC_BUF);
			}
			octeontx_ctr_sem_unlock(&octeontx_smc_spi_lock[spi_bus]);
		}
		SMC_RET2(handle, ret, img_size);
		break;
	}
	case PLAT_OCTEONTX_WRITE_EFI_VAR:
	{
		user_buf = x1;
		img_size = x2;

		int bus = get_efivar_spi_bus();

		if (bus < 0) {
			WARN("%s: EFI variable flash unknown, check device tree\n",
		     __func__);
		     SMC_RET1(handle, -1);
		}

		if (octeontx_ctr_sem_try_lock_timeout(&octeontx_smc_spi_lock[bus], 1000) != 0) {
			ret = -2;
		} else {
			/* Check if NS user_buf is a valid DRAM address */
			if (NULL == (void *)user_buf) {
				ret = -1;
			} else {
				/* Perform EFI variable store write to SPI-NOR */
				ret = spi_write_efi_var(user_buf, img_size);
			}
			octeontx_ctr_sem_unlock(&octeontx_smc_spi_lock[bus]);
		}
		SMC_RET1(handle, ret);
		break;
	}

	case PLAT_OCTEONTX_READ_EFI_VAR:
	{
		user_buf = x1;
		img_size = x2;

		int bus = get_efivar_spi_bus();

		if (bus < 0) {
			WARN("%s: EFI variable flash unknown, check device tree\n",
		     __func__);
		     SMC_RET1(handle, -1);
		}

		if (octeontx_ctr_sem_try_lock_timeout(&octeontx_smc_spi_lock[bus], 1000) != 0) {
			ret = -2;
		} else {
			/* Check if NS user_buf is a valid DRAM address */
			if (NULL == (void *)user_buf) {
				ret = -1;
			} else {
				/* Perform EFI variable store read from SPI-NOR */
				ret = spi_read_efi_var(user_buf, &img_size);
			}
			octeontx_ctr_sem_unlock(&octeontx_smc_spi_lock[bus]);
		}
		SMC_RET2(handle, ret, img_size);
		break;
	}
	case PLAT_OCTEONTX_RVU_RSVD_REG_INFO:
		uint64_t reg_addr = 0, reg_size = 0;
		//spin_lock(&octeontx_smc_rvu_lock);
		ret = rvu_rsvd_region_info(&reg_addr, &reg_size);
		//spin_unlock(&octeontx_smc_rvu_lock);
		SMC_RET3(handle, ret, reg_addr, reg_size);
		break;

	default:
		return cn20k_svc_smc_handler(smc_fid, x1, x2, x3, x4,
					    cookie, handle, flags);
		break;

	}

	return ret;
}

