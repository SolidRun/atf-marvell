/*
 * Copyright (C) 2019 Marvell International Ltd.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#include <stdlib.h>
#include <octeontx_common.h>
#include <qlm/qlm_cn10k.h>

#include "cavm-csrs-rpm.h"

static const struct gserm_mode_strmap_s gsermmode_strmap[] = {
	/* These modes are defined to have a 1 to 1 reflection from the
	 * QLM/LANE mode to the array index.
	 */
	{-1, 0, "DISABLED", NULL},
	/* RPM/LMAC types. */
	{CAVM_RPM_LMAC_TYPES_E_SGMII, 1250, "1G_X", "sgmii"},
	{CAVM_RPM_LMAC_TYPES_E_TENG_R, 10312, "XFI", "10g"},
	{CAVM_RPM_LMAC_TYPES_E_TENG_R, 10312, "SFI", "10g"},
	{CAVM_RPM_LMAC_TYPES_E_TWENTYFIVEG_R, 25781, "25GAUI_C2C", "25g"},
	{CAVM_RPM_LMAC_TYPES_E_TWENTYFIVEG_R, 25781, "25GAUI_C2M", "25g"},
	{-1, 0, NULL, NULL}
};

const struct gserm_mode_strmap_s gserm_get_mode_strmap(int gserm_mode)
{
	return gsermmode_strmap[gserm_mode];
}

