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
#include <portm_helper.h>

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

rpm_lmac_bringup_context_t bringup_context[MAX_RPM][MAX_LMAC_PER_RPM];

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

static int rpm_update_cl73_portm_cfg(int rpm_id, int lmac_id, int portm_idx)
{
	portm_config_t *portm;
	portm_config_aneg_t portm_cfg_aneg = {0};

	portm = &(plat_octeontx_bcfg->portm_cfg[portm_idx]);
	if (ecp_get_aneg_portm_cfg(portm_idx, &portm_cfg_aneg))
		return -1;

	portm->portm_mode = portm_cfg_aneg.portm_mode;
	portm->pcs_type = portm_cfg_aneg.pcs_type;
	portm->fec = portm_cfg_aneg.fec;
	portm->gser_numlanes = portm_cfg_aneg.gser_numlanes;
	portm->portms_used = portm_cfg_aneg.portms_used;

	debug_rpm_intf("%s %d:%d 802.3AP HCD mode:%d, fec:%d, pcs_type:%d, numlanes:%d, portms_used:%d\n",
		       __func__, rpm_id, lmac_id, portm->portm_mode, portm->fec, portm->pcs_type,
		       portm->gser_numlanes, portm->portms_used);

	return 0;
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
	if (lmac_cfg->phy_present && lmac_cfg->phy_config)
		an = lmac_cfg->phy_config->req_an;
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

static int rpm_sfp_obtain_capabilities(int rpm_id, int lmac_id)
{
	int trans_type;
	rpm_lmac_config_t *lmac =
		&plat_octeontx_bcfg->rpm_cfg[rpm_id].lmac_cfg[lmac_id];

	/* Read the EEPROM to determine new module capabilities */
	trans_type = sfp_parse_eeprom_data(lmac->portm_idx);

	if (trans_type != SFP_TRANS_TYPE_NONE) {
		/* If Valid transceiver found */
		debug_rpm_intf("%s: %d:%d trans_type %d\n",
				__func__, rpm_id, lmac_id,
				trans_type);
		return sfp_validate_user_options(lmac->portm_idx);
	}

	debug_rpm_intf("%s: %d:%d Valid transceiver not identified\n",
		__func__, rpm_id, lmac_id);
	rpm_set_error_type(rpm_id, lmac_id, ETH_ERR_MODULE_INVALID);
	return 0;
}

static int rpm_check_sfp_mod_stat(int rpm_id, int lmac_id)
{
	int ret = 0, mod_status = 0;
	rpm_lmac_context_t *lmac_ctx;
	rpm_lmac_config_t *lmac;

	lmac_ctx = &lmac_context[rpm_id][lmac_id];
	lmac = &plat_octeontx_bcfg->rpm_cfg[rpm_id].lmac_cfg[lmac_id];

	/* Obtain the module status */
	mod_status = sfp_get_mod_status(lmac->portm_idx);

	debug_rpm_intf("%s: %d:%d mod_status %d\n",
			__func__, rpm_id, lmac_id, mod_status);

	if (mod_status == -1)
		return -1;

	if (mod_status != lmac_ctx->s.mod_stats) {
		/* Update the new status */
		lmac_ctx->s.mod_stats = mod_status;
		if ((mod_status == SFP_MOD_STATE_PRESENT) ||
			(mod_status == SFP_MOD_STATE_EEPROM_UPDATED)) {
			/* User has unplug and plug the module.
			 * In this case, read the EEPROM capabilities
			 * and configure ethernet MAC accordingly if there is
			 * a change in capabilities.
			 */
			debug_rpm_intf("%s: %d:%d User has plugged module\n",
				 __func__, rpm_id, lmac_id);

			ret = rpm_sfp_obtain_capabilities(rpm_id, lmac_id);
			if (ret != 1)
				return -1;
			return 1; /* Valid */
		} else if (mod_status == SFP_MOD_STATE_ABSENT) {
			debug_rpm_intf("%s: %d:%d user has un-plugged cable\n",
					__func__, rpm_id, lmac_id);
			/* If Module is absent, clear the EEPROM data */
			sh_fwdata_clear_eeprom_data(rpm_id, lmac_id, 0);
			return 0;
		}
	}
	/* MCP updates EEPROM buffer every 5s if the user
	 * hasn't un-plugged/plugged the transceiver. In this
	 * case, where there is no change in module status, just
	 * update the SH memory with the
	 * data and do not handle any link change
	 */
	if (mod_status == SFP_MOD_STATE_EEPROM_UPDATED) {
		lmac_ctx->s.mod_stats = mod_status;
		sfp_parse_eeprom_data(lmac->portm_idx);
		return 1; /* Valid */
	}
	return 0;
}

static int rpm_get_link_status(int rpm_id, int lmac_id, rpm_link_state_t *link)
{
	int status = 0, sig_detect = 0, ret = 0;
	ecp_link_state_t link_state;
	rpm_lmac_context_t *lmac_ctx;
	rpm_lmac_config_t *lmac = NULL;
	rpm_link_state_t link_sts;
	portm_config_t *portm;

	lmac_ctx = &lmac_context[rpm_id][lmac_id];
	lmac = &plat_octeontx_bcfg->rpm_cfg[rpm_id].lmac_cfg[lmac_id];
	portm = &(plat_octeontx_bcfg->portm_cfg[lmac->portm_idx]);

	debug_rpm_intf("%s: %d:%d mode %d\n", __func__, rpm_id, lmac_id, lmac->mode);

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
		ecp_update_phy_link_state(lmac->portm_idx, lmac_id, &link_sts);
	}

	/* Obtain the link status from ECP via SM */
	status = ecp_get_link_state(lmac->portm_idx, lmac_id, &link_state, &sig_detect);
	/* Update Portm cfg after 802.3AP completes
	 * Only updates when transitioning from link down to up
	 */
	if ((!lmac_ctx->s.link_up) &&
	    (link_state.s.link_up)) {
		if (portm->an_lt_ena) {
			if (rpm_update_cl73_portm_cfg(rpm_id, lmac_id, lmac->portm_idx))
				debug_rpm_intf("%s %d:%d Failed to update Portm CFG after 802.3AP Link Up\n",
					       __func__, rpm_id, lmac_id);
		}
	}

	if (status != ETH_LINK_STATE_NO_STATE) {
		link->s.link_up = link_state.s.link_up;
		link->s.full_duplex = link_state.s.duplex;
		link->s.speed = link_state.s.speed;
		link->s.fec = link_state.s.fec;
	} else {
		link->s.link_up = 0;
		link->s.full_duplex = 0;
		link->s.speed = ETH_LINK_NONE;
		link->s.fec = 0;
	}

	debug_rpm_intf("%s: %d:%d Link Status: %d\n", __func__, rpm_id, lmac_id, status);

	if (status == ETH_LINK_STATE_LINK_STOPPED) { /* Check if ECP has stopped link bringup */
		debug_rpm_intf("%s: %d:%d Link Bringup Stopped\n", __func__, rpm_id, lmac_id);
		if (portm->an_lt_ena) /* CL73 AN enabled */
			/* FIXME: Add link training history trace dump */
			ret = ecp_send_link_req(lmac->portm_idx, rpm_id, lmac_id, ECP_LINK_REQ_AN_RESTART, lmac_ctx);
		else
			ret = ecp_send_link_req(lmac->portm_idx, rpm_id, lmac_id, ECP_LINK_REQ_BRINGUP, lmac_ctx);

		if (ret == -1) {
			/* Request not sent */
			debug_rpm_intf("%s: %d:%d Request not sent to ECP to restart Link Bringup\n",
				       __func__, rpm_id, lmac_id);
			rpm_set_error_type(rpm_id, lmac_id, ETH_ERR_ECP_LINK_REQ_FAIL);
		}
	}

	debug_rpm_intf("%s: %d:%d link %d speed %d duplex %d fec %d\n",
			__func__, rpm_id, lmac_id,
			link->s.link_up,
			link->s.speed, link->s.full_duplex,
			link->s.fec);
	return 0;
}

