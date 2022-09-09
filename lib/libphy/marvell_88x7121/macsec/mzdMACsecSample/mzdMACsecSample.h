/*******************************************************************************
Copyright (c) 2014 Marvell.
If you received this File from Marvell and you have entered into a commercial
license agreement (a "Commercial License") with Marvell, the File is licensed
to you under the terms of the applicable Commercial License.
*******************************************************************************/

/********************************************************************
This mzdMACsecSample.h file contains function prototypes for mode 
selections, interrupts and real-time controls, configurations and status 
for the Marvell X7121 PHY.
********************************************************************/
#ifndef MZD_MACSEC_SAMPLE_H
#define MZD_MACSEC_SAMPLE_H
#if C_LINKAGE
#if defined __cplusplus
    extern "C" {
#endif
#endif

/******************************************************************************
 MACSec sample functions show the calls needed to initialize and enable the MACSec
 block.  These samples are modified from the demo application in the \DemoApp_EIP164 
 folder to show the MACSec initialization, passing in the port and lane offset and
 calling the ingress or egress MACSec operations.  Also show other MACSec operations 
 including adding vPort, configuring the channel, adding/remove/disable rules, etc...

 For more examples on using the MACSec features, refer to the demo application 
 in the \macsec\Examples\DemoApp_EIP164 folder.  
******************************************************************************/

/***********************************************************************************
    There are 2 MACSec blocks in a X7121 device. Each MACSec block handles 2 MDIO 
    ports. MACSec block 0 for the 1st and 2nd MDIO ports and MACSec block 1 for the
    3rd and 4th MDIO ports. 

     * Host - P0 --- P1 ----- P2 --- P3 ---- *
     *      | Host MAC0 | - | Host MAC1 |    *
     *       | MACSec0 | --- | MACSec1 |     *
     *      | Line MAC0 | - | Line MAC1 |    *
     * Line - P0 --- P1 ----- P2 --- P3 ---- *

    Each MACsec block has both EIP163 Packet Classification Engine(CfyE) and 
    EIP164 MACSec Processing Engine(SecY)

    Each EIP163 Packet Classification Engine(CfyE) and EIP164 MACSec Processing 
    Engine(SecY) has both Ingress and Egress paths. 

    MACSec block 0:
        1st port - SecY Egress  (0x0C00000, 0x0C3FFFF)
        1st port - CfyE Egress  (0x0C40000, 0x0C5FFFF)
        2nd port - SecY Ingress (0x0C80000, 0x0CBFFFF)
        2nd port - CfyE Ingress (0x0CC0000, 0x0CDFFFF)

    MACSec block 1:
        3rd port - SecY Egress  (0x0E00000, 0x0E3FFFF)
        3rd port - CfyE Egress  (0x0E40000, 0x0E5FFFF)
        4th port - SecY Ingress (0x0E80000, 0x0EBFFFF)
        4th port - CfyE Ingress (0x0EC0000, 0x0EDFFFF)

    Each MACSec block has 8 channel with the following mappings:
      MACSec block 0:
        P0 Lane 0  MACSec0(1st port) channel ID 0
        P0 Lane 1  MACSec0(1st port) channel ID 1
        P0 Lane 2  MACSec0(1st port) channel ID 2
        P0 Lane 3  MACSec0(1st port) channel ID 3
        P1 Lane 0  MACSec0(2nd port) channel ID 4
        P1 Lane 1  MACSec0(2nd port) channel ID 5
        P1 Lane 2  MACSec0(2nd port) channel ID 6
        P1 Lane 3  MACSec0(2nd port) channel ID 7

      MACSec block 1:
        P2 Lane 0  MACSec1(3rd port) channel ID 0
        P2 Lane 1  MACSec1(3rd port) channel ID 1
        P2 Lane 2  MACSec1(3rd port) channel ID 2
        P2 Lane 3  MACSec1(3rd port) channel ID 3
        P3 Lane 0  MACSec1(4th port) channel ID 4
        P3 Lane 1  MACSec1(4th port) channel ID 5
        P3 Lane 2  MACSec1(4th port) channel ID 6
        P3 Lane 3  MACSec1(4th port) channel ID 7

************************************************************************************/


/*******************************************************************************
MZD_FUNC MZD_STATUS mzdMACSecSampleDefaultMatch
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_OP_MODE opMode,
    IN MZD_BOOL packetGenTest,
    IN MZD_BOOL freeResources,
    OUT PMZD_MACSEC_RES_STURCT resMACSecStuct
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    laneOffset - lane number 0-3
    opMode - operational mode needed to set the low or high speed MAC
    packetGenTest - use internally for traffic after MACSec Ingress/Egress path setup
    freeResources - use in testing to free up resources when exiting the function. If set
                    to MZD_FALSE, the resMACSecStuct will be returned with the resource
                    handles to be freed at a later time

 Outputs:
    resMACSecStuct - returns the handles of all the resources created. This is needed 
                     to free the resources when existing MACSec. This structure is only
                     valid if the freeResources is set to MZD_FALSE.

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not

 Description:
    MACSec sample to show how created the vPort and rules using the (EIP163)CfyE 
    MACSec Configuration block. After the vPort is created, the (EIP164)SecY MACSec
    Security block is called to add the SA to the vPort. 
    
    This sample sets to MAC address default match. Default match will not check for 
    MAC address header. Refer to the "RuleParams.DataMask" setting on the MAC 
    address matching.

    This sample configures MACSec on a single lane for both ingress or egress path. 
    After successfully configures the MACSec, it calls the mzdSampleSetPCSMode() to 
    set the ports to the provided opMode on both the line and host sides. After the link is
    up, it calls the packet generator API to send packets to the egress path. To test 
    the ingress path, add an external loopback on the line side to loop back the egress 
    encrypted packet back to the ingress path. Refer to the mzdMACSecSamplePacketGenTest
    for more details on the MACSec packet generator test.

    Addition features including MTU size checking and packet drop are added to show how
    the APIs are called. 

    The MACSec build-in statistic APIs shows the various MACSec statistics on the 
    ingress and egress paths.

    The opMode is passed in to determine the speed needed to configure the mzdMacSetHighSpeed 
    or mzdMacSetLowSpeed. 

    MACSec memory clean up is required to free the allocated memory for the rules and SA.

 Side effects:
    None

 Notes/Warnings:
    The mzdMacSecDeviceInit must be called at the initial MACSec operation. The 
    mdioPort input in this API will determine which MACSec block register address
    to access. To switch to a different mdioPort on the same device, the 
    mzdSetMacSecDevInfo must be called with the appropriate mdioPort.

    MACSec APIs are designed as non-reentrant call.  Each individual operation 
    must be completed before making the call for the next operation.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdMACSecSampleDefaultMatch
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_OP_MODE opMode,
    IN MZD_BOOL packetGenTest,
    IN MZD_BOOL freeResources,
    OUT PMZD_MACSEC_RES_STURCT resMACSecStuct
);

/*******************************************************************************
MZD_FUNC MZD_STATUS mzdMACsecSampleRekey
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_OP_MODE opMode,
    IN MZD_BOOL packetGenTest - MZD_TRUE to run packet gen test 
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    laneOffset - lane number 0-3
    opMode - operational mode needed to set the low or high speed MAC
    packetGenTest - use internally for traffic after MACSec Ingress/Egress path setup

 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not

 Description:
    This MACSec sample shows the auto re-key using 2 set of SAs. The sequence number
    in the egress SA is 0xFFFFFFF0 which will re-key to the 2nd key after 16 packets.

    MACSec sample to show how created the Vport and rules using the (EIP163)CfyE 
    MACSec Configuration block. After the Vport is created, the (EIP164)SecY MACSec
    Security block is called to add the SA to the Vport. 
    
    This sample sets to MAC address default match. Default match will not check for 
    MAC address header. Refer to the "RuleParams.DataMask" setting on the MAC 
    address matching.

    This sample configures MACSec on a single lane for both ingress or egress path. 
    This sample used 2 set of SA keys for both ingress and egress with the same matching 
    AN and keys.  The sequence number in the egress SA is 0xFFFFFFF0 which will re-key 
    to the next key after 16 packets.

    After successfully configures the MACSec, it calls the mzdSampleSetPCSMode() to 
    set the ports to the provided opMode on both the line and host sides. After the link is
    up, it calls the packet generator API to send packets to the egress path. To test 
    the ingress path, add an external loopback on the line side to loop back the egress 
    encrypted packet back to the ingress path. Refer to the mzdMACSecSamplePacketGenTest
    for more details on the MACSec packet generator test.

    The MACSec build-in statistic APIs shows the various MACSec statistics on the 
    ingress and egress paths.

    The "isLowSpeed" boolean, MZD_TRUE, sets the option for low PCS speed 100G and below. Set 
    to MZD_FALSE for PCS speed at 200G and above. 

    MACSec memory clean up is required to free the allocated memory for the rules and SA.

 Side effects:
    None

 Notes/Warnings:
    The mzdMacSecDeviceInit must be called at the initial MACSec operation. The 
    mdioPort input in this API will determine which MACSec block register address
    to access. To switch to a different mdioPort on the same device, the 
    mzdSetMacSecDevInfo must be called with the appropriate mdioPort.

    MACSec APIs are designed as non-reentrant call.  Each individual operation 
    must be completed before making the call for the next operation.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdMACsecSampleRekey
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_OP_MODE opMode,
    IN MZD_BOOL packetGenTest
);


/*******************************************************************************
MZD_FUNC MZD_STATUS mzdMACSecSampleCreateRule
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_BOOL fIngress
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    laneOffset - lane number 0-3
    fIngress - MZD_TRUE for Ingress
               MZD_FALSE for Egress

 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not

 Description:
     Sample MACSec function to show the following on all 4 ports on the X7121 device:
     1) Steps to enable and initialize the deviceMACSec block.
        - mzdMacSecDeviceInit must be called on initial MACSec
          usage to initialize the port for MACSec operation;
          an index from the global mzdMacsecDevMap will be assigned to
          each X7121 device.
        - if mzdMacSecDeviceInit is already called, to use MACSec 
          on a different MDIO port, pass in the mdioPort to 
          mzdSetMacSecDevInfo to access a different port

     2) Initialize the EIP-164 device SecY functionality via the 164 driver
        SecY API.

     2) Install the EIP-164 flow for bypass/drop via the SecY API.

     3) Install the flow with the packet classification rule for the
        installed vPort via the 164 driver CfyE API. Enable the flow via the
        CfyE API.

     This sample also shows how to use MACSec on multiple ports and multiple 
     X7121 devices. Note that the mzdMacSecDeviceInit is a blocking call.
    
 Side effects:
    None

 Notes/Warnings:
    The mzdMacSecDeviceInit must be called at the initial MACSec operation. The 
    mdioPort input in this API will determine which MACSec block register address
    to access. To switch to a different mdioPort on the same device, the 
    mzdSetMacSecDevInfo must be called with the appropriate mdioPort.

    MACSec APIs are designed as non-reentrant call.  Each individual operation 
    must be completed before making the call for the next operation.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdMACSecSampleCreateRule
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_BOOL fIngress
);


/*******************************************************************************
MZD_FUNC MZD_STATUS mzdMACSecSampleSecyTransform
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_BOOL fVerbose,
    IN MZD_BOOL fIngress
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    fVerbose - MZD_TRUE to display logging messages; MZD_FALSE to disable logging
    fIngress - MZD_TRUE for Ingress
               MZD_FALSE for Egress

 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not

 Description:
    Sample MACSec function to show the followings:
     1) Steps to enable and initialize the deviceMACSec block.
        - mzdMacSecDeviceInit must be called on initial MACSec
          usage to initialize the port for MACSec operation
        - if mzdMacSecDeviceInit is already called, to use MACSec 
          on a different MDIO port, pass in the mdioPort to 
          mzdSetMacSecDevInfo to access a different port

     2) Initialize the EIP-164 device Security Entity (SecY) functionality 
        via the 164 driver SecY API.

     3) Install the Secure association (SA) flow with transform record via 
        the 164 driver SecY API.

        ... Packet flow ...

     4) Read the SA, SecY and IFC/IFC1 statistics for the initialized EIP-164
        device via the 164 driver SecY API, check the statistics counters are
        sane (some must be incremented).
     5) Uninstall the SA flow via the 164 driver SecY API.
     6) Uninitialize the EIP-164 device SecY functionality via the 164 driver
        SecY API.
    
 Side effects:
    None

 Notes/Warnings:
    The mzdMacSecDeviceInit must be called at the initial MACSec operation. The 
    mdioPort input in this API will determine which MACSec block register address
    to access. To switch to a different mdioPort on the same device, the 
    mzdSetMacSecDevInfo must be called with the appropriate mdioPort.

    MACSec APIs are designed as non-reentrant call.  Each individual operation 
    must be completed before making the call for the next operation.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdMACSecSampleSecyTransform
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_BOOL fVerbose,
    IN MZD_BOOL fIngress
);

/*******************************************************************************
MZD_FUNC MZD_BOOL mzdMACSecSampleSecyCfyeTransform
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_BOOL fVerbose,
    IN MZD_BOOL fIngress
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    laneOffset - lane number 0-3
    fVerbose - MZD_TRUE to display logging messages; MZD_FALSE to disable logging
    fIngress - MZD_TRUE for Ingress
               MZD_FALSE for Egress

 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not

 Description:
    Sample MACSec function to show the followings:
     1) Steps to enable and initialize the deviceMACSec block.
        - mzdMacSecDeviceInit must be called on initial MACSec
          usage to initialize the port for MACSec operation
        - if mzdMacSecDeviceInit is already called, to use MACSec 
          on a different MDIO port, pass in the mdioPort to 
          mzdSetMacSecDevInfo to access a different port

     1) Initialize the EIP-164 device CfyE and SecY functionality via the
        respectively the 164 driver CfyE API and SecY API.

     2) Install the SA flow with transform record via the 164 driver SecY
        API.

     3) Install the flow with the packet classification rule for the
        installed SA via the 164 driver CfyE API. Enable the flow via the
        CfyE API.

        ... Packet flow ...

     4) Read the SA, SecY and IFC/IFC1 statistics for the initialized
        EIP-164 device via the 164 driver SecY API, check the statistics
        counters are sane (some must be incremented).

     5) Disable the flow and uninstall the flow via the 164 driver CfyE API.

     6) Uninstall the SA via the 164 driver SecY API.

     7) Uninitialize the EIP-164 device SecY functionality via the 164
        driver SecY API.
    
 Side effects:
    None

 Notes/Warnings:
    The mzdMacSecDeviceInit must be called at the initial MACSec operation. The 
    mdioPort input in this API will determine which MACSec block register address
    to access. To switch to a different mdioPort on the same device, the 
    mzdSetMacSecDevInfo must be called with the appropriate mdioPort.

    MACSec APIs are designed as non-reentrant call.  Each individual operation 
    must be completed before making the call for the next operation.
*******************************************************************************/
MZD_FUNC MZD_BOOL mzdMACSecSampleSecyCfyeTransform
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_BOOL fVerbose,
    IN MZD_BOOL fIngress
);

