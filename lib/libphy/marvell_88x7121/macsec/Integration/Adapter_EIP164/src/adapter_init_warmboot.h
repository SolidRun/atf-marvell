/* adapter_init_warmboot.h
 *
 * WarmBoot support related to device initialization.
 */

/*****************************************************************************
* Copyright (c) 2017-2021 by Rambus, Inc. and/or its subsidiaries.
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions are
* met:
*
* 1. Redistributions of source code must retain the above copyright
* notice, this list of conditions and the following disclaimer.
*
* 2. Redistributions in binary form must reproduce the above copyright
* notice, this list of conditions and the following disclaimer in the
* documentation and/or other materials provided with the distribution.
*
* 3. Neither the name of the copyright holder nor the names of its
* contributors may be used to endorse or promote products derived from
* this software without specific prior written permission.
*
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
* "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
* LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
* A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
* HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
* SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
* LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
* DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
* THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
* (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
* OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*****************************************************************************/

#ifndef INCLUDE_GUARD_ADAPTER_INIT_WARMBOOT_H
#define INCLUDE_GUARD_ADAPTER_INIT_WARMBOOT_H

/*----------------------------------------------------------------------------
 * This module uses (requires) the following interface(s):
 */

/* Driver Framework Basic Definitions API */
#include "basic_defs.h"         /* bool */

#include "device_types.h"        /* Device_Properties_t */

#include "api_driver164_init.h"  /* Driver164_DataPath_t */

/*----------------------------------------------------------------------------
 * Definitions and macros
 */


/*----------------------------------------------------------------------------
 * Adapter_Init_WarmBoot_MaxSize_Get
 *
 * This function returns the required size of the WarmBoot storage for the
 * Driver Framework in bytes.
 *
 * MaxByteCount_p (output)
 *     Size of the storage area in bytes.
 *
 * Return:
 *    true: success.
 *    false: failure.
 */
bool
Adapter_Init_WarmBoot_MaxSize_Get(
        unsigned int * const MaxByteCount_p);


/*----------------------------------------------------------------------------
 * Adapter_Init_WarmBoot_Device_Update
 *
 * This function updates the WarmBoot storage area for the given device.
 *
 * Index (input)
 *     Index of the device whose storage area must be updated.
 *
 * Props_p (input)
 *     Device properties of the device. When this pointer is NULL,
 *     the device is considered to be removed.
 *
 * Return:
 *    true: success.
 *    false: failure.
 */
bool
Adapter_Init_WarmBoot_Device_Update(
        unsigned int Index,
        const Device_Properties_t *Props_p);


/*----------------------------------------------------------------------------
 * Adapter_Init_WarmBoot_DataPath_Update
 *
 * This function updates the WarmBoot storage area for the given data path.
 *
 * Index (input)
 *     Index of the data path whose storage area must be updated.
 *
 * Props_p (input)
 *     Properties of the data path. When this pointer is NULL,
 *     the data path is considered to be removed.
 *
 * Return:
 *    true: success.
 *    false: failure.
 */
bool
Adapter_Init_WarmBoot_DataPath_Update(
        unsigned int Index,
        const Driver164_DataPath_t * Props_p);


/*----------------------------------------------------------------------------
 * Adapter_Init_WarmBoot_Init
 *
 * This function prepares the system for recording the Driver Framework state.
 * It allocates a WarmBot storage area and stores the actual state of
 * the Driver Framework in it.
 *
 * Return:
 *    true: success.
 *    false: failure.
 */
bool
Adapter_Init_WarmBoot_Init(void);


/*----------------------------------------------------------------------------
 * Adapter_Init_WarmBoot_Uninit
 *
 * This function releases any resources claimed by
 * Adapter_Init_WarmBoot_Init().  Any device operations performed
 * after this call will not be recorded in the WarmBoot area.
 *
 * Return:
 *    true: success.
 *    false: failure.
 */
bool
Adapter_Init_WarmBoot_Uninit(void);


/*----------------------------------------------------------------------------
 * Adapter_Init_WarmBoot_Shutdown
 *
 * This function indicates to the WarmBoot system that we have a planned
 * shutdown. Any device operations performed after this call will not
 * be recorded in the WarmBoot area.
 *
 * AreaId (input)
 *     ID of the WarmBoot storage area used to store the Driver Framework state.
 *
 * Return:
 *    zero: success.
 *    nonzero value: failure.
 */
int
Adapter_Init_WarmBoot_Shutdown(
        unsigned int AreaId);


/*----------------------------------------------------------------------------
 * Adapter_Init_WarmBoot_Restore
 *
 * This function restores the Driver Framework to the state recorded in
 * the WamrBoot storage area.
 *
 * AreaId (input)
 *     ID of the WarmBoot storage area used to store the Driver Framework state.
 *
 * Return:
 *    0: success.
 *    nonzero value: failure.
 */
int
Adapter_Init_WarmBoot_Restore(
        unsigned int AreaId);


#endif /* INCLUDE_GUARD_ADAPTER_INIT_ARMBOOT_H */


/* end of file adapter_init_warmboot.h */
