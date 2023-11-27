#ifndef __CAVM_CSRS_RTT_H__
#define __CAVM_CSRS_RTT_H__
/* This file is auto-generated. Do not edit */

/***********************license start***********************************
* Copyright (C) 2021-2023 Marvell.
* SPDX-License-Identifier: BSD-3-Clause
* https://spdx.org/licenses
***********************license end**************************************/


/**
 * @file
 *
 * Configuration and status register (CSR) address and type definitions for
 * RTT.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration rtt_bar_e
 */
#define CAVM_RTT_BAR_E_RTT_PF_BAR0 (0x80e500000000ll)
#define CAVM_RTT_BAR_E_RTT_PF_BAR0_SIZE 0x80000000ull

/**
 * Register (NCB32b) rtt_axi_ncbw_raddr_hi_fault
 *
 * INTERNATL: RTT AXI NCBW Address Fault Register
 *
 * For internal use only.
 */
union cavm_rtt_axi_ncbw_raddr_hi_fault
{
    uint32_t u;
    struct cavm_rtt_axi_ncbw_raddr_hi_fault_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t fault                 : 1;  /**< [ 31: 31](R/W1C/H) Set to one when an SMMU fault occurs on a store. Write one to clear
                                                                 after processing the fault. */
        uint32_t reserved_21_30        : 10;
        uint32_t addr_hi               : 21; /**< [ 20:  0](R/W1C/H) Address that caused an SMMU fault. Bits 52:32 of the address */
#else /* Word 0 - Little Endian */
        uint32_t addr_hi               : 21; /**< [ 20:  0](R/W1C/H) Address that caused an SMMU fault. Bits 52:32 of the address */
        uint32_t reserved_21_30        : 10;
        uint32_t fault                 : 1;  /**< [ 31: 31](R/W1C/H) Set to one when an SMMU fault occurs on a store. Write one to clear
                                                                 after processing the fault. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_axi_ncbw_raddr_hi_fault_s cn; */
};
typedef union cavm_rtt_axi_ncbw_raddr_hi_fault cavm_rtt_axi_ncbw_raddr_hi_fault_t;

#define CAVM_RTT_AXI_NCBW_RADDR_HI_FAULT CAVM_RTT_AXI_NCBW_RADDR_HI_FAULT_FUNC()
static inline uint64_t CAVM_RTT_AXI_NCBW_RADDR_HI_FAULT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_AXI_NCBW_RADDR_HI_FAULT_FUNC(void)
{
    return 0x80e500000018ll;
}

#define typedef_CAVM_RTT_AXI_NCBW_RADDR_HI_FAULT cavm_rtt_axi_ncbw_raddr_hi_fault_t
#define bustype_CAVM_RTT_AXI_NCBW_RADDR_HI_FAULT CSR_TYPE_NCB32b
#define basename_CAVM_RTT_AXI_NCBW_RADDR_HI_FAULT "RTT_AXI_NCBW_RADDR_HI_FAULT"
#define device_bar_CAVM_RTT_AXI_NCBW_RADDR_HI_FAULT 0x0 /* PF_BAR0 */
#define busnum_CAVM_RTT_AXI_NCBW_RADDR_HI_FAULT 0
#define arguments_CAVM_RTT_AXI_NCBW_RADDR_HI_FAULT -1,-1,-1,-1

#endif /* __CAVM_CSRS_RTT_H__ */
