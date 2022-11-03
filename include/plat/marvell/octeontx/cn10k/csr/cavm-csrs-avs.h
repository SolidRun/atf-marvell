#ifndef __CAVM_CSRS_AVS_H__
#define __CAVM_CSRS_AVS_H__
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
 * OcteonTX AVS.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration avs_bar_e
 *
 * AVS Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define CAVM_AVS_BAR_E_AVS_PF_BAR0 (0x80a000000000ll)
#define CAVM_AVS_BAR_E_AVS_PF_BAR0_SIZE 0x10000ull
#define CAVM_AVS_BAR_E_AVS_PF_BAR4 (0x80a000f00000ll)
#define CAVM_AVS_BAR_E_AVS_PF_BAR4_SIZE 0x100000ull

/**
 * Enumeration avs_bus_status_e
 *
 * AVS AVSBus Status Enumeration
 * Bit positions of the data fields used in a read or write of the \<AVSBus_Status\>.
 * Note this is different than the format used by the \<StatusResp\>.
 */
#define CAVM_AVS_BUS_STATUS_E_IOUT_OC_WARNING (0xe)
#define CAVM_AVS_BUS_STATUS_E_IOUT_OT_WARNING (0xc)
#define CAVM_AVS_BUS_STATUS_E_POUT_OP_WARNING (0xb)
#define CAVM_AVS_BUS_STATUS_E_VDONE (0xf)
#define CAVM_AVS_BUS_STATUS_E_VOUT_UV_WARNING (0xd)

/**
 * Enumeration avs_cmd_e
 *
 * AVS Command Enumeration
 * Enumerates the master frame Cmd field to send on next AVS_STS[START].
 */
#define CAVM_AVS_CMD_E_READ (3)
#define CAVM_AVS_CMD_E_WRITE_AND_COMMIT (0)
#define CAVM_AVS_CMD_E_WRITE_AND_HOLD (1)

/**
 * Enumeration avs_cmddatatype_e
 *
 * AVS Command Group Enumeration
 * Enumerates the type of data to which the Cmd applies for CmdGroup=STD.
 */
#define CAVM_AVS_CMDDATATYPE_E_AVSBUS_STATUS (0xe)
#define CAVM_AVS_CMDDATATYPE_E_AVSBUS_VERSION (0xf)
#define CAVM_AVS_CMDDATATYPE_E_RAIL_CURRENT (2)
#define CAVM_AVS_CMDDATATYPE_E_RAIL_POWER_MODE (5)
#define CAVM_AVS_CMDDATATYPE_E_RAIL_TEMPERATURE (3)
#define CAVM_AVS_CMDDATATYPE_E_RESET_RAIL_VOLTAGE_TO_DEFAULT (4)
#define CAVM_AVS_CMDDATATYPE_E_TARGET_RAIL_VOLTAGE (0)
#define CAVM_AVS_CMDDATATYPE_E_TARGET_RAIL_VOUT_TRANSITION_RATE (1)

/**
 * Enumeration avs_cmdgroup_e
 *
 * AVS Command Group Enumeration
 * Enumerates the master frame CmdGroup to send on next AVS_STS[START].
 */
#define CAVM_AVS_CMDGROUP_E_MFG_SPECIFIC (1)
#define CAVM_AVS_CMDGROUP_E_STD (0)

/**
 * Enumeration avs_int_vec_e
 *
 * AVS MSI-X Vector Enumeration
 * Enumerates the MSI-X interrupt vectors.
 */
#define CAVM_AVS_INT_VEC_E_INTS (0)

/**
 * Enumeration avs_slaveack_e
 *
 * AVS SlaveAck Enumeration
 * Received response frame's SlaveACK field.
 */
#define CAVM_AVS_SLAVEACK_E_ACTION_TAKEN (0)
#define CAVM_AVS_SLAVEACK_E_BAD_CRC (2)
#define CAVM_AVS_SLAVEACK_E_GOOD_CMD_NO_ACTION (1)
#define CAVM_AVS_SLAVEACK_E_GOOD_CRC_BAD_CMD (3)

/**
 * Enumeration avs_statusresp_e
 *
 * AVS Status Response Bit Number Enumeration
 * Enumerates the bit positions of the bits in AVS_SDATA[STATUSRESP] received after
 * every transaction.
 * Note this is different than the data returned by an AVSBus_Status read.
 */
#define CAVM_AVS_STATUSRESP_E_AVSBUS_CONTROL (2)
#define CAVM_AVS_STATUSRESP_E_STATUS_ALERT (3)
#define CAVM_AVS_STATUSRESP_E_VDONE (4)

/**
 * Register (NCB) avs_avs_n5p_1_ctl0
 *
 * AVS_N5P Control Register
 * Configuration register 0 for the configuration for AVS_N5P_SYS.
 */
union cavm_avs_avs_n5p_1_ctl0
{
    uint64_t u;
    struct cavm_avs_avs_n5p_1_ctl0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t enable                : 1;  /**< [ 63: 63](R/W) Reserved. */
        uint64_t avs_pause             : 1;  /**< [ 62: 62](R/W) Reserved. */
        uint64_t manual                : 1;  /**< [ 61: 61](R/W) Reserved. */
        uint64_t min_max_val_rst       : 1;  /**< [ 60: 60](R/W) Reserved. */
        uint64_t fvct                  : 1;  /**< [ 59: 59](R/W) Reserved. */
        uint64_t int1                  : 4;  /**< [ 58: 55](R/W) Reserved. */
        uint64_t rst_b                 : 1;  /**< [ 54: 54](R/W) Reserved. */
        uint64_t vcr                   : 10; /**< [ 53: 44](R/W) Reserved. */
        uint64_t select_vsense0        : 1;  /**< [ 43: 43](R/W) Reserved. */
        uint64_t inc_offset_range      : 1;  /**< [ 42: 42](R/W) Reserved. */
        uint64_t div_cal               : 3;  /**< [ 41: 39](R/W) Reserved. */
        uint64_t cfg_vdd_setpoint      : 3;  /**< [ 38: 36](R/W) Reserved. */
        uint64_t sel_bg_chop_clk       : 1;  /**< [ 35: 35](R/W) Reserved. */
        uint64_t bg_cfg                : 3;  /**< [ 34: 32](R/W) Reserved. */
        uint64_t avg                   : 3;  /**< [ 31: 29](R/W) Reserved. */
        uint64_t high_vdd_limit        : 10; /**< [ 28: 19](R/W) Reserved. */
        uint64_t low_vdd_limit         : 10; /**< [ 18:  9](R/W) Reserved. */
        uint64_t manual_delta          : 8;  /**< [  8:  1](R/W) Reserved. */
        uint64_t skip_cal              : 1;  /**< [  0:  0](R/W) Reserved. */
#else /* Word 0 - Little Endian */
        uint64_t skip_cal              : 1;  /**< [  0:  0](R/W) Reserved. */
        uint64_t manual_delta          : 8;  /**< [  8:  1](R/W) Reserved. */
        uint64_t low_vdd_limit         : 10; /**< [ 18:  9](R/W) Reserved. */
        uint64_t high_vdd_limit        : 10; /**< [ 28: 19](R/W) Reserved. */
        uint64_t avg                   : 3;  /**< [ 31: 29](R/W) Reserved. */
        uint64_t bg_cfg                : 3;  /**< [ 34: 32](R/W) Reserved. */
        uint64_t sel_bg_chop_clk       : 1;  /**< [ 35: 35](R/W) Reserved. */
        uint64_t cfg_vdd_setpoint      : 3;  /**< [ 38: 36](R/W) Reserved. */
        uint64_t div_cal               : 3;  /**< [ 41: 39](R/W) Reserved. */
        uint64_t inc_offset_range      : 1;  /**< [ 42: 42](R/W) Reserved. */
        uint64_t select_vsense0        : 1;  /**< [ 43: 43](R/W) Reserved. */
        uint64_t vcr                   : 10; /**< [ 53: 44](R/W) Reserved. */
        uint64_t rst_b                 : 1;  /**< [ 54: 54](R/W) Reserved. */
        uint64_t int1                  : 4;  /**< [ 58: 55](R/W) Reserved. */
        uint64_t fvct                  : 1;  /**< [ 59: 59](R/W) Reserved. */
        uint64_t min_max_val_rst       : 1;  /**< [ 60: 60](R/W) Reserved. */
        uint64_t manual                : 1;  /**< [ 61: 61](R/W) Reserved. */
        uint64_t avs_pause             : 1;  /**< [ 62: 62](R/W) Reserved. */
        uint64_t enable                : 1;  /**< [ 63: 63](R/W) Reserved. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_avs_avs_n5p_1_ctl0_s cn; */
};
typedef union cavm_avs_avs_n5p_1_ctl0 cavm_avs_avs_n5p_1_ctl0_t;

