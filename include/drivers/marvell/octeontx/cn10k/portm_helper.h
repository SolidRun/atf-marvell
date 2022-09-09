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

#endif /* __PORTM_HELPER_H__ */
