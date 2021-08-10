/*
 * Copyright (C) 2020 Marvell.
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

/* RPM driver for CN10K */

#include <arch.h>
#include <cassert.h>
#include <stdio.h>
#include <debug.h>
#include <string.h>
#include <platform_def.h>
#include <timers.h>
#include <octeontx_common.h>
#include <drivers/delay_timer.h>
#include <plat_board_cfg.h>
#include <eth_intf.h>
#include <rpm.h>
#include <qlm_cn10k.h>
#include <plat_scfg.h>
#include <sh_fwdata.h>
#include <platform_setup.h>
#include <eth_link_mgmt_intf.h>

#include "cavm-csrs-rpm.h"

#ifdef NT_FW_CONFIG
#include <plat_npc_mcam_profile.h>
#endif

/* for LEGACY logging, define DEBUG_ATF_RPM_INTF to enable debug logs */
#undef DEBUG_ATF_RPM_INTF

#if defined(MRVL_TF_LOG_MODULE)
#  undef MRVL_TF_LOG_MODULE
#  define MRVL_TF_LOG_MODULE  MRVL_TF_LOG_MODULE_ETH_CMD
#  define debug_rpm_intf(...) (mrvl_tf_log_modules & MRVL_TF_LOG_MODULE) ? \
			       tf_log(LOG_MARKER_NOTICE __VA_ARGS__) : (void)0
#elif DEBUG_ATF_RPM_INTF
#define debug_rpm_intf printf
#else
#define debug_rpm_intf(...) ((void) (0))
#endif

#define MAX_RPM_TIMERS 2

static int rpm_timers[MAX_RPM_TIMERS];

static rpm_lmac_context_t
		lmac_context[MAX_RPM][MAX_LMAC_PER_RPM];

static int rpm_get_error_type(int rpm_id, int lmac_id)
{
	rpm_lmac_context_t *lmac_ctx;

	lmac_ctx = &lmac_context[rpm_id][lmac_id];
	return lmac_ctx->s.error_type;
}

static int rpm_trigger_interrupt(int rpm_id, int lmac_id)
{
	debug_rpm_intf("%s %d:%d\n", __func__, rpm_id, lmac_id);

	/* Enable the interrupt bit each time before triggering
	 * an interrupt. In case of Link down request, enable bit for
	 * LMAC(RPMX_CMRX_CONFIG(enable)) is disabled
	 * which clears all the dedicated RPM context
	 * state for the LMAC. Hence, need to explicitly enable
	 * the interrupt every time.
	 */
	CAVM_MODIFY_RPM_CSR(cavm_rpmx_cmrx_sw_int_ena_w1s_t,
				CAVM_RPMX_CMRX_SW_INT_ENA_W1S(rpm_id, lmac_id),
				sw_set, 1);

	CAVM_MODIFY_RPM_CSR(cavm_rpmx_cmrx_sw_int_w1s_t,
				CAVM_RPMX_CMRX_SW_INT_W1S(rpm_id, lmac_id),
				sw_set, 1);
	return 0;
}

static int rpm_acquire_csr_lock(int rpm_id, int lmac_id)
{
	int timeout = 10; /* loop for few times but not infinitely */
	rpm_lmac_context_t *lmac_ctx;

	lmac_ctx = &lmac_context[rpm_id][lmac_id];

	do {
		if (!lmac_ctx->s.lock) {
			lmac_ctx->s.lock = 1;
			return 0;
		}
		udelay(1);
	} while (timeout--);

	return -1;
}

static void rpm_release_csr_lock(int rpm_id, int lmac_id)
{
	lmac_context[rpm_id][lmac_id].s.lock = 0;
}

static void rpm_release_own_status(int rpm_id, int lmac_id)
{
	CAVM_MODIFY_RPM_CSR(union eth_scratchx1,
			CAVM_RPMX_CMRX_SCRATCHX(rpm_id, lmac_id, 1),
			own_status, ETH_OWN_NON_SECURE_SW); /* released the ownership */
}

static void rpm_set_link_state(int rpm_id, int lmac_id,
					rpm_link_state_t *link, int err_type)
{
	union eth_scratchx0 scratchx0;
	rpm_lmac_config_t *lmac_cfg;
	portm_config_t *portm;
	int an = 0;

	lmac_cfg = &plat_octeontx_bcfg->rpm_cfg[rpm_id].lmac_cfg[lmac_id];
	portm = &(plat_octeontx_bcfg->portm_cfg[lmac_cfg->portm_idx]);

	debug_rpm_intf("%s %d:%d mode %d link_up %d speed %d duplex %d\t"
			"fec %d err_type %d\n",
			__func__, rpm_id, lmac_id,
			lmac_cfg->mode,
			link->s.link_up, link->s.speed,
			link->s.full_duplex, link->s.fec, err_type);

	/* Update AN field in the link status */
	if (lmac_cfg->phy_present)
		an = lmac_cfg->phy_config.req_an;
	else /* FIXME : to add a separate field for AN as this function doesn't support SGMII */
		an = cn10k_portm_get_mode_desc_ap_sup(portm->portm_mode);

	/* Update supported AN to SM when updating link status */
	sh_fwdata_set_supported_an(rpm_id, lmac_id);

	/* Update supported FEC to SM when updating link status */
	sh_fwdata_update_supported_fec(rpm_id, lmac_id);

	scratchx0.u = CSR_READ(CAVM_RPMX_CMRX_SCRATCHX(rpm_id, lmac_id, 0));
	scratchx0.s.link_sts.link_up = link->s.link_up;
	scratchx0.s.link_sts.speed = link->s.speed;
	scratchx0.s.link_sts.full_duplex = link->s.full_duplex;
	scratchx0.s.link_sts.err_type = err_type;
	scratchx0.s.link_sts.fec = link->s.fec;
	scratchx0.s.link_sts.an = an;
	scratchx0.s.link_sts.lmac_type = lmac_cfg->mode;
	CSR_WRITE(CAVM_RPMX_CMRX_SCRATCHX(rpm_id, lmac_id, 0), scratchx0.u);
}

