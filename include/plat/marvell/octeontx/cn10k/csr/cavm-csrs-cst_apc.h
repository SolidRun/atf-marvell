#ifndef __CAVM_CSRS_CST_APC_H__
#define __CAVM_CSRS_CST_APC_H__
/* This file is auto-generated. Do not edit */

/***********************license start***********************************
* Copyright (C) 2018 Marvell
* SPDX-License-Identifier: BSD-3-Clause
* https://spdx.org/licenses
***********************license end**************************************/


/**
 * @file
 *
 * Configuration and status register (CSR) address and type definitions for
 * OcteonTX CST_APC.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Register (NCB32b) cst_apc#_clusterpmu_pmauthstatus
 *
 * CST Apc Clusterpmu Pmauthstatus Register
 * Provides information about the state of the authentication interface for Performance Monitors.
 */
union cavm_cst_apcx_clusterpmu_pmauthstatus
{
    uint32_t u;
    struct cavm_cst_apcx_clusterpmu_pmauthstatus_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t snid                  : 2;  /**< [  7:  6](RO) Secure Non-invasive Debug.
                                                                 ExternalSecureNoninvasiveDebugEnabled() == ExternalSecureInvasiveDebugEnabled().
                                                                 This field has the same value as the SID field. */
        uint32_t sid                   : 2;  /**< [  5:  4](RO) Secure Invasive Debug. */
        uint32_t nsnid                 : 2;  /**< [  3:  2](RO) Non-secure Non-invasive Debug. */
        uint32_t nsid                  : 2;  /**< [  1:  0](RO) Non-secure Invasive Debug. */
#else /* Word 0 - Little Endian */
        uint32_t nsid                  : 2;  /**< [  1:  0](RO) Non-secure Invasive Debug. */
        uint32_t nsnid                 : 2;  /**< [  3:  2](RO) Non-secure Non-invasive Debug. */
        uint32_t sid                   : 2;  /**< [  5:  4](RO) Secure Invasive Debug. */
        uint32_t snid                  : 2;  /**< [  7:  6](RO) Secure Non-invasive Debug.
                                                                 ExternalSecureNoninvasiveDebugEnabled() == ExternalSecureInvasiveDebugEnabled().
                                                                 This field has the same value as the SID field. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_apcx_clusterpmu_pmauthstatus_s cn; */
};
typedef union cavm_cst_apcx_clusterpmu_pmauthstatus cavm_cst_apcx_clusterpmu_pmauthstatus_t;

static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMAUTHSTATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMAUTHSTATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080210fb8ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080210fb8ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080210fb8ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080210fb8ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_APCX_CLUSTERPMU_PMAUTHSTATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_APCX_CLUSTERPMU_PMAUTHSTATUS(a) cavm_cst_apcx_clusterpmu_pmauthstatus_t
#define bustype_CAVM_CST_APCX_CLUSTERPMU_PMAUTHSTATUS(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_APCX_CLUSTERPMU_PMAUTHSTATUS(a) "CST_APCX_CLUSTERPMU_PMAUTHSTATUS"
#define busnum_CAVM_CST_APCX_CLUSTERPMU_PMAUTHSTATUS(a) (a)
#define arguments_CAVM_CST_APCX_CLUSTERPMU_PMAUTHSTATUS(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_apc#_clusterpmu_pmccfiltr
 *
 * CST Apc Clusterpmu Pmccfiltr Register
 * Determines the modes in which the Cluster Cycle Counter, ext-CLUSTERPMU_PMCCNTR,
 * increments. Unlike the per-core PMUs, the Cluster Cycle Counter always increments.
 */
union cavm_cst_apcx_clusterpmu_pmccfiltr
{
    uint32_t u;
    struct cavm_cst_apcx_clusterpmu_pmccfiltr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_apcx_clusterpmu_pmccfiltr_s cn; */
};
typedef union cavm_cst_apcx_clusterpmu_pmccfiltr cavm_cst_apcx_clusterpmu_pmccfiltr_t;

static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMCCFILTR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMCCFILTR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a08021047cll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a08021047cll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a08021047cll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a08021047cll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_APCX_CLUSTERPMU_PMCCFILTR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_APCX_CLUSTERPMU_PMCCFILTR(a) cavm_cst_apcx_clusterpmu_pmccfiltr_t
#define bustype_CAVM_CST_APCX_CLUSTERPMU_PMCCFILTR(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_APCX_CLUSTERPMU_PMCCFILTR(a) "CST_APCX_CLUSTERPMU_PMCCFILTR"
#define busnum_CAVM_CST_APCX_CLUSTERPMU_PMCCFILTR(a) (a)
#define arguments_CAVM_CST_APCX_CLUSTERPMU_PMCCFILTR(a) (a),-1,-1,-1

/**
 * Register (NCB) cst_apc#_clusterpmu_pmccntr
 *
 * CST Apc Clusterpmu Pmccntr Register
 * Holds the value of the Cluster Cycle Counter, CCNT, that counts processor clock cycles.
 */
union cavm_cst_apcx_clusterpmu_pmccntr
{
    uint64_t u;
    struct cavm_cst_apcx_clusterpmu_pmccntr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ccnt                  : 64; /**< [ 63:  0](R/W) Cycle count. Depending on the values of ext-CLUSTERPMU_PMCR.{LC,D}, the cycle
                                                                 count increments in one of the following ways:
                                                                   - Every processor clock cycle.
                                                                   - Every 64th processor clock cycle.
                                                                 Writing 1 to ext-CLUSTERPMU_PMCR.C sets this field to 0. */
#else /* Word 0 - Little Endian */
        uint64_t ccnt                  : 64; /**< [ 63:  0](R/W) Cycle count. Depending on the values of ext-CLUSTERPMU_PMCR.{LC,D}, the cycle
                                                                 count increments in one of the following ways:
                                                                   - Every processor clock cycle.
                                                                   - Every 64th processor clock cycle.
                                                                 Writing 1 to ext-CLUSTERPMU_PMCR.C sets this field to 0. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_apcx_clusterpmu_pmccntr_s cn; */
};
typedef union cavm_cst_apcx_clusterpmu_pmccntr cavm_cst_apcx_clusterpmu_pmccntr_t;

static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMCCNTR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMCCNTR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a0802100f8ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a0802100f8ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a0802100f8ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a0802100f8ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_APCX_CLUSTERPMU_PMCCNTR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_APCX_CLUSTERPMU_PMCCNTR(a) cavm_cst_apcx_clusterpmu_pmccntr_t
#define bustype_CAVM_CST_APCX_CLUSTERPMU_PMCCNTR(a) CSR_TYPE_NCB
#define basename_CAVM_CST_APCX_CLUSTERPMU_PMCCNTR(a) "CST_APCX_CLUSTERPMU_PMCCNTR"
#define busnum_CAVM_CST_APCX_CLUSTERPMU_PMCCNTR(a) (a)
#define arguments_CAVM_CST_APCX_CLUSTERPMU_PMCCNTR(a) (a),-1,-1,-1

/**
 * Register (NCB) cst_apc#_clusterpmu_pmccntsr
 *
 * CST Apc Clusterpmu Pmccntsr Register
 * Holds the captured copy of ext-CLUSTERPMU_PMCCNTR.  Once captured, the value in ext-
 * CLUSTERPMU_PMCCNTSR is unaffected by writes to ext-CLUSTERPMU_PMCCNTR and ext-
 * CLUSTERPMU_PMCR.C.
 */
union cavm_cst_apcx_clusterpmu_pmccntsr
{
    uint64_t u;
    struct cavm_cst_apcx_clusterpmu_pmccntsr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ccnt                  : 64; /**< [ 63:  0](R/W) Captured cycle count. */
#else /* Word 0 - Little Endian */
        uint64_t ccnt                  : 64; /**< [ 63:  0](R/W) Captured cycle count. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_apcx_clusterpmu_pmccntsr_s cn; */
};
typedef union cavm_cst_apcx_clusterpmu_pmccntsr cavm_cst_apcx_clusterpmu_pmccntsr_t;

static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMCCNTSR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMCCNTSR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080210618ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080210618ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080210618ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080210618ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_APCX_CLUSTERPMU_PMCCNTSR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_APCX_CLUSTERPMU_PMCCNTSR(a) cavm_cst_apcx_clusterpmu_pmccntsr_t
#define bustype_CAVM_CST_APCX_CLUSTERPMU_PMCCNTSR(a) CSR_TYPE_NCB
#define basename_CAVM_CST_APCX_CLUSTERPMU_PMCCNTSR(a) "CST_APCX_CLUSTERPMU_PMCCNTSR"
#define busnum_CAVM_CST_APCX_CLUSTERPMU_PMCCNTSR(a) (a)
#define arguments_CAVM_CST_APCX_CLUSTERPMU_PMCCNTSR(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_apc#_clusterpmu_pmceid0
 *
 * CST Apc Clusterpmu Pmceid0 Register
 * Defines which common architectural events and common microarchitectural  events are
 * implemented, or counted, using PMU events in the range 0x0000 to 0x001F
 *
 * When the value of a bit in the register is 1 the corresponding common event is
 * implemented and counted.
 */
union cavm_cst_apcx_clusterpmu_pmceid0
{
    uint32_t u;
    struct cavm_cst_apcx_clusterpmu_pmceid0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t id31                  : 1;  /**< [ 31: 31](RO) Common event 0x001F implemented. */
        uint32_t id30                  : 1;  /**< [ 30: 30](RO) Common event 0x001E implemented. */
        uint32_t id29                  : 1;  /**< [ 29: 29](RO) Common event 0x001D implemented. */
        uint32_t id28                  : 1;  /**< [ 28: 28](RO) Common event 0x001C implemented. */
        uint32_t id27                  : 1;  /**< [ 27: 27](RO) Common event 0x001B implemented. */
        uint32_t id26                  : 1;  /**< [ 26: 26](RO) Common event 0x001A implemented. */
        uint32_t id25                  : 1;  /**< [ 25: 25](RO) Common event 0x0019 implemented. */
        uint32_t id24                  : 1;  /**< [ 24: 24](RO) Common event 0x0018 implemented. */
        uint32_t id23                  : 1;  /**< [ 23: 23](RO) Common event 0x0017 implemented. */
        uint32_t id22                  : 1;  /**< [ 22: 22](RO) Common event 0x0016 implemented. */
        uint32_t id21                  : 1;  /**< [ 21: 21](RO) Common event 0x0015 implemented. */
        uint32_t id20                  : 1;  /**< [ 20: 20](RO) Common event 0x0014 implemented. */
        uint32_t id19                  : 1;  /**< [ 19: 19](RO) Common event 0x0013 implemented. */
        uint32_t id18                  : 1;  /**< [ 18: 18](RO) Common event 0x0012 implemented. */
        uint32_t id17                  : 1;  /**< [ 17: 17](RO) Common event 0x0011 implemented. */
        uint32_t id16                  : 1;  /**< [ 16: 16](RO) Common event 0x0010 implemented. */
        uint32_t id15                  : 1;  /**< [ 15: 15](RO) Common event 0x000F implemented. */
        uint32_t id14                  : 1;  /**< [ 14: 14](RO) Common event 0x000E implemented. */
        uint32_t id13                  : 1;  /**< [ 13: 13](RO) Common event 0x000D implemented. */
        uint32_t id12                  : 1;  /**< [ 12: 12](RO) Common event 0x000C implemented. */
        uint32_t id11                  : 1;  /**< [ 11: 11](RO) Common event 0x000B implemented. */
        uint32_t id10                  : 1;  /**< [ 10: 10](RO) Common event 0x000A implemented. */
        uint32_t id9                   : 1;  /**< [  9:  9](RO) Common event 0x0009 implemented. */
        uint32_t id8                   : 1;  /**< [  8:  8](RO) Common event 0x0008 implemented. */
        uint32_t id7                   : 1;  /**< [  7:  7](RO) Common event 0x0007 implemented. */
        uint32_t id6                   : 1;  /**< [  6:  6](RO) Common event 0x0006 implemented. */
        uint32_t id5                   : 1;  /**< [  5:  5](RO) Common event 0x0005 implemented. */
        uint32_t id4                   : 1;  /**< [  4:  4](RO) Common event 0x0004 implemented. */
        uint32_t id3                   : 1;  /**< [  3:  3](RO) Common event 0x0003 implemented. */
        uint32_t id2                   : 1;  /**< [  2:  2](RO) Common event 0x0002 implemented. */
        uint32_t id1                   : 1;  /**< [  1:  1](RO) Common event 0x0001 implemented. */
        uint32_t id0                   : 1;  /**< [  0:  0](RO) Common event 0x0000 implemented. */
#else /* Word 0 - Little Endian */
        uint32_t id0                   : 1;  /**< [  0:  0](RO) Common event 0x0000 implemented. */
        uint32_t id1                   : 1;  /**< [  1:  1](RO) Common event 0x0001 implemented. */
        uint32_t id2                   : 1;  /**< [  2:  2](RO) Common event 0x0002 implemented. */
        uint32_t id3                   : 1;  /**< [  3:  3](RO) Common event 0x0003 implemented. */
        uint32_t id4                   : 1;  /**< [  4:  4](RO) Common event 0x0004 implemented. */
        uint32_t id5                   : 1;  /**< [  5:  5](RO) Common event 0x0005 implemented. */
        uint32_t id6                   : 1;  /**< [  6:  6](RO) Common event 0x0006 implemented. */
        uint32_t id7                   : 1;  /**< [  7:  7](RO) Common event 0x0007 implemented. */
        uint32_t id8                   : 1;  /**< [  8:  8](RO) Common event 0x0008 implemented. */
        uint32_t id9                   : 1;  /**< [  9:  9](RO) Common event 0x0009 implemented. */
        uint32_t id10                  : 1;  /**< [ 10: 10](RO) Common event 0x000A implemented. */
        uint32_t id11                  : 1;  /**< [ 11: 11](RO) Common event 0x000B implemented. */
        uint32_t id12                  : 1;  /**< [ 12: 12](RO) Common event 0x000C implemented. */
        uint32_t id13                  : 1;  /**< [ 13: 13](RO) Common event 0x000D implemented. */
        uint32_t id14                  : 1;  /**< [ 14: 14](RO) Common event 0x000E implemented. */
        uint32_t id15                  : 1;  /**< [ 15: 15](RO) Common event 0x000F implemented. */
        uint32_t id16                  : 1;  /**< [ 16: 16](RO) Common event 0x0010 implemented. */
        uint32_t id17                  : 1;  /**< [ 17: 17](RO) Common event 0x0011 implemented. */
        uint32_t id18                  : 1;  /**< [ 18: 18](RO) Common event 0x0012 implemented. */
        uint32_t id19                  : 1;  /**< [ 19: 19](RO) Common event 0x0013 implemented. */
        uint32_t id20                  : 1;  /**< [ 20: 20](RO) Common event 0x0014 implemented. */
        uint32_t id21                  : 1;  /**< [ 21: 21](RO) Common event 0x0015 implemented. */
        uint32_t id22                  : 1;  /**< [ 22: 22](RO) Common event 0x0016 implemented. */
        uint32_t id23                  : 1;  /**< [ 23: 23](RO) Common event 0x0017 implemented. */
        uint32_t id24                  : 1;  /**< [ 24: 24](RO) Common event 0x0018 implemented. */
        uint32_t id25                  : 1;  /**< [ 25: 25](RO) Common event 0x0019 implemented. */
        uint32_t id26                  : 1;  /**< [ 26: 26](RO) Common event 0x001A implemented. */
        uint32_t id27                  : 1;  /**< [ 27: 27](RO) Common event 0x001B implemented. */
        uint32_t id28                  : 1;  /**< [ 28: 28](RO) Common event 0x001C implemented. */
        uint32_t id29                  : 1;  /**< [ 29: 29](RO) Common event 0x001D implemented. */
        uint32_t id30                  : 1;  /**< [ 30: 30](RO) Common event 0x001E implemented. */
        uint32_t id31                  : 1;  /**< [ 31: 31](RO) Common event 0x001F implemented. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_apcx_clusterpmu_pmceid0_s cn; */
};
typedef union cavm_cst_apcx_clusterpmu_pmceid0 cavm_cst_apcx_clusterpmu_pmceid0_t;

static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMCEID0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMCEID0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080210e20ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080210e20ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080210e20ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080210e20ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_APCX_CLUSTERPMU_PMCEID0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_APCX_CLUSTERPMU_PMCEID0(a) cavm_cst_apcx_clusterpmu_pmceid0_t
#define bustype_CAVM_CST_APCX_CLUSTERPMU_PMCEID0(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_APCX_CLUSTERPMU_PMCEID0(a) "CST_APCX_CLUSTERPMU_PMCEID0"
#define busnum_CAVM_CST_APCX_CLUSTERPMU_PMCEID0(a) (a)
#define arguments_CAVM_CST_APCX_CLUSTERPMU_PMCEID0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_apc#_clusterpmu_pmceid1
 *
 * CST Apc Clusterpmu Pmceid1 Register
 * Defines which common architectural events and common microarchitectural  events are
 * implemented, or counted, using PMU events in the range 0x020 to 0x03F.
 *
 * When the value of a bit in the register is 1 the corresponding common event is
 * implemented and counted.
 */
union cavm_cst_apcx_clusterpmu_pmceid1
{
    uint32_t u;
    struct cavm_cst_apcx_clusterpmu_pmceid1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t id31                  : 1;  /**< [ 31: 31](RO) Common event 0x003F implemented. */
        uint32_t id30                  : 1;  /**< [ 30: 30](RO) Common event 0x003E implemented. */
        uint32_t id29                  : 1;  /**< [ 29: 29](RO) Common event 0x003D implemented. */
        uint32_t id28                  : 1;  /**< [ 28: 28](RO) Common event 0x003C implemented. */
        uint32_t id27                  : 1;  /**< [ 27: 27](RO) Common event 0x003B implemented. */
        uint32_t id26                  : 1;  /**< [ 26: 26](RO) Common event 0x003A implemented. */
        uint32_t id25                  : 1;  /**< [ 25: 25](RO) Common event 0x0039 implemented. */
        uint32_t id24                  : 1;  /**< [ 24: 24](RO) Common event 0x0038 implemented. */
        uint32_t id23                  : 1;  /**< [ 23: 23](RO) Common event 0x0037 implemented. */
        uint32_t id22                  : 1;  /**< [ 22: 22](RO) Common event 0x0036 implemented. */
        uint32_t id21                  : 1;  /**< [ 21: 21](RO) Common event 0x0035 implemented. */
        uint32_t id20                  : 1;  /**< [ 20: 20](RO) Common event 0x0034 implemented. */
        uint32_t id19                  : 1;  /**< [ 19: 19](RO) Common event 0x0033 implemented. */
        uint32_t id18                  : 1;  /**< [ 18: 18](RO) Common event 0x0032 implemented. */
        uint32_t id17                  : 1;  /**< [ 17: 17](RO) Common event 0x0031 implemented. */
        uint32_t id16                  : 1;  /**< [ 16: 16](RO) Common event 0x0030 implemented. */
        uint32_t id15                  : 1;  /**< [ 15: 15](RO) Common event 0x002F implemented. */
        uint32_t id14                  : 1;  /**< [ 14: 14](RO) Common event 0x002E implemented. */
        uint32_t id13                  : 1;  /**< [ 13: 13](RO) Common event 0x002D implemented. */
        uint32_t id12                  : 1;  /**< [ 12: 12](RO) Common event 0x002C implemented. */
        uint32_t id11                  : 1;  /**< [ 11: 11](RO) Common event 0x002B implemented. */
        uint32_t id10                  : 1;  /**< [ 10: 10](RO) Common event 0x002A implemented. */
        uint32_t id9                   : 1;  /**< [  9:  9](RO) Common event 0x0029 implemented. */
        uint32_t id8                   : 1;  /**< [  8:  8](RO) Common event 0x0028 implemented. */
        uint32_t id7                   : 1;  /**< [  7:  7](RO) Common event 0x0027 implemented. */
        uint32_t id6                   : 1;  /**< [  6:  6](RO) Common event 0x0026 implemented. */
        uint32_t id5                   : 1;  /**< [  5:  5](RO) Common event 0x0025 implemented. */
        uint32_t id4                   : 1;  /**< [  4:  4](RO) Common event 0x0024 implemented. */
        uint32_t id3                   : 1;  /**< [  3:  3](RO) Common event 0x0023 implemented. */
        uint32_t id2                   : 1;  /**< [  2:  2](RO) Common event 0x0022 implemented. */
        uint32_t id1                   : 1;  /**< [  1:  1](RO) Common event 0x0021 implemented. */
        uint32_t id0                   : 1;  /**< [  0:  0](RO) Common event 0x0020 implemented. */
#else /* Word 0 - Little Endian */
        uint32_t id0                   : 1;  /**< [  0:  0](RO) Common event 0x0020 implemented. */
        uint32_t id1                   : 1;  /**< [  1:  1](RO) Common event 0x0021 implemented. */
        uint32_t id2                   : 1;  /**< [  2:  2](RO) Common event 0x0022 implemented. */
        uint32_t id3                   : 1;  /**< [  3:  3](RO) Common event 0x0023 implemented. */
        uint32_t id4                   : 1;  /**< [  4:  4](RO) Common event 0x0024 implemented. */
        uint32_t id5                   : 1;  /**< [  5:  5](RO) Common event 0x0025 implemented. */
        uint32_t id6                   : 1;  /**< [  6:  6](RO) Common event 0x0026 implemented. */
        uint32_t id7                   : 1;  /**< [  7:  7](RO) Common event 0x0027 implemented. */
        uint32_t id8                   : 1;  /**< [  8:  8](RO) Common event 0x0028 implemented. */
        uint32_t id9                   : 1;  /**< [  9:  9](RO) Common event 0x0029 implemented. */
        uint32_t id10                  : 1;  /**< [ 10: 10](RO) Common event 0x002A implemented. */
        uint32_t id11                  : 1;  /**< [ 11: 11](RO) Common event 0x002B implemented. */
        uint32_t id12                  : 1;  /**< [ 12: 12](RO) Common event 0x002C implemented. */
        uint32_t id13                  : 1;  /**< [ 13: 13](RO) Common event 0x002D implemented. */
        uint32_t id14                  : 1;  /**< [ 14: 14](RO) Common event 0x002E implemented. */
        uint32_t id15                  : 1;  /**< [ 15: 15](RO) Common event 0x002F implemented. */
        uint32_t id16                  : 1;  /**< [ 16: 16](RO) Common event 0x0030 implemented. */
        uint32_t id17                  : 1;  /**< [ 17: 17](RO) Common event 0x0031 implemented. */
        uint32_t id18                  : 1;  /**< [ 18: 18](RO) Common event 0x0032 implemented. */
        uint32_t id19                  : 1;  /**< [ 19: 19](RO) Common event 0x0033 implemented. */
        uint32_t id20                  : 1;  /**< [ 20: 20](RO) Common event 0x0034 implemented. */
        uint32_t id21                  : 1;  /**< [ 21: 21](RO) Common event 0x0035 implemented. */
        uint32_t id22                  : 1;  /**< [ 22: 22](RO) Common event 0x0036 implemented. */
        uint32_t id23                  : 1;  /**< [ 23: 23](RO) Common event 0x0037 implemented. */
        uint32_t id24                  : 1;  /**< [ 24: 24](RO) Common event 0x0038 implemented. */
        uint32_t id25                  : 1;  /**< [ 25: 25](RO) Common event 0x0039 implemented. */
        uint32_t id26                  : 1;  /**< [ 26: 26](RO) Common event 0x003A implemented. */
        uint32_t id27                  : 1;  /**< [ 27: 27](RO) Common event 0x003B implemented. */
        uint32_t id28                  : 1;  /**< [ 28: 28](RO) Common event 0x003C implemented. */
        uint32_t id29                  : 1;  /**< [ 29: 29](RO) Common event 0x003D implemented. */
        uint32_t id30                  : 1;  /**< [ 30: 30](RO) Common event 0x003E implemented. */
        uint32_t id31                  : 1;  /**< [ 31: 31](RO) Common event 0x003F implemented. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_apcx_clusterpmu_pmceid1_s cn; */
};
typedef union cavm_cst_apcx_clusterpmu_pmceid1 cavm_cst_apcx_clusterpmu_pmceid1_t;

