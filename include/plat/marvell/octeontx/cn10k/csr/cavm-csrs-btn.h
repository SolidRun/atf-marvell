#ifndef __CAVM_CSRS_BTN_H__
#define __CAVM_CSRS_BTN_H__
/* This file is auto-generated. Do not edit */

/***********************license start***********************************
* Copyright (C) 2020-2021 Marvell
* SPDX-License-Identifier: BSD-3-Clause
* https://spdx.org/licenses
***********************license end**************************************/


/**
 * @file
 *
 * Configuration and status register (CSR) address and type definitions for
 * OcteonTX BTN.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Register (RSL) btn_bclk_capture_cfg
 *
 * BTN BCLK-Domain Capture Configuration Register
 * This register controls the BCLK-domain snapshot capture
 * functionality of the BTN block.
 */
union cavm_btn_bclk_capture_cfg
{
    uint64_t u;
    struct cavm_btn_bclk_capture_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_11_63        : 53;
        uint64_t capt_trig             : 3;  /**< [ 10:  8](R/W) Selects the trigger for a timestamp capture.
                                                                 0x0 = Match as configured by BTN_MATCH_CFG.
                                                                 0x1 = Start of frame.
                                                                 0x2 = Start of sub-frame.
                                                                 0x3 = Software (capture occurs immediately).
                                                                 0x4 = RFP.
                                                                 0x5-0x7 = Reserved. */
        uint64_t reserved_1_7          : 7;
        uint64_t capt_en               : 1;  /**< [  0:  0](R/W/H) Enables simultaneous capture of the various system
                                                                 timestamps (PSM, IEEE 1914, and PTP).
                                                                 This bit resets to 0 after the capture occurs. */
#else /* Word 0 - Little Endian */
        uint64_t capt_en               : 1;  /**< [  0:  0](R/W/H) Enables simultaneous capture of the various system
                                                                 timestamps (PSM, IEEE 1914, and PTP).
                                                                 This bit resets to 0 after the capture occurs. */
        uint64_t reserved_1_7          : 7;
        uint64_t capt_trig             : 3;  /**< [ 10:  8](R/W) Selects the trigger for a timestamp capture.
                                                                 0x0 = Match as configured by BTN_MATCH_CFG.
                                                                 0x1 = Start of frame.
                                                                 0x2 = Start of sub-frame.
                                                                 0x3 = Software (capture occurs immediately).
                                                                 0x4 = RFP.
                                                                 0x5-0x7 = Reserved. */
        uint64_t reserved_11_63        : 53;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_btn_bclk_capture_cfg_s cn; */
};
typedef union cavm_btn_bclk_capture_cfg cavm_btn_bclk_capture_cfg_t;

#define CAVM_BTN_BCLK_CAPTURE_CFG CAVM_BTN_BCLK_CAPTURE_CFG_FUNC()
static inline uint64_t CAVM_BTN_BCLK_CAPTURE_CFG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BTN_BCLK_CAPTURE_CFG_FUNC(void)
{
    return 0x87e043048800ll;
}

#define typedef_CAVM_BTN_BCLK_CAPTURE_CFG cavm_btn_bclk_capture_cfg_t
#define bustype_CAVM_BTN_BCLK_CAPTURE_CFG CSR_TYPE_RSL
#define basename_CAVM_BTN_BCLK_CAPTURE_CFG "BTN_BCLK_CAPTURE_CFG"
#define busnum_CAVM_BTN_BCLK_CAPTURE_CFG 0
#define arguments_CAVM_BTN_BCLK_CAPTURE_CFG -1,-1,-1,-1

/**
 * Register (RSL) btn_bclk_capture_ieee1914
 *
 * BTN BCLK-Domain Capture IEEE 1914 Register
 * This register contains the IEEE 1914 timestamp value sampled at the
 * most recent BCLK-domain capture event.
 */
union cavm_btn_bclk_capture_ieee1914
{
    uint64_t u;
    struct cavm_btn_bclk_capture_ieee1914_s
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
    /* struct cavm_btn_bclk_capture_ieee1914_s cn; */
};
typedef union cavm_btn_bclk_capture_ieee1914 cavm_btn_bclk_capture_ieee1914_t;

#define CAVM_BTN_BCLK_CAPTURE_IEEE1914 CAVM_BTN_BCLK_CAPTURE_IEEE1914_FUNC()
static inline uint64_t CAVM_BTN_BCLK_CAPTURE_IEEE1914_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BTN_BCLK_CAPTURE_IEEE1914_FUNC(void)
{
    return 0x87e043048830ll;
}

#define typedef_CAVM_BTN_BCLK_CAPTURE_IEEE1914 cavm_btn_bclk_capture_ieee1914_t
#define bustype_CAVM_BTN_BCLK_CAPTURE_IEEE1914 CSR_TYPE_RSL
#define basename_CAVM_BTN_BCLK_CAPTURE_IEEE1914 "BTN_BCLK_CAPTURE_IEEE1914"
#define busnum_CAVM_BTN_BCLK_CAPTURE_IEEE1914 0
#define arguments_CAVM_BTN_BCLK_CAPTURE_IEEE1914 -1,-1,-1,-1

/**
 * Register (RSL) btn_bclk_capture_psm
 *
 * BTN BCLK-Domain Capture PSM Register
 * This register contains the PSM frame, subframe and tick values sampled
 * at the most recent BCLK-domain capture event.
 */
union cavm_btn_bclk_capture_psm
{
    uint64_t u;
    struct cavm_btn_bclk_capture_psm_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t frame                 : 12; /**< [ 31: 20](RO/H) Captured value of the PSM frame counter. */
        uint64_t sf                    : 4;  /**< [ 19: 16](RO/H) Captured value of the PSM subframe counter. */
        uint64_t tick                  : 16; /**< [ 15:  0](RO/H) Captured value of the PSM tick counter. */
#else /* Word 0 - Little Endian */
        uint64_t tick                  : 16; /**< [ 15:  0](RO/H) Captured value of the PSM tick counter. */
        uint64_t sf                    : 4;  /**< [ 19: 16](RO/H) Captured value of the PSM subframe counter. */
        uint64_t frame                 : 12; /**< [ 31: 20](RO/H) Captured value of the PSM frame counter. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_btn_bclk_capture_psm_s cn; */
};
typedef union cavm_btn_bclk_capture_psm cavm_btn_bclk_capture_psm_t;

#define CAVM_BTN_BCLK_CAPTURE_PSM CAVM_BTN_BCLK_CAPTURE_PSM_FUNC()
static inline uint64_t CAVM_BTN_BCLK_CAPTURE_PSM_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BTN_BCLK_CAPTURE_PSM_FUNC(void)
{
    return 0x87e043048810ll;
}

#define typedef_CAVM_BTN_BCLK_CAPTURE_PSM cavm_btn_bclk_capture_psm_t
#define bustype_CAVM_BTN_BCLK_CAPTURE_PSM CSR_TYPE_RSL
#define basename_CAVM_BTN_BCLK_CAPTURE_PSM "BTN_BCLK_CAPTURE_PSM"
#define busnum_CAVM_BTN_BCLK_CAPTURE_PSM 0
#define arguments_CAVM_BTN_BCLK_CAPTURE_PSM -1,-1,-1,-1

/**
 * Register (RSL) btn_bclk_capture_ptp
 *
 * BTN BCLK-Domain Capture PTP Register
 * This register contains the PTP timestamp value sampled at the
 * most recent BCLK-domain capture event.
 */
union cavm_btn_bclk_capture_ptp
{
    uint64_t u;
    struct cavm_btn_bclk_capture_ptp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ptp                   : 64; /**< [ 63:  0](RO/H) Captured value of the PTP timestamp. */
#else /* Word 0 - Little Endian */
        uint64_t ptp                   : 64; /**< [ 63:  0](RO/H) Captured value of the PTP timestamp. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_btn_bclk_capture_ptp_s cn; */
};
typedef union cavm_btn_bclk_capture_ptp cavm_btn_bclk_capture_ptp_t;

#define CAVM_BTN_BCLK_CAPTURE_PTP CAVM_BTN_BCLK_CAPTURE_PTP_FUNC()
static inline uint64_t CAVM_BTN_BCLK_CAPTURE_PTP_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BTN_BCLK_CAPTURE_PTP_FUNC(void)
{
    return 0x87e043048820ll;
}

#define typedef_CAVM_BTN_BCLK_CAPTURE_PTP cavm_btn_bclk_capture_ptp_t
#define bustype_CAVM_BTN_BCLK_CAPTURE_PTP CSR_TYPE_RSL
#define basename_CAVM_BTN_BCLK_CAPTURE_PTP "BTN_BCLK_CAPTURE_PTP"
#define busnum_CAVM_BTN_BCLK_CAPTURE_PTP 0
#define arguments_CAVM_BTN_BCLK_CAPTURE_PTP -1,-1,-1,-1

/**
 * Register (RSL) btn_bfn_err_count
 *
 * BTN BFN Error Count Register
 * This register contains a running count of BFN errors detected.
 */
union cavm_btn_bfn_err_count
{
    uint64_t u;
    struct cavm_btn_bfn_err_count_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t bfn_err               : 32; /**< [ 31:  0](R/W/H) Count of BFN errors detected. */
#else /* Word 0 - Little Endian */
        uint64_t bfn_err               : 32; /**< [ 31:  0](R/W/H) Count of BFN errors detected. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_btn_bfn_err_count_s cn; */
};
typedef union cavm_btn_bfn_err_count cavm_btn_bfn_err_count_t;

#define CAVM_BTN_BFN_ERR_COUNT CAVM_BTN_BFN_ERR_COUNT_FUNC()
static inline uint64_t CAVM_BTN_BFN_ERR_COUNT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BTN_BFN_ERR_COUNT_FUNC(void)
{
    return 0x87e04304e030ll;
}