static int rpm_link_bringup(int rpm_id, int lmac_id)
{
	rpm_lmac_config_t *lmac_cfg;
	rpm_lmac_context_t *lmac_ctx;
	rpm_link_state_t link_sts;

	/* Get the lmac type and based on lmac
	 * type, initialize SGMII/XAUI link
	 */
	lmac_cfg = &plat_octeontx_bcfg->rpm_cfg[rpm_id].lmac_cfg[lmac_id];

	debug_rpm_intf("%s %d:%d lmac_type %d\n", __func__, rpm_id,
			lmac_id, lmac_cfg->mode);

	lmac_ctx = &lmac_context[rpm_id][lmac_id];

	link_sts.u64 = 0;

	if ((lmac_cfg->mode == CAVM_RPM_LMAC_TYPES_E_SGMII) ||
		(lmac_cfg->mode == CAVM_RPM_LMAC_TYPES_E_QSGMII)) {
		if (!lmac_cfg->phy_present) {
			link_sts.s.link_up = 1;
			link_sts.s.full_duplex = 1;
			link_sts.s.speed = ETH_LINK_1G;
		} else {
			/* Get the PHY link status */
			phy_get_link_status(rpm_id, lmac_id, &link_sts);
			/* Update PHY's link status in SM for ECP to read */
			ecp_update_phy_link_state(lmac_cfg->portm_idx, &link_sts);
		}

		if (rpm_lmac_port_enable(rpm_id, lmac_id, lmac_ctx, &link_sts) != 0) {
			if (rpm_get_error_type(rpm_id, lmac_id) != 0) {
				debug_rpm_intf("%s %d:%d Link down\n",
						__func__, rpm_id, lmac_id);
				link_sts.s.link_up = 0;
				link_sts.s.full_duplex = 0;
				link_sts.s.speed = ETH_LINK_NONE;
				goto link_err;
			}
		}

		if (link_sts.s.link_up == 1) {
			/* Update link status */
			lmac_ctx->s.link_up = link_sts.s.link_up;
			lmac_ctx->s.full_duplex = link_sts.s.full_duplex;
			lmac_ctx->s.speed = link_sts.s.speed;
			lmac_ctx->s.link_enable = 1;
			rpm_set_link_state(rpm_id, lmac_id, &link_sts, 0);
			return 0;
		}
	}
	if ((lmac_cfg->mode == CAVM_RPM_LMAC_TYPES_E_TENG_R) ||
		(lmac_cfg->mode == CAVM_RPM_LMAC_TYPES_E_TWENTYFIVEG_R) ||
		(lmac_cfg->mode == CAVM_RPM_LMAC_TYPES_E_FORTYG_R) ||
		(lmac_cfg->mode == CAVM_RPM_LMAC_TYPES_E_FIFTYG_R) ||
		(lmac_cfg->mode == CAVM_RPM_LMAC_TYPES_E_HUNDREDG_R)) {
		/* Enable LMAC port - PCS/MAC config */
		if (rpm_lmac_port_enable(rpm_id, lmac_id, lmac_ctx, &link_sts) != 0) {
			if (rpm_get_error_type(rpm_id, lmac_id) != 0) {
				debug_rpm_intf("%s %d:%d Link down\n",
						__func__, rpm_id, lmac_id);
				goto link_err;
			}
		}

		if (link_sts.s.link_up == 1) {
			/* Update link status */
			lmac_ctx->s.link_up = link_sts.s.link_up;
			lmac_ctx->s.full_duplex = link_sts.s.full_duplex;
			lmac_ctx->s.speed = link_sts.s.speed;
			lmac_ctx->s.fec = link_sts.s.fec;
			rpm_set_link_state(rpm_id, lmac_id, &link_sts, 0);
			lmac_ctx->s.link_enable = 1;
			return 0;
		}
	}
link_err:
	/* If the link is down, handle link management
	 * runtime
	 */
	lmac_ctx->s.link_up = link_sts.s.link_up;
	lmac_ctx->s.full_duplex = link_sts.s.full_duplex;
	lmac_ctx->s.speed = link_sts.s.speed;
	lmac_ctx->s.fec = link_sts.s.fec;
	lmac_ctx->s.link_enable = 1;
	rpm_set_link_state(rpm_id, lmac_id, &link_sts,
			rpm_get_error_type(rpm_id, lmac_id));
	return -1;
}

static int rpm_link_bringdown(int rpm_id, int lmac_id)
{
	int ret = 0;
	rpm_lmac_config_t *lmac_cfg;
	rpm_lmac_context_t *lmac_ctx;
	rpm_link_state_t link;

	/* get the lmac type and based on lmac
	 * type, bring down SGMII/XAUI link
	 */
	lmac_cfg = &plat_octeontx_bcfg->rpm_cfg[rpm_id].lmac_cfg[lmac_id];
	debug_rpm_intf("%s %d:%d lmac_type %d\n", __func__,
				rpm_id, lmac_id, lmac_cfg->mode);

	lmac_ctx = &lmac_context[rpm_id][lmac_id];

	if ((lmac_cfg->mode == CAVM_RPM_LMAC_TYPES_E_TENG_R) ||
		(lmac_cfg->mode == CAVM_RPM_LMAC_TYPES_E_SGMII) ||
		(lmac_cfg->mode == CAVM_RPM_LMAC_TYPES_E_QSGMII) ||
		(lmac_cfg->mode == CAVM_RPM_LMAC_TYPES_E_TWENTYFIVEG_R) ||
		(lmac_cfg->mode == CAVM_RPM_LMAC_TYPES_E_FORTYG_R) ||
		(lmac_cfg->mode == CAVM_RPM_LMAC_TYPES_E_FIFTYG_R) ||
		(lmac_cfg->mode == CAVM_RPM_LMAC_TYPES_E_HUNDREDG_R)) {
		ret = rpm_lmac_port_disable(rpm_id, lmac_id, lmac_ctx);
		if (ret != 0)
			goto link_down_fail;

	} else {
		debug_rpm_intf("%s LMAC%d mode %d not configured correctly"
			" cannot bring down the link\n",
			__func__, lmac_id, lmac_cfg->mode);
		rpm_set_error_type(rpm_id, lmac_id,
			ETH_ERR_LMAC_MODE_INVALID);
		return -1;
	}

	/* Link is brought down successfully. update the link
	 * status and indicate poll timer to stop polling
	 * for the link
	 */
	lmac_ctx->s.link_up = link.s.link_up = 0;
	lmac_ctx->s.full_duplex = link.s.full_duplex = 0;
	lmac_ctx->s.speed = link.s.speed = 0;
	rpm_set_link_state(rpm_id, lmac_id, &link,
			rpm_get_error_type(rpm_id, lmac_id));

	lmac_ctx->s.link_enable = 0;
	lmac_ctx->s.init_link = 0;
	return 0;

link_down_fail:
	link.s.link_up = lmac_ctx->s.link_up;
	link.s.full_duplex = lmac_ctx->s.full_duplex;
	link.s.speed = lmac_ctx->s.speed;
	rpm_set_link_state(rpm_id, lmac_id, &link,
			rpm_get_error_type(rpm_id, lmac_id));
	return -1;
}

int rpm_set_fec_type(int rpm_id, int lmac_id, int req_fec)
{
	rpm_link_state_t link_sts;
	rpm_lmac_config_t *lmac;
	rpm_lmac_context_t *lmac_ctx;
	portm_config_t *portm;

	lmac_ctx = &lmac_context[rpm_id][lmac_id];
	lmac = &plat_octeontx_bcfg->rpm_cfg[rpm_id].lmac_cfg[lmac_id];
	portm = &(plat_octeontx_bcfg->portm_cfg[lmac->portm_idx]);

	debug_rpm_intf("%s: %d:%d fec %d request_fec %d\n", __func__, rpm_id,
				lmac_id, lmac->fec, req_fec);

	if ((lmac->mode == CAVM_RPM_LMAC_TYPES_E_SGMII) ||
			(lmac->mode == CAVM_RPM_LMAC_TYPES_E_QSGMII)) {
		WARN("%s: %d: %d FEC is not applicable for this mode %d\n",
				__func__, rpm_id, lmac_id, lmac->mode);
		rpm_set_error_type(rpm_id, lmac_id, ETH_ERR_SET_FEC_INVALID);
		return -1;
	}

	if ((!lmac->phy_present) && (req_fec == lmac->fec)) {
		WARN("%s: %d:%d FEC requested is same as current FEC state\n",
				__func__, rpm_id, lmac_id);
		return 0;
	}

	/* Validate FEC based on PORTM mode */
	if (((req_fec & cn10k_portm_get_mode_desc_fec(portm->portm_mode)) != req_fec)) {
		WARN("%s: %d:%d: FEC type %d not supported by mode %d\n",
				__func__, rpm_id, lmac_id, req_fec, portm->portm_mode);
		rpm_set_error_type(rpm_id, lmac_id, ETH_ERR_SET_FEC_INVALID);
		return -1;
	}

	/* FIXME: Validate FEC based on transceiver and add support for line side FEC */

	lmac->fec = req_fec;

	if (rpm_fec_change(rpm_id, lmac_id, lmac->fec, &link_sts))
		goto fec_fail;

	/* Update the new FEC type with current link status */
	lmac_ctx->s.fec = link_sts.s.fec = req_fec;
	lmac_ctx->s.link_up = link_sts.s.link_up;
	lmac_ctx->s.full_duplex = link_sts.s.full_duplex;
	lmac_ctx->s.speed = link_sts.s.speed;

	rpm_set_link_state(rpm_id, lmac_id, &link_sts,
			rpm_get_error_type(rpm_id, lmac_id));

	return 0;

fec_fail:
	ERROR("%s: FEC type could not be changed\n", __func__);
	rpm_set_error_type(rpm_id, lmac_id, ETH_ERR_SET_FEC_FAIL);
	return -1;
}

