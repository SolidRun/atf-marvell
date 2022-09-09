/*******************************************************************************
Copyright (c) 2014 Marvell.
If you received this File from Marvell and you have entered into a commercial
license agreement (a "Commercial License") with Marvell, the File is licensed
to you under the terms of the applicable Commercial License.
*******************************************************************************/

/**********************************************************************
This file contains function prototypes for MACSec diagnostic, MACSec
Advance Interrupt Controller(AIC) and other MACSec supporting features 
for the Marvell X7121 PHYs.
**********************************************************************/
#ifndef MZD_MACSEC_DIAG_INTR_H
#define MZD_MACSEC_DIAG_INTR_H
#if C_LINKAGE
#if defined __cplusplus
    extern "C" {
#endif
#endif

typedef enum  
{                     
   MZD_MACSEC_CFYE = 1, /* Classification Engine */
   MZD_MACSEC_SECY = 2  /* Security Entity */
} MZD_MACSEC_BLOCK;

#define INT_MASK_ALL_SOURCES  0x3FFFFFF

/************************************************************************************
MZD_FUNC MZD_STATUS mzdMACsecInterruptEnable
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_U16 deviceMACSecId,
    IN MZD_MACSEC_BLOCK cfyE_or_secY, 
    IN MZD_U32 interruptMask,   
    IN MZD_BOOL bGlobalInterrupt
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    host_or_line - MZD_HOST_SIDE interface or 
                   MZD_LINE_SIDE interface
    laneOffset - 0..3 for lanes 0-3. 

    deviceMACSecId - MACSec (ingress or egress) device Id assigned from  
                     the mzdMacSecGetAssignedDeviceID()

    cfyE_or_secY - MZD_MACSEC_CFYE: Classification Engine or 
                   MZD_MACSEC_SECY: Security Entity

    interruptMask - OR-ed combination of EIP201 interrupt sources
                    refer to the interrupt selections in 
                    api_secy.h:
                    SECY_EVENT_xxx
                    api_cfye.h:
                    CFYE_EVENT_xxx

    bGlobalInterrupt - Global or channel interrupt

 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL

 Description:
    This function enables the Advance Interrupt Controller(AIC) interrupt enable control 
    register AIC_ENABLE_CTRL(0xFC08). 

    With the AIC_ENABLE_CTRL enabled, the AIC interrupt will be reported to the X7121 family
    device chip level. 

    AIC Interrupt Enable Register - AIC_ENABLE_SET
    Individual "interrupt enable" bits per interrupt input:
    1b = Enable the interrupt by setting the corresponding AIC_ENABLE_CTRL register bit.
    0b = Writing a 0b has no effect; after writing a 1b it is not necessary to write a 0b.

 Side effects:
    None

 Notes/Warnings:
    Caller should keep a list of the interrupt enable request issue to the MACSec devices. 
    The X7121 chip interrupt only signal the MACSEC0 and/or MACSEC1 block when an interrupt
    is received from the corresponding MACSec device. With the list of the issued interrupt
    to the device, caller can check against the list and not having to loop through all the 
    MACSec devices to find which device triggered the interrupt.  

    Refer to the mzdMACsecSampleInterrupt() in the MACSec sample on using 
    these MACSec interrupt APIs.

    Calling this function requires blocking all other caller from reading and 
    writing to the APB address until this call is completed.
************************************************************************************/
MZD_FUNC MZD_STATUS mzdMACsecInterruptEnable
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_U16 deviceMACSecId,
    IN MZD_MACSEC_BLOCK cfyE_or_secY,
    IN MZD_U32 interruptMask,        
    IN MZD_BOOL bGlobalInterrupt     
);