#define typedef_CAVM_BTN_BFN_ERR_COUNT cavm_btn_bfn_err_count_t
#define bustype_CAVM_BTN_BFN_ERR_COUNT CSR_TYPE_RSL
#define basename_CAVM_BTN_BFN_ERR_COUNT "BTN_BFN_ERR_COUNT"
#define busnum_CAVM_BTN_BFN_ERR_COUNT 0
#define arguments_CAVM_BTN_BFN_ERR_COUNT -1,-1,-1,-1

/**
 * Register (RSL) btn_capture_cfg
 *
 * BTN Capture Configuration Register
 * This register controls the snapshot capture functionality of the BTN block.
 */
union cavm_btn_capture_cfg
{
    uint64_t u;
    struct cavm_btn_capture_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_11_63        : 53;
        uint64_t capt_trig             : 3;  /**< [ 10:  8](R/W) Selects the trigger for a timestamp capture.
                                                                 0x0 = Match as configured by BTN_MATCH_CFG.
                                                                 0x1 = Start of frame.
                                                                 0x2 = Start of sub-frame.
                                                                 0x3 = Software (capture occurs immediately).
                                                                 0x4 = RFP.
                                                                 0x5-0x7 = Reserved. */
        uint64_t reserved_1_7          : 7;
        uint64_t capt_en               : 1;  /**< [  0:  0](R/W/H) Enables simultaneous capture of the various system
                                                                 timestamps (PSM, IEEE 1914, and PTP).
                                                                 This bit resets to 0 after the capture occurs. */
#else /* Word 0 - Little Endian */
        uint64_t capt_en               : 1;  /**< [  0:  0](R/W/H) Enables simultaneous capture of the various system
                                                                 timestamps (PSM, IEEE 1914, and PTP).
                                                                 This bit resets to 0 after the capture occurs. */
        uint64_t reserved_1_7          : 7;
        uint64_t capt_trig             : 3;  /**< [ 10:  8](R/W) Selects the trigger for a timestamp capture.
                                                                 0x0 = Match as configured by BTN_MATCH_CFG.
                                                                 0x1 = Start of frame.
                                                                 0x2 = Start of sub-frame.
                                                                 0x3 = Software (capture occurs immediately).
                                                                 0x4 = RFP.
                                                                 0x5-0x7 = Reserved. */
        uint64_t reserved_11_63        : 53;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_btn_capture_cfg_s cn; */
};
typedef union cavm_btn_capture_cfg cavm_btn_capture_cfg_t;

#define CAVM_BTN_CAPTURE_CFG CAVM_BTN_CAPTURE_CFG_FUNC()
static inline uint64_t CAVM_BTN_CAPTURE_CFG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BTN_CAPTURE_CFG_FUNC(void)
{
    return 0x87e04304c000ll;
}

#define typedef_CAVM_BTN_CAPTURE_CFG cavm_btn_capture_cfg_t
#define bustype_CAVM_BTN_CAPTURE_CFG CSR_TYPE_RSL
#define basename_CAVM_BTN_CAPTURE_CFG "BTN_CAPTURE_CFG"
#define busnum_CAVM_BTN_CAPTURE_CFG 0
#define arguments_CAVM_BTN_CAPTURE_CFG -1,-1,-1,-1

/**
 * Register (RSL) btn_capture_ieee1914
 *
 * BTN Capture IEEE 1914 Register
 * This register contains the IEEE 1914 timestamp value sampled at the
 * most recent capture event.
 */
union cavm_btn_capture_ieee1914
{
    uint64_t u;
    struct cavm_btn_capture_ieee1914_s
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
    /* struct cavm_btn_capture_ieee1914_s cn; */
};
typedef union cavm_btn_capture_ieee1914 cavm_btn_capture_ieee1914_t;

#define CAVM_BTN_CAPTURE_IEEE1914 CAVM_BTN_CAPTURE_IEEE1914_FUNC()
static inline uint64_t CAVM_BTN_CAPTURE_IEEE1914_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BTN_CAPTURE_IEEE1914_FUNC(void)
{
    return 0x87e04304c300ll;
}

#define typedef_CAVM_BTN_CAPTURE_IEEE1914 cavm_btn_capture_ieee1914_t
#define bustype_CAVM_BTN_CAPTURE_IEEE1914 CSR_TYPE_RSL
#define basename_CAVM_BTN_CAPTURE_IEEE1914 "BTN_CAPTURE_IEEE1914"
#define busnum_CAVM_BTN_CAPTURE_IEEE1914 0
#define arguments_CAVM_BTN_CAPTURE_IEEE1914 -1,-1,-1,-1

/**
 * Register (RSL) btn_capture_psm
 *
 * BTN Capture PSM Register
 * This register contains the PSM frame, subframe and tick values sampled
 * at the most recent capture event.
 */
union cavm_btn_capture_psm
{
    uint64_t u;
    struct cavm_btn_capture_psm_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t frame                 : 12; /**< [ 31: 20](RO/H) Captured value of the PSM frame counter. */
        uint64_t sf                    : 4;  /**< [ 19: 16](RO/H) Captured value of the PSM subframe counter. */
        uint64_t tick                  : 16; /**< [ 15:  0](RO/H) Captured value of the PSM tick counter. */
#else /* Word 0 - Little Endian */
        uint64_t tick                  : 16; /**< [ 15:  0](RO/H) Captured value of the PSM tick counter. */
        uint64_t sf                    : 4;  /**< [ 19: 16](RO/H) Captured value of the PSM subframe counter. */
        uint64_t frame                 : 12; /**< [ 31: 20](RO/H) Captured value of the PSM frame counter. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_btn_capture_psm_s cn; */
};
typedef union cavm_btn_capture_psm cavm_btn_capture_psm_t;

#define CAVM_BTN_CAPTURE_PSM CAVM_BTN_CAPTURE_PSM_FUNC()
static inline uint64_t CAVM_BTN_CAPTURE_PSM_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BTN_CAPTURE_PSM_FUNC(void)
{
    return 0x87e04304c100ll;
}

#define typedef_CAVM_BTN_CAPTURE_PSM cavm_btn_capture_psm_t
#define bustype_CAVM_BTN_CAPTURE_PSM CSR_TYPE_RSL
#define basename_CAVM_BTN_CAPTURE_PSM "BTN_CAPTURE_PSM"
#define busnum_CAVM_BTN_CAPTURE_PSM 0
#define arguments_CAVM_BTN_CAPTURE_PSM -1,-1,-1,-1

/**
 * Register (RSL) btn_capture_psm_cnt
 *
 * BTN Capture PSM Register
 * This register contains the PSM frame and subframe cycle counter
 * values sampled at the most recent capture event.
 */
union cavm_btn_capture_psm_cnt
{
    uint64_t u;
    struct cavm_btn_capture_psm_cnt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_56_63        : 8;
        uint64_t frame_cnt             : 24; /**< [ 55: 32](RO/H) Captured value of the PSM frame cycle counter. */
        uint64_t reserved_20_31        : 12;
        uint64_t sf_cnt                : 20; /**< [ 19:  0](RO/H) Captured value of the PSM subframe cycle counter. */
#else /* Word 0 - Little Endian */
        uint64_t sf_cnt                : 20; /**< [ 19:  0](RO/H) Captured value of the PSM subframe cycle counter. */
        uint64_t reserved_20_31        : 12;
        uint64_t frame_cnt             : 24; /**< [ 55: 32](RO/H) Captured value of the PSM frame cycle counter. */
        uint64_t reserved_56_63        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_btn_capture_psm_cnt_s cn; */
};
typedef union cavm_btn_capture_psm_cnt cavm_btn_capture_psm_cnt_t;

#define CAVM_BTN_CAPTURE_PSM_CNT CAVM_BTN_CAPTURE_PSM_CNT_FUNC()
static inline uint64_t CAVM_BTN_CAPTURE_PSM_CNT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BTN_CAPTURE_PSM_CNT_FUNC(void)
{
    return 0x87e04304c110ll;
}

#define typedef_CAVM_BTN_CAPTURE_PSM_CNT cavm_btn_capture_psm_cnt_t
#define bustype_CAVM_BTN_CAPTURE_PSM_CNT CSR_TYPE_RSL
#define basename_CAVM_BTN_CAPTURE_PSM_CNT "BTN_CAPTURE_PSM_CNT"
#define busnum_CAVM_BTN_CAPTURE_PSM_CNT 0
#define arguments_CAVM_BTN_CAPTURE_PSM_CNT -1,-1,-1,-1

/**
 * Register (RSL) btn_capture_ptp
 *
 * BTN Capture PTP Register
 * This register contains the PTP timestamp value sampled at the
 * most recent capture event.
 */
union cavm_btn_capture_ptp
{
    uint64_t u;
    struct cavm_btn_capture_ptp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ptp                   : 64; /**< [ 63:  0](RO/H) Captured value of the PTP timestamp. */
#else /* Word 0 - Little Endian */
        uint64_t ptp                   : 64; /**< [ 63:  0](RO/H) Captured value of the PTP timestamp. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_btn_capture_ptp_s cn; */
};
typedef union cavm_btn_capture_ptp cavm_btn_capture_ptp_t;

#define CAVM_BTN_CAPTURE_PTP CAVM_BTN_CAPTURE_PTP_FUNC()
static inline uint64_t CAVM_BTN_CAPTURE_PTP_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BTN_CAPTURE_PTP_FUNC(void)
{
    return 0x87e04304c200ll;
}

#define typedef_CAVM_BTN_CAPTURE_PTP cavm_btn_capture_ptp_t
#define bustype_CAVM_BTN_CAPTURE_PTP CSR_TYPE_RSL
#define basename_CAVM_BTN_CAPTURE_PTP "BTN_CAPTURE_PTP"
#define busnum_CAVM_BTN_CAPTURE_PTP 0
#define arguments_CAVM_BTN_CAPTURE_PTP -1,-1,-1,-1

/**
 * Register (RSL) btn_cfg
 *
 * BTN Configuration Register
 * This register controls the basic functionality of the BTN block.
 */
