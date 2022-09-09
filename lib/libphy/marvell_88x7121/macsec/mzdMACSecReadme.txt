Copyright (c) 2014 Marvell.

Confidential. All rights reserved. 

This publication and its contents are proprietary to Marvell. No part of this publication may be reproduced in any form or by any means without the written permission of Marvell Semiconductor Inc.

Marvell 88X7121 PHY API MACSec instructions and build procedure


General note on using the MACSec DDK
------------------------------------
1.  The compiler flag MZD_MACSEC_SUPPORT must be set to 1 in the mzdApiTypes.h for MACSec support.  The default is 0(disabled).  Change the definition to 1 as follows:
#define MZD_MACSEC_SUPPORT 1

2.  MZD_MACSEC_MAX_DEVICE in mzdMacSecDef.h defines the maximum supported 88X7121 MACSec devices.  The API is released with the MZD_MACSEC_MAX_DEVICE defined as 24.  The pre-defined maximum MACSec device supported are 4, 8 and 24 88X7121 devices. Each 88X7121 4-port device is 1 MACSec device. Update the MZD_MACSEC_MAX_DEVICE as needed to reduce the memory usage. 

3.  The \macsec folder is the MACSec add-on component.  These files are only needed for adding the MACSec feature to the 88X7121 API.  

4.  The MACSec files are coded based on the Linux environment.  The \OSPlatformSpecific folder is not needed if compiled in a Linux or similar platform.  

5.  All the files can be compiled in any standard C non-Linux environment.  For a compiler that does not have the pthread.h and unistd.h, include the \OSPlatformSpecific path and files in the build file.  The "usleep" function in the unistd.h file needs to be ported to the specific platform.  

6.  Note that these operations are not supported in the MACSec DDK for the X7121 API.
-  Warmboot
-  Interrupts
-  Locks
-  Threads

7.  The MACSec EIP-163 and EIP-164 HW interfaces are not considered performance critical.  Therefore, calling these MACSec APIs are designed as non-reentrant call.  Each individual operation must be completed before making the call for the next operation.

8.  Refer to the MACSec sample in \macsec\mzdMACsecSample and the demo application in the \macsec\Examples\DemoApp_EIP164.  
The MACSec sample shows the calls to enable the 88X7121 MACSec blocks and the demo app shows how to initialize the MACSec operations in the EIP-163 and EIP-164 HW.  

9.  The mzdMacSecDeviceInit must be called at the initial MACSec operation.  This API called the mzdMacSecAssignDeviceID to assign an index from the global variable mzdMacsecDevMap array.  The mdioPort input in this API will determine which MACSec block register address to access. To switch to a different mdioPort on the same device, the mzdSetMacSecDevInfo must be called with the appropriate mdioPort.

10.  Note that the demo functions are written to show a single (ingress or egress) direction.  The MACSec API is designed to support both ingress and egress in the same library.  The MACSec samples in \macsec\mzdMACsecSample show how to call the MACSec operation in both the ingress and egress paths.

11.  MACSec must be configured before mode selection.  If the mode is set before MACSec configuration, the mode selection must be called again after MACSec configuration.

MACSec DDK APIs
-----------------------------
The lists below are the commonly used MACSec DDK APIs.  Users are recommended to call these external MACSec APIs for all MACSec related operations.  For more detail description on these MACSec DDK APIs, refer to the MACSec DDK API prototype function definition description on its parameters and usages.

