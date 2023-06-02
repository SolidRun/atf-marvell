/*
 * Copyright (c) 2020 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#ifndef __PORTM_H__
#define __PORTM_H__

#include <platform_dt.h>

#define PORTM_MAX_AN_CFGS 10

typedef enum {
	PORTM_MODE_DISABLED       = 0,   /* Port is disabled (all chips) */
	PORTM_MODE_INVALID        = 1,   /* Invalid port specified */
	PORTM_MODE_INACTIVE       = 2,   /* Associated SERDES lane used by another Port */

	/* Ethernet modes */
	PORTM_MODE_SGMII          = 3,   /* SGMII, Serdes Speed: 1.25G, Data Speed: 1 lane x 1 MAC (10M..1G) */
	PORTM_MODE_1000BASE_X     = 4,   /* 1000BASE-X, Serdes Speed: 1.25G, Data Speed: 1*1G */
	PORTM_MODE_SFI_1G         = 5,   /* SFI_1G, Serdes Speed: 1.25G, Data Speed: 1*1G */
	PORTM_MODE_2500BASE_X     = 48,  /* 2500BASE-X, Serdes Speed: 3.125G, Data Speed: 1*2.5G */
	PORTM_MODE_5000BASE_X     = 49,  /* 5000BASE-X, Serdes Speed: 6.25G, Data Speed: 1*5G */
	PORTM_MODE_QSGMII         = 6,   /* QSGMII, Serdes Speed: 5G, Data Speed: 1 lane x 4 MACs (10M..1G) */
	PORTM_MODE_XFI            = 7,   /* XFI, Serdes Speed: 10.3125G, Data Speed: 1*10G */
	PORTM_MODE_SFI            = 8,   /* SFI, Serdes Speed: 10.3125G, Data Speed: 1*10G */
	PORTM_MODE_10GBASE_KR     = 9,   /* 10GBASE-KR, Serdes Speed: 10.3125G, Data Speed: 1*10G */
	PORTM_MODE_25GAUI_C2C     = 10,  /* 25GAUI_C2C, Serdes Speed: 25.78125G, Data Speed: 1*25G */
	PORTM_MODE_25GAUI_C2M     = 11,  /* 25GAUI_C2M, Serdes Speed: 25.78125G, Data Speed: 1*25G */
	PORTM_MODE_25GBASE_USR    = 63,  /* 25GBASE_USR, Serdes Speed: 25.78125G, Data Speed: 1*25G */
	PORTM_MODE_25GBASE_CR     = 12,  /* 25GBASE-CR, Serdes Speed: 25.78125G, Data Speed: 1*25G */
	PORTM_MODE_25GBASE_KR     = 13,  /* 25GBASE-KR, Serdes Speed: 25.78125G, Data Speed: 1*25G */
	PORTM_MODE_25GBASE_CR_C   = 14,  /* 25GBASE-CR Consortium, Serdes Speed: 25.78125G, Data Speed: 1*25G */
	PORTM_MODE_25GBASE_KR_C   = 15,  /* 25GBASE-KR Consortium, Serdes Speed: 25.78125G, Data Speed: 1*25G */
	PORTM_MODE_XLAUI          = 16,  /* XLAUI(C2C), Serdes Speed: 10.3125G, Data Speed: 4*10G */
	PORTM_MODE_XLAUI_C2M      = 17,  /* XLAUI_C2M, Serdes Speed: 10.3125G, Data Speed: 4*10G */
	PORTM_MODE_40GBASE_CR4    = 18,  /* 40GBASE-CR4, Serdes Speed: 10.3125G, Data Speed: 4*10G */
	PORTM_MODE_40GBASE_KR4    = 19,  /* 40GBASE-KR4, Serdes Speed: 10.3125G, Data Speed: 4*10G */
	PORTM_MODE_LAUI_2_C2C     = 20,  /* LAUI-2_C2C, Serdes Speed: 25.78125G, Data Speed: 2*25G */
	PORTM_MODE_LAUI_2_C2M     = 21,  /* LAUI-2_C2M, Serdes Speed: 25.78125G, Data Speed: 2*25G */
	PORTM_MODE_50GBASE_CR2_C  = 22,  /* 50GBASE-CR2 Consortium, Serdes Speed: 25.78125G, Data Speed: 2*25G */
	PORTM_MODE_50GBASE_KR2_C  = 23,  /* 50GBASE-KR2 Consortium, Serdes Speed: 25.78125G, Data Speed: 2*25G */
	PORTM_MODE_50GAUI_1_C2C   = 24,  /* 50GAUI-1_C2C, Serdes Speed: 26.5625G, Data Speed: 1*51.51G */
	PORTM_MODE_50GAUI_1_C2M   = 25,  /* 50GAUI-1_C2M, Serdes Speed: 26.5625G, Data Speed: 1*51.51G */
	PORTM_MODE_50GBASE_USR    = 26,  /* 50GBASE-USR, Serdes Speed: 26.5625G, Data Speed: 1*51.51G */
	PORTM_MODE_50GBASE_CR     = 27,  /* 50GBASE-CR, Serdes Speed: 26.5625G, Data Speed: 1*51.51G */
	PORTM_MODE_50GBASE_KR     = 28,  /* 50GBASE-KR, Serdes Speed: 26.5625G, Data Speed: 1*51.51G */
	PORTM_MODE_CAUI_4_C2C     = 29,  /* CAUI-4_C2C, Serdes Speed: 25.78125G, Data Speed: 4*25G */
	PORTM_MODE_CAUI_4_C2M     = 30,  /* CAUI-4_C2M, Serdes Speed: 25.78125G, Data Speed: 4*25G */
	PORTM_MODE_100GBASE_CR4   = 31,  /* 100GBASE-CR4, Serdes Speed: 25.78125G, Data Speed: 4*25G */
	PORTM_MODE_100GBASE_KR4   = 32,  /* 100GBASE-KR4, Serdes Speed: 25.78125G, Data Speed: 4*25G */
	PORTM_MODE_100GAUI_2_C2C  = 33,  /* 100GAUI-2_C2C, Serdes Speed: 26_5625G, Data Speed: 2*51.51G */
	PORTM_MODE_100GAUI_2_C2M  = 34,  /* 100GAUI-2_C2M, Serdes Speed: 26_5625G, Data Speed: 2*51.51G */
	PORTM_MODE_100GBASE_USR2  = 35,  /* 100GBASE-USR2, Serdes Speed: 26_5625G, Data Speed: 2*51.51G */
	PORTM_MODE_100GBASE_CR2   = 36,  /* 100GBASE-CR2, Serdes Speed: 26_5625G, Data Speed: 2*51.51G */
	PORTM_MODE_100GBASE_KR2   = 37,  /* 100GBASE-KR2, Serdes Speed: 26_5625G, Data Speed: 2*51.51G */
	PORTM_MODE_802_3AP        = 38,  /* Configure specific autoneg parameters using 802_3AP settings */

	/* USXGMII modes */
	PORTM_MODE_2_5G_SXGMII    = 50,  /* 2.5G-SXGMII, Serdes speed: 2.578125G; Data Speed: 1 MAC  (10M..2.5G), 1 lane */
	PORTM_MODE_5G_SXGMII      = 51,  /* 5G-SXGMII, Serdes speed: 5.15625G; Data Speed: 1 MAC  (10M..5G), 1 lane */
	PORTM_MODE_10G_SXGMII     = 39,  /* 10G-SXGMII, Serdes speed: 10.3125G; Data Speed: 1 MAC  (10M..10G), 1 lane */
	PORTM_MODE_10G_DXGMII     = 52,  /* 10G-DXGMII, Serdes speed: 10.3125G; Data Speed: 2 MACs (10M..5G), 1 lane */
	PORTM_MODE_10G_QXGMII     = 53,  /* 10G-QXGMII, Serdes speed: 10.3125G; Data Speed: 4 MACs (10M..2.5G), 1 lane */

	/* USGMII modes */
	PORTM_MODE_Q_USGMII       = 54,  /* Q-USGMII, Serdes Speed: 5G, Data Speed: 4 MACs (10M..1G), 1 lane */
	PORTM_MODE_O_USGMII       = 55,  /* O-USGMII, Serdes Speed: 10G, Data Speed: 8 MACs (10M..1G), 1 lane */

	/* CPRI modes */
	PORTM_MODE_CPRI_2_4G      = 40,  /* CPRI, Serdes speed: 2.4576G */
	PORTM_MODE_CPRI_3_1G      = 41,  /* CPRI, Serdes speed: 3.072G */
	PORTM_MODE_CPRI_4_9G      = 42,  /* CPRI, Serdes speed: 4.9152G */
	PORTM_MODE_CPRI_6_1G      = 43,  /* CPRI, Serdes speed: 6.144G */
	PORTM_MODE_CPRI_9_8G      = 44,  /* CPRI, Serdes speed: 9.8304G */
	PORTM_MODE_CPRI_2_4G_TEST = 56,  /* CPRI, Serdes speed: 2.4576G, Rx/Tx rates at 2.4G */
	PORTM_MODE_CPRI_3_1G_TEST = 57,  /* CPRI, Serdes speed: 3.072G,  Rx/Tx rates at 3.1G */
	PORTM_MODE_CPRI_4_9G_TEST = 58,  /* CPRI, Serdes speed: 4.9152G, Rx/Tx rates at 4.9G */
	PORTM_MODE_CPRI_6_1G_TEST = 59,  /* CPRI, Serdes speed: 6.144G,  Rx/Tx rates at 6.1G */
	PORTM_MODE_CPRI_9_8G_TEST = 60,  /* CPRI, Serdes speed: 9.8304G, Rx/Tx rates at 9.8G */
	PORTM_MODE_CPRI_12_3G_TEST = 61,  /* CPRI, Serdes speed: 12.288G, Rx/Tx rates at 12.3G */
	PORTM_MODE_CPRI_19_7G_TEST = 62,  /* CPRI, Serdes speed: 19.6608G, Rx/Tx rates at 19.7G */

	/* JESD204C modes */
	PORTM_MODE_JESD204C_12_2G = 45,  /* JESD204C, Serdes speed: 12.16512G */
	PORTM_MODE_JESD204C_16_2G = 46,  /* JESD204C, Serdes speed: 16.22016G */
	PORTM_MODE_JESD204C_24_3G = 47,  /* JESD204C, Serdes speed: 24.33024G */

	PORTM_MODE_LAST           = 64,  /* Always has to be the largest number */
} cn10k_portm_modes_t;

