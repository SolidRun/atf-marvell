#ifndef __CAVM_CSRS_TAD_H__
#define __CAVM_CSRS_TAD_H__
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
 * OcteonTX TAD.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration tad_bar_e
 *
 * TAD Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define CAVM_TAD_BAR_E_TADX_PF_BAR0(a) (0x87e280000000ll + 0x1000000ll * (a))
#define CAVM_TAD_BAR_E_TADX_PF_BAR0_SIZE 0x800000ull
#define CAVM_TAD_BAR_E_TADX_PF_BAR4(a) (0x87e280800000ll + 0x1000000ll * (a))
#define CAVM_TAD_BAR_E_TADX_PF_BAR4_SIZE 0x800000ull

/**
 * Enumeration tad_pf_int_vec_e
 *
 * TAD MSI-X Vector Enumeration
 * Enumerates the MSI-X interrupt vectors.
 */
#define CAVM_TAD_PF_INT_VEC_E_TAD_INT (0)

/**
 * Enumeration tad_prf_sel_e
 *
 * TAD Performance Counter Select Enumeration
 * Enumerates the different TAD performance counter selects.
 */
#define CAVM_TAD_PRF_SEL_E_ALLOC_ANY (0x1c)
#define CAVM_TAD_PRF_SEL_E_ALLOC_DTG (0x1a)
#define CAVM_TAD_PRF_SEL_E_ALLOC_LTG (0x1b)
#define CAVM_TAD_PRF_SEL_E_DAT_MSH_IN_ANY (9)
#define CAVM_TAD_PRF_SEL_E_DAT_MSH_IN_DSS (0xa)
#define CAVM_TAD_PRF_SEL_E_DAT_MSH_OUT_ANY (0x17)
#define CAVM_TAD_PRF_SEL_E_DAT_MSH_OUT_DSS (0x19)
#define CAVM_TAD_PRF_SEL_E_DAT_MSH_OUT_FILL (0x18)
#define CAVM_TAD_PRF_SEL_E_DAT_RD (0x21)
#define CAVM_TAD_PRF_SEL_E_DAT_RD_BYP (0x22)
#define CAVM_TAD_PRF_SEL_E_HIT_ANY (0x1f)
#define CAVM_TAD_PRF_SEL_E_HIT_DTG (0x1d)
#define CAVM_TAD_PRF_SEL_E_HIT_LTG (0x1e)
#define CAVM_TAD_PRF_SEL_E_IFB_OCC (0x23)
#define CAVM_TAD_PRF_SEL_E_NONE (0)
#define CAVM_TAD_PRF_SEL_E_REQ_MSH_IN_ANY (1)
#define CAVM_TAD_PRF_SEL_E_REQ_MSH_IN_EXLMN (3)
#define CAVM_TAD_PRF_SEL_E_REQ_MSH_IN_MN (2)
#define CAVM_TAD_PRF_SEL_E_REQ_MSH_OUT_ANY (0xb)
#define CAVM_TAD_PRF_SEL_E_REQ_MSH_OUT_DSS_RD (0xc)
#define CAVM_TAD_PRF_SEL_E_REQ_MSH_OUT_DSS_WR (0xd)
#define CAVM_TAD_PRF_SEL_E_REQ_MSH_OUT_EVICT (0xe)
#define CAVM_TAD_PRF_SEL_E_REQ_OCC (0x24)
#define CAVM_TAD_PRF_SEL_E_RSP_MSH_IN_ANY (4)
#define CAVM_TAD_PRF_SEL_E_RSP_MSH_IN_DSS (7)
#define CAVM_TAD_PRF_SEL_E_RSP_MSH_IN_EXLMN (6)
#define CAVM_TAD_PRF_SEL_E_RSP_MSH_IN_MN (5)
#define CAVM_TAD_PRF_SEL_E_RSP_MSH_IN_RETRY_DSS (8)
#define CAVM_TAD_PRF_SEL_E_RSP_MSH_OUT_ANY (0xf)
#define CAVM_TAD_PRF_SEL_E_RSP_MSH_OUT_EXLMN (0x12)
#define CAVM_TAD_PRF_SEL_E_RSP_MSH_OUT_MN (0x13)
#define CAVM_TAD_PRF_SEL_E_RSP_MSH_OUT_RETRY_EXLMN (0x10)
#define CAVM_TAD_PRF_SEL_E_RSP_MSH_OUT_RETRY_MN (0x11)
#define CAVM_TAD_PRF_SEL_E_SNP_MSH_OUT_ANY (0x14)
#define CAVM_TAD_PRF_SEL_E_SNP_MSH_OUT_EXLMN (0x16)
#define CAVM_TAD_PRF_SEL_E_SNP_MSH_OUT_MN (0x15)
#define CAVM_TAD_PRF_SEL_E_TAG_RD (0x20)

/**
 * Register (RSL) tad#_cache_flush_status
 *
 * TAD Cache Flush Status Register
 * Status for Cache Flush operation.
 */
union cavm_tadx_cache_flush_status
{
    uint64_t u;
    struct cavm_tadx_cache_flush_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t done                  : 1;  /**< [  0:  0](R/W/H) When TAD_CMN_CACHE_FLUSH[START] is asserted this bit is cleared
                                                                 and will be 0 until the TAD completes the cache flush operation. */
#else /* Word 0 - Little Endian */
        uint64_t done                  : 1;  /**< [  0:  0](R/W/H) When TAD_CMN_CACHE_FLUSH[START] is asserted this bit is cleared
                                                                 and will be 0 until the TAD completes the cache flush operation. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tadx_cache_flush_status_s cn10; */
    /* struct cavm_tadx_cache_flush_status_s cn10ka; */
    struct cavm_tadx_cache_flush_status_cn10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t done                  : 1;  /**< [  0:  0](SR/W/H) When TAD_CMN_CACHE_FLUSH[START] is asserted this bit is cleared
                                                                 and will be 0 until the TAD completes the cache flush operation. */
#else /* Word 0 - Little Endian */
        uint64_t done                  : 1;  /**< [  0:  0](SR/W/H) When TAD_CMN_CACHE_FLUSH[START] is asserted this bit is cleared
                                                                 and will be 0 until the TAD completes the cache flush operation. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } cn10kb;
    /* struct cavm_tadx_cache_flush_status_s cnf10ka; */
    /* struct cavm_tadx_cache_flush_status_s cnf10kb; */
};
typedef union cavm_tadx_cache_flush_status cavm_tadx_cache_flush_status_t;

static inline uint64_t CAVM_TADX_CACHE_FLUSH_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TADX_CACHE_FLUSH_STATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=47))
        return 0x87e280000038ll + 0x1000000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=15))
        return 0x87e280000038ll + 0x1000000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=35))
        return 0x87e280000038ll + 0x1000000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=23))
        return 0x87e280000038ll + 0x1000000ll * ((a) & 0x1f);
    __cavm_csr_fatal("TADX_CACHE_FLUSH_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TADX_CACHE_FLUSH_STATUS(a) cavm_tadx_cache_flush_status_t
#define bustype_CAVM_TADX_CACHE_FLUSH_STATUS(a) CSR_TYPE_RSL
#define basename_CAVM_TADX_CACHE_FLUSH_STATUS(a) "TADX_CACHE_FLUSH_STATUS"
#define device_bar_CAVM_TADX_CACHE_FLUSH_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TADX_CACHE_FLUSH_STATUS(a) (a)
#define arguments_CAVM_TADX_CACHE_FLUSH_STATUS(a) (a),-1,-1,-1

/**
 * Register (RSL) tad#_derr_addr
 *
 * TAD DAT Error Address Register
 * This register records error address for Data Error interrupts occurring in data read
 * from the LLC, FBF, SBF, or mesh input to the MN. The first [DATMBE, FBFMBE, SBFMBE, MNMBE]
 * error will lock the register until the logged error type is cleared;
 * [DATSBE, FBFSBE, SBFSBE, MNSBE] errors lock the register until either the logged
 * error type is cleared or a [DATMBE, FBFMBE, SBFMBE, MNMBE] error is logged.
 * Only one of [*MBE, *SBE] should be set at a time. In the event the register is
 * read with all [*MBE] and [*SBE] equal to 0 during interrupt handling that is an
 * indication that, due to a register set/clear race, information about one or more
 * errors was lost while processing an earlier error. Note that fields NONSEC, ADDR, OW
 * don't apply for MNMBE, MNSBE.
 * [DISCUSSION OF HOW TO SCRUB ERRORS]
 */
union cavm_tadx_derr_addr
{
    uint64_t u;
    struct cavm_tadx_derr_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t datmbe                : 1;  /**< [ 63: 63](R/W1C/H) Logged information is for a TAD()_INT_W1C[DATMBE] error. */
        uint64_t fbfmbe                : 1;  /**< [ 62: 62](R/W1C/H) Logged information is for a TAD()_INT_W1C[FBFMBE] error. */
        uint64_t sbfmbe                : 1;  /**< [ 61: 61](R/W1C/H) Logged information is for a TAD()_INT_W1C[SBFMBE] error. */
        uint64_t mnmbe                 : 1;  /**< [ 60: 60](R/W1C/H) Logged information is for a TAD()_INT_W1C[MNMBE] error. */
        uint64_t datsbe                : 1;  /**< [ 59: 59](R/W1C/H) Logged information is for a TAD()_INT_W1C[DATSBE] error. */
        uint64_t fbfsbe                : 1;  /**< [ 58: 58](R/W1C/H) Logged information is for a TAD()_INT_W1C[FBFSBE] error. */
        uint64_t sbfsbe                : 1;  /**< [ 57: 57](R/W1C/H) Logged information is for a TAD()_INT_W1C[SBFSBE] error. */
        uint64_t mnsbe                 : 1;  /**< [ 56: 56](R/W1C/H) Logged information is for a TAD()_INT_W1C[MNSBE] error. */
        uint64_t reserved_53_55        : 3;
        uint64_t nonsec                : 1;  /**< [ 52: 52](RO/H) The NS bit of the physical address the error was detected in. */
        uint64_t reserved_48_51        : 4;
        uint64_t addr                  : 42; /**< [ 47:  6](RO/H) The physical address of the 64B sub-block the error was detected in. */
        uint64_t ow                    : 2;  /**< [  5:  4](RO/H) The 128-bit word within the 64B sub-block in which the error was detected. */
        uint64_t reserved_0_3          : 4;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_3          : 4;
        uint64_t ow                    : 2;  /**< [  5:  4](RO/H) The 128-bit word within the 64B sub-block in which the error was detected. */
        uint64_t addr                  : 42; /**< [ 47:  6](RO/H) The physical address of the 64B sub-block the error was detected in. */
        uint64_t reserved_48_51        : 4;
        uint64_t nonsec                : 1;  /**< [ 52: 52](RO/H) The NS bit of the physical address the error was detected in. */
        uint64_t reserved_53_55        : 3;
        uint64_t mnsbe                 : 1;  /**< [ 56: 56](R/W1C/H) Logged information is for a TAD()_INT_W1C[MNSBE] error. */
        uint64_t sbfsbe                : 1;  /**< [ 57: 57](R/W1C/H) Logged information is for a TAD()_INT_W1C[SBFSBE] error. */
        uint64_t fbfsbe                : 1;  /**< [ 58: 58](R/W1C/H) Logged information is for a TAD()_INT_W1C[FBFSBE] error. */
        uint64_t datsbe                : 1;  /**< [ 59: 59](R/W1C/H) Logged information is for a TAD()_INT_W1C[DATSBE] error. */
        uint64_t mnmbe                 : 1;  /**< [ 60: 60](R/W1C/H) Logged information is for a TAD()_INT_W1C[MNMBE] error. */
        uint64_t sbfmbe                : 1;  /**< [ 61: 61](R/W1C/H) Logged information is for a TAD()_INT_W1C[SBFMBE] error. */
        uint64_t fbfmbe                : 1;  /**< [ 62: 62](R/W1C/H) Logged information is for a TAD()_INT_W1C[FBFMBE] error. */
        uint64_t datmbe                : 1;  /**< [ 63: 63](R/W1C/H) Logged information is for a TAD()_INT_W1C[DATMBE] error. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tadx_derr_addr_s cn10; */
    /* struct cavm_tadx_derr_addr_s cn10ka; */
    struct cavm_tadx_derr_addr_cn10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t datmbe                : 1;  /**< [ 63: 63](SR/W1C/H) Logged information is for a TAD()_INT_W1C[DATMBE] error. */
        uint64_t fbfmbe                : 1;  /**< [ 62: 62](SR/W1C/H) Logged information is for a TAD()_INT_W1C[FBFMBE] error. */
        uint64_t sbfmbe                : 1;  /**< [ 61: 61](SR/W1C/H) Logged information is for a TAD()_INT_W1C[SBFMBE] error. */
        uint64_t mnmbe                 : 1;  /**< [ 60: 60](SR/W1C/H) Logged information is for a TAD()_INT_W1C[MNMBE] error. */
        uint64_t datsbe                : 1;  /**< [ 59: 59](SR/W1C/H) Logged information is for a TAD()_INT_W1C[DATSBE] error. */
        uint64_t fbfsbe                : 1;  /**< [ 58: 58](SR/W1C/H) Logged information is for a TAD()_INT_W1C[FBFSBE] error. */
        uint64_t sbfsbe                : 1;  /**< [ 57: 57](SR/W1C/H) Logged information is for a TAD()_INT_W1C[SBFSBE] error. */
        uint64_t mnsbe                 : 1;  /**< [ 56: 56](SR/W1C/H) Logged information is for a TAD()_INT_W1C[MNSBE] error. */
        uint64_t reserved_53_55        : 3;
        uint64_t nonsec                : 1;  /**< [ 52: 52](SRO/H) The NS bit of the physical address the error was detected in. */
        uint64_t reserved_48_51        : 4;
        uint64_t addr                  : 42; /**< [ 47:  6](SRO/H) The physical address of the 64B sub-block the error was detected in. */
        uint64_t ow                    : 2;  /**< [  5:  4](SRO/H) The 128-bit word within the 64B sub-block in which the error was detected. */
        uint64_t reserved_0_3          : 4;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_3          : 4;
        uint64_t ow                    : 2;  /**< [  5:  4](SRO/H) The 128-bit word within the 64B sub-block in which the error was detected. */
        uint64_t addr                  : 42; /**< [ 47:  6](SRO/H) The physical address of the 64B sub-block the error was detected in. */
        uint64_t reserved_48_51        : 4;
        uint64_t nonsec                : 1;  /**< [ 52: 52](SRO/H) The NS bit of the physical address the error was detected in. */
        uint64_t reserved_53_55        : 3;
        uint64_t mnsbe                 : 1;  /**< [ 56: 56](SR/W1C/H) Logged information is for a TAD()_INT_W1C[MNSBE] error. */
        uint64_t sbfsbe                : 1;  /**< [ 57: 57](SR/W1C/H) Logged information is for a TAD()_INT_W1C[SBFSBE] error. */
        uint64_t fbfsbe                : 1;  /**< [ 58: 58](SR/W1C/H) Logged information is for a TAD()_INT_W1C[FBFSBE] error. */
        uint64_t datsbe                : 1;  /**< [ 59: 59](SR/W1C/H) Logged information is for a TAD()_INT_W1C[DATSBE] error. */
        uint64_t mnmbe                 : 1;  /**< [ 60: 60](SR/W1C/H) Logged information is for a TAD()_INT_W1C[MNMBE] error. */
        uint64_t sbfmbe                : 1;  /**< [ 61: 61](SR/W1C/H) Logged information is for a TAD()_INT_W1C[SBFMBE] error. */
        uint64_t fbfmbe                : 1;  /**< [ 62: 62](SR/W1C/H) Logged information is for a TAD()_INT_W1C[FBFMBE] error. */
        uint64_t datmbe                : 1;  /**< [ 63: 63](SR/W1C/H) Logged information is for a TAD()_INT_W1C[DATMBE] error. */
#endif /* Word 0 - End */
    } cn10kb;
    /* struct cavm_tadx_derr_addr_s cnf10ka; */
    /* struct cavm_tadx_derr_addr_s cnf10kb; */
};
typedef union cavm_tadx_derr_addr cavm_tadx_derr_addr_t;

