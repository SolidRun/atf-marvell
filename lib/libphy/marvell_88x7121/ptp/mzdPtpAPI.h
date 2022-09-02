/*******************************************************************************
Copyright (C) 2014 - 2020, Marvell International Ltd. and its affiliates
If you received this File from Marvell and you have entered into a commercial
license agreement (a "Commercial License") with Marvell, the File is licensed
to you under the terms of the applicable Commercial License.
*******************************************************************************/

/********************************************************************
This file contains function prototypes for PTP module for the Marvell
X7121 PHY.
********************************************************************/
#ifndef MZD_PTP_API_H
#define MZD_PTP_API_H
#if C_LINKAGE
#if defined __cplusplus
    extern "C" {
#endif
#endif

#define PTP_API_MAJOR_VERSION 3
#define PTP_API_MINOR_VERSION 5
#define PTP_API_BUILD_ID 0

typedef struct _MZD_PTP_EGRESS_TSQ
{
    MZD_U32     timestamp;             /* PTP CTSU TSQ Timestamp  */
    MZD_U8      todUpdate;
    MZD_U8      taiSelect;
    MZD_U16     queueEntryID;
    MZD_BOOL    valid;
} MZD_PTP_EGRESS_TSQ;

typedef MZD_PTP_EGRESS_TSQ *MZD_PTP_EGRESS_TSQ_PTR;

typedef struct _MZD_PTP_EGRESS_MAC_TSQ
{
    MZD_U32    timestamp;             /* PTP MAC TSQ Timestamp  */
    MZD_U16    seqId;
    MZD_U8     domain;
    MZD_U8     mssageType;
    MZD_U8     taiSelect;
    MZD_U8     todUpdate;
    MZD_BOOL   valid;
} MZD_PTP_EGRESS_MAC_TSQ;

typedef MZD_PTP_EGRESS_MAC_TSQ *MZD_PTP_EGRESS_MAC_TSQ_PTR;

typedef struct _MZD_PTP_INGRESS_TSQ
{
    MZD_U32    timestamp;             /* PTP Parser TSQ Timestamp  */
    MZD_U16    seqId;
    MZD_U8     domain;
    MZD_U8     mssageType;
    MZD_U8     taiSelect;
    MZD_U8     todUpdate;
    MZD_BOOL   valid;
} MZD_PTP_INGRESS_TSQ;

typedef MZD_PTP_INGRESS_TSQ *MZD_PTP_INGRESS_TSQ_PTR;

typedef enum
{
    MZD_PTP_ETHERTYPE = 0,
    MZD_PTP_IPV4 = 1,
    MZD_PTP_IPV6 = 2,
    MZD_PTP_IPV4_MPLS = 3,
    MZD_PTP_IPV6_MPLS = 4,
    MZD_PTP_ETH_PW_MPLS = 5,
    MZD_PTP_IPV4_PW_MPLS = 6,
    MZD_PTP_IPV6_PW_MPLS = 7
} MZD_PACKET_TYPE;

typedef enum
{
    MZD_PTP_BYPASS_MACSEC = 0,
    MZD_PTP_WITH_MACSEC = 1,
    MZD_PTP_CLEAR_MODE = 2
} MZD_PTP_MACSEC_STATUS;


typedef struct _MZD_EGR_PIPE_DELAY_OP
{
    MZD_BOOL    pipeDelayAdd;
    MZD_BOOL    tsPCHInsertion;
    MZD_BOOL    tsAMResilience;
    MZD_BOOL    tsFuturistic;
    MZD_BOOL    tsCorrection;
} MZD_EGR_PIPE_DELAY_OP;

typedef MZD_EGR_PIPE_DELAY_OP *MZD_EGR_PIPE_DELAY_OP_PTR;

/******************************************************************************
MZD_FUNC MZD_VOID mzdPtpGetAPIVersion
(
    OUT MZD_U8 *major,
    OUT MZD_U8 *minor,
    OUT MZD_U8 *buildID
);

Inputs:
    None

Outputs:
    major - PTP API major version
    minor - PTP API minor version
    buildID - PTP API build id

Returns:
    MZD_VOID

Description:
    This function is used to read PTP version

Side effects:
    None

Notes/Warnings:
    None

******************************************************************************/
MZD_FUNC MZD_VOID mzdPtpGetAPIVersion
(
    OUT MZD_U8 *major,
    OUT MZD_U8 *minor,
    OUT MZD_U8 *buildID
);

/******************************************************************************
MZD_STATUS mzdPtpInit
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort
);

Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address 0...31 of mdioPort to be configured

Outputs:
    None

Returns:
    MZD_STATUS

Description:
    This function writes to init MACSec devices and clear ptp bypass bit

Side effects:
    None

Notes/Warnings:
    None

******************************************************************************/
MZD_FUNC MZD_STATUS mzdPtpInit
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort
);

