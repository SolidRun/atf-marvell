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
#include <platform_def.h>
#include <platform_setup.h>
#include <debug.h>
#include <string.h>
#include <libfdt.h>
#include <stdlib.h>
#include <assert.h>
#include <octeontx_common.h>
#include <plat_cn10k_configuration.h>
#include "plat_portm_cfg.h"
#include <plat_scfg.h>
#include <gserm.h>

#define DISABLE -1

/* for LEGACY logging, define DEBUG_ATF_DTS to enable debug logs */
#undef DEBUG_ATF_DTS

#if defined(MRVL_TF_LOG_MODULE)
#  undef MRVL_TF_LOG_MODULE
#  define MRVL_TF_LOG_MODULE  MRVL_TF_LOG_MODULE_PARSE
#  define debug_dts(...) (mrvl_tf_log_modules & MRVL_TF_LOG_MODULE) ? \
				tf_log(LOG_MARKER_NOTICE __VA_ARGS__) : (void)0
#elif DEBUG_ATF_DTS
#define debug_dts printf
#else
#define debug_dts(...) ((void) (0))
#endif

static const cn10k_portm_mode_desc_t portm_mode_desc_list[] = {
	/* Ethernet modes */
	/* Portm_mode                  FEC's supported       SN MN AP FA MAC_Type   Speed       PCS Type */
	{PORTM_MODE_SGMII,            PORTM_FEC_DISABLED,    1, 1, 0, 0, PORTM_ETH, 1000,   PORTM_PCS_1000BASE_X},
	{PORTM_MODE_1000BASE_X,       PORTM_FEC_DISABLED,    1, 1, 0, 0, PORTM_ETH, 1000,   PORTM_PCS_1000BASE_X},
	{PORTM_MODE_SFI_1G,           PORTM_FEC_DISABLED,    1, 1, 0, 0, PORTM_ETH, 1000,   PORTM_PCS_1000BASE_X},
	{PORTM_MODE_2500BASE_X,       PORTM_FEC_DISABLED,    1, 1, 0, 0, PORTM_ETH, 2500,   PORTM_PCS_1000BASE_X},
	{PORTM_MODE_5000BASE_X,       PORTM_FEC_DISABLED,    1, 1, 0, 0, PORTM_ETH, 5000,   PORTM_PCS_1000BASE_X},
	{PORTM_MODE_QSGMII,           PORTM_FEC_DISABLED,    1, 4, 0, 0, PORTM_ETH, 5000,   PORTM_PCS_QSGMII},
	{PORTM_MODE_XFI,              PORTM_FEC_BASER,       1, 1, 0, 0, PORTM_ETH, 10000,  PORTM_PCS_10GBASE_R},
	{PORTM_MODE_SFI,              PORTM_FEC_BASER,       1, 1, 0, 0, PORTM_ETH, 10000,  PORTM_PCS_10GBASE_R},
	{PORTM_MODE_10GBASE_KR,       PORTM_FEC_BASER,       1, 1, 1, 1, PORTM_ETH, 10000,  PORTM_PCS_10GBASE_R},
	{PORTM_MODE_25GAUI_C2C,       PORTM_FEC_BASER_RS,    1, 1, 0, 0, PORTM_ETH, 25000,  PORTM_PCS_25GBASE_R},
	{PORTM_MODE_25GAUI_C2M,       PORTM_FEC_BASER_RS,    1, 1, 0, 0, PORTM_ETH, 25000,  PORTM_PCS_25GBASE_R},
	{PORTM_MODE_25GBASE_USR,      PORTM_FEC_BASER_RS,    1, 1, 0, 0, PORTM_ETH, 25000,  PORTM_PCS_25GBASE_R},
	{PORTM_MODE_25GBASE_CR,       PORTM_FEC_BASER_RS,    1, 1, 1, 0, PORTM_ETH, 25000,  PORTM_PCS_25GBASE_R},
	{PORTM_MODE_25GBASE_KR,       PORTM_FEC_BASER_RS,    1, 1, 1, 0, PORTM_ETH, 25000,  PORTM_PCS_25GBASE_R},
	{PORTM_MODE_25GBASE_CR_C,     PORTM_FEC_BASER_RS,    1, 1, 1, 1, PORTM_ETH, 25000,  PORTM_PCS_25GBASE_R},
	{PORTM_MODE_25GBASE_KR_C,     PORTM_FEC_BASER_RS,    1, 1, 1, 1, PORTM_ETH, 25000,  PORTM_PCS_25GBASE_R},
	{PORTM_MODE_XLAUI,            PORTM_FEC_BASER,       4, 1, 0, 0, PORTM_ETH, 40000,  PORTM_PCS_40GBASE_R4},
	{PORTM_MODE_XLAUI_C2M,        PORTM_FEC_BASER,       4, 1, 0, 0, PORTM_ETH, 40000,  PORTM_PCS_40GBASE_R4},
	{PORTM_MODE_40GBASE_CR4,      PORTM_FEC_BASER,       4, 1, 1, 1, PORTM_ETH, 40000,  PORTM_PCS_40GBASE_R4},
	{PORTM_MODE_40GBASE_KR4,      PORTM_FEC_BASER,       4, 1, 1, 1, PORTM_ETH, 40000,  PORTM_PCS_40GBASE_R4},
	{PORTM_MODE_LAUI_2_C2C,       PORTM_FEC_DISABLED,    2, 1, 0, 0, PORTM_ETH, 50000,  PORTM_PCS_50GBASE_R2},
	{PORTM_MODE_LAUI_2_C2M,       PORTM_FEC_DISABLED,    2, 1, 0, 0, PORTM_ETH, 50000,  PORTM_PCS_50GBASE_R2},
	{PORTM_MODE_50GBASE_CR2_C,    PORTM_FEC_BASER_RS,    2, 1, 1, 1, PORTM_ETH, 50000,  PORTM_PCS_50GBASE_R2},
	{PORTM_MODE_50GBASE_KR2_C,    PORTM_FEC_BASER_RS,    2, 1, 1, 1, PORTM_ETH, 50000,  PORTM_PCS_50GBASE_R2},
	{PORTM_MODE_50GAUI_1_C2C,     PORTM_FEC_RS_544_ONLY, 1, 1, 0, 0, PORTM_ETH, 50000,  PORTM_PCS_50GBASE_R1},
	{PORTM_MODE_50GAUI_1_C2M,     PORTM_FEC_RS_544_ONLY, 1, 1, 0, 0, PORTM_ETH, 50000,  PORTM_PCS_50GBASE_R1},
	{PORTM_MODE_50GBASE_USR,      PORTM_FEC_RS_544_ONLY, 1, 1, 0, 0, PORTM_ETH, 50000,  PORTM_PCS_50GBASE_R1},
	{PORTM_MODE_50GBASE_CR,       PORTM_FEC_RS_544_ONLY, 1, 1, 1, 0, PORTM_ETH, 50000,  PORTM_PCS_50GBASE_R1},
	{PORTM_MODE_50GBASE_KR,       PORTM_FEC_RS_544_ONLY, 1, 1, 1, 0, PORTM_ETH, 50000,  PORTM_PCS_50GBASE_R1},
	{PORTM_MODE_CAUI_4_C2C,       PORTM_FEC_RS,          4, 1, 0, 0, PORTM_ETH, 100000, PORTM_PCS_100GBASE_R4},
	{PORTM_MODE_CAUI_4_C2M,       PORTM_FEC_RS,          4, 1, 0, 0, PORTM_ETH, 100000, PORTM_PCS_100GBASE_R4},
	{PORTM_MODE_100GBASE_CR4,     PORTM_FEC_RS_528_ONLY, 4, 1, 1, 0, PORTM_ETH, 100000, PORTM_PCS_100GBASE_R4},
	{PORTM_MODE_100GBASE_KR4,     PORTM_FEC_RS_528_ONLY, 4, 1, 1, 0, PORTM_ETH, 100000, PORTM_PCS_100GBASE_R4},
	{PORTM_MODE_100GAUI_2_C2C,    PORTM_FEC_RS_544_ONLY, 2, 1, 0, 0, PORTM_ETH, 100000, PORTM_PCS_100GBASE_R2},
	{PORTM_MODE_100GAUI_2_C2M,    PORTM_FEC_RS_544_ONLY, 2, 1, 0, 0, PORTM_ETH, 100000, PORTM_PCS_100GBASE_R2},
	{PORTM_MODE_100GBASE_USR2,    PORTM_FEC_RS_544_ONLY, 2, 1, 0, 0, PORTM_ETH, 100000, PORTM_PCS_100GBASE_R2},
	{PORTM_MODE_100GBASE_CR2,     PORTM_FEC_RS_544_ONLY, 2, 1, 1, 0, PORTM_ETH, 100000, PORTM_PCS_100GBASE_R2},
	{PORTM_MODE_100GBASE_KR2,     PORTM_FEC_RS_544_ONLY, 2, 1, 1, 0, PORTM_ETH, 100000, PORTM_PCS_100GBASE_R2},
	{PORTM_MODE_802_3AP,          PORTM_FEC_BASER_RS,    1, 1, 0, 0, PORTM_ETH, 0,      PORTM_PCS_NONE},
	{PORTM_MODE_2_5G_SXGMII,      PORTM_FEC_DISABLED,    1, 1, 0, 0, PORTM_ETH, 2500,   PORTM_PCS_USXGMII},
	{PORTM_MODE_5G_SXGMII,        PORTM_FEC_DISABLED,    1, 1, 0, 0, PORTM_ETH, 5000,   PORTM_PCS_USXGMII},
	{PORTM_MODE_10G_SXGMII,       PORTM_FEC_DISABLED,    1, 1, 0, 0, PORTM_ETH, 10000,  PORTM_PCS_USXGMII},
	{PORTM_MODE_10G_DXGMII,       PORTM_FEC_DISABLED,    1, 2, 0, 0, PORTM_ETH, 10000,  PORTM_PCS_USXGMII},
	{PORTM_MODE_10G_QXGMII,       PORTM_FEC_DISABLED,    1, 4, 0, 0, PORTM_ETH, 10000,  PORTM_PCS_USXGMII},
	{PORTM_MODE_Q_USGMII,         PORTM_FEC_DISABLED,    1, 4, 0, 0, PORTM_ETH, 5000,   PORTM_PCS_USGMII},
	{PORTM_MODE_O_USGMII,         PORTM_FEC_DISABLED,    1, 8, 0, 0, PORTM_ETH, 10000,  PORTM_PCS_USGMII},
	/* CPRI modes */
	{PORTM_MODE_CPRI_2_4G,        PORTM_FEC_DISABLED,    1, 1, 0, 0, PORTM_CPRI, 2458,  PORTM_PCS_NONE},
	{PORTM_MODE_CPRI_3_1G,        PORTM_FEC_DISABLED,    1, 1, 0, 0, PORTM_CPRI, 3072,  PORTM_PCS_NONE},
	{PORTM_MODE_CPRI_4_9G,        PORTM_FEC_DISABLED,    1, 1, 0, 0, PORTM_CPRI, 4915,  PORTM_PCS_NONE},
	{PORTM_MODE_CPRI_6_1G,        PORTM_FEC_DISABLED,    1, 1, 0, 0, PORTM_CPRI, 6144,  PORTM_PCS_NONE},
	{PORTM_MODE_CPRI_9_8G,        PORTM_FEC_DISABLED,    1, 1, 0, 0, PORTM_CPRI, 9830,  PORTM_PCS_NONE},
	{PORTM_MODE_CPRI_2_4G_TEST,   PORTM_FEC_DISABLED,    1, 1, 0, 0, PORTM_CPRI, 2458,  PORTM_PCS_NONE},
	{PORTM_MODE_CPRI_3_1G_TEST,   PORTM_FEC_DISABLED,    1, 1, 0, 0, PORTM_CPRI, 3072,  PORTM_PCS_NONE},
	{PORTM_MODE_CPRI_4_9G_TEST,   PORTM_FEC_DISABLED,    1, 1, 0, 0, PORTM_CPRI, 4915,  PORTM_PCS_NONE},
	{PORTM_MODE_CPRI_6_1G_TEST,   PORTM_FEC_DISABLED,    1, 1, 0, 0, PORTM_CPRI, 6144,  PORTM_PCS_NONE},
	{PORTM_MODE_CPRI_9_8G_TEST,   PORTM_FEC_DISABLED,    1, 1, 0, 0, PORTM_CPRI, 9830,  PORTM_PCS_NONE},
	{PORTM_MODE_CPRI_12_3G_TEST,  PORTM_FEC_DISABLED,    1, 1, 0, 0, PORTM_CPRI, 12288, PORTM_PCS_NONE},
	{PORTM_MODE_CPRI_19_7G_TEST,  PORTM_FEC_DISABLED,    1, 1, 0, 0, PORTM_CPRI, 19661, PORTM_PCS_NONE},
	/* JESD204C modes */
	{PORTM_MODE_JESD204C_12_2G,   PORTM_FEC_DISABLED,    1, 1, 0, 0, PORTM_JESD, 12165, PORTM_PCS_NONE},
	{PORTM_MODE_JESD204C_16_2G,   PORTM_FEC_DISABLED,    1, 1, 0, 0, PORTM_JESD, 16220, PORTM_PCS_NONE},
	{PORTM_MODE_JESD204C_24_3G,   PORTM_FEC_DISABLED,    1, 1, 0, 0, PORTM_JESD, 24330, PORTM_PCS_NONE},

	{PORTM_MODE_DISABLED,         PORTM_FEC_DISABLED,    1, 1, 1, 0, PORTM_DIS,  0,     PORTM_PCS_NONE}
};

