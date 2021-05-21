/*
 * Copyright (C) 2020 Marvell International Ltd.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#ifndef __PORTM_H__
#define __PORTM_H__

#define PORTM_MAX_LANE_CNT 4

#define PORTM_MAX	28

typedef enum {
	PORTM_MODE_DISABLED = 0,  /* Port is disabled (all chips) */
	PORTM_MODE_INVALID,       /* Invalid port specified */
	PORTM_MODE_INACTIVE,      /* Associated SERDES lane used by another Port */

	/* Ethernet modes */
	PORTM_MODE_SGMII,         /* SGMII, Serdes Speed: 1.25G, Data Speed: 1 lane x 1 MAC (10M..1G) */
	PORTM_MODE_1000BASE_X,    /* 1000BASE-X, Serdes Speed: 1.25G, Data Speed: 1*1G */
	PORTM_MODE_SFI_1G,        /* SFI_1G, Serdes Speed: 1.25G, Data Speed: 1*1G */
	PORTM_MODE_QSGMII,        /* QSGMII, Serdes Speed: 5G, Data Speed: 1 lane x 4 MACs (10M..1G) */
	PORTM_MODE_XFI,           /* XFI, Serdes Speed: 10.3125G, Data Speed: 1*10G */
	PORTM_MODE_SFI,       /* SFI_10G, Serdes Speed: 10.3125G, Data Speed: 1*10G */
	PORTM_MODE_10GBASE_KR,    /* 10GBASE-KR, Serdes Speed: 10.3125G, Data Speed: 1*10G */
	PORTM_MODE_25GAUI_C2C,    /* 25GAUI_C2C, Serdes Speed: 25.78125G, Data Speed: 1*25G */
	PORTM_MODE_25GAUI_C2M,    /* 25GAUI_C2M, Serdes Speed: 25.78125G, Data Speed: 1*25G */
	PORTM_MODE_25GBASE_CR,    /* 25GBASE-CR, Serdes Speed: 25.78125G, Data Speed: 1*25G */
	PORTM_MODE_25GBASE_KR,    /* 25GBASE-KR, Serdes Speed: 25.78125G, Data Speed: 1*25G */
	PORTM_MODE_25GBASE_CR_C,  /* 25GBASE-CR Consortium, Serdes Speed: 25.78125G, Data Speed: 1*25G */
	PORTM_MODE_25GBASE_KR_C,  /* 25GBASE-KR Consortium, Serdes Speed: 25.78125G, Data Speed: 1*25G */
	PORTM_MODE_XLAUI,         /* XLAUI(C2C), Serdes Speed: 10.3125G, Data Speed: 4*10G */
	PORTM_MODE_XLAUI_C2M,     /* XLAUI_C2M, Serdes Speed: 10.3125G, Data Speed: 4*10G */
	PORTM_MODE_40GBASE_CR4,   /* 40GBASE-CR4, Serdes Speed: 10.3125G, Data Speed: 4*10G */
	PORTM_MODE_40GBASE_KR4,   /* 40GBASE-KR4, Serdes Speed: 10.3125G, Data Speed: 4*10G */
	PORTM_MODE_LAUI_2_C2C,    /* LAUI-2_C2C, Serdes Speed: 25.78125G, Data Speed: 2*25G */
	PORTM_MODE_LAUI_2_C2M,    /* LAUI-2_C2M, Serdes Speed: 25.78125G, Data Speed: 2*25G */
	PORTM_MODE_50GBASE_CR2_C, /* 50GBASE-CR2 Consortium, Serdes Speed: 25.78125G, Data Speed: 2*25G */
	PORTM_MODE_50GBASE_KR2_C, /* 50GBASE-KR2 Consortium, Serdes Speed: 25.78125G, Data Speed: 2*25G */
	PORTM_MODE_50GAUI_1_C2C,  /* 50GAUI-1_C2C, Serdes Speed: 26.5625G, Data Speed: 1*51.51G */
	PORTM_MODE_50GAUI_1_C2M,  /* 50GAUI-1_C2M, Serdes Speed: 26.5625G, Data Speed: 1*51.51G */
	PORTM_MODE_50GBASE_CR,    /* 50GBASE-CR, Serdes Speed: 26.5625G, Data Speed: 1*51.51G */
	PORTM_MODE_50GBASE_KR,    /* 50GBASE-KR, Serdes Speed: 26.5625G, Data Speed: 1*51.51G */
	PORTM_MODE_CAUI_4_C2C,    /* CAUI-4_C2C, Serdes Speed: 25.78125G, Data Speed: 4*25G */
	PORTM_MODE_CAUI_4_C2M,    /* CAUI-4_C2M, Serdes Speed: 25.78125G, Data Speed: 4*25G */
	PORTM_MODE_100GBASE_CR4,  /* 100GBASE-CR4, Serdes Speed: 25.78125G, Data Speed: 4*25G */
	PORTM_MODE_100GBASE_KR4,  /* 100GBASE-KR4, Serdes Speed: 25.78125G, Data Speed: 4*25G */
	PORTM_MODE_100GAUI_2_C2C, /* 100GAUI-2_C2C, Serdes Speed: 26_5625G, Data Speed: 2*51.51G */
	PORTM_MODE_100GAUI_2_C2M, /* 100GAUI-2_C2M, Serdes Speed: 26_5625G, Data Speed: 2*51.51G */
	PORTM_MODE_100GBASE_CR2,  /* 100GBASE-CR2, Serdes Speed: 26_5625G, Data Speed: 2*51.51G */
	PORTM_MODE_100GBASE_KR2,  /* 100GBASE-KR2, Serdes Speed: 26_5625G, Data Speed: 2*51.51G */
	PORTM_MODE_802_3AP,       /* Configure specific autoneg parameters using 802_3AP settings */
	/* 1 MAC USXGMII modes */
	PORTM_MODE_SXGMII_10G,    /* USXGMII, Serdes speed: 10.3125G; Data Speed: 1 MAC  (10M..10G), 1 lane */

	/* CPRI modes */
	PORTM_MODE_CPRI_2_4G,     /* CPRI, Serdes speed: 2.4576G */
	PORTM_MODE_CPRI_4_9G,     /* CPRI, Serdes speed: 4.9152G */
	PORTM_MODE_CPRI_6_1G,     /* CPRI, Serdes speed: 6.144G */
	PORTM_MODE_CPRI_9_8G,     /* CPRI, Serdes speed: 9.8304G */
	PORTM_MODE_CPRI_10_1G,    /* CPRI, Serdes speed: 10.1376G */
	PORTM_MODE_CPRI_24_3G,    /* CPRI, Serdes speed: 24.33024G */

	/* JESD204B modes */
	PORTM_MODE_JESD204B_4_9G, /* JESD204B, Serdes speed: 4.9152G */
	PORTM_MODE_JESD204B_6_1G, /* JESD204B, Serdes speed: 6.144G */
	PORTM_MODE_JESD204B_7_3G, /* JESD204B, Serdes speed: 7.3728G */
	PORTM_MODE_JESD204B_9_8G, /* JESD204B, Serdes speed: 9.8304G */
	PORTM_MODE_JESD204B_12_1G, /* JESD204B, Serdes speed: 12.16512G */
	PORTM_MODE_JESD204B_14_7G, /* JESD204B, Serdes speed: 14.7456G */

	/* JESD204C modes */
	PORTM_MODE_JESD204C_2G,    /* JESD204C, Serdes speed: 2.02752G */
	PORTM_MODE_JESD204C_4G,    /* JESD204C, Serdes speed: 4.08804G */
	PORTM_MODE_JESD204C_8_1G,  /* JESD204C, Serdes speed: 8.11008G */
	PORTM_MODE_JESD204C_16_2G, /* JESD204C, Serdes speed: 16.22016G */
	PORTM_MODE_JESD204C_24_3G, /* JESD204C, Serdes speed: 24.33024G */

	PORTM_MODE_LAST,
} cn10k_portm_modes_t;

