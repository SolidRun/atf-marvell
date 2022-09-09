/*******************************************************************************
Copyright (c) 2014 Marvell.
If you received this File from Marvell and you have entered into a commercial
license agreement (a "Commercial License") with Marvell, the File is licensed
to you under the terms of the applicable Commercial License.
*******************************************************************************/

/**********************************************************************
This file contains function prototypes for Mac interrupt, diagnostic
and other MAC supporting features for the Marvell X7121 PHYs.
**********************************************************************/
#ifndef MZD_MAC_DIAG_INTR_H
#define MZD_MAC_DIAG_INTR_H

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

/*****************************************************************************
Enabling and Checking MAC Lane Interrupts Bit Definition
*****************************************************************************/
/* Bit 31:12 NOT USED */                             /* Reserved */
#define MZD_MAC_FF_RX_RDY_BIT                (1<<11) /* application is receptive, used for debugging purpose */
/* Bit 10 Reserved */                                /* Bits 10 is reserved for other purpose */
#define MZD_MAC_RX_OVERRUN_BIT               (1<<9)  /* RX FIFO Overrun Interrupt Enable/Status */
#define MZD_MAC_TX_OVERRUN_BIT               (1<<8)  /* TX FIFO Overrun Interrupt Enable/Status */
#define MZD_MAC_TX_UNDERRUN_BIT              (1<<7)  /* TX FIFO Underrun(Empty) Interrupt Enable/Status */
#define MZD_MAC_LINK_INTR_FLT_BIT            (1<<6)  /* RX MII Link Interruption Fault Interrupt Enable/Status */
                                                     /* Not available to 200/400GBASER speed */
#define MZD_MAC_REMOTE_FLT_BIT               (1<<5)  /* Remote Fault Interrupt Enable/Status */
#define MZD_MAC_LOCAL_FLT_BIT                (1<<4)  /* Local Fault Interrupt Enable/Status */
/* Bit 3:1 NOT USED */                               /* Reserved */
/* Bit 0 Reserved */                                 /* Bits 0 is reserved for other purpose */

/******************************************************************************
MZD_FUNC MZD_STATUS mzdSetMacLaneInterruptEnable
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    IN MZD_U32 intrEnable
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address 0..31 that identified the MAC to be configured
    host_or_line - which interface is being set:
       MZD_HOST_SIDE
       MZD_LINE_SIDE
    laneOffset - 0-3; lane offset to be checked for link status
    intrEnable - See the bit definitions above for each Lane Interrupt

 Outputs:
    None

 Returns:
    MZD_OK if change was successful, MZD_FAIL if not.
    MZD_FAIL if the operating mode is not set properly or
    the device is not initialized.

 Description:
    This function enables MAC Lane Interrupts. This API configures all lanes on the MAC
    mapped to the given mdioPort.

    To enable certain interrupts, please read the interrupt enable setting back
    first by mzdGetMacLaneInterruptEnable(), then set corresponding bits and call
    this API to enable interrupts.

 Notes/Warnings:
    For 200G/400G speed, all lanes share the interrupt control on the same port.
    For 100G and lower speed this API enables interrupt on each of the lane.

    Please set the INTn Pin to MZD_PIN_MODE_INTR before calling this function.

    The bit flags can be OR together to enable multiple interrupts.
    For example:
    intrEnable |= (MZD_MAC_REMOTE_FLT_BIT | MZD_MAC_LOCAL_FLT_BIT)
    to enable these two interrupts.
******************************************************************************/
MZD_FUNC MZD_STATUS mzdSetMacLaneInterruptEnable
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    IN MZD_U32 intrEnable
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdGetMacLaneInterruptEnable
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    OUT MZD_U32 *intrEnable
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address 0..31 that identified the MAC to be read
    host_or_line - which interface is being set:
       MZD_HOST_SIDE
       MZD_LINE_SIDE
    laneOffset - 0-3; lane offset to be checked for link status;

 Outputs:
    intrEnable - See the bit definitions above mzdSetMacLaneInterruptEnable() for each Lane Interrupt

 Returns:
    MZD_OK if read was successful, MZD_FAIL if not.
    MZD_FAIL if the operating mode is not set properly or
    the device is not initialized.

 Description:
    This function reads MAC Lane Interrupt mask on each lane of the MAC mapped
    to the given mdioPort.

 Notes/Warnings:
    For 200G/400G speed, all lanes share the interrupt mask on the same port.
    100G and lower speed has separate interrupt mask for each of the lane.