#define CAVM_AVS_AVS_N5P_1_CTL0 CAVM_AVS_AVS_N5P_1_CTL0_FUNC()
static inline uint64_t CAVM_AVS_AVS_N5P_1_CTL0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_AVS_AVS_N5P_1_CTL0_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN10KA_BX))
        return 0x80a000001088ll;
    if (cavm_is_model(OCTEONTX_CN10KB))
        return 0x80a000001088ll;
    if (cavm_is_model(OCTEONTX_CNF10KB_BX))
        return 0x80a000001088ll;
    __cavm_csr_fatal("AVS_AVS_N5P_1_CTL0", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_AVS_AVS_N5P_1_CTL0 cavm_avs_avs_n5p_1_ctl0_t
#define bustype_CAVM_AVS_AVS_N5P_1_CTL0 CSR_TYPE_NCB
#define basename_CAVM_AVS_AVS_N5P_1_CTL0 "AVS_AVS_N5P_1_CTL0"
#define device_bar_CAVM_AVS_AVS_N5P_1_CTL0 0x0 /* PF_BAR0 */
#define busnum_CAVM_AVS_AVS_N5P_1_CTL0 0
#define arguments_CAVM_AVS_AVS_N5P_1_CTL0 -1,-1,-1,-1

/**
 * Register (NCB) avs_avs_n5p_1_ctl1
 *
 * AVS_N5P Control Register
 * Configuration register 1 for the configuration for AVS_N5P_SYS.
 */
union cavm_avs_avs_n5p_1_ctl1
{
    uint64_t u;
    struct cavm_avs_avs_n5p_1_ctl1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t tp_cfg                : 5;  /**< [ 63: 59](R/W) Reserved. */
        uint64_t int2                  : 5;  /**< [ 58: 54](R/W) Reserved. */
        uint64_t cfg_vddx2_slice       : 5;  /**< [ 53: 49](R/W) Reserved. */
        uint64_t cfg_vddx2_loop_re     : 1;  /**< [ 48: 48](R/W) Reserved. */
        uint64_t cfg_osc_cal           : 5;  /**< [ 47: 43](R/W) Reserved. */
        uint64_t aaf_cfg               : 2;  /**< [ 42: 41](R/W) Reserved. */
        uint64_t relative_delta_en     : 1;  /**< [ 40: 40](R/W) Reserved. */
        uint64_t target_delta          : 8;  /**< [ 39: 32](R/W) Reserved. */
        uint64_t speed_target          : 16; /**< [ 31: 16](R/W) Reserved. */
        uint64_t dro_count_interval    : 16; /**< [ 15:  0](R/W) Reserved. */
#else /* Word 0 - Little Endian */
        uint64_t dro_count_interval    : 16; /**< [ 15:  0](R/W) Reserved. */
        uint64_t speed_target          : 16; /**< [ 31: 16](R/W) Reserved. */
        uint64_t target_delta          : 8;  /**< [ 39: 32](R/W) Reserved. */
        uint64_t relative_delta_en     : 1;  /**< [ 40: 40](R/W) Reserved. */
        uint64_t aaf_cfg               : 2;  /**< [ 42: 41](R/W) Reserved. */
        uint64_t cfg_osc_cal           : 5;  /**< [ 47: 43](R/W) Reserved. */
        uint64_t cfg_vddx2_loop_re     : 1;  /**< [ 48: 48](R/W) Reserved. */
        uint64_t cfg_vddx2_slice       : 5;  /**< [ 53: 49](R/W) Reserved. */
        uint64_t int2                  : 5;  /**< [ 58: 54](R/W) Reserved. */
        uint64_t tp_cfg                : 5;  /**< [ 63: 59](R/W) Reserved. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_avs_avs_n5p_1_ctl1_s cn; */
};
typedef union cavm_avs_avs_n5p_1_ctl1 cavm_avs_avs_n5p_1_ctl1_t;

#define CAVM_AVS_AVS_N5P_1_CTL1 CAVM_AVS_AVS_N5P_1_CTL1_FUNC()
static inline uint64_t CAVM_AVS_AVS_N5P_1_CTL1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_AVS_AVS_N5P_1_CTL1_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN10KA_BX))
        return 0x80a000001090ll;
    if (cavm_is_model(OCTEONTX_CN10KB))
        return 0x80a000001090ll;
    if (cavm_is_model(OCTEONTX_CNF10KB_BX))
        return 0x80a000001090ll;
    __cavm_csr_fatal("AVS_AVS_N5P_1_CTL1", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_AVS_AVS_N5P_1_CTL1 cavm_avs_avs_n5p_1_ctl1_t
#define bustype_CAVM_AVS_AVS_N5P_1_CTL1 CSR_TYPE_NCB
#define basename_CAVM_AVS_AVS_N5P_1_CTL1 "AVS_AVS_N5P_1_CTL1"
#define device_bar_CAVM_AVS_AVS_N5P_1_CTL1 0x0 /* PF_BAR0 */
#define busnum_CAVM_AVS_AVS_N5P_1_CTL1 0
#define arguments_CAVM_AVS_AVS_N5P_1_CTL1 -1,-1,-1,-1

/**
 * Register (NCB) avs_avs_n5p_ctl0
 *
 * AVS_N5P Control Register
 * Configuration register 0 for the configuration for AVS_N5P.
 */
union cavm_avs_avs_n5p_ctl0
{
    uint64_t u;
    struct cavm_avs_avs_n5p_ctl0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t enable                : 1;  /**< [ 63: 63](R/W) AVS_N5 enable control. 0 = AVS_N5 is off; power consumption is minimized; vddfb
                                                                 floats in master mode. 1 = AVS_N5 is on; vddfb is driven After enable goes high,
                                                                 internal calibration process precedes normal operation. */
        uint64_t avs_pause             : 1;  /**< [ 62: 62](R/W) Set AVS_N5 in pause mode. 0 = Normal operation mode. 1 = Stops updating voltage
                                                                 level. Analog control loop through vddfb still functions normally. */
        uint64_t manual                : 1;  /**< [ 61: 61](R/W) Manual setting of delta voltage (open loop control). This is used for debug
                                                                 purposes only. 0 = Auto operation. 1 = Manual operation. */
        uint64_t min_max_val_rst       : 1;  /**< [ 60: 60](R/W) Reset signal for the following outputs. max_dro_count, min_dro_count,
                                                                 max_avs_delta, max_avs_delta. 0 = specified outputs are not affected. 1 =
                                                                 specified outputs are in reset. */
        uint64_t fvct                  : 1;  /**< [ 59: 59](R/W) Fast_voltage_change_trigger Edge triggered (for both edges) signal, initiating a
                                                                 fast delta voltage change to the value specified in target_delta[7:0]. This
                                                                 signal is in effect only after AVS_N5calibration sequence has completed (A low
                                                                 to high transition on the dro_en signal can serve as a logic indication that
                                                                 normal operation has started */
        uint64_t int1                  : 4;  /**< [ 58: 55](R/W) Reserved. */
        uint64_t rst_b                 : 1;  /**< [ 54: 54](R/W) Active low reset signal. */
        uint64_t vcr                   : 10; /**< [ 53: 44](R/W) voltage_change_rate. Voltage change rate (in number of clk cycles between AVS_N5
                                                                 steps) when 1. A fast voltage change is triggered. 2. AVS_N5 is being disabled
                                                                 (enable input changes 1'b1 to 1'b0) and offset delta voltage is being cleared. */
        uint64_t select_vsense0        : 1;  /**< [ 43: 43](R/W) select_vsense0 Voltage sense input control. 0 = avs_vdd_sense1 is selected. 1 =
                                                                 avs_vdd_sense0 is selected. */
        uint64_t inc_offset_range      : 1;  /**< [ 42: 42](R/W) Inc Offset Range AVS_N5 voltage step and offset range control. 0 = Step is
                                                                 ~1.56mV. Offset range is +/-200mv. 1 = Step is ~1.95mV. Offset range is
                                                                 +/-250mv. */
        uint64_t div_cal               : 3;  /**< [ 41: 39](R/W) Adjusting internal offset gen reference voltage. */
        uint64_t cfg_vdd_setpoint      : 3;  /**< [ 38: 36](R/W) Select the range for VDD setpoint voltage when AVS_N5 is not activated 0x1 =
                                                                 0.91V - 0.96V, 0x2 = 0.87V - 0.9V, 0x3 = 0.82V - 0.86V, 0x4 = 0.75V - 0.81V, 0x5
                                                                 = 0.7V - 0.74V, 0x6 = 0.65V - 0.69V, This configuration must be set according to
                                                                 the regulator setpoint on board before AVS_N5 is enabled. Optimal setting is
                                                                 advised, but there are some margins in this configuration. */
        uint64_t sel_bg_chop_clk       : 1;  /**< [ 35: 35](R/W) Bandgap clock chopping rate 0 = high rate (16/32). 1 = low rate (32/64). */
        uint64_t bg_cfg                : 3;  /**< [ 34: 32](R/W) Band-Gap circuit temperature curvature configuration. */
        uint64_t avg                   : 3;  /**< [ 31: 29](R/W) Average DRO readout by 2AVG. */
        uint64_t high_vdd_limit        : 10; /**< [ 28: 19](R/W) Defines the high voltage limit. Set high_vdd_limit using the following formula
                                                                 high_vdd_limit=VVref x 1024 Where V is the actual required voltage in volts.
                                                                 Vref = 1.222V high_vdd_limit is the decimal value which is the outcome of this
                                                                 equation. */
        uint64_t low_vdd_limit         : 10; /**< [ 18:  9](R/W) Defines the low voltage limit. Set low_vdd_limit using the following formula
                                                                 low_vdd_limit=VVref x 1024 Where V is the actual required voltage in volts. Vref
                                                                 = 1.222V (post layout simulations value; final value still pending silicon
                                                                 testing) low_vdd_limit is the decimal value which is the outcome of this
                                                                 equation. */
        uint64_t manual_delta          : 8;  /**< [  8:  1](R/W) Manual setting for delta voltage. This value is effective while manual=1'b1 . */
        uint64_t skip_cal              : 1;  /**< [  0:  0](R/W) Skip initial vddfb offset calibration 0 = perform initial calibration. 1 = skip
                                                                 initial calibration. */
#else /* Word 0 - Little Endian */
        uint64_t skip_cal              : 1;  /**< [  0:  0](R/W) Skip initial vddfb offset calibration 0 = perform initial calibration. 1 = skip
                                                                 initial calibration. */
        uint64_t manual_delta          : 8;  /**< [  8:  1](R/W) Manual setting for delta voltage. This value is effective while manual=1'b1 . */
        uint64_t low_vdd_limit         : 10; /**< [ 18:  9](R/W) Defines the low voltage limit. Set low_vdd_limit using the following formula
                                                                 low_vdd_limit=VVref x 1024 Where V is the actual required voltage in volts. Vref
                                                                 = 1.222V (post layout simulations value; final value still pending silicon
                                                                 testing) low_vdd_limit is the decimal value which is the outcome of this
                                                                 equation. */
        uint64_t high_vdd_limit        : 10; /**< [ 28: 19](R/W) Defines the high voltage limit. Set high_vdd_limit using the following formula
                                                                 high_vdd_limit=VVref x 1024 Where V is the actual required voltage in volts.
                                                                 Vref = 1.222V high_vdd_limit is the decimal value which is the outcome of this
                                                                 equation. */
        uint64_t avg                   : 3;  /**< [ 31: 29](R/W) Average DRO readout by 2AVG. */
        uint64_t bg_cfg                : 3;  /**< [ 34: 32](R/W) Band-Gap circuit temperature curvature configuration. */
        uint64_t sel_bg_chop_clk       : 1;  /**< [ 35: 35](R/W) Bandgap clock chopping rate 0 = high rate (16/32). 1 = low rate (32/64). */
        uint64_t cfg_vdd_setpoint      : 3;  /**< [ 38: 36](R/W) Select the range for VDD setpoint voltage when AVS_N5 is not activated 0x1 =
                                                                 0.91V - 0.96V, 0x2 = 0.87V - 0.9V, 0x3 = 0.82V - 0.86V, 0x4 = 0.75V - 0.81V, 0x5
                                                                 = 0.7V - 0.74V, 0x6 = 0.65V - 0.69V, This configuration must be set according to
                                                                 the regulator setpoint on board before AVS_N5 is enabled. Optimal setting is
                                                                 advised, but there are some margins in this configuration. */
        uint64_t div_cal               : 3;  /**< [ 41: 39](R/W) Adjusting internal offset gen reference voltage. */
        uint64_t inc_offset_range      : 1;  /**< [ 42: 42](R/W) Inc Offset Range AVS_N5 voltage step and offset range control. 0 = Step is
                                                                 ~1.56mV. Offset range is +/-200mv. 1 = Step is ~1.95mV. Offset range is
                                                                 +/-250mv. */
        uint64_t select_vsense0        : 1;  /**< [ 43: 43](R/W) select_vsense0 Voltage sense input control. 0 = avs_vdd_sense1 is selected. 1 =
                                                                 avs_vdd_sense0 is selected. */
        uint64_t vcr                   : 10; /**< [ 53: 44](R/W) voltage_change_rate. Voltage change rate (in number of clk cycles between AVS_N5
                                                                 steps) when 1. A fast voltage change is triggered. 2. AVS_N5 is being disabled
                                                                 (enable input changes 1'b1 to 1'b0) and offset delta voltage is being cleared. */
        uint64_t rst_b                 : 1;  /**< [ 54: 54](R/W) Active low reset signal. */
        uint64_t int1                  : 4;  /**< [ 58: 55](R/W) Reserved. */
        uint64_t fvct                  : 1;  /**< [ 59: 59](R/W) Fast_voltage_change_trigger Edge triggered (for both edges) signal, initiating a
                                                                 fast delta voltage change to the value specified in target_delta[7:0]. This
                                                                 signal is in effect only after AVS_N5calibration sequence has completed (A low
                                                                 to high transition on the dro_en signal can serve as a logic indication that
                                                                 normal operation has started */
        uint64_t min_max_val_rst       : 1;  /**< [ 60: 60](R/W) Reset signal for the following outputs. max_dro_count, min_dro_count,
                                                                 max_avs_delta, max_avs_delta. 0 = specified outputs are not affected. 1 =
                                                                 specified outputs are in reset. */
        uint64_t manual                : 1;  /**< [ 61: 61](R/W) Manual setting of delta voltage (open loop control). This is used for debug
                                                                 purposes only. 0 = Auto operation. 1 = Manual operation. */
        uint64_t avs_pause             : 1;  /**< [ 62: 62](R/W) Set AVS_N5 in pause mode. 0 = Normal operation mode. 1 = Stops updating voltage
                                                                 level. Analog control loop through vddfb still functions normally. */
        uint64_t enable                : 1;  /**< [ 63: 63](R/W) AVS_N5 enable control. 0 = AVS_N5 is off; power consumption is minimized; vddfb
                                                                 floats in master mode. 1 = AVS_N5 is on; vddfb is driven After enable goes high,
                                                                 internal calibration process precedes normal operation. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_avs_avs_n5p_ctl0_s cn; */
};
typedef union cavm_avs_avs_n5p_ctl0 cavm_avs_avs_n5p_ctl0_t;

#define CAVM_AVS_AVS_N5P_CTL0 CAVM_AVS_AVS_N5P_CTL0_FUNC()
static inline uint64_t CAVM_AVS_AVS_N5P_CTL0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_AVS_AVS_N5P_CTL0_FUNC(void)
{
    return 0x80a000001070ll;
}

#define typedef_CAVM_AVS_AVS_N5P_CTL0 cavm_avs_avs_n5p_ctl0_t
#define bustype_CAVM_AVS_AVS_N5P_CTL0 CSR_TYPE_NCB
#define basename_CAVM_AVS_AVS_N5P_CTL0 "AVS_AVS_N5P_CTL0"
#define device_bar_CAVM_AVS_AVS_N5P_CTL0 0x0 /* PF_BAR0 */
#define busnum_CAVM_AVS_AVS_N5P_CTL0 0
#define arguments_CAVM_AVS_AVS_N5P_CTL0 -1,-1,-1,-1

/**
 * Register (NCB) avs_avs_n5p_ctl1
 *
 * AVS_N5P Control Register
 * Configuration register 1 for the configuration for AVS_N5P.
 */
union cavm_avs_avs_n5p_ctl1
{
    uint64_t u;
    struct cavm_avs_avs_n5p_ctl1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t tp_cfg                : 5;  /**< [ 63: 59](R/W) Analog test point selection control. */
        uint64_t int2                  : 5;  /**< [ 58: 54](R/W) Reserved. */
        uint64_t cfg_vddx2_slice       : 5;  /**< [ 53: 49](R/W) CFG_VDDX2_SLICE[4]=0 Auto setting. CFG_VDDX2_SLICE[3:0] sets the initial value
                                                                 CFG_VDDX2_SLICE[4]=1 Manual setting according to CFG_VDDX2_SLICE[3:0] Moving
                                                                 from manual to auto setting during operation may cause functional issues under
                                                                 specific operating conditions. CFG_VDDX2_SLICE[3:0] also serve as the initial
                                                                 setting value for the output driver voltage doubler loop. The default value of
                                                                 4'd8 is selected as a compromise between startup power consumption and current
                                                                 drive capability. The safest value to use operational wise (at the expense of a
                                                                 higher startup power consumption) if 4'd15. */
        uint64_t cfg_vddx2_loop_re     : 1;  /**< [ 48: 48](R/W) Set output buffer doubler reference voltage. */
        uint64_t cfg_osc_cal           : 5;  /**< [ 47: 43](R/W) External setting for the FLL frequency multiplication CFG_OSC_CAL[4]=0 Auto
                                                                 settings. CFG_OSC_CAL[4]=1 Manual setting. */
        uint64_t aaf_cfg               : 2;  /**< [ 42: 41](R/W) Anti aliasing filter configuration 0x0 = set K=128. 0x1 = set K=64. 0x2 = set
                                                                 K=128, bypass AAF. 0x3 = set K=64, bypass AAF. */
        uint64_t relative_delta_en     : 1;  /**< [ 40: 40](R/W) Defines whether target_delta is absolute or relative 0 = target_delta is
                                                                 absolute. 1 = target_delta is relative. */
        uint64_t target_delta          : 8;  /**< [ 39: 32](R/W) Specifies the new offset/delta to travel to when fast_voltage_change_trigger
                                                                 input changes. this value can be relative or absolute according to
                                                                 relative_delta_en setting. When relative target_delta[7] defines the relative
                                                                 delta sign as follows 0 = positive. 1 = negative. */
        uint64_t speed_target          : 16; /**< [ 31: 16](R/W) Target DRO Readout. As long as voltage is within the range set by the low and
                                                                 high voltage limits, the AVS_N5IP will control the voltage to achieve this DRO
                                                                 readout */
        uint64_t dro_count_interval    : 16; /**< [ 15:  0](R/W) Number of clk cycles for which the DRO count is enabled (dro_count_interval +
                                                                 'd20) * clk_period =~ 20uS */
#else /* Word 0 - Little Endian */
        uint64_t dro_count_interval    : 16; /**< [ 15:  0](R/W) Number of clk cycles for which the DRO count is enabled (dro_count_interval +
                                                                 'd20) * clk_period =~ 20uS */
        uint64_t speed_target          : 16; /**< [ 31: 16](R/W) Target DRO Readout. As long as voltage is within the range set by the low and
                                                                 high voltage limits, the AVS_N5IP will control the voltage to achieve this DRO
                                                                 readout */
        uint64_t target_delta          : 8;  /**< [ 39: 32](R/W) Specifies the new offset/delta to travel to when fast_voltage_change_trigger
                                                                 input changes. this value can be relative or absolute according to
                                                                 relative_delta_en setting. When relative target_delta[7] defines the relative
                                                                 delta sign as follows 0 = positive. 1 = negative. */
        uint64_t relative_delta_en     : 1;  /**< [ 40: 40](R/W) Defines whether target_delta is absolute or relative 0 = target_delta is
                                                                 absolute. 1 = target_delta is relative. */
        uint64_t aaf_cfg               : 2;  /**< [ 42: 41](R/W) Anti aliasing filter configuration 0x0 = set K=128. 0x1 = set K=64. 0x2 = set
                                                                 K=128, bypass AAF. 0x3 = set K=64, bypass AAF. */
        uint64_t cfg_osc_cal           : 5;  /**< [ 47: 43](R/W) External setting for the FLL frequency multiplication CFG_OSC_CAL[4]=0 Auto
                                                                 settings. CFG_OSC_CAL[4]=1 Manual setting. */
        uint64_t cfg_vddx2_loop_re     : 1;  /**< [ 48: 48](R/W) Set output buffer doubler reference voltage. */
        uint64_t cfg_vddx2_slice       : 5;  /**< [ 53: 49](R/W) CFG_VDDX2_SLICE[4]=0 Auto setting. CFG_VDDX2_SLICE[3:0] sets the initial value
                                                                 CFG_VDDX2_SLICE[4]=1 Manual setting according to CFG_VDDX2_SLICE[3:0] Moving
                                                                 from manual to auto setting during operation may cause functional issues under
                                                                 specific operating conditions. CFG_VDDX2_SLICE[3:0] also serve as the initial
                                                                 setting value for the output driver voltage doubler loop. The default value of
                                                                 4'd8 is selected as a compromise between startup power consumption and current
                                                                 drive capability. The safest value to use operational wise (at the expense of a
                                                                 higher startup power consumption) if 4'd15. */
        uint64_t int2                  : 5;  /**< [ 58: 54](R/W) Reserved. */
        uint64_t tp_cfg                : 5;  /**< [ 63: 59](R/W) Analog test point selection control. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_avs_avs_n5p_ctl1_s cn; */
};
typedef union cavm_avs_avs_n5p_ctl1 cavm_avs_avs_n5p_ctl1_t;

#define CAVM_AVS_AVS_N5P_CTL1 CAVM_AVS_AVS_N5P_CTL1_FUNC()
static inline uint64_t CAVM_AVS_AVS_N5P_CTL1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_AVS_AVS_N5P_CTL1_FUNC(void)
{
    return 0x80a000001080ll;
}

#define typedef_CAVM_AVS_AVS_N5P_CTL1 cavm_avs_avs_n5p_ctl1_t
#define bustype_CAVM_AVS_AVS_N5P_CTL1 CSR_TYPE_NCB
#define basename_CAVM_AVS_AVS_N5P_CTL1 "AVS_AVS_N5P_CTL1"
#define device_bar_CAVM_AVS_AVS_N5P_CTL1 0x0 /* PF_BAR0 */
#define busnum_CAVM_AVS_AVS_N5P_CTL1 0
#define arguments_CAVM_AVS_AVS_N5P_CTL1 -1,-1,-1,-1

/**
 * Register (NCB) avs_cfg
 *
 * AVS Configuration Register
 * This register provides configuration for the AVS interface.
 */
union cavm_avs_cfg
{
    uint64_t u;
    struct cavm_avs_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_29_63        : 35;
        uint64_t clkdiv                : 13; /**< [ 28: 16](R/W) Clock divisor. Value 0x0 disables the AVS_CLK pin.
                                                                 AVS_CLK = 100 MHz reference clock / (2 * [CLKDIV]).

                                                                 Or, restated,
                                                                 [CLKDIV]  = 100 MHz reference clock / (2 * AVS_CLK). */
        uint64_t reserved_1_15         : 15;
        uint64_t enable                : 1;  /**< [  0:  0](R/W) AVS enable.
                                                                 0 = Pins are tristated.
                                                                 1 = Pins are driven. */
#else /* Word 0 - Little Endian */
        uint64_t enable                : 1;  /**< [  0:  0](R/W) AVS enable.
                                                                 0 = Pins are tristated.
                                                                 1 = Pins are driven. */
        uint64_t reserved_1_15         : 15;
        uint64_t clkdiv                : 13; /**< [ 28: 16](R/W) Clock divisor. Value 0x0 disables the AVS_CLK pin.
                                                                 AVS_CLK = 100 MHz reference clock / (2 * [CLKDIV]).

                                                                 Or, restated,
                                                                 [CLKDIV]  = 100 MHz reference clock / (2 * AVS_CLK). */
        uint64_t reserved_29_63        : 35;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_avs_cfg_s cn; */
};
typedef union cavm_avs_cfg cavm_avs_cfg_t;

#define CAVM_AVS_CFG CAVM_AVS_CFG_FUNC()
static inline uint64_t CAVM_AVS_CFG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_AVS_CFG_FUNC(void)
{
    return 0x80a000000100ll;
}

#define typedef_CAVM_AVS_CFG cavm_avs_cfg_t
#define bustype_CAVM_AVS_CFG CSR_TYPE_NCB
#define basename_CAVM_AVS_CFG "AVS_CFG"
#define device_bar_CAVM_AVS_CFG 0x0 /* PF_BAR0 */
#define busnum_CAVM_AVS_CFG 0
#define arguments_CAVM_AVS_CFG -1,-1,-1,-1

/**
 * Register (NCB) avs_clken
 *
 * AVS Clock Enable Register
 * This register is to force conditional clock enable.
 */
union cavm_avs_clken
{
    uint64_t u;
    struct cavm_avs_clken_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t clken                 : 1;  /**< [  0:  0](R/W) Force the conditional clocking within AVS to be always on. For diagnostic use only. */
#else /* Word 0 - Little Endian */
        uint64_t clken                 : 1;  /**< [  0:  0](R/W) Force the conditional clocking within AVS to be always on. For diagnostic use only. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_avs_clken_s cn; */
};
typedef union cavm_avs_clken cavm_avs_clken_t;

#define CAVM_AVS_CLKEN CAVM_AVS_CLKEN_FUNC()
static inline uint64_t CAVM_AVS_CLKEN_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_AVS_CLKEN_FUNC(void)
{
    return 0x80a000002080ll;
}

#define typedef_CAVM_AVS_CLKEN cavm_avs_clken_t
#define bustype_CAVM_AVS_CLKEN CSR_TYPE_NCB
#define basename_CAVM_AVS_CLKEN "AVS_CLKEN"
#define device_bar_CAVM_AVS_CLKEN 0x0 /* PF_BAR0 */
#define busnum_CAVM_AVS_CLKEN 0
#define arguments_CAVM_AVS_CLKEN -1,-1,-1,-1

/**
 * Register (NCB) avs_const
 *
 * AVS Constants Register
 * This register contains constants for software discovery.
 */
union cavm_avs_const
{
    uint64_t u;
    struct cavm_avs_const_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t ver                   : 4;  /**< [  3:  0](RO) AVS version compatible with PMBus 1.3.1. */
#else /* Word 0 - Little Endian */
        uint64_t ver                   : 4;  /**< [  3:  0](RO) AVS version compatible with PMBus 1.3.1. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_avs_const_s cn; */
};
typedef union cavm_avs_const cavm_avs_const_t;

#define CAVM_AVS_CONST CAVM_AVS_CONST_FUNC()
static inline uint64_t CAVM_AVS_CONST_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_AVS_CONST_FUNC(void)
{
    return 0x80a000000000ll;
}

#define typedef_CAVM_AVS_CONST cavm_avs_const_t
#define bustype_CAVM_AVS_CONST CSR_TYPE_NCB
#define basename_CAVM_AVS_CONST "AVS_CONST"
#define device_bar_CAVM_AVS_CONST 0x0 /* PF_BAR0 */
#define busnum_CAVM_AVS_CONST 0
#define arguments_CAVM_AVS_CONST -1,-1,-1,-1

/**
 * Register (NCB) avs_int_ena_w1c
 *
 * AVS Interrupt Enable Clear Register
 * This register clears interrupt enables.
 */
union cavm_avs_int_ena_w1c
{
    uint64_t u;
    struct cavm_avs_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t crc_err               : 1;  /**< [  1:  1](R/W1C) Reads or clears AVS_INT_ENA_W1S[CRC_ERR]. */
        uint64_t done                  : 1;  /**< [  0:  0](R/W1C) Reads or clears AVS_INT_ENA_W1S[DONE]. */
#else /* Word 0 - Little Endian */
        uint64_t done                  : 1;  /**< [  0:  0](R/W1C) Reads or clears AVS_INT_ENA_W1S[DONE]. */
        uint64_t crc_err               : 1;  /**< [  1:  1](R/W1C) Reads or clears AVS_INT_ENA_W1S[CRC_ERR]. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_avs_int_ena_w1c_s cn; */
};
typedef union cavm_avs_int_ena_w1c cavm_avs_int_ena_w1c_t;

#define CAVM_AVS_INT_ENA_W1C CAVM_AVS_INT_ENA_W1C_FUNC()
static inline uint64_t CAVM_AVS_INT_ENA_W1C_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_AVS_INT_ENA_W1C_FUNC(void)
{
    return 0x80a000000210ll;
}

#define typedef_CAVM_AVS_INT_ENA_W1C cavm_avs_int_ena_w1c_t
#define bustype_CAVM_AVS_INT_ENA_W1C CSR_TYPE_NCB
#define basename_CAVM_AVS_INT_ENA_W1C "AVS_INT_ENA_W1C"
#define device_bar_CAVM_AVS_INT_ENA_W1C 0x0 /* PF_BAR0 */
#define busnum_CAVM_AVS_INT_ENA_W1C 0
#define arguments_CAVM_AVS_INT_ENA_W1C -1,-1,-1,-1

/**
 * Register (NCB) avs_int_ena_w1s
 *
 * AVS Interrupt Enable Set Register
 * This register sets interrupt enables.
 */
union cavm_avs_int_ena_w1s
{
    uint64_t u;
    struct cavm_avs_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t crc_err               : 1;  /**< [  1:  1](R/W1S) Enables reporting of AVS_STS[CRC_ERR]. */
        uint64_t done                  : 1;  /**< [  0:  0](R/W1S) Enables reporting of AVS_STS[DONE]. */
#else /* Word 0 - Little Endian */
        uint64_t done                  : 1;  /**< [  0:  0](R/W1S) Enables reporting of AVS_STS[DONE]. */
        uint64_t crc_err               : 1;  /**< [  1:  1](R/W1S) Enables reporting of AVS_STS[CRC_ERR]. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_avs_int_ena_w1s_s cn; */
};
typedef union cavm_avs_int_ena_w1s cavm_avs_int_ena_w1s_t;

#define CAVM_AVS_INT_ENA_W1S CAVM_AVS_INT_ENA_W1S_FUNC()
static inline uint64_t CAVM_AVS_INT_ENA_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_AVS_INT_ENA_W1S_FUNC(void)
{
    return 0x80a000000218ll;
}

#define typedef_CAVM_AVS_INT_ENA_W1S cavm_avs_int_ena_w1s_t
#define bustype_CAVM_AVS_INT_ENA_W1S CSR_TYPE_NCB
#define basename_CAVM_AVS_INT_ENA_W1S "AVS_INT_ENA_W1S"
#define device_bar_CAVM_AVS_INT_ENA_W1S 0x0 /* PF_BAR0 */
#define busnum_CAVM_AVS_INT_ENA_W1S 0
#define arguments_CAVM_AVS_INT_ENA_W1S -1,-1,-1,-1

/**
 * Register (NCB) avs_io_ctl
 *
 * AVS I/O Control Register
 */
union cavm_avs_io_ctl
{
    uint64_t u;
    struct cavm_avs_io_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t drive                 : 2;  /**< [  3:  2](R/W) AVS bus pin output impedance.
                                                                 0x0 = 55 ohm.
                                                                 0x1 = 45 ohm.
                                                                 0x2 = 33 ohm.
                                                                 0x3 = 20 ohm. */
        uint64_t slew                  : 2;  /**< [  1:  0](R/W) AVS bus pins output slew rate control.
                                                                 0x0 = Weakest.
                                                                 _ ...
                                                                 0x3 = Strongest. */
#else /* Word 0 - Little Endian */
        uint64_t slew                  : 2;  /**< [  1:  0](R/W) AVS bus pins output slew rate control.
                                                                 0x0 = Weakest.
                                                                 _ ...
                                                                 0x3 = Strongest. */
        uint64_t drive                 : 2;  /**< [  3:  2](R/W) AVS bus pin output impedance.
                                                                 0x0 = 55 ohm.
                                                                 0x1 = 45 ohm.
                                                                 0x2 = 33 ohm.
                                                                 0x3 = 20 ohm. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_avs_io_ctl_s cn; */
};
typedef union cavm_avs_io_ctl cavm_avs_io_ctl_t;

#define CAVM_AVS_IO_CTL CAVM_AVS_IO_CTL_FUNC()
static inline uint64_t CAVM_AVS_IO_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_AVS_IO_CTL_FUNC(void)
{
    return 0x80a000000128ll;
}

#define typedef_CAVM_AVS_IO_CTL cavm_avs_io_ctl_t
#define bustype_CAVM_AVS_IO_CTL CSR_TYPE_NCB
#define basename_CAVM_AVS_IO_CTL "AVS_IO_CTL"
#define device_bar_CAVM_AVS_IO_CTL 0x0 /* PF_BAR0 */
#define busnum_CAVM_AVS_IO_CTL 0
#define arguments_CAVM_AVS_IO_CTL -1,-1,-1,-1

/**
 * Register (NCB) avs_lvd_adc0_ctl
 *
 * LVD_ADC0 Control Register
 * This register contains the configuration for LVD_ADC instance 0.
 */
union cavm_avs_lvd_adc0_ctl
{
    uint64_t u;
    struct cavm_avs_lvd_adc0_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_55_63        : 9;
        uint64_t lvd_test              : 4;  /**< [ 54: 51](R/W) Testmon TP selection. */
        uint64_t reserved_50           : 1;
        uint64_t charge_pump_cfg       : 15; /**< [ 49: 35](R/W) LVD_ADC0 Charge Pump configuration bits. */
        uint64_t bandgap_cfg           : 10; /**< [ 34: 25](R/W) LVD_ADC0 Bandgap configuration bits. */
        uint64_t supply_mon            : 4;  /**< [ 24: 21](R/W) LVD_ADC0 Supply Monitor configuration bits. */
        uint64_t adc_cfg               : 9;  /**< [ 20: 12](R/W) LVD_ADC0 ADC configuration bits. */
        uint64_t vdc_cfg               : 12; /**< [ 11:  0](R/W) LVD_ADC0 Voltage detection channel configuration bits. */
#else /* Word 0 - Little Endian */
        uint64_t vdc_cfg               : 12; /**< [ 11:  0](R/W) LVD_ADC0 Voltage detection channel configuration bits. */
        uint64_t adc_cfg               : 9;  /**< [ 20: 12](R/W) LVD_ADC0 ADC configuration bits. */
        uint64_t supply_mon            : 4;  /**< [ 24: 21](R/W) LVD_ADC0 Supply Monitor configuration bits. */
        uint64_t bandgap_cfg           : 10; /**< [ 34: 25](R/W) LVD_ADC0 Bandgap configuration bits. */
        uint64_t charge_pump_cfg       : 15; /**< [ 49: 35](R/W) LVD_ADC0 Charge Pump configuration bits. */
        uint64_t reserved_50           : 1;
        uint64_t lvd_test              : 4;  /**< [ 54: 51](R/W) Testmon TP selection. */
        uint64_t reserved_55_63        : 9;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_avs_lvd_adc0_ctl_s cn10; */
    struct cavm_avs_lvd_adc0_ctl_cn10ka_p1
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_51_63        : 13;
        uint64_t inp_lat_dis           : 1;  /**< [ 50: 50](R/W) Input reg latch disable. */
        uint64_t charge_pump_cfg       : 15; /**< [ 49: 35](R/W) LVD_ADC0 Charge Pump configuration bits. */
        uint64_t bandgap_cfg           : 10; /**< [ 34: 25](R/W) LVD_ADC0 Bandgap configuration bits. */
        uint64_t supply_mon            : 4;  /**< [ 24: 21](R/W) LVD_ADC0 Supply Monitor configuration bits. */
        uint64_t adc_cfg               : 9;  /**< [ 20: 12](R/W) LVD_ADC0 ADC configuration bits. */
        uint64_t vdc_cfg               : 12; /**< [ 11:  0](R/W) LVD_ADC0 Voltage detection channel configuration bits. */
#else /* Word 0 - Little Endian */
        uint64_t vdc_cfg               : 12; /**< [ 11:  0](R/W) LVD_ADC0 Voltage detection channel configuration bits. */
        uint64_t adc_cfg               : 9;  /**< [ 20: 12](R/W) LVD_ADC0 ADC configuration bits. */
        uint64_t supply_mon            : 4;  /**< [ 24: 21](R/W) LVD_ADC0 Supply Monitor configuration bits. */
        uint64_t bandgap_cfg           : 10; /**< [ 34: 25](R/W) LVD_ADC0 Bandgap configuration bits. */
        uint64_t charge_pump_cfg       : 15; /**< [ 49: 35](R/W) LVD_ADC0 Charge Pump configuration bits. */
        uint64_t inp_lat_dis           : 1;  /**< [ 50: 50](R/W) Input reg latch disable. */
        uint64_t reserved_51_63        : 13;
#endif /* Word 0 - End */
    } cn10ka_p1;
    struct cavm_avs_lvd_adc0_ctl_cn10ka_p2
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_55_63        : 9;
        uint64_t lvd_test              : 4;  /**< [ 54: 51](R/W) Testmon TP selection. */
        uint64_t pu                    : 1;  /**< [ 50: 50](R/W) Power control for LVD. */
        uint64_t charge_pump_cfg       : 15; /**< [ 49: 35](R/W) LVD_ADC0 Charge Pump configuration bits. */
        uint64_t bandgap_cfg           : 10; /**< [ 34: 25](R/W) LVD_ADC0 Bandgap configuration bits. */
        uint64_t supply_mon            : 4;  /**< [ 24: 21](R/W) LVD_ADC0 Supply Monitor configuration bits. */
        uint64_t adc_cfg               : 9;  /**< [ 20: 12](R/W) LVD_ADC0 ADC configuration bits. */
        uint64_t vdc_cfg               : 12; /**< [ 11:  0](R/W) LVD_ADC0 Voltage detection channel configuration bits. */
#else /* Word 0 - Little Endian */
        uint64_t vdc_cfg               : 12; /**< [ 11:  0](R/W) LVD_ADC0 Voltage detection channel configuration bits. */
        uint64_t adc_cfg               : 9;  /**< [ 20: 12](R/W) LVD_ADC0 ADC configuration bits. */
        uint64_t supply_mon            : 4;  /**< [ 24: 21](R/W) LVD_ADC0 Supply Monitor configuration bits. */
        uint64_t bandgap_cfg           : 10; /**< [ 34: 25](R/W) LVD_ADC0 Bandgap configuration bits. */
        uint64_t charge_pump_cfg       : 15; /**< [ 49: 35](R/W) LVD_ADC0 Charge Pump configuration bits. */
        uint64_t pu                    : 1;  /**< [ 50: 50](R/W) Power control for LVD. */
        uint64_t lvd_test              : 4;  /**< [ 54: 51](R/W) Testmon TP selection. */
        uint64_t reserved_55_63        : 9;
#endif /* Word 0 - End */
    } cn10ka_p2;
    /* struct cavm_avs_lvd_adc0_ctl_cn10ka_p2 cn10kb; */
    /* struct cavm_avs_lvd_adc0_ctl_cn10ka_p1 cnf10ka; */
    struct cavm_avs_lvd_adc0_ctl_cnf10kb_p1
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_55_63        : 9;
        uint64_t lvd_test              : 4;  /**< [ 54: 51](R/W) Testmon TP selection. */
        uint64_t inp_lat_dis           : 1;  /**< [ 50: 50](R/W) Input reg latch disable. */
        uint64_t charge_pump_cfg       : 15; /**< [ 49: 35](R/W) LVD_ADC0 Charge Pump configuration bits. */
        uint64_t bandgap_cfg           : 10; /**< [ 34: 25](R/W) LVD_ADC0 Bandgap configuration bits. */
        uint64_t supply_mon            : 4;  /**< [ 24: 21](R/W) LVD_ADC0 Supply Monitor configuration bits. */
        uint64_t adc_cfg               : 9;  /**< [ 20: 12](R/W) LVD_ADC0 ADC configuration bits. */
        uint64_t vdc_cfg               : 12; /**< [ 11:  0](R/W) LVD_ADC0 Voltage detection channel configuration bits. */