/************************************************************************************
MZD_FUNC MZD_STATUS mzdMACsecSampleInterrupt
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_OP_MODE opMode,
    IN MZD_BOOL packetGenTest,  
    IN MZD_BOOL statisticMIBDump 
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    laneOffset - lane number 0-3
    opMode - operational mode needed to set the low or high speed MAC
    packetGenTest - use internally for traffic after MACSec Ingress/Egress path setup
    statisticMIBDump - call mzdMacMIBStatDump; only available with packetGenTest


 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not

 Description:
    This MACSec sample shows how to enable the MACSec interrupt by using the 
    mzdMACSecSampleDefaultMatch to setup the an encryption session. 

    The MACSec is with a single non-rollover SA, which means the SA will expires after 
    the packet sequences number reaches the threshold number. The SN starts at 0xFFFFFF00
    and the SA will expire after 255 packets. Once expired, it will trigger the MACSec SA 
    expires interrupt and at the same time, the chip level interrupt MACSEC0/1 will be 
    triggered. That hardware interrupt will signal the pin that the host can retrieve the
    interrupt from the list that it has tracked.

    Caller should keep a list of the interrupt enable request issue to the MACSec devices. 
    The X7121 chip interrupt only signal the MACSEC0 and/or MACSEC1 block when an interrupt
    is received from the corresponding MACSec device. With the list of the issued interrupt
    to the device, caller can check against the list and not having to loop through all the 
    MACSec devices to find which device triggered the interrupt.  

    In this sample, search for the "MACSec interrupt" where it shows how the interrupt calls
    are enabled, verified, and later read the interrupt status and clears them.

    This sample also show how to call mzdMacMIBStatDump() to retrieve all the useful statistic 
    counters in the Ethernet MAC accumulating the MAC transmit and receive statistics

    The "isLowSpeed" boolean, MZD_TRUE, sets the option for low PCS speed 100G and below. Set 
    to MZD_FALSE for PCS speed at 200G and above. 

    MACSec memory clean up is required to free the allocated memory for the rules and SA.

 Side effects:
    None

 Notes/Warnings:
    If the condition that triggers the interrupt is not removed, i.e. expired SA, 
    the interrupt bit will not be cleared until the expired SA is updated or removed. 

    The mzdMacSecDeviceInit must be called at the initial MACSec operation. The 
    mdioPort input in this API will determine which MACSec block register address
    to access. To switch to a different mdioPort on the same device, the 
    mzdSetMacSecDevInfo must be called with the appropriate mdioPort.

    MACSec APIs are designed as non-reentrant call.  Each individual operation 
    must be completed before making the call for the next operation.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdMACsecSampleInterrupt
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_OP_MODE opMode,
    IN MZD_BOOL packetGenTest,  
    IN MZD_BOOL statisticMIBDump 
);

/************************************************************************************
MZD_FUNC MZD_STATUS mzdMACSecSample256KeyBypass
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_OP_MODE opHostMode,
    IN MZD_OP_MODE opLineMode,
    IN MZD_BOOL bypassEncrypt,
    IN MZD_BOOL packetGenTest,
    IN MZD_BOOL freeResources,
    OUT PMZD_MACSEC_RES_STURCT resMACSecStuct
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    laneOffset - lane number 0-3
    opHostMode - host side operational mode needed to set the low or high speed MAC
    opLineMode - line side operational mode needed to set the low or high speed MAC
    bypassEncrypt  - example to show the bypassEncrypt calls when set to MZD_TRUE
    packetGenTest - use internally for traffic after MACSec Ingress/Egress path setup
    freeResources - use in testing to free up resources when exiting the function. If set
                    to MZD_FALSE, the resMACSecStuct will be returned with the resource
                    handles to be freed at a later time

 Outputs:
    resMACSecStuct - returns the handles of all the resources created. This is needed 
                     to free the resources when existing MACSec. This structure is only
                     valid if the freeResources is set to MZD_FALSE.

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not

 Description:
    This MACSec sample is similar to mzdMACSecSampleDefaultMatch with addition features.

    This sample show the GCM-AES-XPN-256 with a maximum key size of 256 bits and extended 
    packet number. 
    
    Note the following are added in this sample to support GCM-AES-XPN-256:
    - the 256-bit MACSec key
    - enable the SAB_MACSEC_FLAG_LONGSEQ for the extended packet number(XPN)
    - providing the 32-bit Short Secure Channel Identifier (SSCI)
    - providing the 12-byte SALT in the transform data

    With the separated opHostMode and opLineMode input, this sample allows configuring
    Gearbox mode where host mode lane count can be different from the line mode. For example 
    host can configure as 2-lane MZD_P100UP2 mode and the line can be 4-lane MZD_P100LN mode.

    MACSec sample to show how created the vPort and rules using the (EIP163)CfyE 
    MACSec Configuration block. After the vPort is created, the (EIP164)SecY MACSec
    Security block is called to add the SA to the vPort. 
    
    This sample sets to MAC address default match. Default match will not check for 
    MAC address header. Refer to the "RuleParams.DataMask" setting on the MAC 
    address matching.

    This sample configures MACSec on a single lane for both ingress or egress path. 
    After successfully configures the MACSec, it calls the mzdSampleSetPCSMode() to 
    set the ports to the provided opMode on both the line and host sides. After the 
    link is up, it calls the packet generator API to send packets to the egress path. 
    To test the ingress path, add an external loopback on the line side to loop back 
    the egress encrypted packet back to the ingress path. Refer to the 
    mzdMACSecSamplePacketGenTest for more details on the MACSec packet generator test.

    The bypassEncrypt option shows the calls require to bypass MACSec. Setting the 
    bypassEncrypt to MZD_TRUE will configure the selected channel to bypass MACSec.
    Note that the sample code allows the continuation of creating the rules and SA after 
    enabling the bypassEncrypt is just to show the traffic is not encrypted.
    The rules and SA creation are unnecessary if the channel is set to MACSec bypass.

    The opMode is passed in to determine the speed needed to configure the mzdMacSetHighSpeed 
    or mzdMacSetLowSpeed. 

    MACSec memory clean up is required to free the allocated memory for the rules and SA.

 Side effects:
    None

 Notes/Warnings:
    The mzdMacSecDeviceInit must be called at the initial MACSec operation. The 
    mdioPort input in this API will determine which MACSec block register address
    to access. To switch to a different mdioPort on the same device, the 
    mzdSetMacSecDevInfo must be called with the appropriate mdioPort.

    MACSec APIs are designed as non-reentrant call.  Each individual operation 
    must be completed before making the call for the next operation.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdMACSecSample256KeyBypass
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_OP_MODE opHostMode,
    IN MZD_OP_MODE opLineMode,
    IN MZD_BOOL bypassEncrypt,
    IN MZD_BOOL packetGenTest,
    IN MZD_BOOL freeResources,
    OUT PMZD_MACSEC_RES_STURCT resMACSecStuct
);

/************************************************************************************
MZD_FUNC MZD_STATUS mzdMACsecSampleClearVlan
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_OP_MODE opMode,
    IN MZD_BOOL packetGenTest,
    IN MZD_BOOL freeResources,
    OUT PMZD_MACSEC_RES_STURCT resMACSecStuct
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    laneOffset - lane number 0-3
    opMode - operational mode needed to set the low or high speed MAC
    packetGenTest - use internally for traffic after MACSec Ingress/Egress path setup
    freeResources - use in testing to free up resources when exiting the function. If set
                    to MZD_FALSE, the resMACSecStuct will be returned with the resource
                    handles to be freed at a later time

 Outputs:
    resMACSecStuct - returns the handles of all the resources created. This is needed 
                     to free the resources when existing MACSec. This structure is only
                     valid if the freeResources is set to MZD_FALSE.

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not

 Description:
    This MACSec sample is similar to mzdMACSecSampleDefaultMatch with addition features.

    This sample shows how the MACSec VLAN support is configured and leaving the VLAN tag 
    in the clear. 
    
    The SecTagOffset is set to 12 bytes for DA and SA addresses plus the number of 4 bytes
    VLAN tag.
        vPortParams.SecTagOffset = 12 + (4 * numOfVLANTag);

    The QinQ VLAN tags info can be found in the pre-defined packets in SrcPacket_QinQ_MACsec_Egress 
    and SrcPacket_QinQ_MACsec_Ingress. The SrcPacket_QinQ_MACsec_Egress has 2 VLAN QinQ tags
    0x8100 and 0x9200. The SrcPacket_QinQ_MACsec_Ingress is a MACSec encrypted packet with a
    VLAN tag 0x8100 follow with the encrypted 0x88E5 MACSec packet.

    The VLAN tags info are added in SA rules in the RuleParams.Data[2] and RuleParams.Data[3].

    MACSec sample to show how created the vPort and rules using the (EIP163)CfyE 
    MACSec Configuration block. After the vPort is created, the (EIP164)SecY MACSec
    Security block is called to add the SA to the vPort. 
    
    This sample sets to MAC address default match. Default match will not check for 
    MAC address header. Refer to the "RuleParams.DataMask" setting on the MAC 
    address matching.

    The opMode is passed in to determine the speed needed to configure the mzdMacSetHighSpeed 
    or mzdMacSetLowSpeed. 

    MACSec memory clean up is required to free the allocated memory for the rules and SA.

 Side effects:
    None

 Notes/Warnings:
    The mzdMacSecDeviceInit must be called at the initial MACSec operation. The 
    mdioPort input in this API will determine which MACSec block register address
    to access. To switch to a different mdioPort on the same device, the 
    mzdSetMacSecDevInfo must be called with the appropriate mdioPort.

    MACSec APIs are designed as non-reentrant call.  Each individual operation 
    must be completed before making the call for the next operation.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdMACsecSampleClearVlan
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_OP_MODE opMode,
    IN MZD_BOOL packetGenTest,
    IN MZD_BOOL freeResources,
    OUT PMZD_MACSEC_RES_STURCT resMACSecStuct
);

/************************************************************************************
MZD_FUNC MZD_STATUS mzdMACSecSampleDAMatchShouldSecure
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_OP_MODE opHostMode,
    IN MZD_OP_MODE opLineMode,
    IN MZD_BOOL bypassEncrypt,
    IN MZD_BOOL packetGenTest,
    IN MZD_BOOL freeResources,
    OUT PMZD_MACSEC_RES_STURCT resMACSecStuct
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    laneOffset - lane number 0-3
    opHostMode - host side operational mode needed to set the low or high speed MAC
    opLineMode - line side operational mode needed to set the low or high speed MAC
    bypassEncrypt  - example to show the bypassEncrypt calls when set to MZD_TRUE
    packetGenTest - use internally for traffic after MACSec Ingress/Egress path setup
    freeResources - use in testing to free up resources when exiting the function. If set
                    to MZD_FALSE, the resMACSecStuct will be returned with the resource
                    handles to be freed at a later time

 Outputs:
    resMACSecStuct - returns the handles of all the resources created. This is needed 
                     to free the resources when existing MACSec. This structure is only
                     valid if the freeResources is set to MZD_FALSE.

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not

 Description:
    This MACSec sample is based on the mzdMACSecSampleDefaultMatch with addition features.

    This sample show the MACSec should-secure configuration that allows unencrypted packets 
    from the physical interface or sub-interfaces to be transmitted or received.
  
    For should-secure configuration, create a dummy bypass SA on the vPort if no MACSec is  
    active yet. This will allow unencrypted packet on the ingress and egress paths.

    Do a search for the keyword should-secure in this file to find all the additional code
    needed for this feature.

    A simple test can be done with sending matching and non-matching DA through this setup.
    The matching DA traffic will be encrypted. The non-matching DA will be in clear.

    The bypassEncrypt option shows the calls require to bypass MACSec. Setting the 
    bypassEncrypt to MZD_TRUE will configure the selected channel to bypass MACSec.
    Note that the sample code allows the continuation of creating the rules and SA after 
    enabling the bypassEncrypt is just to show the traffic is not encrypted.
    The rules and SA creation are unnecessary if the channel is set to MACSec bypass.

    The opMode is passed in to determine the speed needed to configure the mzdMacSetHighSpeed 
    or mzdMacSetLowSpeed. 

    MACSec memory clean up is required to free the allocated memory for the rules and SA.

 Side effects:
    None

 Notes/Warnings:
    The mzdMacSecDeviceInit must be called at the initial MACSec operation. The 
    mdioPort input in this API will determine which MACSec block register address
    to access. To switch to a different mdioPort on the same device, the 
    mzdSetMacSecDevInfo must be called with the appropriate mdioPort.

    MACSec APIs are designed as non-reentrant call.  Each individual operation 
    must be completed before making the call for the next operation.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdMACSecSampleDAMatchShouldSecure
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_OP_MODE opHostMode,
    IN MZD_OP_MODE opLineMode,
    IN MZD_BOOL bypassEncrypt,
    IN MZD_BOOL packetGenTest,
    IN MZD_BOOL freeResources,
    OUT PMZD_MACSEC_RES_STURCT resMACSecStuct
);

/************************************************************************************
MZD_FUNC MZD_STATUS mzdMACSecSampleDAMatchMustSecure
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_OP_MODE opHostMode,
    IN MZD_OP_MODE opLineMode,
    IN MZD_BOOL bypassEncrypt,
    IN MZD_BOOL packetGenTest,
    IN MZD_BOOL freeResources,
    OUT PMZD_MACSEC_RES_STURCT resMACSecStuct
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    laneOffset - lane number 0-3
    opHostMode - host side operational mode needed to set the low or high speed MAC
    opLineMode - line side operational mode needed to set the low or high speed MAC
    bypassEncrypt  - example to show the bypassEncrypt calls when set to MZD_TRUE
    packetGenTest - use internally for traffic after MACSec Ingress/Egress path setup
    freeResources - use in testing to free up resources when exiting the function. If set
                    to MZD_FALSE, the resMACSecStuct will be returned with the resource
                    handles to be freed at a later time

 Outputs:
    resMACSecStuct - returns the handles of all the resources created. This is needed 
                     to free the resources when existing MACSec. This structure is only
                     valid if the freeResources is set to MZD_FALSE.

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not

 Description:
    This MACSec sample is based on the mzdMACSecSampleDefaultMatch with addition features.

    This sample show the MACSec must-secure configuration does not allow unencrypted 
    cleared packets from physical interface or sub interfaces to be transmitted or 
    received. All such packets are dropped except for MKA control protocol packets
  
    Do a search for the keyword must-secure in this file to find all the additional code
    needed for this feature.

    A simple test can be done with sending matching and non-matching DA through this setup.
    The matching DA traffic will be encrypted. The non-matching DA packets will not be
    transmitted or received.

    The bypassEncrypt option shows the calls require to bypass MACSec. Setting the 
    bypassEncrypt to MZD_TRUE will configure the selected channel to bypass MACSec.
    Note that the sample code allows the continuation of creating the rules and SA after 
    enabling the bypassEncrypt is just to show the traffic is not encrypted.
    The rules and SA creation are unnecessary if the channel is set to MACSec bypass.

    The opMode is passed in to determine the speed needed to configure the mzdMacSetHighSpeed 
    or mzdMacSetLowSpeed. 

    MACSec memory clean up is required to free the allocated memory for the rules and SA.

 Side effects:
    None

 Notes/Warnings:
    The mzdMacSecDeviceInit must be called at the initial MACSec operation. The 
    mdioPort input in this API will determine which MACSec block register address
    to access. To switch to a different mdioPort on the same device, the 
    mzdSetMacSecDevInfo must be called with the appropriate mdioPort.

    MACSec APIs are designed as non-reentrant call.  Each individual operation 
    must be completed before making the call for the next operation.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdMACSecSampleDAMatchMustSecure
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_OP_MODE opHostMode,
    IN MZD_OP_MODE opLineMode,
    IN MZD_BOOL bypassEncrypt,
    IN MZD_BOOL packetGenTest,
    IN MZD_BOOL freeResources,
    OUT PMZD_MACSEC_RES_STURCT resMACSecStuct
);

/************************************************************************************
MZD_FUNC MZD_STATUS mzdMACSecSampleDefaultMatchPTP
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_OP_MODE opMode,
    IN MZD_BOOL packetGenTest,
    IN MZD_BOOL freeResources,
    IN MZD_BOOL enablePTP,
    OUT PMZD_MACSEC_RES_STURCT resMACSecStuct
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    laneOffset - lane number 0-3
    opHostMode - host side operational mode needed to set the low or high speed MAC
    opLineMode - line side operational mode needed to set the low or high speed MAC
    bypassEncrypt  - example to show the bypassEncrypt calls when set to MZD_TRUE
    packetGenTest - use internally for traffic after MACSec Ingress/Egress path setup
    freeResources - use in testing to free up resources when exiting the function. If set
                    to MZD_FALSE, the resMACSecStuct will be returned with the resource
                    handles to be freed at a later time
    enablePTP - sample option to show enabling PTP with MACSec encrypted data

 Outputs:
    resMACSecStuct - returns the handles of all the resources created. This is needed 
                     to free the resources when existing MACSec. This structure is only
                     valid if the freeResources is set to MZD_FALSE.

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not

 Description:
    This MACSec PTP sample is based on the mzdMACSecSampleDefaultMatch with addition 
    PTP features.

    The enablePTP option shows how to setup the PTP initialization together with the MACSec
    feature. With the enablePTP set to MZD_TRUE, it configures the PTP feature and capture 
    the PTP TOD information from the packet generator traffic. Do a search on the enablePTP
    keyword in this sample to see how the PTP calls are made.

    Below show how to initialize the PTP with MACSec mzdMacSecMacInit() options.

        The MZD_INIT_MACSEC_ENABLE | MZD_INIT_PTP options will enable the
        MACSec block and setup the path for PTP operations
        MZD_ATTEMPT(mzdMacSecMacInit(pDev, mdioPort, MZD_BOTH_SIDE, laneOffset, opMode, 
                                     MZD_INIT_MACSEC_ENABLE | MZD_INIT_PTP));

    The opMode is passed in to determine the speed needed to configure the mzdMacSetHighSpeed 
    or mzdMacSetLowSpeed. 

    MACSec memory clean up is required to free the allocated memory for the rules and SA.

 Side effects:
    None

 Notes/Warnings:
    The mzdMacSecDeviceInit must be called at the initial MACSec operation. The 
    mdioPort input in this API will determine which MACSec block register address
    to access. To switch to a different mdioPort on the same device, the 
    mzdSetMacSecDevInfo must be called with the appropriate mdioPort.

    MACSec APIs are designed as non-reentrant call.  Each individual operation 
    must be completed before making the call for the next operation.
************************************************************************************/
MZD_FUNC MZD_STATUS mzdMACSecSampleDefaultMatchPTP
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_OP_MODE opMode,
    IN MZD_BOOL packetGenTest, /* MZD_TRUE to run packet gen test */
    IN MZD_BOOL freeResources,
    IN MZD_BOOL enablePTP,
    OUT PMZD_MACSEC_RES_STURCT resMACSecStuct
);

