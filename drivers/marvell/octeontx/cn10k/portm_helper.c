/*
 * Copyright (c) 2021 Marvell.
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

#include <platform_def.h> /* Needed */
#include <platform_setup.h> /* Not sure */
#include <debug.h> /* Needed */
#include <libfdt.h>
#include <stdlib.h>
#include <assert.h>
#include <plat_board_cfg.h> /* Needed */
#include <octeontx_common.h>
//#include <octeontx_board_cfg_setup.h>
#include <plat_scfg.h>
//#include <plat_cn10k_configuration.h>
//#include <octeontx_utils.h> /* Don't think we need */
//#include <qlm_cn10k.h>
#include <fdtebf_helper.h>
#include <strtol.h>

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


/**
 * Updates Portm struct Tx Eq settings based on dts or default settings
 *
 * @param portm_idx   PORTM
 * @param portm_mode PORTM mode
 *
 */
void cn10k_fill_portm_tx_eq_info(int portm_idx, cn10k_portm_modes_t portm_mode)
{
	void *fdt = fdt_ptr;
	int offset, rc;
	char prop[64];
	portm_config_t *portm;
	portm_tx_tuning_t tx_tuning = {0};
	portm_tx_tuning_t default_tx_tuning = {0};
	const char *portm_mode_str = cn10k_portm_mode_to_cfg_str(portm_mode);

	rc = fdt_check_header(fdt);
	if (rc) {
		WARN("Invalid device tree\n");
		return;
	}

	offset = fdt_path_offset(fdt, "/cavium,bdk");
	if (offset < 0) {
		WARN("FDT node not found\n");
		return;
	}

	portm = &(plat_octeontx_bcfg->portm_cfg[portm_idx]);

	default_tx_tuning.portm_mode = portm_mode;
	if (cn10k_portm_get_default_tx_eq(&default_tx_tuning)) {
		ERROR("PORTM%d: Need to add %s to portm_default_tuning_list\n",
		      portm_idx, portm_mode_str);
		return;
	}

	for (int lane = 0; lane < portm->gser_numlanes; lane++) {
		/* Get Tx Main */
		snprintf(prop, sizeof(prop), "PORTM-LANE-TX-MAIN.%s.P%d.LANE%d", portm_mode_str, portm_idx, lane);
		tx_tuning.tx_main = cn10k_fdtebf_get_num(fdt, prop, 10);
		if (tx_tuning.tx_main == -1) {
			debug_dts("%s: PORTM%d.L%d: PORTM-LANE-TX-MAIN not defined. Using default setting\n", __func__, portm_idx, lane);
			tx_tuning.tx_main = default_tx_tuning.tx_main;
		}
		/* Get Tx Post */
		snprintf(prop, sizeof(prop), "PORTM-LANE-TX-POST.%s.P%d.LANE%d", portm_mode_str, portm_idx, lane);
		tx_tuning.tx_post = cn10k_fdtebf_get_num(fdt, prop, 10);
		if (tx_tuning.tx_post == -1) {
			debug_dts("%s: PORTM%d.L%d: PORTM-LANE-TX-POST not defined. Using default setting\n", __func__, portm_idx, lane);
			tx_tuning.tx_post = default_tx_tuning.tx_post;
		} else {
			tx_tuning.tx_post = -tx_tuning.tx_post;
		}
		/* Get Tx Pre1 */
		snprintf(prop, sizeof(prop), "PORTM-LANE-TX-PRE1.%s.P%d.LANE%d", portm_mode_str, portm_idx, lane);
		tx_tuning.tx_pre1 = cn10k_fdtebf_get_num(fdt, prop, 10);
		if (tx_tuning.tx_pre1 == -1) {
			debug_dts("%s: PORTM%d.L%d: PORTM-LANE-TX-PRE1 not defined. Using default setting\n", __func__, portm_idx, lane);
			tx_tuning.tx_pre1 = default_tx_tuning.tx_pre1;
		} else {
			tx_tuning.tx_pre1 = -tx_tuning.tx_pre1;
		}
		/* Get Tx Pre2 */
		snprintf(prop, sizeof(prop), "PORTM-LANE-TX-PRE2.%s.P%d.LANE%d", portm_mode_str, portm_idx, lane);
		tx_tuning.tx_pre2 = cn10k_fdtebf_get_num(fdt, prop, 10);
		if (tx_tuning.tx_pre2 == -1) {
			debug_dts("%s: PORTM%d.L%d: PORTM-LANE-TX-PRE2 not defined. Using default setting\n", __func__, portm_idx, lane);
			tx_tuning.tx_pre2 = default_tx_tuning.tx_pre2;
		} else {
			tx_tuning.tx_pre2 = -tx_tuning.tx_pre2;
		}
		/* Check that the Tx eq settings are valid */
		tx_tuning.portm_mode = portm_mode;
		if (!cn10k_portm_tx_tuning_valid(portm_idx, lane, &tx_tuning)) {
			ERROR("PORTM%d.%d: Invalid Tx equalization settings provided. Using defaults\n",
			      portm_idx, lane);
			portm->tx_main[lane] = default_tx_tuning.tx_main;
			portm->tx_post[lane] = default_tx_tuning.tx_post;
			portm->tx_pre1[lane] = default_tx_tuning.tx_pre1;
			portm->tx_pre2[lane] = default_tx_tuning.tx_pre2;
		} else {
			portm->tx_main[lane] = tx_tuning.tx_main;
			portm->tx_post[lane] = tx_tuning.tx_post;
			portm->tx_pre1[lane] = tx_tuning.tx_pre1;
			portm->tx_pre2[lane] = tx_tuning.tx_pre2;
		}
		debug_dts("PORTM%d.L%d: tx_main:%d, tx_post:%d, tx_pre1:%d, tx_pre2:%d\n", portm_idx, lane, portm->tx_main[lane],
			  portm->tx_post[lane], portm->tx_pre1[lane], portm->tx_pre2[lane]);
	}
}