/******************************************************************************
MZD_STATUS mzdPtpDisable
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_BOOL isEgress
);

Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address 0...31 of mdioPort to be configured
    laneOffset (0 ~ 3):
        400G
            MZD_P400UP8     :    0
            MZD_P400QP8     :    0
        200G
            MZD_P200UP4     :    0
            MZD_P200QP4     :    0
        100G
            MZD_P100LN      :    0
            MZD_P100LR      :    0
            MZD_P100CR      :    0
            MZD_P100UP      :    0 2
            MZD_P100QP      :    0 2
        50G
            MZD_P50BN       :    0 2
            MZD_P50BF       :    0 2
            MZD_P50BR       :    0 2
            MZD_P50JN       :    0 2
            MZD_P50JF       :    0 2
            MZD_P50JR       :    0 2
            MZD_P50UP       :    0 - 3
            MZD_P50QP       :    0 - 3
        40G
            MZD_P40LN       :    0
            MZD_P40CN       :    0
            MZD_P40CF       :    0
    
            MZD_P40LN       :    0
            MZD_P40KN       :    0
            MZD_P40KF       :    0
        25G
            MZD_P25LR       :    0 - 3
            MZD_P25CR       :    0 - 3
            MZD_P25CF       :    0 - 3
            MZD_P25CN       :    0 - 3
            MZD_P25BR       :    0 - 3
            MZD_P25BF       :    0 - 3
            MZD_P25BN       :    0 - 3
            MZD_P25JR       :    0 - 3
            MZD_P25JF       :    0 - 3
            MZD_P25JN       :    0 - 3
        10G
            MZD_P10LN       :    0 - 3
            MZD_P10KN       :    0 - 3
            MZD_P10KF       :    0 - 3
        5G
            MZD_P5L         :    0 - 3 
            MZD_P5K         :    0 - 3 
        2.5G
            MZD_P2_5XN      :    0 - 3 
            MZD_P2_5XL      :    0 - 3 
            MZD_P2_5XK      :    0 - 3 
        1G
            MZD_P1X         :    0 - 3
            MZD_P1S         :    0 - 3
            MZD_P1P         :    0 - 3
        100M                :    0 - 3
        10M                 :    0 - 3

    isEgress:
        MZD_TRUE - Egress
        MZD_FALSE - Ingress

Outputs:
    None

Returns:
    MZD_STATUS

Description:
    This function is used to disable ptp function

Side effects:
    None

Notes/Warnings:
    Refer to the datasheet for the number of lane used in the mode. For 200G, only 
    lane offset (0 2) and mdio port (0 1 ... 31) should be used when calling this API. For 400G, only 
    lane offset 0 and mdio port (0 2 4 ...) should be used.

******************************************************************************/
MZD_FUNC MZD_STATUS mzdPtpDisable
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_BOOL isEgress
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdPtpDisableAllPacketType
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_BOOL isEgress
);

Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address 0...31 of mdioPort to be configured
    laneOffset - lane number 0-3
    isEgress:
        MZD_TRUE - Egress
        MZD_FALSE - Ingress

Outputs:
    None

Returns:
    MZD_STATUS

Description:
    This function is used to disable all ptp packet type for ptp parser

Side effects:
    None

Notes/Warnings:
    None

******************************************************************************/
MZD_FUNC MZD_STATUS mzdPtpDisableAllPacketType
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_BOOL isEgress
);


