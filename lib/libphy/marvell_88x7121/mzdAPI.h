/*******************************************************************************
Copyright (c) 2014 Marvell.
If you received this File from Marvell and you have entered into a commercial
license agreement (a "Commercial License") with Marvell, the File is licensed
to you under the terms of the applicable Commercial License.
*******************************************************************************/

/********************************************************************
This file contains function prototypes for mode selections, interrupts
and real-time controls, configurations and status for the 
Marvell X7121 PHY.
********************************************************************/
#ifndef MZD_API_H
#define MZD_API_H
#if C_LINKAGE
#if defined __cplusplus
    extern "C" {
#endif
#endif

#define MZD_API_MAJOR_VERSION 2
#define MZD_API_MINOR_VERSION 6
#define MZD_API_BUILD_ID      0

/* These macros are handy for calling a function when you want to test the
   return value and return MZD_FAIL, if the function returned MZD_FAIL,
   otherwise continue */
#ifndef MZD_ATTEMPT
#define MZD_ATTEMPT(xFuncToTry) {if(xFuncToTry != MZD_OK)                                                 \
                             {MZD_DBG_ERROR("ATTEMPT failed at %s: line:%u\n",__FUNCTION__,__LINE__); \
                             return MZD_FAIL;}}
#endif

#ifndef MZD_CHECK_DEV
#define MZD_CHECK_DEV(XpDev, XmdioPort, XlaneOffset)                                                          \
        {                                                                                                     \
            if (!XpDev)                                                                                       \
            {   MZD_DBG_ERROR("MZD_CHECK_DEV: pDev is NULL; failed at %s: line:%u\n", __FUNCTION__,__LINE__); \
                return MZD_FAIL;}                                                                             \
                                                                                                              \
            if (!XpDev->devEnabled)                                                                           \
            {   MZD_DBG_ERROR("MZD_CHECK_DEV: pDev->devEnabled is not initialized; failed at %s: line:%u\n",  \
                                __FUNCTION__,__LINE__);                                                       \
                return MZD_FAIL;}                                                                             \
                                                                                                              \
            if ((XmdioPort < XpDev->mdioPort) || (XmdioPort >= (XpDev->mdioPort + XpDev->portCount)))         \
            {   MZD_DBG_ERROR("MZD_CHECK_DEV: invalid mdioPort number:%u; failed at %s: line:%u\n",           \
                              XmdioPort, __FUNCTION__,__LINE__);                                              \
                return MZD_FAIL;}                                                                             \
                                                                                                              \
            if (XlaneOffset >= MZD_NUM_LANES)                                                                 \
            {   MZD_DBG_ERROR("MZD_CHECK_DEV: incorrect lane offset: %u at %s: line:%u\n",                    \
                              XlaneOffset, __FUNCTION__,__LINE__);                                            \
               return MZD_FAIL;}                                                                              \
        }
#endif

#ifndef MZD_CHECK_DEV_LANES
#define MZD_CHECK_DEV_LANES(XpDev, XmdioPort, XlaneOffset)                                                           \
        {                                                                                                            \
            if (!XpDev)                                                                                              \
            {   MZD_DBG_ERROR("MZD_CHECK_DEV_LANES: pDev is NULL; failed at %s: line:%u\n", __FUNCTION__,__LINE__);  \
                return MZD_FAIL;}                                                                                    \
                                                                                                                     \
            if (!XpDev->devEnabled)                                                                                  \
            {   MZD_DBG_ERROR("MZD_CHECK_DEV_LANES: pDev->devEnabled is not initialized; failed at %s: line:%u\n",   \
                                __FUNCTION__,__LINE__);                                                              \
                return MZD_FAIL;}                                                                                    \
                                                                                                                     \
            if ((XmdioPort < XpDev->mdioPort) || (XmdioPort >= (XpDev->mdioPort + XpDev->portCount)))                \
            {   MZD_DBG_ERROR("MZD_CHECK_DEV_LANES: invalid mdioPort number:%u; failed at %s: line:%u\n",            \
                              XmdioPort, __FUNCTION__,__LINE__);                                                     \
                return MZD_FAIL;}                                                                                    \
                                                                                                                     \
            if (XlaneOffset >= MZD_NUM_LANES && XlaneOffset != MZD_ALL_LANES)                                        \
            {   MZD_DBG_ERROR("MZD_CHECK_DEV_LANES: incorrect lane offset: %u at %s: line:%u\n",                     \
                              XlaneOffset, __FUNCTION__,__LINE__);                                                   \
               return MZD_FAIL;}                                                                                     \
        }
#endif

#ifndef MZD_CHECK_DEV_SIDE
#define MZD_CHECK_DEV_SIDE(XpDev, XmdioPort, XlaneOffset, XhostLineSel)                                 \
        {                                                                                               \
            MZD_CHECK_DEV(XpDev, XmdioPort, XlaneOffset);                                               \
                                                                                                        \
            if (!(XhostLineSel == MZD_HOST_SIDE || XhostLineSel == MZD_LINE_SIDE))                      \
            {   MZD_DBG_ERROR("MZD_CHECK_DEV_SIDE: incorrect host/side selection: %u at %s: line:%u\n", \
                              XhostLineSel, __FUNCTION__,__LINE__);                                     \
               return MZD_FAIL;}                                                                        \
        }
#endif

#define MZD_IDENTIFIER_NOT_USED(xVar)  (MZD_VOID)(xVar)

/* MZD error status for mode selection */
#define MZD_STATUS_MODE_SUCCESS            0x0  /* Mode selection completed successfully */
#define MZD_STATUS_MODE_GENERAL_ERROR      0x1  /* Mode selection general error */
#define MZD_STATUS_MODE_RECONFIG_ERROR     0x2  /* Error when setting a new mode with a lane count */
                                                /* mismatch to the existing operational mode */
#define MZD_STATUS_MODE_NON_GROUP_ERROR    0x3  /* Individual non-grouped lane mode selected in grouped mode */
#define MZD_STATUS_MODE_HOST_LINE_ERROR    0x4  /* Combination of host and line mode selection invalid */
#define MZD_STATUS_MODE_OPTION_ERROR       0x5  /* Combination of mode option is invalid */
#define MZD_STATUS_MODE_NOT_SUPPORTED      0x6  /* Mode not supported for device */

