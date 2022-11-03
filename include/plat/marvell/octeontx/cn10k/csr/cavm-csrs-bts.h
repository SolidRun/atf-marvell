#ifndef __CAVM_CSRS_BTS_H__
#define __CAVM_CSRS_BTS_H__
/* This file is auto-generated. Do not edit */

/***********************license start***********************************
* Copyright (C) 2018 Marvell
* SPDX-License-Identifier: BSD-3-Clause
* https://spdx.org/licenses
***********************license end**************************************/


/**
 * @file
 *
 * Configuration and status register (CSR) address and type definitions for
 * OcteonTX BTS.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration bts_bar_e
 *
 * BTS Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define CAVM_BTS_BAR_E_BTS_PF_BAR0 (0x87e012000000ll)
#define CAVM_BTS_BAR_E_BTS_PF_BAR0_SIZE 0x10000ull
#define CAVM_BTS_BAR_E_BTS_PF_BAR4 (0x87e012f00000ll)
#define CAVM_BTS_BAR_E_BTS_PF_BAR4_SIZE 0x100000ull

/**
 * Enumeration bts_int_vec_e
 *
 * BTS MSI-X Vector Enumeration
 * Enumerates the MSI-X interrupt vectors.
 */
#define CAVM_BTS_INT_VEC_E_BTS_PDBANK_DONE_INTR (0)

/**
 * Enumeration bts_pd1pps_div_cfg0_ref_in_sel_e
 *
 * BTS Reference Input Select Enumeration
 * Enumerates BTS_PD1PPS_DIV_CFG0[REF_IN_SEL].
 */
#define CAVM_BTS_PD1PPS_DIV_CFG0_REF_IN_SEL_E_EXT_REF0_1PPS (3)
#define CAVM_BTS_PD1PPS_DIV_CFG0_REF_IN_SEL_E_EXT_REF1_1PPS (4)
#define CAVM_BTS_PD1PPS_DIV_CFG0_REF_IN_SEL_E_EXT_REF2_1PPS (5)
#define CAVM_BTS_PD1PPS_DIV_CFG0_REF_IN_SEL_E_PD_BFN_1PPS (2)
#define CAVM_BTS_PD1PPS_DIV_CFG0_REF_IN_SEL_E_PTP_1PPS (1)
#define CAVM_BTS_PD1PPS_DIV_CFG0_REF_IN_SEL_E_RSVD0_1PPS (6)
#define CAVM_BTS_PD1PPS_DIV_CFG0_REF_IN_SEL_E_RSVD1_1PPS (7)
#define CAVM_BTS_PD1PPS_DIV_CFG0_REF_IN_SEL_E_RSVD_GNSS_1PPS (0)

/**
 * Enumeration bts_pd_slicex_ctl_ref_in_sel_e
 *
 * BTS Slice Input Select Enumeration
 * Enumerates BTS_PD_SLICE()_CTL[REF_IN_SEL].
 */
#define CAVM_BTS_PD_SLICEX_CTL_REF_IN_SEL_E_CG_1PPS (3)
#define CAVM_BTS_PD_SLICEX_CTL_REF_IN_SEL_E_EXT_REF0_1PPS (4)
#define CAVM_BTS_PD_SLICEX_CTL_REF_IN_SEL_E_EXT_REF1_1PPS (5)
#define CAVM_BTS_PD_SLICEX_CTL_REF_IN_SEL_E_EXT_REF2_1PPS (6)
#define CAVM_BTS_PD_SLICEX_CTL_REF_IN_SEL_E_PD_BFN_1PPS (2)
#define CAVM_BTS_PD_SLICEX_CTL_REF_IN_SEL_E_PTP_1PPS (1)
#define CAVM_BTS_PD_SLICEX_CTL_REF_IN_SEL_E_RSVD0_1PPS (7)
#define CAVM_BTS_PD_SLICEX_CTL_REF_IN_SEL_E_RSVD_GNSS_1PPS (0)

/**
 * Enumeration bts_pdbfn_div_cfg0_ref_in_sel_e
 *
 * BTS Division Input Select Enumeration
 * Enumerates BTS_PDBFN_DIV_CFG0[REF_IN_SEL].
 */
#define CAVM_BTS_PDBFN_DIV_CFG0_REF_IN_SEL_E_CG_1PPS (2)
#define CAVM_BTS_PDBFN_DIV_CFG0_REF_IN_SEL_E_EXT_REF0_1PPS (3)
#define CAVM_BTS_PDBFN_DIV_CFG0_REF_IN_SEL_E_EXT_REF1_1PPS (4)
#define CAVM_BTS_PDBFN_DIV_CFG0_REF_IN_SEL_E_EXT_REF2_1PPS (5)
#define CAVM_BTS_PDBFN_DIV_CFG0_REF_IN_SEL_E_PTP_1PPS (1)
#define CAVM_BTS_PDBFN_DIV_CFG0_REF_IN_SEL_E_RSVD0_1PPS (6)
#define CAVM_BTS_PDBFN_DIV_CFG0_REF_IN_SEL_E_RSVD1_1PPS (7)
#define CAVM_BTS_PDBFN_DIV_CFG0_REF_IN_SEL_E_RSVD_GNSS_1PPS (0)

/**
 * Enumeration bts_pll_sel_e
 *
 * BTS PLL Selection Enumeration
 * Enumerates the values of BTS_PLL[NEXT_PLL_SEL] and BTS_PLL[CUR_PLL_SEL].
 */
#define CAVM_BTS_PLL_SEL_E_ARO (6)
#define CAVM_BTS_PLL_SEL_E_BYPASS (2)
#define CAVM_BTS_PLL_SEL_E_OFF (3)
#define CAVM_BTS_PLL_SEL_E_PLL0 (4)
#define CAVM_BTS_PLL_SEL_E_PLL1 (5)
#define CAVM_BTS_PLL_SEL_E_REFCLK (1)
#define CAVM_BTS_PLL_SEL_E_RSVD (7)
#define CAVM_BTS_PLL_SEL_E_RUNT (0)

/**
 * Enumeration bts_pwm_ctl_tick_sel_e
 *
 * BTS PWM Tick Selection Enumeration
 * Enumerates BTS_PWM_CTL[TICK_SEL].
 */
#define CAVM_BTS_PWM_CTL_TICK_SEL_E_DIV16 (4)
#define CAVM_BTS_PWM_CTL_TICK_SEL_E_DIV2 (1)
#define CAVM_BTS_PWM_CTL_TICK_SEL_E_DIV32 (5)
#define CAVM_BTS_PWM_CTL_TICK_SEL_E_DIV4 (2)
#define CAVM_BTS_PWM_CTL_TICK_SEL_E_DIV8 (3)
#define CAVM_BTS_PWM_CTL_TICK_SEL_E_RSVD0 (6)
#define CAVM_BTS_PWM_CTL_TICK_SEL_E_RSVD1 (7)
#define CAVM_BTS_PWM_CTL_TICK_SEL_E_RSVD_DIV1 (0)

/**
 * Register (RSL) bts_cg_1pps_cfg
 *
 * BTS CG 1PPS Configuration Register
 */
union cavm_bts_cg_1pps_cfg
{
    uint64_t u;
    struct cavm_bts_cg_1pps_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t reverse               : 1;  /**< [  0:  0](R/W) Set to 1 to invert the polarity of the CG_1PPS signal. */
#else /* Word 0 - Little Endian */
        uint64_t reverse               : 1;  /**< [  0:  0](R/W) Set to 1 to invert the polarity of the CG_1PPS signal. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bts_cg_1pps_cfg_s cn; */
};
typedef union cavm_bts_cg_1pps_cfg cavm_bts_cg_1pps_cfg_t;

#define CAVM_BTS_CG_1PPS_CFG CAVM_BTS_CG_1PPS_CFG_FUNC()
static inline uint64_t CAVM_BTS_CG_1PPS_CFG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BTS_CG_1PPS_CFG_FUNC(void)
{
    return 0x87e012000260ll;
}

#define typedef_CAVM_BTS_CG_1PPS_CFG cavm_bts_cg_1pps_cfg_t
#define bustype_CAVM_BTS_CG_1PPS_CFG CSR_TYPE_RSL
#define basename_CAVM_BTS_CG_1PPS_CFG "BTS_CG_1PPS_CFG"
#define device_bar_CAVM_BTS_CG_1PPS_CFG 0x0 /* PF_BAR0 */
#define busnum_CAVM_BTS_CG_1PPS_CFG 0
#define arguments_CAVM_BTS_CG_1PPS_CFG -1,-1,-1,-1

/**
 * Register (RSL) bts_cg_cfg
 *
 * BTS Clock Generation Configuration Register
 */
union cavm_bts_cg_cfg
{
    uint64_t u;
    struct cavm_bts_cg_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_46_63        : 18;
        uint64_t cnt_max_125us         : 14; /**< [ 45: 32](R/W) Maximum value for the 125 us counter used to time the BFN data signal.
                                                                 Set to the number of cycles per 125 us minus 1. Default is 0xEFF
                                                                 (3839) for a BFN clock. */
        uint64_t reserved_20_31        : 12;
        uint64_t cnt_max_10ms          : 20; /**< [ 19:  0](R/W) Maximum value for the 10 ms counter used for the BTS_RFP_OUT signal. Set to
                                                                 the number of cycles per 10 ms minus 1. Default is 0x4AFFFF (307199)
                                                                 for a BFN clock. */
#else /* Word 0 - Little Endian */
        uint64_t cnt_max_10ms          : 20; /**< [ 19:  0](R/W) Maximum value for the 10 ms counter used for the BTS_RFP_OUT signal. Set to
                                                                 the number of cycles per 10 ms minus 1. Default is 0x4AFFFF (307199)
                                                                 for a BFN clock. */
        uint64_t reserved_20_31        : 12;
        uint64_t cnt_max_125us         : 14; /**< [ 45: 32](R/W) Maximum value for the 125 us counter used to time the BFN data signal.
                                                                 Set to the number of cycles per 125 us minus 1. Default is 0xEFF
                                                                 (3839) for a BFN clock. */
        uint64_t reserved_46_63        : 18;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bts_cg_cfg_s cn; */
};
typedef union cavm_bts_cg_cfg cavm_bts_cg_cfg_t;

#define CAVM_BTS_CG_CFG CAVM_BTS_CG_CFG_FUNC()
static inline uint64_t CAVM_BTS_CG_CFG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BTS_CG_CFG_FUNC(void)
{
    return 0x87e012000408ll;
}

#define typedef_CAVM_BTS_CG_CFG cavm_bts_cg_cfg_t
#define bustype_CAVM_BTS_CG_CFG CSR_TYPE_RSL
#define basename_CAVM_BTS_CG_CFG "BTS_CG_CFG"
#define device_bar_CAVM_BTS_CG_CFG 0x0 /* PF_BAR0 */
#define busnum_CAVM_BTS_CG_CFG 0
#define arguments_CAVM_BTS_CG_CFG -1,-1,-1,-1

/**
 * Register (RSL) bts_cg_ctl
 *
 * BTS Clock Generation Control Register
 * This register controls the BFN and clocks produced by the clock generator.
 */
union cavm_bts_cg_ctl
{
    uint64_t u;
    struct cavm_bts_cg_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t sw_1pps_delay         : 32; /**< [ 63: 32](R/W) Delay between PD_1PPS and CG_1PPS in 30.72 MHz cycles. */
        uint64_t reserved_28_31        : 4;
        uint64_t sw_bfn                : 12; /**< [ 27: 16](R/W) BFN sequence start number. This value is only loaded by hardware when
                                                                 [SW_BFN_2MSB_VLD]=1 or [SW_BFN_10LSB_VLD]=1. */
        uint64_t smcell                : 1;  /**< [ 15: 15](R/W) Small cell mode:
                                                                 0 = Bypass clock generator and output BTS_RFP_OUT and BTS_BFN_OUT directly from
                                                                 external pins (i.e., BTS_RFP_IN and BTS_BFN_IN).
                                                                 1 = Output RFP and BFN produced by clock generator. */
        uint64_t reserved_5_14         : 10;
        uint64_t sw_bfn_2msb_vld       : 1;  /**< [  4:  4](R/W/H) Set by software to indicate [SW_BFN] bits \<11:10\> are valid. The BFN
                                                                 value will be updated at the next CG_1PPS pulse. Hardware will
                                                                 automatically clear this bit once the value has been updated. */
        uint64_t reserved_1_3          : 3;
        uint64_t sw_bfn_10lsb_vld      : 1;  /**< [  0:  0](R/W/H) Set by software to indicate [SW_BFN] bits \<9:0\> are valid. The BFN
                                                                 value will be updated at the next CG_1PPS pulse. Hardware will
                                                                 automatically clear this bit once the value has been updated. */
#else /* Word 0 - Little Endian */
        uint64_t sw_bfn_10lsb_vld      : 1;  /**< [  0:  0](R/W/H) Set by software to indicate [SW_BFN] bits \<9:0\> are valid. The BFN
                                                                 value will be updated at the next CG_1PPS pulse. Hardware will
                                                                 automatically clear this bit once the value has been updated. */
        uint64_t reserved_1_3          : 3;
        uint64_t sw_bfn_2msb_vld       : 1;  /**< [  4:  4](R/W/H) Set by software to indicate [SW_BFN] bits \<11:10\> are valid. The BFN
                                                                 value will be updated at the next CG_1PPS pulse. Hardware will
                                                                 automatically clear this bit once the value has been updated. */
        uint64_t reserved_5_14         : 10;
        uint64_t smcell                : 1;  /**< [ 15: 15](R/W) Small cell mode:
                                                                 0 = Bypass clock generator and output BTS_RFP_OUT and BTS_BFN_OUT directly from
                                                                 external pins (i.e., BTS_RFP_IN and BTS_BFN_IN).
                                                                 1 = Output RFP and BFN produced by clock generator. */
        uint64_t sw_bfn                : 12; /**< [ 27: 16](R/W) BFN sequence start number. This value is only loaded by hardware when
                                                                 [SW_BFN_2MSB_VLD]=1 or [SW_BFN_10LSB_VLD]=1. */
        uint64_t reserved_28_31        : 4;
        uint64_t sw_1pps_delay         : 32; /**< [ 63: 32](R/W) Delay between PD_1PPS and CG_1PPS in 30.72 MHz cycles. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bts_cg_ctl_s cn; */
};
typedef union cavm_bts_cg_ctl cavm_bts_cg_ctl_t;

#define CAVM_BTS_CG_CTL CAVM_BTS_CG_CTL_FUNC()
static inline uint64_t CAVM_BTS_CG_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BTS_CG_CTL_FUNC(void)
{
    return 0x87e012000400ll;
}

#define typedef_CAVM_BTS_CG_CTL cavm_bts_cg_ctl_t
#define bustype_CAVM_BTS_CG_CTL CSR_TYPE_RSL
#define basename_CAVM_BTS_CG_CTL "BTS_CG_CTL"
#define device_bar_CAVM_BTS_CG_CTL 0x0 /* PF_BAR0 */
#define busnum_CAVM_BTS_CG_CTL 0
#define arguments_CAVM_BTS_CG_CTL -1,-1,-1,-1

/**
 * Register (RSL) bts_csclk_active_pc
 *
 * BTS Conditional Coprocessor Clock Counter Register
 * This register counts conditional clocks for power management.
 *
 * This register is reset on chip reset.
 */
union cavm_bts_csclk_active_pc
{
    uint64_t u;
    struct cavm_bts_csclk_active_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Count of conditional coprocessor-clock cycles since reset. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Count of conditional coprocessor-clock cycles since reset. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bts_csclk_active_pc_s cn; */
};
typedef union cavm_bts_csclk_active_pc cavm_bts_csclk_active_pc_t;

#define CAVM_BTS_CSCLK_ACTIVE_PC CAVM_BTS_CSCLK_ACTIVE_PC_FUNC()
static inline uint64_t CAVM_BTS_CSCLK_ACTIVE_PC_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BTS_CSCLK_ACTIVE_PC_FUNC(void)
{
    return 0x87e012000020ll;
}

