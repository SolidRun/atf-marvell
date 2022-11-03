/*
 * Copyright (c) 2021 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 **********************license end**************************************/

/* RPM<-> ECP interface for CN10KA */

#include <arch.h>
#include <stdio.h>
#include <debug.h>
#include <string.h>
#include <platform_def.h>
#include <timers.h>
#include <octeontx_common.h>
#include <drivers/delay_timer.h>
#include <plat_board_cfg.h>
#include <eth_intf.h>
#include <sh_fwdata.h>
#include <plat_portm_cfg.h>
#include <eth_link_mgmt_intf.h>
#include <cn10k/csr/cavm-csrs-rst.h>
#include <plat_scfg.h>
#include <rpm.h>
#include <spinlock.h>
#include <plat_mem_alloc.h>

/* define DEBUG_ATF_ETH_LINK_MGMT to enable debug logs */
#undef DEBUG_ATF_ETH_LINK_MGMT
#if defined(MRVL_TF_LOG_MODULE)
#  define debug_eth_link_intf(...) (mrvl_tf_log_modules & MRVL_TF_LOG_MODULE_ETH_LINK_MGMT) ? \
			  tf_log(LOG_MARKER_NOTICE __VA_ARGS__) : (void)0
#elif DEBUG_ATF_ETH_LINK_MGMT
#define debug_eth_link_intf printf
#else
#define debug_eth_link_intf(...) ((void) (0))
#endif

#if defined(MRVL_TF_LOG_MODULE)
#  define debug_ecp_sm_hist(...) (mrvl_tf_log_modules & MRVL_TF_LOG_MODULE_ECP_SM_HIST) ? \
			  tf_log(LOG_MARKER_NOTICE __VA_ARGS__) : (void)0
#else
#  define debug_ecp_sm_hist(...) ((void) (0))
#endif

ecp_link_shared_data_t *ecp_sh_data_global = (void *)ETH_LINK_SHMEM_BASE;
static spinlock_t ecp_print_buf_lock;

int is_ecpcore_running(void)
{
	uint64_t status = CSR_READ(CAVM_RST_COLD_DATAX(1));

	return !((status >> CAVM_RST_SOURCE_E_ECP_WDOG) & 1);
}

ecp_link_mgmt_sh_data_t *ecp_link_get_sh_mem_ptr(int portm_idx)
{
	ecp_link_mgmt_sh_data_t *sh_data;

	sh_data = &(ecp_sh_data_global->link_mgmt_portm[portm_idx]);
	if (!is_ecpcore_running())
		return NULL;

	debug_eth_link_intf("%s: portm_idx %d sh_data %p\n", __func__, portm_idx, sh_data);
	return sh_data;
}

portm_config_t *ecp_link_get_portm_sh_mem_ptr(int portm_idx)
{
	portm_config_t *sh_data;
	if (!is_ecpcore_running())
		return NULL;

	sh_data = &(ecp_sh_data_global->link_mgmt_portm[portm_idx].portm_cfg);
	debug_eth_link_intf("%s: portm_idx %d sh_data %p\n", __func__, portm_idx, sh_data);
	return sh_data;
}

/**
 * Waits for lock to be set to LINK_OWN_NONE
 *
 * @param portm_idx     PORTM to use
 * @param timeout_ms    Time to wait in ms for lock
 * @return 0 on success, -1 on failure/timeout
 */
int ecp_wait_for_lock(int portm_idx, int timeout_ms)
{
	ecp_link_mgmt_sh_data_t *sh_data = ecp_link_get_sh_mem_ptr(portm_idx);
	uint64_t init_time, timeout;
	int ret = -1;

	if (sh_data == NULL) {
		ERROR("%s: SM pointer is NULL\n", __func__);
		return -1;
	}
	debug_eth_link_intf("%s: PORTM%d\n", __func__, portm_idx);

	init_time = clock_get_count(GSER_CLOCK_TIME);
	timeout = init_time + timeout_ms *
		clock_get_rate(GSER_CLOCK_TIME)/1000;

	while (clock_get_count(GSER_CLOCK_TIME)
	       < timeout) {
		if (sh_data->lock == LINK_OWN_NONE) {
			ret = 0;
			break;
		}
		udelay(100);
	}

	if (ret == 0)
		debug_eth_link_intf("%s: PORTM%d Lock available, time: %lld ms\n",
				    __func__, portm_idx,
				    (clock_get_count(GSER_CLOCK_TIME) - init_time) *
				    1000 / clock_get_rate(GSER_CLOCK_TIME));
	else
		debug_eth_link_intf("%s: PORTM%d Lock not available\n",
				    __func__, portm_idx);

	return ret;
}

/**
 * Waits for ECP to clear command ack
 *
 * @param portm_idx     PORTM to use
 * @param timeout_ms    Time to wait in ms for lock
 * @return 0 on success, -1 on failure/timeout
 */
int ecp_wait_for_cmd_ack_to_clr(int portm_idx, int timeout_ms)
{
	ecp_link_mgmt_sh_data_t *sh_data = ecp_link_get_sh_mem_ptr(portm_idx);
	uint64_t init_time, timeout;
	int ret = -1;

	if (sh_data == NULL) {
		ERROR("%s: SM pointer is NULL\n", __func__);
		return -1;
	}
	debug_eth_link_intf("%s: PORTM%d\n", __func__, portm_idx);

	init_time = clock_get_count(GSER_CLOCK_TIME);
	timeout = init_time + timeout_ms *
		clock_get_rate(GSER_CLOCK_TIME)/1000;

	while (clock_get_count(GSER_CLOCK_TIME)
	       < timeout) {
		if (!sh_data->ack) {
			ret = 0;
			break;
		}
		udelay(100);
	}

	if (ret == 0)
		debug_eth_link_intf("%s: PORTM%d ACK cleared, time: %lld ms\n",
				    __func__, portm_idx,
				    (clock_get_count(GSER_CLOCK_TIME) - init_time) *
				    1000 / clock_get_rate(GSER_CLOCK_TIME));
	else
		debug_eth_link_intf("%s: PORTM%d ACK did not clear\n",
				    __func__, portm_idx);

	return ret;
}