/*****************************************************************************
                                PTP Mode Init
*****************************************************************************/
/******************************************************************************
MZD_STATUS mzdPtpTCInit
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_BOOL isEgress
);

Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address 0...31 of mdioPort to be configured
    laneOffset - lane number 0-3
    isEgress:
        MZD_TRUE - Egress
        MZD_FALSE - Ingress

Outputs:
    None

Returns:
    MZD_STATUS

Description:
    This function writes to init ptp TC mode.

Side effects:
    None

Notes/Warnings:
    None

******************************************************************************/
MZD_FUNC MZD_STATUS mzdPtpTCInit
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_BOOL isEgress
);

/******************************************************************************
MZD_STATUS mzdPtpDistributedTCInit
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_BOOL isEgress
);

Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address 0...31 of mdioPort to be configured
    laneOffset - lane number 0-3
    isEgress:
        MZD_TRUE - Egress
        MZD_FALSE - Ingress

Outputs:
    None

Returns:
    MZD_STATUS

Description:
    This function writes to init ptp Distributed TC mode.

Side effects:
    None

Notes/Warnings:
    None

******************************************************************************/
MZD_FUNC MZD_STATUS mzdPtpDistributedTCInit
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_BOOL isEgress
);

/******************************************************************************
MZD_STATUS mzdPtpFromReservedInit
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_BOOL isEgress
);

Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address 0...31 of mdioPort to be configured
    laneOffset - lane number 0-3
    isEgress:
        MZD_TRUE - Egress
        MZD_FALSE - Ingress

Outputs:
    None

Returns:
    MZD_STATUS

Description:
    This function writes to init ptp From Reserved mode.

Side effects:
    None

Notes/Warnings:
    None

******************************************************************************/
MZD_FUNC MZD_STATUS mzdPtpFromReservedInit
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_BOOL isEgress
);


/*****************************************************************************
                                Advanced Setting
******************************************************************************/
/*****************************************************************************
MZD_STATUS mzdPtpSetIgnoreMacSec
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_BOOL isEgress,
    IN MZD_BOOL isIgnore
);

Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address 0...31 of mdioPort to be configured
    laneOffset - lane number 0-3
    isEgress:
        MZD_TRUE - Egress
        MZD_FALSE - Ingress
    isIgnore:
        MZD_TRUE - ignore ptp packet
        MZD_FALSE - encrypt ptp packet

Outputs:
    None

Returns:
    MZD_STATUS

Description:
    This function writes to make MacSec module ignore ptp packet(unencrypted).

Side effects:
    None

Notes/Warnings:
    None

******************************************************************************/
MZD_FUNC MZD_STATUS mzdPtpSetIgnoreMacSec
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset, 
    IN MZD_BOOL isEgress,
    IN MZD_BOOL isIgnore
);

/******************************************************************************
MZD_STATUS mzdPtpGetEgressTSQ
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_U16 queueId,
    OUT MZD_PTP_EGRESS_TSQ_PTR egressTSQ
);

Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address 0...31 of mdioPort to be configured
    laneOffset - lane number 0-3
    queueId - queue entry id

Outputs:
    egressTSQ:
        32bit  -  Timestamp;
        1bit   -  TODUpdate;
        1bit   -  TAISelect;
        10bit  -  queueEntryID;
        1bit   -  Valid;

Returns:
    MZD_STATUS

Description:
    This function is used to read egress tsq.

Side effects:
    None

Notes/Warnings:
    None

******************************************************************************/
MZD_FUNC MZD_STATUS mzdPtpGetEgressTSQ
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_U16 queueId,
    OUT MZD_PTP_EGRESS_TSQ_PTR egressTSQ
);

/******************************************************************************
MZD_STATUS mzdPtpGetIngressTSQ
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    OUT MZD_PTP_INGRESS_TSQ_PTR ingressTSQ
);

Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address 0...31 of mdioPort to be configured
    laneOffset - lane number 0-3

Outputs:
    ingressTSQ:
        32bit  -  Timestamp;
        16bit  -  SeqId;
        8bit   -  Domain;
        4bit   -  MssageType;
        1bit   -  TAISelect;
        1bit   -  TODUpdate;
        1bit   -  Valid;

Returns:
    MZD_STATUS

Description:
    This function is used to read ingress tsq.

Side effects:
    None

Notes/Warnings:
    None

******************************************************************************/
MZD_FUNC MZD_STATUS mzdPtpGetIngressTSQ
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    OUT MZD_PTP_INGRESS_TSQ_PTR ingressTSQ
);

