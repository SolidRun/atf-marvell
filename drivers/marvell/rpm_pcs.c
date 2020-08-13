/*
 * Copyright (C) 2020 Marvell International Ltd.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

/* RPM coniguration DB CN10K */

#include <arch.h>
#include <stdio.h>
#include <string.h>
#include <debug.h>
#include <drivers/delay_timer.h>
#include <platform_def.h>
#include <platform_dt.h>
#include <octeontx_common.h>
#include <plat_board_cfg.h>
#include <rpm.h>

/*
 * LMAC<->PCS100 mapping are as below:
 * LMAC 0 - PCS100 LANE 0
 * LMAC 1 : PCS100 LANE 1
 * LMAC 2 - PCS100 LANE 2
 * LMAC 3 : PCS100 LANE 3
 * These CSR values are from
 * HRM : Table 40-41 PCS_MODE Configuration
 */
static rpm_lmac_pcs_config_t pcs_config_10g[MAX_MTI_PCS_REG] = {
	{MTI_PCS100_VL0_0, 0x68C1},
	{MTI_PCS100_VL0_1, 0x21},
	{MTI_PCS100_VL1_0, 0xC4F0},
	{MTI_PCS100_VL1_1, 0xE6},
	{MTI_PCS100_VL2_0, 0x65C5},
	{MTI_PCS100_VL2_1, 0x9B},
	{MTI_PCS100_VL3_0, 0x79A2},
	{MTI_PCS100_VL3_1, 0x3D},
	/* PCS_MODE : Reset value  +
	 * set disable_mld bit 1
	 */
	{MTI_PCS100_VENDOR_PCS_MODE, 0x301},
};

static rpm_lmac_pcs_config_t pcs_config_25g[MAX_MTI_PCS_REG] = {
	{MTI_PCS100_VL0_0, 0x68C1},
	{MTI_PCS100_VL0_1, 0x21},
	{MTI_PCS100_VL1_0, 0xC4F0},
	{MTI_PCS100_VL1_1, 0xE6},
	{MTI_PCS100_VL2_0, 0x65C5},
	{MTI_PCS100_VL2_1, 0x9B},
	{MTI_PCS100_VL3_0, 0x79A2},
	{MTI_PCS100_VL3_1, 0x3D},
	/* PCS_MODE : Reset value  +
	 * set disable_mld bit 1 +
	 * set hi_ber25 bit 1 +
	 * set ena_clause49 bit 1
	 */
	{MTI_PCS100_VENDOR_PCS_MODE, 0x307},
	/* PCS VL_INTVL i: set the marker_counter */
	{MTI_PCS100_VENDOR_VL_INTVL, 0x4FFF},
};

rpm_lmac_pcs_config_t *rpm_obtain_pcs_config_per_mode(int mode)
{
	rpm_lmac_pcs_config_t *lmac_pcs = NULL;

	switch (mode) {
	case CAVM_RPM_LMAC_TYPES_E_TENG_R:
		lmac_pcs = &pcs_config_10g[0];
	break;
	case CAVM_RPM_LMAC_TYPES_E_TWENTYFIVEG_R:
		lmac_pcs = &pcs_config_25g[0];
	break;
	default:
		/* FIXME : for other modes */
	break;
	}
	return lmac_pcs;
}