/*******************************************************************************
MZD_STATUS mzdMACsecSampleImplicitSCI
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_OP_MODE opMode,
    IN MZD_BOOL packetGenTest,
    IN MZD_BOOL freeResources,
    OUT PMZD_MACSEC_RES_STURCT resMACSecStuct
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    laneOffset - lane number 0-3
    opMode - operational mode needed to set the low or high speed MAC
    packetGenTest - use internally for traffic after MACSec Ingress/Egress path setup
    freeResources - use in testing to free up resources when exiting the function. If set
                    to MZD_FALSE, the resMACSecStuct will be returned with the resource
                    handles to be freed at a later time

 Outputs:
    resMACSecStuct - returns the handles of all the resources created. This is needed 
                     to free the resources when existing MACSec. This structure is only
                     valid if the freeResources is set to MZD_FALSE.

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not

 Description:
    This MACSec sample is similar to mzdMACSecSampleDefaultMatch with addition features.

    This sample configured using implicit SCI is based on the mzdMACSecSampleDefaultMatch
    sample.  The mzdMACsecSampleImplicitSCI sample shows the implicit SCI configuration 
    with not using the SCI. The packet expansion will reduce to 24 bytes instead of 32 bytes 
    with explicit SCI.

    Steps for configuring implicit SCI:
    1. Packet expansion size sets to 24 bytes: 
        % Packet expansion - PktExtension
        % 0: no expansion 
        % 1: reserved 
        % 2: 24 bytes 
        % 3: 32 bytes 
        % If the packet is classified as a "control" packet, this field is ignored and
        % no expansion is indicated on the output interface.  
        vPortParams.PktExtension = 2; % egress packet extension
    
    2.  % true - inserts explicit SCI in the packet
        % false - use implicit SCI (not transferred)   
        SA_Params.Params.Egress.fIncludeSCI = false;
    
    3.  SCI sets to "0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF"
        static MZD_U8 SCI1[] = {
            0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        };
    
        static const MZD_U8 SrcPacket_Basic_Transform_Ingress[] =
        {
            0xd6, 0x09, 0xb1, 0xf0,
            0x56, 0x63, 0x7a, 0x0d,
            0x46, 0xdf, 0x99, 0x8d,
            0x88, 0xe5, 0x2e, 0x00,
            0xb2, 0xc2, 0x84, 0x65,
            0xFF, 0xFF, 0xFF, 0xFF,  << set SCI 8 bytes to 0xFF
            0xFF, 0xFF, 0xFF, 0xFF,  << 
            0x70, 0x1a, 0xfa, 0x1c,
            0xc0, 0x39, 0xc0, 0xd7,
            0x65, 0x12, 0x8a, 0x66,
            0x5d, 0xab, 0x69, 0x24,
            0x38, 0x99, 0xbf, 0x73,
            0x18, 0xcc, 0xdc, 0x81,
            0xc9, 0x93, 0x1d, 0xa1,
            0x7f, 0xbe, 0x8e, 0xdd,
            0x7d, 0x17, 0xcb, 0x8b,
            0x4c, 0x26, 0xfc, 0x81,
            0xe3, 0x28, 0x4f, 0x2b,
            0x7f, 0xba, 0x71, 0x3d,
            0x4f, 0x8d, 0x55, 0xe7,
            0xd3, 0xf0, 0x6f, 0xd5,
            0xa1, 0x3c, 0x0c, 0x29,
            0xb9, 0xd5, 0xb8, 0x80
        };

    When exiting, the MACSec memory clean up is required to free the allocated memory for 
    the rules and SA.

 Side effects:
    None

 Notes/Warnings:
    The mzdMacSecDeviceInit must be called at the initial MACSec operation. The 
    mdioPort input in this API will determine which MACSec block register address
    to access. To switch to a different mdioPort on the same device, the 
    mzdSetMacSecDevInfo must be called with the appropriate mdioPort.

    MACSec APIs are designed as non-reentrant call.  Each individual operation 
    must be completed before making the call for the next operation.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdMACsecSampleImplicitSCI
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_OP_MODE opMode,
    IN MZD_BOOL packetGenTest, /* MZD_TRUE to run packet gen test */
    IN MZD_BOOL freeResources,
    OUT PMZD_MACSEC_RES_STURCT resMACSecStuct
);


