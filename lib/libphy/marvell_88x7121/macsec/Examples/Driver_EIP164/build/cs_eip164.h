/** @file cs_eip164.h
 *
 * @brief Top-level configuration parameters
 * for the EIP-164 Driver Library
 *
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

#ifndef CS_EIP164_H_
#define CS_EIP164_H_


/*----------------------------------------------------------------------------
 * This module uses (requires) the following interface(s):
 */
#include "cs_driver.h"

/*----------------------------------------------------------------------------
 * Definitions and macros
 */

/* One device instance (core) mode of operation */
/** EIP-164 Egress device mode */
#ifdef DRIVER_MODE_EGRESS
#define EIP164_DEVICE_MODE_EGRESS
#endif

/** EIP-164 Ingress device mode */
#ifdef DRIVER_MODE_INGRESS
#define EIP164_DEVICE_MODE_INGRESS
#endif

/** If this parameter is defined, the driver will support basic
    crypt-authenticate  operations (nonMACsec), which can be used for
    test purposes. */
#define EIP164_CRYPT_AUTH_ENABLE

/** Enables strict argument checking for the input parameters in all the
    EIP-164 Driver API functions */
#define EIP164_STRICT_ARGS

/** Enable PACK timeout counter of statistics modules,
    granting the host access after a certain number of cycles. */
#define EIP164_PACK_TIMEOUT_ENABLE          1

/** Number of cycles for PACK timeout. */
#define EIP164_PACK_TIMEOUT_VALUE           1

/** Does device support per-counter summary? */
#if defined DRIVER_PERCOUNTER_SUMMARY || defined ONLY_FOR_DOXYGEN
#define EIP164_PERCOUNTER_SUMMARY_ENABLE
#endif


#ifdef ONLY_FOR_DOXYGEN

/** If this configuration option is set, the strict argument checking of the
    input parameters is enabled and can detect some programming errors.
    If not set, the performance is increased and code size is reduced. */
#define EIP164_CONF_BASE                    0x00

/** This configuration option sets (defines) the maximum crypt-authenticate
    bypass length. If not set, the default will be 255. */
#define EIP164_SECY_CRYPT_AUTH_MAX_BYPASS_LEN

/** This configuration option sets (defines) the base offset for all the
    EIP-66 registers. If not set, the default will be 0. */
#define EIP66_CONF_BASE

/** This configuration option sets (defines) the base offset for all the EIP-217
    registers. If not set, the default will be 0. */
#define EIP217_CONF_BASE

#endif /* ONLY_FOR_DOXYGEN */


#endif /* CS_EIP164_H_ */


/* end of file cs_eip164.h */
