/*******************************************************************************
Copyright (c) 2014 Marvell.
If you received this File from Marvell and you have entered into a commercial
license agreement (a "Commercial License") with Marvell, the File is licensed
to you under the terms of the applicable Commercial License.
*******************************************************************************/

/************************************************************************
This file contains function prototypes to configure RS-FEC/KR-FEC 
and read RS-FEC/KR-FEC status for the Marvell X7121 Device.
************************************************************************/
#ifndef MZD_RSFEC_H
#define MZD_RSFEC_H

#if C_LINKAGE
#if defined __cplusplus
    extern "C" {
#endif
#endif

#define MZD_NUM_400G_FEC_LANES  16 /* number of FEC lanes for 400G PCS, PCS lanes is the same */
#define MZD_NUM_200G_FEC_LANES   8 /* number of FEC lanes for 200G PCS, PCS lanes is the same */
#define MZD_NUM_100G_PCS_LANES  20 /* number of PCS lanes for 100G PCS */
#define MZD_NUM_100G_FEC_LANES   4 /* number of FEC lanes for 100G PCS */
#define MZD_NUM_50G_PCS_LANES    4 /* number of PCS lanes for 40G/50G PCS */
#define MZD_NUM_50G_FEC_LANES    2 /* number of FEC lanes for 50G PCS */

/*******************************************************************************
 These functions are general RS-FEC functions. Some are applicable to all
 RS-FEC and some are not applicable to certain PCSs. Read each function
 header to find which are applicable/not applicable. Note: two 40G modes
 use the 50G PCS. Those are P40BR and P40JR. For those modes, the comments
 related to 50G apply to those 40G modes as well.
*******************************************************************************/

/*******************************************************************************
MZD_FUNC MZD_STATUS mzdSetRsFecControl
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    IN MZD_U16 bypassIndicationEnable,
    IN MZD_U16 bypassCorrectionEnable
);

 Inputs:
    pDev       - pointer to MZD_DEV initialized by mzdInitDriver() call
    
    mdioPort   - MDIO port address, 0-31
    
    host_or_line - which interface is being set:
                   MZD_HOST_SIDE
                   MZD_LINE_SIDE       
                   
    laneOffset - For R4 coupled modes, need to pass lane 0
                 For R2 coupled modes, need to pass lanes 0, 2
                 For single lane modes, 0-3 to select lane
                 
    bypassIndicationEnable - 
                 MZD_ENABLE:  FEC decoder does not indicate errors to the PCS; 
                 MZD_DISABLE: FEC decoder indicates errors to the PCS
                 
    bypassCorrectionEnable - 
                 MZD_ENABLE:  FEC decoder performs detection without correction; 
                 MZD_DISABLE: FEC decoder performs detection and correction

 Outputs:
    None

 Returns:
    MZD_OK if RS-FEC configuration is successful, MZD_FAIL if not

 Description:
    Used to modify the FEC Bypass Indication Enable and/or FEC Bypass Correction
    Enable in the RS-FEC Control Register.

    This API function sets 1.X0C8 bits 1:0 (RS-FEC Control Register). See
    the datasheet for details regarding which modes are supported for
    these two bits.

 Side effects:
    None.

 Notes/Warnings:
    If both are set to MZD_ENABLE, an error will be returned. This is not
    applicable to 200G/400G modes. An error will be returned if called with any
    200G/400G modes.

*******************************************************************************/
MZD_FUNC MZD_STATUS mzdSetRsFecControl  
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    IN MZD_U16 bypassIndicationEnable,
    IN MZD_U16 bypassCorrectionEnable
);

/*******************************************************************************
MZD_FUNC MZD_STATUS mzdGetRsFecControl
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    OUT MZD_U16 *bypassIndicationEnable,
    OUT MZD_U16 *bypassCorrectionEnable
);


 Inputs:
    pDev       - pointer to MZD_DEV initialized by mzdInitDriver() call
    
    mdioPort   - MDIO port address, 0-31
    
    host_or_line - which interface is being set:
                   MZD_HOST_SIDE
                   MZD_LINE_SIDE       
                   
    laneOffset - For R4 coupled modes, need to pass lane 0
                 For R2 coupled modes, need to pass lanes 0, 2
                 For single lane modes, 0-3 to select lane
                 
 Outputs:
    bypassIndicationEnable - 
                 MZD_ENABLE:  FEC decoder does not indicate errors to the PCS; 
                 MZD_DISABLE: FEC decoder indicates errors to the PCS
                 
    bypassCorrectionEnable - 
                 MZD_ENABLE:  FEC decoder performs detection without correction; 
                 MZD_DISABLE: FEC decoder performs detection and correction

 Returns:
    MZD_OK if RS-FEC configuration is successful, MZD_FAIL if not

 Description:
    Used to read the FEC Bypass Indication Enable and/or FEC Bypass Correction
    Enable in the RS-FEC Control Register in the RS-FEC Control register.

 Side effects:
    None.

 Notes/Warnings:
    This is not applicable to 200G/400G modes. An error will be returned if called with 
    any 200G/400G modes.

*******************************************************************************/
MZD_FUNC MZD_STATUS mzdGetRsFecControl
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    OUT MZD_U16 *bypassIndicationEnable,
    OUT MZD_U16 *bypassCorrectionEnable
);


