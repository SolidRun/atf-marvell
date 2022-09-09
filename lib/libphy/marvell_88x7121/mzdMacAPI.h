/*******************************************************************************
Copyright (c) 2014 Marvell.
If you received this File from Marvell and you have entered into a commercial
license agreement (a "Commercial License") with Marvell, the File is licensed
to you under the terms of the applicable Commercial License.
*******************************************************************************/

/********************************************************************
This file contains function prototypes for controlling MAC block
and diagnostic operations for the Marvell X7121 Device.
********************************************************************/
#ifndef MZD_MAC_API_H
#define MZD_MAC_API_H
#if C_LINKAGE
#if defined __cplusplus
    extern "C" {
#endif
#endif

/* MAC/MACSec blocks mdioPort mapping */
/* Host - P0 --- P1 ----- P2 --- P3 ----
**      | Host MAC0 | - | Host MAC1 |
**       | MACSec0 | --- | MACSec1 |
**      | Line MAC0 | - | Line MAC1 |
** Line - P0 --- P1 ----- P2 --- P3 ---- */

/* MAC registers categories */
#define MZD_MAC_HIGH_SPEED(macNum, regAddr)     ((0x40000+macNum*0x1000) | (regAddr&0x0FFF))
#define MZD_MAC_LOW_SPEED(macNum, regAddr)      ((0x44000+macNum*0x1000) | (regAddr&0x0FFF))
#define MZD_MAC_STAT(regAddr)                   (0x50000 | (regAddr&0x0FFF))
#define MZD_MAC_MTIP_EXT(regAddr)               (0x78000 | (regAddr&0x0FFF))

/* MACsec registers */
#define MZD_MACSEC_COMM(XpDev, regAddr)                ((XpDev->chipRevision==MZD_REV_A0)?(0xFF000|(regAddr&0xFFF)):(0xEF000|(regAddr&0xFFF)))
#define MZD_MACSEC_PAUSE_ENABLE                        0x014
#define MZD_MACSEC_BUFF_LOCAL_RESET                    0x00048
#define MZD_MACSEC_SHARED_BUFF_MAIN_CNTL               0x00060
#define MZD_MACSEC_EIP_218_DATA_RATE(channelID)        (0x00090+channelID*0x4)
#define MZD_MACSEC_SHARED_BUFF_RATE_CNTL(channelID)    (0x3F000+(0x100*(channelID+8)))

/* MACSec registers categories */
#define MZD_MACSEC_EGR(regAddr)                 (0x60000 | (regAddr&0xFFF))
#define MZD_MACSEC_INGR(regAddr)                (0xE0000 | (regAddr&0xFFF))

/* MACSec Common registers */
#define MZD_MACSEC_EN_RESET_CNTL                0x000
#define MZD_MACSEC_PTP_CNTL                     0x004

/* MACSec Arbiter registers */
#define MZD_MACSEC_ARBITER_SLOT(slotOffset)     (0x000+slotOffset*0x004)
#define MZD_MACSEC_ARBITER_REG_CNTL             0x030
#define MZD_MACSEC_ARBITER_TIMEOUT_CNTL0        0x038
#define MZD_MACSEC_ARBITER_TIMEOUT_CNTL1        0x03C

/* MAC definitions */
#define MZD_NUM_LOW_SPEED_MAC_UNITS           8
#define MZD_NUM_HIGH_SPEED_MAC_UNITS          2

/* MAC Ext Registers */
#define MZD_MAC_SEG_PORT_XOFF_OR                0x17C
#define MZD_MAC_PORT_XOFF_OR                    0x1C4
#define MZD_MAC_SEG_PORT_CNTL(macNum)           (0x05C+macNum*0x014)
#define MZD_MAC_PORT_CNTL(macNum)               (0x084+macNum*0x018)

/* options for in mzdMacSecMacInit */
#define MZD_INIT_MAC_DEFAULT       0x0
#define MZD_INIT_MACSEC_ENABLE     (1<<0) /* Enable MACSec block; Needed for both MACSec and/or HMUX */
#define MZD_INIT_MACSEC_BYPASS     (1<<1) /* Bypass MACSec block; Set this if MACSec encryption is not used */
                                          /* i.e. configuring HMUX where MACSec encryption is not used */
#define MZD_INIT_PTP               (1<<2) /* Use PTP path when enabled; If not set, it bypasses PTP path */
                                          /* i.e. configuring PTP with MACSec encryption */
#define MZD_INIT_MACSEC_HIGH_CLK   (1<<3) /* Use the higher MACSec clock rate at 833MHz instead of the 680MHz */
                                          /* This option will slightly increase the power consumption. This is */
                                          /* not required under normal operations. (does not apply to A0) */
                                          /* Warning: The device do not support mixed MACSec clock rate. All ports */
                                          /*          must operate at the same MACSec clock rate */
/************************************************************************************
MZD_FUNC MZD_STATUS mzdMacSecMacInit
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line, 
    IN MZD_U16 laneOffset,
    IN MZD_OP_MODE opMode,
    IN MZD_U16 initOption
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    host_or_line - which interface is being checked:
                  MZD_HOST_SIDE
                  MZD_LINE_SIDE
                  MZD_BOTH_SIDE
    laneOffset - lane number 0-3
    opMode - operational mode needed to set the MAC speed registers accordingly
             as well as setting the multiple lanes for PCS modes that operated on multiple lanes.
    initOption - option to initialize function blocks
                  MZD_INIT_MAC_DEFAULT - Only enable MAC, MAC is also enabled in all other options
                  MZD_INIT_MACSEC_ENABLE - Enable MACsec block
                  MZD_INIT_MACSEC_BYPASS - Bypass MACsec block, initialize MACsec if not bypassed 
                  MZD_INIT_PTP - Use PTP path when enabled; If not set, it bypasses PTP path
                  MZD_INIT_MACSEC_HIGH_CLK - higher MACsec clock rate at 833MHz instead of the 680MHz
 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not

 Description:
    API to initialize all the required Mac and MACSec components for MAC/MACsec operations on 
    selected lane/port with option to bypass the PTP.

    MACsec and PTP block initialization is controlled by the initOption. This function always
    enables MAC on the selected lane/port.
     
    MACsec channel or block can be bypassed at a later time by calling mzdMacSecEgressBypass() 
    and mzdMacSecIngressBypass() after the entire MACSec configuration is completed. Please
    refers to sample code mzdMACSecSample256KeyBypass().

    The MZD_INIT_MACSEC_HIGH_CLK option will use the higher MACsec clock rate at 833MHz instead 
    of the 680MHz. This option is not required under normal operations. 
    The device do not support mixed MACSec clock rate. All ports must operate at the same MACSec 
    clock rate.

 Side effects:
    None.

 Notes/Warnings:
    MACsec block is required to be enabled for a complete MAC datapath. For a normal MAC operation,
    please use initOption = (MZD_INIT_MACSEC_ENABLE | MZD_INIT_MACSEC_BYPASS).

    Please refer to the Mac/MACsec samples in the mzdHmuxSample.c and mzdMACsecSample.c for calling this
    mzdMacSecMacInit().

    MZD_MACSEC_SUPPORT is required to be defined as 1 if MZD_INIT_MACSEC_ENABLE is selected without
    MZD_INIT_MACSEC_BYPASS option. Please refers to mzdApiTypes.h

    Currently both Egress and Ingress MACsec are configured regardless of the host_or_line option.

    The device do not support mixed MACSec clock rate. All ports must operate at the same MACSec 
    clock rate. If MZD_INIT_MACSEC_HIGH_CLK is used, all port must used the same option.
************************************************************************************/
MZD_FUNC MZD_STATUS mzdMacSecMacInit
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line, 
    IN MZD_U16 laneOffset,
    IN MZD_OP_MODE opMode,
    IN MZD_U16 initOption
);