static const rpm_speed_mode_map_s rpm_speed_mode_map[] = {
	{(1ULL << ETH_MODE_MAX_BIT)},	/* PORTM_MODE_DISABLED */
	{(1ULL << ETH_MODE_MAX_BIT)},	/* PORTM_MODE_INVALID  */
	{(1ULL << ETH_MODE_MAX_BIT)},	/* PORTM_MODE_INACTIVE */
	{(1ULL << ETH_MODE_SGMII_BIT)},		/* PORTM_MODE_SGMII */
	{(1ULL << ETH_MODE_1000_BASEX_BIT)},	/* PORTM_MODE_1000BASE_X */
	{(1ULL << ETH_MODE_SFI_1G_BIT)},	/* PORTM_MODE_SFI_1G */
	{(1ULL << ETH_MODE_QSGMII_BIT)},	/* PORTM_MODE_QSGMII */
	{(1ULL << ETH_MODE_10G_C2C_BIT)},	/* PORTM_MODE_XFI */
	{(1ULL << ETH_MODE_10G_C2M_BIT)},	/* PORTM_MODE_SFI */
	{(1ULL << ETH_MODE_10G_KR_BIT)},	/* PORTM_MODE_10GBASE_KR */
	/* ETH_MODE_20G_C2C_BIT not supported for CN10K family */
	/* ETH_MODE_25G_2_C2C_BIT not supported for CN10K family */
	{(1ULL << ETH_MODE_25G_C2C_BIT)},	/* PORTM_MODE_25GAUI_C2C */
	{(1ULL << ETH_MODE_25G_C2M_BIT)}, 	/* PORTM_MODE_25GAUI_C2M */
	{(1ULL << ETH_MODE_25G_CR_BIT)},	/* PORTM_MODE_25GBASE_CR */
	{(1ULL << ETH_MODE_25G_KR_BIT)},	/* PORTM_MODE_25GBASE_KR */
	{(1ULL << ETH_MODE_25GBASE_CR_C_BIT)},	/* PORTM_MODE_25GBASE_CR_C */
	{(1ULL << ETH_MODE_25GBASE_KR_C_BIT)},	/* PORTM_MODE_25GBASE_KR_C */
	{(1ULL << ETH_MODE_40G_C2C_BIT)},	/* PORTM_MODE_XLAUI */
	{(1ULL << ETH_MODE_40G_C2M_BIT)},  /* PORTM_MODE_XLAUI_C2M */
	{(1ULL << ETH_MODE_40G_CR4_BIT)},  /* PORTM_MODE_40GBASE_CR4 */
	{(1ULL << ETH_MODE_40G_KR4_BIT)},	/* PORTM_MODE_40GBASE_KR4 */
	/* ETH_MODE_40GAUI_C2C_BIT not supported for CN10K family */
	{(1ULL << ETH_MODE_50GAUI_2_C2C_BIT)},	/* PORTM_MODE_LAUI_2_C2C */
	{(1ULL << ETH_MODE_50GAUI_2_C2M_BIT)},	/* PORTM_MODE_LAUI_2_C2M */
	{(1ULL << ETH_MODE_50GBASE_CR2_C_BIT)},	/* PORTM_MODE_50GBASE_CR2_C */
	{(1ULL << ETH_MODE_50GBASE_KR2_C_BIT)},	/* PORTM_MODE_50GBASE_KR2_C */
	{(1ULL << ETH_MODE_50G_C2C_BIT)}, /* PORTM_MODE_50GAUI_1_C2C */
	{(1ULL << ETH_MODE_50G_C2M_BIT)}, /* PORTM_MODE_50GAUI_1_C2M */
	{(1ULL << ETH_MODE_MAX_BIT)},	/* PORTM_MODE_50GBASE_USR not supported for mode change */
	/* ETH_MODE_50G_4_C2C_BIT not supported for CN10K family */
	{(1ULL << ETH_MODE_50G_CR_BIT)}, /* PORTM_MODE_50GBASE_CR */
	{(1ULL << ETH_MODE_50G_KR_BIT)}, /* PORTM_MODE_50GBASE_KR */
	/* ETH_MODE_80GAUI_C2C_BIT not supported for CN10K family */
	{(1ULL << ETH_MODE_100G_C2C_BIT)},	/* PORTM_MODE_CAUI_4_C2C */
	{(1ULL << ETH_MODE_100G_C2M_BIT)}, /* PORTM_MODE_CAUI_4_C2M */
	{(1ULL << ETH_MODE_100G_CR4_BIT)},	/* PORTM_MODE_100GBASE_CR4 */
	{(1ULL << ETH_MODE_100G_KR4_BIT)},	/* PORTM_MODE_100GBASE_KR4 */
	{(1ULL << ETH_MODE_100GAUI_2_C2C_BIT)}, /* PORTM_MODE_100GAUI_2_C2C */
	{(1ULL << ETH_MODE_100GAUI_2_C2M_BIT)}, /* PORTM_MODE_100GAUI_2_C2M */
	{(1ULL << ETH_MODE_MAX_BIT)},	/* PORTM_MODE_100GBASE_USR2 not supported for mode change */
	{(1ULL << ETH_MODE_100GBASE_CR2_BIT)}, /* PORTM_MODE_100GBASE_CR2 */
	{(1ULL << ETH_MODE_100GBASE_KR2_BIT)}, /* PORTM_MODE_100GBASE_KR2 */
};

static cn10k_portm_modes_t rpm_obtain_portm_mode(uint64_t mode_bitmask)
{
	for (int i = 0; i < ARRAY_SIZE(rpm_speed_mode_map); i++) {
		debug_rpm_intf("%s: i %d mode_bitmask 0x%llx speed_mode_map[i].mode_bitmask 0x%llx\n", __func__,
				i, mode_bitmask,
				rpm_speed_mode_map[i].mode_bitmask);
		if (rpm_speed_mode_map[i].mode_bitmask == mode_bitmask)
			return i;
	}
	return PORTM_MODE_INVALID;
}

static void rpm_set_link_mode(int rpm_id, int lmac_id, int portm_mode)
{
	union eth_scratchx0 scratchx0;
	uint64_t mode = 0, bitmask = 0;

	scratchx0.u = CSR_READ(CAVM_RPMX_CMRX_SCRATCHX(rpm_id, lmac_id, 0));
	bitmask = rpm_speed_mode_map[portm_mode].mode_bitmask;
	if (bitmask)
		mode = __builtin_ffsl(bitmask) - 1; /* enum starts at 0 */
	scratchx0.s.link_sts.mode = mode;
	CSR_WRITE(CAVM_RPMX_CMRX_SCRATCHX(rpm_id, lmac_id, 0), scratchx0.u);
}