typedef struct portm_tx_tuning {
	cn10k_portm_modes_t portm_mode;
	int tx_main;
	int tx_post;
	int tx_pre1;
	int tx_pre2;
} portm_tx_tuning_t;

typedef struct portm_ap_802_3_adv {
	uint32_t  an_1000base_kx : 1;      /* Advertise 1000BASE-KX support */
	uint32_t  an_10gbase_kx4 : 1;      /* Advertise 10GBASE-KR support */
	uint32_t  an_10gbase_kr : 1;       /* Advertise 10GBASE-KR support */
	uint32_t  an_40gbase_kr4 : 1;      /* Advertise 40GBASE-KR4 support */
	uint32_t  an_40gbase_cr4 : 1;      /* Advertise 40GBASE-CR4 support */
	uint32_t  an_100gbase_cr10 : 1;    /* Advertise 100GBASE-CR10 support */
	uint32_t  an_100gbase_kp4 : 1;     /* Advertise 100GBASE-KP4 support */
	uint32_t  an_100gbase_kr4 : 1;     /* Advertise 100GBASE-KR4 support */
	uint32_t  an_100gbase_cr4 : 1;     /* Advertise 100GBASE-CR4 support */
	uint32_t  an_25gbase_kcrs : 1;     /* Advertise 25GBASE-KR/CR-S(short) support */
	uint32_t  an_25gbase_kcr : 1;      /* Advertise 25GBASE-KR/CR support */
	uint32_t  an_2_5gbase_kx : 1;      /* Advertise 2.5GBASE-KX support */
	uint32_t  an_5gbase_kr : 1;        /* Advertise 5GBASE-KR support */
	uint32_t  an_50gbase_kcr : 1;      /* Advertise 50GBASE-KR/CR support */
	uint32_t  an_100gbase_kcr2 : 1;    /* Advertise 100GBASE-KR2/CR2 support */
	uint32_t  an_200gbase_kcr4 : 1;    /* Advertise 200GBASE-KR4/CR4 support */
	uint32_t  an_25gbase_kr_cons : 1;  /* Advertise 25GBASE-KR Consortium support */
	uint32_t  an_25gbase_cr_cons : 1;  /* Advertise 25GBASE-CR Consortium support */
	uint32_t  an_50gbase_kr2_cons : 1; /* Advertise 50GBASE-KR2 Consortium support */
	uint32_t  an_50gbase_cr2_cons : 1; /* Advertise 50GBASE-CR2 Consortium support */
	uint32_t  fec_10g_abil : 1;        /* Advertise FEC ability (10Gb/s per lane only) */
	uint32_t  fec_25g_rs_abil : 1;     /* Advertise 25Gb/s per lane RS-FEC ability (Consortium Only) */
	uint32_t  fec_25g_baser_abil : 1;  /* Advertise 25Gb/s per lane BASE-R ability (Consortium Only) */
	uint32_t  fec_10g_req : 1;         /* Advertise 10Gb/s per lane BASE-R FEC requested */
	uint32_t  fec_25g_rs : 1;          /* Advertise 25Gb/s per lane RS-FEC requested */
	uint32_t  fec_25g_baser : 1;       /* Advertise 25Gb/s per lane BASE-R FEC requested */
	uint32_t  fec_25g_rs_cons : 1;     /* Advertise 25Gb/s per lane RS-FEC requested (Consortium Only) */
	uint32_t  fec_25g_baser_cons : 1;  /* Advertise 25Gb/s per lane BASE-R FEC requested (Consortium Only) */
	uint32_t  fc_pause : 1;            /* Advertise Symmetric pause capability */
	uint32_t  fc_asm_dir : 1;          /* Advertise support for Asymmetric pause */
	uint32_t  an_nonce_dis : 1;        /* Disables Nonce check. Loopback=1 (Nonce disabled), Normal=0 */
} portm_ap_802_3_adv_t;