#else /* Word 0 - Little Endian */
        uint64_t vdc_cfg               : 12; /**< [ 11:  0](R/W) LVD_ADC0 Voltage detection channel configuration bits. */
        uint64_t adc_cfg               : 9;  /**< [ 20: 12](R/W) LVD_ADC0 ADC configuration bits. */
        uint64_t supply_mon            : 4;  /**< [ 24: 21](R/W) LVD_ADC0 Supply Monitor configuration bits. */
        uint64_t bandgap_cfg           : 10; /**< [ 34: 25](R/W) LVD_ADC0 Bandgap configuration bits. */
        uint64_t charge_pump_cfg       : 15; /**< [ 49: 35](R/W) LVD_ADC0 Charge Pump configuration bits. */
        uint64_t inp_lat_dis           : 1;  /**< [ 50: 50](R/W) Input reg latch disable. */
        uint64_t lvd_test              : 4;  /**< [ 54: 51](R/W) Testmon TP selection. */
        uint64_t reserved_55_63        : 9;
#endif /* Word 0 - End */
    } cnf10kb_p1;
    /* struct cavm_avs_lvd_adc0_ctl_cn10ka_p2 cnf10kb_p2; */
};
typedef union cavm_avs_lvd_adc0_ctl cavm_avs_lvd_adc0_ctl_t;