void rpm_set_supported_link_modes(int rpm_id, int lmac_id)
{
	uint64_t modes_allowed = 0, modes_exclude = 0;
	rpm_lmac_config_t *lmac_cfg;
	uint64_t eth_mode[MAX_PORTM] = {0};
	const cn10k_portm_modes_t *descr;
	int portm_count = 0;
	portm_config_t *portm;

	debug_rpm_intf("%s: %d:%d\n", __func__, rpm_id, lmac_id);

	lmac_cfg = &plat_octeontx_bcfg->rpm_cfg[rpm_id].lmac_cfg[lmac_id];
	portm = &(plat_octeontx_bcfg->portm_cfg[lmac_cfg->portm_idx]);

	/* FIXME: KR/CR modes and some CN9XX specific modes are not supported.
	 * Exclude them from supported link modes
	 */
	modes_exclude = (BIT_64(ETH_MODE_25G_CR_BIT) |
				BIT_64(ETH_MODE_25G_KR_BIT) |
				BIT_64(ETH_MODE_25GBASE_CR_C_BIT) |
				BIT_64(ETH_MODE_25GBASE_KR_C_BIT) |
				BIT_64(ETH_MODE_50G_CR_BIT) |
				BIT_64(ETH_MODE_50G_KR_BIT) |
				BIT_64(ETH_MODE_40G_CR4_BIT) |
				BIT_64(ETH_MODE_40G_KR4_BIT) |
				BIT_64(ETH_MODE_100G_CR4_BIT) |
				BIT_64(ETH_MODE_100G_KR4_BIT) |
				BIT_64(ETH_MODE_80GAUI_C2C_BIT) |
				BIT_64(ETH_MODE_25G_2_C2C_BIT) |
				BIT_64(ETH_MODE_50G_4_C2C_BIT) |
				BIT_64(ETH_MODE_40GAUI_C2C_BIT) |
				BIT_64(ETH_MODE_50GBASE_CR2_C_BIT) |
				BIT_64(ETH_MODE_50GBASE_KR2_C_BIT) |
				BIT_64(ETH_MODE_100GBASE_CR2_BIT) |
				BIT_64(ETH_MODE_100GBASE_KR2_BIT));

	if (!(lmac_cfg->phy_present) && !(lmac_cfg->sfp_slot))
		lmac_cfg->supported_link_modes = ETH_ALL_SUPPORTED_MODES;

	/* FIXME */
	if (lmac_cfg->phy_present)
		lmac_cfg->supported_link_modes = lmac_cfg->phy_config.supported_link_modes;

	lmac_cfg->supported_link_modes &= ~modes_exclude;

	/* FIXME: Check whether it is SFP/QSFP slot */
	if (lmac_cfg->sfp_slot) {
		if (lmac_cfg->sfp_info.is_sfp) {
			/* FIXME: KR/CR modes are not supported. Add these modes
			 * later
			 */
			modes_allowed =
				(BIT_64(ETH_MODE_1000_BASEX_BIT) |
				BIT_64(ETH_MODE_SGMII_BIT) |
				BIT_64(ETH_MODE_SFI_1G_BIT) |
				BIT_64(ETH_MODE_10G_C2C_BIT) |
				BIT_64(ETH_MODE_10G_C2M_BIT) |
				BIT_64(ETH_MODE_10G_KR_BIT) |
				BIT_64(ETH_MODE_25G_C2C_BIT) |
				BIT_64(ETH_MODE_25G_C2M_BIT) |
				BIT_64(ETH_MODE_25G_C2C_BIT) |
				BIT_64(ETH_MODE_25G_C2M_BIT) |
				//(BIT_64(ETH_MODE_25G_CR_C_BIT) |
				//(BIT_64(ETH_MODE_25G_KR_C_BIT) |
				//(BIT_64(ETH_MODE_50G_CR_BIT) |
				//(BIT_64(ETH_MODE_50G_KR_BIT) |
				BIT_64(ETH_MODE_50G_C2C_BIT) |
				BIT_64(ETH_MODE_50G_C2M_BIT));
		} else if (lmac_cfg->sfp_info.is_qsfp) {
			modes_allowed = ETH_ALL_SUPPORTED_MODES;
			modes_allowed &= ~modes_exclude;
		}
	}

	/* Restrict speed change only for modes based on PORTM */
	descr = portm_get_mode_desc(lmac_cfg->portm_idx);
	portm_count = cn10k_get_portm_mode_count(lmac_cfg->portm_idx);

	if (descr) {
		for (int i = 0; i < (portm_count - 1); i++) {
			eth_mode[i] = rpm_speed_mode_map[descr[i]].mode_bitmask;
			modes_allowed |= eth_mode[i];
		}
	}

	if (portm->portm_mode == PORTM_MODE_QSGMII)
		modes_allowed = BIT_64(ETH_MODE_QSGMII_BIT);

	lmac_cfg->supported_link_modes &= modes_allowed;

	/* Update the supported link modes to SH FW data mem */
	sh_fwdata_set_supported_link_modes(rpm_id, lmac_id);
}

static int rpm_check_mode_change_allowed(int rpm_id, int lmac_id, int new_portm_mode,
						uint64_t mode_bitmask)
{
	int change = 0;
	rpm_lmac_config_t *lmac_cfg;
	int new_lc, current_lc;
	portm_config_t *portm;

	debug_rpm_intf("%s: %d:%d mode_bitmask 0x%llx\n", __func__, rpm_id, lmac_id, mode_bitmask);

	lmac_cfg = &plat_octeontx_bcfg->rpm_cfg[rpm_id].lmac_cfg[lmac_id];
	portm = &(plat_octeontx_bcfg->portm_cfg[lmac_cfg->portm_idx]);

	/* Check if mode is in the supported link modes */
	if (!(mode_bitmask & lmac_cfg->supported_link_modes)) {
		debug_rpm_intf("%s: Not supported link mode bitmask 0x%llx link_mode 0x%llx\n",
			__func__, mode_bitmask,
			lmac_cfg->supported_link_modes);
		return 0;
	}

	/* Allow mode change if new mode's requested serdes lane is less
	 * than current mode lane num
	 */
	current_lc = cn10k_portm_get_mode_desc_serdes_num(portm->portm_mode);
	new_lc = cn10k_portm_get_mode_desc_serdes_num(new_portm_mode);
	if (new_lc && current_lc >= new_lc)
		change = 1;

	debug_rpm_intf("%s: %d:%d change %d new_lc %d max lane count %d\n",
				__func__, rpm_id, lmac_id, change,
				new_lc, current_lc);
	return change;
}

static int rpm_handle_mode_change(int rpm_id, int lmac_id,
				struct eth_mode_change_args *args)
{
	rpm_link_state_t link;
	rpm_lmac_context_t *lmac_ctx;
	rpm_lmac_config_t *lmac;
	int req_speed, req_duplex, valid = 1;
	int invalid_req = 0, portm_mode = 0;
	uint64_t req_mode = 0;
	uint64_t init_time, link_timeout;
	int ret = 0, status = 0;
	ecp_link_state_t link_state;
	portm_config_t *portm;

	lmac = &plat_octeontx_bcfg->rpm_cfg[rpm_id].lmac_cfg[lmac_id];
	portm = &(plat_octeontx_bcfg->portm_cfg[lmac->portm_idx]);
	lmac_ctx = &lmac_context[rpm_id][lmac_id];
	req_speed = args->speed;
	/* mode_group_idx categorizes the mode ID range to accommodate more modes.
	 * To specify mode ID range of 0 - 41, this field will be 0.
	 * To specify mode ID range of 42 - 83, this field will be 1 and so.
	 * mode ID will be still mentioned as 1 << (0 - 41). Obtain mode accordingly
	 * using mode_group_idx
	 */
	req_mode = args->mode + (args->mode_group_idx * 42);
	req_duplex = args->duplex;

	debug_rpm_intf("%s: %d:%d speed %d req_speed %d req_duplex %d req_mode 0x%llx\n",
				__func__, rpm_id, lmac_id, lmac_ctx->s.speed,
					req_speed, req_duplex, req_mode);

	/* Check if arguments are valid */
	if ((!req_mode) && (req_speed == ETH_LINK_NONE)) {
		invalid_req = 1;
		/* FIXME for duplex, AN */
		if (invalid_req == 1) {
			debug_rpm_intf("%s: %d: %d Invalid speed/AN/mode request\n",
					 __func__, rpm_id, lmac_id);
			rpm_set_error_type(rpm_id, lmac_id,
					ETH_ERR_SPEED_CHANGE_INVALID);
			goto mode_err;
		}
	}