/*******************************************************************************
MZD_FUNC MZD_STATUS mzdMacEnable
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    IN MZD_BOOL macEnable
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    host_or_line - which interface is being checked:
                      MZD_HOST_SIDE
                      MZD_LINE_SIDE
                      MZD_BOTH_SIDE
    laneOffset - lane number 0-3 or MZD_ALL_LANES
                 MZD_ALL_LANES - all lanes on the given port
    macEnable - MZD_TRUE/MZD_FALSE to enable/disable the MAC on the pass-in 
                inputs

 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not

 Description:
    This API enabled or disabled the MAC features on the pass-in laneOffset of a port. 
    It will enable/disable the MAC on one lane or all lanes and also single/both sides
    on a port.  
    
    The MAC for the required lanes must be enabled for MACSec or Hitless MUX(HMUX) to 
    operate.

 Side effects:
    None

 Notes/Warnings:
    None.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdMacEnable
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    IN MZD_BOOL macEnable
);

/*******************************************************************************
MZD_FUNC MZD_STATUS mzdMacSecEnable
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_BOOL macsecEnable
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31,
               which belongs to the MACsec block that this API control
    host_or_line - reserved for future
    macsecEnable - MZD_TRUE/MZD_FALSE to enable/disable MACsec block on the 
                   given mdioPort

 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not

 Description:
    This API enabled or disabled the MACSec features on the requested block.

    MSCLK in MACSec common block is enabled. Refer to the MACSec doc 
    for more info on the MSCLK and the common block.

    The MAC block must be enabled when using the MACSec features. Call 
    mzdMacEnable() to enable/disable MAC features.

 Side effects:
    None

 Notes/Warnings:
    This API applies on all ports of the mapped MACSec block.
    See the port mapping at the top of this file.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdMacSecEnable
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_BOOL macsecEnable
);


/*******************************************************************************
MZD_FUNC MZD_STATUS mzdMacSetLowSpeed
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    laneOffset - lane number 0-3 or MZD_ALL_LANES
                 MZD_ALL_LANES - all lanes on the given port

 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not

 Description:
    This API initializes the MAC block for 100G and lower speed.
    Please use mzdMacSetHighSpeed() if speed is 200G or higher.

 Side effects:
    None

 Notes/Warnings:
    None.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdMacSetLowSpeed
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset
);

/*******************************************************************************
MZD_FUNC MZD_STATUS mzdMacSetHighSpeed
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31

 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not

 Description:
    This API initializes the MAC block for 200G and higher speed.
    Please use mzdMacSetLowSpeed() if speed is 100G or lower.

 Side effects:
    None

 Notes/Warnings:
    None.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdMacSetHighSpeed
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort
);


/*******************************************************************************
MZD_FUNC MZD_STATUS mzdMacSecPtpBypass
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_BOOL bypassPtp
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    bypassPtp - MZD_TRUE to enable bypassPtp in the common block; else MZD_FALSE

 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not

 Description:
    Configures the PTP bypass on the given block. PTP bypass control is in the
    MACsec block. This API applies on all ports of the mapped MACSec block.

 Side effects:
    None

 Notes/Warnings:
    See the port mapping at the top of this file.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdMacSecPtpBypass
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_BOOL bypassPtp
);

/*******************************************************************************
MZD_FUNC MZD_STATUS mzdMacSecEgressBypass
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_BOOL egressBypass
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    laneOffset - lane number 0-3 or MZD_ALL_LANES
                 MZD_ALL_LANES - all lanes on the given port
    egressBypass - MZD_TRUE to enable egress bypass; else MZD_FALSE

 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not

 Description:
     Configures the MACSec egress bypass on the requested lane

 Side effects:
    None

 Notes/Warnings:
    mzdMacSecEnable() must be called with MZD_TRUE before calling this API.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdMacSecEgressBypass
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_BOOL egressBypass
);

/*******************************************************************************
MZD_FUNC MZD_STATUS mzdMacSecIngressBypass
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_BOOL ingressBypass
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    laneOffset - lane number 0-3 or MZD_ALL_LANES
                 MZD_ALL_LANES - all lanes on the given port
    ingressBypass - MZD_TRUE to enable ingress bypass; else MZD_FALSE

 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not

 Description:
    Configures the MACSec ingress bypass on the requested lane

 Side effects:
    None

 Notes/Warnings:
    mzdMacSecEnable() must be called with MZD_TRUE before calling this API.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdMacSecIngressBypass
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_BOOL ingressBypass
);

/*******************************************************************************
MZD_FUNC MZD_STATUS mzdMacBypassPPMFifo
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_BOOL bypassPPMFifo
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    bypassPPMFifo - MZD_TRUE to enable bypass; else MZD_FALSE 

 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not

 Description:
    Configures the MAC PPM FIFO bypass for all speeds

 Side effects:
    None

 Notes/Warnings:
    None.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdMacBypassPPMFifo
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_BOOL bypassPPMFifo
);

/*******************************************************************************
MZD_FUNC MZD_STATUS mzdMacBypassPPMFifoPushBackLatencyMatch
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    IN MZD_U16 pushBackLatencyMatch
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    host_or_line - which interface is being checked:
                      MZD_HOST_SIDE
                      MZD_LINE_SIDE
    laneOffset - lane number 0-3
    pushBackLatencyMatch - Latency match 40G MAC am clock delay
                           Default:1; Latency match 3 bit
 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not

 Description:
    Configuration on MAC mode bypass PPM FIFO push-back latency match for 
    40G MAC am clock delay

 Side effects:
    None

 Notes/Warnings:
    None.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdMacBypassPPMFifoPushBackLatencyMatch
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    IN MZD_U16 pushBackLatencyMatch
);

/*******************************************************************************
MZD_FUNC MZD_STATUS mzdMacBypassPPMFifoDelayAlignMarkerPushBack
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    IN MZD_U16 pushBackDelay
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    host_or_line - which interface is being checked:
                      MZD_HOST_SIDE
                      MZD_LINE_SIDE
    laneOffset - lane number 0-3
    pushBackDelay - Alignment marker push-back to mac_tx_clk delay
                    default:1 (equivalent to delay of 8)
 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not

 Description:
    Bypass PPM FIFO configurable delay for alignment marker push back. 
    Alignment marker push-back to mac_tx_clk delay

 Side effects:
    None

 Notes/Warnings:
    This API applies on all ports of the mapped MAC block.
    See the port mapping at the top of this file.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdMacBypassPPMFifoDelayAlignMarkerPushBack
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    IN MZD_U16 pushBackDelay
);

/* MIB stateDumpOptions */
#define MZD_MIB_STAT_NO_CLEAR_READ  (1<<0)  /* Default is cleared counters on read */
#define MZD_MIB_STAT_RESERVED       (1<<1)  /* Reserved for future MIB dump options */
/*******************************************************************************
MZD_FUNC MZD_STATUS mzdMacMIBStatDump
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    IN MZD_U32 stateDumpOptions
);
 
 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    host_or_line - interface to be modified (MZD_HOST_SIDE or MZD_LINE_SIDE)
    laneOffset - 0..3 for lanes 0-3
    stateDumpOptions - various state dump options; 0:default is all
                       See above MIB stateDumpOptions
                       
 Outputs:
    None.
 
 Returns:
    MZD_OK - if successfully retrieve dump info
    MZD_FAIL - otherwise returns MZD_FAIL
 
 Description:
    This function retrieves all the useful statistic counters in the Ethernet MAC 
    accumulating the MAC transmit and receive statistics vector information on a lane.
    The statistic logging will be send to the MZD_DBG_INFO().
 
 Side effects:
    None
 
 Notes/Warnings:
    The MACSec block must be enabled to read the MAC MIB statistics. Refer to the 
    mzdMacSecEnable() API to turn on the MACSec.

    The MZD_DBG_INFO should be implemented and enabled for this mzdMacMIBStatDump API.
    Some of these data in the state dump are used only for internal debugging and
    would be not meaningful for end user.
    Contact customer support for more details on the state dump output. 

    Resetting the MIB counters with mzdMacMIBStatReset() is needed when the mzdSlotReset() 
    is used to reset the slots after switching from a high speed to low speed mode. Refer 
    to mzdSlotReset() on the affected modes.

 *******************************************************************************/