#define CAVM_AVS_LVD_ADC0_CTL CAVM_AVS_LVD_ADC0_CTL_FUNC()
static inline uint64_t CAVM_AVS_LVD_ADC0_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_AVS_LVD_ADC0_CTL_FUNC(void)
{
    return 0x80a000001040ll;
}

#define typedef_CAVM_AVS_LVD_ADC0_CTL cavm_avs_lvd_adc0_ctl_t
#define bustype_CAVM_AVS_LVD_ADC0_CTL CSR_TYPE_NCB
#define basename_CAVM_AVS_LVD_ADC0_CTL "AVS_LVD_ADC0_CTL"
#define device_bar_CAVM_AVS_LVD_ADC0_CTL 0x0 /* PF_BAR0 */
#define busnum_CAVM_AVS_LVD_ADC0_CTL 0
#define arguments_CAVM_AVS_LVD_ADC0_CTL -1,-1,-1,-1

/**
 * Register (NCB) avs_lvd_adc1_ctl
 *
 * LVD_ADC1 Control Register
 * This register contains the configuration for LVD_ADC instance 1.
 */
union cavm_avs_lvd_adc1_ctl
{
    uint64_t u;
    struct cavm_avs_lvd_adc1_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_55_63        : 9;
        uint64_t lvd_test              : 4;  /**< [ 54: 51](R/W) Testmon TP selection. */
        uint64_t reserved_50           : 1;
        uint64_t charge_pump_cfg       : 15; /**< [ 49: 35](R/W) LVD_ADC1 Charge Pump configuration bits. */
        uint64_t bandgap_cfg           : 10; /**< [ 34: 25](R/W) LVD_ADC1 Bandgap configuration bits. */
        uint64_t supply_mon            : 4;  /**< [ 24: 21](R/W) LVD_ADC1 Supply Monitor configuration bits. */
        uint64_t adc_cfg               : 9;  /**< [ 20: 12](R/W) LVD_ADC1 ADC configuration bits. */
        uint64_t vdc_cfg               : 12; /**< [ 11:  0](R/W) LVD_ADC0 Voltage detection channel configuration bits. */
#else /* Word 0 - Little Endian */
        uint64_t vdc_cfg               : 12; /**< [ 11:  0](R/W) LVD_ADC0 Voltage detection channel configuration bits. */
        uint64_t adc_cfg               : 9;  /**< [ 20: 12](R/W) LVD_ADC1 ADC configuration bits. */
        uint64_t supply_mon            : 4;  /**< [ 24: 21](R/W) LVD_ADC1 Supply Monitor configuration bits. */
        uint64_t bandgap_cfg           : 10; /**< [ 34: 25](R/W) LVD_ADC1 Bandgap configuration bits. */
        uint64_t charge_pump_cfg       : 15; /**< [ 49: 35](R/W) LVD_ADC1 Charge Pump configuration bits. */
        uint64_t reserved_50           : 1;
        uint64_t lvd_test              : 4;  /**< [ 54: 51](R/W) Testmon TP selection. */
        uint64_t reserved_55_63        : 9;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_avs_lvd_adc1_ctl_s cn10; */
    struct cavm_avs_lvd_adc1_ctl_cn10ka_p1
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_51_63        : 13;
        uint64_t inp_lat_dis           : 1;  /**< [ 50: 50](R/W) Input reg latch disable. */
        uint64_t charge_pump_cfg       : 15; /**< [ 49: 35](R/W) LVD_ADC1 Charge Pump configuration bits. */
        uint64_t bandgap_cfg           : 10; /**< [ 34: 25](R/W) LVD_ADC1 Bandgap configuration bits. */
        uint64_t supply_mon            : 4;  /**< [ 24: 21](R/W) LVD_ADC1 Supply Monitor configuration bits. */
        uint64_t adc_cfg               : 9;  /**< [ 20: 12](R/W) LVD_ADC1 ADC configuration bits. */
        uint64_t vdc_cfg               : 12; /**< [ 11:  0](R/W) LVD_ADC0 Voltage detection channel configuration bits. */
#else /* Word 0 - Little Endian */
        uint64_t vdc_cfg               : 12; /**< [ 11:  0](R/W) LVD_ADC0 Voltage detection channel configuration bits. */
        uint64_t adc_cfg               : 9;  /**< [ 20: 12](R/W) LVD_ADC1 ADC configuration bits. */
        uint64_t supply_mon            : 4;  /**< [ 24: 21](R/W) LVD_ADC1 Supply Monitor configuration bits. */
        uint64_t bandgap_cfg           : 10; /**< [ 34: 25](R/W) LVD_ADC1 Bandgap configuration bits. */
        uint64_t charge_pump_cfg       : 15; /**< [ 49: 35](R/W) LVD_ADC1 Charge Pump configuration bits. */
        uint64_t inp_lat_dis           : 1;  /**< [ 50: 50](R/W) Input reg latch disable. */
        uint64_t reserved_51_63        : 13;
#endif /* Word 0 - End */
    } cn10ka_p1;
    struct cavm_avs_lvd_adc1_ctl_cn10ka_p2
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_55_63        : 9;
        uint64_t lvd_test              : 4;  /**< [ 54: 51](R/W) Testmon TP selection. */
        uint64_t pu                    : 1;  /**< [ 50: 50](R/W) Power control for LVD. */
        uint64_t charge_pump_cfg       : 15; /**< [ 49: 35](R/W) LVD_ADC1 Charge Pump configuration bits. */
        uint64_t bandgap_cfg           : 10; /**< [ 34: 25](R/W) LVD_ADC1 Bandgap configuration bits. */
        uint64_t supply_mon            : 4;  /**< [ 24: 21](R/W) LVD_ADC1 Supply Monitor configuration bits. */
        uint64_t adc_cfg               : 9;  /**< [ 20: 12](R/W) LVD_ADC1 ADC configuration bits. */
        uint64_t vdc_cfg               : 12; /**< [ 11:  0](R/W) LVD_ADC0 Voltage detection channel configuration bits. */
