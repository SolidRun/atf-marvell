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
#include <stdio.h>
#include <string.h>
#include <debug.h>
#include <drivers/delay_timer.h>
#include <platform_def.h>
#include <platform_dt.h>
#include <octeontx_common.h>
#include <plat_board_cfg.h>
#include <plat_portm_cfg.h>
#include <rpm.h>
#include <eth_intf.h>
#include <plat_portm_cfg.h>
#include <eth_link_mgmt_intf.h>
#include <qlm_cn10k.h>
#include <octeontx_utils.h>

#include "cavm-csrs-rpm.h"

/* define DEBUG_ATF_RPM to enable debug logs */
#undef DEBUG_ATF_RPM
#if defined(MRVL_TF_LOG_MODULE)
#  undef MRVL_TF_LOG_MODULE
#  define MRVL_TF_LOG_MODULE  MRVL_TF_LOG_MODULE_ETH_LINK
#  define debug_rpm(...) (mrvl_tf_log_modules & MRVL_TF_LOG_MODULE) ? \
			  tf_log(LOG_MARKER_NOTICE __VA_ARGS__) : (void)0
#elif DEBUG_ATF_RPM
#define debug_rpm printf
#else
#define debug_rpm(...) ((void) (0))
#endif

/* Time stamp unit configuration per modes
 * Ref: Table 37-37 Configuration settings from HRM(CN106XXS-0.92EN version)
 */
static rpm_tsu_config_t tsu_config_per_mode_1g = {
	0, /* tsu_rx_mode */
	6, /* tsu_tx_mode */
	1, /* tsu_modulo_tx */
	1, /* tsu_module_rx */
	32, /* tsu_blocktime */
	0/*998*/, /* tsu_blocktime_dec */
	0, /* tsu_markertime */
	0, /* tsu_markertime_dec */
	2, /* tsu_blks_per_clk */
	0, /* tsu_mii_mk_dly */
	0, /* tsu_mii_cw_dly */
	0, /* tsu_mii_tx_mk_cyc_dly */
	0, /* tsu_mii_tx_cw_cyc_dly */
	160 /* tsu_tx_sd_period */
};

static rpm_tsu_config_t tsu_config_per_mode_10g = {
	1, /* tsu_rx_mode */
	1, /* tsu_tx_mode */
	1, /* tsu_modulo_tx */
	1, /* tsu_module_rx */
	3, /* tsu_blocktime */
	2, /* tsu_blocktime_dec */
	0, /* tsu_markertime */
	0, /* tsu_markertime_dec */
	2, /* tsu_blks_per_clk */
	1, /* tsu_mii_mk_dly */
	0, /* tsu_mii_cw_dly */
	0, /* tsu_mii_tx_mk_cyc_dly */
	0, /* tsu_mii_tx_cw_cyc_dly */
	132 /* tsu_tx_sd_period */
};
/* No FEC */
static rpm_tsu_config_t tsu_config_per_mode_25g = {
	1, /* tsu_rx_mode */
	1, /* tsu_tx_mode */
	1, /* tsu_modulo_tx */
	1, /* tsu_module_rx */
	1, /* tsu_blocktime */
	28, /* tsu_blocktime_dec */
	0, /* tsu_markertime */
	0, /* tsu_markertime_dec */
	2, /* tsu_blks_per_clk */
	1, /* tsu_mii_mk_dly */
	1, /* tsu_mii_cw_dly */
	1, /* tsu_mii_tx_mk_cyc_dly */
	4, /* tsu_mii_tx_cw_cyc_dly */
	132 /* tsu_tx_sd_period */
};

