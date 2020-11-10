/*
 * Copyright (C) 2020 Marvell International Ltd.
 * This program is provided "as is" without any warranty of any kind,
 * and is distributed under the applicable Marvell proprietary limited use
 * license agreement.
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

#define DISABLE -1

/**
 * Return the number of PORTM's supported for the chip
 *
 * @return Number of PORTM'S
 */
int cn10k_get_portm_count(void)
{
	if (cavm_is_model(OCTEONTX_CNF10KA))
		return 28;
	else if (cavm_is_model(OCTEONTX_CN10KA)) {
		if (plat_get_altpkg() == CN10KA_PKG)
			return 6;
		else
			return 4;
	} else if (cavm_is_model(OCTEONTX_CNF10KB))
		return 20;
	return -1;
}

static const cn10k_portm_mode_desc_t portm_mode_desc_list[] = {
	/* Ethernet modes */
	{PORTM_MODE_SGMII,		  PORTM_FEC_DISABLED,		1, 1, 0},
	{PORTM_MODE_1000BASE_X,		  PORTM_FEC_DISABLED,		1, 1, 0},
	{PORTM_MODE_SFI_1G,		  PORTM_FEC_DISABLED,		1, 1, 0},
	{PORTM_MODE_QSGMII,		  PORTM_FEC_DISABLED,		1, 4, 0},
	{PORTM_MODE_XFI,		  PORTM_FEC_BASER,		1, 1, 0},
	{PORTM_MODE_SFI,		  PORTM_FEC_BASER,		1, 1, 0},
	{PORTM_MODE_10GBASE_KR,		  PORTM_FEC_BASER,		1, 1, 1},
	{PORTM_MODE_25GAUI_C2C,		  PORTM_FEC_BASER_RSFEC,	1, 1, 0},
	{PORTM_MODE_25GAUI_C2M,		  PORTM_FEC_BASER_RSFEC,	1, 1, 0},
	{PORTM_MODE_25GBASE_CR,		  PORTM_FEC_BASER_RSFEC,	1, 1, 1},
	{PORTM_MODE_25GBASE_KR,		  PORTM_FEC_BASER_RSFEC,	1, 1, 1},
	{PORTM_MODE_25GBASE_CR_C,	  PORTM_FEC_BASER_RSFEC,	1, 1, 1},
	{PORTM_MODE_25GBASE_KR_C,	  PORTM_FEC_BASER_RSFEC,	1, 1, 1},
	{PORTM_MODE_XLAUI,		  PORTM_FEC_BASER,		4, 1, 0},
	{PORTM_MODE_XLAUI_C2M,		  PORTM_FEC_BASER,		4, 1, 0},
	{PORTM_MODE_40GBASE_CR4,	  PORTM_FEC_BASER,		4, 1, 1},
	{PORTM_MODE_40GBASE_KR4,	  PORTM_FEC_BASER,		4, 1, 1},
	{PORTM_MODE_LAUI_2_C2C,		  PORTM_FEC_DISABLED,		2, 1, 0},
	{PORTM_MODE_LAUI_2_C2M,		  PORTM_FEC_DISABLED,		2, 1, 0},
	{PORTM_MODE_50GBASE_CR2_C,	  PORTM_FEC_BASER_RSFEC,	2, 1, 1},
	{PORTM_MODE_50GBASE_KR2_C,	  PORTM_FEC_BASER_RSFEC,	2, 1, 1},
	{PORTM_MODE_50GAUI_1_C2C,	  PORTM_FEC_RSFEC_544_ONLY,	1, 1, 0},
	{PORTM_MODE_50GAUI_1_C2M,	  PORTM_FEC_RSFEC_544_ONLY,	1, 1, 0},
	{PORTM_MODE_50GBASE_CR,		  PORTM_FEC_RSFEC_544_ONLY,	1, 1, 1},
	{PORTM_MODE_50GBASE_KR,		  PORTM_FEC_RSFEC_544_ONLY,	1, 1, 1},
	{PORTM_MODE_CAUI_4_C2C,		  PORTM_FEC_BASER_RSFEC,	4, 1, 0},
	{PORTM_MODE_CAUI_4_C2M,		  PORTM_FEC_BASER_RSFEC,	4, 1, 0},
	{PORTM_MODE_100GBASE_CR4,	  PORTM_FEC_RSFEC_528_ONLY,	4, 1, 1},
	{PORTM_MODE_100GBASE_KR4,	  PORTM_FEC_RSFEC_528_ONLY,	4, 1, 1},
	{PORTM_MODE_100GAUI_2_C2C,	  PORTM_FEC_RSFEC_544_ONLY,	2, 1, 0},
	{PORTM_MODE_100GAUI_2_C2M,	  PORTM_FEC_RSFEC_544_ONLY,	2, 1, 0},
	{PORTM_MODE_100GBASE_CR2,	  PORTM_FEC_RSFEC_544_ONLY,	2, 1, 1},
	{PORTM_MODE_100GBASE_KR2,	  PORTM_FEC_RSFEC_544_ONLY,	2, 1, 1},
	{PORTM_MODE_802_3AP,		  PORTM_FEC_BASER_RSFEC,	1, 1, 0},
	{PORTM_MODE_SXGMII_10G,		  PORTM_FEC_DISABLED,		1, 1, 0},
	/* CPRI modes */
	{PORTM_MODE_CPRI_2_4G,		  PORTM_FEC_DISABLED,		1, 1, 0},
	{PORTM_MODE_CPRI_4_9G,		  PORTM_FEC_DISABLED,		1, 1, 0},
	{PORTM_MODE_CPRI_6_1G,		  PORTM_FEC_DISABLED,		1, 1, 0},
	{PORTM_MODE_CPRI_9_8G,		  PORTM_FEC_DISABLED,		1, 1, 0},
	{PORTM_MODE_CPRI_10_1G,		  PORTM_FEC_DISABLED,		1, 1, 0},
	{PORTM_MODE_CPRI_24_3G,		  PORTM_FEC_DISABLED,		1, 1, 0},
	/* JESD204B modes */
	{PORTM_MODE_JESD204B_4_9G,	  PORTM_FEC_DISABLED,		1, 1, 0},
	{PORTM_MODE_JESD204B_6_1G,	  PORTM_FEC_DISABLED,		1, 1, 0},
	{PORTM_MODE_JESD204B_7_3G,	  PORTM_FEC_DISABLED,		1, 1, 0},
	{PORTM_MODE_JESD204B_9_8G,	  PORTM_FEC_DISABLED,		1, 1, 0},
	{PORTM_MODE_JESD204B_12_1G,	  PORTM_FEC_DISABLED,		1, 1, 0},
	{PORTM_MODE_JESD204B_14_7G,   	  PORTM_FEC_DISABLED,		1, 1, 0},
	/* JESD204C modes */
	{PORTM_MODE_JESD204C_2G,	  PORTM_FEC_DISABLED,		1, 1, 0},
	{PORTM_MODE_JESD204C_4G,	  PORTM_FEC_DISABLED,		1, 1, 0},
	{PORTM_MODE_JESD204C_8_1G,	  PORTM_FEC_DISABLED,		1, 1, 0},
	{PORTM_MODE_JESD204C_16_2G,	  PORTM_FEC_DISABLED,		1, 1, 0},
	{PORTM_MODE_JESD204C_24_3G,       PORTM_FEC_DISABLED,		1, 1, 0},

	{PORTM_MODE_DISABLED,		  PORTM_FEC_DISABLED,		1, 1, 0}
};