api_cfye.h: These APIs can be used to create and configure packet classification rules for the hardware Classification device, e.g. the functionality not covered by the IEEE 802.1AE MACsec standard.
    CfyE_Notify_Request()
    CfyE_Device_Init()
    CfyE_Device_Uninit()
    CfyE_Device_Limits_Get()
    CfyE_Device_Limits()
    CfyE_Device_Update()
    CfyE_Device_Config_Get()
    CfyE_Device_Status_Get()
    CfyE_Device_InsertSOP()
    CfyE_Device_InsertEOP()
    CfyE_Channel_Bypass_Get()
    CfyE_Channel_Bypass_Set()
    CfyE_Statistics_TCAM_Get()
    CfyE_Statistics_Summary_TCAM_Read()
    CfyE_Statistics_Channel_Get()
    CfyE_Statistics_Summary_Channel_Read()
    CfyE_vPortHandle_IsSame()
    CfyE_vPort_Add()
    CfyE_vPort_Remove()
    CfyE_vPort_Update()
    CfyE_RuleHandle_IsSame()
    CfyE_Rule_Add()
    CfyE_Rule_Add_Index()
    CfyE_Rule_Remove()
    CfyE_Rule_Update()
    CfyE_Rule_Enable()
    CfyE_Rule_Disable()
    CfyE_Rule_EnableDisable()
    CfyE_RuleIndex_Get()
    CfyE_vPortIndex_Get()
    CfyE_RuleHandle_Get()
    CfyE_vPortHandle_Get()

api_cfye_ext.h: These APIs can be used to read the installed vPorts and Rules.
    CfyE_Device_Role_Get()
    CfyE_vPort_Read()
    CfyE_vPort_Next_Get()
    CfyE_Rule_Read()
    CfyE_Rule_Next_Get()
    CfyE_Rule_vPort_Next_Get()
    CfyE_Diag_Device_Dump()
    CfyE_Diag_Channel_Dump()
    CfyE_Diag_vPort_Dump()
    CfyE_Diag_Rule_Dump()

api_driver164_init.h: These APIs specify the driver entry and exit points.
    Driver164_Init()void)
    Driver164_Exit()void)
    Driver164_Device_Add()
    Driver164_Device_Remove()
    Driver164_Device_GetCount()void)
    Driver164_DataPath_Add()
    Driver164_DataPath_Remove()
    Driver164_DataPath_GetCount()void)

api_secy.h: These APIs cover the SecY functionality specified in the IEEE 802.1AE MACsec standard and supported by the MACsec hardware acceleration device.
    SecY_Notify_Request()
    SecY_Device_Init()
    SecY_Device_Uninit()
    SecY_Device_Limits()
    SecY_Device_Update()
    SecY_Device_Config_Get()
    SecY_Device_Status_Get()
    SecY_Device_InsertSOP()
    SecY_Device_InsertEOP()
    SecY_Device_CountSummary_PSecY_CheckAndClear()
    SecY_Device_CountSummary_SecY_CheckAndClear()
    SecY_Device_CountSummary_PIfc_CheckAndClear()
    SecY_Device_CountSummary_Ifc_CheckAndClear()
    SecY_Device_CountSummary_PIfc1_CheckAndClear()
    SecY_Device_CountSummary_Ifc1_CheckAndClear()
    SecY_Device_CountSummary_PRxCAM_CheckAndClear()
    SecY_Device_CountSummary_PSA_CheckAndClear()
    SecY_Device_CountSummary_SA_CheckAndClear()
    SecY_SAHandle_IsSame()
    SecY_SAHandle_SAIndex_IsSame()
    SecY_CryptAuth_BypassLen_Update()
    SecY_CryptAuth_BypassLen_Get()
    SecY_SA_Add()
    SecY_SA_Update()
    SecY_SA_NextPN_Update()
    SecY_SA_WindowSize_Update()
    SecY_SA_Read()
    SecY_SA_Remove()
    SecY_SA_Chain()
    SecY_SA_Switch()
    SecY_SA_Active_E_Get()
    SecY_SA_Active_I_Get()
    SecY_SA_Statistics_E_Get()
    SecY_SA_Statistics_I_Get()
    SecY_SecY_Statistics_E_Get()
    SecY_SecY_Statistics_I_Get()
    SecY_Ifc_Statistics_E_Get()
    SecY_Ifc_Statistics_I_Get()
    SecY_RxCAM_Statistics_Get()
    SecY_vPort_Statistics_Clear()
    SecY_SA_PnThrSummary_CheckAndClear()
    SecY_SA_ExpiredSummary_CheckAndClear()
    SecY_Rules_MTUCheck_Update()
    SecY_Rules_MTUCheck_Get()
    SecY_Rules_SecTag_Update()
    SecY_Channel_Bypass_Get()
    SecY_Channel_Bypass_Set()
    SecY_Channel_PacketsInflight_Get()
    SecY_Channel_Config_Get()
    SecY_Channel_Config_Set()
    SecY_SAIndex_Get()
    SecY_SAHandle_Get()

