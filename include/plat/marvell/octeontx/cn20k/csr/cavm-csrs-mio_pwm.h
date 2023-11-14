#ifndef __CAVM_CSRS_MIO_PWM_H__
#define __CAVM_CSRS_MIO_PWM_H__
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
 * MIO_PWM.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration mio_pwm_bar_e
 *
 * PWMI Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define CAVM_MIO_PWM_BAR_E_MIO_PWM_PF_BAR0 (0x87e038000000ll)
#define CAVM_MIO_PWM_BAR_E_MIO_PWM_PF_BAR0_SIZE 0x10000ull

/**
 * Register (RSL32b) mio_pwm_cfg_param
 *
 * PWM Configuration Parameter Register
 * This register contains configuration parameters from Processor.
 */
union cavm_mio_pwm_cfg_param
{
    uint32_t u;
    struct cavm_mio_pwm_cfg_param_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t freq_pow2_div         : 3;  /**< [  7:  5](R/W) Software programmable 3-bit log2 div applied to IOCLK/8.
                                                                 This is used to determine Frequency. */
        uint32_t overflow_config       : 5;  /**< [  4:  0](R/W) Software Programmable 5-bits used to match Overflow. When Free-running counter
                                                                 upper5-bits match Overflow_config hardware would reset the counter and resume counting. */
#else /* Word 0 - Little Endian */
        uint32_t overflow_config       : 5;  /**< [  4:  0](R/W) Software Programmable 5-bits used to match Overflow. When Free-running counter
                                                                 upper5-bits match Overflow_config hardware would reset the counter and resume counting. */
        uint32_t freq_pow2_div         : 3;  /**< [  7:  5](R/W) Software programmable 3-bit log2 div applied to IOCLK/8.
                                                                 This is used to determine Frequency. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mio_pwm_cfg_param_s cn; */
};
typedef union cavm_mio_pwm_cfg_param cavm_mio_pwm_cfg_param_t;

#define CAVM_MIO_PWM_CFG_PARAM CAVM_MIO_PWM_CFG_PARAM_FUNC()
static inline uint64_t CAVM_MIO_PWM_CFG_PARAM_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MIO_PWM_CFG_PARAM_FUNC(void)
{
    return 0x87e038000000ll;
}

#define typedef_CAVM_MIO_PWM_CFG_PARAM cavm_mio_pwm_cfg_param_t
#define bustype_CAVM_MIO_PWM_CFG_PARAM CSR_TYPE_RSL32b
#define basename_CAVM_MIO_PWM_CFG_PARAM "MIO_PWM_CFG_PARAM"
#define device_bar_CAVM_MIO_PWM_CFG_PARAM 0x0 /* PF_BAR0 */
#define busnum_CAVM_MIO_PWM_CFG_PARAM 0
#define arguments_CAVM_MIO_PWM_CFG_PARAM -1,-1,-1,-1

/**
 * Register (RSL32b) mio_pwm_ctl
 *
 * PWM Control Register
 * This register contains control inputs from Processor.
 */
union cavm_mio_pwm_ctl
{
    uint32_t u;
    struct cavm_mio_pwm_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_14_31        : 18;
        uint32_t set_threshold         : 13; /**< [ 13:  1](R/W) Software programmable set threshold value. This let's software program when should
                                                                 hardware set PWM output to 1 and keep it one till the counter rolls over. */
        uint32_t pwm_en                : 1;  /**< [  0:  0](R/W) Software Programmable 5-bits used to match Overflow. When Free-running counter
                                                                 upper5-bits match Overflow_config hardware would reset the counter and resume counting */
#else /* Word 0 - Little Endian */
        uint32_t pwm_en                : 1;  /**< [  0:  0](R/W) Software Programmable 5-bits used to match Overflow. When Free-running counter
                                                                 upper5-bits match Overflow_config hardware would reset the counter and resume counting */
        uint32_t set_threshold         : 13; /**< [ 13:  1](R/W) Software programmable set threshold value. This let's software program when should
                                                                 hardware set PWM output to 1 and keep it one till the counter rolls over. */
        uint32_t reserved_14_31        : 18;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mio_pwm_ctl_s cn; */
};
typedef union cavm_mio_pwm_ctl cavm_mio_pwm_ctl_t;

#define CAVM_MIO_PWM_CTL CAVM_MIO_PWM_CTL_FUNC()
static inline uint64_t CAVM_MIO_PWM_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MIO_PWM_CTL_FUNC(void)
{
    return 0x87e038000004ll;
}

