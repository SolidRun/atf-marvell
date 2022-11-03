#ifndef __CAVM_CSRS_TSN_H__
#define __CAVM_CSRS_TSN_H__
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
 * OcteonTX TSN.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration tsn_bar_e
 *
 * TSN Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define CAVM_TSN_BAR_E_TSNX_PF_BAR0(a) (0x87e240000000ll + 0x1000000ll * (a))
#define CAVM_TSN_BAR_E_TSNX_PF_BAR0_SIZE 0x10000ull

/**
 * Register (RSL) tsn#_const
 *
 * TSN Constants Register
 * This register is for software discovery.
 */
union cavm_tsnx_const
{
    uint64_t u;
    struct cavm_tsnx_const_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tsnx_const_s cn; */
};
typedef union cavm_tsnx_const cavm_tsnx_const_t;

static inline uint64_t CAVM_TSNX_CONST(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TSNX_CONST(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=23) || (a==48)))
        return 0x87e240000000ll + 0x1000000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=7) || (a==48)))
        return 0x87e240000000ll + 0x1000000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=17) || (a==48) || ((a>=57)&&(a<=63))))
        return 0x87e240000000ll + 0x1000000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=11) || (a==48) || ((a>=57)&&(a<=63))))
        return 0x87e240000000ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("TSNX_CONST", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TSNX_CONST(a) cavm_tsnx_const_t
#define bustype_CAVM_TSNX_CONST(a) CSR_TYPE_RSL
#define basename_CAVM_TSNX_CONST(a) "TSNX_CONST"
#define device_bar_CAVM_TSNX_CONST(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TSNX_CONST(a) (a)
#define arguments_CAVM_TSNX_CONST(a) (a),-1,-1,-1

/**
 * Register (RSL) tsn#_data
 *
 * TSN Output Data Register
 */
union cavm_tsnx_data
{
    uint64_t u;
    struct cavm_tsnx_data_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_42_63        : 22;
        uint64_t calibrated_fuse_value : 1;  /**< [ 41: 41](RO/H) Contains a copy of this sensor's TSN_CALIBRATED fuse bit. */
        uint64_t bg_trim_fuse_value    : 4;  /**< [ 40: 37](RO/H) Contains a copy of the BG_TRIM fuse value. */
        uint64_t valid                 : 1;  /**< [ 36: 36](R/W1C/H) Asserted when data in [RESULT] is ready to be read.
                                                                 Should be cleared by software after a successful read. */
        uint64_t raw_data              : 12; /**< [ 35: 24](RO/H) Copy of TSEN_ADC_DATA_RAW digital output. */
        uint64_t data                  : 12; /**< [ 23: 12](RO/H) Copy of TSEN_ADC_DATA digital output. */
        uint64_t result                : 12; /**< [ 11:  0](RO/H) Temperature conversion result, qualified by [VALID].
                                                                 Stored as a two's complement integer, in degrees Celsius. */
#else /* Word 0 - Little Endian */
        uint64_t result                : 12; /**< [ 11:  0](RO/H) Temperature conversion result, qualified by [VALID].
                                                                 Stored as a two's complement integer, in degrees Celsius. */
        uint64_t data                  : 12; /**< [ 23: 12](RO/H) Copy of TSEN_ADC_DATA digital output. */
        uint64_t raw_data              : 12; /**< [ 35: 24](RO/H) Copy of TSEN_ADC_DATA_RAW digital output. */
        uint64_t valid                 : 1;  /**< [ 36: 36](R/W1C/H) Asserted when data in [RESULT] is ready to be read.
                                                                 Should be cleared by software after a successful read. */
        uint64_t bg_trim_fuse_value    : 4;  /**< [ 40: 37](RO/H) Contains a copy of the BG_TRIM fuse value. */
        uint64_t calibrated_fuse_value : 1;  /**< [ 41: 41](RO/H) Contains a copy of this sensor's TSN_CALIBRATED fuse bit. */
        uint64_t reserved_42_63        : 22;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tsnx_data_s cn; */
};
typedef union cavm_tsnx_data cavm_tsnx_data_t;

static inline uint64_t CAVM_TSNX_DATA(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TSNX_DATA(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=23) || (a==48)))
        return 0x87e240000018ll + 0x1000000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=7) || (a==48)))
        return 0x87e240000018ll + 0x1000000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=17) || (a==48) || ((a>=57)&&(a<=63))))
        return 0x87e240000018ll + 0x1000000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=11) || (a==48) || ((a>=57)&&(a<=63))))
        return 0x87e240000018ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("TSNX_DATA", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TSNX_DATA(a) cavm_tsnx_data_t
#define bustype_CAVM_TSNX_DATA(a) CSR_TYPE_RSL
#define basename_CAVM_TSNX_DATA(a) "TSNX_DATA"
#define device_bar_CAVM_TSNX_DATA(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TSNX_DATA(a) (a)
#define arguments_CAVM_TSNX_DATA(a) (a),-1,-1,-1

/**
 * Register (RSL) tsn#_fsm_ctl
 *
 * TSN Finite State Machine Control Register
 */
union cavm_tsnx_fsm_ctl
{
    uint64_t u;
    struct cavm_tsnx_fsm_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t sw_start              : 1;  /**< [  5:  5](R/W) Directly control TSEN_ADC_START pin of the temperature sensor.  Enabled only if
                                                                 [SW_FSM_OVERRIDE] is asserted. */
        uint64_t sw_en                 : 1;  /**< [  4:  4](R/W) Directly control TSEN_ADC_EN pin of the temperature sensor.  Enabled only if
                                                                 [SW_FSM_OVERRIDE] is asserted. */
        uint64_t sw_reset              : 1;  /**< [  3:  3](R/W) Directly control TSEN_ADC_RESET pin of the temperature sensor.  Enabled only if
                                                                 [SW_FSM_OVERRIDE] is asserted. */
        uint64_t sw_fsm_override       : 1;  /**< [  2:  2](R/W) Assert to allow software full control of TSENE state pins via [SW_RESET], [SW_START], and [SW_EN]. */
        uint64_t one_shot_mode         : 1;  /**< [  1:  1](R/W/H) Assert to have TSENE capture one single temperature reading.  Hardware will
                                                                 clear this bit when done. */
        uint64_t continuous_mode       : 1;  /**< [  0:  0](R/W) TSENE will continuously update its temperature reading.  Default is asserted.
                                                                 Mutually exclusive with [ONE_SHOT_MODE]. */
#else /* Word 0 - Little Endian */
        uint64_t continuous_mode       : 1;  /**< [  0:  0](R/W) TSENE will continuously update its temperature reading.  Default is asserted.
                                                                 Mutually exclusive with [ONE_SHOT_MODE]. */
        uint64_t one_shot_mode         : 1;  /**< [  1:  1](R/W/H) Assert to have TSENE capture one single temperature reading.  Hardware will
                                                                 clear this bit when done. */
        uint64_t sw_fsm_override       : 1;  /**< [  2:  2](R/W) Assert to allow software full control of TSENE state pins via [SW_RESET], [SW_START], and [SW_EN]. */
        uint64_t sw_reset              : 1;  /**< [  3:  3](R/W) Directly control TSEN_ADC_RESET pin of the temperature sensor.  Enabled only if
                                                                 [SW_FSM_OVERRIDE] is asserted. */
        uint64_t sw_en                 : 1;  /**< [  4:  4](R/W) Directly control TSEN_ADC_EN pin of the temperature sensor.  Enabled only if
                                                                 [SW_FSM_OVERRIDE] is asserted. */
        uint64_t sw_start              : 1;  /**< [  5:  5](R/W) Directly control TSEN_ADC_START pin of the temperature sensor.  Enabled only if
                                                                 [SW_FSM_OVERRIDE] is asserted. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tsnx_fsm_ctl_s cn; */
};
typedef union cavm_tsnx_fsm_ctl cavm_tsnx_fsm_ctl_t;

static inline uint64_t CAVM_TSNX_FSM_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TSNX_FSM_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=23) || (a==48)))
        return 0x87e240000010ll + 0x1000000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=7) || (a==48)))
        return 0x87e240000010ll + 0x1000000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=17) || (a==48) || ((a>=57)&&(a<=63))))
        return 0x87e240000010ll + 0x1000000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=11) || (a==48) || ((a>=57)&&(a<=63))))
        return 0x87e240000010ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("TSNX_FSM_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TSNX_FSM_CTL(a) cavm_tsnx_fsm_ctl_t
#define bustype_CAVM_TSNX_FSM_CTL(a) CSR_TYPE_RSL
#define basename_CAVM_TSNX_FSM_CTL(a) "TSNX_FSM_CTL"
#define device_bar_CAVM_TSNX_FSM_CTL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TSNX_FSM_CTL(a) (a)
#define arguments_CAVM_TSNX_FSM_CTL(a) (a),-1,-1,-1

/**
 * Register (RSL) tsn#_sw_cal
 *
 * TSN Calibration Software Override Register
 */
union cavm_tsnx_sw_cal
{
    uint64_t u;
    struct cavm_tsnx_sw_cal_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_28_63        : 36;
        uint64_t tsene_offset          : 12; /**< [ 27: 16](R/W) Temperature conversion coefficient, stored as decimal value.
                                                                 Default value of TSENE_OFFSET is 112.2, so it is stored, rounded up, as 112. */
        uint64_t tsene_gain_inv        : 12; /**< [ 15:  4](R/W) Temperature conversion coefficient, inverted to store as decimal value.
                                                                 Default value of TSENE_GAIN is 0.0905, so it is inverted and multiplied by 100
                                                                 to be stored as decimal 1105. */
        uint64_t bg_trim               : 4;  /**< [  3:  0](R/W) Bandgap single point trim select.  For software override.
                                                                 This field will only take effect if a TSN is not calibrated, which is determined
                                                                 by the state of the relevant TSN_CALIBRATED fuse bit. */
#else /* Word 0 - Little Endian */
        uint64_t bg_trim               : 4;  /**< [  3:  0](R/W) Bandgap single point trim select.  For software override.
                                                                 This field will only take effect if a TSN is not calibrated, which is determined
                                                                 by the state of the relevant TSN_CALIBRATED fuse bit. */
        uint64_t tsene_gain_inv        : 12; /**< [ 15:  4](R/W) Temperature conversion coefficient, inverted to store as decimal value.
                                                                 Default value of TSENE_GAIN is 0.0905, so it is inverted and multiplied by 100
                                                                 to be stored as decimal 1105. */
        uint64_t tsene_offset          : 12; /**< [ 27: 16](R/W) Temperature conversion coefficient, stored as decimal value.
                                                                 Default value of TSENE_OFFSET is 112.2, so it is stored, rounded up, as 112. */
        uint64_t reserved_28_63        : 36;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tsnx_sw_cal_s cn; */
};
typedef union cavm_tsnx_sw_cal cavm_tsnx_sw_cal_t;

static inline uint64_t CAVM_TSNX_SW_CAL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TSNX_SW_CAL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=23) || (a==48)))
        return 0x87e240000020ll + 0x1000000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=7) || (a==48)))
        return 0x87e240000020ll + 0x1000000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=17) || (a==48) || ((a>=57)&&(a<=63))))
        return 0x87e240000020ll + 0x1000000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=11) || (a==48) || ((a>=57)&&(a<=63))))
        return 0x87e240000020ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("TSNX_SW_CAL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TSNX_SW_CAL(a) cavm_tsnx_sw_cal_t
#define bustype_CAVM_TSNX_SW_CAL(a) CSR_TYPE_RSL
#define basename_CAVM_TSNX_SW_CAL(a) "TSNX_SW_CAL"
#define device_bar_CAVM_TSNX_SW_CAL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TSNX_SW_CAL(a) (a)
#define arguments_CAVM_TSNX_SW_CAL(a) (a),-1,-1,-1

/**
 * Register (RSL) tsn#_therm_trip
 *
 * TSN Thermal Trip Control Register
 */
union cavm_tsnx_therm_trip
{
    uint64_t u;
    struct cavm_tsnx_therm_trip_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_26_63        : 38;
        uint64_t alert                 : 1;  /**< [ 25: 25](RO/H) If [HI_LIMIT] is breached, this pin will assert.  Must be cleared by reset. */
        uint64_t en                    : 1;  /**< [ 24: 24](R/W) Enables therm_alert checking. */
        uint64_t lo_limit              : 12; /**< [ 23: 12](R/W) When [EN] is set, CPC thermal attack signal will assert to trigger an interrupt
                                                                 This value must be represented in signed two's complement. */
        uint64_t hi_limit              : 12; /**< [ 11:  0](R/W) When [EN] is set, [ALERT] will assert if a temperature reading is higher than this.
                                                                 limit.  A thermal alert causes a chip reset, and thermal_trip_l pin will assert.
                                                                 This value must be represented in signed two's complement. */
#else /* Word 0 - Little Endian */
        uint64_t hi_limit              : 12; /**< [ 11:  0](R/W) When [EN] is set, [ALERT] will assert if a temperature reading is higher than this.
                                                                 limit.  A thermal alert causes a chip reset, and thermal_trip_l pin will assert.
                                                                 This value must be represented in signed two's complement. */
        uint64_t lo_limit              : 12; /**< [ 23: 12](R/W) When [EN] is set, CPC thermal attack signal will assert to trigger an interrupt
                                                                 This value must be represented in signed two's complement. */
        uint64_t en                    : 1;  /**< [ 24: 24](R/W) Enables therm_alert checking. */
        uint64_t alert                 : 1;  /**< [ 25: 25](RO/H) If [HI_LIMIT] is breached, this pin will assert.  Must be cleared by reset. */
        uint64_t reserved_26_63        : 38;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tsnx_therm_trip_s cn; */
};
typedef union cavm_tsnx_therm_trip cavm_tsnx_therm_trip_t;

static inline uint64_t CAVM_TSNX_THERM_TRIP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TSNX_THERM_TRIP(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=23) || (a==48)))
        return 0x87e240000028ll + 0x1000000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=7) || (a==48)))
        return 0x87e240000028ll + 0x1000000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=17) || (a==48) || ((a>=57)&&(a<=63))))
        return 0x87e240000028ll + 0x1000000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=11) || (a==48) || ((a>=57)&&(a<=63))))
        return 0x87e240000028ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("TSNX_THERM_TRIP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TSNX_THERM_TRIP(a) cavm_tsnx_therm_trip_t
#define bustype_CAVM_TSNX_THERM_TRIP(a) CSR_TYPE_RSL
#define basename_CAVM_TSNX_THERM_TRIP(a) "TSNX_THERM_TRIP"
#define device_bar_CAVM_TSNX_THERM_TRIP(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TSNX_THERM_TRIP(a) (a)
#define arguments_CAVM_TSNX_THERM_TRIP(a) (a),-1,-1,-1

/**
 * Register (RSL) tsn#_tsene_ctl
 *
 * TSN Temp Sensor Static Input Control Register
 */
union cavm_tsnx_tsene_ctl
{
    uint64_t u;
    struct cavm_tsnx_tsene_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_23_63        : 41;
        uint64_t atest_sel             : 3;  /**< [ 22: 20](R/W) Analog test signal select.
                                                                 0x0 = ATEST_MUX disabled and TSEN_ATEST output Hi-Z (default).
                                                                 0x1 = TSEN_ATEST output external VBE.
                                                                 0x2 = TSEN_ATEST output internal VBE.
                                                                 0x3 = TSEN_ATEST output VBECM.
                                                                 0x4 = TSEN_ATEST output VICM.
                                                                 0x5 = TSEN_ATEST output VOCM.
                                                                 0x6 = TSEN_ATEST output VREF/2.
                                                                 0x7 = SGND. */
        uint64_t bg_rpc_en             : 1;  /**< [ 19: 19](R/W) Bandgap Ripple Canceling Enable Select.  Defaults to enabled. */
        uint64_t fg_cal_sel            : 2;  /**< [ 18: 17](R/W) ADC foreground calibration select.
                                                                 0x0 = Automatic self-offset-cal skipped, TSENE_ADC in normal mode.
                                                                 0x1 = Automatic self-offset-cal skipped, TSENE_ADC in ADC gain cal mode.
                                                                 0x2 = Automatic self-offset-cal enforced, TSENE_ADC in normal mode (default).
                                                                 0x3 = Automatic self-offset-cal enforced, TSENE_ADC in ADC gain cal mode. */
        uint64_t capswp_en             : 1;  /**< [ 16: 16](R/W) Sampling cap swap enable select. */
        uint64_t dem_en                : 1;  /**< [ 15: 15](R/W) Dynamic element matching (DEM), used to reduce the error that results from
                                                                 current-source mismatches. */
        uint64_t raw_sel               : 2;  /**< [ 14: 13](R/W) Digital raw data select.
                                                                 0x0 = 12-b post-avg post_cal TSENE_ADC measurement data in code (Raw1 reg).
                                                                 0x1 = 12-b post-avg but pre-cal measurement data in code (Raw2 reg).
                                                                 0x2 = 12-b self cal data in code (Raw3 reg) (default).
                                                                 0x3 = 12-b pre-avg measurement data in code (Raw4 reg). */
        uint64_t chop_sel              : 2;  /**< [ 12: 11](R/W) ADC chopper frequency select.
                                                                 0x0 = TSEN_ADC_CLK/4 (default).
                                                                 0x1 = TSEN_ADC_CLK/8.
                                                                 0x2 = TSEN_ADC_CLK/16.
                                                                 0x3 = TSEN_ADC_CLK/32 (only available for OSR = 256 and 512). */
        uint64_t chop_en               : 2;  /**< [ 10:  9](R/W) Chopper enable select.
                                                                 0x0 = All choppers are disabled.
                                                                 0x1 = ADC chopper is enabled, bandgap chopper is disabled.
                                                                 0x2 = ADC chopper is disabled, bandgap chopper is enabled.
                                                                 0x3 = All choppers are enabled (default). */
        uint64_t osr                   : 2;  /**< [  8:  7](R/W) Over sample rate select.
                                                                   0x0 = 64.
                                                                   0x1 = 128.
                                                                   0x2 = 256.
                                                                   0x3 = 512 (default). */
        uint64_t bias                  : 1;  /**< [  6:  6](R/W) Temperature sensor low-output current selection.  Set to 1 to enable low-level current output. */
        uint64_t mode                  : 2;  /**< [  5:  4](R/W) External/internal sensor mode control.
                                                                 0x0 = Internal sensor.
                                                                 0x1 = On-chip remote ADC input.
                                                                 0x2 = On-chip remote sensor.
                                                                 0x3 = Unused. */
        uint64_t avg                   : 1;  /**< [  3:  3](R/W) TSEN internal average enable.  A setting of 0 averages four consecutive results. */
        uint64_t ch_sel                : 3;  /**< [  2:  0](R/W) External thermal diode channel select. */
#else /* Word 0 - Little Endian */
        uint64_t ch_sel                : 3;  /**< [  2:  0](R/W) External thermal diode channel select. */
        uint64_t avg                   : 1;  /**< [  3:  3](R/W) TSEN internal average enable.  A setting of 0 averages four consecutive results. */
        uint64_t mode                  : 2;  /**< [  5:  4](R/W) External/internal sensor mode control.
                                                                 0x0 = Internal sensor.
                                                                 0x1 = On-chip remote ADC input.
                                                                 0x2 = On-chip remote sensor.
                                                                 0x3 = Unused. */
        uint64_t bias                  : 1;  /**< [  6:  6](R/W) Temperature sensor low-output current selection.  Set to 1 to enable low-level current output. */
        uint64_t osr                   : 2;  /**< [  8:  7](R/W) Over sample rate select.
                                                                   0x0 = 64.
                                                                   0x1 = 128.
                                                                   0x2 = 256.
                                                                   0x3 = 512 (default). */
        uint64_t chop_en               : 2;  /**< [ 10:  9](R/W) Chopper enable select.
                                                                 0x0 = All choppers are disabled.
                                                                 0x1 = ADC chopper is enabled, bandgap chopper is disabled.
                                                                 0x2 = ADC chopper is disabled, bandgap chopper is enabled.
                                                                 0x3 = All choppers are enabled (default). */
        uint64_t chop_sel              : 2;  /**< [ 12: 11](R/W) ADC chopper frequency select.
                                                                 0x0 = TSEN_ADC_CLK/4 (default).
                                                                 0x1 = TSEN_ADC_CLK/8.
                                                                 0x2 = TSEN_ADC_CLK/16.
                                                                 0x3 = TSEN_ADC_CLK/32 (only available for OSR = 256 and 512). */
        uint64_t raw_sel               : 2;  /**< [ 14: 13](R/W) Digital raw data select.
                                                                 0x0 = 12-b post-avg post_cal TSENE_ADC measurement data in code (Raw1 reg).
                                                                 0x1 = 12-b post-avg but pre-cal measurement data in code (Raw2 reg).
                                                                 0x2 = 12-b self cal data in code (Raw3 reg) (default).
                                                                 0x3 = 12-b pre-avg measurement data in code (Raw4 reg). */
        uint64_t dem_en                : 1;  /**< [ 15: 15](R/W) Dynamic element matching (DEM), used to reduce the error that results from
                                                                 current-source mismatches. */
        uint64_t capswp_en             : 1;  /**< [ 16: 16](R/W) Sampling cap swap enable select. */
        uint64_t fg_cal_sel            : 2;  /**< [ 18: 17](R/W) ADC foreground calibration select.
                                                                 0x0 = Automatic self-offset-cal skipped, TSENE_ADC in normal mode.
                                                                 0x1 = Automatic self-offset-cal skipped, TSENE_ADC in ADC gain cal mode.
                                                                 0x2 = Automatic self-offset-cal enforced, TSENE_ADC in normal mode (default).
                                                                 0x3 = Automatic self-offset-cal enforced, TSENE_ADC in ADC gain cal mode. */
        uint64_t bg_rpc_en             : 1;  /**< [ 19: 19](R/W) Bandgap Ripple Canceling Enable Select.  Defaults to enabled. */
        uint64_t atest_sel             : 3;  /**< [ 22: 20](R/W) Analog test signal select.
                                                                 0x0 = ATEST_MUX disabled and TSEN_ATEST output Hi-Z (default).
                                                                 0x1 = TSEN_ATEST output external VBE.
                                                                 0x2 = TSEN_ATEST output internal VBE.
                                                                 0x3 = TSEN_ATEST output VBECM.
                                                                 0x4 = TSEN_ATEST output VICM.
                                                                 0x5 = TSEN_ATEST output VOCM.
                                                                 0x6 = TSEN_ATEST output VREF/2.
                                                                 0x7 = SGND. */
        uint64_t reserved_23_63        : 41;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tsnx_tsene_ctl_s cn; */
};
typedef union cavm_tsnx_tsene_ctl cavm_tsnx_tsene_ctl_t;

static inline uint64_t CAVM_TSNX_TSENE_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TSNX_TSENE_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=23) || (a==48)))
        return 0x87e240000008ll + 0x1000000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=7) || (a==48)))
        return 0x87e240000008ll + 0x1000000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=17) || (a==48) || ((a>=57)&&(a<=63))))
        return 0x87e240000008ll + 0x1000000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=11) || (a==48) || ((a>=57)&&(a<=63))))
        return 0x87e240000008ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("TSNX_TSENE_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TSNX_TSENE_CTL(a) cavm_tsnx_tsene_ctl_t
#define bustype_CAVM_TSNX_TSENE_CTL(a) CSR_TYPE_RSL
#define basename_CAVM_TSNX_TSENE_CTL(a) "TSNX_TSENE_CTL"
#define device_bar_CAVM_TSNX_TSENE_CTL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TSNX_TSENE_CTL(a) (a)
#define arguments_CAVM_TSNX_TSENE_CTL(a) (a),-1,-1,-1

#endif /* __CAVM_CSRS_TSN_H__ */