static inline uint64_t CAVM_TADX_DERR_ADDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TADX_DERR_ADDR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=47))
        return 0x87e280000218ll + 0x1000000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=15))
        return 0x87e280000218ll + 0x1000000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=35))
        return 0x87e280000218ll + 0x1000000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=23))
        return 0x87e280000218ll + 0x1000000ll * ((a) & 0x1f);
    __cavm_csr_fatal("TADX_DERR_ADDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TADX_DERR_ADDR(a) cavm_tadx_derr_addr_t
#define bustype_CAVM_TADX_DERR_ADDR(a) CSR_TYPE_RSL
#define basename_CAVM_TADX_DERR_ADDR(a) "TADX_DERR_ADDR"
#define device_bar_CAVM_TADX_DERR_ADDR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TADX_DERR_ADDR(a) (a)
#define arguments_CAVM_TADX_DERR_ADDR(a) (a),-1,-1,-1

/**
 * Register (RSL) tad#_int_ena_w1c
 *
 * TAD Interrupt Enable Clear Registers
 * This register clears interrupt enable bits.
 */
union cavm_tadx_int_ena_w1c
{
    uint64_t u;
    struct cavm_tadx_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_12_63        : 52;
        uint64_t dat_nderr             : 1;  /**< [ 11: 11](R/W1C/H) Reads or clears enable for TAD(0..47)_INT_W1C[DAT_NDERR]. */
        uint64_t fbf_mbe               : 1;  /**< [ 10: 10](R/W1C/H) Reads or clears enable for TAD(0..47)_INT_W1C[FBF_MBE]. */
        uint64_t fbf_sbe               : 1;  /**< [  9:  9](R/W1C/H) Reads or clears enable for TAD(0..47)_INT_W1C[FBF_SBE]. */
        uint64_t sbf_mbe               : 1;  /**< [  8:  8](R/W1C/H) Reads or clears enable for TAD(0..47)_INT_W1C[SBF_MBE]. */
        uint64_t sbf_sbe               : 1;  /**< [  7:  7](R/W1C/H) Reads or clears enable for TAD(0..47)_INT_W1C[SBF_SBE]. */
        uint64_t mn_mbe                : 1;  /**< [  6:  6](R/W1C/H) Reads or clears enable for TAD(0..47)_INT_W1C[MN_MBE]. */
        uint64_t mn_sbe                : 1;  /**< [  5:  5](R/W1C/H) Reads or clears enable for TAD(0..47)_INT_W1C[MN_SBE]. */
        uint64_t dat_perr              : 1;  /**< [  4:  4](R/W1C/H) Reads or clears enable for TAD(0..47)_INT_W1C[DAT_PERR]. */
        uint64_t rsp_perr              : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for TAD(0..47)_INT_W1C[RSP_PERR]. */
        uint64_t req_perr              : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for TAD(0..47)_INT_W1C[REQ_PERR]. */
        uint64_t wrnxm                 : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for TAD(0..47)_INT_W1C[WRNXM]. */
        uint64_t rdnxm                 : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for TAD(0..47)_INT_W1C[RDNXM]. */
#else /* Word 0 - Little Endian */
        uint64_t rdnxm                 : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for TAD(0..47)_INT_W1C[RDNXM]. */
        uint64_t wrnxm                 : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for TAD(0..47)_INT_W1C[WRNXM]. */
        uint64_t req_perr              : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for TAD(0..47)_INT_W1C[REQ_PERR]. */
        uint64_t rsp_perr              : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for TAD(0..47)_INT_W1C[RSP_PERR]. */
        uint64_t dat_perr              : 1;  /**< [  4:  4](R/W1C/H) Reads or clears enable for TAD(0..47)_INT_W1C[DAT_PERR]. */
        uint64_t mn_sbe                : 1;  /**< [  5:  5](R/W1C/H) Reads or clears enable for TAD(0..47)_INT_W1C[MN_SBE]. */
        uint64_t mn_mbe                : 1;  /**< [  6:  6](R/W1C/H) Reads or clears enable for TAD(0..47)_INT_W1C[MN_MBE]. */
        uint64_t sbf_sbe               : 1;  /**< [  7:  7](R/W1C/H) Reads or clears enable for TAD(0..47)_INT_W1C[SBF_SBE]. */
        uint64_t sbf_mbe               : 1;  /**< [  8:  8](R/W1C/H) Reads or clears enable for TAD(0..47)_INT_W1C[SBF_MBE]. */
        uint64_t fbf_sbe               : 1;  /**< [  9:  9](R/W1C/H) Reads or clears enable for TAD(0..47)_INT_W1C[FBF_SBE]. */
        uint64_t fbf_mbe               : 1;  /**< [ 10: 10](R/W1C/H) Reads or clears enable for TAD(0..47)_INT_W1C[FBF_MBE]. */
        uint64_t dat_nderr             : 1;  /**< [ 11: 11](R/W1C/H) Reads or clears enable for TAD(0..47)_INT_W1C[DAT_NDERR]. */
        uint64_t reserved_12_63        : 52;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tadx_int_ena_w1c_s cn10; */
    /* struct cavm_tadx_int_ena_w1c_s cn10ka; */
    struct cavm_tadx_int_ena_w1c_cn10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_12_63        : 52;
        uint64_t dat_nderr             : 1;  /**< [ 11: 11](SR/W1C/H) Reads or clears enable for TAD(0..15)_INT_W1C[DAT_NDERR]. */
        uint64_t fbf_mbe               : 1;  /**< [ 10: 10](SR/W1C/H) Reads or clears enable for TAD(0..15)_INT_W1C[FBF_MBE]. */
        uint64_t fbf_sbe               : 1;  /**< [  9:  9](SR/W1C/H) Reads or clears enable for TAD(0..15)_INT_W1C[FBF_SBE]. */
        uint64_t sbf_mbe               : 1;  /**< [  8:  8](SR/W1C/H) Reads or clears enable for TAD(0..15)_INT_W1C[SBF_MBE]. */
        uint64_t sbf_sbe               : 1;  /**< [  7:  7](SR/W1C/H) Reads or clears enable for TAD(0..15)_INT_W1C[SBF_SBE]. */
        uint64_t mn_mbe                : 1;  /**< [  6:  6](SR/W1C/H) Reads or clears enable for TAD(0..15)_INT_W1C[MN_MBE]. */
        uint64_t mn_sbe                : 1;  /**< [  5:  5](SR/W1C/H) Reads or clears enable for TAD(0..15)_INT_W1C[MN_SBE]. */
        uint64_t dat_perr              : 1;  /**< [  4:  4](SR/W1C/H) Reads or clears enable for TAD(0..15)_INT_W1C[DAT_PERR]. */
        uint64_t rsp_perr              : 1;  /**< [  3:  3](SR/W1C/H) Reads or clears enable for TAD(0..15)_INT_W1C[RSP_PERR]. */
        uint64_t req_perr              : 1;  /**< [  2:  2](SR/W1C/H) Reads or clears enable for TAD(0..15)_INT_W1C[REQ_PERR]. */
        uint64_t wrnxm                 : 1;  /**< [  1:  1](SR/W1C/H) Reads or clears enable for TAD(0..15)_INT_W1C[WRNXM]. */
        uint64_t rdnxm                 : 1;  /**< [  0:  0](SR/W1C/H) Reads or clears enable for TAD(0..15)_INT_W1C[RDNXM]. */
#else /* Word 0 - Little Endian */
        uint64_t rdnxm                 : 1;  /**< [  0:  0](SR/W1C/H) Reads or clears enable for TAD(0..15)_INT_W1C[RDNXM]. */
        uint64_t wrnxm                 : 1;  /**< [  1:  1](SR/W1C/H) Reads or clears enable for TAD(0..15)_INT_W1C[WRNXM]. */
        uint64_t req_perr              : 1;  /**< [  2:  2](SR/W1C/H) Reads or clears enable for TAD(0..15)_INT_W1C[REQ_PERR]. */
        uint64_t rsp_perr              : 1;  /**< [  3:  3](SR/W1C/H) Reads or clears enable for TAD(0..15)_INT_W1C[RSP_PERR]. */
        uint64_t dat_perr              : 1;  /**< [  4:  4](SR/W1C/H) Reads or clears enable for TAD(0..15)_INT_W1C[DAT_PERR]. */
        uint64_t mn_sbe                : 1;  /**< [  5:  5](SR/W1C/H) Reads or clears enable for TAD(0..15)_INT_W1C[MN_SBE]. */
        uint64_t mn_mbe                : 1;  /**< [  6:  6](SR/W1C/H) Reads or clears enable for TAD(0..15)_INT_W1C[MN_MBE]. */
        uint64_t sbf_sbe               : 1;  /**< [  7:  7](SR/W1C/H) Reads or clears enable for TAD(0..15)_INT_W1C[SBF_SBE]. */
        uint64_t sbf_mbe               : 1;  /**< [  8:  8](SR/W1C/H) Reads or clears enable for TAD(0..15)_INT_W1C[SBF_MBE]. */
        uint64_t fbf_sbe               : 1;  /**< [  9:  9](SR/W1C/H) Reads or clears enable for TAD(0..15)_INT_W1C[FBF_SBE]. */
        uint64_t fbf_mbe               : 1;  /**< [ 10: 10](SR/W1C/H) Reads or clears enable for TAD(0..15)_INT_W1C[FBF_MBE]. */
        uint64_t dat_nderr             : 1;  /**< [ 11: 11](SR/W1C/H) Reads or clears enable for TAD(0..15)_INT_W1C[DAT_NDERR]. */
        uint64_t reserved_12_63        : 52;
#endif /* Word 0 - End */
    } cn10kb;
    struct cavm_tadx_int_ena_w1c_cnf10ka
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_12_63        : 52;
        uint64_t dat_nderr             : 1;  /**< [ 11: 11](R/W1C/H) Reads or clears enable for TAD(0..35)_INT_W1C[DAT_NDERR]. */
        uint64_t fbf_mbe               : 1;  /**< [ 10: 10](R/W1C/H) Reads or clears enable for TAD(0..35)_INT_W1C[FBF_MBE]. */
        uint64_t fbf_sbe               : 1;  /**< [  9:  9](R/W1C/H) Reads or clears enable for TAD(0..35)_INT_W1C[FBF_SBE]. */
        uint64_t sbf_mbe               : 1;  /**< [  8:  8](R/W1C/H) Reads or clears enable for TAD(0..35)_INT_W1C[SBF_MBE]. */
        uint64_t sbf_sbe               : 1;  /**< [  7:  7](R/W1C/H) Reads or clears enable for TAD(0..35)_INT_W1C[SBF_SBE]. */
        uint64_t mn_mbe                : 1;  /**< [  6:  6](R/W1C/H) Reads or clears enable for TAD(0..35)_INT_W1C[MN_MBE]. */
        uint64_t mn_sbe                : 1;  /**< [  5:  5](R/W1C/H) Reads or clears enable for TAD(0..35)_INT_W1C[MN_SBE]. */
        uint64_t dat_perr              : 1;  /**< [  4:  4](R/W1C/H) Reads or clears enable for TAD(0..35)_INT_W1C[DAT_PERR]. */
        uint64_t rsp_perr              : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for TAD(0..35)_INT_W1C[RSP_PERR]. */
        uint64_t req_perr              : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for TAD(0..35)_INT_W1C[REQ_PERR]. */
        uint64_t wrnxm                 : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for TAD(0..35)_INT_W1C[WRNXM]. */
        uint64_t rdnxm                 : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for TAD(0..35)_INT_W1C[RDNXM]. */
#else /* Word 0 - Little Endian */
        uint64_t rdnxm                 : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for TAD(0..35)_INT_W1C[RDNXM]. */
        uint64_t wrnxm                 : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for TAD(0..35)_INT_W1C[WRNXM]. */
        uint64_t req_perr              : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for TAD(0..35)_INT_W1C[REQ_PERR]. */
        uint64_t rsp_perr              : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for TAD(0..35)_INT_W1C[RSP_PERR]. */
        uint64_t dat_perr              : 1;  /**< [  4:  4](R/W1C/H) Reads or clears enable for TAD(0..35)_INT_W1C[DAT_PERR]. */
        uint64_t mn_sbe                : 1;  /**< [  5:  5](R/W1C/H) Reads or clears enable for TAD(0..35)_INT_W1C[MN_SBE]. */
        uint64_t mn_mbe                : 1;  /**< [  6:  6](R/W1C/H) Reads or clears enable for TAD(0..35)_INT_W1C[MN_MBE]. */
        uint64_t sbf_sbe               : 1;  /**< [  7:  7](R/W1C/H) Reads or clears enable for TAD(0..35)_INT_W1C[SBF_SBE]. */
        uint64_t sbf_mbe               : 1;  /**< [  8:  8](R/W1C/H) Reads or clears enable for TAD(0..35)_INT_W1C[SBF_MBE]. */
        uint64_t fbf_sbe               : 1;  /**< [  9:  9](R/W1C/H) Reads or clears enable for TAD(0..35)_INT_W1C[FBF_SBE]. */
        uint64_t fbf_mbe               : 1;  /**< [ 10: 10](R/W1C/H) Reads or clears enable for TAD(0..35)_INT_W1C[FBF_MBE]. */
        uint64_t dat_nderr             : 1;  /**< [ 11: 11](R/W1C/H) Reads or clears enable for TAD(0..35)_INT_W1C[DAT_NDERR]. */
        uint64_t reserved_12_63        : 52;
#endif /* Word 0 - End */
    } cnf10ka;
    struct cavm_tadx_int_ena_w1c_cnf10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_12_63        : 52;
        uint64_t dat_nderr             : 1;  /**< [ 11: 11](R/W1C/H) Reads or clears enable for TAD(0..23)_INT_W1C[DAT_NDERR]. */
        uint64_t fbf_mbe               : 1;  /**< [ 10: 10](R/W1C/H) Reads or clears enable for TAD(0..23)_INT_W1C[FBF_MBE]. */
        uint64_t fbf_sbe               : 1;  /**< [  9:  9](R/W1C/H) Reads or clears enable for TAD(0..23)_INT_W1C[FBF_SBE]. */
        uint64_t sbf_mbe               : 1;  /**< [  8:  8](R/W1C/H) Reads or clears enable for TAD(0..23)_INT_W1C[SBF_MBE]. */
        uint64_t sbf_sbe               : 1;  /**< [  7:  7](R/W1C/H) Reads or clears enable for TAD(0..23)_INT_W1C[SBF_SBE]. */
        uint64_t mn_mbe                : 1;  /**< [  6:  6](R/W1C/H) Reads or clears enable for TAD(0..23)_INT_W1C[MN_MBE]. */
        uint64_t mn_sbe                : 1;  /**< [  5:  5](R/W1C/H) Reads or clears enable for TAD(0..23)_INT_W1C[MN_SBE]. */
        uint64_t dat_perr              : 1;  /**< [  4:  4](R/W1C/H) Reads or clears enable for TAD(0..23)_INT_W1C[DAT_PERR]. */
        uint64_t rsp_perr              : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for TAD(0..23)_INT_W1C[RSP_PERR]. */
        uint64_t req_perr              : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for TAD(0..23)_INT_W1C[REQ_PERR]. */
        uint64_t wrnxm                 : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for TAD(0..23)_INT_W1C[WRNXM]. */
        uint64_t rdnxm                 : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for TAD(0..23)_INT_W1C[RDNXM]. */
