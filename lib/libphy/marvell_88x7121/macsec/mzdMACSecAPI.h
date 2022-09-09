/*******************************************************************************
Copyright (c) 2014 Marvell.
If you received this File from Marvell and you have entered into a commercial
license agreement (a "Commercial License") with Marvell, the File is licensed
to you under the terms of the applicable Commercial License.
*******************************************************************************/

/********************************************************************
This file contains function prototypes for controlling MACSec block
and initializing MACSec DDK APIs to use various MACSec features and
diagnostic operations for the Marvell X7121 Device.
********************************************************************/
#ifndef MZD_MACSEC_API_H
#define MZD_MACSEC_API_H
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

/* Data structure to hold the ingress and egress MACSec resources for diagnostics, 
   release and free MACSec resources, etc... */
typedef struct _MZD_MACSEC_RES_STURCT
{
    MZD_U16   mdioPort;
    MZD_U16   channelID;
    MZD_U8    ingressDevId;
    MZD_U8    egressDevId;
    MZD_PVOID CfyE_IngressRuleHandle;
    MZD_PVOID CfyE_IngressVPortHandle;
    MZD_PVOID SecY_IngressSAHandle;
    MZD_PVOID CfyE_EgressRuleHandle;
    MZD_PVOID CfyE_EgressVPortHandle;
    MZD_PVOID SecY_EgressSAHandle;
} MZD_MACSEC_RES_STURCT, *PMZD_MACSEC_RES_STURCT;

/*******************************************************************************
MZD_FUNC MZD_STATUS mzdMacSecSupportedMacSecDeviceCount
(
    IN MZD_DEV_PTR pDev,
    OUT MZD_U16 *supportedMacSecDeviceCount
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call

 Outputs:
    supportedMacSecDeviceCount - returns the maximum X7121 device supported for MACSec 

 Returns:
    MZD_OK 

 Description:
    This API returns the pre-compiled MZD_MACSEC_MAX_DEVICE maximum X7121 device 
    supported for MACSec operations. The MZD_MACSEC_MAX_DEVICE is defined at compilation
    to minimize the API memory if needed.

 Side effects:
    None

 Notes/Warnings:
    None

*******************************************************************************/
MZD_FUNC MZD_STATUS mzdMacSecSupportedMacSecDeviceCount
(
    IN MZD_DEV_PTR pDev,
    OUT MZD_U16 *supportedMacSecDeviceCount
);

/*******************************************************************************
MZD_FUNC MZD_STATUS mzdMacSecAssignDeviceID
(
    IN MZD_DEV_PTR pDev
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call

 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not

 Description:
    This API assigned an index from the global variable mzdMacsecDevMap array to track
    the list of X7121 device pointers. This is need to sync-up with the MACSec DDK 
    Ingress and Egress devices, which are used to handle the MACSec information.

 Side effects:
    None

 Notes/Warnings:
    The global variable mzdMacsecDevMap must be accessed with lock to prevent
    multiple access
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdMacSecAssignDeviceID
(
    IN MZD_DEV_PTR pDev
);

/*******************************************************************************
MZD_FUNC MZD_STATUS mzdMacSecGetAssignedDeviceID
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    OUT MZD_U8 *macsecIngressDevId,
    OUT MZD_U8 *macsecEgressDevId
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31

 Outputs:
    macsecIngressDevId - the MACSec ingress device Id of the 1st MDIO port
    macsecEgressDevId - the MACSec egress device Id of the 1st MDIO port

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not

 Description:
    This API returns the MACsec Ingress and Egress device IDs based on the index from 
    the global variable mzdMacsecDevMap array.  This is need to sync-up with the MACSec DDK 
    ingress and egress devices, which are used to handle the MACSec information.

 Side effects:
    None

 Notes/Warnings:
    The global variable mzdMacsecDevMap must be accessed with lock to prevent
    multiple access
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdMacSecGetAssignedDeviceID
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    OUT MZD_U8 *macsecIngressDevId,
    OUT MZD_U8 *macsecEgressDevId
);

/*******************************************************************************
MZD_FUNC MZD_STATUS mzdMacSecUnAssignDeviceID
(
    IN MZD_DEV_PTR pDev
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call

 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not

 Description:
    This API free up the MACSec device ID when the device is unloaded.

 Side effects:
    None

 Notes/Warnings:
    The global variable mzdMacsecDevMap must be accessed with lock to prevent
    multiple access
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdMacSecUnAssignDeviceID
(
    IN MZD_DEV_PTR pDev
);

/*******************************************************************************
MZD_FUNC MZD_STATUS mzdMacSecDeviceInit
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    laneOffset - lane number to power up 0-3 

 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not

 Description:
    This API is required to be called on the initial use of a MACSec port. This 
    call will setup the MACSec register access in the device structure and
    initialize the MACSec DDK device driver. This API also called the 
    mzdMacSecAssignDeviceID to assign an index from the global variable 
    mzdMacsecDevMap array to track the list of X7121 device pointers.  

    This API should be called only once for each X7121 device

 Side effects:
    None

 Notes/Warnings:
    This API must be called on initial MACSec usage to initialize the port for 
    MACSec operation. 

    Calling this function requires blocking all other caller from accessing the 
    global variable mzdMacsecDevMap.

    Refer to the MACSec sample code in the mzdMACSecSample.c on using this API.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdMacSecDeviceInit
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset
);

/*******************************************************************************
MZD_STATUS mzdMacSecDeviceUnInit
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    laneOffset - lane number to power up 0-3 

 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not

 Description:
    This API uninitialized and cleaned-up the MACSec resources.
    This API should be called only once for each X7121 device

 Side effects:
    None

 Notes/Warnings:
*******************************************************************************/
MZD_STATUS mzdMacSecDeviceUnInit
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset
);