typedef enum {
	PORTM_FEC_DISABLED = 0,      /* No FEC requested */
	PORTM_FEC_BASER = 1,         /* BASE-R FEC requested */
	PORTM_FEC_RS = 2,            /* RS-FEC requested */
	PORTM_FEC_BASER_RS = 3,      /* BASE-R and RS-FEC requested */
	PORTM_FEC_RS_528_ONLY = 128, /* RSFEC(528,514) ONLY */
	PORTM_FEC_RS_544_ONLY = 256, /* RSFEC(544,514) ONLY */

	PORTM_FEC_LAST,
} cn10k_portm_fec_t;

typedef struct portm_ap_802_3_config {
	cn10k_portm_modes_t     portm_mode[PORTM_MAX_AN_CFGS]; /* 802.3AP Tech to advertise */
	cn10k_portm_fec_t       fec_req[PORTM_MAX_AN_CFGS];    /* Requested FEC */
	int                     fec_abil[PORTM_MAX_AN_CFGS];   /* Sets fec_abil bit for feq requested */
} portm_ap_802_3_config_t;

typedef enum {
	PORTM_FEC_ABIL_DISABLED = 0, /* Disable FEC ability advertisement */
	PORTM_FEC_ABIL_BASER = 1,    /* Enable BASE-R FEC abil advertisements */
	PORTM_FEC_ABIL_RS = 2,       /* Enable RS-FEC ability advertisements */
	PORTM_FEC_ABIL_BASER_RS = 3, /* Enable BASE-R and RS-FEC abil advertisements */
} cn10k_portm_fec_abil_t;

