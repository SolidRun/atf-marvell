/*
 * Copyright (C) 2020 Marvell International Ltd.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
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
#include <rpm.h>
#include <eth_intf.h>
#include <qlm/qlm_cn10k.h>
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

static int rpm_link_speed_mbps[ETH_LINK_MAX] = {
		0, 10, 100, 1000, 2500, 5000, 10000, 20000, 25000};

static void rpm_lmac_write_pcs_csr(int rpm_id, int lmac_id, uint64_t offset, uint64_t val)
{
	/* To write to PCS config CSRs */
	(*(volatile uint64_t *)(CAVM_RPM_BAR_E_RPMX_PF_BAR0(rpm_id) +
			offset + (0x100000 * ((lmac_id) & 0x3))) =
			cavm_cpu_to_le64((val)));
}

static void rpm_lmac_lrpcs_config(int rpm_id, int lmac_id)
{
	int lmac_enable;
	rpm_lmac_config_t *lmac;
	cavm_rpmx_mti_lpcs_gmode_t lpcs_gmode;

	lmac = &plat_octeontx_bcfg->rpm_cfg[rpm_id].lmac_cfg[lmac_id];

	debug_rpm("%s %d:%d mode %d\n", __func__, rpm_id, lmac_id, lmac->mode);

	/* 1000 BASE-X SGMII LPCS configuration */
	lpcs_gmode.u = CSR_READ(CAVM_RPMX_MTI_LPCS_GMODE(rpm_id));

	/* LPCS_ENABLE : 0:3 1G PCS per channel */
	lmac_enable = (lpcs_gmode.s.lpcs_enable | (1 << lmac_id)) & 0xF;

	CAVM_MODIFY_RPM_CSR(cavm_rpmx_mti_lpcs_gmode_t,
			CAVM_RPMX_MTI_LPCS_GMODE(rpm_id),
			lpcs_enable, lmac_enable);

	CAVM_MODIFY_RPM_CSR(cavm_rpmx_mti_lpcsx_if_mode_t,
			CAVM_RPMX_MTI_LPCSX_IF_MODE(rpm_id, lmac_id),
			sgmii_speed, 2);

	/* Clear SGMII_ENA bit for 1000 BASE-X mode */
	if (lmac->sgmii_1000x_mode) {
		CAVM_MODIFY_RPM_CSR(cavm_rpmx_mti_lpcsx_if_mode_t,
			CAVM_RPMX_MTI_LPCSX_IF_MODE(rpm_id, lmac_id),
			sgmii_ena, 0);
	}

	CAVM_MODIFY_RPM_CSR(cavm_rpmx_mti_lpcsx_control_t,
			CAVM_RPMX_MTI_LPCSX_CONTROL(rpm_id, lmac_id),
			reset, 1);
}

static void rpm_lmac_hrpcs_config(int rpm_id, int lmac_id)
{
	rpm_lmac_config_t *lmac;
	rpm_lmac_pcs_config_t *pcs;

	lmac = &plat_octeontx_bcfg->rpm_cfg[rpm_id].lmac_cfg[lmac_id];

	debug_rpm("%s %d:%d mode %d\n", __func__, rpm_id, lmac_id, lmac->mode);

	pcs = rpm_obtain_pcs_config_per_mode(lmac->mode);
	for (int i = 0; i < MAX_MTI_PCS_REG; i++)  {
		if (pcs == NULL) {
			debug_rpm("%s: %d:%d PCS config not valid i %d\n",
				__func__, rpm_id, lmac_id, i);
			break;
		}
		if (pcs->offset == 0)
			break;
		rpm_lmac_write_pcs_csr(rpm_id, lmac_id,
				pcs->offset,
				pcs->val);
		pcs++;
	}
}