/* With BASE-R FEC */
static rpm_tsu_config_t tsu_config_per_mode_25g_fec = {
	5, /* tsu_rx_mode */
	5, /* tsu_tx_mode */
	1, /* tsu_modulo_tx */
	1, /* tsu_module_rx */
	1, /* tsu_blocktime */
	28, /* tsu_blocktime_dec */
	0, /* tsu_markertime */
	0, /* tsu_markertime_dec */
	2, /* tsu_blks_per_clk */
	1, /* tsu_mii_mk_dly */
	1, /* tsu_mii_cw_dly */
	4, /* tsu_mii_tx_mk_cyc_dly */
	5, /* tsu_mii_tx_cw_cyc_dly */
	132 /* tsu_tx_sd_period */
};

/* With RS-FEC */
static rpm_tsu_config_t tsu_config_per_mode_25g_rsfec = {
	5, /* tsu_rx_mode */
	5, /* tsu_tx_mode */
	1, /* tsu_modulo_tx */
	1, /* tsu_module_rx */
	1, /* tsu_blocktime */
	28, /* tsu_blocktime_dec */
	10, /* tsu_markertime */
	24, /* tsu_markertime_dec */
	2, /* tsu_blks_per_clk */
	2, /* tsu_mii_mk_dly */
	2, /* tsu_mii_cw_dly */
	4, /* tsu_mii_tx_mk_cyc_dly */
	5, /* tsu_mii_tx_cw_cyc_dly */
	132 /* tsu_tx_sd_period FIXME: 132 for KR and 136 for KP */
};

/*  No FEC */
static rpm_tsu_config_t tsu_config_per_mode_50g = {
	4, /* tsu_rx_mode */
	4, /* tsu_tx_mode */
	1, /* tsu_modulo_tx */
	1, /* tsu_module_rx */
	1, /* tsu_blocktime */
	28, /* tsu_blocktime_dec */
	5, /* tsu_markertime */
	12, /* tsu_markertime_dec */
	1, /* tsu_blks_per_clk */
	1, /* tsu_mii_mk_dly */
	1, /* tsu_mii_cw_dly */
	4, /* tsu_mii_tx_mk_cyc_dly */
	5, /* tsu_mii_tx_cw_cyc_dly */
	66 /* tsu_tx_sd_period */
};

/*  With FEC no KP */
static rpm_tsu_config_t tsu_config_per_mode_50g_fec = {
	5, /* tsu_rx_mode */
	5, /* tsu_tx_mode */
	1, /* tsu_modulo_tx */
	1, /* tsu_module_rx */
	1, /* tsu_blocktime */
	28, /* tsu_blocktime_dec */
	5, /* tsu_markertime */
	12, /* tsu_markertime_dec */
	1, /* tsu_blks_per_clk */
	1, /* tsu_mii_mk_dly */
	1, /* tsu_mii_cw_dly */
	4, /* tsu_mii_tx_mk_cyc_dly */
	5, /* tsu_mii_tx_cw_cyc_dly */
	66 /* tsu_tx_sd_period - KR */
};

/*  With FEC - PORTM_FEC_RS_544_ONLY */
static rpm_tsu_config_t tsu_config_per_mode_50g_fec_kp = {
	5, /* tsu_rx_mode */
	5, /* tsu_tx_mode */
	1, /* tsu_modulo_tx */
	1, /* tsu_module_rx */
	1, /* tsu_blocktime */
	28, /* tsu_blocktime_dec */
	5, /* tsu_markertime */
	12, /* tsu_markertime_dec */
	1, /* tsu_blks_per_clk */
	1, /* tsu_mii_mk_dly */
	1, /* tsu_mii_cw_dly */
	4, /* tsu_mii_tx_mk_cyc_dly */
	5, /* tsu_mii_tx_cw_cyc_dly */
	68 /* tsu_tx_sd_period - KP */
};

/* No FEC */
static rpm_tsu_config_t tsu_config_per_mode_100g = {
	4, /* tsu_rx_mode */
	4, /* tsu_tx_mode */
	1, /* tsu_modulo_tx */
	1, /* tsu_module_rx */
	0, /* tsu_blocktime */
	64, /* tsu_blocktime_dec */
	12, /* tsu_markertime */
	8, /* tsu_markertime_dec */
	2, /* tsu_blks_per_clk */
	5, /* tsu_mii_mk_dly */
	5, /* tsu_mii_cw_dly */
	10, /* tsu_mii_tx_mk_cyc_dly */
	3, /* tsu_mii_tx_cw_cyc_dly */
	66 /* tsu_tx_sd_period */
};

