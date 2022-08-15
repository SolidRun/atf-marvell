/*
 * Copyright (C) 2022 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#ifndef __PHY_MGMT_ADV_CMDS_H__
#define __PHY_MGMT_ADV_CMDS_H__

#include <octeontx_common.h>

#ifdef ATF_ENABLE_MAC_ADV_CMDS

typedef enum  PHY_7121_MACSEC_DIR {
	PHY_7121_MACSEC_INGRESS = 0,
	PHY_7121_MACSEC_EGRESS,
} PHY_7121_MACSEC_DIR_t;

typedef enum  PHY_7121_ADV_CMDS {
	PHY_MAC_ADV_MACSEC_SET_MAC_DA = 1,
	PHY_MAC_ADV_MACSEC_SET_KEY,
	PHY_MAC_ADV_MACSEC_ADD_ADD_POLICY,
	PHY_MAC_ADV_MACSEC_ADD_SA,
	PHY_MAC_ADV_MACSEC_ENABLE,
	PHY_MAC_ADV_MACSEC_BYPASS,
	PHY_MAC_ADV_MACSEC_TEST,
	PHY_MAC_ADV_MACSEC_PKT_TEST,
	PHY_MAC_ADV_MACSEC_GET_STATS,
	PHY_MAC_ADV_MAC_GET_STATS,
	PHY_MAC_ADV_MACSEC_GET,
	PHY_MAC_ADV_MACSEC_PTP,
	PHY_MAC_ADV_MACSEC_RE_KEY,
	PHY_MAC_ADV_MACSEC_MAX = 100,

	/* Generic PHY commands */
	PHY_MAC_ADV_GEN_RCLK = 101,
	PHY_MAC_ADV_GEN_MAX = 200,

	/* Add PTP commands */
} PHY_7121_ADV_CMDS_t;

typedef enum  PHY_7121_MACSEC_PKTTEST {
	PHY_7121_MACSEC_PKTTEST_START = 0,
	PHY_7121_MACSEC_PKTTEST_STOP,
	PHY_7121_MACSEC_PKTTEST_CHECK,
	PHY_7121_MACSEC_PKTTEST_COUNTERS,
	PHY_7121_MACSEC_PKTTEST_LPBK,
	PHY_7121_MACSEC_PKTTEST_GEN,
} PHY_7121_MACSEC_PKTTEST_t;

typedef struct mac_da {
	PHY_7121_MACSEC_DIR_t dir;
	unsigned char  mac[6];
} mac_da_t;

#define MACSEC_KEY_SIZE 32

typedef struct key_sa {
	PHY_7121_MACSEC_DIR_t dir;
	unsigned char  key_size;
	unsigned char  key[MACSEC_KEY_SIZE];
} key_sa_t;

typedef struct pkttest {
	PHY_7121_MACSEC_PKTTEST_t cmd;
} pkttest_t;

typedef struct phy_gen_rclk {
	int pin;
	int src_clk;
	int ratio;
} phy_gen_rclk_t;

typedef struct phy_7121_adv_cmds {
	int mac_adv_cmd;
	int cgx_id;
	int lmac_id;
	unsigned short  mdio_port;
	union {
		key_sa_t key;
		mac_da_t mac;
		pkttest_t pkttest_cmd;
		phy_gen_rclk_t gen_rclk;
	} data;
} phy_7121_adv_cmds_t;

#endif /*ATF_ENABLE_MAC_ADV_CMDS */

#endif /* __PHY_MGMT_ADV_CMDS_H__ */
