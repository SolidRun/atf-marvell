#ifndef __CAVM_CSRS_APR_H__
#define __CAVM_CSRS_APR_H__
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
 * OcteonTX APR.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Structure apr_lmt_arg_s
 *
 * APR LMTST Data Operand Structure
 */
union cavm_apr_lmt_arg_s
{
    uint64_t u;
    struct cavm_apr_lmt_arg_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t size_vec              : 45; /**< [ 63: 19] Vector of sizes for each LMTST in the burst, except the first. Every 3 bits
                                                                 represents the size-1 of one LMTST, in units of 128 bits. The size of the first
                                                                 LMTST is excluded, so there are 15 LMTSTs x 3 bits each = 45 bits in total in
                                                                 the vector. LSB ordering is used, the second LMTST uses [SIZE_VEC]\<21:19\>, the
                                                                 third uses [SIZE_VEC]\<24:22\> and the sixteenth uses [SIZE_VEC]\<63:61\>. The size of
                                                                 the first LMTST in the burst is specified in bits \<6:4\> of the physical
                                                                 address of the atomic instruction triggering the LMTST. */
        uint64_t reserved_16_18        : 3;
        uint64_t cntm1                 : 4;  /**< [ 15: 12] Count minus one of LMTSTs in the burst. Maximum legal burst size is 16 LMTLINEs. */
        uint64_t reserved_11           : 1;
        uint64_t lmt_id                : 11; /**< [ 10:  0] Identifies which LMT within the LMT region is used for the first LMTST in the
                                                                 burst. LMTLINE physical address is APR_LMT_MAP_ENTRY_S[LMTLINE_BASE] + (128 * [LMT_ID]). */
#else /* Word 0 - Little Endian */
        uint64_t lmt_id                : 11; /**< [ 10:  0] Identifies which LMT within the LMT region is used for the first LMTST in the
                                                                 burst. LMTLINE physical address is APR_LMT_MAP_ENTRY_S[LMTLINE_BASE] + (128 * [LMT_ID]). */
        uint64_t reserved_11           : 1;
        uint64_t cntm1                 : 4;  /**< [ 15: 12] Count minus one of LMTSTs in the burst. Maximum legal burst size is 16 LMTLINEs. */
        uint64_t reserved_16_18        : 3;
        uint64_t size_vec              : 45; /**< [ 63: 19] Vector of sizes for each LMTST in the burst, except the first. Every 3 bits
                                                                 represents the size-1 of one LMTST, in units of 128 bits. The size of the first
                                                                 LMTST is excluded, so there are 15 LMTSTs x 3 bits each = 45 bits in total in
                                                                 the vector. LSB ordering is used, the second LMTST uses [SIZE_VEC]\<21:19\>, the
                                                                 third uses [SIZE_VEC]\<24:22\> and the sixteenth uses [SIZE_VEC]\<63:61\>. The size of
                                                                 the first LMTST in the burst is specified in bits \<6:4\> of the physical
                                                                 address of the atomic instruction triggering the LMTST. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apr_lmt_arg_s_s cn; */
};

/**
 * Structure apr_lmt_map_entry_s
 *
 * APR PF_FUNC LMTLINE Region Configuration Structure
 */
union cavm_apr_lmt_map_entry_s
{
    uint64_t u[2];
    struct cavm_apr_lmt_map_entry_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t lmtline_base          : 64; /**< [ 63:  0] Physical address. Bits 63:48, 6:0 must be zero (i.e., 48-bit physical
                                                                 address, must be 128-byte aligned). */
#else /* Word 0 - Little Endian */
        uint64_t lmtline_base          : 64; /**< [ 63:  0] Physical address. Bits 63:48, 6:0 must be zero (i.e., 48-bit physical
                                                                 address, must be 128-byte aligned). */
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t reserved_88_127       : 40;
        uint64_t dis_sched_early_comp  : 1;  /**< [ 87: 87] When set, disables early completion for scheduled LMTSTs. */
        uint64_t sched_ena             : 1;  /**< [ 86: 86] When clear, ordered LMTSTs to this PF_FUNC are faulted. */
        uint64_t dis_line_pref         : 1;  /**< [ 85: 85] When set, disables LMTLINE prefetch before receiving store data. */
        uint64_t lmt_ena               : 1;  /**< [ 84: 84] When clear, LMTSTs to this PF_FUNC are faulted. */
        uint64_t reserved_83           : 1;
        uint64_t num_lmtlines          : 3;  /**< [ 82: 80] Number of LMTLINES at [LMTLINE_BASE]. Expressed in 2^(5+[NUM_LMTLINES]).
                                                                 0x0 = 32 LMTLINEs.
                                                                 0x4 = 512 LMTLINEs.
                                                                 0x6 = 2048 LMTLINEs.

                                                                 Other values are reserved. */
        uint64_t reserved_77_79        : 3;
        uint64_t ssow_pf_func          : 13; /**< [ 76: 64] The SSOW PF_FUNC used for ordering the LMTST with SSO. Note that this field
                                                                 does not use the RVU_PF_FUNC_S format. This field is formatted as:
                                                                 Bits \<7:0\>  = FUNC.
                                                                 Bits \<12:8\> = PF. */
#else /* Word 1 - Little Endian */
        uint64_t ssow_pf_func          : 13; /**< [ 76: 64] The SSOW PF_FUNC used for ordering the LMTST with SSO. Note that this field
                                                                 does not use the RVU_PF_FUNC_S format. This field is formatted as:
                                                                 Bits \<7:0\>  = FUNC.
                                                                 Bits \<12:8\> = PF. */
        uint64_t reserved_77_79        : 3;
        uint64_t num_lmtlines          : 3;  /**< [ 82: 80] Number of LMTLINES at [LMTLINE_BASE]. Expressed in 2^(5+[NUM_LMTLINES]).
                                                                 0x0 = 32 LMTLINEs.
                                                                 0x4 = 512 LMTLINEs.
                                                                 0x6 = 2048 LMTLINEs.

                                                                 Other values are reserved. */
        uint64_t reserved_83           : 1;
        uint64_t lmt_ena               : 1;  /**< [ 84: 84] When clear, LMTSTs to this PF_FUNC are faulted. */
        uint64_t dis_line_pref         : 1;  /**< [ 85: 85] When set, disables LMTLINE prefetch before receiving store data. */
        uint64_t sched_ena             : 1;  /**< [ 86: 86] When clear, ordered LMTSTs to this PF_FUNC are faulted. */
        uint64_t dis_sched_early_comp  : 1;  /**< [ 87: 87] When set, disables early completion for scheduled LMTSTs. */
        uint64_t reserved_88_127       : 40;
#endif /* Word 1 - End */
    } s;
    /* struct cavm_apr_lmt_map_entry_s_s cn; */
};

