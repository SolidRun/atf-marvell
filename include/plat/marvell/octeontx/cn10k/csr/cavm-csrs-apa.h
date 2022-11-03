#ifndef __CAVM_CSRS_APA_H__
#define __CAVM_CSRS_APA_H__
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
 * OcteonTX APA.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration apa_bar_e
 *
 * APA Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define CAVM_APA_BAR_E_APAX_PF_BAR0(a) (0x87e340000000ll + 0x1000000ll * (a))
#define CAVM_APA_BAR_E_APAX_PF_BAR0_SIZE 0x100000ull
#define CAVM_APA_BAR_E_APAX_PF_BAR4(a) (0x87e340100000ll + 0x1000000ll * (a))
#define CAVM_APA_BAR_E_APAX_PF_BAR4_SIZE 0x100000ull

/**
 * Enumeration apa_int_vec_e
 *
 * APA MSI-X Vector Enumeration
 * Enumerates the MSI-X interrupt vectors.
 */
#define CAVM_APA_INT_VEC_E_APA_APAT_INT (5)
#define CAVM_APA_INT_VEC_E_APA_CLUSTER_PPU_INT_CLEAR (1)
#define CAVM_APA_INT_VEC_E_APA_CLUSTER_PPU_INT_SET (0)
#define CAVM_APA_INT_VEC_E_APA_CORE_ECC_INT (7)
#define CAVM_APA_INT_VEC_E_APA_CORE_PPU_INT_CLEAR (3)
#define CAVM_APA_INT_VEC_E_APA_CORE_PPU_INT_SET (2)
#define CAVM_APA_INT_VEC_E_APA_ECC_INT (6)
#define CAVM_APA_INT_VEC_E_APA_WDOG_INT (4)

/**
 * Enumeration apa_pll_sel_e
 *
 * APA PLL Selection Enumeration
 * Enumerates the values of APA_PLL[NEXT_PLL_SEL] and APA_PLL[CUR_PLL_SEL].
 */
#define CAVM_APA_PLL_SEL_E_ARO (6)
#define CAVM_APA_PLL_SEL_E_BYPASS (2)
#define CAVM_APA_PLL_SEL_E_OFF (3)
#define CAVM_APA_PLL_SEL_E_PLL0 (4)
#define CAVM_APA_PLL_SEL_E_PLL1 (5)
#define CAVM_APA_PLL_SEL_E_REFCLK (1)
#define CAVM_APA_PLL_SEL_E_RSVD (7)
#define CAVM_APA_PLL_SEL_E_RUNT (0)

/**
 * Register (RSL) apa#_apat_int_ena_w1c
 *
 * APA APAT Interrupt Enable Clear Registers
 * This register clears interrupt enable bits.
 */
union cavm_apax_apat_int_ena_w1c
{
    uint64_t u;
    struct cavm_apax_apat_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t apat                  : 1;  /**< [  0:  0](SR/W1C/H) Reads or clears enable for APA(0..23)_APAT_INT_W1C[APAT]. */
#else /* Word 0 - Little Endian */
        uint64_t apat                  : 1;  /**< [  0:  0](SR/W1C/H) Reads or clears enable for APA(0..23)_APAT_INT_W1C[APAT]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_apat_int_ena_w1c_s cn10; */
    /* struct cavm_apax_apat_int_ena_w1c_s cn10ka; */
    struct cavm_apax_apat_int_ena_w1c_cn10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t apat                  : 1;  /**< [  0:  0](SR/W1C/H) Reads or clears enable for APA(0..7)_APAT_INT_W1C[APAT]. */
#else /* Word 0 - Little Endian */
        uint64_t apat                  : 1;  /**< [  0:  0](SR/W1C/H) Reads or clears enable for APA(0..7)_APAT_INT_W1C[APAT]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } cn10kb;
    struct cavm_apax_apat_int_ena_w1c_cnf10ka
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t apat                  : 1;  /**< [  0:  0](SR/W1C/H) Reads or clears enable for APA(0..17)_APAT_INT_W1C[APAT]. */
#else /* Word 0 - Little Endian */
        uint64_t apat                  : 1;  /**< [  0:  0](SR/W1C/H) Reads or clears enable for APA(0..17)_APAT_INT_W1C[APAT]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } cnf10ka;
    struct cavm_apax_apat_int_ena_w1c_cnf10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t apat                  : 1;  /**< [  0:  0](SR/W1C/H) Reads or clears enable for APA(0..11)_APAT_INT_W1C[APAT]. */
#else /* Word 0 - Little Endian */
        uint64_t apat                  : 1;  /**< [  0:  0](SR/W1C/H) Reads or clears enable for APA(0..11)_APAT_INT_W1C[APAT]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } cnf10kb;
};
typedef union cavm_apax_apat_int_ena_w1c cavm_apax_apat_int_ena_w1c_t;

static inline uint64_t CAVM_APAX_APAT_INT_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_APAT_INT_ENA_W1C(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e340001e10ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e340001e10ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e340001e10ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e340001e10ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("APAX_APAT_INT_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_APAT_INT_ENA_W1C(a) cavm_apax_apat_int_ena_w1c_t
#define bustype_CAVM_APAX_APAT_INT_ENA_W1C(a) CSR_TYPE_RSL
#define basename_CAVM_APAX_APAT_INT_ENA_W1C(a) "APAX_APAT_INT_ENA_W1C"
#define device_bar_CAVM_APAX_APAT_INT_ENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_APAT_INT_ENA_W1C(a) (a)
#define arguments_CAVM_APAX_APAT_INT_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (RSL) apa#_apat_int_ena_w1s
 *
 * APA APAT Interrupt Enable Set Registers
 * This register sets interrupt enable bits.
 */
union cavm_apax_apat_int_ena_w1s
{
    uint64_t u;
    struct cavm_apax_apat_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t apat                  : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets enable for APA(0..23)_APAT_INT_W1C[APAT]. */
#else /* Word 0 - Little Endian */
        uint64_t apat                  : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets enable for APA(0..23)_APAT_INT_W1C[APAT]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_apat_int_ena_w1s_s cn10; */
    /* struct cavm_apax_apat_int_ena_w1s_s cn10ka; */
    struct cavm_apax_apat_int_ena_w1s_cn10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t apat                  : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets enable for APA(0..7)_APAT_INT_W1C[APAT]. */
#else /* Word 0 - Little Endian */
        uint64_t apat                  : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets enable for APA(0..7)_APAT_INT_W1C[APAT]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } cn10kb;
    struct cavm_apax_apat_int_ena_w1s_cnf10ka
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t apat                  : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets enable for APA(0..17)_APAT_INT_W1C[APAT]. */
#else /* Word 0 - Little Endian */
        uint64_t apat                  : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets enable for APA(0..17)_APAT_INT_W1C[APAT]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } cnf10ka;
    struct cavm_apax_apat_int_ena_w1s_cnf10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t apat                  : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets enable for APA(0..11)_APAT_INT_W1C[APAT]. */
#else /* Word 0 - Little Endian */
        uint64_t apat                  : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets enable for APA(0..11)_APAT_INT_W1C[APAT]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } cnf10kb;
};
typedef union cavm_apax_apat_int_ena_w1s cavm_apax_apat_int_ena_w1s_t;

static inline uint64_t CAVM_APAX_APAT_INT_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_APAT_INT_ENA_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e340001e18ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e340001e18ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e340001e18ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e340001e18ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("APAX_APAT_INT_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_APAT_INT_ENA_W1S(a) cavm_apax_apat_int_ena_w1s_t
#define bustype_CAVM_APAX_APAT_INT_ENA_W1S(a) CSR_TYPE_RSL
#define basename_CAVM_APAX_APAT_INT_ENA_W1S(a) "APAX_APAT_INT_ENA_W1S"
#define device_bar_CAVM_APAX_APAT_INT_ENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_APAT_INT_ENA_W1S(a) (a)
#define arguments_CAVM_APAX_APAT_INT_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (RSL) apa#_apat_int_w1c
 *
 * APA APAT Interrupt Register
 * This register is reports interrupt status.
 */
union cavm_apax_apat_int_w1c
{
    uint64_t u;
    struct cavm_apax_apat_int_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t apat                  : 1;  /**< [  0:  0](SR/W1C/H) Address trapper triggered. */
#else /* Word 0 - Little Endian */
        uint64_t apat                  : 1;  /**< [  0:  0](SR/W1C/H) Address trapper triggered. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_apat_int_w1c_s cn; */
};
typedef union cavm_apax_apat_int_w1c cavm_apax_apat_int_w1c_t;

static inline uint64_t CAVM_APAX_APAT_INT_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_APAT_INT_W1C(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e340001e00ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e340001e00ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e340001e00ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e340001e00ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("APAX_APAT_INT_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_APAT_INT_W1C(a) cavm_apax_apat_int_w1c_t
#define bustype_CAVM_APAX_APAT_INT_W1C(a) CSR_TYPE_RSL
#define basename_CAVM_APAX_APAT_INT_W1C(a) "APAX_APAT_INT_W1C"
#define device_bar_CAVM_APAX_APAT_INT_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_APAT_INT_W1C(a) (a)
#define arguments_CAVM_APAX_APAT_INT_W1C(a) (a),-1,-1,-1

/**
 * Register (RSL) apa#_apat_int_w1s
 *
 * APA APAT Interrupt Set Registers
 * This register sets interrupt bits.
 */
union cavm_apax_apat_int_w1s
{
    uint64_t u;
    struct cavm_apax_apat_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t apat                  : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets APA(0..23)_APAT_INT_W1C[APAT]. */
#else /* Word 0 - Little Endian */
        uint64_t apat                  : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets APA(0..23)_APAT_INT_W1C[APAT]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_apat_int_w1s_s cn10; */
    /* struct cavm_apax_apat_int_w1s_s cn10ka; */
    struct cavm_apax_apat_int_w1s_cn10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t apat                  : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets APA(0..7)_APAT_INT_W1C[APAT]. */
#else /* Word 0 - Little Endian */
        uint64_t apat                  : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets APA(0..7)_APAT_INT_W1C[APAT]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } cn10kb;
    struct cavm_apax_apat_int_w1s_cnf10ka
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t apat                  : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets APA(0..17)_APAT_INT_W1C[APAT]. */
#else /* Word 0 - Little Endian */
        uint64_t apat                  : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets APA(0..17)_APAT_INT_W1C[APAT]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } cnf10ka;
    struct cavm_apax_apat_int_w1s_cnf10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t apat                  : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets APA(0..11)_APAT_INT_W1C[APAT]. */
#else /* Word 0 - Little Endian */
        uint64_t apat                  : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets APA(0..11)_APAT_INT_W1C[APAT]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } cnf10kb;
};
typedef union cavm_apax_apat_int_w1s cavm_apax_apat_int_w1s_t;

static inline uint64_t CAVM_APAX_APAT_INT_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_APAT_INT_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e340001e08ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e340001e08ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e340001e08ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e340001e08ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("APAX_APAT_INT_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_APAT_INT_W1S(a) cavm_apax_apat_int_w1s_t
#define bustype_CAVM_APAX_APAT_INT_W1S(a) CSR_TYPE_RSL
#define basename_CAVM_APAX_APAT_INT_W1S(a) "APAX_APAT_INT_W1S"
#define device_bar_CAVM_APAX_APAT_INT_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_APAT_INT_W1S(a) (a)
#define arguments_CAVM_APAX_APAT_INT_W1S(a) (a),-1,-1,-1

/**
 * Register (RSL) apa#_apat_rdat#
 *
 * APA APAT Read Data Register
 */
union cavm_apax_apat_rdatx
{
    uint64_t u;
    struct cavm_apax_apat_rdatx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t dat                   : 64; /**< [ 63:  0](SR/W) Contents of 32B response data packet for trapped request. Within a data packet,
                                                                 all bytes are located at their natural byte positions. For a transaction that must
                                                                 return read data, this register must be written before APA()_APAT_RSP. */
#else /* Word 0 - Little Endian */
        uint64_t dat                   : 64; /**< [ 63:  0](SR/W) Contents of 32B response data packet for trapped request. Within a data packet,
                                                                 all bytes are located at their natural byte positions. For a transaction that must
                                                                 return read data, this register must be written before APA()_APAT_RSP. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_apat_rdatx_s cn10; */
    /* struct cavm_apax_apat_rdatx_s cn10ka_p1; */
    struct cavm_apax_apat_rdatx_cn10ka_p2
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t dat                   : 64; /**< [ 63:  0](SR/W) Contents of 32B response data packet for trapped request. Within a data packet,
                                                                 all bytes are located at their natural byte positions. For a read, this
                                                                 register must be written before APA()_APAT_RSP. */
#else /* Word 0 - Little Endian */
        uint64_t dat                   : 64; /**< [ 63:  0](SR/W) Contents of 32B response data packet for trapped request. Within a data packet,
                                                                 all bytes are located at their natural byte positions. For a read, this
                                                                 register must be written before APA()_APAT_RSP. */
#endif /* Word 0 - End */
    } cn10ka_p2;
    /* struct cavm_apax_apat_rdatx_s cn10kb; */
    /* struct cavm_apax_apat_rdatx_s cnf10ka; */
    /* struct cavm_apax_apat_rdatx_s cnf10kb; */
};
typedef union cavm_apax_apat_rdatx cavm_apax_apat_rdatx_t;

static inline uint64_t CAVM_APAX_APAT_RDATX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_APAT_RDATX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=23) && (b<=3)))
        return 0x87e340001240ll + 0x1000000ll * ((a) & 0x1f) + 8ll * ((b) & 0x3);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=7) && (b<=3)))
        return 0x87e340001240ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=17) && (b<=3)))
        return 0x87e340001240ll + 0x1000000ll * ((a) & 0x1f) + 8ll * ((b) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=11) && (b<=3)))
        return 0x87e340001240ll + 0x1000000ll * ((a) & 0xf) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("APAX_APAT_RDATX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_APAT_RDATX(a,b) cavm_apax_apat_rdatx_t
#define bustype_CAVM_APAX_APAT_RDATX(a,b) CSR_TYPE_RSL
#define basename_CAVM_APAX_APAT_RDATX(a,b) "APAX_APAT_RDATX"
#define device_bar_CAVM_APAX_APAT_RDATX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_APAT_RDATX(a,b) (a)
#define arguments_CAVM_APAX_APAT_RDATX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) apa#_apat_req
 *
 * APA APAT Request Register
 * This register records information about an APAT trapped request.  See CHI-D
 * specifications for more information.
 */
union cavm_apax_apat_req
{
    uint64_t u;
    struct cavm_apax_apat_req_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t valid                 : 1;  /**< [ 63: 63](SRO/H) Set when a request has been trapped.  Cleared by writing APA()_APT_RSP. */
        uint64_t has_apat_ext          : 1;  /**< [ 62: 62](SRO) If set, indicates that these register fields/registers are implemented. Attempts
                                                                 to access these fields/register if this bit is zero may result in fault:
                                                                 APA_APAT_REQ[DEVICE].
                                                                 APA_APAT_REQ[ENDIAN].
                                                                 APA_APAT_WDAT_BYTE_EN. */
        uint64_t reserved_61           : 1;
        uint64_t index                 : 5;  /**< [ 60: 56](SRO/H) Index of the vector number that matched. */
        uint64_t reserved_25_55        : 31;
        uint64_t device                : 1;  /**< [ 24: 24](SRO/H) Indicates if memory type is Device or Normal. 0 = Normal Memory. 1 = Device Memory. */
        uint64_t endian                : 1;  /**< [ 23: 23](SRO/H) Endian Format of the data. 0 = Little Endian. 1 = Big Endian. */
        uint64_t opcode                : 7;  /**< [ 22: 16](SRO/H) CHI opcode field. Supported OPCODES:
                                                                 0x04 = READNOSNP.
                                                                 0x1c = WRITENOSNPPTL.
                                                                 0x30 = ATOMICLOADADD.
                                                                 0x38 = ATOMICSWAP.
                                                                 0x39 = ATOMICCOMPARE. */
        uint64_t tracetag              : 1;  /**< [ 15: 15](SRO/H) CHI trace tag. */
        uint64_t size                  : 3;  /**< [ 14: 12](SRO/H) CHI REQ size. 0x0 = 1 byte. 0x1 = 2 bytes. 0x2 = 4 bytes. 0x3 = 8 bytes. */
        uint64_t txnid                 : 12; /**< [ 11:  0](SRO/H) CHI transaction id. */
#else /* Word 0 - Little Endian */
        uint64_t txnid                 : 12; /**< [ 11:  0](SRO/H) CHI transaction id. */
        uint64_t size                  : 3;  /**< [ 14: 12](SRO/H) CHI REQ size. 0x0 = 1 byte. 0x1 = 2 bytes. 0x2 = 4 bytes. 0x3 = 8 bytes. */
        uint64_t tracetag              : 1;  /**< [ 15: 15](SRO/H) CHI trace tag. */
        uint64_t opcode                : 7;  /**< [ 22: 16](SRO/H) CHI opcode field. Supported OPCODES:
                                                                 0x04 = READNOSNP.
                                                                 0x1c = WRITENOSNPPTL.
                                                                 0x30 = ATOMICLOADADD.
                                                                 0x38 = ATOMICSWAP.
                                                                 0x39 = ATOMICCOMPARE. */
        uint64_t endian                : 1;  /**< [ 23: 23](SRO/H) Endian Format of the data. 0 = Little Endian. 1 = Big Endian. */
        uint64_t device                : 1;  /**< [ 24: 24](SRO/H) Indicates if memory type is Device or Normal. 0 = Normal Memory. 1 = Device Memory. */
        uint64_t reserved_25_55        : 31;
        uint64_t index                 : 5;  /**< [ 60: 56](SRO/H) Index of the vector number that matched. */
        uint64_t reserved_61           : 1;
        uint64_t has_apat_ext          : 1;  /**< [ 62: 62](SRO) If set, indicates that these register fields/registers are implemented. Attempts
                                                                 to access these fields/register if this bit is zero may result in fault:
                                                                 APA_APAT_REQ[DEVICE].
                                                                 APA_APAT_REQ[ENDIAN].
                                                                 APA_APAT_WDAT_BYTE_EN. */
        uint64_t valid                 : 1;  /**< [ 63: 63](SRO/H) Set when a request has been trapped.  Cleared by writing APA()_APT_RSP. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_apat_req_s cn10; */
    struct cavm_apax_apat_req_cn10ka_p1
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t valid                 : 1;  /**< [ 63: 63](SRO/H) Set when a request has been trapped.  Cleared by writing APA()_APT_RSP. */
        uint64_t reserved_61_62        : 2;
        uint64_t index                 : 5;  /**< [ 60: 56](SRO/H) Index of the vector number that matched. */
        uint64_t reserved_23_55        : 33;
        uint64_t opcode                : 7;  /**< [ 22: 16](SRO/H) CHI opcode field. Supported OPCODES:
                                                                 0x04 = READNOSNP.
                                                                 0x1c = WRITENOSNPPTL.
                                                                 0x30 = ATOMICLOADADD.
                                                                 0x38 = ATOMICSWAP.
                                                                 0x39 = ATOMICCOMPARE. */
        uint64_t tracetag              : 1;  /**< [ 15: 15](SRO/H) CHI trace tag. */
        uint64_t size                  : 3;  /**< [ 14: 12](SRO/H) CHI REQ size. 0x0 = 1 byte. 0x1 = 2 bytes. 0x2 = 4 bytes. 0x3 = 8 bytes. */
        uint64_t txnid                 : 12; /**< [ 11:  0](SRO/H) CHI transaction id. */
#else /* Word 0 - Little Endian */
        uint64_t txnid                 : 12; /**< [ 11:  0](SRO/H) CHI transaction id. */
        uint64_t size                  : 3;  /**< [ 14: 12](SRO/H) CHI REQ size. 0x0 = 1 byte. 0x1 = 2 bytes. 0x2 = 4 bytes. 0x3 = 8 bytes. */
        uint64_t tracetag              : 1;  /**< [ 15: 15](SRO/H) CHI trace tag. */
        uint64_t opcode                : 7;  /**< [ 22: 16](SRO/H) CHI opcode field. Supported OPCODES:
                                                                 0x04 = READNOSNP.
                                                                 0x1c = WRITENOSNPPTL.
                                                                 0x30 = ATOMICLOADADD.
                                                                 0x38 = ATOMICSWAP.
                                                                 0x39 = ATOMICCOMPARE. */
        uint64_t reserved_23_55        : 33;
        uint64_t index                 : 5;  /**< [ 60: 56](SRO/H) Index of the vector number that matched. */
        uint64_t reserved_61_62        : 2;
        uint64_t valid                 : 1;  /**< [ 63: 63](SRO/H) Set when a request has been trapped.  Cleared by writing APA()_APT_RSP. */
#endif /* Word 0 - End */
    } cn10ka_p1;
    /* struct cavm_apax_apat_req_s cn10ka_p2; */
    struct cavm_apax_apat_req_cn10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t valid                 : 1;  /**< [ 63: 63](SRO/H) Set when a request has been trapped.  Cleared by writing APA()_APT_RSP. */
        uint64_t has_apat_ext          : 1;  /**< [ 62: 62](SRO) If set, indicates that these register fields/registers are implemented. Attempts
                                                                 to access these fields/register if this bit is zero may result in fault:
                                                                 APA_APAT_REQ[DEVICE].
                                                                 APA_APAT_REQ[ENDIAN].
                                                                 APA_APAT_WDAT_BYTE_EN. */
        uint64_t reserved_61           : 1;
        uint64_t index                 : 5;  /**< [ 60: 56](SRO/H) Index of the vector number that matched. */
        uint64_t reserved_25_55        : 31;
        uint64_t device                : 1;  /**< [ 24: 24](SRO/H) Indicates if memory type is Device or Normal. 0 = Normal Memory. 1 = Device Memory. */
        uint64_t endian                : 1;  /**< [ 23: 23](SRO/H) Endian Format of the data. 0 = Little Endian. 1 = Big Endian. */
        uint64_t opcode                : 7;  /**< [ 22: 16](SRO/H) CHI opcode field. Any opcode not listed will not be trapped.
                                                                 Supported OPCODES:
                                                                 0x04 = READNOSNP.
                                                                 0x1c = WRITENOSNPPTL.
                                                                 0x30 = ATOMICLOADADD.
                                                                 0x38 = ATOMICSWAP.
                                                                 0x39 = ATOMICCOMPARE. */
        uint64_t tracetag              : 1;  /**< [ 15: 15](SRO/H) CHI trace tag. */
        uint64_t size                  : 3;  /**< [ 14: 12](SRO/H) CHI REQ size. For AtomicCompare, data size is sum of the Compare and Swap data
                                                                 sizes. Sizes not listed are not supported and will not be trapped. 0x0 = 1 byte.
                                                                 0x1 = 2 bytes. 0x2 = 4 bytes. 0x3 = 8 bytes. 0x4 = 16 bytes. 0x5 = 32 bytes. */
        uint64_t txnid                 : 12; /**< [ 11:  0](SRO/H) CHI transaction id. */
#else /* Word 0 - Little Endian */
        uint64_t txnid                 : 12; /**< [ 11:  0](SRO/H) CHI transaction id. */
        uint64_t size                  : 3;  /**< [ 14: 12](SRO/H) CHI REQ size. For AtomicCompare, data size is sum of the Compare and Swap data
                                                                 sizes. Sizes not listed are not supported and will not be trapped. 0x0 = 1 byte.
                                                                 0x1 = 2 bytes. 0x2 = 4 bytes. 0x3 = 8 bytes. 0x4 = 16 bytes. 0x5 = 32 bytes. */
        uint64_t tracetag              : 1;  /**< [ 15: 15](SRO/H) CHI trace tag. */
        uint64_t opcode                : 7;  /**< [ 22: 16](SRO/H) CHI opcode field. Any opcode not listed will not be trapped.
                                                                 Supported OPCODES:
                                                                 0x04 = READNOSNP.
                                                                 0x1c = WRITENOSNPPTL.
                                                                 0x30 = ATOMICLOADADD.
                                                                 0x38 = ATOMICSWAP.
                                                                 0x39 = ATOMICCOMPARE. */
        uint64_t endian                : 1;  /**< [ 23: 23](SRO/H) Endian Format of the data. 0 = Little Endian. 1 = Big Endian. */
        uint64_t device                : 1;  /**< [ 24: 24](SRO/H) Indicates if memory type is Device or Normal. 0 = Normal Memory. 1 = Device Memory. */
        uint64_t reserved_25_55        : 31;
        uint64_t index                 : 5;  /**< [ 60: 56](SRO/H) Index of the vector number that matched. */
        uint64_t reserved_61           : 1;
        uint64_t has_apat_ext          : 1;  /**< [ 62: 62](SRO) If set, indicates that these register fields/registers are implemented. Attempts
                                                                 to access these fields/register if this bit is zero may result in fault:
                                                                 APA_APAT_REQ[DEVICE].
                                                                 APA_APAT_REQ[ENDIAN].
                                                                 APA_APAT_WDAT_BYTE_EN. */
        uint64_t valid                 : 1;  /**< [ 63: 63](SRO/H) Set when a request has been trapped.  Cleared by writing APA()_APT_RSP. */
#endif /* Word 0 - End */
    } cn10kb;
    /* struct cavm_apax_apat_req_cn10ka_p1 cnf10ka; */
    /* struct cavm_apax_apat_req_cn10ka_p1 cnf10kb; */
};
typedef union cavm_apax_apat_req cavm_apax_apat_req_t;