/**
 * Updates Portm struct lane_map based on portm_mode
 *
 * @param portm_idx  PORTM
 *
 */
void cn10k_fill_portm_lane_map(int portm_idx)
{
	portm_config_t *portm;
	gserm_plat_config_t *gserm;
	int mac_lane, portm_first, gser_lane;

	portm = &(plat_octeontx_bcfg->portm_cfg[portm_idx]);
	gserm = &(plat_octeontx_bcfg->gserm_plat_cfg[portm->gserm]);
	/* Determine which MAC lane the portm connects to */
	portm_first = cn10k_portm_gserm_get_first_portm_num(portm->gserm);
	mac_lane = portm_idx - portm_first;

	/* Create portm lane_map with MAX lanes used by PORTM
	 * Should only need to create this lane_map once
	 */
	for (int i = 0; i < plat_octeontx_scfg->portm_max_lane_cnt[portm_idx]; i++) {
		gser_lane = (gserm->lane_map >> ((i + mac_lane) * 4)) & 0xf;
		portm->lane_map |= gser_lane << (i * 4);
	}
}

/**
 * Updates Portm struct mac info based on portm_mode
 *
 * @param portm_idx   PORTM
 * @param portm_mode  PORTM mode
 *
 */
void cn10k_fill_portm_mac_info(int portm_idx, cn10k_portm_modes_t portm_mode)
{
	cn10k_portm_mac_type_t mac_type;
	portm_config_t *portm;

	portm = &(plat_octeontx_bcfg->portm_cfg[portm_idx]);
	mac_type = cn10k_portm_get_mode_desc_mac_type(portm_mode);
	portm->mac_type = mac_type;
	portm->num_lmacs = cn10k_portm_get_mode_desc_mac_num(portm_mode);

	if (mac_type == PORTM_ETH) {
		portm->mac_num = cn10k_portm_get_rpm_num(portm_idx);
		portm->mac_lane = cn10k_portm_get_rpm_lmac_num(portm_idx);
		portm->pcs_type = cn10k_portm_get_pcs_type(portm_mode);
	} else {
		portm->mac_num = cn10k_portm_get_other_mac_num(portm_idx);
		portm->mac_lane = cn10k_portm_get_other_mac_lane_num(portm_idx);
	}
	debug_dts("PORTM%d: MAC_TYPE:%d, MAC_NUM:%d, Lowest MAC_LANE:%d\n", portm_idx,
		  portm->mac_type, portm->mac_num, portm->mac_lane);
}

/**
 * Updates Portm struct portms used based on portm_mode
 *
 * @param portm_idx   PORTM
 * @param portm_mode  PORTM mode
 *
 */
