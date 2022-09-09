/*******************************************************************************
Copyright (c) 2014 Marvell.
If you received this File from Marvell and you have entered into a commercial
license agreement (a "Commercial License") with Marvell, the File is licensed
to you under the terms of the applicable Commercial License.
*******************************************************************************/

/********************************************************************
This file contains function prototypes to call Serdes API functions, 
Serdes features and diagnostic operations for the 
Marvell X7121 Device.
********************************************************************/
#ifndef MZD_HWSERDESCNT_H
#define MZD_HWSERDESCNT_H

#if C_LINKAGE
#if defined __cplusplus
    extern "C" {
#endif
#endif

#define MZD_COMPHY_MajorRev      1
#define MZD_COMPHY_MinorRev      1
#define MZD_COMPHY_MinorRevB0    2

#define MZD_COMPHY_SKIP_LANE_SEL          0xFF

/* COMPHY Serdes register definitions */
#define MZD_COMPHY_CMN_SYS_REG               0x0000A314UL

/******************************************************************************
 MZD_FUNC MZD_STATUS mzdInitSerdesDev
(
    IN MZD_DEV_PTR pDev
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call

 Outputs:
    None
    
 Returns:
    MZD_OK if successful, MZD_FAIL otherwise

 Description:
    This function load and initialize serdes device structure in the given pDev.
   
    This SerDes initialization function is called during mzdInitDriver().
    It will initialize the MDIO read/write set/get pin configuration and wait
    function pointer for the serdes API operation.

 Side effects:
    None

 Notes/Warnings:
    Calling this function requires blocking all other caller from reading and 
    writing to the APB address until this call is completed.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdInitSerdesDev
(
    IN MZD_DEV_PTR pDev
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdSetSerdesDevInfo
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 serdesMapPort,
    IN MZD_U16 serdesMapHostLine
);

 Inputs:
    devPtr - pointer to MZD_DEV initialized by mzdInitDriver() call
    serdesMapPort - the MDIO port address that host want to perform serdes operations
                    on, 0-31
    serdesMapHostLine - MZD_HOST_SIDE or MZD_LINE_SIDE

 Outputs:
    None 

 Returns:
    MZD_OK if successful
    MZD_FAIL if not

Description:
    Function must be called before calling the COMPHY SerDes API. This function set the 
    MDIO port and Host/Line of the SerDes lane to be accessed.

    Usage:
    MZD_ATTEMPT(mzdSetSerdesDevInfo(pDev, mdioPort, MZD_LINE_SIDE));
    MZD_ATTEMPT(API_C112GX4_SetLaneEnable(pSerdesDev, laneOffset, MZD_TRUE));
    
 Side effects:
    None

 Notes/Warnings:
    None

*******************************************************************************/
MZD_FUNC MZD_STATUS mzdSetSerdesDevInfo
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 serdesMapPort,
    IN MZD_U16 serdesMapHostLine
);