static void rpm_lmac_mac_config(int rpm_id, int lmac_id)
{
	cavm_rpmx_mti_mac100x_command_config_t mac_config;
	cavm_rpmx_mti_mac100x_xif_mode_t xif_mode;

	debug_rpm("%s %d:%d\n", __func__, rpm_id, lmac_id);

	/* Section 40.20.10 MAC configuration */
	mac_config.u = CSR_READ(CAVM_RPMX_MTI_MAC100X_COMMAND_CONFIG(
				rpm_id, lmac_id));
	mac_config.s.cntl_frame_ena = 1;
	mac_config.s.tx_pad_en = 1;
	mac_config.s.crc_fwd = 0;
	CSR_WRITE(CAVM_RPMX_MTI_MAC100X_COMMAND_CONFIG(rpm_id, lmac_id),
			mac_config.u);

	CAVM_MODIFY_RPM_CSR(cavm_rpmx_mti_mac100x_rx_fifo_sections_t,
			CAVM_RPMX_MTI_MAC100X_RX_FIFO_SECTIONS(rpm_id, lmac_id),
			rx_section_empty, 3);

	CAVM_MODIFY_RPM_CSR(cavm_rpmx_mti_mac100x_tx_fifo_sections_t,
			CAVM_RPMX_MTI_MAC100X_TX_FIFO_SECTIONS(rpm_id, lmac_id),
			tx_section_empty, 3);

	xif_mode.u = CSR_READ(CAVM_RPMX_MTI_MAC100X_XIF_MODE(rpm_id,
					lmac_id));
	xif_mode.s.xgmii = 0;
	xif_mode.s.pausetimerx8 = 1;
	CSR_WRITE(CAVM_RPMX_MTI_MAC100X_XIF_MODE(rpm_id, lmac_id),
				xif_mode.u);
	/* FIXME: pause quanta CSRs */
	/* Configure Frame Length */
	CAVM_MODIFY_RPM_CSR(cavm_rpmx_mti_mac100x_frm_length_t,
			CAVM_RPMX_MTI_MAC100X_FRM_LENGTH(rpm_id, lmac_id),
			frm_length, RPM_MAX_FRAME_LENGTH);
}

static int rpm_get_lane_speed(int rpm_id, int lmac_id)
{
	int lanes = 0, speed = 0, baud_rate = 0;
	rpm_lmac_config_t *lmac;
	gserm_state_lane_t gserm_state;
	rpm_config_t *rpm;

	rpm = &plat_octeontx_bcfg->rpm_cfg[rpm_id];
	lmac = &rpm->lmac_cfg[lmac_id];

	debug_rpm("%s: rpm %d gserm %d mode %d\n", __func__, rpm_id,
				lmac->gserm_idx, lmac->mode);

	gserm_state = gserm_get_state(lmac->gserm_idx, lmac->lane);
	baud_rate = gserm_state.s.baud_mhz;

	/* Ref : Table 38-1 of T9X HRM for encoding, lanes
	 * baud rate based on LMAC type
	 */
	switch (lmac->mode) {
	case CAVM_RPM_LMAC_TYPES_E_TENG_R:
	case CAVM_RPM_LMAC_TYPES_E_TWENTYFIVEG_R:
		/* Using 64b66b symbol encoding */
		speed = (baud_rate * 64 + 33) / 66;
		lanes = 1;
		break;
	default:
		break;
	};
	speed = speed * lanes;
	return speed;
}