#define typedef_CAVM_BTS_CSCLK_ACTIVE_PC cavm_bts_csclk_active_pc_t
#define bustype_CAVM_BTS_CSCLK_ACTIVE_PC CSR_TYPE_RSL
#define basename_CAVM_BTS_CSCLK_ACTIVE_PC "BTS_CSCLK_ACTIVE_PC"
#define device_bar_CAVM_BTS_CSCLK_ACTIVE_PC 0x0 /* PF_BAR0 */
#define busnum_CAVM_BTS_CSCLK_ACTIVE_PC 0
#define arguments_CAVM_BTS_CSCLK_ACTIVE_PC -1,-1,-1,-1

/**
 * Register (RSL) bts_dac_clk_ctl
 *
 * BTS DAC Clock Control Register
 */
union cavm_bts_dac_clk_ctl
{
    uint64_t u;
    struct cavm_bts_dac_clk_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t div                   : 4;  /**< [  3:  0](R/W) The BTS_DAC_CLK divider. The output BTS_DAC_CLK will have frequency of (BTS_BFN_CLK / (2 x
                                                                 (DIV + 4))). E.g., set DIV=3 to output BTS_BFN_CLK/14.

                                                                 Note. Do not change while PWM is enabled. */
#else /* Word 0 - Little Endian */
        uint64_t div                   : 4;  /**< [  3:  0](R/W) The BTS_DAC_CLK divider. The output BTS_DAC_CLK will have frequency of (BTS_BFN_CLK / (2 x
                                                                 (DIV + 4))). E.g., set DIV=3 to output BTS_BFN_CLK/14.

                                                                 Note. Do not change while PWM is enabled. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bts_dac_clk_ctl_s cn; */
};
typedef union cavm_bts_dac_clk_ctl cavm_bts_dac_clk_ctl_t;

#define CAVM_BTS_DAC_CLK_CTL CAVM_BTS_DAC_CLK_CTL_FUNC()
static inline uint64_t CAVM_BTS_DAC_CLK_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BTS_DAC_CLK_CTL_FUNC(void)
{
    return 0x87e012000880ll;
}

#define typedef_CAVM_BTS_DAC_CLK_CTL cavm_bts_dac_clk_ctl_t
#define bustype_CAVM_BTS_DAC_CLK_CTL CSR_TYPE_RSL
#define basename_CAVM_BTS_DAC_CLK_CTL "BTS_DAC_CLK_CTL"
#define device_bar_CAVM_BTS_DAC_CLK_CTL 0x0 /* PF_BAR0 */
#define busnum_CAVM_BTS_DAC_CLK_CTL 0
#define arguments_CAVM_BTS_DAC_CLK_CTL -1,-1,-1,-1

/**
 * Register (RSL) bts_ext_ref#_div_cfg0
 *
 * BTS External Reference (0..2) Divider Configuration 0 Register
 * This register configures the clock divider used to generate a 1PPS signal
 * from external reference clock 0..2 (i.e., BTS_EXTREF(0..2)_CLK).
 * Do not change these during operation.
 */
union cavm_bts_ext_refx_div_cfg0
{
    uint64_t u;
    struct cavm_bts_ext_refx_div_cfg0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t clkout_bypass         : 1;  /**< [  3:  3](R/W) Set to 1 to bypass the clock divider (clock out = BTS_EXTREF(0)_CLK). */
        uint64_t clkout_inv            : 1;  /**< [  2:  2](R/W) Set to 1 to inverse the clock output polarity. */
        uint64_t clkout_5050_duty      : 1;  /**< [  1:  1](R/W) Clock divider duty cycle:
                                                                 0 = One cycle pulse (i.e., one cycle of external reference clock).
                                                                 1 = 50/50 duty-cycle. */
        uint64_t divider_en            : 1;  /**< [  0:  0](R/W) Set to 1 to enable the clock divider. The divider counter is reset to 0 when
                                                                 [DIVIDER_EN] is set to 0 and the clock output is disabled. */
#else /* Word 0 - Little Endian */
        uint64_t divider_en            : 1;  /**< [  0:  0](R/W) Set to 1 to enable the clock divider. The divider counter is reset to 0 when
                                                                 [DIVIDER_EN] is set to 0 and the clock output is disabled. */
        uint64_t clkout_5050_duty      : 1;  /**< [  1:  1](R/W) Clock divider duty cycle:
                                                                 0 = One cycle pulse (i.e., one cycle of external reference clock).
                                                                 1 = 50/50 duty-cycle. */
        uint64_t clkout_inv            : 1;  /**< [  2:  2](R/W) Set to 1 to inverse the clock output polarity. */
        uint64_t clkout_bypass         : 1;  /**< [  3:  3](R/W) Set to 1 to bypass the clock divider (clock out = BTS_EXTREF(0)_CLK). */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bts_ext_refx_div_cfg0_s cn; */
};
typedef union cavm_bts_ext_refx_div_cfg0 cavm_bts_ext_refx_div_cfg0_t;