/* With FEC */
static rpm_tsu_config_t tsu_config_per_mode_100g_fec = {
	4, /* tsu_rx_mode */
	4, /* tsu_tx_mode */
	1, /* tsu_modulo_tx */
	1, /* tsu_module_rx */
	0, /* tsu_blocktime */
	64, /* tsu_blocktime_dec */
	12, /* tsu_markertime */
	8, /* tsu_markertime_dec */
	2, /* tsu_blks_per_clk */
	5, /* tsu_mii_mk_dly */
	5, /* tsu_mii_cw_dly */
	10, /* tsu_mii_tx_mk_cyc_dly */
	3, /* tsu_mii_tx_cw_cyc_dly */
	66 /* tsu_tx_sd_period - KR */
};

/* With FEC - PORTM_FEC_RS_544_ONLY */
static rpm_tsu_config_t tsu_config_per_mode_100g_fec_kp = {
	4, /* tsu_rx_mode */
	4, /* tsu_tx_mode */
	1, /* tsu_modulo_tx */
	1, /* tsu_module_rx */
	0, /* tsu_blocktime */
	64, /* tsu_blocktime_dec */
	12, /* tsu_markertime */
	8, /* tsu_markertime_dec */
	2, /* tsu_blks_per_clk */
	5, /* tsu_mii_mk_dly */
	5, /* tsu_mii_cw_dly */
	10, /* tsu_mii_tx_mk_cyc_dly */
	3, /* tsu_mii_tx_cw_cyc_dly */
	68 /* tsu_tx_sd_period - KP */
};

static rpm_tsu_config_t tsu_config_per_mode_40g = {
	4, /* tsu_rx_mode */
	4, /* tsu_tx_mode */
	1, /* tsu_modulo_tx */
	1, /* tsu_module_rx */
	1, /* tsu_blocktime */
	6, /* tsu_blocktime_dec */
	12, /* tsu_markertime */
	6, /* tsu_markertime_dec */
	4, /* tsu_blks_per_clk */
	1, /* tsu_mii_mk_dly */
	1, /* tsu_mii_cw_dly */
	4, /* tsu_mii_tx_mk_cyc_dly */
	5, /* tsu_mii_tx_cw_cyc_dly */
	33 /* tsu_tx_sd_period */
};

/* This function configures TSU for each mode as recommended in
 * HRM section 37.18 Timestamp Configuration which helps to
 * provide low jitter timestamp for use by the MAC for
 * frame timestamping
 */