typedef enum {
	PORTM_DIS = 0,     /* Disabled port */
	PORTM_ETH = 1,     /* Protocol used for Ethernet */
	PORTM_JESD = 2,    /* Protocol used for JESD */
	PORTM_CPRI = 3,    /* Protocol used for CPRI */
} cn10k_portm_mac_type_t;

typedef enum {
	PORTM_PCS_NONE        = 0,   /* No Eth PCS or 802.3ap mode */
	PORTM_PCS_1000BASE_X  = 1,   /* SGMII/1000BASE-X */
	PORTM_PCS_QSGMII      = 2,   /* QSGMII */
	PORTM_PCS_USGMII      = 11,  /* Q-USGMII, O-USGMII */
	PORTM_PCS_10GBASE_R   = 3,   /* XFI, SFI, 10GBASE-KR */
	PORTM_PCS_USXGMII     = 4,   /* 2.5G-SXGMII, 5G-SXGMII, 10G-SXGMII, 10G-DXGMII, 10G-QXGMII */
	PORTM_PCS_25GBASE_R   = 5,   /* 25GAUI, 25GBASE-KR/CR */
	PORTM_PCS_40GBASE_R4  = 6,   /* XLAUI-4, 40GBASE-KR4/CR4 */
	PORTM_PCS_50GBASE_R2  = 7,   /* LAUI-2, 50GBASE-KR2/CR2 */
	PORTM_PCS_50GBASE_R1  = 8,   /* 50GAUI-1, 50GBASE-KR/CR */
	PORTM_PCS_100GBASE_R4 = 9,   /* CAUI-4, 100GBASE-KR4/CR4 */
	PORTM_PCS_100GBASE_R2 = 10,  /* 100GAUI-2, 100GBASE-KR2/CR2 */
} cn10k_portm_pcs_type_t;

