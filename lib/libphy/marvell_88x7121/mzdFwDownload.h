/*******************************************************************************
Copyright (c) 2014 Marvell.
If you received this File from Marvell and you have entered into a commercial
license agreement (a "Commercial License") with Marvell, the File is licensed
to you under the terms of the applicable Commercial License.
*******************************************************************************/

/********************************************************************
This file contains functions prototypes and global defines/data for
higher-level functions using MDIO access to download firmware
into the internal RAM or attached flash memory of the Marvell
X7121 PHYs.
********************************************************************/
#ifndef MZDDL_H
#define MZDDL_H

#if C_LINKAGE
#if defined __cplusplus
    extern "C" {
#endif
#endif

/* max time in ms that intermediate executables may take in multi-stage boot process */
#define MZD_EXECUTABLE_TIMEOUT              500
/* Time out for App code to start */
#define MZD_APP_CODE_START_TIMEOUT          600
/* Worst case time for loading from flash in ms */
#define MZD_FLASH_LOAD_MAX_TIME             500

/* Firmware download and flash write error codes */
#define MZD_NUM_PORTS_OUT_OF_RANGE          0xFF00 /* Ports must be in range 0...28, only first ports of each device */
#define MZD_BAD_PORT_NUM                    0xFF01 /* Port numbers must be first port on device, i.e. 0,4,8, etc.*/
#define MZD_PAR_DL_NOT_SUPPORTED            0xFF02 /* Parallel download is only supported on B0 and later devices */


/* Some kind of unknown error occurred when writing to flash. */
#define MZD_UNKNOWN_DOWNLOAD_TO_FLASH_FAIL  0xFFD3
/* Verification pass at end of programming failed. Image is bad.*/
#define MZD_VERIFY_ERR                      0xFFD4
/* General Firmware download failed */
#define MZD_GENERAL_DOWNLOAD_FAIL           0xFFD5
/* Max sections number reached without end-of-file indication */
#define MZD_TOO_MANY_SECTIONS               0xFFD6
/* Intermediate executable in a multi-stage boot took too long to finish execution (see MZD_EXECUTABLE_TIMEOUT) */
#define MZD_EXECECUTABLE_TIMED_OUT          0xFFD7
/* Image passed in and size do not match each other, image is probably corrupted or wrong size passed */
#define MZD_ERR_PROCESSING_IMAGE_FILE       0xFFD8
/* Image header is corrupted */
#define MZD_BAD_HEADER                      0xFFD9
/* Slave encountered error while erasing flash */
#define MZD_ERR_ERASING_FLASH               0xFFDA
/* unexpected value read back from download code */
#define MZD_ERR_VALUE_READ_BACK             0xFFDB
/* Did not get MZD_SLAVE_OK for writing the data */
#define MZD_ERR_START_WRITE_DATA            0xFFDC
/* Some kind of error occurred on Slave */
#define MZD_ERR_ON_SLAVE                    0xFFDD
/* Checksum error */
#define MZD_ERR_CHECKSUM                    0xFFDE
/* Slave didn't write enough words to flash. Some kind of error occurred*/
#define MZD_ERR_SLAVE_WRITE_FULL            0xFFDF
/* last transfer failed */
#define MZD_ERR_LAST_TRANSFER               0xFFE0
/* Slave command timed out */
#define MZD_SLAVE_CMD_TIMEOUT               0xFFE1
/* Slave code did not start. - Slave code failed to download properly in to the RAM. */
#define MZD_SLAVE_CODE_DID_NOT_START        0xFFE2
/* App code did not start. - App code failed to download properly in to the RAM. */
#define MZD_APP_CODE_DID_NOT_START          0xFFE3
/* Firmware image inputs must be non-zero and power of 2 if provided */
#define MZD_APP_IMAGE_ERR                   0xFFE4
/* Slave image must be provided for flash loading/erasing. Must be non-zero size and a power of 2 */
#define MZD_SLAVE_IMAGE_ERR                 0xFFE5
/*size must be a size of 2 and non-zero */
#define MZD_IMAGE_SIZE_ERR                  0xFFE6
/* checksum calculated when write data to RAM does not match checksum stored in the HDR section header */
#define MZD_HDR_RAM_CHECKSUM_BAD            0xFFEB
/* actual RAM HW checksum resister read-out does not match calculated checksum when write data to RAM */
#define MZD_RAM_HW_CHECKSUM_BAD             0xFFEC
/* zero checksum calculated from the hdr file section */
#define MZD_ERR_ZERO_CHECKSUM               0xFFEF
/* PHY wasn't waiting in download mode */
#define MZD_PHY_NOT_IN_DOWNLOAD_MODE        0xFFFF

/* Maximum size of slave image allowed */
#define MZD_MAX_SLAVE_SIZE (50*1024UL)

/* Header information */
typedef struct _MZD_FILE_HEADER_TYPE
{
    MZD_U32 dataLength;
    MZD_U32 dataDestination;
    MZD_U16 secChecksum;
    MZD_U16 data_only;
    MZD_U16 port_skip;
    MZD_U32 nextHeaderOffset;
} MZD_FILE_HEADER_TYPE;

#define MZD_MAX_SECTIONS         5  /* 3 serdes image sections, one serdes download executable and one processor image */
/******************************************************************************
 MZD_FUNC MZD_STATUS mzdFirmwareDownload
 (
     IN MZD_DEV_PTR pDev,
     IN MZD_U8 fwImageData[],
     IN MZD_U32 fwImageSize,
     OUT MZD_U16 *errCode
 );

 Inputs:
    pDev            - pointer to MZD_DEV initialized by mzdInitDriver() call
    fwImageData[]   - firmware image to be downloaded into the RAM, this can be
                      a serdes-only image or combined serdes and CM3 image
    fwImageSize     - firmware image size in bytes (must be even)

 Outputs:
    errCode - if function returns MZD_FAIL, more information is contained in errCode
    as follows:
         MZD_IO_ERROR - MDIO IO Error
         MZD_STATUS_ERR_DEV - Driver not initialized or invalid device structure
         MZD_TOO_MANY_SECTIONS
         MZD_EXECECUTABLE_TIMED_OUT
         MZD_ERR_PROCESSING_IMAGE_FILE
         MZD_BAD_HEADER
         MZD_APP_CODE_DID_NOT_START
         MZD_IMAGE_SIZE_ERR
         MZD_HDR_RAM_CHECKSUM_BAD
         MZD_RAM_HW_CHECKSUM_BAD
         MZD_ERR_ZERO_CHECKSUM
         MZD_PHY_NOT_IN_DOWNLOAD_MODE
         MZD_STATUS_CHIP_RESET_FAIL

         Please see the MACRO definitions for these error code.

 Returns:
    MZD_OK if successful, MZD_FAIL if an error was detected.

 Description:
    Sets the device into MDIO download mode and does a chip hardware reset.
 
    The function first checks if the image size is expected. If the image size
    is not even or zero, an error will be returned.

    Then it downloads the image to the RAM section-by-section and starts it executing if
    the downloaded section is an executable section.

 Side effects:
    None

 Notes/Warnings:
    Calls mzdParallelFirmwareDownload() with a single port. Left for backward
    compatibility with previous releases.
******************************************************************************/
MZD_FUNC MZD_STATUS mzdFirmwareDownload
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U8 fwImageData[],
    IN MZD_U32 fwImageSize,
    OUT MZD_U16 *errCode
);