static void rpm_lmac_tsu_config(int rpm_id, int lmac_id)
{
	cavm_rpmx_ext_mti_portx_tsu_control_0_t tsu_control_0;
	cavm_rpmx_ext_mti_portx_tsu_control_1_t tsu_control_1;
	cavm_rpmx_ext_mti_portx_tsu_control_3_t tsu_control_3;
	rpm_lmac_config_t *lmac;
	rpm_tsu_config_t *rpm_tsu_config = NULL;
	int supported_fec = 0, pcs_type = 0, fec_type = 0;
	portm_config_t *portm;

	lmac = &plat_octeontx_bcfg->rpm_cfg[rpm_id].lmac_cfg[lmac_id];
	portm = &(plat_octeontx_bcfg->portm_cfg[lmac->portm]);

	debug_rpm("%s: %d:%d portm mode %d fec %d\n", __func__, rpm_id, lmac_id, portm->portm_mode, lmac->fec);

	supported_fec = cn10k_portm_get_mode_desc_fec(portm->portm_mode);
	pcs_type = cn10k_portm_get_pcs_type(portm->portm_mode);
	fec_type = lmac->fec;

	debug_rpm("%s: %d:%d pcs_type %d\n", __func__, rpm_id, lmac_id, pcs_type);

	switch (pcs_type) {
	case PORTM_PCS_1000BASE_X:
	case PORTM_PCS_QSGMII:
		rpm_tsu_config = &tsu_config_per_mode_1g;
		break;
	case PORTM_PCS_10GBASE_R:
		rpm_tsu_config = &tsu_config_per_mode_10g;
		break;
	case PORTM_PCS_25GBASE_R:
		if (fec_type == PORTM_FEC_BASER)	/* If BASE-R FEC is set */
			rpm_tsu_config = &tsu_config_per_mode_25g_fec;
		else if (fec_type == PORTM_FEC_RS)	/* If RS-FEC is set */
			rpm_tsu_config = &tsu_config_per_mode_25g_rsfec;
		else
			rpm_tsu_config = &tsu_config_per_mode_25g;
		break;
	case PORTM_PCS_40GBASE_R4:
		rpm_tsu_config = &tsu_config_per_mode_40g;
		break;
	case PORTM_PCS_50GBASE_R2:
	case PORTM_PCS_50GBASE_R1:
		if (supported_fec == PORTM_FEC_RS_544_ONLY)
			rpm_tsu_config = &tsu_config_per_mode_50g_fec_kp;
		else if ((fec_type == PORTM_FEC_BASER) || (fec_type == PORTM_FEC_RS))	/* If FEC is enabled */
			rpm_tsu_config = &tsu_config_per_mode_50g_fec;
		else
			rpm_tsu_config = &tsu_config_per_mode_50g;
		break;
	case PORTM_PCS_100GBASE_R4:
	case PORTM_PCS_100GBASE_R2:
		if (supported_fec == PORTM_FEC_RS_544_ONLY)
			rpm_tsu_config = &tsu_config_per_mode_100g_fec_kp;
		else if ((fec_type == PORTM_FEC_BASER) || (fec_type == PORTM_FEC_RS))	/* If FEC is enabled */
			rpm_tsu_config = &tsu_config_per_mode_100g_fec;
		else
			rpm_tsu_config = &tsu_config_per_mode_100g;
		break;
	/* FIXME: Add for more modes */
	default:
		break;
	}

	if (rpm_tsu_config == NULL) {
		ERROR("%s: %d:%d TSU config not obtained. Invalid mode %d\n",
			__func__,
			rpm_id, lmac_id,
			lmac->mode);
		return;
	}

	tsu_control_0.u = CSR_READ(CAVM_RPMX_EXT_MTI_PORTX_TSU_CONTROL_0(
					rpm_id, lmac_id));
	tsu_control_0.s.tsu_rx_mode = rpm_tsu_config->tsu_rx_mode;
	tsu_control_0.s.tsu_tx_mode = rpm_tsu_config->tsu_tx_mode;
	tsu_control_0.s.tsu_mii_mk_dly = rpm_tsu_config->tsu_mii_mk_dly;
	tsu_control_0.s.tsu_mii_cw_dly = rpm_tsu_config->tsu_mii_cw_dly;
	tsu_control_0.s.tsu_mii_tx_mk_cyc_dly = rpm_tsu_config->tsu_mii_tx_mk_cyc_dly;
	tsu_control_0.s.tsu_mii_tx_cw_cyc_dly = rpm_tsu_config->tsu_mii_tx_cw_cyc_dly;
	CSR_WRITE(CAVM_RPMX_EXT_MTI_PORTX_TSU_CONTROL_0(rpm_id, lmac_id),
			tsu_control_0.u);

	tsu_control_1.u = CSR_READ(CAVM_RPMX_EXT_MTI_PORTX_TSU_CONTROL_1(
					rpm_id, lmac_id));
	tsu_control_1.s.tsu_blks_per_clk = rpm_tsu_config->tsu_blks_per_clk;
	tsu_control_1.s.tsu_blocktime = rpm_tsu_config->tsu_blocktime;
	tsu_control_1.s.tsu_blocktime_dec = rpm_tsu_config->tsu_blocktime_dec;
	tsu_control_1.s.tsu_markertime = rpm_tsu_config->tsu_markertime;
	tsu_control_1.s.tsu_markertime_dec = rpm_tsu_config->tsu_markertime_dec;
	CSR_WRITE(CAVM_RPMX_EXT_MTI_PORTX_TSU_CONTROL_1(rpm_id, lmac_id),
			tsu_control_1.u);

	tsu_control_3.u = CSR_READ(CAVM_RPMX_EXT_MTI_PORTX_TSU_CONTROL_3(
					rpm_id, lmac_id));
	tsu_control_3.s.tsu_tx_sd_period = rpm_tsu_config->tsu_tx_sd_period;
	CSR_WRITE(CAVM_RPMX_EXT_MTI_PORTX_TSU_CONTROL_3(rpm_id, lmac_id),
			tsu_control_3.u);
}

