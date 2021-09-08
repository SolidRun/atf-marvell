/*
 * Copyright (C) 2020 Marvell International Ltd.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#ifndef __PORTM_H__
#define __PORTM_H__

#include <platform_dt.h>

#define PORTM_MAX_AN_CFGS 10

typedef enum {
	PORTM_MODE_DISABLED = 0,  /* Port is disabled (all chips) */
	PORTM_MODE_INVALID,       /* Invalid port specified */
	PORTM_MODE_INACTIVE,      /* Associated SERDES lane used by another Port */

	/* Ethernet modes */
	PORTM_MODE_SGMII,         /* SGMII, Serdes Speed: 1.25G, Data Speed: 1 lane x 1 MAC (10M..1G) */
	PORTM_MODE_1000BASE_X,    /* 1000BASE-X, Serdes Speed: 1.25G, Data Speed: 1*1G */
	PORTM_MODE_SFI_1G,        /* 5 - SFI_1G, Serdes Speed: 1.25G, Data Speed: 1*1G */
	PORTM_MODE_QSGMII,        /* QSGMII, Serdes Speed: 5G, Data Speed: 1 lane x 4 MACs (10M..1G) */
	PORTM_MODE_XFI,           /* XFI, Serdes Speed: 10.3125G, Data Speed: 1*10G */
	PORTM_MODE_SFI,           /* SFI, Serdes Speed: 10.3125G, Data Speed: 1*10G */
	PORTM_MODE_10GBASE_KR,    /* 10GBASE-KR, Serdes Speed: 10.3125G, Data Speed: 1*10G */
	PORTM_MODE_25GAUI_C2C,    /* 10 - 25GAUI_C2C, Serdes Speed: 25.78125G, Data Speed: 1*25G */
	PORTM_MODE_25GAUI_C2M,    /* 25GAUI_C2M, Serdes Speed: 25.78125G, Data Speed: 1*25G */
	PORTM_MODE_25GBASE_CR,    /* 25GBASE-CR, Serdes Speed: 25.78125G, Data Speed: 1*25G */
	PORTM_MODE_25GBASE_KR,    /* 25GBASE-KR, Serdes Speed: 25.78125G, Data Speed: 1*25G */
	PORTM_MODE_25GBASE_CR_C,  /* 25GBASE-CR Consortium, Serdes Speed: 25.78125G, Data Speed: 1*25G */
	PORTM_MODE_25GBASE_KR_C,  /* 15 - 25GBASE-KR Consortium, Serdes Speed: 25.78125G, Data Speed: 1*25G */
	PORTM_MODE_XLAUI,         /* XLAUI(C2C), Serdes Speed: 10.3125G, Data Speed: 4*10G */
	PORTM_MODE_XLAUI_C2M,     /* XLAUI_C2M, Serdes Speed: 10.3125G, Data Speed: 4*10G */
	PORTM_MODE_40GBASE_CR4,   /* 40GBASE-CR4, Serdes Speed: 10.3125G, Data Speed: 4*10G */
	PORTM_MODE_40GBASE_KR4,   /* 40GBASE-KR4, Serdes Speed: 10.3125G, Data Speed: 4*10G */
	PORTM_MODE_LAUI_2_C2C,    /* 20 - LAUI-2_C2C, Serdes Speed: 25.78125G, Data Speed: 2*25G */
	PORTM_MODE_LAUI_2_C2M,    /* LAUI-2_C2M, Serdes Speed: 25.78125G, Data Speed: 2*25G */
	PORTM_MODE_50GBASE_CR2_C, /* 50GBASE-CR2 Consortium, Serdes Speed: 25.78125G, Data Speed: 2*25G */
	PORTM_MODE_50GBASE_KR2_C, /* 50GBASE-KR2 Consortium, Serdes Speed: 25.78125G, Data Speed: 2*25G */
	PORTM_MODE_50GAUI_1_C2C,  /* 50GAUI-1_C2C, Serdes Speed: 26.5625G, Data Speed: 1*51.51G */
	PORTM_MODE_50GAUI_1_C2M,  /* 25 - 50GAUI-1_C2M, Serdes Speed: 26.5625G, Data Speed: 1*51.51G */
	PORTM_MODE_50GBASE_USR,   /* 50GBASE-USR, Serdes Speed: 26.5625G, Data Speed: 1*51.51G */
	PORTM_MODE_50GBASE_CR,    /* 50GBASE-CR, Serdes Speed: 26.5625G, Data Speed: 1*51.51G */
	PORTM_MODE_50GBASE_KR,    /* 50GBASE-KR, Serdes Speed: 26.5625G, Data Speed: 1*51.51G */
	PORTM_MODE_CAUI_4_C2C,    /* CAUI-4_C2C, Serdes Speed: 25.78125G, Data Speed: 4*25G */
	PORTM_MODE_CAUI_4_C2M,    /* 30 - CAUI-4_C2M, Serdes Speed: 25.78125G, Data Speed: 4*25G */
	PORTM_MODE_100GBASE_CR4,  /* 100GBASE-CR4, Serdes Speed: 25.78125G, Data Speed: 4*25G */
	PORTM_MODE_100GBASE_KR4,  /* 100GBASE-KR4, Serdes Speed: 25.78125G, Data Speed: 4*25G */
	PORTM_MODE_100GAUI_2_C2C, /* 100GAUI-2_C2C, Serdes Speed: 26_5625G, Data Speed: 2*51.51G */
	PORTM_MODE_100GAUI_2_C2M, /* 100GAUI-2_C2M, Serdes Speed: 26_5625G, Data Speed: 2*51.51G */
	PORTM_MODE_100GBASE_USR2, /* 35 - 100GBASE-USR2, Serdes Speed: 26_5625G, Data Speed: 2*51.51G */
	PORTM_MODE_100GBASE_CR2,  /* 100GBASE-CR2, Serdes Speed: 26_5625G, Data Speed: 2*51.51G */
	PORTM_MODE_100GBASE_KR2,  /* 100GBASE-KR2, Serdes Speed: 26_5625G, Data Speed: 2*51.51G */
	PORTM_MODE_802_3AP,       /* Configure specific autoneg parameters using 802_3AP settings */
	/* 1 MAC USXGMII modes */
	PORTM_MODE_SXGMII_10G,    /* USXGMII, Serdes speed: 10.3125G; Data Speed: 1 MAC  (10M..10G), 1 lane */

	/* CPRI modes */
	PORTM_MODE_CPRI_2_4G,     /* 40 - CPRI, Serdes speed: 2.4576G */
	PORTM_MODE_CPRI_3_1G,     /* CPRI, Serdes speed: 3.072G */
	PORTM_MODE_CPRI_4_9G,     /* CPRI, Serdes speed: 4.9152G */
	PORTM_MODE_CPRI_6_1G,     /* CPRI, Serdes speed: 6.144G */
	PORTM_MODE_CPRI_9_8G,     /* CPRI, Serdes speed: 9.8304G */

	/* JESD204C modes */
	PORTM_MODE_JESD204C_12_2G, /* 45 - JESD204C, Serdes speed: 12.16512G */
	PORTM_MODE_JESD204C_16_2G, /* JESD204C, Serdes speed: 16.22016G */
	PORTM_MODE_JESD204C_24_3G, /* JESD204C, Serdes speed: 24.33024G */

	PORTM_MODE_LAST,
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
    PORTM_PCS_NONE = 0,    /* No Eth PCS or 802.3ap mode */
    PORTM_PCS_1000BASE_X,  /* SGMII/1000BASE-X */
    PORTM_PCS_QSGMII,      /* QSGMII */
    PORTM_PCS_10GBASE_R,   /* XFI, SFI, 10GBASE-KR */
    PORTM_PCS_USXGMII,     /* USXGMII */
    PORTM_PCS_25GBASE_R,   /* 25GAUI, 25GBASE-KR/CR */
    PORTM_PCS_40GBASE_R4,  /* XLAUI-4, 40GBASE-KR4/CR4 */
    PORTM_PCS_50GBASE_R2,  /* LAUI-2, 50GBASE-KR2/CR2 */
    PORTM_PCS_50GBASE_R1,  /* 50GAUI-1, 50GBASE-KR/CR */
    PORTM_PCS_100GBASE_R4, /* CAUI-4, 100GBASE-KR4/CR4 */
    PORTM_PCS_100GBASE_R2, /* 100GAUI-2, 100GBASE-KR2/CR2 */
} cn10k_portm_pcs_type_t;

