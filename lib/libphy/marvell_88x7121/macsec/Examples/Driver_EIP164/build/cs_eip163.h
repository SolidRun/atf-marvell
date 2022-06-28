/** @file cs_eip163.h
 *
 * @brief EIP-163 Driver Library Top-Level Configuration.
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

#ifndef CS_EIP163_H_
#define CS_EIP163_H_


/*----------------------------------------------------------------------------
 * This module uses (requires) the following interface(s):
 */

/* Top-level driver configuration */
#include "cs_driver.h"


/*----------------------------------------------------------------------------
 * Definitions and macros
 */

/** EIP-163 Egress device mode */
#ifdef DRIVER_MODE_EGRESS
#define EIP163_DEVICE_MODE_EGRESS
#endif

/** EIP-163 Ingress device mode */
#ifdef DRIVER_MODE_INGRESS
#define EIP163_DEVICE_MODE_INGRESS
#endif

/* Base offset used for all the EIP-163 registers */
/*#define EIP163_CONF_BASE                    0x80000 */

/** Enables strict argument checking for the input parameters in all the
    EIP-163 Driver API functions */
#if !defined DRIVER_PERFORMANCE || defined ONLY_FOR_DOXYGEN
#define EIP163_STRICT_ARGS
#endif

/** Enable PACK timeout counter of statistics modules,
    granting the host access after a certain number of cycles. */
#define EIP163_PACK_TIMEOUT_ENABLE          1

/** Number of cycles for PACK timeout. */
#define EIP163_PACK_TIMEOUT_VALUE           1


#ifdef ONLY_FOR_DOXYGEN

/** If this configuration option is set, the strict argument checking of the
    input parameters is enabled and can detect some programming errors.
    If not set, the performance is increased and code size is reduced. */
#define EIP163_CONF_BASE                    0x00

/** Number of read operations required for the 0 unsafe counter for proper CDS */
#define EIP163_MAX_SYNC_COUNT               3

/** This configuration option sets (defines) the base offset for all the EIP-217
    registers. If not set, the default will be 0. */
#define EIP217_CONF_BASE

#endif /* ONLY_FOR_DOXYGEN */


/** Number of non-control words in each TCAM entry. The actual width of
    TCAM words may be larger than what is required by the rules.*/
#define EIP163_TCAM_NON_CTRL_WORD_COUNT 5

#endif /* CS_EIP163_H_ */


/* end of file cs_eip163.h */
