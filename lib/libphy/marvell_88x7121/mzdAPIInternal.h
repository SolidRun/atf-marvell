/*******************************************************************************
Copyright (c) 2014 Marvell.
If you received this File from Marvell and you have entered into a commercial
license agreement (a "Commercial License") with Marvell, the File is licensed
to you under the terms of the applicable Commercial License.
*******************************************************************************/

/********************************************************************
This file contains functions and data that are strictly internal
for the proper functioning of the API on the Marvell X7121 PHY.
********************************************************************/
#ifndef MZDINTRNL_H
#define MZDINTRNL_H

#if C_LINKAGE
#if defined __cplusplus
    extern "C" {
#endif
#endif

extern const MZD_U16 opModeTable[MZD_OP_MODE_COUNT][MZD_OP_TABLE_COUNT];

#define MZD_RESET_TIMEOUT  5000 /* 5 sec max wait for power down HW reset */
#define MAX_SWRESET_WAIT 1000

/* This macro is handy for calling a function when you want to test the */
/* return value and return MZD_FAIL, if the function returned MZD_FAIL, */
/* otherwise continue. Will set the return code to MZD_IO_ERROR. */
#define MZD_TRY_IO(xFuncToTry) if (xFuncToTry == MZD_FAIL) \
                                  {*errCode = MZD_IO_ERROR; \
                                   MZD_DBG_ERROR("MZD_TRY_IO failed at %s: line:%u\n",__FUNCTION__,__LINE__);\
                                   return MZD_FAIL;}


/*******************************************************************************
 MZD_STATUS mzdIsPortValid
    Check the MDIO port address if it is valid against the port address input
    during the mzdInitDriver initialization
*******************************************************************************/
MZD_STATUS mzdIsPortValid
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort
);

/*******************************************************************************
 MZD_STATUS mzdIsOpModeSupported
    Check if Op Mode is supported for the device
*******************************************************************************/
MZD_STATUS mzdIsOpModeSupported
(
    IN MZD_DEV_PTR pDev,
    IN MZD_OP_MODE opMode,
    IN MZD_U16 host_or_line
);

/*******************************************************************************
 MZD_STATUS mzdIsOpModeValid
    Check the host and line Op Mode if it is valid combination
*******************************************************************************/
MZD_STATUS mzdIsOpModeValid
(
    IN MZD_DEV_PTR pDev,
    IN MZD_OP_MODE lineOpMode,
    IN MZD_OP_MODE hostOpMode
);

/*******************************************************************************
 MZD_STATUS mzdCheckOpModeLaneOffset
    Check if the lane offset is valid for the operational mode
*******************************************************************************/
MZD_STATUS mzdCheckOpModeLaneOffset
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_OP_MODE opMode
);

/*******************************************************************************
 MZD_STATUS mzdIsLaneOffsetValid
    Check if the lane offset is valid for the current mode setting of the
    given host or line side. Gets the current opMode and checks if the laneOffset
    is in range (0-3 for single lanes, 0 or 4 lanes, or 0,2 for 2 lane modes).
*******************************************************************************/
MZD_STATUS mzdIsLaneOffsetValid
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset
);

#define MZD_FEATURE_HMUX         1
#define MZD_FEATURE_PTP          2
#define MZD_FEATURE_MACSEC       4
#define MZD_FEATURE_SERDES_MUX   8
/*******************************************************************************
 MZD_STATUS mzdIsFeatureSupported
    Check if feature is supported based on the device type
*******************************************************************************/
MZD_STATUS mzdIsFeatureSupported
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 featureOption
);

/*******************************************************************************
 MZD_STATUS mzdCheckNeedReConfig
    Check if the new opMode on the laneOffset needs port re-configuration 
*******************************************************************************/
MZD_STATUS mzdCheckNeedReConfig
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    IN MZD_OP_MODE opMode
);

/*******************************************************************
 MZD_STATUS mzdSetConfigInfo
    Set the config info on the Line or Host config structure
*******************************************************************/
MZD_STATUS mzdSetConfigInfo
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    IN MZD_OP_MODE opMode
);

/******************************************************************************
MZD_STATUS mzdAutoNegControl
    Enables or disables AN and restarts it. If it is enabled AN will
    restart if swReset is MZD_TRUE. If it is disabled, the link will drop 
    and stay down if swReset is MZD_TRUE.

******************************************************************************/
MZD_STATUS mzdAutoNegControl
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    IN MZD_U16 enableAutoNeg,
    IN MZD_BOOL swReset
);

