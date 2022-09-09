/*******************************************************************************
Copyright (c) 2014 Marvell.
If you received this File from Marvell and you have entered into a commercial
license agreement (a "Commercial License") with Marvell, the File is licensed
to you under the terms of the applicable Commercial License.
*******************************************************************************/

/********************************************************************
This file contains function prototypes for controlling MACSec register
and MACSec DDK APIs on the Marvell X7121 PHY.
********************************************************************/
#ifndef MZD_MACSEC_HW_CNTL_H
#define MZD_MACSEC_HW_CNTL_H
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

/*******************************************************************************
 MZD_FUNC MZD_STATUS mzdMacSecMappedDevAddr
 Internal function used to map the MACSec addresses and offsets
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdMacSecMappedDevAddr
(
    IN MZD_U32 deviceId,
    IN MZD_U32 deviceNum,
    IN MZD_U32 firstOffset,
    IN MZD_U32 lastOffset,
    OUT MZD_PVOID *HostContext,
    OUT MZD_U32 *platfromFirstOffset,
    OUT MZD_U32 *platfromLastOffset
);

/*******************************************************************************
MZD_FUNC MZD_STATUS mzdSetMacSecDevInfo
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 macsecMapPort,
    IN MZD_U16 macsecLane
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    macsecMapPort - MACSec operation on MDIO port address, 0-31
    macsecLane - MACSec operation on lane number 0-3 (reserved for future used) 

 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not

 Description:
    Function to be called before calling the MacSec API. This function sets the 
    MZD MACSec device info use for the callback to access the intended device 
    and port.  

    If this API is initial called for the intended device/port, subsequent MACSec
    calls will use the same device/port. If other device/port is needed, this API 
    must be called with the intended device/port for MACSec operations.

 Side effects:
    None

 Notes/Warnings:
    None
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdSetMacSecDevInfo
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 macsecMapPort,
    IN MZD_U16 macsecLane
);

/******************************************************************************
 Functions for accessing MACSec registers/memory location
*******************************************************************************/
/******************************************************************************
MZD_FUNC MZD_STATUS mzdHwMacSecRegWrite
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 macsecMapPort,
    IN MZD_U32 macsecAddr,
    IN MZD_U32 data
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    macsecMapPort - MACSec operation on MDIO port address, 0-31
    macsecAddr - MACSec register address to write
    data - data to be written to the register

 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not

 Description:
    Uses the Advanced Peripheral Bus (APB) MDIO to write to the MACSec 
    registers 0x00000-0xFFFFF. This API will update the macsecAddr based
    on the provided macsecMapPort MDIO port number to access the appropriate
    MACSec block.
    
 Side effects:
    None
 
 Notes/Warnings:
    Calling this function requires blocking all other caller from reading and 
    writing to the APB address until this call is completed.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdHwMacSecRegWrite
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 macsecMapPort,
    IN MZD_U32 macsecAddr,
    IN MZD_U32 data
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdHwMacSecRegRead
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 macsecMapPort,
    IN MZD_U32 macsecAddr,
    OUT MZD_U32 *data
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    macsecMapPort - MACSec operation on MDIO port address, 0-31
    macsecAddr - MACSec register address to read

 Outputs:
    data - data to be read from the register

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not

 Description:
    Uses the Advanced Peripheral Bus (APB) MDIO to read the MACSec 
    registers 0x00000-0xFFFFF. This API will update the macsecAddr based
    on the provided macsecMapPort MDIO port number to access the appropriate
    MACSec block.
    
 Side effects:
    None
 
 Notes/Warnings:
    Calling this function requires blocking all other caller from reading and 
    writing to the APB address until this call is completed.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdHwMacSecRegRead
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 macsecMapPort,
    IN MZD_U32 macsecAddr,
    OUT MZD_U32 *data
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdHwSetMacSecRegField
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 macsecMapPort,
    IN MZD_U32 macsecAddr,
    IN MZD_U8 fieldOffset,
    IN MZD_U8 fieldLength,
    IN MZD_U32 data
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    macsecMapPort - MACSec operation on MDIO port address, 0-31
    macsecAddr - MACSec register address to read
    fieldOffset - The field start bit index. (0 - 31)
    fieldLength - Number of bits to read
    data - data to be written to the register

 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not

 Description:
    Uses the Advanced Peripheral Bus (APB) MDIO to a read-modify-write with the
    requested fieldOffset and fieldLength to the MACSec registers 0x00000-0xFFFFF.
    This API will update the macsecAddr based on the provided macsecMapPort MDIO 
    port number to access the appropriate MACSec block.

 Side effects:
    None
 
 Notes/Warnings:
    Calling this function requires blocking all other caller from reading and 
    writing to the APB address until this call is completed.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdHwSetMacSecRegField
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 macsecMapPort,
    IN MZD_U32 macsecAddr,
    IN MZD_U8 fieldOffset,
    IN MZD_U8 fieldLength,
    IN MZD_U32 data
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdHwGetMacSecRegField
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 macsecMapPort,
    IN MZD_U32 macsecAddr,
    IN MZD_U8 fieldOffset,
    IN MZD_U8 fieldLength,
    OUT MZD_U32 *data
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    macsecMapPort - MACSec operation on MDIO port address, 0-31
    macsecAddr - MACSec register address to read
    fieldOffset - The field start bit index. (0 - 31)
    fieldLength - Number of bits to read

 Outputs:
    data - data to be written to the register

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not

 Description:
    Uses the Advanced Peripheral Bus (APB) MDIO to read a specified field from the
    requested fieldOffset and fieldLength from the MACSec registers 0x00000-0xFFFFF.
    This API will update the macsecAddr based on the provided macsecMapPort MDIO 
    port number to access the appropriate MACSec block.

 Side effects:
    None
 
 Notes/Warnings:
    Calling this function requires blocking all other caller from reading and 
    writing to the APB address until this call is completed.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdHwGetMacSecRegField
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 macsecMapPort,
    IN MZD_U32 macsecAddr,
    IN MZD_U8 fieldOffset,
    IN MZD_U8 fieldLength,
    OUT MZD_U32 *data
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdHwMacSecSBUFRegWrite
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 macsecMapPort,
    IN MZD_U32 macsecAddr,
    IN MZD_U32 data
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    macsecMapPort - MACSec operation on MDIO port address, 0-31
    macsecAddr - MACSec SBUF register address to write
    data - data to be written to the register

 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not

 Description:
    Uses the Advanced Peripheral Bus (APB) MDIO to write to the MACSec SBUF
    registers 0x00000-0xFFFFF. This API will update the macsecAddr based
    on the provided macsecMapPort MDIO port number to access the appropriate
    MACSec block.
    
 Side effects:
    None
 
 Notes/Warnings:
    Calling this function requires blocking all other caller from reading and 
    writing to the APB address until this call is completed.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdHwMacSecSBUFRegWrite
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 macsecMapPort,
    IN MZD_U32 macsecAddr,
    IN MZD_U32 data
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdHwMacSecSBUFRegRead
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 macsecMapPort,
    IN MZD_U32 macsecAddr,
    OUT MZD_U32 *data
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    macsecMapPort - MACSec operation on MDIO port address, 0-31
    macsecAddr - MACSec SBUF register address to read

 Outputs:
    data - data to be read from the register

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not

 Description:
    Uses the Advanced Peripheral Bus (APB) MDIO to read the MACSec SBUF
    registers 0x00000-0xFFFFF. This API will update the macsecAddr based
    on the provided macsecMapPort MDIO port number to access the appropriate
    MACSec block.
    
 Side effects:
    None
 
 Notes/Warnings:
    Calling this function requires blocking all other caller from reading and 
    writing to the APB address until this call is completed.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdHwMacSecSBUFRegRead
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 macsecMapPort,
    IN MZD_U32 macsecAddr,
    OUT MZD_U32 *data
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdHwSetMacSecSBUFRegField
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 macsecMapPort,
    IN MZD_U32 macsecAddr,
    IN MZD_U8 fieldOffset,
    IN MZD_U8 fieldLength,
    IN MZD_U32 data
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    macsecMapPort - MACSec operation on MDIO port address, 0-31
    macsecAddr - MACSec SBUF register address to read
    fieldOffset - The field start bit index. (0 - 31)
    fieldLength - Number of bits to read
    data - data to be written to the register

 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not

 Description:
    Uses the Advanced Peripheral Bus (APB) MDIO to a read-modify-write with the
    requested fieldOffset and fieldLength to the MACSec SBUF registers 0x00000-0xFFFFF.
    This API will update the macsecAddr based on the provided macsecMapPort MDIO 
    port number to access the appropriate MACSec block.

 Side effects:
    None
 
 Notes/Warnings:
    Calling this function requires blocking all other caller from reading and 
    writing to the APB address until this call is completed.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdHwSetMacSecSBUFRegField
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 macsecMapPort,
    IN MZD_U32 macsecAddr,
    IN MZD_U8 fieldOffset,
    IN MZD_U8 fieldLength,
    IN MZD_U32 data
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdHwGetMacSecSBUFRegField
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 macsecMapPort,
    IN MZD_U32 macsecAddr,
    IN MZD_U8 fieldOffset,
    IN MZD_U8 fieldLength,
    OUT MZD_U32 *data
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    macsecMapPort - MACSec operation on MDIO port address, 0-31
    macsecAddr - MACSec SBUF register address to read
    fieldOffset - The field start bit index. (0 - 31)
    fieldLength - Number of bits to read

 Outputs:
    data - data to be written to the register

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not

 Description:
    Uses the Advanced Peripheral Bus (APB) MDIO to read a specified field from the
    requested fieldOffset and fieldLength from the MACSec SBUF registers 0x00000-0xFFFFF.
    This API will update the macsecAddr based on the provided macsecMapPort MDIO 
    port number to access the appropriate MACSec block.

 Side effects:
    None
 
 Notes/Warnings:
    Calling this function requires blocking all other caller from reading and 
    writing to the APB address until this call is completed.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdHwGetMacSecSBUFRegField
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 macsecMapPort,
    IN MZD_U32 macsecAddr,
    IN MZD_U8 fieldOffset,
    IN MZD_U8 fieldLength,
    OUT MZD_U32 *data
);

/******************************************************************************
 Functions for accessing MAC registers/memory location
*******************************************************************************/
/******************************************************************************
MZD_FUNC MZD_STATUS mzdHwMacRegWrite
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 macMapPort,
    IN MZD_U16 host_or_line,
    IN MZD_U32 macAddr,
    IN MZD_U32 data
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    macMapPort - MAC operation on MDIO port address, 0-31
    host_or_line - which interface is being checked:
                   MZD_HOST_SIDE
                   MZD_LINE_SIDE
    macAddr - MAC register address to write
    data - data to be written to the register

 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not

 Description:
    Uses the Advanced Peripheral Bus (APB) MDIO to write to the MAC registers 
    0x40000-0x78FFF. This API will update the macAddr based on the provided 
    macMapPort MDIO port number and host_or_line interface to access the 
    appropriate MAC block.
    
 Side effects:
    None
 
 Notes/Warnings:
    Calling this function requires blocking all other caller from reading and 
    writing to the APB address until this call is completed.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdHwMacRegWrite
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 macMapPort,
    IN MZD_U16 host_or_line,
    IN MZD_U32 macAddr,
    IN MZD_U32 data
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdHwMacRegRead
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 macMapPort,
    IN MZD_U16 host_or_line,
    IN MZD_U32 macAddr,
    OUT MZD_U32 *data
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    macMapPort - MAC operation on MDIO port address, 0-31
    host_or_line - which interface is being checked:
                   MZD_HOST_SIDE
                   MZD_LINE_SIDE
    macAddr - MAC register address to write

 Outputs:
    data - data to be written to the register

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not

 Description:
    Uses the Advanced Peripheral Bus (APB) MDIO to read to the MAC registers 
    0x40000-0x78FFF. This API will update the macAddr based on the provided 
    macMapPort MDIO port number and host_or_line interface to access the 
    appropriate MAC block.
    
 Side effects:
    None
 
 Notes/Warnings:
    Calling this function requires blocking all other caller from reading and 
    writing to the APB address until this call is completed.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdHwMacRegRead
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 macMapPort,
    IN MZD_U16 host_or_line,
    IN MZD_U32 macAddr,
    OUT MZD_U32 *data
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdHwSetMacRegField
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 macMapPort,
    IN MZD_U16 host_or_line,
    IN MZD_U32 macAddr,
    IN MZD_U8 fieldOffset,
    IN MZD_U8 fieldLength,
    IN MZD_U32 data
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    macMapPort - MAC operation on MDIO port address, 0-31
    host_or_line - which interface is being checked:
                   MZD_HOST_SIDE
                   MZD_LINE_SIDE
    macAddr - MAC register address to write
    fieldOffset - The field start bit index. (0 - 31)
    fieldLength - Number of bits to read
    data - data to be written to the register

 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not

 Description:
    Uses the Advanced Peripheral Bus (APB) MDIO to a read-modify-write with the
    requested fieldOffset and fieldLength to the MAC registers 0x40000-0x78FFF.
    This API will update the macAddr based on the provided macMapPort MDIO port 
    number and host_or_line interface to access the appropriate MACSec block.

 Side effects:
    None
 
 Notes/Warnings:
    Calling this function requires blocking all other caller from reading and 
    writing to the APB address until this call is completed.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdHwSetMacRegField
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 macMapPort,
    IN MZD_U16 host_or_line,
    IN MZD_U32 macAddr,
    IN MZD_U8 fieldOffset,
    IN MZD_U8 fieldLength,
    IN MZD_U32 data
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdHwGetMacRegField
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 macMapPort,
    IN MZD_U16 host_or_line,
    IN MZD_U32 macAddr,
    IN MZD_U8 fieldOffset,
    IN MZD_U8 fieldLength,
    OUT MZD_U32 *data
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    macMapPort - MAC operation on MDIO port address, 0-31
    host_or_line - which interface is being checked:
                   MZD_HOST_SIDE
                   MZD_LINE_SIDE
    macAddr - MAC register address to write
    fieldOffset - The field start bit index. (0 - 31)
    fieldLength - Number of bits to read

 Outputs:
    data - data to be written to the register

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not

 Description:
    Uses the Advanced Peripheral Bus (APB) MDIO to read a specified field with the
    requested fieldOffset and fieldLength to the MAC registers 0x40000-0x78FFF.
    This API will update the macAddr based on the provided macMapPort MDIO port 
    number and host_or_line interface to access the appropriate MACSec block.

 Side effects:
    None
 
 Notes/Warnings:
    Calling this function requires blocking all other caller from reading and 
    writing to the APB address until this call is completed.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdHwGetMacRegField
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 macMapPort,
    IN MZD_U16 host_or_line,
    IN MZD_U32 macAddr,
    IN MZD_U8 fieldOffset,
    IN MZD_U8 fieldLength,
    OUT MZD_U32 *data
);

#if C_LINKAGE
#if defined __cplusplus
}
#endif
#endif

#endif /* defined MZD_MACSEC_HW_CNTL_H */
