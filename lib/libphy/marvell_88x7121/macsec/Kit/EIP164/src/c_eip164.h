/* c_eip164.h
 *
 * EIP-164 Driver Library Default Configuration.
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

#ifndef C_EIP164_H_
#define C_EIP164_H_


/*----------------------------------------------------------------------------
 * This module uses (requires) the following interface(s):
 */

/* Top-level configuration */
#include "cs_eip164.h"

/* One device instance (core) mode of operation */
/*#define EIP164_DEVICE_MODE_EGRESS */
/*#define EIP164_DEVICE_MODE_INGRESS */

/* Base offset used for all the EIP-164 registers */
#ifndef EIP164_CONF_BASE
#define EIP164_CONF_BASE                    0x00
#endif /* EIP164_CONF_BASE */

/* Number of read operations required for the 0 unsafe counter */
/* for proper CDS */
#ifndef EIP164_SECY_MAX_SYNC_COUNT
#define EIP164_SECY_MAX_SYNC_COUNT          3
#endif

/* Maximum value for crypt-authenticate bypass length */
#ifndef EIP164_SECY_CRYPT_AUTH_MAX_BYPASS_LEN
#define EIP164_SECY_CRYPT_AUTH_MAX_BYPASS_LEN            255
#endif

/* Enable PACK timeout counter of statistics modules, */
/* granting the host access after a certain number of cycles. */
#ifndef EIP164_PACK_TIMEOUT_ENABLE
#define EIP164_PACK_TIMEOUT_ENABLE          1
#endif

/* Number of cycles for PACK timeout. */
#ifndef EIP164_PACK_TIMEOUT_VALUE
#define EIP164_PACK_TIMEOUT_VALUE           1
#endif


/* Enable EIP-164 Crypt-Authenticate feature */
/*#define EIP164_CRYPT_AUTH_ENABLE */

/* Strict argument checking for the input parameters */
/* If required then define this parameter in the top-level configuration */
/*#define EIP164_STRICT_ARGS */

/* Enable per-counter summary */
/* #define EIP164_PERCOUNTER_SUMMARY_ENABLE */

/* Disable EIP-164 device initialization register writes, */
/* this can be used to speed up initialization by offloading these register */
/* writes to another processor with lower EIP-164 register write overhead */
/*#define EIP164_DEV_INIT_DISABLE */


#endif /* C_EIP164_H_ */


/* end of file c_eip164.h */