static inline uint64_t CAVM_APAX_APAT_REQ(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_APAT_REQ(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e340001200ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e340001200ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e340001200ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e340001200ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("APAX_APAT_REQ", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_APAT_REQ(a) cavm_apax_apat_req_t
#define bustype_CAVM_APAX_APAT_REQ(a) CSR_TYPE_RSL
#define basename_CAVM_APAX_APAT_REQ(a) "APAX_APAT_REQ"
#define device_bar_CAVM_APAX_APAT_REQ(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_APAT_REQ(a) (a)
#define arguments_CAVM_APAX_APAT_REQ(a) (a),-1,-1,-1

/**
 * Register (RSL) apa#_apat_req_addr
 *
 * APA APAT Request Address Register
 * This register records the physical address of the trapped request.
 */
union cavm_apax_apat_req_addr
{
    uint64_t u;
    struct cavm_apax_apat_req_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_63           : 1;
        uint64_t ns                    : 1;  /**< [ 62: 62](SRO/H) Trapped a nonsecure world transaction. */
        uint64_t reserved_48_61        : 14;
        uint64_t addr                  : 48; /**< [ 47:  0](SRO/H) Trapped physical address. */
#else /* Word 0 - Little Endian */
        uint64_t addr                  : 48; /**< [ 47:  0](SRO/H) Trapped physical address. */
        uint64_t reserved_48_61        : 14;
        uint64_t ns                    : 1;  /**< [ 62: 62](SRO/H) Trapped a nonsecure world transaction. */
        uint64_t reserved_63           : 1;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_apat_req_addr_s cn; */
};
typedef union cavm_apax_apat_req_addr cavm_apax_apat_req_addr_t;

static inline uint64_t CAVM_APAX_APAT_REQ_ADDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_APAT_REQ_ADDR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e340001208ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e340001208ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e340001208ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e340001208ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("APAX_APAT_REQ_ADDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_APAT_REQ_ADDR(a) cavm_apax_apat_req_addr_t
#define bustype_CAVM_APAX_APAT_REQ_ADDR(a) CSR_TYPE_RSL
#define basename_CAVM_APAX_APAT_REQ_ADDR(a) "APAX_APAT_REQ_ADDR"
#define device_bar_CAVM_APAX_APAT_REQ_ADDR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_APAT_REQ_ADDR(a) (a)
#define arguments_CAVM_APAX_APAT_REQ_ADDR(a) (a),-1,-1,-1

/**
 * Register (RSL) apa#_apat_rsp
 *
 * APA APAT Response Register
 */
union cavm_apax_apat_rsp
{
    uint64_t u;
    struct cavm_apax_apat_rsp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t resperr               : 2;  /**< [  1:  0](SR/W) Response error for the trapped request response.  Writing this field will
                                                                 trigger a response to the core and also clear APA()_APAT_REQ.VALID.

                                                                   0x0 = Ok.
                                                                   0x1 = Exclusive Ok.
                                                                   0x2 = Data Error.
                                                                   0x3 = Non Data Error. */
#else /* Word 0 - Little Endian */
        uint64_t resperr               : 2;  /**< [  1:  0](SR/W) Response error for the trapped request response.  Writing this field will
                                                                 trigger a response to the core and also clear APA()_APAT_REQ.VALID.

                                                                   0x0 = Ok.
                                                                   0x1 = Exclusive Ok.
                                                                   0x2 = Data Error.
                                                                   0x3 = Non Data Error. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_apat_rsp_s cn; */
};
typedef union cavm_apax_apat_rsp cavm_apax_apat_rsp_t;

static inline uint64_t CAVM_APAX_APAT_RSP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_APAT_RSP(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e340001210ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e340001210ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e340001210ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e340001210ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("APAX_APAT_RSP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_APAT_RSP(a) cavm_apax_apat_rsp_t
#define bustype_CAVM_APAX_APAT_RSP(a) CSR_TYPE_RSL
#define basename_CAVM_APAX_APAT_RSP(a) "APAX_APAT_RSP"
#define device_bar_CAVM_APAX_APAT_RSP(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_APAT_RSP(a) (a)
#define arguments_CAVM_APAX_APAT_RSP(a) (a),-1,-1,-1

/**
 * Register (RSL) apa#_apat_vec#_addr
 *
 * APA APAT Vector Address Register
 * This register configures the address trapper.
 */
union cavm_apax_apat_vecx_addr
{
    uint64_t u;
    struct cavm_apax_apat_vecx_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t valid                 : 1;  /**< [ 63: 63](SR/W) One means match this address. */
        uint64_t ns                    : 1;  /**< [ 62: 62](SR/W) Nonsecure world value. */
        uint64_t reserved_48_61        : 14;
        uint64_t addr                  : 48; /**< [ 47:  0](SR/W) Address value. Addreses that do not map to device memory are ignored,
                                                                 i.e. [ADDR]\<47\> must be one. */
#else /* Word 0 - Little Endian */
        uint64_t addr                  : 48; /**< [ 47:  0](SR/W) Address value. Addreses that do not map to device memory are ignored,
                                                                 i.e. [ADDR]\<47\> must be one. */
        uint64_t reserved_48_61        : 14;
        uint64_t ns                    : 1;  /**< [ 62: 62](SR/W) Nonsecure world value. */
        uint64_t valid                 : 1;  /**< [ 63: 63](SR/W) One means match this address. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_apat_vecx_addr_s cn; */
};
typedef union cavm_apax_apat_vecx_addr cavm_apax_apat_vecx_addr_t;

static inline uint64_t CAVM_APAX_APAT_VECX_ADDR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_APAT_VECX_ADDR(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=23) && (b<=31)))
        return 0x87e340001000ll + 0x1000000ll * ((a) & 0x1f) + 0x10ll * ((b) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=7) && (b<=31)))
        return 0x87e340001000ll + 0x1000000ll * ((a) & 0x7) + 0x10ll * ((b) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=17) && (b<=31)))
        return 0x87e340001000ll + 0x1000000ll * ((a) & 0x1f) + 0x10ll * ((b) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=11) && (b<=31)))
        return 0x87e340001000ll + 0x1000000ll * ((a) & 0xf) + 0x10ll * ((b) & 0x1f);
    __cavm_csr_fatal("APAX_APAT_VECX_ADDR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_APAT_VECX_ADDR(a,b) cavm_apax_apat_vecx_addr_t
#define bustype_CAVM_APAX_APAT_VECX_ADDR(a,b) CSR_TYPE_RSL
#define basename_CAVM_APAX_APAT_VECX_ADDR(a,b) "APAX_APAT_VECX_ADDR"
#define device_bar_CAVM_APAX_APAT_VECX_ADDR(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_APAT_VECX_ADDR(a,b) (a)
#define arguments_CAVM_APAX_APAT_VECX_ADDR(a,b) (a),(b),-1,-1

/**
 * Register (RSL) apa#_apat_vec#_mask
 *
 * APA APAT_VEC_MASK Register
 * Mask bits.  1 means corresponding NS/ADDR bits must match in the request.
 */
union cavm_apax_apat_vecx_mask
{
    uint64_t u;
    struct cavm_apax_apat_vecx_mask_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_63           : 1;
        uint64_t ns                    : 1;  /**< [ 62: 62](SR/W) When one, match nonsecure world value in APA_APAT_VEC()_ADDR[NS]. */
        uint64_t reserved_48_61        : 14;
        uint64_t addr                  : 48; /**< [ 47:  0](SR/W) When one, match address value in APA_APAT_VEC()_ADDR[ADDR]. [ADDR]\<47\> must be one. */
#else /* Word 0 - Little Endian */
        uint64_t addr                  : 48; /**< [ 47:  0](SR/W) When one, match address value in APA_APAT_VEC()_ADDR[ADDR]. [ADDR]\<47\> must be one. */
        uint64_t reserved_48_61        : 14;
        uint64_t ns                    : 1;  /**< [ 62: 62](SR/W) When one, match nonsecure world value in APA_APAT_VEC()_ADDR[NS]. */
        uint64_t reserved_63           : 1;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_apat_vecx_mask_s cn; */
};
typedef union cavm_apax_apat_vecx_mask cavm_apax_apat_vecx_mask_t;

static inline uint64_t CAVM_APAX_APAT_VECX_MASK(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_APAT_VECX_MASK(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=23) && (b<=31)))
        return 0x87e340001008ll + 0x1000000ll * ((a) & 0x1f) + 0x10ll * ((b) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=7) && (b<=31)))
        return 0x87e340001008ll + 0x1000000ll * ((a) & 0x7) + 0x10ll * ((b) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=17) && (b<=31)))
        return 0x87e340001008ll + 0x1000000ll * ((a) & 0x1f) + 0x10ll * ((b) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=11) && (b<=31)))
        return 0x87e340001008ll + 0x1000000ll * ((a) & 0xf) + 0x10ll * ((b) & 0x1f);
    __cavm_csr_fatal("APAX_APAT_VECX_MASK", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_APAT_VECX_MASK(a,b) cavm_apax_apat_vecx_mask_t
#define bustype_CAVM_APAX_APAT_VECX_MASK(a,b) CSR_TYPE_RSL
#define basename_CAVM_APAX_APAT_VECX_MASK(a,b) "APAX_APAT_VECX_MASK"
#define device_bar_CAVM_APAX_APAT_VECX_MASK(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_APAT_VECX_MASK(a,b) (a)
#define arguments_CAVM_APAX_APAT_VECX_MASK(a,b) (a),(b),-1,-1

/**
 * Register (RSL) apa#_apat_wdat#
 *
 * APA APAT Write Data Register
 */
union cavm_apax_apat_wdatx
{
    uint64_t u;
    struct cavm_apax_apat_wdatx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t dat                   : 64; /**< [ 63:  0](SRO/H) Contents of 32B store data packet for trapped request. Within a data packet,
                                                                 all bytes are located at their natural byte positions. For ATOMICCOMPARE, the
                                                                 valid data is aligned to the total request size. The compare data is located
                                                                 in the half which contains the addressed location and the swap data is located
                                                                 in the remaining half of valid data. */
#else /* Word 0 - Little Endian */
        uint64_t dat                   : 64; /**< [ 63:  0](SRO/H) Contents of 32B store data packet for trapped request. Within a data packet,
                                                                 all bytes are located at their natural byte positions. For ATOMICCOMPARE, the
                                                                 valid data is aligned to the total request size. The compare data is located
                                                                 in the half which contains the addressed location and the swap data is located
                                                                 in the remaining half of valid data. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_apat_wdatx_s cn10; */
    /* struct cavm_apax_apat_wdatx_s cn10ka_p1; */
    struct cavm_apax_apat_wdatx_cn10ka_p2
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t dat                   : 64; /**< [ 63:  0](SRO/H) Contents of 32B store data packet for trapped request. Within a data packet,
                                                                 all bytes are located at their natural byte positions. */
#else /* Word 0 - Little Endian */
        uint64_t dat                   : 64; /**< [ 63:  0](SRO/H) Contents of 32B store data packet for trapped request. Within a data packet,
                                                                 all bytes are located at their natural byte positions. */
#endif /* Word 0 - End */
    } cn10ka_p2;
    /* struct cavm_apax_apat_wdatx_s cn10kb; */
    /* struct cavm_apax_apat_wdatx_s cnf10ka; */
    /* struct cavm_apax_apat_wdatx_s cnf10kb; */
};
typedef union cavm_apax_apat_wdatx cavm_apax_apat_wdatx_t;

