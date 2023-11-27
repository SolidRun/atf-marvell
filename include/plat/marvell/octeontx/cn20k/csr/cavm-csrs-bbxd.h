#ifndef __CAVM_CSRS_BBXD_H__
#define __CAVM_CSRS_BBXD_H__
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
 * BBXD.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Register (RSL) bbxd_ab#_config_0_0
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_0
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 31; /**< [ 63: 33](RO) SS_Reserved */
        uint64_t ss_rsvd_32            : 17; /**< [ 32: 16](R/W) -- */
        uint64_t ss_rsvd_15            : 12; /**< [ 15:  4](RO) SS_Reserved */
        uint64_t ss_rsvd_3             : 4;  /**< [  3:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_3             : 4;  /**< [  3:  0](R/W) -- */
        uint64_t ss_rsvd_15            : 12; /**< [ 15:  4](RO) SS_Reserved */
        uint64_t ss_rsvd_32            : 17; /**< [ 32: 16](R/W) -- */
        uint64_t ss_rsvd_63            : 31; /**< [ 63: 33](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_0_s cn; */
};
typedef union cavm_bbxd_abx_config_0_0 cavm_bbxd_abx_config_0_0_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_0(uint64_t a)
{
    if (a<=3)
        return 0x87e042282000ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_0(a) cavm_bbxd_abx_config_0_0_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_0(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_0(a) "BBXD_ABX_CONFIG_0_0"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_0(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_0(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_1
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_1
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 4;  /**< [ 63: 60](RO) SS_Reserved */
        uint64_t ss_rsvd_59            : 28; /**< [ 59: 32](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 13; /**< [ 28: 16](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 7;  /**< [ 12:  6](R/W) -- */
        uint64_t ss_rsvd_5             : 1;  /**< [  5:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
        uint64_t ss_rsvd_5             : 1;  /**< [  5:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 7;  /**< [ 12:  6](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 13; /**< [ 28: 16](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_59            : 28; /**< [ 59: 32](R/W) -- */
        uint64_t ss_rsvd_63            : 4;  /**< [ 63: 60](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_1_s cn; */
};
typedef union cavm_bbxd_abx_config_0_1 cavm_bbxd_abx_config_0_1_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_1(uint64_t a)
{
    if (a<=3)
        return 0x87e042282008ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_1(a) cavm_bbxd_abx_config_0_1_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_1(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_1(a) "BBXD_ABX_CONFIG_0_1"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_1(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_1(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_10
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_10
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_10_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_10_s cn; */
};
typedef union cavm_bbxd_abx_config_0_10 cavm_bbxd_abx_config_0_10_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_10(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_10(uint64_t a)
{
    if (a<=3)
        return 0x87e042282050ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_10", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_10(a) cavm_bbxd_abx_config_0_10_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_10(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_10(a) "BBXD_ABX_CONFIG_0_10"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_10(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_10(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_100
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_100
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_100_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_100_s cn; */
};
typedef union cavm_bbxd_abx_config_0_100 cavm_bbxd_abx_config_0_100_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_100(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_100(uint64_t a)
{
    if (a<=3)
        return 0x87e042282320ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_100", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_100(a) cavm_bbxd_abx_config_0_100_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_100(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_100(a) "BBXD_ABX_CONFIG_0_100"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_100(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_100(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_101
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_101
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_101_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 60; /**< [ 63:  4](RO) SS_Reserved */
        uint64_t ss_rsvd_3             : 4;  /**< [  3:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_3             : 4;  /**< [  3:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 60; /**< [ 63:  4](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_101_s cn; */
};
typedef union cavm_bbxd_abx_config_0_101 cavm_bbxd_abx_config_0_101_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_101(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_101(uint64_t a)
{
    if (a<=3)
        return 0x87e042282328ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_101", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_101(a) cavm_bbxd_abx_config_0_101_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_101(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_101(a) "BBXD_ABX_CONFIG_0_101"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_101(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_101(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_102
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_102
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_102_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](R/W) -- */
        uint64_t ss_rsvd_62            : 8;  /**< [ 62: 55](RO) SS_Reserved */
        uint64_t ss_rsvd_54            : 3;  /**< [ 54: 52](R/W) -- */
        uint64_t ss_rsvd_51            : 3;  /**< [ 51: 49](RO) SS_Reserved */
        uint64_t ss_rsvd_48            : 1;  /**< [ 48: 48](R/W) -- */
        uint64_t ss_rsvd_47            : 1;  /**< [ 47: 47](RO) SS_Reserved */
        uint64_t ss_rsvd_46            : 7;  /**< [ 46: 40](R/W) -- */
        uint64_t ss_rsvd_39            : 1;  /**< [ 39: 39](RO) SS_Reserved */
        uint64_t ss_rsvd_38            : 7;  /**< [ 38: 32](R/W) -- */
        uint64_t ss_rsvd_31            : 9;  /**< [ 31: 23](RO) SS_Reserved */
        uint64_t ss_rsvd_22            : 7;  /**< [ 22: 16](R/W) -- */
        uint64_t ss_rsvd_15            : 6;  /**< [ 15: 10](RO) SS_Reserved */
        uint64_t ss_rsvd_9             : 2;  /**< [  9:  8](R/W) -- */
        uint64_t ss_rsvd_7             : 1;  /**< [  7:  7](RO) SS_Reserved */
        uint64_t ss_rsvd_6             : 7;  /**< [  6:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_6             : 7;  /**< [  6:  0](R/W) -- */
        uint64_t ss_rsvd_7             : 1;  /**< [  7:  7](RO) SS_Reserved */
        uint64_t ss_rsvd_9             : 2;  /**< [  9:  8](R/W) -- */
        uint64_t ss_rsvd_15            : 6;  /**< [ 15: 10](RO) SS_Reserved */
        uint64_t ss_rsvd_22            : 7;  /**< [ 22: 16](R/W) -- */
        uint64_t ss_rsvd_31            : 9;  /**< [ 31: 23](RO) SS_Reserved */
        uint64_t ss_rsvd_38            : 7;  /**< [ 38: 32](R/W) -- */
        uint64_t ss_rsvd_39            : 1;  /**< [ 39: 39](RO) SS_Reserved */
        uint64_t ss_rsvd_46            : 7;  /**< [ 46: 40](R/W) -- */
        uint64_t ss_rsvd_47            : 1;  /**< [ 47: 47](RO) SS_Reserved */
        uint64_t ss_rsvd_48            : 1;  /**< [ 48: 48](R/W) -- */
        uint64_t ss_rsvd_51            : 3;  /**< [ 51: 49](RO) SS_Reserved */
        uint64_t ss_rsvd_54            : 3;  /**< [ 54: 52](R/W) -- */
        uint64_t ss_rsvd_62            : 8;  /**< [ 62: 55](RO) SS_Reserved */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_102_s cn; */
};
typedef union cavm_bbxd_abx_config_0_102 cavm_bbxd_abx_config_0_102_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_102(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_102(uint64_t a)
{
    if (a<=3)
        return 0x87e042282330ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_102", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_102(a) cavm_bbxd_abx_config_0_102_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_102(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_102(a) "BBXD_ABX_CONFIG_0_102"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_102(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_102(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_103
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_103
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_103_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 16; /**< [ 63: 48](RO) SS_Reserved */
        uint64_t ss_rsvd_47            : 48; /**< [ 47:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_47            : 48; /**< [ 47:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 16; /**< [ 63: 48](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_103_s cn; */
};
typedef union cavm_bbxd_abx_config_0_103 cavm_bbxd_abx_config_0_103_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_103(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_103(uint64_t a)
{
    if (a<=3)
        return 0x87e042282338ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_103", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_103(a) cavm_bbxd_abx_config_0_103_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_103(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_103(a) "BBXD_ABX_CONFIG_0_103"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_103(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_103(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_104
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_104
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_104_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 16; /**< [ 63: 48](RO) SS_Reserved */
        uint64_t ss_rsvd_47            : 48; /**< [ 47:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_47            : 48; /**< [ 47:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 16; /**< [ 63: 48](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_104_s cn; */
};
typedef union cavm_bbxd_abx_config_0_104 cavm_bbxd_abx_config_0_104_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_104(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_104(uint64_t a)
{
    if (a<=3)
        return 0x87e042282340ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_104", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_104(a) cavm_bbxd_abx_config_0_104_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_104(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_104(a) "BBXD_ABX_CONFIG_0_104"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_104(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_104(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_105
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_105
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_105_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 16; /**< [ 63: 48](RO) SS_Reserved */
        uint64_t ss_rsvd_47            : 48; /**< [ 47:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_47            : 48; /**< [ 47:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 16; /**< [ 63: 48](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_105_s cn; */
};
typedef union cavm_bbxd_abx_config_0_105 cavm_bbxd_abx_config_0_105_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_105(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_105(uint64_t a)
{
    if (a<=3)
        return 0x87e042282348ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_105", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_105(a) cavm_bbxd_abx_config_0_105_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_105(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_105(a) "BBXD_ABX_CONFIG_0_105"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_105(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_105(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_106
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_106
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_106_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 16; /**< [ 63: 48](RO) SS_Reserved */
        uint64_t ss_rsvd_47            : 48; /**< [ 47:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_47            : 48; /**< [ 47:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 16; /**< [ 63: 48](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_106_s cn; */
};
typedef union cavm_bbxd_abx_config_0_106 cavm_bbxd_abx_config_0_106_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_106(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_106(uint64_t a)
{
    if (a<=3)
        return 0x87e042282350ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_106", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_106(a) cavm_bbxd_abx_config_0_106_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_106(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_106(a) "BBXD_ABX_CONFIG_0_106"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_106(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_106(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_107
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_107
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_107_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 16; /**< [ 63: 48](RO) SS_Reserved */
        uint64_t ss_rsvd_47            : 48; /**< [ 47:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_47            : 48; /**< [ 47:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 16; /**< [ 63: 48](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_107_s cn; */
};
typedef union cavm_bbxd_abx_config_0_107 cavm_bbxd_abx_config_0_107_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_107(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_107(uint64_t a)
{
    if (a<=3)
        return 0x87e042282358ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_107", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_107(a) cavm_bbxd_abx_config_0_107_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_107(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_107(a) "BBXD_ABX_CONFIG_0_107"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_107(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_107(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_108
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_108
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_108_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 16; /**< [ 63: 48](RO) SS_Reserved */
        uint64_t ss_rsvd_47            : 48; /**< [ 47:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_47            : 48; /**< [ 47:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 16; /**< [ 63: 48](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_108_s cn; */
};
typedef union cavm_bbxd_abx_config_0_108 cavm_bbxd_abx_config_0_108_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_108(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_108(uint64_t a)
{
    if (a<=3)
        return 0x87e042282360ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_108", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_108(a) cavm_bbxd_abx_config_0_108_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_108(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_108(a) "BBXD_ABX_CONFIG_0_108"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_108(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_108(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_109
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_109
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_109_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 16; /**< [ 63: 48](RO) SS_Reserved */
        uint64_t ss_rsvd_47            : 48; /**< [ 47:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_47            : 48; /**< [ 47:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 16; /**< [ 63: 48](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_109_s cn; */
};
typedef union cavm_bbxd_abx_config_0_109 cavm_bbxd_abx_config_0_109_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_109(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_109(uint64_t a)
{
    if (a<=3)
        return 0x87e042282368ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_109", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_109(a) cavm_bbxd_abx_config_0_109_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_109(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_109(a) "BBXD_ABX_CONFIG_0_109"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_109(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_109(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_11
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_11
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_11_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_11_s cn; */
};
typedef union cavm_bbxd_abx_config_0_11 cavm_bbxd_abx_config_0_11_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_11(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_11(uint64_t a)
{
    if (a<=3)
        return 0x87e042282058ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_11", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_11(a) cavm_bbxd_abx_config_0_11_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_11(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_11(a) "BBXD_ABX_CONFIG_0_11"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_11(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_11(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_110
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_110
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_110_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](R/W) -- */
        uint64_t ss_rsvd_62            : 32; /**< [ 62: 31](RO) SS_Reserved */
        uint64_t ss_rsvd_30            : 31; /**< [ 30:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_30            : 31; /**< [ 30:  0](R/W) -- */
        uint64_t ss_rsvd_62            : 32; /**< [ 62: 31](RO) SS_Reserved */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_110_s cn; */
};
typedef union cavm_bbxd_abx_config_0_110 cavm_bbxd_abx_config_0_110_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_110(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_110(uint64_t a)
{
    if (a<=3)
        return 0x87e042282370ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_110", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_110(a) cavm_bbxd_abx_config_0_110_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_110(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_110(a) "BBXD_ABX_CONFIG_0_110"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_110(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_110(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_12
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_12
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_12_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_12_s cn; */
};
typedef union cavm_bbxd_abx_config_0_12 cavm_bbxd_abx_config_0_12_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_12(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_12(uint64_t a)
{
    if (a<=3)
        return 0x87e042282060ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_12", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_12(a) cavm_bbxd_abx_config_0_12_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_12(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_12(a) "BBXD_ABX_CONFIG_0_12"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_12(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_12(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_13
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_13
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_13_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_13_s cn; */
};
typedef union cavm_bbxd_abx_config_0_13 cavm_bbxd_abx_config_0_13_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_13(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_13(uint64_t a)
{
    if (a<=3)
        return 0x87e042282068ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_13", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_13(a) cavm_bbxd_abx_config_0_13_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_13(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_13(a) "BBXD_ABX_CONFIG_0_13"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_13(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_13(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_14
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_14
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_14_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_14_s cn; */
};
typedef union cavm_bbxd_abx_config_0_14 cavm_bbxd_abx_config_0_14_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_14(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_14(uint64_t a)
{
    if (a<=3)
        return 0x87e042282070ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_14", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_14(a) cavm_bbxd_abx_config_0_14_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_14(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_14(a) "BBXD_ABX_CONFIG_0_14"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_14(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_14(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_15
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_15
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_15_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_15_s cn; */
};
typedef union cavm_bbxd_abx_config_0_15 cavm_bbxd_abx_config_0_15_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_15(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_15(uint64_t a)
{
    if (a<=3)
        return 0x87e042282078ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_15", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_15(a) cavm_bbxd_abx_config_0_15_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_15(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_15(a) "BBXD_ABX_CONFIG_0_15"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_15(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_15(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_16
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_16
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_16_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_16_s cn; */
};
typedef union cavm_bbxd_abx_config_0_16 cavm_bbxd_abx_config_0_16_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_16(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_16(uint64_t a)
{
    if (a<=3)
        return 0x87e042282080ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_16", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_16(a) cavm_bbxd_abx_config_0_16_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_16(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_16(a) "BBXD_ABX_CONFIG_0_16"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_16(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_16(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_17
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_17
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_17_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_17_s cn; */
};
typedef union cavm_bbxd_abx_config_0_17 cavm_bbxd_abx_config_0_17_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_17(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_17(uint64_t a)
{
    if (a<=3)
        return 0x87e042282088ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_17", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_17(a) cavm_bbxd_abx_config_0_17_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_17(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_17(a) "BBXD_ABX_CONFIG_0_17"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_17(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_17(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_18
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_18
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_18_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_18_s cn; */
};
typedef union cavm_bbxd_abx_config_0_18 cavm_bbxd_abx_config_0_18_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_18(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_18(uint64_t a)
{
    if (a<=3)
        return 0x87e042282090ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_18", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_18(a) cavm_bbxd_abx_config_0_18_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_18(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_18(a) "BBXD_ABX_CONFIG_0_18"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_18(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_18(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_19
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_19
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_19_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_19_s cn; */
};
typedef union cavm_bbxd_abx_config_0_19 cavm_bbxd_abx_config_0_19_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_19(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_19(uint64_t a)
{
    if (a<=3)
        return 0x87e042282098ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_19", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_19(a) cavm_bbxd_abx_config_0_19_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_19(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_19(a) "BBXD_ABX_CONFIG_0_19"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_19(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_19(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_2
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_2
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_2_s cn; */
};
typedef union cavm_bbxd_abx_config_0_2 cavm_bbxd_abx_config_0_2_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_2(uint64_t a)
{
    if (a<=3)
        return 0x87e042282010ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_2(a) cavm_bbxd_abx_config_0_2_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_2(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_2(a) "BBXD_ABX_CONFIG_0_2"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_2(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_2(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_20
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_20
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_20_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_20_s cn; */
};
typedef union cavm_bbxd_abx_config_0_20 cavm_bbxd_abx_config_0_20_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_20(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_20(uint64_t a)
{
    if (a<=3)
        return 0x87e0422820a0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_20", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_20(a) cavm_bbxd_abx_config_0_20_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_20(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_20(a) "BBXD_ABX_CONFIG_0_20"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_20(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_20(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_21
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_21
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_21_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_21_s cn; */
};
typedef union cavm_bbxd_abx_config_0_21 cavm_bbxd_abx_config_0_21_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_21(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_21(uint64_t a)
{
    if (a<=3)
        return 0x87e0422820a8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_21", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_21(a) cavm_bbxd_abx_config_0_21_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_21(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_21(a) "BBXD_ABX_CONFIG_0_21"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_21(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_21(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_22
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_22
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_22_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_22_s cn; */
};
typedef union cavm_bbxd_abx_config_0_22 cavm_bbxd_abx_config_0_22_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_22(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_22(uint64_t a)
{
    if (a<=3)
        return 0x87e0422820b0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_22", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_22(a) cavm_bbxd_abx_config_0_22_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_22(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_22(a) "BBXD_ABX_CONFIG_0_22"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_22(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_22(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_23
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_23
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_23_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_23_s cn; */
};
typedef union cavm_bbxd_abx_config_0_23 cavm_bbxd_abx_config_0_23_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_23(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_23(uint64_t a)
{
    if (a<=3)
        return 0x87e0422820b8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_23", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_23(a) cavm_bbxd_abx_config_0_23_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_23(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_23(a) "BBXD_ABX_CONFIG_0_23"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_23(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_23(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_24
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_24
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_24_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_24_s cn; */
};
typedef union cavm_bbxd_abx_config_0_24 cavm_bbxd_abx_config_0_24_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_24(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_24(uint64_t a)
{
    if (a<=3)
        return 0x87e0422820c0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_24", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_24(a) cavm_bbxd_abx_config_0_24_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_24(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_24(a) "BBXD_ABX_CONFIG_0_24"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_24(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_24(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_25
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_25
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_25_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_25_s cn; */
};
typedef union cavm_bbxd_abx_config_0_25 cavm_bbxd_abx_config_0_25_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_25(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_25(uint64_t a)
{
    if (a<=3)
        return 0x87e0422820c8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_25", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_25(a) cavm_bbxd_abx_config_0_25_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_25(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_25(a) "BBXD_ABX_CONFIG_0_25"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_25(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_25(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_26
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_26
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_26_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_26_s cn; */
};
typedef union cavm_bbxd_abx_config_0_26 cavm_bbxd_abx_config_0_26_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_26(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_26(uint64_t a)
{
    if (a<=3)
        return 0x87e0422820d0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_26", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_26(a) cavm_bbxd_abx_config_0_26_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_26(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_26(a) "BBXD_ABX_CONFIG_0_26"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_26(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_26(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_27
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_27
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_27_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_27_s cn; */
};
typedef union cavm_bbxd_abx_config_0_27 cavm_bbxd_abx_config_0_27_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_27(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_27(uint64_t a)
{
    if (a<=3)
        return 0x87e0422820d8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_27", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_27(a) cavm_bbxd_abx_config_0_27_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_27(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_27(a) "BBXD_ABX_CONFIG_0_27"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_27(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_27(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_28
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_28
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_28_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_28_s cn; */
};
typedef union cavm_bbxd_abx_config_0_28 cavm_bbxd_abx_config_0_28_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_28(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_28(uint64_t a)
{
    if (a<=3)
        return 0x87e0422820e0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_28", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_28(a) cavm_bbxd_abx_config_0_28_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_28(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_28(a) "BBXD_ABX_CONFIG_0_28"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_28(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_28(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_29
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_29
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_29_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_29_s cn; */
};
typedef union cavm_bbxd_abx_config_0_29 cavm_bbxd_abx_config_0_29_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_29(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_29(uint64_t a)
{
    if (a<=3)
        return 0x87e0422820e8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_29", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_29(a) cavm_bbxd_abx_config_0_29_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_29(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_29(a) "BBXD_ABX_CONFIG_0_29"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_29(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_29(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_3
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_3
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_3_s cn; */
};
typedef union cavm_bbxd_abx_config_0_3 cavm_bbxd_abx_config_0_3_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_3(uint64_t a)
{
    if (a<=3)
        return 0x87e042282018ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_3(a) cavm_bbxd_abx_config_0_3_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_3(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_3(a) "BBXD_ABX_CONFIG_0_3"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_3(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_3(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_30
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_30
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_30_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_30_s cn; */
};
typedef union cavm_bbxd_abx_config_0_30 cavm_bbxd_abx_config_0_30_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_30(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_30(uint64_t a)
{
    if (a<=3)
        return 0x87e0422820f0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_30", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_30(a) cavm_bbxd_abx_config_0_30_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_30(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_30(a) "BBXD_ABX_CONFIG_0_30"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_30(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_30(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_31
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_31
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_31_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_31_s cn; */
};
typedef union cavm_bbxd_abx_config_0_31 cavm_bbxd_abx_config_0_31_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_31(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_31(uint64_t a)
{
    if (a<=3)
        return 0x87e0422820f8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_31", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_31(a) cavm_bbxd_abx_config_0_31_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_31(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_31(a) "BBXD_ABX_CONFIG_0_31"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_31(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_31(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_32
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_32
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_32_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_32_s cn; */
};
typedef union cavm_bbxd_abx_config_0_32 cavm_bbxd_abx_config_0_32_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_32(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_32(uint64_t a)
{
    if (a<=3)
        return 0x87e042282100ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_32", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_32(a) cavm_bbxd_abx_config_0_32_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_32(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_32(a) "BBXD_ABX_CONFIG_0_32"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_32(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_32(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_33
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_33
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_33_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_33_s cn; */
};
typedef union cavm_bbxd_abx_config_0_33 cavm_bbxd_abx_config_0_33_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_33(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_33(uint64_t a)
{
    if (a<=3)
        return 0x87e042282108ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_33", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_33(a) cavm_bbxd_abx_config_0_33_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_33(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_33(a) "BBXD_ABX_CONFIG_0_33"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_33(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_33(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_34
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_34
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_34_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_34_s cn; */
};
typedef union cavm_bbxd_abx_config_0_34 cavm_bbxd_abx_config_0_34_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_34(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_34(uint64_t a)
{
    if (a<=3)
        return 0x87e042282110ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_34", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_34(a) cavm_bbxd_abx_config_0_34_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_34(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_34(a) "BBXD_ABX_CONFIG_0_34"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_34(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_34(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_35
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_35
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_35_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_35_s cn; */
};
typedef union cavm_bbxd_abx_config_0_35 cavm_bbxd_abx_config_0_35_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_35(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_35(uint64_t a)
{
    if (a<=3)
        return 0x87e042282118ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_35", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_35(a) cavm_bbxd_abx_config_0_35_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_35(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_35(a) "BBXD_ABX_CONFIG_0_35"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_35(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_35(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_36
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_36
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_36_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_36_s cn; */
};
typedef union cavm_bbxd_abx_config_0_36 cavm_bbxd_abx_config_0_36_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_36(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_36(uint64_t a)
{
    if (a<=3)
        return 0x87e042282120ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_36", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_36(a) cavm_bbxd_abx_config_0_36_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_36(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_36(a) "BBXD_ABX_CONFIG_0_36"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_36(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_36(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_37
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_37
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_37_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_37_s cn; */
};
typedef union cavm_bbxd_abx_config_0_37 cavm_bbxd_abx_config_0_37_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_37(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_37(uint64_t a)
{
    if (a<=3)
        return 0x87e042282128ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_37", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_37(a) cavm_bbxd_abx_config_0_37_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_37(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_37(a) "BBXD_ABX_CONFIG_0_37"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_37(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_37(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_38
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_38
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_38_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_38_s cn; */
};
typedef union cavm_bbxd_abx_config_0_38 cavm_bbxd_abx_config_0_38_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_38(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_38(uint64_t a)
{
    if (a<=3)
        return 0x87e042282130ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_38", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_38(a) cavm_bbxd_abx_config_0_38_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_38(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_38(a) "BBXD_ABX_CONFIG_0_38"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_38(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_38(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_39
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_39
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_39_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_39_s cn; */
};
typedef union cavm_bbxd_abx_config_0_39 cavm_bbxd_abx_config_0_39_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_39(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_39(uint64_t a)
{
    if (a<=3)
        return 0x87e042282138ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_39", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_39(a) cavm_bbxd_abx_config_0_39_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_39(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_39(a) "BBXD_ABX_CONFIG_0_39"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_39(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_39(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_4
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_4
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_4_s cn; */
};
typedef union cavm_bbxd_abx_config_0_4 cavm_bbxd_abx_config_0_4_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_4(uint64_t a)
{
    if (a<=3)
        return 0x87e042282020ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_4(a) cavm_bbxd_abx_config_0_4_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_4(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_4(a) "BBXD_ABX_CONFIG_0_4"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_4(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_4(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_40
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_40
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_40_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_40_s cn; */
};
typedef union cavm_bbxd_abx_config_0_40 cavm_bbxd_abx_config_0_40_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_40(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_40(uint64_t a)
{
    if (a<=3)
        return 0x87e042282140ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_40", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_40(a) cavm_bbxd_abx_config_0_40_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_40(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_40(a) "BBXD_ABX_CONFIG_0_40"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_40(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_40(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_41
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_41
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_41_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_41_s cn; */
};
typedef union cavm_bbxd_abx_config_0_41 cavm_bbxd_abx_config_0_41_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_41(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_41(uint64_t a)
{
    if (a<=3)
        return 0x87e042282148ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_41", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_41(a) cavm_bbxd_abx_config_0_41_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_41(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_41(a) "BBXD_ABX_CONFIG_0_41"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_41(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_41(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_42
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_42
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_42_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_42_s cn; */
};
typedef union cavm_bbxd_abx_config_0_42 cavm_bbxd_abx_config_0_42_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_42(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_42(uint64_t a)
{
    if (a<=3)
        return 0x87e042282150ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_42", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_42(a) cavm_bbxd_abx_config_0_42_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_42(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_42(a) "BBXD_ABX_CONFIG_0_42"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_42(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_42(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_43
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_43
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_43_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_43_s cn; */
};
typedef union cavm_bbxd_abx_config_0_43 cavm_bbxd_abx_config_0_43_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_43(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_43(uint64_t a)
{
    if (a<=3)
        return 0x87e042282158ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_43", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_43(a) cavm_bbxd_abx_config_0_43_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_43(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_43(a) "BBXD_ABX_CONFIG_0_43"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_43(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_43(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_44
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_44
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_44_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_44_s cn; */
};
typedef union cavm_bbxd_abx_config_0_44 cavm_bbxd_abx_config_0_44_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_44(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_44(uint64_t a)
{
    if (a<=3)
        return 0x87e042282160ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_44", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_44(a) cavm_bbxd_abx_config_0_44_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_44(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_44(a) "BBXD_ABX_CONFIG_0_44"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_44(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_44(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_45
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_45
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_45_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_45_s cn; */
};
typedef union cavm_bbxd_abx_config_0_45 cavm_bbxd_abx_config_0_45_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_45(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_45(uint64_t a)
{
    if (a<=3)
        return 0x87e042282168ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_45", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_45(a) cavm_bbxd_abx_config_0_45_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_45(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_45(a) "BBXD_ABX_CONFIG_0_45"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_45(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_45(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_46
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_46
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_46_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_46_s cn; */
};
typedef union cavm_bbxd_abx_config_0_46 cavm_bbxd_abx_config_0_46_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_46(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_46(uint64_t a)
{
    if (a<=3)
        return 0x87e042282170ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_46", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_46(a) cavm_bbxd_abx_config_0_46_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_46(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_46(a) "BBXD_ABX_CONFIG_0_46"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_46(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_46(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_47
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_47
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_47_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_47_s cn; */
};
typedef union cavm_bbxd_abx_config_0_47 cavm_bbxd_abx_config_0_47_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_47(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_47(uint64_t a)
{
    if (a<=3)
        return 0x87e042282178ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_47", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_47(a) cavm_bbxd_abx_config_0_47_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_47(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_47(a) "BBXD_ABX_CONFIG_0_47"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_47(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_47(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_48
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_48
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_48_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_48_s cn; */
};
typedef union cavm_bbxd_abx_config_0_48 cavm_bbxd_abx_config_0_48_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_48(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_48(uint64_t a)
{
    if (a<=3)
        return 0x87e042282180ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_48", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_48(a) cavm_bbxd_abx_config_0_48_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_48(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_48(a) "BBXD_ABX_CONFIG_0_48"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_48(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_48(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_49
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_49
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_49_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_49_s cn; */
};
typedef union cavm_bbxd_abx_config_0_49 cavm_bbxd_abx_config_0_49_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_49(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_49(uint64_t a)
{
    if (a<=3)
        return 0x87e042282188ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_49", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_49(a) cavm_bbxd_abx_config_0_49_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_49(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_49(a) "BBXD_ABX_CONFIG_0_49"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_49(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_49(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_5
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_5
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_5_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_5_s cn; */
};
typedef union cavm_bbxd_abx_config_0_5 cavm_bbxd_abx_config_0_5_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_5(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_5(uint64_t a)
{
    if (a<=3)
        return 0x87e042282028ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_5", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_5(a) cavm_bbxd_abx_config_0_5_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_5(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_5(a) "BBXD_ABX_CONFIG_0_5"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_5(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_5(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_50
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_50
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_50_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 16; /**< [ 63: 48](R/W) -- */
        uint64_t ss_rsvd_47            : 7;  /**< [ 47: 41](RO) SS_Reserved */
        uint64_t ss_rsvd_40            : 17; /**< [ 40: 24](R/W) -- */
        uint64_t ss_rsvd_23            : 1;  /**< [ 23: 23](RO) SS_Reserved */
        uint64_t ss_rsvd_22            : 15; /**< [ 22:  8](R/W) -- */
        uint64_t ss_rsvd_7             : 6;  /**< [  7:  2](RO) SS_Reserved */
        uint64_t ss_rsvd_1             : 2;  /**< [  1:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_1             : 2;  /**< [  1:  0](R/W) -- */
        uint64_t ss_rsvd_7             : 6;  /**< [  7:  2](RO) SS_Reserved */
        uint64_t ss_rsvd_22            : 15; /**< [ 22:  8](R/W) -- */
        uint64_t ss_rsvd_23            : 1;  /**< [ 23: 23](RO) SS_Reserved */
        uint64_t ss_rsvd_40            : 17; /**< [ 40: 24](R/W) -- */
        uint64_t ss_rsvd_47            : 7;  /**< [ 47: 41](RO) SS_Reserved */
        uint64_t ss_rsvd_63            : 16; /**< [ 63: 48](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_50_s cn; */
};
typedef union cavm_bbxd_abx_config_0_50 cavm_bbxd_abx_config_0_50_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_50(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_50(uint64_t a)
{
    if (a<=3)
        return 0x87e042282190ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_50", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_50(a) cavm_bbxd_abx_config_0_50_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_50(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_50(a) "BBXD_ABX_CONFIG_0_50"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_50(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_50(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_51
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_51
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_51_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_51_s cn; */
};
typedef union cavm_bbxd_abx_config_0_51 cavm_bbxd_abx_config_0_51_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_51(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_51(uint64_t a)
{
    if (a<=3)
        return 0x87e042282198ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_51", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_51(a) cavm_bbxd_abx_config_0_51_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_51(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_51(a) "BBXD_ABX_CONFIG_0_51"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_51(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_51(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_52
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_52
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_52_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 29; /**< [ 28:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_28            : 29; /**< [ 28:  0](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_52_s cn; */
};
typedef union cavm_bbxd_abx_config_0_52 cavm_bbxd_abx_config_0_52_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_52(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_52(uint64_t a)
{
    if (a<=3)
        return 0x87e0422821a0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_52", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_52(a) cavm_bbxd_abx_config_0_52_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_52(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_52(a) "BBXD_ABX_CONFIG_0_52"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_52(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_52(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_53
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_53
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_53_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_53_s cn; */
};
typedef union cavm_bbxd_abx_config_0_53 cavm_bbxd_abx_config_0_53_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_53(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_53(uint64_t a)
{
    if (a<=3)
        return 0x87e0422821a8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_53", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_53(a) cavm_bbxd_abx_config_0_53_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_53(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_53(a) "BBXD_ABX_CONFIG_0_53"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_53(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_53(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_54
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_54
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_54_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_54_s cn; */
};
typedef union cavm_bbxd_abx_config_0_54 cavm_bbxd_abx_config_0_54_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_54(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_54(uint64_t a)
{
    if (a<=3)
        return 0x87e0422821b0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_54", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_54(a) cavm_bbxd_abx_config_0_54_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_54(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_54(a) "BBXD_ABX_CONFIG_0_54"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_54(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_54(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_55
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_55
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_55_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_55_s cn; */
};
typedef union cavm_bbxd_abx_config_0_55 cavm_bbxd_abx_config_0_55_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_55(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_55(uint64_t a)
{
    if (a<=3)
        return 0x87e0422821b8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_55", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_55(a) cavm_bbxd_abx_config_0_55_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_55(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_55(a) "BBXD_ABX_CONFIG_0_55"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_55(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_55(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_56
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_56
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_56_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_56_s cn; */
};
typedef union cavm_bbxd_abx_config_0_56 cavm_bbxd_abx_config_0_56_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_56(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_56(uint64_t a)
{
    if (a<=3)
        return 0x87e0422821c0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_56", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_56(a) cavm_bbxd_abx_config_0_56_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_56(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_56(a) "BBXD_ABX_CONFIG_0_56"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_56(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_56(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_57
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_57
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_57_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_57_s cn; */
};
typedef union cavm_bbxd_abx_config_0_57 cavm_bbxd_abx_config_0_57_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_57(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_57(uint64_t a)
{
    if (a<=3)
        return 0x87e0422821c8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_57", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_57(a) cavm_bbxd_abx_config_0_57_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_57(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_57(a) "BBXD_ABX_CONFIG_0_57"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_57(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_57(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_58
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_58
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_58_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_58_s cn; */
};
typedef union cavm_bbxd_abx_config_0_58 cavm_bbxd_abx_config_0_58_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_58(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_58(uint64_t a)
{
    if (a<=3)
        return 0x87e0422821d0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_58", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_58(a) cavm_bbxd_abx_config_0_58_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_58(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_58(a) "BBXD_ABX_CONFIG_0_58"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_58(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_58(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_59
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_59
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_59_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_59_s cn; */
};
typedef union cavm_bbxd_abx_config_0_59 cavm_bbxd_abx_config_0_59_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_59(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_59(uint64_t a)
{
    if (a<=3)
        return 0x87e0422821d8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_59", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_59(a) cavm_bbxd_abx_config_0_59_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_59(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_59(a) "BBXD_ABX_CONFIG_0_59"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_59(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_59(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_6
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_6
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_6_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_6_s cn; */
};
typedef union cavm_bbxd_abx_config_0_6 cavm_bbxd_abx_config_0_6_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_6(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_6(uint64_t a)
{
    if (a<=3)
        return 0x87e042282030ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_6", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_6(a) cavm_bbxd_abx_config_0_6_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_6(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_6(a) "BBXD_ABX_CONFIG_0_6"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_6(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_6(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_60
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_60
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_60_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_60_s cn; */
};
typedef union cavm_bbxd_abx_config_0_60 cavm_bbxd_abx_config_0_60_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_60(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_60(uint64_t a)
{
    if (a<=3)
        return 0x87e0422821e0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_60", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_60(a) cavm_bbxd_abx_config_0_60_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_60(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_60(a) "BBXD_ABX_CONFIG_0_60"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_60(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_60(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_61
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_61
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_61_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_61_s cn; */
};
typedef union cavm_bbxd_abx_config_0_61 cavm_bbxd_abx_config_0_61_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_61(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_61(uint64_t a)
{
    if (a<=3)
        return 0x87e0422821e8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_61", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_61(a) cavm_bbxd_abx_config_0_61_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_61(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_61(a) "BBXD_ABX_CONFIG_0_61"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_61(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_61(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_62
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_62
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_62_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_62_s cn; */
};
typedef union cavm_bbxd_abx_config_0_62 cavm_bbxd_abx_config_0_62_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_62(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_62(uint64_t a)
{
    if (a<=3)
        return 0x87e0422821f0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_62", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_62(a) cavm_bbxd_abx_config_0_62_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_62(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_62(a) "BBXD_ABX_CONFIG_0_62"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_62(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_62(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_63
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_63
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_63_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_63_s cn; */
};
typedef union cavm_bbxd_abx_config_0_63 cavm_bbxd_abx_config_0_63_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_63(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_63(uint64_t a)
{
    if (a<=3)
        return 0x87e0422821f8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_63", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_63(a) cavm_bbxd_abx_config_0_63_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_63(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_63(a) "BBXD_ABX_CONFIG_0_63"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_63(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_63(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_64
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_64
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_64_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_64_s cn; */
};
typedef union cavm_bbxd_abx_config_0_64 cavm_bbxd_abx_config_0_64_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_64(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_64(uint64_t a)
{
    if (a<=3)
        return 0x87e042282200ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_64", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_64(a) cavm_bbxd_abx_config_0_64_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_64(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_64(a) "BBXD_ABX_CONFIG_0_64"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_64(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_64(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_65
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_65
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_65_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_65_s cn; */
};
typedef union cavm_bbxd_abx_config_0_65 cavm_bbxd_abx_config_0_65_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_65(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_65(uint64_t a)
{
    if (a<=3)
        return 0x87e042282208ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_65", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_65(a) cavm_bbxd_abx_config_0_65_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_65(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_65(a) "BBXD_ABX_CONFIG_0_65"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_65(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_65(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_66
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_66
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_66_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_66_s cn; */
};
typedef union cavm_bbxd_abx_config_0_66 cavm_bbxd_abx_config_0_66_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_66(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_66(uint64_t a)
{
    if (a<=3)
        return 0x87e042282210ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_66", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_66(a) cavm_bbxd_abx_config_0_66_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_66(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_66(a) "BBXD_ABX_CONFIG_0_66"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_66(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_66(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_67
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_67
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_67_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 8;  /**< [ 63: 56](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_63            : 8;  /**< [ 63: 56](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_67_s cn; */
};
typedef union cavm_bbxd_abx_config_0_67 cavm_bbxd_abx_config_0_67_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_67(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_67(uint64_t a)
{
    if (a<=3)
        return 0x87e042282218ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_67", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_67(a) cavm_bbxd_abx_config_0_67_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_67(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_67(a) "BBXD_ABX_CONFIG_0_67"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_67(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_67(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_68
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_68
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_68_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 8;  /**< [ 63: 56](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_63            : 8;  /**< [ 63: 56](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_68_s cn; */
};
typedef union cavm_bbxd_abx_config_0_68 cavm_bbxd_abx_config_0_68_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_68(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_68(uint64_t a)
{
    if (a<=3)
        return 0x87e042282220ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_68", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_68(a) cavm_bbxd_abx_config_0_68_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_68(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_68(a) "BBXD_ABX_CONFIG_0_68"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_68(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_68(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_69
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_69
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_69_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_69_s cn; */
};
typedef union cavm_bbxd_abx_config_0_69 cavm_bbxd_abx_config_0_69_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_69(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_69(uint64_t a)
{
    if (a<=3)
        return 0x87e042282228ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_69", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_69(a) cavm_bbxd_abx_config_0_69_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_69(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_69(a) "BBXD_ABX_CONFIG_0_69"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_69(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_69(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_7
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_7
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_7_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_7_s cn; */
};
typedef union cavm_bbxd_abx_config_0_7 cavm_bbxd_abx_config_0_7_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_7(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_7(uint64_t a)
{
    if (a<=3)
        return 0x87e042282038ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_7", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_7(a) cavm_bbxd_abx_config_0_7_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_7(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_7(a) "BBXD_ABX_CONFIG_0_7"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_7(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_7(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_70
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_70
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_70_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_70_s cn; */
};
typedef union cavm_bbxd_abx_config_0_70 cavm_bbxd_abx_config_0_70_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_70(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_70(uint64_t a)
{
    if (a<=3)
        return 0x87e042282230ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_70", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_70(a) cavm_bbxd_abx_config_0_70_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_70(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_70(a) "BBXD_ABX_CONFIG_0_70"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_70(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_70(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_71
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_71
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_71_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_71_s cn; */
};
typedef union cavm_bbxd_abx_config_0_71 cavm_bbxd_abx_config_0_71_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_71(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_71(uint64_t a)
{
    if (a<=3)
        return 0x87e042282238ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_71", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_71(a) cavm_bbxd_abx_config_0_71_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_71(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_71(a) "BBXD_ABX_CONFIG_0_71"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_71(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_71(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_72
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_72
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_72_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_72_s cn; */
};
typedef union cavm_bbxd_abx_config_0_72 cavm_bbxd_abx_config_0_72_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_72(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_72(uint64_t a)
{
    if (a<=3)
        return 0x87e042282240ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_72", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_72(a) cavm_bbxd_abx_config_0_72_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_72(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_72(a) "BBXD_ABX_CONFIG_0_72"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_72(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_72(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_73
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_73
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_73_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_73_s cn; */
};
typedef union cavm_bbxd_abx_config_0_73 cavm_bbxd_abx_config_0_73_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_73(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_73(uint64_t a)
{
    if (a<=3)
        return 0x87e042282248ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_73", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_73(a) cavm_bbxd_abx_config_0_73_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_73(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_73(a) "BBXD_ABX_CONFIG_0_73"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_73(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_73(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_74
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_74
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_74_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_74_s cn; */
};
typedef union cavm_bbxd_abx_config_0_74 cavm_bbxd_abx_config_0_74_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_74(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_74(uint64_t a)
{
    if (a<=3)
        return 0x87e042282250ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_74", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_74(a) cavm_bbxd_abx_config_0_74_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_74(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_74(a) "BBXD_ABX_CONFIG_0_74"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_74(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_74(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_75
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_75
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_75_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_75_s cn; */
};
typedef union cavm_bbxd_abx_config_0_75 cavm_bbxd_abx_config_0_75_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_75(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_75(uint64_t a)
{
    if (a<=3)
        return 0x87e042282258ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_75", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_75(a) cavm_bbxd_abx_config_0_75_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_75(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_75(a) "BBXD_ABX_CONFIG_0_75"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_75(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_75(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_76
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_76
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_76_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_76_s cn; */
};
typedef union cavm_bbxd_abx_config_0_76 cavm_bbxd_abx_config_0_76_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_76(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_76(uint64_t a)
{
    if (a<=3)
        return 0x87e042282260ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_76", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_76(a) cavm_bbxd_abx_config_0_76_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_76(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_76(a) "BBXD_ABX_CONFIG_0_76"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_76(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_76(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_77
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_77
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_77_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_77_s cn; */
};
typedef union cavm_bbxd_abx_config_0_77 cavm_bbxd_abx_config_0_77_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_77(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_77(uint64_t a)
{
    if (a<=3)
        return 0x87e042282268ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_77", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_77(a) cavm_bbxd_abx_config_0_77_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_77(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_77(a) "BBXD_ABX_CONFIG_0_77"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_77(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_77(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_78
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_78
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_78_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_78_s cn; */
};
typedef union cavm_bbxd_abx_config_0_78 cavm_bbxd_abx_config_0_78_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_78(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_78(uint64_t a)
{
    if (a<=3)
        return 0x87e042282270ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_78", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_78(a) cavm_bbxd_abx_config_0_78_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_78(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_78(a) "BBXD_ABX_CONFIG_0_78"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_78(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_78(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_79
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_79
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_79_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_79_s cn; */
};
typedef union cavm_bbxd_abx_config_0_79 cavm_bbxd_abx_config_0_79_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_79(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_79(uint64_t a)
{
    if (a<=3)
        return 0x87e042282278ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_79", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_79(a) cavm_bbxd_abx_config_0_79_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_79(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_79(a) "BBXD_ABX_CONFIG_0_79"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_79(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_79(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_8
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_8
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_8_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_8_s cn; */
};
typedef union cavm_bbxd_abx_config_0_8 cavm_bbxd_abx_config_0_8_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_8(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_8(uint64_t a)
{
    if (a<=3)
        return 0x87e042282040ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_8", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_8(a) cavm_bbxd_abx_config_0_8_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_8(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_8(a) "BBXD_ABX_CONFIG_0_8"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_8(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_8(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_80
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_80
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_80_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_80_s cn; */
};
typedef union cavm_bbxd_abx_config_0_80 cavm_bbxd_abx_config_0_80_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_80(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_80(uint64_t a)
{
    if (a<=3)
        return 0x87e042282280ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_80", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_80(a) cavm_bbxd_abx_config_0_80_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_80(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_80(a) "BBXD_ABX_CONFIG_0_80"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_80(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_80(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_81
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_81
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_81_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_81_s cn; */
};
typedef union cavm_bbxd_abx_config_0_81 cavm_bbxd_abx_config_0_81_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_81(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_81(uint64_t a)
{
    if (a<=3)
        return 0x87e042282288ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_81", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_81(a) cavm_bbxd_abx_config_0_81_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_81(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_81(a) "BBXD_ABX_CONFIG_0_81"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_81(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_81(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_82
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_82
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_82_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_82_s cn; */
};
typedef union cavm_bbxd_abx_config_0_82 cavm_bbxd_abx_config_0_82_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_82(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_82(uint64_t a)
{
    if (a<=3)
        return 0x87e042282290ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_82", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_82(a) cavm_bbxd_abx_config_0_82_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_82(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_82(a) "BBXD_ABX_CONFIG_0_82"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_82(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_82(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_83
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_83
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_83_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_83_s cn; */
};
typedef union cavm_bbxd_abx_config_0_83 cavm_bbxd_abx_config_0_83_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_83(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_83(uint64_t a)
{
    if (a<=3)
        return 0x87e042282298ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_83", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_83(a) cavm_bbxd_abx_config_0_83_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_83(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_83(a) "BBXD_ABX_CONFIG_0_83"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_83(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_83(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_84
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_84
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_84_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_84_s cn; */
};
typedef union cavm_bbxd_abx_config_0_84 cavm_bbxd_abx_config_0_84_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_84(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_84(uint64_t a)
{
    if (a<=3)
        return 0x87e0422822a0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_84", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_84(a) cavm_bbxd_abx_config_0_84_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_84(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_84(a) "BBXD_ABX_CONFIG_0_84"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_84(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_84(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_85
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_85
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_85_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_85_s cn; */
};
typedef union cavm_bbxd_abx_config_0_85 cavm_bbxd_abx_config_0_85_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_85(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_85(uint64_t a)
{
    if (a<=3)
        return 0x87e0422822a8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_85", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_85(a) cavm_bbxd_abx_config_0_85_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_85(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_85(a) "BBXD_ABX_CONFIG_0_85"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_85(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_85(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_86
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_86
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_86_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_86_s cn; */
};
typedef union cavm_bbxd_abx_config_0_86 cavm_bbxd_abx_config_0_86_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_86(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_86(uint64_t a)
{
    if (a<=3)
        return 0x87e0422822b0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_86", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_86(a) cavm_bbxd_abx_config_0_86_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_86(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_86(a) "BBXD_ABX_CONFIG_0_86"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_86(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_86(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_87
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_87
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_87_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_87_s cn; */
};
typedef union cavm_bbxd_abx_config_0_87 cavm_bbxd_abx_config_0_87_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_87(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_87(uint64_t a)
{
    if (a<=3)
        return 0x87e0422822b8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_87", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_87(a) cavm_bbxd_abx_config_0_87_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_87(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_87(a) "BBXD_ABX_CONFIG_0_87"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_87(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_87(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_88
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_88
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_88_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_88_s cn; */
};
typedef union cavm_bbxd_abx_config_0_88 cavm_bbxd_abx_config_0_88_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_88(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_88(uint64_t a)
{
    if (a<=3)
        return 0x87e0422822c0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_88", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_88(a) cavm_bbxd_abx_config_0_88_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_88(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_88(a) "BBXD_ABX_CONFIG_0_88"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_88(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_88(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_89
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_89
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_89_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_89_s cn; */
};
typedef union cavm_bbxd_abx_config_0_89 cavm_bbxd_abx_config_0_89_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_89(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_89(uint64_t a)
{
    if (a<=3)
        return 0x87e0422822c8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_89", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_89(a) cavm_bbxd_abx_config_0_89_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_89(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_89(a) "BBXD_ABX_CONFIG_0_89"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_89(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_89(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_9
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_9
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_9_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_9_s cn; */
};
typedef union cavm_bbxd_abx_config_0_9 cavm_bbxd_abx_config_0_9_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_9(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_9(uint64_t a)
{
    if (a<=3)
        return 0x87e042282048ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_9", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_9(a) cavm_bbxd_abx_config_0_9_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_9(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_9(a) "BBXD_ABX_CONFIG_0_9"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_9(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_9(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_90
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_90
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_90_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_90_s cn; */
};
typedef union cavm_bbxd_abx_config_0_90 cavm_bbxd_abx_config_0_90_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_90(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_90(uint64_t a)
{
    if (a<=3)
        return 0x87e0422822d0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_90", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_90(a) cavm_bbxd_abx_config_0_90_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_90(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_90(a) "BBXD_ABX_CONFIG_0_90"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_90(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_90(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_91
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_91
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_91_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_91_s cn; */
};
typedef union cavm_bbxd_abx_config_0_91 cavm_bbxd_abx_config_0_91_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_91(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_91(uint64_t a)
{
    if (a<=3)
        return 0x87e0422822d8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_91", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_91(a) cavm_bbxd_abx_config_0_91_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_91(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_91(a) "BBXD_ABX_CONFIG_0_91"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_91(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_91(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_92
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_92
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_92_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_92_s cn; */
};
typedef union cavm_bbxd_abx_config_0_92 cavm_bbxd_abx_config_0_92_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_92(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_92(uint64_t a)
{
    if (a<=3)
        return 0x87e0422822e0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_92", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_92(a) cavm_bbxd_abx_config_0_92_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_92(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_92(a) "BBXD_ABX_CONFIG_0_92"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_92(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_92(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_93
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_93
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_93_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_93_s cn; */
};
typedef union cavm_bbxd_abx_config_0_93 cavm_bbxd_abx_config_0_93_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_93(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_93(uint64_t a)
{
    if (a<=3)
        return 0x87e0422822e8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_93", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_93(a) cavm_bbxd_abx_config_0_93_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_93(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_93(a) "BBXD_ABX_CONFIG_0_93"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_93(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_93(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_94
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_94
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_94_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_94_s cn; */
};
typedef union cavm_bbxd_abx_config_0_94 cavm_bbxd_abx_config_0_94_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_94(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_94(uint64_t a)
{
    if (a<=3)
        return 0x87e0422822f0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_94", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_94(a) cavm_bbxd_abx_config_0_94_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_94(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_94(a) "BBXD_ABX_CONFIG_0_94"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_94(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_94(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_95
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_95
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_95_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_95_s cn; */
};
typedef union cavm_bbxd_abx_config_0_95 cavm_bbxd_abx_config_0_95_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_95(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_95(uint64_t a)
{
    if (a<=3)
        return 0x87e0422822f8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_95", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_95(a) cavm_bbxd_abx_config_0_95_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_95(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_95(a) "BBXD_ABX_CONFIG_0_95"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_95(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_95(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_96
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_96
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_96_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_96_s cn; */
};
typedef union cavm_bbxd_abx_config_0_96 cavm_bbxd_abx_config_0_96_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_96(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_96(uint64_t a)
{
    if (a<=3)
        return 0x87e042282300ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_96", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_96(a) cavm_bbxd_abx_config_0_96_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_96(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_96(a) "BBXD_ABX_CONFIG_0_96"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_96(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_96(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_97
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_97
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_97_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 16; /**< [ 63: 48](RO) SS_Reserved */
        uint64_t ss_rsvd_47            : 48; /**< [ 47:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_47            : 48; /**< [ 47:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 16; /**< [ 63: 48](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_97_s cn; */
};
typedef union cavm_bbxd_abx_config_0_97 cavm_bbxd_abx_config_0_97_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_97(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_97(uint64_t a)
{
    if (a<=3)
        return 0x87e042282308ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_97", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_97(a) cavm_bbxd_abx_config_0_97_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_97(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_97(a) "BBXD_ABX_CONFIG_0_97"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_97(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_97(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_98
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_98
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_98_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 16; /**< [ 63: 48](RO) SS_Reserved */
        uint64_t ss_rsvd_47            : 48; /**< [ 47:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_47            : 48; /**< [ 47:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 16; /**< [ 63: 48](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_98_s cn; */
};
typedef union cavm_bbxd_abx_config_0_98 cavm_bbxd_abx_config_0_98_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_98(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_98(uint64_t a)
{
    if (a<=3)
        return 0x87e042282310ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_98", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_98(a) cavm_bbxd_abx_config_0_98_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_98(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_98(a) "BBXD_ABX_CONFIG_0_98"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_98(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_98(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_0_99
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_0_99
{
    uint64_t u;
    struct cavm_bbxd_abx_config_0_99_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_0_99_s cn; */
};
typedef union cavm_bbxd_abx_config_0_99 cavm_bbxd_abx_config_0_99_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_99(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_0_99(uint64_t a)
{
    if (a<=3)
        return 0x87e042282318ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_0_99", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_0_99(a) cavm_bbxd_abx_config_0_99_t
#define bustype_CAVM_BBXD_ABX_CONFIG_0_99(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_0_99(a) "BBXD_ABX_CONFIG_0_99"
#define busnum_CAVM_BBXD_ABX_CONFIG_0_99(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_0_99(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_0
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_0
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 31; /**< [ 63: 33](RO) SS_Reserved */
        uint64_t ss_rsvd_32            : 17; /**< [ 32: 16](R/W) -- */
        uint64_t ss_rsvd_15            : 12; /**< [ 15:  4](RO) SS_Reserved */
        uint64_t ss_rsvd_3             : 4;  /**< [  3:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_3             : 4;  /**< [  3:  0](R/W) -- */
        uint64_t ss_rsvd_15            : 12; /**< [ 15:  4](RO) SS_Reserved */
        uint64_t ss_rsvd_32            : 17; /**< [ 32: 16](R/W) -- */
        uint64_t ss_rsvd_63            : 31; /**< [ 63: 33](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_0_s cn; */
};
typedef union cavm_bbxd_abx_config_1_0 cavm_bbxd_abx_config_1_0_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_0(uint64_t a)
{
    if (a<=3)
        return 0x87e042284000ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_0(a) cavm_bbxd_abx_config_1_0_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_0(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_0(a) "BBXD_ABX_CONFIG_1_0"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_0(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_0(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_1
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_1
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 4;  /**< [ 63: 60](RO) SS_Reserved */
        uint64_t ss_rsvd_59            : 28; /**< [ 59: 32](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 13; /**< [ 28: 16](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 7;  /**< [ 12:  6](R/W) -- */
        uint64_t ss_rsvd_5             : 1;  /**< [  5:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
        uint64_t ss_rsvd_5             : 1;  /**< [  5:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 7;  /**< [ 12:  6](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 13; /**< [ 28: 16](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_59            : 28; /**< [ 59: 32](R/W) -- */
        uint64_t ss_rsvd_63            : 4;  /**< [ 63: 60](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_1_s cn; */
};
typedef union cavm_bbxd_abx_config_1_1 cavm_bbxd_abx_config_1_1_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_1(uint64_t a)
{
    if (a<=3)
        return 0x87e042284008ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_1(a) cavm_bbxd_abx_config_1_1_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_1(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_1(a) "BBXD_ABX_CONFIG_1_1"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_1(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_1(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_10
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_10
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_10_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_10_s cn; */
};
typedef union cavm_bbxd_abx_config_1_10 cavm_bbxd_abx_config_1_10_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_10(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_10(uint64_t a)
{
    if (a<=3)
        return 0x87e042284050ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_10", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_10(a) cavm_bbxd_abx_config_1_10_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_10(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_10(a) "BBXD_ABX_CONFIG_1_10"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_10(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_10(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_100
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_100
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_100_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_100_s cn; */
};
typedef union cavm_bbxd_abx_config_1_100 cavm_bbxd_abx_config_1_100_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_100(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_100(uint64_t a)
{
    if (a<=3)
        return 0x87e042284320ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_100", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_100(a) cavm_bbxd_abx_config_1_100_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_100(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_100(a) "BBXD_ABX_CONFIG_1_100"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_100(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_100(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_101
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_101
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_101_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 60; /**< [ 63:  4](RO) SS_Reserved */
        uint64_t ss_rsvd_3             : 4;  /**< [  3:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_3             : 4;  /**< [  3:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 60; /**< [ 63:  4](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_101_s cn; */
};
typedef union cavm_bbxd_abx_config_1_101 cavm_bbxd_abx_config_1_101_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_101(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_101(uint64_t a)
{
    if (a<=3)
        return 0x87e042284328ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_101", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_101(a) cavm_bbxd_abx_config_1_101_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_101(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_101(a) "BBXD_ABX_CONFIG_1_101"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_101(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_101(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_102
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_102
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_102_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](R/W) -- */
        uint64_t ss_rsvd_62            : 8;  /**< [ 62: 55](RO) SS_Reserved */
        uint64_t ss_rsvd_54            : 3;  /**< [ 54: 52](R/W) -- */
        uint64_t ss_rsvd_51            : 3;  /**< [ 51: 49](RO) SS_Reserved */
        uint64_t ss_rsvd_48            : 1;  /**< [ 48: 48](R/W) -- */
        uint64_t ss_rsvd_47            : 1;  /**< [ 47: 47](RO) SS_Reserved */
        uint64_t ss_rsvd_46            : 7;  /**< [ 46: 40](R/W) -- */
        uint64_t ss_rsvd_39            : 1;  /**< [ 39: 39](RO) SS_Reserved */
        uint64_t ss_rsvd_38            : 7;  /**< [ 38: 32](R/W) -- */
        uint64_t ss_rsvd_31            : 9;  /**< [ 31: 23](RO) SS_Reserved */
        uint64_t ss_rsvd_22            : 7;  /**< [ 22: 16](R/W) -- */
        uint64_t ss_rsvd_15            : 6;  /**< [ 15: 10](RO) SS_Reserved */
        uint64_t ss_rsvd_9             : 2;  /**< [  9:  8](R/W) -- */
        uint64_t ss_rsvd_7             : 1;  /**< [  7:  7](RO) SS_Reserved */
        uint64_t ss_rsvd_6             : 7;  /**< [  6:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_6             : 7;  /**< [  6:  0](R/W) -- */
        uint64_t ss_rsvd_7             : 1;  /**< [  7:  7](RO) SS_Reserved */
        uint64_t ss_rsvd_9             : 2;  /**< [  9:  8](R/W) -- */
        uint64_t ss_rsvd_15            : 6;  /**< [ 15: 10](RO) SS_Reserved */
        uint64_t ss_rsvd_22            : 7;  /**< [ 22: 16](R/W) -- */
        uint64_t ss_rsvd_31            : 9;  /**< [ 31: 23](RO) SS_Reserved */
        uint64_t ss_rsvd_38            : 7;  /**< [ 38: 32](R/W) -- */
        uint64_t ss_rsvd_39            : 1;  /**< [ 39: 39](RO) SS_Reserved */
        uint64_t ss_rsvd_46            : 7;  /**< [ 46: 40](R/W) -- */
        uint64_t ss_rsvd_47            : 1;  /**< [ 47: 47](RO) SS_Reserved */
        uint64_t ss_rsvd_48            : 1;  /**< [ 48: 48](R/W) -- */
        uint64_t ss_rsvd_51            : 3;  /**< [ 51: 49](RO) SS_Reserved */
        uint64_t ss_rsvd_54            : 3;  /**< [ 54: 52](R/W) -- */
        uint64_t ss_rsvd_62            : 8;  /**< [ 62: 55](RO) SS_Reserved */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_102_s cn; */
};
typedef union cavm_bbxd_abx_config_1_102 cavm_bbxd_abx_config_1_102_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_102(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_102(uint64_t a)
{
    if (a<=3)
        return 0x87e042284330ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_102", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_102(a) cavm_bbxd_abx_config_1_102_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_102(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_102(a) "BBXD_ABX_CONFIG_1_102"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_102(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_102(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_103
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_103
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_103_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 16; /**< [ 63: 48](RO) SS_Reserved */
        uint64_t ss_rsvd_47            : 48; /**< [ 47:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_47            : 48; /**< [ 47:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 16; /**< [ 63: 48](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_103_s cn; */
};
typedef union cavm_bbxd_abx_config_1_103 cavm_bbxd_abx_config_1_103_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_103(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_103(uint64_t a)
{
    if (a<=3)
        return 0x87e042284338ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_103", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_103(a) cavm_bbxd_abx_config_1_103_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_103(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_103(a) "BBXD_ABX_CONFIG_1_103"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_103(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_103(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_104
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_104
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_104_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 16; /**< [ 63: 48](RO) SS_Reserved */
        uint64_t ss_rsvd_47            : 48; /**< [ 47:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_47            : 48; /**< [ 47:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 16; /**< [ 63: 48](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_104_s cn; */
};
typedef union cavm_bbxd_abx_config_1_104 cavm_bbxd_abx_config_1_104_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_104(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_104(uint64_t a)
{
    if (a<=3)
        return 0x87e042284340ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_104", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_104(a) cavm_bbxd_abx_config_1_104_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_104(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_104(a) "BBXD_ABX_CONFIG_1_104"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_104(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_104(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_105
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_105
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_105_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 16; /**< [ 63: 48](RO) SS_Reserved */
        uint64_t ss_rsvd_47            : 48; /**< [ 47:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_47            : 48; /**< [ 47:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 16; /**< [ 63: 48](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_105_s cn; */
};
typedef union cavm_bbxd_abx_config_1_105 cavm_bbxd_abx_config_1_105_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_105(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_105(uint64_t a)
{
    if (a<=3)
        return 0x87e042284348ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_105", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_105(a) cavm_bbxd_abx_config_1_105_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_105(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_105(a) "BBXD_ABX_CONFIG_1_105"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_105(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_105(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_106
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_106
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_106_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 16; /**< [ 63: 48](RO) SS_Reserved */
        uint64_t ss_rsvd_47            : 48; /**< [ 47:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_47            : 48; /**< [ 47:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 16; /**< [ 63: 48](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_106_s cn; */
};
typedef union cavm_bbxd_abx_config_1_106 cavm_bbxd_abx_config_1_106_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_106(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_106(uint64_t a)
{
    if (a<=3)
        return 0x87e042284350ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_106", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_106(a) cavm_bbxd_abx_config_1_106_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_106(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_106(a) "BBXD_ABX_CONFIG_1_106"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_106(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_106(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_107
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_107
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_107_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 16; /**< [ 63: 48](RO) SS_Reserved */
        uint64_t ss_rsvd_47            : 48; /**< [ 47:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_47            : 48; /**< [ 47:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 16; /**< [ 63: 48](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_107_s cn; */
};
typedef union cavm_bbxd_abx_config_1_107 cavm_bbxd_abx_config_1_107_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_107(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_107(uint64_t a)
{
    if (a<=3)
        return 0x87e042284358ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_107", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_107(a) cavm_bbxd_abx_config_1_107_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_107(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_107(a) "BBXD_ABX_CONFIG_1_107"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_107(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_107(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_108
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_108
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_108_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 16; /**< [ 63: 48](RO) SS_Reserved */
        uint64_t ss_rsvd_47            : 48; /**< [ 47:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_47            : 48; /**< [ 47:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 16; /**< [ 63: 48](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_108_s cn; */
};
typedef union cavm_bbxd_abx_config_1_108 cavm_bbxd_abx_config_1_108_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_108(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_108(uint64_t a)
{
    if (a<=3)
        return 0x87e042284360ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_108", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_108(a) cavm_bbxd_abx_config_1_108_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_108(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_108(a) "BBXD_ABX_CONFIG_1_108"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_108(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_108(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_109
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_109
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_109_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 16; /**< [ 63: 48](RO) SS_Reserved */
        uint64_t ss_rsvd_47            : 48; /**< [ 47:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_47            : 48; /**< [ 47:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 16; /**< [ 63: 48](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_109_s cn; */
};
typedef union cavm_bbxd_abx_config_1_109 cavm_bbxd_abx_config_1_109_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_109(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_109(uint64_t a)
{
    if (a<=3)
        return 0x87e042284368ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_109", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_109(a) cavm_bbxd_abx_config_1_109_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_109(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_109(a) "BBXD_ABX_CONFIG_1_109"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_109(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_109(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_11
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_11
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_11_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_11_s cn; */
};
typedef union cavm_bbxd_abx_config_1_11 cavm_bbxd_abx_config_1_11_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_11(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_11(uint64_t a)
{
    if (a<=3)
        return 0x87e042284058ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_11", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_11(a) cavm_bbxd_abx_config_1_11_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_11(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_11(a) "BBXD_ABX_CONFIG_1_11"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_11(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_11(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_110
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_110
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_110_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](R/W) -- */
        uint64_t ss_rsvd_62            : 32; /**< [ 62: 31](RO) SS_Reserved */
        uint64_t ss_rsvd_30            : 31; /**< [ 30:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_30            : 31; /**< [ 30:  0](R/W) -- */
        uint64_t ss_rsvd_62            : 32; /**< [ 62: 31](RO) SS_Reserved */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_110_s cn; */
};
typedef union cavm_bbxd_abx_config_1_110 cavm_bbxd_abx_config_1_110_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_110(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_110(uint64_t a)
{
    if (a<=3)
        return 0x87e042284370ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_110", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_110(a) cavm_bbxd_abx_config_1_110_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_110(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_110(a) "BBXD_ABX_CONFIG_1_110"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_110(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_110(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_12
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_12
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_12_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_12_s cn; */
};
typedef union cavm_bbxd_abx_config_1_12 cavm_bbxd_abx_config_1_12_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_12(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_12(uint64_t a)
{
    if (a<=3)
        return 0x87e042284060ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_12", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_12(a) cavm_bbxd_abx_config_1_12_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_12(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_12(a) "BBXD_ABX_CONFIG_1_12"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_12(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_12(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_13
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_13
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_13_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_13_s cn; */
};
typedef union cavm_bbxd_abx_config_1_13 cavm_bbxd_abx_config_1_13_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_13(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_13(uint64_t a)
{
    if (a<=3)
        return 0x87e042284068ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_13", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_13(a) cavm_bbxd_abx_config_1_13_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_13(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_13(a) "BBXD_ABX_CONFIG_1_13"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_13(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_13(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_14
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_14
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_14_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_14_s cn; */
};
typedef union cavm_bbxd_abx_config_1_14 cavm_bbxd_abx_config_1_14_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_14(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_14(uint64_t a)
{
    if (a<=3)
        return 0x87e042284070ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_14", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_14(a) cavm_bbxd_abx_config_1_14_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_14(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_14(a) "BBXD_ABX_CONFIG_1_14"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_14(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_14(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_15
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_15
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_15_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_15_s cn; */
};
typedef union cavm_bbxd_abx_config_1_15 cavm_bbxd_abx_config_1_15_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_15(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_15(uint64_t a)
{
    if (a<=3)
        return 0x87e042284078ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_15", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_15(a) cavm_bbxd_abx_config_1_15_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_15(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_15(a) "BBXD_ABX_CONFIG_1_15"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_15(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_15(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_16
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_16
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_16_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_16_s cn; */
};
typedef union cavm_bbxd_abx_config_1_16 cavm_bbxd_abx_config_1_16_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_16(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_16(uint64_t a)
{
    if (a<=3)
        return 0x87e042284080ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_16", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_16(a) cavm_bbxd_abx_config_1_16_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_16(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_16(a) "BBXD_ABX_CONFIG_1_16"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_16(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_16(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_17
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_17
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_17_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_17_s cn; */
};
typedef union cavm_bbxd_abx_config_1_17 cavm_bbxd_abx_config_1_17_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_17(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_17(uint64_t a)
{
    if (a<=3)
        return 0x87e042284088ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_17", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_17(a) cavm_bbxd_abx_config_1_17_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_17(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_17(a) "BBXD_ABX_CONFIG_1_17"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_17(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_17(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_18
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_18
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_18_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_18_s cn; */
};
typedef union cavm_bbxd_abx_config_1_18 cavm_bbxd_abx_config_1_18_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_18(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_18(uint64_t a)
{
    if (a<=3)
        return 0x87e042284090ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_18", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_18(a) cavm_bbxd_abx_config_1_18_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_18(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_18(a) "BBXD_ABX_CONFIG_1_18"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_18(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_18(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_19
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_19
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_19_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_19_s cn; */
};
typedef union cavm_bbxd_abx_config_1_19 cavm_bbxd_abx_config_1_19_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_19(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_19(uint64_t a)
{
    if (a<=3)
        return 0x87e042284098ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_19", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_19(a) cavm_bbxd_abx_config_1_19_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_19(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_19(a) "BBXD_ABX_CONFIG_1_19"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_19(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_19(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_2
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_2
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_2_s cn; */
};
typedef union cavm_bbxd_abx_config_1_2 cavm_bbxd_abx_config_1_2_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_2(uint64_t a)
{
    if (a<=3)
        return 0x87e042284010ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_2(a) cavm_bbxd_abx_config_1_2_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_2(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_2(a) "BBXD_ABX_CONFIG_1_2"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_2(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_2(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_20
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_20
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_20_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_20_s cn; */
};
typedef union cavm_bbxd_abx_config_1_20 cavm_bbxd_abx_config_1_20_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_20(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_20(uint64_t a)
{
    if (a<=3)
        return 0x87e0422840a0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_20", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_20(a) cavm_bbxd_abx_config_1_20_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_20(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_20(a) "BBXD_ABX_CONFIG_1_20"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_20(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_20(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_21
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_21
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_21_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_21_s cn; */
};
typedef union cavm_bbxd_abx_config_1_21 cavm_bbxd_abx_config_1_21_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_21(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_21(uint64_t a)
{
    if (a<=3)
        return 0x87e0422840a8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_21", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_21(a) cavm_bbxd_abx_config_1_21_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_21(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_21(a) "BBXD_ABX_CONFIG_1_21"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_21(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_21(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_22
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_22
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_22_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_22_s cn; */
};
typedef union cavm_bbxd_abx_config_1_22 cavm_bbxd_abx_config_1_22_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_22(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_22(uint64_t a)
{
    if (a<=3)
        return 0x87e0422840b0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_22", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_22(a) cavm_bbxd_abx_config_1_22_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_22(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_22(a) "BBXD_ABX_CONFIG_1_22"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_22(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_22(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_23
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_23
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_23_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_23_s cn; */
};
typedef union cavm_bbxd_abx_config_1_23 cavm_bbxd_abx_config_1_23_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_23(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_23(uint64_t a)
{
    if (a<=3)
        return 0x87e0422840b8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_23", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_23(a) cavm_bbxd_abx_config_1_23_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_23(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_23(a) "BBXD_ABX_CONFIG_1_23"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_23(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_23(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_24
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_24
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_24_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_24_s cn; */
};
typedef union cavm_bbxd_abx_config_1_24 cavm_bbxd_abx_config_1_24_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_24(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_24(uint64_t a)
{
    if (a<=3)
        return 0x87e0422840c0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_24", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_24(a) cavm_bbxd_abx_config_1_24_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_24(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_24(a) "BBXD_ABX_CONFIG_1_24"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_24(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_24(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_25
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_25
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_25_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_25_s cn; */
};
typedef union cavm_bbxd_abx_config_1_25 cavm_bbxd_abx_config_1_25_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_25(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_25(uint64_t a)
{
    if (a<=3)
        return 0x87e0422840c8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_25", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_25(a) cavm_bbxd_abx_config_1_25_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_25(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_25(a) "BBXD_ABX_CONFIG_1_25"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_25(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_25(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_26
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_26
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_26_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_26_s cn; */
};
typedef union cavm_bbxd_abx_config_1_26 cavm_bbxd_abx_config_1_26_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_26(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_26(uint64_t a)
{
    if (a<=3)
        return 0x87e0422840d0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_26", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_26(a) cavm_bbxd_abx_config_1_26_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_26(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_26(a) "BBXD_ABX_CONFIG_1_26"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_26(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_26(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_27
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_27
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_27_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_27_s cn; */
};
typedef union cavm_bbxd_abx_config_1_27 cavm_bbxd_abx_config_1_27_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_27(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_27(uint64_t a)
{
    if (a<=3)
        return 0x87e0422840d8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_27", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_27(a) cavm_bbxd_abx_config_1_27_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_27(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_27(a) "BBXD_ABX_CONFIG_1_27"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_27(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_27(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_28
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_28
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_28_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_28_s cn; */
};
typedef union cavm_bbxd_abx_config_1_28 cavm_bbxd_abx_config_1_28_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_28(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_28(uint64_t a)
{
    if (a<=3)
        return 0x87e0422840e0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_28", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_28(a) cavm_bbxd_abx_config_1_28_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_28(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_28(a) "BBXD_ABX_CONFIG_1_28"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_28(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_28(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_29
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_29
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_29_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_29_s cn; */
};
typedef union cavm_bbxd_abx_config_1_29 cavm_bbxd_abx_config_1_29_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_29(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_29(uint64_t a)
{
    if (a<=3)
        return 0x87e0422840e8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_29", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_29(a) cavm_bbxd_abx_config_1_29_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_29(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_29(a) "BBXD_ABX_CONFIG_1_29"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_29(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_29(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_3
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_3
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_3_s cn; */
};
typedef union cavm_bbxd_abx_config_1_3 cavm_bbxd_abx_config_1_3_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_3(uint64_t a)
{
    if (a<=3)
        return 0x87e042284018ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_3(a) cavm_bbxd_abx_config_1_3_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_3(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_3(a) "BBXD_ABX_CONFIG_1_3"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_3(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_3(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_30
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_30
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_30_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_30_s cn; */
};
typedef union cavm_bbxd_abx_config_1_30 cavm_bbxd_abx_config_1_30_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_30(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_30(uint64_t a)
{
    if (a<=3)
        return 0x87e0422840f0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_30", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_30(a) cavm_bbxd_abx_config_1_30_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_30(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_30(a) "BBXD_ABX_CONFIG_1_30"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_30(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_30(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_31
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_31
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_31_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_31_s cn; */
};
typedef union cavm_bbxd_abx_config_1_31 cavm_bbxd_abx_config_1_31_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_31(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_31(uint64_t a)
{
    if (a<=3)
        return 0x87e0422840f8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_31", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_31(a) cavm_bbxd_abx_config_1_31_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_31(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_31(a) "BBXD_ABX_CONFIG_1_31"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_31(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_31(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_32
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_32
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_32_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_32_s cn; */
};
typedef union cavm_bbxd_abx_config_1_32 cavm_bbxd_abx_config_1_32_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_32(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_32(uint64_t a)
{
    if (a<=3)
        return 0x87e042284100ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_32", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_32(a) cavm_bbxd_abx_config_1_32_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_32(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_32(a) "BBXD_ABX_CONFIG_1_32"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_32(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_32(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_33
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_33
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_33_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_33_s cn; */
};
typedef union cavm_bbxd_abx_config_1_33 cavm_bbxd_abx_config_1_33_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_33(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_33(uint64_t a)
{
    if (a<=3)
        return 0x87e042284108ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_33", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_33(a) cavm_bbxd_abx_config_1_33_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_33(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_33(a) "BBXD_ABX_CONFIG_1_33"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_33(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_33(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_34
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_34
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_34_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_34_s cn; */
};
typedef union cavm_bbxd_abx_config_1_34 cavm_bbxd_abx_config_1_34_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_34(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_34(uint64_t a)
{
    if (a<=3)
        return 0x87e042284110ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_34", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_34(a) cavm_bbxd_abx_config_1_34_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_34(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_34(a) "BBXD_ABX_CONFIG_1_34"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_34(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_34(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_35
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_35
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_35_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_35_s cn; */
};
typedef union cavm_bbxd_abx_config_1_35 cavm_bbxd_abx_config_1_35_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_35(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_35(uint64_t a)
{
    if (a<=3)
        return 0x87e042284118ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_35", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_35(a) cavm_bbxd_abx_config_1_35_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_35(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_35(a) "BBXD_ABX_CONFIG_1_35"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_35(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_35(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_36
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_36
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_36_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_36_s cn; */
};
typedef union cavm_bbxd_abx_config_1_36 cavm_bbxd_abx_config_1_36_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_36(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_36(uint64_t a)
{
    if (a<=3)
        return 0x87e042284120ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_36", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_36(a) cavm_bbxd_abx_config_1_36_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_36(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_36(a) "BBXD_ABX_CONFIG_1_36"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_36(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_36(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_37
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_37
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_37_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_37_s cn; */
};
typedef union cavm_bbxd_abx_config_1_37 cavm_bbxd_abx_config_1_37_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_37(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_37(uint64_t a)
{
    if (a<=3)
        return 0x87e042284128ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_37", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_37(a) cavm_bbxd_abx_config_1_37_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_37(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_37(a) "BBXD_ABX_CONFIG_1_37"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_37(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_37(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_38
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_38
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_38_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_38_s cn; */
};
typedef union cavm_bbxd_abx_config_1_38 cavm_bbxd_abx_config_1_38_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_38(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_38(uint64_t a)
{
    if (a<=3)
        return 0x87e042284130ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_38", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_38(a) cavm_bbxd_abx_config_1_38_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_38(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_38(a) "BBXD_ABX_CONFIG_1_38"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_38(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_38(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_39
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_39
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_39_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_39_s cn; */
};
typedef union cavm_bbxd_abx_config_1_39 cavm_bbxd_abx_config_1_39_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_39(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_39(uint64_t a)
{
    if (a<=3)
        return 0x87e042284138ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_39", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_39(a) cavm_bbxd_abx_config_1_39_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_39(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_39(a) "BBXD_ABX_CONFIG_1_39"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_39(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_39(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_4
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_4
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_4_s cn; */
};
typedef union cavm_bbxd_abx_config_1_4 cavm_bbxd_abx_config_1_4_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_4(uint64_t a)
{
    if (a<=3)
        return 0x87e042284020ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_4(a) cavm_bbxd_abx_config_1_4_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_4(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_4(a) "BBXD_ABX_CONFIG_1_4"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_4(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_4(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_40
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_40
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_40_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_40_s cn; */
};
typedef union cavm_bbxd_abx_config_1_40 cavm_bbxd_abx_config_1_40_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_40(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_40(uint64_t a)
{
    if (a<=3)
        return 0x87e042284140ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_40", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_40(a) cavm_bbxd_abx_config_1_40_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_40(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_40(a) "BBXD_ABX_CONFIG_1_40"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_40(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_40(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_41
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_41
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_41_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_41_s cn; */
};
typedef union cavm_bbxd_abx_config_1_41 cavm_bbxd_abx_config_1_41_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_41(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_41(uint64_t a)
{
    if (a<=3)
        return 0x87e042284148ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_41", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_41(a) cavm_bbxd_abx_config_1_41_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_41(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_41(a) "BBXD_ABX_CONFIG_1_41"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_41(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_41(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_42
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_42
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_42_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_42_s cn; */
};
typedef union cavm_bbxd_abx_config_1_42 cavm_bbxd_abx_config_1_42_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_42(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_42(uint64_t a)
{
    if (a<=3)
        return 0x87e042284150ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_42", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_42(a) cavm_bbxd_abx_config_1_42_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_42(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_42(a) "BBXD_ABX_CONFIG_1_42"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_42(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_42(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_43
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_43
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_43_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_43_s cn; */
};
typedef union cavm_bbxd_abx_config_1_43 cavm_bbxd_abx_config_1_43_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_43(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_43(uint64_t a)
{
    if (a<=3)
        return 0x87e042284158ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_43", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_43(a) cavm_bbxd_abx_config_1_43_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_43(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_43(a) "BBXD_ABX_CONFIG_1_43"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_43(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_43(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_44
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_44
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_44_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_44_s cn; */
};
typedef union cavm_bbxd_abx_config_1_44 cavm_bbxd_abx_config_1_44_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_44(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_44(uint64_t a)
{
    if (a<=3)
        return 0x87e042284160ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_44", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_44(a) cavm_bbxd_abx_config_1_44_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_44(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_44(a) "BBXD_ABX_CONFIG_1_44"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_44(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_44(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_45
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_45
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_45_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_45_s cn; */
};
typedef union cavm_bbxd_abx_config_1_45 cavm_bbxd_abx_config_1_45_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_45(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_45(uint64_t a)
{
    if (a<=3)
        return 0x87e042284168ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_45", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_45(a) cavm_bbxd_abx_config_1_45_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_45(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_45(a) "BBXD_ABX_CONFIG_1_45"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_45(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_45(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_46
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_46
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_46_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_46_s cn; */
};
typedef union cavm_bbxd_abx_config_1_46 cavm_bbxd_abx_config_1_46_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_46(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_46(uint64_t a)
{
    if (a<=3)
        return 0x87e042284170ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_46", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_46(a) cavm_bbxd_abx_config_1_46_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_46(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_46(a) "BBXD_ABX_CONFIG_1_46"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_46(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_46(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_47
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_47
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_47_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_47_s cn; */
};
typedef union cavm_bbxd_abx_config_1_47 cavm_bbxd_abx_config_1_47_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_47(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_47(uint64_t a)
{
    if (a<=3)
        return 0x87e042284178ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_47", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_47(a) cavm_bbxd_abx_config_1_47_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_47(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_47(a) "BBXD_ABX_CONFIG_1_47"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_47(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_47(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_48
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_48
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_48_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_48_s cn; */
};
typedef union cavm_bbxd_abx_config_1_48 cavm_bbxd_abx_config_1_48_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_48(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_48(uint64_t a)
{
    if (a<=3)
        return 0x87e042284180ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_48", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_48(a) cavm_bbxd_abx_config_1_48_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_48(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_48(a) "BBXD_ABX_CONFIG_1_48"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_48(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_48(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_49
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_49
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_49_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_49_s cn; */
};
typedef union cavm_bbxd_abx_config_1_49 cavm_bbxd_abx_config_1_49_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_49(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_49(uint64_t a)
{
    if (a<=3)
        return 0x87e042284188ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_49", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_49(a) cavm_bbxd_abx_config_1_49_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_49(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_49(a) "BBXD_ABX_CONFIG_1_49"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_49(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_49(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_5
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_5
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_5_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_5_s cn; */
};
typedef union cavm_bbxd_abx_config_1_5 cavm_bbxd_abx_config_1_5_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_5(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_5(uint64_t a)
{
    if (a<=3)
        return 0x87e042284028ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_5", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_5(a) cavm_bbxd_abx_config_1_5_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_5(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_5(a) "BBXD_ABX_CONFIG_1_5"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_5(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_5(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_50
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_50
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_50_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 16; /**< [ 63: 48](R/W) -- */
        uint64_t ss_rsvd_47            : 7;  /**< [ 47: 41](RO) SS_Reserved */
        uint64_t ss_rsvd_40            : 17; /**< [ 40: 24](R/W) -- */
        uint64_t ss_rsvd_23            : 1;  /**< [ 23: 23](RO) SS_Reserved */
        uint64_t ss_rsvd_22            : 15; /**< [ 22:  8](R/W) -- */
        uint64_t ss_rsvd_7             : 6;  /**< [  7:  2](RO) SS_Reserved */
        uint64_t ss_rsvd_1             : 2;  /**< [  1:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_1             : 2;  /**< [  1:  0](R/W) -- */
        uint64_t ss_rsvd_7             : 6;  /**< [  7:  2](RO) SS_Reserved */
        uint64_t ss_rsvd_22            : 15; /**< [ 22:  8](R/W) -- */
        uint64_t ss_rsvd_23            : 1;  /**< [ 23: 23](RO) SS_Reserved */
        uint64_t ss_rsvd_40            : 17; /**< [ 40: 24](R/W) -- */
        uint64_t ss_rsvd_47            : 7;  /**< [ 47: 41](RO) SS_Reserved */
        uint64_t ss_rsvd_63            : 16; /**< [ 63: 48](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_50_s cn; */
};
typedef union cavm_bbxd_abx_config_1_50 cavm_bbxd_abx_config_1_50_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_50(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_50(uint64_t a)
{
    if (a<=3)
        return 0x87e042284190ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_50", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_50(a) cavm_bbxd_abx_config_1_50_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_50(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_50(a) "BBXD_ABX_CONFIG_1_50"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_50(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_50(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_51
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_51
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_51_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_51_s cn; */
};
typedef union cavm_bbxd_abx_config_1_51 cavm_bbxd_abx_config_1_51_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_51(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_51(uint64_t a)
{
    if (a<=3)
        return 0x87e042284198ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_51", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_51(a) cavm_bbxd_abx_config_1_51_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_51(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_51(a) "BBXD_ABX_CONFIG_1_51"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_51(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_51(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_52
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_52
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_52_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 29; /**< [ 28:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_28            : 29; /**< [ 28:  0](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_52_s cn; */
};
typedef union cavm_bbxd_abx_config_1_52 cavm_bbxd_abx_config_1_52_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_52(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_52(uint64_t a)
{
    if (a<=3)
        return 0x87e0422841a0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_52", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_52(a) cavm_bbxd_abx_config_1_52_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_52(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_52(a) "BBXD_ABX_CONFIG_1_52"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_52(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_52(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_53
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_53
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_53_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_53_s cn; */
};
typedef union cavm_bbxd_abx_config_1_53 cavm_bbxd_abx_config_1_53_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_53(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_53(uint64_t a)
{
    if (a<=3)
        return 0x87e0422841a8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_53", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_53(a) cavm_bbxd_abx_config_1_53_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_53(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_53(a) "BBXD_ABX_CONFIG_1_53"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_53(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_53(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_54
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_54
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_54_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_54_s cn; */
};
typedef union cavm_bbxd_abx_config_1_54 cavm_bbxd_abx_config_1_54_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_54(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_54(uint64_t a)
{
    if (a<=3)
        return 0x87e0422841b0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_54", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_54(a) cavm_bbxd_abx_config_1_54_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_54(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_54(a) "BBXD_ABX_CONFIG_1_54"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_54(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_54(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_55
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_55
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_55_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_55_s cn; */
};
typedef union cavm_bbxd_abx_config_1_55 cavm_bbxd_abx_config_1_55_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_55(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_55(uint64_t a)
{
    if (a<=3)
        return 0x87e0422841b8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_55", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_55(a) cavm_bbxd_abx_config_1_55_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_55(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_55(a) "BBXD_ABX_CONFIG_1_55"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_55(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_55(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_56
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_56
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_56_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_56_s cn; */
};
typedef union cavm_bbxd_abx_config_1_56 cavm_bbxd_abx_config_1_56_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_56(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_56(uint64_t a)
{
    if (a<=3)
        return 0x87e0422841c0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_56", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_56(a) cavm_bbxd_abx_config_1_56_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_56(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_56(a) "BBXD_ABX_CONFIG_1_56"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_56(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_56(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_57
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_57
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_57_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_57_s cn; */
};
typedef union cavm_bbxd_abx_config_1_57 cavm_bbxd_abx_config_1_57_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_57(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_57(uint64_t a)
{
    if (a<=3)
        return 0x87e0422841c8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_57", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_57(a) cavm_bbxd_abx_config_1_57_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_57(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_57(a) "BBXD_ABX_CONFIG_1_57"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_57(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_57(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_58
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_58
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_58_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_58_s cn; */
};
typedef union cavm_bbxd_abx_config_1_58 cavm_bbxd_abx_config_1_58_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_58(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_58(uint64_t a)
{
    if (a<=3)
        return 0x87e0422841d0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_58", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_58(a) cavm_bbxd_abx_config_1_58_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_58(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_58(a) "BBXD_ABX_CONFIG_1_58"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_58(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_58(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_59
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_59
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_59_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_59_s cn; */
};
typedef union cavm_bbxd_abx_config_1_59 cavm_bbxd_abx_config_1_59_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_59(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_59(uint64_t a)
{
    if (a<=3)
        return 0x87e0422841d8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_59", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_59(a) cavm_bbxd_abx_config_1_59_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_59(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_59(a) "BBXD_ABX_CONFIG_1_59"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_59(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_59(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_6
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_6
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_6_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_6_s cn; */
};
typedef union cavm_bbxd_abx_config_1_6 cavm_bbxd_abx_config_1_6_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_6(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_6(uint64_t a)
{
    if (a<=3)
        return 0x87e042284030ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_6", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_6(a) cavm_bbxd_abx_config_1_6_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_6(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_6(a) "BBXD_ABX_CONFIG_1_6"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_6(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_6(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_60
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_60
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_60_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_60_s cn; */
};
typedef union cavm_bbxd_abx_config_1_60 cavm_bbxd_abx_config_1_60_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_60(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_60(uint64_t a)
{
    if (a<=3)
        return 0x87e0422841e0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_60", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_60(a) cavm_bbxd_abx_config_1_60_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_60(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_60(a) "BBXD_ABX_CONFIG_1_60"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_60(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_60(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_61
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_61
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_61_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_61_s cn; */
};
typedef union cavm_bbxd_abx_config_1_61 cavm_bbxd_abx_config_1_61_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_61(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_61(uint64_t a)
{
    if (a<=3)
        return 0x87e0422841e8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_61", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_61(a) cavm_bbxd_abx_config_1_61_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_61(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_61(a) "BBXD_ABX_CONFIG_1_61"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_61(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_61(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_62
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_62
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_62_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_62_s cn; */
};
typedef union cavm_bbxd_abx_config_1_62 cavm_bbxd_abx_config_1_62_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_62(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_62(uint64_t a)
{
    if (a<=3)
        return 0x87e0422841f0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_62", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_62(a) cavm_bbxd_abx_config_1_62_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_62(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_62(a) "BBXD_ABX_CONFIG_1_62"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_62(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_62(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_63
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_63
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_63_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_63_s cn; */
};
typedef union cavm_bbxd_abx_config_1_63 cavm_bbxd_abx_config_1_63_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_63(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_63(uint64_t a)
{
    if (a<=3)
        return 0x87e0422841f8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_63", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_63(a) cavm_bbxd_abx_config_1_63_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_63(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_63(a) "BBXD_ABX_CONFIG_1_63"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_63(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_63(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_64
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_64
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_64_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_64_s cn; */
};
typedef union cavm_bbxd_abx_config_1_64 cavm_bbxd_abx_config_1_64_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_64(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_64(uint64_t a)
{
    if (a<=3)
        return 0x87e042284200ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_64", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_64(a) cavm_bbxd_abx_config_1_64_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_64(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_64(a) "BBXD_ABX_CONFIG_1_64"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_64(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_64(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_65
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_65
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_65_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_65_s cn; */
};
typedef union cavm_bbxd_abx_config_1_65 cavm_bbxd_abx_config_1_65_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_65(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_65(uint64_t a)
{
    if (a<=3)
        return 0x87e042284208ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_65", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_65(a) cavm_bbxd_abx_config_1_65_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_65(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_65(a) "BBXD_ABX_CONFIG_1_65"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_65(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_65(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_66
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_66
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_66_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_66_s cn; */
};
typedef union cavm_bbxd_abx_config_1_66 cavm_bbxd_abx_config_1_66_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_66(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_66(uint64_t a)
{
    if (a<=3)
        return 0x87e042284210ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_66", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_66(a) cavm_bbxd_abx_config_1_66_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_66(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_66(a) "BBXD_ABX_CONFIG_1_66"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_66(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_66(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_67
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_67
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_67_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 8;  /**< [ 63: 56](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_63            : 8;  /**< [ 63: 56](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_67_s cn; */
};
typedef union cavm_bbxd_abx_config_1_67 cavm_bbxd_abx_config_1_67_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_67(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_67(uint64_t a)
{
    if (a<=3)
        return 0x87e042284218ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_67", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_67(a) cavm_bbxd_abx_config_1_67_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_67(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_67(a) "BBXD_ABX_CONFIG_1_67"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_67(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_67(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_68
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_68
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_68_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 8;  /**< [ 63: 56](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_63            : 8;  /**< [ 63: 56](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_68_s cn; */
};
typedef union cavm_bbxd_abx_config_1_68 cavm_bbxd_abx_config_1_68_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_68(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_68(uint64_t a)
{
    if (a<=3)
        return 0x87e042284220ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_68", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_68(a) cavm_bbxd_abx_config_1_68_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_68(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_68(a) "BBXD_ABX_CONFIG_1_68"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_68(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_68(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_69
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_69
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_69_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_69_s cn; */
};
typedef union cavm_bbxd_abx_config_1_69 cavm_bbxd_abx_config_1_69_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_69(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_69(uint64_t a)
{
    if (a<=3)
        return 0x87e042284228ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_69", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_69(a) cavm_bbxd_abx_config_1_69_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_69(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_69(a) "BBXD_ABX_CONFIG_1_69"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_69(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_69(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_7
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_7
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_7_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_7_s cn; */
};
typedef union cavm_bbxd_abx_config_1_7 cavm_bbxd_abx_config_1_7_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_7(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_7(uint64_t a)
{
    if (a<=3)
        return 0x87e042284038ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_7", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_7(a) cavm_bbxd_abx_config_1_7_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_7(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_7(a) "BBXD_ABX_CONFIG_1_7"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_7(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_7(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_70
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_70
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_70_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_70_s cn; */
};
typedef union cavm_bbxd_abx_config_1_70 cavm_bbxd_abx_config_1_70_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_70(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_70(uint64_t a)
{
    if (a<=3)
        return 0x87e042284230ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_70", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_70(a) cavm_bbxd_abx_config_1_70_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_70(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_70(a) "BBXD_ABX_CONFIG_1_70"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_70(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_70(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_71
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_71
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_71_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_71_s cn; */
};
typedef union cavm_bbxd_abx_config_1_71 cavm_bbxd_abx_config_1_71_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_71(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_71(uint64_t a)
{
    if (a<=3)
        return 0x87e042284238ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_71", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_71(a) cavm_bbxd_abx_config_1_71_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_71(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_71(a) "BBXD_ABX_CONFIG_1_71"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_71(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_71(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_72
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_72
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_72_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_72_s cn; */
};
typedef union cavm_bbxd_abx_config_1_72 cavm_bbxd_abx_config_1_72_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_72(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_72(uint64_t a)
{
    if (a<=3)
        return 0x87e042284240ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_72", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_72(a) cavm_bbxd_abx_config_1_72_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_72(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_72(a) "BBXD_ABX_CONFIG_1_72"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_72(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_72(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_73
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_73
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_73_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_73_s cn; */
};
typedef union cavm_bbxd_abx_config_1_73 cavm_bbxd_abx_config_1_73_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_73(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_73(uint64_t a)
{
    if (a<=3)
        return 0x87e042284248ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_73", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_73(a) cavm_bbxd_abx_config_1_73_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_73(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_73(a) "BBXD_ABX_CONFIG_1_73"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_73(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_73(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_74
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_74
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_74_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_74_s cn; */
};
typedef union cavm_bbxd_abx_config_1_74 cavm_bbxd_abx_config_1_74_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_74(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_74(uint64_t a)
{
    if (a<=3)
        return 0x87e042284250ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_74", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_74(a) cavm_bbxd_abx_config_1_74_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_74(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_74(a) "BBXD_ABX_CONFIG_1_74"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_74(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_74(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_75
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_75
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_75_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_75_s cn; */
};
typedef union cavm_bbxd_abx_config_1_75 cavm_bbxd_abx_config_1_75_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_75(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_75(uint64_t a)
{
    if (a<=3)
        return 0x87e042284258ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_75", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_75(a) cavm_bbxd_abx_config_1_75_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_75(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_75(a) "BBXD_ABX_CONFIG_1_75"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_75(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_75(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_76
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_76
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_76_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_76_s cn; */
};
typedef union cavm_bbxd_abx_config_1_76 cavm_bbxd_abx_config_1_76_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_76(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_76(uint64_t a)
{
    if (a<=3)
        return 0x87e042284260ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_76", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_76(a) cavm_bbxd_abx_config_1_76_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_76(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_76(a) "BBXD_ABX_CONFIG_1_76"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_76(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_76(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_77
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_77
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_77_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_77_s cn; */
};
typedef union cavm_bbxd_abx_config_1_77 cavm_bbxd_abx_config_1_77_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_77(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_77(uint64_t a)
{
    if (a<=3)
        return 0x87e042284268ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_77", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_77(a) cavm_bbxd_abx_config_1_77_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_77(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_77(a) "BBXD_ABX_CONFIG_1_77"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_77(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_77(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_78
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_78
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_78_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_78_s cn; */
};
typedef union cavm_bbxd_abx_config_1_78 cavm_bbxd_abx_config_1_78_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_78(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_78(uint64_t a)
{
    if (a<=3)
        return 0x87e042284270ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_78", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_78(a) cavm_bbxd_abx_config_1_78_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_78(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_78(a) "BBXD_ABX_CONFIG_1_78"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_78(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_78(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_79
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_79
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_79_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_79_s cn; */
};
typedef union cavm_bbxd_abx_config_1_79 cavm_bbxd_abx_config_1_79_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_79(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_79(uint64_t a)
{
    if (a<=3)
        return 0x87e042284278ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_79", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_79(a) cavm_bbxd_abx_config_1_79_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_79(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_79(a) "BBXD_ABX_CONFIG_1_79"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_79(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_79(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_8
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_8
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_8_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_8_s cn; */
};
typedef union cavm_bbxd_abx_config_1_8 cavm_bbxd_abx_config_1_8_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_8(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_8(uint64_t a)
{
    if (a<=3)
        return 0x87e042284040ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_8", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_8(a) cavm_bbxd_abx_config_1_8_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_8(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_8(a) "BBXD_ABX_CONFIG_1_8"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_8(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_8(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_80
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_80
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_80_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_80_s cn; */
};
typedef union cavm_bbxd_abx_config_1_80 cavm_bbxd_abx_config_1_80_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_80(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_80(uint64_t a)
{
    if (a<=3)
        return 0x87e042284280ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_80", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_80(a) cavm_bbxd_abx_config_1_80_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_80(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_80(a) "BBXD_ABX_CONFIG_1_80"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_80(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_80(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_81
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_81
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_81_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_81_s cn; */
};
typedef union cavm_bbxd_abx_config_1_81 cavm_bbxd_abx_config_1_81_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_81(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_81(uint64_t a)
{
    if (a<=3)
        return 0x87e042284288ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_81", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_81(a) cavm_bbxd_abx_config_1_81_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_81(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_81(a) "BBXD_ABX_CONFIG_1_81"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_81(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_81(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_82
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_82
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_82_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_82_s cn; */
};
typedef union cavm_bbxd_abx_config_1_82 cavm_bbxd_abx_config_1_82_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_82(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_82(uint64_t a)
{
    if (a<=3)
        return 0x87e042284290ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_82", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_82(a) cavm_bbxd_abx_config_1_82_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_82(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_82(a) "BBXD_ABX_CONFIG_1_82"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_82(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_82(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_83
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_83
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_83_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_83_s cn; */
};
typedef union cavm_bbxd_abx_config_1_83 cavm_bbxd_abx_config_1_83_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_83(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_83(uint64_t a)
{
    if (a<=3)
        return 0x87e042284298ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_83", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_83(a) cavm_bbxd_abx_config_1_83_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_83(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_83(a) "BBXD_ABX_CONFIG_1_83"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_83(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_83(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_84
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_84
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_84_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_84_s cn; */
};
typedef union cavm_bbxd_abx_config_1_84 cavm_bbxd_abx_config_1_84_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_84(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_84(uint64_t a)
{
    if (a<=3)
        return 0x87e0422842a0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_84", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_84(a) cavm_bbxd_abx_config_1_84_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_84(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_84(a) "BBXD_ABX_CONFIG_1_84"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_84(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_84(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_85
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_85
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_85_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_85_s cn; */
};
typedef union cavm_bbxd_abx_config_1_85 cavm_bbxd_abx_config_1_85_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_85(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_85(uint64_t a)
{
    if (a<=3)
        return 0x87e0422842a8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_85", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_85(a) cavm_bbxd_abx_config_1_85_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_85(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_85(a) "BBXD_ABX_CONFIG_1_85"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_85(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_85(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_86
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_86
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_86_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_86_s cn; */
};
typedef union cavm_bbxd_abx_config_1_86 cavm_bbxd_abx_config_1_86_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_86(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_86(uint64_t a)
{
    if (a<=3)
        return 0x87e0422842b0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_86", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_86(a) cavm_bbxd_abx_config_1_86_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_86(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_86(a) "BBXD_ABX_CONFIG_1_86"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_86(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_86(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_87
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_87
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_87_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_87_s cn; */
};
typedef union cavm_bbxd_abx_config_1_87 cavm_bbxd_abx_config_1_87_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_87(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_87(uint64_t a)
{
    if (a<=3)
        return 0x87e0422842b8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_87", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_87(a) cavm_bbxd_abx_config_1_87_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_87(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_87(a) "BBXD_ABX_CONFIG_1_87"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_87(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_87(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_88
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_88
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_88_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_88_s cn; */
};
typedef union cavm_bbxd_abx_config_1_88 cavm_bbxd_abx_config_1_88_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_88(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_88(uint64_t a)
{
    if (a<=3)
        return 0x87e0422842c0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_88", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_88(a) cavm_bbxd_abx_config_1_88_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_88(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_88(a) "BBXD_ABX_CONFIG_1_88"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_88(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_88(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_89
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_89
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_89_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_89_s cn; */
};
typedef union cavm_bbxd_abx_config_1_89 cavm_bbxd_abx_config_1_89_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_89(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_89(uint64_t a)
{
    if (a<=3)
        return 0x87e0422842c8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_89", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_89(a) cavm_bbxd_abx_config_1_89_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_89(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_89(a) "BBXD_ABX_CONFIG_1_89"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_89(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_89(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_9
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_9
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_9_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_9_s cn; */
};
typedef union cavm_bbxd_abx_config_1_9 cavm_bbxd_abx_config_1_9_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_9(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_9(uint64_t a)
{
    if (a<=3)
        return 0x87e042284048ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_9", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_9(a) cavm_bbxd_abx_config_1_9_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_9(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_9(a) "BBXD_ABX_CONFIG_1_9"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_9(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_9(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_90
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_90
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_90_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_90_s cn; */
};
typedef union cavm_bbxd_abx_config_1_90 cavm_bbxd_abx_config_1_90_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_90(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_90(uint64_t a)
{
    if (a<=3)
        return 0x87e0422842d0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_90", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_90(a) cavm_bbxd_abx_config_1_90_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_90(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_90(a) "BBXD_ABX_CONFIG_1_90"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_90(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_90(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_91
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_91
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_91_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_91_s cn; */
};
typedef union cavm_bbxd_abx_config_1_91 cavm_bbxd_abx_config_1_91_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_91(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_91(uint64_t a)
{
    if (a<=3)
        return 0x87e0422842d8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_91", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_91(a) cavm_bbxd_abx_config_1_91_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_91(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_91(a) "BBXD_ABX_CONFIG_1_91"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_91(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_91(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_92
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_92
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_92_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_92_s cn; */
};
typedef union cavm_bbxd_abx_config_1_92 cavm_bbxd_abx_config_1_92_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_92(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_92(uint64_t a)
{
    if (a<=3)
        return 0x87e0422842e0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_92", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_92(a) cavm_bbxd_abx_config_1_92_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_92(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_92(a) "BBXD_ABX_CONFIG_1_92"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_92(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_92(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_93
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_93
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_93_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_93_s cn; */
};
typedef union cavm_bbxd_abx_config_1_93 cavm_bbxd_abx_config_1_93_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_93(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_93(uint64_t a)
{
    if (a<=3)
        return 0x87e0422842e8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_93", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_93(a) cavm_bbxd_abx_config_1_93_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_93(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_93(a) "BBXD_ABX_CONFIG_1_93"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_93(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_93(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_94
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_94
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_94_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_94_s cn; */
};
typedef union cavm_bbxd_abx_config_1_94 cavm_bbxd_abx_config_1_94_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_94(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_94(uint64_t a)
{
    if (a<=3)
        return 0x87e0422842f0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_94", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_94(a) cavm_bbxd_abx_config_1_94_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_94(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_94(a) "BBXD_ABX_CONFIG_1_94"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_94(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_94(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_95
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_95
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_95_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_95_s cn; */
};
typedef union cavm_bbxd_abx_config_1_95 cavm_bbxd_abx_config_1_95_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_95(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_95(uint64_t a)
{
    if (a<=3)
        return 0x87e0422842f8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_95", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_95(a) cavm_bbxd_abx_config_1_95_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_95(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_95(a) "BBXD_ABX_CONFIG_1_95"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_95(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_95(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_96
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_96
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_96_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_96_s cn; */
};
typedef union cavm_bbxd_abx_config_1_96 cavm_bbxd_abx_config_1_96_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_96(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_96(uint64_t a)
{
    if (a<=3)
        return 0x87e042284300ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_96", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_96(a) cavm_bbxd_abx_config_1_96_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_96(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_96(a) "BBXD_ABX_CONFIG_1_96"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_96(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_96(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_97
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_97
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_97_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 16; /**< [ 63: 48](RO) SS_Reserved */
        uint64_t ss_rsvd_47            : 48; /**< [ 47:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_47            : 48; /**< [ 47:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 16; /**< [ 63: 48](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_97_s cn; */
};
typedef union cavm_bbxd_abx_config_1_97 cavm_bbxd_abx_config_1_97_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_97(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_97(uint64_t a)
{
    if (a<=3)
        return 0x87e042284308ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_97", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_97(a) cavm_bbxd_abx_config_1_97_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_97(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_97(a) "BBXD_ABX_CONFIG_1_97"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_97(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_97(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_98
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_98
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_98_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 16; /**< [ 63: 48](RO) SS_Reserved */
        uint64_t ss_rsvd_47            : 48; /**< [ 47:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_47            : 48; /**< [ 47:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 16; /**< [ 63: 48](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_98_s cn; */
};
typedef union cavm_bbxd_abx_config_1_98 cavm_bbxd_abx_config_1_98_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_98(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_98(uint64_t a)
{
    if (a<=3)
        return 0x87e042284310ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_98", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_98(a) cavm_bbxd_abx_config_1_98_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_98(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_98(a) "BBXD_ABX_CONFIG_1_98"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_98(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_98(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_1_99
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_1_99
{
    uint64_t u;
    struct cavm_bbxd_abx_config_1_99_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_1_99_s cn; */
};
typedef union cavm_bbxd_abx_config_1_99 cavm_bbxd_abx_config_1_99_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_99(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_1_99(uint64_t a)
{
    if (a<=3)
        return 0x87e042284318ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_1_99", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_1_99(a) cavm_bbxd_abx_config_1_99_t
#define bustype_CAVM_BBXD_ABX_CONFIG_1_99(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_1_99(a) "BBXD_ABX_CONFIG_1_99"
#define busnum_CAVM_BBXD_ABX_CONFIG_1_99(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_1_99(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_0
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_0
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 31; /**< [ 63: 33](RO) SS_Reserved */
        uint64_t ss_rsvd_32            : 17; /**< [ 32: 16](R/W) -- */
        uint64_t ss_rsvd_15            : 12; /**< [ 15:  4](RO) SS_Reserved */
        uint64_t ss_rsvd_3             : 4;  /**< [  3:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_3             : 4;  /**< [  3:  0](R/W) -- */
        uint64_t ss_rsvd_15            : 12; /**< [ 15:  4](RO) SS_Reserved */
        uint64_t ss_rsvd_32            : 17; /**< [ 32: 16](R/W) -- */
        uint64_t ss_rsvd_63            : 31; /**< [ 63: 33](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_0_s cn; */
};
typedef union cavm_bbxd_abx_config_2_0 cavm_bbxd_abx_config_2_0_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_0(uint64_t a)
{
    if (a<=3)
        return 0x87e042286000ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_0(a) cavm_bbxd_abx_config_2_0_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_0(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_0(a) "BBXD_ABX_CONFIG_2_0"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_0(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_0(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_1
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_1
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 4;  /**< [ 63: 60](RO) SS_Reserved */
        uint64_t ss_rsvd_59            : 28; /**< [ 59: 32](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 13; /**< [ 28: 16](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 7;  /**< [ 12:  6](R/W) -- */
        uint64_t ss_rsvd_5             : 1;  /**< [  5:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
        uint64_t ss_rsvd_5             : 1;  /**< [  5:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 7;  /**< [ 12:  6](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 13; /**< [ 28: 16](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_59            : 28; /**< [ 59: 32](R/W) -- */
        uint64_t ss_rsvd_63            : 4;  /**< [ 63: 60](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_1_s cn; */
};
typedef union cavm_bbxd_abx_config_2_1 cavm_bbxd_abx_config_2_1_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_1(uint64_t a)
{
    if (a<=3)
        return 0x87e042286008ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_1(a) cavm_bbxd_abx_config_2_1_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_1(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_1(a) "BBXD_ABX_CONFIG_2_1"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_1(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_1(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_10
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_10
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_10_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_10_s cn; */
};
typedef union cavm_bbxd_abx_config_2_10 cavm_bbxd_abx_config_2_10_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_10(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_10(uint64_t a)
{
    if (a<=3)
        return 0x87e042286050ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_10", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_10(a) cavm_bbxd_abx_config_2_10_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_10(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_10(a) "BBXD_ABX_CONFIG_2_10"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_10(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_10(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_100
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_100
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_100_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_100_s cn; */
};
typedef union cavm_bbxd_abx_config_2_100 cavm_bbxd_abx_config_2_100_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_100(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_100(uint64_t a)
{
    if (a<=3)
        return 0x87e042286320ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_100", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_100(a) cavm_bbxd_abx_config_2_100_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_100(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_100(a) "BBXD_ABX_CONFIG_2_100"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_100(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_100(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_101
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_101
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_101_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 60; /**< [ 63:  4](RO) SS_Reserved */
        uint64_t ss_rsvd_3             : 4;  /**< [  3:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_3             : 4;  /**< [  3:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 60; /**< [ 63:  4](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_101_s cn; */
};
typedef union cavm_bbxd_abx_config_2_101 cavm_bbxd_abx_config_2_101_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_101(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_101(uint64_t a)
{
    if (a<=3)
        return 0x87e042286328ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_101", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_101(a) cavm_bbxd_abx_config_2_101_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_101(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_101(a) "BBXD_ABX_CONFIG_2_101"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_101(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_101(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_102
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_102
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_102_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](R/W) -- */
        uint64_t ss_rsvd_62            : 8;  /**< [ 62: 55](RO) SS_Reserved */
        uint64_t ss_rsvd_54            : 3;  /**< [ 54: 52](R/W) -- */
        uint64_t ss_rsvd_51            : 3;  /**< [ 51: 49](RO) SS_Reserved */
        uint64_t ss_rsvd_48            : 1;  /**< [ 48: 48](R/W) -- */
        uint64_t ss_rsvd_47            : 1;  /**< [ 47: 47](RO) SS_Reserved */
        uint64_t ss_rsvd_46            : 7;  /**< [ 46: 40](R/W) -- */
        uint64_t ss_rsvd_39            : 1;  /**< [ 39: 39](RO) SS_Reserved */
        uint64_t ss_rsvd_38            : 7;  /**< [ 38: 32](R/W) -- */
        uint64_t ss_rsvd_31            : 9;  /**< [ 31: 23](RO) SS_Reserved */
        uint64_t ss_rsvd_22            : 7;  /**< [ 22: 16](R/W) -- */
        uint64_t ss_rsvd_15            : 6;  /**< [ 15: 10](RO) SS_Reserved */
        uint64_t ss_rsvd_9             : 2;  /**< [  9:  8](R/W) -- */
        uint64_t ss_rsvd_7             : 1;  /**< [  7:  7](RO) SS_Reserved */
        uint64_t ss_rsvd_6             : 7;  /**< [  6:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_6             : 7;  /**< [  6:  0](R/W) -- */
        uint64_t ss_rsvd_7             : 1;  /**< [  7:  7](RO) SS_Reserved */
        uint64_t ss_rsvd_9             : 2;  /**< [  9:  8](R/W) -- */
        uint64_t ss_rsvd_15            : 6;  /**< [ 15: 10](RO) SS_Reserved */
        uint64_t ss_rsvd_22            : 7;  /**< [ 22: 16](R/W) -- */
        uint64_t ss_rsvd_31            : 9;  /**< [ 31: 23](RO) SS_Reserved */
        uint64_t ss_rsvd_38            : 7;  /**< [ 38: 32](R/W) -- */
        uint64_t ss_rsvd_39            : 1;  /**< [ 39: 39](RO) SS_Reserved */
        uint64_t ss_rsvd_46            : 7;  /**< [ 46: 40](R/W) -- */
        uint64_t ss_rsvd_47            : 1;  /**< [ 47: 47](RO) SS_Reserved */
        uint64_t ss_rsvd_48            : 1;  /**< [ 48: 48](R/W) -- */
        uint64_t ss_rsvd_51            : 3;  /**< [ 51: 49](RO) SS_Reserved */
        uint64_t ss_rsvd_54            : 3;  /**< [ 54: 52](R/W) -- */
        uint64_t ss_rsvd_62            : 8;  /**< [ 62: 55](RO) SS_Reserved */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_102_s cn; */
};
typedef union cavm_bbxd_abx_config_2_102 cavm_bbxd_abx_config_2_102_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_102(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_102(uint64_t a)
{
    if (a<=3)
        return 0x87e042286330ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_102", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_102(a) cavm_bbxd_abx_config_2_102_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_102(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_102(a) "BBXD_ABX_CONFIG_2_102"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_102(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_102(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_103
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_103
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_103_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 16; /**< [ 63: 48](RO) SS_Reserved */
        uint64_t ss_rsvd_47            : 48; /**< [ 47:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_47            : 48; /**< [ 47:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 16; /**< [ 63: 48](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_103_s cn; */
};
typedef union cavm_bbxd_abx_config_2_103 cavm_bbxd_abx_config_2_103_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_103(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_103(uint64_t a)
{
    if (a<=3)
        return 0x87e042286338ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_103", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_103(a) cavm_bbxd_abx_config_2_103_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_103(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_103(a) "BBXD_ABX_CONFIG_2_103"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_103(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_103(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_104
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_104
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_104_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 16; /**< [ 63: 48](RO) SS_Reserved */
        uint64_t ss_rsvd_47            : 48; /**< [ 47:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_47            : 48; /**< [ 47:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 16; /**< [ 63: 48](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_104_s cn; */
};
typedef union cavm_bbxd_abx_config_2_104 cavm_bbxd_abx_config_2_104_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_104(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_104(uint64_t a)
{
    if (a<=3)
        return 0x87e042286340ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_104", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_104(a) cavm_bbxd_abx_config_2_104_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_104(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_104(a) "BBXD_ABX_CONFIG_2_104"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_104(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_104(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_105
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_105
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_105_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 16; /**< [ 63: 48](RO) SS_Reserved */
        uint64_t ss_rsvd_47            : 48; /**< [ 47:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_47            : 48; /**< [ 47:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 16; /**< [ 63: 48](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_105_s cn; */
};
typedef union cavm_bbxd_abx_config_2_105 cavm_bbxd_abx_config_2_105_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_105(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_105(uint64_t a)
{
    if (a<=3)
        return 0x87e042286348ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_105", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_105(a) cavm_bbxd_abx_config_2_105_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_105(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_105(a) "BBXD_ABX_CONFIG_2_105"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_105(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_105(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_106
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_106
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_106_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 16; /**< [ 63: 48](RO) SS_Reserved */
        uint64_t ss_rsvd_47            : 48; /**< [ 47:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_47            : 48; /**< [ 47:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 16; /**< [ 63: 48](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_106_s cn; */
};
typedef union cavm_bbxd_abx_config_2_106 cavm_bbxd_abx_config_2_106_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_106(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_106(uint64_t a)
{
    if (a<=3)
        return 0x87e042286350ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_106", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_106(a) cavm_bbxd_abx_config_2_106_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_106(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_106(a) "BBXD_ABX_CONFIG_2_106"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_106(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_106(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_107
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_107
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_107_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 16; /**< [ 63: 48](RO) SS_Reserved */
        uint64_t ss_rsvd_47            : 48; /**< [ 47:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_47            : 48; /**< [ 47:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 16; /**< [ 63: 48](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_107_s cn; */
};
typedef union cavm_bbxd_abx_config_2_107 cavm_bbxd_abx_config_2_107_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_107(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_107(uint64_t a)
{
    if (a<=3)
        return 0x87e042286358ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_107", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_107(a) cavm_bbxd_abx_config_2_107_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_107(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_107(a) "BBXD_ABX_CONFIG_2_107"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_107(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_107(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_108
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_108
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_108_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 16; /**< [ 63: 48](RO) SS_Reserved */
        uint64_t ss_rsvd_47            : 48; /**< [ 47:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_47            : 48; /**< [ 47:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 16; /**< [ 63: 48](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_108_s cn; */
};
typedef union cavm_bbxd_abx_config_2_108 cavm_bbxd_abx_config_2_108_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_108(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_108(uint64_t a)
{
    if (a<=3)
        return 0x87e042286360ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_108", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_108(a) cavm_bbxd_abx_config_2_108_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_108(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_108(a) "BBXD_ABX_CONFIG_2_108"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_108(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_108(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_109
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_109
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_109_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 16; /**< [ 63: 48](RO) SS_Reserved */
        uint64_t ss_rsvd_47            : 48; /**< [ 47:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_47            : 48; /**< [ 47:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 16; /**< [ 63: 48](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_109_s cn; */
};
typedef union cavm_bbxd_abx_config_2_109 cavm_bbxd_abx_config_2_109_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_109(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_109(uint64_t a)
{
    if (a<=3)
        return 0x87e042286368ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_109", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_109(a) cavm_bbxd_abx_config_2_109_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_109(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_109(a) "BBXD_ABX_CONFIG_2_109"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_109(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_109(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_11
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_11
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_11_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_11_s cn; */
};
typedef union cavm_bbxd_abx_config_2_11 cavm_bbxd_abx_config_2_11_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_11(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_11(uint64_t a)
{
    if (a<=3)
        return 0x87e042286058ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_11", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_11(a) cavm_bbxd_abx_config_2_11_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_11(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_11(a) "BBXD_ABX_CONFIG_2_11"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_11(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_11(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_110
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_110
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_110_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](R/W) -- */
        uint64_t ss_rsvd_62            : 32; /**< [ 62: 31](RO) SS_Reserved */
        uint64_t ss_rsvd_30            : 31; /**< [ 30:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_30            : 31; /**< [ 30:  0](R/W) -- */
        uint64_t ss_rsvd_62            : 32; /**< [ 62: 31](RO) SS_Reserved */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_110_s cn; */
};
typedef union cavm_bbxd_abx_config_2_110 cavm_bbxd_abx_config_2_110_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_110(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_110(uint64_t a)
{
    if (a<=3)
        return 0x87e042286370ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_110", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_110(a) cavm_bbxd_abx_config_2_110_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_110(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_110(a) "BBXD_ABX_CONFIG_2_110"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_110(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_110(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_12
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_12
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_12_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_12_s cn; */
};
typedef union cavm_bbxd_abx_config_2_12 cavm_bbxd_abx_config_2_12_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_12(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_12(uint64_t a)
{
    if (a<=3)
        return 0x87e042286060ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_12", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_12(a) cavm_bbxd_abx_config_2_12_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_12(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_12(a) "BBXD_ABX_CONFIG_2_12"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_12(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_12(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_13
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_13
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_13_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_13_s cn; */
};
typedef union cavm_bbxd_abx_config_2_13 cavm_bbxd_abx_config_2_13_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_13(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_13(uint64_t a)
{
    if (a<=3)
        return 0x87e042286068ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_13", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_13(a) cavm_bbxd_abx_config_2_13_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_13(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_13(a) "BBXD_ABX_CONFIG_2_13"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_13(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_13(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_14
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_14
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_14_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_14_s cn; */
};
typedef union cavm_bbxd_abx_config_2_14 cavm_bbxd_abx_config_2_14_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_14(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_14(uint64_t a)
{
    if (a<=3)
        return 0x87e042286070ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_14", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_14(a) cavm_bbxd_abx_config_2_14_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_14(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_14(a) "BBXD_ABX_CONFIG_2_14"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_14(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_14(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_15
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_15
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_15_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_15_s cn; */
};
typedef union cavm_bbxd_abx_config_2_15 cavm_bbxd_abx_config_2_15_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_15(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_15(uint64_t a)
{
    if (a<=3)
        return 0x87e042286078ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_15", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_15(a) cavm_bbxd_abx_config_2_15_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_15(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_15(a) "BBXD_ABX_CONFIG_2_15"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_15(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_15(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_16
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_16
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_16_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_16_s cn; */
};
typedef union cavm_bbxd_abx_config_2_16 cavm_bbxd_abx_config_2_16_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_16(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_16(uint64_t a)
{
    if (a<=3)
        return 0x87e042286080ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_16", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_16(a) cavm_bbxd_abx_config_2_16_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_16(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_16(a) "BBXD_ABX_CONFIG_2_16"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_16(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_16(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_17
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_17
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_17_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_17_s cn; */
};
typedef union cavm_bbxd_abx_config_2_17 cavm_bbxd_abx_config_2_17_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_17(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_17(uint64_t a)
{
    if (a<=3)
        return 0x87e042286088ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_17", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_17(a) cavm_bbxd_abx_config_2_17_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_17(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_17(a) "BBXD_ABX_CONFIG_2_17"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_17(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_17(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_18
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_18
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_18_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_18_s cn; */
};
typedef union cavm_bbxd_abx_config_2_18 cavm_bbxd_abx_config_2_18_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_18(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_18(uint64_t a)
{
    if (a<=3)
        return 0x87e042286090ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_18", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_18(a) cavm_bbxd_abx_config_2_18_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_18(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_18(a) "BBXD_ABX_CONFIG_2_18"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_18(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_18(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_19
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_19
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_19_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_19_s cn; */
};
typedef union cavm_bbxd_abx_config_2_19 cavm_bbxd_abx_config_2_19_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_19(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_19(uint64_t a)
{
    if (a<=3)
        return 0x87e042286098ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_19", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_19(a) cavm_bbxd_abx_config_2_19_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_19(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_19(a) "BBXD_ABX_CONFIG_2_19"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_19(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_19(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_2
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_2
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_2_s cn; */
};
typedef union cavm_bbxd_abx_config_2_2 cavm_bbxd_abx_config_2_2_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_2(uint64_t a)
{
    if (a<=3)
        return 0x87e042286010ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_2(a) cavm_bbxd_abx_config_2_2_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_2(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_2(a) "BBXD_ABX_CONFIG_2_2"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_2(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_2(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_20
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_20
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_20_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_20_s cn; */
};
typedef union cavm_bbxd_abx_config_2_20 cavm_bbxd_abx_config_2_20_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_20(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_20(uint64_t a)
{
    if (a<=3)
        return 0x87e0422860a0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_20", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_20(a) cavm_bbxd_abx_config_2_20_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_20(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_20(a) "BBXD_ABX_CONFIG_2_20"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_20(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_20(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_21
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_21
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_21_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_21_s cn; */
};
typedef union cavm_bbxd_abx_config_2_21 cavm_bbxd_abx_config_2_21_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_21(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_21(uint64_t a)
{
    if (a<=3)
        return 0x87e0422860a8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_21", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_21(a) cavm_bbxd_abx_config_2_21_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_21(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_21(a) "BBXD_ABX_CONFIG_2_21"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_21(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_21(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_22
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_22
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_22_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_22_s cn; */
};
typedef union cavm_bbxd_abx_config_2_22 cavm_bbxd_abx_config_2_22_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_22(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_22(uint64_t a)
{
    if (a<=3)
        return 0x87e0422860b0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_22", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_22(a) cavm_bbxd_abx_config_2_22_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_22(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_22(a) "BBXD_ABX_CONFIG_2_22"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_22(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_22(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_23
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_23
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_23_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_23_s cn; */
};
typedef union cavm_bbxd_abx_config_2_23 cavm_bbxd_abx_config_2_23_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_23(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_23(uint64_t a)
{
    if (a<=3)
        return 0x87e0422860b8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_23", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_23(a) cavm_bbxd_abx_config_2_23_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_23(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_23(a) "BBXD_ABX_CONFIG_2_23"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_23(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_23(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_24
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_24
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_24_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_24_s cn; */
};
typedef union cavm_bbxd_abx_config_2_24 cavm_bbxd_abx_config_2_24_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_24(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_24(uint64_t a)
{
    if (a<=3)
        return 0x87e0422860c0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_24", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_24(a) cavm_bbxd_abx_config_2_24_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_24(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_24(a) "BBXD_ABX_CONFIG_2_24"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_24(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_24(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_25
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_25
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_25_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_25_s cn; */
};
typedef union cavm_bbxd_abx_config_2_25 cavm_bbxd_abx_config_2_25_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_25(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_25(uint64_t a)
{
    if (a<=3)
        return 0x87e0422860c8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_25", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_25(a) cavm_bbxd_abx_config_2_25_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_25(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_25(a) "BBXD_ABX_CONFIG_2_25"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_25(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_25(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_26
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_26
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_26_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_26_s cn; */
};
typedef union cavm_bbxd_abx_config_2_26 cavm_bbxd_abx_config_2_26_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_26(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_26(uint64_t a)
{
    if (a<=3)
        return 0x87e0422860d0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_26", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_26(a) cavm_bbxd_abx_config_2_26_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_26(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_26(a) "BBXD_ABX_CONFIG_2_26"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_26(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_26(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_27
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_27
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_27_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_27_s cn; */
};
typedef union cavm_bbxd_abx_config_2_27 cavm_bbxd_abx_config_2_27_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_27(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_27(uint64_t a)
{
    if (a<=3)
        return 0x87e0422860d8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_27", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_27(a) cavm_bbxd_abx_config_2_27_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_27(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_27(a) "BBXD_ABX_CONFIG_2_27"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_27(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_27(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_28
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_28
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_28_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_28_s cn; */
};
typedef union cavm_bbxd_abx_config_2_28 cavm_bbxd_abx_config_2_28_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_28(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_28(uint64_t a)
{
    if (a<=3)
        return 0x87e0422860e0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_28", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_28(a) cavm_bbxd_abx_config_2_28_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_28(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_28(a) "BBXD_ABX_CONFIG_2_28"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_28(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_28(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_29
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_29
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_29_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_29_s cn; */
};
typedef union cavm_bbxd_abx_config_2_29 cavm_bbxd_abx_config_2_29_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_29(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_29(uint64_t a)
{
    if (a<=3)
        return 0x87e0422860e8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_29", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_29(a) cavm_bbxd_abx_config_2_29_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_29(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_29(a) "BBXD_ABX_CONFIG_2_29"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_29(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_29(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_3
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_3
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_3_s cn; */
};
typedef union cavm_bbxd_abx_config_2_3 cavm_bbxd_abx_config_2_3_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_3(uint64_t a)
{
    if (a<=3)
        return 0x87e042286018ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_3(a) cavm_bbxd_abx_config_2_3_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_3(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_3(a) "BBXD_ABX_CONFIG_2_3"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_3(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_3(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_30
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_30
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_30_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_30_s cn; */
};
typedef union cavm_bbxd_abx_config_2_30 cavm_bbxd_abx_config_2_30_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_30(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_30(uint64_t a)
{
    if (a<=3)
        return 0x87e0422860f0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_30", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_30(a) cavm_bbxd_abx_config_2_30_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_30(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_30(a) "BBXD_ABX_CONFIG_2_30"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_30(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_30(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_31
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_31
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_31_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_31_s cn; */
};
typedef union cavm_bbxd_abx_config_2_31 cavm_bbxd_abx_config_2_31_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_31(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_31(uint64_t a)
{
    if (a<=3)
        return 0x87e0422860f8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_31", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_31(a) cavm_bbxd_abx_config_2_31_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_31(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_31(a) "BBXD_ABX_CONFIG_2_31"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_31(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_31(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_32
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_32
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_32_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_32_s cn; */
};
typedef union cavm_bbxd_abx_config_2_32 cavm_bbxd_abx_config_2_32_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_32(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_32(uint64_t a)
{
    if (a<=3)
        return 0x87e042286100ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_32", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_32(a) cavm_bbxd_abx_config_2_32_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_32(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_32(a) "BBXD_ABX_CONFIG_2_32"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_32(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_32(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_33
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_33
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_33_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_33_s cn; */
};
typedef union cavm_bbxd_abx_config_2_33 cavm_bbxd_abx_config_2_33_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_33(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_33(uint64_t a)
{
    if (a<=3)
        return 0x87e042286108ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_33", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_33(a) cavm_bbxd_abx_config_2_33_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_33(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_33(a) "BBXD_ABX_CONFIG_2_33"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_33(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_33(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_34
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_34
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_34_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_34_s cn; */
};
typedef union cavm_bbxd_abx_config_2_34 cavm_bbxd_abx_config_2_34_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_34(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_34(uint64_t a)
{
    if (a<=3)
        return 0x87e042286110ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_34", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_34(a) cavm_bbxd_abx_config_2_34_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_34(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_34(a) "BBXD_ABX_CONFIG_2_34"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_34(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_34(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_35
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_35
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_35_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_35_s cn; */
};
typedef union cavm_bbxd_abx_config_2_35 cavm_bbxd_abx_config_2_35_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_35(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_35(uint64_t a)
{
    if (a<=3)
        return 0x87e042286118ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_35", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_35(a) cavm_bbxd_abx_config_2_35_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_35(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_35(a) "BBXD_ABX_CONFIG_2_35"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_35(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_35(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_36
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_36
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_36_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_36_s cn; */
};
typedef union cavm_bbxd_abx_config_2_36 cavm_bbxd_abx_config_2_36_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_36(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_36(uint64_t a)
{
    if (a<=3)
        return 0x87e042286120ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_36", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_36(a) cavm_bbxd_abx_config_2_36_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_36(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_36(a) "BBXD_ABX_CONFIG_2_36"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_36(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_36(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_37
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_37
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_37_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_37_s cn; */
};
typedef union cavm_bbxd_abx_config_2_37 cavm_bbxd_abx_config_2_37_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_37(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_37(uint64_t a)
{
    if (a<=3)
        return 0x87e042286128ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_37", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_37(a) cavm_bbxd_abx_config_2_37_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_37(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_37(a) "BBXD_ABX_CONFIG_2_37"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_37(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_37(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_38
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_38
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_38_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_38_s cn; */
};
typedef union cavm_bbxd_abx_config_2_38 cavm_bbxd_abx_config_2_38_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_38(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_38(uint64_t a)
{
    if (a<=3)
        return 0x87e042286130ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_38", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_38(a) cavm_bbxd_abx_config_2_38_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_38(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_38(a) "BBXD_ABX_CONFIG_2_38"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_38(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_38(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_39
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_39
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_39_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_39_s cn; */
};
typedef union cavm_bbxd_abx_config_2_39 cavm_bbxd_abx_config_2_39_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_39(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_39(uint64_t a)
{
    if (a<=3)
        return 0x87e042286138ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_39", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_39(a) cavm_bbxd_abx_config_2_39_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_39(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_39(a) "BBXD_ABX_CONFIG_2_39"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_39(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_39(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_4
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_4
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_4_s cn; */
};
typedef union cavm_bbxd_abx_config_2_4 cavm_bbxd_abx_config_2_4_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_4(uint64_t a)
{
    if (a<=3)
        return 0x87e042286020ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_4(a) cavm_bbxd_abx_config_2_4_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_4(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_4(a) "BBXD_ABX_CONFIG_2_4"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_4(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_4(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_40
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_40
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_40_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_40_s cn; */
};
typedef union cavm_bbxd_abx_config_2_40 cavm_bbxd_abx_config_2_40_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_40(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_40(uint64_t a)
{
    if (a<=3)
        return 0x87e042286140ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_40", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_40(a) cavm_bbxd_abx_config_2_40_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_40(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_40(a) "BBXD_ABX_CONFIG_2_40"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_40(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_40(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_41
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_41
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_41_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_41_s cn; */
};
typedef union cavm_bbxd_abx_config_2_41 cavm_bbxd_abx_config_2_41_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_41(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_41(uint64_t a)
{
    if (a<=3)
        return 0x87e042286148ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_41", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_41(a) cavm_bbxd_abx_config_2_41_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_41(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_41(a) "BBXD_ABX_CONFIG_2_41"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_41(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_41(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_42
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_42
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_42_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_42_s cn; */
};
typedef union cavm_bbxd_abx_config_2_42 cavm_bbxd_abx_config_2_42_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_42(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_42(uint64_t a)
{
    if (a<=3)
        return 0x87e042286150ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_42", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_42(a) cavm_bbxd_abx_config_2_42_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_42(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_42(a) "BBXD_ABX_CONFIG_2_42"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_42(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_42(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_43
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_43
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_43_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_43_s cn; */
};
typedef union cavm_bbxd_abx_config_2_43 cavm_bbxd_abx_config_2_43_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_43(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_43(uint64_t a)
{
    if (a<=3)
        return 0x87e042286158ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_43", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_43(a) cavm_bbxd_abx_config_2_43_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_43(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_43(a) "BBXD_ABX_CONFIG_2_43"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_43(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_43(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_44
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_44
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_44_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_44_s cn; */
};
typedef union cavm_bbxd_abx_config_2_44 cavm_bbxd_abx_config_2_44_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_44(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_44(uint64_t a)
{
    if (a<=3)
        return 0x87e042286160ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_44", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_44(a) cavm_bbxd_abx_config_2_44_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_44(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_44(a) "BBXD_ABX_CONFIG_2_44"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_44(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_44(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_45
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_45
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_45_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_45_s cn; */
};
typedef union cavm_bbxd_abx_config_2_45 cavm_bbxd_abx_config_2_45_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_45(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_45(uint64_t a)
{
    if (a<=3)
        return 0x87e042286168ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_45", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_45(a) cavm_bbxd_abx_config_2_45_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_45(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_45(a) "BBXD_ABX_CONFIG_2_45"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_45(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_45(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_46
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_46
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_46_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_46_s cn; */
};
typedef union cavm_bbxd_abx_config_2_46 cavm_bbxd_abx_config_2_46_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_46(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_46(uint64_t a)
{
    if (a<=3)
        return 0x87e042286170ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_46", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_46(a) cavm_bbxd_abx_config_2_46_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_46(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_46(a) "BBXD_ABX_CONFIG_2_46"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_46(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_46(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_47
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_47
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_47_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_47_s cn; */
};
typedef union cavm_bbxd_abx_config_2_47 cavm_bbxd_abx_config_2_47_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_47(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_47(uint64_t a)
{
    if (a<=3)
        return 0x87e042286178ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_47", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_47(a) cavm_bbxd_abx_config_2_47_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_47(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_47(a) "BBXD_ABX_CONFIG_2_47"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_47(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_47(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_48
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_48
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_48_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_48_s cn; */
};
typedef union cavm_bbxd_abx_config_2_48 cavm_bbxd_abx_config_2_48_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_48(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_48(uint64_t a)
{
    if (a<=3)
        return 0x87e042286180ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_48", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_48(a) cavm_bbxd_abx_config_2_48_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_48(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_48(a) "BBXD_ABX_CONFIG_2_48"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_48(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_48(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_49
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_49
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_49_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_49_s cn; */
};
typedef union cavm_bbxd_abx_config_2_49 cavm_bbxd_abx_config_2_49_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_49(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_49(uint64_t a)
{
    if (a<=3)
        return 0x87e042286188ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_49", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_49(a) cavm_bbxd_abx_config_2_49_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_49(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_49(a) "BBXD_ABX_CONFIG_2_49"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_49(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_49(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_5
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_5
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_5_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_5_s cn; */
};
typedef union cavm_bbxd_abx_config_2_5 cavm_bbxd_abx_config_2_5_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_5(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_5(uint64_t a)
{
    if (a<=3)
        return 0x87e042286028ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_5", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_5(a) cavm_bbxd_abx_config_2_5_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_5(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_5(a) "BBXD_ABX_CONFIG_2_5"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_5(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_5(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_50
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_50
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_50_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 16; /**< [ 63: 48](R/W) -- */
        uint64_t ss_rsvd_47            : 7;  /**< [ 47: 41](RO) SS_Reserved */
        uint64_t ss_rsvd_40            : 17; /**< [ 40: 24](R/W) -- */
        uint64_t ss_rsvd_23            : 1;  /**< [ 23: 23](RO) SS_Reserved */
        uint64_t ss_rsvd_22            : 15; /**< [ 22:  8](R/W) -- */
        uint64_t ss_rsvd_7             : 6;  /**< [  7:  2](RO) SS_Reserved */
        uint64_t ss_rsvd_1             : 2;  /**< [  1:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_1             : 2;  /**< [  1:  0](R/W) -- */
        uint64_t ss_rsvd_7             : 6;  /**< [  7:  2](RO) SS_Reserved */
        uint64_t ss_rsvd_22            : 15; /**< [ 22:  8](R/W) -- */
        uint64_t ss_rsvd_23            : 1;  /**< [ 23: 23](RO) SS_Reserved */
        uint64_t ss_rsvd_40            : 17; /**< [ 40: 24](R/W) -- */
        uint64_t ss_rsvd_47            : 7;  /**< [ 47: 41](RO) SS_Reserved */
        uint64_t ss_rsvd_63            : 16; /**< [ 63: 48](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_50_s cn; */
};
typedef union cavm_bbxd_abx_config_2_50 cavm_bbxd_abx_config_2_50_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_50(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_50(uint64_t a)
{
    if (a<=3)
        return 0x87e042286190ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_50", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_50(a) cavm_bbxd_abx_config_2_50_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_50(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_50(a) "BBXD_ABX_CONFIG_2_50"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_50(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_50(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_51
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_51
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_51_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_51_s cn; */
};
typedef union cavm_bbxd_abx_config_2_51 cavm_bbxd_abx_config_2_51_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_51(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_51(uint64_t a)
{
    if (a<=3)
        return 0x87e042286198ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_51", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_51(a) cavm_bbxd_abx_config_2_51_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_51(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_51(a) "BBXD_ABX_CONFIG_2_51"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_51(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_51(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_52
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_52
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_52_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 29; /**< [ 28:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_28            : 29; /**< [ 28:  0](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_52_s cn; */
};
typedef union cavm_bbxd_abx_config_2_52 cavm_bbxd_abx_config_2_52_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_52(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_52(uint64_t a)
{
    if (a<=3)
        return 0x87e0422861a0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_52", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_52(a) cavm_bbxd_abx_config_2_52_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_52(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_52(a) "BBXD_ABX_CONFIG_2_52"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_52(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_52(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_53
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_53
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_53_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_53_s cn; */
};
typedef union cavm_bbxd_abx_config_2_53 cavm_bbxd_abx_config_2_53_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_53(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_53(uint64_t a)
{
    if (a<=3)
        return 0x87e0422861a8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_53", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_53(a) cavm_bbxd_abx_config_2_53_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_53(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_53(a) "BBXD_ABX_CONFIG_2_53"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_53(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_53(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_54
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_54
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_54_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_54_s cn; */
};
typedef union cavm_bbxd_abx_config_2_54 cavm_bbxd_abx_config_2_54_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_54(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_54(uint64_t a)
{
    if (a<=3)
        return 0x87e0422861b0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_54", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_54(a) cavm_bbxd_abx_config_2_54_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_54(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_54(a) "BBXD_ABX_CONFIG_2_54"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_54(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_54(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_55
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_55
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_55_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_55_s cn; */
};
typedef union cavm_bbxd_abx_config_2_55 cavm_bbxd_abx_config_2_55_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_55(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_55(uint64_t a)
{
    if (a<=3)
        return 0x87e0422861b8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_55", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_55(a) cavm_bbxd_abx_config_2_55_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_55(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_55(a) "BBXD_ABX_CONFIG_2_55"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_55(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_55(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_56
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_56
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_56_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_56_s cn; */
};
typedef union cavm_bbxd_abx_config_2_56 cavm_bbxd_abx_config_2_56_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_56(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_56(uint64_t a)
{
    if (a<=3)
        return 0x87e0422861c0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_56", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_56(a) cavm_bbxd_abx_config_2_56_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_56(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_56(a) "BBXD_ABX_CONFIG_2_56"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_56(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_56(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_57
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_57
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_57_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_57_s cn; */
};
typedef union cavm_bbxd_abx_config_2_57 cavm_bbxd_abx_config_2_57_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_57(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_57(uint64_t a)
{
    if (a<=3)
        return 0x87e0422861c8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_57", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_57(a) cavm_bbxd_abx_config_2_57_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_57(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_57(a) "BBXD_ABX_CONFIG_2_57"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_57(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_57(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_58
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_58
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_58_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_58_s cn; */
};
typedef union cavm_bbxd_abx_config_2_58 cavm_bbxd_abx_config_2_58_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_58(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_58(uint64_t a)
{
    if (a<=3)
        return 0x87e0422861d0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_58", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_58(a) cavm_bbxd_abx_config_2_58_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_58(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_58(a) "BBXD_ABX_CONFIG_2_58"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_58(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_58(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_59
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_59
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_59_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_59_s cn; */
};
typedef union cavm_bbxd_abx_config_2_59 cavm_bbxd_abx_config_2_59_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_59(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_59(uint64_t a)
{
    if (a<=3)
        return 0x87e0422861d8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_59", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_59(a) cavm_bbxd_abx_config_2_59_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_59(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_59(a) "BBXD_ABX_CONFIG_2_59"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_59(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_59(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_6
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_6
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_6_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_6_s cn; */
};
typedef union cavm_bbxd_abx_config_2_6 cavm_bbxd_abx_config_2_6_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_6(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_6(uint64_t a)
{
    if (a<=3)
        return 0x87e042286030ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_6", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_6(a) cavm_bbxd_abx_config_2_6_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_6(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_6(a) "BBXD_ABX_CONFIG_2_6"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_6(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_6(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_60
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_60
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_60_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_60_s cn; */
};
typedef union cavm_bbxd_abx_config_2_60 cavm_bbxd_abx_config_2_60_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_60(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_60(uint64_t a)
{
    if (a<=3)
        return 0x87e0422861e0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_60", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_60(a) cavm_bbxd_abx_config_2_60_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_60(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_60(a) "BBXD_ABX_CONFIG_2_60"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_60(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_60(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_61
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_61
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_61_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_61_s cn; */
};
typedef union cavm_bbxd_abx_config_2_61 cavm_bbxd_abx_config_2_61_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_61(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_61(uint64_t a)
{
    if (a<=3)
        return 0x87e0422861e8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_61", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_61(a) cavm_bbxd_abx_config_2_61_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_61(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_61(a) "BBXD_ABX_CONFIG_2_61"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_61(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_61(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_62
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_62
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_62_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_62_s cn; */
};
typedef union cavm_bbxd_abx_config_2_62 cavm_bbxd_abx_config_2_62_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_62(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_62(uint64_t a)
{
    if (a<=3)
        return 0x87e0422861f0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_62", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_62(a) cavm_bbxd_abx_config_2_62_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_62(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_62(a) "BBXD_ABX_CONFIG_2_62"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_62(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_62(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_63
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_63
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_63_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_63_s cn; */
};
typedef union cavm_bbxd_abx_config_2_63 cavm_bbxd_abx_config_2_63_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_63(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_63(uint64_t a)
{
    if (a<=3)
        return 0x87e0422861f8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_63", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_63(a) cavm_bbxd_abx_config_2_63_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_63(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_63(a) "BBXD_ABX_CONFIG_2_63"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_63(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_63(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_64
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_64
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_64_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_64_s cn; */
};
typedef union cavm_bbxd_abx_config_2_64 cavm_bbxd_abx_config_2_64_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_64(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_64(uint64_t a)
{
    if (a<=3)
        return 0x87e042286200ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_64", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_64(a) cavm_bbxd_abx_config_2_64_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_64(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_64(a) "BBXD_ABX_CONFIG_2_64"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_64(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_64(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_65
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_65
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_65_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_65_s cn; */
};
typedef union cavm_bbxd_abx_config_2_65 cavm_bbxd_abx_config_2_65_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_65(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_65(uint64_t a)
{
    if (a<=3)
        return 0x87e042286208ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_65", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_65(a) cavm_bbxd_abx_config_2_65_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_65(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_65(a) "BBXD_ABX_CONFIG_2_65"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_65(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_65(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_66
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_66
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_66_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_60            : 5;  /**< [ 60: 56](R/W) -- */
        uint64_t ss_rsvd_63            : 3;  /**< [ 63: 61](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_66_s cn; */
};
typedef union cavm_bbxd_abx_config_2_66 cavm_bbxd_abx_config_2_66_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_66(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_66(uint64_t a)
{
    if (a<=3)
        return 0x87e042286210ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_66", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_66(a) cavm_bbxd_abx_config_2_66_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_66(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_66(a) "BBXD_ABX_CONFIG_2_66"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_66(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_66(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_67
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_67
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_67_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 8;  /**< [ 63: 56](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_63            : 8;  /**< [ 63: 56](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_67_s cn; */
};
typedef union cavm_bbxd_abx_config_2_67 cavm_bbxd_abx_config_2_67_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_67(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_67(uint64_t a)
{
    if (a<=3)
        return 0x87e042286218ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_67", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_67(a) cavm_bbxd_abx_config_2_67_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_67(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_67(a) "BBXD_ABX_CONFIG_2_67"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_67(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_67(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_68
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_68
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_68_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 8;  /**< [ 63: 56](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_4             : 5;  /**< [  4:  0](R/W) -- */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t ss_rsvd_12            : 5;  /**< [ 12:  8](R/W) -- */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t ss_rsvd_20            : 5;  /**< [ 20: 16](R/W) -- */
        uint64_t ss_rsvd_23            : 3;  /**< [ 23: 21](RO) SS_Reserved */
        uint64_t ss_rsvd_28            : 5;  /**< [ 28: 24](R/W) -- */
        uint64_t ss_rsvd_31            : 3;  /**< [ 31: 29](RO) SS_Reserved */
        uint64_t ss_rsvd_36            : 5;  /**< [ 36: 32](R/W) -- */
        uint64_t ss_rsvd_39            : 3;  /**< [ 39: 37](RO) SS_Reserved */
        uint64_t ss_rsvd_44            : 5;  /**< [ 44: 40](R/W) -- */
        uint64_t ss_rsvd_47            : 3;  /**< [ 47: 45](RO) SS_Reserved */
        uint64_t ss_rsvd_52            : 5;  /**< [ 52: 48](R/W) -- */
        uint64_t ss_rsvd_55            : 3;  /**< [ 55: 53](RO) SS_Reserved */
        uint64_t ss_rsvd_63            : 8;  /**< [ 63: 56](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_68_s cn; */
};
typedef union cavm_bbxd_abx_config_2_68 cavm_bbxd_abx_config_2_68_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_68(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_68(uint64_t a)
{
    if (a<=3)
        return 0x87e042286220ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_68", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_68(a) cavm_bbxd_abx_config_2_68_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_68(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_68(a) "BBXD_ABX_CONFIG_2_68"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_68(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_68(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_69
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_69
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_69_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_69_s cn; */
};
typedef union cavm_bbxd_abx_config_2_69 cavm_bbxd_abx_config_2_69_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_69(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_69(uint64_t a)
{
    if (a<=3)
        return 0x87e042286228ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_69", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_69(a) cavm_bbxd_abx_config_2_69_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_69(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_69(a) "BBXD_ABX_CONFIG_2_69"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_69(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_69(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_7
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_7
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_7_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_7_s cn; */
};
typedef union cavm_bbxd_abx_config_2_7 cavm_bbxd_abx_config_2_7_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_7(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_7(uint64_t a)
{
    if (a<=3)
        return 0x87e042286038ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_7", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_7(a) cavm_bbxd_abx_config_2_7_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_7(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_7(a) "BBXD_ABX_CONFIG_2_7"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_7(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_7(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_70
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_70
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_70_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_70_s cn; */
};
typedef union cavm_bbxd_abx_config_2_70 cavm_bbxd_abx_config_2_70_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_70(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_70(uint64_t a)
{
    if (a<=3)
        return 0x87e042286230ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_70", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_70(a) cavm_bbxd_abx_config_2_70_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_70(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_70(a) "BBXD_ABX_CONFIG_2_70"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_70(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_70(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_71
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_71
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_71_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_71_s cn; */
};
typedef union cavm_bbxd_abx_config_2_71 cavm_bbxd_abx_config_2_71_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_71(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_71(uint64_t a)
{
    if (a<=3)
        return 0x87e042286238ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_71", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_71(a) cavm_bbxd_abx_config_2_71_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_71(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_71(a) "BBXD_ABX_CONFIG_2_71"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_71(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_71(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_72
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_72
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_72_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_72_s cn; */
};
typedef union cavm_bbxd_abx_config_2_72 cavm_bbxd_abx_config_2_72_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_72(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_72(uint64_t a)
{
    if (a<=3)
        return 0x87e042286240ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_72", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_72(a) cavm_bbxd_abx_config_2_72_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_72(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_72(a) "BBXD_ABX_CONFIG_2_72"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_72(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_72(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_73
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_73
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_73_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_73_s cn; */
};
typedef union cavm_bbxd_abx_config_2_73 cavm_bbxd_abx_config_2_73_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_73(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_73(uint64_t a)
{
    if (a<=3)
        return 0x87e042286248ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_73", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_73(a) cavm_bbxd_abx_config_2_73_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_73(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_73(a) "BBXD_ABX_CONFIG_2_73"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_73(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_73(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_74
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_74
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_74_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_74_s cn; */
};
typedef union cavm_bbxd_abx_config_2_74 cavm_bbxd_abx_config_2_74_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_74(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_74(uint64_t a)
{
    if (a<=3)
        return 0x87e042286250ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_74", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_74(a) cavm_bbxd_abx_config_2_74_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_74(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_74(a) "BBXD_ABX_CONFIG_2_74"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_74(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_74(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_75
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_75
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_75_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_75_s cn; */
};
typedef union cavm_bbxd_abx_config_2_75 cavm_bbxd_abx_config_2_75_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_75(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_75(uint64_t a)
{
    if (a<=3)
        return 0x87e042286258ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_75", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_75(a) cavm_bbxd_abx_config_2_75_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_75(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_75(a) "BBXD_ABX_CONFIG_2_75"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_75(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_75(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_76
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_76
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_76_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_76_s cn; */
};
typedef union cavm_bbxd_abx_config_2_76 cavm_bbxd_abx_config_2_76_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_76(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_76(uint64_t a)
{
    if (a<=3)
        return 0x87e042286260ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_76", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_76(a) cavm_bbxd_abx_config_2_76_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_76(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_76(a) "BBXD_ABX_CONFIG_2_76"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_76(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_76(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_77
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_77
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_77_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_77_s cn; */
};
typedef union cavm_bbxd_abx_config_2_77 cavm_bbxd_abx_config_2_77_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_77(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_77(uint64_t a)
{
    if (a<=3)
        return 0x87e042286268ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_77", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_77(a) cavm_bbxd_abx_config_2_77_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_77(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_77(a) "BBXD_ABX_CONFIG_2_77"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_77(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_77(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_78
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_78
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_78_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_78_s cn; */
};
typedef union cavm_bbxd_abx_config_2_78 cavm_bbxd_abx_config_2_78_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_78(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_78(uint64_t a)
{
    if (a<=3)
        return 0x87e042286270ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_78", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_78(a) cavm_bbxd_abx_config_2_78_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_78(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_78(a) "BBXD_ABX_CONFIG_2_78"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_78(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_78(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_79
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_79
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_79_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_79_s cn; */
};
typedef union cavm_bbxd_abx_config_2_79 cavm_bbxd_abx_config_2_79_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_79(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_79(uint64_t a)
{
    if (a<=3)
        return 0x87e042286278ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_79", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_79(a) cavm_bbxd_abx_config_2_79_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_79(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_79(a) "BBXD_ABX_CONFIG_2_79"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_79(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_79(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_8
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_8
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_8_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_8_s cn; */
};
typedef union cavm_bbxd_abx_config_2_8 cavm_bbxd_abx_config_2_8_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_8(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_8(uint64_t a)
{
    if (a<=3)
        return 0x87e042286040ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_8", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_8(a) cavm_bbxd_abx_config_2_8_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_8(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_8(a) "BBXD_ABX_CONFIG_2_8"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_8(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_8(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_80
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_80
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_80_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_80_s cn; */
};
typedef union cavm_bbxd_abx_config_2_80 cavm_bbxd_abx_config_2_80_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_80(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_80(uint64_t a)
{
    if (a<=3)
        return 0x87e042286280ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_80", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_80(a) cavm_bbxd_abx_config_2_80_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_80(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_80(a) "BBXD_ABX_CONFIG_2_80"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_80(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_80(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_81
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_81
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_81_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_81_s cn; */
};
typedef union cavm_bbxd_abx_config_2_81 cavm_bbxd_abx_config_2_81_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_81(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_81(uint64_t a)
{
    if (a<=3)
        return 0x87e042286288ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_81", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_81(a) cavm_bbxd_abx_config_2_81_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_81(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_81(a) "BBXD_ABX_CONFIG_2_81"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_81(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_81(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_82
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_82
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_82_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_82_s cn; */
};
typedef union cavm_bbxd_abx_config_2_82 cavm_bbxd_abx_config_2_82_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_82(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_82(uint64_t a)
{
    if (a<=3)
        return 0x87e042286290ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_82", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_82(a) cavm_bbxd_abx_config_2_82_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_82(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_82(a) "BBXD_ABX_CONFIG_2_82"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_82(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_82(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_83
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_83
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_83_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_83_s cn; */
};
typedef union cavm_bbxd_abx_config_2_83 cavm_bbxd_abx_config_2_83_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_83(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_83(uint64_t a)
{
    if (a<=3)
        return 0x87e042286298ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_83", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_83(a) cavm_bbxd_abx_config_2_83_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_83(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_83(a) "BBXD_ABX_CONFIG_2_83"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_83(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_83(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_84
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_84
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_84_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_84_s cn; */
};
typedef union cavm_bbxd_abx_config_2_84 cavm_bbxd_abx_config_2_84_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_84(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_84(uint64_t a)
{
    if (a<=3)
        return 0x87e0422862a0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_84", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_84(a) cavm_bbxd_abx_config_2_84_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_84(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_84(a) "BBXD_ABX_CONFIG_2_84"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_84(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_84(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_85
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_85
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_85_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_85_s cn; */
};
typedef union cavm_bbxd_abx_config_2_85 cavm_bbxd_abx_config_2_85_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_85(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_85(uint64_t a)
{
    if (a<=3)
        return 0x87e0422862a8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_85", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_85(a) cavm_bbxd_abx_config_2_85_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_85(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_85(a) "BBXD_ABX_CONFIG_2_85"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_85(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_85(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_86
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_86
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_86_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_86_s cn; */
};
typedef union cavm_bbxd_abx_config_2_86 cavm_bbxd_abx_config_2_86_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_86(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_86(uint64_t a)
{
    if (a<=3)
        return 0x87e0422862b0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_86", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_86(a) cavm_bbxd_abx_config_2_86_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_86(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_86(a) "BBXD_ABX_CONFIG_2_86"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_86(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_86(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_87
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_87
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_87_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_87_s cn; */
};
typedef union cavm_bbxd_abx_config_2_87 cavm_bbxd_abx_config_2_87_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_87(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_87(uint64_t a)
{
    if (a<=3)
        return 0x87e0422862b8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_87", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_87(a) cavm_bbxd_abx_config_2_87_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_87(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_87(a) "BBXD_ABX_CONFIG_2_87"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_87(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_87(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_88
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_88
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_88_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_88_s cn; */
};
typedef union cavm_bbxd_abx_config_2_88 cavm_bbxd_abx_config_2_88_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_88(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_88(uint64_t a)
{
    if (a<=3)
        return 0x87e0422862c0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_88", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_88(a) cavm_bbxd_abx_config_2_88_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_88(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_88(a) "BBXD_ABX_CONFIG_2_88"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_88(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_88(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_89
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_89
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_89_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_89_s cn; */
};
typedef union cavm_bbxd_abx_config_2_89 cavm_bbxd_abx_config_2_89_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_89(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_89(uint64_t a)
{
    if (a<=3)
        return 0x87e0422862c8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_89", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_89(a) cavm_bbxd_abx_config_2_89_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_89(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_89(a) "BBXD_ABX_CONFIG_2_89"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_89(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_89(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_9
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_9
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_9_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_62            : 63; /**< [ 62:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 1;  /**< [ 63: 63](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_9_s cn; */
};
typedef union cavm_bbxd_abx_config_2_9 cavm_bbxd_abx_config_2_9_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_9(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_9(uint64_t a)
{
    if (a<=3)
        return 0x87e042286048ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_9", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_9(a) cavm_bbxd_abx_config_2_9_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_9(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_9(a) "BBXD_ABX_CONFIG_2_9"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_9(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_9(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_90
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_90
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_90_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_90_s cn; */
};
typedef union cavm_bbxd_abx_config_2_90 cavm_bbxd_abx_config_2_90_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_90(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_90(uint64_t a)
{
    if (a<=3)
        return 0x87e0422862d0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_90", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_90(a) cavm_bbxd_abx_config_2_90_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_90(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_90(a) "BBXD_ABX_CONFIG_2_90"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_90(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_90(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_91
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_91
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_91_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_91_s cn; */
};
typedef union cavm_bbxd_abx_config_2_91 cavm_bbxd_abx_config_2_91_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_91(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_91(uint64_t a)
{
    if (a<=3)
        return 0x87e0422862d8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_91", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_91(a) cavm_bbxd_abx_config_2_91_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_91(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_91(a) "BBXD_ABX_CONFIG_2_91"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_91(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_91(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_92
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_92
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_92_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_92_s cn; */
};
typedef union cavm_bbxd_abx_config_2_92 cavm_bbxd_abx_config_2_92_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_92(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_92(uint64_t a)
{
    if (a<=3)
        return 0x87e0422862e0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_92", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_92(a) cavm_bbxd_abx_config_2_92_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_92(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_92(a) "BBXD_ABX_CONFIG_2_92"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_92(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_92(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_93
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_93
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_93_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_93_s cn; */
};
typedef union cavm_bbxd_abx_config_2_93 cavm_bbxd_abx_config_2_93_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_93(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_93(uint64_t a)
{
    if (a<=3)
        return 0x87e0422862e8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_93", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_93(a) cavm_bbxd_abx_config_2_93_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_93(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_93(a) "BBXD_ABX_CONFIG_2_93"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_93(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_93(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_94
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_94
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_94_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_94_s cn; */
};
typedef union cavm_bbxd_abx_config_2_94 cavm_bbxd_abx_config_2_94_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_94(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_94(uint64_t a)
{
    if (a<=3)
        return 0x87e0422862f0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_94", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_94(a) cavm_bbxd_abx_config_2_94_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_94(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_94(a) "BBXD_ABX_CONFIG_2_94"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_94(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_94(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_95
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_95
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_95_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_95_s cn; */
};
typedef union cavm_bbxd_abx_config_2_95 cavm_bbxd_abx_config_2_95_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_95(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_95(uint64_t a)
{
    if (a<=3)
        return 0x87e0422862f8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_95", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_95(a) cavm_bbxd_abx_config_2_95_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_95(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_95(a) "BBXD_ABX_CONFIG_2_95"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_95(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_95(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_96
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_96
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_96_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_31            : 32; /**< [ 31:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_96_s cn; */
};
typedef union cavm_bbxd_abx_config_2_96 cavm_bbxd_abx_config_2_96_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_96(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_96(uint64_t a)
{
    if (a<=3)
        return 0x87e042286300ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_96", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_96(a) cavm_bbxd_abx_config_2_96_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_96(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_96(a) "BBXD_ABX_CONFIG_2_96"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_96(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_96(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_97
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_97
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_97_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 16; /**< [ 63: 48](RO) SS_Reserved */
        uint64_t ss_rsvd_47            : 48; /**< [ 47:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_47            : 48; /**< [ 47:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 16; /**< [ 63: 48](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_97_s cn; */
};
typedef union cavm_bbxd_abx_config_2_97 cavm_bbxd_abx_config_2_97_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_97(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_97(uint64_t a)
{
    if (a<=3)
        return 0x87e042286308ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_97", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_97(a) cavm_bbxd_abx_config_2_97_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_97(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_97(a) "BBXD_ABX_CONFIG_2_97"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_97(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_97(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_98
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_98
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_98_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 16; /**< [ 63: 48](RO) SS_Reserved */
        uint64_t ss_rsvd_47            : 48; /**< [ 47:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_47            : 48; /**< [ 47:  0](R/W) -- */
        uint64_t ss_rsvd_63            : 16; /**< [ 63: 48](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_98_s cn; */
};
typedef union cavm_bbxd_abx_config_2_98 cavm_bbxd_abx_config_2_98_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_98(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_98(uint64_t a)
{
    if (a<=3)
        return 0x87e042286310ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_98", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_98(a) cavm_bbxd_abx_config_2_98_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_98(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_98(a) "BBXD_ABX_CONFIG_2_98"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_98(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_98(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_config_2_99
 *
 * BBX4 Configuration Register
 * Job Configuration
 */
union cavm_bbxd_abx_config_2_99
{
    uint64_t u;
    struct cavm_bbxd_abx_config_2_99_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_63            : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_config_2_99_s cn; */
};
typedef union cavm_bbxd_abx_config_2_99 cavm_bbxd_abx_config_2_99_t;

static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_99(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONFIG_2_99(uint64_t a)
{
    if (a<=3)
        return 0x87e042286318ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONFIG_2_99", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONFIG_2_99(a) cavm_bbxd_abx_config_2_99_t
#define bustype_CAVM_BBXD_ABX_CONFIG_2_99(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONFIG_2_99(a) "BBXD_ABX_CONFIG_2_99"
#define busnum_CAVM_BBXD_ABX_CONFIG_2_99(a) (a)
#define arguments_CAVM_BBXD_ABX_CONFIG_2_99(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_control_main
 *
 * BBX4 Main Control Register
 * HAB Control
 */
union cavm_bbxd_abx_control_main
{
    uint64_t u;
    struct cavm_bbxd_abx_control_main_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t job_id_2              : 16; /**< [ 63: 48](R/W) Job ID 2 */
        uint64_t job_id_1              : 16; /**< [ 47: 32](R/W) Job ID 1 */
        uint64_t job_id_0              : 16; /**< [ 31: 16](R/W) Job ID 0 */
        uint64_t ss_rsvd_15            : 16; /**< [ 15:  0](RO) SS_Reserved */
#else /* Word 0 - Little Endian */
        uint64_t ss_rsvd_15            : 16; /**< [ 15:  0](RO) SS_Reserved */
        uint64_t job_id_0              : 16; /**< [ 31: 16](R/W) Job ID 0 */
        uint64_t job_id_1              : 16; /**< [ 47: 32](R/W) Job ID 1 */
        uint64_t job_id_2              : 16; /**< [ 63: 48](R/W) Job ID 2 */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_control_main_s cn; */
};
typedef union cavm_bbxd_abx_control_main cavm_bbxd_abx_control_main_t;

static inline uint64_t CAVM_BBXD_ABX_CONTROL_MAIN(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONTROL_MAIN(uint64_t a)
{
    if (a<=3)
        return 0x87e042280000ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONTROL_MAIN", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONTROL_MAIN(a) cavm_bbxd_abx_control_main_t
#define bustype_CAVM_BBXD_ABX_CONTROL_MAIN(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONTROL_MAIN(a) "BBXD_ABX_CONTROL_MAIN"
#define busnum_CAVM_BBXD_ABX_CONTROL_MAIN(a) (a)
#define arguments_CAVM_BBXD_ABX_CONTROL_MAIN(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_control_status
 *
 * BBX4 Status Register
 * HAB Control
 */
union cavm_bbxd_abx_control_status
{
    uint64_t u;
    struct cavm_bbxd_abx_control_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 59; /**< [ 63:  5](RO) SS_Reserved */
        uint64_t ready                 : 1;  /**< [  4:  4](RO/H) Ready to receive the next job */
        uint64_t ss_rsvd_3             : 1;  /**< [  3:  3](RO) SS_Reserved */
        uint64_t busy_2                : 1;  /**< [  2:  2](RO) Busy for CONFIGURATION 2 */
        uint64_t busy_1                : 1;  /**< [  1:  1](RO) Busy for CONFIGURATION 1 */
        uint64_t busy_0                : 1;  /**< [  0:  0](RO) Busy for CONFIGURATION 0 */
#else /* Word 0 - Little Endian */
        uint64_t busy_0                : 1;  /**< [  0:  0](RO) Busy for CONFIGURATION 0 */
        uint64_t busy_1                : 1;  /**< [  1:  1](RO) Busy for CONFIGURATION 1 */
        uint64_t busy_2                : 1;  /**< [  2:  2](RO) Busy for CONFIGURATION 2 */
        uint64_t ss_rsvd_3             : 1;  /**< [  3:  3](RO) SS_Reserved */
        uint64_t ready                 : 1;  /**< [  4:  4](RO/H) Ready to receive the next job */
        uint64_t ss_rsvd_63            : 59; /**< [ 63:  5](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_control_status_s cn; */
};
typedef union cavm_bbxd_abx_control_status cavm_bbxd_abx_control_status_t;

static inline uint64_t CAVM_BBXD_ABX_CONTROL_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_CONTROL_STATUS(uint64_t a)
{
    if (a<=3)
        return 0x87e042280018ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_CONTROL_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_CONTROL_STATUS(a) cavm_bbxd_abx_control_status_t
#define bustype_CAVM_BBXD_ABX_CONTROL_STATUS(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_CONTROL_STATUS(a) "BBXD_ABX_CONTROL_STATUS"
#define busnum_CAVM_BBXD_ABX_CONTROL_STATUS(a) (a)
#define arguments_CAVM_BBXD_ABX_CONTROL_STATUS(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_debug_0
 *
 * BBX4 Debug Register 0
 * HAB information
 */
union cavm_bbxd_abx_debug_0
{
    uint64_t u;
    struct cavm_bbxd_abx_debug_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
        uint64_t hab_info              : 32; /**< [ 31:  0](RO) BBX4 RTL Version */
#else /* Word 0 - Little Endian */
        uint64_t hab_info              : 32; /**< [ 31:  0](RO) BBX4 RTL Version */
        uint64_t ss_rsvd_63            : 32; /**< [ 63: 32](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_debug_0_s cn; */
};
typedef union cavm_bbxd_abx_debug_0 cavm_bbxd_abx_debug_0_t;

static inline uint64_t CAVM_BBXD_ABX_DEBUG_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_DEBUG_0(uint64_t a)
{
    if (a<=3)
        return 0x87e042281000ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_DEBUG_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_DEBUG_0(a) cavm_bbxd_abx_debug_0_t
#define bustype_CAVM_BBXD_ABX_DEBUG_0(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_DEBUG_0(a) "BBXD_ABX_DEBUG_0"
#define busnum_CAVM_BBXD_ABX_DEBUG_0(a) (a)
#define arguments_CAVM_BBXD_ABX_DEBUG_0(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_debug_01
 *
 * BBX4 Debug Register 1
 * AB Processing Throught for job
 */
union cavm_bbxd_abx_debug_01
{
    uint64_t u;
    struct cavm_bbxd_abx_debug_01_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t read_if_throughput_job : 32;/**< [ 63: 32](RO) clock count with 1Ghz through the Read IF */
        uint64_t opr_throughput        : 32; /**< [ 31:  0](RO) clock count with 1Ghz through the Write IF */
#else /* Word 0 - Little Endian */
        uint64_t opr_throughput        : 32; /**< [ 31:  0](RO) clock count with 1Ghz through the Write IF */
        uint64_t read_if_throughput_job : 32;/**< [ 63: 32](RO) clock count with 1Ghz through the Read IF */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_debug_01_s cn; */
};
typedef union cavm_bbxd_abx_debug_01 cavm_bbxd_abx_debug_01_t;

static inline uint64_t CAVM_BBXD_ABX_DEBUG_01(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_DEBUG_01(uint64_t a)
{
    if (a<=3)
        return 0x87e042281008ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_DEBUG_01", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_DEBUG_01(a) cavm_bbxd_abx_debug_01_t
#define bustype_CAVM_BBXD_ABX_DEBUG_01(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_DEBUG_01(a) "BBXD_ABX_DEBUG_01"
#define busnum_CAVM_BBXD_ABX_DEBUG_01(a) (a)
#define arguments_CAVM_BBXD_ABX_DEBUG_01(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_error_register_0
 *
 * BBX4 Error Register 0
 * HAB Control
 */
union cavm_bbxd_abx_error_register_0
{
    uint64_t u;
    struct cavm_bbxd_abx_error_register_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t job_id_dma_error_2    : 16; /**< [ 63: 48](R/W1C) Job ID 2 for DMA error */
        uint64_t job_id_dma_error_1    : 16; /**< [ 47: 32](R/W1C) Job ID 1 for DMA error */
        uint64_t job_id_dma_error_0    : 16; /**< [ 31: 16](R/W1C) Job ID 0 for DMA error */
        uint64_t ss_rsvd_15            : 11; /**< [ 15:  5](RO) SS_Reserved */
        uint64_t rp0_overflow          : 1;  /**< [  4:  4](R/W1C) Read Port 0 Overflow */
        uint64_t ss_rsvd_3             : 3;  /**< [  3:  1](RO) SS_Reserved */
        uint64_t rp0_underflow         : 1;  /**< [  0:  0](R/W1C) Read Port 0 Underflow */
#else /* Word 0 - Little Endian */
        uint64_t rp0_underflow         : 1;  /**< [  0:  0](R/W1C) Read Port 0 Underflow */
        uint64_t ss_rsvd_3             : 3;  /**< [  3:  1](RO) SS_Reserved */
        uint64_t rp0_overflow          : 1;  /**< [  4:  4](R/W1C) Read Port 0 Overflow */
        uint64_t ss_rsvd_15            : 11; /**< [ 15:  5](RO) SS_Reserved */
        uint64_t job_id_dma_error_0    : 16; /**< [ 31: 16](R/W1C) Job ID 0 for DMA error */
        uint64_t job_id_dma_error_1    : 16; /**< [ 47: 32](R/W1C) Job ID 1 for DMA error */
        uint64_t job_id_dma_error_2    : 16; /**< [ 63: 48](R/W1C) Job ID 2 for DMA error */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_error_register_0_s cn; */
};
typedef union cavm_bbxd_abx_error_register_0 cavm_bbxd_abx_error_register_0_t;

static inline uint64_t CAVM_BBXD_ABX_ERROR_REGISTER_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_ERROR_REGISTER_0(uint64_t a)
{
    if (a<=3)
        return 0x87e042280030ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_ERROR_REGISTER_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_ERROR_REGISTER_0(a) cavm_bbxd_abx_error_register_0_t
#define bustype_CAVM_BBXD_ABX_ERROR_REGISTER_0(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_ERROR_REGISTER_0(a) "BBXD_ABX_ERROR_REGISTER_0"
#define busnum_CAVM_BBXD_ABX_ERROR_REGISTER_0(a) (a)
#define arguments_CAVM_BBXD_ABX_ERROR_REGISTER_0(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_error_register_1
 *
 * BBX4 Error Register 1
 * HAB Control
 */
union cavm_bbxd_abx_error_register_1
{
    uint64_t u;
    struct cavm_bbxd_abx_error_register_1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t inter_err_job_id_2    : 16; /**< [ 63: 48](R/W1C) internal error jib ID 2 for Error Register 1 */
        uint64_t inter_err_job_id_1    : 16; /**< [ 47: 32](R/W1C) internal error jib ID 1 for Error Register 1 */
        uint64_t inter_err_job_id_0    : 16; /**< [ 31: 16](R/W1C) internal error jib ID 0 for Error Register 1 */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t job_error_3           : 1;  /**< [ 12: 12](R/W1C) JOB_ERROR_3 */
        uint64_t ss_rsvd_11            : 3;  /**< [ 11:  9](RO) SS_Reserved */
        uint64_t job_error_2           : 1;  /**< [  8:  8](R/W1C) JOB_ERROR_2 */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t job_error_1           : 1;  /**< [  4:  4](R/W1C/H) JOB_ERROR_1 */
        uint64_t ss_rsvd_3             : 3;  /**< [  3:  1](RO) SS_Reserved */
        uint64_t job_error_0           : 1;  /**< [  0:  0](R/W1C) JOB_ERROR_0 */
#else /* Word 0 - Little Endian */
        uint64_t job_error_0           : 1;  /**< [  0:  0](R/W1C) JOB_ERROR_0 */
        uint64_t ss_rsvd_3             : 3;  /**< [  3:  1](RO) SS_Reserved */
        uint64_t job_error_1           : 1;  /**< [  4:  4](R/W1C/H) JOB_ERROR_1 */
        uint64_t ss_rsvd_7             : 3;  /**< [  7:  5](RO) SS_Reserved */
        uint64_t job_error_2           : 1;  /**< [  8:  8](R/W1C) JOB_ERROR_2 */
        uint64_t ss_rsvd_11            : 3;  /**< [ 11:  9](RO) SS_Reserved */
        uint64_t job_error_3           : 1;  /**< [ 12: 12](R/W1C) JOB_ERROR_3 */
        uint64_t ss_rsvd_15            : 3;  /**< [ 15: 13](RO) SS_Reserved */
        uint64_t inter_err_job_id_0    : 16; /**< [ 31: 16](R/W1C) internal error jib ID 0 for Error Register 1 */
        uint64_t inter_err_job_id_1    : 16; /**< [ 47: 32](R/W1C) internal error jib ID 1 for Error Register 1 */
        uint64_t inter_err_job_id_2    : 16; /**< [ 63: 48](R/W1C) internal error jib ID 2 for Error Register 1 */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_error_register_1_s cn; */
};
typedef union cavm_bbxd_abx_error_register_1 cavm_bbxd_abx_error_register_1_t;

static inline uint64_t CAVM_BBXD_ABX_ERROR_REGISTER_1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_ERROR_REGISTER_1(uint64_t a)
{
    if (a<=3)
        return 0x87e042280038ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_ERROR_REGISTER_1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_ERROR_REGISTER_1(a) cavm_bbxd_abx_error_register_1_t
#define bustype_CAVM_BBXD_ABX_ERROR_REGISTER_1(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_ERROR_REGISTER_1(a) "BBXD_ABX_ERROR_REGISTER_1"
#define busnum_CAVM_BBXD_ABX_ERROR_REGISTER_1(a) (a)
#define arguments_CAVM_BBXD_ABX_ERROR_REGISTER_1(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_error_register_2
 *
 * BBX4 Error Register 2
 * HAB Control
 */
union cavm_bbxd_abx_error_register_2
{
    uint64_t u;
    struct cavm_bbxd_abx_error_register_2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 59; /**< [ 63:  5](RO) SS_Reserved */
        uint64_t rp0_overflow_en       : 1;  /**< [  4:  4](R/W) Read Port 0 Overflow Error Enable */
        uint64_t ss_rsvd_3             : 3;  /**< [  3:  1](RO) SS_Reserved */
        uint64_t rp0_underflow_en      : 1;  /**< [  0:  0](R/W) Read Port 0 Underflow Error Enable */
#else /* Word 0 - Little Endian */
        uint64_t rp0_underflow_en      : 1;  /**< [  0:  0](R/W) Read Port 0 Underflow Error Enable */
        uint64_t ss_rsvd_3             : 3;  /**< [  3:  1](RO) SS_Reserved */
        uint64_t rp0_overflow_en       : 1;  /**< [  4:  4](R/W) Read Port 0 Overflow Error Enable */
        uint64_t ss_rsvd_63            : 59; /**< [ 63:  5](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_error_register_2_s cn; */
};
typedef union cavm_bbxd_abx_error_register_2 cavm_bbxd_abx_error_register_2_t;

static inline uint64_t CAVM_BBXD_ABX_ERROR_REGISTER_2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_ERROR_REGISTER_2(uint64_t a)
{
    if (a<=3)
        return 0x87e042280040ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_ERROR_REGISTER_2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_ERROR_REGISTER_2(a) cavm_bbxd_abx_error_register_2_t
#define bustype_CAVM_BBXD_ABX_ERROR_REGISTER_2(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_ERROR_REGISTER_2(a) "BBXD_ABX_ERROR_REGISTER_2"
#define busnum_CAVM_BBXD_ABX_ERROR_REGISTER_2(a) (a)
#define arguments_CAVM_BBXD_ABX_ERROR_REGISTER_2(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxd_ab#_error_register_3
 *
 * BBX4 Error Register 3
 * HAB Control
 */
union cavm_bbxd_abx_error_register_3
{
    uint64_t u;
    struct cavm_bbxd_abx_error_register_3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_rsvd_63            : 63; /**< [ 63:  1](RO) SS_Reserved */
        uint64_t hab_error_en          : 1;  /**< [  0:  0](R/W) HAB specific Error Enable */
#else /* Word 0 - Little Endian */
        uint64_t hab_error_en          : 1;  /**< [  0:  0](R/W) HAB specific Error Enable */
        uint64_t ss_rsvd_63            : 63; /**< [ 63:  1](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxd_abx_error_register_3_s cn; */
};
typedef union cavm_bbxd_abx_error_register_3 cavm_bbxd_abx_error_register_3_t;

static inline uint64_t CAVM_BBXD_ABX_ERROR_REGISTER_3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXD_ABX_ERROR_REGISTER_3(uint64_t a)
{
    if (a<=3)
        return 0x87e042280048ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXD_ABX_ERROR_REGISTER_3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXD_ABX_ERROR_REGISTER_3(a) cavm_bbxd_abx_error_register_3_t
#define bustype_CAVM_BBXD_ABX_ERROR_REGISTER_3(a) CSR_TYPE_RSL
#define basename_CAVM_BBXD_ABX_ERROR_REGISTER_3(a) "BBXD_ABX_ERROR_REGISTER_3"
#define busnum_CAVM_BBXD_ABX_ERROR_REGISTER_3(a) (a)
#define arguments_CAVM_BBXD_ABX_ERROR_REGISTER_3(a) (a),-1,-1,-1

#endif /* __CAVM_CSRS_BBXD_H__ */