/*******************************************************************************
MZD_FUNC MZD_STATUS mzdMacSecDropAction
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_BOOL fIngress,
    IN MZD_BOOL dropAction
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    fIngress - select drop packet for ingress or egress.
               MZD_TRUE for Ingress; MZD_FALSE for Egress 
    dropAction - MZD_TRUE to drop packet else MZD_FALSE

 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not

 Description:
    Configures the MACSec ingress or egress to drop packet if packet doesn't
    match the MACSec rules. The drop packet must be set together with the SA
    parameter SA_Params.DropType = SECY_SA_DROP_INTERNAL.  
    With this combination, exception packet(packet not within the SA rules) 
    will be dropped internally.

    Refer to the mzdMACSecSample256KeyBypass() sample for using this 
    mzdMacSecDropAction() API.

 Side effects:
    None

 Notes/Warnings:
    None.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdMacSecDropAction
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_BOOL fIngress,
    IN MZD_BOOL dropAction
);

/*******************************************************************************
MZD_FUNC MZD_STATUS mzdMacSecEIP218RateMod
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_OP_MODE opMode
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    laneOffset - lane number 0-3
    opMode - operational mode needed to set the reduced clock rate

 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not

 Description:
    This API reduces the rate mode in the EIP 281 block based on the reduced clock rate on the
    assigned speed. This is called from the mzdMacSecMacInit() where the mzdMacSecLowClkRate()
    will configure the reduced clock rate and the mzdMacSecEIP218RateMod() will set the lane 
    channel to the match rate based on the speed.

    To use the higher clock rate, the MZD_INIT_MACSEC_HIGH_CLK option should be used when 
    calling the MACSec initialization mzdMacSecMacInit().

 Side effects:
    None

 Notes/Warnings:
    This call API must be called again if the speed mode is changed after the initial 
    MACSec initialization mzdMacSecMacInit(). For example, if the initial mzdMacSecMacInit()
    is initially called to set for 10G modes, and later changes to other speeds, the
    mzdMacSecEIP218RateMod() must be called with the new mode. 
    
    NOTE: This will not apply if the MZD_INIT_MACSEC_HIGH_CLK is set.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdMacSecEIP218RateMod
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_OP_MODE opMode
);

/*******************************************************************************
 MZD_STATUS mzdMacSecLowClkRate - Internal use only
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdMacSecLowClkRate
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort
);

/*******************************************************************************
 MZD_STATUS mzdMacSecLowClkRateSemaphore - Internal use only
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdMacSecLowClkRateSemaphore
(
    IN MZD_DEV_PTR pDev,
    IN MZD_BOOL enable
);


#if C_LINKAGE
#if defined __cplusplus
}
#endif
#endif

#endif /* defined MZD_MACSEC_API_H */
