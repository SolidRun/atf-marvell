/*******************************************************************************
Copyright (c) 2014 Marvell.
If you received this File from Marvell and you have entered into a commercial
license agreement (a "Commercial License") with Marvell, the File is licensed
to you under the terms of the applicable Commercial License.
*******************************************************************************/

/********************************************************************
This file contains common types and defines across the Marvell
X7121 PHYs API driver (MZD).
********************************************************************/
#ifndef MZD_TYPES_H
#define MZD_TYPES_H

#include <stdint.h>
#include "mcesdApiTypes.h"

#ifdef MZD_MRVL_DEMO_BOARD      /* for demo board environment */
#define DB_TEST_ENVIRONMENT   1 /* set to 0 for host environment */
                                /* set to 1 to build sample code */
                                /* to interface to Marvell DB via SMI board */
#define MZD_DB_TEST_FLASHCODE 1
#else
#define DB_TEST_ENVIRONMENT   0
#define MZD_DB_TEST_FLASHCODE 0
#endif

#if DB_TEST_ENVIRONMENT
#define MZD_DEBUG                /* comment out all print code/data */
#define MZD_EXPORT_FUNC   
#define MZD_FW_MDIO_BURST_MODE  /* System dependent MDIO implementation mzdMdioBlockWrite() */
#endif

#ifdef MZD_FW_MDIO_BURST_MODE   /* System dependent MDIO implementation mzdMdioBlockWrite() */
#define MZD_MDIO_BLOCK_WRITE 1  /* Block write will speed up firmware download significantly
                                   by issuing multiple MDIO writes in a single call. 
                                  
                                   With MZD_MDIO_BLOCK_WRITE compiler option set at compiled time, 
                                   the firmware will download firmware in MDIO block write. 

                                   If MZD_MDIO_BLOCK_WRITE compiler option is not set, caller can use 
                                   the pDev->initOptionMask |= MZD_INIT_API_BLOCK_WRITE option to download 
                                   firmware in MDIO block write.  The default without MZD_MDIO_BLOCK_WRITE
                                   compiler option will download firmware with MDIO single write. 
                                   
                                   If pDev->mzdFuncWriteBlockMdio function is not passed-in, the 
                                   mzdHwXmdioBlockWrite must to be implemented when using firmware  
                                   MDIO block write. */

#endif

#ifdef MZD_DEBUG
#define MZD_DBG_BUFSIZE 1000
/* #define MZD_DEBUG_FUNC */ /* Definition to assign logging function pointer to mzdDebugLogFunc */
                             /* Refer to mzdSetDbgLogFunc for assigning the debug logging function */
                             /* to the global mzdDebugLogFunc function pointer */
#endif

#ifdef MZD_EXPORT_FUNC
#define MZD_FUNC __declspec(dllexport)
#else
#define MZD_FUNC
#endif

#ifndef MZD_MACSEC_SUPPORT
#define MZD_MACSEC_SUPPORT 0    /* By default MACSec is disabled.
                                   Set to 1 for MACSec support either in makefile or here.
                                   All MACSec source files in the MACSec folder
                                   are needed with this feature enabled. Otherwise,
                                   it will generate build errors. */
#endif

#define C_LINKAGE 1 /* set to 1 if C compile/linkage on C files is desired with C++ */

