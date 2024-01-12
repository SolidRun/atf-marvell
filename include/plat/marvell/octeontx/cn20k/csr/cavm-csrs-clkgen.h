#ifndef __CAVM_CSRS_CLKGEN_H__
#define __CAVM_CSRS_CLKGEN_H__
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
 * CLKGEN.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration clkgen_bar_e
 *
 * CLKGEN Base Address Register Enumeration
 * Normalized Description.
 */
#define CAVM_CLKGEN_BAR_E_CLKGEN_PF_BAR0 (0xc01c04000000ll)
#define CAVM_CLKGEN_BAR_E_CLKGEN_PF_BAR0_SIZE 0x10000ull

/**
 * Enumeration clkgen_sel_e
 *
 * CLKGEN Source Selection Enumeration
 * Normalized Description.
 */
#define CAVM_CLKGEN_SEL_E_ARO (6)
#define CAVM_CLKGEN_SEL_E_BYPASS (2)
#define CAVM_CLKGEN_SEL_E_OFF (3)
#define CAVM_CLKGEN_SEL_E_PLL0 (4)
#define CAVM_CLKGEN_SEL_E_PLL1 (5)
#define CAVM_CLKGEN_SEL_E_REFCLK (1)
#define CAVM_CLKGEN_SEL_E_RUNT (0)
#define CAVM_CLKGEN_SEL_E_SWAP_PLL (7)

/**
 * Structure clkgen_aro_trgt_droop_s
 *
 * CLKGEN ARO Target Droop Structure
 * Normalized Description.
 */
union cavm_clkgen_aro_trgt_droop_s
{
    uint32_t u;
    struct cavm_clkgen_aro_trgt_droop_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t use_droop             : 1;  /**< [ 15: 15] Normalized Description. */
        uint32_t droop_enb             : 1;  /**< [ 14: 14] Normalized Description. */
        uint32_t scnt                  : 2;  /**< [ 13: 12] Normalized Description. */
        uint32_t sro_sel               : 4;  /**< [ 11:  8] Normalized Description. */
        uint32_t ecnt                  : 4;  /**< [  7:  4] Normalized Description. */
        uint32_t ero_sel               : 4;  /**< [  3:  0] Normalized Description. */
#else /* Word 0 - Little Endian */
        uint32_t ero_sel               : 4;  /**< [  3:  0] Normalized Description. */
        uint32_t ecnt                  : 4;  /**< [  7:  4] Normalized Description. */
        uint32_t sro_sel               : 4;  /**< [ 11:  8] Normalized Description. */
        uint32_t scnt                  : 2;  /**< [ 13: 12] Normalized Description. */
        uint32_t droop_enb             : 1;  /**< [ 14: 14] Normalized Description. */
        uint32_t use_droop             : 1;  /**< [ 15: 15] Normalized Description. */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_clkgen_aro_trgt_droop_s_s cn; */
};

/**
 * Register (RSL) clkgen_aro_cfg
 *
 * CLKGEN ARO Config Control Register
 * Normalized Description.
 */
union cavm_clkgen_aro_cfg
{
    uint64_t u;
    struct cavm_clkgen_aro_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_17_63        : 47;
        uint64_t aro_mux_disable       : 1;  /**< [ 16: 16](R/W) External Mux Disable. */
        uint64_t pllro_cfg_pllro_ref_cnt_fctr : 4;/**< [ 15: 12](R/W) Calibration Window Factor.

                                                                 R = cfg_pllro_ref_cnt_init_val
                                                                 X = cfg_pllro_ref_cnt_fctr

                                                                 The calibration window duration is Duration = R * (2 ** X) REFCLKs */
        uint64_t pllro_cfg_usr_update_ro_trgt : 1;/**< [ 11: 11](R/W) User Mode Frequency Update.
                                                                 Setting this bit updates the frequency when in User Mode. */
        uint64_t pllro_cfg_select_s    : 1;  /**< [ 10: 10](R/W) When clear, selects (enables) the SVT RO (ROS) of the ARO. */
        uint64_t pllro_cfg_select_u    : 1;  /**< [  9:  9](R/W) When clear, selects (enables) the ULVT RO (ROU) of the ARO */
        uint64_t pllro_cfg_locktime_opt_dis : 1;/**< [  8:  8](R/W) When set, disables the lock time optimize logic. */
        uint64_t pllro_cfg_ref_cnt_frq_grd : 2;/**< [  7:  6](R/W) Frequency Guard Band.
                                                                 00 = 128 MHz
                                                                 01 = 256 MHz
                                                                 10 = 384 MHz
                                                                 11 = 512 MHz */
        uint64_t pllro_cfg_calib_mode  : 1;  /**< [  5:  5](R/W) Calibration mode disable
                                                                 0 = ARO is in user mode
                                                                 1 = ARO is in calibration mode */
        uint64_t pllro_cfg_usr_cntrs_init_ld : 1;/**< [  4:  4](R/W) When set, the Ref clock counter and the CPU clock counter are manually
                                                                 forced to load their initial values supplied by CLKGEN_MAN register. */
        uint64_t pllro_cfg_usr_sel_ro_trgt : 1;/**< [  3:  3](R/W) When set, selects the CLKGEN_ARO_TRGT fields as the frequency target
                                                                 configuration of the ARO. */
        uint64_t pllro_cfg_clkout_en   : 1;  /**< [  2:  2](R/W) Clock Enable.
                                                                 When set, clock is output. */
        uint64_t pllro_cfg_div_en      : 1;  /**< [  1:  1](R/W) Disable for the divider of the clock output.
                                                                 0 = Divider is enabled. The clock is divided according to the division
                                                                     factor value in pllro_cfg_div_fctr[2:0].
                                                                 1 = Divider is disabled. The clock is not divided. */
        uint64_t pllro_cfg_usr_clk     : 1;  /**< [  0:  0](R/W) When set, the ARO control logic is forced to be in the reset state. */
#else /* Word 0 - Little Endian */
        uint64_t pllro_cfg_usr_clk     : 1;  /**< [  0:  0](R/W) When set, the ARO control logic is forced to be in the reset state. */
        uint64_t pllro_cfg_div_en      : 1;  /**< [  1:  1](R/W) Disable for the divider of the clock output.
                                                                 0 = Divider is enabled. The clock is divided according to the division
                                                                     factor value in pllro_cfg_div_fctr[2:0].
                                                                 1 = Divider is disabled. The clock is not divided. */
        uint64_t pllro_cfg_clkout_en   : 1;  /**< [  2:  2](R/W) Clock Enable.
                                                                 When set, clock is output. */
        uint64_t pllro_cfg_usr_sel_ro_trgt : 1;/**< [  3:  3](R/W) When set, selects the CLKGEN_ARO_TRGT fields as the frequency target
                                                                 configuration of the ARO. */
        uint64_t pllro_cfg_usr_cntrs_init_ld : 1;/**< [  4:  4](R/W) When set, the Ref clock counter and the CPU clock counter are manually
                                                                 forced to load their initial values supplied by CLKGEN_MAN register. */
        uint64_t pllro_cfg_calib_mode  : 1;  /**< [  5:  5](R/W) Calibration mode disable
                                                                 0 = ARO is in user mode
                                                                 1 = ARO is in calibration mode */
        uint64_t pllro_cfg_ref_cnt_frq_grd : 2;/**< [  7:  6](R/W) Frequency Guard Band.
                                                                 00 = 128 MHz
                                                                 01 = 256 MHz
                                                                 10 = 384 MHz
                                                                 11 = 512 MHz */
        uint64_t pllro_cfg_locktime_opt_dis : 1;/**< [  8:  8](R/W) When set, disables the lock time optimize logic. */
        uint64_t pllro_cfg_select_u    : 1;  /**< [  9:  9](R/W) When clear, selects (enables) the ULVT RO (ROU) of the ARO */
        uint64_t pllro_cfg_select_s    : 1;  /**< [ 10: 10](R/W) When clear, selects (enables) the SVT RO (ROS) of the ARO. */
        uint64_t pllro_cfg_usr_update_ro_trgt : 1;/**< [ 11: 11](R/W) User Mode Frequency Update.
                                                                 Setting this bit updates the frequency when in User Mode. */
        uint64_t pllro_cfg_pllro_ref_cnt_fctr : 4;/**< [ 15: 12](R/W) Calibration Window Factor.

                                                                 R = cfg_pllro_ref_cnt_init_val
                                                                 X = cfg_pllro_ref_cnt_fctr

                                                                 The calibration window duration is Duration = R * (2 ** X) REFCLKs */
        uint64_t aro_mux_disable       : 1;  /**< [ 16: 16](R/W) External Mux Disable. */
        uint64_t reserved_17_63        : 47;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_clkgen_aro_cfg_s cn; */
};
typedef union cavm_clkgen_aro_cfg cavm_clkgen_aro_cfg_t;

#define CAVM_CLKGEN_ARO_CFG CAVM_CLKGEN_ARO_CFG_FUNC()
static inline uint64_t CAVM_CLKGEN_ARO_CFG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CLKGEN_ARO_CFG_FUNC(void)
{
    return 0xc01c04000028ll;
}

#define typedef_CAVM_CLKGEN_ARO_CFG cavm_clkgen_aro_cfg_t
#define bustype_CAVM_CLKGEN_ARO_CFG CSR_TYPE_RSL
#define basename_CAVM_CLKGEN_ARO_CFG "CLKGEN_ARO_CFG"
#define device_bar_CAVM_CLKGEN_ARO_CFG 0x0 /* PF_BAR0 */
#define busnum_CAVM_CLKGEN_ARO_CFG 0
#define arguments_CAVM_CLKGEN_ARO_CFG -1,-1,-1,-1

/**
 * Register (RSL) clkgen_aro_settings
 *
 * CLKGEN ARO Settings Register
 * This register is updated when the ARO is programmed and contains a
 * copy of the information currently used by the ARO.
 */