	/* Get PORTM mode for requested mode */
	portm_mode = rpm_obtain_portm_mode(req_mode);
	if (portm_mode == PORTM_MODE_INVALID) {
		debug_rpm_intf("%s: portm%d: Not valid PORTM mode found for requested mode : 0x%llx\n",
				__func__,
				lmac->portm_idx,
				req_mode);
		rpm_set_error_type(rpm_id, lmac_id, ETH_ERR_SPEED_CHANGE_INVALID);
		goto mode_err;
	}
	debug_rpm_intf("%s: req_mode 0x%llx portm_mode %d\n", __func__, req_mode, portm_mode);

	/* If portm_mode is non-zero, validate if it is one of
	 * modes applicable for the PORTM
	 */
	if (cn10k_portm_mode_valid(lmac->portm_idx, portm_mode) != 1) {
		rpm_set_error_type(rpm_id, lmac_id, ETH_ERR_SPEED_CHANGE_INVALID);
		ERROR("portm%d: Invalid mode configuration : %d\n",
				lmac->portm_idx,
				portm_mode);
		goto mode_err;
	}

	if (portm->portm_mode != portm_mode) {
		/* Validate against supported link modes */
		valid = rpm_check_mode_change_allowed(rpm_id, lmac_id, portm_mode,
								req_mode);
		if (valid) {
			portm->portm_mode = portm_mode;
			/* Update the LMAC type */
			lmac->mode = gserm_get_mode_strmap(portm_mode).mode;
			/* Send request to ECP for mode change */
			ret = ecp_send_link_req(lmac->portm_idx, rpm_id, lmac_id, ECP_LINK_REQ_MODE_CHANGE);
			if (ret == -1) {
				/* Request not sent */
				debug_rpm_intf("%s: %d:%d Request not sent to ECP\n",
					__func__, rpm_id, lmac_id);
				rpm_set_error_type(rpm_id, lmac_id, LINK_ERR_ECP_LINK_REQ_FAIL);
				goto mode_err;
			} else {
				debug_rpm_intf("%s: %d:%d Request sent to ECP\n",
					__func__, rpm_id, lmac_id);
				/* Wait for
				 * RPM_POLL_LINK_BRINGUP_STATUS ms after
				 * sending the request to check if ECP has completed
				 * link bring up. For subsequent requests, just check the status
				 * and return without wait.
				 */
				init_time = clock_get_count(GSER_CLOCK_TIME);
				link_timeout = init_time + RPM_POLL_LINK_BRINGUP_STATUS *
						clock_get_rate(GSER_CLOCK_TIME)/1000000;
				while (clock_get_count(GSER_CLOCK_TIME)
					< link_timeout) {
					status = ecp_get_link_state(lmac->portm_idx, &link_state);
					/* Clear any errors set during LINK bring up as the mode
					 * is changed now successfully and link may come up
					 * later
					 */
					rpm_set_error_type(rpm_id, lmac_id, 0);
					if (status == ETH_LINK_STATE_LINK_UP)
						goto link_state;
					else if (status == ETH_LINK_STATE_LINK_FAIL)
						goto link_state;
					else if (status == ETH_LINK_STATE_LINK_STOPPED) {
						/* FIXME : KR/CR modes state */
						goto link_state;
					}
					mdelay(5);
				}
				goto link_state;
			}
		} else {
			debug_rpm_intf("%s: %d:%d Invalid speed/AN/mode request\n", __func__, rpm_id, lmac_id);
			rpm_set_error_type(rpm_id, lmac_id, ETH_ERR_SPEED_CHANGE_INVALID);
			goto mode_err;
		}
	} else {
		WARN("%s: %d:%d Requested mode is same as current mode, Ignore request\n",
				__func__, rpm_id, lmac_id);
		link.s.fec = lmac_ctx->s.fec;
		link.s.link_up = lmac_ctx->s.link_up;
		link.s.full_duplex = lmac_ctx->s.full_duplex;
		link.s.speed = lmac_ctx->s.speed;
		rpm_set_link_state(rpm_id, lmac_id, &link, 0);
	}
	return 0;

link_state:
	debug_rpm_intf("%s: %d:%d Mode Change Completed\n", __func__, rpm_id, lmac_id);
	/* Update link status and LMAC context structure */
	lmac_ctx->s.link_up = link.s.link_up = link_state.s.link_up;
	lmac_ctx->s.full_duplex = link.s.full_duplex = link_state.s.duplex;
	lmac_ctx->s.speed = link.s.speed = link_state.s.speed;
	lmac_ctx->s.fec = link.s.fec = link_state.s.fec;
	rpm_set_link_state(rpm_id, lmac_id, &link,
			rpm_get_error_type(rpm_id, lmac_id));
	/* Update new LMAC mode to shared memory */
	sh_fwdata_set_lmac_type(rpm_id, lmac_id);
	return 0;
mode_err:
	/* In case of not performing MODE change, update the link as saved status */
	link.s.fec = lmac_ctx->s.fec;
	link.s.link_up = lmac_ctx->s.link_up;
	link.s.full_duplex = lmac_ctx->s.full_duplex;
	link.s.speed = lmac_ctx->s.speed;
	rpm_set_link_state(rpm_id, lmac_id, &link,
			rpm_get_error_type(rpm_id, lmac_id));
	return -1;
}