#else /* Word 0 - Little Endian */
        uint64_t rdnxm                 : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for TAD(0..23)_INT_W1C[RDNXM]. */
        uint64_t wrnxm                 : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for TAD(0..23)_INT_W1C[WRNXM]. */
        uint64_t req_perr              : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for TAD(0..23)_INT_W1C[REQ_PERR]. */
        uint64_t rsp_perr              : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for TAD(0..23)_INT_W1C[RSP_PERR]. */
        uint64_t dat_perr              : 1;  /**< [  4:  4](R/W1C/H) Reads or clears enable for TAD(0..23)_INT_W1C[DAT_PERR]. */
        uint64_t mn_sbe                : 1;  /**< [  5:  5](R/W1C/H) Reads or clears enable for TAD(0..23)_INT_W1C[MN_SBE]. */
        uint64_t mn_mbe                : 1;  /**< [  6:  6](R/W1C/H) Reads or clears enable for TAD(0..23)_INT_W1C[MN_MBE]. */
        uint64_t sbf_sbe               : 1;  /**< [  7:  7](R/W1C/H) Reads or clears enable for TAD(0..23)_INT_W1C[SBF_SBE]. */
        uint64_t sbf_mbe               : 1;  /**< [  8:  8](R/W1C/H) Reads or clears enable for TAD(0..23)_INT_W1C[SBF_MBE]. */
        uint64_t fbf_sbe               : 1;  /**< [  9:  9](R/W1C/H) Reads or clears enable for TAD(0..23)_INT_W1C[FBF_SBE]. */
        uint64_t fbf_mbe               : 1;  /**< [ 10: 10](R/W1C/H) Reads or clears enable for TAD(0..23)_INT_W1C[FBF_MBE]. */
        uint64_t dat_nderr             : 1;  /**< [ 11: 11](R/W1C/H) Reads or clears enable for TAD(0..23)_INT_W1C[DAT_NDERR]. */
        uint64_t reserved_12_63        : 52;
#endif /* Word 0 - End */
    } cnf10kb;
};
typedef union cavm_tadx_int_ena_w1c cavm_tadx_int_ena_w1c_t;

static inline uint64_t CAVM_TADX_INT_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TADX_INT_ENA_W1C(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=47))
        return 0x87e280008010ll + 0x1000000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=15))
        return 0x87e280008010ll + 0x1000000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=35))
        return 0x87e280008010ll + 0x1000000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=23))
        return 0x87e280008010ll + 0x1000000ll * ((a) & 0x1f);
    __cavm_csr_fatal("TADX_INT_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TADX_INT_ENA_W1C(a) cavm_tadx_int_ena_w1c_t
#define bustype_CAVM_TADX_INT_ENA_W1C(a) CSR_TYPE_RSL
#define basename_CAVM_TADX_INT_ENA_W1C(a) "TADX_INT_ENA_W1C"
#define device_bar_CAVM_TADX_INT_ENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TADX_INT_ENA_W1C(a) (a)
#define arguments_CAVM_TADX_INT_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (RSL) tad#_int_ena_w1s
 *
 * TAD Interrupt Enable Set Registers
 * This register sets interrupt enable bits.
 */
union cavm_tadx_int_ena_w1s
{
    uint64_t u;
    struct cavm_tadx_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_12_63        : 52;
        uint64_t dat_nderr             : 1;  /**< [ 11: 11](R/W1S/H) Reads or sets enable for TAD(0..47)_INT_W1C[DAT_NDERR]. */
        uint64_t fbf_mbe               : 1;  /**< [ 10: 10](R/W1S/H) Reads or sets enable for TAD(0..47)_INT_W1C[FBF_MBE]. */
        uint64_t fbf_sbe               : 1;  /**< [  9:  9](R/W1S/H) Reads or sets enable for TAD(0..47)_INT_W1C[FBF_SBE]. */
        uint64_t sbf_mbe               : 1;  /**< [  8:  8](R/W1S/H) Reads or sets enable for TAD(0..47)_INT_W1C[SBF_MBE]. */
        uint64_t sbf_sbe               : 1;  /**< [  7:  7](R/W1S/H) Reads or sets enable for TAD(0..47)_INT_W1C[SBF_SBE]. */
        uint64_t mn_mbe                : 1;  /**< [  6:  6](R/W1S/H) Reads or sets enable for TAD(0..47)_INT_W1C[MN_MBE]. */
        uint64_t mn_sbe                : 1;  /**< [  5:  5](R/W1S/H) Reads or sets enable for TAD(0..47)_INT_W1C[MN_SBE]. */
        uint64_t dat_perr              : 1;  /**< [  4:  4](R/W1S/H) Reads or sets enable for TAD(0..47)_INT_W1C[DAT_PERR]. */
        uint64_t rsp_perr              : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for TAD(0..47)_INT_W1C[RSP_PERR]. */
        uint64_t req_perr              : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for TAD(0..47)_INT_W1C[REQ_PERR]. */
        uint64_t wrnxm                 : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for TAD(0..47)_INT_W1C[WRNXM]. */
        uint64_t rdnxm                 : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for TAD(0..47)_INT_W1C[RDNXM]. */
#else /* Word 0 - Little Endian */
        uint64_t rdnxm                 : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for TAD(0..47)_INT_W1C[RDNXM]. */
        uint64_t wrnxm                 : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for TAD(0..47)_INT_W1C[WRNXM]. */
        uint64_t req_perr              : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for TAD(0..47)_INT_W1C[REQ_PERR]. */
        uint64_t rsp_perr              : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for TAD(0..47)_INT_W1C[RSP_PERR]. */
        uint64_t dat_perr              : 1;  /**< [  4:  4](R/W1S/H) Reads or sets enable for TAD(0..47)_INT_W1C[DAT_PERR]. */
        uint64_t mn_sbe                : 1;  /**< [  5:  5](R/W1S/H) Reads or sets enable for TAD(0..47)_INT_W1C[MN_SBE]. */
        uint64_t mn_mbe                : 1;  /**< [  6:  6](R/W1S/H) Reads or sets enable for TAD(0..47)_INT_W1C[MN_MBE]. */
        uint64_t sbf_sbe               : 1;  /**< [  7:  7](R/W1S/H) Reads or sets enable for TAD(0..47)_INT_W1C[SBF_SBE]. */
        uint64_t sbf_mbe               : 1;  /**< [  8:  8](R/W1S/H) Reads or sets enable for TAD(0..47)_INT_W1C[SBF_MBE]. */
        uint64_t fbf_sbe               : 1;  /**< [  9:  9](R/W1S/H) Reads or sets enable for TAD(0..47)_INT_W1C[FBF_SBE]. */
        uint64_t fbf_mbe               : 1;  /**< [ 10: 10](R/W1S/H) Reads or sets enable for TAD(0..47)_INT_W1C[FBF_MBE]. */
        uint64_t dat_nderr             : 1;  /**< [ 11: 11](R/W1S/H) Reads or sets enable for TAD(0..47)_INT_W1C[DAT_NDERR]. */
        uint64_t reserved_12_63        : 52;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tadx_int_ena_w1s_s cn10; */
    /* struct cavm_tadx_int_ena_w1s_s cn10ka; */
    struct cavm_tadx_int_ena_w1s_cn10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_12_63        : 52;
        uint64_t dat_nderr             : 1;  /**< [ 11: 11](SR/W1S/H) Reads or sets enable for TAD(0..15)_INT_W1C[DAT_NDERR]. */
        uint64_t fbf_mbe               : 1;  /**< [ 10: 10](SR/W1S/H) Reads or sets enable for TAD(0..15)_INT_W1C[FBF_MBE]. */
        uint64_t fbf_sbe               : 1;  /**< [  9:  9](SR/W1S/H) Reads or sets enable for TAD(0..15)_INT_W1C[FBF_SBE]. */
        uint64_t sbf_mbe               : 1;  /**< [  8:  8](SR/W1S/H) Reads or sets enable for TAD(0..15)_INT_W1C[SBF_MBE]. */
        uint64_t sbf_sbe               : 1;  /**< [  7:  7](SR/W1S/H) Reads or sets enable for TAD(0..15)_INT_W1C[SBF_SBE]. */
        uint64_t mn_mbe                : 1;  /**< [  6:  6](SR/W1S/H) Reads or sets enable for TAD(0..15)_INT_W1C[MN_MBE]. */
        uint64_t mn_sbe                : 1;  /**< [  5:  5](SR/W1S/H) Reads or sets enable for TAD(0..15)_INT_W1C[MN_SBE]. */
        uint64_t dat_perr              : 1;  /**< [  4:  4](SR/W1S/H) Reads or sets enable for TAD(0..15)_INT_W1C[DAT_PERR]. */
        uint64_t rsp_perr              : 1;  /**< [  3:  3](SR/W1S/H) Reads or sets enable for TAD(0..15)_INT_W1C[RSP_PERR]. */
        uint64_t req_perr              : 1;  /**< [  2:  2](SR/W1S/H) Reads or sets enable for TAD(0..15)_INT_W1C[REQ_PERR]. */
        uint64_t wrnxm                 : 1;  /**< [  1:  1](SR/W1S/H) Reads or sets enable for TAD(0..15)_INT_W1C[WRNXM]. */
        uint64_t rdnxm                 : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets enable for TAD(0..15)_INT_W1C[RDNXM]. */
#else /* Word 0 - Little Endian */
        uint64_t rdnxm                 : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets enable for TAD(0..15)_INT_W1C[RDNXM]. */
        uint64_t wrnxm                 : 1;  /**< [  1:  1](SR/W1S/H) Reads or sets enable for TAD(0..15)_INT_W1C[WRNXM]. */
        uint64_t req_perr              : 1;  /**< [  2:  2](SR/W1S/H) Reads or sets enable for TAD(0..15)_INT_W1C[REQ_PERR]. */
        uint64_t rsp_perr              : 1;  /**< [  3:  3](SR/W1S/H) Reads or sets enable for TAD(0..15)_INT_W1C[RSP_PERR]. */
        uint64_t dat_perr              : 1;  /**< [  4:  4](SR/W1S/H) Reads or sets enable for TAD(0..15)_INT_W1C[DAT_PERR]. */
        uint64_t mn_sbe                : 1;  /**< [  5:  5](SR/W1S/H) Reads or sets enable for TAD(0..15)_INT_W1C[MN_SBE]. */
        uint64_t mn_mbe                : 1;  /**< [  6:  6](SR/W1S/H) Reads or sets enable for TAD(0..15)_INT_W1C[MN_MBE]. */
        uint64_t sbf_sbe               : 1;  /**< [  7:  7](SR/W1S/H) Reads or sets enable for TAD(0..15)_INT_W1C[SBF_SBE]. */
        uint64_t sbf_mbe               : 1;  /**< [  8:  8](SR/W1S/H) Reads or sets enable for TAD(0..15)_INT_W1C[SBF_MBE]. */
        uint64_t fbf_sbe               : 1;  /**< [  9:  9](SR/W1S/H) Reads or sets enable for TAD(0..15)_INT_W1C[FBF_SBE]. */
        uint64_t fbf_mbe               : 1;  /**< [ 10: 10](SR/W1S/H) Reads or sets enable for TAD(0..15)_INT_W1C[FBF_MBE]. */
        uint64_t dat_nderr             : 1;  /**< [ 11: 11](SR/W1S/H) Reads or sets enable for TAD(0..15)_INT_W1C[DAT_NDERR]. */
        uint64_t reserved_12_63        : 52;
#endif /* Word 0 - End */
    } cn10kb;
    struct cavm_tadx_int_ena_w1s_cnf10ka
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_12_63        : 52;
        uint64_t dat_nderr             : 1;  /**< [ 11: 11](R/W1S/H) Reads or sets enable for TAD(0..35)_INT_W1C[DAT_NDERR]. */
        uint64_t fbf_mbe               : 1;  /**< [ 10: 10](R/W1S/H) Reads or sets enable for TAD(0..35)_INT_W1C[FBF_MBE]. */
        uint64_t fbf_sbe               : 1;  /**< [  9:  9](R/W1S/H) Reads or sets enable for TAD(0..35)_INT_W1C[FBF_SBE]. */
        uint64_t sbf_mbe               : 1;  /**< [  8:  8](R/W1S/H) Reads or sets enable for TAD(0..35)_INT_W1C[SBF_MBE]. */
        uint64_t sbf_sbe               : 1;  /**< [  7:  7](R/W1S/H) Reads or sets enable for TAD(0..35)_INT_W1C[SBF_SBE]. */
        uint64_t mn_mbe                : 1;  /**< [  6:  6](R/W1S/H) Reads or sets enable for TAD(0..35)_INT_W1C[MN_MBE]. */
        uint64_t mn_sbe                : 1;  /**< [  5:  5](R/W1S/H) Reads or sets enable for TAD(0..35)_INT_W1C[MN_SBE]. */
        uint64_t dat_perr              : 1;  /**< [  4:  4](R/W1S/H) Reads or sets enable for TAD(0..35)_INT_W1C[DAT_PERR]. */
        uint64_t rsp_perr              : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for TAD(0..35)_INT_W1C[RSP_PERR]. */
        uint64_t req_perr              : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for TAD(0..35)_INT_W1C[REQ_PERR]. */
        uint64_t wrnxm                 : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for TAD(0..35)_INT_W1C[WRNXM]. */
        uint64_t rdnxm                 : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for TAD(0..35)_INT_W1C[RDNXM]. */
#else /* Word 0 - Little Endian */
        uint64_t rdnxm                 : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for TAD(0..35)_INT_W1C[RDNXM]. */
        uint64_t wrnxm                 : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for TAD(0..35)_INT_W1C[WRNXM]. */
        uint64_t req_perr              : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for TAD(0..35)_INT_W1C[REQ_PERR]. */
        uint64_t rsp_perr              : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for TAD(0..35)_INT_W1C[RSP_PERR]. */
        uint64_t dat_perr              : 1;  /**< [  4:  4](R/W1S/H) Reads or sets enable for TAD(0..35)_INT_W1C[DAT_PERR]. */
        uint64_t mn_sbe                : 1;  /**< [  5:  5](R/W1S/H) Reads or sets enable for TAD(0..35)_INT_W1C[MN_SBE]. */
        uint64_t mn_mbe                : 1;  /**< [  6:  6](R/W1S/H) Reads or sets enable for TAD(0..35)_INT_W1C[MN_MBE]. */
        uint64_t sbf_sbe               : 1;  /**< [  7:  7](R/W1S/H) Reads or sets enable for TAD(0..35)_INT_W1C[SBF_SBE]. */
        uint64_t sbf_mbe               : 1;  /**< [  8:  8](R/W1S/H) Reads or sets enable for TAD(0..35)_INT_W1C[SBF_MBE]. */
        uint64_t fbf_sbe               : 1;  /**< [  9:  9](R/W1S/H) Reads or sets enable for TAD(0..35)_INT_W1C[FBF_SBE]. */
        uint64_t fbf_mbe               : 1;  /**< [ 10: 10](R/W1S/H) Reads or sets enable for TAD(0..35)_INT_W1C[FBF_MBE]. */
        uint64_t dat_nderr             : 1;  /**< [ 11: 11](R/W1S/H) Reads or sets enable for TAD(0..35)_INT_W1C[DAT_NDERR]. */
        uint64_t reserved_12_63        : 52;
#endif /* Word 0 - End */
    } cnf10ka;
    struct cavm_tadx_int_ena_w1s_cnf10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_12_63        : 52;
        uint64_t dat_nderr             : 1;  /**< [ 11: 11](R/W1S/H) Reads or sets enable for TAD(0..23)_INT_W1C[DAT_NDERR]. */
        uint64_t fbf_mbe               : 1;  /**< [ 10: 10](R/W1S/H) Reads or sets enable for TAD(0..23)_INT_W1C[FBF_MBE]. */
        uint64_t fbf_sbe               : 1;  /**< [  9:  9](R/W1S/H) Reads or sets enable for TAD(0..23)_INT_W1C[FBF_SBE]. */
        uint64_t sbf_mbe               : 1;  /**< [  8:  8](R/W1S/H) Reads or sets enable for TAD(0..23)_INT_W1C[SBF_MBE]. */
        uint64_t sbf_sbe               : 1;  /**< [  7:  7](R/W1S/H) Reads or sets enable for TAD(0..23)_INT_W1C[SBF_SBE]. */
        uint64_t mn_mbe                : 1;  /**< [  6:  6](R/W1S/H) Reads or sets enable for TAD(0..23)_INT_W1C[MN_MBE]. */
        uint64_t mn_sbe                : 1;  /**< [  5:  5](R/W1S/H) Reads or sets enable for TAD(0..23)_INT_W1C[MN_SBE]. */
        uint64_t dat_perr              : 1;  /**< [  4:  4](R/W1S/H) Reads or sets enable for TAD(0..23)_INT_W1C[DAT_PERR]. */
        uint64_t rsp_perr              : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for TAD(0..23)_INT_W1C[RSP_PERR]. */
        uint64_t req_perr              : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for TAD(0..23)_INT_W1C[REQ_PERR]. */
        uint64_t wrnxm                 : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for TAD(0..23)_INT_W1C[WRNXM]. */
        uint64_t rdnxm                 : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for TAD(0..23)_INT_W1C[RDNXM]. */
