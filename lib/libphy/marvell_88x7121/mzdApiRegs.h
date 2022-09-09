/*******************************************************************************
Copyright (c) 2014 Marvell.
If you received this File from Marvell and you have entered into a commercial
license agreement (a "Commercial License") with Marvell, the File is licensed
to you under the terms of the applicable Commercial License.
*******************************************************************************/

/********************************************************************
This file contains functions global register definitions for the
registers in the Marvell X7121 PHYs.
********************************************************************/
#ifndef APIREGS_H
#define APIREGS_H
#if C_LINKAGE
#if defined __cplusplus
    extern "C" {
#endif
#endif

/* Marvell X7121 Device Number Definitions */
#define MZD_PMA_DEV    1
#define MZD_LINE_SIDE  3
#define MZD_HOST_SIDE  4
#define MZD_BOTH_SIDE  5
#define MZD_AUTONEG    7
#define MZD_PORT_REG   31
#define MZD_CHIP_REG   31

#define MZD_INVALID_REG             0xFFFF

/* Chip Level Common Registers */
#define MZD_GLOBAL_RESET            0xF404
#define MZD_GLOBAL_INTR_ENABLE1     0xF41E
#define MZD_GLOBAL_INTR_ENABLE2     0xF41F
#define MZD_GLOBAL_INTR_STAT1       0xF420
#define MZD_GLOBAL_INTR_CNTL        0xF421
#define MZD_GLOBAL_INTR_STAT2       0xF422

/* Port Level Common Registers */
#define MZD_PORT_PWD_RESET          0xF003
#define MZD_PORT_PCS_CNTL           0xF010

/* Data Path Control Registers */
#define MZD_DATAPATH_CNTL           0xF085
#define MZD_DISENGAGE_TYPE          0xF0A9

/* Mode setting register */
#define MZD_MODE_SELECTION          0xF000

/* Host and Line PCS controls */
#define MZD_PCS_200G_CNTL           0x4000
#define MZD_PCS_400G_CNTL           0x0000

/* 1G/2.5G registers  */
#define MZD_PCS_1G_CNTL             0x3000
#define MZD_PCS_1G_CNTL_LANE(laneX) MZD_PCS_1G_CNTL+(laneX*0x0200)
#define MZD_PCS_1G_STATUS           0x3001
#define MZD_PCS_1G_AN_ADV           0x3004
#define MZD_PCS_1G_AN_ADV_LANE(laneX) MZD_PCS_1G_AN_ADV+(laneX*0x0200)
#define MZD_PCS_1G_INTR_BASE        0xB001
#define MZD_PCS_1G_INTR_EN_LANE(laneX)      (MZD_PCS_1G_INTR_BASE+(laneX*0x0200))           /* 0xB001 */
#define MZD_PCS_1G_INTR_STAT_LANE(laneX)    (MZD_PCS_1G_INTR_BASE+0x0001+(laneX*0x0200))    /* 0xB002 */
#define MZD_PCS_1G_RT_STAT_LANE(laneX)      (MZD_PCS_1G_INTR_BASE+0x0002+(laneX*0x0200))    /* 0xB003 */

/* 25G registers, lane 0, lane offset is 0x200  */
/* also used for 10G and 5G  */
#define MZD_PCS_25G_CNTL            0x2000
#define MZD_PCS_25G_CNTL_LANE(laneX) MZD_PCS_25G_CNTL+(laneX*0x0200)
#define MZD_PCS_25G_STATUS          0x2001
#define MZD_PCS_25G_PCS_STATUS2(laneX) (0x2008 + (laneX*0x0200))
#define MZD_PCS_25G_INTR_BASE       0xA000
#define MZD_PCS_25G_INTR_EN_LANE(laneX)     (MZD_PCS_25G_INTR_BASE+(laneX*0x0200))          /* 0xA000 */
#define MZD_PCS_25G_INTR_STAT_LANE(laneX)   (MZD_PCS_25G_INTR_BASE+0x0001+(laneX*0x0200))   /* 0xA001 */
#define MZD_PCS_25G_RT_STAT_LANE(laneX)     (MZD_PCS_25G_INTR_BASE+0x0002+(laneX*0x0200))   /* 0xA002 */

/* 40G registers  */
#define MZD_PCS_40G_CNTL            0x1000
#define MZD_PCS_40G_CNTL_LANE(laneX) MZD_PCS_40G_CNTL+(laneX*0x0200)
#define MZD_PCS_40G_STATUS1         0x1001
#define MZD_PCS_40G_DEV_ID1         0x1002
#define MZD_PCS_40G_DEV_ID2         0x1003
#define MZD_PCS_40G_SPEED_ABILITY   0x1004
#define MZD_PCS_40G_PCS_STATUS2(laneX) (0x1008+(laneX*0x0200))

#define MZD_PCS_40G_INTR_BASE1      0x9001
#define MZD_PCS_40G_INTR_EN1_LANE(laneX)    (MZD_PCS_40G_INTR_BASE1+(laneX*0x0200))         /* 0x9001 */
#define MZD_PCS_40G_INTR_STAT1_LANE(laneX)  (MZD_PCS_40G_INTR_BASE1+0x0001+(laneX*0x0200))  /* 0x9002 */
#define MZD_PCS_40G_RT_STAT1_LANE(laneX)    (MZD_PCS_40G_INTR_BASE1+0x0002+(laneX*0x0200))  /* 0x9003 */
#define MZD_PCS_40G_INTR_BASE2      0x900D
#define MZD_PCS_40G_INTR_EN2_LANE(laneX)    (MZD_PCS_40G_INTR_BASE2+(laneX*0x0200))         /* 0x900D */
#define MZD_PCS_40G_INTR_STAT2_LANE(laneX)  (MZD_PCS_40G_INTR_BASE2+0x0001+(laneX*0x0200))  /* 0x900E */
#define MZD_PCS_40G_RT_STAT2_LANE(laneX)    (MZD_PCS_40G_INTR_BASE2+0x0002+(laneX*0x0200))  /* 0x900F */

/* 100G registers  */
#define MZD_PCS_100G_CNTL           0x0000
#define MZD_PCS_100G_CNTL_LANE(laneX) MZD_PCS_100G_CNTL+(laneX*0x0200)
#define MZD_PCS_100G_STATUS1        0x0001
#define MZD_PCS_100G_DEV_ID1        0x0002
#define MZD_PCS_100G_DEV_ID2        0x0003
#define MZD_PCS_100G_SPEED_ABILITY  0x0004
#define MZD_PCS_100G_PCS_STATUS2(laneX) (0x0008 +(laneX*0x0200))

#define MZD_PCS_100G_INTR_BASE1     0x8001
#define MZD_PCS_100G_INTR_EN1_LANE(laneX)   (MZD_PCS_100G_INTR_BASE1+(laneX*0x0200))         /* 0x8001 */
#define MZD_PCS_100G_INTR_STAT1_LANE(laneX) (MZD_PCS_100G_INTR_BASE1+0x0002+(laneX*0x0200))  /* 0x8003 */
#define MZD_PCS_100G_RT_STAT1_LANE(laneX)   (MZD_PCS_100G_INTR_BASE1+0x0004+(laneX*0x0200))  /* 0x8005 */
#define MZD_PCS_100G_INTR_BASE2     0x8002
#define MZD_PCS_100G_INTR_EN2_LANE(laneX)   (MZD_PCS_100G_INTR_BASE2+(laneX*0x0200))         /* 0x8002 */
#define MZD_PCS_100G_INTR_STAT2_LANE(laneX) (MZD_PCS_100G_INTR_BASE2+0x0002+(laneX*0x0200))  /* 0x8004 */
#define MZD_PCS_100G_RT_STAT2_LANE(laneX)   (MZD_PCS_100G_INTR_BASE2+0x0004+(laneX*0x0200))  /* 0x8006 */

/* 200G and 400G registers  */
#define MZD_PCS_200G_CNTL           0x4000
#define MZD_PCS_200G_STATUS1        0x4001
#define MZD_PCS_200G_DEV_ID1        0x4002
#define MZD_PCS_200G_DEV_ID2        0x4003
#define MZD_PCS_200G_SPEED_ABILITY  0x4004
#define MZD_PCS_200G_PCS_STATUS2(laneX) (0x4008 + (laneX*0x0200))

#define MZD_PCS_200G_INTR_BASE1     0xC001
#define MZD_PCS_200G_INTR_EN1_LANE(laneX)   (MZD_PCS_200G_INTR_BASE1+(laneX*0x0200))         /* 0xC001 */
#define MZD_PCS_200G_INTR_STAT1_LANE(laneX) (MZD_PCS_200G_INTR_BASE1+0x0002+(laneX*0x0200))  /* 0xC003 */
#define MZD_PCS_200G_RT_STAT1_LANE(laneX)   (MZD_PCS_200G_INTR_BASE1+0x0004+(laneX*0x0200))  /* 0xC005 */

#define MZD_PCS_200G_INTR_BASE2     0xC002
#define MZD_PCS_200G_INTR_EN2_LANE(laneX)   (MZD_PCS_200G_INTR_BASE2+(laneX*0x0200))         /* 0xC002 */
#define MZD_PCS_200G_INTR_STAT2_LANE(laneX) (MZD_PCS_200G_INTR_BASE2+0x0002+(laneX*0x0200))  /* 0xC004 */
#define MZD_PCS_200G_RT_STAT2_LANE(laneX)   (MZD_PCS_200G_INTR_BASE2+0x0004+(laneX*0x0200))  /* 0xC006 */

/* PCS Link up/down counter and Excess Link Error registers */
#define MZD_PCS_LINK_UP_DOWN_CTR(laneX)            (0xF800+(laneX*0x2))
#define MZD_PCS_EXCESSIVE_LINK_ERR_INTR(laneX)     (0xF801+(laneX*0x2))

#define MZD_PMA_100G_CNTL           0x0000
#define MZD_PMA_100G_CNTL_LANE(laneX)      (MZD_PMA_100G_CNTL+(laneX*0x2000))
#define MZD_PMA_40G_CNTL            0x2000
#define MZD_PMA_25G_CNTL            0x4000
#define MZD_PMA_1G_CNTL             0x6000

#define MZD_PMA_HOST_200G_CNTL      0x1000
#define MZD_PMA_HOST_100G_CNTL      0x1000
#define MZD_PMA_HOST_100G_CNTL_LANE(laneX) (MZD_PMA_HOST_100G_CNTL+(laneX*0x2000))
#define MZD_PMA_HOST_40G_CNTL       0x3000
#define MZD_PMA_HOST_25G_CNTL       0x5000
#define MZD_PMA_HOST_1G_CNTL        0x7000

/* Auto-neg registers  */
#define MZD_AUTONEG_CNTL_LINE        0x0000
#define MZD_AUTONEG_STATUS_LINE      0x0001
#define MZD_AUTONEG_ADV1_LINE        0x0010
#define MZD_AUTONEG_ADV2_LINE        0x0011
#define MZD_AUTONEG_ADV3_LINE        0x0012
#define MZD_AUTONEG_LP_ABILITY_LINE  0x0013
#define MZD_AUTONEG_CNTL_HOST        0x1000
#define MZD_AUTONEG_STATUS_HOST      0x1001
#define MZD_AUTONEG_ADV1_HOST        0x1010
#define MZD_AUTONEG_ADV2_HOST        0x1011
#define MZD_AUTONEG_ADV3_HOST        0x1012
#define MZD_AUTONEG_LP_ABILITY_HOST  0x1013
#define MZD_AUTONEG_ETH_STATUS_LINE  0x0030
#define MZD_AUTONEG_ETH_STATUS_HOST  0x1030
#define MZD_AUTONEG_CTRL_REG_LINE    0x8000
#define MZD_AUTONEG_LANE_CTRL18_LINE 0x8012
#define MZD_AUTONEG_LANE_CTRL20_LINE 0x8014
#define MZD_AUTONEG_LANE_CTRL21_LINE 0x8015
#define MZD_AP_AUTONEG_CNTL2_LINE(laneX)         (MZD_AUTONEG_CTRL_REG_LINE+0x0002+(laneX*0x0200))         /* 0x8002 */
#define MZD_AP_AUTONEG_CNTL13_LINE(laneX)        (MZD_AUTONEG_CTRL_REG_LINE+0x000D+(laneX*0x0200))         /* 0x800D */
#define MZD_AP_AUTONEG_CNTL14_LINE(laneX)        (MZD_AUTONEG_CTRL_REG_LINE+(0x000E)+(laneX*0x0200))       /* 0x800E */
#define MZD_AUTONEG_CTRL_REG_HOST    0x9000
#define MZD_AUTONEG_LANE_CTRL18_HOST 0x9012
#define MZD_AUTONEG_LANE_CTRL20_HOST 0x9014
#define MZD_AUTONEG_LANE_CTRL21_HOST 0x9015
#define MZD_AP_AUTONEG_CNTL2_HOST(laneX)         (MZD_AUTONEG_CTRL_REG_HOST+0x0002+(laneX*0x0200))         /* 0x9002 */
#define MZD_AP_AUTONEG_CNTL13_HOST(laneX)        (MZD_AUTONEG_CTRL_REG_HOST+0x000D+(laneX*0x0200))         /* 0x900D */
#define MZD_AP_AUTONEG_CNTL14_HOST(laneX)        (MZD_AUTONEG_CTRL_REG_HOST+(0x000E)+(laneX*0x0200))       /* 0x900E */

/* Packet Generator registers */
#define MZD_PKT_GEN_CONTROL1        0x8100
#define MZD_PKT_GEN_CONTROL2        0x8101
#define MZD_PKT_GEN_PAYLOAD1        0x8102
#define MZD_PKT_GEN_PAYLOAD2        0x8103
#define MZD_PKT_GEN_LENGTH          0x8106
#define MZD_PKT_GEN_BURSTSEQ        0x8107
#define MZD_PKT_GEN_IPG             0x8108
#define MZD_PKT_GEN_TXPKTCTR1       0x810B
#define MZD_PKT_GEN_TXPKTCTR2       0x810C
#define MZD_PKT_GEN_TXPKTCTR3       0x810D
#define MZD_PKT_GEN_TXBYTCTR1       0x810E
#define MZD_PKT_GEN_TXBYTCTR2       0x810F
#define MZD_PKT_GEN_TXBYTCTR3       0x8110
#define MZD_PKT_GEN_RXPKTCTR1       0x8111
#define MZD_PKT_GEN_RXPKTCTR2       0x8112
#define MZD_PKT_GEN_RXPKTCTR3       0x8113
#define MZD_PKT_GEN_RXBYTCTR1       0x8114
#define MZD_PKT_GEN_RXBYTCTR2       0x8115
#define MZD_PKT_GEN_RXBYTCTR3       0x8116
#define MZD_PKT_GEN_ERRPKTCTR1      0x8117
#define MZD_PKT_GEN_ERRPKTCTR2      0x8118
#define MZD_PKT_GEN_ERRPKTCTR3      0x8119

/* PRBS */
/* Side Lane 0 Registers, other lanes are offset 0x10 */
#define MZD_PRBS_CONTROL            0xF200
#define MZD_PRBS_SYM_TXCTR1         0xF201
#define MZD_PRBS_SYM_TXCTR2         0xF202
#define MZD_PRBS_SYM_TXCTR3         0xF203
#define MZD_PRBS_SYM_RXCTR1         0xF204
#define MZD_PRBS_SYM_RXCTR2         0xF205
#define MZD_PRBS_SYM_RXCTR3         0xF206
#define MZD_PRBS_SYM_ERRCTR1        0xF207
#define MZD_PRBS_SYM_ERRCTR2        0xF208
#define MZD_PRBS_SYM_ERRCTR3        0xF209
#define MZD_PRBS0_TEST_PATTA        0xF20A
#define MZD_PRBS0_TEST_PATTB        0xF20B

#define MZD_IEEE_LINE_PRBS_CONTROL   0x05DD
#define MZD_IEEE_HOST_PRBS_CONTROL   0x15DD

/* RS-FEC Registers */
#define MZD_RSFEC_CNTL(lineX, laneX) ((lineX == MZD_LINE_SIDE) ? (0x00C8+laneX*0x2000) : (0x10C8+laneX*0x2000))
#define MZD_RSFEC_STAT(lineX, laneX) ((lineX == MZD_LINE_SIDE) ? (0x00C9+laneX*0x2000) : (0x10C9+laneX*0x2000))
#define MZD_RSFEC_CORR_CW_LOW(lineX, laneX) ((lineX == MZD_LINE_SIDE) ? (0x00CA+laneX*0x2000) : (0x10CA+laneX*0x2000))
#define MZD_RSFEC_UNCORR_CW_LOW(lineX, laneX) ((lineX == MZD_LINE_SIDE) ? (0x00CC+laneX*0x2000) : (0x10CC+laneX*0x2000))
#define MZD_RSFEC_LANE_MAP(lineX, laneX) ((lineX == MZD_LINE_SIDE) ? ((0x00CE)+laneX*0x2000) : ((0x10CE)+laneX*0x2000)) /* this is the PMA lane mapping register */
#define MZD_RSFEC_SYM_ERR_CTR_LOW(lineX, laneX, pcslaneX) ((lineX == MZD_LINE_SIDE) ? (0x00D2+laneX*0x2000+pcslaneX*2) : (0x10D2+laneX*0x2000+pcslaneX*2))
#define MZD_RSFEC_PCS_ALIGN_STAT1(lineX, laneX) ((lineX == MZD_LINE_SIDE) ? (0x0118+laneX*0x2000) : (0x1118+laneX*0x2000))
#define MZD_RSFEC_PCS_ALIGN_STAT2(lineX, laneX) ((lineX == MZD_LINE_SIDE) ? (0x0119+laneX*0x2000) : (0x1119+laneX*0x2000))
#define MZD_RSFEC_PCS_ALIGN_STAT3(lineX, laneX) ((lineX == MZD_LINE_SIDE) ? (0x011A+laneX*0x2000) : (0x111A+laneX*0x2000))
#define MZD_RSFEC_PCS_ALIGN_STAT4(lineX, laneX) ((lineX == MZD_LINE_SIDE) ? (0x011B+laneX*0x2000) : (0x111B+laneX*0x2000))

/* These are TX and not very useful. Always return 0 or static count 0...10 */
#define MZD_RSFEC_BIP_ERR_CTR(lineX, laneX, pcslaneX) ((lineX == MZD_LINE_SIDE) ? (0x00E6+laneX*0x2000+pcslaneX*1) : (0x10E6+laneX*0x2000+pcslaneX*1))
#define MZD_RSFEC_PCS_LN_MAP(lineX, laneX, ifX) ((lineX == MZD_LINE_SIDE) ? (0x00FA+laneX*0x2000+ifX*1) : (0x10FA+laneX*0x2000+ifX*1))

/* 40G and 50G PCS RX Registers */
#define MZD_40G50G_BIP_ERR_CTR(laneX, pcslaneX) (0x10C8 + 0x200 * laneX + pcslaneX) /* range for pcslaneX is 0...3 */
#define MZD_40G50G_PCS_LN_MAP(laneX, pcslaneX)  (0x1190 + 0x200 * laneX + pcslaneX) /* range for laneX is 0...3 */

/* 100G PCS RX Registers */
#define MZD_100G_BIP_ERR_CTR(laneX, pcslaneX) (0x00C8 + 0x200 * laneX + pcslaneX) /* range for pcslaneX is 0...19 */
#define MZD_100G_PCS_LN_MAP(laneX, pcslaneX)  (0x0190 + 0x200 * laneX + pcslaneX) /* range for laneX is 0 or 2*/

/* 200G/400G RS-FEC Registers */
#define MZD_200G_FEC_RX_LINK_STATUS            0x4032
#define MZD_200G_FEC_RX_LINK_STATUS_LANE(laneX) (MZD_200G_FEC_RX_LINK_STATUS + laneX*0x200)
#define MZD_200G_FEC_LANE_ALIGN                0x4034
#define MZD_200G_FEC_LANE_ALIGN_LANE(laneX)    (MZD_200G_FEC_LANE_ALIGN + laneX*0x200)
#define MZD_400G_FEC_LANE_ALIGN                0x4035
#define MZD_200G_FEC_DEG_SER_CTL_LANE(laneX)   (0x4320 + laneX*0x200)
#define MZD_200G_FEC_DEG_SER_LANE(laneX)       (0x4321 + laneX*0x200)
#define MZD_200G_FEC_LANE_MAP(feclaneX,laneX)  (0x4190+feclaneX + laneX*0x200)
#define MZD_200G_FEC_CORR_CW_LOW               0x4322
#define MZD_200G_FEC_CORR_CW_LOW_LANE(laneX)   (MZD_200G_FEC_CORR_CW_LOW + laneX*0x200)
#define MZD_200G_FEC_UNCORR_CW_LOW             0x4324
#define MZD_200G_FEC_UNCORR_CW_LOW_LANE(laneX) (MZD_200G_FEC_UNCORR_CW_LOW + laneX*0x200)
#define MZD_200G_FEC_SYM_ERR_CTR_LOW_LANE(feclaneX,laneX) (0x4258+2*feclaneX + laneX*0x200)
#define MZD_200G_FEC_DEGSER_ACT_LOW_LANE(laneX)  (0x4326+ laneX*0x200)
#define MZD_200G_FEC_DEGSER_DEACT_LOW_LANE(laneX)(0x4328+ laneX*0x200)
#define MZD_200G_FEC_DEGSER_INT_LOW_LANE(laneX)  (0x432A + laneX*0x200)

/* KR-FEC Registers */
#define MZD_KRFEC_STAT(lineX, laneX) ((lineX == MZD_LINE_SIDE) ? (0x00AA+laneX*0x2000) : (0x10AA+laneX*0x2000))
#define MZD_KRFEC_CNTL(lineX, laneX) ((lineX == MZD_LINE_SIDE) ? (0x00AB+laneX*0x2000) : (0x10AB+laneX*0x2000))
#define MZD_KRFEC_CORR_BLK_LOW(lineX, laneX) ((lineX == MZD_LINE_SIDE) ? (0x00AC+laneX*0x2000) : (0x10AC+laneX*0x2000))
#define MZD_KRFEC_UNCORR_BLK_LOW(lineX, laneX) ((lineX == MZD_LINE_SIDE) ? ((0x00AE)+laneX*0x2000) : ((0x10AE)+laneX*0x2000))

/* RS-FEC special counters */
/* The following register enables both the FEC special counters (1.C917...1.C9C7) as well as the BER counters (1.C907...1.C916) */
/* #define RS_BER_COUNTER_CONTROL_REGISTER_SIDE(lineX) ((lineX == MZD_LINE_SIDE) ? (0xC823) : (0xD823)) */
/* The following register enables only the FEC special counters (1.C917...1.C9C7). To disable the FEC special counters */
/* you have to disable both. */
#define RS_BERCOUNTER_CONTROL_REGISTER_0_SIDE(lineX) ((lineX == MZD_LINE_SIDE) ? (0xC822) : (0xD822))
#define RS_BERCOUNTER_CONTROL_REGISTER_1_SIDE(lineX) ((lineX == MZD_LINE_SIDE) ? (0xC917) : (0xD917))
#define RS_LANE0_UNCORRECTABLE_CW_COUNTER0(lineX,laneX) ((lineX == MZD_LINE_SIDE) ? (0xC935+laneX*40) : (0xD935+laneX*40))
#define RS_LANE0_CORRECTED_CW_COUNTER0(lineX,laneX) ((lineX == MZD_LINE_SIDE) ? (0xC937+laneX*40) : (0xD937+laneX*40))
#define RS_LANE0_CODEWORD_COUNTER0(lineX,laneX) ((lineX == MZD_LINE_SIDE) ? (0xC939+laneX*40) : (0xD939+laneX*40))
#define RS_LANE0_BURST_2_SYMBOL_ERROR_COUNTER0(lineX,laneX)((lineX == MZD_LINE_SIDE) ? (0xC918+laneX*40) : (0xD918+laneX*40))
#define RS_LANE0_SYMBOL_ERROR_COUNTER0(lineX,laneX)((lineX == MZD_LINE_SIDE) ? ((0xC91E)+laneX*40) : ((0xD91E)+laneX*40))

/* GPIO/LED/RCLK Control Registers */
#define MZD_GPIO6_CNTL                           0xF42C
#define MZD_LED6_CNTL                            0xF42D
#define MZD_GPIO7_CNTL                           0xF42E
#define MZD_LED7_CNTL                            0xF42F
#define MZD_GPIO4_CNTL                           0xF430
#define MZD_LED4_CNTL                            0xF431
#define MZD_GPIO5_CNTL                           0xF432
#define MZD_LED5_CNTL                            0xF433
#define MZD_LED_MIXING_CNTL1                     0xF434
#define MZD_LED_TIMER_CNTL                       0xF435
#define MZD_IO_OPEN_DRAIN_CNTL                   0xF436
#define MZD_GPIO0_CNTL                           0xF437
#define MZD_LED0_CNTL                            0xF438
#define MZD_GPIO1_CNTL                           0xF439
#define MZD_LED1_CNTL                            0xF43A
#define MZD_GPIO2_CNTL                           0xF43B
#define MZD_LED2_CNTL                            0xF43C
#define MZD_GPIO3_CNTL                           0xF43D
#define MZD_LED3_CNTL                            0xF43E
#define MZD_LED_MIXING_CNTL2                     0xF43F

#define MZD_RCLK_OUTPUT_CNTL_BASE                0xF440     /* base for 0xF440 - 0xF45F */

#define MZD_CHIP_RCVCLK_0_1_CNTL                 0xF460
#define MZD_CHIP_RCVCLK_2_3_CNTL                 0xF461
#define MZD_CHIP_RCVCLK_4_5_CNTL                 0xF462
#define MZD_CHIP_RCVCLK_6_7_CNTL                 0xF463
#define MZD_CHIP_RCVCLK_8_CNTL                   0xF464

/* MACSec Registers */
#define MZD_MAC_MACSEC_ENABLE        0xF01A

/* Serdes MUX registers */
#define MZD_SERDES_MUX_CNTL0                     0xF021
#define MZD_SERDES_MUX_CNTL1                     0xF022
#define MZD_SERDES_MUX_NUNIT_BASE                0xF4D0
#define MZD_SERDES_MUX_MUNIT_BASE                0xF4D4

#if C_LINKAGE
#if defined __cplusplus
}
#endif
#endif

#endif

