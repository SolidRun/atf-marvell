/*
 * Copyright (c) 2018 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#ifndef __PHY_MGMT_H__
#define __PHY_MGMT_H__

#include <octeontx_common.h>
#ifdef PLAT_CN10K_FAMILY
#include <rpm.h>
#else
#include <cgx.h>
#endif //PLAT_CN10K_FAMILY

/* IEEE 802.3 spec CLAUSE 45 MDIO access
 * PMA/PMD control reg bits 6 & 13 determine
 * speed sel
 * 6 13
 * 1 1 = bits 5:2 select speed
 * 1 0 = 1000 Mb/s
 * 0 1 = 100 Mb/s
 * 0 0 = 10 Mb/s
 */
#define PHY_CLAUSE45_SPEED_10M		0x0000
#define PHY_CLAUSE45_SPEED_100M		0x0040
#define PHY_CLAUSE45_SPEED_1G		0x2000
#define PHY_CLAUSE45_SPEED_BITS_2_5_SEL	0x2040
#define PHY_CLAUSE45_SPEED_SEL_MASK	PHY_CLAUSE45_SPEED_BITS_2_5_SEL
#define PHY_CLAUSE45_MAX_SPEED_SEL	0xF

/* IEE 802.3 spec : CLAUSE 45 registers */
#define PMA_PMD_DEVICE_ADDR		1
#define PMA_PMD_CONTROL_REG		0
#define PMA_PMD_STATUS_REG		1

/* IEEE 802.3 spec : CLAUSE 22 registers */
#define MII_CONTROL_REG			0
#define MII_STATUS_REG			1
#define MII_PHY_ID1_REG			2
#define MII_PHY_ID2_REG			3
#define MII_AUTONEG_ADV_REG		4
#define MII_88E1514_STATUS_REG		17
#define MII_88E1548_STATUS_REG		17
#define MII_88E1548_GENERAL_CONTROL_1	20	/* page 18 */
#define MII_MARVELL_22_PAGE_REG		22	/* Clause 22 page register */

/* PHY Identifies for various PHYs supported */
#define PHY_VSC8574_ID1			0x0007
#define PHY_VSC8574_ID2			0x04A2
#define PHY_88X5113_ID			0x0b40
#define PHY_88X5113_ID_REG		0x1003
#define PHY_88X5113_ID_DEV		0x0001

/* PHY ID masks */
#define PHY_VSC8574_ID_MASK		0xffff
#define PHY_88X5113_ID_MASK		0xfff0

/* PHY flags */
#define PHY_FLAG_SUPPORTS_CHANGING_MOD_TYPE 1
#define PHY_FLAG_HAS_FEC_STATS              2


#define containerof(ptr, type, member) \
	((type *)((void *)ptr - offsetof(type, member)))


#ifdef PLAT_CN10K_FAMILY
/* Forward declaration of structure from rpm.h */
typedef union rpm_link_status link_state_t;

#define plat_eth_get_portm_cfg(portm_idx)\
	(&plat_octeontx_bcfg->portm_cfg[portm_idx])

#define plat_eth_get_phy_cfg(eth_id, lmac_id)\
	(plat_octeontx_bcfg->rpm_cfg[eth_id].lmac_cfg[lmac_id].phy_config)

#define plat_eth_get_lmac_cfg(eth_id, lmac_id)\
	(&plat_octeontx_bcfg->rpm_cfg[eth_id].lmac_cfg[lmac_id])
#else
/* Forward declaration of structure from cgx.h */
typedef union cgx_link_status link_state_t;

#define plat_eth_get_phy_cfg(eth_id, lmac_id)\
	(&plat_octeontx_bcfg->cgx_cfg[eth_id].lmac_cfg[lmac_id].phy_config)

#define plat_eth_get_lmac_cfg(phy)\
	containerof(phy, cgx_lmac_config_t, phy_config)
#endif //PLAT_CN10K_FAMILY


/* PHY modulation types */
typedef enum phy_mod_type {
	PHY_MOD_TYPE_NRZ,
	PHY_MOD_TYPE_PAM4,
} phy_mod_type_t;

