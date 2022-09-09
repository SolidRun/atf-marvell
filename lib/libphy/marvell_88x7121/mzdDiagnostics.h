/*******************************************************************************
Copyright (c) 2014 Marvell.
If you received this File from Marvell and you have entered into a commercial
license agreement (a "Commercial License") with Marvell, the File is licensed
to you under the terms of the applicable Commercial License.
*******************************************************************************/

/********************************************************************
This file contains functions and global data for higher-level functions 
using MDIO access to enable test modes, loopbacks, and other diagnostic 
functions for the Marvell X7121 PHY.
********************************************************************/
#ifndef MZDDIAG_H
#define MZDDIAG_H

#if C_LINKAGE
#if defined __cplusplus
    extern "C" {
#endif
#endif

/* UPC status register for load status */
#define MZD_PHY_EXT_STAT_1_REG_ALT        0xF098 

/* Status of serdes loader executable when it's done executing */
#define MZD_SERDES_LOADER_FAIL            0xBFA
#define MZD_SERDES_LOADER_DONE            0xBFF

/* TX Equalization Parameters */
typedef enum
{
    C112GX4_TXEQ_EM_PRE3_CTRL,  /* Exists Only in R1.2 */
    C112GX4_TXEQ_EM_PRE2_CTRL,
    C112GX4_TXEQ_EM_PRE_CTRL,
    C112GX4_TXEQ_EM_MAIN_CTRL,
    C112GX4_TXEQ_EM_POST_CTRL,
    C112GX4_TXEQ_EM_NA,         /* Exists Only in R1.2 */
    C112GX4_TXEQ_FIR_C_CTRL1,
    C112GX4_TXEQ_FIR_C_CTRL2,
    C112GX4_TXEQ_FIR_C_CTRL3
} E_C112GX4_TXEQ_PARAM;

/* Eye: Middle, Top or Bottom */
typedef enum
{
    C112GX4_EYE_MID,
    C112GX4_EYE_TOP,
    C112GX4_EYE_BOT
} E_C112GX4_EYE_TMB;


/******************************************************************************
 MZD_FUNC MZD_STATUS mzdGetChipRevision
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    OUT MZD_DEVICE_ID *deviceId
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31

 Outputs:
    deviceId - revision of this chip, see MZD_DEVICE_ID definition for
               a list of chip revisions with different options

 Returns:
    MZD_OK if query was successful, MZD_FAIL if not

 Description:
    Determines the PHY revision and returns the value in phyRev.
    See definition of MZD_DEVICE_ID for a list of available
    devices and capabilities.

 Side effects:
    None.

 Notes/Warnings:
    None

******************************************************************************/
MZD_FUNC MZD_STATUS mzdGetChipRevision
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    OUT MZD_DEVICE_ID *deviceId
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdDevicePortCount
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    OUT MZD_U16 *portCount
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31

 Outputs:
    portCount - returns the number of ports for the device type

 Returns:
    MZD_OK if query was successful, MZD_FAIL if not

 Description:
    Determines the number of port count based on the MZD_DEVICE_ID device
    type.

 Side effects:
    None.

 Notes/Warnings:
    None

******************************************************************************/
MZD_FUNC MZD_STATUS mzdDevicePortCount
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    OUT MZD_U16 *portCount
);