int rpm_lmac_port_get_status(int rpm_id, int lmac_id, rpm_link_state_t *lnk_sts)
{
	rpm_lmac_config_t *lmac;
	cavm_rpmx_ext_mti_portx_status_t port_status;
	cavm_rpmx_mti_mac100x_status_t mac100_status;
	cavm_rpmx_mti_pcs100x_status1_t pcs100_status;
	cavm_rpmx_mti_lpcsx_status_t lpcs_status;

	int link_up = 0, speed = 0, ret = 0;

	debug_rpm("%s: %d:%d\n", __func__, rpm_id, lmac_id);

	lmac = &plat_octeontx_bcfg->rpm_cfg[rpm_id].lmac_cfg[lmac_id];

	port_status.u = CSR_READ(CAVM_RPMX_EXT_MTI_PORTX_STATUS(rpm_id, lmac_id));
	mac100_status.u = CSR_READ(CAVM_RPMX_MTI_MAC100X_STATUS(rpm_id, lmac_id));

	if ((port_status.s.link_ok == 1) && (port_status.s.link_status == 1) &&
		(port_status.s.hi_ber == 0) &&
		(mac100_status.s.rx_loc_fault == 0) &&
		(mac100_status.s.rx_rem_fault == 0)) {
		if ((lmac->mode == CAVM_RPM_LMAC_TYPES_E_SGMII) ||
			(lmac->mode == CAVM_RPM_LMAC_TYPES_E_QSGMII)) {
			CSR_READ(CAVM_RPMX_MTI_LPCSX_STATUS(rpm_id, lmac_id));
			lpcs_status.u = CSR_READ(CAVM_RPMX_MTI_LPCSX_STATUS(rpm_id, lmac_id));
			if (lpcs_status.s.link_status == 1) {
				link_up = 1;
				return 1;
			}
		} else { /* For other modes */
			/* FIXME: PCS100X_STATUS1 needs to be read twice for the
			 * pcs_receive link to be set
			 */
			CSR_READ(CAVM_RPMX_MTI_PCS100X_STATUS1(rpm_id, lmac_id));
			pcs100_status.u = CSR_READ(CAVM_RPMX_MTI_PCS100X_STATUS1(rpm_id, lmac_id));
			if (pcs100_status.s.pcs_receive_link == 1)
				link_up = 1;
		}
	}

	if (link_up == 1) {
		lnk_sts->s.link_up = 1;
		lnk_sts->s.full_duplex = 1;
		speed = rpm_get_lane_speed(rpm_id, lmac_id);
		lnk_sts->s.speed = ETH_LINK_NONE;
		/* Obtain the speed enum based on the speed in Mbps */
		for (int i = ETH_LINK_NONE; i < ETH_LINK_MAX; i++) {
			if (speed == rpm_link_speed_mbps[i]) {
				lnk_sts->s.speed = i;
				ret = 1;
				break;
			}
		}
	} else {
		debug_rpm("%s: %d:%d: port_status.u 0x%llx mac100_status.u 0x%llx pcs100_status.u 0x%llx lpcs_status 0x%llx\n", __func__, rpm_id, lmac_id,
			CSR_READ(CAVM_RPMX_EXT_MTI_PORTX_STATUS(rpm_id, lmac_id)),
			CSR_READ(CAVM_RPMX_MTI_MAC100X_STATUS(rpm_id, lmac_id)),
			CSR_READ(CAVM_RPMX_MTI_PCS100X_STATUS1(rpm_id, lmac_id)),
			CSR_READ(CAVM_RPMX_MTI_LPCSX_STATUS(rpm_id, lmac_id)));
	}
	return ret;
}

void rpm_lmac_port_packet_config(int rpm_id, int lmac_id, int enable)
{
	cavm_rpmx_mti_mac100x_command_config_t mac100_cfg;
	cavm_rpmx_cmrx_config_t cmrx_cfg;

	debug_rpm("%s %d:%d enable %d\n", __func__, rpm_id, lmac_id, enable);

	mac100_cfg.u = CSR_READ(CAVM_RPMX_MTI_MAC100X_COMMAND_CONFIG(rpm_id, lmac_id));
	mac100_cfg.s.tx_ena = enable;
	mac100_cfg.s.rx_ena = enable;
	CSR_WRITE(CAVM_RPMX_MTI_MAC100X_COMMAND_CONFIG(rpm_id, lmac_id),
			mac100_cfg.u);

	cmrx_cfg.u = CSR_READ(CAVM_RPMX_CMRX_CONFIG(rpm_id, lmac_id));
	cmrx_cfg.s.data_pkt_tx_en = enable;
	cmrx_cfg.s.data_pkt_rx_en = enable;
	CSR_WRITE(CAVM_RPMX_CMRX_CONFIG(rpm_id, lmac_id),
			cmrx_cfg.u);

}