MZD_FUNC MZD_STATUS mzdMacMIBStatDump
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    IN MZD_U32 stateDumpOptions
);

/*******************************************************************************
MZD_FUNC MZD_STATUS mzdMacMIBStatReset
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort
);
 
 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
                       
 Outputs:
    None.
 
 Returns:
    MZD_OK - if successfully retrieve dump info
    MZD_FAIL - otherwise returns MZD_FAIL
 
 Description:
    This API resets and clears all the MIB statistic counters.

    Resetting the MIB counters is needed when the mzdSlotReset() is used to reset the slots 
    after switching from a high speed to low speed mode. Refer to mzdSlotReset() on the 
    affected modes.
 
 Side effects:
    None
 
 Notes/Warnings:
    The MAC must be enabled to read the MAC MIB statistics. Refer to the mzdMacEnable() 
    API to turn on the MAC.

    This API will reset all 8 channels MAC MIB statistics.

*******************************************************************************/
MZD_FUNC MZD_STATUS mzdMacMIBStatReset
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort
);


/*******************************************************************************
MZD_FUNC MZD_STATUS mzdMacPauseFrameInjectionToHost
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_U16 enable
);
 
 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    laneOffset - 0..3 for lanes 0-3
    enable - MZD_ENABLE to enable the Pause Frame Injection
             MZD_DISABLE to disable the Pause Frame Injection

 Outputs:
    None.
 
 Returns:
    MZD_OK - if action was successful
    MZD_FAIL - otherwise returns MZD_FAIL
 
 Description:
    This APIs enables or disables the Pause Frame Injection on the Egress Path.
    The chip generated Pause Frame goes Ingress direction.

    If enabled, the Shared Buffer requests MAC to generate Pause Frame when it
    reaches the threshold. User can call mzdMacSetPauseFrameToHostThreshold()
    to set the Shared Buffer high and low threshold.
 
 Side effects:
    None.
 
 Notes/Warnings:
    For 200G/400G speed, this API configures Pause Frame injection behavior on all lanes of
    the give ports. For 100G and lower speed this API configures Pause Frame injection
    behavior on each of the lane.
 *******************************************************************************/
MZD_FUNC MZD_STATUS mzdMacPauseFrameInjectionToHost
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_U16 enable
);

/*******************************************************************************
MZD_FUNC MZD_STATUS mzdMacSetPauseFrameToHostThreshold
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_U16 lowThreshold,
    IN MZD_U16 highThreshold
);
 
 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    laneOffset - 0..3 for lanes 0-3
    lowThreshold - The low threshold of the shared buffer to de-asserts request
                   for MAC to generate Pause Frame
    highThreshold - The high threshold of the shared buffer to assert request 
                    for MAC to generate Pause Frame

 Outputs:
    None.
 
 Returns:
    MZD_OK - if action was successful
    MZD_FAIL - otherwise returns MZD_FAIL
 
 Description:
    This APIs set the threshold for generating Pause Frame on Ingress direction when
    Egress traffic passing into Shared Buffer reaches its high threshold.

    When the Shared buffer reaches the highThreshold, it sends request to the MAC
    and the MAC generates Pause Frame with timer value 0xFFFFFFFF.
    If the usage of Shared buffer drops below the lowThreshold, it de-asserts the request
    and The MAC will generate Pause Frame with timer value 0.

 Side effects:
    None.
 
 Notes/Warnings:
    For 200G/400G speed, this API set the threshold of Pause Frame on all lanes of
    the give ports. For 100G and lower speed this API set the threshold of Pause Frame
    on each of the lane.

    A0 device shared low threshold on all lanes of the same MAC(e.g. P0 lane0-3 and P1 lane0-3)
 *******************************************************************************/
MZD_FUNC MZD_STATUS mzdMacSetPauseFrameToHostThreshold
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_U16 lowThreshold,
    IN MZD_U16 highThreshold
);

/*******************************************************************************
MZD_FUNC MZD_STATUS mzdMacGetPauseFrameToHostThreshold
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    OUT MZD_U16 *lowThreshold,
    OUT MZD_U16 *highThreshold
);
 
 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    laneOffset - 0..3 for lanes 0-3

 Outputs:
    lowThreshold - The low threshold of the shared buffer to de-asserts request
                   for MAC to generate Pause Frame
    highThreshold - The high threshold of the shared buffer to assert request 
                    for MAC to generate Pause Frame
 
 Returns:
    MZD_OK - if action was successful
    MZD_FAIL - otherwise returns MZD_FAIL
 
 Description:
    This APIs reads the threshold for generating Pause Frame on Ingress direction when
    Egress traffic passing into Shared Buffer reaches its high threshold.

    Please see mzdMacSetPauseFrameToHostThreshold() for the detail of these threshold.

 Side effects:
    None.
 
 Notes/Warnings:
    A0 device shared low threshold on all lanes of the same MAC(e.g. P0 lane0-3 and P1 lane0-3)
 *******************************************************************************/
MZD_FUNC MZD_STATUS mzdMacGetPauseFrameToHostThreshold
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    OUT MZD_U16 *lowThreshold,
    OUT MZD_U16 *highThreshold
);