typedef enum {
	PORTM_FEC_DISABLED = 0,         /* No FEC requested */
	PORTM_FEC_BASER = 1,            /* BASE-R FEC requested */
	PORTM_FEC_RS = 2,            /* RS-FEC requested */
	PORTM_FEC_BASER_RS = 3,      /* BASE-R and RS-FEC requested */
	PORTM_FEC_RS_528_ONLY = 128, /* RSFEC(528,514) ONLY */
	PORTM_FEC_RS_544_ONLY = 256, /* RSFEC(544,514) ONLY */

	PORTM_FEC_LAST,
} cn10k_portm_fec_t;

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
	int    gser_lane       : 4;      /* Lowest connected GSER lane  */
	int    mac_eth         : 8;      /* connected Ethernet/RPM MAC */
	int    mac_eth_lmac    : 8;      /* connected Ethernet RPM lmac */
	int    mac_other       : 8;      /* connected CPRI/JESD MAC */
	int    mac_other_lane  : 8;      /* connected CPRI/JESD MAC */
} cn10k_portm_gserm_mac_map_t;

/**
 * Return the number of PORTM's supported for the chip
 *
 * @return Number of PORTM'S
 */
int cn10k_get_portm_count(void);

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
int cn10k_portm_get_mode_desc_fec_abil(cn10k_portm_modes_t mode);

/**
 * Checks whether mode is supported on portm of chip
 *
 * @param portm       PORTM to query
 * @param portm_mode  PORTM mode to query
 *
 * @return 1 valid, 0 invalid
 */
int cn10k_portm_mode_valid(int portm, cn10k_portm_modes_t portm_mode);

#endif /* __PORTM_H__ */
