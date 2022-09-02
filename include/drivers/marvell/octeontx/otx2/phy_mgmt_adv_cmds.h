/*
 * Copyright (c) 2022 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#ifndef __PHY_MGMT_ADV_CMDS_H__
#define __PHY_MGMT_ADV_CMDS_H__

#include <octeontx_common.h>
#include <api_secy_types.h>

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
	PHY_MAC_ADV_MACSEC_SET_PKT_NUM,
	PHY_MAC_ADV_MACSEC_SET_SCI,
	PHY_MAC_ADV_MACSEC_ADD_VPORT,
	PHY_MAC_ADV_MACSEC_DEL_SA,
	PHY_MAC_ADV_MACSEC_ACTIONTYPE_SA,
	PHY_MAC_ADV_MACSEC_DROPTYPE_SA,
	PHY_MAC_ADV_MACSEC_GET_MAC_ADDR,
	PHY_MAC_ADV_MACSEC_GET_SA_PARAMS,
	PHY_MAC_ADV_MACSEC_DBG,

	PHY_MAC_ADV_MACSEC_MAX = 100,

	/* Generic PHY commands */
	PHY_MAC_ADV_GEN_RCLK = 101,
	PHY_MAC_ADV_GEN_PTP_TC_NOENC = 102,
	PHY_MAC_ADV_GEN_MAX = 200,
} PHY_7121_ADV_CMDS_t;

typedef enum  PHY_7121_MACSEC_PKTTEST {
	PHY_7121_MACSEC_PKTTEST_START = 0,
	PHY_7121_MACSEC_PKTTEST_STOP,
	PHY_7121_MACSEC_PKTTEST_CHECK,
	PHY_7121_MACSEC_PKTTEST_COUNTERS,
	PHY_7121_MACSEC_PKTTEST_LPBK,
	PHY_7121_MACSEC_PKTTEST_GEN,
} PHY_7121_MACSEC_PKTTEST_t;

#define MACSEC_KEY_SIZE 16
#define MACSEC_SCI_SIZE 8

#define MAX_KEYS_PER_SA 1
#define MAX_SA_PER_PORT 4

enum PHY_7121_MACSEC_VPORT {
	PHY_7121_MACSEC_VPORT_0 = 0,
	PHY_7121_MACSEC_VPORT_1,
};

typedef struct {
	enum PHY_7121_MACSEC_VPORT vport_num;
	PHY_7121_MACSEC_DIR_t dir;
	unsigned char mac[6];
} macsec_vport_params_t;


enum PHY_7121_MACSEC_SA {
	PHY_7121_MACSEC_SA_0 = 0,
	PHY_7121_MACSEC_SA_1,
	PHY_7121_MACSEC_SA_2,
	PHY_7121_MACSEC_SA_3,
};

typedef struct {
	enum PHY_7121_MACSEC_SA  sa_num;
	PHY_7121_MACSEC_DIR_t dir;
	uint32_t flags;
	bool is_actiontype;
	SecY_SA_ActionType_t actiontype;
	bool is_droptype;
	SecY_DropType_t droptype;
	bool is_key;
	unsigned char key[MACSEC_KEY_SIZE];
	unsigned int key_size;
	bool is_sci;
	unsigned char sci[MACSEC_SCI_SIZE];
	bool is_seq_no;
	uint32_t seq_num_lo;
	uint32_t seq_num_hi;
	bool is_ethertype;
	uint32_t ethertype;
} macsec_sa_params_t;

typedef struct pkttest {
	PHY_7121_MACSEC_PKTTEST_t cmd;
} pkttest_t;

typedef struct phy_gen_rclk {
	int pin;
	int src_clk;
	int ratio;
} phy_gen_rclk_t;

typedef struct phy_ptp_tc {
	int pd_ingr_line;
	int pd_egr_line;
	int pd_ingr_host;
	int pd_egr_host;
	int ptp_ref_clk;
} phy_ptp_tc_t;


#define MACSEC_ADV_CMD_VERS_MAJOR  0x0001
#define MACSEC_ADV_CMD_VERS_MINOR  0x0000
#define MACSEC_ADV_CMD_VERS  (MACSEC_ADV_CMD_VERS_MAJOR \
				| MACSEC_ADV_CMD_VERS_MINOR)
typedef struct phy_7121_adv_cmds {
	int mac_adv_cmd_ver;
	int mac_adv_dbg;
	int mac_adv_cmd;
	int cgx_id;
	int lmac_id;
	unsigned short  mdio_port;
	union {
		macsec_sa_params_t sa_params;
		macsec_vport_params_t vport_params;
		pkttest_t pkttest_cmd;
		phy_gen_rclk_t gen_rclk;
		phy_ptp_tc_t ptp_tc;
	} data;
} phy_7121_adv_cmds_t;

#endif /*ATF_ENABLE_MAC_ADV_CMDS */

#endif /* __PHY_MGMT_ADV_CMDS_H__ */