******************************************************************************/
MZD_FUNC MZD_STATUS mzdGetMacLaneInterruptEnable
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    OUT MZD_U32 *intrEnable
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdGetMacLaneInterruptStatus
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    OUT MZD_U32 *intrStatus
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address 0..31 that identified the MAC to be read
    host_or_line - which interface is being set:
       MZD_HOST_SIDE
       MZD_LINE_SIDE
    laneOffset - 0-3; lane offset to be checked for link status;

 Outputs:
    intrStatus - See the bit definitions above mzdSetMacLaneInterruptEnable() for each Lane Interrupt

 Returns:
    MZD_OK if read was successful, MZD_FAIL if not.
    MZD_FAIL if the operating mode is not set properly or
    the device is not initialized.

 Description:
    This function reads MAC Lane Interrupt status on each lane of the MAC mapped
    to the given mdioPort.

    To determine if the interrupt is still asserted at the upper level, the
    current value can be AND with the interrupt enable flag from the function
    mzdGetMacLaneInterruptEnable().

 Notes/Warnings:
    Calling this API will clear the MAC interrupt status registers.

    The MACsec/MAC block need to be enabled on the port/lane that expect interrupt
    before calling this API to get the correct interrupt status.
    Please refers to mzdMacSecEnable(), mzdMacEnable() and mzdMacSetLowSpeed()/mzdMacSetHighSpeed().

    For 200G/400G speed, all lanes share the interrupt status on the same port.
    100G and lower speed has separate interrupt status for each of the lane.
******************************************************************************/
MZD_FUNC MZD_STATUS mzdGetMacLaneInterruptStatus
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    OUT MZD_U32 *intrStatus
);

/*****************************************************************************
Enabling and Checking MAC Tod Interrupts 1000BASEX/2.5GBASER/5GBASER/10GBASER/
25GBASER/40GBASER/50GBASER/100GBASER Bit Definition
*****************************************************************************/
/* Bit 31:17 NOT USED */                             /* Reserved */
#define MZD_MAC_TOD_TX_FIFO_LANE7_LSPEED    (1<<16) /* 2nd Port Lane3 TOD TX FIFO Overrun/Underrun Interrupt Enable/Status Bit */
#define MZD_MAC_TOD_TX_FIFO_LANE6_LSPEED    (1<<15) /* 2nd Port Lane2 TOD TX FIFO Overrun/Underrun Interrupt Enable/Status Bit */
#define MZD_MAC_TOD_TX_FIFO_LANE5_LSPEED    (1<<14) /* 2nd Port Lane1 TOD TX FIFO Overrun/Underrun Interrupt Enable/Status Bit */
#define MZD_MAC_TOD_TX_FIFO_LANE4_LSPEED    (1<<13) /* 2nd Port Lane0 TOD TX FIFO Overrun/Underrun Interrupt Enable/Status Bit */
#define MZD_MAC_TOD_TX_FIFO_LANE3_LSPEED    (1<<12) /* 1st Port Lane3 TOD TX FIFO Overrun/Underrun Interrupt Enable/Status Bit */
#define MZD_MAC_TOD_TX_FIFO_LANE2_LSPEED    (1<<11) /* 1st Port Lane2 TOD TX FIFO Overrun/Underrun Interrupt Enable/Status Bit */
#define MZD_MAC_TOD_TX_FIFO_LANE1_LSPEED    (1<<10) /* 1st Port Lane1 TOD TX FIFO Overrun/Underrun Interrupt Enable/Status Bit */
#define MZD_MAC_TOD_TX_FIFO_LANE0_LSPEED    (1<<9)  /* 1st Port Lane0 TOD TX FIFO Overrun/Underrun Interrupt Enable/Status Bit */
#define MZD_MAC_TOD_RX_FIFO_LANE7_LSPEED    (1<<8)  /* 2nd Port Lane3 TOD RX FIFO Overrun/Underrun Interrupt Enable/Status Bit */
#define MZD_MAC_TOD_RX_FIFO_LANE6_LSPEED    (1<<7)  /* 2nd Port Lane2 TOD RX FIFO Overrun/Underrun Interrupt Enable/Status Bit */
#define MZD_MAC_TOD_RX_FIFO_LANE5_LSPEED    (1<<6)  /* 2nd Port Lane1 TOD RX FIFO Overrun/Underrun Interrupt Enable/Status Bit */
#define MZD_MAC_TOD_RX_FIFO_LANE4_LSPEED    (1<<5)  /* 2nd Port Lane0 TOD RX FIFO Overrun/Underrun Interrupt Enable/Status Bit */
#define MZD_MAC_TOD_RX_FIFO_LANE3_LSPEED    (1<<4)  /* 1st Port Lane3 TOD RX FIFO Overrun/Underrun Interrupt Enable/Status Bit */
#define MZD_MAC_TOD_RX_FIFO_LANE2_LSPEED    (1<<3)  /* 1st Port Lane2 TOD RX FIFO Overrun/Underrun Interrupt Enable/Status Bit */
#define MZD_MAC_TOD_RX_FIFO_LANE1_LSPEED    (1<<2)  /* 1st Port Lane1 TOD RX FIFO Overrun/Underrun Interrupt Enable/Status Bit */
#define MZD_MAC_TOD_RX_FIFO_LANE0_LSPEED    (1<<1)  /* 1st Port Lane0 TOD RX FIFO Overrun/Underrun Interrupt Enable/Status Bit */
/* Bit 0 Reserved */                                /* Bits 0 is reserved for other purpose */