/******************************************************************************
MZD_STATUS mzdPtpSetMACOneStep
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_U16 host_or_line,
    IN MZD_BOOL isHighSpeed,
    IN MZD_BOOL isEnable
);

Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address 0...31 of mdioPort to be configured
    laneOffset - lane number 0-3
    host_or_line - which interface is being checked:
        MZD_HOST_SIDE
        MZD_LINE_SIDE
    isHighSpeed:
        MZD_TRUE - 400G/200G
        MZD_FALSE - Other speed
    isEnable:
        MZD_TRUE - enable
        MZD_FALSE - disable

Outputs:
    None

Returns:
    MZD_STATUS

Description:
    This function writes to enable mac one step function which means mac will also update the correction field.

Side effects:
    None

Notes/Warnings:
    None

******************************************************************************/
MZD_FUNC MZD_STATUS mzdPtpSetMACOneStep
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_U16 host_or_line,
    IN MZD_BOOL isHighSpeed,
    IN MZD_BOOL isEnable
);

/******************************************************************************
MZD_STATUS mzdPtpTODSelect
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_U16 host_or_line,
    IN MZD_BOOL isHighSpeed,
    IN MZD_TAI_SELECT taiSel
);

Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address 0...31 of mdioPort to be configured
    laneOffset - lane number 0-3
    host_or_line - which interface is being checked:
        MZD_HOST_SIDE
        MZD_LINE_SIDE
    isHighSpeed:
        MZD_TRUE - 400G/200G
        MZD_FALSE - Other speed
    taiSel:
        MZD_TAI0
        MZD_TAI1

Outputs:
    None

Returns:
    MZD_STATUS

Description:
    This function writes to do the TOD selection.

Side effects:
    None

Notes/Warnings:
    None

******************************************************************************/
MZD_FUNC MZD_STATUS mzdPtpTODSelect
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_U16 host_or_line,
    IN MZD_BOOL isHighSpeed,
    IN MZD_TAI_SELECT taiSel
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdPtpVxlanEnable
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_BOOL isEgress,
    IN MZD_BOOL isEnable
);
Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address 0...31 of mdioPort to be configured
    laneOffset - lane number 0-3
    isEgress:
        MZD_TRUE - Egress
        MZD_FALSE - Ingress
    isEnable:
        MZD_TRUE - enable
        MZD_FALSE - disable

Outputs:
    None

Returns:
    MZD_STATUS

Description:
    This function is used to enable ptp vxlan function

Side effects:
    None

Notes/Warnings:
    None

******************************************************************************/
MZD_FUNC MZD_STATUS mzdPtpVxlanEnable
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_BOOL isEgress,
    IN MZD_BOOL isEnable
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdPtpEnableSelectPacketType
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_BOOL isEgress,
    IN MZD_PACKET_TYPE packetType
);
Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address 0...31 of mdioPort to be configured
    laneOffset - lane number 0-3
    isEgress:
        MZD_TRUE - Egress
        MZD_FALSE - Ingress
    packetType:
        MZD_PTP_ETHERTYPE = 0,
        MZD_PTP_IPV4 = 1,
        MZD_PTP_IPV6 = 2,
        MZD_PTP_IPV4_MPLS = 3,
        MZD_PTP_IPV6_MPLS = 4,
        MZD_PTP_ETH_PW_MPLS = 5,
        MZD_PTP_IPV4_PW_MPLS = 6,
        MZD_PTP_IPV6_PW_MPLS = 7

Outputs:
    None

Returns:
    MZD_STATUS

Description:
    This function is used to enable one ptp packet type for select mdioPort and laneOffset.

Side effects:
    None

Notes/Warnings:
    Please note that these are not one-to-one mappings, for example : If you want to enable MZD_PTP_IPV4_MPLS packet type,
    both IPV4 and IPV4_MPLS need to be enabled.

******************************************************************************/
MZD_FUNC MZD_STATUS mzdPtpEnableSelectPacketType
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_BOOL isEgress,
    IN MZD_PACKET_TYPE packetType
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdPtpUserDefinedTPID
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_BOOL isEgress,
    IN MZD_U16 entryId,
    IN MZD_U16 tpid
);
Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address 0...31 of mdioPort to be configured
    isEgress:
        MZD_TRUE - Egress
        MZD_FALSE - Ingress
    entryId - TPID entry id 0-3
    tpid - user defined TPID value

