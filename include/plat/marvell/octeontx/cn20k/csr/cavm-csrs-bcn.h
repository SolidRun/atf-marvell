#ifndef __CAVM_CSRS_BCN_H__
#define __CAVM_CSRS_BCN_H__
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
 * BCN.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration bcn_bar_e
 */
#define CAVM_BCN_BAR_E_BCN_PF_BAR2 (0x87e043040000ll)
#define CAVM_BCN_BAR_E_BCN_PF_BAR2_SIZE 0x40000ull

/**
 * Register (RSL) bcn_bclk_capture_cfg
 *
 * BCN BCLK-Domain Capture Configuration Register
 * This register controls the BCLK-domain snapshot capture
 * functionality of the BCN block.
 */
union cavm_bcn_bclk_capture_cfg
{
    uint64_t u;
    struct cavm_bcn_bclk_capture_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_10_63        : 54;
        uint64_t capt_trig             : 2;  /**< [  9:  8](R/W) Selects the trigger for a timestamp capture.
                                                                 0x0 = RP1 burst.
                                                                 0x1 = ref_in0.
                                                                 0x2 = ref_in1.
                                                                 0x3 = Software (capture occurs immediately). */
        uint64_t reserved_1_7          : 7;
        uint64_t capt_en               : 1;  /**< [  0:  0](R/W/H) Enables simultaneous capture of the various system
                                                                 timestamps (N1_N2, PSM subframe/tick, IEEE1914, and PTP).
                                                                 This bit resets to 0 after the capture occurs. */
#else /* Word 0 - Little Endian */
        uint64_t capt_en               : 1;  /**< [  0:  0](R/W/H) Enables simultaneous capture of the various system
                                                                 timestamps (N1_N2, PSM subframe/tick, IEEE1914, and PTP).
                                                                 This bit resets to 0 after the capture occurs. */
        uint64_t reserved_1_7          : 7;
        uint64_t capt_trig             : 2;  /**< [  9:  8](R/W) Selects the trigger for a timestamp capture.
                                                                 0x0 = RP1 burst.
                                                                 0x1 = ref_in0.
                                                                 0x2 = ref_in1.
                                                                 0x3 = Software (capture occurs immediately). */
        uint64_t reserved_10_63        : 54;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bcn_bclk_capture_cfg_s cn; */
};
typedef union cavm_bcn_bclk_capture_cfg cavm_bcn_bclk_capture_cfg_t;

