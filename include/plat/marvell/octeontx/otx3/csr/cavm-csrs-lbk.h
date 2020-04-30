#ifndef __CAVM_CSRS_LBK_H__
#define __CAVM_CSRS_LBK_H__
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
 * OcteonTX LBK.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration lbk_bar_e
 *
 * LBK Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define CAVM_LBK_BAR_E_LBKX_PF_BAR0(a) (0x87e018000000ll + 0x1000000ll * (a))
#define CAVM_LBK_BAR_E_LBKX_PF_BAR0_SIZE 0x10000ull

/**
 * Enumeration lbk_connect_e
 *
 * LBK Source Connection Enumeration
 * Enumerates LBK()_CONST[SRC] and LBK()_CONST[DEST].
 */
#define CAVM_LBK_CONNECT_E_NIXX(a) (0 + (a))

/**
 * Register (RSL) lbk#_bp_test
 *
 * INTERNAL: Loopback Backpressure Test Register
 */
union cavm_lbkx_bp_test
{
    uint64_t u;
    struct cavm_lbkx_bp_test_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t enable                : 4;  /**< [ 63: 60](R/W) Enable test mode. For diagnostic use only.
                                                                 Internal:
                                                                 Once a bit is set, random backpressure is generated
                                                                 at the corresponding point to allow for more frequent backpressure.
                                                                 \<63\> = Reserved.
                                                                 \<62\> = Reserved.
                                                                 \<61\> = Backpressure express FIFO controller from sending out X2P request that is
                                                                 asking for X2P grant.
                                                                 \<60\> = Backpressure normal FIFO controller from sending out X2P request that is
                                                                 asking for X2P grant. */
        uint64_t reserved_24_59        : 36;
        uint64_t bp_cfg                : 8;  /**< [ 23: 16](R/W) Backpressure weight. For diagnostic use only.
                                                                 Internal:
                                                                 There are 2 backpressure configuration bits per enable, with the two bits
                                                                 defined as 0x0=100% of the time, 0x1=75% of the time, 0x2=50% of the time,
                                                                 0x3=25% of the time.
                                                                   \<23:22\> = Reserved.
                                                                   \<21:20\> = Reserved.
                                                                   \<19:18\> = Config 1 for bit 61.
                                                                   \<17:16\> = Config 0 for bit 60. */
        uint64_t reserved_12_15        : 4;
        uint64_t lfsr_freq             : 12; /**< [ 11:  0](R/W) Test LFSR update frequency in coprocessor-clocks minus one.
                                                                 For non-100% bp configurations, a small lfsr frequency will cause more frequent
                                                                 toggling of the backpressure signal while a larger frequency will produce longer
                                                                 segments of asserted or deasserted backpressure. */
#else /* Word 0 - Little Endian */
        uint64_t lfsr_freq             : 12; /**< [ 11:  0](R/W) Test LFSR update frequency in coprocessor-clocks minus one.
                                                                 For non-100% bp configurations, a small lfsr frequency will cause more frequent
                                                                 toggling of the backpressure signal while a larger frequency will produce longer
                                                                 segments of asserted or deasserted backpressure. */
        uint64_t reserved_12_15        : 4;
        uint64_t bp_cfg                : 8;  /**< [ 23: 16](R/W) Backpressure weight. For diagnostic use only.
                                                                 Internal:
                                                                 There are 2 backpressure configuration bits per enable, with the two bits
                                                                 defined as 0x0=100% of the time, 0x1=75% of the time, 0x2=50% of the time,
                                                                 0x3=25% of the time.
                                                                   \<23:22\> = Reserved.
                                                                   \<21:20\> = Reserved.
                                                                   \<19:18\> = Config 1 for bit 61.
                                                                   \<17:16\> = Config 0 for bit 60. */
        uint64_t reserved_24_59        : 36;
        uint64_t enable                : 4;  /**< [ 63: 60](R/W) Enable test mode. For diagnostic use only.
                                                                 Internal:
                                                                 Once a bit is set, random backpressure is generated
                                                                 at the corresponding point to allow for more frequent backpressure.
                                                                 \<63\> = Reserved.
                                                                 \<62\> = Reserved.
                                                                 \<61\> = Backpressure express FIFO controller from sending out X2P request that is
                                                                 asking for X2P grant.
                                                                 \<60\> = Backpressure normal FIFO controller from sending out X2P request that is
                                                                 asking for X2P grant. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_lbkx_bp_test_s cn; */
};
typedef union cavm_lbkx_bp_test cavm_lbkx_bp_test_t;