Outputs:
    None

Returns:
    MZD_STATUS

Description:
    This function is used to set user defined TPID value.

Side effects:
    None

Notes/Warnings:
    None

******************************************************************************/
MZD_FUNC MZD_STATUS mzdPtpUserDefinedTPID
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_BOOL isEgress,
    IN MZD_U16 entryId,
    IN MZD_U16 tpid
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdPtpTSDFSEnable
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_U16 host_or_line,
    IN MZD_OP_MODE opMode,
    IN MZD_BOOL isEnable
);
Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address 0...31 of mdioPort to be configured
    laneOffset - lane number 0-3
    host_or_line - which interface is being checked:
        MZD_HOST_SIDE
        MZD_LINE_SIDE
    opMode:
        MZD_P1X,
        MZD_P1S,
        MZD_P1P,
        MZD_P1K,

        MZD_P2P5XN,
        MZD_P2P5XL,
        MZD_P2P5XK,

        MZD_P5L,
        MZD_P5K,

        MZD_P10LN,
        MZD_P10KN,
        MZD_P10KF,
        MZD_P10LF,

        MZD_P25YN,
        MZD_P25YF,
        MZD_P25ZN,
        MZD_P25ZF,
        MZD_P25LN,
        MZD_P25LF,
        MZD_P25LR,
        MZD_P25CN,
        MZD_P25CF,
        MZD_P25CR,
        MZD_P25BN,
        MZD_P25BF,
        MZD_P25BR,
        MZD_P25JN,
        MZD_P25JF,
        MZD_P25JR,

        MZD_P40LN,
        MZD_P40CN,
        MZD_P40CF,
        MZD_P40KN,
        MZD_P40KF,
        MZD_P40LF,
        MZD_P40AN,
        MZD_P40AF,
        MZD_P40AR,
        MZD_P40BN,
        MZD_P40BF,
        MZD_P40BR,
        MZD_P40JN,
        MZD_P40JF,
        MZD_P40JR,

        MZD_P50LN,
        MZD_P50CN,
        MZD_P50CF,
        MZD_P50KN,
        MZD_P50KF,
        MZD_P50LF,
        MZD_P50MN,
        MZD_P50MF,
        MZD_P50MR,
        MZD_P50BN,
        MZD_P50BF,
        MZD_P50BR,
        MZD_P50JN,
        MZD_P50JF,
        MZD_P50JR,
        MZD_P50UP,
        MZD_P50QP,

        MZD_P100LN,
        MZD_P100LR,
        MZD_P100CR,
        MZD_P100KR,
        MZD_P100KN,
        MZD_P100UP4,
        MZD_P100QP4,
        MZD_P100UP2,
        MZD_P100QP2,
        MZD_P100UP1,
        MZD_P100QP1,

        MZD_P200UP8,
        MZD_P200QP8,
        MZD_P200UP4,
        MZD_P200QP4,
        MZD_P200UP2,
        MZD_P200QP2,

        MZD_P400UP8,
        MZD_P400QP8,
        MZD_P400UP4,
        MZD_P400QP4,
    isEnable:
        MZD_TRUE - enable
        MZD_FALSE - disable

Outputs:
    None

Returns:
    MZD_STATUS

Description:
    This function is used to enable PTP TSD future timestamp feature.
    This function is only recommended when PTP packet are encrypted.
    This function is not recommended for low speed mode of 10G/5G/2.5G/1G with low bandwidth PTP packets, speed above 25G is better.
Side effects:
    None

Notes/Warnings:
    None

******************************************************************************/
MZD_FUNC MZD_STATUS mzdPtpTSDFSEnable
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_U16 host_or_line,
    IN MZD_OP_MODE opMode,
    IN MZD_BOOL isEnable
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdPtpUserDefinedTSDFSEnable
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_U16 host_or_line,
    IN MZD_OP_MODE opMode,
    IN MZD_U32 futureTime,
    IN MZD_BOOL isEnable
);
Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address 0...31 of mdioPort to be configured
    laneOffset - lane number 0-3
    host_or_line - which interface is being checked:
        MZD_HOST_SIDE
        MZD_LINE_SIDE
    opMode: op mode
    isEnable:
        MZD_TRUE - enable
        MZD_FALSE - disable