static int rpm_handle_link_in_progress(int rpm_id, int lmac_id)
{
	int mod_status = 0;
	rpm_lmac_context_t *lmac_ctx;
	rpm_lmac_config_t *lmac_cfg;
	rpm_link_state_t link_sts;
	rpm_lmac_bringup_context_t *bringup_ctx;
	uint64_t current_time = 0, link_check_status_time = 0;

	lmac_ctx = &lmac_context[rpm_id][lmac_id];
	lmac_cfg = &plat_octeontx_bcfg->rpm_cfg[rpm_id].lmac_cfg[lmac_id];
	bringup_ctx = &bringup_context[rpm_id][lmac_id];
	link_sts.u64 = 0;

	current_time = clock_get_count(GSER_CLOCK_TIME);
	link_check_status_time = (current_time * 1000000)/(clock_get_rate(GSER_CLOCK_TIME)) - (bringup_ctx->link_bringup_init_time);
	bringup_ctx->link_bringup_time = link_check_status_time;

	debug_rpm_intf("%s %d:%d Bring up time %lld bringup_ctx->link_timeout %lld bringup_ctx->link_bringup_init_time %lld\n",
			__func__, rpm_id, lmac_id, bringup_ctx->link_bringup_time, bringup_ctx->link_timeout,
			bringup_ctx->link_bringup_init_time);

	mod_status = rpm_check_sfp_mod_stat(rpm_id, lmac_id);
	if (mod_status != 1)
		debug_rpm_intf("%s: %d:%d Unable to get Module status\n",
			       __func__, rpm_id, lmac_id);
	else {
		if (!mod_status) {
			debug_rpm_intf("%s: %d:%d Module not present\n",
				       __func__, rpm_id, lmac_id);
			rpm_set_error_type(rpm_id, lmac_id,
					   ETH_ERR_MODULE_NOT_PRESENT);
		}
		/* Update SFP mod status in ECP SM */
		ecp_update_sfp_mod_state(lmac_cfg->portm_idx, lmac_ctx->s.mod_stats);
	}

	rpm_get_link_status(rpm_id, lmac_id, &link_sts);
	if (link_sts.s.link_up) {
		/* Update link status */
		debug_rpm_intf("%s %d:%d Link is UP\n", __func__, rpm_id, lmac_id);
		lmac_ctx->s.link_up = link_sts.s.link_up;
		lmac_ctx->s.full_duplex = link_sts.s.full_duplex;
		lmac_ctx->s.speed = link_sts.s.speed;
		lmac_ctx->s.fec = link_sts.s.fec;
		lmac_ctx->s.link_enable = 1;
		rpm_set_link_state(rpm_id, lmac_id, &link_sts, 0);
		bringup_ctx->link_bringup_time = 0;
		bringup_ctx->link_bringup_status = LINK_BRINGUP_DONE;
		bringup_ctx->link_bringup_init_time = 0;
	} else {
		if (bringup_ctx->link_bringup_time <= bringup_ctx->link_timeout) {
			debug_rpm_intf("%s %d:%d Link bring up in progress\n", __func__, rpm_id, lmac_id);
		} else {
			debug_rpm_intf("%s %d:%d Link not UP\n", __func__, rpm_id, lmac_id);
			bringup_ctx->link_bringup_status = LINK_BRINGUP_DONE;
			bringup_ctx->link_bringup_time = 0;
			bringup_ctx->link_bringup_init_time = 0;
			lmac_ctx->s.link_up = 0;
			lmac_ctx->s.full_duplex = 0;
			lmac_ctx->s.speed = 0;
			lmac_ctx->s.fec = link_sts.s.fec;
			rpm_set_link_state(rpm_id, lmac_id, &link_sts, rpm_get_error_type(rpm_id, lmac_id));
			lmac_ctx->s.link_enable = 1;
			ecp_dump_state_history(lmac_cfg->portm_idx, lmac_id, "Link bringup failed");
		}
	}
	return 0;
}