union cavm_clkgen_aro_settings
{
    uint64_t u;
    struct cavm_clkgen_aro_settings_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t in_use                : 1;  /**< [ 63: 63](RO/H) Set when ARO is currently the clock source. */
        uint64_t reserved_61_62        : 2;
        uint64_t lock                  : 1;  /**< [ 60: 60](RO/H) ARO lock status.
                                                                 Set when ARO has reached the target frequency. */
        uint64_t reserved_56_59        : 4;
        uint64_t power_down            : 1;  /**< [ 55: 55](RO/H) ARO Power Status.
                                                                 Set the ARO has been powered down. */
        uint64_t post_div              : 9;  /**< [ 54: 46](RO/H) Post Divider. */
        uint64_t reserved_44_45        : 2;
        uint64_t vco_mul               : 10; /**< [ 43: 34](RO/H) Target Value for ARO in each update period. */
        uint64_t vco_fract             : 10; /**< [ 33: 24](RO/H) VCO multiplier fraction of 50mhz */
        uint64_t reserved_10_23        : 14;
        uint64_t update_rate           : 10; /**< [  9:  0](RO/H) ARO updates are typically specified as either 50 or 100 Reference clocks.
                                                                 Hardware automatically adds an additional 30nS so a setting of 50 takes 530nS
                                                                 This number can be used to predict lock times when the ARO is used.

                                                                 Frequency for ARO is
                                                                  ([VCO_MUL]*50 + [VCO_FRACT]) * 2.0 MHz if [UPDATE_RATE] is 50 or
                                                                  ([VCO_MUL]*50 + [VCO_FRACT]) * 1.0 MHz if [UPDATE_RATE] is 100 */
#else /* Word 0 - Little Endian */
        uint64_t update_rate           : 10; /**< [  9:  0](RO/H) ARO updates are typically specified as either 50 or 100 Reference clocks.
                                                                 Hardware automatically adds an additional 30nS so a setting of 50 takes 530nS
                                                                 This number can be used to predict lock times when the ARO is used.

                                                                 Frequency for ARO is
                                                                  ([VCO_MUL]*50 + [VCO_FRACT]) * 2.0 MHz if [UPDATE_RATE] is 50 or
                                                                  ([VCO_MUL]*50 + [VCO_FRACT]) * 1.0 MHz if [UPDATE_RATE] is 100 */
        uint64_t reserved_10_23        : 14;
        uint64_t vco_fract             : 10; /**< [ 33: 24](RO/H) VCO multiplier fraction of 50mhz */
        uint64_t vco_mul               : 10; /**< [ 43: 34](RO/H) Target Value for ARO in each update period. */
        uint64_t reserved_44_45        : 2;
        uint64_t post_div              : 9;  /**< [ 54: 46](RO/H) Post Divider. */
        uint64_t power_down            : 1;  /**< [ 55: 55](RO/H) ARO Power Status.
                                                                 Set the ARO has been powered down. */
        uint64_t reserved_56_59        : 4;
        uint64_t lock                  : 1;  /**< [ 60: 60](RO/H) ARO lock status.
                                                                 Set when ARO has reached the target frequency. */
        uint64_t reserved_61_62        : 2;
        uint64_t in_use                : 1;  /**< [ 63: 63](RO/H) Set when ARO is currently the clock source. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_clkgen_aro_settings_s cn; */
};
typedef union cavm_clkgen_aro_settings cavm_clkgen_aro_settings_t;

#define CAVM_CLKGEN_ARO_SETTINGS CAVM_CLKGEN_ARO_SETTINGS_FUNC()
static inline uint64_t CAVM_CLKGEN_ARO_SETTINGS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CLKGEN_ARO_SETTINGS_FUNC(void)
{
    return 0xc01c04000038ll;
}

#define typedef_CAVM_CLKGEN_ARO_SETTINGS cavm_clkgen_aro_settings_t
#define bustype_CAVM_CLKGEN_ARO_SETTINGS CSR_TYPE_RSL
#define basename_CAVM_CLKGEN_ARO_SETTINGS "CLKGEN_ARO_SETTINGS"
#define device_bar_CAVM_CLKGEN_ARO_SETTINGS 0x0 /* PF_BAR0 */
#define busnum_CAVM_CLKGEN_ARO_SETTINGS 0
#define arguments_CAVM_CLKGEN_ARO_SETTINGS -1,-1,-1,-1

/**
 * Register (RSL) clkgen_aro_status
 *
 * CLKGEN ARO Status Register
 * Normalized Description.
 */
union cavm_clkgen_aro_status
{
    uint64_t u;
    struct cavm_clkgen_aro_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t aro_cfg_status_mux    : 3;  /**< [ 35: 33](R/W) Status Mux Selection. */
        uint64_t aro_droop_detect      : 1;  /**< [ 32: 32](RO/H) Droop Detector Indication.
                                                                 0 = No droop event.
                                                                 1 = Voltage below ARO droop detector threshold. */
        uint64_t aro_status            : 32; /**< [ 31:  0](RO/H) ARO Status Word selected by [ARO_STATUS_MUX]. */
#else /* Word 0 - Little Endian */
        uint64_t aro_status            : 32; /**< [ 31:  0](RO/H) ARO Status Word selected by [ARO_STATUS_MUX]. */
        uint64_t aro_droop_detect      : 1;  /**< [ 32: 32](RO/H) Droop Detector Indication.
                                                                 0 = No droop event.
                                                                 1 = Voltage below ARO droop detector threshold. */
        uint64_t aro_cfg_status_mux    : 3;  /**< [ 35: 33](R/W) Status Mux Selection. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_clkgen_aro_status_s cn; */
};
typedef union cavm_clkgen_aro_status cavm_clkgen_aro_status_t;

#define CAVM_CLKGEN_ARO_STATUS CAVM_CLKGEN_ARO_STATUS_FUNC()
static inline uint64_t CAVM_CLKGEN_ARO_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CLKGEN_ARO_STATUS_FUNC(void)
{
    return 0xc01c04000020ll;
}

#define typedef_CAVM_CLKGEN_ARO_STATUS cavm_clkgen_aro_status_t
#define bustype_CAVM_CLKGEN_ARO_STATUS CSR_TYPE_RSL
#define basename_CAVM_CLKGEN_ARO_STATUS "CLKGEN_ARO_STATUS"
#define device_bar_CAVM_CLKGEN_ARO_STATUS 0x0 /* PF_BAR0 */
#define busnum_CAVM_CLKGEN_ARO_STATUS 0
#define arguments_CAVM_CLKGEN_ARO_STATUS -1,-1,-1,-1

/**
 * Register (RSL) clkgen_aro_trgt
 *
 * CLKGEN ARO Target Override Register
 * Normalized Description.
 */
union cavm_clkgen_aro_trgt
{
    uint64_t u;
    struct cavm_clkgen_aro_trgt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_56_63        : 8;
        uint64_t cfg_pllro_ros_trgt_min_val : 8;/**< [ 55: 48](R/W) During calibration mode, the ARO frequency configuration is restricted
                                                                 not to reach values that are below cfg_pllro_ros_trgt_min_val for the
                                                                 ROS ring oscillator.

                                                                 The format is {n[3:0],s[2:0],rise} see ARO Frequency Setting Table. */
        uint64_t cfg_pllro_rou_trgt_min_val : 8;/**< [ 47: 40](R/W) During calibration mode, the ARO frequency configuration is restricted
                                                                 not to reach values that are below cfg_pllro_rou_trgt_min_val for the
                                                                 ROU ring oscillator.

                                                                 The format is {n[3:0],s[2:0],rise} see ARO Frequency Setting Table. */
        uint64_t pll_safe_ro_trgt      : 8;  /**< [ 39: 32](R/W) When entering calibration mode, this configuration is used as the
                                                                 starting point.
                                                                 All other values are passed through.

                                                                 The format is {n[3:0],s[2:0],rise} see ARO Frequency Setting Table. */
        uint64_t pllro_cfg_usr_ros_trgt_p1 : 8;/**< [ 31: 24](R/W) User (manual) ARO phase1 delay config of the SVT RO (ROS).
                                                                 The format is {n[3:0],s[2:0],rise} see ARO Frequency Setting Table.

                                                                 ARO4 supports a Droop Detector that shares these bits during calibration mode.
                                                                 25 - DD_CTRL_ENABLE, ARO uses Droop, see ARO spec for details. */
        uint64_t pllro_cfg_usr_ros_trgt_p2 : 8;/**< [ 23: 16](R/W) User (manual) ARO phase2 delay config of the SVT RO (ROS).
                                                                 The format is {n[3:0],s[2:0],rise} see ARO Frequency Setting Table.

                                                                 ARO4 supports a Droop Detector that shares these bits during calibration mode.
                                                                 23..20 - DD_RECOVERY_DELAY, see ARO spec for details
                                                                 19..16 - SLOWDOWN_OFFSET, see ARO spec for details */
        uint64_t pllro_cfg_usr_rou_trgt_p1 : 8;/**< [ 15:  8](R/W) User (manual) ARO phase1 delay config of the ULVT RO (ROU).
                                                                 The format is {n[3:0],s[2:0],rise} see ARO Frequency Setting Table. */
        uint64_t pllro_cfg_usr_rou_trgt_p2 : 8;/**< [  7:  0](R/W) User (manual) ARO phase2 delay config of the ULVT RO (ROU).
                                                                 The format is {n[3:0],s[2:0],rise} see ARO Frequency Setting Table. */
#else /* Word 0 - Little Endian */
        uint64_t pllro_cfg_usr_rou_trgt_p2 : 8;/**< [  7:  0](R/W) User (manual) ARO phase2 delay config of the ULVT RO (ROU).
                                                                 The format is {n[3:0],s[2:0],rise} see ARO Frequency Setting Table. */
        uint64_t pllro_cfg_usr_rou_trgt_p1 : 8;/**< [ 15:  8](R/W) User (manual) ARO phase1 delay config of the ULVT RO (ROU).
                                                                 The format is {n[3:0],s[2:0],rise} see ARO Frequency Setting Table. */
        uint64_t pllro_cfg_usr_ros_trgt_p2 : 8;/**< [ 23: 16](R/W) User (manual) ARO phase2 delay config of the SVT RO (ROS).
                                                                 The format is {n[3:0],s[2:0],rise} see ARO Frequency Setting Table.

                                                                 ARO4 supports a Droop Detector that shares these bits during calibration mode.
                                                                 23..20 - DD_RECOVERY_DELAY, see ARO spec for details
                                                                 19..16 - SLOWDOWN_OFFSET, see ARO spec for details */
        uint64_t pllro_cfg_usr_ros_trgt_p1 : 8;/**< [ 31: 24](R/W) User (manual) ARO phase1 delay config of the SVT RO (ROS).
                                                                 The format is {n[3:0],s[2:0],rise} see ARO Frequency Setting Table.

                                                                 ARO4 supports a Droop Detector that shares these bits during calibration mode.
                                                                 25 - DD_CTRL_ENABLE, ARO uses Droop, see ARO spec for details. */
        uint64_t pll_safe_ro_trgt      : 8;  /**< [ 39: 32](R/W) When entering calibration mode, this configuration is used as the
                                                                 starting point.
                                                                 All other values are passed through.

                                                                 The format is {n[3:0],s[2:0],rise} see ARO Frequency Setting Table. */
        uint64_t cfg_pllro_rou_trgt_min_val : 8;/**< [ 47: 40](R/W) During calibration mode, the ARO frequency configuration is restricted
                                                                 not to reach values that are below cfg_pllro_rou_trgt_min_val for the
                                                                 ROU ring oscillator.

                                                                 The format is {n[3:0],s[2:0],rise} see ARO Frequency Setting Table. */
        uint64_t cfg_pllro_ros_trgt_min_val : 8;/**< [ 55: 48](R/W) During calibration mode, the ARO frequency configuration is restricted
                                                                 not to reach values that are below cfg_pllro_ros_trgt_min_val for the
                                                                 ROS ring oscillator.

                                                                 The format is {n[3:0],s[2:0],rise} see ARO Frequency Setting Table. */
        uint64_t reserved_56_63        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_clkgen_aro_trgt_s cn; */
};
typedef union cavm_clkgen_aro_trgt cavm_clkgen_aro_trgt_t;

#define CAVM_CLKGEN_ARO_TRGT CAVM_CLKGEN_ARO_TRGT_FUNC()
static inline uint64_t CAVM_CLKGEN_ARO_TRGT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CLKGEN_ARO_TRGT_FUNC(void)
{
    return 0xc01c04000030ll;
}

#define typedef_CAVM_CLKGEN_ARO_TRGT cavm_clkgen_aro_trgt_t
#define bustype_CAVM_CLKGEN_ARO_TRGT CSR_TYPE_RSL
#define basename_CAVM_CLKGEN_ARO_TRGT "CLKGEN_ARO_TRGT"
#define device_bar_CAVM_CLKGEN_ARO_TRGT 0x0 /* PF_BAR0 */
#define busnum_CAVM_CLKGEN_ARO_TRGT 0
#define arguments_CAVM_CLKGEN_ARO_TRGT -1,-1,-1,-1