#else /* Word 0 - Little Endian */
        uint64_t rdnxm                 : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for TAD(0..23)_INT_W1C[RDNXM]. */
        uint64_t wrnxm                 : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for TAD(0..23)_INT_W1C[WRNXM]. */
        uint64_t req_perr              : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for TAD(0..23)_INT_W1C[REQ_PERR]. */
        uint64_t rsp_perr              : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for TAD(0..23)_INT_W1C[RSP_PERR]. */
        uint64_t dat_perr              : 1;  /**< [  4:  4](R/W1S/H) Reads or sets enable for TAD(0..23)_INT_W1C[DAT_PERR]. */
        uint64_t mn_sbe                : 1;  /**< [  5:  5](R/W1S/H) Reads or sets enable for TAD(0..23)_INT_W1C[MN_SBE]. */
        uint64_t mn_mbe                : 1;  /**< [  6:  6](R/W1S/H) Reads or sets enable for TAD(0..23)_INT_W1C[MN_MBE]. */
        uint64_t sbf_sbe               : 1;  /**< [  7:  7](R/W1S/H) Reads or sets enable for TAD(0..23)_INT_W1C[SBF_SBE]. */
        uint64_t sbf_mbe               : 1;  /**< [  8:  8](R/W1S/H) Reads or sets enable for TAD(0..23)_INT_W1C[SBF_MBE]. */
        uint64_t fbf_sbe               : 1;  /**< [  9:  9](R/W1S/H) Reads or sets enable for TAD(0..23)_INT_W1C[FBF_SBE]. */
        uint64_t fbf_mbe               : 1;  /**< [ 10: 10](R/W1S/H) Reads or sets enable for TAD(0..23)_INT_W1C[FBF_MBE]. */
        uint64_t dat_nderr             : 1;  /**< [ 11: 11](R/W1S/H) Reads or sets enable for TAD(0..23)_INT_W1C[DAT_NDERR]. */
        uint64_t reserved_12_63        : 52;
#endif /* Word 0 - End */
    } cnf10kb;
};
typedef union cavm_tadx_int_ena_w1s cavm_tadx_int_ena_w1s_t;

static inline uint64_t CAVM_TADX_INT_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TADX_INT_ENA_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=47))
        return 0x87e280008018ll + 0x1000000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=15))
        return 0x87e280008018ll + 0x1000000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=35))
        return 0x87e280008018ll + 0x1000000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=23))
        return 0x87e280008018ll + 0x1000000ll * ((a) & 0x1f);
    __cavm_csr_fatal("TADX_INT_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TADX_INT_ENA_W1S(a) cavm_tadx_int_ena_w1s_t
#define bustype_CAVM_TADX_INT_ENA_W1S(a) CSR_TYPE_RSL
#define basename_CAVM_TADX_INT_ENA_W1S(a) "TADX_INT_ENA_W1S"
#define device_bar_CAVM_TADX_INT_ENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TADX_INT_ENA_W1S(a) (a)
#define arguments_CAVM_TADX_INT_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (RSL) tad#_int_w1c
 *
 * TAD Interrupt Register
 * This register is for TAD-based interrupts.
 */
union cavm_tadx_int_w1c
{
    uint64_t u;
    struct cavm_tadx_int_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_12_63        : 52;
        uint64_t dat_nderr             : 1;  /**< [ 11: 11](R/W1C/H) NDERR was received on the DAT mesh. */
        uint64_t fbf_mbe               : 1;  /**< [ 10: 10](R/W1C/H) Multiple-bit data error in FBF data. */
        uint64_t fbf_sbe               : 1;  /**< [  9:  9](R/W1C/H) Multiple-bit data error in FBF data. */
        uint64_t sbf_mbe               : 1;  /**< [  8:  8](R/W1C/H) Multiple-bit data error in SBF data. */
        uint64_t sbf_sbe               : 1;  /**< [  7:  7](R/W1C/H) Multiple-bit data error in SBF data. */
        uint64_t mn_mbe                : 1;  /**< [  6:  6](R/W1C/H) Multiple-bit data error in MN data. */
        uint64_t mn_sbe                : 1;  /**< [  5:  5](R/W1C/H) Multiple-bit data error in MN data. */
        uint64_t dat_perr              : 1;  /**< [  4:  4](R/W1C/H) Data parity error bit. */
        uint64_t rsp_perr              : 1;  /**< [  3:  3](R/W1C/H) Response parity error bit. */
        uint64_t req_perr              : 1;  /**< [  2:  2](R/W1C/H) Request parity error bit */
        uint64_t wrnxm                 : 1;  /**< [  1:  1](R/W1C/H) Write NxM error. Write reference to outside all the defined and enabled address
                                                                 space control (ASC) regions, or secure write reference to an ASC region
                                                                 not enabled for secure access, or nonsecure write reference to an
                                                                 ASC region not enabled for nonsecure access. */
        uint64_t rdnxm                 : 1;  /**< [  0:  0](R/W1C/H) Read NxM error. Read reference to outside all the defined and enabled address
                                                                 space control (ASC) regions, or secure read reference to an ASC region not
                                                                 enabled for secure access, or nonsecure read reference to an ASC region not
                                                                 enabled for nonsecure access.
                                                                 [RDNXM] interrupts can occur during normal operation as the cores are
                                                                 allowed to prefetch to nonexistent memory locations.  Therefore,
                                                                 [RDNXM] is for informational purposes only. */
#else /* Word 0 - Little Endian */
        uint64_t rdnxm                 : 1;  /**< [  0:  0](R/W1C/H) Read NxM error. Read reference to outside all the defined and enabled address
                                                                 space control (ASC) regions, or secure read reference to an ASC region not
                                                                 enabled for secure access, or nonsecure read reference to an ASC region not
                                                                 enabled for nonsecure access.
                                                                 [RDNXM] interrupts can occur during normal operation as the cores are
                                                                 allowed to prefetch to nonexistent memory locations.  Therefore,
                                                                 [RDNXM] is for informational purposes only. */
        uint64_t wrnxm                 : 1;  /**< [  1:  1](R/W1C/H) Write NxM error. Write reference to outside all the defined and enabled address
                                                                 space control (ASC) regions, or secure write reference to an ASC region
                                                                 not enabled for secure access, or nonsecure write reference to an
                                                                 ASC region not enabled for nonsecure access. */
        uint64_t req_perr              : 1;  /**< [  2:  2](R/W1C/H) Request parity error bit */
        uint64_t rsp_perr              : 1;  /**< [  3:  3](R/W1C/H) Response parity error bit. */
        uint64_t dat_perr              : 1;  /**< [  4:  4](R/W1C/H) Data parity error bit. */
        uint64_t mn_sbe                : 1;  /**< [  5:  5](R/W1C/H) Multiple-bit data error in MN data. */
        uint64_t mn_mbe                : 1;  /**< [  6:  6](R/W1C/H) Multiple-bit data error in MN data. */
        uint64_t sbf_sbe               : 1;  /**< [  7:  7](R/W1C/H) Multiple-bit data error in SBF data. */
        uint64_t sbf_mbe               : 1;  /**< [  8:  8](R/W1C/H) Multiple-bit data error in SBF data. */
        uint64_t fbf_sbe               : 1;  /**< [  9:  9](R/W1C/H) Multiple-bit data error in FBF data. */
        uint64_t fbf_mbe               : 1;  /**< [ 10: 10](R/W1C/H) Multiple-bit data error in FBF data. */
        uint64_t dat_nderr             : 1;  /**< [ 11: 11](R/W1C/H) NDERR was received on the DAT mesh. */
        uint64_t reserved_12_63        : 52;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tadx_int_w1c_s cn10; */
    /* struct cavm_tadx_int_w1c_s cn10ka; */
    struct cavm_tadx_int_w1c_cn10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_12_63        : 52;
        uint64_t dat_nderr             : 1;  /**< [ 11: 11](SR/W1C/H) NDERR was received on the DAT mesh. */
        uint64_t fbf_mbe               : 1;  /**< [ 10: 10](SR/W1C/H) Multiple-bit data error in FBF data. */
        uint64_t fbf_sbe               : 1;  /**< [  9:  9](SR/W1C/H) Multiple-bit data error in FBF data. */
        uint64_t sbf_mbe               : 1;  /**< [  8:  8](SR/W1C/H) Multiple-bit data error in SBF data. */
        uint64_t sbf_sbe               : 1;  /**< [  7:  7](SR/W1C/H) Multiple-bit data error in SBF data. */
        uint64_t mn_mbe                : 1;  /**< [  6:  6](SR/W1C/H) Multiple-bit data error in MN data. */
        uint64_t mn_sbe                : 1;  /**< [  5:  5](SR/W1C/H) Multiple-bit data error in MN data. */
        uint64_t dat_perr              : 1;  /**< [  4:  4](SR/W1C/H) Data parity error bit. */
        uint64_t rsp_perr              : 1;  /**< [  3:  3](SR/W1C/H) Response parity error bit. */
        uint64_t req_perr              : 1;  /**< [  2:  2](SR/W1C/H) Request parity error bit */
        uint64_t wrnxm                 : 1;  /**< [  1:  1](SR/W1C/H) Write NxM error. Write reference to outside all the defined and enabled address
                                                                 space control (ASC) regions, or secure write reference to an ASC region
                                                                 not enabled for secure access, or nonsecure write reference to an
                                                                 ASC region not enabled for nonsecure access. */
        uint64_t rdnxm                 : 1;  /**< [  0:  0](SR/W1C/H) Read NxM error. Read reference to outside all the defined and enabled address
                                                                 space control (ASC) regions, or secure read reference to an ASC region not
                                                                 enabled for secure access, or nonsecure read reference to an ASC region not
                                                                 enabled for nonsecure access.
                                                                 [RDNXM] interrupts can occur during normal operation as the cores are
                                                                 allowed to prefetch to nonexistent memory locations.  Therefore,
                                                                 [RDNXM] is for informational purposes only. */
#else /* Word 0 - Little Endian */
        uint64_t rdnxm                 : 1;  /**< [  0:  0](SR/W1C/H) Read NxM error. Read reference to outside all the defined and enabled address
                                                                 space control (ASC) regions, or secure read reference to an ASC region not
                                                                 enabled for secure access, or nonsecure read reference to an ASC region not
                                                                 enabled for nonsecure access.
                                                                 [RDNXM] interrupts can occur during normal operation as the cores are
                                                                 allowed to prefetch to nonexistent memory locations.  Therefore,
                                                                 [RDNXM] is for informational purposes only. */
        uint64_t wrnxm                 : 1;  /**< [  1:  1](SR/W1C/H) Write NxM error. Write reference to outside all the defined and enabled address
                                                                 space control (ASC) regions, or secure write reference to an ASC region
                                                                 not enabled for secure access, or nonsecure write reference to an
                                                                 ASC region not enabled for nonsecure access. */
        uint64_t req_perr              : 1;  /**< [  2:  2](SR/W1C/H) Request parity error bit */
        uint64_t rsp_perr              : 1;  /**< [  3:  3](SR/W1C/H) Response parity error bit. */
        uint64_t dat_perr              : 1;  /**< [  4:  4](SR/W1C/H) Data parity error bit. */
        uint64_t mn_sbe                : 1;  /**< [  5:  5](SR/W1C/H) Multiple-bit data error in MN data. */
        uint64_t mn_mbe                : 1;  /**< [  6:  6](SR/W1C/H) Multiple-bit data error in MN data. */
        uint64_t sbf_sbe               : 1;  /**< [  7:  7](SR/W1C/H) Multiple-bit data error in SBF data. */
        uint64_t sbf_mbe               : 1;  /**< [  8:  8](SR/W1C/H) Multiple-bit data error in SBF data. */
        uint64_t fbf_sbe               : 1;  /**< [  9:  9](SR/W1C/H) Multiple-bit data error in FBF data. */
        uint64_t fbf_mbe               : 1;  /**< [ 10: 10](SR/W1C/H) Multiple-bit data error in FBF data. */
        uint64_t dat_nderr             : 1;  /**< [ 11: 11](SR/W1C/H) NDERR was received on the DAT mesh. */
        uint64_t reserved_12_63        : 52;
#endif /* Word 0 - End */
    } cn10kb;
    /* struct cavm_tadx_int_w1c_s cnf10ka; */
    /* struct cavm_tadx_int_w1c_s cnf10kb; */
};
typedef union cavm_tadx_int_w1c cavm_tadx_int_w1c_t;