static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMCEID1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMCEID1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080210e24ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080210e24ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080210e24ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080210e24ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_APCX_CLUSTERPMU_PMCEID1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_APCX_CLUSTERPMU_PMCEID1(a) cavm_cst_apcx_clusterpmu_pmceid1_t
#define bustype_CAVM_CST_APCX_CLUSTERPMU_PMCEID1(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_APCX_CLUSTERPMU_PMCEID1(a) "CST_APCX_CLUSTERPMU_PMCEID1"
#define busnum_CAVM_CST_APCX_CLUSTERPMU_PMCEID1(a) (a)
#define arguments_CAVM_CST_APCX_CLUSTERPMU_PMCEID1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_apc#_clusterpmu_pmceid2
 *
 * CST Apc Clusterpmu Pmceid2 Register
 * Defines which common architectural events and common microarchitectural  events are
 * implemented, or counted, using PMU events in the range 0x4000 to 0x401F.
 *
 * When the value of a bit in the register is 1 the corresponding common event is
 * implemented and counted.
 */
union cavm_cst_apcx_clusterpmu_pmceid2
{
    uint32_t u;
    struct cavm_cst_apcx_clusterpmu_pmceid2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t idhi31                : 1;  /**< [ 31: 31](RO) Common event 0x401F implemented. */
        uint32_t idhi30                : 1;  /**< [ 30: 30](RO) Common event 0x401E implemented. */
        uint32_t idhi29                : 1;  /**< [ 29: 29](RO) Common event 0x401D implemented. */
        uint32_t idhi28                : 1;  /**< [ 28: 28](RO) Common event 0x401C implemented. */
        uint32_t idhi27                : 1;  /**< [ 27: 27](RO) Common event 0x401B implemented. */
        uint32_t idhi26                : 1;  /**< [ 26: 26](RO) Common event 0x401A implemented. */
        uint32_t idhi25                : 1;  /**< [ 25: 25](RO) Common event 0x4019 implemented. */
        uint32_t idhi24                : 1;  /**< [ 24: 24](RO) Common event 0x4018 implemented. */
        uint32_t idhi23                : 1;  /**< [ 23: 23](RO) Common event 0x4017 implemented. */
        uint32_t idhi22                : 1;  /**< [ 22: 22](RO) Common event 0x4016 implemented. */
        uint32_t idhi21                : 1;  /**< [ 21: 21](RO) Common event 0x4015 implemented. */
        uint32_t idhi20                : 1;  /**< [ 20: 20](RO) Common event 0x4014 implemented. */
        uint32_t idhi19                : 1;  /**< [ 19: 19](RO) Common event 0x4013 implemented. */
        uint32_t idhi18                : 1;  /**< [ 18: 18](RO) Common event 0x4012 implemented. */
        uint32_t idhi17                : 1;  /**< [ 17: 17](RO) Common event 0x4011 implemented. */
        uint32_t idhi16                : 1;  /**< [ 16: 16](RO) Common event 0x4010 implemented. */
        uint32_t idhi15                : 1;  /**< [ 15: 15](RO) Common event 0x400F implemented. */
        uint32_t idhi14                : 1;  /**< [ 14: 14](RO) Common event 0x400E implemented. */
        uint32_t idhi13                : 1;  /**< [ 13: 13](RO) Common event 0x400D implemented. */
        uint32_t idhi12                : 1;  /**< [ 12: 12](RO) Common event 0x400C implemented. */
        uint32_t idhi11                : 1;  /**< [ 11: 11](RO) Common event 0x400B implemented. */
        uint32_t idhi10                : 1;  /**< [ 10: 10](RO) Common event 0x400A implemented. */
        uint32_t idhi9                 : 1;  /**< [  9:  9](RO) Common event 0x4009 implemented. */
        uint32_t idhi8                 : 1;  /**< [  8:  8](RO) Common event 0x4008 implemented. */
        uint32_t idhi7                 : 1;  /**< [  7:  7](RO) Common event 0x4007 implemented. */
        uint32_t idhi6                 : 1;  /**< [  6:  6](RO) Common event 0x4006 implemented. */
        uint32_t idhi5                 : 1;  /**< [  5:  5](RO) Common event 0x4005 implemented. */
        uint32_t idhi4                 : 1;  /**< [  4:  4](RO) Common event 0x4004 implemented. */
        uint32_t idhi3                 : 1;  /**< [  3:  3](RO) Common event 0x4003 implemented. */
        uint32_t idhi2                 : 1;  /**< [  2:  2](RO) Common event 0x4002 implemented. */
        uint32_t idhi1                 : 1;  /**< [  1:  1](RO) Common event 0x4001 implemented. */
        uint32_t idhi0                 : 1;  /**< [  0:  0](RO) Common event 0x4000 implemented. */
#else /* Word 0 - Little Endian */
        uint32_t idhi0                 : 1;  /**< [  0:  0](RO) Common event 0x4000 implemented. */
        uint32_t idhi1                 : 1;  /**< [  1:  1](RO) Common event 0x4001 implemented. */
        uint32_t idhi2                 : 1;  /**< [  2:  2](RO) Common event 0x4002 implemented. */
        uint32_t idhi3                 : 1;  /**< [  3:  3](RO) Common event 0x4003 implemented. */
        uint32_t idhi4                 : 1;  /**< [  4:  4](RO) Common event 0x4004 implemented. */
        uint32_t idhi5                 : 1;  /**< [  5:  5](RO) Common event 0x4005 implemented. */
        uint32_t idhi6                 : 1;  /**< [  6:  6](RO) Common event 0x4006 implemented. */
        uint32_t idhi7                 : 1;  /**< [  7:  7](RO) Common event 0x4007 implemented. */
        uint32_t idhi8                 : 1;  /**< [  8:  8](RO) Common event 0x4008 implemented. */
        uint32_t idhi9                 : 1;  /**< [  9:  9](RO) Common event 0x4009 implemented. */
        uint32_t idhi10                : 1;  /**< [ 10: 10](RO) Common event 0x400A implemented. */
        uint32_t idhi11                : 1;  /**< [ 11: 11](RO) Common event 0x400B implemented. */
        uint32_t idhi12                : 1;  /**< [ 12: 12](RO) Common event 0x400C implemented. */
        uint32_t idhi13                : 1;  /**< [ 13: 13](RO) Common event 0x400D implemented. */
        uint32_t idhi14                : 1;  /**< [ 14: 14](RO) Common event 0x400E implemented. */
        uint32_t idhi15                : 1;  /**< [ 15: 15](RO) Common event 0x400F implemented. */
        uint32_t idhi16                : 1;  /**< [ 16: 16](RO) Common event 0x4010 implemented. */
        uint32_t idhi17                : 1;  /**< [ 17: 17](RO) Common event 0x4011 implemented. */
        uint32_t idhi18                : 1;  /**< [ 18: 18](RO) Common event 0x4012 implemented. */
        uint32_t idhi19                : 1;  /**< [ 19: 19](RO) Common event 0x4013 implemented. */
        uint32_t idhi20                : 1;  /**< [ 20: 20](RO) Common event 0x4014 implemented. */
        uint32_t idhi21                : 1;  /**< [ 21: 21](RO) Common event 0x4015 implemented. */
        uint32_t idhi22                : 1;  /**< [ 22: 22](RO) Common event 0x4016 implemented. */
        uint32_t idhi23                : 1;  /**< [ 23: 23](RO) Common event 0x4017 implemented. */
        uint32_t idhi24                : 1;  /**< [ 24: 24](RO) Common event 0x4018 implemented. */
        uint32_t idhi25                : 1;  /**< [ 25: 25](RO) Common event 0x4019 implemented. */
        uint32_t idhi26                : 1;  /**< [ 26: 26](RO) Common event 0x401A implemented. */
        uint32_t idhi27                : 1;  /**< [ 27: 27](RO) Common event 0x401B implemented. */
        uint32_t idhi28                : 1;  /**< [ 28: 28](RO) Common event 0x401C implemented. */
        uint32_t idhi29                : 1;  /**< [ 29: 29](RO) Common event 0x401D implemented. */
        uint32_t idhi30                : 1;  /**< [ 30: 30](RO) Common event 0x401E implemented. */
        uint32_t idhi31                : 1;  /**< [ 31: 31](RO) Common event 0x401F implemented. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_apcx_clusterpmu_pmceid2_s cn; */
};
typedef union cavm_cst_apcx_clusterpmu_pmceid2 cavm_cst_apcx_clusterpmu_pmceid2_t;

static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMCEID2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMCEID2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080210e28ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080210e28ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080210e28ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080210e28ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_APCX_CLUSTERPMU_PMCEID2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_APCX_CLUSTERPMU_PMCEID2(a) cavm_cst_apcx_clusterpmu_pmceid2_t
#define bustype_CAVM_CST_APCX_CLUSTERPMU_PMCEID2(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_APCX_CLUSTERPMU_PMCEID2(a) "CST_APCX_CLUSTERPMU_PMCEID2"
#define busnum_CAVM_CST_APCX_CLUSTERPMU_PMCEID2(a) (a)
#define arguments_CAVM_CST_APCX_CLUSTERPMU_PMCEID2(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_apc#_clusterpmu_pmceid3
 *
 * CST Apc Clusterpmu Pmceid3 Register
 * Defines which common architectural events and common microarchitectural  events are
 * implemented, or counted, using PMU events in the range 0x4020 to 0x403F.
 *
 * When the value of a bit in the register is 1 the corresponding common event is
 * implemented and counted.
 */
union cavm_cst_apcx_clusterpmu_pmceid3
{
    uint32_t u;
    struct cavm_cst_apcx_clusterpmu_pmceid3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t idhi31                : 1;  /**< [ 31: 31](RO) Common event 0x403F implemented. */
        uint32_t idhi30                : 1;  /**< [ 30: 30](RO) Common event 0x403E implemented. */
        uint32_t idhi29                : 1;  /**< [ 29: 29](RO) Common event 0x403D implemented. */
        uint32_t idhi28                : 1;  /**< [ 28: 28](RO) Common event 0x403C implemented. */
        uint32_t idhi27                : 1;  /**< [ 27: 27](RO) Common event 0x403B implemented. */
        uint32_t idhi26                : 1;  /**< [ 26: 26](RO) Common event 0x403A implemented. */
        uint32_t idhi25                : 1;  /**< [ 25: 25](RO) Common event 0x4039 implemented. */
        uint32_t idhi24                : 1;  /**< [ 24: 24](RO) Common event 0x4038 implemented. */
        uint32_t idhi23                : 1;  /**< [ 23: 23](RO) Common event 0x4037 implemented. */
        uint32_t idhi22                : 1;  /**< [ 22: 22](RO) Common event 0x4036 implemented. */
        uint32_t idhi21                : 1;  /**< [ 21: 21](RO) Common event 0x4035 implemented. */
        uint32_t idhi20                : 1;  /**< [ 20: 20](RO) Common event 0x4034 implemented. */
        uint32_t idhi19                : 1;  /**< [ 19: 19](RO) Common event 0x4033 implemented. */
        uint32_t idhi18                : 1;  /**< [ 18: 18](RO) Common event 0x4032 implemented. */
        uint32_t idhi17                : 1;  /**< [ 17: 17](RO) Common event 0x4031 implemented. */
        uint32_t idhi16                : 1;  /**< [ 16: 16](RO) Common event 0x4030 implemented. */
        uint32_t idhi15                : 1;  /**< [ 15: 15](RO) Common event 0x402F implemented. */
        uint32_t idhi14                : 1;  /**< [ 14: 14](RO) Common event 0x402E implemented. */
        uint32_t idhi13                : 1;  /**< [ 13: 13](RO) Common event 0x402D implemented. */
        uint32_t idhi12                : 1;  /**< [ 12: 12](RO) Common event 0x402C implemented. */
        uint32_t idhi11                : 1;  /**< [ 11: 11](RO) Common event 0x402B implemented. */
        uint32_t idhi10                : 1;  /**< [ 10: 10](RO) Common event 0x402A implemented. */
        uint32_t idhi9                 : 1;  /**< [  9:  9](RO) Common event 0x4029 implemented. */
        uint32_t idhi8                 : 1;  /**< [  8:  8](RO) Common event 0x4028 implemented. */
        uint32_t idhi7                 : 1;  /**< [  7:  7](RO) Common event 0x4027 implemented. */
        uint32_t idhi6                 : 1;  /**< [  6:  6](RO) Common event 0x4026 implemented. */
        uint32_t idhi5                 : 1;  /**< [  5:  5](RO) Common event 0x4025 implemented. */
        uint32_t idhi4                 : 1;  /**< [  4:  4](RO) Common event 0x4024 implemented. */
        uint32_t idhi3                 : 1;  /**< [  3:  3](RO) Common event 0x4023 implemented. */
        uint32_t idhi2                 : 1;  /**< [  2:  2](RO) Common event 0x4022 implemented. */
        uint32_t idhi1                 : 1;  /**< [  1:  1](RO) Common event 0x4021 implemented. */
        uint32_t idhi0                 : 1;  /**< [  0:  0](RO) Common event 0x4020 implemented. */
#else /* Word 0 - Little Endian */
        uint32_t idhi0                 : 1;  /**< [  0:  0](RO) Common event 0x4020 implemented. */
        uint32_t idhi1                 : 1;  /**< [  1:  1](RO) Common event 0x4021 implemented. */
        uint32_t idhi2                 : 1;  /**< [  2:  2](RO) Common event 0x4022 implemented. */
        uint32_t idhi3                 : 1;  /**< [  3:  3](RO) Common event 0x4023 implemented. */
        uint32_t idhi4                 : 1;  /**< [  4:  4](RO) Common event 0x4024 implemented. */
        uint32_t idhi5                 : 1;  /**< [  5:  5](RO) Common event 0x4025 implemented. */
        uint32_t idhi6                 : 1;  /**< [  6:  6](RO) Common event 0x4026 implemented. */
        uint32_t idhi7                 : 1;  /**< [  7:  7](RO) Common event 0x4027 implemented. */
        uint32_t idhi8                 : 1;  /**< [  8:  8](RO) Common event 0x4028 implemented. */
        uint32_t idhi9                 : 1;  /**< [  9:  9](RO) Common event 0x4029 implemented. */
        uint32_t idhi10                : 1;  /**< [ 10: 10](RO) Common event 0x402A implemented. */
        uint32_t idhi11                : 1;  /**< [ 11: 11](RO) Common event 0x402B implemented. */
        uint32_t idhi12                : 1;  /**< [ 12: 12](RO) Common event 0x402C implemented. */
        uint32_t idhi13                : 1;  /**< [ 13: 13](RO) Common event 0x402D implemented. */
        uint32_t idhi14                : 1;  /**< [ 14: 14](RO) Common event 0x402E implemented. */
        uint32_t idhi15                : 1;  /**< [ 15: 15](RO) Common event 0x402F implemented. */
        uint32_t idhi16                : 1;  /**< [ 16: 16](RO) Common event 0x4030 implemented. */
        uint32_t idhi17                : 1;  /**< [ 17: 17](RO) Common event 0x4031 implemented. */
        uint32_t idhi18                : 1;  /**< [ 18: 18](RO) Common event 0x4032 implemented. */
        uint32_t idhi19                : 1;  /**< [ 19: 19](RO) Common event 0x4033 implemented. */
        uint32_t idhi20                : 1;  /**< [ 20: 20](RO) Common event 0x4034 implemented. */
        uint32_t idhi21                : 1;  /**< [ 21: 21](RO) Common event 0x4035 implemented. */
        uint32_t idhi22                : 1;  /**< [ 22: 22](RO) Common event 0x4036 implemented. */
        uint32_t idhi23                : 1;  /**< [ 23: 23](RO) Common event 0x4037 implemented. */
        uint32_t idhi24                : 1;  /**< [ 24: 24](RO) Common event 0x4038 implemented. */
        uint32_t idhi25                : 1;  /**< [ 25: 25](RO) Common event 0x4039 implemented. */
        uint32_t idhi26                : 1;  /**< [ 26: 26](RO) Common event 0x403A implemented. */
        uint32_t idhi27                : 1;  /**< [ 27: 27](RO) Common event 0x403B implemented. */
        uint32_t idhi28                : 1;  /**< [ 28: 28](RO) Common event 0x403C implemented. */
        uint32_t idhi29                : 1;  /**< [ 29: 29](RO) Common event 0x403D implemented. */
        uint32_t idhi30                : 1;  /**< [ 30: 30](RO) Common event 0x403E implemented. */
        uint32_t idhi31                : 1;  /**< [ 31: 31](RO) Common event 0x403F implemented. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_apcx_clusterpmu_pmceid3_s cn; */
};
typedef union cavm_cst_apcx_clusterpmu_pmceid3 cavm_cst_apcx_clusterpmu_pmceid3_t;

