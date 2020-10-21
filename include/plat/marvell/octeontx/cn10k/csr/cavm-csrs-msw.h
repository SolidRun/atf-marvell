#ifndef __CAVM_CSRS_MSW_H__
#define __CAVM_CSRS_MSW_H__
/* This file is auto-generated. Do not edit */

/***********************license start***********************************
* Copyright (C) 2018-2020 Marvell International Ltd.
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
 * Register (RSL) msw#_bp_test0
 *
 * INTERNAL: MSW Backpressure Test Register 0
 */
union cavm_mswx_bp_test0
{
    uint64_t u;
    struct cavm_mswx_bp_test0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t enable                : 12; /**< [ 63: 52](R/W) Enable test mode. For diagnostic use only.
                                                                 Internal:
                                                                 Once a bit is set, random backpressure is generated
                                                                 at the corresponding point to allow for more frequent backpressure.
                                                                 \<63\> C11 = Limit traffic out of the mesh south port from APA
                                                                 \<62\> C10 = Limit traffic out of the mesh south port from TADV
                                                                 \<61\> C9  = Limit traffic out of the mesh south port from TADH
                                                                 \<60\> C8  = Limit traffic out of the mesh south port from mesh east
                                                                 \<59\> C7  = Limit traffic out of the mesh south port from mesh west
                                                                 \<58\> C6  = Limit traffic out of the mesh south port from mesh north
                                                                 \<57\> C5  = Limit traffic out of the mesh north port from APA
                                                                 \<56\> C4  = Limit traffic out of the mesh north port from TADV
                                                                 \<55\> C3  = Limit traffic out of the mesh north port from TADH
                                                                 \<54\> C2  = Limit traffic out of the mesh north port from mesh west
                                                                 \<53\> C1  = Limit traffic out of the mesh north port from mesh east
                                                                 \<52\> C0  = Limit traffic out of the mesh north port from mesh south */
        uint64_t bp_cfg                : 24; /**< [ 51: 28](R/W) Backpressure weight. For diagnostic use only.
                                                                 Internal:
                                                                 There are 2 backpressure configuration bits per enable, with the two bits
                                                                 defined as 0x0=100% of the time, 0x1=75% of the time, 0x2=50% of the time,
                                                                 0x3=25% of the time.
                                                                   \<51:50\> = Config 11.
                                                                   \<49:48\> = Config 10.
                                                                   \<47:46\> = Config 9.
                                                                   \<45:44\> = Config 8.
                                                                   \<43:42\> = Config 7.
                                                                   \<41:40\> = Config 6.
                                                                   \<39:38\> = Config 5.
                                                                   \<37:36\> = Config 4.
                                                                   \<35:34\> = Config 3.
                                                                   \<33:32\> = Config 2.
                                                                   \<31:30\> = Config 1.
                                                                   \<29:28\> = Config 0. */
        uint64_t reserved_12_27        : 16;
        uint64_t lfsr_freq             : 12; /**< [ 11:  0](R/W) Test LFSR update period - clock cycles minus one. */
#else /* Word 0 - Little Endian */
        uint64_t lfsr_freq             : 12; /**< [ 11:  0](R/W) Test LFSR update period - clock cycles minus one. */
        uint64_t reserved_12_27        : 16;
        uint64_t bp_cfg                : 24; /**< [ 51: 28](R/W) Backpressure weight. For diagnostic use only.
                                                                 Internal:
                                                                 There are 2 backpressure configuration bits per enable, with the two bits
                                                                 defined as 0x0=100% of the time, 0x1=75% of the time, 0x2=50% of the time,
                                                                 0x3=25% of the time.
                                                                   \<51:50\> = Config 11.
                                                                   \<49:48\> = Config 10.
                                                                   \<47:46\> = Config 9.
                                                                   \<45:44\> = Config 8.
                                                                   \<43:42\> = Config 7.
                                                                   \<41:40\> = Config 6.
                                                                   \<39:38\> = Config 5.
                                                                   \<37:36\> = Config 4.
                                                                   \<35:34\> = Config 3.
                                                                   \<33:32\> = Config 2.
                                                                   \<31:30\> = Config 1.
                                                                   \<29:28\> = Config 0. */
        uint64_t enable                : 12; /**< [ 63: 52](R/W) Enable test mode. For diagnostic use only.
                                                                 Internal:
                                                                 Once a bit is set, random backpressure is generated
                                                                 at the corresponding point to allow for more frequent backpressure.
                                                                 \<63\> C11 = Limit traffic out of the mesh south port from APA
                                                                 \<62\> C10 = Limit traffic out of the mesh south port from TADV
                                                                 \<61\> C9  = Limit traffic out of the mesh south port from TADH
                                                                 \<60\> C8  = Limit traffic out of the mesh south port from mesh east
                                                                 \<59\> C7  = Limit traffic out of the mesh south port from mesh west
                                                                 \<58\> C6  = Limit traffic out of the mesh south port from mesh north
                                                                 \<57\> C5  = Limit traffic out of the mesh north port from APA
                                                                 \<56\> C4  = Limit traffic out of the mesh north port from TADV
                                                                 \<55\> C3  = Limit traffic out of the mesh north port from TADH
                                                                 \<54\> C2  = Limit traffic out of the mesh north port from mesh west
                                                                 \<53\> C1  = Limit traffic out of the mesh north port from mesh east
                                                                 \<52\> C0  = Limit traffic out of the mesh north port from mesh south */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mswx_bp_test0_s cn; */
};
typedef union cavm_mswx_bp_test0 cavm_mswx_bp_test0_t;