#define typedef_CAVM_MIO_PWM_CTL cavm_mio_pwm_ctl_t
#define bustype_CAVM_MIO_PWM_CTL CSR_TYPE_RSL32b
#define basename_CAVM_MIO_PWM_CTL "MIO_PWM_CTL"
#define device_bar_CAVM_MIO_PWM_CTL 0x0 /* PF_BAR0 */
#define busnum_CAVM_MIO_PWM_CTL 0
#define arguments_CAVM_MIO_PWM_CTL -1,-1,-1,-1

/**
 * Register (RSL32b) mio_pwm_frc
 *
 * PWM Free Running Counter Register
 * This register contains input Free running counter from Processor.
 */
union cavm_mio_pwm_frc
{
    uint32_t u;
    struct cavm_mio_pwm_frc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_13_31        : 19;
        uint32_t free_running_counter  : 13; /**< [ 12:  0](R/W/H) This counter operates on (IOCLK/8)/pow(2,freq_pow2_div) and counts till bits
                                                                 if free_running_counter{12:8} == Overflow_config, counter restarts.
                                                                 If Software would like to write to this register then it first needs to clear PWM_CTL_reg.
                                                                 Enable and then perform a write. Mostly used for Verification coverage. */
#else /* Word 0 - Little Endian */
        uint32_t free_running_counter  : 13; /**< [ 12:  0](R/W/H) This counter operates on (IOCLK/8)/pow(2,freq_pow2_div) and counts till bits
                                                                 if free_running_counter{12:8} == Overflow_config, counter restarts.
                                                                 If Software would like to write to this register then it first needs to clear PWM_CTL_reg.
                                                                 Enable and then perform a write. Mostly used for Verification coverage. */
        uint32_t reserved_13_31        : 19;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mio_pwm_frc_s cn; */
};
typedef union cavm_mio_pwm_frc cavm_mio_pwm_frc_t;

#define CAVM_MIO_PWM_FRC CAVM_MIO_PWM_FRC_FUNC()
static inline uint64_t CAVM_MIO_PWM_FRC_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MIO_PWM_FRC_FUNC(void)
{
    return 0x87e038000008ll;
}

#define typedef_CAVM_MIO_PWM_FRC cavm_mio_pwm_frc_t
#define bustype_CAVM_MIO_PWM_FRC CSR_TYPE_RSL32b
#define basename_CAVM_MIO_PWM_FRC "MIO_PWM_FRC"
#define device_bar_CAVM_MIO_PWM_FRC 0x0 /* PF_BAR0 */
#define busnum_CAVM_MIO_PWM_FRC 0
#define arguments_CAVM_MIO_PWM_FRC -1,-1,-1,-1

/**
 * Register (RSL32b) mio_pwm_sense_counter
 *
 * PWM Sense counter Register
 * This register contains Sense counter based on the input PWM_in value.
 */
union cavm_mio_pwm_sense_counter
{
    uint32_t u;
    struct cavm_mio_pwm_sense_counter_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_13_31        : 19;
        uint32_t sense_counter         : 13; /**< [ 12:  0](R/W/H) Free running counter that sense's PWM_In pulse and increments the counter
                                                                 Provide Write capability - where Software write is given higher priority and once written
                                                                 then Hardware continues sensing PWM_IN. */
#else /* Word 0 - Little Endian */
        uint32_t sense_counter         : 13; /**< [ 12:  0](R/W/H) Free running counter that sense's PWM_In pulse and increments the counter
                                                                 Provide Write capability - where Software write is given higher priority and once written
                                                                 then Hardware continues sensing PWM_IN. */
        uint32_t reserved_13_31        : 19;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mio_pwm_sense_counter_s cn; */
};
typedef union cavm_mio_pwm_sense_counter cavm_mio_pwm_sense_counter_t;

#define CAVM_MIO_PWM_SENSE_COUNTER CAVM_MIO_PWM_SENSE_COUNTER_FUNC()
static inline uint64_t CAVM_MIO_PWM_SENSE_COUNTER_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MIO_PWM_SENSE_COUNTER_FUNC(void)
{
    return 0x87e03800000cll;
}

#define typedef_CAVM_MIO_PWM_SENSE_COUNTER cavm_mio_pwm_sense_counter_t
#define bustype_CAVM_MIO_PWM_SENSE_COUNTER CSR_TYPE_RSL32b
#define basename_CAVM_MIO_PWM_SENSE_COUNTER "MIO_PWM_SENSE_COUNTER"
#define device_bar_CAVM_MIO_PWM_SENSE_COUNTER 0x0 /* PF_BAR0 */
#define busnum_CAVM_MIO_PWM_SENSE_COUNTER 0
#define arguments_CAVM_MIO_PWM_SENSE_COUNTER -1,-1,-1,-1

#endif /* __CAVM_CSRS_MIO_PWM_H__ */
