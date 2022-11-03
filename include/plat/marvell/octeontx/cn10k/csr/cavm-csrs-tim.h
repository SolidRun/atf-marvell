#ifndef __CAVM_CSRS_TIM_H__
#define __CAVM_CSRS_TIM_H__
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
 * OcteonTX TIM.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration tim_af_int_vec_e
 *
 * TIM AF MSI-X Vector Enumeration
 * Enumerates the MSI-X interrupt vectors.
 */
#define CAVM_TIM_AF_INT_VEC_E_BKT_SKIP_INTX(a) (0 + (a))
#define CAVM_TIM_AF_INT_VEC_E_RVU_INT (4)

/**
 * Enumeration tim_clk_srcs_e
 *
 * TIM Clock Sources Enumeration
 * Enumerates TIM_AF_RING()_CTL1[CLK_SRC].
 */
#define CAVM_TIM_CLK_SRCS_E_BTS (5)
#define CAVM_TIM_CLK_SRCS_E_GPIO (1)
#define CAVM_TIM_CLK_SRCS_E_GTI (2)
#define CAVM_TIM_CLK_SRCS_E_PTP (3)
#define CAVM_TIM_CLK_SRCS_E_SYNCE (4)
#define CAVM_TIM_CLK_SRCS_E_TENNS (0)

/**
 * Enumeration tim_lf_int_vec_e
 *
 * TIM LF MSI-X Vector Enumeration
 * Enumerates the MSI-X interrupt vectors.
 */
#define CAVM_TIM_LF_INT_VEC_E_NRSPERR_INT (0)
#define CAVM_TIM_LF_INT_VEC_E_RAS_INT (1)

/**
 * Structure tim_mem_bucket_s
 *
 * TIM Memory Bucket Structure
 */
union cavm_tim_mem_bucket_s
{
    uint64_t u[4];
    struct cavm_tim_mem_bucket_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t first_chunk           : 64; /**< [ 63:  0] Pointer to first chunk memory. \<63:53,6:0\> must be zero. Updated by software when a first
                                                                 chunk is added. Read by timer hardware. */
#else /* Word 0 - Little Endian */
        uint64_t first_chunk           : 64; /**< [ 63:  0] Pointer to first chunk memory. \<63:53,6:0\> must be zero. Updated by software when a first
                                                                 chunk is added. Read by timer hardware. */
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t chunk_remainder       : 16; /**< [127:112] Number of remaining entries for software to enter in the list. This number should always
                                                                 be smaller than chunk size. This field is decremented by software whenever software adds
                                                                 an entry. If [NUM_ENTRIES] is nonzero, written to zeros by hardware when hardware
                                                                 processes the entry unless TIM_AF_RING()_CTL1[ENA_PRD] is set. */
        uint64_t lock                  : 8;  /**< [111:104] Count of how many outstanding software threads are working on the bucket.
                                                                 The field must be atomically incremented and decremented by software.
                                                                 Note that this allows up to 256 threads doing parallel operations.

                                                                 Hardware never writes this byte. */
        uint64_t reserved_99_103       : 5;
        uint64_t bsk                   : 1;  /**< [ 98: 98] Bucket skip indicator. Set by hardware to indicate to software that hardware has
                                                                 skipped processing the bucket because it was unable to gain the bucket lock.

                                                                 Cleared by the entity that traverses the bucket (either software or hardware). */
        uint64_t hbt                   : 1;  /**< [ 97: 97] Hardware bucket traversal indicator.
                                                                 Indicates that hardware is currently attempting to traverse the bucket. */
        uint64_t sbt                   : 1;  /**< [ 96: 96] Software bucket traversal indicator.
                                                                 Indicates that software is currently attempting to traverse the bucket. */
        uint64_t num_entries           : 32; /**< [ 95: 64] Number of entries that software added to the list. Incremented whenever software adds an
                                                                 entry. Written to zeros by hardware when hardware processes the list unless
                                                                 TIM_AF_RING()_CTL1[ENA_PRD] is set. */
#else /* Word 1 - Little Endian */
        uint64_t num_entries           : 32; /**< [ 95: 64] Number of entries that software added to the list. Incremented whenever software adds an
                                                                 entry. Written to zeros by hardware when hardware processes the list unless
                                                                 TIM_AF_RING()_CTL1[ENA_PRD] is set. */
        uint64_t sbt                   : 1;  /**< [ 96: 96] Software bucket traversal indicator.
                                                                 Indicates that software is currently attempting to traverse the bucket. */
        uint64_t hbt                   : 1;  /**< [ 97: 97] Hardware bucket traversal indicator.
                                                                 Indicates that hardware is currently attempting to traverse the bucket. */
        uint64_t bsk                   : 1;  /**< [ 98: 98] Bucket skip indicator. Set by hardware to indicate to software that hardware has
                                                                 skipped processing the bucket because it was unable to gain the bucket lock.

                                                                 Cleared by the entity that traverses the bucket (either software or hardware). */
        uint64_t reserved_99_103       : 5;
        uint64_t lock                  : 8;  /**< [111:104] Count of how many outstanding software threads are working on the bucket.
                                                                 The field must be atomically incremented and decremented by software.
                                                                 Note that this allows up to 256 threads doing parallel operations.

                                                                 Hardware never writes this byte. */
        uint64_t chunk_remainder       : 16; /**< [127:112] Number of remaining entries for software to enter in the list. This number should always
                                                                 be smaller than chunk size. This field is decremented by software whenever software adds
                                                                 an entry. If [NUM_ENTRIES] is nonzero, written to zeros by hardware when hardware
                                                                 processes the entry unless TIM_AF_RING()_CTL1[ENA_PRD] is set. */
#endif /* Word 1 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 2 - Big Endian */
        uint64_t current_chunk         : 64; /**< [191:128] Not used by timer hardware. Points to the last chunk in the list and is updated by
                                                                 software whenever chunk is added to the list. */
#else /* Word 2 - Little Endian */
        uint64_t current_chunk         : 64; /**< [191:128] Not used by timer hardware. Points to the last chunk in the list and is updated by
                                                                 software whenever chunk is added to the list. */
#endif /* Word 2 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 3 - Big Endian */
        uint64_t pad                   : 64; /**< [255:192] Padding, not used by hardware. */
#else /* Word 3 - Little Endian */
        uint64_t pad                   : 64; /**< [255:192] Padding, not used by hardware. */
#endif /* Word 3 - End */
    } s;
    /* struct cavm_tim_mem_bucket_s_s cn; */
};

/**
 * Structure tim_mem_entry_s
 *
 * TIM Memory Entry Structure
 */
union cavm_tim_mem_entry_s
{
    uint64_t u[2];
    struct cavm_tim_mem_entry_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_44_63        : 20;
        uint64_t grp                   : 10; /**< [ 43: 34] SSO guest group.
                                                                 For the SSO to not discard the add-work request, TIM_AF_RING()_GMCTL[SSO_PF_FUNC] must be legal. */
        uint64_t tt                    : 2;  /**< [ 33: 32] SSO tag type.  Enumerated by SSO_TT_E. */
        uint64_t tag                   : 32; /**< [ 31:  0] SSO tag. */
#else /* Word 0 - Little Endian */
        uint64_t tag                   : 32; /**< [ 31:  0] SSO tag. */
        uint64_t tt                    : 2;  /**< [ 33: 32] SSO tag type.  Enumerated by SSO_TT_E. */
        uint64_t grp                   : 10; /**< [ 43: 34] SSO guest group.
                                                                 For the SSO to not discard the add-work request, TIM_AF_RING()_GMCTL[SSO_PF_FUNC] must be legal. */
        uint64_t reserved_44_63        : 20;
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t wqp                   : 64; /**< [127: 64] Pointer to a work-queue entry. An all-zero [WQP] is not sent to the SSO and may
                                                                 be used as a NOP, e.g. to indicate a deleted entry. \<2:0\> must be zero.

                                                                 Bits \<2:0\> must be zero.  Bits \<63:53\> are ignored by hardware; software should
                                                                 store a sign-extended [WQP]\<52\> for forward compatibility. */
#else /* Word 1 - Little Endian */
        uint64_t wqp                   : 64; /**< [127: 64] Pointer to a work-queue entry. An all-zero [WQP] is not sent to the SSO and may
                                                                 be used as a NOP, e.g. to indicate a deleted entry. \<2:0\> must be zero.

                                                                 Bits \<2:0\> must be zero.  Bits \<63:53\> are ignored by hardware; software should
                                                                 store a sign-extended [WQP]\<52\> for forward compatibility. */
#endif /* Word 1 - End */
    } s;
    /* struct cavm_tim_mem_entry_s_s cn; */
};

/**
 * Register (RVU_PF_BAR0) tim_af_active_pc
 *
 * TIM AF Active Cycles Register
 */
union cavm_tim_af_active_pc
{
    uint64_t u;
    struct cavm_tim_af_active_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t act_cyc               : 64; /**< [ 63:  0](R/W/H) Counts every coprocessor-clock cycle that the conditional clocks are active. */
#else /* Word 0 - Little Endian */
        uint64_t act_cyc               : 64; /**< [ 63:  0](R/W/H) Counts every coprocessor-clock cycle that the conditional clocks are active. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tim_af_active_pc_s cn; */
};
typedef union cavm_tim_af_active_pc cavm_tim_af_active_pc_t;

#define CAVM_TIM_AF_ACTIVE_PC CAVM_TIM_AF_ACTIVE_PC_FUNC()
static inline uint64_t CAVM_TIM_AF_ACTIVE_PC_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TIM_AF_ACTIVE_PC_FUNC(void)
{
    return 0x840090030070ll;
}

#define typedef_CAVM_TIM_AF_ACTIVE_PC cavm_tim_af_active_pc_t
#define bustype_CAVM_TIM_AF_ACTIVE_PC CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_TIM_AF_ACTIVE_PC "TIM_AF_ACTIVE_PC"
#define device_bar_CAVM_TIM_AF_ACTIVE_PC 0x0 /* RVU_BAR0 */
#define busnum_CAVM_TIM_AF_ACTIVE_PC 0
#define arguments_CAVM_TIM_AF_ACTIVE_PC -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) tim_af_adjust_bts
 *
 * TIM AF ADJUST BTS Timer Adjust Register
 */
union cavm_tim_af_adjust_bts
{
    uint64_t u;
    struct cavm_tim_af_adjust_bts_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t adjust_time           : 64; /**< [ 63:  0](R/W) Indicates the signed delta value for the BTS timer to be updated. */
#else /* Word 0 - Little Endian */
        uint64_t adjust_time           : 64; /**< [ 63:  0](R/W) Indicates the signed delta value for the BTS timer to be updated. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tim_af_adjust_bts_s cn; */
};
typedef union cavm_tim_af_adjust_bts cavm_tim_af_adjust_bts_t;

#define CAVM_TIM_AF_ADJUST_BTS CAVM_TIM_AF_ADJUST_BTS_FUNC()
static inline uint64_t CAVM_TIM_AF_ADJUST_BTS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TIM_AF_ADJUST_BTS_FUNC(void)
{
    return 0x8400900001b0ll;
}

#define typedef_CAVM_TIM_AF_ADJUST_BTS cavm_tim_af_adjust_bts_t
#define bustype_CAVM_TIM_AF_ADJUST_BTS CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_TIM_AF_ADJUST_BTS "TIM_AF_ADJUST_BTS"
#define device_bar_CAVM_TIM_AF_ADJUST_BTS 0x0 /* RVU_BAR0 */
#define busnum_CAVM_TIM_AF_ADJUST_BTS 0
#define arguments_CAVM_TIM_AF_ADJUST_BTS -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) tim_af_adjust_gpios
 *
 * TIM AF ADJUST GPIOS Timer Adjust Register
 */
union cavm_tim_af_adjust_gpios
{
    uint64_t u;
    struct cavm_tim_af_adjust_gpios_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t adjust_time           : 64; /**< [ 63:  0](R/W) Indicates the signed delta value for the GPIO timer to be updated. */
#else /* Word 0 - Little Endian */
        uint64_t adjust_time           : 64; /**< [ 63:  0](R/W) Indicates the signed delta value for the GPIO timer to be updated. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tim_af_adjust_gpios_s cn; */
};
typedef union cavm_tim_af_adjust_gpios cavm_tim_af_adjust_gpios_t;

#define CAVM_TIM_AF_ADJUST_GPIOS CAVM_TIM_AF_ADJUST_GPIOS_FUNC()
static inline uint64_t CAVM_TIM_AF_ADJUST_GPIOS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TIM_AF_ADJUST_GPIOS_FUNC(void)
{
    return 0x840090000170ll;
}

#define typedef_CAVM_TIM_AF_ADJUST_GPIOS cavm_tim_af_adjust_gpios_t
#define bustype_CAVM_TIM_AF_ADJUST_GPIOS CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_TIM_AF_ADJUST_GPIOS "TIM_AF_ADJUST_GPIOS"
#define device_bar_CAVM_TIM_AF_ADJUST_GPIOS 0x0 /* RVU_BAR0 */
#define busnum_CAVM_TIM_AF_ADJUST_GPIOS 0
#define arguments_CAVM_TIM_AF_ADJUST_GPIOS -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) tim_af_adjust_gti
 *
 * TIM AF ADJUST GTI Timer Adjust Register
 */
union cavm_tim_af_adjust_gti
{
    uint64_t u;
    struct cavm_tim_af_adjust_gti_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t adjust_time           : 64; /**< [ 63:  0](R/W) Indicates the signed delta value for the GTI timer to be updated. */
#else /* Word 0 - Little Endian */
        uint64_t adjust_time           : 64; /**< [ 63:  0](R/W) Indicates the signed delta value for the GTI timer to be updated. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tim_af_adjust_gti_s cn; */
};
typedef union cavm_tim_af_adjust_gti cavm_tim_af_adjust_gti_t;

#define CAVM_TIM_AF_ADJUST_GTI CAVM_TIM_AF_ADJUST_GTI_FUNC()
static inline uint64_t CAVM_TIM_AF_ADJUST_GTI_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TIM_AF_ADJUST_GTI_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN10KA_AX))
        return 0x840090000180ll;
    if (cavm_is_model(OCTEONTX_CNF10KA))
        return 0x840090000180ll;
    if (cavm_is_model(OCTEONTX_CNF10KB_AX))
        return 0x840090000180ll;
    __cavm_csr_fatal("TIM_AF_ADJUST_GTI", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TIM_AF_ADJUST_GTI cavm_tim_af_adjust_gti_t
#define bustype_CAVM_TIM_AF_ADJUST_GTI CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_TIM_AF_ADJUST_GTI "TIM_AF_ADJUST_GTI"
#define device_bar_CAVM_TIM_AF_ADJUST_GTI 0x0 /* RVU_BAR0 */
#define busnum_CAVM_TIM_AF_ADJUST_GTI 0
#define arguments_CAVM_TIM_AF_ADJUST_GTI -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) tim_af_adjust_tenns
 *
 * TIM AF TENNS Timer Adjust Register
 */
union cavm_tim_af_adjust_tenns
{
    uint64_t u;
    struct cavm_tim_af_adjust_tenns_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t adjust_time           : 64; /**< [ 63:  0](R/W) Indicates the signed delta value for the TENNS timer to be updated. */
#else /* Word 0 - Little Endian */
        uint64_t adjust_time           : 64; /**< [ 63:  0](R/W) Indicates the signed delta value for the TENNS timer to be updated. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tim_af_adjust_tenns_s cn; */
};
typedef union cavm_tim_af_adjust_tenns cavm_tim_af_adjust_tenns_t;

#define CAVM_TIM_AF_ADJUST_TENNS CAVM_TIM_AF_ADJUST_TENNS_FUNC()
static inline uint64_t CAVM_TIM_AF_ADJUST_TENNS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TIM_AF_ADJUST_TENNS_FUNC(void)
{
    return 0x840090000160ll;
}

#define typedef_CAVM_TIM_AF_ADJUST_TENNS cavm_tim_af_adjust_tenns_t
#define bustype_CAVM_TIM_AF_ADJUST_TENNS CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_TIM_AF_ADJUST_TENNS "TIM_AF_ADJUST_TENNS"
#define device_bar_CAVM_TIM_AF_ADJUST_TENNS 0x0 /* RVU_BAR0 */
#define busnum_CAVM_TIM_AF_ADJUST_TENNS 0
#define arguments_CAVM_TIM_AF_ADJUST_TENNS -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) tim_af_adjust_timers
 *
 * TIM AF adjust all timers Register
 */
union cavm_tim_af_adjust_timers
{
    uint64_t u;
    struct cavm_tim_af_adjust_timers_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t adjust_timers         : 1;  /**< [  0:  0](R/W1S/H) When set, all values in registers TIM_AF_ADJUST_* will be updated into their corresponding timers.
                                                                 The adjustment operation will take 3 timer clocks, software must not set this bit until 3 clock
                                                                 periods of all clocks being adjusted have occurred. */
#else /* Word 0 - Little Endian */
        uint64_t adjust_timers         : 1;  /**< [  0:  0](R/W1S/H) When set, all values in registers TIM_AF_ADJUST_* will be updated into their corresponding timers.
                                                                 The adjustment operation will take 3 timer clocks, software must not set this bit until 3 clock
                                                                 periods of all clocks being adjusted have occurred. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tim_af_adjust_timers_s cn; */
};
typedef union cavm_tim_af_adjust_timers cavm_tim_af_adjust_timers_t;

#define CAVM_TIM_AF_ADJUST_TIMERS CAVM_TIM_AF_ADJUST_TIMERS_FUNC()
static inline uint64_t CAVM_TIM_AF_ADJUST_TIMERS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TIM_AF_ADJUST_TIMERS_FUNC(void)
{
    return 0x8400900001c0ll;
}

#define typedef_CAVM_TIM_AF_ADJUST_TIMERS cavm_tim_af_adjust_timers_t
#define bustype_CAVM_TIM_AF_ADJUST_TIMERS CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_TIM_AF_ADJUST_TIMERS "TIM_AF_ADJUST_TIMERS"
#define device_bar_CAVM_TIM_AF_ADJUST_TIMERS 0x0 /* RVU_BAR0 */
#define busnum_CAVM_TIM_AF_ADJUST_TIMERS 0
#define arguments_CAVM_TIM_AF_ADJUST_TIMERS -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) tim_af_bar2_alias#
 *
 * TIM Admin Function  BAR2 Alias Registers
 * These registers alias to the TIM BAR2 registers for the PF and function
 * selected by TIM_AF_BAR2_SEL[PF_FUNC].
 */
union cavm_tim_af_bar2_aliasx
{
    uint64_t u;
    struct cavm_tim_af_bar2_aliasx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W/H) Aliased register data. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W/H) Aliased register data. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tim_af_bar2_aliasx_s cn; */
};
typedef union cavm_tim_af_bar2_aliasx cavm_tim_af_bar2_aliasx_t;