static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMCEID3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMCEID3(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080210e2cll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080210e2cll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080210e2cll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080210e2cll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_APCX_CLUSTERPMU_PMCEID3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_APCX_CLUSTERPMU_PMCEID3(a) cavm_cst_apcx_clusterpmu_pmceid3_t
#define bustype_CAVM_CST_APCX_CLUSTERPMU_PMCEID3(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_APCX_CLUSTERPMU_PMCEID3(a) "CST_APCX_CLUSTERPMU_PMCEID3"
#define busnum_CAVM_CST_APCX_CLUSTERPMU_PMCEID3(a) (a)
#define arguments_CAVM_CST_APCX_CLUSTERPMU_PMCEID3(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_apc#_clusterpmu_pmcfgr
 *
 * CST Apc Clusterpmu Pmcfgr Register
 * Contains PMU-specific configuration data.
 */
union cavm_cst_apcx_clusterpmu_pmcfgr
{
    uint32_t u;
    struct cavm_cst_apcx_clusterpmu_pmcfgr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_20_31        : 12;
        uint32_t uen                   : 1;  /**< [ 19: 19](RO) User-mode Enable Register supported. */
        uint32_t reserved_17_18        : 2;
        uint32_t ex                    : 1;  /**< [ 16: 16](RO) Export supported. */
        uint32_t ccd                   : 1;  /**< [ 15: 15](RO) Cycle counter has prescale. */
        uint32_t cc                    : 1;  /**< [ 14: 14](RO) Dedicated cycle counter. */
        uint32_t size                  : 6;  /**< [ 13:  8](RO) Size of counters, minus one. This field defines the size of the largest counter
                                                                 implemented by the Performance Monitors Unit.
                                                                 This field is used by software to determine the spacing of the counters in the memory-map. */
        uint32_t n                     : 8;  /**< [  7:  0](RO) Number of counters implemented in addition to the cycle counter, ext-CLUSTERPMU_PMCCNTR. */
#else /* Word 0 - Little Endian */
        uint32_t n                     : 8;  /**< [  7:  0](RO) Number of counters implemented in addition to the cycle counter, ext-CLUSTERPMU_PMCCNTR. */
        uint32_t size                  : 6;  /**< [ 13:  8](RO) Size of counters, minus one. This field defines the size of the largest counter
                                                                 implemented by the Performance Monitors Unit.
                                                                 This field is used by software to determine the spacing of the counters in the memory-map. */
        uint32_t cc                    : 1;  /**< [ 14: 14](RO) Dedicated cycle counter. */
        uint32_t ccd                   : 1;  /**< [ 15: 15](RO) Cycle counter has prescale. */
        uint32_t ex                    : 1;  /**< [ 16: 16](RO) Export supported. */
        uint32_t reserved_17_18        : 2;
        uint32_t uen                   : 1;  /**< [ 19: 19](RO) User-mode Enable Register supported. */
        uint32_t reserved_20_31        : 12;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_apcx_clusterpmu_pmcfgr_s cn; */
};
typedef union cavm_cst_apcx_clusterpmu_pmcfgr cavm_cst_apcx_clusterpmu_pmcfgr_t;

static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMCFGR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMCFGR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080210e00ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080210e00ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080210e00ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080210e00ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_APCX_CLUSTERPMU_PMCFGR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_APCX_CLUSTERPMU_PMCFGR(a) cavm_cst_apcx_clusterpmu_pmcfgr_t
#define bustype_CAVM_CST_APCX_CLUSTERPMU_PMCFGR(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_APCX_CLUSTERPMU_PMCFGR(a) "CST_APCX_CLUSTERPMU_PMCFGR"
#define busnum_CAVM_CST_APCX_CLUSTERPMU_PMCFGR(a) (a)
#define arguments_CAVM_CST_APCX_CLUSTERPMU_PMCFGR(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_apc#_clusterpmu_pmcidr0
 *
 * CST Apc Clusterpmu Pmcidr0 Register
 * Provides information to identify a Performance Monitor component.
 */
union cavm_cst_apcx_clusterpmu_pmcidr0
{
    uint32_t u;
    struct cavm_cst_apcx_clusterpmu_pmcidr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t prmbl_0               : 8;  /**< [  7:  0](RO) Preamble. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_0               : 8;  /**< [  7:  0](RO) Preamble. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_apcx_clusterpmu_pmcidr0_s cn; */
};
typedef union cavm_cst_apcx_clusterpmu_pmcidr0 cavm_cst_apcx_clusterpmu_pmcidr0_t;

static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMCIDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMCIDR0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080210ff0ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080210ff0ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080210ff0ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080210ff0ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_APCX_CLUSTERPMU_PMCIDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_APCX_CLUSTERPMU_PMCIDR0(a) cavm_cst_apcx_clusterpmu_pmcidr0_t
#define bustype_CAVM_CST_APCX_CLUSTERPMU_PMCIDR0(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_APCX_CLUSTERPMU_PMCIDR0(a) "CST_APCX_CLUSTERPMU_PMCIDR0"
#define busnum_CAVM_CST_APCX_CLUSTERPMU_PMCIDR0(a) (a)
#define arguments_CAVM_CST_APCX_CLUSTERPMU_PMCIDR0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_apc#_clusterpmu_pmcidr1
 *
 * CST Apc Clusterpmu Pmcidr1 Register
 * Provides information to identify a Performance Monitor component.
 */
union cavm_cst_apcx_clusterpmu_pmcidr1
{
    uint32_t u;
    struct cavm_cst_apcx_clusterpmu_pmcidr1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t class_f               : 4;  /**< [  7:  4](RO) Component class. */
        uint32_t prmbl_1               : 4;  /**< [  3:  0](RO) Preamble. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_1               : 4;  /**< [  3:  0](RO) Preamble. */
        uint32_t class_f               : 4;  /**< [  7:  4](RO) Component class. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_apcx_clusterpmu_pmcidr1_s cn; */
};
typedef union cavm_cst_apcx_clusterpmu_pmcidr1 cavm_cst_apcx_clusterpmu_pmcidr1_t;

static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMCIDR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMCIDR1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080210ff4ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080210ff4ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080210ff4ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080210ff4ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_APCX_CLUSTERPMU_PMCIDR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_APCX_CLUSTERPMU_PMCIDR1(a) cavm_cst_apcx_clusterpmu_pmcidr1_t
#define bustype_CAVM_CST_APCX_CLUSTERPMU_PMCIDR1(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_APCX_CLUSTERPMU_PMCIDR1(a) "CST_APCX_CLUSTERPMU_PMCIDR1"
#define busnum_CAVM_CST_APCX_CLUSTERPMU_PMCIDR1(a) (a)
#define arguments_CAVM_CST_APCX_CLUSTERPMU_PMCIDR1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_apc#_clusterpmu_pmcidr2
 *
 * CST Apc Clusterpmu Pmcidr2 Register
 * Provides information to identify a Performance Monitor component.
 */
union cavm_cst_apcx_clusterpmu_pmcidr2
{
    uint32_t u;
    struct cavm_cst_apcx_clusterpmu_pmcidr2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t prmbl_2               : 8;  /**< [  7:  0](RO) Preamble. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_2               : 8;  /**< [  7:  0](RO) Preamble. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_apcx_clusterpmu_pmcidr2_s cn; */
};
typedef union cavm_cst_apcx_clusterpmu_pmcidr2 cavm_cst_apcx_clusterpmu_pmcidr2_t;

static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMCIDR2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMCIDR2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080210ff8ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080210ff8ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080210ff8ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080210ff8ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_APCX_CLUSTERPMU_PMCIDR2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_APCX_CLUSTERPMU_PMCIDR2(a) cavm_cst_apcx_clusterpmu_pmcidr2_t
#define bustype_CAVM_CST_APCX_CLUSTERPMU_PMCIDR2(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_APCX_CLUSTERPMU_PMCIDR2(a) "CST_APCX_CLUSTERPMU_PMCIDR2"
#define busnum_CAVM_CST_APCX_CLUSTERPMU_PMCIDR2(a) (a)
#define arguments_CAVM_CST_APCX_CLUSTERPMU_PMCIDR2(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_apc#_clusterpmu_pmcidr3
 *
 * CST Apc Clusterpmu Pmcidr3 Register
 * Provides information to identify a Performance Monitor component.
 */
union cavm_cst_apcx_clusterpmu_pmcidr3
{
    uint32_t u;
    struct cavm_cst_apcx_clusterpmu_pmcidr3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t prmbl_3               : 8;  /**< [  7:  0](RO) Preamble. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_3               : 8;  /**< [  7:  0](RO) Preamble. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_apcx_clusterpmu_pmcidr3_s cn; */
};
typedef union cavm_cst_apcx_clusterpmu_pmcidr3 cavm_cst_apcx_clusterpmu_pmcidr3_t;

static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMCIDR3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMCIDR3(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080210ffcll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080210ffcll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080210ffcll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080210ffcll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_APCX_CLUSTERPMU_PMCIDR3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_APCX_CLUSTERPMU_PMCIDR3(a) cavm_cst_apcx_clusterpmu_pmcidr3_t
#define bustype_CAVM_CST_APCX_CLUSTERPMU_PMCIDR3(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_APCX_CLUSTERPMU_PMCIDR3(a) "CST_APCX_CLUSTERPMU_PMCIDR3"
#define busnum_CAVM_CST_APCX_CLUSTERPMU_PMCIDR3(a) (a)
#define arguments_CAVM_CST_APCX_CLUSTERPMU_PMCIDR3(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_apc#_clusterpmu_pmclaimclr
 *
 * CST Apc Clusterpmu Pmclaimclr Register
 * Used by software to read the values of the CLAIM bits, and to clear these bits to 0.
 */
union cavm_cst_apcx_clusterpmu_pmclaimclr
{
    uint32_t u;
    struct cavm_cst_apcx_clusterpmu_pmclaimclr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_4_31         : 28;
        uint32_t claim3                : 1;  /**< [  3:  3](R/W) CLAIM tag clear bit. */
        uint32_t claim2                : 1;  /**< [  2:  2](R/W) CLAIM tag clear bit. */
        uint32_t claim1                : 1;  /**< [  1:  1](R/W) CLAIM tag clear bit. */
        uint32_t claim0                : 1;  /**< [  0:  0](R/W) CLAIM tag clear bit. */
#else /* Word 0 - Little Endian */
        uint32_t claim0                : 1;  /**< [  0:  0](R/W) CLAIM tag clear bit. */
        uint32_t claim1                : 1;  /**< [  1:  1](R/W) CLAIM tag clear bit. */
        uint32_t claim2                : 1;  /**< [  2:  2](R/W) CLAIM tag clear bit. */
        uint32_t claim3                : 1;  /**< [  3:  3](R/W) CLAIM tag clear bit. */
        uint32_t reserved_4_31         : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_apcx_clusterpmu_pmclaimclr_s cn; */
};
typedef union cavm_cst_apcx_clusterpmu_pmclaimclr cavm_cst_apcx_clusterpmu_pmclaimclr_t;

static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMCLAIMCLR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMCLAIMCLR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080210fa4ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080210fa4ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080210fa4ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080210fa4ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_APCX_CLUSTERPMU_PMCLAIMCLR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_APCX_CLUSTERPMU_PMCLAIMCLR(a) cavm_cst_apcx_clusterpmu_pmclaimclr_t
#define bustype_CAVM_CST_APCX_CLUSTERPMU_PMCLAIMCLR(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_APCX_CLUSTERPMU_PMCLAIMCLR(a) "CST_APCX_CLUSTERPMU_PMCLAIMCLR"
#define busnum_CAVM_CST_APCX_CLUSTERPMU_PMCLAIMCLR(a) (a)
#define arguments_CAVM_CST_APCX_CLUSTERPMU_PMCLAIMCLR(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_apc#_clusterpmu_pmclaimset
 *
 * CST Apc Clusterpmu Pmclaimset Register
 * Used by software to set CLAIM bits to 1.
 */
union cavm_cst_apcx_clusterpmu_pmclaimset
{
    uint32_t u;
    struct cavm_cst_apcx_clusterpmu_pmclaimset_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_4_31         : 28;
        uint32_t claim3                : 1;  /**< [  3:  3](R/W) CLAIM tag set bit. */
        uint32_t claim2                : 1;  /**< [  2:  2](R/W) CLAIM tag set bit. */
        uint32_t claim1                : 1;  /**< [  1:  1](R/W) CLAIM tag set bit. */
        uint32_t claim0                : 1;  /**< [  0:  0](R/W) CLAIM tag set bit. */
#else /* Word 0 - Little Endian */
        uint32_t claim0                : 1;  /**< [  0:  0](R/W) CLAIM tag set bit. */
        uint32_t claim1                : 1;  /**< [  1:  1](R/W) CLAIM tag set bit. */
        uint32_t claim2                : 1;  /**< [  2:  2](R/W) CLAIM tag set bit. */
        uint32_t claim3                : 1;  /**< [  3:  3](R/W) CLAIM tag set bit. */
        uint32_t reserved_4_31         : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_apcx_clusterpmu_pmclaimset_s cn; */
};
typedef union cavm_cst_apcx_clusterpmu_pmclaimset cavm_cst_apcx_clusterpmu_pmclaimset_t;

static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMCLAIMSET(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMCLAIMSET(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080210fa0ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080210fa0ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080210fa0ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080210fa0ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_APCX_CLUSTERPMU_PMCLAIMSET", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_APCX_CLUSTERPMU_PMCLAIMSET(a) cavm_cst_apcx_clusterpmu_pmclaimset_t
#define bustype_CAVM_CST_APCX_CLUSTERPMU_PMCLAIMSET(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_APCX_CLUSTERPMU_PMCLAIMSET(a) "CST_APCX_CLUSTERPMU_PMCLAIMSET"
#define busnum_CAVM_CST_APCX_CLUSTERPMU_PMCLAIMSET(a) (a)
#define arguments_CAVM_CST_APCX_CLUSTERPMU_PMCLAIMSET(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_apc#_clusterpmu_pmcntenclr
 *
 * CST Apc Clusterpmu Pmcntenclr Register
 * Disables the Cycle Count Register, ext-CLUSTERPMU_PMCCNTR, and any implemented event
 * counters AArch64-IMP_CLUSTERPMEVCNTR&lt;n&gt;.
 */
union cavm_cst_apcx_clusterpmu_pmcntenclr
{
    uint32_t u;
    struct cavm_cst_apcx_clusterpmu_pmcntenclr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t c_f                   : 1;  /**< [ 31: 31](R/W) Ext-CLUSTERPMU_PMCCNTR disable bit. Disables the cycle counter register. */
        uint32_t raz_wi                : 25; /**< [ 30:  6](R/W) This field is RAZWI */
        uint32_t p5                    : 1;  /**< [  5:  5](R/W) Event counter disable bit for ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;.
                                                                 If ext-CLUSTERPMU_PMCFGR.N is less than 31, bits [30:ext-CLUSTERPMU_PMCFGR.N] are RAZ/WI. */
        uint32_t p4                    : 1;  /**< [  4:  4](R/W) Event counter disable bit for ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;.
                                                                 If ext-CLUSTERPMU_PMCFGR.N is less than 31, bits [30:ext-CLUSTERPMU_PMCFGR.N] are RAZ/WI. */
        uint32_t p3                    : 1;  /**< [  3:  3](R/W) Event counter disable bit for ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;.
                                                                 If ext-CLUSTERPMU_PMCFGR.N is less than 31, bits [30:ext-CLUSTERPMU_PMCFGR.N] are RAZ/WI. */
        uint32_t p2                    : 1;  /**< [  2:  2](R/W) Event counter disable bit for ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;.
                                                                 If ext-CLUSTERPMU_PMCFGR.N is less than 31, bits [30:ext-CLUSTERPMU_PMCFGR.N] are RAZ/WI. */
        uint32_t p1                    : 1;  /**< [  1:  1](R/W) Event counter disable bit for ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;.
                                                                 If ext-CLUSTERPMU_PMCFGR.N is less than 31, bits [30:ext-CLUSTERPMU_PMCFGR.N] are RAZ/WI. */
        uint32_t p0                    : 1;  /**< [  0:  0](R/W) Event counter disable bit for ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;.
                                                                 If ext-CLUSTERPMU_PMCFGR.N is less than 31, bits [30:ext-CLUSTERPMU_PMCFGR.N] are RAZ/WI. */
#else /* Word 0 - Little Endian */
        uint32_t p0                    : 1;  /**< [  0:  0](R/W) Event counter disable bit for ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;.
                                                                 If ext-CLUSTERPMU_PMCFGR.N is less than 31, bits [30:ext-CLUSTERPMU_PMCFGR.N] are RAZ/WI. */
        uint32_t p1                    : 1;  /**< [  1:  1](R/W) Event counter disable bit for ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;.
                                                                 If ext-CLUSTERPMU_PMCFGR.N is less than 31, bits [30:ext-CLUSTERPMU_PMCFGR.N] are RAZ/WI. */
        uint32_t p2                    : 1;  /**< [  2:  2](R/W) Event counter disable bit for ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;.
                                                                 If ext-CLUSTERPMU_PMCFGR.N is less than 31, bits [30:ext-CLUSTERPMU_PMCFGR.N] are RAZ/WI. */
        uint32_t p3                    : 1;  /**< [  3:  3](R/W) Event counter disable bit for ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;.
                                                                 If ext-CLUSTERPMU_PMCFGR.N is less than 31, bits [30:ext-CLUSTERPMU_PMCFGR.N] are RAZ/WI. */
        uint32_t p4                    : 1;  /**< [  4:  4](R/W) Event counter disable bit for ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;.
                                                                 If ext-CLUSTERPMU_PMCFGR.N is less than 31, bits [30:ext-CLUSTERPMU_PMCFGR.N] are RAZ/WI. */
        uint32_t p5                    : 1;  /**< [  5:  5](R/W) Event counter disable bit for ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;.
                                                                 If ext-CLUSTERPMU_PMCFGR.N is less than 31, bits [30:ext-CLUSTERPMU_PMCFGR.N] are RAZ/WI. */
        uint32_t raz_wi                : 25; /**< [ 30:  6](R/W) This field is RAZWI */
        uint32_t c_f                   : 1;  /**< [ 31: 31](R/W) Ext-CLUSTERPMU_PMCCNTR disable bit. Disables the cycle counter register. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_apcx_clusterpmu_pmcntenclr_s cn; */
};
typedef union cavm_cst_apcx_clusterpmu_pmcntenclr cavm_cst_apcx_clusterpmu_pmcntenclr_t;

static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMCNTENCLR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMCNTENCLR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080210c20ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080210c20ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080210c20ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080210c20ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_APCX_CLUSTERPMU_PMCNTENCLR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_APCX_CLUSTERPMU_PMCNTENCLR(a) cavm_cst_apcx_clusterpmu_pmcntenclr_t
#define bustype_CAVM_CST_APCX_CLUSTERPMU_PMCNTENCLR(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_APCX_CLUSTERPMU_PMCNTENCLR(a) "CST_APCX_CLUSTERPMU_PMCNTENCLR"
#define busnum_CAVM_CST_APCX_CLUSTERPMU_PMCNTENCLR(a) (a)
#define arguments_CAVM_CST_APCX_CLUSTERPMU_PMCNTENCLR(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_apc#_clusterpmu_pmcntenset
 *
 * CST Apc Clusterpmu Pmcntenset Register
 * Enables the Cycle Count Register, ext-CLUSTERPMU_PMCCNTR, and any implemented event
 * counters AArch64-IMP_CLUSTERPMEVCNTR&lt;n&gt;.
 */
union cavm_cst_apcx_clusterpmu_pmcntenset
{
    uint32_t u;
    struct cavm_cst_apcx_clusterpmu_pmcntenset_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t c_f                   : 1;  /**< [ 31: 31](R/W) Ext-CLUSTERPMU_PMCCNTR enable bit. Enables the cycle counter register. */
        uint32_t raz_wi                : 25; /**< [ 30:  6](R/W) This field is RAZWI */
        uint32_t p5                    : 1;  /**< [  5:  5](R/W) Event counter enable bit for ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;.
                                                                 If ext-CLUSTERPMU_PMCFGR.N is less than 31, bits [30:ext-CLUSTERPMU_PMCFGR.N] are RAZ/WI. */
        uint32_t p4                    : 1;  /**< [  4:  4](R/W) Event counter enable bit for ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;.
                                                                 If ext-CLUSTERPMU_PMCFGR.N is less than 31, bits [30:ext-CLUSTERPMU_PMCFGR.N] are RAZ/WI. */
        uint32_t p3                    : 1;  /**< [  3:  3](R/W) Event counter enable bit for ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;.
                                                                 If ext-CLUSTERPMU_PMCFGR.N is less than 31, bits [30:ext-CLUSTERPMU_PMCFGR.N] are RAZ/WI. */
        uint32_t p2                    : 1;  /**< [  2:  2](R/W) Event counter enable bit for ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;.
                                                                 If ext-CLUSTERPMU_PMCFGR.N is less than 31, bits [30:ext-CLUSTERPMU_PMCFGR.N] are RAZ/WI. */
        uint32_t p1                    : 1;  /**< [  1:  1](R/W) Event counter enable bit for ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;.
                                                                 If ext-CLUSTERPMU_PMCFGR.N is less than 31, bits [30:ext-CLUSTERPMU_PMCFGR.N] are RAZ/WI. */
        uint32_t p0                    : 1;  /**< [  0:  0](R/W) Event counter enable bit for ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;.
                                                                 If ext-CLUSTERPMU_PMCFGR.N is less than 31, bits [30:ext-CLUSTERPMU_PMCFGR.N] are RAZ/WI. */
#else /* Word 0 - Little Endian */
        uint32_t p0                    : 1;  /**< [  0:  0](R/W) Event counter enable bit for ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;.
                                                                 If ext-CLUSTERPMU_PMCFGR.N is less than 31, bits [30:ext-CLUSTERPMU_PMCFGR.N] are RAZ/WI. */
        uint32_t p1                    : 1;  /**< [  1:  1](R/W) Event counter enable bit for ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;.
                                                                 If ext-CLUSTERPMU_PMCFGR.N is less than 31, bits [30:ext-CLUSTERPMU_PMCFGR.N] are RAZ/WI. */
        uint32_t p2                    : 1;  /**< [  2:  2](R/W) Event counter enable bit for ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;.
                                                                 If ext-CLUSTERPMU_PMCFGR.N is less than 31, bits [30:ext-CLUSTERPMU_PMCFGR.N] are RAZ/WI. */
        uint32_t p3                    : 1;  /**< [  3:  3](R/W) Event counter enable bit for ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;.
                                                                 If ext-CLUSTERPMU_PMCFGR.N is less than 31, bits [30:ext-CLUSTERPMU_PMCFGR.N] are RAZ/WI. */
        uint32_t p4                    : 1;  /**< [  4:  4](R/W) Event counter enable bit for ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;.
                                                                 If ext-CLUSTERPMU_PMCFGR.N is less than 31, bits [30:ext-CLUSTERPMU_PMCFGR.N] are RAZ/WI. */
        uint32_t p5                    : 1;  /**< [  5:  5](R/W) Event counter enable bit for ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;.
                                                                 If ext-CLUSTERPMU_PMCFGR.N is less than 31, bits [30:ext-CLUSTERPMU_PMCFGR.N] are RAZ/WI. */
        uint32_t raz_wi                : 25; /**< [ 30:  6](R/W) This field is RAZWI */
        uint32_t c_f                   : 1;  /**< [ 31: 31](R/W) Ext-CLUSTERPMU_PMCCNTR enable bit. Enables the cycle counter register. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_apcx_clusterpmu_pmcntenset_s cn; */
};
typedef union cavm_cst_apcx_clusterpmu_pmcntenset cavm_cst_apcx_clusterpmu_pmcntenset_t;

static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMCNTENSET(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMCNTENSET(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080210c00ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080210c00ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080210c00ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080210c00ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_APCX_CLUSTERPMU_PMCNTENSET", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_APCX_CLUSTERPMU_PMCNTENSET(a) cavm_cst_apcx_clusterpmu_pmcntenset_t
#define bustype_CAVM_CST_APCX_CLUSTERPMU_PMCNTENSET(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_APCX_CLUSTERPMU_PMCNTENSET(a) "CST_APCX_CLUSTERPMU_PMCNTENSET"
#define busnum_CAVM_CST_APCX_CLUSTERPMU_PMCNTENSET(a) (a)
#define arguments_CAVM_CST_APCX_CLUSTERPMU_PMCNTENSET(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_apc#_clusterpmu_pmcr
 *
 * CST Apc Clusterpmu Pmcr Register
 * Provides details of the Performance Monitors implementation, including the number of
 * counters implemented, and configures and controls the counters.
 */
union cavm_cst_apcx_clusterpmu_pmcr
{
    uint32_t u;
    struct cavm_cst_apcx_clusterpmu_pmcr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_5_31         : 27;
        uint32_t x                     : 1;  /**< [  4:  4](R/W) This field enables the exporting of events over an event bus to another device. */
        uint32_t reserved_3            : 1;
        uint32_t c_f                   : 1;  /**< [  2:  2](R/W) Cycle counter reset. This bit is WO.
                                                                 This bit is always RAZ.
                                                                 [note]Resetting ext-CLUSTERPMU_PMCCNTR does not change the cycle counter overflow bit.[/note] */
        uint32_t p                     : 1;  /**< [  1:  1](R/W) Event counter reset. This bit is WO.
                                                                 This bit is always RAZ.
                                                                 [note]Resetting the event counters does not change the event counter overflow bits.[/note] */
        uint32_t e_f                   : 1;  /**< [  0:  0](R/W) Enable.
                                                                 This bit is RW. */
#else /* Word 0 - Little Endian */
        uint32_t e_f                   : 1;  /**< [  0:  0](R/W) Enable.
                                                                 This bit is RW. */
        uint32_t p                     : 1;  /**< [  1:  1](R/W) Event counter reset. This bit is WO.
                                                                 This bit is always RAZ.
                                                                 [note]Resetting the event counters does not change the event counter overflow bits.[/note] */
        uint32_t c_f                   : 1;  /**< [  2:  2](R/W) Cycle counter reset. This bit is WO.
                                                                 This bit is always RAZ.
                                                                 [note]Resetting ext-CLUSTERPMU_PMCCNTR does not change the cycle counter overflow bit.[/note] */
        uint32_t reserved_3            : 1;
        uint32_t x                     : 1;  /**< [  4:  4](R/W) This field enables the exporting of events over an event bus to another device. */
        uint32_t reserved_5_31         : 27;
#endif /* Word 0 - End */
    } s;
    struct cavm_cst_apcx_clusterpmu_pmcr_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t reserved_6_7          : 2;
        uint32_t reserved_5            : 1;
        uint32_t x                     : 1;  /**< [  4:  4](R/W) This field enables the exporting of events over an event bus to another device. */
        uint32_t reserved_3            : 1;
        uint32_t c_f                   : 1;  /**< [  2:  2](R/W) Cycle counter reset. This bit is WO.
                                                                 This bit is always RAZ.
                                                                 [note]Resetting ext-CLUSTERPMU_PMCCNTR does not change the cycle counter overflow bit.[/note] */
        uint32_t p                     : 1;  /**< [  1:  1](R/W) Event counter reset. This bit is WO.
                                                                 This bit is always RAZ.
                                                                 [note]Resetting the event counters does not change the event counter overflow bits.[/note] */
        uint32_t e_f                   : 1;  /**< [  0:  0](R/W) Enable.
                                                                 This bit is RW. */
#else /* Word 0 - Little Endian */
        uint32_t e_f                   : 1;  /**< [  0:  0](R/W) Enable.
                                                                 This bit is RW. */
        uint32_t p                     : 1;  /**< [  1:  1](R/W) Event counter reset. This bit is WO.
                                                                 This bit is always RAZ.
                                                                 [note]Resetting the event counters does not change the event counter overflow bits.[/note] */
        uint32_t c_f                   : 1;  /**< [  2:  2](R/W) Cycle counter reset. This bit is WO.
                                                                 This bit is always RAZ.
                                                                 [note]Resetting ext-CLUSTERPMU_PMCCNTR does not change the cycle counter overflow bit.[/note] */
        uint32_t reserved_3            : 1;
        uint32_t x                     : 1;  /**< [  4:  4](R/W) This field enables the exporting of events over an event bus to another device. */
        uint32_t reserved_5            : 1;
        uint32_t reserved_6_7          : 2;
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_cst_apcx_clusterpmu_pmcr cavm_cst_apcx_clusterpmu_pmcr_t;

static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMCR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMCR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080210e04ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080210e04ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080210e04ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080210e04ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_APCX_CLUSTERPMU_PMCR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_APCX_CLUSTERPMU_PMCR(a) cavm_cst_apcx_clusterpmu_pmcr_t
#define bustype_CAVM_CST_APCX_CLUSTERPMU_PMCR(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_APCX_CLUSTERPMU_PMCR(a) "CST_APCX_CLUSTERPMU_PMCR"
#define busnum_CAVM_CST_APCX_CLUSTERPMU_PMCR(a) (a)
#define arguments_CAVM_CST_APCX_CLUSTERPMU_PMCR(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_apc#_clusterpmu_pmdevaff0
 *
 * CST Apc Clusterpmu Pmdevaff0 Register
 * Allows a debugger to determine which PE in a multiprocessor system the Performance
 * Monitor component relates to.
 */
union cavm_cst_apcx_clusterpmu_pmdevaff0
{
    uint32_t u;
    struct cavm_cst_apcx_clusterpmu_pmdevaff0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_31           : 1;
        uint32_t u                     : 1;  /**< [ 30: 30](RO) Uniprocessor/Multiprocessor system. */
        uint32_t reserved_25_29        : 5;
        uint32_t mt                    : 1;  /**< [ 24: 24](RO) Indicates whether the lowest level of affinity consists of logical PEs that are
                                                                 implemented using a multithreading type approach. */
        uint32_t aff2                  : 8;  /**< [ 23: 16](RO) Affinity level 2. Value read from the CFGMPIDRAFF2 configuration pins. */
        uint32_t aff1                  : 8;  /**< [ 15:  8](RO) Affinity level 1. */
        uint32_t aff0                  : 8;  /**< [  7:  0](RO) Affinity level 0. */
#else /* Word 0 - Little Endian */
        uint32_t aff0                  : 8;  /**< [  7:  0](RO) Affinity level 0. */
        uint32_t aff1                  : 8;  /**< [ 15:  8](RO) Affinity level 1. */
        uint32_t aff2                  : 8;  /**< [ 23: 16](RO) Affinity level 2. Value read from the CFGMPIDRAFF2 configuration pins. */
        uint32_t mt                    : 1;  /**< [ 24: 24](RO) Indicates whether the lowest level of affinity consists of logical PEs that are
                                                                 implemented using a multithreading type approach. */
        uint32_t reserved_25_29        : 5;
        uint32_t u                     : 1;  /**< [ 30: 30](RO) Uniprocessor/Multiprocessor system. */
        uint32_t reserved_31           : 1;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_apcx_clusterpmu_pmdevaff0_s cn; */
};
typedef union cavm_cst_apcx_clusterpmu_pmdevaff0 cavm_cst_apcx_clusterpmu_pmdevaff0_t;

static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMDEVAFF0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMDEVAFF0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080210fa8ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080210fa8ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080210fa8ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080210fa8ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_APCX_CLUSTERPMU_PMDEVAFF0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_APCX_CLUSTERPMU_PMDEVAFF0(a) cavm_cst_apcx_clusterpmu_pmdevaff0_t
#define bustype_CAVM_CST_APCX_CLUSTERPMU_PMDEVAFF0(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_APCX_CLUSTERPMU_PMDEVAFF0(a) "CST_APCX_CLUSTERPMU_PMDEVAFF0"
#define busnum_CAVM_CST_APCX_CLUSTERPMU_PMDEVAFF0(a) (a)
#define arguments_CAVM_CST_APCX_CLUSTERPMU_PMDEVAFF0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_apc#_clusterpmu_pmdevaff1
 *
 * CST Apc Clusterpmu Pmdevaff1 Register
 * Allows a debugger to determine which PE in a multiprocessor system the Performance
 * Monitor component relates to.
 */
union cavm_cst_apcx_clusterpmu_pmdevaff1
{
    uint32_t u;
    struct cavm_cst_apcx_clusterpmu_pmdevaff1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t aff3                  : 8;  /**< [  7:  0](RO) Affinity level 3. Value read from the CFGMPIDRAFF3 configuration pins. */
#else /* Word 0 - Little Endian */
        uint32_t aff3                  : 8;  /**< [  7:  0](RO) Affinity level 3. Value read from the CFGMPIDRAFF3 configuration pins. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_apcx_clusterpmu_pmdevaff1_s cn; */
};
typedef union cavm_cst_apcx_clusterpmu_pmdevaff1 cavm_cst_apcx_clusterpmu_pmdevaff1_t;

static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMDEVAFF1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMDEVAFF1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080210facll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080210facll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080210facll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080210facll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_APCX_CLUSTERPMU_PMDEVAFF1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_APCX_CLUSTERPMU_PMDEVAFF1(a) cavm_cst_apcx_clusterpmu_pmdevaff1_t
#define bustype_CAVM_CST_APCX_CLUSTERPMU_PMDEVAFF1(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_APCX_CLUSTERPMU_PMDEVAFF1(a) "CST_APCX_CLUSTERPMU_PMDEVAFF1"
#define busnum_CAVM_CST_APCX_CLUSTERPMU_PMDEVAFF1(a) (a)
#define arguments_CAVM_CST_APCX_CLUSTERPMU_PMDEVAFF1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_apc#_clusterpmu_pmdevarch
 *
 * CST Apc Clusterpmu Pmdevarch Register
 * Identifies the programmers' model architecture of the Performance Monitor component.
 */
union cavm_cst_apcx_clusterpmu_pmdevarch
{
    uint32_t u;
    struct cavm_cst_apcx_clusterpmu_pmdevarch_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t architect             : 11; /**< [ 31: 21](RO) Architect. */
        uint32_t present               : 1;  /**< [ 20: 20](RO) Present. */
        uint32_t revision              : 4;  /**< [ 19: 16](RO) Revision. */
        uint32_t archid                : 16; /**< [ 15:  0](RO) Architecture ID. */
#else /* Word 0 - Little Endian */
        uint32_t archid                : 16; /**< [ 15:  0](RO) Architecture ID. */
        uint32_t revision              : 4;  /**< [ 19: 16](RO) Revision. */
        uint32_t present               : 1;  /**< [ 20: 20](RO) Present. */
        uint32_t architect             : 11; /**< [ 31: 21](RO) Architect. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_apcx_clusterpmu_pmdevarch_s cn; */
};
typedef union cavm_cst_apcx_clusterpmu_pmdevarch cavm_cst_apcx_clusterpmu_pmdevarch_t;

static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMDEVARCH(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMDEVARCH(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080210fbcll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080210fbcll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080210fbcll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080210fbcll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_APCX_CLUSTERPMU_PMDEVARCH", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_APCX_CLUSTERPMU_PMDEVARCH(a) cavm_cst_apcx_clusterpmu_pmdevarch_t
#define bustype_CAVM_CST_APCX_CLUSTERPMU_PMDEVARCH(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_APCX_CLUSTERPMU_PMDEVARCH(a) "CST_APCX_CLUSTERPMU_PMDEVARCH"
#define busnum_CAVM_CST_APCX_CLUSTERPMU_PMDEVARCH(a) (a)
#define arguments_CAVM_CST_APCX_CLUSTERPMU_PMDEVARCH(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_apc#_clusterpmu_pmdevid
 *
 * CST Apc Clusterpmu Pmdevid Register
 * Provides information about features of the Performance Monitors implementation.
 */
union cavm_cst_apcx_clusterpmu_pmdevid
{
    uint32_t u;
    struct cavm_cst_apcx_clusterpmu_pmdevid_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_4_31         : 28;
        uint32_t pcsample              : 4;  /**< [  3:  0](RO) Indicates the level of PC Sample-based Profiling support using Performance Monitors registers. */
#else /* Word 0 - Little Endian */
        uint32_t pcsample              : 4;  /**< [  3:  0](RO) Indicates the level of PC Sample-based Profiling support using Performance Monitors registers. */
        uint32_t reserved_4_31         : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_apcx_clusterpmu_pmdevid_s cn; */
};
typedef union cavm_cst_apcx_clusterpmu_pmdevid cavm_cst_apcx_clusterpmu_pmdevid_t;

static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMDEVID(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMDEVID(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080210fc8ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080210fc8ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080210fc8ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080210fc8ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_APCX_CLUSTERPMU_PMDEVID", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_APCX_CLUSTERPMU_PMDEVID(a) cavm_cst_apcx_clusterpmu_pmdevid_t
#define bustype_CAVM_CST_APCX_CLUSTERPMU_PMDEVID(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_APCX_CLUSTERPMU_PMDEVID(a) "CST_APCX_CLUSTERPMU_PMDEVID"
#define busnum_CAVM_CST_APCX_CLUSTERPMU_PMDEVID(a) (a)
#define arguments_CAVM_CST_APCX_CLUSTERPMU_PMDEVID(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_apc#_clusterpmu_pmdevtype
 *
 * CST Apc Clusterpmu Pmdevtype Register
 * Indicates to a debugger that this component is part of a processor performance monitor interface.
 */
union cavm_cst_apcx_clusterpmu_pmdevtype
{
    uint32_t u;
    struct cavm_cst_apcx_clusterpmu_pmdevtype_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t sub                   : 4;  /**< [  7:  4](RO) Subtype. */
        uint32_t major                 : 4;  /**< [  3:  0](RO) Major type. */
#else /* Word 0 - Little Endian */
        uint32_t major                 : 4;  /**< [  3:  0](RO) Major type. */
        uint32_t sub                   : 4;  /**< [  7:  4](RO) Subtype. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_apcx_clusterpmu_pmdevtype_s cn; */
};
typedef union cavm_cst_apcx_clusterpmu_pmdevtype cavm_cst_apcx_clusterpmu_pmdevtype_t;

static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMDEVTYPE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMDEVTYPE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080210fccll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080210fccll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080210fccll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080210fccll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_APCX_CLUSTERPMU_PMDEVTYPE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_APCX_CLUSTERPMU_PMDEVTYPE(a) cavm_cst_apcx_clusterpmu_pmdevtype_t
#define bustype_CAVM_CST_APCX_CLUSTERPMU_PMDEVTYPE(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_APCX_CLUSTERPMU_PMDEVTYPE(a) "CST_APCX_CLUSTERPMU_PMDEVTYPE"
#define busnum_CAVM_CST_APCX_CLUSTERPMU_PMDEVTYPE(a) (a)
#define arguments_CAVM_CST_APCX_CLUSTERPMU_PMDEVTYPE(a) (a),-1,-1,-1

/**
 * Register (NCB) cst_apc#_clusterpmu_pmevcntr0
 *
 * CST Apc Clusterpmu Pmevcntr0 Register
 * Holds event counter 0, which counts events.
 */
union cavm_cst_apcx_clusterpmu_pmevcntr0
{
    uint64_t u;
    struct cavm_cst_apcx_clusterpmu_pmevcntr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pmevcntr              : 64; /**< [ 63:  0](R/W) Event counter 0. */
#else /* Word 0 - Little Endian */
        uint64_t pmevcntr              : 64; /**< [ 63:  0](R/W) Event counter 0. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_apcx_clusterpmu_pmevcntr0_s cn; */
};
typedef union cavm_cst_apcx_clusterpmu_pmevcntr0 cavm_cst_apcx_clusterpmu_pmevcntr0_t;

static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMEVCNTR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMEVCNTR0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080210000ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080210000ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080210000ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080210000ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_APCX_CLUSTERPMU_PMEVCNTR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_APCX_CLUSTERPMU_PMEVCNTR0(a) cavm_cst_apcx_clusterpmu_pmevcntr0_t
#define bustype_CAVM_CST_APCX_CLUSTERPMU_PMEVCNTR0(a) CSR_TYPE_NCB
#define basename_CAVM_CST_APCX_CLUSTERPMU_PMEVCNTR0(a) "CST_APCX_CLUSTERPMU_PMEVCNTR0"
#define busnum_CAVM_CST_APCX_CLUSTERPMU_PMEVCNTR0(a) (a)
#define arguments_CAVM_CST_APCX_CLUSTERPMU_PMEVCNTR0(a) (a),-1,-1,-1

/**
 * Register (NCB) cst_apc#_clusterpmu_pmevcntr1
 *
 * CST Apc Clusterpmu Pmevcntr1 Register
 * Holds event counter 1, which counts events.
 */
union cavm_cst_apcx_clusterpmu_pmevcntr1
{
    uint64_t u;
    struct cavm_cst_apcx_clusterpmu_pmevcntr1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pmevcntr              : 64; /**< [ 63:  0](R/W) Event counter 1. */
#else /* Word 0 - Little Endian */
        uint64_t pmevcntr              : 64; /**< [ 63:  0](R/W) Event counter 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_apcx_clusterpmu_pmevcntr1_s cn; */
};
typedef union cavm_cst_apcx_clusterpmu_pmevcntr1 cavm_cst_apcx_clusterpmu_pmevcntr1_t;

static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMEVCNTR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMEVCNTR1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080210008ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080210008ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080210008ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080210008ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_APCX_CLUSTERPMU_PMEVCNTR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_APCX_CLUSTERPMU_PMEVCNTR1(a) cavm_cst_apcx_clusterpmu_pmevcntr1_t
#define bustype_CAVM_CST_APCX_CLUSTERPMU_PMEVCNTR1(a) CSR_TYPE_NCB
#define basename_CAVM_CST_APCX_CLUSTERPMU_PMEVCNTR1(a) "CST_APCX_CLUSTERPMU_PMEVCNTR1"
#define busnum_CAVM_CST_APCX_CLUSTERPMU_PMEVCNTR1(a) (a)
#define arguments_CAVM_CST_APCX_CLUSTERPMU_PMEVCNTR1(a) (a),-1,-1,-1

/**
 * Register (NCB) cst_apc#_clusterpmu_pmevcntr2
 *
 * CST Apc Clusterpmu Pmevcntr2 Register
 * Holds event counter 2, which counts events.
 */
union cavm_cst_apcx_clusterpmu_pmevcntr2
{
    uint64_t u;
    struct cavm_cst_apcx_clusterpmu_pmevcntr2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pmevcntr              : 64; /**< [ 63:  0](R/W) Event counter 2. */
#else /* Word 0 - Little Endian */
        uint64_t pmevcntr              : 64; /**< [ 63:  0](R/W) Event counter 2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_apcx_clusterpmu_pmevcntr2_s cn; */
};
typedef union cavm_cst_apcx_clusterpmu_pmevcntr2 cavm_cst_apcx_clusterpmu_pmevcntr2_t;

static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMEVCNTR2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMEVCNTR2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080210010ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080210010ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080210010ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080210010ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_APCX_CLUSTERPMU_PMEVCNTR2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_APCX_CLUSTERPMU_PMEVCNTR2(a) cavm_cst_apcx_clusterpmu_pmevcntr2_t
#define bustype_CAVM_CST_APCX_CLUSTERPMU_PMEVCNTR2(a) CSR_TYPE_NCB
#define basename_CAVM_CST_APCX_CLUSTERPMU_PMEVCNTR2(a) "CST_APCX_CLUSTERPMU_PMEVCNTR2"
#define busnum_CAVM_CST_APCX_CLUSTERPMU_PMEVCNTR2(a) (a)
#define arguments_CAVM_CST_APCX_CLUSTERPMU_PMEVCNTR2(a) (a),-1,-1,-1

/**
 * Register (NCB) cst_apc#_clusterpmu_pmevcntr3
 *
 * CST Apc Clusterpmu Pmevcntr3 Register
 * Holds event counter 3, which counts events.
 */
union cavm_cst_apcx_clusterpmu_pmevcntr3
{
    uint64_t u;
    struct cavm_cst_apcx_clusterpmu_pmevcntr3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pmevcntr              : 64; /**< [ 63:  0](R/W) Event counter 3. */
#else /* Word 0 - Little Endian */
        uint64_t pmevcntr              : 64; /**< [ 63:  0](R/W) Event counter 3. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_apcx_clusterpmu_pmevcntr3_s cn; */
};
typedef union cavm_cst_apcx_clusterpmu_pmevcntr3 cavm_cst_apcx_clusterpmu_pmevcntr3_t;

static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMEVCNTR3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMEVCNTR3(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080210018ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080210018ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080210018ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080210018ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_APCX_CLUSTERPMU_PMEVCNTR3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_APCX_CLUSTERPMU_PMEVCNTR3(a) cavm_cst_apcx_clusterpmu_pmevcntr3_t
#define bustype_CAVM_CST_APCX_CLUSTERPMU_PMEVCNTR3(a) CSR_TYPE_NCB
#define basename_CAVM_CST_APCX_CLUSTERPMU_PMEVCNTR3(a) "CST_APCX_CLUSTERPMU_PMEVCNTR3"
#define busnum_CAVM_CST_APCX_CLUSTERPMU_PMEVCNTR3(a) (a)
#define arguments_CAVM_CST_APCX_CLUSTERPMU_PMEVCNTR3(a) (a),-1,-1,-1

/**
 * Register (NCB) cst_apc#_clusterpmu_pmevcntr4
 *
 * CST Apc Clusterpmu Pmevcntr4 Register
 * Holds event counter 4, which counts events.
 */
union cavm_cst_apcx_clusterpmu_pmevcntr4
{
    uint64_t u;
    struct cavm_cst_apcx_clusterpmu_pmevcntr4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pmevcntr              : 64; /**< [ 63:  0](R/W) Event counter 4. */
#else /* Word 0 - Little Endian */
        uint64_t pmevcntr              : 64; /**< [ 63:  0](R/W) Event counter 4. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_apcx_clusterpmu_pmevcntr4_s cn; */
};
typedef union cavm_cst_apcx_clusterpmu_pmevcntr4 cavm_cst_apcx_clusterpmu_pmevcntr4_t;

static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMEVCNTR4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMEVCNTR4(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080210020ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080210020ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080210020ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080210020ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_APCX_CLUSTERPMU_PMEVCNTR4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_APCX_CLUSTERPMU_PMEVCNTR4(a) cavm_cst_apcx_clusterpmu_pmevcntr4_t
#define bustype_CAVM_CST_APCX_CLUSTERPMU_PMEVCNTR4(a) CSR_TYPE_NCB
#define basename_CAVM_CST_APCX_CLUSTERPMU_PMEVCNTR4(a) "CST_APCX_CLUSTERPMU_PMEVCNTR4"
#define busnum_CAVM_CST_APCX_CLUSTERPMU_PMEVCNTR4(a) (a)
#define arguments_CAVM_CST_APCX_CLUSTERPMU_PMEVCNTR4(a) (a),-1,-1,-1

/**
 * Register (NCB) cst_apc#_clusterpmu_pmevcntr5
 *
 * CST Apc Clusterpmu Pmevcntr5 Register
 * Holds event counter 5, which counts events.
 */
union cavm_cst_apcx_clusterpmu_pmevcntr5
{
    uint64_t u;
    struct cavm_cst_apcx_clusterpmu_pmevcntr5_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pmevcntr              : 64; /**< [ 63:  0](R/W) Event counter 5. */
#else /* Word 0 - Little Endian */
        uint64_t pmevcntr              : 64; /**< [ 63:  0](R/W) Event counter 5. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_apcx_clusterpmu_pmevcntr5_s cn; */
};
typedef union cavm_cst_apcx_clusterpmu_pmevcntr5 cavm_cst_apcx_clusterpmu_pmevcntr5_t;

static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMEVCNTR5(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMEVCNTR5(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080210028ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080210028ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080210028ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080210028ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_APCX_CLUSTERPMU_PMEVCNTR5", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_APCX_CLUSTERPMU_PMEVCNTR5(a) cavm_cst_apcx_clusterpmu_pmevcntr5_t
#define bustype_CAVM_CST_APCX_CLUSTERPMU_PMEVCNTR5(a) CSR_TYPE_NCB
#define basename_CAVM_CST_APCX_CLUSTERPMU_PMEVCNTR5(a) "CST_APCX_CLUSTERPMU_PMEVCNTR5"
#define busnum_CAVM_CST_APCX_CLUSTERPMU_PMEVCNTR5(a) (a)
#define arguments_CAVM_CST_APCX_CLUSTERPMU_PMEVCNTR5(a) (a),-1,-1,-1

/**
 * Register (NCB) cst_apc#_clusterpmu_pmevcntsr0
 *
 * CST Apc Clusterpmu Pmevcntsr0 Register
 * Holds event counter 0, which counts events.
 */
union cavm_cst_apcx_clusterpmu_pmevcntsr0
{
    uint64_t u;
    struct cavm_cst_apcx_clusterpmu_pmevcntsr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pmevcntsr             : 64; /**< [ 63:  0](R/W) Event counter 0. */
#else /* Word 0 - Little Endian */
        uint64_t pmevcntsr             : 64; /**< [ 63:  0](R/W) Event counter 0. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_apcx_clusterpmu_pmevcntsr0_s cn; */
};
typedef union cavm_cst_apcx_clusterpmu_pmevcntsr0 cavm_cst_apcx_clusterpmu_pmevcntsr0_t;

static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMEVCNTSR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMEVCNTSR0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080210620ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080210620ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080210620ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080210620ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_APCX_CLUSTERPMU_PMEVCNTSR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_APCX_CLUSTERPMU_PMEVCNTSR0(a) cavm_cst_apcx_clusterpmu_pmevcntsr0_t
#define bustype_CAVM_CST_APCX_CLUSTERPMU_PMEVCNTSR0(a) CSR_TYPE_NCB
#define basename_CAVM_CST_APCX_CLUSTERPMU_PMEVCNTSR0(a) "CST_APCX_CLUSTERPMU_PMEVCNTSR0"
#define busnum_CAVM_CST_APCX_CLUSTERPMU_PMEVCNTSR0(a) (a)
#define arguments_CAVM_CST_APCX_CLUSTERPMU_PMEVCNTSR0(a) (a),-1,-1,-1

/**
 * Register (NCB) cst_apc#_clusterpmu_pmevcntsr1
 *
 * CST Apc Clusterpmu Pmevcntsr1 Register
 * Holds event counter 1, which counts events.
 */
union cavm_cst_apcx_clusterpmu_pmevcntsr1
{
    uint64_t u;
    struct cavm_cst_apcx_clusterpmu_pmevcntsr1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pmevcntsr             : 64; /**< [ 63:  0](R/W) Event counter 1. */
#else /* Word 0 - Little Endian */
        uint64_t pmevcntsr             : 64; /**< [ 63:  0](R/W) Event counter 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_apcx_clusterpmu_pmevcntsr1_s cn; */
};
typedef union cavm_cst_apcx_clusterpmu_pmevcntsr1 cavm_cst_apcx_clusterpmu_pmevcntsr1_t;

static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMEVCNTSR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMEVCNTSR1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080210628ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080210628ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080210628ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080210628ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_APCX_CLUSTERPMU_PMEVCNTSR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_APCX_CLUSTERPMU_PMEVCNTSR1(a) cavm_cst_apcx_clusterpmu_pmevcntsr1_t
#define bustype_CAVM_CST_APCX_CLUSTERPMU_PMEVCNTSR1(a) CSR_TYPE_NCB
#define basename_CAVM_CST_APCX_CLUSTERPMU_PMEVCNTSR1(a) "CST_APCX_CLUSTERPMU_PMEVCNTSR1"
#define busnum_CAVM_CST_APCX_CLUSTERPMU_PMEVCNTSR1(a) (a)
#define arguments_CAVM_CST_APCX_CLUSTERPMU_PMEVCNTSR1(a) (a),-1,-1,-1

/**
 * Register (NCB) cst_apc#_clusterpmu_pmevcntsr2
 *
 * CST Apc Clusterpmu Pmevcntsr2 Register
 * Holds event counter 2, which counts events.
 */
union cavm_cst_apcx_clusterpmu_pmevcntsr2
{
    uint64_t u;
    struct cavm_cst_apcx_clusterpmu_pmevcntsr2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pmevcntsr             : 64; /**< [ 63:  0](R/W) Event counter 2. */
#else /* Word 0 - Little Endian */
        uint64_t pmevcntsr             : 64; /**< [ 63:  0](R/W) Event counter 2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_apcx_clusterpmu_pmevcntsr2_s cn; */
};
typedef union cavm_cst_apcx_clusterpmu_pmevcntsr2 cavm_cst_apcx_clusterpmu_pmevcntsr2_t;

static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMEVCNTSR2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMEVCNTSR2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080210630ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080210630ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080210630ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080210630ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_APCX_CLUSTERPMU_PMEVCNTSR2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_APCX_CLUSTERPMU_PMEVCNTSR2(a) cavm_cst_apcx_clusterpmu_pmevcntsr2_t
#define bustype_CAVM_CST_APCX_CLUSTERPMU_PMEVCNTSR2(a) CSR_TYPE_NCB
#define basename_CAVM_CST_APCX_CLUSTERPMU_PMEVCNTSR2(a) "CST_APCX_CLUSTERPMU_PMEVCNTSR2"
#define busnum_CAVM_CST_APCX_CLUSTERPMU_PMEVCNTSR2(a) (a)
#define arguments_CAVM_CST_APCX_CLUSTERPMU_PMEVCNTSR2(a) (a),-1,-1,-1

/**
 * Register (NCB) cst_apc#_clusterpmu_pmevcntsr3
 *
 * CST Apc Clusterpmu Pmevcntsr3 Register
 * Holds event counter 3, which counts events.
 */
union cavm_cst_apcx_clusterpmu_pmevcntsr3
{
    uint64_t u;
    struct cavm_cst_apcx_clusterpmu_pmevcntsr3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pmevcntsr             : 64; /**< [ 63:  0](R/W) Event counter 3. */
#else /* Word 0 - Little Endian */
        uint64_t pmevcntsr             : 64; /**< [ 63:  0](R/W) Event counter 3. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_apcx_clusterpmu_pmevcntsr3_s cn; */
};
typedef union cavm_cst_apcx_clusterpmu_pmevcntsr3 cavm_cst_apcx_clusterpmu_pmevcntsr3_t;

static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMEVCNTSR3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMEVCNTSR3(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080210638ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080210638ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080210638ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080210638ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_APCX_CLUSTERPMU_PMEVCNTSR3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_APCX_CLUSTERPMU_PMEVCNTSR3(a) cavm_cst_apcx_clusterpmu_pmevcntsr3_t
#define bustype_CAVM_CST_APCX_CLUSTERPMU_PMEVCNTSR3(a) CSR_TYPE_NCB
#define basename_CAVM_CST_APCX_CLUSTERPMU_PMEVCNTSR3(a) "CST_APCX_CLUSTERPMU_PMEVCNTSR3"
#define busnum_CAVM_CST_APCX_CLUSTERPMU_PMEVCNTSR3(a) (a)
#define arguments_CAVM_CST_APCX_CLUSTERPMU_PMEVCNTSR3(a) (a),-1,-1,-1

/**
 * Register (NCB) cst_apc#_clusterpmu_pmevcntsr4
 *
 * CST Apc Clusterpmu Pmevcntsr4 Register
 * Holds event counter 4, which counts events.
 */
union cavm_cst_apcx_clusterpmu_pmevcntsr4
{
    uint64_t u;
    struct cavm_cst_apcx_clusterpmu_pmevcntsr4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pmevcntsr             : 64; /**< [ 63:  0](R/W) Event counter 4. */
#else /* Word 0 - Little Endian */
        uint64_t pmevcntsr             : 64; /**< [ 63:  0](R/W) Event counter 4. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_apcx_clusterpmu_pmevcntsr4_s cn; */
};
typedef union cavm_cst_apcx_clusterpmu_pmevcntsr4 cavm_cst_apcx_clusterpmu_pmevcntsr4_t;

static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMEVCNTSR4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMEVCNTSR4(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080210640ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080210640ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080210640ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080210640ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_APCX_CLUSTERPMU_PMEVCNTSR4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_APCX_CLUSTERPMU_PMEVCNTSR4(a) cavm_cst_apcx_clusterpmu_pmevcntsr4_t
#define bustype_CAVM_CST_APCX_CLUSTERPMU_PMEVCNTSR4(a) CSR_TYPE_NCB
#define basename_CAVM_CST_APCX_CLUSTERPMU_PMEVCNTSR4(a) "CST_APCX_CLUSTERPMU_PMEVCNTSR4"
#define busnum_CAVM_CST_APCX_CLUSTERPMU_PMEVCNTSR4(a) (a)
#define arguments_CAVM_CST_APCX_CLUSTERPMU_PMEVCNTSR4(a) (a),-1,-1,-1

/**
 * Register (NCB) cst_apc#_clusterpmu_pmevcntsr5
 *
 * CST Apc Clusterpmu Pmevcntsr5 Register
 * Holds event counter 5, which counts events.
 */
union cavm_cst_apcx_clusterpmu_pmevcntsr5
{
    uint64_t u;
    struct cavm_cst_apcx_clusterpmu_pmevcntsr5_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pmevcntsr             : 64; /**< [ 63:  0](R/W) Event counter 5. */
#else /* Word 0 - Little Endian */
        uint64_t pmevcntsr             : 64; /**< [ 63:  0](R/W) Event counter 5. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_apcx_clusterpmu_pmevcntsr5_s cn; */
};
typedef union cavm_cst_apcx_clusterpmu_pmevcntsr5 cavm_cst_apcx_clusterpmu_pmevcntsr5_t;

static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMEVCNTSR5(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMEVCNTSR5(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080210648ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080210648ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080210648ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080210648ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_APCX_CLUSTERPMU_PMEVCNTSR5", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_APCX_CLUSTERPMU_PMEVCNTSR5(a) cavm_cst_apcx_clusterpmu_pmevcntsr5_t
#define bustype_CAVM_CST_APCX_CLUSTERPMU_PMEVCNTSR5(a) CSR_TYPE_NCB
#define basename_CAVM_CST_APCX_CLUSTERPMU_PMEVCNTSR5(a) "CST_APCX_CLUSTERPMU_PMEVCNTSR5"
#define busnum_CAVM_CST_APCX_CLUSTERPMU_PMEVCNTSR5(a) (a)
#define arguments_CAVM_CST_APCX_CLUSTERPMU_PMEVCNTSR5(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_apc#_clusterpmu_pmevtyper0
 *
 * CST Apc Clusterpmu Pmevtyper0 Register
 * Configures event counter n, where n is 0 to 30.
 */
union cavm_cst_apcx_clusterpmu_pmevtyper0
{
    uint32_t u;
    struct cavm_cst_apcx_clusterpmu_pmevtyper0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t p                     : 1;  /**< [ 31: 31](R/W) Privileged filtering bit. Controls counting in EL1. If EL3 is implemented, then
                                                                 counting in Non-secure EL1 is further controlled by the PMEVTYPER&lt;n&gt;.NSK
                                                                 bit. */
        uint32_t reserved_30           : 1;
        uint32_t ns_f                  : 1;  /**< [ 29: 29](R/W) Non-secure events filtering bit. Controls counting of events generated by Non-secure transactions. */
        uint32_t reserved_16_28        : 13;
        uint32_t evtcount              : 16; /**< [ 15:  0](R/W) Event to count. The event number of the event that is counted by event counter
                                                                 ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;.
                                                                 Software must program this field with an event that is supported by the PE being programmed. */
#else /* Word 0 - Little Endian */
        uint32_t evtcount              : 16; /**< [ 15:  0](R/W) Event to count. The event number of the event that is counted by event counter
                                                                 ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;.
                                                                 Software must program this field with an event that is supported by the PE being programmed. */
        uint32_t reserved_16_28        : 13;
        uint32_t ns_f                  : 1;  /**< [ 29: 29](R/W) Non-secure events filtering bit. Controls counting of events generated by Non-secure transactions. */
        uint32_t reserved_30           : 1;
        uint32_t p                     : 1;  /**< [ 31: 31](R/W) Privileged filtering bit. Controls counting in EL1. If EL3 is implemented, then
                                                                 counting in Non-secure EL1 is further controlled by the PMEVTYPER&lt;n&gt;.NSK
                                                                 bit. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_apcx_clusterpmu_pmevtyper0_s cn; */
};
typedef union cavm_cst_apcx_clusterpmu_pmevtyper0 cavm_cst_apcx_clusterpmu_pmevtyper0_t;

static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMEVTYPER0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMEVTYPER0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080210400ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080210400ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080210400ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080210400ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_APCX_CLUSTERPMU_PMEVTYPER0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_APCX_CLUSTERPMU_PMEVTYPER0(a) cavm_cst_apcx_clusterpmu_pmevtyper0_t
#define bustype_CAVM_CST_APCX_CLUSTERPMU_PMEVTYPER0(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_APCX_CLUSTERPMU_PMEVTYPER0(a) "CST_APCX_CLUSTERPMU_PMEVTYPER0"
#define busnum_CAVM_CST_APCX_CLUSTERPMU_PMEVTYPER0(a) (a)
#define arguments_CAVM_CST_APCX_CLUSTERPMU_PMEVTYPER0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_apc#_clusterpmu_pmevtyper1
 *
 * CST Apc Clusterpmu Pmevtyper1 Register
 * Configures event counter n, where n is 0 to 30.
 */
union cavm_cst_apcx_clusterpmu_pmevtyper1
{
    uint32_t u;
    struct cavm_cst_apcx_clusterpmu_pmevtyper1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t p                     : 1;  /**< [ 31: 31](R/W) Privileged filtering bit. Controls counting in EL1. If EL3 is implemented, then
                                                                 counting in Non-secure EL1 is further controlled by the PMEVTYPER&lt;n&gt;.NSK
                                                                 bit. */
        uint32_t reserved_30           : 1;
        uint32_t ns_f                  : 1;  /**< [ 29: 29](R/W) Non-secure events filtering bit. Controls counting of events generated by Non-secure transactions. */
        uint32_t reserved_16_28        : 13;
        uint32_t evtcount              : 16; /**< [ 15:  0](R/W) Event to count. The event number of the event that is counted by event counter
                                                                 ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;.
                                                                 Software must program this field with an event that is supported by the PE being programmed. */
#else /* Word 0 - Little Endian */
        uint32_t evtcount              : 16; /**< [ 15:  0](R/W) Event to count. The event number of the event that is counted by event counter
                                                                 ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;.
                                                                 Software must program this field with an event that is supported by the PE being programmed. */
        uint32_t reserved_16_28        : 13;
        uint32_t ns_f                  : 1;  /**< [ 29: 29](R/W) Non-secure events filtering bit. Controls counting of events generated by Non-secure transactions. */
        uint32_t reserved_30           : 1;
        uint32_t p                     : 1;  /**< [ 31: 31](R/W) Privileged filtering bit. Controls counting in EL1. If EL3 is implemented, then
                                                                 counting in Non-secure EL1 is further controlled by the PMEVTYPER&lt;n&gt;.NSK
                                                                 bit. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_apcx_clusterpmu_pmevtyper1_s cn; */
};
typedef union cavm_cst_apcx_clusterpmu_pmevtyper1 cavm_cst_apcx_clusterpmu_pmevtyper1_t;

static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMEVTYPER1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMEVTYPER1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080210404ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080210404ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080210404ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080210404ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_APCX_CLUSTERPMU_PMEVTYPER1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_APCX_CLUSTERPMU_PMEVTYPER1(a) cavm_cst_apcx_clusterpmu_pmevtyper1_t
#define bustype_CAVM_CST_APCX_CLUSTERPMU_PMEVTYPER1(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_APCX_CLUSTERPMU_PMEVTYPER1(a) "CST_APCX_CLUSTERPMU_PMEVTYPER1"
#define busnum_CAVM_CST_APCX_CLUSTERPMU_PMEVTYPER1(a) (a)
#define arguments_CAVM_CST_APCX_CLUSTERPMU_PMEVTYPER1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_apc#_clusterpmu_pmevtyper2
 *
 * CST Apc Clusterpmu Pmevtyper2 Register
 * Configures event counter n, where n is 0 to 30.
 */
union cavm_cst_apcx_clusterpmu_pmevtyper2
{
    uint32_t u;
    struct cavm_cst_apcx_clusterpmu_pmevtyper2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t p                     : 1;  /**< [ 31: 31](R/W) Privileged filtering bit. Controls counting in EL1. If EL3 is implemented, then
                                                                 counting in Non-secure EL1 is further controlled by the PMEVTYPER&lt;n&gt;.NSK
                                                                 bit. */
        uint32_t reserved_30           : 1;
        uint32_t ns_f                  : 1;  /**< [ 29: 29](R/W) Non-secure events filtering bit. Controls counting of events generated by Non-secure transactions. */
        uint32_t reserved_16_28        : 13;
        uint32_t evtcount              : 16; /**< [ 15:  0](R/W) Event to count. The event number of the event that is counted by event counter
                                                                 ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;.
                                                                 Software must program this field with an event that is supported by the PE being programmed. */
#else /* Word 0 - Little Endian */
        uint32_t evtcount              : 16; /**< [ 15:  0](R/W) Event to count. The event number of the event that is counted by event counter
                                                                 ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;.
                                                                 Software must program this field with an event that is supported by the PE being programmed. */
        uint32_t reserved_16_28        : 13;
        uint32_t ns_f                  : 1;  /**< [ 29: 29](R/W) Non-secure events filtering bit. Controls counting of events generated by Non-secure transactions. */
        uint32_t reserved_30           : 1;
        uint32_t p                     : 1;  /**< [ 31: 31](R/W) Privileged filtering bit. Controls counting in EL1. If EL3 is implemented, then
                                                                 counting in Non-secure EL1 is further controlled by the PMEVTYPER&lt;n&gt;.NSK
                                                                 bit. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_apcx_clusterpmu_pmevtyper2_s cn; */
};
typedef union cavm_cst_apcx_clusterpmu_pmevtyper2 cavm_cst_apcx_clusterpmu_pmevtyper2_t;

static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMEVTYPER2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMEVTYPER2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080210408ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080210408ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080210408ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080210408ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_APCX_CLUSTERPMU_PMEVTYPER2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_APCX_CLUSTERPMU_PMEVTYPER2(a) cavm_cst_apcx_clusterpmu_pmevtyper2_t
#define bustype_CAVM_CST_APCX_CLUSTERPMU_PMEVTYPER2(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_APCX_CLUSTERPMU_PMEVTYPER2(a) "CST_APCX_CLUSTERPMU_PMEVTYPER2"
#define busnum_CAVM_CST_APCX_CLUSTERPMU_PMEVTYPER2(a) (a)
#define arguments_CAVM_CST_APCX_CLUSTERPMU_PMEVTYPER2(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_apc#_clusterpmu_pmevtyper3
 *
 * CST Apc Clusterpmu Pmevtyper3 Register
 * Configures event counter n, where n is 0 to 30.
 */
union cavm_cst_apcx_clusterpmu_pmevtyper3
{
    uint32_t u;
    struct cavm_cst_apcx_clusterpmu_pmevtyper3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t p                     : 1;  /**< [ 31: 31](R/W) Privileged filtering bit. Controls counting in EL1. If EL3 is implemented, then
                                                                 counting in Non-secure EL1 is further controlled by the PMEVTYPER&lt;n&gt;.NSK
                                                                 bit. */
        uint32_t reserved_30           : 1;
        uint32_t ns_f                  : 1;  /**< [ 29: 29](R/W) Non-secure events filtering bit. Controls counting of events generated by Non-secure transactions. */
        uint32_t reserved_16_28        : 13;
        uint32_t evtcount              : 16; /**< [ 15:  0](R/W) Event to count. The event number of the event that is counted by event counter
                                                                 ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;.
                                                                 Software must program this field with an event that is supported by the PE being programmed. */
#else /* Word 0 - Little Endian */
        uint32_t evtcount              : 16; /**< [ 15:  0](R/W) Event to count. The event number of the event that is counted by event counter
                                                                 ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;.
                                                                 Software must program this field with an event that is supported by the PE being programmed. */
        uint32_t reserved_16_28        : 13;
        uint32_t ns_f                  : 1;  /**< [ 29: 29](R/W) Non-secure events filtering bit. Controls counting of events generated by Non-secure transactions. */
        uint32_t reserved_30           : 1;
        uint32_t p                     : 1;  /**< [ 31: 31](R/W) Privileged filtering bit. Controls counting in EL1. If EL3 is implemented, then
                                                                 counting in Non-secure EL1 is further controlled by the PMEVTYPER&lt;n&gt;.NSK
                                                                 bit. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_apcx_clusterpmu_pmevtyper3_s cn; */
};
typedef union cavm_cst_apcx_clusterpmu_pmevtyper3 cavm_cst_apcx_clusterpmu_pmevtyper3_t;

static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMEVTYPER3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMEVTYPER3(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a08021040cll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a08021040cll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a08021040cll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a08021040cll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_APCX_CLUSTERPMU_PMEVTYPER3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_APCX_CLUSTERPMU_PMEVTYPER3(a) cavm_cst_apcx_clusterpmu_pmevtyper3_t
#define bustype_CAVM_CST_APCX_CLUSTERPMU_PMEVTYPER3(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_APCX_CLUSTERPMU_PMEVTYPER3(a) "CST_APCX_CLUSTERPMU_PMEVTYPER3"
#define busnum_CAVM_CST_APCX_CLUSTERPMU_PMEVTYPER3(a) (a)
#define arguments_CAVM_CST_APCX_CLUSTERPMU_PMEVTYPER3(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_apc#_clusterpmu_pmevtyper4
 *
 * CST Apc Clusterpmu Pmevtyper4 Register
 * Configures event counter n, where n is 0 to 30.
 */
union cavm_cst_apcx_clusterpmu_pmevtyper4
{
    uint32_t u;
    struct cavm_cst_apcx_clusterpmu_pmevtyper4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t p                     : 1;  /**< [ 31: 31](R/W) Privileged filtering bit. Controls counting in EL1. If EL3 is implemented, then
                                                                 counting in Non-secure EL1 is further controlled by the PMEVTYPER&lt;n&gt;.NSK
                                                                 bit. */
        uint32_t reserved_30           : 1;
        uint32_t ns_f                  : 1;  /**< [ 29: 29](R/W) Non-secure events filtering bit. Controls counting of events generated by Non-secure transactions. */
        uint32_t reserved_16_28        : 13;
        uint32_t evtcount              : 16; /**< [ 15:  0](R/W) Event to count. The event number of the event that is counted by event counter
                                                                 ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;.
                                                                 Software must program this field with an event that is supported by the PE being programmed. */
#else /* Word 0 - Little Endian */
        uint32_t evtcount              : 16; /**< [ 15:  0](R/W) Event to count. The event number of the event that is counted by event counter
                                                                 ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;.
                                                                 Software must program this field with an event that is supported by the PE being programmed. */
        uint32_t reserved_16_28        : 13;
        uint32_t ns_f                  : 1;  /**< [ 29: 29](R/W) Non-secure events filtering bit. Controls counting of events generated by Non-secure transactions. */
        uint32_t reserved_30           : 1;
        uint32_t p                     : 1;  /**< [ 31: 31](R/W) Privileged filtering bit. Controls counting in EL1. If EL3 is implemented, then
                                                                 counting in Non-secure EL1 is further controlled by the PMEVTYPER&lt;n&gt;.NSK
                                                                 bit. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_apcx_clusterpmu_pmevtyper4_s cn; */
};
typedef union cavm_cst_apcx_clusterpmu_pmevtyper4 cavm_cst_apcx_clusterpmu_pmevtyper4_t;

static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMEVTYPER4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMEVTYPER4(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080210410ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080210410ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080210410ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080210410ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_APCX_CLUSTERPMU_PMEVTYPER4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_APCX_CLUSTERPMU_PMEVTYPER4(a) cavm_cst_apcx_clusterpmu_pmevtyper4_t
#define bustype_CAVM_CST_APCX_CLUSTERPMU_PMEVTYPER4(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_APCX_CLUSTERPMU_PMEVTYPER4(a) "CST_APCX_CLUSTERPMU_PMEVTYPER4"
#define busnum_CAVM_CST_APCX_CLUSTERPMU_PMEVTYPER4(a) (a)
#define arguments_CAVM_CST_APCX_CLUSTERPMU_PMEVTYPER4(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_apc#_clusterpmu_pmevtyper5
 *
 * CST Apc Clusterpmu Pmevtyper5 Register
 * Configures event counter n, where n is 0 to 30.
 */
union cavm_cst_apcx_clusterpmu_pmevtyper5
{
    uint32_t u;
    struct cavm_cst_apcx_clusterpmu_pmevtyper5_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t p                     : 1;  /**< [ 31: 31](R/W) Privileged filtering bit. Controls counting in EL1. If EL3 is implemented, then
                                                                 counting in Non-secure EL1 is further controlled by the PMEVTYPER&lt;n&gt;.NSK
                                                                 bit. */
        uint32_t reserved_30           : 1;
        uint32_t ns_f                  : 1;  /**< [ 29: 29](R/W) Non-secure events filtering bit. Controls counting of events generated by Non-secure transactions. */
        uint32_t reserved_16_28        : 13;
        uint32_t evtcount              : 16; /**< [ 15:  0](R/W) Event to count. The event number of the event that is counted by event counter
                                                                 ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;.
                                                                 Software must program this field with an event that is supported by the PE being programmed. */
#else /* Word 0 - Little Endian */
        uint32_t evtcount              : 16; /**< [ 15:  0](R/W) Event to count. The event number of the event that is counted by event counter
                                                                 ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;.
                                                                 Software must program this field with an event that is supported by the PE being programmed. */
        uint32_t reserved_16_28        : 13;
        uint32_t ns_f                  : 1;  /**< [ 29: 29](R/W) Non-secure events filtering bit. Controls counting of events generated by Non-secure transactions. */
        uint32_t reserved_30           : 1;
        uint32_t p                     : 1;  /**< [ 31: 31](R/W) Privileged filtering bit. Controls counting in EL1. If EL3 is implemented, then
                                                                 counting in Non-secure EL1 is further controlled by the PMEVTYPER&lt;n&gt;.NSK
                                                                 bit. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_apcx_clusterpmu_pmevtyper5_s cn; */
};
typedef union cavm_cst_apcx_clusterpmu_pmevtyper5 cavm_cst_apcx_clusterpmu_pmevtyper5_t;

static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMEVTYPER5(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMEVTYPER5(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080210414ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080210414ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080210414ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080210414ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_APCX_CLUSTERPMU_PMEVTYPER5", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_APCX_CLUSTERPMU_PMEVTYPER5(a) cavm_cst_apcx_clusterpmu_pmevtyper5_t
#define bustype_CAVM_CST_APCX_CLUSTERPMU_PMEVTYPER5(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_APCX_CLUSTERPMU_PMEVTYPER5(a) "CST_APCX_CLUSTERPMU_PMEVTYPER5"
#define busnum_CAVM_CST_APCX_CLUSTERPMU_PMEVTYPER5(a) (a)
#define arguments_CAVM_CST_APCX_CLUSTERPMU_PMEVTYPER5(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_apc#_clusterpmu_pmintenclr
 *
 * CST Apc Clusterpmu Pmintenclr Register
 * Disables the generation of interrupt requests on overflows from the Cycle Count
 * Register, ext-CLUSTERPMU_PMCCNTR, and the event counters ext-
 * CLUSTERPMU_PMEVCNTR&lt;n&gt;.
 */
union cavm_cst_apcx_clusterpmu_pmintenclr
{
    uint32_t u;
    struct cavm_cst_apcx_clusterpmu_pmintenclr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t c_f                   : 1;  /**< [ 31: 31](R/W) Ext-CLUSTERPMU_PMCCNTR overflow interrupt request disable bit. */
        uint32_t raz_wi                : 25; /**< [ 30:  6](R/W) This field is RAZWI */
        uint32_t p5                    : 1;  /**< [  5:  5](R/W) Event counter overflow interrupt request disable bit for ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;.
                                                                 If ext-CLUSTERPMU_PMCFGR.N is less than 31, bits [30:ext-CLUSTERPMU_PMCFGR.N] are RAZ/WI. */
        uint32_t p4                    : 1;  /**< [  4:  4](R/W) Event counter overflow interrupt request disable bit for ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;.
                                                                 If ext-CLUSTERPMU_PMCFGR.N is less than 31, bits [30:ext-CLUSTERPMU_PMCFGR.N] are RAZ/WI. */
        uint32_t p3                    : 1;  /**< [  3:  3](R/W) Event counter overflow interrupt request disable bit for ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;.
                                                                 If ext-CLUSTERPMU_PMCFGR.N is less than 31, bits [30:ext-CLUSTERPMU_PMCFGR.N] are RAZ/WI. */
        uint32_t p2                    : 1;  /**< [  2:  2](R/W) Event counter overflow interrupt request disable bit for ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;.
                                                                 If ext-CLUSTERPMU_PMCFGR.N is less than 31, bits [30:ext-CLUSTERPMU_PMCFGR.N] are RAZ/WI. */
        uint32_t p1                    : 1;  /**< [  1:  1](R/W) Event counter overflow interrupt request disable bit for ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;.
                                                                 If ext-CLUSTERPMU_PMCFGR.N is less than 31, bits [30:ext-CLUSTERPMU_PMCFGR.N] are RAZ/WI. */
        uint32_t p0                    : 1;  /**< [  0:  0](R/W) Event counter overflow interrupt request disable bit for ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;.
                                                                 If ext-CLUSTERPMU_PMCFGR.N is less than 31, bits [30:ext-CLUSTERPMU_PMCFGR.N] are RAZ/WI. */
#else /* Word 0 - Little Endian */
        uint32_t p0                    : 1;  /**< [  0:  0](R/W) Event counter overflow interrupt request disable bit for ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;.
                                                                 If ext-CLUSTERPMU_PMCFGR.N is less than 31, bits [30:ext-CLUSTERPMU_PMCFGR.N] are RAZ/WI. */
        uint32_t p1                    : 1;  /**< [  1:  1](R/W) Event counter overflow interrupt request disable bit for ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;.
                                                                 If ext-CLUSTERPMU_PMCFGR.N is less than 31, bits [30:ext-CLUSTERPMU_PMCFGR.N] are RAZ/WI. */
        uint32_t p2                    : 1;  /**< [  2:  2](R/W) Event counter overflow interrupt request disable bit for ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;.
                                                                 If ext-CLUSTERPMU_PMCFGR.N is less than 31, bits [30:ext-CLUSTERPMU_PMCFGR.N] are RAZ/WI. */
        uint32_t p3                    : 1;  /**< [  3:  3](R/W) Event counter overflow interrupt request disable bit for ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;.
                                                                 If ext-CLUSTERPMU_PMCFGR.N is less than 31, bits [30:ext-CLUSTERPMU_PMCFGR.N] are RAZ/WI. */
        uint32_t p4                    : 1;  /**< [  4:  4](R/W) Event counter overflow interrupt request disable bit for ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;.
                                                                 If ext-CLUSTERPMU_PMCFGR.N is less than 31, bits [30:ext-CLUSTERPMU_PMCFGR.N] are RAZ/WI. */
        uint32_t p5                    : 1;  /**< [  5:  5](R/W) Event counter overflow interrupt request disable bit for ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;.
                                                                 If ext-CLUSTERPMU_PMCFGR.N is less than 31, bits [30:ext-CLUSTERPMU_PMCFGR.N] are RAZ/WI. */
        uint32_t raz_wi                : 25; /**< [ 30:  6](R/W) This field is RAZWI */
        uint32_t c_f                   : 1;  /**< [ 31: 31](R/W) Ext-CLUSTERPMU_PMCCNTR overflow interrupt request disable bit. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_apcx_clusterpmu_pmintenclr_s cn; */
};
typedef union cavm_cst_apcx_clusterpmu_pmintenclr cavm_cst_apcx_clusterpmu_pmintenclr_t;

static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMINTENCLR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMINTENCLR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080210c60ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080210c60ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080210c60ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080210c60ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_APCX_CLUSTERPMU_PMINTENCLR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_APCX_CLUSTERPMU_PMINTENCLR(a) cavm_cst_apcx_clusterpmu_pmintenclr_t
#define bustype_CAVM_CST_APCX_CLUSTERPMU_PMINTENCLR(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_APCX_CLUSTERPMU_PMINTENCLR(a) "CST_APCX_CLUSTERPMU_PMINTENCLR"
#define busnum_CAVM_CST_APCX_CLUSTERPMU_PMINTENCLR(a) (a)
#define arguments_CAVM_CST_APCX_CLUSTERPMU_PMINTENCLR(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_apc#_clusterpmu_pmintenset
 *
 * CST Apc Clusterpmu Pmintenset Register
 * Enables the generation of interrupt requests on overflows from the Cycle Count
 * Register, ext-CLUSTERPMU_PMCCNTR, and the event counters ext-
 * CLUSTERPMU_PMEVCNTR&lt;n&gt;.
 */
union cavm_cst_apcx_clusterpmu_pmintenset
{
    uint32_t u;
    struct cavm_cst_apcx_clusterpmu_pmintenset_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t c_f                   : 1;  /**< [ 31: 31](R/W) Ext-CLUSTERPMU_PMCCNTR overflow interrupt request enable bit. */
        uint32_t raz_wi                : 25; /**< [ 30:  6](R/W) This field is RAZWI */
        uint32_t p5                    : 1;  /**< [  5:  5](R/W) Event counter overflow interrupt request enable bit for ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;.
                                                                 If ext-CLUSTERPMU_PMCFGR.N is less than 31, bits [30:ext-CLUSTERPMU_PMCFGR.N] are RAZ/WI. */
        uint32_t p4                    : 1;  /**< [  4:  4](R/W) Event counter overflow interrupt request enable bit for ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;.
                                                                 If ext-CLUSTERPMU_PMCFGR.N is less than 31, bits [30:ext-CLUSTERPMU_PMCFGR.N] are RAZ/WI. */
        uint32_t p3                    : 1;  /**< [  3:  3](R/W) Event counter overflow interrupt request enable bit for ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;.
                                                                 If ext-CLUSTERPMU_PMCFGR.N is less than 31, bits [30:ext-CLUSTERPMU_PMCFGR.N] are RAZ/WI. */
        uint32_t p2                    : 1;  /**< [  2:  2](R/W) Event counter overflow interrupt request enable bit for ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;.
                                                                 If ext-CLUSTERPMU_PMCFGR.N is less than 31, bits [30:ext-CLUSTERPMU_PMCFGR.N] are RAZ/WI. */
        uint32_t p1                    : 1;  /**< [  1:  1](R/W) Event counter overflow interrupt request enable bit for ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;.
                                                                 If ext-CLUSTERPMU_PMCFGR.N is less than 31, bits [30:ext-CLUSTERPMU_PMCFGR.N] are RAZ/WI. */
        uint32_t p0                    : 1;  /**< [  0:  0](R/W) Event counter overflow interrupt request enable bit for ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;.
                                                                 If ext-CLUSTERPMU_PMCFGR.N is less than 31, bits [30:ext-CLUSTERPMU_PMCFGR.N] are RAZ/WI. */
#else /* Word 0 - Little Endian */
        uint32_t p0                    : 1;  /**< [  0:  0](R/W) Event counter overflow interrupt request enable bit for ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;.
                                                                 If ext-CLUSTERPMU_PMCFGR.N is less than 31, bits [30:ext-CLUSTERPMU_PMCFGR.N] are RAZ/WI. */
        uint32_t p1                    : 1;  /**< [  1:  1](R/W) Event counter overflow interrupt request enable bit for ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;.
                                                                 If ext-CLUSTERPMU_PMCFGR.N is less than 31, bits [30:ext-CLUSTERPMU_PMCFGR.N] are RAZ/WI. */
        uint32_t p2                    : 1;  /**< [  2:  2](R/W) Event counter overflow interrupt request enable bit for ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;.
                                                                 If ext-CLUSTERPMU_PMCFGR.N is less than 31, bits [30:ext-CLUSTERPMU_PMCFGR.N] are RAZ/WI. */
        uint32_t p3                    : 1;  /**< [  3:  3](R/W) Event counter overflow interrupt request enable bit for ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;.
                                                                 If ext-CLUSTERPMU_PMCFGR.N is less than 31, bits [30:ext-CLUSTERPMU_PMCFGR.N] are RAZ/WI. */
        uint32_t p4                    : 1;  /**< [  4:  4](R/W) Event counter overflow interrupt request enable bit for ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;.
                                                                 If ext-CLUSTERPMU_PMCFGR.N is less than 31, bits [30:ext-CLUSTERPMU_PMCFGR.N] are RAZ/WI. */
        uint32_t p5                    : 1;  /**< [  5:  5](R/W) Event counter overflow interrupt request enable bit for ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;.
                                                                 If ext-CLUSTERPMU_PMCFGR.N is less than 31, bits [30:ext-CLUSTERPMU_PMCFGR.N] are RAZ/WI. */
        uint32_t raz_wi                : 25; /**< [ 30:  6](R/W) This field is RAZWI */
        uint32_t c_f                   : 1;  /**< [ 31: 31](R/W) Ext-CLUSTERPMU_PMCCNTR overflow interrupt request enable bit. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_apcx_clusterpmu_pmintenset_s cn; */
};
typedef union cavm_cst_apcx_clusterpmu_pmintenset cavm_cst_apcx_clusterpmu_pmintenset_t;

static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMINTENSET(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMINTENSET(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080210c40ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080210c40ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080210c40ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080210c40ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_APCX_CLUSTERPMU_PMINTENSET", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_APCX_CLUSTERPMU_PMINTENSET(a) cavm_cst_apcx_clusterpmu_pmintenset_t
#define bustype_CAVM_CST_APCX_CLUSTERPMU_PMINTENSET(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_APCX_CLUSTERPMU_PMINTENSET(a) "CST_APCX_CLUSTERPMU_PMINTENSET"
#define busnum_CAVM_CST_APCX_CLUSTERPMU_PMINTENSET(a) (a)
#define arguments_CAVM_CST_APCX_CLUSTERPMU_PMINTENSET(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_apc#_clusterpmu_pmovsclr
 *
 * CST Apc Clusterpmu Pmovsclr Register
 * Contains the state of the overflow bit for the Cycle Count Register, ext-
 * CLUSTERPMU_PMCCNTR, and each of the implemented event counters
 * AArch64-PMEVCNTR&lt;n&gt;. Writing to this register clears these bits.
 */
union cavm_cst_apcx_clusterpmu_pmovsclr
{
    uint32_t u;
    struct cavm_cst_apcx_clusterpmu_pmovsclr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t c_f                   : 1;  /**< [ 31: 31](R/W) Cycle counter overflow clear bit. */
        uint32_t raz_wi                : 25; /**< [ 30:  6](R/W) This field is RAZWI */
        uint32_t p5                    : 1;  /**< [  5:  5](R/W) Event counter overflow clear bit for ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;. Bits [30
                                                                 :ext-CLUSTERPMU_PMCFGR.N] are RAZ/WI. */
        uint32_t p4                    : 1;  /**< [  4:  4](R/W) Event counter overflow clear bit for ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;. Bits [30
                                                                 :ext-CLUSTERPMU_PMCFGR.N] are RAZ/WI. */
        uint32_t p3                    : 1;  /**< [  3:  3](R/W) Event counter overflow clear bit for ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;. Bits [30
                                                                 :ext-CLUSTERPMU_PMCFGR.N] are RAZ/WI. */
        uint32_t p2                    : 1;  /**< [  2:  2](R/W) Event counter overflow clear bit for ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;. Bits [30
                                                                 :ext-CLUSTERPMU_PMCFGR.N] are RAZ/WI. */
        uint32_t p1                    : 1;  /**< [  1:  1](R/W) Event counter overflow clear bit for ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;. Bits [30
                                                                 :ext-CLUSTERPMU_PMCFGR.N] are RAZ/WI. */
        uint32_t p0                    : 1;  /**< [  0:  0](R/W) Event counter overflow clear bit for ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;. Bits [30
                                                                 :ext-CLUSTERPMU_PMCFGR.N] are RAZ/WI. */
#else /* Word 0 - Little Endian */
        uint32_t p0                    : 1;  /**< [  0:  0](R/W) Event counter overflow clear bit for ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;. Bits [30
                                                                 :ext-CLUSTERPMU_PMCFGR.N] are RAZ/WI. */
        uint32_t p1                    : 1;  /**< [  1:  1](R/W) Event counter overflow clear bit for ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;. Bits [30
                                                                 :ext-CLUSTERPMU_PMCFGR.N] are RAZ/WI. */
        uint32_t p2                    : 1;  /**< [  2:  2](R/W) Event counter overflow clear bit for ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;. Bits [30
                                                                 :ext-CLUSTERPMU_PMCFGR.N] are RAZ/WI. */
        uint32_t p3                    : 1;  /**< [  3:  3](R/W) Event counter overflow clear bit for ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;. Bits [30
                                                                 :ext-CLUSTERPMU_PMCFGR.N] are RAZ/WI. */
        uint32_t p4                    : 1;  /**< [  4:  4](R/W) Event counter overflow clear bit for ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;. Bits [30
                                                                 :ext-CLUSTERPMU_PMCFGR.N] are RAZ/WI. */
        uint32_t p5                    : 1;  /**< [  5:  5](R/W) Event counter overflow clear bit for ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;. Bits [30
                                                                 :ext-CLUSTERPMU_PMCFGR.N] are RAZ/WI. */
        uint32_t raz_wi                : 25; /**< [ 30:  6](R/W) This field is RAZWI */
        uint32_t c_f                   : 1;  /**< [ 31: 31](R/W) Cycle counter overflow clear bit. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_apcx_clusterpmu_pmovsclr_s cn; */
};
typedef union cavm_cst_apcx_clusterpmu_pmovsclr cavm_cst_apcx_clusterpmu_pmovsclr_t;

static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMOVSCLR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMOVSCLR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080210c80ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080210c80ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080210c80ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080210c80ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_APCX_CLUSTERPMU_PMOVSCLR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_APCX_CLUSTERPMU_PMOVSCLR(a) cavm_cst_apcx_clusterpmu_pmovsclr_t
#define bustype_CAVM_CST_APCX_CLUSTERPMU_PMOVSCLR(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_APCX_CLUSTERPMU_PMOVSCLR(a) "CST_APCX_CLUSTERPMU_PMOVSCLR"
#define busnum_CAVM_CST_APCX_CLUSTERPMU_PMOVSCLR(a) (a)
#define arguments_CAVM_CST_APCX_CLUSTERPMU_PMOVSCLR(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_apc#_clusterpmu_pmovsset
 *
 * CST Apc Clusterpmu Pmovsset Register
 * Sets the state of the overflow bit for the Cycle Count Register, ext-
 * CLUSTERPMU_PMCCNTR, and each of the implemented event counters
 * AArch64-PMEVCNTR&lt;n&gt;.
 */
union cavm_cst_apcx_clusterpmu_pmovsset
{
    uint32_t u;
    struct cavm_cst_apcx_clusterpmu_pmovsset_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t c_f                   : 1;  /**< [ 31: 31](R/W) Cycle counter overflow set bit. */
        uint32_t raz_wi                : 25; /**< [ 30:  6](R/W) This field is RAZWI */
        uint32_t p5                    : 1;  /**< [  5:  5](R/W) Event counter overflow set bit for ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;. Bits [30
                                                                 :ext-CLUSTERPMU_PMCFGR.N] are RAZ/WI. */
        uint32_t p4                    : 1;  /**< [  4:  4](R/W) Event counter overflow set bit for ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;. Bits [30
                                                                 :ext-CLUSTERPMU_PMCFGR.N] are RAZ/WI. */
        uint32_t p3                    : 1;  /**< [  3:  3](R/W) Event counter overflow set bit for ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;. Bits [30
                                                                 :ext-CLUSTERPMU_PMCFGR.N] are RAZ/WI. */
        uint32_t p2                    : 1;  /**< [  2:  2](R/W) Event counter overflow set bit for ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;. Bits [30
                                                                 :ext-CLUSTERPMU_PMCFGR.N] are RAZ/WI. */
        uint32_t p1                    : 1;  /**< [  1:  1](R/W) Event counter overflow set bit for ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;. Bits [30
                                                                 :ext-CLUSTERPMU_PMCFGR.N] are RAZ/WI. */
        uint32_t p0                    : 1;  /**< [  0:  0](R/W) Event counter overflow set bit for ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;. Bits [30
                                                                 :ext-CLUSTERPMU_PMCFGR.N] are RAZ/WI. */
#else /* Word 0 - Little Endian */
        uint32_t p0                    : 1;  /**< [  0:  0](R/W) Event counter overflow set bit for ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;. Bits [30
                                                                 :ext-CLUSTERPMU_PMCFGR.N] are RAZ/WI. */
        uint32_t p1                    : 1;  /**< [  1:  1](R/W) Event counter overflow set bit for ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;. Bits [30
                                                                 :ext-CLUSTERPMU_PMCFGR.N] are RAZ/WI. */
        uint32_t p2                    : 1;  /**< [  2:  2](R/W) Event counter overflow set bit for ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;. Bits [30
                                                                 :ext-CLUSTERPMU_PMCFGR.N] are RAZ/WI. */
        uint32_t p3                    : 1;  /**< [  3:  3](R/W) Event counter overflow set bit for ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;. Bits [30
                                                                 :ext-CLUSTERPMU_PMCFGR.N] are RAZ/WI. */
        uint32_t p4                    : 1;  /**< [  4:  4](R/W) Event counter overflow set bit for ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;. Bits [30
                                                                 :ext-CLUSTERPMU_PMCFGR.N] are RAZ/WI. */
        uint32_t p5                    : 1;  /**< [  5:  5](R/W) Event counter overflow set bit for ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;. Bits [30
                                                                 :ext-CLUSTERPMU_PMCFGR.N] are RAZ/WI. */
        uint32_t raz_wi                : 25; /**< [ 30:  6](R/W) This field is RAZWI */
        uint32_t c_f                   : 1;  /**< [ 31: 31](R/W) Cycle counter overflow set bit. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_apcx_clusterpmu_pmovsset_s cn; */
};
typedef union cavm_cst_apcx_clusterpmu_pmovsset cavm_cst_apcx_clusterpmu_pmovsset_t;

static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMOVSSET(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMOVSSET(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080210cc0ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080210cc0ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080210cc0ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080210cc0ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_APCX_CLUSTERPMU_PMOVSSET", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_APCX_CLUSTERPMU_PMOVSSET(a) cavm_cst_apcx_clusterpmu_pmovsset_t
#define bustype_CAVM_CST_APCX_CLUSTERPMU_PMOVSSET(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_APCX_CLUSTERPMU_PMOVSSET(a) "CST_APCX_CLUSTERPMU_PMOVSSET"
#define busnum_CAVM_CST_APCX_CLUSTERPMU_PMOVSSET(a) (a)
#define arguments_CAVM_CST_APCX_CLUSTERPMU_PMOVSSET(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_apc#_clusterpmu_pmovssr
 *
 * CST Apc Clusterpmu Pmovssr Register
 * Captured copy of ext-CLUSTERPMU_PMOVSR.  Once captured, the value in ext-
 * CLUSTERPMU_PMOVSSR is unaffected by writes to ext-CLUSTERPMU_PMOVSSET and ext-
 * CLUSTERPMU_PMOVSCLR.
 */
union cavm_cst_apcx_clusterpmu_pmovssr
{
    uint32_t u;
    struct cavm_cst_apcx_clusterpmu_pmovssr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t c_f                   : 1;  /**< [ 31: 31](R/W) Cycle counter overflow bit. */
        uint32_t pn                    : 31; /**< [ 30:  0](R/W) Event counter overflow bit for ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;. Bits [30:ext-
                                                                 CLUSTERPMU_PMCFGR.N] are RAZ/WI. */
#else /* Word 0 - Little Endian */
        uint32_t pn                    : 31; /**< [ 30:  0](R/W) Event counter overflow bit for ext-CLUSTERPMU_PMEVCNTR&lt;n&gt;. Bits [30:ext-
                                                                 CLUSTERPMU_PMCFGR.N] are RAZ/WI. */
        uint32_t c_f                   : 1;  /**< [ 31: 31](R/W) Cycle counter overflow bit. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_apcx_clusterpmu_pmovssr_s cn; */
};
typedef union cavm_cst_apcx_clusterpmu_pmovssr cavm_cst_apcx_clusterpmu_pmovssr_t;

static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMOVSSR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMOVSSR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080210614ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080210614ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080210614ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080210614ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_APCX_CLUSTERPMU_PMOVSSR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_APCX_CLUSTERPMU_PMOVSSR(a) cavm_cst_apcx_clusterpmu_pmovssr_t
#define bustype_CAVM_CST_APCX_CLUSTERPMU_PMOVSSR(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_APCX_CLUSTERPMU_PMOVSSR(a) "CST_APCX_CLUSTERPMU_PMOVSSR"
#define busnum_CAVM_CST_APCX_CLUSTERPMU_PMOVSSR(a) (a)
#define arguments_CAVM_CST_APCX_CLUSTERPMU_PMOVSSR(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_apc#_clusterpmu_pmpidr0
 *
 * CST Apc Clusterpmu Pmpidr0 Register
 * Provides information to identify a Performance Monitor component.
 */
union cavm_cst_apcx_clusterpmu_pmpidr0
{
    uint32_t u;
    struct cavm_cst_apcx_clusterpmu_pmpidr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t part_0                : 8;  /**< [  7:  0](RO) Part number bits [7:0]. */
#else /* Word 0 - Little Endian */
        uint32_t part_0                : 8;  /**< [  7:  0](RO) Part number bits [7:0]. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_apcx_clusterpmu_pmpidr0_s cn; */
};
typedef union cavm_cst_apcx_clusterpmu_pmpidr0 cavm_cst_apcx_clusterpmu_pmpidr0_t;

static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMPIDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMPIDR0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080210fe0ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080210fe0ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080210fe0ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080210fe0ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_APCX_CLUSTERPMU_PMPIDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_APCX_CLUSTERPMU_PMPIDR0(a) cavm_cst_apcx_clusterpmu_pmpidr0_t
#define bustype_CAVM_CST_APCX_CLUSTERPMU_PMPIDR0(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_APCX_CLUSTERPMU_PMPIDR0(a) "CST_APCX_CLUSTERPMU_PMPIDR0"
#define busnum_CAVM_CST_APCX_CLUSTERPMU_PMPIDR0(a) (a)
#define arguments_CAVM_CST_APCX_CLUSTERPMU_PMPIDR0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_apc#_clusterpmu_pmpidr1
 *
 * CST Apc Clusterpmu Pmpidr1 Register
 * Provides information to identify a Performance Monitor component.
 */
union cavm_cst_apcx_clusterpmu_pmpidr1
{
    uint32_t u;
    struct cavm_cst_apcx_clusterpmu_pmpidr1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t des_0                 : 4;  /**< [  7:  4](RO) JEP106 identification code bits [3:0]. */
        uint32_t part_1                : 4;  /**< [  3:  0](RO) Part number bits [11:8]. */
#else /* Word 0 - Little Endian */
        uint32_t part_1                : 4;  /**< [  3:  0](RO) Part number bits [11:8]. */
        uint32_t des_0                 : 4;  /**< [  7:  4](RO) JEP106 identification code bits [3:0]. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_apcx_clusterpmu_pmpidr1_s cn; */
};
typedef union cavm_cst_apcx_clusterpmu_pmpidr1 cavm_cst_apcx_clusterpmu_pmpidr1_t;

static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMPIDR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMPIDR1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080210fe4ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080210fe4ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080210fe4ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080210fe4ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_APCX_CLUSTERPMU_PMPIDR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_APCX_CLUSTERPMU_PMPIDR1(a) cavm_cst_apcx_clusterpmu_pmpidr1_t
#define bustype_CAVM_CST_APCX_CLUSTERPMU_PMPIDR1(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_APCX_CLUSTERPMU_PMPIDR1(a) "CST_APCX_CLUSTERPMU_PMPIDR1"
#define busnum_CAVM_CST_APCX_CLUSTERPMU_PMPIDR1(a) (a)
#define arguments_CAVM_CST_APCX_CLUSTERPMU_PMPIDR1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_apc#_clusterpmu_pmpidr2
 *
 * CST Apc Clusterpmu Pmpidr2 Register
 * Provides information to identify a Performance Monitor component.
 */
union cavm_cst_apcx_clusterpmu_pmpidr2
{
    uint32_t u;
    struct cavm_cst_apcx_clusterpmu_pmpidr2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t revision              : 4;  /**< [  7:  4](RO) Component major revision.
                                                                 For Theodul:
                                                                 - Major revision 0 corresponds to r0p0.
                                                                 - Major revision 1 corresponds to r1p0.
                                                                 - Major revision 2 corresponds to r2p0. */
        uint32_t jedec                 : 1;  /**< [  3:  3](RO) JEDEC assignee. */
        uint32_t des_1                 : 3;  /**< [  2:  0](RO) JEP106 identification code bits [6:4]. */
#else /* Word 0 - Little Endian */
        uint32_t des_1                 : 3;  /**< [  2:  0](RO) JEP106 identification code bits [6:4]. */
        uint32_t jedec                 : 1;  /**< [  3:  3](RO) JEDEC assignee. */
        uint32_t revision              : 4;  /**< [  7:  4](RO) Component major revision.
                                                                 For Theodul:
                                                                 - Major revision 0 corresponds to r0p0.
                                                                 - Major revision 1 corresponds to r1p0.
                                                                 - Major revision 2 corresponds to r2p0. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_apcx_clusterpmu_pmpidr2_s cn; */
};
typedef union cavm_cst_apcx_clusterpmu_pmpidr2 cavm_cst_apcx_clusterpmu_pmpidr2_t;

static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMPIDR2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMPIDR2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080210fe8ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080210fe8ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080210fe8ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080210fe8ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_APCX_CLUSTERPMU_PMPIDR2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_APCX_CLUSTERPMU_PMPIDR2(a) cavm_cst_apcx_clusterpmu_pmpidr2_t
#define bustype_CAVM_CST_APCX_CLUSTERPMU_PMPIDR2(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_APCX_CLUSTERPMU_PMPIDR2(a) "CST_APCX_CLUSTERPMU_PMPIDR2"
#define busnum_CAVM_CST_APCX_CLUSTERPMU_PMPIDR2(a) (a)
#define arguments_CAVM_CST_APCX_CLUSTERPMU_PMPIDR2(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_apc#_clusterpmu_pmpidr3
 *
 * CST Apc Clusterpmu Pmpidr3 Register
 * Provides information to identify a Performance Monitor component.
 */
union cavm_cst_apcx_clusterpmu_pmpidr3
{
    uint32_t u;
    struct cavm_cst_apcx_clusterpmu_pmpidr3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t revand                : 4;  /**< [  7:  4](RO) Component minor revision. */
        uint32_t cmod                  : 4;  /**< [  3:  0](RO) Customer Modified. */
#else /* Word 0 - Little Endian */
        uint32_t cmod                  : 4;  /**< [  3:  0](RO) Customer Modified. */
        uint32_t revand                : 4;  /**< [  7:  4](RO) Component minor revision. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_apcx_clusterpmu_pmpidr3_s cn; */
};
typedef union cavm_cst_apcx_clusterpmu_pmpidr3 cavm_cst_apcx_clusterpmu_pmpidr3_t;

static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMPIDR3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMPIDR3(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080210fecll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080210fecll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080210fecll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080210fecll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_APCX_CLUSTERPMU_PMPIDR3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_APCX_CLUSTERPMU_PMPIDR3(a) cavm_cst_apcx_clusterpmu_pmpidr3_t
#define bustype_CAVM_CST_APCX_CLUSTERPMU_PMPIDR3(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_APCX_CLUSTERPMU_PMPIDR3(a) "CST_APCX_CLUSTERPMU_PMPIDR3"
#define busnum_CAVM_CST_APCX_CLUSTERPMU_PMPIDR3(a) (a)
#define arguments_CAVM_CST_APCX_CLUSTERPMU_PMPIDR3(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_apc#_clusterpmu_pmpidr4
 *
 * CST Apc Clusterpmu Pmpidr4 Register
 * Provides information to identify a Performance Monitor component.
 */
union cavm_cst_apcx_clusterpmu_pmpidr4
{
    uint32_t u;
    struct cavm_cst_apcx_clusterpmu_pmpidr4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t size                  : 4;  /**< [  7:  4](RO) 4KB count. */
        uint32_t des_2                 : 4;  /**< [  3:  0](RO) JEP106 continuation code. */
#else /* Word 0 - Little Endian */
        uint32_t des_2                 : 4;  /**< [  3:  0](RO) JEP106 continuation code. */
        uint32_t size                  : 4;  /**< [  7:  4](RO) 4KB count. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_apcx_clusterpmu_pmpidr4_s cn; */
};
typedef union cavm_cst_apcx_clusterpmu_pmpidr4 cavm_cst_apcx_clusterpmu_pmpidr4_t;

static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMPIDR4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMPIDR4(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080210fd0ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080210fd0ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080210fd0ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080210fd0ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_APCX_CLUSTERPMU_PMPIDR4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_APCX_CLUSTERPMU_PMPIDR4(a) cavm_cst_apcx_clusterpmu_pmpidr4_t
#define bustype_CAVM_CST_APCX_CLUSTERPMU_PMPIDR4(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_APCX_CLUSTERPMU_PMPIDR4(a) "CST_APCX_CLUSTERPMU_PMPIDR4"
#define busnum_CAVM_CST_APCX_CLUSTERPMU_PMPIDR4(a) (a)
#define arguments_CAVM_CST_APCX_CLUSTERPMU_PMPIDR4(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_apc#_clusterpmu_pmsscr
 *
 * CST Apc Clusterpmu Pmsscr Register
 * Provides a mechanism for software to initiate a sample.
 */
union cavm_cst_apcx_clusterpmu_pmsscr
{
    uint32_t u;
    struct cavm_cst_apcx_clusterpmu_pmsscr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_1_31         : 31;
        uint32_t ss                    : 1;  /**< [  0:  0](R/W) Capture now.  The possible values for writing to this bit are: */
#else /* Word 0 - Little Endian */
        uint32_t ss                    : 1;  /**< [  0:  0](R/W) Capture now.  The possible values for writing to this bit are: */
        uint32_t reserved_1_31         : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_apcx_clusterpmu_pmsscr_s cn; */
};
typedef union cavm_cst_apcx_clusterpmu_pmsscr cavm_cst_apcx_clusterpmu_pmsscr_t;

static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMSSCR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMSSCR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a0802106f0ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a0802106f0ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a0802106f0ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a0802106f0ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_APCX_CLUSTERPMU_PMSSCR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_APCX_CLUSTERPMU_PMSSCR(a) cavm_cst_apcx_clusterpmu_pmsscr_t
#define bustype_CAVM_CST_APCX_CLUSTERPMU_PMSSCR(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_APCX_CLUSTERPMU_PMSSCR(a) "CST_APCX_CLUSTERPMU_PMSSCR"
#define busnum_CAVM_CST_APCX_CLUSTERPMU_PMSSCR(a) (a)
#define arguments_CAVM_CST_APCX_CLUSTERPMU_PMSSCR(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_apc#_clusterpmu_pmssrr
 *
 * CST Apc Clusterpmu Pmssrr Register
 * Configure PMU Snapshot to reset counters after each sample taken.
 */
union cavm_cst_apcx_clusterpmu_pmssrr
{
    uint32_t u;
    struct cavm_cst_apcx_clusterpmu_pmssrr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rc                    : 1;  /**< [ 31: 31](R/W) Reset cycle counter.  Indicates whether ext-CLUSTERPMU_PMCCNTR and ext-
                                                                 CLUSTERPMU_PMOVSR are to be reset after a capture. */
        uint32_t raz_wi                : 25; /**< [ 30:  6](R/W) This field is RAZWI */
        uint32_t rp5                   : 1;  /**< [  5:  5](R/W) Reset performance counter.  For each bit [x], if x &gt;= ext-CLUSTERPMU_PMCR.N,
                                                                 the number of implemented counters, then RP[x] is RAZ/WI.  Otherwise, indicates
                                                                 whether ext-PMEVCNTR&lt;x&gt; and ext-PMOVSR[x] are to be reset after a capture. */
        uint32_t rp4                   : 1;  /**< [  4:  4](R/W) Reset performance counter.  For each bit [x], if x &gt;= ext-CLUSTERPMU_PMCR.N,
                                                                 the number of implemented counters, then RP[x] is RAZ/WI.  Otherwise, indicates
                                                                 whether ext-PMEVCNTR&lt;x&gt; and ext-PMOVSR[x] are to be reset after a capture. */
        uint32_t rp3                   : 1;  /**< [  3:  3](R/W) Reset performance counter.  For each bit [x], if x &gt;= ext-CLUSTERPMU_PMCR.N,
                                                                 the number of implemented counters, then RP[x] is RAZ/WI.  Otherwise, indicates
                                                                 whether ext-PMEVCNTR&lt;x&gt; and ext-PMOVSR[x] are to be reset after a capture. */
        uint32_t rp2                   : 1;  /**< [  2:  2](R/W) Reset performance counter.  For each bit [x], if x &gt;= ext-CLUSTERPMU_PMCR.N,
                                                                 the number of implemented counters, then RP[x] is RAZ/WI.  Otherwise, indicates
                                                                 whether ext-PMEVCNTR&lt;x&gt; and ext-PMOVSR[x] are to be reset after a capture. */
        uint32_t rp1                   : 1;  /**< [  1:  1](R/W) Reset performance counter.  For each bit [x], if x &gt;= ext-CLUSTERPMU_PMCR.N,
                                                                 the number of implemented counters, then RP[x] is RAZ/WI.  Otherwise, indicates
                                                                 whether ext-PMEVCNTR&lt;x&gt; and ext-PMOVSR[x] are to be reset after a capture. */
        uint32_t rp0                   : 1;  /**< [  0:  0](R/W) Reset performance counter.  For each bit [x], if x &gt;= ext-CLUSTERPMU_PMCR.N,
                                                                 the number of implemented counters, then RP[x] is RAZ/WI.  Otherwise, indicates
                                                                 whether ext-PMEVCNTR&lt;x&gt; and ext-PMOVSR[x] are to be reset after a capture. */
#else /* Word 0 - Little Endian */
        uint32_t rp0                   : 1;  /**< [  0:  0](R/W) Reset performance counter.  For each bit [x], if x &gt;= ext-CLUSTERPMU_PMCR.N,
                                                                 the number of implemented counters, then RP[x] is RAZ/WI.  Otherwise, indicates
                                                                 whether ext-PMEVCNTR&lt;x&gt; and ext-PMOVSR[x] are to be reset after a capture. */
        uint32_t rp1                   : 1;  /**< [  1:  1](R/W) Reset performance counter.  For each bit [x], if x &gt;= ext-CLUSTERPMU_PMCR.N,
                                                                 the number of implemented counters, then RP[x] is RAZ/WI.  Otherwise, indicates
                                                                 whether ext-PMEVCNTR&lt;x&gt; and ext-PMOVSR[x] are to be reset after a capture. */
        uint32_t rp2                   : 1;  /**< [  2:  2](R/W) Reset performance counter.  For each bit [x], if x &gt;= ext-CLUSTERPMU_PMCR.N,
                                                                 the number of implemented counters, then RP[x] is RAZ/WI.  Otherwise, indicates
                                                                 whether ext-PMEVCNTR&lt;x&gt; and ext-PMOVSR[x] are to be reset after a capture. */
        uint32_t rp3                   : 1;  /**< [  3:  3](R/W) Reset performance counter.  For each bit [x], if x &gt;= ext-CLUSTERPMU_PMCR.N,
                                                                 the number of implemented counters, then RP[x] is RAZ/WI.  Otherwise, indicates
                                                                 whether ext-PMEVCNTR&lt;x&gt; and ext-PMOVSR[x] are to be reset after a capture. */
        uint32_t rp4                   : 1;  /**< [  4:  4](R/W) Reset performance counter.  For each bit [x], if x &gt;= ext-CLUSTERPMU_PMCR.N,
                                                                 the number of implemented counters, then RP[x] is RAZ/WI.  Otherwise, indicates
                                                                 whether ext-PMEVCNTR&lt;x&gt; and ext-PMOVSR[x] are to be reset after a capture. */
        uint32_t rp5                   : 1;  /**< [  5:  5](R/W) Reset performance counter.  For each bit [x], if x &gt;= ext-CLUSTERPMU_PMCR.N,
                                                                 the number of implemented counters, then RP[x] is RAZ/WI.  Otherwise, indicates
                                                                 whether ext-PMEVCNTR&lt;x&gt; and ext-PMOVSR[x] are to be reset after a capture. */
        uint32_t raz_wi                : 25; /**< [ 30:  6](R/W) This field is RAZWI */
        uint32_t rc                    : 1;  /**< [ 31: 31](R/W) Reset cycle counter.  Indicates whether ext-CLUSTERPMU_PMCCNTR and ext-
                                                                 CLUSTERPMU_PMOVSR are to be reset after a capture. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_apcx_clusterpmu_pmssrr_s cn; */
};
typedef union cavm_cst_apcx_clusterpmu_pmssrr cavm_cst_apcx_clusterpmu_pmssrr_t;

static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMSSRR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMSSRR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a0802106f4ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a0802106f4ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a0802106f4ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a0802106f4ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_APCX_CLUSTERPMU_PMSSRR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_APCX_CLUSTERPMU_PMSSRR(a) cavm_cst_apcx_clusterpmu_pmssrr_t
#define bustype_CAVM_CST_APCX_CLUSTERPMU_PMSSRR(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_APCX_CLUSTERPMU_PMSSRR(a) "CST_APCX_CLUSTERPMU_PMSSRR"
#define busnum_CAVM_CST_APCX_CLUSTERPMU_PMSSRR(a) (a)
#define arguments_CAVM_CST_APCX_CLUSTERPMU_PMSSRR(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_apc#_clusterpmu_pmsssr
 *
 * CST Apc Clusterpmu Pmsssr Register
 * Holds status information about the captured counters.
 */
union cavm_cst_apcx_clusterpmu_pmsssr
{
    uint32_t u;
    struct cavm_cst_apcx_clusterpmu_pmsssr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_1_31         : 31;
        uint32_t nc                    : 1;  /**< [  0:  0](R/W) No capture. Indicates whether the PMU counters have been captured. */
#else /* Word 0 - Little Endian */
        uint32_t nc                    : 1;  /**< [  0:  0](R/W) No capture. Indicates whether the PMU counters have been captured. */
        uint32_t reserved_1_31         : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_apcx_clusterpmu_pmsssr_s cn; */
};
typedef union cavm_cst_apcx_clusterpmu_pmsssr cavm_cst_apcx_clusterpmu_pmsssr_t;

static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMSSSR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_APCX_CLUSTERPMU_PMSSSR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080210610ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080210610ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080210610ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080210610ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_APCX_CLUSTERPMU_PMSSSR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_APCX_CLUSTERPMU_PMSSSR(a) cavm_cst_apcx_clusterpmu_pmsssr_t
#define bustype_CAVM_CST_APCX_CLUSTERPMU_PMSSSR(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_APCX_CLUSTERPMU_PMSSSR(a) "CST_APCX_CLUSTERPMU_PMSSSR"
#define busnum_CAVM_CST_APCX_CLUSTERPMU_PMSSSR(a) (a)
#define arguments_CAVM_CST_APCX_CLUSTERPMU_PMSSSR(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_apc#_clusterrom_authstatus
 *
 * CST Apc Clusterrom Authstatus Register
 * Provides information about the state of the authentication interface for debug.
 */
union cavm_cst_apcx_clusterrom_authstatus
{
    uint32_t u;
    struct cavm_cst_apcx_clusterrom_authstatus_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t snid                  : 2;  /**< [  7:  6](RO) Secure Non-invasive Debug.
                                                                 ExternalSecureNoninvasiveDebugEnabled() == ExternalSecureInvasiveDebugEnabled().
                                                                 This field has the same value as the SID field. */
        uint32_t sid                   : 2;  /**< [  5:  4](RO) Secure Invasive Debug. */
        uint32_t nsnid                 : 2;  /**< [  3:  2](RO) Non-secure Non-invasive Debug. */
        uint32_t nsid                  : 2;  /**< [  1:  0](RO) Non-secure Invasive Debug. */
#else /* Word 0 - Little Endian */
        uint32_t nsid                  : 2;  /**< [  1:  0](RO) Non-secure Invasive Debug. */
        uint32_t nsnid                 : 2;  /**< [  3:  2](RO) Non-secure Non-invasive Debug. */
        uint32_t sid                   : 2;  /**< [  5:  4](RO) Secure Invasive Debug. */
        uint32_t snid                  : 2;  /**< [  7:  6](RO) Secure Non-invasive Debug.
                                                                 ExternalSecureNoninvasiveDebugEnabled() == ExternalSecureInvasiveDebugEnabled().
                                                                 This field has the same value as the SID field. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_apcx_clusterrom_authstatus_s cn; */
};
typedef union cavm_cst_apcx_clusterrom_authstatus cavm_cst_apcx_clusterrom_authstatus_t;

static inline uint64_t CAVM_CST_APCX_CLUSTERROM_AUTHSTATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_APCX_CLUSTERROM_AUTHSTATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080200fb8ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080200fb8ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080200fb8ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080200fb8ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_APCX_CLUSTERROM_AUTHSTATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_APCX_CLUSTERROM_AUTHSTATUS(a) cavm_cst_apcx_clusterrom_authstatus_t
#define bustype_CAVM_CST_APCX_CLUSTERROM_AUTHSTATUS(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_APCX_CLUSTERROM_AUTHSTATUS(a) "CST_APCX_CLUSTERROM_AUTHSTATUS"
#define busnum_CAVM_CST_APCX_CLUSTERROM_AUTHSTATUS(a) (a)
#define arguments_CAVM_CST_APCX_CLUSTERROM_AUTHSTATUS(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_apc#_clusterrom_cidr0
 *
 * CST Apc Clusterrom Cidr0 Register
 * Provides CoreSight discovery information.
 */
union cavm_cst_apcx_clusterrom_cidr0
{
    uint32_t u;
    struct cavm_cst_apcx_clusterrom_cidr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t prmbl_0               : 8;  /**< [  7:  0](RO) CoreSight component identification preamble. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_0               : 8;  /**< [  7:  0](RO) CoreSight component identification preamble. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_apcx_clusterrom_cidr0_s cn; */
};
typedef union cavm_cst_apcx_clusterrom_cidr0 cavm_cst_apcx_clusterrom_cidr0_t;

static inline uint64_t CAVM_CST_APCX_CLUSTERROM_CIDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_APCX_CLUSTERROM_CIDR0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080200ff0ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080200ff0ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080200ff0ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080200ff0ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_APCX_CLUSTERROM_CIDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_APCX_CLUSTERROM_CIDR0(a) cavm_cst_apcx_clusterrom_cidr0_t
#define bustype_CAVM_CST_APCX_CLUSTERROM_CIDR0(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_APCX_CLUSTERROM_CIDR0(a) "CST_APCX_CLUSTERROM_CIDR0"
#define busnum_CAVM_CST_APCX_CLUSTERROM_CIDR0(a) (a)
#define arguments_CAVM_CST_APCX_CLUSTERROM_CIDR0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_apc#_clusterrom_cidr1
 *
 * CST Apc Clusterrom Cidr1 Register
 * Provides CoreSight discovery information.
 */
union cavm_cst_apcx_clusterrom_cidr1
{
    uint32_t u;
    struct cavm_cst_apcx_clusterrom_cidr1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t class_f               : 4;  /**< [  7:  4](RO) CoreSight component class. */
        uint32_t prmbl_1               : 4;  /**< [  3:  0](RO) CoreSight component identification preamble. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_1               : 4;  /**< [  3:  0](RO) CoreSight component identification preamble. */
        uint32_t class_f               : 4;  /**< [  7:  4](RO) CoreSight component class. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_apcx_clusterrom_cidr1_s cn; */
};
typedef union cavm_cst_apcx_clusterrom_cidr1 cavm_cst_apcx_clusterrom_cidr1_t;

static inline uint64_t CAVM_CST_APCX_CLUSTERROM_CIDR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_APCX_CLUSTERROM_CIDR1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080200ff4ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080200ff4ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080200ff4ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080200ff4ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_APCX_CLUSTERROM_CIDR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_APCX_CLUSTERROM_CIDR1(a) cavm_cst_apcx_clusterrom_cidr1_t
#define bustype_CAVM_CST_APCX_CLUSTERROM_CIDR1(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_APCX_CLUSTERROM_CIDR1(a) "CST_APCX_CLUSTERROM_CIDR1"
#define busnum_CAVM_CST_APCX_CLUSTERROM_CIDR1(a) (a)
#define arguments_CAVM_CST_APCX_CLUSTERROM_CIDR1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_apc#_clusterrom_cidr2
 *
 * CST Apc Clusterrom Cidr2 Register
 * Provides CoreSight discovery information.
 */
union cavm_cst_apcx_clusterrom_cidr2
{
    uint32_t u;
    struct cavm_cst_apcx_clusterrom_cidr2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t prmbl_2               : 8;  /**< [  7:  0](RO) CoreSight component identification preamble. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_2               : 8;  /**< [  7:  0](RO) CoreSight component identification preamble. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_apcx_clusterrom_cidr2_s cn; */
};
typedef union cavm_cst_apcx_clusterrom_cidr2 cavm_cst_apcx_clusterrom_cidr2_t;

static inline uint64_t CAVM_CST_APCX_CLUSTERROM_CIDR2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_APCX_CLUSTERROM_CIDR2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080200ff8ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080200ff8ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080200ff8ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080200ff8ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_APCX_CLUSTERROM_CIDR2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_APCX_CLUSTERROM_CIDR2(a) cavm_cst_apcx_clusterrom_cidr2_t
#define bustype_CAVM_CST_APCX_CLUSTERROM_CIDR2(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_APCX_CLUSTERROM_CIDR2(a) "CST_APCX_CLUSTERROM_CIDR2"
#define busnum_CAVM_CST_APCX_CLUSTERROM_CIDR2(a) (a)
#define arguments_CAVM_CST_APCX_CLUSTERROM_CIDR2(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_apc#_clusterrom_cidr3
 *
 * CST Apc Clusterrom Cidr3 Register
 * Provides CoreSight discovery information.
 */
union cavm_cst_apcx_clusterrom_cidr3
{
    uint32_t u;
    struct cavm_cst_apcx_clusterrom_cidr3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t prmbl_3               : 8;  /**< [  7:  0](RO) CoreSight component identification preamble. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_3               : 8;  /**< [  7:  0](RO) CoreSight component identification preamble. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_apcx_clusterrom_cidr3_s cn; */
};
typedef union cavm_cst_apcx_clusterrom_cidr3 cavm_cst_apcx_clusterrom_cidr3_t;

static inline uint64_t CAVM_CST_APCX_CLUSTERROM_CIDR3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_APCX_CLUSTERROM_CIDR3(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080200ffcll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080200ffcll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080200ffcll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080200ffcll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_APCX_CLUSTERROM_CIDR3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_APCX_CLUSTERROM_CIDR3(a) cavm_cst_apcx_clusterrom_cidr3_t
#define bustype_CAVM_CST_APCX_CLUSTERROM_CIDR3(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_APCX_CLUSTERROM_CIDR3(a) "CST_APCX_CLUSTERROM_CIDR3"
#define busnum_CAVM_CST_APCX_CLUSTERROM_CIDR3(a) (a)
#define arguments_CAVM_CST_APCX_CLUSTERROM_CIDR3(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_apc#_clusterrom_dbgpcr0
 *
 * CST Apc Clusterrom Dbgpcr0 Register
 * Controls power requests for PDCOMPLEX0.
 */
union cavm_cst_apcx_clusterrom_dbgpcr0
{
    uint32_t u;
    struct cavm_cst_apcx_clusterrom_dbgpcr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_2_31         : 30;
        uint32_t pr                    : 1;  /**< [  1:  1](R/W) Power Request. */
        uint32_t present               : 1;  /**< [  0:  0](R/W) Power request implemented. */
#else /* Word 0 - Little Endian */
        uint32_t present               : 1;  /**< [  0:  0](R/W) Power request implemented. */
        uint32_t pr                    : 1;  /**< [  1:  1](R/W) Power Request. */
        uint32_t reserved_2_31         : 30;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_apcx_clusterrom_dbgpcr0_s cn; */
};
typedef union cavm_cst_apcx_clusterrom_dbgpcr0 cavm_cst_apcx_clusterrom_dbgpcr0_t;

static inline uint64_t CAVM_CST_APCX_CLUSTERROM_DBGPCR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_APCX_CLUSTERROM_DBGPCR0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080200a00ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080200a00ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080200a00ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080200a00ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_APCX_CLUSTERROM_DBGPCR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_APCX_CLUSTERROM_DBGPCR0(a) cavm_cst_apcx_clusterrom_dbgpcr0_t
#define bustype_CAVM_CST_APCX_CLUSTERROM_DBGPCR0(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_APCX_CLUSTERROM_DBGPCR0(a) "CST_APCX_CLUSTERROM_DBGPCR0"
#define busnum_CAVM_CST_APCX_CLUSTERROM_DBGPCR0(a) (a)
#define arguments_CAVM_CST_APCX_CLUSTERROM_DBGPCR0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_apc#_clusterrom_dbgpsr0
 *
 * CST Apc Clusterrom Dbgpsr0 Register
 * Indicates the power status for PDCOMPLEX0.
 */
union cavm_cst_apcx_clusterrom_dbgpsr0
{
    uint32_t u;
    struct cavm_cst_apcx_clusterrom_dbgpsr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_2_31         : 30;
        uint32_t ps                    : 2;  /**< [  1:  0](RO) Power Status. */
#else /* Word 0 - Little Endian */
        uint32_t ps                    : 2;  /**< [  1:  0](RO) Power Status. */
        uint32_t reserved_2_31         : 30;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_apcx_clusterrom_dbgpsr0_s cn; */
};
typedef union cavm_cst_apcx_clusterrom_dbgpsr0 cavm_cst_apcx_clusterrom_dbgpsr0_t;

static inline uint64_t CAVM_CST_APCX_CLUSTERROM_DBGPSR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_APCX_CLUSTERROM_DBGPSR0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080200a80ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080200a80ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080200a80ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080200a80ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_APCX_CLUSTERROM_DBGPSR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_APCX_CLUSTERROM_DBGPSR0(a) cavm_cst_apcx_clusterrom_dbgpsr0_t
#define bustype_CAVM_CST_APCX_CLUSTERROM_DBGPSR0(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_APCX_CLUSTERROM_DBGPSR0(a) "CST_APCX_CLUSTERROM_DBGPSR0"
#define busnum_CAVM_CST_APCX_CLUSTERROM_DBGPSR0(a) (a)
#define arguments_CAVM_CST_APCX_CLUSTERROM_DBGPSR0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_apc#_clusterrom_devarch
 *
 * CST Apc Clusterrom Devarch Register
 * Identifies the architect and architecture of a CoreSight component.
 */
union cavm_cst_apcx_clusterrom_devarch
{
    uint32_t u;
    struct cavm_cst_apcx_clusterrom_devarch_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t architect             : 11; /**< [ 31: 21](RO) Architect. */
        uint32_t present               : 1;  /**< [ 20: 20](RO) Present. */
        uint32_t revision              : 4;  /**< [ 19: 16](RO) Revision. */
        uint32_t archid                : 16; /**< [ 15:  0](RO) Architecture ID. */
#else /* Word 0 - Little Endian */
        uint32_t archid                : 16; /**< [ 15:  0](RO) Architecture ID. */
        uint32_t revision              : 4;  /**< [ 19: 16](RO) Revision. */
        uint32_t present               : 1;  /**< [ 20: 20](RO) Present. */
        uint32_t architect             : 11; /**< [ 31: 21](RO) Architect. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_apcx_clusterrom_devarch_s cn; */
};
typedef union cavm_cst_apcx_clusterrom_devarch cavm_cst_apcx_clusterrom_devarch_t;

static inline uint64_t CAVM_CST_APCX_CLUSTERROM_DEVARCH(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_APCX_CLUSTERROM_DEVARCH(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080200fbcll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080200fbcll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080200fbcll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080200fbcll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_APCX_CLUSTERROM_DEVARCH", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_APCX_CLUSTERROM_DEVARCH(a) cavm_cst_apcx_clusterrom_devarch_t
#define bustype_CAVM_CST_APCX_CLUSTERROM_DEVARCH(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_APCX_CLUSTERROM_DEVARCH(a) "CST_APCX_CLUSTERROM_DEVARCH"
#define busnum_CAVM_CST_APCX_CLUSTERROM_DEVARCH(a) (a)
#define arguments_CAVM_CST_APCX_CLUSTERROM_DEVARCH(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_apc#_clusterrom_devid
 *
 * CST Apc Clusterrom Devid Register
 * Indicates the capabilities of the component.
 */
union cavm_cst_apcx_clusterrom_devid
{
    uint32_t u;
    struct cavm_cst_apcx_clusterrom_devid_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_6_31         : 26;
        uint32_t prr                   : 1;  /**< [  5:  5](RO) Power Request functionality included. */
        uint32_t sysmem                : 1;  /**< [  4:  4](RO) System memory present. */
        uint32_t format                : 4;  /**< [  3:  0](RO) ROM format. */
#else /* Word 0 - Little Endian */
        uint32_t format                : 4;  /**< [  3:  0](RO) ROM format. */
        uint32_t sysmem                : 1;  /**< [  4:  4](RO) System memory present. */
        uint32_t prr                   : 1;  /**< [  5:  5](RO) Power Request functionality included. */
        uint32_t reserved_6_31         : 26;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_apcx_clusterrom_devid_s cn; */
};
typedef union cavm_cst_apcx_clusterrom_devid cavm_cst_apcx_clusterrom_devid_t;

static inline uint64_t CAVM_CST_APCX_CLUSTERROM_DEVID(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_APCX_CLUSTERROM_DEVID(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080200fc8ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080200fc8ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080200fc8ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080200fc8ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_APCX_CLUSTERROM_DEVID", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_APCX_CLUSTERROM_DEVID(a) cavm_cst_apcx_clusterrom_devid_t
#define bustype_CAVM_CST_APCX_CLUSTERROM_DEVID(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_APCX_CLUSTERROM_DEVID(a) "CST_APCX_CLUSTERROM_DEVID"
#define busnum_CAVM_CST_APCX_CLUSTERROM_DEVID(a) (a)
#define arguments_CAVM_CST_APCX_CLUSTERROM_DEVID(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_apc#_clusterrom_devtype
 *
 * CST Apc Clusterrom Devtype Register
 * A debugger can use DEVTYPE to obtain information about a component that has an
 * unrecognized part number.
 */
union cavm_cst_apcx_clusterrom_devtype
{
    uint32_t u;
    struct cavm_cst_apcx_clusterrom_devtype_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t sub                   : 4;  /**< [  7:  4](RO) Sub number */
        uint32_t major                 : 4;  /**< [  3:  0](RO) Major number */
#else /* Word 0 - Little Endian */
        uint32_t major                 : 4;  /**< [  3:  0](RO) Major number */
        uint32_t sub                   : 4;  /**< [  7:  4](RO) Sub number */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_apcx_clusterrom_devtype_s cn; */
};
typedef union cavm_cst_apcx_clusterrom_devtype cavm_cst_apcx_clusterrom_devtype_t;

static inline uint64_t CAVM_CST_APCX_CLUSTERROM_DEVTYPE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_APCX_CLUSTERROM_DEVTYPE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080200fccll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080200fccll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080200fccll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080200fccll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_APCX_CLUSTERROM_DEVTYPE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_APCX_CLUSTERROM_DEVTYPE(a) cavm_cst_apcx_clusterrom_devtype_t
#define bustype_CAVM_CST_APCX_CLUSTERROM_DEVTYPE(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_APCX_CLUSTERROM_DEVTYPE(a) "CST_APCX_CLUSTERROM_DEVTYPE"
#define busnum_CAVM_CST_APCX_CLUSTERROM_DEVTYPE(a) (a)
#define arguments_CAVM_CST_APCX_CLUSTERROM_DEVTYPE(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_apc#_clusterrom_pidr0
 *
 * CST Apc Clusterrom Pidr0 Register
 * Provides CoreSight discovery information.
 */
union cavm_cst_apcx_clusterrom_pidr0
{
    uint32_t u;
    struct cavm_cst_apcx_clusterrom_pidr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t part_0                : 8;  /**< [  7:  0](RO) Part number bits [7:0]. */
#else /* Word 0 - Little Endian */
        uint32_t part_0                : 8;  /**< [  7:  0](RO) Part number bits [7:0]. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_apcx_clusterrom_pidr0_s cn; */
};
typedef union cavm_cst_apcx_clusterrom_pidr0 cavm_cst_apcx_clusterrom_pidr0_t;

static inline uint64_t CAVM_CST_APCX_CLUSTERROM_PIDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_APCX_CLUSTERROM_PIDR0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080200fe0ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080200fe0ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080200fe0ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080200fe0ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_APCX_CLUSTERROM_PIDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_APCX_CLUSTERROM_PIDR0(a) cavm_cst_apcx_clusterrom_pidr0_t
#define bustype_CAVM_CST_APCX_CLUSTERROM_PIDR0(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_APCX_CLUSTERROM_PIDR0(a) "CST_APCX_CLUSTERROM_PIDR0"
#define busnum_CAVM_CST_APCX_CLUSTERROM_PIDR0(a) (a)
#define arguments_CAVM_CST_APCX_CLUSTERROM_PIDR0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_apc#_clusterrom_pidr1
 *
 * CST Apc Clusterrom Pidr1 Register
 * Provides CoreSight discovery information.
 */
union cavm_cst_apcx_clusterrom_pidr1
{
    uint32_t u;
    struct cavm_cst_apcx_clusterrom_pidr1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t des_0                 : 4;  /**< [  7:  4](RO) JEP106 identification code bits [3:0]. */
        uint32_t part_1                : 4;  /**< [  3:  0](RO) Part number bits [11:8]. */
#else /* Word 0 - Little Endian */
        uint32_t part_1                : 4;  /**< [  3:  0](RO) Part number bits [11:8]. */
        uint32_t des_0                 : 4;  /**< [  7:  4](RO) JEP106 identification code bits [3:0]. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_apcx_clusterrom_pidr1_s cn; */
};
typedef union cavm_cst_apcx_clusterrom_pidr1 cavm_cst_apcx_clusterrom_pidr1_t;

static inline uint64_t CAVM_CST_APCX_CLUSTERROM_PIDR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_APCX_CLUSTERROM_PIDR1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080200fe4ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080200fe4ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080200fe4ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080200fe4ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_APCX_CLUSTERROM_PIDR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_APCX_CLUSTERROM_PIDR1(a) cavm_cst_apcx_clusterrom_pidr1_t
#define bustype_CAVM_CST_APCX_CLUSTERROM_PIDR1(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_APCX_CLUSTERROM_PIDR1(a) "CST_APCX_CLUSTERROM_PIDR1"
#define busnum_CAVM_CST_APCX_CLUSTERROM_PIDR1(a) (a)
#define arguments_CAVM_CST_APCX_CLUSTERROM_PIDR1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_apc#_clusterrom_pidr2
 *
 * CST Apc Clusterrom Pidr2 Register
 * Provides CoreSight discovery information.
 */
union cavm_cst_apcx_clusterrom_pidr2
{
    uint32_t u;
    struct cavm_cst_apcx_clusterrom_pidr2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t revision              : 4;  /**< [  7:  4](RO) Component major revision.
                                                                 For Theodul:
                                                                 - Major revision 0 corresponds to r0p0.
                                                                 - Major revision 1 corresponds to r1p0.
                                                                 - Major revision 2 corresponds to r2p0. */
        uint32_t jedec                 : 1;  /**< [  3:  3](RO) JEDEC assignee. */
        uint32_t des_1                 : 3;  /**< [  2:  0](RO) JEP106 identification code bits [6:4]. */
#else /* Word 0 - Little Endian */
        uint32_t des_1                 : 3;  /**< [  2:  0](RO) JEP106 identification code bits [6:4]. */
        uint32_t jedec                 : 1;  /**< [  3:  3](RO) JEDEC assignee. */
        uint32_t revision              : 4;  /**< [  7:  4](RO) Component major revision.
                                                                 For Theodul:
                                                                 - Major revision 0 corresponds to r0p0.
                                                                 - Major revision 1 corresponds to r1p0.
                                                                 - Major revision 2 corresponds to r2p0. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_apcx_clusterrom_pidr2_s cn; */
};
typedef union cavm_cst_apcx_clusterrom_pidr2 cavm_cst_apcx_clusterrom_pidr2_t;

static inline uint64_t CAVM_CST_APCX_CLUSTERROM_PIDR2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_APCX_CLUSTERROM_PIDR2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080200fe8ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080200fe8ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080200fe8ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080200fe8ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_APCX_CLUSTERROM_PIDR2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_APCX_CLUSTERROM_PIDR2(a) cavm_cst_apcx_clusterrom_pidr2_t
#define bustype_CAVM_CST_APCX_CLUSTERROM_PIDR2(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_APCX_CLUSTERROM_PIDR2(a) "CST_APCX_CLUSTERROM_PIDR2"
#define busnum_CAVM_CST_APCX_CLUSTERROM_PIDR2(a) (a)
#define arguments_CAVM_CST_APCX_CLUSTERROM_PIDR2(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_apc#_clusterrom_pidr3
 *
 * CST Apc Clusterrom Pidr3 Register
 * Provides CoreSight discovery information.
 */
union cavm_cst_apcx_clusterrom_pidr3
{
    uint32_t u;
    struct cavm_cst_apcx_clusterrom_pidr3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t revand                : 4;  /**< [  7:  4](RO) Component minor revision. */
        uint32_t cmod                  : 4;  /**< [  3:  0](RO) Customer Modified. */
#else /* Word 0 - Little Endian */
        uint32_t cmod                  : 4;  /**< [  3:  0](RO) Customer Modified. */
        uint32_t revand                : 4;  /**< [  7:  4](RO) Component minor revision. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_apcx_clusterrom_pidr3_s cn; */
};
typedef union cavm_cst_apcx_clusterrom_pidr3 cavm_cst_apcx_clusterrom_pidr3_t;

static inline uint64_t CAVM_CST_APCX_CLUSTERROM_PIDR3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_APCX_CLUSTERROM_PIDR3(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080200fecll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080200fecll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080200fecll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080200fecll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_APCX_CLUSTERROM_PIDR3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_APCX_CLUSTERROM_PIDR3(a) cavm_cst_apcx_clusterrom_pidr3_t
#define bustype_CAVM_CST_APCX_CLUSTERROM_PIDR3(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_APCX_CLUSTERROM_PIDR3(a) "CST_APCX_CLUSTERROM_PIDR3"
#define busnum_CAVM_CST_APCX_CLUSTERROM_PIDR3(a) (a)
#define arguments_CAVM_CST_APCX_CLUSTERROM_PIDR3(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_apc#_clusterrom_pidr4
 *
 * CST Apc Clusterrom Pidr4 Register
 * Provides CoreSight discovery information.
 */
union cavm_cst_apcx_clusterrom_pidr4
{
    uint32_t u;
    struct cavm_cst_apcx_clusterrom_pidr4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t size                  : 4;  /**< [  7:  4](RO) 4KB count. */
        uint32_t des_2                 : 4;  /**< [  3:  0](RO) JEP106 continuation code. */
#else /* Word 0 - Little Endian */
        uint32_t des_2                 : 4;  /**< [  3:  0](RO) JEP106 continuation code. */
        uint32_t size                  : 4;  /**< [  7:  4](RO) 4KB count. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_apcx_clusterrom_pidr4_s cn; */
};
typedef union cavm_cst_apcx_clusterrom_pidr4 cavm_cst_apcx_clusterrom_pidr4_t;

static inline uint64_t CAVM_CST_APCX_CLUSTERROM_PIDR4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_APCX_CLUSTERROM_PIDR4(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080200fd0ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080200fd0ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080200fd0ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080200fd0ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_APCX_CLUSTERROM_PIDR4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_APCX_CLUSTERROM_PIDR4(a) cavm_cst_apcx_clusterrom_pidr4_t
#define bustype_CAVM_CST_APCX_CLUSTERROM_PIDR4(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_APCX_CLUSTERROM_PIDR4(a) "CST_APCX_CLUSTERROM_PIDR4"
#define busnum_CAVM_CST_APCX_CLUSTERROM_PIDR4(a) (a)
#define arguments_CAVM_CST_APCX_CLUSTERROM_PIDR4(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_apc#_clusterrom_pridr0
 *
 * CST Apc Clusterrom Pridr0 Register
 * Indicates the features of the power request functionality.
 */
union cavm_cst_apcx_clusterrom_pridr0
{
    uint32_t u;
    struct cavm_cst_apcx_clusterrom_pridr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_6_31         : 26;
        uint32_t sysrr                 : 1;  /**< [  5:  5](RO) System reset request functionality present. */
        uint32_t dbgrr                 : 1;  /**< [  4:  4](RO) Debug reset request functionality present. */
        uint32_t version_f             : 4;  /**< [  3:  0](RO) Version of the power request functionality. */
#else /* Word 0 - Little Endian */
        uint32_t version_f             : 4;  /**< [  3:  0](RO) Version of the power request functionality. */
        uint32_t dbgrr                 : 1;  /**< [  4:  4](RO) Debug reset request functionality present. */
        uint32_t sysrr                 : 1;  /**< [  5:  5](RO) System reset request functionality present. */
        uint32_t reserved_6_31         : 26;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_apcx_clusterrom_pridr0_s cn; */
};
typedef union cavm_cst_apcx_clusterrom_pridr0 cavm_cst_apcx_clusterrom_pridr0_t;

static inline uint64_t CAVM_CST_APCX_CLUSTERROM_PRIDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_APCX_CLUSTERROM_PRIDR0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080200c00ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080200c00ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080200c00ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080200c00ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_APCX_CLUSTERROM_PRIDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_APCX_CLUSTERROM_PRIDR0(a) cavm_cst_apcx_clusterrom_pridr0_t
#define bustype_CAVM_CST_APCX_CLUSTERROM_PRIDR0(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_APCX_CLUSTERROM_PRIDR0(a) "CST_APCX_CLUSTERROM_PRIDR0"
#define busnum_CAVM_CST_APCX_CLUSTERROM_PRIDR0(a) (a)
#define arguments_CAVM_CST_APCX_CLUSTERROM_PRIDR0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_apc#_clusterrom_romentry0
 *
 * CST Apc Clusterrom Romentry0 Register
 * Provides the address offset for one CoreSight component.
 */
union cavm_cst_apcx_clusterrom_romentry0
{
    uint32_t u;
    struct cavm_cst_apcx_clusterrom_romentry0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t offset                : 20; /**< [ 31: 12](RO) The component address, relative to the base address of this ROM Table. The
                                                                 component address is calculated using the following equation:
                                                                 Component Address = ROM Table Base Address + (OFFSET \<\< 12). */
        uint32_t reserved_3_11         : 9;
        uint32_t poweridvalid          : 1;  /**< [  2:  2](RO) Indicates if the Power domain ID field contains a Power domain ID. */
        uint32_t present               : 2;  /**< [  1:  0](RO) Indicates whether an entry is present at this location in the ROM Table. */
#else /* Word 0 - Little Endian */
        uint32_t present               : 2;  /**< [  1:  0](RO) Indicates whether an entry is present at this location in the ROM Table. */
        uint32_t poweridvalid          : 1;  /**< [  2:  2](RO) Indicates if the Power domain ID field contains a Power domain ID. */
        uint32_t reserved_3_11         : 9;
        uint32_t offset                : 20; /**< [ 31: 12](RO) The component address, relative to the base address of this ROM Table. The
                                                                 component address is calculated using the following equation:
                                                                 Component Address = ROM Table Base Address + (OFFSET \<\< 12). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_apcx_clusterrom_romentry0_s cn; */
};
typedef union cavm_cst_apcx_clusterrom_romentry0 cavm_cst_apcx_clusterrom_romentry0_t;

static inline uint64_t CAVM_CST_APCX_CLUSTERROM_ROMENTRY0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_APCX_CLUSTERROM_ROMENTRY0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080200000ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080200000ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080200000ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080200000ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_APCX_CLUSTERROM_ROMENTRY0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_APCX_CLUSTERROM_ROMENTRY0(a) cavm_cst_apcx_clusterrom_romentry0_t
#define bustype_CAVM_CST_APCX_CLUSTERROM_ROMENTRY0(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_APCX_CLUSTERROM_ROMENTRY0(a) "CST_APCX_CLUSTERROM_ROMENTRY0"
#define busnum_CAVM_CST_APCX_CLUSTERROM_ROMENTRY0(a) (a)
#define arguments_CAVM_CST_APCX_CLUSTERROM_ROMENTRY0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_apc#_clusterrom_romentry1
 *
 * CST Apc Clusterrom Romentry1 Register
 * Provides the address offset for one CoreSight component.
 */
union cavm_cst_apcx_clusterrom_romentry1
{
    uint32_t u;
    struct cavm_cst_apcx_clusterrom_romentry1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t offset                : 20; /**< [ 31: 12](RO) The component address, relative to the base address of this ROM Table. The
                                                                 component address is calculated using the following equation:
                                                                 Component Address = ROM Table Base Address + (OFFSET \<\< 12). */
        uint32_t reserved_3_11         : 9;
        uint32_t poweridvalid          : 1;  /**< [  2:  2](RO) Indicates if the Power domain ID field contains a Power domain ID. */
        uint32_t present               : 2;  /**< [  1:  0](RO) Indicates whether an entry is present at this location in the ROM Table. */
#else /* Word 0 - Little Endian */
        uint32_t present               : 2;  /**< [  1:  0](RO) Indicates whether an entry is present at this location in the ROM Table. */
        uint32_t poweridvalid          : 1;  /**< [  2:  2](RO) Indicates if the Power domain ID field contains a Power domain ID. */
        uint32_t reserved_3_11         : 9;
        uint32_t offset                : 20; /**< [ 31: 12](RO) The component address, relative to the base address of this ROM Table. The
                                                                 component address is calculated using the following equation:
                                                                 Component Address = ROM Table Base Address + (OFFSET \<\< 12). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_apcx_clusterrom_romentry1_s cn; */
};
typedef union cavm_cst_apcx_clusterrom_romentry1 cavm_cst_apcx_clusterrom_romentry1_t;

static inline uint64_t CAVM_CST_APCX_CLUSTERROM_ROMENTRY1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_APCX_CLUSTERROM_ROMENTRY1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080200004ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080200004ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080200004ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080200004ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_APCX_CLUSTERROM_ROMENTRY1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_APCX_CLUSTERROM_ROMENTRY1(a) cavm_cst_apcx_clusterrom_romentry1_t
#define bustype_CAVM_CST_APCX_CLUSTERROM_ROMENTRY1(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_APCX_CLUSTERROM_ROMENTRY1(a) "CST_APCX_CLUSTERROM_ROMENTRY1"
#define busnum_CAVM_CST_APCX_CLUSTERROM_ROMENTRY1(a) (a)
#define arguments_CAVM_CST_APCX_CLUSTERROM_ROMENTRY1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_apc#_clusterrom_romentry2
 *
 * CST Apc Clusterrom Romentry2 Register
 * Provides the address offset for one CoreSight component.
 */
union cavm_cst_apcx_clusterrom_romentry2
{
    uint32_t u;
    struct cavm_cst_apcx_clusterrom_romentry2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t offset                : 20; /**< [ 31: 12](RO) The component address, relative to the base address of this ROM Table. The
                                                                 component address is calculated using the following equation:
                                                                 Component Address = ROM Table Base Address + (OFFSET \<\< 12).
                                                                 The value of this field depends on the cluster configuration. */
        uint32_t reserved_9_11         : 3;
        uint32_t powerid               : 5;  /**< [  8:  4](RO) The power domain ID of the component.  This field is only valid if the POWERIDVALID field is 0b1.
                                                                 The value of this field depends on the cluster configuration. */
        uint32_t reserved_3            : 1;
        uint32_t poweridvalid          : 1;  /**< [  2:  2](RO) Indicates if the Power domain ID field contains a Power domain ID.
                                                                 The value of this field depends on the cluster configuration. */
        uint32_t present               : 2;  /**< [  1:  0](RO) Indicates whether an entry is present at this location in the ROM Table.
                                                                 The value of this field depends on the cluster configuration. */
#else /* Word 0 - Little Endian */
        uint32_t present               : 2;  /**< [  1:  0](RO) Indicates whether an entry is present at this location in the ROM Table.
                                                                 The value of this field depends on the cluster configuration. */
        uint32_t poweridvalid          : 1;  /**< [  2:  2](RO) Indicates if the Power domain ID field contains a Power domain ID.
                                                                 The value of this field depends on the cluster configuration. */
        uint32_t reserved_3            : 1;
        uint32_t powerid               : 5;  /**< [  8:  4](RO) The power domain ID of the component.  This field is only valid if the POWERIDVALID field is 0b1.
                                                                 The value of this field depends on the cluster configuration. */
        uint32_t reserved_9_11         : 3;
        uint32_t offset                : 20; /**< [ 31: 12](RO) The component address, relative to the base address of this ROM Table. The
                                                                 component address is calculated using the following equation:
                                                                 Component Address = ROM Table Base Address + (OFFSET \<\< 12).
                                                                 The value of this field depends on the cluster configuration. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_apcx_clusterrom_romentry2_s cn; */
};
typedef union cavm_cst_apcx_clusterrom_romentry2 cavm_cst_apcx_clusterrom_romentry2_t;

static inline uint64_t CAVM_CST_APCX_CLUSTERROM_ROMENTRY2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_APCX_CLUSTERROM_ROMENTRY2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080200008ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080200008ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080200008ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080200008ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_APCX_CLUSTERROM_ROMENTRY2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_APCX_CLUSTERROM_ROMENTRY2(a) cavm_cst_apcx_clusterrom_romentry2_t
#define bustype_CAVM_CST_APCX_CLUSTERROM_ROMENTRY2(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_APCX_CLUSTERROM_ROMENTRY2(a) "CST_APCX_CLUSTERROM_ROMENTRY2"
#define busnum_CAVM_CST_APCX_CLUSTERROM_ROMENTRY2(a) (a)
#define arguments_CAVM_CST_APCX_CLUSTERROM_ROMENTRY2(a) (a),-1,-1,-1

#endif /* __CAVM_CSRS_CST_APC_H__ */