/******************************************************************************
 MZD_FUNC MZD_STATUS mzdGetChipFWRevision
 (
     IN MZD_DEV_PTR pDev,
     OUT MZD_U16 *major,
     OUT MZD_U16 *minor,
     OUT MZD_U16 *patch,
     OUT MZD_U16 *build
 );

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call 

 Outputs:
    major - returns the major revision number
    minor - returns the minor revision number 
    patch - returns the patch revision number
    build - returns the build revision number
            Format of major.minor.patch.build

 Returns:
    MZD_OK if query was successful, MZD_FAIL if chip firmware is not available

 Description:
    Retrieves the chip firmware revision number. The revision is in 
    the <major>.<minor>.<patch>.<build> format. There is only one firmware in the chip on
    the first port. This function looks at the first port only.

    Must be called after the firmware has been loaded to retrieve the firmware
    version.

 Side effects:
    None.

 Notes/Warnings:
    The version will return 0.0 if chip firmware is not available. Not all devices
    require the chip firmware. Also will return 0.0.0.0 if the firmware has
    not been loaded yet.

******************************************************************************/
MZD_FUNC MZD_STATUS mzdGetChipFWRevision
(
    IN MZD_DEV_PTR pDev,
    OUT MZD_U16 *major,
    OUT MZD_U16 *minor,
    OUT MZD_U16 *patch,
    OUT MZD_U16 *build
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdGetSerdesFWRevision
(
    IN MZD_DEV_PTR pDev,
    OUT MZD_U8 *major, 
    OUT MZD_U8 *minor, 
    OUT MZD_U8 *patch, 
    OUT MZD_U8 *build
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call   

 Outputs:
    major - major version number
    minor - minor version number
    patch - patch version number
    build - build version number

 Returns:
    MZD_OK if query was successful, MZD_FAIL if chip firmware is not available

 Description:
    Retrieves the SerDes MCU firmware revision number. The revision is in 
    the <major>.<minor>.<patch>.<build> format. Assumes all serdes are 
    downloaded with the same firmware. Looks at the first MDIO port
    on the line side.

 Side effects:
    None.

 Notes/Warnings:
    The version will return 0.0.0.0 if SerDes firmware is not available or
    the lane is powered down (3/4.F000.13 = 1).

******************************************************************************/
MZD_FUNC MZD_STATUS mzdGetSerdesFWRevision
(
    IN MZD_DEV_PTR pDev,
    OUT MZD_U8 *major, 
    OUT MZD_U8 *minor, 
    OUT MZD_U8 *patch, 
    OUT MZD_U8 *build
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdGetSerdesFWRevisionAll
(
    IN MZD_DEV_PTR pDev,
    OUT MZD_U8 major[MZD_NUM_INTERFACE][MZD_MAX_PORTS], 
    OUT MZD_U8 minor[MZD_NUM_INTERFACE][MZD_MAX_PORTS], 
    OUT MZD_U8 patch[MZD_NUM_INTERFACE][MZD_MAX_PORTS], 
    OUT MZD_U8 build[MZD_NUM_INTERFACE][MZD_MAX_PORTS]
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call   

 Outputs:
    major[][] - major version numbers, first index is 0 for host and 1 for line,
                second index is port number
    minor[][] - minor version numbers, first index is 0 for host and 1 for line,
                second index is port number
    patch[][] - patch version numbers, first index is 0 for host and 1 for line,
                second index is port number
    build[][] - build version numbers, first index is 0 for host and 1 for line,
                second index is port number

 Returns:
    MZD_OK if query was successful, MZD_FAIL if chip firmware is not available

 Description:
    Retrieves the SerDes MCU firmware revision number. The revision is in 
    the <major>.<minor>.<patch>.<build> format. Gets all serdes
    versions for both host and line side.

 Side effects:
    None.

 Notes/Warnings:
    The version will return 0.0.0.0 if SerDes firmware is not available or
    the lane is powered down (3/4.F000.13 = 1).

******************************************************************************/
MZD_FUNC MZD_STATUS mzdGetSerdesFWRevisionAll
(
    IN MZD_DEV_PTR pDev,
    OUT MZD_U8 major[MZD_NUM_INTERFACE][MZD_MAX_PORTS], 
    OUT MZD_U8 minor[MZD_NUM_INTERFACE][MZD_MAX_PORTS], 
    OUT MZD_U8 patch[MZD_NUM_INTERFACE][MZD_MAX_PORTS], 
    OUT MZD_U8 build[MZD_NUM_INTERFACE][MZD_MAX_PORTS]
);

typedef enum
{
    MZD_FIRMWARE_STATUS_UNKNOWN,
    MZD_NO_FIRMWARE_LOADED,
    MZD_LOAD_IN_PROGRESS,
    MZD_LOAD_FAILED,
    MZD_LOAD_SUCCESS
} MZD_FIRMWARE_STATUS;

/******************************************************************************
MZD_FUNC MZD_STATUS mzdGetFirmwareLoadStatus
(
    IN MZD_DEV_PTR pDev,
    OUT MZD_FIRMWARE_STATUS *loadStatus
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call   

 Outputs:
    loadStatus - one of the following:
        MZD_NO_FIRMWARE_LOADED - no firmware is loaded in the main CPU
        MZD_LOAD_IN_PROGRESS - firmware is loaded and actively loading
                               the other processors
        MZD_LOAD_FAILED - firmware is loaded and the load is completed
                          but it failed. Needs to be retried.
        MZD_LOAD_SUCCESS - firmware is loaded and loading of the
                           other processors completed successfully.
        
 Returns:
    MZD_OK if query was successful, MZD_FAIL if the query failed

 Description:
    Checks the processor status for load success/failure or in progress.

 Side effects:
    None.

 Notes/Warnings:
    None

******************************************************************************/
MZD_FUNC MZD_STATUS mzdGetFirmwareLoadStatus
(
    IN MZD_DEV_PTR pDev,
    OUT MZD_FIRMWARE_STATUS *loadStatus
);


/******************************************************************************
MZD_FUNC MZD_STATUS mzdGetSerdesSignalDetectAndDspLock
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,    
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    OUT MZD_U16 *signalDetect,
    OUT MZD_U16 *dspLock
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31    
    host_or_line - which interface is being set:
                   MZD_HOST_SIDE
                   MZD_LINE_SIDE        
    laneOffset - 0..3 for lanes 0-3


 Outputs:
    signalDetect - value of serdes signal detect
                   1 = signal detected
                   0 = signal not detected
    dspLock      - value of serdes DSP lock
                   1 = DSP locked
                   0 = DSP not locked

 Returns:
    MZD_OK if query was successful, MZD_FAIL if not

 Description:
    Reads the corresponding lane DSP Signal Detect and DSP Lock status. 

 Side effects:
    None.

 Notes/Warnings:
    None

******************************************************************************/
MZD_FUNC MZD_STATUS mzdGetSerdesSignalDetectAndDspLock
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    OUT MZD_U16 *signalDetect,
    OUT MZD_U16 *dspLock
);
 

typedef enum
{
    MZD_PCS_SHALLOW_LOOPBACK = 1,
    MZD_PCS_DEEP_LOOPBACK = 2,
    MZD_PMA_DEEP_LOOPBACK = 3
} MZD_PCS_MODE_LOOPBACK;

/*******************************************************************************
 MZD_FUNC MZD_STATUS mzdSetPCSLineLoopback
 (
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_PCS_MODE_LOOPBACK loopback_type,
    IN MZD_U16 loopbackState
 );

 Inputs:
    pDev     - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    laneOffset - 0..3 for lanes 0-3
    loopback_type - MZD_PCS_SHALLOW_LOOPBACK, MZD_PCS_DEEP_LOOPBACK, MZD_PMA_DEEP_LOOPBACK
    enable   - MZD_ENABLE = enable loopback; MZD_DISABLE = disable loopback

 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL if I/O error or bad parameter passed in (out of range)

 Description:
    This function is used to Enable/Disable line side loopbacks. There are 
    3 loopback options for the loopback_type parameter. One of these 3 options, 
    MZD_PCS_SHALLOW_LOOPBACK, MZD_PCS_DEEP_LOOPBACK and MZD_PMA_DEEP_LOOPBACK
    should be used when calling this API.
    Only a single loopback type should be used each time.

    Refer to the datasheet for more detail on the differences on the 3 types of 
    loopbacks.

 Side effects:
    None

 Notes/Warnings:
    Only a single loopback type should be used each time.  Setting more than one 
    loopback either on the host and line sides will have unpredictable behavior.

    A lane soft reset(mzdLaneSoftReset)is recommended after disabling this feature.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdSetPCSLineLoopback
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_PCS_MODE_LOOPBACK loopback_type,
    IN MZD_U16 enable
);

/*******************************************************************************
 MZD_FUNC MZD_STATUS mzdSetPCSHostLoopback
 (
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_PCS_MODE_LOOPBACK loopback_type,
    IN MZD_U16 loopbackState
 );

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    laneOffset - 0..3 for lanes 0-3
    loopback_type - MZD_PCS_SHALLOW_LOOPBACK, MZD_PCS_DEEP_LOOPBACK, MZD_PMA_DEEP_LOOPBACK
    loopbackState - MZD_ENABLE = enable loopback; MZD_DISABLE = disable loopback

 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL if I/O error or bad parameter passed in (out of range)

 Description:
    This function is used to Enable/Disable host side loopbacks. There are 
    3 loopback options for the loopback_type parameter. One of these 3 options, 
    MZD_PCS_SHALLOW_LOOPBACK, MZD_PCS_DEEP_LOOPBACK and MZD_PMA_DEEP_LOOPBACK
    should be used when calling this API.
    Only a single loopback type should be used each time.

    Refer to the datasheet for more detail on the differences on the 3 types of 
    loopbacks.

 Side effects:
    None

 Notes/Warnings:
    Only a single loopback type should be used each time.  Setting more than one 
    loopback either on the host and line sides will have unpredictable behavior.

    A lane soft reset(mzdLaneSoftReset)is recommended after disabling this feature.

*******************************************************************************/
MZD_FUNC MZD_STATUS mzdSetPCSHostLoopback
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_PCS_MODE_LOOPBACK loopback_type,
    IN MZD_U16 loopbackState
);

/*******************************************************************************
 MZD_STATUS mzdHmuxSetPCSLineDeepLoopback
 (
     IN MZD_DEV_PTR pDev,
     IN MZD_U16 hostPort,
     IN MZD_U16 hostLaneOffset,
     IN MZD_PCS_MODE_LOOPBACK loopback_type,
     IN MZD_U16 loopbackState
 )

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    hostPort - Host side MDIO port address, 0-31.
    hostLaneOffset - Host side lanes 0-3
    loopback_type - MZD_PCS_DEEP_LOOPBACK, MZD_PMA_DEEP_LOOPBACK
    loopbackState - MZD_ENABLE = enable loopback; MZD_DISABLE = disable loopback

 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL if I/O error or bad parameter passed in (out of range)

 Description:
    This function is used to Enable/Disable Line side deep loopbacks. There are
    two loopback options for the loopback_type parameter should be used when calling
    this API:
        MZD_PCS_DEEP_LOOPBACK
        MZD_PMA_DEEP_LOOPBACK

    Only a single loopback type should be used each time.

    When the Host and Line side port are setting to different modes, user must pass in
    correct Host side port for configuring Line side deep loopback.
    For example, if HMUX8 was configured to using higher ports(P2/P3) as primary port.
    User need to pass in P0 as hostPort to configure Line side deep loopback on P2.

    Refer to the datasheet for more detail on the differences on these two types of 
    loopbacks.

 Side effects:
    None

 Notes/Warnings:
    Only a single loopback type should be used each time.  Setting more than one 
    loopback either on the host and line sides will have unpredictable behavior.

    A lane soft reset(mzdLaneSoftReset)is recommended after disabling this feature.

*******************************************************************************/
MZD_FUNC MZD_STATUS mzdHmuxSetPCSLineDeepLoopback
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 hostPort,
    IN MZD_U16 hostLaneOffset,
    IN MZD_PCS_MODE_LOOPBACK loopback_type,
    IN MZD_U16 loopbackState /* MZD_ENABLE = enable loopback; MZD_DISABLE = disable loopback */
);

/*******************************************************************************
 MZD_STATUS mzdHmuxSetPCSHostDeepLoopback
 (
     IN MZD_DEV_PTR pDev,
     IN MZD_U16 linePort,
     IN MZD_U16 lineLaneOffset,
     IN MZD_PCS_MODE_LOOPBACK loopback_type,
     IN MZD_U16 loopbackState
 );

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    linePort - Line side MDIO port address, 0-31.
    lineLaneOffset - Line side lanes 0-3
    loopback_type - MZD_PCS_DEEP_LOOPBACK, MZD_PMA_DEEP_LOOPBACK
    loopbackState - MZD_ENABLE = enable loopback; MZD_DISABLE = disable loopback

 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL if I/O error or bad parameter passed in (out of range)

 Description:
    This function is used to Enable/Disable Host side deep loopbacks. There are
    two loopback options for the loopback_type parameter should be used when calling
    this API:
        MZD_PCS_DEEP_LOOPBACK
        MZD_PMA_DEEP_LOOPBACK

    Only a single loopback type should be used each time.

    When the Host and Line side port are setting to different modes, user must pass in
    correct Line side port for configuring Host side deep loopback.
    For example, if HMUX8 was configured to using higher ports(P2/P3) as primary port.
    User need to pass in P2 as linePort to configure Host side deep loopback on P0.

    Refer to the datasheet for more detail on the differences on these two types of 
    loopbacks.

 Side effects:
    None

 Notes/Warnings:
    Only a single loopback type should be used each time.  Setting more than one 
    loopback either on the host and line sides will have unpredictable behavior.

    A lane soft reset(mzdLaneSoftReset)is recommended after disabling this feature.

*******************************************************************************/
MZD_FUNC MZD_STATUS mzdHmuxSetPCSHostDeepLoopback
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 linePort,
    IN MZD_U16 lineLaneOffset,
    IN MZD_PCS_MODE_LOOPBACK loopback_type,
    IN MZD_U16 loopbackState /* MZD_ENABLE = enable loopback; MZD_DISABLE = disable loopback */
);