#define CAVM_BCN_BCLK_CAPTURE_CFG CAVM_BCN_BCLK_CAPTURE_CFG_FUNC()
static inline uint64_t CAVM_BCN_BCLK_CAPTURE_CFG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BCN_BCLK_CAPTURE_CFG_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF20KA))
        return 0x87e043040500ll;
    __cavm_csr_fatal("BCN_BCLK_CAPTURE_CFG", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BCN_BCLK_CAPTURE_CFG cavm_bcn_bclk_capture_cfg_t
#define bustype_CAVM_BCN_BCLK_CAPTURE_CFG CSR_TYPE_RSL
#define basename_CAVM_BCN_BCLK_CAPTURE_CFG "BCN_BCLK_CAPTURE_CFG"
#define device_bar_CAVM_BCN_BCLK_CAPTURE_CFG 0x2 /* PF_BAR2 */
#define busnum_CAVM_BCN_BCLK_CAPTURE_CFG 0
#define arguments_CAVM_BCN_BCLK_CAPTURE_CFG -1,-1,-1,-1

/**
 * Register (RSL) bcn_bclk_capture_ieee1914
 *
 * BCLK-Domain BCN Capture IEEE 1914 Register
 * This register contains the IEEE 1914 timestamp value sampled at the
 * most recent BCLK-domain capture event.
 */
union cavm_bcn_bclk_capture_ieee1914
{
    uint64_t u;
    struct cavm_bcn_bclk_capture_ieee1914_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_29_63        : 35;
        uint64_t nsec                  : 24; /**< [ 28:  5](RO/H) Captured value of the IEEE 1914 timestamp integer
                                                                 nanosecond field. */
        uint64_t fnsec                 : 5;  /**< [  4:  0](RO/H) Captured value of the IEEE 1914 timestamp fractional
                                                                 nanosecond field. */
#else /* Word 0 - Little Endian */
        uint64_t fnsec                 : 5;  /**< [  4:  0](RO/H) Captured value of the IEEE 1914 timestamp fractional
                                                                 nanosecond field. */
        uint64_t nsec                  : 24; /**< [ 28:  5](RO/H) Captured value of the IEEE 1914 timestamp integer
                                                                 nanosecond field. */
        uint64_t reserved_29_63        : 35;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bcn_bclk_capture_ieee1914_s cn; */
};
typedef union cavm_bcn_bclk_capture_ieee1914 cavm_bcn_bclk_capture_ieee1914_t;

#define CAVM_BCN_BCLK_CAPTURE_IEEE1914 CAVM_BCN_BCLK_CAPTURE_IEEE1914_FUNC()
static inline uint64_t CAVM_BCN_BCLK_CAPTURE_IEEE1914_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BCN_BCLK_CAPTURE_IEEE1914_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF20KA))
        return 0x87e043040530ll;
    __cavm_csr_fatal("BCN_BCLK_CAPTURE_IEEE1914", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BCN_BCLK_CAPTURE_IEEE1914 cavm_bcn_bclk_capture_ieee1914_t
#define bustype_CAVM_BCN_BCLK_CAPTURE_IEEE1914 CSR_TYPE_RSL
#define basename_CAVM_BCN_BCLK_CAPTURE_IEEE1914 "BCN_BCLK_CAPTURE_IEEE1914"
#define device_bar_CAVM_BCN_BCLK_CAPTURE_IEEE1914 0x2 /* PF_BAR2 */
#define busnum_CAVM_BCN_BCLK_CAPTURE_IEEE1914 0
#define arguments_CAVM_BCN_BCLK_CAPTURE_IEEE1914 -1,-1,-1,-1

/**
 * Register (RSL) bcn_bclk_capture_n1_n2
 *
 * BCN BCLK-Domain Capture N1_N2 Register
 * This register contains the N1 and N2 timestamp values sampled
 * at the most recent BCLK-domain capture event.
 */
union cavm_bcn_bclk_capture_n1_n2
{
    uint64_t u;
    struct cavm_bcn_bclk_capture_n1_n2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t n1                    : 40; /**< [ 63: 24](RO/H) Captured value of the N1 counter. */
        uint64_t n2                    : 24; /**< [ 23:  0](RO/H) Captured value of the N2 counter. */
#else /* Word 0 - Little Endian */
        uint64_t n2                    : 24; /**< [ 23:  0](RO/H) Captured value of the N2 counter. */
        uint64_t n1                    : 40; /**< [ 63: 24](RO/H) Captured value of the N1 counter. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bcn_bclk_capture_n1_n2_s cn; */
};
typedef union cavm_bcn_bclk_capture_n1_n2 cavm_bcn_bclk_capture_n1_n2_t;

#define CAVM_BCN_BCLK_CAPTURE_N1_N2 CAVM_BCN_BCLK_CAPTURE_N1_N2_FUNC()
static inline uint64_t CAVM_BCN_BCLK_CAPTURE_N1_N2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BCN_BCLK_CAPTURE_N1_N2_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF20KA))
        return 0x87e043040510ll;
    __cavm_csr_fatal("BCN_BCLK_CAPTURE_N1_N2", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BCN_BCLK_CAPTURE_N1_N2 cavm_bcn_bclk_capture_n1_n2_t
#define bustype_CAVM_BCN_BCLK_CAPTURE_N1_N2 CSR_TYPE_RSL
#define basename_CAVM_BCN_BCLK_CAPTURE_N1_N2 "BCN_BCLK_CAPTURE_N1_N2"
#define device_bar_CAVM_BCN_BCLK_CAPTURE_N1_N2 0x2 /* PF_BAR2 */
#define busnum_CAVM_BCN_BCLK_CAPTURE_N1_N2 0
#define arguments_CAVM_BCN_BCLK_CAPTURE_N1_N2 -1,-1,-1,-1

/**
 * Register (RSL) bcn_bclk_capture_psm
 *
 * BCN BCLK-Domain Capture PSM Register
 * This register contains the PSM subframe and tick values sampled
 * at the most recent BCLK-domain capture event.
 */
union cavm_bcn_bclk_capture_psm
{
    uint64_t u;
    struct cavm_bcn_bclk_capture_psm_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_20_63        : 44;
        uint64_t sf                    : 4;  /**< [ 19: 16](RO/H) Captured value of the PSM subframe counter. */
        uint64_t tick                  : 16; /**< [ 15:  0](RO/H) Captured value of the PSM tick counter. */
#else /* Word 0 - Little Endian */
        uint64_t tick                  : 16; /**< [ 15:  0](RO/H) Captured value of the PSM tick counter. */
        uint64_t sf                    : 4;  /**< [ 19: 16](RO/H) Captured value of the PSM subframe counter. */
        uint64_t reserved_20_63        : 44;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bcn_bclk_capture_psm_s cn; */
};
typedef union cavm_bcn_bclk_capture_psm cavm_bcn_bclk_capture_psm_t;

#define CAVM_BCN_BCLK_CAPTURE_PSM CAVM_BCN_BCLK_CAPTURE_PSM_FUNC()
static inline uint64_t CAVM_BCN_BCLK_CAPTURE_PSM_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BCN_BCLK_CAPTURE_PSM_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF20KA))
        return 0x87e043040520ll;
    __cavm_csr_fatal("BCN_BCLK_CAPTURE_PSM", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BCN_BCLK_CAPTURE_PSM cavm_bcn_bclk_capture_psm_t
#define bustype_CAVM_BCN_BCLK_CAPTURE_PSM CSR_TYPE_RSL
#define basename_CAVM_BCN_BCLK_CAPTURE_PSM "BCN_BCLK_CAPTURE_PSM"
#define device_bar_CAVM_BCN_BCLK_CAPTURE_PSM 0x2 /* PF_BAR2 */
#define busnum_CAVM_BCN_BCLK_CAPTURE_PSM 0
#define arguments_CAVM_BCN_BCLK_CAPTURE_PSM -1,-1,-1,-1

/**
 * Register (RSL) bcn_bclk_capture_ptp
 *
 * BCN BCLK-Domain Capture PTP Register
 * This register contains the PTP timestamp value sampled at the
 * most recent BCLK-domain capture event.
 */
union cavm_bcn_bclk_capture_ptp
{
    uint64_t u;
    struct cavm_bcn_bclk_capture_ptp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ptp                   : 64; /**< [ 63:  0](RO/H) Captured value of the PTP timestamp. */
#else /* Word 0 - Little Endian */
        uint64_t ptp                   : 64; /**< [ 63:  0](RO/H) Captured value of the PTP timestamp. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bcn_bclk_capture_ptp_s cn; */
};
typedef union cavm_bcn_bclk_capture_ptp cavm_bcn_bclk_capture_ptp_t;

#define CAVM_BCN_BCLK_CAPTURE_PTP CAVM_BCN_BCLK_CAPTURE_PTP_FUNC()
static inline uint64_t CAVM_BCN_BCLK_CAPTURE_PTP_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BCN_BCLK_CAPTURE_PTP_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF20KA))
        return 0x87e043040540ll;
    __cavm_csr_fatal("BCN_BCLK_CAPTURE_PTP", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BCN_BCLK_CAPTURE_PTP cavm_bcn_bclk_capture_ptp_t
#define bustype_CAVM_BCN_BCLK_CAPTURE_PTP CSR_TYPE_RSL
#define basename_CAVM_BCN_BCLK_CAPTURE_PTP "BCN_BCLK_CAPTURE_PTP"
#define device_bar_CAVM_BCN_BCLK_CAPTURE_PTP 0x2 /* PF_BAR2 */
#define busnum_CAVM_BCN_BCLK_CAPTURE_PTP 0
#define arguments_CAVM_BCN_BCLK_CAPTURE_PTP -1,-1,-1,-1

/**
 * Register (RSL) bcn_capture_cfg
 *
 * BCN Capture Configuration Register
 * This register controls the capture functionality of the BCN block.
 */
union cavm_bcn_capture_cfg
{
    uint64_t u;
    struct cavm_bcn_capture_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_10_63        : 54;
        uint64_t capt_trig             : 2;  /**< [  9:  8](R/W) Selects the trigger for a timestamp capture.
                                                                 0x0 = RP1 burst.
                                                                 0x1 = ref_in0.
                                                                 0x2 = ref_in1.
                                                                 0x3 = Software (capture occurs immediately). */
        uint64_t reserved_1_7          : 7;
        uint64_t capt_en               : 1;  /**< [  0:  0](R/W/H) Enables simultaneous capture of the various system
                                                                 timestamps (N1_N2, PSM subframe/tick, IEEE1914, and PTP).
                                                                 This bit resets to 0 after the capture occurs. */
#else /* Word 0 - Little Endian */
        uint64_t capt_en               : 1;  /**< [  0:  0](R/W/H) Enables simultaneous capture of the various system
                                                                 timestamps (N1_N2, PSM subframe/tick, IEEE1914, and PTP).
                                                                 This bit resets to 0 after the capture occurs. */
        uint64_t reserved_1_7          : 7;
        uint64_t capt_trig             : 2;  /**< [  9:  8](R/W) Selects the trigger for a timestamp capture.
                                                                 0x0 = RP1 burst.
                                                                 0x1 = ref_in0.
                                                                 0x2 = ref_in1.
                                                                 0x3 = Software (capture occurs immediately). */
        uint64_t reserved_10_63        : 54;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bcn_capture_cfg_s cn; */
};
typedef union cavm_bcn_capture_cfg cavm_bcn_capture_cfg_t;

#define CAVM_BCN_CAPTURE_CFG CAVM_BCN_CAPTURE_CFG_FUNC()
static inline uint64_t CAVM_BCN_CAPTURE_CFG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BCN_CAPTURE_CFG_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF20KA))
        return 0x87e043041500ll;
    __cavm_csr_fatal("BCN_CAPTURE_CFG", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BCN_CAPTURE_CFG cavm_bcn_capture_cfg_t
#define bustype_CAVM_BCN_CAPTURE_CFG CSR_TYPE_RSL
#define basename_CAVM_BCN_CAPTURE_CFG "BCN_CAPTURE_CFG"
#define device_bar_CAVM_BCN_CAPTURE_CFG 0x2 /* PF_BAR2 */
#define busnum_CAVM_BCN_CAPTURE_CFG 0
#define arguments_CAVM_BCN_CAPTURE_CFG -1,-1,-1,-1

/**
 * Register (RSL) bcn_capture_ieee1914
 *
 * BCN Capture IEEE 1914 Register
 * This register contains the IEEE 1914 timestamp value sampled at the
 * most recent capture event.
 */
union cavm_bcn_capture_ieee1914
{
    uint64_t u;
    struct cavm_bcn_capture_ieee1914_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_29_63        : 35;
        uint64_t nsec                  : 24; /**< [ 28:  5](RO/H) Captured value of the IEEE 1914 timestamp integer
                                                                 nanosecond field. */
        uint64_t fnsec                 : 5;  /**< [  4:  0](RO/H) Captured value of the IEEE 1914 timestamp fractional
                                                                 nanosecond field. */
#else /* Word 0 - Little Endian */
        uint64_t fnsec                 : 5;  /**< [  4:  0](RO/H) Captured value of the IEEE 1914 timestamp fractional
                                                                 nanosecond field. */
        uint64_t nsec                  : 24; /**< [ 28:  5](RO/H) Captured value of the IEEE 1914 timestamp integer
                                                                 nanosecond field. */
        uint64_t reserved_29_63        : 35;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bcn_capture_ieee1914_s cn; */
};
typedef union cavm_bcn_capture_ieee1914 cavm_bcn_capture_ieee1914_t;

#define CAVM_BCN_CAPTURE_IEEE1914 CAVM_BCN_CAPTURE_IEEE1914_FUNC()
static inline uint64_t CAVM_BCN_CAPTURE_IEEE1914_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BCN_CAPTURE_IEEE1914_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF20KA))
        return 0x87e043041530ll;
    __cavm_csr_fatal("BCN_CAPTURE_IEEE1914", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BCN_CAPTURE_IEEE1914 cavm_bcn_capture_ieee1914_t
#define bustype_CAVM_BCN_CAPTURE_IEEE1914 CSR_TYPE_RSL
#define basename_CAVM_BCN_CAPTURE_IEEE1914 "BCN_CAPTURE_IEEE1914"
#define device_bar_CAVM_BCN_CAPTURE_IEEE1914 0x2 /* PF_BAR2 */
#define busnum_CAVM_BCN_CAPTURE_IEEE1914 0
#define arguments_CAVM_BCN_CAPTURE_IEEE1914 -1,-1,-1,-1

/**
 * Register (RSL) bcn_capture_n1_n2
 *
 * BCN Capture N1_N2 Register
 * This register contains the N1 and N2 timestamp values sampled
 * at the most recent capture event.
 */
union cavm_bcn_capture_n1_n2
{
    uint64_t u;
    struct cavm_bcn_capture_n1_n2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t n1                    : 40; /**< [ 63: 24](RO/H) Captured value of the N1 counter. */
        uint64_t n2                    : 24; /**< [ 23:  0](RO/H) Captured value of the N2 counter. */
#else /* Word 0 - Little Endian */
        uint64_t n2                    : 24; /**< [ 23:  0](RO/H) Captured value of the N2 counter. */
        uint64_t n1                    : 40; /**< [ 63: 24](RO/H) Captured value of the N1 counter. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bcn_capture_n1_n2_s cn; */
};
typedef union cavm_bcn_capture_n1_n2 cavm_bcn_capture_n1_n2_t;

#define CAVM_BCN_CAPTURE_N1_N2 CAVM_BCN_CAPTURE_N1_N2_FUNC()
static inline uint64_t CAVM_BCN_CAPTURE_N1_N2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BCN_CAPTURE_N1_N2_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF20KA))
        return 0x87e043041510ll;
    __cavm_csr_fatal("BCN_CAPTURE_N1_N2", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BCN_CAPTURE_N1_N2 cavm_bcn_capture_n1_n2_t
#define bustype_CAVM_BCN_CAPTURE_N1_N2 CSR_TYPE_RSL
#define basename_CAVM_BCN_CAPTURE_N1_N2 "BCN_CAPTURE_N1_N2"
#define device_bar_CAVM_BCN_CAPTURE_N1_N2 0x2 /* PF_BAR2 */
#define busnum_CAVM_BCN_CAPTURE_N1_N2 0
#define arguments_CAVM_BCN_CAPTURE_N1_N2 -1,-1,-1,-1

/**
 * Register (RSL) bcn_capture_psm
 *
 * BCN Capture PSM Register
 * This register contains the PSM subframe and tick values sampled
 * at the most recent capture event.
 */
union cavm_bcn_capture_psm
{
    uint64_t u;
    struct cavm_bcn_capture_psm_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_20_63        : 44;
        uint64_t sf                    : 4;  /**< [ 19: 16](RO/H) Captured value of the PSM subframe counter. */
        uint64_t tick                  : 16; /**< [ 15:  0](RO/H) Captured value of the PSM tick counter. */
#else /* Word 0 - Little Endian */
        uint64_t tick                  : 16; /**< [ 15:  0](RO/H) Captured value of the PSM tick counter. */
        uint64_t sf                    : 4;  /**< [ 19: 16](RO/H) Captured value of the PSM subframe counter. */
        uint64_t reserved_20_63        : 44;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bcn_capture_psm_s cn; */
};
typedef union cavm_bcn_capture_psm cavm_bcn_capture_psm_t;

#define CAVM_BCN_CAPTURE_PSM CAVM_BCN_CAPTURE_PSM_FUNC()
static inline uint64_t CAVM_BCN_CAPTURE_PSM_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BCN_CAPTURE_PSM_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF20KA))
        return 0x87e043041520ll;
    __cavm_csr_fatal("BCN_CAPTURE_PSM", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BCN_CAPTURE_PSM cavm_bcn_capture_psm_t
#define bustype_CAVM_BCN_CAPTURE_PSM CSR_TYPE_RSL
#define basename_CAVM_BCN_CAPTURE_PSM "BCN_CAPTURE_PSM"
#define device_bar_CAVM_BCN_CAPTURE_PSM 0x2 /* PF_BAR2 */
#define busnum_CAVM_BCN_CAPTURE_PSM 0
#define arguments_CAVM_BCN_CAPTURE_PSM -1,-1,-1,-1

/**
 * Register (RSL) bcn_capture_ptp
 *
 * BCN Capture PTP Register
 * This register contains the PTP timestamp value sampled at the
 * most recent capture event.
 */
union cavm_bcn_capture_ptp
{
    uint64_t u;
    struct cavm_bcn_capture_ptp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ptp                   : 64; /**< [ 63:  0](RO/H) Captured value of the PTP timestamp. */
#else /* Word 0 - Little Endian */
        uint64_t ptp                   : 64; /**< [ 63:  0](RO/H) Captured value of the PTP timestamp. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bcn_capture_ptp_s cn; */
};
typedef union cavm_bcn_capture_ptp cavm_bcn_capture_ptp_t;

#define CAVM_BCN_CAPTURE_PTP CAVM_BCN_CAPTURE_PTP_FUNC()
static inline uint64_t CAVM_BCN_CAPTURE_PTP_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BCN_CAPTURE_PTP_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF20KA))
        return 0x87e043041540ll;
    __cavm_csr_fatal("BCN_CAPTURE_PTP", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BCN_CAPTURE_PTP cavm_bcn_capture_ptp_t
#define bustype_CAVM_BCN_CAPTURE_PTP CSR_TYPE_RSL
#define basename_CAVM_BCN_CAPTURE_PTP "BCN_CAPTURE_PTP"
#define device_bar_CAVM_BCN_CAPTURE_PTP 0x2 /* PF_BAR2 */
#define busnum_CAVM_BCN_CAPTURE_PTP 0
#define arguments_CAVM_BCN_CAPTURE_PTP -1,-1,-1,-1

/**
 * Register (RSL) bcn_cfg
 *
 * BCN Configuration Register
 * This register controls the basic functionality of the BCN block.  It
 * is also used to initiate timestamp synchronization operations.
 */
union cavm_bcn_cfg
{
    uint64_t u;
    struct cavm_bcn_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t extend_cdc            : 4;  /**< [ 31: 28](R/W) Reserved. */
        uint64_t reserved_25_27        : 3;
        uint64_t nfb_cdc               : 1;  /**< [ 24: 24](R/W) Reserved. */
        uint64_t sample_rate           : 4;  /**< [ 23: 20](R/W) Rate in BCN4X_CLK cycles to sample the timestamp values to be
                                                                 passed to the BCLK domain.  The recommended setting will depend
                                                                 on the BCLK frequency. */
        uint64_t reserved_17_19        : 3;
        uint64_t delta_en              : 1;  /**< [ 16: 16](R/W/H) Initiates a delta adjustment of the N1_N2 counter.  When
                                                                 written 1, the adjustment value from BCN_DELTA_VAL[N1] and [N2]
                                                                 will be added to the N1_N2 counter upon the next N2 wrap.
                                                                 This bit resets to 0 when the adjustment occurs.  Delta
                                                                 adjustment must not be enabled while [SYNC_EN] is set. */
        uint64_t reserved_10_15        : 6;
        uint64_t ref_in1_pol           : 1;  /**< [  9:  9](R/W) Active polarity for the ref_in1 input.
                                                                 1 = active on rising edge.
                                                                 0 = active on falling edge. */
        uint64_t ref_in0_pol           : 1;  /**< [  8:  8](R/W) Active polarity for the ref_in0 input.
                                                                 1 = active on rising edge.
                                                                 0 = active on falling edge. */
        uint64_t reserved_6_7          : 2;
        uint64_t sync_trig             : 2;  /**< [  5:  4](R/W) Selects the trigger for a synchronization event.
                                                                 0x0 = RP1 burst.
                                                                 0x1 = ref_in0.
                                                                 0x2 = ref_in1.
                                                                 0x3 = Software (synchronization occurs upon setting [SYNC_EN] to 1). */
        uint64_t reserved_3            : 1;
        uint64_t sync_time_src         : 1;  /**< [  2:  2](R/W) Selects the source for the new N1 value at the synchronization
                                                                 event.
                                                                 0 = RP1 burst. See also BCN_RP1_CTRL[N1_LEN].
                                                                 1 = BCN_SYNC_VAL register. */
        uint64_t sync_en               : 1;  /**< [  1:  1](R/W/H) Enables synchronization of the N1_N2 counter at the trigger event
                                                                 selected by [SYNC_TRIG].  This bit resets to 0 after the
                                                                 synchronization occurs. */
        uint64_t bcn_enable            : 1;  /**< [  0:  0](R/W) Enables the BCN block. */
#else /* Word 0 - Little Endian */
        uint64_t bcn_enable            : 1;  /**< [  0:  0](R/W) Enables the BCN block. */
        uint64_t sync_en               : 1;  /**< [  1:  1](R/W/H) Enables synchronization of the N1_N2 counter at the trigger event
                                                                 selected by [SYNC_TRIG].  This bit resets to 0 after the
                                                                 synchronization occurs. */
        uint64_t sync_time_src         : 1;  /**< [  2:  2](R/W) Selects the source for the new N1 value at the synchronization
                                                                 event.
                                                                 0 = RP1 burst. See also BCN_RP1_CTRL[N1_LEN].
                                                                 1 = BCN_SYNC_VAL register. */
        uint64_t reserved_3            : 1;
        uint64_t sync_trig             : 2;  /**< [  5:  4](R/W) Selects the trigger for a synchronization event.
                                                                 0x0 = RP1 burst.
                                                                 0x1 = ref_in0.
                                                                 0x2 = ref_in1.
                                                                 0x3 = Software (synchronization occurs upon setting [SYNC_EN] to 1). */
        uint64_t reserved_6_7          : 2;
        uint64_t ref_in0_pol           : 1;  /**< [  8:  8](R/W) Active polarity for the ref_in0 input.
                                                                 1 = active on rising edge.
                                                                 0 = active on falling edge. */
        uint64_t ref_in1_pol           : 1;  /**< [  9:  9](R/W) Active polarity for the ref_in1 input.
                                                                 1 = active on rising edge.
                                                                 0 = active on falling edge. */
        uint64_t reserved_10_15        : 6;
        uint64_t delta_en              : 1;  /**< [ 16: 16](R/W/H) Initiates a delta adjustment of the N1_N2 counter.  When
                                                                 written 1, the adjustment value from BCN_DELTA_VAL[N1] and [N2]
                                                                 will be added to the N1_N2 counter upon the next N2 wrap.
                                                                 This bit resets to 0 when the adjustment occurs.  Delta
                                                                 adjustment must not be enabled while [SYNC_EN] is set. */
        uint64_t reserved_17_19        : 3;
        uint64_t sample_rate           : 4;  /**< [ 23: 20](R/W) Rate in BCN4X_CLK cycles to sample the timestamp values to be
                                                                 passed to the BCLK domain.  The recommended setting will depend
                                                                 on the BCLK frequency. */
        uint64_t nfb_cdc               : 1;  /**< [ 24: 24](R/W) Reserved. */
        uint64_t reserved_25_27        : 3;
        uint64_t extend_cdc            : 4;  /**< [ 31: 28](R/W) Reserved. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bcn_cfg_s cn; */
};
typedef union cavm_bcn_cfg cavm_bcn_cfg_t;

#define CAVM_BCN_CFG CAVM_BCN_CFG_FUNC()
static inline uint64_t CAVM_BCN_CFG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BCN_CFG_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF20KA))
        return 0x87e043041000ll;
    __cavm_csr_fatal("BCN_CFG", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BCN_CFG cavm_bcn_cfg_t
#define bustype_CAVM_BCN_CFG CSR_TYPE_RSL
#define basename_CAVM_BCN_CFG "BCN_CFG"
#define device_bar_CAVM_BCN_CFG 0x2 /* PF_BAR2 */
#define busnum_CAVM_BCN_CFG 0
#define arguments_CAVM_BCN_CFG -1,-1,-1,-1

/**
 * Register (RSL) bcn_cfg2
 *
 * BCN Configuration Register
 * This register configures certain operating parameters of the
 * BCN module.  The default values will provide for correct operation
 * with the intended clock frequencies.  These parameters may be changed
 * for verification or validation purposes.
 */
union cavm_bcn_cfg2
{
    uint64_t u;
    struct cavm_bcn_cfg2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t bcn_pps_mode          : 1;  /**< [ 63: 63](R/W) Selects logic for PPS output.
                                                                 1 = Frame counter based on N2 strobe.  The PPS output will toggle
                                                                 after the N2 field rolls over 50 times.
                                                                 0 = Timer2 instance. */
        uint64_t bcn_capture_mode      : 1;  /**< [ 62: 62](R/W) Selects repeat capture behavior.
                                                                 1 = Capture repeats as long as enabled.
                                                                 0 = One-shot capture. */
        uint64_t bcn_delta_wrap_mode   : 1;  /**< [ 61: 61](R/W) Selects delta wrap behavior.
                                                                 1 = Delta adjustment occurs in cycle where N2 wrap would
                                                                 have occurred.
                                                                 0 = Delta adjustment occurs in cycle following the N2 wrap. */
        uint64_t bcn_delta_n1_formula  : 1;  /**< [ 60: 60](R/W) Selects delta adjustment formula for N1.
                                                                 1 = DELTA_N1 is applied to post-wrap N1 value.
                                                                 0 = DELTA_N1 is applied to pre-wrap N1 value with extra
                                                                 decrement factor. */
        uint64_t reserved_57_59        : 3;
        uint64_t rp1_bit_per           : 9;  /**< [ 56: 48](R/W) Bit period of the RP1 serial burst, in bcn4x_clk cycles.
                                                                 The default value corresponds to a 3.84 MHz RP1 burst when the
                                                                 bcn4x_clk is running at 1.2288 GHz. */
        uint64_t reserved_40_47        : 8;
        uint64_t n2_step               : 8;  /**< [ 39: 32](R/W) Value at which the N2 counter increments for each bcn4x_clk cycle.
                                                                 The default value corresponds to a 1.2288 GHz bcn4x_clk. */
        uint64_t reserved_24_31        : 8;
        uint64_t n2_len                : 24; /**< [ 23:  0](R/W) Length of the period in which the N2 counter wraps. The default
                                                                 value corresponds to a 10 msec frame when the N2 units are
                                                                 UTU (1.2288 GHz cycles). */
#else /* Word 0 - Little Endian */
        uint64_t n2_len                : 24; /**< [ 23:  0](R/W) Length of the period in which the N2 counter wraps. The default
                                                                 value corresponds to a 10 msec frame when the N2 units are
                                                                 UTU (1.2288 GHz cycles). */
        uint64_t reserved_24_31        : 8;
        uint64_t n2_step               : 8;  /**< [ 39: 32](R/W) Value at which the N2 counter increments for each bcn4x_clk cycle.
                                                                 The default value corresponds to a 1.2288 GHz bcn4x_clk. */
        uint64_t reserved_40_47        : 8;
        uint64_t rp1_bit_per           : 9;  /**< [ 56: 48](R/W) Bit period of the RP1 serial burst, in bcn4x_clk cycles.
                                                                 The default value corresponds to a 3.84 MHz RP1 burst when the
                                                                 bcn4x_clk is running at 1.2288 GHz. */
        uint64_t reserved_57_59        : 3;
        uint64_t bcn_delta_n1_formula  : 1;  /**< [ 60: 60](R/W) Selects delta adjustment formula for N1.
                                                                 1 = DELTA_N1 is applied to post-wrap N1 value.
                                                                 0 = DELTA_N1 is applied to pre-wrap N1 value with extra
                                                                 decrement factor. */
        uint64_t bcn_delta_wrap_mode   : 1;  /**< [ 61: 61](R/W) Selects delta wrap behavior.
                                                                 1 = Delta adjustment occurs in cycle where N2 wrap would
                                                                 have occurred.
                                                                 0 = Delta adjustment occurs in cycle following the N2 wrap. */
        uint64_t bcn_capture_mode      : 1;  /**< [ 62: 62](R/W) Selects repeat capture behavior.
                                                                 1 = Capture repeats as long as enabled.
                                                                 0 = One-shot capture. */
        uint64_t bcn_pps_mode          : 1;  /**< [ 63: 63](R/W) Selects logic for PPS output.
                                                                 1 = Frame counter based on N2 strobe.  The PPS output will toggle
                                                                 after the N2 field rolls over 50 times.
                                                                 0 = Timer2 instance. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bcn_cfg2_s cn; */
};
typedef union cavm_bcn_cfg2 cavm_bcn_cfg2_t;

#define CAVM_BCN_CFG2 CAVM_BCN_CFG2_FUNC()
static inline uint64_t CAVM_BCN_CFG2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BCN_CFG2_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF20KA))
        return 0x87e043043000ll;
    __cavm_csr_fatal("BCN_CFG2", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BCN_CFG2 cavm_bcn_cfg2_t
#define bustype_CAVM_BCN_CFG2 CSR_TYPE_RSL
#define basename_CAVM_BCN_CFG2 "BCN_CFG2"
#define device_bar_CAVM_BCN_CFG2 0x2 /* PF_BAR2 */
#define busnum_CAVM_BCN_CFG2 0
#define arguments_CAVM_BCN_CFG2 -1,-1,-1,-1

/**
 * Register (RSL) bcn_ctrl
 *
 * BCN Control Register
 * This register is used to configure the clock domain crossing to
 * the bcn4x_clk domain.  The bcn4x_clk is the 1.2288 GHz clock
 * generated by the BCN_PLL, and runs much of the BCN logic and
 * registers.  It must be properly initialized before using the
 * bcn4x_clk domain logic of the BCN block.
 */
union cavm_bcn_ctrl
{
    uint64_t u;
    struct cavm_bcn_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_63           : 1;
        uint64_t cpriclk_rst_n         : 1;  /**< [ 62: 62](R/W) Reset for the bcn4x_clk domain logic of the BCN. */
        uint64_t cpriclk_rst_done      : 1;  /**< [ 61: 61](RO/H) Indicates the bcn4x_clk reset has completed. */
        uint64_t cpriclk_clk_check     : 1;  /**< [ 60: 60](R/W/H) Used to check the presence of the bcn4x_clk.  See
                                                                 [CPRICLK_CLK_ACTIVE] for more details. */
        uint64_t cpriclk_clk_active    : 1;  /**< [ 59: 59](RO/H) Indicates the activity of the bcn4x_clk.  When
                                                                 [CPRICLK_CLK_CHECK] is written to 1, the previous clock status
                                                                 is cleared.  After a rising edge and falling edge of the bcn4x_clk
                                                                 clock are detected, the [CPRICLK_CLK_ACTIVE] bit will become 1,
                                                                 and the [CPRICLK_CLK_CHECK] bit will return to 0. */
        uint64_t reserved_57_58        : 2;
        uint64_t cpriclk_domain_dis    : 1;  /**< [ 56: 56](R/W) Isolates the bcn4x_clk domain logic of the BCN until it is
                                                                 properly configured.
                                                                 1 = bcn4x_clk domain is disabled and most BCN registers and
                                                                 functionality is unavailable.
                                                                 0 = bcn4x_clk domain is enabled. */
        uint64_t reserved_0_55         : 56;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_55         : 56;
        uint64_t cpriclk_domain_dis    : 1;  /**< [ 56: 56](R/W) Isolates the bcn4x_clk domain logic of the BCN until it is
                                                                 properly configured.
                                                                 1 = bcn4x_clk domain is disabled and most BCN registers and
                                                                 functionality is unavailable.
                                                                 0 = bcn4x_clk domain is enabled. */
        uint64_t reserved_57_58        : 2;
        uint64_t cpriclk_clk_active    : 1;  /**< [ 59: 59](RO/H) Indicates the activity of the bcn4x_clk.  When
                                                                 [CPRICLK_CLK_CHECK] is written to 1, the previous clock status
                                                                 is cleared.  After a rising edge and falling edge of the bcn4x_clk
                                                                 clock are detected, the [CPRICLK_CLK_ACTIVE] bit will become 1,
                                                                 and the [CPRICLK_CLK_CHECK] bit will return to 0. */
        uint64_t cpriclk_clk_check     : 1;  /**< [ 60: 60](R/W/H) Used to check the presence of the bcn4x_clk.  See
                                                                 [CPRICLK_CLK_ACTIVE] for more details. */
        uint64_t cpriclk_rst_done      : 1;  /**< [ 61: 61](RO/H) Indicates the bcn4x_clk reset has completed. */
        uint64_t cpriclk_rst_n         : 1;  /**< [ 62: 62](R/W) Reset for the bcn4x_clk domain logic of the BCN. */
        uint64_t reserved_63           : 1;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bcn_ctrl_s cn; */
};
typedef union cavm_bcn_ctrl cavm_bcn_ctrl_t;

#define CAVM_BCN_CTRL CAVM_BCN_CTRL_FUNC()
static inline uint64_t CAVM_BCN_CTRL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BCN_CTRL_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF20KA))
        return 0x87e043040100ll;
    __cavm_csr_fatal("BCN_CTRL", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BCN_CTRL cavm_bcn_ctrl_t
#define bustype_CAVM_BCN_CTRL CSR_TYPE_RSL
#define basename_CAVM_BCN_CTRL "BCN_CTRL"
#define device_bar_CAVM_BCN_CTRL 0x2 /* PF_BAR2 */
#define busnum_CAVM_BCN_CTRL 0
#define arguments_CAVM_BCN_CTRL -1,-1,-1,-1

/**
 * Register (RSL) bcn_delta_val
 *
 * BCN Delta Adjustment Value Register
 * This register is used to configure the N1 and N2 values that will
 * be used for the delta adjustment.  This register is treated as a
 * two's complement value, so if bit 63 is 1, the delta adjustment is
 * a subtraction.
 */
union cavm_bcn_delta_val
{
    uint64_t u;
    struct cavm_bcn_delta_val_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t n1                    : 40; /**< [ 63: 24](R/W) The N1 value to be used for delta adjustment. */
        uint64_t n2                    : 24; /**< [ 23:  0](R/W) The N2 value to be used for delta adjustment. */
#else /* Word 0 - Little Endian */
        uint64_t n2                    : 24; /**< [ 23:  0](R/W) The N2 value to be used for delta adjustment. */
        uint64_t n1                    : 40; /**< [ 63: 24](R/W) The N1 value to be used for delta adjustment. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bcn_delta_val_s cn; */
};
typedef union cavm_bcn_delta_val cavm_bcn_delta_val_t;

#define CAVM_BCN_DELTA_VAL CAVM_BCN_DELTA_VAL_FUNC()
static inline uint64_t CAVM_BCN_DELTA_VAL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BCN_DELTA_VAL_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF20KA))
        return 0x87e043041030ll;
    __cavm_csr_fatal("BCN_DELTA_VAL", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BCN_DELTA_VAL cavm_bcn_delta_val_t
#define bustype_CAVM_BCN_DELTA_VAL CSR_TYPE_RSL
#define basename_CAVM_BCN_DELTA_VAL "BCN_DELTA_VAL"
#define device_bar_CAVM_BCN_DELTA_VAL 0x2 /* PF_BAR2 */
#define busnum_CAVM_BCN_DELTA_VAL 0
#define arguments_CAVM_BCN_DELTA_VAL -1,-1,-1,-1

/**
 * Register (RSL) bcn_hdlc_sel
 *
 * BCN CPRI HDLC Enable Register
 * This register is used to enable the HDLC outputs from one of
 * the CPRI blocks.
 */
union cavm_bcn_hdlc_sel
{
    uint64_t u;
    struct cavm_bcn_hdlc_sel_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_9_63         : 55;
        uint64_t cpri_hdlc_en          : 1;  /**< [  8:  8](R/W) Enables HDLC output from the CPRI block selected by [CPRI_HDLC_ID]. */
        uint64_t reserved_3_7          : 5;
        uint64_t cpri_hdlc_id          : 3;  /**< [  2:  0](R/W) Selects the CPRI MAC to drive HDLC output.  Valid range is [0,5].
                                                                 0x0 = CPRI0 MAC0.
                                                                 0x1 = CPRI0 MAC1.
                                                                 0x2 = CPRI1 MAC0.
                                                                 0x3 = CPRI1 MAC1.
                                                                 0x4 = CPRI2 MAC0.
                                                                 0x5 = CPRI2 MAC1.
                                                                 0x6, 0x7 = Reserved. */
#else /* Word 0 - Little Endian */
        uint64_t cpri_hdlc_id          : 3;  /**< [  2:  0](R/W) Selects the CPRI MAC to drive HDLC output.  Valid range is [0,5].
                                                                 0x0 = CPRI0 MAC0.
                                                                 0x1 = CPRI0 MAC1.
                                                                 0x2 = CPRI1 MAC0.
                                                                 0x3 = CPRI1 MAC1.
                                                                 0x4 = CPRI2 MAC0.
                                                                 0x5 = CPRI2 MAC1.
                                                                 0x6, 0x7 = Reserved. */
        uint64_t reserved_3_7          : 5;
        uint64_t cpri_hdlc_en          : 1;  /**< [  8:  8](R/W) Enables HDLC output from the CPRI block selected by [CPRI_HDLC_ID]. */
        uint64_t reserved_9_63         : 55;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bcn_hdlc_sel_s cn; */
};
typedef union cavm_bcn_hdlc_sel cavm_bcn_hdlc_sel_t;

#define CAVM_BCN_HDLC_SEL CAVM_BCN_HDLC_SEL_FUNC()
static inline uint64_t CAVM_BCN_HDLC_SEL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BCN_HDLC_SEL_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF20KA))
        return 0x87e043040400ll;
    __cavm_csr_fatal("BCN_HDLC_SEL", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BCN_HDLC_SEL cavm_bcn_hdlc_sel_t
#define bustype_CAVM_BCN_HDLC_SEL CSR_TYPE_RSL
#define basename_CAVM_BCN_HDLC_SEL "BCN_HDLC_SEL"
#define device_bar_CAVM_BCN_HDLC_SEL 0x2 /* PF_BAR2 */
#define busnum_CAVM_BCN_HDLC_SEL 0
#define arguments_CAVM_BCN_HDLC_SEL -1,-1,-1,-1

/**
 * Register (RSL) bcn_ieee1914_cfg
 *
 * BCN IEEE 1914 Counter Configuration Register
 * This register configures the logic that generates the IEEE 1914
 * counters.
 */
union cavm_bcn_ieee1914_cfg
{
    uint64_t u;
    struct cavm_bcn_ieee1914_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_20_63        : 44;
        uint64_t ns_div                : 4;  /**< [ 19: 16](R/W) This configures the bcn4x_clk divider for the IEEE1914 timestamp
                                                                 counter.  See [NS_INC] for more details. */
        uint64_t ns_inc                : 16; /**< [ 15:  0](R/W) This specifies the increment value for the IEEE 1914 timestamp
                                                                 counter.  After every [NS_DIV] bcn4x_clk cycles, the IEEE 1914
                                                                 timestamp value is incremented by [NS_INC].  This value is
                                                                 an 8.8 fixed-point value.
                                                                 The default values of [NS_INC] and [NS_DIV] will properly
                                                                 configure the IEEE1914 nanosecond counter when the bcn4x_clk
                                                                 is 1.2288 GHz. */
#else /* Word 0 - Little Endian */
        uint64_t ns_inc                : 16; /**< [ 15:  0](R/W) This specifies the increment value for the IEEE 1914 timestamp
                                                                 counter.  After every [NS_DIV] bcn4x_clk cycles, the IEEE 1914
                                                                 timestamp value is incremented by [NS_INC].  This value is
                                                                 an 8.8 fixed-point value.
                                                                 The default values of [NS_INC] and [NS_DIV] will properly
                                                                 configure the IEEE1914 nanosecond counter when the bcn4x_clk
                                                                 is 1.2288 GHz. */
        uint64_t ns_div                : 4;  /**< [ 19: 16](R/W) This configures the bcn4x_clk divider for the IEEE1914 timestamp
                                                                 counter.  See [NS_INC] for more details. */
        uint64_t reserved_20_63        : 44;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bcn_ieee1914_cfg_s cn; */
};
typedef union cavm_bcn_ieee1914_cfg cavm_bcn_ieee1914_cfg_t;

#define CAVM_BCN_IEEE1914_CFG CAVM_BCN_IEEE1914_CFG_FUNC()
static inline uint64_t CAVM_BCN_IEEE1914_CFG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BCN_IEEE1914_CFG_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF20KA))
        return 0x87e043041300ll;
    __cavm_csr_fatal("BCN_IEEE1914_CFG", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BCN_IEEE1914_CFG cavm_bcn_ieee1914_cfg_t
#define bustype_CAVM_BCN_IEEE1914_CFG CSR_TYPE_RSL
#define basename_CAVM_BCN_IEEE1914_CFG "BCN_IEEE1914_CFG"
#define device_bar_CAVM_BCN_IEEE1914_CFG 0x2 /* PF_BAR2 */
#define busnum_CAVM_BCN_IEEE1914_CFG 0
#define arguments_CAVM_BCN_IEEE1914_CFG -1,-1,-1,-1

/**
 * Register (RSL) bcn_ieee1914_val
 *
 * BCN IEEE 1914 Counter Value Register
 * This register contains the current value of the IEEE 1914
 * counters.
 */
union cavm_bcn_ieee1914_val
{
    uint64_t u;
    struct cavm_bcn_ieee1914_val_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_29_63        : 35;
        uint64_t nsec                  : 24; /**< [ 28:  5](RO/H) Current value of the IEEE 1914 timestamp integer
                                                                 nanosecond field. */
        uint64_t fnsec                 : 5;  /**< [  4:  0](RO/H) Current value of the IEEE 1914 timestamp fractional
                                                                 nanosecond field. */
#else /* Word 0 - Little Endian */
        uint64_t fnsec                 : 5;  /**< [  4:  0](RO/H) Current value of the IEEE 1914 timestamp fractional
                                                                 nanosecond field. */
        uint64_t nsec                  : 24; /**< [ 28:  5](RO/H) Current value of the IEEE 1914 timestamp integer
                                                                 nanosecond field. */
        uint64_t reserved_29_63        : 35;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bcn_ieee1914_val_s cn; */
};
typedef union cavm_bcn_ieee1914_val cavm_bcn_ieee1914_val_t;

#define CAVM_BCN_IEEE1914_VAL CAVM_BCN_IEEE1914_VAL_FUNC()
static inline uint64_t CAVM_BCN_IEEE1914_VAL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BCN_IEEE1914_VAL_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF20KA))
        return 0x87e043041310ll;
    __cavm_csr_fatal("BCN_IEEE1914_VAL", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BCN_IEEE1914_VAL cavm_bcn_ieee1914_val_t
#define bustype_CAVM_BCN_IEEE1914_VAL CSR_TYPE_RSL
#define basename_CAVM_BCN_IEEE1914_VAL "BCN_IEEE1914_VAL"
#define device_bar_CAVM_BCN_IEEE1914_VAL 0x2 /* PF_BAR2 */
#define busnum_CAVM_BCN_IEEE1914_VAL 0
#define arguments_CAVM_BCN_IEEE1914_VAL -1,-1,-1,-1

/**
 * Register (RSL) bcn_int_ieee1914_val
 *
 * BCN internal IEEE1914 timestamp value Register
 */
union cavm_bcn_int_ieee1914_val
{
    uint64_t u;
    struct cavm_bcn_int_ieee1914_val_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_57_63        : 7;
        uint64_t ts_update             : 1;  /**< [ 56: 56](R/W/H) If written 1, update the [NSEC] and [FNSEC] counts.  If written 0,
                                                                 the [NSEC] and [FNSEC] counts remain unchanged. */
        uint64_t reserved_29_55        : 27;
        uint64_t nsec                  : 24; /**< [ 28:  5](R/W/H) Current value of the internal IEEE 1914 timestamp
                                                                 integer nanosecond field. */
        uint64_t fnsec                 : 5;  /**< [  4:  0](R/W/H) Current value of the internal IEEE 1914 timestamp
                                                                 fractional nanosecond field. */
#else /* Word 0 - Little Endian */
        uint64_t fnsec                 : 5;  /**< [  4:  0](R/W/H) Current value of the internal IEEE 1914 timestamp
                                                                 fractional nanosecond field. */
        uint64_t nsec                  : 24; /**< [ 28:  5](R/W/H) Current value of the internal IEEE 1914 timestamp
                                                                 integer nanosecond field. */
        uint64_t reserved_29_55        : 27;
        uint64_t ts_update             : 1;  /**< [ 56: 56](R/W/H) If written 1, update the [NSEC] and [FNSEC] counts.  If written 0,
                                                                 the [NSEC] and [FNSEC] counts remain unchanged. */
        uint64_t reserved_57_63        : 7;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bcn_int_ieee1914_val_s cn; */
};
typedef union cavm_bcn_int_ieee1914_val cavm_bcn_int_ieee1914_val_t;

#define CAVM_BCN_INT_IEEE1914_VAL CAVM_BCN_INT_IEEE1914_VAL_FUNC()
static inline uint64_t CAVM_BCN_INT_IEEE1914_VAL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BCN_INT_IEEE1914_VAL_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF20KA))
        return 0x87e043040220ll;
    __cavm_csr_fatal("BCN_INT_IEEE1914_VAL", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BCN_INT_IEEE1914_VAL cavm_bcn_int_ieee1914_val_t
#define bustype_CAVM_BCN_INT_IEEE1914_VAL CSR_TYPE_RSL
#define basename_CAVM_BCN_INT_IEEE1914_VAL "BCN_INT_IEEE1914_VAL"
#define device_bar_CAVM_BCN_INT_IEEE1914_VAL 0x2 /* PF_BAR2 */
#define busnum_CAVM_BCN_INT_IEEE1914_VAL 0
#define arguments_CAVM_BCN_INT_IEEE1914_VAL -1,-1,-1,-1

/**
 * Register (RSL) bcn_int_n1n2_val
 *
 * BCN internal N1N2 timestamp value Register
 */
union cavm_bcn_int_n1n2_val
{
    uint64_t u;
    struct cavm_bcn_int_n1n2_val_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t n1                    : 40; /**< [ 63: 24](R/W/H) Current value of the internal N1 counter. */
        uint64_t n2                    : 24; /**< [ 23:  0](R/W/H) Current value of the internal N2 counter. */
#else /* Word 0 - Little Endian */
        uint64_t n2                    : 24; /**< [ 23:  0](R/W/H) Current value of the internal N2 counter. */
        uint64_t n1                    : 40; /**< [ 63: 24](R/W/H) Current value of the internal N1 counter. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bcn_int_n1n2_val_s cn; */
};
typedef union cavm_bcn_int_n1n2_val cavm_bcn_int_n1n2_val_t;

#define CAVM_BCN_INT_N1N2_VAL CAVM_BCN_INT_N1N2_VAL_FUNC()
static inline uint64_t CAVM_BCN_INT_N1N2_VAL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BCN_INT_N1N2_VAL_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF20KA))
        return 0x87e043040230ll;
    __cavm_csr_fatal("BCN_INT_N1N2_VAL", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BCN_INT_N1N2_VAL cavm_bcn_int_n1n2_val_t
#define bustype_CAVM_BCN_INT_N1N2_VAL CSR_TYPE_RSL
#define basename_CAVM_BCN_INT_N1N2_VAL "BCN_INT_N1N2_VAL"
#define device_bar_CAVM_BCN_INT_N1N2_VAL 0x2 /* PF_BAR2 */
#define busnum_CAVM_BCN_INT_N1N2_VAL 0
#define arguments_CAVM_BCN_INT_N1N2_VAL -1,-1,-1,-1

/**
 * Register (RSL) bcn_int_psm_val
 *
 * BCN internal PSM timestamp value Register
 */
union cavm_bcn_int_psm_val
{
    uint64_t u;
    struct cavm_bcn_int_psm_val_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_58_63        : 6;
        uint64_t sf_update             : 1;  /**< [ 57: 57](R/W/H) If written 1, update [SUBFRAME] count.  If written 0, the [SUBFRAME]
                                                                 count remains unchanged. */
        uint64_t tick_update           : 1;  /**< [ 56: 56](R/W/H) If written 1, update [TICK] count.  If written 0, the [TICK]
                                                                 count remains unchanged. */
        uint64_t reserved_20_55        : 36;
        uint64_t subframe              : 4;  /**< [ 19: 16](R/W/H) Current value of the internal PSM subframe counter. */
        uint64_t tick                  : 16; /**< [ 15:  0](R/W/H) Current value of the internal PSM tick counter. */
#else /* Word 0 - Little Endian */
        uint64_t tick                  : 16; /**< [ 15:  0](R/W/H) Current value of the internal PSM tick counter. */
        uint64_t subframe              : 4;  /**< [ 19: 16](R/W/H) Current value of the internal PSM subframe counter. */
        uint64_t reserved_20_55        : 36;
        uint64_t tick_update           : 1;  /**< [ 56: 56](R/W/H) If written 1, update [TICK] count.  If written 0, the [TICK]
                                                                 count remains unchanged. */
        uint64_t sf_update             : 1;  /**< [ 57: 57](R/W/H) If written 1, update [SUBFRAME] count.  If written 0, the [SUBFRAME]
                                                                 count remains unchanged. */
        uint64_t reserved_58_63        : 6;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bcn_int_psm_val_s cn; */
};
typedef union cavm_bcn_int_psm_val cavm_bcn_int_psm_val_t;

#define CAVM_BCN_INT_PSM_VAL CAVM_BCN_INT_PSM_VAL_FUNC()
static inline uint64_t CAVM_BCN_INT_PSM_VAL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BCN_INT_PSM_VAL_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF20KA))
        return 0x87e043040210ll;
    __cavm_csr_fatal("BCN_INT_PSM_VAL", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BCN_INT_PSM_VAL cavm_bcn_int_psm_val_t
#define bustype_CAVM_BCN_INT_PSM_VAL CSR_TYPE_RSL
#define basename_CAVM_BCN_INT_PSM_VAL "BCN_INT_PSM_VAL"
#define device_bar_CAVM_BCN_INT_PSM_VAL 0x2 /* PF_BAR2 */
#define busnum_CAVM_BCN_INT_PSM_VAL 0
#define arguments_CAVM_BCN_INT_PSM_VAL -1,-1,-1,-1

/**
 * Register (RSL) bcn_internal_timer_cfg
 *
 * BCN internal timer configuration Register
 */
union cavm_bcn_internal_timer_cfg
{
    uint64_t u;
    struct cavm_bcn_internal_timer_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t en                    : 1;  /**< [ 63: 63](R/W) Enable for BCN internal timer mode. */
        uint64_t reserved_60_62        : 3;
        uint64_t test_rp1_err          : 1;  /**< [ 59: 59](R/W/H) This provides a way to set the RP1 error signal for connectivity
                                                                 testing.  This mechanism is only available in internal-timer
                                                                 mode.  This bit will automatically self-clear. */
        uint64_t n2_mode               : 1;  /**< [ 58: 58](R/W) Defines the wrap mode for the N1_N2 counter during BCN internal
                                                                 timer mode.
                                                                 0 = The N2 counter resets to 0x0 and the N1 counter increments
                                                                 after 10 PSM subframes.
                                                                 1 = The N2 counter resets to 0x0 and the N1 counter increments
                                                                 after the N2 reaches the normal maximum value of 0xBB7FFF. */
        uint64_t n2_inc                : 10; /**< [ 57: 48](R/W) Defines the increment value used for the N2 counter for
                                                                 each BCLK cycle during BCN internal timer mode.  This is
                                                                 a 2.8 fixed-point value. */
        uint64_t reserved_42_47        : 6;
        uint64_t ns_inc                : 10; /**< [ 41: 32](R/W) Defines the increment value used for the IEEE1914 timestamp
                                                                 each BCLK cycle during BCN internal timer mode.  This is
                                                                 a 2.8 fixed-point value. */
        uint64_t subf_ticks            : 16; /**< [ 31: 16](R/W) Sets the maximum tick count value for generating an SOSF during
                                                                 BCN internal timer mode.  The BCN will generate a SOSF when the
                                                                 tick counter reaches the value specified by [SUBF_TICKS]. */
        uint64_t tick_div              : 16; /**< [ 15:  0](R/W) Divider value for generating the tick clock from the BCLK during
                                                                 BCN internal timer mode.  This is a fixed-point value, consisting
                                                                 of an 8-bit integer and an 8-bit fraction.  A value of 0x0280
                                                                 would generate a tick-clock that is 2.5x slower than BCLK.  The
                                                                 minimum value of 0x0100 represents a 1:1 ratio of BCLK to
                                                                 tick-clock.  The actual [TICK_DIV] value should be chosen to
                                                                 prevent the 16-bit TICK counter from rolling over within the
                                                                 1ms subframe interval. */
#else /* Word 0 - Little Endian */
        uint64_t tick_div              : 16; /**< [ 15:  0](R/W) Divider value for generating the tick clock from the BCLK during
                                                                 BCN internal timer mode.  This is a fixed-point value, consisting
                                                                 of an 8-bit integer and an 8-bit fraction.  A value of 0x0280
                                                                 would generate a tick-clock that is 2.5x slower than BCLK.  The
                                                                 minimum value of 0x0100 represents a 1:1 ratio of BCLK to
                                                                 tick-clock.  The actual [TICK_DIV] value should be chosen to
                                                                 prevent the 16-bit TICK counter from rolling over within the
                                                                 1ms subframe interval. */
        uint64_t subf_ticks            : 16; /**< [ 31: 16](R/W) Sets the maximum tick count value for generating an SOSF during
                                                                 BCN internal timer mode.  The BCN will generate a SOSF when the
                                                                 tick counter reaches the value specified by [SUBF_TICKS]. */
        uint64_t ns_inc                : 10; /**< [ 41: 32](R/W) Defines the increment value used for the IEEE1914 timestamp
                                                                 each BCLK cycle during BCN internal timer mode.  This is
                                                                 a 2.8 fixed-point value. */
        uint64_t reserved_42_47        : 6;
        uint64_t n2_inc                : 10; /**< [ 57: 48](R/W) Defines the increment value used for the N2 counter for
                                                                 each BCLK cycle during BCN internal timer mode.  This is
                                                                 a 2.8 fixed-point value. */
        uint64_t n2_mode               : 1;  /**< [ 58: 58](R/W) Defines the wrap mode for the N1_N2 counter during BCN internal
                                                                 timer mode.
                                                                 0 = The N2 counter resets to 0x0 and the N1 counter increments
                                                                 after 10 PSM subframes.
                                                                 1 = The N2 counter resets to 0x0 and the N1 counter increments
                                                                 after the N2 reaches the normal maximum value of 0xBB7FFF. */
        uint64_t test_rp1_err          : 1;  /**< [ 59: 59](R/W/H) This provides a way to set the RP1 error signal for connectivity
                                                                 testing.  This mechanism is only available in internal-timer
                                                                 mode.  This bit will automatically self-clear. */
        uint64_t reserved_60_62        : 3;
        uint64_t en                    : 1;  /**< [ 63: 63](R/W) Enable for BCN internal timer mode. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bcn_internal_timer_cfg_s cn; */
};
typedef union cavm_bcn_internal_timer_cfg cavm_bcn_internal_timer_cfg_t;

#define CAVM_BCN_INTERNAL_TIMER_CFG CAVM_BCN_INTERNAL_TIMER_CFG_FUNC()
static inline uint64_t CAVM_BCN_INTERNAL_TIMER_CFG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BCN_INTERNAL_TIMER_CFG_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF20KA))
        return 0x87e043040200ll;
    __cavm_csr_fatal("BCN_INTERNAL_TIMER_CFG", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BCN_INTERNAL_TIMER_CFG cavm_bcn_internal_timer_cfg_t
#define bustype_CAVM_BCN_INTERNAL_TIMER_CFG CSR_TYPE_RSL
#define basename_CAVM_BCN_INTERNAL_TIMER_CFG "BCN_INTERNAL_TIMER_CFG"
#define device_bar_CAVM_BCN_INTERNAL_TIMER_CFG 0x2 /* PF_BAR2 */
#define busnum_CAVM_BCN_INTERNAL_TIMER_CFG 0
#define arguments_CAVM_BCN_INTERNAL_TIMER_CFG -1,-1,-1,-1

/**
 * Register (RSL) bcn_n1_n2
 *
 * BCN N1_N2 Register
 * This register contains the current value of the BCN block's
 * N1 and N2 timestamps.
 */
union cavm_bcn_n1_n2
{
    uint64_t u;
    struct cavm_bcn_n1_n2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t n1                    : 40; /**< [ 63: 24](RO/H) Current value of the N1 counter. */
        uint64_t n2                    : 24; /**< [ 23:  0](RO/H) Current value of the N2 counter. */
#else /* Word 0 - Little Endian */
        uint64_t n2                    : 24; /**< [ 23:  0](RO/H) Current value of the N2 counter. */
        uint64_t n1                    : 40; /**< [ 63: 24](RO/H) Current value of the N1 counter. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bcn_n1_n2_s cn; */
};
typedef union cavm_bcn_n1_n2 cavm_bcn_n1_n2_t;

#define CAVM_BCN_N1_N2 CAVM_BCN_N1_N2_FUNC()
static inline uint64_t CAVM_BCN_N1_N2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BCN_N1_N2_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF20KA))
        return 0x87e043041010ll;
    __cavm_csr_fatal("BCN_N1_N2", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BCN_N1_N2 cavm_bcn_n1_n2_t
#define bustype_CAVM_BCN_N1_N2 CSR_TYPE_RSL
#define basename_CAVM_BCN_N1_N2 "BCN_N1_N2"
#define device_bar_CAVM_BCN_N1_N2 0x2 /* PF_BAR2 */
#define busnum_CAVM_BCN_N1_N2 0
#define arguments_CAVM_BCN_N1_N2 -1,-1,-1,-1

/**
 * Register (RSL) bcn_psm_cfg
 *
 * BCN PSM Counter Configuration Register
 * This register configures the logic that generates the PSM subframe
 * and tick counters.
 */
union cavm_bcn_psm_cfg
{
    uint64_t u;
    struct cavm_bcn_psm_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_56_63        : 8;
        uint64_t subf_max              : 24; /**< [ 55: 32](R/W) Defines the length of a PSM subframe in bcn4x_clk cycles.  The
                                                                 default value corresponds to a 1 msec subframe when the bcn4x_clk
                                                                 is 1.2288 GHz. */
        uint64_t reserved_20_31        : 12;
        uint64_t tick_inc              : 20; /**< [ 19:  0](R/W) Defines the increment value for the PSM tick counter, on each
                                                                 bcn4x_clk cycle.  The increment value is a 2.16 fixed point number,
                                                                 and the default value corresponds to a 15.625 nsec tick when
                                                                 the bcn4x_clk is 1.2288 GHz */
#else /* Word 0 - Little Endian */
        uint64_t tick_inc              : 20; /**< [ 19:  0](R/W) Defines the increment value for the PSM tick counter, on each
                                                                 bcn4x_clk cycle.  The increment value is a 2.16 fixed point number,
                                                                 and the default value corresponds to a 15.625 nsec tick when
                                                                 the bcn4x_clk is 1.2288 GHz */
        uint64_t reserved_20_31        : 12;
        uint64_t subf_max              : 24; /**< [ 55: 32](R/W) Defines the length of a PSM subframe in bcn4x_clk cycles.  The
                                                                 default value corresponds to a 1 msec subframe when the bcn4x_clk
                                                                 is 1.2288 GHz. */
        uint64_t reserved_56_63        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bcn_psm_cfg_s cn; */
};
typedef union cavm_bcn_psm_cfg cavm_bcn_psm_cfg_t;

#define CAVM_BCN_PSM_CFG CAVM_BCN_PSM_CFG_FUNC()
static inline uint64_t CAVM_BCN_PSM_CFG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BCN_PSM_CFG_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF20KA))
        return 0x87e043041200ll;
    __cavm_csr_fatal("BCN_PSM_CFG", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BCN_PSM_CFG cavm_bcn_psm_cfg_t
#define bustype_CAVM_BCN_PSM_CFG CSR_TYPE_RSL
#define basename_CAVM_BCN_PSM_CFG "BCN_PSM_CFG"
#define device_bar_CAVM_BCN_PSM_CFG 0x2 /* PF_BAR2 */
#define busnum_CAVM_BCN_PSM_CFG 0
#define arguments_CAVM_BCN_PSM_CFG -1,-1,-1,-1

/**
 * Register (RSL) bcn_psm_val
 *
 * BCN PSM Counter Value Register
 * This register contains the current value of the PSM subframe
 * and tick counters.
 */
union cavm_bcn_psm_val
{
    uint64_t u;
    struct cavm_bcn_psm_val_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_20_63        : 44;
        uint64_t subframe              : 4;  /**< [ 19: 16](RO/H) Current value of the PSM subframe counter. */
        uint64_t tick                  : 16; /**< [ 15:  0](RO/H) Current value of the PSM tick counter. */
#else /* Word 0 - Little Endian */
        uint64_t tick                  : 16; /**< [ 15:  0](RO/H) Current value of the PSM tick counter. */
        uint64_t subframe              : 4;  /**< [ 19: 16](RO/H) Current value of the PSM subframe counter. */
        uint64_t reserved_20_63        : 44;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bcn_psm_val_s cn; */
};
typedef union cavm_bcn_psm_val cavm_bcn_psm_val_t;

#define CAVM_BCN_PSM_VAL CAVM_BCN_PSM_VAL_FUNC()
static inline uint64_t CAVM_BCN_PSM_VAL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BCN_PSM_VAL_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF20KA))
        return 0x87e043041210ll;
    __cavm_csr_fatal("BCN_PSM_VAL", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BCN_PSM_VAL cavm_bcn_psm_val_t
#define bustype_CAVM_BCN_PSM_VAL CSR_TYPE_RSL
#define basename_CAVM_BCN_PSM_VAL "BCN_PSM_VAL"
#define device_bar_CAVM_BCN_PSM_VAL 0x2 /* PF_BAR2 */
#define busnum_CAVM_BCN_PSM_VAL 0
#define arguments_CAVM_BCN_PSM_VAL -1,-1,-1,-1

/**
 * Register (RSL) bcn_ptp_val
 *
 * BCN PTP Timestamp Value Register
 * This register contains the current value of the PTP timestamp.
 */
union cavm_bcn_ptp_val
{
    uint64_t u;
    struct cavm_bcn_ptp_val_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ptp                   : 64; /**< [ 63:  0](RO/H) Current value of the PTP timestamp. */
#else /* Word 0 - Little Endian */
        uint64_t ptp                   : 64; /**< [ 63:  0](RO/H) Current value of the PTP timestamp. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bcn_ptp_val_s cn; */
};
typedef union cavm_bcn_ptp_val cavm_bcn_ptp_val_t;

#define CAVM_BCN_PTP_VAL CAVM_BCN_PTP_VAL_FUNC()
static inline uint64_t CAVM_BCN_PTP_VAL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BCN_PTP_VAL_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF20KA))
        return 0x87e043041410ll;
    __cavm_csr_fatal("BCN_PTP_VAL", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BCN_PTP_VAL cavm_bcn_ptp_val_t
#define bustype_CAVM_BCN_PTP_VAL CSR_TYPE_RSL
#define basename_CAVM_BCN_PTP_VAL "BCN_PTP_VAL"
#define device_bar_CAVM_BCN_PTP_VAL 0x2 /* PF_BAR2 */
#define busnum_CAVM_BCN_PTP_VAL 0
#define arguments_CAVM_BCN_PTP_VAL -1,-1,-1,-1

/**
 * Register (RSL) bcn_rec_clk#_ctrl
 *
 * BCN Recovered Clock Monitor Control Registers
 * These registers control the rec_clk_out monitor ports for external
 * visibility of the recovered clocks.
 */
union cavm_bcn_rec_clkx_ctrl
{
    uint64_t u;
    struct cavm_bcn_rec_clkx_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_12_63        : 52;
        uint64_t clk_div               : 4;  /**< [ 11:  8](R/W) Divider value for the selected recovered clock.  Valid divider
                                                                 settings are 1, 2, 4, and 8, and 0 disables the REC_CLK_OUT output.
                                                                 The divider is used to reduce the frequency to below 250 MHz so
                                                                 that the signal can be driven on a chip output.
                                                                 The recommended settings are are as follows:
                                                                 \<pre\>
                                                                   SERDES       recovered    [CLK_DIV]   CLKOUT
                                                                   datarate     clock                    frequency
                                                                   (Gb/s)       (Mhz)                    (MHz)
                                                                  --------------------------------------------------
                                                                   53.12500     664.06250      0x4       166.0156250
                                                                   25.78125     644.53125      0x4       161.1328125
                                                                   10.31250     515.62500      0x4       128.9062500
                                                                    9.83040     491.52000      0x2       245.7600000
                                                                    6.14400     307.20000      0x2       153.6000000
                                                                    4.91520     245.76000      0x1       245.7600000
                                                                    3.07200     153.60000      0x1       153.6000000
                                                                    2.45760     122.88000      0x1       122.8800000
                                                                    1.25000      62.50000      0x1        62.5000000

                                                                   bcn4x_clk   1228.80000      0x8       153.6000000
                                                                   bcn_pll_ref  122.88000      0x1       122.8800000
                                                                 \</pre\> */
        uint64_t reserved_6_7          : 2;
        uint64_t clk_sel               : 6;  /**< [  5:  0](R/W) _ Clock selection.
                                                                 _ 0x00 - 0x03 = GSERM0 recovered receive clock for lanes 0-3.
                                                                 _ 0x04 - 0x05 = GSERM1 recovered receive clock for lanes 0-1.
                                                                 _ 0x06 - 0x07 = Reserved.
                                                                 _ 0x08 - 0x0B = GSERM2 recovered receive clock for lanes 0-3.
                                                                 _ 0x0C - 0x0F = GSERM3 recovered receive clock for lanes 0-3.
                                                                 _ 0x10 - 0x13 = GSERM4 recovered receive clock for lanes 0-3.
                                                                 _ 0x14 - 0x15 = GSERM5 recovered receive clock for lanes 0-1.
                                                                 _ 0x16 - 0x17 = Reserved.
                                                                 _ 0x18 - 0x1B = GSERM0 transmit clock for lanes 0-3.
                                                                 _ 0x1C - 0x1D = GSERM1 transmit clock for lanes 0-1.
                                                                 _ 0x1E - 0x1F = Reserved.
                                                                 _ 0x20 - 0x23 = GSERM2 transmit clock for lanes 0-3.
                                                                 _ 0x24 - 0x27 = GSERM3 transmit clock for lanes 0-3.
                                                                 _ 0x28 - 0x2B = GSERM4 transmit clock for lanes 0-3.
                                                                 _ 0x2C - 0x2D = GSERM5 transmit clock for lanes 0-1.
                                                                 _ 0x2E - 0x2F = Reserved.
                                                                 _ 0x30 = bcn_pll reference clock.
                                                                 _ 0x31 = bcn4x_clk. */
#else /* Word 0 - Little Endian */
        uint64_t clk_sel               : 6;  /**< [  5:  0](R/W) _ Clock selection.
                                                                 _ 0x00 - 0x03 = GSERM0 recovered receive clock for lanes 0-3.
                                                                 _ 0x04 - 0x05 = GSERM1 recovered receive clock for lanes 0-1.
                                                                 _ 0x06 - 0x07 = Reserved.
                                                                 _ 0x08 - 0x0B = GSERM2 recovered receive clock for lanes 0-3.
                                                                 _ 0x0C - 0x0F = GSERM3 recovered receive clock for lanes 0-3.
                                                                 _ 0x10 - 0x13 = GSERM4 recovered receive clock for lanes 0-3.
                                                                 _ 0x14 - 0x15 = GSERM5 recovered receive clock for lanes 0-1.
                                                                 _ 0x16 - 0x17 = Reserved.
                                                                 _ 0x18 - 0x1B = GSERM0 transmit clock for lanes 0-3.
                                                                 _ 0x1C - 0x1D = GSERM1 transmit clock for lanes 0-1.
                                                                 _ 0x1E - 0x1F = Reserved.
                                                                 _ 0x20 - 0x23 = GSERM2 transmit clock for lanes 0-3.
                                                                 _ 0x24 - 0x27 = GSERM3 transmit clock for lanes 0-3.
                                                                 _ 0x28 - 0x2B = GSERM4 transmit clock for lanes 0-3.
                                                                 _ 0x2C - 0x2D = GSERM5 transmit clock for lanes 0-1.
                                                                 _ 0x2E - 0x2F = Reserved.
                                                                 _ 0x30 = bcn_pll reference clock.
                                                                 _ 0x31 = bcn4x_clk. */
        uint64_t reserved_6_7          : 2;
        uint64_t clk_div               : 4;  /**< [ 11:  8](R/W) Divider value for the selected recovered clock.  Valid divider
                                                                 settings are 1, 2, 4, and 8, and 0 disables the REC_CLK_OUT output.
                                                                 The divider is used to reduce the frequency to below 250 MHz so
                                                                 that the signal can be driven on a chip output.
                                                                 The recommended settings are are as follows:
                                                                 \<pre\>
                                                                   SERDES       recovered    [CLK_DIV]   CLKOUT
                                                                   datarate     clock                    frequency
                                                                   (Gb/s)       (Mhz)                    (MHz)
                                                                  --------------------------------------------------
                                                                   53.12500     664.06250      0x4       166.0156250
                                                                   25.78125     644.53125      0x4       161.1328125
                                                                   10.31250     515.62500      0x4       128.9062500
                                                                    9.83040     491.52000      0x2       245.7600000
                                                                    6.14400     307.20000      0x2       153.6000000
                                                                    4.91520     245.76000      0x1       245.7600000
                                                                    3.07200     153.60000      0x1       153.6000000
                                                                    2.45760     122.88000      0x1       122.8800000
                                                                    1.25000      62.50000      0x1        62.5000000

                                                                   bcn4x_clk   1228.80000      0x8       153.6000000
                                                                   bcn_pll_ref  122.88000      0x1       122.8800000
                                                                 \</pre\> */
        uint64_t reserved_12_63        : 52;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bcn_rec_clkx_ctrl_s cn; */
};
typedef union cavm_bcn_rec_clkx_ctrl cavm_bcn_rec_clkx_ctrl_t;

static inline uint64_t CAVM_BCN_REC_CLKX_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BCN_REC_CLKX_CTRL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=2))
        return 0x87e043040300ll + 0x10ll * ((a) & 0x3);
    __cavm_csr_fatal("BCN_REC_CLKX_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BCN_REC_CLKX_CTRL(a) cavm_bcn_rec_clkx_ctrl_t
#define bustype_CAVM_BCN_REC_CLKX_CTRL(a) CSR_TYPE_RSL
#define basename_CAVM_BCN_REC_CLKX_CTRL(a) "BCN_REC_CLKX_CTRL"
#define device_bar_CAVM_BCN_REC_CLKX_CTRL(a) 0x2 /* PF_BAR2 */
#define busnum_CAVM_BCN_REC_CLKX_CTRL(a) (a)
#define arguments_CAVM_BCN_REC_CLKX_CTRL(a) (a),-1,-1,-1

/**
 * Register (RSL) bcn_rec_clk_to_ptp
 *
 * BCN Recovered Clock To PTP Control Register
 * This register controls the recovered clock that is sent to
 * the PTP block.  See also MIO_PTP_CLOCK_CFG[EXT_CLK_IN].
 */
union cavm_bcn_rec_clk_to_ptp
{
    uint64_t u;
    struct cavm_bcn_rec_clk_to_ptp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_12_63        : 52;
        uint64_t clk_div               : 4;  /**< [ 11:  8](R/W) Divider value for the selected PTP clock.  Valid divider
                                                                 settings are 1, 2, 4, and 8, and 0 disables the PTP clock.
                                                                 The divider is used to reduce the frequency to below 250 MHz so
                                                                 that the clock can be used by the PTP logic.
                                                                 See BCN_REC_CLK()_CTRL[CLK_DIV] for recommended values. */
        uint64_t reserved_6_7          : 2;
        uint64_t clk_sel               : 6;  /**< [  5:  0](R/W) Clock selection.  See BCN_REC_CLK()_CTRL[CLK_SEL] for values. */
#else /* Word 0 - Little Endian */
        uint64_t clk_sel               : 6;  /**< [  5:  0](R/W) Clock selection.  See BCN_REC_CLK()_CTRL[CLK_SEL] for values. */
        uint64_t reserved_6_7          : 2;
        uint64_t clk_div               : 4;  /**< [ 11:  8](R/W) Divider value for the selected PTP clock.  Valid divider
                                                                 settings are 1, 2, 4, and 8, and 0 disables the PTP clock.
                                                                 The divider is used to reduce the frequency to below 250 MHz so
                                                                 that the clock can be used by the PTP logic.
                                                                 See BCN_REC_CLK()_CTRL[CLK_DIV] for recommended values. */
        uint64_t reserved_12_63        : 52;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bcn_rec_clk_to_ptp_s cn; */
};
typedef union cavm_bcn_rec_clk_to_ptp cavm_bcn_rec_clk_to_ptp_t;

#define CAVM_BCN_REC_CLK_TO_PTP CAVM_BCN_REC_CLK_TO_PTP_FUNC()
static inline uint64_t CAVM_BCN_REC_CLK_TO_PTP_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BCN_REC_CLK_TO_PTP_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF20KA))
        return 0x87e043040380ll;
    __cavm_csr_fatal("BCN_REC_CLK_TO_PTP", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BCN_REC_CLK_TO_PTP cavm_bcn_rec_clk_to_ptp_t
#define bustype_CAVM_BCN_REC_CLK_TO_PTP CSR_TYPE_RSL
#define basename_CAVM_BCN_REC_CLK_TO_PTP "BCN_REC_CLK_TO_PTP"
#define device_bar_CAVM_BCN_REC_CLK_TO_PTP 0x2 /* PF_BAR2 */
#define busnum_CAVM_BCN_REC_CLK_TO_PTP 0
#define arguments_CAVM_BCN_REC_CLK_TO_PTP -1,-1,-1,-1

/**
 * Register (RSL) bcn_rp1_ctrl
 *
 * BCN RP1 Control Register
 * This register is used to configure the RP1 receiver logic.
 */
union cavm_bcn_rp1_ctrl
{
    uint64_t u;
    struct cavm_bcn_rp1_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_17_63        : 47;
        uint64_t rp1_err_test          : 1;  /**< [ 16: 16](R/W/H) Reserved. */
        uint64_t reserved_9_15         : 7;
        uint64_t n1_len                : 1;  /**< [  8:  8](R/W) Selects the portion of the N1 field taken from a received
                                                                 RP1 burst.  This is only used when BCN_CFG[SYNC_TIME_SRC]
                                                                 is 0.
                                                                 0 = Entire N1[39:0] from RP1 burst
                                                                 1 = N1[11:0] from RP1 burst, N1[39:12] from BCN_SYNC_VAL[N1]. */
        uint64_t crc_init              : 2;  /**< [  7:  6](R/W) Selects the initial value used in the RP1 CRC calculation.
                                                                 0x0 = 0x1D0F.
                                                                 0x1 = 0x0000.
                                                                 0x2 = 0xFFFF.
                                                                 0x3 = Reserved. */
        uint64_t crc_endian            : 1;  /**< [  5:  5](R/W) Selects the endianness of the CRC field within the
                                                                 received RP1 burst.
                                                                 0 = CRC least-significant bit sent first
                                                                 1 = CRC most-significant bit sent first */
        uint64_t crc_inv               : 1;  /**< [  4:  4](R/W) When 1, performs a logical inversion of the received CRC
                                                                 value before comparison with the calculated CRC. */
        uint64_t reserved_1_3          : 3;
        uint64_t rp1_en                : 1;  /**< [  0:  0](R/W) Enables RP1 processing. */
#else /* Word 0 - Little Endian */
        uint64_t rp1_en                : 1;  /**< [  0:  0](R/W) Enables RP1 processing. */
        uint64_t reserved_1_3          : 3;
        uint64_t crc_inv               : 1;  /**< [  4:  4](R/W) When 1, performs a logical inversion of the received CRC
                                                                 value before comparison with the calculated CRC. */
        uint64_t crc_endian            : 1;  /**< [  5:  5](R/W) Selects the endianness of the CRC field within the
                                                                 received RP1 burst.
                                                                 0 = CRC least-significant bit sent first
                                                                 1 = CRC most-significant bit sent first */
        uint64_t crc_init              : 2;  /**< [  7:  6](R/W) Selects the initial value used in the RP1 CRC calculation.
                                                                 0x0 = 0x1D0F.
                                                                 0x1 = 0x0000.
                                                                 0x2 = 0xFFFF.
                                                                 0x3 = Reserved. */
        uint64_t n1_len                : 1;  /**< [  8:  8](R/W) Selects the portion of the N1 field taken from a received
                                                                 RP1 burst.  This is only used when BCN_CFG[SYNC_TIME_SRC]
                                                                 is 0.
                                                                 0 = Entire N1[39:0] from RP1 burst
                                                                 1 = N1[11:0] from RP1 burst, N1[39:12] from BCN_SYNC_VAL[N1]. */
        uint64_t reserved_9_15         : 7;
        uint64_t rp1_err_test          : 1;  /**< [ 16: 16](R/W/H) Reserved. */
        uint64_t reserved_17_63        : 47;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bcn_rp1_ctrl_s cn; */
};
typedef union cavm_bcn_rp1_ctrl cavm_bcn_rp1_ctrl_t;

#define CAVM_BCN_RP1_CTRL CAVM_BCN_RP1_CTRL_FUNC()
static inline uint64_t CAVM_BCN_RP1_CTRL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BCN_RP1_CTRL_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF20KA))
        return 0x87e043041100ll;
    __cavm_csr_fatal("BCN_RP1_CTRL", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BCN_RP1_CTRL cavm_bcn_rp1_ctrl_t
#define bustype_CAVM_BCN_RP1_CTRL CSR_TYPE_RSL
#define basename_CAVM_BCN_RP1_CTRL "BCN_RP1_CTRL"
#define device_bar_CAVM_BCN_RP1_CTRL 0x2 /* PF_BAR2 */
#define busnum_CAVM_BCN_RP1_CTRL 0
#define arguments_CAVM_BCN_RP1_CTRL -1,-1,-1,-1

/**
 * Register (RSL) bcn_rp1_raw_0
 *
 * BCN RP1 Raw Data Register
 * This register contains the raw data from the most recent RP1 burst.
 */
union cavm_bcn_rp1_raw_0
{
    uint64_t u;
    struct cavm_bcn_rp1_raw_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t rp1_raw               : 64; /**< [ 63:  0](RO/H) Bits [63:0] of the raw received RP1 burst. */
#else /* Word 0 - Little Endian */
        uint64_t rp1_raw               : 64; /**< [ 63:  0](RO/H) Bits [63:0] of the raw received RP1 burst. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bcn_rp1_raw_0_s cn; */
};
typedef union cavm_bcn_rp1_raw_0 cavm_bcn_rp1_raw_0_t;

#define CAVM_BCN_RP1_RAW_0 CAVM_BCN_RP1_RAW_0_FUNC()
static inline uint64_t CAVM_BCN_RP1_RAW_0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BCN_RP1_RAW_0_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF20KA))
        return 0x87e043041110ll;
    __cavm_csr_fatal("BCN_RP1_RAW_0", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BCN_RP1_RAW_0 cavm_bcn_rp1_raw_0_t
#define bustype_CAVM_BCN_RP1_RAW_0 CSR_TYPE_RSL
#define basename_CAVM_BCN_RP1_RAW_0 "BCN_RP1_RAW_0"
#define device_bar_CAVM_BCN_RP1_RAW_0 0x2 /* PF_BAR2 */
#define busnum_CAVM_BCN_RP1_RAW_0 0
#define arguments_CAVM_BCN_RP1_RAW_0 -1,-1,-1,-1

/**
 * Register (RSL) bcn_rp1_raw_1
 *
 * BCN RP1 Raw Data Register
 * This register contains the raw data from the most recent RP1 burst.
 */
union cavm_bcn_rp1_raw_1
{
    uint64_t u;
    struct cavm_bcn_rp1_raw_1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t rp1_rx                : 1;  /**< [ 63: 63](RO/H) When 1, indicates that an RP1 burst is being received. */
        uint64_t rp1_bit_cnt           : 7;  /**< [ 62: 56](RO/H) When [RP1_RX] is 1, indicates which bit of the RP1 burst
                                                                 is being received. */
        uint64_t reserved_26_55        : 30;
        uint64_t rp1_raw               : 26; /**< [ 25:  0](RO/H) Bits [89:64] of the raw received RP1 burst. */
#else /* Word 0 - Little Endian */
        uint64_t rp1_raw               : 26; /**< [ 25:  0](RO/H) Bits [89:64] of the raw received RP1 burst. */
        uint64_t reserved_26_55        : 30;
        uint64_t rp1_bit_cnt           : 7;  /**< [ 62: 56](RO/H) When [RP1_RX] is 1, indicates which bit of the RP1 burst
                                                                 is being received. */
        uint64_t rp1_rx                : 1;  /**< [ 63: 63](RO/H) When 1, indicates that an RP1 burst is being received. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bcn_rp1_raw_1_s cn; */
};
typedef union cavm_bcn_rp1_raw_1 cavm_bcn_rp1_raw_1_t;

#define CAVM_BCN_RP1_RAW_1 CAVM_BCN_RP1_RAW_1_FUNC()
static inline uint64_t CAVM_BCN_RP1_RAW_1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BCN_RP1_RAW_1_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF20KA))
        return 0x87e043041120ll;
    __cavm_csr_fatal("BCN_RP1_RAW_1", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BCN_RP1_RAW_1 cavm_bcn_rp1_raw_1_t
#define bustype_CAVM_BCN_RP1_RAW_1 CSR_TYPE_RSL
#define basename_CAVM_BCN_RP1_RAW_1 "BCN_RP1_RAW_1"
#define device_bar_CAVM_BCN_RP1_RAW_1 0x2 /* PF_BAR2 */
#define busnum_CAVM_BCN_RP1_RAW_1 0
#define arguments_CAVM_BCN_RP1_RAW_1 -1,-1,-1,-1

/**
 * Register (RSL) bcn_sync_ieee1914
 *
 * BCN IEEE 1914 Synchronization Register
 * This register is used to configure the IEEE 1914 counter values that
 * will be used for the synchronization event.
 */
union cavm_bcn_sync_ieee1914
{
    uint64_t u;
    struct cavm_bcn_sync_ieee1914_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t sync_imm              : 1;  /**< [ 63: 63](R/W/H) When set to 1, the IEEE1914 counters will be immediately
                                                                 synchronized to the values from [NSEC], and [FNSEC].  This allows
                                                                 the IEEE1914 counters to be set independently of the N1_N2
                                                                 counters.  This bit resets to 0 after the synchronization occurs. */
        uint64_t sync_on_delta         : 1;  /**< [ 62: 62](R/W/H) When set to 1, the IEEE1914 counters will be synchronized to the
                                                                 values from [NSEC], and [FNSEC], when a delta adjustment occurs.
                                                                 This bit resets to 0 after the adjustment. */
        uint64_t reserved_29_61        : 33;
        uint64_t nsec                  : 24; /**< [ 28:  5](R/W) The IEEE 1914 timestamp integer nanosecond field to be used for synchronization. */
        uint64_t fnsec                 : 5;  /**< [  4:  0](R/W) The IEEE 1914 timestamp fractional nanosecond field to be used for synchronization. */
#else /* Word 0 - Little Endian */
        uint64_t fnsec                 : 5;  /**< [  4:  0](R/W) The IEEE 1914 timestamp fractional nanosecond field to be used for synchronization. */
        uint64_t nsec                  : 24; /**< [ 28:  5](R/W) The IEEE 1914 timestamp integer nanosecond field to be used for synchronization. */
        uint64_t reserved_29_61        : 33;
        uint64_t sync_on_delta         : 1;  /**< [ 62: 62](R/W/H) When set to 1, the IEEE1914 counters will be synchronized to the
                                                                 values from [NSEC], and [FNSEC], when a delta adjustment occurs.
                                                                 This bit resets to 0 after the adjustment. */
        uint64_t sync_imm              : 1;  /**< [ 63: 63](R/W/H) When set to 1, the IEEE1914 counters will be immediately
                                                                 synchronized to the values from [NSEC], and [FNSEC].  This allows
                                                                 the IEEE1914 counters to be set independently of the N1_N2
                                                                 counters.  This bit resets to 0 after the synchronization occurs. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bcn_sync_ieee1914_s cn; */
};
typedef union cavm_bcn_sync_ieee1914 cavm_bcn_sync_ieee1914_t;

#define CAVM_BCN_SYNC_IEEE1914 CAVM_BCN_SYNC_IEEE1914_FUNC()
static inline uint64_t CAVM_BCN_SYNC_IEEE1914_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BCN_SYNC_IEEE1914_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF20KA))
        return 0x87e043041320ll;
    __cavm_csr_fatal("BCN_SYNC_IEEE1914", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BCN_SYNC_IEEE1914 cavm_bcn_sync_ieee1914_t
#define bustype_CAVM_BCN_SYNC_IEEE1914 CSR_TYPE_RSL
#define basename_CAVM_BCN_SYNC_IEEE1914 "BCN_SYNC_IEEE1914"
#define device_bar_CAVM_BCN_SYNC_IEEE1914 0x2 /* PF_BAR2 */
#define busnum_CAVM_BCN_SYNC_IEEE1914 0
#define arguments_CAVM_BCN_SYNC_IEEE1914 -1,-1,-1,-1

/**
 * Register (RSL) bcn_sync_psm
 *
 * BCN PSM Synchronization Register
 * This register is used to configure the PSM subframe and tick values
 * that will be used for the synchronization event.
 */
union cavm_bcn_sync_psm
{
    uint64_t u;
    struct cavm_bcn_sync_psm_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t sync_imm              : 1;  /**< [ 63: 63](R/W/H) When set to 1, the PSM counters will be immediately synchronized
                                                                 to the values from [SF_CNT], [SUBFRAME], and [TICK].  This allows
                                                                 the PSM counters to be set independently of the N1_N2 counters.
                                                                 This bit resets to 0 after the synchronization occurs. */
        uint64_t sync_on_delta         : 1;  /**< [ 62: 62](R/W/H) When set to 1, the PSM counters will be synchronized to the
                                                                 values from [SF_CNT], [SUBFRAME], and [TICK], when a delta
                                                                 adjustment occurs.  This bit resets to 0 after the adjustment. */
        uint64_t reserved_44_61        : 18;
        uint64_t sf_cnt                : 24; /**< [ 43: 20](R/W) This field sets the value of the PSM subframe counter that
                                                                 will be used for synchronization.  This counter is a running
                                                                 count of bcn4x_clk cycles during a subframe, and the sync value
                                                                 can be set to account for a synchronization that occurs
                                                                 in the middle of a subframe. */
        uint64_t subframe              : 4;  /**< [ 19: 16](R/W) The PSM subframe value to be used for synchronization. */
        uint64_t tick                  : 16; /**< [ 15:  0](R/W) The PSM tick value to be used for synchronization. */
#else /* Word 0 - Little Endian */
        uint64_t tick                  : 16; /**< [ 15:  0](R/W) The PSM tick value to be used for synchronization. */
        uint64_t subframe              : 4;  /**< [ 19: 16](R/W) The PSM subframe value to be used for synchronization. */
        uint64_t sf_cnt                : 24; /**< [ 43: 20](R/W) This field sets the value of the PSM subframe counter that
                                                                 will be used for synchronization.  This counter is a running
                                                                 count of bcn4x_clk cycles during a subframe, and the sync value
                                                                 can be set to account for a synchronization that occurs
                                                                 in the middle of a subframe. */
        uint64_t reserved_44_61        : 18;
        uint64_t sync_on_delta         : 1;  /**< [ 62: 62](R/W/H) When set to 1, the PSM counters will be synchronized to the
                                                                 values from [SF_CNT], [SUBFRAME], and [TICK], when a delta
                                                                 adjustment occurs.  This bit resets to 0 after the adjustment. */
        uint64_t sync_imm              : 1;  /**< [ 63: 63](R/W/H) When set to 1, the PSM counters will be immediately synchronized
                                                                 to the values from [SF_CNT], [SUBFRAME], and [TICK].  This allows
                                                                 the PSM counters to be set independently of the N1_N2 counters.
                                                                 This bit resets to 0 after the synchronization occurs. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bcn_sync_psm_s cn; */
};
typedef union cavm_bcn_sync_psm cavm_bcn_sync_psm_t;

#define CAVM_BCN_SYNC_PSM CAVM_BCN_SYNC_PSM_FUNC()
static inline uint64_t CAVM_BCN_SYNC_PSM_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BCN_SYNC_PSM_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF20KA))
        return 0x87e043041220ll;
    __cavm_csr_fatal("BCN_SYNC_PSM", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BCN_SYNC_PSM cavm_bcn_sync_psm_t
#define bustype_CAVM_BCN_SYNC_PSM CSR_TYPE_RSL
#define basename_CAVM_BCN_SYNC_PSM "BCN_SYNC_PSM"
#define device_bar_CAVM_BCN_SYNC_PSM 0x2 /* PF_BAR2 */
#define busnum_CAVM_BCN_SYNC_PSM 0
#define arguments_CAVM_BCN_SYNC_PSM -1,-1,-1,-1

/**
 * Register (RSL) bcn_sync_val
 *
 * BCN Synchronization Value Register
 * This register is used to configure the N1 and N2 values that will
 * be used for the synchronization event.
 */
union cavm_bcn_sync_val
{
    uint64_t u;
    struct cavm_bcn_sync_val_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t n1                    : 40; /**< [ 63: 24](R/W) The N1 value to be used for synchronization. */
        uint64_t n2                    : 24; /**< [ 23:  0](R/W) The N2 value to be used for synchronization. */
#else /* Word 0 - Little Endian */
        uint64_t n2                    : 24; /**< [ 23:  0](R/W) The N2 value to be used for synchronization. */
        uint64_t n1                    : 40; /**< [ 63: 24](R/W) The N1 value to be used for synchronization. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bcn_sync_val_s cn; */
};
typedef union cavm_bcn_sync_val cavm_bcn_sync_val_t;

#define CAVM_BCN_SYNC_VAL CAVM_BCN_SYNC_VAL_FUNC()
static inline uint64_t CAVM_BCN_SYNC_VAL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BCN_SYNC_VAL_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF20KA))
        return 0x87e043041020ll;
    __cavm_csr_fatal("BCN_SYNC_VAL", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BCN_SYNC_VAL cavm_bcn_sync_val_t
#define bustype_CAVM_BCN_SYNC_VAL CSR_TYPE_RSL
#define basename_CAVM_BCN_SYNC_VAL "BCN_SYNC_VAL"
#define device_bar_CAVM_BCN_SYNC_VAL 0x2 /* PF_BAR2 */
#define busnum_CAVM_BCN_SYNC_VAL 0
#define arguments_CAVM_BCN_SYNC_VAL -1,-1,-1,-1

/**
 * Register (RSL) bcn_timer#_ctrl
 *
 * BCN Timer Control Registers
 * These registers configure and report status of the BCN timer
 * sub-blocks.
 */
union cavm_bcn_timerx_ctrl
{
    uint64_t u;
    struct cavm_bcn_timerx_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_52_63        : 12;
        uint64_t timer_n1              : 12; /**< [ 51: 40](RO/H) Current value of the timer N1 count. */
        uint64_t timer_n2              : 24; /**< [ 39: 16](RO/H) Current value of the timer N2 count. */
        uint64_t reserved_3_15         : 13;
        uint64_t timer_ref_out         : 1;  /**< [  2:  2](RO/H) Current value of the timer output strobe. */
        uint64_t status                : 1;  /**< [  1:  1](RO/H) Timer status.
                                                                 0 = Idle.
                                                                 1 = Running. */
        uint64_t en                    : 1;  /**< [  0:  0](R/W) Enable for BCN Timer. */
#else /* Word 0 - Little Endian */
        uint64_t en                    : 1;  /**< [  0:  0](R/W) Enable for BCN Timer. */
        uint64_t status                : 1;  /**< [  1:  1](RO/H) Timer status.
                                                                 0 = Idle.
                                                                 1 = Running. */
        uint64_t timer_ref_out         : 1;  /**< [  2:  2](RO/H) Current value of the timer output strobe. */
        uint64_t reserved_3_15         : 13;
        uint64_t timer_n2              : 24; /**< [ 39: 16](RO/H) Current value of the timer N2 count. */
        uint64_t timer_n1              : 12; /**< [ 51: 40](RO/H) Current value of the timer N1 count. */
        uint64_t reserved_52_63        : 12;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bcn_timerx_ctrl_s cn; */
};
typedef union cavm_bcn_timerx_ctrl cavm_bcn_timerx_ctrl_t;

static inline uint64_t CAVM_BCN_TIMERX_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BCN_TIMERX_CTRL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=2))
        return 0x87e043042000ll + 0x100ll * ((a) & 0x3);
    __cavm_csr_fatal("BCN_TIMERX_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BCN_TIMERX_CTRL(a) cavm_bcn_timerx_ctrl_t
#define bustype_CAVM_BCN_TIMERX_CTRL(a) CSR_TYPE_RSL
#define basename_CAVM_BCN_TIMERX_CTRL(a) "BCN_TIMERX_CTRL"
#define device_bar_CAVM_BCN_TIMERX_CTRL(a) 0x2 /* PF_BAR2 */
#define busnum_CAVM_BCN_TIMERX_CTRL(a) (a)
#define arguments_CAVM_BCN_TIMERX_CTRL(a) (a),-1,-1,-1

/**
 * Register (RSL) bcn_timer#_period
 *
 * BCN Timer Period Registers
 * These registers configure the repetition period of the BCN timers.
 * If [N1] and [N2] are both set to 0, the timer is in one-shot mode,
 * and will not repeat.
 */
union cavm_bcn_timerx_period
{
    uint64_t u;
    struct cavm_bcn_timerx_period_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t n1                    : 12; /**< [ 35: 24](R/W) Repeat period N1 value for the BCN Timer. */
        uint64_t n2                    : 24; /**< [ 23:  0](R/W) Repeat period N2 value for the BCN Timer. */
#else /* Word 0 - Little Endian */
        uint64_t n2                    : 24; /**< [ 23:  0](R/W) Repeat period N2 value for the BCN Timer. */
        uint64_t n1                    : 12; /**< [ 35: 24](R/W) Repeat period N1 value for the BCN Timer. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bcn_timerx_period_s cn; */
};
typedef union cavm_bcn_timerx_period cavm_bcn_timerx_period_t;

static inline uint64_t CAVM_BCN_TIMERX_PERIOD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BCN_TIMERX_PERIOD(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=2))
        return 0x87e043042020ll + 0x100ll * ((a) & 0x3);
    __cavm_csr_fatal("BCN_TIMERX_PERIOD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BCN_TIMERX_PERIOD(a) cavm_bcn_timerx_period_t
#define bustype_CAVM_BCN_TIMERX_PERIOD(a) CSR_TYPE_RSL
#define basename_CAVM_BCN_TIMERX_PERIOD(a) "BCN_TIMERX_PERIOD"
#define device_bar_CAVM_BCN_TIMERX_PERIOD(a) 0x2 /* PF_BAR2 */
#define busnum_CAVM_BCN_TIMERX_PERIOD(a) (a)
#define arguments_CAVM_BCN_TIMERX_PERIOD(a) (a),-1,-1,-1

/**
 * Register (RSL) bcn_timer#_start
 *
 * BCN Timer Start Registers
 * These registers configure the N1 and N2 time values at which
 * the BCN timer will start.
 */
union cavm_bcn_timerx_start
{
    uint64_t u;
    struct cavm_bcn_timerx_start_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t n1                    : 40; /**< [ 63: 24](R/W) Start time N1 value for the BCN Timer. */
        uint64_t n2                    : 24; /**< [ 23:  0](R/W) Start time N2 value for the BCN Timer. */
#else /* Word 0 - Little Endian */
        uint64_t n2                    : 24; /**< [ 23:  0](R/W) Start time N2 value for the BCN Timer. */
        uint64_t n1                    : 40; /**< [ 63: 24](R/W) Start time N1 value for the BCN Timer. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bcn_timerx_start_s cn; */
};
typedef union cavm_bcn_timerx_start cavm_bcn_timerx_start_t;

static inline uint64_t CAVM_BCN_TIMERX_START(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BCN_TIMERX_START(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=2))
        return 0x87e043042010ll + 0x100ll * ((a) & 0x3);
    __cavm_csr_fatal("BCN_TIMERX_START", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BCN_TIMERX_START(a) cavm_bcn_timerx_start_t
#define bustype_CAVM_BCN_TIMERX_START(a) CSR_TYPE_RSL
#define basename_CAVM_BCN_TIMERX_START(a) "BCN_TIMERX_START"
#define device_bar_CAVM_BCN_TIMERX_START(a) 0x2 /* PF_BAR2 */
#define busnum_CAVM_BCN_TIMERX_START(a) (a)
#define arguments_CAVM_BCN_TIMERX_START(a) (a),-1,-1,-1

/**
 * Register (RSL) bcn_timer#_width
 *
 * BCN Timer Width Registers
 * These registers configure the pulse width of the BCN timers.
 * For the duration that is specified, the BCN timer output
 * timer_ref_out will be driven to 1.
 */
union cavm_bcn_timerx_width
{
    uint64_t u;
    struct cavm_bcn_timerx_width_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t n1                    : 12; /**< [ 35: 24](R/W) Pulse width N1 value for the BCN Timer. */
        uint64_t n2                    : 24; /**< [ 23:  0](R/W) Pulse width N2 value for the BCN Timer. */
#else /* Word 0 - Little Endian */
        uint64_t n2                    : 24; /**< [ 23:  0](R/W) Pulse width N2 value for the BCN Timer. */
        uint64_t n1                    : 12; /**< [ 35: 24](R/W) Pulse width N1 value for the BCN Timer. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bcn_timerx_width_s cn; */
};
typedef union cavm_bcn_timerx_width cavm_bcn_timerx_width_t;

static inline uint64_t CAVM_BCN_TIMERX_WIDTH(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BCN_TIMERX_WIDTH(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=2))
        return 0x87e043042030ll + 0x100ll * ((a) & 0x3);
    __cavm_csr_fatal("BCN_TIMERX_WIDTH", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BCN_TIMERX_WIDTH(a) cavm_bcn_timerx_width_t
#define bustype_CAVM_BCN_TIMERX_WIDTH(a) CSR_TYPE_RSL
#define basename_CAVM_BCN_TIMERX_WIDTH(a) "BCN_TIMERX_WIDTH"
#define device_bar_CAVM_BCN_TIMERX_WIDTH(a) 0x2 /* PF_BAR2 */
#define busnum_CAVM_BCN_TIMERX_WIDTH(a) (a)
#define arguments_CAVM_BCN_TIMERX_WIDTH(a) (a),-1,-1,-1

#endif /* __CAVM_CSRS_BCN_H__ */