#else /* Word 0 - Little Endian */
        uint64_t vdc_cfg               : 12; /**< [ 11:  0](R/W) LVD_ADC0 Voltage detection channel configuration bits. */
        uint64_t adc_cfg               : 9;  /**< [ 20: 12](R/W) LVD_ADC1 ADC configuration bits. */
        uint64_t supply_mon            : 4;  /**< [ 24: 21](R/W) LVD_ADC1 Supply Monitor configuration bits. */
        uint64_t bandgap_cfg           : 10; /**< [ 34: 25](R/W) LVD_ADC1 Bandgap configuration bits. */
        uint64_t charge_pump_cfg       : 15; /**< [ 49: 35](R/W) LVD_ADC1 Charge Pump configuration bits. */
        uint64_t pu                    : 1;  /**< [ 50: 50](R/W) Power control for LVD. */
        uint64_t lvd_test              : 4;  /**< [ 54: 51](R/W) Testmon TP selection. */
        uint64_t reserved_55_63        : 9;
#endif /* Word 0 - End */
    } cn10ka_p2;
    /* struct cavm_avs_lvd_adc1_ctl_cn10ka_p2 cn10kb; */
    /* struct cavm_avs_lvd_adc1_ctl_cn10ka_p1 cnf10ka; */
    struct cavm_avs_lvd_adc1_ctl_cnf10kb_p1
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_55_63        : 9;
        uint64_t lvd_test              : 4;  /**< [ 54: 51](R/W) Testmon TP selection. */
        uint64_t inp_lat_dis           : 1;  /**< [ 50: 50](R/W) Input reg latch disable. */
        uint64_t charge_pump_cfg       : 15; /**< [ 49: 35](R/W) LVD_ADC1 Charge Pump configuration bits. */
        uint64_t bandgap_cfg           : 10; /**< [ 34: 25](R/W) LVD_ADC1 Bandgap configuration bits. */
        uint64_t supply_mon            : 4;  /**< [ 24: 21](R/W) LVD_ADC1 Supply Monitor configuration bits. */
        uint64_t adc_cfg               : 9;  /**< [ 20: 12](R/W) LVD_ADC1 ADC configuration bits. */
        uint64_t vdc_cfg               : 12; /**< [ 11:  0](R/W) LVD_ADC0 Voltage detection channel configuration bits. */
#else /* Word 0 - Little Endian */
        uint64_t vdc_cfg               : 12; /**< [ 11:  0](R/W) LVD_ADC0 Voltage detection channel configuration bits. */
        uint64_t adc_cfg               : 9;  /**< [ 20: 12](R/W) LVD_ADC1 ADC configuration bits. */
        uint64_t supply_mon            : 4;  /**< [ 24: 21](R/W) LVD_ADC1 Supply Monitor configuration bits. */
        uint64_t bandgap_cfg           : 10; /**< [ 34: 25](R/W) LVD_ADC1 Bandgap configuration bits. */
        uint64_t charge_pump_cfg       : 15; /**< [ 49: 35](R/W) LVD_ADC1 Charge Pump configuration bits. */
        uint64_t inp_lat_dis           : 1;  /**< [ 50: 50](R/W) Input reg latch disable. */
        uint64_t lvd_test              : 4;  /**< [ 54: 51](R/W) Testmon TP selection. */
        uint64_t reserved_55_63        : 9;
#endif /* Word 0 - End */
    } cnf10kb_p1;
    /* struct cavm_avs_lvd_adc1_ctl_cn10ka_p2 cnf10kb_p2; */
};
typedef union cavm_avs_lvd_adc1_ctl cavm_avs_lvd_adc1_ctl_t;

#define CAVM_AVS_LVD_ADC1_CTL CAVM_AVS_LVD_ADC1_CTL_FUNC()
static inline uint64_t CAVM_AVS_LVD_ADC1_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_AVS_LVD_ADC1_CTL_FUNC(void)
{
    return 0x80a000001050ll;
}

#define typedef_CAVM_AVS_LVD_ADC1_CTL cavm_avs_lvd_adc1_ctl_t
#define bustype_CAVM_AVS_LVD_ADC1_CTL CSR_TYPE_NCB
#define basename_CAVM_AVS_LVD_ADC1_CTL "AVS_LVD_ADC1_CTL"
#define device_bar_CAVM_AVS_LVD_ADC1_CTL 0x0 /* PF_BAR0 */
#define busnum_CAVM_AVS_LVD_ADC1_CTL 0
#define arguments_CAVM_AVS_LVD_ADC1_CTL -1,-1,-1,-1

/**
 * Register (NCB) avs_lvd_adc2_ctl
 *
 * LVD_ADC2 Control Register
 * This register contains the configuration for LVD_ADC instance 2.
 */
