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

extern rpm_lmac_bringup_context_t bringup_context[MAX_RPM][MAX_LMAC_PER_RPM];

int rpm_fec_change(int rpm_id, int lmac_id, int fec, rpm_lmac_context_t *lmac_ctx, rpm_link_state_t *lnk_sts)
{
	rpm_lmac_config_t *lmac;
	uint64_t init_time = 0, cmd_timeout = 0, ltimeout = 0;
	int status = 0, ret = 0, sig_detect = 0, sig_detect_temp = 0;
	ecp_link_state_t link_state = {0};
	rpm_lmac_bringup_context_t *bringup_ctx;

	bringup_ctx = &bringup_context[rpm_id][lmac_id];
	bringup_ctx->link_bringup_status = LINK_BRINGUP_INIT;

	debug_rpm("%s %d:%d bringup_ctx->link_timeout %lld\n", __func__, rpm_id, lmac_id,
			bringup_ctx->link_timeout);

	lmac = &plat_octeontx_bcfg->rpm_cfg[rpm_id].lmac_cfg[lmac_id];

	ret = ecp_send_link_req(lmac->portm_idx, rpm_id, lmac_id, ECP_LINK_REQ_FEC_CHANGE, lmac_ctx);
	if (ret == -1) {
		/* Request not sent */
		debug_rpm("%s: %d:%d Request not sent to ECP\n", __func__, rpm_id, lmac_id);
		rpm_set_error_type(rpm_id, lmac_id, ETH_ERR_ECP_LINK_REQ_FAIL);
		ecp_dump_state_history(lmac->portm_idx, lmac_id, "FEC change failed");
		goto fec_err;
	} else {
		debug_rpm("%s: %d:%d Request sent to ECP\n", __func__, rpm_id, lmac_id);
		init_time = clock_get_count(GSER_CLOCK_TIME);

		/* Save the bring up time in us */
		bringup_ctx->link_bringup_init_time = (init_time * 1000000)/(clock_get_rate(GSER_CLOCK_TIME));

		/* Timeout from ETH_CMD_LINK_TIMEOUT command */
		if ((bringup_ctx->link_timeout) && (bringup_ctx->link_timeout != -1)) {
			if (bringup_ctx->link_timeout <= RPM_LINK_BRINGUP_WAIT_STATUS)
				ltimeout = bringup_ctx->link_timeout;
			else
				ltimeout = RPM_LINK_BRINGUP_WAIT_STATUS;
		} else { /* Timeout not passed */
			ltimeout = RPM_LINK_BRINGUP_WAIT_STATUS;
			/* Max time to wait for the FEC change is 4s */
			bringup_ctx->link_timeout = RPM_POLL_LINK_FECCHANGE_STATUS;
		}

		/* Allow upto 100ms for ECP to respond for FEC change */
		cmd_timeout = init_time + ltimeout *
					clock_get_rate(GSER_CLOCK_TIME)/1000000;

		while (clock_get_count(GSER_CLOCK_TIME)
						< cmd_timeout) {
			status = ecp_get_link_state(lmac->portm_idx, lmac_id, &link_state, &sig_detect);
			if ((!sig_detect) && (sig_detect_temp))
				sig_detect = 1;
			if ((status == ETH_LINK_STATE_LINK_UP) ||
						(status == ETH_LINK_STATE_LINK_STOPPED))
				goto link_state;
			mdelay(5);
		}

		/* If the link timeout specified is less than 100ms of initial wait
		 * time, update the link bring up status as done so poll timer can
		 * check the link status
		 */
		if (bringup_ctx->link_timeout >= RPM_LINK_BRINGUP_WAIT_STATUS) {
			/* If the link is not UP, then update the link state as below */
			if (!sig_detect) {
				debug_rpm("%s: %d:%d FAILED to detect a signal\n", __func__, rpm_id, lmac_id);
				bringup_ctx->link_bringup_status = LINK_BRINGUP_DONE;
			} else
				bringup_ctx->link_bringup_status = LINK_BRINGUP_IN_PROGRESS;
		} else
			bringup_ctx->link_bringup_status = LINK_BRINGUP_DONE;

		bringup_ctx->link_bringup_time = ltimeout; /* elapsed time */

		debug_rpm("%s: %d:%d bringup_ctx->link_bringup_status %d bringup_ctx->link_bringup_time %lld\n", __func__,
						rpm_id, lmac_id, bringup_ctx->link_bringup_status,
						bringup_ctx->link_bringup_time);
		return 0;
	}
link_state:
	debug_rpm("%s: %d:%d FEC change request completed\n", __func__, rpm_id, lmac_id);
	/* Update link status */
	lnk_sts->s.link_up = link_state.s.link_up;
	lnk_sts->s.full_duplex = link_state.s.duplex;
	lnk_sts->s.speed = link_state.s.speed;
	lnk_sts->s.fec = link_state.s.fec;
	return 0;

fec_err:
	lnk_sts->s.link_up = 0;
	lnk_sts->s.full_duplex = 0;
	lnk_sts->s.speed = 0;
	lnk_sts->s.fec = 0;
	lnk_sts->s.error_type = ETH_ERR_ECP_LINK_REQ_FAIL;
	return -1;
}