/*******************************************************************************
MZD_FUNC MZD_STATUS mzdSetSerdesLaneLoopback
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    IN MZD_U16 loopbackState,
    IN MZD_BOOL swReset
);

 Inputs:
    pDev     - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    host_or_line - which interface is being set:
                   MZD_HOST_SIDE
                   MZD_LINE_SIDE        
    laneOffset - 0..3 for lanes 0-3
    loopbackState - 1-enabled; 0-disabled
    swReset   - issue a soft reset after setting the SerDes loopback

 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL if I/O error or bad parameter passed in (out of range)

 Description:
    This function sets the loopback by calling the SerDes operation on a single 
    SerDes lane. This will only work for non-AutoNeg mode since will not match the 
    AN nonce. For PCS mode, it is recommended to use the PCS loopback APIs. 

    The swReset is an option to issue a soft reset after enabling or disabling the 
    SerDes lane loopback. It is recommended to issue a soft reset after calling this
    API.

 Side effects:
    None

 Notes/Warnings:
    Only non-AutoNeg mode is supported in SerDes lane loopback

    Allow a short delay(~1s) after the non-AN mode is configured before calling this 
    SerDes lane loopback diagnostic API.
    
    After completing the SerDes lane loopback diagnostic test, the mode setting on the  
    lane will need to be re-initialized by calling the mode setting. This API will
    not support on-line switching on/off for this SerDes loopback diagnostic feature.

*******************************************************************************/
MZD_FUNC MZD_STATUS mzdSetSerdesLaneLoopback
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    IN MZD_U16 loopbackState,
    IN MZD_BOOL swReset
);

/*******************************************************************************
MZD_FUNC MZD_STATUS mzdGetSerdesLaneLoopback
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    OUT MZD_U16 *loopbackState
);

 Inputs:
    pDev     - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    host_or_line - which interface is being set:
                   MZD_HOST_SIDE
                   MZD_LINE_SIDE        
    laneOffset - 0..3 for lanes 0-3

 Outputs:
    loopbackState - returns the SerDes lane loopback state

 Returns:
    MZD_OK or MZD_FAIL if I/O error or bad parameter passed in (out of range)

 Description:
    This function reads the SerDes lane loopback state. The mzdSetSerdesLaneLoopback
    sets this bit and this API read back the value

 Side effects:
    None

 Notes/Warnings:

*******************************************************************************/
MZD_FUNC MZD_STATUS mzdGetSerdesLaneLoopback
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    OUT MZD_U16 *loopbackState
);


/* possible values for pktPatternControl */
#define PACKET_GEN_200G_OFFSET     0x4000
#define PACKET_GEN_40G_OFFSET      0x0F10
#define PACKET_GEN_25G_OFFSET     (0x0F10+0x1000)
#define PACKET_GEN_1G_OFFSET      (0x0F10+0x2000)

#define MZD_PKT_NO_MASK            0  /* payload sent without change */
#define MZD_PKT_INV_SKIP_WRD       2  /* inverts every other word  */
#define MZD_PKT_2INV_2NOT          3  /* two inverted two not inverted */
#define MZD_PKT_LFT_SHFT_BYTE      4  /* left shift by byte */
#define MZD_PKT_RHT_SHFT_BYTE      5  /* right shift by byte */
#define MZD_PKT_LFT_SHFT_WRD       6  /* left shift by word */
#define MZD_PKT_RHT_SHFT_WRD       7  /* right shift by word */
#define MZD_PKT_INC_BYTE           8  /* increment by byte */
#define MZD_PKT_DEC_BYTE           9  /* decrement by byte */
#define MZD_PKT_RANDOM_BYTE       10  /* pseudo-random byte */
#define MZD_PKT_RANDOM_WORD       11  /* pseudo-random word */

/* possible values for frameLengthControl */
#define MZD_PKT_RAND_LEN0          0 /* rand len 64 bytes - 1518 bytes */
#define MZD_PKT_RAND_LEN1          1 /* rand len 64 bytes - 0xFFF bytes */
#define MZD_PKT_RAND_LEN2          2 /* rand len 64 bytes - 0x1FFF bytes */
#define MZD_PKT_RAND_LEN3          3 /* rand len 64 bytes - 0x3FFF bytes */
#define MZD_PKT_RAND_LEN4          4 /* rand len 64 bytes - 0x7FFF bytes */
#define MZD_PKT_RAND_LEN5          5 /* rand len 64 bytes - 0xFFFF bytes */
/* 6 and 7 are reserved/undefined */
/* values 8 and greater are the exact length of the frame in bytes up to 0xFFFF */

/******************************************************************************
 MZD_FUNC MZD_STATUS mzdConfigurePktGeneratorChecker
 (
     IN MZD_DEV_PTR pDev,
     IN MZD_U16  mdioPort,
     IN MZD_U16  host_or_line,
     IN MZD_U16  laneOffset,
     IN MZD_BOOL readToClear,
     IN MZD_BOOL dontuseSFDinChecker,
     IN MZD_U16  pktPatternControl,
     IN MZD_BOOL generateCRCoff,
     IN MZD_U32  initialPayload,
     IN MZD_U16  frameLengthControl,
     IN MZD_U16  numPktsToSend,
     IN MZD_BOOL randomIPG,
     IN MZD_U16  ipgDuration
 );

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    host_or_line - which interface is being checked:
                   MZD_HOST_SIDE
                   MZD_LINE_SIDE
    laneOffset - 0..3 for lanes 0-3.
    readToClear - MZD_TRUE if the desired behavior is that when the
                  counters are read, they are reset. MZD_FALSE if the
                  desired behavior is that they must be explicitly cleared
                  by mzdPktGeneratorCounterReset() and reading
                  them just returns the current value without clearing them.
    dontuseSFDinChecker - MZD_TRUE indicates to start CRC checking after the
                      first 8 bytes in the packet, MZD_FALSE indicates
                      to look for SFD before starting CRC checking
    pktPatternControl - controls the generation of the payload. One of the
                        following:
                            MZD_PKT_NO_MASK
                            MZD_PKT_INV_SKIP_WRD
                            MZD_PKT_2INV_2NOT
                            MZD_PKT_LFT_SHFT_BYTE
                            MZD_PKT_RHT_SHFT_BYTE
                            MZD_PKT_LFT_SHFT_WRD
                            MZD_PKT_RHT_SHFT_WRD
                            MZD_PKT_INC_BYTE
                            MZD_PKT_DEC_BYTE
                            MZD_PKT_RANDOM_BYTE
                            MZD_PKT_RANDOM_WORD
    generateCRCoff - MZD_TRUE turns CRC generation off, MZD_FALSE turns
                     CRC generation on
    initialPayload - start of payload value. Format is from MS bit to
                     LS bit: BYTE3:BYTE2:BYTE1:BYTE0, bit 31 to bit 0,
                     left to right
    frameLengthControl - controls the length of the frame in bytes.
                         values 0...5 (see above) pick various random lengths
                         from 64 to a different stop value. 6/7 is undefined
                         and values 8 and greater are the exact frame length
                         in bytes. See definitions above MZD_PKT_RAND_LEN0-5.
    numPktsToSend - 0 stops generation, 0x001-0xFFFE sends exactly that number
                    of packets then stops. 0xFFFF sends continuously.
    randomIPG - MZD_TRUE uses a random IPG from 5 bytes to value specified
                in ipgDuration. MZD_FALSE uses fixed IPG as specified in
                ipgDuration.
    ipgDuration - Meaning depends on randomIPG (see above). Each bit
                  equals 4 bytes of idle. Valid range is 0...0x7FFF.

 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL if I/O error or bad parameter passed in (out of range)

 Description:
    This function is used to configure the packet generator/checker.

    Users can call mzdStartStopPktGenTraffic() to control traffic if don't
    want to touch other configuration.

 Side effects:
    None

 Notes/Warnings:
    Call mzdEnablePktGeneratorChecker() to enable/start the generator/checker.

******************************************************************************/
MZD_FUNC MZD_STATUS mzdConfigurePktGeneratorChecker
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16  mdioPort,
    IN MZD_U16  host_or_line,
    IN MZD_U16  laneOffset,
    IN MZD_BOOL readToClear,
    IN MZD_BOOL dontuseSFDinChecker,
    IN MZD_U16  pktPatternControl,
    IN MZD_BOOL generateCRCoff,
    IN MZD_U32  initialPayload,
    IN MZD_U16  frameLengthControl,
    IN MZD_U16  numPktsToSend,
    IN MZD_BOOL randomIPG,
    IN MZD_U16  ipgDuration
);