int rpm_lmac_port_enable(int rpm_id, int lmac_id)
{
	rpm_lmac_config_t *lmac;

	debug_rpm("%s %d:%d\n", __func__, rpm_id, lmac_id);

	lmac = &plat_octeontx_bcfg->rpm_cfg[rpm_id].lmac_cfg[lmac_id];

	/* Enable LMAC */
	CAVM_MODIFY_RPM_CSR(cavm_rpmx_cmrx_config_t,
			CAVM_RPMX_CMRX_CONFIG(rpm_id, lmac_id),
			enable, 1);
	/* PCS config based on port-speed call either
	 * HRPCS or LRPCS
	 */
	if ((lmac->mode == CAVM_RPM_LMAC_TYPES_E_SGMII) ||
		(lmac->mode == CAVM_RPM_LMAC_TYPES_E_QSGMII))
		rpm_lmac_lrpcs_config(rpm_id, lmac_id);
	else
		rpm_lmac_hrpcs_config(rpm_id, lmac_id);

	/* MAC config */
	rpm_lmac_mac_config(rpm_id, lmac_id);

	/* Rest of Configuration for PCS */
	/* LMAC mapped to PCS100 lanes 1:1 */
	CAVM_MODIFY_RPM_CSR(cavm_rpmx_mti_pcs100x_control1_t,
			CAVM_RPMX_MTI_PCS100X_CONTROL1(rpm_id, lmac_id),
				reset, 1);
	return 0;
}

static int rpm_lmac_port_hr_init(int rpm_id, int lmac_id)
{
	cavm_rpmx_cmrx_rx_bp_on_t rx_bp_on;
	cavm_rpmx_const_t rpm_const;
	cavm_rpmx_cmr_rx_lmacs_t cmr_rx_lmacs;

	debug_rpm("%s %d:%d\n", __func__, rpm_id, lmac_id);

	/* FIXME */
	/* Program receive backpressure as recommended by HRM
	 * The recommended value is 1/4th the size of the per-LMAC RX FIFO
	 * size as determined by RPM()_CMR_RX_LMACS[LMACS].
	 * Also, mark to be configured in mulitple of 16 bytes
	 */
	rpm_const.u = CSR_READ(CAVM_RPMX_CONST(rpm_id));
	cmr_rx_lmacs.u = CSR_READ(CAVM_RPMX_CMR_RX_LMACS(rpm_id));
	rx_bp_on.u = CSR_READ(CAVM_RPMX_CMRX_RX_BP_ON(rpm_id, lmac_id));
	rx_bp_on.s.mark = (rpm_const.s.rx_fifosz/(cmr_rx_lmacs.s.lmac_exist *
				RPM_BP_ON_MARK_SIZE_DIV * RPM_BP_PACKET_DATA_DEPTH));
	CSR_WRITE(CAVM_RPMX_CMRX_RX_BP_ON(rpm_id, lmac_id),
			rx_bp_on.u);

	/* Section 40.19.1 Time Stamp Configuration Unit */
	return 0;
}


/* This function initializes the RPM LMAC for
 * a particular mode
 */
void rpm_lmac_init(int rpm_id, int lmac_id)
{
	rpm_lmac_config_t *lmac;

	debug_rpm("%s %d:%d\n", __func__, rpm_id, lmac_id);

	lmac = &plat_octeontx_bcfg->rpm_cfg[rpm_id].lmac_cfg[lmac_id];

	/* Do one time initialization of RPM based on
	 * the LMAC type. this function will be called
	 * once during boot and whenever mode change
	 * happens
	 */
	switch (lmac->mode) {
	case CAVM_RPM_LMAC_TYPES_E_TENG_R:
	case CAVM_RPM_LMAC_TYPES_E_TWENTYFIVEG_R:
		rpm_lmac_port_hr_init(rpm_id, lmac_id);
		break;
	default:
		debug_rpm("%s invalid mode %d\n", __func__, lmac->mode);
		break;
	}
}

int rpm_hr_init_link(int rpm_id, int lmac_id)
{
	/* FIXME */
	return 0;
}