static const portm_tx_tuning_t portm_default_tx_tuning_list[] = {
	/* portm_mode              Main Post Pr1 Pr2 */
	{PORTM_MODE_SGMII,           35,  0,  0,  0 },
	{PORTM_MODE_1000BASE_X,      63,  0,  0,  0 },
	{PORTM_MODE_SFI_1G,          63,  0,  0,  0 },
	{PORTM_MODE_QSGMII,          63,  0,  0,  0 }, /* TBD */
	{PORTM_MODE_2500BASE_X,      63,  0,  0,  0 },
	{PORTM_MODE_5000BASE_X,      63,  0,  0,  0 },
	{PORTM_MODE_XFI,             63,  0,  0,  0 }, /* TBD */
	{PORTM_MODE_SFI,             52, -10,  -1,  0 },
	{PORTM_MODE_10GBASE_KR,      63,  0,  0,  0 }, /* Set via LT */
	{PORTM_MODE_25GAUI_C2C,      63,  0,  0,  0 }, /* TBD */
	{PORTM_MODE_25GAUI_C2M,      56,  -3,  -4,  0 },
	{PORTM_MODE_25GBASE_USR,     63,  0,  0,  0 },
	{PORTM_MODE_25GBASE_CR,      63,  0,  0,  0 }, /* Set via LT */
	{PORTM_MODE_25GBASE_KR,      63,  0,  0,  0 }, /* Set via LT */
	{PORTM_MODE_25GBASE_CR_C,    63,  0,  0,  0 }, /* Set via LT */
	{PORTM_MODE_25GBASE_KR_C,    63,  0,  0,  0 }, /* Set via LT */
	{PORTM_MODE_XLAUI,           63,  0,  0,  0 }, /* TBD */
	{PORTM_MODE_XLAUI_C2M,       63,  0,  0,  0 }, /* TBD */
	{PORTM_MODE_40GBASE_CR4,     63,  0,  0,  0 }, /* Set via LT */
	{PORTM_MODE_40GBASE_KR4,     63,  0,  0,  0 }, /* Set via LT */
	{PORTM_MODE_LAUI_2_C2C,      63,  0,  0,  0 }, /* TBD */
	{PORTM_MODE_LAUI_2_C2M,      56,  -2,  -5,  0 },
	{PORTM_MODE_50GBASE_CR2_C,   63,  0,  0,  0 }, /* Set via LT */
	{PORTM_MODE_50GBASE_KR2_C,   63,  0,  0,  0 }, /* Set via LT */
	{PORTM_MODE_50GAUI_1_C2C,    63,  0,  0,  0 }, /* TBD */
	{PORTM_MODE_50GAUI_1_C2M,    56,  -2,  -5,  0 },
	{PORTM_MODE_50GBASE_USR,     63,  0,  0,  0 }, /* Set via firmware */
	{PORTM_MODE_50GBASE_CR,      63,  0,  0,  0 }, /* Set via LT */
	{PORTM_MODE_50GBASE_KR,      63,  0,  0,  0 }, /* Set via LT */
	{PORTM_MODE_CAUI_4_C2C,      63,  0,  0,  0 }, /* TBD */
	{PORTM_MODE_CAUI_4_C2M,      63,  0,  0,  0 }, /* TBD */
	{PORTM_MODE_100GBASE_CR4,    63,  0,  0,  0 }, /* Set via LT */
	{PORTM_MODE_100GBASE_KR4,    63,  0,  0,  0 }, /* Set via LT */
	{PORTM_MODE_100GAUI_2_C2C,   63,  0,  0,  0 }, /* TBD */
	{PORTM_MODE_100GAUI_2_C2M,   63,  0,  0,  0 }, /* TBD */
	{PORTM_MODE_100GBASE_USR2,   63,  0,  0,  0 }, /* Set via firmware */
	{PORTM_MODE_100GBASE_CR2,    63,  0,  0,  0 }, /* Set via LT */
	{PORTM_MODE_100GBASE_KR2,    63,  0,  0,  0 }, /* Set via LT */
	{PORTM_MODE_802_3AP,         63,  0,  0,  0 }, /* TBD */

	/* USXGMII modes */
	{PORTM_MODE_2_5G_SXGMII,     63,  0,  0,  0 }, /* TBD */
	{PORTM_MODE_5G_SXGMII,       63,  0,  0,  0 }, /* TBD */
	{PORTM_MODE_10G_SXGMII,      63,  0,  0,  0 }, /* TBD */
	{PORTM_MODE_10G_DXGMII,      63,  0,  0,  0 }, /* TBD */
	{PORTM_MODE_10G_QXGMII,      63,  0,  0,  0 }, /* TBD */

	/* USGMII modes */
	{PORTM_MODE_Q_USGMII,        63,  0,  0,  0 }, /* TBD */
	{PORTM_MODE_O_USGMII,        63,  0,  0,  0 }, /* TBD */

	/* CPRI modes */
	{PORTM_MODE_CPRI_2_4G,       63,  0,  0,  0 }, /* TBD */
	{PORTM_MODE_CPRI_3_1G,       63,  0,  0,  0 }, /* TBD */
	{PORTM_MODE_CPRI_4_9G,       63,  0,  0,  0 }, /* TBD */
	{PORTM_MODE_CPRI_6_1G,       63,  0,  0,  0 }, /* TBD */
	{PORTM_MODE_CPRI_9_8G,       63,  0,  0,  0 }, /* TBD */
	{PORTM_MODE_CPRI_2_4G_TEST,  63,  0,  0,  0 }, /* TBD */
	{PORTM_MODE_CPRI_3_1G_TEST,  63,  0,  0,  0 }, /* TBD */
	{PORTM_MODE_CPRI_4_9G_TEST,  63,  0,  0,  0 }, /* TBD */
	{PORTM_MODE_CPRI_6_1G_TEST,  63,  0,  0,  0 }, /* TBD */
	{PORTM_MODE_CPRI_9_8G_TEST,  63,  0,  0,  0 }, /* TBD */
	{PORTM_MODE_CPRI_12_3G_TEST, 63,  0,  0,  0 }, /* TBD */
	{PORTM_MODE_CPRI_19_7G_TEST, 63,  0,  0,  0 }, /* TBD */

	/* JESD204C modes */
	{PORTM_MODE_JESD204C_12_2G,  63,  0,  0,  0 },
	{PORTM_MODE_JESD204C_16_2G,  63,  0,  0,  0 },
	{PORTM_MODE_JESD204C_24_3G,  63,  0,  0,  0 },
	{PORTM_MODE_DISABLED,        0,   0,  0,  0 }
};

/**
 * Convert FEC type into a string value
 *
 * @param fec_type: FEC type to convert
 * @return: fec type string
 */
const char *cn10k_portm_fec_type_to_str(cn10k_portm_fec_t fec_type)
{
	const char *str = NULL;

#define FEC_CASE(m) case m: str = ((const char *)#m)+10

	switch (fec_type) {
	FEC_CASE(PORTM_FEC_DISABLED);
	break;
	FEC_CASE(PORTM_FEC_BASER);
	break;
	FEC_CASE(PORTM_FEC_RS);
	break;
	FEC_CASE(PORTM_FEC_BASER_RS);
	break;
	FEC_CASE(PORTM_FEC_RS_528_ONLY);
	break;
	FEC_CASE(PORTM_FEC_RS_544_ONLY);
	break;

	default:
		WARN("%s: invalid FEC type %d\n", __func__, fec_type);
		str = "INVALID_PORTM_FEC_VALUE";
		break;
	}
	return str;
}

/**
 * Convert a string value into a fec type
 *
 * @param val: string value
 * @return: fec type
 */
cn10k_portm_fec_t cn10k_portm_fec_str_to_type(const char *val)
{
	cn10k_portm_fec_t fec_type;

	/* Search for matching fec type */
	for (fec_type = 0; fec_type < PORTM_FEC_LAST; fec_type++) {
		if (strcmp(val, cn10k_portm_fec_type_to_str(fec_type)) == 0)
			return fec_type;
	}
	return PORTM_FEC_DISABLED;
}