/*******************************************************************************
MZD_FUNC MZD_STATUS mzdGetRsFecStatus
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16  host_or_line,
    IN MZD_U16  laneOffset,
    OUT MZD_U16 *pcsLaneAlignment,
    OUT MZD_U16 *fecLaneAlignment,
    OUT MZD_U16 *rsFecLaneAMLock,
    OUT MZD_U16 *latchedRsFecHighErr,
    OUT MZD_U16 *currRsFecHighErr
);

 Inputs:
    pDev     - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    
    host_or_line - which interface is being set:
                   MZD_HOST_SIDE
                   MZD_LINE_SIDE 

    laneOffset - For R4/R8 coupled modes, need to pass lane 0
                 For R2 coupled modes, need to pass lanes 0, 2
                 For single lane modes, 0-3 to select lane

 Outputs:
    pcsLaneAlignment - PCS lane alignment status of FEC encoder
                       1 = aligned
                       0 = not-aligned
                       
    fecLaneAlignment - FEC receiver lane alignment status (locked and aligned)
                       1 = aligned (for 200G this is set to same as pcsLaneAlignment
                                    because in 100G FEC and PCS are integrated)
                       0 = not-aligned
                       
    rsFecLaneAMLock - Bits 0-15 are mapped to lanes 0-15.
                      For 400G, bits 0-15 are relevant.
                      For 200G, bits 0-7 are relevant.
                      For 50/100G, bits 0-3 are relevant
                      For 25G, 0 is always returned (this parameter is N/A)
                      1 = locked 
                      0 = not locked
                      
    latchedRsFecHighErr - first read of the LH bit for the RS FEC Error Indication
                          For 200G/400G this is PCS FEC High SER LH bit
                          
    currRsFecHighErr - second read of the LH bit for the RS FEC Error Indication
                       For 200G/400G this is PCS FEC High SER bit (current)

 Returns:
    MZD_OK if RS-FEC status is successful, MZD_FAIL if not

 Description:
    Reads and returns the status above from the correct RS-FEC status 
    registers based on the mode/speed.

 Side effects:
    None.

 Notes/Warnings:
    None

 *******************************************************************************/
MZD_FUNC MZD_STATUS mzdGetRsFecStatus
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16  mdioPort,
    IN MZD_U16  host_or_line,
    IN MZD_U16  laneOffset,
    OUT MZD_U16 *pcsLaneAlignment,
    OUT MZD_U16 *fecLaneAlignment,
    OUT MZD_U16 *rsFecLaneAMLock,
    OUT MZD_U16 *latchedRsFecHighErr,
    OUT MZD_U16 *currRsFecHighErr
);

/*******************************************************************************
MZD_FUNC MZD_STATUS mzdGetRsFecPCSAlignmentStatus
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16  mdioPort,
    IN MZD_U16  host_or_line,
    IN MZD_U16  laneOffset,    
    IN MZD_U16  pcs_lane,
    OUT MZD_U16 *blockLocked,
    OUT MZD_U16 *laneAligned
);

 Inputs:
    pDev     - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    
    host_or_line - which interface is being set:
                   MZD_HOST_SIDE
                   MZD_LINE_SIDE 
                   
    laneOffset - For R4 coupled modes, need to pass lane 0
                 For R2 coupled modes, need to pass lanes 0, 2
                 For single lane modes, 0-3 to select lane   
                 
    pcs_lane - PCS lane number, 0-19(100G), 0-3(50G)

 Outputs:
    blockLocked - RS-FEC PCS block lock status 
                  1 = locked
                  0 = not locked
                  
    laneAligned - RS-FEC PCS lane alignment status
                  1 = lane aligned
                  0 = lane not aligned

 Returns:
    MZD_OK if read RS-FEC PCS Alignment status is successful, MZD_FAIL if not

 Description:
    Reads the RS-FEC PCS alignment/lane lock status bit for a given RS-FEC lane.

 Side effects:
    None.

 Notes/Warnings:
    Not applicable to 200G/400G modes or 25G modes. Will return an error if called
    with these modes.

*******************************************************************************/
MZD_FUNC MZD_STATUS mzdGetRsFecPCSAlignmentStatus
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16  mdioPort,
    IN MZD_U16  host_or_line,
    IN MZD_U16  laneOffset,    
    IN MZD_U16  pcs_lane,
    OUT MZD_U16 *blockLocked,
    OUT MZD_U16 *laneAligned
);

/*******************************************************************************
MZD_FUNC MZD_STATUS mzdGetRsFecPMALaneMapping
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16  mdioPort,
    IN MZD_U16  host_or_line,
    IN MZD_U16  laneOffset,        
    OUT MZD_U16 mapping[MZD_NUM_LANES]
);

 Inputs:
    pDev     - pointer to MZD_DEV initialized by mzdInitDriver() call
    
    mdioPort - MDIO port address, 0-31
    
    host_or_line - which interface is being set:
                   MZD_HOST_SIDE
                   MZD_LINE_SIDE 
                   
    laneOffset - For R4 coupled modes, need to pass lane 0
                 For R2 coupled modes, need to pass lanes 0, 2
                 For single lane modes, 0-3 to select lane                   
                   
 Outputs:
    mapping - RS-FEC PMA lane mapping data array
              mapping[0] = RS-FEC lane 0 mapped to PMA lane# 
              mapping[1] = RS-FEC lane 1 mapped to PMA lane#
              mapping[2] = RS-FEC lane 2 mapped to PMA lane# (100G only)
              mapping[3] = RS-FEC lane 3 mapped to PMA lane# (100G only)

 Returns:
    MZD_OK if read RS-FEC PMA lane mapping is successful, MZD_FAIL if not

 Description:
    Get RS-FEC lane to PMA lane mapping.

 Side effects:
    None.

 Notes/Warnings:
    Not applicable to 200G/400G modes or 25G modes. Will return an error if called
    with these modes.

*******************************************************************************/
MZD_FUNC MZD_STATUS mzdGetRsFecPMALaneMapping
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16  mdioPort,
    IN MZD_U16  host_or_line,
    IN MZD_U16  laneOffset,        
    OUT MZD_U16 mapping[MZD_NUM_LANES]
);

