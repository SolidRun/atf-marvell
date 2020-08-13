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
#define CAVM_TAD_BAR_E_TADX_PF_BAR0(a) (0x87e200000000ll + 0x1000000ll * (a))
#define CAVM_TAD_BAR_E_TADX_PF_BAR0_SIZE 0x800000ull
#define CAVM_TAD_BAR_E_TADX_PF_BAR4(a) (0x87e200800000ll + 0x1000000ll * (a))
#define CAVM_TAD_BAR_E_TADX_PF_BAR4_SIZE 0x800000ull

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
    if (a<=127)
        return 0x87e200000010ll + 0x1000000ll * ((a) & 0x7f);
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
    if (a<=127)
        return 0x87e200000018ll + 0x1000000ll * ((a) & 0x7f);
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
    if (a<=127)
        return 0x87e200000020ll + 0x1000000ll * ((a) & 0x7f);
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
    if (a<=127)
        return 0x87e200000028ll + 0x1000000ll * ((a) & 0x7f);
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
    if (a<=127)
        return 0x87e200000030ll + 0x1000000ll * ((a) & 0x7f);
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
    if (a<=127)
        return 0x87e200000038ll + 0x1000000ll * ((a) & 0x7f);
    __cavm_csr_fatal("TADX_CACHE_FLUSH_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TADX_CACHE_FLUSH_STATUS(a) cavm_tadx_cache_flush_status_t
#define bustype_CAVM_TADX_CACHE_FLUSH_STATUS(a) CSR_TYPE_RSL
#define basename_CAVM_TADX_CACHE_FLUSH_STATUS(a) "TADX_CACHE_FLUSH_STATUS"
#define device_bar_CAVM_TADX_CACHE_FLUSH_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TADX_CACHE_FLUSH_STATUS(a) (a)
#define arguments_CAVM_TADX_CACHE_FLUSH_STATUS(a) (a),-1,-1,-1

/**
 * Register (RSL) tad#_dbe_dbg_cnt
 *
 * INTERNAL: TAD DBE Detection Counter Registers
 *
 * This register keeps track of the number of double-bit errors arriving on the DAT
 * mesh into the TAD from MSW in saturating counters. For debug purposes only - no
 * correction.
 *
 * Internal:
 * FIXME: Not really architected yet.
 */
union cavm_tadx_dbe_dbg_cnt
{
    uint64_t u;
    struct cavm_tadx_dbe_dbg_cnt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ow3                   : 16; /**< [ 63: 48](R/W/H) Current double-bit error counter value for OW3. */
        uint64_t ow2                   : 16; /**< [ 47: 32](R/W/H) Current double-bit error counter value for OW2. */
        uint64_t ow1                   : 16; /**< [ 31: 16](R/W/H) Current double-bit error counter value for OW1. */
        uint64_t ow0                   : 16; /**< [ 15:  0](R/W/H) Current double-bit error counter value for OW0. */
#else /* Word 0 - Little Endian */
        uint64_t ow0                   : 16; /**< [ 15:  0](R/W/H) Current double-bit error counter value for OW0. */
        uint64_t ow1                   : 16; /**< [ 31: 16](R/W/H) Current double-bit error counter value for OW1. */
        uint64_t ow2                   : 16; /**< [ 47: 32](R/W/H) Current double-bit error counter value for OW2. */
        uint64_t ow3                   : 16; /**< [ 63: 48](R/W/H) Current double-bit error counter value for OW3. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tadx_dbe_dbg_cnt_s cn; */
};
typedef union cavm_tadx_dbe_dbg_cnt cavm_tadx_dbe_dbg_cnt_t;

static inline uint64_t CAVM_TADX_DBE_DBG_CNT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TADX_DBE_DBG_CNT(uint64_t a)
{
    if (a<=127)
        return 0x87e200000060ll + 0x1000000ll * ((a) & 0x7f);
    __cavm_csr_fatal("TADX_DBE_DBG_CNT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TADX_DBE_DBG_CNT(a) cavm_tadx_dbe_dbg_cnt_t
#define bustype_CAVM_TADX_DBE_DBG_CNT(a) CSR_TYPE_RSL
#define basename_CAVM_TADX_DBE_DBG_CNT(a) "TADX_DBE_DBG_CNT"
#define device_bar_CAVM_TADX_DBE_DBG_CNT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TADX_DBE_DBG_CNT(a) (a)
#define arguments_CAVM_TADX_DBE_DBG_CNT(a) (a),-1,-1,-1

/**
 * Register (RSL) tad#_derr_addr
 *
 * TAD DAT Error Address Register
 * This register records error address for Data Error interrupts occuring in data read
 * from the LLC, FBF or SBF. The first [DATMBE, FBFMBE, SBFMBE] error will lock the
 * register until the logged error type is cleared; [DATSBE, FBFSBE, SBFSBE] errors
 * lock the register until either the logged error type is cleared or a [DATMBE,
 * FBFMBE, SBFMBE] error is logged. Only one of [*MBE, *SBE] should be set at a
 * time. In the event the register is read with all [*MBE] and [*SBE] equal to 0 during
 * interrupt handling that is an indication that, due to a register set/clear race,
 * information about one or more errors was lost while processing an earlier
 * error. [DISCUSSION OF HOW TO SCRUB ERRORS]
 */
union cavm_tadx_derr_addr
{
    uint64_t u;
    struct cavm_tadx_derr_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t datmbe                : 1;  /**< [ 63: 63](RO/H) Logged information is for a TAD()_INT_W1C[DATMBE] error. */
        uint64_t fbfmbe                : 1;  /**< [ 62: 62](RO/H) Logged information is for a TAD()_INT_W1C[FBFMBE] error. */
        uint64_t sbfmbe                : 1;  /**< [ 61: 61](RO/H) Logged information is for a TAD()_INT_W1C[SBFMBE] error. */
        uint64_t datsbe                : 1;  /**< [ 60: 60](RO/H) Logged information is for a TAD()_INT_W1C[DATSBE] error. */
        uint64_t fbfsbe                : 1;  /**< [ 59: 59](RO/H) Logged information is for a TAD()_INT_W1C[FBFSBE] error. */
        uint64_t sbfsbe                : 1;  /**< [ 58: 58](RO/H) Logged information is for a TAD()_INT_W1C[SBFSBE] error. */
        uint64_t reserved_53_57        : 5;
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
        uint64_t reserved_53_57        : 5;
        uint64_t sbfsbe                : 1;  /**< [ 58: 58](RO/H) Logged information is for a TAD()_INT_W1C[SBFSBE] error. */
        uint64_t fbfsbe                : 1;  /**< [ 59: 59](RO/H) Logged information is for a TAD()_INT_W1C[FBFSBE] error. */
        uint64_t datsbe                : 1;  /**< [ 60: 60](RO/H) Logged information is for a TAD()_INT_W1C[DATSBE] error. */
        uint64_t sbfmbe                : 1;  /**< [ 61: 61](RO/H) Logged information is for a TAD()_INT_W1C[SBFMBE] error. */
        uint64_t fbfmbe                : 1;  /**< [ 62: 62](RO/H) Logged information is for a TAD()_INT_W1C[FBFMBE] error. */
        uint64_t datmbe                : 1;  /**< [ 63: 63](RO/H) Logged information is for a TAD()_INT_W1C[DATMBE] error. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tadx_derr_addr_s cn; */
};
typedef union cavm_tadx_derr_addr cavm_tadx_derr_addr_t;

static inline uint64_t CAVM_TADX_DERR_ADDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TADX_DERR_ADDR(uint64_t a)
{
    if (a<=127)
        return 0x87e200000218ll + 0x1000000ll * ((a) & 0x7f);
    __cavm_csr_fatal("TADX_DERR_ADDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TADX_DERR_ADDR(a) cavm_tadx_derr_addr_t
#define bustype_CAVM_TADX_DERR_ADDR(a) CSR_TYPE_RSL
#define basename_CAVM_TADX_DERR_ADDR(a) "TADX_DERR_ADDR"
#define device_bar_CAVM_TADX_DERR_ADDR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TADX_DERR_ADDR(a) (a)
#define arguments_CAVM_TADX_DERR_ADDR(a) (a),-1,-1,-1

/**
 * Register (RSL) tad#_ecc_dbg_en
 *
 * INTERNAL: TAD ECC Error Detection Counter Control Registers
 *
 * This register enables counting of the number of single and double bit errors on the
 * DAT mesh coming into the TAD from MSW.
 * For debug purposes only, no SBE correction.
 *
 * Internal:
 * FIXME: Not really architected yet.
 */
union cavm_tadx_ecc_dbg_en
{
    uint64_t u;
    struct cavm_tadx_ecc_dbg_en_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t sbe                   : 1;  /**< [  1:  1](R/W) Enable counting the number of SBEs seen on the DAT mesh in TAD_SBE_DBG_CNT. */
        uint64_t dbe                   : 1;  /**< [  0:  0](R/W) Enable counting the number of DBEs seen on the DAT mesh in TAD_DBE_DBG_CNT. */
#else /* Word 0 - Little Endian */
        uint64_t dbe                   : 1;  /**< [  0:  0](R/W) Enable counting the number of DBEs seen on the DAT mesh in TAD_DBE_DBG_CNT. */
        uint64_t sbe                   : 1;  /**< [  1:  1](R/W) Enable counting the number of SBEs seen on the DAT mesh in TAD_SBE_DBG_CNT. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tadx_ecc_dbg_en_s cn; */
};
typedef union cavm_tadx_ecc_dbg_en cavm_tadx_ecc_dbg_en_t;

static inline uint64_t CAVM_TADX_ECC_DBG_EN(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TADX_ECC_DBG_EN(uint64_t a)
{
    if (a<=127)
        return 0x87e200000050ll + 0x1000000ll * ((a) & 0x7f);
    __cavm_csr_fatal("TADX_ECC_DBG_EN", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TADX_ECC_DBG_EN(a) cavm_tadx_ecc_dbg_en_t
#define bustype_CAVM_TADX_ECC_DBG_EN(a) CSR_TYPE_RSL
#define basename_CAVM_TADX_ECC_DBG_EN(a) "TADX_ECC_DBG_EN"
#define device_bar_CAVM_TADX_ECC_DBG_EN(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TADX_ECC_DBG_EN(a) (a)
#define arguments_CAVM_TADX_ECC_DBG_EN(a) (a),-1,-1,-1

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
    if (a<=127)
        return 0x87e200000008ll + 0x1000000ll * ((a) & 0x7f);
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
        uint64_t reserved_5_63         : 59;
        uint64_t dat_perr              : 1;  /**< [  4:  4](R/W1C/H) Reads or clears enable for TAD(0..127)_INT_W1C[DAT_PERR]. */
        uint64_t rsp_perr              : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for TAD(0..127)_INT_W1C[RSP_PERR]. */
        uint64_t req_perr              : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for TAD(0..127)_INT_W1C[REQ_PERR]. */
        uint64_t wrnxm                 : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for TAD(0..127)_INT_W1C[WRNXM]. */
        uint64_t rdnxm                 : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for TAD(0..127)_INT_W1C[RDNXM]. */
#else /* Word 0 - Little Endian */
        uint64_t rdnxm                 : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for TAD(0..127)_INT_W1C[RDNXM]. */
        uint64_t wrnxm                 : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for TAD(0..127)_INT_W1C[WRNXM]. */
        uint64_t req_perr              : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for TAD(0..127)_INT_W1C[REQ_PERR]. */
        uint64_t rsp_perr              : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for TAD(0..127)_INT_W1C[RSP_PERR]. */
        uint64_t dat_perr              : 1;  /**< [  4:  4](R/W1C/H) Reads or clears enable for TAD(0..127)_INT_W1C[DAT_PERR]. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tadx_int_ena_w1c_s cn; */
};
typedef union cavm_tadx_int_ena_w1c cavm_tadx_int_ena_w1c_t;

static inline uint64_t CAVM_TADX_INT_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TADX_INT_ENA_W1C(uint64_t a)
{
    if (a<=127)
        return 0x87e200008010ll + 0x1000000ll * ((a) & 0x7f);
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
        uint64_t reserved_5_63         : 59;
        uint64_t dat_perr              : 1;  /**< [  4:  4](R/W1S/H) Reads or sets enable for TAD(0..127)_INT_W1C[DAT_PERR]. */
        uint64_t rsp_perr              : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for TAD(0..127)_INT_W1C[RSP_PERR]. */
        uint64_t req_perr              : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for TAD(0..127)_INT_W1C[REQ_PERR]. */
        uint64_t wrnxm                 : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for TAD(0..127)_INT_W1C[WRNXM]. */
        uint64_t rdnxm                 : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for TAD(0..127)_INT_W1C[RDNXM]. */
#else /* Word 0 - Little Endian */
        uint64_t rdnxm                 : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for TAD(0..127)_INT_W1C[RDNXM]. */
        uint64_t wrnxm                 : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for TAD(0..127)_INT_W1C[WRNXM]. */
        uint64_t req_perr              : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for TAD(0..127)_INT_W1C[REQ_PERR]. */
        uint64_t rsp_perr              : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for TAD(0..127)_INT_W1C[RSP_PERR]. */
        uint64_t dat_perr              : 1;  /**< [  4:  4](R/W1S/H) Reads or sets enable for TAD(0..127)_INT_W1C[DAT_PERR]. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tadx_int_ena_w1s_s cn; */
};
typedef union cavm_tadx_int_ena_w1s cavm_tadx_int_ena_w1s_t;

static inline uint64_t CAVM_TADX_INT_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TADX_INT_ENA_W1S(uint64_t a)
{
    if (a<=127)
        return 0x87e200008018ll + 0x1000000ll * ((a) & 0x7f);
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
        uint64_t reserved_5_63         : 59;
        uint64_t dat_perr              : 1;  /**< [  4:  4](R/W1C/H) Data parity error bit TBD */
        uint64_t rsp_perr              : 1;  /**< [  3:  3](R/W1C/H) Response parity error bit TBD */
        uint64_t req_perr              : 1;  /**< [  2:  2](R/W1C/H) Request parity error bit TBD */
        uint64_t wrnxm                 : 1;  /**< [  1:  1](R/W1C/H) TBD */
        uint64_t rdnxm                 : 1;  /**< [  0:  0](R/W1C/H) TBD */
#else /* Word 0 - Little Endian */
        uint64_t rdnxm                 : 1;  /**< [  0:  0](R/W1C/H) TBD */
        uint64_t wrnxm                 : 1;  /**< [  1:  1](R/W1C/H) TBD */
        uint64_t req_perr              : 1;  /**< [  2:  2](R/W1C/H) Request parity error bit TBD */
        uint64_t rsp_perr              : 1;  /**< [  3:  3](R/W1C/H) Response parity error bit TBD */
        uint64_t dat_perr              : 1;  /**< [  4:  4](R/W1C/H) Data parity error bit TBD */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tadx_int_w1c_s cn; */
};
typedef union cavm_tadx_int_w1c cavm_tadx_int_w1c_t;

static inline uint64_t CAVM_TADX_INT_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TADX_INT_W1C(uint64_t a)
{
    if (a<=127)
        return 0x87e200008000ll + 0x1000000ll * ((a) & 0x7f);
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
        uint64_t reserved_5_63         : 59;
        uint64_t dat_perr              : 1;  /**< [  4:  4](R/W1S/H) Reads or sets TAD(0..127)_INT_W1C[DAT_PERR]. */
        uint64_t rsp_perr              : 1;  /**< [  3:  3](R/W1S/H) Reads or sets TAD(0..127)_INT_W1C[RSP_PERR]. */
        uint64_t req_perr              : 1;  /**< [  2:  2](R/W1S/H) Reads or sets TAD(0..127)_INT_W1C[REQ_PERR]. */
        uint64_t wrnxm                 : 1;  /**< [  1:  1](R/W1S/H) Reads or sets TAD(0..127)_INT_W1C[WRNXM]. */
        uint64_t rdnxm                 : 1;  /**< [  0:  0](R/W1S/H) Reads or sets TAD(0..127)_INT_W1C[RDNXM]. */
#else /* Word 0 - Little Endian */
        uint64_t rdnxm                 : 1;  /**< [  0:  0](R/W1S/H) Reads or sets TAD(0..127)_INT_W1C[RDNXM]. */
        uint64_t wrnxm                 : 1;  /**< [  1:  1](R/W1S/H) Reads or sets TAD(0..127)_INT_W1C[WRNXM]. */
        uint64_t req_perr              : 1;  /**< [  2:  2](R/W1S/H) Reads or sets TAD(0..127)_INT_W1C[REQ_PERR]. */
        uint64_t rsp_perr              : 1;  /**< [  3:  3](R/W1S/H) Reads or sets TAD(0..127)_INT_W1C[RSP_PERR]. */
        uint64_t dat_perr              : 1;  /**< [  4:  4](R/W1S/H) Reads or sets TAD(0..127)_INT_W1C[DAT_PERR]. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tadx_int_w1s_s cn; */
};
typedef union cavm_tadx_int_w1s cavm_tadx_int_w1s_t;

static inline uint64_t CAVM_TADX_INT_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TADX_INT_W1S(uint64_t a)
{
    if (a<=127)
        return 0x87e200008008ll + 0x1000000ll * ((a) & 0x7f);
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
 * TAD Memory Paritioning Resource Count Registers
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
    /* struct cavm_tadx_mpamx_rcnt_s cn; */
};
typedef union cavm_tadx_mpamx_rcnt cavm_tadx_mpamx_rcnt_t;

static inline uint64_t CAVM_TADX_MPAMX_RCNT(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TADX_MPAMX_RCNT(uint64_t a, uint64_t b)
{
    if ((a<=127) && (b<=127))
        return 0x87e200002000ll + 0x1000000ll * ((a) & 0x7f) + 0x10ll * ((b) & 0x7f);
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
    if ((a<=127) && (b==0))
        return 0x87e2008f0000ll + 0x1000000ll * ((a) & 0x7f) + 8ll * ((b) & 0x0);
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
    if ((a<=127) && (b==0))
        return 0x87e200800000ll + 0x1000000ll * ((a) & 0x7f) + 0x10ll * ((b) & 0x0);
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
    if ((a<=127) && (b==0))
        return 0x87e200800008ll + 0x1000000ll * ((a) & 0x7f) + 0x10ll * ((b) & 0x0);
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
    /* struct cavm_tadx_nderr_addr_s cn; */
};
typedef union cavm_tadx_nderr_addr cavm_tadx_nderr_addr_t;

static inline uint64_t CAVM_TADX_NDERR_ADDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TADX_NDERR_ADDR(uint64_t a)
{
    if (a<=127)
        return 0x87e200000208ll + 0x1000000ll * ((a) & 0x7f);
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
 * REQ_PERR, RSP_PERR, DAT_PERR]. The first [WRNXM, REQ_PERR, RSP_PERR, DAT_PERR] error
 * will lock the register until the logged error type is cleared; [RDNXM] errors lock
 * the register until either the logged error type is cleared or a [WRNXM, REQ_PERR,
 * RSP_PERR, DAT_PERR] error is logged. See TAD_NDERR_ADDR for error address logging.
 */
union cavm_tadx_nderr_info
{
    uint64_t u;
    struct cavm_tadx_nderr_info_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t rdnxm                 : 1;  /**< [ 63: 63](RO/H) Logged information is for a TAD()_INT_W1C[RDNXM] error. */
        uint64_t wrnxm                 : 1;  /**< [ 62: 62](RO/H) Logged information is for a TAD()_INT_W1C[WRNXM] error. */
        uint64_t req_perr              : 1;  /**< [ 61: 61](RO/H) Logged information is for a TAD()_INT_W1C[REQ_PERR] error. */
        uint64_t rsp_perr              : 1;  /**< [ 60: 60](RO/H) Logged information is for a TAD()_INT_W1C[RSP_PERR] error. */
        uint64_t dat_perr              : 1;  /**< [ 59: 59](RO/H) Logged information is for a TAD()_INT_W1C[DAT_PERR] error. */
        uint64_t reserved_18_58        : 41;
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
        uint64_t reserved_18_58        : 41;
        uint64_t dat_perr              : 1;  /**< [ 59: 59](RO/H) Logged information is for a TAD()_INT_W1C[DAT_PERR] error. */
        uint64_t rsp_perr              : 1;  /**< [ 60: 60](RO/H) Logged information is for a TAD()_INT_W1C[RSP_PERR] error. */
        uint64_t req_perr              : 1;  /**< [ 61: 61](RO/H) Logged information is for a TAD()_INT_W1C[REQ_PERR] error. */
        uint64_t wrnxm                 : 1;  /**< [ 62: 62](RO/H) Logged information is for a TAD()_INT_W1C[WRNXM] error. */
        uint64_t rdnxm                 : 1;  /**< [ 63: 63](RO/H) Logged information is for a TAD()_INT_W1C[RDNXM] error. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tadx_nderr_info_s cn; */
};
typedef union cavm_tadx_nderr_info cavm_tadx_nderr_info_t;

static inline uint64_t CAVM_TADX_NDERR_INFO(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TADX_NDERR_INFO(uint64_t a)
{
    if (a<=127)
        return 0x87e200000200ll + 0x1000000ll * ((a) & 0x7f);
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
 * Internal:
 * FIXME: TAD_PRF_SEL_E not yet defined.
 * FIXME: add attribute: rtlgen_extern: "TAD_PFC"
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
    if ((a<=127) && (b<=3))
        return 0x87e200000800ll + 0x1000000ll * ((a) & 0x7f) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("TADX_PFCX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_TADX_PFCX(a,b) cavm_tadx_pfcx_t
#define bustype_CAVM_TADX_PFCX(a,b) CSR_TYPE_RSL
#define basename_CAVM_TADX_PFCX(a,b) "TADX_PFCX"
#define device_bar_CAVM_TADX_PFCX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TADX_PFCX(a,b) (a)
#define arguments_CAVM_TADX_PFCX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) tad#_prf
 *
 * TAD Performance Counter Control Registers
 * All four counters are equivalent and can use any of the defined selects.
 * Internal:
 * FIXME: TAD_PRF_SEL_E not yet defined.
 */
union cavm_tadx_prf
{
    uint64_t u;
    struct cavm_tadx_prf_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t cnt3sel               : 8;  /**< [ 31: 24](R/W) Selects event to count for TAD_PFC(3). Enumerated by TAD_PRF_SEL_E. */
        uint64_t cnt2sel               : 8;  /**< [ 23: 16](R/W) Selects event to count for TAD_PFC(2). Enumerated by TAD_PRF_SEL_E. */
        uint64_t cnt1sel               : 8;  /**< [ 15:  8](R/W) Selects event to count for TAD_PFC(1). Enumerated by TAD_PRF_SEL_E. */
        uint64_t cnt0sel               : 8;  /**< [  7:  0](R/W) Selects event to count for TAD_PFC(0). Enumerated by TAD_PRF_SEL_E. */
#else /* Word 0 - Little Endian */
        uint64_t cnt0sel               : 8;  /**< [  7:  0](R/W) Selects event to count for TAD_PFC(0). Enumerated by TAD_PRF_SEL_E. */
        uint64_t cnt1sel               : 8;  /**< [ 15:  8](R/W) Selects event to count for TAD_PFC(1). Enumerated by TAD_PRF_SEL_E. */
        uint64_t cnt2sel               : 8;  /**< [ 23: 16](R/W) Selects event to count for TAD_PFC(2). Enumerated by TAD_PRF_SEL_E. */
        uint64_t cnt3sel               : 8;  /**< [ 31: 24](R/W) Selects event to count for TAD_PFC(3). Enumerated by TAD_PRF_SEL_E. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tadx_prf_s cn; */
};
typedef union cavm_tadx_prf cavm_tadx_prf_t;

static inline uint64_t CAVM_TADX_PRF(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TADX_PRF(uint64_t a)
{
    if (a<=127)
        return 0x87e200000068ll + 0x1000000ll * ((a) & 0x7f);
    __cavm_csr_fatal("TADX_PRF", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TADX_PRF(a) cavm_tadx_prf_t
#define bustype_CAVM_TADX_PRF(a) CSR_TYPE_RSL
#define basename_CAVM_TADX_PRF(a) "TADX_PRF"
#define device_bar_CAVM_TADX_PRF(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TADX_PRF(a) (a)
#define arguments_CAVM_TADX_PRF(a) (a),-1,-1,-1

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
        uint64_t cnt                   : 7;  /**< [  6:  0](R/W/H) Number of requests stored in Buffers/IFBs.
                                                                 This count is used to determine CBUSY[1] in TAD responses. */
#else /* Word 0 - Little Endian */
        uint64_t cnt                   : 7;  /**< [  6:  0](R/W/H) Number of requests stored in Buffers/IFBs.
                                                                 This count is used to determine CBUSY[1] in TAD responses. */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tadx_req_rcnt_s cn; */
};
typedef union cavm_tadx_req_rcnt cavm_tadx_req_rcnt_t;

static inline uint64_t CAVM_TADX_REQ_RCNT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TADX_REQ_RCNT(uint64_t a)
{
    if (a<=127)
        return 0x87e200002008ll + 0x1000000ll * ((a) & 0x7f);
    __cavm_csr_fatal("TADX_REQ_RCNT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TADX_REQ_RCNT(a) cavm_tadx_req_rcnt_t
#define bustype_CAVM_TADX_REQ_RCNT(a) CSR_TYPE_RSL
#define basename_CAVM_TADX_REQ_RCNT(a) "TADX_REQ_RCNT"
#define device_bar_CAVM_TADX_REQ_RCNT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TADX_REQ_RCNT(a) (a)
#define arguments_CAVM_TADX_REQ_RCNT(a) (a),-1,-1,-1

/**
 * Register (RSL) tad#_sbe_dbg_cnt
 *
 * INTERNAL: TAD SBE Detection Counter Registers
 *
 * This register keeps track of the number of single-bit errors arriving on the DAT
 * mesh into the TAD from MSW in saturating counters. For debug purposes only - no
 * correction.
 *
 * Internal:
 * FIXME: Not really architected yet.
 */
union cavm_tadx_sbe_dbg_cnt
{
    uint64_t u;
    struct cavm_tadx_sbe_dbg_cnt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ow3                   : 16; /**< [ 63: 48](R/W/H) Current single-bit error counter value for OW3. */
        uint64_t ow2                   : 16; /**< [ 47: 32](R/W/H) Current single-bit error counter value for OW2. */
        uint64_t ow1                   : 16; /**< [ 31: 16](R/W/H) Current single-bit error counter value for OW1. */
        uint64_t ow0                   : 16; /**< [ 15:  0](R/W/H) Current single-bit error counter value for OW0. */
#else /* Word 0 - Little Endian */
        uint64_t ow0                   : 16; /**< [ 15:  0](R/W/H) Current single-bit error counter value for OW0. */
        uint64_t ow1                   : 16; /**< [ 31: 16](R/W/H) Current single-bit error counter value for OW1. */
        uint64_t ow2                   : 16; /**< [ 47: 32](R/W/H) Current single-bit error counter value for OW2. */
        uint64_t ow3                   : 16; /**< [ 63: 48](R/W/H) Current single-bit error counter value for OW3. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tadx_sbe_dbg_cnt_s cn; */
};
typedef union cavm_tadx_sbe_dbg_cnt cavm_tadx_sbe_dbg_cnt_t;

static inline uint64_t CAVM_TADX_SBE_DBG_CNT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TADX_SBE_DBG_CNT(uint64_t a)
{
    if (a<=127)
        return 0x87e200000058ll + 0x1000000ll * ((a) & 0x7f);
    __cavm_csr_fatal("TADX_SBE_DBG_CNT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TADX_SBE_DBG_CNT(a) cavm_tadx_sbe_dbg_cnt_t
#define bustype_CAVM_TADX_SBE_DBG_CNT(a) CSR_TYPE_RSL
#define basename_CAVM_TADX_SBE_DBG_CNT(a) "TADX_SBE_DBG_CNT"
#define device_bar_CAVM_TADX_SBE_DBG_CNT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TADX_SBE_DBG_CNT(a) (a)
#define arguments_CAVM_TADX_SBE_DBG_CNT(a) (a),-1,-1,-1

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
    if (a<=127)
        return 0x87e200000000ll + 0x1000000ll * ((a) & 0x7f);
    __cavm_csr_fatal("TADX_SCRATCH", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TADX_SCRATCH(a) cavm_tadx_scratch_t
#define bustype_CAVM_TADX_SCRATCH(a) CSR_TYPE_RSL
#define basename_CAVM_TADX_SCRATCH(a) "TADX_SCRATCH"
#define device_bar_CAVM_TADX_SCRATCH(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TADX_SCRATCH(a) (a)
#define arguments_CAVM_TADX_SCRATCH(a) (a),-1,-1,-1

#endif /* __CAVM_CSRS_TAD_H__ */