union cavm_btn_cfg
{
    uint64_t u;
    struct cavm_btn_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t btn_enable            : 1;  /**< [ 63: 63](R/W) Enables the BTN block. */
        uint64_t reserved_28_62        : 35;
        uint64_t safe_late_rfp         : 1;  /**< [ 27: 27](R/W) When set to 1, this will suppress subframe handling when a late-RFP
                                                                 condition occurs.  Without this, a late-RFP may result in an extra
                                                                 SOSF and incorrect subframe and tick values. */
        uint64_t internal_rfp_mode     : 1;  /**< [ 26: 26](R/W) Enables the timer internal RFP mode.  When set, the BTN will
                                                                 ignore the RFP signal and instead generate a SOF
                                                                 (start of frame) when the frame counter reaches the value
                                                                 specified by [FRAME_MAX]. */
        uint64_t rfp_pol               : 1;  /**< [ 25: 25](R/W) Polarity of the radio frame pulse:
                                                                 0 = RFP detected on a falling edge.
                                                                 1 = RFP detected on a rising edge. */
        uint64_t rfp_type              : 1;  /**< [ 24: 24](R/W) Frame handling upon detection of RFP.
                                                                 0 = BFN burst carries the frame number for the subsequent frame.
                                                                 1 = BFN burst carries the frame number for the current frame.
                                                                 The operating frame number will be incremented by 1, and if
                                                                 this value does not match the BFN burst, an error will be
                                                                 raised. */
        uint64_t reserved_16_23        : 8;
        uint64_t bfn_clk_per           : 16; /**< [ 15:  0](R/W) This specifies the clock period of the BFN clock, in BTS_CLK
                                                                 cycles. */
#else /* Word 0 - Little Endian */
        uint64_t bfn_clk_per           : 16; /**< [ 15:  0](R/W) This specifies the clock period of the BFN clock, in BTS_CLK
                                                                 cycles. */
        uint64_t reserved_16_23        : 8;
        uint64_t rfp_type              : 1;  /**< [ 24: 24](R/W) Frame handling upon detection of RFP.
                                                                 0 = BFN burst carries the frame number for the subsequent frame.
                                                                 1 = BFN burst carries the frame number for the current frame.
                                                                 The operating frame number will be incremented by 1, and if
                                                                 this value does not match the BFN burst, an error will be
                                                                 raised. */
        uint64_t rfp_pol               : 1;  /**< [ 25: 25](R/W) Polarity of the radio frame pulse:
                                                                 0 = RFP detected on a falling edge.
                                                                 1 = RFP detected on a rising edge. */
        uint64_t internal_rfp_mode     : 1;  /**< [ 26: 26](R/W) Enables the timer internal RFP mode.  When set, the BTN will
                                                                 ignore the RFP signal and instead generate a SOF
                                                                 (start of frame) when the frame counter reaches the value
                                                                 specified by [FRAME_MAX]. */
        uint64_t safe_late_rfp         : 1;  /**< [ 27: 27](R/W) When set to 1, this will suppress subframe handling when a late-RFP
                                                                 condition occurs.  Without this, a late-RFP may result in an extra
                                                                 SOSF and incorrect subframe and tick values. */
        uint64_t reserved_28_62        : 35;
        uint64_t btn_enable            : 1;  /**< [ 63: 63](R/W) Enables the BTN block. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_btn_cfg_s cn; */
};
typedef union cavm_btn_cfg cavm_btn_cfg_t;

#define CAVM_BTN_CFG CAVM_BTN_CFG_FUNC()
static inline uint64_t CAVM_BTN_CFG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BTN_CFG_FUNC(void)
{
    return 0x87e043049000ll;
}

#define typedef_CAVM_BTN_CFG cavm_btn_cfg_t
#define bustype_CAVM_BTN_CFG CSR_TYPE_RSL
#define basename_CAVM_BTN_CFG "BTN_CFG"
#define busnum_CAVM_BTN_CFG 0
#define arguments_CAVM_BTN_CFG -1,-1,-1,-1

/**
 * Register (RSL) btn_cfg2
 *
 * BTN Configuration Register
 * Internal:
 * The BCN version of this register contained certain additional
 * parameters for alternate operation modes.  Keeping the register
 * for BTN/105, in case it's needed.
 */
union cavm_btn_cfg2
{
    uint64_t u;
    struct cavm_btn_cfg2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_btn_cfg2_s cn; */
};
typedef union cavm_btn_cfg2 cavm_btn_cfg2_t;

#define CAVM_BTN_CFG2 CAVM_BTN_CFG2_FUNC()
static inline uint64_t CAVM_BTN_CFG2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BTN_CFG2_FUNC(void)
{
    return 0x87e04304f000ll;
}

#define typedef_CAVM_BTN_CFG2 cavm_btn_cfg2_t
#define bustype_CAVM_BTN_CFG2 CSR_TYPE_RSL
#define basename_CAVM_BTN_CFG2 "BTN_CFG2"
#define busnum_CAVM_BTN_CFG2 0
#define arguments_CAVM_BTN_CFG2 -1,-1,-1,-1

/**
 * Register (RSL) btn_ctrl
 *
 * BTN Control Register
 * This register is used to configure the clock domain crossing to
 * the BTS_CLK domain.  It should be properly initialized before
 * using the BTS_CLK domain logic of the BTN block.
 */
union cavm_btn_ctrl
{
    uint64_t u;
    struct cavm_btn_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_63           : 1;
        uint64_t bts_clk_rst_n         : 1;  /**< [ 62: 62](R/W) Reset for the BTS_CLK domain logic of the BTN. */
        uint64_t bts_clk_rst_done      : 1;  /**< [ 61: 61](RO/H) Indicates the BTS_CLK reset has completed. */
        uint64_t bts_clk_clk_check     : 1;  /**< [ 60: 60](R/W/H) Used to check the presence of the BTS_CLK Clock.  See
                                                                 [BTS_CLK_CLK_ACTIVE] for more details. */
        uint64_t bts_clk_clk_active    : 1;  /**< [ 59: 59](RO/H) Indicates the activity of the BTS_CLK clock.  When
                                                                 [BTS_CLK_CLK_CHECK] is written to 1, the previous clock status
                                                                 is cleared.  After a rising edge and falling edge of the BTS_CLK
                                                                 clock are detected, the [BTS_CLK_CLK_ACTIVE] bit will become 1,
                                                                 and the [BTS_CLK_CLK_CHECK] bit will return to 0. */
        uint64_t reserved_57_58        : 2;
        uint64_t bts_clk_domain_dis    : 1;  /**< [ 56: 56](R/W) Isolates the BTS_CLK domain logic of the BTN until it is
                                                                 properly configured.
                                                                 1 = BTS_CLK domain is disabled and most BTN registers and
                                                                 functionality is unavailable.
                                                                 0 = BTS_CLK domain is enabled. */
        uint64_t reserved_0_55         : 56;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_55         : 56;
        uint64_t bts_clk_domain_dis    : 1;  /**< [ 56: 56](R/W) Isolates the BTS_CLK domain logic of the BTN until it is
                                                                 properly configured.
                                                                 1 = BTS_CLK domain is disabled and most BTN registers and
                                                                 functionality is unavailable.
                                                                 0 = BTS_CLK domain is enabled. */
        uint64_t reserved_57_58        : 2;
        uint64_t bts_clk_clk_active    : 1;  /**< [ 59: 59](RO/H) Indicates the activity of the BTS_CLK clock.  When
                                                                 [BTS_CLK_CLK_CHECK] is written to 1, the previous clock status
                                                                 is cleared.  After a rising edge and falling edge of the BTS_CLK
                                                                 clock are detected, the [BTS_CLK_CLK_ACTIVE] bit will become 1,
                                                                 and the [BTS_CLK_CLK_CHECK] bit will return to 0. */
        uint64_t bts_clk_clk_check     : 1;  /**< [ 60: 60](R/W/H) Used to check the presence of the BTS_CLK Clock.  See
                                                                 [BTS_CLK_CLK_ACTIVE] for more details. */
        uint64_t bts_clk_rst_done      : 1;  /**< [ 61: 61](RO/H) Indicates the BTS_CLK reset has completed. */
        uint64_t bts_clk_rst_n         : 1;  /**< [ 62: 62](R/W) Reset for the BTS_CLK domain logic of the BTN. */
        uint64_t reserved_63           : 1;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_btn_ctrl_s cn; */
};
typedef union cavm_btn_ctrl cavm_btn_ctrl_t;

#define CAVM_BTN_CTRL CAVM_BTN_CTRL_FUNC()
static inline uint64_t CAVM_BTN_CTRL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BTN_CTRL_FUNC(void)
{
    return 0x87e043048000ll;
}

#define typedef_CAVM_BTN_CTRL cavm_btn_ctrl_t
#define bustype_CAVM_BTN_CTRL CSR_TYPE_RSL
#define basename_CAVM_BTN_CTRL "BTN_CTRL"
#define busnum_CAVM_BTN_CTRL 0
#define arguments_CAVM_BTN_CTRL -1,-1,-1,-1

/**
 * Register (RSL) btn_ctrl2
 *
 * INTERNAL: BTN Control2 Register
 *
 * This register provides controls for additional BTN functionality.
 */
union cavm_btn_ctrl2
{
    uint64_t u;
    struct cavm_btn_ctrl2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t rfoe_time_mode        : 1;  /**< [  1:  1](R/W) Set to 1 to drive SOF/SOSF to RFOE as single BCLK-cycle
                                                                 pulses. */
        uint64_t reserved_0            : 1;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0            : 1;
        uint64_t rfoe_time_mode        : 1;  /**< [  1:  1](R/W) Set to 1 to drive SOF/SOSF to RFOE as single BCLK-cycle
                                                                 pulses. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_btn_ctrl2_s cn; */
};
typedef union cavm_btn_ctrl2 cavm_btn_ctrl2_t;

#define CAVM_BTN_CTRL2 CAVM_BTN_CTRL2_FUNC()
static inline uint64_t CAVM_BTN_CTRL2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BTN_CTRL2_FUNC(void)
{
    return 0x87e043048f00ll;
}

#define typedef_CAVM_BTN_CTRL2 cavm_btn_ctrl2_t
#define bustype_CAVM_BTN_CTRL2 CSR_TYPE_RSL
#define basename_CAVM_BTN_CTRL2 "BTN_CTRL2"
#define busnum_CAVM_BTN_CTRL2 0
#define arguments_CAVM_BTN_CTRL2 -1,-1,-1,-1