/*******************************************************************************
MZD_FUNC MZD_STATUS mzdGetRxPCSLaneMapping
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 lane_offset,
    IN MZD_U16 interface_lane,
    OUT MZD_U16 *pcs_lane
);


 Inputs:
    pDev     - pointer to MZD_DEV initialized by mzdInitDriver() call
    
    mdioPort - MDIO port address, 0-31
    
    host_or_line - which interface is being set:
                   MZD_HOST_SIDE
                   MZD_LINE_SIDE 
                   
    laneOffset - For R4/R8 coupled modes, need to pass lane 0
                 For R2 coupled modes, need to pass lanes 0, 2
                 For single lane modes, 0-3 to select lane        
                 
    interface_lane - interface lane number, 0-15 (400G),
                              0-7 (200G), 0-19(100G), 0-3(40G/50G)

 Outputs:
    pcs_lane - PCS lane received in service interface lane #
               "interface_lane"

 Returns:
    MZD_OK if read PCS lane mapping is successful, MZD_FAIL if not

 Description:
    Reads the PCS Receive lane mapping, i.e. the received lane id on 
    that lane passed into "interface_lane".

 Side effects:
    None.

 Notes/Warnings:
    This is not applicable to 25G modes. Will return an error if called
    with this mode.

 *******************************************************************************/
MZD_FUNC MZD_STATUS mzdGetRxPCSLaneMapping
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 lane_offset,
    IN MZD_U16 interface_lane,
    OUT MZD_U16 *pcs_lane
);


/*******************************************************************************
MZD_FUNC MZD_STATUS mzdGetRsFecCorrectedCwCntr
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16  host_or_line,
    IN MZD_U16  laneOffset,
    OUT MZD_U32 *codeWordCounter
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    
    mdioPort - MDIO port address, 0-31
    
    host_or_line - which interface is being set:
                   MZD_HOST_SIDE
                   MZD_LINE_SIDE        
                   
    laneOffset - For R4/R8 coupled modes, need to pass lane 0
                 For R2 coupled modes, need to pass lanes 0, 2
                 For single lane modes, 0-3 to select lane                     

 Outputs:
    codeWordCounter - RS-FEC corrected codewords counter

 Returns:
    MZD_OK if read RS-FEC corrected codewords counter is successful, MZD_FAIL if not

 Description:
    Reads the RS-FEC corrected codewords counter

 Side effects:
    None.

 Notes/Warnings:
    None.

*******************************************************************************/
MZD_FUNC MZD_STATUS mzdGetRsFecCorrectedCwCntr
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16  mdioPort,
    IN MZD_U16  host_or_line,
    IN MZD_U16  laneOffset,
    OUT MZD_U32 *codeWordCounter
);

/*******************************************************************************
MZD_FUNC MZD_STATUS mzdGetRsFecUnCorrectedCwCntr
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16  mdioPort,
    IN MZD_U16  host_or_line,
    IN MZD_U16  laneOffset,
    OUT MZD_U32 *codeWordCounter
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    
    mdioPort - MDIO port address, 0-31
    
    host_or_line - which interface is being set:
                   MZD_HOST_SIDE
                   MZD_LINE_SIDE  
                   
    laneOffset - For R4/R8 coupled modes, need to pass lane 0
                 For R2 coupled modes, need to pass lanes 0, 2
                 For single lane modes, 0-3 to select lane 

 Outputs:
    codeWordCounter - RS-FEC uncorrected codewords counter

 Returns:
    MZD_OK if read RS-FEC uncorrected codewords counter is successful, MZD_FAIL if not

 Description:
    Reads the RS-FEC uncorrected codewords counter


 Side effects:
    None.

 Notes/Warnings:
    None.

*******************************************************************************/
MZD_FUNC MZD_STATUS mzdGetRsFecUnCorrectedCwCntr
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16  mdioPort,
    IN MZD_U16  host_or_line,
    IN MZD_U16  laneOffset,
    OUT MZD_U32 *codeWordCounter
);

/*******************************************************************************
MZD_FUNC MZD_STATUS mzdGetRsFecSymbolErrorCntr
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16  mdioPort,
    IN MZD_U16  host_or_line,
    IN MZD_U16  laneOffset,  
    IN MZD_U16  fecLane,
    OUT MZD_U32 *errorCounter
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    
    mdioPort - MDIO port address, 0-31
    
    host_or_line - which interface is being set:
                   MZD_HOST_SIDE
                   MZD_LINE_SIDE       
                   
    laneOffset - For R4/R8 coupled modes, need to pass lane 0
                 For R2 coupled modes, need to pass lanes 0, 2
                 For single lane modes, 0-3 to select lane 

    fecLane - For 400G modes 0..15
              For 200G modes 0..7
              For 100G modes 0...3
              For 50G modes 0..1
              For 25G modes must be 0

 Outputs:
    errorCounter - RS-FEC Symbol error counter

 Returns:
    MZD_OK if read symbol error counter is successful, MZD_FAIL if not

 Description:
    Read RS-FEC symbol error counter per FEC lane

 Side effects:
    None.

 Notes/Warnings:

*******************************************************************************/
MZD_FUNC MZD_STATUS mzdGetRsFecSymbolErrorCntr
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16  mdioPort,
    IN MZD_U16  host_or_line,
    IN MZD_U16  laneOffset,  
    IN MZD_U16  fecLane,
    OUT MZD_U32 *errorCounter
);

