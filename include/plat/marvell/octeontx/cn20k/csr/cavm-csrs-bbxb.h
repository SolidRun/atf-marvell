#ifndef __CAVM_CSRS_BBXB_H__
#define __CAVM_CSRS_BBXB_H__
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
 * BBXB.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Register (RSL) bbxb_ab#_config_00
 *
 * BBX2 Configuration Register 0
 * Job Configuration
 */
union cavm_bbxb_abx_config_00
{
    uint64_t u;
    struct cavm_bbxb_abx_config_00_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_34_63        : 30;
        uint64_t config_00_0           : 2;  /**< [ 33: 32](R/W) -- */
        uint64_t reserved_19_31        : 13;
        uint64_t config_00_1           : 2;  /**< [ 18: 17](R/W) -- */
        uint64_t config_00_2           : 1;  /**< [ 16: 16](R/W) -- */
        uint64_t reserved_12_15        : 4;
        uint64_t config_00_3           : 4;  /**< [ 11:  8](R/W) -- */
        uint64_t reserved_5_7          : 3;
        uint64_t config_00_4           : 5;  /**< [  4:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_00_4           : 5;  /**< [  4:  0](R/W) -- */
        uint64_t reserved_5_7          : 3;
        uint64_t config_00_3           : 4;  /**< [ 11:  8](R/W) -- */
        uint64_t reserved_12_15        : 4;
        uint64_t config_00_2           : 1;  /**< [ 16: 16](R/W) -- */
        uint64_t config_00_1           : 2;  /**< [ 18: 17](R/W) -- */
        uint64_t reserved_19_31        : 13;
        uint64_t config_00_0           : 2;  /**< [ 33: 32](R/W) -- */
        uint64_t reserved_34_63        : 30;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_00_s cn; */
};
typedef union cavm_bbxb_abx_config_00 cavm_bbxb_abx_config_00_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_00(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_00(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042202000ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_00", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_00(a) cavm_bbxb_abx_config_00_t
#define bustype_CAVM_BBXB_ABX_CONFIG_00(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_00(a) "BBXB_ABX_CONFIG_00"
#define busnum_CAVM_BBXB_ABX_CONFIG_00(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_00(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_01
 *
 * BBX2 Configuration Register 1
 * Job Configuration
 */
union cavm_bbxb_abx_config_01
{
    uint64_t u;
    struct cavm_bbxb_abx_config_01_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_01             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_01             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_01_s cn; */
};
typedef union cavm_bbxb_abx_config_01 cavm_bbxb_abx_config_01_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_01(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_01(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042202008ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_01", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_01(a) cavm_bbxb_abx_config_01_t
#define bustype_CAVM_BBXB_ABX_CONFIG_01(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_01(a) "BBXB_ABX_CONFIG_01"
#define busnum_CAVM_BBXB_ABX_CONFIG_01(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_01(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_02
 *
 * BBX2 Configuration Register 2
 * Job Configuration
 */
union cavm_bbxb_abx_config_02
{
    uint64_t u;
    struct cavm_bbxb_abx_config_02_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_02             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_02             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_02_s cn; */
};
typedef union cavm_bbxb_abx_config_02 cavm_bbxb_abx_config_02_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_02(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_02(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042202010ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_02", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_02(a) cavm_bbxb_abx_config_02_t
#define bustype_CAVM_BBXB_ABX_CONFIG_02(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_02(a) "BBXB_ABX_CONFIG_02"
#define busnum_CAVM_BBXB_ABX_CONFIG_02(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_02(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_03
 *
 * BBX2 Configuration Register 3
 * Job Configuration
 */
union cavm_bbxb_abx_config_03
{
    uint64_t u;
    struct cavm_bbxb_abx_config_03_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_03             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_03             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_03_s cn; */
};
typedef union cavm_bbxb_abx_config_03 cavm_bbxb_abx_config_03_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_03(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_03(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042202018ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_03", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_03(a) cavm_bbxb_abx_config_03_t
#define bustype_CAVM_BBXB_ABX_CONFIG_03(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_03(a) "BBXB_ABX_CONFIG_03"
#define busnum_CAVM_BBXB_ABX_CONFIG_03(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_03(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_04
 *
 * BBX2 Configuration Register 4
 * Job Configuration
 */
union cavm_bbxb_abx_config_04
{
    uint64_t u;
    struct cavm_bbxb_abx_config_04_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_04             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_04             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_04_s cn; */
};
typedef union cavm_bbxb_abx_config_04 cavm_bbxb_abx_config_04_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_04(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_04(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042202020ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_04", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_04(a) cavm_bbxb_abx_config_04_t
#define bustype_CAVM_BBXB_ABX_CONFIG_04(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_04(a) "BBXB_ABX_CONFIG_04"
#define busnum_CAVM_BBXB_ABX_CONFIG_04(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_04(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_05
 *
 * BBX2 Configuration Register 5
 * Job Configuration
 */
union cavm_bbxb_abx_config_05
{
    uint64_t u;
    struct cavm_bbxb_abx_config_05_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_05             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_05             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_05_s cn; */
};
typedef union cavm_bbxb_abx_config_05 cavm_bbxb_abx_config_05_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_05(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_05(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042202028ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_05", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_05(a) cavm_bbxb_abx_config_05_t
#define bustype_CAVM_BBXB_ABX_CONFIG_05(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_05(a) "BBXB_ABX_CONFIG_05"
#define busnum_CAVM_BBXB_ABX_CONFIG_05(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_05(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_06
 *
 * BBX2 Configuration Register 6
 * Job Configuration
 */
union cavm_bbxb_abx_config_06
{
    uint64_t u;
    struct cavm_bbxb_abx_config_06_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_06             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_06             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_06_s cn; */
};
typedef union cavm_bbxb_abx_config_06 cavm_bbxb_abx_config_06_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_06(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_06(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042202030ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_06", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_06(a) cavm_bbxb_abx_config_06_t
#define bustype_CAVM_BBXB_ABX_CONFIG_06(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_06(a) "BBXB_ABX_CONFIG_06"
#define busnum_CAVM_BBXB_ABX_CONFIG_06(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_06(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_07
 *
 * BBX2 Configuration Register 7
 * Job Configuration
 */
union cavm_bbxb_abx_config_07
{
    uint64_t u;
    struct cavm_bbxb_abx_config_07_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_07             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_07             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_07_s cn; */
};
typedef union cavm_bbxb_abx_config_07 cavm_bbxb_abx_config_07_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_07(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_07(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042202038ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_07", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_07(a) cavm_bbxb_abx_config_07_t
#define bustype_CAVM_BBXB_ABX_CONFIG_07(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_07(a) "BBXB_ABX_CONFIG_07"
#define busnum_CAVM_BBXB_ABX_CONFIG_07(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_07(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_08
 *
 * BBX2 Configuration Register 8
 * Job Configuration
 */
union cavm_bbxb_abx_config_08
{
    uint64_t u;
    struct cavm_bbxb_abx_config_08_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_08             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_08             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_08_s cn; */
};
typedef union cavm_bbxb_abx_config_08 cavm_bbxb_abx_config_08_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_08(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_08(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042202040ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_08", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_08(a) cavm_bbxb_abx_config_08_t
#define bustype_CAVM_BBXB_ABX_CONFIG_08(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_08(a) "BBXB_ABX_CONFIG_08"
#define busnum_CAVM_BBXB_ABX_CONFIG_08(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_08(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_09
 *
 * BBX2 Configuration Register 9
 * Job Configuration
 */
union cavm_bbxb_abx_config_09
{
    uint64_t u;
    struct cavm_bbxb_abx_config_09_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_09             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_09             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_09_s cn; */
};
typedef union cavm_bbxb_abx_config_09 cavm_bbxb_abx_config_09_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_09(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_09(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042202048ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_09", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_09(a) cavm_bbxb_abx_config_09_t
#define bustype_CAVM_BBXB_ABX_CONFIG_09(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_09(a) "BBXB_ABX_CONFIG_09"
#define busnum_CAVM_BBXB_ABX_CONFIG_09(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_09(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_10
 *
 * BBX2 Configuration Register 10
 * Job Configuration
 */
union cavm_bbxb_abx_config_10
{
    uint64_t u;
    struct cavm_bbxb_abx_config_10_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_10             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_10             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_10_s cn; */
};
typedef union cavm_bbxb_abx_config_10 cavm_bbxb_abx_config_10_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_10(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_10(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042202050ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_10", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_10(a) cavm_bbxb_abx_config_10_t
#define bustype_CAVM_BBXB_ABX_CONFIG_10(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_10(a) "BBXB_ABX_CONFIG_10"
#define busnum_CAVM_BBXB_ABX_CONFIG_10(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_10(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_11
 *
 * BBX2 Configuration Register 11
 * Job Configuration
 */
union cavm_bbxb_abx_config_11
{
    uint64_t u;
    struct cavm_bbxb_abx_config_11_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_11             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_11             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_11_s cn; */
};
typedef union cavm_bbxb_abx_config_11 cavm_bbxb_abx_config_11_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_11(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_11(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042202058ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_11", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_11(a) cavm_bbxb_abx_config_11_t
#define bustype_CAVM_BBXB_ABX_CONFIG_11(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_11(a) "BBXB_ABX_CONFIG_11"
#define busnum_CAVM_BBXB_ABX_CONFIG_11(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_11(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_12
 *
 * BBX2 Configuration Register 12
 * Job Configuration
 */
union cavm_bbxb_abx_config_12
{
    uint64_t u;
    struct cavm_bbxb_abx_config_12_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_12             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_12             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_12_s cn; */
};
typedef union cavm_bbxb_abx_config_12 cavm_bbxb_abx_config_12_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_12(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_12(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042202060ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_12", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_12(a) cavm_bbxb_abx_config_12_t
#define bustype_CAVM_BBXB_ABX_CONFIG_12(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_12(a) "BBXB_ABX_CONFIG_12"
#define busnum_CAVM_BBXB_ABX_CONFIG_12(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_12(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_13
 *
 * BBX2 Configuration Register 13
 * Job Configuration
 */
union cavm_bbxb_abx_config_13
{
    uint64_t u;
    struct cavm_bbxb_abx_config_13_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_13             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_13             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_13_s cn; */
};
typedef union cavm_bbxb_abx_config_13 cavm_bbxb_abx_config_13_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_13(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_13(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042202068ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_13", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_13(a) cavm_bbxb_abx_config_13_t
#define bustype_CAVM_BBXB_ABX_CONFIG_13(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_13(a) "BBXB_ABX_CONFIG_13"
#define busnum_CAVM_BBXB_ABX_CONFIG_13(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_13(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_14
 *
 * BBX2 Configuration Register 14
 * Job Configuration
 */
union cavm_bbxb_abx_config_14
{
    uint64_t u;
    struct cavm_bbxb_abx_config_14_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_14             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_14             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_14_s cn; */
};
typedef union cavm_bbxb_abx_config_14 cavm_bbxb_abx_config_14_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_14(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_14(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042202070ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_14", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_14(a) cavm_bbxb_abx_config_14_t
#define bustype_CAVM_BBXB_ABX_CONFIG_14(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_14(a) "BBXB_ABX_CONFIG_14"
#define busnum_CAVM_BBXB_ABX_CONFIG_14(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_14(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_15
 *
 * BBX2 Configuration Register 15
 * Job Configuration
 */
union cavm_bbxb_abx_config_15
{
    uint64_t u;
    struct cavm_bbxb_abx_config_15_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_15             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_15             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_15_s cn; */
};
typedef union cavm_bbxb_abx_config_15 cavm_bbxb_abx_config_15_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_15(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_15(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042202078ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_15", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_15(a) cavm_bbxb_abx_config_15_t
#define bustype_CAVM_BBXB_ABX_CONFIG_15(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_15(a) "BBXB_ABX_CONFIG_15"
#define busnum_CAVM_BBXB_ABX_CONFIG_15(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_15(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_16
 *
 * BBX2 Configuration Register 16
 * Job Configuration
 */
union cavm_bbxb_abx_config_16
{
    uint64_t u;
    struct cavm_bbxb_abx_config_16_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_16             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_16             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_16_s cn; */
};
typedef union cavm_bbxb_abx_config_16 cavm_bbxb_abx_config_16_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_16(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_16(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042202080ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_16", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_16(a) cavm_bbxb_abx_config_16_t
#define bustype_CAVM_BBXB_ABX_CONFIG_16(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_16(a) "BBXB_ABX_CONFIG_16"
#define busnum_CAVM_BBXB_ABX_CONFIG_16(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_16(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_17
 *
 * BBX2 Configuration Register 17
 * Job Configuration
 */
union cavm_bbxb_abx_config_17
{
    uint64_t u;
    struct cavm_bbxb_abx_config_17_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_17             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_17             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_17_s cn; */
};
typedef union cavm_bbxb_abx_config_17 cavm_bbxb_abx_config_17_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_17(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_17(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042202088ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_17", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_17(a) cavm_bbxb_abx_config_17_t
#define bustype_CAVM_BBXB_ABX_CONFIG_17(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_17(a) "BBXB_ABX_CONFIG_17"
#define busnum_CAVM_BBXB_ABX_CONFIG_17(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_17(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_18
 *
 * BBX2 Configuration Register 18
 * Job Configuration
 */
union cavm_bbxb_abx_config_18
{
    uint64_t u;
    struct cavm_bbxb_abx_config_18_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_18             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_18             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_18_s cn; */
};
typedef union cavm_bbxb_abx_config_18 cavm_bbxb_abx_config_18_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_18(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_18(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042202090ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_18", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_18(a) cavm_bbxb_abx_config_18_t
#define bustype_CAVM_BBXB_ABX_CONFIG_18(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_18(a) "BBXB_ABX_CONFIG_18"
#define busnum_CAVM_BBXB_ABX_CONFIG_18(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_18(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_19
 *
 * BBX2 Configuration Register 19
 * Job Configuration
 */
union cavm_bbxb_abx_config_19
{
    uint64_t u;
    struct cavm_bbxb_abx_config_19_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_19             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_19             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_19_s cn; */
};
typedef union cavm_bbxb_abx_config_19 cavm_bbxb_abx_config_19_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_19(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_19(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042202098ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_19", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_19(a) cavm_bbxb_abx_config_19_t
#define bustype_CAVM_BBXB_ABX_CONFIG_19(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_19(a) "BBXB_ABX_CONFIG_19"
#define busnum_CAVM_BBXB_ABX_CONFIG_19(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_19(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_20
 *
 * BBX2 Configuration Register 20
 * Job Configuration
 */
union cavm_bbxb_abx_config_20
{
    uint64_t u;
    struct cavm_bbxb_abx_config_20_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_20             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_20             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_20_s cn; */
};
typedef union cavm_bbxb_abx_config_20 cavm_bbxb_abx_config_20_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_20(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_20(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0422020a0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_20", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_20(a) cavm_bbxb_abx_config_20_t
#define bustype_CAVM_BBXB_ABX_CONFIG_20(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_20(a) "BBXB_ABX_CONFIG_20"
#define busnum_CAVM_BBXB_ABX_CONFIG_20(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_20(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_21
 *
 * BBX2 Configuration Register 21
 * Job Configuration
 */
union cavm_bbxb_abx_config_21
{
    uint64_t u;
    struct cavm_bbxb_abx_config_21_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_21             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_21             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_21_s cn; */
};
typedef union cavm_bbxb_abx_config_21 cavm_bbxb_abx_config_21_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_21(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_21(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0422020a8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_21", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_21(a) cavm_bbxb_abx_config_21_t
#define bustype_CAVM_BBXB_ABX_CONFIG_21(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_21(a) "BBXB_ABX_CONFIG_21"
#define busnum_CAVM_BBXB_ABX_CONFIG_21(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_21(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_22
 *
 * BBX2 Configuration Register 22
 * Job Configuration
 */
union cavm_bbxb_abx_config_22
{
    uint64_t u;
    struct cavm_bbxb_abx_config_22_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_22             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_22             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_22_s cn; */
};
typedef union cavm_bbxb_abx_config_22 cavm_bbxb_abx_config_22_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_22(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_22(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0422020b0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_22", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_22(a) cavm_bbxb_abx_config_22_t
#define bustype_CAVM_BBXB_ABX_CONFIG_22(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_22(a) "BBXB_ABX_CONFIG_22"
#define busnum_CAVM_BBXB_ABX_CONFIG_22(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_22(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_23
 *
 * BBX2 Configuration Register 23
 * Job Configuration
 */
union cavm_bbxb_abx_config_23
{
    uint64_t u;
    struct cavm_bbxb_abx_config_23_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_23             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_23             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_23_s cn; */
};
typedef union cavm_bbxb_abx_config_23 cavm_bbxb_abx_config_23_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_23(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_23(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0422020b8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_23", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_23(a) cavm_bbxb_abx_config_23_t
#define bustype_CAVM_BBXB_ABX_CONFIG_23(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_23(a) "BBXB_ABX_CONFIG_23"
#define busnum_CAVM_BBXB_ABX_CONFIG_23(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_23(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_24
 *
 * BBX2 Configuration Register 24
 * Job Configuration
 */
union cavm_bbxb_abx_config_24
{
    uint64_t u;
    struct cavm_bbxb_abx_config_24_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_24             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_24             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_24_s cn; */
};
typedef union cavm_bbxb_abx_config_24 cavm_bbxb_abx_config_24_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_24(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_24(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0422020c0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_24", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_24(a) cavm_bbxb_abx_config_24_t
#define bustype_CAVM_BBXB_ABX_CONFIG_24(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_24(a) "BBXB_ABX_CONFIG_24"
#define busnum_CAVM_BBXB_ABX_CONFIG_24(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_24(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_25
 *
 * BBX2 Configuration Register 25
 * Job Configuration
 */
union cavm_bbxb_abx_config_25
{
    uint64_t u;
    struct cavm_bbxb_abx_config_25_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_25             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_25             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_25_s cn; */
};
typedef union cavm_bbxb_abx_config_25 cavm_bbxb_abx_config_25_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_25(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_25(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0422020c8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_25", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_25(a) cavm_bbxb_abx_config_25_t
#define bustype_CAVM_BBXB_ABX_CONFIG_25(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_25(a) "BBXB_ABX_CONFIG_25"
#define busnum_CAVM_BBXB_ABX_CONFIG_25(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_25(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_26
 *
 * BBX2 Configuration Register 26
 * Job Configuration
 */
union cavm_bbxb_abx_config_26
{
    uint64_t u;
    struct cavm_bbxb_abx_config_26_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_26             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_26             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_26_s cn; */
};
typedef union cavm_bbxb_abx_config_26 cavm_bbxb_abx_config_26_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_26(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_26(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0422020d0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_26", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_26(a) cavm_bbxb_abx_config_26_t
#define bustype_CAVM_BBXB_ABX_CONFIG_26(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_26(a) "BBXB_ABX_CONFIG_26"
#define busnum_CAVM_BBXB_ABX_CONFIG_26(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_26(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_27
 *
 * BBX2 Configuration Register 27
 * Job Configuration
 */
union cavm_bbxb_abx_config_27
{
    uint64_t u;
    struct cavm_bbxb_abx_config_27_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_27             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_27             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_27_s cn; */
};
typedef union cavm_bbxb_abx_config_27 cavm_bbxb_abx_config_27_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_27(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_27(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0422020d8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_27", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_27(a) cavm_bbxb_abx_config_27_t
#define bustype_CAVM_BBXB_ABX_CONFIG_27(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_27(a) "BBXB_ABX_CONFIG_27"
#define busnum_CAVM_BBXB_ABX_CONFIG_27(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_27(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_28
 *
 * BBX2 Configuration Register 28
 * Job Configuration
 */
union cavm_bbxb_abx_config_28
{
    uint64_t u;
    struct cavm_bbxb_abx_config_28_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_28             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_28             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_28_s cn; */
};
typedef union cavm_bbxb_abx_config_28 cavm_bbxb_abx_config_28_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_28(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_28(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0422020e0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_28", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_28(a) cavm_bbxb_abx_config_28_t
#define bustype_CAVM_BBXB_ABX_CONFIG_28(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_28(a) "BBXB_ABX_CONFIG_28"
#define busnum_CAVM_BBXB_ABX_CONFIG_28(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_28(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_29
 *
 * BBX2 Configuration Register 29
 * Job Configuration
 */
union cavm_bbxb_abx_config_29
{
    uint64_t u;
    struct cavm_bbxb_abx_config_29_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_29             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_29             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_29_s cn; */
};
typedef union cavm_bbxb_abx_config_29 cavm_bbxb_abx_config_29_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_29(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_29(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0422020e8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_29", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_29(a) cavm_bbxb_abx_config_29_t
#define bustype_CAVM_BBXB_ABX_CONFIG_29(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_29(a) "BBXB_ABX_CONFIG_29"
#define busnum_CAVM_BBXB_ABX_CONFIG_29(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_29(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_30
 *
 * BBX2 Configuration Register 30
 * Job Configuration
 */
union cavm_bbxb_abx_config_30
{
    uint64_t u;
    struct cavm_bbxb_abx_config_30_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_30             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_30             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_30_s cn; */
};
typedef union cavm_bbxb_abx_config_30 cavm_bbxb_abx_config_30_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_30(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_30(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0422020f0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_30", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_30(a) cavm_bbxb_abx_config_30_t
#define bustype_CAVM_BBXB_ABX_CONFIG_30(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_30(a) "BBXB_ABX_CONFIG_30"
#define busnum_CAVM_BBXB_ABX_CONFIG_30(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_30(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_31
 *
 * BBX2 Configuration Register 31
 * Job Configuration
 */
union cavm_bbxb_abx_config_31
{
    uint64_t u;
    struct cavm_bbxb_abx_config_31_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_31             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_31             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_31_s cn; */
};
typedef union cavm_bbxb_abx_config_31 cavm_bbxb_abx_config_31_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_31(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_31(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0422020f8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_31", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_31(a) cavm_bbxb_abx_config_31_t
#define bustype_CAVM_BBXB_ABX_CONFIG_31(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_31(a) "BBXB_ABX_CONFIG_31"
#define busnum_CAVM_BBXB_ABX_CONFIG_31(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_31(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_32
 *
 * BBX2 Configuration Register 32
 * Job Configuration
 */
union cavm_bbxb_abx_config_32
{
    uint64_t u;
    struct cavm_bbxb_abx_config_32_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_32             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_32             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_32_s cn; */
};
typedef union cavm_bbxb_abx_config_32 cavm_bbxb_abx_config_32_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_32(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_32(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042202100ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_32", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_32(a) cavm_bbxb_abx_config_32_t
#define bustype_CAVM_BBXB_ABX_CONFIG_32(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_32(a) "BBXB_ABX_CONFIG_32"
#define busnum_CAVM_BBXB_ABX_CONFIG_32(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_32(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_33
 *
 * BBX2 Configuration Register 33
 * Job Configuration
 */
union cavm_bbxb_abx_config_33
{
    uint64_t u;
    struct cavm_bbxb_abx_config_33_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_33             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_33             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_33_s cn; */
};
typedef union cavm_bbxb_abx_config_33 cavm_bbxb_abx_config_33_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_33(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_33(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042202108ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_33", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_33(a) cavm_bbxb_abx_config_33_t
#define bustype_CAVM_BBXB_ABX_CONFIG_33(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_33(a) "BBXB_ABX_CONFIG_33"
#define busnum_CAVM_BBXB_ABX_CONFIG_33(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_33(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_34
 *
 * BBX2 Configuration Register 34
 * Job Configuration
 */
union cavm_bbxb_abx_config_34
{
    uint64_t u;
    struct cavm_bbxb_abx_config_34_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_34             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_34             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_34_s cn; */
};
typedef union cavm_bbxb_abx_config_34 cavm_bbxb_abx_config_34_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_34(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_34(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042202110ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_34", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_34(a) cavm_bbxb_abx_config_34_t
#define bustype_CAVM_BBXB_ABX_CONFIG_34(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_34(a) "BBXB_ABX_CONFIG_34"
#define busnum_CAVM_BBXB_ABX_CONFIG_34(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_34(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_35
 *
 * BBX2 Configuration Register 35
 * Job Configuration
 */
union cavm_bbxb_abx_config_35
{
    uint64_t u;
    struct cavm_bbxb_abx_config_35_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_35             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_35             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_35_s cn; */
};
typedef union cavm_bbxb_abx_config_35 cavm_bbxb_abx_config_35_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_35(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_35(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042202118ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_35", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_35(a) cavm_bbxb_abx_config_35_t
#define bustype_CAVM_BBXB_ABX_CONFIG_35(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_35(a) "BBXB_ABX_CONFIG_35"
#define busnum_CAVM_BBXB_ABX_CONFIG_35(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_35(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_36
 *
 * BBX2 Configuration Register 36
 * Job Configuration
 */
union cavm_bbxb_abx_config_36
{
    uint64_t u;
    struct cavm_bbxb_abx_config_36_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_36             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_36             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_36_s cn; */
};
typedef union cavm_bbxb_abx_config_36 cavm_bbxb_abx_config_36_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_36(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_36(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042202120ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_36", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_36(a) cavm_bbxb_abx_config_36_t
#define bustype_CAVM_BBXB_ABX_CONFIG_36(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_36(a) "BBXB_ABX_CONFIG_36"
#define busnum_CAVM_BBXB_ABX_CONFIG_36(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_36(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_37
 *
 * BBX2 Configuration Register 37
 * Job Configuration
 */
union cavm_bbxb_abx_config_37
{
    uint64_t u;
    struct cavm_bbxb_abx_config_37_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_37             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_37             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_37_s cn; */
};
typedef union cavm_bbxb_abx_config_37 cavm_bbxb_abx_config_37_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_37(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_37(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042202128ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_37", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_37(a) cavm_bbxb_abx_config_37_t
#define bustype_CAVM_BBXB_ABX_CONFIG_37(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_37(a) "BBXB_ABX_CONFIG_37"
#define busnum_CAVM_BBXB_ABX_CONFIG_37(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_37(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_38
 *
 * BBX2 Configuration Register 38
 * Job Configuration
 */
union cavm_bbxb_abx_config_38
{
    uint64_t u;
    struct cavm_bbxb_abx_config_38_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_38             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_38             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_38_s cn; */
};
typedef union cavm_bbxb_abx_config_38 cavm_bbxb_abx_config_38_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_38(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_38(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042202130ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_38", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_38(a) cavm_bbxb_abx_config_38_t
#define bustype_CAVM_BBXB_ABX_CONFIG_38(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_38(a) "BBXB_ABX_CONFIG_38"
#define busnum_CAVM_BBXB_ABX_CONFIG_38(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_38(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_39
 *
 * BBX2 Configuration Register 39
 * Job Configuration
 */
union cavm_bbxb_abx_config_39
{
    uint64_t u;
    struct cavm_bbxb_abx_config_39_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_39             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_39             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_39_s cn; */
};
typedef union cavm_bbxb_abx_config_39 cavm_bbxb_abx_config_39_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_39(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_39(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042202138ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_39", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_39(a) cavm_bbxb_abx_config_39_t
#define bustype_CAVM_BBXB_ABX_CONFIG_39(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_39(a) "BBXB_ABX_CONFIG_39"
#define busnum_CAVM_BBXB_ABX_CONFIG_39(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_39(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_40
 *
 * BBX2 Configuration Register 40
 * Job Configuration
 */
union cavm_bbxb_abx_config_40
{
    uint64_t u;
    struct cavm_bbxb_abx_config_40_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_40             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_40             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_40_s cn; */
};
typedef union cavm_bbxb_abx_config_40 cavm_bbxb_abx_config_40_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_40(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_40(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042202140ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_40", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_40(a) cavm_bbxb_abx_config_40_t
#define bustype_CAVM_BBXB_ABX_CONFIG_40(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_40(a) "BBXB_ABX_CONFIG_40"
#define busnum_CAVM_BBXB_ABX_CONFIG_40(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_40(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_41
 *
 * BBX2 Configuration Register 41
 * Job Configuration
 */
union cavm_bbxb_abx_config_41
{
    uint64_t u;
    struct cavm_bbxb_abx_config_41_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_41             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_41             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_41_s cn; */
};
typedef union cavm_bbxb_abx_config_41 cavm_bbxb_abx_config_41_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_41(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_41(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042202148ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_41", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_41(a) cavm_bbxb_abx_config_41_t
#define bustype_CAVM_BBXB_ABX_CONFIG_41(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_41(a) "BBXB_ABX_CONFIG_41"
#define busnum_CAVM_BBXB_ABX_CONFIG_41(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_41(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_42
 *
 * BBX2 Configuration Register 42
 * Job Configuration
 */
union cavm_bbxb_abx_config_42
{
    uint64_t u;
    struct cavm_bbxb_abx_config_42_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_42             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_42             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_42_s cn; */
};
typedef union cavm_bbxb_abx_config_42 cavm_bbxb_abx_config_42_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_42(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_42(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042202150ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_42", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_42(a) cavm_bbxb_abx_config_42_t
#define bustype_CAVM_BBXB_ABX_CONFIG_42(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_42(a) "BBXB_ABX_CONFIG_42"
#define busnum_CAVM_BBXB_ABX_CONFIG_42(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_42(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_43
 *
 * BBX2 Configuration Register 43
 * Job Configuration
 */
union cavm_bbxb_abx_config_43
{
    uint64_t u;
    struct cavm_bbxb_abx_config_43_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_43             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_43             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_43_s cn; */
};
typedef union cavm_bbxb_abx_config_43 cavm_bbxb_abx_config_43_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_43(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_43(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042202158ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_43", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_43(a) cavm_bbxb_abx_config_43_t
#define bustype_CAVM_BBXB_ABX_CONFIG_43(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_43(a) "BBXB_ABX_CONFIG_43"
#define busnum_CAVM_BBXB_ABX_CONFIG_43(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_43(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_44
 *
 * BBX2 Configuration Register 44
 * Job Configuration
 */
union cavm_bbxb_abx_config_44
{
    uint64_t u;
    struct cavm_bbxb_abx_config_44_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_44             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_44             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_44_s cn; */
};
typedef union cavm_bbxb_abx_config_44 cavm_bbxb_abx_config_44_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_44(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_44(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042202160ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_44", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_44(a) cavm_bbxb_abx_config_44_t
#define bustype_CAVM_BBXB_ABX_CONFIG_44(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_44(a) "BBXB_ABX_CONFIG_44"
#define busnum_CAVM_BBXB_ABX_CONFIG_44(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_44(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_45
 *
 * BBX2 Configuration Register 45
 * Job Configuration
 */
union cavm_bbxb_abx_config_45
{
    uint64_t u;
    struct cavm_bbxb_abx_config_45_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_45             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_45             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_45_s cn; */
};
typedef union cavm_bbxb_abx_config_45 cavm_bbxb_abx_config_45_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_45(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_45(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042202168ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_45", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_45(a) cavm_bbxb_abx_config_45_t
#define bustype_CAVM_BBXB_ABX_CONFIG_45(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_45(a) "BBXB_ABX_CONFIG_45"
#define busnum_CAVM_BBXB_ABX_CONFIG_45(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_45(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_46
 *
 * BBX2 Configuration Register 46
 * Job Configuration
 */
union cavm_bbxb_abx_config_46
{
    uint64_t u;
    struct cavm_bbxb_abx_config_46_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_46             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_46             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_46_s cn; */
};
typedef union cavm_bbxb_abx_config_46 cavm_bbxb_abx_config_46_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_46(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_46(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042202170ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_46", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_46(a) cavm_bbxb_abx_config_46_t
#define bustype_CAVM_BBXB_ABX_CONFIG_46(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_46(a) "BBXB_ABX_CONFIG_46"
#define busnum_CAVM_BBXB_ABX_CONFIG_46(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_46(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_47
 *
 * BBX2 Configuration Register 47
 * Job Configuration
 */
union cavm_bbxb_abx_config_47
{
    uint64_t u;
    struct cavm_bbxb_abx_config_47_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_47             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_47             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_47_s cn; */
};
typedef union cavm_bbxb_abx_config_47 cavm_bbxb_abx_config_47_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_47(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_47(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042202178ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_47", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_47(a) cavm_bbxb_abx_config_47_t
#define bustype_CAVM_BBXB_ABX_CONFIG_47(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_47(a) "BBXB_ABX_CONFIG_47"
#define busnum_CAVM_BBXB_ABX_CONFIG_47(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_47(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_48
 *
 * BBX2 Configuration Register 48
 * Job Configuration
 */
union cavm_bbxb_abx_config_48
{
    uint64_t u;
    struct cavm_bbxb_abx_config_48_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_48             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_48             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_48_s cn; */
};
typedef union cavm_bbxb_abx_config_48 cavm_bbxb_abx_config_48_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_48(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_48(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042202180ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_48", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_48(a) cavm_bbxb_abx_config_48_t
#define bustype_CAVM_BBXB_ABX_CONFIG_48(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_48(a) "BBXB_ABX_CONFIG_48"
#define busnum_CAVM_BBXB_ABX_CONFIG_48(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_48(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_49
 *
 * BBX2 Configuration Register 49
 * Job Configuration
 */
union cavm_bbxb_abx_config_49
{
    uint64_t u;
    struct cavm_bbxb_abx_config_49_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_49             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_49             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_49_s cn; */
};
typedef union cavm_bbxb_abx_config_49 cavm_bbxb_abx_config_49_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_49(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_49(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042202188ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_49", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_49(a) cavm_bbxb_abx_config_49_t
#define bustype_CAVM_BBXB_ABX_CONFIG_49(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_49(a) "BBXB_ABX_CONFIG_49"
#define busnum_CAVM_BBXB_ABX_CONFIG_49(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_49(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_50
 *
 * BBX2 Configuration Register 50
 * Job Configuration
 */
union cavm_bbxb_abx_config_50
{
    uint64_t u;
    struct cavm_bbxb_abx_config_50_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_50             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_50             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_50_s cn; */
};
typedef union cavm_bbxb_abx_config_50 cavm_bbxb_abx_config_50_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_50(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_50(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042202190ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_50", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_50(a) cavm_bbxb_abx_config_50_t
#define bustype_CAVM_BBXB_ABX_CONFIG_50(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_50(a) "BBXB_ABX_CONFIG_50"
#define busnum_CAVM_BBXB_ABX_CONFIG_50(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_50(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_51
 *
 * BBX2 Configuration Register 51
 * Job Configuration
 */
union cavm_bbxb_abx_config_51
{
    uint64_t u;
    struct cavm_bbxb_abx_config_51_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_51             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_51             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_51_s cn; */
};
typedef union cavm_bbxb_abx_config_51 cavm_bbxb_abx_config_51_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_51(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_51(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042202198ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_51", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_51(a) cavm_bbxb_abx_config_51_t
#define bustype_CAVM_BBXB_ABX_CONFIG_51(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_51(a) "BBXB_ABX_CONFIG_51"
#define busnum_CAVM_BBXB_ABX_CONFIG_51(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_51(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_52
 *
 * BBX2 Configuration Register 52
 * Job Configuration
 */
union cavm_bbxb_abx_config_52
{
    uint64_t u;
    struct cavm_bbxb_abx_config_52_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_52             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_52             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_52_s cn; */
};
typedef union cavm_bbxb_abx_config_52 cavm_bbxb_abx_config_52_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_52(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_52(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0422021a0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_52", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_52(a) cavm_bbxb_abx_config_52_t
#define bustype_CAVM_BBXB_ABX_CONFIG_52(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_52(a) "BBXB_ABX_CONFIG_52"
#define busnum_CAVM_BBXB_ABX_CONFIG_52(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_52(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_53
 *
 * BBX2 Configuration Register 53
 * Job Configuration
 */
union cavm_bbxb_abx_config_53
{
    uint64_t u;
    struct cavm_bbxb_abx_config_53_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_53             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_53             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_53_s cn; */
};
typedef union cavm_bbxb_abx_config_53 cavm_bbxb_abx_config_53_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_53(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_53(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0422021a8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_53", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_53(a) cavm_bbxb_abx_config_53_t
#define bustype_CAVM_BBXB_ABX_CONFIG_53(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_53(a) "BBXB_ABX_CONFIG_53"
#define busnum_CAVM_BBXB_ABX_CONFIG_53(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_53(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_54
 *
 * BBX2 Configuration Register 54
 * Job Configuration
 */
union cavm_bbxb_abx_config_54
{
    uint64_t u;
    struct cavm_bbxb_abx_config_54_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_54             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_54             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_54_s cn; */
};
typedef union cavm_bbxb_abx_config_54 cavm_bbxb_abx_config_54_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_54(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_54(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0422021b0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_54", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_54(a) cavm_bbxb_abx_config_54_t
#define bustype_CAVM_BBXB_ABX_CONFIG_54(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_54(a) "BBXB_ABX_CONFIG_54"
#define busnum_CAVM_BBXB_ABX_CONFIG_54(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_54(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_55
 *
 * BBX2 Configuration Register 55
 * Job Configuration
 */
union cavm_bbxb_abx_config_55
{
    uint64_t u;
    struct cavm_bbxb_abx_config_55_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_55             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_55             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_55_s cn; */
};
typedef union cavm_bbxb_abx_config_55 cavm_bbxb_abx_config_55_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_55(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_55(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0422021b8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_55", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_55(a) cavm_bbxb_abx_config_55_t
#define bustype_CAVM_BBXB_ABX_CONFIG_55(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_55(a) "BBXB_ABX_CONFIG_55"
#define busnum_CAVM_BBXB_ABX_CONFIG_55(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_55(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_56
 *
 * BBX2 Configuration Register 56
 * Job Configuration
 */
union cavm_bbxb_abx_config_56
{
    uint64_t u;
    struct cavm_bbxb_abx_config_56_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_56             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_56             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_56_s cn; */
};
typedef union cavm_bbxb_abx_config_56 cavm_bbxb_abx_config_56_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_56(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_56(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0422021c0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_56", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_56(a) cavm_bbxb_abx_config_56_t
#define bustype_CAVM_BBXB_ABX_CONFIG_56(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_56(a) "BBXB_ABX_CONFIG_56"
#define busnum_CAVM_BBXB_ABX_CONFIG_56(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_56(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_57
 *
 * BBX2 Configuration Register 57
 * Job Configuration
 */
union cavm_bbxb_abx_config_57
{
    uint64_t u;
    struct cavm_bbxb_abx_config_57_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_57             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_57             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_57_s cn; */
};
typedef union cavm_bbxb_abx_config_57 cavm_bbxb_abx_config_57_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_57(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_57(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0422021c8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_57", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_57(a) cavm_bbxb_abx_config_57_t
#define bustype_CAVM_BBXB_ABX_CONFIG_57(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_57(a) "BBXB_ABX_CONFIG_57"
#define busnum_CAVM_BBXB_ABX_CONFIG_57(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_57(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_58
 *
 * BBX2 Configuration Register 58
 * Job Configuration
 */
union cavm_bbxb_abx_config_58
{
    uint64_t u;
    struct cavm_bbxb_abx_config_58_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_58             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_58             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_58_s cn; */
};
typedef union cavm_bbxb_abx_config_58 cavm_bbxb_abx_config_58_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_58(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_58(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0422021d0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_58", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_58(a) cavm_bbxb_abx_config_58_t
#define bustype_CAVM_BBXB_ABX_CONFIG_58(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_58(a) "BBXB_ABX_CONFIG_58"
#define busnum_CAVM_BBXB_ABX_CONFIG_58(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_58(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_59
 *
 * BBX2 Configuration Register 59
 * Job Configuration
 */
union cavm_bbxb_abx_config_59
{
    uint64_t u;
    struct cavm_bbxb_abx_config_59_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_59             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_59             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_59_s cn; */
};
typedef union cavm_bbxb_abx_config_59 cavm_bbxb_abx_config_59_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_59(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_59(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0422021d8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_59", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_59(a) cavm_bbxb_abx_config_59_t
#define bustype_CAVM_BBXB_ABX_CONFIG_59(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_59(a) "BBXB_ABX_CONFIG_59"
#define busnum_CAVM_BBXB_ABX_CONFIG_59(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_59(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_60
 *
 * BBX2 Configuration Register 60
 * Job Configuration
 */
union cavm_bbxb_abx_config_60
{
    uint64_t u;
    struct cavm_bbxb_abx_config_60_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_60             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_60             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_60_s cn; */
};
typedef union cavm_bbxb_abx_config_60 cavm_bbxb_abx_config_60_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_60(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_60(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0422021e0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_60", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_60(a) cavm_bbxb_abx_config_60_t
#define bustype_CAVM_BBXB_ABX_CONFIG_60(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_60(a) "BBXB_ABX_CONFIG_60"
#define busnum_CAVM_BBXB_ABX_CONFIG_60(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_60(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_61
 *
 * BBX2 Configuration Register 61
 * Job Configuration
 */
union cavm_bbxb_abx_config_61
{
    uint64_t u;
    struct cavm_bbxb_abx_config_61_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_61             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_61             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_61_s cn; */
};
typedef union cavm_bbxb_abx_config_61 cavm_bbxb_abx_config_61_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_61(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_61(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0422021e8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_61", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_61(a) cavm_bbxb_abx_config_61_t
#define bustype_CAVM_BBXB_ABX_CONFIG_61(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_61(a) "BBXB_ABX_CONFIG_61"
#define busnum_CAVM_BBXB_ABX_CONFIG_61(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_61(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_62
 *
 * BBX2 Configuration Register 62
 * Job Configuration
 */
union cavm_bbxb_abx_config_62
{
    uint64_t u;
    struct cavm_bbxb_abx_config_62_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_62             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_62             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_62_s cn; */
};
typedef union cavm_bbxb_abx_config_62 cavm_bbxb_abx_config_62_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_62(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_62(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0422021f0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_62", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_62(a) cavm_bbxb_abx_config_62_t
#define bustype_CAVM_BBXB_ABX_CONFIG_62(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_62(a) "BBXB_ABX_CONFIG_62"
#define busnum_CAVM_BBXB_ABX_CONFIG_62(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_62(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_63
 *
 * BBX2 Configuration Register 63
 * Job Configuration
 */
union cavm_bbxb_abx_config_63
{
    uint64_t u;
    struct cavm_bbxb_abx_config_63_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_63             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_63             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_63_s cn; */
};
typedef union cavm_bbxb_abx_config_63 cavm_bbxb_abx_config_63_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_63(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_63(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0422021f8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_63", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_63(a) cavm_bbxb_abx_config_63_t
#define bustype_CAVM_BBXB_ABX_CONFIG_63(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_63(a) "BBXB_ABX_CONFIG_63"
#define busnum_CAVM_BBXB_ABX_CONFIG_63(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_63(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_64
 *
 * BBX2 Configuration Register 64
 * Job Configuration
 */
union cavm_bbxb_abx_config_64
{
    uint64_t u;
    struct cavm_bbxb_abx_config_64_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_64             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_64             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_64_s cn; */
};
typedef union cavm_bbxb_abx_config_64 cavm_bbxb_abx_config_64_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_64(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_64(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042202200ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_64", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_64(a) cavm_bbxb_abx_config_64_t
#define bustype_CAVM_BBXB_ABX_CONFIG_64(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_64(a) "BBXB_ABX_CONFIG_64"
#define busnum_CAVM_BBXB_ABX_CONFIG_64(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_64(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_65
 *
 * BBX2 Configuration Register 65
 * Job Configuration
 */
union cavm_bbxb_abx_config_65
{
    uint64_t u;
    struct cavm_bbxb_abx_config_65_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_65             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_65             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_65_s cn; */
};
typedef union cavm_bbxb_abx_config_65 cavm_bbxb_abx_config_65_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_65(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_65(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042202208ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_65", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_65(a) cavm_bbxb_abx_config_65_t
#define bustype_CAVM_BBXB_ABX_CONFIG_65(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_65(a) "BBXB_ABX_CONFIG_65"
#define busnum_CAVM_BBXB_ABX_CONFIG_65(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_65(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_66
 *
 * BBX2 Configuration Register 66
 * Job Configuration
 */
union cavm_bbxb_abx_config_66
{
    uint64_t u;
    struct cavm_bbxb_abx_config_66_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_66             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_66             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_66_s cn; */
};
typedef union cavm_bbxb_abx_config_66 cavm_bbxb_abx_config_66_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_66(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_66(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042202210ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_66", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_66(a) cavm_bbxb_abx_config_66_t
#define bustype_CAVM_BBXB_ABX_CONFIG_66(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_66(a) "BBXB_ABX_CONFIG_66"
#define busnum_CAVM_BBXB_ABX_CONFIG_66(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_66(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_67
 *
 * BBX2 Configuration Register 67
 * Job Configuration
 */
union cavm_bbxb_abx_config_67
{
    uint64_t u;
    struct cavm_bbxb_abx_config_67_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_67             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_67             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_67_s cn; */
};
typedef union cavm_bbxb_abx_config_67 cavm_bbxb_abx_config_67_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_67(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_67(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042202218ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_67", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_67(a) cavm_bbxb_abx_config_67_t
#define bustype_CAVM_BBXB_ABX_CONFIG_67(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_67(a) "BBXB_ABX_CONFIG_67"
#define busnum_CAVM_BBXB_ABX_CONFIG_67(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_67(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_68
 *
 * BBX2 Configuration Register 68
 * Job Configuration
 */
union cavm_bbxb_abx_config_68
{
    uint64_t u;
    struct cavm_bbxb_abx_config_68_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_68             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_68             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_68_s cn; */
};
typedef union cavm_bbxb_abx_config_68 cavm_bbxb_abx_config_68_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_68(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_68(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042202220ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_68", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_68(a) cavm_bbxb_abx_config_68_t
#define bustype_CAVM_BBXB_ABX_CONFIG_68(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_68(a) "BBXB_ABX_CONFIG_68"
#define busnum_CAVM_BBXB_ABX_CONFIG_68(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_68(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_69
 *
 * BBX2 Configuration Register 69
 * Job Configuration
 */
union cavm_bbxb_abx_config_69
{
    uint64_t u;
    struct cavm_bbxb_abx_config_69_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_69             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_69             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_69_s cn; */
};
typedef union cavm_bbxb_abx_config_69 cavm_bbxb_abx_config_69_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_69(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_69(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042202228ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_69", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_69(a) cavm_bbxb_abx_config_69_t
#define bustype_CAVM_BBXB_ABX_CONFIG_69(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_69(a) "BBXB_ABX_CONFIG_69"
#define busnum_CAVM_BBXB_ABX_CONFIG_69(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_69(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_70
 *
 * BBX2 Configuration Register 70
 * Job Configuration
 */
union cavm_bbxb_abx_config_70
{
    uint64_t u;
    struct cavm_bbxb_abx_config_70_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_70             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_70             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_70_s cn; */
};
typedef union cavm_bbxb_abx_config_70 cavm_bbxb_abx_config_70_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_70(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_70(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042202230ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_70", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_70(a) cavm_bbxb_abx_config_70_t
#define bustype_CAVM_BBXB_ABX_CONFIG_70(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_70(a) "BBXB_ABX_CONFIG_70"
#define busnum_CAVM_BBXB_ABX_CONFIG_70(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_70(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_71
 *
 * BBX2 Configuration Register 71
 * Job Configuration
 */
union cavm_bbxb_abx_config_71
{
    uint64_t u;
    struct cavm_bbxb_abx_config_71_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_71             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_71             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_71_s cn; */
};
typedef union cavm_bbxb_abx_config_71 cavm_bbxb_abx_config_71_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_71(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_71(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042202238ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_71", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_71(a) cavm_bbxb_abx_config_71_t
#define bustype_CAVM_BBXB_ABX_CONFIG_71(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_71(a) "BBXB_ABX_CONFIG_71"
#define busnum_CAVM_BBXB_ABX_CONFIG_71(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_71(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_72
 *
 * BBX2 Configuration Register 72
 * Job Configuration
 */
union cavm_bbxb_abx_config_72
{
    uint64_t u;
    struct cavm_bbxb_abx_config_72_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_72             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_72             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_72_s cn; */
};
typedef union cavm_bbxb_abx_config_72 cavm_bbxb_abx_config_72_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_72(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_72(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042202240ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_72", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_72(a) cavm_bbxb_abx_config_72_t
#define bustype_CAVM_BBXB_ABX_CONFIG_72(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_72(a) "BBXB_ABX_CONFIG_72"
#define busnum_CAVM_BBXB_ABX_CONFIG_72(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_72(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_73
 *
 * BBX2 Configuration Register 73
 * Job Configuration
 */
union cavm_bbxb_abx_config_73
{
    uint64_t u;
    struct cavm_bbxb_abx_config_73_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_73             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_73             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_73_s cn; */
};
typedef union cavm_bbxb_abx_config_73 cavm_bbxb_abx_config_73_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_73(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_73(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042202248ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_73", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_73(a) cavm_bbxb_abx_config_73_t
#define bustype_CAVM_BBXB_ABX_CONFIG_73(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_73(a) "BBXB_ABX_CONFIG_73"
#define busnum_CAVM_BBXB_ABX_CONFIG_73(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_73(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_74
 *
 * BBX2 Configuration Register 74
 * Job Configuration
 */
union cavm_bbxb_abx_config_74
{
    uint64_t u;
    struct cavm_bbxb_abx_config_74_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_74             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_74             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_74_s cn; */
};
typedef union cavm_bbxb_abx_config_74 cavm_bbxb_abx_config_74_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_74(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_74(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042202250ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_74", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_74(a) cavm_bbxb_abx_config_74_t
#define bustype_CAVM_BBXB_ABX_CONFIG_74(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_74(a) "BBXB_ABX_CONFIG_74"
#define busnum_CAVM_BBXB_ABX_CONFIG_74(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_74(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_75
 *
 * BBX2 Configuration Register 75
 * Job Configuration
 */
union cavm_bbxb_abx_config_75
{
    uint64_t u;
    struct cavm_bbxb_abx_config_75_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_75             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_75             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_75_s cn; */
};
typedef union cavm_bbxb_abx_config_75 cavm_bbxb_abx_config_75_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_75(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_75(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042202258ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_75", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_75(a) cavm_bbxb_abx_config_75_t
#define bustype_CAVM_BBXB_ABX_CONFIG_75(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_75(a) "BBXB_ABX_CONFIG_75"
#define busnum_CAVM_BBXB_ABX_CONFIG_75(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_75(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_76
 *
 * BBX2 Configuration Register 76
 * Job Configuration
 */
union cavm_bbxb_abx_config_76
{
    uint64_t u;
    struct cavm_bbxb_abx_config_76_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_76             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_76             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_76_s cn; */
};
typedef union cavm_bbxb_abx_config_76 cavm_bbxb_abx_config_76_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_76(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_76(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042202260ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_76", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_76(a) cavm_bbxb_abx_config_76_t
#define bustype_CAVM_BBXB_ABX_CONFIG_76(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_76(a) "BBXB_ABX_CONFIG_76"
#define busnum_CAVM_BBXB_ABX_CONFIG_76(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_76(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_77
 *
 * BBX2 Configuration Register 77
 * Job Configuration
 */
union cavm_bbxb_abx_config_77
{
    uint64_t u;
    struct cavm_bbxb_abx_config_77_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_77             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_77             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_77_s cn; */
};
typedef union cavm_bbxb_abx_config_77 cavm_bbxb_abx_config_77_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_77(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_77(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042202268ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_77", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_77(a) cavm_bbxb_abx_config_77_t
#define bustype_CAVM_BBXB_ABX_CONFIG_77(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_77(a) "BBXB_ABX_CONFIG_77"
#define busnum_CAVM_BBXB_ABX_CONFIG_77(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_77(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_78
 *
 * BBX2 Configuration Register 78
 * Job Configuration
 */
union cavm_bbxb_abx_config_78
{
    uint64_t u;
    struct cavm_bbxb_abx_config_78_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_78             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_78             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_78_s cn; */
};
typedef union cavm_bbxb_abx_config_78 cavm_bbxb_abx_config_78_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_78(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_78(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042202270ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_78", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_78(a) cavm_bbxb_abx_config_78_t
#define bustype_CAVM_BBXB_ABX_CONFIG_78(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_78(a) "BBXB_ABX_CONFIG_78"
#define busnum_CAVM_BBXB_ABX_CONFIG_78(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_78(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_79
 *
 * BBX2 Configuration Register 79
 * Job Configuration
 */
union cavm_bbxb_abx_config_79
{
    uint64_t u;
    struct cavm_bbxb_abx_config_79_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_79             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_79             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_79_s cn; */
};
typedef union cavm_bbxb_abx_config_79 cavm_bbxb_abx_config_79_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_79(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_79(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042202278ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_79", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_79(a) cavm_bbxb_abx_config_79_t
#define bustype_CAVM_BBXB_ABX_CONFIG_79(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_79(a) "BBXB_ABX_CONFIG_79"
#define busnum_CAVM_BBXB_ABX_CONFIG_79(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_79(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_config_80
 *
 * BBX2 Configuration Register 80
 * Job Configuration
 */
union cavm_bbxb_abx_config_80
{
    uint64_t u;
    struct cavm_bbxb_abx_config_80_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_80             : 64; /**< [ 63:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t config_80             : 64; /**< [ 63:  0](R/W) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_config_80_s cn; */
};
typedef union cavm_bbxb_abx_config_80 cavm_bbxb_abx_config_80_t;

static inline uint64_t CAVM_BBXB_ABX_CONFIG_80(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONFIG_80(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042202280ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONFIG_80", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONFIG_80(a) cavm_bbxb_abx_config_80_t
#define bustype_CAVM_BBXB_ABX_CONFIG_80(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONFIG_80(a) "BBXB_ABX_CONFIG_80"
#define busnum_CAVM_BBXB_ABX_CONFIG_80(a) (a)
#define arguments_CAVM_BBXB_ABX_CONFIG_80(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_control_error_00
 *
 * BBX2 Error Register 0
 * HAB Control
 */
union cavm_bbxb_abx_control_error_00
{
    uint64_t u;
    struct cavm_bbxb_abx_control_error_00_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t job_id_dma_error      : 16; /**< [ 31: 16](R/W/H) Job ID for DMA error (any write clears) */
        uint64_t reserved_5_15         : 11;
        uint64_t rp0_overflow          : 1;  /**< [  4:  4](R/W/H) Read Port 0 Overflow (any write clears) */
        uint64_t reserved_1_3          : 3;
        uint64_t rp0_underflow         : 1;  /**< [  0:  0](R/W/H) Read Port 0 Underflow (any write clears) */
#else /* Word 0 - Little Endian */
        uint64_t rp0_underflow         : 1;  /**< [  0:  0](R/W/H) Read Port 0 Underflow (any write clears) */
        uint64_t reserved_1_3          : 3;
        uint64_t rp0_overflow          : 1;  /**< [  4:  4](R/W/H) Read Port 0 Overflow (any write clears) */
        uint64_t reserved_5_15         : 11;
        uint64_t job_id_dma_error      : 16; /**< [ 31: 16](R/W/H) Job ID for DMA error (any write clears) */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_control_error_00_s cn; */
};
typedef union cavm_bbxb_abx_control_error_00 cavm_bbxb_abx_control_error_00_t;

static inline uint64_t CAVM_BBXB_ABX_CONTROL_ERROR_00(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONTROL_ERROR_00(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042200030ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONTROL_ERROR_00", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONTROL_ERROR_00(a) cavm_bbxb_abx_control_error_00_t
#define bustype_CAVM_BBXB_ABX_CONTROL_ERROR_00(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONTROL_ERROR_00(a) "BBXB_ABX_CONTROL_ERROR_00"
#define busnum_CAVM_BBXB_ABX_CONTROL_ERROR_00(a) (a)
#define arguments_CAVM_BBXB_ABX_CONTROL_ERROR_00(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_control_error_01
 *
 * BBX2 Error Register 1
 * HAB Control
 */
union cavm_bbxb_abx_control_error_01
{
    uint64_t u;
    struct cavm_bbxb_abx_control_error_01_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t job_id_hab_error      : 16; /**< [ 47: 32](R/W/H) Job ID for HAB specific error (any write clears) */
        uint64_t hab_error             : 32; /**< [ 31:  0](R/W/H) HAB specific error (any write clears) */
#else /* Word 0 - Little Endian */
        uint64_t hab_error             : 32; /**< [ 31:  0](R/W/H) HAB specific error (any write clears) */
        uint64_t job_id_hab_error      : 16; /**< [ 47: 32](R/W/H) Job ID for HAB specific error (any write clears) */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_control_error_01_s cn; */
};
typedef union cavm_bbxb_abx_control_error_01 cavm_bbxb_abx_control_error_01_t;

static inline uint64_t CAVM_BBXB_ABX_CONTROL_ERROR_01(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONTROL_ERROR_01(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042200038ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONTROL_ERROR_01", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONTROL_ERROR_01(a) cavm_bbxb_abx_control_error_01_t
#define bustype_CAVM_BBXB_ABX_CONTROL_ERROR_01(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONTROL_ERROR_01(a) "BBXB_ABX_CONTROL_ERROR_01"
#define busnum_CAVM_BBXB_ABX_CONTROL_ERROR_01(a) (a)
#define arguments_CAVM_BBXB_ABX_CONTROL_ERROR_01(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_control_error_02
 *
 * BBX2 Error Enable Register 0
 * HAB Control
 */
union cavm_bbxb_abx_control_error_02
{
    uint64_t u;
    struct cavm_bbxb_abx_control_error_02_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t rp0_overflow_en       : 1;  /**< [  4:  4](R/W) Read Port 0 Overflow Error Enable */
        uint64_t reserved_1_3          : 3;
        uint64_t rp0_underflow_en      : 1;  /**< [  0:  0](R/W) Read Port 0 Underflow Error Enable */
#else /* Word 0 - Little Endian */
        uint64_t rp0_underflow_en      : 1;  /**< [  0:  0](R/W) Read Port 0 Underflow Error Enable */
        uint64_t reserved_1_3          : 3;
        uint64_t rp0_overflow_en       : 1;  /**< [  4:  4](R/W) Read Port 0 Overflow Error Enable */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    struct cavm_bbxb_abx_control_error_02_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t reserved_5_7          : 3;
        uint64_t rp0_overflow_en       : 1;  /**< [  4:  4](R/W) Read Port 0 Overflow Error Enable */
        uint64_t reserved_1_3          : 3;
        uint64_t rp0_underflow_en      : 1;  /**< [  0:  0](R/W) Read Port 0 Underflow Error Enable */
#else /* Word 0 - Little Endian */
        uint64_t rp0_underflow_en      : 1;  /**< [  0:  0](R/W) Read Port 0 Underflow Error Enable */
        uint64_t reserved_1_3          : 3;
        uint64_t rp0_overflow_en       : 1;  /**< [  4:  4](R/W) Read Port 0 Overflow Error Enable */
        uint64_t reserved_5_7          : 3;
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_bbxb_abx_control_error_02 cavm_bbxb_abx_control_error_02_t;

static inline uint64_t CAVM_BBXB_ABX_CONTROL_ERROR_02(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONTROL_ERROR_02(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042200040ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONTROL_ERROR_02", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONTROL_ERROR_02(a) cavm_bbxb_abx_control_error_02_t
#define bustype_CAVM_BBXB_ABX_CONTROL_ERROR_02(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONTROL_ERROR_02(a) "BBXB_ABX_CONTROL_ERROR_02"
#define busnum_CAVM_BBXB_ABX_CONTROL_ERROR_02(a) (a)
#define arguments_CAVM_BBXB_ABX_CONTROL_ERROR_02(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_control_error_03
 *
 * BBX2 Error Enable Register 1
 * HAB Control
 */
union cavm_bbxb_abx_control_error_03
{
    uint64_t u;
    struct cavm_bbxb_abx_control_error_03_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t hab_error_en          : 8;  /**< [  7:  0](R/W) HAB specific Error Enable */
#else /* Word 0 - Little Endian */
        uint64_t hab_error_en          : 8;  /**< [  7:  0](R/W) HAB specific Error Enable */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_control_error_03_s cn; */
};
typedef union cavm_bbxb_abx_control_error_03 cavm_bbxb_abx_control_error_03_t;

static inline uint64_t CAVM_BBXB_ABX_CONTROL_ERROR_03(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONTROL_ERROR_03(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042200048ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONTROL_ERROR_03", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONTROL_ERROR_03(a) cavm_bbxb_abx_control_error_03_t
#define bustype_CAVM_BBXB_ABX_CONTROL_ERROR_03(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONTROL_ERROR_03(a) "BBXB_ABX_CONTROL_ERROR_03"
#define busnum_CAVM_BBXB_ABX_CONTROL_ERROR_03(a) (a)
#define arguments_CAVM_BBXB_ABX_CONTROL_ERROR_03(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_control_main
 *
 * BBX2 Main Control Register
 * HAB Control
 */
union cavm_bbxb_abx_control_main
{
    uint64_t u;
    struct cavm_bbxb_abx_control_main_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t job_id_0              : 16; /**< [ 31: 16](R/W) Job ID 0 */
        uint64_t reserved_0_15         : 16;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_15         : 16;
        uint64_t job_id_0              : 16; /**< [ 31: 16](R/W) Job ID 0 */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_control_main_s cn; */
};
typedef union cavm_bbxb_abx_control_main cavm_bbxb_abx_control_main_t;

static inline uint64_t CAVM_BBXB_ABX_CONTROL_MAIN(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONTROL_MAIN(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042200000ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONTROL_MAIN", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONTROL_MAIN(a) cavm_bbxb_abx_control_main_t
#define bustype_CAVM_BBXB_ABX_CONTROL_MAIN(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONTROL_MAIN(a) "BBXB_ABX_CONTROL_MAIN"
#define busnum_CAVM_BBXB_ABX_CONTROL_MAIN(a) (a)
#define arguments_CAVM_BBXB_ABX_CONTROL_MAIN(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_control_status
 *
 * BBX2 Status Register
 * HAB Control
 */
union cavm_bbxb_abx_control_status
{
    uint64_t u;
    struct cavm_bbxb_abx_control_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_56_63        : 8;
        uint64_t job_cycle             : 24; /**< [ 55: 32](RO) Job Cycle Counter */
        uint64_t reserved_10_31        : 22;
        uint64_t main_fsm              : 5;  /**< [  9:  5](RO/H) BBX2 Main FSM state */
        uint64_t ready                 : 1;  /**< [  4:  4](RO/H) Ready to receive the next job */
        uint64_t reserved_1_3          : 3;
        uint64_t busy                  : 1;  /**< [  0:  0](RO) Busy for CONFIGURATION 0 */
#else /* Word 0 - Little Endian */
        uint64_t busy                  : 1;  /**< [  0:  0](RO) Busy for CONFIGURATION 0 */
        uint64_t reserved_1_3          : 3;
        uint64_t ready                 : 1;  /**< [  4:  4](RO/H) Ready to receive the next job */
        uint64_t main_fsm              : 5;  /**< [  9:  5](RO/H) BBX2 Main FSM state */
        uint64_t reserved_10_31        : 22;
        uint64_t job_cycle             : 24; /**< [ 55: 32](RO) Job Cycle Counter */
        uint64_t reserved_56_63        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_control_status_s cn; */
};
typedef union cavm_bbxb_abx_control_status cavm_bbxb_abx_control_status_t;

static inline uint64_t CAVM_BBXB_ABX_CONTROL_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_CONTROL_STATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042200018ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_CONTROL_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_CONTROL_STATUS(a) cavm_bbxb_abx_control_status_t
#define bustype_CAVM_BBXB_ABX_CONTROL_STATUS(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_CONTROL_STATUS(a) "BBXB_ABX_CONTROL_STATUS"
#define busnum_CAVM_BBXB_ABX_CONTROL_STATUS(a) (a)
#define arguments_CAVM_BBXB_ABX_CONTROL_STATUS(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_debug_00
 *
 * BBX2 Debug Register 0
 * HAB information
 */
union cavm_bbxb_abx_debug_00
{
    uint64_t u;
    struct cavm_bbxb_abx_debug_00_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t hab_info              : 64; /**< [ 63:  0](RO) -- */
#else /* Word 0 - Little Endian */
        uint64_t hab_info              : 64; /**< [ 63:  0](RO) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_debug_00_s cn; */
};
typedef union cavm_bbxb_abx_debug_00 cavm_bbxb_abx_debug_00_t;

static inline uint64_t CAVM_BBXB_ABX_DEBUG_00(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_DEBUG_00(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042201000ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_DEBUG_00", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_DEBUG_00(a) cavm_bbxb_abx_debug_00_t
#define bustype_CAVM_BBXB_ABX_DEBUG_00(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_DEBUG_00(a) "BBXB_ABX_DEBUG_00"
#define busnum_CAVM_BBXB_ABX_DEBUG_00(a) (a)
#define arguments_CAVM_BBXB_ABX_DEBUG_00(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_debug_01
 *
 * BBX2 Debug Register 1
 * HAB debug
 */
union cavm_bbxb_abx_debug_01
{
    uint64_t u;
    struct cavm_bbxb_abx_debug_01_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t hab_debug_0           : 64; /**< [ 63:  0](RO) -- */
#else /* Word 0 - Little Endian */
        uint64_t hab_debug_0           : 64; /**< [ 63:  0](RO) -- */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_debug_01_s cn; */
};
typedef union cavm_bbxb_abx_debug_01 cavm_bbxb_abx_debug_01_t;

static inline uint64_t CAVM_BBXB_ABX_DEBUG_01(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_DEBUG_01(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042201008ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_DEBUG_01", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_DEBUG_01(a) cavm_bbxb_abx_debug_01_t
#define bustype_CAVM_BBXB_ABX_DEBUG_01(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_DEBUG_01(a) "BBXB_ABX_DEBUG_01"
#define busnum_CAVM_BBXB_ABX_DEBUG_01(a) (a)
#define arguments_CAVM_BBXB_ABX_DEBUG_01(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_debug_02
 *
 * BBX2 Debug Register 2
 * HAB debug
 */
union cavm_bbxb_abx_debug_02
{
    uint64_t u;
    struct cavm_bbxb_abx_debug_02_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t hab_debug_1           : 8;  /**< [  7:  0](RO) -- */
#else /* Word 0 - Little Endian */
        uint64_t hab_debug_1           : 8;  /**< [  7:  0](RO) -- */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_debug_02_s cn; */
};
typedef union cavm_bbxb_abx_debug_02 cavm_bbxb_abx_debug_02_t;

static inline uint64_t CAVM_BBXB_ABX_DEBUG_02(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_DEBUG_02(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042201010ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_DEBUG_02", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_DEBUG_02(a) cavm_bbxb_abx_debug_02_t
#define bustype_CAVM_BBXB_ABX_DEBUG_02(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_DEBUG_02(a) "BBXB_ABX_DEBUG_02"
#define busnum_CAVM_BBXB_ABX_DEBUG_02(a) (a)
#define arguments_CAVM_BBXB_ABX_DEBUG_02(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_table_00
 *
 * BBX2 Table Register 0
 * Job Configuration
 */
union cavm_bbxb_abx_table_00
{
    uint64_t u;
    struct cavm_bbxb_abx_table_00_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_40_63        : 24;
        uint64_t table_00              : 40; /**< [ 39:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t table_00              : 40; /**< [ 39:  0](R/W) -- */
        uint64_t reserved_40_63        : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_table_00_s cn; */
};
typedef union cavm_bbxb_abx_table_00 cavm_bbxb_abx_table_00_t;

static inline uint64_t CAVM_BBXB_ABX_TABLE_00(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_TABLE_00(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042202288ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_TABLE_00", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_TABLE_00(a) cavm_bbxb_abx_table_00_t
#define bustype_CAVM_BBXB_ABX_TABLE_00(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_TABLE_00(a) "BBXB_ABX_TABLE_00"
#define busnum_CAVM_BBXB_ABX_TABLE_00(a) (a)
#define arguments_CAVM_BBXB_ABX_TABLE_00(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_table_01
 *
 * BBX2 Table Register 1
 * Job Configuration
 */
union cavm_bbxb_abx_table_01
{
    uint64_t u;
    struct cavm_bbxb_abx_table_01_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_40_63        : 24;
        uint64_t table_01              : 40; /**< [ 39:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t table_01              : 40; /**< [ 39:  0](R/W) -- */
        uint64_t reserved_40_63        : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_table_01_s cn; */
};
typedef union cavm_bbxb_abx_table_01 cavm_bbxb_abx_table_01_t;

static inline uint64_t CAVM_BBXB_ABX_TABLE_01(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_TABLE_01(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042202290ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_TABLE_01", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_TABLE_01(a) cavm_bbxb_abx_table_01_t
#define bustype_CAVM_BBXB_ABX_TABLE_01(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_TABLE_01(a) "BBXB_ABX_TABLE_01"
#define busnum_CAVM_BBXB_ABX_TABLE_01(a) (a)
#define arguments_CAVM_BBXB_ABX_TABLE_01(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_table_02
 *
 * BBX2 Table Register 2
 * Job Configuration
 */
union cavm_bbxb_abx_table_02
{
    uint64_t u;
    struct cavm_bbxb_abx_table_02_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_40_63        : 24;
        uint64_t table_02              : 40; /**< [ 39:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t table_02              : 40; /**< [ 39:  0](R/W) -- */
        uint64_t reserved_40_63        : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_table_02_s cn; */
};
typedef union cavm_bbxb_abx_table_02 cavm_bbxb_abx_table_02_t;

static inline uint64_t CAVM_BBXB_ABX_TABLE_02(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_TABLE_02(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e042202298ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_TABLE_02", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_TABLE_02(a) cavm_bbxb_abx_table_02_t
#define bustype_CAVM_BBXB_ABX_TABLE_02(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_TABLE_02(a) "BBXB_ABX_TABLE_02"
#define busnum_CAVM_BBXB_ABX_TABLE_02(a) (a)
#define arguments_CAVM_BBXB_ABX_TABLE_02(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_table_03
 *
 * BBX2 Table Register 3
 * Job Configuration
 */
union cavm_bbxb_abx_table_03
{
    uint64_t u;
    struct cavm_bbxb_abx_table_03_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_40_63        : 24;
        uint64_t table_03              : 40; /**< [ 39:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t table_03              : 40; /**< [ 39:  0](R/W) -- */
        uint64_t reserved_40_63        : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_table_03_s cn; */
};
typedef union cavm_bbxb_abx_table_03 cavm_bbxb_abx_table_03_t;

static inline uint64_t CAVM_BBXB_ABX_TABLE_03(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_TABLE_03(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0422022a0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_TABLE_03", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_TABLE_03(a) cavm_bbxb_abx_table_03_t
#define bustype_CAVM_BBXB_ABX_TABLE_03(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_TABLE_03(a) "BBXB_ABX_TABLE_03"
#define busnum_CAVM_BBXB_ABX_TABLE_03(a) (a)
#define arguments_CAVM_BBXB_ABX_TABLE_03(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_table_04
 *
 * BBX2 Table Register 4
 * Job Configuration
 */
union cavm_bbxb_abx_table_04
{
    uint64_t u;
    struct cavm_bbxb_abx_table_04_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_40_63        : 24;
        uint64_t table_04              : 40; /**< [ 39:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t table_04              : 40; /**< [ 39:  0](R/W) -- */
        uint64_t reserved_40_63        : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_table_04_s cn; */
};
typedef union cavm_bbxb_abx_table_04 cavm_bbxb_abx_table_04_t;

static inline uint64_t CAVM_BBXB_ABX_TABLE_04(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_TABLE_04(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0422022a8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_TABLE_04", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_TABLE_04(a) cavm_bbxb_abx_table_04_t
#define bustype_CAVM_BBXB_ABX_TABLE_04(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_TABLE_04(a) "BBXB_ABX_TABLE_04"
#define busnum_CAVM_BBXB_ABX_TABLE_04(a) (a)
#define arguments_CAVM_BBXB_ABX_TABLE_04(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_table_05
 *
 * BBX2 Table Register 5
 * Job Configuration
 */
union cavm_bbxb_abx_table_05
{
    uint64_t u;
    struct cavm_bbxb_abx_table_05_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_40_63        : 24;
        uint64_t table_05              : 40; /**< [ 39:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t table_05              : 40; /**< [ 39:  0](R/W) -- */
        uint64_t reserved_40_63        : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_table_05_s cn; */
};
typedef union cavm_bbxb_abx_table_05 cavm_bbxb_abx_table_05_t;

static inline uint64_t CAVM_BBXB_ABX_TABLE_05(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_TABLE_05(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0422022b0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_TABLE_05", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_TABLE_05(a) cavm_bbxb_abx_table_05_t
#define bustype_CAVM_BBXB_ABX_TABLE_05(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_TABLE_05(a) "BBXB_ABX_TABLE_05"
#define busnum_CAVM_BBXB_ABX_TABLE_05(a) (a)
#define arguments_CAVM_BBXB_ABX_TABLE_05(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_table_06
 *
 * BBX2 Table Register 6
 * Job Configuration
 */
union cavm_bbxb_abx_table_06
{
    uint64_t u;
    struct cavm_bbxb_abx_table_06_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_57_63        : 7;
        uint64_t table_06_0            : 25; /**< [ 56: 32](R/W) -- */
        uint64_t reserved_25_31        : 7;
        uint64_t table_06_1            : 25; /**< [ 24:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t table_06_1            : 25; /**< [ 24:  0](R/W) -- */
        uint64_t reserved_25_31        : 7;
        uint64_t table_06_0            : 25; /**< [ 56: 32](R/W) -- */
        uint64_t reserved_57_63        : 7;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_table_06_s cn; */
};
typedef union cavm_bbxb_abx_table_06 cavm_bbxb_abx_table_06_t;

static inline uint64_t CAVM_BBXB_ABX_TABLE_06(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_TABLE_06(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0422022b8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_TABLE_06", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_TABLE_06(a) cavm_bbxb_abx_table_06_t
#define bustype_CAVM_BBXB_ABX_TABLE_06(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_TABLE_06(a) "BBXB_ABX_TABLE_06"
#define busnum_CAVM_BBXB_ABX_TABLE_06(a) (a)
#define arguments_CAVM_BBXB_ABX_TABLE_06(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_table_07
 *
 * BBX2 Table Register 7
 * Job Configuration
 */
union cavm_bbxb_abx_table_07
{
    uint64_t u;
    struct cavm_bbxb_abx_table_07_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_57_63        : 7;
        uint64_t table_07_0            : 25; /**< [ 56: 32](R/W) -- */
        uint64_t reserved_25_31        : 7;
        uint64_t table_07_1            : 25; /**< [ 24:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t table_07_1            : 25; /**< [ 24:  0](R/W) -- */
        uint64_t reserved_25_31        : 7;
        uint64_t table_07_0            : 25; /**< [ 56: 32](R/W) -- */
        uint64_t reserved_57_63        : 7;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_table_07_s cn; */
};
typedef union cavm_bbxb_abx_table_07 cavm_bbxb_abx_table_07_t;

static inline uint64_t CAVM_BBXB_ABX_TABLE_07(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_TABLE_07(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0422022c0ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_TABLE_07", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_TABLE_07(a) cavm_bbxb_abx_table_07_t
#define bustype_CAVM_BBXB_ABX_TABLE_07(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_TABLE_07(a) "BBXB_ABX_TABLE_07"
#define busnum_CAVM_BBXB_ABX_TABLE_07(a) (a)
#define arguments_CAVM_BBXB_ABX_TABLE_07(a) (a),-1,-1,-1

/**
 * Register (RSL) bbxb_ab#_table_08
 *
 * BBX2 Table Register 8
 * Job Configuration
 */
union cavm_bbxb_abx_table_08
{
    uint64_t u;
    struct cavm_bbxb_abx_table_08_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_57_63        : 7;
        uint64_t table_08_0            : 25; /**< [ 56: 32](R/W) -- */
        uint64_t reserved_25_31        : 7;
        uint64_t table_08_1            : 25; /**< [ 24:  0](R/W) -- */
#else /* Word 0 - Little Endian */
        uint64_t table_08_1            : 25; /**< [ 24:  0](R/W) -- */
        uint64_t reserved_25_31        : 7;
        uint64_t table_08_0            : 25; /**< [ 56: 32](R/W) -- */
        uint64_t reserved_57_63        : 7;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bbxb_abx_table_08_s cn; */
};
typedef union cavm_bbxb_abx_table_08 cavm_bbxb_abx_table_08_t;

static inline uint64_t CAVM_BBXB_ABX_TABLE_08(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BBXB_ABX_TABLE_08(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0422022c8ll + 0x10000ll * ((a) & 0x3);
    __cavm_csr_fatal("BBXB_ABX_TABLE_08", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BBXB_ABX_TABLE_08(a) cavm_bbxb_abx_table_08_t
#define bustype_CAVM_BBXB_ABX_TABLE_08(a) CSR_TYPE_RSL
#define basename_CAVM_BBXB_ABX_TABLE_08(a) "BBXB_ABX_TABLE_08"
#define busnum_CAVM_BBXB_ABX_TABLE_08(a) (a)
#define arguments_CAVM_BBXB_ABX_TABLE_08(a) (a),-1,-1,-1

#endif /* __CAVM_CSRS_BBXB_H__ */