int rpm_lmac_port_enable(int rpm_id, int lmac_id, rpm_lmac_context_t *lmac_ctx, rpm_link_state_t *lnk_sts, uint64_t bringup_timeout)
{
	uint64_t init_time = 0, link_timeout = 0, ltimeout = 0;
	rpm_lmac_config_t *lmac;
	int status = 0, ret = 0, sig_detect = 0, sig_detect_temp = 0;
	ecp_link_state_t link_state;
	rpm_lmac_bringup_context_t *bringup_ctx;
	portm_config_t *portm;

	debug_rpm("%s %d:%d\n", __func__, rpm_id, lmac_id);

	lmac = &plat_octeontx_bcfg->rpm_cfg[rpm_id].lmac_cfg[lmac_id];
	bringup_ctx = &bringup_context[rpm_id][lmac_id];
	portm = &(plat_octeontx_bcfg->portm_cfg[lmac->portm_idx]);

	status = ecp_get_link_state(lmac->portm_idx, lmac_id, &link_state, &sig_detect);
	debug_rpm("%s: %d:%d ECP link status %d\n", __func__, rpm_id, lmac_id, status);

	/* With NO_STATE, send request to ECP to bring the link UP */
	if (status == ETH_LINK_STATE_NO_STATE) {
		ret = ecp_send_link_req(lmac->portm_idx, rpm_id, lmac_id, ECP_LINK_REQ_BRINGUP, lmac_ctx);
		if (ret == -1) {
			/* Request not sent */
			debug_rpm("%s: %d:%d Request not sent to ECP\n",
				__func__, rpm_id, lmac_id);
			rpm_set_error_type(rpm_id, lmac_id, ETH_ERR_ECP_LINK_REQ_FAIL);
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
				/* Initialization of link bring up time */
				init_time = clock_get_count(GSER_CLOCK_TIME);
				/* Save the bring up time in us */
				bringup_ctx->link_bringup_init_time = (init_time * 1000000)/(clock_get_rate(GSER_CLOCK_TIME));
				/* Timeout from ETH_CMD_LINK_TIMEOUT command */
				if ((bringup_ctx->link_timeout) && (bringup_ctx->link_timeout != -1)) {
					if (bringup_ctx->link_timeout <= RPM_LINK_BRINGUP_WAIT_STATUS)
						ltimeout = bringup_ctx->link_timeout;
					else
						ltimeout = RPM_LINK_BRINGUP_WAIT_STATUS;
				/* Timeout passed to ETH_CMD_BRINGUP_LINK command */
				} else if ((bringup_timeout) && (bringup_timeout != -1)) {
					if (bringup_timeout <= RPM_LINK_BRINGUP_WAIT_STATUS)
						/* Max time to wait for the link bring up */
						bringup_ctx->link_timeout = ltimeout = bringup_timeout;
					else {
						/* If timeout passed is greater than 100 ms, assign the
						 * link timeout value to the user passed timeout
						 */
						bringup_ctx->link_timeout = bringup_timeout;
						ltimeout = RPM_LINK_BRINGUP_WAIT_STATUS;
					}
				/* Timeout not passed */
				} else {
					ltimeout = RPM_LINK_BRINGUP_WAIT_STATUS;
					/* Max time to wait for the link bring up 4s */
					bringup_ctx->link_timeout = RPM_POLL_LINK_BRINGUP_STATUS;
				}

				debug_rpm("%s: %d:%d ltimeout %lld bringup_ctx->link_timeout %lld\n", __func__,
						rpm_id, lmac_id, ltimeout, bringup_ctx->link_timeout);

				link_timeout = init_time + ltimeout * clock_get_rate(GSER_CLOCK_TIME)/1000000;

				while (clock_get_count(GSER_CLOCK_TIME)
						< link_timeout) {
					status = ecp_get_link_state(lmac->portm_idx, lmac_id, &link_state, &sig_detect_temp);
					/* Check for signal detect and set the variable sig_detect to check after
					 * link initial timeout
					 */
					if ((!sig_detect) && (sig_detect_temp))
						sig_detect = 1;
					if (status == ETH_LINK_STATE_LINK_UP)
						goto link_up;
					else if (status == ETH_LINK_STATE_LINK_STOPPED) {
						debug_rpm("%s: %d:%d Link Bringup Stopped\n", __func__, rpm_id, lmac_id);
						if (portm->an_lt_ena) /* CL73 AN enabled */
							/* FIXME: Add link training history trace dump */
							ret = ecp_send_link_req(lmac->portm_idx, rpm_id, lmac_id, ECP_LINK_REQ_AN_RESTART, lmac_ctx);
						else
							ret = ecp_send_link_req(lmac->portm_idx, rpm_id, lmac_id, ECP_LINK_REQ_BRINGUP, lmac_ctx);

						if (ret == -1) {
							/* Request not sent */
							debug_rpm("%s: %d:%d Request not sent to ECP to restart Link Bringup\n",
								  __func__, rpm_id, lmac_id);
							rpm_set_error_type(rpm_id, lmac_id, ETH_ERR_ECP_LINK_REQ_FAIL);
						} else
							rpm_set_error_type(rpm_id, lmac_id, link_state.s.error_type);

						ecp_dump_state_history(lmac->portm_idx, lmac_id, "Link bringup failed");
						goto link_failure;
					}
					mdelay(5);
				}

				debug_rpm("%s: %d:%d status %d sig_detect %d\n", __func__,
						rpm_id, lmac_id, status, sig_detect);
				bringup_ctx->link_bringup_time = ltimeout;
				/* If the link timeout specified is less than 100ms of initial wait
				 * time, update the link bring up status as done so poll timer can
				 * check the link status
				 */
				if (bringup_ctx->link_timeout >= RPM_LINK_BRINGUP_WAIT_STATUS) {
					if (!sig_detect) {
						debug_rpm("%s: %d:%d FAILED to detect a signal\n", __func__,
						rpm_id, lmac_id);
						bringup_ctx->link_bringup_status = LINK_BRINGUP_DONE;
					} else
						bringup_ctx->link_bringup_status = LINK_BRINGUP_IN_PROGRESS;
				} else {
					bringup_ctx->link_bringup_status = LINK_BRINGUP_DONE;
				}
				if (bringup_ctx->link_bringup_status == LINK_BRINGUP_DONE)
					ecp_dump_state_history(lmac->portm_idx, lmac_id, "Link bringup failed");
				goto link_failure;
			}
		}
	} else if (status == ETH_LINK_STATE_LINK_UP)
		goto link_up;
	else /* For all other link states */
		goto link_failure;