/**
 * Register (RSL) btn_dbg
 *
 * INTERNAL: BTN DBG Register
 *
 * This register controls the debug (DTX) logic for the BTN's
 * bts_clk domain.
 */
union cavm_btn_dbg
{
    uint64_t u;
    struct cavm_btn_dbg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_17_63        : 47;
        uint64_t dbg_push_throttle     : 1;  /**< [ 16: 16](R/W) Internal:
                                                                 When set to 1, throttles DBG pushes so that they occur on
                                                                 every other bts_clk cycle.  This should be enabled if
                                                                 the BCLK is slower than TBD. */
        uint64_t dbg1_sel              : 8;  /**< [ 15:  8](R/W) Internal:
                                                                 0x00 : disabled
                                                                 0x10 : {frame_val[11:0],frame_cnt_val[23:0]};
                                                                 0x11 : {4'h0,sof,sosf,match_detect_1a,capt_event_1a,sync_event_1a,rfp_good_incr_
                                                                 1a,rfp_bad_incr_1a,bfn_err_incr_1a,subframe_val[3:0],sf_cnt_val[19:0]};
                                                                 0x12 : {sof,sosf,capt_event_1a,sync_event_1a,tick_val_fxp[31:0]};
                                                                 0x20 : {sof,sosf,capt_event_1a,sync_event_1a,rfp_good_incr_1a,rfp_bad_incr_1a,bf
                                                                 n_err_incr_1a,nsec_val[23:0],fnsec_val[4:0]};
                                                                 0x30 : ptp_val[35:0];
                                                                 0x31 : ptp_val[63:28];
                                                                 0x40 : {bfn_bit_ctr[3:0],bts_clk_div_ctr[15:0],rx_bfn_val[15:0]}; */
        uint64_t dbg0_sel              : 8;  /**< [  7:  0](R/W) Internal:
                                                                 See BCN_DBG[DBG1_SEL]. */
#else /* Word 0 - Little Endian */
        uint64_t dbg0_sel              : 8;  /**< [  7:  0](R/W) Internal:
                                                                 See BCN_DBG[DBG1_SEL]. */
        uint64_t dbg1_sel              : 8;  /**< [ 15:  8](R/W) Internal:
                                                                 0x00 : disabled
                                                                 0x10 : {frame_val[11:0],frame_cnt_val[23:0]};
                                                                 0x11 : {4'h0,sof,sosf,match_detect_1a,capt_event_1a,sync_event_1a,rfp_good_incr_
                                                                 1a,rfp_bad_incr_1a,bfn_err_incr_1a,subframe_val[3:0],sf_cnt_val[19:0]};
                                                                 0x12 : {sof,sosf,capt_event_1a,sync_event_1a,tick_val_fxp[31:0]};
                                                                 0x20 : {sof,sosf,capt_event_1a,sync_event_1a,rfp_good_incr_1a,rfp_bad_incr_1a,bf
                                                                 n_err_incr_1a,nsec_val[23:0],fnsec_val[4:0]};
                                                                 0x30 : ptp_val[35:0];
                                                                 0x31 : ptp_val[63:28];
                                                                 0x40 : {bfn_bit_ctr[3:0],bts_clk_div_ctr[15:0],rx_bfn_val[15:0]}; */
        uint64_t dbg_push_throttle     : 1;  /**< [ 16: 16](R/W) Internal:
                                                                 When set to 1, throttles DBG pushes so that they occur on
                                                                 every other bts_clk cycle.  This should be enabled if
                                                                 the BCLK is slower than TBD. */
        uint64_t reserved_17_63        : 47;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_btn_dbg_s cn; */
};
typedef union cavm_btn_dbg cavm_btn_dbg_t;

#define CAVM_BTN_DBG CAVM_BTN_DBG_FUNC()
static inline uint64_t CAVM_BTN_DBG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BTN_DBG_FUNC(void)
{
    return 0x87e04304ffe0ll;
}

#define typedef_CAVM_BTN_DBG cavm_btn_dbg_t
#define bustype_CAVM_BTN_DBG CSR_TYPE_RSL
#define basename_CAVM_BTN_DBG "BTN_DBG"
#define busnum_CAVM_BTN_DBG 0
#define arguments_CAVM_BTN_DBG -1,-1,-1,-1

/**
 * Register (RSL) btn_eco
 *
 * INTERNAL: BTN ECO Register
 */
union cavm_btn_eco
{
    uint64_t u;
    struct cavm_btn_eco_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t eco_rw                : 32; /**< [ 31:  0](R/W) Internal:
                                                                 Reserved for ECO usage. */
#else /* Word 0 - Little Endian */
        uint64_t eco_rw                : 32; /**< [ 31:  0](R/W) Internal:
                                                                 Reserved for ECO usage. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_btn_eco_s cn; */
};
typedef union cavm_btn_eco cavm_btn_eco_t;

#define CAVM_BTN_ECO CAVM_BTN_ECO_FUNC()
static inline uint64_t CAVM_BTN_ECO_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BTN_ECO_FUNC(void)
{
    return 0x87e04304fff0ll;
}

#define typedef_CAVM_BTN_ECO cavm_btn_eco_t
#define bustype_CAVM_BTN_ECO CSR_TYPE_RSL
#define basename_CAVM_BTN_ECO "BTN_ECO"
#define busnum_CAVM_BTN_ECO 0
#define arguments_CAVM_BTN_ECO -1,-1,-1,-1

/**
 * Register (RSL) btn_err_test
 *
 * INTERNAL: BTN Error Test Register
 *
 * This register provides a way to set the BTN error bits for
 * connectivity testing.  Writing a 1 to a given error bit will
 * assert that error signal on the BTN output.  This mechanism
 * is only available in internal-timer mode.  These bits will
 * automatically self-clear.
 */
union cavm_btn_err_test
{
    uint64_t u;
    struct cavm_btn_err_test_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t rfp_missing           : 1;  /**< [  3:  3](R/W/H) Assert the RFP_MISSING error bit. */
        uint64_t bfn_err               : 1;  /**< [  2:  2](R/W/H) Assert the BFN_ERR error bit. */
        uint64_t rfp_late              : 1;  /**< [  1:  1](R/W/H) Assert the RFP_LATE error bit. */
        uint64_t rfp_early             : 1;  /**< [  0:  0](R/W/H) Assert the RFP_EARLY error bit. */
#else /* Word 0 - Little Endian */
        uint64_t rfp_early             : 1;  /**< [  0:  0](R/W/H) Assert the RFP_EARLY error bit. */
        uint64_t rfp_late              : 1;  /**< [  1:  1](R/W/H) Assert the RFP_LATE error bit. */
        uint64_t bfn_err               : 1;  /**< [  2:  2](R/W/H) Assert the BFN_ERR error bit. */
        uint64_t rfp_missing           : 1;  /**< [  3:  3](R/W/H) Assert the RFP_MISSING error bit. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_btn_err_test_s cn; */
};
typedef union cavm_btn_err_test cavm_btn_err_test_t;

#define CAVM_BTN_ERR_TEST CAVM_BTN_ERR_TEST_FUNC()
static inline uint64_t CAVM_BTN_ERR_TEST_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BTN_ERR_TEST_FUNC(void)
{
    return 0x87e043048f10ll;
}

#define typedef_CAVM_BTN_ERR_TEST cavm_btn_err_test_t
#define bustype_CAVM_BTN_ERR_TEST CSR_TYPE_RSL
#define basename_CAVM_BTN_ERR_TEST "BTN_ERR_TEST"
#define busnum_CAVM_BTN_ERR_TEST 0
#define arguments_CAVM_BTN_ERR_TEST -1,-1,-1,-1

/**
 * Register (RSL) btn_ieee1914_cfg
 *
 * BTN IEEE 1914 Counter Configuration Register
 * This register configures the logic that generates the IEEE 1914
 * counters.
 */
union cavm_btn_ieee1914_cfg
{
    uint64_t u;
    struct cavm_btn_ieee1914_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_20_63        : 44;
        uint64_t ns_div                : 4;  /**< [ 19: 16](R/W) This configures the BTS_CLK divider for the IEEE1914 timestamp
                                                                 counter.  See [NS_INC] for more details. */
        uint64_t ns_inc                : 16; /**< [ 15:  0](R/W) This specifies the increment value for the IEEE 1914 timestamp
                                                                 counter.  After every [NS_DIV] BTS_CLK cycles, the IEEE 1914
                                                                 timestamp value is incremented by [NS_INC].  This value is
                                                                 an 8.8 fixed-point value. */
#else /* Word 0 - Little Endian */
        uint64_t ns_inc                : 16; /**< [ 15:  0](R/W) This specifies the increment value for the IEEE 1914 timestamp
                                                                 counter.  After every [NS_DIV] BTS_CLK cycles, the IEEE 1914
                                                                 timestamp value is incremented by [NS_INC].  This value is
                                                                 an 8.8 fixed-point value. */
        uint64_t ns_div                : 4;  /**< [ 19: 16](R/W) This configures the BTS_CLK divider for the IEEE1914 timestamp
                                                                 counter.  See [NS_INC] for more details. */
        uint64_t reserved_20_63        : 44;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_btn_ieee1914_cfg_s cn; */
};
typedef union cavm_btn_ieee1914_cfg cavm_btn_ieee1914_cfg_t;

#define CAVM_BTN_IEEE1914_CFG CAVM_BTN_IEEE1914_CFG_FUNC()
static inline uint64_t CAVM_BTN_IEEE1914_CFG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BTN_IEEE1914_CFG_FUNC(void)
{
    return 0x87e043049300ll;
}

#define typedef_CAVM_BTN_IEEE1914_CFG cavm_btn_ieee1914_cfg_t
#define bustype_CAVM_BTN_IEEE1914_CFG CSR_TYPE_RSL
#define basename_CAVM_BTN_IEEE1914_CFG "BTN_IEEE1914_CFG"
#define busnum_CAVM_BTN_IEEE1914_CFG 0
#define arguments_CAVM_BTN_IEEE1914_CFG -1,-1,-1,-1