/*******************************************************************************
MZD_FUNC MZD_STATUS mzdGetRxPcsBipErrorCntr
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16  mdioPort,
    IN MZD_U16  host_or_line,
    IN MZD_U16  laneOffset,
    IN MZD_U16  pcs_lane,
    OUT MZD_U16 *errorCounter
);

 Inputs:
    pDev     - pointer to MZD_DEV initialized by mzdInitDriver() call
    
    mdioPort - MDIO port address, 0-31
    
    pcs_lane - PCS lane number, 0-19(100G), 0-3(50G/40G)
    
    laneOffset - For R4/R8 coupled modes, need to pass lane 0
                 For R2 coupled modes, need to pass lanes 0, 2
                 For single lane modes, 0-3 to select lane 
    

 Outputs:
    errorCounter - PCS BIP error counter corresponding to this PCS lane

 Returns:
    MZD_OK if read BIP error counter is successful, MZD_FAIL if not

 Description:
    Read the PCS Rx BIP Error Counter for the given PCS lane.

 Side effects:
    None.

 Notes/Warnings:
    This function is not applicable to 200G/400G or 25G modes. Will return an error if
    called with either of these modes.

*******************************************************************************/
MZD_FUNC MZD_STATUS mzdGetRxPcsBipErrorCntr
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16  mdioPort,
    IN MZD_U16  host_or_line,
    IN MZD_U16  laneOffset,
    IN MZD_U16  pcs_lane,
    OUT MZD_U16 *errorCounter
);

/*******************************************************************************
 These functions are specific to the 200G RS-FEC
*******************************************************************************/

/*******************************************************************************
MZD_FUNC MZD_STATUS mzdSetRsFecSERControl
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    IN MZD_U16 degradedSEREnable,
    IN MZD_U16 bypassIndicationEnable
);

 Inputs:
    pDev       - pointer to MZD_DEV initialized by mzdInitDriver() call
    
    mdioPort   - MDIO port address, 0-31
    
    host_or_line - which interface is being set:
                   MZD_HOST_SIDE
                   MZD_LINE_SIDE        
                   
    laneOffset - For R4/R8 coupled modes, need to pass lane 0
                 For R2 coupled modes, need to pass lanes 0, 2
                 
    degradedSEREnable - 
                 MZD_ENABLE:  FEC decoder signals degraded SER 
                 MZD_DISABLE: FEC decoder does not signal degraded SER
                 
    bypassIndicationEnable - 
                 MZD_ENABLE:  FEC decoder does not indicate errors
                 MZD_DISABLE: FEC decoder indicates errors

 Outputs:
    None

 Returns:
    MZD_OK if RS-FEC configuration is successful, MZD_FAIL if not

 Description:
    This function sets the PCS FEC Degraded SER Enable and PCS FEC Bypass
    Indication Enable bits in the RS-FEC Degraded SER Control register.

 Side effects:
    None.

 Notes/Warnings:
    This function is only applicable to 200G/400G mode.

*******************************************************************************/
MZD_FUNC MZD_STATUS mzdSetRsFecSERControl
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,    
    IN MZD_U16 laneOffset,
    IN MZD_U16 degradedSEREnable,
    IN MZD_U16 bypassIndicationEnable
);

/*******************************************************************************
MZD_FUNC MZD_STATUS mzdGetRsFecSERControl
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,    
    IN MZD_U16 laneOffset,
    IN MZD_U16 *degradedSEREnable,
    IN MZD_U16 *bypassIndicationEnable
);


 Inputs:
    pDev       - pointer to MZD_DEV initialized by mzdInitDriver() call
    
    mdioPort   - MDIO port address, 0-31
    
    host_or_line - which interface is being set:
                   MZD_HOST_SIDE
                   MZD_LINE_SIDE        
                   
    laneOffset - For R4/R8 coupled modes, need to pass lane 0
                 For R2 coupled modes, need to pass lanes 0, 2

 Outputs:
    degradedSEREnable - 
                 MZD_ENABLE:  FEC decoder signals degraded SER 
                 MZD_DISABLE: FEC decoder does not signal degraded SER
                 
    bypassIndicationEnable - 
                 MZD_ENABLE:  FEC decoder does not indicate errors
                 MZD_DISABLE: FEC decoder indicates errors

 Returns:
    MZD_OK if RS-FEC read is successful, MZD_FAIL if not

 Description:
    This function reads the PCS FEC Degraded SER Enable and PCS FEC Bypass
    Indication Enable bits in the RS-FEC Degraded SER Control register.

 Side effects:
    None.

 Notes/Warnings:
    This function is only applicable to 200G/400G mode.

*******************************************************************************/
MZD_FUNC MZD_STATUS mzdGetRsFecSERControl
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,    
    IN MZD_U16 laneOffset,
    IN MZD_U16 *degradedSEREnable,
    IN MZD_U16 *bypassIndicationEnable
);