static inline uint64_t CAVM_LBKX_BP_TEST(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_LBKX_BP_TEST(uint64_t a)
{
    if (a==0)
        return 0x87e018000028ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("LBKX_BP_TEST", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_LBKX_BP_TEST(a) cavm_lbkx_bp_test_t
#define bustype_CAVM_LBKX_BP_TEST(a) CSR_TYPE_RSL
#define basename_CAVM_LBKX_BP_TEST(a) "LBKX_BP_TEST"
#define device_bar_CAVM_LBKX_BP_TEST(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_LBKX_BP_TEST(a) (a)
#define arguments_CAVM_LBKX_BP_TEST(a) (a),-1,-1,-1

/**
 * Register (RSL) lbk#_ch#_pkind
 *
 * LBK Channel to Port Kind Register
 */
union cavm_lbkx_chx_pkind
{
    uint64_t u;
    struct cavm_lbkx_chx_pkind_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t pkind                 : 6;  /**< [  5:  0](R/W) Loopback pkind for the respective loopback channel. */
#else /* Word 0 - Little Endian */
        uint64_t pkind                 : 6;  /**< [  5:  0](R/W) Loopback pkind for the respective loopback channel. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_lbkx_chx_pkind_s cn; */
};
typedef union cavm_lbkx_chx_pkind cavm_lbkx_chx_pkind_t;

static inline uint64_t CAVM_LBKX_CHX_PKIND(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_LBKX_CHX_PKIND(uint64_t a, uint64_t b)
{
    if ((a==0) && (b<=63))
        return 0x87e018000200ll + 0x1000000ll * ((a) & 0x0) + 8ll * ((b) & 0x3f);
    __cavm_csr_fatal("LBKX_CHX_PKIND", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_LBKX_CHX_PKIND(a,b) cavm_lbkx_chx_pkind_t
#define bustype_CAVM_LBKX_CHX_PKIND(a,b) CSR_TYPE_RSL
#define basename_CAVM_LBKX_CHX_PKIND(a,b) "LBKX_CHX_PKIND"
#define device_bar_CAVM_LBKX_CHX_PKIND(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_LBKX_CHX_PKIND(a,b) (a)
#define arguments_CAVM_LBKX_CHX_PKIND(a,b) (a),(b),-1,-1

/**
 * Register (RSL) lbk#_clk_gate_ctl
 *
 * LBK Reset Register
 * This register is for diagnostic use only.
 */
union cavm_lbkx_clk_gate_ctl
{
    uint64_t u;
    struct cavm_lbkx_clk_gate_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t dis                   : 1;  /**< [  0:  0](R/W) Clock gate disable. When set, forces gated clock to always on. For diagnostic
                                                                 use only. */
#else /* Word 0 - Little Endian */
        uint64_t dis                   : 1;  /**< [  0:  0](R/W) Clock gate disable. When set, forces gated clock to always on. For diagnostic
                                                                 use only. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_lbkx_clk_gate_ctl_s cn; */
};
typedef union cavm_lbkx_clk_gate_ctl cavm_lbkx_clk_gate_ctl_t;

static inline uint64_t CAVM_LBKX_CLK_GATE_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_LBKX_CLK_GATE_CTL(uint64_t a)
{
    if (a==0)
        return 0x87e018000008ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("LBKX_CLK_GATE_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_LBKX_CLK_GATE_CTL(a) cavm_lbkx_clk_gate_ctl_t
#define bustype_CAVM_LBKX_CLK_GATE_CTL(a) CSR_TYPE_RSL
#define basename_CAVM_LBKX_CLK_GATE_CTL(a) "LBKX_CLK_GATE_CTL"
#define device_bar_CAVM_LBKX_CLK_GATE_CTL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_LBKX_CLK_GATE_CTL(a) (a)
#define arguments_CAVM_LBKX_CLK_GATE_CTL(a) (a),-1,-1,-1

/**
 * Register (RSL) lbk#_const
 *
 * LBK Constants Register
 * This register contains constants for software discovery.
 */
union cavm_lbkx_const
{
    uint64_t u;
    struct cavm_lbkx_const_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t chan                  : 16; /**< [ 47: 32](RO) Number of channels supported. */
        uint64_t dest                  : 4;  /**< [ 31: 28](RO) What block this LBK transmits traffic to. Enumerated by LBK_CONNECT_E.
                                                                 For LBK(0), indicates LBK_CONNECT_E::NIX(0).

                                                                 Internal:
                                                                 lbk.v takes this from input straps set by the instantiation. */
        uint64_t src                   : 4;  /**< [ 27: 24](RO) What block this LBK receives traffic from. Enumerated by LBK_CONNECT_E.
                                                                 For LBK(0), indicates LBK_CONNECT_E::NIX(0).

                                                                 Internal:
                                                                 lbk.v takes this from input straps set by the instantiation. */
        uint64_t buf_size              : 24; /**< [ 23:  0](RO) Number of bytes in each loopback data FIFO (express/non-express).
                                                                 Internal:
                                                                 lbk.v takes this from input straps set by the instantiation. */
#else /* Word 0 - Little Endian */
        uint64_t buf_size              : 24; /**< [ 23:  0](RO) Number of bytes in each loopback data FIFO (express/non-express).
                                                                 Internal:
                                                                 lbk.v takes this from input straps set by the instantiation. */
        uint64_t src                   : 4;  /**< [ 27: 24](RO) What block this LBK receives traffic from. Enumerated by LBK_CONNECT_E.
                                                                 For LBK(0), indicates LBK_CONNECT_E::NIX(0).

                                                                 Internal:
                                                                 lbk.v takes this from input straps set by the instantiation. */
        uint64_t dest                  : 4;  /**< [ 31: 28](RO) What block this LBK transmits traffic to. Enumerated by LBK_CONNECT_E.
                                                                 For LBK(0), indicates LBK_CONNECT_E::NIX(0).

                                                                 Internal:
                                                                 lbk.v takes this from input straps set by the instantiation. */
        uint64_t chan                  : 16; /**< [ 47: 32](RO) Number of channels supported. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_lbkx_const_s cn; */
};
typedef union cavm_lbkx_const cavm_lbkx_const_t;

static inline uint64_t CAVM_LBKX_CONST(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_LBKX_CONST(uint64_t a)
{
    if (a==0)
        return 0x87e018000010ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("LBKX_CONST", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_LBKX_CONST(a) cavm_lbkx_const_t
#define bustype_CAVM_LBKX_CONST(a) CSR_TYPE_RSL
#define basename_CAVM_LBKX_CONST(a) "LBKX_CONST"
#define device_bar_CAVM_LBKX_CONST(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_LBKX_CONST(a) (a)
#define arguments_CAVM_LBKX_CONST(a) (a),-1,-1,-1

/**
 * Register (RSL) lbk#_const1
 *
 * LBK Constants 1 Register
 * This register contains constants for software discovery.
 */
union cavm_lbkx_const1
{
    uint64_t u;
    struct cavm_lbkx_const1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_lbkx_const1_s cn; */
};
typedef union cavm_lbkx_const1 cavm_lbkx_const1_t;

static inline uint64_t CAVM_LBKX_CONST1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_LBKX_CONST1(uint64_t a)
{
    if (a==0)
        return 0x87e018000018ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("LBKX_CONST1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_LBKX_CONST1(a) cavm_lbkx_const1_t
#define bustype_CAVM_LBKX_CONST1(a) CSR_TYPE_RSL
#define basename_CAVM_LBKX_CONST1(a) "LBKX_CONST1"
#define device_bar_CAVM_LBKX_CONST1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_LBKX_CONST1(a) (a)
#define arguments_CAVM_LBKX_CONST1(a) (a),-1,-1,-1

/**
 * Register (RSL) lbk#_csclk_active_pc
 *
 * LBK Conditional Clock Counter Register
 * This register counts conditional clocks cycles.
 */
union cavm_lbkx_csclk_active_pc
{
    uint64_t u;
    struct cavm_lbkx_csclk_active_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Count of conditional coprocessor-clock cycles since reset. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Count of conditional coprocessor-clock cycles since reset. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_lbkx_csclk_active_pc_s cn; */
};
typedef union cavm_lbkx_csclk_active_pc cavm_lbkx_csclk_active_pc_t;

static inline uint64_t CAVM_LBKX_CSCLK_ACTIVE_PC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_LBKX_CSCLK_ACTIVE_PC(uint64_t a)
{
    if (a==0)
        return 0x87e018000030ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("LBKX_CSCLK_ACTIVE_PC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_LBKX_CSCLK_ACTIVE_PC(a) cavm_lbkx_csclk_active_pc_t
#define bustype_CAVM_LBKX_CSCLK_ACTIVE_PC(a) CSR_TYPE_RSL
#define basename_CAVM_LBKX_CSCLK_ACTIVE_PC(a) "LBKX_CSCLK_ACTIVE_PC"
#define device_bar_CAVM_LBKX_CSCLK_ACTIVE_PC(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_LBKX_CSCLK_ACTIVE_PC(a) (a)
#define arguments_CAVM_LBKX_CSCLK_ACTIVE_PC(a) (a),-1,-1,-1

/**
 * Register (RSL) lbk#_sft_rst
 *
 * LBK Reset Register
 */
union cavm_lbkx_sft_rst
{
    uint64_t u;
    struct cavm_lbkx_sft_rst_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t reset                 : 1;  /**< [  0:  0](R/W1) Reset. When set, causes a reset of LBK, excluding RSL. */
#else /* Word 0 - Little Endian */
        uint64_t reset                 : 1;  /**< [  0:  0](R/W1) Reset. When set, causes a reset of LBK, excluding RSL. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_lbkx_sft_rst_s cn; */
};
typedef union cavm_lbkx_sft_rst cavm_lbkx_sft_rst_t;

static inline uint64_t CAVM_LBKX_SFT_RST(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_LBKX_SFT_RST(uint64_t a)
{
    if (a==0)
        return 0x87e018000000ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("LBKX_SFT_RST", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_LBKX_SFT_RST(a) cavm_lbkx_sft_rst_t
#define bustype_CAVM_LBKX_SFT_RST(a) CSR_TYPE_RSL
#define basename_CAVM_LBKX_SFT_RST(a) "LBKX_SFT_RST"
#define device_bar_CAVM_LBKX_SFT_RST(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_LBKX_SFT_RST(a) (a)
#define arguments_CAVM_LBKX_SFT_RST(a) (a),-1,-1,-1

#endif /* __CAVM_CSRS_LBK_H__ */