void cn10k_fill_portms_used(int portm_idx, cn10k_portm_modes_t portm_mode)
{
	portm_config_t *portm;
	int num_macs = cn10k_portm_get_mode_desc_mac_num(portm_mode);
	int max_gser_lanes;

	portm = &(plat_octeontx_bcfg->portm_cfg[portm_idx]);

	max_gser_lanes = plat_octeontx_scfg->qlm_max_lane_num[portm->gserm];
	/* Figure out how many portms are used by this port */
	/* Note: CN10k does not support connecting 2 GSERM's to 1 RPM */

	if (num_macs <= portm->gser_numlanes) /* Normal case */
		portm->portms_used = portm->gser_numlanes;
	else if (max_gser_lanes <= num_macs) /* Assumes RPM's can only associate with 1 GSERM */
		portm->portms_used = max_gser_lanes;
	else /* This case is not currently supported in CN10k */
		portm->portms_used = num_macs;
}

/**
 * Programs 802.3AP advertisement structure
 * Update the portm_mode to 802_3ap portm mode
 * with highest lane count and then the
 * highest datarate.
 *
 * @param portm_idx     PORTM
 * @param ap_802_3_cfg  Set of 802.3ap configs
 * @param *portm_mode PORTM mode
 * @param *numlanes   Max number of lanes by 802.3AP modes
 *
 * @return 1 valid 802_3AP mode specified, 0 invalid
 */
int cn10k_portm_802_3ap_cfg(int portm_idx, portm_ap_802_3_config_t *ap_802_3_cfg,
			    cn10k_portm_modes_t *portm_mode, int *numlanes)
{
	cn10k_portm_modes_t ap_mode, ap_mode_prog = 0;
	cn10k_portm_fec_t fec_req, fec_orig;
	cn10k_portm_fec_abil_t fec_abil;
	int numlanes_max = 0;
	int speed, speed_max = 0;
	int ret;
	bool valid = 0;
	portm_config_t *portm;
	portm_ap_802_3_adv_t ap_adv_temp = {0};
	portm_ap_802_3_adv_t *ap_adv;

	portm = &(plat_octeontx_bcfg->portm_cfg[portm_idx]);
	ap_adv = &portm->ap_802_3_adv;

	for (int cfg = 0; cfg < PORTM_MAX_AN_CFGS; cfg++) {
		ap_mode = ap_802_3_cfg->portm_mode[cfg];
		if (ap_mode == PORTM_MODE_DISABLED)
			continue;

		/* Check if the port mode is valid. If not, set to disabled */
		if (!cn10k_portm_mode_valid(portm_idx, ap_mode) &&
		    !cn10k_portm_get_mode_desc_ap_sup(ap_mode)) {
			debug_dts("PORTM%d: Invalid 802_3AP mode configuration : %s\n",
				  portm_idx,
				  cn10k_portm_mode_to_cfg_str(ap_mode));
			continue;
		}

		/* If at least 1 valid 802_3AP mode specified, set valid to 1 */
		valid = 1;

		*numlanes = cn10k_portm_get_mode_desc_serdes_num(ap_mode);
		if (*numlanes >= numlanes_max) {
			numlanes_max = *numlanes;
			speed = cn10k_portm_get_mode_desc_speed_mhz(ap_mode);
			if (speed > speed_max) {
				speed_max = speed;
				ap_mode_prog = ap_mode;
			}
		}

		fec_req = ap_802_3_cfg->fec_req[cfg];
		if (fec_req == -1)
			fec_req = cn10k_portm_get_mode_desc_fec_low(ap_mode);

		/* Check if fec_req type was specified and is supported by the
		 * requested mode. If not, then disable it.
		 */
		fec_orig = fec_req;
		ret = cn10k_portm_fec_valid(ap_mode, &fec_req);
		if (!ret)
			debug_dts("PORTM%d: FEC %s not supported by mode %s, using FEC %s\n",
				  portm_idx, cn10k_portm_fec_type_to_str(fec_orig),
				  cn10k_portm_mode_to_cfg_str(ap_mode),
				  cn10k_portm_fec_type_to_str(fec_req));

		if (fec_req && ((fec_req & cn10k_portm_get_mode_desc_fec(ap_mode)) != fec_req)) {
			debug_dts("PORTM%d FEC type %d not supported by mode %d\n",
				  portm_idx, fec_req, ap_mode);
			fec_req = PORTM_FEC_DISABLED;
		}

		fec_abil = ap_802_3_cfg->fec_abil[cfg];
		cn10k_portm_update_802_3ap_adv(ap_mode, fec_req, fec_abil, &ap_adv_temp);

		/* Set PORTM mode to the advertised PORTM mode with
		 * with the highest lane count and then the highest datarate.
		 */
		*portm_mode = ap_mode_prog;
	}

	if (valid)
		*ap_adv = ap_adv_temp;

	return valid;
}
