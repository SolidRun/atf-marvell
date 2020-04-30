#ifndef __CAVM_CSRS_TAD_H__
#define __CAVM_CSRS_TAD_H__
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
#define CAVM_TAD_BAR_E_TADX_PF_BAR0(a) (0x87e054000000ll + 0x20000ll * (a))
#define CAVM_TAD_BAR_E_TADX_PF_BAR0_SIZE 0x10000ull
#define CAVM_TAD_BAR_E_TADX_PF_BAR4(a) (0x87e054010000ll + 0x20000ll * (a))
#define CAVM_TAD_BAR_E_TADX_PF_BAR4_SIZE 0x10000ull

/**
 * Enumeration tad_pf_int_vec_e
 *
 * TAD MSI-X Vector Enumeration
 * Enumerates the MSI-X interrupt vectors.
 */
#define CAVM_TAD_PF_INT_VEC_E_TAD_INT (0)

/**
 * Register (RSL) tad#_bp_test1
 *
 * INTERNAL: TAD Backpressure Test Register
 */
union cavm_tadx_bp_test1
{
    uint64_t u;
    struct cavm_tadx_bp_test1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t enable                : 4;  /**< [ 63: 60](R/W) Enable test mode. For diagnostic use only.
                                                                 Internal:
                                                                 Once a bit is set, random backpressure is generated
                                                                 at the corresponding point to allow for more frequent backpressure.
                                                                 \<63\> = Backpressure DAT data UPD
                                                                 \<62\> = Backpressure DAT data read
                                                                 \<61\> = Backpressure DAT CompData
                                                                 \<60\> = Backpressure DAT DBID response */
        uint64_t reserved_24_59        : 36;
        uint64_t bp_cfg                : 8;  /**< [ 23: 16](R/W) Backpressure weight. For diagnostic use only.
                                                                 Internal:
                                                                 There are 2 backpressure configuration bits per enable, with the two bits defined as
                                                                 0x0=100% of the time, 0x1=99.2% (127/128) of the time,
                                                                 0x2=96.9% (31/32) of the time, 0x3=87.5% (7/8) of the time.
                                                                   \<23:22\> = Config 3.
                                                                   \<21:20\> = Config 2.
                                                                   \<19:18\> = Config 1.
                                                                   \<17:16\> = Config 0. */
        uint64_t reserved_12_15        : 4;
        uint64_t lfsr_freq             : 12; /**< [ 11:  0](R/W) Test LFSR update frequency in coprocessor clocks minus one. */
#else /* Word 0 - Little Endian */
        uint64_t lfsr_freq             : 12; /**< [ 11:  0](R/W) Test LFSR update frequency in coprocessor clocks minus one. */
        uint64_t reserved_12_15        : 4;
        uint64_t bp_cfg                : 8;  /**< [ 23: 16](R/W) Backpressure weight. For diagnostic use only.
                                                                 Internal:
                                                                 There are 2 backpressure configuration bits per enable, with the two bits defined as
                                                                 0x0=100% of the time, 0x1=99.2% (127/128) of the time,
                                                                 0x2=96.9% (31/32) of the time, 0x3=87.5% (7/8) of the time.
                                                                   \<23:22\> = Config 3.
                                                                   \<21:20\> = Config 2.
                                                                   \<19:18\> = Config 1.
                                                                   \<17:16\> = Config 0. */
        uint64_t reserved_24_59        : 36;
        uint64_t enable                : 4;  /**< [ 63: 60](R/W) Enable test mode. For diagnostic use only.
                                                                 Internal:
                                                                 Once a bit is set, random backpressure is generated
                                                                 at the corresponding point to allow for more frequent backpressure.
                                                                 \<63\> = Backpressure DAT data UPD
                                                                 \<62\> = Backpressure DAT data read
                                                                 \<61\> = Backpressure DAT CompData
                                                                 \<60\> = Backpressure DAT DBID response */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tadx_bp_test1_s cn; */
};
typedef union cavm_tadx_bp_test1 cavm_tadx_bp_test1_t;