Outputs:
    None

Returns:
    MZD_STATUS

Description:
    This function is used to enable PTP TSD future timestamp feature.
    This function is only recommended when PTP packet are encrypted.

Side effects:
    None

Notes/Warnings:
    If the futureTime is too small. it might cause some error.

******************************************************************************/
MZD_FUNC MZD_STATUS mzdPtpUserDefinedTSDFSEnable
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_U16 host_or_line,
    IN MZD_OP_MODE opMode,
    IN MZD_U32 futureTime,
    IN MZD_BOOL isEnable
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdPtpTSDAMREnable
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_U16 host_or_line,
    IN MZD_OP_MODE opMode,
    IN MZD_BOOL isEnable
);
Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address 0...31 of mdioPort to be configured
    laneOffset - lane number 0-3
    host_or_line - which interface is being checked:
        MZD_HOST_SIDE
        MZD_LINE_SIDE
    opMode: op mode
    isEnable:
        MZD_TRUE - enable
        MZD_FALSE - disable

Outputs:
    None

Returns:
    MZD_STATUS

Description:
    This function is used to enable PTP TSD AMR feature.
    This function is recommended for PTP clear mode and PTP bypass Macsec mode.

Side effects:
    None
    
Notes/Warnings:
    None

******************************************************************************/
MZD_FUNC MZD_STATUS mzdPtpTSDAMREnable
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_U16 host_or_line,
    IN MZD_OP_MODE opMode,
    IN MZD_BOOL isEnable
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdPtpTSXEnable
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_U16 host_or_line,
    IN MZD_OP_MODE opMode,
    IN MZD_BOOL isEnable
);
Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address 0...31 of mdioPort to be configured
    laneOffset - lane number 0-3
    host_or_line - which interface is being checked:
        MZD_HOST_SIDE
        MZD_LINE_SIDE
    opMode:  opmode
    isEnable:
        MZD_TRUE - enable
        MZD_FALSE - disable

Outputs:
    None

Returns:
    MZD_STATUS

Description:
    This function is used to enable PTP TSX feature.

Side effects:
    None

Notes/Warnings:
    None

******************************************************************************/
MZD_FUNC MZD_STATUS mzdPtpTSXEnable
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_U16 host_or_line,
    IN MZD_OP_MODE opMode,
    IN MZD_BOOL isEnable
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdPtpSetShareBufferPTPIgnore
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_BOOL isIgnore
);
Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address 0...31 of mdioPort to be configured
    isIgnore :
        MZD_TRUE - sharebuffer ignore PTP frame
        MZD_FALSE - sharebuffer doesn't ignore PTP frame

Outputs:
    None

Returns:
    MZD_STATUS

Description:
    This function is used to set sharebuffer ignore PTP frame.
    For PTP without Macsec or PTP clear mode, it is recommended to set isIgnore to MZD_TRUE and for PTP with Macsec, it is recommended to set isIgnore to MZD_FALSE.

Side effects:
    None
    
Notes/Warnings:
    None

******************************************************************************/
MZD_FUNC MZD_STATUS mzdPtpSetShareBufferPTPIgnore
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_BOOL isIgnore
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdPtpSetBypassEip218
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_BOOL isBypass
);
Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address 0...31 of mdioPort to be configured
    isBypass :
        MZD_TRUE - disable EIP218 module
        MZD_FALSE - enable the rate controller and select the mode as fixed IFG mode

Outputs:
    None

Returns:
    MZD_STATUS

Description:
    This function is used to disable EIP218.
    For PTP without Macsec, it is recommended to set isBypass to MZD_TRUE and when macsec is enabled, it is recommended to set isBypass to MZD_FALSE.

Side effects:
    None
    
Notes/Warnings:
    None

******************************************************************************/
MZD_FUNC MZD_STATUS mzdPtpSetBypassEip218
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_BOOL isBypass
);

/******************************************************************************
MZD_STATUS mzdPtpIngressPathDelaySet
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_BOOL isEgress,
    IN MZD_U32 ingressPathDelay
);

Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address 0...31 of mdioPort to be configured
    laneOffset - lane number 0-3
    isEgress:
        MZD_TRUE - Egress
        MZD_FALSE - Ingress
    ingressPathDelay - ingress path delay, 30-bit 2's complement signed

Outputs:
    None

Returns:
    MZD_STATUS

Description:
    This function is used to configure ingress path delay

Side effects:
    None
    
Notes/Warnings:
    None

******************************************************************************/
MZD_FUNC MZD_STATUS mzdPtpIngressPathDelaySet
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_BOOL isEgress,
    IN MZD_U32 ingressPathDelay
);