int rpm_fec_change(int rpm_id, int lmac_id, int fec, rpm_link_state_t *lnk_sts)
{
	rpm_lmac_config_t *lmac;
	uint64_t init_time, cmd_timeout;
	int status = 0, ret = 0;
	ecp_link_state_t link_state;

	debug_rpm("%s %d:%d\n", __func__, rpm_id, lmac_id);

	lmac = &plat_octeontx_bcfg->rpm_cfg[rpm_id].lmac_cfg[lmac_id];

	ret = ecp_send_link_req(lmac->portm, rpm_id, lmac_id, ECP_LINK_REQ_FEC_CHANGE);
	if (ret == -1) {
		/* Request not sent */
		debug_rpm("%s: %d:%d Request not sent to ECP\n", __func__, rpm_id, lmac_id);
		rpm_set_error_type(rpm_id, lmac_id, LINK_ERR_ECP_LINK_REQ_FAIL);
		goto link_failure;
	} else {
		debug_rpm("%s: %d:%d Request sent to ECP\n", __func__, rpm_id, lmac_id);
		init_time = clock_get_count(GSER_CLOCK_TIME);
		/* Wait for 1s for ECP to respond for FEC change */
		cmd_timeout = init_time + RPM_POLL_LINK_FECCHANGE_STATUS *
					clock_get_rate(GSER_CLOCK_TIME)/1000000;

		while (clock_get_count(GSER_CLOCK_TIME)
						< cmd_timeout) {
			status = ecp_get_link_state(lmac->portm, &link_state);
			if (status == ETH_LINK_STATE_LINK_UP)
				goto link_up;
			else if (status == ETH_LINK_STATE_LINK_FAIL) {
				/* TODO */
				rpm_set_error_type(rpm_id, lmac_id, link_state.s.error_type);
				goto link_failure;
			} else if (status == ETH_LINK_STATE_LINK_STOPPED) {
				goto link_failure;
			}
			mdelay(5);
		}
	}
link_up:
	debug_rpm("%s: %d:%d Link UP completed\n", __func__, rpm_id, lmac_id);
	/* Update link status */
	lnk_sts->s.link_up = link_state.s.link_up;
	lnk_sts->s.full_duplex = link_state.s.duplex;
	lnk_sts->s.speed = link_state.s.speed;
	lnk_sts->s.fec = link_state.s.fec;
	return 0;

link_failure:
	/* TODO :Get detailed link status */
	lnk_sts->s.link_up = 0;
	lnk_sts->s.full_duplex = 0;
	lnk_sts->s.speed = 0;
	lnk_sts->s.fec = 0;
	lnk_sts->s.error_type = link_state.s.error_type;
	return -1;
}