/* Note : this function executes with lock acquired */
static int rpm_process_requests(int rpm_id, int lmac_id)
{
	int ret = 0, enable = 0, val = 0;
	int request_id = 0, err_type = 0, req_fec = 0;
	union eth_scratchx0 scratchx0;
	union eth_scratchx1 scratchx1;
	rpm_link_state_t link;
	rpm_lmac_context_t *lmac_ctx;
	rpm_lmac_config_t *lmac;
	portm_config_t *portm;

	lmac = &plat_octeontx_bcfg->rpm_cfg[rpm_id].lmac_cfg[lmac_id];
	portm = &(plat_octeontx_bcfg->portm_cfg[lmac->portm_idx]);
	lmac_ctx = &lmac_context[rpm_id][lmac_id];

	/* Read the command arguments from SCRATCHX(1) */
	scratchx1.u = CSR_READ(CAVM_RPMX_CMRX_SCRATCHX(rpm_id, lmac_id, 1));

	request_id = scratchx1.s.cmd.id;
	enable = scratchx1.s.cmd_args.enable;
	debug_rpm_intf("%s: %d:%d request_id %d\n", __func__, rpm_id,
				lmac_id, request_id);

	/* Always reset the error bits when processing new
	 * command except when obtaining current status
	 */
	if (request_id != ETH_CMD_GET_LINK_STS)
		rpm_set_error_type(rpm_id, lmac_id, 0);

	/* some of the commands like below should be handled independent
	 * of whether LMAC is enabled or not
	 */
	if ((request_id == ETH_CMD_INTF_SHUTDOWN) ||
		(request_id == ETH_CMD_SET_MAC_ADDR) ||
		(request_id == ETH_CMD_GET_FWD_BASE) ||
		(request_id == ETH_CMD_GET_FW_VER)) {
		switch (request_id) {
		case ETH_CMD_INTF_SHUTDOWN:
			rpm_fw_intf_shutdown();
			/* in case of shutdown, clear all other
			 * bits and set only ack bit to indicate
			 * to user request is processed (this bit
			 * will be cleared by user)
			 */
			scratchx0.u = 0;
			scratchx0.s.evt_sts.ack = 1; /* set ack */
			CSR_WRITE(CAVM_RPMX_CMRX_SCRATCHX(
				rpm_id, lmac_id, 0), scratchx0.u);
			return 0;
		case ETH_CMD_GET_FW_VER:
			scratchx0.u = 0;
			scratchx0.s.ver.major_ver = ETH_FIRMWARE_MAJOR_VER;
			scratchx0.s.ver.minor_ver = ETH_FIRMWARE_MINOR_VER;
			CSR_WRITE(CAVM_RPMX_CMRX_SCRATCHX(
				rpm_id, lmac_id, 0), scratchx0.u);
			break;
		case ETH_CMD_GET_FWD_BASE:
			scratchx0.u = 0;
			scratchx0.s.fwd_base_s.addr = get_sh_fwdata_base();
			CSR_WRITE(CAVM_RPMX_CMRX_SCRATCHX(rpm_id, lmac_id, 0),
				scratchx0.u);
			break;

		case ETH_CMD_SET_MAC_ADDR:
			sh_fwdata_update_mac_addr(scratchx1.s.mac_args.addr,
						  scratchx1.s.mac_args.pf_id);
			break;
		}
	} else {
		/* all the below commands should be processed only
		 * when LMAC is enabled
		 */
		if (lmac->lmac_enable) {
			switch (request_id) {
			case ETH_CMD_LINK_BRING_UP:
				ret = rpm_link_bringup(rpm_id, lmac_id);
				break;
			case ETH_CMD_LINK_BRING_DOWN:
				ret = rpm_link_bringdown(rpm_id, lmac_id);
				break;
			case ETH_CMD_GET_LINK_STS:
				CSR_WRITE(CAVM_RPMX_CMRX_SCRATCHX(
						rpm_id, lmac_id, 0), 0); /* reset */
				link.s.link_up = lmac_ctx->s.link_up;
				link.s.full_duplex = lmac_ctx->s.full_duplex;
				link.s.speed = lmac_ctx->s.speed;
				link.s.fec = lmac_ctx->s.fec;
				rpm_set_link_state(rpm_id, lmac_id, &link,
					lmac_ctx->s.error_type);
				rpm_set_link_mode(rpm_id, lmac_id,
						  portm->portm_mode);
				break;
			case ETH_CMD_GET_MAC_ADDR:
				scratchx0.u = 0;
				scratchx0.s.mac_s.addr_0 = lmac->local_mac_address[0];
				scratchx0.s.mac_s.addr_1 = lmac->local_mac_address[1];
				scratchx0.s.mac_s.addr_2 = lmac->local_mac_address[2];
				scratchx0.s.mac_s.addr_3 = lmac->local_mac_address[3];
				scratchx0.s.mac_s.addr_4 = lmac->local_mac_address[4];
				scratchx0.s.mac_s.addr_5 = lmac->local_mac_address[5];
				debug_rpm_intf("%s mac_addr %x:%x:%x:%x:%x:%x\n", __func__,
						scratchx0.s.mac_s.addr_0,
						scratchx0.s.mac_s.addr_1,
						scratchx0.s.mac_s.addr_2,
						scratchx0.s.mac_s.addr_3,
						scratchx0.s.mac_s.addr_4,
						scratchx0.s.mac_s.addr_5);
				CSR_WRITE(CAVM_RPMX_CMRX_SCRATCHX(
						rpm_id, lmac_id, 0), scratchx0.u);
				break;
			case ETH_CMD_GET_SUPPORTED_FEC:
				scratchx0.u = 0;
				/* FIXME: SFP EEPROM info will be available only when
				 * link is brought UP. If the link_enable is set
				 * in case of SFP slot, supported FEC should
				 * be returned based on transceiver capabilities
				 * If not, return PCS supported FEC types
				 */
				val = cn10k_portm_get_mode_desc_fec(portm->portm_mode);
				if ((val == PORTM_FEC_RS_528_ONLY) || (val == PORTM_FEC_RS_544_ONLY))
					val = PORTM_FEC_RS;
				scratchx0.s.supported_fec.fec = val;
				debug_rpm_intf("%s: %d:%d supported FEC %d\n",
					__func__, rpm_id, lmac_id,
					scratchx0.s.supported_fec.fec);
				CSR_WRITE(CAVM_RPMX_CMRX_SCRATCHX(
						rpm_id, lmac_id, 0),
						scratchx0.u);
				break;
			case ETH_CMD_INTERNAL_LBK:
				rpm_set_internal_loopback(rpm_id, lmac_id, enable);
				break;
			case ETH_CMD_EXTERNAL_LBK:
				rpm_set_external_loopback(rpm_id, lmac_id, enable);
				break;
			case ETH_CMD_SET_FEC:
				/* Read the command arguments from SCRATCH(1) */
				scratchx1.u = CSR_READ(CAVM_RPMX_CMRX_SCRATCHX(
							rpm_id, lmac_id, 1));
				req_fec = scratchx1.s.fec_args.fec;
				debug_rpm_intf("%s: %d:%d requested FEC %d\n",
					__func__,
					rpm_id, lmac_id, req_fec);
				ret = rpm_set_fec_type(rpm_id, lmac_id,
							req_fec);
				if (!rpm_get_error_type(rpm_id, lmac_id)) {
					/* Update the FEC in flash */
					if (rpm_update_flash_fec_param(rpm_id, lmac_id,
							req_fec))
						debug_rpm_intf("%s: %d:%d Flash update fec failed\n", __func__,
								rpm_id, lmac_id);
				}
			break;
			case ETH_CMD_MODE_CHANGE:
				/* Read the command arguments from SCRATCH(1) */
				scratchx1.u = CSR_READ(CAVM_RPMX_CMRX_SCRATCHX(
							rpm_id, lmac_id, 1));
				ret = rpm_handle_mode_change(rpm_id, lmac_id,
						&scratchx1.s.mode_change_args);
				if (!rpm_get_error_type(rpm_id, lmac_id)) {
					/* Update the PORTM mode in flash */
					if (rpm_update_flash_mode_param(rpm_id, lmac_id,
							portm->portm_mode))
						debug_rpm_intf("%s: %d:%d Flash update mode failed\n", __func__,
								rpm_id, lmac_id);
				}
			break;
#ifdef NT_FW_CONFIG
			case ETH_CMD_GET_MKEX_PROFILE:
				scratchx0.u = 0;
				scratchx0.s.prfl_addr.mcam_addr = cn10k_get_npc_profile_addr(0);
				CSR_WRITE(CAVM_RPMX_CMRX_SCRATCHX(
					rpm_id, lmac_id, 0), scratchx0.u);

				debug_rpm_intf("%s: MKEX_PROFILE %u\n", __func__,
					(unsigned int)scratchx0.s.prfl_addr.mcam_addr);
				break;

			case ETH_CMD_GET_MKEX_SIZE:
				scratchx0.u = 0;
				scratchx0.s.prfl_sz.mcam_sz = cn10k_get_npc_profile_size(0);
				CSR_WRITE(CAVM_RPMX_CMRX_SCRATCHX(
					rpm_id, lmac_id, 0), scratchx0.u);
				debug_rpm_intf("%s: MKEX_SIZE %u\n", __func__,
						(unsigned int)scratchx0.s.prfl_sz.mcam_sz);
				break;
#endif
			/* FIXME: add support for other commands */
			default:
				debug_rpm_intf("%s: %d:%d Invalid request %d\n",
					__func__, rpm_id, lmac_id, request_id);
				rpm_set_error_type(rpm_id, lmac_id,
					ETH_ERR_REQUEST_ID_INVALID);
				break;
			}
		} else {
			debug_rpm_intf("%s: RPM%d LMAC%d is not enabled.\t"
					"Req %d ignored\n", __func__, rpm_id,
					lmac_id, request_id);
			rpm_set_error_type(rpm_id, lmac_id,
					ETH_ERR_LMAC_NOT_ENABLED);
		}
	}

	/* update the event status either async or resp
	 * to command by writing to evt_sts struct
	 */
	scratchx0.u = CSR_READ(CAVM_RPMX_CMRX_SCRATCHX(rpm_id, lmac_id, 0));
	err_type = rpm_get_error_type(rpm_id, lmac_id);
	if ((err_type & RPM_ERR_MASK) && (request_id != ETH_CMD_GET_LINK_STS))
		scratchx0.s.evt_sts.stat = ETH_STAT_FAIL;
	else
		scratchx0.s.evt_sts.stat = ETH_STAT_SUCCESS;

	/* For all requests, update the command status, ID and
	 * set event type
	 */
	scratchx0.s.evt_sts.id = request_id;
	scratchx0.s.evt_sts.evt_type = ETH_EVT_CMD_RESP;
	if ((request_id != ETH_CMD_LINK_BRING_UP) &&
		(request_id != ETH_CMD_LINK_BRING_DOWN)) {
		/* in case of LINK_UP/DOWN, error type is updated
		 * as part of link status struct
		 */
		if (err_type & RPM_ERR_MASK)
			scratchx0.s.err.type = err_type;
	}

	scratchx0.s.evt_sts.ack = 1; /* set ack */
	CSR_WRITE(CAVM_RPMX_CMRX_SCRATCHX(
				rpm_id, lmac_id, 0), scratchx0.u);

	return ret;
}

