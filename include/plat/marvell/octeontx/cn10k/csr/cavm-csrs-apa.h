#ifndef __CAVM_CSRS_APA_H__
#define __CAVM_CSRS_APA_H__
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
#define CAVM_APA_BAR_E_APAX_PF_BAR0(a) (0x87e280000000ll + 0x1000000ll * (a))
#define CAVM_APA_BAR_E_APAX_PF_BAR0_SIZE 0x100000ull
#define CAVM_APA_BAR_E_APAX_PF_BAR4(a) (0x87e280100000ll + 0x1000000ll * (a))
#define CAVM_APA_BAR_E_APAX_PF_BAR4_SIZE 0x100000ull

/**
 * Enumeration apa_clusterp_state_e
 *
 * APA DSU Power State Enumeration
 * Enumerates the DSU power states
 * Internal:
 * Encoding is subject to change pending ARM IP release.
 */
#define CAVM_APA_CLUSTERP_STATE_E_OFF (0)
#define CAVM_APA_CLUSTERP_STATE_E_SFONLY_DEBUG_RECOV (0xa)
#define CAVM_APA_CLUSTERP_STATE_E_SFONLY_ON (8)

/**
 * Enumeration apa_corep_state_e
 *
 * APA DSU Power State Enumeration
 * Enumerates the Core power states
 * Internal:
 * Encoding is subject to change pending ARM IP release.
 */
#define CAVM_APA_COREP_STATE_E_DEBUG_RECOV (0xa)
#define CAVM_APA_COREP_STATE_E_FULL_RET (5)
#define CAVM_APA_COREP_STATE_E_OFF (0)
#define CAVM_APA_COREP_STATE_E_OFF_EMU (1)
#define CAVM_APA_COREP_STATE_E_ON (8)

/**
 * Enumeration apa_int_vec_e
 *
 * APA MSI-X Vector Enumeration
 * Enumerates the MSI-X interrupt vectors.
 */
#define CAVM_APA_INT_VEC_E_APA_APAT_INT (1)
#define CAVM_APA_INT_VEC_E_APA_WDOG_INT (0)

/**
 * Enumeration apa_pll_sel_e
 *
 * APA PLL Selection Enumeration
 * Enumerates the values of APA_PLL()[NEXT_PLL_SEL] and APA_PLL()[CUR_PLL_SEL].
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
        uint64_t apat                  : 1;  /**< [  0:  0](SR/W1C/H) Reads or clears enable for APA(0..63)_APAT_INT_W1C[APAT]. */
#else /* Word 0 - Little Endian */
        uint64_t apat                  : 1;  /**< [  0:  0](SR/W1C/H) Reads or clears enable for APA(0..63)_APAT_INT_W1C[APAT]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_apat_int_ena_w1c_s cn; */
};
typedef union cavm_apax_apat_int_ena_w1c cavm_apax_apat_int_ena_w1c_t;

static inline uint64_t CAVM_APAX_APAT_INT_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_APAT_INT_ENA_W1C(uint64_t a)
{
    if (a<=63)
        return 0x87e280001f10ll + 0x1000000ll * ((a) & 0x3f);
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
        uint64_t apat                  : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets enable for APA(0..63)_APAT_INT_W1C[APAT]. */
#else /* Word 0 - Little Endian */
        uint64_t apat                  : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets enable for APA(0..63)_APAT_INT_W1C[APAT]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_apat_int_ena_w1s_s cn; */
};
typedef union cavm_apax_apat_int_ena_w1s cavm_apax_apat_int_ena_w1s_t;

static inline uint64_t CAVM_APAX_APAT_INT_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_APAT_INT_ENA_W1S(uint64_t a)
{
    if (a<=63)
        return 0x87e280001f18ll + 0x1000000ll * ((a) & 0x3f);
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
    if (a<=63)
        return 0x87e280001f00ll + 0x1000000ll * ((a) & 0x3f);
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
        uint64_t apat                  : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets APA(0..63)_APAT_INT_W1C[APAT]. */
#else /* Word 0 - Little Endian */
        uint64_t apat                  : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets APA(0..63)_APAT_INT_W1C[APAT]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_apat_int_w1s_s cn; */
};
typedef union cavm_apax_apat_int_w1s cavm_apax_apat_int_w1s_t;

static inline uint64_t CAVM_APAX_APAT_INT_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_APAT_INT_W1S(uint64_t a)
{
    if (a<=63)
        return 0x87e280001f08ll + 0x1000000ll * ((a) & 0x3f);
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
        uint64_t dat                   : 64; /**< [ 63:  0](SR/W) Response data for the trapped request response.  For a read, this register must
                                                                 be written before APA()_APAT_RSP. */
#else /* Word 0 - Little Endian */
        uint64_t dat                   : 64; /**< [ 63:  0](SR/W) Response data for the trapped request response.  For a read, this register must
                                                                 be written before APA()_APAT_RSP. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_apat_rdatx_s cn; */
};
typedef union cavm_apax_apat_rdatx cavm_apax_apat_rdatx_t;

static inline uint64_t CAVM_APAX_APAT_RDATX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_APAT_RDATX(uint64_t a, uint64_t b)
{
    if ((a<=63) && (b<=3))
        return 0x87e280001240ll + 0x1000000ll * ((a) & 0x3f) + 8ll * ((b) & 0x3);
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
        uint64_t reserved_61_62        : 2;
        uint64_t index                 : 5;  /**< [ 60: 56](SRO/H) Index of the vector number that matched. */
        uint64_t reserved_23_55        : 33;
        uint64_t opcode                : 7;  /**< [ 22: 16](SRO/H) CHI opcode. */
        uint64_t tracetag              : 1;  /**< [ 15: 15](SRO/H) CHI trace tag. */
        uint64_t size                  : 3;  /**< [ 14: 12](SRO/H) CHI size. */
        uint64_t txnid                 : 12; /**< [ 11:  0](SRO/H) CHI transaction id. */
#else /* Word 0 - Little Endian */
        uint64_t txnid                 : 12; /**< [ 11:  0](SRO/H) CHI transaction id. */
        uint64_t size                  : 3;  /**< [ 14: 12](SRO/H) CHI size. */
        uint64_t tracetag              : 1;  /**< [ 15: 15](SRO/H) CHI trace tag. */
        uint64_t opcode                : 7;  /**< [ 22: 16](SRO/H) CHI opcode. */
        uint64_t reserved_23_55        : 33;
        uint64_t index                 : 5;  /**< [ 60: 56](SRO/H) Index of the vector number that matched. */
        uint64_t reserved_61_62        : 2;
        uint64_t valid                 : 1;  /**< [ 63: 63](SRO/H) Set when a request has been trapped.  Cleared by writing APA()_APT_RSP. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_apat_req_s cn; */
};
typedef union cavm_apax_apat_req cavm_apax_apat_req_t;