/**
 * Register (RSL) btn_ieee1914_val
 *
 * BTN IEEE 1914 Counter Value Register
 * This register contains the current value of the IEEE 1914
 * counters.
 */
union cavm_btn_ieee1914_val
{
    uint64_t u;
    struct cavm_btn_ieee1914_val_s
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
    /* struct cavm_btn_ieee1914_val_s cn; */
};
typedef union cavm_btn_ieee1914_val cavm_btn_ieee1914_val_t;

#define CAVM_BTN_IEEE1914_VAL CAVM_BTN_IEEE1914_VAL_FUNC()
static inline uint64_t CAVM_BTN_IEEE1914_VAL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BTN_IEEE1914_VAL_FUNC(void)
{
    return 0x87e043049310ll;
}

#define typedef_CAVM_BTN_IEEE1914_VAL cavm_btn_ieee1914_val_t
#define bustype_CAVM_BTN_IEEE1914_VAL CSR_TYPE_RSL
#define basename_CAVM_BTN_IEEE1914_VAL "BTN_IEEE1914_VAL"
#define busnum_CAVM_BTN_IEEE1914_VAL 0
#define arguments_CAVM_BTN_IEEE1914_VAL -1,-1,-1,-1

/**
 * Register (RSL) btn_int_ieee1914_val
 *
 * INTERNAL: BTN internal IEEE1914 timestamp value Register
 */
union cavm_btn_int_ieee1914_val
{
    uint64_t u;
    struct cavm_btn_int_ieee1914_val_s
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
    /* struct cavm_btn_int_ieee1914_val_s cn; */
};
typedef union cavm_btn_int_ieee1914_val cavm_btn_int_ieee1914_val_t;

#define CAVM_BTN_INT_IEEE1914_VAL CAVM_BTN_INT_IEEE1914_VAL_FUNC()
static inline uint64_t CAVM_BTN_INT_IEEE1914_VAL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BTN_INT_IEEE1914_VAL_FUNC(void)
{
    return 0x87e043048110ll;
}

#define typedef_CAVM_BTN_INT_IEEE1914_VAL cavm_btn_int_ieee1914_val_t
#define bustype_CAVM_BTN_INT_IEEE1914_VAL CSR_TYPE_RSL
#define basename_CAVM_BTN_INT_IEEE1914_VAL "BTN_INT_IEEE1914_VAL"
#define busnum_CAVM_BTN_INT_IEEE1914_VAL 0
#define arguments_CAVM_BTN_INT_IEEE1914_VAL -1,-1,-1,-1

/**
 * Register (RSL) btn_int_psm_val
 *
 * INTERNAL: BTN internal PSM timestamp value Register
 */
union cavm_btn_int_psm_val
{
    uint64_t u;
    struct cavm_btn_int_psm_val_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_59_63        : 5;
        uint64_t frame_update          : 1;  /**< [ 58: 58](R/W/H) If written 1, update [FRAME] count.  If written 0, the [FRAME]
                                                                 count remains unchanged. */
        uint64_t sf_update             : 1;  /**< [ 57: 57](R/W/H) If written 1, update [SUBFRAME] count.  If written 0, the [SUBFRAME]
                                                                 count remains unchanged. */
        uint64_t tick_update           : 1;  /**< [ 56: 56](R/W/H) If written 1, update [TICK] count.  If written 0, the [TICK]
                                                                 count remains unchanged. */
        uint64_t reserved_32_55        : 24;
        uint64_t frame                 : 12; /**< [ 31: 20](R/W/H) Current value of the internal PSM frame counter. */
        uint64_t subframe              : 4;  /**< [ 19: 16](R/W/H) Current value of the internal PSM subframe counter. */
        uint64_t tick                  : 16; /**< [ 15:  0](R/W/H) Current value of the internal PSM tick counter. */
#else /* Word 0 - Little Endian */
        uint64_t tick                  : 16; /**< [ 15:  0](R/W/H) Current value of the internal PSM tick counter. */
        uint64_t subframe              : 4;  /**< [ 19: 16](R/W/H) Current value of the internal PSM subframe counter. */
        uint64_t frame                 : 12; /**< [ 31: 20](R/W/H) Current value of the internal PSM frame counter. */
        uint64_t reserved_32_55        : 24;
        uint64_t tick_update           : 1;  /**< [ 56: 56](R/W/H) If written 1, update [TICK] count.  If written 0, the [TICK]
                                                                 count remains unchanged. */
        uint64_t sf_update             : 1;  /**< [ 57: 57](R/W/H) If written 1, update [SUBFRAME] count.  If written 0, the [SUBFRAME]
                                                                 count remains unchanged. */
        uint64_t frame_update          : 1;  /**< [ 58: 58](R/W/H) If written 1, update [FRAME] count.  If written 0, the [FRAME]
                                                                 count remains unchanged. */
        uint64_t reserved_59_63        : 5;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_btn_int_psm_val_s cn; */
};
typedef union cavm_btn_int_psm_val cavm_btn_int_psm_val_t;

#define CAVM_BTN_INT_PSM_VAL CAVM_BTN_INT_PSM_VAL_FUNC()
static inline uint64_t CAVM_BTN_INT_PSM_VAL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BTN_INT_PSM_VAL_FUNC(void)
{
    return 0x87e043048100ll;
}

#define typedef_CAVM_BTN_INT_PSM_VAL cavm_btn_int_psm_val_t
#define bustype_CAVM_BTN_INT_PSM_VAL CSR_TYPE_RSL
#define basename_CAVM_BTN_INT_PSM_VAL "BTN_INT_PSM_VAL"
#define busnum_CAVM_BTN_INT_PSM_VAL 0
#define arguments_CAVM_BTN_INT_PSM_VAL -1,-1,-1,-1

/**
 * Register (RSL) btn_internal_timer_cfg
 *
 * INTERNAL: BTN internal timer configuration Register
 */
union cavm_btn_internal_timer_cfg
{
    uint64_t u;
    struct cavm_btn_internal_timer_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t en                    : 1;  /**< [ 63: 63](R/W) Enable for BTN internal timer mode. */
        uint64_t reserved_42_62        : 21;
        uint64_t ns_inc                : 10; /**< [ 41: 32](R/W) Defines the increment value used for the IEEE1914 timestamp
                                                                 each BCLK cycle during BTN internal timer mode.  This is
                                                                 a 2.8 fixed-point value. */
        uint64_t subf_ticks            : 16; /**< [ 31: 16](R/W) Sets the maximum tick count value for generating an SOSF during
                                                                 BTN internal timer mode.  The BTN will generate a SOSF when the
                                                                 tick counter reaches the value specified by [SUBF_TICKS]. */
        uint64_t tick_div              : 16; /**< [ 15:  0](R/W) Divider value for generating the tick clock from the BCLK during
                                                                 BTN internal timer mode.  This is a fixed-point value, consisting
                                                                 of an 8-bit integer and an 8-bit fraction.  A value of 0x0280
                                                                 would generate a tick-clock that is 2.5x slower than BCLK.  The
                                                                 minimum value of 0x0100 represents a 1:1 ratio of BCLK to
                                                                 tick-clock.  The actual [TICK_DIV] value should be chosen to
                                                                 prevent the 16-bit TICK counter from rolling over within the
                                                                 1ms subframe interval. */
#else /* Word 0 - Little Endian */
        uint64_t tick_div              : 16; /**< [ 15:  0](R/W) Divider value for generating the tick clock from the BCLK during
                                                                 BTN internal timer mode.  This is a fixed-point value, consisting
                                                                 of an 8-bit integer and an 8-bit fraction.  A value of 0x0280
                                                                 would generate a tick-clock that is 2.5x slower than BCLK.  The
                                                                 minimum value of 0x0100 represents a 1:1 ratio of BCLK to
                                                                 tick-clock.  The actual [TICK_DIV] value should be chosen to
                                                                 prevent the 16-bit TICK counter from rolling over within the
                                                                 1ms subframe interval. */
        uint64_t subf_ticks            : 16; /**< [ 31: 16](R/W) Sets the maximum tick count value for generating an SOSF during
                                                                 BTN internal timer mode.  The BTN will generate a SOSF when the
                                                                 tick counter reaches the value specified by [SUBF_TICKS]. */
        uint64_t ns_inc                : 10; /**< [ 41: 32](R/W) Defines the increment value used for the IEEE1914 timestamp
                                                                 each BCLK cycle during BTN internal timer mode.  This is
                                                                 a 2.8 fixed-point value. */
        uint64_t reserved_42_62        : 21;
        uint64_t en                    : 1;  /**< [ 63: 63](R/W) Enable for BTN internal timer mode. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_btn_internal_timer_cfg_s cn; */
};
typedef union cavm_btn_internal_timer_cfg cavm_btn_internal_timer_cfg_t;

#define CAVM_BTN_INTERNAL_TIMER_CFG CAVM_BTN_INTERNAL_TIMER_CFG_FUNC()
static inline uint64_t CAVM_BTN_INTERNAL_TIMER_CFG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BTN_INTERNAL_TIMER_CFG_FUNC(void)
{
    return 0x87e043048010ll;
}

#define typedef_CAVM_BTN_INTERNAL_TIMER_CFG cavm_btn_internal_timer_cfg_t
#define bustype_CAVM_BTN_INTERNAL_TIMER_CFG CSR_TYPE_RSL
#define basename_CAVM_BTN_INTERNAL_TIMER_CFG "BTN_INTERNAL_TIMER_CFG"
#define busnum_CAVM_BTN_INTERNAL_TIMER_CFG 0
#define arguments_CAVM_BTN_INTERNAL_TIMER_CFG -1,-1,-1,-1

/**
 * Register (RSL) btn_match_cfg
 *
 * BTN Match Configuration Register
 * This register configures the logic that timer match functionality
 * that can be used for timestamp synchronization or capture.
 */