#if C_LINKAGE
#if defined __cplusplus
    extern "C" {
#endif
#endif

/* general */

#undef IN
#define IN
#undef OUT
#define OUT
#undef INOUT
#define INOUT

#define MZD_STATIC static

#ifndef NULL
#define NULL ((void*)0)
#endif

typedef int8_t     MZD_8;
typedef int16_t    MZD_16;
typedef int32_t    MZD_32;
typedef int        MZD_INT;
typedef int64_t    MZD_64;
typedef void       MZD_VOID;
typedef void*      MZD_PVOID;

typedef uint8_t        MZD_U8;
typedef uint16_t       MZD_U16;
typedef uint32_t       MZD_U32;
typedef unsigned int   MZD_UINT;
typedef int16_t        MZD_S16;
typedef uint64_t       MZD_U64;

typedef enum {
    MZD_FALSE = 0,
    MZD_TRUE  = 1
} MZD_BOOL;

#define MZD_ENABLE    1
#define MZD_DISABLE   0

#define MZD_OK        0    /* Operation succeeded */
#define MZD_FAIL      1    /* Operation failed    */
#define MZD_PENDING   2    /* Pending  */

#define MZD_CONVERT_BOOL_TO_UINT(boolVar,uintVar) {(boolVar) ? (uintVar=1) : (uintVar=0);}
#define MZD_CONVERT_UINT_TO_BOOL(uintVar,boolVar) {(uintVar) ? (boolVar=MZD_TRUE) : (boolVar=MZD_FALSE);}
#define MZD_GET_BOOL_AS_BIT(boolVar) ((boolVar) ? 1 : 0)
#define MZD_GET_BIT_AS_BOOL(uintVar) ((uintVar) ? MZD_TRUE : MZD_FALSE)

typedef MZD_U32 MZD_STATUS;

#define MZD_ALL_LANES       0xFF /* all lanes on a single port */

#define MZD_NUM_LANES       4 /* number of lanes */
#define MZD_MAX_PORTS       4 /* max number of ports */
#define MZD_NUM_MAC         2 /* number of MAC/MACsecs block per chip */
#define MZD_NUM_MAC_SLOTS   8 /* number of MAC/MACsecs slots */
#define MZD_NUM_PORTS_PER_MAC         2  /* 2 ports per MAC/MACSec */
#define MZD_NUM_PORTS_PER_SERDES_MUX  2  /* 2 ports per Serdes MUX Unit */

#define MZD_GET_PORT_IDX(mzdPDev, mzdMdioPort) (((mzdMdioPort - mzdPDev->mdioPort) >= MZD_MAX_PORTS) || \
                                                (mzdMdioPort < mzdPDev->mdioPort)) ? 0 : (mzdMdioPort - mzdPDev->mdioPort)

typedef enum _MZD_INTERFACE {
    MZD_HOST_MODE_IDX = 0,
    MZD_LINE_MODE_IDX = 1,
    MZD_NUM_INTERFACE = 2 /* number of interfaces; Host and Line */
} MZD_INTERFACE;

/* Defines for mzdInitDriver() and all API functions which need MZD_DEV */
typedef struct _MZD_DEV MZD_DEV;
typedef MZD_DEV *MZD_DEV_PTR;

typedef MZD_STATUS (*MZD_FUNC_WAIT)(
                        MZD_DEV_PTR dev,
                        MZD_UINT milliSeconds);

typedef MZD_STATUS (*MZD_FUNC_READ_MDIO)(
                        MZD_DEV_PTR pDev,
                        MZD_U16 mdioPort,
                        MZD_U16 mmd,
                        MZD_U16 reg,
                        MZD_U16* value);

typedef MZD_STATUS (*MZD_FUNC_WRITE_MDIO)(
                        MZD_DEV_PTR pDev,
                        MZD_U16 mdioPort,
                        MZD_U16 mmd,
                        MZD_U16 reg,
                        MZD_U16 value);

typedef MZD_STATUS (*MZD_FUNC_WRITE_BLOCK_MDIO)(
                        MZD_DEV_PTR pDev,
                        MZD_U16 mdioPort,
                        MZD_U16 mmd,
                        MZD_U16 reg,
                        MZD_U8  data[],
                        MZD_U32 dataSize);

