/** @file c_adapter_eip163.h
 *
 * @brief Default Adapter EIP-163 configuration
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

#ifndef INCLUDE_GUARD_C_ADAPTER_EIP163_H
#define INCLUDE_GUARD_C_ADAPTER_EIP163_H

/*----------------------------------------------------------------------------
 * This module uses (requires) the following interface(s):
 */

/* Top-level Adapter configuration */
#include "cs_adapter.h"

/* log level for the entire adapter (for now) */
/* choose from LOG_SEVERITY_INFO, LOG_SEVERITY_WARN, LOG_SEVERITY_CRIT */
/*#define LOG_SEVERITY_MAX  LOG_SEVERITY_CRITICAL */

/** Adapter driver name */
#ifndef ADAPTER_EIP163_DRIVER_NAME
#define ADAPTER_EIP163_DRIVER_NAME      "Security-IP-163"
#endif

#ifdef ONLY_FOR_DOXYGEN
/** Enables EIP-163 classification engine interrupts */
#define ADAPTER_EIP163_INTERRUPTS_ENABLE
#endif

/** filter for printing interrupts */
#ifdef ADAPTER_EIP163_INTERRUPTS_ENABLE
#ifndef ADAPTER_EIP163_INTERRUPTS_TRACEFILTER
#define ADAPTER_EIP163_INTERRUPTS_TRACEFILTER 0x00000FFF
#endif
#endif /* ADAPTER_EIP163_INTERRUPTS_ENABLE */

/* Enables 64-bit host support */
/*#define ADAPTER_EIP163_64BIT_HOST */

/** One for egress and one for ingress */
#ifndef ADAPTER_EIP163_MAX_NOF_DEVICES
#define ADAPTER_EIP163_MAX_NOF_DEVICES          2
#endif

#ifndef ADAPTER_EIP163_DEVICES
#error "ADAPTER_EIP163_DEVICES must be defined"
#endif

#ifndef ONLY_FOR_DOXYGEN

/* Default 1 IC device for one EIP-163 device */
#ifndef ADAPTER_EIP163_MAX_IC_COUNT
#define ADAPTER_EIP163_MAX_IC_COUNT     ADAPTER_EIP163_MAX_NOF_DEVICES
#endif

/* Enables CfyE API strict argument checking checks */
/*#define ADAPTER_EIP163_STRICT_ARGS */

/* Enables EIP-163 adapter debug logic */
/*#define ADAPTER_EIP163_DBG */

/* Maximum number of synchronization status polls */
#ifndef ADAPTER_EIP163_MAX_NOF_SYNC_RETRY_COUNT
#define ADAPTER_EIP163_MAX_NOF_SYNC_RETRY_COUNT  10
#endif

/* Timeout in milliseconds between two consecutive synchronization */
/* status polls */
#ifndef ADAPTER_EIP163_SYNC_RETRY_TIMEOUT_MS
#define ADAPTER_EIP163_SYNC_RETRY_TIMEOUT_MS     10
#endif

#ifndef ADAPTER_EIP163_PHY_DROP_CLASS_IRQ
#define ADAPTER_EIP163_PHY_DROP_CLASS_IRQ        0
#endif

#ifndef ADAPTER_EIP163_DROP_CLASS_INT_NAME
#define ADAPTER_EIP163_DROP_CLASS_INT_NAME       "EIP163-DROP-CLASS"
#endif

#ifndef ADAPTER_EIP163_PHY_DROP_PP_IRQ
#define ADAPTER_EIP163_PHY_DROP_PP_IRQ           1
#endif

#ifndef ADAPTER_EIP163_DROP_PP_INT_NAME
#define ADAPTER_EIP163_DROP_PP_INT_NAME          "EIP163-DROP-PP"
#endif

#ifndef ADAPTER_EIP163_PHY_DROP_MTU_IRQ
#define ADAPTER_EIP163_PHY_DROP_MTU_IRQ          2
#endif

#ifndef ADAPTER_EIP163_DROP_MTU_INT_NAME
#define ADAPTER_EIP163_DROP_MTU_INT_NAME         "EIP163-DROP-MTU"
#endif

#ifndef ADAPTER_EIP163_PHY_STAT_SA_THR_IRQ
#define ADAPTER_EIP163_PHY_STAT_SA_THR_IRQ       3
#endif

#ifndef ADAPTER_EIP163_STAT_SA_THR_INT_NAME
#define ADAPTER_EIP163_STAT_SA_THR_INT_NAME      "EIP163-STAT-SA-THR"
#endif

#ifndef ADAPTER_EIP163_PHY_STAT_GLOBAL_THR_IRQ
#define ADAPTER_EIP163_PHY_STAT_GLOBAL_THR_IRQ   4
#endif

#ifndef ADAPTER_EIP163_STAT_GLOBAL_THR_INT_NAME
#define ADAPTER_EIP163_STAT_GLOBAL_THR_INT_NAME  "EIP163-STAT-GLOBAL-THR"
#endif