/**
 * Register (RSL) clkgen_const
 *
 * CLKGEN Constant Register
 * Normalized Description.
 */
union cavm_clkgen_const
{
    uint64_t u;
    struct cavm_clkgen_const_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_10_63        : 54;
        uint64_t analog_plls           : 1;  /**< [  9:  9](RO/H) Analog PLLs present.
                                                                 0 = Supported PLLs are Digital.
                                                                 1 = Supported PLLs are Analog. */
        uint64_t aro_present           : 1;  /**< [  8:  8](RO/H) Adaptive Ring Oscillator present.
                                                                 0 = ARO is unavailable.  Programming the ARO will have not effect and
                                                                     switching to ARO will result in the clock being stopped.
                                                                 1 = ARO is available. */
        uint64_t pll1_present          : 1;  /**< [  7:  7](RO/H) PLL1 present.
                                                                 0 = PLL1 is unavailable.  Programming PLL1 will have not effect and
                                                                     switching to PLL1 will result in the clock being stopped.
                                                                 1 = PLL1 is available. */
        uint64_t pll0_present          : 1;  /**< [  6:  6](RO/H) PLL1 present.
                                                                 0 = PLL0 is unavailable.  Programming PLL0 will have not effect and
                                                                     switching to PLL0 will result in MESHCLK being selected.
                                                                 1 = PLL0 is available. */
        uint64_t alt_ref               : 2;  /**< [  5:  4](R/W/H) Alternate reference clock Default.
                                                                 00 = PLLs are using 100 MHz reference.
                                                                 01 = Reserved.
                                                                 10 = PLLs are using 30.72 MHz reference clock.
                                                                 11 = PLLs are using 122.88 MHz reference clock. */
        uint64_t runt_bypass           : 1;  /**< [  3:  3](RO/H) When set, The Runt Pulse Oscillator is disabled and hardware always supplies
                                                                 REFCLK during times RUNT clock is normally operating.
                                                                 When clear, software can select runt clock as an output. */
        uint64_t auto_init             : 2;  /**< [  2:  1](RO/H) Auto Hardware Programming.
                                                                 During a reset, ARO/PLLs are always powered down and RUNT Clock is selected
                                                                 as the source.  After that:
                                                                 00 = nothing else happens
                                                                 01 = Hardware immediately switches to REFCLK
                                                                 10 = Hardware programs PLL0 and then selects it as the clock source
                                                                      using CLKGEN_PGM[INIT_MUL]
                                                                 11 = Hardware programs PLL1 and then selects it as the clock source
                                                                      using CLKGEN_PGM[INIT_MUL] */
        uint64_t reset_on_chip         : 1;  /**< [  0:  0](RO/H) Disable Programming on Chip Reset.
                                                                 1 = When chip reset asserts, the clock generator follows [AUTO_INIT].
                                                                     If [AUTO_INIT] = 1, this results in one of the PLLs (as per INIT_PLL) being
                                                                       programmed and selected
                                                                     If [AUTO_INIT] = 0, this results in RUNT Clock being selected.
                                                                 0 = Chip reset is ignored, the current clock source and frequency is maintained.
                                                                     Additionally, none of the clkgen fields are reset. */
#else /* Word 0 - Little Endian */
        uint64_t reset_on_chip         : 1;  /**< [  0:  0](RO/H) Disable Programming on Chip Reset.
                                                                 1 = When chip reset asserts, the clock generator follows [AUTO_INIT].
                                                                     If [AUTO_INIT] = 1, this results in one of the PLLs (as per INIT_PLL) being
                                                                       programmed and selected
                                                                     If [AUTO_INIT] = 0, this results in RUNT Clock being selected.
                                                                 0 = Chip reset is ignored, the current clock source and frequency is maintained.
                                                                     Additionally, none of the clkgen fields are reset. */
        uint64_t auto_init             : 2;  /**< [  2:  1](RO/H) Auto Hardware Programming.
                                                                 During a reset, ARO/PLLs are always powered down and RUNT Clock is selected
                                                                 as the source.  After that:
                                                                 00 = nothing else happens
                                                                 01 = Hardware immediately switches to REFCLK
                                                                 10 = Hardware programs PLL0 and then selects it as the clock source
                                                                      using CLKGEN_PGM[INIT_MUL]
                                                                 11 = Hardware programs PLL1 and then selects it as the clock source
                                                                      using CLKGEN_PGM[INIT_MUL] */
        uint64_t runt_bypass           : 1;  /**< [  3:  3](RO/H) When set, The Runt Pulse Oscillator is disabled and hardware always supplies
                                                                 REFCLK during times RUNT clock is normally operating.
                                                                 When clear, software can select runt clock as an output. */
        uint64_t alt_ref               : 2;  /**< [  5:  4](R/W/H) Alternate reference clock Default.
                                                                 00 = PLLs are using 100 MHz reference.
                                                                 01 = Reserved.
                                                                 10 = PLLs are using 30.72 MHz reference clock.
                                                                 11 = PLLs are using 122.88 MHz reference clock. */
        uint64_t pll0_present          : 1;  /**< [  6:  6](RO/H) PLL1 present.
                                                                 0 = PLL0 is unavailable.  Programming PLL0 will have not effect and
                                                                     switching to PLL0 will result in MESHCLK being selected.
                                                                 1 = PLL0 is available. */
        uint64_t pll1_present          : 1;  /**< [  7:  7](RO/H) PLL1 present.
                                                                 0 = PLL1 is unavailable.  Programming PLL1 will have not effect and
                                                                     switching to PLL1 will result in the clock being stopped.
                                                                 1 = PLL1 is available. */
        uint64_t aro_present           : 1;  /**< [  8:  8](RO/H) Adaptive Ring Oscillator present.
                                                                 0 = ARO is unavailable.  Programming the ARO will have not effect and
                                                                     switching to ARO will result in the clock being stopped.
                                                                 1 = ARO is available. */
        uint64_t analog_plls           : 1;  /**< [  9:  9](RO/H) Analog PLLs present.
                                                                 0 = Supported PLLs are Digital.
                                                                 1 = Supported PLLs are Analog. */
        uint64_t reserved_10_63        : 54;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_clkgen_const_s cn; */
};
typedef union cavm_clkgen_const cavm_clkgen_const_t;

#define CAVM_CLKGEN_CONST CAVM_CLKGEN_CONST_FUNC()
static inline uint64_t CAVM_CLKGEN_CONST_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CLKGEN_CONST_FUNC(void)
{
    return 0xc01c04000078ll;
}

#define typedef_CAVM_CLKGEN_CONST cavm_clkgen_const_t
#define bustype_CAVM_CLKGEN_CONST CSR_TYPE_RSL
#define basename_CAVM_CLKGEN_CONST "CLKGEN_CONST"
#define device_bar_CAVM_CLKGEN_CONST 0x0 /* PF_BAR0 */
#define busnum_CAVM_CLKGEN_CONST 0
#define arguments_CAVM_CLKGEN_CONST -1,-1,-1,-1

/**
 * Register (RSL) clkgen_freq_chk
 *
 * CLKGEN Output Frequenbcy Checker Register
 * Normalized Description.
 */
union cavm_clkgen_freq_chk
{
    uint64_t u;
    struct cavm_clkgen_freq_chk_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cur_lock              : 1;  /**< [ 63: 63](RO/H) Lock Status of source indicated by CLKGEN_PGM[CUR_SEL].
                                                                 PLL0, PLL1 and ARO are typically 1.
                                                                 REFCLK and RUNT always read as 1.
                                                                 BYPASS always reads as 0. */
        uint64_t alarm_chk             : 1;  /**< [ 62: 62](R/W/H) Alarm Checker Enable. */
        uint64_t fault                 : 1;  /**< [ 61: 61](RO/H) Frequency Fault Detected. */
        uint64_t single_measure        : 1;  /**< [ 60: 60](R/W/H) Single Period Frequency Calculation. */
        uint64_t window                : 2;  /**< [ 59: 58](R/W) Sample Window. */
        uint64_t reserved_50_57        : 8;
        uint64_t tolerance             : 10; /**< [ 49: 40](R/W) Number of clocks allowed +/- the expeced value. */
        uint64_t expected              : 20; /**< [ 39: 20](R/W) Number of clocks expected in the [RESULT] field when measured over the [WINDOW].
                                                                 For example a 1 GHz clock output would count to approximately
                                                                 10000 if the [WINDOW] was set to 100uS (10). */
        uint64_t result                : 20; /**< [ 19:  0](RO/H) Number of clocks counted in the sample window. */
#else /* Word 0 - Little Endian */
        uint64_t result                : 20; /**< [ 19:  0](RO/H) Number of clocks counted in the sample window. */
        uint64_t expected              : 20; /**< [ 39: 20](R/W) Number of clocks expected in the [RESULT] field when measured over the [WINDOW].
                                                                 For example a 1 GHz clock output would count to approximately
                                                                 10000 if the [WINDOW] was set to 100uS (10). */
        uint64_t tolerance             : 10; /**< [ 49: 40](R/W) Number of clocks allowed +/- the expeced value. */
        uint64_t reserved_50_57        : 8;
        uint64_t window                : 2;  /**< [ 59: 58](R/W) Sample Window. */
        uint64_t single_measure        : 1;  /**< [ 60: 60](R/W/H) Single Period Frequency Calculation. */
        uint64_t fault                 : 1;  /**< [ 61: 61](RO/H) Frequency Fault Detected. */
        uint64_t alarm_chk             : 1;  /**< [ 62: 62](R/W/H) Alarm Checker Enable. */
        uint64_t cur_lock              : 1;  /**< [ 63: 63](RO/H) Lock Status of source indicated by CLKGEN_PGM[CUR_SEL].
                                                                 PLL0, PLL1 and ARO are typically 1.
                                                                 REFCLK and RUNT always read as 1.
                                                                 BYPASS always reads as 0. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_clkgen_freq_chk_s cn; */
};
typedef union cavm_clkgen_freq_chk cavm_clkgen_freq_chk_t;

#define CAVM_CLKGEN_FREQ_CHK CAVM_CLKGEN_FREQ_CHK_FUNC()
static inline uint64_t CAVM_CLKGEN_FREQ_CHK_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CLKGEN_FREQ_CHK_FUNC(void)
{
    return 0xc01c04000068ll;
}

#define typedef_CAVM_CLKGEN_FREQ_CHK cavm_clkgen_freq_chk_t
#define bustype_CAVM_CLKGEN_FREQ_CHK CSR_TYPE_RSL
#define basename_CAVM_CLKGEN_FREQ_CHK "CLKGEN_FREQ_CHK"
#define device_bar_CAVM_CLKGEN_FREQ_CHK 0x0 /* PF_BAR0 */
#define busnum_CAVM_CLKGEN_FREQ_CHK 0
#define arguments_CAVM_CLKGEN_FREQ_CHK -1,-1,-1,-1

/**
 * Register (RSL) clkgen_group#
 *
 * CLKGEN Group Enable Register
 * These registers are always written on broadcast writes (addr 17 set)
 * when the address is selected.
 */