/*
  X7121 Family Devices: 4-port with 4-lane on both host and line sides
                        some device may have less lane.
*/
typedef enum
{                     /* 31.F412[13:10] */
    MZD_DEV_X7121M,    /* b0000 */
    MZD_DEV_X6142M,    /* b0001 */
    MZD_DEV_ID_2,      /* b0010 */
    MZD_DEV_X7121,     /* b0011 */
    MZD_DEV_X7121P,    /* b0100 */
    MZD_DEV_X6142P,    /* b0101 */
    MZD_DEV_ID_6,      /* b0110 */
    MZD_DEV_X5243P,    /* b0111 */
    MZD_DEV_X9121M,    /* b1000 */
    MZD_DEV_X8181M,    /* b1001 */
    MZD_DEV_ID_10,     /* b1010 */
    MZD_DEV_ID_11,     /* b1011 */
    MZD_DEV_X9121P,    /* b1100 */
    MZD_DEV_X8181P,    /* b1101 */
    MZD_DEV_COUNT,     /* device count in MZD_DEVICE_ID */   
    MZD_DEV_UNKNOWN = 0xFF
} MZD_DEVICE_ID;

/* Features used in deviceFeatures */
typedef enum  
{                     
   MZD_DEV_OP_DEVICE, 
   MZD_DEV_OP_LINE_LANE_COUNT, 
   MZD_DEV_OP_HOST_LANE_COUNT, 
   MZD_DEV_OP_MACSEC, 
   MZD_DEV_OP_CL_SEC_TAG, 
   MZD_DEV_OP_HMUX, 
   MZD_DEV_OP_PTP, 
   MZD_DEV_OP_SERDES_MUX, 
   MZD_DEV_OP_FLASH_LOAD, 
   MZD_DEV_OP_MODES, 
   MZD_DEV_OP_COUNT
} MZD_DEV_OPERATIONS;

typedef enum
{
    MZD_REV_A0 = 0x0,
    MZD_REV_B0 = 0x1,
    MZD_REV_C0 = 0x2,
    MZD_REV_UNKNOWN = 0xFF
} MZD_DEVICE_REV;

#define MZD_X7121_PORT_COUNT  4