/******************************************************************************
MZD_STATUS mzdPtpEgressPathDelaySet
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_BOOL isEgress,
    IN MZD_U32 egressPathDelay,
    IN MZD_BOOL isEnable
);

Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address 0...31 of mdioPort to be configured
    laneOffset - lane number 0-3
    isEgress:
        MZD_TRUE - Egress
        MZD_FALSE - Ingress
    egressPathDelay - egress path delay, 30-bit 2's complement signed
    isEnable:
        MZD_TRUE - enable
        MZD_FALSE - disable

Outputs:
    None

Returns:
    MZD_STATUS

Description:
    This function is used to configure egress path delay

Side effects:
    None
    
Notes/Warnings:
    None

******************************************************************************/
MZD_FUNC MZD_STATUS mzdPtpEgressPathDelaySet
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_BOOL isEgress,
    IN MZD_U32 egressPathDelay,
    IN MZD_BOOL isEnable
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdPtpAdditionalIngrPDAdd
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_BOOL isEgress,
    IN MZD_U32 ingressPathDelay
);

Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address 0...31 of mdioPort to be configured
    laneOffset - lane number 0-3
    isEgress:
        MZD_TRUE - Egress
        MZD_FALSE - Ingress
    ingressPathDelay - ingress path delay, 30-bit 2's complement signed

Outputs:
    None

Returns:
    MZD_STATUS

Description:
    This function is used to add additional ingress path delay to current path delay

Side effects:
    None
    
Notes/Warnings:
    None

******************************************************************************/
MZD_FUNC MZD_STATUS mzdPtpAdditionalIngrPDAdd
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_BOOL isEgress,
    IN MZD_U32 ingressPathDelay
);

/******************************************************************************
MZD_STATUS mzdPtpAdditionalEgrPDAdd
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_BOOL isEgress,
    IN MZD_U32 egressPathDelay
);

Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address 0...31 of mdioPort to be configured
    laneOffset - lane number 0-3
    isEgress:
        MZD_TRUE - Egress
        MZD_FALSE - Ingress
    egressPathDelay - egress path delay, 30-bit 2's complement signed

Outputs:
    None

Returns:
    MZD_STATUS

Description:
    This function is used to add additional egress path delay to current path delay

Side effects:
    None
    
Notes/Warnings:
    None

******************************************************************************/
MZD_FUNC MZD_STATUS mzdPtpAdditionalEgrPDAdd
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_BOOL isEgress,
    IN MZD_U32 egressPathDelay
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdPtpLineSidePathDelaySet
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_OP_MODE opMode,
    IN MZD_PTP_MACSEC_STATUS ptpMSecStatus,
    IN MZD_BOOL isEnable
);

Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address 0...31 of mdioPort to be configured
    laneOffset - lane number 0-3
    opMode : op mode
    ptpMSecStatus:       
        MZD_PTP_BYPASS_MACSEC - PTP bypass macsec
        MZD_PTP_WITH_MACSEC - PTP with macsec encrypted
        MZD_PTP_CLEAR_MODE - PTP clear mode
    isEnable:
        MZD_TRUE - enable
        MZD_FALSE - disable

Outputs:
    None

Returns:
    MZD_STATUS

Description:
    This function is used to configure line side path delay for accuracy feature enabled only.
    This API shall be called after mode and speed is set or changed.

Side effects:
    None
    
Notes/Warnings:
    None

******************************************************************************/
MZD_FUNC MZD_STATUS mzdPtpLineSidePathDelaySet
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_OP_MODE opMode,
    IN MZD_PTP_MACSEC_STATUS ptpMSecStatus,
    IN MZD_BOOL isEnable
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdPtpHostSidePathDelaySet
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_OP_MODE opMode,
    IN MZD_PTP_MACSEC_STATUS ptpMSecStatus,
    IN MZD_BOOL isEnable
);

Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address 0...31 of mdioPort to be configured
    laneOffset - lane number 0-3
    opMode : op mode
    ptpMSecStatus:       
        MZD_PTP_BYPASS_MACSEC - PTP bypass macsec
        MZD_PTP_WITH_MACSEC - PTP with macsec encrypted
        MZD_PTP_CLEAR_MODE - PTP clear mode
    isEnable:
        MZD_TRUE - enable
        MZD_FALSE - disable