/* PHY types */
typedef enum phy_type {
	PHY_NONE = 0,
	PHY_MARVELL_88E1548,
	PHY_MARVELL_5123,
	PHY_MARVELL_5113,
	PHY_MARVELL_6141,
	PHY_MARVELL_88E1514,
#ifdef MARVELL_PHY_3310
	PHY_MARVELL_3310,
#endif
#ifdef MARVELL_PHY_1780
	PHY_MARVELL_1780,
#endif
	PHY_VITESSE_8574,
	PHY_GENERIC_8023_C22,
	PHY_GENERIC_8023_C45,
#ifdef MARVELL_PHY_7121
	PHY_MARVELL_7121,
#endif 
} phy_type_t;

/* Type of GPIO pin */
typedef enum {
	PHY_MUX_GPIO_PIN_NONE = 0,
	/* GPIO pin is directly connected to SoC */
	PHY_MUX_GPIO_PIN_DEFAULT,
	/* If the pin is controlled via CPLD */
	PHY_MUX_GPIO_PIN_CPLD
} phy_mux_type_t;

/* Media type for vsc8574 */
typedef enum phy_vsc8574_media_mode {
	PHY_MEDIA_COPPER = 0,
	PHY_MEDIA_1000BX,
	PHY_MEDIA_100FX
} phy_vsc8574_media_mode_t;

typedef enum phy_media_mode {
	PHY_MEDIA_QSGMII_TO_COPPER = 0,
	PHY_MEDIA_SGMII_TO_COPPER,
	PHY_MEDIA_QSGMII_TO_1000BASE_X,
	PHY_MEDIA_QSGMII_TO_100BASE_FX,
	PHY_MEDIA_QSGMII_TO_SGMII,
	PHY_MEDIA_SGMII_TO_QSGMII,
	PHY_MEDIA_QSGMII_TO_AUTO_COPPER_SGMII,
	PHY_MEDIA_QSGMII_TO_AUTO_COPPER_1000BASE_X,
} phy_media_mode_t;

typedef enum phy_sgmii_vod {
	PHY_SGMII_VOD_14mV = 0,
	PHY_SGMII_VOD_112mV,
	PHY_SGMII_VOD_210mV,
	PHY_SGMII_VOD_308mV,
	PHY_SGMII_VOD_406mV,
	PHY_SGMII_VOD_504mV,
	PHY_SGMII_VOD_602mV,
	PHY_SGMII_VOD_700mV,
} phy_sgmii_vod_t;

typedef struct phy_serdes_cfg {
	int pre_emphasis;
	int post_emphasis;
	phy_sgmii_vod_t vod;
} phy_serdes_cfg_t;

enum phy_prbs_cmd {
	PHY_PRBS_START_CMD = 1,
	PHY_PRBS_STOP_CMD,
	PHY_PRBS_GET_DATA_CMD,
};

enum phy_loopback_cmd {
	PHY_LOOPBACK_START_CMD = 1,
	PHY_LOOPBACK_STOP_CMD,
};

enum phy_serdes_cfg_cmd {
	PHY_GET_SERDES_CFG = 0,
	PHY_SET_SERDES_CFG,
};

enum phy_mdio_cmd {
	PHY_MDIO_READ = 0,
	PHY_MDIO_WRITE,
};

enum phy_eye_capture {
	PHY_EYE_MEASURE = 0,
	PHY_EYE_PLOT,
};

#ifdef MARVELL_PHY_1548
typedef phy_media_mode_t phy_88e1548_media_mode_t;

typedef enum phy_88e1548_media_preference {
	PHY_PREFERENCE_FIRST_MEDIA = 0,
	PHY_PREFERENCE_COPPER,
	PHY_PREFERENCE_FIBER
} phy_88e1548_media_preference_t;
#endif

typedef struct phy_compat {
	char compatible[64];	/* compatible string */
	int phy_type;		/* phy_type_t */
} phy_compatible_type_t;