/*****************************************************************************
Enabling and Checking MAC Tod Interrupts 200/400GBASER Bit Definition
*****************************************************************************/
/* Bit 31:17 NOT USED */                            /* Reserved */
/* Bit 16:11 Reserved */                            /* Bits 16:11 are reserved for other purpose */
#define MZD_MAC_TOD_TX_FIFO_PORT1_HSPEED    (1<<10) /* 2nd Port TOD TX FIFO Overrun/Underrun Interrupt Bit Enable/Status Bit */
#define MZD_MAC_TOD_TX_FIFO_PORT0_HSPEED    (1<<9)  /* 1st Port TOD TX FIFO Overrun/Underrun Interrupt Bit Enable/Status Bit */
/* Bit 8:3 Reserved */                              /* Bits 8:3 are reserved for other purpose */
#define MZD_MAC_TOD_RX_FIFO_PORT1_HSPEED    (1<<2)  /* 2nd Port TOD RX FIFO Overrun/Underrun Interrupt Bit Enable/Status Bit */
#define MZD_MAC_TOD_RX_FIFO_PORT0_HSPEED    (1<<1)  /* 1st Port TOD RX FIFO Overrun/Underrun Interrupt Bit Enable/Status Bit */
/* Bit 0 Reserved */                                /* Bits 0 is reserved for other purpose */

/******************************************************************************
MZD_FUNC MZD_STATUS mzdSetMacTodInterruptEnable
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U32 overrunIntrEnable,
    IN MZD_U32 underrunIntrEnable
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address 0..31 that identified the MAC to be configured
    host_or_line - which interface is being set:
       MZD_HOST_SIDE
       MZD_LINE_SIDE
    overrunIntrEnable, underrunIntrEnable -
        See the bit definitions above for each Lane Interrupt

 Outputs:
    None

 Returns:
    MZD_OK if change was successful, MZD_FAIL if not.
    MZD_FAIL if the operating mode is not set properly or
    the device is not initialized.

 Description:
    This function enables MAC TOD Interrupts. This API configures all lanes on the MAC
    mapped to the given mdioPort.

    To enable TOD interrupts on certain lane, please read the interrupt enable
    setting back first by mzdGetMacTodInterruptEnable(), then set corresponding bits
    and call this API to enable TOD interrupts.

 Notes/Warnings:
    For 200G/400G speed, all lanes share the interrupt control on the same port.
    For 100G and lower speed this API enables interrupt on each of the lane.

    Please set the INTn Pin to MZD_PIN_MODE_INTR before calling this function.

    The bit flags can be OR together to enable multiple interrupts.
    For example:
    intrEnable |= (MZD_MAC_TOD_TX_FIFO_OR_LANE6_BIT | MZD_MAC_TOD_RX_FIFO_LANE0_BIT)
    to enable these two interrupts.
******************************************************************************/
MZD_FUNC MZD_STATUS mzdSetMacTodInterruptEnable
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U32 overrunIntrEnable,
    IN MZD_U32 underrunIntrEnable
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdGetMacTodInterruptEnable
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    OUT MZD_U32 *overrunIntrEnable,
    OUT MZD_U32 *underrunIntrEnable
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address 0..31 that identified the MAC to be read
    host_or_line - which interface is being set:
       MZD_HOST_SIDE
       MZD_LINE_SIDE

 Outputs:
    overrunIntrEnable, underrunIntrEnable -
        See the bit definitions above mzdSetMacTodInterruptEnable()
        for TOD Interrupts on each lane of the MAC mapped to mdioPort

 Returns:
    MZD_OK if read was successful, MZD_FAIL if not.
    MZD_FAIL if the operating mode is not set properly or
    the device is not initialized.

 Description:
    This function reads MAC TOD Interrupt mask on each lane of the MAC mapped
    to the given mdioPort.

 Notes/Warnings:
    For 200G/400G speed, all lanes share the interrupt mask on the same port.
    100G and lower speed has separate interrupt mask for each of the lane.