/******************************************************************************
MZD_VOID mzdGetAPIVersion
(
    OUT MZD_U8 *major,
    OUT MZD_U8 *minor,
    OUT MZD_U8 *buildID
)

 Inputs:
    None

 Outputs:
    major - major version number
    minor - minor version number
    buildID - build ID for the API

 Returns:
    None
    
 Description:
    Returns the version and build ID numbers of this API. The non-zero build ID 
    is used for test and preview releases.  General release build ID is 0.

 Side effects:
    None

 Notes/Warnings:
    None

******************************************************************************/
MZD_VOID mzdGetAPIVersion
(
    OUT MZD_U8 *major,
    OUT MZD_U8 *minor,
    OUT MZD_U8 *buildID
);


/* mzdSetModeSelection Mode Option List
     
     usage:
     status = mzdSetModeSelection(pDev, mdioPort, laneOffset, hostMode, lineMode, 
                                  (MZD_MODE_FORCE_RECONFIG | MZD_MODE_SQUELCH_SERDES_TX), 
                                  modeOptionSt, &result); 
*/

/*  Mode Option List */
#define MZD_MODE_FORCE_RECONFIG   (1<<0) /* force override current operational mode;
                                            this option needs to be set when switching 
                                            between modes of different number of lane used.  
                                            e.g. changing from a 2-lane MZD_P100UP2 to a 1-lane 
                                            P50UP on the same port and laneOffset */
#define MZD_MODE_RETIMER_BM_MODE  (1<<1) /* option to set Repeater Bit-Mux BM Modes; require to provide */
                                         /* the Line/Host Repeater modes of different lane count */
                                         /* BM21 mode current support for MZD_R100U1 and MZD_R100U2 only */
                                         /* This option does not apply to X7121 A0 device */
#define MZD_MODE_HOST_SEND_LF     (1<<2) /* option for host side to send local fault until line side linkup;
                                            check if remote PCS link or DSP lock is dropped, force disengage 
                                            if needed. Apply only to PCS modes */
#define MZD_MODE_SQUELCH_SERDES_TX (1<<3) /* option to call API_C112GX4_SetTxOutputEnable to squelch/un-squelch 
                                             the SerDes Tx before and after the mode setting to allow a clean 
                                             transition from squelch to full amplitude */

/* Delay for MZD_MODE_SQUELCH_SERDES_TX option */
#define MZD_MODE_SQUELCH_SERDES_TX_DELAY  200 /* Default 200ms delay is added before re-enabling the API_C112GX4_SetTxOutputEnable; 
                                                 the squelchTxDelay option is available to change this delay, refer to squelchTxDelay 
                                                 in MZD_MODE_OPTION_STRUCT structure */

/******************************************************************************
MZD_FUNC MZD_STATUS mzdSetModeSelection
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16     mdioPort,
    IN MZD_U16     laneOffset,
    IN MZD_OP_MODE hostMode,
    IN MZD_OP_MODE lineMode,
    IN MZD_U32     modeOptionSel,
    IN MZD_MODE_OPTION_STRUCT modeOption,
    OUT MZD_U16    *result
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort   - MDIO port address 0...31 of mdioPort to be configured
    laneOffset - lane 0 to lane 3
    hostMode   - host operational mode(configuration)
    lineMode   - line operational mode(configuration)
    modeOptionSel - optional; one or more mode option from Mode Option List  
    modeOption - optional mode parameters used when modeOptionSel is set
 Outputs:
    result -  Returns 0 if mode selection is successful. Otherwise an error result
              will be returned.
              MZD_STATUS_MODE_SUCCESS
              MZD_STATUS_MODE_GENERAL_ERROR
              MZD_STATUS_MODE_RECONFIG_ERROR - Error when setting a new mode with a lane count
                                               mismatch to the existing operational mode.
              MZD_STATUS_MODE_HOST_LINE_ERROR - Combination of host and line mode
                                                selection invalid
 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not

 Description:
    This function provides an option to select the operational mode for both
    host and line interfaces. This function uses the MZD_OP_MODE selection 
    to configure each host and line interfaces. Refer to the MZD_OP_MODE structure 
    definition for more details on the available modes and descriptions. 

    Note that an error status will be returned if the provided mode combination 
    is invalid for the host and line interfaces.

    The MZD_MODE_FORCE_RECONFIG option is required if switching modes of different
    lane count or the existing operational mode was set using the mzdSetInterfaceUserMode()
    API. The existing operational mode in the device structure(pDev) will be reset
    with this option.

    The modeOptionSel provides an option to customize certain mode setting with 
    pre-defined values for the MZD_MODE_OPTION_STRUCT structure. Refer to the 
    "Mode Option List" for the mode option selections.  

 Side effects:
    The current link state will be interrupted and reset to the requested operational 
    mode
    
 Notes/Warnings:
    Each line and host interfaces has 4 SerDes lanes.  Each individual SerDes lane can 
    operate at different speed for speeds between 1G to 100G.  
    
    Refer to the datasheet for the number of lane used in the mode. For 200G, only 
    lane offset 0 and 2 should be used when calling this API. For 400G, only 
    lane offset 0 should be used.

    Note that if MZD_MODE_SQUELCH_SERDES_TX option is used and this mzdSetModeSelection() fails, 
    API_C112GX4_SetTxOutputEnable() will either need to be called to re-enable the Tx or the
    following mzdSetModeSelection() must have the MZD_MODE_SQUELCH_SERDES_TX option.

******************************************************************************/
MZD_FUNC MZD_STATUS mzdSetModeSelection
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16     mdioPort,
    IN MZD_U16     laneOffset,
    IN MZD_OP_MODE hostMode,
    IN MZD_OP_MODE lineMode,
    IN MZD_U32     modeOptionSel,
    IN MZD_MODE_OPTION_STRUCT modeOption,
    OUT MZD_U16    *result
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdSetInterfaceUserMode
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16     mdioPort,
    IN MZD_U16     host_or_line,
    IN MZD_U16     laneOffset,
    IN MZD_OP_MODE opMode,
    IN MZD_U32     modeOptionSel,
    IN MZD_MODE_OPTION_STRUCT modeOption,
    OUT MZD_U16    *result
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort   - MDIO port address 0...31 of mdioPort to be configured
    host_or_line - which interface is being configured:
      MZD_HOST_SIDE
      MZD_LINE_SIDE
    laneOffset - lane 0 to lane 3
    opMode   - operational mode(configuration)
    modeOptionSel - optional; one or more mode option from Mode Option List  
    modeOption - optional mode parameters used when modeOptionSel is set
 Outputs:
    result -  Returns 0 if mode selection is successful. Otherwise an error result
              will be returned.
              MZD_STATUS_MODE_SUCCESS
              MZD_STATUS_MODE_GENERAL_ERROR
              MZD_STATUS_MODE_RECONFIG_ERROR - Error when setting a new mode with a lane count
                                               mismatch to the existing operational mode.
 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not

 Description:
    This function provides an option to select the operational mode for the given interface
    instead of both interfaces. For example, this API can be used when using HMUX DeMux features.
    Otherwise, it is recommended to call mzdSetModeSelection() for the mode setting.

    Refer to the MZD_OP_MODE structure definition for more details on the available modes
    and descriptions.

    This API DOES NOT check for mode combination on Host and Line side. However, an error status
    will be returned if the provided mode is invalid.

    The MZD_MODE_FORCE_RECONFIG option is required if switching modes of different
    lane count or the existing operational mode was set using this API. The existing
    operational mode in the device structure(pDev) will be reset with this option.

    The modeOptionSel provides an option to customize certain mode setting with
    pre-defined values for the MZD_MODE_OPTION_STRUCT structure. Refer to the
    "Mode Option List" for the mode option selections.

 Side effects:
    The current link state will be interrupted and reset to the requested operational
    mode
    
 Notes/Warnings:
    Each interface has 4 SerDes lanes. Each individual SerDes lane can
    operate at different speed for speeds between 1G to 100G.
    
    Refer to the datasheet for the number of lane used in the mode. For 200G, only
    lane offset 0 and 2 should be used when calling this API. For 400G, only 
    lane offset 0 should be used.

    There are limitations on using the MZD_MODE_FORCE_RECONFIG when switching between 
    modes of different number of lane used. E.g. changing from a 2-lane MZD_P100UP2 to 
    a 1-lane P50UP on the same port and laneOffset 0, the MZD_MODE_FORCE_RECONFIG 
    must be set. This only applies is the new mode starts on laneOffset 0. Otherwise, 
    a hardware reset will be needed.
    
    Note that if MZD_MODE_SQUELCH_SERDES_TX option is used and this mzdSetInterfaceUserMode() fails, 
    API_C112GX4_SetTxOutputEnable() will either need to be called to re-enable the Tx or the
    following mzdSetInterfaceUserMode() must have the MZD_MODE_SQUELCH_SERDES_TX option.

    ******************************************************************************/
