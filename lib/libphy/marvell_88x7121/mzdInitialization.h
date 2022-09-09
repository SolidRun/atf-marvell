/*******************************************************************************
Copyright (c) 2014 Marvell.
If you received this File from Marvell and you have entered into a commercial
license agreement (a "Commercial License") with Marvell, the File is licensed
to you under the terms of the applicable Commercial License.
*******************************************************************************/

/********************************************************************
This file contains functions for initializing the driver, setting up 
the user-provide MDIO access functions, chip reset and various driver
initialization operations for the Marvell X7121 Device.
********************************************************************/

#ifndef MZDINITIALIZATION_H
#define MZDINITIALIZATION_H

#if C_LINKAGE
#ifdef __cplusplus
extern "C" {
#endif
#endif

#define MZD_HW_RESET_WAITTIME 1500  /* 1.5 sec max wait time after a hardware reset */

#define MZD_CHIP_SW_RESET     (1<<15) /* Chip software reset; this reset self clears */
#define MZD_CHIP_HW_RESET     (1<<14) /* Chip hardware reset; this reset self clears; 
                                         can be combined with MZD_PROC_BLOCK_RESET */
#define MZD_PROC_BLOCK_RESET  (1<<12) /* Reset the processor and corresponding peripheral circuits, does not self clear */
#define MZD_PROC_BLOCK_RESET_RELEASE 0xF0   /* Normal processor and corresponding peripheral circuits operation mode */

#define MZD_MACSEC0_RESET     (1<<10)  /* MACSec port0 HW reset asserted */
#define MZD_MACSEC0_RESET_RELEASE 0xF1 /* Normal MACSec port0 operation mode */

#define MZD_MACSEC1_RESET     (1<<9)   /* MACSec port1 HW reset asserted */ 
#define MZD_MACSEC1_RESET_RELEASE 0xF2 /* Normal MACSec port1 operation mode */

/*******************************************************************************
 MZD_FUNC MZD_STATUS mzdInitDriver
 (
     IN MZD_FUNC_READ_MDIO  mzdFuncReadMdio,
     IN MZD_FUNC_WRITE_MDIO mzdFuncWriteMdio,
     IN MZD_FUNC_WAIT       mzdFuncWait,
     IN MZD_U16             mdioPort,
     IN MZD_U8             *pFirmwareImage,
     IN MZD_U32             firmwareSize,
     IN MZD_PVOID           pHostContext,
     INOUT MZD_DEV_PTR      pDev
 );

 Inputs:
   mzdFuncReadMdio - pointer to host's function to do MDIO read
   mzdFuncWriteMdio - pointer to host's function to do MDIO write
   mzdFuncWait - pointer to host's function to do wait in millisec
   mdioPort - 1st MDIO port address on this device
   pFirmwareImage - input buffer image of the firmware or NULL to use previously
                    running image or flash image (see table below)
   firmwareSize   - firmware image size or 0 to use previously running image
                    or flash image (see table below)
   pHostContext - user specific data for host to pass to the low layer (if needed)

 Outputs:
   pDev  - memory allocated for this structure to hold the device information to be used 
           for all API calls on this X7121 device.

 Returns:
   Returns MZD_OK when mzdInitDriver() success. Otherwise, one of the MZD_STATUS_xxx 
   status codes will be returned.

   MZD_STATUS_IMAGE_WARNING - Special case, the driver is loaded but with no valid firmware running
                              Flash load failed multiple times or flash load hung
                              For this return code, can retry mzdInitDriver() with an image to try
                              MDIO/RAM download, or call one of the FLASH load functions to erase/
                              reload the flash with a valid, working image.

 Description:
   Marvell X7121 Driver Initialization Routine.
   
   This is the first routine that needs be called by host software. It should be called
   once for each X7121 device using the first port on that device.
   
   This pointer (pDev) is then used for all the API functions.
   The following is the job performed by this routine:
       1. store MDIO read/write function into the given MZD_DEV structure
       2. store the wait function into the given MZD_DEV structure
       2. run any device specific initialization routine (chip hardware reset,
          firmware download, etc.)
       3. Initialize the deviceId and revision information

   See the table below for the behavior of this function based on currently running
   image and what is passed in for the image.

   If the flash is available in your system and you want to use it to load the phy
   during the initialization, set devFlash in the device structure to MZD_TRUE
   before calling this function and pass in NULL for the image and 0 for image size, and
   this function will attempt to load the flash image. If it fails, mzdInitDriver()
   will return MZD_FAIL.

   A PHY that is set to load via MDIO can be initialized without loading an image
   by passing NULL for the image, 0 for the size, and setting devFlash to MZD_FALSE.

   If this device is set to run from flash and an image is detected as running,
   this function will set devFlash to MZD_TRUE.

 Side effects:
   None

 Notes/Warnings:
   It's very important devFlash in the device structure be initialized correctly 
   prior to calling this function if this function is called with no image/image 
   size 0 passed in!
 
   The table below shows the behavior of loading firmware:

   Firmware        
   passed-in  Firmware
   init drv*  Running     mzdInitDriver() Behavior
   ----------------------------------------------------------------------
   No         No          Controlled by devFlash in device structure.
                          If MZD_TRUE will try and load the flash and return
                          MZD_FAIL if image loading failed. If MZD_FALSE
                          will skip loading image altogether without returning
                          an error.
                          
                          Before using the part, the host must call
                          download functions directly to load the image
                          either mzdLoadFlashImageToRAM() to load from
                          flash or mzdFirmwareDownload() to load via
                          MDIO if init is called without image and
                          part is set to run via MDIO download.

                          If part is set to run via flash, and an image
                          is running, this function will set devFlash
                          to MZD_TRUE.
                          
   No         Yes         Use previously loaded image and does SW reset
                          (could be a previously loaded FLASH image or
                           MDIO-loaded image)
   Yes        No          Chip HW reset and loads image
   Yes        Yes         Chip HW reset and reloads image

   * Both pFirmwareImage and firmwareSize must be valid.

   On A0, important to check the return status of this function. It will return
   an error if the firmware load failed. For flash load (first entry of table)
   it will try one extra time on a flash load before completely failing on A0
   devices.

   If this function returns an error, initialization failed.

   If loading firmware, this function blocks until the firmware loading is 
   successful, times out, or gets 2 errors (on A0 devices).

   In order to reload a device from flash with a new image later without 
   re-initializing call mzdLoadFlashImageToRAM().

*******************************************************************************/
MZD_FUNC MZD_STATUS mzdInitDriver
(
    IN MZD_FUNC_READ_MDIO  mzdFuncReadMdio,
    IN MZD_FUNC_WRITE_MDIO mzdFuncWriteMdio,
    IN MZD_FUNC_WAIT       mzdFuncWait,
    IN MZD_U16             mdioPort,
    IN MZD_U8             *pFirmwareImage,
    IN MZD_U32             firmwareSize,
    IN MZD_PVOID           pHostContext,
    INOUT MZD_DEV_PTR      pDev
);

/* optionFlag use for reloading the driver mzdReloadDriver() */
#define MZD_RELOAD_CONFIG (1<<0)  /* Bit 0: if set to 1, it reads the mode registers to 
                                            re-fill the mode configuration */
                                  /* Bit 1-15: reserved for future used */

/*******************************************************************************
MZD_FUNC MZD_STATUS mzdReloadDriver
(
    IN MZD_FUNC_READ_MDIO  mzdFuncReadMdio,
    IN MZD_FUNC_WRITE_MDIO mzdFuncWriteMdio,
    IN MZD_FUNC_WAIT       mzdFuncWait,
    IN MZD_U16         mdioPort,
    IN MZD_PVOID       pHostContext,
    IN MZD_U16         optionFlag,
    OUT MZD_DEV_PTR    pDev
);

 Inputs:
   mzdFuncReadMdio - pointer to host's function to do MDIO read
   mzdFuncWriteMdio - pointer to host's function to do MDIO write
   mzdFuncWait - pointer to host's function to do wait in millisec
   mdioPort - 1st MDIO port address on this device
   pHostContext - user specific data for host to pass to the low layer  :optional input
   optionFlag - option available when reloading the driver. Refer to the MZD_RELOAD_xxx
                definition for options.

 Outputs:
   pDev  - memory allocated for this pointer to holds device information to be used 
           for API call.

 Returns:
   MZD_OK   - on success
   MZD_FAIL - on error

 Description:
   This API reads the mode register of all lanes and re-filled the device structure MZD_DEV
   with the existing configured mode on all the lanes on both the host and line interfaces.  

   This driver reloads do not perform resets or firmware download to the device.  

   This call will not keep track of the previously configured states, i.e. loopbacks, 
   polarity changes, etc...

   This reload driver API can be used when the driver was previous unloaded.  The reload 
   driver will preserve the exiting configured modes and continue with the existing 
   operations without disruption to the configuration. 

   Refer to the mzdSampleReloadDriver in mzdSample.c on how to call this mzdReloadDriver().

 Side effects:
   Any state change will *not* be tracked in the driver reloads.

 Notes/Warnings:
   The mzdReloadDriver will not keep track of the previously configured states, 
   i.e. loopbacks, polarity changes, etc...  The client application will need to re-query 
   and track any state change.  
     
   For the coupling Repeater mode, the reload will display the individual lane
   Repeater mode instead of the coupling Repeater mode.
   For example: for the coupling Repeater mode R400U8, the reload API will show
   all 8 lanes with R50U and not R400U8.

   The devFlash will not be updated on the mzdReloadDriver. If flash is used, set
   the ->devFlash to MZD_TRUE after calling this API.

   The mzdReloadDriver will not work for an existing configuration with MACSec. The
   macsecCtrl field in the device structure will not be reloaded.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdReloadDriver
(
    IN MZD_FUNC_READ_MDIO  mzdFuncReadMdio,
    IN MZD_FUNC_WRITE_MDIO mzdFuncWriteMdio,
    IN MZD_FUNC_WAIT       mzdFuncWait,
    IN MZD_U16         mdioPort,
    IN MZD_PVOID       pHostContext,
    IN MZD_U16         optionFlag,
    OUT MZD_DEV_PTR    pDev
);


/*******************************************************************
MZD_FUNC MZD_STATUS mzdUnloadDriver
(
    IN MZD_DEV_PTR pDev
);

 Inputs:
   pDev  - pointer to holds device information to be used for each API call.

 Outputs:
   None

 Returns:
   MZD_OK    - on success
   MZD_FAIL  - on error

 Description:
   This function performs the clean-up task in releasing the Serdes 
   memory structure, resetting the dev structure and other clean-up 
   operations.

 Side effects:
   None

 Notes/Warnings:
   The mzdUnloadDriver() will not handle the hostContext clean-up
   operations. If the hostContext is used, it should either be freed before 
   calling this API or track the hostContext pointer and freed it after 
   calling this API. The mzdUnloadDriver() will zero-out the dev structure
   after completion.
*******************************************************************/
MZD_FUNC MZD_STATUS mzdUnloadDriver
(
    IN MZD_DEV_PTR pDev
);


/*******************************************************************
MZD_FUNC MZD_STATUS mzdLanePowerdown
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset
);

 Inputs:
   pDev  - pointer to holds device information to be used for each API call.
   
   mdioPort - MDIO port address, 0-31
   
   host_or_line - which interface is being power-down:
        MZD_HOST_SIDE
        MZD_LINE_SIDE
        MZD_BOTH_SIDE
        
   laneOffset - lane number to power down 0-3 or MZD_ALL_LANES to
                 power-down all lanes
   
 Outputs:
   None

 Returns:
   MZD_OK    - on success
   MZD_FAIL  - on error

 Description:
   This function performs power-down on a specific lane or all lanes
   on a given interface. 

   For multi-lane modes, you only need to power down the first lane
   to power-down that mode. However, it shouldn't hurt to power-down
   all lanes on that mode. 

 Side effects:
   None

 Notes/Warnings:
    None
    
*******************************************************************/
MZD_FUNC MZD_STATUS mzdLanePowerdown
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset
);