/******************************************************************************
 MZD_FUNC MZD_STATUS mzdEnablePktGeneratorChecker
 (
     IN MZD_DEV_PTR pDev,
     IN MZD_U16  mdioPort,
     IN MZD_U16  host_or_line,
     IN MZD_U16  laneOffset,
     IN MZD_BOOL enableGenerator,
     IN MZD_BOOL enableChecker
 );

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    host_or_line - which interface is being checked:
                   MZD_HOST_SIDE
                   MZD_LINE_SIDE
    laneOffset - 0..3 for lanes 0-3. 
    enableGenerator - MZD_TRUE starts the packet generator, MZD_FALSE
                      stops it
    enableChecker - MZD_TRUE starts the packet checker, MZD_FALSE
                    stops it

 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL

 Description:
    This function enables/disables either the packet generator or packet checker
    (or both).

    The packet generator traffic won't start immediately if numPktsToSend
    is set to 0 in previous mzdConfigurePktGeneratorChecker() call or
    mzdStartStopPktGenTraffic() call. If numPktsToSend was set to an
    non-zero value, the traffic will start right after enabling the generator.

 Side effects:
    None

 Notes/Warnings:
    A lane soft reset(mzdLaneSoftReset)is recommended after disabling this feature.

******************************************************************************/
MZD_FUNC MZD_STATUS mzdEnablePktGeneratorChecker
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16  mdioPort,
    IN MZD_U16  host_or_line,
    IN MZD_U16  laneOffset,
    IN MZD_BOOL enableGenerator,
    IN MZD_BOOL enableChecker
);

/******************************************************************************
 MZD_FUNC MZD_STATUS mzdStartStopPktGenTraffic
 (
     IN MZD_DEV_PTR pDev,
     IN MZD_U16  mdioPort,
     IN MZD_U16  host_or_line,
     IN MZD_U16  laneOffset,
     IN MZD_U16 numPktsToSend
 );

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    host_or_line - which interface is being checked:
                   MZD_HOST_SIDE
                   MZD_LINE_SIDE
    laneOffset - 0..3 for lanes 0-3.
    numPktsToSend - 0 stops generation, 0x001-0xFFFE sends exactly that number
                    of packets then stops. 0xFFFF sends continuously.

 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL if I/O error or bad parameter passed in (out of range)

 Description:
    This function is used to start or stop packet generator traffic.

    Set numPktsToSend to 0x001-0xFFFF will start traffic immediately if packet
    generator has been enabled on the given lane, side and mdioPort.
    Set 0 to stop traffic.

    If packet generator has not been enabled yet, the traffic will start once
    enabling the packet generator.

 Side effects:
    None.

 Notes/Warnings:
    None.

******************************************************************************/
MZD_FUNC MZD_STATUS mzdStartStopPktGenTraffic
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16  mdioPort,
    IN MZD_U16  host_or_line,
    IN MZD_U16  laneOffset,
    IN MZD_U16 numPktsToSend
);

/******************************************************************************
 MZD_FUNC MZD_STATUS mzdPktGeneratorCounterReset
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
    This function explicitly clears all the counters when the packet
    generator/checker has been setup to be cleared by writing a
    bit to the control register instead of being cleared when
    the counter(s) are read.

 Side effects:
    None

 Notes/Warnings:
    None
******************************************************************************/
MZD_FUNC MZD_STATUS mzdPktGeneratorCounterReset
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset
);

typedef enum
{
    MZD_PKT_GET_TX = 0,
    MZD_PKT_GET_RX = 1,
    MZD_PKT_GET_ERR = 2
} MZD_PKT_COUNT_TYPE;

/******************************************************************************
 MZD_FUNC MZD_STATUS mzdPktGeneratorGetCounter
 (
     IN MZD_DEV_PTR pDev,
     IN MZD_U16  mdioPort,
     IN MZD_U16  host_or_line,
     IN MZD_U16  laneOffset,
     IN MZD_PKT_COUNT_TYPE  pktCntType,
     OUT MZD_U64 *packetCount,
     OUT MZD_U64 *byteCount
 );

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    host_or_line - which interface is being checked:
                   MZD_HOST_SIDE
                   MZD_LINE_SIDE
    laneOffset - 0..3 for lanes 0-3. 
    pktCntType - One of the following, depending on which set of counters
                   is being read:
                       MZD_PKT_GET_TX to read the generator/transmit counters
                       MZD_PKT_GET_RX to read the checker/receive counters
                       MZD_PKT_GET_ERR to read the packet error counter


 Outputs:
    packetCount - tx/rx/err packet count in the following format
                  from MS bit to LS bit (note top 16-bits is always
                  0, since this is a 48-bit result):
                  0:WORD2:WORD1:WORD0 where each word is a 16-bit
                  unsigned value, and words are combined into
                  a single, 48-bit result.
    byteCount - tx/rx byte count in the following format
                  from MS bit to LS bit (note top 16-bits is always
                  0, since this is a 48-bit result):
                  0:WORD2:WORD1:WORD0 where each word is a 16-bit
                  unsigned value, and words are combined into
                  a single, 48-bit result. NOTE: This parameter
                  is always 0 when pktCntType is set to
                  MZD_PKT_GET_ERR, since error counter is a packet
                  count only.

 Returns:
    MZD_OK or MZD_FAIL

 Description:
    This function is used to read the transmit/receive/error counter for the
    packet generator/checker.

 Side effects:
    None

 Notes/Warnings:
    byteCount is always 0 for MZD_PKT_GET_ERR, since the error counter
    only counts packets.

    If packet generator/checker was configured to clear counter(s) on read,
    this function will clear the counter being read.

******************************************************************************/
MZD_FUNC MZD_STATUS mzdPktGeneratorGetCounter
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16  mdioPort,
    IN MZD_U16  host_or_line,
    IN MZD_U16  laneOffset,
    IN MZD_PKT_COUNT_TYPE  pktCntType,
    OUT MZD_U64 *packetCount,
    OUT MZD_U64 *byteCount
);