static inline uint64_t CAVM_TADX_INT_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TADX_INT_W1C(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=47))
        return 0x87e280008000ll + 0x1000000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=15))
        return 0x87e280008000ll + 0x1000000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=35))
        return 0x87e280008000ll + 0x1000000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=23))
        return 0x87e280008000ll + 0x1000000ll * ((a) & 0x1f);
    __cavm_csr_fatal("TADX_INT_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TADX_INT_W1C(a) cavm_tadx_int_w1c_t
#define bustype_CAVM_TADX_INT_W1C(a) CSR_TYPE_RSL
#define basename_CAVM_TADX_INT_W1C(a) "TADX_INT_W1C"
#define device_bar_CAVM_TADX_INT_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TADX_INT_W1C(a) (a)
#define arguments_CAVM_TADX_INT_W1C(a) (a),-1,-1,-1

/**
 * Register (RSL) tad#_int_w1s
 *
 * TAD Interrupt Set Registers
 * This register sets interrupt bits.
 */
union cavm_tadx_int_w1s
{
    uint64_t u;
    struct cavm_tadx_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_12_63        : 52;
        uint64_t dat_nderr             : 1;  /**< [ 11: 11](R/W1S/H) Reads or sets TAD(0..47)_INT_W1C[DAT_NDERR]. */
        uint64_t fbf_mbe               : 1;  /**< [ 10: 10](R/W1S/H) Reads or sets TAD(0..47)_INT_W1C[FBF_MBE]. */
        uint64_t fbf_sbe               : 1;  /**< [  9:  9](R/W1S/H) Reads or sets TAD(0..47)_INT_W1C[FBF_SBE]. */
        uint64_t sbf_mbe               : 1;  /**< [  8:  8](R/W1S/H) Reads or sets TAD(0..47)_INT_W1C[SBF_MBE]. */
        uint64_t sbf_sbe               : 1;  /**< [  7:  7](R/W1S/H) Reads or sets TAD(0..47)_INT_W1C[SBF_SBE]. */
        uint64_t mn_mbe                : 1;  /**< [  6:  6](R/W1S/H) Reads or sets TAD(0..47)_INT_W1C[MN_MBE]. */
        uint64_t mn_sbe                : 1;  /**< [  5:  5](R/W1S/H) Reads or sets TAD(0..47)_INT_W1C[MN_SBE]. */
        uint64_t dat_perr              : 1;  /**< [  4:  4](R/W1S/H) Reads or sets TAD(0..47)_INT_W1C[DAT_PERR]. */
        uint64_t rsp_perr              : 1;  /**< [  3:  3](R/W1S/H) Reads or sets TAD(0..47)_INT_W1C[RSP_PERR]. */
        uint64_t req_perr              : 1;  /**< [  2:  2](R/W1S/H) Reads or sets TAD(0..47)_INT_W1C[REQ_PERR]. */
        uint64_t wrnxm                 : 1;  /**< [  1:  1](R/W1S/H) Reads or sets TAD(0..47)_INT_W1C[WRNXM]. */
        uint64_t rdnxm                 : 1;  /**< [  0:  0](R/W1S/H) Reads or sets TAD(0..47)_INT_W1C[RDNXM]. */
#else /* Word 0 - Little Endian */
        uint64_t rdnxm                 : 1;  /**< [  0:  0](R/W1S/H) Reads or sets TAD(0..47)_INT_W1C[RDNXM]. */
        uint64_t wrnxm                 : 1;  /**< [  1:  1](R/W1S/H) Reads or sets TAD(0..47)_INT_W1C[WRNXM]. */
        uint64_t req_perr              : 1;  /**< [  2:  2](R/W1S/H) Reads or sets TAD(0..47)_INT_W1C[REQ_PERR]. */
        uint64_t rsp_perr              : 1;  /**< [  3:  3](R/W1S/H) Reads or sets TAD(0..47)_INT_W1C[RSP_PERR]. */
        uint64_t dat_perr              : 1;  /**< [  4:  4](R/W1S/H) Reads or sets TAD(0..47)_INT_W1C[DAT_PERR]. */
        uint64_t mn_sbe                : 1;  /**< [  5:  5](R/W1S/H) Reads or sets TAD(0..47)_INT_W1C[MN_SBE]. */
        uint64_t mn_mbe                : 1;  /**< [  6:  6](R/W1S/H) Reads or sets TAD(0..47)_INT_W1C[MN_MBE]. */
        uint64_t sbf_sbe               : 1;  /**< [  7:  7](R/W1S/H) Reads or sets TAD(0..47)_INT_W1C[SBF_SBE]. */
        uint64_t sbf_mbe               : 1;  /**< [  8:  8](R/W1S/H) Reads or sets TAD(0..47)_INT_W1C[SBF_MBE]. */
        uint64_t fbf_sbe               : 1;  /**< [  9:  9](R/W1S/H) Reads or sets TAD(0..47)_INT_W1C[FBF_SBE]. */
        uint64_t fbf_mbe               : 1;  /**< [ 10: 10](R/W1S/H) Reads or sets TAD(0..47)_INT_W1C[FBF_MBE]. */
        uint64_t dat_nderr             : 1;  /**< [ 11: 11](R/W1S/H) Reads or sets TAD(0..47)_INT_W1C[DAT_NDERR]. */
        uint64_t reserved_12_63        : 52;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tadx_int_w1s_s cn10; */
    /* struct cavm_tadx_int_w1s_s cn10ka; */
    struct cavm_tadx_int_w1s_cn10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_12_63        : 52;
        uint64_t dat_nderr             : 1;  /**< [ 11: 11](SR/W1S/H) Reads or sets TAD(0..15)_INT_W1C[DAT_NDERR]. */
        uint64_t fbf_mbe               : 1;  /**< [ 10: 10](SR/W1S/H) Reads or sets TAD(0..15)_INT_W1C[FBF_MBE]. */
        uint64_t fbf_sbe               : 1;  /**< [  9:  9](SR/W1S/H) Reads or sets TAD(0..15)_INT_W1C[FBF_SBE]. */
        uint64_t sbf_mbe               : 1;  /**< [  8:  8](SR/W1S/H) Reads or sets TAD(0..15)_INT_W1C[SBF_MBE]. */
        uint64_t sbf_sbe               : 1;  /**< [  7:  7](SR/W1S/H) Reads or sets TAD(0..15)_INT_W1C[SBF_SBE]. */
        uint64_t mn_mbe                : 1;  /**< [  6:  6](SR/W1S/H) Reads or sets TAD(0..15)_INT_W1C[MN_MBE]. */
        uint64_t mn_sbe                : 1;  /**< [  5:  5](SR/W1S/H) Reads or sets TAD(0..15)_INT_W1C[MN_SBE]. */
        uint64_t dat_perr              : 1;  /**< [  4:  4](SR/W1S/H) Reads or sets TAD(0..15)_INT_W1C[DAT_PERR]. */
        uint64_t rsp_perr              : 1;  /**< [  3:  3](SR/W1S/H) Reads or sets TAD(0..15)_INT_W1C[RSP_PERR]. */
        uint64_t req_perr              : 1;  /**< [  2:  2](SR/W1S/H) Reads or sets TAD(0..15)_INT_W1C[REQ_PERR]. */
        uint64_t wrnxm                 : 1;  /**< [  1:  1](SR/W1S/H) Reads or sets TAD(0..15)_INT_W1C[WRNXM]. */
        uint64_t rdnxm                 : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets TAD(0..15)_INT_W1C[RDNXM]. */
#else /* Word 0 - Little Endian */
        uint64_t rdnxm                 : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets TAD(0..15)_INT_W1C[RDNXM]. */
        uint64_t wrnxm                 : 1;  /**< [  1:  1](SR/W1S/H) Reads or sets TAD(0..15)_INT_W1C[WRNXM]. */
        uint64_t req_perr              : 1;  /**< [  2:  2](SR/W1S/H) Reads or sets TAD(0..15)_INT_W1C[REQ_PERR]. */
        uint64_t rsp_perr              : 1;  /**< [  3:  3](SR/W1S/H) Reads or sets TAD(0..15)_INT_W1C[RSP_PERR]. */
        uint64_t dat_perr              : 1;  /**< [  4:  4](SR/W1S/H) Reads or sets TAD(0..15)_INT_W1C[DAT_PERR]. */
        uint64_t mn_sbe                : 1;  /**< [  5:  5](SR/W1S/H) Reads or sets TAD(0..15)_INT_W1C[MN_SBE]. */
        uint64_t mn_mbe                : 1;  /**< [  6:  6](SR/W1S/H) Reads or sets TAD(0..15)_INT_W1C[MN_MBE]. */
        uint64_t sbf_sbe               : 1;  /**< [  7:  7](SR/W1S/H) Reads or sets TAD(0..15)_INT_W1C[SBF_SBE]. */
        uint64_t sbf_mbe               : 1;  /**< [  8:  8](SR/W1S/H) Reads or sets TAD(0..15)_INT_W1C[SBF_MBE]. */
        uint64_t fbf_sbe               : 1;  /**< [  9:  9](SR/W1S/H) Reads or sets TAD(0..15)_INT_W1C[FBF_SBE]. */
        uint64_t fbf_mbe               : 1;  /**< [ 10: 10](SR/W1S/H) Reads or sets TAD(0..15)_INT_W1C[FBF_MBE]. */
        uint64_t dat_nderr             : 1;  /**< [ 11: 11](SR/W1S/H) Reads or sets TAD(0..15)_INT_W1C[DAT_NDERR]. */
        uint64_t reserved_12_63        : 52;
#endif /* Word 0 - End */
    } cn10kb;
    struct cavm_tadx_int_w1s_cnf10ka
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_12_63        : 52;
        uint64_t dat_nderr             : 1;  /**< [ 11: 11](R/W1S/H) Reads or sets TAD(0..35)_INT_W1C[DAT_NDERR]. */
        uint64_t fbf_mbe               : 1;  /**< [ 10: 10](R/W1S/H) Reads or sets TAD(0..35)_INT_W1C[FBF_MBE]. */
        uint64_t fbf_sbe               : 1;  /**< [  9:  9](R/W1S/H) Reads or sets TAD(0..35)_INT_W1C[FBF_SBE]. */
        uint64_t sbf_mbe               : 1;  /**< [  8:  8](R/W1S/H) Reads or sets TAD(0..35)_INT_W1C[SBF_MBE]. */
        uint64_t sbf_sbe               : 1;  /**< [  7:  7](R/W1S/H) Reads or sets TAD(0..35)_INT_W1C[SBF_SBE]. */
        uint64_t mn_mbe                : 1;  /**< [  6:  6](R/W1S/H) Reads or sets TAD(0..35)_INT_W1C[MN_MBE]. */
        uint64_t mn_sbe                : 1;  /**< [  5:  5](R/W1S/H) Reads or sets TAD(0..35)_INT_W1C[MN_SBE]. */
        uint64_t dat_perr              : 1;  /**< [  4:  4](R/W1S/H) Reads or sets TAD(0..35)_INT_W1C[DAT_PERR]. */
        uint64_t rsp_perr              : 1;  /**< [  3:  3](R/W1S/H) Reads or sets TAD(0..35)_INT_W1C[RSP_PERR]. */
        uint64_t req_perr              : 1;  /**< [  2:  2](R/W1S/H) Reads or sets TAD(0..35)_INT_W1C[REQ_PERR]. */
        uint64_t wrnxm                 : 1;  /**< [  1:  1](R/W1S/H) Reads or sets TAD(0..35)_INT_W1C[WRNXM]. */
        uint64_t rdnxm                 : 1;  /**< [  0:  0](R/W1S/H) Reads or sets TAD(0..35)_INT_W1C[RDNXM]. */
#else /* Word 0 - Little Endian */
        uint64_t rdnxm                 : 1;  /**< [  0:  0](R/W1S/H) Reads or sets TAD(0..35)_INT_W1C[RDNXM]. */
        uint64_t wrnxm                 : 1;  /**< [  1:  1](R/W1S/H) Reads or sets TAD(0..35)_INT_W1C[WRNXM]. */
        uint64_t req_perr              : 1;  /**< [  2:  2](R/W1S/H) Reads or sets TAD(0..35)_INT_W1C[REQ_PERR]. */
        uint64_t rsp_perr              : 1;  /**< [  3:  3](R/W1S/H) Reads or sets TAD(0..35)_INT_W1C[RSP_PERR]. */
        uint64_t dat_perr              : 1;  /**< [  4:  4](R/W1S/H) Reads or sets TAD(0..35)_INT_W1C[DAT_PERR]. */
        uint64_t mn_sbe                : 1;  /**< [  5:  5](R/W1S/H) Reads or sets TAD(0..35)_INT_W1C[MN_SBE]. */
        uint64_t mn_mbe                : 1;  /**< [  6:  6](R/W1S/H) Reads or sets TAD(0..35)_INT_W1C[MN_MBE]. */
        uint64_t sbf_sbe               : 1;  /**< [  7:  7](R/W1S/H) Reads or sets TAD(0..35)_INT_W1C[SBF_SBE]. */
        uint64_t sbf_mbe               : 1;  /**< [  8:  8](R/W1S/H) Reads or sets TAD(0..35)_INT_W1C[SBF_MBE]. */
        uint64_t fbf_sbe               : 1;  /**< [  9:  9](R/W1S/H) Reads or sets TAD(0..35)_INT_W1C[FBF_SBE]. */
        uint64_t fbf_mbe               : 1;  /**< [ 10: 10](R/W1S/H) Reads or sets TAD(0..35)_INT_W1C[FBF_MBE]. */
        uint64_t dat_nderr             : 1;  /**< [ 11: 11](R/W1S/H) Reads or sets TAD(0..35)_INT_W1C[DAT_NDERR]. */
        uint64_t reserved_12_63        : 52;
#endif /* Word 0 - End */
    } cnf10ka;
    struct cavm_tadx_int_w1s_cnf10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_12_63        : 52;
        uint64_t dat_nderr             : 1;  /**< [ 11: 11](R/W1S/H) Reads or sets TAD(0..23)_INT_W1C[DAT_NDERR]. */
        uint64_t fbf_mbe               : 1;  /**< [ 10: 10](R/W1S/H) Reads or sets TAD(0..23)_INT_W1C[FBF_MBE]. */
        uint64_t fbf_sbe               : 1;  /**< [  9:  9](R/W1S/H) Reads or sets TAD(0..23)_INT_W1C[FBF_SBE]. */
        uint64_t sbf_mbe               : 1;  /**< [  8:  8](R/W1S/H) Reads or sets TAD(0..23)_INT_W1C[SBF_MBE]. */
        uint64_t sbf_sbe               : 1;  /**< [  7:  7](R/W1S/H) Reads or sets TAD(0..23)_INT_W1C[SBF_SBE]. */
        uint64_t mn_mbe                : 1;  /**< [  6:  6](R/W1S/H) Reads or sets TAD(0..23)_INT_W1C[MN_MBE]. */
        uint64_t mn_sbe                : 1;  /**< [  5:  5](R/W1S/H) Reads or sets TAD(0..23)_INT_W1C[MN_SBE]. */
        uint64_t dat_perr              : 1;  /**< [  4:  4](R/W1S/H) Reads or sets TAD(0..23)_INT_W1C[DAT_PERR]. */
        uint64_t rsp_perr              : 1;  /**< [  3:  3](R/W1S/H) Reads or sets TAD(0..23)_INT_W1C[RSP_PERR]. */
        uint64_t req_perr              : 1;  /**< [  2:  2](R/W1S/H) Reads or sets TAD(0..23)_INT_W1C[REQ_PERR]. */
        uint64_t wrnxm                 : 1;  /**< [  1:  1](R/W1S/H) Reads or sets TAD(0..23)_INT_W1C[WRNXM]. */
        uint64_t rdnxm                 : 1;  /**< [  0:  0](R/W1S/H) Reads or sets TAD(0..23)_INT_W1C[RDNXM]. */
