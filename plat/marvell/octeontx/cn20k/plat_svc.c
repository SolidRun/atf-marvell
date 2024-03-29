/*
 * Copyright (c) 2024 Marvell.
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <debug.h>
#include <runtime_svc.h>
#include <octeontx_svc.h>
#include <platform_svc.h>
#include <octeontx_common.h>
#include <stdint.h>
#include <platform_def.h>

WEAK uintptr_t svc_smc_handler(uint32_t smc_fid,
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
	VERBOSE("%s: smc_fid = 0x%x\n", __func__, smc_fid);

	switch (smc_fid) {

	case PLAT_OCTEONTX_GET_FWDATA_BASE:
		SMC_RET3(handle, 0, SH_FWDATA_BASE, SH_FWDATA_SIZE);
		break;

	default:
		return svc_smc_handler(smc_fid, x1, x2, x3, x4,
					    cookie, handle, flags);
	}

	return 0;
}