/*******************************************************************
 MZD_STATUS mzdConfigAutoNeg
   Configures the AutoNeg and Training mode setting for the host or 
   line sides
*******************************************************************/
MZD_STATUS mzdConfigAutoNeg
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    IN MZD_OP_MODE opMode,
    IN MZD_U16 enableFlag /* MZD_ENABLE or MZD_DISABLE */
);

/*******************************************************************
 MZD_STATUS mzdSetFixedMode
    Setting the Line or Host mode selection
*******************************************************************/
MZD_STATUS mzdSetFixedMode
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    IN MZD_U32 modeOptionSel,
    IN MZD_MODE_OPTION_STRUCT modeOption,
    IN MZD_OP_MODE opMode
);

/*******************************************************************************
 MZD_STATUS mzdGetLaneRxTrainingState
    Return the Rx training state for the requested lane.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdGetLaneRxTrainingState
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,    
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    OUT MZD_BOOL *rxTraining
);

/*******************************************************************************
 MZD_STATUS mzdGetPktGenRegOffset
    Get packet generator register address offset based on Mode speed and lane
*******************************************************************************/
MZD_STATUS mzdGetPktGenRegOffset
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16  mdioPort,
    IN MZD_U16  host_or_line,
    IN MZD_U16  laneOffset,
    OUT MZD_U16 *regAddrOffset
);

/*******************************************************************
 MZD_STATUS mzdPortResetTimeout
    Check timeout after the soft or hard reset
*******************************************************************/
MZD_STATUS mzdPortResetTimeout
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 timeoutMs
);

/*******************************************************************
 MZD_STATUS mzdReloadConfigInfo
    Called by reload driver to update the host and line config info
*******************************************************************/
MZD_STATUS mzdReloadConfigInfo
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort
);

/*******************************************************************
 MZD_STATUS mzdLaneResetTimeout
    Check timeout after the Lane soft reset
*******************************************************************/
MZD_STATUS mzdLaneResetTimeout
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    IN MZD_U16 timeoutMs
);

/*******************************************************************************
 Internal functions for firmware download
*******************************************************************************/
/*******************************************************************
MZD_STATUS mzdSetPowerupDefaultsAllUp
    Sets the host and line side power-down to power-up and does
    a software reset on all lanes. Always sets the power up
    per port and does a soft reset on the port both host
    and line side.
*******************************************************************/
MZD_STATUS mzdSetPowerupDefaultsAllUp
(
    IN MZD_DEV_PTR pDev
);


/*******************************************************************
MZD_STATUS mzdSetPowerupDefaultsAllUp
    Sets the host and line side power-down to power-up and does
    a software reset on all lanes only if they are powered-down
    (which is the power-on default and would happen as a result
    of a power cycle)
*******************************************************************/
MZD_STATUS mzdSetPowerupDefaultsAllUpIfDown
(
    IN MZD_DEV_PTR pDev
);

/*******************************************************************
MZD_STATUS mzdPutDevicesInParallelMode
    Puts all devices in the list pDev into parallel write mode.
    Assumes port number of each device has been error checked and
    is pointing to the first port of the device, and also that
    error checking has been done on the numPorts parameter
    and no pDev is NULL.

    While in this mode registers in the range X.31.F8XX to X.31.F9XX
    when written to will accept all writes on that MDIO bus
    regardless of the MDIO PHY/device.

    While in this mode, no reads should be done from this register
    range, and no writes should be done to other devices
    in the same range on that bus, or these registers will
    take those writes.

    This function is only available on B0.

*******************************************************************/
MZD_STATUS mzdPutDevicesInParallelMode
(
    IN MZD_DEV_PTR pDev[], 
    IN MZD_U16 numPorts, 
    OUT MZD_DEV_PTR *pErrDev, 
    OUT MZD_U16 *errCode
);

/*******************************************************************
MZD_STATUS mzdRemoveDevicesFromParallelMode
    Removes all devices in the list pDev from parallel write mode.
    Assumes port number of each device has been error checked and
    is pointing to the first port of the device, and also that
    error checking has been done on the numPorts parameter
    and no pDev is NULL.

    Even if there is an error on a port, it will try and go 
    through all the ports until the end and only return the
    error on the first port the error occurred, to try and
    remove as many devices from this mode as possible.

    Only supported on B0. Writing to the first device should
    clear them all, but goes ahead and writes to them all just
    to make sure in case the first device is not in that mode for
    some reason.
*******************************************************************/
MZD_STATUS mzdRemoveDevicesFromParallelMode
(
    IN MZD_DEV_PTR pDev[], 
    IN MZD_U16 numPorts, 
    OUT MZD_DEV_PTR *pErrDev, 
    OUT MZD_U16 *errCode
);



