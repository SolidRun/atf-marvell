#ifndef __CAVM_CSRS_PMEM_H__
#define __CAVM_CSRS_PMEM_H__
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
 * PMEM.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Register (RSL) pmem#_arb_priority
 *
 * Config of high-priority for internal norm clients Register
 */
union cavm_pmemx_arb_priority
{
    uint64_t u;
    struct cavm_pmemx_arb_priority_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_25_63        : 39;
        uint64_t rd256                 : 9;  /**< [ 24: 16](R/W) High-priority bits for each norm client from RD256 ports. */
        uint64_t reserved_2_15         : 14;
        uint64_t wr256                 : 2;  /**< [  1:  0](R/W) High-priority bits for each norm client from WR256 ports. */
#else /* Word 0 - Little Endian */
        uint64_t wr256                 : 2;  /**< [  1:  0](R/W) High-priority bits for each norm client from WR256 ports. */
        uint64_t reserved_2_15         : 14;
        uint64_t rd256                 : 9;  /**< [ 24: 16](R/W) High-priority bits for each norm client from RD256 ports. */
        uint64_t reserved_25_63        : 39;
#endif /* Word 0 - End */
    } s;
    struct cavm_pmemx_arb_priority_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_25_31        : 7;
        uint64_t rd256                 : 9;  /**< [ 24: 16](R/W) High-priority bits for each norm client from RD256 ports. */
        uint64_t reserved_2_15         : 14;
        uint64_t wr256                 : 2;  /**< [  1:  0](R/W) High-priority bits for each norm client from WR256 ports. */
#else /* Word 0 - Little Endian */
        uint64_t wr256                 : 2;  /**< [  1:  0](R/W) High-priority bits for each norm client from WR256 ports. */
        uint64_t reserved_2_15         : 14;
        uint64_t rd256                 : 9;  /**< [ 24: 16](R/W) High-priority bits for each norm client from RD256 ports. */
        uint64_t reserved_25_31        : 7;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pmemx_arb_priority cavm_pmemx_arb_priority_t;