#else /* Word 0 - Little Endian */
        uint64_t rdnxm                 : 1;  /**< [  0:  0](R/W1S/H) Reads or sets TAD(0..23)_INT_W1C[RDNXM]. */
        uint64_t wrnxm                 : 1;  /**< [  1:  1](R/W1S/H) Reads or sets TAD(0..23)_INT_W1C[WRNXM]. */
        uint64_t req_perr              : 1;  /**< [  2:  2](R/W1S/H) Reads or sets TAD(0..23)_INT_W1C[REQ_PERR]. */
        uint64_t rsp_perr              : 1;  /**< [  3:  3](R/W1S/H) Reads or sets TAD(0..23)_INT_W1C[RSP_PERR]. */
        uint64_t dat_perr              : 1;  /**< [  4:  4](R/W1S/H) Reads or sets TAD(0..23)_INT_W1C[DAT_PERR]. */
        uint64_t mn_sbe                : 1;  /**< [  5:  5](R/W1S/H) Reads or sets TAD(0..23)_INT_W1C[MN_SBE]. */
        uint64_t mn_mbe                : 1;  /**< [  6:  6](R/W1S/H) Reads or sets TAD(0..23)_INT_W1C[MN_MBE]. */
        uint64_t sbf_sbe               : 1;  /**< [  7:  7](R/W1S/H) Reads or sets TAD(0..23)_INT_W1C[SBF_SBE]. */
        uint64_t sbf_mbe               : 1;  /**< [  8:  8](R/W1S/H) Reads or sets TAD(0..23)_INT_W1C[SBF_MBE]. */
        uint64_t fbf_sbe               : 1;  /**< [  9:  9](R/W1S/H) Reads or sets TAD(0..23)_INT_W1C[FBF_SBE]. */
        uint64_t fbf_mbe               : 1;  /**< [ 10: 10](R/W1S/H) Reads or sets TAD(0..23)_INT_W1C[FBF_MBE]. */
        uint64_t dat_nderr             : 1;  /**< [ 11: 11](R/W1S/H) Reads or sets TAD(0..23)_INT_W1C[DAT_NDERR]. */
        uint64_t reserved_12_63        : 52;
#endif /* Word 0 - End */
    } cnf10kb;
};
typedef union cavm_tadx_int_w1s cavm_tadx_int_w1s_t;

static inline uint64_t CAVM_TADX_INT_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TADX_INT_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=47))
        return 0x87e280008008ll + 0x1000000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=15))
        return 0x87e280008008ll + 0x1000000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=35))
        return 0x87e280008008ll + 0x1000000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=23))
        return 0x87e280008008ll + 0x1000000ll * ((a) & 0x1f);
    __cavm_csr_fatal("TADX_INT_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TADX_INT_W1S(a) cavm_tadx_int_w1s_t
#define bustype_CAVM_TADX_INT_W1S(a) CSR_TYPE_RSL
#define basename_CAVM_TADX_INT_W1S(a) "TADX_INT_W1S"
#define device_bar_CAVM_TADX_INT_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TADX_INT_W1S(a) (a)
#define arguments_CAVM_TADX_INT_W1S(a) (a),-1,-1,-1

/**
 * Register (RSL) tad#_mpam#_rcnt
 *
 * TAD Memory Partitioning Resource Count Registers
 */
union cavm_tadx_mpamx_rcnt
{
    uint64_t u;
    struct cavm_tadx_mpamx_rcnt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t cnt                   : 7;  /**< [  6:  0](RO/H) Counter incremented whenever a request with corresponding MPAMID is stored in
                                                                 Buffers/IFBs. Decremented when request is deallocated from Buffers/IFBs.
                                                                 This count is used to determine CBUSY[0] in TAD responses. */
#else /* Word 0 - Little Endian */
        uint64_t cnt                   : 7;  /**< [  6:  0](RO/H) Counter incremented whenever a request with corresponding MPAMID is stored in
                                                                 Buffers/IFBs. Decremented when request is deallocated from Buffers/IFBs.
                                                                 This count is used to determine CBUSY[0] in TAD responses. */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tadx_mpamx_rcnt_s cn10; */
    /* struct cavm_tadx_mpamx_rcnt_s cn10ka; */
    struct cavm_tadx_mpamx_rcnt_cn10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t cnt                   : 7;  /**< [  6:  0](SRO/H) Counter incremented whenever a request with corresponding MPAMID is stored in
                                                                 Buffers/IFBs. Decremented when request is deallocated from Buffers/IFBs.
                                                                 This count is used to determine CBUSY[0] in TAD responses. */
#else /* Word 0 - Little Endian */
        uint64_t cnt                   : 7;  /**< [  6:  0](SRO/H) Counter incremented whenever a request with corresponding MPAMID is stored in
                                                                 Buffers/IFBs. Decremented when request is deallocated from Buffers/IFBs.
                                                                 This count is used to determine CBUSY[0] in TAD responses. */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } cn10kb;
    /* struct cavm_tadx_mpamx_rcnt_s cnf10ka; */
    /* struct cavm_tadx_mpamx_rcnt_s cnf10kb; */
};
typedef union cavm_tadx_mpamx_rcnt cavm_tadx_mpamx_rcnt_t;

static inline uint64_t CAVM_TADX_MPAMX_RCNT(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TADX_MPAMX_RCNT(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=47) && (b<=127)))
        return 0x87e280002000ll + 0x1000000ll * ((a) & 0x3f) + 0x10ll * ((b) & 0x7f);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=15) && (b<=127)))
        return 0x87e280002000ll + 0x1000000ll * ((a) & 0xf) + 0x10ll * ((b) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=35) && (b<=127)))
        return 0x87e280002000ll + 0x1000000ll * ((a) & 0x3f) + 0x10ll * ((b) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=23) && (b<=127)))
        return 0x87e280002000ll + 0x1000000ll * ((a) & 0x1f) + 0x10ll * ((b) & 0x7f);
    __cavm_csr_fatal("TADX_MPAMX_RCNT", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_TADX_MPAMX_RCNT(a,b) cavm_tadx_mpamx_rcnt_t
#define bustype_CAVM_TADX_MPAMX_RCNT(a,b) CSR_TYPE_RSL
#define basename_CAVM_TADX_MPAMX_RCNT(a,b) "TADX_MPAMX_RCNT"
#define device_bar_CAVM_TADX_MPAMX_RCNT(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TADX_MPAMX_RCNT(a,b) (a)
#define arguments_CAVM_TADX_MPAMX_RCNT(a,b) (a),(b),-1,-1

/**
 * Register (RSL) tad#_msix_pba#
 *
 * TAD MSI-X Pending Bit Array Registers
 */
union cavm_tadx_msix_pbax
{
    uint64_t u;
    struct cavm_tadx_msix_pbax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO) Pending message for the associated TAD_MSIX_VEC(0)_CTL, enumerated by
                                                                 TAD_PF_INT_VEC_E. */
#else /* Word 0 - Little Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO) Pending message for the associated TAD_MSIX_VEC(0)_CTL, enumerated by
                                                                 TAD_PF_INT_VEC_E. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tadx_msix_pbax_s cn10; */
    /* struct cavm_tadx_msix_pbax_s cn10ka; */
    struct cavm_tadx_msix_pbax_cn10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](SRO) Pending message for the associated TAD_MSIX_VEC(0)_CTL, enumerated by
                                                                 TAD_PF_INT_VEC_E. */
#else /* Word 0 - Little Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](SRO) Pending message for the associated TAD_MSIX_VEC(0)_CTL, enumerated by
                                                                 TAD_PF_INT_VEC_E. */
#endif /* Word 0 - End */
    } cn10kb;
    /* struct cavm_tadx_msix_pbax_s cnf10ka; */
    /* struct cavm_tadx_msix_pbax_s cnf10kb; */
};
typedef union cavm_tadx_msix_pbax cavm_tadx_msix_pbax_t;