/* Support 1, 2, and 4 SERDES Lane Ethernet PORTM modes (excluding QSGMII) */
static const cn10k_portm_modes_t portm_4_lane[] = {
	/* Ethernet - 1 lane */
	//PORTM_MODE_SGMII,
	PORTM_MODE_1000BASE_X,
	//PORTM_MODE_SFI_1G,
	PORTM_MODE_XFI,
	PORTM_MODE_SFI,
	//PORTM_MODE_10GBASE_KR,
	PORTM_MODE_25GAUI_C2C,
	PORTM_MODE_25GAUI_C2M,
	//PORTM_MODE_25GBASE_CR,
	//PORTM_MODE_25GBASE_KR,
	//PORTM_MODE_25GBASE_CR_C,
	//PORTM_MODE_25GBASE_KR_C,
	//PORTM_MODE_50GAUI_1_C2C,
	//PORTM_MODE_50GAUI_1_C2M,
	//PORTM_MODE_50GBASE_CR,
	//PORTM_MODE_50GBASE_KR,
	//PORTM_MODE_SXGMII_10G,
	/* Ethernet - 2 lane */
	//PORTM_MODE_LAUI_2_C2C,
	//PORTM_MODE_LAUI_2_C2M,
	//PORTM_MODE_50GBASE_CR2_C,
	//PORTM_MODE_50GBASE_KR2_C,
	//PORTM_MODE_100GAUI_2_C2C,
	//PORTM_MODE_100GAUI_2_C2M,
	//PORTM_MODE_100GBASE_CR2,
	//PORTM_MODE_100GBASE_KR2,
	/* Ethernet - 4 lane */
	//PORTM_MODE_XLAUI,
	//PORTM_MODE_XLAUI_C2M,
	//PORTM_MODE_40GBASE_CR4,
	//PORTM_MODE_40GBASE_KR4,
	//PORTM_MODE_CAUI_4_C2C,
	//PORTM_MODE_CAUI_4_C2M,
	//PORTM_MODE_100GBASE_CR4,
	//PORTM_MODE_100GBASE_KR4,
	/* Ethernet - 802_3AP */
	//PORTM_MODE_802_3AP,

	PORTM_MODE_DISABLED
};

