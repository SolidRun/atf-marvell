/*
 * Copyright (c) 2024 Marvell.
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <platform_def.h>
#include <platform_setup.h>
#include <debug.h>
#include <string.h>
#include <libfdt.h>
#include <stdlib.h>
#include <assert.h>
#include <octeontx_common.h>
#include <plat_cn20k_configuration.h>
#include <plat_eth_cfg.h>
#include "plat_portm_cfg.h"
#include <plat_scfg.h>

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

static inline int portm_is_model(uint32_t arg_model)
{
	return cavm_is_model(arg_model);
}

static inline int portm_get_altpkg(uint32_t arg_model)
{
	return plat_get_altpkg();
}

/* Include c file with common arrays and functions that are shared between ECP, ATF, and EBF */
#include "portm_inc.c"

static const portm_tx_tuning_t portm_default_tx_tuning_list[] = {
	/* portm_mode              Main Post Pr1 Pr2 */
	{PORTM_MODE_SGMII,           35,  0,  0,  0 },
	{PORTM_MODE_1000BASE_X,      63,  0,  0,  0 },
	{PORTM_MODE_SFI_1G,          63,  0,  0,  0 },
	{PORTM_MODE_QSGMII,          63,  0,  0,  0 },
	{PORTM_MODE_2500BASE_X,      63,  0,  0,  0 },
	{PORTM_MODE_5000BASE_X,      63,  0,  0,  0 },
	{PORTM_MODE_XFI,             63,  0,  0,  0 },
	{PORTM_MODE_SFI,             52, -10,  -1,  0 },
	{PORTM_MODE_10GBASE_KR,      63,  0,  0,  0 }, /* Set via LT */
	{PORTM_MODE_25GAUI_C2C,      63,  0,  0,  0 },
	{PORTM_MODE_25GAUI_C2M,      56,  -3,  -4,  0 },
	{PORTM_MODE_25GBASE_USR,     63,  0,  0,  0 },
	{PORTM_MODE_25GBASE_CR,      63,  0,  0,  0 }, /* Set via LT */
	{PORTM_MODE_25GBASE_KR,      63,  0,  0,  0 }, /* Set via LT */
	{PORTM_MODE_25GBASE_CR_C,    63,  0,  0,  0 }, /* Set via LT */
	{PORTM_MODE_25GBASE_KR_C,    63,  0,  0,  0 }, /* Set via LT */
	{PORTM_MODE_XLAUI,           63,  0,  0,  0 },
	{PORTM_MODE_XLAUI_C2M,       63,  0,  0,  0 },
	{PORTM_MODE_40GBASE_CR4,     63,  0,  0,  0 }, /* Set via LT */
	{PORTM_MODE_40GBASE_KR4,     63,  0,  0,  0 }, /* Set via LT */
	{PORTM_MODE_LAUI_2_C2C,      63,  0,  0,  0 },
	{PORTM_MODE_LAUI_2_C2M,      56,  -2,  -5,  0 },
	{PORTM_MODE_50GBASE_CR2_C,   63,  0,  0,  0 }, /* Set via LT */
	{PORTM_MODE_50GBASE_KR2_C,   63,  0,  0,  0 }, /* Set via LT */
	{PORTM_MODE_50GAUI_1_C2C,    63,  0,  0,  0 },
	{PORTM_MODE_50GAUI_1_C2M,    56,  -2,  -5,  0 },
	{PORTM_MODE_50GBASE_USR,     63,  0,  0,  0 }, /* Set via firmware */
	{PORTM_MODE_50GBASE_CR,      63,  0,  0,  0 }, /* Set via LT */
	{PORTM_MODE_50GBASE_KR,      63,  0,  0,  0 }, /* Set via LT */
	{PORTM_MODE_CAUI_4_C2C,      63,  0,  0,  0 },
	{PORTM_MODE_CAUI_4_C2M,      63,  0,  0,  0 },
	{PORTM_MODE_100GBASE_CR4,    63,  0,  0,  0 }, /* Set via LT */
	{PORTM_MODE_100GBASE_KR4,    63,  0,  0,  0 }, /* Set via LT */
	{PORTM_MODE_100GAUI_2_C2C,   63,  0,  0,  0 },
	{PORTM_MODE_100GAUI_2_C2M,   63,  0,  0,  0 },
	{PORTM_MODE_100GBASE_USR2,   63,  0,  0,  0 }, /* Set via firmware */
	{PORTM_MODE_100GBASE_CR2,    63,  0,  0,  0 }, /* Set via LT */
	{PORTM_MODE_100GBASE_KR2,    63,  0,  0,  0 }, /* Set via LT */
	{PORTM_MODE_802_3AP,         63,  0,  0,  0 }, /* Set via LT */

	/* USXGMII modes */
	{PORTM_MODE_2_5G_SXGMII,     63,  0,  0,  0 }, /* TBD */
	{PORTM_MODE_5G_SXGMII,       63,  0,  0,  0 }, /* TBD */
	{PORTM_MODE_10G_SXGMII,      63,  0,  0,  0 }, /* TBD */
	{PORTM_MODE_10G_DXGMII,      63,  0,  0,  0 }, /* TBD */
	{PORTM_MODE_10G_QXGMII,      63,  0,  0,  0 }, /* TBD */

	/* USGMII modes */
	{PORTM_MODE_Q_USGMII,        63,  0,  0,  0 }, /* TBD */
	{PORTM_MODE_O_USGMII,        63,  0,  0,  0 } /* TBD */

};

/**
 * Get the default Tx Equalization settings for PORTM mode
 *
 * @param  mode  PORTM mode to query
 *
 * @return 0 = valid tx_tuning.portm_mode, 1 = invalid portm_mode
 */
int portm_get_default_tx_eq(portm_tx_tuning_t *tx_tuning)
{
	int ret = 1;
	int i = 0;
	portm_modes_t mode_temp;

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
int portm_tx_tuning_valid(int portm_idx, int index, portm_tx_tuning_t *tx_tuning)
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
void portm_update_802_3ap_adv(portm_modes_t mode_idx,
				    portm_fec_t fec_types, int fec_abil,
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
void portm_update_802_3ap_fec(portm_fec_t fec_types,
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