typedef enum
{
    /* NRZ signal supported PRBS patterns starts here */ 
    MZD_PRBS31,   /* 0000b */
    MZD_PRBS7,    /* 0001b */  
    MZD_PRBS9,    /* 0010b */   
    MZD_PRBS23,   /* 0011b */  
    MZD_IPRBS31,  /* 0100b */  
    MZD_IPRBS7,   /* 0101b */  
    MZD_IPRBS9,   /* 0110b */  
    MZD_IPRBS23,  /* 0111b */  
    MZD_PRBS15,   /* 1000b */  
    MZD_IPRBS15,  /* 1001b */  
    MZD_PRBS58,   /* 1010b */  
    MZD_IPRBS58,  /* 1011b */  
    MZD_PRBS13,   /* 1100b */  
    MZD_IPRBS13,  /* 1101b */  
    MZD_JP03AB,   /* 1110b */
    MZD_GEN_TX,   /* 1111b */

    /* PAM-4 50G/100G supported PRBS patterns start here */ 
    MZD_PAM4_PRBS31Q = 100,
    MZD_PAM4_PRBS13Q,
    MZD_PAM4_PRBS15Q,  
    MZD_PAM4_JP03A,
    MZD_PAM4_JP03B,
    MZD_PAM4_SSPRQ  /* Short Stress Pattern Random - Quaternary; 
                       PAM-4 50G PCS only */
} MZD_PRBS_SELECTOR_TYPE;

typedef enum
{
    MZD_PRBS_NONE,       /* goes with all other options */
    MZD_JP03A,           /* goes with MZD_LINE_JP03AB to select JP03A */
    MZD_JP03B,           /* goes with MZD_LINE_JP03AB to select JP03B */
    MZD_LOW_FREQ,        /* goes with MZD_LINE_GEN_TX */
    MZD_SQUARE_WAV,      /* goes with MZD_LINE_GEN_TX */
    MZD_MIXED_FREQ       /* goes with MZD_LINE_GEN_TX */
} MZD_PATTERN_AB_SELECTOR_TYPE;

/*******************************************************************************
 MZD_FUNC MZD_STATUS mzdSetPRBSPattern
 (
     IN MZD_DEV_PTR pDev,
     IN MZD_U16  mdioPort,
     IN MZD_U16  host_or_line,    
     IN MZD_U16  laneOffset,
     IN MZD_PRBS_SELECTOR_TYPE pattSel,
     IN MZD_PATTERN_AB_SELECTOR_TYPE pattSubSel
 );

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    host_or_line - which interface is being checked:
                   MZD_HOST_SIDE
                   MZD_LINE_SIDE
    laneOffset - 0..3 for lanes 0-3. 
    pattSel - one of the patterns from the MZD_PRBS_SELECTOR_TYPE
         
    pattSubSel - valid only if pattSel is either MZD_JP03AB or MZD_GEN_TX 
                 MZD_JP03AB use: MZD_JP03A or MZD_JP03B
                 MZD_GEN_TX use: MZD_LOW_FREQ or MZD_SQUARE_WAV or MZD_MIXED_FREQ  

 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL if I/O error or bad parameter passed in (out of range)

 Description:
    This function selects the type of PRBS pattern desired for the individual lane 
    offset on either the line or host side. Some pattern selections require further 
    input selection for pattSubSel.  Refer to the inputs description for the list 
    of selections.

 Side effects:
    None
    
 Notes/Warnings:
    From the MZD_PRBS_SELECTOR_TYPE pattern selections, there are 2 sets of pattern 
    types.  The PAM-4 PRBS are designed for the PAM-4 signal modes and the non-PAM4 
    are for the NRZ signal modes.  Before running the PRBS test, the link should be 
    up with the appropriate signal mode. 
    
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdSetPRBSPattern
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16  mdioPort,
    IN MZD_U16  host_or_line,    
    IN MZD_U16  laneOffset,
    IN MZD_PRBS_SELECTOR_TYPE pattSel,
    IN MZD_PATTERN_AB_SELECTOR_TYPE pattSubSel
);

#define MZD_PRBS_OPT_PAM4_INVERT         (1<<0)
/*******************************************************************************
MZD_FUNC MZD_STATUS mzdPRBSPatternOption
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16  mdioPort,
    IN MZD_U16  host_or_line,
    IN MZD_U16  laneOffset,
    IN MZD_U16 patternOption
);
 
 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    host_or_line - which interface is being set:
                   MZD_HOST_SIDE
                   MZD_LINE_SIDE
    laneOffset - 0..3 for lanes 0-3. 
    patternOption - pattern Option

 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL if I/O error or bad parameter passed in (out of range)

 Description:
    This function is used to configure PRBS pattern option. Please see the definitions
    above.

 Side effects:
    None.
   
 Notes/Warnings:
    None
   
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdPRBSPatternOption
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16  mdioPort,
    IN MZD_U16  host_or_line,
    IN MZD_U16  laneOffset,
    IN MZD_U16 patternOption
);

/*******************************************************************************
 MZD_FUNC MZD_STATUS mzdSetPRBSEnableTxRx
 (
     IN MZD_DEV_PTR pDev,
     IN MZD_U16  mdioPort,     
     IN MZD_U16  host_or_line,
     IN MZD_U16  laneOffset,
     IN MZD_U16  txEnable,
     IN MZD_U16  rxEnable,
     IN MZD_PRBS_SELECTOR_TYPE pattSel
 );
 
 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31    
    host_or_line - which interface is being set:
                   MZD_HOST_SIDE
                   MZD_LINE_SIDE        
    laneOffset - 0..3 for lanes 0-3. 
    txEnable - MZD_ENABLE or MZD_DISABLE to start or stop the transmit
               need to be enabled to clear the TX counter
    rxEnable - MZD_ENABLE or MZD_DISABLE to start or stop the receiver
               need to be enabled to clear the RX counters
    pattSel - one of the patterns from the MZD_PRBS_SELECTOR_TYPE

 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL if I/O error or bad parameter passed in (out of range)

 Description:
    This function is used to start or stop the PRBS transmit and/or 
    receiver.

 Side effects:
    None
   
 Notes/Warnings:
    From the MZD_PRBS_SELECTOR_TYPE pattern selections, there are 2 sets of pattern 
    types.  The PAM-4 PRBS are designed for the PAM-4 signal modes and the non-PAM4 
    are for the NRZ signal modes.  Before running the PRBS test, the link should be 
    up with the appropriate signal mode. 
   
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdSetPRBSEnableTxRx
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16  mdioPort,    
    IN MZD_U16  host_or_line,
    IN MZD_U16  laneOffset,
    IN MZD_U16  txEnable,
    IN MZD_U16  rxEnable,
    IN MZD_PRBS_SELECTOR_TYPE pattSel
);

/*******************************************************************************
 MZD_FUNC MZD_STATUS mzdPRBSCounterReset
 (
     IN MZD_DEV_PTR pDev,
     IN MZD_U16  mdioPort,
     IN MZD_U16  host_or_line,    
     IN MZD_U16  laneOffset
 );
 
 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    host_or_line - which interface is being set:
                   MZD_HOST_SIDE
                   MZD_LINE_SIDE        
    laneOffset - 0..3 for lanes 0-3. 

 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL if I/O error or bad parameter passed in (out of range)

 Description:
    This function is used to reset the counters when the PRBS has been
    setup for manual clearing instead of clear-on-read. Default
    is to use manual clearing. Call mzdSetPRBSEnableClearOnRead() to
    enable clearing the counters when reading the registers.

 Side effects:
    None
   
 Notes/Warnings:
    The counter can only be cleared when the PRBS is enabled.
    Assumes the PRBS has not been setup for clear-on-read.
   
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdPRBSCounterReset
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16  mdioPort,    
    IN MZD_U16  host_or_line,    
    IN MZD_U16  laneOffset
);

/*******************************************************************************
 MZD_FUNC MZD_STATUS mzdSetPRBSWaitForLock
 (
     IN MZD_DEV_PTR pDev,
     IN MZD_U16  mdioPort,    
     IN MZD_U16  host_or_line,    
     IN MZD_U16  laneOffset,
     IN MZD_U16  disableWaitforLock
 );
 
 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - port number, 0-31    
    host_or_line - which interface is being set:
                   MZD_HOST_SIDE
                   MZD_LINE_SIDE        
    laneOffset - 0..3 for lanes 0-3
    disableWaitforLock - 1 counts PRBS before locking, 0 waits
        for locking before counting

 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL if I/O error or bad parameter passed in (out of range)

 Description:
    Configures PRBS wait lock to wait for locking before counting

 Side effects:
    None
   
 Notes/Warnings:
    Should be called before starting the receiver.
   
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdSetPRBSWaitForLock
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16  mdioPort,    
    IN MZD_U16  host_or_line,    
    IN MZD_U16  laneOffset,
    IN MZD_U16  disableWaitforLock
);

/*******************************************************************************
 MZD_FUNC MZD_STATUS mzdGetPRBSWaitForLock
 (
     IN MZD_DEV_PTR pDev,
     IN MZD_U16  mdioPort,    
     IN MZD_U16  host_or_line,    
     IN MZD_U16  laneOffset,
     OUT MZD_U16 *disableWaitforLock
 );
 
 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - port number, 0-31    
    host_or_line - which interface is being set:
                   MZD_HOST_SIDE
                   MZD_LINE_SIDE        
    laneOffset - 0..3 for lanes 0-3

 Outputs:
    disableWaitforLock - 1 counts PRBS before locking, 0 waits
        for locking before counting

 Returns:
    MZD_OK or MZD_FAIL if I/O error or bad parameter passed in (out of range)

 Description:
    Returns configuration for PRBS whether it is set to wait for locking
    or not before counting.

 Side effects:
    None
   
 Notes/Warnings:
    None
   
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdGetPRBSWaitForLock
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16  mdioPort,    
    IN MZD_U16  host_or_line,    
    IN MZD_U16  laneOffset,
    OUT MZD_U16 *disableWaitforLock
);

/*******************************************************************************
 MZD_FUNC MZD_STATUS mzdSetPRBSClearOnRead
 (
     IN MZD_DEV_PTR pDev,
     IN MZD_U16  mdioPort,    
     IN MZD_U16  host_or_line,    
     IN MZD_U16  laneOffset,
     IN MZD_U16  enableReadClear
 );
 
 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - port number, 0-31
    host_or_line - which interface is being set:
                   MZD_HOST_SIDE
                   MZD_LINE_SIDE        
    laneOffset - 0..3 for lanes 0-3
    enableReadClear - 1 enables clear-on-read, 0 enables manual clear 
        (by setting register bit).

 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL if I/O error or bad parameter passed in (out of range)

 Description:
    The default for the PRBS counters is to be cleared manually by 
    calling mzdPRBSCounterReset(). This configures either to read-clear,or
    manual clear (by setting a register bit).

 Side effects:
    None
   
 Notes/Warnings:
    Should be called before starting the receiver.
   
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdSetPRBSClearOnRead
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16  mdioPort,    
    IN MZD_U16  host_or_line,    
    IN MZD_U16  laneOffset,
    IN MZD_U16  enableReadClear
);


/*******************************************************************************
 MZD_FUNC MZD_STATUS mzdGetPRBSClearOnRead
 (
     IN MZD_DEV_PTR pDev,
     IN MZD_U16  mdioPort,    
     IN MZD_U16  host_or_line,    
     IN MZD_U16  laneOffset,
     OUT MZD_U16  *enableReadClear
 );
 
 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - port number, 0-31
    host_or_line - which interface is being set:
                   MZD_HOST_SIDE
                   MZD_LINE_SIDE        
    laneOffset - 0..3 for lanes 0-3

 Outputs:
    enableReadClear - 1 clear-on-read enabled, 0 manual clear is enabled

 Returns:
    MZD_OK or MZD_FAIL if I/O error or bad parameter passed in (out of range)

 Description:
    Checks whether the PRBS is configured to clear-on-read (1) or manual
    cleared (0).

 Side effects:
    None
   
 Notes/Warnings:
    None
   
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdGetPRBSClearOnRead
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16  mdioPort,    
    IN MZD_U16  host_or_line,    
    IN MZD_U16  laneOffset,
    OUT MZD_U16  *enableReadClear
);

/*******************************************************************************
 MZD_FUNC MZD_STATUS mzdGetPRBSLocked
 (
     IN MZD_DEV_PTR pDev,
     IN MZD_U16  mdioPort,
     IN MZD_U16  host_or_line,
     IN MZD_U16  laneOffset,
     OUT MZD_BOOL *prbsLocked
 );
 
 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    host_or_line - which interface is being set:
                   MZD_HOST_SIDE
                   MZD_LINE_SIDE        
    laneOffset - 0..3 for lanes 0-3

 Outputs:
    prbsLocked - MZD_TRUE if the PRBS receiver is locked, MZD_FALSE otherwise

 Returns:
    MZD_OK or MZD_FAIL if I/O error or bad parameter passed in (out of range)

 Description:
    Returns the indicator if the PRBS receiver is locked or not.

 Side effects:
    None
   
 Notes/Warnings:
    Should be called after starting the receiver. This is a read-only bit.
   
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdGetPRBSLocked
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16  mdioPort,
    IN MZD_U16  host_or_line,
    IN MZD_U16  laneOffset,
    OUT MZD_BOOL *prbsLocked
);

/*******************************************************************************
 MZD_FUNC MZD_STATUS mzdGetPRBSCounts
 (
     IN MZD_DEV_PTR pDev,
     IN MZD_U16  mdioPort,
     IN MZD_U16  host_or_line,
     IN MZD_U16  laneOffset,
     IN MZD_PRBS_SELECTOR_TYPE pattSel,
     OUT MZD_U64 *txBitCount,
     OUT MZD_U64 *rxBitCount,
     OUT MZD_U64 *rxBitErrorCount
 );
 
 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    host_or_line - which interface is being set:
                   MZD_HOST_SIDE
                   MZD_LINE_SIDE        
    laneOffset - 0..3 for lanes 0-3
    pattSel - one of the patterns from the MZD_PRBS_SELECTOR_TYPE

 Outputs:
    txBitCount - number of bits transmitted
    rxBitCount - number of bits received
    rxBitErrorCount - number of bits in error

 Returns:
    MZD_OK or MZD_FAIL if I/O error or bad parameter passed in (out of range)

 Description:
    Returns the 48-bit results in the output parameters above. If the PRBS
    control has been set to clear-on-read, the registers will clear. If
    not, they must be cleared manually by calling mzdPRBSCounterReset()

 Side effects:
    None
   
 Notes/Warnings:
    rxBitErrorCount will not be computed for PAM-4 PRBS MZD_PAM4_JP03A and 
    MZD_PAM4_JP03B.

*******************************************************************************/
MZD_FUNC MZD_STATUS mzdGetPRBSCounts
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16  mdioPort,    
    IN MZD_U16  host_or_line,
    IN MZD_U16  laneOffset,
    IN MZD_PRBS_SELECTOR_TYPE pattSel,
    OUT MZD_U64 *txBitCount,
    OUT MZD_U64 *rxBitCount,
    OUT MZD_U64 *rxBitErrorCount
);