link_up:
	debug_rpm("%s: %d:%d Link UP completed\n", __func__, rpm_id, lmac_id);
	/* Update link status */
	lnk_sts->s.link_up = link_state.s.link_up;
	lnk_sts->s.full_duplex = link_state.s.duplex;
	lnk_sts->s.speed = link_state.s.speed;
	lnk_sts->s.fec = link_state.s.fec;
	bringup_ctx->link_bringup_status = LINK_BRINGUP_DONE;
	bringup_ctx->link_bringup_time = ltimeout;
	return 0;
link_failure:
	/* TODO :Get detailed link status */
	lnk_sts->s.link_up = 0;
	lnk_sts->s.full_duplex = 0;
	lnk_sts->s.speed = 0;
	lnk_sts->s.fec = 0;
	return -1;
}

/* Returns 1 if debug enabled, 0 if disabled */
int rpm_debug_log_state(void)
{
	int debug_state = 0;

	if (mrvl_tf_log_modules & MRVL_TF_LOG_MODULE)
		debug_state = 1;

#ifdef DEBUG_ATF_RPM
	debug_state = 1;
#endif
	return debug_state;
}

int rpm_set_internal_loopback(int rpm_id, int lmac_id, int enable)
{
	rpm_lmac_config_t *lmac;
	portm_config_t *portm;
	int pcs_type = 0;

	debug_rpm("%s %d:%d\n", __func__, rpm_id, lmac_id);

	lmac = &plat_octeontx_bcfg->rpm_cfg[rpm_id].lmac_cfg[lmac_id];
	portm = &(plat_octeontx_bcfg->portm_cfg[lmac->portm_idx]);

	pcs_type = portm->pcs_type;

	if ((pcs_type == PORTM_PCS_1000BASE_X) || (pcs_type ==
				PORTM_PCS_QSGMII)) {
		debug_rpm("%s: %d:%d Internal loopback not supported for LPCS modes\n",
			__func__, rpm_id, lmac_id);
		rpm_set_error_type(rpm_id, lmac_id, ETH_ERR_LPCS_INTERNAL_LBK_INVALID);
		return -1;
	}


	CAVM_MODIFY_RPM_CSR(cavm_rpmx_mti_pcs100x_control1_t,
				CAVM_RPMX_MTI_PCS100X_CONTROL1(rpm_id, lmac_id),
				loopback, enable);

	return 0;
}