static void ecp_link_update_sgmii_speed_dplx(int portm_idx)
{
	ecp_link_mgmt_sh_data_t *sh_data = ecp_link_get_sh_mem_ptr(portm_idx);
	portm_config_t *portm = &(plat_octeontx_bcfg->portm_cfg[portm_idx]);
	int idx, rpm_id, lmac_id, num_lmacs;
	rpm_config_t *rpm;

	rpm_id = portm->mac_num;
	lmac_id = portm->mac_lane;
	num_lmacs = portm->num_lmacs;
	rpm = &(plat_octeontx_bcfg->rpm_cfg[rpm_id]);

	for (idx = 0; idx < num_lmacs; idx++) {
		rpm_lmac_config_t *lmac;

		lmac = &rpm->lmac_cfg[lmac_id + idx];
		sh_data->lpcs_speed_dplx[idx].an_disable = lmac->an_disable;
		sh_data->lpcs_speed_dplx[idx].mac_speed = lmac->sgmii_speed;
		sh_data->lpcs_speed_dplx[idx].mac_duplex = lmac->sgmii_duplex;
	}
}

void ecp_link_init_shmem(void)
{
	portm_config_t *portm, *sh_portm;
	ecp_link_mgmt_sh_data_t *sh_link_mgmt_data;

	debug_eth_link_intf("%s\n", __func__);
	debug_eth_link_intf("sizeof = %d\n", (int)sizeof(ecp_link_shared_data_t));

	/* Initialize shared memory for each LMAC */
	memset(ecp_sh_data_global, 0, sizeof(ecp_link_shared_data_t));
	ecp_sh_data_global->size = sizeof(ecp_link_shared_data_t);
	ecp_sh_data_global->debug_ena = rpm_debug_log_state();

	debug_eth_link_intf("%s: ecp_sh_data_global %p size %d intf_rev 0x%x\n", __func__,
			ecp_sh_data_global, ecp_sh_data_global->size, ecp_sh_data_global->intf_rev);

	for (int portm_idx = 0; portm_idx < plat_octeontx_scfg->portm_count;) {
		portm = &(plat_octeontx_bcfg->portm_cfg[portm_idx]);

		if (!portm->port_enable) {
			portm_idx++;
			continue;
		}

		sh_link_mgmt_data = ecp_link_get_sh_mem_ptr(portm_idx);
		if (sh_link_mgmt_data == NULL) {
			ERROR("%s: SM pointer is NULL\n", __func__);
			return;
		}

		sh_portm = ecp_link_get_portm_sh_mem_ptr(portm_idx);
		if (sh_portm == NULL) {
			ERROR("%s: SM pointer is NULL\n", __func__);
			return;
		}

		/* Copy Portm data to shared memory */
		sh_link_mgmt_data->portm_idx = portm_idx;
		sh_link_mgmt_data->lmac_id = portm->mac_lane;
		*sh_portm = *portm;
		sh_portm->ap_802_3_adv = portm->ap_802_3_adv;

		switch (portm->pcs_type) {
		case PORTM_PCS_1000BASE_X:
		case PORTM_PCS_QSGMII:
		case PORTM_PCS_USGMII:
		case PORTM_PCS_USXGMII:
			ecp_link_update_sgmii_speed_dplx(portm_idx);
			break;
		default:
			break;
		}

		debug_eth_link_intf("%s: PORTM:%d mac_type:%d, mac_id:%d portm_mode %d\n", __func__,
				    portm_idx,
				    sh_portm->mac_type,
				    sh_portm->mac_num,
				    sh_portm->portm_mode);

		portm_idx += portm->portms_used;
	}

	/* Program interface rev last. */
	ecp_sh_data_global->intf_rev = 0xABCD0000;
}