/* Support 1, 2, and 4 SERDES Lane Ethernet PORTM modes (excluding QSGMII) */
static const cn10k_portm_modes_t portm_4_lane[] = {
	/* Ethernet - 1 lane */
	PORTM_MODE_SGMII,
	PORTM_MODE_1000BASE_X,
	PORTM_MODE_SFI_1G,
	PORTM_MODE_XFI,
	PORTM_MODE_SFI,
	PORTM_MODE_10GBASE_KR,
	PORTM_MODE_25GAUI_C2C,
	PORTM_MODE_25GAUI_C2M,
	PORTM_MODE_25GBASE_CR,
	PORTM_MODE_25GBASE_KR,
	PORTM_MODE_25GBASE_CR_C,
	PORTM_MODE_25GBASE_KR_C,
	PORTM_MODE_50GAUI_1_C2C,
	PORTM_MODE_50GAUI_1_C2M,
	PORTM_MODE_50GBASE_CR,
	PORTM_MODE_50GBASE_KR,
	PORTM_MODE_10G_SXGMII,
	/* Ethernet - 2 lane */
	PORTM_MODE_LAUI_2_C2C,
	PORTM_MODE_LAUI_2_C2M,
	PORTM_MODE_50GBASE_CR2_C,
	PORTM_MODE_50GBASE_KR2_C,
	PORTM_MODE_100GAUI_2_C2C,
	PORTM_MODE_100GAUI_2_C2M,
	PORTM_MODE_100GBASE_CR2,
	PORTM_MODE_100GBASE_KR2,
	/* Ethernet - 4 lane */
	PORTM_MODE_XLAUI,
	PORTM_MODE_XLAUI_C2M,
	PORTM_MODE_40GBASE_CR4,
	PORTM_MODE_40GBASE_KR4,
	PORTM_MODE_CAUI_4_C2C,
	PORTM_MODE_CAUI_4_C2M,
	PORTM_MODE_100GBASE_CR4,
	PORTM_MODE_100GBASE_KR4,
	/* Ethernet - 802_3AP */
	PORTM_MODE_802_3AP,

	PORTM_MODE_DISABLED
};

/* Support 1, 2, and 4 SERDES Lane Ethernet PORTM modes (excluding QSGMII and 50G PAM4) */
static const cn10k_portm_modes_t portm_4_lane_25g[] = {
	/* Ethernet - 1 lane */
	PORTM_MODE_SGMII,
	PORTM_MODE_1000BASE_X,
	PORTM_MODE_SFI_1G,
	PORTM_MODE_XFI,
	PORTM_MODE_SFI,
	PORTM_MODE_10GBASE_KR,
	PORTM_MODE_25GAUI_C2C,
	PORTM_MODE_25GAUI_C2M,
	PORTM_MODE_25GBASE_USR,
	PORTM_MODE_25GBASE_CR,
	PORTM_MODE_25GBASE_KR,
	PORTM_MODE_25GBASE_CR_C,
	PORTM_MODE_25GBASE_KR_C,
	PORTM_MODE_10G_SXGMII,
	/* Ethernet - 2 lane */
	PORTM_MODE_LAUI_2_C2C,
	PORTM_MODE_LAUI_2_C2M,
	PORTM_MODE_50GBASE_CR2_C,
	PORTM_MODE_50GBASE_KR2_C,
	/* Ethernet - 4 lane */
	PORTM_MODE_XLAUI,
	PORTM_MODE_XLAUI_C2M,
	PORTM_MODE_40GBASE_CR4,
	PORTM_MODE_40GBASE_KR4,
	PORTM_MODE_CAUI_4_C2C,
	PORTM_MODE_CAUI_4_C2M,
	PORTM_MODE_100GBASE_CR4,
	PORTM_MODE_100GBASE_KR4,
	/* Ethernet - 802_3AP */
	PORTM_MODE_802_3AP,

	PORTM_MODE_DISABLED
};

/* Support 1, 2, and 4 SERDES Lane Ethernet and JESD PORTM modes (excluding QSGMII) */
static const cn10k_portm_modes_t portm_4_lane_jesd[] = {
	/* Ethernet - 1 lane */
	PORTM_MODE_SGMII,
	PORTM_MODE_1000BASE_X,
	PORTM_MODE_SFI_1G,
	PORTM_MODE_XFI,
	PORTM_MODE_SFI,
	PORTM_MODE_10GBASE_KR,
	PORTM_MODE_25GAUI_C2C,
	PORTM_MODE_25GAUI_C2M,
	PORTM_MODE_25GBASE_USR,
	PORTM_MODE_25GBASE_CR,
	PORTM_MODE_25GBASE_KR,
	PORTM_MODE_25GBASE_CR_C,
	PORTM_MODE_25GBASE_KR_C,
	PORTM_MODE_10G_SXGMII,
	/* Ethernet - 2 lane */
	PORTM_MODE_LAUI_2_C2C,
	PORTM_MODE_LAUI_2_C2M,
	PORTM_MODE_50GBASE_CR2_C,
	PORTM_MODE_50GBASE_KR2_C,
	/* Ethernet - 4 lane */
	PORTM_MODE_XLAUI,
	PORTM_MODE_XLAUI_C2M,
	PORTM_MODE_40GBASE_CR4,
	PORTM_MODE_40GBASE_KR4,
	PORTM_MODE_CAUI_4_C2C,
	PORTM_MODE_CAUI_4_C2M,
	PORTM_MODE_100GBASE_CR4,
	PORTM_MODE_100GBASE_KR4,
	/* Ethernet - 802_3AP */
	PORTM_MODE_802_3AP,
	/* JESD204C modes*/
	PORTM_MODE_JESD204C_12_2G,
	PORTM_MODE_JESD204C_16_2G,
	PORTM_MODE_JESD204C_24_3G,

	PORTM_MODE_DISABLED
};

/*
 * Support 1, 2, and 4 SERDES Lane Ethernet and
 * CPRI PORTM modes (excluding QSGMII & USXGMII)
 */
static const cn10k_portm_modes_t portm_4_lane_cpri[] = {
	/* Ethernet - 1 lane */
	PORTM_MODE_SGMII,
	PORTM_MODE_1000BASE_X,
	PORTM_MODE_SFI_1G,
	PORTM_MODE_XFI,
	PORTM_MODE_SFI,
	PORTM_MODE_10GBASE_KR,
	PORTM_MODE_25GAUI_C2C,
	PORTM_MODE_25GAUI_C2M,
	PORTM_MODE_25GBASE_CR,
	PORTM_MODE_25GBASE_KR,
	PORTM_MODE_25GBASE_CR_C,
	PORTM_MODE_25GBASE_KR_C,
	PORTM_MODE_50GAUI_1_C2C,
	PORTM_MODE_50GAUI_1_C2M,
	PORTM_MODE_50GBASE_CR,
	PORTM_MODE_50GBASE_KR,
	/* Ethernet - 2 lane */
	PORTM_MODE_LAUI_2_C2C,
	PORTM_MODE_LAUI_2_C2M,
	PORTM_MODE_50GBASE_CR2_C,
	PORTM_MODE_50GBASE_KR2_C,
	PORTM_MODE_100GAUI_2_C2C,
	PORTM_MODE_100GAUI_2_C2M,
	PORTM_MODE_100GBASE_CR2,
	PORTM_MODE_100GBASE_KR2,
	/* Ethernet - 4 lane */
	PORTM_MODE_XLAUI,
	PORTM_MODE_XLAUI_C2M,
	PORTM_MODE_40GBASE_CR4,
	PORTM_MODE_40GBASE_KR4,
	PORTM_MODE_CAUI_4_C2C,
	PORTM_MODE_CAUI_4_C2M,
	PORTM_MODE_100GBASE_CR4,
	PORTM_MODE_100GBASE_KR4,
	/* Ethernet - 802_3AP */
	PORTM_MODE_802_3AP,
	/* CPRI modes */
	PORTM_MODE_CPRI_2_4G,
	PORTM_MODE_CPRI_3_1G,
	PORTM_MODE_CPRI_4_9G,
	PORTM_MODE_CPRI_6_1G,
	PORTM_MODE_CPRI_9_8G,
	PORTM_MODE_CPRI_2_4G_TEST,
	PORTM_MODE_CPRI_3_1G_TEST,
	PORTM_MODE_CPRI_4_9G_TEST,
	PORTM_MODE_CPRI_6_1G_TEST,
	PORTM_MODE_CPRI_9_8G_TEST,
	PORTM_MODE_CPRI_12_3G_TEST,
	PORTM_MODE_CPRI_19_7G_TEST,

	PORTM_MODE_DISABLED
};

/* Support 1 and 2 SERDES Lane Ethernet (excluding QSGMII) PORTM modes	*/
static const cn10k_portm_modes_t portm_2_lane[] = {
	/* Ethernet - 1 lane */
	PORTM_MODE_SGMII,
	PORTM_MODE_1000BASE_X,
	PORTM_MODE_SFI_1G,
	PORTM_MODE_XFI,
	PORTM_MODE_SFI,
	PORTM_MODE_10GBASE_KR,
	PORTM_MODE_25GAUI_C2C,
	PORTM_MODE_25GAUI_C2M,
	PORTM_MODE_25GBASE_CR,
	PORTM_MODE_25GBASE_KR,
	PORTM_MODE_25GBASE_CR_C,
	PORTM_MODE_25GBASE_KR_C,
	PORTM_MODE_50GAUI_1_C2C,
	PORTM_MODE_50GAUI_1_C2M,
	PORTM_MODE_50GBASE_CR,
	PORTM_MODE_50GBASE_KR,
	PORTM_MODE_10G_SXGMII,
	/* Ethernet - 2 lane */
	PORTM_MODE_LAUI_2_C2C,
	PORTM_MODE_LAUI_2_C2M,
	PORTM_MODE_50GBASE_CR2_C,
	PORTM_MODE_50GBASE_KR2_C,
	PORTM_MODE_100GAUI_2_C2C,
	PORTM_MODE_100GAUI_2_C2M,
	PORTM_MODE_100GBASE_CR2,
	PORTM_MODE_100GBASE_KR2,
	/* Ethernet - 802_3AP */
	PORTM_MODE_802_3AP,

	PORTM_MODE_DISABLED
};

/* Support 1 and 2 SERDES Lane Ethernet (excluding QSGMII and 50G PAM4) PORTM modes */
static const cn10k_portm_modes_t portm_2_lane_25g[] = {
	/* Ethernet - 1 lane */
	PORTM_MODE_SGMII,
	PORTM_MODE_1000BASE_X,
	PORTM_MODE_SFI_1G,
	PORTM_MODE_XFI,
	PORTM_MODE_SFI,
	PORTM_MODE_10GBASE_KR,
	PORTM_MODE_25GAUI_C2C,
	PORTM_MODE_25GAUI_C2M,
	PORTM_MODE_25GBASE_USR,
	PORTM_MODE_25GBASE_CR,
	PORTM_MODE_25GBASE_KR,
	PORTM_MODE_25GBASE_CR_C,
	PORTM_MODE_25GBASE_KR_C,
	PORTM_MODE_10G_SXGMII,
	/* Ethernet - 2 lane */
	PORTM_MODE_LAUI_2_C2C,
	PORTM_MODE_LAUI_2_C2M,
	PORTM_MODE_50GBASE_CR2_C,
	PORTM_MODE_50GBASE_KR2_C,
	/* Ethernet - 802_3AP */
	PORTM_MODE_802_3AP,

	PORTM_MODE_DISABLED
};