typedef enum portm_gserm_lpbk_mode {
	PORTM_LPBK_MODE_NONE,
	PORTM_LPBK_MODE_NEA,
	PORTM_LPBK_MODE_NED,
	PORTM_LPBK_MODE_FED,
} portm_gserm_lpbk_mode_t;

typedef enum portm_gserm_prbs_mode {
	PORTM_PRBS_MODE_NONE,
	PORTM_PRBS_MODE_GEN,
	PORTM_PRBS_MODE_CHECK,
	PORTM_PRBS_MODE_BOTH,
} portm_gserm_prbs_mode_t;

typedef enum portm_rx_termination {
	PORTM_RX_TERMINATION_AC = 0,
	PORTM_RX_TERMINATION_DC = 1,
} portm_rx_termination_t;

/**
 * The following structure is used to describe the possible modes for a PORTM.
 * Each chip defines an array of these per PORTM to describe what modes the
 * user is allowed to select.
 */
typedef struct {
	cn10k_portm_modes_t     mode  : 8;      /* Mode of the PORTM */
	cn10k_portm_fec_t       fec : 10;       /* Which FEC's are supported */
	uint8_t                 serdes_num : 4; /* Number of SERDES lanes used by PORTM mode */
	uint8_t                 mac_num : 4;    /* Number of MACs used by PORTM mode */
	uint8_t                 ap_sup : 1;     /* Set if 802_3AP supported mode */
	uint8_t                 fec_abil : 1;   /* Set if PORTM mode supports FEC_ABIL */
	cn10k_portm_mac_type_t  mac_type: 4;    /* MAC type used by portm_mode */
	uint32_t                speed_mhz;      /* Datarate speed in MHz */
	cn10k_portm_pcs_type_t  pcs_type;       /* PCS type used by portm_mode (Eth only) */
} cn10k_portm_mode_desc_t;