int ecp_send_link_req(int portm_idx, int rpm_id, int lmac_id, int req_id, rpm_lmac_context_t *lmac_ctx)
{
	ecp_link_mgmt_sh_data_t *sh_data = ecp_link_get_sh_mem_ptr(portm_idx);
	portm_config_t *portm, *sh_portm;

	debug_eth_link_intf("%s: %d:%d portm_idx %d\n", __func__, rpm_id, lmac_id, portm_idx);

	if (sh_data == NULL) {
		ERROR("%s: SM pointer is NULL\n", __func__);
		return -1;
	}

	/* Get lmac index from PORTM to retrieve FEC and other properties */
	portm = &(plat_octeontx_bcfg->portm_cfg[portm_idx]);

	if (ecp_wait_for_lock(portm_idx, ECP_LINK_LOCK_WAIT_MS)) {
		debug_eth_link_intf("%s PORTM%d lock %d not available for AP\n",
				    __func__, portm_idx,
				    sh_data->lock);
		return -1;
	}

	sh_data->lock = LINK_OWN_AP;
	/* If ack bit is clear, post the request
	 * ECP will clear the ack bit when the
	 * request is processed
	 */
	if (!sh_data->ack) {
		debug_eth_link_intf("%s: PORTM%d: sending req_id %d\n",
				    __func__, portm_idx, req_id);
		/* Update lmac_id in shared data */
		sh_data->lmac_id = lmac_id;
		sh_data->link_req.req_id = req_id;
		sh_data->portm_cfg.fec = portm->fec;
		/* Update the new PORTM mode to SM for certain requests */
		if ((req_id == ECP_LINK_REQ_MODE_CHANGE)
		    || (req_id == ECP_LINK_REQ_FEC_CHANGE)) {
			sh_portm = ecp_link_get_portm_sh_mem_ptr(portm_idx);
			if (sh_portm == NULL) {
				ERROR("%s: SM pointer is NULL\n", __func__);
				return -1;
			}
			/* Update Shared Portm struct to match ATF portm struct */
			*sh_portm = *portm;
			sh_portm->ap_802_3_adv = portm->ap_802_3_adv;
			/* Initialize the 802.3AP port config data */
			sh_data->portm_cfg_aneg.portm_mode = portm->portm_mode;
			sh_data->portm_cfg_aneg.pcs_type = portm->pcs_type;
			sh_data->portm_cfg_aneg.portms_used = portm->portms_used;
			sh_data->portm_cfg_aneg.fec = portm->fec;
			sh_data->portm_cfg_aneg.gser_numlanes = portm->gser_numlanes;
			/* Set the req_in_prog to 1 (Request being made) */
			sh_data->req_in_prog[lmac_id] = 1;
		} else if ((req_id == ECP_LINK_REQ_LOOPBACK_STATE_CHANGE)
			   || (req_id == ECP_LINK_REQ_TXEQ_CHANGE)
			   || (req_id == ECP_LINK_REQ_PRBS_STATE_CHANGE)) {
			sh_portm = ecp_link_get_portm_sh_mem_ptr(portm_idx);

			if (sh_portm == NULL) {
				ERROR("%s: SM pointer is NULL\n", __func__);
				return -1;
			}
			/* Update Shared Portm struct to match ATF portm struct */
			*sh_portm = *portm;
			/* AN/LT does not need to be updated for PRBS/Loopback */
			/* Set the req_in_prog to 1 (Request being made) */
			sh_data->req_in_prog[lmac_id] = 1;
		}

		sh_data->ack = 1;
		sh_data->lock = LINK_OWN_NONE;
	} else {
		debug_eth_link_intf("%s: PORTM%d request in progress\n", __func__, portm_idx);
		sh_data->lock = LINK_OWN_NONE;
		return -1;
	}

	/* ECP will clear ACK prior to releasing
	 * lock if a valid request is sent.
	 * Wait for request to be processed.
	 */
	if (ecp_wait_for_cmd_ack_to_clr(portm_idx, ECP_LINK_CMD_ACK_WAIT_MS)) {
		debug_eth_link_intf("%s PORTM%d ECP did not clear ACK\n",
				    __func__, portm_idx);
		return -1;
	}

	return 0;
}

static void _dump_state_history(ecp_state_log_t *ecp_logs, int lmac_id, int count,
				int portm_idx, const char *msg)
{
	int idx, num = 0;
	uint64_t first_time = 0;

	debug_ecp_sm_hist("[PORTM%d]: Last ECP state transitions:\n\t(Reason: %s)\n", portm_idx, msg);

	/* Find timestamp for first entry with matching LMAC_ID */
	for (idx = 0; idx < count; idx++) {
		ecp_state_log_t *log_entry = &ecp_logs[idx];

		/* Only print entries with the same lmac_id */
		if (lmac_id == log_entry->lmac_id) {
			first_time = log_entry->timestamp;
			break;
		}
	}

	/* Print Link Up Transition Banner */
	debug_ecp_sm_hist("[PORTM%d]: Link Up Transitions\n", portm_idx);
	debug_ecp_sm_hist("%-2s  %-11s  %-8s  %-4s  %-25s  %-15s  %-11s  %-10s  %-7s  %-6s  %-5s\n",
			  "#", "Time(us)", "MAC_TYPE", "LMAC", "Link State",
			  "Portm Mode", "FEC", "Sig Detect", "Link Up",
			  "Duplex", "Speed");

	for (idx = 0; idx < count; idx++) {
		ecp_state_log_t *log_entry = &ecp_logs[idx];

		/* Only print entries with the same lmac_id */
		if (lmac_id != log_entry->lmac_id)
			continue;

		debug_ecp_sm_hist("%-2d  %-11llu  %-8s  %-4d  %-25s  %-15s  %-11s  %-10u  %-7u  %-6u  %-5u\n",
				  num,
				  (num == 0) ? 0 : log_entry->timestamp - first_time,
				  cn10k_portm_mac_type_to_cfg_str(log_entry->mac_type),
				  log_entry->lmac_id,
				  cn10k_eth_link_state_to_str(log_entry->link_rsp.link_state),
				  cn10k_portm_mode_to_cfg_str(log_entry->portm_mode),
				  cn10k_portm_fec_type_to_str(log_entry->fec),
				  log_entry->sig_detect,
				  log_entry->link_rsp.ecp_link_state.s.link_up,
				  log_entry->link_rsp.ecp_link_state.s.duplex,
				  log_entry->link_rsp.ecp_link_state.s.speed);
		num++;
	}

	/* Print Link Error Transition Banner */
	debug_ecp_sm_hist("[PORTM%d]: Link Error Transitions\n", portm_idx);
	debug_ecp_sm_hist("%-2s  %-11s  %-8s  %-4s  %-25s  %-15s  %-25s  %-10s  %-14s  %-13s\n",
			  "#", "Time(us)", "MAC_TYPE", "LMAC", "Link State",
			  "Portm Mode", "Error Type", "Error Cnt", "Train Time(ms)",
			  "Link Time(ms)");

	num = 0;
	for (idx = 0; idx < count; idx++) {
		ecp_state_log_t *log_entry = &ecp_logs[idx];

		/* Only print entries with the same lmac_id */
		if (lmac_id != log_entry->lmac_id)
			continue;

		debug_ecp_sm_hist("%-2d  %-11llu  %-8s  %-4u  %-25s  %-15s  %-25s  %-10u  %-14u  %-13u\n",
				  num,
				  (num == 0) ? 0 : log_entry->timestamp - first_time,
				  cn10k_portm_mac_type_to_cfg_str(log_entry->mac_type),
				  log_entry->lmac_id,
				  cn10k_eth_link_state_to_str(log_entry->link_rsp.link_state),
				  cn10k_portm_mode_to_cfg_str(log_entry->portm_mode),
				  cn10k_link_error_to_str(log_entry->link_rsp.ecp_link_state.s.error_type),
				  log_entry->link_rsp.ecp_link_dbg.err_cnt,
				  log_entry->link_rsp.ecp_link_dbg.train_time,
				  log_entry->link_rsp.ecp_link_dbg.lnk_time);
		num++;
	}

	/* Print Link Request Transition Banner */
	debug_ecp_sm_hist("[PORTM%d]: Link Request Transitions\n", portm_idx);
	debug_ecp_sm_hist("%-2s  %-11s  %-8s  %-4s  %-25s  %-21s  %-8s  %-7s  %-8s  %-6s  %-7s  %-7s\n",
			  "#", "Time(us)", "MAC_TYPE", "LMAC", "Link State",
			  "Req ID", "SFP Pres", "SFP Mod", "PHY Pres",
			  "AN_Dis", "MAC_Spd", "MAC_Dup");

	num = 0;
	for (idx = 0; idx < count; idx++) {
		ecp_state_log_t *log_entry = &ecp_logs[idx];

		/* Only print entries with the same lmac_id */
		if (lmac_id != log_entry->lmac_id)
			continue;

		debug_ecp_sm_hist("%-2d  %-11llu  %-8s  %-4u  %-25s  %-21s  %-8u  %-7u  %-8u  %-6u  %-7u  %-7u\n",
				  num,
				  (num == 0) ? 0 : log_entry->timestamp - first_time,
				  cn10k_portm_mac_type_to_cfg_str(log_entry->mac_type),
				  log_entry->lmac_id,
				  cn10k_eth_link_state_to_str(log_entry->link_rsp.link_state),
				  cn10k_ecp_link_req_to_str(log_entry->link_req.req_id),
				  log_entry->link_req.sfp_slot_present,
				  log_entry->link_req.sfp_mod_stat,
				  log_entry->link_req.phy_present,
				  log_entry->lpcs_spd_dplx.an_disable,
				  log_entry->lpcs_spd_dplx.mac_speed,
				  log_entry->lpcs_spd_dplx.mac_duplex);
		num++;
	}
}