union cavm_avs_lvd_adc2_ctl
{
    uint64_t u;
    struct cavm_avs_lvd_adc2_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_55_63        : 9;
        uint64_t lvd_test              : 4;  /**< [ 54: 51](R/W) Testmon TP selection. */
        uint64_t reserved_50           : 1;
        uint64_t charge_pump_cfg       : 15; /**< [ 49: 35](R/W) LVD_ADC2 Charge Pump configuration bits. */
        uint64_t bandgap_cfg           : 10; /**< [ 34: 25](R/W) LVD_ADC2 Bandgap configuration bits. */
        uint64_t supply_mon            : 4;  /**< [ 24: 21](R/W) LVD_ADC2 Supply Monitor configuration bits. */
        uint64_t adc_cfg               : 9;  /**< [ 20: 12](R/W) LVD_ADC2 ADC configuration bits. */
        uint64_t vdc_cfg               : 12; /**< [ 11:  0](R/W) LVD_ADC0 Voltage detection channel configuration bits. */
#else /* Word 0 - Little Endian */
        uint64_t vdc_cfg               : 12; /**< [ 11:  0](R/W) LVD_ADC0 Voltage detection channel configuration bits. */
        uint64_t adc_cfg               : 9;  /**< [ 20: 12](R/W) LVD_ADC2 ADC configuration bits. */
        uint64_t supply_mon            : 4;  /**< [ 24: 21](R/W) LVD_ADC2 Supply Monitor configuration bits. */
        uint64_t bandgap_cfg           : 10; /**< [ 34: 25](R/W) LVD_ADC2 Bandgap configuration bits. */
        uint64_t charge_pump_cfg       : 15; /**< [ 49: 35](R/W) LVD_ADC2 Charge Pump configuration bits. */
        uint64_t reserved_50           : 1;
        uint64_t lvd_test              : 4;  /**< [ 54: 51](R/W) Testmon TP selection. */
        uint64_t reserved_55_63        : 9;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_avs_lvd_adc2_ctl_s cn10; */
    struct cavm_avs_lvd_adc2_ctl_cn10ka_p1
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_51_63        : 13;
        uint64_t inp_lat_dis           : 1;  /**< [ 50: 50](R/W) Input reg latch disable. */
        uint64_t charge_pump_cfg       : 15; /**< [ 49: 35](R/W) LVD_ADC2 Charge Pump configuration bits. */
        uint64_t bandgap_cfg           : 10; /**< [ 34: 25](R/W) LVD_ADC2 Bandgap configuration bits. */
        uint64_t supply_mon            : 4;  /**< [ 24: 21](R/W) LVD_ADC2 Supply Monitor configuration bits. */
        uint64_t adc_cfg               : 9;  /**< [ 20: 12](R/W) LVD_ADC2 ADC configuration bits. */
        uint64_t vdc_cfg               : 12; /**< [ 11:  0](R/W) LVD_ADC0 Voltage detection channel configuration bits. */
#else /* Word 0 - Little Endian */
        uint64_t vdc_cfg               : 12; /**< [ 11:  0](R/W) LVD_ADC0 Voltage detection channel configuration bits. */
        uint64_t adc_cfg               : 9;  /**< [ 20: 12](R/W) LVD_ADC2 ADC configuration bits. */
        uint64_t supply_mon            : 4;  /**< [ 24: 21](R/W) LVD_ADC2 Supply Monitor configuration bits. */
        uint64_t bandgap_cfg           : 10; /**< [ 34: 25](R/W) LVD_ADC2 Bandgap configuration bits. */
        uint64_t charge_pump_cfg       : 15; /**< [ 49: 35](R/W) LVD_ADC2 Charge Pump configuration bits. */
        uint64_t inp_lat_dis           : 1;  /**< [ 50: 50](R/W) Input reg latch disable. */
        uint64_t reserved_51_63        : 13;
#endif /* Word 0 - End */
    } cn10ka_p1;
    struct cavm_avs_lvd_adc2_ctl_cn10ka_p2
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_55_63        : 9;
        uint64_t lvd_test              : 4;  /**< [ 54: 51](R/W) Testmon TP selection. */
        uint64_t pu                    : 1;  /**< [ 50: 50](R/W) Power control for LVD. */
        uint64_t charge_pump_cfg       : 15; /**< [ 49: 35](R/W) LVD_ADC2 Charge Pump configuration bits. */
        uint64_t bandgap_cfg           : 10; /**< [ 34: 25](R/W) LVD_ADC2 Bandgap configuration bits. */
        uint64_t supply_mon            : 4;  /**< [ 24: 21](R/W) LVD_ADC2 Supply Monitor configuration bits. */
        uint64_t adc_cfg               : 9;  /**< [ 20: 12](R/W) LVD_ADC2 ADC configuration bits. */
        uint64_t vdc_cfg               : 12; /**< [ 11:  0](R/W) LVD_ADC0 Voltage detection channel configuration bits. */
#else /* Word 0 - Little Endian */
        uint64_t vdc_cfg               : 12; /**< [ 11:  0](R/W) LVD_ADC0 Voltage detection channel configuration bits. */
        uint64_t adc_cfg               : 9;  /**< [ 20: 12](R/W) LVD_ADC2 ADC configuration bits. */
        uint64_t supply_mon            : 4;  /**< [ 24: 21](R/W) LVD_ADC2 Supply Monitor configuration bits. */
        uint64_t bandgap_cfg           : 10; /**< [ 34: 25](R/W) LVD_ADC2 Bandgap configuration bits. */
        uint64_t charge_pump_cfg       : 15; /**< [ 49: 35](R/W) LVD_ADC2 Charge Pump configuration bits. */
        uint64_t pu                    : 1;  /**< [ 50: 50](R/W) Power control for LVD. */
        uint64_t lvd_test              : 4;  /**< [ 54: 51](R/W) Testmon TP selection. */
        uint64_t reserved_55_63        : 9;
#endif /* Word 0 - End */
    } cn10ka_p2;
    /* struct cavm_avs_lvd_adc2_ctl_cn10ka_p2 cn10kb; */
    /* struct cavm_avs_lvd_adc2_ctl_cn10ka_p1 cnf10ka; */
    struct cavm_avs_lvd_adc2_ctl_cnf10kb_p1
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_55_63        : 9;
        uint64_t lvd_test              : 4;  /**< [ 54: 51](R/W) Testmon TP selection. */
        uint64_t inp_lat_dis           : 1;  /**< [ 50: 50](R/W) Input reg latch disable. */
        uint64_t charge_pump_cfg       : 15; /**< [ 49: 35](R/W) LVD_ADC2 Charge Pump configuration bits. */
        uint64_t bandgap_cfg           : 10; /**< [ 34: 25](R/W) LVD_ADC2 Bandgap configuration bits. */
        uint64_t supply_mon            : 4;  /**< [ 24: 21](R/W) LVD_ADC2 Supply Monitor configuration bits. */
        uint64_t adc_cfg               : 9;  /**< [ 20: 12](R/W) LVD_ADC2 ADC configuration bits. */
        uint64_t vdc_cfg               : 12; /**< [ 11:  0](R/W) LVD_ADC0 Voltage detection channel configuration bits. */
#else /* Word 0 - Little Endian */
        uint64_t vdc_cfg               : 12; /**< [ 11:  0](R/W) LVD_ADC0 Voltage detection channel configuration bits. */
        uint64_t adc_cfg               : 9;  /**< [ 20: 12](R/W) LVD_ADC2 ADC configuration bits. */
        uint64_t supply_mon            : 4;  /**< [ 24: 21](R/W) LVD_ADC2 Supply Monitor configuration bits. */
        uint64_t bandgap_cfg           : 10; /**< [ 34: 25](R/W) LVD_ADC2 Bandgap configuration bits. */
        uint64_t charge_pump_cfg       : 15; /**< [ 49: 35](R/W) LVD_ADC2 Charge Pump configuration bits. */
        uint64_t inp_lat_dis           : 1;  /**< [ 50: 50](R/W) Input reg latch disable. */
        uint64_t lvd_test              : 4;  /**< [ 54: 51](R/W) Testmon TP selection. */
        uint64_t reserved_55_63        : 9;
#endif /* Word 0 - End */
    } cnf10kb_p1;
    /* struct cavm_avs_lvd_adc2_ctl_cn10ka_p2 cnf10kb_p2; */
};
typedef union cavm_avs_lvd_adc2_ctl cavm_avs_lvd_adc2_ctl_t;

#define CAVM_AVS_LVD_ADC2_CTL CAVM_AVS_LVD_ADC2_CTL_FUNC()
static inline uint64_t CAVM_AVS_LVD_ADC2_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_AVS_LVD_ADC2_CTL_FUNC(void)
{
    return 0x80a000001060ll;
}

#define typedef_CAVM_AVS_LVD_ADC2_CTL cavm_avs_lvd_adc2_ctl_t
#define bustype_CAVM_AVS_LVD_ADC2_CTL CSR_TYPE_NCB
#define basename_CAVM_AVS_LVD_ADC2_CTL "AVS_LVD_ADC2_CTL"
#define device_bar_CAVM_AVS_LVD_ADC2_CTL 0x0 /* PF_BAR0 */
#define busnum_CAVM_AVS_LVD_ADC2_CTL 0
#define arguments_CAVM_AVS_LVD_ADC2_CTL -1,-1,-1,-1

/**
 * Register (NCB) avs_lvd_adc_0_observation
 *
 * LVD_ADC0 Observation Register
 * Observation register for the ports of for LVD_ADC0.
 */
union cavm_avs_lvd_adc_0_observation
{
    uint64_t u;
    struct cavm_avs_lvd_adc_0_observation_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_10_63        : 54;
        uint64_t avdd_rdy              : 1;  /**< [  9:  9](RO/H) This field can give AVDD_RDY of LVD_ADC0. For diagnostic use only. */
        uint64_t dvdd_rdy              : 1;  /**< [  8:  8](RO/H) This field can give DVDD_RDY of LVD_ADC0. For diagnostic use only. */
        uint64_t vdd_dig_data          : 8;  /**< [  7:  0](RO/H) This field can give VDD_DIG_DATA of LVD_ADC0. For diagnostic use only. */
#else /* Word 0 - Little Endian */
        uint64_t vdd_dig_data          : 8;  /**< [  7:  0](RO/H) This field can give VDD_DIG_DATA of LVD_ADC0. For diagnostic use only. */
        uint64_t dvdd_rdy              : 1;  /**< [  8:  8](RO/H) This field can give DVDD_RDY of LVD_ADC0. For diagnostic use only. */
        uint64_t avdd_rdy              : 1;  /**< [  9:  9](RO/H) This field can give AVDD_RDY of LVD_ADC0. For diagnostic use only. */
        uint64_t reserved_10_63        : 54;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_avs_lvd_adc_0_observation_s cn; */
};
typedef union cavm_avs_lvd_adc_0_observation cavm_avs_lvd_adc_0_observation_t;