#define MZD_HMUX_OPT_DEFAULT            0x0
#define MZD_HMUX_OPT_DEMUX2             (1<<0)
#define MZD_HMUX_OPT_DEMUX4             (1<<1)
#define MZD_HMUX_OPT_PROTECTION_MODE    (1<<2)     /* static control for Egress LF */
/*******************************************************************************
MZD_FUNC MZD_STATUS mzdMacSecHmux4ArbiterEnable
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 macsecMapPort,
    IN MZD_OP_MODE hostSideMode,
    IN MZD_BOOL lowerPortPrimary,
    IN MZD_U32 hmux4Options
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    macsecMapPort - the mapped MDIO port for MACSec operation,
                    HMUX requires control port to be Port 0 or Port 2
    hostSideMode - the Host side PCS mode on the given port that user want
                    to run with the HMUX
    lowerPortPrimary -
        MZD_TRUE:  use the lower port as Primary port.
                   MAC0: P0 as Primary Port, P1 as Backup port
                   MAC1: P2 as Primary Port, P3 as Backup port
        MZD_FALSE: use the higher port as Primary port.
                   MAC0: P1 as Primary Port, P0 as Backup port
                   MAC1: P3 as Primary Port, P2 as Backup port
    hmux4Options - HMUX4 options:
                   MZD_HMUX_OPT_DEFAULT
                   MZD_HMUX_OPT_DEMUX2

 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not

 Description:
    This API enables the HMUX arbiter to setup the MAC and MACSec into the HMUX4 mode.
    By default, traffic goes through Primary port only.

    Auto Switch by calling mzdMacSecHmuxAutoSwitch() or Manual Switch by calling
    mzdMacSecManualHmuxStopTraffic() and mzdMacSecManualHmuxStartTraffic() to let
    traffic go through Backup port instead of Primary port.

    Refer to the MAC and MACSec HMUX document for more information on the HMUX4
    configuration.

    User can use hmux4Options to set the HMUX into DEMUX mode.

 Side effects:
    None

 Notes/Warnings:
    The MACsec block on the macsecMapPort MUST be enabled otherwise this API would fail.

    This API applies on all ports of the mapped MAC/MACSec block.
    See the port mapping at the top of this file.

    Mode setting is required after calling this API for using the HMUX. And
    it must sync with hostSideMode parameter.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdMacSecHmux4ArbiterEnable
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 macsecMapPort,
    IN MZD_OP_MODE hostSideMode,
    IN MZD_BOOL lowerPortPrimary,
    IN MZD_U32 hmux4Options
);

/*******************************************************************************
MZD_FUNC MZD_STATUS mzdMacSecHmux8ArbiterEnable
(
    IN MZD_DEV_PTR pDev,
    IN MZD_OP_MODE hostSideMode,
    IN MZD_BOOL lowerPortsPrimary,
    IN MZD_U32 hmux8Options
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    hostSideMode - the Host side PCS mode that user want to run with the HMUX
    lowerPortPrimary -
        MZD_TRUE:  use the lower ports P0 and P1 as Primary ports,
                   P2 and P3 as Backup ports.
        MZD_FALSE: use the higher ports P2 and P3 as Primary ports,
                   P0 and P1 as Backup ports.
    hmux8Options - HMUX8 options:
                   MZD_HMUX_OPT_DEFAULT
                   MZD_HMUX_OPT_DEMUX2
                   MZD_HMUX_OPT_DEMUX4
 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not

 Description:
    This API enables the HMUX arbiter to setup all MAC/MACSec into the HMUX8 mode.

    Auto Switch by calling mzdMacSecHmuxAutoSwitch() or Manual Switch by calling
    mzdMacSecManualHmuxStopTraffic() and mzdMacSecManualHmuxStartTraffic() to let
    traffic go through Backup ports instead of Primary ports.

    Refer to the MAC and MACSec HMUX document for more information on the HMUX8
    configuration.

    User can use hmux8Options to set the HMUX into DEMUX mode.

 Side effects:
    None

 Notes/Warnings:
    The MACsec block on P0/P1 MUST be enabled if lowerPortPrimary is MZD_TRUE,
    the MACsec block on P2/P3 MUST be enabled if lowerPortPrimary is MZD_FALSE,
    otherwise this API would fail.

    This API applies on all ports of all MAC/MACSec blocks on the whole chip.
    See the port mapping at the top of this file.

    MZD_HMUX_OPT_DEMUX2 and MZD_HMUX_OPT_DEMUX4 cannot be used together.

    Mode setting is required after calling this API for using the HMUX. And
    it must sync with hostSideMode parameter. 
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdMacSecHmux8ArbiterEnable
(
    IN MZD_DEV_PTR pDev,
    IN MZD_OP_MODE hostSideMode,
    IN MZD_BOOL lowerPortsPrimary,
    IN MZD_U32 hmux8Options
);

#define MZD_HMUX4_TYPE                    0x0
#define MZD_HMUX8_TYPE                    0x1
/*******************************************************************************
MZD_FUNC MZD_STATUS mzdMacSecHmuxArbiterEnablePerLane
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_OP_MODE hostSideMode,
    IN MZD_U16 hmuxType
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    laneOffset - lane number 0-3
    hostSideMode - the Host side PCS mode that user want to run with the HMUX
    hmuxType - select HMUX4 or HMUX8 config
               MZD_HMUX4_TYPE
               MZD_HMUX8_TYPE

 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not

 Description:
    This API enables the HMUX arbiter on the given lanes. Arbiter slot of all
    used lane of the passed in PCS mode will be configured.

    Auto Switch by calling mzdMacSecHmuxAutoSwitch() or Manual Switch by calling
    mzdMacSecManualHmuxStopTraffic() and mzdMacSecManualHmuxStartTraffic() to let
    traffic go through Backup ports instead of Primary ports.

    mzdMacSecHmuxOptionConfig() is expected to be called before this API.
    User can use hmuxType to select between HMUX4 or HMUX8. The hmuxType must
    match what has been set in the mzdMacSecHmuxOptionConfig().

    Please refer to the MAC and MACSec HMUX document for more information.
    Also refers to mzdSampleHMux8MacSecBypassPerLane() for usage sample.

 Side effects:
    None

 Notes/Warnings:
    See the port mapping at the top of this file.

    The MACsec block on the mdioPort MUST be enabled otherwise this API would fail.

    Mode setting is required after calling this API for using the HMUX. And
    it must sync with hostSideMode parameter.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdMacSecHmuxArbiterEnablePerLane
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_OP_MODE hostSideMode,
    IN MZD_U16 hmuxType
);

/*******************************************************************************
MZD_FUNC MZD_STATUS mzdMacSecHmux8DemuxMod
(
    IN MZD_DEV_PTR pDev,
    IN MZD_OP_MODE opMode,
    IN MZD_BOOL lowerPortsPrimary,
    IN MZD_U32 hmux8Options
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    opMode - reserved for future used
    lowerPortPrimary -
        MZD_TRUE:  use the lower ports P0 and P1 as Primary ports,
                   P2 and P3 as Backup ports.
        MZD_FALSE: use the higher ports P2 and P3 as Primary ports,
                   P0 and P1 as Backup ports.
    hmux8Options - HMUX8 options:
                   MZD_HMUX_OPT_DEFAULT
                   MZD_HMUX_OPT_DEMUX2
                   MZD_HMUX_OPT_DEMUX4
 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not

 Description:
    This API resolves the corner case for the single CRC issue when switching in the
    HMUX8 DEMUX2/4 configuration.

    API should be called before calling mzdMacSecMacInit() initialization for the 
    HMUX8 DEMUX2/4 configuration.  Refer to the mzdSampleHMux8DeMuxInitMacSecBypass() 
    sample on how to call this mzdMacSecHmux8DemuxMod() API.

 Side effects:
    None

 Notes/Warnings:

*******************************************************************************/
MZD_FUNC MZD_STATUS mzdMacSecHmux8DemuxMod
(
    IN MZD_DEV_PTR pDev,
    IN MZD_OP_MODE opMode,
    IN MZD_BOOL lowerPortsPrimary,
    IN MZD_U32 hmux8Options
);


/* HMUX Arbiters */
#define MZD_HMUX_ARBITER_EGRESS                 0x0
#define MZD_HMUX_ARBITER_INGRESS                0x1
/*******************************************************************************
MZD_FUNC MZD_STATUS mzdHmuxArbiterReset
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_U16 arbiterSelect
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    laneOffset - lane number 0-3
    arbiterSelect - select which arbiter to control
        MZD_HMUX_ARBITER_EGRESS
        MZD_HMUX_ARBITER_INGRESS

 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not

 Description:
    This API reset the HMUX arbiter on the given lanes. Only the arbiter on the
    lane passed in will be reset.

    Please refer to the MAC and MACSec HMUX document for more information.

 Side effects:
    None

 Notes/Warnings:
    The MACsec block on the macsecMapPort MUST be enabled otherwise this API would fail.

    See the port mapping at the top of this file.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdHmuxArbiterReset
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_U16 arbiterSelect
);

/*******************************************************************
MZD_FUNC MZD_STATUS mzdHmuxArbiterPortReset
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not.

 Description:
    The HMUX arbiter port reset performs a arbiter reset on all 4 lanes on the pass-in mdioPort.
    This is used to clear all previously configured arbiter settings on all 4 lanes on a MDIO port. 
    The HMUX arbiter port reset should be applied before setting to the new speed. This applies 
    when the HMUX is configured on these modes.

    Below table listed the speed changes from high speed to low speed that requires calling
    the mzdHmuxArbiterPortReset.

    From Speed    To Speed
                    100GR4    100GR2    40GR4    50GR1    25GR1    10GR1    1GR1
     400GR8           X         X         X        X        X        X       X            
     200GR8           X         X         X        X        X        X       X              
     200GR4                     X                  X        X        X       X            

    Examples:
    Switching from HMUX8 400GR8 to 40GR4 mode; the following should be called
    to reset all 16 lanes on all 4 ports from the old 400GR8 mode to the new 40GR4:
    MZD_ATTEMPT(mzdHmuxArbiterPortReset(pDev, pDev->mdioPort));
    MZD_ATTEMPT(mzdHmuxArbiterPortReset(pDev, pDev->mdioPort+1));
    MZD_ATTEMPT(mzdHmuxArbiterPortReset(pDev, pDev->mdioPort+2));
    MZD_ATTEMPT(mzdHmuxArbiterPortReset(pDev, pDev->mdioPort+3));     

    Switching from HMUX4(Port0/1) 200GR4 to 100GR2 mode; the following should be called
    to reset all 8 lanes on all 2 ports from the old 200GR4 mode to the new 100GR2:
    MZD_ATTEMPT(mzdHmuxArbiterPortReset(pDev, pDev->mdioPort));
    MZD_ATTEMPT(mzdHmuxArbiterPortReset(pDev, pDev->mdioPort+1));

 Side effects:

 Notes/Warnings:
    It is safe to call mzdHmuxArbiterPortReset at the beginning to configure a HMUX4 or
    HMUX8 settings for any speeds. Make sure mzdHmuxArbiterPortReset is not called in the 
    middle of configuring HMUX4/8 since the mzdHmuxArbiterPortReset will reset the HMUX Arbiter.
*******************************************************************/
MZD_FUNC MZD_STATUS mzdHmuxArbiterPortReset
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort
);