void rpm_set_external_loopback(int rpm_id, int lmac_id, int enable)
{
	debug_rpm("%s %d:%d\n", __func__, rpm_id, lmac_id);

	CAVM_MODIFY_RPM_CSR(cavm_rpmx_ext_mti_portx_control_t,
				CAVM_RPMX_EXT_MTI_PORTX_CONTROL(rpm_id, lmac_id),
				loop_ena, enable);

	/* When loopback is enabled, configure CRC_FWD as well - CRC of RX is forwarded
	 * with the frame to user application
	 * Also, strip the CRC at the TX
	 */
	CAVM_MODIFY_RPM_CSR(cavm_rpmx_mti_mac100x_command_config_t,
				CAVM_RPMX_MTI_MAC100X_COMMAND_CONFIG(rpm_id, lmac_id),
				crc_fwd, enable);

	CAVM_MODIFY_RPM_CSR(cavm_rpmx_ext_mti_portx_control_t,
				CAVM_RPMX_EXT_MTI_PORTX_CONTROL(rpm_id, lmac_id),
				ff_tx_crc, 0);
}

/* This function initializes the RPM LMAC for
 * a particular mode
 */
void rpm_lmac_init(int rpm_id, int lmac_id)
{
	cavm_rpmx_cmrx_rx_bp_on_t rx_bp_on;
	cavm_rpmx_const_t rpm_const;
	rpm_config_t *rpm;

	/* Do one time initialization of RPM
	 * This function will be called
	 * once during boot
	 */
	debug_rpm("%s %d:%d\n", __func__, rpm_id, lmac_id);
	rpm = &plat_octeontx_bcfg->rpm_cfg[rpm_id];

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

#if defined(PLAT_cn10kb)
	/* Update P2X/X2P field for CMRX_CONFIG. LMACs0..3 mapped to NIX0
	 * and LMACs4..7 mapped to NIX1
	 */
	if ((lmac_id >= 0) && (lmac_id <= 3)) {
		CAVM_MODIFY_RPM_CSR(cavm_rpmx_cmrx_config_t,
				CAVM_RPMX_CMRX_CONFIG(rpm_id, lmac_id),
				p2x_select, 1);
		CAVM_MODIFY_RPM_CSR(cavm_rpmx_cmrx_config_t,
				CAVM_RPMX_CMRX_CONFIG(rpm_id, lmac_id),
				x2p_select, 1);
	} else if ((lmac_id >= 4) && (lmac_id <= 7)) {
		CAVM_MODIFY_RPM_CSR(cavm_rpmx_cmrx_config_t,
				CAVM_RPMX_CMRX_CONFIG(rpm_id, lmac_id),
				p2x_select, 2);
		CAVM_MODIFY_RPM_CSR(cavm_rpmx_cmrx_config_t,
				CAVM_RPMX_CMRX_CONFIG(rpm_id, lmac_id),
				x2p_select, 2);
	}
#endif
	/* If RPM is connected to BPHY, channel associated with the link has to be
	 * configured per LMAC
	 * log2_range : field to be always set to 4
	 * base_chan : field to be multiple of range (with 4 lsbs always 0) and 2nd nibble
	 * to be the LMAC index
	 */
	if (rpm->is_rfoe)
		CSR_WRITE(CAVM_RPMX_CMRX_LINK_CFG(rpm_id, lmac_id),
			(0x40a00 | lmac_id << 4));
}

int rpm_lmac_port_disable(int rpm_id, int lmac_id, rpm_lmac_context_t *lmac_ctx)
{
	int ret, status, sig_detect = 0;
	rpm_lmac_config_t *lmac;
	uint64_t init_time, link_timeout;
	ecp_link_state_t link_state;

	debug_rpm("%s %d:%d\n", __func__, rpm_id, lmac_id);

	lmac = &plat_octeontx_bcfg->rpm_cfg[rpm_id].lmac_cfg[lmac_id];

	ret = ecp_send_link_req(lmac->portm_idx, rpm_id, lmac_id, ECP_LINK_REQ_BRINGDOWN, lmac_ctx);
	if (ret == -1) {
		/* Request not sent */
		debug_rpm("%s: %d:%d Request not sent to ECP\n",
			__func__, rpm_id, lmac_id);
		rpm_set_error_type(rpm_id, lmac_id, ETH_ERR_ECP_LINK_REQ_FAIL);
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
				status = ecp_get_link_state(lmac->portm_idx, lmac_id, &link_state, &sig_detect);
				if (status == ETH_LINK_STATE_NO_STATE)
					break;
				else {
					debug_rpm("%s: %d:%d Link bringdown not successful\n",
							__func__, rpm_id, lmac_id);
				}
				mdelay(1);
			}
			if (status != ETH_LINK_STATE_NO_STATE)
				return -1;
		}
	}
	return 0;
}

