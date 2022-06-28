/* cs_intdispatch_umdevxs.h
 *
 * Configuration Settings for the Interrupt Dispatcher.
 */

/*****************************************************************************
* Copyright (c) 2015-2021 by Rambus, Inc. and/or its subsidiaries.
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

#ifndef INCLUDE_GUARD_CS_INTDISPATCH_UMDEVXS_H
#define INCLUDE_GUARD_CS_INTDISPATCH_UMDEVXS_H

#include "cs_driver.h"
#include "cs_intdispatch_umdevxs_ext.h"

/* logging level for Interrupt Dispatcher */
/* Choose from LOG_SEVERITY_INFO, LOG_SEVERITY_WARN, LOG_SEVERITY_CRIT */
#undef LOG_SEVERITY_MAX
#ifdef DRIVER_PERFORMANCE
#define INTDISPATCH_LOG_SEVERITY  LOG_SEVERITY_CRITICAL
#else
#define INTDISPATCH_LOG_SEVERITY  LOG_SEVERITY_WARN
#endif

#if defined(DRIVER_MAX_NOF_EIP163_IC_DEVICES) && defined(DRIVER_MAX_NOF_EIP164_IC_DEVICES)
#define INTDISPATCH_MAX_NOF_RESOURCES   (DRIVER_MAX_NOF_EIP163_IC_DEVICES + \
                                         DRIVER_MAX_NOF_EIP164_IC_DEVICES)
#else
#error "DRIVER_MAX_NOF_EIP16[3|4]_IC_DEVICES not defined"
#endif

/* Calculate AIC device ID from its parent EIP-164 device ID */
#define INTDISPATCH_ICDEV_ID         DRIVER_ICDEV_ID

/* Calculate EIP-164 interrupt handler ID from EIP-201 AIC device ID */
#define INTDISPATCH_INT_HANDLER_ID   DRIVER_INT_HANDLER_ID


#endif /* Include Guard */


/* end of file cs_intdispatch_umdevxs.h */