static int rpm_link_bringup(int rpm_id, int lmac_id, uint64_t link_timeout)
{
	int mod_status = 0, sfp_count = 0, ret = 0;
	rpm_lmac_config_t *lmac_cfg;
	rpm_lmac_context_t *lmac_ctx;
	rpm_link_state_t link_sts;
	rpm_lmac_bringup_context_t *bringup_ctx;
	portm_config_t *portm;

	/* Get the lmac type and based on lmac
	 * type, initialize ethernet link
	 */
	lmac_cfg = &plat_octeontx_bcfg->rpm_cfg[rpm_id].lmac_cfg[lmac_id];
	portm = &(plat_octeontx_bcfg->portm_cfg[lmac_cfg->portm_idx]);

	debug_rpm_intf("%s %d:%d lmac_type %d\n", __func__, rpm_id,
			lmac_id, lmac_cfg->mode);

	lmac_ctx = &lmac_context[rpm_id][lmac_id];

	bringup_ctx = &bringup_context[rpm_id][lmac_id];

	link_sts.u64 = 0;

	if (bringup_ctx->link_bringup_status == LINK_BRINGUP_IN_PROGRESS) {
		ret = rpm_handle_link_in_progress(rpm_id, lmac_id);
		return ret;
	}

	if ((lmac_cfg->mode == CAVM_RPM_LMAC_TYPES_E_SGMII) ||
		(lmac_cfg->mode == CAVM_RPM_LMAC_TYPES_E_QSGMII) ||
		(lmac_cfg->mode == CAVM_RPM_LMAC_TYPES_E_USXGMII) ||
		(lmac_cfg->mode == CAVM_RPM_LMAC_TYPES_E_USGMII))  {

		if (lmac_cfg->sfp_slot) {
retry_mod_stat:
			mod_status = rpm_check_sfp_mod_stat(rpm_id, lmac_id);
			if (mod_status != 1) {
				if (sfp_count++ < 10) {
					mdelay(1);
					goto retry_mod_stat;
				} else {
					if (!mod_status) {
						debug_rpm_intf("%s: %d:%d Module not present\n",
							__func__, rpm_id, lmac_id);
						rpm_set_error_type(rpm_id, lmac_id,
							ETH_ERR_MODULE_NOT_PRESENT);
					}
				}
			}
			/* Update SFP mod status in ECP SM */
			ecp_update_sfp_mod_state(lmac_cfg->portm_idx, lmac_ctx->s.mod_stats);

			rpm_set_link_state(rpm_id, lmac_id, &link_sts,
					rpm_get_error_type(rpm_id, lmac_id));
			goto retry_link;
		}
retry_link:
		if ((lmac_ctx->s.lbk1_enable) || (!lmac_cfg->phy_present)) {
			link_sts.s.link_up = 1;
			link_sts.s.full_duplex = 1;
			link_sts.s.speed = ETH_LINK_1G;
		} else {
			/* Get the PHY link status */
			phy_get_link_status(rpm_id, lmac_id, &link_sts);
			/* Update PHY's link status in SM for ECP to read */
			ecp_update_phy_link_state(lmac_cfg->portm_idx, lmac_id, &link_sts);
		}
		if (rpm_lmac_port_enable(rpm_id, lmac_id, lmac_ctx, &link_sts, link_timeout) != 0) {
			if (rpm_get_error_type(rpm_id, lmac_id) != 0) {
				debug_rpm_intf("%s %d:%d Link down\n", __func__, rpm_id, lmac_id);
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

		if (lmac_cfg->sfp_slot) {
retry_mod_stat1:
			mod_status = rpm_check_sfp_mod_stat(rpm_id, lmac_id);
			if (mod_status != 1) {
				if (sfp_count++ < 5) {
					mdelay(1);
					goto retry_mod_stat1;
				} else {
					if (!mod_status) {
						debug_rpm_intf("%s: %d:%d Module not present\n",
							__func__, rpm_id, lmac_id);
						rpm_set_error_type(rpm_id, lmac_id,
							ETH_ERR_MODULE_NOT_PRESENT);
					}
				}
			}
			/* Update SFP mod status in ECP SM */
			ecp_update_sfp_mod_state(lmac_cfg->portm_idx, lmac_ctx->s.mod_stats);

			goto retry_link1;
		}
retry_link1:
		/* Enable LMAC port - PCS/MAC config */
		if (rpm_lmac_port_enable(rpm_id, lmac_id, lmac_ctx, &link_sts, link_timeout) != 0) {
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
			/* Update portm data based on 802.3AP Clause 73 HCD */
			if (portm->an_lt_ena) {
				if (rpm_update_cl73_portm_cfg(rpm_id, lmac_id, lmac_cfg->portm_idx))
					debug_rpm_intf("%s %d:%d Failed to update Portm CFG after 802.3AP Link Up\n",
						__func__, rpm_id, lmac_id);
			}
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
	/* Check the link bring up status and if the link bring up is in progress
	 * don't declare the link as down
	 */
	if (bringup_ctx->link_bringup_status != LINK_BRINGUP_IN_PROGRESS) {
		lmac_ctx->s.link_enable = 1;
		rpm_set_link_state(rpm_id, lmac_id, &link_sts,
				rpm_get_error_type(rpm_id, lmac_id));
	}
	return -1;
}

static int rpm_link_bringdown(int rpm_id, int lmac_id)
{
	int ret = 0;
	rpm_lmac_config_t *lmac_cfg;
	rpm_lmac_context_t *lmac_ctx;
	rpm_link_state_t link;
	rpm_lmac_bringup_context_t *bringup_ctx;

	/* get the lmac type and based on lmac
	 * type, bring down ethernet link
	 */
	lmac_cfg = &plat_octeontx_bcfg->rpm_cfg[rpm_id].lmac_cfg[lmac_id];
	debug_rpm_intf("%s %d:%d lmac_type %d\n", __func__,
				rpm_id, lmac_id, lmac_cfg->mode);

	lmac_ctx = &lmac_context[rpm_id][lmac_id];
	bringup_ctx = &bringup_context[rpm_id][lmac_id];

	if ((lmac_cfg->mode == CAVM_RPM_LMAC_TYPES_E_TENG_R) ||
		(lmac_cfg->mode == CAVM_RPM_LMAC_TYPES_E_SGMII) ||
		(lmac_cfg->mode == CAVM_RPM_LMAC_TYPES_E_QSGMII) ||
		(lmac_cfg->mode == CAVM_RPM_LMAC_TYPES_E_USGMII) ||
		(lmac_cfg->mode == CAVM_RPM_LMAC_TYPES_E_USXGMII) ||
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
	bringup_ctx->link_timeout = 0; /* reset to 0 */
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
	rpm_link_state_t link_sts = {0};
	rpm_lmac_config_t *lmac;
	rpm_lmac_context_t *lmac_ctx;
	portm_config_t *portm;
	portm_ap_802_3_adv_t *ap_adv;
	cn10k_portm_fec_t fec = 0, ret = 0;
	rpm_lmac_bringup_context_t *bringup_ctx;

	bringup_ctx = &bringup_context[rpm_id][lmac_id];
	lmac_ctx = &lmac_context[rpm_id][lmac_id];
	lmac = &plat_octeontx_bcfg->rpm_cfg[rpm_id].lmac_cfg[lmac_id];
	portm = &(plat_octeontx_bcfg->portm_cfg[lmac->portm_idx]);
	ap_adv = &portm->ap_802_3_adv;

	debug_rpm_intf("%s: %d:%d fec %d request_fec %d\n", __func__, rpm_id,
				lmac_id, lmac->fec, req_fec);

	if (bringup_ctx->link_bringup_status == LINK_BRINGUP_IN_PROGRESS) {
		ret = rpm_handle_link_in_progress(rpm_id, lmac_id);
		return ret;
	}

	if ((lmac->mode == CAVM_RPM_LMAC_TYPES_E_SGMII) ||
			(lmac->mode == CAVM_RPM_LMAC_TYPES_E_QSGMII) ||
			(lmac->mode == CAVM_RPM_LMAC_TYPES_E_USXGMII)) {
		WARN("%s: %d: %d FEC is not applicable for this mode %d\n",
				__func__, rpm_id, lmac_id, lmac->mode);
		return 0;
	}

	if ((!lmac->phy_present) && (req_fec == lmac->fec)) {
		WARN("%s: %d:%d FEC requested is same as current FEC state\n",
				__func__, rpm_id, lmac_id);
		return 0;
	}

	/* Validate FEC based on PORTM mode */
	fec = req_fec;
	ret = cn10k_portm_fec_valid(portm->portm_mode, &fec);
	if (!ret) {
		debug_rpm_intf("%s: %d:%d: FEC type %s not supported by mode %s\n",
			       __func__, rpm_id, lmac_id,
			       cn10k_portm_fec_type_to_str(req_fec),
			       cn10k_portm_mode_to_cfg_str(portm->portm_mode));
		return 0;
	}

	debug_rpm_intf("%s: %d:%d fec %d\n", __func__, rpm_id, lmac_id, fec);

	/* FIXME: Validate FEC based on transceiver and add support for line side FEC */
	if (portm->an_lt_ena) {
		cn10k_portm_update_802_3ap_fec(fec, ap_adv);
		portm->fec = lmac->fec = fec;
	} else
		portm->fec = lmac->fec = fec;

	/* Send request to ECP for FEC change */
	if (rpm_fec_change(rpm_id, lmac_id, lmac->fec, lmac_ctx, &link_sts))
		goto fec_fail;

	/* Update the new FEC type with current link status */
	lmac_ctx->s.fec = link_sts.s.fec = req_fec;
	if (bringup_ctx->link_bringup_status == LINK_BRINGUP_IN_PROGRESS)  {
		lmac_ctx->s.link_up = link_sts.s.link_up = 0;
		lmac_ctx->s.full_duplex = link_sts.s.full_duplex = 0;
		lmac_ctx->s.speed = link_sts.s.speed = 0;
	} else {
		lmac_ctx->s.link_up = link_sts.s.link_up;
		lmac_ctx->s.full_duplex = link_sts.s.full_duplex;
		lmac_ctx->s.speed = link_sts.s.speed;

		rpm_set_link_state(rpm_id, lmac_id, &link_sts,
				rpm_get_error_type(rpm_id, lmac_id));
	}

	return 0;

fec_fail:
	ERROR("%s: FEC type could not be changed\n", __func__);
	rpm_set_error_type(rpm_id, lmac_id, ETH_ERR_SET_FEC_FAIL);
	return -1;
}

static int rpm_set_serdes_tx_tune(int portm_idx, int tx_main, int tx_pre1, int tx_pre2,
				  int tx_post, rpm_lmac_context_t *lmac_ctx)
{
	portm_config_t *portm;
	portm_tx_tuning_t tx_tuning = {0};
	int mac_id, lmac_id;
	uint64_t init_time, tune_timeout;
	int req_in_prog = 1, ret, txeq_match = 0;

	portm = &(plat_octeontx_bcfg->portm_cfg[portm_idx]);
	mac_id = portm->mac_num;
	lmac_id = portm->mac_lane;

	debug_rpm_intf("%s: PORTM%d New Tx Eq: pre2:%d, pre1:%d, main:%d, post:%d\n",
		       __func__, portm_idx, tx_pre2, tx_pre1, tx_main, tx_post);

	tx_tuning.portm_mode = portm->portm_mode;
	tx_tuning.tx_main = tx_main;

	/*
	 * Regardless if user provides a signed value or not
	 * pre2/pre1/post will be treated as negative
	 */
	tx_post = (tx_post < 0) ? tx_post : -tx_post;
	tx_pre1 = (tx_pre1 < 0) ? tx_pre1 : -tx_pre1;
	tx_pre2 = (tx_pre2 < 0) ? tx_pre2 : -tx_pre2;
	tx_tuning.tx_post = tx_post;
	tx_tuning.tx_pre1 = tx_pre1;
	tx_tuning.tx_pre2 = tx_pre2;

	if (!cn10k_portm_tx_tuning_valid(portm_idx, 0, &tx_tuning)) {
		ERROR("PORTM%d: Invalid Tx equalization settings provided.\n",
		      portm_idx);
		return -1;
	}

	/* Check if new Tx eq settings already match exiting Tx eq settings */
	for (int lane_idx = 0; lane_idx < portm->gser_numlanes; lane_idx++) {
		if ((portm->tx_main[lane_idx] == tx_main)
		    && (portm->tx_post[lane_idx] == tx_post)
		    && (portm->tx_pre1[lane_idx] == tx_pre1)
		    && (portm->tx_pre2[lane_idx] == tx_pre2))
			txeq_match = 1;
		else {
			txeq_match = 0;
			break;
		}
	}

	if (txeq_match) {
		debug_rpm_intf("%s: PORTM%d (RPM%d.LMAC%d) New Tx Equalization matches current Tx eq\n",
			       __func__, portm_idx, mac_id, lmac_id);
		return 0;
	}

	/* Update portm_cfg with new Tx eq settings */
	for (int lane_idx = 0; lane_idx < portm->gser_numlanes; lane_idx++) {
		portm->tx_main[lane_idx] = tx_main;
		portm->tx_post[lane_idx] = tx_post;
		portm->tx_pre1[lane_idx] = tx_pre1;
		portm->tx_pre2[lane_idx] = tx_pre2;
	}

	ret = ecp_send_link_req(portm_idx, mac_id, lmac_id, ECP_LINK_REQ_TXEQ_CHANGE, lmac_ctx);
	if (ret == -1) {
		/* Request not sent */
		debug_rpm_intf("%s: PORTM%d Tx Equalization Request not sent\n",
			__func__, portm_idx);
		return -1;
	}

	debug_rpm_intf("%s: PORTM%d (RPM%d.LMAC%d) Tx Equalization Request sent to ECP\n",
		__func__, portm_idx, mac_id, lmac_id);

	init_time = clock_get_count(GSER_CLOCK_TIME);
	tune_timeout = init_time + ECP_TX_EQ_CHANGE_WAIT_MS *
		clock_get_rate(GSER_CLOCK_TIME)/1000;

	while (clock_get_count(GSER_CLOCK_TIME) < tune_timeout) {
		req_in_prog = ecp_get_req_in_prog(portm_idx, lmac_id);
		if (req_in_prog == 0)
			break;

		mdelay(1);
	}

	if (req_in_prog != 0) {
		debug_rpm_intf("%s: PORTM%d Tx Equalization Request did not complete\n",
			__func__, portm_idx);
		/* Clear req_in_prog for next request */
		if (ecp_set_req_in_prog(portm_idx, lmac_id, 0))
			debug_rpm_intf("%s: PORTM%d Failed to clear req_in_prog\n",
				       __func__, portm_idx);
		return -1;
	}

	debug_rpm_intf("%s: PORTM%d Tx Equalization Request Completed\n",
		__func__, portm_idx);

	return 0;
}

static const speed_mode_map_s rpm_speed_mode_map[] = {
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

static const speed_mode_map_s cpri_speed_mode_map[] = {
	{(1ULL << ETH_MODE_CPRI_2_4G_BIT)},
	{(1ULL << ETH_MODE_CPRI_3_1G_BIT)},
	{(1ULL << ETH_MODE_CPRI_4_9G_BIT)},
	{(1ULL << ETH_MODE_CPRI_6_1G_BIT)},
	{(1ULL << ETH_MODE_CPRI_9_8G_BIT)},
};

static const speed_mode_map_s cpri_test_speed_mode_map[] = {
	{(1ULL << ETH_MODE_CPRI_2_4G_TEST_BIT)},
	{(1ULL << ETH_MODE_CPRI_3_1G_TEST_BIT)},
	{(1ULL << ETH_MODE_CPRI_4_9G_TEST_BIT)},
	{(1ULL << ETH_MODE_CPRI_6_1G_TEST_BIT)},
	{(1ULL << ETH_MODE_CPRI_9_8G_TEST_BIT)},
	{(1ULL << ETH_MODE_CPRI_12_3G_TEST_BIT)},
	{(1ULL << ETH_MODE_CPRI_19_7G_TEST_BIT)},
};

static int rpm_obtain_mode_and_group(cn10k_portm_modes_t portm_mode, int *mode, int *group)
{
	int mac_type;

	mac_type = cn10k_portm_get_mode_desc_mac_type(portm_mode);
	switch (mac_type) {
	case PORTM_ETH:
		/* USR modes added specifically for CN10KAS platform is internally
		 * same as C2C mode. Ethernet mode bitmask eth_mode_t enum is
		 * not added to these modes as mode change is supported. Hence,
		 * update USR mode as C2C mode.
		 */
		if (portm_mode == PORTM_MODE_100GBASE_USR2)
			portm_mode = PORTM_MODE_100GAUI_2_C2C;
		else if (portm_mode == PORTM_MODE_50GBASE_USR)
			portm_mode = PORTM_MODE_50GAUI_1_C2C;
		else if (portm_mode == PORTM_MODE_25GBASE_USR)
			portm_mode = PORTM_MODE_25GAUI_C2C;

		if (portm_mode >= ARRAY_SIZE(rpm_speed_mode_map)) {
			ERROR("%s Ethernet group: unsupported portm_mode %d\n",
				__func__, portm_mode);
			return -1;
		}

		*mode = __builtin_ffsl(rpm_speed_mode_map[portm_mode].mode_bitmask) - 1; /* enum starts at 0 */
		*group = MODE_GROUP_ETH;
		break;

	case PORTM_CPRI:
		switch (portm_mode) {
		case PORTM_MODE_CPRI_2_4G:
			*mode = ETH_MODE_CPRI_2_4G_BIT;
			break;
		case PORTM_MODE_CPRI_3_1G:
			*mode = ETH_MODE_CPRI_3_1G_BIT;
			break;
		case PORTM_MODE_CPRI_4_9G:
			*mode = ETH_MODE_CPRI_4_9G_BIT;
			break;
		case PORTM_MODE_CPRI_6_1G:
			*mode = ETH_MODE_CPRI_6_1G_BIT;
			break;
		case PORTM_MODE_CPRI_9_8G:
			*mode = ETH_MODE_CPRI_9_8G_BIT;
			break;
		case PORTM_MODE_CPRI_2_4G_TEST:
			*mode = ETH_MODE_CPRI_2_4G_TEST_BIT;
			break;
		case PORTM_MODE_CPRI_3_1G_TEST:
			*mode = ETH_MODE_CPRI_3_1G_TEST_BIT;
			break;
		case PORTM_MODE_CPRI_4_9G_TEST:
			*mode = ETH_MODE_CPRI_4_9G_TEST_BIT;
			break;
		case PORTM_MODE_CPRI_6_1G_TEST:
			*mode = ETH_MODE_CPRI_6_1G_TEST_BIT;
			break;
		case PORTM_MODE_CPRI_9_8G_TEST:
			*mode = ETH_MODE_CPRI_9_8G_TEST_BIT;
			break;
		case PORTM_MODE_CPRI_12_3G_TEST:
			*mode = ETH_MODE_CPRI_12_3G_TEST_BIT;
			break;
		case PORTM_MODE_CPRI_19_7G_TEST:
			*mode = ETH_MODE_CPRI_19_7G_TEST_BIT;
			break;

		default:
			ERROR("%s CPRI group: unsupported portm_mode %d\n",
				__func__, portm_mode);
			return -1;
		}

		*group = MODE_GROUP_CPRI;
		break;

	default:
		ERROR("%s unsupported mac_type %d\n",
			__func__, mac_type);
		return -1;
	}

	return 0;
}

static cn10k_portm_modes_t rpm_obtain_portm_mode(uint64_t mode_bitmask, int mode_group)
{
	const speed_mode_map_s *map = rpm_speed_mode_map;
	size_t len = ARRAY_SIZE(rpm_speed_mode_map);
	const char *group = "rpm";
	bool try_cpri_test_modes = true;
	int mode_offset = 0;

	if (mode_group == MODE_GROUP_CPRI) {
		map = cpri_speed_mode_map;
		len = ARRAY_SIZE(cpri_speed_mode_map);
		mode_offset = PORTM_MODE_CPRI_2_4G;
		group = "cpri";
	}

retry:
	for (int i = 0; i < len; i++) {
		debug_rpm_intf("%s: i %d mode_bitmask 0x%llx %s_speed_mode_map[i].mode_bitmask 0x%llx\n", __func__,
				i, mode_bitmask,
				group,
				map[i].mode_bitmask);
		if (map[i].mode_bitmask == mode_bitmask)
			return i + mode_offset;
	}

	/* If mode is from CPRI group and not found so far, try CPRI test modes */
	if (mode_group == MODE_GROUP_CPRI && try_cpri_test_modes) {
		try_cpri_test_modes = false;
		map = cpri_test_speed_mode_map;
		len = ARRAY_SIZE(cpri_test_speed_mode_map);
		mode_offset = PORTM_MODE_CPRI_2_4G_TEST;
		group = "cpri_test";
		goto retry;
	}

	return PORTM_MODE_INVALID;
}

static void rpm_set_link_mode(int rpm_id, int lmac_id, int portm_mode)
{
	union eth_scratchx0 scratchx0;
	uint64_t mode = 0, bitmask = 0;

	/* USR modes added specifically for CN10KAS platform is internally
	 * same as C2C mode. Ethernet mode bitmask eth_mode_t enum is
	 * not added to these modes as mode change is supported. Hence,
	 * update USR mode as C2C mode.
	 */
	if (portm_mode == PORTM_MODE_100GBASE_USR2)
		portm_mode = PORTM_MODE_100GAUI_2_C2C;
	else if (portm_mode == PORTM_MODE_50GBASE_USR)
		portm_mode = PORTM_MODE_50GAUI_1_C2C;
	else if (portm_mode == PORTM_MODE_25GBASE_USR)
		portm_mode = PORTM_MODE_25GAUI_C2C;

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

	/* Some CN9XX specific modes are not supported.
	 * Exclude them from supported link modes
	 */
	modes_exclude = (BIT_64(ETH_MODE_80GAUI_C2C_BIT) |
				BIT_64(ETH_MODE_25G_2_C2C_BIT) |
				BIT_64(ETH_MODE_50G_4_C2C_BIT) |
				BIT_64(ETH_MODE_40GAUI_C2C_BIT));

	/* FIXME */
	if (lmac_cfg->phy_present && lmac_cfg->phy_config)
		lmac_cfg->supported_link_modes = lmac_cfg->phy_config->supported_link_modes;
	else
		lmac_cfg->supported_link_modes = ETH_ALL_SUPPORTED_MODES;

	lmac_cfg->supported_link_modes &= ~modes_exclude;

	/* FIXME: Check whether it is SFP/QSFP slot */
	if (lmac_cfg->sfp_slot && lmac_cfg->sfp_info) {
		if (lmac_cfg->sfp_info->is_sfp) {
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
		} else if (lmac_cfg->sfp_info->is_qsfp) {
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

static int rpm_check_mode_change_allowed(rpm_lmac_config_t *lmac_cfg,
				uint64_t mode_bitmask)
{
	/* Check if mode is in the supported link modes */
	if (!(mode_bitmask & lmac_cfg->supported_link_modes)) {
		debug_rpm_intf("%s: Not supported link mode bitmask 0x%llx link_mode 0x%llx\n",
			__func__, mode_bitmask,
			lmac_cfg->supported_link_modes);
		return -1;
	}

	return 0;
}

static void rpm_update_lmac_mode_config(int rpm_id, int lmac_id)
{
	rpm_lmac_config_t *lmac;
	lmac_mode_info_t *mode_info;

	lmac = &plat_octeontx_bcfg->rpm_cfg[rpm_id].lmac_cfg[lmac_id];
	mode_info = &lmac->lmac_mode_info[lmac->mode];

	lmac->an_disable = mode_info->an_disable;

	rpm_set_supported_link_modes(rpm_id, lmac_id);
}

static int rpm_ecp_req_mode_change(int portm_idx, int rpm_id, int lmac_id,
			rpm_lmac_context_t *lmac_ctx, ecp_link_state_t *link_state)
{
	uint64_t init_time, link_timeout;
	int ret, status = 0, sig_detect = 0, sig_detect_temp = 0;
	rpm_lmac_bringup_context_t *bringup_ctx;

	bringup_ctx = &bringup_context[rpm_id][lmac_id];
	bringup_ctx->link_bringup_status = LINK_BRINGUP_INIT;
	if (!bringup_ctx->link_timeout)
		bringup_ctx->link_timeout = RPM_POLL_LINK_BRINGUP_STATUS;

	ret = ecp_send_link_req(portm_idx, rpm_id, lmac_id, ECP_LINK_REQ_MODE_CHANGE, lmac_ctx);
	if (ret == -1) {
		/* Request not sent */
		debug_rpm_intf("%s: PORTM%d (RPM%d.LMAC%d) Request not sent\n",
			__func__, portm_idx, rpm_id, lmac_id);
		return -1;
	}

	debug_rpm_intf("%s: PORTM%d (RPM%d.LMAC%d) Mode Change Request sent to ECP\n",
		__func__, portm_idx, rpm_id, lmac_id);

	init_time = clock_get_count(GSER_CLOCK_TIME);
	/* Wait for 200 ms, additional time of 100 ms for link configuration as during mode
	 * change before the new mode is brought up, current mode has to be brought down
	 */
	link_timeout = init_time + RPM_MODE_CHANGE_WAIT_STATUS *
			clock_get_rate(GSER_CLOCK_TIME)/1000000;
	/* Save the mode change time in us */
	bringup_ctx->link_bringup_init_time = (init_time * 1000000)/(clock_get_rate(GSER_CLOCK_TIME));

	while (clock_get_count(GSER_CLOCK_TIME)
		< link_timeout) {
		status = ecp_get_link_state(portm_idx, lmac_id, link_state, &sig_detect_temp);
		if ((!sig_detect) && (sig_detect_temp))
			sig_detect = 1;
		if (status == ETH_LINK_STATE_LINK_UP)
			return 0;
		else if (status == ETH_LINK_STATE_LINK_STOPPED) {
			/* FIXME : KR/CR modes state */
			return 0;
		}
		mdelay(5);
	}

	/* If the link is not UP, then update the link state as below.
	 * In case of ASIM, ignore checking for the signal detect
	 */
	if (!cavm_is_platform(PLATFORM_ASIM) && (!sig_detect)) {
		debug_rpm_intf("%s: %d:%d FAILED to detect a signal\n", __func__,
			rpm_id, lmac_id);
		bringup_ctx->link_bringup_status = LINK_BRINGUP_DONE;
	} else
		bringup_ctx->link_bringup_status = LINK_BRINGUP_IN_PROGRESS;
	bringup_ctx->link_bringup_time = RPM_MODE_CHANGE_WAIT_STATUS; /* elapsed time */
	debug_rpm_intf("%s: %d:%d bringup_ctx->link_bringup_status %d bringup_ctx->link_bringup_time %lld\n", __func__,
						rpm_id, lmac_id, bringup_ctx->link_bringup_status,
						bringup_ctx->link_bringup_time);
	return 0;
}

static int rpm_ecp_req_mode_change_to_cpri(int portm_idx, int rpm_id, int lmac_id,
			rpm_lmac_context_t *lmac_ctx, ecp_link_state_t *link_state)
{
	uint64_t init_time, link_timeout;
	int ret, status = 0, sig_detect = 0;
	int max_pll_rdy_retries = 5;

	ret = ecp_send_link_req(portm_idx, rpm_id, lmac_id, ECP_LINK_REQ_MODE_CHANGE, lmac_ctx);
	if (ret == -1) {
		/* Request not sent */
		debug_rpm_intf("%s: PORTM%d Request not sent\n",
			__func__, portm_idx);
		return -1;
	}

pll_rdy:
	init_time = clock_get_count(GSER_CLOCK_TIME);
	link_timeout = init_time + ECP_MODE_CHANGE_WAIT_STATUS *
		clock_get_rate(GSER_CLOCK_TIME)/1000000;

	while (clock_get_count(GSER_CLOCK_TIME) < link_timeout) {
		status = ecp_get_link_state(portm_idx, lmac_id, link_state, &sig_detect);
		if (status == ETH_LINK_STATE_NO_STATE)
			break;

		mdelay(5);
	}

	if (status == ETH_LINK_STATE_PLL_RDY && max_pll_rdy_retries) {
		max_pll_rdy_retries--;
		debug_rpm_intf("%s PORTM%d timed out waiting for PLL RDY, retrying...\n",
			__func__, portm_idx);
		goto pll_rdy;
	}

	if (status != ETH_LINK_STATE_NO_STATE) {
		if (!max_pll_rdy_retries)
			ERROR("%s: PORTM%d exceeded maximum PLL RDY time\n",
				__func__, portm_idx);
		else
			ERROR("%s: PORTM%d Request not sent\n",
				__func__, portm_idx);
		return -1;
	}

	debug_rpm_intf("%s: PORTM%d Mode Change Request sent to ECP\n",
		__func__, portm_idx);

	return 0;
}

static int rpm_get_validated_portm_mode(int portm_idx, uint64_t req_mode,
					int mode_group)
{
	int portm_mode;

	/* Get PORTM mode for requested mode */
	portm_mode = rpm_obtain_portm_mode(req_mode, mode_group);
	if (portm_mode == PORTM_MODE_INVALID) {
		debug_rpm_intf("%s: PORTM%d: No valid PORTM mode for requested mode : 0x%llx (mode group: %d)\n",
				__func__,
				portm_idx,
				req_mode, mode_group);
		return -1;
	}
	debug_rpm_intf("%s: req_mode 0x%llx (mode group: %d) portm_mode %d\n",
		__func__, req_mode, mode_group, portm_mode);

	/* If portm_mode is non-zero, validate if it is one of
	 * modes applicable for the PORTM
	 */
	if (cn10k_portm_mode_valid(portm_idx, portm_mode) != 1) {
		ERROR("PORTM%d: Invalid mode configuration : %d\n",
				portm_idx,
				portm_mode);
		return -1;
	}

	return portm_mode;
}

static void update_gserm_scratch_reg(int portm_idx)
{
	portm_config_t *portm;
	int gserm_idx, lane_idx, speed_mhz;
	gserm_state_lane_t gserm_state;

	portm = &plat_octeontx_bcfg->portm_cfg[portm_idx];
	gserm_idx = portm->gserm;
	lane_idx = portm->lane_map & 0xF;
	speed_mhz = cn10k_portm_get_mode_desc_speed_mhz(portm->portm_mode);

	gserm_state = gserm_build_state(portm->portm_mode, speed_mhz, 0, portm->fec);
	gserm_set_state(gserm_idx, lane_idx, gserm_state);
}

static int rpm_handle_cpri_mode_change(int portm_idx,
				struct eth_mode_change_args *args)
{
	portm_config_t *portm;
	ecp_link_state_t link_state;
	int switch_from_eth = 0;
	uint64_t req_mode = 0;
	int ret, mode_group, portm_mode;
	int rpm_id, lmac_id;

	portm = &plat_octeontx_bcfg->portm_cfg[portm_idx];

	/* Check if switching from ethernet mode */
	if (portm->mac_type == PORTM_ETH) {
		rpm_id = portm->mac_num;
		lmac_id = portm->mac_lane;
		switch_from_eth = 1;
	} else {
		rpm_id = 0;
		lmac_id = portm->mac_lane;
	}

	req_mode = args->mode;
	mode_group = args->mode_group_idx;

	/* This handler should only be called when switching to CPRI */
	if (mode_group != MODE_GROUP_CPRI)
		return -1;

	portm_mode = rpm_get_validated_portm_mode(portm_idx, req_mode, mode_group);
	if (portm_mode == -1)
		return -1;

	if (portm->portm_mode == portm_mode) {
		WARN("%s: PORTM%d Requested mode is same as current mode, Ignore request\n",
				__func__, portm_idx);
		return 0;
	}

	/* Update the PORTM config struct */
	portm->portm_mode = portm_mode;
	portm->gser_numlanes = 1;
	cn10k_fill_portm_tx_eq_info(portm_idx, portm_mode);
	cn10k_fill_portm_mac_info(portm_idx, portm_mode);
	cn10k_fill_portms_used(portm_idx, portm_mode);

	/* Send request to ECP for mode change */
	ret = rpm_ecp_req_mode_change_to_cpri(portm_idx,
		portm->mac_num, portm->mac_lane, NULL, &link_state);
	if (ret) {
		ecp_dump_state_history(portm_idx, lmac_id, "Mode change failed");
		return -1;
	}

	debug_rpm_intf("%s: PORTM%d change to mode=%d completed\n",
		__func__, portm_idx, portm_mode);

	if (switch_from_eth) {
		rpm_config_t *rpm = &plat_octeontx_bcfg->rpm_cfg[rpm_id];
		rpm_lmac_config_t *lmac = &rpm->lmac_cfg[lmac_id];

		lmac->portm_idx = 0;
		lmac->port_enable = 0;
		lmac->lmac_enable = 0;
		rpm->lmac_count--;

		/* Disable Ethernet LMAC in shared memory */
		sh_fwdata_set_lmac_type(rpm_id, lmac_id, PORTM_CPRI);
	}

	if (rpm_update_flash_mode_param_by_portm_idx(portm_idx, portm->portm_mode))
		debug_rpm_intf("%s: PORTM%d Flash update mode failed\n",
			__func__, portm_idx);

	/* Update GSERM scratchpad register with port config */
	update_gserm_scratch_reg(portm_idx);

	return 0;
}

static int rpm_handle_eth_mode_change(int portm_idx,
				struct eth_mode_change_args *args)
{
	rpm_link_state_t link;
	rpm_lmac_context_t *lmac_ctx;
	rpm_config_t *rpm;
	rpm_lmac_config_t *lmac;
	int req_speed, req_duplex;
	int invalid_req = 0, portm_mode = 0, mode_group;
	uint64_t req_mode = 0;
	int ret = 0;
	ecp_link_state_t link_state;
	int rpm_id, lmac_id;
	portm_config_t *portm;
	int numlanes;
	cn10k_portm_fec_t fec, fec_orig;
	int switch_from_cpri = 0;
	int current_lc, new_lc;
	rpm_lmac_bringup_context_t *bringup_ctx;

	portm = &plat_octeontx_bcfg->portm_cfg[portm_idx];

	if (portm->mac_type == PORTM_ETH) {
		rpm_id = portm->mac_num;
		lmac_id = portm->mac_lane;
	} else {
		switch_from_cpri = 1;
		rpm_id = cn10k_portm_get_rpm_num(portm_idx);
		lmac_id = cn10k_portm_get_rpm_lmac_num(portm_idx);
	}

	rpm = &plat_octeontx_bcfg->rpm_cfg[rpm_id];
	bringup_ctx = &bringup_context[rpm_id][lmac_id];
	lmac = &rpm->lmac_cfg[lmac_id];
	lmac_ctx = &lmac_context[rpm_id][lmac_id];
	req_speed = args->speed;
	/* mode_group_idx categorizes the mode ID range to accommodate more modes.
	 * To specify mode ID range of 0 - 41, this field will be 0.
	 * To specify mode ID range of 42 - 83, this field will be 1 and so.
	 * mode ID will be still mentioned as 1 << (0 - 41). Obtain mode accordingly
	 * using mode_group_idx
	 */
	req_mode = args->mode;
	mode_group = args->mode_group_idx;
	req_duplex = args->duplex;

	debug_rpm_intf("%s: PORTM%d speed %d req_speed %d req_duplex %d req_mode 0x%llx\n",
				__func__, portm_idx, lmac_ctx->s.speed,
					req_speed, req_duplex, req_mode);

	/* Check if arguments are valid */
	if ((!req_mode) && (req_speed == ETH_LINK_NONE)) {
		invalid_req = 1;
		/* FIXME for duplex, AN */
		if (invalid_req == 1) {
			debug_rpm_intf("%s: PORTM%d Invalid speed/AN/mode request\n",
					 __func__, portm_idx);
			rpm_set_error_type(rpm_id, lmac_id,
					ETH_ERR_SPEED_CHANGE_INVALID);
			goto mode_err;
		}
	}

	portm_mode = rpm_get_validated_portm_mode(portm_idx, req_mode, mode_group);
	if (portm_mode == -1) {
		rpm_set_error_type(rpm_id, lmac_id, ETH_ERR_SPEED_CHANGE_INVALID);
		return -1;
	}

	if (portm->portm_mode == portm_mode) {
		WARN("%s: PORTM%d Requested mode is same as current mode, Ignore request\n",
				__func__, portm_idx);
		link.s.fec = lmac_ctx->s.fec;
		link.s.link_up = lmac_ctx->s.link_up;
		link.s.full_duplex = lmac_ctx->s.full_duplex;
		link.s.speed = lmac_ctx->s.speed;
		rpm_set_link_state(rpm_id, lmac_id, &link, 0);
		return 0;
	}

	/* Validate against supported link modes */
	if (portm->mac_type == PORTM_ETH &&
		rpm_check_mode_change_allowed(lmac, req_mode)) {

		debug_rpm_intf("%s: PORTM%d Invalid speed/AN/mode request\n",
			__func__, portm_idx);
		rpm_set_error_type(rpm_id, lmac_id,
			ETH_ERR_SPEED_CHANGE_INVALID);
		goto mode_err;
	}

	/* Allow mode change if new mode's requested serdes lane is less
	 * than current mode lane num
	 */
	current_lc = cn10k_portm_get_mode_desc_serdes_num(portm->portm_mode);
	new_lc = cn10k_portm_get_mode_desc_serdes_num(portm_mode);
	if (new_lc == -1 || current_lc < new_lc) {
		ERROR("%s: PORTM%d: requested lane count (%d) higher than available (%d)\n",
			__func__, portm_idx, new_lc, current_lc);
		return -1;
	}

	debug_rpm_intf("%s: PORTM%d new_lc %d max lane count %d\n",
				__func__, portm_idx,
				new_lc, current_lc);

	/* Update the PORTM cfg struct */
	portm->portm_mode = portm_mode;

	/* Check if fec type was specified and is supported by the
	 * requested mode. If not, then set to lowest supported FEC.
	 */
	fec_orig = fec = portm->fec;
	ret = cn10k_portm_fec_valid(portm_mode, &fec);
	if (!ret)
		debug_rpm_intf("PORTM%d: FEC %s not supported by mode %s, using FEC %s\n",
			       portm_idx, cn10k_portm_fec_type_to_str(fec_orig),
			       cn10k_portm_mode_to_cfg_str(portm_mode),
			       cn10k_portm_fec_type_to_str(fec));
	/* Updates FEC if current portm->fec not supported */
	portm->fec = fec;

	/* Only support individual KR/CR modes
	 * Multiple modes only supported in EBF dts
	 */
	if (cn10k_portm_get_mode_desc_ap_sup(portm_mode)) {
		portm_ap_802_3_config_t ap_802_3_cfg = {0};
		cn10k_portm_modes_t portm_mode_temp;

		/* Alway advertise BASE-R/RS FEC ability during AN */
		ap_802_3_cfg.portm_mode[0] = portm_mode;
		ap_802_3_cfg.fec_req[0] = portm->fec;
		ap_802_3_cfg.fec_abil[0] = PORTM_FEC_ABIL_BASER_RS;

		if (!cn10k_portm_802_3ap_cfg(portm_idx, &ap_802_3_cfg,
					     &portm_mode_temp, &numlanes)) {
			debug_rpm_intf("%s: %d:%d Invalid 802.3AP mode\n",
				       __func__, rpm_id, lmac_id);
			goto mode_err;
		}
		portm->an_lt_ena = 1;
	} else {
		numlanes = cn10k_portm_get_mode_desc_serdes_num(portm_mode);
		portm->an_lt_ena = 0;
	}

	portm->gser_numlanes = numlanes;
	cn10k_fill_portm_tx_eq_info(portm_idx, portm_mode);
	cn10k_fill_portm_mac_info(portm_idx, portm_mode);
	cn10k_fill_portms_used(portm_idx, portm_mode);

	/* Update the LMAC type */
	lmac->mode = gserm_get_mode_strmap(portm_mode).mode;

	/* Clear the errors and send request to ECP for mode change */
	rpm_set_error_type(rpm_id, lmac_id, 0);

	if (switch_from_cpri) {
		lmac->fec = portm->fec;
		lmac->portm_idx = portm_idx;
		lmac->port_enable = 1;
		lmac->lmac_enable = 1;
		rpm->lmac_count++;
		rpm->enable = 1;
		rpm_init(rpm_id);
	}

	ret = rpm_ecp_req_mode_change(portm_idx, rpm_id, lmac_id,
		lmac_ctx, &link_state);
	if (ret) {
		rpm_set_error_type(rpm_id, lmac_id, ETH_ERR_ECP_LINK_REQ_FAIL);
		ecp_dump_state_history(portm_idx, lmac_id, "Mode change failed");
		goto mode_err;
	}

	if (bringup_ctx->link_bringup_status == LINK_BRINGUP_IN_PROGRESS)  {
		debug_rpm_intf("%s: PORTM%d (RPM%d.LMAC%d) change to mode=%d in progress\n",
					__func__, portm_idx, rpm_id, lmac_id, portm_mode);
		lmac_ctx->s.link_up = link.s.link_up = 0;
		lmac_ctx->s.full_duplex = link.s.full_duplex = 0;
		lmac_ctx->s.speed = link.s.speed = 0;
		lmac_ctx->s.fec = link.s.fec = 0;
	} else {
		debug_rpm_intf("%s: PORTM%d (RPM%d.LMAC%d) change to mode=%d completed\n",
			__func__, portm_idx, rpm_id, lmac_id, portm_mode);
		/* Update link status and LMAC context structure */
		lmac_ctx->s.link_up = link.s.link_up = link_state.s.link_up;
		lmac_ctx->s.full_duplex = link.s.full_duplex = link_state.s.duplex;
		lmac_ctx->s.speed = link.s.speed = link_state.s.speed;
		lmac_ctx->s.fec = link.s.fec = link_state.s.fec;
		lmac_ctx->s.link_enable = 1;

		rpm_set_link_state(rpm_id, lmac_id, &link,
				rpm_get_error_type(rpm_id, lmac_id));
	}
	rpm_update_lmac_mode_config(rpm_id, lmac_id);

	/* Update new LMAC mode to shared memory */
	sh_fwdata_set_lmac_type(rpm_id, lmac_id, PORTM_ETH);

	if (rpm_update_flash_mode_param(rpm_id, lmac_id, portm->portm_mode))
		debug_rpm_intf("%s: %d:%d Flash update mode failed\n", __func__,
			rpm_id, lmac_id);

	/* Update GSERM scratchpad register with port config */
	update_gserm_scratch_reg(portm_idx);

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

static int rpm_get_port_mode(int rpm_id, int lmac_id,
			struct eth_get_port_mode_args *args)
{
	portm_config_t *portm;
	cn10k_portm_modes_t portm_mode;
	int portm_idx, ret, mode, group;
	union eth_scratchx0 scratchx0;

	portm_idx = args->portm_idx;

	if (portm_idx < 0 || portm_idx >= MAX_PORTM) {
		ERROR("%s: '%d' is not valid PORTM index\n",
			__func__, portm_idx);
		return -1;
	}

	portm = &(plat_octeontx_bcfg->portm_cfg[portm_idx]);
	portm_mode = portm->portm_mode;

	switch (portm_mode) {
	case PORTM_MODE_DISABLED:
	case PORTM_MODE_INVALID:
	case PORTM_MODE_INACTIVE:
		ERROR("%s: PORTM%d is disabled or inactive\n",
			__func__, portm_idx);
		return -1;
	default:
		break;
	}

	ret = rpm_obtain_mode_and_group(portm_mode, &mode, &group);
	if (ret) {
		ERROR("%s: PORTM%d obtaining mode failed\n",
			__func__, portm_idx);
		return -1;
	}

	debug_rpm_intf("%s: PORTM%d mode: %d, mode_group: %d\n",
		__func__, portm_idx, mode, group);

	scratchx0.u = 0;
	scratchx0.s.port_mode.mode_group_idx = group;
	scratchx0.s.port_mode.mode = mode;
	CSR_WRITE(CAVM_RPMX_CMRX_SCRATCHX(
			rpm_id, lmac_id, 0), scratchx0.u);

	return 0;
}

static int rpm_dump_ecp_state(int rpm_id, int lmac_id,
			struct eth_ecp_dump_state_args *args)
{
	union eth_scratchx0 scratchx0;
	int mac_lane, portm_idx;
	portm_config_t *portm;

	portm_idx = args->portm_idx;

	if (portm_idx < 0 || portm_idx >= MAX_PORTM) {
		ERROR("%s: '%d' is not a valid PORTM index\n",
			__func__, portm_idx);
		return -1;
	}

	portm = &(plat_octeontx_bcfg->portm_cfg[portm_idx]);

	switch (portm->portm_mode) {
	case PORTM_MODE_DISABLED:
	case PORTM_MODE_INVALID:
	case PORTM_MODE_INACTIVE:
		ERROR("%s: PORTM%d is disabled or inactive\n",
			__func__, portm_idx);
		return -1;
	default:
		break;
	}

	if (portm->num_lmacs > 1) {
		if (args->lmac_id >= portm->num_lmacs) {
			ERROR("%s: '%d' is not a valid lmac_id\n",
				__func__, args->lmac_id);
			return -1;
		}

		mac_lane = args->lmac_id;
	} else {
		mac_lane = portm->mac_lane;
	}

	scratchx0.u = 0;
	CSR_WRITE(CAVM_RPMX_CMRX_SCRATCHX(
			rpm_id, lmac_id, 0), scratchx0.u);

	debug_rpm_intf("%s: Dumping ECP state history for PORTM%d lmac_id%d\n",
		__func__, portm_idx, mac_lane);

	return ecp_dump_state_history(portm_idx, mac_lane, "On demand");
}

static int rpm_handle_mode_change(int rpm_id, int lmac_id,
				struct eth_mode_change_args *args,
				rpm_lmac_bringup_context_t **bringup_ctx)
{
	portm_config_t *portm;
	int ret = -1, portm_idx;
	int use_portm_idx = args->use_portm_idx;
	int dest_mode_grp = args->mode_group_idx;
	rpm_lmac_config_t *lmac =
		&plat_octeontx_bcfg->rpm_cfg[rpm_id].lmac_cfg[lmac_id];

	if (!lmac->lmac_enable && !use_portm_idx) {
		ERROR("%s: Missing PORTM index required for non-ethernet mode\n",
			__func__);
		return -1;
	}

	portm_idx = use_portm_idx ? args->portm_idx : lmac->portm_idx;

	if (portm_idx < 0 || portm_idx >= MAX_PORTM) {
		ERROR("%s: '%d' is not valid PORTM index\n",
			__func__, portm_idx);
		return -1;
	}

	portm = &(plat_octeontx_bcfg->portm_cfg[portm_idx]);

	if (portm->portm_mode == PORTM_MODE_INACTIVE) {
		debug_rpm_intf("%s: PORTM%d used by another mode\n",
			__func__, portm_idx);

		return -1;
	}

	if (portm->mac_type == PORTM_CPRI && !use_portm_idx) {
		ERROR("%s: Use PORTM index when switching from CPRI\n",
			__func__);
		return -1;
	}

	switch (dest_mode_grp) {
	case MODE_GROUP_CPRI:
		ret = rpm_handle_cpri_mode_change(portm_idx, args);
		break;

	case MODE_GROUP_ETH:
		if (portm->mac_type == PORTM_ETH) {
			rpm_id = portm->mac_num;
			lmac_id = portm->mac_lane;
		} else {
			rpm_id = cn10k_portm_get_rpm_num(portm_idx);
			lmac_id = cn10k_portm_get_rpm_lmac_num(portm_idx);
		}
		*bringup_ctx = &bringup_context[rpm_id][lmac_id];

		if ((*bringup_ctx)->link_bringup_status == LINK_BRINGUP_IN_PROGRESS)
			ret = rpm_handle_link_in_progress(rpm_id, lmac_id);
		else
			ret = rpm_handle_eth_mode_change(portm_idx, args);
		break;

	default:
		break;
	}

	return ret;
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
	uint64_t lmac_timeout = 0, lmac_lnk_timeout = 0;
	rpm_lmac_bringup_context_t *bringup_ctx;

	lmac = &plat_octeontx_bcfg->rpm_cfg[rpm_id].lmac_cfg[lmac_id];
	portm = &(plat_octeontx_bcfg->portm_cfg[lmac->portm_idx]);
	lmac_ctx = &lmac_context[rpm_id][lmac_id];
	bringup_ctx = &bringup_context[rpm_id][lmac_id];

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
		(request_id == ETH_CMD_TUNE_SERDES) ||
		(request_id == ETH_CMD_GET_FWD_BASE) ||
		(request_id == ETH_CMD_GET_FW_VER) ||
		(request_id == ETH_CMD_MODE_CHANGE) ||
		(request_id == ETH_CMD_GET_PORT_MODE) ||
		(request_id == ETH_CMD_ECP_DUMP_STATE)) {
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

		case ETH_CMD_TUNE_SERDES:
			/* Read the command arguments from SCRATCH(1) */
			scratchx1.u = CSR_READ(CAVM_RPMX_CMRX_SCRATCHX(
						rpm_id, lmac_id, 1));
			ret = rpm_set_serdes_tx_tune(
				 scratchx1.s.gser_tune.portm_idx,
				 scratchx1.s.gser_tune.tx_main,
				 (int8_t)scratchx1.s.gser_tune.tx_pre,
				 (int8_t)scratchx1.s.gser_tune.tx_pre2,
				 (int8_t)scratchx1.s.gser_tune.tx_post,
						     lmac_ctx);
			break;

		case ETH_CMD_MODE_CHANGE:
			/* Read the command arguments from SCRATCH(1) */
			scratchx1.u = CSR_READ(CAVM_RPMX_CMRX_SCRATCHX(
						rpm_id, lmac_id, 1));
			ret = rpm_handle_mode_change(rpm_id, lmac_id,
					&scratchx1.s.mode_change_args,
					&bringup_ctx);
			break;
		case ETH_CMD_GET_PORT_MODE:
			/* Read the command arguments from SCRATCH(1) */
			scratchx1.u = CSR_READ(CAVM_RPMX_CMRX_SCRATCHX(
						rpm_id, lmac_id, 1));
			ret = rpm_get_port_mode(rpm_id, lmac_id,
					&scratchx1.s.port_mode_args);
			break;
		case ETH_CMD_ECP_DUMP_STATE:
			/* Read the command arguments from SCRATCH(1) */
			scratchx1.u = CSR_READ(CAVM_RPMX_CMRX_SCRATCHX(
						rpm_id, lmac_id, 1));
			ret = rpm_dump_ecp_state(rpm_id, lmac_id,
					&scratchx1.s.ecp_dump_state_args);
			break;
		}
	} else {
		/* all the below commands should be processed only
		 * when LMAC is enabled
		 */
		if (lmac->lmac_enable) {
			switch (request_id) {
			case ETH_CMD_LINK_BRING_UP:
				if ((scratchx1.s.lnk_bringup.timeout <= 0) || (scratchx1.s.lnk_bringup.timeout > RPM_POLL_LINK_BRINGUP_STATUS/1000))
					lmac_timeout = RPM_POLL_LINK_BRINGUP_STATUS; /* Save in us */
				else
					lmac_timeout = scratchx1.s.lnk_bringup.timeout * 1000; /* Save in us */
				debug_rpm_intf("%s: %d:%d: lmac_timeout = %lld\n", __func__, rpm_id, lmac_id, lmac_timeout);
				ret = rpm_link_bringup(rpm_id, lmac_id, lmac_timeout);
				break;
			case ETH_CMD_LINK_BRING_DOWN:
				ret = rpm_link_bringdown(rpm_id, lmac_id);
				break;
			case ETH_CMD_LINK_TIMEOUT:
				lmac_lnk_timeout = scratchx1.s.lnk_bringup.timeout; /* Updated in ms */
				if ((lmac_lnk_timeout == 0) ||
				    (lmac_lnk_timeout == -1))
					lmac_lnk_timeout = 0;
				else if (lmac_lnk_timeout > RPM_POLL_LINK_BRINGUP_STATUS/1000)
					lmac_lnk_timeout = RPM_POLL_LINK_BRINGUP_STATUS/1000;
				bringup_ctx->link_timeout = lmac_lnk_timeout * 1000; /* Save in us */
				debug_rpm_intf("%d:%d: link_timeout = %lld\n", rpm_id, lmac_id, lmac_lnk_timeout);
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
				/* SFP EEPROM info will be available only when
				 * link is brought UP. If the link_enable is set
				 * in case of SFP slot, supported FEC should
				 * be returned based on transceiver capabilities
				 * If not, return PCS supported FEC types
				 */
				if ((lmac_ctx->s.link_enable) &&
						(lmac->sfp_slot))
					val = sfp_get_fec_capability(lmac->portm_idx);
				else {
					val = cn10k_portm_get_mode_desc_fec(portm->portm_mode);
					if ((val == PORTM_FEC_RS_528_ONLY) || (val == PORTM_FEC_RS_544_ONLY))
						val = PORTM_FEC_RS;
				}
				scratchx0.s.supported_fec.fec = val;
				debug_rpm_intf("%s: %d:%d supported FEC %d\n",
					__func__, rpm_id, lmac_id,
					scratchx0.s.supported_fec.fec);
				CSR_WRITE(CAVM_RPMX_CMRX_SCRATCHX(
						rpm_id, lmac_id, 0),
						scratchx0.u);
				break;
			case ETH_CMD_INTERNAL_LBK:
				ret = rpm_set_internal_loopback(rpm_id, lmac_id, enable);
				if (!ret)
					lmac_ctx->s.lbk1_enable = enable;
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
			case ETH_CMD_SET_PTP_MODE:
				ret = rpm_set_ptp_mode(rpm_id, lmac_id, enable);
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

	if (((request_id == ETH_CMD_LINK_BRING_UP) || (request_id == ETH_CMD_SET_FEC) ||
			(request_id == ETH_CMD_MODE_CHANGE)) &&
			(bringup_ctx->link_bringup_status == LINK_BRINGUP_IN_PROGRESS)) {
		/* Don't update the response status */
		debug_rpm_intf("%s: RPM%d LMAC%d link is not yet up\n", __func__, rpm_id, lmac_id);
		return 1;
	}

	/* Update the event status either async or resp
	 * to command by writing to evt_sts struct
	 */
	scratchx0.u = CSR_READ(CAVM_RPMX_CMRX_SCRATCHX(rpm_id, lmac_id, 0));
	err_type = rpm_get_error_type(rpm_id, lmac_id);

	if (request_id == ETH_CMD_GET_PORT_MODE ||
		request_id == ETH_CMD_MODE_CHANGE ||
		request_id == ETH_CMD_ECP_DUMP_STATE)
		scratchx0.s.evt_sts.stat = ret;
	else if ((err_type & RPM_ERR_MASK) && (request_id != ETH_CMD_GET_LINK_STS))
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
	int ret = 0;

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

				ret = rpm_process_requests(rpm, lmac);

				/* trigger an interrupt before ret */
				if (ret != 1) {
					rpm_release_own_status(rpm, lmac);
					rpm_trigger_interrupt(rpm, lmac);
				}
			}

			/* release firmware internal lock */
			rpm_release_csr_lock(rpm, lmac);
		}
	}
	return 0;
}



/* Timer callback to periodically poll for link */
static int rpm_poll_for_link_cb(int timer)
{
	int err_type = 0;
	rpm_lmac_context_t *lmac_ctx;
	rpm_lmac_config_t *lmac_cfg;
	rpm_link_state_t link;
	union eth_scratchx0 scratchx0;

	for (int rpm_id = 0; rpm_id < plat_octeontx_scfg->rpm_count; rpm_id++) {
		for (int lmac_id = 0; lmac_id < MAX_LMAC_PER_RPM; lmac_id++) {
			lmac_cfg = &plat_octeontx_bcfg->rpm_cfg[rpm_id].lmac_cfg[lmac_id];
			lmac_ctx = &lmac_context[rpm_id][lmac_id];

			link.u64 = 0;

			if (lmac_ctx->s.link_enable) {
				/* For RPM internal loopback, skip checking the SFP module status */
				if ((lmac_cfg->sfp_slot) && (!lmac_ctx->s.lbk1_enable)) {
					rpm_check_sfp_mod_stat(rpm_id, lmac_id);
					/* Update SFP mod status in ECP SM */
					ecp_update_sfp_mod_state(lmac_cfg->portm_idx, lmac_ctx->s.mod_stats);
				}

				/* Get the link status */
				rpm_get_link_status(rpm_id, lmac_id, &link);

				if ((lmac_ctx->s.link_up !=
					link.s.link_up) ||
					(lmac_ctx->s.full_duplex !=
					link.s.full_duplex) ||
					(lmac_ctx->s.speed !=
					link.s.speed)) {
					debug_rpm_intf("%d:%d Link changed %d\n",
							rpm_id, lmac_id,
							link.s.link_up);
					/* Acquire firmware internal lock */
					if (rpm_acquire_csr_lock(rpm_id, lmac_id) == -1) {
						debug_rpm_intf("%s %d:%d Lock not"
								" obtained to process command\n",
								__func__, rpm_id, lmac_id);
						/* Skip to next LMAC */
						continue;
					}

					/* Update the current link status along with any error type set */
					rpm_set_link_state(rpm_id, lmac_id, &link, err_type);

					lmac_ctx->s.link_up = link.s.link_up;
					lmac_ctx->s.full_duplex = link.s.full_duplex;
					lmac_ctx->s.speed = link.s.speed;
					lmac_ctx->s.fec = link.s.fec;

					/* Update the event status to evt_sts struct to notify kernel */
					scratchx0.u = CSR_READ(CAVM_RPMX_CMRX_SCRATCHX(rpm_id, lmac_id, 0));
					err_type = rpm_get_error_type(rpm_id, lmac_id);
					if (err_type & RPM_ERR_MASK)
						scratchx0.s.evt_sts.stat = ETH_STAT_FAIL;
					else
						scratchx0.s.evt_sts.stat = ETH_STAT_SUCCESS;

					scratchx0.s.evt_sts.id = ETH_EVT_LINK_CHANGE;
					scratchx0.s.evt_sts.evt_type = ETH_EVT_ASYNC;
					scratchx0.s.evt_sts.ack = 1; /* set ack */
					CSR_WRITE(CAVM_RPMX_CMRX_SCRATCHX(rpm_id, lmac_id, 0),
										scratchx0.u);
					/* Trigger an interrupt to notify the event */
					rpm_trigger_interrupt(rpm_id, lmac_id);

					/* Release firmware internal lock */
					rpm_release_csr_lock(rpm_id, lmac_id);
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

					if (lmac_cfg->phy_present && lmac_cfg->phy_config) {
						/* If PHY is present, look up for PHY
						 * driver and init
						 */
						phy_lookup(rpm, lmac, lmac_cfg->phy_config->type);
						if ((lmac_cfg->phy_config->valid) &&
							(!lmac_cfg->phy_config->init)) {
							debug_rpm_intf("%s: Init PHY\n", __func__);
							phy_probe(rpm, lmac);
							lmac_cfg->phy_config->init = 1;
						}
					}
					lmac_ctx->s.init_link = 1;
					/* If PHY is initialized, configure
					 * the PHY. For ex: to set in
					 * particular mode
					 */
					if (lmac_cfg->phy_config &&
						lmac_cfg->phy_config->init) {

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
			(lmac_cfg->mode == CAVM_RPM_LMAC_TYPES_E_USGMII) ||
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