int rpm_lmac_port_enable(int rpm_id, int lmac_id, rpm_lmac_context_t *lmac_ctx, rpm_link_state_t *lnk_sts)
{
	uint64_t init_time, link_timeout;
	rpm_lmac_config_t *lmac;
	int status = 0, ret = 0;
	ecp_link_state_t link_state;

	debug_rpm("%s %d:%d\n", __func__, rpm_id, lmac_id);

	lmac = &plat_octeontx_bcfg->rpm_cfg[rpm_id].lmac_cfg[lmac_id];

	/* With NO_STATE, send request to ECP to bring the link UP.
	 */
	if (status == ETH_LINK_NO_STATE) {
		ret = ecp_send_link_req(lmac->portm, rpm_id, lmac_id, ECP_LINK_REQ_BRINGUP);
		if (ret == -1) {
			/* Request not sent */
			debug_rpm("%s: %d:%d Request not sent to ECP\n",
				__func__, rpm_id, lmac_id);
			rpm_set_error_type(rpm_id, lmac_id, LINK_ERR_ECP_LINK_REQ_FAIL);
			goto link_failure;
		} else {
			debug_rpm("%s: %d:%d Request sent to ECP\n",
				__func__, rpm_id, lmac_id);
			/* If it is for the first time that link request is started
			 * for the respective LMAC, wait for
			 * RPM_POLL_LINK_BRINGUP_STATUS ms after
			 * sending the request to check if ECP has completed
			 * link bring up. For subsequent requests, just check the status
			 * and return without wait.
			 */
			if (!lmac_ctx->s.link_enable) {
				init_time = clock_get_count(GSER_CLOCK_TIME);
				link_timeout = init_time + RPM_POLL_LINK_BRINGUP_STATUS *
						clock_get_rate(GSER_CLOCK_TIME)/1000000;

				while (clock_get_count(GSER_CLOCK_TIME)
						< link_timeout) {
					status = ecp_get_link_state(lmac->portm, &link_state);
					if (status == ETH_LINK_STATE_LINK_UP)
						goto link_up;
					else if (status == ETH_LINK_STATE_LINK_FAIL) {
						/* TODO */
						rpm_set_error_type(rpm_id, lmac_id, link_state.s.error_type);
						goto link_failure;
					} else if (status == ETH_LINK_STATE_LINK_STOPPED) {
						rpm_set_error_type(rpm_id, lmac_id, link_state.s.error_type);
						goto link_failure;
					}
					mdelay(5);
				}
				goto link_failure;
			} else
				goto link_check_state;
		}
	}
link_check_state:
	/* TODO : For subsequent link bring up requests */
link_up:
	debug_rpm("%s: %d:%d Link UP completed\n", __func__, rpm_id, lmac_id);
	/* Update link status */
	lnk_sts->s.link_up = link_state.s.link_up;
	lnk_sts->s.full_duplex = link_state.s.duplex;
	lnk_sts->s.speed = link_state.s.speed;
	lnk_sts->s.fec = link_state.s.fec;
	return 0;
link_failure:
	/* TODO :Get detailed link status */
	lnk_sts->s.link_up = 0;
	lnk_sts->s.full_duplex = 0;
	lnk_sts->s.speed = 0;
	lnk_sts->s.fec = 0;
	return -1;
}

static int rpm_lmac_port_init(int rpm_id, int lmac_id)
{
	cavm_rpmx_cmrx_rx_bp_on_t rx_bp_on;
	cavm_rpmx_const_t rpm_const;
	rpm_config_t *rpm;

	debug_rpm("%s %d:%d\n", __func__, rpm_id, lmac_id);

	rpm = &plat_octeontx_bcfg->rpm_cfg[rpm_id];
	/* FIXME */
	/* Program receive backpressure as recommended by HRM
	 * The recommended value is 1/4th the size of the per-LMAC RX FIFO
	 * size as determined by RPM()_CMR_RX_LMACS[LMACS_EXIST].
	 * Also, mark to be configured in mulitple of 16 bytes
	 */
	rpm_const.u = CSR_READ(CAVM_RPMX_CONST(rpm_id));
	rx_bp_on.u = CSR_READ(CAVM_RPMX_CMRX_RX_BP_ON(rpm_id, lmac_id));
	rx_bp_on.s.mark = (rpm_const.s.rx_fifosz/(rpm->lmac_count *
				RPM_BP_ON_MARK_SIZE_DIV * RPM_BP_PACKET_DATA_DEPTH));
	CSR_WRITE(CAVM_RPMX_CMRX_RX_BP_ON(rpm_id, lmac_id),
			rx_bp_on.u);

	return 0;
}