/* Support 1 and 2 SERDES Lane Ethernet (excluding QSGMII) and JESD PORTM modes  */
static const cn10k_portm_modes_t portm_2_lane_jesd[] = {
	/* Ethernet - 1 lane */
	PORTM_MODE_SGMII,
	PORTM_MODE_1000BASE_X,
	PORTM_MODE_SFI_1G,
	PORTM_MODE_XFI,
	PORTM_MODE_SFI,
	PORTM_MODE_10GBASE_KR,
	PORTM_MODE_25GAUI_C2C,
	PORTM_MODE_25GAUI_C2M,
	PORTM_MODE_25GBASE_USR,
	PORTM_MODE_25GBASE_CR,
	PORTM_MODE_25GBASE_KR,
	PORTM_MODE_25GBASE_CR_C,
	PORTM_MODE_25GBASE_KR_C,
	PORTM_MODE_10G_SXGMII,
	/* Ethernet - 2 lane */
	PORTM_MODE_LAUI_2_C2C,
	PORTM_MODE_LAUI_2_C2M,
	PORTM_MODE_50GBASE_CR2_C,
	PORTM_MODE_50GBASE_KR2_C,
	/* Ethernet - 802_3AP */
	PORTM_MODE_802_3AP,
	/* JESD204C modes*/
	PORTM_MODE_JESD204C_12_2G,
	PORTM_MODE_JESD204C_16_2G,
	PORTM_MODE_JESD204C_24_3G,

	PORTM_MODE_DISABLED
};
/*
 * Support 1 and 2 SERDES Lane Ethernet
 * (excluding QSGMII & USXGMII) and CPRI PORTM modes
 */
static const cn10k_portm_modes_t portm_2_lane_cpri[] = {
	/* Ethernet - 1 lane */
	PORTM_MODE_SGMII,
	PORTM_MODE_1000BASE_X,
	PORTM_MODE_SFI_1G,
	PORTM_MODE_XFI,
	PORTM_MODE_SFI,
	PORTM_MODE_10GBASE_KR,
	PORTM_MODE_25GAUI_C2C,
	PORTM_MODE_25GAUI_C2M,
	PORTM_MODE_25GBASE_CR,
	PORTM_MODE_25GBASE_KR,
	PORTM_MODE_25GBASE_CR_C,
	PORTM_MODE_25GBASE_KR_C,
	PORTM_MODE_50GAUI_1_C2C,
	PORTM_MODE_50GAUI_1_C2M,
	PORTM_MODE_50GBASE_CR,
	PORTM_MODE_50GBASE_KR,
	/* Ethernet - 2 lane */
	PORTM_MODE_LAUI_2_C2C,
	PORTM_MODE_LAUI_2_C2M,
	PORTM_MODE_50GBASE_CR2_C,
	PORTM_MODE_50GBASE_KR2_C,
	PORTM_MODE_100GAUI_2_C2C,
	PORTM_MODE_100GAUI_2_C2M,
	PORTM_MODE_100GBASE_CR2,
	PORTM_MODE_100GBASE_KR2,
	/* Ethernet - 802_3AP */
	PORTM_MODE_802_3AP,
	/* CPRI modes */
	PORTM_MODE_CPRI_2_4G,
	PORTM_MODE_CPRI_3_1G,
	PORTM_MODE_CPRI_4_9G,
	PORTM_MODE_CPRI_6_1G,
	PORTM_MODE_CPRI_9_8G,
	PORTM_MODE_CPRI_2_4G_TEST,
	PORTM_MODE_CPRI_3_1G_TEST,
	PORTM_MODE_CPRI_4_9G_TEST,
	PORTM_MODE_CPRI_6_1G_TEST,
	PORTM_MODE_CPRI_9_8G_TEST,
	PORTM_MODE_CPRI_12_3G_TEST,
	PORTM_MODE_CPRI_19_7G_TEST,

	PORTM_MODE_DISABLED
};

/* Support 1 SERDES Lane Ethernet (excluding QSGMII, 2500BASE-X, 5000BASE-X) modes */
static const cn10k_portm_modes_t portm_1_lane[] = {
	/* 1 lane */
	PORTM_MODE_SGMII,
	PORTM_MODE_1000BASE_X,
	PORTM_MODE_SFI_1G,
	PORTM_MODE_XFI,
	PORTM_MODE_SFI,
	PORTM_MODE_10GBASE_KR,
	PORTM_MODE_25GAUI_C2C,
	PORTM_MODE_25GAUI_C2M,
	PORTM_MODE_25GBASE_CR,
	PORTM_MODE_25GBASE_KR,
	PORTM_MODE_25GBASE_CR_C,
	PORTM_MODE_25GBASE_KR_C,
	PORTM_MODE_50GAUI_1_C2C,
	PORTM_MODE_50GAUI_1_C2M,
	PORTM_MODE_50GBASE_CR,
	PORTM_MODE_50GBASE_KR,
	PORTM_MODE_10G_SXGMII,
	/* 802_3AP */
	PORTM_MODE_802_3AP,

	PORTM_MODE_DISABLED
};

/* Support 1 SERDES Lane Ethernet (excluding QSGMII) modes */
static const cn10k_portm_modes_t portm_1_lane_all_basex[] = {
	/* 1 lane */
	PORTM_MODE_SGMII,
	PORTM_MODE_1000BASE_X,
	PORTM_MODE_SFI_1G,
	//PORTM_MODE_2500BASE_X,
	//PORTM_MODE_5000BASE_X,
	PORTM_MODE_XFI,
	PORTM_MODE_SFI,
	PORTM_MODE_10GBASE_KR,
	PORTM_MODE_25GAUI_C2C,
	PORTM_MODE_25GAUI_C2M,
	PORTM_MODE_25GBASE_CR,
	PORTM_MODE_25GBASE_KR,
	PORTM_MODE_25GBASE_CR_C,
	PORTM_MODE_25GBASE_KR_C,
	PORTM_MODE_50GAUI_1_C2C,
	PORTM_MODE_50GAUI_1_C2M,
	PORTM_MODE_50GBASE_CR,
	PORTM_MODE_50GBASE_KR,
	PORTM_MODE_10G_SXGMII,
	/* 802_3AP */
	PORTM_MODE_802_3AP,

	PORTM_MODE_DISABLED
};

/* Support 1 SERDES Lane Ethernet (excluding QSGMII and 50G PAM4) modes	*/
static const cn10k_portm_modes_t portm_1_lane_25g[] = {
	/* 1 lane */
	PORTM_MODE_SGMII,
	PORTM_MODE_1000BASE_X,
	PORTM_MODE_SFI_1G,
	PORTM_MODE_XFI,
	PORTM_MODE_SFI,
	PORTM_MODE_10GBASE_KR,
	PORTM_MODE_25GAUI_C2C,
	PORTM_MODE_25GAUI_C2M,
	PORTM_MODE_25GBASE_USR,
	PORTM_MODE_25GBASE_CR,
	PORTM_MODE_25GBASE_KR,
	PORTM_MODE_25GBASE_CR_C,
	PORTM_MODE_25GBASE_KR_C,
	PORTM_MODE_10G_SXGMII,
	/* 802_3AP */
	PORTM_MODE_802_3AP,

	PORTM_MODE_DISABLED
};

/* Support 1 SERDES Lane Ethernet (excluding QSGMII) and JESD PORTM modes  */
static const cn10k_portm_modes_t portm_1_lane_jesd[] = {
	/* 1 lane */
	PORTM_MODE_SGMII,
	PORTM_MODE_1000BASE_X,
	PORTM_MODE_SFI_1G,
	PORTM_MODE_XFI,
	PORTM_MODE_SFI,
	PORTM_MODE_10GBASE_KR,
	PORTM_MODE_25GAUI_C2C,
	PORTM_MODE_25GAUI_C2M,
	PORTM_MODE_25GBASE_USR,
	PORTM_MODE_25GBASE_CR,
	PORTM_MODE_25GBASE_KR,
	PORTM_MODE_25GBASE_CR_C,
	PORTM_MODE_25GBASE_KR_C,
	PORTM_MODE_10G_SXGMII,
	/* 802_3AP */
	PORTM_MODE_802_3AP,

	/* JESD204C modes*/
	PORTM_MODE_JESD204C_12_2G,
	PORTM_MODE_JESD204C_16_2G,
	PORTM_MODE_JESD204C_24_3G,

	PORTM_MODE_DISABLED
};

/*
 * Support 1 SERDES Lane Ethernet
 * (excluding QSGMII & USXGMII) and JESD PORTM modes
 */
static const cn10k_portm_modes_t portm_1_lane_cpri[] = {
	/* 1 lane */
	PORTM_MODE_SGMII,
	PORTM_MODE_1000BASE_X,
	PORTM_MODE_SFI_1G,
	PORTM_MODE_XFI,
	PORTM_MODE_SFI,
	PORTM_MODE_10GBASE_KR,
	PORTM_MODE_25GAUI_C2C,
	PORTM_MODE_25GAUI_C2M,
	PORTM_MODE_25GBASE_CR,
	PORTM_MODE_25GBASE_KR,
	PORTM_MODE_25GBASE_CR_C,
	PORTM_MODE_25GBASE_KR_C,
	PORTM_MODE_50GAUI_1_C2C,
	PORTM_MODE_50GAUI_1_C2M,
	PORTM_MODE_50GBASE_CR,
	PORTM_MODE_50GBASE_KR,
	/* 802_3AP */
	PORTM_MODE_802_3AP,
	/* CPRI modes */
	PORTM_MODE_CPRI_2_4G,
	PORTM_MODE_CPRI_3_1G,
	PORTM_MODE_CPRI_4_9G,
	PORTM_MODE_CPRI_6_1G,
	PORTM_MODE_CPRI_9_8G,
	PORTM_MODE_CPRI_2_4G_TEST,
	PORTM_MODE_CPRI_3_1G_TEST,
	PORTM_MODE_CPRI_4_9G_TEST,
	PORTM_MODE_CPRI_6_1G_TEST,
	PORTM_MODE_CPRI_9_8G_TEST,
	PORTM_MODE_CPRI_12_3G_TEST,
	PORTM_MODE_CPRI_19_7G_TEST,

	PORTM_MODE_DISABLED
};

/* Support 1 SERDES Lane PORTM modes (<= 10Gb/s excluding QSGMII) */
static const cn10k_portm_modes_t portm_1_lane_slow[] = {
	/* 1 lane */
	PORTM_MODE_SGMII,
	PORTM_MODE_1000BASE_X,
	PORTM_MODE_SFI_1G,
	PORTM_MODE_XFI,
	PORTM_MODE_SFI,
	PORTM_MODE_10GBASE_KR,
	PORTM_MODE_10G_SXGMII,
	/* 802_3AP */
	PORTM_MODE_802_3AP,

	PORTM_MODE_DISABLED
};

/* Support 1 SERDES Lane PORTM modes (<= 10Gb/s including QSGMII) */
static const cn10k_portm_modes_t portm_1_lane_slow_qsgmii[] = {
	/* 1 lane */
	PORTM_MODE_SGMII,
	PORTM_MODE_1000BASE_X,
	PORTM_MODE_SFI_1G,
	PORTM_MODE_XFI,
	PORTM_MODE_SFI,
	PORTM_MODE_10GBASE_KR,
	PORTM_MODE_10G_SXGMII,

	/* QSGMII */
	PORTM_MODE_QSGMII,

	/* 802_3AP */
	PORTM_MODE_802_3AP,

	PORTM_MODE_DISABLED
};