/* operational mode configuration for host and line */
/*****************************************************
Type
--------------------------------
P = PCS

Speed
--------------------------------
1 = 1 Gbps - single lane
2P5 = 2.5 Gbps - single lane
5 = 5 Gbps - single lane
10 = 10 Gbps - single lane
25 = 25 Gbps - 1 lane x 25 Gbps or 2 lanes x 12.5 Gbps
40 = 40 Gbps - 2 lanes x 20 Gbps or 4 lanes x 10 Gbps
50 = 50 Gbps - 1 lane x 50 Gbps or 2 lanes x 25 Gbps or 4 lanes x 12.5 Gbps
100 = 100 Gbps - 1 lane x 100 Gbps or 2 lanes x 50 Gbps or 4 lanes x 25 Gbps
200 = 200 Gbps - 2 lanes x 100 Gbps or 4 lanes x 50 Gbps or 4 lanes x 50 Gbps
400 = 400 Gbps - 4 lanes x 100 Gbps or 8 lanes x 50 Gbps

Training/AN/Coding
-------------------------------
X = BASE-X
S = SGMII System
P = SGMII PHY
L = NRZ BASE-R/X, no Auto-Negotiation
K = NRZ BASE-R/X, Backplane
C = NRZ BASE-R, Twinax
J = same as K except consortium
B = same as C except consortium
M = same as L for Non-Standard 50GBASE-R2, no Auto-Negotiation
U = PAM4 BASE-R, no Auto-Negotiation
Q = PAM4 BASE-R, Twinax/Backplane
Y = same as L for Non-Standard 25GBASE-R2, no Auto-Negotiation
Z = same as C for Non-Standard 25GBASE-R2, Auto-Negotiation
A = same as L for Non-Standard 25GBASE-R4, no Auto-Negotiation
G = same as C for Non-Standard 25GBASE-R4, Auto-Negotiation
H = same as K for Non-Standard 25GBASE-R4, Auto-Negotiation

FEC
--------------------------------
N = No FEC
F = KR-FEC (Firecode)
R = RS-FEC (528, 514)
P = RS-FEC (544, 514)

*****************************************************/
/* 
   NOTE: 
   Number of port(s) and lanes on device:
       X7121: 4-port with 4-lane on both host and line sides

   The MZD_OP_MODE shows a complete list of modes that will be supported 
   in future releases. Not all modes are supported yet. Modes that are 
   listed as "work-in-progress" are not supported yet.  

   Refers to the datasheet for more information on these modes. 
   
*/
/* opModeTable needs to match up with MZD_OP_MODE */
typedef enum
{
    MZD_OP_MODE_UNKNOWN,

    MZD_P1X,       /* 1 lane PCS mode */
    MZD_P1S,       /* 1 lane PCS mode */
    MZD_P1P,       /* 1 lane PCS mode */ 
    MZD_P1K,       /* 1 lane PCS mode */
                                             
    MZD_P2P5XN,    /* 1 lane PCS mode */
    MZD_P2P5XL,    /* 1 lane PCS mode */
    MZD_P2P5XK,    /* 1 lane PCS mode */
                                        
    MZD_P5L,       /* 1 lane PCS mode */
    MZD_P5K,       /* 1 lane PCS mode */
                                        
    MZD_P10LN,     /* 1 lane PCS mode */
    MZD_P10KN,     /* 1 lane PCS mode */
    MZD_P10KF,     /* 1 lane PCS mode */
    MZD_P10LF,     /* 1 lane PCS mode */
                                        
    MZD_P25YN,     /* 2 lane PCS mode */  /* index:14 */
    MZD_P25YF,     /* 2 lane PCS mode */
    MZD_P25ZN,     /* 2 lane PCS mode */
    MZD_P25ZF,     /* 2 lane PCS mode */
    MZD_P25LN,     /* 1 lane PCS mode */  
    MZD_P25LF,     /* 1 lane PCS mode */
    MZD_P25LR,     /* 1 lane PCS mode */
    MZD_P25CN,     /* 1 lane PCS mode */
    MZD_P25CF,     /* 1 lane PCS mode */
    MZD_P25CR,     /* 1 lane PCS mode */
    MZD_P25BN,     /* 1 lane PCS mode */
    MZD_P25BF,     /* 1 lane PCS mode */
    MZD_P25BR,     /* 1 lane PCS mode */
    MZD_P25JN,     /* 1 lane PCS mode */
    MZD_P25JF,     /* 1 lane PCS mode */
    MZD_P25JR,     /* 1 lane PCS mode */
                                             
    MZD_P40LN,     /* 4 lane PCS mode */  /* index:30 */
    MZD_P40CN,     /* 4 lane PCS mode */
    MZD_P40CF,     /* 4 lane PCS mode */
    MZD_P40KN,     /* 4 lane PCS mode */
    MZD_P40KF,     /* 4 lane PCS mode */
    MZD_P40LF,     /* 4 lane PCS mode */
    MZD_P40AN,     /* 2 lane PCS mode */
    MZD_P40AF,     /* 2 lane PCS mode */
    MZD_P40AR,     /* 2 lane PCS mode */
    MZD_P40BN,     /* 2 lane PCS mode */
    MZD_P40BF,     /* 2 lane PCS mode */
    MZD_P40BR,     /* 2 lane PCS mode */
    MZD_P40JN,     /* 2 lane PCS mode */
    MZD_P40JF,     /* 2 lane PCS mode */
    MZD_P40JR,     /* 2 lane PCS mode */
                                                             
    MZD_P50LN,     /* 4 lane PCS mode */  /* index:45 */
    MZD_P50CN,     /* 4 lane PCS mode */
    MZD_P50CF,     /* 4 lane PCS mode */
    MZD_P50KN,     /* 4 lane PCS mode */
    MZD_P50KF,     /* 4 lane PCS mode */
    MZD_P50LF,     /* 4 lane PCS mode */
    MZD_P50MN,     /* 2 lane PCS mode */
    MZD_P50MF,     /* 2 lane PCS mode */
    MZD_P50MR,     /* 2 lane PCS mode */
    MZD_P50BN,     /* 2 lane PCS mode */
    MZD_P50BF,     /* 2 lane PCS mode */
    MZD_P50BR,     /* 2 lane PCS mode */
    MZD_P50JN,     /* 2 lane PCS mode */
    MZD_P50JF,     /* 2 lane PCS mode */
    MZD_P50JR,     /* 2 lane PCS mode */
    MZD_P50UP,     /* 1 lane PCS mode */
    MZD_P50QP,     /* 1 lane PCS mode */
                                  
    MZD_P100LN,    /* 4 lane PCS mode */  /* index:62 */
    MZD_P100LR,    /* 4 lane PCS mode */
    MZD_P100CR,    /* 4 lane PCS mode */
    MZD_P100KR,    /* 4 lane PCS mode */
    MZD_P100KN,    /* 4 lane PCS mode */
    MZD_P100UP4,   /* 4 lane PCS mode */
    MZD_P100QP4,   /* 4 lane PCS mode */
    MZD_P100UP2,   /* 2 lane PCS mode */
    MZD_P100QP2,   /* 2 lane PCS mode */
    MZD_P100UP1,   /* 1 lane PCS mode */
    MZD_P100QP1,   /* 1 lane PCS mode */  /* work-in-progress */
    
    MZD_P200UP8,   /* 8 lane PCS mode */  /* index:73 */
    MZD_P200QP8,   /* 8 lane PCS mode */  /* work-in-progress */
    MZD_P200UP4,   /* 4 lane PCS mode */
    MZD_P200QP4,   /* 4 lane PCS mode */
    MZD_P200UP2,   /* 2 lane PCS mode */
    MZD_P200QP2,   /* 2 lane PCS mode */  /* work-in-progress */
                                
    MZD_P400UP8,   /* 8 lane PCS mode */  /* index:79 */
    MZD_P400QP8,   /* 8 lane PCS mode */
    MZD_P400UP4,   /* 4 lane PCS mode */
    MZD_P400QP4,   /* 4 lane PCS mode */  /* work-in-progress */


    /* Repeater mode starts here */
    MZD_R1,      /* 1 lane Repeater mode */  /* index:83 */
                 
    MZD_R2P5,    /* 1 lane Repeater mode */
                 
    MZD_R5L,     /* 1 lane Repeater mode */
                 
    MZD_R10L,    /* 1 lane Repeater mode */
    MZD_R10K,    /* 1 lane Repeater mode */  /* Line side only */
                 
    MZD_R25L,    /* 1 lane Repeater mode */
    MZD_R25C,    /* 1 lane Repeater mode */  /* Line side only */ 
                 
    MZD_R40L,    /* 4 lane Repeater mode */  
    MZD_R40C,    /* 4 lane Repeater mode */  /* Line side only */
                 
    MZD_R50L,    /* 2 lane Repeater mode */ 
    MZD_R50C,    /* 2 lane Repeater mode */
    MZD_R50G,    /* 2 lane AUI Repeater mode */
    MZD_R50H,    /* 2 lane AUI Repeater mode */  /* work-in-progress */
    MZD_R50U,    /* 1 lane Repeater mode */
    MZD_R50Q,    /* 1 lane Repeater mode */   /* Line side only */
                 
    MZD_R100L,   /* 4 lane Repeater mode */   /* index:98 */
    MZD_R100C,   /* 4 lane Repeater mode */   /* Line side only */
    MZD_R100G,   /* 4 lane AUI Repeater mode */
    MZD_R100H,   /* 4 lane AUI Repeater mode */  /* work-in-progress */
    MZD_R100U2,  /* 2 lane Repeater mode */
    MZD_R100Q2,  /* 2 lane Repeater mode */  /* Line side only */
    MZD_R100U1,  /* 1 lane Repeater mode */  /* for preview */
    MZD_R100Q1,  /* 1 lane Repeater mode */  /* work-in-progress */
                 
    MZD_R200L8,  /* 8 lane Repeater mode */
    MZD_R200K8,  /* 8 lane Repeater mode */  /* work-in-progress */
    MZD_R200U4,  /* 4 lane Repeater mode */
    MZD_R200Q4,  /* 4 lane Repeater mode */  /* Line side only */
    MZD_R200U2,  /* 2 lane Repeater mode */  /* work-in-progress */
    MZD_R200Q2,  /* 2 lane Repeater mode */  /* work-in-progress */
                 
    MZD_R400U8,  /* 8 lane Repeater mode */
    MZD_R400Q8,  /* 8 lane Repeater mode */  /* Line side only */
    MZD_R400U4,  /* 4 lane Repeater mode */  /* work-in-progress */
    MZD_R400Q4,  /* 4 lane Repeater mode */  /* work-in-progress */
                 
    MZD_R800U8,  /* 8 lane Repeater mode */  /* work-in-progress */
    MZD_R800Q8,  /* 8 lane Repeater mode */  /* work-in-progress */

    MZD_OP_MODE_COUNT
} MZD_OP_MODE;


