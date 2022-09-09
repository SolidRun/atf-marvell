/*******************************************************************************
Copyright (c) 2014 Marvell.
If you received this File from Marvell and you have entered into a commercial
license agreement (a "Commercial License") with Marvell, the File is licensed
to you under the terms of the applicable Commercial License.
*******************************************************************************/

/********************************************************************
This file contains supporting functions to access the Advanced Peripheral
Bus (APB) read/write operations.

    APB 32-bit address regAPBAddr is mapped as follows:
    addrType[31:20] = Register type
    regAddr[19:0]   = Register address

Additionally, it includes the features and diagnostic operations related
to the APB addressing for the Marvell X7121 Device.
********************************************************************/
#ifndef MZD_HWAPBUSCNT_H
#define MZD_HWAPBUSCNT_H

#if C_LINKAGE
#if defined __cplusplus
    extern "C" {
#endif
#endif

/* Advanced Peripheral Bus (APB) Indirect Access Commands */
#define MZD_APB_READ_CMD          0x0000
#define MZD_APB_WRITE_CMD         0x0001
#define MZD_APB_WRITE_INC_CMD     0xC001     /* post increment on writes only */
#define MZD_APB_READ_INC_CMD      0x8000     /* post increment on reads only */

#define MZD_APB_ACCESS_CTRL       0xF0AB
#define MZD_APB_ACCESS_MSB_REG    0xF0AF
#define MZD_APB_ACCESS_LSB_REG    0xF0AC
#define MZD_APB_DATA_MSB          0xF0AD  /* Need to write first before LSB */
#define MZD_APB_DATA_LSB          0xF0AE

#ifndef MZD_ATTEMPT_SEM
#define MZD_ATTEMPT_SEM(xpDev,xFuncToTry) {if(xFuncToTry != MZD_OK)                                              \
                                           {MZD_DBG_ERROR("ATTEMPT with semaphore failed at %s: line:%u\n",__FUNCTION__,__LINE__); \
                                            mzdHwReleaseAPBSemaphore(xpDev, 0); \
                                            return MZD_FAIL;}}
#endif

/******************************************************************************
MZD_FUNC MZD_STATUS mzdHwAPBusRead
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 addrType,
    IN MZD_U32 regAPBAddr,
    OUT MZD_U32 *data
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    regAPBAddr - APB register to access

 Outputs:
    data - returns the 32-bit data of the requested register

 Returns:
    MZD_OK if command was executed successful, MZD_FAIL otherwise

 Description:
    The function sets up the read command and address format to read the
    Advanced Peripheral Bus (APB). It returns the 32-bit register data value.

 Side effects:
    None

 Notes/Warnings:
    Calling this function requires blocking all other caller from reading and
    writing to the APB address until this call is completed.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdHwAPBusRead
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U32 regAPBAddr,
    OUT MZD_U32 *data
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdHwAPBusWrite
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U32 regAPBAddr,
    IN MZD_U32 data
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    regAPBAddr - APB register to access
    data - 32-bit data to be written

 Outputs:
    None

 Returns:
    MZD_OK if command was executed successful, MZD_FAIL otherwise

 Description:
    The function sets up the write command and address format to write to
    the Advanced Peripheral Bus (APB).

 Side effects:
    None

 Notes/Warnings:
    Calling this function requires blocking all other caller from reading and
    writing to the APB address until this call is completed.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdHwAPBusWrite
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U32 regAPBAddr,
    IN MZD_U32 data
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdHwAPBusWriteBlock
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U32 regAPBAddr,
    IN MZD_U32 *data,
    IN MZD_U32 size
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    regAPBAddr - first APB address to access
    data - an array of 32-bit data
    size - number of 32-bit data to be written from the data array
           size of 0 will result in an error

 Outputs:
    None

 Returns:
    MZD_OK if command was executed successful, MZD_FAIL otherwise

 Description:
    This function using the write-increment to write a block of data into
    the given APB addresses.

 Side effects:
    None

 Notes/Warnings:
    Calling this function requires blocking all other caller from reading and
    writing to the APB address until this call is completed.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdHwAPBusWriteBlock
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U32 regAPBAddr,
    IN MZD_U32 *data,
    IN MZD_U32 size
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdHwAPBusReadBlock
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U32 regAPBAddr,
    IN MZD_U32 size,
    OUT MZD_U32 *data
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    regAPBAddr - first APB address to access
    size - number of 32-bit data to be read
           size of 0 will result in an error

 Outputs:
    data - an array of 32-bit data of given size to be read
           data[] must have enough space allocated for the input size

 Returns:
    MZD_OK if command was executed successful, MZD_FAIL otherwise

 Description:
    This function using the read-increment to read a block of data from
    the given APB addresses.

 Side effects:
    None

 Notes/Warnings:
    Calling this function requires blocking all other caller from reading and
    writing to the APB address until this call is completed.

    The data[] must have enough space allocated for the input size
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdHwAPBusReadBlock
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U32 regAPBAddr,
    IN MZD_U32 size,
    OUT MZD_U32 *data /* data[] must have enough space allocated */
);