/*******************************************************************
MZD_FUNC MZD_STATUS mzdLanePowerup
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset
);

 Inputs:
   pDev  - pointer to holds device information to be used for each API call.
   
   mdioPort - MDIO port address, 0-31
   
   host_or_line - which interface is being power-up:
        MZD_HOST_SIDE
        MZD_LINE_SIDE
        MZD_BOTH_SIDE
        
   laneOffset - lane number to power up 0-3 or MZD_ALL_LANES to
                 power up all lanes
   
 Outputs:
   None

 Returns:
   MZD_OK    - on success
   MZD_FAIL  - on error

 Description:
   This function performs power-up on a specific lane or all lanes
   on a given interface. 

   If you pass MZD_ALL_LANES, the function will only power up
   all the lanes assigned to modes on that port. It will figure
   out the first lane of each multi-lane mode and power that
   lane up and skip lanes that shouldn't be power up.

   If you pass a specific lane and it is not the first lane
   of a multi-lane mode, that lane will not be powered up and an
   error message will be returned.

 Side effects:
   None

 Notes/Warnings:
   For multi-lane modes, only the first lane assigned should be
   powered up.
    
*******************************************************************/
MZD_FUNC MZD_STATUS mzdLanePowerup
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset
);


/*******************************************************************
MZD_FUNC MZD_STATUS mzdPortReset
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_RESET_TYPE resetType,
    IN MZD_U16 timeoutMs
);

 Inputs:
   pDev  - pointer to holds device information to be used for each API call.
   mdioPort - MDIO port address, 0-31
   host_or_line - which interface is being modified:
        MZD_HOST_SIDE    - Only allowed on A0 chip
        MZD_LINE_SIDE    - Only allowed on A0 chip
        MZD_BOTH_SIDE
   resetType - option for Hard or Soft port reset
        MZD_SOFT_RESET
        MZD_HARD_RESET
   timeoutMs - reset timeout in ms

 Outputs:
   None

 Returns:
   MZD_OK    - on success
   MZD_FAIL  - on error

 Description:
   This function performs a port level hardware or software reset.

 Side effects:
   None

 Notes/Warnings:
  Both side of the port should be reset simultaneously on chips newer
  than revision A0.
*******************************************************************/
MZD_FUNC MZD_STATUS mzdPortReset
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_RESET_TYPE resetType,
    IN MZD_U16 timeoutMs
);