/* Fields used in opModeTable */
typedef enum  
{                     
   MZD_OP_TABLE_OP_MODE, 
   MZD_OP_TABLE_SIGNAL, 
   MZD_OP_TABLE_LANE_COUNT, 
   MZD_OP_TABLE_FEC, 
   MZD_OP_TABLE_MODE_TYPE, 
   MZD_OP_TABLE_AN_TRAIN, 
   MZD_OP_TABLE_SPEED, 
   MZD_OP_TABLE_REG, 
   MZD_OP_TABLE_COUNT
} MZD_OP_TABLE;

/* Mode Reg 0xF00x.3:0 Lane Speed */
typedef enum  
{                     
   MZD_1GB   = 0,     /* 0000 = 1G   */ 
   MZD_2P5GB = 1,     /* 0001 = 2.5G */
   MZD_5GB   = 2,     /* 0010 = 5G   */
   MZD_10GB  = 3,     /* 0011 = 10G  */
   MZD_25GB  = 4,     /* 0100 = 25G  */
   MZD_40GB  = 5,     /* 0101 = 40G  */
   MZD_50GB  = 6,     /* 0110 = 50G  */
   MZD_100GB = 7,     /* 0111 = 100G */
   MZD_200GB = 8,     /* 1000 = 200G */
   MZD_400GB = 9,     /* 1001 = 400G */
   MZD_800GB = 10,    /* 1010 = 400G */
   MZD_SPEED_UNKNOWN
} MZD_SPEED;

