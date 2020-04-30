#ifndef __CAVM_CSRS_DTX_H__
#define __CAVM_CSRS_DTX_H__
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
 * OcteonTX DTX.
 *
 * This file is auto generated. Do not edit.
 *
 */

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
    return 0x87e0fe7f0060ll;
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
        return 0x87e0fe7f0020ll + 8ll * ((a) & 0x1);
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
        return 0x87e0fe7f0000ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_BROADCAST_SELX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_BROADCAST_SELX(a) cavm_dtx_broadcast_selx_t
#define bustype_CAVM_DTX_BROADCAST_SELX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_BROADCAST_SELX(a) "DTX_BROADCAST_SELX"
#define busnum_CAVM_DTX_BROADCAST_SELX(a) (a)
#define arguments_CAVM_DTX_BROADCAST_SELX(a) (a),-1,-1,-1

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
    return 0x87e0feb68080ll;
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
    return 0x87e0feb68060ll;
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
        return 0x87e0feb68040ll + 8ll * ((a) & 0x1);
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
        return 0x87e0feb68020ll + 8ll * ((a) & 0x1);
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
        return 0x87e0feb68000ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_CPC_SELX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_CPC_SELX(a) cavm_dtx_cpc_selx_t
#define bustype_CAVM_DTX_CPC_SELX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_CPC_SELX(a) "DTX_CPC_SELX"
#define busnum_CAVM_DTX_CPC_SELX(a) (a)
#define arguments_CAVM_DTX_CPC_SELX(a) (a),-1,-1,-1

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
    return 0x87e0feb70080ll;
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
    return 0x87e0feb70060ll;
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
        return 0x87e0feb70040ll + 8ll * ((a) & 0x1);
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
        return 0x87e0feb70020ll + 8ll * ((a) & 0x1);
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
        return 0x87e0feb70000ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_DPI_SELX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_DPI_SELX(a) cavm_dtx_dpi_selx_t
#define bustype_CAVM_DTX_DPI_SELX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_DPI_SELX(a) "DTX_DPI_SELX"
#define busnum_CAVM_DTX_DPI_SELX(a) (a)
#define arguments_CAVM_DTX_DPI_SELX(a) (a),-1,-1,-1

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
    return 0x87e0fe808080ll;
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
    return 0x87e0fe808060ll;
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
        return 0x87e0fe808040ll + 8ll * ((a) & 0x1);
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
        return 0x87e0fe808020ll + 8ll * ((a) & 0x1);
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
        return 0x87e0fe808000ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_GIC_SELX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_GIC_SELX(a) cavm_dtx_gic_selx_t
#define bustype_CAVM_DTX_GIC_SELX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_GIC_SELX(a) "DTX_GIC_SELX"
#define busnum_CAVM_DTX_GIC_SELX(a) (a)
#define arguments_CAVM_DTX_GIC_SELX(a) (a),-1,-1,-1

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
    if (a<=3)
        return 0x87e0fe780080ll + 0x8000ll * ((a) & 0x3);
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
    if (a<=3)
        return 0x87e0fe780060ll + 0x8000ll * ((a) & 0x3);
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
    if ((a<=3) && (b<=1))
        return 0x87e0fe780040ll + 0x8000ll * ((a) & 0x3) + 8ll * ((b) & 0x1);
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
    if ((a<=3) && (b<=1))
        return 0x87e0fe780020ll + 0x8000ll * ((a) & 0x3) + 8ll * ((b) & 0x1);
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
    if (a<=1)
        return 0x87e0fe7a0080ll + 0x8000ll * ((a) & 0x1);
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
    if (a<=1)
        return 0x87e0fe7a0060ll + 0x8000ll * ((a) & 0x1);
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
    if ((a<=1) && (b<=1))
        return 0x87e0fe7a0040ll + 0x8000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
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
    if ((a<=1) && (b<=1))
        return 0x87e0fe7a0020ll + 0x8000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
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
    if ((a<=1) && (b<=1))
        return 0x87e0fe7a0000ll + 0x8000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
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
    if ((a<=3) && (b<=1))
        return 0x87e0fe780000ll + 0x8000ll * ((a) & 0x3) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_IOBNX_SELX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_IOBNX_SELX(a,b) cavm_dtx_iobnx_selx_t
#define bustype_CAVM_DTX_IOBNX_SELX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_IOBNX_SELX(a,b) "DTX_IOBNX_SELX"
#define busnum_CAVM_DTX_IOBNX_SELX(a,b) (a)
#define arguments_CAVM_DTX_IOBNX_SELX(a,b) (a),(b),-1,-1

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
    return 0x87e0fe7e0080ll;
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
    return 0x87e0fe7e0060ll;
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
        return 0x87e0fe7e0040ll + 8ll * ((a) & 0x1);
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
        return 0x87e0fe7e0020ll + 8ll * ((a) & 0x1);
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
        return 0x87e0fe7e0000ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_MRML_SELX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_MRML_SELX(a) cavm_dtx_mrml_selx_t
