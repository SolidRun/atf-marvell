#ifndef __CAVM_CSRS_MRMLB_H__
#define __CAVM_CSRS_MRMLB_H__
/* This file is auto-generated. Do not edit */

/***********************license start***********************************
* Copyright (C) 2020-2022 Marvell
* SPDX-License-Identifier: BSD-3-Clause
* https://spdx.org/licenses
***********************license end**************************************/


/**
 * @file
 *
 * Configuration and status register (CSR) address and type definitions for
 * OcteonTX MRMLB.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration mrmlb_bar_e
 *
 * MRMLB Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define CAVM_MRMLB_BAR_E_MRMLBX_PF_BAR0(a) (0x87e0f8000000ll + 0x1000000ll * (a))
#define CAVM_MRMLB_BAR_E_MRMLBX_PF_BAR0_SIZE 0x40000ull

/**
 * Register (RSL) mrmlb#_const
 *
 * INTERNAL: MRMLB Fake Register
 *
 * This register is only to satisfy the tools, it has no physical manifestation.
 */
union cavm_mrmlbx_const
{
    uint64_t u;
    struct cavm_mrmlbx_const_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mrmlbx_const_s cn; */
};
typedef union cavm_mrmlbx_const cavm_mrmlbx_const_t;

static inline uint64_t CAVM_MRMLBX_CONST(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MRMLBX_CONST(uint64_t a)
{
    if ((a>=1)&&(a<=3))
        return 0x87e0f8000000ll + 0x1000000ll * ((a) & 0x3);
    __cavm_csr_fatal("MRMLBX_CONST", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MRMLBX_CONST(a) cavm_mrmlbx_const_t
#define bustype_CAVM_MRMLBX_CONST(a) CSR_TYPE_RSL
#define basename_CAVM_MRMLBX_CONST(a) "MRMLBX_CONST"
#define device_bar_CAVM_MRMLBX_CONST(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MRMLBX_CONST(a) (a)
#define arguments_CAVM_MRMLBX_CONST(a) (a),-1,-1,-1

#endif /* __CAVM_CSRS_MRMLB_H__ */
