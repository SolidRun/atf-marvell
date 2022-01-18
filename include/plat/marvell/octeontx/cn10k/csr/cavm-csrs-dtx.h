#ifndef __CAVM_CSRS_DTX_H__
#define __CAVM_CSRS_DTX_H__
/* This file is auto-generated. Do not edit */

/***********************license start***********************************
* Copyright (C) 2020-2022 Marvell
* SPDX-License-Identifier: BSD-3-Clause
* https://spdx.org/licenses
***********************license end**************************************/


/**
 * @file
 *
 * Configuration and status register (CSR) address and type definitions for
 * OcteonTX DTX.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Register (RSL) dtx_apa#_bcst_rsp
 *
 * INTERNAL: DTX APA Control Register
 */
union cavm_dtx_apax_bcst_rsp
{
    uint64_t u;
    struct cavm_dtx_apax_bcst_rsp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_apax_bcst_rsp_s cn; */
};
typedef union cavm_dtx_apax_bcst_rsp cavm_dtx_apax_bcst_rsp_t;

static inline uint64_t CAVM_DTX_APAX_BCST_RSP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_APAX_BCST_RSP(uint64_t a)
{
    if (a<=63)
        return 0x87e0fe680080ll + 0x2000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DTX_APAX_BCST_RSP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_APAX_BCST_RSP(a) cavm_dtx_apax_bcst_rsp_t
#define bustype_CAVM_DTX_APAX_BCST_RSP(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_APAX_BCST_RSP(a) "DTX_APAX_BCST_RSP"
#define busnum_CAVM_DTX_APAX_BCST_RSP(a) (a)
#define arguments_CAVM_DTX_APAX_BCST_RSP(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_apa#_ctl
 *
 * INTERNAL: DTX APA Control Register
 */
union cavm_dtx_apax_ctl
{
    uint64_t u;
    struct cavm_dtx_apax_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_2_3          : 2;
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
#else /* Word 0 - Little Endian */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t reserved_2_3          : 2;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_apax_ctl_s cn; */
};
typedef union cavm_dtx_apax_ctl cavm_dtx_apax_ctl_t;

static inline uint64_t CAVM_DTX_APAX_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_APAX_CTL(uint64_t a)
{
    if (a<=63)
        return 0x87e0fe680060ll + 0x2000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DTX_APAX_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_APAX_CTL(a) cavm_dtx_apax_ctl_t
#define bustype_CAVM_DTX_APAX_CTL(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_APAX_CTL(a) "DTX_APAX_CTL"
#define busnum_CAVM_DTX_APAX_CTL(a) (a)
#define arguments_CAVM_DTX_APAX_CTL(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_apa#_dat#
 *
 * INTERNAL: DTX APA Raw Data Register
 */
union cavm_dtx_apax_datx
{
    uint64_t u;
    struct cavm_dtx_apax_datx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
#else /* Word 0 - Little Endian */
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_apax_datx_s cn; */
};
typedef union cavm_dtx_apax_datx cavm_dtx_apax_datx_t;

static inline uint64_t CAVM_DTX_APAX_DATX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_APAX_DATX(uint64_t a, uint64_t b)
{
    if ((a<=63) && (b<=1))
        return 0x87e0fe680040ll + 0x2000ll * ((a) & 0x3f) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_APAX_DATX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_APAX_DATX(a,b) cavm_dtx_apax_datx_t
#define bustype_CAVM_DTX_APAX_DATX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_APAX_DATX(a,b) "DTX_APAX_DATX"
#define busnum_CAVM_DTX_APAX_DATX(a,b) (a)
#define arguments_CAVM_DTX_APAX_DATX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_apa#_ena#
 *
 * INTERNAL: DTX APA Data Enable Register
 */
union cavm_dtx_apax_enax
{
    uint64_t u;
    struct cavm_dtx_apax_enax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_apax_enax_s cn; */
};
typedef union cavm_dtx_apax_enax cavm_dtx_apax_enax_t;

static inline uint64_t CAVM_DTX_APAX_ENAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_APAX_ENAX(uint64_t a, uint64_t b)
{
    if ((a<=63) && (b<=1))
        return 0x87e0fe680020ll + 0x2000ll * ((a) & 0x3f) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_APAX_ENAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_APAX_ENAX(a,b) cavm_dtx_apax_enax_t
#define bustype_CAVM_DTX_APAX_ENAX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_APAX_ENAX(a,b) "DTX_APAX_ENAX"
#define busnum_CAVM_DTX_APAX_ENAX(a,b) (a)
#define arguments_CAVM_DTX_APAX_ENAX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_apa#_sel#
 *
 * INTERNAL: DTX APA Select Register
 */
union cavm_dtx_apax_selx
{
    uint64_t u;
    struct cavm_dtx_apax_selx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
#else /* Word 0 - Little Endian */
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_apax_selx_s cn; */
};
typedef union cavm_dtx_apax_selx cavm_dtx_apax_selx_t;

static inline uint64_t CAVM_DTX_APAX_SELX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_APAX_SELX(uint64_t a, uint64_t b)
{
    if ((a<=63) && (b<=1))
        return 0x87e0fe680000ll + 0x2000ll * ((a) & 0x3f) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_APAX_SELX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_APAX_SELX(a,b) cavm_dtx_apax_selx_t
#define bustype_CAVM_DTX_APAX_SELX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_APAX_SELX(a,b) "DTX_APAX_SELX"
#define busnum_CAVM_DTX_APAX_SELX(a,b) (a)
#define arguments_CAVM_DTX_APAX_SELX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_arxm#_bcst_rsp
 *
 * INTERNAL: DTX ARXM Control Register
 */
union cavm_dtx_arxmx_bcst_rsp
{
    uint64_t u;
    struct cavm_dtx_arxmx_bcst_rsp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_arxmx_bcst_rsp_s cn; */
};
typedef union cavm_dtx_arxmx_bcst_rsp cavm_dtx_arxmx_bcst_rsp_t;

static inline uint64_t CAVM_DTX_ARXMX_BCST_RSP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_ARXMX_BCST_RSP(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x87e0fe32c080ll + 0x2000ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_ARXMX_BCST_RSP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_ARXMX_BCST_RSP(a) cavm_dtx_arxmx_bcst_rsp_t
#define bustype_CAVM_DTX_ARXMX_BCST_RSP(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_ARXMX_BCST_RSP(a) "DTX_ARXMX_BCST_RSP"
#define busnum_CAVM_DTX_ARXMX_BCST_RSP(a) (a)
#define arguments_CAVM_DTX_ARXMX_BCST_RSP(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_arxm#_ctl
 *
 * INTERNAL: DTX ARXM Control Register
 */
union cavm_dtx_arxmx_ctl
{
    uint64_t u;
    struct cavm_dtx_arxmx_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_2_3          : 2;
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
#else /* Word 0 - Little Endian */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t reserved_2_3          : 2;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_arxmx_ctl_s cn; */
};
typedef union cavm_dtx_arxmx_ctl cavm_dtx_arxmx_ctl_t;

static inline uint64_t CAVM_DTX_ARXMX_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_ARXMX_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x87e0fe32c060ll + 0x2000ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_ARXMX_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_ARXMX_CTL(a) cavm_dtx_arxmx_ctl_t
#define bustype_CAVM_DTX_ARXMX_CTL(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_ARXMX_CTL(a) "DTX_ARXMX_CTL"
#define busnum_CAVM_DTX_ARXMX_CTL(a) (a)
#define arguments_CAVM_DTX_ARXMX_CTL(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_arxm#_dat#
 *
 * INTERNAL: DTX ARXM Raw Data Register
 */
union cavm_dtx_arxmx_datx
{
    uint64_t u;
    struct cavm_dtx_arxmx_datx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
#else /* Word 0 - Little Endian */
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_arxmx_datx_s cn; */
};
typedef union cavm_dtx_arxmx_datx cavm_dtx_arxmx_datx_t;

static inline uint64_t CAVM_DTX_ARXMX_DATX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_ARXMX_DATX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=1) && (b<=1)))
        return 0x87e0fe32c040ll + 0x2000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_ARXMX_DATX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_ARXMX_DATX(a,b) cavm_dtx_arxmx_datx_t
#define bustype_CAVM_DTX_ARXMX_DATX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_ARXMX_DATX(a,b) "DTX_ARXMX_DATX"
#define busnum_CAVM_DTX_ARXMX_DATX(a,b) (a)
#define arguments_CAVM_DTX_ARXMX_DATX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_arxm#_ena#
 *
 * INTERNAL: DTX ARXM Data Enable Register
 */
union cavm_dtx_arxmx_enax
{
    uint64_t u;
    struct cavm_dtx_arxmx_enax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_arxmx_enax_s cn; */
};
typedef union cavm_dtx_arxmx_enax cavm_dtx_arxmx_enax_t;

static inline uint64_t CAVM_DTX_ARXMX_ENAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_ARXMX_ENAX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=1) && (b<=1)))
        return 0x87e0fe32c020ll + 0x2000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_ARXMX_ENAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_ARXMX_ENAX(a,b) cavm_dtx_arxmx_enax_t
#define bustype_CAVM_DTX_ARXMX_ENAX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_ARXMX_ENAX(a,b) "DTX_ARXMX_ENAX"
#define busnum_CAVM_DTX_ARXMX_ENAX(a,b) (a)
#define arguments_CAVM_DTX_ARXMX_ENAX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_arxm#_sel#
 *
 * INTERNAL: DTX ARXM Select Register
 */
union cavm_dtx_arxmx_selx
{
    uint64_t u;
    struct cavm_dtx_arxmx_selx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
#else /* Word 0 - Little Endian */
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_arxmx_selx_s cn; */
};
typedef union cavm_dtx_arxmx_selx cavm_dtx_arxmx_selx_t;

static inline uint64_t CAVM_DTX_ARXMX_SELX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_ARXMX_SELX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=1) && (b<=1)))
        return 0x87e0fe32c000ll + 0x2000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_ARXMX_SELX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_ARXMX_SELX(a,b) cavm_dtx_arxmx_selx_t
#define bustype_CAVM_DTX_ARXMX_SELX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_ARXMX_SELX(a,b) "DTX_ARXMX_SELX"
#define busnum_CAVM_DTX_ARXMX_SELX(a,b) (a)
#define arguments_CAVM_DTX_ARXMX_SELX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_bcn_bcst_rsp
 *
 * INTERNAL: DTX BCN Control Register
 */
union cavm_dtx_bcn_bcst_rsp
{
    uint64_t u;
    struct cavm_dtx_bcn_bcst_rsp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_bcn_bcst_rsp_s cn; */
};
typedef union cavm_dtx_bcn_bcst_rsp cavm_dtx_bcn_bcst_rsp_t;

#define CAVM_DTX_BCN_BCST_RSP CAVM_DTX_BCN_BCST_RSP_FUNC()
static inline uint64_t CAVM_DTX_BCN_BCST_RSP_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_BCN_BCST_RSP_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KA))
        return 0x87e0fe08e080ll;
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x87e0fe368080ll;
    __cavm_csr_fatal("DTX_BCN_BCST_RSP", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_BCN_BCST_RSP cavm_dtx_bcn_bcst_rsp_t
#define bustype_CAVM_DTX_BCN_BCST_RSP CSR_TYPE_RSL
#define basename_CAVM_DTX_BCN_BCST_RSP "DTX_BCN_BCST_RSP"
#define busnum_CAVM_DTX_BCN_BCST_RSP 0
#define arguments_CAVM_DTX_BCN_BCST_RSP -1,-1,-1,-1

/**
 * Register (RSL) dtx_bcn_ctl
 *
 * INTERNAL: DTX BCN Control Register
 */
union cavm_dtx_bcn_ctl
{
    uint64_t u;
    struct cavm_dtx_bcn_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_2_3          : 2;
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
#else /* Word 0 - Little Endian */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t reserved_2_3          : 2;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_bcn_ctl_s cn; */
};
typedef union cavm_dtx_bcn_ctl cavm_dtx_bcn_ctl_t;

#define CAVM_DTX_BCN_CTL CAVM_DTX_BCN_CTL_FUNC()
static inline uint64_t CAVM_DTX_BCN_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_BCN_CTL_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KA))
        return 0x87e0fe08e060ll;
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x87e0fe368060ll;
    __cavm_csr_fatal("DTX_BCN_CTL", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_BCN_CTL cavm_dtx_bcn_ctl_t
#define bustype_CAVM_DTX_BCN_CTL CSR_TYPE_RSL
#define basename_CAVM_DTX_BCN_CTL "DTX_BCN_CTL"
#define busnum_CAVM_DTX_BCN_CTL 0
#define arguments_CAVM_DTX_BCN_CTL -1,-1,-1,-1

/**
 * Register (RSL) dtx_bcn_dat#
 *
 * INTERNAL: DTX BCN Raw Data Register
 */
union cavm_dtx_bcn_datx
{
    uint64_t u;
    struct cavm_dtx_bcn_datx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
#else /* Word 0 - Little Endian */
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_bcn_datx_s cn; */
};
typedef union cavm_dtx_bcn_datx cavm_dtx_bcn_datx_t;

static inline uint64_t CAVM_DTX_BCN_DATX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_BCN_DATX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x87e0fe08e040ll + 8ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x87e0fe368040ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_BCN_DATX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_BCN_DATX(a) cavm_dtx_bcn_datx_t
#define bustype_CAVM_DTX_BCN_DATX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_BCN_DATX(a) "DTX_BCN_DATX"
#define busnum_CAVM_DTX_BCN_DATX(a) (a)
#define arguments_CAVM_DTX_BCN_DATX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_bcn_ena#
 *
 * INTERNAL: DTX BCN Data Enable Register
 */
union cavm_dtx_bcn_enax
{
    uint64_t u;
    struct cavm_dtx_bcn_enax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_bcn_enax_s cn; */
};
typedef union cavm_dtx_bcn_enax cavm_dtx_bcn_enax_t;

static inline uint64_t CAVM_DTX_BCN_ENAX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_BCN_ENAX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x87e0fe08e020ll + 8ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x87e0fe368020ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_BCN_ENAX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_BCN_ENAX(a) cavm_dtx_bcn_enax_t
#define bustype_CAVM_DTX_BCN_ENAX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_BCN_ENAX(a) "DTX_BCN_ENAX"
#define busnum_CAVM_DTX_BCN_ENAX(a) (a)
#define arguments_CAVM_DTX_BCN_ENAX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_bcn_sel#
 *
 * INTERNAL: DTX BCN Select Register
 */
union cavm_dtx_bcn_selx
{
    uint64_t u;
    struct cavm_dtx_bcn_selx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
#else /* Word 0 - Little Endian */
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_bcn_selx_s cn; */
};
typedef union cavm_dtx_bcn_selx cavm_dtx_bcn_selx_t;

static inline uint64_t CAVM_DTX_BCN_SELX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_BCN_SELX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x87e0fe08e000ll + 8ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x87e0fe368000ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_BCN_SELX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_BCN_SELX(a) cavm_dtx_bcn_selx_t
#define bustype_CAVM_DTX_BCN_SELX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_BCN_SELX(a) "DTX_BCN_SELX"
#define busnum_CAVM_DTX_BCN_SELX(a) (a)
#define arguments_CAVM_DTX_BCN_SELX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_broadcast_ctl
 *
 * DTX BROADCAST Control Register
 */
union cavm_dtx_broadcast_ctl
{
    uint64_t u;
    struct cavm_dtx_broadcast_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_2_3          : 2;
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
#else /* Word 0 - Little Endian */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t reserved_2_3          : 2;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_broadcast_ctl_s cn; */
};
typedef union cavm_dtx_broadcast_ctl cavm_dtx_broadcast_ctl_t;

#define CAVM_DTX_BROADCAST_CTL CAVM_DTX_BROADCAST_CTL_FUNC()
static inline uint64_t CAVM_DTX_BROADCAST_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_BROADCAST_CTL_FUNC(void)
{
    return 0x87e0fe1fc060ll;
}

#define typedef_CAVM_DTX_BROADCAST_CTL cavm_dtx_broadcast_ctl_t
#define bustype_CAVM_DTX_BROADCAST_CTL CSR_TYPE_RSL
#define basename_CAVM_DTX_BROADCAST_CTL "DTX_BROADCAST_CTL"
#define busnum_CAVM_DTX_BROADCAST_CTL 0
#define arguments_CAVM_DTX_BROADCAST_CTL -1,-1,-1,-1

/**
 * Register (RSL) dtx_broadcast_ena#
 *
 * DTX BROADCAST Data Enable Register
 */
union cavm_dtx_broadcast_enax
{
    uint64_t u;
    struct cavm_dtx_broadcast_enax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_broadcast_enax_s cn; */
};
typedef union cavm_dtx_broadcast_enax cavm_dtx_broadcast_enax_t;

static inline uint64_t CAVM_DTX_BROADCAST_ENAX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_BROADCAST_ENAX(uint64_t a)
{
    if (a<=1)
        return 0x87e0fe1fc020ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_BROADCAST_ENAX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_BROADCAST_ENAX(a) cavm_dtx_broadcast_enax_t
#define bustype_CAVM_DTX_BROADCAST_ENAX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_BROADCAST_ENAX(a) "DTX_BROADCAST_ENAX"
#define busnum_CAVM_DTX_BROADCAST_ENAX(a) (a)
#define arguments_CAVM_DTX_BROADCAST_ENAX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_broadcast_sel#
 *
 * DTX BROADCAST Select Register
 */
union cavm_dtx_broadcast_selx
{
    uint64_t u;
    struct cavm_dtx_broadcast_selx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
#else /* Word 0 - Little Endian */
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_broadcast_selx_s cn; */
};
typedef union cavm_dtx_broadcast_selx cavm_dtx_broadcast_selx_t;

static inline uint64_t CAVM_DTX_BROADCAST_SELX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_BROADCAST_SELX(uint64_t a)
{
    if (a<=1)
        return 0x87e0fe1fc000ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_BROADCAST_SELX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_BROADCAST_SELX(a) cavm_dtx_broadcast_selx_t
#define bustype_CAVM_DTX_BROADCAST_SELX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_BROADCAST_SELX(a) "DTX_BROADCAST_SELX"
#define busnum_CAVM_DTX_BROADCAST_SELX(a) (a)
#define arguments_CAVM_DTX_BROADCAST_SELX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_btn_bcst_rsp
 *
 * INTERNAL: DTX BTN Control Register
 */
union cavm_dtx_btn_bcst_rsp
{
    uint64_t u;
    struct cavm_dtx_btn_bcst_rsp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_btn_bcst_rsp_s cn; */
};
typedef union cavm_dtx_btn_bcst_rsp cavm_dtx_btn_bcst_rsp_t;

#define CAVM_DTX_BTN_BCST_RSP CAVM_DTX_BTN_BCST_RSP_FUNC()
static inline uint64_t CAVM_DTX_BTN_BCST_RSP_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_BTN_BCST_RSP_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KA))
        return 0x87e0fe368080ll;
    __cavm_csr_fatal("DTX_BTN_BCST_RSP", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_BTN_BCST_RSP cavm_dtx_btn_bcst_rsp_t
#define bustype_CAVM_DTX_BTN_BCST_RSP CSR_TYPE_RSL
#define basename_CAVM_DTX_BTN_BCST_RSP "DTX_BTN_BCST_RSP"
#define busnum_CAVM_DTX_BTN_BCST_RSP 0
#define arguments_CAVM_DTX_BTN_BCST_RSP -1,-1,-1,-1

/**
 * Register (RSL) dtx_btn_ctl
 *
 * INTERNAL: DTX BTN Control Register
 */
union cavm_dtx_btn_ctl
{
    uint64_t u;
    struct cavm_dtx_btn_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_2_3          : 2;
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
#else /* Word 0 - Little Endian */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t reserved_2_3          : 2;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_btn_ctl_s cn; */
};
typedef union cavm_dtx_btn_ctl cavm_dtx_btn_ctl_t;

#define CAVM_DTX_BTN_CTL CAVM_DTX_BTN_CTL_FUNC()
static inline uint64_t CAVM_DTX_BTN_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_BTN_CTL_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KA))
        return 0x87e0fe368060ll;
    __cavm_csr_fatal("DTX_BTN_CTL", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_BTN_CTL cavm_dtx_btn_ctl_t
#define bustype_CAVM_DTX_BTN_CTL CSR_TYPE_RSL
#define basename_CAVM_DTX_BTN_CTL "DTX_BTN_CTL"
#define busnum_CAVM_DTX_BTN_CTL 0
#define arguments_CAVM_DTX_BTN_CTL -1,-1,-1,-1

/**
 * Register (RSL) dtx_btn_dat#
 *
 * INTERNAL: DTX BTN Raw Data Register
 */
union cavm_dtx_btn_datx
{
    uint64_t u;
    struct cavm_dtx_btn_datx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
#else /* Word 0 - Little Endian */
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_btn_datx_s cn; */
};
typedef union cavm_dtx_btn_datx cavm_dtx_btn_datx_t;

static inline uint64_t CAVM_DTX_BTN_DATX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_BTN_DATX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x87e0fe368040ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_BTN_DATX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_BTN_DATX(a) cavm_dtx_btn_datx_t
#define bustype_CAVM_DTX_BTN_DATX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_BTN_DATX(a) "DTX_BTN_DATX"
#define busnum_CAVM_DTX_BTN_DATX(a) (a)
#define arguments_CAVM_DTX_BTN_DATX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_btn_ena#
 *
 * INTERNAL: DTX BTN Data Enable Register
 */
union cavm_dtx_btn_enax
{
    uint64_t u;
    struct cavm_dtx_btn_enax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_btn_enax_s cn; */
};
typedef union cavm_dtx_btn_enax cavm_dtx_btn_enax_t;

static inline uint64_t CAVM_DTX_BTN_ENAX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_BTN_ENAX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x87e0fe368020ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_BTN_ENAX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_BTN_ENAX(a) cavm_dtx_btn_enax_t
#define bustype_CAVM_DTX_BTN_ENAX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_BTN_ENAX(a) "DTX_BTN_ENAX"
#define busnum_CAVM_DTX_BTN_ENAX(a) (a)
#define arguments_CAVM_DTX_BTN_ENAX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_btn_sel#
 *
 * INTERNAL: DTX BTN Select Register
 */
union cavm_dtx_btn_selx
{
    uint64_t u;
    struct cavm_dtx_btn_selx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
#else /* Word 0 - Little Endian */
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_btn_selx_s cn; */
};
typedef union cavm_dtx_btn_selx cavm_dtx_btn_selx_t;

static inline uint64_t CAVM_DTX_BTN_SELX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_BTN_SELX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x87e0fe368000ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_BTN_SELX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_BTN_SELX(a) cavm_dtx_btn_selx_t
#define bustype_CAVM_DTX_BTN_SELX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_BTN_SELX(a) "DTX_BTN_SELX"
#define busnum_CAVM_DTX_BTN_SELX(a) (a)
#define arguments_CAVM_DTX_BTN_SELX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_bts_bcst_rsp
 *
 * INTERNAL: DTX BTS Control Register
 */
union cavm_dtx_bts_bcst_rsp
{
    uint64_t u;
    struct cavm_dtx_bts_bcst_rsp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_bts_bcst_rsp_s cn; */
};
typedef union cavm_dtx_bts_bcst_rsp cavm_dtx_bts_bcst_rsp_t;

#define CAVM_DTX_BTS_BCST_RSP CAVM_DTX_BTS_BCST_RSP_FUNC()
static inline uint64_t CAVM_DTX_BTS_BCST_RSP_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_BTS_BCST_RSP_FUNC(void)
{
    return 0x87e0fe024080ll;
}

#define typedef_CAVM_DTX_BTS_BCST_RSP cavm_dtx_bts_bcst_rsp_t
#define bustype_CAVM_DTX_BTS_BCST_RSP CSR_TYPE_RSL
#define basename_CAVM_DTX_BTS_BCST_RSP "DTX_BTS_BCST_RSP"
#define busnum_CAVM_DTX_BTS_BCST_RSP 0
#define arguments_CAVM_DTX_BTS_BCST_RSP -1,-1,-1,-1

/**
 * Register (RSL) dtx_bts_ctl
 *
 * INTERNAL: DTX BTS Control Register
 */
union cavm_dtx_bts_ctl
{
    uint64_t u;
    struct cavm_dtx_bts_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_2_3          : 2;
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
#else /* Word 0 - Little Endian */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t reserved_2_3          : 2;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_bts_ctl_s cn; */
};
typedef union cavm_dtx_bts_ctl cavm_dtx_bts_ctl_t;

#define CAVM_DTX_BTS_CTL CAVM_DTX_BTS_CTL_FUNC()
static inline uint64_t CAVM_DTX_BTS_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_BTS_CTL_FUNC(void)
{
    return 0x87e0fe024060ll;
}

#define typedef_CAVM_DTX_BTS_CTL cavm_dtx_bts_ctl_t
#define bustype_CAVM_DTX_BTS_CTL CSR_TYPE_RSL
#define basename_CAVM_DTX_BTS_CTL "DTX_BTS_CTL"
#define busnum_CAVM_DTX_BTS_CTL 0
#define arguments_CAVM_DTX_BTS_CTL -1,-1,-1,-1

/**
 * Register (RSL) dtx_bts_dat#
 *
 * INTERNAL: DTX BTS Raw Data Register
 */
union cavm_dtx_bts_datx
{
    uint64_t u;
    struct cavm_dtx_bts_datx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
#else /* Word 0 - Little Endian */
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_bts_datx_s cn; */
};
typedef union cavm_dtx_bts_datx cavm_dtx_bts_datx_t;

static inline uint64_t CAVM_DTX_BTS_DATX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_BTS_DATX(uint64_t a)
{
    if (a<=1)
        return 0x87e0fe024040ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_BTS_DATX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_BTS_DATX(a) cavm_dtx_bts_datx_t
#define bustype_CAVM_DTX_BTS_DATX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_BTS_DATX(a) "DTX_BTS_DATX"
#define busnum_CAVM_DTX_BTS_DATX(a) (a)
#define arguments_CAVM_DTX_BTS_DATX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_bts_ena#
 *
 * INTERNAL: DTX BTS Data Enable Register
 */
union cavm_dtx_bts_enax
{
    uint64_t u;
    struct cavm_dtx_bts_enax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_bts_enax_s cn; */
};
typedef union cavm_dtx_bts_enax cavm_dtx_bts_enax_t;

static inline uint64_t CAVM_DTX_BTS_ENAX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_BTS_ENAX(uint64_t a)
{
    if (a<=1)
        return 0x87e0fe024020ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_BTS_ENAX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_BTS_ENAX(a) cavm_dtx_bts_enax_t
#define bustype_CAVM_DTX_BTS_ENAX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_BTS_ENAX(a) "DTX_BTS_ENAX"
#define busnum_CAVM_DTX_BTS_ENAX(a) (a)
#define arguments_CAVM_DTX_BTS_ENAX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_bts_sel#
 *
 * INTERNAL: DTX BTS Select Register
 */
union cavm_dtx_bts_selx
{
    uint64_t u;
    struct cavm_dtx_bts_selx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
#else /* Word 0 - Little Endian */
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_bts_selx_s cn; */
};
typedef union cavm_dtx_bts_selx cavm_dtx_bts_selx_t;

static inline uint64_t CAVM_DTX_BTS_SELX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_BTS_SELX(uint64_t a)
{
    if (a<=1)
        return 0x87e0fe024000ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_BTS_SELX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_BTS_SELX(a) cavm_dtx_bts_selx_t
#define bustype_CAVM_DTX_BTS_SELX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_BTS_SELX(a) "DTX_BTS_SELX"
#define busnum_CAVM_DTX_BTS_SELX(a) (a)
#define arguments_CAVM_DTX_BTS_SELX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_cpc_bcst_rsp
 *
 * INTERNAL: DTX CPC Control Register
 */
union cavm_dtx_cpc_bcst_rsp
{
    uint64_t u;
    struct cavm_dtx_cpc_bcst_rsp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_cpc_bcst_rsp_s cn; */
};
typedef union cavm_dtx_cpc_bcst_rsp cavm_dtx_cpc_bcst_rsp_t;

#define CAVM_DTX_CPC_BCST_RSP CAVM_DTX_CPC_BCST_RSP_FUNC()
static inline uint64_t CAVM_DTX_CPC_BCST_RSP_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_CPC_BCST_RSP_FUNC(void)
{
    return 0x87e0fe8da080ll;
}

#define typedef_CAVM_DTX_CPC_BCST_RSP cavm_dtx_cpc_bcst_rsp_t
#define bustype_CAVM_DTX_CPC_BCST_RSP CSR_TYPE_RSL
#define basename_CAVM_DTX_CPC_BCST_RSP "DTX_CPC_BCST_RSP"
#define busnum_CAVM_DTX_CPC_BCST_RSP 0
#define arguments_CAVM_DTX_CPC_BCST_RSP -1,-1,-1,-1

/**
 * Register (RSL) dtx_cpc_ctl
 *
 * INTERNAL: DTX CPC Control Register
 */
union cavm_dtx_cpc_ctl
{
    uint64_t u;
    struct cavm_dtx_cpc_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_2_3          : 2;
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
#else /* Word 0 - Little Endian */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t reserved_2_3          : 2;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_cpc_ctl_s cn; */
};
typedef union cavm_dtx_cpc_ctl cavm_dtx_cpc_ctl_t;

#define CAVM_DTX_CPC_CTL CAVM_DTX_CPC_CTL_FUNC()
static inline uint64_t CAVM_DTX_CPC_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_CPC_CTL_FUNC(void)
{
    return 0x87e0fe8da060ll;
}

#define typedef_CAVM_DTX_CPC_CTL cavm_dtx_cpc_ctl_t
#define bustype_CAVM_DTX_CPC_CTL CSR_TYPE_RSL
#define basename_CAVM_DTX_CPC_CTL "DTX_CPC_CTL"
#define busnum_CAVM_DTX_CPC_CTL 0
#define arguments_CAVM_DTX_CPC_CTL -1,-1,-1,-1

/**
 * Register (RSL) dtx_cpc_dat#
 *
 * INTERNAL: DTX CPC Raw Data Register
 */
union cavm_dtx_cpc_datx
{
    uint64_t u;
    struct cavm_dtx_cpc_datx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
#else /* Word 0 - Little Endian */
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_cpc_datx_s cn; */
};
typedef union cavm_dtx_cpc_datx cavm_dtx_cpc_datx_t;

static inline uint64_t CAVM_DTX_CPC_DATX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_CPC_DATX(uint64_t a)
{
    if (a<=1)
        return 0x87e0fe8da040ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_CPC_DATX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_CPC_DATX(a) cavm_dtx_cpc_datx_t
#define bustype_CAVM_DTX_CPC_DATX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_CPC_DATX(a) "DTX_CPC_DATX"
#define busnum_CAVM_DTX_CPC_DATX(a) (a)
#define arguments_CAVM_DTX_CPC_DATX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_cpc_ena#
 *
 * INTERNAL: DTX CPC Data Enable Register
 */
union cavm_dtx_cpc_enax
{
    uint64_t u;
    struct cavm_dtx_cpc_enax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_cpc_enax_s cn; */
};
typedef union cavm_dtx_cpc_enax cavm_dtx_cpc_enax_t;

static inline uint64_t CAVM_DTX_CPC_ENAX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_CPC_ENAX(uint64_t a)
{
    if (a<=1)
        return 0x87e0fe8da020ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_CPC_ENAX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_CPC_ENAX(a) cavm_dtx_cpc_enax_t
#define bustype_CAVM_DTX_CPC_ENAX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_CPC_ENAX(a) "DTX_CPC_ENAX"
#define busnum_CAVM_DTX_CPC_ENAX(a) (a)
#define arguments_CAVM_DTX_CPC_ENAX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_cpc_sel#
 *
 * INTERNAL: DTX CPC Select Register
 */
union cavm_dtx_cpc_selx
{
    uint64_t u;
    struct cavm_dtx_cpc_selx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
#else /* Word 0 - Little Endian */
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_cpc_selx_s cn; */
};
typedef union cavm_dtx_cpc_selx cavm_dtx_cpc_selx_t;

static inline uint64_t CAVM_DTX_CPC_SELX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_CPC_SELX(uint64_t a)
{
    if (a<=1)
        return 0x87e0fe8da000ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_CPC_SELX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_CPC_SELX(a) cavm_dtx_cpc_selx_t
#define bustype_CAVM_DTX_CPC_SELX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_CPC_SELX(a) "DTX_CPC_SELX"
#define busnum_CAVM_DTX_CPC_SELX(a) (a)
#define arguments_CAVM_DTX_CPC_SELX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_cpri#_bcst_rsp
 *
 * INTERNAL: DTX CPRI Control Register
 */
union cavm_dtx_cprix_bcst_rsp
{
    uint64_t u;
    struct cavm_dtx_cprix_bcst_rsp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_cprix_bcst_rsp_s cn; */
};
typedef union cavm_dtx_cprix_bcst_rsp cavm_dtx_cprix_bcst_rsp_t;

static inline uint64_t CAVM_DTX_CPRIX_BCST_RSP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_CPRIX_BCST_RSP(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=2))
        return 0x87e0fe36c080ll + 0x2000ll * ((a) & 0x3);
    __cavm_csr_fatal("DTX_CPRIX_BCST_RSP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_CPRIX_BCST_RSP(a) cavm_dtx_cprix_bcst_rsp_t
#define bustype_CAVM_DTX_CPRIX_BCST_RSP(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_CPRIX_BCST_RSP(a) "DTX_CPRIX_BCST_RSP"
#define busnum_CAVM_DTX_CPRIX_BCST_RSP(a) (a)
#define arguments_CAVM_DTX_CPRIX_BCST_RSP(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_cpri#_ctl
 *
 * INTERNAL: DTX CPRI Control Register
 */
union cavm_dtx_cprix_ctl
{
    uint64_t u;
    struct cavm_dtx_cprix_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_2_3          : 2;
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
#else /* Word 0 - Little Endian */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t reserved_2_3          : 2;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_cprix_ctl_s cn; */
};
typedef union cavm_dtx_cprix_ctl cavm_dtx_cprix_ctl_t;

static inline uint64_t CAVM_DTX_CPRIX_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_CPRIX_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=2))
        return 0x87e0fe36c060ll + 0x2000ll * ((a) & 0x3);
    __cavm_csr_fatal("DTX_CPRIX_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_CPRIX_CTL(a) cavm_dtx_cprix_ctl_t
#define bustype_CAVM_DTX_CPRIX_CTL(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_CPRIX_CTL(a) "DTX_CPRIX_CTL"
#define busnum_CAVM_DTX_CPRIX_CTL(a) (a)
#define arguments_CAVM_DTX_CPRIX_CTL(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_cpri#_dat#
 *
 * INTERNAL: DTX CPRI Raw Data Register
 */
union cavm_dtx_cprix_datx
{
    uint64_t u;
    struct cavm_dtx_cprix_datx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
#else /* Word 0 - Little Endian */
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_cprix_datx_s cn; */
};
typedef union cavm_dtx_cprix_datx cavm_dtx_cprix_datx_t;

static inline uint64_t CAVM_DTX_CPRIX_DATX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_CPRIX_DATX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=2) && (b<=1)))
        return 0x87e0fe36c040ll + 0x2000ll * ((a) & 0x3) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_CPRIX_DATX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_CPRIX_DATX(a,b) cavm_dtx_cprix_datx_t
#define bustype_CAVM_DTX_CPRIX_DATX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_CPRIX_DATX(a,b) "DTX_CPRIX_DATX"
#define busnum_CAVM_DTX_CPRIX_DATX(a,b) (a)
#define arguments_CAVM_DTX_CPRIX_DATX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_cpri#_ena#
 *
 * INTERNAL: DTX CPRI Data Enable Register
 */
union cavm_dtx_cprix_enax
{
    uint64_t u;
    struct cavm_dtx_cprix_enax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_cprix_enax_s cn; */
};
typedef union cavm_dtx_cprix_enax cavm_dtx_cprix_enax_t;

static inline uint64_t CAVM_DTX_CPRIX_ENAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_CPRIX_ENAX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=2) && (b<=1)))
        return 0x87e0fe36c020ll + 0x2000ll * ((a) & 0x3) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_CPRIX_ENAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_CPRIX_ENAX(a,b) cavm_dtx_cprix_enax_t
#define bustype_CAVM_DTX_CPRIX_ENAX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_CPRIX_ENAX(a,b) "DTX_CPRIX_ENAX"
#define busnum_CAVM_DTX_CPRIX_ENAX(a,b) (a)
#define arguments_CAVM_DTX_CPRIX_ENAX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_cpri#_sel#
 *
 * INTERNAL: DTX CPRI Select Register
 */
union cavm_dtx_cprix_selx
{
    uint64_t u;
    struct cavm_dtx_cprix_selx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
#else /* Word 0 - Little Endian */
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_cprix_selx_s cn; */
};
typedef union cavm_dtx_cprix_selx cavm_dtx_cprix_selx_t;

static inline uint64_t CAVM_DTX_CPRIX_SELX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_CPRIX_SELX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=2) && (b<=1)))
        return 0x87e0fe36c000ll + 0x2000ll * ((a) & 0x3) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_CPRIX_SELX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_CPRIX_SELX(a,b) cavm_dtx_cprix_selx_t
#define bustype_CAVM_DTX_CPRIX_SELX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_CPRIX_SELX(a,b) "DTX_CPRIX_SELX"
#define busnum_CAVM_DTX_CPRIX_SELX(a,b) (a)
#define arguments_CAVM_DTX_CPRIX_SELX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_cpt#_bcst_rsp
 *
 * INTERNAL: DTX CPT Control Register
 */
union cavm_dtx_cptx_bcst_rsp
{
    uint64_t u;
    struct cavm_dtx_cptx_bcst_rsp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_cptx_bcst_rsp_s cn; */
};
typedef union cavm_dtx_cptx_bcst_rsp cavm_dtx_cptx_bcst_rsp_t;

static inline uint64_t CAVM_DTX_CPTX_BCST_RSP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_CPTX_BCST_RSP(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x87e0fe884080ll + 0x2000ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_CPTX_BCST_RSP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_CPTX_BCST_RSP(a) cavm_dtx_cptx_bcst_rsp_t
#define bustype_CAVM_DTX_CPTX_BCST_RSP(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_CPTX_BCST_RSP(a) "DTX_CPTX_BCST_RSP"
#define busnum_CAVM_DTX_CPTX_BCST_RSP(a) (a)
#define arguments_CAVM_DTX_CPTX_BCST_RSP(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_cpt#_ctl
 *
 * INTERNAL: DTX CPT Control Register
 */
union cavm_dtx_cptx_ctl
{
    uint64_t u;
    struct cavm_dtx_cptx_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_2_3          : 2;
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
#else /* Word 0 - Little Endian */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t reserved_2_3          : 2;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_cptx_ctl_s cn; */
};
typedef union cavm_dtx_cptx_ctl cavm_dtx_cptx_ctl_t;

static inline uint64_t CAVM_DTX_CPTX_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_CPTX_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x87e0fe884060ll + 0x2000ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_CPTX_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_CPTX_CTL(a) cavm_dtx_cptx_ctl_t
#define bustype_CAVM_DTX_CPTX_CTL(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_CPTX_CTL(a) "DTX_CPTX_CTL"
#define busnum_CAVM_DTX_CPTX_CTL(a) (a)
#define arguments_CAVM_DTX_CPTX_CTL(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_cpt#_dat#
 *
 * INTERNAL: DTX CPT Raw Data Register
 */
union cavm_dtx_cptx_datx
{
    uint64_t u;
    struct cavm_dtx_cptx_datx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
#else /* Word 0 - Little Endian */
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_cptx_datx_s cn; */
};
typedef union cavm_dtx_cptx_datx cavm_dtx_cptx_datx_t;

static inline uint64_t CAVM_DTX_CPTX_DATX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_CPTX_DATX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=1) && (b<=1)))
        return 0x87e0fe884040ll + 0x2000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_CPTX_DATX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_CPTX_DATX(a,b) cavm_dtx_cptx_datx_t
#define bustype_CAVM_DTX_CPTX_DATX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_CPTX_DATX(a,b) "DTX_CPTX_DATX"
#define busnum_CAVM_DTX_CPTX_DATX(a,b) (a)
#define arguments_CAVM_DTX_CPTX_DATX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_cpt#_ena#
 *
 * INTERNAL: DTX CPT Data Enable Register
 */
union cavm_dtx_cptx_enax
{
    uint64_t u;
    struct cavm_dtx_cptx_enax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_cptx_enax_s cn; */
};
typedef union cavm_dtx_cptx_enax cavm_dtx_cptx_enax_t;

static inline uint64_t CAVM_DTX_CPTX_ENAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_CPTX_ENAX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=1) && (b<=1)))
        return 0x87e0fe884020ll + 0x2000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_CPTX_ENAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_CPTX_ENAX(a,b) cavm_dtx_cptx_enax_t
#define bustype_CAVM_DTX_CPTX_ENAX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_CPTX_ENAX(a,b) "DTX_CPTX_ENAX"
#define busnum_CAVM_DTX_CPTX_ENAX(a,b) (a)
#define arguments_CAVM_DTX_CPTX_ENAX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_cpt#_sel#
 *
 * INTERNAL: DTX CPT Select Register
 */
union cavm_dtx_cptx_selx
{
    uint64_t u;
    struct cavm_dtx_cptx_selx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
#else /* Word 0 - Little Endian */
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_cptx_selx_s cn; */
};
typedef union cavm_dtx_cptx_selx cavm_dtx_cptx_selx_t;

static inline uint64_t CAVM_DTX_CPTX_SELX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_CPTX_SELX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=1) && (b<=1)))
        return 0x87e0fe884000ll + 0x2000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_CPTX_SELX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_CPTX_SELX(a,b) cavm_dtx_cptx_selx_t
#define bustype_CAVM_DTX_CPTX_SELX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_CPTX_SELX(a,b) "DTX_CPTX_SELX"
#define busnum_CAVM_DTX_CPTX_SELX(a,b) (a)
#define arguments_CAVM_DTX_CPTX_SELX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_denc_bcst_rsp
 *
 * INTERNAL: DTX DENC Control Register
 */
union cavm_dtx_denc_bcst_rsp
{
    uint64_t u;
    struct cavm_dtx_denc_bcst_rsp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_denc_bcst_rsp_s cn; */
};
typedef union cavm_dtx_denc_bcst_rsp cavm_dtx_denc_bcst_rsp_t;

#define CAVM_DTX_DENC_BCST_RSP CAVM_DTX_DENC_BCST_RSP_FUNC()
static inline uint64_t CAVM_DTX_DENC_BCST_RSP_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_DENC_BCST_RSP_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KA))
        return 0x87e0fe322080ll;
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x87e0fe322080ll;
    __cavm_csr_fatal("DTX_DENC_BCST_RSP", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_DENC_BCST_RSP cavm_dtx_denc_bcst_rsp_t
#define bustype_CAVM_DTX_DENC_BCST_RSP CSR_TYPE_RSL
#define basename_CAVM_DTX_DENC_BCST_RSP "DTX_DENC_BCST_RSP"
#define busnum_CAVM_DTX_DENC_BCST_RSP 0
#define arguments_CAVM_DTX_DENC_BCST_RSP -1,-1,-1,-1

/**
 * Register (RSL) dtx_denc_ctl
 *
 * INTERNAL: DTX DENC Control Register
 */
union cavm_dtx_denc_ctl
{
    uint64_t u;
    struct cavm_dtx_denc_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_2_3          : 2;
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
#else /* Word 0 - Little Endian */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t reserved_2_3          : 2;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_denc_ctl_s cn; */
};
typedef union cavm_dtx_denc_ctl cavm_dtx_denc_ctl_t;

#define CAVM_DTX_DENC_CTL CAVM_DTX_DENC_CTL_FUNC()
static inline uint64_t CAVM_DTX_DENC_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_DENC_CTL_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KA))
        return 0x87e0fe322060ll;
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x87e0fe322060ll;
    __cavm_csr_fatal("DTX_DENC_CTL", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_DENC_CTL cavm_dtx_denc_ctl_t
#define bustype_CAVM_DTX_DENC_CTL CSR_TYPE_RSL
#define basename_CAVM_DTX_DENC_CTL "DTX_DENC_CTL"
#define busnum_CAVM_DTX_DENC_CTL 0
#define arguments_CAVM_DTX_DENC_CTL -1,-1,-1,-1

/**
 * Register (RSL) dtx_denc_dat#
 *
 * INTERNAL: DTX DENC Raw Data Register
 */
union cavm_dtx_denc_datx
{
    uint64_t u;
    struct cavm_dtx_denc_datx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
#else /* Word 0 - Little Endian */
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_denc_datx_s cn; */
};
typedef union cavm_dtx_denc_datx cavm_dtx_denc_datx_t;

static inline uint64_t CAVM_DTX_DENC_DATX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_DENC_DATX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x87e0fe322040ll + 8ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x87e0fe322040ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_DENC_DATX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_DENC_DATX(a) cavm_dtx_denc_datx_t
#define bustype_CAVM_DTX_DENC_DATX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_DENC_DATX(a) "DTX_DENC_DATX"
#define busnum_CAVM_DTX_DENC_DATX(a) (a)
#define arguments_CAVM_DTX_DENC_DATX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_denc_ena#
 *
 * INTERNAL: DTX DENC Data Enable Register
 */
union cavm_dtx_denc_enax
{
    uint64_t u;
    struct cavm_dtx_denc_enax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_denc_enax_s cn; */
};
typedef union cavm_dtx_denc_enax cavm_dtx_denc_enax_t;

static inline uint64_t CAVM_DTX_DENC_ENAX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_DENC_ENAX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x87e0fe322020ll + 8ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x87e0fe322020ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_DENC_ENAX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_DENC_ENAX(a) cavm_dtx_denc_enax_t
#define bustype_CAVM_DTX_DENC_ENAX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_DENC_ENAX(a) "DTX_DENC_ENAX"
#define busnum_CAVM_DTX_DENC_ENAX(a) (a)
#define arguments_CAVM_DTX_DENC_ENAX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_denc_sel#
 *
 * INTERNAL: DTX DENC Select Register
 */
union cavm_dtx_denc_selx
{
    uint64_t u;
    struct cavm_dtx_denc_selx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
#else /* Word 0 - Little Endian */
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_denc_selx_s cn; */
};
typedef union cavm_dtx_denc_selx cavm_dtx_denc_selx_t;

static inline uint64_t CAVM_DTX_DENC_SELX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_DENC_SELX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x87e0fe322000ll + 8ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x87e0fe322000ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_DENC_SELX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_DENC_SELX(a) cavm_dtx_denc_selx_t
#define bustype_CAVM_DTX_DENC_SELX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_DENC_SELX(a) "DTX_DENC_SELX"
#define busnum_CAVM_DTX_DENC_SELX(a) (a)
#define arguments_CAVM_DTX_DENC_SELX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_dmap#_bcst_rsp
 *
 * INTERNAL: DTX DMAP Control Register
 */
union cavm_dtx_dmapx_bcst_rsp
{
    uint64_t u;
    struct cavm_dtx_dmapx_bcst_rsp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_dmapx_bcst_rsp_s cn; */
};
typedef union cavm_dtx_dmapx_bcst_rsp cavm_dtx_dmapx_bcst_rsp_t;

static inline uint64_t CAVM_DTX_DMAPX_BCST_RSP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_DMAPX_BCST_RSP(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x87e0fe2e8080ll + 0x2000ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_DMAPX_BCST_RSP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_DMAPX_BCST_RSP(a) cavm_dtx_dmapx_bcst_rsp_t
#define bustype_CAVM_DTX_DMAPX_BCST_RSP(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_DMAPX_BCST_RSP(a) "DTX_DMAPX_BCST_RSP"
#define busnum_CAVM_DTX_DMAPX_BCST_RSP(a) (a)
#define arguments_CAVM_DTX_DMAPX_BCST_RSP(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_dmap#_ctl
 *
 * INTERNAL: DTX DMAP Control Register
 */
union cavm_dtx_dmapx_ctl
{
    uint64_t u;
    struct cavm_dtx_dmapx_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_2_3          : 2;
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
#else /* Word 0 - Little Endian */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t reserved_2_3          : 2;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_dmapx_ctl_s cn; */
};
typedef union cavm_dtx_dmapx_ctl cavm_dtx_dmapx_ctl_t;

static inline uint64_t CAVM_DTX_DMAPX_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_DMAPX_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x87e0fe2e8060ll + 0x2000ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_DMAPX_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_DMAPX_CTL(a) cavm_dtx_dmapx_ctl_t
#define bustype_CAVM_DTX_DMAPX_CTL(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_DMAPX_CTL(a) "DTX_DMAPX_CTL"
#define busnum_CAVM_DTX_DMAPX_CTL(a) (a)
#define arguments_CAVM_DTX_DMAPX_CTL(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_dmap#_dat#
 *
 * INTERNAL: DTX DMAP Raw Data Register
 */
union cavm_dtx_dmapx_datx
{
    uint64_t u;
    struct cavm_dtx_dmapx_datx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
#else /* Word 0 - Little Endian */
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_dmapx_datx_s cn; */
};
typedef union cavm_dtx_dmapx_datx cavm_dtx_dmapx_datx_t;

static inline uint64_t CAVM_DTX_DMAPX_DATX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_DMAPX_DATX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=1) && (b<=1)))
        return 0x87e0fe2e8040ll + 0x2000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_DMAPX_DATX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_DMAPX_DATX(a,b) cavm_dtx_dmapx_datx_t
#define bustype_CAVM_DTX_DMAPX_DATX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_DMAPX_DATX(a,b) "DTX_DMAPX_DATX"
#define busnum_CAVM_DTX_DMAPX_DATX(a,b) (a)
#define arguments_CAVM_DTX_DMAPX_DATX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_dmap#_ena#
 *
 * INTERNAL: DTX DMAP Data Enable Register
 */
union cavm_dtx_dmapx_enax
{
    uint64_t u;
    struct cavm_dtx_dmapx_enax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_dmapx_enax_s cn; */
};
typedef union cavm_dtx_dmapx_enax cavm_dtx_dmapx_enax_t;

static inline uint64_t CAVM_DTX_DMAPX_ENAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_DMAPX_ENAX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=1) && (b<=1)))
        return 0x87e0fe2e8020ll + 0x2000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_DMAPX_ENAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_DMAPX_ENAX(a,b) cavm_dtx_dmapx_enax_t
#define bustype_CAVM_DTX_DMAPX_ENAX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_DMAPX_ENAX(a,b) "DTX_DMAPX_ENAX"
#define busnum_CAVM_DTX_DMAPX_ENAX(a,b) (a)
#define arguments_CAVM_DTX_DMAPX_ENAX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_dmap#_sel#
 *
 * INTERNAL: DTX DMAP Select Register
 */
union cavm_dtx_dmapx_selx
{
    uint64_t u;
    struct cavm_dtx_dmapx_selx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
#else /* Word 0 - Little Endian */
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_dmapx_selx_s cn; */
};
typedef union cavm_dtx_dmapx_selx cavm_dtx_dmapx_selx_t;

static inline uint64_t CAVM_DTX_DMAPX_SELX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_DMAPX_SELX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=1) && (b<=1)))
        return 0x87e0fe2e8000ll + 0x2000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_DMAPX_SELX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_DMAPX_SELX(a,b) cavm_dtx_dmapx_selx_t
#define bustype_CAVM_DTX_DMAPX_SELX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_DMAPX_SELX(a,b) "DTX_DMAPX_SELX"
#define busnum_CAVM_DTX_DMAPX_SELX(a,b) (a)
#define arguments_CAVM_DTX_DMAPX_SELX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_dmapn#_bcst_rsp
 *
 * INTERNAL: DTX DMAPN Control Register
 */
union cavm_dtx_dmapnx_bcst_rsp
{
    uint64_t u;
    struct cavm_dtx_dmapnx_bcst_rsp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_dmapnx_bcst_rsp_s cn; */
};
typedef union cavm_dtx_dmapnx_bcst_rsp cavm_dtx_dmapnx_bcst_rsp_t;

static inline uint64_t CAVM_DTX_DMAPNX_BCST_RSP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_DMAPNX_BCST_RSP(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=2))
        return 0x87e0fe2e8080ll + 0x2000ll * ((a) & 0x3);
    __cavm_csr_fatal("DTX_DMAPNX_BCST_RSP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_DMAPNX_BCST_RSP(a) cavm_dtx_dmapnx_bcst_rsp_t
#define bustype_CAVM_DTX_DMAPNX_BCST_RSP(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_DMAPNX_BCST_RSP(a) "DTX_DMAPNX_BCST_RSP"
#define busnum_CAVM_DTX_DMAPNX_BCST_RSP(a) (a)
#define arguments_CAVM_DTX_DMAPNX_BCST_RSP(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_dmapn#_ctl
 *
 * INTERNAL: DTX DMAPN Control Register
 */
union cavm_dtx_dmapnx_ctl
{
    uint64_t u;
    struct cavm_dtx_dmapnx_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_2_3          : 2;
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
#else /* Word 0 - Little Endian */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t reserved_2_3          : 2;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_dmapnx_ctl_s cn; */
};
typedef union cavm_dtx_dmapnx_ctl cavm_dtx_dmapnx_ctl_t;

static inline uint64_t CAVM_DTX_DMAPNX_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_DMAPNX_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=2))
        return 0x87e0fe2e8060ll + 0x2000ll * ((a) & 0x3);
    __cavm_csr_fatal("DTX_DMAPNX_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_DMAPNX_CTL(a) cavm_dtx_dmapnx_ctl_t
#define bustype_CAVM_DTX_DMAPNX_CTL(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_DMAPNX_CTL(a) "DTX_DMAPNX_CTL"
#define busnum_CAVM_DTX_DMAPNX_CTL(a) (a)
#define arguments_CAVM_DTX_DMAPNX_CTL(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_dmapn#_dat#
 *
 * INTERNAL: DTX DMAPN Raw Data Register
 */
union cavm_dtx_dmapnx_datx
{
    uint64_t u;
    struct cavm_dtx_dmapnx_datx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
#else /* Word 0 - Little Endian */
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_dmapnx_datx_s cn; */
};
typedef union cavm_dtx_dmapnx_datx cavm_dtx_dmapnx_datx_t;

static inline uint64_t CAVM_DTX_DMAPNX_DATX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_DMAPNX_DATX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=2) && (b<=1)))
        return 0x87e0fe2e8040ll + 0x2000ll * ((a) & 0x3) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_DMAPNX_DATX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_DMAPNX_DATX(a,b) cavm_dtx_dmapnx_datx_t
#define bustype_CAVM_DTX_DMAPNX_DATX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_DMAPNX_DATX(a,b) "DTX_DMAPNX_DATX"
#define busnum_CAVM_DTX_DMAPNX_DATX(a,b) (a)
#define arguments_CAVM_DTX_DMAPNX_DATX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_dmapn#_ena#
 *
 * INTERNAL: DTX DMAPN Data Enable Register
 */
union cavm_dtx_dmapnx_enax
{
    uint64_t u;
    struct cavm_dtx_dmapnx_enax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_dmapnx_enax_s cn; */
};
typedef union cavm_dtx_dmapnx_enax cavm_dtx_dmapnx_enax_t;

static inline uint64_t CAVM_DTX_DMAPNX_ENAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_DMAPNX_ENAX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=2) && (b<=1)))
        return 0x87e0fe2e8020ll + 0x2000ll * ((a) & 0x3) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_DMAPNX_ENAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_DMAPNX_ENAX(a,b) cavm_dtx_dmapnx_enax_t
#define bustype_CAVM_DTX_DMAPNX_ENAX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_DMAPNX_ENAX(a,b) "DTX_DMAPNX_ENAX"
#define busnum_CAVM_DTX_DMAPNX_ENAX(a,b) (a)
#define arguments_CAVM_DTX_DMAPNX_ENAX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_dmapn#_sel#
 *
 * INTERNAL: DTX DMAPN Select Register
 */
union cavm_dtx_dmapnx_selx
{
    uint64_t u;
    struct cavm_dtx_dmapnx_selx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
#else /* Word 0 - Little Endian */
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_dmapnx_selx_s cn; */
};
typedef union cavm_dtx_dmapnx_selx cavm_dtx_dmapnx_selx_t;

static inline uint64_t CAVM_DTX_DMAPNX_SELX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_DMAPNX_SELX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=2) && (b<=1)))
        return 0x87e0fe2e8000ll + 0x2000ll * ((a) & 0x3) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_DMAPNX_SELX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_DMAPNX_SELX(a,b) cavm_dtx_dmapnx_selx_t
#define bustype_CAVM_DTX_DMAPNX_SELX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_DMAPNX_SELX(a,b) "DTX_DMAPNX_SELX"
#define busnum_CAVM_DTX_DMAPNX_SELX(a,b) (a)
#define arguments_CAVM_DTX_DMAPNX_SELX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_dpi_bcst_rsp
 *
 * INTERNAL: DTX DPI Control Register
 */
union cavm_dtx_dpi_bcst_rsp
{
    uint64_t u;
    struct cavm_dtx_dpi_bcst_rsp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_dpi_bcst_rsp_s cn; */
};
typedef union cavm_dtx_dpi_bcst_rsp cavm_dtx_dpi_bcst_rsp_t;

#define CAVM_DTX_DPI_BCST_RSP CAVM_DTX_DPI_BCST_RSP_FUNC()
static inline uint64_t CAVM_DTX_DPI_BCST_RSP_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_DPI_BCST_RSP_FUNC(void)
{
    return 0x87e0fe8dc080ll;
}

#define typedef_CAVM_DTX_DPI_BCST_RSP cavm_dtx_dpi_bcst_rsp_t
#define bustype_CAVM_DTX_DPI_BCST_RSP CSR_TYPE_RSL
#define basename_CAVM_DTX_DPI_BCST_RSP "DTX_DPI_BCST_RSP"
#define busnum_CAVM_DTX_DPI_BCST_RSP 0
#define arguments_CAVM_DTX_DPI_BCST_RSP -1,-1,-1,-1

/**
 * Register (RSL) dtx_dpi_ctl
 *
 * INTERNAL: DTX DPI Control Register
 */
union cavm_dtx_dpi_ctl
{
    uint64_t u;
    struct cavm_dtx_dpi_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_2_3          : 2;
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
#else /* Word 0 - Little Endian */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t reserved_2_3          : 2;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_dpi_ctl_s cn; */
};
typedef union cavm_dtx_dpi_ctl cavm_dtx_dpi_ctl_t;

#define CAVM_DTX_DPI_CTL CAVM_DTX_DPI_CTL_FUNC()
static inline uint64_t CAVM_DTX_DPI_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_DPI_CTL_FUNC(void)
{
    return 0x87e0fe8dc060ll;
}

#define typedef_CAVM_DTX_DPI_CTL cavm_dtx_dpi_ctl_t
#define bustype_CAVM_DTX_DPI_CTL CSR_TYPE_RSL
#define basename_CAVM_DTX_DPI_CTL "DTX_DPI_CTL"
#define busnum_CAVM_DTX_DPI_CTL 0
#define arguments_CAVM_DTX_DPI_CTL -1,-1,-1,-1

/**
 * Register (RSL) dtx_dpi_dat#
 *
 * INTERNAL: DTX DPI Raw Data Register
 */
union cavm_dtx_dpi_datx
{
    uint64_t u;
    struct cavm_dtx_dpi_datx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
#else /* Word 0 - Little Endian */
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_dpi_datx_s cn; */
};
typedef union cavm_dtx_dpi_datx cavm_dtx_dpi_datx_t;

static inline uint64_t CAVM_DTX_DPI_DATX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_DPI_DATX(uint64_t a)
{
    if (a<=1)
        return 0x87e0fe8dc040ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_DPI_DATX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_DPI_DATX(a) cavm_dtx_dpi_datx_t
#define bustype_CAVM_DTX_DPI_DATX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_DPI_DATX(a) "DTX_DPI_DATX"
#define busnum_CAVM_DTX_DPI_DATX(a) (a)
#define arguments_CAVM_DTX_DPI_DATX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_dpi_ena#
 *
 * INTERNAL: DTX DPI Data Enable Register
 */
union cavm_dtx_dpi_enax
{
    uint64_t u;
    struct cavm_dtx_dpi_enax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_dpi_enax_s cn; */
};
typedef union cavm_dtx_dpi_enax cavm_dtx_dpi_enax_t;

static inline uint64_t CAVM_DTX_DPI_ENAX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_DPI_ENAX(uint64_t a)
{
    if (a<=1)
        return 0x87e0fe8dc020ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_DPI_ENAX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_DPI_ENAX(a) cavm_dtx_dpi_enax_t
#define bustype_CAVM_DTX_DPI_ENAX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_DPI_ENAX(a) "DTX_DPI_ENAX"
#define busnum_CAVM_DTX_DPI_ENAX(a) (a)
#define arguments_CAVM_DTX_DPI_ENAX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_dpi_sel#
 *
 * INTERNAL: DTX DPI Select Register
 */
union cavm_dtx_dpi_selx
{
    uint64_t u;
    struct cavm_dtx_dpi_selx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
#else /* Word 0 - Little Endian */
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_dpi_selx_s cn; */
};
typedef union cavm_dtx_dpi_selx cavm_dtx_dpi_selx_t;

static inline uint64_t CAVM_DTX_DPI_SELX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_DPI_SELX(uint64_t a)
{
    if (a<=1)
        return 0x87e0fe8dc000ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_DPI_SELX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_DPI_SELX(a) cavm_dtx_dpi_selx_t
#define bustype_CAVM_DTX_DPI_SELX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_DPI_SELX(a) "DTX_DPI_SELX"
#define busnum_CAVM_DTX_DPI_SELX(a) (a)
#define arguments_CAVM_DTX_DPI_SELX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_ecmp#_bcst_rsp
 *
 * INTERNAL: DTX ECMP Control Register
 */
union cavm_dtx_ecmpx_bcst_rsp
{
    uint64_t u;
    struct cavm_dtx_ecmpx_bcst_rsp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_ecmpx_bcst_rsp_s cn; */
};
typedef union cavm_dtx_ecmpx_bcst_rsp cavm_dtx_ecmpx_bcst_rsp_t;

static inline uint64_t CAVM_DTX_ECMPX_BCST_RSP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_ECMPX_BCST_RSP(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=2))
        return 0x87e0fe2b8080ll + 0x2000ll * ((a) & 0x3);
    __cavm_csr_fatal("DTX_ECMPX_BCST_RSP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_ECMPX_BCST_RSP(a) cavm_dtx_ecmpx_bcst_rsp_t
#define bustype_CAVM_DTX_ECMPX_BCST_RSP(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_ECMPX_BCST_RSP(a) "DTX_ECMPX_BCST_RSP"
#define busnum_CAVM_DTX_ECMPX_BCST_RSP(a) (a)
#define arguments_CAVM_DTX_ECMPX_BCST_RSP(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_ecmp#_ctl
 *
 * INTERNAL: DTX ECMP Control Register
 */
union cavm_dtx_ecmpx_ctl
{
    uint64_t u;
    struct cavm_dtx_ecmpx_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_2_3          : 2;
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
#else /* Word 0 - Little Endian */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t reserved_2_3          : 2;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_ecmpx_ctl_s cn; */
};
typedef union cavm_dtx_ecmpx_ctl cavm_dtx_ecmpx_ctl_t;

static inline uint64_t CAVM_DTX_ECMPX_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_ECMPX_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=2))
        return 0x87e0fe2b8060ll + 0x2000ll * ((a) & 0x3);
    __cavm_csr_fatal("DTX_ECMPX_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_ECMPX_CTL(a) cavm_dtx_ecmpx_ctl_t
#define bustype_CAVM_DTX_ECMPX_CTL(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_ECMPX_CTL(a) "DTX_ECMPX_CTL"
#define busnum_CAVM_DTX_ECMPX_CTL(a) (a)
#define arguments_CAVM_DTX_ECMPX_CTL(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_ecmp#_dat#
 *
 * INTERNAL: DTX ECMP Raw Data Register
 */
union cavm_dtx_ecmpx_datx
{
    uint64_t u;
    struct cavm_dtx_ecmpx_datx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
#else /* Word 0 - Little Endian */
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_ecmpx_datx_s cn; */
};
typedef union cavm_dtx_ecmpx_datx cavm_dtx_ecmpx_datx_t;

static inline uint64_t CAVM_DTX_ECMPX_DATX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_ECMPX_DATX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=2) && (b<=1)))
        return 0x87e0fe2b8040ll + 0x2000ll * ((a) & 0x3) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_ECMPX_DATX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_ECMPX_DATX(a,b) cavm_dtx_ecmpx_datx_t
#define bustype_CAVM_DTX_ECMPX_DATX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_ECMPX_DATX(a,b) "DTX_ECMPX_DATX"
#define busnum_CAVM_DTX_ECMPX_DATX(a,b) (a)
#define arguments_CAVM_DTX_ECMPX_DATX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_ecmp#_ena#
 *
 * INTERNAL: DTX ECMP Data Enable Register
 */
union cavm_dtx_ecmpx_enax
{
    uint64_t u;
    struct cavm_dtx_ecmpx_enax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_ecmpx_enax_s cn; */
};
typedef union cavm_dtx_ecmpx_enax cavm_dtx_ecmpx_enax_t;

static inline uint64_t CAVM_DTX_ECMPX_ENAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_ECMPX_ENAX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=2) && (b<=1)))
        return 0x87e0fe2b8020ll + 0x2000ll * ((a) & 0x3) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_ECMPX_ENAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_ECMPX_ENAX(a,b) cavm_dtx_ecmpx_enax_t
#define bustype_CAVM_DTX_ECMPX_ENAX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_ECMPX_ENAX(a,b) "DTX_ECMPX_ENAX"
#define busnum_CAVM_DTX_ECMPX_ENAX(a,b) (a)
#define arguments_CAVM_DTX_ECMPX_ENAX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_ecmp#_sel#
 *
 * INTERNAL: DTX ECMP Select Register
 */
union cavm_dtx_ecmpx_selx
{
    uint64_t u;
    struct cavm_dtx_ecmpx_selx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
#else /* Word 0 - Little Endian */
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_ecmpx_selx_s cn; */
};
typedef union cavm_dtx_ecmpx_selx cavm_dtx_ecmpx_selx_t;

static inline uint64_t CAVM_DTX_ECMPX_SELX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_ECMPX_SELX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=2) && (b<=1)))
        return 0x87e0fe2b8000ll + 0x2000ll * ((a) & 0x3) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_ECMPX_SELX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_ECMPX_SELX(a,b) cavm_dtx_ecmpx_selx_t
#define bustype_CAVM_DTX_ECMPX_SELX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_ECMPX_SELX(a,b) "DTX_ECMPX_SELX"
#define busnum_CAVM_DTX_ECMPX_SELX(a,b) (a)
#define arguments_CAVM_DTX_ECMPX_SELX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_ecmp_bcst_rsp
 *
 * INTERNAL: DTX ECMP Control Register
 */
union cavm_dtx_ecmp_bcst_rsp
{
    uint64_t u;
    struct cavm_dtx_ecmp_bcst_rsp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_ecmp_bcst_rsp_s cn; */
};
typedef union cavm_dtx_ecmp_bcst_rsp cavm_dtx_ecmp_bcst_rsp_t;

#define CAVM_DTX_ECMP_BCST_RSP CAVM_DTX_ECMP_BCST_RSP_FUNC()
static inline uint64_t CAVM_DTX_ECMP_BCST_RSP_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_ECMP_BCST_RSP_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KA))
        return 0x87e0fe2b8080ll;
    __cavm_csr_fatal("DTX_ECMP_BCST_RSP", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_ECMP_BCST_RSP cavm_dtx_ecmp_bcst_rsp_t
#define bustype_CAVM_DTX_ECMP_BCST_RSP CSR_TYPE_RSL
#define basename_CAVM_DTX_ECMP_BCST_RSP "DTX_ECMP_BCST_RSP"
#define busnum_CAVM_DTX_ECMP_BCST_RSP 0
#define arguments_CAVM_DTX_ECMP_BCST_RSP -1,-1,-1,-1

/**
 * Register (RSL) dtx_ecmp_ctl
 *
 * INTERNAL: DTX ECMP Control Register
 */
union cavm_dtx_ecmp_ctl
{
    uint64_t u;
    struct cavm_dtx_ecmp_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_2_3          : 2;
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
#else /* Word 0 - Little Endian */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t reserved_2_3          : 2;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_ecmp_ctl_s cn; */
};
typedef union cavm_dtx_ecmp_ctl cavm_dtx_ecmp_ctl_t;

#define CAVM_DTX_ECMP_CTL CAVM_DTX_ECMP_CTL_FUNC()
static inline uint64_t CAVM_DTX_ECMP_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_ECMP_CTL_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KA))
        return 0x87e0fe2b8060ll;
    __cavm_csr_fatal("DTX_ECMP_CTL", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_ECMP_CTL cavm_dtx_ecmp_ctl_t
#define bustype_CAVM_DTX_ECMP_CTL CSR_TYPE_RSL
#define basename_CAVM_DTX_ECMP_CTL "DTX_ECMP_CTL"
#define busnum_CAVM_DTX_ECMP_CTL 0
#define arguments_CAVM_DTX_ECMP_CTL -1,-1,-1,-1

/**
 * Register (RSL) dtx_ecmp_dat#
 *
 * INTERNAL: DTX ECMP Raw Data Register
 */
union cavm_dtx_ecmp_datx
{
    uint64_t u;
    struct cavm_dtx_ecmp_datx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
#else /* Word 0 - Little Endian */
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_ecmp_datx_s cn; */
};
typedef union cavm_dtx_ecmp_datx cavm_dtx_ecmp_datx_t;

static inline uint64_t CAVM_DTX_ECMP_DATX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_ECMP_DATX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x87e0fe2b8040ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_ECMP_DATX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_ECMP_DATX(a) cavm_dtx_ecmp_datx_t
#define bustype_CAVM_DTX_ECMP_DATX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_ECMP_DATX(a) "DTX_ECMP_DATX"
#define busnum_CAVM_DTX_ECMP_DATX(a) (a)
#define arguments_CAVM_DTX_ECMP_DATX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_ecmp_ena#
 *
 * INTERNAL: DTX ECMP Data Enable Register
 */
union cavm_dtx_ecmp_enax
{
    uint64_t u;
    struct cavm_dtx_ecmp_enax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_ecmp_enax_s cn; */
};
typedef union cavm_dtx_ecmp_enax cavm_dtx_ecmp_enax_t;

static inline uint64_t CAVM_DTX_ECMP_ENAX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_ECMP_ENAX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x87e0fe2b8020ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_ECMP_ENAX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_ECMP_ENAX(a) cavm_dtx_ecmp_enax_t
#define bustype_CAVM_DTX_ECMP_ENAX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_ECMP_ENAX(a) "DTX_ECMP_ENAX"
#define busnum_CAVM_DTX_ECMP_ENAX(a) (a)
#define arguments_CAVM_DTX_ECMP_ENAX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_ecmp_sel#
 *
 * INTERNAL: DTX ECMP Select Register
 */
union cavm_dtx_ecmp_selx
{
    uint64_t u;
    struct cavm_dtx_ecmp_selx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
#else /* Word 0 - Little Endian */
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_ecmp_selx_s cn; */
};
typedef union cavm_dtx_ecmp_selx cavm_dtx_ecmp_selx_t;

static inline uint64_t CAVM_DTX_ECMP_SELX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_ECMP_SELX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x87e0fe2b8000ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_ECMP_SELX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_ECMP_SELX(a) cavm_dtx_ecmp_selx_t
#define bustype_CAVM_DTX_ECMP_SELX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_ECMP_SELX(a) "DTX_ECMP_SELX"
#define busnum_CAVM_DTX_ECMP_SELX(a) (a)
#define arguments_CAVM_DTX_ECMP_SELX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_edec#_bcst_rsp
 *
 * INTERNAL: DTX EDEC Control Register
 */
union cavm_dtx_edecx_bcst_rsp
{
    uint64_t u;
    struct cavm_dtx_edecx_bcst_rsp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_edecx_bcst_rsp_s cn; */
};
typedef union cavm_dtx_edecx_bcst_rsp cavm_dtx_edecx_bcst_rsp_t;

static inline uint64_t CAVM_DTX_EDECX_BCST_RSP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_EDECX_BCST_RSP(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=2))
        return 0x87e0fe2b0080ll + 0x2000ll * ((a) & 0x3);
    __cavm_csr_fatal("DTX_EDECX_BCST_RSP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_EDECX_BCST_RSP(a) cavm_dtx_edecx_bcst_rsp_t
#define bustype_CAVM_DTX_EDECX_BCST_RSP(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_EDECX_BCST_RSP(a) "DTX_EDECX_BCST_RSP"
#define busnum_CAVM_DTX_EDECX_BCST_RSP(a) (a)
#define arguments_CAVM_DTX_EDECX_BCST_RSP(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_edec#_ctl
 *
 * INTERNAL: DTX EDEC Control Register
 */
union cavm_dtx_edecx_ctl
{
    uint64_t u;
    struct cavm_dtx_edecx_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_2_3          : 2;
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
#else /* Word 0 - Little Endian */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t reserved_2_3          : 2;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_edecx_ctl_s cn; */
};
typedef union cavm_dtx_edecx_ctl cavm_dtx_edecx_ctl_t;

static inline uint64_t CAVM_DTX_EDECX_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_EDECX_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=2))
        return 0x87e0fe2b0060ll + 0x2000ll * ((a) & 0x3);
    __cavm_csr_fatal("DTX_EDECX_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_EDECX_CTL(a) cavm_dtx_edecx_ctl_t
#define bustype_CAVM_DTX_EDECX_CTL(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_EDECX_CTL(a) "DTX_EDECX_CTL"
#define busnum_CAVM_DTX_EDECX_CTL(a) (a)
#define arguments_CAVM_DTX_EDECX_CTL(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_edec#_dat#
 *
 * INTERNAL: DTX EDEC Raw Data Register
 */
union cavm_dtx_edecx_datx
{
    uint64_t u;
    struct cavm_dtx_edecx_datx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
#else /* Word 0 - Little Endian */
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_edecx_datx_s cn; */
};
typedef union cavm_dtx_edecx_datx cavm_dtx_edecx_datx_t;

static inline uint64_t CAVM_DTX_EDECX_DATX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_EDECX_DATX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=2) && (b<=1)))
        return 0x87e0fe2b0040ll + 0x2000ll * ((a) & 0x3) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_EDECX_DATX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_EDECX_DATX(a,b) cavm_dtx_edecx_datx_t
#define bustype_CAVM_DTX_EDECX_DATX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_EDECX_DATX(a,b) "DTX_EDECX_DATX"
#define busnum_CAVM_DTX_EDECX_DATX(a,b) (a)
#define arguments_CAVM_DTX_EDECX_DATX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_edec#_ena#
 *
 * INTERNAL: DTX EDEC Data Enable Register
 */
union cavm_dtx_edecx_enax
{
    uint64_t u;
    struct cavm_dtx_edecx_enax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_edecx_enax_s cn; */
};
typedef union cavm_dtx_edecx_enax cavm_dtx_edecx_enax_t;

static inline uint64_t CAVM_DTX_EDECX_ENAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_EDECX_ENAX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=2) && (b<=1)))
        return 0x87e0fe2b0020ll + 0x2000ll * ((a) & 0x3) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_EDECX_ENAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_EDECX_ENAX(a,b) cavm_dtx_edecx_enax_t
#define bustype_CAVM_DTX_EDECX_ENAX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_EDECX_ENAX(a,b) "DTX_EDECX_ENAX"
#define busnum_CAVM_DTX_EDECX_ENAX(a,b) (a)
#define arguments_CAVM_DTX_EDECX_ENAX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_edec#_sel#
 *
 * INTERNAL: DTX EDEC Select Register
 */
union cavm_dtx_edecx_selx
{
    uint64_t u;
    struct cavm_dtx_edecx_selx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
#else /* Word 0 - Little Endian */
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_edecx_selx_s cn; */
};
typedef union cavm_dtx_edecx_selx cavm_dtx_edecx_selx_t;

static inline uint64_t CAVM_DTX_EDECX_SELX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_EDECX_SELX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=2) && (b<=1)))
        return 0x87e0fe2b0000ll + 0x2000ll * ((a) & 0x3) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_EDECX_SELX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_EDECX_SELX(a,b) cavm_dtx_edecx_selx_t
#define bustype_CAVM_DTX_EDECX_SELX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_EDECX_SELX(a,b) "DTX_EDECX_SELX"
#define busnum_CAVM_DTX_EDECX_SELX(a,b) (a)
#define arguments_CAVM_DTX_EDECX_SELX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_edec_bcst_rsp
 *
 * INTERNAL: DTX EDEC Control Register
 */
union cavm_dtx_edec_bcst_rsp
{
    uint64_t u;
    struct cavm_dtx_edec_bcst_rsp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_edec_bcst_rsp_s cn; */
};
typedef union cavm_dtx_edec_bcst_rsp cavm_dtx_edec_bcst_rsp_t;

#define CAVM_DTX_EDEC_BCST_RSP CAVM_DTX_EDEC_BCST_RSP_FUNC()
static inline uint64_t CAVM_DTX_EDEC_BCST_RSP_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_EDEC_BCST_RSP_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KA))
        return 0x87e0fe2b0080ll;
    __cavm_csr_fatal("DTX_EDEC_BCST_RSP", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_EDEC_BCST_RSP cavm_dtx_edec_bcst_rsp_t
#define bustype_CAVM_DTX_EDEC_BCST_RSP CSR_TYPE_RSL
#define basename_CAVM_DTX_EDEC_BCST_RSP "DTX_EDEC_BCST_RSP"
#define busnum_CAVM_DTX_EDEC_BCST_RSP 0
#define arguments_CAVM_DTX_EDEC_BCST_RSP -1,-1,-1,-1

/**
 * Register (RSL) dtx_edec_ctl
 *
 * INTERNAL: DTX EDEC Control Register
 */
union cavm_dtx_edec_ctl
{
    uint64_t u;
    struct cavm_dtx_edec_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_2_3          : 2;
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
#else /* Word 0 - Little Endian */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t reserved_2_3          : 2;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_edec_ctl_s cn; */
};
typedef union cavm_dtx_edec_ctl cavm_dtx_edec_ctl_t;

#define CAVM_DTX_EDEC_CTL CAVM_DTX_EDEC_CTL_FUNC()
static inline uint64_t CAVM_DTX_EDEC_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_EDEC_CTL_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KA))
        return 0x87e0fe2b0060ll;
    __cavm_csr_fatal("DTX_EDEC_CTL", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_EDEC_CTL cavm_dtx_edec_ctl_t
#define bustype_CAVM_DTX_EDEC_CTL CSR_TYPE_RSL
#define basename_CAVM_DTX_EDEC_CTL "DTX_EDEC_CTL"
#define busnum_CAVM_DTX_EDEC_CTL 0
#define arguments_CAVM_DTX_EDEC_CTL -1,-1,-1,-1

/**
 * Register (RSL) dtx_edec_dat#
 *
 * INTERNAL: DTX EDEC Raw Data Register
 */
union cavm_dtx_edec_datx
{
    uint64_t u;
    struct cavm_dtx_edec_datx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
#else /* Word 0 - Little Endian */
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_edec_datx_s cn; */
};
typedef union cavm_dtx_edec_datx cavm_dtx_edec_datx_t;

static inline uint64_t CAVM_DTX_EDEC_DATX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_EDEC_DATX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x87e0fe2b0040ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_EDEC_DATX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_EDEC_DATX(a) cavm_dtx_edec_datx_t
#define bustype_CAVM_DTX_EDEC_DATX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_EDEC_DATX(a) "DTX_EDEC_DATX"
#define busnum_CAVM_DTX_EDEC_DATX(a) (a)
#define arguments_CAVM_DTX_EDEC_DATX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_edec_ena#
 *
 * INTERNAL: DTX EDEC Data Enable Register
 */
union cavm_dtx_edec_enax
{
    uint64_t u;
    struct cavm_dtx_edec_enax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_edec_enax_s cn; */
};
typedef union cavm_dtx_edec_enax cavm_dtx_edec_enax_t;

static inline uint64_t CAVM_DTX_EDEC_ENAX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_EDEC_ENAX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x87e0fe2b0020ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_EDEC_ENAX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_EDEC_ENAX(a) cavm_dtx_edec_enax_t
#define bustype_CAVM_DTX_EDEC_ENAX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_EDEC_ENAX(a) "DTX_EDEC_ENAX"
#define busnum_CAVM_DTX_EDEC_ENAX(a) (a)
#define arguments_CAVM_DTX_EDEC_ENAX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_edec_sel#
 *
 * INTERNAL: DTX EDEC Select Register
 */
union cavm_dtx_edec_selx
{
    uint64_t u;
    struct cavm_dtx_edec_selx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
#else /* Word 0 - Little Endian */
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_edec_selx_s cn; */
};
typedef union cavm_dtx_edec_selx cavm_dtx_edec_selx_t;

static inline uint64_t CAVM_DTX_EDEC_SELX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_EDEC_SELX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x87e0fe2b0000ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_EDEC_SELX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_EDEC_SELX(a) cavm_dtx_edec_selx_t
#define bustype_CAVM_DTX_EDEC_SELX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_EDEC_SELX(a) "DTX_EDEC_SELX"
#define busnum_CAVM_DTX_EDEC_SELX(a) (a)
#define arguments_CAVM_DTX_EDEC_SELX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_edft#_bcst_rsp
 *
 * INTERNAL: DTX EDFT Control Register
 */
union cavm_dtx_edftx_bcst_rsp
{
    uint64_t u;
    struct cavm_dtx_edftx_bcst_rsp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_edftx_bcst_rsp_s cn; */
};
typedef union cavm_dtx_edftx_bcst_rsp cavm_dtx_edftx_bcst_rsp_t;

static inline uint64_t CAVM_DTX_EDFTX_BCST_RSP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_EDFTX_BCST_RSP(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x87e0fe310080ll + 0x2000ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_EDFTX_BCST_RSP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_EDFTX_BCST_RSP(a) cavm_dtx_edftx_bcst_rsp_t
#define bustype_CAVM_DTX_EDFTX_BCST_RSP(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_EDFTX_BCST_RSP(a) "DTX_EDFTX_BCST_RSP"
#define busnum_CAVM_DTX_EDFTX_BCST_RSP(a) (a)
#define arguments_CAVM_DTX_EDFTX_BCST_RSP(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_edft#_ctl
 *
 * INTERNAL: DTX EDFT Control Register
 */
union cavm_dtx_edftx_ctl
{
    uint64_t u;
    struct cavm_dtx_edftx_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_2_3          : 2;
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
#else /* Word 0 - Little Endian */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t reserved_2_3          : 2;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_edftx_ctl_s cn; */
};
typedef union cavm_dtx_edftx_ctl cavm_dtx_edftx_ctl_t;

static inline uint64_t CAVM_DTX_EDFTX_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_EDFTX_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x87e0fe310060ll + 0x2000ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_EDFTX_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_EDFTX_CTL(a) cavm_dtx_edftx_ctl_t
#define bustype_CAVM_DTX_EDFTX_CTL(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_EDFTX_CTL(a) "DTX_EDFTX_CTL"
#define busnum_CAVM_DTX_EDFTX_CTL(a) (a)
#define arguments_CAVM_DTX_EDFTX_CTL(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_edft#_dat#
 *
 * INTERNAL: DTX EDFT Raw Data Register
 */
union cavm_dtx_edftx_datx
{
    uint64_t u;
    struct cavm_dtx_edftx_datx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
#else /* Word 0 - Little Endian */
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_edftx_datx_s cn; */
};
typedef union cavm_dtx_edftx_datx cavm_dtx_edftx_datx_t;

static inline uint64_t CAVM_DTX_EDFTX_DATX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_EDFTX_DATX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=1) && (b<=1)))
        return 0x87e0fe310040ll + 0x2000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_EDFTX_DATX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_EDFTX_DATX(a,b) cavm_dtx_edftx_datx_t
#define bustype_CAVM_DTX_EDFTX_DATX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_EDFTX_DATX(a,b) "DTX_EDFTX_DATX"
#define busnum_CAVM_DTX_EDFTX_DATX(a,b) (a)
#define arguments_CAVM_DTX_EDFTX_DATX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_edft#_ena#
 *
 * INTERNAL: DTX EDFT Data Enable Register
 */
union cavm_dtx_edftx_enax
{
    uint64_t u;
    struct cavm_dtx_edftx_enax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_edftx_enax_s cn; */
};
typedef union cavm_dtx_edftx_enax cavm_dtx_edftx_enax_t;

static inline uint64_t CAVM_DTX_EDFTX_ENAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_EDFTX_ENAX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=1) && (b<=1)))
        return 0x87e0fe310020ll + 0x2000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_EDFTX_ENAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_EDFTX_ENAX(a,b) cavm_dtx_edftx_enax_t
#define bustype_CAVM_DTX_EDFTX_ENAX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_EDFTX_ENAX(a,b) "DTX_EDFTX_ENAX"
#define busnum_CAVM_DTX_EDFTX_ENAX(a,b) (a)
#define arguments_CAVM_DTX_EDFTX_ENAX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_edft#_sel#
 *
 * INTERNAL: DTX EDFT Select Register
 */
union cavm_dtx_edftx_selx
{
    uint64_t u;
    struct cavm_dtx_edftx_selx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
#else /* Word 0 - Little Endian */
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_edftx_selx_s cn; */
};
typedef union cavm_dtx_edftx_selx cavm_dtx_edftx_selx_t;

static inline uint64_t CAVM_DTX_EDFTX_SELX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_EDFTX_SELX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=1) && (b<=1)))
        return 0x87e0fe310000ll + 0x2000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_EDFTX_SELX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_EDFTX_SELX(a,b) cavm_dtx_edftx_selx_t
#define bustype_CAVM_DTX_EDFTX_SELX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_EDFTX_SELX(a,b) "DTX_EDFTX_SELX"
#define busnum_CAVM_DTX_EDFTX_SELX(a,b) (a)
#define arguments_CAVM_DTX_EDFTX_SELX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_ehsm_bcst_rsp
 *
 * INTERNAL: DTX EHSM Control Register
 */
union cavm_dtx_ehsm_bcst_rsp
{
    uint64_t u;
    struct cavm_dtx_ehsm_bcst_rsp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_ehsm_bcst_rsp_s cn; */
};
typedef union cavm_dtx_ehsm_bcst_rsp cavm_dtx_ehsm_bcst_rsp_t;

#define CAVM_DTX_EHSM_BCST_RSP CAVM_DTX_EHSM_BCST_RSP_FUNC()
static inline uint64_t CAVM_DTX_EHSM_BCST_RSP_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_EHSM_BCST_RSP_FUNC(void)
{
    return 0x87e0fe816080ll;
}

#define typedef_CAVM_DTX_EHSM_BCST_RSP cavm_dtx_ehsm_bcst_rsp_t
#define bustype_CAVM_DTX_EHSM_BCST_RSP CSR_TYPE_RSL
#define basename_CAVM_DTX_EHSM_BCST_RSP "DTX_EHSM_BCST_RSP"
#define busnum_CAVM_DTX_EHSM_BCST_RSP 0
#define arguments_CAVM_DTX_EHSM_BCST_RSP -1,-1,-1,-1

/**
 * Register (RSL) dtx_ehsm_ctl
 *
 * INTERNAL: DTX EHSM Control Register
 */
union cavm_dtx_ehsm_ctl
{
    uint64_t u;
    struct cavm_dtx_ehsm_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_2_3          : 2;
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
#else /* Word 0 - Little Endian */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t reserved_2_3          : 2;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_ehsm_ctl_s cn; */
};
typedef union cavm_dtx_ehsm_ctl cavm_dtx_ehsm_ctl_t;

#define CAVM_DTX_EHSM_CTL CAVM_DTX_EHSM_CTL_FUNC()
static inline uint64_t CAVM_DTX_EHSM_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_EHSM_CTL_FUNC(void)
{
    return 0x87e0fe816060ll;
}

#define typedef_CAVM_DTX_EHSM_CTL cavm_dtx_ehsm_ctl_t
#define bustype_CAVM_DTX_EHSM_CTL CSR_TYPE_RSL
#define basename_CAVM_DTX_EHSM_CTL "DTX_EHSM_CTL"
#define busnum_CAVM_DTX_EHSM_CTL 0
#define arguments_CAVM_DTX_EHSM_CTL -1,-1,-1,-1

/**
 * Register (RSL) dtx_ehsm_dat#
 *
 * INTERNAL: DTX EHSM Raw Data Register
 */
union cavm_dtx_ehsm_datx
{
    uint64_t u;
    struct cavm_dtx_ehsm_datx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
#else /* Word 0 - Little Endian */
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_ehsm_datx_s cn; */
};
typedef union cavm_dtx_ehsm_datx cavm_dtx_ehsm_datx_t;

static inline uint64_t CAVM_DTX_EHSM_DATX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_EHSM_DATX(uint64_t a)
{
    if (a<=1)
        return 0x87e0fe816040ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_EHSM_DATX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_EHSM_DATX(a) cavm_dtx_ehsm_datx_t
#define bustype_CAVM_DTX_EHSM_DATX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_EHSM_DATX(a) "DTX_EHSM_DATX"
#define busnum_CAVM_DTX_EHSM_DATX(a) (a)
#define arguments_CAVM_DTX_EHSM_DATX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_ehsm_ena#
 *
 * INTERNAL: DTX EHSM Data Enable Register
 */
union cavm_dtx_ehsm_enax
{
    uint64_t u;
    struct cavm_dtx_ehsm_enax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_ehsm_enax_s cn; */
};
typedef union cavm_dtx_ehsm_enax cavm_dtx_ehsm_enax_t;

static inline uint64_t CAVM_DTX_EHSM_ENAX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_EHSM_ENAX(uint64_t a)
{
    if (a<=1)
        return 0x87e0fe816020ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_EHSM_ENAX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_EHSM_ENAX(a) cavm_dtx_ehsm_enax_t
#define bustype_CAVM_DTX_EHSM_ENAX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_EHSM_ENAX(a) "DTX_EHSM_ENAX"
#define busnum_CAVM_DTX_EHSM_ENAX(a) (a)
#define arguments_CAVM_DTX_EHSM_ENAX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_ehsm_sel#
 *
 * INTERNAL: DTX EHSM Select Register
 */
union cavm_dtx_ehsm_selx
{
    uint64_t u;
    struct cavm_dtx_ehsm_selx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
#else /* Word 0 - Little Endian */
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_ehsm_selx_s cn; */
};
typedef union cavm_dtx_ehsm_selx cavm_dtx_ehsm_selx_t;

static inline uint64_t CAVM_DTX_EHSM_SELX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_EHSM_SELX(uint64_t a)
{
    if (a<=1)
        return 0x87e0fe816000ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_EHSM_SELX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_EHSM_SELX(a) cavm_dtx_ehsm_selx_t
#define bustype_CAVM_DTX_EHSM_SELX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_EHSM_SELX(a) "DTX_EHSM_SELX"
#define busnum_CAVM_DTX_EHSM_SELX(a) (a)
#define arguments_CAVM_DTX_EHSM_SELX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_gic_bcst_rsp
 *
 * INTERNAL: DTX GIC Control Register
 */
union cavm_dtx_gic_bcst_rsp
{
    uint64_t u;
    struct cavm_dtx_gic_bcst_rsp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_gic_bcst_rsp_s cn; */
};
typedef union cavm_dtx_gic_bcst_rsp cavm_dtx_gic_bcst_rsp_t;

#define CAVM_DTX_GIC_BCST_RSP CAVM_DTX_GIC_BCST_RSP_FUNC()
static inline uint64_t CAVM_DTX_GIC_BCST_RSP_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_GIC_BCST_RSP_FUNC(void)
{
    return 0x87e0fe802080ll;
}

#define typedef_CAVM_DTX_GIC_BCST_RSP cavm_dtx_gic_bcst_rsp_t
#define bustype_CAVM_DTX_GIC_BCST_RSP CSR_TYPE_RSL
#define basename_CAVM_DTX_GIC_BCST_RSP "DTX_GIC_BCST_RSP"
#define busnum_CAVM_DTX_GIC_BCST_RSP 0
#define arguments_CAVM_DTX_GIC_BCST_RSP -1,-1,-1,-1

/**
 * Register (RSL) dtx_gic_ctl
 *
 * INTERNAL: DTX GIC Control Register
 */
union cavm_dtx_gic_ctl
{
    uint64_t u;
    struct cavm_dtx_gic_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_2_3          : 2;
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
#else /* Word 0 - Little Endian */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t reserved_2_3          : 2;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_gic_ctl_s cn; */
};
typedef union cavm_dtx_gic_ctl cavm_dtx_gic_ctl_t;

#define CAVM_DTX_GIC_CTL CAVM_DTX_GIC_CTL_FUNC()
static inline uint64_t CAVM_DTX_GIC_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_GIC_CTL_FUNC(void)
{
    return 0x87e0fe802060ll;
}

#define typedef_CAVM_DTX_GIC_CTL cavm_dtx_gic_ctl_t
#define bustype_CAVM_DTX_GIC_CTL CSR_TYPE_RSL
#define basename_CAVM_DTX_GIC_CTL "DTX_GIC_CTL"
#define busnum_CAVM_DTX_GIC_CTL 0
#define arguments_CAVM_DTX_GIC_CTL -1,-1,-1,-1

/**
 * Register (RSL) dtx_gic_dat#
 *
 * INTERNAL: DTX GIC Raw Data Register
 */
union cavm_dtx_gic_datx
{
    uint64_t u;
    struct cavm_dtx_gic_datx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
#else /* Word 0 - Little Endian */
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_gic_datx_s cn; */
};
typedef union cavm_dtx_gic_datx cavm_dtx_gic_datx_t;

static inline uint64_t CAVM_DTX_GIC_DATX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_GIC_DATX(uint64_t a)
{
    if (a<=1)
        return 0x87e0fe802040ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_GIC_DATX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_GIC_DATX(a) cavm_dtx_gic_datx_t
#define bustype_CAVM_DTX_GIC_DATX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_GIC_DATX(a) "DTX_GIC_DATX"
#define busnum_CAVM_DTX_GIC_DATX(a) (a)
#define arguments_CAVM_DTX_GIC_DATX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_gic_ena#
 *
 * INTERNAL: DTX GIC Data Enable Register
 */
union cavm_dtx_gic_enax
{
    uint64_t u;
    struct cavm_dtx_gic_enax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_gic_enax_s cn; */
};
typedef union cavm_dtx_gic_enax cavm_dtx_gic_enax_t;

static inline uint64_t CAVM_DTX_GIC_ENAX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_GIC_ENAX(uint64_t a)
{
    if (a<=1)
        return 0x87e0fe802020ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_GIC_ENAX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_GIC_ENAX(a) cavm_dtx_gic_enax_t
#define bustype_CAVM_DTX_GIC_ENAX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_GIC_ENAX(a) "DTX_GIC_ENAX"
#define busnum_CAVM_DTX_GIC_ENAX(a) (a)
#define arguments_CAVM_DTX_GIC_ENAX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_gic_sel#
 *
 * INTERNAL: DTX GIC Select Register
 */
union cavm_dtx_gic_selx
{
    uint64_t u;
    struct cavm_dtx_gic_selx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
#else /* Word 0 - Little Endian */
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_gic_selx_s cn; */
};
typedef union cavm_dtx_gic_selx cavm_dtx_gic_selx_t;

static inline uint64_t CAVM_DTX_GIC_SELX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_GIC_SELX(uint64_t a)
{
    if (a<=1)
        return 0x87e0fe802000ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_GIC_SELX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_GIC_SELX(a) cavm_dtx_gic_selx_t
#define bustype_CAVM_DTX_GIC_SELX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_GIC_SELX(a) "DTX_GIC_SELX"
#define busnum_CAVM_DTX_GIC_SELX(a) (a)
#define arguments_CAVM_DTX_GIC_SELX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_gti_bcst_rsp
 *
 * INTERNAL: DTX GTI Control Register
 */
union cavm_dtx_gti_bcst_rsp
{
    uint64_t u;
    struct cavm_dtx_gti_bcst_rsp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_gti_bcst_rsp_s cn; */
};
typedef union cavm_dtx_gti_bcst_rsp cavm_dtx_gti_bcst_rsp_t;

#define CAVM_DTX_GTI_BCST_RSP CAVM_DTX_GTI_BCST_RSP_FUNC()
static inline uint64_t CAVM_DTX_GTI_BCST_RSP_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_GTI_BCST_RSP_FUNC(void)
{
    return 0x87e0fe804080ll;
}

#define typedef_CAVM_DTX_GTI_BCST_RSP cavm_dtx_gti_bcst_rsp_t
#define bustype_CAVM_DTX_GTI_BCST_RSP CSR_TYPE_RSL
#define basename_CAVM_DTX_GTI_BCST_RSP "DTX_GTI_BCST_RSP"
#define busnum_CAVM_DTX_GTI_BCST_RSP 0
#define arguments_CAVM_DTX_GTI_BCST_RSP -1,-1,-1,-1

/**
 * Register (RSL) dtx_gti_ctl
 *
 * INTERNAL: DTX GTI Control Register
 */
union cavm_dtx_gti_ctl
{
    uint64_t u;
    struct cavm_dtx_gti_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_2_3          : 2;
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
#else /* Word 0 - Little Endian */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t reserved_2_3          : 2;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_gti_ctl_s cn; */
};
typedef union cavm_dtx_gti_ctl cavm_dtx_gti_ctl_t;

#define CAVM_DTX_GTI_CTL CAVM_DTX_GTI_CTL_FUNC()
static inline uint64_t CAVM_DTX_GTI_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_GTI_CTL_FUNC(void)
{
    return 0x87e0fe804060ll;
}

#define typedef_CAVM_DTX_GTI_CTL cavm_dtx_gti_ctl_t
#define bustype_CAVM_DTX_GTI_CTL CSR_TYPE_RSL
#define basename_CAVM_DTX_GTI_CTL "DTX_GTI_CTL"
#define busnum_CAVM_DTX_GTI_CTL 0
#define arguments_CAVM_DTX_GTI_CTL -1,-1,-1,-1

/**
 * Register (RSL) dtx_gti_dat#
 *
 * INTERNAL: DTX GTI Raw Data Register
 */
union cavm_dtx_gti_datx
{
    uint64_t u;
    struct cavm_dtx_gti_datx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
#else /* Word 0 - Little Endian */
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_gti_datx_s cn; */
};
typedef union cavm_dtx_gti_datx cavm_dtx_gti_datx_t;

static inline uint64_t CAVM_DTX_GTI_DATX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_GTI_DATX(uint64_t a)
{
    if (a<=1)
        return 0x87e0fe804040ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_GTI_DATX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_GTI_DATX(a) cavm_dtx_gti_datx_t
#define bustype_CAVM_DTX_GTI_DATX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_GTI_DATX(a) "DTX_GTI_DATX"
#define busnum_CAVM_DTX_GTI_DATX(a) (a)
#define arguments_CAVM_DTX_GTI_DATX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_gti_ena#
 *
 * INTERNAL: DTX GTI Data Enable Register
 */
union cavm_dtx_gti_enax
{
    uint64_t u;
    struct cavm_dtx_gti_enax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_gti_enax_s cn; */
};
typedef union cavm_dtx_gti_enax cavm_dtx_gti_enax_t;

static inline uint64_t CAVM_DTX_GTI_ENAX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_GTI_ENAX(uint64_t a)
{
    if (a<=1)
        return 0x87e0fe804020ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_GTI_ENAX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_GTI_ENAX(a) cavm_dtx_gti_enax_t
#define bustype_CAVM_DTX_GTI_ENAX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_GTI_ENAX(a) "DTX_GTI_ENAX"
#define busnum_CAVM_DTX_GTI_ENAX(a) (a)
#define arguments_CAVM_DTX_GTI_ENAX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_gti_sel#
 *
 * INTERNAL: DTX GTI Select Register
 */
union cavm_dtx_gti_selx
{
    uint64_t u;
    struct cavm_dtx_gti_selx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
#else /* Word 0 - Little Endian */
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_gti_selx_s cn; */
};
typedef union cavm_dtx_gti_selx cavm_dtx_gti_selx_t;

static inline uint64_t CAVM_DTX_GTI_SELX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_GTI_SELX(uint64_t a)
{
    if (a<=1)
        return 0x87e0fe804000ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_GTI_SELX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_GTI_SELX(a) cavm_dtx_gti_selx_t
#define bustype_CAVM_DTX_GTI_SELX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_GTI_SELX(a) "DTX_GTI_SELX"
#define busnum_CAVM_DTX_GTI_SELX(a) (a)
#define arguments_CAVM_DTX_GTI_SELX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_iobn#_bcst_rsp
 *
 * INTERNAL: DTX IOBN Control Register
 */
union cavm_dtx_iobnx_bcst_rsp
{
    uint64_t u;
    struct cavm_dtx_iobnx_bcst_rsp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_iobnx_bcst_rsp_s cn; */
};
typedef union cavm_dtx_iobnx_bcst_rsp cavm_dtx_iobnx_bcst_rsp_t;

static inline uint64_t CAVM_DTX_IOBNX_BCST_RSP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_IOBNX_BCST_RSP(uint64_t a)
{
    if (a<=7)
        return 0x87e0fe240080ll + 0x2000ll * ((a) & 0x7);
    __cavm_csr_fatal("DTX_IOBNX_BCST_RSP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_IOBNX_BCST_RSP(a) cavm_dtx_iobnx_bcst_rsp_t
#define bustype_CAVM_DTX_IOBNX_BCST_RSP(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_IOBNX_BCST_RSP(a) "DTX_IOBNX_BCST_RSP"
#define busnum_CAVM_DTX_IOBNX_BCST_RSP(a) (a)
#define arguments_CAVM_DTX_IOBNX_BCST_RSP(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_iobn#_ctl
 *
 * INTERNAL: DTX IOBN Control Register
 */
union cavm_dtx_iobnx_ctl
{
    uint64_t u;
    struct cavm_dtx_iobnx_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_2_3          : 2;
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
#else /* Word 0 - Little Endian */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t reserved_2_3          : 2;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_iobnx_ctl_s cn; */
};
typedef union cavm_dtx_iobnx_ctl cavm_dtx_iobnx_ctl_t;

static inline uint64_t CAVM_DTX_IOBNX_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_IOBNX_CTL(uint64_t a)
{
    if (a<=7)
        return 0x87e0fe240060ll + 0x2000ll * ((a) & 0x7);
    __cavm_csr_fatal("DTX_IOBNX_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_IOBNX_CTL(a) cavm_dtx_iobnx_ctl_t
#define bustype_CAVM_DTX_IOBNX_CTL(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_IOBNX_CTL(a) "DTX_IOBNX_CTL"
#define busnum_CAVM_DTX_IOBNX_CTL(a) (a)
#define arguments_CAVM_DTX_IOBNX_CTL(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_iobn#_dat#
 *
 * INTERNAL: DTX IOBN Raw Data Register
 */
union cavm_dtx_iobnx_datx
{
    uint64_t u;
    struct cavm_dtx_iobnx_datx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
#else /* Word 0 - Little Endian */
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_iobnx_datx_s cn; */
};
typedef union cavm_dtx_iobnx_datx cavm_dtx_iobnx_datx_t;

static inline uint64_t CAVM_DTX_IOBNX_DATX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_IOBNX_DATX(uint64_t a, uint64_t b)
{
    if ((a<=7) && (b<=1))
        return 0x87e0fe240040ll + 0x2000ll * ((a) & 0x7) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_IOBNX_DATX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_IOBNX_DATX(a,b) cavm_dtx_iobnx_datx_t
#define bustype_CAVM_DTX_IOBNX_DATX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_IOBNX_DATX(a,b) "DTX_IOBNX_DATX"
#define busnum_CAVM_DTX_IOBNX_DATX(a,b) (a)
#define arguments_CAVM_DTX_IOBNX_DATX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_iobn#_ena#
 *
 * INTERNAL: DTX IOBN Data Enable Register
 */
union cavm_dtx_iobnx_enax
{
    uint64_t u;
    struct cavm_dtx_iobnx_enax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_iobnx_enax_s cn; */
};
typedef union cavm_dtx_iobnx_enax cavm_dtx_iobnx_enax_t;

static inline uint64_t CAVM_DTX_IOBNX_ENAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_IOBNX_ENAX(uint64_t a, uint64_t b)
{
    if ((a<=7) && (b<=1))
        return 0x87e0fe240020ll + 0x2000ll * ((a) & 0x7) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_IOBNX_ENAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_IOBNX_ENAX(a,b) cavm_dtx_iobnx_enax_t
#define bustype_CAVM_DTX_IOBNX_ENAX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_IOBNX_ENAX(a,b) "DTX_IOBNX_ENAX"
#define busnum_CAVM_DTX_IOBNX_ENAX(a,b) (a)
#define arguments_CAVM_DTX_IOBNX_ENAX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_iobn#_inrx_bcst_rsp
 *
 * INTERNAL: DTX IOBN_INRX Control Register
 */
union cavm_dtx_iobnx_inrx_bcst_rsp
{
    uint64_t u;
    struct cavm_dtx_iobnx_inrx_bcst_rsp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_iobnx_inrx_bcst_rsp_s cn; */
};
typedef union cavm_dtx_iobnx_inrx_bcst_rsp cavm_dtx_iobnx_inrx_bcst_rsp_t;

static inline uint64_t CAVM_DTX_IOBNX_INRX_BCST_RSP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_IOBNX_INRX_BCST_RSP(uint64_t a)
{
    if (a<=7)
        return 0x87e0fe250080ll + 0x2000ll * ((a) & 0x7);
    __cavm_csr_fatal("DTX_IOBNX_INRX_BCST_RSP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_IOBNX_INRX_BCST_RSP(a) cavm_dtx_iobnx_inrx_bcst_rsp_t
#define bustype_CAVM_DTX_IOBNX_INRX_BCST_RSP(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_IOBNX_INRX_BCST_RSP(a) "DTX_IOBNX_INRX_BCST_RSP"
#define busnum_CAVM_DTX_IOBNX_INRX_BCST_RSP(a) (a)
#define arguments_CAVM_DTX_IOBNX_INRX_BCST_RSP(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_iobn#_inrx_ctl
 *
 * INTERNAL: DTX IOBN_INRX Control Register
 */
union cavm_dtx_iobnx_inrx_ctl
{
    uint64_t u;
    struct cavm_dtx_iobnx_inrx_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_2_3          : 2;
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
#else /* Word 0 - Little Endian */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t reserved_2_3          : 2;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_iobnx_inrx_ctl_s cn; */
};
typedef union cavm_dtx_iobnx_inrx_ctl cavm_dtx_iobnx_inrx_ctl_t;

static inline uint64_t CAVM_DTX_IOBNX_INRX_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_IOBNX_INRX_CTL(uint64_t a)
{
    if (a<=7)
        return 0x87e0fe250060ll + 0x2000ll * ((a) & 0x7);
    __cavm_csr_fatal("DTX_IOBNX_INRX_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_IOBNX_INRX_CTL(a) cavm_dtx_iobnx_inrx_ctl_t
#define bustype_CAVM_DTX_IOBNX_INRX_CTL(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_IOBNX_INRX_CTL(a) "DTX_IOBNX_INRX_CTL"
#define busnum_CAVM_DTX_IOBNX_INRX_CTL(a) (a)
#define arguments_CAVM_DTX_IOBNX_INRX_CTL(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_iobn#_inrx_dat#
 *
 * INTERNAL: DTX IOBN_INRX Raw Data Register
 */
union cavm_dtx_iobnx_inrx_datx
{
    uint64_t u;
    struct cavm_dtx_iobnx_inrx_datx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
#else /* Word 0 - Little Endian */
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_iobnx_inrx_datx_s cn; */
};
typedef union cavm_dtx_iobnx_inrx_datx cavm_dtx_iobnx_inrx_datx_t;

static inline uint64_t CAVM_DTX_IOBNX_INRX_DATX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_IOBNX_INRX_DATX(uint64_t a, uint64_t b)
{
    if ((a<=7) && (b<=1))
        return 0x87e0fe250040ll + 0x2000ll * ((a) & 0x7) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_IOBNX_INRX_DATX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_IOBNX_INRX_DATX(a,b) cavm_dtx_iobnx_inrx_datx_t
#define bustype_CAVM_DTX_IOBNX_INRX_DATX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_IOBNX_INRX_DATX(a,b) "DTX_IOBNX_INRX_DATX"
#define busnum_CAVM_DTX_IOBNX_INRX_DATX(a,b) (a)
#define arguments_CAVM_DTX_IOBNX_INRX_DATX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_iobn#_inrx_ena#
 *
 * INTERNAL: DTX IOBN_INRX Data Enable Register
 */
union cavm_dtx_iobnx_inrx_enax
{
    uint64_t u;
    struct cavm_dtx_iobnx_inrx_enax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_iobnx_inrx_enax_s cn; */
};
typedef union cavm_dtx_iobnx_inrx_enax cavm_dtx_iobnx_inrx_enax_t;

static inline uint64_t CAVM_DTX_IOBNX_INRX_ENAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_IOBNX_INRX_ENAX(uint64_t a, uint64_t b)
{
    if ((a<=7) && (b<=1))
        return 0x87e0fe250020ll + 0x2000ll * ((a) & 0x7) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_IOBNX_INRX_ENAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_IOBNX_INRX_ENAX(a,b) cavm_dtx_iobnx_inrx_enax_t
#define bustype_CAVM_DTX_IOBNX_INRX_ENAX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_IOBNX_INRX_ENAX(a,b) "DTX_IOBNX_INRX_ENAX"
#define busnum_CAVM_DTX_IOBNX_INRX_ENAX(a,b) (a)
#define arguments_CAVM_DTX_IOBNX_INRX_ENAX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_iobn#_inrx_sel#
 *
 * INTERNAL: DTX IOBN_INRX Select Register
 */
union cavm_dtx_iobnx_inrx_selx
{
    uint64_t u;
    struct cavm_dtx_iobnx_inrx_selx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
#else /* Word 0 - Little Endian */
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_iobnx_inrx_selx_s cn; */
};
typedef union cavm_dtx_iobnx_inrx_selx cavm_dtx_iobnx_inrx_selx_t;

static inline uint64_t CAVM_DTX_IOBNX_INRX_SELX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_IOBNX_INRX_SELX(uint64_t a, uint64_t b)
{
    if ((a<=7) && (b<=1))
        return 0x87e0fe250000ll + 0x2000ll * ((a) & 0x7) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_IOBNX_INRX_SELX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_IOBNX_INRX_SELX(a,b) cavm_dtx_iobnx_inrx_selx_t
#define bustype_CAVM_DTX_IOBNX_INRX_SELX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_IOBNX_INRX_SELX(a,b) "DTX_IOBNX_INRX_SELX"
#define busnum_CAVM_DTX_IOBNX_INRX_SELX(a,b) (a)
#define arguments_CAVM_DTX_IOBNX_INRX_SELX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_iobn#_sel#
 *
 * INTERNAL: DTX IOBN Select Register
 */
union cavm_dtx_iobnx_selx
{
    uint64_t u;
    struct cavm_dtx_iobnx_selx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
#else /* Word 0 - Little Endian */
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_iobnx_selx_s cn; */
};
typedef union cavm_dtx_iobnx_selx cavm_dtx_iobnx_selx_t;

static inline uint64_t CAVM_DTX_IOBNX_SELX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_IOBNX_SELX(uint64_t a, uint64_t b)
{
    if ((a<=7) && (b<=1))
        return 0x87e0fe240000ll + 0x2000ll * ((a) & 0x7) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_IOBNX_SELX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_IOBNX_SELX(a,b) cavm_dtx_iobnx_selx_t
#define bustype_CAVM_DTX_IOBNX_SELX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_IOBNX_SELX(a,b) "DTX_IOBNX_SELX"
#define busnum_CAVM_DTX_IOBNX_SELX(a,b) (a)
#define arguments_CAVM_DTX_IOBNX_SELX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_lbk_bcst_rsp
 *
 * INTERNAL: DTX LBK Control Register
 */
union cavm_dtx_lbk_bcst_rsp
{
    uint64_t u;
    struct cavm_dtx_lbk_bcst_rsp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_lbk_bcst_rsp_s cn; */
};
typedef union cavm_dtx_lbk_bcst_rsp cavm_dtx_lbk_bcst_rsp_t;

#define CAVM_DTX_LBK_BCST_RSP CAVM_DTX_LBK_BCST_RSP_FUNC()
static inline uint64_t CAVM_DTX_LBK_BCST_RSP_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_LBK_BCST_RSP_FUNC(void)
{
    return 0x87e0fe030080ll;
}

#define typedef_CAVM_DTX_LBK_BCST_RSP cavm_dtx_lbk_bcst_rsp_t
#define bustype_CAVM_DTX_LBK_BCST_RSP CSR_TYPE_RSL
#define basename_CAVM_DTX_LBK_BCST_RSP "DTX_LBK_BCST_RSP"
#define busnum_CAVM_DTX_LBK_BCST_RSP 0
#define arguments_CAVM_DTX_LBK_BCST_RSP -1,-1,-1,-1

/**
 * Register (RSL) dtx_lbk_ctl
 *
 * INTERNAL: DTX LBK Control Register
 */
union cavm_dtx_lbk_ctl
{
    uint64_t u;
    struct cavm_dtx_lbk_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_2_3          : 2;
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
#else /* Word 0 - Little Endian */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t reserved_2_3          : 2;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_lbk_ctl_s cn; */
};
typedef union cavm_dtx_lbk_ctl cavm_dtx_lbk_ctl_t;

#define CAVM_DTX_LBK_CTL CAVM_DTX_LBK_CTL_FUNC()
static inline uint64_t CAVM_DTX_LBK_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_LBK_CTL_FUNC(void)
{
    return 0x87e0fe030060ll;
}

#define typedef_CAVM_DTX_LBK_CTL cavm_dtx_lbk_ctl_t
#define bustype_CAVM_DTX_LBK_CTL CSR_TYPE_RSL
#define basename_CAVM_DTX_LBK_CTL "DTX_LBK_CTL"
#define busnum_CAVM_DTX_LBK_CTL 0
#define arguments_CAVM_DTX_LBK_CTL -1,-1,-1,-1

/**
 * Register (RSL) dtx_lbk_dat#
 *
 * INTERNAL: DTX LBK Raw Data Register
 */
union cavm_dtx_lbk_datx
{
    uint64_t u;
    struct cavm_dtx_lbk_datx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
#else /* Word 0 - Little Endian */
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_lbk_datx_s cn; */
};
typedef union cavm_dtx_lbk_datx cavm_dtx_lbk_datx_t;

static inline uint64_t CAVM_DTX_LBK_DATX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_LBK_DATX(uint64_t a)
{
    if (a<=1)
        return 0x87e0fe030040ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_LBK_DATX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_LBK_DATX(a) cavm_dtx_lbk_datx_t
#define bustype_CAVM_DTX_LBK_DATX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_LBK_DATX(a) "DTX_LBK_DATX"
#define busnum_CAVM_DTX_LBK_DATX(a) (a)
#define arguments_CAVM_DTX_LBK_DATX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_lbk_ena#
 *
 * INTERNAL: DTX LBK Data Enable Register
 */
union cavm_dtx_lbk_enax
{
    uint64_t u;
    struct cavm_dtx_lbk_enax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_lbk_enax_s cn; */
};
typedef union cavm_dtx_lbk_enax cavm_dtx_lbk_enax_t;

static inline uint64_t CAVM_DTX_LBK_ENAX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_LBK_ENAX(uint64_t a)
{
    if (a<=1)
        return 0x87e0fe030020ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_LBK_ENAX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_LBK_ENAX(a) cavm_dtx_lbk_enax_t
#define bustype_CAVM_DTX_LBK_ENAX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_LBK_ENAX(a) "DTX_LBK_ENAX"
#define busnum_CAVM_DTX_LBK_ENAX(a) (a)
#define arguments_CAVM_DTX_LBK_ENAX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_lbk_sel#
 *
 * INTERNAL: DTX LBK Select Register
 */
union cavm_dtx_lbk_selx
{
    uint64_t u;
    struct cavm_dtx_lbk_selx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
#else /* Word 0 - Little Endian */
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_lbk_selx_s cn; */
};
typedef union cavm_dtx_lbk_selx cavm_dtx_lbk_selx_t;

static inline uint64_t CAVM_DTX_LBK_SELX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_LBK_SELX(uint64_t a)
{
    if (a<=1)
        return 0x87e0fe030000ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_LBK_SELX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_LBK_SELX(a) cavm_dtx_lbk_selx_t
#define bustype_CAVM_DTX_LBK_SELX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_LBK_SELX(a) "DTX_LBK_SELX"
#define busnum_CAVM_DTX_LBK_SELX(a) (a)
#define arguments_CAVM_DTX_LBK_SELX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_ldec#_bcst_rsp
 *
 * INTERNAL: DTX LDEC Control Register
 */
union cavm_dtx_ldecx_bcst_rsp
{
    uint64_t u;
    struct cavm_dtx_ldecx_bcst_rsp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_ldecx_bcst_rsp_s cn; */
};
typedef union cavm_dtx_ldecx_bcst_rsp cavm_dtx_ldecx_bcst_rsp_t;

static inline uint64_t CAVM_DTX_LDECX_BCST_RSP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_LDECX_BCST_RSP(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x87e0fe2d0080ll + 0x2000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=3))
        return 0x87e0fe2d0080ll + 0x2000ll * ((a) & 0x3);
    __cavm_csr_fatal("DTX_LDECX_BCST_RSP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_LDECX_BCST_RSP(a) cavm_dtx_ldecx_bcst_rsp_t
#define bustype_CAVM_DTX_LDECX_BCST_RSP(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_LDECX_BCST_RSP(a) "DTX_LDECX_BCST_RSP"
#define busnum_CAVM_DTX_LDECX_BCST_RSP(a) (a)
#define arguments_CAVM_DTX_LDECX_BCST_RSP(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_ldec#_ctl
 *
 * INTERNAL: DTX LDEC Control Register
 */
union cavm_dtx_ldecx_ctl
{
    uint64_t u;
    struct cavm_dtx_ldecx_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_2_3          : 2;
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
#else /* Word 0 - Little Endian */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t reserved_2_3          : 2;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_ldecx_ctl_s cn; */
};
typedef union cavm_dtx_ldecx_ctl cavm_dtx_ldecx_ctl_t;

static inline uint64_t CAVM_DTX_LDECX_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_LDECX_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x87e0fe2d0060ll + 0x2000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=3))
        return 0x87e0fe2d0060ll + 0x2000ll * ((a) & 0x3);
    __cavm_csr_fatal("DTX_LDECX_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_LDECX_CTL(a) cavm_dtx_ldecx_ctl_t
#define bustype_CAVM_DTX_LDECX_CTL(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_LDECX_CTL(a) "DTX_LDECX_CTL"
#define busnum_CAVM_DTX_LDECX_CTL(a) (a)
#define arguments_CAVM_DTX_LDECX_CTL(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_ldec#_dat#
 *
 * INTERNAL: DTX LDEC Raw Data Register
 */
union cavm_dtx_ldecx_datx
{
    uint64_t u;
    struct cavm_dtx_ldecx_datx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
#else /* Word 0 - Little Endian */
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_ldecx_datx_s cn; */
};
typedef union cavm_dtx_ldecx_datx cavm_dtx_ldecx_datx_t;

static inline uint64_t CAVM_DTX_LDECX_DATX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_LDECX_DATX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=1) && (b<=1)))
        return 0x87e0fe2d0040ll + 0x2000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=3) && (b<=1)))
        return 0x87e0fe2d0040ll + 0x2000ll * ((a) & 0x3) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_LDECX_DATX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_LDECX_DATX(a,b) cavm_dtx_ldecx_datx_t
#define bustype_CAVM_DTX_LDECX_DATX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_LDECX_DATX(a,b) "DTX_LDECX_DATX"
#define busnum_CAVM_DTX_LDECX_DATX(a,b) (a)
#define arguments_CAVM_DTX_LDECX_DATX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_ldec#_ena#
 *
 * INTERNAL: DTX LDEC Data Enable Register
 */
union cavm_dtx_ldecx_enax
{
    uint64_t u;
    struct cavm_dtx_ldecx_enax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_ldecx_enax_s cn; */
};
typedef union cavm_dtx_ldecx_enax cavm_dtx_ldecx_enax_t;

static inline uint64_t CAVM_DTX_LDECX_ENAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_LDECX_ENAX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=1) && (b<=1)))
        return 0x87e0fe2d0020ll + 0x2000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=3) && (b<=1)))
        return 0x87e0fe2d0020ll + 0x2000ll * ((a) & 0x3) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_LDECX_ENAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_LDECX_ENAX(a,b) cavm_dtx_ldecx_enax_t
#define bustype_CAVM_DTX_LDECX_ENAX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_LDECX_ENAX(a,b) "DTX_LDECX_ENAX"
#define busnum_CAVM_DTX_LDECX_ENAX(a,b) (a)
#define arguments_CAVM_DTX_LDECX_ENAX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_ldec#_sel#
 *
 * INTERNAL: DTX LDEC Select Register
 */
union cavm_dtx_ldecx_selx
{
    uint64_t u;
    struct cavm_dtx_ldecx_selx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
#else /* Word 0 - Little Endian */
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_ldecx_selx_s cn; */
};
typedef union cavm_dtx_ldecx_selx cavm_dtx_ldecx_selx_t;

static inline uint64_t CAVM_DTX_LDECX_SELX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_LDECX_SELX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=1) && (b<=1)))
        return 0x87e0fe2d0000ll + 0x2000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=3) && (b<=1)))
        return 0x87e0fe2d0000ll + 0x2000ll * ((a) & 0x3) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_LDECX_SELX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_LDECX_SELX(a,b) cavm_dtx_ldecx_selx_t
#define bustype_CAVM_DTX_LDECX_SELX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_LDECX_SELX(a,b) "DTX_LDECX_SELX"
#define busnum_CAVM_DTX_LDECX_SELX(a,b) (a)
#define arguments_CAVM_DTX_LDECX_SELX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_lenc#_bcst_rsp
 *
 * INTERNAL: DTX LENC Control Register
 */
union cavm_dtx_lencx_bcst_rsp
{
    uint64_t u;
    struct cavm_dtx_lencx_bcst_rsp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_lencx_bcst_rsp_s cn; */
};
typedef union cavm_dtx_lencx_bcst_rsp cavm_dtx_lencx_bcst_rsp_t;

static inline uint64_t CAVM_DTX_LENCX_BCST_RSP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_LENCX_BCST_RSP(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x87e0fe2c8080ll + 0x2000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=2))
        return 0x87e0fe2c8080ll + 0x2000ll * ((a) & 0x3);
    __cavm_csr_fatal("DTX_LENCX_BCST_RSP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_LENCX_BCST_RSP(a) cavm_dtx_lencx_bcst_rsp_t
#define bustype_CAVM_DTX_LENCX_BCST_RSP(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_LENCX_BCST_RSP(a) "DTX_LENCX_BCST_RSP"
#define busnum_CAVM_DTX_LENCX_BCST_RSP(a) (a)
#define arguments_CAVM_DTX_LENCX_BCST_RSP(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_lenc#_ctl
 *
 * INTERNAL: DTX LENC Control Register
 */
union cavm_dtx_lencx_ctl
{
    uint64_t u;
    struct cavm_dtx_lencx_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_2_3          : 2;
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
#else /* Word 0 - Little Endian */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t reserved_2_3          : 2;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_lencx_ctl_s cn; */
};
typedef union cavm_dtx_lencx_ctl cavm_dtx_lencx_ctl_t;

static inline uint64_t CAVM_DTX_LENCX_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_LENCX_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x87e0fe2c8060ll + 0x2000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=2))
        return 0x87e0fe2c8060ll + 0x2000ll * ((a) & 0x3);
    __cavm_csr_fatal("DTX_LENCX_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_LENCX_CTL(a) cavm_dtx_lencx_ctl_t
#define bustype_CAVM_DTX_LENCX_CTL(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_LENCX_CTL(a) "DTX_LENCX_CTL"
#define busnum_CAVM_DTX_LENCX_CTL(a) (a)
#define arguments_CAVM_DTX_LENCX_CTL(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_lenc#_dat#
 *
 * INTERNAL: DTX LENC Raw Data Register
 */
union cavm_dtx_lencx_datx
{
    uint64_t u;
    struct cavm_dtx_lencx_datx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
#else /* Word 0 - Little Endian */
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_lencx_datx_s cn; */
};
typedef union cavm_dtx_lencx_datx cavm_dtx_lencx_datx_t;

static inline uint64_t CAVM_DTX_LENCX_DATX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_LENCX_DATX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=1) && (b<=1)))
        return 0x87e0fe2c8040ll + 0x2000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=2) && (b<=1)))
        return 0x87e0fe2c8040ll + 0x2000ll * ((a) & 0x3) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_LENCX_DATX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_LENCX_DATX(a,b) cavm_dtx_lencx_datx_t
#define bustype_CAVM_DTX_LENCX_DATX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_LENCX_DATX(a,b) "DTX_LENCX_DATX"
#define busnum_CAVM_DTX_LENCX_DATX(a,b) (a)
#define arguments_CAVM_DTX_LENCX_DATX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_lenc#_ena#
 *
 * INTERNAL: DTX LENC Data Enable Register
 */
union cavm_dtx_lencx_enax
{
    uint64_t u;
    struct cavm_dtx_lencx_enax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_lencx_enax_s cn; */
};
typedef union cavm_dtx_lencx_enax cavm_dtx_lencx_enax_t;

static inline uint64_t CAVM_DTX_LENCX_ENAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_LENCX_ENAX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=1) && (b<=1)))
        return 0x87e0fe2c8020ll + 0x2000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=2) && (b<=1)))
        return 0x87e0fe2c8020ll + 0x2000ll * ((a) & 0x3) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_LENCX_ENAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_LENCX_ENAX(a,b) cavm_dtx_lencx_enax_t
#define bustype_CAVM_DTX_LENCX_ENAX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_LENCX_ENAX(a,b) "DTX_LENCX_ENAX"
#define busnum_CAVM_DTX_LENCX_ENAX(a,b) (a)
#define arguments_CAVM_DTX_LENCX_ENAX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_lenc#_sel#
 *
 * INTERNAL: DTX LENC Select Register
 */
union cavm_dtx_lencx_selx
{
    uint64_t u;
    struct cavm_dtx_lencx_selx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
#else /* Word 0 - Little Endian */
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_lencx_selx_s cn; */
};
typedef union cavm_dtx_lencx_selx cavm_dtx_lencx_selx_t;

static inline uint64_t CAVM_DTX_LENCX_SELX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_LENCX_SELX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=1) && (b<=1)))
        return 0x87e0fe2c8000ll + 0x2000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=2) && (b<=1)))
        return 0x87e0fe2c8000ll + 0x2000ll * ((a) & 0x3) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_LENCX_SELX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_LENCX_SELX(a,b) cavm_dtx_lencx_selx_t
#define bustype_CAVM_DTX_LENCX_SELX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_LENCX_SELX(a,b) "DTX_LENCX_SELX"
#define busnum_CAVM_DTX_LENCX_SELX(a,b) (a)
#define arguments_CAVM_DTX_LENCX_SELX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_lsw#_bcst_rsp
 *
 * INTERNAL: DTX LSW Control Register
 */
union cavm_dtx_lswx_bcst_rsp
{
    uint64_t u;
    struct cavm_dtx_lswx_bcst_rsp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_lswx_bcst_rsp_s cn; */
};
typedef union cavm_dtx_lswx_bcst_rsp cavm_dtx_lswx_bcst_rsp_t;

static inline uint64_t CAVM_DTX_LSWX_BCST_RSP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_LSWX_BCST_RSP(uint64_t a)
{
    if (a<=15)
        return 0x87e0fe260080ll + 0x2000ll * ((a) & 0xf);
    __cavm_csr_fatal("DTX_LSWX_BCST_RSP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_LSWX_BCST_RSP(a) cavm_dtx_lswx_bcst_rsp_t
#define bustype_CAVM_DTX_LSWX_BCST_RSP(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_LSWX_BCST_RSP(a) "DTX_LSWX_BCST_RSP"
#define busnum_CAVM_DTX_LSWX_BCST_RSP(a) (a)
#define arguments_CAVM_DTX_LSWX_BCST_RSP(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_lsw#_ctl
 *
 * INTERNAL: DTX LSW Control Register
 */
union cavm_dtx_lswx_ctl
{
    uint64_t u;
    struct cavm_dtx_lswx_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_2_3          : 2;
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
#else /* Word 0 - Little Endian */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t reserved_2_3          : 2;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_lswx_ctl_s cn; */
};
typedef union cavm_dtx_lswx_ctl cavm_dtx_lswx_ctl_t;

static inline uint64_t CAVM_DTX_LSWX_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_LSWX_CTL(uint64_t a)
{
    if (a<=15)
        return 0x87e0fe260060ll + 0x2000ll * ((a) & 0xf);
    __cavm_csr_fatal("DTX_LSWX_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_LSWX_CTL(a) cavm_dtx_lswx_ctl_t
#define bustype_CAVM_DTX_LSWX_CTL(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_LSWX_CTL(a) "DTX_LSWX_CTL"
#define busnum_CAVM_DTX_LSWX_CTL(a) (a)
#define arguments_CAVM_DTX_LSWX_CTL(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_lsw#_dat#
 *
 * INTERNAL: DTX LSW Raw Data Register
 */
union cavm_dtx_lswx_datx
{
    uint64_t u;
    struct cavm_dtx_lswx_datx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
#else /* Word 0 - Little Endian */
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_lswx_datx_s cn; */
};
typedef union cavm_dtx_lswx_datx cavm_dtx_lswx_datx_t;

static inline uint64_t CAVM_DTX_LSWX_DATX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_LSWX_DATX(uint64_t a, uint64_t b)
{
    if ((a<=15) && (b<=1))
        return 0x87e0fe260040ll + 0x2000ll * ((a) & 0xf) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_LSWX_DATX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_LSWX_DATX(a,b) cavm_dtx_lswx_datx_t
#define bustype_CAVM_DTX_LSWX_DATX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_LSWX_DATX(a,b) "DTX_LSWX_DATX"
#define busnum_CAVM_DTX_LSWX_DATX(a,b) (a)
#define arguments_CAVM_DTX_LSWX_DATX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_lsw#_ena#
 *
 * INTERNAL: DTX LSW Data Enable Register
 */
union cavm_dtx_lswx_enax
{
    uint64_t u;
    struct cavm_dtx_lswx_enax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_lswx_enax_s cn; */
};
typedef union cavm_dtx_lswx_enax cavm_dtx_lswx_enax_t;

static inline uint64_t CAVM_DTX_LSWX_ENAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_LSWX_ENAX(uint64_t a, uint64_t b)
{
    if ((a<=15) && (b<=1))
        return 0x87e0fe260020ll + 0x2000ll * ((a) & 0xf) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_LSWX_ENAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_LSWX_ENAX(a,b) cavm_dtx_lswx_enax_t
#define bustype_CAVM_DTX_LSWX_ENAX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_LSWX_ENAX(a,b) "DTX_LSWX_ENAX"
#define busnum_CAVM_DTX_LSWX_ENAX(a,b) (a)
#define arguments_CAVM_DTX_LSWX_ENAX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_lsw#_sel#
 *
 * INTERNAL: DTX LSW Select Register
 */
union cavm_dtx_lswx_selx
{
    uint64_t u;
    struct cavm_dtx_lswx_selx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
#else /* Word 0 - Little Endian */
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_lswx_selx_s cn; */
};
typedef union cavm_dtx_lswx_selx cavm_dtx_lswx_selx_t;

static inline uint64_t CAVM_DTX_LSWX_SELX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_LSWX_SELX(uint64_t a, uint64_t b)
{
    if ((a<=15) && (b<=1))
        return 0x87e0fe260000ll + 0x2000ll * ((a) & 0xf) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_LSWX_SELX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_LSWX_SELX(a,b) cavm_dtx_lswx_selx_t
#define bustype_CAVM_DTX_LSWX_SELX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_LSWX_SELX(a,b) "DTX_LSWX_SELX"
#define busnum_CAVM_DTX_LSWX_SELX(a,b) (a)
#define arguments_CAVM_DTX_LSWX_SELX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_mcs#_bcst_rsp
 *
 * INTERNAL: DTX MCS Control Register
 */
union cavm_dtx_mcsx_bcst_rsp
{
    uint64_t u;
    struct cavm_dtx_mcsx_bcst_rsp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_mcsx_bcst_rsp_s cn; */
};
typedef union cavm_dtx_mcsx_bcst_rsp cavm_dtx_mcsx_bcst_rsp_t;

static inline uint64_t CAVM_DTX_MCSX_BCST_RSP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_MCSX_BCST_RSP(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e0fe100080ll + 0x2000ll * ((a) & 0x7);
    __cavm_csr_fatal("DTX_MCSX_BCST_RSP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_MCSX_BCST_RSP(a) cavm_dtx_mcsx_bcst_rsp_t
#define bustype_CAVM_DTX_MCSX_BCST_RSP(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_MCSX_BCST_RSP(a) "DTX_MCSX_BCST_RSP"
#define busnum_CAVM_DTX_MCSX_BCST_RSP(a) (a)
#define arguments_CAVM_DTX_MCSX_BCST_RSP(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_mcs#_ctl
 *
 * INTERNAL: DTX MCS Control Register
 */
union cavm_dtx_mcsx_ctl
{
    uint64_t u;
    struct cavm_dtx_mcsx_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_2_3          : 2;
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
#else /* Word 0 - Little Endian */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t reserved_2_3          : 2;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_mcsx_ctl_s cn; */
};
typedef union cavm_dtx_mcsx_ctl cavm_dtx_mcsx_ctl_t;

static inline uint64_t CAVM_DTX_MCSX_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_MCSX_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e0fe100060ll + 0x2000ll * ((a) & 0x7);
    __cavm_csr_fatal("DTX_MCSX_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_MCSX_CTL(a) cavm_dtx_mcsx_ctl_t
#define bustype_CAVM_DTX_MCSX_CTL(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_MCSX_CTL(a) "DTX_MCSX_CTL"
#define busnum_CAVM_DTX_MCSX_CTL(a) (a)
#define arguments_CAVM_DTX_MCSX_CTL(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_mcs#_dat#
 *
 * INTERNAL: DTX MCS Raw Data Register
 */
union cavm_dtx_mcsx_datx
{
    uint64_t u;
    struct cavm_dtx_mcsx_datx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
#else /* Word 0 - Little Endian */
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_mcsx_datx_s cn; */
};
typedef union cavm_dtx_mcsx_datx cavm_dtx_mcsx_datx_t;

static inline uint64_t CAVM_DTX_MCSX_DATX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_MCSX_DATX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=1)))
        return 0x87e0fe100040ll + 0x2000ll * ((a) & 0x7) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_MCSX_DATX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_MCSX_DATX(a,b) cavm_dtx_mcsx_datx_t
#define bustype_CAVM_DTX_MCSX_DATX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_MCSX_DATX(a,b) "DTX_MCSX_DATX"
#define busnum_CAVM_DTX_MCSX_DATX(a,b) (a)
#define arguments_CAVM_DTX_MCSX_DATX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_mcs#_ena#
 *
 * INTERNAL: DTX MCS Data Enable Register
 */
union cavm_dtx_mcsx_enax
{
    uint64_t u;
    struct cavm_dtx_mcsx_enax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_mcsx_enax_s cn; */
};
typedef union cavm_dtx_mcsx_enax cavm_dtx_mcsx_enax_t;

static inline uint64_t CAVM_DTX_MCSX_ENAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_MCSX_ENAX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=1)))
        return 0x87e0fe100020ll + 0x2000ll * ((a) & 0x7) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_MCSX_ENAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_MCSX_ENAX(a,b) cavm_dtx_mcsx_enax_t
#define bustype_CAVM_DTX_MCSX_ENAX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_MCSX_ENAX(a,b) "DTX_MCSX_ENAX"
#define busnum_CAVM_DTX_MCSX_ENAX(a,b) (a)
#define arguments_CAVM_DTX_MCSX_ENAX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_mcs#_sel#
 *
 * INTERNAL: DTX MCS Select Register
 */
union cavm_dtx_mcsx_selx
{
    uint64_t u;
    struct cavm_dtx_mcsx_selx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
#else /* Word 0 - Little Endian */
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_mcsx_selx_s cn; */
};
typedef union cavm_dtx_mcsx_selx cavm_dtx_mcsx_selx_t;

static inline uint64_t CAVM_DTX_MCSX_SELX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_MCSX_SELX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=1)))
        return 0x87e0fe100000ll + 0x2000ll * ((a) & 0x7) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_MCSX_SELX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_MCSX_SELX(a,b) cavm_dtx_mcsx_selx_t
#define bustype_CAVM_DTX_MCSX_SELX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_MCSX_SELX(a,b) "DTX_MCSX_SELX"
#define busnum_CAVM_DTX_MCSX_SELX(a,b) (a)
#define arguments_CAVM_DTX_MCSX_SELX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_mdb#_bcst_rsp
 *
 * INTERNAL: DTX MDB Control Register
 */
union cavm_dtx_mdbx_bcst_rsp
{
    uint64_t u;
    struct cavm_dtx_mdbx_bcst_rsp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_mdbx_bcst_rsp_s cn; */
};
typedef union cavm_dtx_mdbx_bcst_rsp cavm_dtx_mdbx_bcst_rsp_t;

static inline uint64_t CAVM_DTX_MDBX_BCST_RSP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_MDBX_BCST_RSP(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=81))
        return 0x87e0feaa0080ll + 0x2000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=81))
        return 0x87e0feaa0080ll + 0x2000ll * ((a) & 0x7f);
    __cavm_csr_fatal("DTX_MDBX_BCST_RSP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_MDBX_BCST_RSP(a) cavm_dtx_mdbx_bcst_rsp_t
#define bustype_CAVM_DTX_MDBX_BCST_RSP(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_MDBX_BCST_RSP(a) "DTX_MDBX_BCST_RSP"
#define busnum_CAVM_DTX_MDBX_BCST_RSP(a) (a)
#define arguments_CAVM_DTX_MDBX_BCST_RSP(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_mdb#_ctl
 *
 * INTERNAL: DTX MDB Control Register
 */
union cavm_dtx_mdbx_ctl
{
    uint64_t u;
    struct cavm_dtx_mdbx_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_2_3          : 2;
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
#else /* Word 0 - Little Endian */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t reserved_2_3          : 2;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_mdbx_ctl_s cn; */
};
typedef union cavm_dtx_mdbx_ctl cavm_dtx_mdbx_ctl_t;

static inline uint64_t CAVM_DTX_MDBX_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_MDBX_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=81))
        return 0x87e0feaa0060ll + 0x2000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=81))
        return 0x87e0feaa0060ll + 0x2000ll * ((a) & 0x7f);
    __cavm_csr_fatal("DTX_MDBX_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_MDBX_CTL(a) cavm_dtx_mdbx_ctl_t
#define bustype_CAVM_DTX_MDBX_CTL(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_MDBX_CTL(a) "DTX_MDBX_CTL"
#define busnum_CAVM_DTX_MDBX_CTL(a) (a)
#define arguments_CAVM_DTX_MDBX_CTL(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_mdb#_dat#
 *
 * INTERNAL: DTX MDB Raw Data Register
 */
union cavm_dtx_mdbx_datx
{
    uint64_t u;
    struct cavm_dtx_mdbx_datx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
#else /* Word 0 - Little Endian */
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_mdbx_datx_s cn; */
};
typedef union cavm_dtx_mdbx_datx cavm_dtx_mdbx_datx_t;

static inline uint64_t CAVM_DTX_MDBX_DATX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_MDBX_DATX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=81) && (b<=1)))
        return 0x87e0feaa0040ll + 0x2000ll * ((a) & 0x7f) + 8ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=81) && (b<=1)))
        return 0x87e0feaa0040ll + 0x2000ll * ((a) & 0x7f) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_MDBX_DATX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_MDBX_DATX(a,b) cavm_dtx_mdbx_datx_t
#define bustype_CAVM_DTX_MDBX_DATX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_MDBX_DATX(a,b) "DTX_MDBX_DATX"
#define busnum_CAVM_DTX_MDBX_DATX(a,b) (a)
#define arguments_CAVM_DTX_MDBX_DATX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_mdb#_ena#
 *
 * INTERNAL: DTX MDB Data Enable Register
 */
union cavm_dtx_mdbx_enax
{
    uint64_t u;
    struct cavm_dtx_mdbx_enax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_mdbx_enax_s cn; */
};
typedef union cavm_dtx_mdbx_enax cavm_dtx_mdbx_enax_t;

static inline uint64_t CAVM_DTX_MDBX_ENAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_MDBX_ENAX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=81) && (b<=1)))
        return 0x87e0feaa0020ll + 0x2000ll * ((a) & 0x7f) + 8ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=81) && (b<=1)))
        return 0x87e0feaa0020ll + 0x2000ll * ((a) & 0x7f) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_MDBX_ENAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_MDBX_ENAX(a,b) cavm_dtx_mdbx_enax_t
#define bustype_CAVM_DTX_MDBX_ENAX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_MDBX_ENAX(a,b) "DTX_MDBX_ENAX"
#define busnum_CAVM_DTX_MDBX_ENAX(a,b) (a)
#define arguments_CAVM_DTX_MDBX_ENAX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_mdb#_sel#
 *
 * INTERNAL: DTX MDB Select Register
 */
union cavm_dtx_mdbx_selx
{
    uint64_t u;
    struct cavm_dtx_mdbx_selx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
#else /* Word 0 - Little Endian */
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_mdbx_selx_s cn; */
};
typedef union cavm_dtx_mdbx_selx cavm_dtx_mdbx_selx_t;

static inline uint64_t CAVM_DTX_MDBX_SELX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_MDBX_SELX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=81) && (b<=1)))
        return 0x87e0feaa0000ll + 0x2000ll * ((a) & 0x7f) + 8ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=81) && (b<=1)))
        return 0x87e0feaa0000ll + 0x2000ll * ((a) & 0x7f) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_MDBX_SELX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_MDBX_SELX(a,b) cavm_dtx_mdbx_selx_t
#define bustype_CAVM_DTX_MDBX_SELX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_MDBX_SELX(a,b) "DTX_MDBX_SELX"
#define busnum_CAVM_DTX_MDBX_SELX(a,b) (a)
#define arguments_CAVM_DTX_MDBX_SELX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_mio_bcst_rsp
 *
 * INTERNAL: DTX MIO Control Register
 */
union cavm_dtx_mio_bcst_rsp
{
    uint64_t u;
    struct cavm_dtx_mio_bcst_rsp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_mio_bcst_rsp_s cn; */
};
typedef union cavm_dtx_mio_bcst_rsp cavm_dtx_mio_bcst_rsp_t;

#define CAVM_DTX_MIO_BCST_RSP CAVM_DTX_MIO_BCST_RSP_FUNC()
static inline uint64_t CAVM_DTX_MIO_BCST_RSP_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_MIO_BCST_RSP_FUNC(void)
{
    return 0x87e0fe000080ll;
}

#define typedef_CAVM_DTX_MIO_BCST_RSP cavm_dtx_mio_bcst_rsp_t
#define bustype_CAVM_DTX_MIO_BCST_RSP CSR_TYPE_RSL
#define basename_CAVM_DTX_MIO_BCST_RSP "DTX_MIO_BCST_RSP"
#define busnum_CAVM_DTX_MIO_BCST_RSP 0
#define arguments_CAVM_DTX_MIO_BCST_RSP -1,-1,-1,-1

/**
 * Register (RSL) dtx_mio_ctl
 *
 * INTERNAL: DTX MIO Control Register
 */
union cavm_dtx_mio_ctl
{
    uint64_t u;
    struct cavm_dtx_mio_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_2_3          : 2;
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
#else /* Word 0 - Little Endian */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t reserved_2_3          : 2;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_mio_ctl_s cn; */
};
typedef union cavm_dtx_mio_ctl cavm_dtx_mio_ctl_t;

#define CAVM_DTX_MIO_CTL CAVM_DTX_MIO_CTL_FUNC()
static inline uint64_t CAVM_DTX_MIO_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_MIO_CTL_FUNC(void)
{
    return 0x87e0fe000060ll;
}

#define typedef_CAVM_DTX_MIO_CTL cavm_dtx_mio_ctl_t
#define bustype_CAVM_DTX_MIO_CTL CSR_TYPE_RSL
#define basename_CAVM_DTX_MIO_CTL "DTX_MIO_CTL"
#define busnum_CAVM_DTX_MIO_CTL 0
#define arguments_CAVM_DTX_MIO_CTL -1,-1,-1,-1

/**
 * Register (RSL) dtx_mio_dat#
 *
 * INTERNAL: DTX MIO Raw Data Register
 */
union cavm_dtx_mio_datx
{
    uint64_t u;
    struct cavm_dtx_mio_datx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
#else /* Word 0 - Little Endian */
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_mio_datx_s cn; */
};
typedef union cavm_dtx_mio_datx cavm_dtx_mio_datx_t;

static inline uint64_t CAVM_DTX_MIO_DATX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_MIO_DATX(uint64_t a)
{
    if (a<=1)
        return 0x87e0fe000040ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_MIO_DATX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_MIO_DATX(a) cavm_dtx_mio_datx_t
#define bustype_CAVM_DTX_MIO_DATX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_MIO_DATX(a) "DTX_MIO_DATX"
#define busnum_CAVM_DTX_MIO_DATX(a) (a)
#define arguments_CAVM_DTX_MIO_DATX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_mio_ena#
 *
 * INTERNAL: DTX MIO Data Enable Register
 */
union cavm_dtx_mio_enax
{
    uint64_t u;
    struct cavm_dtx_mio_enax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_mio_enax_s cn; */
};
typedef union cavm_dtx_mio_enax cavm_dtx_mio_enax_t;

static inline uint64_t CAVM_DTX_MIO_ENAX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_MIO_ENAX(uint64_t a)
{
    if (a<=1)
        return 0x87e0fe000020ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_MIO_ENAX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_MIO_ENAX(a) cavm_dtx_mio_enax_t
#define bustype_CAVM_DTX_MIO_ENAX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_MIO_ENAX(a) "DTX_MIO_ENAX"
#define busnum_CAVM_DTX_MIO_ENAX(a) (a)
#define arguments_CAVM_DTX_MIO_ENAX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_mio_sel#
 *
 * INTERNAL: DTX MIO Select Register
 */
union cavm_dtx_mio_selx
{
    uint64_t u;
    struct cavm_dtx_mio_selx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
#else /* Word 0 - Little Endian */
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_mio_selx_s cn; */
};
typedef union cavm_dtx_mio_selx cavm_dtx_mio_selx_t;

static inline uint64_t CAVM_DTX_MIO_SELX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_MIO_SELX(uint64_t a)
{
    if (a<=1)
        return 0x87e0fe000000ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_MIO_SELX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_MIO_SELX(a) cavm_dtx_mio_selx_t
#define bustype_CAVM_DTX_MIO_SELX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_MIO_SELX(a) "DTX_MIO_SELX"
#define busnum_CAVM_DTX_MIO_SELX(a) (a)
#define arguments_CAVM_DTX_MIO_SELX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_ml0_bcst_rsp
 *
 * INTERNAL: DTX ML0 Control Register
 */
union cavm_dtx_ml0_bcst_rsp
{
    uint64_t u;
    struct cavm_dtx_ml0_bcst_rsp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_ml0_bcst_rsp_s cn; */
};
typedef union cavm_dtx_ml0_bcst_rsp cavm_dtx_ml0_bcst_rsp_t;

#define CAVM_DTX_ML0_BCST_RSP CAVM_DTX_ML0_BCST_RSP_FUNC()
static inline uint64_t CAVM_DTX_ML0_BCST_RSP_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_ML0_BCST_RSP_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN10KA))
        return 0x87e0fe850080ll;
    __cavm_csr_fatal("DTX_ML0_BCST_RSP", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_ML0_BCST_RSP cavm_dtx_ml0_bcst_rsp_t
#define bustype_CAVM_DTX_ML0_BCST_RSP CSR_TYPE_RSL
#define basename_CAVM_DTX_ML0_BCST_RSP "DTX_ML0_BCST_RSP"
#define busnum_CAVM_DTX_ML0_BCST_RSP 0
#define arguments_CAVM_DTX_ML0_BCST_RSP -1,-1,-1,-1

/**
 * Register (RSL) dtx_ml0_ctl
 *
 * INTERNAL: DTX ML0 Control Register
 */
union cavm_dtx_ml0_ctl
{
    uint64_t u;
    struct cavm_dtx_ml0_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_2_3          : 2;
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
#else /* Word 0 - Little Endian */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t reserved_2_3          : 2;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_ml0_ctl_s cn; */
};
typedef union cavm_dtx_ml0_ctl cavm_dtx_ml0_ctl_t;

#define CAVM_DTX_ML0_CTL CAVM_DTX_ML0_CTL_FUNC()
static inline uint64_t CAVM_DTX_ML0_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_ML0_CTL_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN10KA))
        return 0x87e0fe850060ll;
    __cavm_csr_fatal("DTX_ML0_CTL", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_ML0_CTL cavm_dtx_ml0_ctl_t
#define bustype_CAVM_DTX_ML0_CTL CSR_TYPE_RSL
#define basename_CAVM_DTX_ML0_CTL "DTX_ML0_CTL"
#define busnum_CAVM_DTX_ML0_CTL 0
#define arguments_CAVM_DTX_ML0_CTL -1,-1,-1,-1

/**
 * Register (RSL) dtx_ml0_dat#
 *
 * INTERNAL: DTX ML0 Raw Data Register
 */
union cavm_dtx_ml0_datx
{
    uint64_t u;
    struct cavm_dtx_ml0_datx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
#else /* Word 0 - Little Endian */
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_ml0_datx_s cn; */
};
typedef union cavm_dtx_ml0_datx cavm_dtx_ml0_datx_t;

static inline uint64_t CAVM_DTX_ML0_DATX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_ML0_DATX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x87e0fe850040ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_ML0_DATX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_ML0_DATX(a) cavm_dtx_ml0_datx_t
#define bustype_CAVM_DTX_ML0_DATX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_ML0_DATX(a) "DTX_ML0_DATX"
#define busnum_CAVM_DTX_ML0_DATX(a) (a)
#define arguments_CAVM_DTX_ML0_DATX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_ml0_ena#
 *
 * INTERNAL: DTX ML0 Data Enable Register
 */
union cavm_dtx_ml0_enax
{
    uint64_t u;
    struct cavm_dtx_ml0_enax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_ml0_enax_s cn; */
};
typedef union cavm_dtx_ml0_enax cavm_dtx_ml0_enax_t;

static inline uint64_t CAVM_DTX_ML0_ENAX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_ML0_ENAX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x87e0fe850020ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_ML0_ENAX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_ML0_ENAX(a) cavm_dtx_ml0_enax_t
#define bustype_CAVM_DTX_ML0_ENAX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_ML0_ENAX(a) "DTX_ML0_ENAX"
#define busnum_CAVM_DTX_ML0_ENAX(a) (a)
#define arguments_CAVM_DTX_ML0_ENAX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_ml0_sel#
 *
 * INTERNAL: DTX ML0 Select Register
 */
union cavm_dtx_ml0_selx
{
    uint64_t u;
    struct cavm_dtx_ml0_selx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
#else /* Word 0 - Little Endian */
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_ml0_selx_s cn; */
};
typedef union cavm_dtx_ml0_selx cavm_dtx_ml0_selx_t;

static inline uint64_t CAVM_DTX_ML0_SELX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_ML0_SELX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x87e0fe850000ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_ML0_SELX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_ML0_SELX(a) cavm_dtx_ml0_selx_t
#define bustype_CAVM_DTX_ML0_SELX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_ML0_SELX(a) "DTX_ML0_SELX"
#define busnum_CAVM_DTX_ML0_SELX(a) (a)
#define arguments_CAVM_DTX_ML0_SELX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_mlab_bcst_rsp
 *
 * INTERNAL: DTX MLAB Control Register
 */
union cavm_dtx_mlab_bcst_rsp
{
    uint64_t u;
    struct cavm_dtx_mlab_bcst_rsp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_mlab_bcst_rsp_s cn; */
};
typedef union cavm_dtx_mlab_bcst_rsp cavm_dtx_mlab_bcst_rsp_t;

#define CAVM_DTX_MLAB_BCST_RSP CAVM_DTX_MLAB_BCST_RSP_FUNC()
static inline uint64_t CAVM_DTX_MLAB_BCST_RSP_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_MLAB_BCST_RSP_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x87e0fe36a080ll;
    __cavm_csr_fatal("DTX_MLAB_BCST_RSP", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_MLAB_BCST_RSP cavm_dtx_mlab_bcst_rsp_t
#define bustype_CAVM_DTX_MLAB_BCST_RSP CSR_TYPE_RSL
#define basename_CAVM_DTX_MLAB_BCST_RSP "DTX_MLAB_BCST_RSP"
#define busnum_CAVM_DTX_MLAB_BCST_RSP 0
#define arguments_CAVM_DTX_MLAB_BCST_RSP -1,-1,-1,-1

/**
 * Register (RSL) dtx_mlab_ctl
 *
 * INTERNAL: DTX MLAB Control Register
 */
union cavm_dtx_mlab_ctl
{
    uint64_t u;
    struct cavm_dtx_mlab_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_2_3          : 2;
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
#else /* Word 0 - Little Endian */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t reserved_2_3          : 2;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_mlab_ctl_s cn; */
};
typedef union cavm_dtx_mlab_ctl cavm_dtx_mlab_ctl_t;

#define CAVM_DTX_MLAB_CTL CAVM_DTX_MLAB_CTL_FUNC()
static inline uint64_t CAVM_DTX_MLAB_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_MLAB_CTL_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x87e0fe36a060ll;
    __cavm_csr_fatal("DTX_MLAB_CTL", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_MLAB_CTL cavm_dtx_mlab_ctl_t
#define bustype_CAVM_DTX_MLAB_CTL CSR_TYPE_RSL
#define basename_CAVM_DTX_MLAB_CTL "DTX_MLAB_CTL"
#define busnum_CAVM_DTX_MLAB_CTL 0
#define arguments_CAVM_DTX_MLAB_CTL -1,-1,-1,-1

/**
 * Register (RSL) dtx_mlab_dat#
 *
 * INTERNAL: DTX MLAB Raw Data Register
 */
union cavm_dtx_mlab_datx
{
    uint64_t u;
    struct cavm_dtx_mlab_datx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
#else /* Word 0 - Little Endian */
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_mlab_datx_s cn; */
};
typedef union cavm_dtx_mlab_datx cavm_dtx_mlab_datx_t;

static inline uint64_t CAVM_DTX_MLAB_DATX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_MLAB_DATX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x87e0fe36a040ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_MLAB_DATX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_MLAB_DATX(a) cavm_dtx_mlab_datx_t
#define bustype_CAVM_DTX_MLAB_DATX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_MLAB_DATX(a) "DTX_MLAB_DATX"
#define busnum_CAVM_DTX_MLAB_DATX(a) (a)
#define arguments_CAVM_DTX_MLAB_DATX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_mlab_ena#
 *
 * INTERNAL: DTX MLAB Data Enable Register
 */
union cavm_dtx_mlab_enax
{
    uint64_t u;
    struct cavm_dtx_mlab_enax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_mlab_enax_s cn; */
};
typedef union cavm_dtx_mlab_enax cavm_dtx_mlab_enax_t;

static inline uint64_t CAVM_DTX_MLAB_ENAX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_MLAB_ENAX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x87e0fe36a020ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_MLAB_ENAX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_MLAB_ENAX(a) cavm_dtx_mlab_enax_t
#define bustype_CAVM_DTX_MLAB_ENAX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_MLAB_ENAX(a) "DTX_MLAB_ENAX"
#define busnum_CAVM_DTX_MLAB_ENAX(a) (a)
#define arguments_CAVM_DTX_MLAB_ENAX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_mlab_sel#
 *
 * INTERNAL: DTX MLAB Select Register
 */
union cavm_dtx_mlab_selx
{
    uint64_t u;
    struct cavm_dtx_mlab_selx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
#else /* Word 0 - Little Endian */
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_mlab_selx_s cn; */
};
typedef union cavm_dtx_mlab_selx cavm_dtx_mlab_selx_t;

static inline uint64_t CAVM_DTX_MLAB_SELX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_MLAB_SELX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x87e0fe36a000ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_MLAB_SELX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_MLAB_SELX(a) cavm_dtx_mlab_selx_t
#define bustype_CAVM_DTX_MLAB_SELX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_MLAB_SELX(a) "DTX_MLAB_SELX"
#define busnum_CAVM_DTX_MLAB_SELX(a) (a)
#define arguments_CAVM_DTX_MLAB_SELX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_mrml_bcst_rsp
 *
 * INTERNAL: DTX MRML Control Register
 */
union cavm_dtx_mrml_bcst_rsp
{
    uint64_t u;
    struct cavm_dtx_mrml_bcst_rsp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_mrml_bcst_rsp_s cn; */
};
typedef union cavm_dtx_mrml_bcst_rsp cavm_dtx_mrml_bcst_rsp_t;

#define CAVM_DTX_MRML_BCST_RSP CAVM_DTX_MRML_BCST_RSP_FUNC()
static inline uint64_t CAVM_DTX_MRML_BCST_RSP_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_MRML_BCST_RSP_FUNC(void)
{
    return 0x87e0fe1f8080ll;
}

#define typedef_CAVM_DTX_MRML_BCST_RSP cavm_dtx_mrml_bcst_rsp_t
#define bustype_CAVM_DTX_MRML_BCST_RSP CSR_TYPE_RSL
#define basename_CAVM_DTX_MRML_BCST_RSP "DTX_MRML_BCST_RSP"
#define busnum_CAVM_DTX_MRML_BCST_RSP 0
#define arguments_CAVM_DTX_MRML_BCST_RSP -1,-1,-1,-1

/**
 * Register (RSL) dtx_mrml_ctl
 *
 * INTERNAL: DTX MRML Control Register
 */
union cavm_dtx_mrml_ctl
{
    uint64_t u;
    struct cavm_dtx_mrml_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_2_3          : 2;
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
#else /* Word 0 - Little Endian */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t reserved_2_3          : 2;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_mrml_ctl_s cn; */
};
typedef union cavm_dtx_mrml_ctl cavm_dtx_mrml_ctl_t;

#define CAVM_DTX_MRML_CTL CAVM_DTX_MRML_CTL_FUNC()
static inline uint64_t CAVM_DTX_MRML_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_MRML_CTL_FUNC(void)
{
    return 0x87e0fe1f8060ll;
}

#define typedef_CAVM_DTX_MRML_CTL cavm_dtx_mrml_ctl_t
#define bustype_CAVM_DTX_MRML_CTL CSR_TYPE_RSL
#define basename_CAVM_DTX_MRML_CTL "DTX_MRML_CTL"
#define busnum_CAVM_DTX_MRML_CTL 0
#define arguments_CAVM_DTX_MRML_CTL -1,-1,-1,-1

/**
 * Register (RSL) dtx_mrml_dat#
 *
 * INTERNAL: DTX MRML Raw Data Register
 */
union cavm_dtx_mrml_datx
{
    uint64_t u;
    struct cavm_dtx_mrml_datx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
#else /* Word 0 - Little Endian */
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_mrml_datx_s cn; */
};
typedef union cavm_dtx_mrml_datx cavm_dtx_mrml_datx_t;

static inline uint64_t CAVM_DTX_MRML_DATX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_MRML_DATX(uint64_t a)
{
    if (a<=1)
        return 0x87e0fe1f8040ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_MRML_DATX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_MRML_DATX(a) cavm_dtx_mrml_datx_t
#define bustype_CAVM_DTX_MRML_DATX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_MRML_DATX(a) "DTX_MRML_DATX"
#define busnum_CAVM_DTX_MRML_DATX(a) (a)
#define arguments_CAVM_DTX_MRML_DATX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_mrml_ena#
 *
 * INTERNAL: DTX MRML Data Enable Register
 */
union cavm_dtx_mrml_enax
{
    uint64_t u;
    struct cavm_dtx_mrml_enax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_mrml_enax_s cn; */
};
typedef union cavm_dtx_mrml_enax cavm_dtx_mrml_enax_t;

static inline uint64_t CAVM_DTX_MRML_ENAX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_MRML_ENAX(uint64_t a)
{
    if (a<=1)
        return 0x87e0fe1f8020ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_MRML_ENAX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_MRML_ENAX(a) cavm_dtx_mrml_enax_t
#define bustype_CAVM_DTX_MRML_ENAX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_MRML_ENAX(a) "DTX_MRML_ENAX"
#define busnum_CAVM_DTX_MRML_ENAX(a) (a)
#define arguments_CAVM_DTX_MRML_ENAX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_mrml_sel#
 *
 * INTERNAL: DTX MRML Select Register
 */
union cavm_dtx_mrml_selx
{
    uint64_t u;
    struct cavm_dtx_mrml_selx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
#else /* Word 0 - Little Endian */
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_mrml_selx_s cn; */
};
typedef union cavm_dtx_mrml_selx cavm_dtx_mrml_selx_t;

static inline uint64_t CAVM_DTX_MRML_SELX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_MRML_SELX(uint64_t a)
{
    if (a<=1)
        return 0x87e0fe1f8000ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_MRML_SELX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_MRML_SELX(a) cavm_dtx_mrml_selx_t
#define bustype_CAVM_DTX_MRML_SELX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_MRML_SELX(a) "DTX_MRML_SELX"
#define busnum_CAVM_DTX_MRML_SELX(a) (a)
#define arguments_CAVM_DTX_MRML_SELX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_msw#_bcst_rsp
 *
 * INTERNAL: DTX MSW Control Register
 */
union cavm_dtx_mswx_bcst_rsp
{
    uint64_t u;
    struct cavm_dtx_mswx_bcst_rsp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_mswx_bcst_rsp_s cn; */
};
typedef union cavm_dtx_mswx_bcst_rsp cavm_dtx_mswx_bcst_rsp_t;

static inline uint64_t CAVM_DTX_MSWX_BCST_RSP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_MSWX_BCST_RSP(uint64_t a)
{
    if (a<=63)
        return 0x87e0fe600080ll + 0x2000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DTX_MSWX_BCST_RSP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_MSWX_BCST_RSP(a) cavm_dtx_mswx_bcst_rsp_t
#define bustype_CAVM_DTX_MSWX_BCST_RSP(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_MSWX_BCST_RSP(a) "DTX_MSWX_BCST_RSP"
#define busnum_CAVM_DTX_MSWX_BCST_RSP(a) (a)
#define arguments_CAVM_DTX_MSWX_BCST_RSP(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_msw#_ctl
 *
 * INTERNAL: DTX MSW Control Register
 */
union cavm_dtx_mswx_ctl
{
    uint64_t u;
    struct cavm_dtx_mswx_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_2_3          : 2;
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
#else /* Word 0 - Little Endian */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t reserved_2_3          : 2;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_mswx_ctl_s cn; */
};
typedef union cavm_dtx_mswx_ctl cavm_dtx_mswx_ctl_t;

static inline uint64_t CAVM_DTX_MSWX_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_MSWX_CTL(uint64_t a)
{
    if (a<=63)
        return 0x87e0fe600060ll + 0x2000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DTX_MSWX_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_MSWX_CTL(a) cavm_dtx_mswx_ctl_t
#define bustype_CAVM_DTX_MSWX_CTL(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_MSWX_CTL(a) "DTX_MSWX_CTL"
#define busnum_CAVM_DTX_MSWX_CTL(a) (a)
#define arguments_CAVM_DTX_MSWX_CTL(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_msw#_dat#
 *
 * INTERNAL: DTX MSW Raw Data Register
 */
union cavm_dtx_mswx_datx
{
    uint64_t u;
    struct cavm_dtx_mswx_datx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
#else /* Word 0 - Little Endian */
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_mswx_datx_s cn; */
};
typedef union cavm_dtx_mswx_datx cavm_dtx_mswx_datx_t;

static inline uint64_t CAVM_DTX_MSWX_DATX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_MSWX_DATX(uint64_t a, uint64_t b)
{
    if ((a<=63) && (b<=1))
        return 0x87e0fe600040ll + 0x2000ll * ((a) & 0x3f) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_MSWX_DATX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_MSWX_DATX(a,b) cavm_dtx_mswx_datx_t
#define bustype_CAVM_DTX_MSWX_DATX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_MSWX_DATX(a,b) "DTX_MSWX_DATX"
#define busnum_CAVM_DTX_MSWX_DATX(a,b) (a)
#define arguments_CAVM_DTX_MSWX_DATX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_msw#_ena#
 *
 * INTERNAL: DTX MSW Data Enable Register
 */
union cavm_dtx_mswx_enax
{
    uint64_t u;
    struct cavm_dtx_mswx_enax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_mswx_enax_s cn; */
};
typedef union cavm_dtx_mswx_enax cavm_dtx_mswx_enax_t;

static inline uint64_t CAVM_DTX_MSWX_ENAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_MSWX_ENAX(uint64_t a, uint64_t b)
{
    if ((a<=63) && (b<=1))
        return 0x87e0fe600020ll + 0x2000ll * ((a) & 0x3f) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_MSWX_ENAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_MSWX_ENAX(a,b) cavm_dtx_mswx_enax_t
#define bustype_CAVM_DTX_MSWX_ENAX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_MSWX_ENAX(a,b) "DTX_MSWX_ENAX"
#define busnum_CAVM_DTX_MSWX_ENAX(a,b) (a)
#define arguments_CAVM_DTX_MSWX_ENAX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_msw#_sel#
 *
 * INTERNAL: DTX MSW Select Register
 */
union cavm_dtx_mswx_selx
{
    uint64_t u;
    struct cavm_dtx_mswx_selx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
#else /* Word 0 - Little Endian */
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_mswx_selx_s cn; */
};
typedef union cavm_dtx_mswx_selx cavm_dtx_mswx_selx_t;

static inline uint64_t CAVM_DTX_MSWX_SELX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_MSWX_SELX(uint64_t a, uint64_t b)
{
    if ((a<=63) && (b<=1))
        return 0x87e0fe600000ll + 0x2000ll * ((a) & 0x3f) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_MSWX_SELX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_MSWX_SELX(a,b) cavm_dtx_mswx_selx_t
#define bustype_CAVM_DTX_MSWX_SELX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_MSWX_SELX(a,b) "DTX_MSWX_SELX"
#define busnum_CAVM_DTX_MSWX_SELX(a,b) (a)
#define arguments_CAVM_DTX_MSWX_SELX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_ndc#_bcst_rsp
 *
 * INTERNAL: DTX NDC Control Register
 */
union cavm_dtx_ndcx_bcst_rsp
{
    uint64_t u;
    struct cavm_dtx_ndcx_bcst_rsp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_ndcx_bcst_rsp_s cn; */
};
typedef union cavm_dtx_ndcx_bcst_rsp cavm_dtx_ndcx_bcst_rsp_t;

static inline uint64_t CAVM_DTX_NDCX_BCST_RSP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_NDCX_BCST_RSP(uint64_t a)
{
    if (a<=5)
        return 0x87e0fe888080ll + 0x2000ll * ((a) & 0x7);
    __cavm_csr_fatal("DTX_NDCX_BCST_RSP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_NDCX_BCST_RSP(a) cavm_dtx_ndcx_bcst_rsp_t
#define bustype_CAVM_DTX_NDCX_BCST_RSP(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_NDCX_BCST_RSP(a) "DTX_NDCX_BCST_RSP"
#define busnum_CAVM_DTX_NDCX_BCST_RSP(a) (a)
#define arguments_CAVM_DTX_NDCX_BCST_RSP(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_ndc#_ctl
 *
 * INTERNAL: DTX NDC Control Register
 */
union cavm_dtx_ndcx_ctl
{
    uint64_t u;
    struct cavm_dtx_ndcx_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_2_3          : 2;
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
#else /* Word 0 - Little Endian */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t reserved_2_3          : 2;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_ndcx_ctl_s cn; */
};
typedef union cavm_dtx_ndcx_ctl cavm_dtx_ndcx_ctl_t;

static inline uint64_t CAVM_DTX_NDCX_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_NDCX_CTL(uint64_t a)
{
    if (a<=5)
        return 0x87e0fe888060ll + 0x2000ll * ((a) & 0x7);
    __cavm_csr_fatal("DTX_NDCX_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_NDCX_CTL(a) cavm_dtx_ndcx_ctl_t
#define bustype_CAVM_DTX_NDCX_CTL(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_NDCX_CTL(a) "DTX_NDCX_CTL"
#define busnum_CAVM_DTX_NDCX_CTL(a) (a)
#define arguments_CAVM_DTX_NDCX_CTL(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_ndc#_dat#
 *
 * INTERNAL: DTX NDC Raw Data Register
 */
union cavm_dtx_ndcx_datx
{
    uint64_t u;
    struct cavm_dtx_ndcx_datx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
#else /* Word 0 - Little Endian */
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_ndcx_datx_s cn; */
};
typedef union cavm_dtx_ndcx_datx cavm_dtx_ndcx_datx_t;

static inline uint64_t CAVM_DTX_NDCX_DATX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_NDCX_DATX(uint64_t a, uint64_t b)
{
    if ((a<=5) && (b<=1))
        return 0x87e0fe888040ll + 0x2000ll * ((a) & 0x7) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_NDCX_DATX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_NDCX_DATX(a,b) cavm_dtx_ndcx_datx_t
#define bustype_CAVM_DTX_NDCX_DATX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_NDCX_DATX(a,b) "DTX_NDCX_DATX"
#define busnum_CAVM_DTX_NDCX_DATX(a,b) (a)
#define arguments_CAVM_DTX_NDCX_DATX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_ndc#_ena#
 *
 * INTERNAL: DTX NDC Data Enable Register
 */
union cavm_dtx_ndcx_enax
{
    uint64_t u;
    struct cavm_dtx_ndcx_enax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_ndcx_enax_s cn; */
};
typedef union cavm_dtx_ndcx_enax cavm_dtx_ndcx_enax_t;

static inline uint64_t CAVM_DTX_NDCX_ENAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_NDCX_ENAX(uint64_t a, uint64_t b)
{
    if ((a<=5) && (b<=1))
        return 0x87e0fe888020ll + 0x2000ll * ((a) & 0x7) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_NDCX_ENAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_NDCX_ENAX(a,b) cavm_dtx_ndcx_enax_t
#define bustype_CAVM_DTX_NDCX_ENAX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_NDCX_ENAX(a,b) "DTX_NDCX_ENAX"
#define busnum_CAVM_DTX_NDCX_ENAX(a,b) (a)
#define arguments_CAVM_DTX_NDCX_ENAX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_ndc#_sel#
 *
 * INTERNAL: DTX NDC Select Register
 */
union cavm_dtx_ndcx_selx
{
    uint64_t u;
    struct cavm_dtx_ndcx_selx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
#else /* Word 0 - Little Endian */
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_ndcx_selx_s cn; */
};
typedef union cavm_dtx_ndcx_selx cavm_dtx_ndcx_selx_t;

static inline uint64_t CAVM_DTX_NDCX_SELX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_NDCX_SELX(uint64_t a, uint64_t b)
{
    if ((a<=5) && (b<=1))
        return 0x87e0fe888000ll + 0x2000ll * ((a) & 0x7) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_NDCX_SELX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_NDCX_SELX(a,b) cavm_dtx_ndcx_selx_t
#define bustype_CAVM_DTX_NDCX_SELX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_NDCX_SELX(a,b) "DTX_NDCX_SELX"
#define busnum_CAVM_DTX_NDCX_SELX(a,b) (a)
#define arguments_CAVM_DTX_NDCX_SELX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_ngnt#_bcst_rsp
 *
 * INTERNAL: DTX NGNT Control Register
 */
union cavm_dtx_ngntx_bcst_rsp
{
    uint64_t u;
    struct cavm_dtx_ngntx_bcst_rsp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_ngntx_bcst_rsp_s cn; */
};
typedef union cavm_dtx_ngntx_bcst_rsp cavm_dtx_ngntx_bcst_rsp_t;

static inline uint64_t CAVM_DTX_NGNTX_BCST_RSP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_NGNTX_BCST_RSP(uint64_t a)
{
    if (a<=15)
        return 0x87e0fe280080ll + 0x2000ll * ((a) & 0xf);
    __cavm_csr_fatal("DTX_NGNTX_BCST_RSP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_NGNTX_BCST_RSP(a) cavm_dtx_ngntx_bcst_rsp_t
#define bustype_CAVM_DTX_NGNTX_BCST_RSP(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_NGNTX_BCST_RSP(a) "DTX_NGNTX_BCST_RSP"
#define busnum_CAVM_DTX_NGNTX_BCST_RSP(a) (a)
#define arguments_CAVM_DTX_NGNTX_BCST_RSP(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_ngnt#_ctl
 *
 * INTERNAL: DTX NGNT Control Register
 */
union cavm_dtx_ngntx_ctl
{
    uint64_t u;
    struct cavm_dtx_ngntx_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_2_3          : 2;
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
#else /* Word 0 - Little Endian */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t reserved_2_3          : 2;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_ngntx_ctl_s cn; */
};
typedef union cavm_dtx_ngntx_ctl cavm_dtx_ngntx_ctl_t;

static inline uint64_t CAVM_DTX_NGNTX_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_NGNTX_CTL(uint64_t a)
{
    if (a<=15)
        return 0x87e0fe280060ll + 0x2000ll * ((a) & 0xf);
    __cavm_csr_fatal("DTX_NGNTX_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_NGNTX_CTL(a) cavm_dtx_ngntx_ctl_t
#define bustype_CAVM_DTX_NGNTX_CTL(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_NGNTX_CTL(a) "DTX_NGNTX_CTL"
#define busnum_CAVM_DTX_NGNTX_CTL(a) (a)
#define arguments_CAVM_DTX_NGNTX_CTL(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_ngnt#_dat#
 *
 * INTERNAL: DTX NGNT Raw Data Register
 */
union cavm_dtx_ngntx_datx
{
    uint64_t u;
    struct cavm_dtx_ngntx_datx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
#else /* Word 0 - Little Endian */
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_ngntx_datx_s cn; */
};
typedef union cavm_dtx_ngntx_datx cavm_dtx_ngntx_datx_t;

static inline uint64_t CAVM_DTX_NGNTX_DATX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_NGNTX_DATX(uint64_t a, uint64_t b)
{
    if ((a<=15) && (b<=1))
        return 0x87e0fe280040ll + 0x2000ll * ((a) & 0xf) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_NGNTX_DATX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_NGNTX_DATX(a,b) cavm_dtx_ngntx_datx_t
#define bustype_CAVM_DTX_NGNTX_DATX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_NGNTX_DATX(a,b) "DTX_NGNTX_DATX"
#define busnum_CAVM_DTX_NGNTX_DATX(a,b) (a)
#define arguments_CAVM_DTX_NGNTX_DATX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_ngnt#_ena#
 *
 * INTERNAL: DTX NGNT Data Enable Register
 */
union cavm_dtx_ngntx_enax
{
    uint64_t u;
    struct cavm_dtx_ngntx_enax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_ngntx_enax_s cn; */
};
typedef union cavm_dtx_ngntx_enax cavm_dtx_ngntx_enax_t;

static inline uint64_t CAVM_DTX_NGNTX_ENAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_NGNTX_ENAX(uint64_t a, uint64_t b)
{
    if ((a<=15) && (b<=1))
        return 0x87e0fe280020ll + 0x2000ll * ((a) & 0xf) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_NGNTX_ENAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_NGNTX_ENAX(a,b) cavm_dtx_ngntx_enax_t
#define bustype_CAVM_DTX_NGNTX_ENAX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_NGNTX_ENAX(a,b) "DTX_NGNTX_ENAX"
#define busnum_CAVM_DTX_NGNTX_ENAX(a,b) (a)
#define arguments_CAVM_DTX_NGNTX_ENAX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_ngnt#_sel#
 *
 * INTERNAL: DTX NGNT Select Register
 */
union cavm_dtx_ngntx_selx
{
    uint64_t u;
    struct cavm_dtx_ngntx_selx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
#else /* Word 0 - Little Endian */
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_ngntx_selx_s cn; */
};
typedef union cavm_dtx_ngntx_selx cavm_dtx_ngntx_selx_t;

static inline uint64_t CAVM_DTX_NGNTX_SELX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_NGNTX_SELX(uint64_t a, uint64_t b)
{
    if ((a<=15) && (b<=1))
        return 0x87e0fe280000ll + 0x2000ll * ((a) & 0xf) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_NGNTX_SELX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_NGNTX_SELX(a,b) cavm_dtx_ngntx_selx_t
#define bustype_CAVM_DTX_NGNTX_SELX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_NGNTX_SELX(a,b) "DTX_NGNTX_SELX"
#define busnum_CAVM_DTX_NGNTX_SELX(a,b) (a)
#define arguments_CAVM_DTX_NGNTX_SELX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_nixrx#_bcst_rsp
 *
 * INTERNAL: DTX NIXRX Control Register
 */
union cavm_dtx_nixrxx_bcst_rsp
{
    uint64_t u;
    struct cavm_dtx_nixrxx_bcst_rsp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_nixrxx_bcst_rsp_s cn; */
};
typedef union cavm_dtx_nixrxx_bcst_rsp cavm_dtx_nixrxx_bcst_rsp_t;

static inline uint64_t CAVM_DTX_NIXRXX_BCST_RSP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_NIXRXX_BCST_RSP(uint64_t a)
{
    if (a<=1)
        return 0x87e0fe898080ll + 0x2000ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_NIXRXX_BCST_RSP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_NIXRXX_BCST_RSP(a) cavm_dtx_nixrxx_bcst_rsp_t
#define bustype_CAVM_DTX_NIXRXX_BCST_RSP(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_NIXRXX_BCST_RSP(a) "DTX_NIXRXX_BCST_RSP"
#define busnum_CAVM_DTX_NIXRXX_BCST_RSP(a) (a)
#define arguments_CAVM_DTX_NIXRXX_BCST_RSP(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_nixrx#_ctl
 *
 * INTERNAL: DTX NIXRX Control Register
 */
union cavm_dtx_nixrxx_ctl
{
    uint64_t u;
    struct cavm_dtx_nixrxx_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_2_3          : 2;
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
#else /* Word 0 - Little Endian */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t reserved_2_3          : 2;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_nixrxx_ctl_s cn; */
};
typedef union cavm_dtx_nixrxx_ctl cavm_dtx_nixrxx_ctl_t;

static inline uint64_t CAVM_DTX_NIXRXX_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_NIXRXX_CTL(uint64_t a)
{
    if (a<=1)
        return 0x87e0fe898060ll + 0x2000ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_NIXRXX_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_NIXRXX_CTL(a) cavm_dtx_nixrxx_ctl_t
#define bustype_CAVM_DTX_NIXRXX_CTL(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_NIXRXX_CTL(a) "DTX_NIXRXX_CTL"
#define busnum_CAVM_DTX_NIXRXX_CTL(a) (a)
#define arguments_CAVM_DTX_NIXRXX_CTL(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_nixrx#_dat#
 *
 * INTERNAL: DTX NIXRX Raw Data Register
 */
union cavm_dtx_nixrxx_datx
{
    uint64_t u;
    struct cavm_dtx_nixrxx_datx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
#else /* Word 0 - Little Endian */
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_nixrxx_datx_s cn; */
};
typedef union cavm_dtx_nixrxx_datx cavm_dtx_nixrxx_datx_t;

static inline uint64_t CAVM_DTX_NIXRXX_DATX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_NIXRXX_DATX(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=1))
        return 0x87e0fe898040ll + 0x2000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_NIXRXX_DATX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_NIXRXX_DATX(a,b) cavm_dtx_nixrxx_datx_t
#define bustype_CAVM_DTX_NIXRXX_DATX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_NIXRXX_DATX(a,b) "DTX_NIXRXX_DATX"
#define busnum_CAVM_DTX_NIXRXX_DATX(a,b) (a)
#define arguments_CAVM_DTX_NIXRXX_DATX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_nixrx#_ena#
 *
 * INTERNAL: DTX NIXRX Data Enable Register
 */
union cavm_dtx_nixrxx_enax
{
    uint64_t u;
    struct cavm_dtx_nixrxx_enax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_nixrxx_enax_s cn; */
};
typedef union cavm_dtx_nixrxx_enax cavm_dtx_nixrxx_enax_t;

static inline uint64_t CAVM_DTX_NIXRXX_ENAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_NIXRXX_ENAX(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=1))
        return 0x87e0fe898020ll + 0x2000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_NIXRXX_ENAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_NIXRXX_ENAX(a,b) cavm_dtx_nixrxx_enax_t
#define bustype_CAVM_DTX_NIXRXX_ENAX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_NIXRXX_ENAX(a,b) "DTX_NIXRXX_ENAX"
#define busnum_CAVM_DTX_NIXRXX_ENAX(a,b) (a)
#define arguments_CAVM_DTX_NIXRXX_ENAX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_nixrx#_sel#
 *
 * INTERNAL: DTX NIXRX Select Register
 */
union cavm_dtx_nixrxx_selx
{
    uint64_t u;
    struct cavm_dtx_nixrxx_selx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
#else /* Word 0 - Little Endian */
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_nixrxx_selx_s cn; */
};
typedef union cavm_dtx_nixrxx_selx cavm_dtx_nixrxx_selx_t;

static inline uint64_t CAVM_DTX_NIXRXX_SELX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_NIXRXX_SELX(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=1))
        return 0x87e0fe898000ll + 0x2000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_NIXRXX_SELX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_NIXRXX_SELX(a,b) cavm_dtx_nixrxx_selx_t
#define bustype_CAVM_DTX_NIXRXX_SELX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_NIXRXX_SELX(a,b) "DTX_NIXRXX_SELX"
#define busnum_CAVM_DTX_NIXRXX_SELX(a,b) (a)
#define arguments_CAVM_DTX_NIXRXX_SELX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_nixtx#_bcst_rsp
 *
 * INTERNAL: DTX NIXTX Control Register
 */
union cavm_dtx_nixtxx_bcst_rsp
{
    uint64_t u;
    struct cavm_dtx_nixtxx_bcst_rsp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_nixtxx_bcst_rsp_s cn; */
};
typedef union cavm_dtx_nixtxx_bcst_rsp cavm_dtx_nixtxx_bcst_rsp_t;

static inline uint64_t CAVM_DTX_NIXTXX_BCST_RSP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_NIXTXX_BCST_RSP(uint64_t a)
{
    if (a<=1)
        return 0x87e0fe8a0080ll + 0x2000ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_NIXTXX_BCST_RSP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_NIXTXX_BCST_RSP(a) cavm_dtx_nixtxx_bcst_rsp_t
#define bustype_CAVM_DTX_NIXTXX_BCST_RSP(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_NIXTXX_BCST_RSP(a) "DTX_NIXTXX_BCST_RSP"
#define busnum_CAVM_DTX_NIXTXX_BCST_RSP(a) (a)
#define arguments_CAVM_DTX_NIXTXX_BCST_RSP(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_nixtx#_ctl
 *
 * INTERNAL: DTX NIXTX Control Register
 */
union cavm_dtx_nixtxx_ctl
{
    uint64_t u;
    struct cavm_dtx_nixtxx_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_2_3          : 2;
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
#else /* Word 0 - Little Endian */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t reserved_2_3          : 2;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_nixtxx_ctl_s cn; */
};
typedef union cavm_dtx_nixtxx_ctl cavm_dtx_nixtxx_ctl_t;

static inline uint64_t CAVM_DTX_NIXTXX_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_NIXTXX_CTL(uint64_t a)
{
    if (a<=1)
        return 0x87e0fe8a0060ll + 0x2000ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_NIXTXX_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_NIXTXX_CTL(a) cavm_dtx_nixtxx_ctl_t
#define bustype_CAVM_DTX_NIXTXX_CTL(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_NIXTXX_CTL(a) "DTX_NIXTXX_CTL"
#define busnum_CAVM_DTX_NIXTXX_CTL(a) (a)
#define arguments_CAVM_DTX_NIXTXX_CTL(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_nixtx#_dat#
 *
 * INTERNAL: DTX NIXTX Raw Data Register
 */
union cavm_dtx_nixtxx_datx
{
    uint64_t u;
    struct cavm_dtx_nixtxx_datx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
#else /* Word 0 - Little Endian */
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_nixtxx_datx_s cn; */
};
typedef union cavm_dtx_nixtxx_datx cavm_dtx_nixtxx_datx_t;

static inline uint64_t CAVM_DTX_NIXTXX_DATX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_NIXTXX_DATX(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=1))
        return 0x87e0fe8a0040ll + 0x2000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_NIXTXX_DATX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_NIXTXX_DATX(a,b) cavm_dtx_nixtxx_datx_t
#define bustype_CAVM_DTX_NIXTXX_DATX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_NIXTXX_DATX(a,b) "DTX_NIXTXX_DATX"
#define busnum_CAVM_DTX_NIXTXX_DATX(a,b) (a)
#define arguments_CAVM_DTX_NIXTXX_DATX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_nixtx#_ena#
 *
 * INTERNAL: DTX NIXTX Data Enable Register
 */
union cavm_dtx_nixtxx_enax
{
    uint64_t u;
    struct cavm_dtx_nixtxx_enax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_nixtxx_enax_s cn; */
};
typedef union cavm_dtx_nixtxx_enax cavm_dtx_nixtxx_enax_t;

static inline uint64_t CAVM_DTX_NIXTXX_ENAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_NIXTXX_ENAX(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=1))
        return 0x87e0fe8a0020ll + 0x2000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_NIXTXX_ENAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_NIXTXX_ENAX(a,b) cavm_dtx_nixtxx_enax_t
#define bustype_CAVM_DTX_NIXTXX_ENAX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_NIXTXX_ENAX(a,b) "DTX_NIXTXX_ENAX"
#define busnum_CAVM_DTX_NIXTXX_ENAX(a,b) (a)
#define arguments_CAVM_DTX_NIXTXX_ENAX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_nixtx#_sel#
 *
 * INTERNAL: DTX NIXTX Select Register
 */
union cavm_dtx_nixtxx_selx
{
    uint64_t u;
    struct cavm_dtx_nixtxx_selx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
#else /* Word 0 - Little Endian */
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_nixtxx_selx_s cn; */
};
typedef union cavm_dtx_nixtxx_selx cavm_dtx_nixtxx_selx_t;

static inline uint64_t CAVM_DTX_NIXTXX_SELX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_NIXTXX_SELX(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=1))
        return 0x87e0fe8a0000ll + 0x2000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_NIXTXX_SELX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_NIXTXX_SELX(a,b) cavm_dtx_nixtxx_selx_t
#define bustype_CAVM_DTX_NIXTXX_SELX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_NIXTXX_SELX(a,b) "DTX_NIXTXX_SELX"
#define busnum_CAVM_DTX_NIXTXX_SELX(a,b) (a)
#define arguments_CAVM_DTX_NIXTXX_SELX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_npa_bcst_rsp
 *
 * INTERNAL: DTX NPA Control Register
 */
union cavm_dtx_npa_bcst_rsp
{
    uint64_t u;
    struct cavm_dtx_npa_bcst_rsp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_npa_bcst_rsp_s cn; */
};
typedef union cavm_dtx_npa_bcst_rsp cavm_dtx_npa_bcst_rsp_t;

#define CAVM_DTX_NPA_BCST_RSP CAVM_DTX_NPA_BCST_RSP_FUNC()
static inline uint64_t CAVM_DTX_NPA_BCST_RSP_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_NPA_BCST_RSP_FUNC(void)
{
    return 0x87e0fe89e080ll;
}

#define typedef_CAVM_DTX_NPA_BCST_RSP cavm_dtx_npa_bcst_rsp_t
#define bustype_CAVM_DTX_NPA_BCST_RSP CSR_TYPE_RSL
#define basename_CAVM_DTX_NPA_BCST_RSP "DTX_NPA_BCST_RSP"
#define busnum_CAVM_DTX_NPA_BCST_RSP 0
#define arguments_CAVM_DTX_NPA_BCST_RSP -1,-1,-1,-1

/**
 * Register (RSL) dtx_npa_ctl
 *
 * INTERNAL: DTX NPA Control Register
 */
union cavm_dtx_npa_ctl
{
    uint64_t u;
    struct cavm_dtx_npa_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_2_3          : 2;
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
#else /* Word 0 - Little Endian */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t reserved_2_3          : 2;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_npa_ctl_s cn; */
};
typedef union cavm_dtx_npa_ctl cavm_dtx_npa_ctl_t;

#define CAVM_DTX_NPA_CTL CAVM_DTX_NPA_CTL_FUNC()
static inline uint64_t CAVM_DTX_NPA_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_NPA_CTL_FUNC(void)
{
    return 0x87e0fe89e060ll;
}

#define typedef_CAVM_DTX_NPA_CTL cavm_dtx_npa_ctl_t
#define bustype_CAVM_DTX_NPA_CTL CSR_TYPE_RSL
#define basename_CAVM_DTX_NPA_CTL "DTX_NPA_CTL"
#define busnum_CAVM_DTX_NPA_CTL 0
#define arguments_CAVM_DTX_NPA_CTL -1,-1,-1,-1

/**
 * Register (RSL) dtx_npa_dat#
 *
 * INTERNAL: DTX NPA Raw Data Register
 */
union cavm_dtx_npa_datx
{
    uint64_t u;
    struct cavm_dtx_npa_datx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
#else /* Word 0 - Little Endian */
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_npa_datx_s cn; */
};
typedef union cavm_dtx_npa_datx cavm_dtx_npa_datx_t;

static inline uint64_t CAVM_DTX_NPA_DATX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_NPA_DATX(uint64_t a)
{
    if (a<=1)
        return 0x87e0fe89e040ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_NPA_DATX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_NPA_DATX(a) cavm_dtx_npa_datx_t
#define bustype_CAVM_DTX_NPA_DATX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_NPA_DATX(a) "DTX_NPA_DATX"
#define busnum_CAVM_DTX_NPA_DATX(a) (a)
#define arguments_CAVM_DTX_NPA_DATX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_npa_ena#
 *
 * INTERNAL: DTX NPA Data Enable Register
 */
union cavm_dtx_npa_enax
{
    uint64_t u;
    struct cavm_dtx_npa_enax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_npa_enax_s cn; */
};
typedef union cavm_dtx_npa_enax cavm_dtx_npa_enax_t;

static inline uint64_t CAVM_DTX_NPA_ENAX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_NPA_ENAX(uint64_t a)
{
    if (a<=1)
        return 0x87e0fe89e020ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_NPA_ENAX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_NPA_ENAX(a) cavm_dtx_npa_enax_t
#define bustype_CAVM_DTX_NPA_ENAX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_NPA_ENAX(a) "DTX_NPA_ENAX"
#define busnum_CAVM_DTX_NPA_ENAX(a) (a)
#define arguments_CAVM_DTX_NPA_ENAX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_npa_sel#
 *
 * INTERNAL: DTX NPA Select Register
 */
union cavm_dtx_npa_selx
{
    uint64_t u;
    struct cavm_dtx_npa_selx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
#else /* Word 0 - Little Endian */
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_npa_selx_s cn; */
};
typedef union cavm_dtx_npa_selx cavm_dtx_npa_selx_t;

static inline uint64_t CAVM_DTX_NPA_SELX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_NPA_SELX(uint64_t a)
{
    if (a<=1)
        return 0x87e0fe89e000ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_NPA_SELX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_NPA_SELX(a) cavm_dtx_npa_selx_t
#define bustype_CAVM_DTX_NPA_SELX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_NPA_SELX(a) "DTX_NPA_SELX"
#define busnum_CAVM_DTX_NPA_SELX(a) (a)
#define arguments_CAVM_DTX_NPA_SELX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_npc_bcst_rsp
 *
 * INTERNAL: DTX NPC Control Register
 */
union cavm_dtx_npc_bcst_rsp
{
    uint64_t u;
    struct cavm_dtx_npc_bcst_rsp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_npc_bcst_rsp_s cn; */
};
typedef union cavm_dtx_npc_bcst_rsp cavm_dtx_npc_bcst_rsp_t;

#define CAVM_DTX_NPC_BCST_RSP CAVM_DTX_NPC_BCST_RSP_FUNC()
static inline uint64_t CAVM_DTX_NPC_BCST_RSP_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_NPC_BCST_RSP_FUNC(void)
{
    return 0x87e0fe894080ll;
}

#define typedef_CAVM_DTX_NPC_BCST_RSP cavm_dtx_npc_bcst_rsp_t
#define bustype_CAVM_DTX_NPC_BCST_RSP CSR_TYPE_RSL
#define basename_CAVM_DTX_NPC_BCST_RSP "DTX_NPC_BCST_RSP"
#define busnum_CAVM_DTX_NPC_BCST_RSP 0
#define arguments_CAVM_DTX_NPC_BCST_RSP -1,-1,-1,-1

/**
 * Register (RSL) dtx_npc_ctl
 *
 * INTERNAL: DTX NPC Control Register
 */
union cavm_dtx_npc_ctl
{
    uint64_t u;
    struct cavm_dtx_npc_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_2_3          : 2;
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
#else /* Word 0 - Little Endian */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t reserved_2_3          : 2;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_npc_ctl_s cn; */
};
typedef union cavm_dtx_npc_ctl cavm_dtx_npc_ctl_t;

#define CAVM_DTX_NPC_CTL CAVM_DTX_NPC_CTL_FUNC()
static inline uint64_t CAVM_DTX_NPC_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_NPC_CTL_FUNC(void)
{
    return 0x87e0fe894060ll;
}

#define typedef_CAVM_DTX_NPC_CTL cavm_dtx_npc_ctl_t
#define bustype_CAVM_DTX_NPC_CTL CSR_TYPE_RSL
#define basename_CAVM_DTX_NPC_CTL "DTX_NPC_CTL"
#define busnum_CAVM_DTX_NPC_CTL 0
#define arguments_CAVM_DTX_NPC_CTL -1,-1,-1,-1

/**
 * Register (RSL) dtx_npc_dat#
 *
 * INTERNAL: DTX NPC Raw Data Register
 */
union cavm_dtx_npc_datx
{
    uint64_t u;
    struct cavm_dtx_npc_datx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
#else /* Word 0 - Little Endian */
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_npc_datx_s cn; */
};
typedef union cavm_dtx_npc_datx cavm_dtx_npc_datx_t;

static inline uint64_t CAVM_DTX_NPC_DATX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_NPC_DATX(uint64_t a)
{
    if (a<=1)
        return 0x87e0fe894040ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_NPC_DATX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_NPC_DATX(a) cavm_dtx_npc_datx_t
#define bustype_CAVM_DTX_NPC_DATX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_NPC_DATX(a) "DTX_NPC_DATX"
#define busnum_CAVM_DTX_NPC_DATX(a) (a)
#define arguments_CAVM_DTX_NPC_DATX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_npc_ena#
 *
 * INTERNAL: DTX NPC Data Enable Register
 */
union cavm_dtx_npc_enax
{
    uint64_t u;
    struct cavm_dtx_npc_enax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_npc_enax_s cn; */
};
typedef union cavm_dtx_npc_enax cavm_dtx_npc_enax_t;

static inline uint64_t CAVM_DTX_NPC_ENAX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_NPC_ENAX(uint64_t a)
{
    if (a<=1)
        return 0x87e0fe894020ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_NPC_ENAX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_NPC_ENAX(a) cavm_dtx_npc_enax_t
#define bustype_CAVM_DTX_NPC_ENAX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_NPC_ENAX(a) "DTX_NPC_ENAX"
#define busnum_CAVM_DTX_NPC_ENAX(a) (a)
#define arguments_CAVM_DTX_NPC_ENAX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_npc_sel#
 *
 * INTERNAL: DTX NPC Select Register
 */
union cavm_dtx_npc_selx
{
    uint64_t u;
    struct cavm_dtx_npc_selx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
#else /* Word 0 - Little Endian */
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_npc_selx_s cn; */
};
typedef union cavm_dtx_npc_selx cavm_dtx_npc_selx_t;

static inline uint64_t CAVM_DTX_NPC_SELX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_NPC_SELX(uint64_t a)
{
    if (a<=1)
        return 0x87e0fe894000ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_NPC_SELX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_NPC_SELX(a) cavm_dtx_npc_selx_t
#define bustype_CAVM_DTX_NPC_SELX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_NPC_SELX(a) "DTX_NPC_SELX"
#define busnum_CAVM_DTX_NPC_SELX(a) (a)
#define arguments_CAVM_DTX_NPC_SELX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_pdec#_bcst_rsp
 *
 * INTERNAL: DTX PDEC Control Register
 */
union cavm_dtx_pdecx_bcst_rsp
{
    uint64_t u;
    struct cavm_dtx_pdecx_bcst_rsp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_pdecx_bcst_rsp_s cn; */
};
typedef union cavm_dtx_pdecx_bcst_rsp cavm_dtx_pdecx_bcst_rsp_t;

static inline uint64_t CAVM_DTX_PDECX_BCST_RSP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_PDECX_BCST_RSP(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x87e0fe304080ll + 0x2000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x87e0fe304080ll + 0x2000ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_PDECX_BCST_RSP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_PDECX_BCST_RSP(a) cavm_dtx_pdecx_bcst_rsp_t
#define bustype_CAVM_DTX_PDECX_BCST_RSP(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_PDECX_BCST_RSP(a) "DTX_PDECX_BCST_RSP"
#define busnum_CAVM_DTX_PDECX_BCST_RSP(a) (a)
#define arguments_CAVM_DTX_PDECX_BCST_RSP(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_pdec#_ctl
 *
 * INTERNAL: DTX PDEC Control Register
 */
union cavm_dtx_pdecx_ctl
{
    uint64_t u;
    struct cavm_dtx_pdecx_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_2_3          : 2;
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
#else /* Word 0 - Little Endian */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t reserved_2_3          : 2;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_pdecx_ctl_s cn; */
};
typedef union cavm_dtx_pdecx_ctl cavm_dtx_pdecx_ctl_t;

static inline uint64_t CAVM_DTX_PDECX_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_PDECX_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x87e0fe304060ll + 0x2000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x87e0fe304060ll + 0x2000ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_PDECX_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_PDECX_CTL(a) cavm_dtx_pdecx_ctl_t
#define bustype_CAVM_DTX_PDECX_CTL(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_PDECX_CTL(a) "DTX_PDECX_CTL"
#define busnum_CAVM_DTX_PDECX_CTL(a) (a)
#define arguments_CAVM_DTX_PDECX_CTL(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_pdec#_dat#
 *
 * INTERNAL: DTX PDEC Raw Data Register
 */
union cavm_dtx_pdecx_datx
{
    uint64_t u;
    struct cavm_dtx_pdecx_datx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
#else /* Word 0 - Little Endian */
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_pdecx_datx_s cn; */
};
typedef union cavm_dtx_pdecx_datx cavm_dtx_pdecx_datx_t;

static inline uint64_t CAVM_DTX_PDECX_DATX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_PDECX_DATX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=1) && (b<=1)))
        return 0x87e0fe304040ll + 0x2000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=1) && (b<=1)))
        return 0x87e0fe304040ll + 0x2000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_PDECX_DATX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_PDECX_DATX(a,b) cavm_dtx_pdecx_datx_t
#define bustype_CAVM_DTX_PDECX_DATX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_PDECX_DATX(a,b) "DTX_PDECX_DATX"
#define busnum_CAVM_DTX_PDECX_DATX(a,b) (a)
#define arguments_CAVM_DTX_PDECX_DATX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_pdec#_ena#
 *
 * INTERNAL: DTX PDEC Data Enable Register
 */
union cavm_dtx_pdecx_enax
{
    uint64_t u;
    struct cavm_dtx_pdecx_enax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_pdecx_enax_s cn; */
};
typedef union cavm_dtx_pdecx_enax cavm_dtx_pdecx_enax_t;

static inline uint64_t CAVM_DTX_PDECX_ENAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_PDECX_ENAX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=1) && (b<=1)))
        return 0x87e0fe304020ll + 0x2000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=1) && (b<=1)))
        return 0x87e0fe304020ll + 0x2000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_PDECX_ENAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_PDECX_ENAX(a,b) cavm_dtx_pdecx_enax_t
#define bustype_CAVM_DTX_PDECX_ENAX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_PDECX_ENAX(a,b) "DTX_PDECX_ENAX"
#define busnum_CAVM_DTX_PDECX_ENAX(a,b) (a)
#define arguments_CAVM_DTX_PDECX_ENAX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_pdec#_sel#
 *
 * INTERNAL: DTX PDEC Select Register
 */
union cavm_dtx_pdecx_selx
{
    uint64_t u;
    struct cavm_dtx_pdecx_selx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
#else /* Word 0 - Little Endian */
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_pdecx_selx_s cn; */
};
typedef union cavm_dtx_pdecx_selx cavm_dtx_pdecx_selx_t;

static inline uint64_t CAVM_DTX_PDECX_SELX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_PDECX_SELX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=1) && (b<=1)))
        return 0x87e0fe304000ll + 0x2000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=1) && (b<=1)))
        return 0x87e0fe304000ll + 0x2000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_PDECX_SELX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_PDECX_SELX(a,b) cavm_dtx_pdecx_selx_t
#define bustype_CAVM_DTX_PDECX_SELX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_PDECX_SELX(a,b) "DTX_PDECX_SELX"
#define busnum_CAVM_DTX_PDECX_SELX(a,b) (a)
#define arguments_CAVM_DTX_PDECX_SELX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_pem#_bcst_rsp
 *
 * INTERNAL: DTX PEM Control Register
 */
union cavm_dtx_pemx_bcst_rsp
{
    uint64_t u;
    struct cavm_dtx_pemx_bcst_rsp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_pemx_bcst_rsp_s cn; */
};
typedef union cavm_dtx_pemx_bcst_rsp cavm_dtx_pemx_bcst_rsp_t;

static inline uint64_t CAVM_DTX_PEMX_BCST_RSP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_PEMX_BCST_RSP(uint64_t a)
{
    if (a<=7)
        return 0x87e0fe9c0080ll + 0x2000ll * ((a) & 0x7);
    __cavm_csr_fatal("DTX_PEMX_BCST_RSP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_PEMX_BCST_RSP(a) cavm_dtx_pemx_bcst_rsp_t
#define bustype_CAVM_DTX_PEMX_BCST_RSP(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_PEMX_BCST_RSP(a) "DTX_PEMX_BCST_RSP"
#define busnum_CAVM_DTX_PEMX_BCST_RSP(a) (a)
#define arguments_CAVM_DTX_PEMX_BCST_RSP(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_pem#_ctl
 *
 * INTERNAL: DTX PEM Control Register
 */
union cavm_dtx_pemx_ctl
{
    uint64_t u;
    struct cavm_dtx_pemx_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_2_3          : 2;
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
#else /* Word 0 - Little Endian */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t reserved_2_3          : 2;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_pemx_ctl_s cn; */
};
typedef union cavm_dtx_pemx_ctl cavm_dtx_pemx_ctl_t;

static inline uint64_t CAVM_DTX_PEMX_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_PEMX_CTL(uint64_t a)
{
    if (a<=7)
        return 0x87e0fe9c0060ll + 0x2000ll * ((a) & 0x7);
    __cavm_csr_fatal("DTX_PEMX_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_PEMX_CTL(a) cavm_dtx_pemx_ctl_t
#define bustype_CAVM_DTX_PEMX_CTL(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_PEMX_CTL(a) "DTX_PEMX_CTL"
#define busnum_CAVM_DTX_PEMX_CTL(a) (a)
#define arguments_CAVM_DTX_PEMX_CTL(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_pem#_dat#
 *
 * INTERNAL: DTX PEM Raw Data Register
 */
union cavm_dtx_pemx_datx
{
    uint64_t u;
    struct cavm_dtx_pemx_datx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
#else /* Word 0 - Little Endian */
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_pemx_datx_s cn; */
};
typedef union cavm_dtx_pemx_datx cavm_dtx_pemx_datx_t;

static inline uint64_t CAVM_DTX_PEMX_DATX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_PEMX_DATX(uint64_t a, uint64_t b)
{
    if ((a<=7) && (b<=1))
        return 0x87e0fe9c0040ll + 0x2000ll * ((a) & 0x7) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_PEMX_DATX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_PEMX_DATX(a,b) cavm_dtx_pemx_datx_t
#define bustype_CAVM_DTX_PEMX_DATX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_PEMX_DATX(a,b) "DTX_PEMX_DATX"
#define busnum_CAVM_DTX_PEMX_DATX(a,b) (a)
#define arguments_CAVM_DTX_PEMX_DATX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_pem#_ena#
 *
 * INTERNAL: DTX PEM Data Enable Register
 */
union cavm_dtx_pemx_enax
{
    uint64_t u;
    struct cavm_dtx_pemx_enax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_pemx_enax_s cn; */
};
typedef union cavm_dtx_pemx_enax cavm_dtx_pemx_enax_t;

static inline uint64_t CAVM_DTX_PEMX_ENAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_PEMX_ENAX(uint64_t a, uint64_t b)
{
    if ((a<=7) && (b<=1))
        return 0x87e0fe9c0020ll + 0x2000ll * ((a) & 0x7) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_PEMX_ENAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_PEMX_ENAX(a,b) cavm_dtx_pemx_enax_t
#define bustype_CAVM_DTX_PEMX_ENAX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_PEMX_ENAX(a,b) "DTX_PEMX_ENAX"
#define busnum_CAVM_DTX_PEMX_ENAX(a,b) (a)
#define arguments_CAVM_DTX_PEMX_ENAX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_pem#_sel#
 *
 * INTERNAL: DTX PEM Select Register
 */
union cavm_dtx_pemx_selx
{
    uint64_t u;
    struct cavm_dtx_pemx_selx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
#else /* Word 0 - Little Endian */
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_pemx_selx_s cn; */
};
typedef union cavm_dtx_pemx_selx cavm_dtx_pemx_selx_t;

static inline uint64_t CAVM_DTX_PEMX_SELX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_PEMX_SELX(uint64_t a, uint64_t b)
{
    if ((a<=7) && (b<=1))
        return 0x87e0fe9c0000ll + 0x2000ll * ((a) & 0x7) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_PEMX_SELX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_PEMX_SELX(a,b) cavm_dtx_pemx_selx_t
#define bustype_CAVM_DTX_PEMX_SELX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_PEMX_SELX(a,b) "DTX_PEMX_SELX"
#define busnum_CAVM_DTX_PEMX_SELX(a,b) (a)
#define arguments_CAVM_DTX_PEMX_SELX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_penc#_bcst_rsp
 *
 * INTERNAL: DTX PENC Control Register
 */
union cavm_dtx_pencx_bcst_rsp
{
    uint64_t u;
    struct cavm_dtx_pencx_bcst_rsp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_pencx_bcst_rsp_s cn; */
};
typedef union cavm_dtx_pencx_bcst_rsp cavm_dtx_pencx_bcst_rsp_t;

static inline uint64_t CAVM_DTX_PENCX_BCST_RSP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_PENCX_BCST_RSP(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x87e0fe2c0080ll + 0x2000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x87e0fe2c0080ll + 0x2000ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_PENCX_BCST_RSP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_PENCX_BCST_RSP(a) cavm_dtx_pencx_bcst_rsp_t
#define bustype_CAVM_DTX_PENCX_BCST_RSP(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_PENCX_BCST_RSP(a) "DTX_PENCX_BCST_RSP"
#define busnum_CAVM_DTX_PENCX_BCST_RSP(a) (a)
#define arguments_CAVM_DTX_PENCX_BCST_RSP(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_penc#_ctl
 *
 * INTERNAL: DTX PENC Control Register
 */
union cavm_dtx_pencx_ctl
{
    uint64_t u;
    struct cavm_dtx_pencx_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_2_3          : 2;
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
#else /* Word 0 - Little Endian */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t reserved_2_3          : 2;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_pencx_ctl_s cn; */
};
typedef union cavm_dtx_pencx_ctl cavm_dtx_pencx_ctl_t;

static inline uint64_t CAVM_DTX_PENCX_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_PENCX_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x87e0fe2c0060ll + 0x2000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x87e0fe2c0060ll + 0x2000ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_PENCX_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_PENCX_CTL(a) cavm_dtx_pencx_ctl_t
#define bustype_CAVM_DTX_PENCX_CTL(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_PENCX_CTL(a) "DTX_PENCX_CTL"
#define busnum_CAVM_DTX_PENCX_CTL(a) (a)
#define arguments_CAVM_DTX_PENCX_CTL(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_penc#_dat#
 *
 * INTERNAL: DTX PENC Raw Data Register
 */
union cavm_dtx_pencx_datx
{
    uint64_t u;
    struct cavm_dtx_pencx_datx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
#else /* Word 0 - Little Endian */
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_pencx_datx_s cn; */
};
typedef union cavm_dtx_pencx_datx cavm_dtx_pencx_datx_t;

static inline uint64_t CAVM_DTX_PENCX_DATX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_PENCX_DATX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=1) && (b<=1)))
        return 0x87e0fe2c0040ll + 0x2000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=1) && (b<=1)))
        return 0x87e0fe2c0040ll + 0x2000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_PENCX_DATX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_PENCX_DATX(a,b) cavm_dtx_pencx_datx_t
#define bustype_CAVM_DTX_PENCX_DATX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_PENCX_DATX(a,b) "DTX_PENCX_DATX"
#define busnum_CAVM_DTX_PENCX_DATX(a,b) (a)
#define arguments_CAVM_DTX_PENCX_DATX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_penc#_ena#
 *
 * INTERNAL: DTX PENC Data Enable Register
 */
union cavm_dtx_pencx_enax
{
    uint64_t u;
    struct cavm_dtx_pencx_enax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_pencx_enax_s cn; */
};
typedef union cavm_dtx_pencx_enax cavm_dtx_pencx_enax_t;

static inline uint64_t CAVM_DTX_PENCX_ENAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_PENCX_ENAX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=1) && (b<=1)))
        return 0x87e0fe2c0020ll + 0x2000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=1) && (b<=1)))
        return 0x87e0fe2c0020ll + 0x2000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_PENCX_ENAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_PENCX_ENAX(a,b) cavm_dtx_pencx_enax_t
#define bustype_CAVM_DTX_PENCX_ENAX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_PENCX_ENAX(a,b) "DTX_PENCX_ENAX"
#define busnum_CAVM_DTX_PENCX_ENAX(a,b) (a)
#define arguments_CAVM_DTX_PENCX_ENAX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_penc#_sel#
 *
 * INTERNAL: DTX PENC Select Register
 */
union cavm_dtx_pencx_selx
{
    uint64_t u;
    struct cavm_dtx_pencx_selx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
#else /* Word 0 - Little Endian */
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_pencx_selx_s cn; */
};
typedef union cavm_dtx_pencx_selx cavm_dtx_pencx_selx_t;

static inline uint64_t CAVM_DTX_PENCX_SELX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_PENCX_SELX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=1) && (b<=1)))
        return 0x87e0fe2c0000ll + 0x2000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=1) && (b<=1)))
        return 0x87e0fe2c0000ll + 0x2000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_PENCX_SELX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_PENCX_SELX(a,b) cavm_dtx_pencx_selx_t
#define bustype_CAVM_DTX_PENCX_SELX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_PENCX_SELX(a,b) "DTX_PENCX_SELX"
#define busnum_CAVM_DTX_PENCX_SELX(a,b) (a)
#define arguments_CAVM_DTX_PENCX_SELX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_prchn_bcst_rsp
 *
 * INTERNAL: DTX PRCHN Control Register
 */
union cavm_dtx_prchn_bcst_rsp
{
    uint64_t u;
    struct cavm_dtx_prchn_bcst_rsp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_prchn_bcst_rsp_s cn; */
};
typedef union cavm_dtx_prchn_bcst_rsp cavm_dtx_prchn_bcst_rsp_t;

#define CAVM_DTX_PRCHN_BCST_RSP CAVM_DTX_PRCHN_BCST_RSP_FUNC()
static inline uint64_t CAVM_DTX_PRCHN_BCST_RSP_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_PRCHN_BCST_RSP_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x87e0fe326080ll;
    __cavm_csr_fatal("DTX_PRCHN_BCST_RSP", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_PRCHN_BCST_RSP cavm_dtx_prchn_bcst_rsp_t
#define bustype_CAVM_DTX_PRCHN_BCST_RSP CSR_TYPE_RSL
#define basename_CAVM_DTX_PRCHN_BCST_RSP "DTX_PRCHN_BCST_RSP"
#define busnum_CAVM_DTX_PRCHN_BCST_RSP 0
#define arguments_CAVM_DTX_PRCHN_BCST_RSP -1,-1,-1,-1

/**
 * Register (RSL) dtx_prchn_ctl
 *
 * INTERNAL: DTX PRCHN Control Register
 */
union cavm_dtx_prchn_ctl
{
    uint64_t u;
    struct cavm_dtx_prchn_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_2_3          : 2;
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
#else /* Word 0 - Little Endian */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t reserved_2_3          : 2;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_prchn_ctl_s cn; */
};
typedef union cavm_dtx_prchn_ctl cavm_dtx_prchn_ctl_t;

#define CAVM_DTX_PRCHN_CTL CAVM_DTX_PRCHN_CTL_FUNC()
static inline uint64_t CAVM_DTX_PRCHN_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_PRCHN_CTL_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x87e0fe326060ll;
    __cavm_csr_fatal("DTX_PRCHN_CTL", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_PRCHN_CTL cavm_dtx_prchn_ctl_t
#define bustype_CAVM_DTX_PRCHN_CTL CSR_TYPE_RSL
#define basename_CAVM_DTX_PRCHN_CTL "DTX_PRCHN_CTL"
#define busnum_CAVM_DTX_PRCHN_CTL 0
#define arguments_CAVM_DTX_PRCHN_CTL -1,-1,-1,-1

/**
 * Register (RSL) dtx_prchn_dat#
 *
 * INTERNAL: DTX PRCHN Raw Data Register
 */
union cavm_dtx_prchn_datx
{
    uint64_t u;
    struct cavm_dtx_prchn_datx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
#else /* Word 0 - Little Endian */
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_prchn_datx_s cn; */
};
typedef union cavm_dtx_prchn_datx cavm_dtx_prchn_datx_t;

static inline uint64_t CAVM_DTX_PRCHN_DATX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_PRCHN_DATX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x87e0fe326040ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_PRCHN_DATX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_PRCHN_DATX(a) cavm_dtx_prchn_datx_t
#define bustype_CAVM_DTX_PRCHN_DATX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_PRCHN_DATX(a) "DTX_PRCHN_DATX"
#define busnum_CAVM_DTX_PRCHN_DATX(a) (a)
#define arguments_CAVM_DTX_PRCHN_DATX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_prchn_ena#
 *
 * INTERNAL: DTX PRCHN Data Enable Register
 */
union cavm_dtx_prchn_enax
{
    uint64_t u;
    struct cavm_dtx_prchn_enax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_prchn_enax_s cn; */
};
typedef union cavm_dtx_prchn_enax cavm_dtx_prchn_enax_t;

static inline uint64_t CAVM_DTX_PRCHN_ENAX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_PRCHN_ENAX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x87e0fe326020ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_PRCHN_ENAX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_PRCHN_ENAX(a) cavm_dtx_prchn_enax_t
#define bustype_CAVM_DTX_PRCHN_ENAX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_PRCHN_ENAX(a) "DTX_PRCHN_ENAX"
#define busnum_CAVM_DTX_PRCHN_ENAX(a) (a)
#define arguments_CAVM_DTX_PRCHN_ENAX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_prchn_sel#
 *
 * INTERNAL: DTX PRCHN Select Register
 */
union cavm_dtx_prchn_selx
{
    uint64_t u;
    struct cavm_dtx_prchn_selx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
#else /* Word 0 - Little Endian */
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_prchn_selx_s cn; */
};
typedef union cavm_dtx_prchn_selx cavm_dtx_prchn_selx_t;

static inline uint64_t CAVM_DTX_PRCHN_SELX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_PRCHN_SELX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x87e0fe326000ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_PRCHN_SELX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_PRCHN_SELX(a) cavm_dtx_prchn_selx_t
#define bustype_CAVM_DTX_PRCHN_SELX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_PRCHN_SELX(a) "DTX_PRCHN_SELX"
#define busnum_CAVM_DTX_PRCHN_SELX(a) (a)
#define arguments_CAVM_DTX_PRCHN_SELX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_psm_bcst_rsp
 *
 * INTERNAL: DTX PSM Control Register
 */
union cavm_dtx_psm_bcst_rsp
{
    uint64_t u;
    struct cavm_dtx_psm_bcst_rsp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_psm_bcst_rsp_s cn; */
};
typedef union cavm_dtx_psm_bcst_rsp cavm_dtx_psm_bcst_rsp_t;

#define CAVM_DTX_PSM_BCST_RSP CAVM_DTX_PSM_BCST_RSP_FUNC()
static inline uint64_t CAVM_DTX_PSM_BCST_RSP_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_PSM_BCST_RSP_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KA))
        return 0x87e0fe8c0080ll;
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x87e0fe8c0080ll;
    __cavm_csr_fatal("DTX_PSM_BCST_RSP", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_PSM_BCST_RSP cavm_dtx_psm_bcst_rsp_t
#define bustype_CAVM_DTX_PSM_BCST_RSP CSR_TYPE_RSL
#define basename_CAVM_DTX_PSM_BCST_RSP "DTX_PSM_BCST_RSP"
#define busnum_CAVM_DTX_PSM_BCST_RSP 0
#define arguments_CAVM_DTX_PSM_BCST_RSP -1,-1,-1,-1

/**
 * Register (RSL) dtx_psm_ctl
 *
 * INTERNAL: DTX PSM Control Register
 */
union cavm_dtx_psm_ctl
{
    uint64_t u;
    struct cavm_dtx_psm_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_2_3          : 2;
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
#else /* Word 0 - Little Endian */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t reserved_2_3          : 2;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_psm_ctl_s cn; */
};
typedef union cavm_dtx_psm_ctl cavm_dtx_psm_ctl_t;

#define CAVM_DTX_PSM_CTL CAVM_DTX_PSM_CTL_FUNC()
static inline uint64_t CAVM_DTX_PSM_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_PSM_CTL_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KA))
        return 0x87e0fe8c0060ll;
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x87e0fe8c0060ll;
    __cavm_csr_fatal("DTX_PSM_CTL", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_PSM_CTL cavm_dtx_psm_ctl_t
#define bustype_CAVM_DTX_PSM_CTL CSR_TYPE_RSL
#define basename_CAVM_DTX_PSM_CTL "DTX_PSM_CTL"
#define busnum_CAVM_DTX_PSM_CTL 0
#define arguments_CAVM_DTX_PSM_CTL -1,-1,-1,-1

/**
 * Register (RSL) dtx_psm_dat#
 *
 * INTERNAL: DTX PSM Raw Data Register
 */
union cavm_dtx_psm_datx
{
    uint64_t u;
    struct cavm_dtx_psm_datx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
#else /* Word 0 - Little Endian */
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_psm_datx_s cn; */
};
typedef union cavm_dtx_psm_datx cavm_dtx_psm_datx_t;

static inline uint64_t CAVM_DTX_PSM_DATX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_PSM_DATX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x87e0fe8c0040ll + 8ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x87e0fe8c0040ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_PSM_DATX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_PSM_DATX(a) cavm_dtx_psm_datx_t
#define bustype_CAVM_DTX_PSM_DATX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_PSM_DATX(a) "DTX_PSM_DATX"
#define busnum_CAVM_DTX_PSM_DATX(a) (a)
#define arguments_CAVM_DTX_PSM_DATX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_psm_ena#
 *
 * INTERNAL: DTX PSM Data Enable Register
 */
union cavm_dtx_psm_enax
{
    uint64_t u;
    struct cavm_dtx_psm_enax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_psm_enax_s cn; */
};
typedef union cavm_dtx_psm_enax cavm_dtx_psm_enax_t;

static inline uint64_t CAVM_DTX_PSM_ENAX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_PSM_ENAX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x87e0fe8c0020ll + 8ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x87e0fe8c0020ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_PSM_ENAX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_PSM_ENAX(a) cavm_dtx_psm_enax_t
#define bustype_CAVM_DTX_PSM_ENAX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_PSM_ENAX(a) "DTX_PSM_ENAX"
#define busnum_CAVM_DTX_PSM_ENAX(a) (a)
#define arguments_CAVM_DTX_PSM_ENAX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_psm_sel#
 *
 * INTERNAL: DTX PSM Select Register
 */
union cavm_dtx_psm_selx
{
    uint64_t u;
    struct cavm_dtx_psm_selx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
#else /* Word 0 - Little Endian */
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_psm_selx_s cn; */
};
typedef union cavm_dtx_psm_selx cavm_dtx_psm_selx_t;

static inline uint64_t CAVM_DTX_PSM_SELX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_PSM_SELX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x87e0fe8c0000ll + 8ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x87e0fe8c0000ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_PSM_SELX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_PSM_SELX(a) cavm_dtx_psm_selx_t
#define bustype_CAVM_DTX_PSM_SELX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_PSM_SELX(a) "DTX_PSM_SELX"
#define busnum_CAVM_DTX_PSM_SELX(a) (a)
#define arguments_CAVM_DTX_PSM_SELX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_ptp_bcst_rsp
 *
 * INTERNAL: DTX PTP Control Register
 */
union cavm_dtx_ptp_bcst_rsp
{
    uint64_t u;
    struct cavm_dtx_ptp_bcst_rsp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_ptp_bcst_rsp_s cn; */
};
typedef union cavm_dtx_ptp_bcst_rsp cavm_dtx_ptp_bcst_rsp_t;

#define CAVM_DTX_PTP_BCST_RSP CAVM_DTX_PTP_BCST_RSP_FUNC()
static inline uint64_t CAVM_DTX_PTP_BCST_RSP_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_PTP_BCST_RSP_FUNC(void)
{
    return 0x87e0fe80e080ll;
}

#define typedef_CAVM_DTX_PTP_BCST_RSP cavm_dtx_ptp_bcst_rsp_t
#define bustype_CAVM_DTX_PTP_BCST_RSP CSR_TYPE_RSL
#define basename_CAVM_DTX_PTP_BCST_RSP "DTX_PTP_BCST_RSP"
#define busnum_CAVM_DTX_PTP_BCST_RSP 0
#define arguments_CAVM_DTX_PTP_BCST_RSP -1,-1,-1,-1

/**
 * Register (RSL) dtx_ptp_ctl
 *
 * INTERNAL: DTX PTP Control Register
 */
union cavm_dtx_ptp_ctl
{
    uint64_t u;
    struct cavm_dtx_ptp_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_2_3          : 2;
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
#else /* Word 0 - Little Endian */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t reserved_2_3          : 2;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_ptp_ctl_s cn; */
};
typedef union cavm_dtx_ptp_ctl cavm_dtx_ptp_ctl_t;

#define CAVM_DTX_PTP_CTL CAVM_DTX_PTP_CTL_FUNC()
static inline uint64_t CAVM_DTX_PTP_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_PTP_CTL_FUNC(void)
{
    return 0x87e0fe80e060ll;
}

#define typedef_CAVM_DTX_PTP_CTL cavm_dtx_ptp_ctl_t
#define bustype_CAVM_DTX_PTP_CTL CSR_TYPE_RSL
#define basename_CAVM_DTX_PTP_CTL "DTX_PTP_CTL"
#define busnum_CAVM_DTX_PTP_CTL 0
#define arguments_CAVM_DTX_PTP_CTL -1,-1,-1,-1

/**
 * Register (RSL) dtx_ptp_dat#
 *
 * INTERNAL: DTX PTP Raw Data Register
 */
union cavm_dtx_ptp_datx
{
    uint64_t u;
    struct cavm_dtx_ptp_datx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
#else /* Word 0 - Little Endian */
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_ptp_datx_s cn; */
};
typedef union cavm_dtx_ptp_datx cavm_dtx_ptp_datx_t;

static inline uint64_t CAVM_DTX_PTP_DATX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_PTP_DATX(uint64_t a)
{
    if (a<=1)
        return 0x87e0fe80e040ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_PTP_DATX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_PTP_DATX(a) cavm_dtx_ptp_datx_t
#define bustype_CAVM_DTX_PTP_DATX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_PTP_DATX(a) "DTX_PTP_DATX"
#define busnum_CAVM_DTX_PTP_DATX(a) (a)
#define arguments_CAVM_DTX_PTP_DATX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_ptp_ena#
 *
 * INTERNAL: DTX PTP Data Enable Register
 */
union cavm_dtx_ptp_enax
{
    uint64_t u;
    struct cavm_dtx_ptp_enax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_ptp_enax_s cn; */
};
typedef union cavm_dtx_ptp_enax cavm_dtx_ptp_enax_t;

static inline uint64_t CAVM_DTX_PTP_ENAX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_PTP_ENAX(uint64_t a)
{
    if (a<=1)
        return 0x87e0fe80e020ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_PTP_ENAX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_PTP_ENAX(a) cavm_dtx_ptp_enax_t
#define bustype_CAVM_DTX_PTP_ENAX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_PTP_ENAX(a) "DTX_PTP_ENAX"
#define busnum_CAVM_DTX_PTP_ENAX(a) (a)
#define arguments_CAVM_DTX_PTP_ENAX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_ptp_sel#
 *
 * INTERNAL: DTX PTP Select Register
 */
union cavm_dtx_ptp_selx
{
    uint64_t u;
    struct cavm_dtx_ptp_selx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
#else /* Word 0 - Little Endian */
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_ptp_selx_s cn; */
};
typedef union cavm_dtx_ptp_selx cavm_dtx_ptp_selx_t;

static inline uint64_t CAVM_DTX_PTP_SELX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_PTP_SELX(uint64_t a)
{
    if (a<=1)
        return 0x87e0fe80e000ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_PTP_SELX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_PTP_SELX(a) cavm_dtx_ptp_selx_t
#define bustype_CAVM_DTX_PTP_SELX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_PTP_SELX(a) "DTX_PTP_SELX"
#define busnum_CAVM_DTX_PTP_SELX(a) (a)
#define arguments_CAVM_DTX_PTP_SELX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_rdec#_bcst_rsp
 *
 * INTERNAL: DTX RDEC Control Register
 */
union cavm_dtx_rdecx_bcst_rsp
{
    uint64_t u;
    struct cavm_dtx_rdecx_bcst_rsp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_rdecx_bcst_rsp_s cn; */
};
typedef union cavm_dtx_rdecx_bcst_rsp cavm_dtx_rdecx_bcst_rsp_t;

static inline uint64_t CAVM_DTX_RDECX_BCST_RSP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_RDECX_BCST_RSP(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x87e0fe2d8080ll + 0x2000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=2))
        return 0x87e0fe2d8080ll + 0x2000ll * ((a) & 0x3);
    __cavm_csr_fatal("DTX_RDECX_BCST_RSP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_RDECX_BCST_RSP(a) cavm_dtx_rdecx_bcst_rsp_t
#define bustype_CAVM_DTX_RDECX_BCST_RSP(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_RDECX_BCST_RSP(a) "DTX_RDECX_BCST_RSP"
#define busnum_CAVM_DTX_RDECX_BCST_RSP(a) (a)
#define arguments_CAVM_DTX_RDECX_BCST_RSP(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_rdec#_ctl
 *
 * INTERNAL: DTX RDEC Control Register
 */
union cavm_dtx_rdecx_ctl
{
    uint64_t u;
    struct cavm_dtx_rdecx_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_2_3          : 2;
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
#else /* Word 0 - Little Endian */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t reserved_2_3          : 2;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_rdecx_ctl_s cn; */
};
typedef union cavm_dtx_rdecx_ctl cavm_dtx_rdecx_ctl_t;

static inline uint64_t CAVM_DTX_RDECX_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_RDECX_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x87e0fe2d8060ll + 0x2000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=2))
        return 0x87e0fe2d8060ll + 0x2000ll * ((a) & 0x3);
    __cavm_csr_fatal("DTX_RDECX_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_RDECX_CTL(a) cavm_dtx_rdecx_ctl_t
#define bustype_CAVM_DTX_RDECX_CTL(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_RDECX_CTL(a) "DTX_RDECX_CTL"
#define busnum_CAVM_DTX_RDECX_CTL(a) (a)
#define arguments_CAVM_DTX_RDECX_CTL(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_rdec#_dat#
 *
 * INTERNAL: DTX RDEC Raw Data Register
 */
union cavm_dtx_rdecx_datx
{
    uint64_t u;
    struct cavm_dtx_rdecx_datx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
#else /* Word 0 - Little Endian */
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_rdecx_datx_s cn; */
};
typedef union cavm_dtx_rdecx_datx cavm_dtx_rdecx_datx_t;

static inline uint64_t CAVM_DTX_RDECX_DATX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_RDECX_DATX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=1) && (b<=1)))
        return 0x87e0fe2d8040ll + 0x2000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=2) && (b<=1)))
        return 0x87e0fe2d8040ll + 0x2000ll * ((a) & 0x3) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_RDECX_DATX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_RDECX_DATX(a,b) cavm_dtx_rdecx_datx_t
#define bustype_CAVM_DTX_RDECX_DATX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_RDECX_DATX(a,b) "DTX_RDECX_DATX"
#define busnum_CAVM_DTX_RDECX_DATX(a,b) (a)
#define arguments_CAVM_DTX_RDECX_DATX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_rdec#_ena#
 *
 * INTERNAL: DTX RDEC Data Enable Register
 */
union cavm_dtx_rdecx_enax
{
    uint64_t u;
    struct cavm_dtx_rdecx_enax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_rdecx_enax_s cn; */
};
typedef union cavm_dtx_rdecx_enax cavm_dtx_rdecx_enax_t;

static inline uint64_t CAVM_DTX_RDECX_ENAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_RDECX_ENAX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=1) && (b<=1)))
        return 0x87e0fe2d8020ll + 0x2000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=2) && (b<=1)))
        return 0x87e0fe2d8020ll + 0x2000ll * ((a) & 0x3) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_RDECX_ENAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_RDECX_ENAX(a,b) cavm_dtx_rdecx_enax_t
#define bustype_CAVM_DTX_RDECX_ENAX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_RDECX_ENAX(a,b) "DTX_RDECX_ENAX"
#define busnum_CAVM_DTX_RDECX_ENAX(a,b) (a)
#define arguments_CAVM_DTX_RDECX_ENAX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_rdec#_sel#
 *
 * INTERNAL: DTX RDEC Select Register
 */
union cavm_dtx_rdecx_selx
{
    uint64_t u;
    struct cavm_dtx_rdecx_selx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
#else /* Word 0 - Little Endian */
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_rdecx_selx_s cn; */
};
typedef union cavm_dtx_rdecx_selx cavm_dtx_rdecx_selx_t;

static inline uint64_t CAVM_DTX_RDECX_SELX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_RDECX_SELX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=1) && (b<=1)))
        return 0x87e0fe2d8000ll + 0x2000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=2) && (b<=1)))
        return 0x87e0fe2d8000ll + 0x2000ll * ((a) & 0x3) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_RDECX_SELX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_RDECX_SELX(a,b) cavm_dtx_rdecx_selx_t
#define bustype_CAVM_DTX_RDECX_SELX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_RDECX_SELX(a,b) "DTX_RDECX_SELX"
#define busnum_CAVM_DTX_RDECX_SELX(a,b) (a)
#define arguments_CAVM_DTX_RDECX_SELX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_rfoe#_bcst_rsp
 *
 * INTERNAL: DTX RFOE Control Register
 */
union cavm_dtx_rfoex_bcst_rsp
{
    uint64_t u;
    struct cavm_dtx_rfoex_bcst_rsp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_rfoex_bcst_rsp_s cn; */
};
typedef union cavm_dtx_rfoex_bcst_rsp cavm_dtx_rfoex_bcst_rsp_t;

static inline uint64_t CAVM_DTX_RFOEX_BCST_RSP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_RFOEX_BCST_RSP(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x87e0fe350080ll + 0x2000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e0fe350080ll + 0x2000ll * ((a) & 0x7);
    __cavm_csr_fatal("DTX_RFOEX_BCST_RSP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_RFOEX_BCST_RSP(a) cavm_dtx_rfoex_bcst_rsp_t
#define bustype_CAVM_DTX_RFOEX_BCST_RSP(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_RFOEX_BCST_RSP(a) "DTX_RFOEX_BCST_RSP"
#define busnum_CAVM_DTX_RFOEX_BCST_RSP(a) (a)
#define arguments_CAVM_DTX_RFOEX_BCST_RSP(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_rfoe#_ctl
 *
 * INTERNAL: DTX RFOE Control Register
 */
union cavm_dtx_rfoex_ctl
{
    uint64_t u;
    struct cavm_dtx_rfoex_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_2_3          : 2;
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
#else /* Word 0 - Little Endian */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t reserved_2_3          : 2;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_rfoex_ctl_s cn; */
};
typedef union cavm_dtx_rfoex_ctl cavm_dtx_rfoex_ctl_t;

static inline uint64_t CAVM_DTX_RFOEX_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_RFOEX_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x87e0fe350060ll + 0x2000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e0fe350060ll + 0x2000ll * ((a) & 0x7);
    __cavm_csr_fatal("DTX_RFOEX_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_RFOEX_CTL(a) cavm_dtx_rfoex_ctl_t
#define bustype_CAVM_DTX_RFOEX_CTL(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_RFOEX_CTL(a) "DTX_RFOEX_CTL"
#define busnum_CAVM_DTX_RFOEX_CTL(a) (a)
#define arguments_CAVM_DTX_RFOEX_CTL(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_rfoe#_dat#
 *
 * INTERNAL: DTX RFOE Raw Data Register
 */
union cavm_dtx_rfoex_datx
{
    uint64_t u;
    struct cavm_dtx_rfoex_datx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
#else /* Word 0 - Little Endian */
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_rfoex_datx_s cn; */
};
typedef union cavm_dtx_rfoex_datx cavm_dtx_rfoex_datx_t;

static inline uint64_t CAVM_DTX_RFOEX_DATX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_RFOEX_DATX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=1) && (b<=1)))
        return 0x87e0fe350040ll + 0x2000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=1)))
        return 0x87e0fe350040ll + 0x2000ll * ((a) & 0x7) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_RFOEX_DATX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_RFOEX_DATX(a,b) cavm_dtx_rfoex_datx_t
#define bustype_CAVM_DTX_RFOEX_DATX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_RFOEX_DATX(a,b) "DTX_RFOEX_DATX"
#define busnum_CAVM_DTX_RFOEX_DATX(a,b) (a)
#define arguments_CAVM_DTX_RFOEX_DATX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_rfoe#_ena#
 *
 * INTERNAL: DTX RFOE Data Enable Register
 */
union cavm_dtx_rfoex_enax
{
    uint64_t u;
    struct cavm_dtx_rfoex_enax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_rfoex_enax_s cn; */
};
typedef union cavm_dtx_rfoex_enax cavm_dtx_rfoex_enax_t;

static inline uint64_t CAVM_DTX_RFOEX_ENAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_RFOEX_ENAX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=1) && (b<=1)))
        return 0x87e0fe350020ll + 0x2000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=1)))
        return 0x87e0fe350020ll + 0x2000ll * ((a) & 0x7) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_RFOEX_ENAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_RFOEX_ENAX(a,b) cavm_dtx_rfoex_enax_t
#define bustype_CAVM_DTX_RFOEX_ENAX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_RFOEX_ENAX(a,b) "DTX_RFOEX_ENAX"
#define busnum_CAVM_DTX_RFOEX_ENAX(a,b) (a)
#define arguments_CAVM_DTX_RFOEX_ENAX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_rfoe#_sel#
 *
 * INTERNAL: DTX RFOE Select Register
 */
union cavm_dtx_rfoex_selx
{
    uint64_t u;
    struct cavm_dtx_rfoex_selx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
#else /* Word 0 - Little Endian */
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_rfoex_selx_s cn; */
};
typedef union cavm_dtx_rfoex_selx cavm_dtx_rfoex_selx_t;

static inline uint64_t CAVM_DTX_RFOEX_SELX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_RFOEX_SELX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=1) && (b<=1)))
        return 0x87e0fe350000ll + 0x2000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=1)))
        return 0x87e0fe350000ll + 0x2000ll * ((a) & 0x7) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_RFOEX_SELX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_RFOEX_SELX(a,b) cavm_dtx_rfoex_selx_t
#define bustype_CAVM_DTX_RFOEX_SELX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_RFOEX_SELX(a,b) "DTX_RFOEX_SELX"
#define busnum_CAVM_DTX_RFOEX_SELX(a,b) (a)
#define arguments_CAVM_DTX_RFOEX_SELX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_rmap#_bcst_rsp
 *
 * INTERNAL: DTX RMAP Control Register
 */
union cavm_dtx_rmapx_bcst_rsp
{
    uint64_t u;
    struct cavm_dtx_rmapx_bcst_rsp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_rmapx_bcst_rsp_s cn; */
};
typedef union cavm_dtx_rmapx_bcst_rsp cavm_dtx_rmapx_bcst_rsp_t;

static inline uint64_t CAVM_DTX_RMAPX_BCST_RSP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_RMAPX_BCST_RSP(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a==0))
        return 0x87e0fe308080ll + 0x2000ll * ((a) & 0x0);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x87e0fe308080ll + 0x2000ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_RMAPX_BCST_RSP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_RMAPX_BCST_RSP(a) cavm_dtx_rmapx_bcst_rsp_t
#define bustype_CAVM_DTX_RMAPX_BCST_RSP(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_RMAPX_BCST_RSP(a) "DTX_RMAPX_BCST_RSP"
#define busnum_CAVM_DTX_RMAPX_BCST_RSP(a) (a)
#define arguments_CAVM_DTX_RMAPX_BCST_RSP(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_rmap#_ctl
 *
 * INTERNAL: DTX RMAP Control Register
 */
union cavm_dtx_rmapx_ctl
{
    uint64_t u;
    struct cavm_dtx_rmapx_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_2_3          : 2;
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
#else /* Word 0 - Little Endian */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t reserved_2_3          : 2;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_rmapx_ctl_s cn; */
};
typedef union cavm_dtx_rmapx_ctl cavm_dtx_rmapx_ctl_t;

static inline uint64_t CAVM_DTX_RMAPX_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_RMAPX_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a==0))
        return 0x87e0fe308060ll + 0x2000ll * ((a) & 0x0);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x87e0fe308060ll + 0x2000ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_RMAPX_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_RMAPX_CTL(a) cavm_dtx_rmapx_ctl_t
#define bustype_CAVM_DTX_RMAPX_CTL(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_RMAPX_CTL(a) "DTX_RMAPX_CTL"
#define busnum_CAVM_DTX_RMAPX_CTL(a) (a)
#define arguments_CAVM_DTX_RMAPX_CTL(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_rmap#_dat#
 *
 * INTERNAL: DTX RMAP Raw Data Register
 */
union cavm_dtx_rmapx_datx
{
    uint64_t u;
    struct cavm_dtx_rmapx_datx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
#else /* Word 0 - Little Endian */
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_rmapx_datx_s cn; */
};
typedef union cavm_dtx_rmapx_datx cavm_dtx_rmapx_datx_t;

static inline uint64_t CAVM_DTX_RMAPX_DATX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_RMAPX_DATX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a==0) && (b<=1)))
        return 0x87e0fe308040ll + 0x2000ll * ((a) & 0x0) + 8ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=1) && (b<=1)))
        return 0x87e0fe308040ll + 0x2000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_RMAPX_DATX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_RMAPX_DATX(a,b) cavm_dtx_rmapx_datx_t
#define bustype_CAVM_DTX_RMAPX_DATX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_RMAPX_DATX(a,b) "DTX_RMAPX_DATX"
#define busnum_CAVM_DTX_RMAPX_DATX(a,b) (a)
#define arguments_CAVM_DTX_RMAPX_DATX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_rmap#_ena#
 *
 * INTERNAL: DTX RMAP Data Enable Register
 */
union cavm_dtx_rmapx_enax
{
    uint64_t u;
    struct cavm_dtx_rmapx_enax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_rmapx_enax_s cn; */
};
typedef union cavm_dtx_rmapx_enax cavm_dtx_rmapx_enax_t;

static inline uint64_t CAVM_DTX_RMAPX_ENAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_RMAPX_ENAX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a==0) && (b<=1)))
        return 0x87e0fe308020ll + 0x2000ll * ((a) & 0x0) + 8ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=1) && (b<=1)))
        return 0x87e0fe308020ll + 0x2000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_RMAPX_ENAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_RMAPX_ENAX(a,b) cavm_dtx_rmapx_enax_t
#define bustype_CAVM_DTX_RMAPX_ENAX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_RMAPX_ENAX(a,b) "DTX_RMAPX_ENAX"
#define busnum_CAVM_DTX_RMAPX_ENAX(a,b) (a)
#define arguments_CAVM_DTX_RMAPX_ENAX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_rmap#_sel#
 *
 * INTERNAL: DTX RMAP Select Register
 */
union cavm_dtx_rmapx_selx
{
    uint64_t u;
    struct cavm_dtx_rmapx_selx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
#else /* Word 0 - Little Endian */
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_rmapx_selx_s cn; */
};
typedef union cavm_dtx_rmapx_selx cavm_dtx_rmapx_selx_t;

static inline uint64_t CAVM_DTX_RMAPX_SELX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_RMAPX_SELX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a==0) && (b<=1)))
        return 0x87e0fe308000ll + 0x2000ll * ((a) & 0x0) + 8ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=1) && (b<=1)))
        return 0x87e0fe308000ll + 0x2000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_RMAPX_SELX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_RMAPX_SELX(a,b) cavm_dtx_rmapx_selx_t
#define bustype_CAVM_DTX_RMAPX_SELX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_RMAPX_SELX(a,b) "DTX_RMAPX_SELX"
#define busnum_CAVM_DTX_RMAPX_SELX(a,b) (a)
#define arguments_CAVM_DTX_RMAPX_SELX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_rnm_bcst_rsp
 *
 * INTERNAL: DTX RNM Control Register
 */
union cavm_dtx_rnm_bcst_rsp
{
    uint64_t u;
    struct cavm_dtx_rnm_bcst_rsp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_rnm_bcst_rsp_s cn; */
};
typedef union cavm_dtx_rnm_bcst_rsp cavm_dtx_rnm_bcst_rsp_t;

#define CAVM_DTX_RNM_BCST_RSP CAVM_DTX_RNM_BCST_RSP_FUNC()
static inline uint64_t CAVM_DTX_RNM_BCST_RSP_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_RNM_BCST_RSP_FUNC(void)
{
    return 0x87e0fe01e080ll;
}

#define typedef_CAVM_DTX_RNM_BCST_RSP cavm_dtx_rnm_bcst_rsp_t
#define bustype_CAVM_DTX_RNM_BCST_RSP CSR_TYPE_RSL
#define basename_CAVM_DTX_RNM_BCST_RSP "DTX_RNM_BCST_RSP"
#define busnum_CAVM_DTX_RNM_BCST_RSP 0
#define arguments_CAVM_DTX_RNM_BCST_RSP -1,-1,-1,-1

/**
 * Register (RSL) dtx_rnm_ctl
 *
 * INTERNAL: DTX RNM Control Register
 */
union cavm_dtx_rnm_ctl
{
    uint64_t u;
    struct cavm_dtx_rnm_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_2_3          : 2;
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
#else /* Word 0 - Little Endian */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t reserved_2_3          : 2;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_rnm_ctl_s cn; */
};
typedef union cavm_dtx_rnm_ctl cavm_dtx_rnm_ctl_t;

#define CAVM_DTX_RNM_CTL CAVM_DTX_RNM_CTL_FUNC()
static inline uint64_t CAVM_DTX_RNM_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_RNM_CTL_FUNC(void)
{
    return 0x87e0fe01e060ll;
}

#define typedef_CAVM_DTX_RNM_CTL cavm_dtx_rnm_ctl_t
#define bustype_CAVM_DTX_RNM_CTL CSR_TYPE_RSL
#define basename_CAVM_DTX_RNM_CTL "DTX_RNM_CTL"
#define busnum_CAVM_DTX_RNM_CTL 0
#define arguments_CAVM_DTX_RNM_CTL -1,-1,-1,-1

/**
 * Register (RSL) dtx_rnm_dat#
 *
 * INTERNAL: DTX RNM Raw Data Register
 */
union cavm_dtx_rnm_datx
{
    uint64_t u;
    struct cavm_dtx_rnm_datx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
#else /* Word 0 - Little Endian */
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_rnm_datx_s cn; */
};
typedef union cavm_dtx_rnm_datx cavm_dtx_rnm_datx_t;

static inline uint64_t CAVM_DTX_RNM_DATX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_RNM_DATX(uint64_t a)
{
    if (a<=1)
        return 0x87e0fe01e040ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_RNM_DATX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_RNM_DATX(a) cavm_dtx_rnm_datx_t
#define bustype_CAVM_DTX_RNM_DATX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_RNM_DATX(a) "DTX_RNM_DATX"
#define busnum_CAVM_DTX_RNM_DATX(a) (a)
#define arguments_CAVM_DTX_RNM_DATX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_rnm_ena#
 *
 * INTERNAL: DTX RNM Data Enable Register
 */
union cavm_dtx_rnm_enax
{
    uint64_t u;
    struct cavm_dtx_rnm_enax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_rnm_enax_s cn; */
};
typedef union cavm_dtx_rnm_enax cavm_dtx_rnm_enax_t;

static inline uint64_t CAVM_DTX_RNM_ENAX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_RNM_ENAX(uint64_t a)
{
    if (a<=1)
        return 0x87e0fe01e020ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_RNM_ENAX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_RNM_ENAX(a) cavm_dtx_rnm_enax_t
#define bustype_CAVM_DTX_RNM_ENAX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_RNM_ENAX(a) "DTX_RNM_ENAX"
#define busnum_CAVM_DTX_RNM_ENAX(a) (a)
#define arguments_CAVM_DTX_RNM_ENAX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_rnm_sel#
 *
 * INTERNAL: DTX RNM Select Register
 */
union cavm_dtx_rnm_selx
{
    uint64_t u;
    struct cavm_dtx_rnm_selx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
#else /* Word 0 - Little Endian */
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_rnm_selx_s cn; */
};
typedef union cavm_dtx_rnm_selx cavm_dtx_rnm_selx_t;

static inline uint64_t CAVM_DTX_RNM_SELX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_RNM_SELX(uint64_t a)
{
    if (a<=1)
        return 0x87e0fe01e000ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_RNM_SELX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_RNM_SELX(a) cavm_dtx_rnm_selx_t
#define bustype_CAVM_DTX_RNM_SELX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_RNM_SELX(a) "DTX_RNM_SELX"
#define busnum_CAVM_DTX_RNM_SELX(a) (a)
#define arguments_CAVM_DTX_RNM_SELX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_rpm#_bcst_rsp
 *
 * INTERNAL: DTX RPM Control Register
 */
union cavm_dtx_rpmx_bcst_rsp
{
    uint64_t u;
    struct cavm_dtx_rpmx_bcst_rsp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_rpmx_bcst_rsp_s cn; */
};
typedef union cavm_dtx_rpmx_bcst_rsp cavm_dtx_rpmx_bcst_rsp_t;

static inline uint64_t CAVM_DTX_RPMX_BCST_RSP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_RPMX_BCST_RSP(uint64_t a)
{
    if (a<=8)
        return 0x87e0fe1c0080ll + 0x2000ll * ((a) & 0xf);
    __cavm_csr_fatal("DTX_RPMX_BCST_RSP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_RPMX_BCST_RSP(a) cavm_dtx_rpmx_bcst_rsp_t
#define bustype_CAVM_DTX_RPMX_BCST_RSP(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_RPMX_BCST_RSP(a) "DTX_RPMX_BCST_RSP"
#define busnum_CAVM_DTX_RPMX_BCST_RSP(a) (a)
#define arguments_CAVM_DTX_RPMX_BCST_RSP(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_rpm#_ctl
 *
 * INTERNAL: DTX RPM Control Register
 */
union cavm_dtx_rpmx_ctl
{
    uint64_t u;
    struct cavm_dtx_rpmx_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_2_3          : 2;
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
#else /* Word 0 - Little Endian */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t reserved_2_3          : 2;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_rpmx_ctl_s cn; */
};
typedef union cavm_dtx_rpmx_ctl cavm_dtx_rpmx_ctl_t;

static inline uint64_t CAVM_DTX_RPMX_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_RPMX_CTL(uint64_t a)
{
    if (a<=8)
        return 0x87e0fe1c0060ll + 0x2000ll * ((a) & 0xf);
    __cavm_csr_fatal("DTX_RPMX_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_RPMX_CTL(a) cavm_dtx_rpmx_ctl_t
#define bustype_CAVM_DTX_RPMX_CTL(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_RPMX_CTL(a) "DTX_RPMX_CTL"
#define busnum_CAVM_DTX_RPMX_CTL(a) (a)
#define arguments_CAVM_DTX_RPMX_CTL(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_rpm#_dat#
 *
 * INTERNAL: DTX RPM Raw Data Register
 */
union cavm_dtx_rpmx_datx
{
    uint64_t u;
    struct cavm_dtx_rpmx_datx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
#else /* Word 0 - Little Endian */
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_rpmx_datx_s cn; */
};
typedef union cavm_dtx_rpmx_datx cavm_dtx_rpmx_datx_t;

static inline uint64_t CAVM_DTX_RPMX_DATX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_RPMX_DATX(uint64_t a, uint64_t b)
{
    if ((a<=8) && (b<=1))
        return 0x87e0fe1c0040ll + 0x2000ll * ((a) & 0xf) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_RPMX_DATX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_RPMX_DATX(a,b) cavm_dtx_rpmx_datx_t
#define bustype_CAVM_DTX_RPMX_DATX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_RPMX_DATX(a,b) "DTX_RPMX_DATX"
#define busnum_CAVM_DTX_RPMX_DATX(a,b) (a)
#define arguments_CAVM_DTX_RPMX_DATX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_rpm#_ena#
 *
 * INTERNAL: DTX RPM Data Enable Register
 */
union cavm_dtx_rpmx_enax
{
    uint64_t u;
    struct cavm_dtx_rpmx_enax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_rpmx_enax_s cn; */
};
typedef union cavm_dtx_rpmx_enax cavm_dtx_rpmx_enax_t;

static inline uint64_t CAVM_DTX_RPMX_ENAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_RPMX_ENAX(uint64_t a, uint64_t b)
{
    if ((a<=8) && (b<=1))
        return 0x87e0fe1c0020ll + 0x2000ll * ((a) & 0xf) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_RPMX_ENAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_RPMX_ENAX(a,b) cavm_dtx_rpmx_enax_t
#define bustype_CAVM_DTX_RPMX_ENAX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_RPMX_ENAX(a,b) "DTX_RPMX_ENAX"
#define busnum_CAVM_DTX_RPMX_ENAX(a,b) (a)
#define arguments_CAVM_DTX_RPMX_ENAX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_rpm#_sel#
 *
 * INTERNAL: DTX RPM Select Register
 */
union cavm_dtx_rpmx_selx
{
    uint64_t u;
    struct cavm_dtx_rpmx_selx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
#else /* Word 0 - Little Endian */
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_rpmx_selx_s cn; */
};
typedef union cavm_dtx_rpmx_selx cavm_dtx_rpmx_selx_t;

static inline uint64_t CAVM_DTX_RPMX_SELX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_RPMX_SELX(uint64_t a, uint64_t b)
{
    if ((a<=8) && (b<=1))
        return 0x87e0fe1c0000ll + 0x2000ll * ((a) & 0xf) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_RPMX_SELX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_RPMX_SELX(a,b) cavm_dtx_rpmx_selx_t
#define bustype_CAVM_DTX_RPMX_SELX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_RPMX_SELX(a,b) "DTX_RPMX_SELX"
#define busnum_CAVM_DTX_RPMX_SELX(a,b) (a)
#define arguments_CAVM_DTX_RPMX_SELX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_rst_bcst_rsp
 *
 * INTERNAL: DTX RST Control Register
 */
union cavm_dtx_rst_bcst_rsp
{
    uint64_t u;
    struct cavm_dtx_rst_bcst_rsp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_rst_bcst_rsp_s cn; */
};
typedef union cavm_dtx_rst_bcst_rsp cavm_dtx_rst_bcst_rsp_t;

#define CAVM_DTX_RST_BCST_RSP CAVM_DTX_RST_BCST_RSP_FUNC()
static inline uint64_t CAVM_DTX_RST_BCST_RSP_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_RST_BCST_RSP_FUNC(void)
{
    return 0x87e0fe00c080ll;
}

#define typedef_CAVM_DTX_RST_BCST_RSP cavm_dtx_rst_bcst_rsp_t
#define bustype_CAVM_DTX_RST_BCST_RSP CSR_TYPE_RSL
#define basename_CAVM_DTX_RST_BCST_RSP "DTX_RST_BCST_RSP"
#define busnum_CAVM_DTX_RST_BCST_RSP 0
#define arguments_CAVM_DTX_RST_BCST_RSP -1,-1,-1,-1

/**
 * Register (RSL) dtx_rst_ctl
 *
 * INTERNAL: DTX RST Control Register
 */
union cavm_dtx_rst_ctl
{
    uint64_t u;
    struct cavm_dtx_rst_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_2_3          : 2;
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
#else /* Word 0 - Little Endian */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t reserved_2_3          : 2;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_rst_ctl_s cn; */
};
typedef union cavm_dtx_rst_ctl cavm_dtx_rst_ctl_t;

#define CAVM_DTX_RST_CTL CAVM_DTX_RST_CTL_FUNC()
static inline uint64_t CAVM_DTX_RST_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_RST_CTL_FUNC(void)
{
    return 0x87e0fe00c060ll;
}

#define typedef_CAVM_DTX_RST_CTL cavm_dtx_rst_ctl_t
#define bustype_CAVM_DTX_RST_CTL CSR_TYPE_RSL
#define basename_CAVM_DTX_RST_CTL "DTX_RST_CTL"
#define busnum_CAVM_DTX_RST_CTL 0
#define arguments_CAVM_DTX_RST_CTL -1,-1,-1,-1

/**
 * Register (RSL) dtx_rst_dat#
 *
 * INTERNAL: DTX RST Raw Data Register
 */
union cavm_dtx_rst_datx
{
    uint64_t u;
    struct cavm_dtx_rst_datx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
#else /* Word 0 - Little Endian */
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_rst_datx_s cn; */
};
typedef union cavm_dtx_rst_datx cavm_dtx_rst_datx_t;

static inline uint64_t CAVM_DTX_RST_DATX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_RST_DATX(uint64_t a)
{
    if (a<=1)
        return 0x87e0fe00c040ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_RST_DATX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_RST_DATX(a) cavm_dtx_rst_datx_t
#define bustype_CAVM_DTX_RST_DATX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_RST_DATX(a) "DTX_RST_DATX"
#define busnum_CAVM_DTX_RST_DATX(a) (a)
#define arguments_CAVM_DTX_RST_DATX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_rst_ena#
 *
 * INTERNAL: DTX RST Data Enable Register
 */
union cavm_dtx_rst_enax
{
    uint64_t u;
    struct cavm_dtx_rst_enax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_rst_enax_s cn; */
};
typedef union cavm_dtx_rst_enax cavm_dtx_rst_enax_t;

static inline uint64_t CAVM_DTX_RST_ENAX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_RST_ENAX(uint64_t a)
{
    if (a<=1)
        return 0x87e0fe00c020ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_RST_ENAX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_RST_ENAX(a) cavm_dtx_rst_enax_t
#define bustype_CAVM_DTX_RST_ENAX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_RST_ENAX(a) "DTX_RST_ENAX"
#define busnum_CAVM_DTX_RST_ENAX(a) (a)
#define arguments_CAVM_DTX_RST_ENAX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_rst_sel#
 *
 * INTERNAL: DTX RST Select Register
 */
union cavm_dtx_rst_selx
{
    uint64_t u;
    struct cavm_dtx_rst_selx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
#else /* Word 0 - Little Endian */
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_rst_selx_s cn; */
};
typedef union cavm_dtx_rst_selx cavm_dtx_rst_selx_t;

static inline uint64_t CAVM_DTX_RST_SELX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_RST_SELX(uint64_t a)
{
    if (a<=1)
        return 0x87e0fe00c000ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_RST_SELX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_RST_SELX(a) cavm_dtx_rst_selx_t
#define bustype_CAVM_DTX_RST_SELX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_RST_SELX(a) "DTX_RST_SELX"
#define busnum_CAVM_DTX_RST_SELX(a) (a)
#define arguments_CAVM_DTX_RST_SELX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_rvu_bcst_rsp
 *
 * INTERNAL: DTX RVU Control Register
 */
union cavm_dtx_rvu_bcst_rsp
{
    uint64_t u;
    struct cavm_dtx_rvu_bcst_rsp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_rvu_bcst_rsp_s cn; */
};
typedef union cavm_dtx_rvu_bcst_rsp cavm_dtx_rvu_bcst_rsp_t;

#define CAVM_DTX_RVU_BCST_RSP CAVM_DTX_RVU_BCST_RSP_FUNC()
static inline uint64_t CAVM_DTX_RVU_BCST_RSP_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_RVU_BCST_RSP_FUNC(void)
{
    return 0x87e0fe882080ll;
}

#define typedef_CAVM_DTX_RVU_BCST_RSP cavm_dtx_rvu_bcst_rsp_t
#define bustype_CAVM_DTX_RVU_BCST_RSP CSR_TYPE_RSL
#define basename_CAVM_DTX_RVU_BCST_RSP "DTX_RVU_BCST_RSP"
#define busnum_CAVM_DTX_RVU_BCST_RSP 0
#define arguments_CAVM_DTX_RVU_BCST_RSP -1,-1,-1,-1

/**
 * Register (RSL) dtx_rvu_ctl
 *
 * INTERNAL: DTX RVU Control Register
 */
union cavm_dtx_rvu_ctl
{
    uint64_t u;
    struct cavm_dtx_rvu_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_2_3          : 2;
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
#else /* Word 0 - Little Endian */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t reserved_2_3          : 2;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_rvu_ctl_s cn; */
};
typedef union cavm_dtx_rvu_ctl cavm_dtx_rvu_ctl_t;

#define CAVM_DTX_RVU_CTL CAVM_DTX_RVU_CTL_FUNC()
static inline uint64_t CAVM_DTX_RVU_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_RVU_CTL_FUNC(void)
{
    return 0x87e0fe882060ll;
}

#define typedef_CAVM_DTX_RVU_CTL cavm_dtx_rvu_ctl_t
#define bustype_CAVM_DTX_RVU_CTL CSR_TYPE_RSL
#define basename_CAVM_DTX_RVU_CTL "DTX_RVU_CTL"
#define busnum_CAVM_DTX_RVU_CTL 0
#define arguments_CAVM_DTX_RVU_CTL -1,-1,-1,-1

/**
 * Register (RSL) dtx_rvu_dat#
 *
 * INTERNAL: DTX RVU Raw Data Register
 */
union cavm_dtx_rvu_datx
{
    uint64_t u;
    struct cavm_dtx_rvu_datx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
#else /* Word 0 - Little Endian */
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_rvu_datx_s cn; */
};
typedef union cavm_dtx_rvu_datx cavm_dtx_rvu_datx_t;

static inline uint64_t CAVM_DTX_RVU_DATX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_RVU_DATX(uint64_t a)
{
    if (a<=1)
        return 0x87e0fe882040ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_RVU_DATX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_RVU_DATX(a) cavm_dtx_rvu_datx_t
#define bustype_CAVM_DTX_RVU_DATX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_RVU_DATX(a) "DTX_RVU_DATX"
#define busnum_CAVM_DTX_RVU_DATX(a) (a)
#define arguments_CAVM_DTX_RVU_DATX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_rvu_ena#
 *
 * INTERNAL: DTX RVU Data Enable Register
 */
union cavm_dtx_rvu_enax
{
    uint64_t u;
    struct cavm_dtx_rvu_enax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_rvu_enax_s cn; */
};
typedef union cavm_dtx_rvu_enax cavm_dtx_rvu_enax_t;

static inline uint64_t CAVM_DTX_RVU_ENAX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_RVU_ENAX(uint64_t a)
{
    if (a<=1)
        return 0x87e0fe882020ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_RVU_ENAX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_RVU_ENAX(a) cavm_dtx_rvu_enax_t
#define bustype_CAVM_DTX_RVU_ENAX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_RVU_ENAX(a) "DTX_RVU_ENAX"
#define busnum_CAVM_DTX_RVU_ENAX(a) (a)
#define arguments_CAVM_DTX_RVU_ENAX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_rvu_sel#
 *
 * INTERNAL: DTX RVU Select Register
 */
union cavm_dtx_rvu_selx
{
    uint64_t u;
    struct cavm_dtx_rvu_selx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
#else /* Word 0 - Little Endian */
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_rvu_selx_s cn; */
};
typedef union cavm_dtx_rvu_selx cavm_dtx_rvu_selx_t;

static inline uint64_t CAVM_DTX_RVU_SELX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_RVU_SELX(uint64_t a)
{
    if (a<=1)
        return 0x87e0fe882000ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_RVU_SELX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_RVU_SELX(a) cavm_dtx_rvu_selx_t
#define bustype_CAVM_DTX_RVU_SELX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_RVU_SELX(a) "DTX_RVU_SELX"
#define busnum_CAVM_DTX_RVU_SELX(a) (a)
#define arguments_CAVM_DTX_RVU_SELX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_sdec#_bcst_rsp
 *
 * INTERNAL: DTX SDEC Control Register
 */
union cavm_dtx_sdecx_bcst_rsp
{
    uint64_t u;
    struct cavm_dtx_sdecx_bcst_rsp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_sdecx_bcst_rsp_s cn; */
};
typedef union cavm_dtx_sdecx_bcst_rsp cavm_dtx_sdecx_bcst_rsp_t;

static inline uint64_t CAVM_DTX_SDECX_BCST_RSP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_SDECX_BCST_RSP(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=2))
        return 0x87e0fe2e0080ll + 0x2000ll * ((a) & 0x3);
    __cavm_csr_fatal("DTX_SDECX_BCST_RSP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_SDECX_BCST_RSP(a) cavm_dtx_sdecx_bcst_rsp_t
#define bustype_CAVM_DTX_SDECX_BCST_RSP(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_SDECX_BCST_RSP(a) "DTX_SDECX_BCST_RSP"
#define busnum_CAVM_DTX_SDECX_BCST_RSP(a) (a)
#define arguments_CAVM_DTX_SDECX_BCST_RSP(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_sdec#_ctl
 *
 * INTERNAL: DTX SDEC Control Register
 */
union cavm_dtx_sdecx_ctl
{
    uint64_t u;
    struct cavm_dtx_sdecx_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_2_3          : 2;
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
#else /* Word 0 - Little Endian */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t reserved_2_3          : 2;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_sdecx_ctl_s cn; */
};
typedef union cavm_dtx_sdecx_ctl cavm_dtx_sdecx_ctl_t;

static inline uint64_t CAVM_DTX_SDECX_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_SDECX_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=2))
        return 0x87e0fe2e0060ll + 0x2000ll * ((a) & 0x3);
    __cavm_csr_fatal("DTX_SDECX_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_SDECX_CTL(a) cavm_dtx_sdecx_ctl_t
#define bustype_CAVM_DTX_SDECX_CTL(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_SDECX_CTL(a) "DTX_SDECX_CTL"
#define busnum_CAVM_DTX_SDECX_CTL(a) (a)
#define arguments_CAVM_DTX_SDECX_CTL(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_sdec#_dat#
 *
 * INTERNAL: DTX SDEC Raw Data Register
 */
union cavm_dtx_sdecx_datx
{
    uint64_t u;
    struct cavm_dtx_sdecx_datx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
#else /* Word 0 - Little Endian */
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_sdecx_datx_s cn; */
};
typedef union cavm_dtx_sdecx_datx cavm_dtx_sdecx_datx_t;

static inline uint64_t CAVM_DTX_SDECX_DATX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_SDECX_DATX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=2) && (b<=1)))
        return 0x87e0fe2e0040ll + 0x2000ll * ((a) & 0x3) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_SDECX_DATX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_SDECX_DATX(a,b) cavm_dtx_sdecx_datx_t
#define bustype_CAVM_DTX_SDECX_DATX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_SDECX_DATX(a,b) "DTX_SDECX_DATX"
#define busnum_CAVM_DTX_SDECX_DATX(a,b) (a)
#define arguments_CAVM_DTX_SDECX_DATX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_sdec#_ena#
 *
 * INTERNAL: DTX SDEC Data Enable Register
 */
union cavm_dtx_sdecx_enax
{
    uint64_t u;
    struct cavm_dtx_sdecx_enax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_sdecx_enax_s cn; */
};
typedef union cavm_dtx_sdecx_enax cavm_dtx_sdecx_enax_t;

static inline uint64_t CAVM_DTX_SDECX_ENAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_SDECX_ENAX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=2) && (b<=1)))
        return 0x87e0fe2e0020ll + 0x2000ll * ((a) & 0x3) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_SDECX_ENAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_SDECX_ENAX(a,b) cavm_dtx_sdecx_enax_t
#define bustype_CAVM_DTX_SDECX_ENAX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_SDECX_ENAX(a,b) "DTX_SDECX_ENAX"
#define busnum_CAVM_DTX_SDECX_ENAX(a,b) (a)
#define arguments_CAVM_DTX_SDECX_ENAX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_sdec#_sel#
 *
 * INTERNAL: DTX SDEC Select Register
 */
union cavm_dtx_sdecx_selx
{
    uint64_t u;
    struct cavm_dtx_sdecx_selx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
#else /* Word 0 - Little Endian */
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_sdecx_selx_s cn; */
};
typedef union cavm_dtx_sdecx_selx cavm_dtx_sdecx_selx_t;

static inline uint64_t CAVM_DTX_SDECX_SELX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_SDECX_SELX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=2) && (b<=1)))
        return 0x87e0fe2e0000ll + 0x2000ll * ((a) & 0x3) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_SDECX_SELX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_SDECX_SELX(a,b) cavm_dtx_sdecx_selx_t
#define bustype_CAVM_DTX_SDECX_SELX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_SDECX_SELX(a,b) "DTX_SDECX_SELX"
#define busnum_CAVM_DTX_SDECX_SELX(a,b) (a)
#define arguments_CAVM_DTX_SDECX_SELX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_smmu#_bcst_rsp
 *
 * INTERNAL: DTX SMMU Control Register
 */
union cavm_dtx_smmux_bcst_rsp
{
    uint64_t u;
    struct cavm_dtx_smmux_bcst_rsp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_smmux_bcst_rsp_s cn; */
};
typedef union cavm_dtx_smmux_bcst_rsp cavm_dtx_smmux_bcst_rsp_t;

static inline uint64_t CAVM_DTX_SMMUX_BCST_RSP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_SMMUX_BCST_RSP(uint64_t a)
{
    if (a==0)
        return 0x87e0fe860080ll + 0x2000ll * ((a) & 0x0);
    __cavm_csr_fatal("DTX_SMMUX_BCST_RSP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_SMMUX_BCST_RSP(a) cavm_dtx_smmux_bcst_rsp_t
#define bustype_CAVM_DTX_SMMUX_BCST_RSP(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_SMMUX_BCST_RSP(a) "DTX_SMMUX_BCST_RSP"
#define busnum_CAVM_DTX_SMMUX_BCST_RSP(a) (a)
#define arguments_CAVM_DTX_SMMUX_BCST_RSP(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_smmu#_ctl
 *
 * INTERNAL: DTX SMMU Control Register
 */
union cavm_dtx_smmux_ctl
{
    uint64_t u;
    struct cavm_dtx_smmux_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_2_3          : 2;
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
#else /* Word 0 - Little Endian */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t reserved_2_3          : 2;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_smmux_ctl_s cn; */
};
typedef union cavm_dtx_smmux_ctl cavm_dtx_smmux_ctl_t;

static inline uint64_t CAVM_DTX_SMMUX_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_SMMUX_CTL(uint64_t a)
{
    if (a==0)
        return 0x87e0fe860060ll + 0x2000ll * ((a) & 0x0);
    __cavm_csr_fatal("DTX_SMMUX_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_SMMUX_CTL(a) cavm_dtx_smmux_ctl_t
#define bustype_CAVM_DTX_SMMUX_CTL(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_SMMUX_CTL(a) "DTX_SMMUX_CTL"
#define busnum_CAVM_DTX_SMMUX_CTL(a) (a)
#define arguments_CAVM_DTX_SMMUX_CTL(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_smmu#_dat#
 *
 * INTERNAL: DTX SMMU Raw Data Register
 */
union cavm_dtx_smmux_datx
{
    uint64_t u;
    struct cavm_dtx_smmux_datx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
#else /* Word 0 - Little Endian */
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_smmux_datx_s cn; */
};
typedef union cavm_dtx_smmux_datx cavm_dtx_smmux_datx_t;

static inline uint64_t CAVM_DTX_SMMUX_DATX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_SMMUX_DATX(uint64_t a, uint64_t b)
{
    if ((a==0) && (b<=1))
        return 0x87e0fe860040ll + 0x2000ll * ((a) & 0x0) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_SMMUX_DATX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_SMMUX_DATX(a,b) cavm_dtx_smmux_datx_t
#define bustype_CAVM_DTX_SMMUX_DATX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_SMMUX_DATX(a,b) "DTX_SMMUX_DATX"
#define busnum_CAVM_DTX_SMMUX_DATX(a,b) (a)
#define arguments_CAVM_DTX_SMMUX_DATX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_smmu#_ena#
 *
 * INTERNAL: DTX SMMU Data Enable Register
 */
union cavm_dtx_smmux_enax
{
    uint64_t u;
    struct cavm_dtx_smmux_enax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_smmux_enax_s cn; */
};
typedef union cavm_dtx_smmux_enax cavm_dtx_smmux_enax_t;

static inline uint64_t CAVM_DTX_SMMUX_ENAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_SMMUX_ENAX(uint64_t a, uint64_t b)
{
    if ((a==0) && (b<=1))
        return 0x87e0fe860020ll + 0x2000ll * ((a) & 0x0) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_SMMUX_ENAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_SMMUX_ENAX(a,b) cavm_dtx_smmux_enax_t
#define bustype_CAVM_DTX_SMMUX_ENAX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_SMMUX_ENAX(a,b) "DTX_SMMUX_ENAX"
#define busnum_CAVM_DTX_SMMUX_ENAX(a,b) (a)
#define arguments_CAVM_DTX_SMMUX_ENAX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_smmu#_sel#
 *
 * INTERNAL: DTX SMMU Select Register
 */
union cavm_dtx_smmux_selx
{
    uint64_t u;
    struct cavm_dtx_smmux_selx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
#else /* Word 0 - Little Endian */
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_smmux_selx_s cn; */
};
typedef union cavm_dtx_smmux_selx cavm_dtx_smmux_selx_t;

static inline uint64_t CAVM_DTX_SMMUX_SELX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_SMMUX_SELX(uint64_t a, uint64_t b)
{
    if ((a==0) && (b<=1))
        return 0x87e0fe860000ll + 0x2000ll * ((a) & 0x0) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_SMMUX_SELX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_SMMUX_SELX(a,b) cavm_dtx_smmux_selx_t
#define bustype_CAVM_DTX_SMMUX_SELX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_SMMUX_SELX(a,b) "DTX_SMMUX_SELX"
#define busnum_CAVM_DTX_SMMUX_SELX(a,b) (a)
#define arguments_CAVM_DTX_SMMUX_SELX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_sso_bcst_rsp
 *
 * INTERNAL: DTX SSO Control Register
 */
union cavm_dtx_sso_bcst_rsp
{
    uint64_t u;
    struct cavm_dtx_sso_bcst_rsp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_sso_bcst_rsp_s cn; */
};
typedef union cavm_dtx_sso_bcst_rsp cavm_dtx_sso_bcst_rsp_t;

#define CAVM_DTX_SSO_BCST_RSP CAVM_DTX_SSO_BCST_RSP_FUNC()
static inline uint64_t CAVM_DTX_SSO_BCST_RSP_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_SSO_BCST_RSP_FUNC(void)
{
    return 0x87e0fe896080ll;
}

#define typedef_CAVM_DTX_SSO_BCST_RSP cavm_dtx_sso_bcst_rsp_t
#define bustype_CAVM_DTX_SSO_BCST_RSP CSR_TYPE_RSL
#define basename_CAVM_DTX_SSO_BCST_RSP "DTX_SSO_BCST_RSP"
#define busnum_CAVM_DTX_SSO_BCST_RSP 0
#define arguments_CAVM_DTX_SSO_BCST_RSP -1,-1,-1,-1

/**
 * Register (RSL) dtx_sso_ctl
 *
 * INTERNAL: DTX SSO Control Register
 */
union cavm_dtx_sso_ctl
{
    uint64_t u;
    struct cavm_dtx_sso_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_2_3          : 2;
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
#else /* Word 0 - Little Endian */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t reserved_2_3          : 2;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_sso_ctl_s cn; */
};
typedef union cavm_dtx_sso_ctl cavm_dtx_sso_ctl_t;

#define CAVM_DTX_SSO_CTL CAVM_DTX_SSO_CTL_FUNC()
static inline uint64_t CAVM_DTX_SSO_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_SSO_CTL_FUNC(void)
{
    return 0x87e0fe896060ll;
}

#define typedef_CAVM_DTX_SSO_CTL cavm_dtx_sso_ctl_t
#define bustype_CAVM_DTX_SSO_CTL CSR_TYPE_RSL
#define basename_CAVM_DTX_SSO_CTL "DTX_SSO_CTL"
#define busnum_CAVM_DTX_SSO_CTL 0
#define arguments_CAVM_DTX_SSO_CTL -1,-1,-1,-1

/**
 * Register (RSL) dtx_sso_dat#
 *
 * INTERNAL: DTX SSO Raw Data Register
 */
union cavm_dtx_sso_datx
{
    uint64_t u;
    struct cavm_dtx_sso_datx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
#else /* Word 0 - Little Endian */
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_sso_datx_s cn; */
};
typedef union cavm_dtx_sso_datx cavm_dtx_sso_datx_t;

static inline uint64_t CAVM_DTX_SSO_DATX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_SSO_DATX(uint64_t a)
{
    if (a<=1)
        return 0x87e0fe896040ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_SSO_DATX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_SSO_DATX(a) cavm_dtx_sso_datx_t
#define bustype_CAVM_DTX_SSO_DATX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_SSO_DATX(a) "DTX_SSO_DATX"
#define busnum_CAVM_DTX_SSO_DATX(a) (a)
#define arguments_CAVM_DTX_SSO_DATX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_sso_ena#
 *
 * INTERNAL: DTX SSO Data Enable Register
 */
union cavm_dtx_sso_enax
{
    uint64_t u;
    struct cavm_dtx_sso_enax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_sso_enax_s cn; */
};
typedef union cavm_dtx_sso_enax cavm_dtx_sso_enax_t;

static inline uint64_t CAVM_DTX_SSO_ENAX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_SSO_ENAX(uint64_t a)
{
    if (a<=1)
        return 0x87e0fe896020ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_SSO_ENAX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_SSO_ENAX(a) cavm_dtx_sso_enax_t
#define bustype_CAVM_DTX_SSO_ENAX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_SSO_ENAX(a) "DTX_SSO_ENAX"
#define busnum_CAVM_DTX_SSO_ENAX(a) (a)
#define arguments_CAVM_DTX_SSO_ENAX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_sso_sel#
 *
 * INTERNAL: DTX SSO Select Register
 */
union cavm_dtx_sso_selx
{
    uint64_t u;
    struct cavm_dtx_sso_selx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
#else /* Word 0 - Little Endian */
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_sso_selx_s cn; */
};
typedef union cavm_dtx_sso_selx cavm_dtx_sso_selx_t;

static inline uint64_t CAVM_DTX_SSO_SELX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_SSO_SELX(uint64_t a)
{
    if (a<=1)
        return 0x87e0fe896000ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_SSO_SELX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_SSO_SELX(a) cavm_dtx_sso_selx_t
#define bustype_CAVM_DTX_SSO_SELX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_SSO_SELX(a) "DTX_SSO_SELX"
#define busnum_CAVM_DTX_SSO_SELX(a) (a)
#define arguments_CAVM_DTX_SSO_SELX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_tad#_bcst_rsp
 *
 * INTERNAL: DTX TAD Control Register
 */
union cavm_dtx_tadx_bcst_rsp
{
    uint64_t u;
    struct cavm_dtx_tadx_bcst_rsp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_tadx_bcst_rsp_s cn; */
};
typedef union cavm_dtx_tadx_bcst_rsp cavm_dtx_tadx_bcst_rsp_t;

static inline uint64_t CAVM_DTX_TADX_BCST_RSP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_TADX_BCST_RSP(uint64_t a)
{
    if (a<=127)
        return 0x87e0fe500080ll + 0x2000ll * ((a) & 0x7f);
    __cavm_csr_fatal("DTX_TADX_BCST_RSP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_TADX_BCST_RSP(a) cavm_dtx_tadx_bcst_rsp_t
#define bustype_CAVM_DTX_TADX_BCST_RSP(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_TADX_BCST_RSP(a) "DTX_TADX_BCST_RSP"
#define busnum_CAVM_DTX_TADX_BCST_RSP(a) (a)
#define arguments_CAVM_DTX_TADX_BCST_RSP(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_tad#_ctl
 *
 * INTERNAL: DTX TAD Control Register
 */
union cavm_dtx_tadx_ctl
{
    uint64_t u;
    struct cavm_dtx_tadx_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_2_3          : 2;
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
#else /* Word 0 - Little Endian */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t reserved_2_3          : 2;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_tadx_ctl_s cn; */
};
typedef union cavm_dtx_tadx_ctl cavm_dtx_tadx_ctl_t;

static inline uint64_t CAVM_DTX_TADX_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_TADX_CTL(uint64_t a)
{
    if (a<=127)
        return 0x87e0fe500060ll + 0x2000ll * ((a) & 0x7f);
    __cavm_csr_fatal("DTX_TADX_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_TADX_CTL(a) cavm_dtx_tadx_ctl_t
#define bustype_CAVM_DTX_TADX_CTL(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_TADX_CTL(a) "DTX_TADX_CTL"
#define busnum_CAVM_DTX_TADX_CTL(a) (a)
#define arguments_CAVM_DTX_TADX_CTL(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_tad#_dat#
 *
 * INTERNAL: DTX TAD Raw Data Register
 */
union cavm_dtx_tadx_datx
{
    uint64_t u;
    struct cavm_dtx_tadx_datx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
#else /* Word 0 - Little Endian */
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_tadx_datx_s cn; */
};
typedef union cavm_dtx_tadx_datx cavm_dtx_tadx_datx_t;

static inline uint64_t CAVM_DTX_TADX_DATX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_TADX_DATX(uint64_t a, uint64_t b)
{
    if ((a<=127) && (b<=1))
        return 0x87e0fe500040ll + 0x2000ll * ((a) & 0x7f) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_TADX_DATX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_TADX_DATX(a,b) cavm_dtx_tadx_datx_t
#define bustype_CAVM_DTX_TADX_DATX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_TADX_DATX(a,b) "DTX_TADX_DATX"
#define busnum_CAVM_DTX_TADX_DATX(a,b) (a)
#define arguments_CAVM_DTX_TADX_DATX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_tad#_ena#
 *
 * INTERNAL: DTX TAD Data Enable Register
 */
union cavm_dtx_tadx_enax
{
    uint64_t u;
    struct cavm_dtx_tadx_enax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_tadx_enax_s cn; */
};
typedef union cavm_dtx_tadx_enax cavm_dtx_tadx_enax_t;

static inline uint64_t CAVM_DTX_TADX_ENAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_TADX_ENAX(uint64_t a, uint64_t b)
{
    if ((a<=127) && (b<=1))
        return 0x87e0fe500020ll + 0x2000ll * ((a) & 0x7f) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_TADX_ENAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_TADX_ENAX(a,b) cavm_dtx_tadx_enax_t
#define bustype_CAVM_DTX_TADX_ENAX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_TADX_ENAX(a,b) "DTX_TADX_ENAX"
#define busnum_CAVM_DTX_TADX_ENAX(a,b) (a)
#define arguments_CAVM_DTX_TADX_ENAX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_tad#_sel#
 *
 * INTERNAL: DTX TAD Select Register
 */
union cavm_dtx_tadx_selx
{
    uint64_t u;
    struct cavm_dtx_tadx_selx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
#else /* Word 0 - Little Endian */
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_tadx_selx_s cn; */
};
typedef union cavm_dtx_tadx_selx cavm_dtx_tadx_selx_t;

static inline uint64_t CAVM_DTX_TADX_SELX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_TADX_SELX(uint64_t a, uint64_t b)
{
    if ((a<=127) && (b<=1))
        return 0x87e0fe500000ll + 0x2000ll * ((a) & 0x7f) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_TADX_SELX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_TADX_SELX(a,b) cavm_dtx_tadx_selx_t
#define bustype_CAVM_DTX_TADX_SELX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_TADX_SELX(a,b) "DTX_TADX_SELX"
#define busnum_CAVM_DTX_TADX_SELX(a,b) (a)
#define arguments_CAVM_DTX_TADX_SELX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_tdec_bcst_rsp
 *
 * INTERNAL: DTX TDEC Control Register
 */
union cavm_dtx_tdec_bcst_rsp
{
    uint64_t u;
    struct cavm_dtx_tdec_bcst_rsp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_tdec_bcst_rsp_s cn; */
};
typedef union cavm_dtx_tdec_bcst_rsp cavm_dtx_tdec_bcst_rsp_t;

#define CAVM_DTX_TDEC_BCST_RSP CAVM_DTX_TDEC_BCST_RSP_FUNC()
static inline uint64_t CAVM_DTX_TDEC_BCST_RSP_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_TDEC_BCST_RSP_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KA))
        return 0x87e0fe324080ll;
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x87e0fe324080ll;
    __cavm_csr_fatal("DTX_TDEC_BCST_RSP", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_TDEC_BCST_RSP cavm_dtx_tdec_bcst_rsp_t
#define bustype_CAVM_DTX_TDEC_BCST_RSP CSR_TYPE_RSL
#define basename_CAVM_DTX_TDEC_BCST_RSP "DTX_TDEC_BCST_RSP"
#define busnum_CAVM_DTX_TDEC_BCST_RSP 0
#define arguments_CAVM_DTX_TDEC_BCST_RSP -1,-1,-1,-1

/**
 * Register (RSL) dtx_tdec_ctl
 *
 * INTERNAL: DTX TDEC Control Register
 */
union cavm_dtx_tdec_ctl
{
    uint64_t u;
    struct cavm_dtx_tdec_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_2_3          : 2;
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
#else /* Word 0 - Little Endian */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t reserved_2_3          : 2;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_tdec_ctl_s cn; */
};
typedef union cavm_dtx_tdec_ctl cavm_dtx_tdec_ctl_t;

#define CAVM_DTX_TDEC_CTL CAVM_DTX_TDEC_CTL_FUNC()
static inline uint64_t CAVM_DTX_TDEC_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_TDEC_CTL_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KA))
        return 0x87e0fe324060ll;
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x87e0fe324060ll;
    __cavm_csr_fatal("DTX_TDEC_CTL", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_TDEC_CTL cavm_dtx_tdec_ctl_t
#define bustype_CAVM_DTX_TDEC_CTL CSR_TYPE_RSL
#define basename_CAVM_DTX_TDEC_CTL "DTX_TDEC_CTL"
#define busnum_CAVM_DTX_TDEC_CTL 0
#define arguments_CAVM_DTX_TDEC_CTL -1,-1,-1,-1

/**
 * Register (RSL) dtx_tdec_dat#
 *
 * INTERNAL: DTX TDEC Raw Data Register
 */
union cavm_dtx_tdec_datx
{
    uint64_t u;
    struct cavm_dtx_tdec_datx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
#else /* Word 0 - Little Endian */
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_tdec_datx_s cn; */
};
typedef union cavm_dtx_tdec_datx cavm_dtx_tdec_datx_t;

static inline uint64_t CAVM_DTX_TDEC_DATX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_TDEC_DATX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x87e0fe324040ll + 8ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x87e0fe324040ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_TDEC_DATX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_TDEC_DATX(a) cavm_dtx_tdec_datx_t
#define bustype_CAVM_DTX_TDEC_DATX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_TDEC_DATX(a) "DTX_TDEC_DATX"
#define busnum_CAVM_DTX_TDEC_DATX(a) (a)
#define arguments_CAVM_DTX_TDEC_DATX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_tdec_ena#
 *
 * INTERNAL: DTX TDEC Data Enable Register
 */
union cavm_dtx_tdec_enax
{
    uint64_t u;
    struct cavm_dtx_tdec_enax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_tdec_enax_s cn; */
};
typedef union cavm_dtx_tdec_enax cavm_dtx_tdec_enax_t;

static inline uint64_t CAVM_DTX_TDEC_ENAX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_TDEC_ENAX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x87e0fe324020ll + 8ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x87e0fe324020ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_TDEC_ENAX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_TDEC_ENAX(a) cavm_dtx_tdec_enax_t
#define bustype_CAVM_DTX_TDEC_ENAX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_TDEC_ENAX(a) "DTX_TDEC_ENAX"
#define busnum_CAVM_DTX_TDEC_ENAX(a) (a)
#define arguments_CAVM_DTX_TDEC_ENAX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_tdec_sel#
 *
 * INTERNAL: DTX TDEC Select Register
 */
union cavm_dtx_tdec_selx
{
    uint64_t u;
    struct cavm_dtx_tdec_selx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
#else /* Word 0 - Little Endian */
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_tdec_selx_s cn; */
};
typedef union cavm_dtx_tdec_selx cavm_dtx_tdec_selx_t;

static inline uint64_t CAVM_DTX_TDEC_SELX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_TDEC_SELX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x87e0fe324000ll + 8ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x87e0fe324000ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_TDEC_SELX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_TDEC_SELX(a) cavm_dtx_tdec_selx_t
#define bustype_CAVM_DTX_TDEC_SELX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_TDEC_SELX(a) "DTX_TDEC_SELX"
#define busnum_CAVM_DTX_TDEC_SELX(a) (a)
#define arguments_CAVM_DTX_TDEC_SELX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_tim_bcst_rsp
 *
 * INTERNAL: DTX TIM Control Register
 */
union cavm_dtx_tim_bcst_rsp
{
    uint64_t u;
    struct cavm_dtx_tim_bcst_rsp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_tim_bcst_rsp_s cn; */
};
typedef union cavm_dtx_tim_bcst_rsp cavm_dtx_tim_bcst_rsp_t;

#define CAVM_DTX_TIM_BCST_RSP CAVM_DTX_TIM_BCST_RSP_FUNC()
static inline uint64_t CAVM_DTX_TIM_BCST_RSP_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_TIM_BCST_RSP_FUNC(void)
{
    return 0x87e0fe89c080ll;
}

#define typedef_CAVM_DTX_TIM_BCST_RSP cavm_dtx_tim_bcst_rsp_t
#define bustype_CAVM_DTX_TIM_BCST_RSP CSR_TYPE_RSL
#define basename_CAVM_DTX_TIM_BCST_RSP "DTX_TIM_BCST_RSP"
#define busnum_CAVM_DTX_TIM_BCST_RSP 0
#define arguments_CAVM_DTX_TIM_BCST_RSP -1,-1,-1,-1

/**
 * Register (RSL) dtx_tim_ctl
 *
 * INTERNAL: DTX TIM Control Register
 */
union cavm_dtx_tim_ctl
{
    uint64_t u;
    struct cavm_dtx_tim_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_2_3          : 2;
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
#else /* Word 0 - Little Endian */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t reserved_2_3          : 2;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_tim_ctl_s cn; */
};
typedef union cavm_dtx_tim_ctl cavm_dtx_tim_ctl_t;

#define CAVM_DTX_TIM_CTL CAVM_DTX_TIM_CTL_FUNC()
static inline uint64_t CAVM_DTX_TIM_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_TIM_CTL_FUNC(void)
{
    return 0x87e0fe89c060ll;
}

#define typedef_CAVM_DTX_TIM_CTL cavm_dtx_tim_ctl_t
#define bustype_CAVM_DTX_TIM_CTL CSR_TYPE_RSL
#define basename_CAVM_DTX_TIM_CTL "DTX_TIM_CTL"
#define busnum_CAVM_DTX_TIM_CTL 0
#define arguments_CAVM_DTX_TIM_CTL -1,-1,-1,-1

/**
 * Register (RSL) dtx_tim_dat#
 *
 * INTERNAL: DTX TIM Raw Data Register
 */
union cavm_dtx_tim_datx
{
    uint64_t u;
    struct cavm_dtx_tim_datx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
#else /* Word 0 - Little Endian */
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_tim_datx_s cn; */
};
typedef union cavm_dtx_tim_datx cavm_dtx_tim_datx_t;

static inline uint64_t CAVM_DTX_TIM_DATX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_TIM_DATX(uint64_t a)
{
    if (a<=1)
        return 0x87e0fe89c040ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_TIM_DATX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_TIM_DATX(a) cavm_dtx_tim_datx_t
#define bustype_CAVM_DTX_TIM_DATX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_TIM_DATX(a) "DTX_TIM_DATX"
#define busnum_CAVM_DTX_TIM_DATX(a) (a)
#define arguments_CAVM_DTX_TIM_DATX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_tim_ena#
 *
 * INTERNAL: DTX TIM Data Enable Register
 */
union cavm_dtx_tim_enax
{
    uint64_t u;
    struct cavm_dtx_tim_enax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_tim_enax_s cn; */
};
typedef union cavm_dtx_tim_enax cavm_dtx_tim_enax_t;

static inline uint64_t CAVM_DTX_TIM_ENAX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_TIM_ENAX(uint64_t a)
{
    if (a<=1)
        return 0x87e0fe89c020ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_TIM_ENAX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_TIM_ENAX(a) cavm_dtx_tim_enax_t
#define bustype_CAVM_DTX_TIM_ENAX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_TIM_ENAX(a) "DTX_TIM_ENAX"
#define busnum_CAVM_DTX_TIM_ENAX(a) (a)
#define arguments_CAVM_DTX_TIM_ENAX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_tim_sel#
 *
 * INTERNAL: DTX TIM Select Register
 */
union cavm_dtx_tim_selx
{
    uint64_t u;
    struct cavm_dtx_tim_selx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
#else /* Word 0 - Little Endian */
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_tim_selx_s cn; */
};
typedef union cavm_dtx_tim_selx cavm_dtx_tim_selx_t;

static inline uint64_t CAVM_DTX_TIM_SELX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_TIM_SELX(uint64_t a)
{
    if (a<=1)
        return 0x87e0fe89c000ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_TIM_SELX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_TIM_SELX(a) cavm_dtx_tim_selx_t
#define bustype_CAVM_DTX_TIM_SELX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_TIM_SELX(a) "DTX_TIM_SELX"
#define busnum_CAVM_DTX_TIM_SELX(a) (a)
#define arguments_CAVM_DTX_TIM_SELX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_tofc#_bcst_rsp
 *
 * INTERNAL: DTX TOFC Control Register
 */
union cavm_dtx_tofcx_bcst_rsp
{
    uint64_t u;
    struct cavm_dtx_tofcx_bcst_rsp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_tofcx_bcst_rsp_s cn; */
};
typedef union cavm_dtx_tofcx_bcst_rsp cavm_dtx_tofcx_bcst_rsp_t;

static inline uint64_t CAVM_DTX_TOFCX_BCST_RSP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_TOFCX_BCST_RSP(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=3))
        return 0x87e0fe358080ll + 0x2000ll * ((a) & 0x3);
    __cavm_csr_fatal("DTX_TOFCX_BCST_RSP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_TOFCX_BCST_RSP(a) cavm_dtx_tofcx_bcst_rsp_t
#define bustype_CAVM_DTX_TOFCX_BCST_RSP(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_TOFCX_BCST_RSP(a) "DTX_TOFCX_BCST_RSP"
#define busnum_CAVM_DTX_TOFCX_BCST_RSP(a) (a)
#define arguments_CAVM_DTX_TOFCX_BCST_RSP(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_tofc#_ctl
 *
 * INTERNAL: DTX TOFC Control Register
 */
union cavm_dtx_tofcx_ctl
{
    uint64_t u;
    struct cavm_dtx_tofcx_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_2_3          : 2;
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
#else /* Word 0 - Little Endian */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t reserved_2_3          : 2;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_tofcx_ctl_s cn; */
};
typedef union cavm_dtx_tofcx_ctl cavm_dtx_tofcx_ctl_t;

static inline uint64_t CAVM_DTX_TOFCX_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_TOFCX_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=3))
        return 0x87e0fe358060ll + 0x2000ll * ((a) & 0x3);
    __cavm_csr_fatal("DTX_TOFCX_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_TOFCX_CTL(a) cavm_dtx_tofcx_ctl_t
#define bustype_CAVM_DTX_TOFCX_CTL(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_TOFCX_CTL(a) "DTX_TOFCX_CTL"
#define busnum_CAVM_DTX_TOFCX_CTL(a) (a)
#define arguments_CAVM_DTX_TOFCX_CTL(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_tofc#_dat#
 *
 * INTERNAL: DTX TOFC Raw Data Register
 */
union cavm_dtx_tofcx_datx
{
    uint64_t u;
    struct cavm_dtx_tofcx_datx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
#else /* Word 0 - Little Endian */
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_tofcx_datx_s cn; */
};
typedef union cavm_dtx_tofcx_datx cavm_dtx_tofcx_datx_t;

static inline uint64_t CAVM_DTX_TOFCX_DATX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_TOFCX_DATX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=3) && (b<=1)))
        return 0x87e0fe358040ll + 0x2000ll * ((a) & 0x3) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_TOFCX_DATX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_TOFCX_DATX(a,b) cavm_dtx_tofcx_datx_t
#define bustype_CAVM_DTX_TOFCX_DATX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_TOFCX_DATX(a,b) "DTX_TOFCX_DATX"
#define busnum_CAVM_DTX_TOFCX_DATX(a,b) (a)
#define arguments_CAVM_DTX_TOFCX_DATX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_tofc#_ena#
 *
 * INTERNAL: DTX TOFC Data Enable Register
 */
union cavm_dtx_tofcx_enax
{
    uint64_t u;
    struct cavm_dtx_tofcx_enax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_tofcx_enax_s cn; */
};
typedef union cavm_dtx_tofcx_enax cavm_dtx_tofcx_enax_t;

static inline uint64_t CAVM_DTX_TOFCX_ENAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_TOFCX_ENAX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=3) && (b<=1)))
        return 0x87e0fe358020ll + 0x2000ll * ((a) & 0x3) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_TOFCX_ENAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_TOFCX_ENAX(a,b) cavm_dtx_tofcx_enax_t
#define bustype_CAVM_DTX_TOFCX_ENAX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_TOFCX_ENAX(a,b) "DTX_TOFCX_ENAX"
#define busnum_CAVM_DTX_TOFCX_ENAX(a,b) (a)
#define arguments_CAVM_DTX_TOFCX_ENAX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_tofc#_sel#
 *
 * INTERNAL: DTX TOFC Select Register
 */
union cavm_dtx_tofcx_selx
{
    uint64_t u;
    struct cavm_dtx_tofcx_selx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
#else /* Word 0 - Little Endian */
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_tofcx_selx_s cn; */
};
typedef union cavm_dtx_tofcx_selx cavm_dtx_tofcx_selx_t;

static inline uint64_t CAVM_DTX_TOFCX_SELX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_TOFCX_SELX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=3) && (b<=1)))
        return 0x87e0fe358000ll + 0x2000ll * ((a) & 0x3) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_TOFCX_SELX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_TOFCX_SELX(a,b) cavm_dtx_tofcx_selx_t
#define bustype_CAVM_DTX_TOFCX_SELX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_TOFCX_SELX(a,b) "DTX_TOFCX_SELX"
#define busnum_CAVM_DTX_TOFCX_SELX(a,b) (a)
#define arguments_CAVM_DTX_TOFCX_SELX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_uaa#_bcst_rsp
 *
 * INTERNAL: DTX UAA Control Register
 */
union cavm_dtx_uaax_bcst_rsp
{
    uint64_t u;
    struct cavm_dtx_uaax_bcst_rsp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_uaax_bcst_rsp_s cn; */
};
typedef union cavm_dtx_uaax_bcst_rsp cavm_dtx_uaax_bcst_rsp_t;

static inline uint64_t CAVM_DTX_UAAX_BCST_RSP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_UAAX_BCST_RSP(uint64_t a)
{
    if (a<=7)
        return 0x87e0fe050080ll + 0x2000ll * ((a) & 0x7);
    __cavm_csr_fatal("DTX_UAAX_BCST_RSP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_UAAX_BCST_RSP(a) cavm_dtx_uaax_bcst_rsp_t
#define bustype_CAVM_DTX_UAAX_BCST_RSP(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_UAAX_BCST_RSP(a) "DTX_UAAX_BCST_RSP"
#define busnum_CAVM_DTX_UAAX_BCST_RSP(a) (a)
#define arguments_CAVM_DTX_UAAX_BCST_RSP(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_uaa#_ctl
 *
 * INTERNAL: DTX UAA Control Register
 */
union cavm_dtx_uaax_ctl
{
    uint64_t u;
    struct cavm_dtx_uaax_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_2_3          : 2;
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
#else /* Word 0 - Little Endian */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t reserved_2_3          : 2;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_uaax_ctl_s cn; */
};
typedef union cavm_dtx_uaax_ctl cavm_dtx_uaax_ctl_t;

static inline uint64_t CAVM_DTX_UAAX_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_UAAX_CTL(uint64_t a)
{
    if (a<=7)
        return 0x87e0fe050060ll + 0x2000ll * ((a) & 0x7);
    __cavm_csr_fatal("DTX_UAAX_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_UAAX_CTL(a) cavm_dtx_uaax_ctl_t
#define bustype_CAVM_DTX_UAAX_CTL(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_UAAX_CTL(a) "DTX_UAAX_CTL"
#define busnum_CAVM_DTX_UAAX_CTL(a) (a)
#define arguments_CAVM_DTX_UAAX_CTL(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_uaa#_dat#
 *
 * INTERNAL: DTX UAA Raw Data Register
 */
union cavm_dtx_uaax_datx
{
    uint64_t u;
    struct cavm_dtx_uaax_datx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
#else /* Word 0 - Little Endian */
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_uaax_datx_s cn; */
};
typedef union cavm_dtx_uaax_datx cavm_dtx_uaax_datx_t;

static inline uint64_t CAVM_DTX_UAAX_DATX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_UAAX_DATX(uint64_t a, uint64_t b)
{
    if ((a<=7) && (b<=1))
        return 0x87e0fe050040ll + 0x2000ll * ((a) & 0x7) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_UAAX_DATX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_UAAX_DATX(a,b) cavm_dtx_uaax_datx_t
#define bustype_CAVM_DTX_UAAX_DATX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_UAAX_DATX(a,b) "DTX_UAAX_DATX"
#define busnum_CAVM_DTX_UAAX_DATX(a,b) (a)
#define arguments_CAVM_DTX_UAAX_DATX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_uaa#_ena#
 *
 * INTERNAL: DTX UAA Data Enable Register
 */
union cavm_dtx_uaax_enax
{
    uint64_t u;
    struct cavm_dtx_uaax_enax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_uaax_enax_s cn; */
};
typedef union cavm_dtx_uaax_enax cavm_dtx_uaax_enax_t;

static inline uint64_t CAVM_DTX_UAAX_ENAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_UAAX_ENAX(uint64_t a, uint64_t b)
{
    if ((a<=7) && (b<=1))
        return 0x87e0fe050020ll + 0x2000ll * ((a) & 0x7) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_UAAX_ENAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_UAAX_ENAX(a,b) cavm_dtx_uaax_enax_t
#define bustype_CAVM_DTX_UAAX_ENAX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_UAAX_ENAX(a,b) "DTX_UAAX_ENAX"
#define busnum_CAVM_DTX_UAAX_ENAX(a,b) (a)
#define arguments_CAVM_DTX_UAAX_ENAX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_uaa#_sel#
 *
 * INTERNAL: DTX UAA Select Register
 */
union cavm_dtx_uaax_selx
{
    uint64_t u;
    struct cavm_dtx_uaax_selx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
#else /* Word 0 - Little Endian */
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_uaax_selx_s cn; */
};
typedef union cavm_dtx_uaax_selx cavm_dtx_uaax_selx_t;

static inline uint64_t CAVM_DTX_UAAX_SELX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_UAAX_SELX(uint64_t a, uint64_t b)
{
    if ((a<=7) && (b<=1))
        return 0x87e0fe050000ll + 0x2000ll * ((a) & 0x7) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_UAAX_SELX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_UAAX_SELX(a,b) cavm_dtx_uaax_selx_t
#define bustype_CAVM_DTX_UAAX_SELX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_UAAX_SELX(a,b) "DTX_UAAX_SELX"
#define busnum_CAVM_DTX_UAAX_SELX(a,b) (a)
#define arguments_CAVM_DTX_UAAX_SELX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_usbh#_bcst_rsp
 *
 * INTERNAL: DTX USBH Control Register
 */
union cavm_dtx_usbhx_bcst_rsp
{
    uint64_t u;
    struct cavm_dtx_usbhx_bcst_rsp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_usbhx_bcst_rsp_s cn; */
};
typedef union cavm_dtx_usbhx_bcst_rsp cavm_dtx_usbhx_bcst_rsp_t;

static inline uint64_t CAVM_DTX_USBHX_BCST_RSP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_USBHX_BCST_RSP(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x87e0fe8d0080ll + 0x2000ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_USBHX_BCST_RSP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_USBHX_BCST_RSP(a) cavm_dtx_usbhx_bcst_rsp_t
#define bustype_CAVM_DTX_USBHX_BCST_RSP(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_USBHX_BCST_RSP(a) "DTX_USBHX_BCST_RSP"
#define busnum_CAVM_DTX_USBHX_BCST_RSP(a) (a)
#define arguments_CAVM_DTX_USBHX_BCST_RSP(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_usbh#_ctl
 *
 * INTERNAL: DTX USBH Control Register
 */
union cavm_dtx_usbhx_ctl
{
    uint64_t u;
    struct cavm_dtx_usbhx_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_2_3          : 2;
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
#else /* Word 0 - Little Endian */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t reserved_2_3          : 2;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_usbhx_ctl_s cn; */
};
typedef union cavm_dtx_usbhx_ctl cavm_dtx_usbhx_ctl_t;

static inline uint64_t CAVM_DTX_USBHX_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_USBHX_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x87e0fe8d0060ll + 0x2000ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_USBHX_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_USBHX_CTL(a) cavm_dtx_usbhx_ctl_t
#define bustype_CAVM_DTX_USBHX_CTL(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_USBHX_CTL(a) "DTX_USBHX_CTL"
#define busnum_CAVM_DTX_USBHX_CTL(a) (a)
#define arguments_CAVM_DTX_USBHX_CTL(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_usbh#_dat#
 *
 * INTERNAL: DTX USBH Raw Data Register
 */
union cavm_dtx_usbhx_datx
{
    uint64_t u;
    struct cavm_dtx_usbhx_datx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
#else /* Word 0 - Little Endian */
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_usbhx_datx_s cn; */
};
typedef union cavm_dtx_usbhx_datx cavm_dtx_usbhx_datx_t;

static inline uint64_t CAVM_DTX_USBHX_DATX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_USBHX_DATX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=1) && (b<=1)))
        return 0x87e0fe8d0040ll + 0x2000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_USBHX_DATX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_USBHX_DATX(a,b) cavm_dtx_usbhx_datx_t
#define bustype_CAVM_DTX_USBHX_DATX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_USBHX_DATX(a,b) "DTX_USBHX_DATX"
#define busnum_CAVM_DTX_USBHX_DATX(a,b) (a)
#define arguments_CAVM_DTX_USBHX_DATX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_usbh#_ena#
 *
 * INTERNAL: DTX USBH Data Enable Register
 */
union cavm_dtx_usbhx_enax
{
    uint64_t u;
    struct cavm_dtx_usbhx_enax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_usbhx_enax_s cn; */
};
typedef union cavm_dtx_usbhx_enax cavm_dtx_usbhx_enax_t;

static inline uint64_t CAVM_DTX_USBHX_ENAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_USBHX_ENAX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=1) && (b<=1)))
        return 0x87e0fe8d0020ll + 0x2000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_USBHX_ENAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_USBHX_ENAX(a,b) cavm_dtx_usbhx_enax_t
#define bustype_CAVM_DTX_USBHX_ENAX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_USBHX_ENAX(a,b) "DTX_USBHX_ENAX"
#define busnum_CAVM_DTX_USBHX_ENAX(a,b) (a)
#define arguments_CAVM_DTX_USBHX_ENAX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_usbh#_sel#
 *
 * INTERNAL: DTX USBH Select Register
 */
union cavm_dtx_usbhx_selx
{
    uint64_t u;
    struct cavm_dtx_usbhx_selx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
#else /* Word 0 - Little Endian */
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_usbhx_selx_s cn; */
};
typedef union cavm_dtx_usbhx_selx cavm_dtx_usbhx_selx_t;

static inline uint64_t CAVM_DTX_USBHX_SELX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_USBHX_SELX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=1) && (b<=1)))
        return 0x87e0fe8d0000ll + 0x2000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_USBHX_SELX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_USBHX_SELX(a,b) cavm_dtx_usbhx_selx_t
#define bustype_CAVM_DTX_USBHX_SELX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_USBHX_SELX(a,b) "DTX_USBHX_SELX"
#define busnum_CAVM_DTX_USBHX_SELX(a,b) (a)
#define arguments_CAVM_DTX_USBHX_SELX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_vdec_bcst_rsp
 *
 * INTERNAL: DTX VDEC Control Register
 */
union cavm_dtx_vdec_bcst_rsp
{
    uint64_t u;
    struct cavm_dtx_vdec_bcst_rsp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_vdec_bcst_rsp_s cn; */
};
typedef union cavm_dtx_vdec_bcst_rsp cavm_dtx_vdec_bcst_rsp_t;

#define CAVM_DTX_VDEC_BCST_RSP CAVM_DTX_VDEC_BCST_RSP_FUNC()
static inline uint64_t CAVM_DTX_VDEC_BCST_RSP_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_VDEC_BCST_RSP_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KA))
        return 0x87e0fe320080ll;
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x87e0fe320080ll;
    __cavm_csr_fatal("DTX_VDEC_BCST_RSP", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_VDEC_BCST_RSP cavm_dtx_vdec_bcst_rsp_t
#define bustype_CAVM_DTX_VDEC_BCST_RSP CSR_TYPE_RSL
#define basename_CAVM_DTX_VDEC_BCST_RSP "DTX_VDEC_BCST_RSP"
#define busnum_CAVM_DTX_VDEC_BCST_RSP 0
#define arguments_CAVM_DTX_VDEC_BCST_RSP -1,-1,-1,-1

/**
 * Register (RSL) dtx_vdec_ctl
 *
 * INTERNAL: DTX VDEC Control Register
 */
union cavm_dtx_vdec_ctl
{
    uint64_t u;
    struct cavm_dtx_vdec_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_2_3          : 2;
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
#else /* Word 0 - Little Endian */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t reserved_2_3          : 2;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_vdec_ctl_s cn; */
};
typedef union cavm_dtx_vdec_ctl cavm_dtx_vdec_ctl_t;

#define CAVM_DTX_VDEC_CTL CAVM_DTX_VDEC_CTL_FUNC()
static inline uint64_t CAVM_DTX_VDEC_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_VDEC_CTL_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KA))
        return 0x87e0fe320060ll;
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x87e0fe320060ll;
    __cavm_csr_fatal("DTX_VDEC_CTL", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_VDEC_CTL cavm_dtx_vdec_ctl_t
#define bustype_CAVM_DTX_VDEC_CTL CSR_TYPE_RSL
#define basename_CAVM_DTX_VDEC_CTL "DTX_VDEC_CTL"
#define busnum_CAVM_DTX_VDEC_CTL 0
#define arguments_CAVM_DTX_VDEC_CTL -1,-1,-1,-1

/**
 * Register (RSL) dtx_vdec_dat#
 *
 * INTERNAL: DTX VDEC Raw Data Register
 */
union cavm_dtx_vdec_datx
{
    uint64_t u;
    struct cavm_dtx_vdec_datx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
#else /* Word 0 - Little Endian */
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_vdec_datx_s cn; */
};
typedef union cavm_dtx_vdec_datx cavm_dtx_vdec_datx_t;

static inline uint64_t CAVM_DTX_VDEC_DATX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_VDEC_DATX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x87e0fe320040ll + 8ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x87e0fe320040ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_VDEC_DATX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_VDEC_DATX(a) cavm_dtx_vdec_datx_t
#define bustype_CAVM_DTX_VDEC_DATX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_VDEC_DATX(a) "DTX_VDEC_DATX"
#define busnum_CAVM_DTX_VDEC_DATX(a) (a)
#define arguments_CAVM_DTX_VDEC_DATX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_vdec_ena#
 *
 * INTERNAL: DTX VDEC Data Enable Register
 */
union cavm_dtx_vdec_enax
{
    uint64_t u;
    struct cavm_dtx_vdec_enax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_vdec_enax_s cn; */
};
typedef union cavm_dtx_vdec_enax cavm_dtx_vdec_enax_t;

static inline uint64_t CAVM_DTX_VDEC_ENAX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_VDEC_ENAX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x87e0fe320020ll + 8ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x87e0fe320020ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_VDEC_ENAX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_VDEC_ENAX(a) cavm_dtx_vdec_enax_t
#define bustype_CAVM_DTX_VDEC_ENAX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_VDEC_ENAX(a) "DTX_VDEC_ENAX"
#define busnum_CAVM_DTX_VDEC_ENAX(a) (a)
#define arguments_CAVM_DTX_VDEC_ENAX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_vdec_sel#
 *
 * INTERNAL: DTX VDEC Select Register
 */
union cavm_dtx_vdec_selx
{
    uint64_t u;
    struct cavm_dtx_vdec_selx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
#else /* Word 0 - Little Endian */
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_vdec_selx_s cn; */
};
typedef union cavm_dtx_vdec_selx cavm_dtx_vdec_selx_t;

static inline uint64_t CAVM_DTX_VDEC_SELX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_VDEC_SELX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x87e0fe320000ll + 8ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x87e0fe320000ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_VDEC_SELX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_VDEC_SELX(a) cavm_dtx_vdec_selx_t
#define bustype_CAVM_DTX_VDEC_SELX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_VDEC_SELX(a) "DTX_VDEC_SELX"
#define busnum_CAVM_DTX_VDEC_SELX(a) (a)
#define arguments_CAVM_DTX_VDEC_SELX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_xcp#_bcst_rsp
 *
 * INTERNAL: DTX XCP Control Register
 */
union cavm_dtx_xcpx_bcst_rsp
{
    uint64_t u;
    struct cavm_dtx_xcpx_bcst_rsp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_xcpx_bcst_rsp_s cn; */
};
typedef union cavm_dtx_xcpx_bcst_rsp cavm_dtx_xcpx_bcst_rsp_t;

static inline uint64_t CAVM_DTX_XCPX_BCST_RSP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_XCPX_BCST_RSP(uint64_t a)
{
    if (a<=2)
        return 0x87e0fe858080ll + 0x2000ll * ((a) & 0x3);
    __cavm_csr_fatal("DTX_XCPX_BCST_RSP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_XCPX_BCST_RSP(a) cavm_dtx_xcpx_bcst_rsp_t
#define bustype_CAVM_DTX_XCPX_BCST_RSP(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_XCPX_BCST_RSP(a) "DTX_XCPX_BCST_RSP"
#define busnum_CAVM_DTX_XCPX_BCST_RSP(a) (a)
#define arguments_CAVM_DTX_XCPX_BCST_RSP(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_xcp#_ctl
 *
 * INTERNAL: DTX XCP Control Register
 */
union cavm_dtx_xcpx_ctl
{
    uint64_t u;
    struct cavm_dtx_xcpx_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_2_3          : 2;
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
#else /* Word 0 - Little Endian */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t reserved_2_3          : 2;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_xcpx_ctl_s cn; */
};
typedef union cavm_dtx_xcpx_ctl cavm_dtx_xcpx_ctl_t;

static inline uint64_t CAVM_DTX_XCPX_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_XCPX_CTL(uint64_t a)
{
    if (a<=2)
        return 0x87e0fe858060ll + 0x2000ll * ((a) & 0x3);
    __cavm_csr_fatal("DTX_XCPX_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_XCPX_CTL(a) cavm_dtx_xcpx_ctl_t
#define bustype_CAVM_DTX_XCPX_CTL(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_XCPX_CTL(a) "DTX_XCPX_CTL"
#define busnum_CAVM_DTX_XCPX_CTL(a) (a)
#define arguments_CAVM_DTX_XCPX_CTL(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_xcp#_dat#
 *
 * INTERNAL: DTX XCP Raw Data Register
 */
union cavm_dtx_xcpx_datx
{
    uint64_t u;
    struct cavm_dtx_xcpx_datx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
#else /* Word 0 - Little Endian */
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_xcpx_datx_s cn; */
};
typedef union cavm_dtx_xcpx_datx cavm_dtx_xcpx_datx_t;

static inline uint64_t CAVM_DTX_XCPX_DATX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_XCPX_DATX(uint64_t a, uint64_t b)
{
    if ((a<=2) && (b<=1))
        return 0x87e0fe858040ll + 0x2000ll * ((a) & 0x3) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_XCPX_DATX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_XCPX_DATX(a,b) cavm_dtx_xcpx_datx_t
#define bustype_CAVM_DTX_XCPX_DATX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_XCPX_DATX(a,b) "DTX_XCPX_DATX"
#define busnum_CAVM_DTX_XCPX_DATX(a,b) (a)
#define arguments_CAVM_DTX_XCPX_DATX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_xcp#_ena#
 *
 * INTERNAL: DTX XCP Data Enable Register
 */
union cavm_dtx_xcpx_enax
{
    uint64_t u;
    struct cavm_dtx_xcpx_enax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_xcpx_enax_s cn; */
};
typedef union cavm_dtx_xcpx_enax cavm_dtx_xcpx_enax_t;

static inline uint64_t CAVM_DTX_XCPX_ENAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_XCPX_ENAX(uint64_t a, uint64_t b)
{
    if ((a<=2) && (b<=1))
        return 0x87e0fe858020ll + 0x2000ll * ((a) & 0x3) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_XCPX_ENAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_XCPX_ENAX(a,b) cavm_dtx_xcpx_enax_t
#define bustype_CAVM_DTX_XCPX_ENAX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_XCPX_ENAX(a,b) "DTX_XCPX_ENAX"
#define busnum_CAVM_DTX_XCPX_ENAX(a,b) (a)
#define arguments_CAVM_DTX_XCPX_ENAX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_xcp#_sel#
 *
 * INTERNAL: DTX XCP Select Register
 */
union cavm_dtx_xcpx_selx
{
    uint64_t u;
    struct cavm_dtx_xcpx_selx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
#else /* Word 0 - Little Endian */
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_xcpx_selx_s cn; */
};
typedef union cavm_dtx_xcpx_selx cavm_dtx_xcpx_selx_t;

static inline uint64_t CAVM_DTX_XCPX_SELX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_XCPX_SELX(uint64_t a, uint64_t b)
{
    if ((a<=2) && (b<=1))
        return 0x87e0fe858000ll + 0x2000ll * ((a) & 0x3) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_XCPX_SELX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_XCPX_SELX(a,b) cavm_dtx_xcpx_selx_t
#define bustype_CAVM_DTX_XCPX_SELX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_XCPX_SELX(a,b) "DTX_XCPX_SELX"
#define busnum_CAVM_DTX_XCPX_SELX(a,b) (a)
#define arguments_CAVM_DTX_XCPX_SELX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dtx_xsx_bcst_rsp
 *
 * INTERNAL: DTX XSX Control Register
 */
union cavm_dtx_xsx_bcst_rsp
{
    uint64_t u;
    struct cavm_dtx_xsx_bcst_rsp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enable this DTX instance as the responder to DTX broadcast read/write operations. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_xsx_bcst_rsp_s cn; */
};
typedef union cavm_dtx_xsx_bcst_rsp cavm_dtx_xsx_bcst_rsp_t;

#define CAVM_DTX_XSX_BCST_RSP CAVM_DTX_XSX_BCST_RSP_FUNC()
static inline uint64_t CAVM_DTX_XSX_BCST_RSP_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_XSX_BCST_RSP_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KA))
        return 0x87e0fe366080ll;
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x87e0fe366080ll;
    __cavm_csr_fatal("DTX_XSX_BCST_RSP", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_XSX_BCST_RSP cavm_dtx_xsx_bcst_rsp_t
#define bustype_CAVM_DTX_XSX_BCST_RSP CSR_TYPE_RSL
#define basename_CAVM_DTX_XSX_BCST_RSP "DTX_XSX_BCST_RSP"
#define busnum_CAVM_DTX_XSX_BCST_RSP 0
#define arguments_CAVM_DTX_XSX_BCST_RSP -1,-1,-1,-1

/**
 * Register (RSL) dtx_xsx_ctl
 *
 * INTERNAL: DTX XSX Control Register
 */
union cavm_dtx_xsx_ctl
{
    uint64_t u;
    struct cavm_dtx_xsx_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_2_3          : 2;
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
#else /* Word 0 - Little Endian */
        uint64_t swap                  : 1;  /**< [  0:  0](R/W) Swap the high and low 36-bit debug bus outputs. */
        uint64_t echoen                : 1;  /**< [  1:  1](R/W) Drive debug bus with the value in DTX_xxx_ENA(0..1) instead of normal block
                                                                 debug data. Not applicable when software directly reads the DTX_xxx_DAT(0..1)
                                                                 registers.  For diagnostic use only. */
        uint64_t reserved_2_3          : 2;
        uint64_t active                : 1;  /**< [  4:  4](R/W) Force block's gated clocks on, so that the state of idle signals may be captured. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_xsx_ctl_s cn; */
};
typedef union cavm_dtx_xsx_ctl cavm_dtx_xsx_ctl_t;

#define CAVM_DTX_XSX_CTL CAVM_DTX_XSX_CTL_FUNC()
static inline uint64_t CAVM_DTX_XSX_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_XSX_CTL_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KA))
        return 0x87e0fe366060ll;
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x87e0fe366060ll;
    __cavm_csr_fatal("DTX_XSX_CTL", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_XSX_CTL cavm_dtx_xsx_ctl_t
#define bustype_CAVM_DTX_XSX_CTL CSR_TYPE_RSL
#define basename_CAVM_DTX_XSX_CTL "DTX_XSX_CTL"
#define busnum_CAVM_DTX_XSX_CTL 0
#define arguments_CAVM_DTX_XSX_CTL -1,-1,-1,-1

/**
 * Register (RSL) dtx_xsx_dat#
 *
 * INTERNAL: DTX XSX Raw Data Register
 */
union cavm_dtx_xsx_datx
{
    uint64_t u;
    struct cavm_dtx_xsx_datx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
#else /* Word 0 - Little Endian */
        uint64_t raw                   : 36; /**< [ 35:  0](RO/H) Raw debug data captured by the DTX before the ENA is applied. This gives the
                                                                 ability to peek into blocks during an OCLA capture without OCLA reconfiguration. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_xsx_datx_s cn; */
};
typedef union cavm_dtx_xsx_datx cavm_dtx_xsx_datx_t;

static inline uint64_t CAVM_DTX_XSX_DATX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_XSX_DATX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x87e0fe366040ll + 8ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x87e0fe366040ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_XSX_DATX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_XSX_DATX(a) cavm_dtx_xsx_datx_t
#define bustype_CAVM_DTX_XSX_DATX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_XSX_DATX(a) "DTX_XSX_DATX"
#define busnum_CAVM_DTX_XSX_DATX(a) (a)
#define arguments_CAVM_DTX_XSX_DATX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_xsx_ena#
 *
 * INTERNAL: DTX XSX Data Enable Register
 */
union cavm_dtx_xsx_enax
{
    uint64_t u;
    struct cavm_dtx_xsx_enax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 36; /**< [ 35:  0](R/W) Output enable vector of which bits to drive onto the low/high 36-bit debug
                                                                 buses. Normally only one block will drive each bit. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_xsx_enax_s cn; */
};
typedef union cavm_dtx_xsx_enax cavm_dtx_xsx_enax_t;

static inline uint64_t CAVM_DTX_XSX_ENAX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_XSX_ENAX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x87e0fe366020ll + 8ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x87e0fe366020ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_XSX_ENAX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_XSX_ENAX(a) cavm_dtx_xsx_enax_t
#define bustype_CAVM_DTX_XSX_ENAX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_XSX_ENAX(a) "DTX_XSX_ENAX"
#define busnum_CAVM_DTX_XSX_ENAX(a) (a)
#define arguments_CAVM_DTX_XSX_ENAX(a) (a),-1,-1,-1

/**
 * Register (RSL) dtx_xsx_sel#
 *
 * INTERNAL: DTX XSX Select Register
 */
union cavm_dtx_xsx_selx
{
    uint64_t u;
    struct cavm_dtx_xsx_selx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
#else /* Word 0 - Little Endian */
        uint64_t value                 : 24; /**< [ 23:  0](R/W) Debug select. Selects which signals to drive onto low/high 36-bit debug buses. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dtx_xsx_selx_s cn; */
};
typedef union cavm_dtx_xsx_selx cavm_dtx_xsx_selx_t;

static inline uint64_t CAVM_DTX_XSX_SELX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DTX_XSX_SELX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x87e0fe366000ll + 8ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x87e0fe366000ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_XSX_SELX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_XSX_SELX(a) cavm_dtx_xsx_selx_t
#define bustype_CAVM_DTX_XSX_SELX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_XSX_SELX(a) "DTX_XSX_SELX"
#define busnum_CAVM_DTX_XSX_SELX(a) (a)
#define arguments_CAVM_DTX_XSX_SELX(a) (a),-1,-1,-1

#endif /* __CAVM_CSRS_DTX_H__ */