/* Support 1 SERDES Lane PORTM modes (<= 10Gb/s including USGMII & USXGMII-MP/SP) */
static const cn10k_portm_modes_t portm_1_lane_slow_usgmii_usxgmii[] = {
	/* 1 lane */
	PORTM_MODE_SGMII,
	PORTM_MODE_1000BASE_X,
	PORTM_MODE_SFI_1G,
	//PORTM_MODE_2500BASE_X,
	//PORTM_MODE_5000BASE_X,
	PORTM_MODE_XFI,
	PORTM_MODE_SFI,
	PORTM_MODE_10GBASE_KR,

	/* USGMII */
	PORTM_MODE_QSGMII,
	PORTM_MODE_Q_USGMII,
	PORTM_MODE_O_USGMII,

	/* USXGMII */
	PORTM_MODE_2_5G_SXGMII,
	PORTM_MODE_5G_SXGMII,
	PORTM_MODE_10G_SXGMII,
	PORTM_MODE_10G_DXGMII,
	PORTM_MODE_10G_QXGMII,

	/* 802_3AP */
	PORTM_MODE_802_3AP,

	PORTM_MODE_DISABLED
};

static const cn10k_portm_modes_t portm_1_lane_10ka_mcm[] = {
	PORTM_MODE_XFI, /* Temporary for Bring-up */
	PORTM_MODE_50GBASE_USR,
	PORTM_MODE_DISABLED
};

static const cn10k_portm_modes_t portm_2_lane_10ka_mcm[] = {
	PORTM_MODE_XFI, /* Temporary for Bring-up */
	PORTM_MODE_50GBASE_USR,
	PORTM_MODE_100GBASE_USR2,
	PORTM_MODE_DISABLED
};

/* JESD204C PORTM modes */
static const cn10k_portm_modes_t portm_jesd[] = {
	PORTM_MODE_JESD204C_12_2G,
	PORTM_MODE_JESD204C_16_2G,
	PORTM_MODE_JESD204C_24_3G,
	PORTM_MODE_DISABLED
};

/* PORTM mapping to RPM/GSERM for each platform */
static const cn10k_portm_gserm_mac_map_t portm_gserm_mac_map_cn10ka[] = {
	/*Port  GSER  G-LANE  MAX-LANE  ETH_MAC  E-LANE   O_MAC    O_LANE */
	{0,      0,     0,      3,      0,       0,       DISABLE, DISABLE},
	{1,      0,     1,      3,      0,       1,       DISABLE, DISABLE},
	{2,      0,     2,      3,      0,       2,       DISABLE, DISABLE},
	{3,      0,     3,      3,      0,       3,       DISABLE, DISABLE},
	{4,      1,     0,      0,      1,       0,       DISABLE, DISABLE},
	{5,      2,     0,      0,      2,       0,       DISABLE, DISABLE}
};

static const cn10k_portm_gserm_mac_map_t portm_gserm_mac_map_cn10kb[] = {
	/*Port  GSER  G-LANE  MAX-LANE  ETH_MAC  E-LANE   O_MAC    O_LANE */
	{0,      0,     0,      0,      0,       0,       DISABLE, DISABLE},
	{1,      1,     0,      0,      1,       0,       DISABLE, DISABLE},
	{2,      2,     0,      3,      2,       0,       DISABLE, DISABLE},
	{3,      2,     1,      3,      2,       1,       DISABLE, DISABLE},
	{4,      2,     2,      3,      2,       2,       DISABLE, DISABLE},
	{5,      2,     3,      3,      2,       3,       DISABLE, DISABLE},
};

static const cn10k_portm_gserm_mac_map_t portm_gserm_mac_map_cn10kas[] = {
	/*Port  GSER  G-LANE  MAX-LANE  ETH_MAC  E-LANE   O_MAC    O_LANE */
	{0,      0,     2,      2,      0,       0,       DISABLE, DISABLE},
	{1,      0,     1,      2,      0,       1,       DISABLE, DISABLE},
	{2,      0,     0,      2,      0,       2,       DISABLE, DISABLE},
	{3,      0,     3,      3,      0,       3,       DISABLE, DISABLE}
};

static const cn10k_portm_gserm_mac_map_t portm_gserm_mac_map_cnf10ka[] = {
	/*Port  GSER  G-LANE  MAX-LANE  ETH_MAC  E-LANE   O_MAC    O_LANE */
	{0,      0,     0,      3,      0,       0,       DISABLE, DISABLE},
	{1,      0,     1,      3,      0,       1,       DISABLE, DISABLE},
	{2,      0,     2,      3,      0,       2,       DISABLE, DISABLE},
	{3,      0,     3,      3,      0,       3,       DISABLE, DISABLE},
	{4,      1,     0,      3,      1,       0,       DISABLE, DISABLE},
	{5,      1,     1,      3,      1,       1,       DISABLE, DISABLE},
	{6,      1,     2,      3,      1,       2,       DISABLE, DISABLE},
	{7,      1,     3,      3,      1,       3,       DISABLE, DISABLE},
	{8,      2,     0,      3,      2,       0,       1,       0},
	{9,      2,     1,      3,      2,       1,       1,       1},
	{10,     2,     2,      3,      2,       2,       1,       2},
	{11,     2,     3,      3,      2,       3,       1,       3},
	{12,     3,     0,      3,      DISABLE, DISABLE, 1,       0},
	{13,     3,     1,      3,      DISABLE, DISABLE, 1,       1},
	{14,     3,     2,      3,      DISABLE, DISABLE, 1,       2},
	{15,     3,     3,      3,      DISABLE, DISABLE, 1,       3},
	{16,     4,     0,      3,      3,       0,       0,       0},
	{17,     4,     1,      3,      3,       1,       0,       1},
	{18,     4,     2,      3,      3,       2,       0,       2},
	{19,     4,     3,      3,      3,       3,       0,       3},
	{20,     5,     0,      3,      DISABLE, DISABLE, 2,       0},
	{21,     5,     1,      3,      DISABLE, DISABLE, 2,       1},
	{22,     5,     2,      3,      DISABLE, DISABLE, 2,       2},
	{23,     5,     3,      3,      DISABLE, DISABLE, 2,       3},
	{24,     6,     0,      3,      DISABLE, DISABLE, 3,       0},
	{25,     6,     1,      3,      DISABLE, DISABLE, 3,       1},
	{26,     6,     2,      3,      DISABLE, DISABLE, 3,       2},
	{27,     6,     3,      3,      DISABLE, DISABLE, 3,       3}
};

static const cn10k_portm_gserm_mac_map_t portm_gserm_mac_map_cnf10kb[] = {
	/*Port  GSER  G-LANE  MAX-LANE  ETH_MAC  E-LANE   O_MAC    O_LANE */
	{0,      0,     0,      3,      0,       0,       DISABLE, DISABLE},
	{1,      0,     1,      3,      0,       1,       DISABLE, DISABLE},
	{2,      0,     2,      3,      0,       2,       DISABLE, DISABLE},
	{3,      0,     3,      3,      0,       3,       DISABLE, DISABLE},
	{4,      1,     0,      1,      1,       0,       DISABLE, DISABLE},
	{5,      1,     1,      1,      1,       1,       DISABLE, DISABLE},
	{6,      2,     0,      3,      2,       0,       0,       0},
	{7,      2,     1,      3,      2,       1,       0,       1},
	{8,      2,     2,      3,      3,       0,       1,       0},
	{9,      2,     3,      3,      3,       1,       1,       1},
	{10,     3,     0,      3,      4,       0,       2,       0},
	{11,     3,     1,      3,      4,       1,       2,       1},
	{12,     3,     2,      3,      5,       0,       3,       0},
	{13,     3,     3,      3,      5,       1,       3,       1},
	{14,     4,     0,      3,      6,       0,       4,       0},
	{15,     4,     1,      3,      6,       1,       4,       1},
	{16,     4,     2,      3,      7,       0,       5,       0},
	{17,     4,     3,      3,      7,       1,       5,       1},
	{18,     5,     0,      1,      8,       0,       DISABLE, DISABLE},
	{19,     5,     1,      1,      8,       1,       DISABLE, DISABLE}
};

/**
 * Return an array describing the modes allowed for a PORTM
 *
 * @param portm    PORTM to describe
 *
 * @return Mode description
 */
const cn10k_portm_modes_t *portm_get_mode_desc(int portm)
{
	if (cavm_is_model(OCTEONTX_CN10KA)) {
		if (plat_get_altpkg() == CN10KA_PKG) {
			switch (portm) {
			case 0:
				return portm_4_lane;
			case 1:
			case 3:
				return portm_1_lane;
			case 2:
				return portm_2_lane;
			case 4:
			case 5:
				return portm_1_lane_slow_qsgmii;
			default:
				return NULL;
			}
		} else {
			switch (portm) {
			case 0:
				return portm_2_lane_10ka_mcm;
			case 1:
			case 2:
				return portm_1_lane_10ka_mcm;
			case 3:
				return portm_1_lane_slow;
			default:
				return NULL;
			}
		}
	} else if (cavm_is_model(OCTEONTX_CN10KB)) {
		switch (portm) {
		case 0:
		case 1:
			return portm_1_lane_slow_usgmii_usxgmii;
		case 2:
		case 3:
		case 4:
		case 5:
			return portm_1_lane_all_basex;
		default:
			return NULL;
		}
	} else if (cavm_is_model(OCTEONTX_CNF10KA)) {
		switch (portm) {
		case 0:
		case 4:
			return portm_4_lane_25g;
		case 1:
		case 3:
		case 5:
		case 7:
			return portm_1_lane_25g;
		case 2:
		case 6:
			return portm_2_lane_25g;
		case 8:
		case 16:
			return portm_4_lane_jesd;
		case 9:
		case 11:
		case 17:
		case 19:
			return portm_1_lane_jesd;
		case 10:
		case 18:
			return portm_2_lane_jesd;
		case 12:
		case 13:
		case 14:
		case 15:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
			return portm_jesd;
		default:
			return NULL;
		}
	} else if (cavm_is_model(OCTEONTX_CNF10KB)) {
		switch (portm) {
		case 0:
			return portm_4_lane;
		case 1:
		case 3:
		case 5:
		case 19:
			return portm_1_lane;
		case 2:
		case 4:
		case 18:
			return portm_2_lane;
		case 6:
		case 10:
		case 14:
			return portm_4_lane_cpri;
		case 7:
		case 9:
		case 11:
		case 13:
		case 15:
		case 17:
			return portm_1_lane_cpri;
		case 8:
		case 12:
		case 16:
			return portm_2_lane_cpri;
		default:
			return NULL;
		}
	}
	return NULL;
}

/**
 * Return an array describing the modes allowed for a PORTM
 *
 * @param portm    PORTM to describe
 *
 * @return Mode description
 */