typedef struct phy_drv {
	char drv_name[64];
	int drv_type;
	int flags;	/* Any specific info about the PHY */
	/* Function ptr to initialize PHY */
	void (*probe)(int eth_id, int lmac_id);
	/* Function ptr to reset PHY */
	void (*reset)(int eth_id, int lmac_id);
	/* Function ptr to set mode of PHY */
	void (*config)(int eth_id, int lmac_id);
	/* Function ptr to configure AN */
	void (*set_an)(int eth_id, int lmac_id);
	/* Function ptr to get link status of PHY */
	void (*get_link_status)(int eth_id, int lmac_id, link_state_t *link);
#ifdef DEBUG_ATF_ENABLE_PHY_DIAGNOSTIC_CMDS
	/* Function ptr to enable/disable line loopback */
	int (*set_loopback)(int eth_id, int lmac_id, int host_side, int lbk_type, int enable);
	/* Function ptr to read temp of the PHY */
	int (*get_temp)(int eth_id, int lmac_id, int *temp);
	/* Function ptrs for getting/setting PHY's SERDES configuration */
	int (*set_serdes_cfg)(int eth_id, int lmac_id, phy_serdes_cfg_t *cfg);
	int (*get_serdes_cfg)(int eth_id, int lmac_id, phy_serdes_cfg_t *cfg);
	int (*get_eye)(int eth_id, int lmac_id, int host_side, int type);
	int (*pkt_gen)(int eth_id, int lmac_id, int cmd, int value);
#endif /* DEBUG_ATF_ENABLE_PHY_DIAGNOSTIC_CMDS */
	/* Function ptr to shutdown PHY */
	void (*shutdown)(int eth_id, int lmac_id);
	/* Function ptr to obtain supported modes */
	void (*set_supported_modes)(int eth_id, int lmac_id);
	int  (*get_fec_stats)(int eth_id, int lmac_id);
	int  (*get_page_select_register)();
#if defined(DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS) ||\
	defined(DEBUG_ATF_ENABLE_PHY_DIAGNOSTIC_CMDS)
	/* Function pointer to enable prbs */
	int (*enable_prbs)(
		int eth_id, int lmac_id, int host_side, int prbs, int dir);
	/* Function ptr to disable prbs */
	int (*disable_prbs)(int eth_id, int lmac_id, int host_side, int prbs);
	/* Function ptr to get prbs errors */
	uint64_t (*get_prbs_errors)(
		int eth_id, int lmac_id, int host_side, int clear, int prbs);
#endif /* DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS ||
	* DEBUG_ATF_ENABLE_PHY_DIAGNOSTIC_CMDS
	*/
#ifdef ATF_ENABLE_MAC_ADV_CMDS
	int (*mac_adv_cmds)(int eth_id, int lmac_id, void *adv_cmd_data, int size);
#endif
} phy_drv_t;

typedef struct phy_fec_stats {
	unsigned int rsfec_corr_cws;    /* RS-FEC corrected code words */
	unsigned int rsfec_uncorr_cws;  /* RS-FEC uncorrected code words */
	unsigned int brfec_corr_blks;   /* BASE-R FEC corrected blocks */
	unsigned int brfec_uncorr_blks; /* BASE-R FEC uncorrected blocks */
} phy_fec_stats_t;

typedef struct phy_config {
	int type;
	int addr;	/* PHY ADDR on MDIO bus */
	int mdio_bus;	/* SMI bus number */
	int fdt_offset; /* offset of PHY node in Linux DT */
	int mux_switch; /* If controlled via switch. Ex: Analog switch on EBB9604 */
	int media_type; /* Optional : Required for VSC8574 */
	int port;	/* Optional : Port num for 88x5123/88x5113 */
	int valid;	/* If valid PHY driver found */
	int init;	/* Whether Initialization is already performed */
	phy_mod_type_t mod_type; /* Line-side modulation type */
	phy_drv_t *drv; /* struct for PHY driver operations */
	void *priv;
#ifndef PLAT_CN10K_FAMILY
	gpio_info_t mux_info; /* Details of switch details if MDIO is muxed */
#endif
	int last_page;	/* Last page selected for Marvell 88E15xx Clause 22 */
	uint64_t supported_link_modes;
	int forceconfig;
	int host_order;
	int line_order;
	phy_fec_stats_t fec_stats;
	int req_speed;	/* Speed requested by user */
	int req_an;
	int duplex;
	int link_speed; /* Speed to which PHY negotiated to, reported by PHY */
	int link_duplex; /* Speed to which PHY negotiated to, reported by PHY */
#ifdef MARVELL_PHY_3310
	int media_copper; /* Set to 1 if the media type is copper, if not 0 */
#endif
#ifdef MARVELL_PHY_1548
	phy_88e1548_media_mode_t marvell_88e1548_mode;
	phy_88e1548_media_preference_t marvell_88e1548_media_pref;
	int last_copper; /* True if last link up was copper, used for polling */
#endif
#ifdef MARVELL_PHY_7121
	void *phy_7121_pktgen;
#ifdef ATF_ENABLE_MAC_ADV_CMDS
	void *phy_7121_macsec;
#endif
	int led_pin;
	int led_host_or_line;
	int led_blink_act;
	int led_solid_act;
#endif
} phy_config_t;