static inline uint64_t CAVM_APAX_APAT_WDATX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_APAT_WDATX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=23) && (b<=3)))
        return 0x87e340001220ll + 0x1000000ll * ((a) & 0x1f) + 8ll * ((b) & 0x3);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=7) && (b<=3)))
        return 0x87e340001220ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=17) && (b<=3)))
        return 0x87e340001220ll + 0x1000000ll * ((a) & 0x1f) + 8ll * ((b) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=11) && (b<=3)))
        return 0x87e340001220ll + 0x1000000ll * ((a) & 0xf) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("APAX_APAT_WDATX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_APAT_WDATX(a,b) cavm_apax_apat_wdatx_t
#define bustype_CAVM_APAX_APAT_WDATX(a,b) CSR_TYPE_RSL
#define basename_CAVM_APAX_APAT_WDATX(a,b) "APAX_APAT_WDATX"
#define device_bar_CAVM_APAX_APAT_WDATX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_APAT_WDATX(a,b) (a)
#define arguments_CAVM_APAX_APAT_WDATX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) apa#_apat_wdat_be
 *
 * APA APAT Write Data Byte Enable Register
 */
union cavm_apax_apat_wdat_be
{
    uint64_t u;
    struct cavm_apax_apat_wdat_be_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t byte_en               : 32; /**< [ 31:  0](SRO/H) Byte enables for the 32B store data packet for trapped request. For Write
                                                                 transactions, a set byte enable means the corresponding data byte is valid
                                                                 and must be updated in cache/memory. If the byte enable is zero, the
                                                                 corresponding data byte must not be used. */
#else /* Word 0 - Little Endian */
        uint64_t byte_en               : 32; /**< [ 31:  0](SRO/H) Byte enables for the 32B store data packet for trapped request. For Write
                                                                 transactions, a set byte enable means the corresponding data byte is valid
                                                                 and must be updated in cache/memory. If the byte enable is zero, the
                                                                 corresponding data byte must not be used. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_apat_wdat_be_s cn; */
};
typedef union cavm_apax_apat_wdat_be cavm_apax_apat_wdat_be_t;

static inline uint64_t CAVM_APAX_APAT_WDAT_BE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_APAT_WDAT_BE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA_BX) && (a<=23))
        return 0x87e340001218ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e340001218ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("APAX_APAT_WDAT_BE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_APAT_WDAT_BE(a) cavm_apax_apat_wdat_be_t
#define bustype_CAVM_APAX_APAT_WDAT_BE(a) CSR_TYPE_RSL
#define basename_CAVM_APAX_APAT_WDAT_BE(a) "APAX_APAT_WDAT_BE"
#define device_bar_CAVM_APAX_APAT_WDAT_BE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_APAT_WDAT_BE(a) (a)
#define arguments_CAVM_APAX_APAT_WDAT_BE(a) (a),-1,-1,-1

/**
 * Register (RSL) apa#_core_ecc_int_ena_w1c
 *
 * APA Core ECC Interrupt Enable Clear Registers
 * This register clears interrupt enable bits.
 */
union cavm_apax_core_ecc_int_ena_w1c
{
    uint64_t u;
    struct cavm_apax_core_ecc_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t core_fault            : 1;  /**< [  1:  1](SR/W1C/H) Reads or clears enable for APA(0..23)_CORE_ECC_INT_W1C[CORE_FAULT]. */
        uint64_t core_err              : 1;  /**< [  0:  0](SR/W1C/H) Reads or clears enable for APA(0..23)_CORE_ECC_INT_W1C[CORE_ERR]. */
#else /* Word 0 - Little Endian */
        uint64_t core_err              : 1;  /**< [  0:  0](SR/W1C/H) Reads or clears enable for APA(0..23)_CORE_ECC_INT_W1C[CORE_ERR]. */
        uint64_t core_fault            : 1;  /**< [  1:  1](SR/W1C/H) Reads or clears enable for APA(0..23)_CORE_ECC_INT_W1C[CORE_FAULT]. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_core_ecc_int_ena_w1c_s cn10; */
    /* struct cavm_apax_core_ecc_int_ena_w1c_s cn10ka; */
    struct cavm_apax_core_ecc_int_ena_w1c_cn10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t core_fault            : 1;  /**< [  1:  1](SR/W1C/H) Reads or clears enable for APA(0..7)_CORE_ECC_INT_W1C[CORE_FAULT]. */
        uint64_t core_err              : 1;  /**< [  0:  0](SR/W1C/H) Reads or clears enable for APA(0..7)_CORE_ECC_INT_W1C[CORE_ERR]. */
#else /* Word 0 - Little Endian */
        uint64_t core_err              : 1;  /**< [  0:  0](SR/W1C/H) Reads or clears enable for APA(0..7)_CORE_ECC_INT_W1C[CORE_ERR]. */
        uint64_t core_fault            : 1;  /**< [  1:  1](SR/W1C/H) Reads or clears enable for APA(0..7)_CORE_ECC_INT_W1C[CORE_FAULT]. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } cn10kb;
    struct cavm_apax_core_ecc_int_ena_w1c_cnf10ka
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t core_fault            : 1;  /**< [  1:  1](SR/W1C/H) Reads or clears enable for APA(0..17)_CORE_ECC_INT_W1C[CORE_FAULT]. */
        uint64_t core_err              : 1;  /**< [  0:  0](SR/W1C/H) Reads or clears enable for APA(0..17)_CORE_ECC_INT_W1C[CORE_ERR]. */
#else /* Word 0 - Little Endian */
        uint64_t core_err              : 1;  /**< [  0:  0](SR/W1C/H) Reads or clears enable for APA(0..17)_CORE_ECC_INT_W1C[CORE_ERR]. */
        uint64_t core_fault            : 1;  /**< [  1:  1](SR/W1C/H) Reads or clears enable for APA(0..17)_CORE_ECC_INT_W1C[CORE_FAULT]. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } cnf10ka;
    struct cavm_apax_core_ecc_int_ena_w1c_cnf10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t core_fault            : 1;  /**< [  1:  1](SR/W1C/H) Reads or clears enable for APA(0..11)_CORE_ECC_INT_W1C[CORE_FAULT]. */
        uint64_t core_err              : 1;  /**< [  0:  0](SR/W1C/H) Reads or clears enable for APA(0..11)_CORE_ECC_INT_W1C[CORE_ERR]. */
#else /* Word 0 - Little Endian */
        uint64_t core_err              : 1;  /**< [  0:  0](SR/W1C/H) Reads or clears enable for APA(0..11)_CORE_ECC_INT_W1C[CORE_ERR]. */
        uint64_t core_fault            : 1;  /**< [  1:  1](SR/W1C/H) Reads or clears enable for APA(0..11)_CORE_ECC_INT_W1C[CORE_FAULT]. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } cnf10kb;
};
typedef union cavm_apax_core_ecc_int_ena_w1c cavm_apax_core_ecc_int_ena_w1c_t;

static inline uint64_t CAVM_APAX_CORE_ECC_INT_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_CORE_ECC_INT_ENA_W1C(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e340001e70ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e340001e70ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e340001e70ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e340001e70ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("APAX_CORE_ECC_INT_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_CORE_ECC_INT_ENA_W1C(a) cavm_apax_core_ecc_int_ena_w1c_t
#define bustype_CAVM_APAX_CORE_ECC_INT_ENA_W1C(a) CSR_TYPE_RSL
#define basename_CAVM_APAX_CORE_ECC_INT_ENA_W1C(a) "APAX_CORE_ECC_INT_ENA_W1C"
#define device_bar_CAVM_APAX_CORE_ECC_INT_ENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_CORE_ECC_INT_ENA_W1C(a) (a)
#define arguments_CAVM_APAX_CORE_ECC_INT_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (RSL) apa#_core_ecc_int_ena_w1s
 *
 * APA Core ECC Interrupt Enable Set Registers
 * This register sets interrupt enable bits.
 */
union cavm_apax_core_ecc_int_ena_w1s
{
    uint64_t u;
    struct cavm_apax_core_ecc_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t core_fault            : 1;  /**< [  1:  1](SR/W1S/H) Reads or sets enable for APA(0..23)_CORE_ECC_INT_W1C[CORE_FAULT]. */
        uint64_t core_err              : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets enable for APA(0..23)_CORE_ECC_INT_W1C[CORE_ERR]. */
#else /* Word 0 - Little Endian */
        uint64_t core_err              : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets enable for APA(0..23)_CORE_ECC_INT_W1C[CORE_ERR]. */
        uint64_t core_fault            : 1;  /**< [  1:  1](SR/W1S/H) Reads or sets enable for APA(0..23)_CORE_ECC_INT_W1C[CORE_FAULT]. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_core_ecc_int_ena_w1s_s cn10; */
    /* struct cavm_apax_core_ecc_int_ena_w1s_s cn10ka; */
    struct cavm_apax_core_ecc_int_ena_w1s_cn10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t core_fault            : 1;  /**< [  1:  1](SR/W1S/H) Reads or sets enable for APA(0..7)_CORE_ECC_INT_W1C[CORE_FAULT]. */
        uint64_t core_err              : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets enable for APA(0..7)_CORE_ECC_INT_W1C[CORE_ERR]. */
#else /* Word 0 - Little Endian */
        uint64_t core_err              : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets enable for APA(0..7)_CORE_ECC_INT_W1C[CORE_ERR]. */
        uint64_t core_fault            : 1;  /**< [  1:  1](SR/W1S/H) Reads or sets enable for APA(0..7)_CORE_ECC_INT_W1C[CORE_FAULT]. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } cn10kb;
    struct cavm_apax_core_ecc_int_ena_w1s_cnf10ka
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t core_fault            : 1;  /**< [  1:  1](SR/W1S/H) Reads or sets enable for APA(0..17)_CORE_ECC_INT_W1C[CORE_FAULT]. */
        uint64_t core_err              : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets enable for APA(0..17)_CORE_ECC_INT_W1C[CORE_ERR]. */
#else /* Word 0 - Little Endian */
        uint64_t core_err              : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets enable for APA(0..17)_CORE_ECC_INT_W1C[CORE_ERR]. */
        uint64_t core_fault            : 1;  /**< [  1:  1](SR/W1S/H) Reads or sets enable for APA(0..17)_CORE_ECC_INT_W1C[CORE_FAULT]. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } cnf10ka;
    struct cavm_apax_core_ecc_int_ena_w1s_cnf10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t core_fault            : 1;  /**< [  1:  1](SR/W1S/H) Reads or sets enable for APA(0..11)_CORE_ECC_INT_W1C[CORE_FAULT]. */
        uint64_t core_err              : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets enable for APA(0..11)_CORE_ECC_INT_W1C[CORE_ERR]. */
#else /* Word 0 - Little Endian */
        uint64_t core_err              : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets enable for APA(0..11)_CORE_ECC_INT_W1C[CORE_ERR]. */
        uint64_t core_fault            : 1;  /**< [  1:  1](SR/W1S/H) Reads or sets enable for APA(0..11)_CORE_ECC_INT_W1C[CORE_FAULT]. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } cnf10kb;
};
typedef union cavm_apax_core_ecc_int_ena_w1s cavm_apax_core_ecc_int_ena_w1s_t;

static inline uint64_t CAVM_APAX_CORE_ECC_INT_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_CORE_ECC_INT_ENA_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e340001e78ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e340001e78ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e340001e78ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e340001e78ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("APAX_CORE_ECC_INT_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_CORE_ECC_INT_ENA_W1S(a) cavm_apax_core_ecc_int_ena_w1s_t
#define bustype_CAVM_APAX_CORE_ECC_INT_ENA_W1S(a) CSR_TYPE_RSL
#define basename_CAVM_APAX_CORE_ECC_INT_ENA_W1S(a) "APAX_CORE_ECC_INT_ENA_W1S"
#define device_bar_CAVM_APAX_CORE_ECC_INT_ENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_CORE_ECC_INT_ENA_W1S(a) (a)
#define arguments_CAVM_APAX_CORE_ECC_INT_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (RSL) apa#_core_ecc_int_w1c
 *
 * APA Core ECC Interrupt Register
 * This register reports interrupt status for the Cluster/Core ECC.
 */
union cavm_apax_core_ecc_int_w1c
{
    uint64_t u;
    struct cavm_apax_core_ecc_int_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t core_fault            : 1;  /**< [  1:  1](SR/W1C/H) Fault indicator for a detected 1 or 2 bit ECC error in the core
                                                                 RAMs.  Bits CN down to 0 are for the L1 and L2 RAMs in each core. */
        uint64_t core_err              : 1;  /**< [  0:  0](SR/W1C/H) Error indicator for an ECC error that causes potential data
                                                                 corruption or loss of coherency.  Bits CN down to 0 are for the
                                                                 L1 and L2 RAMs in each core. */
#else /* Word 0 - Little Endian */
        uint64_t core_err              : 1;  /**< [  0:  0](SR/W1C/H) Error indicator for an ECC error that causes potential data
                                                                 corruption or loss of coherency.  Bits CN down to 0 are for the
                                                                 L1 and L2 RAMs in each core. */
        uint64_t core_fault            : 1;  /**< [  1:  1](SR/W1C/H) Fault indicator for a detected 1 or 2 bit ECC error in the core
                                                                 RAMs.  Bits CN down to 0 are for the L1 and L2 RAMs in each core. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_core_ecc_int_w1c_s cn; */
};
typedef union cavm_apax_core_ecc_int_w1c cavm_apax_core_ecc_int_w1c_t;

static inline uint64_t CAVM_APAX_CORE_ECC_INT_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_CORE_ECC_INT_W1C(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e340001e60ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e340001e60ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e340001e60ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e340001e60ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("APAX_CORE_ECC_INT_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_CORE_ECC_INT_W1C(a) cavm_apax_core_ecc_int_w1c_t
#define bustype_CAVM_APAX_CORE_ECC_INT_W1C(a) CSR_TYPE_RSL
#define basename_CAVM_APAX_CORE_ECC_INT_W1C(a) "APAX_CORE_ECC_INT_W1C"
#define device_bar_CAVM_APAX_CORE_ECC_INT_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_CORE_ECC_INT_W1C(a) (a)
#define arguments_CAVM_APAX_CORE_ECC_INT_W1C(a) (a),-1,-1,-1

/**
 * Register (RSL) apa#_core_ecc_int_w1s
 *
 * APA Core ECC Interrupt Set Registers
 * This register sets interrupt bits.
 */
union cavm_apax_core_ecc_int_w1s
{
    uint64_t u;
    struct cavm_apax_core_ecc_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t core_fault            : 1;  /**< [  1:  1](SR/W1S/H) Reads or sets APA(0..23)_CORE_ECC_INT_W1C[CORE_FAULT]. */
        uint64_t core_err              : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets APA(0..23)_CORE_ECC_INT_W1C[CORE_ERR]. */
#else /* Word 0 - Little Endian */
        uint64_t core_err              : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets APA(0..23)_CORE_ECC_INT_W1C[CORE_ERR]. */
        uint64_t core_fault            : 1;  /**< [  1:  1](SR/W1S/H) Reads or sets APA(0..23)_CORE_ECC_INT_W1C[CORE_FAULT]. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_core_ecc_int_w1s_s cn10; */
    /* struct cavm_apax_core_ecc_int_w1s_s cn10ka; */
    struct cavm_apax_core_ecc_int_w1s_cn10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t core_fault            : 1;  /**< [  1:  1](SR/W1S/H) Reads or sets APA(0..7)_CORE_ECC_INT_W1C[CORE_FAULT]. */
        uint64_t core_err              : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets APA(0..7)_CORE_ECC_INT_W1C[CORE_ERR]. */
#else /* Word 0 - Little Endian */
        uint64_t core_err              : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets APA(0..7)_CORE_ECC_INT_W1C[CORE_ERR]. */
        uint64_t core_fault            : 1;  /**< [  1:  1](SR/W1S/H) Reads or sets APA(0..7)_CORE_ECC_INT_W1C[CORE_FAULT]. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } cn10kb;
    struct cavm_apax_core_ecc_int_w1s_cnf10ka
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t core_fault            : 1;  /**< [  1:  1](SR/W1S/H) Reads or sets APA(0..17)_CORE_ECC_INT_W1C[CORE_FAULT]. */
        uint64_t core_err              : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets APA(0..17)_CORE_ECC_INT_W1C[CORE_ERR]. */
#else /* Word 0 - Little Endian */
        uint64_t core_err              : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets APA(0..17)_CORE_ECC_INT_W1C[CORE_ERR]. */
        uint64_t core_fault            : 1;  /**< [  1:  1](SR/W1S/H) Reads or sets APA(0..17)_CORE_ECC_INT_W1C[CORE_FAULT]. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } cnf10ka;
    struct cavm_apax_core_ecc_int_w1s_cnf10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t core_fault            : 1;  /**< [  1:  1](SR/W1S/H) Reads or sets APA(0..11)_CORE_ECC_INT_W1C[CORE_FAULT]. */
        uint64_t core_err              : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets APA(0..11)_CORE_ECC_INT_W1C[CORE_ERR]. */
#else /* Word 0 - Little Endian */
        uint64_t core_err              : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets APA(0..11)_CORE_ECC_INT_W1C[CORE_ERR]. */
        uint64_t core_fault            : 1;  /**< [  1:  1](SR/W1S/H) Reads or sets APA(0..11)_CORE_ECC_INT_W1C[CORE_FAULT]. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } cnf10kb;
};
typedef union cavm_apax_core_ecc_int_w1s cavm_apax_core_ecc_int_w1s_t;

static inline uint64_t CAVM_APAX_CORE_ECC_INT_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_CORE_ECC_INT_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e340001e68ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e340001e68ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e340001e68ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e340001e68ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("APAX_CORE_ECC_INT_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_CORE_ECC_INT_W1S(a) cavm_apax_core_ecc_int_w1s_t
#define bustype_CAVM_APAX_CORE_ECC_INT_W1S(a) CSR_TYPE_RSL
#define basename_CAVM_APAX_CORE_ECC_INT_W1S(a) "APAX_CORE_ECC_INT_W1S"
#define device_bar_CAVM_APAX_CORE_ECC_INT_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_CORE_ECC_INT_W1S(a) (a)
#define arguments_CAVM_APAX_CORE_ECC_INT_W1S(a) (a),-1,-1,-1

/**
 * Register (RSL) apa#_ctl
 *
 * APA Control Register
 * This register contains miscellaneous APA control fields.
 */
union cavm_apax_ctl
{
    uint64_t u;
    struct cavm_apax_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_34_63        : 30;
        uint64_t lsa_crclk_force_on    : 1;  /**< [ 33: 33](SR/W) Force on conditional clocks in LSA. For diagnostic use only. */
        uint64_t apa_crclk_force_on    : 1;  /**< [ 32: 32](SR/W) Force on conditional clocks in all of APA. For diagnostic use only. */
        uint64_t reserved_13_31        : 19;
        uint64_t dis_cbusy_override    : 1;  /**< [ 12: 12](SR/W) Disable override of CBUSY[2] into AP. */
        uint64_t cbusy_override_value  : 1;  /**< [ 11: 11](SR/W) Override value of CBUSY[2] if [DIS_CBUSY_OVERRIDE] is not set. */
        uint64_t dis_wdog_during_apat  : 1;  /**< [ 10: 10](SR/W) Disable all watchdogs when an APAT is pending. */
        uint64_t dvm_filter            : 2;  /**< [  9:  8](SR/W) APA filter to prevent certain DVM snoops from reaching the core.
                                                                 APA responds to them instead.

                                                                 0x0 = No filtering.
                                                                 0x1 = Filter TLB invalidate.
                                                                 0x2 = Filter TLB invalidate
                                                                     + Branch predictor invalidate
                                                                     + Physical instruction cache invalidate
                                                                     + Virtual instruction cache invalidate.
                                                                 0x3 = All of the above + synchronization. */
        uint64_t dis_wdog_struct_crd_clean : 1;/**< [  7:  7](SR/W) Disable cleaning of stale CRD entries. */
        uint64_t dis_wdog_struct_txnid_clean : 1;/**< [  6:  6](SR/W) Disable cleaning of stale TXNID entries. */
        uint64_t dis_wdog_struct_rqb_clean : 1;/**< [  5:  5](SR/W) Disable cleaning of stale RQB entries. */
        uint64_t dis_wdog_struct_dat_clean : 1;/**< [  4:  4](SR/W) Disable cleaning of stale DAT entries. */
        uint64_t dis_wdog_core_clean   : 1;  /**< [  3:  3](SR/W) Disable injection of missing responses to core. */
        uint64_t dis_gwc               : 1;  /**< [  2:  2](SR/W) Disable SSO get work cache. */
        uint64_t dis_lmtst             : 1;  /**< [  1:  1](SR/W) Disable LMTST. */
        uint64_t dis_accel             : 1;  /**< [  0:  0](SR/W) Disable I/O acceleration. */
#else /* Word 0 - Little Endian */
        uint64_t dis_accel             : 1;  /**< [  0:  0](SR/W) Disable I/O acceleration. */
        uint64_t dis_lmtst             : 1;  /**< [  1:  1](SR/W) Disable LMTST. */
        uint64_t dis_gwc               : 1;  /**< [  2:  2](SR/W) Disable SSO get work cache. */
        uint64_t dis_wdog_core_clean   : 1;  /**< [  3:  3](SR/W) Disable injection of missing responses to core. */
        uint64_t dis_wdog_struct_dat_clean : 1;/**< [  4:  4](SR/W) Disable cleaning of stale DAT entries. */
        uint64_t dis_wdog_struct_rqb_clean : 1;/**< [  5:  5](SR/W) Disable cleaning of stale RQB entries. */
        uint64_t dis_wdog_struct_txnid_clean : 1;/**< [  6:  6](SR/W) Disable cleaning of stale TXNID entries. */
        uint64_t dis_wdog_struct_crd_clean : 1;/**< [  7:  7](SR/W) Disable cleaning of stale CRD entries. */
        uint64_t dvm_filter            : 2;  /**< [  9:  8](SR/W) APA filter to prevent certain DVM snoops from reaching the core.
                                                                 APA responds to them instead.

                                                                 0x0 = No filtering.
                                                                 0x1 = Filter TLB invalidate.
                                                                 0x2 = Filter TLB invalidate
                                                                     + Branch predictor invalidate
                                                                     + Physical instruction cache invalidate
                                                                     + Virtual instruction cache invalidate.
                                                                 0x3 = All of the above + synchronization. */
        uint64_t dis_wdog_during_apat  : 1;  /**< [ 10: 10](SR/W) Disable all watchdogs when an APAT is pending. */
        uint64_t cbusy_override_value  : 1;  /**< [ 11: 11](SR/W) Override value of CBUSY[2] if [DIS_CBUSY_OVERRIDE] is not set. */
        uint64_t dis_cbusy_override    : 1;  /**< [ 12: 12](SR/W) Disable override of CBUSY[2] into AP. */
        uint64_t reserved_13_31        : 19;
        uint64_t apa_crclk_force_on    : 1;  /**< [ 32: 32](SR/W) Force on conditional clocks in all of APA. For diagnostic use only. */
        uint64_t lsa_crclk_force_on    : 1;  /**< [ 33: 33](SR/W) Force on conditional clocks in LSA. For diagnostic use only. */
        uint64_t reserved_34_63        : 30;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_ctl_s cn; */
};
typedef union cavm_apax_ctl cavm_apax_ctl_t;

static inline uint64_t CAVM_APAX_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e340001500ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e340001500ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e340001500ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e340001500ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("APAX_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_CTL(a) cavm_apax_ctl_t
#define bustype_CAVM_APAX_CTL(a) CSR_TYPE_RSL
#define basename_CAVM_APAX_CTL(a) "APAX_CTL"
#define device_bar_CAVM_APAX_CTL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_CTL(a) (a)
#define arguments_CAVM_APAX_CTL(a) (a),-1,-1,-1

/**
 * Register (RSL) apa#_derr_info
 *
 * APA Data Error Info Register
 * This register records error information for Data Error interrupts occuring in data
 * incoming from the mesh. The first [DATMBE] error will lock the
 * register until the logged error type is cleared; [DATSBE] errors
 * lock the register until either the logged error type is cleared or a [DATMBE]
 * error is logged. Only one of [DATMBE, DATSBE] should be set at a time. In the
 * event the register is read with all [*MBE] and [*SBE] equal to 0 during
 * interrupt handling that is an indication that, due to a register set/clear race,
 * information about one or more errors was lost while processing an earlier
 * error.
 */
union cavm_apax_derr_info
{
    uint64_t u;
    struct cavm_apax_derr_info_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t dat_sbe               : 1;  /**< [ 63: 63](R/W1C/H) Logged information is for a APA()_ECC_INT_W1C[DAT_SBE] error. */
        uint64_t dat_mbe               : 1;  /**< [ 62: 62](R/W1C/H) Logged information is for a APA()_ECC_INT_W1C[DAT_MBE] error. */
        uint64_t reserved_18_61        : 44;
        uint64_t opcode                : 7;  /**< [ 17: 11](RO/H) The opcode from the DAT mesh payload causing the error. OPCODE[6:4] is 0. */
        uint64_t srcid                 : 11; /**< [ 10:  0](RO/H) The SRCID from the DAT mesh header causing the error. */
#else /* Word 0 - Little Endian */
        uint64_t srcid                 : 11; /**< [ 10:  0](RO/H) The SRCID from the DAT mesh header causing the error. */
        uint64_t opcode                : 7;  /**< [ 17: 11](RO/H) The opcode from the DAT mesh payload causing the error. OPCODE[6:4] is 0. */
        uint64_t reserved_18_61        : 44;
        uint64_t dat_mbe               : 1;  /**< [ 62: 62](R/W1C/H) Logged information is for a APA()_ECC_INT_W1C[DAT_MBE] error. */
        uint64_t dat_sbe               : 1;  /**< [ 63: 63](R/W1C/H) Logged information is for a APA()_ECC_INT_W1C[DAT_SBE] error. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_derr_info_s cn; */
};
typedef union cavm_apax_derr_info cavm_apax_derr_info_t;

static inline uint64_t CAVM_APAX_DERR_INFO(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_DERR_INFO(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e340001530ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e340001530ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e340001530ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e340001530ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("APAX_DERR_INFO", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_DERR_INFO(a) cavm_apax_derr_info_t
#define bustype_CAVM_APAX_DERR_INFO(a) CSR_TYPE_RSL
#define basename_CAVM_APAX_DERR_INFO(a) "APAX_DERR_INFO"
#define device_bar_CAVM_APAX_DERR_INFO(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_DERR_INFO(a) (a)
#define arguments_CAVM_APAX_DERR_INFO(a) (a),-1,-1,-1

/**
 * Register (RSL) apa#_dispblk
 *
 * APA Dispatch Block Register
 * This register throttles the core instruction dispatch.  This is meant to be used by
 * the SCP to mitigate overheat cases.
 */
union cavm_apax_dispblk
{
    uint64_t u;
    struct cavm_apax_dispblk_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t en                    : 1;  /**< [ 15: 15](SR/W) Block core instruction dispatch. */
        uint64_t reserved_8_14         : 7;
        uint64_t count                 : 8;  /**< [  7:  0](SR/W) The number of cycles (-1) out of 256 that core instruction dispatch should blocked. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 8;  /**< [  7:  0](SR/W) The number of cycles (-1) out of 256 that core instruction dispatch should blocked. */
        uint64_t reserved_8_14         : 7;
        uint64_t en                    : 1;  /**< [ 15: 15](SR/W) Block core instruction dispatch. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_dispblk_s cn; */
};
typedef union cavm_apax_dispblk cavm_apax_dispblk_t;

static inline uint64_t CAVM_APAX_DISPBLK(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_DISPBLK(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA_AX) && (a<=23))
        return 0x87e340001700ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e340001700ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e340001700ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e340001700ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("APAX_DISPBLK", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_DISPBLK(a) cavm_apax_dispblk_t
#define bustype_CAVM_APAX_DISPBLK(a) CSR_TYPE_RSL
#define basename_CAVM_APAX_DISPBLK(a) "APAX_DISPBLK"
#define device_bar_CAVM_APAX_DISPBLK(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_DISPBLK(a) (a)
#define arguments_CAVM_APAX_DISPBLK(a) (a),-1,-1,-1

/**
 * Register (RSL) apa#_ecc_ctl
 *
 * APA ECC Generation/Checking Control Register
 * Controls ECC Generation/Checking.
 */
union cavm_apax_ecc_ctl
{
    uint64_t u;
    struct cavm_apax_ecc_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t cor_dis               : 1;  /**< [  5:  5](SR/W) Disable ECC error correction. */
        uint64_t psn_dis               : 1;  /**< [  4:  4](SR/W) Disable ECC poison insertion. */
        uint64_t flip_datacheck_10     : 1;  /**< [  3:  3](SR/W) Flip datacheck bit 10 to force ECC error. */
        uint64_t flip_datacheck_9      : 1;  /**< [  2:  2](SR/W) Flip datacheck bit 9 to force ECC error. */
        uint64_t flip_datacheck_1      : 1;  /**< [  1:  1](SR/W) Flip datacheck bit 1 to force ECC error. */
        uint64_t flip_datacheck_0      : 1;  /**< [  0:  0](SR/W) Flip datacheck bit 0 to force ECC error. */
#else /* Word 0 - Little Endian */
        uint64_t flip_datacheck_0      : 1;  /**< [  0:  0](SR/W) Flip datacheck bit 0 to force ECC error. */
        uint64_t flip_datacheck_1      : 1;  /**< [  1:  1](SR/W) Flip datacheck bit 1 to force ECC error. */
        uint64_t flip_datacheck_9      : 1;  /**< [  2:  2](SR/W) Flip datacheck bit 9 to force ECC error. */
        uint64_t flip_datacheck_10     : 1;  /**< [  3:  3](SR/W) Flip datacheck bit 10 to force ECC error. */
        uint64_t psn_dis               : 1;  /**< [  4:  4](SR/W) Disable ECC poison insertion. */
        uint64_t cor_dis               : 1;  /**< [  5:  5](SR/W) Disable ECC error correction. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_ecc_ctl_s cn; */
};
typedef union cavm_apax_ecc_ctl cavm_apax_ecc_ctl_t;

static inline uint64_t CAVM_APAX_ECC_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_ECC_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e340001508ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e340001508ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e340001508ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e340001508ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("APAX_ECC_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_ECC_CTL(a) cavm_apax_ecc_ctl_t
#define bustype_CAVM_APAX_ECC_CTL(a) CSR_TYPE_RSL
#define basename_CAVM_APAX_ECC_CTL(a) "APAX_ECC_CTL"
#define device_bar_CAVM_APAX_ECC_CTL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_ECC_CTL(a) (a)
#define arguments_CAVM_APAX_ECC_CTL(a) (a),-1,-1,-1

/**
 * Register (RSL) apa#_ecc_int_ena_w1c
 *
 * APA ECC Interrupt Enable Clear Registers
 * This register clears interrupt enable bits.
 */
union cavm_apax_ecc_int_ena_w1c
{
    uint64_t u;
    struct cavm_apax_ecc_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t dat_sbe               : 1;  /**< [  4:  4](SR/W1C/H) Reads or clears enable for APA(0..23)_ECC_INT_W1C[DAT_SBE]. */
        uint64_t dat_mbe               : 1;  /**< [  3:  3](SR/W1C/H) Reads or clears enable for APA(0..23)_ECC_INT_W1C[DAT_MBE]. */
        uint64_t dat_perr              : 1;  /**< [  2:  2](SR/W1C/H) Reads or clears enable for APA(0..23)_ECC_INT_W1C[DAT_PERR]. */
        uint64_t snp_perr              : 1;  /**< [  1:  1](SR/W1C/H) Reads or clears enable for APA(0..23)_ECC_INT_W1C[SNP_PERR]. */
        uint64_t rsp_perr              : 1;  /**< [  0:  0](SR/W1C/H) Reads or clears enable for APA(0..23)_ECC_INT_W1C[RSP_PERR]. */
#else /* Word 0 - Little Endian */
        uint64_t rsp_perr              : 1;  /**< [  0:  0](SR/W1C/H) Reads or clears enable for APA(0..23)_ECC_INT_W1C[RSP_PERR]. */
        uint64_t snp_perr              : 1;  /**< [  1:  1](SR/W1C/H) Reads or clears enable for APA(0..23)_ECC_INT_W1C[SNP_PERR]. */
        uint64_t dat_perr              : 1;  /**< [  2:  2](SR/W1C/H) Reads or clears enable for APA(0..23)_ECC_INT_W1C[DAT_PERR]. */
        uint64_t dat_mbe               : 1;  /**< [  3:  3](SR/W1C/H) Reads or clears enable for APA(0..23)_ECC_INT_W1C[DAT_MBE]. */
        uint64_t dat_sbe               : 1;  /**< [  4:  4](SR/W1C/H) Reads or clears enable for APA(0..23)_ECC_INT_W1C[DAT_SBE]. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_ecc_int_ena_w1c_s cn10; */
    /* struct cavm_apax_ecc_int_ena_w1c_s cn10ka; */
    struct cavm_apax_ecc_int_ena_w1c_cn10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t dat_sbe               : 1;  /**< [  4:  4](SR/W1C/H) Reads or clears enable for APA(0..7)_ECC_INT_W1C[DAT_SBE]. */
        uint64_t dat_mbe               : 1;  /**< [  3:  3](SR/W1C/H) Reads or clears enable for APA(0..7)_ECC_INT_W1C[DAT_MBE]. */
        uint64_t dat_perr              : 1;  /**< [  2:  2](SR/W1C/H) Reads or clears enable for APA(0..7)_ECC_INT_W1C[DAT_PERR]. */
        uint64_t snp_perr              : 1;  /**< [  1:  1](SR/W1C/H) Reads or clears enable for APA(0..7)_ECC_INT_W1C[SNP_PERR]. */
        uint64_t rsp_perr              : 1;  /**< [  0:  0](SR/W1C/H) Reads or clears enable for APA(0..7)_ECC_INT_W1C[RSP_PERR]. */
#else /* Word 0 - Little Endian */
        uint64_t rsp_perr              : 1;  /**< [  0:  0](SR/W1C/H) Reads or clears enable for APA(0..7)_ECC_INT_W1C[RSP_PERR]. */
        uint64_t snp_perr              : 1;  /**< [  1:  1](SR/W1C/H) Reads or clears enable for APA(0..7)_ECC_INT_W1C[SNP_PERR]. */
        uint64_t dat_perr              : 1;  /**< [  2:  2](SR/W1C/H) Reads or clears enable for APA(0..7)_ECC_INT_W1C[DAT_PERR]. */
        uint64_t dat_mbe               : 1;  /**< [  3:  3](SR/W1C/H) Reads or clears enable for APA(0..7)_ECC_INT_W1C[DAT_MBE]. */
        uint64_t dat_sbe               : 1;  /**< [  4:  4](SR/W1C/H) Reads or clears enable for APA(0..7)_ECC_INT_W1C[DAT_SBE]. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } cn10kb;
    struct cavm_apax_ecc_int_ena_w1c_cnf10ka
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t dat_sbe               : 1;  /**< [  4:  4](SR/W1C/H) Reads or clears enable for APA(0..17)_ECC_INT_W1C[DAT_SBE]. */
        uint64_t dat_mbe               : 1;  /**< [  3:  3](SR/W1C/H) Reads or clears enable for APA(0..17)_ECC_INT_W1C[DAT_MBE]. */
        uint64_t dat_perr              : 1;  /**< [  2:  2](SR/W1C/H) Reads or clears enable for APA(0..17)_ECC_INT_W1C[DAT_PERR]. */
        uint64_t snp_perr              : 1;  /**< [  1:  1](SR/W1C/H) Reads or clears enable for APA(0..17)_ECC_INT_W1C[SNP_PERR]. */
        uint64_t rsp_perr              : 1;  /**< [  0:  0](SR/W1C/H) Reads or clears enable for APA(0..17)_ECC_INT_W1C[RSP_PERR]. */
#else /* Word 0 - Little Endian */
        uint64_t rsp_perr              : 1;  /**< [  0:  0](SR/W1C/H) Reads or clears enable for APA(0..17)_ECC_INT_W1C[RSP_PERR]. */
        uint64_t snp_perr              : 1;  /**< [  1:  1](SR/W1C/H) Reads or clears enable for APA(0..17)_ECC_INT_W1C[SNP_PERR]. */
        uint64_t dat_perr              : 1;  /**< [  2:  2](SR/W1C/H) Reads or clears enable for APA(0..17)_ECC_INT_W1C[DAT_PERR]. */
        uint64_t dat_mbe               : 1;  /**< [  3:  3](SR/W1C/H) Reads or clears enable for APA(0..17)_ECC_INT_W1C[DAT_MBE]. */
        uint64_t dat_sbe               : 1;  /**< [  4:  4](SR/W1C/H) Reads or clears enable for APA(0..17)_ECC_INT_W1C[DAT_SBE]. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } cnf10ka;
    struct cavm_apax_ecc_int_ena_w1c_cnf10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t dat_sbe               : 1;  /**< [  4:  4](SR/W1C/H) Reads or clears enable for APA(0..11)_ECC_INT_W1C[DAT_SBE]. */
        uint64_t dat_mbe               : 1;  /**< [  3:  3](SR/W1C/H) Reads or clears enable for APA(0..11)_ECC_INT_W1C[DAT_MBE]. */
        uint64_t dat_perr              : 1;  /**< [  2:  2](SR/W1C/H) Reads or clears enable for APA(0..11)_ECC_INT_W1C[DAT_PERR]. */
        uint64_t snp_perr              : 1;  /**< [  1:  1](SR/W1C/H) Reads or clears enable for APA(0..11)_ECC_INT_W1C[SNP_PERR]. */
        uint64_t rsp_perr              : 1;  /**< [  0:  0](SR/W1C/H) Reads or clears enable for APA(0..11)_ECC_INT_W1C[RSP_PERR]. */
#else /* Word 0 - Little Endian */
        uint64_t rsp_perr              : 1;  /**< [  0:  0](SR/W1C/H) Reads or clears enable for APA(0..11)_ECC_INT_W1C[RSP_PERR]. */
        uint64_t snp_perr              : 1;  /**< [  1:  1](SR/W1C/H) Reads or clears enable for APA(0..11)_ECC_INT_W1C[SNP_PERR]. */
        uint64_t dat_perr              : 1;  /**< [  2:  2](SR/W1C/H) Reads or clears enable for APA(0..11)_ECC_INT_W1C[DAT_PERR]. */
        uint64_t dat_mbe               : 1;  /**< [  3:  3](SR/W1C/H) Reads or clears enable for APA(0..11)_ECC_INT_W1C[DAT_MBE]. */
        uint64_t dat_sbe               : 1;  /**< [  4:  4](SR/W1C/H) Reads or clears enable for APA(0..11)_ECC_INT_W1C[DAT_SBE]. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } cnf10kb;
};
typedef union cavm_apax_ecc_int_ena_w1c cavm_apax_ecc_int_ena_w1c_t;

static inline uint64_t CAVM_APAX_ECC_INT_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_ECC_INT_ENA_W1C(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e340001e50ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e340001e50ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e340001e50ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e340001e50ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("APAX_ECC_INT_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_ECC_INT_ENA_W1C(a) cavm_apax_ecc_int_ena_w1c_t
#define bustype_CAVM_APAX_ECC_INT_ENA_W1C(a) CSR_TYPE_RSL
#define basename_CAVM_APAX_ECC_INT_ENA_W1C(a) "APAX_ECC_INT_ENA_W1C"
#define device_bar_CAVM_APAX_ECC_INT_ENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_ECC_INT_ENA_W1C(a) (a)
#define arguments_CAVM_APAX_ECC_INT_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (RSL) apa#_ecc_int_ena_w1s
 *
 * APA ECC Interrupt Enable Set Registers
 * This register sets interrupt enable bits.
 */
union cavm_apax_ecc_int_ena_w1s
{
    uint64_t u;
    struct cavm_apax_ecc_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t dat_sbe               : 1;  /**< [  4:  4](SR/W1S/H) Reads or sets enable for APA(0..23)_ECC_INT_W1C[DAT_SBE]. */
        uint64_t dat_mbe               : 1;  /**< [  3:  3](SR/W1S/H) Reads or sets enable for APA(0..23)_ECC_INT_W1C[DAT_MBE]. */
        uint64_t dat_perr              : 1;  /**< [  2:  2](SR/W1S/H) Reads or sets enable for APA(0..23)_ECC_INT_W1C[DAT_PERR]. */
        uint64_t snp_perr              : 1;  /**< [  1:  1](SR/W1S/H) Reads or sets enable for APA(0..23)_ECC_INT_W1C[SNP_PERR]. */
        uint64_t rsp_perr              : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets enable for APA(0..23)_ECC_INT_W1C[RSP_PERR]. */
#else /* Word 0 - Little Endian */
        uint64_t rsp_perr              : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets enable for APA(0..23)_ECC_INT_W1C[RSP_PERR]. */
        uint64_t snp_perr              : 1;  /**< [  1:  1](SR/W1S/H) Reads or sets enable for APA(0..23)_ECC_INT_W1C[SNP_PERR]. */
        uint64_t dat_perr              : 1;  /**< [  2:  2](SR/W1S/H) Reads or sets enable for APA(0..23)_ECC_INT_W1C[DAT_PERR]. */
        uint64_t dat_mbe               : 1;  /**< [  3:  3](SR/W1S/H) Reads or sets enable for APA(0..23)_ECC_INT_W1C[DAT_MBE]. */
        uint64_t dat_sbe               : 1;  /**< [  4:  4](SR/W1S/H) Reads or sets enable for APA(0..23)_ECC_INT_W1C[DAT_SBE]. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_ecc_int_ena_w1s_s cn10; */
    /* struct cavm_apax_ecc_int_ena_w1s_s cn10ka; */
    struct cavm_apax_ecc_int_ena_w1s_cn10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t dat_sbe               : 1;  /**< [  4:  4](SR/W1S/H) Reads or sets enable for APA(0..7)_ECC_INT_W1C[DAT_SBE]. */
        uint64_t dat_mbe               : 1;  /**< [  3:  3](SR/W1S/H) Reads or sets enable for APA(0..7)_ECC_INT_W1C[DAT_MBE]. */
        uint64_t dat_perr              : 1;  /**< [  2:  2](SR/W1S/H) Reads or sets enable for APA(0..7)_ECC_INT_W1C[DAT_PERR]. */
        uint64_t snp_perr              : 1;  /**< [  1:  1](SR/W1S/H) Reads or sets enable for APA(0..7)_ECC_INT_W1C[SNP_PERR]. */
        uint64_t rsp_perr              : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets enable for APA(0..7)_ECC_INT_W1C[RSP_PERR]. */
#else /* Word 0 - Little Endian */
        uint64_t rsp_perr              : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets enable for APA(0..7)_ECC_INT_W1C[RSP_PERR]. */
        uint64_t snp_perr              : 1;  /**< [  1:  1](SR/W1S/H) Reads or sets enable for APA(0..7)_ECC_INT_W1C[SNP_PERR]. */
        uint64_t dat_perr              : 1;  /**< [  2:  2](SR/W1S/H) Reads or sets enable for APA(0..7)_ECC_INT_W1C[DAT_PERR]. */
        uint64_t dat_mbe               : 1;  /**< [  3:  3](SR/W1S/H) Reads or sets enable for APA(0..7)_ECC_INT_W1C[DAT_MBE]. */
        uint64_t dat_sbe               : 1;  /**< [  4:  4](SR/W1S/H) Reads or sets enable for APA(0..7)_ECC_INT_W1C[DAT_SBE]. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } cn10kb;
    struct cavm_apax_ecc_int_ena_w1s_cnf10ka
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t dat_sbe               : 1;  /**< [  4:  4](SR/W1S/H) Reads or sets enable for APA(0..17)_ECC_INT_W1C[DAT_SBE]. */
        uint64_t dat_mbe               : 1;  /**< [  3:  3](SR/W1S/H) Reads or sets enable for APA(0..17)_ECC_INT_W1C[DAT_MBE]. */
        uint64_t dat_perr              : 1;  /**< [  2:  2](SR/W1S/H) Reads or sets enable for APA(0..17)_ECC_INT_W1C[DAT_PERR]. */
        uint64_t snp_perr              : 1;  /**< [  1:  1](SR/W1S/H) Reads or sets enable for APA(0..17)_ECC_INT_W1C[SNP_PERR]. */
        uint64_t rsp_perr              : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets enable for APA(0..17)_ECC_INT_W1C[RSP_PERR]. */
#else /* Word 0 - Little Endian */
        uint64_t rsp_perr              : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets enable for APA(0..17)_ECC_INT_W1C[RSP_PERR]. */
        uint64_t snp_perr              : 1;  /**< [  1:  1](SR/W1S/H) Reads or sets enable for APA(0..17)_ECC_INT_W1C[SNP_PERR]. */
        uint64_t dat_perr              : 1;  /**< [  2:  2](SR/W1S/H) Reads or sets enable for APA(0..17)_ECC_INT_W1C[DAT_PERR]. */
        uint64_t dat_mbe               : 1;  /**< [  3:  3](SR/W1S/H) Reads or sets enable for APA(0..17)_ECC_INT_W1C[DAT_MBE]. */
        uint64_t dat_sbe               : 1;  /**< [  4:  4](SR/W1S/H) Reads or sets enable for APA(0..17)_ECC_INT_W1C[DAT_SBE]. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } cnf10ka;
    struct cavm_apax_ecc_int_ena_w1s_cnf10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t dat_sbe               : 1;  /**< [  4:  4](SR/W1S/H) Reads or sets enable for APA(0..11)_ECC_INT_W1C[DAT_SBE]. */
        uint64_t dat_mbe               : 1;  /**< [  3:  3](SR/W1S/H) Reads or sets enable for APA(0..11)_ECC_INT_W1C[DAT_MBE]. */
        uint64_t dat_perr              : 1;  /**< [  2:  2](SR/W1S/H) Reads or sets enable for APA(0..11)_ECC_INT_W1C[DAT_PERR]. */
        uint64_t snp_perr              : 1;  /**< [  1:  1](SR/W1S/H) Reads or sets enable for APA(0..11)_ECC_INT_W1C[SNP_PERR]. */
        uint64_t rsp_perr              : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets enable for APA(0..11)_ECC_INT_W1C[RSP_PERR]. */
#else /* Word 0 - Little Endian */
        uint64_t rsp_perr              : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets enable for APA(0..11)_ECC_INT_W1C[RSP_PERR]. */
        uint64_t snp_perr              : 1;  /**< [  1:  1](SR/W1S/H) Reads or sets enable for APA(0..11)_ECC_INT_W1C[SNP_PERR]. */
        uint64_t dat_perr              : 1;  /**< [  2:  2](SR/W1S/H) Reads or sets enable for APA(0..11)_ECC_INT_W1C[DAT_PERR]. */
        uint64_t dat_mbe               : 1;  /**< [  3:  3](SR/W1S/H) Reads or sets enable for APA(0..11)_ECC_INT_W1C[DAT_MBE]. */
        uint64_t dat_sbe               : 1;  /**< [  4:  4](SR/W1S/H) Reads or sets enable for APA(0..11)_ECC_INT_W1C[DAT_SBE]. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } cnf10kb;
};
typedef union cavm_apax_ecc_int_ena_w1s cavm_apax_ecc_int_ena_w1s_t;

static inline uint64_t CAVM_APAX_ECC_INT_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_ECC_INT_ENA_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e340001e58ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e340001e58ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e340001e58ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e340001e58ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("APAX_ECC_INT_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_ECC_INT_ENA_W1S(a) cavm_apax_ecc_int_ena_w1s_t
#define bustype_CAVM_APAX_ECC_INT_ENA_W1S(a) CSR_TYPE_RSL
#define basename_CAVM_APAX_ECC_INT_ENA_W1S(a) "APAX_ECC_INT_ENA_W1S"
#define device_bar_CAVM_APAX_ECC_INT_ENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_ECC_INT_ENA_W1S(a) (a)
#define arguments_CAVM_APAX_ECC_INT_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (RSL) apa#_ecc_int_w1c
 *
 * APA ECC Interrupt Register
 * This register is reports interrupt status.
 */
union cavm_apax_ecc_int_w1c
{
    uint64_t u;
    struct cavm_apax_ecc_int_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t dat_sbe               : 1;  /**< [  4:  4](SR/W1C/H) Single-bit Error on the incoming DAT channel.  The information is recorded in APA_DERR_INFO. */
        uint64_t dat_mbe               : 1;  /**< [  3:  3](SR/W1C/H) Multi-bit Error on the incoming DAT channel.  The information is recorded in APA_DERR_INFO. */
        uint64_t dat_perr              : 1;  /**< [  2:  2](SR/W1C/H) Parity Error on the incoming DAT channel.  The information is recorded in APA_NDERR_INFO. */
        uint64_t snp_perr              : 1;  /**< [  1:  1](SR/W1C/H) Parity Error on the incoming SNP channel.  The information is recorded in APA_NDERR_INFO. */
        uint64_t rsp_perr              : 1;  /**< [  0:  0](SR/W1C/H) Parity Error on the incoming RSP channel.  The information is recorded in APA_NDERR_INFO. */
#else /* Word 0 - Little Endian */
        uint64_t rsp_perr              : 1;  /**< [  0:  0](SR/W1C/H) Parity Error on the incoming RSP channel.  The information is recorded in APA_NDERR_INFO. */
        uint64_t snp_perr              : 1;  /**< [  1:  1](SR/W1C/H) Parity Error on the incoming SNP channel.  The information is recorded in APA_NDERR_INFO. */
        uint64_t dat_perr              : 1;  /**< [  2:  2](SR/W1C/H) Parity Error on the incoming DAT channel.  The information is recorded in APA_NDERR_INFO. */
        uint64_t dat_mbe               : 1;  /**< [  3:  3](SR/W1C/H) Multi-bit Error on the incoming DAT channel.  The information is recorded in APA_DERR_INFO. */
        uint64_t dat_sbe               : 1;  /**< [  4:  4](SR/W1C/H) Single-bit Error on the incoming DAT channel.  The information is recorded in APA_DERR_INFO. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_ecc_int_w1c_s cn; */
};
typedef union cavm_apax_ecc_int_w1c cavm_apax_ecc_int_w1c_t;

static inline uint64_t CAVM_APAX_ECC_INT_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_ECC_INT_W1C(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e340001e40ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e340001e40ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e340001e40ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e340001e40ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("APAX_ECC_INT_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_ECC_INT_W1C(a) cavm_apax_ecc_int_w1c_t
#define bustype_CAVM_APAX_ECC_INT_W1C(a) CSR_TYPE_RSL
#define basename_CAVM_APAX_ECC_INT_W1C(a) "APAX_ECC_INT_W1C"
#define device_bar_CAVM_APAX_ECC_INT_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_ECC_INT_W1C(a) (a)
#define arguments_CAVM_APAX_ECC_INT_W1C(a) (a),-1,-1,-1

/**
 * Register (RSL) apa#_ecc_int_w1s
 *
 * APA ECC Interrupt Set Registers
 * This register sets interrupt bits.
 */
union cavm_apax_ecc_int_w1s
{
    uint64_t u;
    struct cavm_apax_ecc_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t dat_sbe               : 1;  /**< [  4:  4](SR/W1S/H) Reads or sets APA(0..23)_ECC_INT_W1C[DAT_SBE]. */
        uint64_t dat_mbe               : 1;  /**< [  3:  3](SR/W1S/H) Reads or sets APA(0..23)_ECC_INT_W1C[DAT_MBE]. */
        uint64_t dat_perr              : 1;  /**< [  2:  2](SR/W1S/H) Reads or sets APA(0..23)_ECC_INT_W1C[DAT_PERR]. */
        uint64_t snp_perr              : 1;  /**< [  1:  1](SR/W1S/H) Reads or sets APA(0..23)_ECC_INT_W1C[SNP_PERR]. */
        uint64_t rsp_perr              : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets APA(0..23)_ECC_INT_W1C[RSP_PERR]. */
#else /* Word 0 - Little Endian */
        uint64_t rsp_perr              : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets APA(0..23)_ECC_INT_W1C[RSP_PERR]. */
        uint64_t snp_perr              : 1;  /**< [  1:  1](SR/W1S/H) Reads or sets APA(0..23)_ECC_INT_W1C[SNP_PERR]. */
        uint64_t dat_perr              : 1;  /**< [  2:  2](SR/W1S/H) Reads or sets APA(0..23)_ECC_INT_W1C[DAT_PERR]. */
        uint64_t dat_mbe               : 1;  /**< [  3:  3](SR/W1S/H) Reads or sets APA(0..23)_ECC_INT_W1C[DAT_MBE]. */
        uint64_t dat_sbe               : 1;  /**< [  4:  4](SR/W1S/H) Reads or sets APA(0..23)_ECC_INT_W1C[DAT_SBE]. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_ecc_int_w1s_s cn10; */
    /* struct cavm_apax_ecc_int_w1s_s cn10ka; */
    struct cavm_apax_ecc_int_w1s_cn10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t dat_sbe               : 1;  /**< [  4:  4](SR/W1S/H) Reads or sets APA(0..7)_ECC_INT_W1C[DAT_SBE]. */
        uint64_t dat_mbe               : 1;  /**< [  3:  3](SR/W1S/H) Reads or sets APA(0..7)_ECC_INT_W1C[DAT_MBE]. */
        uint64_t dat_perr              : 1;  /**< [  2:  2](SR/W1S/H) Reads or sets APA(0..7)_ECC_INT_W1C[DAT_PERR]. */
        uint64_t snp_perr              : 1;  /**< [  1:  1](SR/W1S/H) Reads or sets APA(0..7)_ECC_INT_W1C[SNP_PERR]. */
        uint64_t rsp_perr              : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets APA(0..7)_ECC_INT_W1C[RSP_PERR]. */
#else /* Word 0 - Little Endian */
        uint64_t rsp_perr              : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets APA(0..7)_ECC_INT_W1C[RSP_PERR]. */
        uint64_t snp_perr              : 1;  /**< [  1:  1](SR/W1S/H) Reads or sets APA(0..7)_ECC_INT_W1C[SNP_PERR]. */
        uint64_t dat_perr              : 1;  /**< [  2:  2](SR/W1S/H) Reads or sets APA(0..7)_ECC_INT_W1C[DAT_PERR]. */
        uint64_t dat_mbe               : 1;  /**< [  3:  3](SR/W1S/H) Reads or sets APA(0..7)_ECC_INT_W1C[DAT_MBE]. */
        uint64_t dat_sbe               : 1;  /**< [  4:  4](SR/W1S/H) Reads or sets APA(0..7)_ECC_INT_W1C[DAT_SBE]. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } cn10kb;
    struct cavm_apax_ecc_int_w1s_cnf10ka
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t dat_sbe               : 1;  /**< [  4:  4](SR/W1S/H) Reads or sets APA(0..17)_ECC_INT_W1C[DAT_SBE]. */
        uint64_t dat_mbe               : 1;  /**< [  3:  3](SR/W1S/H) Reads or sets APA(0..17)_ECC_INT_W1C[DAT_MBE]. */
        uint64_t dat_perr              : 1;  /**< [  2:  2](SR/W1S/H) Reads or sets APA(0..17)_ECC_INT_W1C[DAT_PERR]. */
        uint64_t snp_perr              : 1;  /**< [  1:  1](SR/W1S/H) Reads or sets APA(0..17)_ECC_INT_W1C[SNP_PERR]. */
        uint64_t rsp_perr              : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets APA(0..17)_ECC_INT_W1C[RSP_PERR]. */
#else /* Word 0 - Little Endian */
        uint64_t rsp_perr              : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets APA(0..17)_ECC_INT_W1C[RSP_PERR]. */
        uint64_t snp_perr              : 1;  /**< [  1:  1](SR/W1S/H) Reads or sets APA(0..17)_ECC_INT_W1C[SNP_PERR]. */
        uint64_t dat_perr              : 1;  /**< [  2:  2](SR/W1S/H) Reads or sets APA(0..17)_ECC_INT_W1C[DAT_PERR]. */
        uint64_t dat_mbe               : 1;  /**< [  3:  3](SR/W1S/H) Reads or sets APA(0..17)_ECC_INT_W1C[DAT_MBE]. */
        uint64_t dat_sbe               : 1;  /**< [  4:  4](SR/W1S/H) Reads or sets APA(0..17)_ECC_INT_W1C[DAT_SBE]. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } cnf10ka;
    struct cavm_apax_ecc_int_w1s_cnf10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t dat_sbe               : 1;  /**< [  4:  4](SR/W1S/H) Reads or sets APA(0..11)_ECC_INT_W1C[DAT_SBE]. */
        uint64_t dat_mbe               : 1;  /**< [  3:  3](SR/W1S/H) Reads or sets APA(0..11)_ECC_INT_W1C[DAT_MBE]. */
        uint64_t dat_perr              : 1;  /**< [  2:  2](SR/W1S/H) Reads or sets APA(0..11)_ECC_INT_W1C[DAT_PERR]. */
        uint64_t snp_perr              : 1;  /**< [  1:  1](SR/W1S/H) Reads or sets APA(0..11)_ECC_INT_W1C[SNP_PERR]. */
        uint64_t rsp_perr              : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets APA(0..11)_ECC_INT_W1C[RSP_PERR]. */
#else /* Word 0 - Little Endian */
        uint64_t rsp_perr              : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets APA(0..11)_ECC_INT_W1C[RSP_PERR]. */
        uint64_t snp_perr              : 1;  /**< [  1:  1](SR/W1S/H) Reads or sets APA(0..11)_ECC_INT_W1C[SNP_PERR]. */
        uint64_t dat_perr              : 1;  /**< [  2:  2](SR/W1S/H) Reads or sets APA(0..11)_ECC_INT_W1C[DAT_PERR]. */
        uint64_t dat_mbe               : 1;  /**< [  3:  3](SR/W1S/H) Reads or sets APA(0..11)_ECC_INT_W1C[DAT_MBE]. */
        uint64_t dat_sbe               : 1;  /**< [  4:  4](SR/W1S/H) Reads or sets APA(0..11)_ECC_INT_W1C[DAT_SBE]. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } cnf10kb;
};
typedef union cavm_apax_ecc_int_w1s cavm_apax_ecc_int_w1s_t;

static inline uint64_t CAVM_APAX_ECC_INT_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_ECC_INT_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e340001e48ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e340001e48ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e340001e48ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e340001e48ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("APAX_ECC_INT_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_ECC_INT_W1S(a) cavm_apax_ecc_int_w1s_t
#define bustype_CAVM_APAX_ECC_INT_W1S(a) CSR_TYPE_RSL
#define basename_CAVM_APAX_ECC_INT_W1S(a) "APAX_ECC_INT_W1S"
#define device_bar_CAVM_APAX_ECC_INT_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_ECC_INT_W1S(a) (a)
#define arguments_CAVM_APAX_ECC_INT_W1S(a) (a),-1,-1,-1

/**
 * Register (RSL) apa#_lsa#_diag_counts
 *
 * APA LSA Status Diagnostic Register
 * Captures the execution status of the LSA engines.
 */
union cavm_apax_lsax_diag_counts
{
    uint64_t u;
    struct cavm_apax_lsax_diag_counts_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_39_63        : 25;
        uint64_t compdata_cnt          : 7;  /**< [ 38: 32](SRO/H) Number of CompDat flits observed. */
        uint64_t exp_cdat_cnt          : 7;  /**< [ 31: 25](SRO/H) Number of CompDat flits expected. */
        uint64_t comp_cnt              : 5;  /**< [ 24: 20](SRO/H) Number of CompDBIDResps received from IOB. */
        uint64_t wns_cnt               : 5;  /**< [ 19: 15](SRO/H) Number of WriteNoSnps issued. */
        uint64_t ro_cnt                : 5;  /**< [ 14: 10](SRO/H) Number of ReadOnce for LMTLINEs issued. */
        uint64_t reserved_5_9          : 5;
        uint64_t init_tail             : 5;  /**< [  4:  0](SRO/H) The dat buffer tail pointer for the first LMTLINE in a burst. */
#else /* Word 0 - Little Endian */
        uint64_t init_tail             : 5;  /**< [  4:  0](SRO/H) The dat buffer tail pointer for the first LMTLINE in a burst. */
        uint64_t reserved_5_9          : 5;
        uint64_t ro_cnt                : 5;  /**< [ 14: 10](SRO/H) Number of ReadOnce for LMTLINEs issued. */
        uint64_t wns_cnt               : 5;  /**< [ 19: 15](SRO/H) Number of WriteNoSnps issued. */
        uint64_t comp_cnt              : 5;  /**< [ 24: 20](SRO/H) Number of CompDBIDResps received from IOB. */
        uint64_t exp_cdat_cnt          : 7;  /**< [ 31: 25](SRO/H) Number of CompDat flits expected. */
        uint64_t compdata_cnt          : 7;  /**< [ 38: 32](SRO/H) Number of CompDat flits observed. */
        uint64_t reserved_39_63        : 25;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_lsax_diag_counts_s cn; */
};
typedef union cavm_apax_lsax_diag_counts cavm_apax_lsax_diag_counts_t;

static inline uint64_t CAVM_APAX_LSAX_DIAG_COUNTS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_LSAX_DIAG_COUNTS(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=23) && (b<=1)))
        return 0x87e340001608ll + 0x1000000ll * ((a) & 0x1f) + 0x40ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=7) && (b<=1)))
        return 0x87e340001608ll + 0x1000000ll * ((a) & 0x7) + 0x40ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=17) && (b<=1)))
        return 0x87e340001608ll + 0x1000000ll * ((a) & 0x1f) + 0x40ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=11) && (b<=1)))
        return 0x87e340001608ll + 0x1000000ll * ((a) & 0xf) + 0x40ll * ((b) & 0x1);
    __cavm_csr_fatal("APAX_LSAX_DIAG_COUNTS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_LSAX_DIAG_COUNTS(a,b) cavm_apax_lsax_diag_counts_t
#define bustype_CAVM_APAX_LSAX_DIAG_COUNTS(a,b) CSR_TYPE_RSL
#define basename_CAVM_APAX_LSAX_DIAG_COUNTS(a,b) "APAX_LSAX_DIAG_COUNTS"
#define device_bar_CAVM_APAX_LSAX_DIAG_COUNTS(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_LSAX_DIAG_COUNTS(a,b) (a)
#define arguments_CAVM_APAX_LSAX_DIAG_COUNTS(a,b) (a),(b),-1,-1

/**
 * Register (RSL) apa#_lsa#_diag_lmtmap
 *
 * APA LSA Status Diagnostic Register
 * Captures information LMTMAP entry associated with an LMTST.
 */
union cavm_apax_lsax_diag_lmtmap
{
    uint64_t u;
    struct cavm_apax_lsax_diag_lmtmap_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_61_63        : 3;
        uint64_t dis_sched_early_comp  : 1;  /**< [ 60: 60](SRO/H) Captured APR_LMT_MAP_ENTRY_S::DIS_SCHED_EARLY_COMP. */
        uint64_t sched_ena             : 1;  /**< [ 59: 59](SRO/H) Captured APR_LMT_MAP_ENTRY_S::SCHED_ENA. */
        uint64_t dis_line_pref         : 1;  /**< [ 58: 58](SRO/H) Captured APR_LMT_MAP_ENTRY_S::DIS_LINE_PREF. */
        uint64_t lmt_ena               : 1;  /**< [ 57: 57](SRO/H) Captured APR_LMT_MAP_ENTRY_S::LMT_ENA. */
        uint64_t num_lmtlines          : 3;  /**< [ 56: 54](SRO/H) The maximum number of supported LMTLINES for the PF, FUNC pair. */
        uint64_t ssow_pf_func          : 13; /**< [ 53: 41](SRO/H) The SSOW_PF_FUNC field used to order an LMTST with SSO. */
        uint64_t lmtline_base          : 41; /**< [ 40:  0](SRO/H) The base address of the for LMTLINES for a PF, FUNC pair. */
#else /* Word 0 - Little Endian */
        uint64_t lmtline_base          : 41; /**< [ 40:  0](SRO/H) The base address of the for LMTLINES for a PF, FUNC pair. */
        uint64_t ssow_pf_func          : 13; /**< [ 53: 41](SRO/H) The SSOW_PF_FUNC field used to order an LMTST with SSO. */
        uint64_t num_lmtlines          : 3;  /**< [ 56: 54](SRO/H) The maximum number of supported LMTLINES for the PF, FUNC pair. */
        uint64_t lmt_ena               : 1;  /**< [ 57: 57](SRO/H) Captured APR_LMT_MAP_ENTRY_S::LMT_ENA. */
        uint64_t dis_line_pref         : 1;  /**< [ 58: 58](SRO/H) Captured APR_LMT_MAP_ENTRY_S::DIS_LINE_PREF. */
        uint64_t sched_ena             : 1;  /**< [ 59: 59](SRO/H) Captured APR_LMT_MAP_ENTRY_S::SCHED_ENA. */
        uint64_t dis_sched_early_comp  : 1;  /**< [ 60: 60](SRO/H) Captured APR_LMT_MAP_ENTRY_S::DIS_SCHED_EARLY_COMP. */
        uint64_t reserved_61_63        : 3;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_lsax_diag_lmtmap_s cn; */
};
typedef union cavm_apax_lsax_diag_lmtmap cavm_apax_lsax_diag_lmtmap_t;

static inline uint64_t CAVM_APAX_LSAX_DIAG_LMTMAP(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_LSAX_DIAG_LMTMAP(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=23) && (b<=1)))
        return 0x87e340001618ll + 0x1000000ll * ((a) & 0x1f) + 0x40ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=7) && (b<=1)))
        return 0x87e340001618ll + 0x1000000ll * ((a) & 0x7) + 0x40ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=17) && (b<=1)))
        return 0x87e340001618ll + 0x1000000ll * ((a) & 0x1f) + 0x40ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=11) && (b<=1)))
        return 0x87e340001618ll + 0x1000000ll * ((a) & 0xf) + 0x40ll * ((b) & 0x1);
    __cavm_csr_fatal("APAX_LSAX_DIAG_LMTMAP", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_LSAX_DIAG_LMTMAP(a,b) cavm_apax_lsax_diag_lmtmap_t
#define bustype_CAVM_APAX_LSAX_DIAG_LMTMAP(a,b) CSR_TYPE_RSL
#define basename_CAVM_APAX_LSAX_DIAG_LMTMAP(a,b) "APAX_LSAX_DIAG_LMTMAP"
#define device_bar_CAVM_APAX_LSAX_DIAG_LMTMAP(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_LSAX_DIAG_LMTMAP(a,b) (a)
#define arguments_CAVM_APAX_LSAX_DIAG_LMTMAP(a,b) (a),(b),-1,-1

/**
 * Register (RSL) apa#_lsa#_diag_req
 *
 * APA LSA Status Diagnostic Register
 * Captures information from the atomic req flit that triggers an LMTST.
 */
union cavm_apax_lsax_diag_req
{
    uint64_t u;
    struct cavm_apax_lsax_diag_req_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_58_63        : 6;
        uint64_t gws                   : 8;  /**< [ 57: 50](SRO/H) GWS field in the STSMAX dat flit. */
        uint64_t cnt                   : 5;  /**< [ 49: 45](SRO/H) The number of LMTLINES in a burst LMTST, from the STEOR dat flit. */
        uint64_t lmtid                 : 11; /**< [ 44: 34](SRO/H) LMTID field in the STEOR/STSMAX dat flit. */
        uint64_t txnid                 : 12; /**< [ 33: 22](SRO/H) TXNID of the STEOR/STSMAX req flit. */
        uint64_t not_secure            : 1;  /**< [ 21: 21](SRO/H) NS field in the STEOR/STSMAX req flit. */
        uint64_t first_size_m1         : 3;  /**< [ 20: 18](SRO/H) Size minus 1 of the first LMTLINE in a burst LMTST. */
        uint64_t rvu_blk               : 5;  /**< [ 17: 13](SRO/H) RVU_BLK field in the STEOR/STSMAX req flit. */
        uint64_t func                  : 8;  /**< [ 12:  5](SRO/H) FUNC field in the STEOR/STSMAX req flit. */
        uint64_t pf                    : 5;  /**< [  4:  0](SRO/H) PF field in the STEOR/STSMAX req flit. */
#else /* Word 0 - Little Endian */
        uint64_t pf                    : 5;  /**< [  4:  0](SRO/H) PF field in the STEOR/STSMAX req flit. */
        uint64_t func                  : 8;  /**< [ 12:  5](SRO/H) FUNC field in the STEOR/STSMAX req flit. */
        uint64_t rvu_blk               : 5;  /**< [ 17: 13](SRO/H) RVU_BLK field in the STEOR/STSMAX req flit. */
        uint64_t first_size_m1         : 3;  /**< [ 20: 18](SRO/H) Size minus 1 of the first LMTLINE in a burst LMTST. */
        uint64_t not_secure            : 1;  /**< [ 21: 21](SRO/H) NS field in the STEOR/STSMAX req flit. */
        uint64_t txnid                 : 12; /**< [ 33: 22](SRO/H) TXNID of the STEOR/STSMAX req flit. */
        uint64_t lmtid                 : 11; /**< [ 44: 34](SRO/H) LMTID field in the STEOR/STSMAX dat flit. */
        uint64_t cnt                   : 5;  /**< [ 49: 45](SRO/H) The number of LMTLINES in a burst LMTST, from the STEOR dat flit. */
        uint64_t gws                   : 8;  /**< [ 57: 50](SRO/H) GWS field in the STSMAX dat flit. */
        uint64_t reserved_58_63        : 6;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_lsax_diag_req_s cn; */
};
typedef union cavm_apax_lsax_diag_req cavm_apax_lsax_diag_req_t;

static inline uint64_t CAVM_APAX_LSAX_DIAG_REQ(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_LSAX_DIAG_REQ(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=23) && (b<=1)))
        return 0x87e340001610ll + 0x1000000ll * ((a) & 0x1f) + 0x40ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=7) && (b<=1)))
        return 0x87e340001610ll + 0x1000000ll * ((a) & 0x7) + 0x40ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=17) && (b<=1)))
        return 0x87e340001610ll + 0x1000000ll * ((a) & 0x1f) + 0x40ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=11) && (b<=1)))
        return 0x87e340001610ll + 0x1000000ll * ((a) & 0xf) + 0x40ll * ((b) & 0x1);
    __cavm_csr_fatal("APAX_LSAX_DIAG_REQ", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_LSAX_DIAG_REQ(a,b) cavm_apax_lsax_diag_req_t
#define bustype_CAVM_APAX_LSAX_DIAG_REQ(a,b) CSR_TYPE_RSL
#define basename_CAVM_APAX_LSAX_DIAG_REQ(a,b) "APAX_LSAX_DIAG_REQ"
#define device_bar_CAVM_APAX_LSAX_DIAG_REQ(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_LSAX_DIAG_REQ(a,b) (a)
#define arguments_CAVM_APAX_LSAX_DIAG_REQ(a,b) (a),(b),-1,-1

/**
 * Register (RSL) apa#_lsa#_diag_status
 *
 * APA LSA Status Diagnostic Register
 * Captures the execution status of the LSA engines.
 */
union cavm_apax_lsax_diag_status
{
    uint64_t u;
    struct cavm_apax_lsax_diag_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t st_dat_err            : 1;  /**< [ 63: 63](SRO/H) Saw an error in the Store data from the core. */
        uint64_t pa_dat_err            : 1;  /**< [ 62: 62](SRO/H) Saw an error in the CompData fetching the physical address. */
        uint64_t gwc_hit               : 1;  /**< [ 61: 61](SRO/H) Saw a GWC hit. */
        uint64_t gwc_val               : 1;  /**< [ 60: 60](SRO/H) Saw a GWC response. */
        uint64_t all_ro_sent           : 1;  /**< [ 59: 59](SRO/H) All ReadOnces in a burst issued. */
        uint64_t first_ro_sent         : 1;  /**< [ 58: 58](SRO/H) First ReadOnce of an LMTST issued. */
        uint64_t all_wns_sent          : 1;  /**< [ 57: 57](SRO/H) All WriteNoSnps in a burst issued. */
        uint64_t first_wns_sent        : 1;  /**< [ 56: 56](SRO/H) First WriteNoSnp of an LMTST issued. */
        uint64_t misspeculate          : 1;  /**< [ 55: 55](SRO/H) Misspeculated on LMTLINE prefetch. */
        uint64_t spec_ro_sent          : 1;  /**< [ 54: 54](SRO/H) Speculative ReadOnce to prefetch LMTLINE issued. */
        uint64_t lpc_2lmtids           : 1;  /**< [ 53: 53](SRO/H) LMTID predictor indicates engine can prefetch LMTLINE. */
        uint64_t lpc_hit               : 1;  /**< [ 52: 52](SRO/H) LPC hit. */
        uint64_t lpc_val               : 1;  /**< [ 51: 51](SRO/H) LPC response received. */
        uint64_t dat_val               : 1;  /**< [ 50: 50](SRO/H) Request valid. */
        uint64_t sched                 : 1;  /**< [ 49: 49](SRO/H) Processing a scheduled LMTST. */
        uint64_t req_err               : 1;  /**< [ 48: 48](SRO/H) Request error. */
        uint64_t req_val               : 1;  /**< [ 47: 47](SRO/H) Request valid. */
        uint64_t comp_cnt              : 5;  /**< [ 46: 42](SRO/H) Number of CompDBIDResps received from IOB. */
        uint64_t wns_cnt               : 5;  /**< [ 41: 37](SRO/H) Number of WriteNoSnps issued. */
        uint64_t ro_cnt                : 5;  /**< [ 36: 32](SRO/H) Number of ReadOnce for LMTLINEs issued. */
        uint64_t thread_status         : 32; /**< [ 31:  0](SRO/H) Status of each of 16 LSA threads. For each thread:
                                                                 0x0 = Not started.
                                                                 0x1 = Active.
                                                                 0x2 = Done.
                                                                 0x3 = Reserved. */
#else /* Word 0 - Little Endian */
        uint64_t thread_status         : 32; /**< [ 31:  0](SRO/H) Status of each of 16 LSA threads. For each thread:
                                                                 0x0 = Not started.
                                                                 0x1 = Active.
                                                                 0x2 = Done.
                                                                 0x3 = Reserved. */
        uint64_t ro_cnt                : 5;  /**< [ 36: 32](SRO/H) Number of ReadOnce for LMTLINEs issued. */
        uint64_t wns_cnt               : 5;  /**< [ 41: 37](SRO/H) Number of WriteNoSnps issued. */
        uint64_t comp_cnt              : 5;  /**< [ 46: 42](SRO/H) Number of CompDBIDResps received from IOB. */
        uint64_t req_val               : 1;  /**< [ 47: 47](SRO/H) Request valid. */
        uint64_t req_err               : 1;  /**< [ 48: 48](SRO/H) Request error. */
        uint64_t sched                 : 1;  /**< [ 49: 49](SRO/H) Processing a scheduled LMTST. */
        uint64_t dat_val               : 1;  /**< [ 50: 50](SRO/H) Request valid. */
        uint64_t lpc_val               : 1;  /**< [ 51: 51](SRO/H) LPC response received. */
        uint64_t lpc_hit               : 1;  /**< [ 52: 52](SRO/H) LPC hit. */
        uint64_t lpc_2lmtids           : 1;  /**< [ 53: 53](SRO/H) LMTID predictor indicates engine can prefetch LMTLINE. */
        uint64_t spec_ro_sent          : 1;  /**< [ 54: 54](SRO/H) Speculative ReadOnce to prefetch LMTLINE issued. */
        uint64_t misspeculate          : 1;  /**< [ 55: 55](SRO/H) Misspeculated on LMTLINE prefetch. */
        uint64_t first_wns_sent        : 1;  /**< [ 56: 56](SRO/H) First WriteNoSnp of an LMTST issued. */
        uint64_t all_wns_sent          : 1;  /**< [ 57: 57](SRO/H) All WriteNoSnps in a burst issued. */
        uint64_t first_ro_sent         : 1;  /**< [ 58: 58](SRO/H) First ReadOnce of an LMTST issued. */
        uint64_t all_ro_sent           : 1;  /**< [ 59: 59](SRO/H) All ReadOnces in a burst issued. */
        uint64_t gwc_val               : 1;  /**< [ 60: 60](SRO/H) Saw a GWC response. */
        uint64_t gwc_hit               : 1;  /**< [ 61: 61](SRO/H) Saw a GWC hit. */
        uint64_t pa_dat_err            : 1;  /**< [ 62: 62](SRO/H) Saw an error in the CompData fetching the physical address. */
        uint64_t st_dat_err            : 1;  /**< [ 63: 63](SRO/H) Saw an error in the Store data from the core. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_lsax_diag_status_s cn; */
};
typedef union cavm_apax_lsax_diag_status cavm_apax_lsax_diag_status_t;

static inline uint64_t CAVM_APAX_LSAX_DIAG_STATUS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_LSAX_DIAG_STATUS(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=23) && (b<=1)))
        return 0x87e340001600ll + 0x1000000ll * ((a) & 0x1f) + 0x40ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=7) && (b<=1)))
        return 0x87e340001600ll + 0x1000000ll * ((a) & 0x7) + 0x40ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=17) && (b<=1)))
        return 0x87e340001600ll + 0x1000000ll * ((a) & 0x1f) + 0x40ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=11) && (b<=1)))
        return 0x87e340001600ll + 0x1000000ll * ((a) & 0xf) + 0x40ll * ((b) & 0x1);
    __cavm_csr_fatal("APAX_LSAX_DIAG_STATUS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_LSAX_DIAG_STATUS(a,b) cavm_apax_lsax_diag_status_t
#define bustype_CAVM_APAX_LSAX_DIAG_STATUS(a,b) CSR_TYPE_RSL
#define basename_CAVM_APAX_LSAX_DIAG_STATUS(a,b) "APAX_LSAX_DIAG_STATUS"
#define device_bar_CAVM_APAX_LSAX_DIAG_STATUS(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_LSAX_DIAG_STATUS(a,b) (a)
#define arguments_CAVM_APAX_LSAX_DIAG_STATUS(a,b) (a),(b),-1,-1

/**
 * Register (RSL) apa#_man_pll
 *
 * APA Manual PLL Control Register
 * These registers are used in conjunction with the APA_PLL registers when
 * the APA_PLL[NEXT_MAN] field is set.  Indexed by APA_PLL_E.
 * These register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is always reset on a chip domain reset.
 */
union cavm_apax_man_pll
{
    uint64_t u;
    struct cavm_apax_man_pll_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_63           : 1;
        uint64_t power_down            : 3;  /**< [ 62: 60](SR/W/H) Power Down.
                                                                 When set, The selected PLL/ARO is powered down and is in reset.  When APA_PLL[NEXT_PGM]
                                                                 is set and APA_PLL[NEXT_PLL_SEL] indicates eith a PLL or ARO.  The device is powered up and
                                                                 released from reset by the hardware.  The hardware automatically clears the bit when the
                                                                 sequence is complete and the device is present.  This sequence adds
                                                                 approximately 15uS to the programming.  During this
                                                                 time the NEXT_SWITCH timer is frozen.

                                                                 The following are the bit mapping:
                                                                   \<0\> = Reserved.  See MESHCLK PLL.
                                                                   \<1\> = PLL1.
                                                                   \<2\> = ARO.

                                                                 This operation does not require APA_PLL[NEXT_MAN] to be set. */
        uint64_t ref_div               : 4;  /**< [ 59: 56](SR/W) Reference clock divider for PLLs.
                                                                   0 = Reserved.
                                                                   1 = Divide reference clock by 1.
                                                                   2 = Divide reference clock by 2 (typical for 100 MHz).
                                                                   3 = Divide reference clock by 3.
                                                                   4 = Divide reference clock by 4 (typical for 122.88 MHz, see ALF_REF).
                                                                   5-31 = Divide reference clock by N.

                                                                 ARO ignores this field and uses reference clock. */
        uint64_t reserved_55           : 1;
        uint64_t post_div              : 9;  /**< [ 54: 46](SR/W) Post scalar divider.
                                                                   0 = Reserved.
                                                                   1 = Typically only used by ARO.
                                                                   2-511 = Divide VCO output by [POST_DIV]. */
        uint64_t bw                    : 2;  /**< [ 45: 44](SR/W) PLL VCO bandwidth.
                                                                 For DFICLK PLL the following setting are supported:
                                                                   0x0 = 20-30 MHz PLL reference/ref_div.
                                                                   0x1 = 30-45 MHz PLL reference/ref_div.
                                                                   0x2 = 45-65 MHz PLL reference/ref_div.
                                                                   0x3 = 65-90 MHz PLL reference/ref_div.

                                                                 Bits used as MSBs for DLF_KP and DLF_KI for LP PLL.
                                                                   0x3 = 30.72 MHz PLL reference/ref_div (see ALT_REF).
                                                                   0x3 = 50.00 MHz PLL reference/ref_div.

                                                                 Not used by ARO.

                                                                 See PLL and LP PLL specifications for details. */
        uint64_t vco_mul               : 10; /**< [ 43: 34](SR/W) VCO multiplier integer.

                                                                 PLL VCO frequency is [VCO_MUL].[VCO_FRACT] * reference_clock / [REF_DIV].

                                                                 When VCO_MUL is used with the ARO the number specified in bits 7..0 is multiplied
                                                                 by fifty, VCO_FRACT is added in and that number is used to determine how many
                                                                 ARO Clocks are required per update.  The UPDATE_RATE specifies how many reference
                                                                 clocks occur during this update period.

                                                                 VCO range for PLLs is 2 GHz to 5 GHz.
                                                                 VCO range for ARO is idential is 300 MHz - maximum ARO clock rate. */
        uint64_t vco_fract             : 10; /**< [ 33: 24](SR/W) VCO multiplier fraction.

                                                                 PLL VCO frequency is [VCO_MUL].[VCO_FRACT] * reference_clock / [REF_DIV].

                                                                 When VCO_FRACT is specified with the the ARO, this 10 bit number is added to the
                                                                 ARO clock count specified by VCO_MUL * 50 to determine clocks per update period.

                                                                 See VCO_MUL for min/max VCO frequencies.  Not used by ARO. */
        uint64_t icp                   : 4;  /**< [ 23: 20](SR/W) DFICLK PLL ICP setting.

                                                                 Typical setting 0x6 (0110) for 30.72, 33.33 and 50.00 MHz reference

                                                                 See DFICLK PLL specification for details.

                                                                 Not used by other PLLs or ARO. */
        uint64_t dlf_kp                : 5;  /**< [ 19: 15](SR/W) DLF Proportional Path Gain Setting.
                                                                 MSB is 1 bit integer stored in BW[1], 3 bit integer and 2 bit fraction stored here.

                                                                 Typical values are:
                                                                 Rate   Value BW[1], DLF_KP  PLL reference/ref_div
                                                                 \<pre\>
                                                                 20 MHz  0x18   0     0x18   20.00 - 40.00 MHz
                                                                 25 MHz  0x1e   0     0x1e   25.00 - 50.00 MHz
                                                                 30 MHz  0x24   1     0x04   30.00 - 48.70 MHz
                                                                 50 MHz  0x3d   1     0x1d   50 MHz
                                                                 \</pre\>

                                                                 Not used by DFICLK PLL and ARO. */
        uint64_t dlf_ki                : 5;  /**< [ 14: 10](SR/W) DLF Intergral Path Gain Setting.
                                                                 MSB is 1 bit integer stored in BW[0] and 5 bit fraction stored here.

                                                                 Typical values are:
                                                                 Rate   Value BW[0], DLF_KI  PLL reference/ref_div
                                                                 \<pre\>
                                                                 30 Mhz  0x3d   1     0x1d   30.00 - 48.70 Mhz
                                                                 50 MHz  0x3f   1     0x1f   50 MHz
                                                                 \</pre\>

                                                                 Not used by DFICLK PLL and ARO. */
        uint64_t update_rate           : 10; /**< [  9:  0](SR/W) PLL update rate.  PLL reference/ref_div in 100 KHz increments.
                                                                 Default values
                                                                   307 for 30.72 MHz reference.
                                                                   333 for 33.33 MHz reference.
                                                                   500 for 50.00 MHz reference.

                                                                 ARO updates are typically specified as either 50 or 100 Reference clocks.
                                                                 Hardware automatically adds an additional 30nS so a setting of 50 takes 530nS.
                                                                 This number can be used to predict lock times when the ARO is used.

                                                                 Frequency for ARO is
                                                                   (VCO_MUL*50 + VCO_FRACT) * 2.0mhz if UPDATE_RATE is 50 or
                                                                   (VCO_MUL*50 + VCO_FRACT) * 1.0mhz if UPDATE_RATE is 100

                                                                 Note that the estimately lock time is approximately 2x with an update rate of 100.

                                                                 MSB unused by LP PLL. */
#else /* Word 0 - Little Endian */
        uint64_t update_rate           : 10; /**< [  9:  0](SR/W) PLL update rate.  PLL reference/ref_div in 100 KHz increments.
                                                                 Default values
                                                                   307 for 30.72 MHz reference.
                                                                   333 for 33.33 MHz reference.
                                                                   500 for 50.00 MHz reference.

                                                                 ARO updates are typically specified as either 50 or 100 Reference clocks.
                                                                 Hardware automatically adds an additional 30nS so a setting of 50 takes 530nS.
                                                                 This number can be used to predict lock times when the ARO is used.

                                                                 Frequency for ARO is
                                                                   (VCO_MUL*50 + VCO_FRACT) * 2.0mhz if UPDATE_RATE is 50 or
                                                                   (VCO_MUL*50 + VCO_FRACT) * 1.0mhz if UPDATE_RATE is 100

                                                                 Note that the estimately lock time is approximately 2x with an update rate of 100.

                                                                 MSB unused by LP PLL. */
        uint64_t dlf_ki                : 5;  /**< [ 14: 10](SR/W) DLF Intergral Path Gain Setting.
                                                                 MSB is 1 bit integer stored in BW[0] and 5 bit fraction stored here.

                                                                 Typical values are:
                                                                 Rate   Value BW[0], DLF_KI  PLL reference/ref_div
                                                                 \<pre\>
                                                                 30 Mhz  0x3d   1     0x1d   30.00 - 48.70 Mhz
                                                                 50 MHz  0x3f   1     0x1f   50 MHz
                                                                 \</pre\>

                                                                 Not used by DFICLK PLL and ARO. */
        uint64_t dlf_kp                : 5;  /**< [ 19: 15](SR/W) DLF Proportional Path Gain Setting.
                                                                 MSB is 1 bit integer stored in BW[1], 3 bit integer and 2 bit fraction stored here.

                                                                 Typical values are:
                                                                 Rate   Value BW[1], DLF_KP  PLL reference/ref_div
                                                                 \<pre\>
                                                                 20 MHz  0x18   0     0x18   20.00 - 40.00 MHz
                                                                 25 MHz  0x1e   0     0x1e   25.00 - 50.00 MHz
                                                                 30 MHz  0x24   1     0x04   30.00 - 48.70 MHz
                                                                 50 MHz  0x3d   1     0x1d   50 MHz
                                                                 \</pre\>

                                                                 Not used by DFICLK PLL and ARO. */
        uint64_t icp                   : 4;  /**< [ 23: 20](SR/W) DFICLK PLL ICP setting.

                                                                 Typical setting 0x6 (0110) for 30.72, 33.33 and 50.00 MHz reference

                                                                 See DFICLK PLL specification for details.

                                                                 Not used by other PLLs or ARO. */
        uint64_t vco_fract             : 10; /**< [ 33: 24](SR/W) VCO multiplier fraction.

                                                                 PLL VCO frequency is [VCO_MUL].[VCO_FRACT] * reference_clock / [REF_DIV].

                                                                 When VCO_FRACT is specified with the the ARO, this 10 bit number is added to the
                                                                 ARO clock count specified by VCO_MUL * 50 to determine clocks per update period.

                                                                 See VCO_MUL for min/max VCO frequencies.  Not used by ARO. */
        uint64_t vco_mul               : 10; /**< [ 43: 34](SR/W) VCO multiplier integer.

                                                                 PLL VCO frequency is [VCO_MUL].[VCO_FRACT] * reference_clock / [REF_DIV].

                                                                 When VCO_MUL is used with the ARO the number specified in bits 7..0 is multiplied
                                                                 by fifty, VCO_FRACT is added in and that number is used to determine how many
                                                                 ARO Clocks are required per update.  The UPDATE_RATE specifies how many reference
                                                                 clocks occur during this update period.

                                                                 VCO range for PLLs is 2 GHz to 5 GHz.
                                                                 VCO range for ARO is idential is 300 MHz - maximum ARO clock rate. */
        uint64_t bw                    : 2;  /**< [ 45: 44](SR/W) PLL VCO bandwidth.
                                                                 For DFICLK PLL the following setting are supported:
                                                                   0x0 = 20-30 MHz PLL reference/ref_div.
                                                                   0x1 = 30-45 MHz PLL reference/ref_div.
                                                                   0x2 = 45-65 MHz PLL reference/ref_div.
                                                                   0x3 = 65-90 MHz PLL reference/ref_div.

                                                                 Bits used as MSBs for DLF_KP and DLF_KI for LP PLL.
                                                                   0x3 = 30.72 MHz PLL reference/ref_div (see ALT_REF).
                                                                   0x3 = 50.00 MHz PLL reference/ref_div.

                                                                 Not used by ARO.

                                                                 See PLL and LP PLL specifications for details. */
        uint64_t post_div              : 9;  /**< [ 54: 46](SR/W) Post scalar divider.
                                                                   0 = Reserved.
                                                                   1 = Typically only used by ARO.
                                                                   2-511 = Divide VCO output by [POST_DIV]. */
        uint64_t reserved_55           : 1;
        uint64_t ref_div               : 4;  /**< [ 59: 56](SR/W) Reference clock divider for PLLs.
                                                                   0 = Reserved.
                                                                   1 = Divide reference clock by 1.
                                                                   2 = Divide reference clock by 2 (typical for 100 MHz).
                                                                   3 = Divide reference clock by 3.
                                                                   4 = Divide reference clock by 4 (typical for 122.88 MHz, see ALF_REF).
                                                                   5-31 = Divide reference clock by N.

                                                                 ARO ignores this field and uses reference clock. */
        uint64_t power_down            : 3;  /**< [ 62: 60](SR/W/H) Power Down.
                                                                 When set, The selected PLL/ARO is powered down and is in reset.  When APA_PLL[NEXT_PGM]
                                                                 is set and APA_PLL[NEXT_PLL_SEL] indicates eith a PLL or ARO.  The device is powered up and
                                                                 released from reset by the hardware.  The hardware automatically clears the bit when the
                                                                 sequence is complete and the device is present.  This sequence adds
                                                                 approximately 15uS to the programming.  During this
                                                                 time the NEXT_SWITCH timer is frozen.

                                                                 The following are the bit mapping:
                                                                   \<0\> = Reserved.  See MESHCLK PLL.
                                                                   \<1\> = PLL1.
                                                                   \<2\> = ARO.

                                                                 This operation does not require APA_PLL[NEXT_MAN] to be set. */
        uint64_t reserved_63           : 1;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_man_pll_s cn; */
};
typedef union cavm_apax_man_pll cavm_apax_man_pll_t;

static inline uint64_t CAVM_APAX_MAN_PLL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_MAN_PLL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e340004008ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e340004008ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e340004008ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e340004008ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("APAX_MAN_PLL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_MAN_PLL(a) cavm_apax_man_pll_t
#define bustype_CAVM_APAX_MAN_PLL(a) CSR_TYPE_RSL
#define basename_CAVM_APAX_MAN_PLL(a) "APAX_MAN_PLL"
#define device_bar_CAVM_APAX_MAN_PLL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_MAN_PLL(a) (a)
#define arguments_CAVM_APAX_MAN_PLL(a) (a),-1,-1,-1

/**
 * Register (RSL) apa#_msix_pba#
 *
 * APA MSI-X Pending Bit Array Registers
 * This register is the MSI-X PBA table, the bit number is indexed by the APA_INT_VEC_E enumeration.
 */
union cavm_apax_msix_pbax
{
    uint64_t u;
    struct cavm_apax_msix_pbax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message for the associated APA_MSIX_VEC()_CTL, enumerated by APA_INT_VEC_E. Bits
                                                                 that have no associated APA_INT_VEC_E are zero. */
#else /* Word 0 - Little Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message for the associated APA_MSIX_VEC()_CTL, enumerated by APA_INT_VEC_E. Bits
                                                                 that have no associated APA_INT_VEC_E are zero. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_msix_pbax_s cn; */
};
typedef union cavm_apax_msix_pbax cavm_apax_msix_pbax_t;

static inline uint64_t CAVM_APAX_MSIX_PBAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_MSIX_PBAX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=23) && (b==0)))
        return 0x87e3401f0000ll + 0x1000000ll * ((a) & 0x1f) + 8ll * ((b) & 0x0);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=7) && (b==0)))
        return 0x87e3401f0000ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x0);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=17) && (b==0)))
        return 0x87e3401f0000ll + 0x1000000ll * ((a) & 0x1f) + 8ll * ((b) & 0x0);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=11) && (b==0)))
        return 0x87e3401f0000ll + 0x1000000ll * ((a) & 0xf) + 8ll * ((b) & 0x0);
    __cavm_csr_fatal("APAX_MSIX_PBAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_MSIX_PBAX(a,b) cavm_apax_msix_pbax_t
#define bustype_CAVM_APAX_MSIX_PBAX(a,b) CSR_TYPE_RSL
#define basename_CAVM_APAX_MSIX_PBAX(a,b) "APAX_MSIX_PBAX"
#define device_bar_CAVM_APAX_MSIX_PBAX(a,b) 0x4 /* PF_BAR4 */
#define busnum_CAVM_APAX_MSIX_PBAX(a,b) (a)
#define arguments_CAVM_APAX_MSIX_PBAX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) apa#_msix_vec#_addr
 *
 * APA MSI-X Vector Table Address Registers
 * This register is the MSI-X vector table, indexed by the APA_INT_VEC_E enumeration.
 */
union cavm_apax_msix_vecx_addr
{
    uint64_t u;
    struct cavm_apax_msix_vecx_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_1            : 1;
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Secure vector.
                                                                 0 = This vector may be read or written by either secure or nonsecure states.
                                                                 1 = This vector's APA()_MSIX_VEC()_ADDR, APA()_MSIX_VEC()_CTL, and
                                                                 corresponding bit of APA()_MSIX_PBA() are RAZ/WI and does not cause a fault when accessed
                                                                 by the nonsecure world.

                                                                 If PCCPF_APA()_VSEC_SCTL[MSIX_SEC] (for documentation, see
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC]) is
                                                                 set, all vectors are secure and function as if [SECVEC] was set. */
#else /* Word 0 - Little Endian */
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Secure vector.
                                                                 0 = This vector may be read or written by either secure or nonsecure states.
                                                                 1 = This vector's APA()_MSIX_VEC()_ADDR, APA()_MSIX_VEC()_CTL, and
                                                                 corresponding bit of APA()_MSIX_PBA() are RAZ/WI and does not cause a fault when accessed
                                                                 by the nonsecure world.

                                                                 If PCCPF_APA()_VSEC_SCTL[MSIX_SEC] (for documentation, see
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC]) is
                                                                 set, all vectors are secure and function as if [SECVEC] was set. */
        uint64_t reserved_1            : 1;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_msix_vecx_addr_s cn; */
};
typedef union cavm_apax_msix_vecx_addr cavm_apax_msix_vecx_addr_t;