#define bustype_CAVM_DTX_MRML_SELX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_MRML_SELX(a) "DTX_MRML_SELX"
#define busnum_CAVM_DTX_MRML_SELX(a) (a)
#define arguments_CAVM_DTX_MRML_SELX(a) (a),-1,-1,-1

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
    if (a<=2)
        return 0x87e0fea20080ll + 0x8000ll * ((a) & 0x3);
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
    if (a<=2)
        return 0x87e0fea20060ll + 0x8000ll * ((a) & 0x3);
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
    if ((a<=2) && (b<=1))
        return 0x87e0fea20040ll + 0x8000ll * ((a) & 0x3) + 8ll * ((b) & 0x1);
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
    if ((a<=2) && (b<=1))
        return 0x87e0fea20020ll + 0x8000ll * ((a) & 0x3) + 8ll * ((b) & 0x1);
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
    if ((a<=2) && (b<=1))
        return 0x87e0fea20000ll + 0x8000ll * ((a) & 0x3) + 8ll * ((b) & 0x1);
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
    if (a<=5)
        return 0x87e0feda0080ll + 0x8000ll * ((a) & 0x7);
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
    if (a<=5)
        return 0x87e0feda0060ll + 0x8000ll * ((a) & 0x7);
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
    if ((a<=5) && (b<=1))
        return 0x87e0feda0040ll + 0x8000ll * ((a) & 0x7) + 8ll * ((b) & 0x1);
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
    if ((a<=5) && (b<=1))
        return 0x87e0feda0020ll + 0x8000ll * ((a) & 0x7) + 8ll * ((b) & 0x1);
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
    if ((a<=5) && (b<=1))
        return 0x87e0feda0000ll + 0x8000ll * ((a) & 0x7) + 8ll * ((b) & 0x1);
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
    if (a==0)
        return 0x87e0fea60080ll + 0x8000ll * ((a) & 0x0);
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
    if (a==0)
        return 0x87e0fea60060ll + 0x8000ll * ((a) & 0x0);
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
    if ((a==0) && (b<=1))
        return 0x87e0fea60040ll + 0x8000ll * ((a) & 0x0) + 8ll * ((b) & 0x1);
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
    if ((a==0) && (b<=1))
        return 0x87e0fea60020ll + 0x8000ll * ((a) & 0x0) + 8ll * ((b) & 0x1);
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
    if ((a==0) && (b<=1))
        return 0x87e0fea60000ll + 0x8000ll * ((a) & 0x0) + 8ll * ((b) & 0x1);
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
    if (a==0)
        return 0x87e0fea80080ll + 0x8000ll * ((a) & 0x0);
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
    if (a==0)
        return 0x87e0fea80060ll + 0x8000ll * ((a) & 0x0);
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
    if ((a==0) && (b<=1))
        return 0x87e0fea80040ll + 0x8000ll * ((a) & 0x0) + 8ll * ((b) & 0x1);
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
    if ((a==0) && (b<=1))
        return 0x87e0fea80020ll + 0x8000ll * ((a) & 0x0) + 8ll * ((b) & 0x1);
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
    if ((a==0) && (b<=1))
        return 0x87e0fea80000ll + 0x8000ll * ((a) & 0x0) + 8ll * ((b) & 0x1);
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
    return 0x87e0fea78080ll;
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
    return 0x87e0fea78060ll;
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
        return 0x87e0fea78040ll + 8ll * ((a) & 0x1);
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
        return 0x87e0fea78020ll + 8ll * ((a) & 0x1);
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
        return 0x87e0fea78000ll + 8ll * ((a) & 0x1);
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
    return 0x87e0fea50080ll;
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
    return 0x87e0fea50060ll;
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
        return 0x87e0fea50040ll + 8ll * ((a) & 0x1);
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
        return 0x87e0fea50020ll + 8ll * ((a) & 0x1);
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
        return 0x87e0fea50000ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_NPC_SELX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_NPC_SELX(a) cavm_dtx_npc_selx_t
#define bustype_CAVM_DTX_NPC_SELX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_NPC_SELX(a) "DTX_NPC_SELX"
#define busnum_CAVM_DTX_NPC_SELX(a) (a)
#define arguments_CAVM_DTX_NPC_SELX(a) (a),-1,-1,-1

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
    if (a<=3)
        return 0x87e0fef00080ll + 0x8000ll * ((a) & 0x3);
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
    if (a<=3)
        return 0x87e0fef00060ll + 0x8000ll * ((a) & 0x3);
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
    if ((a<=3) && (b<=1))
        return 0x87e0fef00040ll + 0x8000ll * ((a) & 0x3) + 8ll * ((b) & 0x1);
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
    if ((a<=3) && (b<=1))
        return 0x87e0fef00020ll + 0x8000ll * ((a) & 0x3) + 8ll * ((b) & 0x1);
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
    if ((a<=3) && (b<=1))
        return 0x87e0fef00000ll + 0x8000ll * ((a) & 0x3) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_PEMX_SELX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_PEMX_SELX(a,b) cavm_dtx_pemx_selx_t