/* Support 1, 2, and 4 SERDES Lane Ethernet and JESD PORTM modes (excluding QSGMII) */
static const cn10k_portm_modes_t portm_4_lane_jesd[] = {
	/* Ethernet - 1 lane */
	//PORTM_MODE_SGMII,
	PORTM_MODE_1000BASE_X,
	//PORTM_MODE_SFI_1G,
	PORTM_MODE_XFI,
	PORTM_MODE_SFI,
	//PORTM_MODE_10GBASE_KR,
	PORTM_MODE_25GAUI_C2C,
	PORTM_MODE_25GAUI_C2M,
	//PORTM_MODE_25GBASE_CR,
	//PORTM_MODE_25GBASE_KR,
	//PORTM_MODE_25GBASE_CR_C,
	//PORTM_MODE_25GBASE_KR_C,
	//PORTM_MODE_50GAUI_1_C2C,
	//PORTM_MODE_50GAUI_1_C2M,
	//PORTM_MODE_50GBASE_CR,
	//PORTM_MODE_50GBASE_KR,
	//PORTM_MODE_SXGMII_10G,
	/* Ethernet - 2 lane */
	//PORTM_MODE_LAUI_2_C2C,
	//PORTM_MODE_LAUI_2_C2M,
	//PORTM_MODE_50GBASE_CR2_C,
	//PORTM_MODE_50GBASE_KR2_C,
	//PORTM_MODE_100GAUI_2_C2C,
	//PORTM_MODE_100GAUI_2_C2M,
	//PORTM_MODE_100GBASE_CR2,
	//PORTM_MODE_100GBASE_KR2,
	/* Ethernet - 4 lane */
	//PORTM_MODE_XLAUI,
	//PORTM_MODE_XLAUI_C2M,
	//PORTM_MODE_40GBASE_CR4,
	//PORTM_MODE_40GBASE_KR4,
	//PORTM_MODE_CAUI_4_C2C,
	//PORTM_MODE_CAUI_4_C2M,
	//PORTM_MODE_100GBASE_CR4,
	//PORTM_MODE_100GBASE_KR4,
	/* Ethernet - 802_3AP */
	//PORTM_MODE_802_3AP,
	/* JESD204B modes*/
	//PORTM_MODE_JESD204B_4_9G,
	//PORTM_MODE_JESD204B_6_1G,
	//PORTM_MODE_JESD204B_7_3G,
	//PORTM_MODE_JESD204B_9_8G,
	//PORTM_MODE_JESD204B_12_1G,
	//PORTM_MODE_JESD204B_14_7G,
	/* JESD204C modes*/
	//PORTM_MODE_JESD204C_2G,
	//PORTM_MODE_JESD204C_4G,
	//PORTM_MODE_JESD204C_8_1G,
	//PORTM_MODE_JESD204C_16_2G,
	//PORTM_MODE_JESD204C_24_3G,

	PORTM_MODE_DISABLED
};

/*
 * Support 1, 2, and 4 SERDES Lane Ethernet and
 * CPRI PORTM modes (excluding QSGMII & USXGMII)
 */
static const cn10k_portm_modes_t portm_4_lane_cpri[] = {
	/* Ethernet - 1 lane */
	//PORTM_MODE_SGMII,
	PORTM_MODE_1000BASE_X,
	//PORTM_MODE_SFI_1G,
	PORTM_MODE_XFI,
	PORTM_MODE_SFI,
	//PORTM_MODE_10GBASE_KR,
	PORTM_MODE_25GAUI_C2C,
	PORTM_MODE_25GAUI_C2M,
	//PORTM_MODE_25GBASE_CR,
	//PORTM_MODE_25GBASE_KR,
	//PORTM_MODE_25GBASE_CR_C,
	//PORTM_MODE_25GBASE_KR_C,
	//PORTM_MODE_50GAUI_1_C2C,
	//PORTM_MODE_50GAUI_1_C2M,
	//PORTM_MODE_50GBASE_CR,
	//PORTM_MODE_50GBASE_KR,
	/* Ethernet - 2 lane */
	//PORTM_MODE_LAUI_2_C2C,
	//PORTM_MODE_LAUI_2_C2M,
	//PORTM_MODE_50GBASE_CR2_C,
	//PORTM_MODE_50GBASE_KR2_C,
	//PORTM_MODE_100GAUI_2_C2C,
	//PORTM_MODE_100GAUI_2_C2M,
	//PORTM_MODE_100GBASE_CR2,
	//PORTM_MODE_100GBASE_KR2,
	/* Ethernet - 4 lane */
	//PORTM_MODE_XLAUI,
	//PORTM_MODE_XLAUI_C2M,
	//PORTM_MODE_40GBASE_CR4,
	//PORTM_MODE_40GBASE_KR4,
	//PORTM_MODE_CAUI_4_C2C,
	//PORTM_MODE_CAUI_4_C2M,
	//PORTM_MODE_100GBASE_CR4,
	//PORTM_MODE_100GBASE_KR4,
	/* Ethernet - 802_3AP */
	//PORTM_MODE_802_3AP,
	/* CPRI modes */
	//PORTM_MODE_CPRI_2_4G,
	//PORTM_MODE_CPRI_4_9G,
	//PORTM_MODE_CPRI_6_1G,
	//PORTM_MODE_CPRI_9_8G,
	//PORTM_MODE_CPRI_10_1G,
	//PORTM_MODE_CPRI_24_3G,

	PORTM_MODE_DISABLED
};