/* Definitions for Boot and Flash Upload Status Register 31.C050 */
#define MZD_FATAL_BOOT_ERROR_POS    0
#define MZD_BOOT_PROGRESS_POS       1
#define MZD_BOOT_COMPLETE_POS       3
#define MZD_CODE_STARTED_POS        4
#define MZD_UL_CHECKSUM_OK_POS      5
#define MZD_CODE_DOWNLOADED_POS     6
#define MZD_UL_PROGRESS_POS         7
#define MZD_RESET_CAUSE_POS         8

/* Definitions for Boot Progress field */
#define MZD_BOOT_INIT               0x00
#define MZD_WAIT_DL                 0x01
#define MZD_CHECKSUM_STARTED        0x02
#define MZD_JUMPING_TO_APP          0x03

/******************************************************************************
 MZD_STATUS mzdIsPhyInMdioDownloadMode
    Checks if the UPC is waiting for the MDIO download
******************************************************************************/
MZD_STATUS mzdIsPhyInMdioDownloadMode
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    OUT MZD_BOOL *downloadMode
);

/*******************************************************************
 MZD_STATUS mzdDisableFlashLoading
    Sets override of the flash fuse for controlling flash upload
    This disables flash upload. Must be followed by a chip
    hardware reset or a UPC reset.
*******************************************************************/
MZD_STATUS mzdDisableFlashLoading
(
    IN MZD_DEV_PTR pDev
);

/*******************************************************************
 MZD_STATUS mzdEnableFlashLoading
    Sets override of flash fuse to enable flash loading. Must
    be followed by a chip hardware reset or a UPC reset or a power
    -cycle to cause the flash image to be loaded from flash.
*******************************************************************/
MZD_STATUS mzdEnableFlashLoading
(
    IN MZD_DEV_PTR pDev
);

/*******************************************************************
 MZD_STATUS mzdIsFlashLoadingEnabled
    Checks the fuse value for flash loading enabled/disabled.
*******************************************************************/
MZD_STATUS mzdIsFlashLoadingEnabled
(
    IN MZD_DEV_PTR pDev,
    OUT MZD_BOOL *flashEnabled
);


/******************************************************************************
 MZD_STATUS mzdPollPhyAppCodeStart
    Polling certain bits of register to see if app code started or timeout

    A 5-10ms delay may be needed after set the 31.F80F.6 before calling
    this function for getting a stable result.
******************************************************************************/
MZD_STATUS mzdPollPhyAppCodeStart
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16     timeoutMs,
    OUT MZD_BOOL   *appStarted
);

/******************************************************************************
 MZD_STATUS mzdParWriteHdrSectionsToRam
    The function first checks if the image size is expected. If the image size
    is not even or zero, an error will be returned.

    Then it downloads the image to the RAM section-by-section and starts it executing if
    the downloaded section is an executable section.

    This uses the MDIO broadcast for downloading the image in parallel to
    speed up the image download.
******************************************************************************/
MZD_STATUS mzdParWriteHdrSectionsToRam
(
    IN MZD_DEV_PTR  pDev[],
    IN MZD_U16      numPorts,
    IN MZD_U8       fwImageData[],
    IN MZD_U32      fwImageSize,
    IN MZD_BOOL     slaveOnly,
    OUT MZD_DEV_PTR *pErrDev,
    OUT MZD_U16     *errCode
);

/******************************************************************************
 MZD_STATUS mzdParWriteImageToFlash

    If data is NULL and size is 0, erases flash and returns without programming.

    Otherwise, erases the flash, programs the flash with the slaves help,
    then commands the slave to readback and verify the image.

    Parallel version of mzdWriteImageToFlash(). A0 is not supported for
    multi-port programming.

    If any error, pErrDev points to the first device that had an error
    (if multiple only first one is pointed to), and errCode contains the
    error that happened.
    
******************************************************************************/
MZD_STATUS mzdParWriteImageToFlash
(
    IN MZD_DEV_PTR pDev[],
    IN MZD_U16 numPorts,
    IN MZD_U8 data[], 
    IN MZD_U32 size, 
    OUT MZD_DEV_PTR *pErrDev,
    OUT MZD_U16 *errCode
);


/******************************************************************************
 MZD_STATUS mzdIsPolaritySwapped
    This function returns MZD_TRUE or MZD_FALSE if the given pin is swapped
    in the package (the bit in the serdes register has inverted polarity).
******************************************************************************/
MZD_STATUS mzdIsPolaritySwapped
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 portNum,
    IN MZD_U16 hostOrLine,
    IN MZD_U16 laneNum,
    IN MZD_BOOL isTx,
    OUT MZD_BOOL *isSwapped
);

#if C_LINKAGE
#if defined __cplusplus
}
#endif
#endif

#endif /* defined MZDINTRNL_H */