/*******************************************************************************
MZD_FUNC MZD_STATUS mzdSetTxRxPolarity
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,     
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    IN MZD_U8 txPolarity,
    IN MZD_U8 rxPolarity
)

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    host_or_line - interface to be modified (MZD_HOST_SIDE or MZD_LINE_SIDE)
    laneOffset - 0..3 for lanes 0-3
    txPolarity - 1: invert Tx polarity, 0: normal polarity.
    rxPolarity - 1: invert Rx polarity, 0: normal polarity.
    
 Outputs:
    None

 Returns:
    MZD_OK - if set Tx/Rx polarity is successfully issued
    MZD_FAIL - otherwise returns MZD_FAIL

 Description:
    This function set the Tx/Rx polarity with the given input parameters. To invert 
    the polarity on a given lane, pass a 1 for that pin and the polarity will
    be inverted, pass a 0 to have the polarity match the pinout of the device.

 Side effects:
    None

 Notes/Warnings:
    The link will be down if the Tx and Rx polarities are mismatched. 
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdSetTxRxPolarity
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    IN MZD_U8 txPolarity,
    IN MZD_U8 rxPolarity
);

/*******************************************************************************
MZD_FUNC MZD_STATUS mzdGetTxRxPolarity
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    OUT MZD_U8 *txPolarity,
    OUT MZD_U8 *rxPolarity
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    host_or_line - interface to be modified (MZD_HOST_SIDE or MZD_LINE_SIDE)
    laneOffset - 0..3 for lanes 0-3
    
 Outputs:
    txPolarity - 1:inverted Tx polarity, 0:normal polarity.
    rxPolarity - 1:inverted Rx polarity, 0:normal polarity.

 Returns:
    MZD_OK - if Tx/Rx polarity is successfully read
    MZD_FAIL - otherwise returns MZD_FAIL

 Description:
    This function reads the Tx/Rx polarity with the given input parameters.
    It returns a 1 if the polarity has been inverted or a 0 if the polarity
    has not been inverted.

 Side effects:
    None

 Notes/Warnings:
    The link will be down if the Tx and Rx polarities are mismatched. 
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdGetTxRxPolarity
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    OUT MZD_U8 *txPolarity,
    OUT MZD_U8 *rxPolarity
);

/*******************************************************************************
MZD_FUNC MZD_STATUS mzdSetTxFFE
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,     
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    IN E_C112GX4_TXEQ_PARAM txEqParamType,
    IN MZD_U32 paramValue
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    host_or_line - interface to be modified (MZD_HOST_SIDE or MZD_LINE_SIDE)
    laneOffset - 0..3 for lanes 0-3

    txEqParamType - E_C112GX4_TXEQ_PARAM TX Equalization types:
            C112GX4_TXEQ_EM_PRE3_CTRL - Tx Third Pre-cursor Emphasis Control(B0 only)
            C112GX4_TXEQ_EM_PRE2_CTRL - Tx Second Pre-cursor Emphasis Control
            C112GX4_TXEQ_EM_PRE_CTRL  - Tx Pre-cursor Emphasis Control
            C112GX4_TXEQ_EM_MAIN_CTRL - Tx Main-cursor Emphasis Control
            C112GX4_TXEQ_EM_POST_CTRL - Tx Post-cursor Emphasis Control
            Note that the sum of pre3Cursor, pre2Cursor, preCursor, mainCursor and postCursor 
            must add up to a total of 63

    paramValue - the value of the txEqParamType selected type
    
 Outputs:
    None

 Returns:
    MZD_OK - if set Tx FFE is successfully issued
    MZD_FAIL - otherwise returns MZD_FAIL

 Description:
    This function set the Tx FFE with the given input parameters. To change 
    the Tx FFE on a given lane, select the txEqParamType type and provide the 
    paramValue.

 Side effects:
    None

 Notes/Warnings:
    Note that the sum of pre3Cursor, pre2Cursor, preCursor, mainCursor and postCursor 
    must add up to a total of 63

*******************************************************************************/
MZD_FUNC MZD_STATUS mzdSetTxFFE
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,     
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    IN E_C112GX4_TXEQ_PARAM txEqParamType,
    IN MZD_U32 paramValue
);

