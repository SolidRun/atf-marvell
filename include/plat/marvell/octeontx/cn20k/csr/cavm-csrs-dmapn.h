#ifndef __CAVM_CSRS_DMAPN_H__
#define __CAVM_CSRS_DMAPN_H__
/* This file is auto-generated. Do not edit */

/***********************license start***********************************
* Copyright (C) 2021-2023 Marvell.
* SPDX-License-Identifier: BSD-3-Clause
* https://spdx.org/licenses
***********************license end**************************************/


/**
 * @file
 *
 * Configuration and status register (CSR) address and type definitions for
 * DMAPN.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration dmap_du_ru_mode_e
 *
 * DMAP DU And RU Mode Enumeration
 */
#define CAVM_DMAP_DU_RU_MODE_E_DFT_IDFT (7)
#define CAVM_DMAP_DU_RU_MODE_E_DU_7_2_S (0)
#define CAVM_DMAP_DU_RU_MODE_E_DU_7_3_RU (2)
#define CAVM_DMAP_DU_RU_MODE_E_DU_7_3_S (1)
#define CAVM_DMAP_DU_RU_MODE_E_RSDV0 (3)
#define CAVM_DMAP_DU_RU_MODE_E_RSDV1 (4)
#define CAVM_DMAP_DU_RU_MODE_E_RSDV2 (5)
#define CAVM_DMAP_DU_RU_MODE_E_RSDV3 (6)

/**
 * Enumeration dmapn_bar_e
 */
#define CAVM_DMAPN_BAR_E_DMAPNX_PF_BAR2(a) (0x87e041200000ll + 0x80000ll * (a))
#define CAVM_DMAPN_BAR_E_DMAPNX_PF_BAR2_SIZE 0x40000ull

/**
 * Register (RSL) dmap#_ab#_jd#_cfg3
 *
 * DMAP Job Configuration Register 3
 */
union cavm_dmapx_abx_jdx_cfg3
{
    uint64_t u;
    struct cavm_dmapx_abx_jdx_cfg3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_60_63        : 4;
        uint64_t c_imag_m4             : 12; /**< [ 59: 48](R/W) Imaginary part of C[-4], signed. */
        uint64_t c_real_m4             : 12; /**< [ 47: 36](R/W) Real part of C[-4], signed. */
        uint64_t c_imag_m3             : 12; /**< [ 35: 24](R/W) Imaginary part of C[-3], signed. */
        uint64_t c_real_m3             : 12; /**< [ 23: 12](R/W) Real part of C[-3], signed. */
        uint64_t c_imag_m2             : 12; /**< [ 11:  0](R/W) Imaginary part of C[-2], signed. */
#else /* Word 0 - Little Endian */
        uint64_t c_imag_m2             : 12; /**< [ 11:  0](R/W) Imaginary part of C[-2], signed. */
        uint64_t c_real_m3             : 12; /**< [ 23: 12](R/W) Real part of C[-3], signed. */
        uint64_t c_imag_m3             : 12; /**< [ 35: 24](R/W) Imaginary part of C[-3], signed. */
        uint64_t c_real_m4             : 12; /**< [ 47: 36](R/W) Real part of C[-4], signed. */
        uint64_t c_imag_m4             : 12; /**< [ 59: 48](R/W) Imaginary part of C[-4], signed. */
        uint64_t reserved_60_63        : 4;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dmapx_abx_jdx_cfg3_s cn; */
};
typedef union cavm_dmapx_abx_jdx_cfg3 cavm_dmapx_abx_jdx_cfg3_t;