api_secy_ext.h: These APIs provide functions to read the parameters of the installed SAs
    SecY_Device_Role_Get()
    SecY_vPort_Params_Read()
    SecY_SA_Params_Read()
    SecY_SA_vPortIndex_Get()
    SecY_SA_Next_Get()
    SecY_SA_Chained_Get()
    SecY_SA_WindowSize_Get()
    SecY_SA_NextPN_Get()
    SecY_SCI_Next_Get()
    SecY_Diag_Device_Dump()
    SecY_Diag_Channel_Dump()
    SecY_Diag_vPort_Dump()
    SecY_Diag_SA_Dump()

sa_builder_macsec.h: Helper functions for building the MACSec SA
    SABuilder_InitParams()
    SABuilder_GetSize()
    SABuilder_BuildSA()
    SABuilder_SeqNumOffset_Get()
    SABuilder_WindowSizeOffset_Get()
    SABuilder_MTUOffset_Get()
    SABuilder_UpdateCtrlOffset_Get()
    SABuilder_UpdateCtrl_Update()
    SABuilder_MTU_Update()
    SABuilder_MTU_Decode()


MACSec DDK files and build instructions
-----------------------------
The MACSec is an add-on component to the 88X7121 API.  

The following files are modified to support the 88X7121 device.  These changes include mapping and accessing the device MACSec registers, adding the device context to pass along the stacks and other necessary changes to support the 88X7121 device.
mzd\macsec\Examples\Driver_EIP164\build\cs_driver.h
mzd\macsec\Examples\Driver_EIP164\build\cs_systemtestconfig.h
mzd\macsec\Examples\Driver_EIP164\build\FPGA\cs_hwpal_ext.h
mzd\macsec\Integration\Adapter_EIP164\src\FPGA\adapter_init.c
mzd\macsec\Integration\DriverFramework\src\device_generic.c
mzd\macsec\Integration\DriverFramework\src\device_internal.h
mzd\macsec\Integration\DriverFramework\src\umdevxs\hwpal_device_umdevxs.c