static inline uint64_t CAVM_TIM_AF_BAR2_ALIASX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TIM_AF_BAR2_ALIASX(uint64_t a)
{
    if (a<=131071)
        return 0x840099100000ll + 8ll * ((a) & 0x1ffff);
    __cavm_csr_fatal("TIM_AF_BAR2_ALIASX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TIM_AF_BAR2_ALIASX(a) cavm_tim_af_bar2_aliasx_t
#define bustype_CAVM_TIM_AF_BAR2_ALIASX(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_TIM_AF_BAR2_ALIASX(a) "TIM_AF_BAR2_ALIASX"
#define device_bar_CAVM_TIM_AF_BAR2_ALIASX(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_TIM_AF_BAR2_ALIASX(a) (a)
#define arguments_CAVM_TIM_AF_BAR2_ALIASX(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) tim_af_bar2_sel
 *
 * TIM Admin Function BAR2 Select Register
 * This register configures BAR2 accesses from the TIM_AF_BAR2_ALIAS() registers in BAR0.
 */
union cavm_tim_af_bar2_sel
{
    uint64_t u;
    struct cavm_tim_af_bar2_sel_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_17_63        : 47;
        uint64_t alias_ena             : 1;  /**< [ 16: 16](R/W) Enable BAR2 register accesses from the AF BAR2 alias registers in BAR0. */
        uint64_t alias_pf_func         : 16; /**< [ 15:  0](R/W) PF and function whose BAR2 registers may be accessed from the AF BAR2 alias
                                                                 registers. Format specified by RVU_PF_FUNC_S. */
#else /* Word 0 - Little Endian */
        uint64_t alias_pf_func         : 16; /**< [ 15:  0](R/W) PF and function whose BAR2 registers may be accessed from the AF BAR2 alias
                                                                 registers. Format specified by RVU_PF_FUNC_S. */
        uint64_t alias_ena             : 1;  /**< [ 16: 16](R/W) Enable BAR2 register accesses from the AF BAR2 alias registers in BAR0. */
        uint64_t reserved_17_63        : 47;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tim_af_bar2_sel_s cn; */
};
typedef union cavm_tim_af_bar2_sel cavm_tim_af_bar2_sel_t;

#define CAVM_TIM_AF_BAR2_SEL CAVM_TIM_AF_BAR2_SEL_FUNC()
static inline uint64_t CAVM_TIM_AF_BAR2_SEL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TIM_AF_BAR2_SEL_FUNC(void)
{
    return 0x840099000000ll;
}

#define typedef_CAVM_TIM_AF_BAR2_SEL cavm_tim_af_bar2_sel_t
#define bustype_CAVM_TIM_AF_BAR2_SEL CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_TIM_AF_BAR2_SEL "TIM_AF_BAR2_SEL"
#define device_bar_CAVM_TIM_AF_BAR2_SEL 0x0 /* RVU_BAR0 */
#define busnum_CAVM_TIM_AF_BAR2_SEL 0
#define arguments_CAVM_TIM_AF_BAR2_SEL -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) tim_af_bkt_skip#_int_status
 *
 * TIM BKT_SKIP_INT Ring Status Register
 */
union cavm_tim_af_bkt_skipx_int_status
{
    uint64_t u;
    struct cavm_tim_af_bkt_skipx_int_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_20_63        : 44;
        uint64_t bkt_skip_id           : 20; /**< [ 19:  0](RO/H) When TIM_AF_BKT_SKIP_INT() gets set, this field reflects the bucket that was skipped
                                                                 for the corresponding ring. For diagnostic use only, as only one ring's status is kept. */
#else /* Word 0 - Little Endian */
        uint64_t bkt_skip_id           : 20; /**< [ 19:  0](RO/H) When TIM_AF_BKT_SKIP_INT() gets set, this field reflects the bucket that was skipped
                                                                 for the corresponding ring. For diagnostic use only, as only one ring's status is kept. */
        uint64_t reserved_20_63        : 44;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tim_af_bkt_skipx_int_status_s cn; */
};
typedef union cavm_tim_af_bkt_skipx_int_status cavm_tim_af_bkt_skipx_int_status_t;

static inline uint64_t CAVM_TIM_AF_BKT_SKIPX_INT_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TIM_AF_BKT_SKIPX_INT_STATUS(uint64_t a)
{
    if (a<=255)
        return 0x840090044000ll + 8ll * ((a) & 0xff);
    __cavm_csr_fatal("TIM_AF_BKT_SKIPX_INT_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TIM_AF_BKT_SKIPX_INT_STATUS(a) cavm_tim_af_bkt_skipx_int_status_t
#define bustype_CAVM_TIM_AF_BKT_SKIPX_INT_STATUS(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_TIM_AF_BKT_SKIPX_INT_STATUS(a) "TIM_AF_BKT_SKIPX_INT_STATUS"
#define device_bar_CAVM_TIM_AF_BKT_SKIPX_INT_STATUS(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_TIM_AF_BKT_SKIPX_INT_STATUS(a) (a)
#define arguments_CAVM_TIM_AF_BKT_SKIPX_INT_STATUS(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) tim_af_bkt_skip_int#
 *
 * TIM AF Bucket Skip Interrupt Register
 */
union cavm_tim_af_bkt_skip_intx
{
    uint64_t u;
    struct cavm_tim_af_bkt_skip_intx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t bkt_skip              : 64; /**< [ 63:  0](R/W1C/H) Interrupt bit per ring. Each bit corresponds to rings 255:0 respectively.
                                                                 If set, at least one bucket was skipped by hardware, when a ring has expired.
                                                                 Hardware sets this when TIM attempted traversal but the bucket's
                                                                 TIM_MEM_BUCKET_S[SBT] was set or TIM_MEM_BUCKET_S[LOCK] was nonzero. */
#else /* Word 0 - Little Endian */
        uint64_t bkt_skip              : 64; /**< [ 63:  0](R/W1C/H) Interrupt bit per ring. Each bit corresponds to rings 255:0 respectively.
                                                                 If set, at least one bucket was skipped by hardware, when a ring has expired.
                                                                 Hardware sets this when TIM attempted traversal but the bucket's
                                                                 TIM_MEM_BUCKET_S[SBT] was set or TIM_MEM_BUCKET_S[LOCK] was nonzero. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tim_af_bkt_skip_intx_s cn; */
};
typedef union cavm_tim_af_bkt_skip_intx cavm_tim_af_bkt_skip_intx_t;

static inline uint64_t CAVM_TIM_AF_BKT_SKIP_INTX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TIM_AF_BKT_SKIP_INTX(uint64_t a)
{
    if (a<=3)
        return 0x840090010000ll + 0x20ll * ((a) & 0x3);
    __cavm_csr_fatal("TIM_AF_BKT_SKIP_INTX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TIM_AF_BKT_SKIP_INTX(a) cavm_tim_af_bkt_skip_intx_t
#define bustype_CAVM_TIM_AF_BKT_SKIP_INTX(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_TIM_AF_BKT_SKIP_INTX(a) "TIM_AF_BKT_SKIP_INTX"
#define device_bar_CAVM_TIM_AF_BKT_SKIP_INTX(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_TIM_AF_BKT_SKIP_INTX(a) (a)
#define arguments_CAVM_TIM_AF_BKT_SKIP_INTX(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) tim_af_bkt_skip_int_ena_w1c#
 *
 * TIM AF Bucket Skip Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_tim_af_bkt_skip_int_ena_w1cx
{
    uint64_t u;
    struct cavm_tim_af_bkt_skip_int_ena_w1cx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t bkt_skip              : 64; /**< [ 63:  0](R/W1C/H) Reads or clears enable for TIM_AF_BKT_SKIP_INT(0..3)[BKT_SKIP]. */
#else /* Word 0 - Little Endian */
        uint64_t bkt_skip              : 64; /**< [ 63:  0](R/W1C/H) Reads or clears enable for TIM_AF_BKT_SKIP_INT(0..3)[BKT_SKIP]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tim_af_bkt_skip_int_ena_w1cx_s cn; */
};
typedef union cavm_tim_af_bkt_skip_int_ena_w1cx cavm_tim_af_bkt_skip_int_ena_w1cx_t;

static inline uint64_t CAVM_TIM_AF_BKT_SKIP_INT_ENA_W1CX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TIM_AF_BKT_SKIP_INT_ENA_W1CX(uint64_t a)
{
    if (a<=3)
        return 0x840090010018ll + 0x20ll * ((a) & 0x3);
    __cavm_csr_fatal("TIM_AF_BKT_SKIP_INT_ENA_W1CX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TIM_AF_BKT_SKIP_INT_ENA_W1CX(a) cavm_tim_af_bkt_skip_int_ena_w1cx_t
#define bustype_CAVM_TIM_AF_BKT_SKIP_INT_ENA_W1CX(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_TIM_AF_BKT_SKIP_INT_ENA_W1CX(a) "TIM_AF_BKT_SKIP_INT_ENA_W1CX"
#define device_bar_CAVM_TIM_AF_BKT_SKIP_INT_ENA_W1CX(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_TIM_AF_BKT_SKIP_INT_ENA_W1CX(a) (a)
#define arguments_CAVM_TIM_AF_BKT_SKIP_INT_ENA_W1CX(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) tim_af_bkt_skip_int_ena_w1s#
 *
 * TIM AF Bucket Skip Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_tim_af_bkt_skip_int_ena_w1sx
{
    uint64_t u;
    struct cavm_tim_af_bkt_skip_int_ena_w1sx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t bkt_skip              : 64; /**< [ 63:  0](R/W1S/H) Reads or sets enable for TIM_AF_BKT_SKIP_INT(0..3)[BKT_SKIP]. */
#else /* Word 0 - Little Endian */
        uint64_t bkt_skip              : 64; /**< [ 63:  0](R/W1S/H) Reads or sets enable for TIM_AF_BKT_SKIP_INT(0..3)[BKT_SKIP]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tim_af_bkt_skip_int_ena_w1sx_s cn; */
};
typedef union cavm_tim_af_bkt_skip_int_ena_w1sx cavm_tim_af_bkt_skip_int_ena_w1sx_t;

static inline uint64_t CAVM_TIM_AF_BKT_SKIP_INT_ENA_W1SX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TIM_AF_BKT_SKIP_INT_ENA_W1SX(uint64_t a)
{
    if (a<=3)
        return 0x840090010010ll + 0x20ll * ((a) & 0x3);
    __cavm_csr_fatal("TIM_AF_BKT_SKIP_INT_ENA_W1SX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TIM_AF_BKT_SKIP_INT_ENA_W1SX(a) cavm_tim_af_bkt_skip_int_ena_w1sx_t
#define bustype_CAVM_TIM_AF_BKT_SKIP_INT_ENA_W1SX(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_TIM_AF_BKT_SKIP_INT_ENA_W1SX(a) "TIM_AF_BKT_SKIP_INT_ENA_W1SX"
#define device_bar_CAVM_TIM_AF_BKT_SKIP_INT_ENA_W1SX(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_TIM_AF_BKT_SKIP_INT_ENA_W1SX(a) (a)
#define arguments_CAVM_TIM_AF_BKT_SKIP_INT_ENA_W1SX(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) tim_af_bkt_skip_int_w1s#
 *
 * TIM AF Bucket Skip Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_tim_af_bkt_skip_int_w1sx
{
    uint64_t u;
    struct cavm_tim_af_bkt_skip_int_w1sx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t bkt_skip              : 64; /**< [ 63:  0](R/W1S/H) Reads or sets TIM_AF_BKT_SKIP_INT(0..3)[BKT_SKIP]. */
#else /* Word 0 - Little Endian */
        uint64_t bkt_skip              : 64; /**< [ 63:  0](R/W1S/H) Reads or sets TIM_AF_BKT_SKIP_INT(0..3)[BKT_SKIP]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tim_af_bkt_skip_int_w1sx_s cn; */
};
typedef union cavm_tim_af_bkt_skip_int_w1sx cavm_tim_af_bkt_skip_int_w1sx_t;

static inline uint64_t CAVM_TIM_AF_BKT_SKIP_INT_W1SX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TIM_AF_BKT_SKIP_INT_W1SX(uint64_t a)
{
    if (a<=3)
        return 0x840090010008ll + 0x20ll * ((a) & 0x3);
    __cavm_csr_fatal("TIM_AF_BKT_SKIP_INT_W1SX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TIM_AF_BKT_SKIP_INT_W1SX(a) cavm_tim_af_bkt_skip_int_w1sx_t
#define bustype_CAVM_TIM_AF_BKT_SKIP_INT_W1SX(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_TIM_AF_BKT_SKIP_INT_W1SX(a) "TIM_AF_BKT_SKIP_INT_W1SX"
#define device_bar_CAVM_TIM_AF_BKT_SKIP_INT_W1SX(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_TIM_AF_BKT_SKIP_INT_W1SX(a) (a)
#define arguments_CAVM_TIM_AF_BKT_SKIP_INT_W1SX(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) tim_af_blk_rst
 *
 * TIM AF Block Reset Registers
 */
union cavm_tim_af_blk_rst
{
    uint64_t u;
    struct cavm_tim_af_blk_rst_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t busy                  : 1;  /**< [ 63: 63](RO/H) When one, the block is busy completing reset. No access except the reading of
                                                                 this bit should occur to the block until this is clear. */
        uint64_t reserved_1_62         : 62;
        uint64_t rst                   : 1;  /**< [  0:  0](WO/H) Write one to reset the block, except for privileged AF registers in PF BAR0
                                                                 (block_PRIV_*). Software must ensure that all block activity is quiesced before
                                                                 writing 1. */
#else /* Word 0 - Little Endian */
        uint64_t rst                   : 1;  /**< [  0:  0](WO/H) Write one to reset the block, except for privileged AF registers in PF BAR0
                                                                 (block_PRIV_*). Software must ensure that all block activity is quiesced before
                                                                 writing 1. */
        uint64_t reserved_1_62         : 62;
        uint64_t busy                  : 1;  /**< [ 63: 63](RO/H) When one, the block is busy completing reset. No access except the reading of
                                                                 this bit should occur to the block until this is clear. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tim_af_blk_rst_s cn; */
};
typedef union cavm_tim_af_blk_rst cavm_tim_af_blk_rst_t;

#define CAVM_TIM_AF_BLK_RST CAVM_TIM_AF_BLK_RST_FUNC()
static inline uint64_t CAVM_TIM_AF_BLK_RST_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TIM_AF_BLK_RST_FUNC(void)
{
    return 0x840090000010ll;
}

#define typedef_CAVM_TIM_AF_BLK_RST cavm_tim_af_blk_rst_t
#define bustype_CAVM_TIM_AF_BLK_RST CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_TIM_AF_BLK_RST "TIM_AF_BLK_RST"
#define device_bar_CAVM_TIM_AF_BLK_RST 0x0 /* RVU_BAR0 */
#define busnum_CAVM_TIM_AF_BLK_RST 0
#define arguments_CAVM_TIM_AF_BLK_RST -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) tim_af_capture_bts
 *
 * TIM AF CAPTURE BTS Timer Capture Register
 */
union cavm_tim_af_capture_bts
{
    uint64_t u;
    struct cavm_tim_af_capture_bts_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t capture_time          : 64; /**< [ 63:  0](RO/H) When TIM_AF_CAPTURE_TIMERS[CAPTURE_TIMERS] is cleared this register
                                                                 contains the TIM_AF_FR_RN_BTS timer free running value.
                                                                 When TIM_AF_CAPTURE_TIMERS[CAPTURE_TIMERS] is set this register
                                                                 contains the TIM_AF_FR_RN_BTS timer captured value. */
#else /* Word 0 - Little Endian */
        uint64_t capture_time          : 64; /**< [ 63:  0](RO/H) When TIM_AF_CAPTURE_TIMERS[CAPTURE_TIMERS] is cleared this register
                                                                 contains the TIM_AF_FR_RN_BTS timer free running value.
                                                                 When TIM_AF_CAPTURE_TIMERS[CAPTURE_TIMERS] is set this register
                                                                 contains the TIM_AF_FR_RN_BTS timer captured value. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tim_af_capture_bts_s cn; */
};
typedef union cavm_tim_af_capture_bts cavm_tim_af_capture_bts_t;

#define CAVM_TIM_AF_CAPTURE_BTS CAVM_TIM_AF_CAPTURE_BTS_FUNC()
static inline uint64_t CAVM_TIM_AF_CAPTURE_BTS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TIM_AF_CAPTURE_BTS_FUNC(void)
{
    return 0x840090000220ll;
}

#define typedef_CAVM_TIM_AF_CAPTURE_BTS cavm_tim_af_capture_bts_t
#define bustype_CAVM_TIM_AF_CAPTURE_BTS CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_TIM_AF_CAPTURE_BTS "TIM_AF_CAPTURE_BTS"
#define device_bar_CAVM_TIM_AF_CAPTURE_BTS 0x0 /* RVU_BAR0 */
#define busnum_CAVM_TIM_AF_CAPTURE_BTS 0
#define arguments_CAVM_TIM_AF_CAPTURE_BTS -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) tim_af_capture_ext_gti
 *
 * TIM AF CAPTURE EXT_GTI External GTI timer Capture Register
 */
union cavm_tim_af_capture_ext_gti
{
    uint64_t u;
    struct cavm_tim_af_capture_ext_gti_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t capture_time          : 64; /**< [ 63:  0](RO/H) When TIM_AF_CAPTURE_TIMERS[CAPTURE_TIMERS] is cleared this register
                                                                 contains the external GTI timer free running value.
                                                                 When TIM_AF_CAPTURE_TIMERS[CAPTURE_TIMERS] is set this register
                                                                 contains the external GTI timer captured value. */
#else /* Word 0 - Little Endian */
        uint64_t capture_time          : 64; /**< [ 63:  0](RO/H) When TIM_AF_CAPTURE_TIMERS[CAPTURE_TIMERS] is cleared this register
                                                                 contains the external GTI timer free running value.
                                                                 When TIM_AF_CAPTURE_TIMERS[CAPTURE_TIMERS] is set this register
                                                                 contains the external GTI timer captured value. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tim_af_capture_ext_gti_s cn; */
};
typedef union cavm_tim_af_capture_ext_gti cavm_tim_af_capture_ext_gti_t;

#define CAVM_TIM_AF_CAPTURE_EXT_GTI CAVM_TIM_AF_CAPTURE_EXT_GTI_FUNC()
static inline uint64_t CAVM_TIM_AF_CAPTURE_EXT_GTI_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TIM_AF_CAPTURE_EXT_GTI_FUNC(void)
{
    return 0x840090000240ll;
}

#define typedef_CAVM_TIM_AF_CAPTURE_EXT_GTI cavm_tim_af_capture_ext_gti_t
#define bustype_CAVM_TIM_AF_CAPTURE_EXT_GTI CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_TIM_AF_CAPTURE_EXT_GTI "TIM_AF_CAPTURE_EXT_GTI"
#define device_bar_CAVM_TIM_AF_CAPTURE_EXT_GTI 0x0 /* RVU_BAR0 */
#define busnum_CAVM_TIM_AF_CAPTURE_EXT_GTI 0
#define arguments_CAVM_TIM_AF_CAPTURE_EXT_GTI -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) tim_af_capture_gpios
 *
 * TIM AF CAPTURE GPIOS Timer Capture Register
 */
union cavm_tim_af_capture_gpios
{
    uint64_t u;
    struct cavm_tim_af_capture_gpios_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t capture_time          : 64; /**< [ 63:  0](RO/H) When TIM_AF_CAPTURE_TIMERS[CAPTURE_TIMERS] is cleared this register
                                                                 contains the TIM_AF_FR_RN_GPIOS timer free running value.
                                                                 When TIM_AF_CAPTURE_TIMERS[CAPTURE_TIMERS] is set this register
                                                                 contains the TIM_AF_FR_RN_GPIOS timer captured value. */
#else /* Word 0 - Little Endian */
        uint64_t capture_time          : 64; /**< [ 63:  0](RO/H) When TIM_AF_CAPTURE_TIMERS[CAPTURE_TIMERS] is cleared this register
                                                                 contains the TIM_AF_FR_RN_GPIOS timer free running value.
                                                                 When TIM_AF_CAPTURE_TIMERS[CAPTURE_TIMERS] is set this register
                                                                 contains the TIM_AF_FR_RN_GPIOS timer captured value. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tim_af_capture_gpios_s cn; */
};
typedef union cavm_tim_af_capture_gpios cavm_tim_af_capture_gpios_t;

#define CAVM_TIM_AF_CAPTURE_GPIOS CAVM_TIM_AF_CAPTURE_GPIOS_FUNC()
static inline uint64_t CAVM_TIM_AF_CAPTURE_GPIOS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TIM_AF_CAPTURE_GPIOS_FUNC(void)
{
    return 0x8400900001e0ll;
}

#define typedef_CAVM_TIM_AF_CAPTURE_GPIOS cavm_tim_af_capture_gpios_t
#define bustype_CAVM_TIM_AF_CAPTURE_GPIOS CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_TIM_AF_CAPTURE_GPIOS "TIM_AF_CAPTURE_GPIOS"
#define device_bar_CAVM_TIM_AF_CAPTURE_GPIOS 0x0 /* RVU_BAR0 */
#define busnum_CAVM_TIM_AF_CAPTURE_GPIOS 0
#define arguments_CAVM_TIM_AF_CAPTURE_GPIOS -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) tim_af_capture_gti
 *
 * TIM AF CAPTURE GTI Timer Capture Register
 */
union cavm_tim_af_capture_gti
{
    uint64_t u;
    struct cavm_tim_af_capture_gti_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t capture_time          : 64; /**< [ 63:  0](RO/H) When TIM_AF_CAPTURE_TIMERS[CAPTURE_TIMERS] is cleared this register
                                                                 contains the TIM_AF_FR_RN_GTI timer free running value.
                                                                 When TIM_AF_CAPTURE_TIMERS[CAPTURE_TIMERS] is set this register
                                                                 contains the TIM_AF_FR_RN_GTI timer captured value. */
#else /* Word 0 - Little Endian */
        uint64_t capture_time          : 64; /**< [ 63:  0](RO/H) When TIM_AF_CAPTURE_TIMERS[CAPTURE_TIMERS] is cleared this register
                                                                 contains the TIM_AF_FR_RN_GTI timer free running value.
                                                                 When TIM_AF_CAPTURE_TIMERS[CAPTURE_TIMERS] is set this register
                                                                 contains the TIM_AF_FR_RN_GTI timer captured value. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tim_af_capture_gti_s cn10; */
    /* struct cavm_tim_af_capture_gti_s cn10ka_p1; */
    struct cavm_tim_af_capture_gti_cn10ka_p2
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t capture_time          : 64; /**< [ 63:  0](RO/H) When TIM_AF_CAPTURE_TIMERS[CAPTURE_TIMERS] is cleared this register
                                                                 contains the external GTI timer free running value.
                                                                 When TIM_AF_CAPTURE_TIMERS[CAPTURE_TIMERS] is set this register
                                                                 contains the TIM_AF_FR_RN_GTI timer captured value.
                                                                 Note that TIM_AF_FR_RN_GTI uses a one cycle delayed value of
                                                                 the external GTI counter and adds TIM_AF_OFFSET_GTI.
                                                                 For example, when SCLK is 1 GHz, the captured value will typically
                                                                 be TIM_AF_CATPURE_EXT_GTI + TIM_AF_OFFSET_GTI[OFFSET_TIME] - 1. */
#else /* Word 0 - Little Endian */
        uint64_t capture_time          : 64; /**< [ 63:  0](RO/H) When TIM_AF_CAPTURE_TIMERS[CAPTURE_TIMERS] is cleared this register
                                                                 contains the external GTI timer free running value.
                                                                 When TIM_AF_CAPTURE_TIMERS[CAPTURE_TIMERS] is set this register
                                                                 contains the TIM_AF_FR_RN_GTI timer captured value.
                                                                 Note that TIM_AF_FR_RN_GTI uses a one cycle delayed value of
                                                                 the external GTI counter and adds TIM_AF_OFFSET_GTI.
                                                                 For example, when SCLK is 1 GHz, the captured value will typically
                                                                 be TIM_AF_CATPURE_EXT_GTI + TIM_AF_OFFSET_GTI[OFFSET_TIME] - 1. */
#endif /* Word 0 - End */
    } cn10ka_p2;
    /* struct cavm_tim_af_capture_gti_cn10ka_p2 cn10kb; */
    /* struct cavm_tim_af_capture_gti_s cnf10ka_p1_0; */
    struct cavm_tim_af_capture_gti_cnf10ka_p1_1
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t capture_time          : 64; /**< [ 63:  0](RO/H) When TIM_AF_CAPTURE_TIMERS[CAPTURE_TIMERS] is cleared this register
                                                                 contains the external GTI timer free running value.
                                                                 When TIM_AF_CAPTURE_TIMERS[CAPTURE_TIMERS] is set this register
                                                                 contains the TIM_AF_FR_RN_GTI timer captured value.
                                                                 Note that TIM_AF_FR_RN_GTI uses a one cycle delayed value of
                                                                 the external GTI counter.
                                                                 For example, when SCLK is 1 GHz, the captured value will typically
                                                                 be TIM_AF_CATPURE_EXT_GTI - 1. */
#else /* Word 0 - Little Endian */
        uint64_t capture_time          : 64; /**< [ 63:  0](RO/H) When TIM_AF_CAPTURE_TIMERS[CAPTURE_TIMERS] is cleared this register
                                                                 contains the external GTI timer free running value.
                                                                 When TIM_AF_CAPTURE_TIMERS[CAPTURE_TIMERS] is set this register
                                                                 contains the TIM_AF_FR_RN_GTI timer captured value.
                                                                 Note that TIM_AF_FR_RN_GTI uses a one cycle delayed value of
                                                                 the external GTI counter.
                                                                 For example, when SCLK is 1 GHz, the captured value will typically
                                                                 be TIM_AF_CATPURE_EXT_GTI - 1. */
#endif /* Word 0 - End */
    } cnf10ka_p1_1;
    /* struct cavm_tim_af_capture_gti_s cnf10kb; */
};
typedef union cavm_tim_af_capture_gti cavm_tim_af_capture_gti_t;

#define CAVM_TIM_AF_CAPTURE_GTI CAVM_TIM_AF_CAPTURE_GTI_FUNC()
static inline uint64_t CAVM_TIM_AF_CAPTURE_GTI_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TIM_AF_CAPTURE_GTI_FUNC(void)
{
    return 0x8400900001f0ll;
}

#define typedef_CAVM_TIM_AF_CAPTURE_GTI cavm_tim_af_capture_gti_t
#define bustype_CAVM_TIM_AF_CAPTURE_GTI CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_TIM_AF_CAPTURE_GTI "TIM_AF_CAPTURE_GTI"
#define device_bar_CAVM_TIM_AF_CAPTURE_GTI 0x0 /* RVU_BAR0 */
#define busnum_CAVM_TIM_AF_CAPTURE_GTI 0
#define arguments_CAVM_TIM_AF_CAPTURE_GTI -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) tim_af_capture_ptp
 *
 * TIM AF CAPTURE PTP Timer Capture Register
 */
union cavm_tim_af_capture_ptp
{
    uint64_t u;
    struct cavm_tim_af_capture_ptp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t capture_time          : 64; /**< [ 63:  0](RO/H) When TIM_AF_CAPTURE_TIMERS[CAPTURE_TIMERS] is cleared this register
                                                                 contains the TIM_AF_FR_RN_PTP timer free running value.
                                                                 When TIM_AF_CAPTURE_TIMERS[CAPTURE_TIMERS] is set this register
                                                                 contains the TIM_AF_FR_RN_PTP timer captured value. */
#else /* Word 0 - Little Endian */
        uint64_t capture_time          : 64; /**< [ 63:  0](RO/H) When TIM_AF_CAPTURE_TIMERS[CAPTURE_TIMERS] is cleared this register
                                                                 contains the TIM_AF_FR_RN_PTP timer free running value.
                                                                 When TIM_AF_CAPTURE_TIMERS[CAPTURE_TIMERS] is set this register
                                                                 contains the TIM_AF_FR_RN_PTP timer captured value. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tim_af_capture_ptp_s cn; */
};
typedef union cavm_tim_af_capture_ptp cavm_tim_af_capture_ptp_t;

#define CAVM_TIM_AF_CAPTURE_PTP CAVM_TIM_AF_CAPTURE_PTP_FUNC()
static inline uint64_t CAVM_TIM_AF_CAPTURE_PTP_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TIM_AF_CAPTURE_PTP_FUNC(void)
{
    return 0x840090000200ll;
}

#define typedef_CAVM_TIM_AF_CAPTURE_PTP cavm_tim_af_capture_ptp_t
#define bustype_CAVM_TIM_AF_CAPTURE_PTP CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_TIM_AF_CAPTURE_PTP "TIM_AF_CAPTURE_PTP"
#define device_bar_CAVM_TIM_AF_CAPTURE_PTP 0x0 /* RVU_BAR0 */
#define busnum_CAVM_TIM_AF_CAPTURE_PTP 0
#define arguments_CAVM_TIM_AF_CAPTURE_PTP -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) tim_af_capture_tenns
 *
 * TIM AF CAPTURE TENNS Timer Capture Register
 */
union cavm_tim_af_capture_tenns
{
    uint64_t u;
    struct cavm_tim_af_capture_tenns_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t capture_time          : 64; /**< [ 63:  0](RO/H) When TIM_AF_CAPTURE_TIMERS[CAPTURE_TIMERS] is cleared this register
                                                                 contains the TIM_AF_FR_RN_TENNS timer free running value.
                                                                 When TIM_AF_CAPTURE_TIMERS[CAPTURE_TIMERS] is set this register
                                                                 contains the TIM_AF_FR_RN_TENNS timer captured value. */
#else /* Word 0 - Little Endian */
        uint64_t capture_time          : 64; /**< [ 63:  0](RO/H) When TIM_AF_CAPTURE_TIMERS[CAPTURE_TIMERS] is cleared this register
                                                                 contains the TIM_AF_FR_RN_TENNS timer free running value.
                                                                 When TIM_AF_CAPTURE_TIMERS[CAPTURE_TIMERS] is set this register
                                                                 contains the TIM_AF_FR_RN_TENNS timer captured value. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tim_af_capture_tenns_s cn; */
};
typedef union cavm_tim_af_capture_tenns cavm_tim_af_capture_tenns_t;

#define CAVM_TIM_AF_CAPTURE_TENNS CAVM_TIM_AF_CAPTURE_TENNS_FUNC()
static inline uint64_t CAVM_TIM_AF_CAPTURE_TENNS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TIM_AF_CAPTURE_TENNS_FUNC(void)
{
    return 0x8400900001d0ll;
}

#define typedef_CAVM_TIM_AF_CAPTURE_TENNS cavm_tim_af_capture_tenns_t
#define bustype_CAVM_TIM_AF_CAPTURE_TENNS CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_TIM_AF_CAPTURE_TENNS "TIM_AF_CAPTURE_TENNS"
#define device_bar_CAVM_TIM_AF_CAPTURE_TENNS 0x0 /* RVU_BAR0 */
#define busnum_CAVM_TIM_AF_CAPTURE_TENNS 0
#define arguments_CAVM_TIM_AF_CAPTURE_TENNS -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) tim_af_capture_timers
 *
 * TIM AF CAPTURE_TIMERS capture or lock all (External & internal) timers Register
 */
union cavm_tim_af_capture_timers
{
    uint64_t u;
    struct cavm_tim_af_capture_timers_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t ext_arm               : 1;  /**< [  1:  1](R/W/H) When set, arms hardware so that the next rising edge on the
                                                                 GPIO_PIN_SEL_E::PTP_TSTMP input, will cause [CAPTURE_TIMERS] to be set and
                                                                 [EXT_ARM] to be cleared. */
        uint64_t capture_timers        : 1;  /**< [  0:  0](R/W/H) 0 = TIM_AF_CAPTURE_* contain the free running values of the corresponding TIM_AF_FR_RN_* times.
                                                                 1 = TIM_AF_CAPTURE_* contain the captured value of the corresponding
                                                                 TIM_AF_FR_RN_* times, captured when this bit last transitioned from 0 to 1.

                                                                 If [EXT_ARM] is set an external input may also set this bit, see [EXT_ARM]. */
#else /* Word 0 - Little Endian */
        uint64_t capture_timers        : 1;  /**< [  0:  0](R/W/H) 0 = TIM_AF_CAPTURE_* contain the free running values of the corresponding TIM_AF_FR_RN_* times.
                                                                 1 = TIM_AF_CAPTURE_* contain the captured value of the corresponding
                                                                 TIM_AF_FR_RN_* times, captured when this bit last transitioned from 0 to 1.

                                                                 If [EXT_ARM] is set an external input may also set this bit, see [EXT_ARM]. */
        uint64_t ext_arm               : 1;  /**< [  1:  1](R/W/H) When set, arms hardware so that the next rising edge on the
                                                                 GPIO_PIN_SEL_E::PTP_TSTMP input, will cause [CAPTURE_TIMERS] to be set and
                                                                 [EXT_ARM] to be cleared. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tim_af_capture_timers_s cn; */
};
typedef union cavm_tim_af_capture_timers cavm_tim_af_capture_timers_t;

#define CAVM_TIM_AF_CAPTURE_TIMERS CAVM_TIM_AF_CAPTURE_TIMERS_FUNC()
static inline uint64_t CAVM_TIM_AF_CAPTURE_TIMERS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TIM_AF_CAPTURE_TIMERS_FUNC(void)
{
    return 0x840090000250ll;
}

#define typedef_CAVM_TIM_AF_CAPTURE_TIMERS cavm_tim_af_capture_timers_t
#define bustype_CAVM_TIM_AF_CAPTURE_TIMERS CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_TIM_AF_CAPTURE_TIMERS "TIM_AF_CAPTURE_TIMERS"
#define device_bar_CAVM_TIM_AF_CAPTURE_TIMERS 0x0 /* RVU_BAR0 */
#define busnum_CAVM_TIM_AF_CAPTURE_TIMERS 0
#define arguments_CAVM_TIM_AF_CAPTURE_TIMERS -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) tim_af_const
 *
 * TIM Const Register
 */
union cavm_tim_af_const
{
    uint64_t u;
    struct cavm_tim_af_const_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t sta_n                 : 8;  /**< [ 23: 16](RO) Number of traverse engines. */
        uint64_t ring_n                : 16; /**< [ 15:  0](RO) Number of rings. */
#else /* Word 0 - Little Endian */
        uint64_t ring_n                : 16; /**< [ 15:  0](RO) Number of rings. */
        uint64_t sta_n                 : 8;  /**< [ 23: 16](RO) Number of traverse engines. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tim_af_const_s cn; */
};
typedef union cavm_tim_af_const cavm_tim_af_const_t;

#define CAVM_TIM_AF_CONST CAVM_TIM_AF_CONST_FUNC()
static inline uint64_t CAVM_TIM_AF_CONST_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TIM_AF_CONST_FUNC(void)
{
    return 0x840090000090ll;
}

#define typedef_CAVM_TIM_AF_CONST cavm_tim_af_const_t
#define bustype_CAVM_TIM_AF_CONST CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_TIM_AF_CONST "TIM_AF_CONST"
#define device_bar_CAVM_TIM_AF_CONST 0x0 /* RVU_BAR0 */
#define busnum_CAVM_TIM_AF_CONST 0
#define arguments_CAVM_TIM_AF_CONST -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) tim_af_dbg
 *
 * TIM AF Debug Register
 */
union cavm_tim_af_dbg
{
    uint64_t u;
    struct cavm_tim_af_dbg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t wqe_fifo_alloc_level  : 10; /**< [ 63: 54](RO/H) SSO WQE FIFO allocation level. */
        uint64_t reserved_47_53        : 7;
        uint64_t npa_fifo_level        : 5;  /**< [ 46: 42](RO/H) NPA FIFO level. */
        uint64_t reserved_30_41        : 12;
        uint64_t wqe_fifo_level        : 10; /**< [ 29: 20](RO/H) SSO WQE FIFO level. */
        uint64_t reserved_0_19         : 20;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_19         : 20;
        uint64_t wqe_fifo_level        : 10; /**< [ 29: 20](RO/H) SSO WQE FIFO level. */
        uint64_t reserved_30_41        : 12;
        uint64_t npa_fifo_level        : 5;  /**< [ 46: 42](RO/H) NPA FIFO level. */
        uint64_t reserved_47_53        : 7;
        uint64_t wqe_fifo_alloc_level  : 10; /**< [ 63: 54](RO/H) SSO WQE FIFO allocation level. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tim_af_dbg_s cn; */
};
typedef union cavm_tim_af_dbg cavm_tim_af_dbg_t;

#define CAVM_TIM_AF_DBG CAVM_TIM_AF_DBG_FUNC()
static inline uint64_t CAVM_TIM_AF_DBG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TIM_AF_DBG_FUNC(void)
{
    return 0x840090030010ll;
}

#define typedef_CAVM_TIM_AF_DBG cavm_tim_af_dbg_t
#define bustype_CAVM_TIM_AF_DBG CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_TIM_AF_DBG "TIM_AF_DBG"
#define device_bar_CAVM_TIM_AF_DBG 0x0 /* RVU_BAR0 */
#define busnum_CAVM_TIM_AF_DBG 0
#define arguments_CAVM_TIM_AF_DBG -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) tim_af_eng#_active
 *
 * TIM AF Engine Active Registers
 */
union cavm_tim_af_engx_active
{
    uint64_t u;
    struct cavm_tim_af_engx_active_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t act                   : 1;  /**< [ 63: 63](RO/H) Engine active. For diagnostic use. */
        uint64_t reserved_45_62        : 18;
        uint64_t state                 : 5;  /**< [ 44: 40](RO/H) Engine state. For diagnostic use. */
        uint64_t bucket_id             : 20; /**< [ 39: 20](RO/H) Current bucket ID. For diagnostic use. */
        uint64_t reserved_8_19         : 12;
        uint64_t ring_id               : 8;  /**< [  7:  0](RO/H) Current ring ID. For diagnostic use. */
#else /* Word 0 - Little Endian */
        uint64_t ring_id               : 8;  /**< [  7:  0](RO/H) Current ring ID. For diagnostic use. */
        uint64_t reserved_8_19         : 12;
        uint64_t bucket_id             : 20; /**< [ 39: 20](RO/H) Current bucket ID. For diagnostic use. */
        uint64_t state                 : 5;  /**< [ 44: 40](RO/H) Engine state. For diagnostic use. */
        uint64_t reserved_45_62        : 18;
        uint64_t act                   : 1;  /**< [ 63: 63](RO/H) Engine active. For diagnostic use. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tim_af_engx_active_s cn; */
};
typedef union cavm_tim_af_engx_active cavm_tim_af_engx_active_t;

static inline uint64_t CAVM_TIM_AF_ENGX_ACTIVE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TIM_AF_ENGX_ACTIVE(uint64_t a)
{
    if (a<=15)
        return 0x840090038000ll + 8ll * ((a) & 0xf);
    __cavm_csr_fatal("TIM_AF_ENGX_ACTIVE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TIM_AF_ENGX_ACTIVE(a) cavm_tim_af_engx_active_t
#define bustype_CAVM_TIM_AF_ENGX_ACTIVE(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_TIM_AF_ENGX_ACTIVE(a) "TIM_AF_ENGX_ACTIVE"
#define device_bar_CAVM_TIM_AF_ENGX_ACTIVE(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_TIM_AF_ENGX_ACTIVE(a) (a)
#define arguments_CAVM_TIM_AF_ENGX_ACTIVE(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) tim_af_fr_rn_bts
 *
 * TIM Free Running BTS Count Register
 */
union cavm_tim_af_fr_rn_bts
{
    uint64_t u;
    struct cavm_tim_af_fr_rn_bts_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Count of BTS cycles. This register is only writable when TIM_AF_REG_FLAGS[ENA_TIM] = 0.

                                                                 Software must read this register after writing it to ensure that the previous
                                                                 write completed, before enabling any ring associated with this timer. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Count of BTS cycles. This register is only writable when TIM_AF_REG_FLAGS[ENA_TIM] = 0.

                                                                 Software must read this register after writing it to ensure that the previous
                                                                 write completed, before enabling any ring associated with this timer. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tim_af_fr_rn_bts_s cn; */
};
typedef union cavm_tim_af_fr_rn_bts cavm_tim_af_fr_rn_bts_t;

#define CAVM_TIM_AF_FR_RN_BTS CAVM_TIM_AF_FR_RN_BTS_FUNC()
static inline uint64_t CAVM_TIM_AF_FR_RN_BTS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TIM_AF_FR_RN_BTS_FUNC(void)
{
    return 0x840090000150ll;
}

#define typedef_CAVM_TIM_AF_FR_RN_BTS cavm_tim_af_fr_rn_bts_t
#define bustype_CAVM_TIM_AF_FR_RN_BTS CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_TIM_AF_FR_RN_BTS "TIM_AF_FR_RN_BTS"
#define device_bar_CAVM_TIM_AF_FR_RN_BTS 0x0 /* RVU_BAR0 */
#define busnum_CAVM_TIM_AF_FR_RN_BTS 0
#define arguments_CAVM_TIM_AF_FR_RN_BTS -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) tim_af_fr_rn_cycles
 *
 * TIM AF Free Running Cycle Count Register
 */
union cavm_tim_af_fr_rn_cycles
{
    uint64_t u;
    struct cavm_tim_af_fr_rn_cycles_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Count of system coprocessor-clock cycles. This register is only writable when
                                                                 TIM_AF_REG_FLAGS[ENA_TIM] = 0. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Count of system coprocessor-clock cycles. This register is only writable when
                                                                 TIM_AF_REG_FLAGS[ENA_TIM] = 0. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tim_af_fr_rn_cycles_s cn; */
};
typedef union cavm_tim_af_fr_rn_cycles cavm_tim_af_fr_rn_cycles_t;

#define CAVM_TIM_AF_FR_RN_CYCLES CAVM_TIM_AF_FR_RN_CYCLES_FUNC()
static inline uint64_t CAVM_TIM_AF_FR_RN_CYCLES_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TIM_AF_FR_RN_CYCLES_FUNC(void)
{
    return 0x840090000030ll;
}

#define typedef_CAVM_TIM_AF_FR_RN_CYCLES cavm_tim_af_fr_rn_cycles_t
#define bustype_CAVM_TIM_AF_FR_RN_CYCLES CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_TIM_AF_FR_RN_CYCLES "TIM_AF_FR_RN_CYCLES"
#define device_bar_CAVM_TIM_AF_FR_RN_CYCLES 0x0 /* RVU_BAR0 */
#define busnum_CAVM_TIM_AF_FR_RN_CYCLES 0
#define arguments_CAVM_TIM_AF_FR_RN_CYCLES -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) tim_af_fr_rn_gpios
 *
 * TIM AF Free Running GPIO Clock Count Register
 */
union cavm_tim_af_fr_rn_gpios
{
    uint64_t u;
    struct cavm_tim_af_fr_rn_gpios_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Count of GPIO cycles. This register is only writable when TIM_AF_REG_FLAGS[ENA_TIM] = 0.
                                                                 GPIO edge selection must be program (value other than 0x0) before writing this register.
                                                                 Software must read this register after writing it to ensure that the previous
                                                                 write completed, before enabling any ring associated with this timer. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Count of GPIO cycles. This register is only writable when TIM_AF_REG_FLAGS[ENA_TIM] = 0.
                                                                 GPIO edge selection must be program (value other than 0x0) before writing this register.
                                                                 Software must read this register after writing it to ensure that the previous
                                                                 write completed, before enabling any ring associated with this timer. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tim_af_fr_rn_gpios_s cn; */
};
typedef union cavm_tim_af_fr_rn_gpios cavm_tim_af_fr_rn_gpios_t;

#define CAVM_TIM_AF_FR_RN_GPIOS CAVM_TIM_AF_FR_RN_GPIOS_FUNC()
static inline uint64_t CAVM_TIM_AF_FR_RN_GPIOS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TIM_AF_FR_RN_GPIOS_FUNC(void)
{
    return 0x840090000040ll;
}

#define typedef_CAVM_TIM_AF_FR_RN_GPIOS cavm_tim_af_fr_rn_gpios_t
#define bustype_CAVM_TIM_AF_FR_RN_GPIOS CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_TIM_AF_FR_RN_GPIOS "TIM_AF_FR_RN_GPIOS"
#define device_bar_CAVM_TIM_AF_FR_RN_GPIOS 0x0 /* RVU_BAR0 */
#define busnum_CAVM_TIM_AF_FR_RN_GPIOS 0
#define arguments_CAVM_TIM_AF_FR_RN_GPIOS -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) tim_af_fr_rn_gti
 *
 * TIM AF Free Running GTI Clock Count Register
 */
union cavm_tim_af_fr_rn_gti
{
    uint64_t u;
    struct cavm_tim_af_fr_rn_gti_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Count of GTI system timer cycles. This register is only writable when
                                                                 TIM_AF_REG_FLAGS[ENA_TIM] = 0.
                                                                 Software must read this register after writing it to ensure that the previous
                                                                 write completed, before enabling any ring associated with this timer. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Count of GTI system timer cycles. This register is only writable when
                                                                 TIM_AF_REG_FLAGS[ENA_TIM] = 0.
                                                                 Software must read this register after writing it to ensure that the previous
                                                                 write completed, before enabling any ring associated with this timer. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tim_af_fr_rn_gti_s cn; */
};
typedef union cavm_tim_af_fr_rn_gti cavm_tim_af_fr_rn_gti_t;

#define CAVM_TIM_AF_FR_RN_GTI CAVM_TIM_AF_FR_RN_GTI_FUNC()
static inline uint64_t CAVM_TIM_AF_FR_RN_GTI_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TIM_AF_FR_RN_GTI_FUNC(void)
{
    return 0x840090000050ll;
}

#define typedef_CAVM_TIM_AF_FR_RN_GTI cavm_tim_af_fr_rn_gti_t
#define bustype_CAVM_TIM_AF_FR_RN_GTI CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_TIM_AF_FR_RN_GTI "TIM_AF_FR_RN_GTI"
#define device_bar_CAVM_TIM_AF_FR_RN_GTI 0x0 /* RVU_BAR0 */
#define busnum_CAVM_TIM_AF_FR_RN_GTI 0
#define arguments_CAVM_TIM_AF_FR_RN_GTI -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) tim_af_fr_rn_ptp
 *
 * TIM Free Running PTP Count Register
 */
union cavm_tim_af_fr_rn_ptp
{
    uint64_t u;
    struct cavm_tim_af_fr_rn_ptp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](RO/H) The PTP time, from PTP MIO_PTP_CLOCK_HI after adjustment with TIM_AF_OFFSET_PTP. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](RO/H) The PTP time, from PTP MIO_PTP_CLOCK_HI after adjustment with TIM_AF_OFFSET_PTP. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tim_af_fr_rn_ptp_s cn; */
};
typedef union cavm_tim_af_fr_rn_ptp cavm_tim_af_fr_rn_ptp_t;

#define CAVM_TIM_AF_FR_RN_PTP CAVM_TIM_AF_FR_RN_PTP_FUNC()
static inline uint64_t CAVM_TIM_AF_FR_RN_PTP_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TIM_AF_FR_RN_PTP_FUNC(void)
{
    return 0x840090000060ll;
}

#define typedef_CAVM_TIM_AF_FR_RN_PTP cavm_tim_af_fr_rn_ptp_t
#define bustype_CAVM_TIM_AF_FR_RN_PTP CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_TIM_AF_FR_RN_PTP "TIM_AF_FR_RN_PTP"
#define device_bar_CAVM_TIM_AF_FR_RN_PTP 0x0 /* RVU_BAR0 */
#define busnum_CAVM_TIM_AF_FR_RN_PTP 0
#define arguments_CAVM_TIM_AF_FR_RN_PTP -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) tim_af_fr_rn_tenns
 *
 * TIM AF Free Running 10ns Clock Count Register
 */
union cavm_tim_af_fr_rn_tenns
{
    uint64_t u;
    struct cavm_tim_af_fr_rn_tenns_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Count of 10ns clock cycles. This register is only writable when
                                                                 TIM_AF_REG_FLAGS[ENA_TIM] = 0.
                                                                 Software must read this register after writing it to ensure that the previous
                                                                 write completed, before enabling any ring associated with this timer. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Count of 10ns clock cycles. This register is only writable when
                                                                 TIM_AF_REG_FLAGS[ENA_TIM] = 0.
                                                                 Software must read this register after writing it to ensure that the previous
                                                                 write completed, before enabling any ring associated with this timer. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tim_af_fr_rn_tenns_s cn; */
};
typedef union cavm_tim_af_fr_rn_tenns cavm_tim_af_fr_rn_tenns_t;

#define CAVM_TIM_AF_FR_RN_TENNS CAVM_TIM_AF_FR_RN_TENNS_FUNC()
static inline uint64_t CAVM_TIM_AF_FR_RN_TENNS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TIM_AF_FR_RN_TENNS_FUNC(void)
{
    return 0x840090000070ll;
}

#define typedef_CAVM_TIM_AF_FR_RN_TENNS cavm_tim_af_fr_rn_tenns_t
#define bustype_CAVM_TIM_AF_FR_RN_TENNS CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_TIM_AF_FR_RN_TENNS "TIM_AF_FR_RN_TENNS"
#define device_bar_CAVM_TIM_AF_FR_RN_TENNS 0x0 /* RVU_BAR0 */
#define busnum_CAVM_TIM_AF_FR_RN_TENNS 0
#define arguments_CAVM_TIM_AF_FR_RN_TENNS -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) tim_af_lf_rst
 *
 * TIM AF LF Reset Register
 * This register initiates LF resets.
 */
union cavm_tim_af_lf_rst
{
    uint64_t u;
    struct cavm_tim_af_lf_rst_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_13_63        : 51;
        uint64_t exec                  : 1;  /**< [ 12: 12](R/W1S/H) Execute LF software-initiated reset. When software writes a one to set this bit, hardware
                                                                 resets the local function selected by [LF]. Hardware clears this bit when
                                                                 done. */
        uint64_t reserved_8_11         : 4;
        uint64_t lf                    : 8;  /**< [  7:  0](R/W) Local function that is reset when [EXEC] is set. */
#else /* Word 0 - Little Endian */
        uint64_t lf                    : 8;  /**< [  7:  0](R/W) Local function that is reset when [EXEC] is set. */
        uint64_t reserved_8_11         : 4;
        uint64_t exec                  : 1;  /**< [ 12: 12](R/W1S/H) Execute LF software-initiated reset. When software writes a one to set this bit, hardware
                                                                 resets the local function selected by [LF]. Hardware clears this bit when
                                                                 done. */
        uint64_t reserved_13_63        : 51;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tim_af_lf_rst_s cn; */
};
typedef union cavm_tim_af_lf_rst cavm_tim_af_lf_rst_t;

#define CAVM_TIM_AF_LF_RST CAVM_TIM_AF_LF_RST_FUNC()
static inline uint64_t CAVM_TIM_AF_LF_RST_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TIM_AF_LF_RST_FUNC(void)
{
    return 0x840090000020ll;
}

#define typedef_CAVM_TIM_AF_LF_RST cavm_tim_af_lf_rst_t
#define bustype_CAVM_TIM_AF_LF_RST CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_TIM_AF_LF_RST "TIM_AF_LF_RST"
#define device_bar_CAVM_TIM_AF_LF_RST 0x0 /* RVU_BAR0 */
#define busnum_CAVM_TIM_AF_LF_RST 0
#define arguments_CAVM_TIM_AF_LF_RST -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) tim_af_offset_gti
 *
 * TIM AF OFFSET GTI Timer offset Register
 */
union cavm_tim_af_offset_gti
{
    uint64_t u;
    struct cavm_tim_af_offset_gti_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t offset_time           : 64; /**< [ 63:  0](R/W) Offset which will be added to GTI timer coming from GTI block.
                                                                 Typically a negative twos complement number to subtract
                                                                 out internal delays between the GTI and TIM hardware. */
#else /* Word 0 - Little Endian */
        uint64_t offset_time           : 64; /**< [ 63:  0](R/W) Offset which will be added to GTI timer coming from GTI block.
                                                                 Typically a negative twos complement number to subtract
                                                                 out internal delays between the GTI and TIM hardware. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tim_af_offset_gti_s cn; */
};
typedef union cavm_tim_af_offset_gti cavm_tim_af_offset_gti_t;

#define CAVM_TIM_AF_OFFSET_GTI CAVM_TIM_AF_OFFSET_GTI_FUNC()
static inline uint64_t CAVM_TIM_AF_OFFSET_GTI_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TIM_AF_OFFSET_GTI_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN10KA_BX))
        return 0x840090000260ll;
    if (cavm_is_model(OCTEONTX_CN10KB))
        return 0x840090000260ll;
    if (cavm_is_model(OCTEONTX_CNF10KB_BX))
        return 0x840090000260ll;
    __cavm_csr_fatal("TIM_AF_OFFSET_GTI", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TIM_AF_OFFSET_GTI cavm_tim_af_offset_gti_t
#define bustype_CAVM_TIM_AF_OFFSET_GTI CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_TIM_AF_OFFSET_GTI "TIM_AF_OFFSET_GTI"
#define device_bar_CAVM_TIM_AF_OFFSET_GTI 0x0 /* RVU_BAR0 */
#define busnum_CAVM_TIM_AF_OFFSET_GTI 0
#define arguments_CAVM_TIM_AF_OFFSET_GTI -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) tim_af_offset_ptp
 *
 * TIM AF OFFSET PTP Timer offset Register
 */
union cavm_tim_af_offset_ptp
{
    uint64_t u;
    struct cavm_tim_af_offset_ptp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t adjust_time           : 64; /**< [ 63:  0](R/W) Offset which will be added to PTP timer coming from PTP block.
                                                                 Typically a negative twos complement number to subtract
                                                                 out internal delays between the PTP and TIM hardware. */
#else /* Word 0 - Little Endian */
        uint64_t adjust_time           : 64; /**< [ 63:  0](R/W) Offset which will be added to PTP timer coming from PTP block.
                                                                 Typically a negative twos complement number to subtract
                                                                 out internal delays between the PTP and TIM hardware. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tim_af_offset_ptp_s cn; */
};
typedef union cavm_tim_af_offset_ptp cavm_tim_af_offset_ptp_t;

#define CAVM_TIM_AF_OFFSET_PTP CAVM_TIM_AF_OFFSET_PTP_FUNC()
static inline uint64_t CAVM_TIM_AF_OFFSET_PTP_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TIM_AF_OFFSET_PTP_FUNC(void)
{
    return 0x840090000190ll;
}

#define typedef_CAVM_TIM_AF_OFFSET_PTP cavm_tim_af_offset_ptp_t
#define bustype_CAVM_TIM_AF_OFFSET_PTP CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_TIM_AF_OFFSET_PTP "TIM_AF_OFFSET_PTP"
#define device_bar_CAVM_TIM_AF_OFFSET_PTP 0x0 /* RVU_BAR0 */
#define busnum_CAVM_TIM_AF_OFFSET_PTP 0
#define arguments_CAVM_TIM_AF_OFFSET_PTP -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) tim_af_reg_flags
 *
 * TIM AF Flags Register
 * This register provides flags for TIM.
 */
union cavm_tim_af_reg_flags
{
    uint64_t u;
    struct cavm_tim_af_reg_flags_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t gpio_edge             : 2;  /**< [  6:  5](R/W) Edge used for GPIO timing.
                                                                 This field must be configured before writing TIM_AF_FR_RN_GPIOS.
                                                                 0x0 = no edges and the timer tick is not generated.
                                                                 0x1 = TIM counts low-to-high transitions.
                                                                 0x2 = TIM counts high-to-low transitions.
                                                                 0x3 = TIM counts both low-to-high and high-to-low transitions. */
        uint64_t force_extbus_ena      : 1;  /**< [  4:  4](R/W) When set, the extbus clock enable is always on. For diagnostic use only. */
        uint64_t rd_psn_ign            : 1;  /**< [  3:  3](WO/H) When set, poisoned data is treated as normal nonpoisoned data. Otherwise, react
                                                                 as if a faulted data is received. Regardless of how this bit is configured,
                                                                 poison errors are logged in TIM_LF_RAS_INT always. */
        uint64_t reset                 : 1;  /**< [  2:  2](WO/H) Reset. One-shot pulse for clearing free-running timers TIM_AF_FR_RN_*. */
        uint64_t force_csclk_ena       : 1;  /**< [  1:  1](R/W) When set, conditional clock is always on. For diagnostic use only. */
        uint64_t ena_tim               : 1;  /**< [  0:  0](R/W) When set, TIM is in normal operation. When clear, time is effectively stopped for all
                                                                 rings in TIM.

                                                                 When [ENA_TIM] transitions 1-\>0, TIM stops all free-running timers and disables all rings.
                                                                 No new buckets will be traversed, and the buckets that are being traversed at the
                                                                 moment will be completed. */
#else /* Word 0 - Little Endian */
        uint64_t ena_tim               : 1;  /**< [  0:  0](R/W) When set, TIM is in normal operation. When clear, time is effectively stopped for all
                                                                 rings in TIM.

                                                                 When [ENA_TIM] transitions 1-\>0, TIM stops all free-running timers and disables all rings.
                                                                 No new buckets will be traversed, and the buckets that are being traversed at the
                                                                 moment will be completed. */
        uint64_t force_csclk_ena       : 1;  /**< [  1:  1](R/W) When set, conditional clock is always on. For diagnostic use only. */
        uint64_t reset                 : 1;  /**< [  2:  2](WO/H) Reset. One-shot pulse for clearing free-running timers TIM_AF_FR_RN_*. */
        uint64_t rd_psn_ign            : 1;  /**< [  3:  3](WO/H) When set, poisoned data is treated as normal nonpoisoned data. Otherwise, react
                                                                 as if a faulted data is received. Regardless of how this bit is configured,
                                                                 poison errors are logged in TIM_LF_RAS_INT always. */
        uint64_t force_extbus_ena      : 1;  /**< [  4:  4](R/W) When set, the extbus clock enable is always on. For diagnostic use only. */
        uint64_t gpio_edge             : 2;  /**< [  6:  5](R/W) Edge used for GPIO timing.
                                                                 This field must be configured before writing TIM_AF_FR_RN_GPIOS.
                                                                 0x0 = no edges and the timer tick is not generated.
                                                                 0x1 = TIM counts low-to-high transitions.
                                                                 0x2 = TIM counts high-to-low transitions.
                                                                 0x3 = TIM counts both low-to-high and high-to-low transitions. */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tim_af_reg_flags_s cn; */
};
typedef union cavm_tim_af_reg_flags cavm_tim_af_reg_flags_t;

#define CAVM_TIM_AF_REG_FLAGS CAVM_TIM_AF_REG_FLAGS_FUNC()
static inline uint64_t CAVM_TIM_AF_REG_FLAGS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TIM_AF_REG_FLAGS_FUNC(void)
{
    return 0x840090000080ll;
}

#define typedef_CAVM_TIM_AF_REG_FLAGS cavm_tim_af_reg_flags_t
#define bustype_CAVM_TIM_AF_REG_FLAGS CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_TIM_AF_REG_FLAGS "TIM_AF_REG_FLAGS"
#define device_bar_CAVM_TIM_AF_REG_FLAGS 0x0 /* RVU_BAR0 */
#define busnum_CAVM_TIM_AF_REG_FLAGS 0
#define arguments_CAVM_TIM_AF_REG_FLAGS -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) tim_af_ring#_ctl0
 *
 * TIM AF Ring Control 0 Registers
 */
union cavm_tim_af_ringx_ctl0
{
    uint64_t u;
    struct cavm_tim_af_ringx_ctl0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t expire_offset         : 32; /**< [ 63: 32](R/W/H) Time at which the next bucket will be serviced, or offset. See also TIM_LF_RING_REL
                                                                 for the position relative to current time.

                                                                 If TIM_AF_RING()_CTL1[ENA] = 0, then contains an offset.

                                                                 When TIM_AF_RING()_CTL1[ENA] transitions from a zero to a one, this offset will be
                                                                 added to the current time and INTERVAL, and loaded back into [EXPIRE_OFFSET].

                                                                 Thus the offset sets the delta time between ENA transitioning
                                                                 to one and the very first time the ring will be serviced. Software should
                                                                 program different offsets on each ring to reduce congestion to prevent many
                                                                 rings from otherwise expiring concurrently.

                                                                 If TIM_AF_RING()_CTL1[ENA] = 1, then [EXPIRE_OFFSET] contains the time in the future the next
                                                                 bucket will be serviced.

                                                                 When [EXPIRE_OFFSET] reaches the current time (TIM_AF_FR_RN_TENNS, TIM_AF_FR_RN_GPIOS,
                                                                 TIM_AF_FR_RN_PTP, TIM_AF_FR_RN_GTI, TIM_AF_FR_RN_BTS),
                                                                 [EXPIRE_OFFSET] is set to the next expiration time (current time plus
                                                                 TIM_AF_RING()_CTL0[INTERVAL]).

                                                                 [EXPIRE_OFFSET] is unpredictable after TIM_AF_RING()_CTL1[CLK_SRC] changes or
                                                                 TIM_AF_RING()_CTL1[ENA] transitions from one to zero, and must be reprogrammed before
                                                                 setting or resetting TIM_AF_RING()_CTL1[ENA]. */
        uint64_t interval              : 32; /**< [ 31:  0](R/W) Timer interval, measured in TENNS, GTI, PTP, GPIO, BTS clocks transitions.
                                                                 See HRM body text for minimum value constraints. */
#else /* Word 0 - Little Endian */
        uint64_t interval              : 32; /**< [ 31:  0](R/W) Timer interval, measured in TENNS, GTI, PTP, GPIO, BTS clocks transitions.
                                                                 See HRM body text for minimum value constraints. */
        uint64_t expire_offset         : 32; /**< [ 63: 32](R/W/H) Time at which the next bucket will be serviced, or offset. See also TIM_LF_RING_REL
                                                                 for the position relative to current time.

                                                                 If TIM_AF_RING()_CTL1[ENA] = 0, then contains an offset.

                                                                 When TIM_AF_RING()_CTL1[ENA] transitions from a zero to a one, this offset will be
                                                                 added to the current time and INTERVAL, and loaded back into [EXPIRE_OFFSET].

                                                                 Thus the offset sets the delta time between ENA transitioning
                                                                 to one and the very first time the ring will be serviced. Software should
                                                                 program different offsets on each ring to reduce congestion to prevent many
                                                                 rings from otherwise expiring concurrently.

                                                                 If TIM_AF_RING()_CTL1[ENA] = 1, then [EXPIRE_OFFSET] contains the time in the future the next
                                                                 bucket will be serviced.

                                                                 When [EXPIRE_OFFSET] reaches the current time (TIM_AF_FR_RN_TENNS, TIM_AF_FR_RN_GPIOS,
                                                                 TIM_AF_FR_RN_PTP, TIM_AF_FR_RN_GTI, TIM_AF_FR_RN_BTS),
                                                                 [EXPIRE_OFFSET] is set to the next expiration time (current time plus
                                                                 TIM_AF_RING()_CTL0[INTERVAL]).

                                                                 [EXPIRE_OFFSET] is unpredictable after TIM_AF_RING()_CTL1[CLK_SRC] changes or
                                                                 TIM_AF_RING()_CTL1[ENA] transitions from one to zero, and must be reprogrammed before
                                                                 setting or resetting TIM_AF_RING()_CTL1[ENA]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tim_af_ringx_ctl0_s cn; */
};
typedef union cavm_tim_af_ringx_ctl0 cavm_tim_af_ringx_ctl0_t;

static inline uint64_t CAVM_TIM_AF_RINGX_CTL0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TIM_AF_RINGX_CTL0(uint64_t a)
{
    if (a<=255)
        return 0x840090004000ll + 8ll * ((a) & 0xff);
    __cavm_csr_fatal("TIM_AF_RINGX_CTL0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TIM_AF_RINGX_CTL0(a) cavm_tim_af_ringx_ctl0_t
#define bustype_CAVM_TIM_AF_RINGX_CTL0(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_TIM_AF_RINGX_CTL0(a) "TIM_AF_RINGX_CTL0"
#define device_bar_CAVM_TIM_AF_RINGX_CTL0(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_TIM_AF_RINGX_CTL0(a) (a)
#define arguments_CAVM_TIM_AF_RINGX_CTL0(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) tim_af_ring#_ctl1
 *
 * TIM AF Ring Control 1 Registers
 */
union cavm_tim_af_ringx_ctl1
{
    uint64_t u;
    struct cavm_tim_af_ringx_ctl1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_54_63        : 10;
        uint64_t be                    : 1;  /**< [ 53: 53](R/W) Reserved. */
        uint64_t reserved_51_52        : 2;
        uint64_t rcf_busy              : 1;  /**< [ 50: 50](RO/H) Ring reconfiguration busy. When [ENA] is cleared, this bit will be set, if an
                                                                 engine is currently processing, a ring/bucket. It will remain set until
                                                                 hardware completes traversing that bucket. [ENA] must not be re-enabled until clear. */
        uint64_t ring_pri              : 1;  /**< [ 49: 49](R/W) If set to 1, ring become high priority and will be processed before any ring with value 0.
                                                                 If multiple rings are set to high priority then they will be served according to RR. */
        uint64_t lock_en               : 1;  /**< [ 48: 48](R/W) Enables bucket locking mechanism between hardware and software.
                                                                   0 = Hardware will always service the bucket when it expires.
                                                                   1 = Hardware skips buckets when it can't get the bucket's lock. */
        uint64_t ena                   : 1;  /**< [ 47: 47](R/W/H) Ring timer enable. When clearing, software must delay until
                                                                 [RCF_BUSY] = 0 to ensure the completion of the traversal before reprogramming
                                                                 the ring. Hardware will clear this bit when any TIM_LF_NRSPERR_INT[*] bit
                                                                 is set by hardware. */
        uint64_t reserved_46           : 1;
        uint64_t ena_prd               : 1;  /**< [ 45: 45](R/W) Enable periodic mode, which disables the memory write of zeros to
                                                                 TIM_MEM_BUCKET_S[NUM_ENTRIES] and TIM_MEM_BUCKET_S[CHUNK_REMAINDER] when a
                                                                 bucket is traversed. In periodic mode, [ENA_LDWB] must be cleared.
                                                                 Also, in periodic mode, [ENA_DFB] should be one, and zero otherwise. */
        uint64_t ena_ldwb              : 1;  /**< [ 44: 44](R/W) When set, enables the use of load and don't-write-back when reading timer entry cache lines.
                                                                 Must be clear when [ENA_PRD] is set. */
        uint64_t ena_dfb               : 1;  /**< [ 43: 43](R/W) Enable don't free buffer. When set, chunk buffer is not released by the TIM back to NPA.
                                                                 Must be set when [ENA_PRD] is set. */
        uint64_t clk_src               : 3;  /**< [ 42: 40](R/W) Source of ring's timer tick. Enumerated by TIM_CLK_SRCS_E. To change [CLK_SRC]:

                                                                 1. TIM_AF_RING()_CTL1[ENA] is cleared.

                                                                 2. [CLK_SRC] is changed.

                                                                 3. TIM_AF_RING()_CTL0[EXPIRE_OFFSET] is reprogrammed appropriately.

                                                                 4. TIM_AF_RING()_CTL1[ENA] is set. */
        uint64_t bucket                : 20; /**< [ 39: 20](R/W/H) Current bucket. Should be set to 0x0 by software at enable time. Incremented once per
                                                                 bucket traversal. */
        uint64_t bsize                 : 20; /**< [ 19:  0](R/W) Number of buckets minus one. [BSIZE] needs to be \> 0x0 and \< 0xFFFFF, i.e., there are at least two
                                                                 buckets in each nonempty ring. */
#else /* Word 0 - Little Endian */
        uint64_t bsize                 : 20; /**< [ 19:  0](R/W) Number of buckets minus one. [BSIZE] needs to be \> 0x0 and \< 0xFFFFF, i.e., there are at least two
                                                                 buckets in each nonempty ring. */
        uint64_t bucket                : 20; /**< [ 39: 20](R/W/H) Current bucket. Should be set to 0x0 by software at enable time. Incremented once per
                                                                 bucket traversal. */
        uint64_t clk_src               : 3;  /**< [ 42: 40](R/W) Source of ring's timer tick. Enumerated by TIM_CLK_SRCS_E. To change [CLK_SRC]:

                                                                 1. TIM_AF_RING()_CTL1[ENA] is cleared.

                                                                 2. [CLK_SRC] is changed.

                                                                 3. TIM_AF_RING()_CTL0[EXPIRE_OFFSET] is reprogrammed appropriately.

                                                                 4. TIM_AF_RING()_CTL1[ENA] is set. */
        uint64_t ena_dfb               : 1;  /**< [ 43: 43](R/W) Enable don't free buffer. When set, chunk buffer is not released by the TIM back to NPA.
                                                                 Must be set when [ENA_PRD] is set. */
        uint64_t ena_ldwb              : 1;  /**< [ 44: 44](R/W) When set, enables the use of load and don't-write-back when reading timer entry cache lines.
                                                                 Must be clear when [ENA_PRD] is set. */
        uint64_t ena_prd               : 1;  /**< [ 45: 45](R/W) Enable periodic mode, which disables the memory write of zeros to
                                                                 TIM_MEM_BUCKET_S[NUM_ENTRIES] and TIM_MEM_BUCKET_S[CHUNK_REMAINDER] when a
                                                                 bucket is traversed. In periodic mode, [ENA_LDWB] must be cleared.
                                                                 Also, in periodic mode, [ENA_DFB] should be one, and zero otherwise. */
        uint64_t reserved_46           : 1;
        uint64_t ena                   : 1;  /**< [ 47: 47](R/W/H) Ring timer enable. When clearing, software must delay until
                                                                 [RCF_BUSY] = 0 to ensure the completion of the traversal before reprogramming
                                                                 the ring. Hardware will clear this bit when any TIM_LF_NRSPERR_INT[*] bit
                                                                 is set by hardware. */
        uint64_t lock_en               : 1;  /**< [ 48: 48](R/W) Enables bucket locking mechanism between hardware and software.
                                                                   0 = Hardware will always service the bucket when it expires.
                                                                   1 = Hardware skips buckets when it can't get the bucket's lock. */
        uint64_t ring_pri              : 1;  /**< [ 49: 49](R/W) If set to 1, ring become high priority and will be processed before any ring with value 0.
                                                                 If multiple rings are set to high priority then they will be served according to RR. */
        uint64_t rcf_busy              : 1;  /**< [ 50: 50](RO/H) Ring reconfiguration busy. When [ENA] is cleared, this bit will be set, if an
                                                                 engine is currently processing, a ring/bucket. It will remain set until
                                                                 hardware completes traversing that bucket. [ENA] must not be re-enabled until clear. */
        uint64_t reserved_51_52        : 2;
        uint64_t be                    : 1;  /**< [ 53: 53](R/W) Reserved. */
        uint64_t reserved_54_63        : 10;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tim_af_ringx_ctl1_s cn; */
};
typedef union cavm_tim_af_ringx_ctl1 cavm_tim_af_ringx_ctl1_t;

static inline uint64_t CAVM_TIM_AF_RINGX_CTL1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TIM_AF_RINGX_CTL1(uint64_t a)
{
    if (a<=255)
        return 0x840090006000ll + 8ll * ((a) & 0xff);
    __cavm_csr_fatal("TIM_AF_RINGX_CTL1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TIM_AF_RINGX_CTL1(a) cavm_tim_af_ringx_ctl1_t
#define bustype_CAVM_TIM_AF_RINGX_CTL1(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_TIM_AF_RINGX_CTL1(a) "TIM_AF_RINGX_CTL1"
#define device_bar_CAVM_TIM_AF_RINGX_CTL1(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_TIM_AF_RINGX_CTL1(a) (a)
#define arguments_CAVM_TIM_AF_RINGX_CTL1(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) tim_af_ring#_ctl2
 *
 * TIM AF Ring Control 2 Registers
 */
union cavm_tim_af_ringx_ctl2
{
    uint64_t u;
    struct cavm_tim_af_ringx_ctl2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t csize                 : 13; /**< [ 52: 40](R/W) Number of sixteen-byte words per chunk, i.e. one for the next pointer plus one
                                                                 times the number of TIM_MEM_ENTRY_S. [CSIZE] mod(8) must be zero. */
        uint64_t reserved_0_39         : 40;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_39         : 40;
        uint64_t csize                 : 13; /**< [ 52: 40](R/W) Number of sixteen-byte words per chunk, i.e. one for the next pointer plus one
                                                                 times the number of TIM_MEM_ENTRY_S. [CSIZE] mod(8) must be zero. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tim_af_ringx_ctl2_s cn; */
};
typedef union cavm_tim_af_ringx_ctl2 cavm_tim_af_ringx_ctl2_t;

static inline uint64_t CAVM_TIM_AF_RINGX_CTL2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TIM_AF_RINGX_CTL2(uint64_t a)
{
    if (a<=255)
        return 0x840090008000ll + 8ll * ((a) & 0xff);
    __cavm_csr_fatal("TIM_AF_RINGX_CTL2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TIM_AF_RINGX_CTL2(a) cavm_tim_af_ringx_ctl2_t
#define bustype_CAVM_TIM_AF_RINGX_CTL2(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_TIM_AF_RINGX_CTL2(a) "TIM_AF_RINGX_CTL2"
#define device_bar_CAVM_TIM_AF_RINGX_CTL2(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_TIM_AF_RINGX_CTL2(a) (a)
#define arguments_CAVM_TIM_AF_RINGX_CTL2(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) tim_af_ring#_gmctl
 *
 * TIM Ring Guest Machine Control Register
 */
union cavm_tim_af_ringx_gmctl
{
    uint64_t u;
    struct cavm_tim_af_ringx_gmctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t npa_pf_func           : 16; /**< [ 31: 16](R/W) NPA RVU physical and virtual function. Indicates the RVU PF and VF to which
                                                                 this ring's NPA free buffer requests are sent. */
        uint64_t sso_pf_func           : 16; /**< [ 15:  0](R/W) SSO RVU physical and virtual function. Indicates the RVU PF and VF to which
                                                                 this ring's SSO add works are sent. */
#else /* Word 0 - Little Endian */
        uint64_t sso_pf_func           : 16; /**< [ 15:  0](R/W) SSO RVU physical and virtual function. Indicates the RVU PF and VF to which
                                                                 this ring's SSO add works are sent. */
        uint64_t npa_pf_func           : 16; /**< [ 31: 16](R/W) NPA RVU physical and virtual function. Indicates the RVU PF and VF to which
                                                                 this ring's NPA free buffer requests are sent. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tim_af_ringx_gmctl_s cn; */
};
typedef union cavm_tim_af_ringx_gmctl cavm_tim_af_ringx_gmctl_t;

static inline uint64_t CAVM_TIM_AF_RINGX_GMCTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TIM_AF_RINGX_GMCTL(uint64_t a)
{
    if (a<=255)
        return 0x840090002000ll + 8ll * ((a) & 0xff);
    __cavm_csr_fatal("TIM_AF_RINGX_GMCTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TIM_AF_RINGX_GMCTL(a) cavm_tim_af_ringx_gmctl_t
#define bustype_CAVM_TIM_AF_RINGX_GMCTL(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_TIM_AF_RINGX_GMCTL(a) "TIM_AF_RINGX_GMCTL"
#define device_bar_CAVM_TIM_AF_RINGX_GMCTL(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_TIM_AF_RINGX_GMCTL(a) (a)
#define arguments_CAVM_TIM_AF_RINGX_GMCTL(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) tim_af_ring#_late
 *
 * TIM Ring Late Register
 */
union cavm_tim_af_ringx_late
{
    uint64_t u;
    struct cavm_tim_af_ringx_late_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_20_63        : 44;
        uint64_t count                 : 20; /**< [ 19:  0](RO/H) Indicates how many buckets are late ([COUNT] \> 1) to be processed in this ring.
                                                                 When the associated ring is late, TIM will make a best effort to catch up and
                                                                 processes all buckets that are late, back-to-back. Incremented by TIM for every
                                                                 ring expiration and decremented when a ring's bucket is serviced.
                                                                 When (TIM_AF_RING()_LATE[COUNT] \>= (TIM_AF_RING()_CTL1[BSIZE]+1))
                                                                 hardware will set TIM_AF_RING()_LATE[COUNT] = 1.
                                                                 The read late count counter can be bigger than the bucket size plus one in case the transversal
                                                                 engine are all in use (the value will be updated as soon as the ring will be processed).
                                                                 Hardware will set TIM_AF_RING()_LATE[COUNT] = 0 when TIM_AF_RING()_CTL1[ENA]
                                                                 transitions from 1-\>0. Since maximum of TIM_AF_RING()_CTL1[BSIZE] is 0xFFFFE,
                                                                 maximum of TIM_AF_RING()_LATE[COUNT] is 0xFFFFF. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 20; /**< [ 19:  0](RO/H) Indicates how many buckets are late ([COUNT] \> 1) to be processed in this ring.
                                                                 When the associated ring is late, TIM will make a best effort to catch up and
                                                                 processes all buckets that are late, back-to-back. Incremented by TIM for every
                                                                 ring expiration and decremented when a ring's bucket is serviced.
                                                                 When (TIM_AF_RING()_LATE[COUNT] \>= (TIM_AF_RING()_CTL1[BSIZE]+1))
                                                                 hardware will set TIM_AF_RING()_LATE[COUNT] = 1.
                                                                 The read late count counter can be bigger than the bucket size plus one in case the transversal
                                                                 engine are all in use (the value will be updated as soon as the ring will be processed).
                                                                 Hardware will set TIM_AF_RING()_LATE[COUNT] = 0 when TIM_AF_RING()_CTL1[ENA]
                                                                 transitions from 1-\>0. Since maximum of TIM_AF_RING()_CTL1[BSIZE] is 0xFFFFE,
                                                                 maximum of TIM_AF_RING()_LATE[COUNT] is 0xFFFFF. */
        uint64_t reserved_20_63        : 44;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tim_af_ringx_late_s cn; */
};
typedef union cavm_tim_af_ringx_late cavm_tim_af_ringx_late_t;

static inline uint64_t CAVM_TIM_AF_RINGX_LATE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TIM_AF_RINGX_LATE(uint64_t a)
{
    if (a<=255)
        return 0x840090046000ll + 8ll * ((a) & 0xff);
    __cavm_csr_fatal("TIM_AF_RINGX_LATE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TIM_AF_RINGX_LATE(a) cavm_tim_af_ringx_late_t
#define bustype_CAVM_TIM_AF_RINGX_LATE(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_TIM_AF_RINGX_LATE(a) "TIM_AF_RINGX_LATE"
#define device_bar_CAVM_TIM_AF_RINGX_LATE(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_TIM_AF_RINGX_LATE(a) (a)
#define arguments_CAVM_TIM_AF_RINGX_LATE(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) tim_af_ring_active_vec#
 *
 * TIM AF Ring Active Register
 */
union cavm_tim_af_ring_active_vecx
{
    uint64_t u;
    struct cavm_tim_af_ring_active_vecx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ring_active_vec       : 64; /**< [ 63:  0](RO/H) Active rings vector. Indicates which rings in TIM are active, reconfigured with updated
                                                                 TIM_AF_RING()_CTL0[EXPIRE_OFFSET], and are ready to be searched/expired. */
#else /* Word 0 - Little Endian */
        uint64_t ring_active_vec       : 64; /**< [ 63:  0](RO/H) Active rings vector. Indicates which rings in TIM are active, reconfigured with updated
                                                                 TIM_AF_RING()_CTL0[EXPIRE_OFFSET], and are ready to be searched/expired. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tim_af_ring_active_vecx_s cn; */
};
typedef union cavm_tim_af_ring_active_vecx cavm_tim_af_ring_active_vecx_t;

static inline uint64_t CAVM_TIM_AF_RING_ACTIVE_VECX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TIM_AF_RING_ACTIVE_VECX(uint64_t a)
{
    if (a<=3)
        return 0x840090040000ll + 8ll * ((a) & 0x3);
    __cavm_csr_fatal("TIM_AF_RING_ACTIVE_VECX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TIM_AF_RING_ACTIVE_VECX(a) cavm_tim_af_ring_active_vecx_t
#define bustype_CAVM_TIM_AF_RING_ACTIVE_VECX(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_TIM_AF_RING_ACTIVE_VECX(a) "TIM_AF_RING_ACTIVE_VECX"
#define device_bar_CAVM_TIM_AF_RING_ACTIVE_VECX(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_TIM_AF_RING_ACTIVE_VECX(a) (a)
#define arguments_CAVM_TIM_AF_RING_ACTIVE_VECX(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) tim_af_ring_pending_vec#
 *
 * TIM AF Ring Pending Register
 */
union cavm_tim_af_ring_pending_vecx
{
    uint64_t u;
    struct cavm_tim_af_ring_pending_vecx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ring_pending_vec      : 64; /**< [ 63:  0](RO/H) Pending rings vector. Indicates which rings in TIM are pending traversal. Bit 0
                                                                 of TIM_AF_RING_PENDING_VEC(0) represents ring 0, while bit 63 of
                                                                 TIM_AF_RING_PENDING_VEC(3) represents ring 255. */
#else /* Word 0 - Little Endian */
        uint64_t ring_pending_vec      : 64; /**< [ 63:  0](RO/H) Pending rings vector. Indicates which rings in TIM are pending traversal. Bit 0
                                                                 of TIM_AF_RING_PENDING_VEC(0) represents ring 0, while bit 63 of
                                                                 TIM_AF_RING_PENDING_VEC(3) represents ring 255. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tim_af_ring_pending_vecx_s cn; */
};
typedef union cavm_tim_af_ring_pending_vecx cavm_tim_af_ring_pending_vecx_t;

static inline uint64_t CAVM_TIM_AF_RING_PENDING_VECX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TIM_AF_RING_PENDING_VECX(uint64_t a)
{
    if (a<=3)
        return 0x840090042000ll + 8ll * ((a) & 0x3);
    __cavm_csr_fatal("TIM_AF_RING_PENDING_VECX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TIM_AF_RING_PENDING_VECX(a) cavm_tim_af_ring_pending_vecx_t
#define bustype_CAVM_TIM_AF_RING_PENDING_VECX(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_TIM_AF_RING_PENDING_VECX(a) "TIM_AF_RING_PENDING_VECX"
#define device_bar_CAVM_TIM_AF_RING_PENDING_VECX(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_TIM_AF_RING_PENDING_VECX(a) (a)
#define arguments_CAVM_TIM_AF_RING_PENDING_VECX(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) tim_af_rvu_int
 *
 * TIM AF RVU Interrupt Register
 * This register contains RVU error interrupt summary bits.
 */
union cavm_tim_af_rvu_int
{
    uint64_t u;
    struct cavm_tim_af_rvu_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t unmapped_slot         : 1;  /**< [  0:  0](R/W1C/H) Unmapped slot. Received an I/O request to a VF/PF slot in BAR2 that is not
                                                                 reverse mapped to an LF. See TIM_PRIV_LF()_CFG. */
#else /* Word 0 - Little Endian */
        uint64_t unmapped_slot         : 1;  /**< [  0:  0](R/W1C/H) Unmapped slot. Received an I/O request to a VF/PF slot in BAR2 that is not
                                                                 reverse mapped to an LF. See TIM_PRIV_LF()_CFG. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tim_af_rvu_int_s cn; */
};
typedef union cavm_tim_af_rvu_int cavm_tim_af_rvu_int_t;

#define CAVM_TIM_AF_RVU_INT CAVM_TIM_AF_RVU_INT_FUNC()
static inline uint64_t CAVM_TIM_AF_RVU_INT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TIM_AF_RVU_INT_FUNC(void)
{
    return 0x840090010200ll;
}

#define typedef_CAVM_TIM_AF_RVU_INT cavm_tim_af_rvu_int_t
#define bustype_CAVM_TIM_AF_RVU_INT CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_TIM_AF_RVU_INT "TIM_AF_RVU_INT"
#define device_bar_CAVM_TIM_AF_RVU_INT 0x0 /* RVU_BAR0 */
#define busnum_CAVM_TIM_AF_RVU_INT 0
#define arguments_CAVM_TIM_AF_RVU_INT -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) tim_af_rvu_int_ena_w1c
 *
 * TIM AF RVU Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_tim_af_rvu_int_ena_w1c
{
    uint64_t u;
    struct cavm_tim_af_rvu_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t unmapped_slot         : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for TIM_AF_RVU_INT[UNMAPPED_SLOT]. */
#else /* Word 0 - Little Endian */
        uint64_t unmapped_slot         : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for TIM_AF_RVU_INT[UNMAPPED_SLOT]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tim_af_rvu_int_ena_w1c_s cn; */
};
typedef union cavm_tim_af_rvu_int_ena_w1c cavm_tim_af_rvu_int_ena_w1c_t;

#define CAVM_TIM_AF_RVU_INT_ENA_W1C CAVM_TIM_AF_RVU_INT_ENA_W1C_FUNC()
static inline uint64_t CAVM_TIM_AF_RVU_INT_ENA_W1C_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TIM_AF_RVU_INT_ENA_W1C_FUNC(void)
{
    return 0x840090010218ll;
}

#define typedef_CAVM_TIM_AF_RVU_INT_ENA_W1C cavm_tim_af_rvu_int_ena_w1c_t
#define bustype_CAVM_TIM_AF_RVU_INT_ENA_W1C CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_TIM_AF_RVU_INT_ENA_W1C "TIM_AF_RVU_INT_ENA_W1C"
#define device_bar_CAVM_TIM_AF_RVU_INT_ENA_W1C 0x0 /* RVU_BAR0 */
#define busnum_CAVM_TIM_AF_RVU_INT_ENA_W1C 0
#define arguments_CAVM_TIM_AF_RVU_INT_ENA_W1C -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) tim_af_rvu_int_ena_w1s
 *
 * TIM AF RVU Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_tim_af_rvu_int_ena_w1s
{
    uint64_t u;
    struct cavm_tim_af_rvu_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t unmapped_slot         : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for TIM_AF_RVU_INT[UNMAPPED_SLOT]. */
#else /* Word 0 - Little Endian */
        uint64_t unmapped_slot         : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for TIM_AF_RVU_INT[UNMAPPED_SLOT]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tim_af_rvu_int_ena_w1s_s cn; */
};
typedef union cavm_tim_af_rvu_int_ena_w1s cavm_tim_af_rvu_int_ena_w1s_t;

#define CAVM_TIM_AF_RVU_INT_ENA_W1S CAVM_TIM_AF_RVU_INT_ENA_W1S_FUNC()
static inline uint64_t CAVM_TIM_AF_RVU_INT_ENA_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TIM_AF_RVU_INT_ENA_W1S_FUNC(void)
{
    return 0x840090010210ll;
}

#define typedef_CAVM_TIM_AF_RVU_INT_ENA_W1S cavm_tim_af_rvu_int_ena_w1s_t
#define bustype_CAVM_TIM_AF_RVU_INT_ENA_W1S CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_TIM_AF_RVU_INT_ENA_W1S "TIM_AF_RVU_INT_ENA_W1S"
#define device_bar_CAVM_TIM_AF_RVU_INT_ENA_W1S 0x0 /* RVU_BAR0 */
#define busnum_CAVM_TIM_AF_RVU_INT_ENA_W1S 0
#define arguments_CAVM_TIM_AF_RVU_INT_ENA_W1S -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) tim_af_rvu_int_w1s
 *
 * TIM AF RVU Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_tim_af_rvu_int_w1s
{
    uint64_t u;
    struct cavm_tim_af_rvu_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t unmapped_slot         : 1;  /**< [  0:  0](R/W1S/H) Reads or sets TIM_AF_RVU_INT[UNMAPPED_SLOT]. */
#else /* Word 0 - Little Endian */
        uint64_t unmapped_slot         : 1;  /**< [  0:  0](R/W1S/H) Reads or sets TIM_AF_RVU_INT[UNMAPPED_SLOT]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tim_af_rvu_int_w1s_s cn; */
};
typedef union cavm_tim_af_rvu_int_w1s cavm_tim_af_rvu_int_w1s_t;

#define CAVM_TIM_AF_RVU_INT_W1S CAVM_TIM_AF_RVU_INT_W1S_FUNC()
static inline uint64_t CAVM_TIM_AF_RVU_INT_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TIM_AF_RVU_INT_W1S_FUNC(void)
{
    return 0x840090010208ll;
}

#define typedef_CAVM_TIM_AF_RVU_INT_W1S cavm_tim_af_rvu_int_w1s_t
#define bustype_CAVM_TIM_AF_RVU_INT_W1S CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_TIM_AF_RVU_INT_W1S "TIM_AF_RVU_INT_W1S"
#define device_bar_CAVM_TIM_AF_RVU_INT_W1S 0x0 /* RVU_BAR0 */
#define busnum_CAVM_TIM_AF_RVU_INT_W1S 0
#define arguments_CAVM_TIM_AF_RVU_INT_W1S -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) tim_af_rvu_lf_cfg_debug
 *
 * TIM Privileged LF Configuration Debug Registers
 * This debug register allows software to lookup the reverse mapping from VF/PF
 * slot to LF. The forward mapping is programmed with TIM_PRIV_LF()_CFG.
 */
union cavm_tim_af_rvu_lf_cfg_debug
{
    uint64_t u;
    struct cavm_tim_af_rvu_lf_cfg_debug_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_40_63        : 24;
        uint64_t pf_func               : 16; /**< [ 39: 24](R/W) RVU VF/PF for reverse lookup. Format defined by RVU_PF_FUNC_S. */
        uint64_t slot                  : 8;  /**< [ 23: 16](R/W) Slot within the VF/PF selected by [PF_FUNC] for reverse lookup. Must be
                                                                 zero for NIX and NPA. */
        uint64_t reserved_14_15        : 2;
        uint64_t exec                  : 1;  /**< [ 13: 13](R/W1S/H) Execute lookup. Writing a one to this bit initiates the reverse lookup
                                                                 from {[PF_FUNC], [SLOT]}. Hardware writes the lookup result to {[LF_VALID],
                                                                 [LF]} and clears this bit when done. */
        uint64_t lf_valid              : 1;  /**< [ 12: 12](RO/H) When set, indicates local function [LF] is provisioned to the VF/PF slot
                                                                 indexed by this register. When clear, a local function is not provisioned
                                                                 to the VF/PF slot. */
        uint64_t lf                    : 12; /**< [ 11:  0](RO/H) When [LF_VALID] is set, local function provisioned to the VF/PF slot. */
#else /* Word 0 - Little Endian */
        uint64_t lf                    : 12; /**< [ 11:  0](RO/H) When [LF_VALID] is set, local function provisioned to the VF/PF slot. */
        uint64_t lf_valid              : 1;  /**< [ 12: 12](RO/H) When set, indicates local function [LF] is provisioned to the VF/PF slot
                                                                 indexed by this register. When clear, a local function is not provisioned
                                                                 to the VF/PF slot. */
        uint64_t exec                  : 1;  /**< [ 13: 13](R/W1S/H) Execute lookup. Writing a one to this bit initiates the reverse lookup
                                                                 from {[PF_FUNC], [SLOT]}. Hardware writes the lookup result to {[LF_VALID],
                                                                 [LF]} and clears this bit when done. */
        uint64_t reserved_14_15        : 2;
        uint64_t slot                  : 8;  /**< [ 23: 16](R/W) Slot within the VF/PF selected by [PF_FUNC] for reverse lookup. Must be
                                                                 zero for NIX and NPA. */
        uint64_t pf_func               : 16; /**< [ 39: 24](R/W) RVU VF/PF for reverse lookup. Format defined by RVU_PF_FUNC_S. */
        uint64_t reserved_40_63        : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tim_af_rvu_lf_cfg_debug_s cn; */
};
typedef union cavm_tim_af_rvu_lf_cfg_debug cavm_tim_af_rvu_lf_cfg_debug_t;

#define CAVM_TIM_AF_RVU_LF_CFG_DEBUG CAVM_TIM_AF_RVU_LF_CFG_DEBUG_FUNC()
static inline uint64_t CAVM_TIM_AF_RVU_LF_CFG_DEBUG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TIM_AF_RVU_LF_CFG_DEBUG_FUNC(void)
{
    return 0x840090030000ll;
}

#define typedef_CAVM_TIM_AF_RVU_LF_CFG_DEBUG cavm_tim_af_rvu_lf_cfg_debug_t
#define bustype_CAVM_TIM_AF_RVU_LF_CFG_DEBUG CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_TIM_AF_RVU_LF_CFG_DEBUG "TIM_AF_RVU_LF_CFG_DEBUG"
#define device_bar_CAVM_TIM_AF_RVU_LF_CFG_DEBUG 0x0 /* RVU_BAR0 */
#define busnum_CAVM_TIM_AF_RVU_LF_CFG_DEBUG 0
#define arguments_CAVM_TIM_AF_RVU_LF_CFG_DEBUG -1,-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) tim_lf_fr_rn_bts
 *
 * TIM Ring Free Running BTS Count Register
 * This register is a read-only copy of TIM_AF_FR_RN_BTS.
 */
union cavm_tim_lf_fr_rn_bts
{
    uint64_t u;
    struct cavm_tim_lf_fr_rn_bts_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](RO/H) Read-only TIM_AF_FR_RN_BTS[COUNT]. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](RO/H) Read-only TIM_AF_FR_RN_BTS[COUNT]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tim_lf_fr_rn_bts_s cn; */
};
typedef union cavm_tim_lf_fr_rn_bts cavm_tim_lf_fr_rn_bts_t;

#define CAVM_TIM_LF_FR_RN_BTS CAVM_TIM_LF_FR_RN_BTS_FUNC()
static inline uint64_t CAVM_TIM_LF_FR_RN_BTS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TIM_LF_FR_RN_BTS_FUNC(void)
{
    return 0x840200900070ll;
}

#define typedef_CAVM_TIM_LF_FR_RN_BTS cavm_tim_lf_fr_rn_bts_t
#define bustype_CAVM_TIM_LF_FR_RN_BTS CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_TIM_LF_FR_RN_BTS "TIM_LF_FR_RN_BTS"
#define device_bar_CAVM_TIM_LF_FR_RN_BTS 0x2 /* RVU_BAR2 */
#define busnum_CAVM_TIM_LF_FR_RN_BTS 0
#define arguments_CAVM_TIM_LF_FR_RN_BTS -1,-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) tim_lf_fr_rn_cycles
 *
 * TIM Ring Free Running Cycle Count Register
 * This register is a read-only copy of TIM_AF_FR_RN_CYCLES.
 */
union cavm_tim_lf_fr_rn_cycles
{
    uint64_t u;
    struct cavm_tim_lf_fr_rn_cycles_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](RO/H) Read-only TIM_AF_FR_RN_CYCLES[COUNT]. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](RO/H) Read-only TIM_AF_FR_RN_CYCLES[COUNT]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tim_lf_fr_rn_cycles_s cn; */
};
typedef union cavm_tim_lf_fr_rn_cycles cavm_tim_lf_fr_rn_cycles_t;

#define CAVM_TIM_LF_FR_RN_CYCLES CAVM_TIM_LF_FR_RN_CYCLES_FUNC()
static inline uint64_t CAVM_TIM_LF_FR_RN_CYCLES_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TIM_LF_FR_RN_CYCLES_FUNC(void)
{
    return 0x840200900010ll;
}

#define typedef_CAVM_TIM_LF_FR_RN_CYCLES cavm_tim_lf_fr_rn_cycles_t
#define bustype_CAVM_TIM_LF_FR_RN_CYCLES CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_TIM_LF_FR_RN_CYCLES "TIM_LF_FR_RN_CYCLES"
#define device_bar_CAVM_TIM_LF_FR_RN_CYCLES 0x2 /* RVU_BAR2 */
#define busnum_CAVM_TIM_LF_FR_RN_CYCLES 0
#define arguments_CAVM_TIM_LF_FR_RN_CYCLES -1,-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) tim_lf_fr_rn_gpios
 *
 * TIM Ring Free Running GPIO Count Register
 * This register is a read-only copy of TIM_AF_FR_RN_GPIOS.
 */
union cavm_tim_lf_fr_rn_gpios
{
    uint64_t u;
    struct cavm_tim_lf_fr_rn_gpios_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](RO/H) Read-only TIM_AF_FR_RN_GPIOS[COUNT]. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](RO/H) Read-only TIM_AF_FR_RN_GPIOS[COUNT]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tim_lf_fr_rn_gpios_s cn; */
};
typedef union cavm_tim_lf_fr_rn_gpios cavm_tim_lf_fr_rn_gpios_t;

#define CAVM_TIM_LF_FR_RN_GPIOS CAVM_TIM_LF_FR_RN_GPIOS_FUNC()
static inline uint64_t CAVM_TIM_LF_FR_RN_GPIOS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TIM_LF_FR_RN_GPIOS_FUNC(void)
{
    return 0x840200900020ll;
}

#define typedef_CAVM_TIM_LF_FR_RN_GPIOS cavm_tim_lf_fr_rn_gpios_t
#define bustype_CAVM_TIM_LF_FR_RN_GPIOS CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_TIM_LF_FR_RN_GPIOS "TIM_LF_FR_RN_GPIOS"
#define device_bar_CAVM_TIM_LF_FR_RN_GPIOS 0x2 /* RVU_BAR2 */
#define busnum_CAVM_TIM_LF_FR_RN_GPIOS 0
#define arguments_CAVM_TIM_LF_FR_RN_GPIOS -1,-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) tim_lf_fr_rn_gti
 *
 * TIM Ring Free Running System Clock Count Register
 * This register is a read-only copy of TIM_AF_FR_RN_GTI.
 */
union cavm_tim_lf_fr_rn_gti
{
    uint64_t u;
    struct cavm_tim_lf_fr_rn_gti_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](RO/H) Read-only TIM_AF_FR_RN_GTI[COUNT]. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](RO/H) Read-only TIM_AF_FR_RN_GTI[COUNT]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tim_lf_fr_rn_gti_s cn; */
};
typedef union cavm_tim_lf_fr_rn_gti cavm_tim_lf_fr_rn_gti_t;

#define CAVM_TIM_LF_FR_RN_GTI CAVM_TIM_LF_FR_RN_GTI_FUNC()
static inline uint64_t CAVM_TIM_LF_FR_RN_GTI_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TIM_LF_FR_RN_GTI_FUNC(void)
{
    return 0x840200900030ll;
}

#define typedef_CAVM_TIM_LF_FR_RN_GTI cavm_tim_lf_fr_rn_gti_t
#define bustype_CAVM_TIM_LF_FR_RN_GTI CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_TIM_LF_FR_RN_GTI "TIM_LF_FR_RN_GTI"
#define device_bar_CAVM_TIM_LF_FR_RN_GTI 0x2 /* RVU_BAR2 */
#define busnum_CAVM_TIM_LF_FR_RN_GTI 0
#define arguments_CAVM_TIM_LF_FR_RN_GTI -1,-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) tim_lf_fr_rn_ptp
 *
 * TIM Ring Free Running PTP Count Register
 * This register is a read-only copy of TIM_AF_FR_RN_PTP.
 */
union cavm_tim_lf_fr_rn_ptp
{
    uint64_t u;
    struct cavm_tim_lf_fr_rn_ptp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](RO/H) Read-only TIM_AF_FR_RN_PTP[COUNT]. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](RO/H) Read-only TIM_AF_FR_RN_PTP[COUNT]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tim_lf_fr_rn_ptp_s cn; */
};
typedef union cavm_tim_lf_fr_rn_ptp cavm_tim_lf_fr_rn_ptp_t;

#define CAVM_TIM_LF_FR_RN_PTP CAVM_TIM_LF_FR_RN_PTP_FUNC()
static inline uint64_t CAVM_TIM_LF_FR_RN_PTP_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TIM_LF_FR_RN_PTP_FUNC(void)
{
    return 0x840200900040ll;
}

#define typedef_CAVM_TIM_LF_FR_RN_PTP cavm_tim_lf_fr_rn_ptp_t
#define bustype_CAVM_TIM_LF_FR_RN_PTP CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_TIM_LF_FR_RN_PTP "TIM_LF_FR_RN_PTP"
#define device_bar_CAVM_TIM_LF_FR_RN_PTP 0x2 /* RVU_BAR2 */
#define busnum_CAVM_TIM_LF_FR_RN_PTP 0
#define arguments_CAVM_TIM_LF_FR_RN_PTP -1,-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) tim_lf_fr_rn_tenns
 *
 * TIM Ring Free Running 10ns Clock Count Register
 * This register is a read-only copy of TIM_AF_FR_RN_TENNS.
 */
union cavm_tim_lf_fr_rn_tenns
{
    uint64_t u;
    struct cavm_tim_lf_fr_rn_tenns_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](RO/H) Read-only TIM_AF_FR_RN_TENNS[COUNT]. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](RO/H) Read-only TIM_AF_FR_RN_TENNS[COUNT]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tim_lf_fr_rn_tenns_s cn; */
};
typedef union cavm_tim_lf_fr_rn_tenns cavm_tim_lf_fr_rn_tenns_t;

#define CAVM_TIM_LF_FR_RN_TENNS CAVM_TIM_LF_FR_RN_TENNS_FUNC()
static inline uint64_t CAVM_TIM_LF_FR_RN_TENNS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TIM_LF_FR_RN_TENNS_FUNC(void)
{
    return 0x840200900050ll;
}

#define typedef_CAVM_TIM_LF_FR_RN_TENNS cavm_tim_lf_fr_rn_tenns_t
#define bustype_CAVM_TIM_LF_FR_RN_TENNS CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_TIM_LF_FR_RN_TENNS "TIM_LF_FR_RN_TENNS"
#define device_bar_CAVM_TIM_LF_FR_RN_TENNS 0x2 /* RVU_BAR2 */
#define busnum_CAVM_TIM_LF_FR_RN_TENNS 0
#define arguments_CAVM_TIM_LF_FR_RN_TENNS -1,-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) tim_lf_nrsperr_int
 *
 * TIM LF NCB Response Error Interrupt Register
 */
union cavm_tim_lf_nrsperr_int
{
    uint64_t u;
    struct cavm_tim_lf_nrsperr_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t wqe_psn               : 1;  /**< [  4:  4](R/W1C/H) WQE poison flag. Set when a poisoned WQE response or next chunk pointer was detected. */
        uint64_t la_psn                : 1;  /**< [  3:  3](R/W1C/H) Load and atomic poison flag. Set when a poisoned non-WQE load or atomic response was detected. */
        uint64_t wqe_flt               : 1;  /**< [  2:  2](R/W1C/H) WQE fault flag. Set when a faulted WQE response or next chunk pointer was detected. */
        uint64_t la_flt                : 1;  /**< [  1:  1](R/W1C/H) Load and atomic fault flag. Set when a faulted non-WQE load or
                                                                 atomic response was detected, e.g. a SMMU page fault to a
                                                                 bad IOVA request by this ring. */
        uint64_t stdn_flt              : 1;  /**< [  0:  0](R/W1C/H) Store fault flag. Set when a faulted store was detected, e.g. a SMMU
                                                                 page fault to a bad IOVA request by this ring. */
#else /* Word 0 - Little Endian */
        uint64_t stdn_flt              : 1;  /**< [  0:  0](R/W1C/H) Store fault flag. Set when a faulted store was detected, e.g. a SMMU
                                                                 page fault to a bad IOVA request by this ring. */
        uint64_t la_flt                : 1;  /**< [  1:  1](R/W1C/H) Load and atomic fault flag. Set when a faulted non-WQE load or
                                                                 atomic response was detected, e.g. a SMMU page fault to a
                                                                 bad IOVA request by this ring. */
        uint64_t wqe_flt               : 1;  /**< [  2:  2](R/W1C/H) WQE fault flag. Set when a faulted WQE response or next chunk pointer was detected. */
        uint64_t la_psn                : 1;  /**< [  3:  3](R/W1C/H) Load and atomic poison flag. Set when a poisoned non-WQE load or atomic response was detected. */
        uint64_t wqe_psn               : 1;  /**< [  4:  4](R/W1C/H) WQE poison flag. Set when a poisoned WQE response or next chunk pointer was detected. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tim_lf_nrsperr_int_s cn; */
};
typedef union cavm_tim_lf_nrsperr_int cavm_tim_lf_nrsperr_int_t;

#define CAVM_TIM_LF_NRSPERR_INT CAVM_TIM_LF_NRSPERR_INT_FUNC()
static inline uint64_t CAVM_TIM_LF_NRSPERR_INT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TIM_LF_NRSPERR_INT_FUNC(void)
{
    return 0x840200900200ll;
}

#define typedef_CAVM_TIM_LF_NRSPERR_INT cavm_tim_lf_nrsperr_int_t
#define bustype_CAVM_TIM_LF_NRSPERR_INT CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_TIM_LF_NRSPERR_INT "TIM_LF_NRSPERR_INT"
#define device_bar_CAVM_TIM_LF_NRSPERR_INT 0x2 /* RVU_BAR2 */
#define busnum_CAVM_TIM_LF_NRSPERR_INT 0
#define arguments_CAVM_TIM_LF_NRSPERR_INT -1,-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) tim_lf_nrsperr_int_ena_w1c
 *
 * TIM LF NCB Response Error Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_tim_lf_nrsperr_int_ena_w1c
{
    uint64_t u;
    struct cavm_tim_lf_nrsperr_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t wqe_psn               : 1;  /**< [  4:  4](R/W1C/H) Reads or clears enable for TIM_LF_NRSPERR_INT[WQE_PSN]. */
        uint64_t la_psn                : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for TIM_LF_NRSPERR_INT[LA_PSN]. */
        uint64_t wqe_flt               : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for TIM_LF_NRSPERR_INT[WQE_FLT]. */
        uint64_t la_flt                : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for TIM_LF_NRSPERR_INT[LA_FLT]. */
        uint64_t stdn_flt              : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for TIM_LF_NRSPERR_INT[STDN_FLT]. */
#else /* Word 0 - Little Endian */
        uint64_t stdn_flt              : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for TIM_LF_NRSPERR_INT[STDN_FLT]. */
        uint64_t la_flt                : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for TIM_LF_NRSPERR_INT[LA_FLT]. */
        uint64_t wqe_flt               : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for TIM_LF_NRSPERR_INT[WQE_FLT]. */
        uint64_t la_psn                : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for TIM_LF_NRSPERR_INT[LA_PSN]. */
        uint64_t wqe_psn               : 1;  /**< [  4:  4](R/W1C/H) Reads or clears enable for TIM_LF_NRSPERR_INT[WQE_PSN]. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tim_lf_nrsperr_int_ena_w1c_s cn; */
};
typedef union cavm_tim_lf_nrsperr_int_ena_w1c cavm_tim_lf_nrsperr_int_ena_w1c_t;

#define CAVM_TIM_LF_NRSPERR_INT_ENA_W1C CAVM_TIM_LF_NRSPERR_INT_ENA_W1C_FUNC()
static inline uint64_t CAVM_TIM_LF_NRSPERR_INT_ENA_W1C_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TIM_LF_NRSPERR_INT_ENA_W1C_FUNC(void)
{
    return 0x840200900218ll;
}

#define typedef_CAVM_TIM_LF_NRSPERR_INT_ENA_W1C cavm_tim_lf_nrsperr_int_ena_w1c_t
#define bustype_CAVM_TIM_LF_NRSPERR_INT_ENA_W1C CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_TIM_LF_NRSPERR_INT_ENA_W1C "TIM_LF_NRSPERR_INT_ENA_W1C"
#define device_bar_CAVM_TIM_LF_NRSPERR_INT_ENA_W1C 0x2 /* RVU_BAR2 */
#define busnum_CAVM_TIM_LF_NRSPERR_INT_ENA_W1C 0
#define arguments_CAVM_TIM_LF_NRSPERR_INT_ENA_W1C -1,-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) tim_lf_nrsperr_int_ena_w1s
 *
 * TIM NCB Response Error Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_tim_lf_nrsperr_int_ena_w1s
{
    uint64_t u;
    struct cavm_tim_lf_nrsperr_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t wqe_psn               : 1;  /**< [  4:  4](R/W1S/H) Reads or sets enable for TIM_LF_NRSPERR_INT[WQE_PSN]. */
        uint64_t la_psn                : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for TIM_LF_NRSPERR_INT[LA_PSN]. */
        uint64_t wqe_flt               : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for TIM_LF_NRSPERR_INT[WQE_FLT]. */
        uint64_t la_flt                : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for TIM_LF_NRSPERR_INT[LA_FLT]. */
        uint64_t stdn_flt              : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for TIM_LF_NRSPERR_INT[STDN_FLT]. */
#else /* Word 0 - Little Endian */
        uint64_t stdn_flt              : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for TIM_LF_NRSPERR_INT[STDN_FLT]. */
        uint64_t la_flt                : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for TIM_LF_NRSPERR_INT[LA_FLT]. */
        uint64_t wqe_flt               : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for TIM_LF_NRSPERR_INT[WQE_FLT]. */
        uint64_t la_psn                : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for TIM_LF_NRSPERR_INT[LA_PSN]. */
        uint64_t wqe_psn               : 1;  /**< [  4:  4](R/W1S/H) Reads or sets enable for TIM_LF_NRSPERR_INT[WQE_PSN]. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tim_lf_nrsperr_int_ena_w1s_s cn; */
};
typedef union cavm_tim_lf_nrsperr_int_ena_w1s cavm_tim_lf_nrsperr_int_ena_w1s_t;

#define CAVM_TIM_LF_NRSPERR_INT_ENA_W1S CAVM_TIM_LF_NRSPERR_INT_ENA_W1S_FUNC()
static inline uint64_t CAVM_TIM_LF_NRSPERR_INT_ENA_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TIM_LF_NRSPERR_INT_ENA_W1S_FUNC(void)
{
    return 0x840200900210ll;
}

#define typedef_CAVM_TIM_LF_NRSPERR_INT_ENA_W1S cavm_tim_lf_nrsperr_int_ena_w1s_t
#define bustype_CAVM_TIM_LF_NRSPERR_INT_ENA_W1S CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_TIM_LF_NRSPERR_INT_ENA_W1S "TIM_LF_NRSPERR_INT_ENA_W1S"
#define device_bar_CAVM_TIM_LF_NRSPERR_INT_ENA_W1S 0x2 /* RVU_BAR2 */
#define busnum_CAVM_TIM_LF_NRSPERR_INT_ENA_W1S 0
#define arguments_CAVM_TIM_LF_NRSPERR_INT_ENA_W1S -1,-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) tim_lf_nrsperr_int_w1s
 *
 * TIM LF NCB Response Error Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_tim_lf_nrsperr_int_w1s
{
    uint64_t u;
    struct cavm_tim_lf_nrsperr_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t wqe_psn               : 1;  /**< [  4:  4](R/W1S/H) Reads or sets TIM_LF_NRSPERR_INT[WQE_PSN]. */
        uint64_t la_psn                : 1;  /**< [  3:  3](R/W1S/H) Reads or sets TIM_LF_NRSPERR_INT[LA_PSN]. */
        uint64_t wqe_flt               : 1;  /**< [  2:  2](R/W1S/H) Reads or sets TIM_LF_NRSPERR_INT[WQE_FLT]. */
        uint64_t la_flt                : 1;  /**< [  1:  1](R/W1S/H) Reads or sets TIM_LF_NRSPERR_INT[LA_FLT]. */
        uint64_t stdn_flt              : 1;  /**< [  0:  0](R/W1S/H) Reads or sets TIM_LF_NRSPERR_INT[STDN_FLT]. */
#else /* Word 0 - Little Endian */
        uint64_t stdn_flt              : 1;  /**< [  0:  0](R/W1S/H) Reads or sets TIM_LF_NRSPERR_INT[STDN_FLT]. */
        uint64_t la_flt                : 1;  /**< [  1:  1](R/W1S/H) Reads or sets TIM_LF_NRSPERR_INT[LA_FLT]. */
        uint64_t wqe_flt               : 1;  /**< [  2:  2](R/W1S/H) Reads or sets TIM_LF_NRSPERR_INT[WQE_FLT]. */
        uint64_t la_psn                : 1;  /**< [  3:  3](R/W1S/H) Reads or sets TIM_LF_NRSPERR_INT[LA_PSN]. */
        uint64_t wqe_psn               : 1;  /**< [  4:  4](R/W1S/H) Reads or sets TIM_LF_NRSPERR_INT[WQE_PSN]. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tim_lf_nrsperr_int_w1s_s cn; */
};
typedef union cavm_tim_lf_nrsperr_int_w1s cavm_tim_lf_nrsperr_int_w1s_t;

#define CAVM_TIM_LF_NRSPERR_INT_W1S CAVM_TIM_LF_NRSPERR_INT_W1S_FUNC()
static inline uint64_t CAVM_TIM_LF_NRSPERR_INT_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TIM_LF_NRSPERR_INT_W1S_FUNC(void)
{
    return 0x840200900208ll;
}

#define typedef_CAVM_TIM_LF_NRSPERR_INT_W1S cavm_tim_lf_nrsperr_int_w1s_t
#define bustype_CAVM_TIM_LF_NRSPERR_INT_W1S CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_TIM_LF_NRSPERR_INT_W1S "TIM_LF_NRSPERR_INT_W1S"
#define device_bar_CAVM_TIM_LF_NRSPERR_INT_W1S 0x2 /* RVU_BAR2 */
#define busnum_CAVM_TIM_LF_NRSPERR_INT_W1S 0
#define arguments_CAVM_TIM_LF_NRSPERR_INT_W1S -1,-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) tim_lf_ras_int
 *
 * TIM LF NCB Response Poison Interrupt Register
 */
union cavm_tim_lf_ras_int
{
    uint64_t u;
    struct cavm_tim_lf_ras_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t wqe_psn               : 1;  /**< [  1:  1](R/W1C/H) WQE poison flag. Set when a poisoned WQE response was detected. */
        uint64_t la_psn                : 1;  /**< [  0:  0](R/W1C/H) Load and atomic poison flag. Set when a poisoned non-WQE load or atomic response was detected. */
#else /* Word 0 - Little Endian */
        uint64_t la_psn                : 1;  /**< [  0:  0](R/W1C/H) Load and atomic poison flag. Set when a poisoned non-WQE load or atomic response was detected. */
        uint64_t wqe_psn               : 1;  /**< [  1:  1](R/W1C/H) WQE poison flag. Set when a poisoned WQE response was detected. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tim_lf_ras_int_s cn; */
};
typedef union cavm_tim_lf_ras_int cavm_tim_lf_ras_int_t;

#define CAVM_TIM_LF_RAS_INT CAVM_TIM_LF_RAS_INT_FUNC()
static inline uint64_t CAVM_TIM_LF_RAS_INT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TIM_LF_RAS_INT_FUNC(void)
{
    return 0x840200900300ll;
}

#define typedef_CAVM_TIM_LF_RAS_INT cavm_tim_lf_ras_int_t
#define bustype_CAVM_TIM_LF_RAS_INT CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_TIM_LF_RAS_INT "TIM_LF_RAS_INT"
#define device_bar_CAVM_TIM_LF_RAS_INT 0x2 /* RVU_BAR2 */
#define busnum_CAVM_TIM_LF_RAS_INT 0
#define arguments_CAVM_TIM_LF_RAS_INT -1,-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) tim_lf_ras_int_ena_w1c
 *
 * TIM LF NCB Response Poison Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_tim_lf_ras_int_ena_w1c
{
    uint64_t u;
    struct cavm_tim_lf_ras_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t wqe_psn               : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for TIM_LF_RAS_INT[WQE_PSN]. */
        uint64_t la_psn                : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for TIM_LF_RAS_INT[LA_PSN]. */
#else /* Word 0 - Little Endian */
        uint64_t la_psn                : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for TIM_LF_RAS_INT[LA_PSN]. */
        uint64_t wqe_psn               : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for TIM_LF_RAS_INT[WQE_PSN]. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tim_lf_ras_int_ena_w1c_s cn; */
};
typedef union cavm_tim_lf_ras_int_ena_w1c cavm_tim_lf_ras_int_ena_w1c_t;

#define CAVM_TIM_LF_RAS_INT_ENA_W1C CAVM_TIM_LF_RAS_INT_ENA_W1C_FUNC()
static inline uint64_t CAVM_TIM_LF_RAS_INT_ENA_W1C_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TIM_LF_RAS_INT_ENA_W1C_FUNC(void)
{
    return 0x840200900318ll;
}

#define typedef_CAVM_TIM_LF_RAS_INT_ENA_W1C cavm_tim_lf_ras_int_ena_w1c_t
#define bustype_CAVM_TIM_LF_RAS_INT_ENA_W1C CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_TIM_LF_RAS_INT_ENA_W1C "TIM_LF_RAS_INT_ENA_W1C"
#define device_bar_CAVM_TIM_LF_RAS_INT_ENA_W1C 0x2 /* RVU_BAR2 */
#define busnum_CAVM_TIM_LF_RAS_INT_ENA_W1C 0
#define arguments_CAVM_TIM_LF_RAS_INT_ENA_W1C -1,-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) tim_lf_ras_int_ena_w1s
 *
 * TIM NCB Response Poison Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_tim_lf_ras_int_ena_w1s
{
    uint64_t u;
    struct cavm_tim_lf_ras_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t wqe_psn               : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for TIM_LF_RAS_INT[WQE_PSN]. */
        uint64_t la_psn                : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for TIM_LF_RAS_INT[LA_PSN]. */
#else /* Word 0 - Little Endian */
        uint64_t la_psn                : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for TIM_LF_RAS_INT[LA_PSN]. */
        uint64_t wqe_psn               : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for TIM_LF_RAS_INT[WQE_PSN]. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tim_lf_ras_int_ena_w1s_s cn; */
};
typedef union cavm_tim_lf_ras_int_ena_w1s cavm_tim_lf_ras_int_ena_w1s_t;

#define CAVM_TIM_LF_RAS_INT_ENA_W1S CAVM_TIM_LF_RAS_INT_ENA_W1S_FUNC()
static inline uint64_t CAVM_TIM_LF_RAS_INT_ENA_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TIM_LF_RAS_INT_ENA_W1S_FUNC(void)
{
    return 0x840200900310ll;
}

#define typedef_CAVM_TIM_LF_RAS_INT_ENA_W1S cavm_tim_lf_ras_int_ena_w1s_t
#define bustype_CAVM_TIM_LF_RAS_INT_ENA_W1S CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_TIM_LF_RAS_INT_ENA_W1S "TIM_LF_RAS_INT_ENA_W1S"
#define device_bar_CAVM_TIM_LF_RAS_INT_ENA_W1S 0x2 /* RVU_BAR2 */
#define busnum_CAVM_TIM_LF_RAS_INT_ENA_W1S 0
#define arguments_CAVM_TIM_LF_RAS_INT_ENA_W1S -1,-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) tim_lf_ras_int_w1s
 *
 * TIM LF NCB Response Poison Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_tim_lf_ras_int_w1s
{
    uint64_t u;
    struct cavm_tim_lf_ras_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t wqe_psn               : 1;  /**< [  1:  1](R/W1S/H) Reads or sets TIM_LF_RAS_INT[WQE_PSN]. */
        uint64_t la_psn                : 1;  /**< [  0:  0](R/W1S/H) Reads or sets TIM_LF_RAS_INT[LA_PSN]. */
#else /* Word 0 - Little Endian */
        uint64_t la_psn                : 1;  /**< [  0:  0](R/W1S/H) Reads or sets TIM_LF_RAS_INT[LA_PSN]. */
        uint64_t wqe_psn               : 1;  /**< [  1:  1](R/W1S/H) Reads or sets TIM_LF_RAS_INT[WQE_PSN]. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tim_lf_ras_int_w1s_s cn; */
};
typedef union cavm_tim_lf_ras_int_w1s cavm_tim_lf_ras_int_w1s_t;

#define CAVM_TIM_LF_RAS_INT_W1S CAVM_TIM_LF_RAS_INT_W1S_FUNC()
static inline uint64_t CAVM_TIM_LF_RAS_INT_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TIM_LF_RAS_INT_W1S_FUNC(void)
{
    return 0x840200900308ll;
}

#define typedef_CAVM_TIM_LF_RAS_INT_W1S cavm_tim_lf_ras_int_w1s_t
#define bustype_CAVM_TIM_LF_RAS_INT_W1S CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_TIM_LF_RAS_INT_W1S "TIM_LF_RAS_INT_W1S"
#define device_bar_CAVM_TIM_LF_RAS_INT_W1S 0x2 /* RVU_BAR2 */
#define busnum_CAVM_TIM_LF_RAS_INT_W1S 0
#define arguments_CAVM_TIM_LF_RAS_INT_W1S -1,-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) tim_lf_ring_aura
 *
 * TIM Ring Aura Registers
 */
union cavm_tim_lf_ring_aura
{
    uint64_t u;
    struct cavm_tim_lf_ring_aura_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_20_63        : 44;
        uint64_t aura                  : 20; /**< [ 19:  0](R/W) Guest-aura number used to free and return chunks to. Bits \<15:12\> must be zero. */
#else /* Word 0 - Little Endian */
        uint64_t aura                  : 20; /**< [ 19:  0](R/W) Guest-aura number used to free and return chunks to. Bits \<15:12\> must be zero. */
        uint64_t reserved_20_63        : 44;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tim_lf_ring_aura_s cn; */
};
typedef union cavm_tim_lf_ring_aura cavm_tim_lf_ring_aura_t;

#define CAVM_TIM_LF_RING_AURA CAVM_TIM_LF_RING_AURA_FUNC()
static inline uint64_t CAVM_TIM_LF_RING_AURA_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TIM_LF_RING_AURA_FUNC(void)
{
    return 0x840200900000ll;
}

#define typedef_CAVM_TIM_LF_RING_AURA cavm_tim_lf_ring_aura_t
#define bustype_CAVM_TIM_LF_RING_AURA CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_TIM_LF_RING_AURA "TIM_LF_RING_AURA"
#define device_bar_CAVM_TIM_LF_RING_AURA 0x2 /* RVU_BAR2 */
#define busnum_CAVM_TIM_LF_RING_AURA 0
#define arguments_CAVM_TIM_LF_RING_AURA -1,-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) tim_lf_ring_base
 *
 * TIM Ring Base Registers
 */
union cavm_tim_lf_ring_base
{
    uint64_t u;
    struct cavm_tim_lf_ring_base_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t base                  : 48; /**< [ 52:  5](R/W) IOVA pointer to bucket 0. */
        uint64_t reserved_0_4          : 5;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_4          : 5;
        uint64_t base                  : 48; /**< [ 52:  5](R/W) IOVA pointer to bucket 0. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tim_lf_ring_base_s cn; */
};
typedef union cavm_tim_lf_ring_base cavm_tim_lf_ring_base_t;

#define CAVM_TIM_LF_RING_BASE CAVM_TIM_LF_RING_BASE_FUNC()
static inline uint64_t CAVM_TIM_LF_RING_BASE_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TIM_LF_RING_BASE_FUNC(void)
{
    return 0x840200900130ll;
}

#define typedef_CAVM_TIM_LF_RING_BASE cavm_tim_lf_ring_base_t
#define bustype_CAVM_TIM_LF_RING_BASE CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_TIM_LF_RING_BASE "TIM_LF_RING_BASE"
#define device_bar_CAVM_TIM_LF_RING_BASE 0x2 /* RVU_BAR2 */
#define busnum_CAVM_TIM_LF_RING_BASE 0
#define arguments_CAVM_TIM_LF_RING_BASE -1,-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) tim_lf_ring_ctl0
 *
 * TIM Ring Control 0 Registers
 * This register is a read-only copy of TIM_AF_RING()_CTL0.
 */
union cavm_tim_lf_ring_ctl0
{
    uint64_t u;
    struct cavm_tim_lf_ring_ctl0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t expire_offset         : 32; /**< [ 63: 32](RO/H) Read-only TIM_AF_RING(0..255)_CTL0[EXPIRE_OFFSET]. */
        uint64_t interval              : 32; /**< [ 31:  0](RO) Read-only TIM_AF_RING(0..255)_CTL0[INTERVAL]. */
#else /* Word 0 - Little Endian */
        uint64_t interval              : 32; /**< [ 31:  0](RO) Read-only TIM_AF_RING(0..255)_CTL0[INTERVAL]. */
        uint64_t expire_offset         : 32; /**< [ 63: 32](RO/H) Read-only TIM_AF_RING(0..255)_CTL0[EXPIRE_OFFSET]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tim_lf_ring_ctl0_s cn; */
};
typedef union cavm_tim_lf_ring_ctl0 cavm_tim_lf_ring_ctl0_t;

#define CAVM_TIM_LF_RING_CTL0 CAVM_TIM_LF_RING_CTL0_FUNC()
static inline uint64_t CAVM_TIM_LF_RING_CTL0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TIM_LF_RING_CTL0_FUNC(void)
{
    return 0x840200900100ll;
}

#define typedef_CAVM_TIM_LF_RING_CTL0 cavm_tim_lf_ring_ctl0_t
#define bustype_CAVM_TIM_LF_RING_CTL0 CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_TIM_LF_RING_CTL0 "TIM_LF_RING_CTL0"
#define device_bar_CAVM_TIM_LF_RING_CTL0 0x2 /* RVU_BAR2 */
#define busnum_CAVM_TIM_LF_RING_CTL0 0
#define arguments_CAVM_TIM_LF_RING_CTL0 -1,-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) tim_lf_ring_ctl1
 *
 * TIM Ring Control 1 Registers
 * This register is a read-only copy of TIM_AF_RING()_CTL1.
 */
union cavm_tim_lf_ring_ctl1
{
    uint64_t u;
    struct cavm_tim_lf_ring_ctl1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_54_63        : 10;
        uint64_t be                    : 1;  /**< [ 53: 53](RO) Read-only TIM_AF_RING(0..255)_CTL1[BE]. */
        uint64_t reserved_51_52        : 2;
        uint64_t rcf_busy              : 1;  /**< [ 50: 50](RO/H) Read-only TIM_AF_RING(0..255)_CTL1[RCF_BUSY]. */
        uint64_t ring_pri              : 1;  /**< [ 49: 49](RO) Read-only TIM_AF_RING(0..255)_CTL1[RING_PRI]. */
        uint64_t lock_en               : 1;  /**< [ 48: 48](RO) Read-only TIM_AF_RING(0..255)_CTL1[LOCK_EN]. */
        uint64_t ena                   : 1;  /**< [ 47: 47](RO/H) Read-only TIM_AF_RING(0..255)_CTL1[ENA]. */
        uint64_t reserved_46           : 1;
        uint64_t ena_prd               : 1;  /**< [ 45: 45](RO) Read-only TIM_AF_RING(0..255)_CTL1[ENA_PRD]. */
        uint64_t ena_ldwb              : 1;  /**< [ 44: 44](RO) Read-only TIM_AF_RING(0..255)_CTL1[ENA_LDWB]. */
        uint64_t ena_dfb               : 1;  /**< [ 43: 43](RO) Read-only TIM_AF_RING(0..255)_CTL1[ENA_DFB]. */
        uint64_t clk_src               : 3;  /**< [ 42: 40](RO) Read-only TIM_AF_RING(0..255)_CTL1[CLK_SRC]. */
        uint64_t bucket                : 20; /**< [ 39: 20](RO/H) Read-only TIM_AF_RING(0..255)_CTL1[BUCKET]. */
        uint64_t bsize                 : 20; /**< [ 19:  0](RO) Read-only TIM_AF_RING(0..255)_CTL1[BSIZE]. */
#else /* Word 0 - Little Endian */
        uint64_t bsize                 : 20; /**< [ 19:  0](RO) Read-only TIM_AF_RING(0..255)_CTL1[BSIZE]. */
        uint64_t bucket                : 20; /**< [ 39: 20](RO/H) Read-only TIM_AF_RING(0..255)_CTL1[BUCKET]. */
        uint64_t clk_src               : 3;  /**< [ 42: 40](RO) Read-only TIM_AF_RING(0..255)_CTL1[CLK_SRC]. */
        uint64_t ena_dfb               : 1;  /**< [ 43: 43](RO) Read-only TIM_AF_RING(0..255)_CTL1[ENA_DFB]. */
        uint64_t ena_ldwb              : 1;  /**< [ 44: 44](RO) Read-only TIM_AF_RING(0..255)_CTL1[ENA_LDWB]. */
        uint64_t ena_prd               : 1;  /**< [ 45: 45](RO) Read-only TIM_AF_RING(0..255)_CTL1[ENA_PRD]. */
        uint64_t reserved_46           : 1;
        uint64_t ena                   : 1;  /**< [ 47: 47](RO/H) Read-only TIM_AF_RING(0..255)_CTL1[ENA]. */
        uint64_t lock_en               : 1;  /**< [ 48: 48](RO) Read-only TIM_AF_RING(0..255)_CTL1[LOCK_EN]. */
        uint64_t ring_pri              : 1;  /**< [ 49: 49](RO) Read-only TIM_AF_RING(0..255)_CTL1[RING_PRI]. */
        uint64_t rcf_busy              : 1;  /**< [ 50: 50](RO/H) Read-only TIM_AF_RING(0..255)_CTL1[RCF_BUSY]. */
        uint64_t reserved_51_52        : 2;
        uint64_t be                    : 1;  /**< [ 53: 53](RO) Read-only TIM_AF_RING(0..255)_CTL1[BE]. */
        uint64_t reserved_54_63        : 10;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tim_lf_ring_ctl1_s cn; */
};
typedef union cavm_tim_lf_ring_ctl1 cavm_tim_lf_ring_ctl1_t;

#define CAVM_TIM_LF_RING_CTL1 CAVM_TIM_LF_RING_CTL1_FUNC()
static inline uint64_t CAVM_TIM_LF_RING_CTL1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TIM_LF_RING_CTL1_FUNC(void)
{
    return 0x840200900110ll;
}

#define typedef_CAVM_TIM_LF_RING_CTL1 cavm_tim_lf_ring_ctl1_t
#define bustype_CAVM_TIM_LF_RING_CTL1 CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_TIM_LF_RING_CTL1 "TIM_LF_RING_CTL1"
#define device_bar_CAVM_TIM_LF_RING_CTL1 0x2 /* RVU_BAR2 */
#define busnum_CAVM_TIM_LF_RING_CTL1 0
#define arguments_CAVM_TIM_LF_RING_CTL1 -1,-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) tim_lf_ring_ctl2
 *
 * TIM Ring Control 2 Registers
 * This register is a read-only copy of TIM_AF_RING()_CTL2.
 */
union cavm_tim_lf_ring_ctl2
{
    uint64_t u;
    struct cavm_tim_lf_ring_ctl2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t csize                 : 13; /**< [ 52: 40](RO) Read-only TIM_AF_RING(0..255)_CTL2[CSIZE]. */
        uint64_t reserved_0_39         : 40;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_39         : 40;
        uint64_t csize                 : 13; /**< [ 52: 40](RO) Read-only TIM_AF_RING(0..255)_CTL2[CSIZE]. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tim_lf_ring_ctl2_s cn; */
};
typedef union cavm_tim_lf_ring_ctl2 cavm_tim_lf_ring_ctl2_t;

#define CAVM_TIM_LF_RING_CTL2 CAVM_TIM_LF_RING_CTL2_FUNC()
static inline uint64_t CAVM_TIM_LF_RING_CTL2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TIM_LF_RING_CTL2_FUNC(void)
{
    return 0x840200900120ll;
}

#define typedef_CAVM_TIM_LF_RING_CTL2 cavm_tim_lf_ring_ctl2_t
#define bustype_CAVM_TIM_LF_RING_CTL2 CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_TIM_LF_RING_CTL2 "TIM_LF_RING_CTL2"
#define device_bar_CAVM_TIM_LF_RING_CTL2 0x2 /* RVU_BAR2 */
#define busnum_CAVM_TIM_LF_RING_CTL2 0
#define arguments_CAVM_TIM_LF_RING_CTL2 -1,-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) tim_lf_ring_rel
 *
 * TIM Ring Relative Position Register
 * Current positions and status of the TIM walker in both time and ring position,
 * for easy synchronization with software.
 */
union cavm_tim_lf_ring_rel
{
    uint64_t u;
    struct cavm_tim_lf_ring_rel_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cur_bucket            : 20; /**< [ 63: 44](RO/H) Current bucket. Indicates the ring's current bucket. See TIM_AF_RING()_CTL1[BUCKET]. */
        uint64_t late_count_msbs       : 1;  /**< [ 43: 43](RO/H) Set when TIM_AF_RING()_LATE[COUNT]\<19:11\> != 0x0. Software should read
                                                                 TIM_AF_RING()_LATE[COUNT] to find how many buckets a ring is late. */
        uint64_t late_count            : 11; /**< [ 42: 32](RO/H) Identical to TIM_AF_RING()_LATE[COUNT]\<10:0\>. If [LATE_COUNT_MSBS] is zero,
                                                                 it indicates how many bucket are late to be scheduled per ring. See the HRM body
                                                                 text with regards to how software should consider TIM_AF_RING()_LATE[COUNT] when
                                                                 inserting an entry. */
        uint64_t timercount            : 32; /**< [ 31:  0](RO/H) Timer count indicates how many timer ticks are left until the interval
                                                                 expiration, calculated as TIM_AF_RING()_CTL0[EXPIRE_OFFSET] minus current time
                                                                 (TIM_LF_FR_RN_TENNS, TIM_LF_FR_RN_GPIOS, TIM_LF_FR_RN_GTI, TIM_LF_FR_RN_PTP,
                                                                 TIM_LF_FR_RN_BTS).

                                                                 Once TIM_AF_RING()_CTL1[ENA] = 1, [TIMERCOUNT] will be observed to count down timer
                                                                 ticks. When [TIMERCOUNT] reaches 0x0, the ring's interval expired and the
                                                                 hardware forces a bucket traversal (and increments [LATE_COUNT]).

                                                                 Typical initialization value should be interval/constant; Marvell recommends that
                                                                 the constant be unique per ring. This creates an offset between the rings.
                                                                 [TIMERCOUNT] becomes and remains unpredictable whenever TIM_AF_RING()_CTL1[ENA] = 0
                                                                 or TIM_AF_RING()_CTL1[CLK_SRC] changes, until TIM_AF_RING()_CTL0 is updated. */
#else /* Word 0 - Little Endian */
        uint64_t timercount            : 32; /**< [ 31:  0](RO/H) Timer count indicates how many timer ticks are left until the interval
                                                                 expiration, calculated as TIM_AF_RING()_CTL0[EXPIRE_OFFSET] minus current time
                                                                 (TIM_LF_FR_RN_TENNS, TIM_LF_FR_RN_GPIOS, TIM_LF_FR_RN_GTI, TIM_LF_FR_RN_PTP,
                                                                 TIM_LF_FR_RN_BTS).

                                                                 Once TIM_AF_RING()_CTL1[ENA] = 1, [TIMERCOUNT] will be observed to count down timer
                                                                 ticks. When [TIMERCOUNT] reaches 0x0, the ring's interval expired and the
                                                                 hardware forces a bucket traversal (and increments [LATE_COUNT]).

                                                                 Typical initialization value should be interval/constant; Marvell recommends that
                                                                 the constant be unique per ring. This creates an offset between the rings.
                                                                 [TIMERCOUNT] becomes and remains unpredictable whenever TIM_AF_RING()_CTL1[ENA] = 0
                                                                 or TIM_AF_RING()_CTL1[CLK_SRC] changes, until TIM_AF_RING()_CTL0 is updated. */
        uint64_t late_count            : 11; /**< [ 42: 32](RO/H) Identical to TIM_AF_RING()_LATE[COUNT]\<10:0\>. If [LATE_COUNT_MSBS] is zero,
                                                                 it indicates how many bucket are late to be scheduled per ring. See the HRM body
                                                                 text with regards to how software should consider TIM_AF_RING()_LATE[COUNT] when
                                                                 inserting an entry. */
        uint64_t late_count_msbs       : 1;  /**< [ 43: 43](RO/H) Set when TIM_AF_RING()_LATE[COUNT]\<19:11\> != 0x0. Software should read
                                                                 TIM_AF_RING()_LATE[COUNT] to find how many buckets a ring is late. */
        uint64_t cur_bucket            : 20; /**< [ 63: 44](RO/H) Current bucket. Indicates the ring's current bucket. See TIM_AF_RING()_CTL1[BUCKET]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tim_lf_ring_rel_s cn; */
};
typedef union cavm_tim_lf_ring_rel cavm_tim_lf_ring_rel_t;

#define CAVM_TIM_LF_RING_REL CAVM_TIM_LF_RING_REL_FUNC()
static inline uint64_t CAVM_TIM_LF_RING_REL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TIM_LF_RING_REL_FUNC(void)
{
    return 0x840200900400ll;
}

#define typedef_CAVM_TIM_LF_RING_REL cavm_tim_lf_ring_rel_t
#define bustype_CAVM_TIM_LF_RING_REL CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_TIM_LF_RING_REL "TIM_LF_RING_REL"
#define device_bar_CAVM_TIM_LF_RING_REL 0x2 /* RVU_BAR2 */
#define busnum_CAVM_TIM_LF_RING_REL 0
#define arguments_CAVM_TIM_LF_RING_REL -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) tim_priv_af_int_cfg
 *
 * TIM Privileged AF Interrupt Configuration Registers
 */
union cavm_tim_priv_af_int_cfg
{
    uint64_t u;
    struct cavm_tim_priv_af_int_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_20_63        : 44;
        uint64_t msix_size             : 8;  /**< [ 19: 12](RO) Number of interrupt vectors enumerated by TIM_AF_INT_VEC_E. */
        uint64_t reserved_11           : 1;
        uint64_t msix_offset           : 11; /**< [ 10:  0](R/W) MSI-X offset. Offset of AF interrupt vectors enumerated by
                                                                 TIM_AF_INT_VEC_E in RVU PF(0)'s MSI-X table. This offset is added to each
                                                                 enumerated value to obtain the corresponding MSI-X vector index. The
                                                                 highest enumerated value plus [MSIX_OFFSET] must be less than or equal to
                                                                 RVU_PRIV_PF(0)_MSIX_CFG[PF_MSIXT_SIZEM1]. */
#else /* Word 0 - Little Endian */
        uint64_t msix_offset           : 11; /**< [ 10:  0](R/W) MSI-X offset. Offset of AF interrupt vectors enumerated by
                                                                 TIM_AF_INT_VEC_E in RVU PF(0)'s MSI-X table. This offset is added to each
                                                                 enumerated value to obtain the corresponding MSI-X vector index. The
                                                                 highest enumerated value plus [MSIX_OFFSET] must be less than or equal to
                                                                 RVU_PRIV_PF(0)_MSIX_CFG[PF_MSIXT_SIZEM1]. */
        uint64_t reserved_11           : 1;
        uint64_t msix_size             : 8;  /**< [ 19: 12](RO) Number of interrupt vectors enumerated by TIM_AF_INT_VEC_E. */
        uint64_t reserved_20_63        : 44;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tim_priv_af_int_cfg_s cn; */
};
typedef union cavm_tim_priv_af_int_cfg cavm_tim_priv_af_int_cfg_t;

#define CAVM_TIM_PRIV_AF_INT_CFG CAVM_TIM_PRIV_AF_INT_CFG_FUNC()
static inline uint64_t CAVM_TIM_PRIV_AF_INT_CFG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TIM_PRIV_AF_INT_CFG_FUNC(void)
{
    return 0x840090022000ll;
}

#define typedef_CAVM_TIM_PRIV_AF_INT_CFG cavm_tim_priv_af_int_cfg_t
#define bustype_CAVM_TIM_PRIV_AF_INT_CFG CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_TIM_PRIV_AF_INT_CFG "TIM_PRIV_AF_INT_CFG"
#define device_bar_CAVM_TIM_PRIV_AF_INT_CFG 0x0 /* RVU_BAR0 */
#define busnum_CAVM_TIM_PRIV_AF_INT_CFG 0
#define arguments_CAVM_TIM_PRIV_AF_INT_CFG -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) tim_priv_lf#_cfg
 *
 * TIM Privileged LF Configuration Registers
 * These registers allow each TIM local function (LF) to be provisioned to a VF/PF
 * slot for RVU. See also TIM_AF_RVU_LF_CFG_DEBUG.
 */
union cavm_tim_priv_lfx_cfg
{
    uint64_t u;
    struct cavm_tim_priv_lfx_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ena                   : 1;  /**< [ 63: 63](R/W) Enable. When set, the LF is enabled and provisioned to the VF/PF slot
                                                                 selected by [PF_FUNC] and [SLOT]. When clear, the LF is not provisioned.

                                                                 LF to slot mapping must be 1-to-1. Thus, each enabled LF must be provisioned
                                                                 to a unique {[PF_FUNC], [SLOT]} combination. */
        uint64_t reserved_24_62        : 39;
        uint64_t pf_func               : 16; /**< [ 23:  8](R/W) RVU VF/PF to which the LF is provisioned. Format defined by RVU_PF_FUNC_S.
                                                                 Interrupts from the LF are delivered to the selected PF/VF. */
        uint64_t slot                  : 8;  /**< [  7:  0](R/W) Slot within the VF/PF selected by [PF_FUNC] to which the LF is
                                                                 provisioned. */
#else /* Word 0 - Little Endian */
        uint64_t slot                  : 8;  /**< [  7:  0](R/W) Slot within the VF/PF selected by [PF_FUNC] to which the LF is
                                                                 provisioned. */
        uint64_t pf_func               : 16; /**< [ 23:  8](R/W) RVU VF/PF to which the LF is provisioned. Format defined by RVU_PF_FUNC_S.
                                                                 Interrupts from the LF are delivered to the selected PF/VF. */
        uint64_t reserved_24_62        : 39;
        uint64_t ena                   : 1;  /**< [ 63: 63](R/W) Enable. When set, the LF is enabled and provisioned to the VF/PF slot
                                                                 selected by [PF_FUNC] and [SLOT]. When clear, the LF is not provisioned.

                                                                 LF to slot mapping must be 1-to-1. Thus, each enabled LF must be provisioned
                                                                 to a unique {[PF_FUNC], [SLOT]} combination. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tim_priv_lfx_cfg_s cn; */
};
typedef union cavm_tim_priv_lfx_cfg cavm_tim_priv_lfx_cfg_t;

static inline uint64_t CAVM_TIM_PRIV_LFX_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TIM_PRIV_LFX_CFG(uint64_t a)
{
    if (a<=255)
        return 0x840090020000ll + 8ll * ((a) & 0xff);
    __cavm_csr_fatal("TIM_PRIV_LFX_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TIM_PRIV_LFX_CFG(a) cavm_tim_priv_lfx_cfg_t
#define bustype_CAVM_TIM_PRIV_LFX_CFG(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_TIM_PRIV_LFX_CFG(a) "TIM_PRIV_LFX_CFG"
#define device_bar_CAVM_TIM_PRIV_LFX_CFG(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_TIM_PRIV_LFX_CFG(a) (a)
#define arguments_CAVM_TIM_PRIV_LFX_CFG(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) tim_priv_lf#_int_cfg
 *
 * TIM Privileged LF Interrupt Configuration Registers
 */
union cavm_tim_priv_lfx_int_cfg
{
    uint64_t u;
    struct cavm_tim_priv_lfx_int_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_20_63        : 44;
        uint64_t msix_size             : 8;  /**< [ 19: 12](RO) Number of interrupt vectors enumerated by TIM_LF_INT_VEC_E. */
        uint64_t reserved_11           : 1;
        uint64_t msix_offset           : 11; /**< [ 10:  0](R/W) MSI-X offset. Offset of LF interrupt vectors enumerated by the block's
                                                                 TIM_LF_INT_VEC_E in the MSI-X table of the corresponding RVU VF/PF (see
                                                                 TIM_PRIV_LF()_CFG[PF_FUNC]). This offset is added to each enumerated value
                                                                 to obtain the corresponding MSI-X vector index. The highest enumerated
                                                                 value plus [MSIX_OFFSET] must be less than or equal to
                                                                 RVU_PRIV_PF()_MSIX_CFG[PF_MSIXT_SIZEM1,VF_MSIXT_SIZEM1]. */
#else /* Word 0 - Little Endian */
        uint64_t msix_offset           : 11; /**< [ 10:  0](R/W) MSI-X offset. Offset of LF interrupt vectors enumerated by the block's
                                                                 TIM_LF_INT_VEC_E in the MSI-X table of the corresponding RVU VF/PF (see
                                                                 TIM_PRIV_LF()_CFG[PF_FUNC]). This offset is added to each enumerated value
                                                                 to obtain the corresponding MSI-X vector index. The highest enumerated
                                                                 value plus [MSIX_OFFSET] must be less than or equal to
                                                                 RVU_PRIV_PF()_MSIX_CFG[PF_MSIXT_SIZEM1,VF_MSIXT_SIZEM1]. */
        uint64_t reserved_11           : 1;
        uint64_t msix_size             : 8;  /**< [ 19: 12](RO) Number of interrupt vectors enumerated by TIM_LF_INT_VEC_E. */
        uint64_t reserved_20_63        : 44;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tim_priv_lfx_int_cfg_s cn; */
};
typedef union cavm_tim_priv_lfx_int_cfg cavm_tim_priv_lfx_int_cfg_t;

static inline uint64_t CAVM_TIM_PRIV_LFX_INT_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TIM_PRIV_LFX_INT_CFG(uint64_t a)
{
    if (a<=255)
        return 0x840090024000ll + 8ll * ((a) & 0xff);
    __cavm_csr_fatal("TIM_PRIV_LFX_INT_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TIM_PRIV_LFX_INT_CFG(a) cavm_tim_priv_lfx_int_cfg_t
#define bustype_CAVM_TIM_PRIV_LFX_INT_CFG(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_TIM_PRIV_LFX_INT_CFG(a) "TIM_PRIV_LFX_INT_CFG"
#define device_bar_CAVM_TIM_PRIV_LFX_INT_CFG(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_TIM_PRIV_LFX_INT_CFG(a) (a)
#define arguments_CAVM_TIM_PRIV_LFX_INT_CFG(a) (a),-1,-1,-1

#endif /* __CAVM_CSRS_TIM_H__ */