/* Timer callback to process RPM requests */
static int rpm_handle_requests_cb(int timer)
{
	union eth_scratchx1 scratch1;
	union eth_scratchx0 scratch0;

	/* Go through all active LMACs and check
	 * if there are any new message requests by reading
	 * command register of each LMAC(SCRATCHX(1)
	 */
	for (int rpm = 0; rpm < plat_octeontx_scfg->rpm_count; rpm++) {
		for (int lmac = 0; lmac < MAX_LMAC_PER_RPM; lmac++) {
			scratch1.u = CSR_READ(CAVM_RPMX_CMRX_SCRATCHX(rpm, lmac, 1));
			scratch0.u = CSR_READ(CAVM_RPMX_CMRX_SCRATCHX(rpm, lmac, 0));
			/* acquire firmware internal lock */
			if (rpm_acquire_csr_lock(rpm, lmac) == -1) {
				debug_rpm_intf("%s %d:%d lock not"
				" obtained to process command,"
				" wait for now\n",
				 __func__, rpm, lmac);
				/* skip to next LMAC */
				continue;
			}

			/* poll on ownership to be set as OWN_FW to
			 * process any new requests
			 */
			if (scratch1.s.own_status == ETH_OWN_FIRMWARE) {
				if (scratch0.s.evt_sts.ack) {
					debug_rpm_intf("%s Req ignored,"
						" status not cleared\n",
						__func__);
					rpm_set_error_type(rpm, lmac,
					ETH_ERR_PREV_ACK_NOT_CLEAR);
					rpm_release_own_status(rpm, lmac);
					rpm_release_csr_lock(rpm, lmac);
					/* skip to next LMAC */
					continue;
				}

				rpm_process_requests(rpm, lmac);

				rpm_release_own_status(rpm, lmac);

				/* trigger an interrupt before ret */
				rpm_trigger_interrupt(rpm, lmac);
			}

			/* release firmware internal lock */
			rpm_release_csr_lock(rpm, lmac);
		}
	}
	return 0;
}

static int rpm_get_link_status(int rpm_id, int lmac_id, rpm_link_state_t *link)
{
	int status = 0;
	ecp_link_state_t link_state;
	rpm_lmac_config_t *lmac = NULL;
	rpm_link_state_t link_sts;

	lmac = &plat_octeontx_bcfg->rpm_cfg[rpm_id].lmac_cfg[lmac_id];

	debug_rpm_intf("%s: %d:%d mode %d\n", __func__, rpm_id, lmac_id, lmac->mode);

	/* FIXME: For SFP present cases */
	if (lmac->phy_present) {
		/* Get the PHY link status */
		if (phy_get_link_status(rpm_id, lmac_id, &link_sts) == -1) {
			debug_rpm_intf("%s: %d:%d PHY get link status failed\n",
				__func__, rpm_id, lmac_id);
			link->s.link_up = 0;
			link->s.full_duplex = 0;
			link->s.speed = ETH_LINK_NONE;
			return -1;
		}
		/* Update PHY's link status in SM for ECP to read */
		ecp_update_phy_link_state(lmac->portm_idx, &link_sts);
	}
	/* In case of SGMII/QSGMII/1000 BASE-X, with PHY not present,
	 * (even loopback module) return the link as UP based on
	 * PCS_RXX_SYNC with default speed as 1G
	 */
	if ((lmac->mode == CAVM_RPM_LMAC_TYPES_E_SGMII) ||
		(lmac->mode == CAVM_RPM_LMAC_TYPES_E_QSGMII)) {
		status = ecp_get_link_state(lmac->portm_idx, &link_state);
		if (status == ETH_LINK_STATE_LINK_UP) {
			link->s.link_up = 1;
			link->s.full_duplex = 1;
			link->s.speed = ETH_LINK_1G;
		} else if ((status == ETH_LINK_STATE_LINK_FAIL) ||
				(status == ETH_LINK_STATE_LINK_STOPPED)) {
			link->s.link_up = 0;
			link->s.full_duplex = 0;
			link->s.speed = ETH_LINK_NONE;
		}
		debug_rpm_intf("%s: %d:%d link %d speed %d duplex %d\n",
			__func__, rpm_id, lmac_id,
			link->s.link_up,
			link->s.speed, link->s.full_duplex);
		return 0;
	}

	if ((lmac->mode == CAVM_RPM_LMAC_TYPES_E_TENG_R) ||
		(lmac->mode == CAVM_RPM_LMAC_TYPES_E_TWENTYFIVEG_R) ||
		(lmac->mode == CAVM_RPM_LMAC_TYPES_E_FORTYG_R) ||
		(lmac->mode == CAVM_RPM_LMAC_TYPES_E_FIFTYG_R) ||
		(lmac->mode == CAVM_RPM_LMAC_TYPES_E_HUNDREDG_R) ||
		(lmac->mode == CAVM_RPM_LMAC_TYPES_E_USXGMII)) {
		/* Obtain the link status from ECP via SM */
		status = ecp_get_link_state(lmac->portm_idx, &link_state);
		link->s.link_up = link_state.s.link_up;
		link->s.full_duplex = link_state.s.duplex;
		link->s.speed = link_state.s.speed;
		link->s.fec = link_state.s.fec;

		debug_rpm_intf("%s: %d:%d link %d speed %d duplex %d fec %d\n",
			__func__, rpm_id, lmac_id,
			link->s.link_up,
			link->s.speed, link->s.full_duplex,
			link->s.fec);
		return 0;
	}

	/* Other cases should not reach here */
	ERROR("%s: %d:%d Invalid reach\n", __func__, rpm_id, lmac_id);
	return -1;
}


