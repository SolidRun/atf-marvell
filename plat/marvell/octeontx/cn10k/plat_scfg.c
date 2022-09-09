/*
 * Copyright (c) 2020 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#include <octeontx_common.h>
#include <platform_setup.h>
#include <platform_dt.h>
#include <plat_scfg.h>
#include <octeontx_scfg_setup.h>
#include <plat_cn10k_configuration.h>
#include <assert.h>

static void fill_portm_max_lane_cnt(void)
{
	int portm_idx;

	for (portm_idx = 0; portm_idx < plat_octeontx_scfg->portm_count; portm_idx++) {
		plat_octeontx_scfg->portm_max_lane_cnt[portm_idx] = plat_portm_get_max_lane_cnt(portm_idx);
	}
}

static void fill_qlm_max_lane_num(void)
{
	int qlm;

	for (qlm = 0; qlm < plat_octeontx_scfg->gserm_count; qlm++) {
		plat_octeontx_scfg->qlm_max_lane_num[qlm] = plat_get_max_lane_num(qlm);
	}
}

static void fill_refclk_gserm_term(void)
{
	int refclk_idx;

	for (refclk_idx = 0; refclk_idx < MAX_REFCLK; refclk_idx++) {
		plat_octeontx_scfg->refclk_term_gserm_num[refclk_idx] = plat_get_refclk_term_gserm_num(refclk_idx);
	}
}

int plat_octeontx_fill_soc_details(void)
{
	plat_octeontx_scfg->iobn_count = plat_octeontx_get_iobn_count();
	plat_octeontx_scfg->rpm_count = plat_octeontx_get_rpm_count();
	assert(plat_octeontx_scfg->rpm_count <= MAX_RPM);
	plat_octeontx_scfg->gserm_count = plat_octeontx_get_gserm_count();
	plat_octeontx_scfg->portm_count = plat_octeontx_get_portm_count();
	plat_octeontx_scfg->mcc_count = plat_octeontx_get_mcc_count();
	plat_octeontx_scfg->nix_count = plat_octeontx_get_nix_count();
	fill_qlm_max_lane_num();
	fill_portm_max_lane_cnt();
	fill_refclk_gserm_term();

	return 0;
}