static inline uint64_t CAVM_PMEMX_ARB_PRIORITY(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PMEMX_ARB_PRIORITY(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=1))
        return 0x87e042500140ll + 0x80000ll * ((a) & 0x1);
    __cavm_csr_fatal("PMEMX_ARB_PRIORITY", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PMEMX_ARB_PRIORITY(a) cavm_pmemx_arb_priority_t
#define bustype_CAVM_PMEMX_ARB_PRIORITY(a) CSR_TYPE_RSL
#define basename_CAVM_PMEMX_ARB_PRIORITY(a) "PMEMX_ARB_PRIORITY"
#define busnum_CAVM_PMEMX_ARB_PRIORITY(a) (a)
#define arguments_CAVM_PMEMX_ARB_PRIORITY(a) (a),-1,-1,-1

/**
 * Register (RSL) pmem#_ecc_signature
 *
 * Primary Configuration Register
 */
union cavm_pmemx_ecc_signature
{
    uint64_t u;
    struct cavm_pmemx_ecc_signature_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t wr256                 : 2;  /**< [ 63: 62](RO/H) If ECC event was for this port, a bit will be asserted here. */
        uint64_t reserved_57_61        : 5;
        uint64_t rd256                 : 9;  /**< [ 56: 48](RO/H) If ECC event was for this port, a bit will be asserted here. */
        uint64_t reserved_34_47        : 14;
        uint64_t dbe                   : 1;  /**< [ 33: 33](R/W1C/H) Uncorrectable double bit error(s) */
        uint64_t sbe                   : 1;  /**< [ 32: 32](R/W1C/H) Correctable single bit error(s) */
        uint64_t reserved_25_31        : 7;
        uint64_t byte_addr             : 25; /**< [ 24:  0](RO/H) Byte-aligned address of ECC event. */
#else /* Word 0 - Little Endian */
        uint64_t byte_addr             : 25; /**< [ 24:  0](RO/H) Byte-aligned address of ECC event. */
        uint64_t reserved_25_31        : 7;
        uint64_t sbe                   : 1;  /**< [ 32: 32](R/W1C/H) Correctable single bit error(s) */
        uint64_t dbe                   : 1;  /**< [ 33: 33](R/W1C/H) Uncorrectable double bit error(s) */
        uint64_t reserved_34_47        : 14;
        uint64_t rd256                 : 9;  /**< [ 56: 48](RO/H) If ECC event was for this port, a bit will be asserted here. */
        uint64_t reserved_57_61        : 5;
        uint64_t wr256                 : 2;  /**< [ 63: 62](RO/H) If ECC event was for this port, a bit will be asserted here. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pmemx_ecc_signature_s cn; */
};
typedef union cavm_pmemx_ecc_signature cavm_pmemx_ecc_signature_t;

static inline uint64_t CAVM_PMEMX_ECC_SIGNATURE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PMEMX_ECC_SIGNATURE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=1))
        return 0x87e042500120ll + 0x80000ll * ((a) & 0x1);
    __cavm_csr_fatal("PMEMX_ECC_SIGNATURE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PMEMX_ECC_SIGNATURE(a) cavm_pmemx_ecc_signature_t
#define bustype_CAVM_PMEMX_ECC_SIGNATURE(a) CSR_TYPE_RSL
#define basename_CAVM_PMEMX_ECC_SIGNATURE(a) "PMEMX_ECC_SIGNATURE"
#define busnum_CAVM_PMEMX_ECC_SIGNATURE(a) (a)
#define arguments_CAVM_PMEMX_ECC_SIGNATURE(a) (a),-1,-1,-1

/**
 * Register (RSL) pmem#_main_cfg
 *
 * Primary Configuration Register
 */
union cavm_pmemx_main_cfg
{
    uint64_t u;
    struct cavm_pmemx_main_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t disable_mdc_hub       : 1;  /**< [  4:  4](R/W) Connects to blk__csr_dis on mdc_hub for all tiles. */
        uint64_t reserved_1_3          : 3;
        uint64_t force_update_state    : 1;  /**< [  0:  0](R/W) Debug bit. This forces state machines to update by disabling their dynamic clock gating code. */
#else /* Word 0 - Little Endian */
        uint64_t force_update_state    : 1;  /**< [  0:  0](R/W) Debug bit. This forces state machines to update by disabling their dynamic clock gating code. */
        uint64_t reserved_1_3          : 3;
        uint64_t disable_mdc_hub       : 1;  /**< [  4:  4](R/W) Connects to blk__csr_dis on mdc_hub for all tiles. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pmemx_main_cfg_s cn; */
};
typedef union cavm_pmemx_main_cfg cavm_pmemx_main_cfg_t;

static inline uint64_t CAVM_PMEMX_MAIN_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PMEMX_MAIN_CFG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=1))
        return 0x87e042500100ll + 0x80000ll * ((a) & 0x1);
    __cavm_csr_fatal("PMEMX_MAIN_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PMEMX_MAIN_CFG(a) cavm_pmemx_main_cfg_t
#define bustype_CAVM_PMEMX_MAIN_CFG(a) CSR_TYPE_RSL
#define basename_CAVM_PMEMX_MAIN_CFG(a) "PMEMX_MAIN_CFG"
#define busnum_CAVM_PMEMX_MAIN_CFG(a) (a)
#define arguments_CAVM_PMEMX_MAIN_CFG(a) (a),-1,-1,-1

/**
 * Register (RSL) pmem#_mem_addr
 *
 * Memory Window Registers
 */
union cavm_pmemx_mem_addr
{
    uint64_t u;
    struct cavm_pmemx_mem_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_23_63        : 41;
        uint64_t msb                   : 5;  /**< [ 22: 18](R/W) Memory window. */
        uint64_t reserved_0_17         : 18;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_17         : 18;
        uint64_t msb                   : 5;  /**< [ 22: 18](R/W) Memory window. */
        uint64_t reserved_23_63        : 41;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pmemx_mem_addr_s cn; */
};
typedef union cavm_pmemx_mem_addr cavm_pmemx_mem_addr_t;

static inline uint64_t CAVM_PMEMX_MEM_ADDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PMEMX_MEM_ADDR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=1))
        return 0x87e04253fff8ll + 0x80000ll * ((a) & 0x1);
    __cavm_csr_fatal("PMEMX_MEM_ADDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PMEMX_MEM_ADDR(a) cavm_pmemx_mem_addr_t
#define bustype_CAVM_PMEMX_MEM_ADDR(a) CSR_TYPE_RSL
#define basename_CAVM_PMEMX_MEM_ADDR(a) "PMEMX_MEM_ADDR"
#define busnum_CAVM_PMEMX_MEM_ADDR(a) (a)
#define arguments_CAVM_PMEMX_MEM_ADDR(a) (a),-1,-1,-1

/**
 * Register (RSL) pmem#_mem_window#
 *
 * Memory Window Registers
 */
union cavm_pmemx_mem_windowx
{
    uint64_t u;
    struct cavm_pmemx_mem_windowx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W) Memory window. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W) Memory window. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pmemx_mem_windowx_s cn; */
};
typedef union cavm_pmemx_mem_windowx cavm_pmemx_mem_windowx_t;

static inline uint64_t CAVM_PMEMX_MEM_WINDOWX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PMEMX_MEM_WINDOWX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=1) && (b<=32767)))
        return 0x87e042540000ll + 0x80000ll * ((a) & 0x1) + 8ll * ((b) & 0x7fff);
    __cavm_csr_fatal("PMEMX_MEM_WINDOWX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_PMEMX_MEM_WINDOWX(a,b) cavm_pmemx_mem_windowx_t
#define bustype_CAVM_PMEMX_MEM_WINDOWX(a,b) CSR_TYPE_RSL
#define basename_CAVM_PMEMX_MEM_WINDOWX(a,b) "PMEMX_MEM_WINDOWX"
#define busnum_CAVM_PMEMX_MEM_WINDOWX(a,b) (a)
#define arguments_CAVM_PMEMX_MEM_WINDOWX(a,b) (a),(b),-1,-1

#endif /* __CAVM_CSRS_PMEM_H__ */