MZD_FUNC MZD_STATUS mzdSetInterfaceUserMode
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16     mdioPort,
    IN MZD_U16     host_or_line,
    IN MZD_U16     laneOffset,
    IN MZD_OP_MODE opMode,
    IN MZD_U32     modeOptionSel,
    IN MZD_MODE_OPTION_STRUCT modeOption,
    OUT MZD_U16    *result
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdGetOpMode
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,   
    OUT MZD_OP_MODE *opMode
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    host_or_line - which interface is being checked:
      MZD_HOST_SIDE
      MZD_LINE_SIDE
    laneOffset - lane number 0-3

 Outputs:
    opMode - the operating mode of this lane returned from the MZD_DEV
             structure
 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not

 Description:
    Reads the operating mode from the device structure. A convenience
    function for accessing the mode from the device structure.

 Side effects:
    None

 Notes/Warnings:
    None

******************************************************************************/
MZD_FUNC MZD_STATUS mzdGetOpMode
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,   
    OUT MZD_OP_MODE *opMode
);


/*******************************************************************************
MZD_FUNC MZD_STATUS mzdAutoNegCheckComplete
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    OUT MZD_BOOL *autoNegComplete
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    host_or_line - which interface is being checked:
      MZD_HOST_SIDE
      MZD_LINE_SIDE
    laneOffset - lane number 0-3

 Outputs:
    autoNegComplete - MZD_TRUE: Auto-neg is completed 
                      MZD_FALSE: Auto-neg is still on going.

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not

 Description:
    This function checks if Auto-neg is completed by checking the AN complete
    bit in the AN status register for host or line side.

 Side effects:
    None

 Notes/Warnings:
    This function needs to be polled periodically until the *autoNegComplete
    is MZD_TRUE to check for auto-neg done.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdAutoNegCheckComplete
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    OUT MZD_BOOL *autoNegComplete
);

/*******************************************************************************
MZD_FUNC MZD_STATUS mzdGetAutoNegResolution
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    OUT MZD_U16 *speed_bits
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    host_or_line - which interface is being read:
         MZD_HOST_SIDE
         MZD_LINE_SIDE
    laneOffset - lane number 0-3

 Outputs:
    speed_bits - auto-negotiation result

                 1000B-KX       = 0x0002
                 10GB-KX4       = 0x0004
                 10GB-KR        = 0x0008
                 BASE-R FEC     = 0x0010
                 40GB-KR4       = 0x0020
                 40GB-CR4       = 0x0040
                 RS-FEC         = 0x0080
                 100GB-CR10     = 0x0100
                 100GB-KP4      = 0x0200
                 100GB-KR4      = 0x0400
                 100GB-CR4      = 0x0800
                 25GB-KR-S/CR-S = 0x1000
                 25GB-KR/CR     = 0x2000
                 2.5GB-KX       = 0x4000
                 5GB-KR         = 0x8000

 Returns:
    MZD_OK or MZD_FAIL, if query succeeded or failed

 Description:
    Gets AN negotiated speed and ability.

 Side effects:

 Notes/Warnings:
    AN result will not be available until after AN completes.

*******************************************************************************/
MZD_FUNC MZD_STATUS mzdGetAutoNegResolution
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    OUT MZD_U16 *speed_bits
);