/******************************************************************************
 MZD_STATUS mzdUpdateFlashImage
 (
     IN MZD_DEV_PTR pDev,
     IN MZD_U8 fwImageData[],
     IN MZD_U32 fwImageSize,
     IN MZD_U8 slaveData[],
     IN MZD_U32 slaveSize,
     OUT MZD_U16 *errCode
 )


 Inputs:
    pDev            - pointer to MZD_DEV initialized by mzdInitDriver() call
    fwImageData[]   - firmware image to be downloaded into the flash (NULL has
                      special meaning, see below)
    fwImageSize     - firmware image size in bytes (must be even) (0 has 
                      special meaning, see below)
    slaveData[]     - slave code to be downloaded into the RAM 
    slaveSize       - size of the slave code in bytes (must be even) 

 Outputs:
    errCode - if function returns MZD_FAIL, more information is contained in errCode
    as follows:
         MZD_STATUS_ERR_DEV
         MZD_SLAVE_IMAGE_ERR
         MZD_APP_IMAGE_ERR
         MZD_IO_ERROR
         MZD_STATUS_CHIP_RESET_FAIL
         MZD_SLAVE_CMD_TIMEOUT
         MZD_ERR_ERASING_FLASH
         MZD_ERR_VALUE_READ_BACK
         MZD_ERR_START_WRITE_DATA
         MZD_ERR_ON_SLAVE
         MZD_ERR_CHECKSUM
         MZD_ERR_SLAVE_WRITE_FULL
         MZD_ERR_LAST_TRANSFER
         MZD_VERIFY_ERR
         MZD_UNKNOWN_DOWNLOAD_TO_FLASH_FAIL
         MZD_RAM_HW_CHECKSUM_BAD

 Returns:
    MZD_OK if successful. MZD_FAIL if not.

 Description:
    Pass NULL for fwImageData and 0 for fwImageSize to erase the flash 
    without programming the flash (slave image is always required). Erase
    is not verified.

    Erases the flash only and returns OR erases the flash and programs
    the flash image. Reads back the image after programming and verifies
    is correct. Any error occurred will result in MZD_FAIL as a status
    and more information available in errCode.    

 Side effects:
    None.

 Notes/Warnings:
    This operation takes many seconds to complete. It depends on the flash
    type being used. Different flashes have different erase and programming
    times.

    This function applies to chip that supports Flash features.

    Calls mzdParallelUpdateFlashImage() with a single port. Left for backward
    compatibility with previous releases.
******************************************************************************/
MZD_FUNC MZD_STATUS mzdUpdateFlashImage
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U8 fwImageData[],
    IN MZD_U32 fwImageSize,
    IN MZD_U8 slaveData[],
    IN MZD_U32 slaveSize,
    OUT MZD_U16 *errCode
);