/**
 * Register (RVU_PF_BAR0) apr_af_core#_diag0
 *
 * AP DIAG Register 0
 * Number of inflight LMTSTs.
 */
union cavm_apr_af_corex_diag0
{
    uint64_t u;
    struct cavm_apr_af_corex_diag0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t num_lmtst_inflight    : 2;  /**< [  1:  0](RO/H) Number of LMTSTs currently inflight in the LSA Engines. */
#else /* Word 0 - Little Endian */
        uint64_t num_lmtst_inflight    : 2;  /**< [  1:  0](RO/H) Number of LMTSTs currently inflight in the LSA Engines. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apr_af_corex_diag0_s cn; */
};
typedef union cavm_apr_af_corex_diag0 cavm_apr_af_corex_diag0_t;

static inline uint64_t CAVM_APR_AF_COREX_DIAG0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APR_AF_COREX_DIAG0(uint64_t a)
{
    if (a<=63)
        return 0x840168000000ll + 0x100000ll * ((a) & 0x3f);
    __cavm_csr_fatal("APR_AF_COREX_DIAG0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APR_AF_COREX_DIAG0(a) cavm_apr_af_corex_diag0_t
#define bustype_CAVM_APR_AF_COREX_DIAG0(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_APR_AF_COREX_DIAG0(a) "APR_AF_COREX_DIAG0"
#define device_bar_CAVM_APR_AF_COREX_DIAG0(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_APR_AF_COREX_DIAG0(a) (a)
#define arguments_CAVM_APR_AF_COREX_DIAG0(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) apr_af_core#_diag1
 *
 * AP DIAG Register 1
 * Number of LMTSTS processed.
 */
union cavm_apr_af_corex_diag1
{
    uint64_t u;
    struct cavm_apr_af_corex_diag1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t num_lmtst             : 48; /**< [ 47:  0](R/W/H) Number of LMTST processed since field was last cleared.
                                                                 Counter wraps if max value hit. */
#else /* Word 0 - Little Endian */
        uint64_t num_lmtst             : 48; /**< [ 47:  0](R/W/H) Number of LMTST processed since field was last cleared.
                                                                 Counter wraps if max value hit. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apr_af_corex_diag1_s cn; */
};
typedef union cavm_apr_af_corex_diag1 cavm_apr_af_corex_diag1_t;

static inline uint64_t CAVM_APR_AF_COREX_DIAG1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APR_AF_COREX_DIAG1(uint64_t a)
{
    if (a<=63)
        return 0x840168000008ll + 0x100000ll * ((a) & 0x3f);
    __cavm_csr_fatal("APR_AF_COREX_DIAG1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APR_AF_COREX_DIAG1(a) cavm_apr_af_corex_diag1_t
#define bustype_CAVM_APR_AF_COREX_DIAG1(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_APR_AF_COREX_DIAG1(a) "APR_AF_COREX_DIAG1"
#define device_bar_CAVM_APR_AF_COREX_DIAG1(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_APR_AF_COREX_DIAG1(a) (a)
#define arguments_CAVM_APR_AF_COREX_DIAG1(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) apr_af_core#_diag2
 *
 * AP DIAG Register 2
 * Number of LMTLINES fetched.
 */
union cavm_apr_af_corex_diag2
{
    uint64_t u;
    struct cavm_apr_af_corex_diag2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t num_lmtlines          : 48; /**< [ 47:  0](R/W/H) Number of LMTLINES fetched since field was last cleared.
                                                                 Counter wraps if max value hit. */
#else /* Word 0 - Little Endian */
        uint64_t num_lmtlines          : 48; /**< [ 47:  0](R/W/H) Number of LMTLINES fetched since field was last cleared.
                                                                 Counter wraps if max value hit. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apr_af_corex_diag2_s cn; */
};
typedef union cavm_apr_af_corex_diag2 cavm_apr_af_corex_diag2_t;

static inline uint64_t CAVM_APR_AF_COREX_DIAG2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APR_AF_COREX_DIAG2(uint64_t a)
{
    if (a<=63)
        return 0x840168000010ll + 0x100000ll * ((a) & 0x3f);
    __cavm_csr_fatal("APR_AF_COREX_DIAG2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APR_AF_COREX_DIAG2(a) cavm_apr_af_corex_diag2_t
#define bustype_CAVM_APR_AF_COREX_DIAG2(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_APR_AF_COREX_DIAG2(a) "APR_AF_COREX_DIAG2"
#define device_bar_CAVM_APR_AF_COREX_DIAG2(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_APR_AF_COREX_DIAG2(a) (a)
#define arguments_CAVM_APR_AF_COREX_DIAG2(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) apr_af_core#_diag3
 *
 * AP DIAG Register 3
 * Number of LMTLINES fetched from AP.
 */
union cavm_apr_af_corex_diag3
{
    uint64_t u;
    struct cavm_apr_af_corex_diag3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t num_lmtlines_from_ap  : 48; /**< [ 47:  0](R/W/H) Number of LMTLINES fetched from AP ince field was last cleared.
                                                                 Counter wraps if max value hit. */
#else /* Word 0 - Little Endian */
        uint64_t num_lmtlines_from_ap  : 48; /**< [ 47:  0](R/W/H) Number of LMTLINES fetched from AP ince field was last cleared.
                                                                 Counter wraps if max value hit. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apr_af_corex_diag3_s cn; */
};
typedef union cavm_apr_af_corex_diag3 cavm_apr_af_corex_diag3_t;

static inline uint64_t CAVM_APR_AF_COREX_DIAG3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APR_AF_COREX_DIAG3(uint64_t a)
{
    if (a<=63)
        return 0x840168000018ll + 0x100000ll * ((a) & 0x3f);
    __cavm_csr_fatal("APR_AF_COREX_DIAG3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APR_AF_COREX_DIAG3(a) cavm_apr_af_corex_diag3_t
#define bustype_CAVM_APR_AF_COREX_DIAG3(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_APR_AF_COREX_DIAG3(a) "APR_AF_COREX_DIAG3"
#define device_bar_CAVM_APR_AF_COREX_DIAG3(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_APR_AF_COREX_DIAG3(a) (a)
#define arguments_CAVM_APR_AF_COREX_DIAG3(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) apr_af_core#_lsa#_addr
 *
 * LMTST Req Address Register
 * Record physical address of the STEOR/STSMAX Req flit triggering an LMTST
 */
union cavm_apr_af_corex_lsax_addr
{
    uint64_t u;
    struct cavm_apr_af_corex_lsax_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t val                   : 1;  /**< [ 52: 52](R/W1C/H) Internal use only - tells logic updating APR_AF_CORE()_LSA()_ERR if
                                                                 ADDR field has the physical address of the STEOR/STSMAX Req flit
                                                                 being processed, and not one of a previously completed LMTST. */
        uint64_t addr                  : 52; /**< [ 51:  0](R/W1C/H) Physical address of the STEOR/STSMAX Req flit that logged errors in
                                                                 APR_AF_CORE()_LSA()_ERR. */
#else /* Word 0 - Little Endian */
        uint64_t addr                  : 52; /**< [ 51:  0](R/W1C/H) Physical address of the STEOR/STSMAX Req flit that logged errors in
                                                                 APR_AF_CORE()_LSA()_ERR. */
        uint64_t val                   : 1;  /**< [ 52: 52](R/W1C/H) Internal use only - tells logic updating APR_AF_CORE()_LSA()_ERR if
                                                                 ADDR field has the physical address of the STEOR/STSMAX Req flit
                                                                 being processed, and not one of a previously completed LMTST. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apr_af_corex_lsax_addr_s cn; */
};
typedef union cavm_apr_af_corex_lsax_addr cavm_apr_af_corex_lsax_addr_t;

static inline uint64_t CAVM_APR_AF_COREX_LSAX_ADDR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APR_AF_COREX_LSAX_ADDR(uint64_t a, uint64_t b)
{
    if ((a<=63) && (b<=1))
        return 0x840168000030ll + 0x100000ll * ((a) & 0x3f) + 0x1000ll * ((b) & 0x1);
    __cavm_csr_fatal("APR_AF_COREX_LSAX_ADDR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_APR_AF_COREX_LSAX_ADDR(a,b) cavm_apr_af_corex_lsax_addr_t
#define bustype_CAVM_APR_AF_COREX_LSAX_ADDR(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_APR_AF_COREX_LSAX_ADDR(a,b) "APR_AF_COREX_LSAX_ADDR"
#define device_bar_CAVM_APR_AF_COREX_LSAX_ADDR(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_APR_AF_COREX_LSAX_ADDR(a,b) (a)
#define arguments_CAVM_APR_AF_COREX_LSAX_ADDR(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) apr_af_core#_lsa#_err
 *
 * LMTST Req Error Register
 * Record errors in the STEOR/STSMAX Req flit triggering an LMTST
 */
union cavm_apr_af_corex_lsax_err
{
    uint64_t u;
    struct cavm_apr_af_corex_lsax_err_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_57_63        : 7;
        uint64_t returnnid_mbz         : 1;  /**< [ 56: 56](R/W1C/H) Returnnid field in STEOR/STSMAX Req flit not zero. */
        uint64_t returntxnid_mbz       : 1;  /**< [ 55: 55](R/W1C/H) Returntxnid field in STEOR/STSMAX Req flit not zero. */
        uint64_t order                 : 2;  /**< [ 54: 53](R/W1C/H) Order field in STEOR/STSMAX Req flit. */
        uint64_t memattr               : 4;  /**< [ 52: 49](R/W1C/H) Memattr field in STEOR/STSMAX Req flit. */
        uint64_t homenid_mbz           : 1;  /**< [ 48: 48](R/W1C/H) Homenid field in STEOR/STSMAX Dat flit not zero. */
        uint64_t reserved_28_47        : 20;
        uint64_t resperr_pa            : 2;  /**< [ 27: 26](R/W1C/H) RespErr field seen in the CompData fetching the physical address of the LMTLINE. */
        uint64_t resperr_dat           : 2;  /**< [ 25: 24](R/W1C/H) RespErr seen in the Dat flit associated with the STEOR/STXMAX triggering an LMTST. */
        uint64_t poison_pa             : 4;  /**< [ 23: 20](R/W1C/H) Poison bits in the CompData fetching the physical address of the LMTLINE. */
        uint64_t poison_dat            : 4;  /**< [ 19: 16](R/W1C/H) Poison bits in the Dat flit associated with the STEOR/STXMAX triggering an LMTST. */
        uint64_t reserved_3_15         : 13;
        uint64_t addr_lsb_mbz          : 1;  /**< [  2:  2](R/W1C/H) Bits [3:0] of the request destination address were not zero. */
        uint64_t func_w_err            : 1;  /**< [  1:  1](R/W1C/H) FUNC field in req exceeded max width specified by APR_AF_LMT_CFG[FUNCS]. */
        uint64_t pf_w_err              : 1;  /**< [  0:  0](R/W1C/H) PF field in req exceeded max width specified by APR_AF_LMT_CFG[PFS]. */
#else /* Word 0 - Little Endian */
        uint64_t pf_w_err              : 1;  /**< [  0:  0](R/W1C/H) PF field in req exceeded max width specified by APR_AF_LMT_CFG[PFS]. */
        uint64_t func_w_err            : 1;  /**< [  1:  1](R/W1C/H) FUNC field in req exceeded max width specified by APR_AF_LMT_CFG[FUNCS]. */
        uint64_t addr_lsb_mbz          : 1;  /**< [  2:  2](R/W1C/H) Bits [3:0] of the request destination address were not zero. */
        uint64_t reserved_3_15         : 13;
        uint64_t poison_dat            : 4;  /**< [ 19: 16](R/W1C/H) Poison bits in the Dat flit associated with the STEOR/STXMAX triggering an LMTST. */
        uint64_t poison_pa             : 4;  /**< [ 23: 20](R/W1C/H) Poison bits in the CompData fetching the physical address of the LMTLINE. */
        uint64_t resperr_dat           : 2;  /**< [ 25: 24](R/W1C/H) RespErr seen in the Dat flit associated with the STEOR/STXMAX triggering an LMTST. */
        uint64_t resperr_pa            : 2;  /**< [ 27: 26](R/W1C/H) RespErr field seen in the CompData fetching the physical address of the LMTLINE. */
        uint64_t reserved_28_47        : 20;
        uint64_t homenid_mbz           : 1;  /**< [ 48: 48](R/W1C/H) Homenid field in STEOR/STSMAX Dat flit not zero. */
        uint64_t memattr               : 4;  /**< [ 52: 49](R/W1C/H) Memattr field in STEOR/STSMAX Req flit. */
        uint64_t order                 : 2;  /**< [ 54: 53](R/W1C/H) Order field in STEOR/STSMAX Req flit. */
        uint64_t returntxnid_mbz       : 1;  /**< [ 55: 55](R/W1C/H) Returntxnid field in STEOR/STSMAX Req flit not zero. */
        uint64_t returnnid_mbz         : 1;  /**< [ 56: 56](R/W1C/H) Returnnid field in STEOR/STSMAX Req flit not zero. */
        uint64_t reserved_57_63        : 7;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apr_af_corex_lsax_err_s cn; */
};
typedef union cavm_apr_af_corex_lsax_err cavm_apr_af_corex_lsax_err_t;

static inline uint64_t CAVM_APR_AF_COREX_LSAX_ERR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APR_AF_COREX_LSAX_ERR(uint64_t a, uint64_t b)
{
    if ((a<=63) && (b<=1))
        return 0x840168000038ll + 0x100000ll * ((a) & 0x3f) + 0x1000ll * ((b) & 0x1);
    __cavm_csr_fatal("APR_AF_COREX_LSAX_ERR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_APR_AF_COREX_LSAX_ERR(a,b) cavm_apr_af_corex_lsax_err_t
#define bustype_CAVM_APR_AF_COREX_LSAX_ERR(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_APR_AF_COREX_LSAX_ERR(a,b) "APR_AF_COREX_LSAX_ERR"
#define device_bar_CAVM_APR_AF_COREX_LSAX_ERR(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_APR_AF_COREX_LSAX_ERR(a,b) (a)
#define arguments_CAVM_APR_AF_COREX_LSAX_ERR(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) apr_af_core#_lsa#_rd_err
 *
 * LMTST Read RespErr Register
 * Record poison and RespErr in CompData flits in an LMTST.
 */
union cavm_apr_af_corex_lsax_rd_err
{
    uint64_t u;
    struct cavm_apr_af_corex_lsax_rd_err_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_58_63        : 6;
        uint64_t poison                : 4;  /**< [ 57: 54](R/W1C/H) Poison field in DAT flit. In a burst LMTST, RESPERR and POISON
                                                                 could have been seen in flits corresponding to different LMTLINES. */
        uint64_t resperr               : 2;  /**< [ 53: 52](R/W1C/H) RespErr field in DAT flit. In a burst LMTST, RESPERR and POISON
                                                                 could have been seen in flits corresponding to different LMTLINES. */
        uint64_t addr                  : 52; /**< [ 51:  0](R/W1C/H) Physical address of the first ReadOnce in an LMTST transaction sequence
                                                                 during which a CompData flit with a non-OK RespErr field, or a non-zero
                                                                 poison field was seen. In a burst-LMTST, the physical address of the first
                                                                 LMTLINE in the burst is recorded, even if RespErr or poison were seen
                                                                 in a CompData flit for a subsequent LMTLINE in the burst. Not cleared at
                                                                 the end of the LMTST, but could be over-written during a subsequent LMTST. */
#else /* Word 0 - Little Endian */
        uint64_t addr                  : 52; /**< [ 51:  0](R/W1C/H) Physical address of the first ReadOnce in an LMTST transaction sequence
                                                                 during which a CompData flit with a non-OK RespErr field, or a non-zero
                                                                 poison field was seen. In a burst-LMTST, the physical address of the first
                                                                 LMTLINE in the burst is recorded, even if RespErr or poison were seen
                                                                 in a CompData flit for a subsequent LMTLINE in the burst. Not cleared at
                                                                 the end of the LMTST, but could be over-written during a subsequent LMTST. */
        uint64_t resperr               : 2;  /**< [ 53: 52](R/W1C/H) RespErr field in DAT flit. In a burst LMTST, RESPERR and POISON
                                                                 could have been seen in flits corresponding to different LMTLINES. */
        uint64_t poison                : 4;  /**< [ 57: 54](R/W1C/H) Poison field in DAT flit. In a burst LMTST, RESPERR and POISON
                                                                 could have been seen in flits corresponding to different LMTLINES. */
        uint64_t reserved_58_63        : 6;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apr_af_corex_lsax_rd_err_s cn; */
};
typedef union cavm_apr_af_corex_lsax_rd_err cavm_apr_af_corex_lsax_rd_err_t;

static inline uint64_t CAVM_APR_AF_COREX_LSAX_RD_ERR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APR_AF_COREX_LSAX_RD_ERR(uint64_t a, uint64_t b)
{
    if ((a<=63) && (b<=1))
        return 0x840168000028ll + 0x100000ll * ((a) & 0x3f) + 0x1000ll * ((b) & 0x1);
    __cavm_csr_fatal("APR_AF_COREX_LSAX_RD_ERR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_APR_AF_COREX_LSAX_RD_ERR(a,b) cavm_apr_af_corex_lsax_rd_err_t
#define bustype_CAVM_APR_AF_COREX_LSAX_RD_ERR(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_APR_AF_COREX_LSAX_RD_ERR(a,b) "APR_AF_COREX_LSAX_RD_ERR"
#define device_bar_CAVM_APR_AF_COREX_LSAX_RD_ERR(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_APR_AF_COREX_LSAX_RD_ERR(a,b) (a)
#define arguments_CAVM_APR_AF_COREX_LSAX_RD_ERR(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) apr_af_core#_lsa#_wr_err
 *
 * LMTST Write RespErr Register
 * Record RespErr in CompDBIDResp flits in an LMTST.
 */
union cavm_apr_af_corex_lsax_wr_err
{
    uint64_t u;
    struct cavm_apr_af_corex_lsax_wr_err_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_54_63        : 10;
        uint64_t resperr               : 2;  /**< [ 53: 52](R/W1C/H) RespErr field in RSP flit. */
        uint64_t addr                  : 52; /**< [ 51:  0](R/W1C/H) Physical address of the WriteNoSnp associated with the most recently
                                                                 seen CompDBIDResp flit in an LMTST transaction sequence with a non-OK
                                                                 RespErr field. Not cleared at the end of the LMTST, but could be over-
                                                                 written during a subsequent LMTST. */
#else /* Word 0 - Little Endian */
        uint64_t addr                  : 52; /**< [ 51:  0](R/W1C/H) Physical address of the WriteNoSnp associated with the most recently
                                                                 seen CompDBIDResp flit in an LMTST transaction sequence with a non-OK
                                                                 RespErr field. Not cleared at the end of the LMTST, but could be over-
                                                                 written during a subsequent LMTST. */
        uint64_t resperr               : 2;  /**< [ 53: 52](R/W1C/H) RespErr field in RSP flit. */
        uint64_t reserved_54_63        : 10;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apr_af_corex_lsax_wr_err_s cn; */
};
typedef union cavm_apr_af_corex_lsax_wr_err cavm_apr_af_corex_lsax_wr_err_t;

static inline uint64_t CAVM_APR_AF_COREX_LSAX_WR_ERR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APR_AF_COREX_LSAX_WR_ERR(uint64_t a, uint64_t b)
{
    if ((a<=63) && (b<=1))
        return 0x840168000020ll + 0x100000ll * ((a) & 0x3f) + 0x1000ll * ((b) & 0x1);
    __cavm_csr_fatal("APR_AF_COREX_LSAX_WR_ERR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_APR_AF_COREX_LSAX_WR_ERR(a,b) cavm_apr_af_corex_lsax_wr_err_t
#define bustype_CAVM_APR_AF_COREX_LSAX_WR_ERR(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_APR_AF_COREX_LSAX_WR_ERR(a,b) "APR_AF_COREX_LSAX_WR_ERR"
#define device_bar_CAVM_APR_AF_COREX_LSAX_WR_ERR(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_APR_AF_COREX_LSAX_WR_ERR(a,b) (a)
#define arguments_CAVM_APR_AF_COREX_LSAX_WR_ERR(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) apr_af_lmt_cfg
 *
 * APR AF LMT Configuration Register
 * Configure the engines that process LMTSTs.
 */
union cavm_apr_af_lmt_cfg
{
    uint64_t u;
    struct cavm_apr_af_lmt_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_39_63        : 25;
        uint64_t lmtst_throttle        : 4;  /**< [ 38: 35](R/W) Limit the number of outstanding WriteNoSnoop transactions issued
                                                                 by APA as part of an LMTST, to [LMTST_THROTTLE]+1. */
        uint64_t dis_eng               : 2;  /**< [ 34: 33](R/W) When set, disables use of LMTST Engines. Bit 33 set=disable engine 0. Bit 34 set=
                                                                 disable engine 1. Debug only. At most one bit must be set at any time. */
        uint64_t shrink_lpc            : 1;  /**< [ 32: 32](R/W) When set decreases the size of the physical address cache to two entries. Debug only. */
        uint64_t reserved_22_31        : 10;
        uint64_t ignore_resperr_st_dat : 1;  /**< [ 21: 21](R/W) When set, RespErr in STEOR/STSMAX NCBWrData will be recorded, but
                                                                 will not affect transactions issued for the LMTST in any other way. */
        uint64_t ignore_poison_st_dat  : 1;  /**< [ 20: 20](R/W) When set, poison in STEOR/STSMAX NCBWrData will be recorded, but
                                                                 will not affect transactions issued for the LMTST in any other way. */
        uint64_t reserved_15_19        : 5;
        uint64_t ignore_resperr_pa     : 1;  /**< [ 14: 14](R/W) When set, RespErr in CompData fetching an LMTLINE's physical address will be
                                                                 recorded, but will not affect transactions issued for the LMTST in any other way. */
        uint64_t ignore_poison_pa      : 1;  /**< [ 13: 13](R/W) When set, poison in CompData fetching an LMTLINE's physical address will be
                                                                 recorded, but will not affect transactions issued for the LMTST in any other way. */
        uint64_t sec_lmt               : 1;  /**< [ 12: 12](SR/W) When set, the LMT map and LMTLINE regions all reside in secure memory,
                                                                 otherwise, LMT map and LMTLINE regions reside in non-secure memory. */
        uint64_t gbl_dis_sched         : 1;  /**< [ 11: 11](R/W) When set disables all scheduled LMTSTs and return fault for any attempts. */
        uint64_t gbl_dis_lpc           : 1;  /**< [ 10: 10](R/W) When set, APR_LMT_MAP_ENTRY_S[LMTLINE_BASE] will not be cached in the LPC. LPC
                                                                 will not be updated or looked up. A ReadOnce to fetch the APR_LMT_MAP_ENTRY_S is
                                                                 issued with each STEOR/STSMAX. */
        uint64_t gbl_dis_line_pref     : 1;  /**< [  9:  9](R/W) When set disables prefetching of LMTLINE before receiving store data. */
        uint64_t gbl_dis_sched_early_comp : 1;/**< [  8:  8](R/W) When set disables early completion for scheduled LMTSTs. */
        uint64_t reserved_7            : 1;
        uint64_t pfs                   : 3;  /**< [  6:  4](R/W) Number of PFs that are supported as power-of-two. Also impacts the size of the
                                                                 LMT map table.
                                                                     0x0 = 1 PF.
                                                                     0x1 = 2 PFs.
                                                                     0x2 = 4 PFs.
                                                                     0x3 = 8 PFs.
                                                                     0x4 = 16 PFs.
                                                                     0x5 = 32 PFs.
                                                                     _ else Reserved. */
        uint64_t funcs                 : 4;  /**< [  3:  0](R/W) Nmber of FUNCs per PF that are supported as power-of-two. Also impacts the
                                                                 size of the LMT map table.
                                                                     0x0 = 1 Function per PF.
                                                                     0x4 = 16 Functions per PF.
                                                                     0x6 = 64 Functions per PF.
                                                                     0x8 = 256 Functions per PF.
                                                                     _ else Reserved. */
#else /* Word 0 - Little Endian */
        uint64_t funcs                 : 4;  /**< [  3:  0](R/W) Nmber of FUNCs per PF that are supported as power-of-two. Also impacts the
                                                                 size of the LMT map table.
                                                                     0x0 = 1 Function per PF.
                                                                     0x4 = 16 Functions per PF.
                                                                     0x6 = 64 Functions per PF.
                                                                     0x8 = 256 Functions per PF.
                                                                     _ else Reserved. */
        uint64_t pfs                   : 3;  /**< [  6:  4](R/W) Number of PFs that are supported as power-of-two. Also impacts the size of the
                                                                 LMT map table.
                                                                     0x0 = 1 PF.
                                                                     0x1 = 2 PFs.
                                                                     0x2 = 4 PFs.
                                                                     0x3 = 8 PFs.
                                                                     0x4 = 16 PFs.
                                                                     0x5 = 32 PFs.
                                                                     _ else Reserved. */
        uint64_t reserved_7            : 1;
        uint64_t gbl_dis_sched_early_comp : 1;/**< [  8:  8](R/W) When set disables early completion for scheduled LMTSTs. */
        uint64_t gbl_dis_line_pref     : 1;  /**< [  9:  9](R/W) When set disables prefetching of LMTLINE before receiving store data. */
        uint64_t gbl_dis_lpc           : 1;  /**< [ 10: 10](R/W) When set, APR_LMT_MAP_ENTRY_S[LMTLINE_BASE] will not be cached in the LPC. LPC
                                                                 will not be updated or looked up. A ReadOnce to fetch the APR_LMT_MAP_ENTRY_S is
                                                                 issued with each STEOR/STSMAX. */
        uint64_t gbl_dis_sched         : 1;  /**< [ 11: 11](R/W) When set disables all scheduled LMTSTs and return fault for any attempts. */
        uint64_t sec_lmt               : 1;  /**< [ 12: 12](SR/W) When set, the LMT map and LMTLINE regions all reside in secure memory,
                                                                 otherwise, LMT map and LMTLINE regions reside in non-secure memory. */
        uint64_t ignore_poison_pa      : 1;  /**< [ 13: 13](R/W) When set, poison in CompData fetching an LMTLINE's physical address will be
                                                                 recorded, but will not affect transactions issued for the LMTST in any other way. */
        uint64_t ignore_resperr_pa     : 1;  /**< [ 14: 14](R/W) When set, RespErr in CompData fetching an LMTLINE's physical address will be
                                                                 recorded, but will not affect transactions issued for the LMTST in any other way. */
        uint64_t reserved_15_19        : 5;
        uint64_t ignore_poison_st_dat  : 1;  /**< [ 20: 20](R/W) When set, poison in STEOR/STSMAX NCBWrData will be recorded, but
                                                                 will not affect transactions issued for the LMTST in any other way. */
        uint64_t ignore_resperr_st_dat : 1;  /**< [ 21: 21](R/W) When set, RespErr in STEOR/STSMAX NCBWrData will be recorded, but
                                                                 will not affect transactions issued for the LMTST in any other way. */
        uint64_t reserved_22_31        : 10;
        uint64_t shrink_lpc            : 1;  /**< [ 32: 32](R/W) When set decreases the size of the physical address cache to two entries. Debug only. */
        uint64_t dis_eng               : 2;  /**< [ 34: 33](R/W) When set, disables use of LMTST Engines. Bit 33 set=disable engine 0. Bit 34 set=
                                                                 disable engine 1. Debug only. At most one bit must be set at any time. */
        uint64_t lmtst_throttle        : 4;  /**< [ 38: 35](R/W) Limit the number of outstanding WriteNoSnoop transactions issued
                                                                 by APA as part of an LMTST, to [LMTST_THROTTLE]+1. */
        uint64_t reserved_39_63        : 25;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apr_af_lmt_cfg_s cn; */
};
typedef union cavm_apr_af_lmt_cfg cavm_apr_af_lmt_cfg_t;

#define CAVM_APR_AF_LMT_CFG CAVM_APR_AF_LMT_CFG_FUNC()
static inline uint64_t CAVM_APR_AF_LMT_CFG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APR_AF_LMT_CFG_FUNC(void)
{
    return 0x840160000000ll;
}

#define typedef_CAVM_APR_AF_LMT_CFG cavm_apr_af_lmt_cfg_t
#define bustype_CAVM_APR_AF_LMT_CFG CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_APR_AF_LMT_CFG "APR_AF_LMT_CFG"
#define device_bar_CAVM_APR_AF_LMT_CFG 0x0 /* RVU_BAR0 */
#define busnum_CAVM_APR_AF_LMT_CFG 0
#define arguments_CAVM_APR_AF_LMT_CFG -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) apr_af_lmt_ctl
 *
 * APR AF LMT Control Register
 * Control LMTST engines including LPC flush.
 */
union cavm_apr_af_lmt_ctl
{
    uint64_t u;
    struct cavm_apr_af_lmt_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t flush                 : 1;  /**< [  0:  0](R/W) Write to 1 to one-time flush the local APR_LMT_MAP_ENTRY_S cache from each AP
                                                                 interceptor. Read a 1 after writing 1 to confirm flush has been executed.
                                                                 Write to 0 after a write to 1 to complete the flush. Must write to 0 before
                                                                 a new flush can be issued. */
#else /* Word 0 - Little Endian */
        uint64_t flush                 : 1;  /**< [  0:  0](R/W) Write to 1 to one-time flush the local APR_LMT_MAP_ENTRY_S cache from each AP
                                                                 interceptor. Read a 1 after writing 1 to confirm flush has been executed.
                                                                 Write to 0 after a write to 1 to complete the flush. Must write to 0 before
                                                                 a new flush can be issued. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apr_af_lmt_ctl_s cn; */
};
typedef union cavm_apr_af_lmt_ctl cavm_apr_af_lmt_ctl_t;

#define CAVM_APR_AF_LMT_CTL CAVM_APR_AF_LMT_CTL_FUNC()
static inline uint64_t CAVM_APR_AF_LMT_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APR_AF_LMT_CTL_FUNC(void)
{
    return 0x840160000010ll;
}

#define typedef_CAVM_APR_AF_LMT_CTL cavm_apr_af_lmt_ctl_t
#define bustype_CAVM_APR_AF_LMT_CTL CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_APR_AF_LMT_CTL "APR_AF_LMT_CTL"
#define device_bar_CAVM_APR_AF_LMT_CTL 0x0 /* RVU_BAR0 */
#define busnum_CAVM_APR_AF_LMT_CTL 0
#define arguments_CAVM_APR_AF_LMT_CTL -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) apr_af_lmt_map_base
 *
 * APR AF LMT Map Base Address Register
 * Base physical address of LMT map table. The table contains APR_AF_LMT_CFG[PFS] *
 * APR_AF_LMT_CFG[FUNCS] entries of 16 bytes each (128 KB total), with each entry
 * formatted as APR_LMT_MAP_ENTRY_S.
 *
 * The table is indexed by a (PF, FUNC) extracted from the destination address of an LMTST.  Note
 * that RVU_PF_FUNC_S defines a 16-bit PF_FUNC with 6-bit PF and 10-bit FUNC, but in
 * practice CNXXXX addresses only contain a 5-bit PF and 8-bit FUNC, which may be
 * limited further by the counts in APR_AF_LMT_CFG[PFS,FUNCS].
 */
union cavm_apr_af_lmt_map_base
{
    uint64_t u;
    struct cavm_apr_af_lmt_map_base_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_52_63        : 12;
        uint64_t addr                  : 45; /**< [ 51:  7](R/W) Physcial address bits \<51:7\>.  Note that bits \<6:0\> are always 0. */
        uint64_t reserved_0_6          : 7;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_6          : 7;
        uint64_t addr                  : 45; /**< [ 51:  7](R/W) Physcial address bits \<51:7\>.  Note that bits \<6:0\> are always 0. */
        uint64_t reserved_52_63        : 12;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apr_af_lmt_map_base_s cn; */
};
typedef union cavm_apr_af_lmt_map_base cavm_apr_af_lmt_map_base_t;

#define CAVM_APR_AF_LMT_MAP_BASE CAVM_APR_AF_LMT_MAP_BASE_FUNC()
static inline uint64_t CAVM_APR_AF_LMT_MAP_BASE_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APR_AF_LMT_MAP_BASE_FUNC(void)
{
    return 0x840160000008ll;
}

#define typedef_CAVM_APR_AF_LMT_MAP_BASE cavm_apr_af_lmt_map_base_t
#define bustype_CAVM_APR_AF_LMT_MAP_BASE CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_APR_AF_LMT_MAP_BASE "APR_AF_LMT_MAP_BASE"
#define device_bar_CAVM_APR_AF_LMT_MAP_BASE 0x0 /* RVU_BAR0 */
#define busnum_CAVM_APR_AF_LMT_MAP_BASE 0
#define arguments_CAVM_APR_AF_LMT_MAP_BASE -1,-1,-1,-1

#endif /* __CAVM_CSRS_APR_H__ */