/*******************************************************************************
MZD_FUNC MZD_STATUS mzdSetRsFecSERThresholds
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,    
    IN MZD_U16 laneOffset,
    IN MZD_U32 serActivateThreshold,
    IN MZD_U32 serDeactivateThreshold,
    IN MZD_U32 serInterval
);

 Inputs:
    pDev       - pointer to MZD_DEV initialized by mzdInitDriver() call
    
    mdioPort   - MDIO port address, 0-31
    
    host_or_line - which interface is being set:
                   MZD_HOST_SIDE
                   MZD_LINE_SIDE        
                   
    laneOffset - For R4/R8 coupled modes, need to pass lane 0
                 For R2 coupled modes, need to pass lanes 0, 2
                 
    serActivateThreshold - the FEC degraded SER activate threshold
                 
    serDeactivateThreshold - the FEC degraded SER deactivate threshold

    serInterval - the FEC degraded SER interval

 Outputs:
    None

 Returns:
    MZD_OK if RS-FEC configuration is successful, MZD_FAIL if not

 Description:
    This function sets the activate, deactivate thresholds and interval
    for degraded SER.

 Side effects:
    None.

 Notes/Warnings:
    This function is only applicable to 200G/400G mode.

*******************************************************************************/
MZD_FUNC MZD_STATUS mzdSetRsFecSERThresholds
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,    
    IN MZD_U16 laneOffset,
    IN MZD_U32 serActivateThreshold,
    IN MZD_U32 serDeactivateThreshold,
    IN MZD_U32 serInterval
);

/*******************************************************************************
MZD_FUNC MZD_STATUS mzdGetRsFecSERThresholds
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,    
    IN MZD_U16 laneOffset,
    OUT MZD_U32 *serActivateThreshold,
    OUT MZD_U32 *serDeactivateThreshold,
    OUT MZD_U32 *serInterval
);


 Inputs:
    pDev       - pointer to MZD_DEV initialized by mzdInitDriver() call
    
    mdioPort   - MDIO port address, 0-31
    
    host_or_line - which interface is being set:
                   MZD_HOST_SIDE
                   MZD_LINE_SIDE        
                   
    laneOffset - For R4/R8 coupled modes, need to pass lane 0
                 For R2 coupled modes, need to pass lanes 0, 2
                 
 Outputs:
    serActivateThreshold - the FEC degraded SER activate threshold
                 
    serDeactivateThreshold - the FEC degraded SER deactivate threshold

    serInterval - the FEC degraded SER interval

 Returns:
    MZD_OK if read is successful, MZD_FAIL if not

 Description:
    This function reads the activate, deactivate thresholds and interval
    for degraded SER.

 Side effects:
    None.

 Notes/Warnings:
    This function is only applicable to 200G/400G mode.

*******************************************************************************/
MZD_FUNC MZD_STATUS mzdGetRsFecSERThresholds
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,    
    IN MZD_U16 laneOffset,
    OUT MZD_U32 *serActivateThreshold,
    OUT MZD_U32 *serDeactivateThreshold,
    OUT MZD_U32 *serInterval
);


/*******************************************************************************
MZD_FUNC MZD_STATUS mzdGetRsFecDegradedSERStatus
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,    
    IN MZD_U16 laneOffset,
    OUT MZD_U16 *localDegradedSerRcvd,
    OUT MZD_U16 *remoteDegradedSerRcvd,
    OUT MZD_U16 *serDegraded
);


 Inputs:
    pDev       - pointer to MZD_DEV initialized by mzdInitDriver() call
    
    mdioPort   - MDIO port address, 0-31
    
    host_or_line - which interface is being set:
                   MZD_HOST_SIDE
                   MZD_LINE_SIDE        
                   
    laneOffset - For R4/R8 coupled modes, need to pass lane 0
                 For R2 coupled modes, need to pass lanes 0, 2
                 
 Outputs:
    localDegradedSerRcvd - degraded SER received
        1 = local degraded SER received
        0 = no local degraded SER received
                 
    remoteDegradedSerRcvd - degraded SER received
        1 = remote degraded SER received
        0 = no remote degraded SER received

    serDegraded - PCS FEC Degraded SER status
        1 = SER is degraded
        0 = SER is not degraded       
        
 Returns:
    MZD_OK if read is successful, MZD_FAIL if not

 Description:
    This function reads the degraded SER received status bits in the 200G
    RS-FEC.

 Side effects:
    None.

 Notes/Warnings:
    This function is only applicable to 200G/400G mode.

*******************************************************************************/
MZD_FUNC MZD_STATUS mzdGetRsFecDegradedSERStatus
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,    
    IN MZD_U16 laneOffset,
    OUT MZD_U16 *localDegradedSerRcvd,
    OUT MZD_U16 *remoteDegradedSerRcvd,
    OUT MZD_U16 *serDegraded
);


/*******************************************************************************
 These functions are for KR-FEC
*******************************************************************************/

