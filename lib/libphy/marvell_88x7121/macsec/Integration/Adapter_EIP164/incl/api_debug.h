/* api_debug.h
 *
 * Driver Debugging API
 *
 */

/*****************************************************************************
* Copyright (c) 2012-2021 by Rambus, Inc. and/or its subsidiaries.
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

#ifndef API_DEBUG_H_
#define API_DEBUG_H_

/*----------------------------------------------------------------------------
 * This module uses (requires) the following interface(s):
 */

/* Driver Framework Basic Definitions API */
#include "basic_defs.h"             /* uint32_t */

/* Driver Framework Device API */
#include "device_mgmt.h"         /* SecY_SAHandle_t, SecY_Rules_* */


/*----------------------------------------------------------------------------
 * Definitions and macros
 */


/*----------------------------------------------------------------------------
 * Debug_Device_Read32
 *
 * Reads a device static resource such as register or internal memory
 *
 * API use order:
 *      None
 *
 * DeviceName_p (input)
 *      Device name to be read
 *
 * ReadOffset (input)
 *      Resource read offset within the device memory map
 *
 * Value_p (output)
 *      Pointer to a memory location where the read result will be stored.
 *
 * This function is re-entrant for the same or different DeviceName_p.
 *
 * This function can be called concurrently with any other Debug API
 * function for the same or different DeviceId provided the API use order
 * is followed.
 *
 * Return value:
 *     0 :  device resource is read
 *     <0 : failure
 */
int
Debug_Device_Read32(
        const char * const DeviceName_p,
        const unsigned int ReadOffset,
        uint32_t * Value_p);


#endif /* API_DEBUG_H_ */


/* end of file api_debug.h */