static inline uint64_t CAVM_BTS_EXT_REFX_DIV_CFG0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BTS_EXT_REFX_DIV_CFG0(uint64_t a)
{
    if (a<=2)
        return 0x87e012000700ll + 0x10ll * ((a) & 0x3);
    __cavm_csr_fatal("BTS_EXT_REFX_DIV_CFG0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BTS_EXT_REFX_DIV_CFG0(a) cavm_bts_ext_refx_div_cfg0_t
#define bustype_CAVM_BTS_EXT_REFX_DIV_CFG0(a) CSR_TYPE_RSL
#define basename_CAVM_BTS_EXT_REFX_DIV_CFG0(a) "BTS_EXT_REFX_DIV_CFG0"
#define device_bar_CAVM_BTS_EXT_REFX_DIV_CFG0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_BTS_EXT_REFX_DIV_CFG0(a) (a)
#define arguments_CAVM_BTS_EXT_REFX_DIV_CFG0(a) (a),-1,-1,-1

/**
 * Register (RSL) bts_ext_ref#_div_cfg1
 *
 * BTS External Reference (0..2) Divider Configuration 1 Register
 * This register configures the clock divider used to generate a 1PPS signal
 * from external reference clock 0 (i.e., BTS_EXTREF(0..2)_CLK).
 * Do not change these during operation.
 */
union cavm_bts_ext_refx_div_cfg1
{
    uint64_t u;
    struct cavm_bts_ext_refx_div_cfg1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t divider_start_pos     : 32; /**< [ 63: 32](R/W) Divider start position. When a new value is written to
                                                                 [DIVIDER_START_POS], the counter will reset to 0 the next time the
                                                                 counter value is equal to [DIVIDER_START_POS]. Subsequently, the counter
                                                                 will reset to 0 when the counter is equal to [DIVIDER_TC].

                                                                 Writing [DIVIDER_START_POS] effectively applies a positive phase shift
                                                                 of [DIVIDER_START_POS]+1 cycles to the 1PPS signal.

                                                                 Note that a phase shift is only applied when this value changes, thus
                                                                 it might be necessary to write this field to zero before applying a
                                                                 new phase shift. */
        uint64_t divider_tc            : 32; /**< [ 31:  0](R/W) Divider counter terminal count value.

                                                                 When BTS_EXT_REF(0..2)_DIV_CFG0[CLKOUT_5050_DUTY]=0, this field should be
                                                                 set to the clock frequency minus one.

                                                                 When BTS_EXT_REF(0..2)_DIV_CFG0[CLKOUT_5050_DUTY]=1, this field should be
                                                                 set to half the clock frequency minus one. */
#else /* Word 0 - Little Endian */
        uint64_t divider_tc            : 32; /**< [ 31:  0](R/W) Divider counter terminal count value.

                                                                 When BTS_EXT_REF(0..2)_DIV_CFG0[CLKOUT_5050_DUTY]=0, this field should be
                                                                 set to the clock frequency minus one.

                                                                 When BTS_EXT_REF(0..2)_DIV_CFG0[CLKOUT_5050_DUTY]=1, this field should be
                                                                 set to half the clock frequency minus one. */
        uint64_t divider_start_pos     : 32; /**< [ 63: 32](R/W) Divider start position. When a new value is written to
                                                                 [DIVIDER_START_POS], the counter will reset to 0 the next time the
                                                                 counter value is equal to [DIVIDER_START_POS]. Subsequently, the counter
                                                                 will reset to 0 when the counter is equal to [DIVIDER_TC].

                                                                 Writing [DIVIDER_START_POS] effectively applies a positive phase shift
                                                                 of [DIVIDER_START_POS]+1 cycles to the 1PPS signal.

                                                                 Note that a phase shift is only applied when this value changes, thus
                                                                 it might be necessary to write this field to zero before applying a
                                                                 new phase shift. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bts_ext_refx_div_cfg1_s cn; */
};
typedef union cavm_bts_ext_refx_div_cfg1 cavm_bts_ext_refx_div_cfg1_t;

static inline uint64_t CAVM_BTS_EXT_REFX_DIV_CFG1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BTS_EXT_REFX_DIV_CFG1(uint64_t a)
{
    if (a<=2)
        return 0x87e012000708ll + 0x10ll * ((a) & 0x3);
    __cavm_csr_fatal("BTS_EXT_REFX_DIV_CFG1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BTS_EXT_REFX_DIV_CFG1(a) cavm_bts_ext_refx_div_cfg1_t
#define bustype_CAVM_BTS_EXT_REFX_DIV_CFG1(a) CSR_TYPE_RSL
#define basename_CAVM_BTS_EXT_REFX_DIV_CFG1(a) "BTS_EXT_REFX_DIV_CFG1"
#define device_bar_CAVM_BTS_EXT_REFX_DIV_CFG1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_BTS_EXT_REFX_DIV_CFG1(a) (a)
#define arguments_CAVM_BTS_EXT_REFX_DIV_CFG1(a) (a),-1,-1,-1

/**
 * Register (RSL) bts_global_ctl
 *
 * BTS Global Control Register
 */
union cavm_bts_global_ctl
{
    uint64_t u;
    struct cavm_bts_global_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_10_63        : 54;
        uint64_t bts_enable            : 1;  /**< [  9:  9](R/W) Set to 1 to enable the BTS clock. */
        uint64_t reserved_6_8          : 3;
        uint64_t mon_bfn_clk_en        : 1;  /**< [  5:  5](R/W) Set to 1 to enable 61.44 MHz clock divider and its output (491 MHz/8).
                                                                 The 61.44 MHz can be output to BTS_TP2 by setting
                                                                 BTS_TP_MUX_SEL[TP2_SEL] = 0x6. */
        uint64_t ptp_1pps_out_en       : 1;  /**< [  4:  4](R/W) Set to 1 to enable PTP 1 pps output to the PTP_1PPS_OUT external pin. */
        uint64_t reserved_3            : 1;
        uint64_t dac_clk_en            : 1;  /**< [  2:  2](R/W) Set to 1 to enable BTS_DAC_CLK external pin output of the (30.72 MHz/14) clock
                                                                 divider. */
        uint64_t reserved_0_1          : 2;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_1          : 2;
        uint64_t dac_clk_en            : 1;  /**< [  2:  2](R/W) Set to 1 to enable BTS_DAC_CLK external pin output of the (30.72 MHz/14) clock
                                                                 divider. */
        uint64_t reserved_3            : 1;
        uint64_t ptp_1pps_out_en       : 1;  /**< [  4:  4](R/W) Set to 1 to enable PTP 1 pps output to the PTP_1PPS_OUT external pin. */
        uint64_t mon_bfn_clk_en        : 1;  /**< [  5:  5](R/W) Set to 1 to enable 61.44 MHz clock divider and its output (491 MHz/8).
                                                                 The 61.44 MHz can be output to BTS_TP2 by setting
                                                                 BTS_TP_MUX_SEL[TP2_SEL] = 0x6. */
        uint64_t reserved_6_8          : 3;
        uint64_t bts_enable            : 1;  /**< [  9:  9](R/W) Set to 1 to enable the BTS clock. */
        uint64_t reserved_10_63        : 54;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bts_global_ctl_s cn; */
};
typedef union cavm_bts_global_ctl cavm_bts_global_ctl_t;

#define CAVM_BTS_GLOBAL_CTL CAVM_BTS_GLOBAL_CTL_FUNC()
static inline uint64_t CAVM_BTS_GLOBAL_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BTS_GLOBAL_CTL_FUNC(void)
{
    return 0x87e012000010ll;
}

#define typedef_CAVM_BTS_GLOBAL_CTL cavm_bts_global_ctl_t
#define bustype_CAVM_BTS_GLOBAL_CTL CSR_TYPE_RSL
#define basename_CAVM_BTS_GLOBAL_CTL "BTS_GLOBAL_CTL"
#define device_bar_CAVM_BTS_GLOBAL_CTL 0x0 /* PF_BAR0 */
#define busnum_CAVM_BTS_GLOBAL_CTL 0
#define arguments_CAVM_BTS_GLOBAL_CTL -1,-1,-1,-1

/**
 * Register (RSL) bts_global_status
 *
 * BTS Status Register
 */
union cavm_bts_global_status
{
    uint64_t u;
    struct cavm_bts_global_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t bts_pll_lock          : 1;  /**< [  0:  0](RO/H) Reserved. */
#else /* Word 0 - Little Endian */
        uint64_t bts_pll_lock          : 1;  /**< [  0:  0](RO/H) Reserved. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bts_global_status_s cn; */
};
typedef union cavm_bts_global_status cavm_bts_global_status_t;

#define CAVM_BTS_GLOBAL_STATUS CAVM_BTS_GLOBAL_STATUS_FUNC()
static inline uint64_t CAVM_BTS_GLOBAL_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BTS_GLOBAL_STATUS_FUNC(void)
{
    return 0x87e012000018ll;
}

#define typedef_CAVM_BTS_GLOBAL_STATUS cavm_bts_global_status_t
#define bustype_CAVM_BTS_GLOBAL_STATUS CSR_TYPE_RSL
#define basename_CAVM_BTS_GLOBAL_STATUS "BTS_GLOBAL_STATUS"
#define device_bar_CAVM_BTS_GLOBAL_STATUS 0x0 /* PF_BAR0 */
#define busnum_CAVM_BTS_GLOBAL_STATUS 0
#define arguments_CAVM_BTS_GLOBAL_STATUS -1,-1,-1,-1

/**
 * Register (RSL) bts_int_sum_ena_w1c
 *
 * BTS Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_bts_int_sum_ena_w1c
{
    uint64_t u;
    struct cavm_bts_int_sum_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t pdbank_done           : 6;  /**< [  5:  0](R/W1C/H) Reads or clears enable for BTS_INT_SUM_W1C[PDBANK_DONE]. */
#else /* Word 0 - Little Endian */
        uint64_t pdbank_done           : 6;  /**< [  5:  0](R/W1C/H) Reads or clears enable for BTS_INT_SUM_W1C[PDBANK_DONE]. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bts_int_sum_ena_w1c_s cn; */
};
typedef union cavm_bts_int_sum_ena_w1c cavm_bts_int_sum_ena_w1c_t;

#define CAVM_BTS_INT_SUM_ENA_W1C CAVM_BTS_INT_SUM_ENA_W1C_FUNC()
static inline uint64_t CAVM_BTS_INT_SUM_ENA_W1C_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BTS_INT_SUM_ENA_W1C_FUNC(void)
{
    return 0x87e012001148ll;
}

#define typedef_CAVM_BTS_INT_SUM_ENA_W1C cavm_bts_int_sum_ena_w1c_t
#define bustype_CAVM_BTS_INT_SUM_ENA_W1C CSR_TYPE_RSL
#define basename_CAVM_BTS_INT_SUM_ENA_W1C "BTS_INT_SUM_ENA_W1C"
#define device_bar_CAVM_BTS_INT_SUM_ENA_W1C 0x0 /* PF_BAR0 */
#define busnum_CAVM_BTS_INT_SUM_ENA_W1C 0
#define arguments_CAVM_BTS_INT_SUM_ENA_W1C -1,-1,-1,-1

/**
 * Register (RSL) bts_int_sum_ena_w1s
 *
 * BTS Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_bts_int_sum_ena_w1s
{
    uint64_t u;
    struct cavm_bts_int_sum_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t pdbank_done           : 6;  /**< [  5:  0](R/W1S/H) Reads or sets enable for BTS_INT_SUM_W1C[PDBANK_DONE]. */
#else /* Word 0 - Little Endian */
        uint64_t pdbank_done           : 6;  /**< [  5:  0](R/W1S/H) Reads or sets enable for BTS_INT_SUM_W1C[PDBANK_DONE]. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bts_int_sum_ena_w1s_s cn; */
};
typedef union cavm_bts_int_sum_ena_w1s cavm_bts_int_sum_ena_w1s_t;

#define CAVM_BTS_INT_SUM_ENA_W1S CAVM_BTS_INT_SUM_ENA_W1S_FUNC()
static inline uint64_t CAVM_BTS_INT_SUM_ENA_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BTS_INT_SUM_ENA_W1S_FUNC(void)
{
    return 0x87e012001150ll;
}

#define typedef_CAVM_BTS_INT_SUM_ENA_W1S cavm_bts_int_sum_ena_w1s_t
#define bustype_CAVM_BTS_INT_SUM_ENA_W1S CSR_TYPE_RSL
#define basename_CAVM_BTS_INT_SUM_ENA_W1S "BTS_INT_SUM_ENA_W1S"
#define device_bar_CAVM_BTS_INT_SUM_ENA_W1S 0x0 /* PF_BAR0 */
#define busnum_CAVM_BTS_INT_SUM_ENA_W1S 0
#define arguments_CAVM_BTS_INT_SUM_ENA_W1S -1,-1,-1,-1

/**
 * Register (RSL) bts_int_sum_w1c
 *
 * BTS Interrupt Summary Clear Register
 * This register contains the status for various BTS interrupts.
 */
union cavm_bts_int_sum_w1c
{
    uint64_t u;
    struct cavm_bts_int_sum_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t pdbank_done           : 6;  /**< [  5:  0](R/W1C/H) Phase difference measurement done on PD bank 0 to 5. */
#else /* Word 0 - Little Endian */
        uint64_t pdbank_done           : 6;  /**< [  5:  0](R/W1C/H) Phase difference measurement done on PD bank 0 to 5. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bts_int_sum_w1c_s cn; */
};
typedef union cavm_bts_int_sum_w1c cavm_bts_int_sum_w1c_t;

#define CAVM_BTS_INT_SUM_W1C CAVM_BTS_INT_SUM_W1C_FUNC()
static inline uint64_t CAVM_BTS_INT_SUM_W1C_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BTS_INT_SUM_W1C_FUNC(void)
{
    return 0x87e012001138ll;
}

#define typedef_CAVM_BTS_INT_SUM_W1C cavm_bts_int_sum_w1c_t
#define bustype_CAVM_BTS_INT_SUM_W1C CSR_TYPE_RSL
#define basename_CAVM_BTS_INT_SUM_W1C "BTS_INT_SUM_W1C"
#define device_bar_CAVM_BTS_INT_SUM_W1C 0x0 /* PF_BAR0 */
#define busnum_CAVM_BTS_INT_SUM_W1C 0
#define arguments_CAVM_BTS_INT_SUM_W1C -1,-1,-1,-1

/**
 * Register (RSL) bts_int_sum_w1s
 *
 * BTS Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_bts_int_sum_w1s
{
    uint64_t u;
    struct cavm_bts_int_sum_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t pdbank_done           : 6;  /**< [  5:  0](R/W1S/H) Reads or sets BTS_INT_SUM_W1C[PDBANK_DONE]. */
#else /* Word 0 - Little Endian */
        uint64_t pdbank_done           : 6;  /**< [  5:  0](R/W1S/H) Reads or sets BTS_INT_SUM_W1C[PDBANK_DONE]. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bts_int_sum_w1s_s cn; */
};
typedef union cavm_bts_int_sum_w1s cavm_bts_int_sum_w1s_t;

#define CAVM_BTS_INT_SUM_W1S CAVM_BTS_INT_SUM_W1S_FUNC()
static inline uint64_t CAVM_BTS_INT_SUM_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BTS_INT_SUM_W1S_FUNC(void)
{
    return 0x87e012001140ll;
}

#define typedef_CAVM_BTS_INT_SUM_W1S cavm_bts_int_sum_w1s_t
#define bustype_CAVM_BTS_INT_SUM_W1S CSR_TYPE_RSL
#define basename_CAVM_BTS_INT_SUM_W1S "BTS_INT_SUM_W1S"
#define device_bar_CAVM_BTS_INT_SUM_W1S 0x0 /* PF_BAR0 */
#define busnum_CAVM_BTS_INT_SUM_W1S 0
#define arguments_CAVM_BTS_INT_SUM_W1S -1,-1,-1,-1

/**
 * Register (RSL) bts_man_pll
 *
 * BTS Manual PLL Control Register
 * These registers are used in conjunction with the BTS_PLL registers when
 * the BTS_PLL[NEXT_MAN] field is set.
 * These register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is always reset on a chip domain reset.
 */
union cavm_bts_man_pll
{
    uint64_t u;
    struct cavm_bts_man_pll_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_63           : 1;
        uint64_t power_down            : 3;  /**< [ 62: 60](R/W/H) Power Down.
                                                                 When set, The selected PLL/ARO is powered down and is in reset.  When BTS_PLL()[NEXT_PGM]
                                                                 is set and BTS_PLL()[NEXT_PLL_SEL] indicates either a PLL or ARO.  The device is powered up and
                                                                 released from reset by the hardware.  The hardware automatically clears the bit when the
                                                                 sequence is complete and the device is present.  This sequence adds
                                                                 approximately 15uS to the programming.  During this
                                                                 time the [NEXT_SWITCH] timer is frozen.

                                                                 The following are the bit mapping:
                                                                   \<0\> = PLL0.
                                                                   \<1\> = PLL1.
                                                                   \<2\> = Reserved.

                                                                 This operation does not require BTS_PLL[NEXT_MAN] to be set. */
        uint64_t ref_div               : 4;  /**< [ 59: 56](R/W) Reference clock divider for PLLs.
                                                                   0 = Reserved.
                                                                   1 = Divide reference clock by 1.
                                                                   2 = Divide reference clock by 2 (typical for 100 MHz).
                                                                   3 = Divide reference clock by 3.
                                                                   4 = Divide reference clock by 4 (typical for 122.88 MHz, see ALF_REF).
                                                                   5-31 = Divide reference clock by N.

                                                                 ARO ignores this field and uses reference clock. */
        uint64_t reserved_55           : 1;
        uint64_t post_div              : 9;  /**< [ 54: 46](R/W) Post scalar divider.
                                                                   0, 1 = Reserved.
                                                                   2-511 = Divide VCO output by [POST_DIV]. */
        uint64_t bw                    : 2;  /**< [ 45: 44](R/W) PLL VCO bandwidth.
                                                                 For DFICLK PLL the following setting are supported:
                                                                   0x0 = 20-30 MHz reference clock/ref_div.
                                                                   0x1 = 30-45 MHz reference clock/ref_div.
                                                                   0x2 = 45-65 MHz reference clock/ref_div.
                                                                   0x3 = 65-90 MHz reference clock/ref_div.

                                                                 Bits used as MSBs for DLF_KP and DLF_KI for LP PLLs.
                                                                   0x3 = 30.72 MHz PLL reference/ref_div (see ALT_REF).
                                                                   0x3 = 50.00 MHz PLL reference/ref_div.

                                                                 Not used by ARO. */
        uint64_t vco_mul               : 10; /**< [ 43: 34](R/W) VCO multiplier integer.

                                                                 PLL VCO frequency is [VCO_MUL].[VCO_FRACT] * reference_clock / [REF_DIV].

                                                                 When VCO_MUL is used with the ARO, the number specified in bits 7..0 is multiplied
                                                                 by fifty, VCO_FRACT is added in and that number is used to determine how many
                                                                 ARO clocks are required per update.  The [UPDATE_RATE] specifies how many reference
                                                                 clocks occur during this update period.

                                                                 VCO range for PLLs is 2 GHz to 5 GHz.
                                                                 VCO range for ARO is 300 MHz - maximum ARO clock rate. */
        uint64_t vco_fract             : 10; /**< [ 33: 24](R/W) VCO multiplier fraction.

                                                                 PLL VCO frequency is [VCO_MUL].[VCO_FRACT] * reference_clock / [REF_DIV].

                                                                 When VCO_FRACT is specified with the ARO, this 10 bit number is added to the
                                                                 ARO clock count specified by VCO_MUL * 50 to determine clocks per update period.

                                                                 See [VCO_MUL] for min/max VCO frequencies.  Not used by ARO. */
        uint64_t icp                   : 4;  /**< [ 23: 20](R/W) DFICLK PLL ICP setting.

                                                                 Typical setting 0x6 (0110) for 30.72, 33.33 and 50.00 MHz reference

                                                                 See DFICLK PLL specification for details.

                                                                 Not used by PLL or ARO. */
        uint64_t dlf_kp                : 5;  /**< [ 19: 15](R/W) DLF Proportional Path Gain Setting.
                                                                 MSB is 1 bit integer stored in BW[1], 3 bit integer and 2 bit fraction stored here.

                                                                 Typical values are:
                                                                 Rate   Value BW[1], DLF_KP  PLL reference/ref_div
                                                                 \<pre\>
                                                                 20 MHz  0x18   0     0x18   20.00 - 40.00 MHz
                                                                 25 MHz  0x1e   0     0x1e   25.00 - 50.00 MHz
                                                                 30 MHz  0x24   1     0x04   30.00 - 48.70 MHz
                                                                 50 MHz  0x3d   1     0x1d   50 MHz
                                                                 \</pre\>

                                                                 Not used by DFICLK PLL and ARO. */
        uint64_t dlf_ki                : 5;  /**< [ 14: 10](R/W) DLF Integral Path Gain Setting.
                                                                 MSB is 1 bit integer stored in BW[0] and 5 bit fraction stored here.

                                                                 Typical values are:
                                                                 Rate   Value BW[0], DLF_KI  PLL reference/ref_div
                                                                 \<pre\>
                                                                 30 MHz  0x3d   1     0x1d   30.00 - 48.70 MHz
                                                                 50 MHz  0x3f   1     0x1f   50 MHz
                                                                 \</pre\>

                                                                 Not used by DFICLK PLL and ARO. */
        uint64_t update_rate           : 10; /**< [  9:  0](R/W) PLL update rate.  PLL reference/ref_div in 100KHz increments.
                                                                 Default values
                                                                   307 for 30.72 MHz reference.
                                                                   333 for 33.33 MHz reference.
                                                                   500 for 50.00 MHz reference.

                                                                 ARO updates are typically specified as either 50 or 100 Reference clocks.
                                                                 Hardware automatically adds an additional 30nS so a setting of 50 takes 530nS.
                                                                 This number can be used to predict lock times when the ARO is used.

                                                                 Frequency for ARO is
                                                                   (VCO_MUL*50 + VCO_FRACT) * 2.0 MHz if UPDATE_RATE is 50 or
                                                                   (VCO_MUL*50 + VCO_FRACT) * 1.0 MHz if UPDATE_RATE is 100

                                                                 Note that the estimated lock time is approximately 2x with an update rate of 100.

                                                                 MSB unused by LP PLL. */
#else /* Word 0 - Little Endian */
        uint64_t update_rate           : 10; /**< [  9:  0](R/W) PLL update rate.  PLL reference/ref_div in 100KHz increments.
                                                                 Default values
                                                                   307 for 30.72 MHz reference.
                                                                   333 for 33.33 MHz reference.
                                                                   500 for 50.00 MHz reference.

                                                                 ARO updates are typically specified as either 50 or 100 Reference clocks.
                                                                 Hardware automatically adds an additional 30nS so a setting of 50 takes 530nS.
                                                                 This number can be used to predict lock times when the ARO is used.

                                                                 Frequency for ARO is
                                                                   (VCO_MUL*50 + VCO_FRACT) * 2.0 MHz if UPDATE_RATE is 50 or
                                                                   (VCO_MUL*50 + VCO_FRACT) * 1.0 MHz if UPDATE_RATE is 100

                                                                 Note that the estimated lock time is approximately 2x with an update rate of 100.

                                                                 MSB unused by LP PLL. */
        uint64_t dlf_ki                : 5;  /**< [ 14: 10](R/W) DLF Integral Path Gain Setting.
                                                                 MSB is 1 bit integer stored in BW[0] and 5 bit fraction stored here.

                                                                 Typical values are:
                                                                 Rate   Value BW[0], DLF_KI  PLL reference/ref_div
                                                                 \<pre\>
                                                                 30 MHz  0x3d   1     0x1d   30.00 - 48.70 MHz
                                                                 50 MHz  0x3f   1     0x1f   50 MHz
                                                                 \</pre\>

                                                                 Not used by DFICLK PLL and ARO. */
        uint64_t dlf_kp                : 5;  /**< [ 19: 15](R/W) DLF Proportional Path Gain Setting.
                                                                 MSB is 1 bit integer stored in BW[1], 3 bit integer and 2 bit fraction stored here.

                                                                 Typical values are:
                                                                 Rate   Value BW[1], DLF_KP  PLL reference/ref_div
                                                                 \<pre\>
                                                                 20 MHz  0x18   0     0x18   20.00 - 40.00 MHz
                                                                 25 MHz  0x1e   0     0x1e   25.00 - 50.00 MHz
                                                                 30 MHz  0x24   1     0x04   30.00 - 48.70 MHz
                                                                 50 MHz  0x3d   1     0x1d   50 MHz
                                                                 \</pre\>

                                                                 Not used by DFICLK PLL and ARO. */
        uint64_t icp                   : 4;  /**< [ 23: 20](R/W) DFICLK PLL ICP setting.

                                                                 Typical setting 0x6 (0110) for 30.72, 33.33 and 50.00 MHz reference

                                                                 See DFICLK PLL specification for details.

                                                                 Not used by PLL or ARO. */
        uint64_t vco_fract             : 10; /**< [ 33: 24](R/W) VCO multiplier fraction.

                                                                 PLL VCO frequency is [VCO_MUL].[VCO_FRACT] * reference_clock / [REF_DIV].

                                                                 When VCO_FRACT is specified with the ARO, this 10 bit number is added to the
                                                                 ARO clock count specified by VCO_MUL * 50 to determine clocks per update period.

                                                                 See [VCO_MUL] for min/max VCO frequencies.  Not used by ARO. */
        uint64_t vco_mul               : 10; /**< [ 43: 34](R/W) VCO multiplier integer.

                                                                 PLL VCO frequency is [VCO_MUL].[VCO_FRACT] * reference_clock / [REF_DIV].

                                                                 When VCO_MUL is used with the ARO, the number specified in bits 7..0 is multiplied
                                                                 by fifty, VCO_FRACT is added in and that number is used to determine how many
                                                                 ARO clocks are required per update.  The [UPDATE_RATE] specifies how many reference
                                                                 clocks occur during this update period.

                                                                 VCO range for PLLs is 2 GHz to 5 GHz.
                                                                 VCO range for ARO is 300 MHz - maximum ARO clock rate. */
        uint64_t bw                    : 2;  /**< [ 45: 44](R/W) PLL VCO bandwidth.
                                                                 For DFICLK PLL the following setting are supported:
                                                                   0x0 = 20-30 MHz reference clock/ref_div.
                                                                   0x1 = 30-45 MHz reference clock/ref_div.
                                                                   0x2 = 45-65 MHz reference clock/ref_div.
                                                                   0x3 = 65-90 MHz reference clock/ref_div.

                                                                 Bits used as MSBs for DLF_KP and DLF_KI for LP PLLs.
                                                                   0x3 = 30.72 MHz PLL reference/ref_div (see ALT_REF).
                                                                   0x3 = 50.00 MHz PLL reference/ref_div.

                                                                 Not used by ARO. */
        uint64_t post_div              : 9;  /**< [ 54: 46](R/W) Post scalar divider.
                                                                   0, 1 = Reserved.
                                                                   2-511 = Divide VCO output by [POST_DIV]. */
        uint64_t reserved_55           : 1;
        uint64_t ref_div               : 4;  /**< [ 59: 56](R/W) Reference clock divider for PLLs.
                                                                   0 = Reserved.
                                                                   1 = Divide reference clock by 1.
                                                                   2 = Divide reference clock by 2 (typical for 100 MHz).
                                                                   3 = Divide reference clock by 3.
                                                                   4 = Divide reference clock by 4 (typical for 122.88 MHz, see ALF_REF).
                                                                   5-31 = Divide reference clock by N.

                                                                 ARO ignores this field and uses reference clock. */
        uint64_t power_down            : 3;  /**< [ 62: 60](R/W/H) Power Down.
                                                                 When set, The selected PLL/ARO is powered down and is in reset.  When BTS_PLL()[NEXT_PGM]
                                                                 is set and BTS_PLL()[NEXT_PLL_SEL] indicates either a PLL or ARO.  The device is powered up and
                                                                 released from reset by the hardware.  The hardware automatically clears the bit when the
                                                                 sequence is complete and the device is present.  This sequence adds
                                                                 approximately 15uS to the programming.  During this
                                                                 time the [NEXT_SWITCH] timer is frozen.

                                                                 The following are the bit mapping:
                                                                   \<0\> = PLL0.
                                                                   \<1\> = PLL1.
                                                                   \<2\> = Reserved.

                                                                 This operation does not require BTS_PLL[NEXT_MAN] to be set. */
        uint64_t reserved_63           : 1;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bts_man_pll_s cn; */
};
typedef union cavm_bts_man_pll cavm_bts_man_pll_t;

#define CAVM_BTS_MAN_PLL CAVM_BTS_MAN_PLL_FUNC()
static inline uint64_t CAVM_BTS_MAN_PLL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BTS_MAN_PLL_FUNC(void)
{
    return 0x87e012000030ll;
}

#define typedef_CAVM_BTS_MAN_PLL cavm_bts_man_pll_t
#define bustype_CAVM_BTS_MAN_PLL CSR_TYPE_RSL
#define basename_CAVM_BTS_MAN_PLL "BTS_MAN_PLL"
#define device_bar_CAVM_BTS_MAN_PLL 0x0 /* PF_BAR0 */
#define busnum_CAVM_BTS_MAN_PLL 0
#define arguments_CAVM_BTS_MAN_PLL -1,-1,-1,-1

/**
 * Register (RSL) bts_msix_pba#
 *
 * BTS MSI-X Pending Bit Array Registers
 * This register is the MSI-X PBA table, the bit number is indexed by the BTS_INT_VEC_E enumeration.
 */
union cavm_bts_msix_pbax
{
    uint64_t u;
    struct cavm_bts_msix_pbax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message for the associated BTS_MSIX_VEC()_CTL, enumerated by BTS_INT_VEC_E. Bits
                                                                 that have no associated BTS_INT_VEC_E are zero. */
#else /* Word 0 - Little Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message for the associated BTS_MSIX_VEC()_CTL, enumerated by BTS_INT_VEC_E. Bits
                                                                 that have no associated BTS_INT_VEC_E are zero. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bts_msix_pbax_s cn; */
};
typedef union cavm_bts_msix_pbax cavm_bts_msix_pbax_t;

static inline uint64_t CAVM_BTS_MSIX_PBAX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BTS_MSIX_PBAX(uint64_t a)
{
    if (a==0)
        return 0x87e012ff0000ll + 8ll * ((a) & 0x0);
    __cavm_csr_fatal("BTS_MSIX_PBAX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BTS_MSIX_PBAX(a) cavm_bts_msix_pbax_t
#define bustype_CAVM_BTS_MSIX_PBAX(a) CSR_TYPE_RSL
#define basename_CAVM_BTS_MSIX_PBAX(a) "BTS_MSIX_PBAX"
#define device_bar_CAVM_BTS_MSIX_PBAX(a) 0x4 /* PF_BAR4 */
#define busnum_CAVM_BTS_MSIX_PBAX(a) (a)
#define arguments_CAVM_BTS_MSIX_PBAX(a) (a),-1,-1,-1

/**
 * Register (RSL) bts_msix_vec#_addr
 *
 * BTS MSI-X Vector Table Address Registers
 * This register is the MSI-X vector table, indexed by the BTS_INT_VEC_E enumeration.
 */
union cavm_bts_msix_vecx_addr
{
    uint64_t u;
    struct cavm_bts_msix_vecx_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_1            : 1;
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Secure vector.
                                                                 0 = This vector may be read or written by either secure or nonsecure states.
                                                                 The vector's IOVA is sent to the SMMU as nonsecure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1).

                                                                 1 = This vector's BTS_MSIX_VEC()_ADDR, BTS_MSIX_VEC()_CTL, and corresponding
                                                                 bit of BTS_MSIX_PBA() are RAZ/WI and does not cause a fault when accessed
                                                                 by the nonsecure world.
                                                                 The vector's IOVA is sent to the SMMU as secure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1 or
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC_PHYS]=1).

                                                                 If PCCPF_BTS_VSEC_SCTL[MSIX_SEC] (for documentation, see PCCPF_XXX_VSEC_SCTL[MSIX_SEC]) is
                                                                 set, all vectors are secure and function as if [SECVEC] was set.

                                                                 Also note the following:
                                                                 * When PCCPF_XXX_VSEC_SCTL[MSIX_SEC_EN]=1, all secure vectors (including secure
                                                                 VF vectors) will act as if PCCPF/PCCVF_XXX_MSIX_CAP_HDR[MSIXEN]=1,
                                                                 PCCPF/PCCVF_XXX_MSIX_CAP_HDR[FUNM]=0 and PCCPF/PCCVF_XXX_CMD[ME]=1.
                                                                 * When PCCPF_XXX_VSEC_SCTL[MSIX_SEC_PHYS]=1, all secure vectors (including
                                                                 secure VF vectors) are considered physical, regardless of
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]. */
#else /* Word 0 - Little Endian */
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Secure vector.
                                                                 0 = This vector may be read or written by either secure or nonsecure states.
                                                                 The vector's IOVA is sent to the SMMU as nonsecure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1).

                                                                 1 = This vector's BTS_MSIX_VEC()_ADDR, BTS_MSIX_VEC()_CTL, and corresponding
                                                                 bit of BTS_MSIX_PBA() are RAZ/WI and does not cause a fault when accessed
                                                                 by the nonsecure world.
                                                                 The vector's IOVA is sent to the SMMU as secure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1 or
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC_PHYS]=1).

                                                                 If PCCPF_BTS_VSEC_SCTL[MSIX_SEC] (for documentation, see PCCPF_XXX_VSEC_SCTL[MSIX_SEC]) is
                                                                 set, all vectors are secure and function as if [SECVEC] was set.

                                                                 Also note the following:
                                                                 * When PCCPF_XXX_VSEC_SCTL[MSIX_SEC_EN]=1, all secure vectors (including secure
                                                                 VF vectors) will act as if PCCPF/PCCVF_XXX_MSIX_CAP_HDR[MSIXEN]=1,
                                                                 PCCPF/PCCVF_XXX_MSIX_CAP_HDR[FUNM]=0 and PCCPF/PCCVF_XXX_CMD[ME]=1.
                                                                 * When PCCPF_XXX_VSEC_SCTL[MSIX_SEC_PHYS]=1, all secure vectors (including
                                                                 secure VF vectors) are considered physical, regardless of
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]. */
        uint64_t reserved_1            : 1;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bts_msix_vecx_addr_s cn; */
};
typedef union cavm_bts_msix_vecx_addr cavm_bts_msix_vecx_addr_t;