/******************************************************************************
MZD_FUNC MZD_STATUS mzdCL37AutoNegControl
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    IN MZD_U16 enabledAutoNeg
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    host_or_line - interface(s) to apply the CL-37 Auto-Neg
                   MZD_HOST_SIDE
                   MZD_LINE_SIDE
                   MZD_BOTH_SIDE
    laneOffset - lane number from 0 to 3
    enableAutoNeg - MZD_ENABLE or MZD_DISABLE the CL-37 Auto-Neg

 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not

 Description:
    This API enables or disables the CL-37 Auto-Neg for the 1000BASE-X. Only the 
    MZD_P1X operational mode is supported for the CL-37 Auto-Neg. The Auto-Neg 
    operation will be executed once this API is called. No reset is needed to 
    enable or disable the CL-37 Auto-Neg, it restarts automatically when
    changed from enable to disable.

    Refer to the mzdCL37AutoNegCheckComplete
    for the Auto-Neg completion status.

    The line or host interface can either be configured separately or together 
    on the same call. Use MZD_BOTH_SIDE option for both line and host interfaces.

 Side effects:
    None

 Notes/Warnings:
    The CL-37 Auto-Neg bit will be cleared after a software reset and must
    be re-enabled.

    Clause 37 auto-neg only applies to MZD_P1X mode. If this function is
    called in any other mode an error will be returned.
******************************************************************************/
MZD_FUNC MZD_STATUS mzdCL37AutoNegControl
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    IN MZD_U16 enableAutoNeg
);


/******************************************************************************
MZD_FUNC MZD_STATUS mzdCL37AutoNegCheckComplete
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    OUT MZD_BOOL *autoNegComplete
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    host_or_line - interface(s) to apply the CL-37 Auto-Neg
                   MZD_HOST_SIDE
                   MZD_LINE_SIDE
    laneOffset - lane number from 0 to 3

 Outputs:
    autoNegComplete - MZD_TRUE: Auto-neg is completed 
                      MZD_FALSE: Auto-neg is still on going.

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not

 Description:
    This function checks if Clause 37(CL-37) Auto-neg is completed by checking
    the AN complete bit in the 1000BASE-X status register for host or line side.


    device 3/4, register 0x3n01(n:0/2/4/6 for lane:0/1/2/3) bit 5 

 Side effects:
    None

 Notes/Warnings:
    This function needs to be polled periodically until the *autoNegComplete
    is MZD_TRUE to check for auto-neg done.

    Clause 37 auto-neg only applies to MZD_P1X mode. If this function is
    called in any other mode an error will be returned.
******************************************************************************/
MZD_FUNC MZD_STATUS mzdCL37AutoNegCheckComplete
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    OUT MZD_BOOL *autoNegComplete
);