/**
 * The following structure is used to map PORTM
 * to their associated GSER lanes and MACs.
 * Each chip defines an array of these.
 */
typedef struct {
	int    portm           : 8;      /* PORTM port */
	int    gser            : 10;     /* connected GSER */
	int    gser_lane       : 4;      /* Lowest connected GSER lane */
	int    max_gser_lane   : 4;      /* Maximum GSERM lane # supported by PORTM (e.g. GSERMx Lane 3) */
	int    mac_eth         : 8;      /* connected Ethernet/RPM MAC */
	int    mac_eth_lmac    : 8;      /* connected Ethernet RPM lmac */
	int    mac_other       : 8;      /* connected CPRI/JESD MAC */
	int    mac_other_lane  : 8;      /* connected CPRI/JESD MAC */
} cn10k_portm_gserm_mac_map_t;

/* Define PORTM structure. */
typedef struct portm_config {
	cn10k_portm_modes_t portm_mode;    /* Current PORTM mode */
	int port_enable;                   /* Set to 1 if port is enabled */
	int gserm;                         /* GSERM number */
	cn10k_portm_mac_type_t mac_type;   /* MAC type used by portm */
	cn10k_portm_pcs_type_t pcs_type;   /* PCS type used by portm_mode (Eth only) */
	int mac_num;                       /* MAC number */
	int mac_lane;                      /* Lowest MAC lane */
	int num_lmacs;                     /* Number of LMACs */
	int portms_used;                   /* Number of portm's used by port (typically equal to gser_numlanes) */
	uint32_t lane_map;                 /* Port MAC to SERDES lane mapping.
					    * Nibble # = Portm MAC lane (fixed #)
					    * Nibble Value = Connected SERDES lane
					    */
	cn10k_portm_fec_t fec;             /* PORTM FEC.*/
	cn10k_portm_fec_t line_fec;        /* PHY Line-side FEC.*/
	int gser_numlanes;                 /* Number of SERDES lanes used by current portm_mode */
	int an_lt_ena;                     /* Set to 1 if Clause 72 AN enabled */
	int an_master_lane;                /* AN master lane */
	portm_ap_802_3_adv_t ap_802_3_adv; /* 802.3 AP advertisement struct */
	portm_gserm_lpbk_mode_t gserm_lpbk_mode; /* Specifies current PORTM GSERM loopback mode */
	int gserm_prbs_ena;                /* Specifies whether GSERM PRBS is enabled on PORTM */
	portm_rx_termination_t rx_term;    /* Specifies Rx termination (0=AC, 1=DC) */
	/* Index = MAC lane #'s */
	int tx_main[MAX_LANES_PER_PORTM];   /* Current tx main setting */
	int tx_post[MAX_LANES_PER_PORTM];   /* Current tx post setting */
	int tx_pre1[MAX_LANES_PER_PORTM];   /* Current tx pre1 setting */
	int tx_pre2[MAX_LANES_PER_PORTM];   /* Current tx pre2 setting */
	int tx_pol[MAX_LANES_PER_PORTM];    /* Tx Polarity */
	int rx_pol[MAX_LANES_PER_PORTM];    /* Rx Polarity */
	int tx_precode[MAX_LANES_PER_PORTM];  /* Tx Precode Enable */
	int rx_precode[MAX_LANES_PER_PORTM];  /* Rx Precode Enable */
} portm_config_t;

/**
 * Convert a PORT mode into a configuration variable string value
 *
 * @param mode	 Mode to convert
 *
 * @return configuration value string
 */
const char *cn10k_portm_mode_to_cfg_str(cn10k_portm_modes_t mode);

/**
 * Convert a PORTM MAC type into a configuration variable string value
 *
 * @param mac_type    MAC type to convert
 *
 * @return configuration value string
 */
const char *cn10k_portm_mac_type_to_cfg_str(cn10k_portm_mac_type_t mac_type);

/**
 * Convert FEC type into a string value
 *
 * @param fec_type: FEC type to convert
 * @return: fec type string
 */