union cavm_btn_match_cfg
{
    uint64_t u;
    struct cavm_btn_match_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_10_63        : 54;
        uint64_t match_sel             : 2;  /**< [  9:  8](R/W) Timestamp to be matched
                                                                 0x0 = PSM timestamp.
                                                                 0x1 = IEEE 1914 timestamp.
                                                                 0x2 = PTP timestamp.
                                                                 0x3 = Reserved. */
        uint64_t reserved_2_7          : 6;
        uint64_t match_exact           : 1;  /**< [  1:  1](R/W) When set to 1, the timestamp match will only succeed when
                                                                 the value in BTN_MATCH_VALUE exactly matches the timestamp
                                                                 selected by [MATCH_SEL].  When 0, the match will succeed
                                                                 when the selected timestamp is equal to or greater than
                                                                 the value in BTN_MATCH_VALUE. */
        uint64_t match_en              : 1;  /**< [  0:  0](R/W) Enables the timestamp match functionality. */
#else /* Word 0 - Little Endian */
        uint64_t match_en              : 1;  /**< [  0:  0](R/W) Enables the timestamp match functionality. */
        uint64_t match_exact           : 1;  /**< [  1:  1](R/W) When set to 1, the timestamp match will only succeed when
                                                                 the value in BTN_MATCH_VALUE exactly matches the timestamp
                                                                 selected by [MATCH_SEL].  When 0, the match will succeed
                                                                 when the selected timestamp is equal to or greater than
                                                                 the value in BTN_MATCH_VALUE. */
        uint64_t reserved_2_7          : 6;
        uint64_t match_sel             : 2;  /**< [  9:  8](R/W) Timestamp to be matched
                                                                 0x0 = PSM timestamp.
                                                                 0x1 = IEEE 1914 timestamp.
                                                                 0x2 = PTP timestamp.
                                                                 0x3 = Reserved. */
        uint64_t reserved_10_63        : 54;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_btn_match_cfg_s cn; */
};
typedef union cavm_btn_match_cfg cavm_btn_match_cfg_t;

#define CAVM_BTN_MATCH_CFG CAVM_BTN_MATCH_CFG_FUNC()
static inline uint64_t CAVM_BTN_MATCH_CFG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BTN_MATCH_CFG_FUNC(void)
{
    return 0x87e04304a000ll;
}

#define typedef_CAVM_BTN_MATCH_CFG cavm_btn_match_cfg_t
#define bustype_CAVM_BTN_MATCH_CFG CSR_TYPE_RSL
#define basename_CAVM_BTN_MATCH_CFG "BTN_MATCH_CFG"
#define busnum_CAVM_BTN_MATCH_CFG 0
#define arguments_CAVM_BTN_MATCH_CFG -1,-1,-1,-1

/**
 * Register (RSL) btn_match_value
 *
 * BTN Match Value Register
 * This register sets the value to be compared for the timer match.
 */
union cavm_btn_match_value
{
    uint64_t u;
    struct cavm_btn_match_value_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t match_value           : 64; /**< [ 63:  0](R/W) The value to be compared for the timer match, as described in
                                                                 BTN_MATCH_CFG. */
#else /* Word 0 - Little Endian */
        uint64_t match_value           : 64; /**< [ 63:  0](R/W) The value to be compared for the timer match, as described in
                                                                 BTN_MATCH_CFG. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_btn_match_value_s cn; */
};
typedef union cavm_btn_match_value cavm_btn_match_value_t;

#define CAVM_BTN_MATCH_VALUE CAVM_BTN_MATCH_VALUE_FUNC()
static inline uint64_t CAVM_BTN_MATCH_VALUE_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BTN_MATCH_VALUE_FUNC(void)
{
    return 0x87e04304a010ll;
}

#define typedef_CAVM_BTN_MATCH_VALUE cavm_btn_match_value_t
#define bustype_CAVM_BTN_MATCH_VALUE CSR_TYPE_RSL
#define basename_CAVM_BTN_MATCH_VALUE "BTN_MATCH_VALUE"
#define busnum_CAVM_BTN_MATCH_VALUE 0
#define arguments_CAVM_BTN_MATCH_VALUE -1,-1,-1,-1

/**
 * Register (RSL) btn_psm_cfg
 *
 * BTN PSM Counter Configuration Register
 * This register configures the logic that generates the PSM frame,
 * subframe, and tick counters.
 */
union cavm_btn_psm_cfg
{
    uint64_t u;
    struct cavm_btn_psm_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t frame_max             : 24; /**< [ 63: 40](R/W) Defines the length of a PSM frame in BTS_CLK cycles.  The
                                                                 default value corresponds to a 10 msec frame when the BTS_CLK
                                                                 is 30.72 MHz. */
        uint64_t subf_max              : 20; /**< [ 39: 20](R/W) Defines the length of a PSM subframe in BTS_CLK cycles.  The
                                                                 default value corresponds to a 1 msec subframe when the BTS_CLK
                                                                 is 30.72 MHz. */
        uint64_t tick_inc              : 20; /**< [ 19:  0](R/W) Defines the increment value for the PSM tick counter, on each
                                                                 BTS_CLK cycle.  The increment value is a 2.16 fixed point number,
                                                                 and the default value corresponds to a 15.625 nsec tick when
                                                                 the BTS_CLK is 30.72 MHz. */
#else /* Word 0 - Little Endian */
        uint64_t tick_inc              : 20; /**< [ 19:  0](R/W) Defines the increment value for the PSM tick counter, on each
                                                                 BTS_CLK cycle.  The increment value is a 2.16 fixed point number,
                                                                 and the default value corresponds to a 15.625 nsec tick when
                                                                 the BTS_CLK is 30.72 MHz. */
        uint64_t subf_max              : 20; /**< [ 39: 20](R/W) Defines the length of a PSM subframe in BTS_CLK cycles.  The
                                                                 default value corresponds to a 1 msec subframe when the BTS_CLK
                                                                 is 30.72 MHz. */
        uint64_t frame_max             : 24; /**< [ 63: 40](R/W) Defines the length of a PSM frame in BTS_CLK cycles.  The
                                                                 default value corresponds to a 10 msec frame when the BTS_CLK
                                                                 is 30.72 MHz. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_btn_psm_cfg_s cn; */
};
typedef union cavm_btn_psm_cfg cavm_btn_psm_cfg_t;

#define CAVM_BTN_PSM_CFG CAVM_BTN_PSM_CFG_FUNC()
static inline uint64_t CAVM_BTN_PSM_CFG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BTN_PSM_CFG_FUNC(void)
{
    return 0x87e043049200ll;
}

#define typedef_CAVM_BTN_PSM_CFG cavm_btn_psm_cfg_t
#define bustype_CAVM_BTN_PSM_CFG CSR_TYPE_RSL
#define basename_CAVM_BTN_PSM_CFG "BTN_PSM_CFG"
#define busnum_CAVM_BTN_PSM_CFG 0
#define arguments_CAVM_BTN_PSM_CFG -1,-1,-1,-1

/**
 * Register (RSL) btn_psm_cnt_val
 *
 * BTN PSM Counter Value Register
 * This register contains the current value of the PSM frame and
 * subframe cycle counters.
 */
union cavm_btn_psm_cnt_val
{
    uint64_t u;
    struct cavm_btn_psm_cnt_val_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_56_63        : 8;
        uint64_t frame_cnt             : 24; /**< [ 55: 32](RO/H) Current value of the PSM frame cycle counter.  The cycle counter
                                                                 is a running count of BTS_CLK cycles during a frame. */
        uint64_t reserved_20_31        : 12;
        uint64_t sf_cnt                : 20; /**< [ 19:  0](RO/H) Current value of the PSM subframe cycle counter.  The cycle counter
                                                                 is a running count of BTS_CLK cycles during a subframe. */
#else /* Word 0 - Little Endian */
        uint64_t sf_cnt                : 20; /**< [ 19:  0](RO/H) Current value of the PSM subframe cycle counter.  The cycle counter
                                                                 is a running count of BTS_CLK cycles during a subframe. */
        uint64_t reserved_20_31        : 12;
        uint64_t frame_cnt             : 24; /**< [ 55: 32](RO/H) Current value of the PSM frame cycle counter.  The cycle counter
                                                                 is a running count of BTS_CLK cycles during a frame. */
        uint64_t reserved_56_63        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_btn_psm_cnt_val_s cn; */
};
typedef union cavm_btn_psm_cnt_val cavm_btn_psm_cnt_val_t;

#define CAVM_BTN_PSM_CNT_VAL CAVM_BTN_PSM_CNT_VAL_FUNC()
static inline uint64_t CAVM_BTN_PSM_CNT_VAL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BTN_PSM_CNT_VAL_FUNC(void)
{
    return 0x87e043049220ll;
}

#define typedef_CAVM_BTN_PSM_CNT_VAL cavm_btn_psm_cnt_val_t
#define bustype_CAVM_BTN_PSM_CNT_VAL CSR_TYPE_RSL
#define basename_CAVM_BTN_PSM_CNT_VAL "BTN_PSM_CNT_VAL"
#define busnum_CAVM_BTN_PSM_CNT_VAL 0
#define arguments_CAVM_BTN_PSM_CNT_VAL -1,-1,-1,-1

/**
 * Register (RSL) btn_psm_val
 *
 * BTN PSM Counter Value Register
 * This register contains the current value of the PSM frame,
 * subframe, and tick counters.
 */
union cavm_btn_psm_val
{
    uint64_t u;
    struct cavm_btn_psm_val_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t frame                 : 12; /**< [ 31: 20](RO/H) Current value of the PSM frame counter. */
        uint64_t subframe              : 4;  /**< [ 19: 16](RO/H) Current value of the PSM subframe counter. */
        uint64_t tick                  : 16; /**< [ 15:  0](RO/H) Current value of the PSM tick counter. */
#else /* Word 0 - Little Endian */
        uint64_t tick                  : 16; /**< [ 15:  0](RO/H) Current value of the PSM tick counter. */
        uint64_t subframe              : 4;  /**< [ 19: 16](RO/H) Current value of the PSM subframe counter. */
        uint64_t frame                 : 12; /**< [ 31: 20](RO/H) Current value of the PSM frame counter. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_btn_psm_val_s cn; */
};
typedef union cavm_btn_psm_val cavm_btn_psm_val_t;