const cn10k_portm_gserm_mac_map_t *portm_get_gserm_mac_map(void)
{
	if (cavm_is_model(OCTEONTX_CN10KA)) {
		if (plat_get_altpkg() == CN10KA_PKG)
			return portm_gserm_mac_map_cn10ka;
		else
			return portm_gserm_mac_map_cn10kas;
	} else if (cavm_is_model(OCTEONTX_CN10KB))
		return portm_gserm_mac_map_cn10kb;
	else if (cavm_is_model(OCTEONTX_CNF10KA))
		return portm_gserm_mac_map_cnf10ka;
	else if (cavm_is_model(OCTEONTX_CNF10KB))
		return portm_gserm_mac_map_cnf10kb;

	return NULL;
}

/**
 * Convert a PORT mode into a configuration variable string value
 *
 * @param mode	 Mode to convert
 *
 * @return configuration value string
 */
const char *cn10k_portm_mode_to_cfg_str(cn10k_portm_modes_t mode)
{
	const char *str;

#define MODE_CASE(m) case m: str = ((const char *)#m)+11; break

	switch (mode) {
	MODE_CASE(PORTM_MODE_DISABLED);
	MODE_CASE(PORTM_MODE_INVALID);
	MODE_CASE(PORTM_MODE_INACTIVE);
	MODE_CASE(PORTM_MODE_SGMII);
	MODE_CASE(PORTM_MODE_1000BASE_X);
	MODE_CASE(PORTM_MODE_SFI_1G);
	MODE_CASE(PORTM_MODE_2500BASE_X);
	MODE_CASE(PORTM_MODE_5000BASE_X);
	MODE_CASE(PORTM_MODE_QSGMII);
	MODE_CASE(PORTM_MODE_XFI);
	MODE_CASE(PORTM_MODE_SFI);
	MODE_CASE(PORTM_MODE_10GBASE_KR);
	MODE_CASE(PORTM_MODE_25GAUI_C2C);
	MODE_CASE(PORTM_MODE_25GAUI_C2M);
	MODE_CASE(PORTM_MODE_25GBASE_USR);
	MODE_CASE(PORTM_MODE_25GBASE_CR);
	MODE_CASE(PORTM_MODE_25GBASE_KR);
	MODE_CASE(PORTM_MODE_25GBASE_CR_C);
	MODE_CASE(PORTM_MODE_25GBASE_KR_C);
	MODE_CASE(PORTM_MODE_XLAUI);
	MODE_CASE(PORTM_MODE_XLAUI_C2M);
	MODE_CASE(PORTM_MODE_40GBASE_CR4);
	MODE_CASE(PORTM_MODE_40GBASE_KR4);
	MODE_CASE(PORTM_MODE_LAUI_2_C2C);
	MODE_CASE(PORTM_MODE_LAUI_2_C2M);
	MODE_CASE(PORTM_MODE_50GBASE_CR2_C);
	MODE_CASE(PORTM_MODE_50GBASE_KR2_C);
	MODE_CASE(PORTM_MODE_50GAUI_1_C2C);
	MODE_CASE(PORTM_MODE_50GAUI_1_C2M);
	MODE_CASE(PORTM_MODE_50GBASE_USR);
	MODE_CASE(PORTM_MODE_50GBASE_CR);
	MODE_CASE(PORTM_MODE_50GBASE_KR);
	MODE_CASE(PORTM_MODE_CAUI_4_C2C);
	MODE_CASE(PORTM_MODE_CAUI_4_C2M);
	MODE_CASE(PORTM_MODE_100GBASE_CR4);
	MODE_CASE(PORTM_MODE_100GBASE_KR4);
	MODE_CASE(PORTM_MODE_100GAUI_2_C2C);
	MODE_CASE(PORTM_MODE_100GAUI_2_C2M);
	MODE_CASE(PORTM_MODE_100GBASE_USR2);
	MODE_CASE(PORTM_MODE_100GBASE_CR2);
	MODE_CASE(PORTM_MODE_100GBASE_KR2);
	MODE_CASE(PORTM_MODE_802_3AP);

	/* USXGMII modes*/
	MODE_CASE(PORTM_MODE_2_5G_SXGMII);
	MODE_CASE(PORTM_MODE_5G_SXGMII);
	MODE_CASE(PORTM_MODE_10G_SXGMII);
	MODE_CASE(PORTM_MODE_10G_DXGMII);
	MODE_CASE(PORTM_MODE_10G_QXGMII);

	/* USGMII modes*/
	MODE_CASE(PORTM_MODE_Q_USGMII);
	MODE_CASE(PORTM_MODE_O_USGMII);

	/* CPRI modes*/
	MODE_CASE(PORTM_MODE_CPRI_2_4G);
	MODE_CASE(PORTM_MODE_CPRI_3_1G);
	MODE_CASE(PORTM_MODE_CPRI_4_9G);
	MODE_CASE(PORTM_MODE_CPRI_6_1G);
	MODE_CASE(PORTM_MODE_CPRI_9_8G);
	MODE_CASE(PORTM_MODE_CPRI_2_4G_TEST);
	MODE_CASE(PORTM_MODE_CPRI_3_1G_TEST);
	MODE_CASE(PORTM_MODE_CPRI_4_9G_TEST);
	MODE_CASE(PORTM_MODE_CPRI_6_1G_TEST);
	MODE_CASE(PORTM_MODE_CPRI_9_8G_TEST);
	MODE_CASE(PORTM_MODE_CPRI_12_3G_TEST);
	MODE_CASE(PORTM_MODE_CPRI_19_7G_TEST);

	/* JESD204C modes*/
	MODE_CASE(PORTM_MODE_JESD204C_12_2G);
	MODE_CASE(PORTM_MODE_JESD204C_16_2G);
	MODE_CASE(PORTM_MODE_JESD204C_24_3G);

	default:
		WARN("%s: invalid PORTM mode %d\n", __func__, mode);
		str = "INVALID_PORTM_MODE_VALUE";
		break;
	}
	return str;
}

/**
 * Convert a PORTM MAC type into a configuration variable string value
 *
 * @param mac_type    MAC type to convert
 *
 * @return configuration value string
 */
const char *cn10k_portm_mac_type_to_cfg_str(cn10k_portm_mac_type_t mac_type)
{
	const char *str;

#define MAC_CASE(m) case m: str = ((const char *)#m)+6; break

	switch (mac_type) {
	MAC_CASE(PORTM_DIS);
	MAC_CASE(PORTM_ETH);
	MAC_CASE(PORTM_JESD);
	MAC_CASE(PORTM_CPRI);
	default:
		WARN("%s: invalid MAC type %d\n", __func__, mac_type);
		str = "INVALID_MAC_TYPE_VALUE";
		break;
	}
	return str;
}

/**
 * Convert a configuration variable value string into a mode
 *
 * @param val  Configuration variable value
 *
 * @return mode
 */
cn10k_portm_modes_t cn10k_portm_cfg_string_to_mode(const char *val)
{
	cn10k_portm_modes_t mode;

	/* Search for matching mode */
	for (mode = 0; mode < PORTM_MODE_LAST; mode++) {
		if (strcmp(val, cn10k_portm_mode_to_cfg_str(mode)) == 0)
			return mode;
	}
	return PORTM_MODE_DISABLED;
}

/**
 * Get a supported mode for a PORTM
 *
 * @param portm  PORTM to query
 * @param index  Index into modes list. Start at zero and increment until the PORTM
 *				 mode is disabled.
 *
 * @return PORTM mode
 */
cn10k_portm_modes_t cn10k_portm_get_mode(int portm, int index)
{
	const cn10k_portm_modes_t *descr = portm_get_mode_desc(portm);

	if (!descr)
		return PORTM_MODE_DISABLED;
	return descr[index];
}

/**
 * Get the first portm connected to GSERM
 *
 * @param gserm GSERM to query
 *
 * @return PORTM num, -1 on failure
 */
int cn10k_portm_gserm_get_first_portm_num(int gserm)
{
	const cn10k_portm_gserm_mac_map_t *descr = portm_get_gserm_mac_map();
	int portm;
	int valid = 0;

	if (!descr)
		return -1;

	for (portm = 0; portm < plat_octeontx_scfg->portm_count; portm++) {
		if (descr[portm].gser == gserm) {
			valid = 1;
			break;
		}
	}

	if (!valid)
		return -1;

	return portm;
}

/**
 * Get the associated GSER num for a PORTM
 *
 * @param portm  PORTM to query
 *
 * @return GSER num
 */
int cn10k_portm_get_gser_num(int portm)
{
	const cn10k_portm_gserm_mac_map_t *descr = portm_get_gserm_mac_map();

	if ((!descr) || (portm > plat_octeontx_scfg->portm_count))
		return -1;
	return descr[portm].gser;
}

/**
 * Get the associated GSER lane num for a PORTM
 *
 * @param portm  PORTM to query
 *
 * @return GSER lane num
 */
int cn10k_portm_get_gser_lane_num(int portm)
{
	const cn10k_portm_gserm_mac_map_t *descr = portm_get_gserm_mac_map();

	if ((!descr) || (portm > plat_octeontx_scfg->portm_count))
		return -1;
	return descr[portm].gser_lane;
}

/**
 * Get the maximum GSER lane num for a PORTM
 * e.g. If connected to 4-lane GSERM, value would be 3 (lane 3 is max)
 *
 * @param portm  PORTM to query
 *
 * @return GSER lane num
 */
int cn10k_portm_get_max_gser_lane_num(int portm)
{
	const cn10k_portm_gserm_mac_map_t *descr = portm_get_gserm_mac_map();

	if ((!descr) || (portm > plat_octeontx_scfg->portm_count))
		return -1;
	return descr[portm].max_gser_lane;
}

/**
 * Get the associated RPM num for a PORTM
 *
 * @param portm  PORTM to query
 *
 * @return RPM num
 */
int cn10k_portm_get_rpm_num(int portm)
{
	const cn10k_portm_gserm_mac_map_t *descr = portm_get_gserm_mac_map();

	if ((!descr) || (portm > plat_octeontx_scfg->portm_count))
		return -1;
	return descr[portm].mac_eth;
}

/**
 * Get the associated LMAC num for a PORTM
 *
 * @param portm  PORTM to query
 *
 * @return RPM LMAC num
 */
int cn10k_portm_get_rpm_lmac_num(int portm)
{
	const cn10k_portm_gserm_mac_map_t *descr = portm_get_gserm_mac_map();

	if ((!descr) || (portm > plat_octeontx_scfg->portm_count))
		return -1;
	return descr[portm].mac_eth_lmac;
}

/**
 * Get the associated Other MAC (e.g. CPRI, JESD) num for a PORTM
 *
 * @param portm  PORTM to query
 *
 * @return RPM num
 */
int cn10k_portm_get_other_mac_num(int portm)
{
	const cn10k_portm_gserm_mac_map_t *descr = portm_get_gserm_mac_map();

	if ((!descr) || (portm > plat_octeontx_scfg->portm_count))
		return -1;
	return descr[portm].mac_other;
}

/**
 * Get the associated Other MACs (e.g. CPRI, JESD) lowest lane num for a PORTM
 *
 * @param portm  PORTM to query
 *
 * @return RPM num
 */
