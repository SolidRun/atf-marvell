/* cs_da_macsec.h
 *
 * Top-level Demo Application for MACsec
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

/* this file is included by c_da_macsec.h to get configuration switches */

#include "cs_systemtestconfig.h"      /* defines SYSTEMTEST_CONFIG_Cnn */

#include "cs_da_macsec_ext.h"         /* Platform-specific extensions */

/* log level for the entire adapter (for now) */
/* choose from LOG_SEVERITY_INFO, LOG_SEVERITY_WARN, LOG_SEVERITY_CRIT */
#ifndef LOG_SEVERITY_MAX
#define LOG_SEVERITY_MAX  LOG_SEVERITY_INFO
#endif

#define DA_MACSEC_LICENSE "Dual BSD/GPL"

/* C0 = Egress, HW conf -e */
#ifdef SYSTEMTEST_CONFIGURATION_C0
#define DA_MACSEC_MODE_EGRESS
/*#define DA_MACSEC_MODE_INGRESS */
/* #define DA_MACSEC_USE_WARMBOOT */
#endif

/* C1 = Ingress, HW conf -i */
#ifdef SYSTEMTEST_CONFIGURATION_C1
/*#define DA_MACSEC_MODE_EGRESS */
#define DA_MACSEC_MODE_INGRESS
#define DA_MACSEC_USE_WARMBOOT
#endif

/* C3 = Egress, HW conf -e */
#ifdef SYSTEMTEST_CONFIGURATION_C3
#define DA_MACSEC_MODE_EGRESS
/*#define DA_MACSEC_MODE_INGRESS */
/*#define DA_MACSEC_USE_WARMBOOT */
#endif

/* C4 = Ingress, HW conf -i */
#ifdef SYSTEMTEST_CONFIGURATION_C4
/*#define DA_MACSEC_MODE_EGRESS */
#define DA_MACSEC_MODE_INGRESS
/*#define DA_MACSEC_USE_WARMBOOT */
#endif


/* Enable the tests that use the CfyE API */
#define DA_MACSEC_USE_CFYE

/* Test SM4 operation (not supported on all hardware configurations) */
/* #define DA_MACSEC_SM4 */

/* end of file cs_da_macsec.h */