#define MZD_CLEAR_PAUSE     0 /*  clears both pause bits */
#define MZD_SYM_PAUSE       1 /*  for symmetric pause only */
#define MZD_ASYM_PAUSE      2 /*  for asymmetric pause only */
#define MZD_SYM_ASYM_PAUSE  3 /*  for both */
/******************************************************************************
MZD_FUNC MZD_STATUS mzdSetPauseAdvertisement
(
     IN MZD_DEV_PTR pDev,
     IN MZD_U16  mdioPort,
     IN MZD_U16  host_or_line,
     IN MZD_U16  laneOffset,
     IN MZD_U16   pauseType,
     IN MZD_BOOL swReset
);
                               
 Inputs:
    pDev      - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort  - MDIO port address, 0-31
    host_or_line - which interface is being modified:
                MZD_HOST_SIDE
                MZD_LINE_SIDE
    laneOffset - lane number 0-3
    pauseType - one of the following: 
                MZD_SYM_PAUSE, 
                MZD_ASYM_PAUSE, 
                MZD_SYM_ASYM_PAUSE,
                MZD_CLEAR_PAUSE.
    swReset - MZD_TRUE to issue a lane software reset after the change,
                MZD_FALSE to wait until later to issue the software reset

 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or failed

 Description:
    This function sets the asymmetric and symmetric pause bits in the technology 
    ability field in the auto-neg advertisement register. This selects what type of 
    pause is to be advertised to the far end during auto-negotiation. 

    Sets entire 2-bit field to the value passed in pauseType.

    To clear both bits, pass in MZD_CLEAR_PAUSE.

 Side effects:
    None

 Notes/Warnings:
    The change will not take effect until a soft reset or auto-neg restart
    is issued.
******************************************************************************/
MZD_FUNC MZD_STATUS mzdSetPauseAdvertisement
(
     IN MZD_DEV_PTR pDev,
     IN MZD_U16  mdioPort,
     IN MZD_U16  host_or_line,
     IN MZD_U16  laneOffset,
     IN MZD_U16  pauseType,
     IN MZD_BOOL swReset
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdGetPauseAdvertisement
(
     IN MZD_DEV_PTR pDev,
     IN MZD_U16 mdioPort,
     IN MZD_U16 host_or_line,
     IN MZD_U16 laneOffset,
     OUT MZD_U16 *pauseType
);
                               
 Inputs:
    pDev      - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort  - MDIO port address, 0-31
    host_or_line - which interface is being modified:
                MZD_HOST_SIDE
                MZD_LINE_SIDE
    laneOffset - lane number 0-3
    
 Outputs:
    pauseType - one of the following: 
                MZD_SYM_PAUSE, 
                MZD_ASYM_PAUSE, 
                MZD_SYM_ASYM_PAUSE,
                MZD_CLEAR_PAUSE

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or failed

 Description:
    This function gets the asymmetric and symmetric pause bits in the technology 
    ability field in the AN Advertisement register.

    Gets entire 2-bit field to the value passed in pauseType.

 Side effects:
    None

 Notes/Warnings:
    None
******************************************************************************/
MZD_FUNC MZD_STATUS mzdGetPauseAdvertisement
(
     IN MZD_DEV_PTR pDev,
     IN MZD_U16 mdioPort,
     IN MZD_U16 host_or_line,
     IN MZD_U16 laneOffset,
     OUT MZD_U16 *pauseType
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdGetLPAdvertisedPause
(
     IN MZD_DEV_PTR pDev,
     IN MZD_U16 mdioPort,
     IN MZD_U16 host_or_line,
     IN MZD_U16 laneOffset,
     OUT MZD_U16 *pauseType
);

 Inputs:
    pDev     - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    host_or_line - which interface is being modified:
                MZD_HOST_SIDE
                MZD_LINE_SIDE
    laneOffset - lane number 0-3

 Outputs:
    pauseType - setting of link partner's pause bits based on bit definitions  
                above in mzdSetPauseAdvertisement().
                one of the following: 
                MZD_SYM_PAUSE, 
                MZD_ASYM_PAUSE, 
                MZD_SYM_ASYM_PAUSE,
                MZD_CLEAR_PAUSE

 Returns:
    MZD_OK or MZD_FAIL, based on whether the query succeeded or failed. 

 Description:
    This function reads the auto-neg LP base page ability register and returns the 
    advertised pause setting that was received from the link partner.

 Side effects:
    None

 Notes/Warnings:
    The user must make sure auto-negotiation has completed by calling
    mzdSetModeSelection()/mzdSetInterfaceUserMode() and the link is up prior to
    calling this function.
******************************************************************************/
MZD_FUNC MZD_STATUS mzdGetLPAdvertisedPause
(
     IN MZD_DEV_PTR pDev,
     IN MZD_U16 mdioPort,
     IN MZD_U16 host_or_line,
     IN MZD_U16 laneOffset,
     OUT MZD_U16 *pauseType
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdGetTxRxPauseResolution
(
     IN MZD_DEV_PTR pDev,
     IN MZD_U16 mdioPort,
     IN MZD_U16 host_or_line,
     IN MZD_U16 laneOffset,
     OUT MZD_BOOL *pauseResolved,
     OUT MZD_BOOL *tx_pause_enabled,
     OUT MZD_BOOL *rx_pause_enabled
);

 Inputs:
    pDev         - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort     - MDIO port address, 0-31
    host_or_line - which interface is being modified:
                   MZD_HOST_SIDE
                   MZD_LINE_SIDE
    laneOffset - lane number 0-3

 Outputs:
    pauseResolved    - MZD_TRUE/MZD_FALSE based on whether AN speed/duplex
                       is resolved or not
    tx_pause_enabled - MZD_TRUE/MZD_FALSE based on local and LP pause
                       advertisement
    rx_pause_enabled - MZD_TRUE/MZD_FALSE based on local and LP pause
                       advertisement

 Returns:
    MZD_OK or MZD_FAIL, based on whether the query succeeded or failed

 Description:
    This function is returning tx or rx pause enabled according to the priority 
    resolution described in the 802.3 Annex 28B.3. The resolution is based on 
    the local device's advertised pause bits and the link partner's advertised 
    pause bits. It then setting the tx_pause_enabled or rx_pause_enabled to 
    true or false based on the resolution priority as defined by the standard 
    in 802.3 Annex 28B.3.

    If the operation is successful, the pauseResolved is set to MZD_TRUE, 
    otherwise, sets to MZD_FALSE.

 Side effects:
    None

 Notes/Warnings:
    The user must make sure auto-negotiation has completed before calling this
    function (link is up or auto-neg is complete).
******************************************************************************/
MZD_FUNC MZD_STATUS mzdGetTxRxPauseResolution
(
     IN MZD_DEV_PTR pDev,
     IN MZD_U16 mdioPort,
     IN MZD_U16 host_or_line,
     IN MZD_U16 laneOffset,
     OUT MZD_BOOL *pauseResolved,
     OUT MZD_BOOL *tx_pause_enabled,
     OUT MZD_BOOL *rx_pause_enabled
);


#define MZD_LINK_DOWN 0
#define MZD_LINK_UP   1

/* PCS mode link status */
typedef struct _MZD_PCS_LINK_STATUS
{
    MZD_U16 hostCurrent;
    MZD_U16 hostLatched;
    MZD_U16 lineCurrent;
    MZD_U16 lineLatched;
} MZD_PCS_LINK_STATUS;  

/* Repeater mode Rx Training link status */
typedef struct _MZD_REPEATER_LINK_STATUS
{
    MZD_U16 hostCurrent[MZD_NUM_LANES*2]; /* 200(8x25G)/400(8x50G)/800G uses 8 lanes across 2 MDIO ports */ 
    MZD_U16 lineCurrent[MZD_NUM_LANES*2];
} MZD_REPEATER_LINK_STATUS;  


/******************************************************************************
 MZD_FUNC MZD_STATUS mzdCheckPCSLinkStatus
 (
     IN MZD_DEV_PTR pDev,
     IN MZD_U16  mdioPort,
     IN MZD_U16  laneOffset,
     OUT MZD_U16 *currentStatus,
     OUT MZD_U16 *latchedStatus,
     OUT MZD_PCS_LINK_STATUS *statusDetail
 );

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    laneOffset - 0-3; lane offset to be checked for link status;
                 For PCS mode that uses multiple lanes, i.e. R2 and R4, the 
                 first lane offset should be provided.

 Outputs:
    currentStatus - overall current host and line status of the link 

    latchedStatus - latched status since last time mzdCheckPCSLinkStatus()
        was called. Overall current host and line latched status of the link.

    statusDetail - returns details of status for links on both host and line side.
        The MZD_PCS_LINK_STATUS_TYPE structure details can be used to interpret 
        the results.

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not.

 Description:
    This API checks the link status of a single lane for the PCS mode. For PCS mode 
    that uses multiple lanes, i.e. R2 and R4, the first lane offset should be 
    provided in the laneOffset input.

    To check the link status on multiple lanes, this API will need to be called 
    for each lane with the requested laneOffset and mdioPort number.

    The latchedStatus is latched low. For example: if the return latchedStatus 
    is 0 and the currentStatus is 1, it means the link is currently up but it was 
    toggled since the last read due to initial mode setting or other link events.

 Side effects:
    Calling this function will clear any latched bits that are a component of 
    the link status.

 Notes/Warnings:
    None
******************************************************************************/
MZD_FUNC MZD_STATUS mzdCheckPCSLinkStatus
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16  mdioPort,
    IN MZD_U16  laneOffset,
    OUT MZD_U16 *currentStatus,
    OUT MZD_U16 *latchedStatus,
    OUT MZD_PCS_LINK_STATUS *statusDetail
);

/******************************************************************************
 MZD_FUNC MZD_STATUS mzdGetDetailedLinkStatus
 (
     IN MZD_DEV_PTR pDev,
     IN MZD_U16 mdioPort,
     IN MZD_U16 laneOffset,
     IN MZD_U16 host_or_line,
     OUT MZD_U16 *currStat,
     OUT MZD_U16 *latchStat
 );

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    laneOffset - 0-3; lane offset to be checked for link status;
                 For PCS mode that uses multiple lanes, i.e. R2 and R4, the 
                 first lane offset should be provided.
    host_or_line - which interface is being checked:
                   MZD_HOST_SIDE
                   MZD_LINE_SIDE

 Outputs:
    currStat - current line status of the given interface, port and lane

    latchStat - latched status of the given interface, port and lane since last time
                mzdCheckPCSLinkStatus() or mzdGetDetailedLinkStatus() was called.

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not.

 Description:
    Gets current and latched status for one side and lane of the interface based
    on the operating mode of that side/lane.

    1G/2.5G = 3|4.3001
    10G/5G/25GR1 = 3|4.2001
    40G/50G/25GR2/25GR4 = 3|4.1001
    100G = 3|4.0001
    200G/400G = 3|4.4001
 
    Lane 0:
    1; 10; 40; 100; 200; 400
    2.5

    Lane 1:
    1; 10; 40; 100
    5; 25R1

    Lane 2:
    1; 10; 40; 100; 200

    Lane 3:
    1; 10; 40; 100

    Speed Base  Link Register   Modes
     1G          3|4.0x3001       P1*
     2.5G        3|4.0x3001       P2p5**
     5G          3|4.0x2001       P5*
     10G         3|4.0x2001       P10**
     25GR1       3|4.0x2001       P25B/C/J/K/L*
     25GR2       3|4.0x1001       P25Y/Z*
     25GR4       3|4.0x1001       P25A/G/H*
     40GR2       3|4.0x1001       P40B/J*
     40GR4       3|4.0x1001       P40C/K/L*
     50GR1       3|4.0x1001       P50U/Q*
     50GR2       3|4.0x1001       P50B/J/M*
     50GR4       3|4.0x1001       P50C/K/L*
     100GR2      3|4.0x0001       P100U/Q*
     100GR4      3|4.0x0001       P100C/K/L*
     200GR4      3|4.0x4001       P200**
     400GR4      3|4.0x4001       P400**

 Side effects:
    None.

 Notes/Warnings:
    None.

*******************************************************************************/
MZD_FUNC MZD_STATUS mzdGetDetailedLinkStatus
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_U16 host_or_line,
    OUT MZD_U16 *currStat,
    OUT MZD_U16 *latchStat
);

/******************************************************************************
MZD_STATUS mzdCheckRepeaterLinkStatus
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_BOOL perLaneStatus,
    OUT MZD_U16 *currentStatus,
    OUT MZD_REPEATER_LINK_STATUS *statusDetail
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    laneOffset - 0-3; lane offset to be checked for link status
    perLaneStatus - if MZD_FALSE, combined currentStatus status is combined 
                    for all lanes on the provided mdioPort number. The laneOffset
                    must be the 1st laneOffset of the Repeater mode.
                    if MZD_TRUE, currentStatus status is only for the 
                    provided single laneOffset

 Outputs:
    currentStatus - overall current link status of Repeater mode. May be specific lane, 
       or an aggregate/coupling of multiple lanes depending on mode and the values of laneOffset 
       and perLaneStatus
       
    statusDetail - gives details of status for all components links
       on both host and line side.
       Device structure per-lane details can be used to interpret the results.

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not.

 Description:
    This API checks the Repeater mode Rx Training link status of the port or the individual lane.  
    This means the Repeater link is ready for Rx training with the link partner.
    
    Based on the values of laneOffset and perLaneStatus, it returns an aggregated status 
    in currentStatus, with more detailed status in the MZD_REPEATER_LINK_STATUS.

 Side effects:
    None

 Notes/Warnings:
    If perLaneStatus is MZD_FALSE, it will return the combined currentStatus status of
    for all lanes on the provided mdioPort number.  The laneOffset must be the 
    1st laneOffset of the Repeater mode.

    When the mzdReloadDriver() is called to reload the API device structure on an
    existing running device, the coupling Repeater mode, will display the individual lane
    Repeater mode instead of the coupling Repeater mode.
    For example: for the coupling Repeater mode R400U8, the reload API will show
    all 8 lanes with R50U and not R400U8. 
    The mzdCheckRepeaterLinkStatus() will need to be called on individual lane to check
    the link status.

******************************************************************************/
MZD_STATUS mzdCheckRepeaterLinkStatus
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_BOOL perLaneStatus,
    OUT MZD_U16 *CurrentStatus,
    OUT MZD_REPEATER_LINK_STATUS *statusDetail
);

