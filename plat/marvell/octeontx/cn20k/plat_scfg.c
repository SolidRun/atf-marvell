/*
 * Copyright (c) 2023 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#include <octeontx_common.h>
#include <platform_setup.h>
#include <platform_dt.h>
#include <plat_scfg.h>
#include <octeontx_scfg_setup.h>
#include <plat_cn20k_configuration.h>
#include <assert.h>

int plat_octeontx_fill_soc_details(void)
{
	plat_octeontx_scfg->iobn_count = plat_octeontx_get_iobn_count();
	plat_octeontx_scfg->mcc_count = plat_octeontx_get_mcc_count(); /* FIXME */

	return 0;
}