/* Support 1 and 2 SERDES Lane Ethernet (excluding QSGMII) PORTM modes	*/
static const cn10k_portm_modes_t portm_2_lane[] = {
	/* Ethernet - 1 lane */
	//PORTM_MODE_SGMII,
	PORTM_MODE_1000BASE_X,
	//PORTM_MODE_SFI_1G,
	PORTM_MODE_XFI,
	PORTM_MODE_SFI,
	//PORTM_MODE_10GBASE_KR,
	PORTM_MODE_25GAUI_C2C,
	PORTM_MODE_25GAUI_C2M,
	//PORTM_MODE_25GBASE_CR,
	//PORTM_MODE_25GBASE_KR,
	//PORTM_MODE_25GBASE_CR_C,
	//PORTM_MODE_25GBASE_KR_C,
	//PORTM_MODE_50GAUI_1_C2C,
	//PORTM_MODE_50GAUI_1_C2M,
	//PORTM_MODE_50GBASE_CR,
	//PORTM_MODE_50GBASE_KR,
	//PORTM_MODE_SXGMII_10G,
	/* Ethernet - 2 lane */
	//PORTM_MODE_LAUI_2_C2C,
	//PORTM_MODE_LAUI_2_C2M,
	//PORTM_MODE_50GBASE_CR2_C,
	//PORTM_MODE_50GBASE_KR2_C,
	//PORTM_MODE_100GAUI_2_C2C,
	//PORTM_MODE_100GAUI_2_C2M,
	//PORTM_MODE_100GBASE_CR2,
	//PORTM_MODE_100GBASE_KR2,
	/* Ethernet - 802_3AP */
	//PORTM_MODE_802_3AP,

	PORTM_MODE_DISABLED
};

/* Support 1 and 2 SERDES Lane Ethernet (excluding QSGMII) and JESD PORTM modes  */
static const cn10k_portm_modes_t portm_2_lane_jesd[] = {
	/* Ethernet - 1 lane */
	//PORTM_MODE_SGMII,
	PORTM_MODE_1000BASE_X,
	//PORTM_MODE_SFI_1G,
	PORTM_MODE_XFI,
	PORTM_MODE_SFI,
	//PORTM_MODE_10GBASE_KR,
	PORTM_MODE_25GAUI_C2C,
	PORTM_MODE_25GAUI_C2M,
	//PORTM_MODE_25GBASE_CR,
	//PORTM_MODE_25GBASE_KR,
	//PORTM_MODE_25GBASE_CR_C,
	//PORTM_MODE_25GBASE_KR_C,
	//PORTM_MODE_50GAUI_1_C2C,
	//PORTM_MODE_50GAUI_1_C2M,
	//PORTM_MODE_50GBASE_CR,
	//PORTM_MODE_50GBASE_KR,
	//PORTM_MODE_SXGMII_10G,
	/* Ethernet - 2 lane */
	//PORTM_MODE_LAUI_2_C2C,
	//PORTM_MODE_LAUI_2_C2M,
	//PORTM_MODE_50GBASE_CR2_C,
	//PORTM_MODE_50GBASE_KR2_C,
	//PORTM_MODE_100GAUI_2_C2C,
	//PORTM_MODE_100GAUI_2_C2M,
	//PORTM_MODE_100GBASE_CR2,
	//PORTM_MODE_100GBASE_KR2,
	/* Ethernet - 802_3AP */
	//PORTM_MODE_802_3AP,
	/* JESD204B modes*/
	//PORTM_MODE_JESD204B_4_9G,
	//PORTM_MODE_JESD204B_6_1G,
	//PORTM_MODE_JESD204B_7_3G,
	//PORTM_MODE_JESD204B_9_8G,
	//PORTM_MODE_JESD204B_12_1G,
	//PORTM_MODE_JESD204B_14_7G,
	/* JESD204C modes*/
	//PORTM_MODE_JESD204C_2G,
	//PORTM_MODE_JESD204C_4G,
	//PORTM_MODE_JESD204C_8_1G,
	//PORTM_MODE_JESD204C_16_2G,
	//PORTM_MODE_JESD204C_24_3G,

	PORTM_MODE_DISABLED
};
/*
 * Support 1 and 2 SERDES Lane Ethernet
 * (excluding QSGMII & USXGMII) and CPRI PORTM modes
 */