/******************************************************************************
 MZD_STATUS mzdParallelFirmwareDownload
 (
     IN MZD_DEV_PTR   pDev[],
     IN MZD_U16       numPorts,    
     IN MZD_U8        fwImageData[],
     IN MZD_U32       fwImageSize,
     OUT MZD_DEV_PTR  pErrDev,
     OUT MZD_U16     *errCode
 );


 Inputs:
    pDev[]          - array of pointers to MZD_DEV initialized by mzdInitDriver() call, one
                      for each device that needs to be updated, one per device (every MZD_MAX_PORTS)                      
    numPorts        - number of elements in pDev[] (number of devices to download)
    fwImageData[]   - firmware image to be downloaded into the RAM, this can be
                      a serdes-only image or combined serdes and CM3 image
    fwImageSize     - firmware image size in bytes (must be even)
    

 Outputs:
    pErrDev - pointer to the pDev which had a failure (or NULL if no failure)
    errCode - if function returns MZD_FAIL, more information is contained in errCode
    as follows:
         MZD_IO_ERROR - MDIO IO Error
         MZD_STATUS_ERR_DEV - Driver not initialized or invalid device structure
         MZD_TOO_MANY_SECTIONS
         MZD_EXECECUTABLE_TIMED_OUT
         MZD_ERR_PROCESSING_IMAGE_FILE
         MZD_BAD_HEADER
         MZD_APP_CODE_DID_NOT_START
         MZD_IMAGE_SIZE_ERR
         MZD_HDR_RAM_CHECKSUM_BAD
         MZD_RAM_HW_CHECKSUM_BAD
         MZD_ERR_ZERO_CHECKSUM
         MZD_PHY_NOT_IN_DOWNLOAD_MODE
         MZD_STATUS_CHIP_RESET_FAIL
         MZD_NUM_PORTS_OUT_OF_RANGE
         MZD_BAD_PORT_NUM
         MZD_PAR_DL_NOT_SUPPORTED
         
         Please see the MACRO definitions for these error code.

 Returns:
    MZD_OK if successful, MZD_FAIL if an error was detected.

 Description:
    Multi-device, parallel download version of mzdFirmwareDownload() to download
    multiple devices in parallel.
 
    For all of the devices in pDev does the following:
    
    Sets the device into MDIO download mode and does a chip hardware reset.
 
    The function first checks if the image size is expected. If the image size
    is not even or zero, an error will be returned.

    Then it downloads the image to the RAM section-by-section on all devices in parallel 
    and starts it executing if the downloaded section is an executable section.

    If any error is encountered, exits and returns pErrDev for the 
    device that encountered the error and errCode to indicate
    what the error that was encountered.

 Side effects:
    None

 Notes/Warnings:
    Parallel download feature is only available on B0 and later revisions. An
    error will be returned on earlier device revisions.

    All devices must be on the same MDIO bus.

    During the download, no devices on the same bus can read or write
    MDIO registers in the range 31.F8XX and 31.F9XX, because these
    registers will respond to any devices on that bus. It will cause
    unexpected/unknown results.
    
******************************************************************************/
MZD_FUNC MZD_STATUS mzdParallelFirmwareDownload
(
    IN MZD_DEV_PTR   pDev[],
    IN MZD_U16       numPorts,    
    IN MZD_U8        fwImageData[],
    IN MZD_U32       fwImageSize,
    OUT MZD_DEV_PTR  *pErrDev,
    OUT MZD_U16      *errCode
);