Outputs:
    None

Returns:
    MZD_STATUS

Description:
    This function is used to configure host side path delay for accuracy feature enabled only.
    This API shall be called after mode and speed is set or changed.

Side effects:
    None
    
Notes/Warnings:
    None

******************************************************************************/
MZD_FUNC MZD_STATUS mzdPtpHostSidePathDelaySet
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_OP_MODE opMode,
    IN MZD_PTP_MACSEC_STATUS ptpMSecStatus,
    IN MZD_BOOL isEnable
);
/******************************************************************************
MZD_FUNC MZD_STATUS mzdPtpSbufDelayTimeout
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_OP_MODE opMode,
    IN MZD_BOOL isEnable
);

Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address 0...31 of mdioPort to be configured
    laneOffset - lane number 0-3
    opMode : op mode
    isEnable:
        MZD_TRUE - enable
        MZD_FALSE - disable

Outputs:
    None

Returns:
    MZD_STATUS

Description:
    This function is used to configure sharebuffer delay timeout.

Side effects:
    None
    
Notes/Warnings:
    None

******************************************************************************/
MZD_FUNC MZD_STATUS mzdPtpSbufDelayTimeout
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_OP_MODE opMode,
    IN MZD_BOOL isEnable
);

/******************************************************************************
MZD_STATUS mzdPtpMessageTypeSet
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_BOOL isEgress,
    IN MZD_U16 index,
    IN MZD_U16 messageType,
    IN MZD_BOOL isEnable
);

Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address 0...31 of mdioPort to be configured
    isEgress:
        MZD_TRUE - Egress
        MZD_FALSE - Ingress
    index - lane number 0-3
    messageType - PTP Message Type
    isEnable:
        MZD_TRUE - enable
        MZD_FALSE - disable

Outputs:
    None

Returns:
    MZD_STATUS

Description:
    This function is used to enable/disable PTP message type parsing

Side effects:
    None

******************************************************************************/
MZD_FUNC MZD_STATUS mzdPtpMessageTypeSet
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_BOOL isEgress,
    IN MZD_U16 index,
    IN MZD_U16 messageType,
    IN MZD_BOOL isEnable
);

/******************************************************************************
MZD_STATUS mzdPtpSetEgress164Latency
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_BOOL isEgress,
    IN MZD_OP_MODE opMode,
    IN MZD_BOOL isEnableFS
);

Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address 0...31 of mdioPort to be configured
    isEgress:
        MZD_TRUE - Egress
        MZD_FALSE - Ingress
    opMode : op mode
    isEnable:
        MZD_TRUE - set 164 delay to suggested value
        MZD_FALSE - clear 164 delay value to zero

Outputs:
    None

Returns:
    MZD_STATUS

Description:
    This function is used to set 164 latency value.

Side effects:
    None

******************************************************************************/
MZD_FUNC MZD_STATUS mzdPtpSetEgress164Latency
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_BOOL isEgress,
    IN MZD_OP_MODE opMode,
    IN MZD_BOOL isEnableFS
);

/******************************************************************************
MZD_STATUS mzdPtpDownSamplingDisable
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_U16 host_or_line,
    IN MZD_BOOL isDisable
);

Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address 0...31 of mdioPort to be configured
    laneOffset - lane number 0-3
    host_or_line - which interface is being checked:
        MZD_HOST_SIDE
        MZD_LINE_SIDE
    isDisable:
        MZD_TRUE - disable
        MZD_FALSE - enable

Outputs:
    None

Returns:
    MZD_STATUS

Description:
    This function is used to enable/disable downsampling.

Side effects:
    None

******************************************************************************/
MZD_FUNC MZD_STATUS mzdPtpDownSamplingDisable
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_U16 host_or_line,
    IN MZD_BOOL isDisable
);

#if C_LINKAGE
#if defined __cplusplus
}
#endif
#endif


#endif /* defined MZD_PTP_API_H */