#ifndef ADAPTER_EIP163_PHY_STAT_VLAN_THR_IRQ
#define ADAPTER_EIP163_PHY_STAT_VLAN_THR_IRQ     5
#endif

#ifndef ADAPTER_EIP163_STAT_VLAN_THR_INT_NAME
#define ADAPTER_EIP163_STAT_VLAN_THR_INT_NAME    "EIP163-STAT-VLAN-THR"
#endif

#ifndef ADAPTER_EIP163_PHY_SA_PN_THR_IRQ
#define ADAPTER_EIP163_PHY_SA_PN_THR_IRQ         6
#endif

#ifndef ADAPTER_EIP163_SA_PN_THR_INT_NAME
#define ADAPTER_EIP163_SA_PN_THR_INT_NAME        "EIP163-SA-PN-THR"
#endif

#ifndef ADAPTER_EIP163_PHY_SA_EXPIRED_IRQ
#define ADAPTER_EIP163_PHY_SA_EXPIRED_IRQ        7
#endif

#ifndef ADAPTER_EIP163_SA_EXPIRED_INT_NAME
#define ADAPTER_EIP163_SA_EXPIRED_INT_NAME       "EIP163-SA-EXPIRED"
#endif

/* EIP-163 Channel AIC interrupt resources */
#ifndef ADAPTER_EIP163_CHAN_ERR_SOP_WO_EOP_IRQ
#define ADAPTER_EIP163_CHAN_ERR_SOP_WO_EOP_IRQ       0
#endif

#ifndef ADAPTER_EIP163_CHAN_ERR_SOP_WO_EOP_INT_NAME
#define ADAPTER_EIP163_CHAN_ERR_SOP_WO_EOP_INT_NAME  "EIP163-CHAN-ERR-SOP-WO-EOP"
#endif

#ifndef ADAPTER_EIP163_CHAN_ERR_EOP_WO_SOP_IRQ
#define ADAPTER_EIP163_CHAN_ERR_EOP_WO_SOP_IRQ       1
#endif

#ifndef ADAPTER_EIP163_CHAN_ERR_EOP_WO_SOP_INT_NAME
#define ADAPTER_EIP163_CHAN_ERR_EOP_WO_SOP_INT_NAME  "EIP163-CHAN-ERR-EOP-WO-SOP"
#endif

#ifndef ADAPTER_EIP163_CHAN_ERR_XFER_WO_SOP_IRQ
#define ADAPTER_EIP163_CHAN_ERR_XFER_WO_SOP_IRQ      2
#endif

#ifndef ADAPTER_EIP163_CHAN_ERR_XFER_WO_SOP_INT_NAME
#define ADAPTER_EIP163_CHAN_ERR_XFER_WO_SOP_INT_NAME "EIP163-CHAN-ERR-XFER-WO-SOP"
#endif

#ifndef ADAPTER_EIP163_CHAN_ERR_SLOT_SOP_IRQ
#define ADAPTER_EIP163_CHAN_ERR_SLOT_SOP_IRQ         3
#endif

#ifndef ADAPTER_EIP163_CHAN_ERR_SLOT_SOP_INT_NAME
#define ADAPTER_EIP163_CHAN_ERR_SLOT_SOP_INT_NAME    "EIP163-CHAN-ERR-SLOT-SOP"
#endif

#ifndef ADAPTER_EIP163_CHAN_ERR_SLOT_CHID_IRQ
#define ADAPTER_EIP163_CHAN_ERR_SLOT_CHID_IRQ        4
#endif

#ifndef ADAPTER_EIP163_CHAN_ERR_SLOT_CHID_INT_NAME
#define ADAPTER_EIP163_CHAN_ERR_SLOT_CHID_INT_NAME   "EIP163-CHAN-ERR-SLOT-CHID"
#endif

#ifndef ADAPTER_EIP163_CHAN_ERR_NOT_B2B_IRQ
#define ADAPTER_EIP163_CHAN_ERR_NOT_B2B_IRQ          5
#endif

#ifndef ADAPTER_EIP163_CHAN_ERR_NOT_B2B_INT_NAME
#define ADAPTER_EIP163_CHAN_ERR_NOT_B2B_INT_NAME    "EIP163-CHAN-ERR-NOT-B2B"
#endif

#ifndef ADAPTER_EIP163_CHAN_CTRL_PKT_IRQ
#define ADAPTER_EIP163_CHAN_CTRL_PKT_IRQ             6
#endif

#ifndef ADAPTER_EIP163_CHAN_CTRL_PKT_INT_NAME
#define ADAPTER_EIP163_CHAN_CTRL_PKT_INT_NAME        "EIP163-CHAN-CTRL-PKT"
#endif

#ifndef ADAPTER_EIP163_CHAN_DATA_PKT_IRQ
#define ADAPTER_EIP163_CHAN_DATA_PKT_IRQ             7
#endif

#ifndef ADAPTER_EIP163_CHAN_DATA_PKT_INT_NAME
#define ADAPTER_EIP163_CHAN_DATA_PKT_INT_NAME        "EIP163-CHAN-DATA-PKT"
#endif

