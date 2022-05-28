/* c_intdispatch.h
 *
 * Default Interrupt Dispatcher configuration parameters.
 */

/*****************************************************************************
* Copyright (c) 2009-2021 by Rambus, Inc. and/or its subsidiaries.
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

#ifndef INCLUDE_GUARD_C_INTDISPATCH_UMDEVXS_H
#define INCLUDE_GUARD_C_INTDISPATCH_UMDEVXS_H

/* Top-level configuration parameters */
#include "cs_intdispatch.h"

/* Trace level for logging messages */
#ifndef INTDISPATCH_LOG_SEVERITY
#define INTDISPATCH_LOG_SEVERITY LOG_SEVERITY_INFO
#endif

/* Interrupt Controller device to request from Driver Framework (Device) */
/*#define INTDISPATCH_IC_DEVICE "EIP201" */

/* Enables synchronization for concurrent application execution contexts */
/* accessing the Interrupt Controller device */
/*#define INTDISPATCH_NOT_REENTRANT */

/* Maximum number of supported IC (Interrupt Controllers) devices */
#ifndef INTDISPATCH_MAX_NOF_RESOURCES
#define INTDISPATCH_MAX_NOF_RESOURCES   1
#endif

/* IC device configuration parameters */
#ifndef INTDISPATCH_RESOURCES
/*                                        Name    Source  Config */
#define INTDISPATCH_RESOURCES           { "null",  0,      0 }
#endif

/* Macro to calculate AIC device ID from its parent EIP-164 device ID */
#ifndef INTDISPATCH_ICDEV_ID
#error "INTDISPATCH_ICDEV_ID undefined"
#endif

/* Macro to calculate Interrup Dispatcher EIP-164 interrupt handler ID */
/* from EIP-201 AIC device ID */
#ifndef INTDISPATCH_INT_HANDLER_ID
#error "INTDISPATCH_INT_HANDLER_ID undefined"
#endif


#endif /* Include Guard */


/* end of file c_intdispatch.h */