int cn10k_portm_get_other_mac_lane_num(int portm)
{
	const cn10k_portm_gserm_mac_map_t *descr = portm_get_gserm_mac_map();

	if ((!descr) || (portm > plat_octeontx_scfg->portm_count))
		return -1;
	return descr[portm].mac_other_lane;
}

/**
 * Return the number of PORTM modes supported for the port
 *
 * @return Number of modes supported
 */
int cn10k_get_portm_mode_count(int portm)
{
	int i = 0;
	cn10k_portm_modes_t mode_temp;

	do {
		mode_temp = cn10k_portm_get_mode(portm, i);
		i++;
	} while (mode_temp != PORTM_MODE_DISABLED);

	return i;
}

/**
 * Get a supported FEC(s) for a PORTM mode
 *
 * @param  mode  PORTM mode to query
 *
 * @return PORTM fec(s)
 */
cn10k_portm_fec_t cn10k_portm_get_mode_desc_fec(cn10k_portm_modes_t mode)
{
	int i = 0;
	cn10k_portm_modes_t mode_temp;

	do {
		mode_temp = portm_mode_desc_list[i].mode;
		if (mode == mode_temp) {
			return portm_mode_desc_list[i].fec;
		}
		i++;
	} while (mode_temp != PORTM_MODE_DISABLED);

	return PORTM_FEC_DISABLED;
}

/**
 * Get the Lowest supported FEC for a PORTM mode
 *
 * @param  mode  PORTM mode to query
 *
 * @return PORTM fec
 */
cn10k_portm_fec_t cn10k_portm_get_mode_desc_fec_low(cn10k_portm_modes_t mode)
{
	cn10k_portm_fec_t fec;

	switch (mode) {
	case PORTM_MODE_50GAUI_1_C2C:
	case PORTM_MODE_50GAUI_1_C2M:
	case PORTM_MODE_50GBASE_USR:
	case PORTM_MODE_50GBASE_CR:
	case PORTM_MODE_50GBASE_KR:
	case PORTM_MODE_100GAUI_2_C2C:
	case PORTM_MODE_100GAUI_2_C2M:
	case PORTM_MODE_100GBASE_USR2:
	case PORTM_MODE_100GBASE_CR2:
	case PORTM_MODE_100GBASE_KR2:
		fec = PORTM_FEC_RS_544_ONLY;
		break;
	case PORTM_MODE_100GBASE_CR4:
	case PORTM_MODE_100GBASE_KR4:
		fec = PORTM_FEC_RS_528_ONLY;
		break;
	default:
		fec = PORTM_FEC_DISABLED;
		break;
	}

	return fec;
}

/**
 * Check if a FEC is valid for a PORTM mode
 *
 * @param  mode  PORTM mode
 * @param  *fec   If invalid, update FEC to supported FEC
 *
 * @return 1 = valid, 0 = not valid
 */
int cn10k_portm_fec_valid(cn10k_portm_modes_t mode, cn10k_portm_fec_t *fec)
{
	int valid = 0;

	switch (*fec) {
	case PORTM_FEC_DISABLED:
		*fec = cn10k_portm_get_mode_desc_fec_low(mode);
		if (*fec == PORTM_FEC_DISABLED)
			valid = 1;
		break;
	case PORTM_FEC_BASER_RS:
		/* If 802.2AP mode than do not change FEC */
		if (cn10k_portm_get_mode_desc_ap_sup(mode) ||
		    (mode == PORTM_MODE_802_3AP))
			valid = 1;
		else if (PORTM_FEC_RS & cn10k_portm_get_mode_desc_fec(mode)) {
			valid = 1;
			*fec = PORTM_FEC_RS;
		} else if (PORTM_FEC_BASER & cn10k_portm_get_mode_desc_fec(mode)) {
			valid = 1;
			*fec = PORTM_FEC_BASER;
		} else
			*fec = cn10k_portm_get_mode_desc_fec_low(mode);
		break;
	default:
		if (*fec & cn10k_portm_get_mode_desc_fec(mode))
			valid = 1;
		else
			*fec = cn10k_portm_get_mode_desc_fec_low(mode);
		break;
	}

	return valid;
}

/**
 * Check whether PORTM mode supports FEC Abil
 *
 * @param  mode  PORTM mode to query
 *
 * @return 1 if supported, 0 if not
 */
cn10k_portm_fec_abil_t cn10k_portm_get_mode_desc_fec_abil(cn10k_portm_modes_t mode)
{
	int i = 0;
	cn10k_portm_modes_t mode_temp;

	do {
		mode_temp = portm_mode_desc_list[i].mode;
		if (mode == mode_temp) {
			return portm_mode_desc_list[i].fec_abil;
		}
		i++;
	} while (mode_temp != PORTM_MODE_DISABLED);

	return PORTM_FEC_ABIL_DISABLED;
}

/**
 * Get the number SERDES lanes used by PORTM mode
 *
 * @param  mode  PORTM mode to query
 *
 * @return PORTM serdes_num
 */
int cn10k_portm_get_mode_desc_serdes_num(cn10k_portm_modes_t mode)
{
	int i = 0;
	cn10k_portm_modes_t mode_temp;

	do {
		mode_temp = portm_mode_desc_list[i].mode;
		if (mode == mode_temp) {
			return portm_mode_desc_list[i].serdes_num;
		}
		i++;
	} while (mode_temp != PORTM_MODE_DISABLED);

	return -1;
}

/**
 * Get the number MACs used by PORTM mode
 *
 * @param  mode  PORTM mode to query
 *
 * @return PORTM mac_num
 */
int cn10k_portm_get_mode_desc_mac_num(cn10k_portm_modes_t mode)
{
	int i = 0;
	cn10k_portm_modes_t mode_temp;

	do {
		mode_temp = portm_mode_desc_list[i].mode;
		if (mode == mode_temp) {
			return portm_mode_desc_list[i].mac_num;
		}
		i++;
	} while (mode_temp != PORTM_MODE_DISABLED);

	return -1;
}

/**
 * Check whether PORTM mode support 802_3AP
 *
 * @param  mode  PORTM mode to query
 *
 * @return 1 if supported, 0 if not, -1 mode invalid
 */
int cn10k_portm_get_mode_desc_ap_sup(cn10k_portm_modes_t mode)
{
	int i = 0;
	cn10k_portm_modes_t mode_temp;

	do {
		mode_temp = portm_mode_desc_list[i].mode;
		if (mode == mode_temp) {
			return portm_mode_desc_list[i].ap_sup;
		}
		i++;
	} while (mode_temp != PORTM_MODE_DISABLED);

	return -1;
}

/**
 * Get the datarate in MHz for a PORTM mode
 *
 * @param  mode  PORTM mode to query
 *
 * @return 1 if supported, 0 if not, -1 mode invalid
 */
int cn10k_portm_get_mode_desc_speed_mhz(cn10k_portm_modes_t mode)
{
	int i = 0;
	cn10k_portm_modes_t mode_temp;

	do {
		mode_temp = portm_mode_desc_list[i].mode;
		if (mode == mode_temp) {
			return portm_mode_desc_list[i].speed_mhz;
		}
		i++;
	} while (mode_temp != PORTM_MODE_DISABLED);

	return -1;
}

/**
 * Get the MAC type for a PORTM mode
 *
 * @param  mode  PORTM mode to query
 *
 * @return 1 if supported, 0 if not, -1 mode invalid
 */
int cn10k_portm_get_mode_desc_mac_type(cn10k_portm_modes_t mode)
{
	int i = 0;
	cn10k_portm_modes_t mode_temp;

	do {
		mode_temp = portm_mode_desc_list[i].mode;
		if (mode == mode_temp) {
			return portm_mode_desc_list[i].mac_type;
		}
		i++;
	} while (mode_temp != PORTM_MODE_DISABLED);

	return -1;
}

/**
 * Checks whether mode is supported on portm of chip
 *
 * @param portm       PORTM to query
 * @param portm_mode  PORTM mode to query
 *
 * @return 1 valid, 0 invalid
 */
int cn10k_portm_mode_valid(int portm, cn10k_portm_modes_t portm_mode)
{
	int ret = 0;
	int i = 0;
	cn10k_portm_modes_t mode_temp;
	do {
		mode_temp = cn10k_portm_get_mode(portm, i);
		if (portm_mode == mode_temp) {
			ret = 1;
			break;
		}
	i++;
	} while (mode_temp != PORTM_MODE_DISABLED);

	return ret;
}

/**
 * Get PCS type used by PORTM mode
 *
 * @param  mode  PORTM mode to query
 *
 * @return PCS type
 */
int cn10k_portm_get_pcs_type(cn10k_portm_modes_t mode)
{
	int i = 0;
	cn10k_portm_modes_t mode_temp;

	do {
		mode_temp = portm_mode_desc_list[i].mode;
		if (mode == mode_temp) {
			return portm_mode_desc_list[i].pcs_type;
		}
		i++;
	} while (mode_temp != PORTM_MODE_DISABLED);

	return -1;
}

/**
 * Get the default Tx Equalization settings for PORTM mode
 *
 * @param  mode  PORTM mode to query
 *
 * @return 0 = valid tx_tuning.portm_mode, 1 = invalid portm_mode
 */
int cn10k_portm_get_default_tx_eq(portm_tx_tuning_t *tx_tuning)
{
	int ret = 1;
	int i = 0;
	cn10k_portm_modes_t mode_temp;

	do {
		mode_temp = portm_default_tx_tuning_list[i].portm_mode;
		if (tx_tuning->portm_mode == mode_temp) {
			tx_tuning->tx_main = portm_default_tx_tuning_list[i].tx_main;
			tx_tuning->tx_post = portm_default_tx_tuning_list[i].tx_post;
			tx_tuning->tx_pre1 = portm_default_tx_tuning_list[i].tx_pre1;
			tx_tuning->tx_pre2 = portm_default_tx_tuning_list[i].tx_pre2;
			ret = 0;
			break;
		}
		i++;
	} while (mode_temp != PORTM_MODE_DISABLED);

	return ret;
}

/**
 * Checks whether the Tx tuning settings are valid
 *
 * @param  portm_idx  portm
 * @param  index      portm lane index
 * @param  tx_tuning  Tx tuning struct
 *
 * @return 1 = Valid, 0 = Invalid
 */