/* Timer callback to periodically poll for link */
static int rpm_poll_for_link_cb(int timer)
{
	int err_type = 0;
	rpm_lmac_context_t *lmac_ctx;
	rpm_link_state_t link;
	union eth_scratchx0 scratchx0;

	for (int rpm = 0; rpm < plat_octeontx_scfg->rpm_count; rpm++) {
		for (int lmac = 0; lmac < MAX_LMAC_PER_RPM; lmac++) {
			lmac_ctx = &lmac_context[rpm][lmac];

			link.u64 = 0;

			if (lmac_ctx->s.link_enable) {
				/* Get the link status */
				rpm_get_link_status(rpm, lmac, &link);

				/* If the prev link change is not handled
				 * wait until it is handled as the reqs
				 * are handled one at a time
				 */
				if (((lmac_ctx->s.link_up !=
					link.s.link_up) ||
					(lmac_ctx->s.full_duplex !=
					link.s.full_duplex) ||
					(lmac_ctx->s.speed !=
					link.s.speed))) {
					debug_rpm_intf("%d:%d Link changed %d\n",
							rpm, lmac,
							link.s.link_up);
					/* Acquire firmware internal lock */
					if (rpm_acquire_csr_lock(rpm, lmac) == -1) {
						debug_rpm_intf("%s %d:%d Lock not"
								" obtained to process command\n",
								__func__, rpm, lmac);
						/* skip to next LMAC */
						continue;
					}

					/* Update the current link status along with any error type set */
					rpm_set_link_state(rpm, lmac, &link, err_type);

					lmac_ctx->s.link_up = link.s.link_up;
					lmac_ctx->s.full_duplex = link.s.full_duplex;
					lmac_ctx->s.speed = link.s.speed;
					lmac_ctx->s.fec = link.s.fec;

					/* Update the event status to evt_sts struct to notify kernel */
					scratchx0.u = CSR_READ(CAVM_RPMX_CMRX_SCRATCHX(rpm, lmac, 0));
					err_type = rpm_get_error_type(rpm, lmac);
					if (err_type & RPM_ERR_MASK)
						scratchx0.s.evt_sts.stat = ETH_STAT_FAIL;
					else
						scratchx0.s.evt_sts.stat = ETH_STAT_SUCCESS;

					scratchx0.s.evt_sts.id = ETH_EVT_LINK_CHANGE;
					scratchx0.s.evt_sts.evt_type = ETH_EVT_ASYNC;
					scratchx0.s.evt_sts.ack = 1; /* set ack */
					CSR_WRITE(CAVM_RPMX_CMRX_SCRATCHX(rpm, lmac, 0),
										scratchx0.u);
					/* Trigger an interrupt to notify the event */
					rpm_trigger_interrupt(rpm, lmac);

					/* Release firmware internal lock */
					rpm_release_csr_lock(rpm, lmac);
				}
			}
		}
	}
	return 0;
}

/* this function to be called from any RPM function when major
 * error type is encountered
 */
void rpm_set_error_type(int rpm_id, int lmac_id, uint64_t type)
{
	rpm_lmac_context_t *lmac_ctx;

	lmac_ctx = &lmac_context[rpm_id][lmac_id];
	lmac_ctx->s.error_type = type;
}

/* This function should be called once during boot time */
void rpm_fw_intf_init(void)
{
	rpm_config_t *rpm_cfg;
	rpm_lmac_config_t *lmac_cfg;
	rpm_lmac_context_t *lmac_ctx;

	for (int rpm = 0; rpm < plat_octeontx_scfg->rpm_count; rpm++) {
		rpm_cfg = &plat_octeontx_bcfg->rpm_cfg[rpm];

		if (rpm_cfg->enable) {
			for (int lmac = 0; lmac < MAX_LMAC_PER_RPM; lmac++) {
				lmac_cfg = &plat_octeontx_bcfg->rpm_cfg[rpm].lmac_cfg[lmac];
				lmac_ctx = &lmac_context[rpm][lmac];
				if (lmac_cfg->lmac_enable) {
					if (lmac_cfg->phy_present) {
						/* If PHY is present, look up for PHY
						 * driver and init
						 */
						phy_lookup(rpm, lmac, lmac_cfg->phy_config.type);
						if ((lmac_cfg->phy_config.valid) &&
							(!lmac_cfg->phy_config.init)) {
							debug_rpm_intf("%s: Init PHY\n", __func__);
							phy_probe(rpm, lmac);
							lmac_cfg->phy_config.init = 1;
						}
					}
					lmac_ctx->s.init_link = 1;
					/* If PHY is initialized, configure
					 * the PHY. For ex: to set in
					 * particular mode
					 */
					if (lmac_cfg->phy_config.init) {
						phy_config(rpm, lmac);
						phy_set_supported_link_modes(rpm, lmac);
					}
					rpm_set_supported_link_modes(rpm, lmac);
				}
			}
		} else {
			/* for RPMs that are not configured by EBF to any mode,
			 * RPM config CSRs needs to be configured correctly
			 * as init callback will not be triggered for these
			 * RPMs
			 */
			/* FIXME */
		}
	}

	/* Start 1st timer to handle & process RPM requests */
	rpm_timers[0] = timer_create(TM_PERIODIC, plat_octeontx_bcfg->timer1_ms, rpm_handle_requests_cb);
	timer_start(rpm_timers[0]);

	/* Start 2nd timer to periodically poll for link status */
	rpm_timers[1] = timer_create(TM_PERIODIC, plat_octeontx_bcfg->timer2_ms,
					rpm_poll_for_link_cb);
	timer_start(rpm_timers[1]);
}

/* this function required to be called when booting to kernel
 * from uefi/u-boot. Timer will still be running,
 * Brings down the link for which ever link is enabled and clear
 * the SCRATCHx register info so
 * when kernel is booting, it can start new.
 */
void rpm_fw_intf_shutdown(void)
{
	int init = 0;
	rpm_lmac_context_t *lmac_ctx;
	rpm_lmac_config_t *lmac_cfg;

	debug_rpm_intf("%s\n", __func__);

	/* bring down all the links and clear all SCRATCHX
	 * registers/context
	 */
	for (int rpm = 0; rpm < plat_octeontx_scfg->rpm_count; rpm++) {
		for (int lmac = 0; lmac < MAX_LMAC_PER_RPM; lmac++) {
			lmac_ctx = &lmac_context[rpm][lmac];
			lmac_cfg = &plat_octeontx_bcfg->rpm_cfg[rpm]
							.lmac_cfg[lmac];
			/* Bring down the link if link_enable is set.
			 * After bringing down the links, do one time
			 * initialization of the LMACs that are enabled
			 * so kernel can bring up the link.
			 * In case of QSGMII, always bring down the link
			 * for all the LMACs associated with the RPM
			 */
			init = 0;
			if ((lmac_cfg->mode == CAVM_RPM_LMAC_TYPES_E_QSGMII) ||
				(lmac_ctx->s.link_enable)) {
				rpm_link_bringdown(rpm, lmac);
				mdelay(1);
				/* Set to indicate the link is
				 * initialized as the LMAC
				 * context structure will be reset
				 */
				init = 1;
			}
			CSR_WRITE(CAVM_RPMX_CMRX_SCRATCHX(
					rpm, lmac, 0), 0);
			CSR_WRITE(CAVM_RPMX_CMRX_SCRATCHX(
					rpm, lmac, 1), 0);
			lmac_ctx->u64 = 0;
			if (init)
				lmac_ctx->s.init_link = 1;
			/* Clear the interrupt during shutdown for all
			 * LMACs as there might be a possibility that
			 * interrupts are not cleared by u-boot
			 * as it doesn't handle asynchronous events
			 */
			CAVM_MODIFY_RPM_CSR(cavm_rpmx_cmrx_sw_int_t,
				CAVM_RPMX_CMRX_SW_INT(rpm, lmac),
				sw_set, 1);
		}
		for (int lmac = 0; lmac < MAX_LMAC_PER_RPM; lmac++) {
			lmac_ctx = &lmac_context[rpm][lmac];
			lmac_cfg = &plat_octeontx_bcfg->rpm_cfg[rpm]
							.lmac_cfg[lmac];
			/* FIXME  : Now for each RPM, initialize the link for
			 * each LMAC if the link was brought down
			 */
			/* Set init_link = 1 for all enabled LMACs as
			 * the link is already initialized but never
			 * brought up/down
			 */
			if (lmac_cfg->lmac_enable)
				lmac_ctx->s.init_link = 1;
		}
	}
}