/* Mode signaling type */
#define MZD_SIGNAL_NRZ   1
#define MZD_SIGNAL_PAM4  2

/* Lane count used for the operational mode */
#define MZD_1_LANE_MODE  1
#define MZD_2_LANE_MODE  2
#define MZD_4_LANE_MODE  4
#define MZD_8_LANE_MODE  8

/* Mode Reg 0xF00x.4 AP AutoNeg & KR Training */
#define MZD_AN_TRAIN_OFF  0x0000
#define MZD_AN_TRAIN_ON   0x0010

/* Mode Reg 0xF00x.5 Data Termination */
#define MZD_TRANSPARENT  0x0000
#define MZD_PCS          0x0020

/* Mode Reg 0xF00x.7:6 Forward Error Correction */
#define MZD_FEC_NONE    0x0000
#define MZD_FEC_KR      0x0040
#define MZD_FEC_RS_528  0x0080
#define MZD_FEC_RS_544  0x00C0

typedef struct _MZD_MODE_CONFIG
{
    MZD_OP_MODE    opMode;         /* mode operational */
    MZD_SPEED      speed;          /* mode operational speed */
    MZD_U16        opModeType;     /* PCS */
    MZD_U16        signalType;     /* NRZ or PAM-4 signal */
    MZD_U16        typeFEC;        /* CL-74/91/119/134/, Consortium */
    MZD_U16        autoNeg;        /* auto neg feature */
    MZD_U16        laneCount;      /* number of lane used for the mode */
    MZD_U16        reserved0;      /* reserved field */
    MZD_U16        reserved1;      /* reserved field */
    MZD_U16        reserved2;      /* reserved field */
} MZD_MODE_CONFIG, *PMZD_MODE_CONFIG;