/************************************************************************************
MZD_FUNC MZD_STATUS mzdMACsecSampleFreeResources
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_BOOL freeDev,
    IN PMZD_MACSEC_RES_STURCT inMACSecStruct
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    laneOffset - lane number 0-3
    freeDev - option set for the last set of MACSec resources to clear up and release the 
              device resources.
    inMACSecStruct - handles of all the MACSec resources to be released 

 Outputs:
    None

 Returns:
    MZD_OK or MZD_FAIL, if action was successful or not

 Description:
  This sample show the calls to free the ingress and egress MACSec resources after deleting 
  the MACSec configuration. This call must be made on each pair of ingress and egress MACSec
  handles.

  The freeDev option is set on the last set of MACSec resources to clear up and release the 
  device resources.

 Notes/Warnings:
    MACSec APIs are designed as non-reentrant call.  Each individual operation 
    must be completed before making the call for the next operation.
************************************************************************************/
MZD_FUNC MZD_STATUS mzdMACsecSampleFreeResources
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset,
    IN MZD_BOOL freeDev,
    IN PMZD_MACSEC_RES_STURCT inMACSecStruct
);

/******************************************************************************
MZD_STATUS mzdMACSecSamplePacketGenTest - used internally for MACSec testing with 
    packet generator
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdMACSecSamplePacketGenTest
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 laneOffset
);


#if C_LINKAGE
#if defined __cplusplus
}
#endif
#endif

#endif /* defined MZD_MACSEC_SAMPLE_H */