/******************************************************************************
 APIs to access serdes common registers(0x8000-0xFFFF) and
                       lane registers(0x0000-0x7FFF)
*******************************************************************************/
/******************************************************************************
MZD_FUNC MZD_STATUS mzdHwSerdesPhyRegWrite
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 serdesLane,
    IN MZD_U32 regAddr,
    IN MZD_U32 data
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    host_or_line - which interface is being checked:
       MZD_HOST_SIDE
       MZD_LINE_SIDE
    serdesLane - lane number of the serdes on given mdioPort and side
                 Optional:
                 set to MZD_COMPHY_SKIP_LANE_SEL to speed up when accessing
                 common registers(0x8000-0xFFFF) or writing lane register is broadcast mode
    regAddr - serdes register address to access
    data - data to be written to the register

 Outputs:
    None

 Returns:
    MZD_OK on success, or
    MZD_FAIL  - on error

 Description:
    Uses the Advanced Peripheral Bus (APB) MDIO to write to the SerDes common or lane registers.
    This function will use the mzdHwSerdesPhyMapRegAddr with the provided mdioPort, host/line
    and register address, maps to the appropriate SerDes device register.

    Serdes registers address from 0x8000-0xFFFF are common registers shared among all lanes
    on the given mdioPort. Register address from 0x0000-0x8000 are lane specific registers.

 Side effects:
    None
 
 Notes/Warnings:
    Calling this function requires blocking all other caller from reading and 
    writing to the APB address until this call is completed.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdHwSerdesPhyRegWrite
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 serdesLane,
    IN MZD_U32 regAddr,
    IN MZD_U32 data
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdHwSerdesPhyRegRead
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 serdesLane,
    IN MZD_U32 regAddr,
    OUT MZD_U32 *data
);
  
 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31 
    host_or_line - which interface is being checked:
      MZD_HOST_SIDE
      MZD_LINE_SIDE
    serdesLane - lane number of the serdes on given mdioPort and side
                 Optional:
                 set to MZD_COMPHY_SKIP_LANE_SEL to speed up when accessing
                 common registers(0x8000-0xFFFF)
    regAddr - PRAM register to access

 Outputs:
    data - return the read data

 Returns:
    MZD_OK on success, or
    MZD_FAIL  - on error

 Description:
    Uses the Advanced Peripheral Bus (APB) MDIO to read from the SerDes common or lane registers.
    This function will use the mzdHwSerdesPhyMapRegAddr with the provided mdioPort, host/line
    and register address, maps to the appropriate SerDes device register.

    Serdes registers address from 0x8000-0xFFFF are common registers shared among all lanes
    on the given mdioPort. Registers address from 0x0000-0x8000 are lane specific registers.

 Side effects:
    None

 Notes/Warnings:
    Calling this function requires blocking all other caller from reading and 
    writing to the APB address until this call is completed.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdHwSerdesPhyRegRead
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 serdesLane,
    IN MZD_U32 regAddr,
    OUT MZD_U32 *data
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdHwSetSerdesPhyRegField
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 serdesLane,
    IN MZD_U32 regAddr,
    IN MZD_U8 fieldOffset,
    IN MZD_U8 fieldLength,
    IN MZD_U32 data
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    host_or_line - which interface is being checked:
       MZD_HOST_SIDE
       MZD_LINE_SIDE
    serdesLane - lane number of the serdes on given mdioPort and side
                 it is optional to pass in MZD_COMPHY_SKIP_LANE_SEL if 
                 regAddr is common register or broadcast mode is enabled by 
                 mzdHwSerdesPhyLaneRegBroadcast()
    regAddr - serdes register address to access
    fieldOffset - The field start bit index. (0 - 31)
    fieldLength - Number of bits to read
    data - data to be written to the register

 Outputs:
    None

 Returns:
    MZD_OK on success, or
    MZD_FAIL  - on error

 Description:
    Uses the Advanced Peripheral Bus (APB) MDIO to read-modify-write SerDes  
    common or lane registers.

    See the mzdHwSerdesPhyRegWrite() for details

 Side effects:
    None
 
 Notes/Warnings:
    Note that if this API is called after APB broadcast mode is enabled
    (31.F403.1). Data after modified will be written 
    to all serdes and ignoring mdioPort and host_or_line.

    Calling this function requires blocking all other caller from reading and 
    writing to the APB address until this call is completed.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdHwSetSerdesPhyRegField
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 serdesLane,
    IN MZD_U32 regAddr,
    IN MZD_U8 fieldOffset,
    IN MZD_U8 fieldLength,
    IN MZD_U32 data
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdHwGetSerdesPhyRegField
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 serdesLane,
    IN MZD_U32 regAddr,
    IN MZD_U8 fieldOffset,
    IN MZD_U8 fieldLength,
    OUT MZD_U32 *data
);
  
 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31 
    host_or_line - which interface is being checked:
      MZD_HOST_SIDE
      MZD_LINE_SIDE
    serdesLane - lane number of the serdes on given mdioPort and side
                 it is optional to pass in MZD_COMPHY_SKIP_LANE_SEL if regAddr is common register
    regAddr - PRAM register to access
    fieldOffset - The field start bit index. (0 - 31)
    fieldLength - Number of bits to read

 Outputs:
    data - return the read data

 Returns:
    MZD_OK on success, or
    MZD_FAIL  - on error

 Description:
    Uses the Advanced Peripheral Bus (APB) MDIO to read a specified field from the SerDes
    common or lane registers. 
 
    See the mzdHwSerdesPhyRegRead() for details.

 Side effects:
    None

 Notes/Warnings:
    Calling this function requires blocking all other caller from reading and 
    writing to the APB address until this call is completed.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdHwGetSerdesPhyRegField
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 serdesLane,
    IN MZD_U32 regAddr,
    IN MZD_U8 fieldOffset,
    IN MZD_U8 fieldLength,
    OUT MZD_U32 *data
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdHwSerdesPhyLaneRegBroadcast
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U32 enable
);
  
 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31 
    host_or_line - which interface is being checked:
      MZD_HOST_SIDE
      MZD_LINE_SIDE
    enable - MZD_ENABLE to enable broadcast mode
             MZD_DISABLE to disable broadcast mode

 Outputs:
    data - return the read data

 Returns:
    MZD_OK on success, or
    MZD_FAIL  - on error

 Description:
    COMPHY lane registers(0x0000-0x7FFF) can be written in broadcast mode. 
    If broadcast is enabled, calling mzdHwSerdesPhyRegWrite() will applies 
    to all lanes when regAddr is a lane register. User can pass 
    MZD_COMPHY_SKIP_LANE_SEL to mzdHwSerdesPhyRegWrite() in broadcasting 
    for speeding up.

 Side effects:
    None
 
 Notes/Warnings:
    Calling this function requires blocking all other caller from reading and 
    writing to the APB address until this call is completed.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdHwSerdesPhyLaneRegBroadcast
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U32 enable
);

#if C_LINKAGE
#if defined __cplusplus
}
#endif
#endif

#endif /* defined MZD_HWSERDESCNT_H */