******************************************************************************/
MZD_FUNC MZD_STATUS mzdGetMacTodInterruptEnable
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    OUT MZD_U32 *overrunIntrEnable,
    OUT MZD_U32 *underrunIntrEnable
);


typedef enum
{
   MZD_MAC_TOD_INTR_TYPE_OVERRUN,
   MZD_MAC_TOD_INTR_TYPE_UNDERRUN,
   MZD_MAC_TOD_INTR_TYPE_BOTH,
   MZD_MAC_TOD_INTR_TYPE_COUNT,
} MZD_MAC_TOD_INTR_TYPE;

/******************************************************************************
MZD_FUNC MZD_STATUS mzdGetMacTodInterruptStatus
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_MAC_TOD_INTR_TYPE intrType,
    OUT MZD_U32 *overrunIntrStatus,
    OUT MZD_U32 *underrunIntrStatus
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address 0..31 that identified the MAC to be read
    host_or_line - which interface is being set:
       MZD_HOST_SIDE
       MZD_LINE_SIDE
   intrType - select one of the below to read MAC TOD interrupt status
       MZD_MAC_TOD_INTR_TYPE_OVERRUN
       MZD_MAC_TOD_INTR_TYPE_UNDERRUN
       MZD_MAC_TOD_INTR_TYPE_BOTH

 Outputs:
    overrunIntrStatus, underrunIntrStatus -
        See the bit definitions above mzdSetMacLaneInterruptEnable()
        for each TOD Interrupts on each lane

 Returns:
    MZD_OK if read was successful, MZD_FAIL if not.
    MZD_FAIL if the operating mode is not set properly or
    the device is not initialized.

 Description:
    This function reads MAC TOD Interrupt status on each lane of the MAC mapped
    to the given mdioPort.

    To determine if the interrupt is still asserted at the upper level, the
    current value can be AND with the interrupt enable flag from the function
    mzdGetMacTodInterruptEnable().

 Notes/Warnings:
    Calling this API will clear Overrun/Underrun MAC TOD interrupt
    status registers that selected to be read.

    The MACsec/MAC block need to be enabled on the port/lane that expect interrupt
    before calling this API to get the correct interrupt status.
    Please refers to mzdMacSecEnable(), mzdMacEnable() and mzdMacSetLowSpeed()/mzdMacSetHighSpeed().

    For 200G/400G speed, all lanes share the interrupt status on the same port.
    100G and lower speed has separate interrupt status for each of the lane.
******************************************************************************/
MZD_FUNC MZD_STATUS mzdGetMacTodInterruptStatus
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_MAC_TOD_INTR_TYPE intrType,
    OUT MZD_U32 *overrunIntrStatus,
    OUT MZD_U32 *underrunIntrStatus
);

/*****************************************************************************
Enabling and Checking MAC Global Interrupts Bit Definition
*****************************************************************************/
/* Bit 31:2 NOT USED */                             /* Reserved */
#define MZD_MAC_ILLEGAL_ACCESS_BIT          (1<<1)  /* Illegal address access Interrupt Enable/Status Bit */
/* Bit 0 Reserved */                                /* Bits 0 is reserved for other purpose */

