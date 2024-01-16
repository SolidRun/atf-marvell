#ifndef __CAVM_CSRS_BBXF_H__
#define __CAVM_CSRS_BBXF_H__
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
 * BBXF.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Register (RSL) bbxf_ab#_config_0
 *
 * BBX6 Configuration Register 0
 * Job Configuration
 */
union cavm_bbxf_abx_config_0
{
    uint64_t u;
    struct cavm_bbxf_abx_config_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig14          : 31; /**< [ 63: 33](RO) SS_Reserved */
        uint64_t ss_res_sig15          : 17; /**< [ 32: 16](R/W) -- */
        uint64_t ss_res_sig16          : 12; /**< [ 15:  4](RO) SS_Reserved */
        uint64_t ss_res_sig17          : 4;  /**< [  3:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig17          : 4;  /**< [  3:  0](R/W) -- */
        uint64_t ss_res_sig16          : 12; /**< [ 15:  4](RO) SS_Reserved */
        uint64_t ss_res_sig15          : 17; /**< [ 32: 16](R/W) -- */
        uint64_t ss_res_sig14          : 31; /**< [ 63: 33](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_0_s cn; */
};
typedef union cavm_bbxf_abx_config_0 cavm_bbxf_abx_config_0_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_0(uint64_t a)
{
    if (a<=3)
        return 0x87e042382000ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_0(a) cavm_bbxf_abx_config_0_t
#define bustype_CAVM_BBXF_ABX_CONFIG_0(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_0(a) "BBXF_ABX_CONFIG_0"
#define busnum_CAVM_BBXF_ABX_CONFIG_0(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_0(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_1
 *
 * BBX6 Configuration Register 1
 * Job Configuration
 */
union cavm_bbxf_abx_config_1
{
    uint64_t u;
    struct cavm_bbxf_abx_config_1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig18          : 4;  /**< [ 63: 60](R/W) -- */
        uint64_t ss_res_sig19          : 1;  /**< [ 59: 59](RO) SS_Reserved */
        uint64_t ss_res_sig20          : 7;  /**< [ 58: 52](R/W) -- */
        uint64_t ss_res_sig21          : 4;  /**< [ 51: 48](RO) SS_Reserved */
        uint64_t ss_res_sig22          : 36; /**< [ 47: 12](R/W) -- */
        uint64_t ss_res_sig23          : 1;  /**< [ 11: 11](RO) SS_Reserved */
        uint64_t ss_res_sig24          : 3;  /**< [ 10:  8](R/W) -- */
        uint64_t ss_res_sig25          : 1;  /**< [  7:  7](RO) SS_Reserved */
        uint64_t ss_res_sig26          : 3;  /**< [  6:  4](R/W) -- */
        uint64_t ss_res_sig27          : 1;  /**< [  3:  3](RO) SS_Reserved */
        uint64_t ss_res_sig28          : 3;  /**< [  2:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig28          : 3;  /**< [  2:  0](R/W) -- */
        uint64_t ss_res_sig27          : 1;  /**< [  3:  3](RO) SS_Reserved */
        uint64_t ss_res_sig26          : 3;  /**< [  6:  4](R/W) -- */
        uint64_t ss_res_sig25          : 1;  /**< [  7:  7](RO) SS_Reserved */
        uint64_t ss_res_sig24          : 3;  /**< [ 10:  8](R/W) -- */
        uint64_t ss_res_sig23          : 1;  /**< [ 11: 11](RO) SS_Reserved */
        uint64_t ss_res_sig22          : 36; /**< [ 47: 12](R/W) -- */
        uint64_t ss_res_sig21          : 4;  /**< [ 51: 48](RO) SS_Reserved */
        uint64_t ss_res_sig20          : 7;  /**< [ 58: 52](R/W) -- */
        uint64_t ss_res_sig19          : 1;  /**< [ 59: 59](RO) SS_Reserved */
        uint64_t ss_res_sig18          : 4;  /**< [ 63: 60](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_1_s cn; */
};
typedef union cavm_bbxf_abx_config_1 cavm_bbxf_abx_config_1_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_1(uint64_t a)
{
    if (a<=3)
        return 0x87e042382008ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_1(a) cavm_bbxf_abx_config_1_t
#define bustype_CAVM_BBXF_ABX_CONFIG_1(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_1(a) "BBXF_ABX_CONFIG_1"
#define busnum_CAVM_BBXF_ABX_CONFIG_1(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_1(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_10
 *
 * BBX6 Configuration Register 10
 * Job Configuration
 */
union cavm_bbxf_abx_config_10
{
    uint64_t u;
    struct cavm_bbxf_abx_config_10_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig54          : 8;  /**< [ 63: 56](RO) SS_Reserved */
        uint64_t ss_res_sig55          : 16; /**< [ 55: 40](R/W) -- */
        uint64_t ss_res_sig56          : 1;  /**< [ 39: 39](RO) SS_Reserved */
        uint64_t ss_res_sig57          : 3;  /**< [ 38: 36](R/W) -- */
        uint64_t ss_res_sig58          : 1;  /**< [ 35: 35](RO) SS_Reserved */
        uint64_t ss_res_sig59          : 35; /**< [ 34:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig59          : 35; /**< [ 34:  0](R/W) -- */
        uint64_t ss_res_sig58          : 1;  /**< [ 35: 35](RO) SS_Reserved */
        uint64_t ss_res_sig57          : 3;  /**< [ 38: 36](R/W) -- */
        uint64_t ss_res_sig56          : 1;  /**< [ 39: 39](RO) SS_Reserved */
        uint64_t ss_res_sig55          : 16; /**< [ 55: 40](R/W) -- */
        uint64_t ss_res_sig54          : 8;  /**< [ 63: 56](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_10_s cn; */
};
typedef union cavm_bbxf_abx_config_10 cavm_bbxf_abx_config_10_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_10(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_10(uint64_t a)
{
    if (a<=3)
        return 0x87e042382050ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_10", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_10(a) cavm_bbxf_abx_config_10_t
#define bustype_CAVM_BBXF_ABX_CONFIG_10(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_10(a) "BBXF_ABX_CONFIG_10"
#define busnum_CAVM_BBXF_ABX_CONFIG_10(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_10(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_11
 *
 * BBX6 Configuration Register 11
 * Job Configuration
 */
union cavm_bbxf_abx_config_11
{
    uint64_t u;
    struct cavm_bbxf_abx_config_11_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig60          : 8;  /**< [ 63: 56](RO) SS_Reserved */
        uint64_t ss_res_sig61          : 56; /**< [ 55:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig61          : 56; /**< [ 55:  0](R/W) -- */
        uint64_t ss_res_sig60          : 8;  /**< [ 63: 56](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_11_s cn; */
};
typedef union cavm_bbxf_abx_config_11 cavm_bbxf_abx_config_11_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_11(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_11(uint64_t a)
{
    if (a<=3)
        return 0x87e042382058ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_11", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_11(a) cavm_bbxf_abx_config_11_t
#define bustype_CAVM_BBXF_ABX_CONFIG_11(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_11(a) "BBXF_ABX_CONFIG_11"
#define busnum_CAVM_BBXF_ABX_CONFIG_11(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_11(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_12
 *
 * BBX6 Configuration Register 12
 * Job Configuration
 */
union cavm_bbxf_abx_config_12
{
    uint64_t u;
    struct cavm_bbxf_abx_config_12_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig62          : 4;  /**< [ 63: 60](RO) SS_Reserved */
        uint64_t ss_res_sig63          : 12; /**< [ 59: 48](R/W) -- */
        uint64_t ss_res_sig64          : 4;  /**< [ 47: 44](RO) SS_Reserved */
        uint64_t ss_res_sig65          : 12; /**< [ 43: 32](R/W) -- */
        uint64_t ss_res_sig66          : 4;  /**< [ 31: 28](RO) SS_Reserved */
        uint64_t ss_res_sig67          : 12; /**< [ 27: 16](R/W) -- */
        uint64_t ss_res_sig68          : 4;  /**< [ 15: 12](RO) SS_Reserved */
        uint64_t ss_res_sig69          : 12; /**< [ 11:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig69          : 12; /**< [ 11:  0](R/W) -- */
        uint64_t ss_res_sig68          : 4;  /**< [ 15: 12](RO) SS_Reserved */
        uint64_t ss_res_sig67          : 12; /**< [ 27: 16](R/W) -- */
        uint64_t ss_res_sig66          : 4;  /**< [ 31: 28](RO) SS_Reserved */
        uint64_t ss_res_sig65          : 12; /**< [ 43: 32](R/W) -- */
        uint64_t ss_res_sig64          : 4;  /**< [ 47: 44](RO) SS_Reserved */
        uint64_t ss_res_sig63          : 12; /**< [ 59: 48](R/W) -- */
        uint64_t ss_res_sig62          : 4;  /**< [ 63: 60](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_12_s cn; */
};
typedef union cavm_bbxf_abx_config_12 cavm_bbxf_abx_config_12_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_12(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_12(uint64_t a)
{
    if (a<=3)
        return 0x87e042382060ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_12", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_12(a) cavm_bbxf_abx_config_12_t
#define bustype_CAVM_BBXF_ABX_CONFIG_12(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_12(a) "BBXF_ABX_CONFIG_12"
#define busnum_CAVM_BBXF_ABX_CONFIG_12(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_12(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_13
 *
 * BBX6 Configuration Register 13
 * Job Configuration
 */
union cavm_bbxf_abx_config_13
{
    uint64_t u;
    struct cavm_bbxf_abx_config_13_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig70          : 4;  /**< [ 63: 60](RO) SS_Reserved */
        uint64_t ss_res_sig71          : 12; /**< [ 59: 48](R/W) -- */
        uint64_t ss_res_sig72          : 4;  /**< [ 47: 44](RO) SS_Reserved */
        uint64_t ss_res_sig73          : 12; /**< [ 43: 32](R/W) -- */
        uint64_t ss_res_sig74          : 4;  /**< [ 31: 28](RO) SS_Reserved */
        uint64_t ss_res_sig75          : 12; /**< [ 27: 16](R/W) -- */
        uint64_t ss_res_sig76          : 4;  /**< [ 15: 12](RO) SS_Reserved */
        uint64_t ss_res_sig77          : 12; /**< [ 11:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig77          : 12; /**< [ 11:  0](R/W) -- */
        uint64_t ss_res_sig76          : 4;  /**< [ 15: 12](RO) SS_Reserved */
        uint64_t ss_res_sig75          : 12; /**< [ 27: 16](R/W) -- */
        uint64_t ss_res_sig74          : 4;  /**< [ 31: 28](RO) SS_Reserved */
        uint64_t ss_res_sig73          : 12; /**< [ 43: 32](R/W) -- */
        uint64_t ss_res_sig72          : 4;  /**< [ 47: 44](RO) SS_Reserved */
        uint64_t ss_res_sig71          : 12; /**< [ 59: 48](R/W) -- */
        uint64_t ss_res_sig70          : 4;  /**< [ 63: 60](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_13_s cn; */
};
typedef union cavm_bbxf_abx_config_13 cavm_bbxf_abx_config_13_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_13(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_13(uint64_t a)
{
    if (a<=3)
        return 0x87e042382068ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_13", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_13(a) cavm_bbxf_abx_config_13_t
#define bustype_CAVM_BBXF_ABX_CONFIG_13(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_13(a) "BBXF_ABX_CONFIG_13"
#define busnum_CAVM_BBXF_ABX_CONFIG_13(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_13(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_14
 *
 * BBX6 Configuration Register 14
 * Job Configuration
 */
union cavm_bbxf_abx_config_14
{
    uint64_t u;
    struct cavm_bbxf_abx_config_14_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig78          : 4;  /**< [ 63: 60](RO) SS_Reserved */
        uint64_t ss_res_sig79          : 12; /**< [ 59: 48](R/W) -- */
        uint64_t ss_res_sig80          : 4;  /**< [ 47: 44](RO) SS_Reserved */
        uint64_t ss_res_sig81          : 12; /**< [ 43: 32](R/W) -- */
        uint64_t ss_res_sig82          : 4;  /**< [ 31: 28](RO) SS_Reserved */
        uint64_t ss_res_sig83          : 12; /**< [ 27: 16](R/W) -- */
        uint64_t ss_res_sig84          : 4;  /**< [ 15: 12](RO) SS_Reserved */
        uint64_t ss_res_sig85          : 12; /**< [ 11:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig85          : 12; /**< [ 11:  0](R/W) -- */
        uint64_t ss_res_sig84          : 4;  /**< [ 15: 12](RO) SS_Reserved */
        uint64_t ss_res_sig83          : 12; /**< [ 27: 16](R/W) -- */
        uint64_t ss_res_sig82          : 4;  /**< [ 31: 28](RO) SS_Reserved */
        uint64_t ss_res_sig81          : 12; /**< [ 43: 32](R/W) -- */
        uint64_t ss_res_sig80          : 4;  /**< [ 47: 44](RO) SS_Reserved */
        uint64_t ss_res_sig79          : 12; /**< [ 59: 48](R/W) -- */
        uint64_t ss_res_sig78          : 4;  /**< [ 63: 60](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_14_s cn; */
};
typedef union cavm_bbxf_abx_config_14 cavm_bbxf_abx_config_14_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_14(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_14(uint64_t a)
{
    if (a<=3)
        return 0x87e042382070ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_14", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_14(a) cavm_bbxf_abx_config_14_t
#define bustype_CAVM_BBXF_ABX_CONFIG_14(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_14(a) "BBXF_ABX_CONFIG_14"
#define busnum_CAVM_BBXF_ABX_CONFIG_14(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_14(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_15
 *
 * BBX6 Configuration Register 15
 * Job Configuration
 */
union cavm_bbxf_abx_config_15
{
    uint64_t u;
    struct cavm_bbxf_abx_config_15_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig86          : 4;  /**< [ 63: 60](RO) SS_Reserved */
        uint64_t ss_res_sig87          : 12; /**< [ 59: 48](R/W) -- */
        uint64_t ss_res_sig88          : 4;  /**< [ 47: 44](RO) SS_Reserved */
        uint64_t ss_res_sig89          : 12; /**< [ 43: 32](R/W) -- */
        uint64_t ss_res_sig90          : 4;  /**< [ 31: 28](RO) SS_Reserved */
        uint64_t ss_res_sig91          : 12; /**< [ 27: 16](R/W) -- */
        uint64_t ss_res_sig92          : 4;  /**< [ 15: 12](RO) SS_Reserved */
        uint64_t ss_res_sig93          : 12; /**< [ 11:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig93          : 12; /**< [ 11:  0](R/W) -- */
        uint64_t ss_res_sig92          : 4;  /**< [ 15: 12](RO) SS_Reserved */
        uint64_t ss_res_sig91          : 12; /**< [ 27: 16](R/W) -- */
        uint64_t ss_res_sig90          : 4;  /**< [ 31: 28](RO) SS_Reserved */
        uint64_t ss_res_sig89          : 12; /**< [ 43: 32](R/W) -- */
        uint64_t ss_res_sig88          : 4;  /**< [ 47: 44](RO) SS_Reserved */
        uint64_t ss_res_sig87          : 12; /**< [ 59: 48](R/W) -- */
        uint64_t ss_res_sig86          : 4;  /**< [ 63: 60](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_15_s cn; */
};
typedef union cavm_bbxf_abx_config_15 cavm_bbxf_abx_config_15_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_15(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_15(uint64_t a)
{
    if (a<=3)
        return 0x87e042382078ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_15", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_15(a) cavm_bbxf_abx_config_15_t
#define bustype_CAVM_BBXF_ABX_CONFIG_15(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_15(a) "BBXF_ABX_CONFIG_15"
#define busnum_CAVM_BBXF_ABX_CONFIG_15(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_15(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_16
 *
 * BBX6 Configuration Register 16
 * Job Configuration
 */
union cavm_bbxf_abx_config_16
{
    uint64_t u;
    struct cavm_bbxf_abx_config_16_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig94          : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig94          : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_16_s cn; */
};
typedef union cavm_bbxf_abx_config_16 cavm_bbxf_abx_config_16_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_16(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_16(uint64_t a)
{
    if (a<=3)
        return 0x87e042382080ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_16", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_16(a) cavm_bbxf_abx_config_16_t
#define bustype_CAVM_BBXF_ABX_CONFIG_16(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_16(a) "BBXF_ABX_CONFIG_16"
#define busnum_CAVM_BBXF_ABX_CONFIG_16(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_16(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_17
 *
 * BBX6 Configuration Register 17
 * Job Configuration
 */
union cavm_bbxf_abx_config_17
{
    uint64_t u;
    struct cavm_bbxf_abx_config_17_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig95          : 11; /**< [ 63: 53](RO) SS_Reserved */
        uint64_t ss_res_sig96          : 1;  /**< [ 52: 52](R/W) -- */
        uint64_t ss_res_sig97          : 3;  /**< [ 51: 49](RO) SS_Reserved */
        uint64_t ss_res_sig98          : 49; /**< [ 48:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig98          : 49; /**< [ 48:  0](R/W) -- */
        uint64_t ss_res_sig97          : 3;  /**< [ 51: 49](RO) SS_Reserved */
        uint64_t ss_res_sig96          : 1;  /**< [ 52: 52](R/W) -- */
        uint64_t ss_res_sig95          : 11; /**< [ 63: 53](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_17_s cn; */
};
typedef union cavm_bbxf_abx_config_17 cavm_bbxf_abx_config_17_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_17(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_17(uint64_t a)
{
    if (a<=3)
        return 0x87e042382088ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_17", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_17(a) cavm_bbxf_abx_config_17_t
#define bustype_CAVM_BBXF_ABX_CONFIG_17(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_17(a) "BBXF_ABX_CONFIG_17"
#define busnum_CAVM_BBXF_ABX_CONFIG_17(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_17(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_18
 *
 * BBX6 Configuration Register 18
 * Job Configuration
 */
union cavm_bbxf_abx_config_18
{
    uint64_t u;
    struct cavm_bbxf_abx_config_18_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig99          : 2;  /**< [ 63: 62](RO) SS_Reserved */
        uint64_t ss_res_sig100         : 2;  /**< [ 61: 60](R/W) -- */
        uint64_t ss_res_sig101         : 1;  /**< [ 59: 59](RO) SS_Reserved */
        uint64_t ss_res_sig102         : 11; /**< [ 58: 48](R/W) -- */
        uint64_t ss_res_sig103         : 5;  /**< [ 47: 43](RO) SS_Reserved */
        uint64_t ss_res_sig104         : 43; /**< [ 42:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig104         : 43; /**< [ 42:  0](R/W) -- */
        uint64_t ss_res_sig103         : 5;  /**< [ 47: 43](RO) SS_Reserved */
        uint64_t ss_res_sig102         : 11; /**< [ 58: 48](R/W) -- */
        uint64_t ss_res_sig101         : 1;  /**< [ 59: 59](RO) SS_Reserved */
        uint64_t ss_res_sig100         : 2;  /**< [ 61: 60](R/W) -- */
        uint64_t ss_res_sig99          : 2;  /**< [ 63: 62](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_18_s cn; */
};
typedef union cavm_bbxf_abx_config_18 cavm_bbxf_abx_config_18_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_18(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_18(uint64_t a)
{
    if (a<=3)
        return 0x87e042382090ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_18", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_18(a) cavm_bbxf_abx_config_18_t
#define bustype_CAVM_BBXF_ABX_CONFIG_18(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_18(a) "BBXF_ABX_CONFIG_18"
#define busnum_CAVM_BBXF_ABX_CONFIG_18(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_18(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_19
 *
 * BBX6 Configuration Register 19
 * Job Configuration
 */
union cavm_bbxf_abx_config_19
{
    uint64_t u;
    struct cavm_bbxf_abx_config_19_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig105         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig105         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_19_s cn; */
};
typedef union cavm_bbxf_abx_config_19 cavm_bbxf_abx_config_19_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_19(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_19(uint64_t a)
{
    if (a<=3)
        return 0x87e042382098ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_19", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_19(a) cavm_bbxf_abx_config_19_t
#define bustype_CAVM_BBXF_ABX_CONFIG_19(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_19(a) "BBXF_ABX_CONFIG_19"
#define busnum_CAVM_BBXF_ABX_CONFIG_19(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_19(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_2
 *
 * BBX6 Configuration Register 2
 * Job Configuration
 */
union cavm_bbxf_abx_config_2
{
    uint64_t u;
    struct cavm_bbxf_abx_config_2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig29          : 8;  /**< [ 63: 56](RO) SS_Reserved */
        uint64_t ss_res_sig30          : 56; /**< [ 55:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig30          : 56; /**< [ 55:  0](R/W) -- */
        uint64_t ss_res_sig29          : 8;  /**< [ 63: 56](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_2_s cn; */
};
typedef union cavm_bbxf_abx_config_2 cavm_bbxf_abx_config_2_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_2(uint64_t a)
{
    if (a<=3)
        return 0x87e042382010ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_2(a) cavm_bbxf_abx_config_2_t
#define bustype_CAVM_BBXF_ABX_CONFIG_2(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_2(a) "BBXF_ABX_CONFIG_2"
#define busnum_CAVM_BBXF_ABX_CONFIG_2(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_2(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_20
 *
 * BBX6 Configuration Register 20
 * Job Configuration
 */
union cavm_bbxf_abx_config_20
{
    uint64_t u;
    struct cavm_bbxf_abx_config_20_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig106         : 36; /**< [ 63: 28](RO) SS_Reserved */
        uint64_t ss_res_sig107         : 28; /**< [ 27:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig107         : 28; /**< [ 27:  0](R/W) -- */
        uint64_t ss_res_sig106         : 36; /**< [ 63: 28](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_20_s cn; */
};
typedef union cavm_bbxf_abx_config_20 cavm_bbxf_abx_config_20_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_20(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_20(uint64_t a)
{
    if (a<=3)
        return 0x87e0423820a0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_20", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_20(a) cavm_bbxf_abx_config_20_t
#define bustype_CAVM_BBXF_ABX_CONFIG_20(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_20(a) "BBXF_ABX_CONFIG_20"
#define busnum_CAVM_BBXF_ABX_CONFIG_20(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_20(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_21
 *
 * BBX6 Configuration Register 21
 * Job Configuration
 */
union cavm_bbxf_abx_config_21
{
    uint64_t u;
    struct cavm_bbxf_abx_config_21_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig108         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig108         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_21_s cn; */
};
typedef union cavm_bbxf_abx_config_21 cavm_bbxf_abx_config_21_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_21(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_21(uint64_t a)
{
    if (a<=3)
        return 0x87e0423820a8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_21", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_21(a) cavm_bbxf_abx_config_21_t
#define bustype_CAVM_BBXF_ABX_CONFIG_21(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_21(a) "BBXF_ABX_CONFIG_21"
#define busnum_CAVM_BBXF_ABX_CONFIG_21(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_21(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_22
 *
 * BBX6 Configuration Register 22
 * Job Configuration
 */
union cavm_bbxf_abx_config_22
{
    uint64_t u;
    struct cavm_bbxf_abx_config_22_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig109         : 8;  /**< [ 63: 56](RO) SS_Reserved */
        uint64_t ss_res_sig110         : 16; /**< [ 55: 40](R/W) -- */
        uint64_t ss_res_sig111         : 1;  /**< [ 39: 39](RO) SS_Reserved */
        uint64_t ss_res_sig112         : 3;  /**< [ 38: 36](R/W) -- */
        uint64_t ss_res_sig113         : 1;  /**< [ 35: 35](RO) SS_Reserved */
        uint64_t ss_res_sig114         : 35; /**< [ 34:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig114         : 35; /**< [ 34:  0](R/W) -- */
        uint64_t ss_res_sig113         : 1;  /**< [ 35: 35](RO) SS_Reserved */
        uint64_t ss_res_sig112         : 3;  /**< [ 38: 36](R/W) -- */
        uint64_t ss_res_sig111         : 1;  /**< [ 39: 39](RO) SS_Reserved */
        uint64_t ss_res_sig110         : 16; /**< [ 55: 40](R/W) -- */
        uint64_t ss_res_sig109         : 8;  /**< [ 63: 56](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_22_s cn; */
};
typedef union cavm_bbxf_abx_config_22 cavm_bbxf_abx_config_22_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_22(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_22(uint64_t a)
{
    if (a<=3)
        return 0x87e0423820b0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_22", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_22(a) cavm_bbxf_abx_config_22_t
#define bustype_CAVM_BBXF_ABX_CONFIG_22(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_22(a) "BBXF_ABX_CONFIG_22"
#define busnum_CAVM_BBXF_ABX_CONFIG_22(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_22(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_23
 *
 * BBX6 Configuration Register 23
 * Job Configuration
 */
union cavm_bbxf_abx_config_23
{
    uint64_t u;
    struct cavm_bbxf_abx_config_23_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig115         : 8;  /**< [ 63: 56](RO) SS_Reserved */
        uint64_t ss_res_sig116         : 56; /**< [ 55:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig116         : 56; /**< [ 55:  0](R/W) -- */
        uint64_t ss_res_sig115         : 8;  /**< [ 63: 56](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_23_s cn; */
};
typedef union cavm_bbxf_abx_config_23 cavm_bbxf_abx_config_23_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_23(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_23(uint64_t a)
{
    if (a<=3)
        return 0x87e0423820b8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_23", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_23(a) cavm_bbxf_abx_config_23_t
#define bustype_CAVM_BBXF_ABX_CONFIG_23(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_23(a) "BBXF_ABX_CONFIG_23"
#define busnum_CAVM_BBXF_ABX_CONFIG_23(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_23(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_24
 *
 * BBX6 Configuration Register 24
 * Job Configuration
 */
union cavm_bbxf_abx_config_24
{
    uint64_t u;
    struct cavm_bbxf_abx_config_24_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig117         : 4;  /**< [ 63: 60](RO) SS_Reserved */
        uint64_t ss_res_sig118         : 12; /**< [ 59: 48](R/W) -- */
        uint64_t ss_res_sig119         : 4;  /**< [ 47: 44](RO) SS_Reserved */
        uint64_t ss_res_sig120         : 12; /**< [ 43: 32](R/W) -- */
        uint64_t ss_res_sig121         : 4;  /**< [ 31: 28](RO) SS_Reserved */
        uint64_t ss_res_sig122         : 12; /**< [ 27: 16](R/W) -- */
        uint64_t ss_res_sig123         : 4;  /**< [ 15: 12](RO) SS_Reserved */
        uint64_t ss_res_sig124         : 12; /**< [ 11:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig124         : 12; /**< [ 11:  0](R/W) -- */
        uint64_t ss_res_sig123         : 4;  /**< [ 15: 12](RO) SS_Reserved */
        uint64_t ss_res_sig122         : 12; /**< [ 27: 16](R/W) -- */
        uint64_t ss_res_sig121         : 4;  /**< [ 31: 28](RO) SS_Reserved */
        uint64_t ss_res_sig120         : 12; /**< [ 43: 32](R/W) -- */
        uint64_t ss_res_sig119         : 4;  /**< [ 47: 44](RO) SS_Reserved */
        uint64_t ss_res_sig118         : 12; /**< [ 59: 48](R/W) -- */
        uint64_t ss_res_sig117         : 4;  /**< [ 63: 60](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_24_s cn; */
};
typedef union cavm_bbxf_abx_config_24 cavm_bbxf_abx_config_24_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_24(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_24(uint64_t a)
{
    if (a<=3)
        return 0x87e0423820c0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_24", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_24(a) cavm_bbxf_abx_config_24_t
#define bustype_CAVM_BBXF_ABX_CONFIG_24(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_24(a) "BBXF_ABX_CONFIG_24"
#define busnum_CAVM_BBXF_ABX_CONFIG_24(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_24(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_25
 *
 * BBX6 Configuration Register 25
 * Job Configuration
 */
union cavm_bbxf_abx_config_25
{
    uint64_t u;
    struct cavm_bbxf_abx_config_25_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig125         : 4;  /**< [ 63: 60](RO) SS_Reserved */
        uint64_t ss_res_sig126         : 12; /**< [ 59: 48](R/W) -- */
        uint64_t ss_res_sig127         : 4;  /**< [ 47: 44](RO) SS_Reserved */
        uint64_t ss_res_sig128         : 12; /**< [ 43: 32](R/W) -- */
        uint64_t ss_res_sig129         : 4;  /**< [ 31: 28](RO) SS_Reserved */
        uint64_t ss_res_sig130         : 12; /**< [ 27: 16](R/W) -- */
        uint64_t ss_res_sig131         : 4;  /**< [ 15: 12](RO) SS_Reserved */
        uint64_t ss_res_sig132         : 12; /**< [ 11:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig132         : 12; /**< [ 11:  0](R/W) -- */
        uint64_t ss_res_sig131         : 4;  /**< [ 15: 12](RO) SS_Reserved */
        uint64_t ss_res_sig130         : 12; /**< [ 27: 16](R/W) -- */
        uint64_t ss_res_sig129         : 4;  /**< [ 31: 28](RO) SS_Reserved */
        uint64_t ss_res_sig128         : 12; /**< [ 43: 32](R/W) -- */
        uint64_t ss_res_sig127         : 4;  /**< [ 47: 44](RO) SS_Reserved */
        uint64_t ss_res_sig126         : 12; /**< [ 59: 48](R/W) -- */
        uint64_t ss_res_sig125         : 4;  /**< [ 63: 60](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_25_s cn; */
};
typedef union cavm_bbxf_abx_config_25 cavm_bbxf_abx_config_25_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_25(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_25(uint64_t a)
{
    if (a<=3)
        return 0x87e0423820c8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_25", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_25(a) cavm_bbxf_abx_config_25_t
#define bustype_CAVM_BBXF_ABX_CONFIG_25(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_25(a) "BBXF_ABX_CONFIG_25"
#define busnum_CAVM_BBXF_ABX_CONFIG_25(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_25(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_26
 *
 * BBX6 Configuration Register 26
 * Job Configuration
 */
union cavm_bbxf_abx_config_26
{
    uint64_t u;
    struct cavm_bbxf_abx_config_26_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig133         : 4;  /**< [ 63: 60](RO) SS_Reserved */
        uint64_t ss_res_sig134         : 12; /**< [ 59: 48](R/W) -- */
        uint64_t ss_res_sig135         : 4;  /**< [ 47: 44](RO) SS_Reserved */
        uint64_t ss_res_sig136         : 12; /**< [ 43: 32](R/W) -- */
        uint64_t ss_res_sig137         : 4;  /**< [ 31: 28](RO) SS_Reserved */
        uint64_t ss_res_sig138         : 12; /**< [ 27: 16](R/W) -- */
        uint64_t ss_res_sig139         : 4;  /**< [ 15: 12](RO) SS_Reserved */
        uint64_t ss_res_sig140         : 12; /**< [ 11:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig140         : 12; /**< [ 11:  0](R/W) -- */
        uint64_t ss_res_sig139         : 4;  /**< [ 15: 12](RO) SS_Reserved */
        uint64_t ss_res_sig138         : 12; /**< [ 27: 16](R/W) -- */
        uint64_t ss_res_sig137         : 4;  /**< [ 31: 28](RO) SS_Reserved */
        uint64_t ss_res_sig136         : 12; /**< [ 43: 32](R/W) -- */
        uint64_t ss_res_sig135         : 4;  /**< [ 47: 44](RO) SS_Reserved */
        uint64_t ss_res_sig134         : 12; /**< [ 59: 48](R/W) -- */
        uint64_t ss_res_sig133         : 4;  /**< [ 63: 60](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_26_s cn; */
};
typedef union cavm_bbxf_abx_config_26 cavm_bbxf_abx_config_26_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_26(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_26(uint64_t a)
{
    if (a<=3)
        return 0x87e0423820d0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_26", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_26(a) cavm_bbxf_abx_config_26_t
#define bustype_CAVM_BBXF_ABX_CONFIG_26(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_26(a) "BBXF_ABX_CONFIG_26"
#define busnum_CAVM_BBXF_ABX_CONFIG_26(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_26(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_27
 *
 * BBX6 Configuration Register 27
 * Job Configuration
 */
union cavm_bbxf_abx_config_27
{
    uint64_t u;
    struct cavm_bbxf_abx_config_27_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig141         : 4;  /**< [ 63: 60](RO) SS_Reserved */
        uint64_t ss_res_sig142         : 12; /**< [ 59: 48](R/W) -- */
        uint64_t ss_res_sig143         : 4;  /**< [ 47: 44](RO) SS_Reserved */
        uint64_t ss_res_sig144         : 12; /**< [ 43: 32](R/W) -- */
        uint64_t ss_res_sig145         : 4;  /**< [ 31: 28](RO) SS_Reserved */
        uint64_t ss_res_sig146         : 12; /**< [ 27: 16](R/W) -- */
        uint64_t ss_res_sig147         : 4;  /**< [ 15: 12](RO) SS_Reserved */
        uint64_t ss_res_sig148         : 12; /**< [ 11:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig148         : 12; /**< [ 11:  0](R/W) -- */
        uint64_t ss_res_sig147         : 4;  /**< [ 15: 12](RO) SS_Reserved */
        uint64_t ss_res_sig146         : 12; /**< [ 27: 16](R/W) -- */
        uint64_t ss_res_sig145         : 4;  /**< [ 31: 28](RO) SS_Reserved */
        uint64_t ss_res_sig144         : 12; /**< [ 43: 32](R/W) -- */
        uint64_t ss_res_sig143         : 4;  /**< [ 47: 44](RO) SS_Reserved */
        uint64_t ss_res_sig142         : 12; /**< [ 59: 48](R/W) -- */
        uint64_t ss_res_sig141         : 4;  /**< [ 63: 60](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_27_s cn; */
};
typedef union cavm_bbxf_abx_config_27 cavm_bbxf_abx_config_27_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_27(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_27(uint64_t a)
{
    if (a<=3)
        return 0x87e0423820d8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_27", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_27(a) cavm_bbxf_abx_config_27_t
#define bustype_CAVM_BBXF_ABX_CONFIG_27(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_27(a) "BBXF_ABX_CONFIG_27"
#define busnum_CAVM_BBXF_ABX_CONFIG_27(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_27(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_28
 *
 * BBX6 Configuration Register 28
 * Job Configuration
 */
union cavm_bbxf_abx_config_28
{
    uint64_t u;
    struct cavm_bbxf_abx_config_28_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig149         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig149         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_28_s cn; */
};
typedef union cavm_bbxf_abx_config_28 cavm_bbxf_abx_config_28_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_28(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_28(uint64_t a)
{
    if (a<=3)
        return 0x87e0423820e0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_28", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_28(a) cavm_bbxf_abx_config_28_t
#define bustype_CAVM_BBXF_ABX_CONFIG_28(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_28(a) "BBXF_ABX_CONFIG_28"
#define busnum_CAVM_BBXF_ABX_CONFIG_28(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_28(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_29
 *
 * BBX6 Configuration Register 29
 * Job Configuration
 */
union cavm_bbxf_abx_config_29
{
    uint64_t u;
    struct cavm_bbxf_abx_config_29_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig150         : 11; /**< [ 63: 53](RO) SS_Reserved */
        uint64_t ss_res_sig151         : 1;  /**< [ 52: 52](R/W) -- */
        uint64_t ss_res_sig152         : 3;  /**< [ 51: 49](RO) SS_Reserved */
        uint64_t ss_res_sig153         : 49; /**< [ 48:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig153         : 49; /**< [ 48:  0](R/W) -- */
        uint64_t ss_res_sig152         : 3;  /**< [ 51: 49](RO) SS_Reserved */
        uint64_t ss_res_sig151         : 1;  /**< [ 52: 52](R/W) -- */
        uint64_t ss_res_sig150         : 11; /**< [ 63: 53](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_29_s cn; */
};
typedef union cavm_bbxf_abx_config_29 cavm_bbxf_abx_config_29_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_29(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_29(uint64_t a)
{
    if (a<=3)
        return 0x87e0423820e8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_29", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_29(a) cavm_bbxf_abx_config_29_t
#define bustype_CAVM_BBXF_ABX_CONFIG_29(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_29(a) "BBXF_ABX_CONFIG_29"
#define busnum_CAVM_BBXF_ABX_CONFIG_29(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_29(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_3
 *
 * BBX6 Configuration Register 3
 * Job Configuration
 */
union cavm_bbxf_abx_config_3
{
    uint64_t u;
    struct cavm_bbxf_abx_config_3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig31          : 16; /**< [ 63: 48](RO) SS_Reserved */
        uint64_t ss_res_sig32          : 48; /**< [ 47:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig32          : 48; /**< [ 47:  0](R/W) -- */
        uint64_t ss_res_sig31          : 16; /**< [ 63: 48](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_3_s cn; */
};
typedef union cavm_bbxf_abx_config_3 cavm_bbxf_abx_config_3_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_3(uint64_t a)
{
    if (a<=3)
        return 0x87e042382018ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_3(a) cavm_bbxf_abx_config_3_t
#define bustype_CAVM_BBXF_ABX_CONFIG_3(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_3(a) "BBXF_ABX_CONFIG_3"
#define busnum_CAVM_BBXF_ABX_CONFIG_3(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_3(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_30
 *
 * BBX6 Configuration Register 30
 * Job Configuration
 */
union cavm_bbxf_abx_config_30
{
    uint64_t u;
    struct cavm_bbxf_abx_config_30_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig154         : 2;  /**< [ 63: 62](RO) SS_Reserved */
        uint64_t ss_res_sig155         : 2;  /**< [ 61: 60](R/W) -- */
        uint64_t ss_res_sig156         : 1;  /**< [ 59: 59](RO) SS_Reserved */
        uint64_t ss_res_sig157         : 11; /**< [ 58: 48](R/W) -- */
        uint64_t ss_res_sig158         : 5;  /**< [ 47: 43](RO) SS_Reserved */
        uint64_t ss_res_sig159         : 43; /**< [ 42:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig159         : 43; /**< [ 42:  0](R/W) -- */
        uint64_t ss_res_sig158         : 5;  /**< [ 47: 43](RO) SS_Reserved */
        uint64_t ss_res_sig157         : 11; /**< [ 58: 48](R/W) -- */
        uint64_t ss_res_sig156         : 1;  /**< [ 59: 59](RO) SS_Reserved */
        uint64_t ss_res_sig155         : 2;  /**< [ 61: 60](R/W) -- */
        uint64_t ss_res_sig154         : 2;  /**< [ 63: 62](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_30_s cn; */
};
typedef union cavm_bbxf_abx_config_30 cavm_bbxf_abx_config_30_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_30(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_30(uint64_t a)
{
    if (a<=3)
        return 0x87e0423820f0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_30", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_30(a) cavm_bbxf_abx_config_30_t
#define bustype_CAVM_BBXF_ABX_CONFIG_30(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_30(a) "BBXF_ABX_CONFIG_30"
#define busnum_CAVM_BBXF_ABX_CONFIG_30(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_30(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_31
 *
 * BBX6 Configuration Register 31
 * Job Configuration
 */
union cavm_bbxf_abx_config_31
{
    uint64_t u;
    struct cavm_bbxf_abx_config_31_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig160         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig160         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_31_s cn; */
};
typedef union cavm_bbxf_abx_config_31 cavm_bbxf_abx_config_31_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_31(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_31(uint64_t a)
{
    if (a<=3)
        return 0x87e0423820f8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_31", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_31(a) cavm_bbxf_abx_config_31_t
#define bustype_CAVM_BBXF_ABX_CONFIG_31(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_31(a) "BBXF_ABX_CONFIG_31"
#define busnum_CAVM_BBXF_ABX_CONFIG_31(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_31(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_32
 *
 * BBX6 Configuration Register 32
 * Job Configuration
 */
union cavm_bbxf_abx_config_32
{
    uint64_t u;
    struct cavm_bbxf_abx_config_32_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig161         : 36; /**< [ 63: 28](RO) SS_Reserved */
        uint64_t ss_res_sig162         : 28; /**< [ 27:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig162         : 28; /**< [ 27:  0](R/W) -- */
        uint64_t ss_res_sig161         : 36; /**< [ 63: 28](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_32_s cn; */
};
typedef union cavm_bbxf_abx_config_32 cavm_bbxf_abx_config_32_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_32(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_32(uint64_t a)
{
    if (a<=3)
        return 0x87e042382100ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_32", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_32(a) cavm_bbxf_abx_config_32_t
#define bustype_CAVM_BBXF_ABX_CONFIG_32(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_32(a) "BBXF_ABX_CONFIG_32"
#define busnum_CAVM_BBXF_ABX_CONFIG_32(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_32(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_33
 *
 * BBX6 Configuration Register 33
 * Job Configuration
 */
union cavm_bbxf_abx_config_33
{
    uint64_t u;
    struct cavm_bbxf_abx_config_33_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig163         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig163         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_33_s cn; */
};
typedef union cavm_bbxf_abx_config_33 cavm_bbxf_abx_config_33_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_33(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_33(uint64_t a)
{
    if (a<=3)
        return 0x87e042382108ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_33", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_33(a) cavm_bbxf_abx_config_33_t
#define bustype_CAVM_BBXF_ABX_CONFIG_33(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_33(a) "BBXF_ABX_CONFIG_33"
#define busnum_CAVM_BBXF_ABX_CONFIG_33(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_33(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_34
 *
 * BBX6 Configuration Register 34
 * Job Configuration
 */
union cavm_bbxf_abx_config_34
{
    uint64_t u;
    struct cavm_bbxf_abx_config_34_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig164         : 8;  /**< [ 63: 56](RO) SS_Reserved */
        uint64_t ss_res_sig165         : 16; /**< [ 55: 40](R/W) -- */
        uint64_t ss_res_sig166         : 1;  /**< [ 39: 39](RO) SS_Reserved */
        uint64_t ss_res_sig167         : 3;  /**< [ 38: 36](R/W) -- */
        uint64_t ss_res_sig168         : 1;  /**< [ 35: 35](RO) SS_Reserved */
        uint64_t ss_res_sig169         : 35; /**< [ 34:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig169         : 35; /**< [ 34:  0](R/W) -- */
        uint64_t ss_res_sig168         : 1;  /**< [ 35: 35](RO) SS_Reserved */
        uint64_t ss_res_sig167         : 3;  /**< [ 38: 36](R/W) -- */
        uint64_t ss_res_sig166         : 1;  /**< [ 39: 39](RO) SS_Reserved */
        uint64_t ss_res_sig165         : 16; /**< [ 55: 40](R/W) -- */
        uint64_t ss_res_sig164         : 8;  /**< [ 63: 56](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_34_s cn; */
};
typedef union cavm_bbxf_abx_config_34 cavm_bbxf_abx_config_34_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_34(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_34(uint64_t a)
{
    if (a<=3)
        return 0x87e042382110ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_34", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_34(a) cavm_bbxf_abx_config_34_t
#define bustype_CAVM_BBXF_ABX_CONFIG_34(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_34(a) "BBXF_ABX_CONFIG_34"
#define busnum_CAVM_BBXF_ABX_CONFIG_34(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_34(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_35
 *
 * BBX6 Configuration Register 35
 * Job Configuration
 */
union cavm_bbxf_abx_config_35
{
    uint64_t u;
    struct cavm_bbxf_abx_config_35_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig170         : 8;  /**< [ 63: 56](RO) SS_Reserved */
        uint64_t ss_res_sig171         : 56; /**< [ 55:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig171         : 56; /**< [ 55:  0](R/W) -- */
        uint64_t ss_res_sig170         : 8;  /**< [ 63: 56](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_35_s cn; */
};
typedef union cavm_bbxf_abx_config_35 cavm_bbxf_abx_config_35_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_35(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_35(uint64_t a)
{
    if (a<=3)
        return 0x87e042382118ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_35", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_35(a) cavm_bbxf_abx_config_35_t
#define bustype_CAVM_BBXF_ABX_CONFIG_35(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_35(a) "BBXF_ABX_CONFIG_35"
#define busnum_CAVM_BBXF_ABX_CONFIG_35(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_35(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_36
 *
 * BBX6 Configuration Register 36
 * Job Configuration
 */
union cavm_bbxf_abx_config_36
{
    uint64_t u;
    struct cavm_bbxf_abx_config_36_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig172         : 4;  /**< [ 63: 60](RO) SS_Reserved */
        uint64_t ss_res_sig173         : 12; /**< [ 59: 48](R/W) -- */
        uint64_t ss_res_sig174         : 4;  /**< [ 47: 44](RO) SS_Reserved */
        uint64_t ss_res_sig175         : 12; /**< [ 43: 32](R/W) -- */
        uint64_t ss_res_sig176         : 4;  /**< [ 31: 28](RO) SS_Reserved */
        uint64_t ss_res_sig177         : 12; /**< [ 27: 16](R/W) -- */
        uint64_t ss_res_sig178         : 4;  /**< [ 15: 12](RO) SS_Reserved */
        uint64_t ss_res_sig179         : 12; /**< [ 11:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig179         : 12; /**< [ 11:  0](R/W) -- */
        uint64_t ss_res_sig178         : 4;  /**< [ 15: 12](RO) SS_Reserved */
        uint64_t ss_res_sig177         : 12; /**< [ 27: 16](R/W) -- */
        uint64_t ss_res_sig176         : 4;  /**< [ 31: 28](RO) SS_Reserved */
        uint64_t ss_res_sig175         : 12; /**< [ 43: 32](R/W) -- */
        uint64_t ss_res_sig174         : 4;  /**< [ 47: 44](RO) SS_Reserved */
        uint64_t ss_res_sig173         : 12; /**< [ 59: 48](R/W) -- */
        uint64_t ss_res_sig172         : 4;  /**< [ 63: 60](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_36_s cn; */
};
typedef union cavm_bbxf_abx_config_36 cavm_bbxf_abx_config_36_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_36(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_36(uint64_t a)
{
    if (a<=3)
        return 0x87e042382120ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_36", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_36(a) cavm_bbxf_abx_config_36_t
#define bustype_CAVM_BBXF_ABX_CONFIG_36(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_36(a) "BBXF_ABX_CONFIG_36"
#define busnum_CAVM_BBXF_ABX_CONFIG_36(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_36(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_37
 *
 * BBX6 Configuration Register 37
 * Job Configuration
 */
union cavm_bbxf_abx_config_37
{
    uint64_t u;
    struct cavm_bbxf_abx_config_37_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig180         : 4;  /**< [ 63: 60](RO) SS_Reserved */
        uint64_t ss_res_sig181         : 12; /**< [ 59: 48](R/W) -- */
        uint64_t ss_res_sig182         : 4;  /**< [ 47: 44](RO) SS_Reserved */
        uint64_t ss_res_sig183         : 12; /**< [ 43: 32](R/W) -- */
        uint64_t ss_res_sig184         : 4;  /**< [ 31: 28](RO) SS_Reserved */
        uint64_t ss_res_sig185         : 12; /**< [ 27: 16](R/W) -- */
        uint64_t ss_res_sig186         : 4;  /**< [ 15: 12](RO) SS_Reserved */
        uint64_t ss_res_sig187         : 12; /**< [ 11:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig187         : 12; /**< [ 11:  0](R/W) -- */
        uint64_t ss_res_sig186         : 4;  /**< [ 15: 12](RO) SS_Reserved */
        uint64_t ss_res_sig185         : 12; /**< [ 27: 16](R/W) -- */
        uint64_t ss_res_sig184         : 4;  /**< [ 31: 28](RO) SS_Reserved */
        uint64_t ss_res_sig183         : 12; /**< [ 43: 32](R/W) -- */
        uint64_t ss_res_sig182         : 4;  /**< [ 47: 44](RO) SS_Reserved */
        uint64_t ss_res_sig181         : 12; /**< [ 59: 48](R/W) -- */
        uint64_t ss_res_sig180         : 4;  /**< [ 63: 60](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_37_s cn; */
};
typedef union cavm_bbxf_abx_config_37 cavm_bbxf_abx_config_37_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_37(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_37(uint64_t a)
{
    if (a<=3)
        return 0x87e042382128ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_37", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_37(a) cavm_bbxf_abx_config_37_t
#define bustype_CAVM_BBXF_ABX_CONFIG_37(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_37(a) "BBXF_ABX_CONFIG_37"
#define busnum_CAVM_BBXF_ABX_CONFIG_37(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_37(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_38
 *
 * BBX6 Configuration Register 38
 * Job Configuration
 */
union cavm_bbxf_abx_config_38
{
    uint64_t u;
    struct cavm_bbxf_abx_config_38_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig188         : 4;  /**< [ 63: 60](RO) SS_Reserved */
        uint64_t ss_res_sig189         : 12; /**< [ 59: 48](R/W) -- */
        uint64_t ss_res_sig190         : 4;  /**< [ 47: 44](RO) SS_Reserved */
        uint64_t ss_res_sig191         : 12; /**< [ 43: 32](R/W) -- */
        uint64_t ss_res_sig192         : 4;  /**< [ 31: 28](RO) SS_Reserved */
        uint64_t ss_res_sig193         : 12; /**< [ 27: 16](R/W) -- */
        uint64_t ss_res_sig194         : 4;  /**< [ 15: 12](RO) SS_Reserved */
        uint64_t ss_res_sig195         : 12; /**< [ 11:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig195         : 12; /**< [ 11:  0](R/W) -- */
        uint64_t ss_res_sig194         : 4;  /**< [ 15: 12](RO) SS_Reserved */
        uint64_t ss_res_sig193         : 12; /**< [ 27: 16](R/W) -- */
        uint64_t ss_res_sig192         : 4;  /**< [ 31: 28](RO) SS_Reserved */
        uint64_t ss_res_sig191         : 12; /**< [ 43: 32](R/W) -- */
        uint64_t ss_res_sig190         : 4;  /**< [ 47: 44](RO) SS_Reserved */
        uint64_t ss_res_sig189         : 12; /**< [ 59: 48](R/W) -- */
        uint64_t ss_res_sig188         : 4;  /**< [ 63: 60](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_38_s cn; */
};
typedef union cavm_bbxf_abx_config_38 cavm_bbxf_abx_config_38_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_38(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_38(uint64_t a)
{
    if (a<=3)
        return 0x87e042382130ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_38", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_38(a) cavm_bbxf_abx_config_38_t
#define bustype_CAVM_BBXF_ABX_CONFIG_38(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_38(a) "BBXF_ABX_CONFIG_38"
#define busnum_CAVM_BBXF_ABX_CONFIG_38(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_38(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_39
 *
 * BBX6 Configuration Register 39
 * Job Configuration
 */
union cavm_bbxf_abx_config_39
{
    uint64_t u;
    struct cavm_bbxf_abx_config_39_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig196         : 4;  /**< [ 63: 60](RO) SS_Reserved */
        uint64_t ss_res_sig197         : 12; /**< [ 59: 48](R/W) -- */
        uint64_t ss_res_sig198         : 4;  /**< [ 47: 44](RO) SS_Reserved */
        uint64_t ss_res_sig199         : 12; /**< [ 43: 32](R/W) -- */
        uint64_t ss_res_sig200         : 4;  /**< [ 31: 28](RO) SS_Reserved */
        uint64_t ss_res_sig201         : 12; /**< [ 27: 16](R/W) -- */
        uint64_t ss_res_sig202         : 4;  /**< [ 15: 12](RO) SS_Reserved */
        uint64_t ss_res_sig203         : 12; /**< [ 11:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig203         : 12; /**< [ 11:  0](R/W) -- */
        uint64_t ss_res_sig202         : 4;  /**< [ 15: 12](RO) SS_Reserved */
        uint64_t ss_res_sig201         : 12; /**< [ 27: 16](R/W) -- */
        uint64_t ss_res_sig200         : 4;  /**< [ 31: 28](RO) SS_Reserved */
        uint64_t ss_res_sig199         : 12; /**< [ 43: 32](R/W) -- */
        uint64_t ss_res_sig198         : 4;  /**< [ 47: 44](RO) SS_Reserved */
        uint64_t ss_res_sig197         : 12; /**< [ 59: 48](R/W) -- */
        uint64_t ss_res_sig196         : 4;  /**< [ 63: 60](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_39_s cn; */
};
typedef union cavm_bbxf_abx_config_39 cavm_bbxf_abx_config_39_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_39(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_39(uint64_t a)
{
    if (a<=3)
        return 0x87e042382138ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_39", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_39(a) cavm_bbxf_abx_config_39_t
#define bustype_CAVM_BBXF_ABX_CONFIG_39(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_39(a) "BBXF_ABX_CONFIG_39"
#define busnum_CAVM_BBXF_ABX_CONFIG_39(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_39(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_4
 *
 * BBX6 Configuration Register 4
 * Job Configuration
 */
union cavm_bbxf_abx_config_4
{
    uint64_t u;
    struct cavm_bbxf_abx_config_4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig33          : 16; /**< [ 63: 48](RO) SS_Reserved */
        uint64_t ss_res_sig34          : 48; /**< [ 47:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig34          : 48; /**< [ 47:  0](R/W) -- */
        uint64_t ss_res_sig33          : 16; /**< [ 63: 48](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_4_s cn; */
};
typedef union cavm_bbxf_abx_config_4 cavm_bbxf_abx_config_4_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_4(uint64_t a)
{
    if (a<=3)
        return 0x87e042382020ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_4(a) cavm_bbxf_abx_config_4_t
#define bustype_CAVM_BBXF_ABX_CONFIG_4(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_4(a) "BBXF_ABX_CONFIG_4"
#define busnum_CAVM_BBXF_ABX_CONFIG_4(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_4(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_40
 *
 * BBX6 Configuration Register 40
 * Job Configuration
 */
union cavm_bbxf_abx_config_40
{
    uint64_t u;
    struct cavm_bbxf_abx_config_40_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig204         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig204         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_40_s cn; */
};
typedef union cavm_bbxf_abx_config_40 cavm_bbxf_abx_config_40_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_40(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_40(uint64_t a)
{
    if (a<=3)
        return 0x87e042382140ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_40", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_40(a) cavm_bbxf_abx_config_40_t
#define bustype_CAVM_BBXF_ABX_CONFIG_40(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_40(a) "BBXF_ABX_CONFIG_40"
#define busnum_CAVM_BBXF_ABX_CONFIG_40(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_40(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_41
 *
 * BBX6 Configuration Register 41
 * Job Configuration
 */
union cavm_bbxf_abx_config_41
{
    uint64_t u;
    struct cavm_bbxf_abx_config_41_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig205         : 11; /**< [ 63: 53](RO) SS_Reserved */
        uint64_t ss_res_sig206         : 1;  /**< [ 52: 52](R/W) -- */
        uint64_t ss_res_sig207         : 3;  /**< [ 51: 49](RO) SS_Reserved */
        uint64_t ss_res_sig208         : 49; /**< [ 48:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig208         : 49; /**< [ 48:  0](R/W) -- */
        uint64_t ss_res_sig207         : 3;  /**< [ 51: 49](RO) SS_Reserved */
        uint64_t ss_res_sig206         : 1;  /**< [ 52: 52](R/W) -- */
        uint64_t ss_res_sig205         : 11; /**< [ 63: 53](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_41_s cn; */
};
typedef union cavm_bbxf_abx_config_41 cavm_bbxf_abx_config_41_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_41(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_41(uint64_t a)
{
    if (a<=3)
        return 0x87e042382148ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_41", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_41(a) cavm_bbxf_abx_config_41_t
#define bustype_CAVM_BBXF_ABX_CONFIG_41(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_41(a) "BBXF_ABX_CONFIG_41"
#define busnum_CAVM_BBXF_ABX_CONFIG_41(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_41(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_42
 *
 * BBX6 Configuration Register 42
 * Job Configuration
 */
union cavm_bbxf_abx_config_42
{
    uint64_t u;
    struct cavm_bbxf_abx_config_42_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig209         : 2;  /**< [ 63: 62](RO) SS_Reserved */
        uint64_t ss_res_sig210         : 2;  /**< [ 61: 60](R/W) -- */
        uint64_t ss_res_sig211         : 1;  /**< [ 59: 59](RO) SS_Reserved */
        uint64_t ss_res_sig212         : 11; /**< [ 58: 48](R/W) -- */
        uint64_t ss_res_sig213         : 5;  /**< [ 47: 43](RO) SS_Reserved */
        uint64_t ss_res_sig214         : 43; /**< [ 42:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig214         : 43; /**< [ 42:  0](R/W) -- */
        uint64_t ss_res_sig213         : 5;  /**< [ 47: 43](RO) SS_Reserved */
        uint64_t ss_res_sig212         : 11; /**< [ 58: 48](R/W) -- */
        uint64_t ss_res_sig211         : 1;  /**< [ 59: 59](RO) SS_Reserved */
        uint64_t ss_res_sig210         : 2;  /**< [ 61: 60](R/W) -- */
        uint64_t ss_res_sig209         : 2;  /**< [ 63: 62](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_42_s cn; */
};
typedef union cavm_bbxf_abx_config_42 cavm_bbxf_abx_config_42_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_42(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_42(uint64_t a)
{
    if (a<=3)
        return 0x87e042382150ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_42", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_42(a) cavm_bbxf_abx_config_42_t
#define bustype_CAVM_BBXF_ABX_CONFIG_42(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_42(a) "BBXF_ABX_CONFIG_42"
#define busnum_CAVM_BBXF_ABX_CONFIG_42(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_42(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_43
 *
 * BBX6 Configuration Register 43
 * Job Configuration
 */
union cavm_bbxf_abx_config_43
{
    uint64_t u;
    struct cavm_bbxf_abx_config_43_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig215         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig215         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_43_s cn; */
};
typedef union cavm_bbxf_abx_config_43 cavm_bbxf_abx_config_43_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_43(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_43(uint64_t a)
{
    if (a<=3)
        return 0x87e042382158ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_43", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_43(a) cavm_bbxf_abx_config_43_t
#define bustype_CAVM_BBXF_ABX_CONFIG_43(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_43(a) "BBXF_ABX_CONFIG_43"
#define busnum_CAVM_BBXF_ABX_CONFIG_43(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_43(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_44
 *
 * BBX6 Configuration Register 44
 * Job Configuration
 */
union cavm_bbxf_abx_config_44
{
    uint64_t u;
    struct cavm_bbxf_abx_config_44_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig216         : 36; /**< [ 63: 28](RO) SS_Reserved */
        uint64_t ss_res_sig217         : 28; /**< [ 27:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig217         : 28; /**< [ 27:  0](R/W) -- */
        uint64_t ss_res_sig216         : 36; /**< [ 63: 28](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_44_s cn; */
};
typedef union cavm_bbxf_abx_config_44 cavm_bbxf_abx_config_44_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_44(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_44(uint64_t a)
{
    if (a<=3)
        return 0x87e042382160ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_44", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_44(a) cavm_bbxf_abx_config_44_t
#define bustype_CAVM_BBXF_ABX_CONFIG_44(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_44(a) "BBXF_ABX_CONFIG_44"
#define busnum_CAVM_BBXF_ABX_CONFIG_44(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_44(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_45
 *
 * BBX6 Configuration Register 45
 * Job Configuration
 */
union cavm_bbxf_abx_config_45
{
    uint64_t u;
    struct cavm_bbxf_abx_config_45_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig218         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig218         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_45_s cn; */
};
typedef union cavm_bbxf_abx_config_45 cavm_bbxf_abx_config_45_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_45(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_45(uint64_t a)
{
    if (a<=3)
        return 0x87e042382168ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_45", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_45(a) cavm_bbxf_abx_config_45_t
#define bustype_CAVM_BBXF_ABX_CONFIG_45(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_45(a) "BBXF_ABX_CONFIG_45"
#define busnum_CAVM_BBXF_ABX_CONFIG_45(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_45(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_46
 *
 * BBX6 Configuration Register 46
 * Job Configuration
 */
union cavm_bbxf_abx_config_46
{
    uint64_t u;
    struct cavm_bbxf_abx_config_46_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig219         : 8;  /**< [ 63: 56](RO) SS_Reserved */
        uint64_t ss_res_sig220         : 16; /**< [ 55: 40](R/W) -- */
        uint64_t ss_res_sig221         : 1;  /**< [ 39: 39](RO) SS_Reserved */
        uint64_t ss_res_sig222         : 3;  /**< [ 38: 36](R/W) -- */
        uint64_t ss_res_sig223         : 1;  /**< [ 35: 35](RO) SS_Reserved */
        uint64_t ss_res_sig224         : 35; /**< [ 34:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig224         : 35; /**< [ 34:  0](R/W) -- */
        uint64_t ss_res_sig223         : 1;  /**< [ 35: 35](RO) SS_Reserved */
        uint64_t ss_res_sig222         : 3;  /**< [ 38: 36](R/W) -- */
        uint64_t ss_res_sig221         : 1;  /**< [ 39: 39](RO) SS_Reserved */
        uint64_t ss_res_sig220         : 16; /**< [ 55: 40](R/W) -- */
        uint64_t ss_res_sig219         : 8;  /**< [ 63: 56](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_46_s cn; */
};
typedef union cavm_bbxf_abx_config_46 cavm_bbxf_abx_config_46_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_46(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_46(uint64_t a)
{
    if (a<=3)
        return 0x87e042382170ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_46", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_46(a) cavm_bbxf_abx_config_46_t
#define bustype_CAVM_BBXF_ABX_CONFIG_46(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_46(a) "BBXF_ABX_CONFIG_46"
#define busnum_CAVM_BBXF_ABX_CONFIG_46(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_46(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_47
 *
 * BBX6 Configuration Register 47
 * Job Configuration
 */
union cavm_bbxf_abx_config_47
{
    uint64_t u;
    struct cavm_bbxf_abx_config_47_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig225         : 8;  /**< [ 63: 56](RO) SS_Reserved */
        uint64_t ss_res_sig226         : 56; /**< [ 55:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig226         : 56; /**< [ 55:  0](R/W) -- */
        uint64_t ss_res_sig225         : 8;  /**< [ 63: 56](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_47_s cn; */
};
typedef union cavm_bbxf_abx_config_47 cavm_bbxf_abx_config_47_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_47(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_47(uint64_t a)
{
    if (a<=3)
        return 0x87e042382178ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_47", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_47(a) cavm_bbxf_abx_config_47_t
#define bustype_CAVM_BBXF_ABX_CONFIG_47(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_47(a) "BBXF_ABX_CONFIG_47"
#define busnum_CAVM_BBXF_ABX_CONFIG_47(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_47(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_48
 *
 * BBX6 Configuration Register 48
 * Job Configuration
 */
union cavm_bbxf_abx_config_48
{
    uint64_t u;
    struct cavm_bbxf_abx_config_48_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig227         : 4;  /**< [ 63: 60](RO) SS_Reserved */
        uint64_t ss_res_sig228         : 12; /**< [ 59: 48](R/W) -- */
        uint64_t ss_res_sig229         : 4;  /**< [ 47: 44](RO) SS_Reserved */
        uint64_t ss_res_sig230         : 12; /**< [ 43: 32](R/W) -- */
        uint64_t ss_res_sig231         : 4;  /**< [ 31: 28](RO) SS_Reserved */
        uint64_t ss_res_sig232         : 12; /**< [ 27: 16](R/W) -- */
        uint64_t ss_res_sig233         : 4;  /**< [ 15: 12](RO) SS_Reserved */
        uint64_t ss_res_sig234         : 12; /**< [ 11:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig234         : 12; /**< [ 11:  0](R/W) -- */
        uint64_t ss_res_sig233         : 4;  /**< [ 15: 12](RO) SS_Reserved */
        uint64_t ss_res_sig232         : 12; /**< [ 27: 16](R/W) -- */
        uint64_t ss_res_sig231         : 4;  /**< [ 31: 28](RO) SS_Reserved */
        uint64_t ss_res_sig230         : 12; /**< [ 43: 32](R/W) -- */
        uint64_t ss_res_sig229         : 4;  /**< [ 47: 44](RO) SS_Reserved */
        uint64_t ss_res_sig228         : 12; /**< [ 59: 48](R/W) -- */
        uint64_t ss_res_sig227         : 4;  /**< [ 63: 60](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_48_s cn; */
};
typedef union cavm_bbxf_abx_config_48 cavm_bbxf_abx_config_48_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_48(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_48(uint64_t a)
{
    if (a<=3)
        return 0x87e042382180ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_48", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_48(a) cavm_bbxf_abx_config_48_t
#define bustype_CAVM_BBXF_ABX_CONFIG_48(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_48(a) "BBXF_ABX_CONFIG_48"
#define busnum_CAVM_BBXF_ABX_CONFIG_48(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_48(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_49
 *
 * BBX6 Configuration Register 49
 * Job Configuration
 */
union cavm_bbxf_abx_config_49
{
    uint64_t u;
    struct cavm_bbxf_abx_config_49_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig235         : 4;  /**< [ 63: 60](RO) SS_Reserved */
        uint64_t ss_res_sig236         : 12; /**< [ 59: 48](R/W) -- */
        uint64_t ss_res_sig237         : 4;  /**< [ 47: 44](RO) SS_Reserved */
        uint64_t ss_res_sig238         : 12; /**< [ 43: 32](R/W) -- */
        uint64_t ss_res_sig239         : 4;  /**< [ 31: 28](RO) SS_Reserved */
        uint64_t ss_res_sig240         : 12; /**< [ 27: 16](R/W) -- */
        uint64_t ss_res_sig241         : 4;  /**< [ 15: 12](RO) SS_Reserved */
        uint64_t ss_res_sig242         : 12; /**< [ 11:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig242         : 12; /**< [ 11:  0](R/W) -- */
        uint64_t ss_res_sig241         : 4;  /**< [ 15: 12](RO) SS_Reserved */
        uint64_t ss_res_sig240         : 12; /**< [ 27: 16](R/W) -- */
        uint64_t ss_res_sig239         : 4;  /**< [ 31: 28](RO) SS_Reserved */
        uint64_t ss_res_sig238         : 12; /**< [ 43: 32](R/W) -- */
        uint64_t ss_res_sig237         : 4;  /**< [ 47: 44](RO) SS_Reserved */
        uint64_t ss_res_sig236         : 12; /**< [ 59: 48](R/W) -- */
        uint64_t ss_res_sig235         : 4;  /**< [ 63: 60](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_49_s cn; */
};
typedef union cavm_bbxf_abx_config_49 cavm_bbxf_abx_config_49_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_49(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_49(uint64_t a)
{
    if (a<=3)
        return 0x87e042382188ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_49", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_49(a) cavm_bbxf_abx_config_49_t
#define bustype_CAVM_BBXF_ABX_CONFIG_49(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_49(a) "BBXF_ABX_CONFIG_49"
#define busnum_CAVM_BBXF_ABX_CONFIG_49(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_49(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_5
 *
 * BBX6 Configuration Register 5
 * Job Configuration
 */
union cavm_bbxf_abx_config_5
{
    uint64_t u;
    struct cavm_bbxf_abx_config_5_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig35          : 8;  /**< [ 63: 56](RO) SS_Reserved */
        uint64_t ss_res_sig36          : 56; /**< [ 55:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig36          : 56; /**< [ 55:  0](R/W) -- */
        uint64_t ss_res_sig35          : 8;  /**< [ 63: 56](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_5_s cn; */
};
typedef union cavm_bbxf_abx_config_5 cavm_bbxf_abx_config_5_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_5(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_5(uint64_t a)
{
    if (a<=3)
        return 0x87e042382028ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_5", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_5(a) cavm_bbxf_abx_config_5_t
#define bustype_CAVM_BBXF_ABX_CONFIG_5(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_5(a) "BBXF_ABX_CONFIG_5"
#define busnum_CAVM_BBXF_ABX_CONFIG_5(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_5(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_50
 *
 * BBX6 Configuration Register 50
 * Job Configuration
 */
union cavm_bbxf_abx_config_50
{
    uint64_t u;
    struct cavm_bbxf_abx_config_50_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig243         : 4;  /**< [ 63: 60](RO) SS_Reserved */
        uint64_t ss_res_sig244         : 12; /**< [ 59: 48](R/W) -- */
        uint64_t ss_res_sig245         : 4;  /**< [ 47: 44](RO) SS_Reserved */
        uint64_t ss_res_sig246         : 12; /**< [ 43: 32](R/W) -- */
        uint64_t ss_res_sig247         : 4;  /**< [ 31: 28](RO) SS_Reserved */
        uint64_t ss_res_sig248         : 12; /**< [ 27: 16](R/W) -- */
        uint64_t ss_res_sig249         : 4;  /**< [ 15: 12](RO) SS_Reserved */
        uint64_t ss_res_sig250         : 12; /**< [ 11:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig250         : 12; /**< [ 11:  0](R/W) -- */
        uint64_t ss_res_sig249         : 4;  /**< [ 15: 12](RO) SS_Reserved */
        uint64_t ss_res_sig248         : 12; /**< [ 27: 16](R/W) -- */
        uint64_t ss_res_sig247         : 4;  /**< [ 31: 28](RO) SS_Reserved */
        uint64_t ss_res_sig246         : 12; /**< [ 43: 32](R/W) -- */
        uint64_t ss_res_sig245         : 4;  /**< [ 47: 44](RO) SS_Reserved */
        uint64_t ss_res_sig244         : 12; /**< [ 59: 48](R/W) -- */
        uint64_t ss_res_sig243         : 4;  /**< [ 63: 60](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_50_s cn; */
};
typedef union cavm_bbxf_abx_config_50 cavm_bbxf_abx_config_50_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_50(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_50(uint64_t a)
{
    if (a<=3)
        return 0x87e042382190ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_50", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_50(a) cavm_bbxf_abx_config_50_t
#define bustype_CAVM_BBXF_ABX_CONFIG_50(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_50(a) "BBXF_ABX_CONFIG_50"
#define busnum_CAVM_BBXF_ABX_CONFIG_50(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_50(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_51
 *
 * BBX6 Configuration Register 51
 * Job Configuration
 */
union cavm_bbxf_abx_config_51
{
    uint64_t u;
    struct cavm_bbxf_abx_config_51_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig251         : 4;  /**< [ 63: 60](RO) SS_Reserved */
        uint64_t ss_res_sig252         : 12; /**< [ 59: 48](R/W) -- */
        uint64_t ss_res_sig253         : 4;  /**< [ 47: 44](RO) SS_Reserved */
        uint64_t ss_res_sig254         : 12; /**< [ 43: 32](R/W) -- */
        uint64_t ss_res_sig255         : 4;  /**< [ 31: 28](RO) SS_Reserved */
        uint64_t ss_res_sig256         : 12; /**< [ 27: 16](R/W) -- */
        uint64_t ss_res_sig257         : 4;  /**< [ 15: 12](RO) SS_Reserved */
        uint64_t ss_res_sig258         : 12; /**< [ 11:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig258         : 12; /**< [ 11:  0](R/W) -- */
        uint64_t ss_res_sig257         : 4;  /**< [ 15: 12](RO) SS_Reserved */
        uint64_t ss_res_sig256         : 12; /**< [ 27: 16](R/W) -- */
        uint64_t ss_res_sig255         : 4;  /**< [ 31: 28](RO) SS_Reserved */
        uint64_t ss_res_sig254         : 12; /**< [ 43: 32](R/W) -- */
        uint64_t ss_res_sig253         : 4;  /**< [ 47: 44](RO) SS_Reserved */
        uint64_t ss_res_sig252         : 12; /**< [ 59: 48](R/W) -- */
        uint64_t ss_res_sig251         : 4;  /**< [ 63: 60](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_51_s cn; */
};
typedef union cavm_bbxf_abx_config_51 cavm_bbxf_abx_config_51_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_51(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_51(uint64_t a)
{
    if (a<=3)
        return 0x87e042382198ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_51", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_51(a) cavm_bbxf_abx_config_51_t
#define bustype_CAVM_BBXF_ABX_CONFIG_51(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_51(a) "BBXF_ABX_CONFIG_51"
#define busnum_CAVM_BBXF_ABX_CONFIG_51(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_51(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_52
 *
 * BBX6 Configuration Register 52
 * Job Configuration
 */
union cavm_bbxf_abx_config_52
{
    uint64_t u;
    struct cavm_bbxf_abx_config_52_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig259         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig259         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_52_s cn; */
};
typedef union cavm_bbxf_abx_config_52 cavm_bbxf_abx_config_52_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_52(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_52(uint64_t a)
{
    if (a<=3)
        return 0x87e0423821a0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_52", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_52(a) cavm_bbxf_abx_config_52_t
#define bustype_CAVM_BBXF_ABX_CONFIG_52(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_52(a) "BBXF_ABX_CONFIG_52"
#define busnum_CAVM_BBXF_ABX_CONFIG_52(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_52(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_53
 *
 * BBX6 Configuration Register 53
 * Job Configuration
 */
union cavm_bbxf_abx_config_53
{
    uint64_t u;
    struct cavm_bbxf_abx_config_53_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig260         : 11; /**< [ 63: 53](RO) SS_Reserved */
        uint64_t ss_res_sig261         : 1;  /**< [ 52: 52](R/W) -- */
        uint64_t ss_res_sig262         : 3;  /**< [ 51: 49](RO) SS_Reserved */
        uint64_t ss_res_sig263         : 49; /**< [ 48:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig263         : 49; /**< [ 48:  0](R/W) -- */
        uint64_t ss_res_sig262         : 3;  /**< [ 51: 49](RO) SS_Reserved */
        uint64_t ss_res_sig261         : 1;  /**< [ 52: 52](R/W) -- */
        uint64_t ss_res_sig260         : 11; /**< [ 63: 53](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_53_s cn; */
};
typedef union cavm_bbxf_abx_config_53 cavm_bbxf_abx_config_53_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_53(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_53(uint64_t a)
{
    if (a<=3)
        return 0x87e0423821a8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_53", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_53(a) cavm_bbxf_abx_config_53_t
#define bustype_CAVM_BBXF_ABX_CONFIG_53(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_53(a) "BBXF_ABX_CONFIG_53"
#define busnum_CAVM_BBXF_ABX_CONFIG_53(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_53(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_54
 *
 * BBX6 Configuration Register 54
 * Job Configuration
 */
union cavm_bbxf_abx_config_54
{
    uint64_t u;
    struct cavm_bbxf_abx_config_54_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig264         : 2;  /**< [ 63: 62](RO) SS_Reserved */
        uint64_t ss_res_sig265         : 2;  /**< [ 61: 60](R/W) -- */
        uint64_t ss_res_sig266         : 1;  /**< [ 59: 59](RO) SS_Reserved */
        uint64_t ss_res_sig267         : 11; /**< [ 58: 48](R/W) -- */
        uint64_t ss_res_sig268         : 5;  /**< [ 47: 43](RO) SS_Reserved */
        uint64_t ss_res_sig269         : 43; /**< [ 42:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig269         : 43; /**< [ 42:  0](R/W) -- */
        uint64_t ss_res_sig268         : 5;  /**< [ 47: 43](RO) SS_Reserved */
        uint64_t ss_res_sig267         : 11; /**< [ 58: 48](R/W) -- */
        uint64_t ss_res_sig266         : 1;  /**< [ 59: 59](RO) SS_Reserved */
        uint64_t ss_res_sig265         : 2;  /**< [ 61: 60](R/W) -- */
        uint64_t ss_res_sig264         : 2;  /**< [ 63: 62](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_54_s cn; */
};
typedef union cavm_bbxf_abx_config_54 cavm_bbxf_abx_config_54_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_54(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_54(uint64_t a)
{
    if (a<=3)
        return 0x87e0423821b0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_54", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_54(a) cavm_bbxf_abx_config_54_t
#define bustype_CAVM_BBXF_ABX_CONFIG_54(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_54(a) "BBXF_ABX_CONFIG_54"
#define busnum_CAVM_BBXF_ABX_CONFIG_54(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_54(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_55
 *
 * BBX6 Configuration Register 55
 * Job Configuration
 */
union cavm_bbxf_abx_config_55
{
    uint64_t u;
    struct cavm_bbxf_abx_config_55_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig270         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig270         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_55_s cn; */
};
typedef union cavm_bbxf_abx_config_55 cavm_bbxf_abx_config_55_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_55(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_55(uint64_t a)
{
    if (a<=3)
        return 0x87e0423821b8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_55", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_55(a) cavm_bbxf_abx_config_55_t
#define bustype_CAVM_BBXF_ABX_CONFIG_55(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_55(a) "BBXF_ABX_CONFIG_55"
#define busnum_CAVM_BBXF_ABX_CONFIG_55(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_55(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_56
 *
 * BBX6 Configuration Register 56
 * Job Configuration
 */
union cavm_bbxf_abx_config_56
{
    uint64_t u;
    struct cavm_bbxf_abx_config_56_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig271         : 36; /**< [ 63: 28](RO) SS_Reserved */
        uint64_t ss_res_sig272         : 28; /**< [ 27:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig272         : 28; /**< [ 27:  0](R/W) -- */
        uint64_t ss_res_sig271         : 36; /**< [ 63: 28](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_56_s cn; */
};
typedef union cavm_bbxf_abx_config_56 cavm_bbxf_abx_config_56_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_56(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_56(uint64_t a)
{
    if (a<=3)
        return 0x87e0423821c0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_56", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_56(a) cavm_bbxf_abx_config_56_t
#define bustype_CAVM_BBXF_ABX_CONFIG_56(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_56(a) "BBXF_ABX_CONFIG_56"
#define busnum_CAVM_BBXF_ABX_CONFIG_56(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_56(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_57
 *
 * BBX6 Configuration Register 57
 * Job Configuration
 */
union cavm_bbxf_abx_config_57
{
    uint64_t u;
    struct cavm_bbxf_abx_config_57_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig273         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig273         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_57_s cn; */
};
typedef union cavm_bbxf_abx_config_57 cavm_bbxf_abx_config_57_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_57(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_57(uint64_t a)
{
    if (a<=3)
        return 0x87e0423821c8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_57", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_57(a) cavm_bbxf_abx_config_57_t
#define bustype_CAVM_BBXF_ABX_CONFIG_57(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_57(a) "BBXF_ABX_CONFIG_57"
#define busnum_CAVM_BBXF_ABX_CONFIG_57(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_57(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_58
 *
 * BBX6 Configuration Register 58
 * Job Configuration
 */
union cavm_bbxf_abx_config_58
{
    uint64_t u;
    struct cavm_bbxf_abx_config_58_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig274         : 8;  /**< [ 63: 56](RO) SS_Reserved */
        uint64_t ss_res_sig275         : 16; /**< [ 55: 40](R/W) -- */
        uint64_t ss_res_sig276         : 1;  /**< [ 39: 39](RO) SS_Reserved */
        uint64_t ss_res_sig277         : 3;  /**< [ 38: 36](R/W) -- */
        uint64_t ss_res_sig278         : 1;  /**< [ 35: 35](RO) SS_Reserved */
        uint64_t ss_res_sig279         : 35; /**< [ 34:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig279         : 35; /**< [ 34:  0](R/W) -- */
        uint64_t ss_res_sig278         : 1;  /**< [ 35: 35](RO) SS_Reserved */
        uint64_t ss_res_sig277         : 3;  /**< [ 38: 36](R/W) -- */
        uint64_t ss_res_sig276         : 1;  /**< [ 39: 39](RO) SS_Reserved */
        uint64_t ss_res_sig275         : 16; /**< [ 55: 40](R/W) -- */
        uint64_t ss_res_sig274         : 8;  /**< [ 63: 56](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_58_s cn; */
};
typedef union cavm_bbxf_abx_config_58 cavm_bbxf_abx_config_58_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_58(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_58(uint64_t a)
{
    if (a<=3)
        return 0x87e0423821d0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_58", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_58(a) cavm_bbxf_abx_config_58_t
#define bustype_CAVM_BBXF_ABX_CONFIG_58(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_58(a) "BBXF_ABX_CONFIG_58"
#define busnum_CAVM_BBXF_ABX_CONFIG_58(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_58(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_59
 *
 * BBX6 Configuration Register 59
 * Job Configuration
 */
union cavm_bbxf_abx_config_59
{
    uint64_t u;
    struct cavm_bbxf_abx_config_59_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig280         : 8;  /**< [ 63: 56](RO) SS_Reserved */
        uint64_t ss_res_sig281         : 56; /**< [ 55:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig281         : 56; /**< [ 55:  0](R/W) -- */
        uint64_t ss_res_sig280         : 8;  /**< [ 63: 56](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_59_s cn; */
};
typedef union cavm_bbxf_abx_config_59 cavm_bbxf_abx_config_59_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_59(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_59(uint64_t a)
{
    if (a<=3)
        return 0x87e0423821d8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_59", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_59(a) cavm_bbxf_abx_config_59_t
#define bustype_CAVM_BBXF_ABX_CONFIG_59(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_59(a) "BBXF_ABX_CONFIG_59"
#define busnum_CAVM_BBXF_ABX_CONFIG_59(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_59(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_6
 *
 * BBX6 Configuration Register 6
 * Job Configuration
 */
union cavm_bbxf_abx_config_6
{
    uint64_t u;
    struct cavm_bbxf_abx_config_6_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig37          : 4;  /**< [ 63: 60](RO) SS_Reserved */
        uint64_t ss_res_sig38          : 12; /**< [ 59: 48](R/W) -- */
        uint64_t ss_res_sig39          : 2;  /**< [ 47: 46](RO) SS_Reserved */
        uint64_t ss_res_sig40          : 14; /**< [ 45: 32](R/W) -- */
        uint64_t ss_res_sig41          : 5;  /**< [ 31: 27](RO) SS_Reserved */
        uint64_t ss_res_sig42          : 3;  /**< [ 26: 24](R/W) -- */
        uint64_t ss_res_sig43          : 1;  /**< [ 23: 23](RO) SS_Reserved */
        uint64_t ss_res_sig44          : 3;  /**< [ 22: 20](R/W) -- */
        uint64_t ss_res_sig45          : 1;  /**< [ 19: 19](RO) SS_Reserved */
        uint64_t ss_res_sig46          : 7;  /**< [ 18: 12](R/W) -- */
        uint64_t ss_res_sig47          : 1;  /**< [ 11: 11](RO) SS_Reserved */
        uint64_t ss_res_sig48          : 11; /**< [ 10:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig48          : 11; /**< [ 10:  0](R/W) -- */
        uint64_t ss_res_sig47          : 1;  /**< [ 11: 11](RO) SS_Reserved */
        uint64_t ss_res_sig46          : 7;  /**< [ 18: 12](R/W) -- */
        uint64_t ss_res_sig45          : 1;  /**< [ 19: 19](RO) SS_Reserved */
        uint64_t ss_res_sig44          : 3;  /**< [ 22: 20](R/W) -- */
        uint64_t ss_res_sig43          : 1;  /**< [ 23: 23](RO) SS_Reserved */
        uint64_t ss_res_sig42          : 3;  /**< [ 26: 24](R/W) -- */
        uint64_t ss_res_sig41          : 5;  /**< [ 31: 27](RO) SS_Reserved */
        uint64_t ss_res_sig40          : 14; /**< [ 45: 32](R/W) -- */
        uint64_t ss_res_sig39          : 2;  /**< [ 47: 46](RO) SS_Reserved */
        uint64_t ss_res_sig38          : 12; /**< [ 59: 48](R/W) -- */
        uint64_t ss_res_sig37          : 4;  /**< [ 63: 60](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_6_s cn; */
};
typedef union cavm_bbxf_abx_config_6 cavm_bbxf_abx_config_6_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_6(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_6(uint64_t a)
{
    if (a<=3)
        return 0x87e042382030ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_6", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_6(a) cavm_bbxf_abx_config_6_t
#define bustype_CAVM_BBXF_ABX_CONFIG_6(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_6(a) "BBXF_ABX_CONFIG_6"
#define busnum_CAVM_BBXF_ABX_CONFIG_6(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_6(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_60
 *
 * BBX6 Configuration Register 60
 * Job Configuration
 */
union cavm_bbxf_abx_config_60
{
    uint64_t u;
    struct cavm_bbxf_abx_config_60_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig282         : 4;  /**< [ 63: 60](RO) SS_Reserved */
        uint64_t ss_res_sig283         : 12; /**< [ 59: 48](R/W) -- */
        uint64_t ss_res_sig284         : 4;  /**< [ 47: 44](RO) SS_Reserved */
        uint64_t ss_res_sig285         : 12; /**< [ 43: 32](R/W) -- */
        uint64_t ss_res_sig286         : 4;  /**< [ 31: 28](RO) SS_Reserved */
        uint64_t ss_res_sig287         : 12; /**< [ 27: 16](R/W) -- */
        uint64_t ss_res_sig288         : 4;  /**< [ 15: 12](RO) SS_Reserved */
        uint64_t ss_res_sig289         : 12; /**< [ 11:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig289         : 12; /**< [ 11:  0](R/W) -- */
        uint64_t ss_res_sig288         : 4;  /**< [ 15: 12](RO) SS_Reserved */
        uint64_t ss_res_sig287         : 12; /**< [ 27: 16](R/W) -- */
        uint64_t ss_res_sig286         : 4;  /**< [ 31: 28](RO) SS_Reserved */
        uint64_t ss_res_sig285         : 12; /**< [ 43: 32](R/W) -- */
        uint64_t ss_res_sig284         : 4;  /**< [ 47: 44](RO) SS_Reserved */
        uint64_t ss_res_sig283         : 12; /**< [ 59: 48](R/W) -- */
        uint64_t ss_res_sig282         : 4;  /**< [ 63: 60](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_60_s cn; */
};
typedef union cavm_bbxf_abx_config_60 cavm_bbxf_abx_config_60_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_60(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_60(uint64_t a)
{
    if (a<=3)
        return 0x87e0423821e0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_60", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_60(a) cavm_bbxf_abx_config_60_t
#define bustype_CAVM_BBXF_ABX_CONFIG_60(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_60(a) "BBXF_ABX_CONFIG_60"
#define busnum_CAVM_BBXF_ABX_CONFIG_60(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_60(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_61
 *
 * BBX6 Configuration Register 61
 * Job Configuration
 */
union cavm_bbxf_abx_config_61
{
    uint64_t u;
    struct cavm_bbxf_abx_config_61_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig290         : 4;  /**< [ 63: 60](RO) SS_Reserved */
        uint64_t ss_res_sig291         : 12; /**< [ 59: 48](R/W) -- */
        uint64_t ss_res_sig292         : 4;  /**< [ 47: 44](RO) SS_Reserved */
        uint64_t ss_res_sig293         : 12; /**< [ 43: 32](R/W) -- */
        uint64_t ss_res_sig294         : 4;  /**< [ 31: 28](RO) SS_Reserved */
        uint64_t ss_res_sig295         : 12; /**< [ 27: 16](R/W) -- */
        uint64_t ss_res_sig296         : 4;  /**< [ 15: 12](RO) SS_Reserved */
        uint64_t ss_res_sig297         : 12; /**< [ 11:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig297         : 12; /**< [ 11:  0](R/W) -- */
        uint64_t ss_res_sig296         : 4;  /**< [ 15: 12](RO) SS_Reserved */
        uint64_t ss_res_sig295         : 12; /**< [ 27: 16](R/W) -- */
        uint64_t ss_res_sig294         : 4;  /**< [ 31: 28](RO) SS_Reserved */
        uint64_t ss_res_sig293         : 12; /**< [ 43: 32](R/W) -- */
        uint64_t ss_res_sig292         : 4;  /**< [ 47: 44](RO) SS_Reserved */
        uint64_t ss_res_sig291         : 12; /**< [ 59: 48](R/W) -- */
        uint64_t ss_res_sig290         : 4;  /**< [ 63: 60](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_61_s cn; */
};
typedef union cavm_bbxf_abx_config_61 cavm_bbxf_abx_config_61_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_61(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_61(uint64_t a)
{
    if (a<=3)
        return 0x87e0423821e8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_61", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_61(a) cavm_bbxf_abx_config_61_t
#define bustype_CAVM_BBXF_ABX_CONFIG_61(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_61(a) "BBXF_ABX_CONFIG_61"
#define busnum_CAVM_BBXF_ABX_CONFIG_61(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_61(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_62
 *
 * BBX6 Configuration Register 62
 * Job Configuration
 */
union cavm_bbxf_abx_config_62
{
    uint64_t u;
    struct cavm_bbxf_abx_config_62_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig298         : 4;  /**< [ 63: 60](RO) SS_Reserved */
        uint64_t ss_res_sig299         : 12; /**< [ 59: 48](R/W) -- */
        uint64_t ss_res_sig300         : 4;  /**< [ 47: 44](RO) SS_Reserved */
        uint64_t ss_res_sig301         : 12; /**< [ 43: 32](R/W) -- */
        uint64_t ss_res_sig302         : 4;  /**< [ 31: 28](RO) SS_Reserved */
        uint64_t ss_res_sig303         : 12; /**< [ 27: 16](R/W) -- */
        uint64_t ss_res_sig304         : 4;  /**< [ 15: 12](RO) SS_Reserved */
        uint64_t ss_res_sig305         : 12; /**< [ 11:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig305         : 12; /**< [ 11:  0](R/W) -- */
        uint64_t ss_res_sig304         : 4;  /**< [ 15: 12](RO) SS_Reserved */
        uint64_t ss_res_sig303         : 12; /**< [ 27: 16](R/W) -- */
        uint64_t ss_res_sig302         : 4;  /**< [ 31: 28](RO) SS_Reserved */
        uint64_t ss_res_sig301         : 12; /**< [ 43: 32](R/W) -- */
        uint64_t ss_res_sig300         : 4;  /**< [ 47: 44](RO) SS_Reserved */
        uint64_t ss_res_sig299         : 12; /**< [ 59: 48](R/W) -- */
        uint64_t ss_res_sig298         : 4;  /**< [ 63: 60](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_62_s cn; */
};
typedef union cavm_bbxf_abx_config_62 cavm_bbxf_abx_config_62_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_62(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_62(uint64_t a)
{
    if (a<=3)
        return 0x87e0423821f0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_62", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_62(a) cavm_bbxf_abx_config_62_t
#define bustype_CAVM_BBXF_ABX_CONFIG_62(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_62(a) "BBXF_ABX_CONFIG_62"
#define busnum_CAVM_BBXF_ABX_CONFIG_62(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_62(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_63
 *
 * BBX6 Configuration Register 63
 * Job Configuration
 */
union cavm_bbxf_abx_config_63
{
    uint64_t u;
    struct cavm_bbxf_abx_config_63_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig306         : 4;  /**< [ 63: 60](RO) SS_Reserved */
        uint64_t ss_res_sig307         : 12; /**< [ 59: 48](R/W) -- */
        uint64_t ss_res_sig308         : 4;  /**< [ 47: 44](RO) SS_Reserved */
        uint64_t ss_res_sig309         : 12; /**< [ 43: 32](R/W) -- */
        uint64_t ss_res_sig310         : 4;  /**< [ 31: 28](RO) SS_Reserved */
        uint64_t ss_res_sig311         : 12; /**< [ 27: 16](R/W) -- */
        uint64_t ss_res_sig312         : 4;  /**< [ 15: 12](RO) SS_Reserved */
        uint64_t ss_res_sig313         : 12; /**< [ 11:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig313         : 12; /**< [ 11:  0](R/W) -- */
        uint64_t ss_res_sig312         : 4;  /**< [ 15: 12](RO) SS_Reserved */
        uint64_t ss_res_sig311         : 12; /**< [ 27: 16](R/W) -- */
        uint64_t ss_res_sig310         : 4;  /**< [ 31: 28](RO) SS_Reserved */
        uint64_t ss_res_sig309         : 12; /**< [ 43: 32](R/W) -- */
        uint64_t ss_res_sig308         : 4;  /**< [ 47: 44](RO) SS_Reserved */
        uint64_t ss_res_sig307         : 12; /**< [ 59: 48](R/W) -- */
        uint64_t ss_res_sig306         : 4;  /**< [ 63: 60](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_63_s cn; */
};
typedef union cavm_bbxf_abx_config_63 cavm_bbxf_abx_config_63_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_63(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_63(uint64_t a)
{
    if (a<=3)
        return 0x87e0423821f8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_63", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_63(a) cavm_bbxf_abx_config_63_t
#define bustype_CAVM_BBXF_ABX_CONFIG_63(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_63(a) "BBXF_ABX_CONFIG_63"
#define busnum_CAVM_BBXF_ABX_CONFIG_63(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_63(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_64
 *
 * BBX6 Configuration Register 64
 * Job Configuration
 */
union cavm_bbxf_abx_config_64
{
    uint64_t u;
    struct cavm_bbxf_abx_config_64_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig314         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig314         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_64_s cn; */
};
typedef union cavm_bbxf_abx_config_64 cavm_bbxf_abx_config_64_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_64(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_64(uint64_t a)
{
    if (a<=3)
        return 0x87e042382200ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_64", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_64(a) cavm_bbxf_abx_config_64_t
#define bustype_CAVM_BBXF_ABX_CONFIG_64(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_64(a) "BBXF_ABX_CONFIG_64"
#define busnum_CAVM_BBXF_ABX_CONFIG_64(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_64(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_65
 *
 * BBX6 Configuration Register 65
 * Job Configuration
 */
union cavm_bbxf_abx_config_65
{
    uint64_t u;
    struct cavm_bbxf_abx_config_65_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig315         : 11; /**< [ 63: 53](RO) SS_Reserved */
        uint64_t ss_res_sig316         : 1;  /**< [ 52: 52](R/W) -- */
        uint64_t ss_res_sig317         : 3;  /**< [ 51: 49](RO) SS_Reserved */
        uint64_t ss_res_sig318         : 49; /**< [ 48:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig318         : 49; /**< [ 48:  0](R/W) -- */
        uint64_t ss_res_sig317         : 3;  /**< [ 51: 49](RO) SS_Reserved */
        uint64_t ss_res_sig316         : 1;  /**< [ 52: 52](R/W) -- */
        uint64_t ss_res_sig315         : 11; /**< [ 63: 53](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_65_s cn; */
};
typedef union cavm_bbxf_abx_config_65 cavm_bbxf_abx_config_65_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_65(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_65(uint64_t a)
{
    if (a<=3)
        return 0x87e042382208ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_65", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_65(a) cavm_bbxf_abx_config_65_t
#define bustype_CAVM_BBXF_ABX_CONFIG_65(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_65(a) "BBXF_ABX_CONFIG_65"
#define busnum_CAVM_BBXF_ABX_CONFIG_65(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_65(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_66
 *
 * BBX6 Configuration Register 66
 * Job Configuration
 */
union cavm_bbxf_abx_config_66
{
    uint64_t u;
    struct cavm_bbxf_abx_config_66_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig319         : 2;  /**< [ 63: 62](RO) SS_Reserved */
        uint64_t ss_res_sig320         : 2;  /**< [ 61: 60](R/W) -- */
        uint64_t ss_res_sig321         : 1;  /**< [ 59: 59](RO) SS_Reserved */
        uint64_t ss_res_sig322         : 11; /**< [ 58: 48](R/W) -- */
        uint64_t ss_res_sig323         : 5;  /**< [ 47: 43](RO) SS_Reserved */
        uint64_t ss_res_sig324         : 43; /**< [ 42:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig324         : 43; /**< [ 42:  0](R/W) -- */
        uint64_t ss_res_sig323         : 5;  /**< [ 47: 43](RO) SS_Reserved */
        uint64_t ss_res_sig322         : 11; /**< [ 58: 48](R/W) -- */
        uint64_t ss_res_sig321         : 1;  /**< [ 59: 59](RO) SS_Reserved */
        uint64_t ss_res_sig320         : 2;  /**< [ 61: 60](R/W) -- */
        uint64_t ss_res_sig319         : 2;  /**< [ 63: 62](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_66_s cn; */
};
typedef union cavm_bbxf_abx_config_66 cavm_bbxf_abx_config_66_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_66(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_66(uint64_t a)
{
    if (a<=3)
        return 0x87e042382210ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_66", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_66(a) cavm_bbxf_abx_config_66_t
#define bustype_CAVM_BBXF_ABX_CONFIG_66(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_66(a) "BBXF_ABX_CONFIG_66"
#define busnum_CAVM_BBXF_ABX_CONFIG_66(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_66(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_67
 *
 * BBX6 Configuration Register 67
 * Job Configuration
 */
union cavm_bbxf_abx_config_67
{
    uint64_t u;
    struct cavm_bbxf_abx_config_67_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig325         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig325         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_67_s cn; */
};
typedef union cavm_bbxf_abx_config_67 cavm_bbxf_abx_config_67_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_67(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_67(uint64_t a)
{
    if (a<=3)
        return 0x87e042382218ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_67", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_67(a) cavm_bbxf_abx_config_67_t
#define bustype_CAVM_BBXF_ABX_CONFIG_67(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_67(a) "BBXF_ABX_CONFIG_67"
#define busnum_CAVM_BBXF_ABX_CONFIG_67(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_67(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_68
 *
 * BBX6 Configuration Register 68
 * Job Configuration
 */
union cavm_bbxf_abx_config_68
{
    uint64_t u;
    struct cavm_bbxf_abx_config_68_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig326         : 36; /**< [ 63: 28](RO) SS_Reserved */
        uint64_t ss_res_sig327         : 28; /**< [ 27:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig327         : 28; /**< [ 27:  0](R/W) -- */
        uint64_t ss_res_sig326         : 36; /**< [ 63: 28](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_68_s cn; */
};
typedef union cavm_bbxf_abx_config_68 cavm_bbxf_abx_config_68_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_68(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_68(uint64_t a)
{
    if (a<=3)
        return 0x87e042382220ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_68", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_68(a) cavm_bbxf_abx_config_68_t
#define bustype_CAVM_BBXF_ABX_CONFIG_68(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_68(a) "BBXF_ABX_CONFIG_68"
#define busnum_CAVM_BBXF_ABX_CONFIG_68(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_68(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_69
 *
 * BBX6 Configuration Register 69
 * Job Configuration
 */
union cavm_bbxf_abx_config_69
{
    uint64_t u;
    struct cavm_bbxf_abx_config_69_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig328         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig328         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_69_s cn; */
};
typedef union cavm_bbxf_abx_config_69 cavm_bbxf_abx_config_69_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_69(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_69(uint64_t a)
{
    if (a<=3)
        return 0x87e042382228ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_69", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_69(a) cavm_bbxf_abx_config_69_t
#define bustype_CAVM_BBXF_ABX_CONFIG_69(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_69(a) "BBXF_ABX_CONFIG_69"
#define busnum_CAVM_BBXF_ABX_CONFIG_69(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_69(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_7
 *
 * BBX6 Configuration Register 7
 * Job Configuration
 */
union cavm_bbxf_abx_config_7
{
    uint64_t u;
    struct cavm_bbxf_abx_config_7_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig49          : 8;  /**< [ 63: 56](RO) SS_Reserved */
        uint64_t ss_res_sig50          : 56; /**< [ 55:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig50          : 56; /**< [ 55:  0](R/W) -- */
        uint64_t ss_res_sig49          : 8;  /**< [ 63: 56](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_7_s cn; */
};
typedef union cavm_bbxf_abx_config_7 cavm_bbxf_abx_config_7_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_7(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_7(uint64_t a)
{
    if (a<=3)
        return 0x87e042382038ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_7", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_7(a) cavm_bbxf_abx_config_7_t
#define bustype_CAVM_BBXF_ABX_CONFIG_7(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_7(a) "BBXF_ABX_CONFIG_7"
#define busnum_CAVM_BBXF_ABX_CONFIG_7(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_7(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_70
 *
 * BBX6 Configuration Register 70
 * Job Configuration
 */
union cavm_bbxf_abx_config_70
{
    uint64_t u;
    struct cavm_bbxf_abx_config_70_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig329         : 8;  /**< [ 63: 56](RO) SS_Reserved */
        uint64_t ss_res_sig330         : 16; /**< [ 55: 40](R/W) -- */
        uint64_t ss_res_sig331         : 1;  /**< [ 39: 39](RO) SS_Reserved */
        uint64_t ss_res_sig332         : 3;  /**< [ 38: 36](R/W) -- */
        uint64_t ss_res_sig333         : 1;  /**< [ 35: 35](RO) SS_Reserved */
        uint64_t ss_res_sig334         : 35; /**< [ 34:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig334         : 35; /**< [ 34:  0](R/W) -- */
        uint64_t ss_res_sig333         : 1;  /**< [ 35: 35](RO) SS_Reserved */
        uint64_t ss_res_sig332         : 3;  /**< [ 38: 36](R/W) -- */
        uint64_t ss_res_sig331         : 1;  /**< [ 39: 39](RO) SS_Reserved */
        uint64_t ss_res_sig330         : 16; /**< [ 55: 40](R/W) -- */
        uint64_t ss_res_sig329         : 8;  /**< [ 63: 56](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_70_s cn; */
};
typedef union cavm_bbxf_abx_config_70 cavm_bbxf_abx_config_70_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_70(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_70(uint64_t a)
{
    if (a<=3)
        return 0x87e042382230ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_70", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_70(a) cavm_bbxf_abx_config_70_t
#define bustype_CAVM_BBXF_ABX_CONFIG_70(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_70(a) "BBXF_ABX_CONFIG_70"
#define busnum_CAVM_BBXF_ABX_CONFIG_70(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_70(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_71
 *
 * BBX6 Configuration Register 71
 * Job Configuration
 */
union cavm_bbxf_abx_config_71
{
    uint64_t u;
    struct cavm_bbxf_abx_config_71_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig335         : 8;  /**< [ 63: 56](RO) SS_Reserved */
        uint64_t ss_res_sig336         : 56; /**< [ 55:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig336         : 56; /**< [ 55:  0](R/W) -- */
        uint64_t ss_res_sig335         : 8;  /**< [ 63: 56](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_71_s cn; */
};
typedef union cavm_bbxf_abx_config_71 cavm_bbxf_abx_config_71_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_71(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_71(uint64_t a)
{
    if (a<=3)
        return 0x87e042382238ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_71", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_71(a) cavm_bbxf_abx_config_71_t
#define bustype_CAVM_BBXF_ABX_CONFIG_71(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_71(a) "BBXF_ABX_CONFIG_71"
#define busnum_CAVM_BBXF_ABX_CONFIG_71(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_71(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_72
 *
 * BBX6 Configuration Register 72
 * Job Configuration
 */
union cavm_bbxf_abx_config_72
{
    uint64_t u;
    struct cavm_bbxf_abx_config_72_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig337         : 4;  /**< [ 63: 60](RO) SS_Reserved */
        uint64_t ss_res_sig338         : 12; /**< [ 59: 48](R/W) -- */
        uint64_t ss_res_sig339         : 4;  /**< [ 47: 44](RO) SS_Reserved */
        uint64_t ss_res_sig340         : 12; /**< [ 43: 32](R/W) -- */
        uint64_t ss_res_sig341         : 4;  /**< [ 31: 28](RO) SS_Reserved */
        uint64_t ss_res_sig342         : 12; /**< [ 27: 16](R/W) -- */
        uint64_t ss_res_sig343         : 4;  /**< [ 15: 12](RO) SS_Reserved */
        uint64_t ss_res_sig344         : 12; /**< [ 11:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig344         : 12; /**< [ 11:  0](R/W) -- */
        uint64_t ss_res_sig343         : 4;  /**< [ 15: 12](RO) SS_Reserved */
        uint64_t ss_res_sig342         : 12; /**< [ 27: 16](R/W) -- */
        uint64_t ss_res_sig341         : 4;  /**< [ 31: 28](RO) SS_Reserved */
        uint64_t ss_res_sig340         : 12; /**< [ 43: 32](R/W) -- */
        uint64_t ss_res_sig339         : 4;  /**< [ 47: 44](RO) SS_Reserved */
        uint64_t ss_res_sig338         : 12; /**< [ 59: 48](R/W) -- */
        uint64_t ss_res_sig337         : 4;  /**< [ 63: 60](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_72_s cn; */
};
typedef union cavm_bbxf_abx_config_72 cavm_bbxf_abx_config_72_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_72(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_72(uint64_t a)
{
    if (a<=3)
        return 0x87e042382240ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_72", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_72(a) cavm_bbxf_abx_config_72_t
#define bustype_CAVM_BBXF_ABX_CONFIG_72(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_72(a) "BBXF_ABX_CONFIG_72"
#define busnum_CAVM_BBXF_ABX_CONFIG_72(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_72(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_73
 *
 * BBX6 Configuration Register 73
 * Job Configuration
 */
union cavm_bbxf_abx_config_73
{
    uint64_t u;
    struct cavm_bbxf_abx_config_73_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig345         : 4;  /**< [ 63: 60](RO) SS_Reserved */
        uint64_t ss_res_sig346         : 12; /**< [ 59: 48](R/W) -- */
        uint64_t ss_res_sig347         : 4;  /**< [ 47: 44](RO) SS_Reserved */
        uint64_t ss_res_sig348         : 12; /**< [ 43: 32](R/W) -- */
        uint64_t ss_res_sig349         : 4;  /**< [ 31: 28](RO) SS_Reserved */
        uint64_t ss_res_sig350         : 12; /**< [ 27: 16](R/W) -- */
        uint64_t ss_res_sig351         : 4;  /**< [ 15: 12](RO) SS_Reserved */
        uint64_t ss_res_sig352         : 12; /**< [ 11:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig352         : 12; /**< [ 11:  0](R/W) -- */
        uint64_t ss_res_sig351         : 4;  /**< [ 15: 12](RO) SS_Reserved */
        uint64_t ss_res_sig350         : 12; /**< [ 27: 16](R/W) -- */
        uint64_t ss_res_sig349         : 4;  /**< [ 31: 28](RO) SS_Reserved */
        uint64_t ss_res_sig348         : 12; /**< [ 43: 32](R/W) -- */
        uint64_t ss_res_sig347         : 4;  /**< [ 47: 44](RO) SS_Reserved */
        uint64_t ss_res_sig346         : 12; /**< [ 59: 48](R/W) -- */
        uint64_t ss_res_sig345         : 4;  /**< [ 63: 60](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_73_s cn; */
};
typedef union cavm_bbxf_abx_config_73 cavm_bbxf_abx_config_73_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_73(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_73(uint64_t a)
{
    if (a<=3)
        return 0x87e042382248ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_73", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_73(a) cavm_bbxf_abx_config_73_t
#define bustype_CAVM_BBXF_ABX_CONFIG_73(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_73(a) "BBXF_ABX_CONFIG_73"
#define busnum_CAVM_BBXF_ABX_CONFIG_73(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_73(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_74
 *
 * BBX6 Configuration Register 74
 * Job Configuration
 */
union cavm_bbxf_abx_config_74
{
    uint64_t u;
    struct cavm_bbxf_abx_config_74_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig353         : 4;  /**< [ 63: 60](RO) SS_Reserved */
        uint64_t ss_res_sig354         : 12; /**< [ 59: 48](R/W) -- */
        uint64_t ss_res_sig355         : 4;  /**< [ 47: 44](RO) SS_Reserved */
        uint64_t ss_res_sig356         : 12; /**< [ 43: 32](R/W) -- */
        uint64_t ss_res_sig357         : 4;  /**< [ 31: 28](RO) SS_Reserved */
        uint64_t ss_res_sig358         : 12; /**< [ 27: 16](R/W) -- */
        uint64_t ss_res_sig359         : 4;  /**< [ 15: 12](RO) SS_Reserved */
        uint64_t ss_res_sig360         : 12; /**< [ 11:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig360         : 12; /**< [ 11:  0](R/W) -- */
        uint64_t ss_res_sig359         : 4;  /**< [ 15: 12](RO) SS_Reserved */
        uint64_t ss_res_sig358         : 12; /**< [ 27: 16](R/W) -- */
        uint64_t ss_res_sig357         : 4;  /**< [ 31: 28](RO) SS_Reserved */
        uint64_t ss_res_sig356         : 12; /**< [ 43: 32](R/W) -- */
        uint64_t ss_res_sig355         : 4;  /**< [ 47: 44](RO) SS_Reserved */
        uint64_t ss_res_sig354         : 12; /**< [ 59: 48](R/W) -- */
        uint64_t ss_res_sig353         : 4;  /**< [ 63: 60](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_74_s cn; */
};
typedef union cavm_bbxf_abx_config_74 cavm_bbxf_abx_config_74_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_74(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_74(uint64_t a)
{
    if (a<=3)
        return 0x87e042382250ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_74", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_74(a) cavm_bbxf_abx_config_74_t
#define bustype_CAVM_BBXF_ABX_CONFIG_74(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_74(a) "BBXF_ABX_CONFIG_74"
#define busnum_CAVM_BBXF_ABX_CONFIG_74(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_74(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_75
 *
 * BBX6 Configuration Register 75
 * Job Configuration
 */
union cavm_bbxf_abx_config_75
{
    uint64_t u;
    struct cavm_bbxf_abx_config_75_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig361         : 4;  /**< [ 63: 60](RO) SS_Reserved */
        uint64_t ss_res_sig362         : 12; /**< [ 59: 48](R/W) -- */
        uint64_t ss_res_sig363         : 4;  /**< [ 47: 44](RO) SS_Reserved */
        uint64_t ss_res_sig364         : 12; /**< [ 43: 32](R/W) -- */
        uint64_t ss_res_sig365         : 4;  /**< [ 31: 28](RO) SS_Reserved */
        uint64_t ss_res_sig366         : 12; /**< [ 27: 16](R/W) -- */
        uint64_t ss_res_sig367         : 4;  /**< [ 15: 12](RO) SS_Reserved */
        uint64_t ss_res_sig368         : 12; /**< [ 11:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig368         : 12; /**< [ 11:  0](R/W) -- */
        uint64_t ss_res_sig367         : 4;  /**< [ 15: 12](RO) SS_Reserved */
        uint64_t ss_res_sig366         : 12; /**< [ 27: 16](R/W) -- */
        uint64_t ss_res_sig365         : 4;  /**< [ 31: 28](RO) SS_Reserved */
        uint64_t ss_res_sig364         : 12; /**< [ 43: 32](R/W) -- */
        uint64_t ss_res_sig363         : 4;  /**< [ 47: 44](RO) SS_Reserved */
        uint64_t ss_res_sig362         : 12; /**< [ 59: 48](R/W) -- */
        uint64_t ss_res_sig361         : 4;  /**< [ 63: 60](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_75_s cn; */
};
typedef union cavm_bbxf_abx_config_75 cavm_bbxf_abx_config_75_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_75(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_75(uint64_t a)
{
    if (a<=3)
        return 0x87e042382258ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_75", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_75(a) cavm_bbxf_abx_config_75_t
#define bustype_CAVM_BBXF_ABX_CONFIG_75(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_75(a) "BBXF_ABX_CONFIG_75"
#define busnum_CAVM_BBXF_ABX_CONFIG_75(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_75(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_76
 *
 * BBX6 Configuration Register 76
 * Job Configuration
 */
union cavm_bbxf_abx_config_76
{
    uint64_t u;
    struct cavm_bbxf_abx_config_76_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig369         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig369         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_76_s cn; */
};
typedef union cavm_bbxf_abx_config_76 cavm_bbxf_abx_config_76_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_76(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_76(uint64_t a)
{
    if (a<=3)
        return 0x87e042382260ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_76", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_76(a) cavm_bbxf_abx_config_76_t
#define bustype_CAVM_BBXF_ABX_CONFIG_76(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_76(a) "BBXF_ABX_CONFIG_76"
#define busnum_CAVM_BBXF_ABX_CONFIG_76(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_76(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_77
 *
 * BBX6 Configuration Register 77
 * Job Configuration
 */
union cavm_bbxf_abx_config_77
{
    uint64_t u;
    struct cavm_bbxf_abx_config_77_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig370         : 11; /**< [ 63: 53](RO) SS_Reserved */
        uint64_t ss_res_sig371         : 1;  /**< [ 52: 52](R/W) -- */
        uint64_t ss_res_sig372         : 3;  /**< [ 51: 49](RO) SS_Reserved */
        uint64_t ss_res_sig373         : 49; /**< [ 48:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig373         : 49; /**< [ 48:  0](R/W) -- */
        uint64_t ss_res_sig372         : 3;  /**< [ 51: 49](RO) SS_Reserved */
        uint64_t ss_res_sig371         : 1;  /**< [ 52: 52](R/W) -- */
        uint64_t ss_res_sig370         : 11; /**< [ 63: 53](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_77_s cn; */
};
typedef union cavm_bbxf_abx_config_77 cavm_bbxf_abx_config_77_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_77(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_77(uint64_t a)
{
    if (a<=3)
        return 0x87e042382268ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_77", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_77(a) cavm_bbxf_abx_config_77_t
#define bustype_CAVM_BBXF_ABX_CONFIG_77(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_77(a) "BBXF_ABX_CONFIG_77"
#define busnum_CAVM_BBXF_ABX_CONFIG_77(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_77(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_78
 *
 * BBX6 Configuration Register 78
 * Job Configuration
 */
union cavm_bbxf_abx_config_78
{
    uint64_t u;
    struct cavm_bbxf_abx_config_78_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig374         : 2;  /**< [ 63: 62](RO) SS_Reserved */
        uint64_t ss_res_sig375         : 2;  /**< [ 61: 60](R/W) -- */
        uint64_t ss_res_sig376         : 1;  /**< [ 59: 59](RO) SS_Reserved */
        uint64_t ss_res_sig377         : 11; /**< [ 58: 48](R/W) -- */
        uint64_t ss_res_sig378         : 5;  /**< [ 47: 43](RO) SS_Reserved */
        uint64_t ss_res_sig379         : 43; /**< [ 42:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig379         : 43; /**< [ 42:  0](R/W) -- */
        uint64_t ss_res_sig378         : 5;  /**< [ 47: 43](RO) SS_Reserved */
        uint64_t ss_res_sig377         : 11; /**< [ 58: 48](R/W) -- */
        uint64_t ss_res_sig376         : 1;  /**< [ 59: 59](RO) SS_Reserved */
        uint64_t ss_res_sig375         : 2;  /**< [ 61: 60](R/W) -- */
        uint64_t ss_res_sig374         : 2;  /**< [ 63: 62](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_78_s cn; */
};
typedef union cavm_bbxf_abx_config_78 cavm_bbxf_abx_config_78_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_78(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_78(uint64_t a)
{
    if (a<=3)
        return 0x87e042382270ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_78", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_78(a) cavm_bbxf_abx_config_78_t
#define bustype_CAVM_BBXF_ABX_CONFIG_78(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_78(a) "BBXF_ABX_CONFIG_78"
#define busnum_CAVM_BBXF_ABX_CONFIG_78(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_78(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_79
 *
 * BBX6 Configuration Register 79
 * Job Configuration
 */
union cavm_bbxf_abx_config_79
{
    uint64_t u;
    struct cavm_bbxf_abx_config_79_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig380         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig380         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_79_s cn; */
};
typedef union cavm_bbxf_abx_config_79 cavm_bbxf_abx_config_79_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_79(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_79(uint64_t a)
{
    if (a<=3)
        return 0x87e042382278ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_79", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_79(a) cavm_bbxf_abx_config_79_t
#define bustype_CAVM_BBXF_ABX_CONFIG_79(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_79(a) "BBXF_ABX_CONFIG_79"
#define busnum_CAVM_BBXF_ABX_CONFIG_79(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_79(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_8
 *
 * BBX6 Configuration Register 8
 * Job Configuration
 */
union cavm_bbxf_abx_config_8
{
    uint64_t u;
    struct cavm_bbxf_abx_config_8_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig51          : 36; /**< [ 63: 28](RO) SS_Reserved */
        uint64_t ss_res_sig52          : 28; /**< [ 27:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig52          : 28; /**< [ 27:  0](R/W) -- */
        uint64_t ss_res_sig51          : 36; /**< [ 63: 28](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_8_s cn; */
};
typedef union cavm_bbxf_abx_config_8 cavm_bbxf_abx_config_8_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_8(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_8(uint64_t a)
{
    if (a<=3)
        return 0x87e042382040ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_8", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_8(a) cavm_bbxf_abx_config_8_t
#define bustype_CAVM_BBXF_ABX_CONFIG_8(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_8(a) "BBXF_ABX_CONFIG_8"
#define busnum_CAVM_BBXF_ABX_CONFIG_8(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_8(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_80
 *
 * BBX6 Configuration Register 80
 * Job Configuration
 */
union cavm_bbxf_abx_config_80
{
    uint64_t u;
    struct cavm_bbxf_abx_config_80_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig381         : 36; /**< [ 63: 28](RO) SS_Reserved */
        uint64_t ss_res_sig382         : 28; /**< [ 27:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig382         : 28; /**< [ 27:  0](R/W) -- */
        uint64_t ss_res_sig381         : 36; /**< [ 63: 28](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_80_s cn; */
};
typedef union cavm_bbxf_abx_config_80 cavm_bbxf_abx_config_80_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_80(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_80(uint64_t a)
{
    if (a<=3)
        return 0x87e042382280ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_80", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_80(a) cavm_bbxf_abx_config_80_t
#define bustype_CAVM_BBXF_ABX_CONFIG_80(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_80(a) "BBXF_ABX_CONFIG_80"
#define busnum_CAVM_BBXF_ABX_CONFIG_80(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_80(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_config_9
 *
 * BBX6 Configuration Register 9
 * Job Configuration
 */
union cavm_bbxf_abx_config_9
{
    uint64_t u;
    struct cavm_bbxf_abx_config_9_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig53          : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig53          : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_config_9_s cn; */
};
typedef union cavm_bbxf_abx_config_9 cavm_bbxf_abx_config_9_t;

static inline uint64_t CAVM_BBXF_ABX_CONFIG_9(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONFIG_9(uint64_t a)
{
    if (a<=3)
        return 0x87e042382048ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONFIG_9", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONFIG_9(a) cavm_bbxf_abx_config_9_t
#define bustype_CAVM_BBXF_ABX_CONFIG_9(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONFIG_9(a) "BBXF_ABX_CONFIG_9"
#define busnum_CAVM_BBXF_ABX_CONFIG_9(a) (a)
#define arguments_CAVM_BBXF_ABX_CONFIG_9(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_control_main
 *
 * BBX6 Main Control Register
 * HAB Control
 */
union cavm_bbxf_abx_control_main
{
    uint64_t u;
    struct cavm_bbxf_abx_control_main_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig0           : 32; /**< [ 63: 32](RO) SS_Reserved */
        uint64_t job_id_0              : 16; /**< [ 31: 16](R/W) Job ID 0 */
        uint64_t ss_res_sig1           : 15; /**< [ 15:  1](RO) SS_Reserved */
        uint64_t job_start_0           : 1;  /**< [  0:  0](R/W) Job start */
#else /* Word 0 - Little Endian */
        uint64_t job_start_0           : 1;  /**< [  0:  0](R/W) Job start */
        uint64_t ss_res_sig1           : 15; /**< [ 15:  1](RO) SS_Reserved */
        uint64_t job_id_0              : 16; /**< [ 31: 16](R/W) Job ID 0 */
        uint64_t ss_res_sig0           : 32; /**< [ 63: 32](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_control_main_s cn; */
};
typedef union cavm_bbxf_abx_control_main cavm_bbxf_abx_control_main_t;

static inline uint64_t CAVM_BBXF_ABX_CONTROL_MAIN(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONTROL_MAIN(uint64_t a)
{
    if (a<=3)
        return 0x87e042380000ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONTROL_MAIN", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONTROL_MAIN(a) cavm_bbxf_abx_control_main_t
#define bustype_CAVM_BBXF_ABX_CONTROL_MAIN(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONTROL_MAIN(a) "BBXF_ABX_CONTROL_MAIN"
#define busnum_CAVM_BBXF_ABX_CONTROL_MAIN(a) (a)
#define arguments_CAVM_BBXF_ABX_CONTROL_MAIN(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_control_status
 *
 * BBX6 Status Register
 * HAB Control
 */
union cavm_bbxf_abx_control_status
{
    uint64_t u;
    struct cavm_bbxf_abx_control_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig2           : 59; /**< [ 63:  5](RO) SS_Reserved */
        uint64_t ready                 : 1;  /**< [  4:  4](RO/H) Ready to receive the next job */
        uint64_t ss_res_sig3           : 3;  /**< [  3:  1](RO) SS_Reserved */
        uint64_t busy                  : 1;  /**< [  0:  0](RO) Busy for CONFIGURATION 0 */
#else /* Word 0 - Little Endian */
        uint64_t busy                  : 1;  /**< [  0:  0](RO) Busy for CONFIGURATION 0 */
        uint64_t ss_res_sig3           : 3;  /**< [  3:  1](RO) SS_Reserved */
        uint64_t ready                 : 1;  /**< [  4:  4](RO/H) Ready to receive the next job */
        uint64_t ss_res_sig2           : 59; /**< [ 63:  5](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_control_status_s cn; */
};
typedef union cavm_bbxf_abx_control_status cavm_bbxf_abx_control_status_t;

static inline uint64_t CAVM_BBXF_ABX_CONTROL_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_CONTROL_STATUS(uint64_t a)
{
    if (a<=3)
        return 0x87e042380018ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_CONTROL_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_CONTROL_STATUS(a) cavm_bbxf_abx_control_status_t
#define bustype_CAVM_BBXF_ABX_CONTROL_STATUS(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_CONTROL_STATUS(a) "BBXF_ABX_CONTROL_STATUS"
#define busnum_CAVM_BBXF_ABX_CONTROL_STATUS(a) (a)
#define arguments_CAVM_BBXF_ABX_CONTROL_STATUS(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_debug_0
 *
 * BBX6 Debug Registers
 * HAB information
 */
union cavm_bbxf_abx_debug_0
{
    uint64_t u;
    struct cavm_bbxf_abx_debug_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig13          : 32; /**< [ 63: 32](RO) SS_Reserved */
        uint64_t hab_info              : 32; /**< [ 31:  0](RO) BBX6 RTL Version */
#else /* Word 0 - Little Endian */
        uint64_t hab_info              : 32; /**< [ 31:  0](RO) BBX6 RTL Version */
        uint64_t ss_res_sig13          : 32; /**< [ 63: 32](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_debug_0_s cn; */
};
typedef union cavm_bbxf_abx_debug_0 cavm_bbxf_abx_debug_0_t;

static inline uint64_t CAVM_BBXF_ABX_DEBUG_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_DEBUG_0(uint64_t a)
{
    if (a<=3)
        return 0x87e042381000ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_DEBUG_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_DEBUG_0(a) cavm_bbxf_abx_debug_0_t
#define bustype_CAVM_BBXF_ABX_DEBUG_0(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_DEBUG_0(a) "BBXF_ABX_DEBUG_0"
#define busnum_CAVM_BBXF_ABX_DEBUG_0(a) (a)
#define arguments_CAVM_BBXF_ABX_DEBUG_0(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_debug_1
 *
 * BBX6 Debug Registers
 * AB Processing Throught for job
 */
union cavm_bbxf_abx_debug_1
{
    uint64_t u;
    struct cavm_bbxf_abx_debug_1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t read_if_throughput_job : 32;/**< [ 63: 32](RO) clock count with 1Ghz through the Read IF */
        uint64_t opr_throughput        : 32; /**< [ 31:  0](RO) clock count with 1Ghz through the Write IF */
#else /* Word 0 - Little Endian */
        uint64_t opr_throughput        : 32; /**< [ 31:  0](RO) clock count with 1Ghz through the Write IF */
        uint64_t read_if_throughput_job : 32;/**< [ 63: 32](RO) clock count with 1Ghz through the Read IF */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_debug_1_s cn; */
};
typedef union cavm_bbxf_abx_debug_1 cavm_bbxf_abx_debug_1_t;

static inline uint64_t CAVM_BBXF_ABX_DEBUG_1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_DEBUG_1(uint64_t a)
{
    if (a<=3)
        return 0x87e042381008ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_DEBUG_1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_DEBUG_1(a) cavm_bbxf_abx_debug_1_t
#define bustype_CAVM_BBXF_ABX_DEBUG_1(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_DEBUG_1(a) "BBXF_ABX_DEBUG_1"
#define busnum_CAVM_BBXF_ABX_DEBUG_1(a) (a)
#define arguments_CAVM_BBXF_ABX_DEBUG_1(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_error_register_0
 *
 * BBX6 Error Registers
 * HAB Control
 */
union cavm_bbxf_abx_error_register_0
{
    uint64_t u;
    struct cavm_bbxf_abx_error_register_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig4           : 32; /**< [ 63: 32](RO) SS_Reserved */
        uint64_t job_id_dma_error      : 16; /**< [ 31: 16](R/W1C) Job ID for DMA error */
        uint64_t ss_res_sig5           : 11; /**< [ 15:  5](RO) SS_Reserved */
        uint64_t rp0_overflow          : 1;  /**< [  4:  4](R/W1C) Read Port 0 Overflow */
        uint64_t ss_res_sig6           : 3;  /**< [  3:  1](RO) SS_Reserved */
        uint64_t rp0_underflow         : 1;  /**< [  0:  0](R/W1C) Read Port 0 Underflow */
#else /* Word 0 - Little Endian */
        uint64_t rp0_underflow         : 1;  /**< [  0:  0](R/W1C) Read Port 0 Underflow */
        uint64_t ss_res_sig6           : 3;  /**< [  3:  1](RO) SS_Reserved */
        uint64_t rp0_overflow          : 1;  /**< [  4:  4](R/W1C) Read Port 0 Overflow */
        uint64_t ss_res_sig5           : 11; /**< [ 15:  5](RO) SS_Reserved */
        uint64_t job_id_dma_error      : 16; /**< [ 31: 16](R/W1C) Job ID for DMA error */
        uint64_t ss_res_sig4           : 32; /**< [ 63: 32](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_error_register_0_s cn; */
};
typedef union cavm_bbxf_abx_error_register_0 cavm_bbxf_abx_error_register_0_t;

static inline uint64_t CAVM_BBXF_ABX_ERROR_REGISTER_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_ERROR_REGISTER_0(uint64_t a)
{
    if (a<=3)
        return 0x87e042380030ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_ERROR_REGISTER_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_ERROR_REGISTER_0(a) cavm_bbxf_abx_error_register_0_t
#define bustype_CAVM_BBXF_ABX_ERROR_REGISTER_0(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_ERROR_REGISTER_0(a) "BBXF_ABX_ERROR_REGISTER_0"
#define busnum_CAVM_BBXF_ABX_ERROR_REGISTER_0(a) (a)
#define arguments_CAVM_BBXF_ABX_ERROR_REGISTER_0(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_error_register_1
 *
 * BBX6 Error Registers
 * HAB Control
 */
union cavm_bbxf_abx_error_register_1
{
    uint64_t u;
    struct cavm_bbxf_abx_error_register_1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig7           : 32; /**< [ 63: 32](RO) SS_Reserved */
        uint64_t inter_err_job_id      : 16; /**< [ 31: 16](R/W1C) internal error jib ID for Error Register 1 */
        uint64_t ss_res_sig8           : 8;  /**< [ 15:  8](RO) SS_Reserved */
        uint64_t sample_size_mis_match : 1;  /**< [  7:  7](R/W1C) sample data size mis-match for setting size */
        uint64_t ss_res_sig9           : 5;  /**< [  6:  2](RO) SS_Reserved */
        uint64_t job_ue_size_over      : 1;  /**< [  1:  1](R/W1C) Data ue over */
        uint64_t job_data_size_over    : 1;  /**< [  0:  0](R/W1C) Data size over */
#else /* Word 0 - Little Endian */
        uint64_t job_data_size_over    : 1;  /**< [  0:  0](R/W1C) Data size over */
        uint64_t job_ue_size_over      : 1;  /**< [  1:  1](R/W1C) Data ue over */
        uint64_t ss_res_sig9           : 5;  /**< [  6:  2](RO) SS_Reserved */
        uint64_t sample_size_mis_match : 1;  /**< [  7:  7](R/W1C) sample data size mis-match for setting size */
        uint64_t ss_res_sig8           : 8;  /**< [ 15:  8](RO) SS_Reserved */
        uint64_t inter_err_job_id      : 16; /**< [ 31: 16](R/W1C) internal error jib ID for Error Register 1 */
        uint64_t ss_res_sig7           : 32; /**< [ 63: 32](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_error_register_1_s cn; */
};
typedef union cavm_bbxf_abx_error_register_1 cavm_bbxf_abx_error_register_1_t;

static inline uint64_t CAVM_BBXF_ABX_ERROR_REGISTER_1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_ERROR_REGISTER_1(uint64_t a)
{
    if (a<=3)
        return 0x87e042380038ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_ERROR_REGISTER_1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_ERROR_REGISTER_1(a) cavm_bbxf_abx_error_register_1_t
#define bustype_CAVM_BBXF_ABX_ERROR_REGISTER_1(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_ERROR_REGISTER_1(a) "BBXF_ABX_ERROR_REGISTER_1"
#define busnum_CAVM_BBXF_ABX_ERROR_REGISTER_1(a) (a)
#define arguments_CAVM_BBXF_ABX_ERROR_REGISTER_1(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_error_register_2
 *
 * BBX6 Error Registers
 * HAB Control
 */
union cavm_bbxf_abx_error_register_2
{
    uint64_t u;
    struct cavm_bbxf_abx_error_register_2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig10          : 59; /**< [ 63:  5](RO) SS_Reserved */
        uint64_t rp0_overflow_en       : 1;  /**< [  4:  4](R/W) Read Port 0 Overflow Error Enable */
        uint64_t ss_res_sig11          : 3;  /**< [  3:  1](RO) SS_Reserved */
        uint64_t rp0_underflow_en      : 1;  /**< [  0:  0](R/W) Read Port 0 Underflow Error Enable */
#else /* Word 0 - Little Endian */
        uint64_t rp0_underflow_en      : 1;  /**< [  0:  0](R/W) Read Port 0 Underflow Error Enable */
        uint64_t ss_res_sig11          : 3;  /**< [  3:  1](RO) SS_Reserved */
        uint64_t rp0_overflow_en       : 1;  /**< [  4:  4](R/W) Read Port 0 Overflow Error Enable */
        uint64_t ss_res_sig10          : 59; /**< [ 63:  5](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_error_register_2_s cn; */
};
typedef union cavm_bbxf_abx_error_register_2 cavm_bbxf_abx_error_register_2_t;

static inline uint64_t CAVM_BBXF_ABX_ERROR_REGISTER_2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_ERROR_REGISTER_2(uint64_t a)
{
    if (a<=3)
        return 0x87e042380040ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_ERROR_REGISTER_2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_ERROR_REGISTER_2(a) cavm_bbxf_abx_error_register_2_t
#define bustype_CAVM_BBXF_ABX_ERROR_REGISTER_2(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_ERROR_REGISTER_2(a) "BBXF_ABX_ERROR_REGISTER_2"
#define busnum_CAVM_BBXF_ABX_ERROR_REGISTER_2(a) (a)
#define arguments_CAVM_BBXF_ABX_ERROR_REGISTER_2(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxf_ab#_error_register_3
 *
 * BBX6 Error Registers
 * HAB Control
 */
union cavm_bbxf_abx_error_register_3
{
    uint64_t u;
    struct cavm_bbxf_abx_error_register_3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig12          : 63; /**< [ 63:  1](RO) SS_Reserved */
        uint64_t hab_error_en          : 1;  /**< [  0:  0](R/W) HAB specific Error Enable */
#else /* Word 0 - Little Endian */
        uint64_t hab_error_en          : 1;  /**< [  0:  0](R/W) HAB specific Error Enable */
        uint64_t ss_res_sig12          : 63; /**< [ 63:  1](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxf_abx_error_register_3_s cn; */
};
typedef union cavm_bbxf_abx_error_register_3 cavm_bbxf_abx_error_register_3_t;

static inline uint64_t CAVM_BBXF_ABX_ERROR_REGISTER_3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXF_ABX_ERROR_REGISTER_3(uint64_t a)
{
    if (a<=3)
        return 0x87e042380048ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXF_ABX_ERROR_REGISTER_3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXF_ABX_ERROR_REGISTER_3(a) cavm_bbxf_abx_error_register_3_t
#define bustype_CAVM_BBXF_ABX_ERROR_REGISTER_3(a) CSR_TYPE_RSL
#define basename_CAVM_BBXF_ABX_ERROR_REGISTER_3(a) "BBXF_ABX_ERROR_REGISTER_3"
#define busnum_CAVM_BBXF_ABX_ERROR_REGISTER_3(a) (a)
#define arguments_CAVM_BBXF_ABX_ERROR_REGISTER_3(a) (a),-1,-1,-1

#endif /* __CAVM_CSRS_BBXF_H__ */