int ecp_dump_state_history(int portm_idx, int lmac_id, const char *msg)
{
	uint64_t timeout;
	uint32_t *tail;
	uint32_t head;
	int idx, count;
	ecp_link_mgmt_sh_data_t *sh_data;
	ecp_state_log_t *ecp_print_buf;

#if defined(MRVL_TF_LOG_MODULE)
	/* Check if feature is enabled, if not, there is no point to proceed */
	if (!(mrvl_tf_log_modules & MRVL_TF_LOG_MODULE_ECP_SM_HIST))
		return 0;
#else
	return 0;
#endif

	sh_data = ecp_link_get_sh_mem_ptr(portm_idx);

	if (sh_data == NULL) {
		ERROR("%s: SM pointer is NULL\n", __func__);
		return -1;
	}

	timeout = clock_get_count(GSER_CLOCK_TIME) +
		ECP_HIST_TOUT_MS * clock_get_rate(GSER_CLOCK_TIME) / 1000;

	while (clock_get_count(GSER_CLOCK_TIME) < timeout) {
		if (sh_data->history.sl_owner == LINK_OWN_NONE) {
			sh_data->history.sl_owner = LINK_OWN_AP;
			break;
		}
		udelay(100);
	}

	if (sh_data->history.sl_owner != LINK_OWN_AP) {
		debug_ecp_sm_hist("%s PORTM%d could not aquire ECP history lock\n",
				    __func__, portm_idx);
		return -1;
	}

	tail = &sh_data->history.sl_tail;
	head = sh_data->history.sl_head;

	count = (*tail <= head) ? head - *tail : ECP_STS_ENTRIES_MAX - (*tail - head);
	if (count <= 0) {
		sh_data->history.sl_owner = LINK_OWN_NONE;
		return 0;
	}

	/*
	 * Need to acquire lock before calling dynamic allocation
	 * as octeontx_malloc is not SMP safe.
	 */
	spin_lock(&ecp_print_buf_lock);
	ecp_print_buf = (ecp_state_log_t *)octeontx_malloc(
			count * sizeof(ecp_state_log_t));
	spin_unlock(&ecp_print_buf_lock);

	if (!ecp_print_buf) {
		ERROR("%s: Could not allocate memory for dumping ECP logs\n",
			__func__);
		sh_data->history.sl_owner = LINK_OWN_NONE;
		return -1;
	}

	idx = 0;
	while (idx < count) {
		ecp_state_log_t *in_entry = &sh_data->history.shared_logs[*tail];
		ecp_state_log_t *out_entry = &ecp_print_buf[idx++];

		memcpy(out_entry, in_entry, sizeof(*in_entry));
		*tail = (*tail + 1) & (ECP_STS_ENTRIES_MAX - 1);
	}

	sh_data->history.sl_owner = LINK_OWN_NONE;
	_dump_state_history(ecp_print_buf, lmac_id, count, portm_idx, msg);

	spin_lock(&ecp_print_buf_lock);
	octeontx_free(ecp_print_buf);
	spin_unlock(&ecp_print_buf_lock);

	return 0;
}

/**
 * Gets the ECP Portm config data from 802.3AP negotiation
 *
 * @param portm_idx         PORTM to use
 * @param *portm_cfg_aneg   802.3AP portm config
 * @return 1 Failed to get lock, 0 = Success
 */