/******************************************************************************
 MZD_FUNC MZD_STATUS mzdGetPcsFaultStatus
 (
     IN MZD_DEV_PTR pDev,
     IN MZD_U16 mdioPort,
     IN MZD_U16 host_or_line,
     IN MZD_U16 laneOffset,
     OUT MZD_U16 *currentTxFaultStatus,
     OUT MZD_U16 *currentRxFaultStatus,
     OUT MZD_U16 *latchedTxFaultStatus,
     OUT MZD_U16 *latchedRxFaultStatus
 );

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    
    mdioPort - MDIO port address, 0-31
    
    host_or_line - which interface is being read:
       MZD_HOST_SIDE
       MZD_LINE_SIDE
       
    laneOffset - 0..3 for lanes 0-3. 

 Outputs:
    currentTxFaultStatus - the value of the Tx Fault Status
        on the second read of the status register (the current status
        after clearing the latch bit)
        
    currentRxFaultStatus - the value of the Rx Fault Status
        on the second read of the status register (the current status
        after clearing the latch bit)
        
    latchedTxFaultStatus - the value of the Tx Fault Status
        on the first read of the status register (the value of
        the latched bit since the last read)
        
    latchedRxFaultStatus - the value of the Rx Fault Status
        on the first read of the status register (the value of
        the latched bit since the last read)

 Returns:
    MZD_OK if query was successful, MZD_FAIL if not.
    MZD_FAIL if the operating mode is not set properly or
    the device is not initialized for this mode of operation.

 Description:
    This function is to be called in any of the 5G to 200G PCS
    modes to check the Tx/Rx fault bits.

    Based on the current operating mode, it reads the current
    speed Host/Line PCS Status 2 register twice and returns the value
    of the Tx/Rx fault bits. It returns the first read in the
    "latched" version and the second read in the "current" version.

    In the following register map, X is laneOffset * 2.

    For 200G Host Side:
        4.4008.11 Tx Fault
        4.4008.10 Rx Fault

    For 200G Line Side:
        3.4008.11 Tx Fault
        3.4008.10 Rx Fault

    For 100G Host Side:
        4.0X08.11 Tx Fault
        4.0X8.10 Rx Fault

    For 100G Line Side:
        3.0X08.11 Tx Fault
        3.0X08.10 Rx Fault

    For 40G/50G Host Side:
        4.1X08.11 Tx Fault
        4.1X08.10 Rx Fault

    For 40G/50G Line Side:
        3.1X08.11 Tx Fault
        3.1X08.10 Rx Fault

    For 5/10G/25G Host Side:
        4.2X08.11 Tx Fault
        4.2X08.10 Rx Fault

    For 5/10G/25G Line Side:
        3.2X08.11 Tx Fault
        3.2X08.10 Rx Fault

 Side effects:
    None.

 Notes/Warnings:
    Clears the latch status of those registers being read.

    Speed must be resolved if using AN and/or port must be configured using
    5G to 200G PCS mode, otherwise an error is returned. 

******************************************************************************/
MZD_FUNC MZD_STATUS mzdGetPcsFaultStatus
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    OUT MZD_U16 *currentTxFaultStatus,
    OUT MZD_U16 *currentRxFaultStatus,
    OUT MZD_U16 *latchedTxFaultStatus,
    OUT MZD_U16 *latchedRxFaultStatus
);

