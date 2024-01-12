#ifndef __CAVM_CSRS_BBXE_H__
#define __CAVM_CSRS_BBXE_H__
/* This file is auto-generated. Do not edit */

/***********************license start***********************************
* Copyright (C) 2021-2024 Marvell.
* SPDX-License-Identifier: BSD-3-Clause
* https://spdx.org/licenses
***********************license end**************************************/


/**
 * @file
 *
 * Configuration and status register (CSR) address and type definitions for
 * BBXE.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Register (RSL) bbxe_ab#_config_0
 *
 * BBX5 Configuration Registers
 * Job Configuration
 */
union cavm_bbxe_abx_config_0
{
    uint64_t u;
    struct cavm_bbxe_abx_config_0_s
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
    /* struct cavm_bbxe_abx_config_0_s cn; */
};
typedef union cavm_bbxe_abx_config_0 cavm_bbxe_abx_config_0_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302000ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_0(a) cavm_bbxe_abx_config_0_t
#define bustype_CAVM_BBXE_ABX_CONFIG_0(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_0(a) "BBXE_ABX_CONFIG_0"
#define busnum_CAVM_BBXE_ABX_CONFIG_0(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_0(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_1
 *
 * BBX5 Configuration Registers
 * Job Configuration
 */
union cavm_bbxe_abx_config_1
{
    uint64_t u;
    struct cavm_bbxe_abx_config_1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig18          : 23; /**< [ 63: 41](RO) SS_Reserved */
        uint64_t ss_res_sig19          : 31; /**< [ 40: 10](R/W) -- */
        uint64_t ss_res_sig20          : 1;  /**< [  9:  9](RO) SS_Reserved */
        uint64_t ss_res_sig21          : 9;  /**< [  8:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig21          : 9;  /**< [  8:  0](R/W) -- */
        uint64_t ss_res_sig20          : 1;  /**< [  9:  9](RO) SS_Reserved */
        uint64_t ss_res_sig19          : 31; /**< [ 40: 10](R/W) -- */
        uint64_t ss_res_sig18          : 23; /**< [ 63: 41](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_1_s cn; */
};
typedef union cavm_bbxe_abx_config_1 cavm_bbxe_abx_config_1_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302008ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_1(a) cavm_bbxe_abx_config_1_t
#define bustype_CAVM_BBXE_ABX_CONFIG_1(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_1(a) "BBXE_ABX_CONFIG_1"
#define busnum_CAVM_BBXE_ABX_CONFIG_1(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_1(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_10
 *
 * BBX5 Configuration Register 10
 * Job Configuration
 */
union cavm_bbxe_abx_config_10
{
    uint64_t u;
    struct cavm_bbxe_abx_config_10_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig34          : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig34          : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_10_s cn; */
};
typedef union cavm_bbxe_abx_config_10 cavm_bbxe_abx_config_10_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_10(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_10(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302050ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_10", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_10(a) cavm_bbxe_abx_config_10_t
#define bustype_CAVM_BBXE_ABX_CONFIG_10(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_10(a) "BBXE_ABX_CONFIG_10"
#define busnum_CAVM_BBXE_ABX_CONFIG_10(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_10(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_100
 *
 * BBX5 Configuration Register 100
 * Job Configuration
 */
union cavm_bbxe_abx_config_100
{
    uint64_t u;
    struct cavm_bbxe_abx_config_100_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig124         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig124         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_100_s cn; */
};
typedef union cavm_bbxe_abx_config_100 cavm_bbxe_abx_config_100_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_100(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_100(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302320ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_100", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_100(a) cavm_bbxe_abx_config_100_t
#define bustype_CAVM_BBXE_ABX_CONFIG_100(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_100(a) "BBXE_ABX_CONFIG_100"
#define busnum_CAVM_BBXE_ABX_CONFIG_100(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_100(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_101
 *
 * BBX5 Configuration Register 101
 * Job Configuration
 */
union cavm_bbxe_abx_config_101
{
    uint64_t u;
    struct cavm_bbxe_abx_config_101_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig125         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig125         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_101_s cn; */
};
typedef union cavm_bbxe_abx_config_101 cavm_bbxe_abx_config_101_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_101(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_101(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302328ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_101", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_101(a) cavm_bbxe_abx_config_101_t
#define bustype_CAVM_BBXE_ABX_CONFIG_101(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_101(a) "BBXE_ABX_CONFIG_101"
#define busnum_CAVM_BBXE_ABX_CONFIG_101(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_101(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_102
 *
 * BBX5 Configuration Register 102
 * Job Configuration
 */
union cavm_bbxe_abx_config_102
{
    uint64_t u;
    struct cavm_bbxe_abx_config_102_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig126         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig126         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_102_s cn; */
};
typedef union cavm_bbxe_abx_config_102 cavm_bbxe_abx_config_102_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_102(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_102(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302330ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_102", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_102(a) cavm_bbxe_abx_config_102_t
#define bustype_CAVM_BBXE_ABX_CONFIG_102(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_102(a) "BBXE_ABX_CONFIG_102"
#define busnum_CAVM_BBXE_ABX_CONFIG_102(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_102(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_103
 *
 * BBX5 Configuration Register 103
 * Job Configuration
 */
union cavm_bbxe_abx_config_103
{
    uint64_t u;
    struct cavm_bbxe_abx_config_103_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig127         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig127         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_103_s cn; */
};
typedef union cavm_bbxe_abx_config_103 cavm_bbxe_abx_config_103_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_103(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_103(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302338ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_103", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_103(a) cavm_bbxe_abx_config_103_t
#define bustype_CAVM_BBXE_ABX_CONFIG_103(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_103(a) "BBXE_ABX_CONFIG_103"
#define busnum_CAVM_BBXE_ABX_CONFIG_103(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_103(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_104
 *
 * BBX5 Configuration Register 104
 * Job Configuration
 */
union cavm_bbxe_abx_config_104
{
    uint64_t u;
    struct cavm_bbxe_abx_config_104_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig128         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig128         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_104_s cn; */
};
typedef union cavm_bbxe_abx_config_104 cavm_bbxe_abx_config_104_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_104(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_104(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302340ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_104", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_104(a) cavm_bbxe_abx_config_104_t
#define bustype_CAVM_BBXE_ABX_CONFIG_104(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_104(a) "BBXE_ABX_CONFIG_104"
#define busnum_CAVM_BBXE_ABX_CONFIG_104(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_104(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_105
 *
 * BBX5 Configuration Register 105
 * Job Configuration
 */
union cavm_bbxe_abx_config_105
{
    uint64_t u;
    struct cavm_bbxe_abx_config_105_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig129         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig129         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_105_s cn; */
};
typedef union cavm_bbxe_abx_config_105 cavm_bbxe_abx_config_105_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_105(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_105(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302348ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_105", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_105(a) cavm_bbxe_abx_config_105_t
#define bustype_CAVM_BBXE_ABX_CONFIG_105(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_105(a) "BBXE_ABX_CONFIG_105"
#define busnum_CAVM_BBXE_ABX_CONFIG_105(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_105(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_106
 *
 * BBX5 Configuration Register 106
 * Job Configuration
 */
union cavm_bbxe_abx_config_106
{
    uint64_t u;
    struct cavm_bbxe_abx_config_106_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig130         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig130         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_106_s cn; */
};
typedef union cavm_bbxe_abx_config_106 cavm_bbxe_abx_config_106_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_106(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_106(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302350ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_106", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_106(a) cavm_bbxe_abx_config_106_t
#define bustype_CAVM_BBXE_ABX_CONFIG_106(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_106(a) "BBXE_ABX_CONFIG_106"
#define busnum_CAVM_BBXE_ABX_CONFIG_106(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_106(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_107
 *
 * BBX5 Configuration Register 107
 * Job Configuration
 */
union cavm_bbxe_abx_config_107
{
    uint64_t u;
    struct cavm_bbxe_abx_config_107_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig131         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig131         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_107_s cn; */
};
typedef union cavm_bbxe_abx_config_107 cavm_bbxe_abx_config_107_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_107(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_107(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302358ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_107", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_107(a) cavm_bbxe_abx_config_107_t
#define bustype_CAVM_BBXE_ABX_CONFIG_107(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_107(a) "BBXE_ABX_CONFIG_107"
#define busnum_CAVM_BBXE_ABX_CONFIG_107(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_107(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_108
 *
 * BBX5 Configuration Register 108
 * Job Configuration
 */
union cavm_bbxe_abx_config_108
{
    uint64_t u;
    struct cavm_bbxe_abx_config_108_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig132         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig132         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_108_s cn; */
};
typedef union cavm_bbxe_abx_config_108 cavm_bbxe_abx_config_108_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_108(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_108(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302360ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_108", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_108(a) cavm_bbxe_abx_config_108_t
#define bustype_CAVM_BBXE_ABX_CONFIG_108(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_108(a) "BBXE_ABX_CONFIG_108"
#define busnum_CAVM_BBXE_ABX_CONFIG_108(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_108(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_109
 *
 * BBX5 Configuration Register 109
 * Job Configuration
 */
union cavm_bbxe_abx_config_109
{
    uint64_t u;
    struct cavm_bbxe_abx_config_109_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig133         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig133         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_109_s cn; */
};
typedef union cavm_bbxe_abx_config_109 cavm_bbxe_abx_config_109_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_109(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_109(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302368ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_109", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_109(a) cavm_bbxe_abx_config_109_t
#define bustype_CAVM_BBXE_ABX_CONFIG_109(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_109(a) "BBXE_ABX_CONFIG_109"
#define busnum_CAVM_BBXE_ABX_CONFIG_109(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_109(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_11
 *
 * BBX5 Configuration Register 11
 * Job Configuration
 */
union cavm_bbxe_abx_config_11
{
    uint64_t u;
    struct cavm_bbxe_abx_config_11_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig35          : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig35          : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_11_s cn; */
};
typedef union cavm_bbxe_abx_config_11 cavm_bbxe_abx_config_11_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_11(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_11(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302058ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_11", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_11(a) cavm_bbxe_abx_config_11_t
#define bustype_CAVM_BBXE_ABX_CONFIG_11(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_11(a) "BBXE_ABX_CONFIG_11"
#define busnum_CAVM_BBXE_ABX_CONFIG_11(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_11(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_110
 *
 * BBX5 Configuration Register 110
 * Job Configuration
 */
union cavm_bbxe_abx_config_110
{
    uint64_t u;
    struct cavm_bbxe_abx_config_110_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig134         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig134         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_110_s cn; */
};
typedef union cavm_bbxe_abx_config_110 cavm_bbxe_abx_config_110_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_110(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_110(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302370ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_110", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_110(a) cavm_bbxe_abx_config_110_t
#define bustype_CAVM_BBXE_ABX_CONFIG_110(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_110(a) "BBXE_ABX_CONFIG_110"
#define busnum_CAVM_BBXE_ABX_CONFIG_110(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_110(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_111
 *
 * BBX5 Configuration Register 111
 * Job Configuration
 */
union cavm_bbxe_abx_config_111
{
    uint64_t u;
    struct cavm_bbxe_abx_config_111_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig135         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig135         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_111_s cn; */
};
typedef union cavm_bbxe_abx_config_111 cavm_bbxe_abx_config_111_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_111(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_111(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302378ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_111", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_111(a) cavm_bbxe_abx_config_111_t
#define bustype_CAVM_BBXE_ABX_CONFIG_111(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_111(a) "BBXE_ABX_CONFIG_111"
#define busnum_CAVM_BBXE_ABX_CONFIG_111(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_111(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_112
 *
 * BBX5 Configuration Register 112
 * Job Configuration
 */
union cavm_bbxe_abx_config_112
{
    uint64_t u;
    struct cavm_bbxe_abx_config_112_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig136         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig136         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_112_s cn; */
};
typedef union cavm_bbxe_abx_config_112 cavm_bbxe_abx_config_112_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_112(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_112(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302380ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_112", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_112(a) cavm_bbxe_abx_config_112_t
#define bustype_CAVM_BBXE_ABX_CONFIG_112(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_112(a) "BBXE_ABX_CONFIG_112"
#define busnum_CAVM_BBXE_ABX_CONFIG_112(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_112(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_113
 *
 * BBX5 Configuration Register 113
 * Job Configuration
 */
union cavm_bbxe_abx_config_113
{
    uint64_t u;
    struct cavm_bbxe_abx_config_113_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig137         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig137         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_113_s cn; */
};
typedef union cavm_bbxe_abx_config_113 cavm_bbxe_abx_config_113_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_113(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_113(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302388ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_113", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_113(a) cavm_bbxe_abx_config_113_t
#define bustype_CAVM_BBXE_ABX_CONFIG_113(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_113(a) "BBXE_ABX_CONFIG_113"
#define busnum_CAVM_BBXE_ABX_CONFIG_113(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_113(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_114
 *
 * BBX5 Configuration Register 114
 * Job Configuration
 */
union cavm_bbxe_abx_config_114
{
    uint64_t u;
    struct cavm_bbxe_abx_config_114_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig138         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig138         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_114_s cn; */
};
typedef union cavm_bbxe_abx_config_114 cavm_bbxe_abx_config_114_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_114(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_114(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302390ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_114", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_114(a) cavm_bbxe_abx_config_114_t
#define bustype_CAVM_BBXE_ABX_CONFIG_114(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_114(a) "BBXE_ABX_CONFIG_114"
#define busnum_CAVM_BBXE_ABX_CONFIG_114(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_114(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_115
 *
 * BBX5 Configuration Register 115
 * Job Configuration
 */
union cavm_bbxe_abx_config_115
{
    uint64_t u;
    struct cavm_bbxe_abx_config_115_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig139         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig139         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_115_s cn; */
};
typedef union cavm_bbxe_abx_config_115 cavm_bbxe_abx_config_115_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_115(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_115(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302398ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_115", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_115(a) cavm_bbxe_abx_config_115_t
#define bustype_CAVM_BBXE_ABX_CONFIG_115(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_115(a) "BBXE_ABX_CONFIG_115"
#define busnum_CAVM_BBXE_ABX_CONFIG_115(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_115(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_116
 *
 * BBX5 Configuration Register 116
 * Job Configuration
 */
union cavm_bbxe_abx_config_116
{
    uint64_t u;
    struct cavm_bbxe_abx_config_116_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig140         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig140         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_116_s cn; */
};
typedef union cavm_bbxe_abx_config_116 cavm_bbxe_abx_config_116_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_116(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_116(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423023a0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_116", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_116(a) cavm_bbxe_abx_config_116_t
#define bustype_CAVM_BBXE_ABX_CONFIG_116(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_116(a) "BBXE_ABX_CONFIG_116"
#define busnum_CAVM_BBXE_ABX_CONFIG_116(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_116(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_117
 *
 * BBX5 Configuration Register 117
 * Job Configuration
 */
union cavm_bbxe_abx_config_117
{
    uint64_t u;
    struct cavm_bbxe_abx_config_117_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig141         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig141         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_117_s cn; */
};
typedef union cavm_bbxe_abx_config_117 cavm_bbxe_abx_config_117_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_117(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_117(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423023a8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_117", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_117(a) cavm_bbxe_abx_config_117_t
#define bustype_CAVM_BBXE_ABX_CONFIG_117(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_117(a) "BBXE_ABX_CONFIG_117"
#define busnum_CAVM_BBXE_ABX_CONFIG_117(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_117(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_118
 *
 * BBX5 Configuration Register 118
 * Job Configuration
 */
union cavm_bbxe_abx_config_118
{
    uint64_t u;
    struct cavm_bbxe_abx_config_118_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig142         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig142         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_118_s cn; */
};
typedef union cavm_bbxe_abx_config_118 cavm_bbxe_abx_config_118_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_118(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_118(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423023b0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_118", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_118(a) cavm_bbxe_abx_config_118_t
#define bustype_CAVM_BBXE_ABX_CONFIG_118(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_118(a) "BBXE_ABX_CONFIG_118"
#define busnum_CAVM_BBXE_ABX_CONFIG_118(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_118(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_119
 *
 * BBX5 Configuration Register 119
 * Job Configuration
 */
union cavm_bbxe_abx_config_119
{
    uint64_t u;
    struct cavm_bbxe_abx_config_119_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig143         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig143         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_119_s cn; */
};
typedef union cavm_bbxe_abx_config_119 cavm_bbxe_abx_config_119_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_119(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_119(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423023b8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_119", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_119(a) cavm_bbxe_abx_config_119_t
#define bustype_CAVM_BBXE_ABX_CONFIG_119(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_119(a) "BBXE_ABX_CONFIG_119"
#define busnum_CAVM_BBXE_ABX_CONFIG_119(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_119(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_12
 *
 * BBX5 Configuration Register 12
 * Job Configuration
 */
union cavm_bbxe_abx_config_12
{
    uint64_t u;
    struct cavm_bbxe_abx_config_12_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig36          : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig36          : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_12_s cn; */
};
typedef union cavm_bbxe_abx_config_12 cavm_bbxe_abx_config_12_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_12(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_12(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302060ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_12", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_12(a) cavm_bbxe_abx_config_12_t
#define bustype_CAVM_BBXE_ABX_CONFIG_12(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_12(a) "BBXE_ABX_CONFIG_12"
#define busnum_CAVM_BBXE_ABX_CONFIG_12(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_12(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_120
 *
 * BBX5 Configuration Register 120
 * Job Configuration
 */
union cavm_bbxe_abx_config_120
{
    uint64_t u;
    struct cavm_bbxe_abx_config_120_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig144         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig144         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_120_s cn; */
};
typedef union cavm_bbxe_abx_config_120 cavm_bbxe_abx_config_120_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_120(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_120(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423023c0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_120", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_120(a) cavm_bbxe_abx_config_120_t
#define bustype_CAVM_BBXE_ABX_CONFIG_120(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_120(a) "BBXE_ABX_CONFIG_120"
#define busnum_CAVM_BBXE_ABX_CONFIG_120(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_120(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_121
 *
 * BBX5 Configuration Register 121
 * Job Configuration
 */
union cavm_bbxe_abx_config_121
{
    uint64_t u;
    struct cavm_bbxe_abx_config_121_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig145         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig145         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_121_s cn; */
};
typedef union cavm_bbxe_abx_config_121 cavm_bbxe_abx_config_121_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_121(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_121(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423023c8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_121", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_121(a) cavm_bbxe_abx_config_121_t
#define bustype_CAVM_BBXE_ABX_CONFIG_121(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_121(a) "BBXE_ABX_CONFIG_121"
#define busnum_CAVM_BBXE_ABX_CONFIG_121(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_121(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_122
 *
 * BBX5 Configuration Register 122
 * Job Configuration
 */
union cavm_bbxe_abx_config_122
{
    uint64_t u;
    struct cavm_bbxe_abx_config_122_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig146         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig146         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_122_s cn; */
};
typedef union cavm_bbxe_abx_config_122 cavm_bbxe_abx_config_122_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_122(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_122(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423023d0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_122", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_122(a) cavm_bbxe_abx_config_122_t
#define bustype_CAVM_BBXE_ABX_CONFIG_122(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_122(a) "BBXE_ABX_CONFIG_122"
#define busnum_CAVM_BBXE_ABX_CONFIG_122(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_122(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_123
 *
 * BBX5 Configuration Register 123
 * Job Configuration
 */
union cavm_bbxe_abx_config_123
{
    uint64_t u;
    struct cavm_bbxe_abx_config_123_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig147         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig147         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_123_s cn; */
};
typedef union cavm_bbxe_abx_config_123 cavm_bbxe_abx_config_123_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_123(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_123(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423023d8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_123", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_123(a) cavm_bbxe_abx_config_123_t
#define bustype_CAVM_BBXE_ABX_CONFIG_123(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_123(a) "BBXE_ABX_CONFIG_123"
#define busnum_CAVM_BBXE_ABX_CONFIG_123(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_123(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_124
 *
 * BBX5 Configuration Register 124
 * Job Configuration
 */
union cavm_bbxe_abx_config_124
{
    uint64_t u;
    struct cavm_bbxe_abx_config_124_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig148         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig148         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_124_s cn; */
};
typedef union cavm_bbxe_abx_config_124 cavm_bbxe_abx_config_124_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_124(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_124(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423023e0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_124", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_124(a) cavm_bbxe_abx_config_124_t
#define bustype_CAVM_BBXE_ABX_CONFIG_124(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_124(a) "BBXE_ABX_CONFIG_124"
#define busnum_CAVM_BBXE_ABX_CONFIG_124(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_124(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_125
 *
 * BBX5 Configuration Register 125
 * Job Configuration
 */
union cavm_bbxe_abx_config_125
{
    uint64_t u;
    struct cavm_bbxe_abx_config_125_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig149         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig149         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_125_s cn; */
};
typedef union cavm_bbxe_abx_config_125 cavm_bbxe_abx_config_125_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_125(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_125(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423023e8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_125", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_125(a) cavm_bbxe_abx_config_125_t
#define bustype_CAVM_BBXE_ABX_CONFIG_125(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_125(a) "BBXE_ABX_CONFIG_125"
#define busnum_CAVM_BBXE_ABX_CONFIG_125(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_125(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_126
 *
 * BBX5 Configuration Register 126
 * Job Configuration
 */
union cavm_bbxe_abx_config_126
{
    uint64_t u;
    struct cavm_bbxe_abx_config_126_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig150         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig150         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_126_s cn; */
};
typedef union cavm_bbxe_abx_config_126 cavm_bbxe_abx_config_126_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_126(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_126(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423023f0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_126", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_126(a) cavm_bbxe_abx_config_126_t
#define bustype_CAVM_BBXE_ABX_CONFIG_126(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_126(a) "BBXE_ABX_CONFIG_126"
#define busnum_CAVM_BBXE_ABX_CONFIG_126(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_126(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_127
 *
 * BBX5 Configuration Register 127
 * Job Configuration
 */
union cavm_bbxe_abx_config_127
{
    uint64_t u;
    struct cavm_bbxe_abx_config_127_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig151         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig151         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_127_s cn; */
};
typedef union cavm_bbxe_abx_config_127 cavm_bbxe_abx_config_127_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_127(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_127(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423023f8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_127", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_127(a) cavm_bbxe_abx_config_127_t
#define bustype_CAVM_BBXE_ABX_CONFIG_127(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_127(a) "BBXE_ABX_CONFIG_127"
#define busnum_CAVM_BBXE_ABX_CONFIG_127(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_127(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_128
 *
 * BBX5 Configuration Register 128
 * Job Configuration
 */
union cavm_bbxe_abx_config_128
{
    uint64_t u;
    struct cavm_bbxe_abx_config_128_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig152         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig152         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_128_s cn; */
};
typedef union cavm_bbxe_abx_config_128 cavm_bbxe_abx_config_128_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_128(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_128(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302400ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_128", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_128(a) cavm_bbxe_abx_config_128_t
#define bustype_CAVM_BBXE_ABX_CONFIG_128(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_128(a) "BBXE_ABX_CONFIG_128"
#define busnum_CAVM_BBXE_ABX_CONFIG_128(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_128(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_129
 *
 * BBX5 Configuration Register 129
 * Job Configuration
 */
union cavm_bbxe_abx_config_129
{
    uint64_t u;
    struct cavm_bbxe_abx_config_129_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig153         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig153         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_129_s cn; */
};
typedef union cavm_bbxe_abx_config_129 cavm_bbxe_abx_config_129_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_129(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_129(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302408ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_129", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_129(a) cavm_bbxe_abx_config_129_t
#define bustype_CAVM_BBXE_ABX_CONFIG_129(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_129(a) "BBXE_ABX_CONFIG_129"
#define busnum_CAVM_BBXE_ABX_CONFIG_129(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_129(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_13
 *
 * BBX5 Configuration Register 13
 * Job Configuration
 */
union cavm_bbxe_abx_config_13
{
    uint64_t u;
    struct cavm_bbxe_abx_config_13_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig37          : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig37          : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_13_s cn; */
};
typedef union cavm_bbxe_abx_config_13 cavm_bbxe_abx_config_13_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_13(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_13(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302068ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_13", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_13(a) cavm_bbxe_abx_config_13_t
#define bustype_CAVM_BBXE_ABX_CONFIG_13(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_13(a) "BBXE_ABX_CONFIG_13"
#define busnum_CAVM_BBXE_ABX_CONFIG_13(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_13(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_130
 *
 * BBX5 Configuration Register 130
 * Job Configuration
 */
union cavm_bbxe_abx_config_130
{
    uint64_t u;
    struct cavm_bbxe_abx_config_130_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig154         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig154         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_130_s cn; */
};
typedef union cavm_bbxe_abx_config_130 cavm_bbxe_abx_config_130_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_130(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_130(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302410ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_130", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_130(a) cavm_bbxe_abx_config_130_t
#define bustype_CAVM_BBXE_ABX_CONFIG_130(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_130(a) "BBXE_ABX_CONFIG_130"
#define busnum_CAVM_BBXE_ABX_CONFIG_130(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_130(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_131
 *
 * BBX5 Configuration Register 131
 * Job Configuration
 */
union cavm_bbxe_abx_config_131
{
    uint64_t u;
    struct cavm_bbxe_abx_config_131_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig155         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig155         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_131_s cn; */
};
typedef union cavm_bbxe_abx_config_131 cavm_bbxe_abx_config_131_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_131(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_131(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302418ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_131", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_131(a) cavm_bbxe_abx_config_131_t
#define bustype_CAVM_BBXE_ABX_CONFIG_131(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_131(a) "BBXE_ABX_CONFIG_131"
#define busnum_CAVM_BBXE_ABX_CONFIG_131(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_131(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_132
 *
 * BBX5 Configuration Register 132
 * Job Configuration
 */
union cavm_bbxe_abx_config_132
{
    uint64_t u;
    struct cavm_bbxe_abx_config_132_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig156         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig156         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_132_s cn; */
};
typedef union cavm_bbxe_abx_config_132 cavm_bbxe_abx_config_132_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_132(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_132(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302420ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_132", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_132(a) cavm_bbxe_abx_config_132_t
#define bustype_CAVM_BBXE_ABX_CONFIG_132(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_132(a) "BBXE_ABX_CONFIG_132"
#define busnum_CAVM_BBXE_ABX_CONFIG_132(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_132(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_133
 *
 * BBX5 Configuration Register 133
 * Job Configuration
 */
union cavm_bbxe_abx_config_133
{
    uint64_t u;
    struct cavm_bbxe_abx_config_133_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig157         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig157         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_133_s cn; */
};
typedef union cavm_bbxe_abx_config_133 cavm_bbxe_abx_config_133_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_133(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_133(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302428ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_133", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_133(a) cavm_bbxe_abx_config_133_t
#define bustype_CAVM_BBXE_ABX_CONFIG_133(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_133(a) "BBXE_ABX_CONFIG_133"
#define busnum_CAVM_BBXE_ABX_CONFIG_133(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_133(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_134
 *
 * BBX5 Configuration Register 134
 * Job Configuration
 */
union cavm_bbxe_abx_config_134
{
    uint64_t u;
    struct cavm_bbxe_abx_config_134_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig158         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig158         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_134_s cn; */
};
typedef union cavm_bbxe_abx_config_134 cavm_bbxe_abx_config_134_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_134(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_134(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302430ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_134", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_134(a) cavm_bbxe_abx_config_134_t
#define bustype_CAVM_BBXE_ABX_CONFIG_134(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_134(a) "BBXE_ABX_CONFIG_134"
#define busnum_CAVM_BBXE_ABX_CONFIG_134(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_134(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_135
 *
 * BBX5 Configuration Register 135
 * Job Configuration
 */
union cavm_bbxe_abx_config_135
{
    uint64_t u;
    struct cavm_bbxe_abx_config_135_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig159         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig159         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_135_s cn; */
};
typedef union cavm_bbxe_abx_config_135 cavm_bbxe_abx_config_135_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_135(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_135(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302438ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_135", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_135(a) cavm_bbxe_abx_config_135_t
#define bustype_CAVM_BBXE_ABX_CONFIG_135(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_135(a) "BBXE_ABX_CONFIG_135"
#define busnum_CAVM_BBXE_ABX_CONFIG_135(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_135(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_136
 *
 * BBX5 Configuration Register 136
 * Job Configuration
 */
union cavm_bbxe_abx_config_136
{
    uint64_t u;
    struct cavm_bbxe_abx_config_136_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig160         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig160         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_136_s cn; */
};
typedef union cavm_bbxe_abx_config_136 cavm_bbxe_abx_config_136_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_136(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_136(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302440ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_136", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_136(a) cavm_bbxe_abx_config_136_t
#define bustype_CAVM_BBXE_ABX_CONFIG_136(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_136(a) "BBXE_ABX_CONFIG_136"
#define busnum_CAVM_BBXE_ABX_CONFIG_136(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_136(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_137
 *
 * BBX5 Configuration Register 137
 * Job Configuration
 */
union cavm_bbxe_abx_config_137
{
    uint64_t u;
    struct cavm_bbxe_abx_config_137_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig161         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig161         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_137_s cn; */
};
typedef union cavm_bbxe_abx_config_137 cavm_bbxe_abx_config_137_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_137(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_137(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302448ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_137", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_137(a) cavm_bbxe_abx_config_137_t
#define bustype_CAVM_BBXE_ABX_CONFIG_137(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_137(a) "BBXE_ABX_CONFIG_137"
#define busnum_CAVM_BBXE_ABX_CONFIG_137(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_137(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_138
 *
 * BBX5 Configuration Register 138
 * Job Configuration
 */
union cavm_bbxe_abx_config_138
{
    uint64_t u;
    struct cavm_bbxe_abx_config_138_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig162         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig162         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_138_s cn; */
};
typedef union cavm_bbxe_abx_config_138 cavm_bbxe_abx_config_138_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_138(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_138(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302450ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_138", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_138(a) cavm_bbxe_abx_config_138_t
#define bustype_CAVM_BBXE_ABX_CONFIG_138(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_138(a) "BBXE_ABX_CONFIG_138"
#define busnum_CAVM_BBXE_ABX_CONFIG_138(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_138(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_139
 *
 * BBX5 Configuration Register 139
 * Job Configuration
 */
union cavm_bbxe_abx_config_139
{
    uint64_t u;
    struct cavm_bbxe_abx_config_139_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig163         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig163         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_139_s cn; */
};
typedef union cavm_bbxe_abx_config_139 cavm_bbxe_abx_config_139_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_139(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_139(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302458ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_139", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_139(a) cavm_bbxe_abx_config_139_t
#define bustype_CAVM_BBXE_ABX_CONFIG_139(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_139(a) "BBXE_ABX_CONFIG_139"
#define busnum_CAVM_BBXE_ABX_CONFIG_139(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_139(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_14
 *
 * BBX5 Configuration Register 14
 * Job Configuration
 */
union cavm_bbxe_abx_config_14
{
    uint64_t u;
    struct cavm_bbxe_abx_config_14_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig38          : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig38          : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_14_s cn; */
};
typedef union cavm_bbxe_abx_config_14 cavm_bbxe_abx_config_14_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_14(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_14(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302070ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_14", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_14(a) cavm_bbxe_abx_config_14_t
#define bustype_CAVM_BBXE_ABX_CONFIG_14(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_14(a) "BBXE_ABX_CONFIG_14"
#define busnum_CAVM_BBXE_ABX_CONFIG_14(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_14(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_140
 *
 * BBX5 Configuration Register 140
 * Job Configuration
 */
union cavm_bbxe_abx_config_140
{
    uint64_t u;
    struct cavm_bbxe_abx_config_140_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig164         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig164         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_140_s cn; */
};
typedef union cavm_bbxe_abx_config_140 cavm_bbxe_abx_config_140_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_140(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_140(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302460ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_140", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_140(a) cavm_bbxe_abx_config_140_t
#define bustype_CAVM_BBXE_ABX_CONFIG_140(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_140(a) "BBXE_ABX_CONFIG_140"
#define busnum_CAVM_BBXE_ABX_CONFIG_140(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_140(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_141
 *
 * BBX5 Configuration Register 141
 * Job Configuration
 */
union cavm_bbxe_abx_config_141
{
    uint64_t u;
    struct cavm_bbxe_abx_config_141_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig165         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig165         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_141_s cn; */
};
typedef union cavm_bbxe_abx_config_141 cavm_bbxe_abx_config_141_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_141(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_141(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302468ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_141", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_141(a) cavm_bbxe_abx_config_141_t
#define bustype_CAVM_BBXE_ABX_CONFIG_141(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_141(a) "BBXE_ABX_CONFIG_141"
#define busnum_CAVM_BBXE_ABX_CONFIG_141(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_141(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_142
 *
 * BBX5 Configuration Register 142
 * Job Configuration
 */
union cavm_bbxe_abx_config_142
{
    uint64_t u;
    struct cavm_bbxe_abx_config_142_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig166         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig166         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_142_s cn; */
};
typedef union cavm_bbxe_abx_config_142 cavm_bbxe_abx_config_142_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_142(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_142(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302470ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_142", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_142(a) cavm_bbxe_abx_config_142_t
#define bustype_CAVM_BBXE_ABX_CONFIG_142(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_142(a) "BBXE_ABX_CONFIG_142"
#define busnum_CAVM_BBXE_ABX_CONFIG_142(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_142(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_143
 *
 * BBX5 Configuration Register 143
 * Job Configuration
 */
union cavm_bbxe_abx_config_143
{
    uint64_t u;
    struct cavm_bbxe_abx_config_143_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig167         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig167         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_143_s cn; */
};
typedef union cavm_bbxe_abx_config_143 cavm_bbxe_abx_config_143_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_143(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_143(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302478ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_143", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_143(a) cavm_bbxe_abx_config_143_t
#define bustype_CAVM_BBXE_ABX_CONFIG_143(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_143(a) "BBXE_ABX_CONFIG_143"
#define busnum_CAVM_BBXE_ABX_CONFIG_143(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_143(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_144
 *
 * BBX5 Configuration Register 144
 * Job Configuration
 */
union cavm_bbxe_abx_config_144
{
    uint64_t u;
    struct cavm_bbxe_abx_config_144_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig168         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig168         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_144_s cn; */
};
typedef union cavm_bbxe_abx_config_144 cavm_bbxe_abx_config_144_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_144(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_144(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302480ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_144", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_144(a) cavm_bbxe_abx_config_144_t
#define bustype_CAVM_BBXE_ABX_CONFIG_144(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_144(a) "BBXE_ABX_CONFIG_144"
#define busnum_CAVM_BBXE_ABX_CONFIG_144(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_144(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_145
 *
 * BBX5 Configuration Register 145
 * Job Configuration
 */
union cavm_bbxe_abx_config_145
{
    uint64_t u;
    struct cavm_bbxe_abx_config_145_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig169         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig169         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_145_s cn; */
};
typedef union cavm_bbxe_abx_config_145 cavm_bbxe_abx_config_145_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_145(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_145(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302488ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_145", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_145(a) cavm_bbxe_abx_config_145_t
#define bustype_CAVM_BBXE_ABX_CONFIG_145(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_145(a) "BBXE_ABX_CONFIG_145"
#define busnum_CAVM_BBXE_ABX_CONFIG_145(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_145(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_146
 *
 * BBX5 Configuration Register 146
 * Job Configuration
 */
union cavm_bbxe_abx_config_146
{
    uint64_t u;
    struct cavm_bbxe_abx_config_146_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig170         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig170         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_146_s cn; */
};
typedef union cavm_bbxe_abx_config_146 cavm_bbxe_abx_config_146_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_146(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_146(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302490ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_146", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_146(a) cavm_bbxe_abx_config_146_t
#define bustype_CAVM_BBXE_ABX_CONFIG_146(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_146(a) "BBXE_ABX_CONFIG_146"
#define busnum_CAVM_BBXE_ABX_CONFIG_146(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_146(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_147
 *
 * BBX5 Configuration Register 147
 * Job Configuration
 */
union cavm_bbxe_abx_config_147
{
    uint64_t u;
    struct cavm_bbxe_abx_config_147_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig171         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig171         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_147_s cn; */
};
typedef union cavm_bbxe_abx_config_147 cavm_bbxe_abx_config_147_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_147(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_147(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302498ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_147", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_147(a) cavm_bbxe_abx_config_147_t
#define bustype_CAVM_BBXE_ABX_CONFIG_147(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_147(a) "BBXE_ABX_CONFIG_147"
#define busnum_CAVM_BBXE_ABX_CONFIG_147(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_147(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_148
 *
 * BBX5 Configuration Register 148
 * Job Configuration
 */
union cavm_bbxe_abx_config_148
{
    uint64_t u;
    struct cavm_bbxe_abx_config_148_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig172         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig172         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_148_s cn; */
};
typedef union cavm_bbxe_abx_config_148 cavm_bbxe_abx_config_148_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_148(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_148(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423024a0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_148", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_148(a) cavm_bbxe_abx_config_148_t
#define bustype_CAVM_BBXE_ABX_CONFIG_148(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_148(a) "BBXE_ABX_CONFIG_148"
#define busnum_CAVM_BBXE_ABX_CONFIG_148(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_148(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_149
 *
 * BBX5 Configuration Register 149
 * Job Configuration
 */
union cavm_bbxe_abx_config_149
{
    uint64_t u;
    struct cavm_bbxe_abx_config_149_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig173         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig173         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_149_s cn; */
};
typedef union cavm_bbxe_abx_config_149 cavm_bbxe_abx_config_149_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_149(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_149(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423024a8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_149", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_149(a) cavm_bbxe_abx_config_149_t
#define bustype_CAVM_BBXE_ABX_CONFIG_149(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_149(a) "BBXE_ABX_CONFIG_149"
#define busnum_CAVM_BBXE_ABX_CONFIG_149(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_149(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_15
 *
 * BBX5 Configuration Register 15
 * Job Configuration
 */
union cavm_bbxe_abx_config_15
{
    uint64_t u;
    struct cavm_bbxe_abx_config_15_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig39          : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig39          : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_15_s cn; */
};
typedef union cavm_bbxe_abx_config_15 cavm_bbxe_abx_config_15_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_15(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_15(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302078ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_15", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_15(a) cavm_bbxe_abx_config_15_t
#define bustype_CAVM_BBXE_ABX_CONFIG_15(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_15(a) "BBXE_ABX_CONFIG_15"
#define busnum_CAVM_BBXE_ABX_CONFIG_15(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_15(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_150
 *
 * BBX5 Configuration Register 150
 * Job Configuration
 */
union cavm_bbxe_abx_config_150
{
    uint64_t u;
    struct cavm_bbxe_abx_config_150_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig174         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig174         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_150_s cn; */
};
typedef union cavm_bbxe_abx_config_150 cavm_bbxe_abx_config_150_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_150(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_150(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423024b0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_150", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_150(a) cavm_bbxe_abx_config_150_t
#define bustype_CAVM_BBXE_ABX_CONFIG_150(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_150(a) "BBXE_ABX_CONFIG_150"
#define busnum_CAVM_BBXE_ABX_CONFIG_150(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_150(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_151
 *
 * BBX5 Configuration Register 151
 * Job Configuration
 */
union cavm_bbxe_abx_config_151
{
    uint64_t u;
    struct cavm_bbxe_abx_config_151_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig175         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig175         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_151_s cn; */
};
typedef union cavm_bbxe_abx_config_151 cavm_bbxe_abx_config_151_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_151(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_151(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423024b8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_151", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_151(a) cavm_bbxe_abx_config_151_t
#define bustype_CAVM_BBXE_ABX_CONFIG_151(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_151(a) "BBXE_ABX_CONFIG_151"
#define busnum_CAVM_BBXE_ABX_CONFIG_151(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_151(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_152
 *
 * BBX5 Configuration Register 152
 * Job Configuration
 */
union cavm_bbxe_abx_config_152
{
    uint64_t u;
    struct cavm_bbxe_abx_config_152_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig176         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig176         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_152_s cn; */
};
typedef union cavm_bbxe_abx_config_152 cavm_bbxe_abx_config_152_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_152(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_152(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423024c0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_152", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_152(a) cavm_bbxe_abx_config_152_t
#define bustype_CAVM_BBXE_ABX_CONFIG_152(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_152(a) "BBXE_ABX_CONFIG_152"
#define busnum_CAVM_BBXE_ABX_CONFIG_152(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_152(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_153
 *
 * BBX5 Configuration Register 153
 * Job Configuration
 */
union cavm_bbxe_abx_config_153
{
    uint64_t u;
    struct cavm_bbxe_abx_config_153_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig177         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig177         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_153_s cn; */
};
typedef union cavm_bbxe_abx_config_153 cavm_bbxe_abx_config_153_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_153(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_153(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423024c8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_153", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_153(a) cavm_bbxe_abx_config_153_t
#define bustype_CAVM_BBXE_ABX_CONFIG_153(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_153(a) "BBXE_ABX_CONFIG_153"
#define busnum_CAVM_BBXE_ABX_CONFIG_153(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_153(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_154
 *
 * BBX5 Configuration Register 154
 * Job Configuration
 */
union cavm_bbxe_abx_config_154
{
    uint64_t u;
    struct cavm_bbxe_abx_config_154_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig178         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig178         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_154_s cn; */
};
typedef union cavm_bbxe_abx_config_154 cavm_bbxe_abx_config_154_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_154(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_154(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423024d0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_154", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_154(a) cavm_bbxe_abx_config_154_t
#define bustype_CAVM_BBXE_ABX_CONFIG_154(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_154(a) "BBXE_ABX_CONFIG_154"
#define busnum_CAVM_BBXE_ABX_CONFIG_154(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_154(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_155
 *
 * BBX5 Configuration Register 155
 * Job Configuration
 */
union cavm_bbxe_abx_config_155
{
    uint64_t u;
    struct cavm_bbxe_abx_config_155_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig179         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig179         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_155_s cn; */
};
typedef union cavm_bbxe_abx_config_155 cavm_bbxe_abx_config_155_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_155(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_155(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423024d8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_155", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_155(a) cavm_bbxe_abx_config_155_t
#define bustype_CAVM_BBXE_ABX_CONFIG_155(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_155(a) "BBXE_ABX_CONFIG_155"
#define busnum_CAVM_BBXE_ABX_CONFIG_155(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_155(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_156
 *
 * BBX5 Configuration Register 156
 * Job Configuration
 */
union cavm_bbxe_abx_config_156
{
    uint64_t u;
    struct cavm_bbxe_abx_config_156_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig180         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig180         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_156_s cn; */
};
typedef union cavm_bbxe_abx_config_156 cavm_bbxe_abx_config_156_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_156(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_156(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423024e0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_156", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_156(a) cavm_bbxe_abx_config_156_t
#define bustype_CAVM_BBXE_ABX_CONFIG_156(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_156(a) "BBXE_ABX_CONFIG_156"
#define busnum_CAVM_BBXE_ABX_CONFIG_156(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_156(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_157
 *
 * BBX5 Configuration Register 157
 * Job Configuration
 */
union cavm_bbxe_abx_config_157
{
    uint64_t u;
    struct cavm_bbxe_abx_config_157_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig181         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig181         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_157_s cn; */
};
typedef union cavm_bbxe_abx_config_157 cavm_bbxe_abx_config_157_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_157(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_157(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423024e8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_157", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_157(a) cavm_bbxe_abx_config_157_t
#define bustype_CAVM_BBXE_ABX_CONFIG_157(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_157(a) "BBXE_ABX_CONFIG_157"
#define busnum_CAVM_BBXE_ABX_CONFIG_157(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_157(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_158
 *
 * BBX5 Configuration Register 158
 * Job Configuration
 */
union cavm_bbxe_abx_config_158
{
    uint64_t u;
    struct cavm_bbxe_abx_config_158_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig182         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig182         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_158_s cn; */
};
typedef union cavm_bbxe_abx_config_158 cavm_bbxe_abx_config_158_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_158(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_158(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423024f0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_158", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_158(a) cavm_bbxe_abx_config_158_t
#define bustype_CAVM_BBXE_ABX_CONFIG_158(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_158(a) "BBXE_ABX_CONFIG_158"
#define busnum_CAVM_BBXE_ABX_CONFIG_158(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_158(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_159
 *
 * BBX5 Configuration Register 159
 * Job Configuration
 */
union cavm_bbxe_abx_config_159
{
    uint64_t u;
    struct cavm_bbxe_abx_config_159_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig183         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig183         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_159_s cn; */
};
typedef union cavm_bbxe_abx_config_159 cavm_bbxe_abx_config_159_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_159(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_159(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423024f8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_159", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_159(a) cavm_bbxe_abx_config_159_t
#define bustype_CAVM_BBXE_ABX_CONFIG_159(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_159(a) "BBXE_ABX_CONFIG_159"
#define busnum_CAVM_BBXE_ABX_CONFIG_159(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_159(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_16
 *
 * BBX5 Configuration Register 16
 * Job Configuration
 */
union cavm_bbxe_abx_config_16
{
    uint64_t u;
    struct cavm_bbxe_abx_config_16_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig40          : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig40          : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_16_s cn; */
};
typedef union cavm_bbxe_abx_config_16 cavm_bbxe_abx_config_16_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_16(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_16(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302080ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_16", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_16(a) cavm_bbxe_abx_config_16_t
#define bustype_CAVM_BBXE_ABX_CONFIG_16(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_16(a) "BBXE_ABX_CONFIG_16"
#define busnum_CAVM_BBXE_ABX_CONFIG_16(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_16(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_160
 *
 * BBX5 Configuration Register 160
 * Job Configuration
 */
union cavm_bbxe_abx_config_160
{
    uint64_t u;
    struct cavm_bbxe_abx_config_160_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig184         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig184         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_160_s cn; */
};
typedef union cavm_bbxe_abx_config_160 cavm_bbxe_abx_config_160_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_160(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_160(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302500ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_160", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_160(a) cavm_bbxe_abx_config_160_t
#define bustype_CAVM_BBXE_ABX_CONFIG_160(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_160(a) "BBXE_ABX_CONFIG_160"
#define busnum_CAVM_BBXE_ABX_CONFIG_160(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_160(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_161
 *
 * BBX5 Configuration Register 161
 * Job Configuration
 */
union cavm_bbxe_abx_config_161
{
    uint64_t u;
    struct cavm_bbxe_abx_config_161_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig185         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig185         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_161_s cn; */
};
typedef union cavm_bbxe_abx_config_161 cavm_bbxe_abx_config_161_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_161(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_161(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302508ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_161", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_161(a) cavm_bbxe_abx_config_161_t
#define bustype_CAVM_BBXE_ABX_CONFIG_161(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_161(a) "BBXE_ABX_CONFIG_161"
#define busnum_CAVM_BBXE_ABX_CONFIG_161(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_161(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_162
 *
 * BBX5 Configuration Register 162
 * Job Configuration
 */
union cavm_bbxe_abx_config_162
{
    uint64_t u;
    struct cavm_bbxe_abx_config_162_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig186         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig186         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_162_s cn; */
};
typedef union cavm_bbxe_abx_config_162 cavm_bbxe_abx_config_162_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_162(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_162(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302510ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_162", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_162(a) cavm_bbxe_abx_config_162_t
#define bustype_CAVM_BBXE_ABX_CONFIG_162(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_162(a) "BBXE_ABX_CONFIG_162"
#define busnum_CAVM_BBXE_ABX_CONFIG_162(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_162(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_163
 *
 * BBX5 Configuration Register 163
 * Job Configuration
 */
union cavm_bbxe_abx_config_163
{
    uint64_t u;
    struct cavm_bbxe_abx_config_163_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig187         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig187         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_163_s cn; */
};
typedef union cavm_bbxe_abx_config_163 cavm_bbxe_abx_config_163_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_163(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_163(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302518ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_163", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_163(a) cavm_bbxe_abx_config_163_t
#define bustype_CAVM_BBXE_ABX_CONFIG_163(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_163(a) "BBXE_ABX_CONFIG_163"
#define busnum_CAVM_BBXE_ABX_CONFIG_163(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_163(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_164
 *
 * BBX5 Configuration Register 164
 * Job Configuration
 */
union cavm_bbxe_abx_config_164
{
    uint64_t u;
    struct cavm_bbxe_abx_config_164_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig188         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig188         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_164_s cn; */
};
typedef union cavm_bbxe_abx_config_164 cavm_bbxe_abx_config_164_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_164(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_164(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302520ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_164", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_164(a) cavm_bbxe_abx_config_164_t
#define bustype_CAVM_BBXE_ABX_CONFIG_164(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_164(a) "BBXE_ABX_CONFIG_164"
#define busnum_CAVM_BBXE_ABX_CONFIG_164(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_164(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_165
 *
 * BBX5 Configuration Register 165
 * Job Configuration
 */
union cavm_bbxe_abx_config_165
{
    uint64_t u;
    struct cavm_bbxe_abx_config_165_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig189         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig189         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_165_s cn; */
};
typedef union cavm_bbxe_abx_config_165 cavm_bbxe_abx_config_165_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_165(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_165(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302528ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_165", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_165(a) cavm_bbxe_abx_config_165_t
#define bustype_CAVM_BBXE_ABX_CONFIG_165(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_165(a) "BBXE_ABX_CONFIG_165"
#define busnum_CAVM_BBXE_ABX_CONFIG_165(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_165(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_166
 *
 * BBX5 Configuration Register 166
 * Job Configuration
 */
union cavm_bbxe_abx_config_166
{
    uint64_t u;
    struct cavm_bbxe_abx_config_166_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig190         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig190         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_166_s cn; */
};
typedef union cavm_bbxe_abx_config_166 cavm_bbxe_abx_config_166_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_166(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_166(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302530ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_166", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_166(a) cavm_bbxe_abx_config_166_t
#define bustype_CAVM_BBXE_ABX_CONFIG_166(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_166(a) "BBXE_ABX_CONFIG_166"
#define busnum_CAVM_BBXE_ABX_CONFIG_166(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_166(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_167
 *
 * BBX5 Configuration Register 167
 * Job Configuration
 */
union cavm_bbxe_abx_config_167
{
    uint64_t u;
    struct cavm_bbxe_abx_config_167_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig191         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig191         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_167_s cn; */
};
typedef union cavm_bbxe_abx_config_167 cavm_bbxe_abx_config_167_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_167(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_167(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302538ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_167", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_167(a) cavm_bbxe_abx_config_167_t
#define bustype_CAVM_BBXE_ABX_CONFIG_167(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_167(a) "BBXE_ABX_CONFIG_167"
#define busnum_CAVM_BBXE_ABX_CONFIG_167(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_167(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_168
 *
 * BBX5 Configuration Register 168
 * Job Configuration
 */
union cavm_bbxe_abx_config_168
{
    uint64_t u;
    struct cavm_bbxe_abx_config_168_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig192         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig192         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_168_s cn; */
};
typedef union cavm_bbxe_abx_config_168 cavm_bbxe_abx_config_168_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_168(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_168(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302540ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_168", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_168(a) cavm_bbxe_abx_config_168_t
#define bustype_CAVM_BBXE_ABX_CONFIG_168(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_168(a) "BBXE_ABX_CONFIG_168"
#define busnum_CAVM_BBXE_ABX_CONFIG_168(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_168(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_169
 *
 * BBX5 Configuration Register 169
 * Job Configuration
 */
union cavm_bbxe_abx_config_169
{
    uint64_t u;
    struct cavm_bbxe_abx_config_169_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig193         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig193         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_169_s cn; */
};
typedef union cavm_bbxe_abx_config_169 cavm_bbxe_abx_config_169_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_169(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_169(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302548ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_169", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_169(a) cavm_bbxe_abx_config_169_t
#define bustype_CAVM_BBXE_ABX_CONFIG_169(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_169(a) "BBXE_ABX_CONFIG_169"
#define busnum_CAVM_BBXE_ABX_CONFIG_169(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_169(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_17
 *
 * BBX5 Configuration Register 17
 * Job Configuration
 */
union cavm_bbxe_abx_config_17
{
    uint64_t u;
    struct cavm_bbxe_abx_config_17_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig41          : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig41          : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_17_s cn; */
};
typedef union cavm_bbxe_abx_config_17 cavm_bbxe_abx_config_17_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_17(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_17(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302088ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_17", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_17(a) cavm_bbxe_abx_config_17_t
#define bustype_CAVM_BBXE_ABX_CONFIG_17(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_17(a) "BBXE_ABX_CONFIG_17"
#define busnum_CAVM_BBXE_ABX_CONFIG_17(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_17(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_170
 *
 * BBX5 Configuration Register 170
 * Job Configuration
 */
union cavm_bbxe_abx_config_170
{
    uint64_t u;
    struct cavm_bbxe_abx_config_170_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig194         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig194         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_170_s cn; */
};
typedef union cavm_bbxe_abx_config_170 cavm_bbxe_abx_config_170_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_170(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_170(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302550ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_170", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_170(a) cavm_bbxe_abx_config_170_t
#define bustype_CAVM_BBXE_ABX_CONFIG_170(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_170(a) "BBXE_ABX_CONFIG_170"
#define busnum_CAVM_BBXE_ABX_CONFIG_170(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_170(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_171
 *
 * BBX5 Configuration Register 171
 * Job Configuration
 */
union cavm_bbxe_abx_config_171
{
    uint64_t u;
    struct cavm_bbxe_abx_config_171_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig195         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig195         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_171_s cn; */
};
typedef union cavm_bbxe_abx_config_171 cavm_bbxe_abx_config_171_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_171(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_171(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302558ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_171", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_171(a) cavm_bbxe_abx_config_171_t
#define bustype_CAVM_BBXE_ABX_CONFIG_171(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_171(a) "BBXE_ABX_CONFIG_171"
#define busnum_CAVM_BBXE_ABX_CONFIG_171(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_171(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_172
 *
 * BBX5 Configuration Register 172
 * Job Configuration
 */
union cavm_bbxe_abx_config_172
{
    uint64_t u;
    struct cavm_bbxe_abx_config_172_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig196         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig196         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_172_s cn; */
};
typedef union cavm_bbxe_abx_config_172 cavm_bbxe_abx_config_172_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_172(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_172(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302560ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_172", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_172(a) cavm_bbxe_abx_config_172_t
#define bustype_CAVM_BBXE_ABX_CONFIG_172(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_172(a) "BBXE_ABX_CONFIG_172"
#define busnum_CAVM_BBXE_ABX_CONFIG_172(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_172(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_173
 *
 * BBX5 Configuration Register 173
 * Job Configuration
 */
union cavm_bbxe_abx_config_173
{
    uint64_t u;
    struct cavm_bbxe_abx_config_173_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig197         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig197         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_173_s cn; */
};
typedef union cavm_bbxe_abx_config_173 cavm_bbxe_abx_config_173_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_173(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_173(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302568ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_173", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_173(a) cavm_bbxe_abx_config_173_t
#define bustype_CAVM_BBXE_ABX_CONFIG_173(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_173(a) "BBXE_ABX_CONFIG_173"
#define busnum_CAVM_BBXE_ABX_CONFIG_173(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_173(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_174
 *
 * BBX5 Configuration Register 174
 * Job Configuration
 */
union cavm_bbxe_abx_config_174
{
    uint64_t u;
    struct cavm_bbxe_abx_config_174_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig198         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig198         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_174_s cn; */
};
typedef union cavm_bbxe_abx_config_174 cavm_bbxe_abx_config_174_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_174(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_174(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302570ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_174", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_174(a) cavm_bbxe_abx_config_174_t
#define bustype_CAVM_BBXE_ABX_CONFIG_174(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_174(a) "BBXE_ABX_CONFIG_174"
#define busnum_CAVM_BBXE_ABX_CONFIG_174(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_174(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_175
 *
 * BBX5 Configuration Register 175
 * Job Configuration
 */
union cavm_bbxe_abx_config_175
{
    uint64_t u;
    struct cavm_bbxe_abx_config_175_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig199         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig199         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_175_s cn; */
};
typedef union cavm_bbxe_abx_config_175 cavm_bbxe_abx_config_175_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_175(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_175(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302578ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_175", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_175(a) cavm_bbxe_abx_config_175_t
#define bustype_CAVM_BBXE_ABX_CONFIG_175(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_175(a) "BBXE_ABX_CONFIG_175"
#define busnum_CAVM_BBXE_ABX_CONFIG_175(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_175(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_176
 *
 * BBX5 Configuration Register 176
 * Job Configuration
 */
union cavm_bbxe_abx_config_176
{
    uint64_t u;
    struct cavm_bbxe_abx_config_176_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig200         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig200         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_176_s cn; */
};
typedef union cavm_bbxe_abx_config_176 cavm_bbxe_abx_config_176_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_176(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_176(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302580ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_176", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_176(a) cavm_bbxe_abx_config_176_t
#define bustype_CAVM_BBXE_ABX_CONFIG_176(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_176(a) "BBXE_ABX_CONFIG_176"
#define busnum_CAVM_BBXE_ABX_CONFIG_176(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_176(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_177
 *
 * BBX5 Configuration Register 177
 * Job Configuration
 */
union cavm_bbxe_abx_config_177
{
    uint64_t u;
    struct cavm_bbxe_abx_config_177_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig201         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig201         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_177_s cn; */
};
typedef union cavm_bbxe_abx_config_177 cavm_bbxe_abx_config_177_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_177(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_177(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302588ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_177", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_177(a) cavm_bbxe_abx_config_177_t
#define bustype_CAVM_BBXE_ABX_CONFIG_177(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_177(a) "BBXE_ABX_CONFIG_177"
#define busnum_CAVM_BBXE_ABX_CONFIG_177(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_177(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_178
 *
 * BBX5 Configuration Register 178
 * Job Configuration
 */
union cavm_bbxe_abx_config_178
{
    uint64_t u;
    struct cavm_bbxe_abx_config_178_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig202         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig202         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_178_s cn; */
};
typedef union cavm_bbxe_abx_config_178 cavm_bbxe_abx_config_178_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_178(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_178(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302590ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_178", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_178(a) cavm_bbxe_abx_config_178_t
#define bustype_CAVM_BBXE_ABX_CONFIG_178(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_178(a) "BBXE_ABX_CONFIG_178"
#define busnum_CAVM_BBXE_ABX_CONFIG_178(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_178(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_179
 *
 * BBX5 Configuration Register 179
 * Job Configuration
 */
union cavm_bbxe_abx_config_179
{
    uint64_t u;
    struct cavm_bbxe_abx_config_179_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig203         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig203         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_179_s cn; */
};
typedef union cavm_bbxe_abx_config_179 cavm_bbxe_abx_config_179_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_179(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_179(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302598ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_179", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_179(a) cavm_bbxe_abx_config_179_t
#define bustype_CAVM_BBXE_ABX_CONFIG_179(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_179(a) "BBXE_ABX_CONFIG_179"
#define busnum_CAVM_BBXE_ABX_CONFIG_179(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_179(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_18
 *
 * BBX5 Configuration Register 18
 * Job Configuration
 */
union cavm_bbxe_abx_config_18
{
    uint64_t u;
    struct cavm_bbxe_abx_config_18_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig42          : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig42          : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_18_s cn; */
};
typedef union cavm_bbxe_abx_config_18 cavm_bbxe_abx_config_18_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_18(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_18(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302090ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_18", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_18(a) cavm_bbxe_abx_config_18_t
#define bustype_CAVM_BBXE_ABX_CONFIG_18(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_18(a) "BBXE_ABX_CONFIG_18"
#define busnum_CAVM_BBXE_ABX_CONFIG_18(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_18(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_180
 *
 * BBX5 Configuration Register 180
 * Job Configuration
 */
union cavm_bbxe_abx_config_180
{
    uint64_t u;
    struct cavm_bbxe_abx_config_180_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig204         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig204         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_180_s cn; */
};
typedef union cavm_bbxe_abx_config_180 cavm_bbxe_abx_config_180_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_180(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_180(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423025a0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_180", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_180(a) cavm_bbxe_abx_config_180_t
#define bustype_CAVM_BBXE_ABX_CONFIG_180(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_180(a) "BBXE_ABX_CONFIG_180"
#define busnum_CAVM_BBXE_ABX_CONFIG_180(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_180(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_181
 *
 * BBX5 Configuration Register 181
 * Job Configuration
 */
union cavm_bbxe_abx_config_181
{
    uint64_t u;
    struct cavm_bbxe_abx_config_181_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig205         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig205         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_181_s cn; */
};
typedef union cavm_bbxe_abx_config_181 cavm_bbxe_abx_config_181_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_181(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_181(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423025a8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_181", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_181(a) cavm_bbxe_abx_config_181_t
#define bustype_CAVM_BBXE_ABX_CONFIG_181(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_181(a) "BBXE_ABX_CONFIG_181"
#define busnum_CAVM_BBXE_ABX_CONFIG_181(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_181(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_182
 *
 * BBX5 Configuration Register 182
 * Job Configuration
 */
union cavm_bbxe_abx_config_182
{
    uint64_t u;
    struct cavm_bbxe_abx_config_182_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig206         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig206         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_182_s cn; */
};
typedef union cavm_bbxe_abx_config_182 cavm_bbxe_abx_config_182_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_182(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_182(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423025b0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_182", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_182(a) cavm_bbxe_abx_config_182_t
#define bustype_CAVM_BBXE_ABX_CONFIG_182(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_182(a) "BBXE_ABX_CONFIG_182"
#define busnum_CAVM_BBXE_ABX_CONFIG_182(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_182(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_183
 *
 * BBX5 Configuration Register 183
 * Job Configuration
 */
union cavm_bbxe_abx_config_183
{
    uint64_t u;
    struct cavm_bbxe_abx_config_183_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig207         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig207         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_183_s cn; */
};
typedef union cavm_bbxe_abx_config_183 cavm_bbxe_abx_config_183_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_183(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_183(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423025b8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_183", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_183(a) cavm_bbxe_abx_config_183_t
#define bustype_CAVM_BBXE_ABX_CONFIG_183(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_183(a) "BBXE_ABX_CONFIG_183"
#define busnum_CAVM_BBXE_ABX_CONFIG_183(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_183(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_184
 *
 * BBX5 Configuration Register 184
 * Job Configuration
 */
union cavm_bbxe_abx_config_184
{
    uint64_t u;
    struct cavm_bbxe_abx_config_184_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig208         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig208         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_184_s cn; */
};
typedef union cavm_bbxe_abx_config_184 cavm_bbxe_abx_config_184_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_184(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_184(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423025c0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_184", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_184(a) cavm_bbxe_abx_config_184_t
#define bustype_CAVM_BBXE_ABX_CONFIG_184(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_184(a) "BBXE_ABX_CONFIG_184"
#define busnum_CAVM_BBXE_ABX_CONFIG_184(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_184(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_185
 *
 * BBX5 Configuration Register 185
 * Job Configuration
 */
union cavm_bbxe_abx_config_185
{
    uint64_t u;
    struct cavm_bbxe_abx_config_185_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig209         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig209         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_185_s cn; */
};
typedef union cavm_bbxe_abx_config_185 cavm_bbxe_abx_config_185_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_185(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_185(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423025c8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_185", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_185(a) cavm_bbxe_abx_config_185_t
#define bustype_CAVM_BBXE_ABX_CONFIG_185(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_185(a) "BBXE_ABX_CONFIG_185"
#define busnum_CAVM_BBXE_ABX_CONFIG_185(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_185(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_186
 *
 * BBX5 Configuration Register 186
 * Job Configuration
 */
union cavm_bbxe_abx_config_186
{
    uint64_t u;
    struct cavm_bbxe_abx_config_186_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig210         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig210         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_186_s cn; */
};
typedef union cavm_bbxe_abx_config_186 cavm_bbxe_abx_config_186_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_186(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_186(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423025d0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_186", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_186(a) cavm_bbxe_abx_config_186_t
#define bustype_CAVM_BBXE_ABX_CONFIG_186(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_186(a) "BBXE_ABX_CONFIG_186"
#define busnum_CAVM_BBXE_ABX_CONFIG_186(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_186(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_187
 *
 * BBX5 Configuration Register 187
 * Job Configuration
 */
union cavm_bbxe_abx_config_187
{
    uint64_t u;
    struct cavm_bbxe_abx_config_187_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig211         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig211         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_187_s cn; */
};
typedef union cavm_bbxe_abx_config_187 cavm_bbxe_abx_config_187_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_187(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_187(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423025d8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_187", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_187(a) cavm_bbxe_abx_config_187_t
#define bustype_CAVM_BBXE_ABX_CONFIG_187(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_187(a) "BBXE_ABX_CONFIG_187"
#define busnum_CAVM_BBXE_ABX_CONFIG_187(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_187(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_188
 *
 * BBX5 Configuration Register 188
 * Job Configuration
 */
union cavm_bbxe_abx_config_188
{
    uint64_t u;
    struct cavm_bbxe_abx_config_188_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig212         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig212         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_188_s cn; */
};
typedef union cavm_bbxe_abx_config_188 cavm_bbxe_abx_config_188_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_188(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_188(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423025e0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_188", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_188(a) cavm_bbxe_abx_config_188_t
#define bustype_CAVM_BBXE_ABX_CONFIG_188(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_188(a) "BBXE_ABX_CONFIG_188"
#define busnum_CAVM_BBXE_ABX_CONFIG_188(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_188(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_189
 *
 * BBX5 Configuration Register 189
 * Job Configuration
 */
union cavm_bbxe_abx_config_189
{
    uint64_t u;
    struct cavm_bbxe_abx_config_189_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig213         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig213         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_189_s cn; */
};
typedef union cavm_bbxe_abx_config_189 cavm_bbxe_abx_config_189_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_189(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_189(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423025e8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_189", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_189(a) cavm_bbxe_abx_config_189_t
#define bustype_CAVM_BBXE_ABX_CONFIG_189(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_189(a) "BBXE_ABX_CONFIG_189"
#define busnum_CAVM_BBXE_ABX_CONFIG_189(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_189(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_19
 *
 * BBX5 Configuration Register 19
 * Job Configuration
 */
union cavm_bbxe_abx_config_19
{
    uint64_t u;
    struct cavm_bbxe_abx_config_19_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig43          : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig43          : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_19_s cn; */
};
typedef union cavm_bbxe_abx_config_19 cavm_bbxe_abx_config_19_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_19(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_19(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302098ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_19", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_19(a) cavm_bbxe_abx_config_19_t
#define bustype_CAVM_BBXE_ABX_CONFIG_19(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_19(a) "BBXE_ABX_CONFIG_19"
#define busnum_CAVM_BBXE_ABX_CONFIG_19(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_19(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_190
 *
 * BBX5 Configuration Register 190
 * Job Configuration
 */
union cavm_bbxe_abx_config_190
{
    uint64_t u;
    struct cavm_bbxe_abx_config_190_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig214         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig214         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_190_s cn; */
};
typedef union cavm_bbxe_abx_config_190 cavm_bbxe_abx_config_190_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_190(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_190(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423025f0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_190", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_190(a) cavm_bbxe_abx_config_190_t
#define bustype_CAVM_BBXE_ABX_CONFIG_190(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_190(a) "BBXE_ABX_CONFIG_190"
#define busnum_CAVM_BBXE_ABX_CONFIG_190(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_190(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_191
 *
 * BBX5 Configuration Register 191
 * Job Configuration
 */
union cavm_bbxe_abx_config_191
{
    uint64_t u;
    struct cavm_bbxe_abx_config_191_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig215         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig215         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_191_s cn; */
};
typedef union cavm_bbxe_abx_config_191 cavm_bbxe_abx_config_191_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_191(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_191(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423025f8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_191", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_191(a) cavm_bbxe_abx_config_191_t
#define bustype_CAVM_BBXE_ABX_CONFIG_191(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_191(a) "BBXE_ABX_CONFIG_191"
#define busnum_CAVM_BBXE_ABX_CONFIG_191(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_191(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_192
 *
 * BBX5 Configuration Register 192
 * Job Configuration
 */
union cavm_bbxe_abx_config_192
{
    uint64_t u;
    struct cavm_bbxe_abx_config_192_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig216         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig216         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_192_s cn; */
};
typedef union cavm_bbxe_abx_config_192 cavm_bbxe_abx_config_192_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_192(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_192(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302600ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_192", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_192(a) cavm_bbxe_abx_config_192_t
#define bustype_CAVM_BBXE_ABX_CONFIG_192(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_192(a) "BBXE_ABX_CONFIG_192"
#define busnum_CAVM_BBXE_ABX_CONFIG_192(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_192(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_193
 *
 * BBX5 Configuration Register 193
 * Job Configuration
 */
union cavm_bbxe_abx_config_193
{
    uint64_t u;
    struct cavm_bbxe_abx_config_193_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig217         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig217         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_193_s cn; */
};
typedef union cavm_bbxe_abx_config_193 cavm_bbxe_abx_config_193_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_193(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_193(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302608ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_193", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_193(a) cavm_bbxe_abx_config_193_t
#define bustype_CAVM_BBXE_ABX_CONFIG_193(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_193(a) "BBXE_ABX_CONFIG_193"
#define busnum_CAVM_BBXE_ABX_CONFIG_193(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_193(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_194
 *
 * BBX5 Configuration Register 194
 * Job Configuration
 */
union cavm_bbxe_abx_config_194
{
    uint64_t u;
    struct cavm_bbxe_abx_config_194_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig218         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig218         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_194_s cn; */
};
typedef union cavm_bbxe_abx_config_194 cavm_bbxe_abx_config_194_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_194(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_194(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302610ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_194", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_194(a) cavm_bbxe_abx_config_194_t
#define bustype_CAVM_BBXE_ABX_CONFIG_194(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_194(a) "BBXE_ABX_CONFIG_194"
#define busnum_CAVM_BBXE_ABX_CONFIG_194(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_194(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_195
 *
 * BBX5 Configuration Register 195
 * Job Configuration
 */
union cavm_bbxe_abx_config_195
{
    uint64_t u;
    struct cavm_bbxe_abx_config_195_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig219         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig219         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_195_s cn; */
};
typedef union cavm_bbxe_abx_config_195 cavm_bbxe_abx_config_195_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_195(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_195(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302618ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_195", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_195(a) cavm_bbxe_abx_config_195_t
#define bustype_CAVM_BBXE_ABX_CONFIG_195(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_195(a) "BBXE_ABX_CONFIG_195"
#define busnum_CAVM_BBXE_ABX_CONFIG_195(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_195(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_196
 *
 * BBX5 Configuration Register 196
 * Job Configuration
 */
union cavm_bbxe_abx_config_196
{
    uint64_t u;
    struct cavm_bbxe_abx_config_196_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig220         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig220         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_196_s cn; */
};
typedef union cavm_bbxe_abx_config_196 cavm_bbxe_abx_config_196_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_196(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_196(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302620ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_196", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_196(a) cavm_bbxe_abx_config_196_t
#define bustype_CAVM_BBXE_ABX_CONFIG_196(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_196(a) "BBXE_ABX_CONFIG_196"
#define busnum_CAVM_BBXE_ABX_CONFIG_196(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_196(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_197
 *
 * BBX5 Configuration Register 197
 * Job Configuration
 */
union cavm_bbxe_abx_config_197
{
    uint64_t u;
    struct cavm_bbxe_abx_config_197_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig221         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig221         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_197_s cn; */
};
typedef union cavm_bbxe_abx_config_197 cavm_bbxe_abx_config_197_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_197(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_197(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302628ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_197", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_197(a) cavm_bbxe_abx_config_197_t
#define bustype_CAVM_BBXE_ABX_CONFIG_197(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_197(a) "BBXE_ABX_CONFIG_197"
#define busnum_CAVM_BBXE_ABX_CONFIG_197(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_197(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_198
 *
 * BBX5 Configuration Register 198
 * Job Configuration
 */
union cavm_bbxe_abx_config_198
{
    uint64_t u;
    struct cavm_bbxe_abx_config_198_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig222         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig222         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_198_s cn; */
};
typedef union cavm_bbxe_abx_config_198 cavm_bbxe_abx_config_198_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_198(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_198(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302630ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_198", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_198(a) cavm_bbxe_abx_config_198_t
#define bustype_CAVM_BBXE_ABX_CONFIG_198(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_198(a) "BBXE_ABX_CONFIG_198"
#define busnum_CAVM_BBXE_ABX_CONFIG_198(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_198(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_199
 *
 * BBX5 Configuration Register 199
 * Job Configuration
 */
union cavm_bbxe_abx_config_199
{
    uint64_t u;
    struct cavm_bbxe_abx_config_199_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig223         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig223         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_199_s cn; */
};
typedef union cavm_bbxe_abx_config_199 cavm_bbxe_abx_config_199_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_199(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_199(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302638ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_199", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_199(a) cavm_bbxe_abx_config_199_t
#define bustype_CAVM_BBXE_ABX_CONFIG_199(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_199(a) "BBXE_ABX_CONFIG_199"
#define busnum_CAVM_BBXE_ABX_CONFIG_199(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_199(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_2
 *
 * BBX5 Configuration Registers
 * Job Configuration
 */
union cavm_bbxe_abx_config_2
{
    uint64_t u;
    struct cavm_bbxe_abx_config_2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig22          : 30; /**< [ 63: 34](RO) SS_Reserved */
        uint64_t ss_res_sig23          : 2;  /**< [ 33: 32](R/W) -- */
        uint64_t ss_res_sig24          : 1;  /**< [ 31: 31](RO) SS_Reserved */
        uint64_t ss_res_sig25          : 31; /**< [ 30:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig25          : 31; /**< [ 30:  0](R/W) -- */
        uint64_t ss_res_sig24          : 1;  /**< [ 31: 31](RO) SS_Reserved */
        uint64_t ss_res_sig23          : 2;  /**< [ 33: 32](R/W) -- */
        uint64_t ss_res_sig22          : 30; /**< [ 63: 34](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_2_s cn; */
};
typedef union cavm_bbxe_abx_config_2 cavm_bbxe_abx_config_2_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302010ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_2(a) cavm_bbxe_abx_config_2_t
#define bustype_CAVM_BBXE_ABX_CONFIG_2(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_2(a) "BBXE_ABX_CONFIG_2"
#define busnum_CAVM_BBXE_ABX_CONFIG_2(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_2(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_20
 *
 * BBX5 Configuration Register 20
 * Job Configuration
 */
union cavm_bbxe_abx_config_20
{
    uint64_t u;
    struct cavm_bbxe_abx_config_20_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig44          : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig44          : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_20_s cn; */
};
typedef union cavm_bbxe_abx_config_20 cavm_bbxe_abx_config_20_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_20(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_20(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423020a0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_20", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_20(a) cavm_bbxe_abx_config_20_t
#define bustype_CAVM_BBXE_ABX_CONFIG_20(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_20(a) "BBXE_ABX_CONFIG_20"
#define busnum_CAVM_BBXE_ABX_CONFIG_20(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_20(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_200
 *
 * BBX5 Configuration Register 200
 * Job Configuration
 */
union cavm_bbxe_abx_config_200
{
    uint64_t u;
    struct cavm_bbxe_abx_config_200_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig224         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig224         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_200_s cn; */
};
typedef union cavm_bbxe_abx_config_200 cavm_bbxe_abx_config_200_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_200(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_200(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302640ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_200", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_200(a) cavm_bbxe_abx_config_200_t
#define bustype_CAVM_BBXE_ABX_CONFIG_200(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_200(a) "BBXE_ABX_CONFIG_200"
#define busnum_CAVM_BBXE_ABX_CONFIG_200(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_200(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_201
 *
 * BBX5 Configuration Register 201
 * Job Configuration
 */
union cavm_bbxe_abx_config_201
{
    uint64_t u;
    struct cavm_bbxe_abx_config_201_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig225         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig225         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_201_s cn; */
};
typedef union cavm_bbxe_abx_config_201 cavm_bbxe_abx_config_201_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_201(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_201(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302648ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_201", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_201(a) cavm_bbxe_abx_config_201_t
#define bustype_CAVM_BBXE_ABX_CONFIG_201(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_201(a) "BBXE_ABX_CONFIG_201"
#define busnum_CAVM_BBXE_ABX_CONFIG_201(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_201(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_202
 *
 * BBX5 Configuration Register 202
 * Job Configuration
 */
union cavm_bbxe_abx_config_202
{
    uint64_t u;
    struct cavm_bbxe_abx_config_202_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig226         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig226         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_202_s cn; */
};
typedef union cavm_bbxe_abx_config_202 cavm_bbxe_abx_config_202_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_202(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_202(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302650ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_202", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_202(a) cavm_bbxe_abx_config_202_t
#define bustype_CAVM_BBXE_ABX_CONFIG_202(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_202(a) "BBXE_ABX_CONFIG_202"
#define busnum_CAVM_BBXE_ABX_CONFIG_202(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_202(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_203
 *
 * BBX5 Configuration Register 203
 * Job Configuration
 */
union cavm_bbxe_abx_config_203
{
    uint64_t u;
    struct cavm_bbxe_abx_config_203_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig227         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig227         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_203_s cn; */
};
typedef union cavm_bbxe_abx_config_203 cavm_bbxe_abx_config_203_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_203(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_203(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302658ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_203", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_203(a) cavm_bbxe_abx_config_203_t
#define bustype_CAVM_BBXE_ABX_CONFIG_203(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_203(a) "BBXE_ABX_CONFIG_203"
#define busnum_CAVM_BBXE_ABX_CONFIG_203(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_203(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_204
 *
 * BBX5 Configuration Register 204
 * Job Configuration
 */
union cavm_bbxe_abx_config_204
{
    uint64_t u;
    struct cavm_bbxe_abx_config_204_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig228         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig228         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_204_s cn; */
};
typedef union cavm_bbxe_abx_config_204 cavm_bbxe_abx_config_204_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_204(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_204(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302660ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_204", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_204(a) cavm_bbxe_abx_config_204_t
#define bustype_CAVM_BBXE_ABX_CONFIG_204(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_204(a) "BBXE_ABX_CONFIG_204"
#define busnum_CAVM_BBXE_ABX_CONFIG_204(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_204(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_205
 *
 * BBX5 Configuration Register 205
 * Job Configuration
 */
union cavm_bbxe_abx_config_205
{
    uint64_t u;
    struct cavm_bbxe_abx_config_205_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig229         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig229         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_205_s cn; */
};
typedef union cavm_bbxe_abx_config_205 cavm_bbxe_abx_config_205_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_205(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_205(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302668ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_205", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_205(a) cavm_bbxe_abx_config_205_t
#define bustype_CAVM_BBXE_ABX_CONFIG_205(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_205(a) "BBXE_ABX_CONFIG_205"
#define busnum_CAVM_BBXE_ABX_CONFIG_205(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_205(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_206
 *
 * BBX5 Configuration Register 206
 * Job Configuration
 */
union cavm_bbxe_abx_config_206
{
    uint64_t u;
    struct cavm_bbxe_abx_config_206_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig230         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig230         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_206_s cn; */
};
typedef union cavm_bbxe_abx_config_206 cavm_bbxe_abx_config_206_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_206(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_206(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302670ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_206", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_206(a) cavm_bbxe_abx_config_206_t
#define bustype_CAVM_BBXE_ABX_CONFIG_206(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_206(a) "BBXE_ABX_CONFIG_206"
#define busnum_CAVM_BBXE_ABX_CONFIG_206(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_206(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_207
 *
 * BBX5 Configuration Register 207
 * Job Configuration
 */
union cavm_bbxe_abx_config_207
{
    uint64_t u;
    struct cavm_bbxe_abx_config_207_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig231         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig231         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_207_s cn; */
};
typedef union cavm_bbxe_abx_config_207 cavm_bbxe_abx_config_207_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_207(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_207(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302678ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_207", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_207(a) cavm_bbxe_abx_config_207_t
#define bustype_CAVM_BBXE_ABX_CONFIG_207(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_207(a) "BBXE_ABX_CONFIG_207"
#define busnum_CAVM_BBXE_ABX_CONFIG_207(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_207(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_208
 *
 * BBX5 Configuration Register 208
 * Job Configuration
 */
union cavm_bbxe_abx_config_208
{
    uint64_t u;
    struct cavm_bbxe_abx_config_208_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig232         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig232         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_208_s cn; */
};
typedef union cavm_bbxe_abx_config_208 cavm_bbxe_abx_config_208_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_208(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_208(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302680ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_208", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_208(a) cavm_bbxe_abx_config_208_t
#define bustype_CAVM_BBXE_ABX_CONFIG_208(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_208(a) "BBXE_ABX_CONFIG_208"
#define busnum_CAVM_BBXE_ABX_CONFIG_208(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_208(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_209
 *
 * BBX5 Configuration Register 209
 * Job Configuration
 */
union cavm_bbxe_abx_config_209
{
    uint64_t u;
    struct cavm_bbxe_abx_config_209_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig233         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig233         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_209_s cn; */
};
typedef union cavm_bbxe_abx_config_209 cavm_bbxe_abx_config_209_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_209(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_209(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302688ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_209", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_209(a) cavm_bbxe_abx_config_209_t
#define bustype_CAVM_BBXE_ABX_CONFIG_209(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_209(a) "BBXE_ABX_CONFIG_209"
#define busnum_CAVM_BBXE_ABX_CONFIG_209(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_209(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_21
 *
 * BBX5 Configuration Register 21
 * Job Configuration
 */
union cavm_bbxe_abx_config_21
{
    uint64_t u;
    struct cavm_bbxe_abx_config_21_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig45          : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig45          : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_21_s cn; */
};
typedef union cavm_bbxe_abx_config_21 cavm_bbxe_abx_config_21_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_21(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_21(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423020a8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_21", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_21(a) cavm_bbxe_abx_config_21_t
#define bustype_CAVM_BBXE_ABX_CONFIG_21(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_21(a) "BBXE_ABX_CONFIG_21"
#define busnum_CAVM_BBXE_ABX_CONFIG_21(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_21(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_210
 *
 * BBX5 Configuration Register 210
 * Job Configuration
 */
union cavm_bbxe_abx_config_210
{
    uint64_t u;
    struct cavm_bbxe_abx_config_210_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig234         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig234         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_210_s cn; */
};
typedef union cavm_bbxe_abx_config_210 cavm_bbxe_abx_config_210_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_210(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_210(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302690ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_210", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_210(a) cavm_bbxe_abx_config_210_t
#define bustype_CAVM_BBXE_ABX_CONFIG_210(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_210(a) "BBXE_ABX_CONFIG_210"
#define busnum_CAVM_BBXE_ABX_CONFIG_210(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_210(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_211
 *
 * BBX5 Configuration Register 211
 * Job Configuration
 */
union cavm_bbxe_abx_config_211
{
    uint64_t u;
    struct cavm_bbxe_abx_config_211_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig235         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig235         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_211_s cn; */
};
typedef union cavm_bbxe_abx_config_211 cavm_bbxe_abx_config_211_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_211(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_211(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302698ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_211", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_211(a) cavm_bbxe_abx_config_211_t
#define bustype_CAVM_BBXE_ABX_CONFIG_211(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_211(a) "BBXE_ABX_CONFIG_211"
#define busnum_CAVM_BBXE_ABX_CONFIG_211(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_211(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_212
 *
 * BBX5 Configuration Register 212
 * Job Configuration
 */
union cavm_bbxe_abx_config_212
{
    uint64_t u;
    struct cavm_bbxe_abx_config_212_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig236         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig236         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_212_s cn; */
};
typedef union cavm_bbxe_abx_config_212 cavm_bbxe_abx_config_212_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_212(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_212(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423026a0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_212", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_212(a) cavm_bbxe_abx_config_212_t
#define bustype_CAVM_BBXE_ABX_CONFIG_212(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_212(a) "BBXE_ABX_CONFIG_212"
#define busnum_CAVM_BBXE_ABX_CONFIG_212(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_212(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_213
 *
 * BBX5 Configuration Register 213
 * Job Configuration
 */
union cavm_bbxe_abx_config_213
{
    uint64_t u;
    struct cavm_bbxe_abx_config_213_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig237         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig237         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_213_s cn; */
};
typedef union cavm_bbxe_abx_config_213 cavm_bbxe_abx_config_213_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_213(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_213(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423026a8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_213", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_213(a) cavm_bbxe_abx_config_213_t
#define bustype_CAVM_BBXE_ABX_CONFIG_213(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_213(a) "BBXE_ABX_CONFIG_213"
#define busnum_CAVM_BBXE_ABX_CONFIG_213(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_213(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_214
 *
 * BBX5 Configuration Register 214
 * Job Configuration
 */
union cavm_bbxe_abx_config_214
{
    uint64_t u;
    struct cavm_bbxe_abx_config_214_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig238         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig238         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_214_s cn; */
};
typedef union cavm_bbxe_abx_config_214 cavm_bbxe_abx_config_214_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_214(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_214(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423026b0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_214", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_214(a) cavm_bbxe_abx_config_214_t
#define bustype_CAVM_BBXE_ABX_CONFIG_214(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_214(a) "BBXE_ABX_CONFIG_214"
#define busnum_CAVM_BBXE_ABX_CONFIG_214(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_214(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_215
 *
 * BBX5 Configuration Register 215
 * Job Configuration
 */
union cavm_bbxe_abx_config_215
{
    uint64_t u;
    struct cavm_bbxe_abx_config_215_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig239         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig239         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_215_s cn; */
};
typedef union cavm_bbxe_abx_config_215 cavm_bbxe_abx_config_215_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_215(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_215(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423026b8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_215", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_215(a) cavm_bbxe_abx_config_215_t
#define bustype_CAVM_BBXE_ABX_CONFIG_215(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_215(a) "BBXE_ABX_CONFIG_215"
#define busnum_CAVM_BBXE_ABX_CONFIG_215(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_215(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_216
 *
 * BBX5 Configuration Register 216
 * Job Configuration
 */
union cavm_bbxe_abx_config_216
{
    uint64_t u;
    struct cavm_bbxe_abx_config_216_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig240         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig240         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_216_s cn; */
};
typedef union cavm_bbxe_abx_config_216 cavm_bbxe_abx_config_216_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_216(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_216(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423026c0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_216", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_216(a) cavm_bbxe_abx_config_216_t
#define bustype_CAVM_BBXE_ABX_CONFIG_216(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_216(a) "BBXE_ABX_CONFIG_216"
#define busnum_CAVM_BBXE_ABX_CONFIG_216(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_216(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_217
 *
 * BBX5 Configuration Register 217
 * Job Configuration
 */
union cavm_bbxe_abx_config_217
{
    uint64_t u;
    struct cavm_bbxe_abx_config_217_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig241         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig241         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_217_s cn; */
};
typedef union cavm_bbxe_abx_config_217 cavm_bbxe_abx_config_217_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_217(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_217(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423026c8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_217", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_217(a) cavm_bbxe_abx_config_217_t
#define bustype_CAVM_BBXE_ABX_CONFIG_217(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_217(a) "BBXE_ABX_CONFIG_217"
#define busnum_CAVM_BBXE_ABX_CONFIG_217(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_217(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_218
 *
 * BBX5 Configuration Register 218
 * Job Configuration
 */
union cavm_bbxe_abx_config_218
{
    uint64_t u;
    struct cavm_bbxe_abx_config_218_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig242         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig242         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_218_s cn; */
};
typedef union cavm_bbxe_abx_config_218 cavm_bbxe_abx_config_218_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_218(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_218(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423026d0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_218", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_218(a) cavm_bbxe_abx_config_218_t
#define bustype_CAVM_BBXE_ABX_CONFIG_218(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_218(a) "BBXE_ABX_CONFIG_218"
#define busnum_CAVM_BBXE_ABX_CONFIG_218(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_218(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_219
 *
 * BBX5 Configuration Register 219
 * Job Configuration
 */
union cavm_bbxe_abx_config_219
{
    uint64_t u;
    struct cavm_bbxe_abx_config_219_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig243         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig243         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_219_s cn; */
};
typedef union cavm_bbxe_abx_config_219 cavm_bbxe_abx_config_219_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_219(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_219(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423026d8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_219", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_219(a) cavm_bbxe_abx_config_219_t
#define bustype_CAVM_BBXE_ABX_CONFIG_219(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_219(a) "BBXE_ABX_CONFIG_219"
#define busnum_CAVM_BBXE_ABX_CONFIG_219(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_219(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_22
 *
 * BBX5 Configuration Register 22
 * Job Configuration
 */
union cavm_bbxe_abx_config_22
{
    uint64_t u;
    struct cavm_bbxe_abx_config_22_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig46          : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig46          : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_22_s cn; */
};
typedef union cavm_bbxe_abx_config_22 cavm_bbxe_abx_config_22_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_22(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_22(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423020b0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_22", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_22(a) cavm_bbxe_abx_config_22_t
#define bustype_CAVM_BBXE_ABX_CONFIG_22(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_22(a) "BBXE_ABX_CONFIG_22"
#define busnum_CAVM_BBXE_ABX_CONFIG_22(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_22(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_220
 *
 * BBX5 Configuration Register 220
 * Job Configuration
 */
union cavm_bbxe_abx_config_220
{
    uint64_t u;
    struct cavm_bbxe_abx_config_220_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig244         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig244         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_220_s cn; */
};
typedef union cavm_bbxe_abx_config_220 cavm_bbxe_abx_config_220_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_220(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_220(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423026e0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_220", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_220(a) cavm_bbxe_abx_config_220_t
#define bustype_CAVM_BBXE_ABX_CONFIG_220(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_220(a) "BBXE_ABX_CONFIG_220"
#define busnum_CAVM_BBXE_ABX_CONFIG_220(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_220(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_221
 *
 * BBX5 Configuration Register 221
 * Job Configuration
 */
union cavm_bbxe_abx_config_221
{
    uint64_t u;
    struct cavm_bbxe_abx_config_221_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig245         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig245         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_221_s cn; */
};
typedef union cavm_bbxe_abx_config_221 cavm_bbxe_abx_config_221_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_221(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_221(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423026e8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_221", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_221(a) cavm_bbxe_abx_config_221_t
#define bustype_CAVM_BBXE_ABX_CONFIG_221(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_221(a) "BBXE_ABX_CONFIG_221"
#define busnum_CAVM_BBXE_ABX_CONFIG_221(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_221(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_222
 *
 * BBX5 Configuration Register 222
 * Job Configuration
 */
union cavm_bbxe_abx_config_222
{
    uint64_t u;
    struct cavm_bbxe_abx_config_222_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig246         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig246         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_222_s cn; */
};
typedef union cavm_bbxe_abx_config_222 cavm_bbxe_abx_config_222_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_222(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_222(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423026f0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_222", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_222(a) cavm_bbxe_abx_config_222_t
#define bustype_CAVM_BBXE_ABX_CONFIG_222(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_222(a) "BBXE_ABX_CONFIG_222"
#define busnum_CAVM_BBXE_ABX_CONFIG_222(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_222(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_223
 *
 * BBX5 Configuration Register 223
 * Job Configuration
 */
union cavm_bbxe_abx_config_223
{
    uint64_t u;
    struct cavm_bbxe_abx_config_223_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig247         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig247         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_223_s cn; */
};
typedef union cavm_bbxe_abx_config_223 cavm_bbxe_abx_config_223_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_223(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_223(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423026f8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_223", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_223(a) cavm_bbxe_abx_config_223_t
#define bustype_CAVM_BBXE_ABX_CONFIG_223(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_223(a) "BBXE_ABX_CONFIG_223"
#define busnum_CAVM_BBXE_ABX_CONFIG_223(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_223(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_224
 *
 * BBX5 Configuration Register 224
 * Job Configuration
 */
union cavm_bbxe_abx_config_224
{
    uint64_t u;
    struct cavm_bbxe_abx_config_224_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig248         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig248         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_224_s cn; */
};
typedef union cavm_bbxe_abx_config_224 cavm_bbxe_abx_config_224_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_224(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_224(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302700ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_224", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_224(a) cavm_bbxe_abx_config_224_t
#define bustype_CAVM_BBXE_ABX_CONFIG_224(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_224(a) "BBXE_ABX_CONFIG_224"
#define busnum_CAVM_BBXE_ABX_CONFIG_224(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_224(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_225
 *
 * BBX5 Configuration Register 225
 * Job Configuration
 */
union cavm_bbxe_abx_config_225
{
    uint64_t u;
    struct cavm_bbxe_abx_config_225_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig249         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig249         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_225_s cn; */
};
typedef union cavm_bbxe_abx_config_225 cavm_bbxe_abx_config_225_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_225(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_225(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302708ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_225", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_225(a) cavm_bbxe_abx_config_225_t
#define bustype_CAVM_BBXE_ABX_CONFIG_225(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_225(a) "BBXE_ABX_CONFIG_225"
#define busnum_CAVM_BBXE_ABX_CONFIG_225(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_225(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_226
 *
 * BBX5 Configuration Register 226
 * Job Configuration
 */
union cavm_bbxe_abx_config_226
{
    uint64_t u;
    struct cavm_bbxe_abx_config_226_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig250         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig250         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_226_s cn; */
};
typedef union cavm_bbxe_abx_config_226 cavm_bbxe_abx_config_226_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_226(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_226(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302710ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_226", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_226(a) cavm_bbxe_abx_config_226_t
#define bustype_CAVM_BBXE_ABX_CONFIG_226(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_226(a) "BBXE_ABX_CONFIG_226"
#define busnum_CAVM_BBXE_ABX_CONFIG_226(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_226(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_227
 *
 * BBX5 Configuration Register 227
 * Job Configuration
 */
union cavm_bbxe_abx_config_227
{
    uint64_t u;
    struct cavm_bbxe_abx_config_227_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig251         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig251         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_227_s cn; */
};
typedef union cavm_bbxe_abx_config_227 cavm_bbxe_abx_config_227_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_227(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_227(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302718ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_227", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_227(a) cavm_bbxe_abx_config_227_t
#define bustype_CAVM_BBXE_ABX_CONFIG_227(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_227(a) "BBXE_ABX_CONFIG_227"
#define busnum_CAVM_BBXE_ABX_CONFIG_227(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_227(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_228
 *
 * BBX5 Configuration Register 228
 * Job Configuration
 */
union cavm_bbxe_abx_config_228
{
    uint64_t u;
    struct cavm_bbxe_abx_config_228_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig252         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig252         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_228_s cn; */
};
typedef union cavm_bbxe_abx_config_228 cavm_bbxe_abx_config_228_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_228(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_228(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302720ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_228", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_228(a) cavm_bbxe_abx_config_228_t
#define bustype_CAVM_BBXE_ABX_CONFIG_228(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_228(a) "BBXE_ABX_CONFIG_228"
#define busnum_CAVM_BBXE_ABX_CONFIG_228(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_228(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_229
 *
 * BBX5 Configuration Register 229
 * Job Configuration
 */
union cavm_bbxe_abx_config_229
{
    uint64_t u;
    struct cavm_bbxe_abx_config_229_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig253         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig253         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_229_s cn; */
};
typedef union cavm_bbxe_abx_config_229 cavm_bbxe_abx_config_229_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_229(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_229(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302728ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_229", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_229(a) cavm_bbxe_abx_config_229_t
#define bustype_CAVM_BBXE_ABX_CONFIG_229(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_229(a) "BBXE_ABX_CONFIG_229"
#define busnum_CAVM_BBXE_ABX_CONFIG_229(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_229(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_23
 *
 * BBX5 Configuration Register 23
 * Job Configuration
 */
union cavm_bbxe_abx_config_23
{
    uint64_t u;
    struct cavm_bbxe_abx_config_23_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig47          : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig47          : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_23_s cn; */
};
typedef union cavm_bbxe_abx_config_23 cavm_bbxe_abx_config_23_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_23(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_23(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423020b8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_23", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_23(a) cavm_bbxe_abx_config_23_t
#define bustype_CAVM_BBXE_ABX_CONFIG_23(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_23(a) "BBXE_ABX_CONFIG_23"
#define busnum_CAVM_BBXE_ABX_CONFIG_23(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_23(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_230
 *
 * BBX5 Configuration Register 230
 * Job Configuration
 */
union cavm_bbxe_abx_config_230
{
    uint64_t u;
    struct cavm_bbxe_abx_config_230_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig254         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig254         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_230_s cn; */
};
typedef union cavm_bbxe_abx_config_230 cavm_bbxe_abx_config_230_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_230(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_230(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302730ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_230", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_230(a) cavm_bbxe_abx_config_230_t
#define bustype_CAVM_BBXE_ABX_CONFIG_230(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_230(a) "BBXE_ABX_CONFIG_230"
#define busnum_CAVM_BBXE_ABX_CONFIG_230(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_230(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_231
 *
 * BBX5 Configuration Register 231
 * Job Configuration
 */
union cavm_bbxe_abx_config_231
{
    uint64_t u;
    struct cavm_bbxe_abx_config_231_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig255         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig255         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_231_s cn; */
};
typedef union cavm_bbxe_abx_config_231 cavm_bbxe_abx_config_231_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_231(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_231(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302738ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_231", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_231(a) cavm_bbxe_abx_config_231_t
#define bustype_CAVM_BBXE_ABX_CONFIG_231(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_231(a) "BBXE_ABX_CONFIG_231"
#define busnum_CAVM_BBXE_ABX_CONFIG_231(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_231(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_232
 *
 * BBX5 Configuration Register 232
 * Job Configuration
 */
union cavm_bbxe_abx_config_232
{
    uint64_t u;
    struct cavm_bbxe_abx_config_232_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig256         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig256         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_232_s cn; */
};
typedef union cavm_bbxe_abx_config_232 cavm_bbxe_abx_config_232_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_232(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_232(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302740ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_232", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_232(a) cavm_bbxe_abx_config_232_t
#define bustype_CAVM_BBXE_ABX_CONFIG_232(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_232(a) "BBXE_ABX_CONFIG_232"
#define busnum_CAVM_BBXE_ABX_CONFIG_232(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_232(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_233
 *
 * BBX5 Configuration Register 233
 * Job Configuration
 */
union cavm_bbxe_abx_config_233
{
    uint64_t u;
    struct cavm_bbxe_abx_config_233_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig257         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig257         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_233_s cn; */
};
typedef union cavm_bbxe_abx_config_233 cavm_bbxe_abx_config_233_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_233(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_233(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302748ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_233", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_233(a) cavm_bbxe_abx_config_233_t
#define bustype_CAVM_BBXE_ABX_CONFIG_233(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_233(a) "BBXE_ABX_CONFIG_233"
#define busnum_CAVM_BBXE_ABX_CONFIG_233(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_233(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_234
 *
 * BBX5 Configuration Register 234
 * Job Configuration
 */
union cavm_bbxe_abx_config_234
{
    uint64_t u;
    struct cavm_bbxe_abx_config_234_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig258         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig258         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_234_s cn; */
};
typedef union cavm_bbxe_abx_config_234 cavm_bbxe_abx_config_234_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_234(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_234(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302750ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_234", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_234(a) cavm_bbxe_abx_config_234_t
#define bustype_CAVM_BBXE_ABX_CONFIG_234(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_234(a) "BBXE_ABX_CONFIG_234"
#define busnum_CAVM_BBXE_ABX_CONFIG_234(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_234(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_235
 *
 * BBX5 Configuration Register 235
 * Job Configuration
 */
union cavm_bbxe_abx_config_235
{
    uint64_t u;
    struct cavm_bbxe_abx_config_235_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig259         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig259         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_235_s cn; */
};
typedef union cavm_bbxe_abx_config_235 cavm_bbxe_abx_config_235_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_235(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_235(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302758ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_235", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_235(a) cavm_bbxe_abx_config_235_t
#define bustype_CAVM_BBXE_ABX_CONFIG_235(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_235(a) "BBXE_ABX_CONFIG_235"
#define busnum_CAVM_BBXE_ABX_CONFIG_235(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_235(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_236
 *
 * BBX5 Configuration Register 236
 * Job Configuration
 */
union cavm_bbxe_abx_config_236
{
    uint64_t u;
    struct cavm_bbxe_abx_config_236_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig260         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig260         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_236_s cn; */
};
typedef union cavm_bbxe_abx_config_236 cavm_bbxe_abx_config_236_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_236(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_236(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302760ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_236", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_236(a) cavm_bbxe_abx_config_236_t
#define bustype_CAVM_BBXE_ABX_CONFIG_236(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_236(a) "BBXE_ABX_CONFIG_236"
#define busnum_CAVM_BBXE_ABX_CONFIG_236(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_236(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_237
 *
 * BBX5 Configuration Register 237
 * Job Configuration
 */
union cavm_bbxe_abx_config_237
{
    uint64_t u;
    struct cavm_bbxe_abx_config_237_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig261         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig261         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_237_s cn; */
};
typedef union cavm_bbxe_abx_config_237 cavm_bbxe_abx_config_237_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_237(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_237(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302768ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_237", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_237(a) cavm_bbxe_abx_config_237_t
#define bustype_CAVM_BBXE_ABX_CONFIG_237(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_237(a) "BBXE_ABX_CONFIG_237"
#define busnum_CAVM_BBXE_ABX_CONFIG_237(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_237(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_238
 *
 * BBX5 Configuration Register 238
 * Job Configuration
 */
union cavm_bbxe_abx_config_238
{
    uint64_t u;
    struct cavm_bbxe_abx_config_238_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig262         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig262         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_238_s cn; */
};
typedef union cavm_bbxe_abx_config_238 cavm_bbxe_abx_config_238_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_238(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_238(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302770ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_238", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_238(a) cavm_bbxe_abx_config_238_t
#define bustype_CAVM_BBXE_ABX_CONFIG_238(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_238(a) "BBXE_ABX_CONFIG_238"
#define busnum_CAVM_BBXE_ABX_CONFIG_238(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_238(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_239
 *
 * BBX5 Configuration Register 239
 * Job Configuration
 */
union cavm_bbxe_abx_config_239
{
    uint64_t u;
    struct cavm_bbxe_abx_config_239_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig263         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig263         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_239_s cn; */
};
typedef union cavm_bbxe_abx_config_239 cavm_bbxe_abx_config_239_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_239(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_239(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302778ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_239", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_239(a) cavm_bbxe_abx_config_239_t
#define bustype_CAVM_BBXE_ABX_CONFIG_239(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_239(a) "BBXE_ABX_CONFIG_239"
#define busnum_CAVM_BBXE_ABX_CONFIG_239(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_239(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_24
 *
 * BBX5 Configuration Register 24
 * Job Configuration
 */
union cavm_bbxe_abx_config_24
{
    uint64_t u;
    struct cavm_bbxe_abx_config_24_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig48          : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig48          : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_24_s cn; */
};
typedef union cavm_bbxe_abx_config_24 cavm_bbxe_abx_config_24_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_24(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_24(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423020c0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_24", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_24(a) cavm_bbxe_abx_config_24_t
#define bustype_CAVM_BBXE_ABX_CONFIG_24(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_24(a) "BBXE_ABX_CONFIG_24"
#define busnum_CAVM_BBXE_ABX_CONFIG_24(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_24(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_240
 *
 * BBX5 Configuration Register 240
 * Job Configuration
 */
union cavm_bbxe_abx_config_240
{
    uint64_t u;
    struct cavm_bbxe_abx_config_240_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig264         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig264         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_240_s cn; */
};
typedef union cavm_bbxe_abx_config_240 cavm_bbxe_abx_config_240_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_240(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_240(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302780ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_240", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_240(a) cavm_bbxe_abx_config_240_t
#define bustype_CAVM_BBXE_ABX_CONFIG_240(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_240(a) "BBXE_ABX_CONFIG_240"
#define busnum_CAVM_BBXE_ABX_CONFIG_240(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_240(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_241
 *
 * BBX5 Configuration Register 241
 * Job Configuration
 */
union cavm_bbxe_abx_config_241
{
    uint64_t u;
    struct cavm_bbxe_abx_config_241_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig265         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig265         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_241_s cn; */
};
typedef union cavm_bbxe_abx_config_241 cavm_bbxe_abx_config_241_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_241(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_241(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302788ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_241", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_241(a) cavm_bbxe_abx_config_241_t
#define bustype_CAVM_BBXE_ABX_CONFIG_241(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_241(a) "BBXE_ABX_CONFIG_241"
#define busnum_CAVM_BBXE_ABX_CONFIG_241(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_241(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_242
 *
 * BBX5 Configuration Register 242
 * Job Configuration
 */
union cavm_bbxe_abx_config_242
{
    uint64_t u;
    struct cavm_bbxe_abx_config_242_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig266         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig266         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_242_s cn; */
};
typedef union cavm_bbxe_abx_config_242 cavm_bbxe_abx_config_242_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_242(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_242(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302790ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_242", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_242(a) cavm_bbxe_abx_config_242_t
#define bustype_CAVM_BBXE_ABX_CONFIG_242(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_242(a) "BBXE_ABX_CONFIG_242"
#define busnum_CAVM_BBXE_ABX_CONFIG_242(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_242(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_243
 *
 * BBX5 Configuration Register 243
 * Job Configuration
 */
union cavm_bbxe_abx_config_243
{
    uint64_t u;
    struct cavm_bbxe_abx_config_243_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig267         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig267         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_243_s cn; */
};
typedef union cavm_bbxe_abx_config_243 cavm_bbxe_abx_config_243_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_243(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_243(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302798ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_243", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_243(a) cavm_bbxe_abx_config_243_t
#define bustype_CAVM_BBXE_ABX_CONFIG_243(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_243(a) "BBXE_ABX_CONFIG_243"
#define busnum_CAVM_BBXE_ABX_CONFIG_243(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_243(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_244
 *
 * BBX5 Configuration Register 244
 * Job Configuration
 */
union cavm_bbxe_abx_config_244
{
    uint64_t u;
    struct cavm_bbxe_abx_config_244_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig268         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig268         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_244_s cn; */
};
typedef union cavm_bbxe_abx_config_244 cavm_bbxe_abx_config_244_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_244(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_244(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423027a0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_244", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_244(a) cavm_bbxe_abx_config_244_t
#define bustype_CAVM_BBXE_ABX_CONFIG_244(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_244(a) "BBXE_ABX_CONFIG_244"
#define busnum_CAVM_BBXE_ABX_CONFIG_244(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_244(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_245
 *
 * BBX5 Configuration Register 245
 * Job Configuration
 */
union cavm_bbxe_abx_config_245
{
    uint64_t u;
    struct cavm_bbxe_abx_config_245_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig269         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig269         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_245_s cn; */
};
typedef union cavm_bbxe_abx_config_245 cavm_bbxe_abx_config_245_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_245(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_245(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423027a8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_245", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_245(a) cavm_bbxe_abx_config_245_t
#define bustype_CAVM_BBXE_ABX_CONFIG_245(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_245(a) "BBXE_ABX_CONFIG_245"
#define busnum_CAVM_BBXE_ABX_CONFIG_245(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_245(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_246
 *
 * BBX5 Configuration Register 246
 * Job Configuration
 */
union cavm_bbxe_abx_config_246
{
    uint64_t u;
    struct cavm_bbxe_abx_config_246_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig270         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig270         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_246_s cn; */
};
typedef union cavm_bbxe_abx_config_246 cavm_bbxe_abx_config_246_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_246(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_246(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423027b0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_246", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_246(a) cavm_bbxe_abx_config_246_t
#define bustype_CAVM_BBXE_ABX_CONFIG_246(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_246(a) "BBXE_ABX_CONFIG_246"
#define busnum_CAVM_BBXE_ABX_CONFIG_246(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_246(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_247
 *
 * BBX5 Configuration Register 247
 * Job Configuration
 */
union cavm_bbxe_abx_config_247
{
    uint64_t u;
    struct cavm_bbxe_abx_config_247_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig271         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig271         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_247_s cn; */
};
typedef union cavm_bbxe_abx_config_247 cavm_bbxe_abx_config_247_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_247(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_247(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423027b8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_247", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_247(a) cavm_bbxe_abx_config_247_t
#define bustype_CAVM_BBXE_ABX_CONFIG_247(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_247(a) "BBXE_ABX_CONFIG_247"
#define busnum_CAVM_BBXE_ABX_CONFIG_247(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_247(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_248
 *
 * BBX5 Configuration Register 248
 * Job Configuration
 */
union cavm_bbxe_abx_config_248
{
    uint64_t u;
    struct cavm_bbxe_abx_config_248_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig272         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig272         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_248_s cn; */
};
typedef union cavm_bbxe_abx_config_248 cavm_bbxe_abx_config_248_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_248(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_248(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423027c0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_248", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_248(a) cavm_bbxe_abx_config_248_t
#define bustype_CAVM_BBXE_ABX_CONFIG_248(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_248(a) "BBXE_ABX_CONFIG_248"
#define busnum_CAVM_BBXE_ABX_CONFIG_248(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_248(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_249
 *
 * BBX5 Configuration Register 249
 * Job Configuration
 */
union cavm_bbxe_abx_config_249
{
    uint64_t u;
    struct cavm_bbxe_abx_config_249_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig273         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig273         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_249_s cn; */
};
typedef union cavm_bbxe_abx_config_249 cavm_bbxe_abx_config_249_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_249(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_249(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423027c8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_249", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_249(a) cavm_bbxe_abx_config_249_t
#define bustype_CAVM_BBXE_ABX_CONFIG_249(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_249(a) "BBXE_ABX_CONFIG_249"
#define busnum_CAVM_BBXE_ABX_CONFIG_249(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_249(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_25
 *
 * BBX5 Configuration Register 25
 * Job Configuration
 */
union cavm_bbxe_abx_config_25
{
    uint64_t u;
    struct cavm_bbxe_abx_config_25_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig49          : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig49          : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_25_s cn; */
};
typedef union cavm_bbxe_abx_config_25 cavm_bbxe_abx_config_25_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_25(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_25(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423020c8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_25", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_25(a) cavm_bbxe_abx_config_25_t
#define bustype_CAVM_BBXE_ABX_CONFIG_25(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_25(a) "BBXE_ABX_CONFIG_25"
#define busnum_CAVM_BBXE_ABX_CONFIG_25(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_25(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_250
 *
 * BBX5 Configuration Register 250
 * Job Configuration
 */
union cavm_bbxe_abx_config_250
{
    uint64_t u;
    struct cavm_bbxe_abx_config_250_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig274         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig274         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_250_s cn; */
};
typedef union cavm_bbxe_abx_config_250 cavm_bbxe_abx_config_250_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_250(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_250(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423027d0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_250", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_250(a) cavm_bbxe_abx_config_250_t
#define bustype_CAVM_BBXE_ABX_CONFIG_250(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_250(a) "BBXE_ABX_CONFIG_250"
#define busnum_CAVM_BBXE_ABX_CONFIG_250(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_250(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_251
 *
 * BBX5 Configuration Register 251
 * Job Configuration
 */
union cavm_bbxe_abx_config_251
{
    uint64_t u;
    struct cavm_bbxe_abx_config_251_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig275         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig275         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_251_s cn; */
};
typedef union cavm_bbxe_abx_config_251 cavm_bbxe_abx_config_251_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_251(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_251(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423027d8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_251", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_251(a) cavm_bbxe_abx_config_251_t
#define bustype_CAVM_BBXE_ABX_CONFIG_251(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_251(a) "BBXE_ABX_CONFIG_251"
#define busnum_CAVM_BBXE_ABX_CONFIG_251(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_251(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_252
 *
 * BBX5 Configuration Register 252
 * Job Configuration
 */
union cavm_bbxe_abx_config_252
{
    uint64_t u;
    struct cavm_bbxe_abx_config_252_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig276         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig276         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_252_s cn; */
};
typedef union cavm_bbxe_abx_config_252 cavm_bbxe_abx_config_252_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_252(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_252(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423027e0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_252", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_252(a) cavm_bbxe_abx_config_252_t
#define bustype_CAVM_BBXE_ABX_CONFIG_252(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_252(a) "BBXE_ABX_CONFIG_252"
#define busnum_CAVM_BBXE_ABX_CONFIG_252(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_252(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_253
 *
 * BBX5 Configuration Register 253
 * Job Configuration
 */
union cavm_bbxe_abx_config_253
{
    uint64_t u;
    struct cavm_bbxe_abx_config_253_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig277         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig277         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_253_s cn; */
};
typedef union cavm_bbxe_abx_config_253 cavm_bbxe_abx_config_253_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_253(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_253(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423027e8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_253", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_253(a) cavm_bbxe_abx_config_253_t
#define bustype_CAVM_BBXE_ABX_CONFIG_253(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_253(a) "BBXE_ABX_CONFIG_253"
#define busnum_CAVM_BBXE_ABX_CONFIG_253(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_253(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_254
 *
 * BBX5 Configuration Register 254
 * Job Configuration
 */
union cavm_bbxe_abx_config_254
{
    uint64_t u;
    struct cavm_bbxe_abx_config_254_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig278         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig278         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_254_s cn; */
};
typedef union cavm_bbxe_abx_config_254 cavm_bbxe_abx_config_254_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_254(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_254(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423027f0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_254", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_254(a) cavm_bbxe_abx_config_254_t
#define bustype_CAVM_BBXE_ABX_CONFIG_254(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_254(a) "BBXE_ABX_CONFIG_254"
#define busnum_CAVM_BBXE_ABX_CONFIG_254(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_254(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_255
 *
 * BBX5 Configuration Register 255
 * Job Configuration
 */
union cavm_bbxe_abx_config_255
{
    uint64_t u;
    struct cavm_bbxe_abx_config_255_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig279         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig279         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_255_s cn; */
};
typedef union cavm_bbxe_abx_config_255 cavm_bbxe_abx_config_255_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_255(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_255(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423027f8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_255", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_255(a) cavm_bbxe_abx_config_255_t
#define bustype_CAVM_BBXE_ABX_CONFIG_255(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_255(a) "BBXE_ABX_CONFIG_255"
#define busnum_CAVM_BBXE_ABX_CONFIG_255(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_255(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_256
 *
 * BBX5 Configuration Register 256
 * Job Configuration
 */
union cavm_bbxe_abx_config_256
{
    uint64_t u;
    struct cavm_bbxe_abx_config_256_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig280         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig280         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_256_s cn; */
};
typedef union cavm_bbxe_abx_config_256 cavm_bbxe_abx_config_256_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_256(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_256(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302800ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_256", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_256(a) cavm_bbxe_abx_config_256_t
#define bustype_CAVM_BBXE_ABX_CONFIG_256(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_256(a) "BBXE_ABX_CONFIG_256"
#define busnum_CAVM_BBXE_ABX_CONFIG_256(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_256(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_257
 *
 * BBX5 Configuration Register 257
 * Job Configuration
 */
union cavm_bbxe_abx_config_257
{
    uint64_t u;
    struct cavm_bbxe_abx_config_257_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig281         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig281         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_257_s cn; */
};
typedef union cavm_bbxe_abx_config_257 cavm_bbxe_abx_config_257_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_257(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_257(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302808ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_257", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_257(a) cavm_bbxe_abx_config_257_t
#define bustype_CAVM_BBXE_ABX_CONFIG_257(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_257(a) "BBXE_ABX_CONFIG_257"
#define busnum_CAVM_BBXE_ABX_CONFIG_257(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_257(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_258
 *
 * BBX5 Configuration Register 258
 * Job Configuration
 */
union cavm_bbxe_abx_config_258
{
    uint64_t u;
    struct cavm_bbxe_abx_config_258_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig282         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig282         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_258_s cn; */
};
typedef union cavm_bbxe_abx_config_258 cavm_bbxe_abx_config_258_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_258(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_258(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302810ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_258", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_258(a) cavm_bbxe_abx_config_258_t
#define bustype_CAVM_BBXE_ABX_CONFIG_258(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_258(a) "BBXE_ABX_CONFIG_258"
#define busnum_CAVM_BBXE_ABX_CONFIG_258(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_258(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_259
 *
 * BBX5 Configuration Register 259
 * Job Configuration
 */
union cavm_bbxe_abx_config_259
{
    uint64_t u;
    struct cavm_bbxe_abx_config_259_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig283         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig283         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_259_s cn; */
};
typedef union cavm_bbxe_abx_config_259 cavm_bbxe_abx_config_259_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_259(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_259(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302818ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_259", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_259(a) cavm_bbxe_abx_config_259_t
#define bustype_CAVM_BBXE_ABX_CONFIG_259(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_259(a) "BBXE_ABX_CONFIG_259"
#define busnum_CAVM_BBXE_ABX_CONFIG_259(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_259(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_26
 *
 * BBX5 Configuration Register 26
 * Job Configuration
 */
union cavm_bbxe_abx_config_26
{
    uint64_t u;
    struct cavm_bbxe_abx_config_26_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig50          : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig50          : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_26_s cn; */
};
typedef union cavm_bbxe_abx_config_26 cavm_bbxe_abx_config_26_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_26(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_26(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423020d0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_26", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_26(a) cavm_bbxe_abx_config_26_t
#define bustype_CAVM_BBXE_ABX_CONFIG_26(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_26(a) "BBXE_ABX_CONFIG_26"
#define busnum_CAVM_BBXE_ABX_CONFIG_26(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_26(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_260
 *
 * BBX5 Configuration Register 260
 * Job Configuration
 */
union cavm_bbxe_abx_config_260
{
    uint64_t u;
    struct cavm_bbxe_abx_config_260_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig284         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig284         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_260_s cn; */
};
typedef union cavm_bbxe_abx_config_260 cavm_bbxe_abx_config_260_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_260(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_260(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302820ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_260", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_260(a) cavm_bbxe_abx_config_260_t
#define bustype_CAVM_BBXE_ABX_CONFIG_260(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_260(a) "BBXE_ABX_CONFIG_260"
#define busnum_CAVM_BBXE_ABX_CONFIG_260(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_260(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_261
 *
 * BBX5 Configuration Register 261
 * Job Configuration
 */
union cavm_bbxe_abx_config_261
{
    uint64_t u;
    struct cavm_bbxe_abx_config_261_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig285         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig285         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_261_s cn; */
};
typedef union cavm_bbxe_abx_config_261 cavm_bbxe_abx_config_261_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_261(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_261(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302828ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_261", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_261(a) cavm_bbxe_abx_config_261_t
#define bustype_CAVM_BBXE_ABX_CONFIG_261(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_261(a) "BBXE_ABX_CONFIG_261"
#define busnum_CAVM_BBXE_ABX_CONFIG_261(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_261(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_262
 *
 * BBX5 Configuration Register 262
 * Job Configuration
 */
union cavm_bbxe_abx_config_262
{
    uint64_t u;
    struct cavm_bbxe_abx_config_262_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig286         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig286         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_262_s cn; */
};
typedef union cavm_bbxe_abx_config_262 cavm_bbxe_abx_config_262_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_262(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_262(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302830ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_262", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_262(a) cavm_bbxe_abx_config_262_t
#define bustype_CAVM_BBXE_ABX_CONFIG_262(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_262(a) "BBXE_ABX_CONFIG_262"
#define busnum_CAVM_BBXE_ABX_CONFIG_262(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_262(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_263
 *
 * BBX5 Configuration Register 263
 * Job Configuration
 */
union cavm_bbxe_abx_config_263
{
    uint64_t u;
    struct cavm_bbxe_abx_config_263_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig287         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig287         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_263_s cn; */
};
typedef union cavm_bbxe_abx_config_263 cavm_bbxe_abx_config_263_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_263(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_263(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302838ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_263", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_263(a) cavm_bbxe_abx_config_263_t
#define bustype_CAVM_BBXE_ABX_CONFIG_263(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_263(a) "BBXE_ABX_CONFIG_263"
#define busnum_CAVM_BBXE_ABX_CONFIG_263(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_263(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_264
 *
 * BBX5 Configuration Register 264
 * Job Configuration
 */
union cavm_bbxe_abx_config_264
{
    uint64_t u;
    struct cavm_bbxe_abx_config_264_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig288         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig288         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_264_s cn; */
};
typedef union cavm_bbxe_abx_config_264 cavm_bbxe_abx_config_264_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_264(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_264(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302840ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_264", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_264(a) cavm_bbxe_abx_config_264_t
#define bustype_CAVM_BBXE_ABX_CONFIG_264(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_264(a) "BBXE_ABX_CONFIG_264"
#define busnum_CAVM_BBXE_ABX_CONFIG_264(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_264(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_265
 *
 * BBX5 Configuration Register 265
 * Job Configuration
 */
union cavm_bbxe_abx_config_265
{
    uint64_t u;
    struct cavm_bbxe_abx_config_265_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig289         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig289         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_265_s cn; */
};
typedef union cavm_bbxe_abx_config_265 cavm_bbxe_abx_config_265_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_265(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_265(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302848ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_265", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_265(a) cavm_bbxe_abx_config_265_t
#define bustype_CAVM_BBXE_ABX_CONFIG_265(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_265(a) "BBXE_ABX_CONFIG_265"
#define busnum_CAVM_BBXE_ABX_CONFIG_265(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_265(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_266
 *
 * BBX5 Configuration Register 266
 * Job Configuration
 */
union cavm_bbxe_abx_config_266
{
    uint64_t u;
    struct cavm_bbxe_abx_config_266_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig290         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig290         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_266_s cn; */
};
typedef union cavm_bbxe_abx_config_266 cavm_bbxe_abx_config_266_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_266(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_266(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302850ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_266", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_266(a) cavm_bbxe_abx_config_266_t
#define bustype_CAVM_BBXE_ABX_CONFIG_266(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_266(a) "BBXE_ABX_CONFIG_266"
#define busnum_CAVM_BBXE_ABX_CONFIG_266(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_266(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_267
 *
 * BBX5 Configuration Register 267
 * Job Configuration
 */
union cavm_bbxe_abx_config_267
{
    uint64_t u;
    struct cavm_bbxe_abx_config_267_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig291         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig291         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_267_s cn; */
};
typedef union cavm_bbxe_abx_config_267 cavm_bbxe_abx_config_267_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_267(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_267(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302858ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_267", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_267(a) cavm_bbxe_abx_config_267_t
#define bustype_CAVM_BBXE_ABX_CONFIG_267(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_267(a) "BBXE_ABX_CONFIG_267"
#define busnum_CAVM_BBXE_ABX_CONFIG_267(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_267(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_268
 *
 * BBX5 Configuration Register 268
 * Job Configuration
 */
union cavm_bbxe_abx_config_268
{
    uint64_t u;
    struct cavm_bbxe_abx_config_268_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig292         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig292         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_268_s cn; */
};
typedef union cavm_bbxe_abx_config_268 cavm_bbxe_abx_config_268_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_268(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_268(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302860ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_268", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_268(a) cavm_bbxe_abx_config_268_t
#define bustype_CAVM_BBXE_ABX_CONFIG_268(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_268(a) "BBXE_ABX_CONFIG_268"
#define busnum_CAVM_BBXE_ABX_CONFIG_268(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_268(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_269
 *
 * BBX5 Configuration Register 269
 * Job Configuration
 */
union cavm_bbxe_abx_config_269
{
    uint64_t u;
    struct cavm_bbxe_abx_config_269_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig293         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig293         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_269_s cn; */
};
typedef union cavm_bbxe_abx_config_269 cavm_bbxe_abx_config_269_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_269(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_269(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302868ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_269", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_269(a) cavm_bbxe_abx_config_269_t
#define bustype_CAVM_BBXE_ABX_CONFIG_269(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_269(a) "BBXE_ABX_CONFIG_269"
#define busnum_CAVM_BBXE_ABX_CONFIG_269(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_269(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_27
 *
 * BBX5 Configuration Register 27
 * Job Configuration
 */
union cavm_bbxe_abx_config_27
{
    uint64_t u;
    struct cavm_bbxe_abx_config_27_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig51          : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig51          : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_27_s cn; */
};
typedef union cavm_bbxe_abx_config_27 cavm_bbxe_abx_config_27_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_27(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_27(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423020d8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_27", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_27(a) cavm_bbxe_abx_config_27_t
#define bustype_CAVM_BBXE_ABX_CONFIG_27(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_27(a) "BBXE_ABX_CONFIG_27"
#define busnum_CAVM_BBXE_ABX_CONFIG_27(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_27(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_270
 *
 * BBX5 Configuration Register 270
 * Job Configuration
 */
union cavm_bbxe_abx_config_270
{
    uint64_t u;
    struct cavm_bbxe_abx_config_270_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig294         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig294         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_270_s cn; */
};
typedef union cavm_bbxe_abx_config_270 cavm_bbxe_abx_config_270_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_270(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_270(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302870ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_270", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_270(a) cavm_bbxe_abx_config_270_t
#define bustype_CAVM_BBXE_ABX_CONFIG_270(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_270(a) "BBXE_ABX_CONFIG_270"
#define busnum_CAVM_BBXE_ABX_CONFIG_270(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_270(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_271
 *
 * BBX5 Configuration Register 271
 * Job Configuration
 */
union cavm_bbxe_abx_config_271
{
    uint64_t u;
    struct cavm_bbxe_abx_config_271_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig295         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig295         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_271_s cn; */
};
typedef union cavm_bbxe_abx_config_271 cavm_bbxe_abx_config_271_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_271(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_271(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302878ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_271", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_271(a) cavm_bbxe_abx_config_271_t
#define bustype_CAVM_BBXE_ABX_CONFIG_271(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_271(a) "BBXE_ABX_CONFIG_271"
#define busnum_CAVM_BBXE_ABX_CONFIG_271(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_271(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_272
 *
 * BBX5 Configuration Register 272
 * Job Configuration
 */
union cavm_bbxe_abx_config_272
{
    uint64_t u;
    struct cavm_bbxe_abx_config_272_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig296         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig296         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_272_s cn; */
};
typedef union cavm_bbxe_abx_config_272 cavm_bbxe_abx_config_272_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_272(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_272(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302880ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_272", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_272(a) cavm_bbxe_abx_config_272_t
#define bustype_CAVM_BBXE_ABX_CONFIG_272(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_272(a) "BBXE_ABX_CONFIG_272"
#define busnum_CAVM_BBXE_ABX_CONFIG_272(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_272(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_273
 *
 * BBX5 Configuration Register 273
 * Job Configuration
 */
union cavm_bbxe_abx_config_273
{
    uint64_t u;
    struct cavm_bbxe_abx_config_273_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig297         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig297         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_273_s cn; */
};
typedef union cavm_bbxe_abx_config_273 cavm_bbxe_abx_config_273_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_273(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_273(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302888ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_273", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_273(a) cavm_bbxe_abx_config_273_t
#define bustype_CAVM_BBXE_ABX_CONFIG_273(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_273(a) "BBXE_ABX_CONFIG_273"
#define busnum_CAVM_BBXE_ABX_CONFIG_273(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_273(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_274
 *
 * BBX5 Configuration Register 274
 * Job Configuration
 */
union cavm_bbxe_abx_config_274
{
    uint64_t u;
    struct cavm_bbxe_abx_config_274_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig298         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig298         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_274_s cn; */
};
typedef union cavm_bbxe_abx_config_274 cavm_bbxe_abx_config_274_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_274(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_274(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302890ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_274", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_274(a) cavm_bbxe_abx_config_274_t
#define bustype_CAVM_BBXE_ABX_CONFIG_274(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_274(a) "BBXE_ABX_CONFIG_274"
#define busnum_CAVM_BBXE_ABX_CONFIG_274(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_274(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_275
 *
 * BBX5 Configuration Register 275
 * Job Configuration
 */
union cavm_bbxe_abx_config_275
{
    uint64_t u;
    struct cavm_bbxe_abx_config_275_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig299         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig299         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_275_s cn; */
};
typedef union cavm_bbxe_abx_config_275 cavm_bbxe_abx_config_275_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_275(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_275(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302898ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_275", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_275(a) cavm_bbxe_abx_config_275_t
#define bustype_CAVM_BBXE_ABX_CONFIG_275(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_275(a) "BBXE_ABX_CONFIG_275"
#define busnum_CAVM_BBXE_ABX_CONFIG_275(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_275(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_276
 *
 * BBX5 Configuration Register 276
 * Job Configuration
 */
union cavm_bbxe_abx_config_276
{
    uint64_t u;
    struct cavm_bbxe_abx_config_276_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig300         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig300         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_276_s cn; */
};
typedef union cavm_bbxe_abx_config_276 cavm_bbxe_abx_config_276_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_276(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_276(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423028a0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_276", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_276(a) cavm_bbxe_abx_config_276_t
#define bustype_CAVM_BBXE_ABX_CONFIG_276(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_276(a) "BBXE_ABX_CONFIG_276"
#define busnum_CAVM_BBXE_ABX_CONFIG_276(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_276(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_277
 *
 * BBX5 Configuration Register 277
 * Job Configuration
 */
union cavm_bbxe_abx_config_277
{
    uint64_t u;
    struct cavm_bbxe_abx_config_277_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig301         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig301         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_277_s cn; */
};
typedef union cavm_bbxe_abx_config_277 cavm_bbxe_abx_config_277_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_277(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_277(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423028a8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_277", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_277(a) cavm_bbxe_abx_config_277_t
#define bustype_CAVM_BBXE_ABX_CONFIG_277(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_277(a) "BBXE_ABX_CONFIG_277"
#define busnum_CAVM_BBXE_ABX_CONFIG_277(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_277(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_278
 *
 * BBX5 Configuration Register 278
 * Job Configuration
 */
union cavm_bbxe_abx_config_278
{
    uint64_t u;
    struct cavm_bbxe_abx_config_278_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig302         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig302         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_278_s cn; */
};
typedef union cavm_bbxe_abx_config_278 cavm_bbxe_abx_config_278_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_278(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_278(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423028b0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_278", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_278(a) cavm_bbxe_abx_config_278_t
#define bustype_CAVM_BBXE_ABX_CONFIG_278(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_278(a) "BBXE_ABX_CONFIG_278"
#define busnum_CAVM_BBXE_ABX_CONFIG_278(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_278(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_279
 *
 * BBX5 Configuration Register 279
 * Job Configuration
 */
union cavm_bbxe_abx_config_279
{
    uint64_t u;
    struct cavm_bbxe_abx_config_279_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig303         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig303         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_279_s cn; */
};
typedef union cavm_bbxe_abx_config_279 cavm_bbxe_abx_config_279_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_279(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_279(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423028b8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_279", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_279(a) cavm_bbxe_abx_config_279_t
#define bustype_CAVM_BBXE_ABX_CONFIG_279(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_279(a) "BBXE_ABX_CONFIG_279"
#define busnum_CAVM_BBXE_ABX_CONFIG_279(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_279(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_28
 *
 * BBX5 Configuration Register 28
 * Job Configuration
 */
union cavm_bbxe_abx_config_28
{
    uint64_t u;
    struct cavm_bbxe_abx_config_28_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig52          : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig52          : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_28_s cn; */
};
typedef union cavm_bbxe_abx_config_28 cavm_bbxe_abx_config_28_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_28(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_28(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423020e0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_28", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_28(a) cavm_bbxe_abx_config_28_t
#define bustype_CAVM_BBXE_ABX_CONFIG_28(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_28(a) "BBXE_ABX_CONFIG_28"
#define busnum_CAVM_BBXE_ABX_CONFIG_28(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_28(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_280
 *
 * BBX5 Configuration Register 280
 * Job Configuration
 */
union cavm_bbxe_abx_config_280
{
    uint64_t u;
    struct cavm_bbxe_abx_config_280_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig304         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig304         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_280_s cn; */
};
typedef union cavm_bbxe_abx_config_280 cavm_bbxe_abx_config_280_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_280(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_280(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423028c0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_280", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_280(a) cavm_bbxe_abx_config_280_t
#define bustype_CAVM_BBXE_ABX_CONFIG_280(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_280(a) "BBXE_ABX_CONFIG_280"
#define busnum_CAVM_BBXE_ABX_CONFIG_280(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_280(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_281
 *
 * BBX5 Configuration Register 281
 * Job Configuration
 */
union cavm_bbxe_abx_config_281
{
    uint64_t u;
    struct cavm_bbxe_abx_config_281_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig305         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig305         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_281_s cn; */
};
typedef union cavm_bbxe_abx_config_281 cavm_bbxe_abx_config_281_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_281(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_281(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423028c8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_281", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_281(a) cavm_bbxe_abx_config_281_t
#define bustype_CAVM_BBXE_ABX_CONFIG_281(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_281(a) "BBXE_ABX_CONFIG_281"
#define busnum_CAVM_BBXE_ABX_CONFIG_281(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_281(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_282
 *
 * BBX5 Configuration Register 282
 * Job Configuration
 */
union cavm_bbxe_abx_config_282
{
    uint64_t u;
    struct cavm_bbxe_abx_config_282_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig306         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig306         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_282_s cn; */
};
typedef union cavm_bbxe_abx_config_282 cavm_bbxe_abx_config_282_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_282(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_282(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423028d0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_282", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_282(a) cavm_bbxe_abx_config_282_t
#define bustype_CAVM_BBXE_ABX_CONFIG_282(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_282(a) "BBXE_ABX_CONFIG_282"
#define busnum_CAVM_BBXE_ABX_CONFIG_282(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_282(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_283
 *
 * BBX5 Configuration Register 283
 * Job Configuration
 */
union cavm_bbxe_abx_config_283
{
    uint64_t u;
    struct cavm_bbxe_abx_config_283_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig307         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig307         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_283_s cn; */
};
typedef union cavm_bbxe_abx_config_283 cavm_bbxe_abx_config_283_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_283(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_283(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423028d8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_283", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_283(a) cavm_bbxe_abx_config_283_t
#define bustype_CAVM_BBXE_ABX_CONFIG_283(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_283(a) "BBXE_ABX_CONFIG_283"
#define busnum_CAVM_BBXE_ABX_CONFIG_283(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_283(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_284
 *
 * BBX5 Configuration Register 284
 * Job Configuration
 */
union cavm_bbxe_abx_config_284
{
    uint64_t u;
    struct cavm_bbxe_abx_config_284_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig308         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig309         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig309         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig308         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_284_s cn; */
};
typedef union cavm_bbxe_abx_config_284 cavm_bbxe_abx_config_284_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_284(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_284(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423028e0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_284", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_284(a) cavm_bbxe_abx_config_284_t
#define bustype_CAVM_BBXE_ABX_CONFIG_284(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_284(a) "BBXE_ABX_CONFIG_284"
#define busnum_CAVM_BBXE_ABX_CONFIG_284(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_284(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_285
 *
 * BBX5 Configuration Register 285
 * Job Configuration
 */
union cavm_bbxe_abx_config_285
{
    uint64_t u;
    struct cavm_bbxe_abx_config_285_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig310         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig311         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig311         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig310         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_285_s cn; */
};
typedef union cavm_bbxe_abx_config_285 cavm_bbxe_abx_config_285_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_285(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_285(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423028e8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_285", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_285(a) cavm_bbxe_abx_config_285_t
#define bustype_CAVM_BBXE_ABX_CONFIG_285(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_285(a) "BBXE_ABX_CONFIG_285"
#define busnum_CAVM_BBXE_ABX_CONFIG_285(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_285(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_286
 *
 * BBX5 Configuration Register 286
 * Job Configuration
 */
union cavm_bbxe_abx_config_286
{
    uint64_t u;
    struct cavm_bbxe_abx_config_286_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig312         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig313         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig313         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig312         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_286_s cn; */
};
typedef union cavm_bbxe_abx_config_286 cavm_bbxe_abx_config_286_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_286(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_286(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423028f0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_286", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_286(a) cavm_bbxe_abx_config_286_t
#define bustype_CAVM_BBXE_ABX_CONFIG_286(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_286(a) "BBXE_ABX_CONFIG_286"
#define busnum_CAVM_BBXE_ABX_CONFIG_286(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_286(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_287
 *
 * BBX5 Configuration Register 287
 * Job Configuration
 */
union cavm_bbxe_abx_config_287
{
    uint64_t u;
    struct cavm_bbxe_abx_config_287_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig314         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig315         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig315         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig314         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_287_s cn; */
};
typedef union cavm_bbxe_abx_config_287 cavm_bbxe_abx_config_287_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_287(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_287(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423028f8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_287", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_287(a) cavm_bbxe_abx_config_287_t
#define bustype_CAVM_BBXE_ABX_CONFIG_287(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_287(a) "BBXE_ABX_CONFIG_287"
#define busnum_CAVM_BBXE_ABX_CONFIG_287(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_287(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_288
 *
 * BBX5 Configuration Register 288
 * Job Configuration
 */
union cavm_bbxe_abx_config_288
{
    uint64_t u;
    struct cavm_bbxe_abx_config_288_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig316         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig317         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig317         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig316         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_288_s cn; */
};
typedef union cavm_bbxe_abx_config_288 cavm_bbxe_abx_config_288_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_288(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_288(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302900ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_288", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_288(a) cavm_bbxe_abx_config_288_t
#define bustype_CAVM_BBXE_ABX_CONFIG_288(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_288(a) "BBXE_ABX_CONFIG_288"
#define busnum_CAVM_BBXE_ABX_CONFIG_288(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_288(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_289
 *
 * BBX5 Configuration Register 289
 * Job Configuration
 */
union cavm_bbxe_abx_config_289
{
    uint64_t u;
    struct cavm_bbxe_abx_config_289_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig318         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig319         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig319         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig318         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_289_s cn; */
};
typedef union cavm_bbxe_abx_config_289 cavm_bbxe_abx_config_289_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_289(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_289(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302908ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_289", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_289(a) cavm_bbxe_abx_config_289_t
#define bustype_CAVM_BBXE_ABX_CONFIG_289(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_289(a) "BBXE_ABX_CONFIG_289"
#define busnum_CAVM_BBXE_ABX_CONFIG_289(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_289(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_29
 *
 * BBX5 Configuration Register 29
 * Job Configuration
 */
union cavm_bbxe_abx_config_29
{
    uint64_t u;
    struct cavm_bbxe_abx_config_29_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig53          : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig53          : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_29_s cn; */
};
typedef union cavm_bbxe_abx_config_29 cavm_bbxe_abx_config_29_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_29(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_29(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423020e8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_29", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_29(a) cavm_bbxe_abx_config_29_t
#define bustype_CAVM_BBXE_ABX_CONFIG_29(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_29(a) "BBXE_ABX_CONFIG_29"
#define busnum_CAVM_BBXE_ABX_CONFIG_29(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_29(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_290
 *
 * BBX5 Configuration Register 290
 * Job Configuration
 */
union cavm_bbxe_abx_config_290
{
    uint64_t u;
    struct cavm_bbxe_abx_config_290_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig320         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig321         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig321         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig320         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_290_s cn; */
};
typedef union cavm_bbxe_abx_config_290 cavm_bbxe_abx_config_290_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_290(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_290(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302910ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_290", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_290(a) cavm_bbxe_abx_config_290_t
#define bustype_CAVM_BBXE_ABX_CONFIG_290(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_290(a) "BBXE_ABX_CONFIG_290"
#define busnum_CAVM_BBXE_ABX_CONFIG_290(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_290(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_291
 *
 * BBX5 Configuration Register 291
 * Job Configuration
 */
union cavm_bbxe_abx_config_291
{
    uint64_t u;
    struct cavm_bbxe_abx_config_291_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig322         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig323         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig323         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig322         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_291_s cn; */
};
typedef union cavm_bbxe_abx_config_291 cavm_bbxe_abx_config_291_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_291(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_291(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302918ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_291", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_291(a) cavm_bbxe_abx_config_291_t
#define bustype_CAVM_BBXE_ABX_CONFIG_291(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_291(a) "BBXE_ABX_CONFIG_291"
#define busnum_CAVM_BBXE_ABX_CONFIG_291(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_291(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_292
 *
 * BBX5 Configuration Register 292
 * Job Configuration
 */
union cavm_bbxe_abx_config_292
{
    uint64_t u;
    struct cavm_bbxe_abx_config_292_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig324         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig325         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig325         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig324         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_292_s cn; */
};
typedef union cavm_bbxe_abx_config_292 cavm_bbxe_abx_config_292_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_292(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_292(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302920ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_292", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_292(a) cavm_bbxe_abx_config_292_t
#define bustype_CAVM_BBXE_ABX_CONFIG_292(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_292(a) "BBXE_ABX_CONFIG_292"
#define busnum_CAVM_BBXE_ABX_CONFIG_292(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_292(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_293
 *
 * BBX5 Configuration Register 293
 * Job Configuration
 */
union cavm_bbxe_abx_config_293
{
    uint64_t u;
    struct cavm_bbxe_abx_config_293_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig326         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig327         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig327         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig326         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_293_s cn; */
};
typedef union cavm_bbxe_abx_config_293 cavm_bbxe_abx_config_293_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_293(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_293(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302928ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_293", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_293(a) cavm_bbxe_abx_config_293_t
#define bustype_CAVM_BBXE_ABX_CONFIG_293(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_293(a) "BBXE_ABX_CONFIG_293"
#define busnum_CAVM_BBXE_ABX_CONFIG_293(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_293(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_294
 *
 * BBX5 Configuration Register 294
 * Job Configuration
 */
union cavm_bbxe_abx_config_294
{
    uint64_t u;
    struct cavm_bbxe_abx_config_294_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig328         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig329         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig329         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig328         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_294_s cn; */
};
typedef union cavm_bbxe_abx_config_294 cavm_bbxe_abx_config_294_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_294(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_294(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302930ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_294", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_294(a) cavm_bbxe_abx_config_294_t
#define bustype_CAVM_BBXE_ABX_CONFIG_294(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_294(a) "BBXE_ABX_CONFIG_294"
#define busnum_CAVM_BBXE_ABX_CONFIG_294(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_294(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_295
 *
 * BBX5 Configuration Register 295
 * Job Configuration
 */
union cavm_bbxe_abx_config_295
{
    uint64_t u;
    struct cavm_bbxe_abx_config_295_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig330         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig331         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig331         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig330         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_295_s cn; */
};
typedef union cavm_bbxe_abx_config_295 cavm_bbxe_abx_config_295_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_295(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_295(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302938ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_295", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_295(a) cavm_bbxe_abx_config_295_t
#define bustype_CAVM_BBXE_ABX_CONFIG_295(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_295(a) "BBXE_ABX_CONFIG_295"
#define busnum_CAVM_BBXE_ABX_CONFIG_295(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_295(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_296
 *
 * BBX5 Configuration Register 296
 * Job Configuration
 */
union cavm_bbxe_abx_config_296
{
    uint64_t u;
    struct cavm_bbxe_abx_config_296_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig332         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig333         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig333         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig332         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_296_s cn; */
};
typedef union cavm_bbxe_abx_config_296 cavm_bbxe_abx_config_296_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_296(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_296(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302940ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_296", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_296(a) cavm_bbxe_abx_config_296_t
#define bustype_CAVM_BBXE_ABX_CONFIG_296(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_296(a) "BBXE_ABX_CONFIG_296"
#define busnum_CAVM_BBXE_ABX_CONFIG_296(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_296(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_297
 *
 * BBX5 Configuration Register 297
 * Job Configuration
 */
union cavm_bbxe_abx_config_297
{
    uint64_t u;
    struct cavm_bbxe_abx_config_297_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig334         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig335         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig335         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig334         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_297_s cn; */
};
typedef union cavm_bbxe_abx_config_297 cavm_bbxe_abx_config_297_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_297(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_297(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302948ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_297", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_297(a) cavm_bbxe_abx_config_297_t
#define bustype_CAVM_BBXE_ABX_CONFIG_297(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_297(a) "BBXE_ABX_CONFIG_297"
#define busnum_CAVM_BBXE_ABX_CONFIG_297(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_297(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_298
 *
 * BBX5 Configuration Register 298
 * Job Configuration
 */
union cavm_bbxe_abx_config_298
{
    uint64_t u;
    struct cavm_bbxe_abx_config_298_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig336         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig337         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig337         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig336         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_298_s cn; */
};
typedef union cavm_bbxe_abx_config_298 cavm_bbxe_abx_config_298_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_298(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_298(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302950ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_298", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_298(a) cavm_bbxe_abx_config_298_t
#define bustype_CAVM_BBXE_ABX_CONFIG_298(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_298(a) "BBXE_ABX_CONFIG_298"
#define busnum_CAVM_BBXE_ABX_CONFIG_298(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_298(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_299
 *
 * BBX5 Configuration Register 299
 * Job Configuration
 */
union cavm_bbxe_abx_config_299
{
    uint64_t u;
    struct cavm_bbxe_abx_config_299_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig338         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig339         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig339         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig338         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_299_s cn; */
};
typedef union cavm_bbxe_abx_config_299 cavm_bbxe_abx_config_299_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_299(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_299(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302958ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_299", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_299(a) cavm_bbxe_abx_config_299_t
#define bustype_CAVM_BBXE_ABX_CONFIG_299(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_299(a) "BBXE_ABX_CONFIG_299"
#define busnum_CAVM_BBXE_ABX_CONFIG_299(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_299(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_3
 *
 * BBX5 Configuration Registers
 * Job Configuration
 */
union cavm_bbxe_abx_config_3
{
    uint64_t u;
    struct cavm_bbxe_abx_config_3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig26          : 31; /**< [ 63: 33](RO) SS_Reserved */
        uint64_t ss_res_sig27          : 33; /**< [ 32:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig27          : 33; /**< [ 32:  0](R/W) -- */
        uint64_t ss_res_sig26          : 31; /**< [ 63: 33](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_3_s cn; */
};
typedef union cavm_bbxe_abx_config_3 cavm_bbxe_abx_config_3_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_3(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302018ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_3(a) cavm_bbxe_abx_config_3_t
#define bustype_CAVM_BBXE_ABX_CONFIG_3(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_3(a) "BBXE_ABX_CONFIG_3"
#define busnum_CAVM_BBXE_ABX_CONFIG_3(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_3(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_30
 *
 * BBX5 Configuration Register 30
 * Job Configuration
 */
union cavm_bbxe_abx_config_30
{
    uint64_t u;
    struct cavm_bbxe_abx_config_30_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig54          : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig54          : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_30_s cn; */
};
typedef union cavm_bbxe_abx_config_30 cavm_bbxe_abx_config_30_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_30(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_30(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423020f0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_30", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_30(a) cavm_bbxe_abx_config_30_t
#define bustype_CAVM_BBXE_ABX_CONFIG_30(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_30(a) "BBXE_ABX_CONFIG_30"
#define busnum_CAVM_BBXE_ABX_CONFIG_30(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_30(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_300
 *
 * BBX5 Configuration Register 300
 * Job Configuration
 */
union cavm_bbxe_abx_config_300
{
    uint64_t u;
    struct cavm_bbxe_abx_config_300_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig340         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig341         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig341         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig340         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_300_s cn; */
};
typedef union cavm_bbxe_abx_config_300 cavm_bbxe_abx_config_300_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_300(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_300(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302960ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_300", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_300(a) cavm_bbxe_abx_config_300_t
#define bustype_CAVM_BBXE_ABX_CONFIG_300(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_300(a) "BBXE_ABX_CONFIG_300"
#define busnum_CAVM_BBXE_ABX_CONFIG_300(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_300(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_301
 *
 * BBX5 Configuration Register 301
 * Job Configuration
 */
union cavm_bbxe_abx_config_301
{
    uint64_t u;
    struct cavm_bbxe_abx_config_301_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig342         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig343         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig343         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig342         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_301_s cn; */
};
typedef union cavm_bbxe_abx_config_301 cavm_bbxe_abx_config_301_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_301(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_301(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302968ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_301", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_301(a) cavm_bbxe_abx_config_301_t
#define bustype_CAVM_BBXE_ABX_CONFIG_301(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_301(a) "BBXE_ABX_CONFIG_301"
#define busnum_CAVM_BBXE_ABX_CONFIG_301(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_301(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_302
 *
 * BBX5 Configuration Register 302
 * Job Configuration
 */
union cavm_bbxe_abx_config_302
{
    uint64_t u;
    struct cavm_bbxe_abx_config_302_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig344         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig345         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig345         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig344         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_302_s cn; */
};
typedef union cavm_bbxe_abx_config_302 cavm_bbxe_abx_config_302_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_302(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_302(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302970ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_302", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_302(a) cavm_bbxe_abx_config_302_t
#define bustype_CAVM_BBXE_ABX_CONFIG_302(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_302(a) "BBXE_ABX_CONFIG_302"
#define busnum_CAVM_BBXE_ABX_CONFIG_302(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_302(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_303
 *
 * BBX5 Configuration Register 303
 * Job Configuration
 */
union cavm_bbxe_abx_config_303
{
    uint64_t u;
    struct cavm_bbxe_abx_config_303_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig346         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig347         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig347         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig346         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_303_s cn; */
};
typedef union cavm_bbxe_abx_config_303 cavm_bbxe_abx_config_303_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_303(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_303(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302978ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_303", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_303(a) cavm_bbxe_abx_config_303_t
#define bustype_CAVM_BBXE_ABX_CONFIG_303(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_303(a) "BBXE_ABX_CONFIG_303"
#define busnum_CAVM_BBXE_ABX_CONFIG_303(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_303(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_304
 *
 * BBX5 Configuration Register 304
 * Job Configuration
 */
union cavm_bbxe_abx_config_304
{
    uint64_t u;
    struct cavm_bbxe_abx_config_304_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig348         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig349         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig349         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig348         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_304_s cn; */
};
typedef union cavm_bbxe_abx_config_304 cavm_bbxe_abx_config_304_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_304(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_304(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302980ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_304", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_304(a) cavm_bbxe_abx_config_304_t
#define bustype_CAVM_BBXE_ABX_CONFIG_304(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_304(a) "BBXE_ABX_CONFIG_304"
#define busnum_CAVM_BBXE_ABX_CONFIG_304(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_304(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_305
 *
 * BBX5 Configuration Register 305
 * Job Configuration
 */
union cavm_bbxe_abx_config_305
{
    uint64_t u;
    struct cavm_bbxe_abx_config_305_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig350         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig351         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig351         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig350         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_305_s cn; */
};
typedef union cavm_bbxe_abx_config_305 cavm_bbxe_abx_config_305_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_305(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_305(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302988ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_305", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_305(a) cavm_bbxe_abx_config_305_t
#define bustype_CAVM_BBXE_ABX_CONFIG_305(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_305(a) "BBXE_ABX_CONFIG_305"
#define busnum_CAVM_BBXE_ABX_CONFIG_305(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_305(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_306
 *
 * BBX5 Configuration Register 306
 * Job Configuration
 */
union cavm_bbxe_abx_config_306
{
    uint64_t u;
    struct cavm_bbxe_abx_config_306_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig352         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig353         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig353         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig352         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_306_s cn; */
};
typedef union cavm_bbxe_abx_config_306 cavm_bbxe_abx_config_306_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_306(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_306(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302990ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_306", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_306(a) cavm_bbxe_abx_config_306_t
#define bustype_CAVM_BBXE_ABX_CONFIG_306(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_306(a) "BBXE_ABX_CONFIG_306"
#define busnum_CAVM_BBXE_ABX_CONFIG_306(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_306(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_307
 *
 * BBX5 Configuration Register 307
 * Job Configuration
 */
union cavm_bbxe_abx_config_307
{
    uint64_t u;
    struct cavm_bbxe_abx_config_307_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig354         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig355         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig355         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig354         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_307_s cn; */
};
typedef union cavm_bbxe_abx_config_307 cavm_bbxe_abx_config_307_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_307(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_307(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302998ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_307", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_307(a) cavm_bbxe_abx_config_307_t
#define bustype_CAVM_BBXE_ABX_CONFIG_307(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_307(a) "BBXE_ABX_CONFIG_307"
#define busnum_CAVM_BBXE_ABX_CONFIG_307(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_307(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_308
 *
 * BBX5 Configuration Register 308
 * Job Configuration
 */
union cavm_bbxe_abx_config_308
{
    uint64_t u;
    struct cavm_bbxe_abx_config_308_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig356         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig357         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig357         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig356         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_308_s cn; */
};
typedef union cavm_bbxe_abx_config_308 cavm_bbxe_abx_config_308_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_308(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_308(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423029a0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_308", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_308(a) cavm_bbxe_abx_config_308_t
#define bustype_CAVM_BBXE_ABX_CONFIG_308(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_308(a) "BBXE_ABX_CONFIG_308"
#define busnum_CAVM_BBXE_ABX_CONFIG_308(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_308(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_309
 *
 * BBX5 Configuration Register 309
 * Job Configuration
 */
union cavm_bbxe_abx_config_309
{
    uint64_t u;
    struct cavm_bbxe_abx_config_309_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig358         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig359         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig359         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig358         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_309_s cn; */
};
typedef union cavm_bbxe_abx_config_309 cavm_bbxe_abx_config_309_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_309(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_309(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423029a8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_309", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_309(a) cavm_bbxe_abx_config_309_t
#define bustype_CAVM_BBXE_ABX_CONFIG_309(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_309(a) "BBXE_ABX_CONFIG_309"
#define busnum_CAVM_BBXE_ABX_CONFIG_309(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_309(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_31
 *
 * BBX5 Configuration Register 31
 * Job Configuration
 */
union cavm_bbxe_abx_config_31
{
    uint64_t u;
    struct cavm_bbxe_abx_config_31_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig55          : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig55          : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_31_s cn; */
};
typedef union cavm_bbxe_abx_config_31 cavm_bbxe_abx_config_31_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_31(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_31(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423020f8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_31", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_31(a) cavm_bbxe_abx_config_31_t
#define bustype_CAVM_BBXE_ABX_CONFIG_31(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_31(a) "BBXE_ABX_CONFIG_31"
#define busnum_CAVM_BBXE_ABX_CONFIG_31(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_31(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_310
 *
 * BBX5 Configuration Register 310
 * Job Configuration
 */
union cavm_bbxe_abx_config_310
{
    uint64_t u;
    struct cavm_bbxe_abx_config_310_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig360         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig361         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig361         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig360         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_310_s cn; */
};
typedef union cavm_bbxe_abx_config_310 cavm_bbxe_abx_config_310_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_310(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_310(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423029b0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_310", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_310(a) cavm_bbxe_abx_config_310_t
#define bustype_CAVM_BBXE_ABX_CONFIG_310(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_310(a) "BBXE_ABX_CONFIG_310"
#define busnum_CAVM_BBXE_ABX_CONFIG_310(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_310(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_311
 *
 * BBX5 Configuration Register 311
 * Job Configuration
 */
union cavm_bbxe_abx_config_311
{
    uint64_t u;
    struct cavm_bbxe_abx_config_311_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig362         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig363         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig363         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig362         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_311_s cn; */
};
typedef union cavm_bbxe_abx_config_311 cavm_bbxe_abx_config_311_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_311(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_311(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423029b8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_311", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_311(a) cavm_bbxe_abx_config_311_t
#define bustype_CAVM_BBXE_ABX_CONFIG_311(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_311(a) "BBXE_ABX_CONFIG_311"
#define busnum_CAVM_BBXE_ABX_CONFIG_311(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_311(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_312
 *
 * BBX5 Configuration Register 312
 * Job Configuration
 */
union cavm_bbxe_abx_config_312
{
    uint64_t u;
    struct cavm_bbxe_abx_config_312_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig364         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig365         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig365         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig364         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_312_s cn; */
};
typedef union cavm_bbxe_abx_config_312 cavm_bbxe_abx_config_312_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_312(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_312(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423029c0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_312", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_312(a) cavm_bbxe_abx_config_312_t
#define bustype_CAVM_BBXE_ABX_CONFIG_312(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_312(a) "BBXE_ABX_CONFIG_312"
#define busnum_CAVM_BBXE_ABX_CONFIG_312(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_312(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_313
 *
 * BBX5 Configuration Register 313
 * Job Configuration
 */
union cavm_bbxe_abx_config_313
{
    uint64_t u;
    struct cavm_bbxe_abx_config_313_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig366         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig367         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig367         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig366         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_313_s cn; */
};
typedef union cavm_bbxe_abx_config_313 cavm_bbxe_abx_config_313_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_313(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_313(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423029c8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_313", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_313(a) cavm_bbxe_abx_config_313_t
#define bustype_CAVM_BBXE_ABX_CONFIG_313(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_313(a) "BBXE_ABX_CONFIG_313"
#define busnum_CAVM_BBXE_ABX_CONFIG_313(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_313(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_314
 *
 * BBX5 Configuration Register 314
 * Job Configuration
 */
union cavm_bbxe_abx_config_314
{
    uint64_t u;
    struct cavm_bbxe_abx_config_314_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig368         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig369         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig369         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig368         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_314_s cn; */
};
typedef union cavm_bbxe_abx_config_314 cavm_bbxe_abx_config_314_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_314(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_314(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423029d0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_314", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_314(a) cavm_bbxe_abx_config_314_t
#define bustype_CAVM_BBXE_ABX_CONFIG_314(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_314(a) "BBXE_ABX_CONFIG_314"
#define busnum_CAVM_BBXE_ABX_CONFIG_314(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_314(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_315
 *
 * BBX5 Configuration Register 315
 * Job Configuration
 */
union cavm_bbxe_abx_config_315
{
    uint64_t u;
    struct cavm_bbxe_abx_config_315_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig370         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig371         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig371         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig370         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_315_s cn; */
};
typedef union cavm_bbxe_abx_config_315 cavm_bbxe_abx_config_315_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_315(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_315(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423029d8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_315", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_315(a) cavm_bbxe_abx_config_315_t
#define bustype_CAVM_BBXE_ABX_CONFIG_315(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_315(a) "BBXE_ABX_CONFIG_315"
#define busnum_CAVM_BBXE_ABX_CONFIG_315(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_315(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_316
 *
 * BBX5 Configuration Register 316
 * Job Configuration
 */
union cavm_bbxe_abx_config_316
{
    uint64_t u;
    struct cavm_bbxe_abx_config_316_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig372         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig373         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig373         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig372         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_316_s cn; */
};
typedef union cavm_bbxe_abx_config_316 cavm_bbxe_abx_config_316_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_316(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_316(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423029e0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_316", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_316(a) cavm_bbxe_abx_config_316_t
#define bustype_CAVM_BBXE_ABX_CONFIG_316(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_316(a) "BBXE_ABX_CONFIG_316"
#define busnum_CAVM_BBXE_ABX_CONFIG_316(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_316(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_317
 *
 * BBX5 Configuration Register 317
 * Job Configuration
 */
union cavm_bbxe_abx_config_317
{
    uint64_t u;
    struct cavm_bbxe_abx_config_317_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig374         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig375         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig375         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig374         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_317_s cn; */
};
typedef union cavm_bbxe_abx_config_317 cavm_bbxe_abx_config_317_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_317(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_317(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423029e8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_317", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_317(a) cavm_bbxe_abx_config_317_t
#define bustype_CAVM_BBXE_ABX_CONFIG_317(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_317(a) "BBXE_ABX_CONFIG_317"
#define busnum_CAVM_BBXE_ABX_CONFIG_317(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_317(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_318
 *
 * BBX5 Configuration Register 318
 * Job Configuration
 */
union cavm_bbxe_abx_config_318
{
    uint64_t u;
    struct cavm_bbxe_abx_config_318_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig376         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig377         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig377         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig376         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_318_s cn; */
};
typedef union cavm_bbxe_abx_config_318 cavm_bbxe_abx_config_318_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_318(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_318(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423029f0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_318", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_318(a) cavm_bbxe_abx_config_318_t
#define bustype_CAVM_BBXE_ABX_CONFIG_318(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_318(a) "BBXE_ABX_CONFIG_318"
#define busnum_CAVM_BBXE_ABX_CONFIG_318(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_318(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_319
 *
 * BBX5 Configuration Register 319
 * Job Configuration
 */
union cavm_bbxe_abx_config_319
{
    uint64_t u;
    struct cavm_bbxe_abx_config_319_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig378         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig379         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig379         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig378         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_319_s cn; */
};
typedef union cavm_bbxe_abx_config_319 cavm_bbxe_abx_config_319_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_319(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_319(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423029f8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_319", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_319(a) cavm_bbxe_abx_config_319_t
#define bustype_CAVM_BBXE_ABX_CONFIG_319(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_319(a) "BBXE_ABX_CONFIG_319"
#define busnum_CAVM_BBXE_ABX_CONFIG_319(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_319(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_32
 *
 * BBX5 Configuration Register 32
 * Job Configuration
 */
union cavm_bbxe_abx_config_32
{
    uint64_t u;
    struct cavm_bbxe_abx_config_32_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig56          : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig56          : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_32_s cn; */
};
typedef union cavm_bbxe_abx_config_32 cavm_bbxe_abx_config_32_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_32(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_32(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302100ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_32", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_32(a) cavm_bbxe_abx_config_32_t
#define bustype_CAVM_BBXE_ABX_CONFIG_32(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_32(a) "BBXE_ABX_CONFIG_32"
#define busnum_CAVM_BBXE_ABX_CONFIG_32(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_32(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_320
 *
 * BBX5 Configuration Register 320
 * Job Configuration
 */
union cavm_bbxe_abx_config_320
{
    uint64_t u;
    struct cavm_bbxe_abx_config_320_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig380         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig381         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig381         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig380         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_320_s cn; */
};
typedef union cavm_bbxe_abx_config_320 cavm_bbxe_abx_config_320_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_320(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_320(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302a00ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_320", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_320(a) cavm_bbxe_abx_config_320_t
#define bustype_CAVM_BBXE_ABX_CONFIG_320(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_320(a) "BBXE_ABX_CONFIG_320"
#define busnum_CAVM_BBXE_ABX_CONFIG_320(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_320(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_321
 *
 * BBX5 Configuration Register 321
 * Job Configuration
 */
union cavm_bbxe_abx_config_321
{
    uint64_t u;
    struct cavm_bbxe_abx_config_321_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig382         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig383         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig383         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig382         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_321_s cn; */
};
typedef union cavm_bbxe_abx_config_321 cavm_bbxe_abx_config_321_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_321(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_321(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302a08ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_321", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_321(a) cavm_bbxe_abx_config_321_t
#define bustype_CAVM_BBXE_ABX_CONFIG_321(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_321(a) "BBXE_ABX_CONFIG_321"
#define busnum_CAVM_BBXE_ABX_CONFIG_321(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_321(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_322
 *
 * BBX5 Configuration Register 322
 * Job Configuration
 */
union cavm_bbxe_abx_config_322
{
    uint64_t u;
    struct cavm_bbxe_abx_config_322_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig384         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig385         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig385         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig384         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_322_s cn; */
};
typedef union cavm_bbxe_abx_config_322 cavm_bbxe_abx_config_322_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_322(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_322(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302a10ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_322", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_322(a) cavm_bbxe_abx_config_322_t
#define bustype_CAVM_BBXE_ABX_CONFIG_322(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_322(a) "BBXE_ABX_CONFIG_322"
#define busnum_CAVM_BBXE_ABX_CONFIG_322(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_322(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_323
 *
 * BBX5 Configuration Register 323
 * Job Configuration
 */
union cavm_bbxe_abx_config_323
{
    uint64_t u;
    struct cavm_bbxe_abx_config_323_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig386         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig387         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig387         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig386         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_323_s cn; */
};
typedef union cavm_bbxe_abx_config_323 cavm_bbxe_abx_config_323_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_323(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_323(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302a18ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_323", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_323(a) cavm_bbxe_abx_config_323_t
#define bustype_CAVM_BBXE_ABX_CONFIG_323(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_323(a) "BBXE_ABX_CONFIG_323"
#define busnum_CAVM_BBXE_ABX_CONFIG_323(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_323(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_324
 *
 * BBX5 Configuration Register 324
 * Job Configuration
 */
union cavm_bbxe_abx_config_324
{
    uint64_t u;
    struct cavm_bbxe_abx_config_324_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig388         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig389         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig389         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig388         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_324_s cn; */
};
typedef union cavm_bbxe_abx_config_324 cavm_bbxe_abx_config_324_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_324(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_324(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302a20ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_324", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_324(a) cavm_bbxe_abx_config_324_t
#define bustype_CAVM_BBXE_ABX_CONFIG_324(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_324(a) "BBXE_ABX_CONFIG_324"
#define busnum_CAVM_BBXE_ABX_CONFIG_324(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_324(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_325
 *
 * BBX5 Configuration Register 325
 * Job Configuration
 */
union cavm_bbxe_abx_config_325
{
    uint64_t u;
    struct cavm_bbxe_abx_config_325_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig390         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig391         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig391         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig390         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_325_s cn; */
};
typedef union cavm_bbxe_abx_config_325 cavm_bbxe_abx_config_325_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_325(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_325(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302a28ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_325", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_325(a) cavm_bbxe_abx_config_325_t
#define bustype_CAVM_BBXE_ABX_CONFIG_325(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_325(a) "BBXE_ABX_CONFIG_325"
#define busnum_CAVM_BBXE_ABX_CONFIG_325(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_325(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_326
 *
 * BBX5 Configuration Register 326
 * Job Configuration
 */
union cavm_bbxe_abx_config_326
{
    uint64_t u;
    struct cavm_bbxe_abx_config_326_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig392         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig393         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig393         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig392         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_326_s cn; */
};
typedef union cavm_bbxe_abx_config_326 cavm_bbxe_abx_config_326_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_326(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_326(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302a30ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_326", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_326(a) cavm_bbxe_abx_config_326_t
#define bustype_CAVM_BBXE_ABX_CONFIG_326(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_326(a) "BBXE_ABX_CONFIG_326"
#define busnum_CAVM_BBXE_ABX_CONFIG_326(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_326(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_327
 *
 * BBX5 Configuration Register 327
 * Job Configuration
 */
union cavm_bbxe_abx_config_327
{
    uint64_t u;
    struct cavm_bbxe_abx_config_327_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig394         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig395         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig395         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig394         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_327_s cn; */
};
typedef union cavm_bbxe_abx_config_327 cavm_bbxe_abx_config_327_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_327(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_327(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302a38ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_327", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_327(a) cavm_bbxe_abx_config_327_t
#define bustype_CAVM_BBXE_ABX_CONFIG_327(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_327(a) "BBXE_ABX_CONFIG_327"
#define busnum_CAVM_BBXE_ABX_CONFIG_327(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_327(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_328
 *
 * BBX5 Configuration Register 328
 * Job Configuration
 */
union cavm_bbxe_abx_config_328
{
    uint64_t u;
    struct cavm_bbxe_abx_config_328_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig396         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig397         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig397         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig396         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_328_s cn; */
};
typedef union cavm_bbxe_abx_config_328 cavm_bbxe_abx_config_328_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_328(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_328(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302a40ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_328", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_328(a) cavm_bbxe_abx_config_328_t
#define bustype_CAVM_BBXE_ABX_CONFIG_328(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_328(a) "BBXE_ABX_CONFIG_328"
#define busnum_CAVM_BBXE_ABX_CONFIG_328(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_328(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_329
 *
 * BBX5 Configuration Register 329
 * Job Configuration
 */
union cavm_bbxe_abx_config_329
{
    uint64_t u;
    struct cavm_bbxe_abx_config_329_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig398         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig399         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig399         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig398         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_329_s cn; */
};
typedef union cavm_bbxe_abx_config_329 cavm_bbxe_abx_config_329_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_329(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_329(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302a48ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_329", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_329(a) cavm_bbxe_abx_config_329_t
#define bustype_CAVM_BBXE_ABX_CONFIG_329(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_329(a) "BBXE_ABX_CONFIG_329"
#define busnum_CAVM_BBXE_ABX_CONFIG_329(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_329(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_33
 *
 * BBX5 Configuration Register 33
 * Job Configuration
 */
union cavm_bbxe_abx_config_33
{
    uint64_t u;
    struct cavm_bbxe_abx_config_33_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig57          : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig57          : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_33_s cn; */
};
typedef union cavm_bbxe_abx_config_33 cavm_bbxe_abx_config_33_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_33(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_33(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302108ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_33", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_33(a) cavm_bbxe_abx_config_33_t
#define bustype_CAVM_BBXE_ABX_CONFIG_33(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_33(a) "BBXE_ABX_CONFIG_33"
#define busnum_CAVM_BBXE_ABX_CONFIG_33(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_33(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_330
 *
 * BBX5 Configuration Register 330
 * Job Configuration
 */
union cavm_bbxe_abx_config_330
{
    uint64_t u;
    struct cavm_bbxe_abx_config_330_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig400         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig401         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig401         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig400         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_330_s cn; */
};
typedef union cavm_bbxe_abx_config_330 cavm_bbxe_abx_config_330_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_330(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_330(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302a50ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_330", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_330(a) cavm_bbxe_abx_config_330_t
#define bustype_CAVM_BBXE_ABX_CONFIG_330(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_330(a) "BBXE_ABX_CONFIG_330"
#define busnum_CAVM_BBXE_ABX_CONFIG_330(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_330(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_331
 *
 * BBX5 Configuration Register 331
 * Job Configuration
 */
union cavm_bbxe_abx_config_331
{
    uint64_t u;
    struct cavm_bbxe_abx_config_331_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig402         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig403         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig403         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig402         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_331_s cn; */
};
typedef union cavm_bbxe_abx_config_331 cavm_bbxe_abx_config_331_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_331(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_331(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302a58ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_331", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_331(a) cavm_bbxe_abx_config_331_t
#define bustype_CAVM_BBXE_ABX_CONFIG_331(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_331(a) "BBXE_ABX_CONFIG_331"
#define busnum_CAVM_BBXE_ABX_CONFIG_331(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_331(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_332
 *
 * BBX5 Configuration Register 332
 * Job Configuration
 */
union cavm_bbxe_abx_config_332
{
    uint64_t u;
    struct cavm_bbxe_abx_config_332_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig404         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig405         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig405         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig404         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_332_s cn; */
};
typedef union cavm_bbxe_abx_config_332 cavm_bbxe_abx_config_332_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_332(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_332(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302a60ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_332", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_332(a) cavm_bbxe_abx_config_332_t
#define bustype_CAVM_BBXE_ABX_CONFIG_332(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_332(a) "BBXE_ABX_CONFIG_332"
#define busnum_CAVM_BBXE_ABX_CONFIG_332(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_332(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_333
 *
 * BBX5 Configuration Register 333
 * Job Configuration
 */
union cavm_bbxe_abx_config_333
{
    uint64_t u;
    struct cavm_bbxe_abx_config_333_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig406         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig407         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig407         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig406         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_333_s cn; */
};
typedef union cavm_bbxe_abx_config_333 cavm_bbxe_abx_config_333_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_333(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_333(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302a68ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_333", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_333(a) cavm_bbxe_abx_config_333_t
#define bustype_CAVM_BBXE_ABX_CONFIG_333(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_333(a) "BBXE_ABX_CONFIG_333"
#define busnum_CAVM_BBXE_ABX_CONFIG_333(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_333(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_334
 *
 * BBX5 Configuration Register 334
 * Job Configuration
 */
union cavm_bbxe_abx_config_334
{
    uint64_t u;
    struct cavm_bbxe_abx_config_334_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig408         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig409         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig409         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig408         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_334_s cn; */
};
typedef union cavm_bbxe_abx_config_334 cavm_bbxe_abx_config_334_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_334(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_334(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302a70ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_334", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_334(a) cavm_bbxe_abx_config_334_t
#define bustype_CAVM_BBXE_ABX_CONFIG_334(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_334(a) "BBXE_ABX_CONFIG_334"
#define busnum_CAVM_BBXE_ABX_CONFIG_334(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_334(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_335
 *
 * BBX5 Configuration Register 335
 * Job Configuration
 */
union cavm_bbxe_abx_config_335
{
    uint64_t u;
    struct cavm_bbxe_abx_config_335_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig410         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig411         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig411         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig410         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_335_s cn; */
};
typedef union cavm_bbxe_abx_config_335 cavm_bbxe_abx_config_335_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_335(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_335(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302a78ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_335", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_335(a) cavm_bbxe_abx_config_335_t
#define bustype_CAVM_BBXE_ABX_CONFIG_335(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_335(a) "BBXE_ABX_CONFIG_335"
#define busnum_CAVM_BBXE_ABX_CONFIG_335(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_335(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_336
 *
 * BBX5 Configuration Register 336
 * Job Configuration
 */
union cavm_bbxe_abx_config_336
{
    uint64_t u;
    struct cavm_bbxe_abx_config_336_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig412         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig413         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig413         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig412         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_336_s cn; */
};
typedef union cavm_bbxe_abx_config_336 cavm_bbxe_abx_config_336_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_336(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_336(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302a80ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_336", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_336(a) cavm_bbxe_abx_config_336_t
#define bustype_CAVM_BBXE_ABX_CONFIG_336(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_336(a) "BBXE_ABX_CONFIG_336"
#define busnum_CAVM_BBXE_ABX_CONFIG_336(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_336(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_337
 *
 * BBX5 Configuration Register 337
 * Job Configuration
 */
union cavm_bbxe_abx_config_337
{
    uint64_t u;
    struct cavm_bbxe_abx_config_337_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig414         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig415         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig415         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig414         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_337_s cn; */
};
typedef union cavm_bbxe_abx_config_337 cavm_bbxe_abx_config_337_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_337(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_337(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302a88ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_337", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_337(a) cavm_bbxe_abx_config_337_t
#define bustype_CAVM_BBXE_ABX_CONFIG_337(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_337(a) "BBXE_ABX_CONFIG_337"
#define busnum_CAVM_BBXE_ABX_CONFIG_337(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_337(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_338
 *
 * BBX5 Configuration Register 338
 * Job Configuration
 */
union cavm_bbxe_abx_config_338
{
    uint64_t u;
    struct cavm_bbxe_abx_config_338_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig416         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig417         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig417         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig416         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_338_s cn; */
};
typedef union cavm_bbxe_abx_config_338 cavm_bbxe_abx_config_338_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_338(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_338(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302a90ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_338", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_338(a) cavm_bbxe_abx_config_338_t
#define bustype_CAVM_BBXE_ABX_CONFIG_338(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_338(a) "BBXE_ABX_CONFIG_338"
#define busnum_CAVM_BBXE_ABX_CONFIG_338(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_338(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_339
 *
 * BBX5 Configuration Register 339
 * Job Configuration
 */
union cavm_bbxe_abx_config_339
{
    uint64_t u;
    struct cavm_bbxe_abx_config_339_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig418         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig419         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig419         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig418         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_339_s cn; */
};
typedef union cavm_bbxe_abx_config_339 cavm_bbxe_abx_config_339_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_339(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_339(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302a98ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_339", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_339(a) cavm_bbxe_abx_config_339_t
#define bustype_CAVM_BBXE_ABX_CONFIG_339(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_339(a) "BBXE_ABX_CONFIG_339"
#define busnum_CAVM_BBXE_ABX_CONFIG_339(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_339(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_34
 *
 * BBX5 Configuration Register 34
 * Job Configuration
 */
union cavm_bbxe_abx_config_34
{
    uint64_t u;
    struct cavm_bbxe_abx_config_34_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig58          : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig58          : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_34_s cn; */
};
typedef union cavm_bbxe_abx_config_34 cavm_bbxe_abx_config_34_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_34(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_34(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302110ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_34", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_34(a) cavm_bbxe_abx_config_34_t
#define bustype_CAVM_BBXE_ABX_CONFIG_34(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_34(a) "BBXE_ABX_CONFIG_34"
#define busnum_CAVM_BBXE_ABX_CONFIG_34(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_34(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_340
 *
 * BBX5 Configuration Register 340
 * Job Configuration
 */
union cavm_bbxe_abx_config_340
{
    uint64_t u;
    struct cavm_bbxe_abx_config_340_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig420         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig421         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig421         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig420         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_340_s cn; */
};
typedef union cavm_bbxe_abx_config_340 cavm_bbxe_abx_config_340_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_340(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_340(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302aa0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_340", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_340(a) cavm_bbxe_abx_config_340_t
#define bustype_CAVM_BBXE_ABX_CONFIG_340(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_340(a) "BBXE_ABX_CONFIG_340"
#define busnum_CAVM_BBXE_ABX_CONFIG_340(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_340(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_341
 *
 * BBX5 Configuration Register 341
 * Job Configuration
 */
union cavm_bbxe_abx_config_341
{
    uint64_t u;
    struct cavm_bbxe_abx_config_341_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig422         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig423         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig423         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig422         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_341_s cn; */
};
typedef union cavm_bbxe_abx_config_341 cavm_bbxe_abx_config_341_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_341(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_341(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302aa8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_341", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_341(a) cavm_bbxe_abx_config_341_t
#define bustype_CAVM_BBXE_ABX_CONFIG_341(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_341(a) "BBXE_ABX_CONFIG_341"
#define busnum_CAVM_BBXE_ABX_CONFIG_341(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_341(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_342
 *
 * BBX5 Configuration Register 342
 * Job Configuration
 */
union cavm_bbxe_abx_config_342
{
    uint64_t u;
    struct cavm_bbxe_abx_config_342_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig424         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig425         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig425         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig424         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_342_s cn; */
};
typedef union cavm_bbxe_abx_config_342 cavm_bbxe_abx_config_342_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_342(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_342(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302ab0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_342", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_342(a) cavm_bbxe_abx_config_342_t
#define bustype_CAVM_BBXE_ABX_CONFIG_342(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_342(a) "BBXE_ABX_CONFIG_342"
#define busnum_CAVM_BBXE_ABX_CONFIG_342(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_342(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_343
 *
 * BBX5 Configuration Register 343
 * Job Configuration
 */
union cavm_bbxe_abx_config_343
{
    uint64_t u;
    struct cavm_bbxe_abx_config_343_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig426         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig427         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig427         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig426         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_343_s cn; */
};
typedef union cavm_bbxe_abx_config_343 cavm_bbxe_abx_config_343_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_343(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_343(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302ab8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_343", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_343(a) cavm_bbxe_abx_config_343_t
#define bustype_CAVM_BBXE_ABX_CONFIG_343(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_343(a) "BBXE_ABX_CONFIG_343"
#define busnum_CAVM_BBXE_ABX_CONFIG_343(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_343(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_344
 *
 * BBX5 Configuration Register 344
 * Job Configuration
 */
union cavm_bbxe_abx_config_344
{
    uint64_t u;
    struct cavm_bbxe_abx_config_344_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig428         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig429         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig429         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig428         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_344_s cn; */
};
typedef union cavm_bbxe_abx_config_344 cavm_bbxe_abx_config_344_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_344(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_344(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302ac0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_344", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_344(a) cavm_bbxe_abx_config_344_t
#define bustype_CAVM_BBXE_ABX_CONFIG_344(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_344(a) "BBXE_ABX_CONFIG_344"
#define busnum_CAVM_BBXE_ABX_CONFIG_344(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_344(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_345
 *
 * BBX5 Configuration Register 345
 * Job Configuration
 */
union cavm_bbxe_abx_config_345
{
    uint64_t u;
    struct cavm_bbxe_abx_config_345_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig430         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig431         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig431         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig430         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_345_s cn; */
};
typedef union cavm_bbxe_abx_config_345 cavm_bbxe_abx_config_345_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_345(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_345(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302ac8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_345", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_345(a) cavm_bbxe_abx_config_345_t
#define bustype_CAVM_BBXE_ABX_CONFIG_345(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_345(a) "BBXE_ABX_CONFIG_345"
#define busnum_CAVM_BBXE_ABX_CONFIG_345(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_345(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_346
 *
 * BBX5 Configuration Register 346
 * Job Configuration
 */
union cavm_bbxe_abx_config_346
{
    uint64_t u;
    struct cavm_bbxe_abx_config_346_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig432         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig433         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig433         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig432         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_346_s cn; */
};
typedef union cavm_bbxe_abx_config_346 cavm_bbxe_abx_config_346_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_346(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_346(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302ad0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_346", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_346(a) cavm_bbxe_abx_config_346_t
#define bustype_CAVM_BBXE_ABX_CONFIG_346(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_346(a) "BBXE_ABX_CONFIG_346"
#define busnum_CAVM_BBXE_ABX_CONFIG_346(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_346(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_347
 *
 * BBX5 Configuration Register 347
 * Job Configuration
 */
union cavm_bbxe_abx_config_347
{
    uint64_t u;
    struct cavm_bbxe_abx_config_347_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig434         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig435         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig435         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig434         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_347_s cn; */
};
typedef union cavm_bbxe_abx_config_347 cavm_bbxe_abx_config_347_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_347(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_347(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302ad8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_347", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_347(a) cavm_bbxe_abx_config_347_t
#define bustype_CAVM_BBXE_ABX_CONFIG_347(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_347(a) "BBXE_ABX_CONFIG_347"
#define busnum_CAVM_BBXE_ABX_CONFIG_347(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_347(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_348
 *
 * BBX5 Configuration Register 348
 * Job Configuration
 */
union cavm_bbxe_abx_config_348
{
    uint64_t u;
    struct cavm_bbxe_abx_config_348_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig436         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig437         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig437         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig436         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_348_s cn; */
};
typedef union cavm_bbxe_abx_config_348 cavm_bbxe_abx_config_348_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_348(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_348(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302ae0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_348", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_348(a) cavm_bbxe_abx_config_348_t
#define bustype_CAVM_BBXE_ABX_CONFIG_348(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_348(a) "BBXE_ABX_CONFIG_348"
#define busnum_CAVM_BBXE_ABX_CONFIG_348(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_348(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_349
 *
 * BBX5 Configuration Register 349
 * Job Configuration
 */
union cavm_bbxe_abx_config_349
{
    uint64_t u;
    struct cavm_bbxe_abx_config_349_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig438         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig439         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig439         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig438         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_349_s cn; */
};
typedef union cavm_bbxe_abx_config_349 cavm_bbxe_abx_config_349_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_349(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_349(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302ae8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_349", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_349(a) cavm_bbxe_abx_config_349_t
#define bustype_CAVM_BBXE_ABX_CONFIG_349(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_349(a) "BBXE_ABX_CONFIG_349"
#define busnum_CAVM_BBXE_ABX_CONFIG_349(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_349(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_35
 *
 * BBX5 Configuration Register 35
 * Job Configuration
 */
union cavm_bbxe_abx_config_35
{
    uint64_t u;
    struct cavm_bbxe_abx_config_35_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig59          : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig59          : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_35_s cn; */
};
typedef union cavm_bbxe_abx_config_35 cavm_bbxe_abx_config_35_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_35(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_35(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302118ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_35", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_35(a) cavm_bbxe_abx_config_35_t
#define bustype_CAVM_BBXE_ABX_CONFIG_35(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_35(a) "BBXE_ABX_CONFIG_35"
#define busnum_CAVM_BBXE_ABX_CONFIG_35(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_35(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_350
 *
 * BBX5 Configuration Register 350
 * Job Configuration
 */
union cavm_bbxe_abx_config_350
{
    uint64_t u;
    struct cavm_bbxe_abx_config_350_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig440         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig441         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig441         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig440         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_350_s cn; */
};
typedef union cavm_bbxe_abx_config_350 cavm_bbxe_abx_config_350_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_350(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_350(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302af0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_350", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_350(a) cavm_bbxe_abx_config_350_t
#define bustype_CAVM_BBXE_ABX_CONFIG_350(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_350(a) "BBXE_ABX_CONFIG_350"
#define busnum_CAVM_BBXE_ABX_CONFIG_350(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_350(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_351
 *
 * BBX5 Configuration Register 351
 * Job Configuration
 */
union cavm_bbxe_abx_config_351
{
    uint64_t u;
    struct cavm_bbxe_abx_config_351_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig442         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig443         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig443         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig442         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_351_s cn; */
};
typedef union cavm_bbxe_abx_config_351 cavm_bbxe_abx_config_351_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_351(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_351(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302af8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_351", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_351(a) cavm_bbxe_abx_config_351_t
#define bustype_CAVM_BBXE_ABX_CONFIG_351(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_351(a) "BBXE_ABX_CONFIG_351"
#define busnum_CAVM_BBXE_ABX_CONFIG_351(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_351(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_352
 *
 * BBX5 Configuration Register 352
 * Job Configuration
 */
union cavm_bbxe_abx_config_352
{
    uint64_t u;
    struct cavm_bbxe_abx_config_352_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig444         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig445         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig445         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig444         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_352_s cn; */
};
typedef union cavm_bbxe_abx_config_352 cavm_bbxe_abx_config_352_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_352(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_352(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302b00ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_352", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_352(a) cavm_bbxe_abx_config_352_t
#define bustype_CAVM_BBXE_ABX_CONFIG_352(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_352(a) "BBXE_ABX_CONFIG_352"
#define busnum_CAVM_BBXE_ABX_CONFIG_352(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_352(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_353
 *
 * BBX5 Configuration Register 353
 * Job Configuration
 */
union cavm_bbxe_abx_config_353
{
    uint64_t u;
    struct cavm_bbxe_abx_config_353_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig446         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig447         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig447         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig446         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_353_s cn; */
};
typedef union cavm_bbxe_abx_config_353 cavm_bbxe_abx_config_353_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_353(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_353(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302b08ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_353", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_353(a) cavm_bbxe_abx_config_353_t
#define bustype_CAVM_BBXE_ABX_CONFIG_353(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_353(a) "BBXE_ABX_CONFIG_353"
#define busnum_CAVM_BBXE_ABX_CONFIG_353(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_353(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_354
 *
 * BBX5 Configuration Register 354
 * Job Configuration
 */
union cavm_bbxe_abx_config_354
{
    uint64_t u;
    struct cavm_bbxe_abx_config_354_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig448         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig449         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig449         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig448         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_354_s cn; */
};
typedef union cavm_bbxe_abx_config_354 cavm_bbxe_abx_config_354_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_354(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_354(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302b10ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_354", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_354(a) cavm_bbxe_abx_config_354_t
#define bustype_CAVM_BBXE_ABX_CONFIG_354(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_354(a) "BBXE_ABX_CONFIG_354"
#define busnum_CAVM_BBXE_ABX_CONFIG_354(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_354(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_355
 *
 * BBX5 Configuration Register 355
 * Job Configuration
 */
union cavm_bbxe_abx_config_355
{
    uint64_t u;
    struct cavm_bbxe_abx_config_355_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig450         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig451         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig451         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig450         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_355_s cn; */
};
typedef union cavm_bbxe_abx_config_355 cavm_bbxe_abx_config_355_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_355(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_355(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302b18ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_355", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_355(a) cavm_bbxe_abx_config_355_t
#define bustype_CAVM_BBXE_ABX_CONFIG_355(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_355(a) "BBXE_ABX_CONFIG_355"
#define busnum_CAVM_BBXE_ABX_CONFIG_355(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_355(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_356
 *
 * BBX5 Configuration Register 356
 * Job Configuration
 */
union cavm_bbxe_abx_config_356
{
    uint64_t u;
    struct cavm_bbxe_abx_config_356_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig452         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig453         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig453         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig452         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_356_s cn; */
};
typedef union cavm_bbxe_abx_config_356 cavm_bbxe_abx_config_356_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_356(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_356(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302b20ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_356", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_356(a) cavm_bbxe_abx_config_356_t
#define bustype_CAVM_BBXE_ABX_CONFIG_356(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_356(a) "BBXE_ABX_CONFIG_356"
#define busnum_CAVM_BBXE_ABX_CONFIG_356(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_356(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_357
 *
 * BBX5 Configuration Register 357
 * Job Configuration
 */
union cavm_bbxe_abx_config_357
{
    uint64_t u;
    struct cavm_bbxe_abx_config_357_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig454         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig455         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig455         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig454         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_357_s cn; */
};
typedef union cavm_bbxe_abx_config_357 cavm_bbxe_abx_config_357_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_357(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_357(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302b28ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_357", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_357(a) cavm_bbxe_abx_config_357_t
#define bustype_CAVM_BBXE_ABX_CONFIG_357(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_357(a) "BBXE_ABX_CONFIG_357"
#define busnum_CAVM_BBXE_ABX_CONFIG_357(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_357(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_358
 *
 * BBX5 Configuration Register 358
 * Job Configuration
 */
union cavm_bbxe_abx_config_358
{
    uint64_t u;
    struct cavm_bbxe_abx_config_358_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig456         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig457         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig457         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig456         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_358_s cn; */
};
typedef union cavm_bbxe_abx_config_358 cavm_bbxe_abx_config_358_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_358(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_358(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302b30ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_358", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_358(a) cavm_bbxe_abx_config_358_t
#define bustype_CAVM_BBXE_ABX_CONFIG_358(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_358(a) "BBXE_ABX_CONFIG_358"
#define busnum_CAVM_BBXE_ABX_CONFIG_358(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_358(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_359
 *
 * BBX5 Configuration Register 359
 * Job Configuration
 */
union cavm_bbxe_abx_config_359
{
    uint64_t u;
    struct cavm_bbxe_abx_config_359_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig458         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig459         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig459         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig458         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_359_s cn; */
};
typedef union cavm_bbxe_abx_config_359 cavm_bbxe_abx_config_359_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_359(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_359(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302b38ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_359", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_359(a) cavm_bbxe_abx_config_359_t
#define bustype_CAVM_BBXE_ABX_CONFIG_359(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_359(a) "BBXE_ABX_CONFIG_359"
#define busnum_CAVM_BBXE_ABX_CONFIG_359(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_359(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_36
 *
 * BBX5 Configuration Register 36
 * Job Configuration
 */
union cavm_bbxe_abx_config_36
{
    uint64_t u;
    struct cavm_bbxe_abx_config_36_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig60          : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig60          : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_36_s cn; */
};
typedef union cavm_bbxe_abx_config_36 cavm_bbxe_abx_config_36_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_36(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_36(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302120ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_36", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_36(a) cavm_bbxe_abx_config_36_t
#define bustype_CAVM_BBXE_ABX_CONFIG_36(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_36(a) "BBXE_ABX_CONFIG_36"
#define busnum_CAVM_BBXE_ABX_CONFIG_36(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_36(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_360
 *
 * BBX5 Configuration Register 360
 * Job Configuration
 */
union cavm_bbxe_abx_config_360
{
    uint64_t u;
    struct cavm_bbxe_abx_config_360_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig460         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig461         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig461         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig460         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_360_s cn; */
};
typedef union cavm_bbxe_abx_config_360 cavm_bbxe_abx_config_360_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_360(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_360(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302b40ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_360", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_360(a) cavm_bbxe_abx_config_360_t
#define bustype_CAVM_BBXE_ABX_CONFIG_360(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_360(a) "BBXE_ABX_CONFIG_360"
#define busnum_CAVM_BBXE_ABX_CONFIG_360(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_360(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_361
 *
 * BBX5 Configuration Register 361
 * Job Configuration
 */
union cavm_bbxe_abx_config_361
{
    uint64_t u;
    struct cavm_bbxe_abx_config_361_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig462         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig463         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig463         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig462         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_361_s cn; */
};
typedef union cavm_bbxe_abx_config_361 cavm_bbxe_abx_config_361_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_361(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_361(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302b48ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_361", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_361(a) cavm_bbxe_abx_config_361_t
#define bustype_CAVM_BBXE_ABX_CONFIG_361(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_361(a) "BBXE_ABX_CONFIG_361"
#define busnum_CAVM_BBXE_ABX_CONFIG_361(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_361(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_362
 *
 * BBX5 Configuration Register 362
 * Job Configuration
 */
union cavm_bbxe_abx_config_362
{
    uint64_t u;
    struct cavm_bbxe_abx_config_362_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig464         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig465         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig465         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig464         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_362_s cn; */
};
typedef union cavm_bbxe_abx_config_362 cavm_bbxe_abx_config_362_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_362(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_362(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302b50ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_362", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_362(a) cavm_bbxe_abx_config_362_t
#define bustype_CAVM_BBXE_ABX_CONFIG_362(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_362(a) "BBXE_ABX_CONFIG_362"
#define busnum_CAVM_BBXE_ABX_CONFIG_362(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_362(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_363
 *
 * BBX5 Configuration Register 363
 * Job Configuration
 */
union cavm_bbxe_abx_config_363
{
    uint64_t u;
    struct cavm_bbxe_abx_config_363_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig466         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig467         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig467         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig466         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_363_s cn; */
};
typedef union cavm_bbxe_abx_config_363 cavm_bbxe_abx_config_363_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_363(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_363(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302b58ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_363", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_363(a) cavm_bbxe_abx_config_363_t
#define bustype_CAVM_BBXE_ABX_CONFIG_363(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_363(a) "BBXE_ABX_CONFIG_363"
#define busnum_CAVM_BBXE_ABX_CONFIG_363(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_363(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_364
 *
 * BBX5 Configuration Register 364
 * Job Configuration
 */
union cavm_bbxe_abx_config_364
{
    uint64_t u;
    struct cavm_bbxe_abx_config_364_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig468         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig469         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig469         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig468         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_364_s cn; */
};
typedef union cavm_bbxe_abx_config_364 cavm_bbxe_abx_config_364_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_364(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_364(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302b60ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_364", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_364(a) cavm_bbxe_abx_config_364_t
#define bustype_CAVM_BBXE_ABX_CONFIG_364(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_364(a) "BBXE_ABX_CONFIG_364"
#define busnum_CAVM_BBXE_ABX_CONFIG_364(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_364(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_365
 *
 * BBX5 Configuration Register 365
 * Job Configuration
 */
union cavm_bbxe_abx_config_365
{
    uint64_t u;
    struct cavm_bbxe_abx_config_365_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig470         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig471         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig471         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig470         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_365_s cn; */
};
typedef union cavm_bbxe_abx_config_365 cavm_bbxe_abx_config_365_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_365(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_365(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302b68ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_365", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_365(a) cavm_bbxe_abx_config_365_t
#define bustype_CAVM_BBXE_ABX_CONFIG_365(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_365(a) "BBXE_ABX_CONFIG_365"
#define busnum_CAVM_BBXE_ABX_CONFIG_365(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_365(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_366
 *
 * BBX5 Configuration Register 366
 * Job Configuration
 */
union cavm_bbxe_abx_config_366
{
    uint64_t u;
    struct cavm_bbxe_abx_config_366_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig472         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig473         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig473         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig472         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_366_s cn; */
};
typedef union cavm_bbxe_abx_config_366 cavm_bbxe_abx_config_366_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_366(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_366(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302b70ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_366", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_366(a) cavm_bbxe_abx_config_366_t
#define bustype_CAVM_BBXE_ABX_CONFIG_366(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_366(a) "BBXE_ABX_CONFIG_366"
#define busnum_CAVM_BBXE_ABX_CONFIG_366(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_366(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_367
 *
 * BBX5 Configuration Register 367
 * Job Configuration
 */
union cavm_bbxe_abx_config_367
{
    uint64_t u;
    struct cavm_bbxe_abx_config_367_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig474         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig475         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig475         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig474         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_367_s cn; */
};
typedef union cavm_bbxe_abx_config_367 cavm_bbxe_abx_config_367_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_367(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_367(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302b78ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_367", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_367(a) cavm_bbxe_abx_config_367_t
#define bustype_CAVM_BBXE_ABX_CONFIG_367(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_367(a) "BBXE_ABX_CONFIG_367"
#define busnum_CAVM_BBXE_ABX_CONFIG_367(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_367(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_368
 *
 * BBX5 Configuration Register 368
 * Job Configuration
 */
union cavm_bbxe_abx_config_368
{
    uint64_t u;
    struct cavm_bbxe_abx_config_368_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig476         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig477         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig477         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig476         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_368_s cn; */
};
typedef union cavm_bbxe_abx_config_368 cavm_bbxe_abx_config_368_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_368(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_368(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302b80ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_368", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_368(a) cavm_bbxe_abx_config_368_t
#define bustype_CAVM_BBXE_ABX_CONFIG_368(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_368(a) "BBXE_ABX_CONFIG_368"
#define busnum_CAVM_BBXE_ABX_CONFIG_368(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_368(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_369
 *
 * BBX5 Configuration Register 369
 * Job Configuration
 */
union cavm_bbxe_abx_config_369
{
    uint64_t u;
    struct cavm_bbxe_abx_config_369_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig478         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig479         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig479         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig478         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_369_s cn; */
};
typedef union cavm_bbxe_abx_config_369 cavm_bbxe_abx_config_369_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_369(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_369(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302b88ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_369", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_369(a) cavm_bbxe_abx_config_369_t
#define bustype_CAVM_BBXE_ABX_CONFIG_369(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_369(a) "BBXE_ABX_CONFIG_369"
#define busnum_CAVM_BBXE_ABX_CONFIG_369(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_369(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_37
 *
 * BBX5 Configuration Register 37
 * Job Configuration
 */
union cavm_bbxe_abx_config_37
{
    uint64_t u;
    struct cavm_bbxe_abx_config_37_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig61          : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig61          : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_37_s cn; */
};
typedef union cavm_bbxe_abx_config_37 cavm_bbxe_abx_config_37_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_37(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_37(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302128ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_37", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_37(a) cavm_bbxe_abx_config_37_t
#define bustype_CAVM_BBXE_ABX_CONFIG_37(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_37(a) "BBXE_ABX_CONFIG_37"
#define busnum_CAVM_BBXE_ABX_CONFIG_37(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_37(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_370
 *
 * BBX5 Configuration Register 370
 * Job Configuration
 */
union cavm_bbxe_abx_config_370
{
    uint64_t u;
    struct cavm_bbxe_abx_config_370_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig480         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig481         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig481         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig480         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_370_s cn; */
};
typedef union cavm_bbxe_abx_config_370 cavm_bbxe_abx_config_370_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_370(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_370(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302b90ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_370", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_370(a) cavm_bbxe_abx_config_370_t
#define bustype_CAVM_BBXE_ABX_CONFIG_370(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_370(a) "BBXE_ABX_CONFIG_370"
#define busnum_CAVM_BBXE_ABX_CONFIG_370(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_370(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_371
 *
 * BBX5 Configuration Register 371
 * Job Configuration
 */
union cavm_bbxe_abx_config_371
{
    uint64_t u;
    struct cavm_bbxe_abx_config_371_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig482         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig483         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig483         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig482         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_371_s cn; */
};
typedef union cavm_bbxe_abx_config_371 cavm_bbxe_abx_config_371_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_371(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_371(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302b98ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_371", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_371(a) cavm_bbxe_abx_config_371_t
#define bustype_CAVM_BBXE_ABX_CONFIG_371(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_371(a) "BBXE_ABX_CONFIG_371"
#define busnum_CAVM_BBXE_ABX_CONFIG_371(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_371(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_372
 *
 * BBX5 Configuration Register 372
 * Job Configuration
 */
union cavm_bbxe_abx_config_372
{
    uint64_t u;
    struct cavm_bbxe_abx_config_372_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig484         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig485         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig485         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig484         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_372_s cn; */
};
typedef union cavm_bbxe_abx_config_372 cavm_bbxe_abx_config_372_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_372(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_372(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302ba0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_372", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_372(a) cavm_bbxe_abx_config_372_t
#define bustype_CAVM_BBXE_ABX_CONFIG_372(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_372(a) "BBXE_ABX_CONFIG_372"
#define busnum_CAVM_BBXE_ABX_CONFIG_372(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_372(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_373
 *
 * BBX5 Configuration Register 373
 * Job Configuration
 */
union cavm_bbxe_abx_config_373
{
    uint64_t u;
    struct cavm_bbxe_abx_config_373_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig486         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig487         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig487         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig486         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_373_s cn; */
};
typedef union cavm_bbxe_abx_config_373 cavm_bbxe_abx_config_373_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_373(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_373(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302ba8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_373", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_373(a) cavm_bbxe_abx_config_373_t
#define bustype_CAVM_BBXE_ABX_CONFIG_373(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_373(a) "BBXE_ABX_CONFIG_373"
#define busnum_CAVM_BBXE_ABX_CONFIG_373(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_373(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_374
 *
 * BBX5 Configuration Register 374
 * Job Configuration
 */
union cavm_bbxe_abx_config_374
{
    uint64_t u;
    struct cavm_bbxe_abx_config_374_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig488         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig489         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig489         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig488         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_374_s cn; */
};
typedef union cavm_bbxe_abx_config_374 cavm_bbxe_abx_config_374_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_374(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_374(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302bb0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_374", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_374(a) cavm_bbxe_abx_config_374_t
#define bustype_CAVM_BBXE_ABX_CONFIG_374(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_374(a) "BBXE_ABX_CONFIG_374"
#define busnum_CAVM_BBXE_ABX_CONFIG_374(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_374(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_375
 *
 * BBX5 Configuration Register 375
 * Job Configuration
 */
union cavm_bbxe_abx_config_375
{
    uint64_t u;
    struct cavm_bbxe_abx_config_375_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig490         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig491         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig491         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig490         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_375_s cn; */
};
typedef union cavm_bbxe_abx_config_375 cavm_bbxe_abx_config_375_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_375(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_375(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302bb8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_375", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_375(a) cavm_bbxe_abx_config_375_t
#define bustype_CAVM_BBXE_ABX_CONFIG_375(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_375(a) "BBXE_ABX_CONFIG_375"
#define busnum_CAVM_BBXE_ABX_CONFIG_375(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_375(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_376
 *
 * BBX5 Configuration Register 376
 * Job Configuration
 */
union cavm_bbxe_abx_config_376
{
    uint64_t u;
    struct cavm_bbxe_abx_config_376_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig492         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig493         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig493         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig492         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_376_s cn; */
};
typedef union cavm_bbxe_abx_config_376 cavm_bbxe_abx_config_376_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_376(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_376(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302bc0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_376", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_376(a) cavm_bbxe_abx_config_376_t
#define bustype_CAVM_BBXE_ABX_CONFIG_376(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_376(a) "BBXE_ABX_CONFIG_376"
#define busnum_CAVM_BBXE_ABX_CONFIG_376(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_376(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_377
 *
 * BBX5 Configuration Register 377
 * Job Configuration
 */
union cavm_bbxe_abx_config_377
{
    uint64_t u;
    struct cavm_bbxe_abx_config_377_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig494         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig495         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig495         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig494         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_377_s cn; */
};
typedef union cavm_bbxe_abx_config_377 cavm_bbxe_abx_config_377_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_377(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_377(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302bc8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_377", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_377(a) cavm_bbxe_abx_config_377_t
#define bustype_CAVM_BBXE_ABX_CONFIG_377(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_377(a) "BBXE_ABX_CONFIG_377"
#define busnum_CAVM_BBXE_ABX_CONFIG_377(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_377(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_378
 *
 * BBX5 Configuration Register 378
 * Job Configuration
 */
union cavm_bbxe_abx_config_378
{
    uint64_t u;
    struct cavm_bbxe_abx_config_378_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig496         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig497         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig497         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig496         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_378_s cn; */
};
typedef union cavm_bbxe_abx_config_378 cavm_bbxe_abx_config_378_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_378(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_378(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302bd0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_378", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_378(a) cavm_bbxe_abx_config_378_t
#define bustype_CAVM_BBXE_ABX_CONFIG_378(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_378(a) "BBXE_ABX_CONFIG_378"
#define busnum_CAVM_BBXE_ABX_CONFIG_378(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_378(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_379
 *
 * BBX5 Configuration Register 379
 * Job Configuration
 */
union cavm_bbxe_abx_config_379
{
    uint64_t u;
    struct cavm_bbxe_abx_config_379_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig498         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig499         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig499         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig498         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_379_s cn; */
};
typedef union cavm_bbxe_abx_config_379 cavm_bbxe_abx_config_379_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_379(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_379(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302bd8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_379", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_379(a) cavm_bbxe_abx_config_379_t
#define bustype_CAVM_BBXE_ABX_CONFIG_379(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_379(a) "BBXE_ABX_CONFIG_379"
#define busnum_CAVM_BBXE_ABX_CONFIG_379(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_379(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_38
 *
 * BBX5 Configuration Register 38
 * Job Configuration
 */
union cavm_bbxe_abx_config_38
{
    uint64_t u;
    struct cavm_bbxe_abx_config_38_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig62          : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig62          : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_38_s cn; */
};
typedef union cavm_bbxe_abx_config_38 cavm_bbxe_abx_config_38_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_38(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_38(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302130ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_38", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_38(a) cavm_bbxe_abx_config_38_t
#define bustype_CAVM_BBXE_ABX_CONFIG_38(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_38(a) "BBXE_ABX_CONFIG_38"
#define busnum_CAVM_BBXE_ABX_CONFIG_38(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_38(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_380
 *
 * BBX5 Configuration Register 380
 * Job Configuration
 */
union cavm_bbxe_abx_config_380
{
    uint64_t u;
    struct cavm_bbxe_abx_config_380_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig500         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig501         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig501         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig500         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_380_s cn; */
};
typedef union cavm_bbxe_abx_config_380 cavm_bbxe_abx_config_380_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_380(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_380(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302be0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_380", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_380(a) cavm_bbxe_abx_config_380_t
#define bustype_CAVM_BBXE_ABX_CONFIG_380(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_380(a) "BBXE_ABX_CONFIG_380"
#define busnum_CAVM_BBXE_ABX_CONFIG_380(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_380(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_381
 *
 * BBX5 Configuration Register 381
 * Job Configuration
 */
union cavm_bbxe_abx_config_381
{
    uint64_t u;
    struct cavm_bbxe_abx_config_381_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig502         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig503         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig503         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig502         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_381_s cn; */
};
typedef union cavm_bbxe_abx_config_381 cavm_bbxe_abx_config_381_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_381(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_381(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302be8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_381", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_381(a) cavm_bbxe_abx_config_381_t
#define bustype_CAVM_BBXE_ABX_CONFIG_381(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_381(a) "BBXE_ABX_CONFIG_381"
#define busnum_CAVM_BBXE_ABX_CONFIG_381(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_381(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_382
 *
 * BBX5 Configuration Register 382
 * Job Configuration
 */
union cavm_bbxe_abx_config_382
{
    uint64_t u;
    struct cavm_bbxe_abx_config_382_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig504         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig505         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig505         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig504         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_382_s cn; */
};
typedef union cavm_bbxe_abx_config_382 cavm_bbxe_abx_config_382_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_382(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_382(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302bf0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_382", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_382(a) cavm_bbxe_abx_config_382_t
#define bustype_CAVM_BBXE_ABX_CONFIG_382(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_382(a) "BBXE_ABX_CONFIG_382"
#define busnum_CAVM_BBXE_ABX_CONFIG_382(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_382(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_383
 *
 * BBX5 Configuration Register 383
 * Job Configuration
 */
union cavm_bbxe_abx_config_383
{
    uint64_t u;
    struct cavm_bbxe_abx_config_383_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig506         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig507         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig507         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig506         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_383_s cn; */
};
typedef union cavm_bbxe_abx_config_383 cavm_bbxe_abx_config_383_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_383(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_383(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302bf8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_383", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_383(a) cavm_bbxe_abx_config_383_t
#define bustype_CAVM_BBXE_ABX_CONFIG_383(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_383(a) "BBXE_ABX_CONFIG_383"
#define busnum_CAVM_BBXE_ABX_CONFIG_383(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_383(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_384
 *
 * BBX5 Configuration Register 384
 * Job Configuration
 */
union cavm_bbxe_abx_config_384
{
    uint64_t u;
    struct cavm_bbxe_abx_config_384_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig508         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig509         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig509         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig508         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_384_s cn; */
};
typedef union cavm_bbxe_abx_config_384 cavm_bbxe_abx_config_384_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_384(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_384(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302c00ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_384", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_384(a) cavm_bbxe_abx_config_384_t
#define bustype_CAVM_BBXE_ABX_CONFIG_384(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_384(a) "BBXE_ABX_CONFIG_384"
#define busnum_CAVM_BBXE_ABX_CONFIG_384(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_384(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_385
 *
 * BBX5 Configuration Register 385
 * Job Configuration
 */
union cavm_bbxe_abx_config_385
{
    uint64_t u;
    struct cavm_bbxe_abx_config_385_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig510         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig511         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig511         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig510         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_385_s cn; */
};
typedef union cavm_bbxe_abx_config_385 cavm_bbxe_abx_config_385_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_385(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_385(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302c08ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_385", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_385(a) cavm_bbxe_abx_config_385_t
#define bustype_CAVM_BBXE_ABX_CONFIG_385(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_385(a) "BBXE_ABX_CONFIG_385"
#define busnum_CAVM_BBXE_ABX_CONFIG_385(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_385(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_386
 *
 * BBX5 Configuration Register 386
 * Job Configuration
 */
union cavm_bbxe_abx_config_386
{
    uint64_t u;
    struct cavm_bbxe_abx_config_386_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig512         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig513         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig513         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig512         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_386_s cn; */
};
typedef union cavm_bbxe_abx_config_386 cavm_bbxe_abx_config_386_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_386(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_386(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302c10ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_386", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_386(a) cavm_bbxe_abx_config_386_t
#define bustype_CAVM_BBXE_ABX_CONFIG_386(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_386(a) "BBXE_ABX_CONFIG_386"
#define busnum_CAVM_BBXE_ABX_CONFIG_386(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_386(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_387
 *
 * BBX5 Configuration Register 387
 * Job Configuration
 */
union cavm_bbxe_abx_config_387
{
    uint64_t u;
    struct cavm_bbxe_abx_config_387_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig514         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig515         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig515         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig514         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_387_s cn; */
};
typedef union cavm_bbxe_abx_config_387 cavm_bbxe_abx_config_387_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_387(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_387(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302c18ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_387", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_387(a) cavm_bbxe_abx_config_387_t
#define bustype_CAVM_BBXE_ABX_CONFIG_387(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_387(a) "BBXE_ABX_CONFIG_387"
#define busnum_CAVM_BBXE_ABX_CONFIG_387(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_387(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_388
 *
 * BBX5 Configuration Register 388
 * Job Configuration
 */
union cavm_bbxe_abx_config_388
{
    uint64_t u;
    struct cavm_bbxe_abx_config_388_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig516         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig517         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig517         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig516         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_388_s cn; */
};
typedef union cavm_bbxe_abx_config_388 cavm_bbxe_abx_config_388_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_388(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_388(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302c20ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_388", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_388(a) cavm_bbxe_abx_config_388_t
#define bustype_CAVM_BBXE_ABX_CONFIG_388(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_388(a) "BBXE_ABX_CONFIG_388"
#define busnum_CAVM_BBXE_ABX_CONFIG_388(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_388(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_389
 *
 * BBX5 Configuration Register 389
 * Job Configuration
 */
union cavm_bbxe_abx_config_389
{
    uint64_t u;
    struct cavm_bbxe_abx_config_389_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig518         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig519         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig519         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig518         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_389_s cn; */
};
typedef union cavm_bbxe_abx_config_389 cavm_bbxe_abx_config_389_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_389(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_389(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302c28ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_389", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_389(a) cavm_bbxe_abx_config_389_t
#define bustype_CAVM_BBXE_ABX_CONFIG_389(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_389(a) "BBXE_ABX_CONFIG_389"
#define busnum_CAVM_BBXE_ABX_CONFIG_389(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_389(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_39
 *
 * BBX5 Configuration Register 39
 * Job Configuration
 */
union cavm_bbxe_abx_config_39
{
    uint64_t u;
    struct cavm_bbxe_abx_config_39_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig63          : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig63          : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_39_s cn; */
};
typedef union cavm_bbxe_abx_config_39 cavm_bbxe_abx_config_39_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_39(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_39(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302138ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_39", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_39(a) cavm_bbxe_abx_config_39_t
#define bustype_CAVM_BBXE_ABX_CONFIG_39(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_39(a) "BBXE_ABX_CONFIG_39"
#define busnum_CAVM_BBXE_ABX_CONFIG_39(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_39(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_390
 *
 * BBX5 Configuration Register 390
 * Job Configuration
 */
union cavm_bbxe_abx_config_390
{
    uint64_t u;
    struct cavm_bbxe_abx_config_390_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig520         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig521         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig521         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig520         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_390_s cn; */
};
typedef union cavm_bbxe_abx_config_390 cavm_bbxe_abx_config_390_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_390(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_390(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302c30ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_390", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_390(a) cavm_bbxe_abx_config_390_t
#define bustype_CAVM_BBXE_ABX_CONFIG_390(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_390(a) "BBXE_ABX_CONFIG_390"
#define busnum_CAVM_BBXE_ABX_CONFIG_390(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_390(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_391
 *
 * BBX5 Configuration Register 391
 * Job Configuration
 */
union cavm_bbxe_abx_config_391
{
    uint64_t u;
    struct cavm_bbxe_abx_config_391_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig522         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig523         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig523         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig522         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_391_s cn; */
};
typedef union cavm_bbxe_abx_config_391 cavm_bbxe_abx_config_391_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_391(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_391(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302c38ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_391", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_391(a) cavm_bbxe_abx_config_391_t
#define bustype_CAVM_BBXE_ABX_CONFIG_391(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_391(a) "BBXE_ABX_CONFIG_391"
#define busnum_CAVM_BBXE_ABX_CONFIG_391(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_391(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_392
 *
 * BBX5 Configuration Register 392
 * Job Configuration
 */
union cavm_bbxe_abx_config_392
{
    uint64_t u;
    struct cavm_bbxe_abx_config_392_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig524         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig525         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig525         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig524         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_392_s cn; */
};
typedef union cavm_bbxe_abx_config_392 cavm_bbxe_abx_config_392_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_392(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_392(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302c40ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_392", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_392(a) cavm_bbxe_abx_config_392_t
#define bustype_CAVM_BBXE_ABX_CONFIG_392(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_392(a) "BBXE_ABX_CONFIG_392"
#define busnum_CAVM_BBXE_ABX_CONFIG_392(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_392(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_393
 *
 * BBX5 Configuration Register 393
 * Job Configuration
 */
union cavm_bbxe_abx_config_393
{
    uint64_t u;
    struct cavm_bbxe_abx_config_393_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig526         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig527         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig527         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig526         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_393_s cn; */
};
typedef union cavm_bbxe_abx_config_393 cavm_bbxe_abx_config_393_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_393(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_393(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302c48ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_393", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_393(a) cavm_bbxe_abx_config_393_t
#define bustype_CAVM_BBXE_ABX_CONFIG_393(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_393(a) "BBXE_ABX_CONFIG_393"
#define busnum_CAVM_BBXE_ABX_CONFIG_393(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_393(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_394
 *
 * BBX5 Configuration Register 394
 * Job Configuration
 */
union cavm_bbxe_abx_config_394
{
    uint64_t u;
    struct cavm_bbxe_abx_config_394_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig528         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig529         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig529         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig528         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_394_s cn; */
};
typedef union cavm_bbxe_abx_config_394 cavm_bbxe_abx_config_394_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_394(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_394(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302c50ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_394", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_394(a) cavm_bbxe_abx_config_394_t
#define bustype_CAVM_BBXE_ABX_CONFIG_394(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_394(a) "BBXE_ABX_CONFIG_394"
#define busnum_CAVM_BBXE_ABX_CONFIG_394(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_394(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_395
 *
 * BBX5 Configuration Register 395
 * Job Configuration
 */
union cavm_bbxe_abx_config_395
{
    uint64_t u;
    struct cavm_bbxe_abx_config_395_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig530         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig531         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig531         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig530         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_395_s cn; */
};
typedef union cavm_bbxe_abx_config_395 cavm_bbxe_abx_config_395_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_395(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_395(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302c58ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_395", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_395(a) cavm_bbxe_abx_config_395_t
#define bustype_CAVM_BBXE_ABX_CONFIG_395(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_395(a) "BBXE_ABX_CONFIG_395"
#define busnum_CAVM_BBXE_ABX_CONFIG_395(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_395(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_396
 *
 * BBX5 Configuration Register 396
 * Job Configuration
 */
union cavm_bbxe_abx_config_396
{
    uint64_t u;
    struct cavm_bbxe_abx_config_396_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig532         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig533         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig533         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig532         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_396_s cn; */
};
typedef union cavm_bbxe_abx_config_396 cavm_bbxe_abx_config_396_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_396(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_396(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302c60ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_396", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_396(a) cavm_bbxe_abx_config_396_t
#define bustype_CAVM_BBXE_ABX_CONFIG_396(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_396(a) "BBXE_ABX_CONFIG_396"
#define busnum_CAVM_BBXE_ABX_CONFIG_396(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_396(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_397
 *
 * BBX5 Configuration Register 397
 * Job Configuration
 */
union cavm_bbxe_abx_config_397
{
    uint64_t u;
    struct cavm_bbxe_abx_config_397_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig534         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig535         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig535         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig534         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_397_s cn; */
};
typedef union cavm_bbxe_abx_config_397 cavm_bbxe_abx_config_397_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_397(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_397(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302c68ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_397", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_397(a) cavm_bbxe_abx_config_397_t
#define bustype_CAVM_BBXE_ABX_CONFIG_397(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_397(a) "BBXE_ABX_CONFIG_397"
#define busnum_CAVM_BBXE_ABX_CONFIG_397(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_397(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_398
 *
 * BBX5 Configuration Register 398
 * Job Configuration
 */
union cavm_bbxe_abx_config_398
{
    uint64_t u;
    struct cavm_bbxe_abx_config_398_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig536         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig537         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig537         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig536         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_398_s cn; */
};
typedef union cavm_bbxe_abx_config_398 cavm_bbxe_abx_config_398_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_398(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_398(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302c70ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_398", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_398(a) cavm_bbxe_abx_config_398_t
#define bustype_CAVM_BBXE_ABX_CONFIG_398(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_398(a) "BBXE_ABX_CONFIG_398"
#define busnum_CAVM_BBXE_ABX_CONFIG_398(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_398(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_399
 *
 * BBX5 Configuration Register 399
 * Job Configuration
 */
union cavm_bbxe_abx_config_399
{
    uint64_t u;
    struct cavm_bbxe_abx_config_399_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig538         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig539         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig539         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig538         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_399_s cn; */
};
typedef union cavm_bbxe_abx_config_399 cavm_bbxe_abx_config_399_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_399(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_399(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302c78ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_399", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_399(a) cavm_bbxe_abx_config_399_t
#define bustype_CAVM_BBXE_ABX_CONFIG_399(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_399(a) "BBXE_ABX_CONFIG_399"
#define busnum_CAVM_BBXE_ABX_CONFIG_399(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_399(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_4
 *
 * BBX5 Configuration Registers
 * Job Configuration
 */
union cavm_bbxe_abx_config_4
{
    uint64_t u;
    struct cavm_bbxe_abx_config_4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig28          : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig28          : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_4_s cn; */
};
typedef union cavm_bbxe_abx_config_4 cavm_bbxe_abx_config_4_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_4(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302020ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_4(a) cavm_bbxe_abx_config_4_t
#define bustype_CAVM_BBXE_ABX_CONFIG_4(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_4(a) "BBXE_ABX_CONFIG_4"
#define busnum_CAVM_BBXE_ABX_CONFIG_4(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_4(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_40
 *
 * BBX5 Configuration Register 40
 * Job Configuration
 */
union cavm_bbxe_abx_config_40
{
    uint64_t u;
    struct cavm_bbxe_abx_config_40_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig64          : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig64          : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_40_s cn; */
};
typedef union cavm_bbxe_abx_config_40 cavm_bbxe_abx_config_40_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_40(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_40(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302140ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_40", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_40(a) cavm_bbxe_abx_config_40_t
#define bustype_CAVM_BBXE_ABX_CONFIG_40(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_40(a) "BBXE_ABX_CONFIG_40"
#define busnum_CAVM_BBXE_ABX_CONFIG_40(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_40(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_400
 *
 * BBX5 Configuration Register 400
 * Job Configuration
 */
union cavm_bbxe_abx_config_400
{
    uint64_t u;
    struct cavm_bbxe_abx_config_400_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig540         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig541         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig541         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig540         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_400_s cn; */
};
typedef union cavm_bbxe_abx_config_400 cavm_bbxe_abx_config_400_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_400(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_400(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302c80ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_400", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_400(a) cavm_bbxe_abx_config_400_t
#define bustype_CAVM_BBXE_ABX_CONFIG_400(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_400(a) "BBXE_ABX_CONFIG_400"
#define busnum_CAVM_BBXE_ABX_CONFIG_400(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_400(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_401
 *
 * BBX5 Configuration Register 401
 * Job Configuration
 */
union cavm_bbxe_abx_config_401
{
    uint64_t u;
    struct cavm_bbxe_abx_config_401_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig542         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig543         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig543         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig542         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_401_s cn; */
};
typedef union cavm_bbxe_abx_config_401 cavm_bbxe_abx_config_401_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_401(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_401(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302c88ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_401", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_401(a) cavm_bbxe_abx_config_401_t
#define bustype_CAVM_BBXE_ABX_CONFIG_401(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_401(a) "BBXE_ABX_CONFIG_401"
#define busnum_CAVM_BBXE_ABX_CONFIG_401(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_401(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_402
 *
 * BBX5 Configuration Register 402
 * Job Configuration
 */
union cavm_bbxe_abx_config_402
{
    uint64_t u;
    struct cavm_bbxe_abx_config_402_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig544         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig545         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig545         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig544         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_402_s cn; */
};
typedef union cavm_bbxe_abx_config_402 cavm_bbxe_abx_config_402_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_402(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_402(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302c90ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_402", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_402(a) cavm_bbxe_abx_config_402_t
#define bustype_CAVM_BBXE_ABX_CONFIG_402(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_402(a) "BBXE_ABX_CONFIG_402"
#define busnum_CAVM_BBXE_ABX_CONFIG_402(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_402(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_403
 *
 * BBX5 Configuration Register 403
 * Job Configuration
 */
union cavm_bbxe_abx_config_403
{
    uint64_t u;
    struct cavm_bbxe_abx_config_403_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig546         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig547         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig547         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig546         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_403_s cn; */
};
typedef union cavm_bbxe_abx_config_403 cavm_bbxe_abx_config_403_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_403(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_403(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302c98ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_403", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_403(a) cavm_bbxe_abx_config_403_t
#define bustype_CAVM_BBXE_ABX_CONFIG_403(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_403(a) "BBXE_ABX_CONFIG_403"
#define busnum_CAVM_BBXE_ABX_CONFIG_403(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_403(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_404
 *
 * BBX5 Configuration Register 404
 * Job Configuration
 */
union cavm_bbxe_abx_config_404
{
    uint64_t u;
    struct cavm_bbxe_abx_config_404_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig548         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig549         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig549         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig548         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_404_s cn; */
};
typedef union cavm_bbxe_abx_config_404 cavm_bbxe_abx_config_404_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_404(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_404(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302ca0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_404", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_404(a) cavm_bbxe_abx_config_404_t
#define bustype_CAVM_BBXE_ABX_CONFIG_404(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_404(a) "BBXE_ABX_CONFIG_404"
#define busnum_CAVM_BBXE_ABX_CONFIG_404(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_404(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_405
 *
 * BBX5 Configuration Register 405
 * Job Configuration
 */
union cavm_bbxe_abx_config_405
{
    uint64_t u;
    struct cavm_bbxe_abx_config_405_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig550         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig551         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig551         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig550         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_405_s cn; */
};
typedef union cavm_bbxe_abx_config_405 cavm_bbxe_abx_config_405_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_405(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_405(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302ca8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_405", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_405(a) cavm_bbxe_abx_config_405_t
#define bustype_CAVM_BBXE_ABX_CONFIG_405(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_405(a) "BBXE_ABX_CONFIG_405"
#define busnum_CAVM_BBXE_ABX_CONFIG_405(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_405(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_406
 *
 * BBX5 Configuration Register 406
 * Job Configuration
 */
union cavm_bbxe_abx_config_406
{
    uint64_t u;
    struct cavm_bbxe_abx_config_406_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig552         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig553         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig553         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig552         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_406_s cn; */
};
typedef union cavm_bbxe_abx_config_406 cavm_bbxe_abx_config_406_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_406(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_406(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302cb0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_406", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_406(a) cavm_bbxe_abx_config_406_t
#define bustype_CAVM_BBXE_ABX_CONFIG_406(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_406(a) "BBXE_ABX_CONFIG_406"
#define busnum_CAVM_BBXE_ABX_CONFIG_406(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_406(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_407
 *
 * BBX5 Configuration Register 407
 * Job Configuration
 */
union cavm_bbxe_abx_config_407
{
    uint64_t u;
    struct cavm_bbxe_abx_config_407_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig554         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig555         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig555         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig554         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_407_s cn; */
};
typedef union cavm_bbxe_abx_config_407 cavm_bbxe_abx_config_407_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_407(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_407(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302cb8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_407", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_407(a) cavm_bbxe_abx_config_407_t
#define bustype_CAVM_BBXE_ABX_CONFIG_407(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_407(a) "BBXE_ABX_CONFIG_407"
#define busnum_CAVM_BBXE_ABX_CONFIG_407(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_407(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_408
 *
 * BBX5 Configuration Register 408
 * Job Configuration
 */
union cavm_bbxe_abx_config_408
{
    uint64_t u;
    struct cavm_bbxe_abx_config_408_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig556         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig557         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig557         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig556         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_408_s cn; */
};
typedef union cavm_bbxe_abx_config_408 cavm_bbxe_abx_config_408_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_408(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_408(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302cc0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_408", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_408(a) cavm_bbxe_abx_config_408_t
#define bustype_CAVM_BBXE_ABX_CONFIG_408(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_408(a) "BBXE_ABX_CONFIG_408"
#define busnum_CAVM_BBXE_ABX_CONFIG_408(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_408(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_409
 *
 * BBX5 Configuration Register 409
 * Job Configuration
 */
union cavm_bbxe_abx_config_409
{
    uint64_t u;
    struct cavm_bbxe_abx_config_409_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig558         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig559         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig559         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig558         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_409_s cn; */
};
typedef union cavm_bbxe_abx_config_409 cavm_bbxe_abx_config_409_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_409(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_409(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302cc8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_409", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_409(a) cavm_bbxe_abx_config_409_t
#define bustype_CAVM_BBXE_ABX_CONFIG_409(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_409(a) "BBXE_ABX_CONFIG_409"
#define busnum_CAVM_BBXE_ABX_CONFIG_409(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_409(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_41
 *
 * BBX5 Configuration Register 41
 * Job Configuration
 */
union cavm_bbxe_abx_config_41
{
    uint64_t u;
    struct cavm_bbxe_abx_config_41_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig65          : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig65          : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_41_s cn; */
};
typedef union cavm_bbxe_abx_config_41 cavm_bbxe_abx_config_41_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_41(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_41(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302148ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_41", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_41(a) cavm_bbxe_abx_config_41_t
#define bustype_CAVM_BBXE_ABX_CONFIG_41(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_41(a) "BBXE_ABX_CONFIG_41"
#define busnum_CAVM_BBXE_ABX_CONFIG_41(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_41(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_410
 *
 * BBX5 Configuration Register 410
 * Job Configuration
 */
union cavm_bbxe_abx_config_410
{
    uint64_t u;
    struct cavm_bbxe_abx_config_410_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig560         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig561         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig561         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig560         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_410_s cn; */
};
typedef union cavm_bbxe_abx_config_410 cavm_bbxe_abx_config_410_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_410(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_410(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302cd0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_410", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_410(a) cavm_bbxe_abx_config_410_t
#define bustype_CAVM_BBXE_ABX_CONFIG_410(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_410(a) "BBXE_ABX_CONFIG_410"
#define busnum_CAVM_BBXE_ABX_CONFIG_410(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_410(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_411
 *
 * BBX5 Configuration Register 411
 * Job Configuration
 */
union cavm_bbxe_abx_config_411
{
    uint64_t u;
    struct cavm_bbxe_abx_config_411_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig562         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig563         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig563         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig562         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_411_s cn; */
};
typedef union cavm_bbxe_abx_config_411 cavm_bbxe_abx_config_411_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_411(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_411(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302cd8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_411", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_411(a) cavm_bbxe_abx_config_411_t
#define bustype_CAVM_BBXE_ABX_CONFIG_411(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_411(a) "BBXE_ABX_CONFIG_411"
#define busnum_CAVM_BBXE_ABX_CONFIG_411(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_411(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_412
 *
 * BBX5 Configuration Register 412
 * Job Configuration
 */
union cavm_bbxe_abx_config_412
{
    uint64_t u;
    struct cavm_bbxe_abx_config_412_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig564         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig565         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig565         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig564         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_412_s cn; */
};
typedef union cavm_bbxe_abx_config_412 cavm_bbxe_abx_config_412_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_412(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_412(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302ce0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_412", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_412(a) cavm_bbxe_abx_config_412_t
#define bustype_CAVM_BBXE_ABX_CONFIG_412(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_412(a) "BBXE_ABX_CONFIG_412"
#define busnum_CAVM_BBXE_ABX_CONFIG_412(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_412(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_413
 *
 * BBX5 Configuration Register 413
 * Job Configuration
 */
union cavm_bbxe_abx_config_413
{
    uint64_t u;
    struct cavm_bbxe_abx_config_413_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig566         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig567         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig567         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig566         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_413_s cn; */
};
typedef union cavm_bbxe_abx_config_413 cavm_bbxe_abx_config_413_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_413(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_413(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302ce8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_413", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_413(a) cavm_bbxe_abx_config_413_t
#define bustype_CAVM_BBXE_ABX_CONFIG_413(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_413(a) "BBXE_ABX_CONFIG_413"
#define busnum_CAVM_BBXE_ABX_CONFIG_413(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_413(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_414
 *
 * BBX5 Configuration Register 414
 * Job Configuration
 */
union cavm_bbxe_abx_config_414
{
    uint64_t u;
    struct cavm_bbxe_abx_config_414_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig568         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig569         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig569         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig568         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_414_s cn; */
};
typedef union cavm_bbxe_abx_config_414 cavm_bbxe_abx_config_414_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_414(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_414(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302cf0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_414", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_414(a) cavm_bbxe_abx_config_414_t
#define bustype_CAVM_BBXE_ABX_CONFIG_414(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_414(a) "BBXE_ABX_CONFIG_414"
#define busnum_CAVM_BBXE_ABX_CONFIG_414(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_414(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_415
 *
 * BBX5 Configuration Register 415
 * Job Configuration
 */
union cavm_bbxe_abx_config_415
{
    uint64_t u;
    struct cavm_bbxe_abx_config_415_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig570         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig571         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig571         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig570         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_415_s cn; */
};
typedef union cavm_bbxe_abx_config_415 cavm_bbxe_abx_config_415_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_415(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_415(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302cf8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_415", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_415(a) cavm_bbxe_abx_config_415_t
#define bustype_CAVM_BBXE_ABX_CONFIG_415(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_415(a) "BBXE_ABX_CONFIG_415"
#define busnum_CAVM_BBXE_ABX_CONFIG_415(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_415(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_416
 *
 * BBX5 Configuration Register 416
 * Job Configuration
 */
union cavm_bbxe_abx_config_416
{
    uint64_t u;
    struct cavm_bbxe_abx_config_416_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig572         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig573         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig573         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig572         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_416_s cn; */
};
typedef union cavm_bbxe_abx_config_416 cavm_bbxe_abx_config_416_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_416(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_416(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302d00ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_416", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_416(a) cavm_bbxe_abx_config_416_t
#define bustype_CAVM_BBXE_ABX_CONFIG_416(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_416(a) "BBXE_ABX_CONFIG_416"
#define busnum_CAVM_BBXE_ABX_CONFIG_416(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_416(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_417
 *
 * BBX5 Configuration Register 417
 * Job Configuration
 */
union cavm_bbxe_abx_config_417
{
    uint64_t u;
    struct cavm_bbxe_abx_config_417_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig574         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig575         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig575         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig574         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_417_s cn; */
};
typedef union cavm_bbxe_abx_config_417 cavm_bbxe_abx_config_417_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_417(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_417(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302d08ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_417", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_417(a) cavm_bbxe_abx_config_417_t
#define bustype_CAVM_BBXE_ABX_CONFIG_417(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_417(a) "BBXE_ABX_CONFIG_417"
#define busnum_CAVM_BBXE_ABX_CONFIG_417(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_417(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_418
 *
 * BBX5 Configuration Register 418
 * Job Configuration
 */
union cavm_bbxe_abx_config_418
{
    uint64_t u;
    struct cavm_bbxe_abx_config_418_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig576         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig577         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig577         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig576         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_418_s cn; */
};
typedef union cavm_bbxe_abx_config_418 cavm_bbxe_abx_config_418_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_418(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_418(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302d10ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_418", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_418(a) cavm_bbxe_abx_config_418_t
#define bustype_CAVM_BBXE_ABX_CONFIG_418(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_418(a) "BBXE_ABX_CONFIG_418"
#define busnum_CAVM_BBXE_ABX_CONFIG_418(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_418(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_419
 *
 * BBX5 Configuration Register 419
 * Job Configuration
 */
union cavm_bbxe_abx_config_419
{
    uint64_t u;
    struct cavm_bbxe_abx_config_419_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig578         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig579         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig579         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig578         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_419_s cn; */
};
typedef union cavm_bbxe_abx_config_419 cavm_bbxe_abx_config_419_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_419(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_419(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302d18ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_419", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_419(a) cavm_bbxe_abx_config_419_t
#define bustype_CAVM_BBXE_ABX_CONFIG_419(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_419(a) "BBXE_ABX_CONFIG_419"
#define busnum_CAVM_BBXE_ABX_CONFIG_419(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_419(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_42
 *
 * BBX5 Configuration Register 42
 * Job Configuration
 */
union cavm_bbxe_abx_config_42
{
    uint64_t u;
    struct cavm_bbxe_abx_config_42_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig66          : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig66          : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_42_s cn; */
};
typedef union cavm_bbxe_abx_config_42 cavm_bbxe_abx_config_42_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_42(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_42(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302150ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_42", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_42(a) cavm_bbxe_abx_config_42_t
#define bustype_CAVM_BBXE_ABX_CONFIG_42(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_42(a) "BBXE_ABX_CONFIG_42"
#define busnum_CAVM_BBXE_ABX_CONFIG_42(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_42(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_420
 *
 * BBX5 Configuration Register 420
 * Job Configuration
 */
union cavm_bbxe_abx_config_420
{
    uint64_t u;
    struct cavm_bbxe_abx_config_420_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig580         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig581         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig581         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig580         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_420_s cn; */
};
typedef union cavm_bbxe_abx_config_420 cavm_bbxe_abx_config_420_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_420(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_420(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302d20ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_420", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_420(a) cavm_bbxe_abx_config_420_t
#define bustype_CAVM_BBXE_ABX_CONFIG_420(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_420(a) "BBXE_ABX_CONFIG_420"
#define busnum_CAVM_BBXE_ABX_CONFIG_420(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_420(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_421
 *
 * BBX5 Configuration Register 421
 * Job Configuration
 */
union cavm_bbxe_abx_config_421
{
    uint64_t u;
    struct cavm_bbxe_abx_config_421_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig582         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig583         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig583         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig582         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_421_s cn; */
};
typedef union cavm_bbxe_abx_config_421 cavm_bbxe_abx_config_421_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_421(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_421(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302d28ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_421", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_421(a) cavm_bbxe_abx_config_421_t
#define bustype_CAVM_BBXE_ABX_CONFIG_421(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_421(a) "BBXE_ABX_CONFIG_421"
#define busnum_CAVM_BBXE_ABX_CONFIG_421(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_421(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_422
 *
 * BBX5 Configuration Register 422
 * Job Configuration
 */
union cavm_bbxe_abx_config_422
{
    uint64_t u;
    struct cavm_bbxe_abx_config_422_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig584         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig585         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig585         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig584         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_422_s cn; */
};
typedef union cavm_bbxe_abx_config_422 cavm_bbxe_abx_config_422_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_422(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_422(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302d30ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_422", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_422(a) cavm_bbxe_abx_config_422_t
#define bustype_CAVM_BBXE_ABX_CONFIG_422(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_422(a) "BBXE_ABX_CONFIG_422"
#define busnum_CAVM_BBXE_ABX_CONFIG_422(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_422(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_423
 *
 * BBX5 Configuration Register 423
 * Job Configuration
 */
union cavm_bbxe_abx_config_423
{
    uint64_t u;
    struct cavm_bbxe_abx_config_423_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig586         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig587         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig587         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig586         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_423_s cn; */
};
typedef union cavm_bbxe_abx_config_423 cavm_bbxe_abx_config_423_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_423(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_423(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302d38ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_423", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_423(a) cavm_bbxe_abx_config_423_t
#define bustype_CAVM_BBXE_ABX_CONFIG_423(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_423(a) "BBXE_ABX_CONFIG_423"
#define busnum_CAVM_BBXE_ABX_CONFIG_423(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_423(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_424
 *
 * BBX5 Configuration Register 424
 * Job Configuration
 */
union cavm_bbxe_abx_config_424
{
    uint64_t u;
    struct cavm_bbxe_abx_config_424_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig588         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig589         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig589         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig588         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_424_s cn; */
};
typedef union cavm_bbxe_abx_config_424 cavm_bbxe_abx_config_424_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_424(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_424(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302d40ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_424", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_424(a) cavm_bbxe_abx_config_424_t
#define bustype_CAVM_BBXE_ABX_CONFIG_424(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_424(a) "BBXE_ABX_CONFIG_424"
#define busnum_CAVM_BBXE_ABX_CONFIG_424(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_424(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_425
 *
 * BBX5 Configuration Register 425
 * Job Configuration
 */
union cavm_bbxe_abx_config_425
{
    uint64_t u;
    struct cavm_bbxe_abx_config_425_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig590         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig591         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig591         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig590         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_425_s cn; */
};
typedef union cavm_bbxe_abx_config_425 cavm_bbxe_abx_config_425_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_425(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_425(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302d48ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_425", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_425(a) cavm_bbxe_abx_config_425_t
#define bustype_CAVM_BBXE_ABX_CONFIG_425(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_425(a) "BBXE_ABX_CONFIG_425"
#define busnum_CAVM_BBXE_ABX_CONFIG_425(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_425(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_426
 *
 * BBX5 Configuration Register 426
 * Job Configuration
 */
union cavm_bbxe_abx_config_426
{
    uint64_t u;
    struct cavm_bbxe_abx_config_426_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig592         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig593         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig593         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig592         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_426_s cn; */
};
typedef union cavm_bbxe_abx_config_426 cavm_bbxe_abx_config_426_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_426(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_426(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302d50ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_426", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_426(a) cavm_bbxe_abx_config_426_t
#define bustype_CAVM_BBXE_ABX_CONFIG_426(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_426(a) "BBXE_ABX_CONFIG_426"
#define busnum_CAVM_BBXE_ABX_CONFIG_426(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_426(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_427
 *
 * BBX5 Configuration Register 427
 * Job Configuration
 */
union cavm_bbxe_abx_config_427
{
    uint64_t u;
    struct cavm_bbxe_abx_config_427_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig594         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig595         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig595         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig594         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_427_s cn; */
};
typedef union cavm_bbxe_abx_config_427 cavm_bbxe_abx_config_427_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_427(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_427(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302d58ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_427", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_427(a) cavm_bbxe_abx_config_427_t
#define bustype_CAVM_BBXE_ABX_CONFIG_427(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_427(a) "BBXE_ABX_CONFIG_427"
#define busnum_CAVM_BBXE_ABX_CONFIG_427(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_427(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_428
 *
 * BBX5 Configuration Register 428
 * Job Configuration
 */
union cavm_bbxe_abx_config_428
{
    uint64_t u;
    struct cavm_bbxe_abx_config_428_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig596         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig597         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig597         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig596         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_428_s cn; */
};
typedef union cavm_bbxe_abx_config_428 cavm_bbxe_abx_config_428_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_428(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_428(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302d60ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_428", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_428(a) cavm_bbxe_abx_config_428_t
#define bustype_CAVM_BBXE_ABX_CONFIG_428(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_428(a) "BBXE_ABX_CONFIG_428"
#define busnum_CAVM_BBXE_ABX_CONFIG_428(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_428(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_429
 *
 * BBX5 Configuration Register 429
 * Job Configuration
 */
union cavm_bbxe_abx_config_429
{
    uint64_t u;
    struct cavm_bbxe_abx_config_429_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig598         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig599         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig599         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig598         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_429_s cn; */
};
typedef union cavm_bbxe_abx_config_429 cavm_bbxe_abx_config_429_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_429(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_429(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302d68ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_429", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_429(a) cavm_bbxe_abx_config_429_t
#define bustype_CAVM_BBXE_ABX_CONFIG_429(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_429(a) "BBXE_ABX_CONFIG_429"
#define busnum_CAVM_BBXE_ABX_CONFIG_429(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_429(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_43
 *
 * BBX5 Configuration Register 43
 * Job Configuration
 */
union cavm_bbxe_abx_config_43
{
    uint64_t u;
    struct cavm_bbxe_abx_config_43_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig67          : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig67          : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_43_s cn; */
};
typedef union cavm_bbxe_abx_config_43 cavm_bbxe_abx_config_43_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_43(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_43(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302158ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_43", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_43(a) cavm_bbxe_abx_config_43_t
#define bustype_CAVM_BBXE_ABX_CONFIG_43(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_43(a) "BBXE_ABX_CONFIG_43"
#define busnum_CAVM_BBXE_ABX_CONFIG_43(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_43(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_430
 *
 * BBX5 Configuration Register 430
 * Job Configuration
 */
union cavm_bbxe_abx_config_430
{
    uint64_t u;
    struct cavm_bbxe_abx_config_430_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig600         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig601         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig601         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig600         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_430_s cn; */
};
typedef union cavm_bbxe_abx_config_430 cavm_bbxe_abx_config_430_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_430(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_430(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302d70ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_430", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_430(a) cavm_bbxe_abx_config_430_t
#define bustype_CAVM_BBXE_ABX_CONFIG_430(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_430(a) "BBXE_ABX_CONFIG_430"
#define busnum_CAVM_BBXE_ABX_CONFIG_430(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_430(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_431
 *
 * BBX5 Configuration Register 431
 * Job Configuration
 */
union cavm_bbxe_abx_config_431
{
    uint64_t u;
    struct cavm_bbxe_abx_config_431_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig602         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig603         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig603         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig602         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_431_s cn; */
};
typedef union cavm_bbxe_abx_config_431 cavm_bbxe_abx_config_431_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_431(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_431(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302d78ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_431", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_431(a) cavm_bbxe_abx_config_431_t
#define bustype_CAVM_BBXE_ABX_CONFIG_431(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_431(a) "BBXE_ABX_CONFIG_431"
#define busnum_CAVM_BBXE_ABX_CONFIG_431(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_431(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_432
 *
 * BBX5 Configuration Register 432
 * Job Configuration
 */
union cavm_bbxe_abx_config_432
{
    uint64_t u;
    struct cavm_bbxe_abx_config_432_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig604         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig605         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig605         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig604         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_432_s cn; */
};
typedef union cavm_bbxe_abx_config_432 cavm_bbxe_abx_config_432_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_432(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_432(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302d80ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_432", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_432(a) cavm_bbxe_abx_config_432_t
#define bustype_CAVM_BBXE_ABX_CONFIG_432(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_432(a) "BBXE_ABX_CONFIG_432"
#define busnum_CAVM_BBXE_ABX_CONFIG_432(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_432(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_433
 *
 * BBX5 Configuration Register 433
 * Job Configuration
 */
union cavm_bbxe_abx_config_433
{
    uint64_t u;
    struct cavm_bbxe_abx_config_433_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig606         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig607         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig607         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig606         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_433_s cn; */
};
typedef union cavm_bbxe_abx_config_433 cavm_bbxe_abx_config_433_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_433(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_433(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302d88ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_433", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_433(a) cavm_bbxe_abx_config_433_t
#define bustype_CAVM_BBXE_ABX_CONFIG_433(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_433(a) "BBXE_ABX_CONFIG_433"
#define busnum_CAVM_BBXE_ABX_CONFIG_433(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_433(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_434
 *
 * BBX5 Configuration Register 434
 * Job Configuration
 */
union cavm_bbxe_abx_config_434
{
    uint64_t u;
    struct cavm_bbxe_abx_config_434_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig608         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig609         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig609         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig608         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_434_s cn; */
};
typedef union cavm_bbxe_abx_config_434 cavm_bbxe_abx_config_434_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_434(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_434(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302d90ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_434", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_434(a) cavm_bbxe_abx_config_434_t
#define bustype_CAVM_BBXE_ABX_CONFIG_434(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_434(a) "BBXE_ABX_CONFIG_434"
#define busnum_CAVM_BBXE_ABX_CONFIG_434(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_434(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_435
 *
 * BBX5 Configuration Register 435
 * Job Configuration
 */
union cavm_bbxe_abx_config_435
{
    uint64_t u;
    struct cavm_bbxe_abx_config_435_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig610         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig611         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig611         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig610         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_435_s cn; */
};
typedef union cavm_bbxe_abx_config_435 cavm_bbxe_abx_config_435_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_435(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_435(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302d98ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_435", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_435(a) cavm_bbxe_abx_config_435_t
#define bustype_CAVM_BBXE_ABX_CONFIG_435(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_435(a) "BBXE_ABX_CONFIG_435"
#define busnum_CAVM_BBXE_ABX_CONFIG_435(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_435(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_436
 *
 * BBX5 Configuration Register 436
 * Job Configuration
 */
union cavm_bbxe_abx_config_436
{
    uint64_t u;
    struct cavm_bbxe_abx_config_436_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig612         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig613         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig613         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig612         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_436_s cn; */
};
typedef union cavm_bbxe_abx_config_436 cavm_bbxe_abx_config_436_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_436(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_436(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302da0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_436", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_436(a) cavm_bbxe_abx_config_436_t
#define bustype_CAVM_BBXE_ABX_CONFIG_436(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_436(a) "BBXE_ABX_CONFIG_436"
#define busnum_CAVM_BBXE_ABX_CONFIG_436(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_436(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_437
 *
 * BBX5 Configuration Register 437
 * Job Configuration
 */
union cavm_bbxe_abx_config_437
{
    uint64_t u;
    struct cavm_bbxe_abx_config_437_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig614         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig615         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig615         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig614         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_437_s cn; */
};
typedef union cavm_bbxe_abx_config_437 cavm_bbxe_abx_config_437_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_437(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_437(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302da8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_437", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_437(a) cavm_bbxe_abx_config_437_t
#define bustype_CAVM_BBXE_ABX_CONFIG_437(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_437(a) "BBXE_ABX_CONFIG_437"
#define busnum_CAVM_BBXE_ABX_CONFIG_437(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_437(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_438
 *
 * BBX5 Configuration Register 438
 * Job Configuration
 */
union cavm_bbxe_abx_config_438
{
    uint64_t u;
    struct cavm_bbxe_abx_config_438_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig616         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig617         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig617         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig616         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_438_s cn; */
};
typedef union cavm_bbxe_abx_config_438 cavm_bbxe_abx_config_438_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_438(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_438(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302db0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_438", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_438(a) cavm_bbxe_abx_config_438_t
#define bustype_CAVM_BBXE_ABX_CONFIG_438(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_438(a) "BBXE_ABX_CONFIG_438"
#define busnum_CAVM_BBXE_ABX_CONFIG_438(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_438(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_439
 *
 * BBX5 Configuration Register 439
 * Job Configuration
 */
union cavm_bbxe_abx_config_439
{
    uint64_t u;
    struct cavm_bbxe_abx_config_439_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig618         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig619         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig619         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig618         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_439_s cn; */
};
typedef union cavm_bbxe_abx_config_439 cavm_bbxe_abx_config_439_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_439(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_439(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302db8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_439", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_439(a) cavm_bbxe_abx_config_439_t
#define bustype_CAVM_BBXE_ABX_CONFIG_439(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_439(a) "BBXE_ABX_CONFIG_439"
#define busnum_CAVM_BBXE_ABX_CONFIG_439(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_439(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_44
 *
 * BBX5 Configuration Register 44
 * Job Configuration
 */
union cavm_bbxe_abx_config_44
{
    uint64_t u;
    struct cavm_bbxe_abx_config_44_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig68          : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig68          : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_44_s cn; */
};
typedef union cavm_bbxe_abx_config_44 cavm_bbxe_abx_config_44_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_44(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_44(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302160ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_44", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_44(a) cavm_bbxe_abx_config_44_t
#define bustype_CAVM_BBXE_ABX_CONFIG_44(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_44(a) "BBXE_ABX_CONFIG_44"
#define busnum_CAVM_BBXE_ABX_CONFIG_44(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_44(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_440
 *
 * BBX5 Configuration Register 440
 * Job Configuration
 */
union cavm_bbxe_abx_config_440
{
    uint64_t u;
    struct cavm_bbxe_abx_config_440_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig620         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig621         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig621         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig620         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_440_s cn; */
};
typedef union cavm_bbxe_abx_config_440 cavm_bbxe_abx_config_440_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_440(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_440(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302dc0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_440", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_440(a) cavm_bbxe_abx_config_440_t
#define bustype_CAVM_BBXE_ABX_CONFIG_440(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_440(a) "BBXE_ABX_CONFIG_440"
#define busnum_CAVM_BBXE_ABX_CONFIG_440(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_440(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_441
 *
 * BBX5 Configuration Register 441
 * Job Configuration
 */
union cavm_bbxe_abx_config_441
{
    uint64_t u;
    struct cavm_bbxe_abx_config_441_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig622         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig623         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig623         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig622         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_441_s cn; */
};
typedef union cavm_bbxe_abx_config_441 cavm_bbxe_abx_config_441_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_441(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_441(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302dc8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_441", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_441(a) cavm_bbxe_abx_config_441_t
#define bustype_CAVM_BBXE_ABX_CONFIG_441(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_441(a) "BBXE_ABX_CONFIG_441"
#define busnum_CAVM_BBXE_ABX_CONFIG_441(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_441(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_442
 *
 * BBX5 Configuration Register 442
 * Job Configuration
 */
union cavm_bbxe_abx_config_442
{
    uint64_t u;
    struct cavm_bbxe_abx_config_442_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig624         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig625         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig625         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig624         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_442_s cn; */
};
typedef union cavm_bbxe_abx_config_442 cavm_bbxe_abx_config_442_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_442(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_442(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302dd0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_442", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_442(a) cavm_bbxe_abx_config_442_t
#define bustype_CAVM_BBXE_ABX_CONFIG_442(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_442(a) "BBXE_ABX_CONFIG_442"
#define busnum_CAVM_BBXE_ABX_CONFIG_442(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_442(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_443
 *
 * BBX5 Configuration Register 443
 * Job Configuration
 */
union cavm_bbxe_abx_config_443
{
    uint64_t u;
    struct cavm_bbxe_abx_config_443_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig626         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig627         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig627         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig626         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_443_s cn; */
};
typedef union cavm_bbxe_abx_config_443 cavm_bbxe_abx_config_443_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_443(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_443(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302dd8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_443", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_443(a) cavm_bbxe_abx_config_443_t
#define bustype_CAVM_BBXE_ABX_CONFIG_443(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_443(a) "BBXE_ABX_CONFIG_443"
#define busnum_CAVM_BBXE_ABX_CONFIG_443(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_443(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_444
 *
 * BBX5 Configuration Register 444
 * Job Configuration
 */
union cavm_bbxe_abx_config_444
{
    uint64_t u;
    struct cavm_bbxe_abx_config_444_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig628         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig629         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig629         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig628         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_444_s cn; */
};
typedef union cavm_bbxe_abx_config_444 cavm_bbxe_abx_config_444_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_444(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_444(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302de0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_444", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_444(a) cavm_bbxe_abx_config_444_t
#define bustype_CAVM_BBXE_ABX_CONFIG_444(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_444(a) "BBXE_ABX_CONFIG_444"
#define busnum_CAVM_BBXE_ABX_CONFIG_444(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_444(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_445
 *
 * BBX5 Configuration Register 445
 * Job Configuration
 */
union cavm_bbxe_abx_config_445
{
    uint64_t u;
    struct cavm_bbxe_abx_config_445_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig630         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig631         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig631         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig630         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_445_s cn; */
};
typedef union cavm_bbxe_abx_config_445 cavm_bbxe_abx_config_445_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_445(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_445(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302de8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_445", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_445(a) cavm_bbxe_abx_config_445_t
#define bustype_CAVM_BBXE_ABX_CONFIG_445(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_445(a) "BBXE_ABX_CONFIG_445"
#define busnum_CAVM_BBXE_ABX_CONFIG_445(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_445(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_446
 *
 * BBX5 Configuration Register 446
 * Job Configuration
 */
union cavm_bbxe_abx_config_446
{
    uint64_t u;
    struct cavm_bbxe_abx_config_446_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig632         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig633         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig633         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig632         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_446_s cn; */
};
typedef union cavm_bbxe_abx_config_446 cavm_bbxe_abx_config_446_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_446(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_446(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302df0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_446", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_446(a) cavm_bbxe_abx_config_446_t
#define bustype_CAVM_BBXE_ABX_CONFIG_446(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_446(a) "BBXE_ABX_CONFIG_446"
#define busnum_CAVM_BBXE_ABX_CONFIG_446(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_446(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_447
 *
 * BBX5 Configuration Register 447
 * Job Configuration
 */
union cavm_bbxe_abx_config_447
{
    uint64_t u;
    struct cavm_bbxe_abx_config_447_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig634         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig635         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig635         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig634         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_447_s cn; */
};
typedef union cavm_bbxe_abx_config_447 cavm_bbxe_abx_config_447_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_447(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_447(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302df8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_447", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_447(a) cavm_bbxe_abx_config_447_t
#define bustype_CAVM_BBXE_ABX_CONFIG_447(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_447(a) "BBXE_ABX_CONFIG_447"
#define busnum_CAVM_BBXE_ABX_CONFIG_447(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_447(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_448
 *
 * BBX5 Configuration Register 448
 * Job Configuration
 */
union cavm_bbxe_abx_config_448
{
    uint64_t u;
    struct cavm_bbxe_abx_config_448_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig636         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig637         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig637         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig636         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_448_s cn; */
};
typedef union cavm_bbxe_abx_config_448 cavm_bbxe_abx_config_448_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_448(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_448(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302e00ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_448", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_448(a) cavm_bbxe_abx_config_448_t
#define bustype_CAVM_BBXE_ABX_CONFIG_448(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_448(a) "BBXE_ABX_CONFIG_448"
#define busnum_CAVM_BBXE_ABX_CONFIG_448(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_448(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_449
 *
 * BBX5 Configuration Register 449
 * Job Configuration
 */
union cavm_bbxe_abx_config_449
{
    uint64_t u;
    struct cavm_bbxe_abx_config_449_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig638         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig639         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig639         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig638         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_449_s cn; */
};
typedef union cavm_bbxe_abx_config_449 cavm_bbxe_abx_config_449_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_449(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_449(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302e08ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_449", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_449(a) cavm_bbxe_abx_config_449_t
#define bustype_CAVM_BBXE_ABX_CONFIG_449(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_449(a) "BBXE_ABX_CONFIG_449"
#define busnum_CAVM_BBXE_ABX_CONFIG_449(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_449(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_45
 *
 * BBX5 Configuration Register 45
 * Job Configuration
 */
union cavm_bbxe_abx_config_45
{
    uint64_t u;
    struct cavm_bbxe_abx_config_45_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig69          : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig69          : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_45_s cn; */
};
typedef union cavm_bbxe_abx_config_45 cavm_bbxe_abx_config_45_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_45(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_45(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302168ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_45", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_45(a) cavm_bbxe_abx_config_45_t
#define bustype_CAVM_BBXE_ABX_CONFIG_45(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_45(a) "BBXE_ABX_CONFIG_45"
#define busnum_CAVM_BBXE_ABX_CONFIG_45(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_45(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_450
 *
 * BBX5 Configuration Register 450
 * Job Configuration
 */
union cavm_bbxe_abx_config_450
{
    uint64_t u;
    struct cavm_bbxe_abx_config_450_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig640         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig641         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig641         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig640         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_450_s cn; */
};
typedef union cavm_bbxe_abx_config_450 cavm_bbxe_abx_config_450_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_450(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_450(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302e10ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_450", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_450(a) cavm_bbxe_abx_config_450_t
#define bustype_CAVM_BBXE_ABX_CONFIG_450(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_450(a) "BBXE_ABX_CONFIG_450"
#define busnum_CAVM_BBXE_ABX_CONFIG_450(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_450(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_451
 *
 * BBX5 Configuration Register 451
 * Job Configuration
 */
union cavm_bbxe_abx_config_451
{
    uint64_t u;
    struct cavm_bbxe_abx_config_451_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig642         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig643         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig643         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig642         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_451_s cn; */
};
typedef union cavm_bbxe_abx_config_451 cavm_bbxe_abx_config_451_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_451(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_451(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302e18ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_451", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_451(a) cavm_bbxe_abx_config_451_t
#define bustype_CAVM_BBXE_ABX_CONFIG_451(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_451(a) "BBXE_ABX_CONFIG_451"
#define busnum_CAVM_BBXE_ABX_CONFIG_451(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_451(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_452
 *
 * BBX5 Configuration Register 452
 * Job Configuration
 */
union cavm_bbxe_abx_config_452
{
    uint64_t u;
    struct cavm_bbxe_abx_config_452_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig644         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig645         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig645         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig644         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_452_s cn; */
};
typedef union cavm_bbxe_abx_config_452 cavm_bbxe_abx_config_452_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_452(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_452(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302e20ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_452", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_452(a) cavm_bbxe_abx_config_452_t
#define bustype_CAVM_BBXE_ABX_CONFIG_452(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_452(a) "BBXE_ABX_CONFIG_452"
#define busnum_CAVM_BBXE_ABX_CONFIG_452(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_452(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_453
 *
 * BBX5 Configuration Register 453
 * Job Configuration
 */
union cavm_bbxe_abx_config_453
{
    uint64_t u;
    struct cavm_bbxe_abx_config_453_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig646         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig647         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig647         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig646         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_453_s cn; */
};
typedef union cavm_bbxe_abx_config_453 cavm_bbxe_abx_config_453_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_453(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_453(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302e28ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_453", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_453(a) cavm_bbxe_abx_config_453_t
#define bustype_CAVM_BBXE_ABX_CONFIG_453(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_453(a) "BBXE_ABX_CONFIG_453"
#define busnum_CAVM_BBXE_ABX_CONFIG_453(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_453(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_454
 *
 * BBX5 Configuration Register 454
 * Job Configuration
 */
union cavm_bbxe_abx_config_454
{
    uint64_t u;
    struct cavm_bbxe_abx_config_454_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig648         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig649         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig649         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig648         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_454_s cn; */
};
typedef union cavm_bbxe_abx_config_454 cavm_bbxe_abx_config_454_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_454(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_454(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302e30ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_454", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_454(a) cavm_bbxe_abx_config_454_t
#define bustype_CAVM_BBXE_ABX_CONFIG_454(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_454(a) "BBXE_ABX_CONFIG_454"
#define busnum_CAVM_BBXE_ABX_CONFIG_454(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_454(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_455
 *
 * BBX5 Configuration Register 455
 * Job Configuration
 */
union cavm_bbxe_abx_config_455
{
    uint64_t u;
    struct cavm_bbxe_abx_config_455_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig650         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig651         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig651         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig650         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_455_s cn; */
};
typedef union cavm_bbxe_abx_config_455 cavm_bbxe_abx_config_455_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_455(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_455(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302e38ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_455", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_455(a) cavm_bbxe_abx_config_455_t
#define bustype_CAVM_BBXE_ABX_CONFIG_455(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_455(a) "BBXE_ABX_CONFIG_455"
#define busnum_CAVM_BBXE_ABX_CONFIG_455(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_455(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_456
 *
 * BBX5 Configuration Register 456
 * Job Configuration
 */
union cavm_bbxe_abx_config_456
{
    uint64_t u;
    struct cavm_bbxe_abx_config_456_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig652         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig653         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig653         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig652         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_456_s cn; */
};
typedef union cavm_bbxe_abx_config_456 cavm_bbxe_abx_config_456_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_456(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_456(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302e40ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_456", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_456(a) cavm_bbxe_abx_config_456_t
#define bustype_CAVM_BBXE_ABX_CONFIG_456(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_456(a) "BBXE_ABX_CONFIG_456"
#define busnum_CAVM_BBXE_ABX_CONFIG_456(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_456(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_457
 *
 * BBX5 Configuration Register 457
 * Job Configuration
 */
union cavm_bbxe_abx_config_457
{
    uint64_t u;
    struct cavm_bbxe_abx_config_457_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig654         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig655         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig655         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig654         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_457_s cn; */
};
typedef union cavm_bbxe_abx_config_457 cavm_bbxe_abx_config_457_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_457(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_457(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302e48ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_457", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_457(a) cavm_bbxe_abx_config_457_t
#define bustype_CAVM_BBXE_ABX_CONFIG_457(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_457(a) "BBXE_ABX_CONFIG_457"
#define busnum_CAVM_BBXE_ABX_CONFIG_457(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_457(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_458
 *
 * BBX5 Configuration Register 458
 * Job Configuration
 */
union cavm_bbxe_abx_config_458
{
    uint64_t u;
    struct cavm_bbxe_abx_config_458_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig656         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig657         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig657         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig656         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_458_s cn; */
};
typedef union cavm_bbxe_abx_config_458 cavm_bbxe_abx_config_458_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_458(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_458(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302e50ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_458", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_458(a) cavm_bbxe_abx_config_458_t
#define bustype_CAVM_BBXE_ABX_CONFIG_458(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_458(a) "BBXE_ABX_CONFIG_458"
#define busnum_CAVM_BBXE_ABX_CONFIG_458(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_458(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_459
 *
 * BBX5 Configuration Register 459
 * Job Configuration
 */
union cavm_bbxe_abx_config_459
{
    uint64_t u;
    struct cavm_bbxe_abx_config_459_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig658         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig659         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig659         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig658         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_459_s cn; */
};
typedef union cavm_bbxe_abx_config_459 cavm_bbxe_abx_config_459_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_459(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_459(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302e58ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_459", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_459(a) cavm_bbxe_abx_config_459_t
#define bustype_CAVM_BBXE_ABX_CONFIG_459(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_459(a) "BBXE_ABX_CONFIG_459"
#define busnum_CAVM_BBXE_ABX_CONFIG_459(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_459(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_46
 *
 * BBX5 Configuration Register 46
 * Job Configuration
 */
union cavm_bbxe_abx_config_46
{
    uint64_t u;
    struct cavm_bbxe_abx_config_46_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig70          : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig70          : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_46_s cn; */
};
typedef union cavm_bbxe_abx_config_46 cavm_bbxe_abx_config_46_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_46(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_46(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302170ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_46", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_46(a) cavm_bbxe_abx_config_46_t
#define bustype_CAVM_BBXE_ABX_CONFIG_46(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_46(a) "BBXE_ABX_CONFIG_46"
#define busnum_CAVM_BBXE_ABX_CONFIG_46(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_46(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_460
 *
 * BBX5 Configuration Register 460
 * Job Configuration
 */
union cavm_bbxe_abx_config_460
{
    uint64_t u;
    struct cavm_bbxe_abx_config_460_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig660         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig661         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig661         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig660         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_460_s cn; */
};
typedef union cavm_bbxe_abx_config_460 cavm_bbxe_abx_config_460_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_460(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_460(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302e60ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_460", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_460(a) cavm_bbxe_abx_config_460_t
#define bustype_CAVM_BBXE_ABX_CONFIG_460(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_460(a) "BBXE_ABX_CONFIG_460"
#define busnum_CAVM_BBXE_ABX_CONFIG_460(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_460(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_461
 *
 * BBX5 Configuration Register 461
 * Job Configuration
 */
union cavm_bbxe_abx_config_461
{
    uint64_t u;
    struct cavm_bbxe_abx_config_461_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig662         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig663         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig663         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig662         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_461_s cn; */
};
typedef union cavm_bbxe_abx_config_461 cavm_bbxe_abx_config_461_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_461(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_461(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302e68ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_461", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_461(a) cavm_bbxe_abx_config_461_t
#define bustype_CAVM_BBXE_ABX_CONFIG_461(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_461(a) "BBXE_ABX_CONFIG_461"
#define busnum_CAVM_BBXE_ABX_CONFIG_461(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_461(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_462
 *
 * BBX5 Configuration Register 462
 * Job Configuration
 */
union cavm_bbxe_abx_config_462
{
    uint64_t u;
    struct cavm_bbxe_abx_config_462_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig664         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig665         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig665         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig664         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_462_s cn; */
};
typedef union cavm_bbxe_abx_config_462 cavm_bbxe_abx_config_462_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_462(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_462(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302e70ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_462", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_462(a) cavm_bbxe_abx_config_462_t
#define bustype_CAVM_BBXE_ABX_CONFIG_462(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_462(a) "BBXE_ABX_CONFIG_462"
#define busnum_CAVM_BBXE_ABX_CONFIG_462(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_462(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_463
 *
 * BBX5 Configuration Register 463
 * Job Configuration
 */
union cavm_bbxe_abx_config_463
{
    uint64_t u;
    struct cavm_bbxe_abx_config_463_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig666         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig667         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig667         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig666         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_463_s cn; */
};
typedef union cavm_bbxe_abx_config_463 cavm_bbxe_abx_config_463_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_463(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_463(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302e78ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_463", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_463(a) cavm_bbxe_abx_config_463_t
#define bustype_CAVM_BBXE_ABX_CONFIG_463(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_463(a) "BBXE_ABX_CONFIG_463"
#define busnum_CAVM_BBXE_ABX_CONFIG_463(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_463(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_464
 *
 * BBX5 Configuration Register 464
 * Job Configuration
 */
union cavm_bbxe_abx_config_464
{
    uint64_t u;
    struct cavm_bbxe_abx_config_464_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig668         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig669         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig669         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig668         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_464_s cn; */
};
typedef union cavm_bbxe_abx_config_464 cavm_bbxe_abx_config_464_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_464(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_464(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302e80ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_464", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_464(a) cavm_bbxe_abx_config_464_t
#define bustype_CAVM_BBXE_ABX_CONFIG_464(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_464(a) "BBXE_ABX_CONFIG_464"
#define busnum_CAVM_BBXE_ABX_CONFIG_464(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_464(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_465
 *
 * BBX5 Configuration Register 465
 * Job Configuration
 */
union cavm_bbxe_abx_config_465
{
    uint64_t u;
    struct cavm_bbxe_abx_config_465_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig670         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig671         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig671         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig670         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_465_s cn; */
};
typedef union cavm_bbxe_abx_config_465 cavm_bbxe_abx_config_465_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_465(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_465(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302e88ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_465", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_465(a) cavm_bbxe_abx_config_465_t
#define bustype_CAVM_BBXE_ABX_CONFIG_465(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_465(a) "BBXE_ABX_CONFIG_465"
#define busnum_CAVM_BBXE_ABX_CONFIG_465(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_465(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_466
 *
 * BBX5 Configuration Register 466
 * Job Configuration
 */
union cavm_bbxe_abx_config_466
{
    uint64_t u;
    struct cavm_bbxe_abx_config_466_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig672         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig673         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig673         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig672         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_466_s cn; */
};
typedef union cavm_bbxe_abx_config_466 cavm_bbxe_abx_config_466_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_466(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_466(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302e90ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_466", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_466(a) cavm_bbxe_abx_config_466_t
#define bustype_CAVM_BBXE_ABX_CONFIG_466(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_466(a) "BBXE_ABX_CONFIG_466"
#define busnum_CAVM_BBXE_ABX_CONFIG_466(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_466(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_467
 *
 * BBX5 Configuration Register 467
 * Job Configuration
 */
union cavm_bbxe_abx_config_467
{
    uint64_t u;
    struct cavm_bbxe_abx_config_467_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig674         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig675         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig675         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig674         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_467_s cn; */
};
typedef union cavm_bbxe_abx_config_467 cavm_bbxe_abx_config_467_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_467(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_467(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302e98ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_467", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_467(a) cavm_bbxe_abx_config_467_t
#define bustype_CAVM_BBXE_ABX_CONFIG_467(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_467(a) "BBXE_ABX_CONFIG_467"
#define busnum_CAVM_BBXE_ABX_CONFIG_467(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_467(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_468
 *
 * BBX5 Configuration Register 468
 * Job Configuration
 */
union cavm_bbxe_abx_config_468
{
    uint64_t u;
    struct cavm_bbxe_abx_config_468_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig676         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig677         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig677         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig676         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_468_s cn; */
};
typedef union cavm_bbxe_abx_config_468 cavm_bbxe_abx_config_468_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_468(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_468(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302ea0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_468", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_468(a) cavm_bbxe_abx_config_468_t
#define bustype_CAVM_BBXE_ABX_CONFIG_468(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_468(a) "BBXE_ABX_CONFIG_468"
#define busnum_CAVM_BBXE_ABX_CONFIG_468(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_468(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_469
 *
 * BBX5 Configuration Register 469
 * Job Configuration
 */
union cavm_bbxe_abx_config_469
{
    uint64_t u;
    struct cavm_bbxe_abx_config_469_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig678         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig679         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig679         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig678         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_469_s cn; */
};
typedef union cavm_bbxe_abx_config_469 cavm_bbxe_abx_config_469_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_469(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_469(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302ea8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_469", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_469(a) cavm_bbxe_abx_config_469_t
#define bustype_CAVM_BBXE_ABX_CONFIG_469(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_469(a) "BBXE_ABX_CONFIG_469"
#define busnum_CAVM_BBXE_ABX_CONFIG_469(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_469(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_47
 *
 * BBX5 Configuration Register 47
 * Job Configuration
 */
union cavm_bbxe_abx_config_47
{
    uint64_t u;
    struct cavm_bbxe_abx_config_47_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig71          : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig71          : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_47_s cn; */
};
typedef union cavm_bbxe_abx_config_47 cavm_bbxe_abx_config_47_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_47(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_47(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302178ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_47", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_47(a) cavm_bbxe_abx_config_47_t
#define bustype_CAVM_BBXE_ABX_CONFIG_47(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_47(a) "BBXE_ABX_CONFIG_47"
#define busnum_CAVM_BBXE_ABX_CONFIG_47(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_47(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_470
 *
 * BBX5 Configuration Register 470
 * Job Configuration
 */
union cavm_bbxe_abx_config_470
{
    uint64_t u;
    struct cavm_bbxe_abx_config_470_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig680         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig681         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig681         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig680         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_470_s cn; */
};
typedef union cavm_bbxe_abx_config_470 cavm_bbxe_abx_config_470_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_470(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_470(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302eb0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_470", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_470(a) cavm_bbxe_abx_config_470_t
#define bustype_CAVM_BBXE_ABX_CONFIG_470(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_470(a) "BBXE_ABX_CONFIG_470"
#define busnum_CAVM_BBXE_ABX_CONFIG_470(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_470(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_471
 *
 * BBX5 Configuration Register 471
 * Job Configuration
 */
union cavm_bbxe_abx_config_471
{
    uint64_t u;
    struct cavm_bbxe_abx_config_471_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig682         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig683         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig683         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig682         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_471_s cn; */
};
typedef union cavm_bbxe_abx_config_471 cavm_bbxe_abx_config_471_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_471(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_471(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302eb8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_471", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_471(a) cavm_bbxe_abx_config_471_t
#define bustype_CAVM_BBXE_ABX_CONFIG_471(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_471(a) "BBXE_ABX_CONFIG_471"
#define busnum_CAVM_BBXE_ABX_CONFIG_471(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_471(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_472
 *
 * BBX5 Configuration Register 472
 * Job Configuration
 */
union cavm_bbxe_abx_config_472
{
    uint64_t u;
    struct cavm_bbxe_abx_config_472_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig684         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig685         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig685         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig684         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_472_s cn; */
};
typedef union cavm_bbxe_abx_config_472 cavm_bbxe_abx_config_472_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_472(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_472(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302ec0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_472", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_472(a) cavm_bbxe_abx_config_472_t
#define bustype_CAVM_BBXE_ABX_CONFIG_472(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_472(a) "BBXE_ABX_CONFIG_472"
#define busnum_CAVM_BBXE_ABX_CONFIG_472(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_472(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_473
 *
 * BBX5 Configuration Register 473
 * Job Configuration
 */
union cavm_bbxe_abx_config_473
{
    uint64_t u;
    struct cavm_bbxe_abx_config_473_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig686         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig687         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig687         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig686         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_473_s cn; */
};
typedef union cavm_bbxe_abx_config_473 cavm_bbxe_abx_config_473_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_473(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_473(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302ec8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_473", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_473(a) cavm_bbxe_abx_config_473_t
#define bustype_CAVM_BBXE_ABX_CONFIG_473(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_473(a) "BBXE_ABX_CONFIG_473"
#define busnum_CAVM_BBXE_ABX_CONFIG_473(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_473(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_474
 *
 * BBX5 Configuration Register 474
 * Job Configuration
 */
union cavm_bbxe_abx_config_474
{
    uint64_t u;
    struct cavm_bbxe_abx_config_474_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig688         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig689         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig689         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig688         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_474_s cn; */
};
typedef union cavm_bbxe_abx_config_474 cavm_bbxe_abx_config_474_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_474(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_474(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302ed0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_474", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_474(a) cavm_bbxe_abx_config_474_t
#define bustype_CAVM_BBXE_ABX_CONFIG_474(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_474(a) "BBXE_ABX_CONFIG_474"
#define busnum_CAVM_BBXE_ABX_CONFIG_474(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_474(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_475
 *
 * BBX5 Configuration Register 475
 * Job Configuration
 */
union cavm_bbxe_abx_config_475
{
    uint64_t u;
    struct cavm_bbxe_abx_config_475_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig690         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig691         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig691         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig690         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_475_s cn; */
};
typedef union cavm_bbxe_abx_config_475 cavm_bbxe_abx_config_475_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_475(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_475(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302ed8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_475", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_475(a) cavm_bbxe_abx_config_475_t
#define bustype_CAVM_BBXE_ABX_CONFIG_475(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_475(a) "BBXE_ABX_CONFIG_475"
#define busnum_CAVM_BBXE_ABX_CONFIG_475(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_475(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_476
 *
 * BBX5 Configuration Register 476
 * Job Configuration
 */
union cavm_bbxe_abx_config_476
{
    uint64_t u;
    struct cavm_bbxe_abx_config_476_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig692         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig693         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig693         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig692         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_476_s cn; */
};
typedef union cavm_bbxe_abx_config_476 cavm_bbxe_abx_config_476_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_476(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_476(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302ee0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_476", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_476(a) cavm_bbxe_abx_config_476_t
#define bustype_CAVM_BBXE_ABX_CONFIG_476(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_476(a) "BBXE_ABX_CONFIG_476"
#define busnum_CAVM_BBXE_ABX_CONFIG_476(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_476(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_477
 *
 * BBX5 Configuration Register 477
 * Job Configuration
 */
union cavm_bbxe_abx_config_477
{
    uint64_t u;
    struct cavm_bbxe_abx_config_477_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig694         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig695         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig695         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig694         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_477_s cn; */
};
typedef union cavm_bbxe_abx_config_477 cavm_bbxe_abx_config_477_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_477(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_477(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302ee8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_477", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_477(a) cavm_bbxe_abx_config_477_t
#define bustype_CAVM_BBXE_ABX_CONFIG_477(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_477(a) "BBXE_ABX_CONFIG_477"
#define busnum_CAVM_BBXE_ABX_CONFIG_477(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_477(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_478
 *
 * BBX5 Configuration Register 478
 * Job Configuration
 */
union cavm_bbxe_abx_config_478
{
    uint64_t u;
    struct cavm_bbxe_abx_config_478_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig696         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig697         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig697         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig696         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_478_s cn; */
};
typedef union cavm_bbxe_abx_config_478 cavm_bbxe_abx_config_478_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_478(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_478(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302ef0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_478", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_478(a) cavm_bbxe_abx_config_478_t
#define bustype_CAVM_BBXE_ABX_CONFIG_478(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_478(a) "BBXE_ABX_CONFIG_478"
#define busnum_CAVM_BBXE_ABX_CONFIG_478(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_478(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_479
 *
 * BBX5 Configuration Register 479
 * Job Configuration
 */
union cavm_bbxe_abx_config_479
{
    uint64_t u;
    struct cavm_bbxe_abx_config_479_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig698         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig699         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig699         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig698         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_479_s cn; */
};
typedef union cavm_bbxe_abx_config_479 cavm_bbxe_abx_config_479_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_479(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_479(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302ef8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_479", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_479(a) cavm_bbxe_abx_config_479_t
#define bustype_CAVM_BBXE_ABX_CONFIG_479(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_479(a) "BBXE_ABX_CONFIG_479"
#define busnum_CAVM_BBXE_ABX_CONFIG_479(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_479(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_48
 *
 * BBX5 Configuration Register 48
 * Job Configuration
 */
union cavm_bbxe_abx_config_48
{
    uint64_t u;
    struct cavm_bbxe_abx_config_48_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig72          : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig72          : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_48_s cn; */
};
typedef union cavm_bbxe_abx_config_48 cavm_bbxe_abx_config_48_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_48(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_48(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302180ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_48", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_48(a) cavm_bbxe_abx_config_48_t
#define bustype_CAVM_BBXE_ABX_CONFIG_48(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_48(a) "BBXE_ABX_CONFIG_48"
#define busnum_CAVM_BBXE_ABX_CONFIG_48(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_48(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_480
 *
 * BBX5 Configuration Register 480
 * Job Configuration
 */
union cavm_bbxe_abx_config_480
{
    uint64_t u;
    struct cavm_bbxe_abx_config_480_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig700         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig701         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig701         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig700         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_480_s cn; */
};
typedef union cavm_bbxe_abx_config_480 cavm_bbxe_abx_config_480_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_480(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_480(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302f00ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_480", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_480(a) cavm_bbxe_abx_config_480_t
#define bustype_CAVM_BBXE_ABX_CONFIG_480(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_480(a) "BBXE_ABX_CONFIG_480"
#define busnum_CAVM_BBXE_ABX_CONFIG_480(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_480(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_481
 *
 * BBX5 Configuration Register 481
 * Job Configuration
 */
union cavm_bbxe_abx_config_481
{
    uint64_t u;
    struct cavm_bbxe_abx_config_481_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig702         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig703         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig703         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig702         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_481_s cn; */
};
typedef union cavm_bbxe_abx_config_481 cavm_bbxe_abx_config_481_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_481(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_481(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302f08ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_481", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_481(a) cavm_bbxe_abx_config_481_t
#define bustype_CAVM_BBXE_ABX_CONFIG_481(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_481(a) "BBXE_ABX_CONFIG_481"
#define busnum_CAVM_BBXE_ABX_CONFIG_481(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_481(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_482
 *
 * BBX5 Configuration Register 482
 * Job Configuration
 */
union cavm_bbxe_abx_config_482
{
    uint64_t u;
    struct cavm_bbxe_abx_config_482_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig704         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig705         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig705         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig704         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_482_s cn; */
};
typedef union cavm_bbxe_abx_config_482 cavm_bbxe_abx_config_482_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_482(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_482(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302f10ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_482", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_482(a) cavm_bbxe_abx_config_482_t
#define bustype_CAVM_BBXE_ABX_CONFIG_482(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_482(a) "BBXE_ABX_CONFIG_482"
#define busnum_CAVM_BBXE_ABX_CONFIG_482(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_482(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_483
 *
 * BBX5 Configuration Register 483
 * Job Configuration
 */
union cavm_bbxe_abx_config_483
{
    uint64_t u;
    struct cavm_bbxe_abx_config_483_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig706         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig707         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig707         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig706         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_483_s cn; */
};
typedef union cavm_bbxe_abx_config_483 cavm_bbxe_abx_config_483_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_483(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_483(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302f18ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_483", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_483(a) cavm_bbxe_abx_config_483_t
#define bustype_CAVM_BBXE_ABX_CONFIG_483(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_483(a) "BBXE_ABX_CONFIG_483"
#define busnum_CAVM_BBXE_ABX_CONFIG_483(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_483(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_484
 *
 * BBX5 Configuration Register 484
 * Job Configuration
 */
union cavm_bbxe_abx_config_484
{
    uint64_t u;
    struct cavm_bbxe_abx_config_484_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig708         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig709         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig709         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig708         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_484_s cn; */
};
typedef union cavm_bbxe_abx_config_484 cavm_bbxe_abx_config_484_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_484(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_484(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302f20ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_484", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_484(a) cavm_bbxe_abx_config_484_t
#define bustype_CAVM_BBXE_ABX_CONFIG_484(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_484(a) "BBXE_ABX_CONFIG_484"
#define busnum_CAVM_BBXE_ABX_CONFIG_484(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_484(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_485
 *
 * BBX5 Configuration Register 485
 * Job Configuration
 */
union cavm_bbxe_abx_config_485
{
    uint64_t u;
    struct cavm_bbxe_abx_config_485_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig710         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig711         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig711         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig710         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_485_s cn; */
};
typedef union cavm_bbxe_abx_config_485 cavm_bbxe_abx_config_485_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_485(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_485(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302f28ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_485", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_485(a) cavm_bbxe_abx_config_485_t
#define bustype_CAVM_BBXE_ABX_CONFIG_485(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_485(a) "BBXE_ABX_CONFIG_485"
#define busnum_CAVM_BBXE_ABX_CONFIG_485(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_485(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_486
 *
 * BBX5 Configuration Register 486
 * Job Configuration
 */
union cavm_bbxe_abx_config_486
{
    uint64_t u;
    struct cavm_bbxe_abx_config_486_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig712         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig713         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig713         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig712         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_486_s cn; */
};
typedef union cavm_bbxe_abx_config_486 cavm_bbxe_abx_config_486_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_486(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_486(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302f30ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_486", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_486(a) cavm_bbxe_abx_config_486_t
#define bustype_CAVM_BBXE_ABX_CONFIG_486(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_486(a) "BBXE_ABX_CONFIG_486"
#define busnum_CAVM_BBXE_ABX_CONFIG_486(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_486(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_487
 *
 * BBX5 Configuration Register 487
 * Job Configuration
 */
union cavm_bbxe_abx_config_487
{
    uint64_t u;
    struct cavm_bbxe_abx_config_487_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig714         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig715         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig715         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig714         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_487_s cn; */
};
typedef union cavm_bbxe_abx_config_487 cavm_bbxe_abx_config_487_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_487(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_487(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302f38ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_487", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_487(a) cavm_bbxe_abx_config_487_t
#define bustype_CAVM_BBXE_ABX_CONFIG_487(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_487(a) "BBXE_ABX_CONFIG_487"
#define busnum_CAVM_BBXE_ABX_CONFIG_487(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_487(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_488
 *
 * BBX5 Configuration Register 488
 * Job Configuration
 */
union cavm_bbxe_abx_config_488
{
    uint64_t u;
    struct cavm_bbxe_abx_config_488_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig716         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig717         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig717         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig716         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_488_s cn; */
};
typedef union cavm_bbxe_abx_config_488 cavm_bbxe_abx_config_488_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_488(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_488(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302f40ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_488", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_488(a) cavm_bbxe_abx_config_488_t
#define bustype_CAVM_BBXE_ABX_CONFIG_488(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_488(a) "BBXE_ABX_CONFIG_488"
#define busnum_CAVM_BBXE_ABX_CONFIG_488(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_488(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_489
 *
 * BBX5 Configuration Register 489
 * Job Configuration
 */
union cavm_bbxe_abx_config_489
{
    uint64_t u;
    struct cavm_bbxe_abx_config_489_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig718         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig719         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig719         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig718         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_489_s cn; */
};
typedef union cavm_bbxe_abx_config_489 cavm_bbxe_abx_config_489_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_489(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_489(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302f48ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_489", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_489(a) cavm_bbxe_abx_config_489_t
#define bustype_CAVM_BBXE_ABX_CONFIG_489(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_489(a) "BBXE_ABX_CONFIG_489"
#define busnum_CAVM_BBXE_ABX_CONFIG_489(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_489(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_49
 *
 * BBX5 Configuration Register 49
 * Job Configuration
 */
union cavm_bbxe_abx_config_49
{
    uint64_t u;
    struct cavm_bbxe_abx_config_49_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig73          : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig73          : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_49_s cn; */
};
typedef union cavm_bbxe_abx_config_49 cavm_bbxe_abx_config_49_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_49(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_49(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302188ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_49", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_49(a) cavm_bbxe_abx_config_49_t
#define bustype_CAVM_BBXE_ABX_CONFIG_49(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_49(a) "BBXE_ABX_CONFIG_49"
#define busnum_CAVM_BBXE_ABX_CONFIG_49(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_49(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_490
 *
 * BBX5 Configuration Register 490
 * Job Configuration
 */
union cavm_bbxe_abx_config_490
{
    uint64_t u;
    struct cavm_bbxe_abx_config_490_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig720         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig721         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig721         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig720         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_490_s cn; */
};
typedef union cavm_bbxe_abx_config_490 cavm_bbxe_abx_config_490_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_490(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_490(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302f50ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_490", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_490(a) cavm_bbxe_abx_config_490_t
#define bustype_CAVM_BBXE_ABX_CONFIG_490(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_490(a) "BBXE_ABX_CONFIG_490"
#define busnum_CAVM_BBXE_ABX_CONFIG_490(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_490(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_491
 *
 * BBX5 Configuration Register 491
 * Job Configuration
 */
union cavm_bbxe_abx_config_491
{
    uint64_t u;
    struct cavm_bbxe_abx_config_491_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig722         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig723         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig723         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig722         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_491_s cn; */
};
typedef union cavm_bbxe_abx_config_491 cavm_bbxe_abx_config_491_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_491(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_491(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302f58ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_491", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_491(a) cavm_bbxe_abx_config_491_t
#define bustype_CAVM_BBXE_ABX_CONFIG_491(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_491(a) "BBXE_ABX_CONFIG_491"
#define busnum_CAVM_BBXE_ABX_CONFIG_491(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_491(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_492
 *
 * BBX5 Configuration Register 492
 * Job Configuration
 */
union cavm_bbxe_abx_config_492
{
    uint64_t u;
    struct cavm_bbxe_abx_config_492_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig724         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig725         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig725         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig724         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_492_s cn; */
};
typedef union cavm_bbxe_abx_config_492 cavm_bbxe_abx_config_492_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_492(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_492(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302f60ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_492", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_492(a) cavm_bbxe_abx_config_492_t
#define bustype_CAVM_BBXE_ABX_CONFIG_492(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_492(a) "BBXE_ABX_CONFIG_492"
#define busnum_CAVM_BBXE_ABX_CONFIG_492(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_492(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_493
 *
 * BBX5 Configuration Register 493
 * Job Configuration
 */
union cavm_bbxe_abx_config_493
{
    uint64_t u;
    struct cavm_bbxe_abx_config_493_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig726         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig727         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig727         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig726         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_493_s cn; */
};
typedef union cavm_bbxe_abx_config_493 cavm_bbxe_abx_config_493_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_493(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_493(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302f68ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_493", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_493(a) cavm_bbxe_abx_config_493_t
#define bustype_CAVM_BBXE_ABX_CONFIG_493(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_493(a) "BBXE_ABX_CONFIG_493"
#define busnum_CAVM_BBXE_ABX_CONFIG_493(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_493(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_494
 *
 * BBX5 Configuration Register 494
 * Job Configuration
 */
union cavm_bbxe_abx_config_494
{
    uint64_t u;
    struct cavm_bbxe_abx_config_494_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig728         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig729         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig729         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig728         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_494_s cn; */
};
typedef union cavm_bbxe_abx_config_494 cavm_bbxe_abx_config_494_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_494(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_494(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302f70ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_494", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_494(a) cavm_bbxe_abx_config_494_t
#define bustype_CAVM_BBXE_ABX_CONFIG_494(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_494(a) "BBXE_ABX_CONFIG_494"
#define busnum_CAVM_BBXE_ABX_CONFIG_494(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_494(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_495
 *
 * BBX5 Configuration Register 495
 * Job Configuration
 */
union cavm_bbxe_abx_config_495
{
    uint64_t u;
    struct cavm_bbxe_abx_config_495_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig730         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig731         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig731         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig730         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_495_s cn; */
};
typedef union cavm_bbxe_abx_config_495 cavm_bbxe_abx_config_495_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_495(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_495(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302f78ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_495", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_495(a) cavm_bbxe_abx_config_495_t
#define bustype_CAVM_BBXE_ABX_CONFIG_495(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_495(a) "BBXE_ABX_CONFIG_495"
#define busnum_CAVM_BBXE_ABX_CONFIG_495(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_495(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_496
 *
 * BBX5 Configuration Register 496
 * Job Configuration
 */
union cavm_bbxe_abx_config_496
{
    uint64_t u;
    struct cavm_bbxe_abx_config_496_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig732         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig733         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig733         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig732         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_496_s cn; */
};
typedef union cavm_bbxe_abx_config_496 cavm_bbxe_abx_config_496_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_496(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_496(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302f80ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_496", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_496(a) cavm_bbxe_abx_config_496_t
#define bustype_CAVM_BBXE_ABX_CONFIG_496(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_496(a) "BBXE_ABX_CONFIG_496"
#define busnum_CAVM_BBXE_ABX_CONFIG_496(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_496(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_497
 *
 * BBX5 Configuration Register 497
 * Job Configuration
 */
union cavm_bbxe_abx_config_497
{
    uint64_t u;
    struct cavm_bbxe_abx_config_497_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig734         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig735         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig735         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig734         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_497_s cn; */
};
typedef union cavm_bbxe_abx_config_497 cavm_bbxe_abx_config_497_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_497(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_497(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302f88ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_497", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_497(a) cavm_bbxe_abx_config_497_t
#define bustype_CAVM_BBXE_ABX_CONFIG_497(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_497(a) "BBXE_ABX_CONFIG_497"
#define busnum_CAVM_BBXE_ABX_CONFIG_497(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_497(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_498
 *
 * BBX5 Configuration Register 498
 * Job Configuration
 */
union cavm_bbxe_abx_config_498
{
    uint64_t u;
    struct cavm_bbxe_abx_config_498_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig736         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig737         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig737         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig736         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_498_s cn; */
};
typedef union cavm_bbxe_abx_config_498 cavm_bbxe_abx_config_498_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_498(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_498(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302f90ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_498", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_498(a) cavm_bbxe_abx_config_498_t
#define bustype_CAVM_BBXE_ABX_CONFIG_498(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_498(a) "BBXE_ABX_CONFIG_498"
#define busnum_CAVM_BBXE_ABX_CONFIG_498(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_498(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_499
 *
 * BBX5 Configuration Register 499
 * Job Configuration
 */
union cavm_bbxe_abx_config_499
{
    uint64_t u;
    struct cavm_bbxe_abx_config_499_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig738         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig739         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig739         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig738         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_499_s cn; */
};
typedef union cavm_bbxe_abx_config_499 cavm_bbxe_abx_config_499_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_499(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_499(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302f98ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_499", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_499(a) cavm_bbxe_abx_config_499_t
#define bustype_CAVM_BBXE_ABX_CONFIG_499(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_499(a) "BBXE_ABX_CONFIG_499"
#define busnum_CAVM_BBXE_ABX_CONFIG_499(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_499(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_5
 *
 * BBX5 Configuration Register 5
 * Job Configuration
 */
union cavm_bbxe_abx_config_5
{
    uint64_t u;
    struct cavm_bbxe_abx_config_5_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig29          : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig29          : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_5_s cn; */
};
typedef union cavm_bbxe_abx_config_5 cavm_bbxe_abx_config_5_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_5(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_5(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302028ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_5", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_5(a) cavm_bbxe_abx_config_5_t
#define bustype_CAVM_BBXE_ABX_CONFIG_5(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_5(a) "BBXE_ABX_CONFIG_5"
#define busnum_CAVM_BBXE_ABX_CONFIG_5(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_5(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_50
 *
 * BBX5 Configuration Register 50
 * Job Configuration
 */
union cavm_bbxe_abx_config_50
{
    uint64_t u;
    struct cavm_bbxe_abx_config_50_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig74          : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig74          : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_50_s cn; */
};
typedef union cavm_bbxe_abx_config_50 cavm_bbxe_abx_config_50_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_50(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_50(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302190ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_50", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_50(a) cavm_bbxe_abx_config_50_t
#define bustype_CAVM_BBXE_ABX_CONFIG_50(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_50(a) "BBXE_ABX_CONFIG_50"
#define busnum_CAVM_BBXE_ABX_CONFIG_50(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_50(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_500
 *
 * BBX5 Configuration Register 500
 * Job Configuration
 */
union cavm_bbxe_abx_config_500
{
    uint64_t u;
    struct cavm_bbxe_abx_config_500_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig740         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig741         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig741         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig740         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_500_s cn; */
};
typedef union cavm_bbxe_abx_config_500 cavm_bbxe_abx_config_500_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_500(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_500(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302fa0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_500", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_500(a) cavm_bbxe_abx_config_500_t
#define bustype_CAVM_BBXE_ABX_CONFIG_500(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_500(a) "BBXE_ABX_CONFIG_500"
#define busnum_CAVM_BBXE_ABX_CONFIG_500(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_500(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_501
 *
 * BBX5 Configuration Register 501
 * Job Configuration
 */
union cavm_bbxe_abx_config_501
{
    uint64_t u;
    struct cavm_bbxe_abx_config_501_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig742         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig743         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig743         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig742         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_501_s cn; */
};
typedef union cavm_bbxe_abx_config_501 cavm_bbxe_abx_config_501_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_501(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_501(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302fa8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_501", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_501(a) cavm_bbxe_abx_config_501_t
#define bustype_CAVM_BBXE_ABX_CONFIG_501(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_501(a) "BBXE_ABX_CONFIG_501"
#define busnum_CAVM_BBXE_ABX_CONFIG_501(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_501(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_502
 *
 * BBX5 Configuration Register 502
 * Job Configuration
 */
union cavm_bbxe_abx_config_502
{
    uint64_t u;
    struct cavm_bbxe_abx_config_502_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig744         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig745         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig745         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig744         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_502_s cn; */
};
typedef union cavm_bbxe_abx_config_502 cavm_bbxe_abx_config_502_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_502(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_502(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302fb0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_502", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_502(a) cavm_bbxe_abx_config_502_t
#define bustype_CAVM_BBXE_ABX_CONFIG_502(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_502(a) "BBXE_ABX_CONFIG_502"
#define busnum_CAVM_BBXE_ABX_CONFIG_502(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_502(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_503
 *
 * BBX5 Configuration Register 503
 * Job Configuration
 */
union cavm_bbxe_abx_config_503
{
    uint64_t u;
    struct cavm_bbxe_abx_config_503_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig746         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig747         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig747         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig746         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_503_s cn; */
};
typedef union cavm_bbxe_abx_config_503 cavm_bbxe_abx_config_503_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_503(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_503(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302fb8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_503", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_503(a) cavm_bbxe_abx_config_503_t
#define bustype_CAVM_BBXE_ABX_CONFIG_503(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_503(a) "BBXE_ABX_CONFIG_503"
#define busnum_CAVM_BBXE_ABX_CONFIG_503(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_503(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_504
 *
 * BBX5 Configuration Register 504
 * Job Configuration
 */
union cavm_bbxe_abx_config_504
{
    uint64_t u;
    struct cavm_bbxe_abx_config_504_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig748         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig749         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig749         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig748         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_504_s cn; */
};
typedef union cavm_bbxe_abx_config_504 cavm_bbxe_abx_config_504_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_504(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_504(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302fc0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_504", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_504(a) cavm_bbxe_abx_config_504_t
#define bustype_CAVM_BBXE_ABX_CONFIG_504(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_504(a) "BBXE_ABX_CONFIG_504"
#define busnum_CAVM_BBXE_ABX_CONFIG_504(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_504(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_505
 *
 * BBX5 Configuration Register 505
 * Job Configuration
 */
union cavm_bbxe_abx_config_505
{
    uint64_t u;
    struct cavm_bbxe_abx_config_505_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig750         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig751         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig751         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig750         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_505_s cn; */
};
typedef union cavm_bbxe_abx_config_505 cavm_bbxe_abx_config_505_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_505(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_505(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302fc8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_505", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_505(a) cavm_bbxe_abx_config_505_t
#define bustype_CAVM_BBXE_ABX_CONFIG_505(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_505(a) "BBXE_ABX_CONFIG_505"
#define busnum_CAVM_BBXE_ABX_CONFIG_505(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_505(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_506
 *
 * BBX5 Configuration Register 506
 * Job Configuration
 */
union cavm_bbxe_abx_config_506
{
    uint64_t u;
    struct cavm_bbxe_abx_config_506_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig752         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig753         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig753         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig752         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_506_s cn; */
};
typedef union cavm_bbxe_abx_config_506 cavm_bbxe_abx_config_506_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_506(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_506(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302fd0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_506", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_506(a) cavm_bbxe_abx_config_506_t
#define bustype_CAVM_BBXE_ABX_CONFIG_506(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_506(a) "BBXE_ABX_CONFIG_506"
#define busnum_CAVM_BBXE_ABX_CONFIG_506(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_506(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_507
 *
 * BBX5 Configuration Register 507
 * Job Configuration
 */
union cavm_bbxe_abx_config_507
{
    uint64_t u;
    struct cavm_bbxe_abx_config_507_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig754         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig755         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig755         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig754         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_507_s cn; */
};
typedef union cavm_bbxe_abx_config_507 cavm_bbxe_abx_config_507_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_507(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_507(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302fd8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_507", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_507(a) cavm_bbxe_abx_config_507_t
#define bustype_CAVM_BBXE_ABX_CONFIG_507(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_507(a) "BBXE_ABX_CONFIG_507"
#define busnum_CAVM_BBXE_ABX_CONFIG_507(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_507(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_508
 *
 * BBX5 Configuration Register 508
 * Job Configuration
 */
union cavm_bbxe_abx_config_508
{
    uint64_t u;
    struct cavm_bbxe_abx_config_508_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig756         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig757         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig757         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig756         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_508_s cn; */
};
typedef union cavm_bbxe_abx_config_508 cavm_bbxe_abx_config_508_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_508(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_508(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302fe0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_508", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_508(a) cavm_bbxe_abx_config_508_t
#define bustype_CAVM_BBXE_ABX_CONFIG_508(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_508(a) "BBXE_ABX_CONFIG_508"
#define busnum_CAVM_BBXE_ABX_CONFIG_508(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_508(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_509
 *
 * BBX5 Configuration Register 509
 * Job Configuration
 */
union cavm_bbxe_abx_config_509
{
    uint64_t u;
    struct cavm_bbxe_abx_config_509_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig758         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig759         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig759         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig758         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_509_s cn; */
};
typedef union cavm_bbxe_abx_config_509 cavm_bbxe_abx_config_509_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_509(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_509(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302fe8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_509", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_509(a) cavm_bbxe_abx_config_509_t
#define bustype_CAVM_BBXE_ABX_CONFIG_509(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_509(a) "BBXE_ABX_CONFIG_509"
#define busnum_CAVM_BBXE_ABX_CONFIG_509(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_509(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_51
 *
 * BBX5 Configuration Register 51
 * Job Configuration
 */
union cavm_bbxe_abx_config_51
{
    uint64_t u;
    struct cavm_bbxe_abx_config_51_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig75          : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig75          : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_51_s cn; */
};
typedef union cavm_bbxe_abx_config_51 cavm_bbxe_abx_config_51_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_51(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_51(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302198ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_51", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_51(a) cavm_bbxe_abx_config_51_t
#define bustype_CAVM_BBXE_ABX_CONFIG_51(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_51(a) "BBXE_ABX_CONFIG_51"
#define busnum_CAVM_BBXE_ABX_CONFIG_51(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_51(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_510
 *
 * BBX5 Configuration Register 510
 * Job Configuration
 */
union cavm_bbxe_abx_config_510
{
    uint64_t u;
    struct cavm_bbxe_abx_config_510_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig760         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig761         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig761         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig760         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_510_s cn; */
};
typedef union cavm_bbxe_abx_config_510 cavm_bbxe_abx_config_510_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_510(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_510(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302ff0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_510", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_510(a) cavm_bbxe_abx_config_510_t
#define bustype_CAVM_BBXE_ABX_CONFIG_510(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_510(a) "BBXE_ABX_CONFIG_510"
#define busnum_CAVM_BBXE_ABX_CONFIG_510(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_510(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_511
 *
 * BBX5 Configuration Register 511
 * Job Configuration
 */
union cavm_bbxe_abx_config_511
{
    uint64_t u;
    struct cavm_bbxe_abx_config_511_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig762         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig763         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig763         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig762         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_511_s cn; */
};
typedef union cavm_bbxe_abx_config_511 cavm_bbxe_abx_config_511_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_511(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_511(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302ff8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_511", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_511(a) cavm_bbxe_abx_config_511_t
#define bustype_CAVM_BBXE_ABX_CONFIG_511(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_511(a) "BBXE_ABX_CONFIG_511"
#define busnum_CAVM_BBXE_ABX_CONFIG_511(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_511(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_512
 *
 * BBX5 Configuration Register 512
 * Job Configuration
 */
union cavm_bbxe_abx_config_512
{
    uint64_t u;
    struct cavm_bbxe_abx_config_512_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig764         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig765         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig765         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig764         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_512_s cn; */
};
typedef union cavm_bbxe_abx_config_512 cavm_bbxe_abx_config_512_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_512(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_512(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042303000ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_512", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_512(a) cavm_bbxe_abx_config_512_t
#define bustype_CAVM_BBXE_ABX_CONFIG_512(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_512(a) "BBXE_ABX_CONFIG_512"
#define busnum_CAVM_BBXE_ABX_CONFIG_512(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_512(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_513
 *
 * BBX5 Configuration Register 513
 * Job Configuration
 */
union cavm_bbxe_abx_config_513
{
    uint64_t u;
    struct cavm_bbxe_abx_config_513_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig766         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig767         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig767         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig766         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_513_s cn; */
};
typedef union cavm_bbxe_abx_config_513 cavm_bbxe_abx_config_513_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_513(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_513(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042303008ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_513", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_513(a) cavm_bbxe_abx_config_513_t
#define bustype_CAVM_BBXE_ABX_CONFIG_513(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_513(a) "BBXE_ABX_CONFIG_513"
#define busnum_CAVM_BBXE_ABX_CONFIG_513(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_513(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_514
 *
 * BBX5 Configuration Register 514
 * Job Configuration
 */
union cavm_bbxe_abx_config_514
{
    uint64_t u;
    struct cavm_bbxe_abx_config_514_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig768         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig769         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig769         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig768         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_514_s cn; */
};
typedef union cavm_bbxe_abx_config_514 cavm_bbxe_abx_config_514_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_514(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_514(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042303010ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_514", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_514(a) cavm_bbxe_abx_config_514_t
#define bustype_CAVM_BBXE_ABX_CONFIG_514(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_514(a) "BBXE_ABX_CONFIG_514"
#define busnum_CAVM_BBXE_ABX_CONFIG_514(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_514(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_515
 *
 * BBX5 Configuration Register 515
 * Job Configuration
 */
union cavm_bbxe_abx_config_515
{
    uint64_t u;
    struct cavm_bbxe_abx_config_515_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig770         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig771         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig771         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig770         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_515_s cn; */
};
typedef union cavm_bbxe_abx_config_515 cavm_bbxe_abx_config_515_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_515(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_515(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042303018ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_515", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_515(a) cavm_bbxe_abx_config_515_t
#define bustype_CAVM_BBXE_ABX_CONFIG_515(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_515(a) "BBXE_ABX_CONFIG_515"
#define busnum_CAVM_BBXE_ABX_CONFIG_515(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_515(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_516
 *
 * BBX5 Configuration Register 516
 * Job Configuration
 */
union cavm_bbxe_abx_config_516
{
    uint64_t u;
    struct cavm_bbxe_abx_config_516_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig772         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig773         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig773         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig772         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_516_s cn; */
};
typedef union cavm_bbxe_abx_config_516 cavm_bbxe_abx_config_516_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_516(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_516(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042303020ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_516", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_516(a) cavm_bbxe_abx_config_516_t
#define bustype_CAVM_BBXE_ABX_CONFIG_516(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_516(a) "BBXE_ABX_CONFIG_516"
#define busnum_CAVM_BBXE_ABX_CONFIG_516(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_516(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_517
 *
 * BBX5 Configuration Register 517
 * Job Configuration
 */
union cavm_bbxe_abx_config_517
{
    uint64_t u;
    struct cavm_bbxe_abx_config_517_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig774         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig775         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig775         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig774         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_517_s cn; */
};
typedef union cavm_bbxe_abx_config_517 cavm_bbxe_abx_config_517_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_517(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_517(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042303028ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_517", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_517(a) cavm_bbxe_abx_config_517_t
#define bustype_CAVM_BBXE_ABX_CONFIG_517(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_517(a) "BBXE_ABX_CONFIG_517"
#define busnum_CAVM_BBXE_ABX_CONFIG_517(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_517(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_518
 *
 * BBX5 Configuration Register 518
 * Job Configuration
 */
union cavm_bbxe_abx_config_518
{
    uint64_t u;
    struct cavm_bbxe_abx_config_518_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig776         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig777         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig777         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig776         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_518_s cn; */
};
typedef union cavm_bbxe_abx_config_518 cavm_bbxe_abx_config_518_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_518(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_518(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042303030ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_518", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_518(a) cavm_bbxe_abx_config_518_t
#define bustype_CAVM_BBXE_ABX_CONFIG_518(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_518(a) "BBXE_ABX_CONFIG_518"
#define busnum_CAVM_BBXE_ABX_CONFIG_518(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_518(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_519
 *
 * BBX5 Configuration Register 519
 * Job Configuration
 */
union cavm_bbxe_abx_config_519
{
    uint64_t u;
    struct cavm_bbxe_abx_config_519_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig778         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig779         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig779         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig778         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_519_s cn; */
};
typedef union cavm_bbxe_abx_config_519 cavm_bbxe_abx_config_519_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_519(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_519(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042303038ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_519", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_519(a) cavm_bbxe_abx_config_519_t
#define bustype_CAVM_BBXE_ABX_CONFIG_519(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_519(a) "BBXE_ABX_CONFIG_519"
#define busnum_CAVM_BBXE_ABX_CONFIG_519(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_519(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_52
 *
 * BBX5 Configuration Register 52
 * Job Configuration
 */
union cavm_bbxe_abx_config_52
{
    uint64_t u;
    struct cavm_bbxe_abx_config_52_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig76          : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig76          : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_52_s cn; */
};
typedef union cavm_bbxe_abx_config_52 cavm_bbxe_abx_config_52_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_52(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_52(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423021a0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_52", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_52(a) cavm_bbxe_abx_config_52_t
#define bustype_CAVM_BBXE_ABX_CONFIG_52(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_52(a) "BBXE_ABX_CONFIG_52"
#define busnum_CAVM_BBXE_ABX_CONFIG_52(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_52(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_520
 *
 * BBX5 Configuration Register 520
 * Job Configuration
 */
union cavm_bbxe_abx_config_520
{
    uint64_t u;
    struct cavm_bbxe_abx_config_520_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig780         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig781         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig781         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig780         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_520_s cn; */
};
typedef union cavm_bbxe_abx_config_520 cavm_bbxe_abx_config_520_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_520(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_520(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042303040ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_520", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_520(a) cavm_bbxe_abx_config_520_t
#define bustype_CAVM_BBXE_ABX_CONFIG_520(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_520(a) "BBXE_ABX_CONFIG_520"
#define busnum_CAVM_BBXE_ABX_CONFIG_520(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_520(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_521
 *
 * BBX5 Configuration Register 521
 * Job Configuration
 */
union cavm_bbxe_abx_config_521
{
    uint64_t u;
    struct cavm_bbxe_abx_config_521_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig782         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig783         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig783         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig782         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_521_s cn; */
};
typedef union cavm_bbxe_abx_config_521 cavm_bbxe_abx_config_521_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_521(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_521(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042303048ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_521", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_521(a) cavm_bbxe_abx_config_521_t
#define bustype_CAVM_BBXE_ABX_CONFIG_521(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_521(a) "BBXE_ABX_CONFIG_521"
#define busnum_CAVM_BBXE_ABX_CONFIG_521(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_521(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_522
 *
 * BBX5 Configuration Register 522
 * Job Configuration
 */
union cavm_bbxe_abx_config_522
{
    uint64_t u;
    struct cavm_bbxe_abx_config_522_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig784         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig785         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig785         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig784         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_522_s cn; */
};
typedef union cavm_bbxe_abx_config_522 cavm_bbxe_abx_config_522_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_522(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_522(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042303050ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_522", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_522(a) cavm_bbxe_abx_config_522_t
#define bustype_CAVM_BBXE_ABX_CONFIG_522(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_522(a) "BBXE_ABX_CONFIG_522"
#define busnum_CAVM_BBXE_ABX_CONFIG_522(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_522(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_523
 *
 * BBX5 Configuration Register 523
 * Job Configuration
 */
union cavm_bbxe_abx_config_523
{
    uint64_t u;
    struct cavm_bbxe_abx_config_523_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig786         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig787         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig787         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig786         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_523_s cn; */
};
typedef union cavm_bbxe_abx_config_523 cavm_bbxe_abx_config_523_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_523(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_523(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042303058ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_523", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_523(a) cavm_bbxe_abx_config_523_t
#define bustype_CAVM_BBXE_ABX_CONFIG_523(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_523(a) "BBXE_ABX_CONFIG_523"
#define busnum_CAVM_BBXE_ABX_CONFIG_523(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_523(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_524
 *
 * BBX5 Configuration Register 524
 * Job Configuration
 */
union cavm_bbxe_abx_config_524
{
    uint64_t u;
    struct cavm_bbxe_abx_config_524_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig788         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig789         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig789         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig788         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_524_s cn; */
};
typedef union cavm_bbxe_abx_config_524 cavm_bbxe_abx_config_524_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_524(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_524(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042303060ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_524", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_524(a) cavm_bbxe_abx_config_524_t
#define bustype_CAVM_BBXE_ABX_CONFIG_524(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_524(a) "BBXE_ABX_CONFIG_524"
#define busnum_CAVM_BBXE_ABX_CONFIG_524(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_524(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_525
 *
 * BBX5 Configuration Register 525
 * Job Configuration
 */
union cavm_bbxe_abx_config_525
{
    uint64_t u;
    struct cavm_bbxe_abx_config_525_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig790         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig791         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig791         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig790         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_525_s cn; */
};
typedef union cavm_bbxe_abx_config_525 cavm_bbxe_abx_config_525_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_525(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_525(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042303068ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_525", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_525(a) cavm_bbxe_abx_config_525_t
#define bustype_CAVM_BBXE_ABX_CONFIG_525(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_525(a) "BBXE_ABX_CONFIG_525"
#define busnum_CAVM_BBXE_ABX_CONFIG_525(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_525(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_526
 *
 * BBX5 Configuration Register 526
 * Job Configuration
 */
union cavm_bbxe_abx_config_526
{
    uint64_t u;
    struct cavm_bbxe_abx_config_526_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig792         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig793         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig793         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig792         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_526_s cn; */
};
typedef union cavm_bbxe_abx_config_526 cavm_bbxe_abx_config_526_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_526(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_526(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042303070ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_526", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_526(a) cavm_bbxe_abx_config_526_t
#define bustype_CAVM_BBXE_ABX_CONFIG_526(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_526(a) "BBXE_ABX_CONFIG_526"
#define busnum_CAVM_BBXE_ABX_CONFIG_526(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_526(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_527
 *
 * BBX5 Configuration Register 527
 * Job Configuration
 */
union cavm_bbxe_abx_config_527
{
    uint64_t u;
    struct cavm_bbxe_abx_config_527_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig794         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig795         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig795         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig794         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_527_s cn; */
};
typedef union cavm_bbxe_abx_config_527 cavm_bbxe_abx_config_527_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_527(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_527(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042303078ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_527", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_527(a) cavm_bbxe_abx_config_527_t
#define bustype_CAVM_BBXE_ABX_CONFIG_527(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_527(a) "BBXE_ABX_CONFIG_527"
#define busnum_CAVM_BBXE_ABX_CONFIG_527(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_527(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_528
 *
 * BBX5 Configuration Register 528
 * Job Configuration
 */
union cavm_bbxe_abx_config_528
{
    uint64_t u;
    struct cavm_bbxe_abx_config_528_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig796         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig797         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig797         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig796         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_528_s cn; */
};
typedef union cavm_bbxe_abx_config_528 cavm_bbxe_abx_config_528_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_528(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_528(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042303080ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_528", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_528(a) cavm_bbxe_abx_config_528_t
#define bustype_CAVM_BBXE_ABX_CONFIG_528(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_528(a) "BBXE_ABX_CONFIG_528"
#define busnum_CAVM_BBXE_ABX_CONFIG_528(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_528(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_529
 *
 * BBX5 Configuration Register 529
 * Job Configuration
 */
union cavm_bbxe_abx_config_529
{
    uint64_t u;
    struct cavm_bbxe_abx_config_529_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig798         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig799         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig799         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig798         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_529_s cn; */
};
typedef union cavm_bbxe_abx_config_529 cavm_bbxe_abx_config_529_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_529(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_529(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042303088ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_529", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_529(a) cavm_bbxe_abx_config_529_t
#define bustype_CAVM_BBXE_ABX_CONFIG_529(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_529(a) "BBXE_ABX_CONFIG_529"
#define busnum_CAVM_BBXE_ABX_CONFIG_529(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_529(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_53
 *
 * BBX5 Configuration Register 53
 * Job Configuration
 */
union cavm_bbxe_abx_config_53
{
    uint64_t u;
    struct cavm_bbxe_abx_config_53_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig77          : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig77          : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_53_s cn; */
};
typedef union cavm_bbxe_abx_config_53 cavm_bbxe_abx_config_53_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_53(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_53(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423021a8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_53", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_53(a) cavm_bbxe_abx_config_53_t
#define bustype_CAVM_BBXE_ABX_CONFIG_53(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_53(a) "BBXE_ABX_CONFIG_53"
#define busnum_CAVM_BBXE_ABX_CONFIG_53(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_53(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_530
 *
 * BBX5 Configuration Register 530
 * Job Configuration
 */
union cavm_bbxe_abx_config_530
{
    uint64_t u;
    struct cavm_bbxe_abx_config_530_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig800         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig801         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig801         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig800         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_530_s cn; */
};
typedef union cavm_bbxe_abx_config_530 cavm_bbxe_abx_config_530_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_530(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_530(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042303090ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_530", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_530(a) cavm_bbxe_abx_config_530_t
#define bustype_CAVM_BBXE_ABX_CONFIG_530(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_530(a) "BBXE_ABX_CONFIG_530"
#define busnum_CAVM_BBXE_ABX_CONFIG_530(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_530(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_531
 *
 * BBX5 Configuration Register 531
 * Job Configuration
 */
union cavm_bbxe_abx_config_531
{
    uint64_t u;
    struct cavm_bbxe_abx_config_531_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig802         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig803         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig803         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig802         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_531_s cn; */
};
typedef union cavm_bbxe_abx_config_531 cavm_bbxe_abx_config_531_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_531(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_531(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042303098ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_531", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_531(a) cavm_bbxe_abx_config_531_t
#define bustype_CAVM_BBXE_ABX_CONFIG_531(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_531(a) "BBXE_ABX_CONFIG_531"
#define busnum_CAVM_BBXE_ABX_CONFIG_531(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_531(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_532
 *
 * BBX5 Configuration Register 532
 * Job Configuration
 */
union cavm_bbxe_abx_config_532
{
    uint64_t u;
    struct cavm_bbxe_abx_config_532_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig804         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig805         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig805         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig804         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_532_s cn; */
};
typedef union cavm_bbxe_abx_config_532 cavm_bbxe_abx_config_532_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_532(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_532(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423030a0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_532", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_532(a) cavm_bbxe_abx_config_532_t
#define bustype_CAVM_BBXE_ABX_CONFIG_532(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_532(a) "BBXE_ABX_CONFIG_532"
#define busnum_CAVM_BBXE_ABX_CONFIG_532(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_532(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_533
 *
 * BBX5 Configuration Register 533
 * Job Configuration
 */
union cavm_bbxe_abx_config_533
{
    uint64_t u;
    struct cavm_bbxe_abx_config_533_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig806         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig807         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig807         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig806         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_533_s cn; */
};
typedef union cavm_bbxe_abx_config_533 cavm_bbxe_abx_config_533_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_533(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_533(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423030a8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_533", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_533(a) cavm_bbxe_abx_config_533_t
#define bustype_CAVM_BBXE_ABX_CONFIG_533(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_533(a) "BBXE_ABX_CONFIG_533"
#define busnum_CAVM_BBXE_ABX_CONFIG_533(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_533(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_534
 *
 * BBX5 Configuration Register 534
 * Job Configuration
 */
union cavm_bbxe_abx_config_534
{
    uint64_t u;
    struct cavm_bbxe_abx_config_534_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig808         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig809         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig809         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig808         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_534_s cn; */
};
typedef union cavm_bbxe_abx_config_534 cavm_bbxe_abx_config_534_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_534(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_534(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423030b0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_534", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_534(a) cavm_bbxe_abx_config_534_t
#define bustype_CAVM_BBXE_ABX_CONFIG_534(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_534(a) "BBXE_ABX_CONFIG_534"
#define busnum_CAVM_BBXE_ABX_CONFIG_534(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_534(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_535
 *
 * BBX5 Configuration Register 535
 * Job Configuration
 */
union cavm_bbxe_abx_config_535
{
    uint64_t u;
    struct cavm_bbxe_abx_config_535_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig810         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig811         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig811         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig810         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_535_s cn; */
};
typedef union cavm_bbxe_abx_config_535 cavm_bbxe_abx_config_535_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_535(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_535(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423030b8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_535", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_535(a) cavm_bbxe_abx_config_535_t
#define bustype_CAVM_BBXE_ABX_CONFIG_535(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_535(a) "BBXE_ABX_CONFIG_535"
#define busnum_CAVM_BBXE_ABX_CONFIG_535(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_535(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_536
 *
 * BBX5 Configuration Register 536
 * Job Configuration
 */
union cavm_bbxe_abx_config_536
{
    uint64_t u;
    struct cavm_bbxe_abx_config_536_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig812         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig813         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig813         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig812         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_536_s cn; */
};
typedef union cavm_bbxe_abx_config_536 cavm_bbxe_abx_config_536_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_536(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_536(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423030c0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_536", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_536(a) cavm_bbxe_abx_config_536_t
#define bustype_CAVM_BBXE_ABX_CONFIG_536(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_536(a) "BBXE_ABX_CONFIG_536"
#define busnum_CAVM_BBXE_ABX_CONFIG_536(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_536(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_537
 *
 * BBX5 Configuration Register 537
 * Job Configuration
 */
union cavm_bbxe_abx_config_537
{
    uint64_t u;
    struct cavm_bbxe_abx_config_537_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig814         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig815         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig815         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig814         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_537_s cn; */
};
typedef union cavm_bbxe_abx_config_537 cavm_bbxe_abx_config_537_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_537(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_537(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423030c8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_537", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_537(a) cavm_bbxe_abx_config_537_t
#define bustype_CAVM_BBXE_ABX_CONFIG_537(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_537(a) "BBXE_ABX_CONFIG_537"
#define busnum_CAVM_BBXE_ABX_CONFIG_537(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_537(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_538
 *
 * BBX5 Configuration Register 538
 * Job Configuration
 */
union cavm_bbxe_abx_config_538
{
    uint64_t u;
    struct cavm_bbxe_abx_config_538_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig816         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig817         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig817         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig816         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_538_s cn; */
};
typedef union cavm_bbxe_abx_config_538 cavm_bbxe_abx_config_538_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_538(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_538(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423030d0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_538", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_538(a) cavm_bbxe_abx_config_538_t
#define bustype_CAVM_BBXE_ABX_CONFIG_538(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_538(a) "BBXE_ABX_CONFIG_538"
#define busnum_CAVM_BBXE_ABX_CONFIG_538(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_538(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_539
 *
 * BBX5 Configuration Register 539
 * Job Configuration
 */
union cavm_bbxe_abx_config_539
{
    uint64_t u;
    struct cavm_bbxe_abx_config_539_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig818         : 26; /**< [ 63: 38](RO) SS_Reserved */
        uint64_t ss_res_sig819         : 38; /**< [ 37:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig819         : 38; /**< [ 37:  0](R/W) -- */
        uint64_t ss_res_sig818         : 26; /**< [ 63: 38](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_539_s cn; */
};
typedef union cavm_bbxe_abx_config_539 cavm_bbxe_abx_config_539_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_539(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_539(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423030d8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_539", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_539(a) cavm_bbxe_abx_config_539_t
#define bustype_CAVM_BBXE_ABX_CONFIG_539(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_539(a) "BBXE_ABX_CONFIG_539"
#define busnum_CAVM_BBXE_ABX_CONFIG_539(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_539(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_54
 *
 * BBX5 Configuration Register 54
 * Job Configuration
 */
union cavm_bbxe_abx_config_54
{
    uint64_t u;
    struct cavm_bbxe_abx_config_54_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig78          : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig78          : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_54_s cn; */
};
typedef union cavm_bbxe_abx_config_54 cavm_bbxe_abx_config_54_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_54(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_54(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423021b0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_54", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_54(a) cavm_bbxe_abx_config_54_t
#define bustype_CAVM_BBXE_ABX_CONFIG_54(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_54(a) "BBXE_ABX_CONFIG_54"
#define busnum_CAVM_BBXE_ABX_CONFIG_54(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_54(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_55
 *
 * BBX5 Configuration Register 55
 * Job Configuration
 */
union cavm_bbxe_abx_config_55
{
    uint64_t u;
    struct cavm_bbxe_abx_config_55_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig79          : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig79          : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_55_s cn; */
};
typedef union cavm_bbxe_abx_config_55 cavm_bbxe_abx_config_55_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_55(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_55(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423021b8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_55", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_55(a) cavm_bbxe_abx_config_55_t
#define bustype_CAVM_BBXE_ABX_CONFIG_55(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_55(a) "BBXE_ABX_CONFIG_55"
#define busnum_CAVM_BBXE_ABX_CONFIG_55(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_55(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_56
 *
 * BBX5 Configuration Register 56
 * Job Configuration
 */
union cavm_bbxe_abx_config_56
{
    uint64_t u;
    struct cavm_bbxe_abx_config_56_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig80          : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig80          : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_56_s cn; */
};
typedef union cavm_bbxe_abx_config_56 cavm_bbxe_abx_config_56_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_56(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_56(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423021c0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_56", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_56(a) cavm_bbxe_abx_config_56_t
#define bustype_CAVM_BBXE_ABX_CONFIG_56(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_56(a) "BBXE_ABX_CONFIG_56"
#define busnum_CAVM_BBXE_ABX_CONFIG_56(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_56(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_57
 *
 * BBX5 Configuration Register 57
 * Job Configuration
 */
union cavm_bbxe_abx_config_57
{
    uint64_t u;
    struct cavm_bbxe_abx_config_57_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig81          : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig81          : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_57_s cn; */
};
typedef union cavm_bbxe_abx_config_57 cavm_bbxe_abx_config_57_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_57(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_57(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423021c8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_57", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_57(a) cavm_bbxe_abx_config_57_t
#define bustype_CAVM_BBXE_ABX_CONFIG_57(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_57(a) "BBXE_ABX_CONFIG_57"
#define busnum_CAVM_BBXE_ABX_CONFIG_57(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_57(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_58
 *
 * BBX5 Configuration Register 58
 * Job Configuration
 */
union cavm_bbxe_abx_config_58
{
    uint64_t u;
    struct cavm_bbxe_abx_config_58_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig82          : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig82          : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_58_s cn; */
};
typedef union cavm_bbxe_abx_config_58 cavm_bbxe_abx_config_58_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_58(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_58(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423021d0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_58", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_58(a) cavm_bbxe_abx_config_58_t
#define bustype_CAVM_BBXE_ABX_CONFIG_58(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_58(a) "BBXE_ABX_CONFIG_58"
#define busnum_CAVM_BBXE_ABX_CONFIG_58(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_58(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_59
 *
 * BBX5 Configuration Register 59
 * Job Configuration
 */
union cavm_bbxe_abx_config_59
{
    uint64_t u;
    struct cavm_bbxe_abx_config_59_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig83          : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig83          : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_59_s cn; */
};
typedef union cavm_bbxe_abx_config_59 cavm_bbxe_abx_config_59_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_59(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_59(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423021d8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_59", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_59(a) cavm_bbxe_abx_config_59_t
#define bustype_CAVM_BBXE_ABX_CONFIG_59(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_59(a) "BBXE_ABX_CONFIG_59"
#define busnum_CAVM_BBXE_ABX_CONFIG_59(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_59(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_6
 *
 * BBX5 Configuration Register 6
 * Job Configuration
 */
union cavm_bbxe_abx_config_6
{
    uint64_t u;
    struct cavm_bbxe_abx_config_6_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig30          : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig30          : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_6_s cn; */
};
typedef union cavm_bbxe_abx_config_6 cavm_bbxe_abx_config_6_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_6(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_6(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302030ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_6", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_6(a) cavm_bbxe_abx_config_6_t
#define bustype_CAVM_BBXE_ABX_CONFIG_6(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_6(a) "BBXE_ABX_CONFIG_6"
#define busnum_CAVM_BBXE_ABX_CONFIG_6(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_6(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_60
 *
 * BBX5 Configuration Register 60
 * Job Configuration
 */
union cavm_bbxe_abx_config_60
{
    uint64_t u;
    struct cavm_bbxe_abx_config_60_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig84          : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig84          : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_60_s cn; */
};
typedef union cavm_bbxe_abx_config_60 cavm_bbxe_abx_config_60_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_60(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_60(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423021e0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_60", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_60(a) cavm_bbxe_abx_config_60_t
#define bustype_CAVM_BBXE_ABX_CONFIG_60(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_60(a) "BBXE_ABX_CONFIG_60"
#define busnum_CAVM_BBXE_ABX_CONFIG_60(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_60(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_61
 *
 * BBX5 Configuration Register 61
 * Job Configuration
 */
union cavm_bbxe_abx_config_61
{
    uint64_t u;
    struct cavm_bbxe_abx_config_61_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig85          : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig85          : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_61_s cn; */
};
typedef union cavm_bbxe_abx_config_61 cavm_bbxe_abx_config_61_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_61(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_61(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423021e8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_61", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_61(a) cavm_bbxe_abx_config_61_t
#define bustype_CAVM_BBXE_ABX_CONFIG_61(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_61(a) "BBXE_ABX_CONFIG_61"
#define busnum_CAVM_BBXE_ABX_CONFIG_61(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_61(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_62
 *
 * BBX5 Configuration Register 62
 * Job Configuration
 */
union cavm_bbxe_abx_config_62
{
    uint64_t u;
    struct cavm_bbxe_abx_config_62_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig86          : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig86          : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_62_s cn; */
};
typedef union cavm_bbxe_abx_config_62 cavm_bbxe_abx_config_62_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_62(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_62(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423021f0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_62", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_62(a) cavm_bbxe_abx_config_62_t
#define bustype_CAVM_BBXE_ABX_CONFIG_62(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_62(a) "BBXE_ABX_CONFIG_62"
#define busnum_CAVM_BBXE_ABX_CONFIG_62(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_62(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_63
 *
 * BBX5 Configuration Register 63
 * Job Configuration
 */
union cavm_bbxe_abx_config_63
{
    uint64_t u;
    struct cavm_bbxe_abx_config_63_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig87          : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig87          : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_63_s cn; */
};
typedef union cavm_bbxe_abx_config_63 cavm_bbxe_abx_config_63_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_63(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_63(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423021f8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_63", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_63(a) cavm_bbxe_abx_config_63_t
#define bustype_CAVM_BBXE_ABX_CONFIG_63(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_63(a) "BBXE_ABX_CONFIG_63"
#define busnum_CAVM_BBXE_ABX_CONFIG_63(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_63(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_64
 *
 * BBX5 Configuration Register 64
 * Job Configuration
 */
union cavm_bbxe_abx_config_64
{
    uint64_t u;
    struct cavm_bbxe_abx_config_64_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig88          : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig88          : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_64_s cn; */
};
typedef union cavm_bbxe_abx_config_64 cavm_bbxe_abx_config_64_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_64(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_64(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302200ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_64", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_64(a) cavm_bbxe_abx_config_64_t
#define bustype_CAVM_BBXE_ABX_CONFIG_64(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_64(a) "BBXE_ABX_CONFIG_64"
#define busnum_CAVM_BBXE_ABX_CONFIG_64(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_64(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_65
 *
 * BBX5 Configuration Register 65
 * Job Configuration
 */
union cavm_bbxe_abx_config_65
{
    uint64_t u;
    struct cavm_bbxe_abx_config_65_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig89          : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig89          : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_65_s cn; */
};
typedef union cavm_bbxe_abx_config_65 cavm_bbxe_abx_config_65_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_65(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_65(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302208ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_65", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_65(a) cavm_bbxe_abx_config_65_t
#define bustype_CAVM_BBXE_ABX_CONFIG_65(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_65(a) "BBXE_ABX_CONFIG_65"
#define busnum_CAVM_BBXE_ABX_CONFIG_65(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_65(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_66
 *
 * BBX5 Configuration Register 66
 * Job Configuration
 */
union cavm_bbxe_abx_config_66
{
    uint64_t u;
    struct cavm_bbxe_abx_config_66_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig90          : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig90          : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_66_s cn; */
};
typedef union cavm_bbxe_abx_config_66 cavm_bbxe_abx_config_66_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_66(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_66(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302210ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_66", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_66(a) cavm_bbxe_abx_config_66_t
#define bustype_CAVM_BBXE_ABX_CONFIG_66(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_66(a) "BBXE_ABX_CONFIG_66"
#define busnum_CAVM_BBXE_ABX_CONFIG_66(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_66(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_67
 *
 * BBX5 Configuration Register 67
 * Job Configuration
 */
union cavm_bbxe_abx_config_67
{
    uint64_t u;
    struct cavm_bbxe_abx_config_67_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig91          : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig91          : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_67_s cn; */
};
typedef union cavm_bbxe_abx_config_67 cavm_bbxe_abx_config_67_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_67(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_67(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302218ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_67", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_67(a) cavm_bbxe_abx_config_67_t
#define bustype_CAVM_BBXE_ABX_CONFIG_67(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_67(a) "BBXE_ABX_CONFIG_67"
#define busnum_CAVM_BBXE_ABX_CONFIG_67(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_67(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_68
 *
 * BBX5 Configuration Register 68
 * Job Configuration
 */
union cavm_bbxe_abx_config_68
{
    uint64_t u;
    struct cavm_bbxe_abx_config_68_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig92          : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig92          : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_68_s cn; */
};
typedef union cavm_bbxe_abx_config_68 cavm_bbxe_abx_config_68_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_68(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_68(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302220ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_68", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_68(a) cavm_bbxe_abx_config_68_t
#define bustype_CAVM_BBXE_ABX_CONFIG_68(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_68(a) "BBXE_ABX_CONFIG_68"
#define busnum_CAVM_BBXE_ABX_CONFIG_68(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_68(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_69
 *
 * BBX5 Configuration Register 69
 * Job Configuration
 */
union cavm_bbxe_abx_config_69
{
    uint64_t u;
    struct cavm_bbxe_abx_config_69_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig93          : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig93          : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_69_s cn; */
};
typedef union cavm_bbxe_abx_config_69 cavm_bbxe_abx_config_69_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_69(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_69(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302228ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_69", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_69(a) cavm_bbxe_abx_config_69_t
#define bustype_CAVM_BBXE_ABX_CONFIG_69(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_69(a) "BBXE_ABX_CONFIG_69"
#define busnum_CAVM_BBXE_ABX_CONFIG_69(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_69(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_7
 *
 * BBX5 Configuration Register 7
 * Job Configuration
 */
union cavm_bbxe_abx_config_7
{
    uint64_t u;
    struct cavm_bbxe_abx_config_7_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig31          : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig31          : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_7_s cn; */
};
typedef union cavm_bbxe_abx_config_7 cavm_bbxe_abx_config_7_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_7(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_7(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302038ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_7", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_7(a) cavm_bbxe_abx_config_7_t
#define bustype_CAVM_BBXE_ABX_CONFIG_7(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_7(a) "BBXE_ABX_CONFIG_7"
#define busnum_CAVM_BBXE_ABX_CONFIG_7(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_7(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_70
 *
 * BBX5 Configuration Register 70
 * Job Configuration
 */
union cavm_bbxe_abx_config_70
{
    uint64_t u;
    struct cavm_bbxe_abx_config_70_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig94          : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig94          : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_70_s cn; */
};
typedef union cavm_bbxe_abx_config_70 cavm_bbxe_abx_config_70_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_70(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_70(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302230ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_70", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_70(a) cavm_bbxe_abx_config_70_t
#define bustype_CAVM_BBXE_ABX_CONFIG_70(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_70(a) "BBXE_ABX_CONFIG_70"
#define busnum_CAVM_BBXE_ABX_CONFIG_70(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_70(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_71
 *
 * BBX5 Configuration Register 71
 * Job Configuration
 */
union cavm_bbxe_abx_config_71
{
    uint64_t u;
    struct cavm_bbxe_abx_config_71_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig95          : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig95          : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_71_s cn; */
};
typedef union cavm_bbxe_abx_config_71 cavm_bbxe_abx_config_71_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_71(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_71(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302238ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_71", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_71(a) cavm_bbxe_abx_config_71_t
#define bustype_CAVM_BBXE_ABX_CONFIG_71(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_71(a) "BBXE_ABX_CONFIG_71"
#define busnum_CAVM_BBXE_ABX_CONFIG_71(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_71(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_72
 *
 * BBX5 Configuration Register 72
 * Job Configuration
 */
union cavm_bbxe_abx_config_72
{
    uint64_t u;
    struct cavm_bbxe_abx_config_72_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig96          : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig96          : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_72_s cn; */
};
typedef union cavm_bbxe_abx_config_72 cavm_bbxe_abx_config_72_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_72(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_72(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302240ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_72", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_72(a) cavm_bbxe_abx_config_72_t
#define bustype_CAVM_BBXE_ABX_CONFIG_72(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_72(a) "BBXE_ABX_CONFIG_72"
#define busnum_CAVM_BBXE_ABX_CONFIG_72(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_72(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_73
 *
 * BBX5 Configuration Register 73
 * Job Configuration
 */
union cavm_bbxe_abx_config_73
{
    uint64_t u;
    struct cavm_bbxe_abx_config_73_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig97          : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig97          : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_73_s cn; */
};
typedef union cavm_bbxe_abx_config_73 cavm_bbxe_abx_config_73_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_73(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_73(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302248ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_73", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_73(a) cavm_bbxe_abx_config_73_t
#define bustype_CAVM_BBXE_ABX_CONFIG_73(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_73(a) "BBXE_ABX_CONFIG_73"
#define busnum_CAVM_BBXE_ABX_CONFIG_73(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_73(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_74
 *
 * BBX5 Configuration Register 74
 * Job Configuration
 */
union cavm_bbxe_abx_config_74
{
    uint64_t u;
    struct cavm_bbxe_abx_config_74_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig98          : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig98          : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_74_s cn; */
};
typedef union cavm_bbxe_abx_config_74 cavm_bbxe_abx_config_74_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_74(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_74(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302250ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_74", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_74(a) cavm_bbxe_abx_config_74_t
#define bustype_CAVM_BBXE_ABX_CONFIG_74(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_74(a) "BBXE_ABX_CONFIG_74"
#define busnum_CAVM_BBXE_ABX_CONFIG_74(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_74(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_75
 *
 * BBX5 Configuration Register 75
 * Job Configuration
 */
union cavm_bbxe_abx_config_75
{
    uint64_t u;
    struct cavm_bbxe_abx_config_75_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig99          : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig99          : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_75_s cn; */
};
typedef union cavm_bbxe_abx_config_75 cavm_bbxe_abx_config_75_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_75(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_75(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302258ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_75", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_75(a) cavm_bbxe_abx_config_75_t
#define bustype_CAVM_BBXE_ABX_CONFIG_75(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_75(a) "BBXE_ABX_CONFIG_75"
#define busnum_CAVM_BBXE_ABX_CONFIG_75(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_75(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_76
 *
 * BBX5 Configuration Register 76
 * Job Configuration
 */
union cavm_bbxe_abx_config_76
{
    uint64_t u;
    struct cavm_bbxe_abx_config_76_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig100         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig100         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_76_s cn; */
};
typedef union cavm_bbxe_abx_config_76 cavm_bbxe_abx_config_76_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_76(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_76(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302260ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_76", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_76(a) cavm_bbxe_abx_config_76_t
#define bustype_CAVM_BBXE_ABX_CONFIG_76(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_76(a) "BBXE_ABX_CONFIG_76"
#define busnum_CAVM_BBXE_ABX_CONFIG_76(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_76(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_77
 *
 * BBX5 Configuration Register 77
 * Job Configuration
 */
union cavm_bbxe_abx_config_77
{
    uint64_t u;
    struct cavm_bbxe_abx_config_77_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig101         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig101         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_77_s cn; */
};
typedef union cavm_bbxe_abx_config_77 cavm_bbxe_abx_config_77_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_77(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_77(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302268ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_77", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_77(a) cavm_bbxe_abx_config_77_t
#define bustype_CAVM_BBXE_ABX_CONFIG_77(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_77(a) "BBXE_ABX_CONFIG_77"
#define busnum_CAVM_BBXE_ABX_CONFIG_77(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_77(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_78
 *
 * BBX5 Configuration Register 78
 * Job Configuration
 */
union cavm_bbxe_abx_config_78
{
    uint64_t u;
    struct cavm_bbxe_abx_config_78_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig102         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig102         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_78_s cn; */
};
typedef union cavm_bbxe_abx_config_78 cavm_bbxe_abx_config_78_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_78(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_78(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302270ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_78", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_78(a) cavm_bbxe_abx_config_78_t
#define bustype_CAVM_BBXE_ABX_CONFIG_78(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_78(a) "BBXE_ABX_CONFIG_78"
#define busnum_CAVM_BBXE_ABX_CONFIG_78(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_78(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_79
 *
 * BBX5 Configuration Register 79
 * Job Configuration
 */
union cavm_bbxe_abx_config_79
{
    uint64_t u;
    struct cavm_bbxe_abx_config_79_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig103         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig103         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_79_s cn; */
};
typedef union cavm_bbxe_abx_config_79 cavm_bbxe_abx_config_79_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_79(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_79(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302278ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_79", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_79(a) cavm_bbxe_abx_config_79_t
#define bustype_CAVM_BBXE_ABX_CONFIG_79(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_79(a) "BBXE_ABX_CONFIG_79"
#define busnum_CAVM_BBXE_ABX_CONFIG_79(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_79(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_8
 *
 * BBX5 Configuration Register 8
 * Job Configuration
 */
union cavm_bbxe_abx_config_8
{
    uint64_t u;
    struct cavm_bbxe_abx_config_8_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig32          : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig32          : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_8_s cn; */
};
typedef union cavm_bbxe_abx_config_8 cavm_bbxe_abx_config_8_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_8(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_8(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302040ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_8", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_8(a) cavm_bbxe_abx_config_8_t
#define bustype_CAVM_BBXE_ABX_CONFIG_8(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_8(a) "BBXE_ABX_CONFIG_8"
#define busnum_CAVM_BBXE_ABX_CONFIG_8(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_8(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_80
 *
 * BBX5 Configuration Register 80
 * Job Configuration
 */
union cavm_bbxe_abx_config_80
{
    uint64_t u;
    struct cavm_bbxe_abx_config_80_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig104         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig104         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_80_s cn; */
};
typedef union cavm_bbxe_abx_config_80 cavm_bbxe_abx_config_80_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_80(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_80(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302280ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_80", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_80(a) cavm_bbxe_abx_config_80_t
#define bustype_CAVM_BBXE_ABX_CONFIG_80(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_80(a) "BBXE_ABX_CONFIG_80"
#define busnum_CAVM_BBXE_ABX_CONFIG_80(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_80(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_81
 *
 * BBX5 Configuration Register 81
 * Job Configuration
 */
union cavm_bbxe_abx_config_81
{
    uint64_t u;
    struct cavm_bbxe_abx_config_81_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig105         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig105         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_81_s cn; */
};
typedef union cavm_bbxe_abx_config_81 cavm_bbxe_abx_config_81_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_81(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_81(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302288ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_81", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_81(a) cavm_bbxe_abx_config_81_t
#define bustype_CAVM_BBXE_ABX_CONFIG_81(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_81(a) "BBXE_ABX_CONFIG_81"
#define busnum_CAVM_BBXE_ABX_CONFIG_81(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_81(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_82
 *
 * BBX5 Configuration Register 82
 * Job Configuration
 */
union cavm_bbxe_abx_config_82
{
    uint64_t u;
    struct cavm_bbxe_abx_config_82_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig106         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig106         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_82_s cn; */
};
typedef union cavm_bbxe_abx_config_82 cavm_bbxe_abx_config_82_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_82(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_82(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302290ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_82", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_82(a) cavm_bbxe_abx_config_82_t
#define bustype_CAVM_BBXE_ABX_CONFIG_82(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_82(a) "BBXE_ABX_CONFIG_82"
#define busnum_CAVM_BBXE_ABX_CONFIG_82(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_82(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_83
 *
 * BBX5 Configuration Register 83
 * Job Configuration
 */
union cavm_bbxe_abx_config_83
{
    uint64_t u;
    struct cavm_bbxe_abx_config_83_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig107         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig107         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_83_s cn; */
};
typedef union cavm_bbxe_abx_config_83 cavm_bbxe_abx_config_83_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_83(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_83(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302298ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_83", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_83(a) cavm_bbxe_abx_config_83_t
#define bustype_CAVM_BBXE_ABX_CONFIG_83(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_83(a) "BBXE_ABX_CONFIG_83"
#define busnum_CAVM_BBXE_ABX_CONFIG_83(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_83(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_84
 *
 * BBX5 Configuration Register 84
 * Job Configuration
 */
union cavm_bbxe_abx_config_84
{
    uint64_t u;
    struct cavm_bbxe_abx_config_84_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig108         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig108         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_84_s cn; */
};
typedef union cavm_bbxe_abx_config_84 cavm_bbxe_abx_config_84_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_84(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_84(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423022a0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_84", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_84(a) cavm_bbxe_abx_config_84_t
#define bustype_CAVM_BBXE_ABX_CONFIG_84(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_84(a) "BBXE_ABX_CONFIG_84"
#define busnum_CAVM_BBXE_ABX_CONFIG_84(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_84(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_85
 *
 * BBX5 Configuration Register 85
 * Job Configuration
 */
union cavm_bbxe_abx_config_85
{
    uint64_t u;
    struct cavm_bbxe_abx_config_85_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig109         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig109         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_85_s cn; */
};
typedef union cavm_bbxe_abx_config_85 cavm_bbxe_abx_config_85_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_85(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_85(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423022a8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_85", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_85(a) cavm_bbxe_abx_config_85_t
#define bustype_CAVM_BBXE_ABX_CONFIG_85(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_85(a) "BBXE_ABX_CONFIG_85"
#define busnum_CAVM_BBXE_ABX_CONFIG_85(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_85(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_86
 *
 * BBX5 Configuration Register 86
 * Job Configuration
 */
union cavm_bbxe_abx_config_86
{
    uint64_t u;
    struct cavm_bbxe_abx_config_86_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig110         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig110         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_86_s cn; */
};
typedef union cavm_bbxe_abx_config_86 cavm_bbxe_abx_config_86_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_86(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_86(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423022b0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_86", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_86(a) cavm_bbxe_abx_config_86_t
#define bustype_CAVM_BBXE_ABX_CONFIG_86(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_86(a) "BBXE_ABX_CONFIG_86"
#define busnum_CAVM_BBXE_ABX_CONFIG_86(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_86(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_87
 *
 * BBX5 Configuration Register 87
 * Job Configuration
 */
union cavm_bbxe_abx_config_87
{
    uint64_t u;
    struct cavm_bbxe_abx_config_87_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig111         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig111         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_87_s cn; */
};
typedef union cavm_bbxe_abx_config_87 cavm_bbxe_abx_config_87_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_87(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_87(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423022b8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_87", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_87(a) cavm_bbxe_abx_config_87_t
#define bustype_CAVM_BBXE_ABX_CONFIG_87(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_87(a) "BBXE_ABX_CONFIG_87"
#define busnum_CAVM_BBXE_ABX_CONFIG_87(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_87(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_88
 *
 * BBX5 Configuration Register 88
 * Job Configuration
 */
union cavm_bbxe_abx_config_88
{
    uint64_t u;
    struct cavm_bbxe_abx_config_88_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig112         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig112         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_88_s cn; */
};
typedef union cavm_bbxe_abx_config_88 cavm_bbxe_abx_config_88_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_88(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_88(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423022c0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_88", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_88(a) cavm_bbxe_abx_config_88_t
#define bustype_CAVM_BBXE_ABX_CONFIG_88(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_88(a) "BBXE_ABX_CONFIG_88"
#define busnum_CAVM_BBXE_ABX_CONFIG_88(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_88(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_89
 *
 * BBX5 Configuration Register 89
 * Job Configuration
 */
union cavm_bbxe_abx_config_89
{
    uint64_t u;
    struct cavm_bbxe_abx_config_89_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig113         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig113         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_89_s cn; */
};
typedef union cavm_bbxe_abx_config_89 cavm_bbxe_abx_config_89_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_89(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_89(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423022c8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_89", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_89(a) cavm_bbxe_abx_config_89_t
#define bustype_CAVM_BBXE_ABX_CONFIG_89(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_89(a) "BBXE_ABX_CONFIG_89"
#define busnum_CAVM_BBXE_ABX_CONFIG_89(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_89(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_9
 *
 * BBX5 Configuration Register 9
 * Job Configuration
 */
union cavm_bbxe_abx_config_9
{
    uint64_t u;
    struct cavm_bbxe_abx_config_9_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig33          : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig33          : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_9_s cn; */
};
typedef union cavm_bbxe_abx_config_9 cavm_bbxe_abx_config_9_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_9(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_9(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302048ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_9", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_9(a) cavm_bbxe_abx_config_9_t
#define bustype_CAVM_BBXE_ABX_CONFIG_9(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_9(a) "BBXE_ABX_CONFIG_9"
#define busnum_CAVM_BBXE_ABX_CONFIG_9(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_9(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_90
 *
 * BBX5 Configuration Register 90
 * Job Configuration
 */
union cavm_bbxe_abx_config_90
{
    uint64_t u;
    struct cavm_bbxe_abx_config_90_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig114         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig114         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_90_s cn; */
};
typedef union cavm_bbxe_abx_config_90 cavm_bbxe_abx_config_90_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_90(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_90(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423022d0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_90", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_90(a) cavm_bbxe_abx_config_90_t
#define bustype_CAVM_BBXE_ABX_CONFIG_90(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_90(a) "BBXE_ABX_CONFIG_90"
#define busnum_CAVM_BBXE_ABX_CONFIG_90(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_90(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_91
 *
 * BBX5 Configuration Register 91
 * Job Configuration
 */
union cavm_bbxe_abx_config_91
{
    uint64_t u;
    struct cavm_bbxe_abx_config_91_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig115         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig115         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_91_s cn; */
};
typedef union cavm_bbxe_abx_config_91 cavm_bbxe_abx_config_91_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_91(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_91(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423022d8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_91", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_91(a) cavm_bbxe_abx_config_91_t
#define bustype_CAVM_BBXE_ABX_CONFIG_91(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_91(a) "BBXE_ABX_CONFIG_91"
#define busnum_CAVM_BBXE_ABX_CONFIG_91(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_91(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_92
 *
 * BBX5 Configuration Register 92
 * Job Configuration
 */
union cavm_bbxe_abx_config_92
{
    uint64_t u;
    struct cavm_bbxe_abx_config_92_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig116         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig116         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_92_s cn; */
};
typedef union cavm_bbxe_abx_config_92 cavm_bbxe_abx_config_92_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_92(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_92(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423022e0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_92", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_92(a) cavm_bbxe_abx_config_92_t
#define bustype_CAVM_BBXE_ABX_CONFIG_92(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_92(a) "BBXE_ABX_CONFIG_92"
#define busnum_CAVM_BBXE_ABX_CONFIG_92(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_92(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_93
 *
 * BBX5 Configuration Register 93
 * Job Configuration
 */
union cavm_bbxe_abx_config_93
{
    uint64_t u;
    struct cavm_bbxe_abx_config_93_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig117         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig117         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_93_s cn; */
};
typedef union cavm_bbxe_abx_config_93 cavm_bbxe_abx_config_93_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_93(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_93(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423022e8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_93", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_93(a) cavm_bbxe_abx_config_93_t
#define bustype_CAVM_BBXE_ABX_CONFIG_93(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_93(a) "BBXE_ABX_CONFIG_93"
#define busnum_CAVM_BBXE_ABX_CONFIG_93(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_93(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_94
 *
 * BBX5 Configuration Register 94
 * Job Configuration
 */
union cavm_bbxe_abx_config_94
{
    uint64_t u;
    struct cavm_bbxe_abx_config_94_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig118         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig118         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_94_s cn; */
};
typedef union cavm_bbxe_abx_config_94 cavm_bbxe_abx_config_94_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_94(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_94(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423022f0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_94", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_94(a) cavm_bbxe_abx_config_94_t
#define bustype_CAVM_BBXE_ABX_CONFIG_94(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_94(a) "BBXE_ABX_CONFIG_94"
#define busnum_CAVM_BBXE_ABX_CONFIG_94(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_94(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_95
 *
 * BBX5 Configuration Register 95
 * Job Configuration
 */
union cavm_bbxe_abx_config_95
{
    uint64_t u;
    struct cavm_bbxe_abx_config_95_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig119         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig119         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_95_s cn; */
};
typedef union cavm_bbxe_abx_config_95 cavm_bbxe_abx_config_95_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_95(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_95(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0423022f8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_95", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_95(a) cavm_bbxe_abx_config_95_t
#define bustype_CAVM_BBXE_ABX_CONFIG_95(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_95(a) "BBXE_ABX_CONFIG_95"
#define busnum_CAVM_BBXE_ABX_CONFIG_95(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_95(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_96
 *
 * BBX5 Configuration Register 96
 * Job Configuration
 */
union cavm_bbxe_abx_config_96
{
    uint64_t u;
    struct cavm_bbxe_abx_config_96_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig120         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig120         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_96_s cn; */
};
typedef union cavm_bbxe_abx_config_96 cavm_bbxe_abx_config_96_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_96(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_96(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302300ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_96", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_96(a) cavm_bbxe_abx_config_96_t
#define bustype_CAVM_BBXE_ABX_CONFIG_96(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_96(a) "BBXE_ABX_CONFIG_96"
#define busnum_CAVM_BBXE_ABX_CONFIG_96(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_96(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_97
 *
 * BBX5 Configuration Register 97
 * Job Configuration
 */
union cavm_bbxe_abx_config_97
{
    uint64_t u;
    struct cavm_bbxe_abx_config_97_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig121         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig121         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_97_s cn; */
};
typedef union cavm_bbxe_abx_config_97 cavm_bbxe_abx_config_97_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_97(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_97(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302308ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_97", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_97(a) cavm_bbxe_abx_config_97_t
#define bustype_CAVM_BBXE_ABX_CONFIG_97(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_97(a) "BBXE_ABX_CONFIG_97"
#define busnum_CAVM_BBXE_ABX_CONFIG_97(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_97(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_98
 *
 * BBX5 Configuration Register 98
 * Job Configuration
 */
union cavm_bbxe_abx_config_98
{
    uint64_t u;
    struct cavm_bbxe_abx_config_98_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig122         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig122         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_98_s cn; */
};
typedef union cavm_bbxe_abx_config_98 cavm_bbxe_abx_config_98_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_98(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_98(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302310ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_98", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_98(a) cavm_bbxe_abx_config_98_t
#define bustype_CAVM_BBXE_ABX_CONFIG_98(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_98(a) "BBXE_ABX_CONFIG_98"
#define busnum_CAVM_BBXE_ABX_CONFIG_98(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_98(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_config_99
 *
 * BBX5 Configuration Register 99
 * Job Configuration
 */
union cavm_bbxe_abx_config_99
{
    uint64_t u;
    struct cavm_bbxe_abx_config_99_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig123         : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t ss_res_sig123         : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_config_99_s cn; */
};
typedef union cavm_bbxe_abx_config_99 cavm_bbxe_abx_config_99_t;

static inline uint64_t CAVM_BBXE_ABX_CONFIG_99(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONFIG_99(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042302318ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONFIG_99", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONFIG_99(a) cavm_bbxe_abx_config_99_t
#define bustype_CAVM_BBXE_ABX_CONFIG_99(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONFIG_99(a) "BBXE_ABX_CONFIG_99"
#define busnum_CAVM_BBXE_ABX_CONFIG_99(a) (a)
#define arguments_CAVM_BBXE_ABX_CONFIG_99(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_control_main
 *
 * BBX5 Main Control Register
 * HAB Control
 */
union cavm_bbxe_abx_control_main
{
    uint64_t u;
    struct cavm_bbxe_abx_control_main_s
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
    /* struct cavm_bbxe_abx_control_main_s cn; */
};
typedef union cavm_bbxe_abx_control_main cavm_bbxe_abx_control_main_t;

static inline uint64_t CAVM_BBXE_ABX_CONTROL_MAIN(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONTROL_MAIN(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042300000ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONTROL_MAIN", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONTROL_MAIN(a) cavm_bbxe_abx_control_main_t
#define bustype_CAVM_BBXE_ABX_CONTROL_MAIN(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONTROL_MAIN(a) "BBXE_ABX_CONTROL_MAIN"
#define busnum_CAVM_BBXE_ABX_CONTROL_MAIN(a) (a)
#define arguments_CAVM_BBXE_ABX_CONTROL_MAIN(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_control_status
 *
 * BBX5 Status Register
 * HAB Control
 */
union cavm_bbxe_abx_control_status
{
    uint64_t u;
    struct cavm_bbxe_abx_control_status_s
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
    /* struct cavm_bbxe_abx_control_status_s cn; */
};
typedef union cavm_bbxe_abx_control_status cavm_bbxe_abx_control_status_t;

static inline uint64_t CAVM_BBXE_ABX_CONTROL_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_CONTROL_STATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042300018ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_CONTROL_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_CONTROL_STATUS(a) cavm_bbxe_abx_control_status_t
#define bustype_CAVM_BBXE_ABX_CONTROL_STATUS(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_CONTROL_STATUS(a) "BBXE_ABX_CONTROL_STATUS"
#define busnum_CAVM_BBXE_ABX_CONTROL_STATUS(a) (a)
#define arguments_CAVM_BBXE_ABX_CONTROL_STATUS(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_debug_0
 *
 * BBX5 Debug Registers
 * HAB information
 */
union cavm_bbxe_abx_debug_0
{
    uint64_t u;
    struct cavm_bbxe_abx_debug_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig13          : 32; /**< [ 63: 32](RO) SS_Reserved */
        uint64_t hab_info              : 32; /**< [ 31:  0](RO) BBX5 RTL Version */
#else /* Word 0 - Little Endian */
        uint64_t hab_info              : 32; /**< [ 31:  0](RO) BBX5 RTL Version */
        uint64_t ss_res_sig13          : 32; /**< [ 63: 32](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_debug_0_s cn; */
};
typedef union cavm_bbxe_abx_debug_0 cavm_bbxe_abx_debug_0_t;

static inline uint64_t CAVM_BBXE_ABX_DEBUG_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_DEBUG_0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042301000ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_DEBUG_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_DEBUG_0(a) cavm_bbxe_abx_debug_0_t
#define bustype_CAVM_BBXE_ABX_DEBUG_0(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_DEBUG_0(a) "BBXE_ABX_DEBUG_0"
#define busnum_CAVM_BBXE_ABX_DEBUG_0(a) (a)
#define arguments_CAVM_BBXE_ABX_DEBUG_0(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_debug_01
 *
 * BBX5 Debug Registers
 * AB Processing Throught for job
 */
union cavm_bbxe_abx_debug_01
{
    uint64_t u;
    struct cavm_bbxe_abx_debug_01_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t read_if_throughput_job : 32;/**< [ 63: 32](RO) clock count with 1.2Ghz through the Read IF */
        uint64_t opr_throughput        : 32; /**< [ 31:  0](RO) clock count with 1.2Ghz through the Write IF */
#else /* Word 0 - Little Endian */
        uint64_t opr_throughput        : 32; /**< [ 31:  0](RO) clock count with 1.2Ghz through the Write IF */
        uint64_t read_if_throughput_job : 32;/**< [ 63: 32](RO) clock count with 1.2Ghz through the Read IF */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_debug_01_s cn; */
};
typedef union cavm_bbxe_abx_debug_01 cavm_bbxe_abx_debug_01_t;

static inline uint64_t CAVM_BBXE_ABX_DEBUG_01(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_DEBUG_01(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042301008ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_DEBUG_01", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_DEBUG_01(a) cavm_bbxe_abx_debug_01_t
#define bustype_CAVM_BBXE_ABX_DEBUG_01(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_DEBUG_01(a) "BBXE_ABX_DEBUG_01"
#define busnum_CAVM_BBXE_ABX_DEBUG_01(a) (a)
#define arguments_CAVM_BBXE_ABX_DEBUG_01(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_error_register_0
 *
 * BBX5 Error Registers
 * HAB Control
 */
union cavm_bbxe_abx_error_register_0
{
    uint64_t u;
    struct cavm_bbxe_abx_error_register_0_s
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
    /* struct cavm_bbxe_abx_error_register_0_s cn; */
};
typedef union cavm_bbxe_abx_error_register_0 cavm_bbxe_abx_error_register_0_t;

static inline uint64_t CAVM_BBXE_ABX_ERROR_REGISTER_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_ERROR_REGISTER_0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042300030ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_ERROR_REGISTER_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_ERROR_REGISTER_0(a) cavm_bbxe_abx_error_register_0_t
#define bustype_CAVM_BBXE_ABX_ERROR_REGISTER_0(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_ERROR_REGISTER_0(a) "BBXE_ABX_ERROR_REGISTER_0"
#define busnum_CAVM_BBXE_ABX_ERROR_REGISTER_0(a) (a)
#define arguments_CAVM_BBXE_ABX_ERROR_REGISTER_0(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_error_register_1
 *
 * BBX5 Error Registers
 * HAB Control
 */
union cavm_bbxe_abx_error_register_1
{
    uint64_t u;
    struct cavm_bbxe_abx_error_register_1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig7           : 32; /**< [ 63: 32](RO) SS_Reserved */
        uint64_t inter_err_job_id      : 16; /**< [ 31: 16](R/W1C) internal error jib ID for Error Register 1 */
        uint64_t ss_res_sig8           : 8;  /**< [ 15:  8](RO) SS_Reserved */
        uint64_t sample_size_mis_match : 1;  /**< [  7:  7](R/W1C) sample data size mis-match for setting size */
        uint64_t ss_res_sig9           : 6;  /**< [  6:  1](RO) SS_Reserved */
        uint64_t job_data_size_over    : 1;  /**< [  0:  0](R/W1C) Data size over */
#else /* Word 0 - Little Endian */
        uint64_t job_data_size_over    : 1;  /**< [  0:  0](R/W1C) Data size over */
        uint64_t ss_res_sig9           : 6;  /**< [  6:  1](RO) SS_Reserved */
        uint64_t sample_size_mis_match : 1;  /**< [  7:  7](R/W1C) sample data size mis-match for setting size */
        uint64_t ss_res_sig8           : 8;  /**< [ 15:  8](RO) SS_Reserved */
        uint64_t inter_err_job_id      : 16; /**< [ 31: 16](R/W1C) internal error jib ID for Error Register 1 */
        uint64_t ss_res_sig7           : 32; /**< [ 63: 32](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_error_register_1_s cn; */
};
typedef union cavm_bbxe_abx_error_register_1 cavm_bbxe_abx_error_register_1_t;

static inline uint64_t CAVM_BBXE_ABX_ERROR_REGISTER_1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_ERROR_REGISTER_1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042300038ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_ERROR_REGISTER_1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_ERROR_REGISTER_1(a) cavm_bbxe_abx_error_register_1_t
#define bustype_CAVM_BBXE_ABX_ERROR_REGISTER_1(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_ERROR_REGISTER_1(a) "BBXE_ABX_ERROR_REGISTER_1"
#define busnum_CAVM_BBXE_ABX_ERROR_REGISTER_1(a) (a)
#define arguments_CAVM_BBXE_ABX_ERROR_REGISTER_1(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_error_register_2
 *
 * BBX5 Error Registers
 * HAB Control
 */
union cavm_bbxe_abx_error_register_2
{
    uint64_t u;
    struct cavm_bbxe_abx_error_register_2_s
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
    /* struct cavm_bbxe_abx_error_register_2_s cn; */
};
typedef union cavm_bbxe_abx_error_register_2 cavm_bbxe_abx_error_register_2_t;

static inline uint64_t CAVM_BBXE_ABX_ERROR_REGISTER_2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_ERROR_REGISTER_2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042300040ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_ERROR_REGISTER_2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_ERROR_REGISTER_2(a) cavm_bbxe_abx_error_register_2_t
#define bustype_CAVM_BBXE_ABX_ERROR_REGISTER_2(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_ERROR_REGISTER_2(a) "BBXE_ABX_ERROR_REGISTER_2"
#define busnum_CAVM_BBXE_ABX_ERROR_REGISTER_2(a) (a)
#define arguments_CAVM_BBXE_ABX_ERROR_REGISTER_2(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxe_ab#_error_register_3
 *
 * BBX5 Error Registers
 * HAB Control
 */
union cavm_bbxe_abx_error_register_3
{
    uint64_t u;
    struct cavm_bbxe_abx_error_register_3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ss_res_sig12          : 63; /**< [ 63:  1](RO) SS_Reserved */
        uint64_t hab_error_en          : 1;  /**< [  0:  0](R/W) HAB specific Error Enable */
#else /* Word 0 - Little Endian */
        uint64_t hab_error_en          : 1;  /**< [  0:  0](R/W) HAB specific Error Enable */
        uint64_t ss_res_sig12          : 63; /**< [ 63:  1](RO) SS_Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxe_abx_error_register_3_s cn; */
};
typedef union cavm_bbxe_abx_error_register_3 cavm_bbxe_abx_error_register_3_t;

static inline uint64_t CAVM_BBXE_ABX_ERROR_REGISTER_3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXE_ABX_ERROR_REGISTER_3(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042300048ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXE_ABX_ERROR_REGISTER_3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXE_ABX_ERROR_REGISTER_3(a) cavm_bbxe_abx_error_register_3_t
#define bustype_CAVM_BBXE_ABX_ERROR_REGISTER_3(a) CSR_TYPE_RSL
#define basename_CAVM_BBXE_ABX_ERROR_REGISTER_3(a) "BBXE_ABX_ERROR_REGISTER_3"
#define busnum_CAVM_BBXE_ABX_ERROR_REGISTER_3(a) (a)
#define arguments_CAVM_BBXE_ABX_ERROR_REGISTER_3(a) (a),-1,-1,-1

#endif /* __CAVM_CSRS_BBXE_H__ */