/*******************************************************************************
MZD_FUNC MZD_STATUS mzdSetKrFecControl
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    IN MZD_U16 bypassIndicationEnable
);

 Inputs:
    pDev       - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort   - MDIO port address, 0-31
    host_or_line - which interface is being set:
                   MZD_HOST_SIDE
                   MZD_LINE_SIDE        
    laneOffset - For R4 coupled modes, need to pass lane 0
                 For R2 coupled modes, need to pass lanes 0, 2
                 For single lane modes, 0-3 to select lane 
    bypassIndicationEnable - 
                 MZD_ENABLE:  Enable FEC decoder to indicate errors to the PCS layer 
                 MZD_DISABLE: Disable FEC decoder to indicate errors to the PCS layer

 Outputs:
    None

 Returns:
    MZD_OK if KR-FEC configuration is successful, MZD_FAIL if not

 Description:
    Enable or disable the KR-FEC error indication decoder to indicate errors 
    to the PCS layer.


 Side effects:
    None.

 Notes/Warnings:
    None.

*******************************************************************************/
MZD_FUNC MZD_STATUS mzdSetKrFecControl
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    IN MZD_U16 bypassIndicationEnable
);

/*******************************************************************************
MZD_FUNC MZD_STATUS mzdGetKrFecControl
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    IN MZD_U16 *bypassIndicationEnable
);

 Inputs:
    pDev       - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort   - MDIO port address, 0-31
    host_or_line - which interface is being set:
                   MZD_HOST_SIDE
                   MZD_LINE_SIDE        
    laneOffset - For R4 coupled modes, need to pass lane 0
                 For R2 coupled modes, need to pass lanes 0, 2
                 For single lane modes, 0-3 to select lane 

 Outputs:
    bypassIndicationEnable - 
                 MZD_ENABLE:  Enabled FEC decoder to indicate errors to the PCS layer 
                 MZD_DISABLE: Disabled FEC decoder to indicate errors to the PCS layer

 Returns:
    MZD_OK if KR-FEC configuration is successful, MZD_FAIL if not

 Description:
    Reads the KR-FEC configuration control register to query the status of the
    bit bypassIndicationEnable.


 Side effects:
    None.

 Notes/Warnings:
    None.

*******************************************************************************/
MZD_FUNC MZD_STATUS mzdGetKrFecControl
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    IN MZD_U16 *bypassIndicationEnable
);


/*******************************************************************************
MZD_FUNC MZD_STATUS mzdGetKrFecAbility
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16  mdioPort,
    IN MZD_U16  host_or_line,
    IN MZD_U16  laneOffset,
    OUT MZD_U16 *krFecAbility,
    OUT MZD_U16 *errIndicationAbility
);

 Inputs:
    pDev     - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    host_or_line - which interface is being set:
                   MZD_HOST_SIDE
                   MZD_LINE_SIDE        
   laneOffset - For R4 coupled modes, need to pass lane 0
                For R2 coupled modes, need to pass lanes 0, 2
                For single lane modes, 0-3 to select lane 

 Outputs:
    krFecAbility - 1 = PHY sublayer supports FEC
    errIndicationAbility - 1 = FEC sublayer is able to report FEC decoding 
                               error to the PCS sublayer 

 Returns:
    MZD_OK if KR-FEC ability is successful, MZD_FAIL if not

 Description:
    Reads and returns the value of the KR-FEC ability register. It returns 
    both the following:
    1. FEC sublayer ability to report FEC decoding error to the PCS sublayer 
       (errIndicationAbility)
    2. PHY sublayer ability to support for FEC (krFecAbility)

 Side effects:
    None.

 Notes/Warnings:
    None.

 *******************************************************************************/
MZD_FUNC MZD_STATUS mzdGetKrFecAbility
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16  mdioPort,
    IN MZD_U16  host_or_line,
    IN MZD_U16  laneOffset,
    OUT MZD_U16 *krFecAbility,
    OUT MZD_U16 *errIndicationAbility
);

/*******************************************************************************
MZD_FUNC MZD_STATUS mzdGetKrFecCorrectedBlkCntr
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16  mdioPort,
    IN MZD_U16  host_or_line,
    IN MZD_U16  laneOffset,
    OUT MZD_U32 *blockCounter
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    host_or_line - which interface is being set:
                   MZD_HOST_SIDE
                   MZD_LINE_SIDE        
    laneOffset - For R4 coupled modes, need to pass lane 0
                 For R2 coupled modes, need to pass lanes 0, 2
                 For single lane modes, 0-3 to select lane 

 Outputs:
    blockCounter - KR-FEC corrected block counter

 Returns:
    MZD_OK if read KR-FEC corrected block counter is successful, MZD_FAIL if not

 Description:
    Reads KR-FEC corrected block counter

 Side effects:
    None.

 Notes/Warnings:
    None

*******************************************************************************/
MZD_FUNC MZD_STATUS mzdGetKrFecCorrectedBlkCntr
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16  mdioPort,
    IN MZD_U16  host_or_line,
    IN MZD_U16  laneOffset,
    OUT MZD_U32 *blockCounter
);

/*******************************************************************************
MZD_FUNC MZD_STATUS mzdGetKrFecUnCorrectedBlkCntr
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16  mdioPort,
    IN MZD_U16  host_or_line,
    IN MZD_U16  laneOffset,
    OUT MZD_U32 *blockCounter
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    host_or_line - which interface is being set:
                   MZD_HOST_SIDE
                   MZD_LINE_SIDE        
    laneOffset - For R4 coupled modes, need to pass lane 0
                 For R2 coupled modes, need to pass lanes 0, 2
                 For single lane modes, 0-3 to select lane 

 Outputs:
    blockCounter - KR-FEC uncorrected block counter

 Returns:
    MZD_OK if read KR-FEC uncorrected block counter is successful, MZD_FAIL if not

 Description:
    Reads KR-FEC uncorrected block counter


 Side effects:
    None.

 Notes/Warnings:

*******************************************************************************/
MZD_FUNC MZD_STATUS mzdGetKrFecUnCorrectedBlkCntr
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16  mdioPort,
    IN MZD_U16  host_or_line,
    IN MZD_U16  laneOffset,
    OUT MZD_U32 *blockCounter
);


