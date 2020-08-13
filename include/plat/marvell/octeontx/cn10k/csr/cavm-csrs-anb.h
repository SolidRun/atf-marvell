#ifndef __CAVM_CSRS_ANB_H__
#define __CAVM_CSRS_ANB_H__
/* This file is auto-generated. Do not edit */

/***********************license start***********************************
* Copyright (C) 2020 Marvell International Ltd.
* SPDX-License-Identifier: BSD-3-Clause
* https://spdx.org/licenses
***********************license end**************************************/


/**
 * @file
 *
 * Configuration and status register (CSR) address and type definitions for
 * OcteonTX ANB.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Register (SYSREG) anb_dummy
 *
 * ANB Configuration Register
 */
union cavm_anb_dummy
{
    uint32_t u;
    struct cavm_anb_dummy_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_18_31        : 14;
        uint32_t data                  : 18; /**< [ 17:  0](R/W) BIST DRF_SIM_RD_WR march disable. This March is only valid for DRFs
                                                                 When this bit is cleared to zero, the simultaneous read-write march is enabled.
                                                                 When this bit is set to one the simultaneous read write march is disabled.
                                                                 If enabled, simultaneous read write march runs before marches 7 through 0
                                                                 (controlled by [MARCH_DISABLE] vector). */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 18; /**< [ 17:  0](R/W) BIST DRF_SIM_RD_WR march disable. This March is only valid for DRFs
                                                                 When this bit is cleared to zero, the simultaneous read-write march is enabled.
                                                                 When this bit is set to one the simultaneous read write march is disabled.
                                                                 If enabled, simultaneous read write march runs before marches 7 through 0
                                                                 (controlled by [MARCH_DISABLE] vector). */
        uint32_t reserved_18_31        : 14;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_anb_dummy_s cn; */
};
typedef union cavm_anb_dummy cavm_anb_dummy_t;

#define CAVM_ANB_DUMMY CAVM_ANB_DUMMY_FUNC()
static inline uint64_t CAVM_ANB_DUMMY_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ANB_DUMMY_FUNC(void)
{
    return 0;
}

#define typedef_CAVM_ANB_DUMMY cavm_anb_dummy_t
#define bustype_CAVM_ANB_DUMMY CSR_TYPE_SYSREG
#define basename_CAVM_ANB_DUMMY "ANB_DUMMY"
#define busnum_CAVM_ANB_DUMMY 0
#define arguments_CAVM_ANB_DUMMY -1,-1,-1,-1

#endif /* __CAVM_CSRS_ANB_H__ */