void rpm_set_internal_loopback(int rpm_id, int lmac_id, int enable)
{
	debug_rpm("%s %d:%d\n", __func__, rpm_id, lmac_id);

	CAVM_MODIFY_RPM_CSR(cavm_rpmx_mti_pcs100x_control1_t,
				CAVM_RPMX_MTI_PCS100X_CONTROL1(rpm_id, lmac_id),
				loopback, enable);
}

void rpm_set_external_loopback(int rpm_id, int lmac_id, int enable)
{
	debug_rpm("%s %d:%d\n", __func__, rpm_id, lmac_id);

	CAVM_MODIFY_RPM_CSR(cavm_rpmx_ext_mti_portx_control_t,
				CAVM_RPMX_EXT_MTI_PORTX_CONTROL(rpm_id, lmac_id),
				loop_ena, enable);

	/* When loopback is enabled, configure CRC_FWD as well */
	CAVM_MODIFY_RPM_CSR(cavm_rpmx_mti_mac100x_command_config_t,
				CAVM_RPMX_MTI_MAC100X_COMMAND_CONFIG(rpm_id, lmac_id),
				crc_fwd, enable);
}

/* This function initializes the RPM LMAC for
 * a particular mode
 */
void rpm_lmac_init(int rpm_id, int lmac_id)
{
	debug_rpm("%s %d:%d\n", __func__, rpm_id, lmac_id);

	/* Do one time initialization of RPM
	 * This function will be called
	 * once during boot
	 */
	rpm_lmac_port_init(rpm_id, lmac_id);

	/* Section 40.19.1 Time Stamp Configuration Unit */
	rpm_lmac_tsu_config(rpm_id, lmac_id);
}

int rpm_lmac_port_disable(int rpm_id, int lmac_id, rpm_lmac_context_t *lmac_ctx)
{
	int ret, status;
	rpm_lmac_config_t *lmac;
	uint64_t init_time, link_timeout;
	ecp_link_state_t link_state;

	debug_rpm("%s %d:%d\n", __func__, rpm_id, lmac_id);

	lmac = &plat_octeontx_bcfg->rpm_cfg[rpm_id].lmac_cfg[lmac_id];

	ret = ecp_send_link_req(lmac->portm, rpm_id, lmac_id, ECP_LINK_REQ_BRINGDOWN);
	if (ret == -1) {
		/* Request not sent */
		debug_rpm("%s: %d:%d Request not sent to ECP\n",
			__func__, rpm_id, lmac_id);
		rpm_set_error_type(rpm_id, lmac_id, LINK_ERR_ECP_LINK_REQ_FAIL);
		return -1;
	} else {
		debug_rpm("%s: %d:%d Request sent to ECP\n",
			__func__, rpm_id, lmac_id);
		/* Wait for
		 * RPM_POLL_LINK_BRINGDOWN_STATUS ms after
		 * sending the request to check if ECP has completed
		 * link bring down.
		 */
		if (lmac_ctx->s.link_enable) {
			init_time = clock_get_count(GSER_CLOCK_TIME);
			link_timeout = init_time + RPM_POLL_LINK_BRINGDOWN_STATUS *
					clock_get_rate(GSER_CLOCK_TIME)/1000000;
			while (clock_get_count(GSER_CLOCK_TIME)
					< link_timeout) {
				status = ecp_get_link_state(lmac->portm, &link_state);
				if (status == ETH_LINK_NO_STATE)
					break;
				else {
					debug_rpm("%s: %d:%d Link bringdown not successful\n",
							__func__, rpm_id, lmac_id);
				}
				mdelay(1);
			}
			if (status != ETH_LINK_NO_STATE)
				return -1;
		}
	}
	return 0;
}