#define MZD_MAX_LANE_SW_RESET_WAIT   1000
/*******************************************************************
MZD_FUNC MZD_STATUS mzdLaneSoftReset
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    IN MZD_U16 timeoutMs
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    laneOffset - 0-3; lane to be reset
    timeoutMs - millisec to wait after issuing the lane soft reset

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not.

 Description:
    Issues a soft reset to a single lane with the wait time.

 Side effects:

 Notes/Warnings:
    None
*******************************************************************/
MZD_FUNC MZD_STATUS mzdLaneSoftReset
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    IN MZD_U16 timeoutMs
);


/* To select the datapath fault configuration mode: */
#define MZD_DP_DEFAULT_MODE           0 /* Default. Link does not break when the other side link down */
#define MZD_DP_DISENGAGE_MODE         1 /* Disengage TX and RX by sending LF or RF or IDLE */
#define MZD_DP_RESET_MODE             2 /* Reset this side and keep the link down while other side is down */

/* When the mode is MZD_DP_DISENGAGE_MODE, these are the options of what pattern to send */
#define MZD_DP_FAULT_IDLE             0 /* Default. Sending IDLE pattern */
#define MZD_DP_FAULT_LF               1 /* Sending Local Fault pattern*/
#define MZD_DP_FAULT_RF               2 /* Sending Remote Fault pattern */
/*******************************************************************
MZD_FUNC MZD_STATUS mzdSetDPFaultConfig
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    IN MZD_U16 datapathMode,
    IN MZD_U16 txType,
    IN MZD_U16 rxType
);

 Inputs:
   pDev  - pointer to MZD_DEV initialized by mzdInitDriver() call
   
   mdioPort - MDIO port address, 0-31
   
   host_or_line - side which datapath is being controlled for:
        MZD_HOST_SIDE
        MZD_LINE_SIDE
        
   laneOffset - lane number 0-3 or MZD_ALL_LANES to control all lanes
                For PCS mode that uses multiple lanes, i.e. R2 and R4, the 
                first lane number or MZD_ALL_LANES should be provided.

   datapathMode - select which data path mode to use on this side when the
                  other side link drops. See definitions above.
        MZD_DP_DEFAULT_MODE
        MZD_DP_DISENGAGE_MODE
        MZD_DP_RESET_MODE

   txType - select which fixed pattern be sent in the Disengage Mode toward
            the copper/fiber when the opposite side is link down. Only used
            when the datapathMode is MZD_DP_DISENGAGE_MODE.
        MZD_DP_FAULT_IDLE
        MZD_DP_FAULT_LF
        MZD_DP_FAULT_RF
   
   rxType - select which fixed pattern be sent in the Disengage Mode towards
            the internal side of the chip (e.g. if this is the host side, towards
            the line side and vise versa) when the opposite side is link down. 
            Only used when the datapathMode is MZD_DP_DISENGAGE_MODE.
        MZD_DP_FAULT_IDLE
        MZD_DP_FAULT_LF
        MZD_DP_FAULT_RF
        
 Outputs:
   None

 Returns:
    MZD_OK if change was successful, MZD_FAIL if not.

 Description:
   "This side" indicates the input "host_or_line". "The other side" means the other
   half of the device. For example, if "host_or_line" is HOST, the other side
   is LINE.

   Sets the data path(DP) mode on this side. This function is used to select what
   happens on "this side" when the other side is link down. Options are to use
   default (link stays up), link drops (MZD_DP_RESET_MODE), or link stays up
   but a fixed pattern replaces the data in the Tx or Rx direction 
   (MZD_DP_DISENGAGE_MODE). Tx direction is towards "this side" serdes. Rx 
   direction is towards the other side.
   
   See the datasheet for suggestions/details.
   
 Side effects:
   None

 Notes/Warnings:
    If you pass MZD_ALL_LANES, the function will only configure all the lanes assigned
    to modes on that port. It will figure out the first lane of each multi-lane mode
    and skip lanes that shouldn't be configured.

    If you pass a specific lane and it is not the first lane of a multi-lane mode,
    that lane will not be configured and an error message will be returned.
*******************************************************************/
MZD_FUNC MZD_STATUS mzdSetDPFaultConfig
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    IN MZD_U16 datapathMode,
    IN MZD_U16 txType,
    IN MZD_U16 rxType
);

