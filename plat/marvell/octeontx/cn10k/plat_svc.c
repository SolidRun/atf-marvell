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
#include <cgx.h>
#include <spi.h>
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
	uintptr_t size, user_buf;
	uint64_t bus = 0, cs = 0, dram_end = 0;
	int ret = 0;

	switch (smc_fid) {
	case PLAT_OCTEONTX_DISABLE_RVU_LFS:
		ret = octeontx_clear_lf_to_pf_mapping();
		SMC_RET1(handle, ret);
		break;

	case PLAT_OCTEONTX_SPI_SECURE_UPDATE:
		user_buf = x1;
		size = x2;
		bus = x3;
		cs = x4;

		/* Check if NS user_buf is a valid DRAM address */
		if (NULL == (void *)user_buf) {
			ret = -1;
			goto err;
		}

		dram_end = octeontx_dram_size();
		/* Sanity check */
		if ((user_buf < NS_IMAGE_BASE) ||
			(user_buf > dram_end - 1) ||
			(bus > MAX_SPI_BUS) ||
			(cs > MAX_SPI_CS) ||
			(size == 0) ||
			(plat_octeontx_bcfg->spi_cfg[bus].is_secure != 1)
			(plat_octeontx_bcfg->spi_cfg[bus].cs[cs] != 1)) {
			WARN("secure_spi: Invalid parameters\n");
			ret = -1;
			goto err;
		}

		/* Perform SPI update */
		ret = spi_secure_update(user_buf, size, bus, cs);
err:
		SMC_RET1(handle, ret);
		break;

	default:
		return cn10k_svc_smc_handler(smc_fid, x1, x2, x3, x4,
					    cookie, handle, flags);
	}
}