/******************************************************************************
MZD_FUNC MZD_STATUS mzdSetMacGlobalInterruptEnable
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U32 intrEnable
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address 0..31 that identified the MAC to be configured
    host_or_line - which interface is being set:
       MZD_HOST_SIDE
       MZD_LINE_SIDE
    intrEnable - See the bit definitions above for each Global Interrupt

 Outputs:
    None

 Returns:
    MZD_OK if change was successful, MZD_FAIL if not.
    MZD_FAIL if the operating mode is not set properly or
    the device is not initialized.

 Description:
    This function enables MAC Global Interrupts. This API configures all lanes on the MAC
    mapped to the given mdioPort.

    To enable certain interrupts, please read the interrupt enable setting back
    first by mzdGetMacGlobalInterruptEnable(), then set corresponding bits and call
    this API to enable interrupts.

 Notes/Warnings:
    Please set the INTn Pin to MZD_PIN_MODE_INTR before calling this function.
******************************************************************************/
MZD_FUNC MZD_STATUS mzdSetMacGlobalInterruptEnable
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U32 intrEnable
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdGetMacGlobalInterruptEnable
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    OUT MZD_U32 *intrEnable
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address 0..31 that identified the MAC to be read
    host_or_line - which interface is being set:
       MZD_HOST_SIDE
       MZD_LINE_SIDE

 Outputs:
    intrEnable - See the bit definitions above mzdSetMacGlobalInterruptEnable()
                 for each Global Interrupt

 Returns:
    MZD_OK if read was successful, MZD_FAIL if not.
    MZD_FAIL if the operating mode is not set properly or
    the device is not initialized.

 Description:
    This function reads MAC Global Interrupt mask on each lane of the MAC mapped
    to the given mdioPort.

 Notes/Warnings:
    None.
******************************************************************************/
MZD_FUNC MZD_STATUS mzdGetMacGlobalInterruptEnable
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    OUT MZD_U32 *intrEnable
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdGetMacGlobalInterruptStatus
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    OUT MZD_U32 *intrStatus
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address 0..31 that identified the MAC to be read
    host_or_line - which interface is being set:
       MZD_HOST_SIDE
       MZD_LINE_SIDE

 Outputs:
    intrStatus - See the bit definitions above mzdSetMacGlobalInterruptEnable()
                 for each Global Interrupt

 Returns:
    MZD_OK if read was successful, MZD_FAIL if not.
    MZD_FAIL if the operating mode is not set properly or
    the device is not initialized.

 Description:
    This function reads MAC Global Interrupt status on each lane of the MAC mapped
    to the given mdioPort.

    The MACsec/MAC block need to be enabled on the port/lane that expect interrupt
    before calling this API to get the correct interrupt status.
    Please refers to mzdMacSecEnable(), mzdMacEnable() and mzdMacSetLowSpeed()/mzdMacSetHighSpeed().

    To determine if the interrupt is still asserted at the upper level, the
    current value can be AND with the interrupt enable flag from the function
    mzdGetMacGlobalInterruptEnable().

 Notes/Warnings:
    None.
******************************************************************************/
MZD_FUNC MZD_STATUS mzdGetMacGlobalInterruptStatus
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    OUT MZD_U32 *intrStatus
);

#define MZD_CONFIG_DUMP_MACSEC 1<<0
#define MZD_CONFIG_DUMP_HMUX   1<<1
/*******************************************************************************
MZD_FUNC MZD_STATUS mzdMacSecHmuxConfigDump
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    IN MZD_U32 dumpOptions
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    host_or_line - which interface is being checked:
                      MZD_HOST_SIDE
                      MZD_LINE_SIDE
    laneOffset - 0..3 for lanes 0-3 
    dumpOptions - MZD_CONFIG_DUMP_MACSEC: dump MACSec configuration registers
                  MZD_CONFIG_DUMP_HMUX:   dump HMUX configuration registers
                  Combined both to dump MACSec and HMUX configuration registers
 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL

 Description:
   This API retrieves the useful MAC, MACSec and HMUX registers information for diagnostic 
   use. These information will show if the MAC/MACSec/HMUX registers are configured correctly 
   for these operations.

   For MACSec rules, policy, SA, etc..., below calls are available in the MACSec DDK:
   CfyE_vPortIndex_Get
   CfyE_vPortHandle_Get
   CfyELib_RulesCount_Get
   SecY_Device_Role_Get
   SecY_Diag_Channel_Dump
   SecY_Diag_Device_Dump
   SecY_SA_vPortIndex_Get
   SecY_Diag_SA_Dump

 Side effects:
    None

 Notes/Warnings:
    The MAC/MACSec must be enabled before calling this mzdMacSecHmuxConfigDump API. 
    Otherwise this API will fail to access uninitialized MAC/MACSec registers.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdMacSecHmuxConfigDump
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U32 dumpOptions
);

#if C_LINKAGE
#if defined __cplusplus
}
#endif
#endif

#endif /* defined MZD_MAC_DIAG_INTR_H */