int ecp_get_aneg_portm_cfg(int portm_idx, portm_config_aneg_t *portm_cfg_aneg)
{
	ecp_link_mgmt_sh_data_t *sh_data = ecp_link_get_sh_mem_ptr(portm_idx);

	debug_eth_link_intf("%s: PORTM%d\n", __func__, portm_idx);

	if (sh_data == NULL) {
		ERROR("%s: SM pointer is NULL\n", __func__);
		return -1;
	}

	if (ecp_wait_for_lock(portm_idx, ECP_LINK_LOCK_WAIT_MS)) {
		debug_eth_link_intf("%s PORTM%d lock %d not available for AP\n",
				    __func__, portm_idx,
				    sh_data->lock);
		return -1;
	}

	sh_data->lock = LINK_OWN_AP;

	*portm_cfg_aneg = sh_data->portm_cfg_aneg;
	sh_data->lock = LINK_OWN_NONE;

	return 0;
}

/**
 * Sets the ECP req_in_prog
 *
 * @param portm_idx     PORTM to use
 * @param lmac_id
 * @param state         Value to set req_in_prog
 * @return 1 Failed to send, 0 = Success
 */
unsigned int ecp_set_req_in_prog(int portm_idx, int lmac_id, unsigned int state)
{
	ecp_link_mgmt_sh_data_t *sh_data = ecp_link_get_sh_mem_ptr(portm_idx);

	if (sh_data == NULL) {
		ERROR("%s: SM pointer is NULL\n", __func__);
		return 1;
	}
	debug_eth_link_intf("%s:PORTM%d\n", __func__, portm_idx);

	if (ecp_wait_for_lock(portm_idx, ECP_LINK_LOCK_WAIT_MS)) {
		debug_eth_link_intf("%s PORTM%d lock %d not available for AP\n",
				    __func__, portm_idx,
				    sh_data->lock);
		return 1;
	}

	sh_data->lock = LINK_OWN_AP;
	sh_data->req_in_prog[lmac_id] = state;
	sh_data->lock = LINK_OWN_NONE;

	return 0;
}

/**
 * Returns status of ECP req_in_prog
 *
 * @param portm_idx     PORTM to use
 * @param lmac_id
 * @return 0 request done, 1 not done
 */
unsigned int ecp_get_req_in_prog(int portm_idx, int lmac_id)
{
	unsigned int req_in_prog = 1;

	ecp_link_mgmt_sh_data_t *sh_data = ecp_link_get_sh_mem_ptr(portm_idx);

	if (sh_data == NULL) {
		ERROR("%s: SM pointer is NULL\n", __func__);
		return 1;
	}
	debug_eth_link_intf("%s:PORTM%d\n", __func__, portm_idx);

	if (ecp_wait_for_lock(portm_idx, ECP_LINK_LOCK_WAIT_MS)) {
		debug_eth_link_intf("%s PORTM%d lock %d not available for AP\n",
				    __func__, portm_idx,
				    sh_data->lock);
		return 1;
	}

	sh_data->lock = LINK_OWN_AP;
	req_in_prog = sh_data->req_in_prog[lmac_id];
	sh_data->lock = LINK_OWN_NONE;

	return req_in_prog;
}

unsigned int ecp_get_link_state(int portm_idx, int lmac_id, ecp_link_state_t *link_state, int *sig_detect)
{
	int state = 0;

	ecp_link_mgmt_sh_data_t *sh_data = ecp_link_get_sh_mem_ptr(portm_idx);

	if (sh_data == NULL) {
		ERROR("%s: SM pointer is NULL\n", __func__);
		return ETH_LINK_STATE_NO_STATE;
	}
	debug_eth_link_intf("%s:PORTM%d\n", __func__, portm_idx);

	if (ecp_wait_for_lock(portm_idx, ECP_LINK_LOCK_WAIT_MS)) {
		debug_eth_link_intf("%s PORTM%d lock %d not available for AP\n",
				    __func__, portm_idx,
				    sh_data->lock);
		return ETH_LINK_STATE_NO_STATE;
	}

	sh_data->lock = LINK_OWN_AP;

	if (!sh_data->ack) {
		state = sh_data->link_rsp[lmac_id].link_state;
		link_state->s.link_up = sh_data->link_rsp[lmac_id].ecp_link_state.s.link_up;
		link_state->s.duplex = sh_data->link_rsp[lmac_id].ecp_link_state.s.duplex;
		link_state->s.speed = sh_data->link_rsp[lmac_id].ecp_link_state.s.speed;
		link_state->s.fec = sh_data->link_rsp[lmac_id].ecp_link_state.s.fec;
		link_state->s.error_type = sh_data->link_rsp[lmac_id].ecp_link_state.s.error_type;
		*sig_detect = sh_data->sig_detect;
		sh_data->lock = LINK_OWN_NONE;
		/* FIXME : update other parameters */
	} else {
		sh_data->lock = LINK_OWN_NONE;
		return ETH_LINK_STATE_NO_STATE;
	}

	debug_eth_link_intf("%s: portm_idx %d state %d link_up %d speed %d fec %d error type %d sig_detect %d\n",
				__func__, portm_idx, state,
				link_state->s.link_up, link_state->s.speed,
				link_state->s.fec,
				link_state->s.error_type,
				*sig_detect);

	return state;
}