static inline uint64_t CAVM_APAX_MSIX_VECX_ADDR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_MSIX_VECX_ADDR(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=23) && (b<=7)))
        return 0x87e340100000ll + 0x1000000ll * ((a) & 0x1f) + 0x10ll * ((b) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=7) && (b<=7)))
        return 0x87e340100000ll + 0x1000000ll * ((a) & 0x7) + 0x10ll * ((b) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=17) && (b<=7)))
        return 0x87e340100000ll + 0x1000000ll * ((a) & 0x1f) + 0x10ll * ((b) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=11) && (b<=7)))
        return 0x87e340100000ll + 0x1000000ll * ((a) & 0xf) + 0x10ll * ((b) & 0x7);
    __cavm_csr_fatal("APAX_MSIX_VECX_ADDR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_MSIX_VECX_ADDR(a,b) cavm_apax_msix_vecx_addr_t
#define bustype_CAVM_APAX_MSIX_VECX_ADDR(a,b) CSR_TYPE_RSL
#define basename_CAVM_APAX_MSIX_VECX_ADDR(a,b) "APAX_MSIX_VECX_ADDR"
#define device_bar_CAVM_APAX_MSIX_VECX_ADDR(a,b) 0x4 /* PF_BAR4 */
#define busnum_CAVM_APAX_MSIX_VECX_ADDR(a,b) (a)
#define arguments_CAVM_APAX_MSIX_VECX_ADDR(a,b) (a),(b),-1,-1

/**
 * Register (RSL) apa#_msix_vec#_ctl
 *
 * APA MSI-X Vector Table Control and Data Registers
 * This register is the MSI-X vector table, indexed by the APA_INT_VEC_E enumeration.
 */
union cavm_apax_msix_vecx_ctl
{
    uint64_t u;
    struct cavm_apax_msix_vecx_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_33_63        : 31;
        uint64_t mask                  : 1;  /**< [ 32: 32](R/W) When set, no MSI-X interrupts will be sent to this vector. */
        uint64_t data                  : 32; /**< [ 31:  0](R/W) Data to use for MSI-X delivery of this vector. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 32; /**< [ 31:  0](R/W) Data to use for MSI-X delivery of this vector. */
        uint64_t mask                  : 1;  /**< [ 32: 32](R/W) When set, no MSI-X interrupts will be sent to this vector. */
        uint64_t reserved_33_63        : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_msix_vecx_ctl_s cn; */
};
typedef union cavm_apax_msix_vecx_ctl cavm_apax_msix_vecx_ctl_t;

static inline uint64_t CAVM_APAX_MSIX_VECX_CTL(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_MSIX_VECX_CTL(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=23) && (b<=7)))
        return 0x87e340100008ll + 0x1000000ll * ((a) & 0x1f) + 0x10ll * ((b) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=7) && (b<=7)))
        return 0x87e340100008ll + 0x1000000ll * ((a) & 0x7) + 0x10ll * ((b) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=17) && (b<=7)))
        return 0x87e340100008ll + 0x1000000ll * ((a) & 0x1f) + 0x10ll * ((b) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=11) && (b<=7)))
        return 0x87e340100008ll + 0x1000000ll * ((a) & 0xf) + 0x10ll * ((b) & 0x7);
    __cavm_csr_fatal("APAX_MSIX_VECX_CTL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_MSIX_VECX_CTL(a,b) cavm_apax_msix_vecx_ctl_t
#define bustype_CAVM_APAX_MSIX_VECX_CTL(a,b) CSR_TYPE_RSL
#define basename_CAVM_APAX_MSIX_VECX_CTL(a,b) "APAX_MSIX_VECX_CTL"
#define device_bar_CAVM_APAX_MSIX_VECX_CTL(a,b) 0x4 /* PF_BAR4 */
#define busnum_CAVM_APAX_MSIX_VECX_CTL(a,b) (a)
#define arguments_CAVM_APAX_MSIX_VECX_CTL(a,b) (a),(b),-1,-1

/**
 * Register (RSL) apa#_nderr_info
 *
 * APA Non-Data Error Info Register
 * This register records error information for Non-Data Error interrupts
 * [RSP_PERR, DAT_PERR, SNP_PERR]. The first [RSP_PERR, DAT_PERR, SNP_PERR] error
 * will lock the register until the logged error type is cleared.
 */
union cavm_apax_nderr_info
{
    uint64_t u;
    struct cavm_apax_nderr_info_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_61_63        : 3;
        uint64_t rsp_perr              : 1;  /**< [ 60: 60](R/W1C/H) Logged information is for a APA()_ECC_INT_W1C[RSP_PERR] error. */
        uint64_t dat_perr              : 1;  /**< [ 59: 59](R/W1C/H) Logged information is for a APA()_ECC_INT_W1C[DAT_PERR] error. */
        uint64_t snp_perr              : 1;  /**< [ 58: 58](R/W1C/H) Logged information is for a APA()_ECC_INT_W1C[SNP_PERR] error. */
        uint64_t reserved_18_57        : 40;
        uint64_t opcode                : 7;  /**< [ 17: 11](RO/H) The opcode from the RSP/DAT/SNP mesh payload causing the error. Note for
                                                                 [RSP_PERR, DAT_PERR, SNP_PERR], the error itself might have corrupted the
                                                                 opcode. OPCODE[6:4] is 0 for DAT_PERR and OPCODE[6:5] is 0 for [RSP_PERR, SNP_PERR]. */
        uint64_t srcid                 : 11; /**< [ 10:  0](RO/H) The SRCID from the REQ/RSP/DAT mesh header causing the error. Note for
                                                                 [REQ_PERR], [RSP_PERR] and [DAT_PERR], the error itself might have corrupted the
                                                                 srcid. */
#else /* Word 0 - Little Endian */
        uint64_t srcid                 : 11; /**< [ 10:  0](RO/H) The SRCID from the REQ/RSP/DAT mesh header causing the error. Note for
                                                                 [REQ_PERR], [RSP_PERR] and [DAT_PERR], the error itself might have corrupted the
                                                                 srcid. */
        uint64_t opcode                : 7;  /**< [ 17: 11](RO/H) The opcode from the RSP/DAT/SNP mesh payload causing the error. Note for
                                                                 [RSP_PERR, DAT_PERR, SNP_PERR], the error itself might have corrupted the
                                                                 opcode. OPCODE[6:4] is 0 for DAT_PERR and OPCODE[6:5] is 0 for [RSP_PERR, SNP_PERR]. */
        uint64_t reserved_18_57        : 40;
        uint64_t snp_perr              : 1;  /**< [ 58: 58](R/W1C/H) Logged information is for a APA()_ECC_INT_W1C[SNP_PERR] error. */
        uint64_t dat_perr              : 1;  /**< [ 59: 59](R/W1C/H) Logged information is for a APA()_ECC_INT_W1C[DAT_PERR] error. */
        uint64_t rsp_perr              : 1;  /**< [ 60: 60](R/W1C/H) Logged information is for a APA()_ECC_INT_W1C[RSP_PERR] error. */
        uint64_t reserved_61_63        : 3;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_nderr_info_s cn; */
};
typedef union cavm_apax_nderr_info cavm_apax_nderr_info_t;

static inline uint64_t CAVM_APAX_NDERR_INFO(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_NDERR_INFO(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e340001528ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e340001528ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e340001528ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e340001528ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("APAX_NDERR_INFO", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_NDERR_INFO(a) cavm_apax_nderr_info_t
#define bustype_CAVM_APAX_NDERR_INFO(a) CSR_TYPE_RSL
#define basename_CAVM_APAX_NDERR_INFO(a) "APAX_NDERR_INFO"
#define device_bar_CAVM_APAX_NDERR_INFO(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_NDERR_INFO(a) (a)
#define arguments_CAVM_APAX_NDERR_INFO(a) (a),-1,-1,-1

/**
 * Register (RSL) apa#_pfc#
 *
 * APA Performance Counter Registers
 */
union cavm_apax_pfcx
{
    uint64_t u;
    struct cavm_apax_pfcx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](SR/W/H) Current counter value. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](SR/W/H) Current counter value. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_pfcx_s cn; */
};
typedef union cavm_apax_pfcx cavm_apax_pfcx_t;

static inline uint64_t CAVM_APAX_PFCX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_PFCX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=23) && (b<=5)))
        return 0x87e340001540ll + 0x1000000ll * ((a) & 0x1f) + 8ll * ((b) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=7) && (b<=5)))
        return 0x87e340001540ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=17) && (b<=5)))
        return 0x87e340001540ll + 0x1000000ll * ((a) & 0x1f) + 8ll * ((b) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=11) && (b<=5)))
        return 0x87e340001540ll + 0x1000000ll * ((a) & 0xf) + 8ll * ((b) & 0x7);
    __cavm_csr_fatal("APAX_PFCX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_PFCX(a,b) cavm_apax_pfcx_t
#define bustype_CAVM_APAX_PFCX(a,b) CSR_TYPE_RSL
#define basename_CAVM_APAX_PFCX(a,b) "APAX_PFCX"
#define device_bar_CAVM_APAX_PFCX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_PFCX(a,b) (a)
#define arguments_CAVM_APAX_PFCX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) apa#_pll
 *
 * APA PLL Control Register
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 * Each index of this register controls a PLL on the chip.  The register is used for
 * typical programming operations and is supplemented with the APA_MAN_PLL
 * register when selected.  Indexed by APA_PLL_E.
 *
 * The register fields are returned to reset values on a chip domain reset unless
 * specifically noted.
 */
union cavm_apax_pll
{
    uint64_t u;
    struct cavm_apax_pll_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t aro_present           : 1;  /**< [ 63: 63](SRO/H) Adaptive Ring Oscillator present.
                                                                 0 = ARO is unavailable.  Programming the ARO will have not effect and
                                                                     switching to ARO will result in the clock being stopped.
                                                                 1 = ARO is available. */
        uint64_t pll1_present          : 1;  /**< [ 62: 62](SRO/H) PLL1 present.
                                                                 0 = PLL1 is unavailable.  Programming PLL1 will have not effect and
                                                                     switching to PLL1 will result in the clock being stopped.
                                                                 1 = PLL1 is available. */
        uint64_t alt_ref               : 1;  /**< [ 61: 61](SR/W/H) Alternate reference clock.
                                                                 0 = Use 100 MHz reference.  [CUR_MUL] and [NEXT_MUL] values are based on 50 MHz increments
                                                                 1 = Use 122.88 MHz alternate reference clock.  [CUR_MUL] and [NEXT_MUL] values are based on
                                                                     30.72 MHz increments.

                                                                 Changing this field typically requires PLL reprogramming and a potential powercycle. */
        uint64_t reserved_60           : 1;
        uint64_t cur_pll_sel           : 3;  /**< [ 59: 57](SRO/H) Current PLL selection.
                                                                 Enumerated by APA_PLL_SEL_E. */
        uint64_t reserved_55_56        : 2;
        uint64_t cur_mul               : 7;  /**< [ 54: 48](SRO/H) Current frequency multiplier.
                                                                 If Bypass Clock or [USE_MAN] is selected, calculations must be done by software.
                                                                 The value is limited by [MAX_MUL].

                                                                 Units are based on the PLL reference clock.
                                                                 * With [ALT_REF] = 0, multiplier units are 50.00 MHz.
                                                                 * With [ALT_REF] = 1, multiplier units are 30.76 MHz.

                                                                 The following values are possible:
                                                                   0 = Uninitialized or powered down PLL selected by [CUR_PLL_SEL].
                                                                   1 = Bypass clock selected.
                                                                   2 = Reference clock selected.
                                                                   3 = Runt clock selected.
                                                                   4-70 = Valid clock frequency when [ALT_REF] = 0.
                                                                   4-114 = Valid clock frequency when [ALT_REF] = 1.

                                                                 If NEXT_MAN is set, NEXT_NUL is used to set CUR_MUL but the actual frequency
                                                                 is calculated by:

                                                                         RST_MAN_PLL()[VCO_MUL] / (RST_MAN_PLL()[REF_DIV] * RST_MAN_PLL()[POST_DIV])

                                                                 This field is always set to the lower of [INIT_MUL] and the limit specified by
                                                                 [MAX_MUL] on a chip domain reset. */
        uint64_t reserved_47           : 1;
        uint64_t max_mul               : 7;  /**< [ 46: 40](SR/W/H) Maximum PLL multiplier.
                                                                 This field is used to limit the [CUR_MUL] value.
                                                                 A value of zero is considered unlimited.  Once the value
                                                                 of this field is nonzero, any new values written into this field
                                                                 cannot exceed the previous value.  Values 1-5 are reserved
                                                                 since the minimum PLL frequency is at least 300 MHz.

                                                                 This field is reinitialized on a chip domain reset. */
        uint64_t reserved_39           : 1;
        uint64_t init_mul              : 7;  /**< [ 38: 32](SR/W) Chip Reset Frequency Multiplier.  Value used to program the PLL on a chip domain
                                                                 reset.  Value is based on 50 MHz.

                                                                 APA_PLL does not actually use this value.  See MESHCLK PLL for further information.
                                                                 This field is only reinitialized on a cold domain reset. */
        uint64_t reserved_31           : 1;
        uint64_t next_mul              : 7;  /**< [ 30: 24](SR/W) Next Frequency Multiplier.  Used to program the PLL if [NEXT_MAN] is clear.

                                                                 Frequency is based on reference clock and [ALT_REF] values.
                                                                   [ALT_REF] = 0, 100.00 MHz reference, units are 50.00 MHz.
                                                                   [ALT_REF] = 1, 122.88 MHz reference, units are 30.76 MHz.

                                                                 Values ranges when [NEXT_MAN] = 0 are:
                                                                   [ALT_REF] = 0, 4 - 70
                                                                   [ALT_REF] = 1, 4 - 114

                                                                 When [NEXT_MAN] = 1. Values have no effect on the hardware but can
                                                                 be used for software.

                                                                 In all cases values specified will appear in CUR_MUL after programming.

                                                                 This field is always set to [INIT_MUL] on a chip domain reset. */
        uint64_t next_pll_sel          : 3;  /**< [ 23: 21](SR/W) Next PLL Selection.  This register is used to select which PLL and register values
                                                                 are being addressed.  It affects both the APA_PLL and APA_MAN_PLL registers.
                                                                 Both the [NEXT_PGM] and [NEXT_SWITCH] fields use this information to start PLL operations
                                                                 and the value must not be changed while operations are taking place.
                                                                 Enumerated by APA_PLL_SEL_E. */
        uint64_t reserved_18_20        : 3;
        uint64_t next_man              : 1;  /**< [ 17: 17](SR/W) Determine PLL controls for next operation using contents of APA_MAN_PLL to specify values.
                                                                 0 = Use [NEXT_MUL] to determine settings and show results in [CUR_MUL].
                                                                 1 = Use APA_MAN_PLL fields to determine settings and set [CUR_MUL] to 0. */
        uint64_t next_pgm              : 1;  /**< [ 16: 16](SR/W/H) Program PLL specified by [NEXT_PLL_SEL] using [NEXT_MUL] if [NEXT_MAN] is clear or
                                                                 using APA_MAN_PLL fields if set. Hardware automatically
                                                                 clears this field when both PLL is updated and any delay specified
                                                                 in [NEXT_SWITCH] has completed. */
        uint64_t reserved_14_15        : 2;
        uint64_t next_switch           : 14; /**< [ 13:  0](SR/W/H) Switch the PLL specified by [NEXT_PLL_SEL] after delaying this number of 100 MHz clocks.
                                                                 When set to a nonzero value, the hardware will wait for
                                                                 any PLL programming to complete and then switch after the specified number of
                                                                 100 MHz clocks. Hardware will add additional clocks if required. */
#else /* Word 0 - Little Endian */
        uint64_t next_switch           : 14; /**< [ 13:  0](SR/W/H) Switch the PLL specified by [NEXT_PLL_SEL] after delaying this number of 100 MHz clocks.
                                                                 When set to a nonzero value, the hardware will wait for
                                                                 any PLL programming to complete and then switch after the specified number of
                                                                 100 MHz clocks. Hardware will add additional clocks if required. */
        uint64_t reserved_14_15        : 2;
        uint64_t next_pgm              : 1;  /**< [ 16: 16](SR/W/H) Program PLL specified by [NEXT_PLL_SEL] using [NEXT_MUL] if [NEXT_MAN] is clear or
                                                                 using APA_MAN_PLL fields if set. Hardware automatically
                                                                 clears this field when both PLL is updated and any delay specified
                                                                 in [NEXT_SWITCH] has completed. */
        uint64_t next_man              : 1;  /**< [ 17: 17](SR/W) Determine PLL controls for next operation using contents of APA_MAN_PLL to specify values.
                                                                 0 = Use [NEXT_MUL] to determine settings and show results in [CUR_MUL].
                                                                 1 = Use APA_MAN_PLL fields to determine settings and set [CUR_MUL] to 0. */
        uint64_t reserved_18_20        : 3;
        uint64_t next_pll_sel          : 3;  /**< [ 23: 21](SR/W) Next PLL Selection.  This register is used to select which PLL and register values
                                                                 are being addressed.  It affects both the APA_PLL and APA_MAN_PLL registers.
                                                                 Both the [NEXT_PGM] and [NEXT_SWITCH] fields use this information to start PLL operations
                                                                 and the value must not be changed while operations are taking place.
                                                                 Enumerated by APA_PLL_SEL_E. */
        uint64_t next_mul              : 7;  /**< [ 30: 24](SR/W) Next Frequency Multiplier.  Used to program the PLL if [NEXT_MAN] is clear.

                                                                 Frequency is based on reference clock and [ALT_REF] values.
                                                                   [ALT_REF] = 0, 100.00 MHz reference, units are 50.00 MHz.
                                                                   [ALT_REF] = 1, 122.88 MHz reference, units are 30.76 MHz.

                                                                 Values ranges when [NEXT_MAN] = 0 are:
                                                                   [ALT_REF] = 0, 4 - 70
                                                                   [ALT_REF] = 1, 4 - 114

                                                                 When [NEXT_MAN] = 1. Values have no effect on the hardware but can
                                                                 be used for software.

                                                                 In all cases values specified will appear in CUR_MUL after programming.

                                                                 This field is always set to [INIT_MUL] on a chip domain reset. */
        uint64_t reserved_31           : 1;
        uint64_t init_mul              : 7;  /**< [ 38: 32](SR/W) Chip Reset Frequency Multiplier.  Value used to program the PLL on a chip domain
                                                                 reset.  Value is based on 50 MHz.

                                                                 APA_PLL does not actually use this value.  See MESHCLK PLL for further information.
                                                                 This field is only reinitialized on a cold domain reset. */
        uint64_t reserved_39           : 1;
        uint64_t max_mul               : 7;  /**< [ 46: 40](SR/W/H) Maximum PLL multiplier.
                                                                 This field is used to limit the [CUR_MUL] value.
                                                                 A value of zero is considered unlimited.  Once the value
                                                                 of this field is nonzero, any new values written into this field
                                                                 cannot exceed the previous value.  Values 1-5 are reserved
                                                                 since the minimum PLL frequency is at least 300 MHz.

                                                                 This field is reinitialized on a chip domain reset. */
        uint64_t reserved_47           : 1;
        uint64_t cur_mul               : 7;  /**< [ 54: 48](SRO/H) Current frequency multiplier.
                                                                 If Bypass Clock or [USE_MAN] is selected, calculations must be done by software.
                                                                 The value is limited by [MAX_MUL].

                                                                 Units are based on the PLL reference clock.
                                                                 * With [ALT_REF] = 0, multiplier units are 50.00 MHz.
                                                                 * With [ALT_REF] = 1, multiplier units are 30.76 MHz.

                                                                 The following values are possible:
                                                                   0 = Uninitialized or powered down PLL selected by [CUR_PLL_SEL].
                                                                   1 = Bypass clock selected.
                                                                   2 = Reference clock selected.
                                                                   3 = Runt clock selected.
                                                                   4-70 = Valid clock frequency when [ALT_REF] = 0.
                                                                   4-114 = Valid clock frequency when [ALT_REF] = 1.

                                                                 If NEXT_MAN is set, NEXT_NUL is used to set CUR_MUL but the actual frequency
                                                                 is calculated by:

                                                                         RST_MAN_PLL()[VCO_MUL] / (RST_MAN_PLL()[REF_DIV] * RST_MAN_PLL()[POST_DIV])

                                                                 This field is always set to the lower of [INIT_MUL] and the limit specified by
                                                                 [MAX_MUL] on a chip domain reset. */
        uint64_t reserved_55_56        : 2;
        uint64_t cur_pll_sel           : 3;  /**< [ 59: 57](SRO/H) Current PLL selection.
                                                                 Enumerated by APA_PLL_SEL_E. */
        uint64_t reserved_60           : 1;
        uint64_t alt_ref               : 1;  /**< [ 61: 61](SR/W/H) Alternate reference clock.
                                                                 0 = Use 100 MHz reference.  [CUR_MUL] and [NEXT_MUL] values are based on 50 MHz increments
                                                                 1 = Use 122.88 MHz alternate reference clock.  [CUR_MUL] and [NEXT_MUL] values are based on
                                                                     30.72 MHz increments.

                                                                 Changing this field typically requires PLL reprogramming and a potential powercycle. */
        uint64_t pll1_present          : 1;  /**< [ 62: 62](SRO/H) PLL1 present.
                                                                 0 = PLL1 is unavailable.  Programming PLL1 will have not effect and
                                                                     switching to PLL1 will result in the clock being stopped.
                                                                 1 = PLL1 is available. */
        uint64_t aro_present           : 1;  /**< [ 63: 63](SRO/H) Adaptive Ring Oscillator present.
                                                                 0 = ARO is unavailable.  Programming the ARO will have not effect and
                                                                     switching to ARO will result in the clock being stopped.
                                                                 1 = ARO is available. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_pll_s cn; */
};
typedef union cavm_apax_pll cavm_apax_pll_t;

static inline uint64_t CAVM_APAX_PLL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_PLL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e340004000ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e340004000ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e340004000ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e340004000ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("APAX_PLL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_PLL(a) cavm_apax_pll_t
#define bustype_CAVM_APAX_PLL(a) CSR_TYPE_RSL
#define basename_CAVM_APAX_PLL(a) "APAX_PLL"
#define device_bar_CAVM_APAX_PLL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_PLL(a) (a)
#define arguments_CAVM_APAX_PLL(a) (a),-1,-1,-1

/**
 * Register (RSL) apa#_prf
 *
 * APA Performance Counter Control Register
 * This register controls measurement of the number of sent/received flits from APA
 * to/from the Xcalibur mesh.
 */
union cavm_apax_prf
{
    uint64_t u;
    struct cavm_apax_prf_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t rx_dat_en             : 1;  /**< [  5:  5](SR/W) Enable counting the number received flits into APA from the mesh on the DAT
                                                                 channel in APA()_PFC(5). */
        uint64_t rx_snp_en             : 1;  /**< [  4:  4](SR/W) Enable counting the number received flits into APA from the mesh on the SNP
                                                                 channel in APA()_PFC(4). */
        uint64_t rx_rsp_en             : 1;  /**< [  3:  3](SR/W) Enable counting the number received flits into APA from the mesh on the RSP
                                                                 channel in APA()_PFC(3). */
        uint64_t tx_dat_en             : 1;  /**< [  2:  2](SR/W) Enable counting the number sent flits out of APA to the mesh on the DAT channel in APA()_PFC(2). */
        uint64_t tx_rsp_en             : 1;  /**< [  1:  1](SR/W) Enable counting the number sent flits out of APA to the mesh on the RSP channel in APA()_PFC(1). */
        uint64_t tx_req_en             : 1;  /**< [  0:  0](SR/W) Enable counting the number sent flits out of APA to the mesh on the REQ channel in APA()_PFC(0). */
#else /* Word 0 - Little Endian */
        uint64_t tx_req_en             : 1;  /**< [  0:  0](SR/W) Enable counting the number sent flits out of APA to the mesh on the REQ channel in APA()_PFC(0). */
        uint64_t tx_rsp_en             : 1;  /**< [  1:  1](SR/W) Enable counting the number sent flits out of APA to the mesh on the RSP channel in APA()_PFC(1). */
        uint64_t tx_dat_en             : 1;  /**< [  2:  2](SR/W) Enable counting the number sent flits out of APA to the mesh on the DAT channel in APA()_PFC(2). */
        uint64_t rx_rsp_en             : 1;  /**< [  3:  3](SR/W) Enable counting the number received flits into APA from the mesh on the RSP
                                                                 channel in APA()_PFC(3). */
        uint64_t rx_snp_en             : 1;  /**< [  4:  4](SR/W) Enable counting the number received flits into APA from the mesh on the SNP
                                                                 channel in APA()_PFC(4). */
        uint64_t rx_dat_en             : 1;  /**< [  5:  5](SR/W) Enable counting the number received flits into APA from the mesh on the DAT
                                                                 channel in APA()_PFC(5). */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_prf_s cn; */
};
typedef union cavm_apax_prf cavm_apax_prf_t;

static inline uint64_t CAVM_APAX_PRF(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_PRF(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e340001520ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e340001520ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e340001520ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e340001520ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("APAX_PRF", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_PRF(a) cavm_apax_prf_t
#define bustype_CAVM_APAX_PRF(a) CSR_TYPE_RSL
#define basename_CAVM_APAX_PRF(a) "APAX_PRF"
#define device_bar_CAVM_APAX_PRF(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_PRF(a) (a)
#define arguments_CAVM_APAX_PRF(a) (a),-1,-1,-1

/**
 * Register (RSL) apa#_rvbaraddr
 *
 * APA Reset Base Address Register
 */
union cavm_apax_rvbaraddr
{
    uint64_t u;
    struct cavm_apax_rvbaraddr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t addr                  : 46; /**< [ 47:  2](SR/W) Program counter address for core reset. */
        uint64_t reserved_0_1          : 2;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_1          : 2;
        uint64_t addr                  : 46; /**< [ 47:  2](SR/W) Program counter address for core reset. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_rvbaraddr_s cn; */
};
typedef union cavm_apax_rvbaraddr cavm_apax_rvbaraddr_t;

static inline uint64_t CAVM_APAX_RVBARADDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_RVBARADDR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e340001400ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e340001400ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e340001400ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e340001400ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("APAX_RVBARADDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_RVBARADDR(a) cavm_apax_rvbaraddr_t
#define bustype_CAVM_APAX_RVBARADDR(a) CSR_TYPE_RSL
#define basename_CAVM_APAX_RVBARADDR(a) "APAX_RVBARADDR"
#define device_bar_CAVM_APAX_RVBARADDR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_RVBARADDR(a) (a)
#define arguments_CAVM_APAX_RVBARADDR(a) (a),-1,-1,-1

/**
 * Register (RSL) apa#_test_pll
 *
 * APA PLL Test Register
 */
union cavm_apax_test_pll
{
    uint64_t u;
    struct cavm_apax_test_pll_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t test_rsvd             : 3;  /**< [ 47: 45](SR/W) Test bits sent to the PLL.
                                                                 The following test_rsvd registeers can be accessed and data is supplied
                                                                 by the STOP_CNT field.

                                                                 0 = test_rsvd0, STOP_CNT with TILE_MSC_DISABLE cleared
                                                                 1 = test_rsvd1, STOP_CNT with TILE_MSC_DISABLE set
                                                                 2,3  = reserved
                                                                 4 = test_rsvd4, PLL Debug
                                                                 5 = test_rsvd5, ARO User Mode Control
                                                                 6 = test_rsvd6, ARO Calibration Min/Save Values
                                                                 7 = test_rsvd7, ARO User P1/P2 Settings

                                                                 TILE_MSC_DISABLE, when set, disables diagnostic output for the pcl row,
                                                                 causing the msc_clkout and  msc_lockout to not propagate across
                                                                 the pcl row.  This bit should be identically programmed across the same PCL row. */
        uint64_t test_ana              : 5;  /**< [ 44: 40](SR/W) Analog test port mux selection used for selected PLL.
                                                                 Function only available on some PLLs and not available on ARO. */
        uint64_t reserved_35_39        : 5;
        uint64_t testclk_pll1          : 1;  /**< [ 34: 34](SR/W) Test Clock source selection.
                                                                   0 = TEST_CLKOUT Based on PLL0.
                                                                   1 = TEST_CLKOUT Based on PLL1. */
        uint64_t msc_enable            : 1;  /**< [ 33: 33](SR/W/H) Enable diagnostic output.  Setting this bit causes the PLL to output
                                                                 to the common MSC_CLKOUT and MSC_LOCK ports.  No more than one
                                                                 [MSC_ENABLE] may be set at a time.

                                                                 This field is reinitialized on a cold domain reset. */
        uint64_t stop_clk              : 1;  /**< [ 32: 32](SR/W/H) PLL output Stopped.  This bit is set by hardware when the STOP_CNT reaches zero.
                                                                 Clearing this bit will restart the clock. */
        uint64_t stop_cnt              : 32; /**< [ 31:  0](SR/W/H) Counter Delay to stop PLL output.  When a positive value is written to this field the
                                                                 PLL output will stop when the counter reaches 0.  The counter decrements every PLL output clock. */
#else /* Word 0 - Little Endian */
        uint64_t stop_cnt              : 32; /**< [ 31:  0](SR/W/H) Counter Delay to stop PLL output.  When a positive value is written to this field the
                                                                 PLL output will stop when the counter reaches 0.  The counter decrements every PLL output clock. */
        uint64_t stop_clk              : 1;  /**< [ 32: 32](SR/W/H) PLL output Stopped.  This bit is set by hardware when the STOP_CNT reaches zero.
                                                                 Clearing this bit will restart the clock. */
        uint64_t msc_enable            : 1;  /**< [ 33: 33](SR/W/H) Enable diagnostic output.  Setting this bit causes the PLL to output
                                                                 to the common MSC_CLKOUT and MSC_LOCK ports.  No more than one
                                                                 [MSC_ENABLE] may be set at a time.

                                                                 This field is reinitialized on a cold domain reset. */
        uint64_t testclk_pll1          : 1;  /**< [ 34: 34](SR/W) Test Clock source selection.
                                                                   0 = TEST_CLKOUT Based on PLL0.
                                                                   1 = TEST_CLKOUT Based on PLL1. */
        uint64_t reserved_35_39        : 5;
        uint64_t test_ana              : 5;  /**< [ 44: 40](SR/W) Analog test port mux selection used for selected PLL.
                                                                 Function only available on some PLLs and not available on ARO. */
        uint64_t test_rsvd             : 3;  /**< [ 47: 45](SR/W) Test bits sent to the PLL.
                                                                 The following test_rsvd registeers can be accessed and data is supplied
                                                                 by the STOP_CNT field.

                                                                 0 = test_rsvd0, STOP_CNT with TILE_MSC_DISABLE cleared
                                                                 1 = test_rsvd1, STOP_CNT with TILE_MSC_DISABLE set
                                                                 2,3  = reserved
                                                                 4 = test_rsvd4, PLL Debug
                                                                 5 = test_rsvd5, ARO User Mode Control
                                                                 6 = test_rsvd6, ARO Calibration Min/Save Values
                                                                 7 = test_rsvd7, ARO User P1/P2 Settings

                                                                 TILE_MSC_DISABLE, when set, disables diagnostic output for the pcl row,
                                                                 causing the msc_clkout and  msc_lockout to not propagate across
                                                                 the pcl row.  This bit should be identically programmed across the same PCL row. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_test_pll_s cn10; */
    /* struct cavm_apax_test_pll_s cn10ka_p1; */
    struct cavm_apax_test_pll_cn10ka_p2
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t test_rsvd             : 3;  /**< [ 47: 45](SR/W) Test bits sent to the PLL.
                                                                 The following test_rsvd registeers can be accessed and data is supplied
                                                                 by the STOP_CNT field.

                                                                 0 = test_rsvd0, STOP_CNT with TILE_MSC_DISABLE cleared
                                                                 1 = test_rsvd1, STOP_CNT with TILE_MSC_DISABLE set
                                                                 2,3  = reserved
                                                                 4 = test_rsvd4, PLL Debug
                                                                 5 = test_rsvd5, ARO User Mode Control
                                                                 6 = test_rsvd6, ARO Calibration Min/Save Values
                                                                 7 = test_rsvd7, ARO User P1/P2 Settings

                                                                 TILE_MSC_DISABLE, when set, disables diagnostic output for the pcl row,
                                                                 causing the msc_clkout and  msc_lockout to not propagate across
                                                                 the pcl row.  This bit should be identically programmed across the same PCL row. */
        uint64_t test_ana              : 5;  /**< [ 44: 40](SR/W) Analog test port mux selection used for selected PLL.
                                                                 Function only available on some PLLs and not available on ARO. */
        uint64_t reserved_35_39        : 5;
        uint64_t testclk_pll1          : 1;  /**< [ 34: 34](SR/W) Test Clock source selection.
                                                                   0 = TEST_CLKOUT Based on PLL0.
                                                                   1 = TEST_CLKOUT Based on PLL1. */
        uint64_t msc_enable            : 1;  /**< [ 33: 33](SR/W/H) Enable diagnostic output.  Setting this bit causes the PLL to output
                                                                 to the common MSC_CLKOUT and MSC_LOCK ports.  No more than one
                                                                 [MSC_ENABLE] may be set at a time.

                                                                 This field is reinitilized on a cold domain reset. */
        uint64_t stop_clk              : 1;  /**< [ 32: 32](SR/W/H) PLL output Stopped.  This bit is set by hardware when the STOP_CNT reaches zero.
                                                                 Clearing this bit will restart the clock. */
        uint64_t stop_cnt              : 32; /**< [ 31:  0](SR/W/H) Counter Delay to stop PLL output.  When a positive value is written to this field the
                                                                 PLL output will stop when the counter reaches 0.  The counter decrements every PLL output clock. */
#else /* Word 0 - Little Endian */
        uint64_t stop_cnt              : 32; /**< [ 31:  0](SR/W/H) Counter Delay to stop PLL output.  When a positive value is written to this field the
                                                                 PLL output will stop when the counter reaches 0.  The counter decrements every PLL output clock. */
        uint64_t stop_clk              : 1;  /**< [ 32: 32](SR/W/H) PLL output Stopped.  This bit is set by hardware when the STOP_CNT reaches zero.
                                                                 Clearing this bit will restart the clock. */
        uint64_t msc_enable            : 1;  /**< [ 33: 33](SR/W/H) Enable diagnostic output.  Setting this bit causes the PLL to output
                                                                 to the common MSC_CLKOUT and MSC_LOCK ports.  No more than one
                                                                 [MSC_ENABLE] may be set at a time.

                                                                 This field is reinitilized on a cold domain reset. */
        uint64_t testclk_pll1          : 1;  /**< [ 34: 34](SR/W) Test Clock source selection.
                                                                   0 = TEST_CLKOUT Based on PLL0.
                                                                   1 = TEST_CLKOUT Based on PLL1. */
        uint64_t reserved_35_39        : 5;
        uint64_t test_ana              : 5;  /**< [ 44: 40](SR/W) Analog test port mux selection used for selected PLL.
                                                                 Function only available on some PLLs and not available on ARO. */
        uint64_t test_rsvd             : 3;  /**< [ 47: 45](SR/W) Test bits sent to the PLL.
                                                                 The following test_rsvd registeers can be accessed and data is supplied
                                                                 by the STOP_CNT field.

                                                                 0 = test_rsvd0, STOP_CNT with TILE_MSC_DISABLE cleared
                                                                 1 = test_rsvd1, STOP_CNT with TILE_MSC_DISABLE set
                                                                 2,3  = reserved
                                                                 4 = test_rsvd4, PLL Debug
                                                                 5 = test_rsvd5, ARO User Mode Control
                                                                 6 = test_rsvd6, ARO Calibration Min/Save Values
                                                                 7 = test_rsvd7, ARO User P1/P2 Settings

                                                                 TILE_MSC_DISABLE, when set, disables diagnostic output for the pcl row,
                                                                 causing the msc_clkout and  msc_lockout to not propagate across
                                                                 the pcl row.  This bit should be identically programmed across the same PCL row. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } cn10ka_p2;
    struct cavm_apax_test_pll_cn10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t test_rsvd             : 3;  /**< [ 47: 45](SR/W) Test bits sent to the PLL.
                                                                 The following test_rsvd registeers can be accessed and data is supplied
                                                                 by the STOP_CNT field.

                                                                 0 = test_rsvd0, STOP_CNT with TILE_MSC_DISABLE cleared
                                                                 1 = test_rsvd1, STOP_CNT with TILE_MSC_DISABLE set
                                                                 2,3  = reserved
                                                                 4 = test_rsvd4, PLL Debug
                                                                 5 = test_rsvd5, ARO User Mode Control
                                                                 6 = test_rsvd6, ARO Calibration Min/Save Values
                                                                 7 = test_rsvd7, ARO User P1/P2 Settings

                                                                 TILE_MSC_DISABLE, when set, disables diagnostic output for the pcl row,
                                                                 causing the msc_clkout and  msc_lockout to not propagate across
                                                                 the pcl row.  This bit should be identically programmed across the same PCL row. */
        uint64_t test_ana              : 5;  /**< [ 44: 40](SR/W) Analog test port mux selection used for selected PLL.
                                                                 Function only available on some PLLs and not available on ARO. */
        uint64_t reserved_35_39        : 5;
        uint64_t testclk_pll1          : 1;  /**< [ 34: 34](SR/W) Test Clock source selection.
                                                                   0 = TEST_CLKOUT Based on PLL0.
                                                                   1 = TEST_CLKOUT Based on PLL1. */
        uint64_t msc_enable            : 1;  /**< [ 33: 33](SR/W/H) Enable diagnostic output.  Setting this bit causes the PLL to output
                                                                 to the common MSC_CLKOUT and MSC_LOCK ports.  No more than one
                                                                 [MSC_ENABLE] may be set at a time.

                                                                 This field is reinitialized on a cold domain reset. */
        uint64_t stop_clk              : 1;  /**< [ 32: 32](SR/W/H) PLL output stop control.  When this field is set along with a postive
                                                                 this will start the counter at STOP_CNT and stop the output clock when the
                                                                 counter reaches zero.  Writing this bit to a 0 will re-start the clock.
                                                                 Reading this value as a 1 along with STOP_CNT=0 indicates the clock has
                                                                 been stopped. */
        uint64_t stop_cnt              : 32; /**< [ 31:  0](SR/W/H) Counter Delay to stop PLL output.
                                                                 The counter decrements every PLL output clock.  Value should be 0 if not used.
                                                                 When enabled minimum setting should be greater than 2. */
#else /* Word 0 - Little Endian */
        uint64_t stop_cnt              : 32; /**< [ 31:  0](SR/W/H) Counter Delay to stop PLL output.
                                                                 The counter decrements every PLL output clock.  Value should be 0 if not used.
                                                                 When enabled minimum setting should be greater than 2. */
        uint64_t stop_clk              : 1;  /**< [ 32: 32](SR/W/H) PLL output stop control.  When this field is set along with a postive
                                                                 this will start the counter at STOP_CNT and stop the output clock when the
                                                                 counter reaches zero.  Writing this bit to a 0 will re-start the clock.
                                                                 Reading this value as a 1 along with STOP_CNT=0 indicates the clock has
                                                                 been stopped. */
        uint64_t msc_enable            : 1;  /**< [ 33: 33](SR/W/H) Enable diagnostic output.  Setting this bit causes the PLL to output
                                                                 to the common MSC_CLKOUT and MSC_LOCK ports.  No more than one
                                                                 [MSC_ENABLE] may be set at a time.

                                                                 This field is reinitialized on a cold domain reset. */
        uint64_t testclk_pll1          : 1;  /**< [ 34: 34](SR/W) Test Clock source selection.
                                                                   0 = TEST_CLKOUT Based on PLL0.
                                                                   1 = TEST_CLKOUT Based on PLL1. */
        uint64_t reserved_35_39        : 5;
        uint64_t test_ana              : 5;  /**< [ 44: 40](SR/W) Analog test port mux selection used for selected PLL.
                                                                 Function only available on some PLLs and not available on ARO. */
        uint64_t test_rsvd             : 3;  /**< [ 47: 45](SR/W) Test bits sent to the PLL.
                                                                 The following test_rsvd registeers can be accessed and data is supplied
                                                                 by the STOP_CNT field.

                                                                 0 = test_rsvd0, STOP_CNT with TILE_MSC_DISABLE cleared
                                                                 1 = test_rsvd1, STOP_CNT with TILE_MSC_DISABLE set
                                                                 2,3  = reserved
                                                                 4 = test_rsvd4, PLL Debug
                                                                 5 = test_rsvd5, ARO User Mode Control
                                                                 6 = test_rsvd6, ARO Calibration Min/Save Values
                                                                 7 = test_rsvd7, ARO User P1/P2 Settings

                                                                 TILE_MSC_DISABLE, when set, disables diagnostic output for the pcl row,
                                                                 causing the msc_clkout and  msc_lockout to not propagate across
                                                                 the pcl row.  This bit should be identically programmed across the same PCL row. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } cn10kb;
    /* struct cavm_apax_test_pll_s cnf10ka; */
    /* struct cavm_apax_test_pll_s cnf10kb; */
};
typedef union cavm_apax_test_pll cavm_apax_test_pll_t;

static inline uint64_t CAVM_APAX_TEST_PLL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_TEST_PLL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e340004010ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e340004010ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e340004010ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e340004010ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("APAX_TEST_PLL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_TEST_PLL(a) cavm_apax_test_pll_t
#define bustype_CAVM_APAX_TEST_PLL(a) CSR_TYPE_RSL
#define basename_CAVM_APAX_TEST_PLL(a) "APAX_TEST_PLL"
#define device_bar_CAVM_APAX_TEST_PLL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_TEST_PLL(a) (a)
#define arguments_CAVM_APAX_TEST_PLL(a) (a),-1,-1,-1

/**
 * Register (RSL) apa#_wdog_core
 *
 * APA Watchdog Core Register
 * This register configures the timeouts for a core to receive responses.
 */
union cavm_apax_wdog_core
{
    uint64_t u;
    struct cavm_apax_wdog_core_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t enable                : 1;  /**< [ 31: 31](SR/W) Watchdog timeout enable. */
        uint64_t timeout               : 31; /**< [ 30:  0](SR/W) Timeout in units of 10ns. */
#else /* Word 0 - Little Endian */
        uint64_t timeout               : 31; /**< [ 30:  0](SR/W) Timeout in units of 10ns. */
        uint64_t enable                : 1;  /**< [ 31: 31](SR/W) Watchdog timeout enable. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_wdog_core_s cn; */
};
typedef union cavm_apax_wdog_core cavm_apax_wdog_core_t;

static inline uint64_t CAVM_APAX_WDOG_CORE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_WDOG_CORE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e340001300ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e340001300ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e340001300ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e340001300ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("APAX_WDOG_CORE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_WDOG_CORE(a) cavm_apax_wdog_core_t
#define bustype_CAVM_APAX_WDOG_CORE(a) CSR_TYPE_RSL
#define basename_CAVM_APAX_WDOG_CORE(a) "APAX_WDOG_CORE"
#define device_bar_CAVM_APAX_WDOG_CORE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_WDOG_CORE(a) (a)
#define arguments_CAVM_APAX_WDOG_CORE(a) (a),-1,-1,-1

/**
 * Register (RSL) apa#_wdog_core_diag
 *
 * APA Watchdog Core Diagnostic Register
 * This register reports and captures wdog timeouts for core. Timeouts indicate that
 * the core did not receive all the expected responses.
 */
union cavm_apax_wdog_core_diag
{
    uint64_t u;
    struct cavm_apax_wdog_core_diag_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t multi                 : 1;  /**< [ 31: 31](SR/W1C/H) Another stale entry was detected but not recorded because [STALE] was already set. */
        uint64_t stale                 : 1;  /**< [ 30: 30](SR/W1C/H) Stale entry was detected and recorded. */
        uint64_t reserved_20_29        : 10;
        uint64_t state                 : 4;  /**< [ 19: 16](SRO/H) Stale entry state. */
        uint64_t epoch                 : 1;  /**< [ 15: 15](SRO/H) Stale entry epoch. */
        uint64_t reqt                  : 3;  /**< [ 14: 12](SRO/H) Stale entry REQT. */
        uint64_t txnid                 : 12; /**< [ 11:  0](SRO/H) Stale entry transaction ID. */
#else /* Word 0 - Little Endian */
        uint64_t txnid                 : 12; /**< [ 11:  0](SRO/H) Stale entry transaction ID. */
        uint64_t reqt                  : 3;  /**< [ 14: 12](SRO/H) Stale entry REQT. */
        uint64_t epoch                 : 1;  /**< [ 15: 15](SRO/H) Stale entry epoch. */
        uint64_t state                 : 4;  /**< [ 19: 16](SRO/H) Stale entry state. */
        uint64_t reserved_20_29        : 10;
        uint64_t stale                 : 1;  /**< [ 30: 30](SR/W1C/H) Stale entry was detected and recorded. */
        uint64_t multi                 : 1;  /**< [ 31: 31](SR/W1C/H) Another stale entry was detected but not recorded because [STALE] was already set. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_wdog_core_diag_s cn; */
};
typedef union cavm_apax_wdog_core_diag cavm_apax_wdog_core_diag_t;

static inline uint64_t CAVM_APAX_WDOG_CORE_DIAG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_WDOG_CORE_DIAG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e340001310ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e340001310ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e340001310ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e340001310ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("APAX_WDOG_CORE_DIAG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_WDOG_CORE_DIAG(a) cavm_apax_wdog_core_diag_t
#define bustype_CAVM_APAX_WDOG_CORE_DIAG(a) CSR_TYPE_RSL
#define basename_CAVM_APAX_WDOG_CORE_DIAG(a) "APAX_WDOG_CORE_DIAG"
#define device_bar_CAVM_APAX_WDOG_CORE_DIAG(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_WDOG_CORE_DIAG(a) (a)
#define arguments_CAVM_APAX_WDOG_CORE_DIAG(a) (a),-1,-1,-1

/**
 * Register (RSL) apa#_wdog_int_ena_w1c
 *
 * APA Watchdog Interrupt Enable Clear Registers
 * This register clears interrupt enable bits.
 */
union cavm_apax_wdog_int_ena_w1c
{
    uint64_t u;
    struct cavm_apax_wdog_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t wdog_struct_txnid     : 1;  /**< [  4:  4](SR/W1C/H) Reads or clears enable for APA(0..23)_WDOG_INT_W1C[WDOG_STRUCT_TXNID]. */
        uint64_t wdog_struct_rqb       : 1;  /**< [  3:  3](SR/W1C/H) Reads or clears enable for APA(0..23)_WDOG_INT_W1C[WDOG_STRUCT_RQB]. */
        uint64_t wdog_struct_dat       : 1;  /**< [  2:  2](SR/W1C/H) Reads or clears enable for APA(0..23)_WDOG_INT_W1C[WDOG_STRUCT_DAT]. */
        uint64_t wdog_struct_crd       : 1;  /**< [  1:  1](SR/W1C/H) Reads or clears enable for APA(0..23)_WDOG_INT_W1C[WDOG_STRUCT_CRD]. */
        uint64_t wdog_core             : 1;  /**< [  0:  0](SR/W1C/H) Reads or clears enable for APA(0..23)_WDOG_INT_W1C[WDOG_CORE]. */
#else /* Word 0 - Little Endian */
        uint64_t wdog_core             : 1;  /**< [  0:  0](SR/W1C/H) Reads or clears enable for APA(0..23)_WDOG_INT_W1C[WDOG_CORE]. */
        uint64_t wdog_struct_crd       : 1;  /**< [  1:  1](SR/W1C/H) Reads or clears enable for APA(0..23)_WDOG_INT_W1C[WDOG_STRUCT_CRD]. */
        uint64_t wdog_struct_dat       : 1;  /**< [  2:  2](SR/W1C/H) Reads or clears enable for APA(0..23)_WDOG_INT_W1C[WDOG_STRUCT_DAT]. */
        uint64_t wdog_struct_rqb       : 1;  /**< [  3:  3](SR/W1C/H) Reads or clears enable for APA(0..23)_WDOG_INT_W1C[WDOG_STRUCT_RQB]. */
        uint64_t wdog_struct_txnid     : 1;  /**< [  4:  4](SR/W1C/H) Reads or clears enable for APA(0..23)_WDOG_INT_W1C[WDOG_STRUCT_TXNID]. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_wdog_int_ena_w1c_s cn10; */
    /* struct cavm_apax_wdog_int_ena_w1c_s cn10ka; */
    struct cavm_apax_wdog_int_ena_w1c_cn10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t wdog_struct_txnid     : 1;  /**< [  4:  4](SR/W1C/H) Reads or clears enable for APA(0..7)_WDOG_INT_W1C[WDOG_STRUCT_TXNID]. */
        uint64_t wdog_struct_rqb       : 1;  /**< [  3:  3](SR/W1C/H) Reads or clears enable for APA(0..7)_WDOG_INT_W1C[WDOG_STRUCT_RQB]. */
        uint64_t wdog_struct_dat       : 1;  /**< [  2:  2](SR/W1C/H) Reads or clears enable for APA(0..7)_WDOG_INT_W1C[WDOG_STRUCT_DAT]. */
        uint64_t wdog_struct_crd       : 1;  /**< [  1:  1](SR/W1C/H) Reads or clears enable for APA(0..7)_WDOG_INT_W1C[WDOG_STRUCT_CRD]. */
        uint64_t wdog_core             : 1;  /**< [  0:  0](SR/W1C/H) Reads or clears enable for APA(0..7)_WDOG_INT_W1C[WDOG_CORE]. */
#else /* Word 0 - Little Endian */
        uint64_t wdog_core             : 1;  /**< [  0:  0](SR/W1C/H) Reads or clears enable for APA(0..7)_WDOG_INT_W1C[WDOG_CORE]. */
        uint64_t wdog_struct_crd       : 1;  /**< [  1:  1](SR/W1C/H) Reads or clears enable for APA(0..7)_WDOG_INT_W1C[WDOG_STRUCT_CRD]. */
        uint64_t wdog_struct_dat       : 1;  /**< [  2:  2](SR/W1C/H) Reads or clears enable for APA(0..7)_WDOG_INT_W1C[WDOG_STRUCT_DAT]. */
        uint64_t wdog_struct_rqb       : 1;  /**< [  3:  3](SR/W1C/H) Reads or clears enable for APA(0..7)_WDOG_INT_W1C[WDOG_STRUCT_RQB]. */
        uint64_t wdog_struct_txnid     : 1;  /**< [  4:  4](SR/W1C/H) Reads or clears enable for APA(0..7)_WDOG_INT_W1C[WDOG_STRUCT_TXNID]. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } cn10kb;
    struct cavm_apax_wdog_int_ena_w1c_cnf10ka
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t wdog_struct_txnid     : 1;  /**< [  4:  4](SR/W1C/H) Reads or clears enable for APA(0..17)_WDOG_INT_W1C[WDOG_STRUCT_TXNID]. */
        uint64_t wdog_struct_rqb       : 1;  /**< [  3:  3](SR/W1C/H) Reads or clears enable for APA(0..17)_WDOG_INT_W1C[WDOG_STRUCT_RQB]. */
        uint64_t wdog_struct_dat       : 1;  /**< [  2:  2](SR/W1C/H) Reads or clears enable for APA(0..17)_WDOG_INT_W1C[WDOG_STRUCT_DAT]. */
        uint64_t wdog_struct_crd       : 1;  /**< [  1:  1](SR/W1C/H) Reads or clears enable for APA(0..17)_WDOG_INT_W1C[WDOG_STRUCT_CRD]. */
        uint64_t wdog_core             : 1;  /**< [  0:  0](SR/W1C/H) Reads or clears enable for APA(0..17)_WDOG_INT_W1C[WDOG_CORE]. */
#else /* Word 0 - Little Endian */
        uint64_t wdog_core             : 1;  /**< [  0:  0](SR/W1C/H) Reads or clears enable for APA(0..17)_WDOG_INT_W1C[WDOG_CORE]. */
        uint64_t wdog_struct_crd       : 1;  /**< [  1:  1](SR/W1C/H) Reads or clears enable for APA(0..17)_WDOG_INT_W1C[WDOG_STRUCT_CRD]. */
        uint64_t wdog_struct_dat       : 1;  /**< [  2:  2](SR/W1C/H) Reads or clears enable for APA(0..17)_WDOG_INT_W1C[WDOG_STRUCT_DAT]. */
        uint64_t wdog_struct_rqb       : 1;  /**< [  3:  3](SR/W1C/H) Reads or clears enable for APA(0..17)_WDOG_INT_W1C[WDOG_STRUCT_RQB]. */
        uint64_t wdog_struct_txnid     : 1;  /**< [  4:  4](SR/W1C/H) Reads or clears enable for APA(0..17)_WDOG_INT_W1C[WDOG_STRUCT_TXNID]. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } cnf10ka;
    struct cavm_apax_wdog_int_ena_w1c_cnf10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t wdog_struct_txnid     : 1;  /**< [  4:  4](SR/W1C/H) Reads or clears enable for APA(0..11)_WDOG_INT_W1C[WDOG_STRUCT_TXNID]. */
        uint64_t wdog_struct_rqb       : 1;  /**< [  3:  3](SR/W1C/H) Reads or clears enable for APA(0..11)_WDOG_INT_W1C[WDOG_STRUCT_RQB]. */
        uint64_t wdog_struct_dat       : 1;  /**< [  2:  2](SR/W1C/H) Reads or clears enable for APA(0..11)_WDOG_INT_W1C[WDOG_STRUCT_DAT]. */
        uint64_t wdog_struct_crd       : 1;  /**< [  1:  1](SR/W1C/H) Reads or clears enable for APA(0..11)_WDOG_INT_W1C[WDOG_STRUCT_CRD]. */
        uint64_t wdog_core             : 1;  /**< [  0:  0](SR/W1C/H) Reads or clears enable for APA(0..11)_WDOG_INT_W1C[WDOG_CORE]. */
#else /* Word 0 - Little Endian */
        uint64_t wdog_core             : 1;  /**< [  0:  0](SR/W1C/H) Reads or clears enable for APA(0..11)_WDOG_INT_W1C[WDOG_CORE]. */
        uint64_t wdog_struct_crd       : 1;  /**< [  1:  1](SR/W1C/H) Reads or clears enable for APA(0..11)_WDOG_INT_W1C[WDOG_STRUCT_CRD]. */
        uint64_t wdog_struct_dat       : 1;  /**< [  2:  2](SR/W1C/H) Reads or clears enable for APA(0..11)_WDOG_INT_W1C[WDOG_STRUCT_DAT]. */
        uint64_t wdog_struct_rqb       : 1;  /**< [  3:  3](SR/W1C/H) Reads or clears enable for APA(0..11)_WDOG_INT_W1C[WDOG_STRUCT_RQB]. */
        uint64_t wdog_struct_txnid     : 1;  /**< [  4:  4](SR/W1C/H) Reads or clears enable for APA(0..11)_WDOG_INT_W1C[WDOG_STRUCT_TXNID]. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } cnf10kb;
};
typedef union cavm_apax_wdog_int_ena_w1c cavm_apax_wdog_int_ena_w1c_t;

static inline uint64_t CAVM_APAX_WDOG_INT_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_WDOG_INT_ENA_W1C(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e340001e30ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e340001e30ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e340001e30ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e340001e30ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("APAX_WDOG_INT_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_WDOG_INT_ENA_W1C(a) cavm_apax_wdog_int_ena_w1c_t
#define bustype_CAVM_APAX_WDOG_INT_ENA_W1C(a) CSR_TYPE_RSL
#define basename_CAVM_APAX_WDOG_INT_ENA_W1C(a) "APAX_WDOG_INT_ENA_W1C"
#define device_bar_CAVM_APAX_WDOG_INT_ENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_WDOG_INT_ENA_W1C(a) (a)
#define arguments_CAVM_APAX_WDOG_INT_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (RSL) apa#_wdog_int_ena_w1s
 *
 * APA Watchdog Interrupt Enable Set Registers
 * This register sets interrupt enable bits.
 */
union cavm_apax_wdog_int_ena_w1s
{
    uint64_t u;
    struct cavm_apax_wdog_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t wdog_struct_txnid     : 1;  /**< [  4:  4](SR/W1S/H) Reads or sets enable for APA(0..23)_WDOG_INT_W1C[WDOG_STRUCT_TXNID]. */
        uint64_t wdog_struct_rqb       : 1;  /**< [  3:  3](SR/W1S/H) Reads or sets enable for APA(0..23)_WDOG_INT_W1C[WDOG_STRUCT_RQB]. */
        uint64_t wdog_struct_dat       : 1;  /**< [  2:  2](SR/W1S/H) Reads or sets enable for APA(0..23)_WDOG_INT_W1C[WDOG_STRUCT_DAT]. */
        uint64_t wdog_struct_crd       : 1;  /**< [  1:  1](SR/W1S/H) Reads or sets enable for APA(0..23)_WDOG_INT_W1C[WDOG_STRUCT_CRD]. */
        uint64_t wdog_core             : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets enable for APA(0..23)_WDOG_INT_W1C[WDOG_CORE]. */
#else /* Word 0 - Little Endian */
        uint64_t wdog_core             : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets enable for APA(0..23)_WDOG_INT_W1C[WDOG_CORE]. */
        uint64_t wdog_struct_crd       : 1;  /**< [  1:  1](SR/W1S/H) Reads or sets enable for APA(0..23)_WDOG_INT_W1C[WDOG_STRUCT_CRD]. */
        uint64_t wdog_struct_dat       : 1;  /**< [  2:  2](SR/W1S/H) Reads or sets enable for APA(0..23)_WDOG_INT_W1C[WDOG_STRUCT_DAT]. */
        uint64_t wdog_struct_rqb       : 1;  /**< [  3:  3](SR/W1S/H) Reads or sets enable for APA(0..23)_WDOG_INT_W1C[WDOG_STRUCT_RQB]. */
        uint64_t wdog_struct_txnid     : 1;  /**< [  4:  4](SR/W1S/H) Reads or sets enable for APA(0..23)_WDOG_INT_W1C[WDOG_STRUCT_TXNID]. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_wdog_int_ena_w1s_s cn10; */
    /* struct cavm_apax_wdog_int_ena_w1s_s cn10ka; */
    struct cavm_apax_wdog_int_ena_w1s_cn10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t wdog_struct_txnid     : 1;  /**< [  4:  4](SR/W1S/H) Reads or sets enable for APA(0..7)_WDOG_INT_W1C[WDOG_STRUCT_TXNID]. */
        uint64_t wdog_struct_rqb       : 1;  /**< [  3:  3](SR/W1S/H) Reads or sets enable for APA(0..7)_WDOG_INT_W1C[WDOG_STRUCT_RQB]. */
        uint64_t wdog_struct_dat       : 1;  /**< [  2:  2](SR/W1S/H) Reads or sets enable for APA(0..7)_WDOG_INT_W1C[WDOG_STRUCT_DAT]. */
        uint64_t wdog_struct_crd       : 1;  /**< [  1:  1](SR/W1S/H) Reads or sets enable for APA(0..7)_WDOG_INT_W1C[WDOG_STRUCT_CRD]. */
        uint64_t wdog_core             : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets enable for APA(0..7)_WDOG_INT_W1C[WDOG_CORE]. */
#else /* Word 0 - Little Endian */
        uint64_t wdog_core             : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets enable for APA(0..7)_WDOG_INT_W1C[WDOG_CORE]. */
        uint64_t wdog_struct_crd       : 1;  /**< [  1:  1](SR/W1S/H) Reads or sets enable for APA(0..7)_WDOG_INT_W1C[WDOG_STRUCT_CRD]. */
        uint64_t wdog_struct_dat       : 1;  /**< [  2:  2](SR/W1S/H) Reads or sets enable for APA(0..7)_WDOG_INT_W1C[WDOG_STRUCT_DAT]. */
        uint64_t wdog_struct_rqb       : 1;  /**< [  3:  3](SR/W1S/H) Reads or sets enable for APA(0..7)_WDOG_INT_W1C[WDOG_STRUCT_RQB]. */
        uint64_t wdog_struct_txnid     : 1;  /**< [  4:  4](SR/W1S/H) Reads or sets enable for APA(0..7)_WDOG_INT_W1C[WDOG_STRUCT_TXNID]. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } cn10kb;
    struct cavm_apax_wdog_int_ena_w1s_cnf10ka
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t wdog_struct_txnid     : 1;  /**< [  4:  4](SR/W1S/H) Reads or sets enable for APA(0..17)_WDOG_INT_W1C[WDOG_STRUCT_TXNID]. */
        uint64_t wdog_struct_rqb       : 1;  /**< [  3:  3](SR/W1S/H) Reads or sets enable for APA(0..17)_WDOG_INT_W1C[WDOG_STRUCT_RQB]. */
        uint64_t wdog_struct_dat       : 1;  /**< [  2:  2](SR/W1S/H) Reads or sets enable for APA(0..17)_WDOG_INT_W1C[WDOG_STRUCT_DAT]. */
        uint64_t wdog_struct_crd       : 1;  /**< [  1:  1](SR/W1S/H) Reads or sets enable for APA(0..17)_WDOG_INT_W1C[WDOG_STRUCT_CRD]. */
        uint64_t wdog_core             : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets enable for APA(0..17)_WDOG_INT_W1C[WDOG_CORE]. */
#else /* Word 0 - Little Endian */
        uint64_t wdog_core             : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets enable for APA(0..17)_WDOG_INT_W1C[WDOG_CORE]. */
        uint64_t wdog_struct_crd       : 1;  /**< [  1:  1](SR/W1S/H) Reads or sets enable for APA(0..17)_WDOG_INT_W1C[WDOG_STRUCT_CRD]. */
        uint64_t wdog_struct_dat       : 1;  /**< [  2:  2](SR/W1S/H) Reads or sets enable for APA(0..17)_WDOG_INT_W1C[WDOG_STRUCT_DAT]. */
        uint64_t wdog_struct_rqb       : 1;  /**< [  3:  3](SR/W1S/H) Reads or sets enable for APA(0..17)_WDOG_INT_W1C[WDOG_STRUCT_RQB]. */
        uint64_t wdog_struct_txnid     : 1;  /**< [  4:  4](SR/W1S/H) Reads or sets enable for APA(0..17)_WDOG_INT_W1C[WDOG_STRUCT_TXNID]. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } cnf10ka;
    struct cavm_apax_wdog_int_ena_w1s_cnf10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t wdog_struct_txnid     : 1;  /**< [  4:  4](SR/W1S/H) Reads or sets enable for APA(0..11)_WDOG_INT_W1C[WDOG_STRUCT_TXNID]. */
        uint64_t wdog_struct_rqb       : 1;  /**< [  3:  3](SR/W1S/H) Reads or sets enable for APA(0..11)_WDOG_INT_W1C[WDOG_STRUCT_RQB]. */
        uint64_t wdog_struct_dat       : 1;  /**< [  2:  2](SR/W1S/H) Reads or sets enable for APA(0..11)_WDOG_INT_W1C[WDOG_STRUCT_DAT]. */
        uint64_t wdog_struct_crd       : 1;  /**< [  1:  1](SR/W1S/H) Reads or sets enable for APA(0..11)_WDOG_INT_W1C[WDOG_STRUCT_CRD]. */
        uint64_t wdog_core             : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets enable for APA(0..11)_WDOG_INT_W1C[WDOG_CORE]. */
#else /* Word 0 - Little Endian */
        uint64_t wdog_core             : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets enable for APA(0..11)_WDOG_INT_W1C[WDOG_CORE]. */
        uint64_t wdog_struct_crd       : 1;  /**< [  1:  1](SR/W1S/H) Reads or sets enable for APA(0..11)_WDOG_INT_W1C[WDOG_STRUCT_CRD]. */
        uint64_t wdog_struct_dat       : 1;  /**< [  2:  2](SR/W1S/H) Reads or sets enable for APA(0..11)_WDOG_INT_W1C[WDOG_STRUCT_DAT]. */
        uint64_t wdog_struct_rqb       : 1;  /**< [  3:  3](SR/W1S/H) Reads or sets enable for APA(0..11)_WDOG_INT_W1C[WDOG_STRUCT_RQB]. */
        uint64_t wdog_struct_txnid     : 1;  /**< [  4:  4](SR/W1S/H) Reads or sets enable for APA(0..11)_WDOG_INT_W1C[WDOG_STRUCT_TXNID]. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } cnf10kb;
};
typedef union cavm_apax_wdog_int_ena_w1s cavm_apax_wdog_int_ena_w1s_t;

static inline uint64_t CAVM_APAX_WDOG_INT_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_WDOG_INT_ENA_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e340001e38ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e340001e38ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e340001e38ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e340001e38ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("APAX_WDOG_INT_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_WDOG_INT_ENA_W1S(a) cavm_apax_wdog_int_ena_w1s_t
#define bustype_CAVM_APAX_WDOG_INT_ENA_W1S(a) CSR_TYPE_RSL
#define basename_CAVM_APAX_WDOG_INT_ENA_W1S(a) "APAX_WDOG_INT_ENA_W1S"
#define device_bar_CAVM_APAX_WDOG_INT_ENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_WDOG_INT_ENA_W1S(a) (a)
#define arguments_CAVM_APAX_WDOG_INT_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (RSL) apa#_wdog_int_w1c
 *
 * APA Watchdog Interrupt Register
 * This register reports watchdog interrupt status.
 */
union cavm_apax_wdog_int_w1c
{
    uint64_t u;
    struct cavm_apax_wdog_int_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t wdog_struct_txnid     : 1;  /**< [  4:  4](SR/W1C/H) Stale entry was detected in TXNID. */
        uint64_t wdog_struct_rqb       : 1;  /**< [  3:  3](SR/W1C/H) Stale entry was detected in RQB. */
        uint64_t wdog_struct_dat       : 1;  /**< [  2:  2](SR/W1C/H) Stale entry was detected in CRD. */
        uint64_t wdog_struct_crd       : 1;  /**< [  1:  1](SR/W1C/H) Stale entry was detected in CRD. */
        uint64_t wdog_core             : 1;  /**< [  0:  0](SR/W1C/H) Core did not receive expected responses before timeout. */
#else /* Word 0 - Little Endian */
        uint64_t wdog_core             : 1;  /**< [  0:  0](SR/W1C/H) Core did not receive expected responses before timeout. */
        uint64_t wdog_struct_crd       : 1;  /**< [  1:  1](SR/W1C/H) Stale entry was detected in CRD. */
        uint64_t wdog_struct_dat       : 1;  /**< [  2:  2](SR/W1C/H) Stale entry was detected in CRD. */
        uint64_t wdog_struct_rqb       : 1;  /**< [  3:  3](SR/W1C/H) Stale entry was detected in RQB. */
        uint64_t wdog_struct_txnid     : 1;  /**< [  4:  4](SR/W1C/H) Stale entry was detected in TXNID. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_wdog_int_w1c_s cn; */
};
typedef union cavm_apax_wdog_int_w1c cavm_apax_wdog_int_w1c_t;

static inline uint64_t CAVM_APAX_WDOG_INT_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_WDOG_INT_W1C(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e340001e20ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e340001e20ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e340001e20ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e340001e20ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("APAX_WDOG_INT_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_WDOG_INT_W1C(a) cavm_apax_wdog_int_w1c_t
#define bustype_CAVM_APAX_WDOG_INT_W1C(a) CSR_TYPE_RSL
#define basename_CAVM_APAX_WDOG_INT_W1C(a) "APAX_WDOG_INT_W1C"
#define device_bar_CAVM_APAX_WDOG_INT_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_WDOG_INT_W1C(a) (a)
#define arguments_CAVM_APAX_WDOG_INT_W1C(a) (a),-1,-1,-1

/**
 * Register (RSL) apa#_wdog_int_w1s
 *
 * APA Watchdog Interrupt Set Registers
 * This register sets interrupt bits.
 */
union cavm_apax_wdog_int_w1s
{
    uint64_t u;
    struct cavm_apax_wdog_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t wdog_struct_txnid     : 1;  /**< [  4:  4](SR/W1S/H) Reads or sets APA(0..23)_WDOG_INT_W1C[WDOG_STRUCT_TXNID]. */
        uint64_t wdog_struct_rqb       : 1;  /**< [  3:  3](SR/W1S/H) Reads or sets APA(0..23)_WDOG_INT_W1C[WDOG_STRUCT_RQB]. */
        uint64_t wdog_struct_dat       : 1;  /**< [  2:  2](SR/W1S/H) Reads or sets APA(0..23)_WDOG_INT_W1C[WDOG_STRUCT_DAT]. */
        uint64_t wdog_struct_crd       : 1;  /**< [  1:  1](SR/W1S/H) Reads or sets APA(0..23)_WDOG_INT_W1C[WDOG_STRUCT_CRD]. */
        uint64_t wdog_core             : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets APA(0..23)_WDOG_INT_W1C[WDOG_CORE]. */
#else /* Word 0 - Little Endian */
        uint64_t wdog_core             : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets APA(0..23)_WDOG_INT_W1C[WDOG_CORE]. */
        uint64_t wdog_struct_crd       : 1;  /**< [  1:  1](SR/W1S/H) Reads or sets APA(0..23)_WDOG_INT_W1C[WDOG_STRUCT_CRD]. */
        uint64_t wdog_struct_dat       : 1;  /**< [  2:  2](SR/W1S/H) Reads or sets APA(0..23)_WDOG_INT_W1C[WDOG_STRUCT_DAT]. */
        uint64_t wdog_struct_rqb       : 1;  /**< [  3:  3](SR/W1S/H) Reads or sets APA(0..23)_WDOG_INT_W1C[WDOG_STRUCT_RQB]. */
        uint64_t wdog_struct_txnid     : 1;  /**< [  4:  4](SR/W1S/H) Reads or sets APA(0..23)_WDOG_INT_W1C[WDOG_STRUCT_TXNID]. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_wdog_int_w1s_s cn10; */
    /* struct cavm_apax_wdog_int_w1s_s cn10ka; */
    struct cavm_apax_wdog_int_w1s_cn10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t wdog_struct_txnid     : 1;  /**< [  4:  4](SR/W1S/H) Reads or sets APA(0..7)_WDOG_INT_W1C[WDOG_STRUCT_TXNID]. */
        uint64_t wdog_struct_rqb       : 1;  /**< [  3:  3](SR/W1S/H) Reads or sets APA(0..7)_WDOG_INT_W1C[WDOG_STRUCT_RQB]. */
        uint64_t wdog_struct_dat       : 1;  /**< [  2:  2](SR/W1S/H) Reads or sets APA(0..7)_WDOG_INT_W1C[WDOG_STRUCT_DAT]. */
        uint64_t wdog_struct_crd       : 1;  /**< [  1:  1](SR/W1S/H) Reads or sets APA(0..7)_WDOG_INT_W1C[WDOG_STRUCT_CRD]. */
        uint64_t wdog_core             : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets APA(0..7)_WDOG_INT_W1C[WDOG_CORE]. */
#else /* Word 0 - Little Endian */
        uint64_t wdog_core             : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets APA(0..7)_WDOG_INT_W1C[WDOG_CORE]. */
        uint64_t wdog_struct_crd       : 1;  /**< [  1:  1](SR/W1S/H) Reads or sets APA(0..7)_WDOG_INT_W1C[WDOG_STRUCT_CRD]. */
        uint64_t wdog_struct_dat       : 1;  /**< [  2:  2](SR/W1S/H) Reads or sets APA(0..7)_WDOG_INT_W1C[WDOG_STRUCT_DAT]. */
        uint64_t wdog_struct_rqb       : 1;  /**< [  3:  3](SR/W1S/H) Reads or sets APA(0..7)_WDOG_INT_W1C[WDOG_STRUCT_RQB]. */
        uint64_t wdog_struct_txnid     : 1;  /**< [  4:  4](SR/W1S/H) Reads or sets APA(0..7)_WDOG_INT_W1C[WDOG_STRUCT_TXNID]. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } cn10kb;
    struct cavm_apax_wdog_int_w1s_cnf10ka
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t wdog_struct_txnid     : 1;  /**< [  4:  4](SR/W1S/H) Reads or sets APA(0..17)_WDOG_INT_W1C[WDOG_STRUCT_TXNID]. */
        uint64_t wdog_struct_rqb       : 1;  /**< [  3:  3](SR/W1S/H) Reads or sets APA(0..17)_WDOG_INT_W1C[WDOG_STRUCT_RQB]. */
        uint64_t wdog_struct_dat       : 1;  /**< [  2:  2](SR/W1S/H) Reads or sets APA(0..17)_WDOG_INT_W1C[WDOG_STRUCT_DAT]. */
        uint64_t wdog_struct_crd       : 1;  /**< [  1:  1](SR/W1S/H) Reads or sets APA(0..17)_WDOG_INT_W1C[WDOG_STRUCT_CRD]. */
        uint64_t wdog_core             : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets APA(0..17)_WDOG_INT_W1C[WDOG_CORE]. */
#else /* Word 0 - Little Endian */
        uint64_t wdog_core             : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets APA(0..17)_WDOG_INT_W1C[WDOG_CORE]. */
        uint64_t wdog_struct_crd       : 1;  /**< [  1:  1](SR/W1S/H) Reads or sets APA(0..17)_WDOG_INT_W1C[WDOG_STRUCT_CRD]. */
        uint64_t wdog_struct_dat       : 1;  /**< [  2:  2](SR/W1S/H) Reads or sets APA(0..17)_WDOG_INT_W1C[WDOG_STRUCT_DAT]. */
        uint64_t wdog_struct_rqb       : 1;  /**< [  3:  3](SR/W1S/H) Reads or sets APA(0..17)_WDOG_INT_W1C[WDOG_STRUCT_RQB]. */
        uint64_t wdog_struct_txnid     : 1;  /**< [  4:  4](SR/W1S/H) Reads or sets APA(0..17)_WDOG_INT_W1C[WDOG_STRUCT_TXNID]. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } cnf10ka;
    struct cavm_apax_wdog_int_w1s_cnf10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t wdog_struct_txnid     : 1;  /**< [  4:  4](SR/W1S/H) Reads or sets APA(0..11)_WDOG_INT_W1C[WDOG_STRUCT_TXNID]. */
        uint64_t wdog_struct_rqb       : 1;  /**< [  3:  3](SR/W1S/H) Reads or sets APA(0..11)_WDOG_INT_W1C[WDOG_STRUCT_RQB]. */
        uint64_t wdog_struct_dat       : 1;  /**< [  2:  2](SR/W1S/H) Reads or sets APA(0..11)_WDOG_INT_W1C[WDOG_STRUCT_DAT]. */
        uint64_t wdog_struct_crd       : 1;  /**< [  1:  1](SR/W1S/H) Reads or sets APA(0..11)_WDOG_INT_W1C[WDOG_STRUCT_CRD]. */
        uint64_t wdog_core             : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets APA(0..11)_WDOG_INT_W1C[WDOG_CORE]. */
#else /* Word 0 - Little Endian */
        uint64_t wdog_core             : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets APA(0..11)_WDOG_INT_W1C[WDOG_CORE]. */
        uint64_t wdog_struct_crd       : 1;  /**< [  1:  1](SR/W1S/H) Reads or sets APA(0..11)_WDOG_INT_W1C[WDOG_STRUCT_CRD]. */
        uint64_t wdog_struct_dat       : 1;  /**< [  2:  2](SR/W1S/H) Reads or sets APA(0..11)_WDOG_INT_W1C[WDOG_STRUCT_DAT]. */
        uint64_t wdog_struct_rqb       : 1;  /**< [  3:  3](SR/W1S/H) Reads or sets APA(0..11)_WDOG_INT_W1C[WDOG_STRUCT_RQB]. */
        uint64_t wdog_struct_txnid     : 1;  /**< [  4:  4](SR/W1S/H) Reads or sets APA(0..11)_WDOG_INT_W1C[WDOG_STRUCT_TXNID]. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } cnf10kb;
};
typedef union cavm_apax_wdog_int_w1s cavm_apax_wdog_int_w1s_t;

static inline uint64_t CAVM_APAX_WDOG_INT_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_WDOG_INT_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e340001e28ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e340001e28ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e340001e28ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e340001e28ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("APAX_WDOG_INT_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_WDOG_INT_W1S(a) cavm_apax_wdog_int_w1s_t
#define bustype_CAVM_APAX_WDOG_INT_W1S(a) CSR_TYPE_RSL
#define basename_CAVM_APAX_WDOG_INT_W1S(a) "APAX_WDOG_INT_W1S"
#define device_bar_CAVM_APAX_WDOG_INT_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_WDOG_INT_W1S(a) (a)
#define arguments_CAVM_APAX_WDOG_INT_W1S(a) (a),-1,-1,-1

/**
 * Register (RSL) apa#_wdog_struct
 *
 * APA Watchdog Structure Register
 * This register configures the timeouts for APA internal structures to clear.
 */
union cavm_apax_wdog_struct
{
    uint64_t u;
    struct cavm_apax_wdog_struct_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t enable                : 1;  /**< [ 31: 31](SR/W) Watchdog timeout enable. */
        uint64_t timeout               : 31; /**< [ 30:  0](SR/W) Timeout in units of 10ns. */
#else /* Word 0 - Little Endian */
        uint64_t timeout               : 31; /**< [ 30:  0](SR/W) Timeout in units of 10ns. */
        uint64_t enable                : 1;  /**< [ 31: 31](SR/W) Watchdog timeout enable. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_wdog_struct_s cn; */
};
typedef union cavm_apax_wdog_struct cavm_apax_wdog_struct_t;

static inline uint64_t CAVM_APAX_WDOG_STRUCT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_WDOG_STRUCT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e340001308ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e340001308ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e340001308ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e340001308ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("APAX_WDOG_STRUCT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_WDOG_STRUCT(a) cavm_apax_wdog_struct_t
#define bustype_CAVM_APAX_WDOG_STRUCT(a) CSR_TYPE_RSL
#define basename_CAVM_APAX_WDOG_STRUCT(a) "APAX_WDOG_STRUCT"
#define device_bar_CAVM_APAX_WDOG_STRUCT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_WDOG_STRUCT(a) (a)
#define arguments_CAVM_APAX_WDOG_STRUCT(a) (a),-1,-1,-1

/**
 * Register (RSL) apa#_wdog_struct_crd_diag
 *
 * APA Watchdog Structure Credit Diagnostic Register
 * This register reports and captures watchdog timeouts for CRD, which indicates that
 * an unexpected CHI protocol credit was received.
 */
union cavm_apax_wdog_struct_crd_diag
{
    uint64_t u;
    struct cavm_apax_wdog_struct_crd_diag_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t multi                 : 1;  /**< [ 31: 31](SR/W1C/H) Another stale entry was detected but not recorded because [STALE] was already set. */
        uint64_t stale                 : 1;  /**< [ 30: 30](SR/W1C/H) Stale entry was detected and recorded. */
        uint64_t reserved_15_29        : 15;
        uint64_t tgtid                 : 11; /**< [ 14:  4](SRO/H) Stale entry target ID. */
        uint64_t pcrdtype              : 4;  /**< [  3:  0](SRO/H) Stale entry PCRDTYPE. */
#else /* Word 0 - Little Endian */
        uint64_t pcrdtype              : 4;  /**< [  3:  0](SRO/H) Stale entry PCRDTYPE. */
        uint64_t tgtid                 : 11; /**< [ 14:  4](SRO/H) Stale entry target ID. */
        uint64_t reserved_15_29        : 15;
        uint64_t stale                 : 1;  /**< [ 30: 30](SR/W1C/H) Stale entry was detected and recorded. */
        uint64_t multi                 : 1;  /**< [ 31: 31](SR/W1C/H) Another stale entry was detected but not recorded because [STALE] was already set. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_wdog_struct_crd_diag_s cn; */
};
typedef union cavm_apax_wdog_struct_crd_diag cavm_apax_wdog_struct_crd_diag_t;

static inline uint64_t CAVM_APAX_WDOG_STRUCT_CRD_DIAG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_WDOG_STRUCT_CRD_DIAG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e340001318ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e340001318ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e340001318ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e340001318ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("APAX_WDOG_STRUCT_CRD_DIAG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_WDOG_STRUCT_CRD_DIAG(a) cavm_apax_wdog_struct_crd_diag_t
#define bustype_CAVM_APAX_WDOG_STRUCT_CRD_DIAG(a) CSR_TYPE_RSL
#define basename_CAVM_APAX_WDOG_STRUCT_CRD_DIAG(a) "APAX_WDOG_STRUCT_CRD_DIAG"
#define device_bar_CAVM_APAX_WDOG_STRUCT_CRD_DIAG(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_WDOG_STRUCT_CRD_DIAG(a) (a)
#define arguments_CAVM_APAX_WDOG_STRUCT_CRD_DIAG(a) (a),-1,-1,-1

/**
 * Register (RSL) apa#_wdog_struct_dat_diag
 *
 * APA WDOG STRUCT DAT DIAG Register
 * This register reports and captures watchdog timeouts for DAT, which indicates that
 * write data for a store did not get sent.
 */
union cavm_apax_wdog_struct_dat_diag
{
    uint64_t u;
    struct cavm_apax_wdog_struct_dat_diag_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t multi                 : 1;  /**< [ 63: 63](SR/W1C/H) Another stale entry was detected but not recorded because [STALE] was already set. */
        uint64_t stale                 : 1;  /**< [ 62: 62](SR/W1C/H) Stale entry was detected and recorded. */
        uint64_t reserved_37_61        : 25;
        uint64_t has_lsw_idx           : 1;  /**< [ 36: 36](SRO/H) Stale entry HAS_LSW_IDX. */
        uint64_t datst3                : 3;  /**< [ 35: 33](SRO/H) Stale entry DATST3. */
        uint64_t datst2                : 3;  /**< [ 32: 30](SRO/H) Stale entry DATST2. */
        uint64_t datst1                : 3;  /**< [ 29: 27](SRO/H) Stale entry DATST1. */
        uint64_t datst0                : 3;  /**< [ 26: 24](SRO/H) Stale entry DATST0. */
        uint64_t has_dbid              : 1;  /**< [ 23: 23](SRO/H) Stale entry has a DBID. */
        uint64_t tgtid                 : 11; /**< [ 22: 12](SRO/H) Stale entry target ID. */
        uint64_t dbid                  : 12; /**< [ 11:  0](SRO/H) Stale entry DBID. */
#else /* Word 0 - Little Endian */
        uint64_t dbid                  : 12; /**< [ 11:  0](SRO/H) Stale entry DBID. */
        uint64_t tgtid                 : 11; /**< [ 22: 12](SRO/H) Stale entry target ID. */
        uint64_t has_dbid              : 1;  /**< [ 23: 23](SRO/H) Stale entry has a DBID. */
        uint64_t datst0                : 3;  /**< [ 26: 24](SRO/H) Stale entry DATST0. */
        uint64_t datst1                : 3;  /**< [ 29: 27](SRO/H) Stale entry DATST1. */
        uint64_t datst2                : 3;  /**< [ 32: 30](SRO/H) Stale entry DATST2. */
        uint64_t datst3                : 3;  /**< [ 35: 33](SRO/H) Stale entry DATST3. */
        uint64_t has_lsw_idx           : 1;  /**< [ 36: 36](SRO/H) Stale entry HAS_LSW_IDX. */
        uint64_t reserved_37_61        : 25;
        uint64_t stale                 : 1;  /**< [ 62: 62](SR/W1C/H) Stale entry was detected and recorded. */
        uint64_t multi                 : 1;  /**< [ 63: 63](SR/W1C/H) Another stale entry was detected but not recorded because [STALE] was already set. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_wdog_struct_dat_diag_s cn; */
};
typedef union cavm_apax_wdog_struct_dat_diag cavm_apax_wdog_struct_dat_diag_t;

static inline uint64_t CAVM_APAX_WDOG_STRUCT_DAT_DIAG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_WDOG_STRUCT_DAT_DIAG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e340001330ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e340001330ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e340001330ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e340001330ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("APAX_WDOG_STRUCT_DAT_DIAG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_WDOG_STRUCT_DAT_DIAG(a) cavm_apax_wdog_struct_dat_diag_t
#define bustype_CAVM_APAX_WDOG_STRUCT_DAT_DIAG(a) CSR_TYPE_RSL
#define basename_CAVM_APAX_WDOG_STRUCT_DAT_DIAG(a) "APAX_WDOG_STRUCT_DAT_DIAG"
#define device_bar_CAVM_APAX_WDOG_STRUCT_DAT_DIAG(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_WDOG_STRUCT_DAT_DIAG(a) (a)
#define arguments_CAVM_APAX_WDOG_STRUCT_DAT_DIAG(a) (a),-1,-1,-1

/**
 * Register (RSL) apa#_wdog_struct_rqb_diag
 *
 * APA WDOG STRUCT RQB DIAG Register
 * This register reports and captures watchdog timeouts for RQB, which indicates that a
 * request has not been acknowledged.
 */
union cavm_apax_wdog_struct_rqb_diag
{
    uint64_t u;
    struct cavm_apax_wdog_struct_rqb_diag_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t multi                 : 1;  /**< [ 63: 63](SR/W1C/H) Another stale entry was detected but not recorded because [STALE] was already set. */
        uint64_t stale                 : 1;  /**< [ 62: 62](SR/W1C/H) Stale entry was detected and recorded. */
        uint64_t reserved_43_61        : 19;
        uint64_t state                 : 3;  /**< [ 42: 40](SRO/H) Stale entry state. */
        uint64_t reserved_39           : 1;
        uint64_t tgtid                 : 11; /**< [ 38: 28](SRO/H) Stale entry target ID. */
        uint64_t pcrdtype              : 4;  /**< [ 27: 24](SRO/H) Stale entry PCRDTYPE. */
        uint64_t txnid_new             : 12; /**< [ 23: 12](SRO/H) Stale entry new transaction ID. */
        uint64_t reserved_0_11         : 12;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_11         : 12;
        uint64_t txnid_new             : 12; /**< [ 23: 12](SRO/H) Stale entry new transaction ID. */
        uint64_t pcrdtype              : 4;  /**< [ 27: 24](SRO/H) Stale entry PCRDTYPE. */
        uint64_t tgtid                 : 11; /**< [ 38: 28](SRO/H) Stale entry target ID. */
        uint64_t reserved_39           : 1;
        uint64_t state                 : 3;  /**< [ 42: 40](SRO/H) Stale entry state. */
        uint64_t reserved_43_61        : 19;
        uint64_t stale                 : 1;  /**< [ 62: 62](SR/W1C/H) Stale entry was detected and recorded. */
        uint64_t multi                 : 1;  /**< [ 63: 63](SR/W1C/H) Another stale entry was detected but not recorded because [STALE] was already set. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_wdog_struct_rqb_diag_s cn; */
};
typedef union cavm_apax_wdog_struct_rqb_diag cavm_apax_wdog_struct_rqb_diag_t;

static inline uint64_t CAVM_APAX_WDOG_STRUCT_RQB_DIAG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_WDOG_STRUCT_RQB_DIAG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e340001328ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e340001328ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e340001328ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e340001328ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("APAX_WDOG_STRUCT_RQB_DIAG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_WDOG_STRUCT_RQB_DIAG(a) cavm_apax_wdog_struct_rqb_diag_t
#define bustype_CAVM_APAX_WDOG_STRUCT_RQB_DIAG(a) CSR_TYPE_RSL
#define basename_CAVM_APAX_WDOG_STRUCT_RQB_DIAG(a) "APAX_WDOG_STRUCT_RQB_DIAG"
#define device_bar_CAVM_APAX_WDOG_STRUCT_RQB_DIAG(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_WDOG_STRUCT_RQB_DIAG(a) (a)
#define arguments_CAVM_APAX_WDOG_STRUCT_RQB_DIAG(a) (a),-1,-1,-1

/**
 * Register (RSL) apa#_wdog_struct_txnid_diag
 *
 * APA WDOG STRUCT TXNID DIAG Register
 * This register reports and captures watchdog timeouts for TXNID, which indicates that
 * a completion was not received.
 */
union cavm_apax_wdog_struct_txnid_diag
{
    uint64_t u;
    struct cavm_apax_wdog_struct_txnid_diag_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t multi                 : 1;  /**< [ 31: 31](SR/W1C/H) Another stale entry was detected but not recorded because [STALE] was already set. */
        uint64_t stale                 : 1;  /**< [ 30: 30](SR/W1C/H) Stale entry was detected and recorded. */
        uint64_t reserved_19_29        : 11;
        uint64_t txnid_new             : 7;  /**< [ 18: 12](SRO/H) Stale entry new transaction ID (low 7 bits). */
        uint64_t txnid_orig            : 12; /**< [ 11:  0](SRO/H) Stale entry original transaction ID. */
#else /* Word 0 - Little Endian */
        uint64_t txnid_orig            : 12; /**< [ 11:  0](SRO/H) Stale entry original transaction ID. */
        uint64_t txnid_new             : 7;  /**< [ 18: 12](SRO/H) Stale entry new transaction ID (low 7 bits). */
        uint64_t reserved_19_29        : 11;
        uint64_t stale                 : 1;  /**< [ 30: 30](SR/W1C/H) Stale entry was detected and recorded. */
        uint64_t multi                 : 1;  /**< [ 31: 31](SR/W1C/H) Another stale entry was detected but not recorded because [STALE] was already set. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_wdog_struct_txnid_diag_s cn; */
};
typedef union cavm_apax_wdog_struct_txnid_diag cavm_apax_wdog_struct_txnid_diag_t;

static inline uint64_t CAVM_APAX_WDOG_STRUCT_TXNID_DIAG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_WDOG_STRUCT_TXNID_DIAG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e340001320ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e340001320ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e340001320ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e340001320ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("APAX_WDOG_STRUCT_TXNID_DIAG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_WDOG_STRUCT_TXNID_DIAG(a) cavm_apax_wdog_struct_txnid_diag_t
#define bustype_CAVM_APAX_WDOG_STRUCT_TXNID_DIAG(a) CSR_TYPE_RSL
#define basename_CAVM_APAX_WDOG_STRUCT_TXNID_DIAG(a) "APAX_WDOG_STRUCT_TXNID_DIAG"
#define device_bar_CAVM_APAX_WDOG_STRUCT_TXNID_DIAG(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_WDOG_STRUCT_TXNID_DIAG(a) (a)
#define arguments_CAVM_APAX_WDOG_STRUCT_TXNID_DIAG(a) (a),-1,-1,-1

#endif /* __CAVM_CSRS_APA_H__ */