const char *cn10k_portm_fec_type_to_str(cn10k_portm_fec_t fec_type);

/**
 * Convert a string value into a fec type
 *
 * @param val: string value
 * @return: fec type
 */
cn10k_portm_fec_t cn10k_portm_fec_str_to_type(const char *val);

/**
 * Convert a configuration variable value string into a mode
 *
 * @param val  Configuration variable value
 *
 * @return mode
 */
cn10k_portm_modes_t cn10k_portm_cfg_string_to_mode(const char *val);

/**
 * Get a supported mode for a PORTM
 *
 * @param portm  PORTM to query
 * @param index  Index into modes list. Start at zero and increment until the PORTM
 *               mode is disabled.
 *
 * @return PORTM mode
 */
cn10k_portm_modes_t cn10k_portm_get_mode(int portm, int index);

/**
 * Get the first portm connected to GSERM
 *
 * @param gserm GSERM to query
 *
 * @return PORTM num, -1 on failure
 */
int cn10k_portm_gserm_get_first_portm_num(int gserm);

/**
 * Get the associated GSER num for a PORTM
 *
 * @param portm  PORTM to query
 *
 * @return GSER num
 */
int cn10k_portm_get_gser_num(int portm);

/**
 * Get the associated GSER lane num for a PORTM
 *
 * @param portm  PORTM to query
 *
 * @return GSER lane num
 */
int cn10k_portm_get_gser_lane_num(int portm);

/**
 * Get the maximum GSER lane num for a PORTM
 * e.g. If connected to 4-lane GSERM, value would be 3 (lane 3 is max)
 *
 * @param portm  PORTM to query
 *
 * @return GSER lane num
 */
int cn10k_portm_get_max_gser_lane_num(int portm);

/**
 * Return the number of PORTM modes supported for the port
 *
 * @return Number of modes supported
 */
int cn10k_get_portm_mode_count(int portm);

/**
 * Get a supported FEC(s) for a PORTM mode
 *
 * @param  mode  PORTM mode to query
 *
 * @return PORTM fec(s)
 */
cn10k_portm_fec_t cn10k_portm_get_mode_desc_fec(cn10k_portm_modes_t mode);

/**
 * Get the Lowest supported FEC for a PORTM mode
 *
 * @param  mode  PORTM mode to query
 *
 * @return PORTM fec
 */
cn10k_portm_fec_t cn10k_portm_get_mode_desc_fec_low(cn10k_portm_modes_t mode);

/**
 * Check if a FEC is valid for a PORTM mode
 *
 * @param  mode  PORTM mode
 * @param  *fec   If invalid, update FEC to supported FEC
 *
 * @return 1 = valid, 0 = not valid
 */
int cn10k_portm_fec_valid(cn10k_portm_modes_t mode, cn10k_portm_fec_t *fec);

/**
 * Get the number SERDES lanes used by PORTM mode
 *
 * @param  mode  PORTM mode to query
 *
 * @return PORTM serdes_num
 */
int cn10k_portm_get_mode_desc_serdes_num(cn10k_portm_modes_t mode);

/**
 * Get the number MACs used by PORTM mode
 *
 * @param  mode  PORTM mode to query
 *
 * @return PORTM mac_num
 */
int cn10k_portm_get_mode_desc_mac_num(cn10k_portm_modes_t mode);

/**
 * Check whether PORTM mode support 802_3AP
 *
 * @param  mode  PORTM mode to query
 *
 * @return 1 if supported, 0 if not, -1 mode invalid
 */
int cn10k_portm_get_mode_desc_ap_sup(cn10k_portm_modes_t mode);

/**
 * Get the datarate in MHz for a PORTM mode
 *
 * @param  mode  PORTM mode to query
 *
 * @return 1 if supported, 0 if not, -1 mode invalid
 */
int cn10k_portm_get_mode_desc_speed_mhz(cn10k_portm_modes_t mode);