/*******************************************************************************
MZD_FUNC MZD_STATUS mzdMacSecSelectHmuxType
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 macsecMapPort,
    IN MZD_U16 hmuxType,
    IN MZD_U16 hmuxOptions
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    macsecMapPort - the mapped MDIO port for MACSec operation,
                    HMUX requires control port to be Port 0 or Port 2,only used for HMUX4
    hmuxType - select HMUX4 or HMUX8 config
               MZD_HMUX4_TYPE
               MZD_HMUX8_TYPE
    lowerPortPrimary -
        MZD_HMUX4_TYPE:
        MZD_TRUE:  use the lower port as Primary port.
                   MAC0: P0 as Primary Port, P1 as Backup port
                   MAC1: P2 as Primary Port, P3 as Backup port
        MZD_FALSE: use the higher port as Primary port.
                   MAC0: P1 as Primary Port, P0 as Backup port
                   MAC1: P3 as Primary Port, P2 as Backup port
        MZD_HMUX8_TYPE:
        MZD_TRUE:  use the lower ports P0 and P1 as Primary ports,
                   P2 and P3 as Backup ports.
        MZD_FALSE: use the higher ports P2 and P3 as Primary ports,
                   P0 and P1 as Backup ports.
    hmux4Options - HMUX DEMUX options: (options can be ORed)
                   MZD_HMUX_OPT_DEFAULT
                   MZD_HMUX_OPT_DEMUX2
                   MZD_HMUX_OPT_DEMUX4
                   MZD_HMUX_OPT_PROTECTION_MODE

 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not

 Description:
    This API config MACsec registers to select type of HMUX and configure
    the HMUX DEMUX option.

    Refer to the MAC and MACSec HMUX document for more information.

 Side effects:
    None

 Notes/Warnings:
    See the port mapping at the top of this file.

    The MACsec block on the macsecMapPort MUST be enabled otherwise this API would fail.

    MZD_HMUX_OPT_DEMUX2 and MZD_HMUX_OPT_DEMUX4 cannot be used together.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdMacSecSelectHmuxType
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 macsecMapPort, /* Only used for HMUX4 */
    IN MZD_U16 hmuxType,
    IN MZD_BOOL lowerPortPrimary,
    IN MZD_U16 hmuxOptions
);

/*******************************************************************************
MZD_FUNC MZD_STATUS mzdMacSecHmuxArbiterState
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 macsecMapPort,
    OUT MZD_U16 *arbiterEgrState,
    OUT MZD_U16 *arbiterIngrState
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    macsecMapPort - the mapped MDIO port for MACSec operation
    arbiterEgrState - HMUX Egress arbiter state
    arbiterIngrState - HMUX Ingress arbiter state

 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not

 Description:
    This API read back the state machine value of the HMUX arbiter on the MACsec of the
    given port.

    Bit status and controls:
    15    -  Swap GPIO HMUX4 used for MACSEC1 HMUX4 applications; enable: GPIO1 control all switching
    14:13 -  GPIO trigger selector: 2'b0x: level trigger 2'b10: edge type A; 2'b11: edge type B
    12    -  Channel switch read back 0:Primary, 1:Backup (read only)
    11:8  -  arbiter state read back arbiter state status (read only)
    7     -  HMUX interrupt enable
    6     -  output GPIO enable
    5     -  GPIO_polarity output GPIO control
    4     -  GPIO_edge 0: rising edge trigger, 1: falling edge trigger
    3     -  GPIO enable GPIO mode to trigger HMUX
    2     -  HMUX manual start of traffic (read only)
    1     -  HMUX manual stop of traffic
    0     -  HMUX auto switch 0:active slot off, 1:active slot on

    Refer to the register datasheet for more details

 Side effects:
    None

 Notes/Warnings:
    The MACsec block on the macsecMapPort MUST be enabled otherwise this API would fail.

    This API mzdMacSecHmuxArbiterState() is not applicable on chip revision MZD_REV_A0

    See the port mapping at the top of this file.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdMacSecHmuxArbiterState
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 macsecMapPort,
    OUT MZD_U16 *arbiterEgrState,
    OUT MZD_U16 *arbiterIngrState
);

/*******************************************************************************
MZD_FUNC MZD_STATUS mzdMacSecHmuxBlockBackUpIngress
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 macsecMapPort,
    IN MZD_BOOL blockBackUpPorts
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    macsecMapPort - the mapped MDIO port for MACSec operation
    blockBackUpPorts - MZD_TRUE: block ingress traffic to backup ports
                       MZD_FALSE: do not block ingress traffic to backup ports

 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not
    Return MZD_FAIL if user is using a A0 chip

 Description:
    Provides an option to block ingress traffic to the backup ports. If not blocking,
    the HMUX ingress traffic will be direct to both primary ports and backup ports.

    This API must be called on the MACsec that configure HMUX arbiter.

 Side effects:
    None.

 Notes/Warnings:
    This API does not support A0 chip.

    This API applies on all ports of the mapped MAC/MACSec block and the block
    MUST be enabled, otherwise this API would fail.
    See the port mapping at the top of this file.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdMacSecHmuxBlockBackUpIngress
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 macsecMapPort,
    IN MZD_BOOL blockBackUpPorts
);

/*******************************************************************************
MZD_FUNC MZD_STATUS mzdMacSecHmuxTimeOut
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U32 hmuxTimeOutSel,
    IN MZD_U32 hmuxTimeOutSelOptions
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    hmuxTimeOutSel - specify HMUX timeout clock cycle
    hmuxTimeOutSelOptions - reserved for future use

 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not
    Return MZD_FAIL if user is using a A0 chip

 Description:
    Provides an option to set the timeout for HMUX switchover.

 Side effects:
    Please refers to document for the timeout value. A lower timeout will not
    guarantee fragment protection.

 Notes/Warnings:
    This API does not support A0 chip.

    This API applies on all ports of the mapped MAC/MACSec block and the block
    MUST be enabled, otherwise this API would fail.
    See the port mapping at the top of this file.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdMacSecHmuxTimeOut
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U32 hmuxTimeOutSel,
    IN MZD_U32 hmuxTimeOutSelOptions
);

/*******************************************************************************
MZD_FUNC MZD_STATUS mzdMacSecManualHmuxStopTraffic
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 macsecMapPort
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    macsecMapPort - the mapped MDIO port for MACSec operation

 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not

 Description:
    If traffic is running on primary port, call this Manual Switch API to issue
    a Manual HMUX Stop on primary port.

    User needs to wait for traffic to stop before issuing a Manual HMUX Start
    on backup port by calling mzdMacSecManualHmuxStartTraffic().

    This applies to the backup port vice versa if the traffic is running on backup port
    when calling this API. This API will issue a Manual HMUX Stop on the backup port.

 Side effects:
    None

 Notes/Warnings:
    The MACsec block on the macsecMapPort MUST be enabled otherwise this API would fail.

    Note that mzdMacSecHmuxAutoSwitch() should be used in most cases for HMUX switching. The
    mzdMacSecHmuxAutoSwitch() has all the build-in logic in the device to handle the stop/start
    and switching.

    The mzdMacSecManualHmuxStopTraffic() and mzdMacSecManualHmuxStartTraffic() are mainly 
    for HMUX diagnostic used.

    This API applies on all ports of the mapped MAC/MACSec block.
    See the port mapping at the top of this file.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdMacSecManualHmuxStopTraffic
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 macsecMapPort
);

/*******************************************************************************
MZD_FUNC MZD_STATUS mzdMacSecManualHmuxStartTraffic
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 macsecMapPort
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    macsecMapPort - the mapped MDIO port for MACSec operation

 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not

 Description:
    If traffic was running on primary port, call this Manual Switch API to issue
    a Manual HMUX Start on backup port.

    User needs to wait for traffic to stop before calling this API to issue
    a Manual HMUX Start on backup port.

    This applies to the backup port vice versa if the traffic was running on backup port
    when calling this API. This API will issue a Manual HMUX Start on the primary port.


 Side effects:
    None

 Notes/Warnings:
    The MACsec block on the macsecMapPort MUST be enabled otherwise this API would fail.

    Note that mzdMacSecHmuxAutoSwitch() should be used in most cases for HMUX switching. The
    mzdMacSecHmuxAutoSwitch() has all the build-in logic in the device to handle the stop/start
    and switching.

    The mzdMacSecManualHmuxStopTraffic() and mzdMacSecManualHmuxStartTraffic() are mainly 
    for HMUX diagnostic used.

    This API applies on all ports of the mapped MAC/MACSec block.
    See the port mapping at the top of this file.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdMacSecManualHmuxStartTraffic
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 macsecMapPort
);

/*******************************************************************************
MZD_FUNC MZD_STATUS mzdMacSecHmuxAutoSwitch
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 macsecMapPort
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    macsecMapPort - the mapped MDIO port for MACSec operation

 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not

 Description:
    If traffic is running on primary port, call this Auto Switch API to switch traffic
    to the backup port on the mapped MACSec.

    Auto Switch sets the state machine to wait for traffic stop on 
    the primary port then automatically start traffic on(switch to) the backup port.

    This applies to the backup port vice versa if the traffic is running on backup port
    when calling this API.
 
 Side effects:
    None

 Notes/Warnings:
    The MACsec block on the macsecMapPort MUST be enabled otherwise this API would fail.

    This API applies on all ports of the mapped MAC/MACSec block.
    See the port mapping at the top of this file.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdMacSecHmuxAutoSwitch
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 macsecMapPort
);

/*******************************************************************************
MZD_FUNC MZD_STATUS mzdMacSecHmuxAutoSwitchDisable
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 macsecMapPort
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    macsecMapPort - the mapped MDIO port for MACSec operation

 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not

 Description:
    This API sets the HMUX auto switching to disable. This API will reverse the
    mzdMacSecHmuxAutoSwitch() operation to set the HMUX auto switching to disable.

    HMUX auto switching is disabled by default

    This applies to the backup port vice versa if the traffic is running on backup port
    when calling this API.
 
 Side effects:
    None

 Notes/Warnings:
    The MACsec block on the macsecMapPort MUST be enabled otherwise this API would fail.

    This API applies on all ports of the mapped MAC/MACSec block.
    See the port mapping at the top of this file.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdMacSecHmuxAutoSwitchDisable
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 macsecMapPort
);

#define MZD_HMUX_GPIO_LEVEL_TRIGGER   0x0
#define MZD_HMUX_GPIO_EDGE_A_TRIGGER  0x1
#define MZD_HMUX_GPIO_EDGE_B_TRIGGER  0x3

typedef struct
{
    MZD_U8 enableChipGPIOCntl;    /* enable signal to chip level GPIO control */
    MZD_U8 enableGPIO1CntlSw;     /* used for MACSec1 HMUX4 applications */
                                  /* enable: GPIO1 control all switching */
    MZD_U8 inputGPIOPolarityInv;  /* GPIO input: polarity inversion */
    MZD_U8 outputGPIOPolarityInv; /* GPIO output: polarity inversion */
} MZD_HMUX_GPIO_SWITCH_CNTL; 