int rpm_set_ptp_mode(int rpm_id, int lmac_id, int enable)
{
	debug_rpm("%s: %d %d enable %d\n", __func__, rpm_id, lmac_id, enable);

	if (enable) {
		CAVM_MODIFY_RPM_CSR(cavm_rpmx_cmrx_config_t,
				CAVM_RPMX_CMRX_CONFIG(rpm_id, lmac_id),
				tx_ptp_1s_support, 1);
		CAVM_MODIFY_RPM_CSR(cavm_rpmx_cmrx_config_t,
				CAVM_RPMX_CMRX_CONFIG(rpm_id, lmac_id),
				rx_ts_prepend, 1);
		CAVM_MODIFY_RPM_CSR(cavm_rpmx_mti_mac100x_xif_mode_t,
				CAVM_RPMX_MTI_MAC100X_XIF_MODE(rpm_id, lmac_id),
				onestepena, 1);
	} else {
		CAVM_MODIFY_RPM_CSR(cavm_rpmx_cmrx_config_t,
				CAVM_RPMX_CMRX_CONFIG(rpm_id, lmac_id),
				tx_ptp_1s_support, 0);
		CAVM_MODIFY_RPM_CSR(cavm_rpmx_cmrx_config_t,
				CAVM_RPMX_CMRX_CONFIG(rpm_id, lmac_id),
				rx_ts_prepend, 0);
		CAVM_MODIFY_RPM_CSR(cavm_rpmx_mti_mac100x_xif_mode_t,
				CAVM_RPMX_MTI_MAC100X_XIF_MODE(rpm_id, lmac_id),
				onestepena, 0);
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

		if (cavm_is_model(OCTEONTX_CN10KB)) {
			CAVM_MODIFY_RPM_CHIP_CSR(cavm_rpmx_cmr_rx_lmacs_t,
					CAVM_RPMX_CMR_RX_LMACS(rpm_id),
					cn10kb, lmac_exist, (lmac_mask & 0xFF));

			CAVM_MODIFY_RPM_CHIP_CSR(cavm_rpmx_cmr_tx_lmacs_t,
					CAVM_RPMX_CMR_TX_LMACS(rpm_id),
					cn10kb, lmac_exist, (lmac_mask & 0xFF));
		} else {
			CAVM_MODIFY_RPM_CHIP_CSR(cavm_rpmx_cmr_rx_lmacs_t,
					CAVM_RPMX_CMR_RX_LMACS(rpm_id),
					cn10ka, lmac_exist, (lmac_mask & 0xF));

			CAVM_MODIFY_RPM_CHIP_CSR(cavm_rpmx_cmr_tx_lmacs_t,
					CAVM_RPMX_CMR_TX_LMACS(rpm_id),
					cn10ka, lmac_exist, (lmac_mask & 0xF));
		}
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
		if (cavm_is_model(OCTEONTX_CN10KB)) {
			CAVM_MODIFY_RPM_CHIP_CSR(cavm_rpmx_cmr_rx_lmacs_t,
					CAVM_RPMX_CMR_RX_LMACS(rpm_id),
					cn10kb, lmac_exist, 0x0);

			CAVM_MODIFY_RPM_CHIP_CSR(cavm_rpmx_cmr_tx_lmacs_t,
					CAVM_RPMX_CMR_TX_LMACS(rpm_id),
					cn10kb, lmac_exist, 0x0);
		} else {
			CAVM_MODIFY_RPM_CHIP_CSR(cavm_rpmx_cmr_rx_lmacs_t,
					CAVM_RPMX_CMR_RX_LMACS(rpm_id),
					cn10ka, lmac_exist, 0x0);

			CAVM_MODIFY_RPM_CHIP_CSR(cavm_rpmx_cmr_tx_lmacs_t,
					CAVM_RPMX_CMR_TX_LMACS(rpm_id),
					cn10ka, lmac_exist, 0x0);
		}

	}
}