#define CAVM_AVS_LVD_ADC_0_OBSERVATION CAVM_AVS_LVD_ADC_0_OBSERVATION_FUNC()
static inline uint64_t CAVM_AVS_LVD_ADC_0_OBSERVATION_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_AVS_LVD_ADC_0_OBSERVATION_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN10KA_BX))
        return 0x80a000001098ll;
    if (cavm_is_model(OCTEONTX_CN10KB))
        return 0x80a000001098ll;
    if (cavm_is_model(OCTEONTX_CNF10KB_BX))
        return 0x80a000001098ll;
    __cavm_csr_fatal("AVS_LVD_ADC_0_OBSERVATION", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_AVS_LVD_ADC_0_OBSERVATION cavm_avs_lvd_adc_0_observation_t
#define bustype_CAVM_AVS_LVD_ADC_0_OBSERVATION CSR_TYPE_NCB
#define basename_CAVM_AVS_LVD_ADC_0_OBSERVATION "AVS_LVD_ADC_0_OBSERVATION"
#define device_bar_CAVM_AVS_LVD_ADC_0_OBSERVATION 0x0 /* PF_BAR0 */
#define busnum_CAVM_AVS_LVD_ADC_0_OBSERVATION 0
#define arguments_CAVM_AVS_LVD_ADC_0_OBSERVATION -1,-1,-1,-1

/**
 * Register (NCB) avs_lvd_adc_1_observation
 *
 * LVD_ADC0 Observation Register
 * Observation register for the ports of for LVD_ADC1.
 */
union cavm_avs_lvd_adc_1_observation
{
    uint64_t u;
    struct cavm_avs_lvd_adc_1_observation_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_10_63        : 54;
        uint64_t avdd_rdy              : 1;  /**< [  9:  9](RO/H) This field can give AVDD_RDY of LVD_ADC1. For diagnostic use only. */
        uint64_t dvdd_rdy              : 1;  /**< [  8:  8](RO/H) This field can give DVDD_RDY of LVD_ADC1. For diagnostic use only. */
        uint64_t vdd_dig_data          : 8;  /**< [  7:  0](RO/H) This field can give VDD_DIG_DATA of LVD_ADC1. For diagnostic use only. */
#else /* Word 0 - Little Endian */
        uint64_t vdd_dig_data          : 8;  /**< [  7:  0](RO/H) This field can give VDD_DIG_DATA of LVD_ADC1. For diagnostic use only. */
        uint64_t dvdd_rdy              : 1;  /**< [  8:  8](RO/H) This field can give DVDD_RDY of LVD_ADC1. For diagnostic use only. */
        uint64_t avdd_rdy              : 1;  /**< [  9:  9](RO/H) This field can give AVDD_RDY of LVD_ADC1. For diagnostic use only. */
        uint64_t reserved_10_63        : 54;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_avs_lvd_adc_1_observation_s cn; */
};
typedef union cavm_avs_lvd_adc_1_observation cavm_avs_lvd_adc_1_observation_t;

#define CAVM_AVS_LVD_ADC_1_OBSERVATION CAVM_AVS_LVD_ADC_1_OBSERVATION_FUNC()
static inline uint64_t CAVM_AVS_LVD_ADC_1_OBSERVATION_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_AVS_LVD_ADC_1_OBSERVATION_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN10KA_BX))
        return 0x80a0000010a0ll;
    if (cavm_is_model(OCTEONTX_CN10KB))
        return 0x80a0000010a0ll;
    if (cavm_is_model(OCTEONTX_CNF10KB_BX))
        return 0x80a0000010a0ll;
    __cavm_csr_fatal("AVS_LVD_ADC_1_OBSERVATION", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_AVS_LVD_ADC_1_OBSERVATION cavm_avs_lvd_adc_1_observation_t
#define bustype_CAVM_AVS_LVD_ADC_1_OBSERVATION CSR_TYPE_NCB
#define basename_CAVM_AVS_LVD_ADC_1_OBSERVATION "AVS_LVD_ADC_1_OBSERVATION"
#define device_bar_CAVM_AVS_LVD_ADC_1_OBSERVATION 0x0 /* PF_BAR0 */
#define busnum_CAVM_AVS_LVD_ADC_1_OBSERVATION 0
#define arguments_CAVM_AVS_LVD_ADC_1_OBSERVATION -1,-1,-1,-1

/**
 * Register (NCB) avs_lvd_adc_2_observation
 *
 * LVD_ADC0 Observation Register
 * Observation register for the ports of for LVD_ADC2.
 */
union cavm_avs_lvd_adc_2_observation
{
    uint64_t u;
    struct cavm_avs_lvd_adc_2_observation_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_10_63        : 54;
        uint64_t avdd_rdy              : 1;  /**< [  9:  9](RO/H) This field can give AVDD_RDY of LVD_ADC2. For diagnostic use only. */
        uint64_t dvdd_rdy              : 1;  /**< [  8:  8](RO/H) This field can give DVDD_RDY of LVD_ADC2. For diagnostic use only. */
        uint64_t vdd_dig_data          : 8;  /**< [  7:  0](RO/H) This field can give VDD_DIG_DATA of LVD_ADC2. For diagnostic use only. */
#else /* Word 0 - Little Endian */
        uint64_t vdd_dig_data          : 8;  /**< [  7:  0](RO/H) This field can give VDD_DIG_DATA of LVD_ADC2. For diagnostic use only. */
        uint64_t dvdd_rdy              : 1;  /**< [  8:  8](RO/H) This field can give DVDD_RDY of LVD_ADC2. For diagnostic use only. */
        uint64_t avdd_rdy              : 1;  /**< [  9:  9](RO/H) This field can give AVDD_RDY of LVD_ADC2. For diagnostic use only. */
        uint64_t reserved_10_63        : 54;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_avs_lvd_adc_2_observation_s cn; */
};
typedef union cavm_avs_lvd_adc_2_observation cavm_avs_lvd_adc_2_observation_t;

#define CAVM_AVS_LVD_ADC_2_OBSERVATION CAVM_AVS_LVD_ADC_2_OBSERVATION_FUNC()
static inline uint64_t CAVM_AVS_LVD_ADC_2_OBSERVATION_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_AVS_LVD_ADC_2_OBSERVATION_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN10KA_BX))
        return 0x80a0000010a8ll;
    if (cavm_is_model(OCTEONTX_CN10KB))
        return 0x80a0000010a8ll;
    if (cavm_is_model(OCTEONTX_CNF10KB_BX))
        return 0x80a0000010a8ll;
    __cavm_csr_fatal("AVS_LVD_ADC_2_OBSERVATION", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_AVS_LVD_ADC_2_OBSERVATION cavm_avs_lvd_adc_2_observation_t
#define bustype_CAVM_AVS_LVD_ADC_2_OBSERVATION CSR_TYPE_NCB
#define basename_CAVM_AVS_LVD_ADC_2_OBSERVATION "AVS_LVD_ADC_2_OBSERVATION"
#define device_bar_CAVM_AVS_LVD_ADC_2_OBSERVATION 0x0 /* PF_BAR0 */
#define busnum_CAVM_AVS_LVD_ADC_2_OBSERVATION 0
#define arguments_CAVM_AVS_LVD_ADC_2_OBSERVATION -1,-1,-1,-1

/**
 * Register (NCB) avs_mdata
 *
 * AVS Master Data Transmitting Register
 * This register contains the data to transmit on the AVS_MDATA signal.
 */
union cavm_avs_mdata
{
    uint64_t u;
    struct cavm_avs_mdata_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t startcode             : 2;  /**< [ 31: 30](R/W) Master frame StartCode field to send on next AVS_STS[START]. For compliance must be 0x1. */
        uint64_t cmd                   : 2;  /**< [ 29: 28](R/W) Master frame Cmd field to send on next AVS_STS[START].
                                                                 Determines the action that the master requires.
                                                                 Values enumerated by AVS_CMD_E. */
        uint64_t cmdgroup              : 1;  /**< [ 27: 27](R/W) Master frame CmdGroup field to send on next AVS_STS[START].
                                                                 Values enumerated by AVS_CMDGROUP_E. */
        uint64_t cmddatatype           : 4;  /**< [ 26: 23](R/W) Master frame CmdDataType field to send on next AVS_STS[START].
                                                                 Values enumerated by AVS_CMDDATATYPE_E. */
        uint64_t select                : 4;  /**< [ 22: 19](R/W) Master frame Select field to send on next AVS_STS[START]. */
        uint64_t cmddata               : 16; /**< [ 18:  3](R/W) Master frame CmdData field to send on next AVS_STS[START]. Must be all-ones for reads. */
        uint64_t reserved_0_2          : 3;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_2          : 3;
        uint64_t cmddata               : 16; /**< [ 18:  3](R/W) Master frame CmdData field to send on next AVS_STS[START]. Must be all-ones for reads. */
        uint64_t select                : 4;  /**< [ 22: 19](R/W) Master frame Select field to send on next AVS_STS[START]. */
        uint64_t cmddatatype           : 4;  /**< [ 26: 23](R/W) Master frame CmdDataType field to send on next AVS_STS[START].
                                                                 Values enumerated by AVS_CMDDATATYPE_E. */
        uint64_t cmdgroup              : 1;  /**< [ 27: 27](R/W) Master frame CmdGroup field to send on next AVS_STS[START].
                                                                 Values enumerated by AVS_CMDGROUP_E. */
        uint64_t cmd                   : 2;  /**< [ 29: 28](R/W) Master frame Cmd field to send on next AVS_STS[START].
                                                                 Determines the action that the master requires.
                                                                 Values enumerated by AVS_CMD_E. */
        uint64_t startcode             : 2;  /**< [ 31: 30](R/W) Master frame StartCode field to send on next AVS_STS[START]. For compliance must be 0x1. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_avs_mdata_s cn; */
};
typedef union cavm_avs_mdata cavm_avs_mdata_t;

#define CAVM_AVS_MDATA CAVM_AVS_MDATA_FUNC()
static inline uint64_t CAVM_AVS_MDATA_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_AVS_MDATA_FUNC(void)
{
    return 0x80a000001010ll;
}

#define typedef_CAVM_AVS_MDATA cavm_avs_mdata_t
#define bustype_CAVM_AVS_MDATA CSR_TYPE_NCB
#define basename_CAVM_AVS_MDATA "AVS_MDATA"
#define device_bar_CAVM_AVS_MDATA 0x0 /* PF_BAR0 */
#define busnum_CAVM_AVS_MDATA 0
#define arguments_CAVM_AVS_MDATA -1,-1,-1,-1

/**
 * Register (NCB) avs_msix_pba#
 *
 * AVS MSI-X Pending Bit Array Registers
 * This register is the MSI-X PBA table, the bit number is indexed by the AVS_INT_VEC_E enumeration.
 */
union cavm_avs_msix_pbax
{
    uint64_t u;
    struct cavm_avs_msix_pbax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message for the associated AVS_MSIX_VEC()_CTL, enumerated by AVS_INT_VEC_E. Bits
                                                                 that have no associated AVS_INT_VEC_E are zero. */
#else /* Word 0 - Little Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message for the associated AVS_MSIX_VEC()_CTL, enumerated by AVS_INT_VEC_E. Bits
                                                                 that have no associated AVS_INT_VEC_E are zero. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_avs_msix_pbax_s cn; */
};
typedef union cavm_avs_msix_pbax cavm_avs_msix_pbax_t;

static inline uint64_t CAVM_AVS_MSIX_PBAX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_AVS_MSIX_PBAX(uint64_t a)
{
    if (a==0)
        return 0x80a000ff0000ll + 8ll * ((a) & 0x0);
    __cavm_csr_fatal("AVS_MSIX_PBAX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_AVS_MSIX_PBAX(a) cavm_avs_msix_pbax_t
#define bustype_CAVM_AVS_MSIX_PBAX(a) CSR_TYPE_NCB
#define basename_CAVM_AVS_MSIX_PBAX(a) "AVS_MSIX_PBAX"
#define device_bar_CAVM_AVS_MSIX_PBAX(a) 0x4 /* PF_BAR4 */
#define busnum_CAVM_AVS_MSIX_PBAX(a) (a)
#define arguments_CAVM_AVS_MSIX_PBAX(a) (a),-1,-1,-1

/**
 * Register (NCB) avs_msix_vec#_addr
 *
 * AVS MSI-X Vector Table Address Registers
 * This register is the MSI-X vector table, indexed by the AVS_INT_VEC_E enumeration.
 */
union cavm_avs_msix_vecx_addr
{
    uint64_t u;
    struct cavm_avs_msix_vecx_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_1            : 1;
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Secure vector.
                                                                 0 = This vector may be read or written by either secure or nonsecure states.
                                                                 The vector's IOVA is sent to the SMMU as nonsecure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1).

                                                                 1 = This vector's AVS_MSIX_VEC()_ADDR, AVS_MSIX_VEC()_CTL, and corresponding
                                                                 bit of AVS_MSIX_PBA() are RAZ/WI and does not cause a fault when accessed
                                                                 by the nonsecure world.
                                                                 The vector's IOVA is sent to the SMMU as secure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1 or
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC_PHYS]=1).

                                                                 If PCCPF_AVS_VSEC_SCTL[MSIX_SEC] (for documentation, see PCCPF_XXX_VSEC_SCTL[MSIX_SEC]) is
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

                                                                 1 = This vector's AVS_MSIX_VEC()_ADDR, AVS_MSIX_VEC()_CTL, and corresponding
                                                                 bit of AVS_MSIX_PBA() are RAZ/WI and does not cause a fault when accessed
                                                                 by the nonsecure world.
                                                                 The vector's IOVA is sent to the SMMU as secure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1 or
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC_PHYS]=1).

                                                                 If PCCPF_AVS_VSEC_SCTL[MSIX_SEC] (for documentation, see PCCPF_XXX_VSEC_SCTL[MSIX_SEC]) is
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
    /* struct cavm_avs_msix_vecx_addr_s cn; */
};
typedef union cavm_avs_msix_vecx_addr cavm_avs_msix_vecx_addr_t;

