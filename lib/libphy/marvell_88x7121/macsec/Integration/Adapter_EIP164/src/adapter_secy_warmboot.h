/* adapter_secy_warmboot.h
 *
 * SecY WarmBoot interface
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

#ifndef INCLUDE_GUARD_ADAPTER_SECY_WARMBOOT_H
#define INCLUDE_GUARD_ADAPTER_SECY_WARMBOOT_H

/*----------------------------------------------------------------------------
 * This module uses (requires) the following interface(s):
 */

/* Driver Framework Basic Definitions API */
#include "basic_defs.h"         /* bool */

/*----------------------------------------------------------------------------
 * Definitions and macros
 */

/*----------------------------------------------------------------------------
 * SecYLib_WarmBoot_SA_Set
 *
 * Mark SA as allocated for the purpose of the WarmBoot administration.
 *
 * DeviceId (input)
 *      ID of the selected device.
 *
 * SAIndex (input)
 *      SA index of the record to mark as allocated.
 */
void
SecYLib_WarmBoot_SA_Set(
        unsigned int DeviceId,
        unsigned int SAIndex);


/*----------------------------------------------------------------------------
 * SecYLib_WarmBoot_SA_Clear
 *
 * Mark SA as free for the purpose of the WarmBoot administration..
 *
 * DeviceId (input)
 *      ID of the selected device.
 *
 * SAIndex (input)
 *      SA index of the record to mark as free.
 */
void
SecYLib_WarmBoot_SA_Clear(
        unsigned int DeviceId,
        unsigned int SAIndex);


/*----------------------------------------------------------------------------
 * SecYLib_WarmBoot_MaxSize_Get
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
SecYLib_WarmBoot_MaxSize_Get(
        const unsigned int DeviceId,
        const bool fIngress,
        unsigned int *MaxByteCount_p);

/*----------------------------------------------------------------------------
 * SecYLib_WarmBoot_Device_Init
 *
 * Initialize the WarmBoot administration when a device is initialized.
 *
 * DeviceId (input)
 *      ID of the selected device.
 *
 * Return value:
 *     true: success.
 *     false: failure
 */
bool
SecYLib_WarmBoot_Device_Init(
        unsigned int DeviceId);


/*----------------------------------------------------------------------------
 * SecYLib_WarmBoot_Device_Uninit
 *
 * Free the WarmBoot administration if a device is uninitialized.
 *
 * DeviceId (input)
 *      ID of the selected device.
 *
 */
void
SecYLib_WarmBoot_Device_Uninit(
        unsigned int DeviceId);

/*----------------------------------------------------------------------------
 * SecYLib_WarmBoot_Shutdown().
 *
 * SecY API specific function for WarmBoot Shutdown.
 *
 * DeviceId (input)
 *     Device Id of the device to be shut down.
 *
 * AreaId (input)
 *     Id of the storage area where device info is stored.
 *
 * Return:
 *    0: success.
 *    nonzero value: failure.
 */
int
SecYLib_WarmBoot_Shutdown(
        unsigned int DeviceId,
        unsigned int AreaId);


/*----------------------------------------------------------------------------
 * SecYLib_WarmBoot_Restore().
 *
 * SecY API specific function for WarmBoot Restore.
 *
 * DeviceId (input)
 *     Device Id of the device to be restored.
 *
 * AreaId (input)
 *     Id of the storage area where device info is stored.
 *
 * Return:
 *    0: success.
 *    nonzero value: failure.
 */
int
SecYLib_WarmBoot_Restore(
        unsigned int DeviceId,
        unsigned int AreaId);


#endif /* INCLUDE_GUARD_ADAPTER_SECY_WARMBOOT_H */


/* end of file adapter_secy_warmboot.h */