int rpm_lmac_port_disable(int rpm_id, int lmac_id)
{
	int lmac_disable;
	rpm_lmac_config_t *lmac;
	cavm_rpmx_mti_lpcs_gmode_t lpcs_gmode;
	cavm_rpmx_ext_mti_global_fec_control_t fec_control;

	debug_rpm("%s %d:%d\n", __func__, rpm_id, lmac_id);

	lmac = &plat_octeontx_bcfg->rpm_cfg[rpm_id].lmac_cfg[lmac_id];

	/* Packet transfer disable */
	rpm_lmac_port_packet_config(rpm_id, lmac_id, 0);

	/* For LRPCS, disable LPCS_ENABLE */
	if ((lmac->mode == CAVM_RPM_LMAC_TYPES_E_SGMII) ||
			(lmac->mode == CAVM_RPM_LMAC_TYPES_E_QSGMII)) {
		/* 1000 BASE-X SGMII LPCS configuration */
		lpcs_gmode.u = CSR_READ(CAVM_RPMX_MTI_LPCS_GMODE(rpm_id));

		/* LPCS_ENABLE : 0:3 1G PCS per channel */
		lmac_disable = (lpcs_gmode.s.lpcs_enable & ~(1 << lmac_id)) & 0xF;

		CAVM_MODIFY_RPM_CSR(cavm_rpmx_mti_lpcs_gmode_t,
				CAVM_RPMX_MTI_LPCS_GMODE(rpm_id),
				lpcs_enable, lmac_disable);
	}
	/* FIXME: Disable FEC based on FEC type */
	fec_control.u = CSR_READ(CAVM_RPMX_EXT_MTI_GLOBAL_FEC_CONTROL(rpm_id));
	fec_control.s.gc_fec_ena &= ~(1 << lmac_id);
	fec_control.s.gc_fec91_ena_in &= ~(1 << lmac_id);
	CSR_WRITE(CAVM_RPMX_EXT_MTI_GLOBAL_FEC_CONTROL(rpm_id),
				fec_control.u);
	/* Disable LMAC */
	CAVM_MODIFY_RPM_CSR(cavm_rpmx_cmrx_config_t,
			CAVM_RPMX_CMRX_CONFIG(rpm_id, lmac_id),
			enable, 0);
	return 0;
}

void rpm_lmac_init_link(int rpm_id, int lmac_id)
{
	rpm_lmac_config_t *lmac;

	debug_rpm("%s %d:%d\n", __func__, rpm_id, lmac_id);

	lmac = &plat_octeontx_bcfg->rpm_cfg[rpm_id].lmac_cfg[lmac_id];

	switch (lmac->mode) {
	case CAVM_RPM_LMAC_TYPES_E_TENG_R:
	case CAVM_RPM_LMAC_TYPES_E_TWENTYFIVEG_R:
		if (rpm_lmac_port_hr_init(rpm_id, lmac_id) != 0) {
			debug_rpm("%s: %d:%d Higher speed link initialization failed\n",
				__func__, rpm_id, lmac_id);
			break;
		}
		break;
	default:
		debug_rpm("%s invalid mode %d\n", __func__, lmac->mode);
		break;
	}
}

/* this function to be called for every RPM either from
 * PCI scanning (RPM device enumeration) or
 * during INTF initialization
 */
void rpm_init(int rpm_id)
{
	int lmac_id;
	rpm_config_t *rpm;
	rpm_lmac_config_t *lmac;
	cavm_rpmx_ext_mti_global_pma_control_t global_pma_ctrl;

	debug_rpm("%s: %d\n", __func__, rpm_id);

	rpm = &plat_octeontx_bcfg->rpm_cfg[rpm_id];

	if (rpm->enable) {
		/* Program the LMAC count (already updated by FDT parser)
		 * for each RPM
		 */
		debug_rpm("%s lmac_count %d\n", __func__, rpm->lmac_count);
		CSR_WRITE(CAVM_RPMX_CMR_TX_LMACS(rpm_id),
					rpm->lmac_count);
		CSR_WRITE(CAVM_RPMX_CMR_RX_LMACS(rpm_id),
					rpm->lmac_count);
		/* 1.1 SerDes config */
		global_pma_ctrl.u = CSR_READ(CAVM_RPMX_EXT_MTI_GLOBAL_PMA_CONTROL(
						rpm_id));
		global_pma_ctrl.s.gc_sd_n2 = 0;
		global_pma_ctrl.s.gc_sd_8x = 0;
		CSR_WRITE(CAVM_RPMX_EXT_MTI_GLOBAL_PMA_CONTROL(rpm_id),
				global_pma_ctrl.u);

		/* Clear FC-FEC/RS-FEc for all LMACs */
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
		CSR_WRITE(CAVM_RPMX_CMR_TX_LMACS(rpm_id), 0);
		CSR_WRITE(CAVM_RPMX_CMR_RX_LMACS(rpm_id), 0);

	}
}