static inline uint64_t CAVM_AVS_MSIX_VECX_ADDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_AVS_MSIX_VECX_ADDR(uint64_t a)
{
    if (a==0)
        return 0x80a000f00000ll + 0x10ll * ((a) & 0x0);
    __cavm_csr_fatal("AVS_MSIX_VECX_ADDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_AVS_MSIX_VECX_ADDR(a) cavm_avs_msix_vecx_addr_t
#define bustype_CAVM_AVS_MSIX_VECX_ADDR(a) CSR_TYPE_NCB
#define basename_CAVM_AVS_MSIX_VECX_ADDR(a) "AVS_MSIX_VECX_ADDR"
#define device_bar_CAVM_AVS_MSIX_VECX_ADDR(a) 0x4 /* PF_BAR4 */
#define busnum_CAVM_AVS_MSIX_VECX_ADDR(a) (a)
#define arguments_CAVM_AVS_MSIX_VECX_ADDR(a) (a),-1,-1,-1

/**
 * Register (NCB) avs_msix_vec#_ctl
 *
 * AVS MSI-X Vector Table Control and Data Registers
 * This register is the MSI-X vector table, indexed by the AVS_INT_VEC_E enumeration.
 */
union cavm_avs_msix_vecx_ctl
{
    uint64_t u;
    struct cavm_avs_msix_vecx_ctl_s
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
    /* struct cavm_avs_msix_vecx_ctl_s cn; */
};
typedef union cavm_avs_msix_vecx_ctl cavm_avs_msix_vecx_ctl_t;

static inline uint64_t CAVM_AVS_MSIX_VECX_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_AVS_MSIX_VECX_CTL(uint64_t a)
{
    if (a==0)
        return 0x80a000f00008ll + 0x10ll * ((a) & 0x0);
    __cavm_csr_fatal("AVS_MSIX_VECX_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_AVS_MSIX_VECX_CTL(a) cavm_avs_msix_vecx_ctl_t
#define bustype_CAVM_AVS_MSIX_VECX_CTL(a) CSR_TYPE_NCB
#define basename_CAVM_AVS_MSIX_VECX_CTL(a) "AVS_MSIX_VECX_CTL"
#define device_bar_CAVM_AVS_MSIX_VECX_CTL(a) 0x4 /* PF_BAR4 */
#define busnum_CAVM_AVS_MSIX_VECX_CTL(a) (a)
#define arguments_CAVM_AVS_MSIX_VECX_CTL(a) (a),-1,-1,-1

/**
 * Register (NCB) avs_sdata
 *
 * AVS Slave Data Received Response Register
 * This register contains the data received on the AVS_SDATA signal in response to a
 * master transaction.
 */
union cavm_avs_sdata
{
    uint64_t u;
    struct cavm_avs_sdata_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t slaveack              : 2;  /**< [ 31: 30](RO/H) Received response frame's SlaveACK field. Enumerated by AVS_SLAVEACK_E. */
        uint64_t reserved_29           : 1;
        uint64_t statusresp            : 5;  /**< [ 28: 24](RO/H) Received response frame's Status_Resp field. Bit numbers enumerated by
                                                                 AVS_STATUSRESP_E. */
        uint64_t cmddata               : 16; /**< [ 23:  8](RO/H) Received response frame's CmdData field. */
        uint64_t reserved_3_7          : 5;
        uint64_t crc                   : 3;  /**< [  2:  0](RAZ) Received response frame's CRC field. Software typically ignores this field and uses
                                                                 AVS_STS[CRC_ERR] instead. */
#else /* Word 0 - Little Endian */
        uint64_t crc                   : 3;  /**< [  2:  0](RAZ) Received response frame's CRC field. Software typically ignores this field and uses
                                                                 AVS_STS[CRC_ERR] instead. */
        uint64_t reserved_3_7          : 5;
        uint64_t cmddata               : 16; /**< [ 23:  8](RO/H) Received response frame's CmdData field. */
        uint64_t statusresp            : 5;  /**< [ 28: 24](RO/H) Received response frame's Status_Resp field. Bit numbers enumerated by
                                                                 AVS_STATUSRESP_E. */
        uint64_t reserved_29           : 1;
        uint64_t slaveack              : 2;  /**< [ 31: 30](RO/H) Received response frame's SlaveACK field. Enumerated by AVS_SLAVEACK_E. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_avs_sdata_s cn; */
};
typedef union cavm_avs_sdata cavm_avs_sdata_t;

#define CAVM_AVS_SDATA CAVM_AVS_SDATA_FUNC()
static inline uint64_t CAVM_AVS_SDATA_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_AVS_SDATA_FUNC(void)
{
    return 0x80a000001020ll;
}

#define typedef_CAVM_AVS_SDATA cavm_avs_sdata_t
#define bustype_CAVM_AVS_SDATA CSR_TYPE_NCB
#define basename_CAVM_AVS_SDATA "AVS_SDATA"
#define device_bar_CAVM_AVS_SDATA 0x0 /* PF_BAR0 */
#define busnum_CAVM_AVS_SDATA 0
#define arguments_CAVM_AVS_SDATA -1,-1,-1,-1

/**
 * Register (NCB) avs_sstatus
 *
 * AVS Slave Data Received Status Register
 * This register contains the data received on the AVS_SDATA signal in a status
 * response.
 */
union cavm_avs_sstatus
{
    uint64_t u;
    struct cavm_avs_sstatus_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t prefix                : 2;  /**< [ 31: 30](RO/H) Received status frame's SlaveACK field. */
        uint64_t reserved_29           : 1;
        uint64_t statusresp            : 5;  /**< [ 28: 24](RO/H) Received status frame's Status_Resp field. */
        uint64_t reserved_3_23         : 21;
        uint64_t crc                   : 3;  /**< [  2:  0](RAZ) Received status frame's CRC field. Software typically ignores this field and uses
                                                                 AVS_STS[CRC_ERR] instead. */
#else /* Word 0 - Little Endian */
        uint64_t crc                   : 3;  /**< [  2:  0](RAZ) Received status frame's CRC field. Software typically ignores this field and uses
                                                                 AVS_STS[CRC_ERR] instead. */
        uint64_t reserved_3_23         : 21;
        uint64_t statusresp            : 5;  /**< [ 28: 24](RO/H) Received status frame's Status_Resp field. */
        uint64_t reserved_29           : 1;
        uint64_t prefix                : 2;  /**< [ 31: 30](RO/H) Received status frame's SlaveACK field. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_avs_sstatus_s cn; */
};
typedef union cavm_avs_sstatus cavm_avs_sstatus_t;

#define CAVM_AVS_SSTATUS CAVM_AVS_SSTATUS_FUNC()
static inline uint64_t CAVM_AVS_SSTATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_AVS_SSTATUS_FUNC(void)
{
    return 0x80a000001030ll;
}

#define typedef_CAVM_AVS_SSTATUS cavm_avs_sstatus_t
#define bustype_CAVM_AVS_SSTATUS CSR_TYPE_NCB
#define basename_CAVM_AVS_SSTATUS "AVS_SSTATUS"
#define device_bar_CAVM_AVS_SSTATUS 0x0 /* PF_BAR0 */
#define busnum_CAVM_AVS_SSTATUS 0
#define arguments_CAVM_AVS_SSTATUS -1,-1,-1,-1

/**
 * Register (NCB) avs_sts
 *
 * AVS STS Register
 * This register provides status and interrupt for the AVS interface.
 */
union cavm_avs_sts
{
    uint64_t u;
    struct cavm_avs_sts_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_10_63        : 54;
        uint64_t resync_en             : 1;  /**< [  9:  9](R/W1/H) Write 1 to start transaction RESYNC transaction. */
        uint64_t busy                  : 1;  /**< [  8:  8](RO/H) Busy.
                                                                 0 = No AVS transaction in progress.
                                                                 1 = AVS engine is processing a transaction. */
        uint64_t reserved_5_7          : 3;
        uint64_t start                 : 1;  /**< [  4:  4](R/W1/H) Write 1 to start transaction defined by AVS_MDATA[CMD].
                                                                 Read back value always zero. */
        uint64_t reserved_2_3          : 2;
        uint64_t crc_err               : 1;  /**< [  1:  1](R/W1C/H) AVS interrupt on CRC error in receiving data.
                                                                 If there is CRC error in the read frame, [CRC_ERR] interrupt is generated
                                                                 at the same time with [DONE] interrupt. */
        uint64_t done                  : 1;  /**< [  0:  0](R/W1C/H) AVS interrupt on transaction done. */
#else /* Word 0 - Little Endian */
        uint64_t done                  : 1;  /**< [  0:  0](R/W1C/H) AVS interrupt on transaction done. */
        uint64_t crc_err               : 1;  /**< [  1:  1](R/W1C/H) AVS interrupt on CRC error in receiving data.
                                                                 If there is CRC error in the read frame, [CRC_ERR] interrupt is generated
                                                                 at the same time with [DONE] interrupt. */
        uint64_t reserved_2_3          : 2;
        uint64_t start                 : 1;  /**< [  4:  4](R/W1/H) Write 1 to start transaction defined by AVS_MDATA[CMD].
                                                                 Read back value always zero. */
        uint64_t reserved_5_7          : 3;
        uint64_t busy                  : 1;  /**< [  8:  8](RO/H) Busy.
                                                                 0 = No AVS transaction in progress.
                                                                 1 = AVS engine is processing a transaction. */
        uint64_t resync_en             : 1;  /**< [  9:  9](R/W1/H) Write 1 to start transaction RESYNC transaction. */
        uint64_t reserved_10_63        : 54;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_avs_sts_s cn10; */
    struct cavm_avs_sts_cn10ka_p1
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_9_63         : 55;
        uint64_t busy                  : 1;  /**< [  8:  8](RO/H) Busy.
                                                                 0 = No AVS transaction in progress.
                                                                 1 = AVS engine is processing a transaction. */
        uint64_t reserved_5_7          : 3;
        uint64_t start                 : 1;  /**< [  4:  4](R/W1/H) Write 1 to start transaction defined by AVS_MDATA[CMD].
                                                                 Read back value always zero. */
        uint64_t reserved_2_3          : 2;
        uint64_t crc_err               : 1;  /**< [  1:  1](R/W1C/H) AVS interrupt on CRC error in receiving data.
                                                                 If there is CRC error in the read frame, [CRC_ERR] interrupt is generated
                                                                 at the same time with [DONE] interrupt. */
        uint64_t done                  : 1;  /**< [  0:  0](R/W1C/H) AVS interrupt on transaction done. */
#else /* Word 0 - Little Endian */
        uint64_t done                  : 1;  /**< [  0:  0](R/W1C/H) AVS interrupt on transaction done. */
        uint64_t crc_err               : 1;  /**< [  1:  1](R/W1C/H) AVS interrupt on CRC error in receiving data.
                                                                 If there is CRC error in the read frame, [CRC_ERR] interrupt is generated
                                                                 at the same time with [DONE] interrupt. */
        uint64_t reserved_2_3          : 2;
        uint64_t start                 : 1;  /**< [  4:  4](R/W1/H) Write 1 to start transaction defined by AVS_MDATA[CMD].
                                                                 Read back value always zero. */
        uint64_t reserved_5_7          : 3;
        uint64_t busy                  : 1;  /**< [  8:  8](RO/H) Busy.
                                                                 0 = No AVS transaction in progress.
                                                                 1 = AVS engine is processing a transaction. */
        uint64_t reserved_9_63         : 55;
#endif /* Word 0 - End */
    } cn10ka_p1;
    /* struct cavm_avs_sts_s cn10ka_p2; */
    /* struct cavm_avs_sts_s cn10kb; */
    /* struct cavm_avs_sts_cn10ka_p1 cnf10ka; */
    /* struct cavm_avs_sts_cn10ka_p1 cnf10kb_p1; */
    /* struct cavm_avs_sts_s cnf10kb_p2; */
};
typedef union cavm_avs_sts cavm_avs_sts_t;

#define CAVM_AVS_STS CAVM_AVS_STS_FUNC()
static inline uint64_t CAVM_AVS_STS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_AVS_STS_FUNC(void)
{
    return 0x80a000000200ll;
}

#define typedef_CAVM_AVS_STS cavm_avs_sts_t
#define bustype_CAVM_AVS_STS CSR_TYPE_NCB
#define basename_CAVM_AVS_STS "AVS_STS"
#define device_bar_CAVM_AVS_STS 0x0 /* PF_BAR0 */
#define busnum_CAVM_AVS_STS 0
#define arguments_CAVM_AVS_STS -1,-1,-1,-1

/**
 * Register (NCB) avs_sts_w1s
 *
 * AVS Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_avs_sts_w1s
{
    uint64_t u;
    struct cavm_avs_sts_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t crc_err               : 1;  /**< [  1:  1](R/W1S/H) Reads or sets AVS_STS[CRC_ERR]. */
        uint64_t done                  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets AVS_STS[DONE]. */
#else /* Word 0 - Little Endian */
        uint64_t done                  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets AVS_STS[DONE]. */
        uint64_t crc_err               : 1;  /**< [  1:  1](R/W1S/H) Reads or sets AVS_STS[CRC_ERR]. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_avs_sts_w1s_s cn; */
};
typedef union cavm_avs_sts_w1s cavm_avs_sts_w1s_t;

#define CAVM_AVS_STS_W1S CAVM_AVS_STS_W1S_FUNC()
static inline uint64_t CAVM_AVS_STS_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_AVS_STS_W1S_FUNC(void)
{
    return 0x80a000000208ll;
}

#define typedef_CAVM_AVS_STS_W1S cavm_avs_sts_w1s_t
#define bustype_CAVM_AVS_STS_W1S CSR_TYPE_NCB
#define basename_CAVM_AVS_STS_W1S "AVS_STS_W1S"
#define device_bar_CAVM_AVS_STS_W1S 0x0 /* PF_BAR0 */
#define busnum_CAVM_AVS_STS_W1S 0
#define arguments_CAVM_AVS_STS_W1S -1,-1,-1,-1

#endif /* __CAVM_CSRS_AVS_H__ */
