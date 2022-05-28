/* adapter_cfye_warmboot.h
 *
 * CfyE WarmBoot Interface.
 */

/* -------------------------------------------------------------------------- */
/*                                                                            */
/*   Module        : ddk164                                                   */
/*   Version       : 3.1.1                                                    */
/*   Configuration : DDK-164-BSD                                              */
/*                                                                            */
/*   Date          : 2021-Aug-12                                              */
/*                                                                            */
/* Copyright (c) 2008-2021 by Rambus, Inc. and/or its subsidiaries.           */
/*                                                                            */
/* Redistribution and use in source and binary forms, with or without         */
/* modification, are permitted provided that the following conditions are     */
/* met:                                                                       */
/*                                                                            */
/* 1. Redistributions of source code must retain the above copyright          */
/* notice, this list of conditions and the following disclaimer.              */
/*                                                                            */
/* 2. Redistributions in binary form must reproduce the above copyright       */
/* notice, this list of conditions and the following disclaimer in the        */
/* documentation and/or other materials provided with the distribution.       */
/*                                                                            */
/* 3. Neither the name of the copyright holder nor the names of its           */
/* contributors may be used to endorse or promote products derived from       */
/* this software without specific prior written permission.                   */
/*                                                                            */
/* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS        */
/* "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT          */
/* LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR      */
/* A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT       */
/* HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,     */
/* SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT           */
/* LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,      */
/* DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY      */
/* THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT        */
/* (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE      */
/* OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.       */
/* -------------------------------------------------------------------------- */

#ifndef INCLUDE_GUARD_ADAPTER_CFYE_WARMBOOT_H
#define INCLUDE_GUARD_ADAPTER_CFYE_WARMBOOT_H

/*----------------------------------------------------------------------------
 * This module uses (requires) the following interface(s):
 */

/* Driver Framework Basic Definitions API */
#include "basic_defs.h"         /* bool */

/*----------------------------------------------------------------------------
 * Definitions and macros
 */


/*----------------------------------------------------------------------------
 * CfyELib_WarmBoot_vPort_Set
 *
 * Mark vPort as allocated for the purpose of the WarmBoot administration.
 *
 * DeviceId (input)
 *      ID of the selected device.
 *
 * vPortIndex (input)
 *      vPort index of the record to mark as allocated.
 */
void
CfyELib_WarmBoot_vPort_Set(
        unsigned int DeviceId,
        unsigned int vPortIndex);


/*----------------------------------------------------------------------------
 * CfyELib_WarmBoot_vPort_Clear
 *
 * Mark vPort as free for the purpose of the WarmBoot administration..
 *
 * DeviceId (input)
 *      ID of the selected device.
 *
 * vPortIndex (input)
 *      vPort index of the record to mark as free.
 */
void
CfyELib_WarmBoot_vPort_Clear(
        unsigned int DeviceId,
        unsigned int vPortIndex);


/*----------------------------------------------------------------------------
 * CfyELib_WarmBoot_Rule_Set
 *
 * Mark Rule as allocated for the purpose of the WarmBoot administration.
 *
 * DeviceId (input)
 *      ID of the selected device.
 *
 * RuleIndex (input)
 *      Rule index of the record to mark as allocated.
 */
void
CfyELib_WarmBoot_Rule_Set(
        unsigned int DeviceId,
        unsigned int RuleIndex);


/*----------------------------------------------------------------------------
 * CfyELib_WarmBoot_Rule_Clear
 *
 * Mark Rule as free for the purpose of the WarmBoot administration..
 *
 * DeviceId (input)
 *      ID of the selected device.
 *
 * RuleIndex (input)
 *      Rule index of the record to mark as free.
 */
void
CfyELib_WarmBoot_Rule_Clear(
        unsigned int DeviceId,
        unsigned int RuleIndex);


/*----------------------------------------------------------------------------
 * CfyELib_WarmBoot_MaxSize_Get
 *
 * Determine the maximum size required for a WarmBoot area when the device
 * is initialized.
 *
 * DeviceId (input)
 *      ID of the selected device.
 *
 * fIngress (input)
 *      true if the device is for ingress.
 *
 * MaxByteCount_p (output)
 *      Maximum size of the WarmBoot area for that device.
 *
 * Return value:
 *     true: success.
 *     false: failure
 */
bool
CfyELib_WarmBoot_MaxSize_Get(
        const unsigned int DeviceId,
        const bool fIngress,
        unsigned int *MaxByteCount_p);


/*-----------------------------------------------------------------------------
 * CfyELib_WarmBoot_Device_Init
 *
 * Initialize the WarmBoot administration when a device is initialized.
 *
 * DeviceId (input)
 *      ID of the selected device.
 *
 * Return values:
 *     true: success
 *     false: failure
 */
bool
CfyELib_WarmBoot_Device_init(
        unsigned int DeviceId);


/*-----------------------------------------------------------------------------
 * CfyELib_WarmBoot_Device_Uninit
 *
 * Free the WarmBoot administration if a device is uninitialized.
 *
 * DeviceId (input)
 *      ID of the selected device.
 *
 */
void
CfyELib_WarmBoot_Device_Uninit(
        unsigned int DeviceId);


/*----------------------------------------------------------------------------
 * CfyELib_WarmBoot_Shutdown().
 *
 * CfyE API specific function for WarmBoot Shutdown.
 *
 * DeviceId (input)
 *     Device Id of the device to be shut down.
 *
 * AreaId (input)
 *     Id of the storage area where device info is stored.
 *
 * Return value:
 *    0: success.
 *    nonzero value: failure.
 */
int
CfyELib_WarmBoot_Shutdown(
        unsigned int DeviceId,
        unsigned int AreaId);


/*----------------------------------------------------------------------------
 * CfyELib_WarmBoot_Restore().
 *
 * CfyE API specific function for WarmBoot Restore.
 *
 * DeviceId (input)
 *     Device Id of the device to be restored.
 *
 * AreaId (input)
 *     Id of the storage area where device info is stored.
 *
 * Return value:
 *    0: success.
 *    nonzero value: failure.
 */
int
CfyELib_WarmBoot_Restore(
        unsigned int DeviceId,
        unsigned int AreaId);


#endif /* INCLUDE_GUARD_ADAPTER_CFYE_WARMBOOT_H */


/* end of file adapter_cfye_warmboot.h */