static inline uint64_t CAVM_APAX_APAT_REQ(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_APAT_REQ(uint64_t a)
{
    if (a<=63)
        return 0x87e280001200ll + 0x1000000ll * ((a) & 0x3f);
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
    if (a<=63)
        return 0x87e280001208ll + 0x1000000ll * ((a) & 0x3f);
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
                                                                 trigger a response to the core and also clear APA()_APAT_REQ.VALID. */
#else /* Word 0 - Little Endian */
        uint64_t resperr               : 2;  /**< [  1:  0](SR/W) Response error for the trapped request response.  Writing this field will
                                                                 trigger a response to the core and also clear APA()_APAT_REQ.VALID. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_apat_rsp_s cn; */
};
typedef union cavm_apax_apat_rsp cavm_apax_apat_rsp_t;

static inline uint64_t CAVM_APAX_APAT_RSP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_APAT_RSP(uint64_t a)
{
    if (a<=63)
        return 0x87e280001210ll + 0x1000000ll * ((a) & 0x3f);
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
    if ((a<=63) && (b<=31))
        return 0x87e280001000ll + 0x1000000ll * ((a) & 0x3f) + 0x10ll * ((b) & 0x1f);
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
    if ((a<=63) && (b<=31))
        return 0x87e280001008ll + 0x1000000ll * ((a) & 0x3f) + 0x10ll * ((b) & 0x1f);
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
        uint64_t dat                   : 64; /**< [ 63:  0](SRO/H) Store data of the trapped request. */
#else /* Word 0 - Little Endian */
        uint64_t dat                   : 64; /**< [ 63:  0](SRO/H) Store data of the trapped request. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_apat_wdatx_s cn; */
};
typedef union cavm_apax_apat_wdatx cavm_apax_apat_wdatx_t;

static inline uint64_t CAVM_APAX_APAT_WDATX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_APAT_WDATX(uint64_t a, uint64_t b)
{
    if ((a<=63) && (b<=3))
        return 0x87e280001220ll + 0x1000000ll * ((a) & 0x3f) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("APAX_APAT_WDATX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_APAT_WDATX(a,b) cavm_apax_apat_wdatx_t
#define bustype_CAVM_APAX_APAT_WDATX(a,b) CSR_TYPE_RSL
#define basename_CAVM_APAX_APAT_WDATX(a,b) "APAX_APAT_WDATX"
#define device_bar_CAVM_APAX_APAT_WDATX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_APAT_WDATX(a,b) (a)
#define arguments_CAVM_APAX_APAT_WDATX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) apa#_bp_test0
 *
 * INTERNAL: APA Backpressure Test Register 0
 */
union cavm_apax_bp_test0
{
    uint64_t u;
    struct cavm_apax_bp_test0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t enable                : 16; /**< [ 63: 48](SR/W) Enable test mode. For diagnostic use only.
                                                                 Internal:
                                                                 Once a bit is set, random backpressure is generated
                                                                 at the corresponding point to allow for more frequent backpressure.
                                                                 \<63\> C15 = Prevent XRX DAT from popping.
                                                                 \<62\> C14 = Prevent XRX RSP from popping.
                                                                 \<61\> C13 = Prevent XRX SNP from popping.
                                                                 \<60\> C12 = Prevent CRX DAT from popping.
                                                                 \<59\> C11 = Prevent CRX RSP from popping.
                                                                 \<58\> C10 = Prevent CRX REQ from popping.
                                                                 \<57\> C9  = Prevent CRD FIFO from popping.
                                                                 \<56\> C8  = Prevent TXN FIFO from advancing head.
                                                                 \<55\> C7  = Prevent RQB FIFO from advancing head.
                                                                 \<54\> C6  = Prevent DAT FIFO from advancing head.
                                                                 \<53\> C5  = Pretend CTX DAT has no credits.
                                                                 \<52\> C4  = Pretend CTX RSP has no credits.
                                                                 \<51\> C3  = Pretend CTX SNP has no credits.
                                                                 \<50\> C2  = Pretend XTX DAT has no credits.
                                                                 \<49\> C1  = Pretend XTX RSP has no credits.
                                                                 \<48\> C0  = Pretend XTX REQ has no credits. */
        uint64_t bp_cfg                : 32; /**< [ 47: 16](SR/W) Backpressure weight. For diagnostic use only.
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
        uint64_t lfsr_freq             : 12; /**< [ 11:  0](SR/W) Test LFSR update period - clock cycles minus one. */
#else /* Word 0 - Little Endian */
        uint64_t lfsr_freq             : 12; /**< [ 11:  0](SR/W) Test LFSR update period - clock cycles minus one. */
        uint64_t reserved_12_15        : 4;
        uint64_t bp_cfg                : 32; /**< [ 47: 16](SR/W) Backpressure weight. For diagnostic use only.
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
        uint64_t enable                : 16; /**< [ 63: 48](SR/W) Enable test mode. For diagnostic use only.
                                                                 Internal:
                                                                 Once a bit is set, random backpressure is generated
                                                                 at the corresponding point to allow for more frequent backpressure.
                                                                 \<63\> C15 = Prevent XRX DAT from popping.
                                                                 \<62\> C14 = Prevent XRX RSP from popping.
                                                                 \<61\> C13 = Prevent XRX SNP from popping.
                                                                 \<60\> C12 = Prevent CRX DAT from popping.
                                                                 \<59\> C11 = Prevent CRX RSP from popping.
                                                                 \<58\> C10 = Prevent CRX REQ from popping.
                                                                 \<57\> C9  = Prevent CRD FIFO from popping.
                                                                 \<56\> C8  = Prevent TXN FIFO from advancing head.
                                                                 \<55\> C7  = Prevent RQB FIFO from advancing head.
                                                                 \<54\> C6  = Prevent DAT FIFO from advancing head.
                                                                 \<53\> C5  = Pretend CTX DAT has no credits.
                                                                 \<52\> C4  = Pretend CTX RSP has no credits.
                                                                 \<51\> C3  = Pretend CTX SNP has no credits.
                                                                 \<50\> C2  = Pretend XTX DAT has no credits.
                                                                 \<49\> C1  = Pretend XTX RSP has no credits.
                                                                 \<48\> C0  = Pretend XTX REQ has no credits. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_bp_test0_s cn; */
};
typedef union cavm_apax_bp_test0 cavm_apax_bp_test0_t;

static inline uint64_t CAVM_APAX_BP_TEST0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_BP_TEST0(uint64_t a)
{
    if (a<=63)
        return 0x87e280001510ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("APAX_BP_TEST0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_BP_TEST0(a) cavm_apax_bp_test0_t
#define bustype_CAVM_APAX_BP_TEST0(a) CSR_TYPE_RSL
#define basename_CAVM_APAX_BP_TEST0(a) "APAX_BP_TEST0"
#define device_bar_CAVM_APAX_BP_TEST0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_BP_TEST0(a) (a)
#define arguments_CAVM_APAX_BP_TEST0(a) (a),-1,-1,-1

/**
 * Register (RSL) apa#_clusterpch
 *
 * APA Cluster P-Channel Interface Register
 * This register is read-only when
 * [STATUS]=1. Any write to any part of this register when [STATUS]=0, even if the
 * contents are unchanged, will set [STATUS] and trigger a request to transition to the
 * power state indicated by [STATE]. Upon protocol completion, [STATUS] is reset to 0
 * and [ACCEPT] is updated.
 */
union cavm_apax_clusterpch
{
    uint64_t u;
    struct cavm_apax_clusterpch_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t status                : 1;  /**< [ 31: 31](SRO/H) If set, indicates there is a transition request outstanding. */
        uint64_t accept                : 1;  /**< [ 30: 30](SRO/H) Transition request accepted.
                                                                 0 = the last transition request was rejected.
                                                                 1 = the last transition request was accepted. */
        uint64_t reserved_28_29        : 2;
        uint64_t active                : 20; /**< [ 27:  8](SRO/H) Indicates the current cluster power requirements to the power controller. */
        uint64_t reserved_7            : 1;
        uint64_t state                 : 7;  /**< [  6:  0](SR/W) The power state to which a transition is requested. Refer to APA_CLUSTERP_STATE_E. */
#else /* Word 0 - Little Endian */
        uint64_t state                 : 7;  /**< [  6:  0](SR/W) The power state to which a transition is requested. Refer to APA_CLUSTERP_STATE_E. */
        uint64_t reserved_7            : 1;
        uint64_t active                : 20; /**< [ 27:  8](SRO/H) Indicates the current cluster power requirements to the power controller. */
        uint64_t reserved_28_29        : 2;
        uint64_t accept                : 1;  /**< [ 30: 30](SRO/H) Transition request accepted.
                                                                 0 = the last transition request was rejected.
                                                                 1 = the last transition request was accepted. */
        uint64_t status                : 1;  /**< [ 31: 31](SRO/H) If set, indicates there is a transition request outstanding. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_clusterpch_s cn; */
};
typedef union cavm_apax_clusterpch cavm_apax_clusterpch_t;

static inline uint64_t CAVM_APAX_CLUSTERPCH(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_CLUSTERPCH(uint64_t a)
{
    if (a<=63)
        return 0x87e280001420ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("APAX_CLUSTERPCH", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_CLUSTERPCH(a) cavm_apax_clusterpch_t
#define bustype_CAVM_APAX_CLUSTERPCH(a) CSR_TYPE_RSL
#define basename_CAVM_APAX_CLUSTERPCH(a) "APAX_CLUSTERPCH"
#define device_bar_CAVM_APAX_CLUSTERPCH(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_CLUSTERPCH(a) (a)
#define arguments_CAVM_APAX_CLUSTERPCH(a) (a),-1,-1,-1

/**
 * Register (RSL) apa#_core_pm
 *
 * APA Core Power Management Control Register
 */
union cavm_apax_core_pm
{
    uint64_t u;
    struct cavm_apax_core_pm_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_25_63        : 39;
        uint64_t mpmmen                : 1;  /**< [ 24: 24](SR/W) Maximum Power Mitigation Mechanism (MPMM) enable signal. The options are:
                                                                 0 = MPMM disabled.
                                                                 1 = MPMM enabled.
                                                                 See the associated core Technical Reference Manual for details of the MPMM
                                                                 behavior if supported on your core. */
        uint64_t reserved_18_23        : 6;
        uint64_t mpmmstate             : 2;  /**< [ 17: 16](SR/W) MPMM state signal. If MPMM is enabled, selects which MPMM configuration to
                                                                 apply. If MPMM is supported on your core, see the associated core Technical
                                                                 Reference Manual for details of the MPMM configuration selection. */
        uint64_t reserved_4_15         : 12;
        uint64_t ppmctl                : 4;  /**< [  3:  0](SR/W) Power policy control signal. */
#else /* Word 0 - Little Endian */
        uint64_t ppmctl                : 4;  /**< [  3:  0](SR/W) Power policy control signal. */
        uint64_t reserved_4_15         : 12;
        uint64_t mpmmstate             : 2;  /**< [ 17: 16](SR/W) MPMM state signal. If MPMM is enabled, selects which MPMM configuration to
                                                                 apply. If MPMM is supported on your core, see the associated core Technical
                                                                 Reference Manual for details of the MPMM configuration selection. */
        uint64_t reserved_18_23        : 6;
        uint64_t mpmmen                : 1;  /**< [ 24: 24](SR/W) Maximum Power Mitigation Mechanism (MPMM) enable signal. The options are:
                                                                 0 = MPMM disabled.
                                                                 1 = MPMM enabled.
                                                                 See the associated core Technical Reference Manual for details of the MPMM
                                                                 behavior if supported on your core. */
        uint64_t reserved_25_63        : 39;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_core_pm_s cn; */
};
typedef union cavm_apax_core_pm cavm_apax_core_pm_t;

static inline uint64_t CAVM_APAX_CORE_PM(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_CORE_PM(uint64_t a)
{
    if (a<=63)
        return 0x87e280001410ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("APAX_CORE_PM", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_CORE_PM(a) cavm_apax_core_pm_t
#define bustype_CAVM_APAX_CORE_PM(a) CSR_TYPE_RSL
#define basename_CAVM_APAX_CORE_PM(a) "APAX_CORE_PM"
#define device_bar_CAVM_APAX_CORE_PM(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_CORE_PM(a) (a)
#define arguments_CAVM_APAX_CORE_PM(a) (a),-1,-1,-1

/**
 * Register (RSL) apa#_core_reset
 *
 * APA Core Reset Register
 * APA core reset register.
 */
union cavm_apax_core_reset
{
    uint64_t u;
    struct cavm_apax_core_reset_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t resetn                : 1;  /**< [  0:  0](SR/W) Active-low reset for this core. */
#else /* Word 0 - Little Endian */
        uint64_t resetn                : 1;  /**< [  0:  0](SR/W) Active-low reset for this core. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_core_reset_s cn; */
};
typedef union cavm_apax_core_reset cavm_apax_core_reset_t;

static inline uint64_t CAVM_APAX_CORE_RESET(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_CORE_RESET(uint64_t a)
{
    if (a<=63)
        return 0x87e280001408ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("APAX_CORE_RESET", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_CORE_RESET(a) cavm_apax_core_reset_t
#define bustype_CAVM_APAX_CORE_RESET(a) CSR_TYPE_RSL
#define basename_CAVM_APAX_CORE_RESET(a) "APAX_CORE_RESET"
#define device_bar_CAVM_APAX_CORE_RESET(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_CORE_RESET(a) (a)
#define arguments_CAVM_APAX_CORE_RESET(a) (a),-1,-1,-1

/**
 * Register (RSL) apa#_corepch
 *
 * APA Core P-Channel Interface Register
 * This register is read-only when [STATUS]=1. Any write to any part of this register
 * when [STATUS]=0, even if the contents are unchanged, will set [STATUS] and trigger a
 * request to transition to the power state indicated by [STATE]. Upon protocol
 * completion, [STATUS] is reset to 0 and [ACCEPT] is updated.
 */
union cavm_apax_corepch
{
    uint64_t u;
    struct cavm_apax_corepch_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t status                : 1;  /**< [ 31: 31](SRO/H) If set, indicates there is a transition request outstanding. */
        uint64_t accept                : 1;  /**< [ 30: 30](SRO/H) Transition request accepted.
                                                                 0 = the last transition request was rejected.
                                                                 1 = the last transition request was accepted. */
        uint64_t reserved_26_29        : 4;
        uint64_t active                : 18; /**< [ 25:  8](SRO/H) Indicates the current core power requirements to the power controller. */
        uint64_t reserved_6_7          : 2;
        uint64_t state                 : 6;  /**< [  5:  0](SR/W) The power state to which a transition is requested.  Refer to APA_COREP_STATE_E. */
#else /* Word 0 - Little Endian */
        uint64_t state                 : 6;  /**< [  5:  0](SR/W) The power state to which a transition is requested.  Refer to APA_COREP_STATE_E. */
        uint64_t reserved_6_7          : 2;
        uint64_t active                : 18; /**< [ 25:  8](SRO/H) Indicates the current core power requirements to the power controller. */
        uint64_t reserved_26_29        : 4;
        uint64_t accept                : 1;  /**< [ 30: 30](SRO/H) Transition request accepted.
                                                                 0 = the last transition request was rejected.
                                                                 1 = the last transition request was accepted. */
        uint64_t status                : 1;  /**< [ 31: 31](SRO/H) If set, indicates there is a transition request outstanding. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_corepch_s cn; */
};
typedef union cavm_apax_corepch cavm_apax_corepch_t;

static inline uint64_t CAVM_APAX_COREPCH(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_COREPCH(uint64_t a)
{
    if (a<=63)
        return 0x87e280001418ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("APAX_COREPCH", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_COREPCH(a) cavm_apax_corepch_t
#define bustype_CAVM_APAX_COREPCH(a) CSR_TYPE_RSL
#define basename_CAVM_APAX_COREPCH(a) "APAX_COREPCH"
#define device_bar_CAVM_APAX_COREPCH(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_COREPCH(a) (a)
#define arguments_CAVM_APAX_COREPCH(a) (a),-1,-1,-1

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
        uint64_t reserved_10_31        : 22;
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
        uint64_t reserved_10_31        : 22;
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
    if (a<=63)
        return 0x87e280001500ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("APAX_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_CTL(a) cavm_apax_ctl_t
#define bustype_CAVM_APAX_CTL(a) CSR_TYPE_RSL
#define basename_CAVM_APAX_CTL(a) "APAX_CTL"
#define device_bar_CAVM_APAX_CTL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_CTL(a) (a)
#define arguments_CAVM_APAX_CTL(a) (a),-1,-1,-1

/**
 * Register (RSL) apa#_diag
 *
 * INTERNAL: APA DIAG Register
 *
 * For diagnostic use only.
 */
union cavm_apax_diag
{
    uint64_t u;
    struct cavm_apax_diag_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_39_63        : 25;
        uint64_t tim_crx_rdy           : 1;  /**< [ 38: 38](SRO/H) There is a free slot in the TIM transaction buffer. */
        uint64_t sync                  : 1;  /**< [ 37: 37](SRO/H) a Sync is inflight. */
        uint64_t cfif_valid            : 1;  /**< [ 36: 36](SRO/H) There is something in the credit FIFO. */
        uint64_t dat_head              : 5;  /**< [ 35: 31](SRO/H) DAT head pointer. */
        uint64_t dat_tail              : 5;  /**< [ 30: 26](SRO/H) DAT tail pointer. */
        uint64_t to_retry_count        : 6;  /**< [ 25: 20](SRO/H) Pending retry count. */
        uint64_t rqb_head              : 6;  /**< [ 19: 14](SRO/H) RQB head pointer. */
        uint64_t tfif_head             : 7;  /**< [ 13:  7](SRO/H) TFIF head pointer. */
        uint64_t tfif_tail             : 7;  /**< [  6:  0](SRO/H) TFIF head pointer. */
#else /* Word 0 - Little Endian */
        uint64_t tfif_tail             : 7;  /**< [  6:  0](SRO/H) TFIF head pointer. */
        uint64_t tfif_head             : 7;  /**< [ 13:  7](SRO/H) TFIF head pointer. */
        uint64_t rqb_head              : 6;  /**< [ 19: 14](SRO/H) RQB head pointer. */
        uint64_t to_retry_count        : 6;  /**< [ 25: 20](SRO/H) Pending retry count. */
        uint64_t dat_tail              : 5;  /**< [ 30: 26](SRO/H) DAT tail pointer. */
        uint64_t dat_head              : 5;  /**< [ 35: 31](SRO/H) DAT head pointer. */
        uint64_t cfif_valid            : 1;  /**< [ 36: 36](SRO/H) There is something in the credit FIFO. */
        uint64_t sync                  : 1;  /**< [ 37: 37](SRO/H) a Sync is inflight. */
        uint64_t tim_crx_rdy           : 1;  /**< [ 38: 38](SRO/H) There is a free slot in the TIM transaction buffer. */
        uint64_t reserved_39_63        : 25;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_diag_s cn; */
};
typedef union cavm_apax_diag cavm_apax_diag_t;

static inline uint64_t CAVM_APAX_DIAG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_DIAG(uint64_t a)
{
    if (a<=63)
        return 0x87e280001680ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("APAX_DIAG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_DIAG(a) cavm_apax_diag_t
#define bustype_CAVM_APAX_DIAG(a) CSR_TYPE_RSL
#define basename_CAVM_APAX_DIAG(a) "APAX_DIAG"
#define device_bar_CAVM_APAX_DIAG(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_DIAG(a) (a)
#define arguments_CAVM_APAX_DIAG(a) (a),-1,-1,-1

/**
 * Register (RSL) apa#_diag_dat#_word#
 *
 * INTERNAL: APA Dignostic Data Register
 */
union cavm_apax_diag_datx_wordx
{
    uint64_t u;
    struct cavm_apax_diag_datx_wordx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t dat                   : 64; /**< [ 63:  0](SRO/H) Contents of the DAT buffer. For diagnostic use only. */
#else /* Word 0 - Little Endian */
        uint64_t dat                   : 64; /**< [ 63:  0](SRO/H) Contents of the DAT buffer. For diagnostic use only. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_diag_datx_wordx_s cn; */
};
typedef union cavm_apax_diag_datx_wordx cavm_apax_diag_datx_wordx_t;

static inline uint64_t CAVM_APAX_DIAG_DATX_WORDX(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_DIAG_DATX_WORDX(uint64_t a, uint64_t b, uint64_t c)
{
    if ((a<=63) && (b<=63) && (c<=5))
        return 0x87e280000000ll + 0x1000000ll * ((a) & 0x3f) + 8ll * ((b) & 0x3f) + 0x200ll * ((c) & 0x7);
    __cavm_csr_fatal("APAX_DIAG_DATX_WORDX", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_APAX_DIAG_DATX_WORDX(a,b,c) cavm_apax_diag_datx_wordx_t
#define bustype_CAVM_APAX_DIAG_DATX_WORDX(a,b,c) CSR_TYPE_RSL
#define basename_CAVM_APAX_DIAG_DATX_WORDX(a,b,c) "APAX_DIAG_DATX_WORDX"
#define device_bar_CAVM_APAX_DIAG_DATX_WORDX(a,b,c) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_DIAG_DATX_WORDX(a,b,c) (a)
#define arguments_CAVM_APAX_DIAG_DATX_WORDX(a,b,c) (a),(b),(c),-1

/**
 * Register (RSL) apa#_ecc_ctl
 *
 * APA ECC Generation/Checking Control Register
 * Controls ECC Generation/Checking
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
        uint64_t flip_datacheck_10     : 1;  /**< [  3:  3](SR/W) Flip datacheck bit 10 to force ECC error */
        uint64_t flip_datacheck_9      : 1;  /**< [  2:  2](SR/W) Flip datacheck bit 9 to force ECC error */
        uint64_t flip_datacheck_1      : 1;  /**< [  1:  1](SR/W) Flip datacheck bit 1 to force ECC error */
        uint64_t flip_datacheck_0      : 1;  /**< [  0:  0](SR/W) Flip datacheck bit 0 to force ECC error */
#else /* Word 0 - Little Endian */
        uint64_t flip_datacheck_0      : 1;  /**< [  0:  0](SR/W) Flip datacheck bit 0 to force ECC error */
        uint64_t flip_datacheck_1      : 1;  /**< [  1:  1](SR/W) Flip datacheck bit 1 to force ECC error */
        uint64_t flip_datacheck_9      : 1;  /**< [  2:  2](SR/W) Flip datacheck bit 9 to force ECC error */
        uint64_t flip_datacheck_10     : 1;  /**< [  3:  3](SR/W) Flip datacheck bit 10 to force ECC error */
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
    if (a<=63)
        return 0x87e280001508ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("APAX_ECC_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_ECC_CTL(a) cavm_apax_ecc_ctl_t
#define bustype_CAVM_APAX_ECC_CTL(a) CSR_TYPE_RSL
#define basename_CAVM_APAX_ECC_CTL(a) "APAX_ECC_CTL"
#define device_bar_CAVM_APAX_ECC_CTL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_ECC_CTL(a) (a)
#define arguments_CAVM_APAX_ECC_CTL(a) (a),-1,-1,-1

/**
 * Register (RSL) apa#_eco
 *
 * INTERNAL: APA ECO Register
 *
 * These registers exist to provide CSR flops in case they are needed for ECOs.
 */
union cavm_apax_eco
{
    uint64_t u;
    struct cavm_apax_eco_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t eco_rw                : 64; /**< [ 63:  0](SR/W) ECO flops. */
#else /* Word 0 - Little Endian */
        uint64_t eco_rw                : 64; /**< [ 63:  0](SR/W) ECO flops. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_eco_s cn; */
};
typedef union cavm_apax_eco cavm_apax_eco_t;

static inline uint64_t CAVM_APAX_ECO(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_ECO(uint64_t a)
{
    if (a<=63)
        return 0x87e280001518ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("APAX_ECO", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_ECO(a) cavm_apax_eco_t
#define bustype_CAVM_APAX_ECO(a) CSR_TYPE_RSL
#define basename_CAVM_APAX_ECO(a) "APAX_ECO"
#define device_bar_CAVM_APAX_ECO(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_ECO(a) (a)
#define arguments_CAVM_APAX_ECO(a) (a),-1,-1,-1

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
        uint64_t init_tail             : 5;  /**< [  4:  0](SRO/H) The dat buffer tail pointer for the first LMTLINE in a burst */
#else /* Word 0 - Little Endian */
        uint64_t init_tail             : 5;  /**< [  4:  0](SRO/H) The dat buffer tail pointer for the first LMTLINE in a burst */
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
    if ((a<=63) && (b<=1))
        return 0x87e280001608ll + 0x1000000ll * ((a) & 0x3f) + 0x40ll * ((b) & 0x1);
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
    if ((a<=63) && (b<=1))
        return 0x87e280001618ll + 0x1000000ll * ((a) & 0x3f) + 0x40ll * ((b) & 0x1);
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
    if ((a<=63) && (b<=1))
        return 0x87e280001610ll + 0x1000000ll * ((a) & 0x3f) + 0x40ll * ((b) & 0x1);
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
    if ((a<=63) && (b<=1))
        return 0x87e280001600ll + 0x1000000ll * ((a) & 0x3f) + 0x40ll * ((b) & 0x1);
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
 * These registers are used in conjunction with the APA_PLL() registers when
 * the APA_PLL()[NEXT_MAN] field is set.  Indexed by APA_PLL_E.
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
        uint64_t ref_div               : 4;  /**< [ 63: 60](SR/W) Reference clock divider.
                                                                   0 = Reserved.
                                                                   1 = Divide reference clock by 1.
                                                                   2 = Divide reference clock by 2 (typical).
                                                                   3-31 = Divide reference clock by N.

                                                                 See PLL Specification for effect on other fields.
                                                                 ARO ignores this field and uses reference clock divided by 2. */
        uint64_t reserved_58_59        : 2;
        uint64_t post_div              : 10; /**< [ 57: 48](SR/W) Post scalar divider.
                                                                   0, 1 = Reserved.
                                                                   2-1023 = Divide VCO output by [POST_DIV]. */
        uint64_t reserved_42_47        : 6;
        uint64_t vco_mul               : 10; /**< [ 41: 32](SR/W) VCO multiplier integer.
                                                                    VCO frequency is [VCO_MUL].[VCO_FRACT] * reference_clock / [REF_DIV].

                                                                 See PLL and ARO specifications for min/max VCO frequencies. */
        uint64_t vco_fract             : 10; /**< [ 31: 22](SR/W) VCO multiplier fraction.
                                                                    VCO frequency is [VCO_MUL].[VCO_FRACT] * reference_clock / [REF_DIV].

                                                                 See PLL and ARO specifications for min/max VCO frequencies. */
        uint64_t reserved_18_21        : 4;
        uint64_t bw                    : 2;  /**< [ 17: 16](SR/W) VCO bandwidth.

                                                                 See PLL specifications for details.
                                                                 Not used by ARO. */
        uint64_t icp                   : 4;  /**< [ 15: 12](SR/W) PLL ICP setting.

                                                                 See PLL specification for details.
                                                                 ARO ignores this field. */
        uint64_t reserved_10_11        : 2;
        uint64_t update_rate           : 10; /**< [  9:  0](SR/W) PLL update rate.

                                                                 See PLL and ARO specifications for details. */
#else /* Word 0 - Little Endian */
        uint64_t update_rate           : 10; /**< [  9:  0](SR/W) PLL update rate.

                                                                 See PLL and ARO specifications for details. */
        uint64_t reserved_10_11        : 2;
        uint64_t icp                   : 4;  /**< [ 15: 12](SR/W) PLL ICP setting.

                                                                 See PLL specification for details.
                                                                 ARO ignores this field. */
        uint64_t bw                    : 2;  /**< [ 17: 16](SR/W) VCO bandwidth.

                                                                 See PLL specifications for details.
                                                                 Not used by ARO. */
        uint64_t reserved_18_21        : 4;
        uint64_t vco_fract             : 10; /**< [ 31: 22](SR/W) VCO multiplier fraction.
                                                                    VCO frequency is [VCO_MUL].[VCO_FRACT] * reference_clock / [REF_DIV].

                                                                 See PLL and ARO specifications for min/max VCO frequencies. */
        uint64_t vco_mul               : 10; /**< [ 41: 32](SR/W) VCO multiplier integer.
                                                                    VCO frequency is [VCO_MUL].[VCO_FRACT] * reference_clock / [REF_DIV].

                                                                 See PLL and ARO specifications for min/max VCO frequencies. */
        uint64_t reserved_42_47        : 6;
        uint64_t post_div              : 10; /**< [ 57: 48](SR/W) Post scalar divider.
                                                                   0, 1 = Reserved.
                                                                   2-1023 = Divide VCO output by [POST_DIV]. */
        uint64_t reserved_58_59        : 2;
        uint64_t ref_div               : 4;  /**< [ 63: 60](SR/W) Reference clock divider.
                                                                   0 = Reserved.
                                                                   1 = Divide reference clock by 1.
                                                                   2 = Divide reference clock by 2 (typical).
                                                                   3-31 = Divide reference clock by N.

                                                                 See PLL Specification for effect on other fields.
                                                                 ARO ignores this field and uses reference clock divided by 2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_man_pll_s cn; */
};
typedef union cavm_apax_man_pll cavm_apax_man_pll_t;

static inline uint64_t CAVM_APAX_MAN_PLL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_MAN_PLL(uint64_t a)
{
    if (a<=63)
        return 0x87e280001430ll + 0x1000000ll * ((a) & 0x3f);
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
    if ((a<=63) && (b==0))
        return 0x87e2801f0000ll + 0x1000000ll * ((a) & 0x3f) + 8ll * ((b) & 0x0);
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
    if ((a<=63) && (b<=1))
        return 0x87e280100000ll + 0x1000000ll * ((a) & 0x3f) + 0x10ll * ((b) & 0x1);
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
    if ((a<=63) && (b<=1))
        return 0x87e280100008ll + 0x1000000ll * ((a) & 0x3f) + 0x10ll * ((b) & 0x1);
    __cavm_csr_fatal("APAX_MSIX_VECX_CTL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_MSIX_VECX_CTL(a,b) cavm_apax_msix_vecx_ctl_t
#define bustype_CAVM_APAX_MSIX_VECX_CTL(a,b) CSR_TYPE_RSL
#define basename_CAVM_APAX_MSIX_VECX_CTL(a,b) "APAX_MSIX_VECX_CTL"
#define device_bar_CAVM_APAX_MSIX_VECX_CTL(a,b) 0x4 /* PF_BAR4 */
#define busnum_CAVM_APAX_MSIX_VECX_CTL(a,b) (a)
#define arguments_CAVM_APAX_MSIX_VECX_CTL(a,b) (a),(b),-1,-1

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
    if ((a<=63) && (b<=5))
        return 0x87e280001540ll + 0x1000000ll * ((a) & 0x3f) + 8ll * ((b) & 0x7);
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
 * typical programming operations and is supplemented with the APA_MAN_PLL()
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
        uint64_t aro_present           : 1;  /**< [ 63: 63](SRO/H) ARO present.
                                                                 0 = ARO is unavailable.  Programming the ARO will have not effect and
                                                                     switching to ARO will result in the clock being stopped.
                                                                 1 = ARO is available. */
        uint64_t pll1_present          : 1;  /**< [ 62: 62](SRO/H) PLL1 present.
                                                                 0 = PLL1 is unavailable.  Programming PLL1 will have not effect and
                                                                     switching to PLL1 will result in the clock being stopped.
                                                                 1 = PLL1 is available. */
        uint64_t alt_ref               : 1;  /**< [ 61: 61](SR/W/H) Alternate reference clock.
                                                                 0 = Use 100 MHz reference.  [CUR_MUL] and [NEXT_MUL] values are based on 50 MHz increments
                                                                 1 = Use alternate reference clock typically 156.25 MHz or 122.88 MHz.  [CUR_MUL] and
                                                                     [NEXT_MUL] values are based on alternate reference clock divided by two increments.

                                                                 Setting this register has an immediate effect.  The PLL will typically require some time
                                                                 to adjust to the new frequency. */
        uint64_t msc_enable            : 1;  /**< [ 60: 60](SR/W/H) Enable diagnostic output.  Setting this bit causes the PLL to output
                                                                 to the common MSC_CLKOUT and MSC_LOCK ports.  No more than one
                                                                 [MSC_ENABLE] may be set at a time.  It is possible that MESHCLK and DTSCLK
                                                                 have independent outputs.

                                                                 Setting this register has an immediate effect on the outputs.
                                                                 This field is reinitilized on a cold domain reset. */
        uint64_t cur_pll_sel           : 3;  /**< [ 59: 57](SRO/H) Current PLL selection.
                                                                 Enumerated by APA_PLL_SEL_E. */
        uint64_t reserved_55_56        : 2;
        uint64_t cur_mul               : 7;  /**< [ 54: 48](SRO/H) Current frequency multiplier.  PLL Value is based on on reference clock divided by two.
                                                                 See [ALT_REF] for details.  The value is limited by [MAX_MUL].
                                                                 The following values are possible:
                                                                   0 = Uninitialized or powered down PLL selected by [CUR_PLL_SEL].
                                                                   1 = Bypass clock selected.
                                                                   2 = Reference clock selected.
                                                                   3 = Runt clock selected.
                                                                   4-127 = Valid clock frequency.

                                                                 This field is always set to the lower of [INIT_MUL] and the limit specified by
                                                                 [MAX_MUL] on a chip domain reset. */
        uint64_t reserved_47           : 1;
        uint64_t max_mul               : 7;  /**< [ 46: 40](SR/W/H) Maximum PLL multiplier.
                                                                 This field is used to limit the [CUR_MUL] value.
                                                                 A value of zero is considered unlimited.  Once the value
                                                                 of this field is nonzero, any new values written into this field
                                                                 cannot exceed the previous value.  Values 1-5 are reserved
                                                                 since the minimum PLL frequency at least 300 MHz. */
        uint64_t reserved_39           : 1;
        uint64_t init_mul              : 7;  /**< [ 38: 32](SR/W) Chip Reset Frequency Multiplier.  Value used to program the PLL on a chip domain
                                                                 reset.  Value is based on 50 MHz.

                                                                 This field is only reinitialized on a cold domain reset. */
        uint64_t reserved_31           : 1;
        uint64_t next_mul              : 7;  /**< [ 30: 24](SR/W) Next Frequency Multiplier.  Value used to program the PLL if [NEXT_MAN] is clear.
                                                                 Value is based on reference clock divided by two.  Typically 50 MHz.
                                                                 See [ALT_REF] for additional details.  Program cycle is initiated by setting [NEXT_PGM].

                                                                 This field is always set to [INIT_MUL] on a chip domain reset. */
        uint64_t next_pll_sel          : 3;  /**< [ 23: 21](SR/W) Next PLL Selection.  This register is used to select which PLL and register values
                                                                 are being addressed.  It affects both the APA_PLL() and APA_PLL_MAN() registers.
                                                                 Both the [NEXT_PGM] and [NEXT_SWITCH] fields use this information to start PLL operations
                                                                 and the value must not be changed while operations are taking place.
                                                                 Enumerated by APA_PLL_SEL_E. */
        uint64_t reserved_18_20        : 3;
        uint64_t next_man              : 1;  /**< [ 17: 17](SR/W) Determine PLL controls for next operation using contents of APA_MAN_PLL() to specify values.
                                                                 0 = Use [NEXT_MUL] to determine settings and show results in [CUR_MUL].
                                                                 1 = Use APA_MAN_PLL() fields to determine settings and set [CUR_MUL] to 0. */
        uint64_t next_pgm              : 1;  /**< [ 16: 16](SR/W/H) Program PLL specified by [NEXT_PLL_SEL] using [NEXT_MUL] if [NEXT_MAN] is clear or
                                                                 using APA_MAN_PLL() fields if set. Hardware automatically
                                                                 clears this field when both PLL is updated and any delay specified
                                                                 in [NEXT_SWITCH] has completed. */
        uint64_t reserved_12_15        : 4;
        uint64_t next_switch           : 12; /**< [ 11:  0](SR/W/H) Switch the PLL specified by [NEXT_PLL_SEL] after delaying this number of 100 MHz clocks.
                                                                 When set to a nonzero value, the hardware will wait for
                                                                 any PLL programming to complete and then switch after the specified number of
                                                                 100 MHz clocks. Hardware will add additional clocks if required.

                                                                 Internal:
                                                                 Hardware will add counts to maintain 64 reference clock notification to hardware. */
#else /* Word 0 - Little Endian */
        uint64_t next_switch           : 12; /**< [ 11:  0](SR/W/H) Switch the PLL specified by [NEXT_PLL_SEL] after delaying this number of 100 MHz clocks.
                                                                 When set to a nonzero value, the hardware will wait for
                                                                 any PLL programming to complete and then switch after the specified number of
                                                                 100 MHz clocks. Hardware will add additional clocks if required.

                                                                 Internal:
                                                                 Hardware will add counts to maintain 64 reference clock notification to hardware. */
        uint64_t reserved_12_15        : 4;
        uint64_t next_pgm              : 1;  /**< [ 16: 16](SR/W/H) Program PLL specified by [NEXT_PLL_SEL] using [NEXT_MUL] if [NEXT_MAN] is clear or
                                                                 using APA_MAN_PLL() fields if set. Hardware automatically
                                                                 clears this field when both PLL is updated and any delay specified
                                                                 in [NEXT_SWITCH] has completed. */
        uint64_t next_man              : 1;  /**< [ 17: 17](SR/W) Determine PLL controls for next operation using contents of APA_MAN_PLL() to specify values.
                                                                 0 = Use [NEXT_MUL] to determine settings and show results in [CUR_MUL].
                                                                 1 = Use APA_MAN_PLL() fields to determine settings and set [CUR_MUL] to 0. */
        uint64_t reserved_18_20        : 3;
        uint64_t next_pll_sel          : 3;  /**< [ 23: 21](SR/W) Next PLL Selection.  This register is used to select which PLL and register values
                                                                 are being addressed.  It affects both the APA_PLL() and APA_PLL_MAN() registers.
                                                                 Both the [NEXT_PGM] and [NEXT_SWITCH] fields use this information to start PLL operations
                                                                 and the value must not be changed while operations are taking place.
                                                                 Enumerated by APA_PLL_SEL_E. */
        uint64_t next_mul              : 7;  /**< [ 30: 24](SR/W) Next Frequency Multiplier.  Value used to program the PLL if [NEXT_MAN] is clear.
                                                                 Value is based on reference clock divided by two.  Typically 50 MHz.
                                                                 See [ALT_REF] for additional details.  Program cycle is initiated by setting [NEXT_PGM].

                                                                 This field is always set to [INIT_MUL] on a chip domain reset. */
        uint64_t reserved_31           : 1;
        uint64_t init_mul              : 7;  /**< [ 38: 32](SR/W) Chip Reset Frequency Multiplier.  Value used to program the PLL on a chip domain
                                                                 reset.  Value is based on 50 MHz.

                                                                 This field is only reinitialized on a cold domain reset. */
        uint64_t reserved_39           : 1;
        uint64_t max_mul               : 7;  /**< [ 46: 40](SR/W/H) Maximum PLL multiplier.
                                                                 This field is used to limit the [CUR_MUL] value.
                                                                 A value of zero is considered unlimited.  Once the value
                                                                 of this field is nonzero, any new values written into this field
                                                                 cannot exceed the previous value.  Values 1-5 are reserved
                                                                 since the minimum PLL frequency at least 300 MHz. */
        uint64_t reserved_47           : 1;
        uint64_t cur_mul               : 7;  /**< [ 54: 48](SRO/H) Current frequency multiplier.  PLL Value is based on on reference clock divided by two.
                                                                 See [ALT_REF] for details.  The value is limited by [MAX_MUL].
                                                                 The following values are possible:
                                                                   0 = Uninitialized or powered down PLL selected by [CUR_PLL_SEL].
                                                                   1 = Bypass clock selected.
                                                                   2 = Reference clock selected.
                                                                   3 = Runt clock selected.
                                                                   4-127 = Valid clock frequency.

                                                                 This field is always set to the lower of [INIT_MUL] and the limit specified by
                                                                 [MAX_MUL] on a chip domain reset. */
        uint64_t reserved_55_56        : 2;
        uint64_t cur_pll_sel           : 3;  /**< [ 59: 57](SRO/H) Current PLL selection.
                                                                 Enumerated by APA_PLL_SEL_E. */
        uint64_t msc_enable            : 1;  /**< [ 60: 60](SR/W/H) Enable diagnostic output.  Setting this bit causes the PLL to output
                                                                 to the common MSC_CLKOUT and MSC_LOCK ports.  No more than one
                                                                 [MSC_ENABLE] may be set at a time.  It is possible that MESHCLK and DTSCLK
                                                                 have independent outputs.

                                                                 Setting this register has an immediate effect on the outputs.
                                                                 This field is reinitilized on a cold domain reset. */
        uint64_t alt_ref               : 1;  /**< [ 61: 61](SR/W/H) Alternate reference clock.
                                                                 0 = Use 100 MHz reference.  [CUR_MUL] and [NEXT_MUL] values are based on 50 MHz increments
                                                                 1 = Use alternate reference clock typically 156.25 MHz or 122.88 MHz.  [CUR_MUL] and
                                                                     [NEXT_MUL] values are based on alternate reference clock divided by two increments.

                                                                 Setting this register has an immediate effect.  The PLL will typically require some time
                                                                 to adjust to the new frequency. */
        uint64_t pll1_present          : 1;  /**< [ 62: 62](SRO/H) PLL1 present.
                                                                 0 = PLL1 is unavailable.  Programming PLL1 will have not effect and
                                                                     switching to PLL1 will result in the clock being stopped.
                                                                 1 = PLL1 is available. */
        uint64_t aro_present           : 1;  /**< [ 63: 63](SRO/H) ARO present.
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
    if (a<=63)
        return 0x87e280001428ll + 0x1000000ll * ((a) & 0x3f);
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
    if (a<=63)
        return 0x87e280001520ll + 0x1000000ll * ((a) & 0x3f);
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
    if (a<=63)
        return 0x87e280001400ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("APAX_RVBARADDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_RVBARADDR(a) cavm_apax_rvbaraddr_t
#define bustype_CAVM_APAX_RVBARADDR(a) CSR_TYPE_RSL
#define basename_CAVM_APAX_RVBARADDR(a) "APAX_RVBARADDR"
#define device_bar_CAVM_APAX_RVBARADDR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_RVBARADDR(a) (a)
#define arguments_CAVM_APAX_RVBARADDR(a) (a),-1,-1,-1

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
    if (a<=63)
        return 0x87e280001300ll + 0x1000000ll * ((a) & 0x3f);
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
        uint64_t reserved_19_29        : 11;
        uint64_t state                 : 3;  /**< [ 18: 16](SRO/H) Stale entry state. */
        uint64_t epoch                 : 1;  /**< [ 15: 15](SRO/H) Stale entry epoch. */
        uint64_t reqt                  : 3;  /**< [ 14: 12](SRO/H) Stale entry REQT. */
        uint64_t txnid                 : 12; /**< [ 11:  0](SRO/H) Stale entry transaction ID. */
#else /* Word 0 - Little Endian */
        uint64_t txnid                 : 12; /**< [ 11:  0](SRO/H) Stale entry transaction ID. */
        uint64_t reqt                  : 3;  /**< [ 14: 12](SRO/H) Stale entry REQT. */
        uint64_t epoch                 : 1;  /**< [ 15: 15](SRO/H) Stale entry epoch. */
        uint64_t state                 : 3;  /**< [ 18: 16](SRO/H) Stale entry state. */
        uint64_t reserved_19_29        : 11;
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
    if (a<=63)
        return 0x87e280001310ll + 0x1000000ll * ((a) & 0x3f);
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
        uint64_t wdog_struct_txnid     : 1;  /**< [  4:  4](SR/W1C/H) Reads or clears enable for APA(0..63)_WDOG_INT_W1C[WDOG_STRUCT_TXNID]. */
        uint64_t wdog_struct_rqb       : 1;  /**< [  3:  3](SR/W1C/H) Reads or clears enable for APA(0..63)_WDOG_INT_W1C[WDOG_STRUCT_RQB]. */
        uint64_t wdog_struct_dat       : 1;  /**< [  2:  2](SR/W1C/H) Reads or clears enable for APA(0..63)_WDOG_INT_W1C[WDOG_STRUCT_DAT]. */
        uint64_t wdog_struct_crd       : 1;  /**< [  1:  1](SR/W1C/H) Reads or clears enable for APA(0..63)_WDOG_INT_W1C[WDOG_STRUCT_CRD]. */
        uint64_t wdog_core             : 1;  /**< [  0:  0](SR/W1C/H) Reads or clears enable for APA(0..63)_WDOG_INT_W1C[WDOG_CORE]. */
#else /* Word 0 - Little Endian */
        uint64_t wdog_core             : 1;  /**< [  0:  0](SR/W1C/H) Reads or clears enable for APA(0..63)_WDOG_INT_W1C[WDOG_CORE]. */
        uint64_t wdog_struct_crd       : 1;  /**< [  1:  1](SR/W1C/H) Reads or clears enable for APA(0..63)_WDOG_INT_W1C[WDOG_STRUCT_CRD]. */
        uint64_t wdog_struct_dat       : 1;  /**< [  2:  2](SR/W1C/H) Reads or clears enable for APA(0..63)_WDOG_INT_W1C[WDOG_STRUCT_DAT]. */
        uint64_t wdog_struct_rqb       : 1;  /**< [  3:  3](SR/W1C/H) Reads or clears enable for APA(0..63)_WDOG_INT_W1C[WDOG_STRUCT_RQB]. */
        uint64_t wdog_struct_txnid     : 1;  /**< [  4:  4](SR/W1C/H) Reads or clears enable for APA(0..63)_WDOG_INT_W1C[WDOG_STRUCT_TXNID]. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_wdog_int_ena_w1c_s cn; */
};
typedef union cavm_apax_wdog_int_ena_w1c cavm_apax_wdog_int_ena_w1c_t;

static inline uint64_t CAVM_APAX_WDOG_INT_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_WDOG_INT_ENA_W1C(uint64_t a)
{
    if (a<=63)
        return 0x87e280001f30ll + 0x1000000ll * ((a) & 0x3f);
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
        uint64_t wdog_struct_txnid     : 1;  /**< [  4:  4](SR/W1S/H) Reads or sets enable for APA(0..63)_WDOG_INT_W1C[WDOG_STRUCT_TXNID]. */
        uint64_t wdog_struct_rqb       : 1;  /**< [  3:  3](SR/W1S/H) Reads or sets enable for APA(0..63)_WDOG_INT_W1C[WDOG_STRUCT_RQB]. */
        uint64_t wdog_struct_dat       : 1;  /**< [  2:  2](SR/W1S/H) Reads or sets enable for APA(0..63)_WDOG_INT_W1C[WDOG_STRUCT_DAT]. */
        uint64_t wdog_struct_crd       : 1;  /**< [  1:  1](SR/W1S/H) Reads or sets enable for APA(0..63)_WDOG_INT_W1C[WDOG_STRUCT_CRD]. */
        uint64_t wdog_core             : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets enable for APA(0..63)_WDOG_INT_W1C[WDOG_CORE]. */
#else /* Word 0 - Little Endian */
        uint64_t wdog_core             : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets enable for APA(0..63)_WDOG_INT_W1C[WDOG_CORE]. */
        uint64_t wdog_struct_crd       : 1;  /**< [  1:  1](SR/W1S/H) Reads or sets enable for APA(0..63)_WDOG_INT_W1C[WDOG_STRUCT_CRD]. */
        uint64_t wdog_struct_dat       : 1;  /**< [  2:  2](SR/W1S/H) Reads or sets enable for APA(0..63)_WDOG_INT_W1C[WDOG_STRUCT_DAT]. */
        uint64_t wdog_struct_rqb       : 1;  /**< [  3:  3](SR/W1S/H) Reads or sets enable for APA(0..63)_WDOG_INT_W1C[WDOG_STRUCT_RQB]. */
        uint64_t wdog_struct_txnid     : 1;  /**< [  4:  4](SR/W1S/H) Reads or sets enable for APA(0..63)_WDOG_INT_W1C[WDOG_STRUCT_TXNID]. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_wdog_int_ena_w1s_s cn; */
};
typedef union cavm_apax_wdog_int_ena_w1s cavm_apax_wdog_int_ena_w1s_t;

static inline uint64_t CAVM_APAX_WDOG_INT_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_WDOG_INT_ENA_W1S(uint64_t a)
{
    if (a<=63)
        return 0x87e280001f38ll + 0x1000000ll * ((a) & 0x3f);
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
    if (a<=63)
        return 0x87e280001f20ll + 0x1000000ll * ((a) & 0x3f);
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
        uint64_t wdog_struct_txnid     : 1;  /**< [  4:  4](SR/W1S/H) Reads or sets APA(0..63)_WDOG_INT_W1C[WDOG_STRUCT_TXNID]. */
        uint64_t wdog_struct_rqb       : 1;  /**< [  3:  3](SR/W1S/H) Reads or sets APA(0..63)_WDOG_INT_W1C[WDOG_STRUCT_RQB]. */
        uint64_t wdog_struct_dat       : 1;  /**< [  2:  2](SR/W1S/H) Reads or sets APA(0..63)_WDOG_INT_W1C[WDOG_STRUCT_DAT]. */
        uint64_t wdog_struct_crd       : 1;  /**< [  1:  1](SR/W1S/H) Reads or sets APA(0..63)_WDOG_INT_W1C[WDOG_STRUCT_CRD]. */
        uint64_t wdog_core             : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets APA(0..63)_WDOG_INT_W1C[WDOG_CORE]. */
#else /* Word 0 - Little Endian */
        uint64_t wdog_core             : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets APA(0..63)_WDOG_INT_W1C[WDOG_CORE]. */
        uint64_t wdog_struct_crd       : 1;  /**< [  1:  1](SR/W1S/H) Reads or sets APA(0..63)_WDOG_INT_W1C[WDOG_STRUCT_CRD]. */
        uint64_t wdog_struct_dat       : 1;  /**< [  2:  2](SR/W1S/H) Reads or sets APA(0..63)_WDOG_INT_W1C[WDOG_STRUCT_DAT]. */
        uint64_t wdog_struct_rqb       : 1;  /**< [  3:  3](SR/W1S/H) Reads or sets APA(0..63)_WDOG_INT_W1C[WDOG_STRUCT_RQB]. */
        uint64_t wdog_struct_txnid     : 1;  /**< [  4:  4](SR/W1S/H) Reads or sets APA(0..63)_WDOG_INT_W1C[WDOG_STRUCT_TXNID]. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_wdog_int_w1s_s cn; */
};
typedef union cavm_apax_wdog_int_w1s cavm_apax_wdog_int_w1s_t;

static inline uint64_t CAVM_APAX_WDOG_INT_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_WDOG_INT_W1S(uint64_t a)
{
    if (a<=63)
        return 0x87e280001f28ll + 0x1000000ll * ((a) & 0x3f);
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
    if (a<=63)
        return 0x87e280001308ll + 0x1000000ll * ((a) & 0x3f);
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
    if (a<=63)
        return 0x87e280001318ll + 0x1000000ll * ((a) & 0x3f);
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
        uint64_t reserved_33_61        : 29;
        uint64_t has_lsw_idx           : 1;  /**< [ 32: 32](SRO/H) Stale entry HAS_LSW_IDX. */
        uint64_t datst3                : 2;  /**< [ 31: 30](SRO/H) Stale entry DATST3. */
        uint64_t datst2                : 2;  /**< [ 29: 28](SRO/H) Stale entry DATST2. */
        uint64_t datst1                : 2;  /**< [ 27: 26](SRO/H) Stale entry DATST1. */
        uint64_t datst0                : 2;  /**< [ 25: 24](SRO/H) Stale entry DATST0. */
        uint64_t has_dbid              : 1;  /**< [ 23: 23](SRO/H) Stale entry has a DBID. */
        uint64_t tgtid                 : 11; /**< [ 22: 12](SRO/H) Stale entry target ID. */
        uint64_t dbid                  : 12; /**< [ 11:  0](SRO/H) Stale entry DBID. */
#else /* Word 0 - Little Endian */
        uint64_t dbid                  : 12; /**< [ 11:  0](SRO/H) Stale entry DBID. */
        uint64_t tgtid                 : 11; /**< [ 22: 12](SRO/H) Stale entry target ID. */
        uint64_t has_dbid              : 1;  /**< [ 23: 23](SRO/H) Stale entry has a DBID. */
        uint64_t datst0                : 2;  /**< [ 25: 24](SRO/H) Stale entry DATST0. */
        uint64_t datst1                : 2;  /**< [ 27: 26](SRO/H) Stale entry DATST1. */
        uint64_t datst2                : 2;  /**< [ 29: 28](SRO/H) Stale entry DATST2. */
        uint64_t datst3                : 2;  /**< [ 31: 30](SRO/H) Stale entry DATST3. */
        uint64_t has_lsw_idx           : 1;  /**< [ 32: 32](SRO/H) Stale entry HAS_LSW_IDX. */
        uint64_t reserved_33_61        : 29;
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
    if (a<=63)
        return 0x87e280001330ll + 0x1000000ll * ((a) & 0x3f);
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
        uint64_t txnid_orig            : 12; /**< [ 11:  0](SRO/H) Stale entry original transaction ID. */
#else /* Word 0 - Little Endian */
        uint64_t txnid_orig            : 12; /**< [ 11:  0](SRO/H) Stale entry original transaction ID. */
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
    if (a<=63)
        return 0x87e280001328ll + 0x1000000ll * ((a) & 0x3f);
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
        uint64_t reserved_18_29        : 12;
        uint64_t txnid_new             : 6;  /**< [ 17: 12](SRO/H) Stale entry new transaction ID (low 6 bits). */
        uint64_t txnid_orig            : 12; /**< [ 11:  0](SRO/H) Stale entry original transaction ID. */
#else /* Word 0 - Little Endian */
        uint64_t txnid_orig            : 12; /**< [ 11:  0](SRO/H) Stale entry original transaction ID. */
        uint64_t txnid_new             : 6;  /**< [ 17: 12](SRO/H) Stale entry new transaction ID (low 6 bits). */
        uint64_t reserved_18_29        : 12;
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
    if (a<=63)
        return 0x87e280001320ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("APAX_WDOG_STRUCT_TXNID_DIAG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_WDOG_STRUCT_TXNID_DIAG(a) cavm_apax_wdog_struct_txnid_diag_t
#define bustype_CAVM_APAX_WDOG_STRUCT_TXNID_DIAG(a) CSR_TYPE_RSL
#define basename_CAVM_APAX_WDOG_STRUCT_TXNID_DIAG(a) "APAX_WDOG_STRUCT_TXNID_DIAG"
#define device_bar_CAVM_APAX_WDOG_STRUCT_TXNID_DIAG(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_WDOG_STRUCT_TXNID_DIAG(a) (a)
#define arguments_CAVM_APAX_WDOG_STRUCT_TXNID_DIAG(a) (a),-1,-1,-1

#endif /* __CAVM_CSRS_APA_H__ */