unsigned int ecp_get_intf_rev(int portm_idx)
{
	unsigned int ecp_rev = 0;
	ecp_link_mgmt_sh_data_t *sh_data = ecp_link_get_sh_mem_ptr(portm_idx);

	if (sh_data == NULL) {
		ERROR("%s: SM pointer is NULL\n", __func__);
		return -1;
	}

	debug_eth_link_intf("%s: %d\n", __func__, portm_idx);

	if (ecp_wait_for_lock(portm_idx, ECP_LINK_LOCK_WAIT_MS)) {
		debug_eth_link_intf("%s PORTM%d lock %d not available for AP\n",
				    __func__, portm_idx,
				    sh_data->lock);
		return -1;
	} else
		sh_data->lock = LINK_OWN_AP;

	ecp_rev = ecp_sh_data_global->intf_rev;
	sh_data->lock = LINK_OWN_NONE;
	return ecp_rev;
}

unsigned int ecp_update_phy_link_state(int portm_idx, int lmac_id, rpm_link_state_t *phy_link_state)
{
	ecp_link_mgmt_sh_data_t *sh_data = ecp_link_get_sh_mem_ptr(portm_idx);

	if (sh_data == NULL) {
		ERROR("%s: SM pointer is NULL\n", __func__);
		return -1;
	}

	debug_eth_link_intf("%s: %d\n", __func__, portm_idx);

	if (ecp_wait_for_lock(portm_idx, ECP_LINK_LOCK_WAIT_MS)) {
		debug_eth_link_intf("%s PORTM%d lock %d not available for AP\n",
				    __func__, portm_idx,
				    sh_data->lock);
		return -1;
	} else
		sh_data->lock = LINK_OWN_AP;

	sh_data->link_req.phy_present = 1;
	sh_data->link_req.phy_link_state[lmac_id].s.link_up = phy_link_state->s.link_up;
	sh_data->link_req.phy_link_state[lmac_id].s.duplex = phy_link_state->s.full_duplex;
	sh_data->link_req.phy_link_state[lmac_id].s.speed = phy_link_state->s.speed;

	sh_data->lock = LINK_OWN_NONE;

	return 0;
}

unsigned int ecp_update_sfp_mod_state(int portm_idx, int mod_stat)
{
	ecp_link_mgmt_sh_data_t *sh_data = ecp_link_get_sh_mem_ptr(portm_idx);

	debug_eth_link_intf("%s: %d\n", __func__, portm_idx);

	if (sh_data == NULL) {
		ERROR("%s: SM pointer is NULL\n", __func__);
		return -1;
	}

	if (ecp_wait_for_lock(portm_idx, ECP_LINK_LOCK_WAIT_MS)) {
		debug_eth_link_intf("%s PORTM%d lock %d not available for AP\n",
				    __func__, portm_idx,
				    sh_data->lock);
		return -1;
	} else
		sh_data->lock = LINK_OWN_AP;

	/* If SFP is enabled, update the SFP status in SM */
	sh_data->link_req.sfp_slot_present = 1;
	sh_data->link_req.sfp_mod_stat = mod_stat;
	debug_eth_link_intf("%s: portm_idx %d sfp status %d\n", __func__, portm_idx,
				sh_data->link_req.sfp_mod_stat);

	sh_data->lock = LINK_OWN_NONE;

	return 0;
}

/**
 * Convert ECP ETH Link state into a string value
 *
 * @param link_state: ECP ETH Link state to convert
 * @return: ECP ETH Link state string
 */