#ifndef ADAPTER_EIP163_CHAN_DROP_PKT_IRQ
#define ADAPTER_EIP163_CHAN_DROP_PKT_IRQ             8
#endif

#ifndef ADAPTER_EIP163_CHAN_DROP_PKT_INT_NAME
#define ADAPTER_EIP163_CHAN_DROP_PKT_INT_NAME        "EIP163-CHAN-DROP-PKT"
#endif

#ifndef ADAPTER_EIP163_CHAN_TCAM_HIT_MULT_IRQ
#define ADAPTER_EIP163_CHAN_TCAM_HIT_MULT_IRQ        9
#endif

#ifndef ADAPTER_EIP163_CHAN_TCAM_HIT_MULT_INT_NAME
#define ADAPTER_EIP163_CHAN_TCAM_HIT_MULT_INT_NAME   "EIP163-CHAN-TCAM-HIT-MULT"
#endif

#ifndef ADAPTER_EIP163_CHAN_TCAM_MISS_IRQ
#define ADAPTER_EIP163_CHAN_TCAM_MISS_IRQ            10
#endif

#ifndef ADAPTER_EIP163_CHAN_TCAM_MISS_INT_NAME
#define ADAPTER_EIP163_CHAN_TCAM_MISS_INT_NAME       "EIP163-CHAN-TCAM-MISS"
#endif

#ifndef ADAPTER_EIP163_INT_RESOURCES
#error "ADAPTER_EIP163_INT_RESOURCES not defined"
#endif

#ifndef ADAPTER_EIP163_IC_DEVICE_OFFSET
#define ADAPTER_EIP163_IC_DEVICE_OFFSET           0
#endif

/* EIP-163 device mode */
/*#define ADAPTER_EIP163_MODE_EGRESS */
/*#define ADAPTER_EIP163_MODE_INGRESS */

#if !defined(ADAPTER_EIP163_MODE_EGRESS) && !defined(ADAPTER_EIP163_MODE_INGRESS)
#error "Device mode (egress or ingress) not defined"
#endif

/* Maximum number of initialization status polls */
#ifndef ADAPTER_EIP163_MAX_NOF_INIT_RETRY_COUNT
#define ADAPTER_EIP163_MAX_NOF_INIT_RETRY_COUNT 100
#endif

/* Timeout in milliseconds between two consecutive initialization status polls */
#ifndef ADAPTER_EIP163_INIT_RETRY_TIMEOUT_MS
#define ADAPTER_EIP163_INIT_RETRY_TIMEOUT_MS    10
#endif

/* Maximum number of uninitialization status polls */
#ifndef ADAPTER_EIP163_MAX_NOF_UNINIT_RETRY_COUNT
#define ADAPTER_EIP163_MAX_NOF_UNINIT_RETRY_COUNT 100
#endif

/* Timeout in milliseconds between two consecutive uninitialization status polls */
#ifndef ADAPTER_EIP163_UNINIT_RETRY_TIMEOUT_MS
#define ADAPTER_EIP163_UNINIT_RETRY_TIMEOUT_MS    10
#endif

/** By default the low-latency bypass is switched off */
#ifndef ADAPTER_EIP163_LOW_LATENCY_BYPASS
#define ADAPTER_EIP163_LOW_LATENCY_BYPASS       0
#endif

#endif /* ONLY_FOR_DOXYGEN */

/** The statistics "clear on read" EIP-163 device feature should not be enabled
    in a system that performs speculative reads, i.e. one that reads ahead
    "just in case the next words are needed too" */
#ifndef ADAPTER_EIP163_CLEAR_ON_READ
#define ADAPTER_EIP163_CLEAR_ON_READ            1
#endif

/** Cleare statistics by writing the read value to decrement */
#ifndef ADAPTER_EIP163_WRITE_TO_DECREMENT
#define ADAPTER_EIP163_WRITE_TO_DECREMENT          0
#endif

/** Clock control: 1 - clocks are always enabled,\n
                   0 - dynamic clock control by device, e.g. only when needed */
#ifndef ADAPTER_EIP163_CLOCK_CONTROL
#define ADAPTER_EIP163_CLOCK_CONTROL            0
#endif

#ifdef ONLY_FOR_DOXYGEN
/** Enable WarmBoot */
#define ADAPTER_EIP163_WARMBOOT_ENABLE

/** Disable Adapter EIP-163 device initialization register writes,
    this can be used to speed up initialization by offloading these register
    writes to another processor with lower EIP-163 register write overhead */
#define ADAPTER_EIP163_DEV_INIT_DISABLE

/** Disable Adapter EIP-163 device uninitialization register writes,
    this can be used to speed up uninitialization by offloading these register
    writes to another processor with lower EIP-163 register write overhead */
#define ADAPTER_EIP163_DEV_UNINIT_DISABLE
#endif /* ONLY_FOR_DOXYGEN */


#endif /* Include Guard */


/* end of file c_adapter_eip163.h */