/************************************************************************************
MZD_FUNC MZD_STATUS mzdMACsecInterruptClear
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_U16 deviceMACSecId,
    IN MZD_MACSEC_BLOCK cfyE_or_secY, 
    IN MZD_U32 interruptMask,         
    IN MZD_BOOL bGlobalInterrupt      
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    host_or_line - MZD_HOST_SIDE interface or 
                   MZD_LINE_SIDE interface
    laneOffset - 0..3 for lanes 0-3. 

    deviceMACSecId - MACSec (ingress or egress) device Id assigned from  
                     the mzdMacSecGetAssignedDeviceID()

    cfyE_or_secY - MZD_MACSEC_CFYE: Classification Engine or 
                   MZD_MACSEC_SECY: Security Entity

    interruptMask - OR-ed combination of EIP201 interrupt sources
                    refer to the interrupt selections in 
                    api_secy.h:
                    SECY_EVENT_xxx
                    api_cfye.h:
                    CFYE_EVENT_xxx

    bGlobalInterrupt - Global or channel interrupt

 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL

 Description:
    This function clears the Advance Interrupt Controller(AIC) interrupts by issuing an 
    "acknowledge" through AIC Interrupt Acknowledge Register - AIC_ACK(0xFC10)(0xF4n10).  

    It is recommended to "acknowledge" and clear the interrupt before enabling it to 
    prevent spurious interrupts.
    
    Individual "acknowledge" bits per interrupt input:
    1b = Resets the edge detector for the interrupt input, clearing the corresponding 
         AIC_RAW_STAT register bit. It is advisable to "acknowledge" an interrupt before 
         enabling it (to prevent spurious interrupts).
    0b = Writing a 0b has no effect; after writing a 1b it is not necessary to write a 0b.
   
 Side effects:
    None

 Notes/Warnings:
    If the condition that triggers the interrupt is not removed, i.e. expired SA, the 
    interrupt bit will not be cleared until the expired SA is updated or removed. 

    Refer to the mzdMACsecSampleInterrupt() in the MACSec sample on using 
    these MACSec interrupt APIs.

    Calling this function requires blocking all other caller from reading and 
    writing to the APB address until this call is completed.
************************************************************************************/
MZD_FUNC MZD_STATUS mzdMACsecInterruptClear
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_U16 deviceMACSecId,
    IN MZD_MACSEC_BLOCK cfyE_or_secY,
    IN MZD_U32 interruptMask,        
    IN MZD_BOOL bGlobalInterrupt     
);


/************************************************************************************
MZD_FUNC MZD_STATUS mzdMACsecInterruptDisable
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_U16 deviceMACSecId,
    IN MZD_MACSEC_BLOCK cfyE_or_secY,
    IN MZD_U32 interruptMask,        
    IN MZD_BOOL bGlobalInterrupt     
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    host_or_line - MZD_HOST_SIDE interface or 
                   MZD_LINE_SIDE interface
    laneOffset - 0..3 for lanes 0-3. 

    deviceMACSecId - MACSec (ingress or egress) device Id assigned from  
                     the mzdMacSecGetAssignedDeviceID()

    cfyE_or_secY - MZD_MACSEC_CFYE: Classification Engine or 
                   MZD_MACSEC_SECY: Security Entity

    interruptMask - OR-ed combination of EIP201 interrupt sources
                    refer to the interrupt selections in 
                    api_secy.h:
                    SECY_EVENT_xxx
                    api_cfye.h:
                    CFYE_EVENT_xxx

    bGlobalInterrupt - Global or channel interrupt

 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL

 Description:
    This function disables the Advance Interrupt Controller(AIC) interrupts by issuing  
    the "interrupt disable" bit mask to the AIC_ENABLE_CLR(0xFC14) register.
    
    Individual "interrupt disable" bits per interrupt input:
    1b = Disable the interrupt by clearing the corresponding AIC_ENABLE_CTRL register bit.
    0b = Writing a 0b has no effect; after writing a 1b it is not necessary to write a 0b.
   
 Side effects:
    None

 Notes/Warnings:
    Refer to the mzdMACsecSampleInterrupt() in the MACSec sample on using 
    these MACSec interrupt APIs.

    Calling this function requires blocking all other caller from reading and 
    writing to the APB address until this call is completed.
************************************************************************************/
MZD_FUNC MZD_STATUS mzdMACsecInterruptDisable
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_U16 deviceMACSecId,
    IN MZD_MACSEC_BLOCK cfyE_or_secY,
    IN MZD_U32 interruptMask,        
    IN MZD_BOOL bGlobalInterrupt     
);


/************************************************************************************
MZD_FUNC MZD_STATUS mzdMACsecGetInterruptStatus
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_U16 deviceMACSecId,
    IN MZD_MACSEC_BLOCK cfyE_or_secY,  
    OUT MZD_U32 *interruptSourceStatus,
    IN MZD_BOOL bGlobalInterrupt       
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    host_or_line - MZD_HOST_SIDE interface or 
                   MZD_LINE_SIDE interface
    laneOffset - 0..3 for lanes 0-3. 

    deviceMACSecId - MACSec (ingress or egress) device Id assigned from  
                     the mzdMacSecGetAssignedDeviceID()

    cfyE_or_secY - MZD_MACSEC_CFYE: Classification Engine or 
                   MZD_MACSEC_SECY: Security Entity


    bGlobalInterrupt - Global or channel interrupt

 Outputs:
    interruptSourceStatus - OR-ed combination of EIP201 interrupt sources
                            refer to the interrupt selections in 
                            api_secy.h:
                            SECY_EVENT_xxx
                            api_cfye.h:
                            CFYE_EVENT_xxx

 Returns:
    MZD_OK or MZD_FAIL

 Description:
    This function retrieves the Advance Interrupt Controller(AIC) interrupts status by   
    issuing the bit mask to the AIC_RAW_STAT(0xFC2C)(0xF4n10) register.
    
    After the interrupt status is retrieved, it issues an interrupt acknowledgment to
    clear the status.

 Side effects:
    None

 Notes/Warnings:
    Caller should keep a list of the interrupt enable request issue to the MACSec devices. 
    The X7121 chip interrupt only signal the MACSEC0 and/or MACSEC1 block when an interrupt
    is received from the corresponding MACSec device. With the list of the issued interrupt
    to the device, caller can check against the list and not having to loop through all the 
    MACSec devices to find which device triggered the interrupt.  

    Refer to the mzdMACsecSampleInterrupt() in the MACSec sample on using 
    these MACSec interrupt APIs.

    Calling this function requires blocking all other caller from reading and 
    writing to the APB address until this call is completed.
************************************************************************************/
MZD_FUNC MZD_STATUS mzdMACsecGetInterruptStatus
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_U16 deviceMACSecId,
    IN MZD_MACSEC_BLOCK cfyE_or_secY,   
    OUT MZD_U32 *interruptSourceStatus, 
    IN MZD_BOOL bGlobalInterrupt        
);


