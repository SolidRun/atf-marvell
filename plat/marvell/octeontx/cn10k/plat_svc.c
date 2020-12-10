/*
 * Copyright (C) 2020 Marvell International Ltd.
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
#include <tools_share/uuid.h>
#include <rvu.h>
#include <plat_board_cfg.h>
#include <plat_scmi.h>
#include <tim_update.h>
#include <spi_smc_load.h>
#include <octeontx_dram.h>

extern void *scmi_handle;

WEAK uintptr_t cn10k_svc_smc_handler(uint32_t smc_fid,
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

uintptr_t plat_octeontx_svc_smc_handler(uint32_t smc_fid,
					u_register_t x1,
					u_register_t x2,
					u_register_t x3,
					u_register_t x4,
					void *cookie,
					void *handle,
					u_register_t flags)
{
	uintptr_t size, user_buf, user_buf1;
	uint64_t dram_end = 0, img_size = 0;
	uint64_t reg_addr = 0, reg_size = 0;
	int ret = 0;

	switch (smc_fid) {
	case PLAT_OCTEONTX_DISABLE_RVU_LFS:
		ret = octeontx_clear_lf_to_pf_mapping();
		SMC_RET1(handle, ret);
		break;

	case PLAT_OCTEONTX_RVU_RSVD_REG_INFO:
		ret = rvu_rsvd_region_info(&reg_addr, &reg_size);
		SMC_RET3(handle, ret, reg_addr, reg_size);
		break;

	case PLAT_OCTEONTX_LOAD_EFI_APP:
		user_buf = x1;

		/* Check if NS user_buf is a valid DRAM address */
		if (NULL == (void *)user_buf) {
			ret = -1;
		} else {
			/* Perform EFI App load */
			ret = spi_smc_load_efi_image(user_buf, &img_size,
						     1);
		}
		SMC_RET2(handle, ret, img_size);
		break;

	case PLAT_OCTEONTX_LOAD_SWITCH_FW:
		user_buf = x1;
		user_buf1 = x2;

		/* Check if NS user_buf is a valid DRAM address */
		if ((NULL == (void *)user_buf) ||
		    (NULL == (void *)user_buf1)) {
			ret = -1;
			goto err1;
		}

		/* Perform Switch firmware load */
		ret = spi_smc_load_switch_fw(user_buf, user_buf1, &img_size);
err1:
		SMC_RET2(handle, ret, img_size);
		break;

	case PLAT_OCTEONTX_SPI_SECURE_UPDATE:
		user_buf = x1;
		size = x2;

		/* Check if NS user_buf is a valid DRAM address */
		if (NULL == (void *)user_buf) {
			ret = -1;
			goto err;
		}

		dram_end = octeontx_dram_size();
		/*
		 * Sanity check
		 *
		 * NOTE: the size check may need to change for future versions
		 */
		if ((user_buf < NS_IMAGE_BASE) ||
		    (user_buf > (dram_end - 1)) ||
		    ((user_buf + size) > (dram_end - 1)) ||
		    (size != sizeof(struct smc_update_descriptor))) {
			ERROR("Invalid descriptor address or size\n");
			ret = -1;
			goto err;
		}
		ret = spi_smc_update(user_buf, size, dram_end);

err:
		SMC_RET1(handle, ret);
		break;

	default:
		return cn10k_svc_smc_handler(smc_fid, x1, x2, x3, x4,
					    cookie, handle, flags);
	}
}