static inline uint64_t CAVM_TADX_MSIX_PBAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TADX_MSIX_PBAX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=47) && (b==0)))
        return 0x87e2808f0000ll + 0x1000000ll * ((a) & 0x3f) + 8ll * ((b) & 0x0);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=15) && (b==0)))
        return 0x87e2808f0000ll + 0x1000000ll * ((a) & 0xf) + 8ll * ((b) & 0x0);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=35) && (b==0)))
        return 0x87e2808f0000ll + 0x1000000ll * ((a) & 0x3f) + 8ll * ((b) & 0x0);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=23) && (b==0)))
        return 0x87e2808f0000ll + 0x1000000ll * ((a) & 0x1f) + 8ll * ((b) & 0x0);
    __cavm_csr_fatal("TADX_MSIX_PBAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_TADX_MSIX_PBAX(a,b) cavm_tadx_msix_pbax_t
#define bustype_CAVM_TADX_MSIX_PBAX(a,b) CSR_TYPE_RSL
#define basename_CAVM_TADX_MSIX_PBAX(a,b) "TADX_MSIX_PBAX"
#define device_bar_CAVM_TADX_MSIX_PBAX(a,b) 0x4 /* PF_BAR4 */
#define busnum_CAVM_TADX_MSIX_PBAX(a,b) (a)
#define arguments_CAVM_TADX_MSIX_PBAX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) tad#_msix_vec#_addr
 *
 * TAD MSI-X Vector-Table Address Register
 * This register is the MSI-X vector table, indexed by the TAD_PF_INT_VEC_E enumeration.
 */
union cavm_tadx_msix_vecx_addr
{
    uint64_t u;
    struct cavm_tadx_msix_vecx_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_1            : 1;
        uint64_t secvec                : 1;  /**< [  0:  0](R/W) Secure vector. */
#else /* Word 0 - Little Endian */
        uint64_t secvec                : 1;  /**< [  0:  0](R/W) Secure vector. */
        uint64_t reserved_1            : 1;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tadx_msix_vecx_addr_s cn10; */
    /* struct cavm_tadx_msix_vecx_addr_s cn10ka; */
    struct cavm_tadx_msix_vecx_addr_cn10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_1            : 1;
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Secure vector. */
#else /* Word 0 - Little Endian */
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Secure vector. */
        uint64_t reserved_1            : 1;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } cn10kb;
    /* struct cavm_tadx_msix_vecx_addr_s cnf10ka; */
    /* struct cavm_tadx_msix_vecx_addr_s cnf10kb; */
};
typedef union cavm_tadx_msix_vecx_addr cavm_tadx_msix_vecx_addr_t;

static inline uint64_t CAVM_TADX_MSIX_VECX_ADDR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TADX_MSIX_VECX_ADDR(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=47) && (b==0)))
        return 0x87e280800000ll + 0x1000000ll * ((a) & 0x3f) + 0x10ll * ((b) & 0x0);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=15) && (b==0)))
        return 0x87e280800000ll + 0x1000000ll * ((a) & 0xf) + 0x10ll * ((b) & 0x0);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=35) && (b==0)))
        return 0x87e280800000ll + 0x1000000ll * ((a) & 0x3f) + 0x10ll * ((b) & 0x0);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=23) && (b==0)))
        return 0x87e280800000ll + 0x1000000ll * ((a) & 0x1f) + 0x10ll * ((b) & 0x0);
    __cavm_csr_fatal("TADX_MSIX_VECX_ADDR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_TADX_MSIX_VECX_ADDR(a,b) cavm_tadx_msix_vecx_addr_t
#define bustype_CAVM_TADX_MSIX_VECX_ADDR(a,b) CSR_TYPE_RSL
#define basename_CAVM_TADX_MSIX_VECX_ADDR(a,b) "TADX_MSIX_VECX_ADDR"
#define device_bar_CAVM_TADX_MSIX_VECX_ADDR(a,b) 0x4 /* PF_BAR4 */
#define busnum_CAVM_TADX_MSIX_VECX_ADDR(a,b) (a)
#define arguments_CAVM_TADX_MSIX_VECX_ADDR(a,b) (a),(b),-1,-1

/**
 * Register (RSL) tad#_msix_vec#_ctl
 *
 * TAD MSI-X Vector-Table Control and Data Register
 * This register is the MSI-X vector table, indexed by the TAD_PF_INT_VEC_E enumeration.
 */
union cavm_tadx_msix_vecx_ctl
{
    uint64_t u;
    struct cavm_tadx_msix_vecx_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_33_63        : 31;
        uint64_t mask                  : 1;  /**< [ 32: 32](R/W) When set, no MSI-X interrupts are sent to this vector. */
        uint64_t data                  : 32; /**< [ 31:  0](R/W) Data to use for MSI-X delivery of this vector. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 32; /**< [ 31:  0](R/W) Data to use for MSI-X delivery of this vector. */
        uint64_t mask                  : 1;  /**< [ 32: 32](R/W) When set, no MSI-X interrupts are sent to this vector. */
        uint64_t reserved_33_63        : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tadx_msix_vecx_ctl_s cn10; */
    /* struct cavm_tadx_msix_vecx_ctl_s cn10ka; */
    struct cavm_tadx_msix_vecx_ctl_cn10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_33_63        : 31;
        uint64_t mask                  : 1;  /**< [ 32: 32](SR/W) When set, no MSI-X interrupts are sent to this vector. */
        uint64_t data                  : 32; /**< [ 31:  0](SR/W) Data to use for MSI-X delivery of this vector. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 32; /**< [ 31:  0](SR/W) Data to use for MSI-X delivery of this vector. */
        uint64_t mask                  : 1;  /**< [ 32: 32](SR/W) When set, no MSI-X interrupts are sent to this vector. */
        uint64_t reserved_33_63        : 31;
#endif /* Word 0 - End */
    } cn10kb;
    /* struct cavm_tadx_msix_vecx_ctl_s cnf10ka; */
    /* struct cavm_tadx_msix_vecx_ctl_s cnf10kb; */
};
typedef union cavm_tadx_msix_vecx_ctl cavm_tadx_msix_vecx_ctl_t;

static inline uint64_t CAVM_TADX_MSIX_VECX_CTL(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TADX_MSIX_VECX_CTL(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=47) && (b==0)))
        return 0x87e280800008ll + 0x1000000ll * ((a) & 0x3f) + 0x10ll * ((b) & 0x0);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=15) && (b==0)))
        return 0x87e280800008ll + 0x1000000ll * ((a) & 0xf) + 0x10ll * ((b) & 0x0);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=35) && (b==0)))
        return 0x87e280800008ll + 0x1000000ll * ((a) & 0x3f) + 0x10ll * ((b) & 0x0);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=23) && (b==0)))
        return 0x87e280800008ll + 0x1000000ll * ((a) & 0x1f) + 0x10ll * ((b) & 0x0);
    __cavm_csr_fatal("TADX_MSIX_VECX_CTL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_TADX_MSIX_VECX_CTL(a,b) cavm_tadx_msix_vecx_ctl_t
#define bustype_CAVM_TADX_MSIX_VECX_CTL(a,b) CSR_TYPE_RSL
#define basename_CAVM_TADX_MSIX_VECX_CTL(a,b) "TADX_MSIX_VECX_CTL"
#define device_bar_CAVM_TADX_MSIX_VECX_CTL(a,b) 0x4 /* PF_BAR4 */
#define busnum_CAVM_TADX_MSIX_VECX_CTL(a,b) (a)
#define arguments_CAVM_TADX_MSIX_VECX_CTL(a,b) (a),(b),-1,-1

/**
 * Register (RSL) tad#_nderr_addr
 *
 * TAD Non-Data Error Address Register
 * This register records the error address for Non-Data Error interrupts triggered from
 * the REQ mesh [RDNXM, WRNXM, REQ_PERR]. The first [WRNXM, REQ_PERR] error will lock
 * the register until the logged error type is cleared; [RDNXM] errors lock the
 * register until either the logged error type is cleared or a [WRNXM, REQ_PERR] error
 * is logged. See TAD_NDERR_INFO for error opcode and srcid logging.
 */
union cavm_tadx_nderr_addr
{
    uint64_t u;
    struct cavm_tadx_nderr_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t nonsec                : 1;  /**< [ 52: 52](RO/H) For [RDNXM], [WRNXM], and [REQ_PERR], the NS bit from REQ mesh payload causing the
                                                                 error. Note for [REQ_PERR], the error itself might have corrupted the NS bit. */
        uint64_t addr                  : 52; /**< [ 51:  0](RO/H) For [RDNXM], [WRNXM], and [REQ_PERR], address from the REQ mesh payload causing the
                                                                 error. Note for [REQ_PERR], the error itself might have corrupted the address. */
#else /* Word 0 - Little Endian */
        uint64_t addr                  : 52; /**< [ 51:  0](RO/H) For [RDNXM], [WRNXM], and [REQ_PERR], address from the REQ mesh payload causing the
                                                                 error. Note for [REQ_PERR], the error itself might have corrupted the address. */
        uint64_t nonsec                : 1;  /**< [ 52: 52](RO/H) For [RDNXM], [WRNXM], and [REQ_PERR], the NS bit from REQ mesh payload causing the
                                                                 error. Note for [REQ_PERR], the error itself might have corrupted the NS bit. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tadx_nderr_addr_s cn10; */
    /* struct cavm_tadx_nderr_addr_s cn10ka; */
    struct cavm_tadx_nderr_addr_cn10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t nonsec                : 1;  /**< [ 52: 52](SRO/H) For [RDNXM], [WRNXM], and [REQ_PERR], the NS bit from REQ mesh payload causing the
                                                                 error. Note for [REQ_PERR], the error itself might have corrupted the NS bit. */
        uint64_t addr                  : 52; /**< [ 51:  0](SRO/H) For [RDNXM], [WRNXM], and [REQ_PERR], address from the REQ mesh payload causing the
                                                                 error. Note for [REQ_PERR], the error itself might have corrupted the address. */
#else /* Word 0 - Little Endian */
        uint64_t addr                  : 52; /**< [ 51:  0](SRO/H) For [RDNXM], [WRNXM], and [REQ_PERR], address from the REQ mesh payload causing the
                                                                 error. Note for [REQ_PERR], the error itself might have corrupted the address. */
        uint64_t nonsec                : 1;  /**< [ 52: 52](SRO/H) For [RDNXM], [WRNXM], and [REQ_PERR], the NS bit from REQ mesh payload causing the
                                                                 error. Note for [REQ_PERR], the error itself might have corrupted the NS bit. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } cn10kb;
    /* struct cavm_tadx_nderr_addr_s cnf10ka; */
    /* struct cavm_tadx_nderr_addr_s cnf10kb; */
};
typedef union cavm_tadx_nderr_addr cavm_tadx_nderr_addr_t;

static inline uint64_t CAVM_TADX_NDERR_ADDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TADX_NDERR_ADDR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=47))
        return 0x87e280000208ll + 0x1000000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=15))
        return 0x87e280000208ll + 0x1000000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=35))
        return 0x87e280000208ll + 0x1000000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=23))
        return 0x87e280000208ll + 0x1000000ll * ((a) & 0x1f);
    __cavm_csr_fatal("TADX_NDERR_ADDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TADX_NDERR_ADDR(a) cavm_tadx_nderr_addr_t
#define bustype_CAVM_TADX_NDERR_ADDR(a) CSR_TYPE_RSL
#define basename_CAVM_TADX_NDERR_ADDR(a) "TADX_NDERR_ADDR"
#define device_bar_CAVM_TADX_NDERR_ADDR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TADX_NDERR_ADDR(a) (a)
#define arguments_CAVM_TADX_NDERR_ADDR(a) (a),-1,-1,-1

/**
 * Register (RSL) tad#_nderr_info
 *
 * TAD Non-Data Error Info Register
 * This register records error information for Non-Data Error interrupts [RDNXM, WRNXM,
 * REQ_PERR, RSP_PERR, DAT_PERR, DAT_NDERR]. The first [WRNXM, REQ_PERR, RSP_PERR,
 * DAT_PERR, DAT_NDERR] error will lock the register until the logged error type is
 * cleared; [RDNXM] errors lock the register until either the logged error type is
 * cleared or a [WRNXM, REQ_PERR, RSP_PERR, DAT_PERR, DAT_NDERR] error is logged.
 * See TAD_NDERR_ADDR for error address logging.
 */
union cavm_tadx_nderr_info
{
    uint64_t u;
    struct cavm_tadx_nderr_info_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t rdnxm                 : 1;  /**< [ 63: 63](R/W1C/H) Logged information is for a TAD()_INT_W1C[RDNXM] error. */
        uint64_t wrnxm                 : 1;  /**< [ 62: 62](R/W1C/H) Logged information is for a TAD()_INT_W1C[WRNXM] error. */
        uint64_t req_perr              : 1;  /**< [ 61: 61](R/W1C/H) Logged information is for a TAD()_INT_W1C[REQ_PERR] error. */
        uint64_t rsp_perr              : 1;  /**< [ 60: 60](R/W1C/H) Logged information is for a TAD()_INT_W1C[RSP_PERR] error. */
        uint64_t dat_perr              : 1;  /**< [ 59: 59](R/W1C/H) Logged information is for a TAD()_INT_W1C[DAT_PERR] error. */
        uint64_t dat_nderr             : 1;  /**< [ 58: 58](R/W1C/H) Logged information is for a TAD()_INT_W1C[DAT_NDERR] error. */
        uint64_t reserved_18_57        : 40;
        uint64_t opcode                : 7;  /**< [ 17: 11](RO/H) The opcode from the REQ/RSP/DAT mesh payload causing the error. Note for
                                                                 [REQ_PERR], [RSP_PERR] and [DAT_PERR], the error itself might have corrupted the
                                                                 opcode. OPCODE[6:4] is 0 for DAT_PERR and OPCODE[6:5] is 0 for [RSP_PERR]. */
        uint64_t srcid                 : 11; /**< [ 10:  0](RO/H) The SRCID from the REQ/RSP/DAT mesh header causing the error. Note for
                                                                 [REQ_PERR], [RSP_PERR] and [DAT_PERR], the error itself might have corrupted the
                                                                 srcid. */
#else /* Word 0 - Little Endian */
        uint64_t srcid                 : 11; /**< [ 10:  0](RO/H) The SRCID from the REQ/RSP/DAT mesh header causing the error. Note for
                                                                 [REQ_PERR], [RSP_PERR] and [DAT_PERR], the error itself might have corrupted the
                                                                 srcid. */
        uint64_t opcode                : 7;  /**< [ 17: 11](RO/H) The opcode from the REQ/RSP/DAT mesh payload causing the error. Note for
                                                                 [REQ_PERR], [RSP_PERR] and [DAT_PERR], the error itself might have corrupted the
                                                                 opcode. OPCODE[6:4] is 0 for DAT_PERR and OPCODE[6:5] is 0 for [RSP_PERR]. */
        uint64_t reserved_18_57        : 40;
        uint64_t dat_nderr             : 1;  /**< [ 58: 58](R/W1C/H) Logged information is for a TAD()_INT_W1C[DAT_NDERR] error. */
        uint64_t dat_perr              : 1;  /**< [ 59: 59](R/W1C/H) Logged information is for a TAD()_INT_W1C[DAT_PERR] error. */
        uint64_t rsp_perr              : 1;  /**< [ 60: 60](R/W1C/H) Logged information is for a TAD()_INT_W1C[RSP_PERR] error. */
        uint64_t req_perr              : 1;  /**< [ 61: 61](R/W1C/H) Logged information is for a TAD()_INT_W1C[REQ_PERR] error. */
        uint64_t wrnxm                 : 1;  /**< [ 62: 62](R/W1C/H) Logged information is for a TAD()_INT_W1C[WRNXM] error. */
        uint64_t rdnxm                 : 1;  /**< [ 63: 63](R/W1C/H) Logged information is for a TAD()_INT_W1C[RDNXM] error. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tadx_nderr_info_s cn10; */
    /* struct cavm_tadx_nderr_info_s cn10ka; */
    struct cavm_tadx_nderr_info_cn10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t rdnxm                 : 1;  /**< [ 63: 63](SR/W1C/H) Logged information is for a TAD()_INT_W1C[RDNXM] error. */
        uint64_t wrnxm                 : 1;  /**< [ 62: 62](SR/W1C/H) Logged information is for a TAD()_INT_W1C[WRNXM] error. */
        uint64_t req_perr              : 1;  /**< [ 61: 61](SR/W1C/H) Logged information is for a TAD()_INT_W1C[REQ_PERR] error. */
        uint64_t rsp_perr              : 1;  /**< [ 60: 60](SR/W1C/H) Logged information is for a TAD()_INT_W1C[RSP_PERR] error. */
        uint64_t dat_perr              : 1;  /**< [ 59: 59](SR/W1C/H) Logged information is for a TAD()_INT_W1C[DAT_PERR] error. */
        uint64_t dat_nderr             : 1;  /**< [ 58: 58](SR/W1C/H) Logged information is for a TAD()_INT_W1C[DAT_NDERR] error. */
        uint64_t reserved_18_57        : 40;
        uint64_t opcode                : 7;  /**< [ 17: 11](SRO/H) The opcode from the REQ/RSP/DAT mesh payload causing the error. Note for
                                                                 [REQ_PERR], [RSP_PERR] and [DAT_PERR], the error itself might have corrupted the
                                                                 opcode. OPCODE[6:4] is 0 for DAT_PERR and OPCODE[6:5] is 0 for [RSP_PERR]. */
        uint64_t srcid                 : 11; /**< [ 10:  0](SRO/H) The SRCID from the REQ/RSP/DAT mesh header causing the error. Note for
                                                                 [REQ_PERR], [RSP_PERR] and [DAT_PERR], the error itself might have corrupted the
                                                                 srcid. */
#else /* Word 0 - Little Endian */
        uint64_t srcid                 : 11; /**< [ 10:  0](SRO/H) The SRCID from the REQ/RSP/DAT mesh header causing the error. Note for
                                                                 [REQ_PERR], [RSP_PERR] and [DAT_PERR], the error itself might have corrupted the
                                                                 srcid. */
        uint64_t opcode                : 7;  /**< [ 17: 11](SRO/H) The opcode from the REQ/RSP/DAT mesh payload causing the error. Note for
                                                                 [REQ_PERR], [RSP_PERR] and [DAT_PERR], the error itself might have corrupted the
                                                                 opcode. OPCODE[6:4] is 0 for DAT_PERR and OPCODE[6:5] is 0 for [RSP_PERR]. */
        uint64_t reserved_18_57        : 40;
        uint64_t dat_nderr             : 1;  /**< [ 58: 58](SR/W1C/H) Logged information is for a TAD()_INT_W1C[DAT_NDERR] error. */
        uint64_t dat_perr              : 1;  /**< [ 59: 59](SR/W1C/H) Logged information is for a TAD()_INT_W1C[DAT_PERR] error. */
        uint64_t rsp_perr              : 1;  /**< [ 60: 60](SR/W1C/H) Logged information is for a TAD()_INT_W1C[RSP_PERR] error. */
        uint64_t req_perr              : 1;  /**< [ 61: 61](SR/W1C/H) Logged information is for a TAD()_INT_W1C[REQ_PERR] error. */
        uint64_t wrnxm                 : 1;  /**< [ 62: 62](SR/W1C/H) Logged information is for a TAD()_INT_W1C[WRNXM] error. */
        uint64_t rdnxm                 : 1;  /**< [ 63: 63](SR/W1C/H) Logged information is for a TAD()_INT_W1C[RDNXM] error. */
#endif /* Word 0 - End */
    } cn10kb;
    /* struct cavm_tadx_nderr_info_s cnf10ka; */
    /* struct cavm_tadx_nderr_info_s cnf10kb; */
};
typedef union cavm_tadx_nderr_info cavm_tadx_nderr_info_t;