/*******************************************************************************
MZD_FUNC MZD_STATUS mzdMacSecHmuxGPIOSwitchCntlEx
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 macsecMapPort,
    IN MZD_U16 enableHmuxToggle,
    IN MZD_U16 gpioTriggerSel,
    IN MZD_HMUX_GPIO_SWITCH_CNTL hmuxGPIOSwitchCntl (optional)
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    macsecMapPort - the mapped MDIO port for MACSec operation
    enableHmuxToggle -  enable signal for HMUX toggling
                        1:enable; 0:disabled(Default)
    gpioTriggerSel -  0x0: level trigger - MZD_HMUX_GPIO_LEVEL_TRIGGER (Default)
                      0x1: edge type A   - MZD_HMUX_GPIO_EDGE_A_TRIGGER 
                      0x3: edge type B   - MZD_HMUX_GPIO_EDGE_B_TRIGGER
    hmuxGPIOSwitchCntl - refer to MZD_HMUX_GPIO_SWITCH_CNTL (optional additional settings)

    typedef struct
    {
        MZD_U8 enableChipGPIOCntl;    - enable signal to chip level GPIO control
        MZD_U8 enableGPIO1CntlSw;     - used for MACSec1 HMUX4 applications
                                      - enable: GPIO1 control all switching
        MZD_U8 inputGPIOPolarityInv;  - GPIO input: polarity inversion
        MZD_U8 outputGPIOPolarityInv; - GPIO output: polarity inversion 
    } MZD_HMUX_GPIO_SWITCH_CNTL;

 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not

 Description:
    This API is only applicable for MZD_REV_C0 only. This feature does not require 
    firmware support. For MZD_REV_B0 device, use mzdMacSecHmuxGPIOSwitchCntl().

    This API provide the GPIO feature to trigger HMUX switch between primary ports and 
    backup ports.

    gpioTriggerSel options:
       GPIO is directly connected to HMUX FSM and level detect and edge detect have both 
       been implemented. We support the following three ways to use GPIO toggle.

       1-Level Trigger: MZD_HMUX_GPIO_LEVEL_TRIGGER 
           If GPIO = 0, trigger backup -> primary. If on primary side, do nothing.
           If GPIO = 1, trigger primary -> backup. If on backup side, do nothing

       2-Edge Trigger Type A: MZD_HMUX_GPIO_EDGE_A_TRIGGER 
          Rising Edge of GPIO (0 to 1) triggers primary <-> backup

       3-Edge Trigger Type B: MZD_HMUX_GPIO_EDGE_B_TRIGGER 
          Rising Edge of GPIO (0 to 1) triggers primary -> backup. If backup, do nothing
          Falling Edge of GPIO (1 to 0) triggers backup -> primary. If primary, do nothing. 

    GPIO HMUX switching behavior:
    GPIO chip level input toggle control is assigned as follows
        1) GPIO1 controls HMUX8 MACSec0/1 and HMUX4 MACSec0
        2) GPIO3 control HMUX4 MACSec1 (there is a register option to have GPIO1 control 
                                         HMUX4 MACSec1)
    GPIO chip level output status indicator is assigned as follows
        1) GPIO2 is output of MACSec0
        2) GPIO4 is output of MACSec1
    GPIO output status is toggled high whenever we are done switching. 
        1) Initially, when traffic is first sent on Primary side, GPIO status will be 1. 
        2) At GPIO trigger, the value will de-assert to 0.
        3) When switching action is COMPLETE and traffic is READY to be sent on the other side, 
           the GPIO status will toggle to 1. 
        4) Steps 2-3 are repeated.  
 
 Side effects:
    None

 Notes/Warnings:
    This API is only applicable for MZD_REV_C0 only. This feature does not require firmware
    support. For MZD_REV_B0 device, use mzdMacSecHmuxGPIOSwitchCntl().

    The MACsec block on the macsecMapPort MUST be enabled otherwise this API would fail.

    This API applies on all ports of the mapped MAC/MACSec block.
    See the port mapping at the top of this file.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdMacSecHmuxGPIOSwitchCntlEx
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 macsecMapPort,
    IN MZD_U16 enableHmuxToggle,
    IN MZD_U16 gpioTriggerSel,
    IN MZD_HMUX_GPIO_SWITCH_CNTL hmuxGPIOSwitchCntl /* optional features */
);