int cn10k_portm_tx_tuning_valid(int portm_idx, int index, portm_tx_tuning_t *tx_tuning)
{
#define ABS(_a) ((_a) < 0 ? (-_a) : (_a))

	int valid = 1;
	int tx_sum = ABS(tx_tuning->tx_post) + tx_tuning->tx_main +
		ABS(tx_tuning->tx_pre1) + ABS(tx_tuning->tx_pre2);

	/* Check the the Tx settings are valid */
	if ((tx_tuning->tx_pre2 < TXEQ_PRE2_MIN) || (tx_tuning->tx_pre2 > TXEQ_PRE2_MAX)) {
		ERROR("PORTM%d.%d: Invalid Tx tuning, Tx_pre2(%d) must be %d to %d\n",
		      portm_idx, index, tx_tuning->tx_pre2, TXEQ_PRE2_MIN, TXEQ_PRE2_MAX);
		valid = 0;
	}

	if ((tx_tuning->tx_pre1 < TXEQ_PRE1_MIN) || (tx_tuning->tx_pre1 > TXEQ_PRE1_MAX)) {
		ERROR("PORTM%d.%d: Invalid Tx tuning, Tx_pre1(%d) must be %d to %d\n",
		      portm_idx, index, tx_tuning->tx_pre1, TXEQ_PRE1_MIN, TXEQ_PRE1_MAX);
		valid = 0;
	}

	if ((tx_tuning->tx_main < TXEQ_MAIN_MIN) || (tx_tuning->tx_main > TXEQ_MAIN_MAX)) {
		ERROR("PORTM%d.%d: Invalid Tx tuning, Tx_main(%d) must be %d to %d\n",
		      portm_idx, index, tx_tuning->tx_main, TXEQ_MAIN_MIN, TXEQ_MAIN_MAX);
		valid = 0;
	}

	if ((tx_tuning->tx_post < TXEQ_POST_MIN) || (tx_tuning->tx_post > TXEQ_POST_MAX)) {
		ERROR("PORTM%d.%d: Invalid Tx tuning, Tx_post(%d) must be %d to %d\n",
		      portm_idx, index, tx_tuning->tx_post, TXEQ_POST_MIN, TXEQ_POST_MAX);
		valid = 0;
	}

	if (tx_sum > 63) {
		ERROR("PORTM%d.%d: Invalid Tx tuning, Sum of all Tx settings(%d) must be %d or less\n",
		      portm_idx, index, tx_sum, TXEQ_SUM_MAX);
		valid = 0;
	}

	return valid;
}

/**
 * Updates the 802.3AP advertisement struct based on portm_mode and FEC settings
 *
 * @param  mode_idx   portm mode
 * @param  fec_types  FEC(s) Requested
 * @param  fec_abil   FEC(s) Abilities
 * @param  *ap_adv    802.3AP advertisement struct
 *
 */
void cn10k_portm_update_802_3ap_adv(cn10k_portm_modes_t mode_idx,
				    cn10k_portm_fec_t fec_types, int fec_abil,
				    portm_ap_802_3_adv_t *ap_adv)
{
	switch (mode_idx) {
		case PORTM_MODE_10GBASE_KR:
			ap_adv->an_10gbase_kr = 1;
			/* Advertise Clause 74 FEC (Fire Code) Ability in Base Page F0 bit */
			if ((fec_abil & PORTM_FEC_ABIL_BASER) ||
			    (fec_types & PORTM_FEC_BASER))
				ap_adv->fec_10g_abil = 1;
			if (fec_types & PORTM_FEC_BASER)
				ap_adv->fec_10g_req = 1;
			break;
		case PORTM_MODE_40GBASE_CR4:
			ap_adv->an_40gbase_cr4 = 1;
			/* Advertise Clause 74 FEC (Fire Code) Ability in Base Page F0 bit */
			if ((fec_abil & PORTM_FEC_ABIL_BASER) ||
			    (fec_types & PORTM_FEC_BASER))
				ap_adv->fec_10g_abil = 1;
			if (fec_types & PORTM_FEC_BASER)
				ap_adv->fec_10g_req = 1;
			break;
		case PORTM_MODE_40GBASE_KR4:
			ap_adv->an_40gbase_kr4 = 1;
			/* Advertise Clause 74 FEC (Fire Code) Ability in Base Page F0 bit */
			if ((fec_abil & PORTM_FEC_ABIL_BASER) ||
			    (fec_types & PORTM_FEC_BASER))
				ap_adv->fec_10g_abil = 1;
			if (fec_types & PORTM_FEC_BASER)
				ap_adv->fec_10g_req = 1;
			break;
		case PORTM_MODE_25GBASE_CR:
		case PORTM_MODE_25GBASE_KR:
			ap_adv->an_25gbase_kcr = 1;
			ap_adv->an_25gbase_kcrs = 1;
			if (fec_types & PORTM_FEC_BASER)
				ap_adv->fec_25g_baser = 1;
			if (fec_types & PORTM_FEC_RS)
				ap_adv->fec_25g_rs = 1;
			break;
		case PORTM_MODE_25GBASE_CR_C:
			ap_adv->an_25gbase_cr_cons = 1;
			/* Advertise BASE-R FEC Ability for 25G/50G Consortium */
			if ((fec_abil & PORTM_FEC_ABIL_BASER) ||
			    (fec_types & PORTM_FEC_BASER))
				ap_adv->fec_25g_baser_abil = 1;
			/* Advertise RS-FEC Ability for 25G/50G Consortium */
			if ((fec_abil & PORTM_FEC_ABIL_RS) ||
			    (fec_types & PORTM_FEC_RS))
				ap_adv->fec_25g_rs_abil = 1;
			if (fec_types & PORTM_FEC_BASER)
				ap_adv->fec_25g_baser_cons = 1;
			if (fec_types & PORTM_FEC_RS)
				ap_adv->fec_25g_rs_cons = 1;
			break;
		case PORTM_MODE_25GBASE_KR_C:
			ap_adv->an_25gbase_kr_cons = 1;
			/* Advertise BASE-R FEC Ability for 25G/50G Consortium */
			if ((fec_abil & PORTM_FEC_ABIL_BASER) ||
			    (fec_types & PORTM_FEC_BASER))
				ap_adv->fec_25g_baser_abil = 1;
			/* Advertise RS-FEC Ability for 25G/50G Consortium */
			if ((fec_abil & PORTM_FEC_ABIL_RS) ||
			    (fec_types & PORTM_FEC_RS))
				ap_adv->fec_25g_rs_abil = 1;
			if (fec_types & PORTM_FEC_BASER)
				ap_adv->fec_25g_baser_cons = 1;
			if (fec_types & PORTM_FEC_RS)
				ap_adv->fec_25g_rs_cons = 1;
			break;
		case PORTM_MODE_50GBASE_CR2_C:
			ap_adv->an_50gbase_cr2_cons = 1;
			/* Advertise BASE-R FEC Ability for 25G/50G Consortium */
			if ((fec_abil & PORTM_FEC_ABIL_BASER) ||
			    (fec_types & PORTM_FEC_BASER))
				ap_adv->fec_25g_baser_abil = 1;
			/* Advertise RS-FEC Ability for 25G/50G Consortium */
			if ((fec_abil & PORTM_FEC_ABIL_RS) ||
			    (fec_types & PORTM_FEC_RS))
				ap_adv->fec_25g_rs_abil = 1;
			if (fec_types & PORTM_FEC_BASER)
				ap_adv->fec_25g_baser_cons = 1;
			if (fec_types & PORTM_FEC_RS)
				ap_adv->fec_25g_rs_cons = 1;
			break;
		case PORTM_MODE_50GBASE_KR2_C:
			ap_adv->an_50gbase_kr2_cons = 1;
			/* Advertise BASE-R FEC Ability for 25G/50G Consortium */
			if ((fec_abil & PORTM_FEC_ABIL_BASER) ||
			    (fec_types & PORTM_FEC_BASER))
				ap_adv->fec_25g_baser_abil = 1;
			/* Advertise RS-FEC Ability for 25G/50G Consortium */
			if ((fec_abil & PORTM_FEC_ABIL_RS) ||
			    (fec_types & PORTM_FEC_RS))
				ap_adv->fec_25g_rs_abil = 1;
			if (fec_types & PORTM_FEC_BASER)
				ap_adv->fec_25g_baser_cons = 1;
			if (fec_types & PORTM_FEC_RS)
				ap_adv->fec_25g_rs_cons = 1;
			break;
		case PORTM_MODE_50GBASE_CR:
		case PORTM_MODE_50GBASE_KR:
			ap_adv->an_50gbase_kcr = 1;
			/* If 100GBASE-CR2 is HCD, RS-FEC is alway enabled */
			break;
		case PORTM_MODE_100GBASE_CR4:
			ap_adv->an_100gbase_cr4 = 1;
			/* If 100GBASE-CR4 is HCD, RS-FEC is alway enabled */
			break;
		case PORTM_MODE_100GBASE_KR4:
			ap_adv->an_100gbase_kr4 = 1;
			/* If 100GBASE-KR2 is HCD, RS-FEC is alway enabled */
			break;
		case PORTM_MODE_100GBASE_CR2:
		case PORTM_MODE_100GBASE_KR2:
			ap_adv->an_100gbase_kcr2 = 1;
			/* If 100GBASE-CR2 is HCD, RS-FEC is alway enabled */
			break;
		default: /* Mode does not support 802.3AP */
			return;
	}
	/* Standard Settings used for all modes */
	/* Advertise Pause Ability in Base Page bit C0 */
	ap_adv->fc_pause = 1;
	/* Advertise Pause ASM_DIR Ability in Base Page C1 */
	ap_adv->fc_asm_dir = 1;
}

/**
 * Updates the 802.3AP advertisement struct based on FEC(s) requested
 * Clears any exiting FEC requests prior to programming new FEC requests
 * FEC settings are programmed based on current mode advertisements.
 * Note: does not update FEC abilities
 * @param  fec_types  FEC(s) Requested
 * @param  *ap_adv    802.3AP advertisement struct
 *
 */
void cn10k_portm_update_802_3ap_fec(cn10k_portm_fec_t fec_types,
				    portm_ap_802_3_adv_t *ap_adv)
{
	/* Clear existing FEC requests */
	ap_adv->fec_10g_req = 0;
	ap_adv->fec_25g_baser = 0;
	ap_adv->fec_25g_baser_cons = 0;
	ap_adv->fec_25g_rs = 0;
	ap_adv->fec_25g_rs_cons = 0;

	if (fec_types & PORTM_FEC_BASER) {
		/* Check if 10Gb/s BASER mode */
		if (ap_adv->an_10gbase_kr
		    || ap_adv->an_40gbase_cr4
		    || ap_adv->an_40gbase_kr4) {
			ap_adv->fec_10g_req = 1;
			ap_adv->fec_10g_abil = 1;
		}
		/* Check if 25Gb/s Base-spec mode */
		if (ap_adv->an_25gbase_kcr
		    || ap_adv->an_25gbase_kcrs)
			ap_adv->fec_25g_baser = 1;
		/* Check if 25Gb/s Cons mode */
		if (ap_adv->an_25gbase_cr_cons
		    || ap_adv->an_25gbase_kr_cons) {
			ap_adv->fec_25g_baser_abil = 1;
			ap_adv->fec_25g_baser_cons = 1;
		}
	}

	if (fec_types & PORTM_FEC_RS) {
		/* Check if 25Gb/s Base-spec mode */
		if (ap_adv->an_25gbase_kcr
		    || ap_adv->an_25gbase_kcrs)
			ap_adv->fec_25g_rs = 1;
		/* Check if 25Gb/s Cons mode */
		if (ap_adv->an_25gbase_cr_cons
		    || ap_adv->an_25gbase_kr_cons
		    || ap_adv->an_50gbase_cr2_cons
		    || ap_adv->an_50gbase_kr2_cons) {
			ap_adv->fec_25g_rs_abil = 1;
			ap_adv->fec_25g_rs_cons = 1;
		}
	}
}