/*******************************************************************
MZD_FUNC MZD_STATUS mzdChipResetControl
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 resetType,
    IN MZD_BOOL bRestore
);

 Inputs:
   pDev  - pointer to holds device information to be used for each API call.
   resetType - From the following list
    MZD_CHIP_SW_RESET - software reset on all ports
    MZD_CHIP_HW_RESET - hardware reset on all ports
    MZD_PROC_BLOCK_RESET - reset the processor
    MZD_PROC_BLOCK_RESET_RELEASE - release the reset on the PROC processor   
    Note:
    (MZD_CHIP_HW_RESET | MZD_PROC_BLOCK_RESET) can be combined on a single call

   bRestore - restore saved registers on power-on default 

 Outputs:
   None

 Returns:
   MZD_OK               - on success
   MZD_FAIL             - on error

 Description:
   This API performs reset on the entire chip.

   The MZD_CHIP_SW_RESET will issue software reset on all ports
   (this bit self clears).

   The MZD_CHIP_HW_RESET will issue hardware reset on all ports,
   PROC and all MACSec blocks.

   MZD_CHIP_HW_RESET | MZD_PROC_BLOCK_RESET, will issue hardware reset
   on all ports, PROC and all MACSec blocks. The PROC will stay in
   the reset state until the MZD_PROC_BLOCK_RESET_RELEASE is called to take
   the PROC out of reset.

 Side effects:
   None

 Notes/Warnings:
   After a hardware reset is issued to the device, it requires a few
   seconds for recovery before performing further operations. Otherwise, 
   the operation may fail with an unexpected error.

   The hardware reset(MZD_CHIP_HW_RESET) will load the Flash image(if available).
   It is recommended to re-initialize the API by calling the mzdInitDriver() after 
   hardware reset. If a different firmware version is required, it will be loaded when
   provided in mzdInitDriver().
*******************************************************************/
MZD_FUNC MZD_STATUS mzdChipResetControl
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 resetType,
    IN MZD_BOOL bRestore
);

#if C_LINKAGE
#ifdef __cplusplus
}
#endif
#endif

#endif /* MZDINITIALIZATION_H */