union cavm_clkgen_groupx
{
    uint64_t u;
    struct cavm_clkgen_groupx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t enable                : 64; /**< [ 63:  0](R/W) Broadcast Enable.
                                                                 When clear, clkgen modules with the corresponding TIE_CLKGEN_ID do not
                                                                 participate in broadcast writes to non CLKGEN_GROUP registers.
                                                                 The bits in each register map to CLKGEN_IDs.
                                                                   Register 0 is ID 0-63,
                                                                   Register 1 is ID 64-127
                                                                   etc.

                                                                 When set, the clkgen module accepts writes to that broadcast group.
                                                                 Individual accesses ignore these registers. */
#else /* Word 0 - Little Endian */
        uint64_t enable                : 64; /**< [ 63:  0](R/W) Broadcast Enable.
                                                                 When clear, clkgen modules with the corresponding TIE_CLKGEN_ID do not
                                                                 participate in broadcast writes to non CLKGEN_GROUP registers.
                                                                 The bits in each register map to CLKGEN_IDs.
                                                                   Register 0 is ID 0-63,
                                                                   Register 1 is ID 64-127
                                                                   etc.

                                                                 When set, the clkgen module accepts writes to that broadcast group.
                                                                 Individual accesses ignore these registers. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_clkgen_groupx_s cn; */
};
typedef union cavm_clkgen_groupx cavm_clkgen_groupx_t;