/*******************************************************************************
MZD_FUNC MZD_STATUS mzdGetTxFFE
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,     
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    IN E_C112GX4_TXEQ_PARAM txEqParamType,
    OUT MZD_U32* paramValue
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    host_or_line - interface to be modified (MZD_HOST_SIDE or MZD_LINE_SIDE)
    laneOffset - 0..3 for lanes 0-3

    txEqParamType - E_C112GX4_TXEQ_PARAM TX Equalization types:
            C112GX4_TXEQ_EM_PRE2_CTRL - Tx Second Pre-cursor Emphasis Control
            C112GX4_TXEQ_EM_PRE_CTRL  - Tx Pre-cursor Emphasis Control
            C112GX4_TXEQ_EM_MAIN_CTRL - Tx Main-cursor Emphasis Control
            C112GX4_TXEQ_EM_POST_CTRL - Tx Post-cursor Emphasis Control
            C112GX4_TXEQ_FIR_C_CTRL1  - FIR Tap Control 1
            C112GX4_TXEQ_FIR_C_CTRL2  - FIR Tap Control 2
            C112GX4_TXEQ_FIR_C_CTRL3  - FIR Tap Control 3
    
 Outputs:
    paramValue - the return value of the txEqParamType selected type

 Returns:
    MZD_OK - if read Tx FFE is successfully issued
    MZD_FAIL - otherwise returns MZD_FAIL

 Description:
    This function reads the Tx FFE for the given selected type in the txEqParamType.
    The paramValue returns the value of the selected type in the txEqParamType.

 Side effects:
    None

 Notes/Warnings:

 *******************************************************************************/
MZD_FUNC MZD_STATUS mzdGetTxFFE
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,     
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    IN E_C112GX4_TXEQ_PARAM txEqParamType,
    OUT MZD_U32* paramValue
);

/*******************************************************************
MZD_FUNC MZD_STATUS mzdSlotReset
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
    The slot reset performs a power down and reset on all 4 lanes on the pass-in mdioPort.
    This is used to clear all configured settings on the 4 lanes on a MDIO port. Slot change 
    reset sequence should be applied before setting to the new speed. This applies when the 
    MAC/MACSec is configured on these modes.

    Below table listed the speed changes from high speed to low speed that requires calling
    the mzdSlotReset.

    From Speed    To Speed
                    100GR4    100GR2    40GR4    50GR1    25GR1    10GR1    1GR1
     400GR8           X         X         X        X        X        X       X            
     200GR8           X         X         X        X        X        X       X              
     200GR4                     X                  X        X        X       X            

    Example of calling mzdSlotReset on all 4 MDIO ports:
    MZD_ATTEMPT(mzdSlotReset(pDev, pDev->mdioPort));
    MZD_ATTEMPT(mzdSlotReset(pDev, pDev->mdioPort+1));
    MZD_ATTEMPT(mzdSlotReset(pDev, pDev->mdioPort+2));
    MZD_ATTEMPT(mzdSlotReset(pDev, pDev->mdioPort+3));
     
 Side effects:

 Notes/Warnings:
    None
*******************************************************************/
MZD_FUNC MZD_STATUS mzdSlotReset
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort
);

/* Definitions and data structure used for the eye measurements */
#define MZD_EYE_DEFAULT_VOLT_STEPS 40
#define MZD_EYE_DEFAULT_PHASE_LEVEL 90

#define MZD_EYE_MAX_VOLT_STEPS 64
#define MZD_EYE_MAX_PHASE_LEVEL 128

typedef struct _MZD_SERDES_EYE_RAW
{
    MZD_32 eyeRawData[(MZD_EYE_MAX_PHASE_LEVEL * 2) + 1][(MZD_EYE_MAX_VOLT_STEPS * 2) + 1];
} MZD_SERDES_EYE_RAW, *PMZD_SERDES_EYE_RAW;