typedef struct _MZD_MODE_OPTION_STRUCT
{
    MZD_U8 squelchTxDelay; /* overwrite MZD_MODE_SQUELCH_SERDES_TX_DELAY if squelchTxDelay > 0; 
                              each squelchTxDelay unit is x 100ms; squelchTxDelay = 10 is 1000ms */
    MZD_U8 buffer[127];    /* work-in-progress: Reserved for future advance settings */
}MZD_MODE_OPTION_STRUCT;

typedef struct _MZD_SERDES_CTRL
{
    MCESD_DEV  serdesDev;         /* Serdes device struct to control Serdes */
    MZD_U16    serdesMapPort;     /* the mapped port for Serdes operation, */
                                  /* MUST be set by calling mzdSetSerdesDevInfo() */
                                  /* before any COMPHY Serdes API calls */
    MZD_U16    serdesMapHostLine; /* the mapped host or line side for Serdes operation, */
} MZD_SERDES_CTRL, *PMZD_SERDES_CTRL;

typedef struct _MZD_MACSEC_CTRL
{
    MZD_U16        macsecPort;        /* the mapped port for MACSec operation, */
                                      /* MUST be set by calling mzdSetMacSecDevInfo() */
                                      /* before any COMPHY Serdes API calls */
    MZD_U16        macsecLane;        /* the mapped host or line side for Serdes operation, */

    MZD_U8         macsecDevMappedId;  /* MACSec device mapped global ID used in MACSec DDK */
    MZD_U8         macsecIngressDevId; /* Ingress device ID for 1st/2nd MDIO port use in MACSec DDK */
    MZD_U8         macsecEgressDevId;  /* Egress device ID for 1st/2nd MDIO port use in MACSec DDK */
                                       /* 3rd/4th MDIO ports use the next 2 device ID */
    MZD_BOOL       macsecInitialized;  /* MACSec initialized flag */
    MZD_BOOL       macsecLowClkRate[MZD_MAX_PORTS];
} MZD_MACSEC_CTRL, *PMZD_MACSEC_CTRL;

struct _MZD_DEV
{
    OUT MZD_DEVICE_ID   deviceId;      /* type of device and capabilities */
    OUT MZD_DEVICE_REV  chipRevision;  /* revision */
    IN  MZD_U16         mdioPort;      /* 1st port MDIO number */
    OUT MZD_U16         portCount;     /* 4 ports count for X7121 */

    OUT MZD_MODE_CONFIG hostConfig[MZD_MAX_PORTS][MZD_NUM_LANES]; /* host mode of operation, per lane depending on mode */
    OUT MZD_MODE_CONFIG lineConfig[MZD_MAX_PORTS][MZD_NUM_LANES]; /* line mode of operation, per lane depending on mode */

    OUT MZD_BOOL        devEnabled;    /* whether mzdInitDriver() called successfully */
    OUT MZD_BOOL        devFlash;      /* Set to MZD_TRUE if you have a flash device and want to use it before calling mzdInitDriver, MZD_FALSE otherwise */
                                       /* mzdInitDriver() will overwrite to MZD_TRUE if detects image is already running and was loaded from flash */

    IN  MZD_U32         initOptionMask; /* initialization options; see options available MZD_INIT_API_x definitions */
    INOUT MZD_U32       devInfo[MZD_MAX_PORTS]; /* operations, features, status tracking */

    IN MZD_FUNC_READ_MDIO   mzdFuncReadMdio;  /* passed in function for MDIO Read  */
    IN MZD_FUNC_WRITE_MDIO  mzdFuncWriteMdio; /* passed in function for MDIO Write */
    IN MZD_FUNC_WRITE_BLOCK_MDIO  mzdFuncWriteBlockMdio; /* optional passed in function for MDIO Write in block size */
    IN MZD_FUNC_WAIT        mzdFuncWait;      /* passed in function for Wait in milliseconds */

    IN MZD_SERDES_CTRL  serdesCntl; /* Device structure for Serdes API */
    IN MZD_MACSEC_CTRL  macsecCtrl; /* Device structure for MACSec control */

    IN MZD_PVOID        hostContext; /* user specific data for host to pass to the low layer */

};