const char *cn10k_eth_link_state_to_str(ecp_link_state_enum_t link_state)
{
	const char *str;

#define ETH_LINK_STATE_CASE(m) case m: str = ((const char *)#m)+15

	switch (link_state) {
	ETH_LINK_STATE_CASE(ETH_LINK_STATE_NO_STATE);
	break;
	ETH_LINK_STATE_CASE(ETH_LINK_STATE_LINK_BRINGUP_FIRST);
	break;
	ETH_LINK_STATE_CASE(ETH_LINK_STATE_LINK_BRINGUP);
	break;
	ETH_LINK_STATE_CASE(ETH_LINK_STATE_LINK_BRINGDOWN);
	break;
	ETH_LINK_STATE_CASE(ETH_LINK_STATE_LINK_FEC_CHANGE);
	break;
	ETH_LINK_STATE_CASE(ETH_LINK_STATE_MODE_CHANGE);
	break;
	ETH_LINK_STATE_CASE(ETH_LINK_STATE_RST_PU_PLL);
	break;
	ETH_LINK_STATE_CASE(ETH_LINK_STATE_PLL_RDY_FIRST_LOOP);
	break;
	ETH_LINK_STATE_CASE(ETH_LINK_STATE_PLL_RDY);
	break;
	ETH_LINK_STATE_CASE(ETH_LINK_STATE_SPEED_CHANGE_FINAL);
	break;
	ETH_LINK_STATE_CASE(ETH_LINK_STATE_AN_RESTART);
	break;
	ETH_LINK_STATE_CASE(ETH_LINK_STATE_REMOTE_FAULT);
	break;
	ETH_LINK_STATE_CASE(ETH_LINK_STATE_EXT_PHY_STATUS);
	break;
	ETH_LINK_STATE_CASE(ETH_LINK_STATE_RX_SIGNAL_FIRST_LOOP);
	break;
	ETH_LINK_STATE_CASE(ETH_LINK_STATE_RX_SIGNAL);
	break;
	ETH_LINK_STATE_CASE(ETH_LINK_STATE_RX_INIT_FIRST_LOOP);
	break;
	ETH_LINK_STATE_CASE(ETH_LINK_STATE_RX_INIT);
	break;
	ETH_LINK_STATE_CASE(ETH_LINK_STATE_RX_TRAIN_FIRST);
	break;
	ETH_LINK_STATE_CASE(ETH_LINK_STATE_RX_TRAIN_IN_PROGRESS);
	break;
	ETH_LINK_STATE_CASE(ETH_LINK_STATE_AN_START);
	break;
	ETH_LINK_STATE_CASE(ETH_LINK_STATE_AN_SECOND_STAGE);
	break;
	ETH_LINK_STATE_CASE(ETH_LINK_STATE_AN_FIRST_LOOP);
	break;
	ETH_LINK_STATE_CASE(ETH_LINK_STATE_AN_IN_PROGRESS);
	break;
	ETH_LINK_STATE_CASE(ETH_LINK_STATE_LT_FIRST_LOOP);
	break;
	ETH_LINK_STATE_CASE(ETH_LINK_STATE_LT_IN_PROGRESS);
	break;
	ETH_LINK_STATE_CASE(ETH_LINK_STATE_LINK_FIRST_LOOP);
	break;
	ETH_LINK_STATE_CASE(ETH_LINK_STATE_LINK_IN_PROGRESS);
	break;
	ETH_LINK_STATE_CASE(ETH_LINK_STATE_LINK_UP);
	break;
	ETH_LINK_STATE_CASE(ETH_LINK_STATE_LINK_STOPPED);
	break;
	ETH_LINK_STATE_CASE(ETH_LINK_STATE_LBCK_CHANGE);
	break;
	ETH_LINK_STATE_CASE(ETH_LINK_STATE_PRBS_CHANGE);
	break;
	ETH_LINK_STATE_CASE(ETH_LINK_STATE_SERDES_TEST_STATE);
	break;
	ETH_LINK_STATE_CASE(ETH_LINK_STATE_TXEQ_UPDATE_FIRST);
	break;
	ETH_LINK_STATE_CASE(ETH_LINK_STATE_TXEQ_UPDATE_IN_PROGRESS);
	break;
	ETH_LINK_STATE_CASE(ETH_LINK_STATE_TXEQ_ACK_CLR_FIRST);
	break;
	ETH_LINK_STATE_CASE(ETH_LINK_STATE_TXEQ_ACK_CLR_IN_PROGRESS);
	break;
	ETH_LINK_STATE_CASE(ETH_LINK_STATE_LINK_INH_TIMER_WAIT_FIRST);
	break;
	ETH_LINK_STATE_CASE(ETH_LINK_STATE_LINK_INH_TIMER_WAIT);
	break;
	ETH_LINK_STATE_CASE(ETH_LINK_STATE_AN_ENABLE);
	break;
	ETH_LINK_STATE_CASE(ETH_LINK_STATE_AN_TX_DISABLE);
	break;
	ETH_LINK_STATE_CASE(ETH_LINK_STATE_AN_LINK_STAT_CK);
	break;
	ETH_LINK_STATE_CASE(ETH_LINK_STATE_AN_PARALLEL_FLT);
	break;
	ETH_LINK_STATE_CASE(ETH_LINK_STATE_AN_ABILITY_DET);
	break;
	ETH_LINK_STATE_CASE(ETH_LINK_STATE_AN_ACK_DETECT);
	break;
	ETH_LINK_STATE_CASE(ETH_LINK_STATE_AN_COMPLETE_ACK);
	break;
	ETH_LINK_STATE_CASE(ETH_LINK_STATE_AN_NP_WAIT);
	break;
	ETH_LINK_STATE_CASE(ETH_LINK_STATE_AN_GOOD_CK);
	break;
	ETH_LINK_STATE_CASE(ETH_LINK_STATE_AN_GOOD);
	break;
	ETH_LINK_STATE_CASE(ETH_LINK_STATE_AN_SERDES_WAIT);
	break;
	ETH_LINK_STATE_CASE(ETH_LINK_STATE_SFP_MODULE_UNPLUGGED);
	break;
	ETH_LINK_STATE_CASE(ETH_LINK_STATE_GSERM_FAILURE);
	break;
	ETH_LINK_STATE_CASE(ETH_LINK_STATE_TXEQ_CHANGE);
	break;
	ETH_LINK_STATE_CASE(ETH_LINK_STATE_TXEQ_FAILURE);
	break;
	ETH_LINK_STATE_CASE(ETH_LINK_STATE_RX_INIT_WAIT);
	break;
	ETH_LINK_STATE_CASE(ETH_LINK_STATE_RX_TRAIN_WAIT);
	break;

	default:
		WARN("%s: unrecognized ECP link state %d\n", __func__, link_state);
		str = "UNKNOWN_ETH_LINK_STATE_VALUE";
		break;
	}
	return str;
}

/**
 * Convert Link Error type into a string value
 *
 * @param link_error: Link error to convert
 * @return: Link error string
 */