/************************************************************************************
MZD_FUNC MZD_STATUS mzdMACsecGetEnabledInterruptStatus
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_U16 deviceMACSecId,
    IN MZD_MACSEC_BLOCK cfyE_or_secY,  
    OUT MZD_U32 *interruptSourceStatus,
    IN MZD_BOOL bGlobalInterrupt        
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    host_or_line - MZD_HOST_SIDE interface or 
                   MZD_LINE_SIDE interface
    laneOffset - 0..3 for lanes 0-3. 

    deviceMACSecId - MACSec (ingress or egress) device Id assigned from  
                     the mzdMacSecGetAssignedDeviceID()

    cfyE_or_secY - MZD_MACSEC_CFYE: Classification Engine or 
                   MZD_MACSEC_SECY: Security Entity

    bGlobalInterrupt - Global or channel interrupt

 Outputs:
    interruptSourceStatus - OR-ed combination of EIP201 interrupt sources
                            refer to the interrupt selections in 
                            api_secy.h:
                            SECY_EVENT_xxx
                            api_cfye.h:
                            CFYE_EVENT_xxx

 Returns:
    MZD_OK or MZD_FAIL

 Description:
    This function reads the enabled interrupt that is set by the mzdMACsecInterruptEnable().
    No other operation is performed in the function other than reading the enabled interrupt.
       
 Side effects:
    None

 Notes/Warnings:
    Refer to the mzdMACsecSampleInterrupt() in the MACSec sample on using 
    these MACSec interrupt APIs.

    Calling this function requires blocking all other caller from reading and 
    writing to the APB address until this call is completed.
************************************************************************************/
MZD_FUNC MZD_STATUS mzdMACsecGetEnabledInterruptStatus
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_U16 deviceMACSecId,
    IN MZD_MACSEC_BLOCK cfyE_or_secY,  
    OUT MZD_U32 *interruptSourceStatus,
    IN MZD_BOOL bGlobalInterrupt       
);


/************************************************************************************
MZD_FUNC MZD_STATUS mzdMACsecStatistics
(
    IN MZD_DEV_PTR pDev,
    IN PMZD_MACSEC_RES_STURCT resMACSecStuct
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    resMACSecStuct - handles of all the MACSec resources to be released 

 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not

 Description:
  This API consolidates the commonly used MACSec ingress and egress statistics counters. 
  The pass-in resMACSecStuct must be filled with the requested MACSec ingress and egress 
  resource handles. 
  
  This API reads the following MACSec counters:
  - SA Ingress statistics counters
  - SecY Ingress statistics counters
  - IFC/IFC1 Ingress statistics counters
  - SA Egress statistics counters
  - SecY Egress statistics counters
  - IFC/IFC1 Egress statistics counters

  Refer to the MZD_MACSEC_RES_STURCT for all the necessary fields.

  Refer to the MACSec DDK files listed below for more MACSec related statistic APIs that 
  are not included in this mzdMACsecStatistics() API.
  - adapter_secy_stats.c
  - adapter_cfye_stats.c

 Notes/Warnings:
    MACSec APIs are designed as non-reentrant call.  Each individual operation 
    must be completed before making the call for the next operation.
************************************************************************************/
MZD_FUNC MZD_STATUS mzdMACsecStatistics
(
    IN MZD_DEV_PTR pDev,
    IN PMZD_MACSEC_RES_STURCT resMACSecStuct
);


/************************************************************************************
MZD_STATUS mzdMACsecMappedAICDevices

Internal function to support device mapping for the Advance Interrupt Controller(AIC)
devices
************************************************************************************/
MZD_FUNC MZD_STATUS mzdMACsecMappedAICDevices
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_U16 deviceMACSecId,
    IN MZD_MACSEC_BLOCK cfyE_or_secY,
    OUT Device_Handle_t *globalICDev,
    OUT Device_Handle_t *channelICDev
);

#if C_LINKAGE
#if defined __cplusplus
}
#endif
#endif

#endif /* defined MZD_MACSEC_DIAG_INTR_H */