/******************************************************************************
 MZD_STATUS mzdParallelUpdateFlashImage
 (
     IN MZD_DEV_PTR  pDev[],
     IN MZD_U16      numPorts,     
     IN MZD_U8       fwImageData[],
     IN MZD_U32      fwImageSize,
     IN MZD_U8       slaveData[],
     IN MZD_U32      slaveSize,
     OUT MZD_DEV_PTR pErrDev,
     OUT MZD_U16     *errCode
 );


 Inputs:
    pDev[]          - array of pointers to MZD_DEV initialized by mzdInitDriver() call, one
                      for each device that needs to be updated, one per device (every MZD_MAX_PORTS)                      
    numPorts        - number of elements in pDev[] (number of devices to download)
    fwImageData[]   - firmware image to be downloaded into the flash (NULL has
                      special meaning, see below)
    fwImageSize     - firmware image size in bytes (must be even) (0 has 
                      special meaning, see below)
    slaveData[]     - slave code to be downloaded into the RAM 
    slaveSize       - size of the slave code in bytes (must be even) 

 Outputs:
    pErrDev - pointer to the pDev which had a failure (or NULL if no failure)
    errCode - if function returns MZD_FAIL, more information is contained in errCode
    as follows:
         MZD_STATUS_ERR_DEV
         MZD_SLAVE_IMAGE_ERR
         MZD_APP_IMAGE_ERR
         MZD_IO_ERROR
         MZD_STATUS_CHIP_RESET_FAIL
         MZD_SLAVE_CMD_TIMEOUT
         MZD_ERR_ERASING_FLASH
         MZD_ERR_VALUE_READ_BACK
         MZD_ERR_START_WRITE_DATA
         MZD_ERR_ON_SLAVE
         MZD_ERR_CHECKSUM
         MZD_ERR_SLAVE_WRITE_FULL
         MZD_ERR_LAST_TRANSFER
         MZD_VERIFY_ERR
         MZD_UNKNOWN_DOWNLOAD_TO_FLASH_FAIL
         MZD_RAM_HW_CHECKSUM_BAD
         MZD_NUM_PORTS_OUT_OF_RANGE
         MZD_BAD_PORT_NUM
         MZD_PAR_DL_NOT_SUPPORTED         

 Returns:
    MZD_OK if successful. MZD_FAIL if not.

 Description:
    Multi-device, parallel download version of 
    mzdUpdateFlashImage() to download multiple devices in parallel.
 
    For all of the devices in pDev does the following:
 
    Pass NULL for fwImageData and 0 for fwImageSize to erase the flash(es) 
    without programming the flash (slave image is always required). Erase
    is not verified.

    Erases the flash only and returns OR erases the flash and programs
    the flash image. Reads back the image after programming and verifies
    is correct. Any error occurred will result in MZD_FAIL as a status
    and more information available in errCode.  

    If any error is encountered, exits and returns pErrDev for the 
    device that encountered the error and errCode to indicate
    what the error that was encountered.

 Side effects:
    None.

 Notes/Warnings:
    This operation takes many seconds to complete. It depends on the flash
    type being used. Different flashes have different erase and programming
    times.

    This function applies to chip that supports Flash features.

    Parallel download feature is only available on B0 and later revisions. An
    error will be returned on earlier device revisions.

    All devices must be on the same MDIO bus.

    During the download, no devices on the same bus can read or write
    MDIO registers in the range 31.F8XX and 31.F9XX, because these
    registers will respond to any devices on that bus. It will cause
    unexpected/unknown results.    

******************************************************************************/
MZD_FUNC MZD_STATUS mzdParallelUpdateFlashImage
(
    IN MZD_DEV_PTR  pDev[],
    IN MZD_U16      numPorts,     
    IN MZD_U8       fwImageData[],
    IN MZD_U32      fwImageSize,
    IN MZD_U8       slaveData[],
    IN MZD_U32      slaveSize,
    OUT MZD_DEV_PTR *pErrDev,
    OUT MZD_U16     *errCode
);