#define bustype_CAVM_DTX_PEMX_SELX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_PEMX_SELX(a,b) "DTX_PEMX_SELX"
#define busnum_CAVM_DTX_PEMX_SELX(a,b) (a)
#define arguments_CAVM_DTX_PEMX_SELX(a,b) (a),(b),-1,-1

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
    return 0x87e0fe030080ll;
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
    return 0x87e0fe030060ll;
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
        return 0x87e0fe030040ll + 8ll * ((a) & 0x1);
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
        return 0x87e0fe030020ll + 8ll * ((a) & 0x1);
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
        return 0x87e0fe030000ll + 8ll * ((a) & 0x1);
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
    return 0x87e0fea08080ll;
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
    return 0x87e0fea08060ll;
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
        return 0x87e0fea08040ll + 8ll * ((a) & 0x1);
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
        return 0x87e0fea08020ll + 8ll * ((a) & 0x1);
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
        return 0x87e0fea08000ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_RVU_SELX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_RVU_SELX(a) cavm_dtx_rvu_selx_t
#define bustype_CAVM_DTX_RVU_SELX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_RVU_SELX(a) "DTX_RVU_SELX"
#define busnum_CAVM_DTX_RVU_SELX(a) (a)
#define arguments_CAVM_DTX_RVU_SELX(a) (a),-1,-1,-1

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
        return 0x87e0fe980080ll + 0x8000ll * ((a) & 0x0);
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
        return 0x87e0fe980060ll + 0x8000ll * ((a) & 0x0);
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
        return 0x87e0fe980040ll + 0x8000ll * ((a) & 0x0) + 8ll * ((b) & 0x1);
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
        return 0x87e0fe980020ll + 0x8000ll * ((a) & 0x0) + 8ll * ((b) & 0x1);
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
        return 0x87e0fe980000ll + 0x8000ll * ((a) & 0x0) + 8ll * ((b) & 0x1);
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
    return 0x87e0fea58080ll;
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
    return 0x87e0fea58060ll;
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
        return 0x87e0fea58040ll + 8ll * ((a) & 0x1);
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
        return 0x87e0fea58020ll + 8ll * ((a) & 0x1);
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
        return 0x87e0fea58000ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_SSO_SELX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_SSO_SELX(a) cavm_dtx_sso_selx_t
#define bustype_CAVM_DTX_SSO_SELX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_SSO_SELX(a) "DTX_SSO_SELX"
#define busnum_CAVM_DTX_SSO_SELX(a) (a)
#define arguments_CAVM_DTX_SSO_SELX(a) (a),-1,-1,-1

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
    return 0x87e0fea70080ll;
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
    return 0x87e0fea70060ll;
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
        return 0x87e0fea70040ll + 8ll * ((a) & 0x1);
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
        return 0x87e0fea70020ll + 8ll * ((a) & 0x1);
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
        return 0x87e0fea70000ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("DTX_TIM_SELX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_TIM_SELX(a) cavm_dtx_tim_selx_t
#define bustype_CAVM_DTX_TIM_SELX(a) CSR_TYPE_RSL
#define basename_CAVM_DTX_TIM_SELX(a) "DTX_TIM_SELX"
#define busnum_CAVM_DTX_TIM_SELX(a) (a)
#define arguments_CAVM_DTX_TIM_SELX(a) (a),-1,-1,-1

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
    if (a<=1)
        return 0x87e0fe960080ll + 0x8000ll * ((a) & 0x1);
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
    if (a<=1)
        return 0x87e0fe960060ll + 0x8000ll * ((a) & 0x1);
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
    if ((a<=1) && (b<=1))
        return 0x87e0fe960040ll + 0x8000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
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
    if ((a<=1) && (b<=1))
        return 0x87e0fe960020ll + 0x8000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
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
    if ((a<=1) && (b<=1))
        return 0x87e0fe960000ll + 0x8000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DTX_XCPX_SELX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DTX_XCPX_SELX(a,b) cavm_dtx_xcpx_selx_t
#define bustype_CAVM_DTX_XCPX_SELX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DTX_XCPX_SELX(a,b) "DTX_XCPX_SELX"
#define busnum_CAVM_DTX_XCPX_SELX(a,b) (a)
#define arguments_CAVM_DTX_XCPX_SELX(a,b) (a),(b),-1,-1

#endif /* __CAVM_CSRS_DTX_H__ */
