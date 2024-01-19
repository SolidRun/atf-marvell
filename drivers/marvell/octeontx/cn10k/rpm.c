/*
 * Copyright (c) 2020 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 *
 * https://spdx.org/licenses
 *
 */

/* RPM driver for CN10K */

#include <arch.h>
#include <stdio.h>
#include <string.h>
#include <inttypes.h>
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
#include <gpio_octeontx.h>

#include "cavm-csrs-rpm.h"
#include "cavm-csrs-gpio.h"
#include "cavm-csrs-rst.h"

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
	int status = 0, ret = 0, sig_detect = 0;
	ecp_link_state_t link_state = {0};
	rpm_lmac_bringup_context_t *bringup_ctx;

	bringup_ctx = &bringup_context[rpm_id][lmac_id];
	bringup_ctx->link_bringup_status = LINK_BRINGUP_INIT;

	debug_rpm("%s %d:%d bringup_ctx->link_timeout %" PRId64 "\n", __func__, rpm_id, lmac_id,
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
			if ((!sig_detect))
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

		debug_rpm("%s: %d:%d bringup_ctx->link_bringup_status %d bringup_ctx->link_bringup_time %" PRId64 "\n", __func__,
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

				debug_rpm("%s: %d:%d ltimeout %" PRId64 " bringup_ctx->link_timeout %" PRId64 "\n", __func__,
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
	lnk_sts->s.fec = link_state.s.fec;
	return -1;
}

/* Returns 1 if debug enabled, 0 if disabled */
int rpm_debug_log_state(void)
{
	int debug_state = 0;

#ifdef MRVL_TF_LOG_MODULE
	if (mrvl_tf_log_modules & MRVL_TF_LOG_MODULE)
		debug_state = 1;
#endif

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
	rpm_lmac_config_t *lmac_cfg;
	led_gpio_info_t *led_info;

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

	/* If RPM is connected to BPHY, channel associated with the link has to be
	 * configured per LMAC
	 * log2_range : field to be always set to 4
	 * base_chan : field to be multiple of range (with 4 lsbs always 0) and 2nd nibble
	 * to be the LMAC index
	 */
	if (rpm->is_rfoe)
		CSR_WRITE(CAVM_RPMX_CMRX_LINK_CFG(rpm_id, lmac_id),
			(0x40a00 | lmac_id << 4));

	lmac_cfg = &rpm->lmac_cfg[lmac_id];
	led_info = &plat_octeontx_bcfg->led_info[lmac_cfg->portm_idx];
	if ((led_info->activity.type == GPIO_PIN_DEFAULT) &&
	    (led_info->is_act_supported || led_info->is_combined_link_act)) {
		rpm_set_gpio_led_blink_rate(plat_octeontx_bcfg->led_blink_rate);
	}
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
			status = ETH_LINK_STATE_NO_STATE;
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
	/* Clear FC-FEC/RS-FEC for all LMACs */
	CSR_WRITE(CAVM_RPMX_EXT_MTI_GLOBAL_FEC_CONTROL(rpm_id), 0x0);
	rpm_cfg(rpm_id);
}

void rpm_cfg(int rpm_id)
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

void rpm_gpio_led_handle(int rpm_id, int lmac_id, int portm_idx, uint64_t link_up)
{
	led_gpio_info_t *led_info;
	uint64_t unblinked_pkts = 0;
	uint64_t cur_rx_pkt_cnt = 0;
	uint64_t cur_tx_pkt_cnt = 0;
	sfp_shared_data_t *sh_data;

	sh_data = sfp_get_sh_mem_ptr(portm_idx);
	led_info = &sh_data->led_info;
	if (led_info->is_link_supported || led_info->is_combined_link_act) {
		bool led_state = false;
		bool update_led = false;

		if (link_up && (!led_info->link_status)) {
			if (led_info->link.flags & GPIO_ACTIVE_HIGH)
				led_state = true;
			else
				led_state = false;
			led_info->link_status = 1;
			update_led = true;
		} else if (!link_up && (led_info->link_status)) {
			if (led_info->link.flags & GPIO_ACTIVE_HIGH)
				led_state = false;
			else
				led_state = true;
			update_led = true;
			led_info->link_status = 0;
		}
		if (update_led) {
			if (led_info->link.type == GPIO_PIN_DEFAULT) {
				if (led_state)
					gpio_set_out(led_info->link.pin);
				else
					gpio_clr_out(led_info->link.pin);
			} else {
				led_info->link_update = 1;
			}
		}
	}

	if (led_info->is_act_supported || led_info->is_combined_link_act) {
		uint32_t cnt;

		cur_rx_pkt_cnt = CSR_READ(CAVM_RPMX_CMRX_RX_STAT0(rpm_id, lmac_id));
		cur_tx_pkt_cnt = CSR_READ(CAVM_RPMX_MTI_STAT_TX_STAT_PAGES_COUNTERX(rpm_id, ETHER_TX_STATS_PKTS_PAGE));
		cnt = CSR_READ(CAVM_RPMX_MTI_STAT_DATA_HI_CDC(rpm_id));
		cur_tx_pkt_cnt |= (((uint64_t)cnt) << 32);

		/* Handle for counter wraps && for lmac disabled to enabled */
		if (cur_rx_pkt_cnt < led_info->prev_rx_pkt_cnt)
			led_info->prev_rx_pkt_cnt = 0;
		if (cur_tx_pkt_cnt < led_info->prev_tx_pkt_cnt)
			led_info->prev_tx_pkt_cnt = 0;

		unblinked_pkts = (cur_rx_pkt_cnt - led_info->prev_rx_pkt_cnt)
				+ (cur_tx_pkt_cnt - led_info->prev_tx_pkt_cnt);

		if (led_info->link.type == GPIO_PIN_DEFAULT) {
			CSR_INIT(ledact, CAVM_GPIO_BIT_CFGX(
				led_info->activity.pin));
			if (!unblinked_pkts && (ledact.s.pin_sel != 0)) {
				if (led_info->is_act_supported)
					CSR_MODIFY(c, CAVM_GPIO_BIT_CFGX(
						led_info->activity.pin),
						c.s.tx_oe = 0; c.s.pin_sel = 0);
				else  {
					// Keep GPIO on - to indicate there is a link but no activity
					cavm_gpio_tx_set_t gpio_tx_set;

					CSR_MODIFY(c, CAVM_GPIO_BIT_CFGX(
						led_info->activity.pin),
						c.s.tx_oe = 1; c.s.pin_sel = 0);
					gpio_tx_set.u = 0;
					gpio_tx_set.s.set = (1ULL << led_info->activity.pin);
					CSR_WRITE(CAVM_GPIO_TX_SET, gpio_tx_set.u);
				}
			} else if (unblinked_pkts && (ledact.s.pin_sel == 0))
				CSR_MODIFY(c, CAVM_GPIO_BIT_CFGX(
					led_info->activity.pin),
					c.s.tx_oe = 1; c.s.pin_sel =
					CAVM_GPIO_PIN_SEL_E_GPIO_CLKX(0));
		} else {
			if (unblinked_pkts && !led_info->act_state) {
				led_info->act_state = 1;
				led_info->act_status = 1;
				led_info->act_update = 1;
			} else if (!unblinked_pkts && led_info->act_state) {
				led_info->act_state = 0;
				if (led_info->is_act_supported || !link_up)
					led_info->act_status = 0;
				else
					led_info->act_status = 1; // Leave LED on to signfy link
				led_info->act_update = 1;
			}
		}

		led_info->prev_tx_pkt_cnt = cur_tx_pkt_cnt;
		led_info->prev_rx_pkt_cnt = cur_rx_pkt_cnt;
	}
}

uint32_t rpm_get_gpio_led_blink_rate(uint32_t *rate)
{
	*rate = plat_octeontx_bcfg->led_blink_rate;
	return 0;
}

uint32_t rpm_set_gpio_led_blink_rate(uint32_t rate)
{
	uint32_t gpio_clk_divisor;
	cavm_rst_pllx_t rst_pll;

	if (rate < GPIO_LED_ACTIVITY_MIN_RATE || rate > GPIO_LED_ACTIVITY_MAX_RATE) {
		debug_rpm("led-blink-rate: %d outside of supported range %d-%d\n", rate, GPIO_LED_ACTIVITY_MIN_RATE, GPIO_LED_ACTIVITY_MAX_RATE);
		return -1;
	}
	debug_rpm("Setting led blink rate to %d\n", rate);
	plat_octeontx_bcfg->led_blink_rate = rate;

	/* Using constant frequency for the Activity LED blinks.
	 * Maximum number of GPIO clock generators is limited in
	 * HW, so we cannot assign it per port. Using only one GPIO
	 * clock generator to all the ports with a constant blink
	 * frequency. LED blink frequency defaults to 4Hz so that
	 * the blinks can be more or less same for less or high packet
	 * rates.
	 * When there is TX/RX activity in the last second then that
	 * port's GPIO LED will be attached to this GPIO_CLK_GEN(0).
	 * This will make the activity LED to blink at the specified rate.
	 * And if there is no TX/RX activity in the last second then
	 * GPIO LED attachment will be removed if it is already
	 * configured.
	 *
	 * Original equation for the gpio_clk_divisor was:
	 *  sclk = rst_pll.s.cur_mul * 50 * MHZ_TICKS_PER_SEC;
	 *  gpio_clk_divisor = GPIO_LED_ACTVITY_FREQ_HZ * UINT_MAX / sclk;
	 *
	 * Now using DTS entry in milliHertz so simplified the equation
	 * to prevent overflow to be 43 * blink_rate / 500 * PLL_cur_mul
	 */
	rst_pll.u = CSR_READ(CAVM_RST_PLLX(CAVM_RST_PLL_E_SCLK));
	gpio_clk_divisor = 43 * plat_octeontx_bcfg->led_blink_rate  / (500 * rst_pll.s.cur_mul);
	CSR_MODIFY(c, CAVM_GPIO_CLK_GENX(0), c.s.n = gpio_clk_divisor);
	debug_rpm("led_blink_rate: %d - cur_mul: %d - divisor: %d\n",
		plat_octeontx_bcfg->led_blink_rate, rst_pll.s.cur_mul, gpio_clk_divisor);

	return 0;
}