const char *cn10k_link_error_to_str(link_err_type_t link_error)
{
	const char *str = NULL;

#define LINK_ERROR_CASE(m) case m: str = ((const char *)#m)+9

	switch (link_error) {
	LINK_ERROR_CASE(LINK_ERR_NONE);
	break;
	LINK_ERROR_CASE(LINK_ERR_LMAC_NOT_ENABLED);
	break;
	LINK_ERROR_CASE(LINK_ERR_LMAC_MODE_INVALID);
	break;
	LINK_ERROR_CASE(LINK_ERR_REQUEST_ID_INVALID);
	break;
	LINK_ERROR_CASE(LINK_ERR_PREV_ACK_NOT_CLEAR);
	break;
	LINK_ERROR_CASE(LINK_ERR_PHY_LINK_DOWN);
	break;
	LINK_ERROR_CASE(LINK_ERR_PCS_RESET_FAIL);
	break;
	LINK_ERROR_CASE(LINK_ERR_AN_CPT_FAIL);
	break;
	LINK_ERROR_CASE(LINK_ERR_TX_NOT_IDLE);
	break;
	LINK_ERROR_CASE(LINK_ERR_RX_NOT_IDLE);
	break;
	LINK_ERROR_CASE(LINK_ERR_SPUX_BR_BLKLOCK_FAIL);
	break;
	LINK_ERROR_CASE(LINK_ERR_SPUX_RX_ALIGN_FAIL);
	break;
	LINK_ERROR_CASE(LINK_ERR_SPUX_TX_FAULT);
	break;
	LINK_ERROR_CASE(LINK_ERR_SPUX_RX_FAULT);
	break;
	LINK_ERROR_CASE(LINK_ERR_SPUX_RESET_FAIL);
	break;
	LINK_ERROR_CASE(LINK_ERR_SPUX_AN_RESET_FAIL);
	break;
	LINK_ERROR_CASE(LINK_ERR_SPUX_USX_AN_RESET_FAIL);
	break;
	LINK_ERROR_CASE(LINK_ERR_SMUX_RX_LINK_NOT_OK);
	break;
	LINK_ERROR_CASE(LINK_ERR_PCS_LINK_FAIL);
	break;
	LINK_ERROR_CASE(LINK_ERR_TRAINING_FAIL);
	break;
	LINK_ERROR_CASE(LINK_ERR_RX_EQU_FAIL);
	break;
	LINK_ERROR_CASE(LINK_ERR_SPUX_BER_FAIL);
	break;
	LINK_ERROR_CASE(LINK_ERR_SPUX_RSFEC_ALGN_FAIL);
	break;
	LINK_ERROR_CASE(LINK_ERR_SPUX_MARKER_LOCK_FAIL);
	break;
	LINK_ERROR_CASE(LINK_ERR_SET_FEC_INVALID);
	break;
	LINK_ERROR_CASE(LINK_ERR_SET_FEC_FAIL);
	break;
	LINK_ERROR_CASE(LINK_ERR_MODULE_INVALID);
	break;
	LINK_ERROR_CASE(LINK_ERR_MODULE_NOT_PRESENT);
	break;
	LINK_ERROR_CASE(LINK_ERR_SPEED_CHANGE_INVALID);
	break;
	LINK_ERROR_CASE(LINK_ERR_SERDES_RX_NO_SIGNAL);
	break;
	LINK_ERROR_CASE(LINK_ERR_SERDES_CPRI_PARAM_INVALID);
	break;
	LINK_ERROR_CASE(LINK_ERR_ECP_LINK_REQ_FAIL);
	break;
	LINK_ERROR_CASE(LINK_ERR_LPCS_INTERNAL_LBK_INVALID);
	break;
	LINK_ERROR_CASE(LINK_ERR_RCV_LNK_FAIL);
	break;
	LINK_ERROR_CASE(LINK_ERR_LOCAL_FLT_FAIL);
	break;
	LINK_ERROR_CASE(LINK_ERR_BLKS_ERR_FAIL);
	break;
	LINK_ERROR_CASE(LINK_ERR_BER_CNT_FAIL);
	break;
	LINK_ERROR_CASE(LINK_ERR_REMOTE_FLT_FAIL);
	break;
	LINK_ERROR_CASE(LINK_ERR_STABLE_TIMEOUT);
	break;
	LINK_ERROR_CASE(LINK_ERR_RX_TRAIN_SW_TIMEOUT);
	break;
	LINK_ERROR_CASE(LINK_ERR_RX_TRAIN_SERDES_TIMEOUT);
	break;
	LINK_ERROR_CASE(LINK_ERR_TXRX_TRAIN_SW_TIMEOUT);
	break;
	LINK_ERROR_CASE(LINK_ERR_TXRX_TRAIN_PAT_LOCK_TIMEOUT);
	break;
	LINK_ERROR_CASE(LINK_ERR_TXRX_TRAIN_BAD_EYE);
	break;
	LINK_ERROR_CASE(LINK_ERR_TXRX_TRAIN_LOCAL_TIMEOUT);
	break;
	LINK_ERROR_CASE(LINK_ERR_TXRX_TRAIN_REMOTE_TIMEOUT);
	break;
	LINK_ERROR_CASE(LINK_ERR_AN_CL73_NO_HCD);
	break;
	LINK_ERROR_CASE(LINK_ERR_MCESD_FAIL);
	break;
	LINK_ERROR_CASE(LINK_ERR_GSERM);
	break;
	LINK_ERROR_CASE(LINK_ERR_TXEQ_UPDATE_FAIL);
	break;

	default:
		WARN("%s: unrecognized ECP link_error %d\n", __func__, link_error);
		str = "UNKNOWN_LINK_ERR_VALUE";
		break;
	}
	return str;
}

/**
 * Convert ECP Link request type into a string value
 *
 * @param link_req: ECP Link request to convert
 * @return: ECP Link request string
 */
const char *cn10k_ecp_link_req_to_str(ecp_link_req_id_t link_req)
{
	const char *str;

#define LINK_REQ_CASE(m) case m: str = ((const char *)#m)+9

	switch (link_req) {
	LINK_REQ_CASE(ECP_LINK_REQ_NONE);
	break;
	LINK_REQ_CASE(ECP_LINK_REQ_BRINGUP);
	break;
	LINK_REQ_CASE(ECP_LINK_REQ_BRINGDOWN);
	break;
	LINK_REQ_CASE(ECP_LINK_REQ_MODE_CHANGE);
	break;
	LINK_REQ_CASE(ECP_LINK_REQ_FEC_CHANGE);
	break;
	LINK_REQ_CASE(ECP_LINK_REQ_AN_RESTART);
	break;
	LINK_REQ_CASE(ECP_LINK_REQ_LOOPBACK_STATE_CHANGE);
	break;
	LINK_REQ_CASE(ECP_LINK_REQ_PRBS_STATE_CHANGE);
	break;
	LINK_REQ_CASE(ECP_LINK_REQ_TXEQ_CHANGE);
	break;

	default:
		WARN("%s: unrecognized ECP link request %d\n", __func__, link_req);
		str = "UNKNOWN_ECP_LINK_REQ_VALUE";
		break;
	}
	return str;
}
