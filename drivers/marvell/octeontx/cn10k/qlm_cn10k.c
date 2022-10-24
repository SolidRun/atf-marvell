/*
 * Copyright (c) 2020 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its
 * contributors may be used to endorse or promote products derived from this
 * software without specific prior written permission.
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
 *
 */

#include <stdlib.h>
#include <octeontx_common.h>
#include <qlm_cn10k.h>

#include "rpm.h"
#include "cavm-csrs-rpm.h"

static const struct gserm_mode_strmap_s gsermmode_strmap[] = {
	/* These modes are defined to have a 1 to 1 reflection from the
	 * PORTM mode cn10k_portm_modes_t "include/plat/marvell/octeontx/cn10k/plat_portm_cfg.h"
	 * to the array index.
	 */
	{-1, 0, "DISABLED", NULL}, /* 0 */
	{-1, 0, "INVALID", NULL},
	{-1, 0, "INACTIVE", NULL},
	/* RPM/LMAC types. */
	{CAVM_RPM_LMAC_TYPES_E_SGMII, 1250, "SGMII", "sgmii"},
	{CAVM_RPM_LMAC_TYPES_E_SGMII, 1250, "1000BASE_X", "sgmii"},
	{CAVM_RPM_LMAC_TYPES_E_SGMII, 1250, "SFI_1G", "sgmii"},     /* 5 */
	{CAVM_RPM_LMAC_TYPES_E_QSGMII, 5000, "QSGMII", "qsgmii"},
	{CAVM_RPM_LMAC_TYPES_E_TENG_R, 10312, "XFI", "10g"},
	{CAVM_RPM_LMAC_TYPES_E_TENG_R, 10312, "SFI", "10g"},
	{CAVM_RPM_LMAC_TYPES_E_TENG_R, 10312, "10G_KR", "10g"},
	{CAVM_RPM_LMAC_TYPES_E_TWENTYFIVEG_R, 25781, "25GAUI_C2C", "25g"}, /* 10 */
	{CAVM_RPM_LMAC_TYPES_E_TWENTYFIVEG_R, 25781, "25GAUI_C2M", "25g"},
	{CAVM_RPM_LMAC_TYPES_E_TWENTYFIVEG_R, 25781, "25GAUI_CR", "25g"},
	{CAVM_RPM_LMAC_TYPES_E_TWENTYFIVEG_R, 25781, "25GAUI_KR", "25g"},
	{CAVM_RPM_LMAC_TYPES_E_TWENTYFIVEG_R, 25781, "25GAUI_CR_C", "25g"},
	{CAVM_RPM_LMAC_TYPES_E_TWENTYFIVEG_R, 25781, "25GAUI_KR_C", "25g"}, /* 15 */
	{CAVM_RPM_LMAC_TYPES_E_FORTYG_R, 10312, "XLAUI", "40g"},
	{CAVM_RPM_LMAC_TYPES_E_FORTYG_R, 10312, "XLAUI_C2M", "40g"},
	{CAVM_RPM_LMAC_TYPES_E_FORTYG_R, 10312, "40GBASE_CR4", "40g"},
	{CAVM_RPM_LMAC_TYPES_E_FORTYG_R, 10312, "40GBASE_KR4", "40g"},
	{CAVM_RPM_LMAC_TYPES_E_FIFTYG_R, 25781, "LAUI_2_C2C", "50g"},   /* 20 */
	{CAVM_RPM_LMAC_TYPES_E_FIFTYG_R, 25781, "LAUI_2_C2M", "50g"},
	{CAVM_RPM_LMAC_TYPES_E_FIFTYG_R, 25781, "50GBASE_CR2_C", "50g"},
	{CAVM_RPM_LMAC_TYPES_E_FIFTYG_R, 25781, "50GBASE_KR2_C", "50g"},
	{CAVM_RPM_LMAC_TYPES_E_FIFTYG_R, 51510, "50GAUI_1_C2C", "50g"},
	{CAVM_RPM_LMAC_TYPES_E_FIFTYG_R, 51510, "50GAUI_1_C2M", "50g"}, /* 25 */
	{CAVM_RPM_LMAC_TYPES_E_FIFTYG_R, 51510, "50GBASE_USR", "50g"},
	{CAVM_RPM_LMAC_TYPES_E_FIFTYG_R, 51510, "50GBASE_CR", "50g"},
	{CAVM_RPM_LMAC_TYPES_E_FIFTYG_R, 51510, "50GBASE_KR", "50g"},
	{CAVM_RPM_LMAC_TYPES_E_HUNDREDG_R, 25781, "CAUI_4_C2C", "100g"},
	{CAVM_RPM_LMAC_TYPES_E_HUNDREDG_R, 25781, "CAUI_4_C2M", "100g"},   /* 30 */
	{CAVM_RPM_LMAC_TYPES_E_HUNDREDG_R, 25781, "100GBASE_CR4", "100g"},
	{CAVM_RPM_LMAC_TYPES_E_HUNDREDG_R, 25781, "100GBASE_KR4", "100g"},
	{CAVM_RPM_LMAC_TYPES_E_HUNDREDG_R, 51510, "100GAUI_2_C2C", "100g"},
	{CAVM_RPM_LMAC_TYPES_E_HUNDREDG_R, 51510, "100GAUI_2_C2M", "100g"},
	{CAVM_RPM_LMAC_TYPES_E_HUNDREDG_R, 51510, "100GBASE_USR2", "100g"}, /* 35 */
	{CAVM_RPM_LMAC_TYPES_E_HUNDREDG_R, 51510, "100GBASE_CR2", "100g"},
	{CAVM_RPM_LMAC_TYPES_E_HUNDREDG_R, 51510, "100GBASE_KR2", "100g"},
	{-1, 0, NULL, NULL}, /* 802.3AP */
	{CAVM_RPM_LMAC_TYPES_E_USXGMII, 10312, "10G_SXGMII", "usxgmii"},
	{-1, 0, NULL, NULL}, /* 40 - CPRI */
	{-1, 0, NULL, NULL},
	{-1, 0, NULL, NULL},
	{-1, 0, NULL, NULL},
	{-1, 0, NULL, NULL}, /* 46 - CPRI */
	{-1, 0, NULL, NULL}, /* 45 - JESD */
	{-1, 0, NULL, NULL},
	{-1, 0, NULL, NULL}, /* 47 - JESD */
	{CAVM_RPM_LMAC_TYPES_E_SGMII, 2500, "2500BASE_X", "sgmii"},     /* 48 */
	{CAVM_RPM_LMAC_TYPES_E_SGMII, 5000, "5000BASE_X", "sgmii"},
	{CAVM_RPM_LMAC_TYPES_E_USXGMII, 2578, "2_5G_SXGMII", "usxgmii"}, /* 50 */
	{CAVM_RPM_LMAC_TYPES_E_USXGMII, 5156, "5G_SXGMII", "usxgmii"},
	{CAVM_RPM_LMAC_TYPES_E_USXGMII, 10312, "10G_DXGMII", "usxgmii"},
	{CAVM_RPM_LMAC_TYPES_E_USXGMII, 10312, "10G_QXGMII", "usxgmii"}, /* 53 */
	{CAVM_RPM_LMAC_TYPES_E_USGMII, 5000, "Q_USGMII", "usgmii"}, /* 54 */
	{CAVM_RPM_LMAC_TYPES_E_USGMII, 10000, "O_USGMII", "usgmii"}, /* 55 */
	{-1, 0, NULL, NULL}, /* 56 - CPRI TEST modes */
	{-1, 0, NULL, NULL},
	{-1, 0, NULL, NULL},
	{-1, 0, NULL, NULL},
	{-1, 0, NULL, NULL},
	{-1, 0, NULL, NULL},
	{-1, 0, NULL, NULL},
	{CAVM_RPM_LMAC_TYPES_E_TWENTYFIVEG_R, 25781, "25GBASE_USR", "25g"}, /* 63 */
};

int gserm_get_mode_from_string(const char *str)
{
	const size_t map_sz = ARRAY_SIZE(gsermmode_strmap);

	for (int i = 0; i < map_sz; i++)
		if (!strcmp(gsermmode_strmap[i].linux_str, str))
			return gsermmode_strmap[i].mode;
	return -1;
}

const struct gserm_mode_strmap_s gserm_get_mode_strmap(int gserm_mode)
{
	return gsermmode_strmap[gserm_mode];
}