static const cn10k_portm_modes_t portm_2_lane_cpri[] = {
	/* Ethernet - 1 lane */
	//PORTM_MODE_SGMII,
	PORTM_MODE_1000BASE_X,
	//PORTM_MODE_SFI_1G,
	//PORTM_MODE_QSGMII,
	PORTM_MODE_XFI,
	PORTM_MODE_SFI,
	//PORTM_MODE_10GBASE_KR,
	PORTM_MODE_25GAUI_C2C,
	PORTM_MODE_25GAUI_C2M,
	//PORTM_MODE_25GBASE_CR,
	//PORTM_MODE_25GBASE_KR,
	//PORTM_MODE_25GBASE_CR_C,
	//PORTM_MODE_25GBASE_KR_C,
	//PORTM_MODE_50GAUI_1_C2C,
	//PORTM_MODE_50GAUI_1_C2M,
	//PORTM_MODE_50GBASE_CR,
	//PORTM_MODE_50GBASE_KR,
	/* Ethernet - 2 lane */
	//PORTM_MODE_LAUI_2_C2C,
	//PORTM_MODE_LAUI_2_C2M,
	//PORTM_MODE_50GBASE_CR2_C,
	//PORTM_MODE_50GBASE_KR2_C,
	//PORTM_MODE_100GAUI_2_C2C,
	//PORTM_MODE_100GAUI_2_C2M,
	//PORTM_MODE_100GBASE_CR2,
	//PORTM_MODE_100GBASE_KR2,
	/* Ethernet - 802_3AP */
	//PORTM_MODE_802_3AP,
	/* CPRI modes */
	//PORTM_MODE_CPRI_2_4G,
	//PORTM_MODE_CPRI_4_9G,
	//PORTM_MODE_CPRI_6_1G,
	//PORTM_MODE_CPRI_9_8G,
	//PORTM_MODE_CPRI_10_1G,
	//PORTM_MODE_CPRI_24_3G,

	PORTM_MODE_DISABLED
};

/* Support 1 SERDES Lane Ethernet (excluding QSGMII) modes	*/
static const cn10k_portm_modes_t portm_1_lane[] = {
	/* 1 lane */
	//PORTM_MODE_SGMII,
	PORTM_MODE_1000BASE_X,
	//PORTM_MODE_SFI_1G,
	PORTM_MODE_XFI,
	PORTM_MODE_SFI,
	//PORTM_MODE_10GBASE_KR,
	PORTM_MODE_25GAUI_C2C,
	PORTM_MODE_25GAUI_C2M,
	//PORTM_MODE_25GBASE_CR,
	//PORTM_MODE_25GBASE_KR,
	//PORTM_MODE_25GBASE_CR_C,
	//PORTM_MODE_25GBASE_KR_C,
	//PORTM_MODE_50GAUI_1_C2C,
	//PORTM_MODE_50GAUI_1_C2M,
	//PORTM_MODE_50GBASE_CR,
	//PORTM_MODE_50GBASE_KR,
	//PORTM_MODE_SXGMII_10G,
	/* 802_3AP */
	//PORTM_MODE_802_3AP,

	PORTM_MODE_DISABLED
};