/*******************************************************************
MZD_FUNC MZD_STATUS mzdGetDPFaultConfig
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    OUT MZD_U16 *datapathMode,
    OUT MZD_U16 *txType,
    OUT MZD_U16 *rxType
);

 Inputs:
   pDev  - pointer to MZD_DEV initialized by mzdInitDriver() call
   
   mdioPort - MDIO port address, 0-31
   
   host_or_line - whose datapath is being read:
        MZD_HOST_SIDE
        MZD_LINE_SIDE
        
   laneOffset - lane number 0-3
                For PCS mode that uses multiple lanes, i.e. R2 and R4, the 
                first lane number should be provided.

 Outputs:
   datapathMode - read the data path mode on this side when the other side link down.
                  See MACRO definitions above.
        MZD_DP_DEFAULT_MODE
        MZD_DP_DISENGAGE_MODE
        MZD_DP_RESET_MODE

   txType - indicates which fixed pattern is sent in the Disengage Mode toward
            the copper/fiber when the opposite side is link down.
        MZD_DP_FAULT_IDLE
        MZD_DP_FAULT_LF
        MZD_DP_FAULT_RF
   
   rxType - indicates which fixed pattern is sent in the Disengage Mode towards
            the internal side of the chip (e.g. if this is the host side, towards
            the line side and vise versa) when the opposite side is link down.
        MZD_DP_FAULT_IDLE
        MZD_DP_FAULT_LF
        MZD_DP_FAULT_RF

 Returns:
    MZD_OK if query was successful, MZD_FAIL if not.

 Description:
   Reads the settings for this option and returns them. See the description
   for mzdSetDPFaultConfig() for details.

 Side effects:
   None

 Notes/Warnings:
   None
*******************************************************************/
MZD_FUNC MZD_STATUS mzdGetDPFaultConfig
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    OUT MZD_U16 *datapathMode,
    OUT MZD_U16 *txType,
    OUT MZD_U16 *rxType
);

/*******************************************************************
MZD_FUNC MZD_STATUS mzdSetSerdesMux
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 host_or_line,
    IN MZD_U8 *serdesMux
);

 Inputs:
    pDev  - pointer to MZD_DEV initialized by mzdInitDriver() call
    host_or_line - which interface is being configured:
                   MZD_HOST_SIDE
                   MZD_LINE_SIDE
    serdesMux - mappings for all lanes for Serdes Mux on the given side
                Each entry specifies which Serdes lane the lane
                is mapping to, the mapping must be a full one-to-one
                mapping.
                e.g.
                MZD_U8 serdesMux[MZD_MAX_PORTS*MZD_NUM_LANES]

                Port#Lane# = Lane Index
                P0L0       = 0
                P0L1       = 1
                ...
                P4L2       = 14
                P4L3       = 15

                serdesMUX[2] = 6 maps Port0 Serdes Lane2 to Port1 PCS Lane3

 Outputs:
    None.

 Returns:
    MZD_OK if command was executed successful, MZD_FAIL if not.

 Description:
    Configure the Serdes MUX on the chip. The Serdes MUX is able to
    map any of the lanes to any of the available Serdes lanes.
    The default settings map all of the lanes to the Serdes lanes
    on the same Port and Lane respectively.

    Please see mzdSampleSerdesMux() for usage example.

 Side effects:
    None.

 Notes/Warnings:
    The API will not track the lanes that are MUXed. The caller must maintain a table to track
    the MUXed lane.  This is needed to provide the correct MUXed lane when calling the API with 
    the lane offset and MDIO port.  

    Speed mode need to be set again after calling this API to set Serdes MUX.

    For A0 device, SerDes muxing only supports muxing lanes within 1st set of two ports(P0-P1) 
    and 2nd set of two ports(P2-P3). The muxing between the 1st and 2nd set of ports are 
    not supported.

    For B0 device, the lane muxing is supported across the first two ports(P0-P1)  
    and second two ports(P2-P3).

    SW reset will not reset Serdes MUX to default value. Only HW reset will reset the Serdes MUX
    to default.
*******************************************************************/
MZD_FUNC MZD_STATUS mzdSetSerdesMux
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 host_or_line,
    IN MZD_U8 *serdesMux
);


/*******************************************************************
MZD_FUNC MZD_STATUS mzdGetSerdesMux
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 host_or_line,
    OUT MZD_U8 *serdesMux
);

 Inputs:
    pDev  - pointer to MZD_DEV initialized by mzdInitDriver() call
    host_or_line - which interface is being configured:
                   MZD_HOST_SIDE
                   MZD_LINE_SIDE

 Outputs:
    serdesMux - mappings for all lanes for Serdes Mux on the given side
                Each entry specifies which Serdes lane the lane
                is mapping to.
                e.g.
                MZD_U8 serdesMux[MZD_MAX_PORTS*MZD_NUM_LANES]

                Port#Lane# = serdesMux[i] Lane Index
                P0L0       = 0
                P0L1       = 1
                ...
                P4L2       = 14
                P4L3       = 15

 Returns:
    MZD_OK if command was executed successful, MZD_FAIL if not.

 Description:
    Reads the Serdes MUX on the chip. The Serdes MUX is able to
    map any of the lanes to any of the available Serdes lanes.

 Side effects:
    None.

 Notes/Warnings:
    None.
*******************************************************************/
MZD_FUNC MZD_STATUS mzdGetSerdesMux
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 host_or_line,
    OUT MZD_U8 *serdesMux
);


/*******************************************************************
MZD_FUNC MZD_STATUS mzdSetTxTraining
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    IN MZD_U16 txTrainingVal,
    IN MZD_BOOL txTrainingOverWrite
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    laneOffset - 0-3; lane offset to be checked for link status;
                 For PCS mode that uses multiple lanes, i.e. R2 and R4, the 
                 first lane offset should be provided.
    host_or_line - MZD_HOST_SIDE or MZD_LINE_SIDE
    txTrainingVal - duration; range 0 to 0xF
    txTrainingOverWrite - MZD_TRUE: enable TX training using txTrainingVal value
                          MZD_FALSE: disable TX training; txTrainingVal is ignored

 Outputs:
     None

 Returns:
    MZD_OK if command was executed successful, MZD_FAIL if not.

 Description:
    This API enables the TX Training on a non-ANEG mode. The txTrainingVal
    option set the duration of the TX training from 0 - 0xF. 

    For a 8-lane mode or 4-lane mode, the laneOffset must be 0.

    Example to set the line side TX training on a 8-lane MZD_P400UP8 port0/1:
        mzdSetTxTraining(pDev, 0, MZD_LINE_SIDE, 0, 0xF, MZD_TRUE);
    
 Side effects:
    None.

 Notes/Warnings:
    None.
*******************************************************************/
MZD_FUNC MZD_STATUS mzdSetTxTraining
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    IN MZD_U16 txTrainingVal,
    IN MZD_BOOL txTrainingOverWrite
);

#if C_LINKAGE
#if defined __cplusplus
}
#endif
#endif


#endif /* defined MZD_API_H */