static inline uint64_t CAVM_BTS_MSIX_VECX_ADDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BTS_MSIX_VECX_ADDR(uint64_t a)
{
    if (a==0)
        return 0x87e012f00000ll + 0x10ll * ((a) & 0x0);
    __cavm_csr_fatal("BTS_MSIX_VECX_ADDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BTS_MSIX_VECX_ADDR(a) cavm_bts_msix_vecx_addr_t
#define bustype_CAVM_BTS_MSIX_VECX_ADDR(a) CSR_TYPE_RSL
#define basename_CAVM_BTS_MSIX_VECX_ADDR(a) "BTS_MSIX_VECX_ADDR"
#define device_bar_CAVM_BTS_MSIX_VECX_ADDR(a) 0x4 /* PF_BAR4 */
#define busnum_CAVM_BTS_MSIX_VECX_ADDR(a) (a)
#define arguments_CAVM_BTS_MSIX_VECX_ADDR(a) (a),-1,-1,-1

/**
 * Register (RSL) bts_msix_vec#_ctl
 *
 * BTS MSI-X Vector Table Control and Data Registers
 * This register is the MSI-X vector table, indexed by the BTS_INT_VEC_E enumeration.
 */
union cavm_bts_msix_vecx_ctl
{
    uint64_t u;
    struct cavm_bts_msix_vecx_ctl_s
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
    /* struct cavm_bts_msix_vecx_ctl_s cn; */
};
typedef union cavm_bts_msix_vecx_ctl cavm_bts_msix_vecx_ctl_t;

static inline uint64_t CAVM_BTS_MSIX_VECX_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BTS_MSIX_VECX_CTL(uint64_t a)
{
    if (a==0)
        return 0x87e012f00008ll + 0x10ll * ((a) & 0x0);
    __cavm_csr_fatal("BTS_MSIX_VECX_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BTS_MSIX_VECX_CTL(a) cavm_bts_msix_vecx_ctl_t
#define bustype_CAVM_BTS_MSIX_VECX_CTL(a) CSR_TYPE_RSL
#define basename_CAVM_BTS_MSIX_VECX_CTL(a) "BTS_MSIX_VECX_CTL"
#define device_bar_CAVM_BTS_MSIX_VECX_CTL(a) 0x4 /* PF_BAR4 */
#define busnum_CAVM_BTS_MSIX_VECX_CTL(a) (a)
#define arguments_CAVM_BTS_MSIX_VECX_CTL(a) (a),-1,-1,-1

/**
 * Register (RSL) bts_pd1pps_div_cfg0
 *
 * BTS PD Bank 1PPS Divider Configuration 0 Register
 * This register configures the clock divider used to generate the PD_1PPS
 * signal derived from the 30.72 MHz clock (BTS_BFN_CLK). This signal is
 * used by the clock generation block to control RFP timing.
 *
 * This register configures the clock divider used to generate the
 * PD_BFN_1PPS signal derived from the 30.72 MHz clock (BTS_BFN_CLK).
 *
 * When [FREE_RUN]=1, the initial alignment depends on when [DIVIDER_EN] is written
 * to 1, and the value in BTS_PD1PPS_DIV_CFG1[DIVIDER_START_POS].
 *
 * When [FREE_RUN]=0, the initial alignment will be
 * BTS_PD1PPS_DIV_CFG1[DIVIDER_START_POS]+4 cycles after the reference clock
 * selected by [REF_IN_SEL] (where cycles are counted in the 30.72 MHz clock).
 *
 * In both cases, after the initial pulse, subsequent 1PPS pulses are
 * generated at a constant period.
 */
union cavm_bts_pd1pps_div_cfg0
{
    uint64_t u;
    struct cavm_bts_pd1pps_div_cfg0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t ref_in_sel            : 3;  /**< [  6:  4](R/W) Select the reference 1PPS source:
                                                                 Use BTS_PD1PPS_DIV_CFG0_REF_IN_SEL_E for the selects. */
        uint64_t free_run              : 1;  /**< [  3:  3](R/W) Set to 1 to enable free running mode. In free running mode, all input
                                                                 1PPS references are ignored. The initial start position is set by
                                                                 BTS_PD1PPS_DIV_CFG1[DIVIDER_START_POS]. */
        uint64_t reserved_2            : 1;
        uint64_t clkout_5050_duty      : 1;  /**< [  1:  1](R/W) Clock divider duty cycle:
                                                                 0 = One cycle pulse (i.e., one 30.72 MHz cycle).
                                                                 1 = 50/50 duty-cycle. */
        uint64_t divider_en            : 1;  /**< [  0:  0](R/W) Set to 1 to enable the clock divider. The divider counter is reset to 0 when
                                                                 [DIVIDER_EN] is set to 0. */
#else /* Word 0 - Little Endian */
        uint64_t divider_en            : 1;  /**< [  0:  0](R/W) Set to 1 to enable the clock divider. The divider counter is reset to 0 when
                                                                 [DIVIDER_EN] is set to 0. */
        uint64_t clkout_5050_duty      : 1;  /**< [  1:  1](R/W) Clock divider duty cycle:
                                                                 0 = One cycle pulse (i.e., one 30.72 MHz cycle).
                                                                 1 = 50/50 duty-cycle. */
        uint64_t reserved_2            : 1;
        uint64_t free_run              : 1;  /**< [  3:  3](R/W) Set to 1 to enable free running mode. In free running mode, all input
                                                                 1PPS references are ignored. The initial start position is set by
                                                                 BTS_PD1PPS_DIV_CFG1[DIVIDER_START_POS]. */
        uint64_t ref_in_sel            : 3;  /**< [  6:  4](R/W) Select the reference 1PPS source:
                                                                 Use BTS_PD1PPS_DIV_CFG0_REF_IN_SEL_E for the selects. */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bts_pd1pps_div_cfg0_s cn; */
};
typedef union cavm_bts_pd1pps_div_cfg0 cavm_bts_pd1pps_div_cfg0_t;

#define CAVM_BTS_PD1PPS_DIV_CFG0 CAVM_BTS_PD1PPS_DIV_CFG0_FUNC()
static inline uint64_t CAVM_BTS_PD1PPS_DIV_CFG0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BTS_PD1PPS_DIV_CFG0_FUNC(void)
{
    return 0x87e012000240ll;
}

#define typedef_CAVM_BTS_PD1PPS_DIV_CFG0 cavm_bts_pd1pps_div_cfg0_t
#define bustype_CAVM_BTS_PD1PPS_DIV_CFG0 CSR_TYPE_RSL
#define basename_CAVM_BTS_PD1PPS_DIV_CFG0 "BTS_PD1PPS_DIV_CFG0"
#define device_bar_CAVM_BTS_PD1PPS_DIV_CFG0 0x0 /* PF_BAR0 */
#define busnum_CAVM_BTS_PD1PPS_DIV_CFG0 0
#define arguments_CAVM_BTS_PD1PPS_DIV_CFG0 -1,-1,-1,-1

/**
 * Register (RSL) bts_pd1pps_div_cfg1
 *
 * BTS PD Bank 1PPS Divider Configuration 1 Register
 * This register configures the clock divider used to generate the PD_1PPS
 * signal derived from the 30.72 MHz clock (BTS_BFN_CLK). This signal is
 * used by the clock generation block to control RFP timing.
 *
 * When enabled, the divider counts from 0 to [DIVIDER_TC], and then resets
 * to 0. When it resets to zero, it either generates a single cycle pulse, or
 * flips the polarity of the output, depending on the setting of
 * BTS_PD1PPS_DIV_CFG0[CLKOUT_5050_DUTY].
 */
union cavm_bts_pd1pps_div_cfg1
{
    uint64_t u;
    struct cavm_bts_pd1pps_div_cfg1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t divider_start_pos     : 32; /**< [ 63: 32](R/W) Divider start position. When a new value is written to
                                                                 [DIVIDER_START_POS], the counter will reset to 0 the next time the
                                                                 counter value is equal to [DIVIDER_START_POS]. Subsequently, the counter
                                                                 will reset to 0 when the counter is equal to [DIVIDER_TC].

                                                                 Writing [DIVIDER_START_POS] effectively applies a positive phase shift
                                                                 of [DIVIDER_START_POS]+1 cycles to the 1PPS signal.

                                                                 Note that a phase shift is only applied when this value changes, thus
                                                                 it might be necessary to write this field to zero before applying a
                                                                 new phase shift. */
        uint64_t divider_tc            : 32; /**< [ 31:  0](R/W) Divider counter terminal count value.

                                                                 When BTS_PD1PPS_DIV_CFG0[CLKOUT_5050_DUTY]=0, this field should be
                                                                 set to the clock frequency, i.e., 0x1D4C000 (307200000 for the 30.72
                                                                 MHz clock.

                                                                 When BTS_PD1PPS_DIV_CFG0[CLKOUT_5050_DUTY]=1, this field should be
                                                                 set to half the clock frequency, i.e., 0xEA6000 (153600000 for the
                                                                 30.72 MHz clock. */
#else /* Word 0 - Little Endian */
        uint64_t divider_tc            : 32; /**< [ 31:  0](R/W) Divider counter terminal count value.

                                                                 When BTS_PD1PPS_DIV_CFG0[CLKOUT_5050_DUTY]=0, this field should be
                                                                 set to the clock frequency, i.e., 0x1D4C000 (307200000 for the 30.72
                                                                 MHz clock.

                                                                 When BTS_PD1PPS_DIV_CFG0[CLKOUT_5050_DUTY]=1, this field should be
                                                                 set to half the clock frequency, i.e., 0xEA6000 (153600000 for the
                                                                 30.72 MHz clock. */
        uint64_t divider_start_pos     : 32; /**< [ 63: 32](R/W) Divider start position. When a new value is written to
                                                                 [DIVIDER_START_POS], the counter will reset to 0 the next time the
                                                                 counter value is equal to [DIVIDER_START_POS]. Subsequently, the counter
                                                                 will reset to 0 when the counter is equal to [DIVIDER_TC].

                                                                 Writing [DIVIDER_START_POS] effectively applies a positive phase shift
                                                                 of [DIVIDER_START_POS]+1 cycles to the 1PPS signal.

                                                                 Note that a phase shift is only applied when this value changes, thus
                                                                 it might be necessary to write this field to zero before applying a
                                                                 new phase shift. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bts_pd1pps_div_cfg1_s cn; */
};
typedef union cavm_bts_pd1pps_div_cfg1 cavm_bts_pd1pps_div_cfg1_t;

#define CAVM_BTS_PD1PPS_DIV_CFG1 CAVM_BTS_PD1PPS_DIV_CFG1_FUNC()
static inline uint64_t CAVM_BTS_PD1PPS_DIV_CFG1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BTS_PD1PPS_DIV_CFG1_FUNC(void)
{
    return 0x87e012000248ll;
}

#define typedef_CAVM_BTS_PD1PPS_DIV_CFG1 cavm_bts_pd1pps_div_cfg1_t
#define bustype_CAVM_BTS_PD1PPS_DIV_CFG1 CSR_TYPE_RSL
#define basename_CAVM_BTS_PD1PPS_DIV_CFG1 "BTS_PD1PPS_DIV_CFG1"
#define device_bar_CAVM_BTS_PD1PPS_DIV_CFG1 0x0 /* PF_BAR0 */
#define busnum_CAVM_BTS_PD1PPS_DIV_CFG1 0
#define arguments_CAVM_BTS_PD1PPS_DIV_CFG1 -1,-1,-1,-1

/**
 * Register (RSL) bts_pd_history
 *
 * BTS PD Bank History Register
 * This is a scratch register to facilitate saving the values used for PD
 * bank control registers.
 */
union cavm_bts_pd_history
{
    uint64_t u;
    struct cavm_bts_pd_history_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t value                 : 64; /**< [ 63:  0](R/W) Scratch data. */
#else /* Word 0 - Little Endian */
        uint64_t value                 : 64; /**< [ 63:  0](R/W) Scratch data. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bts_pd_history_s cn; */
};
typedef union cavm_bts_pd_history cavm_bts_pd_history_t;

#define CAVM_BTS_PD_HISTORY CAVM_BTS_PD_HISTORY_FUNC()
static inline uint64_t CAVM_BTS_PD_HISTORY_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BTS_PD_HISTORY_FUNC(void)
{
    return 0x87e012000380ll;
}

#define typedef_CAVM_BTS_PD_HISTORY cavm_bts_pd_history_t
#define bustype_CAVM_BTS_PD_HISTORY CSR_TYPE_RSL
#define basename_CAVM_BTS_PD_HISTORY "BTS_PD_HISTORY"
#define device_bar_CAVM_BTS_PD_HISTORY 0x0 /* PF_BAR0 */
#define busnum_CAVM_BTS_PD_HISTORY 0
#define arguments_CAVM_BTS_PD_HISTORY -1,-1,-1,-1

/**
 * Register (RSL) bts_pd_slice#_ctl
 *
 * BTS PD Bank Control Register
 * These registers control the operation of each PD bank.
 *
 * The PD bank must be disabled when changing any of these configuration
 * parameters (i.e., [ENABLE]=0). The PD bank should be enabled with a
 * separate register write after updating the other parameters (i.e., perform
 * one write to change the settings, and use a second write to enable the PD
 * bank).
 */
union cavm_bts_pd_slicex_ctl
{
    uint64_t u;
    struct cavm_bts_pd_slicex_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_9_63         : 55;
        uint64_t mea_clk_sel           : 2;  /**< [  8:  7](R/W) Measurement clock select:
                                                                 0x0 = Locally generated BTS PLL clock, both edges.
                                                                 0x1 = Locally generated BTS PLL clock, rising edge only.
                                                                 0x2, 0x3 = Coprocessor clock, rising edge only.

                                                                 Refer to BTS_PLL_CTL for how to configure the BTS PLL clock.

                                                                 Do not change these during operation. */
        uint64_t ref_in_sel            : 3;  /**< [  6:  4](R/W) Reference 1pps source select.
                                                                 Enumerated by BTS_PD_SLICEX_CTL_REF_IN_SEL_E.
                                                                 Do not change these during operation. */
        uint64_t loop_in_sel           : 3;  /**< [  3:  1](R/W) Loop 1pps source select.
                                                                 Enumerated by BTS_PD_SLICEX_CTL_REF_IN_SEL_E.
                                                                 Do not change these during operation. */
        uint64_t enable                : 1;  /**< [  0:  0](R/W) Set to 1 to enable the PD bank. */
#else /* Word 0 - Little Endian */
        uint64_t enable                : 1;  /**< [  0:  0](R/W) Set to 1 to enable the PD bank. */
        uint64_t loop_in_sel           : 3;  /**< [  3:  1](R/W) Loop 1pps source select.
                                                                 Enumerated by BTS_PD_SLICEX_CTL_REF_IN_SEL_E.
                                                                 Do not change these during operation. */
        uint64_t ref_in_sel            : 3;  /**< [  6:  4](R/W) Reference 1pps source select.
                                                                 Enumerated by BTS_PD_SLICEX_CTL_REF_IN_SEL_E.
                                                                 Do not change these during operation. */
        uint64_t mea_clk_sel           : 2;  /**< [  8:  7](R/W) Measurement clock select:
                                                                 0x0 = Locally generated BTS PLL clock, both edges.
                                                                 0x1 = Locally generated BTS PLL clock, rising edge only.
                                                                 0x2, 0x3 = Coprocessor clock, rising edge only.

                                                                 Refer to BTS_PLL_CTL for how to configure the BTS PLL clock.

                                                                 Do not change these during operation. */
        uint64_t reserved_9_63         : 55;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bts_pd_slicex_ctl_s cn; */
};
typedef union cavm_bts_pd_slicex_ctl cavm_bts_pd_slicex_ctl_t;

static inline uint64_t CAVM_BTS_PD_SLICEX_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BTS_PD_SLICEX_CTL(uint64_t a)
{
    if (a<=5)
        return 0x87e012000300ll + 8ll * ((a) & 0x7);
    __cavm_csr_fatal("BTS_PD_SLICEX_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BTS_PD_SLICEX_CTL(a) cavm_bts_pd_slicex_ctl_t
#define bustype_CAVM_BTS_PD_SLICEX_CTL(a) CSR_TYPE_RSL
#define basename_CAVM_BTS_PD_SLICEX_CTL(a) "BTS_PD_SLICEX_CTL"
#define device_bar_CAVM_BTS_PD_SLICEX_CTL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_BTS_PD_SLICEX_CTL(a) (a)
#define arguments_CAVM_BTS_PD_SLICEX_CTL(a) (a),-1,-1,-1

/**
 * Register (RSL) bts_pd_slice#_oneshot_res
 *
 * BTS PD Bank Slice Status One Shot Result Register
 * This register captures phase difference for each PD bank upon capture request.
 */
union cavm_bts_pd_slicex_oneshot_res
{
    uint64_t u;
    struct cavm_bts_pd_slicex_oneshot_res_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_34_63        : 30;
        uint64_t done                  : 1;  /**< [ 33: 33](RO/H) Phase difference capturing done indication - this bit is set after hardware stores
                                                                 captured value at [CAP_VAL].
                                                                 Hardware zeros this bit upon each capture request. */
        uint64_t cap_val               : 33; /**< [ 32:  0](RO/H) Captured value of PD bank(a). */
#else /* Word 0 - Little Endian */
        uint64_t cap_val               : 33; /**< [ 32:  0](RO/H) Captured value of PD bank(a). */
        uint64_t done                  : 1;  /**< [ 33: 33](RO/H) Phase difference capturing done indication - this bit is set after hardware stores
                                                                 captured value at [CAP_VAL].
                                                                 Hardware zeros this bit upon each capture request. */
        uint64_t reserved_34_63        : 30;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bts_pd_slicex_oneshot_res_s cn; */
};
typedef union cavm_bts_pd_slicex_oneshot_res cavm_bts_pd_slicex_oneshot_res_t;

static inline uint64_t CAVM_BTS_PD_SLICEX_ONESHOT_RES(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BTS_PD_SLICEX_ONESHOT_RES(uint64_t a)
{
    if (a<=5)
        return 0x87e012000500ll + 8ll * ((a) & 0x7);
    __cavm_csr_fatal("BTS_PD_SLICEX_ONESHOT_RES", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BTS_PD_SLICEX_ONESHOT_RES(a) cavm_bts_pd_slicex_oneshot_res_t
#define bustype_CAVM_BTS_PD_SLICEX_ONESHOT_RES(a) CSR_TYPE_RSL
#define basename_CAVM_BTS_PD_SLICEX_ONESHOT_RES(a) "BTS_PD_SLICEX_ONESHOT_RES"
#define device_bar_CAVM_BTS_PD_SLICEX_ONESHOT_RES(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_BTS_PD_SLICEX_ONESHOT_RES(a) (a)
#define arguments_CAVM_BTS_PD_SLICEX_ONESHOT_RES(a) (a),-1,-1,-1

/**
 * Register (RSL) bts_pd_slice#_status
 *
 * BTS PD Bank Slice Status Register
 * This register reports the calculated phase difference for each PD bank.
 *
 * BTS triggers a BTS_INT_SUM_W1C[PDBANKn_DONE] interrupt each time the PD bank
 * completes a measurement and updates this status register.
 */
union cavm_bts_pd_slicex_status
{
    uint64_t u;
    struct cavm_bts_pd_slicex_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_33_63        : 31;
        uint64_t pd_result             : 33; /**< [ 32:  0](RO/H) The phase difference as a signed, two's complement value. A positive value indicates that
                                                                 the REF clock is ahead of LOOP, and a negative value indicates that LOOP is ahead of REF.
                                                                 The phase difference is measured based on the clock selected by
                                                                 BTS_PD_SLICE()_CTL[MEA_CLK_SEL], and can represent either coprocessor-clock cycles,
                                                                 491 MHz cycles, or 982 MHz cycles (1.0183 ns). */
#else /* Word 0 - Little Endian */
        uint64_t pd_result             : 33; /**< [ 32:  0](RO/H) The phase difference as a signed, two's complement value. A positive value indicates that
                                                                 the REF clock is ahead of LOOP, and a negative value indicates that LOOP is ahead of REF.
                                                                 The phase difference is measured based on the clock selected by
                                                                 BTS_PD_SLICE()_CTL[MEA_CLK_SEL], and can represent either coprocessor-clock cycles,
                                                                 491 MHz cycles, or 982 MHz cycles (1.0183 ns). */
        uint64_t reserved_33_63        : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bts_pd_slicex_status_s cn; */
};
typedef union cavm_bts_pd_slicex_status cavm_bts_pd_slicex_status_t;

static inline uint64_t CAVM_BTS_PD_SLICEX_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BTS_PD_SLICEX_STATUS(uint64_t a)
{
    if (a<=5)
        return 0x87e012000340ll + 8ll * ((a) & 0x7);
    __cavm_csr_fatal("BTS_PD_SLICEX_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BTS_PD_SLICEX_STATUS(a) cavm_bts_pd_slicex_status_t
#define bustype_CAVM_BTS_PD_SLICEX_STATUS(a) CSR_TYPE_RSL
#define basename_CAVM_BTS_PD_SLICEX_STATUS(a) "BTS_PD_SLICEX_STATUS"
#define device_bar_CAVM_BTS_PD_SLICEX_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_BTS_PD_SLICEX_STATUS(a) (a)
#define arguments_CAVM_BTS_PD_SLICEX_STATUS(a) (a),-1,-1,-1

/**
 * Register (RSL) bts_pd_slice_oneshot_mode
 *
 * BTS PD Bank Slice Status One Shot Mode Register
 * This register triggers capturing phase difference for each PD bank at
 * BTS_PD_SLICE(0..5)_ONESHOT_MODE_RES upon capture request.
 */
union cavm_bts_pd_slice_oneshot_mode
{
    uint64_t u;
    struct cavm_bts_pd_slice_oneshot_mode_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t capture_pd            : 6;  /**< [  5:  0](R/W/H) Software triggers phase difference capturing request of PD_bank({a}) by writing 1 to
                                                                 [CAPTURE_PD]\<{a}\>. Captured value is stored at
                                                                 BTS_PD_SLICE(0..5)_ONE_SHOT_MODE_RES[CAP_VAL] accordingly.
                                                                 Once value was captured and stored, hardware zeros appropriate CAPTURE_PD bit and sets
                                                                 BTS_PD_SLICE(0..5)_ONESHOT_MODE[DONE] bit accordingly.
                                                                 \<0\> = Capture PD bank 0.
                                                                 \<1\> = Capture PD bank 1.
                                                                 \<2\> = Capture PD bank 2.
                                                                 \<3\> = Capture PD bank 3.
                                                                 \<4\> = Capture PD bank 4.
                                                                 \<5\> = Capture PD bank 5. */
#else /* Word 0 - Little Endian */
        uint64_t capture_pd            : 6;  /**< [  5:  0](R/W/H) Software triggers phase difference capturing request of PD_bank({a}) by writing 1 to
                                                                 [CAPTURE_PD]\<{a}\>. Captured value is stored at
                                                                 BTS_PD_SLICE(0..5)_ONE_SHOT_MODE_RES[CAP_VAL] accordingly.
                                                                 Once value was captured and stored, hardware zeros appropriate CAPTURE_PD bit and sets
                                                                 BTS_PD_SLICE(0..5)_ONESHOT_MODE[DONE] bit accordingly.
                                                                 \<0\> = Capture PD bank 0.
                                                                 \<1\> = Capture PD bank 1.
                                                                 \<2\> = Capture PD bank 2.
                                                                 \<3\> = Capture PD bank 3.
                                                                 \<4\> = Capture PD bank 4.
                                                                 \<5\> = Capture PD bank 5. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bts_pd_slice_oneshot_mode_s cn; */
};
typedef union cavm_bts_pd_slice_oneshot_mode cavm_bts_pd_slice_oneshot_mode_t;

#define CAVM_BTS_PD_SLICE_ONESHOT_MODE CAVM_BTS_PD_SLICE_ONESHOT_MODE_FUNC()
static inline uint64_t CAVM_BTS_PD_SLICE_ONESHOT_MODE_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BTS_PD_SLICE_ONESHOT_MODE_FUNC(void)
{
    return 0x87e012000540ll;
}

#define typedef_CAVM_BTS_PD_SLICE_ONESHOT_MODE cavm_bts_pd_slice_oneshot_mode_t
#define bustype_CAVM_BTS_PD_SLICE_ONESHOT_MODE CSR_TYPE_RSL
#define basename_CAVM_BTS_PD_SLICE_ONESHOT_MODE "BTS_PD_SLICE_ONESHOT_MODE"
#define device_bar_CAVM_BTS_PD_SLICE_ONESHOT_MODE 0x0 /* PF_BAR0 */
#define busnum_CAVM_BTS_PD_SLICE_ONESHOT_MODE 0
#define arguments_CAVM_BTS_PD_SLICE_ONESHOT_MODE -1,-1,-1,-1

/**
 * Register (RSL) bts_pdbfn_div_cfg0
 *
 * BTS 30.72 MHz Divider Configuration 0 Register
 * This register configures the clock divider used to generate the
 * PD_BFN_1PPS signal derived from the 30.72 MHz clock (BTS_BFN_CLK).
 *
 * When [FREE_RUN]=1, the initial alignment depends on when [DIVIDER_EN] is written
 * to 1, and the value in BTS_PDBFN_DIV_CFG1[DIVIDER_START_POS].
 *
 * When [FREE_RUN]=0, the initial alignment will be
 * BTS_PDBFN_DIV_CFG1[DIVIDER_START_POS]+4 cycles after the reference clock
 * selected by [REF_IN_SEL] (where cycles are counted in the 30.72 MHz clock).
 *
 * In both cases, after the initial pulse, subsequent 1PPS pulses are
 * generated at a constant period.
 */
union cavm_bts_pdbfn_div_cfg0
{
    uint64_t u;
    struct cavm_bts_pdbfn_div_cfg0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t ref_in_sel            : 3;  /**< [  6:  4](R/W) Select the reference 1PPS source:
                                                                 Use BTS_PDBFN_DIV_CFG0[REF_IN_SEL] for selects. */
        uint64_t free_run              : 1;  /**< [  3:  3](R/W) Set to 1 to enable free running mode. In free running mode, all input
                                                                 1PPS references are ignored. The initial start position is set by
                                                                 BTS_PDBFN_DIV_CFG1[DIVIDER_START_POS] and the timing of the write to
                                                                 set [DIVIDER_EN]=1. */
        uint64_t clkout_inv            : 1;  /**< [  2:  2](R/W) Set to 1 to inverse the output polarity for the PD_BFN_1PPS
                                                                 signal. */
        uint64_t clkout_5050_duty      : 1;  /**< [  1:  1](R/W) Clock divider duty cycle:
                                                                 0 = One cycle pulse (i.e., one 30.72 MHz cycle).
                                                                 1 = 50/50 duty-cycle. */
        uint64_t divider_en            : 1;  /**< [  0:  0](R/W) Set to 1 to enable the clock divider. The divider counter is reset to 0 when
                                                                 [DIVIDER_EN] is set to 0 and the clock output is disabled. */
#else /* Word 0 - Little Endian */
        uint64_t divider_en            : 1;  /**< [  0:  0](R/W) Set to 1 to enable the clock divider. The divider counter is reset to 0 when
                                                                 [DIVIDER_EN] is set to 0 and the clock output is disabled. */
        uint64_t clkout_5050_duty      : 1;  /**< [  1:  1](R/W) Clock divider duty cycle:
                                                                 0 = One cycle pulse (i.e., one 30.72 MHz cycle).
                                                                 1 = 50/50 duty-cycle. */
        uint64_t clkout_inv            : 1;  /**< [  2:  2](R/W) Set to 1 to inverse the output polarity for the PD_BFN_1PPS
                                                                 signal. */
        uint64_t free_run              : 1;  /**< [  3:  3](R/W) Set to 1 to enable free running mode. In free running mode, all input
                                                                 1PPS references are ignored. The initial start position is set by
                                                                 BTS_PDBFN_DIV_CFG1[DIVIDER_START_POS] and the timing of the write to
                                                                 set [DIVIDER_EN]=1. */
        uint64_t ref_in_sel            : 3;  /**< [  6:  4](R/W) Select the reference 1PPS source:
                                                                 Use BTS_PDBFN_DIV_CFG0[REF_IN_SEL] for selects. */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bts_pdbfn_div_cfg0_s cn; */
};
typedef union cavm_bts_pdbfn_div_cfg0 cavm_bts_pdbfn_div_cfg0_t;

#define CAVM_BTS_PDBFN_DIV_CFG0 CAVM_BTS_PDBFN_DIV_CFG0_FUNC()
static inline uint64_t CAVM_BTS_PDBFN_DIV_CFG0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BTS_PDBFN_DIV_CFG0_FUNC(void)
{
    return 0x87e012000230ll;
}

#define typedef_CAVM_BTS_PDBFN_DIV_CFG0 cavm_bts_pdbfn_div_cfg0_t
#define bustype_CAVM_BTS_PDBFN_DIV_CFG0 CSR_TYPE_RSL
#define basename_CAVM_BTS_PDBFN_DIV_CFG0 "BTS_PDBFN_DIV_CFG0"
#define device_bar_CAVM_BTS_PDBFN_DIV_CFG0 0x0 /* PF_BAR0 */
#define busnum_CAVM_BTS_PDBFN_DIV_CFG0 0
#define arguments_CAVM_BTS_PDBFN_DIV_CFG0 -1,-1,-1,-1

/**
 * Register (RSL) bts_pdbfn_div_cfg1
 *
 * BTS 30.72 MHz Divider Configuration 1 Register
 * This register configures the clock divider used to generate the PD_BFN_1PPS
 * signal derived from the 30.72 MHz clock (BTS_BFN_CLK).
 *
 * When enabled, the divider counts from 0 to [DIVIDER_TC], and then resets
 * to 0. When it resets to zero, it either generates a single cycle pulse, or
 * flips the polarity of the output, depending on the setting of
 * BTS_PDBFN_DIV_CFG0[CLKOUT_5050_DUTY].
 */
union cavm_bts_pdbfn_div_cfg1
{
    uint64_t u;
    struct cavm_bts_pdbfn_div_cfg1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t divider_start_pos     : 32; /**< [ 63: 32](R/W) Divider start position. When a new value is written to
                                                                 [DIVIDER_START_POS], the counter will reset to 0 the next time the
                                                                 counter value is equal to [DIVIDER_START_POS]. Subsequently, the counter
                                                                 will reset to 0 when the counter is equal to [DIVIDER_TC].

                                                                 Writing [DIVIDER_START_POS] effectively applies a positive phase shift
                                                                 of [DIVIDER_START_POS]+1 cycles to the 1PPS signal.

                                                                 Note that a phase shift is only applied when this value changes, thus
                                                                 it might be necessary to write this field to zero before applying a
                                                                 new phase shift. */
        uint64_t divider_tc            : 32; /**< [ 31:  0](R/W) Divider counter terminal count value.

                                                                 When BTS_PDBFN_DIV_CFG0[CLKOUT_5050_DUTY]=0, this field should be
                                                                 set to the clock frequency, i.e., 0x1D4C000 (30720000) for the 30.72
                                                                 MHz clock.

                                                                 When BTS_PDBFN_DIV_CFG0[CLKOUT_5050_DUTY]=1, this field should be
                                                                 set to half the clock frequency, i.e., 0xEA6000 (15360000) for the
                                                                 30.72 MHz clock. */
#else /* Word 0 - Little Endian */
        uint64_t divider_tc            : 32; /**< [ 31:  0](R/W) Divider counter terminal count value.

                                                                 When BTS_PDBFN_DIV_CFG0[CLKOUT_5050_DUTY]=0, this field should be
                                                                 set to the clock frequency, i.e., 0x1D4C000 (30720000) for the 30.72
                                                                 MHz clock.

                                                                 When BTS_PDBFN_DIV_CFG0[CLKOUT_5050_DUTY]=1, this field should be
                                                                 set to half the clock frequency, i.e., 0xEA6000 (15360000) for the
                                                                 30.72 MHz clock. */
        uint64_t divider_start_pos     : 32; /**< [ 63: 32](R/W) Divider start position. When a new value is written to
                                                                 [DIVIDER_START_POS], the counter will reset to 0 the next time the
                                                                 counter value is equal to [DIVIDER_START_POS]. Subsequently, the counter
                                                                 will reset to 0 when the counter is equal to [DIVIDER_TC].

                                                                 Writing [DIVIDER_START_POS] effectively applies a positive phase shift
                                                                 of [DIVIDER_START_POS]+1 cycles to the 1PPS signal.

                                                                 Note that a phase shift is only applied when this value changes, thus
                                                                 it might be necessary to write this field to zero before applying a
                                                                 new phase shift. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bts_pdbfn_div_cfg1_s cn; */
};
typedef union cavm_bts_pdbfn_div_cfg1 cavm_bts_pdbfn_div_cfg1_t;

#define CAVM_BTS_PDBFN_DIV_CFG1 CAVM_BTS_PDBFN_DIV_CFG1_FUNC()
static inline uint64_t CAVM_BTS_PDBFN_DIV_CFG1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BTS_PDBFN_DIV_CFG1_FUNC(void)
{
    return 0x87e012000238ll;
}

#define typedef_CAVM_BTS_PDBFN_DIV_CFG1 cavm_bts_pdbfn_div_cfg1_t
#define bustype_CAVM_BTS_PDBFN_DIV_CFG1 CSR_TYPE_RSL
#define basename_CAVM_BTS_PDBFN_DIV_CFG1 "BTS_PDBFN_DIV_CFG1"
#define device_bar_CAVM_BTS_PDBFN_DIV_CFG1 0x0 /* PF_BAR0 */
#define busnum_CAVM_BTS_PDBFN_DIV_CFG1 0
#define arguments_CAVM_BTS_PDBFN_DIV_CFG1 -1,-1,-1,-1

/**
 * Register (RSL) bts_pll
 *
 * BTS PLL Control Register
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 * Each index of this register controls a PLL on the chip.  The register is used for
 * typical programming operations and is supplemented with the BTS_MAN_PLL
 * register when selected.
 *
 * The register fields are returned to reset values on a chip domain reset unless
 * specifically noted.
 */
union cavm_bts_pll
{
    uint64_t u;
    struct cavm_bts_pll_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t aro_present           : 1;  /**< [ 63: 63](RO/H) Adaptive Ring Oscillator present.
                                                                 0 = ARO is unavailable.  Programming the ARO will have not effect and
                                                                     switching to ARO will result in the clock being stopped.
                                                                 1 = ARO is available. */
        uint64_t pll1_present          : 1;  /**< [ 62: 62](RO/H) PLL1 present.
                                                                 0 = PLL1 is unavailable.  Programming PLL1 will have not effect and
                                                                     switching to PLL1 will result in the clock being stopped.
                                                                 1 = PLL1 is available. */
        uint64_t alt_ref               : 1;  /**< [ 61: 61](R/W/H) Alternate reference clock.
                                                                 0 = Use 100 MHz reference.  [CUR_MUL] and [NEXT_MUL] values are based on 50 MHz increments
                                                                 1 = Use 122.88 MHz alternate reference clock.  [CUR_MUL] and [NEXT_MUL] values are based on
                                                                     30.72 MHz increments.

                                                                 Changing this field typically requires PLL reprogramming and a potential powercycle. */
        uint64_t reserved_60           : 1;
        uint64_t cur_pll_sel           : 3;  /**< [ 59: 57](RO/H) Current PLL selection.
                                                                 Enumerated by BTS_PLL_SEL_E. */
        uint64_t reserved_55_56        : 2;
        uint64_t cur_mul               : 7;  /**< [ 54: 48](RO/H) Current frequency multiplier.
                                                                 If Bypass Clock or [USE_MAN] is selected, calculations must be done by software.
                                                                 The value is limited by [MAX_MUL].

                                                                 Units are based on the PLL reference clock.
                                                                   With [ALT_REF] = 0, multiplier units are 50.00 MHz.
                                                                   With [ALT_REF] = 1, multiplier units are 30.76 MHz.

                                                                 The following values are possible:
                                                                   0 = Uninitialized or powered down PLL selected by [CUR_PLL_SEL].
                                                                   1 = Reserved.
                                                                   2 = Reference clock selected.
                                                                   3 = Runt clock selected.
                                                                   4-70 = Valid clock frequency when [ALT_REF] = 0.
                                                                   4-114 = Valid clock frequency when [ALT_REF] = 1.

                                                                 If NEXT_MAN is set, NEXT_NUL is used to set CUR_MUL but the actual frequency
                                                                 is calculated by:
                                                                         RST_MAN_PLL()[VCO_MUL] / (RST_MAN_PLL()[REF_DIV] * RST_MAN_PLL()[POST_DIV])

                                                                 This field is always set to the lower of [INIT_MUL] and the limit specified by
                                                                 [MAX_MUL] on a chip domain reset. */
        uint64_t reserved_47           : 1;
        uint64_t max_mul               : 7;  /**< [ 46: 40](R/W/H) Maximum PLL multiplier.
                                                                 This field is used to limit the [CUR_MUL] value.
                                                                 A value of zero is considered unlimited.  Once the value
                                                                 of this field is nonzero, any new values written into this field
                                                                 cannot exceed the previous value.  Values 1-5 are reserved
                                                                 since the minimum PLL frequency is at least 300 MHz.

                                                                 This field is reinitialized on a chip domain reset. */
        uint64_t reserved_39           : 1;
        uint64_t init_mul              : 7;  /**< [ 38: 32](R/W) Chip Reset Frequency Multiplier.  Value used to program the PLL on a chip domain
                                                                 reset.  Value is based on 50 MHz.

                                                                 This field is only reinitialized on a cold domain reset. */
        uint64_t reserved_31           : 1;
        uint64_t next_mul              : 7;  /**< [ 30: 24](R/W) Next Frequency Multiplier.  Used to program the PLL if [NEXT_MAN] is clear.

                                                                 Frequency is based on reference clock and [ALT_REF] values.
                                                                   [ALT_REF] = 0, 100.00 MHz reference, units are 50.00 MHz.
                                                                   [ALT_REF] = 1, 122.88 MHz reference, units are 30.76 MHz.

                                                                 Values ranges when [NEXT_MAN] = 0 are:
                                                                   [ALT_REF] = 0, 4 - 70
                                                                   [ALT_REF] = 1, 4 - 114

                                                                 When [NEXT_MAN] = 1. Values have no effect on the hardware but can
                                                                 be used for software.

                                                                 In all cases values specified will appear in CUR_MUL after programming.

                                                                 This field is always set to [INIT_MUL] on a chip domain reset. */
        uint64_t next_pll_sel          : 3;  /**< [ 23: 21](R/W) Next PLL Selection.  This field is used to select which clock source is being
                                                                 selected or programmed.  It affects both the BTS_PLL and BTS_PLL_MAN registers.
                                                                 Both the [NEXT_PGM] and [NEXT_SWITCH] fields use this information to start PLL operations
                                                                 and the value must not be changed while operations are taking place.
                                                                 Enumerated by BTS_PLL_SEL_E. */
        uint64_t reserved_18_20        : 3;
        uint64_t next_man              : 1;  /**< [ 17: 17](R/W) Determine PLL controls for next operation using contents of BTS_MAN_PLL() to specify values.
                                                                 0 = Use [NEXT_MUL] to determine settings and show results in [CUR_MUL].
                                                                 1 = Use BTS_MAN_PLL fields to determine settings and set [CUR_MUL] to 0. */
        uint64_t next_pgm              : 1;  /**< [ 16: 16](R/W/H) Program PLL specified by [NEXT_PLL_SEL] using [NEXT_MUL] if [NEXT_MAN] is clear or
                                                                 using BTS_MAN_PLL() fields if set. Hardware automatically
                                                                 clears this field when both PLL is updated and any delay specified
                                                                 in [NEXT_SWITCH] has completed. */
        uint64_t reserved_14_15        : 2;
        uint64_t next_switch           : 14; /**< [ 13:  0](R/W/H) Switch the PLL specified by [NEXT_PLL_SEL] after delaying this value times 10nS.
                                                                 When set to a nonzero value, the hardware will wait for
                                                                 any PLL programming to complete and then switch after the specified number of
                                                                 100 MHz clocks. Hardware will add additional clocks if required. */
#else /* Word 0 - Little Endian */
        uint64_t next_switch           : 14; /**< [ 13:  0](R/W/H) Switch the PLL specified by [NEXT_PLL_SEL] after delaying this value times 10nS.
                                                                 When set to a nonzero value, the hardware will wait for
                                                                 any PLL programming to complete and then switch after the specified number of
                                                                 100 MHz clocks. Hardware will add additional clocks if required. */
        uint64_t reserved_14_15        : 2;
        uint64_t next_pgm              : 1;  /**< [ 16: 16](R/W/H) Program PLL specified by [NEXT_PLL_SEL] using [NEXT_MUL] if [NEXT_MAN] is clear or
                                                                 using BTS_MAN_PLL() fields if set. Hardware automatically
                                                                 clears this field when both PLL is updated and any delay specified
                                                                 in [NEXT_SWITCH] has completed. */
        uint64_t next_man              : 1;  /**< [ 17: 17](R/W) Determine PLL controls for next operation using contents of BTS_MAN_PLL() to specify values.
                                                                 0 = Use [NEXT_MUL] to determine settings and show results in [CUR_MUL].
                                                                 1 = Use BTS_MAN_PLL fields to determine settings and set [CUR_MUL] to 0. */
        uint64_t reserved_18_20        : 3;
        uint64_t next_pll_sel          : 3;  /**< [ 23: 21](R/W) Next PLL Selection.  This field is used to select which clock source is being
                                                                 selected or programmed.  It affects both the BTS_PLL and BTS_PLL_MAN registers.
                                                                 Both the [NEXT_PGM] and [NEXT_SWITCH] fields use this information to start PLL operations
                                                                 and the value must not be changed while operations are taking place.
                                                                 Enumerated by BTS_PLL_SEL_E. */
        uint64_t next_mul              : 7;  /**< [ 30: 24](R/W) Next Frequency Multiplier.  Used to program the PLL if [NEXT_MAN] is clear.

                                                                 Frequency is based on reference clock and [ALT_REF] values.
                                                                   [ALT_REF] = 0, 100.00 MHz reference, units are 50.00 MHz.
                                                                   [ALT_REF] = 1, 122.88 MHz reference, units are 30.76 MHz.

                                                                 Values ranges when [NEXT_MAN] = 0 are:
                                                                   [ALT_REF] = 0, 4 - 70
                                                                   [ALT_REF] = 1, 4 - 114

                                                                 When [NEXT_MAN] = 1. Values have no effect on the hardware but can
                                                                 be used for software.

                                                                 In all cases values specified will appear in CUR_MUL after programming.

                                                                 This field is always set to [INIT_MUL] on a chip domain reset. */
        uint64_t reserved_31           : 1;
        uint64_t init_mul              : 7;  /**< [ 38: 32](R/W) Chip Reset Frequency Multiplier.  Value used to program the PLL on a chip domain
                                                                 reset.  Value is based on 50 MHz.

                                                                 This field is only reinitialized on a cold domain reset. */
        uint64_t reserved_39           : 1;
        uint64_t max_mul               : 7;  /**< [ 46: 40](R/W/H) Maximum PLL multiplier.
                                                                 This field is used to limit the [CUR_MUL] value.
                                                                 A value of zero is considered unlimited.  Once the value
                                                                 of this field is nonzero, any new values written into this field
                                                                 cannot exceed the previous value.  Values 1-5 are reserved
                                                                 since the minimum PLL frequency is at least 300 MHz.

                                                                 This field is reinitialized on a chip domain reset. */
        uint64_t reserved_47           : 1;
        uint64_t cur_mul               : 7;  /**< [ 54: 48](RO/H) Current frequency multiplier.
                                                                 If Bypass Clock or [USE_MAN] is selected, calculations must be done by software.
                                                                 The value is limited by [MAX_MUL].

                                                                 Units are based on the PLL reference clock.
                                                                   With [ALT_REF] = 0, multiplier units are 50.00 MHz.
                                                                   With [ALT_REF] = 1, multiplier units are 30.76 MHz.

                                                                 The following values are possible:
                                                                   0 = Uninitialized or powered down PLL selected by [CUR_PLL_SEL].
                                                                   1 = Reserved.
                                                                   2 = Reference clock selected.
                                                                   3 = Runt clock selected.
                                                                   4-70 = Valid clock frequency when [ALT_REF] = 0.
                                                                   4-114 = Valid clock frequency when [ALT_REF] = 1.

                                                                 If NEXT_MAN is set, NEXT_NUL is used to set CUR_MUL but the actual frequency
                                                                 is calculated by:
                                                                         RST_MAN_PLL()[VCO_MUL] / (RST_MAN_PLL()[REF_DIV] * RST_MAN_PLL()[POST_DIV])

                                                                 This field is always set to the lower of [INIT_MUL] and the limit specified by
                                                                 [MAX_MUL] on a chip domain reset. */
        uint64_t reserved_55_56        : 2;
        uint64_t cur_pll_sel           : 3;  /**< [ 59: 57](RO/H) Current PLL selection.
                                                                 Enumerated by BTS_PLL_SEL_E. */
        uint64_t reserved_60           : 1;
        uint64_t alt_ref               : 1;  /**< [ 61: 61](R/W/H) Alternate reference clock.
                                                                 0 = Use 100 MHz reference.  [CUR_MUL] and [NEXT_MUL] values are based on 50 MHz increments
                                                                 1 = Use 122.88 MHz alternate reference clock.  [CUR_MUL] and [NEXT_MUL] values are based on
                                                                     30.72 MHz increments.

                                                                 Changing this field typically requires PLL reprogramming and a potential powercycle. */
        uint64_t pll1_present          : 1;  /**< [ 62: 62](RO/H) PLL1 present.
                                                                 0 = PLL1 is unavailable.  Programming PLL1 will have not effect and
                                                                     switching to PLL1 will result in the clock being stopped.
                                                                 1 = PLL1 is available. */
        uint64_t aro_present           : 1;  /**< [ 63: 63](RO/H) Adaptive Ring Oscillator present.
                                                                 0 = ARO is unavailable.  Programming the ARO will have not effect and
                                                                     switching to ARO will result in the clock being stopped.
                                                                 1 = ARO is available. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bts_pll_s cn; */
};
typedef union cavm_bts_pll cavm_bts_pll_t;

#define CAVM_BTS_PLL CAVM_BTS_PLL_FUNC()
static inline uint64_t CAVM_BTS_PLL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BTS_PLL_FUNC(void)
{
    return 0x87e012000028ll;
}

#define typedef_CAVM_BTS_PLL cavm_bts_pll_t
#define bustype_CAVM_BTS_PLL CSR_TYPE_RSL
#define basename_CAVM_BTS_PLL "BTS_PLL"
#define device_bar_CAVM_BTS_PLL 0x0 /* PF_BAR0 */
#define busnum_CAVM_BTS_PLL 0
#define arguments_CAVM_BTS_PLL -1,-1,-1,-1

/**
 * Register (RSL) bts_pll_ctl
 *
 * BTS PD Bank PLL Control Register
 * This register controls the sample clock frequency into PD Bank slices,
 * and the BTS Clock time-reference in the TIM.
 */
union cavm_bts_pll_ctl
{
    uint64_t u;
    struct cavm_bts_pll_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_37_63        : 27;
        uint64_t alt_ref_clk_sel       : 2;  /**< [ 36: 35](RAZ) Reserved. */
        uint64_t reserved_33_34        : 2;
        uint64_t pll_bypass            : 1;  /**< [ 32: 32](R/W) Reserved. */
        uint64_t reserved_30_31        : 2;
        uint64_t ref_clk_sel           : 2;  /**< [ 29: 28](R/W) Reference clock select:
                                                                 0x0 = Reserved.
                                                                 0x1 = GPIO clock input. 30.72 MHz (BTS_BFN_CLK).
                                                                 0x2 = 100 MHz reference clock.

                                                                 Do not change these during operation. */
        uint64_t reserved_21_27        : 7;
        uint64_t ps_en                 : 3;  /**< [ 20: 18](R/W) Reserved. */
        uint64_t reserved_12_17        : 6;
        uint64_t en                    : 1;  /**< [ 11: 11](R/W) Reserved. */
        uint64_t reserved_9_10         : 2;
        uint64_t clkf                  : 9;  /**< [  8:  0](R/W) Reserved. */
#else /* Word 0 - Little Endian */
        uint64_t clkf                  : 9;  /**< [  8:  0](R/W) Reserved. */
        uint64_t reserved_9_10         : 2;
        uint64_t en                    : 1;  /**< [ 11: 11](R/W) Reserved. */
        uint64_t reserved_12_17        : 6;
        uint64_t ps_en                 : 3;  /**< [ 20: 18](R/W) Reserved. */
        uint64_t reserved_21_27        : 7;
        uint64_t ref_clk_sel           : 2;  /**< [ 29: 28](R/W) Reference clock select:
                                                                 0x0 = Reserved.
                                                                 0x1 = GPIO clock input. 30.72 MHz (BTS_BFN_CLK).
                                                                 0x2 = 100 MHz reference clock.

                                                                 Do not change these during operation. */
        uint64_t reserved_30_31        : 2;
        uint64_t pll_bypass            : 1;  /**< [ 32: 32](R/W) Reserved. */
        uint64_t reserved_33_34        : 2;
        uint64_t alt_ref_clk_sel       : 2;  /**< [ 36: 35](RAZ) Reserved. */
        uint64_t reserved_37_63        : 27;
#endif /* Word 0 - End */
    } s;
    struct cavm_bts_pll_ctl_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_37_63        : 27;
        uint64_t alt_ref_clk_sel       : 2;  /**< [ 36: 35](RAZ) Reserved. */
        uint64_t reserved_33_34        : 2;
        uint64_t pll_bypass            : 1;  /**< [ 32: 32](R/W) Reserved. */
        uint64_t reserved_30_31        : 2;
        uint64_t ref_clk_sel           : 2;  /**< [ 29: 28](R/W) Reference clock select:
                                                                 0x0 = Reserved.
                                                                 0x1 = GPIO clock input. 30.72 MHz (BTS_BFN_CLK).
                                                                 0x2 = 100 MHz reference clock.

                                                                 Do not change these during operation. */
        uint64_t reserved_26_27        : 2;
        uint64_t reserved_21_25        : 5;
        uint64_t ps_en                 : 3;  /**< [ 20: 18](R/W) Reserved. */
        uint64_t reserved_12_17        : 6;
        uint64_t en                    : 1;  /**< [ 11: 11](R/W) Reserved. */
        uint64_t reserved_9_10         : 2;
        uint64_t clkf                  : 9;  /**< [  8:  0](R/W) Reserved. */
#else /* Word 0 - Little Endian */
        uint64_t clkf                  : 9;  /**< [  8:  0](R/W) Reserved. */
        uint64_t reserved_9_10         : 2;
        uint64_t en                    : 1;  /**< [ 11: 11](R/W) Reserved. */
        uint64_t reserved_12_17        : 6;
        uint64_t ps_en                 : 3;  /**< [ 20: 18](R/W) Reserved. */
        uint64_t reserved_21_25        : 5;
        uint64_t reserved_26_27        : 2;
        uint64_t ref_clk_sel           : 2;  /**< [ 29: 28](R/W) Reference clock select:
                                                                 0x0 = Reserved.
                                                                 0x1 = GPIO clock input. 30.72 MHz (BTS_BFN_CLK).
                                                                 0x2 = 100 MHz reference clock.

                                                                 Do not change these during operation. */
        uint64_t reserved_30_31        : 2;
        uint64_t pll_bypass            : 1;  /**< [ 32: 32](R/W) Reserved. */
        uint64_t reserved_33_34        : 2;
        uint64_t alt_ref_clk_sel       : 2;  /**< [ 36: 35](RAZ) Reserved. */
        uint64_t reserved_37_63        : 27;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_bts_pll_ctl cavm_bts_pll_ctl_t;

#define CAVM_BTS_PLL_CTL CAVM_BTS_PLL_CTL_FUNC()
static inline uint64_t CAVM_BTS_PLL_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BTS_PLL_CTL_FUNC(void)
{
    return 0x87e012000000ll;
}

#define typedef_CAVM_BTS_PLL_CTL cavm_bts_pll_ctl_t
#define bustype_CAVM_BTS_PLL_CTL CSR_TYPE_RSL
#define basename_CAVM_BTS_PLL_CTL "BTS_PLL_CTL"
#define device_bar_CAVM_BTS_PLL_CTL 0x0 /* PF_BAR0 */
#define busnum_CAVM_BTS_PLL_CTL 0
#define arguments_CAVM_BTS_PLL_CTL -1,-1,-1,-1

/**
 * Register (RSL) bts_pll_pc
 *
 * BTS PLL Counter Register
 */
union cavm_bts_pll_pc
{
    uint64_t u;
    struct cavm_bts_pll_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cnt                   : 64; /**< [ 63:  0](R/W/H) Counts each 16th rising edge of the PLL output clock. */
#else /* Word 0 - Little Endian */
        uint64_t cnt                   : 64; /**< [ 63:  0](R/W/H) Counts each 16th rising edge of the PLL output clock. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bts_pll_pc_s cn; */
};
typedef union cavm_bts_pll_pc cavm_bts_pll_pc_t;

#define CAVM_BTS_PLL_PC CAVM_BTS_PLL_PC_FUNC()
static inline uint64_t CAVM_BTS_PLL_PC_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BTS_PLL_PC_FUNC(void)
{
    return 0x87e0120000a0ll;
}

#define typedef_CAVM_BTS_PLL_PC cavm_bts_pll_pc_t
#define bustype_CAVM_BTS_PLL_PC CSR_TYPE_RSL
#define basename_CAVM_BTS_PLL_PC "BTS_PLL_PC"
#define device_bar_CAVM_BTS_PLL_PC 0x0 /* PF_BAR0 */
#define busnum_CAVM_BTS_PLL_PC 0
#define arguments_CAVM_BTS_PLL_PC -1,-1,-1,-1

/**
 * Register (RSL) bts_ptp_1pps_cfg
 *
 * BTS PTP 1PPS Configuration Register
 */
union cavm_bts_ptp_1pps_cfg
{
    uint64_t u;
    struct cavm_bts_ptp_1pps_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t reverse               : 1;  /**< [  0:  0](R/W) Set to 1 to invert the polarity of the PTP_1PPS signal. */
#else /* Word 0 - Little Endian */
        uint64_t reverse               : 1;  /**< [  0:  0](R/W) Set to 1 to invert the polarity of the PTP_1PPS signal. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bts_ptp_1pps_cfg_s cn; */
};
typedef union cavm_bts_ptp_1pps_cfg cavm_bts_ptp_1pps_cfg_t;

#define CAVM_BTS_PTP_1PPS_CFG CAVM_BTS_PTP_1PPS_CFG_FUNC()
static inline uint64_t CAVM_BTS_PTP_1PPS_CFG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BTS_PTP_1PPS_CFG_FUNC(void)
{
    return 0x87e012000258ll;
}

#define typedef_CAVM_BTS_PTP_1PPS_CFG cavm_bts_ptp_1pps_cfg_t
#define bustype_CAVM_BTS_PTP_1PPS_CFG CSR_TYPE_RSL
#define basename_CAVM_BTS_PTP_1PPS_CFG "BTS_PTP_1PPS_CFG"
#define device_bar_CAVM_BTS_PTP_1PPS_CFG 0x0 /* PF_BAR0 */
#define busnum_CAVM_BTS_PTP_1PPS_CFG 0
#define arguments_CAVM_BTS_PTP_1PPS_CFG -1,-1,-1,-1

/**
 * Register (RSL) bts_pwm_ctl
 *
 * BTS PWM Control Register
 */
union cavm_bts_pwm_ctl
{
    uint64_t u;
    struct cavm_bts_pwm_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_59_63        : 5;
        uint64_t clk_sel               : 2;  /**< [ 58: 57](R/W) Select the clock for the PWM module. Must not be changed while operating.
                                                                 0x0 = Refclk (100 MHz).
                                                                 0x1 = PLL output (should be but not guaranteed to be 491 MHz clock).
                                                                 0x2 = Coprocessor-clock (use caution if coprocessor-clock can change frequency).
                                                                 0x3 = Reserved. */
        uint64_t reserved_56           : 1;
        uint64_t fall_pos              : 20; /**< [ 55: 36](R/W) Pulse low duration minus one, measured in ticks, as determined by
                                                                 [TICK_SEL]. */
        uint64_t reserved_28_35        : 8;
        uint64_t rise_pos              : 20; /**< [ 27:  8](R/W) Pulse high duration minus one, measured in ticks, as determined by
                                                                 [TICK_SEL]. */
        uint64_t reserved_4_7          : 4;
        uint64_t tick_sel              : 3;  /**< [  3:  1](R/W) PWM tick clock select. enumerated by BTS_PWM_CTL_TICK_SEL_E. */
        uint64_t enable                : 1;  /**< [  0:  0](R/W) Set to 1 to enable PWM clock and output. */
#else /* Word 0 - Little Endian */
        uint64_t enable                : 1;  /**< [  0:  0](R/W) Set to 1 to enable PWM clock and output. */
        uint64_t tick_sel              : 3;  /**< [  3:  1](R/W) PWM tick clock select. enumerated by BTS_PWM_CTL_TICK_SEL_E. */
        uint64_t reserved_4_7          : 4;
        uint64_t rise_pos              : 20; /**< [ 27:  8](R/W) Pulse high duration minus one, measured in ticks, as determined by
                                                                 [TICK_SEL]. */
        uint64_t reserved_28_35        : 8;
        uint64_t fall_pos              : 20; /**< [ 55: 36](R/W) Pulse low duration minus one, measured in ticks, as determined by
                                                                 [TICK_SEL]. */
        uint64_t reserved_56           : 1;
        uint64_t clk_sel               : 2;  /**< [ 58: 57](R/W) Select the clock for the PWM module. Must not be changed while operating.
                                                                 0x0 = Refclk (100 MHz).
                                                                 0x1 = PLL output (should be but not guaranteed to be 491 MHz clock).
                                                                 0x2 = Coprocessor-clock (use caution if coprocessor-clock can change frequency).
                                                                 0x3 = Reserved. */
        uint64_t reserved_59_63        : 5;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bts_pwm_ctl_s cn; */
};
typedef union cavm_bts_pwm_ctl cavm_bts_pwm_ctl_t;

#define CAVM_BTS_PWM_CTL CAVM_BTS_PWM_CTL_FUNC()
static inline uint64_t CAVM_BTS_PWM_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BTS_PWM_CTL_FUNC(void)
{
    return 0x87e012000440ll;
}

#define typedef_CAVM_BTS_PWM_CTL cavm_bts_pwm_ctl_t
#define bustype_CAVM_BTS_PWM_CTL CSR_TYPE_RSL
#define basename_CAVM_BTS_PWM_CTL "BTS_PWM_CTL"
#define device_bar_CAVM_BTS_PWM_CTL 0x0 /* PF_BAR0 */
#define busnum_CAVM_BTS_PWM_CTL 0
#define arguments_CAVM_BTS_PWM_CTL -1,-1,-1,-1

/**
 * Register (RSL) bts_test_pll
 *
 * BTS PLL Test Register
 */
union cavm_bts_test_pll
{
    uint64_t u;
    struct cavm_bts_test_pll_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t test_rsvd             : 3;  /**< [ 47: 45](R/W) Reserve test bits sent to the PLL. */
        uint64_t test_ana              : 5;  /**< [ 44: 40](R/W) Analog test port mux selection used for selected PLL.
                                                                 Analog output not implemented on BTS. */
        uint64_t reserved_35_39        : 5;
        uint64_t testclk_pll1          : 1;  /**< [ 34: 34](R/W) Test Clock source selection.
                                                                   0 = TEST_CLKOUT Based on PLL0
                                                                   1 = TEST_CLKOUT Based on PLL1 */
        uint64_t msc_enable            : 1;  /**< [ 33: 33](R/W/H) Enable diagnostic output.  Setting this bit causes the PLL to output
                                                                 to the common MSC_CLKOUT and MSC_LOCK ports.  No more than one
                                                                 [MSC_ENABLE] may be set at a time.

                                                                 This field is reinitialized on a cold domain reset. */
        uint64_t stop_clk              : 1;  /**< [ 32: 32](R/W/H) PLL output stop control.  When this field is set along with a positive,
                                                                 this will start the counter at [STOP_CNT] and stop the output clock when the
                                                                 counter reaches zero.  Writing this bit to a 0 will re-start the clock.
                                                                 Reading this value as a 1 along with [STOP_CNT] = 0 indicates the clock has
                                                                 been stopped. */
        uint64_t stop_cnt              : 32; /**< [ 31:  0](R/W/H) Counter Delay to stop PLL output.
                                                                 The counter decrements every PLL output clock.  Value should be 0 if not used.
                                                                 When enabled minimum setting should be greater than 2. */
#else /* Word 0 - Little Endian */
        uint64_t stop_cnt              : 32; /**< [ 31:  0](R/W/H) Counter Delay to stop PLL output.
                                                                 The counter decrements every PLL output clock.  Value should be 0 if not used.
                                                                 When enabled minimum setting should be greater than 2. */
        uint64_t stop_clk              : 1;  /**< [ 32: 32](R/W/H) PLL output stop control.  When this field is set along with a positive,
                                                                 this will start the counter at [STOP_CNT] and stop the output clock when the
                                                                 counter reaches zero.  Writing this bit to a 0 will re-start the clock.
                                                                 Reading this value as a 1 along with [STOP_CNT] = 0 indicates the clock has
                                                                 been stopped. */
        uint64_t msc_enable            : 1;  /**< [ 33: 33](R/W/H) Enable diagnostic output.  Setting this bit causes the PLL to output
                                                                 to the common MSC_CLKOUT and MSC_LOCK ports.  No more than one
                                                                 [MSC_ENABLE] may be set at a time.

                                                                 This field is reinitialized on a cold domain reset. */
        uint64_t testclk_pll1          : 1;  /**< [ 34: 34](R/W) Test Clock source selection.
                                                                   0 = TEST_CLKOUT Based on PLL0
                                                                   1 = TEST_CLKOUT Based on PLL1 */
        uint64_t reserved_35_39        : 5;
        uint64_t test_ana              : 5;  /**< [ 44: 40](R/W) Analog test port mux selection used for selected PLL.
                                                                 Analog output not implemented on BTS. */
        uint64_t test_rsvd             : 3;  /**< [ 47: 45](R/W) Reserve test bits sent to the PLL. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bts_test_pll_s cn; */
};
typedef union cavm_bts_test_pll cavm_bts_test_pll_t;

#define CAVM_BTS_TEST_PLL CAVM_BTS_TEST_PLL_FUNC()
static inline uint64_t CAVM_BTS_TEST_PLL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BTS_TEST_PLL_FUNC(void)
{
    return 0x87e012000038ll;
}

#define typedef_CAVM_BTS_TEST_PLL cavm_bts_test_pll_t
#define bustype_CAVM_BTS_TEST_PLL CSR_TYPE_RSL
#define basename_CAVM_BTS_TEST_PLL "BTS_TEST_PLL"
#define device_bar_CAVM_BTS_TEST_PLL 0x0 /* PF_BAR0 */
#define busnum_CAVM_BTS_TEST_PLL 0
#define arguments_CAVM_BTS_TEST_PLL -1,-1,-1,-1

/**
 * Register (RSL) bts_tp_mux_sel
 *
 * BTS Test Point Mux Select Register
 */
union cavm_bts_tp_mux_sel
{
    uint64_t u;
    struct cavm_bts_tp_mux_sel_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t tp4_sel               : 4;  /**< [ 15: 12](R/W) Select the source for the BTS_TP4 output signal:
                                                                 0x0 = PD bank 0 PD positive done.
                                                                 0x1 = PD bank 1 PD positive done.
                                                                 0x2 = PD bank 2 PD positive done.
                                                                 0x3 = PD bank 3 PD positive done.
                                                                 0x4 = PD bank 4 PD positive done.
                                                                 0x5 = PD bank 5 PD positive done.
                                                                 0x6 = PD_1PPS.
                                                                 0x7 = Reserved.
                                                                 0x8 = PD bank 0 PD negative clear.
                                                                 0x9 = PD bank 1 PD negative clear.
                                                                 0xA = PD bank 2 PD negative clear.
                                                                 0xB = PD bank 3 PD negative clear.
                                                                 0xC = PD bank 4 PD negative clear.
                                                                 0xD = PD bank 5 PD negative clear.
                                                                 0xE = Reserved.
                                                                 0xF = 0. */
        uint64_t tp3_sel               : 4;  /**< [ 11:  8](R/W) Select the source for the BTS_TP3 output signal:
                                                                 0x0 = PD bank 0 PD positive clear.
                                                                 0x1 = PD bank 1 PD positive clear.
                                                                 0x2 = PD bank 2 PD positive clear.
                                                                 0x3 = PD bank 3 PD positive clear.
                                                                 0x4 = PD bank 4 PD positive clear.
                                                                 0x5 = PD bank 5 PD positive clear.
                                                                 0x6 = CG_1pps.
                                                                 0x7 = Reserved.
                                                                 0x8 = PD bank 0 PD negative done.
                                                                 0x9 = PD bank 1 PD negative done.
                                                                 0xA = PD bank 2 PD negative done.
                                                                 0xB = PD bank 3 PD negative done.
                                                                 0xC = PD bank 4 PD negative done.
                                                                 0xD = PD bank 5 PD negative done.
                                                                 0xE = Reserved.
                                                                 0xF = 0. */
        uint64_t tp2_sel               : 4;  /**< [  7:  4](R/W) Select the source for the BTS_TP2 output signal:
                                                                 0x0 = PD bank 0 LOOP_1pps.
                                                                 0x1 = PD bank 1 LOOP_1pps.
                                                                 0x2 = PD bank 2 LOOP_1pps.
                                                                 0x3 = PD bank 3 LOOP_1pps.
                                                                 0x4 = PD bank 4 LOOP_1pps.
                                                                 0x5 = PD bank 5 LOOP_1pps.
                                                                 0x6 = PLL out clk /16.
                                                                 0x7-0xE = Reserved.
                                                                 0xF = 0. */
        uint64_t tp1_sel               : 4;  /**< [  3:  0](R/W) Select the source for the BTS_TP1 output signal:
                                                                 0x0 = PD bank 0 REF_1pps.
                                                                 0x1 = PD bank 1 REF_1pps.
                                                                 0x2 = PD bank 2 REF_1pps.
                                                                 0x3 = PD bank 3 REF_1pps.
                                                                 0x4 = PD bank 4 REF_1pps.
                                                                 0x5 = PD bank 5 REF_1pps.
                                                                 0x6-0xE = Reserved.
                                                                 0xF = 0. */
#else /* Word 0 - Little Endian */
        uint64_t tp1_sel               : 4;  /**< [  3:  0](R/W) Select the source for the BTS_TP1 output signal:
                                                                 0x0 = PD bank 0 REF_1pps.
                                                                 0x1 = PD bank 1 REF_1pps.
                                                                 0x2 = PD bank 2 REF_1pps.
                                                                 0x3 = PD bank 3 REF_1pps.
                                                                 0x4 = PD bank 4 REF_1pps.
                                                                 0x5 = PD bank 5 REF_1pps.
                                                                 0x6-0xE = Reserved.
                                                                 0xF = 0. */
        uint64_t tp2_sel               : 4;  /**< [  7:  4](R/W) Select the source for the BTS_TP2 output signal:
                                                                 0x0 = PD bank 0 LOOP_1pps.
                                                                 0x1 = PD bank 1 LOOP_1pps.
                                                                 0x2 = PD bank 2 LOOP_1pps.
                                                                 0x3 = PD bank 3 LOOP_1pps.
                                                                 0x4 = PD bank 4 LOOP_1pps.
                                                                 0x5 = PD bank 5 LOOP_1pps.
                                                                 0x6 = PLL out clk /16.
                                                                 0x7-0xE = Reserved.
                                                                 0xF = 0. */
        uint64_t tp3_sel               : 4;  /**< [ 11:  8](R/W) Select the source for the BTS_TP3 output signal:
                                                                 0x0 = PD bank 0 PD positive clear.
                                                                 0x1 = PD bank 1 PD positive clear.
                                                                 0x2 = PD bank 2 PD positive clear.
                                                                 0x3 = PD bank 3 PD positive clear.
                                                                 0x4 = PD bank 4 PD positive clear.
                                                                 0x5 = PD bank 5 PD positive clear.
                                                                 0x6 = CG_1pps.
                                                                 0x7 = Reserved.
                                                                 0x8 = PD bank 0 PD negative done.
                                                                 0x9 = PD bank 1 PD negative done.
                                                                 0xA = PD bank 2 PD negative done.
                                                                 0xB = PD bank 3 PD negative done.
                                                                 0xC = PD bank 4 PD negative done.
                                                                 0xD = PD bank 5 PD negative done.
                                                                 0xE = Reserved.
                                                                 0xF = 0. */
        uint64_t tp4_sel               : 4;  /**< [ 15: 12](R/W) Select the source for the BTS_TP4 output signal:
                                                                 0x0 = PD bank 0 PD positive done.
                                                                 0x1 = PD bank 1 PD positive done.
                                                                 0x2 = PD bank 2 PD positive done.
                                                                 0x3 = PD bank 3 PD positive done.
                                                                 0x4 = PD bank 4 PD positive done.
                                                                 0x5 = PD bank 5 PD positive done.
                                                                 0x6 = PD_1PPS.
                                                                 0x7 = Reserved.
                                                                 0x8 = PD bank 0 PD negative clear.
                                                                 0x9 = PD bank 1 PD negative clear.
                                                                 0xA = PD bank 2 PD negative clear.
                                                                 0xB = PD bank 3 PD negative clear.
                                                                 0xC = PD bank 4 PD negative clear.
                                                                 0xD = PD bank 5 PD negative clear.
                                                                 0xE = Reserved.
                                                                 0xF = 0. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bts_tp_mux_sel_s cn; */
};
typedef union cavm_bts_tp_mux_sel cavm_bts_tp_mux_sel_t;

#define CAVM_BTS_TP_MUX_SEL CAVM_BTS_TP_MUX_SEL_FUNC()
static inline uint64_t CAVM_BTS_TP_MUX_SEL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BTS_TP_MUX_SEL_FUNC(void)
{
    return 0x87e012000480ll;
}

#define typedef_CAVM_BTS_TP_MUX_SEL cavm_bts_tp_mux_sel_t
#define bustype_CAVM_BTS_TP_MUX_SEL CSR_TYPE_RSL
#define basename_CAVM_BTS_TP_MUX_SEL "BTS_TP_MUX_SEL"
#define device_bar_CAVM_BTS_TP_MUX_SEL 0x0 /* PF_BAR0 */
#define busnum_CAVM_BTS_TP_MUX_SEL 0
#define arguments_CAVM_BTS_TP_MUX_SEL -1,-1,-1,-1

#endif /* __CAVM_CSRS_BTS_H__ */