/* Support 1 SERDES Lane Ethernet (excluding QSGMII) and JESD PORTM modes  */
static const cn10k_portm_modes_t portm_1_lane_jesd[] = {
	/* 1 lane */
	//PORTM_MODE_SGMII,
	PORTM_MODE_1000BASE_X,
	//PORTM_MODE_SFI_1G,
	PORTM_MODE_XFI,
	PORTM_MODE_SFI,
	//PORTM_MODE_10GBASE_KR,
	PORTM_MODE_25GAUI_C2C,
	PORTM_MODE_25GAUI_C2M,
	//PORTM_MODE_25GBASE_CR,
	//PORTM_MODE_25GBASE_KR,
	//PORTM_MODE_25GBASE_CR_C,
	//PORTM_MODE_25GBASE_KR_C,
	//PORTM_MODE_50GAUI_1_C2C,
	//PORTM_MODE_50GAUI_1_C2M,
	//PORTM_MODE_50GBASE_CR,
	//PORTM_MODE_50GBASE_KR,
	//PORTM_MODE_SXGMII_10G,
	/* 802_3AP */
	//PORTM_MODE_802_3AP,

	/* JESD204B modes*/
	PORTM_MODE_JESD204B_4_9G,
	PORTM_MODE_JESD204B_6_1G,
	PORTM_MODE_JESD204B_7_3G,
	PORTM_MODE_JESD204B_9_8G,
	PORTM_MODE_JESD204B_12_1G,
	PORTM_MODE_JESD204B_14_7G,
	/* JESD204C modes*/
	PORTM_MODE_JESD204C_2G,
	PORTM_MODE_JESD204C_4G,
	PORTM_MODE_JESD204C_8_1G,
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
	//PORTM_MODE_SGMII,
	PORTM_MODE_1000BASE_X,
	//PORTM_MODE_SFI_1G,
	//PORTM_MODE_QSGMII,
	PORTM_MODE_XFI,
	PORTM_MODE_SFI,
	//PORTM_MODE_10GBASE_KR,
	PORTM_MODE_25GAUI_C2C,
	PORTM_MODE_25GAUI_C2M,
	//PORTM_MODE_25GBASE_CR,
	//PORTM_MODE_25GBASE_KR,
	//PORTM_MODE_25GBASE_CR_C,
	//PORTM_MODE_25GBASE_KR_C,
	//PORTM_MODE_50GAUI_1_C2C,
	//PORTM_MODE_50GAUI_1_C2M,
	//PORTM_MODE_50GBASE_CR,
	//PORTM_MODE_50GBASE_KR,
	/* 802_3AP */
	//PORTM_MODE_802_3AP,
	/* CPRI modes */
	//PORTM_MODE_CPRI_2_4G,
	//PORTM_MODE_CPRI_4_9G,
	//PORTM_MODE_CPRI_6_1G,
	//PORTM_MODE_CPRI_9_8G,
	//PORTM_MODE_CPRI_10_1G,
	//PORTM_MODE_CPRI_24_3G,

	PORTM_MODE_DISABLED
};

/* Support 1 SERDES Lane PORTM modes (<= 10Gb/s excluding QSGMII) */
static const cn10k_portm_modes_t portm_1_lane_slow[] = {
	/* 1 lane */
	//PORTM_MODE_SGMII,
	PORTM_MODE_1000BASE_X,
	//PORTM_MODE_SFI_1G,
	PORTM_MODE_XFI,
	PORTM_MODE_SFI,
	//PORTM_MODE_10GBASE_KR,
	//PORTM_MODE_SXGMII_10G,
	/* 802_3AP */
	//PORTM_MODE_802_3AP,

	PORTM_MODE_DISABLED
};

/* Support 1 SERDES Lane PORTM modes (<= 10Gb/s including QSGMII) */
static const cn10k_portm_modes_t portm_1_lane_slow_qsgmii[] = {
	/* 1 lane */
	//PORTM_MODE_SGMII,
	PORTM_MODE_1000BASE_X,
	//PORTM_MODE_SFI_1G,
	PORTM_MODE_XFI,
	PORTM_MODE_SFI,
	//PORTM_MODE_10GBASE_KR,
	//PORTM_MODE_SXGMII_10G,

	/* QSGMII */
	//PORTM_MODE_QSGMII,

	/* 802_3AP */
	//PORTM_MODE_802_3AP,

	PORTM_MODE_DISABLED
};

/* Temp disable 50GAUI as RPM driver doesn't support it */
static const cn10k_portm_modes_t portm_1_lane_10ka_mcm[] = {
	//PORTM_MODE_50GAUI_1_C2C,
	PORTM_MODE_25GAUI_C2C,
	PORTM_MODE_DISABLED
};

static const cn10k_portm_modes_t portm_2_lane_10ka_mcm[] = {
	//PORTM_MODE_50GAUI_1_C2C,
	PORTM_MODE_25GAUI_C2C,
	//PORTM_MODE_100GAUI_2_C2C,
	PORTM_MODE_DISABLED
};

/* JESD204B/C PORTM modes */
static const cn10k_portm_modes_t portm_jesd[] = {
	/* JESD204B modes*/
	//PORTM_MODE_JESD204B_4_9G,
	//PORTM_MODE_JESD204B_6_1G,
	//PORTM_MODE_JESD204B_7_3G,
	//PORTM_MODE_JESD204B_9_8G,
	//PORTM_MODE_JESD204B_12_1G,
	//PORTM_MODE_JESD204B_14_7G,
	/* JESD204C modes*/
	//PORTM_MODE_JESD204C_2G,
	//PORTM_MODE_JESD204C_4G,
	//PORTM_MODE_JESD204C_8_1G,
	//PORTM_MODE_JESD204C_16_2G,
	//PORTM_MODE_JESD204C_24_3G,
	PORTM_MODE_DISABLED
};