#define MZD_HMUX_GPIO_RISING_EDGE         0x0
#define MZD_HMUX_GPIO_FALLING_EDGE        0x1
/*******************************************************************************
MZD_FUNC MZD_STATUS mzdMacSecHmuxGPIOSwitchCntl
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 macsecMapPort,
    IN MZD_U16 enable,
    IN MZD_U16 edgeDetect
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    macsecMapPort - the mapped MDIO port for MACSec operation
    enable - MZD_ENABLE:  enable GPIO edge switching
             MZD_DISABLE: disable GPIO edge switching
    edgeDetect - control the edge type to trigger switching
                 MZD_HMUX_GPIO_RISING_EDGE
                 MZD_HMUX_GPIO_FALLING_EDGE

 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not

 Description:
    This API is only applicable for MZD_REV_B0. Use mzdMacSecHmuxGPIOSwitchCntlEx() 
    for MZD_REV_C0. 

    User can use GPIO to trigger HMUX switch between primary ports and backup ports.
    The GPIO switching is configured edge trigger by calling this API.

    Traffic will always start on PRIMARY and only a toggle from GPIO = 0 to GPIO = 1 
    would switch to opposite side (register option to select negative edge 
    detect: GPIO = 1 to GPIO = 0).

    Please see mzdIntrIOConfig.h for I/O pin control APIs.

    MZD_PIN_GPIO1: Trigger for HMUX8 on MACSec0 and MACSec1, or HMUX4 on MACSec0
    MZD_PIN_GPIO3: Trigger for HMUX4 on MACsec1 (work-in-progress)
 
 Side effects:
    None

 Notes/Warnings:
    This API is only applicable for MZD_REV_B0. Use mzdMacSecHmuxGPIOSwitchCntlEx() 
    for MZD_REV_C0 

    The MACsec block on the macsecMapPort MUST be enabled otherwise this API would fail.

    User should call mzdSetPinMode() first to set the MZD_PIN_GPIO1/MZD_PIN_GPIO3 to
    GPIO function and call mzdSetGPIOPinDirection() to configure input direction.

    This API applies on all ports of the mapped MAC/MACSec block.
    See the port mapping at the top of this file.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdMacSecHmuxGPIOSwitchCntl
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 macsecMapPort,
    IN MZD_U16 enable,
    IN MZD_U16 edgeDetect
);

/*******************************************************************************
MZD_FUNC MZD_STATUS mzdMacSecHmuxLevelGPIOSwitchCntl
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 enable
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    enable - MZD_ENABLE:  enable GPIO level switching
             MZD_DISABLE: disable GPIO level switching

 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not

 Description:
    This is a firmware assist HMUX GPIO switch control feature. It requires the  
    supported chip firmware version 0.2.7.0 and newer.

    User can use GPIO to trigger HMUX switch between primary ports and backup ports.
    The GPIO switching is configured level trigger by calling this API.
    User DO NOT need to configure GPIO pin separately when this API is called.

    MZD_PIN_GPIO1: Trigger for HMUX8 on MACSec0 and MACSec1, or HMUX4 on MACSec0
    MZD_PIN_GPIO3: Trigger for HMUX4 on MACsec1 (work-in-progress)
    
 Side effects:
    None

 Notes/Warnings:
    If user change the PIN mode by mzdSetPinMode() or change GPIO direction by
    mzdSetGPIOPinDirection(). The GPIO level switching would fail.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdMacSecHmuxLevelGPIOSwitchCntl
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 enable
);

/*******************************************************************************
MZD_FUNC MZD_STATUS mzdMacSecHmuxProtectionTimer 
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 timeMsec
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    timeMsec - count down timer in millisec for HMUX protection mode 

 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not

 Description:
    The count down wait timer in millisec used in mzdMacSecHmuxProtectionCntl() for 
    HMUX protection mode. This is the interval to avoid sending the local fault to 
    line side link partner during the HMUX switch over. 
    
 Side effects:
    None

 Notes/Warnings:
    This is a firmware assist protection mode for HMUX switch feature. It requires the  
    supported chip firmware version 0.2.11.0 and newer.

*******************************************************************************/
MZD_FUNC MZD_STATUS mzdMacSecHmuxProtectionTimer
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 timeMsec
);

