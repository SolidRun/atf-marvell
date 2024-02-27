/*
 * Copyright (c) 2024 Marvell.
 * SPDX-License-Identifier: BSD-3-Clause
 */
#ifndef __PLAT_ETH_CFG_H__
#define __PLAT_ETH_CFG_H__

#include <platform_dt.h>
#include <sfp_intf.h>
#include <plat_portm_cfg.h>

// TODO: confirm values for cn20ka
#define CAVM_RPM_LMAC_TYPES_E_FIFTYG_R (8)
#define CAVM_RPM_LMAC_TYPES_E_FORTYG_R (4)
#define CAVM_RPM_LMAC_TYPES_E_HUNDREDG_R (9)
#define CAVM_RPM_LMAC_TYPES_E_QSGMII (6)
#define CAVM_RPM_LMAC_TYPES_E_RGMII (5)
#define CAVM_RPM_LMAC_TYPES_E_RXAUI (2)
#define CAVM_RPM_LMAC_TYPES_E_SGMII (0)
#define CAVM_RPM_LMAC_TYPES_E_TENG_R (3)
#define CAVM_RPM_LMAC_TYPES_E_TWENTYFIVEG_R (7)
#define CAVM_RPM_LMAC_TYPES_E_USXGMII (0xa)
#define CAVM_RPM_LMAC_TYPES_E_USGMII (0xb)
#define CAVM_RPM_LMAC_TYPES_E_XAUI (1)
#define CAVM_RPM_LMAC_TYPES_E_MAX (0xc)

/* QLM APIs */

struct gserm_mode_strmap_s {
	int mode;
	int baud_rate;
	char *ebf_str;
	char *linux_str;
};

int gserm_get_mode_from_string(const char *str);

struct gserm_mode_strmap_s gserm_get_mode_strmap(int gserm_mode);

/* PHY types */
typedef enum __attribute__((__packed__)) phy_type {
	PHY_NONE = 0,
} phy_type_t;

typedef struct phy_compat {
	char compatible[64];	/* compatible string */
	int phy_type;		/* phy_type_t */
} phy_compatible_type_t;

typedef struct phy_config {
	int type;
	int addr;	/* PHY ADDR on MDIO bus */
	int mdio_bus;	/* SMI bus number */
	int fdt_offset; /* offset of PHY node in Linux DT */
} phy_config_t;

typedef enum __attribute__((__packed__)) tx_eq_limits {
	TXEQ_PRE2_MIN = 0,
	TXEQ_PRE2_MAX = 9,
	TXEQ_PRE1_MIN = -22,
	TXEQ_PRE1_MAX = 0,
	TXEQ_MAIN_MIN = 35,
	TXEQ_MAIN_MAX = 63,
	TXEQ_POST_MIN = -16,
	TXEQ_POST_MAX = 0,
	TXEQ_SUM_MAX = 63,
} tx_eq_limits_t;

/* LINK speed types */
enum __attribute__((__packed__)) eth_link_speed {
	ETH_LINK_NONE,
	ETH_LINK_10M,
	ETH_LINK_100M,
	ETH_LINK_1G,
	ETH_LINK_2HG,	/* 2.5 Gbps */
	ETH_LINK_5G,
	ETH_LINK_10G,
	ETH_LINK_20G,
	ETH_LINK_25G,
	ETH_LINK_40G,
	ETH_LINK_50G,
	ETH_LINK_80G,
	ETH_LINK_100G,
	ETH_LINK_MAX,
};

typedef struct lmac_mode_info {
	uint32_t available:1;
	uint32_t an_disable:1;
	uint32_t sgmii_speed:4;
	uint32_t sgmii_duplex:1;
	uint32_t reserved1:25;
} lmac_mode_info_t;

#define MDIO_NUM 2

/* Define LMAC structure. */
typedef struct rpm_lmac_config {
	/* for RVU */
	int num_rvu_vfs;
	int num_msix_vec;
	int mode;		/* LMAC type */
	int portm_idx;		/* PORTM index of the LMAC */
	int port_enable;	/* From EBF DT, if a PORTM is enabled or not */
	/* NOTE: when this bit is set, it doesn't necessarily
	 * mean the link is up until the user sends LINK UP command
	 */
	int lmac_enable;
	uint8_t local_mac_address[6];
	uint64_t supported_link_modes;	/* rpm_mode_t enum */
	int phy_present;
	int phy_mode;		/* MAC or PHY mode for SGMII */
	int phy_port;
	int phy_adv_speed; /* To indicate PHY driver that this is not mode/speed change but only to advertise speed */
	int phy_advertised_speed[ETH_LINK_MAX];
	bool sfp_slot;
	lmac_mode_info_t lmac_mode_info[CAVM_RPM_LMAC_TYPES_E_MAX];
	int sgmii_1000x_mode;	/* SGMII or 1000x mode for SGMII */
	int sgmii_speed;	/* SGMII/USGMII speed if AN disabled */
	int sgmii_duplex;	/* SGMII/USGMII duplex if AN disabled */
	int an_disable;
} rpm_lmac_config_t;

typedef struct rpm_config {
	uint32_t lmac_count:4;
	uint32_t lmacs_used:4;
	/* for RVU */
	uint32_t enable:1;
	uint32_t is_rfoe:1;
	uint16_t lanes_used_mask;
	rpm_lmac_config_t lmac_cfg[MAX_LMAC_PER_RPM];
	uint8_t node_id;
	uint64_t base_addr;
} rpm_config_t;

typedef struct gserm_plat_config {
	uint32_t lane_map;      /* Port MAC to SERDES lane mapping.
				 * Nibble # = MAC lane (fixed #)
				 * Nibble Value = Connected GSERM SERDES lane
				 */
	uint8_t synce_mode;	/* GSERM SYNC-E mode */
	uint8_t refclk_conn;    /* Set to 1 if a REF_CLK is terminated to the GSERM clock circuit */
	uint8_t refclk_term;    /* REF_CLK termination: 0 = 50 Ohm, 1 = None */
	uint8_t rx_cal_setting; /* GSERM Phase Adaptation Calibration Value
				 * cnf10ka only
				 */
} gserm_plat_config_t;

typedef struct plat_octeontx_ethernet_cfg {
	rpm_config_t rpm_cfg[MAX_RPM];
	portm_config_t portm_cfg[MAX_PORTM];
	gserm_plat_config_t gserm_plat_cfg[MAX_GSERM];
	sfp_slot_info_t sfp_slots[MAX_PORTM];
	led_gpio_info_t led_info[MAX_PORTM];
	uint32_t led_blink_rate; /* in milli hertz */
	phy_config_t phys[MAX_PORTM];
	int timer1_ms;		/* RPM timer 1 callback frequency */
	int timer2_ms;		/* RPM timer 2 callback frequency */
	int ignore_eth_persist_data;
} plat_octeontx_ethernet_cfg_t;

/* Frequency in Hz for GPIO activity LED */
#define GPIO_LED_ACTVITY_FREQ_HZ 0x4ULL
/* Supported range for setting LED blink rate */
#define GPIO_LED_ACTIVITY_MIN_RATE 250
#define GPIO_LED_ACTIVITY_MAX_RATE 30000

extern plat_octeontx_ethernet_cfg_t * const plat_octeontx_eth_cfg;
int plat_octeontx_fill_eth_details(void *fdt);

#endif /* __PLAT_ETH_CFG_H__ */