/* APIs */
void phy_probe(int eth_id, int lmac_id);
int phy_get_link_status(int eth_id, int lmac_id, link_state_t *link);
void phy_config(int eth_id, int lmac_id);
void phy_register(int eth_id, int lmac_id, phy_drv_t *phy_drv);
void phy_lookup(int eth_id, int lmac_id, int type);
int phy_mdio_read(phy_config_t *phy, int mode, int devad, int reg);
void phy_mdio_write(phy_config_t *phy, int mode, int devad, int reg, int val);
int phy_mdio_c22_paged_read(phy_config_t *phy, int page, int reg);
void phy_mdio_c22_paged_write(phy_config_t *phy, int page, int reg, int val);

void phy_set_switch(phy_config_t *phy, int enable);
int phy_set_mod_type(int eth_id, int lmac_id, phy_mod_type_t mod_type);
void phy_set_supported_link_modes(int eth_id, int lmac_id);
#ifdef DEBUG_ATF_ENABLE_PHY_DIAGNOSTIC_CMDS
int phy_set_loopback(int eth_id, int lmac_id, int host_side, int lbk_type, int enable);
int phy_get_temp(int eth_id, int lmac_id, int *temp);
int phy_set_serdes_cfg(int eth_id, int lmac_id, phy_serdes_cfg_t *cfg);
int phy_get_serdes_cfg(int eth_id, int lmac_id, phy_serdes_cfg_t *cfg);
int phy_read_reg(int eth_id, int lmac_id,
		int mode, int dev_page, int reg, int *val);
int phy_write_reg(int eth_id, int lmac_id,
		int mode, int dev_page, int reg, int val);
int phy_eye_capture(int eth_id, int lmac_id, int host_side, int type);
int phy_pkt_gen(int eth_id, int lmac_id, int cmd, int value);
#endif /* DEBUG_ATF_ENABLE_PHY_DIAGNOSTIC_CMDS */

void phy_reset(int eth_id, int lmac_id);
int phy_get_fec_stats(int eth_id, int lmac_id);

#ifdef PLAT_CN10K_FAMILY
void phy_check_reg_init(phy_config_t *phy, int mode,
		const void *fdt, int phy_node_offset);
#endif

#if defined(DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS) ||\
	defined(DEBUG_ATF_ENABLE_PHY_DIAGNOSTIC_CMDS)
int phy_enable_prbs(int eth_id, int lmac_id, int host_side, int prbs, int dir);
int phy_disable_prbs(int eth_id, int lmac_id, int host_side, int prbs);
uint64_t phy_get_prbs_errors(
	int eth_id, int lmac_id, int host_side, int clear, int prbs);
#endif /* DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS ||
	* DEBUG_ATF_ENABLE_PHY_DIAGNOSTIC_CMDS
	*/

#ifdef ATF_ENABLE_MAC_ADV_CMDS
int phy_advance_commads(int eth_id, int lmac_id, uintptr_t *mac_cmds, int size);
#endif

/* Generic PHY driver APIs to be exposed to other PHY drivers */
void phy_generic_probe(int eth_id, int lmac_id);
void phy_generic_reset(int eth_id, int lmac_id);
void phy_generic_shutdown(int eth_id, int lmac_id);
void phy_generic_config(int eth_id, int lmac_id);
void phy_generic_set_an(int eth_id, int lmac_id);
void phy_generic_c45_get_link_status(int eth_id, int lmac_id, link_state_t *link);
void phy_generic_c22_get_link_status(int eth_id, int lmac_id, link_state_t *link);

phy_drv_t *phy_marvell_drv_lookup(int type);
phy_drv_t *phy_generic_drv_lookup(int type);
phy_drv_t *phy_vitesse_drv_lookup(int type);
#endif /* __CAVM_PHY_MGMT_H__ */