/* PORTM mapping to RPM/GSERM for each platform */
static const cn10k_portm_gserm_mac_map_t portm_gserm_mac_map_cn10ka[] = {
	/*Port GSER LANE ETH_MAC LMAC OTHER_MAC OTHER_LANE */
	{0,		0,	 0,		0,	  0,   DISABLE,   DISABLE},
	{1,		0,	 1,		0,	  1,   DISABLE,   DISABLE},
	{2,		0,	 2,		0,	  2,   DISABLE,   DISABLE},
	{3,		0,	 3,		0,	  3,   DISABLE,   DISABLE},
	{4,		1,	 0,		1,	  0,   DISABLE,   DISABLE},
	{5,		2,	 0,		2,	  0,   DISABLE,   DISABLE}
};

static const cn10k_portm_gserm_mac_map_t portm_gserm_mac_map_cn10kb[] = {
	/*Port GSER LANE ETH_MAC LMAC OTHER_MAC OTHER_LANE */
	{0,		0,	 0,		0,	  0,   DISABLE,   DISABLE},
	{1,		0,	 1,		0,	  1,   DISABLE,   DISABLE},
	{2,		0,	 2,		0,	  2,   DISABLE,   DISABLE},
	{3,		0,	 3,		0,	  3,   DISABLE,   DISABLE}
};

static const cn10k_portm_gserm_mac_map_t portm_gserm_mac_map_cnf10ka[] = {
	/*Port GSER LANE MAC_ETH   LMAC OTHER_MAC OTHER_LANE */
	{0,		0,	 0,		0,		 0,   		 DISABLE,	 DISABLE},
	{1,		0,	 1,		0,		 1,   		 DISABLE,	 DISABLE},
	{2,		0,	 2,		0,		 2,   		 DISABLE,	 DISABLE},
	{3,		0,	 3,		0,		 3,   		 DISABLE,	 DISABLE},
	{4,		1,	 0,		1,		 0,   		 DISABLE,	 DISABLE},
	{5,		1,	 1,		1,		 1,  		 DISABLE,	 DISABLE},
	{6,		1,	 2,		1,		 2,  		 DISABLE,	 DISABLE},
	{7,		1,	 3,		1,		 3,  		 DISABLE,	 DISABLE},
	{8,		2,	 0,		2,		 0,		 1,			0},
	{9,		2,	 1,		2,		 1,		 1,			1},
	{10,		2,	 2,		2,		 2,		 1,			2},
	{11,		2,	 3,		2,		 3,		 1,			3},
	{12,		3,	 0,  		DISABLE, 	DISABLE,	 1,			0},
	{13,		3,	 1,  		DISABLE, 	DISABLE,	 1,			1},
	{14,		3,	 2,  		DISABLE, 	DISABLE,	 1,			2},
	{15,		3,	 3,  		DISABLE, 	DISABLE,	 1,			3},
	{16,		4,	 0,		3,		 0,		 0,			0},
	{17,		4,	 1,		3,		 1,		 0,			1},
	{18,		4,	 2,		3,		 2,		 0,			2},
	{19,		4,	 3,		3,		 3,		 0,			3},
	{20,		5,	 0,  		DISABLE, 	DISABLE,	 2,			0},
	{21,		5,	 1,  		DISABLE, 	DISABLE,	 2,			1},
	{22,		5,	 2,  		DISABLE, 	DISABLE,	 2,			2},
	{23,		5,	 3,  		DISABLE, 	DISABLE,	 2,			3},
	{24,		6,	 0, 		DISABLE, 	DISABLE,	 3,			0},
	{25,		6,	 1,  		DISABLE, 	DISABLE,	 3,			1},
	{26,		6,	 2,  		DISABLE, 	DISABLE,	 3,			2},
	{27,		6,	 3,  		DISABLE, 	DISABLE,	 3,			3}
};

