/***********************license start***********************************
 * Copyright (c) 2021 Marvell.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 * https://spdx.org/licenses
 **********************license end**************************************/

#ifndef __PORTM_HELPER_H__
#define __PORTM_HELPER_H__

/**
 * Updates Portm struct Tx Eq settings based on dts or default settings
 *
 * @param portm_idx   PORTM
 * @param portm_mode PORTM mode
 *
 */
void cn10k_fill_portm_tx_eq_info(int portm_idx, cn10k_portm_modes_t portm_mode);

/**
 * Updates Portm struct lane_map based on portm_mode
 *
 * @param portm_idx   PORTM
 * @param portm_mode PORTM mode
 *
 */
void cn10k_fill_portm_lane_map(int portm_idx);

/**
 * Checks if the PORTM is connected through MUX (to be called for THOR VRAN NIC card only)
 *
 * @param portm_idx  PORTM
 *
 */
#ifdef PLAT_cnf10kb
int cn10k_is_portm_muxed(int portm_idx);
#endif

/**
 * Updates Portm struct mac info based on portm_mode
 *
 * @param portm_idx   PORTM
 * @param portm_mode  PORTM mode
 *
 */
void cn10k_fill_portm_mac_info(int portm_idx, cn10k_portm_modes_t portm_mode);

/**
 * Updates Portm struct portms used based on portm_mode
 *
 * @param portm_idx   PORTM
 * @param portm_mode  PORTM mode
 *
 */
void cn10k_fill_portms_used(int portm_idx, cn10k_portm_modes_t portm_mode);

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
				    cn10k_portm_modes_t *portm_mode, int *numlanes);

/**
 * Checks if the provided portm_mode has AN enabled or disabled by default
 * ONLY for lowspeed modes (pcs_type = 1000BASE_X)
 *
 * @pararm[in] portm_mode - Mode to check
 *
 * @return 1 if AN is disabled by default, 0 if AN is enabled, -1 if mode is not low speed
 */
static inline int cn10k_lpcs_an_disable_mode(cn10k_portm_modes_t portm_mode)
{
	if ((portm_mode == PORTM_MODE_1000BASE_X) ||
	    (portm_mode == PORTM_MODE_2500BASE_X) ||
	    (portm_mode == PORTM_MODE_5000BASE_X) ||
	    (portm_mode == PORTM_MODE_SFI_1G))
		return 1;
	else if (portm_mode == PORTM_MODE_SGMII)
		return 0;
	else
		return -1;

}

#endif /* __PORTM_HELPER_H__ */