static inline uint64_t CAVM_CLKGEN_GROUPX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CLKGEN_GROUPX(uint64_t a)
{
    if (a<=7)
        return 0xc01c04000080ll + 8ll * ((a) & 0x7);
    __cavm_csr_fatal("CLKGEN_GROUPX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CLKGEN_GROUPX(a) cavm_clkgen_groupx_t
#define bustype_CAVM_CLKGEN_GROUPX(a) CSR_TYPE_RSL
#define basename_CAVM_CLKGEN_GROUPX(a) "CLKGEN_GROUPX"
#define device_bar_CAVM_CLKGEN_GROUPX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_CLKGEN_GROUPX(a) (a)
#define arguments_CAVM_CLKGEN_GROUPX(a) (a),-1,-1,-1

/**
 * Register (RSL) clkgen_man
 *
 * CLKGEN Manual PLL Control Register
 * These registers are used in conjunction with the CLKGEN_PGM register when
 * the CLKGEN_PGM[NEXT_MAN] field is set.
 *
 * This register is always reset on a chip domain reset.
 */
union cavm_clkgen_man
{
    uint64_t u;
    struct cavm_clkgen_man_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_60_63        : 4;
        uint64_t ref_div               : 4;  /**< [ 59: 56](R/W) Reference clock divider for PLLs.
                                                                   0 = Reserved.
                                                                   1 = Divide reference clock by 1.
                                                                   2 = Divide reference clock by 2 (typical for 100 MHz).
                                                                   3 = Divide reference clock by 3.
                                                                   4 = Divide reference clock by 4 (typical for 122.88 MHz, see ALF_REF).
                                                                   5-31 = Divide reference clock by N.

                                                                 Not used for ARO. */
        uint64_t reserved_55           : 1;
        uint64_t post_div              : 9;  /**< [ 54: 46](R/W) Post scalar divider.
                                                                   0, 1 = Reserved.
                                                                   2-511 = Divide VCO output by [POST_DIV]. */
        uint64_t bw                    : 2;  /**< [ 45: 44](R/W) PLL VCO bandwidth.
                                                                 For Analog PLLs the following setting are supported:
                                                                   0x0 = 20-30 MHz reference clock/ref_div.
                                                                   0x1 = 30-45 MHz reference clock/ref_div.
                                                                   0x2 = 45-65 MHz reference clock/ref_div.
                                                                   0x3 = 65-90 MHz reference clock/ref_div.

                                                                 Bits used as MSBs for DLF_KP and DLF_KI for Digital PLLs.
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

                                                                 See [VCO_MUL] for min/max VCO frequencies. */
        uint64_t icp                   : 4;  /**< [ 23: 20](R/W) VCO multiplier fraction.

                                                                 PLL VCO frequency is [VCO_MUL].[VCO_FRACT] * reference_clock / [REF_DIV].

                                                                 When VCO_FRACT is specified with the ARO, this 10 bit number is added to the
                                                                 ARO clock count specified by VCO_MUL * 50 to determine clocks per update period.

                                                                 See [VCO_MUL] for min/max VCO frequencies.  Not used by ARO. */
        uint64_t dlf_kp                : 5;  /**< [ 19: 15](R/W) DLF Proportional Path Gain Setting.
                                                                 MSB is 1 bit integer stored in BW[1], 3 bit integer and 2 bit fraction stored here.

                                                                 Typical values are:
                                                                 Rate   Value BW[1], DLF_KP  PLL reference/ref_div
                                                                 20 MHz  0x18   0     0x18   20.00 - 40.00 MHz
                                                                 25 MHz  0x1e   0     0x1e   25.00 - 50.00 MHz
                                                                 30 MHz  0x24   1     0x04   30.00 - 48.70 MHz
                                                                 50 MHz  0x3d   1     0x1d   50 MHz

                                                                 Not used by Analog PLLs and ARO. */
        uint64_t dlf_ki                : 5;  /**< [ 14: 10](R/W) DLF Integral Path Gain Setting.
                                                                 MSB is 1 bit integer stored in BW[0] and 5 bit fraction stored here.

                                                                 Typical values are:
                                                                 Rate   Value BW[0], DLF_KI  PLL reference/ref_div
                                                                 30 MHz  0x3d   1     0x1d   30.00 - 48.70 MHz
                                                                 50 MHz  0x3f   1     0x1f   50 MHz

                                                                 Not used by Analog PLLs and ARO. */
        uint64_t update_rate           : 10; /**< [  9:  0](R/W) PLL update rate.  PLL reference/ref_div in 100KHz increments.
                                                                 Default values
                                                                   307 for 30.72 MHz reference.
                                                                   333 for 33.33 MHz reference.
                                                                   500 for 50.00 MHz reference.

                                                                 ARO updates are typically specified as either 50 or 100 Reference clocks.
                                                                 Hardware automatically adds an additional 30nS so a setting of 50 takes 530nS.
                                                                 This number can be used to predict lock times when the ARO is used.

                                                                 Frequency for ARO is
                                                                   ([VCO_MUL]*50 + [VCO_FRACT]) * 2.0 MHz if [UPDATE_RATE] is 50 or
                                                                   ([VCO_MUL]*50 + [VCO_FRACT]) * 1.0 MHz if [UPDATE_RATE] is 100

                                                                 Note that the estimated lock time is approximately 2x with an update rate of 100.

                                                                 MSB unused by Digital PLLs. */
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
                                                                   ([VCO_MUL]*50 + [VCO_FRACT]) * 2.0 MHz if [UPDATE_RATE] is 50 or
                                                                   ([VCO_MUL]*50 + [VCO_FRACT]) * 1.0 MHz if [UPDATE_RATE] is 100

                                                                 Note that the estimated lock time is approximately 2x with an update rate of 100.

                                                                 MSB unused by Digital PLLs. */
        uint64_t dlf_ki                : 5;  /**< [ 14: 10](R/W) DLF Integral Path Gain Setting.
                                                                 MSB is 1 bit integer stored in BW[0] and 5 bit fraction stored here.

                                                                 Typical values are:
                                                                 Rate   Value BW[0], DLF_KI  PLL reference/ref_div
                                                                 30 MHz  0x3d   1     0x1d   30.00 - 48.70 MHz
                                                                 50 MHz  0x3f   1     0x1f   50 MHz

                                                                 Not used by Analog PLLs and ARO. */
        uint64_t dlf_kp                : 5;  /**< [ 19: 15](R/W) DLF Proportional Path Gain Setting.
                                                                 MSB is 1 bit integer stored in BW[1], 3 bit integer and 2 bit fraction stored here.

                                                                 Typical values are:
                                                                 Rate   Value BW[1], DLF_KP  PLL reference/ref_div
                                                                 20 MHz  0x18   0     0x18   20.00 - 40.00 MHz
                                                                 25 MHz  0x1e   0     0x1e   25.00 - 50.00 MHz
                                                                 30 MHz  0x24   1     0x04   30.00 - 48.70 MHz
                                                                 50 MHz  0x3d   1     0x1d   50 MHz

                                                                 Not used by Analog PLLs and ARO. */
        uint64_t icp                   : 4;  /**< [ 23: 20](R/W) VCO multiplier fraction.

                                                                 PLL VCO frequency is [VCO_MUL].[VCO_FRACT] * reference_clock / [REF_DIV].

                                                                 When VCO_FRACT is specified with the ARO, this 10 bit number is added to the
                                                                 ARO clock count specified by VCO_MUL * 50 to determine clocks per update period.

                                                                 See [VCO_MUL] for min/max VCO frequencies.  Not used by ARO. */
        uint64_t vco_fract             : 10; /**< [ 33: 24](R/W) VCO multiplier fraction.

                                                                 PLL VCO frequency is [VCO_MUL].[VCO_FRACT] * reference_clock / [REF_DIV].

                                                                 When VCO_FRACT is specified with the ARO, this 10 bit number is added to the
                                                                 ARO clock count specified by VCO_MUL * 50 to determine clocks per update period.

                                                                 See [VCO_MUL] for min/max VCO frequencies. */
        uint64_t vco_mul               : 10; /**< [ 43: 34](R/W) VCO multiplier integer.

                                                                 PLL VCO frequency is [VCO_MUL].[VCO_FRACT] * reference_clock / [REF_DIV].

                                                                 When VCO_MUL is used with the ARO, the number specified in bits 7..0 is multiplied
                                                                 by fifty, VCO_FRACT is added in and that number is used to determine how many
                                                                 ARO clocks are required per update.  The [UPDATE_RATE] specifies how many reference
                                                                 clocks occur during this update period.

                                                                 VCO range for PLLs is 2 GHz to 5 GHz.
                                                                 VCO range for ARO is 300 MHz - maximum ARO clock rate. */
        uint64_t bw                    : 2;  /**< [ 45: 44](R/W) PLL VCO bandwidth.
                                                                 For Analog PLLs the following setting are supported:
                                                                   0x0 = 20-30 MHz reference clock/ref_div.
                                                                   0x1 = 30-45 MHz reference clock/ref_div.
                                                                   0x2 = 45-65 MHz reference clock/ref_div.
                                                                   0x3 = 65-90 MHz reference clock/ref_div.

                                                                 Bits used as MSBs for DLF_KP and DLF_KI for Digital PLLs.
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

                                                                 Not used for ARO. */
        uint64_t reserved_60_63        : 4;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_clkgen_man_s cn; */
};
typedef union cavm_clkgen_man cavm_clkgen_man_t;

#define CAVM_CLKGEN_MAN CAVM_CLKGEN_MAN_FUNC()
static inline uint64_t CAVM_CLKGEN_MAN_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CLKGEN_MAN_FUNC(void)
{
    return 0xc01c04000008ll;
}

#define typedef_CAVM_CLKGEN_MAN cavm_clkgen_man_t
#define bustype_CAVM_CLKGEN_MAN CSR_TYPE_RSL
#define basename_CAVM_CLKGEN_MAN "CLKGEN_MAN"
#define device_bar_CAVM_CLKGEN_MAN 0x0 /* PF_BAR0 */
#define busnum_CAVM_CLKGEN_MAN 0
#define arguments_CAVM_CLKGEN_MAN -1,-1,-1,-1

/**
 * Register (RSL) clkgen_pgm
 *
 * CLKGEN Program Register
 * This register controls the programming and selection of a clock generator.
 * The register is used for typical programming operations and is supplemented
 * with the CLKGEN_MAN register when NEXT_MAN selected.
 *
 * The register fields are returned to reset values on a chip reset unless
 * specifically noted.
 */
union cavm_clkgen_pgm
{
    uint64_t u;
    struct cavm_clkgen_pgm_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cur_lock              : 1;  /**< [ 63: 63](RO/H) Lock Status of source indicated by [CUR_SEL].
                                                                 REFCLK and RUNT always read as 1.
                                                                 BYPASS always reads as 0. */
        uint64_t alt_ref               : 2;  /**< [ 62: 61](R/W/H) Alternate reference clock.
                                                                 00 = Use 100 MHz reference.  [CUR_MUL] and [NEXT_MUL] values are based on 50 MHz increments
                                                                 01 = Reserved.
                                                                 10 = Use 30.72 MHz reference clock.  [CUR_MUL] and [NEXT_MUL] values are based on
                                                                      30.72 MHz increments.
                                                                 11 = Use 122.88 MHz reference clock.  [CUR_MUL] and [NEXT_MUL] values are based on
                                                                      30.72 MHz increments.

                                                                 Changing this field typically requires PLL reprogramming and a potential powercycle. */
        uint64_t cur_droop             : 1;  /**< [ 60: 60](RO/H) Droop Enable Status of source indicated by CUR_SEL.
                                                                 REFCLK, RUNT, and BYPASS and all read 0.
                                                                 PLL0 and PLL1 reflect droop event and recovery.
                                                                 ARO relects droop indication only. */
        uint64_t cur_sel               : 3;  /**< [ 59: 57](RO/H) Current Clock Source Selection.
                                                                 Enumerated by CLKGEN_SEL_E. */
        uint64_t reserved_55_56        : 2;
        uint64_t cur_mul               : 7;  /**< [ 54: 48](RO/H) Current frequency multiplier.
                                                                 If Bypass Clock or [USE_MAN] is selected, calculations must be done by software.

                                                                 Units are based on the PLL reference clock.
                                                                   With [ALT_REF] = 00, multiplier units are 50.00 MHz.
                                                                   With [ALT_REF] = 10 or 11, multiplier units are 30.76 MHz.

                                                                 The following values are possible:
                                                                   0 = Uninitialized or powered down PLL selected by [CUR_SEL].
                                                                   1 = Reserved.
                                                                   2 = Reference clock selected.
                                                                   3 = Runt clock selected.
                                                                   4-70 = Valid clock frequency when [ALT_REF] = 00.
                                                                   4-114 = Valid clock frequency when [ALT_REF] = 10 or 11.

                                                                 If NEXT_MAN is set, NEXT_NUL is used to set CUR_MUL but the actual frequency
                                                                 is calculated by:
                                                                         RST_MAN_PLL()[VCO_MUL] / (RST_MAN_PLL()[REF_DIV] * RST_MAN_PLL()[POST_DIV])

                                                                 This field is always set to [INIT_MUL] at the end of a switch operation. */
        uint64_t reserved_39_47        : 9;
        uint64_t init_mul              : 7;  /**< [ 38: 32](R/W/H) Chip Reset Frequency Multiplier.  Value used to program the PLL on a chip domain
                                                                 reset.  Value is based on 50 MHz.

                                                                 This field is only reinitialized on a cold domain reset. */
        uint64_t reserved_31           : 1;
        uint64_t next_mul              : 7;  /**< [ 30: 24](R/W) Next Frequency Multiplier.  Used to program the ARO/PLL if [NEXT_MAN] is clear.

                                                                 Frequency is based on reference clock and [ALT_REF] values.
                                                                   [ALT_REF] = 00, 100.00 MHz reference, units are 50.00 MHz.
                                                                   [ALT_REF] = 10 or 11, 122.88 MHz reference, units are 30.76 MHz.

                                                                 Values ranges when [NEXT_MAN] = 0 are:
                                                                   [ALT_REF] = 00, 4 - 70
                                                                   [ALT_REF] = 10 or 11, 4 - 114

                                                                 When [NEXT_MAN] = 1. Values have no effect on the hardware but can
                                                                 be used for software.

                                                                 In all cases values specified will appear in [CUR_MUL] after programming.

                                                                 This field is always set to [INIT_MUL] on a chip domain reset. */
        uint64_t next_sel              : 3;  /**< [ 23: 21](R/W) Next Clock Source.  This field is used to select which clock source is being
                                                                 selected or programmed.  It affects both the CLKGEN_PGM and CLKGEN_MAN registers.
                                                                 Both the [NEXT_PGM] and [NEXT_SWITCH] fields use this information to start PLL operations
                                                                 and the value must not be changed while operations are taking place.
                                                                 Enumerated by CLKGEN_SEL_E. */
        uint64_t reserved_19_20        : 2;
        uint64_t switch_on_lock        : 1;  /**< [ 18: 18](R/W) Switch after lock.
                                                                 0 = [NEXT_SWITCH] counter starts decrementing as soon as selected ARO/PLL
                                                                     indicated by [NEXT_SEL] has powered up.  The value in [NEXT_SWITCH]
                                                                     is the programming/switch delay.
                                                                 1 = [NEXT_SWITCH] counter only starts decrementing when the lock bit of the
                                                                     new ARO/PLL clock source [NEXT_SEL] has asserted.  The value in [NEXT_SWITCH]
                                                                     is then used as a delay after lock.

                                                                 If the value of [NEXT_SEL] is neither and ARO or a PLL then [SWITCH_ON_LOCK]
                                                                 is considered 0. */
        uint64_t next_man              : 1;  /**< [ 17: 17](R/W) Determine PLL controls for next operation using contents of CLKGEN_MAN to specify values.
                                                                 0 = Use [NEXT_MUL] to determine settings and show results in [CUR_MUL].
                                                                 1 = Use CLKGEN_MAN fields to determine settings and set [CUR_MUL] to [NEXT_MUL]. */
        uint64_t next_pgm              : 1;  /**< [ 16: 16](R/W/H) Program ARO/PLL specified by [NEXT_SEL] using [NEXT_MUL] if [NEXT_MAN] is clear or
                                                                 using CLKGEN_MAN fields if set. Hardware automatically clears this field when both
                                                                 selected device has powered up and any delay specified in [NEXT_SWITCH] has completed. */
        uint64_t next_switch           : 16; /**< [ 15:  0](R/W/H) Switch the PLL specified by [NEXT_SEL] after delaying this value times 10nS.
                                                                 When set to a nonzero value, the hardware will wait for
                                                                 any ARO/PLL programming to complete and then switch after the specified number of
                                                                 100 MHz clocks. Hardware will add additional clocks if required. */
#else /* Word 0 - Little Endian */
        uint64_t next_switch           : 16; /**< [ 15:  0](R/W/H) Switch the PLL specified by [NEXT_SEL] after delaying this value times 10nS.
                                                                 When set to a nonzero value, the hardware will wait for
                                                                 any ARO/PLL programming to complete and then switch after the specified number of
                                                                 100 MHz clocks. Hardware will add additional clocks if required. */
        uint64_t next_pgm              : 1;  /**< [ 16: 16](R/W/H) Program ARO/PLL specified by [NEXT_SEL] using [NEXT_MUL] if [NEXT_MAN] is clear or
                                                                 using CLKGEN_MAN fields if set. Hardware automatically clears this field when both
                                                                 selected device has powered up and any delay specified in [NEXT_SWITCH] has completed. */
        uint64_t next_man              : 1;  /**< [ 17: 17](R/W) Determine PLL controls for next operation using contents of CLKGEN_MAN to specify values.
                                                                 0 = Use [NEXT_MUL] to determine settings and show results in [CUR_MUL].
                                                                 1 = Use CLKGEN_MAN fields to determine settings and set [CUR_MUL] to [NEXT_MUL]. */
        uint64_t switch_on_lock        : 1;  /**< [ 18: 18](R/W) Switch after lock.
                                                                 0 = [NEXT_SWITCH] counter starts decrementing as soon as selected ARO/PLL
                                                                     indicated by [NEXT_SEL] has powered up.  The value in [NEXT_SWITCH]
                                                                     is the programming/switch delay.
                                                                 1 = [NEXT_SWITCH] counter only starts decrementing when the lock bit of the
                                                                     new ARO/PLL clock source [NEXT_SEL] has asserted.  The value in [NEXT_SWITCH]
                                                                     is then used as a delay after lock.

                                                                 If the value of [NEXT_SEL] is neither and ARO or a PLL then [SWITCH_ON_LOCK]
                                                                 is considered 0. */
        uint64_t reserved_19_20        : 2;
        uint64_t next_sel              : 3;  /**< [ 23: 21](R/W) Next Clock Source.  This field is used to select which clock source is being
                                                                 selected or programmed.  It affects both the CLKGEN_PGM and CLKGEN_MAN registers.
                                                                 Both the [NEXT_PGM] and [NEXT_SWITCH] fields use this information to start PLL operations
                                                                 and the value must not be changed while operations are taking place.
                                                                 Enumerated by CLKGEN_SEL_E. */
        uint64_t next_mul              : 7;  /**< [ 30: 24](R/W) Next Frequency Multiplier.  Used to program the ARO/PLL if [NEXT_MAN] is clear.

                                                                 Frequency is based on reference clock and [ALT_REF] values.
                                                                   [ALT_REF] = 00, 100.00 MHz reference, units are 50.00 MHz.
                                                                   [ALT_REF] = 10 or 11, 122.88 MHz reference, units are 30.76 MHz.

                                                                 Values ranges when [NEXT_MAN] = 0 are:
                                                                   [ALT_REF] = 00, 4 - 70
                                                                   [ALT_REF] = 10 or 11, 4 - 114

                                                                 When [NEXT_MAN] = 1. Values have no effect on the hardware but can
                                                                 be used for software.

                                                                 In all cases values specified will appear in [CUR_MUL] after programming.

                                                                 This field is always set to [INIT_MUL] on a chip domain reset. */
        uint64_t reserved_31           : 1;
        uint64_t init_mul              : 7;  /**< [ 38: 32](R/W/H) Chip Reset Frequency Multiplier.  Value used to program the PLL on a chip domain
                                                                 reset.  Value is based on 50 MHz.

                                                                 This field is only reinitialized on a cold domain reset. */
        uint64_t reserved_39_47        : 9;
        uint64_t cur_mul               : 7;  /**< [ 54: 48](RO/H) Current frequency multiplier.
                                                                 If Bypass Clock or [USE_MAN] is selected, calculations must be done by software.

                                                                 Units are based on the PLL reference clock.
                                                                   With [ALT_REF] = 00, multiplier units are 50.00 MHz.
                                                                   With [ALT_REF] = 10 or 11, multiplier units are 30.76 MHz.

                                                                 The following values are possible:
                                                                   0 = Uninitialized or powered down PLL selected by [CUR_SEL].
                                                                   1 = Reserved.
                                                                   2 = Reference clock selected.
                                                                   3 = Runt clock selected.
                                                                   4-70 = Valid clock frequency when [ALT_REF] = 00.
                                                                   4-114 = Valid clock frequency when [ALT_REF] = 10 or 11.

                                                                 If NEXT_MAN is set, NEXT_NUL is used to set CUR_MUL but the actual frequency
                                                                 is calculated by:
                                                                         RST_MAN_PLL()[VCO_MUL] / (RST_MAN_PLL()[REF_DIV] * RST_MAN_PLL()[POST_DIV])

                                                                 This field is always set to [INIT_MUL] at the end of a switch operation. */
        uint64_t reserved_55_56        : 2;
        uint64_t cur_sel               : 3;  /**< [ 59: 57](RO/H) Current Clock Source Selection.
                                                                 Enumerated by CLKGEN_SEL_E. */
        uint64_t cur_droop             : 1;  /**< [ 60: 60](RO/H) Droop Enable Status of source indicated by CUR_SEL.
                                                                 REFCLK, RUNT, and BYPASS and all read 0.
                                                                 PLL0 and PLL1 reflect droop event and recovery.
                                                                 ARO relects droop indication only. */
        uint64_t alt_ref               : 2;  /**< [ 62: 61](R/W/H) Alternate reference clock.
                                                                 00 = Use 100 MHz reference.  [CUR_MUL] and [NEXT_MUL] values are based on 50 MHz increments
                                                                 01 = Reserved.
                                                                 10 = Use 30.72 MHz reference clock.  [CUR_MUL] and [NEXT_MUL] values are based on
                                                                      30.72 MHz increments.
                                                                 11 = Use 122.88 MHz reference clock.  [CUR_MUL] and [NEXT_MUL] values are based on
                                                                      30.72 MHz increments.

                                                                 Changing this field typically requires PLL reprogramming and a potential powercycle. */
        uint64_t cur_lock              : 1;  /**< [ 63: 63](RO/H) Lock Status of source indicated by [CUR_SEL].
                                                                 REFCLK and RUNT always read as 1.
                                                                 BYPASS always reads as 0. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_clkgen_pgm_s cn; */
};
typedef union cavm_clkgen_pgm cavm_clkgen_pgm_t;

#define CAVM_CLKGEN_PGM CAVM_CLKGEN_PGM_FUNC()
static inline uint64_t CAVM_CLKGEN_PGM_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CLKGEN_PGM_FUNC(void)
{
    return 0xc01c04000000ll;
}

#define typedef_CAVM_CLKGEN_PGM cavm_clkgen_pgm_t
#define bustype_CAVM_CLKGEN_PGM CSR_TYPE_RSL
#define basename_CAVM_CLKGEN_PGM "CLKGEN_PGM"
#define device_bar_CAVM_CLKGEN_PGM 0x0 /* PF_BAR0 */
#define busnum_CAVM_CLKGEN_PGM 0
#define arguments_CAVM_CLKGEN_PGM -1,-1,-1,-1

/**
 * Register (RSL) clkgen_pll_settings#
 *
 * CLKGEN PLL Settings Register
 * Normalized Description.
 */
union cavm_clkgen_pll_settingsx
{
    uint64_t u;
    struct cavm_clkgen_pll_settingsx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t in_use                : 1;  /**< [ 63: 63](RO/H) Set when PLL is currently the clock source. */
        uint64_t reserved_61_62        : 2;
        uint64_t lock                  : 1;  /**< [ 60: 60](RO/H) PLL lock status.
                                                                 Set when PLL has reached the target frequency. */
        uint64_t ref_div               : 4;  /**< [ 59: 56](RO/H) Reference clock divider.
                                                                   0 = Reserved.
                                                                   1 = Divide reference clock by 1.
                                                                   2 = Divide reference clock by 2 (typical for 100 MHz).
                                                                   3 = Divide reference clock by 3.
                                                                   4 = Divide reference clock by 4 (typical for 122.88 MHz, see ALF_REF).
                                                                   5-31 = Divide reference clock by N. */
        uint64_t power_down            : 1;  /**< [ 55: 55](RO/H) PLL Power Status.
                                                                 Set the PLL has been powered down. */
        uint64_t post_div              : 9;  /**< [ 54: 46](RO/H) Post scalar divider.
                                                                   0, 1 = Reserved.
                                                                   2-511 = Divide VCO output by [POST_DIV]. */
        uint64_t bw                    : 2;  /**< [ 45: 44](RO/H) PLL VCO bandwidth.
                                                                 For Analog PLLs the following setting are supported:
                                                                   0x0 = 20-30 MHz reference clock/ref_div.
                                                                   0x1 = 30-45 MHz reference clock/ref_div.
                                                                   0x2 = 45-65 MHz reference clock/ref_div.
                                                                   0x3 = 65-90 MHz reference clock/ref_div.

                                                                 Bits used as MSBs for DLF_KP and DLF_KI for Digital PLLs.
                                                                   0x3 = 30.72 MHz PLL reference/ref_div (see ALT_REF).
                                                                   0x3 = 50.00 MHz PLL reference/ref_div. */
        uint64_t vco_mul               : 10; /**< [ 43: 34](RO/H) VCO multiplier integer.

                                                                 PLL VCO frequency is [VCO_MUL].[VCO_FRACT] * reference_clock / [REF_DIV].

                                                                 VCO range for PLLs is 2 GHz to 5 GHz. */
        uint64_t vco_fract             : 10; /**< [ 33: 24](RO/H) VCO multiplier fraction.
                                                                 PLL VCO frequency is [VCO_MUL].[VCO_FRACT] * reference_clock / [REF_DIV]. */
        uint64_t icp                   : 4;  /**< [ 23: 20](RO/H) Analog PLL ICP setting.
                                                                 Typical setting 0x6 (0110) for 30.72, 33.33 and 50.00 MHz reference */
        uint64_t dlf_kp                : 5;  /**< [ 19: 15](RO/H) Digital PLL DLF Proportional Path Gain Setting.
                                                                 MSB is 1 bit integer stored in BW[1], 3 bit integer and 2 bit fraction stored here.

                                                                 Typical values are:
                                                                 Rate   Value BW[1], DLF_KP  PLL reference/ref_div
                                                                 20 MHz  0x18   0     0x18   20.00 - 40.00 MHz
                                                                 25 MHz  0x1e   0     0x1e   25.00 - 50.00 MHz
                                                                 30 MHz  0x24   1     0x04   30.00 - 48.70 MHz
                                                                 50 MHz  0x3d   1     0x1d   50 MHz */
        uint64_t dlf_ki                : 5;  /**< [ 14: 10](RO/H) Digital Pll DLF Integral Path Gain Setting.
                                                                 MSB is 1 bit integer stored in BW[0] and 5 bit fraction stored here.

                                                                 Typical values are:
                                                                 Rate   Value BW[0], DLF_KI  PLL reference/ref_div
                                                                 30 MHz  0x3d   1     0x1d   30.00 - 48.70 MHz
                                                                 50 MHz  0x3f   1     0x1f   50 MHz */
        uint64_t update_rate           : 10; /**< [  9:  0](RO/H) PLL update rate.  PLL reference/ref_div in 100KHz increments.
                                                                 Default values
                                                                   307 for 30.72 MHz reference.
                                                                   333 for 33.33 MHz reference.
                                                                   500 for 50.00 MHz reference. */
#else /* Word 0 - Little Endian */
        uint64_t update_rate           : 10; /**< [  9:  0](RO/H) PLL update rate.  PLL reference/ref_div in 100KHz increments.
                                                                 Default values
                                                                   307 for 30.72 MHz reference.
                                                                   333 for 33.33 MHz reference.
                                                                   500 for 50.00 MHz reference. */
        uint64_t dlf_ki                : 5;  /**< [ 14: 10](RO/H) Digital Pll DLF Integral Path Gain Setting.
                                                                 MSB is 1 bit integer stored in BW[0] and 5 bit fraction stored here.

                                                                 Typical values are:
                                                                 Rate   Value BW[0], DLF_KI  PLL reference/ref_div
                                                                 30 MHz  0x3d   1     0x1d   30.00 - 48.70 MHz
                                                                 50 MHz  0x3f   1     0x1f   50 MHz */
        uint64_t dlf_kp                : 5;  /**< [ 19: 15](RO/H) Digital PLL DLF Proportional Path Gain Setting.
                                                                 MSB is 1 bit integer stored in BW[1], 3 bit integer and 2 bit fraction stored here.

                                                                 Typical values are:
                                                                 Rate   Value BW[1], DLF_KP  PLL reference/ref_div
                                                                 20 MHz  0x18   0     0x18   20.00 - 40.00 MHz
                                                                 25 MHz  0x1e   0     0x1e   25.00 - 50.00 MHz
                                                                 30 MHz  0x24   1     0x04   30.00 - 48.70 MHz
                                                                 50 MHz  0x3d   1     0x1d   50 MHz */
        uint64_t icp                   : 4;  /**< [ 23: 20](RO/H) Analog PLL ICP setting.
                                                                 Typical setting 0x6 (0110) for 30.72, 33.33 and 50.00 MHz reference */
        uint64_t vco_fract             : 10; /**< [ 33: 24](RO/H) VCO multiplier fraction.
                                                                 PLL VCO frequency is [VCO_MUL].[VCO_FRACT] * reference_clock / [REF_DIV]. */
        uint64_t vco_mul               : 10; /**< [ 43: 34](RO/H) VCO multiplier integer.

                                                                 PLL VCO frequency is [VCO_MUL].[VCO_FRACT] * reference_clock / [REF_DIV].

                                                                 VCO range for PLLs is 2 GHz to 5 GHz. */
        uint64_t bw                    : 2;  /**< [ 45: 44](RO/H) PLL VCO bandwidth.
                                                                 For Analog PLLs the following setting are supported:
                                                                   0x0 = 20-30 MHz reference clock/ref_div.
                                                                   0x1 = 30-45 MHz reference clock/ref_div.
                                                                   0x2 = 45-65 MHz reference clock/ref_div.
                                                                   0x3 = 65-90 MHz reference clock/ref_div.

                                                                 Bits used as MSBs for DLF_KP and DLF_KI for Digital PLLs.
                                                                   0x3 = 30.72 MHz PLL reference/ref_div (see ALT_REF).
                                                                   0x3 = 50.00 MHz PLL reference/ref_div. */
        uint64_t post_div              : 9;  /**< [ 54: 46](RO/H) Post scalar divider.
                                                                   0, 1 = Reserved.
                                                                   2-511 = Divide VCO output by [POST_DIV]. */
        uint64_t power_down            : 1;  /**< [ 55: 55](RO/H) PLL Power Status.
                                                                 Set the PLL has been powered down. */
        uint64_t ref_div               : 4;  /**< [ 59: 56](RO/H) Reference clock divider.
                                                                   0 = Reserved.
                                                                   1 = Divide reference clock by 1.
                                                                   2 = Divide reference clock by 2 (typical for 100 MHz).
                                                                   3 = Divide reference clock by 3.
                                                                   4 = Divide reference clock by 4 (typical for 122.88 MHz, see ALF_REF).
                                                                   5-31 = Divide reference clock by N. */
        uint64_t lock                  : 1;  /**< [ 60: 60](RO/H) PLL lock status.
                                                                 Set when PLL has reached the target frequency. */
        uint64_t reserved_61_62        : 2;
        uint64_t in_use                : 1;  /**< [ 63: 63](RO/H) Set when PLL is currently the clock source. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_clkgen_pll_settingsx_s cn; */
};
typedef union cavm_clkgen_pll_settingsx cavm_clkgen_pll_settingsx_t;

static inline uint64_t CAVM_CLKGEN_PLL_SETTINGSX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CLKGEN_PLL_SETTINGSX(uint64_t a)
{
    if (a<=1)
        return 0xc01c04000040ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("CLKGEN_PLL_SETTINGSX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CLKGEN_PLL_SETTINGSX(a) cavm_clkgen_pll_settingsx_t
#define bustype_CAVM_CLKGEN_PLL_SETTINGSX(a) CSR_TYPE_RSL
#define basename_CAVM_CLKGEN_PLL_SETTINGSX(a) "CLKGEN_PLL_SETTINGSX"
#define device_bar_CAVM_CLKGEN_PLL_SETTINGSX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_CLKGEN_PLL_SETTINGSX(a) (a)
#define arguments_CAVM_CLKGEN_PLL_SETTINGSX(a) (a),-1,-1,-1

/**
 * Register (RSL) clkgen_power
 *
 * CLKGEN Power, Voltage and Droop Register
 * Fields used to control power related activities including powering
 * down unused PLLs and ARO, controlling PLL Droop Responses, and
 * setting expected voltages for digital PLLs.
 */
union cavm_clkgen_power
{
    uint64_t u;
    struct cavm_clkgen_power_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_63           : 1;
        uint64_t aro_power_down        : 1;  /**< [ 62: 62](R/W/H) ARO Power Status.
                                                                 If set, the selected, ARO is powered down and placed in reset.  When CLKGEN_PGM[NEXT_PGM]
                                                                 is set and CLKGEN_PGM[NEXT_SEL] indicates ARO.  The device is powered up and
                                                                 released from reset by the hardware.  The hardware automatically clears the bit when the
                                                                 sequence is complete and the device is present.  This sequence adds approximately
                                                                 15uS to the programming.  During this time the CLKGEN_PGM[NEXT_SWITCH] timer is
                                                                 frozen.

                                                                 Note that PLLs/AROs that are not present will always have the corresponding POWER_DOWN bit set. */
        uint64_t pll1_power_down       : 1;  /**< [ 61: 61](R/W/H) PLL1 Power Status.
                                                                 If set, the selected, PLL1 is powered down and placed in reset.  When CLKGEN_PGM[NEXT_PGM]
                                                                 is set and CLKGEN_PGM[NEXT_SEL] indicates PLL1.  The device is powered up and
                                                                 released from reset by the hardware.  The hardware automatically clears the bit when the
                                                                 sequence is complete and the device is present.  This sequence adds approximately
                                                                 15uS to the programming.  During this time the CLKGEN_PGM[NEXT_SWITCH] timer is
                                                                 frozen.

                                                                 Note that PLLs/AROs that are not present will always have the corresponding POWER_DOWN bit set. */
        uint64_t pll0_power_down       : 1;  /**< [ 60: 60](R/W/H) PLL0 Power Status.
                                                                 If set, the selected, PLL0 is powered down and placed in reset.  When CLKGEN_PGM[NEXT_PGM]
                                                                 is set and CLKGEN_PGM[NEXT_SEL] indicates PLL0.  The device is powered up and
                                                                 released from reset by the hardware.  The hardware automatically clears the bit when the
                                                                 sequence is complete and the device is present.  This sequence adds approximately
                                                                 15uS to the programming.  During this time the CLKGEN_PGM[NEXT_SWITCH] timer is
                                                                 frozen.

                                                                 Note that PLLs/AROs that are not present will always have the corresponding POWER_DOWN bit set. */
        uint64_t reserved_23_59        : 37;
        uint64_t pll1_voltage          : 3;  /**< [ 22: 20](R/W) PLL1 Minimum Digital Voltage used by digital PLLs.
                                                                 x00 = 700mV
                                                                 x01 = 750mV
                                                                 x10 = 800mV
                                                                 x11 = 850mV

                                                                 PLL1 Minimum Analog Voltage used by analog PLLs.
                                                                 000 = 1200mV
                                                                 001 = 1150V
                                                                 010 = 1100mV
                                                                 011 = 1050mV
                                                                 100 = 1000mV
                                                                 101 = 950mV
                                                                 110 = 900mV
                                                                 111 = 850mV

                                                                 Analog PLLs are indicated if CLKGEN_CONST[ANALOG_PLLS] is set. */
        uint64_t reserved_19           : 1;
        uint64_t pll0_voltage          : 3;  /**< [ 18: 16](R/W) PLL0 Minimum Digital Voltage used by digital PLLs.
                                                                 x00 = 700mV
                                                                 x01 = 750mV
                                                                 x10 = 800mV
                                                                 x11 = 850mV

                                                                 PLL0 Minimum Analog Voltage used by analog PLLs.
                                                                 000 = 1200mV
                                                                 001 = 1150V
                                                                 010 = 1100mV
                                                                 011 = 1050mV
                                                                 100 = 1000mV
                                                                 101 = 950mV
                                                                 110 = 900mV
                                                                 111 = 850mV

                                                                 Analog PLLs are indicated if CLKGEN_CONST[ANALOG_PLLS] is set. */
        uint64_t reserved_15           : 1;
        uint64_t pll1_droop_sm         : 2;  /**< [ 14: 13](RO/H) PLL0 Clock droop activity.
                                                                 00 = Idle, clock at 100%
                                                                 01 = Droop at 50%
                                                                 10 = Droop at 66.6%
                                                                 11 = Droop at 80%

                                                                 Percent is controlled by [PLL_DROOP_DIVIDER]. */
        uint64_t pll1_uses_droop       : 1;  /**< [ 12: 12](R/W) PLL1 Droop Enable.
                                                                 When set, PLL Clock will respond to new droop events if the PLL has been
                                                                 programmed and is currently locked.
                                                                 If cleared when droop is active the clock will go thru recovery.
                                                                 When clear, new droop events are ignored. */
        uint64_t reserved_11           : 1;
        uint64_t pll0_droop_sm         : 2;  /**< [ 10:  9](RO/H) PLL0 Clock droop activity.
                                                                 00 = Idle, clock at 100%
                                                                 01 = Droop at 50%
                                                                 10 = Droop at 66.6%
                                                                 11 = Droop at 80%

                                                                 Percent is controlled by [PLL_DROOP_DIVIDER]. */
        uint64_t pll0_uses_droop       : 1;  /**< [  8:  8](R/W) PLL0 Droop Enable.
                                                                 When set, PLL Clock will respond to new droop events if the PLL has been
                                                                 programmed and is currently locked.
                                                                 If cleared when droop is active the clock will go thru recovery.
                                                                 When clear, new droop events are ignored. */
        uint64_t pll_droop_recovery    : 6;  /**< [  7:  2](R/W) PLL Droop Recovery Period.
                                                                 Specified as 1-64 uS */
        uint64_t pll_droop_divider     : 2;  /**< [  1:  0](R/W) PLL Droop Divider.
                                                                 00 = 80% of full speed clock dropping one pulse every five.
                                                                 01 = 66.6% of full speed clock dropping one pulse every three.
                                                                 10 = 50% of full speed clock using a divide by 2 of the clock period.
                                                                 11 = Reserved. */
#else /* Word 0 - Little Endian */
        uint64_t pll_droop_divider     : 2;  /**< [  1:  0](R/W) PLL Droop Divider.
                                                                 00 = 80% of full speed clock dropping one pulse every five.
                                                                 01 = 66.6% of full speed clock dropping one pulse every three.
                                                                 10 = 50% of full speed clock using a divide by 2 of the clock period.
                                                                 11 = Reserved. */
        uint64_t pll_droop_recovery    : 6;  /**< [  7:  2](R/W) PLL Droop Recovery Period.
                                                                 Specified as 1-64 uS */
        uint64_t pll0_uses_droop       : 1;  /**< [  8:  8](R/W) PLL0 Droop Enable.
                                                                 When set, PLL Clock will respond to new droop events if the PLL has been
                                                                 programmed and is currently locked.
                                                                 If cleared when droop is active the clock will go thru recovery.
                                                                 When clear, new droop events are ignored. */
        uint64_t pll0_droop_sm         : 2;  /**< [ 10:  9](RO/H) PLL0 Clock droop activity.
                                                                 00 = Idle, clock at 100%
                                                                 01 = Droop at 50%
                                                                 10 = Droop at 66.6%
                                                                 11 = Droop at 80%

                                                                 Percent is controlled by [PLL_DROOP_DIVIDER]. */
        uint64_t reserved_11           : 1;
        uint64_t pll1_uses_droop       : 1;  /**< [ 12: 12](R/W) PLL1 Droop Enable.
                                                                 When set, PLL Clock will respond to new droop events if the PLL has been
                                                                 programmed and is currently locked.
                                                                 If cleared when droop is active the clock will go thru recovery.
                                                                 When clear, new droop events are ignored. */
        uint64_t pll1_droop_sm         : 2;  /**< [ 14: 13](RO/H) PLL0 Clock droop activity.
                                                                 00 = Idle, clock at 100%
                                                                 01 = Droop at 50%
                                                                 10 = Droop at 66.6%
                                                                 11 = Droop at 80%

                                                                 Percent is controlled by [PLL_DROOP_DIVIDER]. */
        uint64_t reserved_15           : 1;
        uint64_t pll0_voltage          : 3;  /**< [ 18: 16](R/W) PLL0 Minimum Digital Voltage used by digital PLLs.
                                                                 x00 = 700mV
                                                                 x01 = 750mV
                                                                 x10 = 800mV
                                                                 x11 = 850mV

                                                                 PLL0 Minimum Analog Voltage used by analog PLLs.
                                                                 000 = 1200mV
                                                                 001 = 1150V
                                                                 010 = 1100mV
                                                                 011 = 1050mV
                                                                 100 = 1000mV
                                                                 101 = 950mV
                                                                 110 = 900mV
                                                                 111 = 850mV

                                                                 Analog PLLs are indicated if CLKGEN_CONST[ANALOG_PLLS] is set. */
        uint64_t reserved_19           : 1;
        uint64_t pll1_voltage          : 3;  /**< [ 22: 20](R/W) PLL1 Minimum Digital Voltage used by digital PLLs.
                                                                 x00 = 700mV
                                                                 x01 = 750mV
                                                                 x10 = 800mV
                                                                 x11 = 850mV

                                                                 PLL1 Minimum Analog Voltage used by analog PLLs.
                                                                 000 = 1200mV
                                                                 001 = 1150V
                                                                 010 = 1100mV
                                                                 011 = 1050mV
                                                                 100 = 1000mV
                                                                 101 = 950mV
                                                                 110 = 900mV
                                                                 111 = 850mV

                                                                 Analog PLLs are indicated if CLKGEN_CONST[ANALOG_PLLS] is set. */
        uint64_t reserved_23_59        : 37;
        uint64_t pll0_power_down       : 1;  /**< [ 60: 60](R/W/H) PLL0 Power Status.
                                                                 If set, the selected, PLL0 is powered down and placed in reset.  When CLKGEN_PGM[NEXT_PGM]
                                                                 is set and CLKGEN_PGM[NEXT_SEL] indicates PLL0.  The device is powered up and
                                                                 released from reset by the hardware.  The hardware automatically clears the bit when the
                                                                 sequence is complete and the device is present.  This sequence adds approximately
                                                                 15uS to the programming.  During this time the CLKGEN_PGM[NEXT_SWITCH] timer is
                                                                 frozen.

                                                                 Note that PLLs/AROs that are not present will always have the corresponding POWER_DOWN bit set. */
        uint64_t pll1_power_down       : 1;  /**< [ 61: 61](R/W/H) PLL1 Power Status.
                                                                 If set, the selected, PLL1 is powered down and placed in reset.  When CLKGEN_PGM[NEXT_PGM]
                                                                 is set and CLKGEN_PGM[NEXT_SEL] indicates PLL1.  The device is powered up and
                                                                 released from reset by the hardware.  The hardware automatically clears the bit when the
                                                                 sequence is complete and the device is present.  This sequence adds approximately
                                                                 15uS to the programming.  During this time the CLKGEN_PGM[NEXT_SWITCH] timer is
                                                                 frozen.

                                                                 Note that PLLs/AROs that are not present will always have the corresponding POWER_DOWN bit set. */
        uint64_t aro_power_down        : 1;  /**< [ 62: 62](R/W/H) ARO Power Status.
                                                                 If set, the selected, ARO is powered down and placed in reset.  When CLKGEN_PGM[NEXT_PGM]
                                                                 is set and CLKGEN_PGM[NEXT_SEL] indicates ARO.  The device is powered up and
                                                                 released from reset by the hardware.  The hardware automatically clears the bit when the
                                                                 sequence is complete and the device is present.  This sequence adds approximately
                                                                 15uS to the programming.  During this time the CLKGEN_PGM[NEXT_SWITCH] timer is
                                                                 frozen.

                                                                 Note that PLLs/AROs that are not present will always have the corresponding POWER_DOWN bit set. */
        uint64_t reserved_63           : 1;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_clkgen_power_s cn; */
};
typedef union cavm_clkgen_power cavm_clkgen_power_t;

#define CAVM_CLKGEN_POWER CAVM_CLKGEN_POWER_FUNC()
static inline uint64_t CAVM_CLKGEN_POWER_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CLKGEN_POWER_FUNC(void)
{
    return 0xc01c04000018ll;
}

#define typedef_CAVM_CLKGEN_POWER cavm_clkgen_power_t
#define bustype_CAVM_CLKGEN_POWER CSR_TYPE_RSL
#define basename_CAVM_CLKGEN_POWER "CLKGEN_POWER"
#define device_bar_CAVM_CLKGEN_POWER 0x0 /* PF_BAR0 */
#define busnum_CAVM_CLKGEN_POWER 0
#define arguments_CAVM_CLKGEN_POWER -1,-1,-1,-1

/**
 * Register (RSL) clkgen_ssc
 *
 * CLKGEN Spead Spectrum Control Register
 * Spread Spectrun Control for Analog PLL Only
 */
union cavm_clkgen_ssc
{
    uint64_t u;
    struct cavm_clkgen_ssc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ssc_en                : 1;  /**< [ 63: 63](R/W) 0 = Spread Spectrum Disabled
                                                                 1 = Spread Spectrum Enabled */
        uint64_t reserved_62           : 1;
        uint64_t ssc_step              : 16; /**< [ 61: 46](R/W) Spread Spectrum Step.
                                                                 Unsigned 16 bit fraction specifing amount of change. */
        uint64_t ssc_ub                : 23; /**< [ 45: 23](R/W) Spread Spectrum Upper Bound.
                                                                 Upper seven bits integer
                                                                 Lower 16 bits fraction */
        uint64_t ssc_lb                : 23; /**< [ 22:  0](R/W) Spread Spectrum Lower Bound.
                                                                 Upper seven bits integer
                                                                 Lower 16 bits fraction */
#else /* Word 0 - Little Endian */
        uint64_t ssc_lb                : 23; /**< [ 22:  0](R/W) Spread Spectrum Lower Bound.
                                                                 Upper seven bits integer
                                                                 Lower 16 bits fraction */
        uint64_t ssc_ub                : 23; /**< [ 45: 23](R/W) Spread Spectrum Upper Bound.
                                                                 Upper seven bits integer
                                                                 Lower 16 bits fraction */
        uint64_t ssc_step              : 16; /**< [ 61: 46](R/W) Spread Spectrum Step.
                                                                 Unsigned 16 bit fraction specifing amount of change. */
        uint64_t reserved_62           : 1;
        uint64_t ssc_en                : 1;  /**< [ 63: 63](R/W) 0 = Spread Spectrum Disabled
                                                                 1 = Spread Spectrum Enabled */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_clkgen_ssc_s cn; */
};
typedef union cavm_clkgen_ssc cavm_clkgen_ssc_t;

#define CAVM_CLKGEN_SSC CAVM_CLKGEN_SSC_FUNC()
static inline uint64_t CAVM_CLKGEN_SSC_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CLKGEN_SSC_FUNC(void)
{
    return 0xc01c04000050ll;
}

#define typedef_CAVM_CLKGEN_SSC cavm_clkgen_ssc_t
#define bustype_CAVM_CLKGEN_SSC CSR_TYPE_RSL
#define basename_CAVM_CLKGEN_SSC "CLKGEN_SSC"
#define device_bar_CAVM_CLKGEN_SSC 0x0 /* PF_BAR0 */
#define busnum_CAVM_CLKGEN_SSC 0
#define arguments_CAVM_CLKGEN_SSC -1,-1,-1,-1

/**
 * Register (RSL) clkgen_test
 *
 * CLKGEN Test Register
 * This register controls test features.
 */
union cavm_clkgen_test
{
    uint64_t u;
    struct cavm_clkgen_test_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t occ_shift_byp         : 16; /**< [ 63: 48](R/W/H) OCC Shift TDR Bypass.
                                                                 OCC_SEL determines which OCC Shift Bypass register is being accessed. */
        uint64_t occ_transparent       : 1;  /**< [ 47: 47](R/W/H) OCC Transparent Mode.  When field is clear, OCC Transparent mode is disabled.
                                                                 When set, transparent mode is enabled.
                                                                 OCC_SEL determines which OCC is being accessed. */
        uint64_t occ_pll_ref           : 1;  /**< [ 46: 46](R/W/H) OCC PLL Reference Clock Select.  When field is clear, OCC uses shift clock.
                                                                 When set, OCC uses PLL Reference Clock.
                                                                 OCC_SEL determines which OCC is being accessed. */
        uint64_t occ_sel               : 1;  /**< [ 45: 45](R/W) OCC Selection.
                                                                 When field is clear, CLKOUT OCC registers are referenced.
                                                                 When field is set, TEST CLKOUT OCC registers are referenced.
                                                                 OCC_SEL is used for write selection in conjunction with OCC_UPDATE
                                                                 and used for all register reads. */
        uint64_t occ_update            : 1;  /**< [ 44: 44](WO/H) OCC Update.  When set, the write will update the
                                                                 selected OCC_PLL_REF, OCC_TRANSPARENT and OCC_SHIFT_BYP fields
                                                                 determined by OCC_SEL. When clear, values are maintained.
                                                                 Hardware will automatically clear the field. */
        uint64_t reserved_40_43        : 4;
        uint64_t test_ana              : 5;  /**< [ 39: 35](R/W) Analog test port mux selection used for selected PLL. */
        uint64_t droop_test            : 1;  /**< [ 34: 34](R/W) Manual Droop Enable.
                                                                 Setting this bit forces both PLL0 and PLL1 logic to see a droop event
                                                                 similar to an event provided by the droop detector.   Clearing this
                                                                 bit ends the event unless the droop detector is also indicating a
                                                                 droop. */
        uint64_t msc_enable            : 1;  /**< [ 33: 33](R/W) Miscellaneous Debug Enable.
                                                                 This bit should be set on no more than one PLL and is used to
                                                                 enable this PLL to output to the MSC_CLK pin. */
        uint64_t stop_clk              : 1;  /**< [ 32: 32](R/W) Stop Clock Enable.
                                                                 Setting this bit along with a STOP_CNT causes the CLKOUT to stop
                                                                 after the designated number of clocks after the device has been released
                                                                 from reset. */
        uint64_t stop_cnt              : 32; /**< [ 31:  0](R/W/H) Counter Delay to stop PLL output.
                                                                 The counter decrements every PLL output clock.  Value should be 0 if not used.
                                                                 When enabled minimum setting should be greater than 2. */
#else /* Word 0 - Little Endian */
        uint64_t stop_cnt              : 32; /**< [ 31:  0](R/W/H) Counter Delay to stop PLL output.
                                                                 The counter decrements every PLL output clock.  Value should be 0 if not used.
                                                                 When enabled minimum setting should be greater than 2. */
        uint64_t stop_clk              : 1;  /**< [ 32: 32](R/W) Stop Clock Enable.
                                                                 Setting this bit along with a STOP_CNT causes the CLKOUT to stop
                                                                 after the designated number of clocks after the device has been released
                                                                 from reset. */
        uint64_t msc_enable            : 1;  /**< [ 33: 33](R/W) Miscellaneous Debug Enable.
                                                                 This bit should be set on no more than one PLL and is used to
                                                                 enable this PLL to output to the MSC_CLK pin. */
        uint64_t droop_test            : 1;  /**< [ 34: 34](R/W) Manual Droop Enable.
                                                                 Setting this bit forces both PLL0 and PLL1 logic to see a droop event
                                                                 similar to an event provided by the droop detector.   Clearing this
                                                                 bit ends the event unless the droop detector is also indicating a
                                                                 droop. */
        uint64_t test_ana              : 5;  /**< [ 39: 35](R/W) Analog test port mux selection used for selected PLL. */
        uint64_t reserved_40_43        : 4;
        uint64_t occ_update            : 1;  /**< [ 44: 44](WO/H) OCC Update.  When set, the write will update the
                                                                 selected OCC_PLL_REF, OCC_TRANSPARENT and OCC_SHIFT_BYP fields
                                                                 determined by OCC_SEL. When clear, values are maintained.
                                                                 Hardware will automatically clear the field. */
        uint64_t occ_sel               : 1;  /**< [ 45: 45](R/W) OCC Selection.
                                                                 When field is clear, CLKOUT OCC registers are referenced.
                                                                 When field is set, TEST CLKOUT OCC registers are referenced.
                                                                 OCC_SEL is used for write selection in conjunction with OCC_UPDATE
                                                                 and used for all register reads. */
        uint64_t occ_pll_ref           : 1;  /**< [ 46: 46](R/W/H) OCC PLL Reference Clock Select.  When field is clear, OCC uses shift clock.
                                                                 When set, OCC uses PLL Reference Clock.
                                                                 OCC_SEL determines which OCC is being accessed. */
        uint64_t occ_transparent       : 1;  /**< [ 47: 47](R/W/H) OCC Transparent Mode.  When field is clear, OCC Transparent mode is disabled.
                                                                 When set, transparent mode is enabled.
                                                                 OCC_SEL determines which OCC is being accessed. */
        uint64_t occ_shift_byp         : 16; /**< [ 63: 48](R/W/H) OCC Shift TDR Bypass.
                                                                 OCC_SEL determines which OCC Shift Bypass register is being accessed. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_clkgen_test_s cn; */
};
typedef union cavm_clkgen_test cavm_clkgen_test_t;

#define CAVM_CLKGEN_TEST CAVM_CLKGEN_TEST_FUNC()
static inline uint64_t CAVM_CLKGEN_TEST_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CLKGEN_TEST_FUNC(void)
{
    return 0xc01c04000010ll;
}

#define typedef_CAVM_CLKGEN_TEST cavm_clkgen_test_t
#define bustype_CAVM_CLKGEN_TEST CSR_TYPE_RSL
#define basename_CAVM_CLKGEN_TEST "CLKGEN_TEST"
#define device_bar_CAVM_CLKGEN_TEST 0x0 /* PF_BAR0 */
#define busnum_CAVM_CLKGEN_TEST 0
#define arguments_CAVM_CLKGEN_TEST -1,-1,-1,-1

#endif /* __CAVM_CSRS_CLKGEN_H__ */