static inline uint64_t CAVM_TADX_NDERR_INFO(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TADX_NDERR_INFO(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=47))
        return 0x87e280000200ll + 0x1000000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=15))
        return 0x87e280000200ll + 0x1000000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=35))
        return 0x87e280000200ll + 0x1000000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=23))
        return 0x87e280000200ll + 0x1000000ll * ((a) & 0x1f);
    __cavm_csr_fatal("TADX_NDERR_INFO", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TADX_NDERR_INFO(a) cavm_tadx_nderr_info_t
#define bustype_CAVM_TADX_NDERR_INFO(a) CSR_TYPE_RSL
#define basename_CAVM_TADX_NDERR_INFO(a) "TADX_NDERR_INFO"
#define device_bar_CAVM_TADX_NDERR_INFO(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TADX_NDERR_INFO(a) (a)
#define arguments_CAVM_TADX_NDERR_INFO(a) (a),-1,-1,-1

/**
 * Register (RSL) tad#_pfc#
 *
 * TAD Performance Counter Registers
 */
union cavm_tadx_pfcx
{
    uint64_t u;
    struct cavm_tadx_pfcx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Current counter value. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Current counter value. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tadx_pfcx_s cn; */
};
typedef union cavm_tadx_pfcx cavm_tadx_pfcx_t;

static inline uint64_t CAVM_TADX_PFCX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TADX_PFCX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=47) && (b<=7)))
        return 0x87e280000800ll + 0x1000000ll * ((a) & 0x3f) + 8ll * ((b) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=15) && (b<=7)))
        return 0x87e280000800ll + 0x1000000ll * ((a) & 0xf) + 8ll * ((b) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=35) && (b<=7)))
        return 0x87e280000800ll + 0x1000000ll * ((a) & 0x3f) + 8ll * ((b) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=23) && (b<=7)))
        return 0x87e280000800ll + 0x1000000ll * ((a) & 0x1f) + 8ll * ((b) & 0x7);
    __cavm_csr_fatal("TADX_PFCX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_TADX_PFCX(a,b) cavm_tadx_pfcx_t
#define bustype_CAVM_TADX_PFCX(a,b) CSR_TYPE_RSL
#define basename_CAVM_TADX_PFCX(a,b) "TADX_PFCX"
#define device_bar_CAVM_TADX_PFCX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TADX_PFCX(a,b) (a)
#define arguments_CAVM_TADX_PFCX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) tad#_prf#
 *
 * TAD Performance Counter Control Registers
 * Selects event to count for each TAD_PFC, and specifies optional
 * filters for PMG and PARTID.
 */
union cavm_tadx_prfx
{
    uint64_t u;
    struct cavm_tadx_prfx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_28_63        : 36;
        uint64_t pmg_val               : 1;  /**< [ 27: 27](R/W) PMG value that events should be filtered by. Only filtered if
                                                                 [MATCH_PMG] is set. */
        uint64_t reserved_20_26        : 7;
        uint64_t partid_val            : 10; /**< [ 19: 10](R/W) PARTID value that events should be filtered by. Includes MPAMNS bit.
                                                                 Only filtered if [MATCH_PARTID] is set. */
        uint64_t match_pmg             : 1;  /**< [  9:  9](R/W) Determines if events should be filtered by PMG field. */
        uint64_t match_partid          : 1;  /**< [  8:  8](R/W) Determines if events should be filtered by MPAM field. */
        uint64_t cntsel                : 8;  /**< [  7:  0](R/W) Selects event to count for TAD_PFC(X). Enumerated by TAD_PRF_SEL_E. */
#else /* Word 0 - Little Endian */
        uint64_t cntsel                : 8;  /**< [  7:  0](R/W) Selects event to count for TAD_PFC(X). Enumerated by TAD_PRF_SEL_E. */
        uint64_t match_partid          : 1;  /**< [  8:  8](R/W) Determines if events should be filtered by MPAM field. */
        uint64_t match_pmg             : 1;  /**< [  9:  9](R/W) Determines if events should be filtered by PMG field. */
        uint64_t partid_val            : 10; /**< [ 19: 10](R/W) PARTID value that events should be filtered by. Includes MPAMNS bit.
                                                                 Only filtered if [MATCH_PARTID] is set. */
        uint64_t reserved_20_26        : 7;
        uint64_t pmg_val               : 1;  /**< [ 27: 27](R/W) PMG value that events should be filtered by. Only filtered if
                                                                 [MATCH_PMG] is set. */
        uint64_t reserved_28_63        : 36;
#endif /* Word 0 - End */
    } s;
    struct cavm_tadx_prfx_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_35_63        : 29;
        uint64_t reserved_28_34        : 7;
        uint64_t pmg_val               : 1;  /**< [ 27: 27](R/W) PMG value that events should be filtered by. Only filtered if
                                                                 [MATCH_PMG] is set. */
        uint64_t reserved_20_26        : 7;
        uint64_t partid_val            : 10; /**< [ 19: 10](R/W) PARTID value that events should be filtered by. Includes MPAMNS bit.
                                                                 Only filtered if [MATCH_PARTID] is set. */
        uint64_t match_pmg             : 1;  /**< [  9:  9](R/W) Determines if events should be filtered by PMG field. */
        uint64_t match_partid          : 1;  /**< [  8:  8](R/W) Determines if events should be filtered by MPAM field. */
        uint64_t cntsel                : 8;  /**< [  7:  0](R/W) Selects event to count for TAD_PFC(X). Enumerated by TAD_PRF_SEL_E. */
#else /* Word 0 - Little Endian */
        uint64_t cntsel                : 8;  /**< [  7:  0](R/W) Selects event to count for TAD_PFC(X). Enumerated by TAD_PRF_SEL_E. */
        uint64_t match_partid          : 1;  /**< [  8:  8](R/W) Determines if events should be filtered by MPAM field. */
        uint64_t match_pmg             : 1;  /**< [  9:  9](R/W) Determines if events should be filtered by PMG field. */
        uint64_t partid_val            : 10; /**< [ 19: 10](R/W) PARTID value that events should be filtered by. Includes MPAMNS bit.
                                                                 Only filtered if [MATCH_PARTID] is set. */
        uint64_t reserved_20_26        : 7;
        uint64_t pmg_val               : 1;  /**< [ 27: 27](R/W) PMG value that events should be filtered by. Only filtered if
                                                                 [MATCH_PMG] is set. */
        uint64_t reserved_28_34        : 7;
        uint64_t reserved_35_63        : 29;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_tadx_prfx cavm_tadx_prfx_t;

static inline uint64_t CAVM_TADX_PRFX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TADX_PRFX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=47) && (b<=7)))
        return 0x87e280000900ll + 0x1000000ll * ((a) & 0x3f) + 8ll * ((b) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=15) && (b<=7)))
        return 0x87e280000900ll + 0x1000000ll * ((a) & 0xf) + 8ll * ((b) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=35) && (b<=7)))
        return 0x87e280000900ll + 0x1000000ll * ((a) & 0x3f) + 8ll * ((b) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=23) && (b<=7)))
        return 0x87e280000900ll + 0x1000000ll * ((a) & 0x1f) + 8ll * ((b) & 0x7);
    __cavm_csr_fatal("TADX_PRFX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_TADX_PRFX(a,b) cavm_tadx_prfx_t
#define bustype_CAVM_TADX_PRFX(a,b) CSR_TYPE_RSL
#define basename_CAVM_TADX_PRFX(a,b) "TADX_PRFX"
#define device_bar_CAVM_TADX_PRFX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TADX_PRFX(a,b) (a)
#define arguments_CAVM_TADX_PRFX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) tad#_req_rcnt
 *
 * TAD Request Resource Count Registers
 */
union cavm_tadx_req_rcnt
{
    uint64_t u;
    struct cavm_tadx_req_rcnt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t cnt                   : 7;  /**< [  6:  0](RO/H) Number of requests stored in Buffers/IFBs.
                                                                 This count is used to determine CBUSY[1] in TAD responses. */
#else /* Word 0 - Little Endian */
        uint64_t cnt                   : 7;  /**< [  6:  0](RO/H) Number of requests stored in Buffers/IFBs.
                                                                 This count is used to determine CBUSY[1] in TAD responses. */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tadx_req_rcnt_s cn10; */
    /* struct cavm_tadx_req_rcnt_s cn10ka; */
    struct cavm_tadx_req_rcnt_cn10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t cnt                   : 7;  /**< [  6:  0](SRO/H) Number of requests stored in Buffers/IFBs.
                                                                 This count is used to determine CBUSY[1] in TAD responses. */
#else /* Word 0 - Little Endian */
        uint64_t cnt                   : 7;  /**< [  6:  0](SRO/H) Number of requests stored in Buffers/IFBs.
                                                                 This count is used to determine CBUSY[1] in TAD responses. */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } cn10kb;
    /* struct cavm_tadx_req_rcnt_s cnf10ka; */
    /* struct cavm_tadx_req_rcnt_s cnf10kb; */
};
typedef union cavm_tadx_req_rcnt cavm_tadx_req_rcnt_t;

static inline uint64_t CAVM_TADX_REQ_RCNT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TADX_REQ_RCNT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=47))
        return 0x87e280002008ll + 0x1000000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=15))
        return 0x87e280002008ll + 0x1000000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=35))
        return 0x87e280002008ll + 0x1000000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=23))
        return 0x87e280002008ll + 0x1000000ll * ((a) & 0x1f);
    __cavm_csr_fatal("TADX_REQ_RCNT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TADX_REQ_RCNT(a) cavm_tadx_req_rcnt_t
#define bustype_CAVM_TADX_REQ_RCNT(a) CSR_TYPE_RSL
#define basename_CAVM_TADX_REQ_RCNT(a) "TADX_REQ_RCNT"
#define device_bar_CAVM_TADX_REQ_RCNT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TADX_REQ_RCNT(a) (a)
#define arguments_CAVM_TADX_REQ_RCNT(a) (a),-1,-1,-1

#endif /* __CAVM_CSRS_TAD_H__ */