static inline uint64_t CAVM_MSWX_BP_TEST0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MSWX_BP_TEST0(uint64_t a)
{
    if (a<=23)
        return 0x87e300000018ll + 0x1000000ll * ((a) & 0x1f);
    __cavm_csr_fatal("MSWX_BP_TEST0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MSWX_BP_TEST0(a) cavm_mswx_bp_test0_t
#define bustype_CAVM_MSWX_BP_TEST0(a) CSR_TYPE_RSL
#define basename_CAVM_MSWX_BP_TEST0(a) "MSWX_BP_TEST0"
#define device_bar_CAVM_MSWX_BP_TEST0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MSWX_BP_TEST0(a) (a)
#define arguments_CAVM_MSWX_BP_TEST0(a) (a),-1,-1,-1

/**
 * Register (RSL) msw#_bp_test1
 *
 * INTERNAL: MSW Backpressure Test Register 1
 */
union cavm_mswx_bp_test1
{
    uint64_t u;
    struct cavm_mswx_bp_test1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t enable                : 12; /**< [ 63: 52](R/W) Enable test mode. For diagnostic use only.
                                                                 Internal:
                                                                 Once a bit is set, random backpressure is generated
                                                                 at the corresponding point to allow for more frequent backpressure.
                                                                 \<63\> C11 = Limit traffic out of the mesh west port from APA
                                                                 \<62\> C10 = Limit traffic out of the mesh west port from TADV
                                                                 \<61\> C9  = Limit traffic out of the mesh west port from TADH
                                                                 \<60\> C8  = Limit traffic out of the mesh west port from mesh south
                                                                 \<59\> C7  = Limit traffic out of the mesh west port from mesh north
                                                                 \<58\> C6  = Limit traffic out of the mesh west port from mesh east
                                                                 \<57\> C5  = Limit traffic out of the mesh east port from APA
                                                                 \<56\> C4  = Limit traffic out of the mesh east port from TADV
                                                                 \<55\> C3  = Limit traffic out of the mesh east port from TADH
                                                                 \<54\> C2  = Limit traffic out of the mesh east port from mesh north
                                                                 \<53\> C1  = Limit traffic out of the mesh east port from mesh south
                                                                 \<52\> C0  = Limit traffic out of the mesh east port from mesh west */
        uint64_t bp_cfg                : 24; /**< [ 51: 28](R/W) Backpressure weight. For diagnostic use only.
                                                                 Internal:
                                                                 There are 2 backpressure configuration bits per enable, with the two bits
                                                                 defined as 0x0=100% of the time, 0x1=75% of the time, 0x2=50% of the time,
                                                                 0x3=25% of the time.
                                                                   \<51:50\> = Config 11.
                                                                   \<49:48\> = Config 10.
                                                                   \<47:46\> = Config 9.
                                                                   \<45:44\> = Config 8.
                                                                   \<43:42\> = Config 7.
                                                                   \<41:40\> = Config 6.
                                                                   \<39:38\> = Config 5.
                                                                   \<37:36\> = Config 4.
                                                                   \<35:34\> = Config 3.
                                                                   \<33:32\> = Config 2.
                                                                   \<31:30\> = Config 1.
                                                                   \<29:28\> = Config 0. */
        uint64_t reserved_12_27        : 16;
        uint64_t lfsr_freq             : 12; /**< [ 11:  0](R/W) Test LFSR update period - clock cycles minus one. */
#else /* Word 0 - Little Endian */
        uint64_t lfsr_freq             : 12; /**< [ 11:  0](R/W) Test LFSR update period - clock cycles minus one. */
        uint64_t reserved_12_27        : 16;
        uint64_t bp_cfg                : 24; /**< [ 51: 28](R/W) Backpressure weight. For diagnostic use only.
                                                                 Internal:
                                                                 There are 2 backpressure configuration bits per enable, with the two bits
                                                                 defined as 0x0=100% of the time, 0x1=75% of the time, 0x2=50% of the time,
                                                                 0x3=25% of the time.
                                                                   \<51:50\> = Config 11.
                                                                   \<49:48\> = Config 10.
                                                                   \<47:46\> = Config 9.
                                                                   \<45:44\> = Config 8.
                                                                   \<43:42\> = Config 7.
                                                                   \<41:40\> = Config 6.
                                                                   \<39:38\> = Config 5.
                                                                   \<37:36\> = Config 4.
                                                                   \<35:34\> = Config 3.
                                                                   \<33:32\> = Config 2.
                                                                   \<31:30\> = Config 1.
                                                                   \<29:28\> = Config 0. */
        uint64_t enable                : 12; /**< [ 63: 52](R/W) Enable test mode. For diagnostic use only.
                                                                 Internal:
                                                                 Once a bit is set, random backpressure is generated
                                                                 at the corresponding point to allow for more frequent backpressure.
                                                                 \<63\> C11 = Limit traffic out of the mesh west port from APA
                                                                 \<62\> C10 = Limit traffic out of the mesh west port from TADV
                                                                 \<61\> C9  = Limit traffic out of the mesh west port from TADH
                                                                 \<60\> C8  = Limit traffic out of the mesh west port from mesh south
                                                                 \<59\> C7  = Limit traffic out of the mesh west port from mesh north
                                                                 \<58\> C6  = Limit traffic out of the mesh west port from mesh east
                                                                 \<57\> C5  = Limit traffic out of the mesh east port from APA
                                                                 \<56\> C4  = Limit traffic out of the mesh east port from TADV
                                                                 \<55\> C3  = Limit traffic out of the mesh east port from TADH
                                                                 \<54\> C2  = Limit traffic out of the mesh east port from mesh north
                                                                 \<53\> C1  = Limit traffic out of the mesh east port from mesh south
                                                                 \<52\> C0  = Limit traffic out of the mesh east port from mesh west */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mswx_bp_test1_s cn; */
};
typedef union cavm_mswx_bp_test1 cavm_mswx_bp_test1_t;

static inline uint64_t CAVM_MSWX_BP_TEST1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MSWX_BP_TEST1(uint64_t a)
{
    if (a<=23)
        return 0x87e300000020ll + 0x1000000ll * ((a) & 0x1f);
    __cavm_csr_fatal("MSWX_BP_TEST1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MSWX_BP_TEST1(a) cavm_mswx_bp_test1_t
#define bustype_CAVM_MSWX_BP_TEST1(a) CSR_TYPE_RSL
#define basename_CAVM_MSWX_BP_TEST1(a) "MSWX_BP_TEST1"
#define device_bar_CAVM_MSWX_BP_TEST1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MSWX_BP_TEST1(a) (a)
#define arguments_CAVM_MSWX_BP_TEST1(a) (a),-1,-1,-1

/**
 * Register (RSL) msw#_bp_test2
 *
 * INTERNAL: MSW Backpressure Test Register 2
 */
union cavm_mswx_bp_test2
{
    uint64_t u;
    struct cavm_mswx_bp_test2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t enable                : 16; /**< [ 63: 48](R/W) Enable test mode. For diagnostic use only.
                                                                 Internal:
                                                                 Once a bit is set, random backpressure is generated
                                                                 at the corresponding point to allow for more frequent backpressure.
                                                                 \<63\> C15 = Limit traffic out of the APA port from TADV
                                                                 \<62\> C14 = Limit traffic out of the APA port from TADH
                                                                 \<61\> C13 = Limit traffic out of the APA port from mesh west
                                                                 \<60\> C12 = Limit traffic out of the APA port from mesh south
                                                                 \<59\> C11 = Limit traffic out of the APA port from mesh east
                                                                 \<58\> C10 = Limit traffic out of the APA port from mesh north
                                                                 \<57\> C9  = Limit traffic out of the TADV port from APA
                                                                 \<56\> C8  = Limit traffic out of the TADV port from mesh west
                                                                 \<55\> C7  = Limit traffic out of the TADV port from mesh south
                                                                 \<54\> C6  = Limit traffic out of the TADV port from mesh east
                                                                 \<53\> C5  = Limit traffic out of the TADV port from mesh north
                                                                 \<52\> C4  = Limit traffic out of the TADH port from APA
                                                                 \<51\> C3  = Limit traffic out of the TADH port from mesh west
                                                                 \<50\> C2  = Limit traffic out of the TADH port from mesh south
                                                                 \<49\> C1  = Limit traffic out of the TADH port from mesh east
                                                                 \<48\> C0  = Limit traffic out of the TADH port from mesh north */
        uint64_t bp_cfg                : 32; /**< [ 47: 16](R/W) Backpressure weight. For diagnostic use only.
                                                                 Internal:
                                                                 There are 2 backpressure configuration bits per enable, with the two bits
                                                                 defined as 0x0=100% of the time, 0x1=75% of the time, 0x2=50% of the time,
                                                                 0x3=25% of the time.
                                                                   \<47:46\> = Config 15.
                                                                   \<45:44\> = Config 14.
                                                                   \<43:42\> = Config 13.
                                                                   \<41:40\> = Config 12.
                                                                   \<39:38\> = Config 11.
                                                                   \<37:36\> = Config 10.
                                                                   \<35:34\> = Config 9.
                                                                   \<33:32\> = Config 8.
                                                                   \<31:30\> = Config 7.
                                                                   \<29:28\> = Config 6.
                                                                   \<27:26\> = Config 5.
                                                                   \<25:24\> = Config 4.
                                                                   \<23:22\> = Config 3.
                                                                   \<21:20\> = Config 2.
                                                                   \<19:18\> = Config 1.
                                                                   \<17:16\> = Config 0. */
        uint64_t reserved_12_15        : 4;
        uint64_t lfsr_freq             : 12; /**< [ 11:  0](R/W) Test LFSR update period - clock cycles minus one. */
#else /* Word 0 - Little Endian */
        uint64_t lfsr_freq             : 12; /**< [ 11:  0](R/W) Test LFSR update period - clock cycles minus one. */
        uint64_t reserved_12_15        : 4;
        uint64_t bp_cfg                : 32; /**< [ 47: 16](R/W) Backpressure weight. For diagnostic use only.
                                                                 Internal:
                                                                 There are 2 backpressure configuration bits per enable, with the two bits
                                                                 defined as 0x0=100% of the time, 0x1=75% of the time, 0x2=50% of the time,
                                                                 0x3=25% of the time.
                                                                   \<47:46\> = Config 15.
                                                                   \<45:44\> = Config 14.
                                                                   \<43:42\> = Config 13.
                                                                   \<41:40\> = Config 12.
                                                                   \<39:38\> = Config 11.
                                                                   \<37:36\> = Config 10.
                                                                   \<35:34\> = Config 9.
                                                                   \<33:32\> = Config 8.
                                                                   \<31:30\> = Config 7.
                                                                   \<29:28\> = Config 6.
                                                                   \<27:26\> = Config 5.
                                                                   \<25:24\> = Config 4.
                                                                   \<23:22\> = Config 3.
                                                                   \<21:20\> = Config 2.
                                                                   \<19:18\> = Config 1.
                                                                   \<17:16\> = Config 0. */
        uint64_t enable                : 16; /**< [ 63: 48](R/W) Enable test mode. For diagnostic use only.
                                                                 Internal:
                                                                 Once a bit is set, random backpressure is generated
                                                                 at the corresponding point to allow for more frequent backpressure.
                                                                 \<63\> C15 = Limit traffic out of the APA port from TADV
                                                                 \<62\> C14 = Limit traffic out of the APA port from TADH
                                                                 \<61\> C13 = Limit traffic out of the APA port from mesh west
                                                                 \<60\> C12 = Limit traffic out of the APA port from mesh south
                                                                 \<59\> C11 = Limit traffic out of the APA port from mesh east
                                                                 \<58\> C10 = Limit traffic out of the APA port from mesh north
                                                                 \<57\> C9  = Limit traffic out of the TADV port from APA
                                                                 \<56\> C8  = Limit traffic out of the TADV port from mesh west
                                                                 \<55\> C7  = Limit traffic out of the TADV port from mesh south
                                                                 \<54\> C6  = Limit traffic out of the TADV port from mesh east
                                                                 \<53\> C5  = Limit traffic out of the TADV port from mesh north
                                                                 \<52\> C4  = Limit traffic out of the TADH port from APA
                                                                 \<51\> C3  = Limit traffic out of the TADH port from mesh west
                                                                 \<50\> C2  = Limit traffic out of the TADH port from mesh south
                                                                 \<49\> C1  = Limit traffic out of the TADH port from mesh east
                                                                 \<48\> C0  = Limit traffic out of the TADH port from mesh north */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mswx_bp_test2_s cn; */
};
typedef union cavm_mswx_bp_test2 cavm_mswx_bp_test2_t;

static inline uint64_t CAVM_MSWX_BP_TEST2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MSWX_BP_TEST2(uint64_t a)
{
    if (a<=23)
        return 0x87e300000028ll + 0x1000000ll * ((a) & 0x1f);
    __cavm_csr_fatal("MSWX_BP_TEST2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MSWX_BP_TEST2(a) cavm_mswx_bp_test2_t
#define bustype_CAVM_MSWX_BP_TEST2(a) CSR_TYPE_RSL
#define basename_CAVM_MSWX_BP_TEST2(a) "MSWX_BP_TEST2"
#define device_bar_CAVM_MSWX_BP_TEST2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MSWX_BP_TEST2(a) (a)
#define arguments_CAVM_MSWX_BP_TEST2(a) (a),-1,-1,-1

/**
 * Register (RSL) msw#_chk_fail
 *
 * INTERNAL: MSW Parity Fail Reporting Register
 *
 * These registers are reset only by hardware during chip cold reset. The values of the CSR
 * fields in these registers do not change during chip warm or soft resets.
 */
union cavm_mswx_chk_fail
{
    uint64_t u;
    struct cavm_mswx_chk_fail_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t valid                 : 1;  /**< [ 63: 63](RO/H) Set when a parity fail has been logged. */
        uint64_t port                  : 7;  /**< [ 62: 56](RO/H) For last detected parity failure. Which MSW input port the failure was from. */
        uint64_t channel               : 2;  /**< [ 55: 54](RO/H) For last detected parity failure. Which mesh channel the failure was from. */
        uint64_t comp_chk              : 1;  /**< [ 53: 53](RO/H) For last detected parity failure. The locally computed parity value. */
        uint64_t rcvd_chk              : 1;  /**< [ 52: 52](RO/H) For last detected parity failure. The received parity value. */
        uint64_t rcvd_tgtid            : 11; /**< [ 51: 41](RO/H) For last detected parity failure. The received tgtid. */
        uint64_t rcvd_srcid            : 11; /**< [ 40: 30](RO/H) For last detected parity failure. The received srcid. */
        uint64_t rcvd_rinf             : 7;  /**< [ 29: 23](RO/H) For last detected parity failure. The received rinf field. This is not part of the parity
                                                                 computation and changes from hop to hop. */
        uint64_t rcvd_txnid            : 12; /**< [ 22: 11](RO/H) For last detected parity failure. The received txnid. */
        uint64_t fail_cnt              : 11; /**< [ 10:  0](RO/H) Count of number of detected parity failures. Count does not account for multiple failures
                                                                 in a single cycle. */
#else /* Word 0 - Little Endian */
        uint64_t fail_cnt              : 11; /**< [ 10:  0](RO/H) Count of number of detected parity failures. Count does not account for multiple failures
                                                                 in a single cycle. */
        uint64_t rcvd_txnid            : 12; /**< [ 22: 11](RO/H) For last detected parity failure. The received txnid. */
        uint64_t rcvd_rinf             : 7;  /**< [ 29: 23](RO/H) For last detected parity failure. The received rinf field. This is not part of the parity
                                                                 computation and changes from hop to hop. */
        uint64_t rcvd_srcid            : 11; /**< [ 40: 30](RO/H) For last detected parity failure. The received srcid. */
        uint64_t rcvd_tgtid            : 11; /**< [ 51: 41](RO/H) For last detected parity failure. The received tgtid. */
        uint64_t rcvd_chk              : 1;  /**< [ 52: 52](RO/H) For last detected parity failure. The received parity value. */
        uint64_t comp_chk              : 1;  /**< [ 53: 53](RO/H) For last detected parity failure. The locally computed parity value. */
        uint64_t channel               : 2;  /**< [ 55: 54](RO/H) For last detected parity failure. Which mesh channel the failure was from. */
        uint64_t port                  : 7;  /**< [ 62: 56](RO/H) For last detected parity failure. Which MSW input port the failure was from. */
        uint64_t valid                 : 1;  /**< [ 63: 63](RO/H) Set when a parity fail has been logged. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mswx_chk_fail_s cn; */
};
typedef union cavm_mswx_chk_fail cavm_mswx_chk_fail_t;

static inline uint64_t CAVM_MSWX_CHK_FAIL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MSWX_CHK_FAIL(uint64_t a)
{
    if (a<=23)
        return 0x87e300000010ll + 0x1000000ll * ((a) & 0x1f);
    __cavm_csr_fatal("MSWX_CHK_FAIL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MSWX_CHK_FAIL(a) cavm_mswx_chk_fail_t
#define bustype_CAVM_MSWX_CHK_FAIL(a) CSR_TYPE_RSL
#define basename_CAVM_MSWX_CHK_FAIL(a) "MSWX_CHK_FAIL"
#define device_bar_CAVM_MSWX_CHK_FAIL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MSWX_CHK_FAIL(a) (a)
#define arguments_CAVM_MSWX_CHK_FAIL(a) (a),-1,-1,-1

/**
 * Register (RSL) msw#_ctl
 *
 * INTERNAL: MSW Control Register
 *
 * MSW controls including conditional clock force-on.
 */
union cavm_mswx_ctl
{
    uint64_t u;
    struct cavm_mswx_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t crclk_force_on        : 1;  /**< [  0:  0](R/W) Force on conditional clocks in MSW. */
#else /* Word 0 - Little Endian */
        uint64_t crclk_force_on        : 1;  /**< [  0:  0](R/W) Force on conditional clocks in MSW. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mswx_ctl_s cn; */
};
typedef union cavm_mswx_ctl cavm_mswx_ctl_t;

static inline uint64_t CAVM_MSWX_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MSWX_CTL(uint64_t a)
{
    if (a<=23)
        return 0x87e300000008ll + 0x1000000ll * ((a) & 0x1f);
    __cavm_csr_fatal("MSWX_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MSWX_CTL(a) cavm_mswx_ctl_t
#define bustype_CAVM_MSWX_CTL(a) CSR_TYPE_RSL
#define basename_CAVM_MSWX_CTL(a) "MSWX_CTL"
#define device_bar_CAVM_MSWX_CTL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MSWX_CTL(a) (a)
#define arguments_CAVM_MSWX_CTL(a) (a),-1,-1,-1

/**
 * Register (RSL) msw#_drop
 *
 * INTERNAL: MSW Dropped Flit Reporting Register
 *
 * This register is used to log when a flit is dropped within MSW.
 */
union cavm_mswx_drop
{
    uint64_t u;
    struct cavm_mswx_drop_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_25_63        : 39;
        uint64_t crb_dat               : 1;  /**< [ 24: 24](R/W1C/H) Set when a flit is dropped on the CRB DAT Interface. */
        uint64_t crb_snp               : 1;  /**< [ 23: 23](R/W1C/H) Set when a flit is dropped on the CRB SNP Interface. */
        uint64_t crb_rsp               : 1;  /**< [ 22: 22](R/W1C/H) Set when a flit is dropped on the CRB RSP Interface. */
        uint64_t trb1_dat              : 1;  /**< [ 21: 21](R/W1C/H) Set when a flit is dropped on the TRB1 DAT Interface. */
        uint64_t trb1_rsp              : 1;  /**< [ 20: 20](R/W1C/H) Set when a flit is dropped on the TRB1 RSP Interface. */
        uint64_t trb1_req              : 1;  /**< [ 19: 19](R/W1C/H) Set when a flit is dropped on the TRB1 REQ Interface. */
        uint64_t trb0_dat              : 1;  /**< [ 18: 18](R/W1C/H) Set when a flit is dropped on the TRB0 DAT Interface. */
        uint64_t trb0_rsp              : 1;  /**< [ 17: 17](R/W1C/H) Set when a flit is dropped on the TRB0 RSP Interface. */
        uint64_t trb0_req              : 1;  /**< [ 16: 16](R/W1C/H) Set when a flit is dropped on the TRB0 REQ Interface. */
        uint64_t mtxw_dat              : 1;  /**< [ 15: 15](R/W1C/H) Set when a flit is dropped on the MTXW DAT Interface. */
        uint64_t mtxw_snp              : 1;  /**< [ 14: 14](R/W1C/H) Set when a flit is dropped on the MTXW SNP Interface. */
        uint64_t mtxw_rsp              : 1;  /**< [ 13: 13](R/W1C/H) Set when a flit is dropped on the MTXW RSP Interface. */
        uint64_t mtxw_req              : 1;  /**< [ 12: 12](R/W1C/H) Set when a flit is dropped on the MTXW REQ Interface. */
        uint64_t mtxs_dat              : 1;  /**< [ 11: 11](R/W1C/H) Set when a flit is dropped on the MTXS DAT Interface. */
        uint64_t mtxs_snp              : 1;  /**< [ 10: 10](R/W1C/H) Set when a flit is dropped on the MTXS SNP Interface. */
        uint64_t mtxs_rsp              : 1;  /**< [  9:  9](R/W1C/H) Set when a flit is dropped on the MTXS RSP Interface. */
        uint64_t mtxs_req              : 1;  /**< [  8:  8](R/W1C/H) Set when a flit is dropped on the MTXS REQ Interface. */
        uint64_t mtxe_dat              : 1;  /**< [  7:  7](R/W1C/H) Set when a flit is dropped on the MTXE DAT Interface. */
        uint64_t mtxe_snp              : 1;  /**< [  6:  6](R/W1C/H) Set when a flit is dropped on the MTXE SNP Interface. */
        uint64_t mtxe_rsp              : 1;  /**< [  5:  5](R/W1C/H) Set when a flit is dropped on the MTXE RSP Interface. */
        uint64_t mtxe_req              : 1;  /**< [  4:  4](R/W1C/H) Set when a flit is dropped on the MTXE REQ Interface. */
        uint64_t mtxn_dat              : 1;  /**< [  3:  3](R/W1C/H) Set when a flit is dropped on the MTXN DAT Interface. */
        uint64_t mtxn_snp              : 1;  /**< [  2:  2](R/W1C/H) Set when a flit is dropped on the MTXN SNP Interface. */
        uint64_t mtxn_rsp              : 1;  /**< [  1:  1](R/W1C/H) Set when a flit is dropped on the MTXN RSP Interface. */
        uint64_t mtxn_req              : 1;  /**< [  0:  0](R/W1C/H) Set when a flit is dropped on the MTXN REQ Interface. */
#else /* Word 0 - Little Endian */
        uint64_t mtxn_req              : 1;  /**< [  0:  0](R/W1C/H) Set when a flit is dropped on the MTXN REQ Interface. */
        uint64_t mtxn_rsp              : 1;  /**< [  1:  1](R/W1C/H) Set when a flit is dropped on the MTXN RSP Interface. */
        uint64_t mtxn_snp              : 1;  /**< [  2:  2](R/W1C/H) Set when a flit is dropped on the MTXN SNP Interface. */
        uint64_t mtxn_dat              : 1;  /**< [  3:  3](R/W1C/H) Set when a flit is dropped on the MTXN DAT Interface. */
        uint64_t mtxe_req              : 1;  /**< [  4:  4](R/W1C/H) Set when a flit is dropped on the MTXE REQ Interface. */
        uint64_t mtxe_rsp              : 1;  /**< [  5:  5](R/W1C/H) Set when a flit is dropped on the MTXE RSP Interface. */
        uint64_t mtxe_snp              : 1;  /**< [  6:  6](R/W1C/H) Set when a flit is dropped on the MTXE SNP Interface. */
        uint64_t mtxe_dat              : 1;  /**< [  7:  7](R/W1C/H) Set when a flit is dropped on the MTXE DAT Interface. */
        uint64_t mtxs_req              : 1;  /**< [  8:  8](R/W1C/H) Set when a flit is dropped on the MTXS REQ Interface. */
        uint64_t mtxs_rsp              : 1;  /**< [  9:  9](R/W1C/H) Set when a flit is dropped on the MTXS RSP Interface. */
        uint64_t mtxs_snp              : 1;  /**< [ 10: 10](R/W1C/H) Set when a flit is dropped on the MTXS SNP Interface. */
        uint64_t mtxs_dat              : 1;  /**< [ 11: 11](R/W1C/H) Set when a flit is dropped on the MTXS DAT Interface. */
        uint64_t mtxw_req              : 1;  /**< [ 12: 12](R/W1C/H) Set when a flit is dropped on the MTXW REQ Interface. */
        uint64_t mtxw_rsp              : 1;  /**< [ 13: 13](R/W1C/H) Set when a flit is dropped on the MTXW RSP Interface. */
        uint64_t mtxw_snp              : 1;  /**< [ 14: 14](R/W1C/H) Set when a flit is dropped on the MTXW SNP Interface. */
        uint64_t mtxw_dat              : 1;  /**< [ 15: 15](R/W1C/H) Set when a flit is dropped on the MTXW DAT Interface. */
        uint64_t trb0_req              : 1;  /**< [ 16: 16](R/W1C/H) Set when a flit is dropped on the TRB0 REQ Interface. */
        uint64_t trb0_rsp              : 1;  /**< [ 17: 17](R/W1C/H) Set when a flit is dropped on the TRB0 RSP Interface. */
        uint64_t trb0_dat              : 1;  /**< [ 18: 18](R/W1C/H) Set when a flit is dropped on the TRB0 DAT Interface. */
        uint64_t trb1_req              : 1;  /**< [ 19: 19](R/W1C/H) Set when a flit is dropped on the TRB1 REQ Interface. */
        uint64_t trb1_rsp              : 1;  /**< [ 20: 20](R/W1C/H) Set when a flit is dropped on the TRB1 RSP Interface. */
        uint64_t trb1_dat              : 1;  /**< [ 21: 21](R/W1C/H) Set when a flit is dropped on the TRB1 DAT Interface. */
        uint64_t crb_rsp               : 1;  /**< [ 22: 22](R/W1C/H) Set when a flit is dropped on the CRB RSP Interface. */
        uint64_t crb_snp               : 1;  /**< [ 23: 23](R/W1C/H) Set when a flit is dropped on the CRB SNP Interface. */
        uint64_t crb_dat               : 1;  /**< [ 24: 24](R/W1C/H) Set when a flit is dropped on the CRB DAT Interface. */
        uint64_t reserved_25_63        : 39;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mswx_drop_s cn; */
};
typedef union cavm_mswx_drop cavm_mswx_drop_t;

static inline uint64_t CAVM_MSWX_DROP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MSWX_DROP(uint64_t a)
{
    if (a<=23)
        return 0x87e300000080ll + 0x1000000ll * ((a) & 0x1f);
    __cavm_csr_fatal("MSWX_DROP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MSWX_DROP(a) cavm_mswx_drop_t
#define bustype_CAVM_MSWX_DROP(a) CSR_TYPE_RSL
#define basename_CAVM_MSWX_DROP(a) "MSWX_DROP"
#define device_bar_CAVM_MSWX_DROP(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MSWX_DROP(a) (a)
#define arguments_CAVM_MSWX_DROP(a) (a),-1,-1,-1

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
    if ((a<=23) && (b<=3) && (c<=3))
        return 0x87e300000060ll + 0x1000000ll * ((a) & 0x1f) + 0x4000ll * ((b) & 0x3) + 8ll * ((c) & 0x3);
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
        uint64_t snp_en                : 1;  /**< [  3:  3](R/W) Enable counting the number of active cycles out of MSW on the SNP channel in MSW()_MSH()_PFC(3) */
        uint64_t rsp_en                : 1;  /**< [  2:  2](R/W) Enable counting the number of active cycles out of MSW on the RSP channel in MSW()_MSH()_PFC(2) */
        uint64_t dat_en                : 1;  /**< [  1:  1](R/W) Enable counting the number of active cycles out of MSW on the DAT channel in MSW()_MSH()_PFC(1) */
        uint64_t req_en                : 1;  /**< [  0:  0](R/W) Enable counting the number of active cycles out of MSW on the REQ channel in MSW()_MSH()_PFC(0) */
#else /* Word 0 - Little Endian */
        uint64_t req_en                : 1;  /**< [  0:  0](R/W) Enable counting the number of active cycles out of MSW on the REQ channel in MSW()_MSH()_PFC(0) */
        uint64_t dat_en                : 1;  /**< [  1:  1](R/W) Enable counting the number of active cycles out of MSW on the DAT channel in MSW()_MSH()_PFC(1) */
        uint64_t rsp_en                : 1;  /**< [  2:  2](R/W) Enable counting the number of active cycles out of MSW on the RSP channel in MSW()_MSH()_PFC(2) */
        uint64_t snp_en                : 1;  /**< [  3:  3](R/W) Enable counting the number of active cycles out of MSW on the SNP channel in MSW()_MSH()_PFC(3) */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mswx_mshx_prf_s cn; */
};
typedef union cavm_mswx_mshx_prf cavm_mswx_mshx_prf_t;

static inline uint64_t CAVM_MSWX_MSHX_PRF(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MSWX_MSHX_PRF(uint64_t a, uint64_t b)
{
    if ((a<=23) && (b<=3))
        return 0x87e300000058ll + 0x1000000ll * ((a) & 0x1f) + 0x4000ll * ((b) & 0x3);
    __cavm_csr_fatal("MSWX_MSHX_PRF", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MSWX_MSHX_PRF(a,b) cavm_mswx_mshx_prf_t
#define bustype_CAVM_MSWX_MSHX_PRF(a,b) CSR_TYPE_RSL
#define basename_CAVM_MSWX_MSHX_PRF(a,b) "MSWX_MSHX_PRF"
#define device_bar_CAVM_MSWX_MSHX_PRF(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MSWX_MSHX_PRF(a,b) (a)
#define arguments_CAVM_MSWX_MSHX_PRF(a,b) (a),(b),-1,-1

/**
 * Register (RSL) msw#_scratch
 *
 * INTERNAL: MSW General Purpose Scratch Register
 *
 * These registers are reset only by hardware during chip cold reset. The values of the CSR
 * fields in these registers do not change during chip warm or soft resets.
 */
union cavm_mswx_scratch
{
    uint64_t u;
    struct cavm_mswx_scratch_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t scratch               : 8;  /**< [  7:  0](R/W) General purpose scratch register. */
#else /* Word 0 - Little Endian */
        uint64_t scratch               : 8;  /**< [  7:  0](R/W) General purpose scratch register. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mswx_scratch_s cn; */
};
typedef union cavm_mswx_scratch cavm_mswx_scratch_t;

static inline uint64_t CAVM_MSWX_SCRATCH(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MSWX_SCRATCH(uint64_t a)
{
    if (a<=23)
        return 0x87e300000000ll + 0x1000000ll * ((a) & 0x1f);
    __cavm_csr_fatal("MSWX_SCRATCH", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MSWX_SCRATCH(a) cavm_mswx_scratch_t
#define bustype_CAVM_MSWX_SCRATCH(a) CSR_TYPE_RSL
#define basename_CAVM_MSWX_SCRATCH(a) "MSWX_SCRATCH"
#define device_bar_CAVM_MSWX_SCRATCH(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MSWX_SCRATCH(a) (a)
#define arguments_CAVM_MSWX_SCRATCH(a) (a),-1,-1,-1

#endif /* __CAVM_CSRS_MSW_H__ */