/**
 * Get the MAC type for a PORTM mode
 *
 * @param  mode  PORTM mode to query
 *
 * @return 1 if supported, 0 if not, -1 mode invalid
 */
int cn10k_portm_get_mode_desc_mac_type(cn10k_portm_modes_t mode);

/**
 * Get the associated RPM num for a PORTM
 *
 * @param portm  PORTM to query
 *
 * @return RPM num
 */
int cn10k_portm_get_rpm_num(int portm);

/**
 * Get the associated RPM LMAC num for a PORTM
 *
 * @param portm  PORTM to query
 *
 * @return RPM LMAC num
 */
int cn10k_portm_get_rpm_lmac_num(int portm);

/**
 * Get the associated Other MAC (e.g. CPRI, JESD) num for a PORTM
 *
 * @param portm  PORTM to query
 *
 * @return RPM num
 */
int cn10k_portm_get_other_mac_num(int portm);

/**
 * Get the associated Other MACs (e.g. CPRI, JESD) lowest lane num for a PORTM
 *
 * @param portm  PORTM to query
 *
 * @return RPM num
 */
int cn10k_portm_get_other_mac_lane_num(int portm);

/**
 * Return an array describing the modes allowed for a PORTM
 *
 * @param portm    PORTM to describe
 *
 * @return Mode description
 */
const cn10k_portm_modes_t *portm_get_mode_desc(int portm);

/**
 * Check whether PORTM mode supports FEC Abil
 *
 * @param  mode  PORTM mode to query
 *
 * @return 1 if supported, 0 if not
 */
cn10k_portm_fec_abil_t cn10k_portm_get_mode_desc_fec_abil(cn10k_portm_modes_t mode);

/**
 * Checks whether mode is supported on portm of chip
 *
 * @param portm       PORTM to query
 * @param portm_mode  PORTM mode to query
 *
 * @return 1 valid, 0 invalid
 */
int cn10k_portm_mode_valid(int portm, cn10k_portm_modes_t portm_mode);

/**
 * Get PCS type used by PORTM mode
 *
 * @param  mode  PORTM mode to query
 *
 * @return PCS type
 */
int cn10k_portm_get_pcs_type(cn10k_portm_modes_t mode);

/**
 * Get the default Tx Equalization settings for PORTM mode
 *
 * @param  mode  PORTM mode to query
 *
 * @return 0 = valid tx_tuning.portm_mode, 1 = invalid portm_mode
 */
int cn10k_portm_get_default_tx_eq(portm_tx_tuning_t *tx_tuning);

/**
 * Checks whether the Tx tuning settings are valid
 *
 * @param  portm_idx  portm
 * @param  index      portm lane index
 * @param  tx_tuning  Tx tuning struct
 *
 * @return 1 = Valid, 0 = Invalid
 */
int cn10k_portm_tx_tuning_valid(int portm_idx, int index, portm_tx_tuning_t *tx_tuning);

/**
 * Updates the 802.3AP advertisement struct based on portm_mode and FEC settings
 *
 * @param  mode_idx   portm mode
 * @param  fec_types  FEC(s) Requested
 * @param  fec_abil   FEC(s) Abilities
 * @param  *ap_adv    802.3AP advertisement struct
 *
 */
void cn10k_portm_update_802_3ap_adv(cn10k_portm_modes_t mode_idx,
				    cn10k_portm_fec_t fec_types, int fec_abil,
				    portm_ap_802_3_adv_t *ap_adv);

/**
 * Updates the 802.3AP advertisement struct based on FEC(s) requested
 * Clears any exiting FEC requests prior to programming new FEC requests
 * FEC settings are programmed based on current mode advertisements.
 * Note: does not update FEC abilities
 * @param  fec_types  FEC(s) Requested
 * @param  *ap_adv    802.3AP advertisement struct
 *
 */
void cn10k_portm_update_802_3ap_fec(cn10k_portm_fec_t fec_types,
				    portm_ap_802_3_adv_t *ap_adv);

#endif /* __PORTM_H__ */