#define CAVM_BTN_PSM_VAL CAVM_BTN_PSM_VAL_FUNC()
static inline uint64_t CAVM_BTN_PSM_VAL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BTN_PSM_VAL_FUNC(void)
{
    return 0x87e043049210ll;
}

#define typedef_CAVM_BTN_PSM_VAL cavm_btn_psm_val_t
#define bustype_CAVM_BTN_PSM_VAL CSR_TYPE_RSL
#define basename_CAVM_BTN_PSM_VAL "BTN_PSM_VAL"
#define busnum_CAVM_BTN_PSM_VAL 0
#define arguments_CAVM_BTN_PSM_VAL -1,-1,-1,-1

/**
 * Register (RSL) btn_ptp_cfg
 *
 * BTN PTP Configuration Register
 * This register configures the logic that samples the PTP timestamp.
 */
union cavm_btn_ptp_cfg
{
    uint64_t u;
    struct cavm_btn_ptp_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t ptp_sample_rate       : 6;  /**< [  5:  0](R/W) Rate in BCLK cycles to sample the PTP timestamp value and
                                                                 pass it to the BTS_CLK domain.  The value of 0x0 will disable
                                                                 the PTP sampling.  The recommended setting will depend on
                                                                 the BCLK frequency.

                                                                 Internal:
                                                                 FIXME, add recommended settings */
#else /* Word 0 - Little Endian */
        uint64_t ptp_sample_rate       : 6;  /**< [  5:  0](R/W) Rate in BCLK cycles to sample the PTP timestamp value and
                                                                 pass it to the BTS_CLK domain.  The value of 0x0 will disable
                                                                 the PTP sampling.  The recommended setting will depend on
                                                                 the BCLK frequency.

                                                                 Internal:
                                                                 FIXME, add recommended settings */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_btn_ptp_cfg_s cn; */
};
typedef union cavm_btn_ptp_cfg cavm_btn_ptp_cfg_t;

#define CAVM_BTN_PTP_CFG CAVM_BTN_PTP_CFG_FUNC()
static inline uint64_t CAVM_BTN_PTP_CFG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BTN_PTP_CFG_FUNC(void)
{
    return 0x87e043049400ll;
}

#define typedef_CAVM_BTN_PTP_CFG cavm_btn_ptp_cfg_t
#define bustype_CAVM_BTN_PTP_CFG CSR_TYPE_RSL
#define basename_CAVM_BTN_PTP_CFG "BTN_PTP_CFG"
#define busnum_CAVM_BTN_PTP_CFG 0
#define arguments_CAVM_BTN_PTP_CFG -1,-1,-1,-1

/**
 * Register (RSL) btn_ptp_val
 *
 * BTN PTP Timestamp Value Register
 * This register contains the current value of the PTP timestamp.
 */
union cavm_btn_ptp_val
{
    uint64_t u;
    struct cavm_btn_ptp_val_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ptp                   : 64; /**< [ 63:  0](RO/H) Current value of the PTP timestamp. */
#else /* Word 0 - Little Endian */
        uint64_t ptp                   : 64; /**< [ 63:  0](RO/H) Current value of the PTP timestamp. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_btn_ptp_val_s cn; */
};
typedef union cavm_btn_ptp_val cavm_btn_ptp_val_t;

#define CAVM_BTN_PTP_VAL CAVM_BTN_PTP_VAL_FUNC()
static inline uint64_t CAVM_BTN_PTP_VAL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BTN_PTP_VAL_FUNC(void)
{
    return 0x87e043049410ll;
}

#define typedef_CAVM_BTN_PTP_VAL cavm_btn_ptp_val_t
#define bustype_CAVM_BTN_PTP_VAL CSR_TYPE_RSL
#define basename_CAVM_BTN_PTP_VAL "BTN_PTP_VAL"
#define busnum_CAVM_BTN_PTP_VAL 0
#define arguments_CAVM_BTN_PTP_VAL -1,-1,-1,-1

/**
 * Register (RSL) btn_rfp_bad_count
 *
 * BTN  RFP Bad Count Register
 * This register contains a running count of RFPs received with the
 * incorrect timing, where the PSM frame cycle counter does not
 * match BTN_PSM_CFG[FRAME_MAX].
 */
union cavm_btn_rfp_bad_count
{
    uint64_t u;
    struct cavm_btn_rfp_bad_count_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t rfp_bad               : 32; /**< [ 31:  0](R/W/H) Count of bad RFPs received. */
#else /* Word 0 - Little Endian */
        uint64_t rfp_bad               : 32; /**< [ 31:  0](R/W/H) Count of bad RFPs received. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_btn_rfp_bad_count_s cn; */
};
typedef union cavm_btn_rfp_bad_count cavm_btn_rfp_bad_count_t;

#define CAVM_BTN_RFP_BAD_COUNT CAVM_BTN_RFP_BAD_COUNT_FUNC()
static inline uint64_t CAVM_BTN_RFP_BAD_COUNT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BTN_RFP_BAD_COUNT_FUNC(void)
{
    return 0x87e04304e010ll;
}

#define typedef_CAVM_BTN_RFP_BAD_COUNT cavm_btn_rfp_bad_count_t
#define bustype_CAVM_BTN_RFP_BAD_COUNT CSR_TYPE_RSL
#define basename_CAVM_BTN_RFP_BAD_COUNT "BTN_RFP_BAD_COUNT"
#define busnum_CAVM_BTN_RFP_BAD_COUNT 0
#define arguments_CAVM_BTN_RFP_BAD_COUNT -1,-1,-1,-1

/**
 * Register (RSL) btn_rfp_cyc_count
 *
 * BTN RFP Cycle Count Register
 * This register contains the value of the BTS_CLK domain frame
 * cycle counter when the most recent RFP was received.
 */
union cavm_btn_rfp_cyc_count
{
    uint64_t u;
    struct cavm_btn_rfp_cyc_count_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t rfp_cyc               : 24; /**< [ 23:  0](RO/H) Frame counter value when RFP was received. */
#else /* Word 0 - Little Endian */
        uint64_t rfp_cyc               : 24; /**< [ 23:  0](RO/H) Frame counter value when RFP was received. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_btn_rfp_cyc_count_s cn; */
};
typedef union cavm_btn_rfp_cyc_count cavm_btn_rfp_cyc_count_t;

#define CAVM_BTN_RFP_CYC_COUNT CAVM_BTN_RFP_CYC_COUNT_FUNC()
static inline uint64_t CAVM_BTN_RFP_CYC_COUNT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BTN_RFP_CYC_COUNT_FUNC(void)
{
    return 0x87e04304e020ll;
}

#define typedef_CAVM_BTN_RFP_CYC_COUNT cavm_btn_rfp_cyc_count_t
#define bustype_CAVM_BTN_RFP_CYC_COUNT CSR_TYPE_RSL
#define basename_CAVM_BTN_RFP_CYC_COUNT "BTN_RFP_CYC_COUNT"
#define busnum_CAVM_BTN_RFP_CYC_COUNT 0
#define arguments_CAVM_BTN_RFP_CYC_COUNT -1,-1,-1,-1

/**
 * Register (RSL) btn_rfp_good_count
 *
 * BTN RFP Good Count Register
 * This register contains a running count of RFPs received with the
 * correct timing, where the PSM frame cycle counter matches
 * BTN_PSM_CFG[FRAME_MAX].
 */
union cavm_btn_rfp_good_count
{
    uint64_t u;
    struct cavm_btn_rfp_good_count_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t rfp_good              : 32; /**< [ 31:  0](R/W/H) Count of good RFPs received. */
#else /* Word 0 - Little Endian */
        uint64_t rfp_good              : 32; /**< [ 31:  0](R/W/H) Count of good RFPs received. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_btn_rfp_good_count_s cn; */
};
typedef union cavm_btn_rfp_good_count cavm_btn_rfp_good_count_t;

#define CAVM_BTN_RFP_GOOD_COUNT CAVM_BTN_RFP_GOOD_COUNT_FUNC()
static inline uint64_t CAVM_BTN_RFP_GOOD_COUNT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BTN_RFP_GOOD_COUNT_FUNC(void)
{
    return 0x87e04304e000ll;
}

#define typedef_CAVM_BTN_RFP_GOOD_COUNT cavm_btn_rfp_good_count_t
#define bustype_CAVM_BTN_RFP_GOOD_COUNT CSR_TYPE_RSL
#define basename_CAVM_BTN_RFP_GOOD_COUNT "BTN_RFP_GOOD_COUNT"
#define busnum_CAVM_BTN_RFP_GOOD_COUNT 0
#define arguments_CAVM_BTN_RFP_GOOD_COUNT -1,-1,-1,-1

/**
 * Register (RSL) btn_scratch
 *
 * INTERNAL: BTN scratch Register
 */
union cavm_btn_scratch
{
    uint64_t u;
    struct cavm_btn_scratch_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t scratch_rw            : 32; /**< [ 31:  0](R/W) Internal:
                                                                 Reserved for scratch usage. */
#else /* Word 0 - Little Endian */
        uint64_t scratch_rw            : 32; /**< [ 31:  0](R/W) Internal:
                                                                 Reserved for scratch usage. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_btn_scratch_s cn; */
};
typedef union cavm_btn_scratch cavm_btn_scratch_t;

#define CAVM_BTN_SCRATCH CAVM_BTN_SCRATCH_FUNC()
static inline uint64_t CAVM_BTN_SCRATCH_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BTN_SCRATCH_FUNC(void)
{
    return 0x87e043048ff0ll;
}

#define typedef_CAVM_BTN_SCRATCH cavm_btn_scratch_t
#define bustype_CAVM_BTN_SCRATCH CSR_TYPE_RSL
#define basename_CAVM_BTN_SCRATCH "BTN_SCRATCH"
#define busnum_CAVM_BTN_SCRATCH 0
#define arguments_CAVM_BTN_SCRATCH -1,-1,-1,-1