/******************************************************************************
MZD_FUNC MZD_STATUS mzdLoadFlashImageToRAM
(
    IN MZD_DEV_PTR pDev,
    OUT MZD_U16 *errCode
);


 Inputs:
   pDev        - pointer to MZD_DEV initialized by mzdInitDriver() call

 Outputs:
   errCode     - if failed this provide more information what failed
   it will be one of the following:
         MZD_STATUS_ERR_DEV
         MZD_IO_ERROR
         MZD_STATUS_CHIP_RESET_FAIL
         MZD_STATUS_FLASH_LOAD_FAIL

 Returns:
    MZD_OK if successful. MZD_FAIL if not.

 Description:
    Overrides the internal device setting for Flash upload then does a 
    chip hardware reset to trigger attempting to load from Flash.

    Any previously loaded images will be wiped out.

    If there is no Flash connected or the flash image is corrupted/missing,
    no image will be loaded and MZD_FAIL will be returned.
    
    If all of the actions are successful, it returns MZD_OK. If it
    fails it returns MZD_FAIL. If MZD_FAIL is returned more information
    will be available in errCode to indicate why it failed.

 Side effects:
    Sets devFlash in the device structure to MZD_TRUE if flash loaded successfully.

 Notes/Warnings:
    Make sure the Flash is available and the Flash images is valid.

    Do not run any process to access the device while the firmware download is
    in process. It could cause the download to fail.

    On A0, important to check the return status of this function. It will return
    an error if the firmware load failed. For A0 this function tries to upload
    up to 2 times.

    If this function returns an error, it must be called again. There's a small
    chance on A0 devices it might fail twice.

    This function blocks until the firmware loading is successful, times out
    or gets 2 errors (on A0 devices).
    
******************************************************************************/
MZD_FUNC MZD_STATUS mzdLoadFlashImageToRAM
(
    IN MZD_DEV_PTR pDev,
    OUT MZD_U16 *errCode
);


#if C_LINKAGE
#if defined __cplusplus
}
#endif
#endif

#endif /* defined MZDDL_H */