/*******************************************************************************
 These functions are FEC error counters
*******************************************************************************/

/*******************************************************************************
MZD_FUNC MZD_STATUS mzdFECCounterEnable
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    IN MZD_U16 enable,
    IN MZD_BOOL readToClear
);


 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    host_or_line - which interface is being set:
                   MZD_HOST_SIDE
                   MZD_LINE_SIDE
                   MZD_BOTH_SIDE
    laneOffset - For R4/R8 coupled modes, need to pass lane 0
                 For R2 coupled modes, need to pass lanes 0, 2
                 For single lane modes, 0-3 to select lane 
                 or MZD_ALL_LANES to enable all lanes
    enable - MZD_ENABLE or MZD_DISABLE
    readToClear - MZD_TRUE to have the counters cleared when they
                  are read, or MZD_FALSE the counters will not
                  clear when you read them (they are only 
                  cleared by mzdFECCounterReset())

 Outputs:
    None

 Returns:
    MZD_OK if successfully enabled, MZD_FAIL if there's an error

 Description:
    Enables the FEC error counters on a given lane.

 Side effects:
    None.

 Notes/Warnings:
    Selected mode must have either an RS-544 FEC or an RS-528 FEC.

    If the BER counters are enabled using 1.C823/1.D823, in order to 
    completely disable the FEC counters you must disable both 1.C822.3:0 AND
    1.C823.3:0, otherwise the FEC counters will be enabled.
    
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdFECCounterEnable
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    IN MZD_U16 enable,
    IN MZD_BOOL readToClear
);


/*******************************************************************************
MZD_FUNC MZD_STATUS mzdFECCounterSnapshot
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line
);


 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    host_or_line - which interface is being set:
                   MZD_HOST_SIDE
                   MZD_LINE_SIDE
                   MZD_BOTH_SIDE

 Outputs:
    None

 Returns:
    MZD_OK if successful, MZD_FAIL if there was an error

 Description:
    Captures all of the counters so they can be read later.

 Side effects:
    None.

 Notes/Warnings:
    Selected mode must have either an RS-544 FEC or an RS-528 FEC.

    This function must be called prior to reading to latch the counter 
    values to the read registers.

*******************************************************************************/
MZD_FUNC MZD_STATUS mzdFECCounterSnapshot
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line
);


/*******************************************************************************
MZD_FUNC MZD_STATUS mzdFECCounterReset
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset
);


 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    host_or_line - which interface is being set:
                   MZD_HOST_SIDE
                   MZD_LINE_SIDE
                   MZD_BOTH_SIDE
    laneOffset - For R4/R8 coupled modes, need to pass lane 0
                 For R2 coupled modes, need to pass lanes 0, 2
                 For single lane modes, 0-3 to select lane 
                 or MZD_ALL_LANES to clear all lanes

 Outputs:
    None

 Returns:
    MZD_OK if successful, MZD_FAIL if there was an error

 Description:
    Clears the counters associated with the lane passed in for laneOffset.

 Side effects:
    None.

 Notes/Warnings:
    Selected mode must have either an RS-544 FEC or an RS-528 FEC.

*******************************************************************************/
MZD_FUNC MZD_STATUS mzdFECCounterReset
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset
);



/*******************************************************************************
MZD_FUNC MZD_STATUS mzdFECReadCodewordCounters
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    OUT MZD_U64 *numCodeWords,
    OUT MZD_U32 *numUncorrectable,
    OUT MZD_U32 *numCorrected
);


 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    host_or_line - which interface is being set:
                   MZD_HOST_SIDE
                   MZD_LINE_SIDE        
    laneOffset - For R4/R8 coupled modes, need to pass lane 0
                 For R2 coupled modes, need to pass lanes 0, 2
                 For single lane modes, 0-3 to select lane 

 Outputs:
    numCodeWords - number of code words received
    numUncorrectable - number of uncorrectable code words received
    numCorrected - number of code words corrected

 Returns:
    MZD_OK if successful, MZD_FAIL if there was an error

 Description:
    Reads the counters associated with the given lane and returns them.

 Side effects:
    None.

 Notes/Warnings:
    Selected mode must have either an RS-544 FEC or an RS-528 FEC.

*******************************************************************************/
MZD_FUNC MZD_STATUS mzdFECReadCodewordCounters
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    OUT MZD_U64 *numCodeWords,
    OUT MZD_U32 *numUncorrectable,
    OUT MZD_U32 *numCorrected
);