static const cn10k_portm_gserm_mac_map_t portm_gserm_mac_map_cnf10kb[] = {
	/*Port GSER LANE MAC_ETH   LMAC OTHER_MAC OTHER_LANE */
	{0,	0,	 0,		0,		 0,		DISABLE,	 DISABLE},
	{1,	0,	 1,		0,		 1,   		DISABLE,	 DISABLE},
	{2,	0,	 2,		0,		 2,   		DISABLE,	 DISABLE},
	{3,	0,	 3,		0,		 3,   		DISABLE,	 DISABLE},
	{4,	1,	 0,		1,		 0,   		DISABLE,	 DISABLE},
	{5,	1,	 1,		1,		 1,   		DISABLE,	 DISABLE},
	{6,	2,	 0,		2,		 0,		 0,			0},
	{7,	2,	 1,		2,		 1,		 0,			1},
	{8,	2,	 2,		3,		 0,		 1,			0},
	{9,	2,	 3,		3,		 1,		 1,			1},
	{10,	3,	 0,		4,		 0,		 2,			0},
	{11,	3,	 1,		4,		 1,		 2,			1},
	{12,	3,	 2,		5,		 0,		 3,			0},
	{13,	3,	 3,		5,		 1,		 3,			1},
	{14,	4,	 0,		6,		 0,		 4,			0},
	{15,	4,	 1,		6,		 1,		 4,			1},
	{16,	4,	 2,		7,		 0,		 5,			0},
	{17,	4,	 3,		7,		 1,		 5,			1},
	{18,	5,	 0,		8,		 0,   		 DISABLE,	 	DISABLE},
	{19,	5,	 1,		8,		 1,  		 DISABLE,	 	DISABLE}
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
	} else if (cavm_is_model(OCTEONTX_CNF10KA)) {
		switch (portm) {
		case 0:
		case 4:
			return portm_4_lane;
		case 1:
		case 3:
		case 5:
		case 6:
			return portm_1_lane;
		case 2:
		case 7:
			return portm_2_lane;
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
			return portm_gserm_mac_map_cn10kb;
	} else if (cavm_is_model(OCTEONTX_CNF10KA))
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
	MODE_CASE(PORTM_MODE_QSGMII);
	MODE_CASE(PORTM_MODE_XFI);
	MODE_CASE(PORTM_MODE_SFI);
	MODE_CASE(PORTM_MODE_10GBASE_KR);
	MODE_CASE(PORTM_MODE_25GAUI_C2C);
	MODE_CASE(PORTM_MODE_25GAUI_C2M);
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
	MODE_CASE(PORTM_MODE_50GBASE_CR);
	MODE_CASE(PORTM_MODE_50GBASE_KR);
	MODE_CASE(PORTM_MODE_CAUI_4_C2C);
	MODE_CASE(PORTM_MODE_CAUI_4_C2M);
	MODE_CASE(PORTM_MODE_100GBASE_CR4);
	MODE_CASE(PORTM_MODE_100GBASE_KR4);
	MODE_CASE(PORTM_MODE_100GAUI_2_C2C);
	MODE_CASE(PORTM_MODE_100GAUI_2_C2M);
	MODE_CASE(PORTM_MODE_100GBASE_CR2);
	MODE_CASE(PORTM_MODE_100GBASE_KR2);
	MODE_CASE(PORTM_MODE_802_3AP);

	/* 1 MAC USXGMII modes*/
	MODE_CASE(PORTM_MODE_SXGMII_10G);

	/* CPRI modes*/
	MODE_CASE(PORTM_MODE_CPRI_2_4G);
	MODE_CASE(PORTM_MODE_CPRI_4_9G);
	MODE_CASE(PORTM_MODE_CPRI_6_1G);
	MODE_CASE(PORTM_MODE_CPRI_9_8G);
	MODE_CASE(PORTM_MODE_CPRI_10_1G);
	MODE_CASE(PORTM_MODE_CPRI_24_3G);

	/* JESD204B modes*/
	MODE_CASE(PORTM_MODE_JESD204B_4_9G);
	MODE_CASE(PORTM_MODE_JESD204B_6_1G);
	MODE_CASE(PORTM_MODE_JESD204B_7_3G);
	MODE_CASE(PORTM_MODE_JESD204B_9_8G);
	MODE_CASE(PORTM_MODE_JESD204B_12_1G);
	MODE_CASE(PORTM_MODE_JESD204B_14_7G);

	/* JESD204C modes*/
	MODE_CASE(PORTM_MODE_JESD204C_2G);
	MODE_CASE(PORTM_MODE_JESD204C_4G);
	MODE_CASE(PORTM_MODE_JESD204C_8_1G);
	MODE_CASE(PORTM_MODE_JESD204C_16_2G);
	MODE_CASE(PORTM_MODE_JESD204C_24_3G);

	default:
		str = "INVALID_PORTM_MODE_VALUE";
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
 * Get the associated GSER num for a PORTM
 *
 * @param portm  PORTM to query
 *
 * @return GSER num
 */
int cn10k_portm_get_gser_num(int portm)
{
	const cn10k_portm_gserm_mac_map_t *descr = portm_get_gserm_mac_map();

	if (!descr)
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

	if (!descr)
		return -1;
	return descr[portm].gser_lane;
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

	if (!descr)
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

	if (!descr)
		return -1;
	return descr[portm].mac_eth_lmac;
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
