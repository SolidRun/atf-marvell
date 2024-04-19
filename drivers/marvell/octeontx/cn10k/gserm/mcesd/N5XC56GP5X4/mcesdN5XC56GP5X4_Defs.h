/*******************************************************************************
Copyright (C) 2019, Marvell International Ltd. and its affiliates
If you received this File from Marvell and you have entered into a commercial
license agreement (a "Commercial License") with Marvell, the File is licensed
to you under the terms of the applicable Commercial License.
*******************************************************************************/

/********************************************************************
This file contains functions global definitions specific to Marvell
CE Serdes IP: 5FFP_COMPHY_56G_PIPE5_X4_4PLL
********************************************************************/
#ifndef MCESD_N5XC56GP5X4_DEFS_H
#define MCESD_N5XC56GP5X4_DEFS_H

#ifdef N5XC56GP5X4

#if C_LINKAGE
#if defined __cplusplus 
extern "C" {
#endif 
#endif

/* MCU Firmware constants */
#define N5XC56GP5X4_FW_MAX_SIZE         32768       /* Firmware max size in DWORDS */
#define N5XC56GP5X4_FW_BASE_ADDR        0x0000      /* Firmware base address */

/* Temperature Sensor constants */
#define N5XC56GP5X4_TSENE_GAIN          950
#define N5XC56GP5X4_TSENE_OFFSET        1180000

/* EOM constants */
#define N5XC56GP5X4_EYE_MAX_VOLT_STEPS  64
#define N5XC56GP5X4_EYE_MAX_PHASE_LEVEL 2048

/* Miscellaneous */
#define N5XC56GP5X4_TOTAL_LANES         4
#define N5XC56GP5X4_STRING_DASH         "-"
#define N5XC56GP5X4_STRING_PRESET_COE   "PRESET_COE"
#define N5XC56GP5X4_STRING_NORMAL_OP    "NORMAL_OP"
#define N5XC56GP5X4_STRING_INIT_COE     "INIT_COE"
#define N5XC56GP5X4_STRING_TRUE         "TRUE"
#define N5XC56GP5X4_STRING_FALSE        "FALSE"
#define N5XC56GP5X4_STRING_HOLD         "HOLD"
#define N5XC56GP5X4_STRING_INC          "INC"
#define N5XC56GP5X4_STRING_DEC          "DEC"
#define N5XC56GP5X4_STRING_NO_UPDATE    "NO_UPDATE"
#define N5XC56GP5X4_STRING_UPDATED      "UPDATED"
#define N5XC56GP5X4_STRING_MIN          "MIN"
#define N5XC56GP5X4_STRING_MAX          "MAX"
#define N5XC56GP5X4_STRING_PRESET0      "PRESET0"
#define N5XC56GP5X4_STRING_PRESET1      "PRESET1"
#define N5XC56GP5X4_STRING_PRESET2      "PRESET2"
#define N5XC56GP5X4_STRING_PRESET3      "PRESET3"
#define N5XC56GP5X4_STRING_PAM2         "PAM2"
#define N5XC56GP5X4_STRING_PAM4         "PAM4"
#define N5XC56GP5X4_STRING_PAM4_PRE     "PAM4_PRE"
#define N5XC56GP5X4_STRING_COEN3        "COE(-3)"
#define N5XC56GP5X4_STRING_COEN2        "COE(-2)"
#define N5XC56GP5X4_STRING_COEN1        "COE(-1)"
#define N5XC56GP5X4_STRING_COE0         "COE(0)"
#define N5XC56GP5X4_STRING_COE1         "COE(1)"
#define N5XC56GP5X4_STRING_NO_EQ        "NO_EQ"
#define N5XC56GP5X4_STRING_COE_LIMIT    "COE_LIMIT"
#define N5XC56GP5X4_STRING_COE_NA       "COE_NA"
#define N5XC56GP5X4_STRING_EQ_LIMIT     "EQ_LIMIT"
#define N5XC56GP5X4_STRING_EQ_COE_LIMIT "EQ_COE_LIMIT"

/* PHY Mode */
typedef enum
{
    N5XC56GP5X4_PHYMODE_SAS         = 1,
    N5XC56GP5X4_PHYMODE_SATA        = 0,
    N5XC56GP5X4_PHYMODE_PCIE        = 3,
    N5XC56GP5X4_PHYMODE_USB3        = 5,
    N5XC56GP5X4_PHYMODE_SERDES      = 4
} E_N5XC56GP5X4_PHYMODE;

/* SERDES Speeds */
typedef enum
{
    N5XC56GP5X4_SERDES_1P0625G      = 0,    /* 1.0625 Gbps*/
    N5XC56GP5X4_SERDES_1P2288G      = 1,    /* 1.2288 Gbps */
    N5XC56GP5X4_SERDES_1P25G        = 2,    /* 1.25 Gbps */
    N5XC56GP5X4_SERDES_2P02752G     = 50,   /* 2.02752 Gbps */
    N5XC56GP5X4_SERDES_2P125G       = 3,    /* 2.125 Gbps */
    N5XC56GP5X4_SERDES_2P4576G      = 4,    /* 2.4576 Gbps */
    N5XC56GP5X4_SERDES_2P5G         = 5,    /* 2.5 Gbps */
    N5XC56GP5X4_SERDES_2P57812G     = 46,   /* 2.578125 Gbps */
    N5XC56GP5X4_SERDES_3P125G       = 6,    /* 3.125 Gbps */
    N5XC56GP5X4_SERDES_4P08804G     = 51,   /* 4.08804 Gbps */
    N5XC56GP5X4_SERDES_4P25G        = 7,    /* 4.25 Gbps */
    N5XC56GP5X4_SERDES_4P9152G      = 8,    /* 4.9152 Gbps */
    N5XC56GP5X4_SERDES_5G           = 9,    /* 5 Gbps */
    N5XC56GP5X4_SERDES_5P15625G     = 10,   /* 5.15625 Gbps */
    N5XC56GP5X4_SERDES_6P144G       = 11,   /* 6.144 Gbps */
    N5XC56GP5X4_SERDES_6P25G        = 12,   /* 6.25 Gbps */
    N5XC56GP5X4_SERDES_7P3728G      = 52,   /* 7.3728 Gbps */
    N5XC56GP5X4_SERDES_7P5G         = 13,   /* 7.5 Gbps */
    N5XC56GP5X4_SERDES_8P11008G     = 53,   /* 8.11008 Gbps */
    N5XC56GP5X4_SERDES_8P5G         = 14,   /* 8.5 Gbps*/
    N5XC56GP5X4_SERDES_9P8304G      = 15,   /* 9.8304 Gbps */
    N5XC56GP5X4_SERDES_10G          = 49,   /* 10 Gbps */
    N5XC56GP5X4_SERDES_10P137G      = 16,   /* 10.137 Gbps */
    N5XC56GP5X4_SERDES_10P3125G     = 17,   /* 10.3125 Gbps */
    N5XC56GP5X4_SERDES_10P5187G     = 18,   /* 10.51875 Gbps */
    N5XC56GP5X4_SERDES_12P1651G     = 19,   /* 12.16512 Gbps */
    N5XC56GP5X4_SERDES_12P1875G     = 20,   /* 12.1875 Gbps */
    N5XC56GP5X4_SERDES_12P5G        = 21,   /* 12.5 Gbps */
    N5XC56GP5X4_SERDES_12P8906G     = 22,   /* 12.8906 Gbps */
    N5XC56GP5X4_SERDES_14P025G      = 23,   /* 14.025 Gbps */
    N5XC56GP5X4_SERDES_14P7456G     = 54,   /* 14.7456 Gbps */
    N5XC56GP5X4_SERDES_15G          = 47,   /* 15 Gbps */
    N5XC56GP5X4_SERDES_16P2201G     = 55,   /* 16.22016 Gbps */
    N5XC56GP5X4_SERDES_20P625G      = 24,   /* 20.625 Gbps */
    N5XC56GP5X4_SERDES_24P3302G     = 25,   /* 24.33024 Gbps */
    N5XC56GP5X4_SERDES_25P7812G     = 26,   /* 25.78125 Gbps */
    N5XC56GP5X4_SERDES_26P5625G     = 27,   /* 26.5625 Gbps */
    N5XC56GP5X4_SERDES_275G         = 28,   /* 27.5 Gbps*/
    N5XC56GP5X4_SERDES_28P05G       = 29,   /* 28.05 Gbps */
    N5XC56GP5X4_SERDES_28P125G      = 30,   /* 28.125 Gbps */
    N5XC56GP5X4_SERDES_32G          = 48,   /* 32 Gbps */
    N5XC56GP5X4_SERDES_46P25G       = 32,   /* 46.25 Gbps */
    N5XC56GP5X4_SERDES_51P5625G     = 34,   /* 51.5625 Gbps */
    N5XC56GP5X4_SERDES_53P125G      = 35,   /* 53.125 Gbps */
    N5XC56GP5X4_SERDES_56G          = 42,   /* 56 Gbps */
    N5XC56GP5X4_SERDES_56P1G        = 37,   /* 56.1 Gbps */
    N5XC56GP5X4_SERDES_56P25G       = 38,   /* 56.25 Gbps */
    N5XC56GP5X4_SERDES_64G          = 56,   /* 64G (R1.2+ only) */
    N5XC56GP5X4_SERDES_3P072G       = 57,   /* 3.072G (R1.2+ only) */
    N5XC56GP5X4_SERDES_12P288G      = 58,   /* 12.288G (R1.2+ only) */
    N5XC56GP5X4_SERDES_19P6608G     = 59,   /* 19.6608G (R1.2+ only) */
    N5XC56GP5X4_PCIE_2P5G,                  /* 2.5G (PCIE) */
    N5XC56GP5X4_PCIE_5G,                    /* 5G (PCIE) */
    N5XC56GP5X4_PCIE_8G,                    /* 8G (PCIE) */
    N5XC56GP5X4_PCIE_16G,                   /* 16G (PCIE) */
    N5XC56GP5X4_PCIE_32G,                   /* 32G (PCIE) */
} E_N5XC56GP5X4_SERDES_SPEED;

/* Reference Frequency Clock */
typedef enum
{
    N5XC56GP5X4_REFFREQ_25MHZ       = 0,    /* 25 MHz */
    N5XC56GP5X4_REFFREQ_30MHZ       = 1,    /* 30 MHz */
    N5XC56GP5X4_REFFREQ_40MHZ       = 2,    /* 40 MHz */
    N5XC56GP5X4_REFFREQ_50MHZ       = 3,    /* 50 MHz */
    N5XC56GP5X4_REFFREQ_62P5MHZ     = 4,    /* 62.5 MHz */
    N5XC56GP5X4_REFFREQ_100MHZ      = 5,    /* 100 MHz */
    N5XC56GP5X4_REFFREQ_125MHZ      = 6,    /* 125 MHz */
    N5XC56GP5X4_REFFREQ_156MHZ      = 7,    /* 156.25 MHz */
    N5XC56GP5X4_REFFREQ_122MHZ      = 8,    /* 122.88 MHz */
} E_N5XC56GP5X4_REFFREQ;

/* Reference Clock selection Group */
typedef enum
{
    N5XC56GP5X4_REFCLK_SEL_G1       = 0,    /* PIN_REFCLKC_IN_SIDE_A_G1 or PIN_REFCLKC_IN_SIDE_B_G1 */
    N5XC56GP5X4_REFCLK_SEL_G2       = 1     /* PIN_REFCLKC_IN_SIDE_A_G2 or PIN_REFCLKC_IN_SIDE_B_G2 */
} E_N5XC56GP5X4_REFCLK_SEL;

/* TX and RX Data Bus Width */
typedef enum
{
    N5XC56GP5X4_DATABUS_32BIT       = 0,
    N5XC56GP5X4_DATABUS_40BIT       = 1,
    N5XC56GP5X4_DATABUS_64BIT       = 2,
    N5XC56GP5X4_DATABUS_80BIT       = 3
} E_N5XC56GP5X4_DATABUS_WIDTH;

/* TX and RX Polarity */
typedef enum
{
    N5XC56GP5X4_POLARITY_NORMAL     = 0,
    N5XC56GP5X4_POLARITY_INV        = 1
} E_N5XC56GP5X4_POLARITY;

/* Data Path */
typedef enum
{
    N5XC56GP5X4_PATH_NEAR_END_LB    = 0,
    N5XC56GP5X4_PATH_LOCAL_LB       = 1,
    N5XC56GP5X4_PATH_EXTERNAL       = 2,
    N5XC56GP5X4_PATH_FAR_END_LB     = 3
} E_N5XC56GP5X4_DATAPATH;

/* Training Type */
typedef enum
{
    N5XC56GP5X4_TRAINING_TRX        = 0,
    N5XC56GP5X4_TRAINING_RX         = 1
} E_N5XC56GP5X4_TRAINING;

/* Training Timeout */
typedef struct
{
    MCESD_BOOL enable;
    MCESD_U16 timeout; /* milliseconds */
} S_N5XC56GP5X4_TRAIN_TIMEOUT;

/* PhyTest Type */
typedef enum {
    N5XC56GP5X4_PHYTEST_TX          = 0,
    N5XC56GP5X4_PHYTEST_RX          = 1,
} E_N5XC56GP5X4_PHYTEST;

/* Hardware Pins */
typedef enum
{
    N5XC56GP5X4_PIN_RESET           = 0,
    N5XC56GP5X4_PIN_ISOLATION       = 1,    /* PIN_ISOLATION_ENB */
    N5XC56GP5X4_PIN_BG_RDY          = 2,
    N5XC56GP5X4_PIN_SIF_SEL         = 3,
    N5XC56GP5X4_PIN_MCU_CLK         = 4,
    N5XC56GP5X4_PIN_DIRECTACCES     = 5,    /* PIN_DIRECT_ACCESS_EN */
    N5XC56GP5X4_PIN_PHY_MODE        = 6,
    N5XC56GP5X4_PIN_REFCLK_TX0      = 7,    /* PIN_REFCLK_SEL_TX0 */
    N5XC56GP5X4_PIN_REFCLK_TX1      = 8,    /* PIN_REFCLK_SEL_TX1 */
    N5XC56GP5X4_PIN_REFCLK_TX2      = 9,    /* PIN_REFCLK_SEL_TX2 */
    N5XC56GP5X4_PIN_REFCLK_TX3      = 10,   /* PIN_REFCLK_SEL_TX3 */
    N5XC56GP5X4_PIN_REFCLK_RX0      = 11,   /* PIN_REFCLK_SEL_RX0 */
    N5XC56GP5X4_PIN_REFCLK_RX1      = 12,   /* PIN_REFCLK_SEL_RX1 */
    N5XC56GP5X4_PIN_REFCLK_RX2      = 13,   /* PIN_REFCLK_SEL_RX2 */
    N5XC56GP5X4_PIN_REFCLK_RX3      = 14,   /* PIN_REFCLK_SEL_RX3 */
    N5XC56GP5X4_PIN_REFFREF_TX0     = 15,   /* PIN_REF_FREF_SEL_TX0 */
    N5XC56GP5X4_PIN_REFFREF_TX1     = 16,   /* PIN_REF_FREF_SEL_TX1 */
    N5XC56GP5X4_PIN_REFFREF_TX2     = 17,   /* PIN_REF_FREF_SEL_TX2 */
    N5XC56GP5X4_PIN_REFFREF_TX3     = 18,   /* PIN_REF_FREF_SEL_TX3 */
    N5XC56GP5X4_PIN_REFFREF_RX0     = 19,   /* PIN_REF_FREF_SEL_RX0 */
    N5XC56GP5X4_PIN_REFFREF_RX1     = 20,   /* PIN_REF_FREF_SEL_RX1 */
    N5XC56GP5X4_PIN_REFFREF_RX2     = 21,   /* PIN_REF_FREF_SEL_RX2 */
    N5XC56GP5X4_PIN_REFFREF_RX3     = 22,   /* PIN_REF_FREF_SEL_RX3 */
    N5XC56GP5X4_PIN_PHY_GEN_TX0     = 23,
    N5XC56GP5X4_PIN_PHY_GEN_TX1     = 24,
    N5XC56GP5X4_PIN_PHY_GEN_TX2     = 25,
    N5XC56GP5X4_PIN_PHY_GEN_TX3     = 26,
    N5XC56GP5X4_PIN_PHY_GEN_RX0     = 27,
    N5XC56GP5X4_PIN_PHY_GEN_RX1     = 28,
    N5XC56GP5X4_PIN_PHY_GEN_RX2     = 29,
    N5XC56GP5X4_PIN_PHY_GEN_RX3     = 30,
    N5XC56GP5X4_PIN_PU_PLL0         = 31,
    N5XC56GP5X4_PIN_PU_PLL1         = 32,
    N5XC56GP5X4_PIN_PU_PLL2         = 33,
    N5XC56GP5X4_PIN_PU_PLL3         = 34,
    N5XC56GP5X4_PIN_PU_RX0          = 35,
    N5XC56GP5X4_PIN_PU_RX1          = 36,
    N5XC56GP5X4_PIN_PU_RX2          = 37,
    N5XC56GP5X4_PIN_PU_RX3          = 38,
    N5XC56GP5X4_PIN_PU_TX0          = 39,
    N5XC56GP5X4_PIN_PU_TX1          = 40,
    N5XC56GP5X4_PIN_PU_TX2          = 41,
    N5XC56GP5X4_PIN_PU_TX3          = 42,
    N5XC56GP5X4_PIN_TX_IDLE0        = 43,
    N5XC56GP5X4_PIN_TX_IDLE1        = 44,
    N5XC56GP5X4_PIN_TX_IDLE2        = 45,
    N5XC56GP5X4_PIN_TX_IDLE3        = 46,
    N5XC56GP5X4_PIN_PU_IVREF        = 47,
    N5XC56GP5X4_PIN_RX_TRAINEN0     = 48,   /* PIN_RX_TRAIN_ENABLE0 */
    N5XC56GP5X4_PIN_RX_TRAINEN1     = 49,   /* PIN_RX_TRAIN_ENABLE1 */
    N5XC56GP5X4_PIN_RX_TRAINEN2     = 50,   /* PIN_RX_TRAIN_ENABLE2 */
    N5XC56GP5X4_PIN_RX_TRAINEN3     = 51,   /* PIN_RX_TRAIN_ENABLE3 */
    N5XC56GP5X4_PIN_RX_TRAINCO0     = 52,   /* PIN_RX_TRAIN_COMPLETE0 */
    N5XC56GP5X4_PIN_RX_TRAINCO1     = 53,   /* PIN_RX_TRAIN_COMPLETE1 */
    N5XC56GP5X4_PIN_RX_TRAINCO2     = 54,   /* PIN_RX_TRAIN_COMPLETE2 */
    N5XC56GP5X4_PIN_RX_TRAINCO3     = 55,   /* PIN_RX_TRAIN_COMPLETE3 */
    N5XC56GP5X4_PIN_RX_TRAINFA0     = 56,   /* PIN_RX_TRAIN_FAILED0 */
    N5XC56GP5X4_PIN_RX_TRAINFA1     = 57,   /* PIN_RX_TRAIN_FAILED1 */
    N5XC56GP5X4_PIN_RX_TRAINFA2     = 58,   /* PIN_RX_TRAIN_FAILED2 */
    N5XC56GP5X4_PIN_RX_TRAINFA3     = 59,   /* PIN_RX_TRAIN_FAILED3 */
    N5XC56GP5X4_PIN_TX_TRAINEN0     = 60,   /* PIN_TX_TRAIN_ENABLE0 */
    N5XC56GP5X4_PIN_TX_TRAINEN1     = 61,   /* PIN_TX_TRAIN_ENABLE1 */
    N5XC56GP5X4_PIN_TX_TRAINEN2     = 62,   /* PIN_TX_TRAIN_ENABLE2 */
    N5XC56GP5X4_PIN_TX_TRAINEN3     = 63,   /* PIN_TX_TRAIN_ENABLE3 */
    N5XC56GP5X4_PIN_TX_TRAINCO0     = 64,   /* PIN_TX_TRAIN_COMPLETE0 */
    N5XC56GP5X4_PIN_TX_TRAINCO1     = 65,   /* PIN_TX_TRAIN_COMPLETE1 */
    N5XC56GP5X4_PIN_TX_TRAINCO2     = 66,   /* PIN_TX_TRAIN_COMPLETE2 */
    N5XC56GP5X4_PIN_TX_TRAINCO3     = 67,   /* PIN_TX_TRAIN_COMPLETE3 */
    N5XC56GP5X4_PIN_TX_TRAINFA0     = 68,   /* PIN_TX_TRAIN_FAILED0 */
    N5XC56GP5X4_PIN_TX_TRAINFA1     = 69,   /* PIN_TX_TRAIN_FAILED1 */
    N5XC56GP5X4_PIN_TX_TRAINFA2     = 70,   /* PIN_TX_TRAIN_FAILED2 */
    N5XC56GP5X4_PIN_TX_TRAINFA3     = 71,   /* PIN_TX_TRAIN_FAILED3 */
    N5XC56GP5X4_PIN_SQ_DET_LPF0     = 72,   /* PIN_SQ_DETECTED_LPF0 */
    N5XC56GP5X4_PIN_SQ_DET_LPF1     = 73,   /* PIN_SQ_DETECTED_LPF1 */
    N5XC56GP5X4_PIN_SQ_DET_LPF2     = 74,   /* PIN_SQ_DETECTED_LPF2 */
    N5XC56GP5X4_PIN_SQ_DET_LPF3     = 75,   /* PIN_SQ_DETECTED_LPF3 */
    N5XC56GP5X4_PIN_RX_INIT0        = 76,
    N5XC56GP5X4_PIN_RX_INIT1        = 77,
    N5XC56GP5X4_PIN_RX_INIT2        = 78,
    N5XC56GP5X4_PIN_RX_INIT3        = 79,
    N5XC56GP5X4_PIN_RX_INITDON0     = 80,   /* PIN_RX_INIT_DONE0 */
    N5XC56GP5X4_PIN_RX_INITDON1     = 81,   /* PIN_RX_INIT_DONE1 */
    N5XC56GP5X4_PIN_RX_INITDON2     = 82,   /* PIN_RX_INIT_DONE2 */
    N5XC56GP5X4_PIN_RX_INITDON3     = 83,   /* PIN_RX_INIT_DONE3 */
    N5XC56GP5X4_PIN_AVDD_SEL        = 84,
    N5XC56GP5X4_PIN_SPD_CFG         = 85,
    N5XC56GP5X4_PIN_PIPE_SEL        = 86,
    N5XC56GP5X4_PIN_TX_GRAY_CODE0   = 87,   /* PIN_TXDATA_GRAY_CODE_EN0 */
    N5XC56GP5X4_PIN_TX_GRAY_CODE1   = 88,   /* PIN_TXDATA_GRAY_CODE_EN1 */
    N5XC56GP5X4_PIN_TX_GRAY_CODE2   = 89,   /* PIN_TXDATA_GRAY_CODE_EN2 */
    N5XC56GP5X4_PIN_TX_GRAY_CODE3   = 90,   /* PIN_TXDATA_GRAY_CODE_EN3 */
    N5XC56GP5X4_PIN_RX_GRAY_CODE0   = 91,   /* PIN_RXDATA_GRAY_CODE_EN0 */
    N5XC56GP5X4_PIN_RX_GRAY_CODE1   = 92,   /* PIN_RXDATA_GRAY_CODE_EN1 */
    N5XC56GP5X4_PIN_RX_GRAY_CODE2   = 93,   /* PIN_RXDATA_GRAY_CODE_EN2 */
    N5XC56GP5X4_PIN_RX_GRAY_CODE3   = 94,   /* PIN_RXDATA_GRAY_CODE_EN3 */
    N5XC56GP5X4_PIN_TX_PRE_CODE0    = 95,   /* PIN_TXDATA_PRE_CODE_EN0 */
    N5XC56GP5X4_PIN_TX_PRE_CODE1    = 96,   /* PIN_TXDATA_PRE_CODE_EN1 */
    N5XC56GP5X4_PIN_TX_PRE_CODE2    = 97,   /* PIN_TXDATA_PRE_CODE_EN2 */
    N5XC56GP5X4_PIN_TX_PRE_CODE3    = 98,   /* PIN_TXDATA_PRE_CODE_EN3 */
    N5XC56GP5X4_PIN_RX_PRE_CODE0    = 99,   /* PIN_RXDATA_PRE_CODE_EN0 */
    N5XC56GP5X4_PIN_RX_PRE_CODE1    = 100,  /* PIN_RXDATA_PRE_CODE_EN1 */
    N5XC56GP5X4_PIN_RX_PRE_CODE2    = 101,  /* PIN_RXDATA_PRE_CODE_EN2 */
    N5XC56GP5X4_PIN_RX_PRE_CODE3    = 102,  /* PIN_RXDATA_PRE_CODE_EN3 */
    N5XC56GP5X4_PIN_PLL_READY_TX0   = 103,
    N5XC56GP5X4_PIN_PLL_READY_TX1   = 104,
    N5XC56GP5X4_PIN_PLL_READY_TX2   = 105,
    N5XC56GP5X4_PIN_PLL_READY_TX3   = 106,
    N5XC56GP5X4_PIN_PLL_READY_RX0   = 107,
    N5XC56GP5X4_PIN_PLL_READY_RX1   = 108,
    N5XC56GP5X4_PIN_PLL_READY_RX2   = 109,
    N5XC56GP5X4_PIN_PLL_READY_RX3   = 110,
    N5XC56GP5X4_PIN_RESET_TX0       = 111,  /* PIN_RESET_CORE_TX0 */
    N5XC56GP5X4_PIN_RESET_TX1       = 112,  /* PIN_RESET_CORE_TX1 */
    N5XC56GP5X4_PIN_RESET_TX2       = 113,  /* PIN_RESET_CORE_TX2 */
    N5XC56GP5X4_PIN_RESET_TX3       = 114,  /* PIN_RESET_CORE_TX3 */
    N5XC56GP5X4_PIN_RESET_RX0       = 115,  /* PIN_RESET_CORE_RX0 */
    N5XC56GP5X4_PIN_RESET_RX1       = 116,  /* PIN_RESET_CORE_RX1 */
    N5XC56GP5X4_PIN_RESET_RX2       = 117,  /* PIN_RESET_CORE_RX2 */
    N5XC56GP5X4_PIN_RESET_RX3       = 118,  /* PIN_RESET_CORE_RX3 */
    N5XC56GP5X4_PIN_RESET_ACK_TX0   = 119,  /* PIN_RESET_CORE_ACK_TX0 */
    N5XC56GP5X4_PIN_RESET_ACK_TX1   = 120,  /* PIN_RESET_CORE_ACK_TX1 */
    N5XC56GP5X4_PIN_RESET_ACK_TX2   = 121,  /* PIN_RESET_CORE_ACK_TX2 */
    N5XC56GP5X4_PIN_RESET_ACK_TX3   = 122,  /* PIN_RESET_CORE_ACK_TX3 */
    N5XC56GP5X4_PIN_RESET_ACK_RX0   = 123,  /* PIN_RESET_CORE_ACK_RX0 */
    N5XC56GP5X4_PIN_RESET_ACK_RX1   = 124,  /* PIN_RESET_CORE_ACK_RX1 */
    N5XC56GP5X4_PIN_RESET_ACK_RX2   = 125,  /* PIN_RESET_CORE_ACK_RX2 */
    N5XC56GP5X4_PIN_RESET_ACK_RX3   = 126,  /* PIN_RESET_CORE_ACK_RX3 */      
    N5XC56GP5X4_PIN_RSRVD_INPUT_RX0 = 127,  /* PIN_RESERVED_INPUT_RX0 */
    N5XC56GP5X4_PIN_RSRVD_INPUT_RX1 = 128,  /* PIN_RESERVED_INPUT_RX1 */
    N5XC56GP5X4_PIN_RSRVD_INPUT_RX2 = 129,  /* PIN_RESERVED_INPUT_RX2 */
    N5XC56GP5X4_PIN_RSRVD_INPUT_RX3 = 130,  /* PIN_RESERVED_INPUT_RX3 */
    N5XC56GP5X4_PIN_MCU_LOCAL_ACK0  = 131, 
    N5XC56GP5X4_PIN_MCU_LOCAL_ACK1  = 132, 
    N5XC56GP5X4_PIN_MCU_LOCAL_ACK2  = 133, 
    N5XC56GP5X4_PIN_MCU_LOCAL_ACK3  = 134, 
    N5XC56GP5X4_PIN_MCU_LOCAL_STA0  = 135, /* PIN_MCU_LOCAL_STATUS0[31:0] */
    N5XC56GP5X4_PIN_MCU_LOCAL_STA1  = 136, /* PIN_MCU_LOCAL_STATUS1[31:0] */
    N5XC56GP5X4_PIN_MCU_LOCAL_STA2  = 137, /* PIN_MCU_LOCAL_STATUS2[31:0] */
    N5XC56GP5X4_PIN_MCU_LOCAL_STA3  = 138, /* PIN_MCU_LOCAL_STATUS3[31:0] */
    N5XC56GP5X4_PIN_MCU_REMOTE_REQ0 = 139, 
    N5XC56GP5X4_PIN_MCU_REMOTE_REQ1 = 140, 
    N5XC56GP5X4_PIN_MCU_REMOTE_REQ2 = 141, 
    N5XC56GP5X4_PIN_MCU_REMOTE_REQ3 = 142, 
    N5XC56GP5X4_PIN_MCU_REMOTE_CMD0 = 143, /* PIN_MCU_REMOTE_COMMAND0[31:0] */
    N5XC56GP5X4_PIN_MCU_REMOTE_CMD1 = 144, /* PIN_MCU_REMOTE_COMMAND1[31:0] */
    N5XC56GP5X4_PIN_MCU_REMOTE_CMD2 = 145, /* PIN_MCU_REMOTE_COMMAND2[31:0] */
    N5XC56GP5X4_PIN_MCU_REMOTE_CMD3 = 146, /* PIN_MCU_REMOTE_COMMAND3[31:0] */
    N5XC56GP5X4_PIN_MCU_REMOTE_STA0 = 147, /* PIN_MCU_REMOTE_STATUS0[31:0] */
    N5XC56GP5X4_PIN_MCU_REMOTE_STA1 = 148, /* PIN_MCU_REMOTE_STATUS1[31:0] */
    N5XC56GP5X4_PIN_MCU_REMOTE_STA2 = 149, /* PIN_MCU_REMOTE_STATUS2[31:0] */
    N5XC56GP5X4_PIN_MCU_REMOTE_STA3 = 150, /* PIN_MCU_REMOTE_STATUS3[31:0] */
    N5XC56GP5X4_PIN_TX_TRAIN_ERROR0,
    N5XC56GP5X4_PIN_TX_TRAIN_ERROR1,
    N5XC56GP5X4_PIN_TX_TRAIN_ERROR2,
    N5XC56GP5X4_PIN_TX_TRAIN_ERROR3,
} E_N5XC56GP5X4_PIN;

/* TX Equalization Parameters */
typedef enum
{
    N5XC56GP5X4_TXEQ_EM_PRE2        = 0,
    N5XC56GP5X4_TXEQ_EM_PRE         = 1,
    N5XC56GP5X4_TXEQ_EM_MAIN        = 2,
    N5XC56GP5X4_TXEQ_EM_POST        = 3,
    N5XC56GP5X4_TXEQ_EM_NA          = 4
} E_N5XC56GP5X4_TXEQ_PARAM;

/* CTLE Parameters */
typedef enum
{
    N5XC56GP5X4_CTLE_CUR1_SEL       = 0,
    N5XC56GP5X4_CTLE_RL1_SEL        = 1,
    N5XC56GP5X4_CTLE_RL1_EXTRA      = 2,
    N5XC56GP5X4_CTLE_RES1_SEL       = 3,
    N5XC56GP5X4_CTLE_CAP1_SEL       = 4,
    N5XC56GP5X4_CTLE_EN_MIDFREQ     = 5,
    N5XC56GP5X4_CTLE_CS1_MID        = 6,
    N5XC56GP5X4_CTLE_RS1_MID        = 7,
    N5XC56GP5X4_CTLE_CUR2_SEL       = 8, 
    N5XC56GP5X4_CTLE_RL2_SEL        = 9,
    N5XC56GP5X4_CTLE_RL2_TUNE_G     = 10,
    N5XC56GP5X4_CTLE_RES2_SEL       = 11,
    N5XC56GP5X4_CTLE_CAP2_SEL       = 12,
    N5XC56GP5X4_CTLE_CL1_SEL        = 13,
    N5XC56GP5X4_CTLE_CL2_SEL        = 14
} E_N5XC56GP5X4_CTLE_PARAM;

/* CDR Parameters */
typedef enum
{
    N5XC56GP5X4_CDR_SELMUFI         = 0,
    N5XC56GP5X4_CDR_SELMUFF         = 1,
    N5XC56GP5X4_CDR_SELMUPI         = 2,
    N5XC56GP5X4_CDR_SELMUPF         = 3
} E_N5XC56GP5X4_CDR_PARAM;

/* Pattern selection */
typedef enum
{
    N5XC56GP5X4_PAT_USER            = 0x0,
    N5XC56GP5X4_PAT_PACKET          = 0x3,
    N5XC56GP5X4_PAT_SSPRQ           = 0x4,
    N5XC56GP5X4_PAT_JITTERK28P5     = 0x8,
    N5XC56GP5X4_PAT_JITTER_1T       = 0x9,
    N5XC56GP5X4_PAT_JITTER_2T       = 0xA,
    N5XC56GP5X4_PAT_JITTER_4T       = 0xB,
    N5XC56GP5X4_PAT_JITTER_5T       = 0xC,
    N5XC56GP5X4_PAT_JITTER_8T       = 0xD,
    N5XC56GP5X4_PAT_JITTER_10T      = 0xE,
    N5XC56GP5X4_PAT_PRBS7           = 0x10,
    N5XC56GP5X4_PAT_PRBS9           = 0x11,
    N5XC56GP5X4_PAT_PRBS11          = 0x12,
    N5XC56GP5X4_PAT_PRBS11_0        = 0x13,
    N5XC56GP5X4_PAT_PRBS11_1        = 0x14,
    N5XC56GP5X4_PAT_PRBS11_2        = 0x15,
    N5XC56GP5X4_PAT_PRBS11_3        = 0x16,
    N5XC56GP5X4_PAT_PRBS15          = 0x17,
    N5XC56GP5X4_PAT_PRBS16          = 0x18,
    N5XC56GP5X4_PAT_PRBS23          = 0x19,
    N5XC56GP5X4_PAT_PRBS31          = 0x1A,
    N5XC56GP5X4_PAT_PRBS32          = 0x1B,
    N5XC56GP5X4_PAT_PRBS13_0        = 0x1C,
    N5XC56GP5X4_PAT_PRBS13_1        = 0x1D,
    N5XC56GP5X4_PAT_PRBS13_2        = 0x1E,
    N5XC56GP5X4_PAT_PRBS13_3        = 0x1F,
} E_N5XC56GP5X4_PATTERN;

/* Pattern: SWAP_MSB_LSB */
typedef enum
{
    N5XC56GP5X4_SWAP_DISABLE        = 0,
    N5XC56GP5X4_SWAP_PRECODER       = 1,
    N5XC56GP5X4_SWAP_POSTCODER      = 2,
    N5XC56GP5X4_SWAP_NOT_USED       = 3
} E_N5XC56GP5X4_SWAP_MSB_LSB;

/* Pattern: GRAYCODE */
typedef enum
{
    N5XC56GP5X4_GRAY_DISABLE        = 0,
    N5XC56GP5X4_GRAY_ENABLE         = 1,
    N5XC56GP5X4_GRAY_NOT_USED       = 2
} E_N5XC56GP5X4_GRAY_CODE;

/* Pattern Comparator Statistics */
typedef struct
{
    MCESD_BOOL lock;
    MCESD_BOOL pass;
    MCESD_U64 totalBits;
    MCESD_U64 totalErrorBits;
} S_N5XC56GP5X4_PATTERN_STATS;

/* Trained Eye Height */
typedef struct
{
    MCESD_U32 f0b;
    MCESD_U32 f0n1;
    MCESD_U32 f0n2;
    MCESD_U32 f0d;
    MCESD_U32 f0d_t;
    MCESD_U32 f0d_m;
    MCESD_U32 f0d_b;
} S_N5XC56GP5X4_TRAINED_EYE_H;

/* Eye: Top, Middle, Bottom */
typedef enum
{
    N5XC56GP5X4_EYE_TOP = 0,
    N5XC56GP5X4_EYE_MID = 1,
    N5XC56GP5X4_EYE_BOT = 2
} E_N5XC56GP5X4_EYE_TMB;

#ifdef MCESD_EOM_STATS
/* Eye Measurement Data @ X,Y and X,-Y */
typedef struct
{
    MCESD_32 phase;
    MCESD_U8 voltage;
    MCESD_U64 upperBitCount;
    MCESD_U64 upperBitErrorCount;
    MCESD_U64 lowerBitCount;
    MCESD_U64 lowerBitErrorCount;
} S_N5XC56GP5X4_EOM_DATA;

/* Eye Raw Data */
typedef struct
{
    MCESD_64 eyeRawData[N5XC56GP5X4_EYE_MAX_PHASE_LEVEL][(N5XC56GP5X4_EYE_MAX_VOLT_STEPS * 2) - 1];
    MCESD_U32 oneUIwidth;
    MCESD_U32 upperEdge;
    MCESD_U32 lowerEdge;
    MCESD_U32 leftEdge;
    MCESD_U32 rightEdge;
    MCESD_U32 relativeCenter;
    MCESD_U64 sampleCount;
#ifdef N5XC56GP5X4_DFE_MILLIVOLTS
    MCESD_U32 mVTable[64];
#endif
} S_N5XC56GP5X4_EYE_RAW, *S_N5XC56GP5X4_EYE_RAW_PTR;

/* Buffer Structure for Eye-Related Functions */
typedef struct
{
    double bufferData[2][(N5XC56GP5X4_EYE_MAX_PHASE_LEVEL * 2) + 1];
} S_N5XC56GP5X4_EYE_BUFFER, *S_N5XC56GP5X4_EYE_BUFFER_PTR;
#endif

/* DFE Taps */
typedef enum
{
    N5XC56GP5X4_DFE_DC              = 0,
    N5XC56GP5X4_DFE_DC_E            = 1,
    N5XC56GP5X4_DFE_VREF            = 2,
    N5XC56GP5X4_DFE_F0              = 3,
    N5XC56GP5X4_DFE_F1              = 4,
    N5XC56GP5X4_DFE_F1P5            = 5,
    N5XC56GP5X4_DFE_F2              = 6,
    N5XC56GP5X4_DFE_F3              = 7,
    N5XC56GP5X4_DFE_F4              = 8,
    N5XC56GP5X4_DFE_F5              = 9,
    N5XC56GP5X4_DFE_F6              = 10,
    N5XC56GP5X4_DFE_F7              = 11,
    N5XC56GP5X4_DFE_F8              = 12,
    N5XC56GP5X4_DFE_F9              = 13,
    N5XC56GP5X4_DFE_F10             = 14,
    N5XC56GP5X4_DFE_F11             = 15,
    N5XC56GP5X4_DFE_F12             = 16,
    N5XC56GP5X4_DFE_F13             = 17,
    N5XC56GP5X4_DFE_F14             = 18,
    N5XC56GP5X4_DFE_F15             = 19,
    N5XC56GP5X4_DFE_FF0             = 20,
    N5XC56GP5X4_DFE_FF1             = 21,
    N5XC56GP5X4_DFE_FF2             = 22,
    N5XC56GP5X4_DFE_FF3             = 23,
    N5XC56GP5X4_DFE_FF4             = 24,
    N5XC56GP5X4_DFE_FF5             = 25
} E_N5XC56GP5X4_DFE_TAP;

#ifdef N5XC56GP5X4_DFE_MILLIVOLTS
/* DFE mV Table */
static const MCESD_U32 N5XC56GP5X4_DFE_DC_TABLE_RES[2][64] =
{
    {   /* RES0 */
            0,      70,     160,     230,     310,     390,     440,     510,
          570,     640,     690,     730,     790,     840,     900,     940,
         1000,    1060,    1120,    1190,    1250,    1320,    1380,    1450,
         1510,    1580,    1650,    1720,    1790,    1870,    1920,    2010,
         2090,    2150,    2230,    2310,    2390,    2470,    2540,    2630,
         2700,    2770,    2850,    2940,    3020,    3090,    3160,    3240,
         3330,    3430,    3500,    3560,    3670,    3740,    3800,    3890,
         3950,    4020,    4120,    4200,    4260,    4380,    4440,    4510,
    },
    {   /* RES1 */
            0,      70,     160,     240,     320,     420,     530,     650,
          780,     930,    1040,    1150,    1250,    1380,    1500,    1620,
         1740,    1870,    2010,    2140,    2270,    2420,    2540,    2700,
         2830,    2980,    3110,    3270,    3420,    3550,    3710,    3830,
         3970,    4110,    4250,    4390,    4560,    4700,    4820,    4970,
         5100,    5230,    5340,    5500,    5630,    5720,    5860,    5970,
         6090,    6230,    6360,    6510,    6540,    6700,    6780,    6930,
         7030,    7150,    7220,    7360,    7390,    7510,    7590,    7730,
    }
};

static const MCESD_U32 N5XC56GP5X4_DFE_DC_E_TABLE[63] =
{
        0,     100,     210,     310,     410,     520,     620,     720,
      820,     920,    1020,    1130,    1230,    1330,    1440,    1540,
     1640,    1750,    1850,    1950,    2050,    2150,    2250,    2350,
     2460,    2570,    2670,    2770,    2870,    2970,    3070,    3180,
     3280,    3380,    3490,    3590,    3690,    3800,    3900,    4000,
     4100,    4200,    4300,    4410,    4520,    4620,    4720,    4820,
     4920,    5030,    5130,    5230,    5330,    5430,    5540,    5650,
     5750,    5850,    5950,    6050,    6150,    6260,    6360,
};

static const MCESD_U32 N5XC56GP5X4_DFE_VREF_TABLE[4][4][63] =
{
    {   /* T0 */
        {   /* RES0 */
                0,     150,     290,     400,     510,     610,     710,     820,
              920,    1020,    1130,    1240,    1340,    1440,    1550,    1660,
             1760,    1860,    1960,    2070,    2180,    2280,    2380,    2490,
             2590,    2690,    2800,    2910,    3010,    3110,    3220,    3330,
             3430,    3530,    3630,    3740,    3850,    3950,    4050,    4160,
             4260,    4360,    4470,    4580,    4680,    4780,    4890,    5000,
             5100,    5200,    5300,    5410,    5520,    5620,    5720,    5830,
             5930,    6030,    6140,    6250,    6350,    6450,    6560,
        },
        {   /* RES1 */
                0,     250,     490,     660,     830,    1010,    1180,    1350,
             1530,    1700,    1870,    2050,    2220,    2390,    2560,    2730,
             2900,    3080,    3260,    3430,    3600,    3780,    3950,    4120,
             4290,    4460,    4640,    4820,    4990,    5160,    5330,    5500,
             5670,    5850,    6020,    6190,    6370,    6540,    6710,    6890,
             7060,    7230,    7400,    7570,    7750,    7930,    8100,    8270,
             8440,    8620,    8790,    8960,    9140,    9310,    9480,    9660,
             9830,   10000,   10200,   10300,   10500,   10700,   10900,
        },
        {   /* RES2 */
                0,     300,     590,     800,    1000,    1200,    1410,    1620,
             1830,    2040,    2240,    2450,    2660,    2860,    3070,    3280,
             3480,    3690,    3900,    4110,    4320,    4530,    4730,    4930,
             5140,    5350,    5550,    5760,    5970,    6180,    6390,    6600,
             6800,    7000,    7210,    7420,    7630,    7840,    8040,    8250,
             8460,    8660,    8870,    9080,    9280,    9490,    9700,    9910,
            10100,   10300,   10500,   10700,   10900,   11200,   11400,   11600,
            11800,   12000,   12200,   12400,   12600,   12800,   13000,
        },
        {   /* RES3 */
                0,     390,     770,    1050,    1330,    1610,    1880,    2150,
             2430,    2710,    2980,    3260,    3540,    3810,    4080,    4360,
             4640,    4910,    5180,    5460,    5740,    6020,    6290,    6560,
             6840,    7120,    7390,    7670,    7950,    8220,    8490,    8770,
             9050,    9330,    9600,    9870,   10200,   10400,   10700,   11000,
            11300,   11500,   11800,   12100,   12400,   12600,   12900,   13200,
            13500,   13700,   14000,   14300,   14600,   14800,   15100,   15400,
            15700,   15900,   16200,   16500,   16800,   17000,   17300,
        }
    },
    {   /* T1 */
        {   /* RES0 */
                0,     150,     290,     400,     510,     610,     710,     820,
              920,    1020,    1130,    1240,    1340,    1440,    1550,    1660,
             1760,    1860,    1960,    2070,    2180,    2280,    2380,    2490,
             2590,    2690,    2800,    2910,    3010,    3110,    3220,    3330,
             3430,    3530,    3630,    3740,    3850,    3950,    4050,    4160,
             4260,    4360,    4470,    4580,    4680,    4780,    4890,    5000,
             5100,    5200,    5300,    5410,    5520,    5620,    5720,    5830,
             5930,    6030,    6140,    6250,    6350,    6450,    6560,
        },
        {   /* RES1 */
                0,     250,     490,     660,     830,    1010,    1180,    1350,
             1530,    1700,    1870,    2050,    2220,    2390,    2560,    2730,
             2900,    3080,    3260,    3430,    3600,    3780,    3950,    4120,
             4290,    4460,    4640,    4820,    4990,    5160,    5330,    5500,
             5670,    5850,    6020,    6190,    6370,    6540,    6710,    6890,
             7060,    7230,    7400,    7570,    7750,    7930,    8100,    8270,
             8440,    8620,    8790,    8960,    9140,    9310,    9480,    9660,
             9830,   10000,   10200,   10300,   10500,   10700,   10900,
        },
        {   /* RES2 */
                0,     300,     590,     800,    1000,    1200,    1410,    1620,
             1830,    2040,    2240,    2450,    2660,    2860,    3070,    3280,
             3480,    3690,    3900,    4110,    4320,    4530,    4730,    4930,
             5140,    5350,    5550,    5760,    5970,    6180,    6390,    6600,
             6800,    7000,    7210,    7420,    7630,    7840,    8040,    8250,
             8460,    8660,    8870,    9080,    9280,    9490,    9700,    9910,
            10100,   10300,   10500,   10700,   10900,   11200,   11400,   11600,
            11800,   12000,   12200,   12400,   12600,   12800,   13000,
        },
        {   /* RES3 */
                0,     390,     770,    1050,    1330,    1610,    1880,    2150,
             2430,    2710,    2980,    3260,    3540,    3810,    4080,    4360,
             4640,    4910,    5180,    5460,    5740,    6020,    6290,    6560,
             6840,    7120,    7390,    7670,    7950,    8220,    8490,    8770,
             9050,    9330,    9600,    9870,   10200,   10400,   10700,   11000,
            11300,   11500,   11800,   12100,   12400,   12600,   12900,   13200,
            13500,   13700,   14000,   14300,   14600,   14800,   15100,   15400,
            15700,   15900,   16200,   16500,   16800,   17000,   17300,
        }
    },
    {   /* T2 */
        {   /* RES0 */
                0,    1730,    3430,    3530,    3630,    3740,    3850,    3950,
             4050,    4160,    4260,    4360,    4470,    4580,    4680,    4780,
             4880,    4990,    5100,    5200,    5300,    5410,    5520,    5620,
             5720,    5830,    5930,    6030,    6140,    6250,    6350,    6450,
             6550,    6660,    6770,    6870,    6970,    7080,    7190,    7290,
             7390,    7500,    7600,    7700,    7810,    7920,    8020,    8120,
             8220,    8330,    8440,    8540,    8640,    8750,    8860,    8960,
             9060,    9170,    9270,    9370,    9480,    9590,    9690,
        },
        {   /* RES1 */
                0,    2840,    5670,    5850,    6020,    6190,    6370,    6540,
             6710,    6890,    7060,    7230,    7400,    7570,    7740,    7920,
             8100,    8270,    8440,    8610,    8780,    8960,    9130,    9300,
             9480,    9660,    9830,   10000,   10200,   10300,   10500,   10700,
            10900,   11000,   11200,   11400,   11600,   11700,   11900,   12100,
            12200,   12400,   12600,   12800,   12900,   13100,   13300,   13500,
            13600,   13800,   14000,   14100,   14300,   14500,   14700,   14800,
            15000,   15200,   15400,   15500,   15700,   15900,   16100,
        },
        {   /* RES2 */
                0,    3400,    6790,    7000,    7210,    7420,    7630,    7840,
             8040,    8250,    8460,    8660,    8870,    9080,    9280,    9490,
             9700,    9910,   10100,   10300,   10500,   10700,   10900,   11200,
            11400,   11600,   11800,   12000,   12200,   12400,   12600,   12800,
            13000,   13200,   13400,   13600,   13800,   14000,   14300,   14500,
            14700,   14900,   15100,   15300,   15500,   15700,   15900,   16100,
            16300,   16500,   16700,   17000,   17200,   17400,   17600,   17800,
            18000,   18200,   18400,   18600,   18800,   19000,   19200,
        },
        {   /* RES3 */
                0,    4530,    9040,    9310,    9590,    9870,   10100,   10400,
            10700,   11000,   11200,   11500,   11800,   12100,   12400,   12600,
            12900,   13200,   13500,   13700,   14000,   14300,   14600,   14800,
            15100,   15400,   15700,   15900,   16200,   16500,   16800,   17000,
            17300,   17600,   17900,   18100,   18400,   18700,   19000,   19200,
            19500,   19800,   20100,   20300,   20600,   20900,   21200,   21400,
            21700,   22000,   22300,   22500,   22800,   23100,   23400,   23600,
            23900,   24200,   24500,   24800,   25000,   25300,   25600,
        }
    },
    {   /* T3 */
        {   /* RES0 */
                0,    3240,    6450,    6550,    6650,    6760,    6860,    6960,
             7070,    7170,    7270,    7380,    7480,    7580,    7690,    7800,
             7900,    8000,    8100,    8210,    8320,    8420,    8520,    8630,
             8730,    8830,    8940,    9040,    9140,    9250,    9350,    9450,
             9560,    9670,    9770,    9870,    9970,   10100,   10200,   10300,
            10400,   10500,   10600,   10700,   10800,   10900,   11000,   11100,
            11200,   11300,   11400,   11500,   11600,   11700,   11800,   12000,
            12100,   12200,   12300,   12400,   12500,   12600,   12700,
        },
        {   /* RES1 */
                0,    5380,   10700,   10900,   11100,   11200,   11400,   11600,
            11800,   11900,   12100,   12300,   12400,   12600,   12800,   13000,
            13100,   13300,   13500,   13700,   13800,   14000,   14200,   14300,
            14500,   14700,   14900,   15000,   15200,   15400,   15500,   15700,
            15900,   16100,   16200,   16400,   16600,   16800,   16900,   17100,
            17300,   17400,   17600,   17800,   18000,   18100,   18300,   18500,
            18700,   18800,   19000,   19200,   19400,   19500,   19700,   19900,
            20000,   20200,   20400,   20600,   20700,   20900,   21100,
        },
        {   /* RES2 */
                0,    6430,   12800,   13100,   13300,   13500,   13700,   13900,
            14100,   14300,   14500,   14700,   14900,   15100,   15300,   15500,
            15700,   15900,   16200,   16400,   16600,   16800,   17000,   17200,
            17400,   17600,   17800,   18000,   18200,   18400,   18600,   18900,
            19100,   19300,   19500,   19700,   19900,   20100,   20300,   20500,
            20700,   20900,   21100,   21300,   21500,   21700,   22000,   22200,
            22400,   22600,   22800,   23000,   23200,   23400,   23600,   23800,
            24000,   24200,   24400,   24600,   24800,   25100,   25300,
        },
        {   /* RES3 */
                0,    8560,   17100,   17400,   17700,   17900,   18200,   18500,
            18800,   19000,   19300,   19600,   19900,   20100,   20400,   20700,
            21000,   21200,   21500,   21800,   22100,   22300,   22600,   22900,
            23200,   23400,   23700,   24000,   24300,   24500,   24800,   25100,
            25400,   25600,   25900,   26200,   26500,   26800,   27000,   27300,
            27600,   27900,   28100,   28400,   28700,   29000,   29200,   29500,
            29800,   30100,   30300,   30600,   30900,   31200,   31400,   31700,
            32000,   32300,   32500,   32800,   33100,   33400,   33600,
        }
    }
};

static const MCESD_U32 N5XC56GP5X4_DFE_F0_TABLE[4][4][64] =
{
    {   /* T0 */
        {   /* RES0 */
               80,     260,     440,     570,     740,     920,     970,    1050,
             1120,    1220,    1270,    1320,    1380,    1450,    1510,    1560,
             1630,    1690,    1760,    1840,    1900,    1970,    2050,    2120,
             2200,    2260,    2330,    2410,    2510,    2590,    2660,    2760,
             2840,    2920,    3020,    3100,    3180,    3250,    3350,    3450,
             3530,    3610,    3740,    3810,    3940,    3990,    4100,    4200,
             4300,    4400,    4500,    4580,    4680,    4790,    4910,    5010,
             5120,    5220,    5300,    5400,    5520,    5650,    5710,    5830,
        },
        {   /* RES1 */
               60,     250,     440,     590,     760,     940,    1080,    1200,
             1340,    1500,    1590,    1710,    1810,    1940,    2060,    2180,
             2300,    2450,    2570,    2720,    2840,    2990,    3130,    3300,
             3430,    3580,    3770,    3900,    4050,    4220,    4390,    4560,
             4710,    4890,    5100,    5260,    5450,    5600,    5750,    5970,
             6150,    6320,    6500,    6720,    6890,    7120,    7310,    7470,
             7690,    7840,    8040,    8260,    8460,    8640,    8820,    9040,
             9260,    9460,    9640,    9790,    9990,   10240,   10390,   10570,
        },
        {   /* RES2 */
               60,     250,     440,     590,     780,     980,    1160,    1360,
             1570,    1800,    1960,    2130,    2320,    2490,    2680,    2890,
             3080,    3300,    3530,    3750,    3970,    4180,    4400,    4670,
             4860,    5130,    5370,    5610,    5880,    6150,    6390,    6680,
             6930,    7220,    7440,    7710,    8010,    8260,    8550,    8840,
             9160,    9320,    9660,    9880,   10180,   10500,   10720,   11020,
            11270,   11470,   11750,   11990,   12240,   12430,   12840,   13060,
            13240,   13490,   13750,   14000,   14270,   14570,   14770,   15050,
        },
        {   /* RES3 */
               60,     240,     440,     610,     810,    1020,    1270,    1540,
             1830,    2140,    2380,    2630,    2870,    3120,    3380,    3660,
             3950,    4250,    4540,    4870,    5160,    5520,    5810,    6120,
             6480,    6810,    7110,    7490,    7850,    8220,    8530,    8850,
             9260,    9610,    9970,   10340,   10590,   10950,   11250,   11690,
            11990,   12210,   12630,   12930,   13200,   13550,   13970,   14290,
            14590,   14890,   15120,   15560,   15790,   16110,   16370,   16740,
            16940,   17270,   17570,   17820,   17930,   18260,   18460,   18760,
        }
    },
    {   /* T1 */
        {   /* RES0 */
              699,    1379,    1828,    2158,    2492,    2790,    2919,    3029,
             3178,    3308,    3395,    3480,    3545,    3672,    3735,    3841,
             3926,    4032,    4137,    4200,    4326,    4410,    4493,    4620,
             4704,    4808,    4892,    4997,    5125,    5207,    5334,    5461,
             5521,    5648,    5777,    5837,    6009,    6068,    6195,    6300,
             6407,    6556,    6615,    6744,    6870,    6952,    7080,    7185,
             7312,    7441,    7593,    7650,    7779,    7905,    7988,    8139,
             8244,    8349,    8478,    8581,    8664,    8815,    9012,    9095,
        },
        {   /* RES1 */
              700,    1440,    1930,    2302,    2639,    2999,    3194,    3391,
             3628,    3847,    4002,    4177,    4332,    4487,    4684,    4817,
             5015,    5192,    5369,    5524,    5700,    5877,    6077,    6255,
             6455,    6632,    6809,    7012,    7189,    7433,    7613,    7769,
             7969,    8194,    8372,    8550,    8773,    8954,    9131,    9310,
             9489,    9714,    9963,   10141,   10389,   10544,   10747,   10903,
            11128,   11307,   11462,   11664,   11913,   11998,   12177,   12380,
            12604,   12736,   12915,   13142,   13274,   13523,   13726,   13857,
        },
        {   /* RES2 */
              720,    1520,    2051,    2426,    2806,    3167,    3469,    3774,
             4101,    4451,    4654,    4919,    5143,    5388,    5634,    5881,
             6172,    6442,    6690,    6961,    7188,    7459,    7731,    7981,
             8276,    8593,    8820,    9117,    9413,    9687,    9916,   10191,
            10464,   10807,   11036,   11310,   11516,   11838,   12090,   12387,
            12595,   12847,   13099,   13444,   13650,   13902,   14108,   14477,
            14614,   14959,   15119,   15252,   15693,   15828,   16036,   16288,
            16610,   16864,   17022,   17273,   17503,   17779,   18008,   18188,
        },
        {   /* RES3 */
              739,    1582,    2155,    2570,    2952,    3357,    3745,    4157,
             4615,    5056,    5324,    5639,    5996,    6290,    6627,    6967,
             7351,    7691,    8055,    8376,    8675,    9063,    9404,    9684,
            10051,   10304,   10558,   10812,   11066,   11321,   11575,   11829,
            12084,   12338,   12592,   12845,   13099,   13353,   13608,   13862,
            14115,   14369,   14623,   14877,   15131,   15385,   15639,   15893,
            16147,   16401,   16655,   16909,   17163,   17417,   17671,   17925,
            18178,   18433,   18686,   18940,   19194,   19448,   19702,   19956,
        }
    },
    {   /* T2 */
        {   /* RES0 */
             2674,    4002,    4706,    5161,    5614,    6044,    6173,    6327,
             6505,    6659,    6764,    6892,    6972,    7102,    7205,    7333,
             7436,    7567,    7694,    7751,    7904,    7982,    8112,    8241,
             8369,    8425,    8627,    8681,    8835,    8964,    9067,    9149,
             9301,    9429,    9509,    9638,    9717,    9871,   10023,   10103,
            10207,   10312,   10440,   10569,   10625,   10803,   10956,   11012,
            11116,   11244,   11325,   11526,   11580,   11784,   11763,   11944,
            12095,   12225,   12255,   12433,   12563,   12692,   12796,   12900,
        },
        {   /* RES1 */
             2850,    4279,    5056,    5559,    6039,    6470,    6797,    7052,
             7306,    7560,    7763,    7968,    8073,    8276,    8481,    8683,
             8962,    9141,    9321,    9523,    9677,    9908,   10088,   10266,
            10396,   10672,   10803,   11082,   11261,   11415,   11669,   11872,
            12002,   12230,   12459,   12564,   12818,   13071,   13202,   13404,
            13534,   13663,   13868,   14195,   14373,   14430,   14682,   14813,
            15090,   15221,   15448,   15602,   15806,   15959,   16062,   16269,
            16521,   16550,   16731,   17059,   17138,   17391,   17447,   17675,
        },
        {   /* RES2 */
             3048,    4603,    5431,    5961,    6488,    6918,    7323,    7703,
             8104,    8509,    8690,    8969,    9223,    9424,    9729,   10032,
            10364,   10668,   10996,   11200,   11478,   11832,   12038,   12316,
            12596,   12849,   13178,   13432,   13710,   13913,   14219,   14472,
            14652,   14931,   15183,   15488,   15718,   15996,   16201,   16479,
            16659,   16938,   17217,   17422,   17724,   17953,   18181,   18411,
            18665,   18721,   19123,   19203,   19482,   19660,   19815,   20019,
            20223,   20526,   20656,   20834,   21163,   21318,   21397,   21550,
        },
        {   /* RES3 */
             3224,    4877,    5781,    6312,    6891,    7369,    7821,    8352,
             8831,    9310,    9639,    9968,   10297,   10700,   11030,   11359,
            11913,   12267,   12545,   12951,   13254,   13633,   13961,   14267,
            14568,   14848,   15277,   15581,   15886,   16215,   16494,   16799,
            17077,   17432,   17761,   17990,   18316,   18598,   19025,   19228,
            19583,   19788,   19990,   20221,   20525,   20804,   21058,   21261,
            21516,   21571,   21975,   22326,   22406,   22610,   22965,   23168,
            23322,   23375,   23728,   23911,   24186,   24342,   24248,   24576,
        }
    },
    {   /* T3 */
        {   /* RES0 */
             5700,    7427,    8258,    8761,    9339,    9744,    9923,   10027,
            10182,   10361,   10515,   10592,   10673,   10775,   10979,   10985,
            11289,   11417,   11546,   11676,   11828,   11810,   12013,   12189,
            12245,   12374,   12451,   12631,   12687,   12889,   12969,   12996,
            13225,   13255,   13410,   13539,   13594,   13772,   13852,   13955,
            14158,   14187,   14315,   14520,   14548,   14728,   14757,   14886,
            14965,   15121,   15224,   15377,   15431,   15584,   15640,   15744,
            15921,   16075,   16056,   16235,   16364,   16467,   16620,   16698,
        },
        {   /* RES1 */
             6173,    8003,    8908,    9461,    9942,   10419,   10673,   10928,
            11257,   11462,   11762,   11943,   12073,   12202,   12505,   12709,
            13063,   13340,   13420,   13625,   13904,   14083,   14287,   14416,
            14620,   14849,   15029,   15207,   15436,   15514,   15693,   15924,
            16128,   16280,   16459,   16663,   16893,   17070,   17324,   17456,
            17607,   17837,   17992,   18172,   18375,   18503,   18659,   18837,
            19114,   19194,   19399,   19528,   19583,   19885,   19991,   20093,
            20324,   20576,   20631,   20834,   20988,   21167,   21295,   21400,
        },
        {   /* RES2 */
             6649,    8603,    9532,   10161,   10642,   11096,   11573,   11953,
            12405,   12784,   13064,   13294,   13546,   13827,   14081,   14383,
            14838,   15142,   15345,   15650,   15852,   16158,   16411,   16715,
            16943,   17149,   17429,   17708,   17962,   18140,   18494,   18772,
            18928,   19181,   19410,   19664,   19919,   20147,   20426,   20506,
            20808,   21037,   21217,   21470,   21575,   21805,   22056,   22263,
            22366,   22745,   22899,   23103,   23308,   23536,   23639,   23769,
            24146,   24225,   24357,   24509,   24814,   24816,   25147,   25226,
        },
        {   /* RES3 */
             7049,    9153,   10133,   10736,   11364,   11845,   12324,   12902,
            13407,   13960,   14265,   14667,   14971,   15300,   15581,   16009,
            16364,   16717,   16971,   17374,   17755,   18008,   18212,   18692,
            18995,   19350,   19529,   19907,   20187,   20441,   20745,   21073,
            21276,   21606,   21809,   22089,   22341,   22599,   22926,   23055,
            23458,   23563,   23794,   24045,   24349,   24431,   24780,   24911,
            25142,   25394,   25524,   25650,   25982,   26060,   26414,   26444,
            26672,   26853,   26954,   27233,   27239,   27318,   27672,   27773,
        }
    }
};

static const MCESD_U32 N5XC56GP5X4_DFE_F1_TABLE[2][4][64] =
{
    {   /* T0 */
        {   /* RES0 */
                0,      10,     110,     160,     210,     310,     360,     400,
              410,     460,     510,     510,     560,     600,     610,     660,
              700,     710,     760,     810,     860,     910,     910,     960,
             1010,    1060,    1110,    1160,    1210,    1260,    1310,    1360,
             1410,    1460,    1550,    1600,    1660,    1710,    1760,    1810,
             1900,    1960,    2010,    2060,    2150,    2210,    2260,    2350,
             2410,    2460,    2550,    2610,    2660,    2710,    2810,    2860,
             2950,    3010,    3060,    3160,    3250,    3300,    3360,    3410,
        },
        {   /* RES1 */
                0,      10,     110,     160,     260,     310,     400,     460,
              550,     610,     660,     750,     810,     860,     950,    1010,
             1110,    1160,    1260,    1360,    1450,    1510,    1610,    1710,
             1810,    1910,    2010,    2110,    2210,    2350,    2460,    2560,
             2700,    2810,    2910,    3010,    3150,    3260,    3360,    3510,
             3610,    3710,    3850,    3960,    4060,    4160,    4310,    4410,
             4510,    4610,    4750,    4860,    4960,    5110,    5200,    5310,
             5410,    5560,    5660,    5760,    5860,    6010,    6110,    6210,
        },
        {   /* RES2 */
                0,      10,     110,     160,     260,     360,     450,     550,
              660,     810,     900,    1000,    1110,    1210,    1350,    1460,
             1600,    1710,    1860,    2010,    2160,    2300,    2460,    2610,
             2800,    2950,    3110,    3260,    3450,    3600,    3760,    3910,
             4060,    4260,    4410,    4550,    4710,    4860,    5010,    5200,
             5360,    5510,    5660,    5810,    6000,    6110,    6310,    6460,
             6610,    6760,    6910,    7110,    7250,    7410,    7550,    7710,
             7860,    8010,    8110,    8310,    8450,    8560,    8750,    8860,
        },
        {   /* RES3 */
                0,      10,     110,     160,     260,     360,     510,     700,
              900,    1110,    1260,    1460,    1660,    1850,    2060,    2260,
             2460,    2710,    2950,    3160,    3410,    3610,    3860,    4100,
             4310,    4560,    4760,    5010,    5210,    5460,    5710,    5910,
             6160,    6400,    6600,    6810,    7060,    7300,    7510,    7710,
             7950,    8150,    8350,    8560,    8710,    8960,    9110,    9360,
             9550,    9710,    9910,   10100,   10210,   10400,   10560,   10760,
            10910,   11050,   11160,   11310,   11450,   11600,   11700,   11800,
        }
    },
    {   /* T1 */
        {   /* RES0 */
                0,       0,       0,      0 ,      30,      30,      30,      80,
               80,      80,      80,      80,     120,     130,     130,     130,
              130,     130,     180,     180,     180,     180,     230,     230,
              230,     230,     280,     280,     280,     330,     330,     330,
              330,     380,     380,     380,     430,     430,     430,     480,
              480,     480,     530,     530,     530,     580,     580,     630,
              630,     630,     680,     680,     680,     730,     730,     780,
              780,     780,     830,     830,     880,     880,     930,     930,
        },
        {   /* RES1 */
                0,       0,       0,       0,      30,      30,      80,      80,
               80,     130,     130,     180,     180,     180,     230,     230,
              280,     280,     280,     330,     330,     380,     430,     430,
              480,     480,     530,     530,     580,     630,     630,     680,
              730,     730,     780,     780,     830,     880,     930,     930,
              980,    1030,    1030,    1080,    1130,    1180,    1180,    1230,
             1280,    1280,    1330,    1380,    1430,    1430,    1480,    1530,
             1530,    1580,    1630,    1680,    1680,    1730,    1780,    1830,
        },
        {   /* RES2 */
                0,       0,       0,       0,      30,      30,      80,      80,
              130,     180,     180,     230,     280,     280,     330,     380,
              380,     430,     480,     530,     580,     580,     630,     680,
              730,     780,     830,     880,     930,     980,    1030,    1080,
             1130,    1180,    1230,    1280,    1330,    1380,    1430,    1480,
             1530,    1580,    1630,    1680,    1730,    1780,    1830,    1880,
             1930,    1980,    2030,    2080,    2130,    2180,    2230,    2280,
             2330,    2380,    2430,    2480,    2530,    2580,    2630,    2680,
        },
        {   /* RES3 */
                0,       0,       0,       0,      30,      80,      80,     130,
              180,     280,     330,     380,     430,     480,     530,     580,
              630,     730,     780,     830,     930,     980,    1080,    1130,
             1230,    1280,    1330,    1430,    1480,    1580,    1630,    1730,
             1780,    1880,    1930,    1980,    2080,    2130,    2230,    2280,
             2380,    2430,    2480,    2580,    2630,    2680,    2780,    2830,
             2930,    2980,    3080,    3130,    3180,    3280,    3330,    3380,
             3480,    3530,    3630,    3680,    3730,    3830,    3880,    3980,
        }
    }
};

static const MCESD_U32 N5XC56GP5X4_DFE_F1P5_TABLE[4][32] =
{
    {   /* RES0 */
            0,     160,     340,     490,     580,     650,     740,     800,
          890,     950,    1050,    1140,    1260,    1350,    1440,    1560,
         1680,    1780,    1900,    2020,    2140,    2290,    2420,    2540,
         2690,    2820,    2970,    3090,    3240,    3370,    3540,    3670,
    },
    {   /* RES1 */
            0,     160,     370,     530,     710,     860,    1010,    1170,
         1320,    1500,    1690,    1870,    2080,    2300,    2510,    2750,
         2970,    3210,    3460,    3730,    3970,    4190,    4470,    4710,
         4980,    5230,    5510,    5780,    6030,    6300,    6550,    6790,
    },
    {   /* RES2 */
            0,     180,     370,     590,     860,    1110,    1320,    1590,
         1840,    2140,    2450,    2750,    3090,    3420,    3760,    4100,
         4470,    4830,    5200,    5560,    5930,    6300,    6670,    7060,
         7340,    7700,    8100,    8410,    8770,    9080,    9330,    9630,
    },
    {   /* RES3 */
            0,     190,     400,     650,    1010,    1380,    1710,    2050,
         2450,    2870,    3300,    3700,    4160,    4650,    5110,    5600,
         6060,    6510,    6940,    7430,    7920,    8370,    8750,    9110,
         9450,    9880,   10210,   10580,   10880,   11100,   11430,   11680,
    }
};

static const MCESD_U32 N5XC56GP5X4_DFE_F2_TABLE[4][32] =
{
    {   /* RES0 */
            0,     120,     260,     350,     410,     480,     520,     560,
          630,     690,     760,     800,     870,     940,    1020,    1090,
         1160,    1220,    1310,    1380,    1470,    1540,    1630,    1700,
         1790,    1880,    1970,    2060,    2130,    2240,    2330,    2420,
    },
    {   /* RES1 */
            0,     120,     260,     400,     510,     610,     720,     810,
          930,    1040,    1160,    1280,    1420,    1540,    1700,    1840,
         1980,    2120,    2290,    2450,    2570,    2740,    2900,    3050,
         3210,    3380,    3540,    3690,    3850,    4020,    4130,    4320,
    },
    {   /* RES2 */
            0,     120,     280,     420,     610,     780,     920,    1090,
         1280,    1450,    1640,    1850,    2040,    2260,    2450,    2690,
         2910,    3120,    3340,    3580,    3800,    4040,    4210,    4440,
         4690,    4900,    5070,    5290,    5550,    5740,    5880,    6020,
    },
    {   /* RES3 */
            0,     140,     280,     470,     710,     960,    1170,    1390,
         1630,    1900,    2160,    2450,    2720,    3010,    3280,    3570,
         3880,    4120,    4460,    4730,    4970,    5260,    5500,    5770,
         5960,    6280,    6440,    6760,    6950,    7170,    7280,    7500,
    }
};
#endif

/* MCU Remote Command Type */
typedef enum {
    N5XC56GP5X4_MRC_TYPE_TRAINING   = 0x0,  /* TRAINING PROTOCOL */
    N5XC56GP5X4_MRC_TYPE_CTLE       = 0x1,  /* RECEIVER EQUALIZATION */
    N5XC56GP5X4_MRC_TYPE_REGISTER   = 0x2,  /* REGISTER ACCESS */
    N5XC56GP5X4_MRC_TYPE_DATA_PATH  = 0x3,  /* DATA PATH CONTROL */
    N5XC56GP5X4_MRC_TYPE_PCIE_PIPE  = 0x4,
    N5XC56GP5X4_MRC_TYPE_ANALOG_CAL = 0x5,  /* ANALOG CALIBRATION */
    N5XC56GP5X4_MRC_TYPE_POWERSPEED = 0x6,  /* POWER/SPEED CONTROL */
    N5XC56GP5X4_MRC_TYPE_SAS_APTA   = 0x7,
} E_N5XC56GP5X4_MRC_TYPE;

/* MCU Remote Sub-category */
typedef enum {
    N5XC56GP5X4_MRC_SUB_KR_TRAINING = 0x0,
    N5XC56GP5X4_MRC_SUB_TX_EQ       = 0x1,  /* TX EQUALIZER CONTROL */
    N5XC56GP5X4_MRC_SUB_TX_TRAINING = 0x2,
    N5XC56GP5X4_MRC_SUB_CTLE        = 0x3,  /* CTLE SETTING */
    N5XC56GP5X4_MRC_SUB_VREF_TRAIN  = 0x4,  /* VREF TRAINING */
    N5XC56GP5X4_MRC_SUB_RX_INIT     = 0x5,  /* RX INITIALIZATION */
    N5XC56GP5X4_MRC_SUB_RX_TRAINING = 0x6,
    N5XC56GP5X4_MRC_SUB_REG_ADD_SEL = 0x7,  /* REGISTER_ADDRESS_SELECT */
    N5XC56GP5X4_MRC_SUB_REG_W       = 0x8,  /* REGISTER WRITE */
    N5XC56GP5X4_MRC_SUB_REG_MASK_W  = 0x9,  /* REGISTER MASK WRITE */
    N5XC56GP5X4_MRC_SUB_REG_R       = 0xA,  /* REGISTER READ */
    N5XC56GP5X4_MRC_SUB_DATAPATH    = 0xB,  /* DATAPATH_CONTROL */
    N5XC56GP5X4_MRC_SUB_RX_LATENCY  = 0xC,  /* RX DETERMINISTIC LATENCY */
    N5XC56GP5X4_MRC_SUB_PWR_ON_TX   = 0xD,  /* POWER ON TX */
    N5XC56GP5X4_MRC_SUB_PWR_ON_RX   = 0xE,  /* POWER ON RX */
    N5XC56GP5X4_MRC_SUB_PWR_ON_TRX  = 0xF,  /* POWER ON TRX */
    N5XC56GP5X4_MRC_SUB_PWR_OFF_TX  = 0x10, /* POWER OFF TX */
    N5XC56GP5X4_MRC_SUB_PWR_OFF_RX  = 0x11, /* POWER OFF RX */
    N5XC56GP5X4_MRC_SUB_PWR_OFF_TRX = 0x12, /* POWER OFF TRX */
    N5XC56GP5X4_MRC_SUB_SPD_CHG_TX  = 0x13, /* SPEED CHANGE TX */
    N5XC56GP5X4_MRC_SUB_SPD_CHG_RX  = 0x14, /* SPEED CHANGE RX */
    N5XC56GP5X4_MRC_SUB_SPD_CHG_TRX = 0x15, /* SPEED CHANGE TRX */
    N5XC56GP5X4_MRC_SUB_SFT_RST_TX  = 0x16, /* SOFT RESET TX */
    N5XC56GP5X4_MRC_SUB_SFT_RST_RX  = 0x17, /* SOFT RESET RX */
    N5XC56GP5X4_MRC_SUB_SFT_RST_TRX = 0x18, /* SOFT RESET TRX */
} E_N5XC56GP5X4_MRC_SUB;

/* Training Log */
typedef enum {
    N5XC56GP5X4_TLOG2_CTRL_HOLD     = 0,
    N5XC56GP5X4_TLOG2_CTRL_INC      = 1,
    N5XC56GP5X4_TLOG2_CTRL_DEC      = 2,
    N5XC56GP5X4_TLOG2_CTRL_NA       = 3,    /* RESERVED */
} E_N5XC56GP5X4_TLOG2_CTRL;

typedef enum {
    N5XC56GP5X4_TLOG2_STS_NO_UPDATE = 0,
    N5XC56GP5X4_TLOG2_STS_UPDATE    = 1,
    N5XC56GP5X4_TLOG2_STS_MIN       = 2,
    N5XC56GP5X4_TLOG2_STS_MAX       = 3,
} E_N5XC56GP5X4_TLOG2_STS;

typedef enum {
    N5XC56GP5X4_TLOG2_PRESET0       = 0,
    N5XC56GP5X4_TLOG2_PRESET1       = 1,
    N5XC56GP5X4_TLOG2_PRESET_NA     = 2,    /* RESERVED */
} E_N5XC56GP5X4_TLOG2_PRESET;

typedef struct
{
    MCESD_BOOL remoteReqPreset;
    E_N5XC56GP5X4_TLOG2_CTRL remoteReqCtrlG1;
    E_N5XC56GP5X4_TLOG2_CTRL remoteReqCtrlG0;
    E_N5XC56GP5X4_TLOG2_CTRL remoteReqCtrlGN1;
    E_N5XC56GP5X4_TLOG2_STS remoteReqStsG1;
    E_N5XC56GP5X4_TLOG2_STS remoteReqStsG0;
    E_N5XC56GP5X4_TLOG2_STS remoteReqStsGN1;
    MCESD_BOOL initialize;
    MCESD_BOOL ready;
    E_N5XC56GP5X4_TLOG2_PRESET localReqPreset;
    E_N5XC56GP5X4_TLOG2_CTRL localReqCtrlG1;
    E_N5XC56GP5X4_TLOG2_CTRL localReqCtrlG0;
    E_N5XC56GP5X4_TLOG2_CTRL localReqCtrlGN1;
    E_N5XC56GP5X4_TLOG2_STS localReqStsG1;
    E_N5XC56GP5X4_TLOG2_STS localReqStsG0;
    E_N5XC56GP5X4_TLOG2_STS localReqStsGN1;
} S_N5XC56GP5X4_TLOG2;

typedef enum {
    N5XC56GP5X4_TLOG4_PRESET0       = 0,    /* Independent COE Control */
    N5XC56GP5X4_TLOG4_PRESET1       = 1,    /* No Coefficient */
    N5XC56GP5X4_TLOG4_PRESET2       = 2,    /* Pre COE = -15%, Post COE = -10%, Main COE = 75% */
    N5XC56GP5X4_TLOG4_PRESET3       = 3,    /* Pre COE = -25%, Post COE = -25%, Main COE = 60% */
} E_N5XC56GP5X4_TLOG4_PRESET;

typedef enum {
    N5XC56GP5X4_TLOG4_PAT_PAM2      = 0,
    N5XC56GP5X4_TLOG4_PAT_PAM4      = 1,
    N5XC56GP5X4_TLOG4_PAT_PAM4_PRE  = 2,    /* PAM4 with Precoding */
    N5XC56GP5X4_TLOG4_PAT_NA        = 3,    /* RESERVED */
} E_N5XC56GP5X4_TLOG4_PAT;

typedef enum {
    N5XC56GP5X4_TLOG4_SEL_COE_N3    = 0,    /* COE(-3) */
    N5XC56GP5X4_TLOG4_SEL_COE_N2    = 1,    /* COE(-2) */
    N5XC56GP5X4_TLOG4_SEL_COE_N1    = 2,    /* COE(-1) */
    N5XC56GP5X4_TLOG4_SEL_COE_P0    = 3,    /* COE(+0) */
    N5XC56GP5X4_TLOG4_SEL_COE_P1    = 4,    /* COE(+1) */
    N5XC56GP5X4_TLOG4_SEL_NA        = 5,    /* RESERVED */
} E_N5XC56GP5X4_TLOG4_SEL;

typedef enum {
    N5XC56GP5X4_TLOG4_CTRL_HOLD     = 0,
    N5XC56GP5X4_TLOG4_CTRL_INC      = 1,
    N5XC56GP5X4_TLOG4_CTRL_DEC      = 2,
    N5XC56GP5X4_TLOG4_CTRL_NO_EQ    = 3,
} E_N5XC56GP5X4_TLOG4_CTRL;

typedef enum {
    N5XC56GP5X4_TLOG4_STS_NO_UPDATE = 0,
    N5XC56GP5X4_TLOG4_STS_UPDATE    = 1,
    N5XC56GP5X4_TLOG4_STS_COE_L     = 2,    /* COE Limit */
    N5XC56GP5X4_TLOG4_STS_COE_NA    = 3,    /* COE not support */
    N5XC56GP5X4_TLOG4_STS_EQ_L      = 4,    /* EQ Limit */
    N5XC56GP5X4_TLOG4_STS_EQ_COE_L  = 5,    /* EQ and COE Limit */
    N5XC56GP5X4_TLOG4_STS_NA        = 6,    /* RESERVED */
} E_N5XC56GP5X4_TLOG4_STS;

typedef struct
{
    E_N5XC56GP5X4_TLOG4_PAT remoteReqCtrlPat;
    E_N5XC56GP5X4_TLOG4_PRESET remoteReqPreset;
    E_N5XC56GP5X4_TLOG4_CTRL remoteReqCtrlG;
    E_N5XC56GP5X4_TLOG4_SEL remoteReqCtrlSel;
    E_N5XC56GP5X4_TLOG4_STS remoteReqStsG;
    MCESD_BOOL ready;
    E_N5XC56GP5X4_TLOG4_PAT localReqCtrlPat;
    E_N5XC56GP5X4_TLOG4_PRESET localReqPreset;
    E_N5XC56GP5X4_TLOG4_CTRL localReqCtrlG;
    E_N5XC56GP5X4_TLOG4_SEL localReqCtrlSel;
    E_N5XC56GP5X4_TLOG4_STS localReqStsG;
    MCESD_BOOL stsAck;
} S_N5XC56GP5X4_TLOG4;

typedef struct
{
    MCESD_BOOL isPAM4;
    S_N5XC56GP5X4_TLOG2 pam2;
    S_N5XC56GP5X4_TLOG4 pam4;
} S_N5XC56GP5X4_TLOG_ENTRY;

/* AVDD Select */
typedef enum
{
    N5XC56GP5X4_AVDD_1P1V           = 0x5,
    N5XC56GP5X4_AVDD_1P15V          = 0x6,
    N5XC56GP5X4_AVDD_1P2V           = 0x7
} E_N5XC56GP5X4_AVDD;

/* Speed Configuration */
typedef enum
{
    N5XC56GP5X4_SPD_CFG_4_PLL       = 0x2,
    N5XC56GP5X4_SPD_CFG_ONLY_TS     = 0x3
} E_N5XC56GP5X4_SPD_CFG;

typedef struct
{
    union
    {
        struct
        {
            MCESD_U32 powerLane0 : 1;
            MCESD_U32 powerLane1 : 1;
            MCESD_U32 powerLane2 : 1;
            MCESD_U32 powerLane3 : 1;
            MCESD_U32 powerReserved : 28;
        }powerLane;
        MCESD_U32 powerLaneMask;
    }u;
    MCESD_BOOL initTx;
    MCESD_BOOL initRx;
    MCESD_BOOL txOutputEn;
    MCESD_BOOL downloadFw;
    MCESD_BOOL resetTxTrainCodingMode;
    E_N5XC56GP5X4_DATAPATH dataPath;
    E_N5XC56GP5X4_REFCLK_SEL txRefClkSel;
    E_N5XC56GP5X4_REFCLK_SEL rxRefClkSel;
    E_N5XC56GP5X4_REFFREQ txRefFreq;
    E_N5XC56GP5X4_REFFREQ rxRefFreq;
    E_N5XC56GP5X4_DATABUS_WIDTH dataBusWidth;
    E_N5XC56GP5X4_SERDES_SPEED txSpeed;
    E_N5XC56GP5X4_SERDES_SPEED rxSpeed;
    E_N5XC56GP5X4_AVDD avdd;
    E_N5XC56GP5X4_SPD_CFG spdCfg;
    FMCESD_FW_DOWNLOAD_NEW fwDownload;
    MCESD_U32 *fwCodePtr;
    MCESD_U32 fwCodeSizeDW;
    MCESD_U32 address;
    MCESD_U32 rxInitTimeout;
} S_N5XC56GP5X4_PowerOn;

/* Misc */
#define F_N5XC56GP5X4_PHY_ISOLATE       FIELD_DEFINE(0xA318, 23, 23)    /* PHY_ISOLATE_MODE */
#define F_N5XC56GP5X4_LANE_SEL          FIELD_DEFINE(0xA318, 31, 28)
#define F_N5XC56GP5X4_DFE_EN            FIELD_DEFINE(0x5648, 29, 29)
#define F_N5XC56GP5X4R2P0_DFE_EN        FIELD_DEFINE(0x564C, 29, 29)
#define F_N5XC56GP5X4_RSRVD_INPUT_RX_RD FIELD_DEFINE(0x5604, 15, 0)     /* PIN_RESERVED_INPUT_RX_RD_LANE */
#define F_N5XC56GP5X4_RSRVD_INPUT_RX    FIELD_DEFINE(0x562C, 31, 16)    /* RESERVED_INPUT_RX_LANE */
#define F_N5XC56GP5X4_RSRVD_INPUT_RX_FM FIELD_DEFINE(0x562C, 15, 15)    /* RESERVED_INPUT_RX_FM_REG_LANE */
#define F_N5XC56GP5X4_CODING_HW_RST_TX  FIELD_DEFINE(0x30D4, 31, 31)    /* TX_TRAIN_CODING_MODE_HW_RST_TX_LANE */
#define F_N5XC56GP5X4R2P0_TX_HW_RST_TX  FIELD_DEFINE(0x30D0, 10, 10)    /* TX_TRAIN_CODING_MODE_HW_RST_TX_LANE */
#define F_N5XC56GP5X4_CODING_HW_RST_RX  FIELD_DEFINE(0x5088, 21, 21)    /* TX_TRAIN_CODING_MODE_HW_RST_RX_LANE */
#define F_N5XC56GP5X4_FOFFSET_INPH      FIELD_DEFINE(0x32BC, 17, 0)     /* RX_FOFFSET_INPH_LANE */
#define F_N5XC56GP5X4_FOFFSET_INPH_REQ  FIELD_DEFINE(0x32BC, 18, 18)    /* RX_FOFFSET_INPH_REQ_LANE */

/* Broadcast */
#define F_N5XC56GP5X4_BROADCAST         FIELD_DEFINE(0xA318, 27, 27)

/* PLL Lock */
#define F_N5XC56GP5X4_PLL_RS_LOCK       FIELD_DEFINE(0x5800, 30, 30)    /* ANA_PLL_RS_LOCK_RD_LANE */
#define F_N5XC56GP5X4_PLL_TS_LOCK       FIELD_DEFINE(0x5700, 6, 6)      /* ANA_PLL_TS_LOCK_RD_LANE */

/* Align 90 */
#define F_N5XC56GP5X4_PH_OS_DAT         FIELD_DEFINE(0x6DDC, 7, 0)
#define F_N5XC56GP5X4_ALIGN90_CAL_7_0   FIELD_DEFINE(0x19B8, 7, 0)      /* RX_ALIGN90_CAL_SETTING_LANE[7:0] */

/* Squelch Threshold */
#define F_N5XC56GP5X4_SQ_RES_RD         FIELD_DEFINE(0x1AF0, 6, 1)      /* SQ_CAL_RESULT_RD_LANE */
#define F_N5XC56GP5X4_SQ_RES_EXT        FIELD_DEFINE(0x1AEC, 7, 2)      /* SQ_CAL_RESULT_EXT_LANE */
#define F_N5XC56GP5X4_SQ_INDV           FIELD_DEFINE(0x1AE4, 0, 0)      /* SQ_CAL_INDV_EXT_EN_LANE */

/* Data Bus Width */
#define F_N5XC56GP5X4_TX_SEL_BITS       FIELD_DEFINE(0x3034, 31, 31)
#define F_N5XC56GP5X4_RX_SEL_BITS       FIELD_DEFINE(0x3204, 31, 31)
#define F_N5XC56GP5X4_TX_PAM2_EN        FIELD_DEFINE(0x303C, 30, 30)
#define F_N5XC56GP5X4_RX_PAM2_EN        FIELD_DEFINE(0x3204, 0, 0)

/* Polarity */
#define F_N5XC56GP5X4_TXD_INV           FIELD_DEFINE(0x3024, 30, 30)
#define F_N5XC56GP5X4_RXD_INV           FIELD_DEFINE(0x3248, 29, 29)

/* Firmware Version */
#define F_N5XC56GP5X4_FW_MAJOR_VER      FIELD_DEFINE(0xE600, 31, 24)
#define F_N5XC56GP5X4_FW_MINOR_VER      FIELD_DEFINE(0xE600, 23, 16)
#define F_N5XC56GP5X4_FW_PATCH_VER      FIELD_DEFINE(0xE600, 15, 8)
#define F_N5XC56GP5X4_FW_BUILD_VER      FIELD_DEFINE(0xE600, 7, 0)

/* TX Equalization Parameters */
#define F_N5XC56GP5X4_TX_C0             FIELD_DEFINE(0x30CC, 29, 24)    /* TX_FIR_C0_LANE */
#define F_N5XC56GP5X4_TX_C1             FIELD_DEFINE(0x30CC, 22, 17)    /* TX_FIR_C1_LANE */
#define F_N5XC56GP5X4_TX_C2             FIELD_DEFINE(0x30CC, 14, 9)     /* TX_FIR_C2_LANE */
#define F_N5XC56GP5X4_TX_C3             FIELD_DEFINE(0x30CC, 6, 1)      /* TX_FIR_C3_LANE */
#define F_N5XC56GP5X4_TX_C4             FIELD_DEFINE(0x30D0, 30, 25)    /* TX_FIR_C4_LANE */
#define F_N5XC56GP5X4_TX_C5             FIELD_DEFINE(0x30D0, 22, 17)    /* TX_FIR_C5_LANE */
#define F_N5XC56GP5X4_TX_C0_FORCE       FIELD_DEFINE(0x30CC, 30, 30)    /* TX_FIR_C0_FORCE_LANE */
#define F_N5XC56GP5X4_TX_C1_FORCE       FIELD_DEFINE(0x30CC, 23, 23)    /* TX_FIR_C1_FORCE_LANE */
#define F_N5XC56GP5X4_TX_C2_FORCE       FIELD_DEFINE(0x30CC, 15, 15)    /* TX_FIR_C2_FORCE_LANE */
#define F_N5XC56GP5X4_TX_C3_FORCE       FIELD_DEFINE(0x30CC, 7, 7)      /* TX_FIR_C3_FORCE_LANE */
#define F_N5XC56GP5X4_TX_C4_FORCE       FIELD_DEFINE(0x30D0, 31, 31)    /* TX_FIR_C4_FORCE_LANE */
#define F_N5XC56GP5X4_TX_C5_FORCE       FIELD_DEFINE(0x30D0, 23, 23)    /* TX_FIR_C5_FORCE_LANE */
#define F_N5XC56GP5X4_TX_UP             FIELD_DEFINE(0x30D0, 8, 8)      /* TX_FIR_UPDATE_LANE */
#define F_N5XC56GP5X4_TX_UP_FORCE       FIELD_DEFINE(0x30D0, 7, 7)      /* TX_FIR_UPDATE_FORCE_LANE */
#define F_N5XC56GP5X4_ANA_TX_C0         FIELD_DEFINE(0x30D4, 29, 24)    /* TO_ANA_TX_FIR_C0_LANE */
#define F_N5XC56GP5X4_ANA_TX_C1         FIELD_DEFINE(0x30D4, 21, 16)    /* TO_ANA_TX_FIR_C1_LANE */
#define F_N5XC56GP5X4_ANA_TX_C2         FIELD_DEFINE(0x30D4, 13, 8)     /* TO_ANA_TX_FIR_C2_LANE */
#define F_N5XC56GP5X4_ANA_TX_C3         FIELD_DEFINE(0x30D4, 5, 0)      /* TO_ANA_TX_FIR_C3_LANE */
#define F_N5XC56GP5X4_ANA_TX_C4         FIELD_DEFINE(0x30D8, 29, 24)    /* TO_ANA_TX_FIR_C4_LANE */
#define F_N5XC56GP5X4_ANA_TX_C5         FIELD_DEFINE(0x30D8, 21, 16)    /* TO_ANA_TX_FIR_C5_LANE*/
#define F_N5XC56GP5X4_TX_FIR_TAP_POL    FIELD_DEFINE(0x30D0, 6, 1)      /* TX_FIR_TAP_POL_LANE */
#define F_N5XC56GP5X4_TX_FIR_TAP_POL_F  FIELD_DEFINE(0x30D0, 0, 0)      /* TX_FIR_TAP_POL_FORCE_LANE */
#define F_N5XC56GP5X4_TO_ANA_TX_FIR_POL FIELD_DEFINE(0x30D8, 13, 8)     /* TO_ANA_TX_FIR_TAP_POL_LANE */

/* Error Injection */
#define F_N5XC56GP5X4_ADD_ERR_EN        FIELD_DEFINE(0x3024, 29, 29)
#define F_N5XC56GP5X4_ADD_ERR_NUM       FIELD_DEFINE(0x3024, 28, 26)

/* CTLE */
#define F_N5XC56GP5X4_CURRENT1_SEL      FIELD_DEFINE(0x1050, 3, 0)      /* CTLE_CURRENT1_SEL_LANE */
#define F_N5XC56GP5X4_RL1_SEL           FIELD_DEFINE(0x1060, 3, 0)      /* CTLE_RL1_SEL_LANE */
#define F_N5XC56GP5X4_RL1_EXTRA         FIELD_DEFINE(0x1038, 2, 0)      /* CTLE_RL1_EXTRA_LANE */
#define F_N5XC56GP5X4_RES1_SEL          FIELD_DEFINE(0x1058, 3, 0)      /* CTLE_RES1_SEL_LANE */
#define F_N5XC56GP5X4_CAP1_SEL_G        FIELD_DEFINE(0x1048, 3, 0)      /* CTLE_CAP1_SEL_G_LANE */
#define F_N5XC56GP5X4_EN_MID_FREQ       FIELD_DEFINE(0x1088, 4, 4)      /* EN_CTLE_MID_FREQ_LANE */
#define F_N5XC56GP5X4_CS1_MID           FIELD_DEFINE(0x1040, 5, 4)      /* CTLE_CS1_MID_LANE */
#define F_N5XC56GP5X4_RS1_MID           FIELD_DEFINE(0x1040, 7, 6)      /* CTLE_RS1_MID_LANE */
#define F_N5XC56GP5X4_CURRENT2_SEL      FIELD_DEFINE(0x1054, 3, 0)      /* CTLE_CURRENT2_SEL_LANE */
#define F_N5XC56GP5X4_RL2_SEL           FIELD_DEFINE(0x1064, 3, 0)      /* CTLE_RL2_SEL_LANE */
#define F_N5XC56GP5X4_RL2_TUNE_G        FIELD_DEFINE(0x0100, 2, 0)      /* CTLE_RL2_TUNE_G_LANE */
#define F_N5XC56GP5X4_RES2_SEL          FIELD_DEFINE(0x105C, 3, 0)      /* CTLE_RES2_SEL_LANE */
#define F_N5XC56GP5X4_CAP2_SEL          FIELD_DEFINE(0x104C, 3, 0)      /* CTLE_CAP2_SEL_LANE */
#define F_N5XC56GP5X4_CTLE_CL1_SEL      FIELD_DEFINE(0x103C, 1, 0)
#define F_N5XC56GP5X4_CTLE_CL2_SEL      FIELD_DEFINE(0x103C, 3, 2)

/* CDR */
#define F_N5XC56GP5X4_RX_SELMUFI        FIELD_DEFINE(0x3200, 3, 0)
#define F_N5XC56GP5X4_RX_SELMUFF        FIELD_DEFINE(0x3200, 7, 4)
#define F_N5XC56GP5X4_REG_SELMUPI       FIELD_DEFINE(0x10CC, 2, 0)
#define F_N5XC56GP5X4_REG_SELMUPF       FIELD_DEFINE(0x10C4, 2, 0)

/* DFE */
#define F_N5XC56GP5X4_DC_D_T_E_SM       FIELD_DEFINE(0x4108, 22, 16)    /* DFE_DC_D_TOP_E_SM_LANE */
#define F_N5XC56GP5X4_DC_E_E_SM         FIELD_DEFINE(0x410C, 22, 16)    /* DFE_DC_E_E_SM_LANE */
#define F_N5XC56GP5X4_VREF_T_E_SM       FIELD_DEFINE(0x4110, 14, 8)     /* DFE_VREF_TOP_E_SM_LANE */
#define F_N5XC56GP5X4_F0_D_T_E_SM       FIELD_DEFINE(0x4114, 5, 0)      /* DFE_F0_D_TOP_E_SM_LANE */
#define F_N5XC56GP5X4_F1_D_T_E_SM       FIELD_DEFINE(0x4118, 22, 16)    /* DFE_F1_D_TOP_E_SM_LANE */
#define F_N5XC56GP5X4_F1P5_E_SM         FIELD_DEFINE(0x4140, 13, 8)     /* DFE_F1P5_E_SM_LANE */
#define F_N5XC56GP5X4_F2_D_T_E_SM       FIELD_DEFINE(0x4120, 5, 0)      /* DFE_F2_D_TOP_E_SM_LANE */
#define F_N5XC56GP5X4_F3_T_E_SM         FIELD_DEFINE(0x4124, 22, 16)    /* DFE_F3_TOP_E_SM_LANE */
#define F_N5XC56GP5X4_F4_T_E_SM         FIELD_DEFINE(0x4128, 14, 8)     /* DFE_F4_TOP_E_SM_LANE */
#define F_N5XC56GP5X4_F5_LSB_E_SM       FIELD_DEFINE(0x4128, 21, 16)    /* DFE_F5_LSB_E_SM_LANE */
#define F_N5XC56GP5X4_F5_MSB_E_SM       FIELD_DEFINE(0x4128, 29, 24)    /* DFE_F5_MSB_E_SM_LANE */
#define F_N5XC56GP5X4_F6_LSB_E_SM       FIELD_DEFINE(0x412C, 5, 0)      /* DFE_F6_LSB_E_SM_LANE */
#define F_N5XC56GP5X4_F6_MSB_E_SM       FIELD_DEFINE(0x412C, 13, 8)     /* DFE_F6_MSB_E_SM_LANE */
#define F_N5XC56GP5X4_F7_LSB_E_SM       FIELD_DEFINE(0x412C, 21, 16)    /* DFE_F7_LSB_E_SM_LANE */
#define F_N5XC56GP5X4_F7_MSB_E_SM       FIELD_DEFINE(0x412C, 29, 24)    /* DFE_F7_MSB_E_SM_LANE */
#define F_N5XC56GP5X4_F8_LSB_E_SM       FIELD_DEFINE(0x4130, 13, 8)     /* DFE_F8_LSB_E_SM_LANE */
#define F_N5XC56GP5X4_F8_MSB_E_SM       FIELD_DEFINE(0x4130, 21, 16)    /* DFE_F8_MSB_E_SM_LANE */
#define F_N5XC56GP5X4_F9_LSB_E_SM       FIELD_DEFINE(0x4134, 5, 0)      /* DFE_F9_LSB_E_SM_LANE */
#define F_N5XC56GP5X4_F9_MSB_E_SM       FIELD_DEFINE(0x4134, 13, 8)     /* DFE_F9_MSB_E_SM_LANE */
#define F_N5XC56GP5X4_F10_LSB_E_SM      FIELD_DEFINE(0x4134, 29, 24)    /* DFE_F10_LSB_E_SM_LANE */
#define F_N5XC56GP5X4_F10_MSB_E_SM      FIELD_DEFINE(0x4138, 5, 0)      /* DFE_F10_MSB_E_SM_LANE */
#define F_N5XC56GP5X4_F11_E_SM          FIELD_DEFINE(0x4138, 20, 16)    /* DFE_F11_E_SM_LANE */
#define F_N5XC56GP5X4_F12_E_SM          FIELD_DEFINE(0x413C, 4, 0)      /* DFE_F12_E_SM_LANE */
#define F_N5XC56GP5X4_F13_E_SM          FIELD_DEFINE(0x413C, 20, 16)    /* DFE_F13_E_SM_LANE */
#define F_N5XC56GP5X4_F14_E_SM          FIELD_DEFINE(0x413C, 28, 24)    /* DFE_F14_E_SM_LANE */
#define F_N5XC56GP5X4_F15_E_SM          FIELD_DEFINE(0x4140, 4, 0)      /* DFE_F15_E_SM_LANE */
#define F_N5XC56GP5X4_FF0_E_SM          FIELD_DEFINE(0x4130, 5, 0)      /* DFE_FF0_E_SM_LANE */
#define F_N5XC56GP5X4_FF1_E_SM          FIELD_DEFINE(0x4130, 29, 24)    /* DFE_FF1_E_SM_LANE */
#define F_N5XC56GP5X4_FF2_E_SM          FIELD_DEFINE(0x4134, 21, 16)    /* DFE_FF2_E_SM_LANE */
#define F_N5XC56GP5X4_FF3_E_SM          FIELD_DEFINE(0x4138, 13, 8)     /* DFE_FF3_E_SM_LANE */
#define F_N5XC56GP5X4_FF4_E_SM          FIELD_DEFINE(0x4138, 29, 24)    /* DFE_FF4_E_SM_LANE */
#define F_N5XC56GP5X4_FF5_E_SM          FIELD_DEFINE(0x413C, 13, 8)     /* DFE_FF5_E_SM_LANE */
#define F_N5XC56GP5X4_DC_D_M_E_SM       FIELD_DEFINE(0x4108, 14, 8)     /* DFE_DC_D_MID_E_SM_LANE */
#define F_N5XC56GP5X4_VREF_M_E_SM       FIELD_DEFINE(0x4110, 6, 0)      /* DFE_VREF_MID_E_SM_LANE */
#define F_N5XC56GP5X4_F0_D_M_E_SM       FIELD_DEFINE(0x4110, 29, 24)    /* DFE_F0_D_MID_E_SM_LANE */
#define F_N5XC56GP5X4_F1_D_M_E_SM       FIELD_DEFINE(0x4118, 14, 8)     /* DFE_F1_D_MID_E_SM_LANE */
#define F_N5XC56GP5X4_F2_D_M_E_SM       FIELD_DEFINE(0x411C, 29, 24)    /* DFE_F2_D_MID_E_SM_LANE */
#define F_N5XC56GP5X4_F3_M_E_SM         FIELD_DEFINE(0x4124, 14, 8)     /* DFE_F3_MID_E_SM_LANE */
#define F_N5XC56GP5X4_F4_M_E_SM         FIELD_DEFINE(0x4128, 6, 0)      /* DFE_F4_MID_E_SM_LANE */
#define F_N5XC56GP5X4_DC_D_B_E_SM       FIELD_DEFINE(0x4108, 6, 0)      /* DFE_DC_D_BOT_E_SM_LANE */
#define F_N5XC56GP5X4_VREF_B_E_SM       FIELD_DEFINE(0x410C, 30, 24)    /* DFE_VREF_BOT_E_SM_LANE */
#define F_N5XC56GP5X4_F0_D_B_E_SM       FIELD_DEFINE(0x4110, 21, 16)    /* DFE_F0_D_BOT_E_SM_LANE */
#define F_N5XC56GP5X4_F1_D_B_E_SM       FIELD_DEFINE(0x4118, 6, 0)      /* DFE_F1_D_BOT_E_SM_LANE */
#define F_N5XC56GP5X4_F2_D_B_E_SM       FIELD_DEFINE(0x411C, 21, 16)    /* DFE_F2_D_BOT_E_SM_LANE */
#define F_N5XC56GP5X4_F3_B_E_SM         FIELD_DEFINE(0x4124, 6, 0)      /* DFE_F3_BOT_E_SM_LANE */
#define F_N5XC56GP5X4_F4_B_E_SM         FIELD_DEFINE(0x4124, 30, 24)    /* DFE_F4_BOT_E_SM_LANE */
#define F_N5XC56GP5X4_F0_DC_SHIFT       FIELD_DEFINE(0x1088, 6, 5)
#define F_N5XC56GP5X4_DFE_RES_F0        FIELD_DEFINE(0x106C, 5, 4)
#define F_N5XC56GP5X4_DFE_F0_RES_DOUBLE FIELD_DEFINE(0x1068, 3, 3)
#define F_N5XC56GP5X4_OFST_RES          FIELD_DEFINE(0x10B4, 7, 7)
#define F_N5XC56GP5X4_DFE_RES_VREF      FIELD_DEFINE(0x1074, 1, 0)
#define F_N5XC56GP5X4_VREF_SHIFT        FIELD_DEFINE(0x1110, 5, 4)
#define F_N5XC56GP5X4_DFE_RES_F1        FIELD_DEFINE(0x106C, 3, 2)
#define F_N5XC56GP5X4_DFE_RES_F1P5      FIELD_DEFINE(0x106C, 1, 0)
#define F_N5XC56GP5X4_DFE_RES_F2        FIELD_DEFINE(0x1070, 6, 5)
#define F_N5XC56GP5X4_DFE_RES_F34       FIELD_DEFINE(0x1070, 4, 4)
#define F_N5XC56GP5X4_DFE_RES_DOUBLE    FIELD_DEFINE(0x106C, 7, 6)
#define F_N5XC56GP5X4_DFE_RES_F567      FIELD_DEFINE(0x1070, 3, 3)
#define F_N5XC56GP5X4_DFE_RES_F8TO10    FIELD_DEFINE(0x1070, 2, 2)
#define F_N5XC56GP5X4_DFE_RES_F11TO15   FIELD_DEFINE(0x1070, 1, 1)
#define F_N5XC56GP5X4_DFE_RES_FLOATING  FIELD_DEFINE(0x1070, 0, 0)

/* Trained Eye Height */
#define F_N5XC56GP5X4_F0_D_T_O_2C       FIELD_DEFINE(0x418C, 7, 0)      /* DFE_F0_D_TOP_O_2C_LANE */
#define F_N5XC56GP5X4R2P0_F0_D_T_O_2C   FIELD_DEFINE(0x41C8, 7, 0)      /* DFE_F0_D_TOP_O_2C_LANE */
#define F_N5XC56GP5X4_F0_S_T_O_2C       FIELD_DEFINE(0x418C, 31, 24)    /* DFE_F0_S_TOP_O_2C_LANE */
#define F_N5XC56GP5X4R2P0_F0_S_T_O_2C   FIELD_DEFINE(0x41C8, 31, 24)    /* DFE_F0_S_TOP_O_2C_LANE */
#define F_N5XC56GP5X4_F0_D_T_E_2C       FIELD_DEFINE(0x41C8, 7, 0)      /* DFE_F0_D_TOP_E_2C_LANE */
#define F_N5XC56GP5X4R2P0_F0_D_T_E_2C   FIELD_DEFINE(0x418C, 7, 0)      /* DFE_F0_D_TOP_E_2C_LANE */
#define F_N5XC56GP5X4_F0_S_T_E_2C       FIELD_DEFINE(0x41C8, 31, 24)    /* DFE_F0_S_TOP_E_2C_LANE */
#define F_N5XC56GP5X4R2P0_F0_S_T_E_2C   FIELD_DEFINE(0x418C, 31, 24)    /* DFE_F0_S_TOP_E_2C_LANE */
#define F_N5XC56GP5X4_F0_D_M_O_2C       FIELD_DEFINE(0x4188, 31, 24)    /* DFE_F0_D_MID_O_2C_LANE */
#define F_N5XC56GP5X4R2P0_F0_D_M_O_2C   FIELD_DEFINE(0x41C4, 31, 24)    /* DFE_F0_D_MID_O_2C_LANE */
#define F_N5XC56GP5X4_F0_S_M_O_2C       FIELD_DEFINE(0x418C, 23, 16)    /* DFE_F0_S_MID_O_2C_LANE */
#define F_N5XC56GP5X4R2P0_F0_S_M_O_2C   FIELD_DEFINE(0x41C8, 23, 16)    /* DFE_F0_S_MID_O_2C_LANE */
#define F_N5XC56GP5X4_F0_D_M_E_2C       FIELD_DEFINE(0x41C4, 31, 24)    /* DFE_F0_D_MID_E_2C_LANE */
#define F_N5XC56GP5X4R2P0_F0_D_M_E_2C   FIELD_DEFINE(0x4188, 31, 24)    /* DFE_F0_D_MID_E_2C_LANE */
#define F_N5XC56GP5X4_F0_S_M_E_2C       FIELD_DEFINE(0x41C8, 23, 16)    /* DFE_F0_S_MID_E_2C_LANE */
#define F_N5XC56GP5X4R2P0_F0_S_M_E_2C   FIELD_DEFINE(0x418C, 23, 16)    /* DFE_F0_S_MID_E_2C_LANE */
#define F_N5XC56GP5X4_F0_D_B_O_2C       FIELD_DEFINE(0x4188, 23, 16)    /* DFE_F0_D_BOT_O_2C_LANE */
#define F_N5XC56GP5X4R2P0_F0_D_B_O_2C   FIELD_DEFINE(0x41C4, 23, 16)    /* DFE_F0_D_BOT_O_2C_LANE */
#define F_N5XC56GP5X4_F0_S_B_O_2C       FIELD_DEFINE(0x418C, 15, 8)     /* DFE_F0_S_BOT_O_2C_LANE */
#define F_N5XC56GP5X4R2P0_F0_S_B_O_2C   FIELD_DEFINE(0x41C8, 15, 8)     /* DFE_F0_S_BOT_O_2C_LANE */
#define F_N5XC56GP5X4_F0_D_B_E_2C       FIELD_DEFINE(0x41C4, 23, 16)    /* DFE_F0_D_BOT_E_2C_LANE */
#define F_N5XC56GP5X4R2P0_F0_D_B_E_2C   FIELD_DEFINE(0x4188, 23, 16)    /* DFE_F0_D_BOT_E_2C_LANE */
#define F_N5XC56GP5X4_F0_S_B_E_2C       FIELD_DEFINE(0x41C8, 15, 8)     /* DFE_F0_S_BOT_E_2C_LANE */
#define F_N5XC56GP5X4R2P0_F0_S_B_E_2C   FIELD_DEFINE(0x418C, 15, 8)     /* DFE_F0_S_BOT_E_2C_LANE */
#define F_N5XC56GP5X4_DFE_ADAPT         FIELD_DEFINE(0x4000, 13, 13)
#define F_N5XC56GP5X4_CLI_CMD           FIELD_DEFINE(0x6068, 7, 0)
#define F_N5XC56GP5X4_CLI_ARGS          FIELD_DEFINE(0x606C, 31, 0)
#define F_N5XC56GP5X4_CLI_START         FIELD_DEFINE(0x6068, 8, 8)
#define F_N5XC56GP5X4_DFE_F0X_SEL       FIELD_DEFINE(0x401C, 14, 10)
#define F_N5XC56GP5X4_DFE_LOAD_EN       FIELD_DEFINE(0x6DD0, 15, 15)

/* Training Timeout */
#define F_N5XC56GP5X4_TRX_TIMER         FIELD_DEFINE(0x5018, 31, 16)
#define F_N5XC56GP5X4_RX_TIMER          FIELD_DEFINE(0x5018, 15, 0)
#define F_N5XC56GP5X4_TX_TIMER_EN       FIELD_DEFINE(0x6034, 29, 29)
#define F_N5XC56GP5X4_RX_TIMER_EN       FIELD_DEFINE(0x6034, 30, 30)

/* Data Path */
#define F_N5XC56GP5X4_D_TX2RX_LPBK      FIELD_DEFINE(0x3248, 31, 31)    /* LOCAL_DIG_TX2RX_LPBK_EN_LANE */
#define F_N5XC56GP5X4_A_TX2RX_LPBK      FIELD_DEFINE(0x1130, 3, 3)      /* LOCAL_ANA_TX2RX_LPBK_EN_LANE */
#define F_N5XC56GP5X4_D_RX2TX_LPBK      FIELD_DEFINE(0x3024, 31, 31)    /* LOCAL_DIG_RX2TX_LPBK_EN_LANE */
#define F_N5XC56GP5X4_DTL_CLAMPING      FIELD_DEFINE(0x3260, 26, 24)    /* DTL_CLAMPING_SEL */
#define F_N5XC56GP5X4_R2T_NO_STOP       FIELD_DEFINE(0x3024, 25, 25)    /* RX2TX_FIFO_NO_STOP */
#define F_N5XC56GP5X4_R2T_RD_START      FIELD_DEFINE(0x3024, 24, 24)    /* RX2TX_FIFO_RD_START_POINT */
#define F_N5XC56GP5X4_FOFFSET_DIS       FIELD_DEFINE(0x3268, 16, 16)    /* RX_FOFFSET_DISABLE */
#define F_N5XC56GP5X4_PU_LB             FIELD_DEFINE(0x10B8, 3, 3)
#define F_N5XC56GP5X4_DTL_SQ_DET_EN     FIELD_DEFINE(0x3260, 13, 13)
#define F_N5XC56GP5X4_DFE_SQ_EN         FIELD_DEFINE(0x4040, 29, 29)

/* PHY Test Pattern */
#define F_N5XC56GP5X4_TX_PAT_SEL        FIELD_DEFINE(0x3098, 29, 24)    /* PT_TX_PATTERN_SEL_LANE */
#define F_N5XC56GP5X4_RX_PAT_SEL        FIELD_DEFINE(0x3280, 29, 24)    /* PT_RX_PATTERN_SEL_LANE */
#define F_N5XC56GP5X4_TXD_SWAP          FIELD_DEFINE(0x3024, 18, 18)    /* TXD_MSB_LSB_SWAP_LANE */
#define F_N5XC56GP5X4_TXDATA_SWAP       FIELD_DEFINE(0x3024, 5, 5)      /* TXDATA_MSB_LSB_SWAP_LANE */
#define F_N5XC56GP5X4_RXD_SWAP          FIELD_DEFINE(0x3248, 27, 27)    /* RXD_MSB_LSB_SWAP_LANE */
#define F_N5XC56GP5X4_RXDATA_SWAP       FIELD_DEFINE(0x3248, 24, 24)    /* RXDATA_MSB_LSB_SWAP_LANE */
#define F_N5XC56GP5X4_RX_CNT_4732       FIELD_DEFINE(0x3290, 31, 16)    /* PT_RX_CNT_LANE[47:32] */
#define F_N5XC56GP5X4_RX_CNT_3100       FIELD_DEFINE(0x3294, 31, 0)     /* PT_RX_CNT_LANE[31:00] */
#define F_N5XC56GP5X4_RX_ERR_4732       FIELD_DEFINE(0x3298, 31, 16)    /* PT_RX_ERR_CNT_LANE[47:32] */
#define F_N5XC56GP5X4_RX_ERR_3100       FIELD_DEFINE(0x329C, 31, 0)     /* PT_RX_ERR_CNT_LANE[31:00] */
#define F_N5XC56GP5X4_TX_UP_7948        FIELD_DEFINE(0x309C, 31, 0)     /* PT_TX_USER_PATTERN_LANE[79:48] */
#define F_N5XC56GP5X4_TX_UP_4716        FIELD_DEFINE(0x30A0, 31, 0)     /* PT_TX_USER_PATTERN_LANE[47:16] */
#define F_N5XC56GP5X4_TX_UP_1500        FIELD_DEFINE(0x30A4, 31, 16)    /* PT_TX_USER_PATTERN_LANE[15:00] */
#define F_N5XC56GP5X4_RX_UP_7948        FIELD_DEFINE(0x3284, 31, 0)     /* PT_RX_USER_PATTERN_LANE[79:48] */
#define F_N5XC56GP5X4_RX_UP_4716        FIELD_DEFINE(0x3288, 31, 0)     /* PT_RX_USER_PATTERN_LANE[47:16] */
#define F_N5XC56GP5X4_RX_UP_1500        FIELD_DEFINE(0x328C, 31, 16)    /* PT_RX_USER_PATTERN_LANE[15:00] */

/* PHY Test */
#define F_N5XC56GP5X4_RST_FRAME_SYNC    FIELD_DEFINE(0x321C, 26, 26)    /* RST_FRAME_SYNC_DET_CLK_LANE */
#define F_N5XC56GP5X4_TX_EN             FIELD_DEFINE(0x3098, 31, 31)    /* PT_TX_EN_LANE */
#define F_N5XC56GP5X4_RX_EN             FIELD_DEFINE(0x3280, 23, 23)    /* PT_RX_EN_LANE */
#define F_N5XC56GP5X4_TRX_EN            FIELD_DEFINE(0x328C, 8, 8)      /* PT_TRX_EN_LANE */
#define F_N5XC56GP5X4_TX_RST            FIELD_DEFINE(0x3098, 5, 5)      /* PT_TX_RST_LANE */
#define F_N5XC56GP5X4_RX_RST            FIELD_DEFINE(0x328C, 7, 7)      /* PT_RX_RST_LANE */
#define F_N5XC56GP5X4_RX_LOCK           FIELD_DEFINE(0x328C, 0, 0)      /* PT_RX_LOCK_LANE */
#define F_N5XC56GP5X4_RX_PASS           FIELD_DEFINE(0x328C, 1, 1)      /* PT_RX_PASS_LANE */
#define F_N5XC56GP5X4_RX_CNT_RST        FIELD_DEFINE(0x3280, 21, 21)    /* PT_RX_CNT_RST_LANE */
#define F_N5XC56GP5X4_DFE_RATE          FIELD_DEFINE(0x4010, 9, 8)      /* DFE_RATE_MODE_LANE */
#define F_N5XC56GP5X4_DFE_UP_DIS        FIELD_DEFINE(0x5648, 25, 25)    /* DFE_UPDATE_DIS_LANE */
#define F_N5XC56GP5X4R2P0_DFE_UPDATEDIS FIELD_DEFINE(0x564C, 25, 25)    /* DFE_UPDATE_DIS_LANE */
#define F_N5XC56GP5X4_TRAIN_DONE        FIELD_DEFINE(0x608C, 0, 0)
#define F_N5XC56GP5X4_MCU_DEBUGF        FIELD_DEFINE(0x34F4, 31, 24)
#define F_N5XC56GP5X4_DFE_SAT_EN        FIELD_DEFINE(0x4040, 31, 30)

/* Temperature */
#define F_N5XC56GP5X4_TSEN_DATA         FIELD_DEFINE(0xA32C, 15, 0)

/* EOM */
#define F_N5XC56GP5X4_ESM_PATH_SEL      FIELD_DEFINE(0x6058, 16, 16)
#define F_N5XC56GP5X4_ESM_DFEADAPT      FIELD_DEFINE(0x6058, 13, 10)    /* ESM_DFE_ADAPT_SPLR_EN_LANE */
#define F_N5XC56GP5X4_ADAPT_EVEN        FIELD_DEFINE(0x6DE4, 8, 8)      /* ADAPT_EVEN_ENABLE_LANE */
#define F_N5XC56GP5X4_ADAPT_ODD         FIELD_DEFINE(0x6DE4, 9, 9)      /* ADAPT_ODD_ENABLE_LANE */
#define F_N5XC56GP5X4_ESM_EN            FIELD_DEFINE(0x6058, 18, 18)
#define F_N5XC56GP5X4_EOM_READY         FIELD_DEFINE(0x603C, 3, 3)
#define F_N5XC56GP5X4_ESM_LPNUM         FIELD_DEFINE(0x6078, 15, 0)
#define F_N5XC56GP5X4_ESM_PHASE         FIELD_DEFINE(0x6078, 26, 16)
#define F_N5XC56GP5X4_ESM_VOLTAGE       FIELD_DEFINE(0x603C, 15, 8)
#define F_N5XC56GP5X4_EOM_DFE_CALL      FIELD_DEFINE(0x603C, 4, 4)
#define F_N5XC56GP5X4_VC_T_P_3100       FIELD_DEFINE(0x4220, 31, 0)     /* EOM_VLD_CNT_TOP_P[31:00] */
#define F_N5XC56GP5X4_VC_T_P_3932       FIELD_DEFINE(0x4238, 23, 16)    /* EOM_VLD_CNT_TOP_P[39:32] */
#define F_N5XC56GP5X4_VC_T_N_3100       FIELD_DEFINE(0x422C, 31, 0)     /* EOM_VLD_CNT_TOP_N_LANE[31:00] */
#define F_N5XC56GP5X4_VC_T_N_3932       FIELD_DEFINE(0x423C, 23, 16)    /* EOM_VLD_CNT_TOP_N_LANE[39:32] */
#define F_N5XC56GP5X4_VC_M_P_3100       FIELD_DEFINE(0x4224, 31, 0)     /* EOM_VLD_CNT_MID_P_LANE[31:00] */
#define F_N5XC56GP5X4_VC_M_P_3932       FIELD_DEFINE(0x4238, 15, 8)     /* EOM_VLD_CNT_MID_P_LANE[39:32] */
#define F_N5XC56GP5X4_VC_M_N_3100       FIELD_DEFINE(0x4230, 31, 0)     /* EOM_VLD_CNT_MID_N_LANE[31:00] */
#define F_N5XC56GP5X4_VC_M_N_3932       FIELD_DEFINE(0x423C, 15, 8)     /* EOM_VLD_CNT_MID_N_LANE[39:32] */
#define F_N5XC56GP5X4_VC_B_P_3100       FIELD_DEFINE(0x4228, 31, 0)     /* EOM_VLD_CNT_BOT_P_LANE[31:00] */
#define F_N5XC56GP5X4_VC_B_P_3932       FIELD_DEFINE(0x4238, 7, 0)      /* EOM_VLD_CNT_BOT_P_LANE[39:32] */
#define F_N5XC56GP5X4_VC_B_N_3100       FIELD_DEFINE(0x4234, 31, 0)     /* EOM_VLD_CNT_BOT_N_LANE[31:00] */
#define F_N5XC56GP5X4_VC_B_N_3932       FIELD_DEFINE(0x423C, 7, 0)      /* EOM_VLD_CNT_BOT_N_LANE[39:32] */
#define F_N5XC56GP5X4_EOM_EC_T_P        FIELD_DEFINE(0x4200, 31, 0)     /* EOM_ERR_CNT_TOP_P_LANE */
#define F_N5XC56GP5X4_EOM_EC_T_N        FIELD_DEFINE(0x420C, 31, 0)     /* EOM_ERR_CNT_TOP_N_LANE */
#define F_N5XC56GP5X4_EOM_EC_M_P        FIELD_DEFINE(0x4204, 31, 0)     /* EOM_ERR_CNT_MID_P_LANE */
#define F_N5XC56GP5X4_EOM_EC_M_N        FIELD_DEFINE(0x4210, 31, 0)     /* EOM_ERR_CNT_MID_N_LANE */
#define F_N5XC56GP5X4_EOM_EC_B_P        FIELD_DEFINE(0x4208, 31, 0)     /* EOM_ERR_CNT_BOT_P_LANE */
#define F_N5XC56GP5X4_EOM_EC_B_N        FIELD_DEFINE(0x4214, 31, 0)     /* EOM_ERR_CNT_BOT_N_LANE */
#define F_N5XC56GP5X4_RXSPEED_DIV       FIELD_DEFINE(0x10E4, 4, 2)
#define F_N5XC56GP5X4_ANA_TX_HIZ_EN     FIELD_DEFINE(0x3004, 31, 31)
#define F_N5XC56GP5X4_PIN_PHY_GEN_TX_RD FIELD_DEFINE(0x5500, 14, 9)
#define F_N5XC56GP5X4R2P0_PHY_GEN_TX_RD FIELD_DEFINE(0x5500, 9, 0)      /* PIN_PHY_GEN_TX_RD_LANE */
#define F_N5XC56GP5X4_PIN_PHY_GEN_RX_RD FIELD_DEFINE(0x5600, 23, 18)
#define F_N5XC56GP5X4R2P0_PHY_GEN_RX_RD FIELD_DEFINE(0x5600, 25, 16)    /* PIN_PHY_GEN_RX_RD_LANE */

#ifdef N5XC56GP5X4_ISOLATION
/* PHY Isolate */
#define F_N5XC56GP5X4_FW_READY          FIELD_DEFINE(0xA424, 14, 14)
#define F_N5XC56GP5X4R2P0_FW_READY      FIELD_DEFINE(0xA428, 14, 14)
#define F_N5XC56GP5X4_MCU_INIT_DONE     FIELD_DEFINE(0xA200, 7, 7)
#define F_N5XC56GP5X4_BG_RDY            FIELD_DEFINE(0xA41C, 24, 24)
#define F_N5XC56GP5X4R2P0_BG_RDY        FIELD_DEFINE(0xA420, 24, 24)

/* RX Init */
#define F_N5XC56GP5X4_RX_INIT           FIELD_DEFINE(0x5630, 24, 24)
#define F_N5XC56GP5X4R2P0_RX_INIT       FIELD_DEFINE(0x5630, 4, 4)
#define F_N5XC56GP5X4_RX_INIT_DONE      FIELD_DEFINE(0x3200, 19, 19)

/* Power IV Ref */
#define F_N5XC56GP5X4_PU_IVREF          FIELD_DEFINE(0xA420, 2, 2)
#define F_N5XC56GP5X4R2P0_PU_IVREF      FIELD_DEFINE(0xA424, 2, 2)
#define F_N5XC56GP5X4_PU_IVREF_FM_REG   FIELD_DEFINE(0xA420, 1, 1)
#define F_N5XC56GP5X4R2P0_PU_IVREF_FM_R FIELD_DEFINE(0xA424, 1, 1)      /* PU_IVREF_FM_REG */

/* Power Up Transmitter/Receiver/PLL */
#define F_N5XC56GP5X4_PU_TX             FIELD_DEFINE(0x5530, 13, 13)
#define F_N5XC56GP5X4R2P0_PU_TX         FIELD_DEFINE(0x5534, 4, 4)
#define F_N5XC56GP5X4_ANA_PU_TX         FIELD_DEFINE(0x3000, 30, 30)
#define F_N5XC56GP5X4_ANA_PU_TX_FORCE   FIELD_DEFINE(0x3000, 31, 31)
#define F_N5XC56GP5X4_PU_RX             FIELD_DEFINE(0x5624, 8, 8)
#define F_N5XC56GP5X4R2P0_PU_RX         FIELD_DEFINE(0x5624, 6, 6)
#define F_N5XC56GP5X4_ANA_PU_RX         FIELD_DEFINE(0x3200, 30, 30)
#define F_N5XC56GP5X4_ANA_PU_RX_FORCE   FIELD_DEFINE(0x3200, 31, 31)
#define F_N5XC56GP5X4_PU_PLL            FIELD_DEFINE(0x5530, 15, 15)
#define F_N5XC56GP5X4R2P0_PU_PLL        FIELD_DEFINE(0x5534, 6, 6)

/* TX Output */
#define F_N5XC56GP5X4_TX_IDLE           FIELD_DEFINE(0x3014, 18, 18)

/* PHY Mode */
#define F_N5XC56GP5X4_PHY_MODE          FIELD_DEFINE(0xA420, 14, 12)
#define F_N5XC56GP5X4R2P0_PHY_MODE      FIELD_DEFINE(0xA424, 14, 12)
#define F_N5XC56GP5X4_PHY_MODE_RD       FIELD_DEFINE(0xA408, 6, 4)      /* PIN_PHY_MODE_RD */
#define F_N5XC56GP5X4R2P0_PHY_MODE_RD   FIELD_DEFINE(0xA40C, 30, 28)    /* PIN_PHY_MODE_RD */

/* Reference Frequency */
#define F_N5XC56GP5X4_REF_FREF_TX       FIELD_DEFINE(0x5538, 23, 19)    /* REF_FREF_SEL_TX_LANE */
#define F_N5XC56GP5X4R2P0_REF_FREF_TX   FIELD_DEFINE(0x553C, 23, 16)    /* REF_FREF_SEL_TX_LANE */
#define F_N5XC56GP5X4_REF_FREF_RX       FIELD_DEFINE(0x5634, 30, 26)    /* REF_FREF_SEL_RX_LANE */
#define F_N5XC56GP5X4R2P0_REF_FREF_RX   FIELD_DEFINE(0x5634, 7, 0)      /* REF_FREF_SEL_RX_LANE */
#define F_N5XC56GP5X4_REFCLK_SEL_TX     FIELD_DEFINE(0x5538, 17, 17)    /* ANA_PLL_TS_REFCLK_SEL_LANE */
#define F_N5XC56GP5X4_REFCLK_SEL_RX     FIELD_DEFINE(0x5634, 24, 24)    /* ANA_PLL_RS_REFCLK_SEL_LANE */

/* TX/RX Bitrate */
#define F_N5XC56GP5X4_PHY_GEN_TX        FIELD_DEFINE(0x5530, 22, 17)
#define F_N5XC56GP5X4R2P0_PHY_GEN_TX    FIELD_DEFINE(0x5534, 17, 8)
#define F_N5XC56GP5X4_PHY_GEN_RX        FIELD_DEFINE(0x5624, 15, 10)
#define F_N5XC56GP5X4R2P0_PHY_GEN_RX    FIELD_DEFINE(0x5624, 17, 8)

/* MCU Frequency */
#define F_N5XC56GP5X4_MCU_FREQ          FIELD_DEFINE(0xA41C, 15, 0)
#define F_N5XC56GP5X4R2P0_MCU_FREQ      FIELD_DEFINE(0xA420, 15, 0)

/* TRX Training */
#define F_N5XC56GP5X4_RX_TRAIN_ENA      FIELD_DEFINE(0x5630, 22, 22)    /* RX_TRAIN_ENABLE_LANE */
#define F_N5XC56GP5X4R2P0_RX_TRAIN_EN   FIELD_DEFINE(0x5630, 2, 2)      /* RX_TRAIN_ENABLE_LANE */
#define F_N5XC56GP5X4_RX_TRAIN_COM      FIELD_DEFINE(0x5020, 4, 4)      /* RX_TRAIN_COMPLETE_LANE */
#define F_N5XC56GP5X4_RX_TRAIN_FAI      FIELD_DEFINE(0x5020, 3, 3)      /* RX_TRAIN_FAILED_LANE */
#define F_N5XC56GP5X4_TX_TRAIN_ENA      FIELD_DEFINE(0x5630, 16, 16)    /* TX_TRAIN_ENABLE_LANE */
#define F_N5XC56GP5X4R2P0_TX_TRAIN_EN   FIELD_DEFINE(0x5634, 28, 28)    /* TX_TRAIN_ENABLE_LANE */
#define F_N5XC56GP5X4_TX_TRAIN_COM      FIELD_DEFINE(0x5020, 6, 6)      /* TX_TRAIN_COMPLETE_LANE */
#define F_N5XC56GP5X4_TX_TRAIN_FAI      FIELD_DEFINE(0x5020, 5, 5)      /* TX_TRAIN_FAILED_LANE */
#define F_N5XC56GP5X4_TX_TRAIN_ERROR    FIELD_DEFINE(0x5020, 2, 1)      /* TX_TRAIN_ERROR_LANE */

/* Squelch Detect */
#define F_N5XC56GP5X4_RX_SQ_OUT         FIELD_DEFINE(0x3270, 14, 14)    /* PIN_RX_SQ_OUT_LPF_RD_LANE */

/* AVDD Select */
#define F_N5XC56GP5X4_AVDD_SEL          FIELD_DEFINE(0xA41C, 28, 26)
#define F_N5XC56GP5X4R2P0_AVDD_SEL      FIELD_DEFINE(0xA420, 28, 26)

/* Speed Configuration */
#define F_N5XC56GP5X4_SPD_CFG           FIELD_DEFINE(0xA420, 7, 4)
#define F_N5XC56GP5X4R2P0_SPD_CFG       FIELD_DEFINE(0xA424, 7, 4)

/* PHY Test Pattern */
#define F_N5XC56GP5X4_TX_GRAY_EN        FIELD_DEFINE(0x3098, 6, 6)
#define F_N5XC56GP5X4_RX_GRAY_EN        FIELD_DEFINE(0x3280, 15, 15)
#define F_N5XC56GP5X4_TXDATA_PRECODE_EN FIELD_DEFINE(0x5538, 13, 13)    /* TXDATA_PRE_CODE_EN_LANE */
#define F_N5XC56GP5X4R2P0_TXDATA_PRE_EN FIELD_DEFINE(0x553C, 10, 10)    /* TXDATA_PRE_CODE_EN_LANE */
#define F_N5XC56GP5X4_RXDATA_PRECODE_EN FIELD_DEFINE(0x5644, 28, 28)    /* RXDATA_PRE_CODE_EN_LANE */
#define F_N5XC56GP5X4R2P0_RXDATA_PRE_EN FIELD_DEFINE(0x5648, 28, 28)    /* RXDATA_PRE_CODE_EN_LANE */

/* TX/RX Ready */
#define F_N5XC56GP5X4_PLL_READY_TX      FIELD_DEFINE(0x3000, 20, 20)
#define F_N5XC56GP5X4_PLL_READY_RX      FIELD_DEFINE(0x3200, 24, 24)

/* Reset Core TX RX */
#define F_N5XC56GP5X4_RESET_CORE_TX     FIELD_DEFINE(0x5538, 28, 28)
#define F_N5XC56GP5X4R2P0_RESET_CORE_TX FIELD_DEFINE(0x553C, 28, 28)
#define F_N5XC56GP5X4_RESET_CORE_RX     FIELD_DEFINE(0x5630, 0, 0)
#define F_N5XC56GP5X4R2P0_RESET_CORE_RX FIELD_DEFINE(0x5634, 11, 11)
#define F_N5XC56GP5X4_RESET_CORE_ACK_TX FIELD_DEFINE(0x3000, 21, 21)    /* RESET_CORE_ACK_TX_LANE */
#define F_N5XC56GP5X4_RESET_CORE_ACK_RX FIELD_DEFINE(0x321C, 2, 2)      /* RESET_CORE_ACK_RX_LANE */

/* MCU Command Interface */
#define F_N5XC56GP5X4_MCU_REMOTE_CMD    FIELD_DEFINE(0x5638, 31, 0)     /* MCU_REMOTE_COMMAND_LANE */
#define F_N5XC56GP5X4R2P0_MCU_RMTCMD    FIELD_DEFINE(0x563C, 31, 0)     /* MCU_REMOTE_COMMAND_LANE */
#define F_N5XC56GP5X4_MCU_REMOTE_CMD_FM FIELD_DEFINE(0x563C, 31, 31)    /* MCU_REMOTE_COMMAND_FM_REG_LANE */
#define F_N5XC56GP5X4R2P0_MCU_RMTCMD_FM FIELD_DEFINE(0x5640, 31, 31)    /* MCU_REMOTE_COMMAND_FM_REG_LANE */
#define F_N5XC56GP5X4_MCU_REMOTE_CMD_RD FIELD_DEFINE(0x5618, 31, 0)     /* PIN_MCU_REMOTE_COMMAND_RD_LANE */
#define F_N5XC56GP5X4_MCU_REMOTE_STA    FIELD_DEFINE(0x5640, 31, 0)     /* MCU_REMOTE_STATUS_LANE */
#define F_N5XC56GP5X4R2P0_MCU_RMTSTA    FIELD_DEFINE(0x5644, 31, 0)     /* MCU_REMOTE_STATUS_LANE */
#define F_N5XC56GP5X4_MCU_REMOTE_STA_FM FIELD_DEFINE(0x5644, 31, 31)    /* MCU_REMOTE_STATUS_FM_REG_LANE */
#define F_N5XC56GP5X4R2P0_MCU_RMTSTA_FM FIELD_DEFINE(0x5648, 31, 31)    /* MCU_REMOTE_STATUS_FM_REG_LANE */
#define F_N5XC56GP5X4_MCU_REMOTE_STA_RD FIELD_DEFINE(0x5620, 31, 0)     /* PIN_MCU_REMOTE_STATUS_RD_LANE */
#define F_N5XC56GP5X4_MCU_REMOTE_REQ    FIELD_DEFINE(0x563C, 30, 30)
#define F_N5XC56GP5X4R2P0_MCU_RMTREQ    FIELD_DEFINE(0x5640, 30, 30)    /* MCU_REMOTE_REQ_LANE */
#define F_N5XC56GP5X4_MCU_REMOTE_REQ_FM FIELD_DEFINE(0x563C, 29, 29)    /* MCU_REMOTE_REQ_FM_REG_LANE */
#define F_N5XC56GP5X4R2P0_MCU_RMTREQ_FM FIELD_DEFINE(0x5640, 29, 29)    /* MCU_REMOTE_REQ_FM_REG_LANE */
#define F_N5XC56GP5X4_MCU_REMOTE_REQ_RD FIELD_DEFINE(0x561C, 31, 31)    /* PIN_MCU_REMOTE_REQ_RD_LANE */
#define F_N5XC56GP5X4_MCU_LOCAL_ACK     FIELD_DEFINE(0x3530, 16, 16)
#define F_N5XC56GP5X4_MCU_LOCAL_STATUS  FIELD_DEFINE(0x3534, 31, 0)

#endif

#if C_LINKAGE
#if defined __cplusplus
}
#endif
#endif

#endif /* N5XC56GP5X4 */

#endif /* defined MCESD_N5XC56GP5X4_DEFS_H */