/**
 * Register (RSL) btn_sync_cfg
 *
 * BTN Synchronization Configuration Register
 * This register configures the logic for timestamp synchronization.
 */
union cavm_btn_sync_cfg
{
    uint64_t u;
    struct cavm_btn_sync_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_11_63        : 53;
        uint64_t sync_trig             : 3;  /**< [ 10:  8](R/W) Selects the trigger for a synchronization event.
                                                                 0x0 = Match as configured by BTN_MATCH_CFG.
                                                                 0x1 = Start of frame.
                                                                 0x2 = Start of sub-frame.
                                                                 0x3 = Software (synchronization occurs immediately).
                                                                 0x4 = RFP.
                                                                 0x5-0x7 = Reserved. */
        uint64_t reserved_2_7          : 6;
        uint64_t sync_ieee1914_en      : 1;  /**< [  1:  1](R/W/H) Enables synchronization of the IEEE 1914 counter at the trigger
                                                                 event selected by [SYNC_TRIG].  This bit resets to 0 after the
                                                                 synchronization occurs. */
        uint64_t sync_psm_en           : 1;  /**< [  0:  0](R/W/H) Enables synchronization of the PSM counter at the trigger event
                                                                 selected by [SYNC_TRIG].  This bit resets to 0 after the
                                                                 synchronization occurs. */
#else /* Word 0 - Little Endian */
        uint64_t sync_psm_en           : 1;  /**< [  0:  0](R/W/H) Enables synchronization of the PSM counter at the trigger event
                                                                 selected by [SYNC_TRIG].  This bit resets to 0 after the
                                                                 synchronization occurs. */
        uint64_t sync_ieee1914_en      : 1;  /**< [  1:  1](R/W/H) Enables synchronization of the IEEE 1914 counter at the trigger
                                                                 event selected by [SYNC_TRIG].  This bit resets to 0 after the
                                                                 synchronization occurs. */
        uint64_t reserved_2_7          : 6;
        uint64_t sync_trig             : 3;  /**< [ 10:  8](R/W) Selects the trigger for a synchronization event.
                                                                 0x0 = Match as configured by BTN_MATCH_CFG.
                                                                 0x1 = Start of frame.
                                                                 0x2 = Start of sub-frame.
                                                                 0x3 = Software (synchronization occurs immediately).
                                                                 0x4 = RFP.
                                                                 0x5-0x7 = Reserved. */
        uint64_t reserved_11_63        : 53;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_btn_sync_cfg_s cn; */
};
typedef union cavm_btn_sync_cfg cavm_btn_sync_cfg_t;

#define CAVM_BTN_SYNC_CFG CAVM_BTN_SYNC_CFG_FUNC()
static inline uint64_t CAVM_BTN_SYNC_CFG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BTN_SYNC_CFG_FUNC(void)
{
    return 0x87e04304b000ll;
}

#define typedef_CAVM_BTN_SYNC_CFG cavm_btn_sync_cfg_t
#define bustype_CAVM_BTN_SYNC_CFG CSR_TYPE_RSL
#define basename_CAVM_BTN_SYNC_CFG "BTN_SYNC_CFG"
#define busnum_CAVM_BTN_SYNC_CFG 0
#define arguments_CAVM_BTN_SYNC_CFG -1,-1,-1,-1

/**
 * Register (RSL) btn_sync_ieee1914
 *
 * BTN IEEE 1914 Synchronization Register
 * This register is used to configure the IEEE 1914 counter values that
 * will be used for the synchronization event.
 */
union cavm_btn_sync_ieee1914
{
    uint64_t u;
    struct cavm_btn_sync_ieee1914_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_29_63        : 35;
        uint64_t nsec                  : 24; /**< [ 28:  5](R/W) The IEEE 1914 timestamp integer nanosecond field to be used for synchronization. */
        uint64_t fnsec                 : 5;  /**< [  4:  0](R/W) The IEEE 1914 timestamp fractional nanosecond field to be used for synchronization. */
#else /* Word 0 - Little Endian */
        uint64_t fnsec                 : 5;  /**< [  4:  0](R/W) The IEEE 1914 timestamp fractional nanosecond field to be used for synchronization. */
        uint64_t nsec                  : 24; /**< [ 28:  5](R/W) The IEEE 1914 timestamp integer nanosecond field to be used for synchronization. */
        uint64_t reserved_29_63        : 35;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_btn_sync_ieee1914_s cn; */
};
typedef union cavm_btn_sync_ieee1914 cavm_btn_sync_ieee1914_t;

#define CAVM_BTN_SYNC_IEEE1914 CAVM_BTN_SYNC_IEEE1914_FUNC()
static inline uint64_t CAVM_BTN_SYNC_IEEE1914_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BTN_SYNC_IEEE1914_FUNC(void)
{
    return 0x87e04304b200ll;
}

#define typedef_CAVM_BTN_SYNC_IEEE1914 cavm_btn_sync_ieee1914_t
#define bustype_CAVM_BTN_SYNC_IEEE1914 CSR_TYPE_RSL
#define basename_CAVM_BTN_SYNC_IEEE1914 "BTN_SYNC_IEEE1914"
#define busnum_CAVM_BTN_SYNC_IEEE1914 0
#define arguments_CAVM_BTN_SYNC_IEEE1914 -1,-1,-1,-1

/**
 * Register (RSL) btn_sync_psm
 *
 * BTN PSM Synchronization Register
 * This register is used to configure the PSM frame, subframe, and tick
 * values that will be used for the synchronization event.
 */
union cavm_btn_sync_psm
{
    uint64_t u;
    struct cavm_btn_sync_psm_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t frame                 : 12; /**< [ 31: 20](R/W) The PSM frame value to be used for synchronization. */
        uint64_t subframe              : 4;  /**< [ 19: 16](R/W) The PSM subframe value to be used for synchronization. */
        uint64_t tick                  : 16; /**< [ 15:  0](R/W) The PSM tick value to be used for synchronization. */
#else /* Word 0 - Little Endian */
        uint64_t tick                  : 16; /**< [ 15:  0](R/W) The PSM tick value to be used for synchronization. */
        uint64_t subframe              : 4;  /**< [ 19: 16](R/W) The PSM subframe value to be used for synchronization. */
        uint64_t frame                 : 12; /**< [ 31: 20](R/W) The PSM frame value to be used for synchronization. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_btn_sync_psm_s cn; */
};
typedef union cavm_btn_sync_psm cavm_btn_sync_psm_t;

#define CAVM_BTN_SYNC_PSM CAVM_BTN_SYNC_PSM_FUNC()
static inline uint64_t CAVM_BTN_SYNC_PSM_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BTN_SYNC_PSM_FUNC(void)
{
    return 0x87e04304b100ll;
}

#define typedef_CAVM_BTN_SYNC_PSM cavm_btn_sync_psm_t
#define bustype_CAVM_BTN_SYNC_PSM CSR_TYPE_RSL
#define basename_CAVM_BTN_SYNC_PSM "BTN_SYNC_PSM"
#define busnum_CAVM_BTN_SYNC_PSM 0
#define arguments_CAVM_BTN_SYNC_PSM -1,-1,-1,-1

/**
 * Register (RSL) btn_sync_psm_cnt
 *
 * BTN PSM Count Synchronization Register
 * This register is used to configure the PSM frame and subframe cycle
 * counter values that will be used for the synchronization event.
 */
union cavm_btn_sync_psm_cnt
{
    uint64_t u;
    struct cavm_btn_sync_psm_cnt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_56_63        : 8;
        uint64_t frame_cnt             : 24; /**< [ 55: 32](R/W) This field sets the value of the PSM frame cycle counter that
                                                                 will be used for synchronization.  This counter is a running
                                                                 count of BTS_CLK cycles during a frame, and the sync value
                                                                 can be set to account for a synchronization that occurs
                                                                 in the middle of a frame. */
        uint64_t reserved_20_31        : 12;
        uint64_t sf_cnt                : 20; /**< [ 19:  0](R/W) This field sets the value of the PSM subframe cycle counter that
                                                                 will be used for synchronization.  This counter is a running
                                                                 count of BTS_CLK cycles during a subframe, and the sync value
                                                                 can be set to account for a synchronization that occurs
                                                                 in the middle of a subframe. */
#else /* Word 0 - Little Endian */
        uint64_t sf_cnt                : 20; /**< [ 19:  0](R/W) This field sets the value of the PSM subframe cycle counter that
                                                                 will be used for synchronization.  This counter is a running
                                                                 count of BTS_CLK cycles during a subframe, and the sync value
                                                                 can be set to account for a synchronization that occurs
                                                                 in the middle of a subframe. */
        uint64_t reserved_20_31        : 12;
        uint64_t frame_cnt             : 24; /**< [ 55: 32](R/W) This field sets the value of the PSM frame cycle counter that
                                                                 will be used for synchronization.  This counter is a running
                                                                 count of BTS_CLK cycles during a frame, and the sync value
                                                                 can be set to account for a synchronization that occurs
                                                                 in the middle of a frame. */
        uint64_t reserved_56_63        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_btn_sync_psm_cnt_s cn; */
};
typedef union cavm_btn_sync_psm_cnt cavm_btn_sync_psm_cnt_t;

#define CAVM_BTN_SYNC_PSM_CNT CAVM_BTN_SYNC_PSM_CNT_FUNC()
static inline uint64_t CAVM_BTN_SYNC_PSM_CNT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BTN_SYNC_PSM_CNT_FUNC(void)
{
    return 0x87e04304b110ll;
}

#define typedef_CAVM_BTN_SYNC_PSM_CNT cavm_btn_sync_psm_cnt_t
#define bustype_CAVM_BTN_SYNC_PSM_CNT CSR_TYPE_RSL
#define basename_CAVM_BTN_SYNC_PSM_CNT "BTN_SYNC_PSM_CNT"
#define busnum_CAVM_BTN_SYNC_PSM_CNT 0
#define arguments_CAVM_BTN_SYNC_PSM_CNT -1,-1,-1,-1

#endif /* __CAVM_CSRS_BTN_H__ */