static inline uint64_t CAVM_TADX_BP_TEST1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TADX_BP_TEST1(uint64_t a)
{
    if (a<=31)
        return 0x87e054000010ll + 0x20000ll * ((a) & 0x1f);
    __cavm_csr_fatal("TADX_BP_TEST1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TADX_BP_TEST1(a) cavm_tadx_bp_test1_t
#define bustype_CAVM_TADX_BP_TEST1(a) CSR_TYPE_RSL
#define basename_CAVM_TADX_BP_TEST1(a) "TADX_BP_TEST1"
#define device_bar_CAVM_TADX_BP_TEST1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TADX_BP_TEST1(a) (a)
#define arguments_CAVM_TADX_BP_TEST1(a) (a),-1,-1,-1

/**
 * Register (RSL) tad#_bp_test2
 *
 * INTERNAL: TAD Backpressure Test Register
 */
union cavm_tadx_bp_test2
{
    uint64_t u;
    struct cavm_tadx_bp_test2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t enable                : 4;  /**< [ 63: 60](R/W) Enable test mode. For diagnostic use only.
                                                                 Internal:
                                                                 Once a bit is set, random backpressure is generated
                                                                 at the corresponding point to allow for more frequent backpressure.
                                                                 \<63\> = Backpressure DAT read fifo
                                                                 \<62\> = Backpressure DAT write fifo
                                                                 \<61\> = Backpressure RSP msw
                                                                 \<60\> = Backpressure RSP ifb */
        uint64_t reserved_24_59        : 36;
        uint64_t bp_cfg                : 8;  /**< [ 23: 16](R/W) Backpressure weight. For diagnostic use only.
                                                                 Internal:
                                                                 There are 2 backpressure configuration bits per enable, with the two bits defined as
                                                                 0x0=100% of the time, 0x1=99.2% (127/128) of the time,
                                                                 0x2=96.9% (31/32) of the time, 0x3=87.5% (7/8) of the time.
                                                                   \<23:22\> = Config 3.
                                                                   \<21:20\> = Config 2.
                                                                   \<19:18\> = Config 1.
                                                                   \<17:16\> = Config 0. */
        uint64_t reserved_12_15        : 4;
        uint64_t lfsr_freq             : 12; /**< [ 11:  0](R/W) Test LFSR update frequency in coprocessor clocks minus one. */
#else /* Word 0 - Little Endian */
        uint64_t lfsr_freq             : 12; /**< [ 11:  0](R/W) Test LFSR update frequency in coprocessor clocks minus one. */
        uint64_t reserved_12_15        : 4;
        uint64_t bp_cfg                : 8;  /**< [ 23: 16](R/W) Backpressure weight. For diagnostic use only.
                                                                 Internal:
                                                                 There are 2 backpressure configuration bits per enable, with the two bits defined as
                                                                 0x0=100% of the time, 0x1=99.2% (127/128) of the time,
                                                                 0x2=96.9% (31/32) of the time, 0x3=87.5% (7/8) of the time.
                                                                   \<23:22\> = Config 3.
                                                                   \<21:20\> = Config 2.
                                                                   \<19:18\> = Config 1.
                                                                   \<17:16\> = Config 0. */
        uint64_t reserved_24_59        : 36;
        uint64_t enable                : 4;  /**< [ 63: 60](R/W) Enable test mode. For diagnostic use only.
                                                                 Internal:
                                                                 Once a bit is set, random backpressure is generated
                                                                 at the corresponding point to allow for more frequent backpressure.
                                                                 \<63\> = Backpressure DAT read fifo
                                                                 \<62\> = Backpressure DAT write fifo
                                                                 \<61\> = Backpressure RSP msw
                                                                 \<60\> = Backpressure RSP ifb */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tadx_bp_test2_s cn; */
};
typedef union cavm_tadx_bp_test2 cavm_tadx_bp_test2_t;

static inline uint64_t CAVM_TADX_BP_TEST2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TADX_BP_TEST2(uint64_t a)
{
    if (a<=31)
        return 0x87e054000018ll + 0x20000ll * ((a) & 0x1f);
    __cavm_csr_fatal("TADX_BP_TEST2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TADX_BP_TEST2(a) cavm_tadx_bp_test2_t
#define bustype_CAVM_TADX_BP_TEST2(a) CSR_TYPE_RSL
#define basename_CAVM_TADX_BP_TEST2(a) "TADX_BP_TEST2"
#define device_bar_CAVM_TADX_BP_TEST2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TADX_BP_TEST2(a) (a)
#define arguments_CAVM_TADX_BP_TEST2(a) (a),-1,-1,-1

/**
 * Register (RSL) tad#_bp_test3
 *
 * INTERNAL: TAD Backpressure Test Register
 */
union cavm_tadx_bp_test3
{
    uint64_t u;
    struct cavm_tadx_bp_test3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t enable                : 4;  /**< [ 63: 60](R/W) Enable test mode. For diagnostic use only.
                                                                 Internal:
                                                                 Once a bit is set, random backpressure is generated
                                                                 at the corresponding point to allow for more frequent backpressure.
                                                                 \<63\> = Backpressure RXTBL DAT
                                                                 \<62\> = Backpressure RXTBL RSP
                                                                 \<61\> = Backpressure SNP ifb
                                                                 \<60\> = Backpressure TAG write */
        uint64_t reserved_24_59        : 36;
        uint64_t bp_cfg                : 8;  /**< [ 23: 16](R/W) Backpressure weight. For diagnostic use only.
                                                                 Internal:
                                                                 There are 2 backpressure configuration bits per enable, with the two bits defined as
                                                                 0x0=100% of the time, 0x1=99.2% (127/128) of the time,
                                                                 0x2=96.9% (31/32) of the time, 0x3=87.5% (7/8) of the time.
                                                                   \<23:22\> = Config 3.
                                                                   \<21:20\> = Config 2.
                                                                   \<19:18\> = Config 1.
                                                                   \<17:16\> = Config 0. */
        uint64_t reserved_12_15        : 4;
        uint64_t lfsr_freq             : 12; /**< [ 11:  0](R/W) Test LFSR update frequency in coprocessor clocks minus one. */
#else /* Word 0 - Little Endian */
        uint64_t lfsr_freq             : 12; /**< [ 11:  0](R/W) Test LFSR update frequency in coprocessor clocks minus one. */
        uint64_t reserved_12_15        : 4;
        uint64_t bp_cfg                : 8;  /**< [ 23: 16](R/W) Backpressure weight. For diagnostic use only.
                                                                 Internal:
                                                                 There are 2 backpressure configuration bits per enable, with the two bits defined as
                                                                 0x0=100% of the time, 0x1=99.2% (127/128) of the time,
                                                                 0x2=96.9% (31/32) of the time, 0x3=87.5% (7/8) of the time.
                                                                   \<23:22\> = Config 3.
                                                                   \<21:20\> = Config 2.
                                                                   \<19:18\> = Config 1.
                                                                   \<17:16\> = Config 0. */
        uint64_t reserved_24_59        : 36;
        uint64_t enable                : 4;  /**< [ 63: 60](R/W) Enable test mode. For diagnostic use only.
                                                                 Internal:
                                                                 Once a bit is set, random backpressure is generated
                                                                 at the corresponding point to allow for more frequent backpressure.
                                                                 \<63\> = Backpressure RXTBL DAT
                                                                 \<62\> = Backpressure RXTBL RSP
                                                                 \<61\> = Backpressure SNP ifb
                                                                 \<60\> = Backpressure TAG write */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tadx_bp_test3_s cn; */
};
typedef union cavm_tadx_bp_test3 cavm_tadx_bp_test3_t;

static inline uint64_t CAVM_TADX_BP_TEST3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TADX_BP_TEST3(uint64_t a)
{
    if (a<=31)
        return 0x87e054000020ll + 0x20000ll * ((a) & 0x1f);
    __cavm_csr_fatal("TADX_BP_TEST3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TADX_BP_TEST3(a) cavm_tadx_bp_test3_t
#define bustype_CAVM_TADX_BP_TEST3(a) CSR_TYPE_RSL
#define basename_CAVM_TADX_BP_TEST3(a) "TADX_BP_TEST3"
#define device_bar_CAVM_TADX_BP_TEST3(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TADX_BP_TEST3(a) (a)
#define arguments_CAVM_TADX_BP_TEST3(a) (a),-1,-1,-1

/**
 * Register (RSL) tad#_bp_test4
 *
 * INTERNAL: TAD Backpressure Test Register
 */
union cavm_tadx_bp_test4
{
    uint64_t u;
    struct cavm_tadx_bp_test4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t enable                : 4;  /**< [ 63: 60](R/W) Enable test mode. For diagnostic use only.
                                                                 Internal:
                                                                 Once a bit is set, random backpressure is generated
                                                                 at the corresponding point to allow for more frequent backpressure.
                                                                 \<63\> = Backpressure TXREQ memrd
                                                                 \<62\> = Backpressure TXREQ memwr
                                                                 \<61\> = Backpressure TXREQ memev
                                                                 \<60\> = Backpressure TXSNP msw */
        uint64_t reserved_24_59        : 36;
        uint64_t bp_cfg                : 8;  /**< [ 23: 16](R/W) Backpressure weight. For diagnostic use only.
                                                                 Internal:
                                                                 There are 2 backpressure configuration bits per enable, with the two bits defined as
                                                                 0x0=100% of the time, 0x1=99.2% (127/128) of the time,
                                                                 0x2=96.9% (31/32) of the time, 0x3=87.5% (7/8) of the time.
                                                                   \<23:22\> = Config 3.
                                                                   \<21:20\> = Config 2.
                                                                   \<19:18\> = Config 1.
                                                                   \<17:16\> = Config 0. */
        uint64_t reserved_12_15        : 4;
        uint64_t lfsr_freq             : 12; /**< [ 11:  0](R/W) Test LFSR update frequency in coprocessor clocks minus one. */
#else /* Word 0 - Little Endian */
        uint64_t lfsr_freq             : 12; /**< [ 11:  0](R/W) Test LFSR update frequency in coprocessor clocks minus one. */
        uint64_t reserved_12_15        : 4;
        uint64_t bp_cfg                : 8;  /**< [ 23: 16](R/W) Backpressure weight. For diagnostic use only.
                                                                 Internal:
                                                                 There are 2 backpressure configuration bits per enable, with the two bits defined as
                                                                 0x0=100% of the time, 0x1=99.2% (127/128) of the time,
                                                                 0x2=96.9% (31/32) of the time, 0x3=87.5% (7/8) of the time.
                                                                   \<23:22\> = Config 3.
                                                                   \<21:20\> = Config 2.
                                                                   \<19:18\> = Config 1.
                                                                   \<17:16\> = Config 0. */
        uint64_t reserved_24_59        : 36;
        uint64_t enable                : 4;  /**< [ 63: 60](R/W) Enable test mode. For diagnostic use only.
                                                                 Internal:
                                                                 Once a bit is set, random backpressure is generated
                                                                 at the corresponding point to allow for more frequent backpressure.
                                                                 \<63\> = Backpressure TXREQ memrd
                                                                 \<62\> = Backpressure TXREQ memwr
                                                                 \<61\> = Backpressure TXREQ memev
                                                                 \<60\> = Backpressure TXSNP msw */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tadx_bp_test4_s cn; */
};
typedef union cavm_tadx_bp_test4 cavm_tadx_bp_test4_t;

static inline uint64_t CAVM_TADX_BP_TEST4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TADX_BP_TEST4(uint64_t a)
{
    if (a<=31)
        return 0x87e054000028ll + 0x20000ll * ((a) & 0x1f);
    __cavm_csr_fatal("TADX_BP_TEST4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TADX_BP_TEST4(a) cavm_tadx_bp_test4_t
#define bustype_CAVM_TADX_BP_TEST4(a) CSR_TYPE_RSL
#define basename_CAVM_TADX_BP_TEST4(a) "TADX_BP_TEST4"
#define device_bar_CAVM_TADX_BP_TEST4(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TADX_BP_TEST4(a) (a)
#define arguments_CAVM_TADX_BP_TEST4(a) (a),-1,-1,-1

/**
 * Register (RSL) tad#_bp_test5
 *
 * INTERNAL: TAD Backpressure Test Register
 */
union cavm_tadx_bp_test5
{
    uint64_t u;
    struct cavm_tadx_bp_test5_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t enable                : 4;  /**< [ 63: 60](R/W) Enable test mode. For diagnostic use only.
                                                                 Internal:
                                                                 Once a bit is set, random backpressure is generated
                                                                 at the corresponding point to allow for more frequent backpressure.
                                                                 \<63\> = Backpressure DSS retry
                                                                 \<62\> = Backpressure MN retry
                                                                 \<61\> = Backpressure MN nsync
                                                                 \<60\> = Backpressure MN sync */
        uint64_t reserved_24_59        : 36;
        uint64_t bp_cfg                : 8;  /**< [ 23: 16](R/W) Backpressure weight. For diagnostic use only.
                                                                 Internal:
                                                                 There are 2 backpressure configuration bits per enable, with the two bits defined as
                                                                 0x0=100% of the time, 0x1=99.2% (127/128) of the time,
                                                                 0x2=96.9% (31/32) of the time, 0x3=87.5% (7/8) of the time.
                                                                   \<23:22\> = Config 3.
                                                                   \<21:20\> = Config 2.
                                                                   \<19:18\> = Config 1.
                                                                   \<17:16\> = Config 0. */
        uint64_t reserved_12_15        : 4;
        uint64_t lfsr_freq             : 12; /**< [ 11:  0](R/W) Test LFSR update frequency in coprocessor clocks minus one. */
#else /* Word 0 - Little Endian */
        uint64_t lfsr_freq             : 12; /**< [ 11:  0](R/W) Test LFSR update frequency in coprocessor clocks minus one. */
        uint64_t reserved_12_15        : 4;
        uint64_t bp_cfg                : 8;  /**< [ 23: 16](R/W) Backpressure weight. For diagnostic use only.
                                                                 Internal:
                                                                 There are 2 backpressure configuration bits per enable, with the two bits defined as
                                                                 0x0=100% of the time, 0x1=99.2% (127/128) of the time,
                                                                 0x2=96.9% (31/32) of the time, 0x3=87.5% (7/8) of the time.
                                                                   \<23:22\> = Config 3.
                                                                   \<21:20\> = Config 2.
                                                                   \<19:18\> = Config 1.
                                                                   \<17:16\> = Config 0. */
        uint64_t reserved_24_59        : 36;
        uint64_t enable                : 4;  /**< [ 63: 60](R/W) Enable test mode. For diagnostic use only.
                                                                 Internal:
                                                                 Once a bit is set, random backpressure is generated
                                                                 at the corresponding point to allow for more frequent backpressure.
                                                                 \<63\> = Backpressure DSS retry
                                                                 \<62\> = Backpressure MN retry
                                                                 \<61\> = Backpressure MN nsync
                                                                 \<60\> = Backpressure MN sync */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tadx_bp_test5_s cn; */
};
typedef union cavm_tadx_bp_test5 cavm_tadx_bp_test5_t;

static inline uint64_t CAVM_TADX_BP_TEST5(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TADX_BP_TEST5(uint64_t a)
{
    if (a<=31)
        return 0x87e054000030ll + 0x20000ll * ((a) & 0x1f);
    __cavm_csr_fatal("TADX_BP_TEST5", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TADX_BP_TEST5(a) cavm_tadx_bp_test5_t
#define bustype_CAVM_TADX_BP_TEST5(a) CSR_TYPE_RSL
#define basename_CAVM_TADX_BP_TEST5(a) "TADX_BP_TEST5"
#define device_bar_CAVM_TADX_BP_TEST5(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TADX_BP_TEST5(a) (a)
#define arguments_CAVM_TADX_BP_TEST5(a) (a),-1,-1,-1

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
    /* struct cavm_tadx_cache_flush_status_s cn; */
};
typedef union cavm_tadx_cache_flush_status cavm_tadx_cache_flush_status_t;

static inline uint64_t CAVM_TADX_CACHE_FLUSH_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TADX_CACHE_FLUSH_STATUS(uint64_t a)
{
    if (a<=31)
        return 0x87e054000038ll + 0x20000ll * ((a) & 0x1f);
    __cavm_csr_fatal("TADX_CACHE_FLUSH_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TADX_CACHE_FLUSH_STATUS(a) cavm_tadx_cache_flush_status_t
#define bustype_CAVM_TADX_CACHE_FLUSH_STATUS(a) CSR_TYPE_RSL
#define basename_CAVM_TADX_CACHE_FLUSH_STATUS(a) "TADX_CACHE_FLUSH_STATUS"
#define device_bar_CAVM_TADX_CACHE_FLUSH_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TADX_CACHE_FLUSH_STATUS(a) (a)
#define arguments_CAVM_TADX_CACHE_FLUSH_STATUS(a) (a),-1,-1,-1

/**
 * Register (RSL) tad#_eco
 *
 * INTERNAL: TAD ECO Register
 *
 * These registers exist to provide CSR flops in case they are needed for ECOs.
 */
union cavm_tadx_eco
{
    uint64_t u;
    struct cavm_tadx_eco_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t eco_rw                : 32; /**< [ 31:  0](R/W) ECO flops. */
#else /* Word 0 - Little Endian */
        uint64_t eco_rw                : 32; /**< [ 31:  0](R/W) ECO flops. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tadx_eco_s cn; */
};
typedef union cavm_tadx_eco cavm_tadx_eco_t;

static inline uint64_t CAVM_TADX_ECO(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TADX_ECO(uint64_t a)
{
    if (a<=31)
        return 0x87e054000008ll + 0x20000ll * ((a) & 0x1f);
    __cavm_csr_fatal("TADX_ECO", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TADX_ECO(a) cavm_tadx_eco_t
#define bustype_CAVM_TADX_ECO(a) CSR_TYPE_RSL
#define basename_CAVM_TADX_ECO(a) "TADX_ECO"
#define device_bar_CAVM_TADX_ECO(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TADX_ECO(a) (a)
#define arguments_CAVM_TADX_ECO(a) (a),-1,-1,-1

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
        uint64_t reserved_2_63         : 62;
        uint64_t wrnxm                 : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for TAD(0..31)_INT_W1C[WRNXM]. */
        uint64_t rdnxm                 : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for TAD(0..31)_INT_W1C[RDNXM]. */
#else /* Word 0 - Little Endian */
        uint64_t rdnxm                 : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for TAD(0..31)_INT_W1C[RDNXM]. */
        uint64_t wrnxm                 : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for TAD(0..31)_INT_W1C[WRNXM]. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tadx_int_ena_w1c_s cn; */
};
typedef union cavm_tadx_int_ena_w1c cavm_tadx_int_ena_w1c_t;

static inline uint64_t CAVM_TADX_INT_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TADX_INT_ENA_W1C(uint64_t a)
{
    if (a<=31)
        return 0x87e054008010ll + 0x20000ll * ((a) & 0x1f);
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
        uint64_t reserved_2_63         : 62;
        uint64_t wrnxm                 : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for TAD(0..31)_INT_W1C[WRNXM]. */
        uint64_t rdnxm                 : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for TAD(0..31)_INT_W1C[RDNXM]. */
#else /* Word 0 - Little Endian */
        uint64_t rdnxm                 : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for TAD(0..31)_INT_W1C[RDNXM]. */
        uint64_t wrnxm                 : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for TAD(0..31)_INT_W1C[WRNXM]. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tadx_int_ena_w1s_s cn; */
};
typedef union cavm_tadx_int_ena_w1s cavm_tadx_int_ena_w1s_t;

static inline uint64_t CAVM_TADX_INT_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TADX_INT_ENA_W1S(uint64_t a)
{
    if (a<=31)
        return 0x87e054008018ll + 0x20000ll * ((a) & 0x1f);
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
        uint64_t reserved_2_63         : 62;
        uint64_t wrnxm                 : 1;  /**< [  1:  1](R/W1C/H) TBD */
        uint64_t rdnxm                 : 1;  /**< [  0:  0](R/W1C/H) TBD */
#else /* Word 0 - Little Endian */
        uint64_t rdnxm                 : 1;  /**< [  0:  0](R/W1C/H) TBD */
        uint64_t wrnxm                 : 1;  /**< [  1:  1](R/W1C/H) TBD */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tadx_int_w1c_s cn; */
};
typedef union cavm_tadx_int_w1c cavm_tadx_int_w1c_t;

static inline uint64_t CAVM_TADX_INT_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TADX_INT_W1C(uint64_t a)
{
    if (a<=31)
        return 0x87e054008000ll + 0x20000ll * ((a) & 0x1f);
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
        uint64_t reserved_2_63         : 62;
        uint64_t wrnxm                 : 1;  /**< [  1:  1](R/W1S/H) Reads or sets TAD(0..31)_INT_W1C[WRNXM]. */
        uint64_t rdnxm                 : 1;  /**< [  0:  0](R/W1S/H) Reads or sets TAD(0..31)_INT_W1C[RDNXM]. */
#else /* Word 0 - Little Endian */
        uint64_t rdnxm                 : 1;  /**< [  0:  0](R/W1S/H) Reads or sets TAD(0..31)_INT_W1C[RDNXM]. */
        uint64_t wrnxm                 : 1;  /**< [  1:  1](R/W1S/H) Reads or sets TAD(0..31)_INT_W1C[WRNXM]. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tadx_int_w1s_s cn; */
};
typedef union cavm_tadx_int_w1s cavm_tadx_int_w1s_t;

static inline uint64_t CAVM_TADX_INT_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TADX_INT_W1S(uint64_t a)
{
    if (a<=31)
        return 0x87e054008008ll + 0x20000ll * ((a) & 0x1f);
    __cavm_csr_fatal("TADX_INT_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TADX_INT_W1S(a) cavm_tadx_int_w1s_t
#define bustype_CAVM_TADX_INT_W1S(a) CSR_TYPE_RSL
#define basename_CAVM_TADX_INT_W1S(a) "TADX_INT_W1S"
#define device_bar_CAVM_TADX_INT_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TADX_INT_W1S(a) (a)
#define arguments_CAVM_TADX_INT_W1S(a) (a),-1,-1,-1

/**
 * Register (RSL) tad#_mpam#_acnt
 *
 * TAD Memory Paritioning Allocate Count Registers
 */
union cavm_tadx_mpamx_acnt
{
    uint64_t u;
    struct cavm_tadx_mpamx_acnt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t cnt                   : 48; /**< [ 47:  0](R/W/H) Counter incremented whenever a request allocates while using the corresponding
                                                                 MPAMID. */
#else /* Word 0 - Little Endian */
        uint64_t cnt                   : 48; /**< [ 47:  0](R/W/H) Counter incremented whenever a request allocates while using the corresponding
                                                                 MPAMID. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tadx_mpamx_acnt_s cn; */
};
typedef union cavm_tadx_mpamx_acnt cavm_tadx_mpamx_acnt_t;

static inline uint64_t CAVM_TADX_MPAMX_ACNT(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TADX_MPAMX_ACNT(uint64_t a, uint64_t b)
{
    if ((a<=31) && (b<=255))
        return 0x87e054001000ll + 0x20000ll * ((a) & 0x1f) + 0x10ll * ((b) & 0xff);
    __cavm_csr_fatal("TADX_MPAMX_ACNT", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_TADX_MPAMX_ACNT(a,b) cavm_tadx_mpamx_acnt_t
#define bustype_CAVM_TADX_MPAMX_ACNT(a,b) CSR_TYPE_RSL
#define basename_CAVM_TADX_MPAMX_ACNT(a,b) "TADX_MPAMX_ACNT"
#define device_bar_CAVM_TADX_MPAMX_ACNT(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TADX_MPAMX_ACNT(a,b) (a)
#define arguments_CAVM_TADX_MPAMX_ACNT(a,b) (a),(b),-1,-1

/**
 * Register (RSL) tad#_mpam#_hcnt
 *
 * TAD Memory Paritioning Hit Count Registers
 */
union cavm_tadx_mpamx_hcnt
{
    uint64_t u;
    struct cavm_tadx_mpamx_hcnt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t cnt                   : 48; /**< [ 47:  0](R/W/H) Counter incremented whenever a request hits in the LTG or DTG while using the
                                                                 corresponding MPAMID. */
#else /* Word 0 - Little Endian */
        uint64_t cnt                   : 48; /**< [ 47:  0](R/W/H) Counter incremented whenever a request hits in the LTG or DTG while using the
                                                                 corresponding MPAMID. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tadx_mpamx_hcnt_s cn; */
};
typedef union cavm_tadx_mpamx_hcnt cavm_tadx_mpamx_hcnt_t;

static inline uint64_t CAVM_TADX_MPAMX_HCNT(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TADX_MPAMX_HCNT(uint64_t a, uint64_t b)
{
    if ((a<=31) && (b<=255))
        return 0x87e054001008ll + 0x20000ll * ((a) & 0x1f) + 0x10ll * ((b) & 0xff);
    __cavm_csr_fatal("TADX_MPAMX_HCNT", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_TADX_MPAMX_HCNT(a,b) cavm_tadx_mpamx_hcnt_t
#define bustype_CAVM_TADX_MPAMX_HCNT(a,b) CSR_TYPE_RSL
#define basename_CAVM_TADX_MPAMX_HCNT(a,b) "TADX_MPAMX_HCNT"
#define device_bar_CAVM_TADX_MPAMX_HCNT(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TADX_MPAMX_HCNT(a,b) (a)
#define arguments_CAVM_TADX_MPAMX_HCNT(a,b) (a),(b),-1,-1

/**
 * Register (RSL) tad#_msix_pba#
 *
 * TAD MSI-X Pending Bit Array Registers
 * Internal:
 * This register is the MSI-X PBA table; FIXME
 */
union cavm_tadx_msix_pbax
{
    uint64_t u;
    struct cavm_tadx_msix_pbax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO) TBD */
#else /* Word 0 - Little Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO) TBD */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tadx_msix_pbax_s cn; */
};
typedef union cavm_tadx_msix_pbax cavm_tadx_msix_pbax_t;

static inline uint64_t CAVM_TADX_MSIX_PBAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TADX_MSIX_PBAX(uint64_t a, uint64_t b)
{
    if ((a<=31) && (b==0))
        return 0x87e054018000ll + 0x20000ll * ((a) & 0x1f) + 8ll * ((b) & 0x0);
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
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) TBD */
#else /* Word 0 - Little Endian */
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) TBD */
        uint64_t reserved_1            : 1;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tadx_msix_vecx_addr_s cn; */
};
typedef union cavm_tadx_msix_vecx_addr cavm_tadx_msix_vecx_addr_t;

static inline uint64_t CAVM_TADX_MSIX_VECX_ADDR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TADX_MSIX_VECX_ADDR(uint64_t a, uint64_t b)
{
    if ((a<=31) && (b==0))
        return 0x87e054010000ll + 0x20000ll * ((a) & 0x1f) + 0x10ll * ((b) & 0x0);
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
    /* struct cavm_tadx_msix_vecx_ctl_s cn; */
};
typedef union cavm_tadx_msix_vecx_ctl cavm_tadx_msix_vecx_ctl_t;

static inline uint64_t CAVM_TADX_MSIX_VECX_CTL(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TADX_MSIX_VECX_CTL(uint64_t a, uint64_t b)
{
    if ((a<=31) && (b==0))
        return 0x87e054010008ll + 0x20000ll * ((a) & 0x1f) + 0x10ll * ((b) & 0x0);
    __cavm_csr_fatal("TADX_MSIX_VECX_CTL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_TADX_MSIX_VECX_CTL(a,b) cavm_tadx_msix_vecx_ctl_t
#define bustype_CAVM_TADX_MSIX_VECX_CTL(a,b) CSR_TYPE_RSL
#define basename_CAVM_TADX_MSIX_VECX_CTL(a,b) "TADX_MSIX_VECX_CTL"
#define device_bar_CAVM_TADX_MSIX_VECX_CTL(a,b) 0x4 /* PF_BAR4 */
#define busnum_CAVM_TADX_MSIX_VECX_CTL(a,b) (a)
#define arguments_CAVM_TADX_MSIX_VECX_CTL(a,b) (a),(b),-1,-1

/**
 * Register (RSL) tad#_scratch
 *
 * INTERNAL: TAD General Purpose Scratch Register
 *
 * These registers are reset only by hardware during chip cold reset. The values of the CSR
 * fields in these registers do not change during chip warm or soft resets.
 */
union cavm_tadx_scratch
{
    uint64_t u;
    struct cavm_tadx_scratch_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t scratch               : 8;  /**< [  7:  0](R/W) General purpose scratch register. */
#else /* Word 0 - Little Endian */
        uint64_t scratch               : 8;  /**< [  7:  0](R/W) General purpose scratch register. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tadx_scratch_s cn; */
};
typedef union cavm_tadx_scratch cavm_tadx_scratch_t;

static inline uint64_t CAVM_TADX_SCRATCH(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TADX_SCRATCH(uint64_t a)
{
    if (a<=31)
        return 0x87e054000000ll + 0x20000ll * ((a) & 0x1f);
    __cavm_csr_fatal("TADX_SCRATCH", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TADX_SCRATCH(a) cavm_tadx_scratch_t
#define bustype_CAVM_TADX_SCRATCH(a) CSR_TYPE_RSL
#define basename_CAVM_TADX_SCRATCH(a) "TADX_SCRATCH"
#define device_bar_CAVM_TADX_SCRATCH(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TADX_SCRATCH(a) (a)
#define arguments_CAVM_TADX_SCRATCH(a) (a),-1,-1,-1

#endif /* __CAVM_CSRS_TAD_H__ */