/* This function to be called for every RPM either from
 * PCI scanning (RPM device enumeration) or
 * during INTF initialization
 */
void rpm_init(int rpm_id)
{
	int lmac_id, lmac_mask = 0;
	rpm_config_t *rpm;
	rpm_lmac_config_t *lmac;
	cavm_rpmx_ext_mti_global_pma_control_t global_pma_ctrl;

	debug_rpm("%s: %d\n", __func__, rpm_id);

	rpm = &plat_octeontx_bcfg->rpm_cfg[rpm_id];

	if (rpm->enable) {
		/* Program the LMAC count for each RPM
		 * When bit n is set to 1 of TX_LMACS or RX_LMACs CSR,
		 * LMAC[n] can be enabled for Rx/Tx traffic.
		 */
		for (int i = 0; i < MAX_LMAC_PER_RPM; i++) {
			lmac = &rpm->lmac_cfg[i];
			if (lmac->lmac_enable)
				lmac_mask |= (1 << i);
		}

		CAVM_MODIFY_RPM_CSR(cavm_rpmx_cmr_rx_lmacs_t,
				CAVM_RPMX_CMR_RX_LMACS(rpm_id),
				lmac_exist, (lmac_mask & 0xF));

		CAVM_MODIFY_RPM_CSR(cavm_rpmx_cmr_tx_lmacs_t,
				CAVM_RPMX_CMR_TX_LMACS(rpm_id),
				lmac_exist, (lmac_mask & 0xF));

		/* 1.1 SerDes config */
		global_pma_ctrl.u = CSR_READ(CAVM_RPMX_EXT_MTI_GLOBAL_PMA_CONTROL(
						rpm_id));
		global_pma_ctrl.s.gc_sd_n2 = 0;
		global_pma_ctrl.s.gc_sd_8x = 0;
		CSR_WRITE(CAVM_RPMX_EXT_MTI_GLOBAL_PMA_CONTROL(rpm_id),
				global_pma_ctrl.u);

		/* Clear FC-FEC/RS-FEC for all LMACs */
		CSR_WRITE(CAVM_RPMX_EXT_MTI_GLOBAL_FEC_CONTROL(rpm_id),
				0x0);
		/* Retrieve the LMAC config from plat_octeontx_bcfg structure
		 * and loop
		 * through them for lmac_count times and program the HW
		 * for each LMAC
		 */
		for (lmac_id = 0; lmac_id < MAX_LMAC_PER_RPM; lmac_id++) {
			lmac = &rpm->lmac_cfg[lmac_id];
			if (lmac->lmac_enable) {
				rpm_lmac_init(rpm_id, lmac_id);
			} else {
				debug_rpm("%s LMAC%d not enabled\n", __func__, lmac_id);
				continue;
			}
			/* enable CMR INT for notifications to kernel cmds/evt */
			CAVM_MODIFY_RPM_CSR(cavm_rpmx_cmrx_sw_int_ena_w1s_t,
				CAVM_RPMX_CMRX_SW_INT_ENA_W1S(rpm_id, lmac_id),
				sw_set, 1);
		}

	} else {
		/* if RPM not enabled, configure the number of LMACs
		 * in RPM to be zero. configure the LMAC type as 0
		 */
		CAVM_MODIFY_RPM_CSR(cavm_rpmx_cmr_rx_lmacs_t,
				CAVM_RPMX_CMR_RX_LMACS(rpm_id),
				lmac_exist, 0x0);

		CAVM_MODIFY_RPM_CSR(cavm_rpmx_cmr_tx_lmacs_t,
				CAVM_RPMX_CMR_TX_LMACS(rpm_id),
				lmac_exist, 0x0);

	}
}