Please refer to the makefile in the \macsec folder for the paths and files required for the MACSec add-on feature.  Below is the list of MACSec files in the \macsec folder required for 88X7121 MACSec operations.  
mzd\macsec\Examples\Driver_EIP164\build\cs_adapter.h
mzd\macsec\Examples\Driver_EIP164\build\cs_driver.h
mzd\macsec\Examples\Driver_EIP164\build\cs_eip163.h
mzd\macsec\Examples\Driver_EIP164\build\cs_eip164.h
mzd\macsec\Examples\Driver_EIP164\build\cs_eip201.h
mzd\macsec\Examples\Driver_EIP164\build\cs_eip217.h
mzd\macsec\Examples\Driver_EIP164\build\cs_eip66.h
mzd\macsec\Examples\Driver_EIP164\build\cs_hwpal.h
mzd\macsec\Examples\Driver_EIP164\build\cs_hwpal_umdevxs.h
mzd\macsec\Examples\Driver_EIP164\build\cs_intdispatch.h
mzd\macsec\Examples\Driver_EIP164\build\cs_list.h
mzd\macsec\Examples\Driver_EIP164\build\cs_sa_builder_macsec.h
mzd\macsec\Examples\Driver_EIP164\build\cs_systemtestconfig.h
mzd\macsec\Examples\Driver_EIP164\build\FPGA\cs_driver_ext.h
mzd\macsec\Examples\Driver_EIP164\build\FPGA\cs_hwpal_ext.h
mzd\macsec\Examples\Driver_EIP164\build\FPGA\cs_intdispatch_umdevxs_ext.h
mzd\macsec\Examples\Driver_EIP164\build\FPGA\cs_umdevxsproxy.h
mzd\macsec\Integration\Adapter_EIP163\incl\api_cfye.h
mzd\macsec\Integration\Adapter_EIP163\incl\api_cfye_ext.h
mzd\macsec\Integration\Adapter_EIP163\src\adapter_cfye.c
mzd\macsec\Integration\Adapter_EIP163\src\adapter_cfye_ext.c
mzd\macsec\Integration\Adapter_EIP163\src\adapter_cfye_rule.c
mzd\macsec\Integration\Adapter_EIP163\src\adapter_cfye_stats.c
mzd\macsec\Integration\Adapter_EIP163\src\adapter_cfye_support.c
mzd\macsec\Integration\Adapter_EIP163\src\adapter_cfye_support.h
mzd\macsec\Integration\Adapter_EIP163\src\adapter_cfye_vport.c
mzd\macsec\Integration\Adapter_EIP163\src\c_adapter_eip163.h
mzd\macsec\Integration\Adapter_EIP164\incl\api_debug.h
mzd\macsec\Integration\Adapter_EIP164\incl\api_driver164_init.h
mzd\macsec\Integration\Adapter_EIP164\incl\api_memxs.h
mzd\macsec\Integration\Adapter_EIP164\incl\api_secy.h
mzd\macsec\Integration\Adapter_EIP164\incl\api_secy_ext.h
mzd\macsec\Integration\Adapter_EIP164\incl\api_secy_types.h
mzd\macsec\Integration\Adapter_EIP164\src\adapter_debug.c
mzd\macsec\Integration\Adapter_EIP164\src\adapter_driver164_init.c
mzd\macsec\Integration\Adapter_EIP164\src\adapter_init.h
mzd\macsec\Integration\Adapter_EIP164\src\adapter_init_support.c
mzd\macsec\Integration\Adapter_EIP164\src\adapter_init_support.h
mzd\macsec\Integration\Adapter_EIP164\src\adapter_interrupts.h
mzd\macsec\Integration\Adapter_EIP164\src\adapter_interrupts_ext.h
mzd\macsec\Integration\Adapter_EIP164\src\adapter_lock.h
mzd\macsec\Integration\Adapter_EIP164\src\adapter_lock_internal.c
mzd\macsec\Integration\Adapter_EIP164\src\adapter_lock_internal.h
mzd\macsec\Integration\Adapter_EIP164\src\adapter_memxs.c
mzd\macsec\Integration\Adapter_EIP164\src\adapter_secy.c
mzd\macsec\Integration\Adapter_EIP164\src\adapter_secy_ext.c
mzd\macsec\Integration\Adapter_EIP164\src\adapter_secy_sa.c
mzd\macsec\Integration\Adapter_EIP164\src\adapter_secy_stats.c
mzd\macsec\Integration\Adapter_EIP164\src\adapter_secy_support.c
mzd\macsec\Integration\Adapter_EIP164\src\adapter_secy_support.h
mzd\macsec\Integration\Adapter_EIP164\src\adapter_sleep.h
mzd\macsec\Integration\Adapter_EIP164\src\c_adapter_eip164.h
mzd\macsec\Integration\Adapter_EIP164\src\c_adapter_memxs.h
mzd\macsec\Integration\Adapter_EIP164\src\FPGA\adapter_init.c
mzd\macsec\Integration\Adapter_EIP164\src\FPGA\adapter_pciconfig.h
mzd\macsec\Integration\Adapter_EIP164\src\um\adapter_alloc.h
mzd\macsec\Integration\Adapter_EIP164\src\um\adapter_driver164_init_ext.h
mzd\macsec\Integration\Adapter_EIP164\src\um\adapter_interrupts.c
mzd\macsec\Integration\Adapter_EIP164\src\um\adapter_lock.c
mzd\macsec\Integration\Adapter_EIP164\src\um\adapter_lock_ext.h
mzd\macsec\Integration\Adapter_EIP164\src\um\adapter_sleep.c
mzd\macsec\Integration\DriverFramework\src\c_device_generic.h
mzd\macsec\Integration\DriverFramework\src\device_generic.c
mzd\macsec\Integration\DriverFramework\src\device_internal.h
mzd\macsec\Integration\DriverFramework\src\UMDevXS\c_hwpal_device_umdevxs.h
mzd\macsec\Integration\DriverFramework\src\UMDevXS\device_platform.h
mzd\macsec\Integration\DriverFramework\src\UMDevXS\hwpal_device_umdevxs.c
mzd\macsec\Integration\InterruptDispatcher\incl\intdispatch.h
mzd\macsec\Integration\InterruptDispatcher\incl\intdispatch_mgmt.h
mzd\macsec\Integration\InterruptDispatcher\src\c_intdispatch.h
mzd\macsec\Integration\InterruptDispatcher\src\FPGA\intdispatch.c
mzd\macsec\Integration\WorkerThread\incl\workerthread.h
mzd\macsec\Kit\DriverFramework\Basic_Defs_API\incl\basic_defs.h
mzd\macsec\Kit\DriverFramework\CLib_Abstraction_API\incl\clib.h
mzd\macsec\Kit\DriverFramework\Device_API\incl\device_mgmt.h
mzd\macsec\Kit\DriverFramework\Device_API\incl\device_rw.h
mzd\macsec\Kit\DriverFramework\Device_API\incl\device_swap.h
mzd\macsec\Kit\DriverFramework\Device_API\incl\device_types.h
mzd\macsec\Kit\EIP163\incl\eip163.h
mzd\macsec\Kit\EIP163\src\c_eip163.h
mzd\macsec\Kit\EIP163\src\eip163.c
mzd\macsec\Kit\EIP163\src\eip163_hw_interface.h
mzd\macsec\Kit\EIP163\src\eip163_level0.h
mzd\macsec\Kit\EIP164\incl\eip164_rules.h
mzd\macsec\Kit\EIP164\incl\eip164_secy.h
mzd\macsec\Kit\EIP164\incl\eip164_types.h
mzd\macsec\Kit\EIP164\src\c_eip164.h
mzd\macsec\Kit\EIP164\src\c_eip66.h
mzd\macsec\Kit\EIP164\src\eip164_device.c
mzd\macsec\Kit\EIP164\src\eip164_hw_interface.h
mzd\macsec\Kit\EIP164\src\eip164_internal.h
mzd\macsec\Kit\EIP164\src\eip164_level0.h
mzd\macsec\Kit\EIP164\src\eip164_rules.c
mzd\macsec\Kit\EIP164\src\eip164_secy.c
mzd\macsec\Kit\EIP164\src\eip66_level0.h
mzd\macsec\Kit\EIP201\docs\cs_eip201.h
mzd\macsec\Kit\EIP201\incl\eip201.h
mzd\macsec\Kit\EIP201\src\c_eip201.h
mzd\macsec\Kit\EIP201\src\eip201.c
mzd\macsec\Kit\EIP217\src\c_eip217.h
mzd\macsec\Kit\EIP217\src\eip217_level0.h
mzd\macsec\Kit\List\incl\list.h
mzd\macsec\Kit\List\src\c_list.h
mzd\macsec\Kit\List\src\list.c
mzd\macsec\Kit\Log\incl\log.h
mzd\macsec\Kit\Log\src\log.c
mzd\macsec\Kit\Log\src\printf\log_impl.h
mzd\macsec\Kit\Log\src\printk\log_impl.h
mzd\macsec\Kit\SABuilder_MACsec\Example_AES\incl\aes.h
mzd\macsec\Kit\SABuilder_MACsec\Example_AES\src\aes.c
mzd\macsec\Kit\SABuilder_MACsec\incl\sa_builder_macsec.h
mzd\macsec\Kit\SABuilder_MACsec\src\c_sa_builder_macsec.h
mzd\macsec\Kit\SABuilder_MACsec\src\sa_builder_eip164.c
mzd\macsec\Kit\SABuilder_MACsec\src\sa_builder_internal.h
mzd\macsec\Kit\SABuilder_MACsec\src\sa_builder_macsec.c