/**
 * The following structure is used to describe the possible modes for a PORTM.
 * Each chip defines an array of these per PORTM to describe what modes the
 * user is allowed to select.
 */
typedef struct {
	cn10k_portm_modes_t     mode  : 8;      /* Mode of the PORTM */
	cn10k_portm_fec_t       fec : 10;       /* Which FEC's are supported */
	int                     serdes_num : 4; /* Number of SERDES lanes used by PORTM mode */
	int                     mac_num : 4;    /* Number of MACs used by PORTM mode */
	int                     ap_sup : 1;     /* Set if 802_3AP supported mode */
	int                     fec_abil : 1;   /* Set if PORTM mode supports FEC_ABIL */
	cn10k_portm_mac_type_t  mac_type: 4;    /* MAC type used by portm_mode */
	int                     speed_mhz;      /* Datarate speed in MHz */
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
	int mac_num;                       /* MAC number */
	int mac_lane;                      /* Lowest MAC lane */
	int portms_used;                   /* Number of portm's used by port (typically equal to gser_numlanes) */
	uint32_t lane_map;                 /* Port MAC to SERDES lane mapping.
					    * Nibble # = Portm MAC lane (fixed #)
					    * Nibble Value = Connected SERDES lane
					    */
	cn10k_portm_fec_t fec;             /* PORTM FEC.*/
	int gser_numlanes;                 /* Number of SERDES lanes used by current portm_mode */
	int an_lt_ena;                     /* Set to 1 if Clause 72 AN enabled */
	int an_master_lane;                /* AN master lane */
	portm_ap_802_3_adv_t ap_802_3_adv; /* 802.3 AP advertisement struct */
	/* Index = MAC lane #'s */
	int tx_main[MAX_LANES_PER_PORTM];   /* Current tx main setting */
	int tx_post[MAX_LANES_PER_PORTM];   /* Current tx post setting */
	int tx_pre1[MAX_LANES_PER_PORTM];   /* Current tx pre1 setting */
	int tx_pre2[MAX_LANES_PER_PORTM];   /* Current tx pre2 setting */
	int tx_pol[MAX_LANES_PER_PORTM];    /* Tx Polarity */
	int rx_pol[MAX_LANES_PER_PORTM];    /* Rx Polarity */
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
 * @param  tx_tuning  Tx tuning struct
 *
 * @return 1 = Valid, 0 = Invalid
 */
int cn10k_portm_tx_tuning_valid(portm_tx_tuning_t *tx_tuning);

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

#endif /* __PORTM_H__ */
