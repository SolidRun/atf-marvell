#ifndef __CAVM_CSRS_MSW_H__
#define __CAVM_CSRS_MSW_H__
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
 * OcteonTX MSW.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration msw_bar_e
 *
 * MSW Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define CAVM_MSW_BAR_E_MSWX_PF_BAR0(a) (0x87e300000000ll + 0x1000000ll * (a))
#define CAVM_MSW_BAR_E_MSWX_PF_BAR0_SIZE 0x1000000ull

/**
 * Register (RSL) msw#_msh#_pfc#
 *
 * CCU MSW Performance Counter Registers
 */
union cavm_mswx_mshx_pfcx
{
    uint64_t u;
    struct cavm_mswx_mshx_pfcx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Current counter value. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Current counter value. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mswx_mshx_pfcx_s cn; */
};
typedef union cavm_mswx_mshx_pfcx cavm_mswx_mshx_pfcx_t;

static inline uint64_t CAVM_MSWX_MSHX_PFCX(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MSWX_MSHX_PFCX(uint64_t a, uint64_t b, uint64_t c)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=23) && (b<=3) && (c<=3)))
        return 0x87e300000060ll + 0x1000000ll * ((a) & 0x1f) + 0x4000ll * ((b) & 0x3) + 8ll * ((c) & 0x3);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=7) && (b<=3) && (c<=3)))
        return 0x87e300000060ll + 0x1000000ll * ((a) & 0x7) + 0x4000ll * ((b) & 0x3) + 8ll * ((c) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=17) && (b<=3) && (c<=3)))
        return 0x87e300000060ll + 0x1000000ll * ((a) & 0x1f) + 0x4000ll * ((b) & 0x3) + 8ll * ((c) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=11) && (b<=3) && (c<=3)))
        return 0x87e300000060ll + 0x1000000ll * ((a) & 0xf) + 0x4000ll * ((b) & 0x3) + 8ll * ((c) & 0x3);
    __cavm_csr_fatal("MSWX_MSHX_PFCX", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_MSWX_MSHX_PFCX(a,b,c) cavm_mswx_mshx_pfcx_t
#define bustype_CAVM_MSWX_MSHX_PFCX(a,b,c) CSR_TYPE_RSL
#define basename_CAVM_MSWX_MSHX_PFCX(a,b,c) "MSWX_MSHX_PFCX"
#define device_bar_CAVM_MSWX_MSHX_PFCX(a,b,c) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MSWX_MSHX_PFCX(a,b,c) (a)
#define arguments_CAVM_MSWX_MSHX_PFCX(a,b,c) (a),(b),(c),-1

/**
 * Register (RSL) msw#_msh#_prf
 *
 * MSW Performance Counter Control Registers
 * This register controls measurement of the number of active cycles on each channel
 * out from MSW in one cardinal direction. Note a full cache line on the DAT channel
 * is counted as four active cycles.
 * _ MSH(0) = MSW to Mesh North.
 * _ MSH(1) = MSW to Mesh East.
 * _ MSH(2) = MSW to Mesh South.
 * _ MSH(3) = MSW to Mesh West.
 */
union cavm_mswx_mshx_prf
{
    uint64_t u;
    struct cavm_mswx_mshx_prf_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t snp_en                : 1;  /**< [  3:  3](R/W) Enable counting the number of active cycles out of MSW on the SNP channel in MSW_MSH()_PFC(3). */
        uint64_t rsp_en                : 1;  /**< [  2:  2](R/W) Enable counting the number of active cycles out of MSW on the RSP channel in MSW_MSH()_PFC(2). */
        uint64_t dat_en                : 1;  /**< [  1:  1](R/W) Enable counting the number of active cycles out of MSW on the DAT channel in MSW_MSH()_PFC(1). */
        uint64_t req_en                : 1;  /**< [  0:  0](R/W) Enable counting the number of active cycles out of MSW on the REQ channel in MSW_MSH()_PFC(0). */
#else /* Word 0 - Little Endian */
        uint64_t req_en                : 1;  /**< [  0:  0](R/W) Enable counting the number of active cycles out of MSW on the REQ channel in MSW_MSH()_PFC(0). */
        uint64_t dat_en                : 1;  /**< [  1:  1](R/W) Enable counting the number of active cycles out of MSW on the DAT channel in MSW_MSH()_PFC(1). */
        uint64_t rsp_en                : 1;  /**< [  2:  2](R/W) Enable counting the number of active cycles out of MSW on the RSP channel in MSW_MSH()_PFC(2). */
        uint64_t snp_en                : 1;  /**< [  3:  3](R/W) Enable counting the number of active cycles out of MSW on the SNP channel in MSW_MSH()_PFC(3). */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mswx_mshx_prf_s cn; */
};
typedef union cavm_mswx_mshx_prf cavm_mswx_mshx_prf_t;

static inline uint64_t CAVM_MSWX_MSHX_PRF(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MSWX_MSHX_PRF(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=23) && (b<=3)))
        return 0x87e300000058ll + 0x1000000ll * ((a) & 0x1f) + 0x4000ll * ((b) & 0x3);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=7) && (b<=3)))
        return 0x87e300000058ll + 0x1000000ll * ((a) & 0x7) + 0x4000ll * ((b) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=17) && (b<=3)))
        return 0x87e300000058ll + 0x1000000ll * ((a) & 0x1f) + 0x4000ll * ((b) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=11) && (b<=3)))
        return 0x87e300000058ll + 0x1000000ll * ((a) & 0xf) + 0x4000ll * ((b) & 0x3);
    __cavm_csr_fatal("MSWX_MSHX_PRF", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MSWX_MSHX_PRF(a,b) cavm_mswx_mshx_prf_t
#define bustype_CAVM_MSWX_MSHX_PRF(a,b) CSR_TYPE_RSL
#define basename_CAVM_MSWX_MSHX_PRF(a,b) "MSWX_MSHX_PRF"
#define device_bar_CAVM_MSWX_MSHX_PRF(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MSWX_MSHX_PRF(a,b) (a)
#define arguments_CAVM_MSWX_MSHX_PRF(a,b) (a),(b),-1,-1

#endif /* __CAVM_CSRS_MSW_H__ */