/******************************************************************************
MZD_STATUS mzdSerdesGetEye
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    IN E_C112GX4_EYE_TMB eyeTMB,
    IN MZD_U16 voltageSteps,
    IN MZD_U16 phaseLevels,
    IN MZD_U32 minSamples,
    IN MZD_U32 berThreshold,
    OUT MZD_U16 *eyeWidth,
    OUT MZD_U16 *eyeHeight,
    OUT PMZD_SERDES_EYE_RAW pEyeRawData
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    host_or_line - interface to be modified (MZD_HOST_SIDE or MZD_LINE_SIDE)
    laneOffset - 0..3 for lanes 0-3
    eyeTMB - E_C112GX4_EYE_TMB option:
                C112GX4_EYE_MID
                C112GX4_EYE_TOP
                C112GX4_EYE_BOT
             Top and bottom eye only apply to PAM4 mode 
    voltageSteps - 0: use MZD_EYE_DEFAULT_VOLT_STEPS; otherwise use input value
    phaseLevels -  0: use MZD_EYE_DEFAULT_PHASE_LEVEL; otherwise use input value
    minSamples - number of bits for eye to sample. If targeting for 1e-4 error rate, 
                 it needs at least 1e+4 bits sampled.
    berThreshold - Setting Bit Error Rate Threshold in nano (factor of 1E-9)
                   For PAM-4 100G single lane mode, the berThreshold ranges 100000 or higher 

    Guidelines for voltageSteps and phaseLevels based on lane speed:
    Lane speed  voltageSteps  phaseLevels
    10G             40            90
    25G             50            40
    50G             32            32

 Outputs:
    eyeWidth - width of the eye opening 
    eyeHeight - height of the eye opening
    pEyeRawData - 2 dimensional array defined in PMZD_SERDES_EYE_RAW structure 
    
 Returns:
    MZD_OK if successful, MZD_FAIL otherwise

 Description:
    The function retrieves the eye measurement raw data and put it into a 2 dimensional 
    array defined in MZD_SERDES_EYE_RAW structure. The 2 dimensional array stores 
    the phase (horizontal) and the amplitude(vertical) data of a single SerDes lane 
    provided as the input parameter.   

    For the PAM4 signal, the eyeTMB option is used for plot the selected eye measurement.

    The mzdSerdesEyePlotStats() API will process the raw eye 2 dimensional array 
    and plot the eye diagram with the debug logging enabled.

    Use the API_C112GX4_EOMGetWidthHeight() if the eye diagram plotting is not needed. 
    The API_C112GX4_EOMGetWidthHeight() is faster in retrieving the eye width and height 
    without plotting the eye diagram. The API_C112GX4_EOMGetWidthHeight() returns the code word
    for both the eye width and height. API_C112GX4_EOMConvertWidthHeight() converts the code
    word to width to mUI and height to mV.

    Refer to the mzdSampleGetEye sample on the usage. 
          
 Side effects:
    None

 Notes/Warnings:
    This mzdSerdesGetEye API will not work for PAM-4 100G single lane mode. To measure 
    the eye for the PAM-4 100G single lane, refer to mzdSampleGetEyeWidthHeight() in the 
    mzdSample.c file to measure the eye width and height.

    Starting in MZD API version 2.6.0 and newer, the mzdSampleGetEyeWidthHeight() and 
    mzdSerdesEyePlotStats() samples are the preferred way for calling eye measurement.

    This mzdSampleGetEye sample that calls mzdSerdesEyePlotStats() is the older eye plotting 
    API that is not removed for backward compatibility. The preferred way is to use the 
    mzdSampleSerDesEyePlot() sample to plot the eye diagram.

    To speed up measuring the eye width and height without plotting the eye diagram, 
    call API_C112GX4_EOMGetWidthHeight() and API_C112GX4_EOMConvertWidthHeight() to
    convert to mUI and mV.

    The lower speeds 5G and slower will require a larger voltageSteps and phaseLevels. 

    The link must be up before calling the mzdSerdesEyeRawData() API. Otherwise,
    the return raw data will not be meaningful.
    
    Depending on the link speed, this eye API may take up to a minute to complete. 
    
    Calling this function requires blocking all other caller from reading and 
    writing to the APB address until this call is completed.
*******************************************************************************/
MZD_STATUS mzdSerdesGetEye
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    IN E_C112GX4_EYE_TMB eyeTMB,
    IN MZD_U16 voltageSteps,
    IN MZD_U16 phaseLevels,
    IN MZD_U32 minSamples,
    IN MZD_U32 berThreshold,
    OUT MZD_U16 *eyeWidth,
    OUT MZD_U16 *eyeHeight,
    OUT PMZD_SERDES_EYE_RAW pEyeRawData
);

/******************************************************************************
MZD_STATUS mzdSerdesEyePlotStats
(
    IN MZD_DEV_PTR pDev,
    IN PMZD_SERDES_EYE_RAW pEyeRawData,
    IN MZD_U16 voltageSteps,
    IN MZD_U16 phaseLevels
);

  Inputs:  
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    pEyeRawData - 2 dimensional array defined in MZD_SERDES_EYE_RAW structure 
                   with valid raw eye data
    voltageSteps - must be the same as the voltageSteps used in mzdSerdesGetEye 
                   when measuring the eye
                   0: use MZD_EYE_DEFAULT_VOLT_STEPS; otherwise use input value
    phaseLevels -  must be the same as the phaseLevels used in mzdSerdesGetEye 
                   when measuring the eye
                   0: use MZD_EYE_DEFAULT_PHASE_LEVEL; otherwise use input value

  Outputs:
    None

  Returns:
    MZD_OK when success; otherwise MZD_FAIL

  Description:
    The function will process the raw data of an eye 2 dimensional array 
    and plot the eye diagram with the debug logging enabled. 

    Use the API_C112GX4_EOMGetWidthHeight() if the eye diagram plotting is not needed. 
    The API_C112GX4_EOMGetWidthHeight() is faster in retrieving the eye width and height 
    without plotting the eye diagram.

    Refer to the mzdSampleGetEye sample on the usage. 

  Side effects:
    None

  Notes/Warnings:
    This API will not work for PAM-4 100G single lane mode. To measure the eye for the  
    PAM-4 100G single lane, refer to mzdSampleGetEyeWidthHeight() in the sample file
    reading the measure the eye width and height. The eye plotting API will not work for
    the PAM-4 100G single lane.

    Need to provide valid raw eye 2 dimensional array as defined in the 
    MZD_SERDES_EYE_RAW structure 
*******************************************************************************/
MZD_STATUS mzdSerdesEyePlotStats
(
    IN MZD_DEV_PTR pDev,
    IN PMZD_SERDES_EYE_RAW pEyeRawData,
    IN MZD_U16 voltageSteps,
    IN MZD_U16 phaseLevels
);

/*******************************************************************************
 Dump states APIs
*******************************************************************************/
typedef struct _MZD_DIAG_DFE
{
    MZD_32 dc;
    MZD_32 vref;
    MZD_32 taps[39];
} MZD_DIAG_DFE;

typedef struct _MZD_DIAG_TX_FFE
{
    MZD_U32 preCursor;
    MZD_U32 pre2Cursor;
    MZD_U32 pre3Cursor;
    MZD_U32 mainCursor;
    MZD_U32 postCursor;
} MZD_DIAG_TX_FFE;

typedef struct _MZD_STATE_DUMP  /* Dump info for a MDIO port */
{
    MZD_DEV devStuct;
    MZD_U8 apiVersion[3];
    MZD_U8 fwVersion[4];
    MZD_U8 serdesRevision[4];
    MZD_32  coreTemperature;
    MZD_U16 cntlPCSReg;       /* 3/4.0000, ..., 3/4.4000 */
    MZD_U16 statusPCSReg[2];  /* 3/4.0001, ..., 3/4.4001, 0:current, 1:latched */
    MZD_U16 modeSelectReg;    /* 3/4.F000, ..., 3/4.F003 */
    MZD_DIAG_DFE dfe;
    MZD_DIAG_TX_FFE txFFE;
    MZD_U32 ctrlVal[20];
    MZD_U32 dfeRes[15];
} MZD_STATE_DUMP, *PMZD_STATE_DUMP;

/*******************************************************************************
MZD_FUNC MZD_STATUS mzdDiagStateDump
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort, 
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    IN MZD_U32 stateDumpOptions,
    OUT PMZD_STATE_DUMP pStateDumpInfo
);
 
 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    host_or_line - interface to be modified (MZD_HOST_SIDE or MZD_LINE_SIDE)
    laneOffset - 0..3 for lanes 0-3
    stateDumpOptions - various state dump options; 0:default is all
                       (reserved for future use)

 Outputs:
    pStateDumpInfo - retrieves the info in the MZD_STATE_DUMP structure. All the 
          Rx state dump info will be displayed in the logging output. See  
          notes/warnings below for logging output 
 
 Returns:
    MZD_OK - if successfully retrieve dump info
    MZD_FAIL - otherwise returns MZD_FAIL
 
 Description:
    This function retrieves all the useful state information on a provided lane. 
    Information includes the device structure, temperature, voltage, versions, 
    mode selection, link info, Rx DFE, Tx FFEs coefficients, etc.. are either  
    logged in the MZD_STATE_DUMP structure or displayed in the output logging.
 
 Side effects:
    None
 
 Notes/Warnings:
    The Rx state dump and all loggings are output from the MZD_DBG_INFO macro. The
    MZD_DBG_INFO should be implemented and enabled for this mzdDiagStateDump API.
    Some of these data in the state dump are used only for internal debugging and 
    would be not meaningful for end user.
    Contact customer support for more details on the state dump output. 
 *******************************************************************************/
MZD_FUNC MZD_STATUS mzdDiagStateDump
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort, 
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    IN MZD_U32 stateDumpOptions,
    OUT PMZD_STATE_DUMP pStateDumpInfo
);

#if C_LINKAGE
#if defined __cplusplus
}
#endif
#endif

#endif /* defined MZDDIAG_H */