/*******************************************************************************
MZD_FUNC MZD_STATUS mzdFECReadBurstSymbolErrorCtrs
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    OUT MZD_U32 *burst2Symbols,
    OUT MZD_U16 *burst3Symbols,
    OUT MZD_U16 *burst4Symbols,
    OUT MZD_U16 *burst5Symbols,
    OUT MZD_U16 *burst6Symbols
);


 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    host_or_line - which interface is being set:
                   MZD_HOST_SIDE
                   MZD_LINE_SIDE        
    laneOffset - For R4/R8 coupled modes, need to pass lane 0
                 For R2 coupled modes, need to pass lanes 0, 2
                 For single lane modes, 0-3 to select lane 

 Outputs:
    burst2Symbols - Number of bursts of 2 consecutive RS-FEC symbols in all
                    received RS-FEC code words 
    burst3Symbols - Number of bursts of 3 consecutive RS-FEC symbols in all
                    received RS-FEC code words
    burst4Symbols - Number of bursts of 4 consecutive RS-FEC symbols in all
                    received RS-FEC code words
    burst5Symbols - Number of bursts of 5 consecutive RS-FEC symbols in all
                    received RS-FEC code words
    burst6Symbols - Number of bursts of 6 consecutive RS-FEC symbols in all
                    received RS-FEC code words
                 
 Returns:
    MZD_OK if successful, MZD_FAIL if there was an error

 Description:
    Reads the burst symbol counters associated with the given lane and returns them.

 Side effects:
    None.

 Notes/Warnings:
    Selected mode must have either an RS-544 FEC or an RS-528 FEC.

*******************************************************************************/
MZD_FUNC MZD_STATUS mzdFECReadBurstSymbolErrorCtrs
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    OUT MZD_U32 *burst2Symbols,
    OUT MZD_U16 *burst3Symbols,
    OUT MZD_U16 *burst4Symbols,
    OUT MZD_U16 *burst5Symbols,
    OUT MZD_U16 *burst6Symbols
);

/* Defines to help in allocating memory and indexing into the symbol error counters */
/* returned by mzdFECReadSymbolErrorCounters() */

/* Array lengths */
#define MZD_NUM_SYM_ERR_CTRS0TO1  (2)  /* length of array symbolErrorCounters0to1 */
#define MZD_NUM_SYM_ERR_CTRS2TO4  (3)  /* length of array symbolErrorCounters2to4 */
#define MZD_NUM_SYM_ERR_CTRS5TO15 (11) /* length of array symbolErrorCounters5to15 */

/* Array indices */
#define MZD_NUM_CW_WITH_0_SYM_ERRS  (0) /* index into symbolErrorCounters0to1 */
#define MZD_NUM_CW_WITH_1_SYM_ERRS  (1)
#define MZD_NUM_CW_WITH_2_SYM_ERRS  (0) /* index into symbolErrorCounters2to4 */
#define MZD_NUM_CW_WITH_3_SYM_ERRS  (1)
#define MZD_NUM_CW_WITH_4_SYM_ERRS  (2)
#define MZD_NUM_CW_WITH_5_SYM_ERRS  (0) /* index into symbolErrorCounters5to15 */
#define MZD_NUM_CW_WITH_6_SYM_ERRS  (1)
#define MZD_NUM_CW_WITH_7_SYM_ERRS  (2)
#define MZD_NUM_CW_WITH_8_SYM_ERRS  (3)
#define MZD_NUM_CW_WITH_9_SYM_ERRS  (4)
#define MZD_NUM_CW_WITH_10_SYM_ERRS (5)
#define MZD_NUM_CW_WITH_11_SYM_ERRS (6)
#define MZD_NUM_CW_WITH_12_SYM_ERRS (7)
#define MZD_NUM_CW_WITH_13_SYM_ERRS (8)
#define MZD_NUM_CW_WITH_14_SYM_ERRS (9)
#define MZD_NUM_CW_WITH_15_SYM_ERRS (10)

/*******************************************************************************
MZD_FUNC MZD_STATUS mzdFECReadSymbolErrorCounters
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    OUT MZD_U64 symbolErrorCounters0to1[],
    OUT MZD_U32 symbolErrorCounters2to4[],
    OUT MZD_U16 symbolErrorCounters5to15[]
);


 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    host_or_line - which interface is being set:
                   MZD_HOST_SIDE
                   MZD_LINE_SIDE        
    laneOffset - For R4/R8 coupled modes, need to pass lane 0
                 For R2 coupled modes, need to pass lanes 0, 2
                 For single lane modes, 0-3 to select lane 

 Outputs:
    symbolErrorCounters0to1 - First element is number of code words with 0
                              symbol errors, second element is number
                              with 1 symbol error
    symbolErrorCounters2to4 - Each element maps to number of code words from
                              2 symbol errors to 4 symbol errors
    symbolErrorCounters5to15 - Each element maps to number of code words
                               from 5 symbol errors to 15 symbol errors
                 
 Returns:
    MZD_OK if successful, MZD_FAIL if there was an error

 Description:
    Reads symbol error counters for number of code words with from 0 to 15
    errors.

 Side effects:
    None.

 Notes/Warnings:
    Selected mode must have either an RS-544 FEC or an RS-528 FEC.

    For RS-544 FEC, 0...15 are valid (this FEC corrects up to 15 symbols/codeword)
    For RS-528 FEC, 0...7 are valid (this FEC corrects up to 7 symbols/codeword)

*******************************************************************************/
MZD_FUNC MZD_STATUS mzdFECReadSymbolErrorCounters
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    OUT MZD_U64 symbolErrorCounters0to1[],
    OUT MZD_U32 symbolErrorCounters2to4[],
    OUT MZD_U16 symbolErrorCounters5to15[]
);


#if C_LINKAGE
#if defined __cplusplus
}
#endif
#endif

#endif /* defined MZD_RSFEC_H */