static inline uint64_t CAVM_DMAPX_ABX_JDX_CFG3(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DMAPX_ABX_JDX_CFG3(uint64_t a, uint64_t b, uint64_t c)
{
    if ((a<=2) && (b<=1) && (c<=3))
        return 0x87e041202018ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1) + 0x2000ll * ((c) & 0x3);
    __cavm_csr_fatal("DMAPX_ABX_JDX_CFG3", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_DMAPX_ABX_JDX_CFG3(a,b,c) cavm_dmapx_abx_jdx_cfg3_t
#define bustype_CAVM_DMAPX_ABX_JDX_CFG3(a,b,c) CSR_TYPE_RSL
#define basename_CAVM_DMAPX_ABX_JDX_CFG3(a,b,c) "DMAPX_ABX_JDX_CFG3"
#define device_bar_CAVM_DMAPX_ABX_JDX_CFG3(a,b,c) 0x2 /* PF_BAR2 */
#define busnum_CAVM_DMAPX_ABX_JDX_CFG3(a,b,c) (a)
#define arguments_CAVM_DMAPX_ABX_JDX_CFG3(a,b,c) (a),(b),(c),-1

/**
 * Register (RSL) dmap#_ab#_jd#_cfg4
 *
 * DMAP Job Configuration Register 4
 */
union cavm_dmapx_abx_jdx_cfg4
{
    uint64_t u;
    struct cavm_dmapx_abx_jdx_cfg4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_60_63        : 4;
        uint64_t c_real_m2             : 12; /**< [ 59: 48](R/W) Real part of C[-2], signed. */
        uint64_t c_imag_m1             : 12; /**< [ 47: 36](R/W) Imaginary part of C[-1], signed. */
        uint64_t c_real_m1             : 12; /**< [ 35: 24](R/W) Real part of C[-1], signed. */
        uint64_t c_imag_m0             : 12; /**< [ 23: 12](R/W) Imaginary part of C[0], signed. */
        uint64_t c_real_m0             : 12; /**< [ 11:  0](R/W) Real part of C[0], signed. */
#else /* Word 0 - Little Endian */
        uint64_t c_real_m0             : 12; /**< [ 11:  0](R/W) Real part of C[0], signed. */
        uint64_t c_imag_m0             : 12; /**< [ 23: 12](R/W) Imaginary part of C[0], signed. */
        uint64_t c_real_m1             : 12; /**< [ 35: 24](R/W) Real part of C[-1], signed. */
        uint64_t c_imag_m1             : 12; /**< [ 47: 36](R/W) Imaginary part of C[-1], signed. */
        uint64_t c_real_m2             : 12; /**< [ 59: 48](R/W) Real part of C[-2], signed. */
        uint64_t reserved_60_63        : 4;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dmapx_abx_jdx_cfg4_s cn; */
};
typedef union cavm_dmapx_abx_jdx_cfg4 cavm_dmapx_abx_jdx_cfg4_t;

static inline uint64_t CAVM_DMAPX_ABX_JDX_CFG4(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DMAPX_ABX_JDX_CFG4(uint64_t a, uint64_t b, uint64_t c)
{
    if ((a<=2) && (b<=1) && (c<=3))
        return 0x87e041202020ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1) + 0x2000ll * ((c) & 0x3);
    __cavm_csr_fatal("DMAPX_ABX_JDX_CFG4", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_DMAPX_ABX_JDX_CFG4(a,b,c) cavm_dmapx_abx_jdx_cfg4_t
#define bustype_CAVM_DMAPX_ABX_JDX_CFG4(a,b,c) CSR_TYPE_RSL
#define basename_CAVM_DMAPX_ABX_JDX_CFG4(a,b,c) "DMAPX_ABX_JDX_CFG4"
#define device_bar_CAVM_DMAPX_ABX_JDX_CFG4(a,b,c) 0x2 /* PF_BAR2 */
#define busnum_CAVM_DMAPX_ABX_JDX_CFG4(a,b,c) (a)
#define arguments_CAVM_DMAPX_ABX_JDX_CFG4(a,b,c) (a),(b),(c),-1

/**
 * Register (RSL) dmap#_ab#_jd#_cfg5
 *
 * DMAP Job Configuration Register 5
 */
union cavm_dmapx_abx_jdx_cfg5
{
    uint64_t u;
    struct cavm_dmapx_abx_jdx_cfg5_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_60_63        : 4;
        uint64_t c_imag_p1             : 12; /**< [ 59: 48](R/W) Imaginary part of C[1], signed. */
        uint64_t c_real_p1             : 12; /**< [ 47: 36](R/W) Real part of C[1], signed. */
        uint64_t c_imag_p2             : 12; /**< [ 35: 24](R/W) Imaginary part of C[2], signed. */
        uint64_t c_real_p2             : 12; /**< [ 23: 12](R/W) Real part of C[2], signed. */
        uint64_t c_imag_p3             : 12; /**< [ 11:  0](R/W) Imaginary part of C[3], signed. */
#else /* Word 0 - Little Endian */
        uint64_t c_imag_p3             : 12; /**< [ 11:  0](R/W) Imaginary part of C[3], signed. */
        uint64_t c_real_p2             : 12; /**< [ 23: 12](R/W) Real part of C[2], signed. */
        uint64_t c_imag_p2             : 12; /**< [ 35: 24](R/W) Imaginary part of C[2], signed. */
        uint64_t c_real_p1             : 12; /**< [ 47: 36](R/W) Real part of C[1], signed. */
        uint64_t c_imag_p1             : 12; /**< [ 59: 48](R/W) Imaginary part of C[1], signed. */
        uint64_t reserved_60_63        : 4;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dmapx_abx_jdx_cfg5_s cn; */
};
typedef union cavm_dmapx_abx_jdx_cfg5 cavm_dmapx_abx_jdx_cfg5_t;

static inline uint64_t CAVM_DMAPX_ABX_JDX_CFG5(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DMAPX_ABX_JDX_CFG5(uint64_t a, uint64_t b, uint64_t c)
{
    if ((a<=2) && (b<=1) && (c<=3))
        return 0x87e041202028ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1) + 0x2000ll * ((c) & 0x3);
    __cavm_csr_fatal("DMAPX_ABX_JDX_CFG5", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_DMAPX_ABX_JDX_CFG5(a,b,c) cavm_dmapx_abx_jdx_cfg5_t
#define bustype_CAVM_DMAPX_ABX_JDX_CFG5(a,b,c) CSR_TYPE_RSL
#define basename_CAVM_DMAPX_ABX_JDX_CFG5(a,b,c) "DMAPX_ABX_JDX_CFG5"
#define device_bar_CAVM_DMAPX_ABX_JDX_CFG5(a,b,c) 0x2 /* PF_BAR2 */
#define busnum_CAVM_DMAPX_ABX_JDX_CFG5(a,b,c) (a)
#define arguments_CAVM_DMAPX_ABX_JDX_CFG5(a,b,c) (a),(b),(c),-1

/**
 * Register (RSL) dmap#_ab#_jd#_cfg6
 *
 * DMAP Job Configuration Register 6
 */
union cavm_dmapx_abx_jdx_cfg6
{
    uint64_t u;
    struct cavm_dmapx_abx_jdx_cfg6_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_60_63        : 4;
        uint64_t c_real_p3             : 12; /**< [ 59: 48](R/W) Real part of C[3], signed. */
        uint64_t c_imag_p4             : 12; /**< [ 47: 36](R/W) Imaginary part of C[4], signed. */
        uint64_t c_real_p4             : 12; /**< [ 35: 24](R/W) Real part of C[4], signed. */
        uint64_t c_imag_p5             : 12; /**< [ 23: 12](R/W) Imaginary part of C[5], signed. */
        uint64_t c_real_p5             : 12; /**< [ 11:  0](R/W) Real part of C[5], signed. */
#else /* Word 0 - Little Endian */
        uint64_t c_real_p5             : 12; /**< [ 11:  0](R/W) Real part of C[5], signed. */
        uint64_t c_imag_p5             : 12; /**< [ 23: 12](R/W) Imaginary part of C[5], signed. */
        uint64_t c_real_p4             : 12; /**< [ 35: 24](R/W) Real part of C[4], signed. */
        uint64_t c_imag_p4             : 12; /**< [ 47: 36](R/W) Imaginary part of C[4], signed. */
        uint64_t c_real_p3             : 12; /**< [ 59: 48](R/W) Real part of C[3], signed. */
        uint64_t reserved_60_63        : 4;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dmapx_abx_jdx_cfg6_s cn; */
};
typedef union cavm_dmapx_abx_jdx_cfg6 cavm_dmapx_abx_jdx_cfg6_t;

static inline uint64_t CAVM_DMAPX_ABX_JDX_CFG6(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DMAPX_ABX_JDX_CFG6(uint64_t a, uint64_t b, uint64_t c)
{
    if ((a<=2) && (b<=1) && (c<=3))
        return 0x87e041202030ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1) + 0x2000ll * ((c) & 0x3);
    __cavm_csr_fatal("DMAPX_ABX_JDX_CFG6", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_DMAPX_ABX_JDX_CFG6(a,b,c) cavm_dmapx_abx_jdx_cfg6_t
#define bustype_CAVM_DMAPX_ABX_JDX_CFG6(a,b,c) CSR_TYPE_RSL
#define basename_CAVM_DMAPX_ABX_JDX_CFG6(a,b,c) "DMAPX_ABX_JDX_CFG6"
#define device_bar_CAVM_DMAPX_ABX_JDX_CFG6(a,b,c) 0x2 /* PF_BAR2 */
#define busnum_CAVM_DMAPX_ABX_JDX_CFG6(a,b,c) (a)
#define arguments_CAVM_DMAPX_ABX_JDX_CFG6(a,b,c) (a),(b),(c),-1

/**
 * Register (RSL) dmap#_ab#_jd#_du_cfg8
 *
 * DMAP DU Configuration Register 8
 */
union cavm_dmapx_abx_jdx_du_cfg8
{
    uint64_t u;
    struct cavm_dmapx_abx_jdx_du_cfg8_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t beta_rhh_ec_ru0       : 8;  /**< [ 63: 56](R/W) configured exponent for Beta or Rhh input from RU 0
                                                                 signed 8 bits [-16, 15]
                                                                 Option 7-2: beta
                                                                 Option 7-3: Rhh */
        uint64_t data_ec_ru0           : 8;  /**< [ 55: 48](R/W) configured exponent for FDE input from RU 0
                                                                 signed 8 bits [-16, 15] */
        uint64_t beta_rhh_ec_ru1       : 8;  /**< [ 47: 40](R/W) configured exponent for Beta or Rhh input from RU 1
                                                                 signed 8 bits [-16, 15]
                                                                 Option 7-2: beta
                                                                 Option 7-3: Rhh */
        uint64_t data_ec_ru1           : 8;  /**< [ 39: 32](R/W) configured exponent for FDE input from RU 1
                                                                 signed 8 bits [-16, 15] */
        uint64_t beta_rhh_ec_ru2       : 8;  /**< [ 31: 24](R/W) configured exponent for Beta or Rhh input from RU 2
                                                                 signed 8 bits [-16, 15]
                                                                 Option 7-2: beta
                                                                 Option 7-3: Rhh */
        uint64_t data_ec_ru2           : 8;  /**< [ 23: 16](R/W) configured exponent for FDE input from RU 2
                                                                 signed 8 bits [-16, 15] */
        uint64_t beta_rhh_ec_ru3       : 8;  /**< [ 15:  8](R/W) configured exponent for Beta or Rhh input from RU 3
                                                                 signed 8 bits [-16, 15]
                                                                 Option 7-2: beta
                                                                 Option 7-3: Rhh */
        uint64_t data_ec_ru3           : 8;  /**< [  7:  0](R/W) configured exponent for FDE input from RU 3
                                                                 signed 8 bits [-16, 15] */
#else /* Word 0 - Little Endian */
        uint64_t data_ec_ru3           : 8;  /**< [  7:  0](R/W) configured exponent for FDE input from RU 3
                                                                 signed 8 bits [-16, 15] */
        uint64_t beta_rhh_ec_ru3       : 8;  /**< [ 15:  8](R/W) configured exponent for Beta or Rhh input from RU 3
                                                                 signed 8 bits [-16, 15]
                                                                 Option 7-2: beta
                                                                 Option 7-3: Rhh */
        uint64_t data_ec_ru2           : 8;  /**< [ 23: 16](R/W) configured exponent for FDE input from RU 2
                                                                 signed 8 bits [-16, 15] */
        uint64_t beta_rhh_ec_ru2       : 8;  /**< [ 31: 24](R/W) configured exponent for Beta or Rhh input from RU 2
                                                                 signed 8 bits [-16, 15]
                                                                 Option 7-2: beta
                                                                 Option 7-3: Rhh */
        uint64_t data_ec_ru1           : 8;  /**< [ 39: 32](R/W) configured exponent for FDE input from RU 1
                                                                 signed 8 bits [-16, 15] */
        uint64_t beta_rhh_ec_ru1       : 8;  /**< [ 47: 40](R/W) configured exponent for Beta or Rhh input from RU 1
                                                                 signed 8 bits [-16, 15]
                                                                 Option 7-2: beta
                                                                 Option 7-3: Rhh */
        uint64_t data_ec_ru0           : 8;  /**< [ 55: 48](R/W) configured exponent for FDE input from RU 0
                                                                 signed 8 bits [-16, 15] */
        uint64_t beta_rhh_ec_ru0       : 8;  /**< [ 63: 56](R/W) configured exponent for Beta or Rhh input from RU 0
                                                                 signed 8 bits [-16, 15]
                                                                 Option 7-2: beta
                                                                 Option 7-3: Rhh */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dmapx_abx_jdx_du_cfg8_s cn; */
};
typedef union cavm_dmapx_abx_jdx_du_cfg8 cavm_dmapx_abx_jdx_du_cfg8_t;

static inline uint64_t CAVM_DMAPX_ABX_JDX_DU_CFG8(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DMAPX_ABX_JDX_DU_CFG8(uint64_t a, uint64_t b, uint64_t c)
{
    if ((a<=2) && (b<=1) && (c<=3))
        return 0x87e041202078ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1) + 0x2000ll * ((c) & 0x3);
    __cavm_csr_fatal("DMAPX_ABX_JDX_DU_CFG8", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_DMAPX_ABX_JDX_DU_CFG8(a,b,c) cavm_dmapx_abx_jdx_du_cfg8_t
#define bustype_CAVM_DMAPX_ABX_JDX_DU_CFG8(a,b,c) CSR_TYPE_RSL
#define basename_CAVM_DMAPX_ABX_JDX_DU_CFG8(a,b,c) "DMAPX_ABX_JDX_DU_CFG8"
#define device_bar_CAVM_DMAPX_ABX_JDX_DU_CFG8(a,b,c) 0x2 /* PF_BAR2 */
#define busnum_CAVM_DMAPX_ABX_JDX_DU_CFG8(a,b,c) (a)
#define arguments_CAVM_DMAPX_ABX_JDX_DU_CFG8(a,b,c) (a),(b),(c),-1

#endif /* __CAVM_CSRS_DMAPN_H__ */