/*******************************************************************************
MZD_FUNC MZD_STATUS mzdMacSecHmuxProtectionCntl
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 enable
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    enable -  MZD_ENABLE:  enable protection mode for HMUX 
              MZD_DISABLE: disable protection mode for HMUX

 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not

 Description:
    This API enables/disables the protection mode local fault sending to line side when 
    HMUX switching between the primary and backup ports. This GPIO_1 pin will be triggered.
    The GPIO0_CNTL control, MZD_GPIO0_CNTL(31.F437), for GPIO_1 pin is configured in this API.

    Once GPIO_1 pin triggers with interrupt on High Level, the timer will start. The protection 
    enabled HMUX switch is based on GPIO_1 pin level (0=Primary; 1=Secondary). When the time out 
    expires, it disables the protection. The 3.3.0xF094.8=1 when completed.

    This API uses the countdown wait timer from mzdMacSecHmuxProtectionTimer() to 
    avoid sending the local fault to line side link partner during the HMUX switch over. 

 Side effects:
    None

 Notes/Warnings:
    This is a firmware assist protection mode for HMUX switch feature. It requires the  
    supported chip firmware version 0.2.19.0 and newer.    
    
    The APIs mzdMacSecHmuxLevelGPIOSwitchCntl() and mzdMacSecHmuxProtectionCntl() are mutually 
    exclusive. Both these calls cannot be enabled at the same time.

    This API uses the APB access semaphore which is enabled when this API is called.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdMacSecHmuxProtectionCntl
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 enable
);

#define MZD_HMUX_GPIO_OUTPUT_DEFAULT      0x0
#define MZD_HMUX_GPIO_OUTPUT_INVERT       0x1
/*******************************************************************************
MZD_FUNC MZD_STATUS mzdMacSecHmuxStatusOutputCntl
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 macsecMapPort,
    IN MZD_U16 enable,
    IN MZD_U16 polarity
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    macsecMapPort - the mapped MDIO port for MACSec operation
    enable - MZD_ENABLE:  enable GPIO switch
             MZD_DISABLE: disable GPIO switch
    polarity - control the output signal polarity
               MZD_HMUX_GPIO_OUTPUT_DEFAULT
               MZD_HMUX_GPIO_OUTPUT_INVERT

 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not

 Description:
    User can use GPIO to output HMUX switch status to indicate if the traffic
    is running on primary ports or backup ports.

    This API enables this feature and configure the polarity of output.
    Please see mzdIntrIOConfig.h for I/O pin control APIs.

    MZD_PIN_GPIO2: HMUX switch status for MACSec0
    MZD_PIN_GPIO4: HMUX switch status for MACSec1

    GPIO output status is toggled high whenever we are done switching. 
    - Initially, when traffic is first sent on Primary side, GPIO status will be 1. 
    - At GPIO trigger, the value will de-assert to 0.
    - When switching action is COMPLETE and traffic is READY to be sent on the 
      other side, the GPIO status will toggle to 1. 
    - Steps 2-3 are repeated.  

 Side effects:
    None

 Notes/Warnings:
    The MACsec block on the macsecMapPort MUST be enabled otherwise this API would fail.

    User should call mzdSetPinMode() first to set the MZD_PIN_GPIO2/MZD_PIN_GPIO4 to
    GPIO function and call mzdSetGPIOPinDirection() to configure output direction.
   
    This API applies on all ports of the mapped MAC/MACSec block.
    See the port mapping at the top of this file.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdMacSecHmuxStatusOutputCntl
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 macsecMapPort,
    IN MZD_U16 enable,
    IN MZD_U16 polarity
);

/*******************************************************************************
MZD_FUNC MZD_STATUS mzdMacTxFifoReset
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    host_or_line - which interface is being checked:
                   MZD_HOST_SIDE
                   MZD_LINE_SIDE
    laneOffset - 0..3 for lanes 0-3. 

 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL

 Description:
    This API resets the MAC Tx FIFO on either the line or the host side on the
    provided lane offset.

 Side effects:
    None

 Notes/Warnings:
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdMacTxFifoReset
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset
);

/*******************************************************************************
MZD_FUNC MZD_STATUS mzdMacInsertTxCRC
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_BOOL insertTxCRC
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    laneOffset - 0..3 for lanes 0-3. Ignored for high speeds
                 For high speeds 200G and above, set lane offset to 0.
    insertTxCRC - MZD_TRUE or MZD_FALSE to inserted CRC to Tx frame

 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL

 Description:
    If set to MZD_TRUE, the CRC will be inserted to the transmit frame 
    to the user application. If set to MZD_FALSE(default value), the CRC field is  
    not inserted.
 
    MAC default setting is to strip CRC upon receiving and add CRC upon transmission. 
    To retain CRC, CRC_FWD(mzdMacForwardRxCRC forwardRxCRC=true) is enabled on MAC RX,  
    and CRC insertion(mzdMacInsertTxCRC insertTxCRC=false) is disabled on MAC Tx. 

 Side effects:
    None

 Notes/Warnings:
    For high speeds 200G and above, set lane offset to 0.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdMacInsertTxCRC
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_BOOL insertTxCRC
);

/*******************************************************************************
MZD_FUNC MZD_STATUS mzdMacForwardRxCRC
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_BOOL forwardRxCRC
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    laneOffset - 0..3 for lanes 0-3. Ignored for high speeds
                 For high speeds 200G and above, set lane offset to 0.
    forwardRxCRC - MZD_TRUE or MZD_FALSE to forward CRC to Rx frame

 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL

 Description:
   If set to MZD_TRUE, the CRC field of received frames is forwarded with the frame 
   to the user application. If set to MZD_FALSE(default value), the CRC field is  
   stripped from the frame.

   MAC default setting is to strip CRC upon receiving and add CRC upon transmission. 
   To retain CRC, CRC_FWD(mzdMacForwardRxCRC set true) is enabled on MAC RX, and 
   CRC insertion(mzdMacInsertTxCRC set false) is disabled on MAC Tx. 

 Side effects:
    None

 Notes/Warnings:
    For high speeds 200G and above, set lane offset to 0.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdMacForwardRxCRC
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_BOOL forwardRxCRC
);

#define MZD_FLOW_CNTL_NO_DEMUX 0x0
#define MZD_FLOW_CNTL_DEMUX2   0x1
#define MZD_FLOW_CNTL_DEMUX4   0x2
/*******************************************************************************
MZD_FUNC MZD_STATUS mzdMacFlowControl
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_U16 flowCntlOption,
    IN MZD_U16 enableFlag
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    laneOffset - 0..3 for lanes 0-3 of the host-side; 
                 For high speeds 200G and above, set lane offset to 0.
    flowCntlOption - MZD_FLOW_CNTL_NO_DEMUX, MZD_FLOW_CNTL_DEMUX2 or MZD_FLOW_CNTL_DEMUX4
    enableFlag - MZD_ENABLE or MZD_DISABLE 

 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL

 Description:
   This API can be used to disable or enable the flow control. The MAC flow control  
   is enabled by default. The flowCntlOption is used to determine the matching egress  
   line-side lane to set the flow control. 
   
   Select the following flowCntlOption when calling this API:
   MZD_FLOW_CNTL_NO_DEMUX - No HMUX or HMUX without DEMUX is used in the configuration
   MZD_FLOW_CNTL_DEMUX2   - HMUX4/HMUX8 with DEMUX2 used in the configuration
   MZD_FLOW_CNTL_DEMUX4   - HMUX8 with DEMUX4 used in the configuration

   The API input laneOffset is for the host side.  

 Side effects:
    None

 Notes/Warnings:
    For high speeds 200G and above, set lane offset to 0.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdMacFlowControl
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_U16 flowCntlOption,
    IN MZD_U16 enableFlag
);

/*******************************************************************************
MZD_FUNC MZD_STATUS mzdMacHighSpeedSmallPacketMod
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31

 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not

 Description:
    This API provides an enhancement to support smaller packet with packet size lesser 
    than 64B in a high speed setting.  High speed mode is 200G and higher.

    This API should be called after the mzdMacSecMacInit() initialization to modify the
    default setting to support smaller packets.

 Side effects:
    None

 Notes/Warnings:
    None.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdMacHighSpeedSmallPacketMod
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort
);


/*******************************************************************************
MZD_FUNC MZD_STATUS mzdMacLowSpeedSmallPacketMod
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    laneOffset - lane number 0-3 or MZD_ALL_LANES
                 MZD_ALL_LANES - all lanes on the given port

 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not

 Description:
    This API provides an enhancement to support smaller packet with packet size lesser 
    than 64B in a low speed setting.  Low speed mode is 100G and lower.

    This API should be called after the mzdMacSecMacInit() initialization to modify the
    default setting to support smaller packets.

 Side effects:
    None

 Notes/Warnings:
    None.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdMacLowSpeedSmallPacketMod
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset
);

/*******************************************************************************
MZD_FUNC MZD_STATUS mzdMacBypassEIP218
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_BOOL bypass
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    bypass - MZD_TRUE will bypass EIP218 block
             MZD_FALSE will not bypass EIP218 block

 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not

 Description:
    This API provides an option to bypass the MACSec rate controller EIP218 block.
    This block is necessary for MACSec encryption operations. If MACSec encryption  
    is not used, the EIP218 block can be bypassed.

 Side effects:
    None

 Notes/Warnings:
    The MACSec block needs to be enabled to successfully call this API. Otherwise,
    the EIP218 register is not accessible.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdMacBypassEIP218
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_BOOL bypass
);

#if 0
typedef enum {
    MZD_RATE_MODE_CNTL_OFF,
    MZD_RATE_MODE_FIXED_IPG,
    MZD_RATE_MODE_ALIGNED_IFG,
    MZD_RATE_MODE_DIC
} MZD_RATE_CNTL_MODE;

/*******************************************************************************
MZD_FUNC MZD_STATUS mzdMacSecMacRateCntlSel
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_OP_MODE opMode,
    IN MZD_RATE_CNTL_MODE rateCntlMode
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    laneOffset - lane number 0-3 or MZD_ALL_LANES
                 MZD_ALL_LANES - all lanes on the given port
    opMode - operational mode needed to set the MAC rate control mode registers accordingly
             as well as setting the multiple lanes for PCS modes that operated on multiple lanes.
    rateCntlMode - list of options in MZD_RATE_CNTL_MODE

 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not

 Description:
    This API sets the MAC rate control mode option from the MZD_RATE_CNTL_MODE list of selections

 Side effects:
    None

 Notes/Warnings:
    None.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdMacSecMacRateCntlSel
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_OP_MODE opMode,
    IN MZD_RATE_CNTL_MODE rateCntlMode
);
#endif
#if C_LINKAGE
#if defined __cplusplus
}
#endif
#endif

#endif /* defined MZD_MAC_API_H */