/*****************************************************************************
 MZD_INIT_API_x definitions
 initOptionMask bit field used for API initialization with specific options
*****************************************************************************/
#define MZD_INIT_API_BLOCK_WRITE   (1<<0)

/*****************************************************************************
 devInfo bit info used in device structure for operations, features,
 status tracking, etc...
*****************************************************************************/
#define MZD_GEARBOX_MODE  (1<<0)  /* Gearbox mode */
#define MZD_USER_MODE     (1<<1)  /* Customized modes without checking
                                     valid Host-Line combination */
#define MZD_USE_APB_SEM   (1<<2)  /* Only on first port valid, other ports not used */
                                  /* If set, will use the APB semaphore, if cleared */
                                  /* will ignore the APB semaphore. */
/* NOT USED (1<<3)  */
/* ...              */
/* NOT USED (1<<31) */

/* MZD error status driver level 0 */
#define MZD_STATUS_LOAD_ERR                0x10 /*Loading firmware error */
#define MZD_STATUS_INVALID_PORT            0x11 /*Invalid port Number*/
#define MZD_STATUS_FAIL_GET_PHY_ADDR       0x12 /*Failed to get phy Address*/
#define MZD_STATUS_FAIL_READ_REG           0x13 /*Failed to read register*/
#define MZD_STATUS_FAIL_WRITE_REG          0x14 /*Failed to write register*/
#define MZD_STATUS_FAIL_GET_PAGE_ADDR      0x15 /*Failed to get page Address  */
#define MZD_STATUS_FAIL_WRITE_PAGE_NUM     0x16 /*Writing Page Number failed */
#define MZD_STATUS_FAIL_RESET              0x17 /*Reset bit is not cleared */
#define MZD_STATUS_NO_DEVICE_FOUND         0x18 /*Cannot find Marvell Device */
#define MZD_STATUS_UNKNOWN_HW_MOD          0x19 /*Unknown HW Mode */
#define MZD_STATUS_ERR_DEV_ID              0x1a /*Error device ID */
#define MZD_STATUS_ERR_VERSION             0x1b /*Error Version */
#define MZD_STATUS_ERR_DEV                 0x1c /*Invalid device structure */
#define MZD_STATUS_ERR_INIT                0x1d /*Driver init error */
#define MZD_STATUS_FIRMWARE_ERR            0x1e /*Other firmware errors */
#define MZD_STATUS_CHIP_RESET_FAIL         0x1f /*Chip reset failed */
#define MZD_STATUS_SERDES_INIT_ERR         0x20 /*Fail to init SERDES */
#define MZD_STATUS_FLASH_LOAD_FAIL         0x21 /*Flash failed load, either timed out or checksum error on serdes image */
#define MZD_STATUS_FLASH_CONFIG            0x22 /*devFlash not initialized properly */
#define MZD_STATUS_IMAGE_WARNING           0x23 /*Image load failed, but mzdInitDriver() loaded the device structure */
                                                /*No valid firmware is running. Need to retry mzdInitDriver() with a valid */
                                                /*image or call one of the download functions to download a valid firmware image*/

#define MZD_IO_ERROR                       0xFFFF /* Error reading or writing MDIO register */

#define MZD_MAX_MDIO_NUM 31 /* MDIO number 0 to 31  */
#define MZD_MAX_DEVICES ((MZD_MAX_MDIO_NUM+1)/MZD_MAX_PORTS) /* Maximum number of devices (e.g X7121) on one MDIO bus */
#define MZD_MAX_FIRST_PORT ((MZD_MAX_MDIO_NUM+1)-MZD_MAX_PORTS)  /* Max MDIO port address of first port on last device on */
                                                                 /* one MDIO bus */
#define MZD_MAX_SERDES_LANE 32

/* Chip,Port reset types */
typedef enum {
    MZD_SOFT_RESET = 1,
    MZD_HARD_RESET = 2
} MZD_RESET_TYPE;


#ifdef MZD_PY_DEBUG
#include "tstmzdTypes.h"
#endif

#if C_LINKAGE
#if defined __cplusplus
}
#endif
#endif

#endif /* MZD_TYPES_H */