/*******************************************************************************
MZD_FUNC MZD_STATUS mzdHwAPBusSetRegField
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U32 regAPBAddr,
    IN MZD_U8 fieldOffset,
    IN MZD_U8 fieldLength,
    IN MZD_U32 data
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    regAPBAddr -  APB register to access
    fieldOffset - The field start bit index. (0 - 31)
    fieldLength - Number of bits to write
    data - Data to be written.

 Outputs:
    None.

 Returns:
    MZD_OK on success, or
    MZD_FAIL  - on error

 Description:
    Performs a read-modify-write on the APB bus register
    Set the data in the 32-bit based on the fieldOffset and fieldLength

 Side effects:
    None

 Notes/Warnings:
    The sum of fieldOffset & fieldLength parameters must be smaller-
    equal to 32.

    Calling this function requires blocking all other caller from reading and 
    writing to the APB address until this call is completed.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdHwAPBusSetRegField
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U32 regAPBAddr,
    IN MZD_U8 fieldOffset,
    IN MZD_U8 fieldLength,
    IN MZD_U32 data
);

/*******************************************************************************
MZD_FUNC MZD_STATUS mzdHwAPBusGetRegField
(
    IN  MZD_DEV_PTR pDev,
    IN  MZD_U32 regAPBAddr,
    IN  MZD_U8 fieldOffset,
    IN  MZD_U8 fieldLength,
    OUT MZD_U32 *data
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    regAPBAddr -  APB register to access
    fieldOffset - The field start bit index. (0 - 31)
    fieldLength - Number of bits to write

 Outputs:
    data - The read register field

 Returns:
    MZD_OK on success, or
    MZD_FAIL  - on error

 Description:
    This function return the requested bit field(s) on the APB bus register
    Get the data based on the fieldOffset and fieldLength

 Side effects:
    None

 Notes/Warnings:
    The sum of fieldOffset & fieldLength parameters must be smaller-
    equal to 20.

    Calling this function requires blocking all other caller from reading and 
    writing to the APB address until this call is completed.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdHwAPBusGetRegField
(
    IN  MZD_DEV_PTR pDev,
    IN  MZD_U32 regAPBAddr,
    IN  MZD_U8 fieldOffset,
    IN  MZD_U8 fieldLength,
    OUT MZD_U32 *data
);

/*******************************************************************************
MZD_FUNC MZD_STATUS mzdHwLockAPBSemaphore
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 semOption
);


 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    semOption - reserved for future use

 Outputs:
    None

 Returns:
    MZD_OK on success, or
    MZD_FAIL  - on error/too many tries without getting the semaphore

 Description:
    This function checks the bit field bit MZD_USE_APB_SEM in devInfo[0] 
    and if the flag is set, it will get the APB hardware semaphore to guarantee 
    atomic access to the APB. If the bit field bit MZD_USE_APB_SEM is 0,
    it will return without doing anything.

    If too many tries are attempted without getting the semaphore,
    this function will return MZD_FAIL

 Side effects:
    None

 Notes/Warnings:
    This functionality is only available on B0 devices or later.
   
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdHwLockAPBSemaphore
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 semOption
);

/*******************************************************************************
MZD_FUNC MZD_STATUS mzdHwReleaseAPBSemaphore
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 semOption
);


 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    semOption - reserved for future use

 Outputs:
    None

 Returns:
    MZD_OK on success, or
    MZD_FAIL  - on error

 Description:
    This function checks the bit field bit MZD_USE_APB_SEM in devInfo[0] 
    and if the flag is set, it will clear the APB hardware semaphore. 
    If the bit field bit MZD_USE_APB_SEM is 0, it will return without 
    doing anything.


 Side effects:
    None

 Notes/Warnings:
    This functionality is only available on B0 devices or later.
   
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdHwReleaseAPBSemaphore
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 semOption
);

/* semConfigOption */
#define MZD_SEM_CONFIG_ENABLE         0x1 /* enables APB semaphore */
#define MZD_SEM_CONFIG_CHECK_SET      0x2 /* check firmware if APB access is used before 
                                             setting the enable/disable API APB semaphore  */
#define MZD_SEM_CONFIG_FORCE_DISABLE  0x3 /* disables APB semaphore without checking */
/*******************************************************************************
MZD_FUNC MZD_STATUS mzdHwAPBSemaphoreConfig
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 semConfigOption
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    semConfigOption - 
        MZD_SEM_CONFIG_ENABLE: enables APB semaphore 
        MZD_SEM_CONFIG_CHECK_SET: check firmware before enable/disable APB semaphore
        MZD_SEM_CONFIG_FORCE_DISABLE: disables APB semaphore without checking

 Outputs:
    None

 Returns:
    MZD_OK on success, or
    MZD_FAIL  - on error

 Description:
    This function enable or disable the need for APB semaphore between API 
    and firmware. This is to prevent the APB BUS access contention that could result
    in unexpected read/write behavior.

    This should only be enabled if a feature in the firmware that requires APB BUS
    access. API calls that enable these firmware features are implemented to call this
    mzdHwAPBSemaphoreConfig API.  No user intervention is needed to enable or disable
    the APB semaphore. 

 Side effects:
    None

 Notes/Warnings:
    This functionality is only available on B0 devices or later.
   
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdHwAPBSemaphoreConfig
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 semConfigOption
);

#if C_LINKAGE
#if defined __cplusplus
}
#endif
#endif

#endif /* defined MZD_HWAPBUSCNT_H */

