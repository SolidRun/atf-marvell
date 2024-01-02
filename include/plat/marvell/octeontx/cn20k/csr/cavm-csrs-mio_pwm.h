#ifndef __CAVM_CSRS_MIO_PWM_H__
#define __CAVM_CSRS_MIO_PWM_H__
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
#define CAVM_MIO_PWM_BAR_E_MIO_PWMX_PF_BAR0(a) (0x87e118000000ll + 0x1000000ll * (a))
#define CAVM_MIO_PWM_BAR_E_MIO_PWMX_PF_BAR0_SIZE 0x10000ull

/**
 * Register (RSL32b) mio_pwm#_cfg_param
 *
 * PWM Configuration Parameter Register
 * This register contains configuration parameters from Processor.
 */
union cavm_mio_pwmx_cfg_param
{
    uint32_t u;
    struct cavm_mio_pwmx_cfg_param_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t freq_pow2_div         : 3;  /**< [  7:  5](R/W) Software programmable 3-bit log2 div applied to IOCLK/8.
                                                                 This is used to determine Frequency.
                                                                 This field cannot be updated when PWM_EN is set. */
        uint32_t overflow_config       : 5;  /**< [  4:  0](R/W) Software Programmable 5-bits used to match Overflow. When Free-running counter
                                                                 upper5-bits match Overflow_config hardware would reset the counter and resume counting.
                                                                 This field cannot be updated when PWM_EN is set. */
#else /* Word 0 - Little Endian */
        uint32_t overflow_config       : 5;  /**< [  4:  0](R/W) Software Programmable 5-bits used to match Overflow. When Free-running counter
                                                                 upper5-bits match Overflow_config hardware would reset the counter and resume counting.
                                                                 This field cannot be updated when PWM_EN is set. */
        uint32_t freq_pow2_div         : 3;  /**< [  7:  5](R/W) Software programmable 3-bit log2 div applied to IOCLK/8.
                                                                 This is used to determine Frequency.
                                                                 This field cannot be updated when PWM_EN is set. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mio_pwmx_cfg_param_s cn; */
};
typedef union cavm_mio_pwmx_cfg_param cavm_mio_pwmx_cfg_param_t;

static inline uint64_t CAVM_MIO_PWMX_CFG_PARAM(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MIO_PWMX_CFG_PARAM(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e118000000ll + 0x1000000ll * ((a) & 0x3);
    __cavm_csr_fatal("MIO_PWMX_CFG_PARAM", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MIO_PWMX_CFG_PARAM(a) cavm_mio_pwmx_cfg_param_t
#define bustype_CAVM_MIO_PWMX_CFG_PARAM(a) CSR_TYPE_RSL32b
#define basename_CAVM_MIO_PWMX_CFG_PARAM(a) "MIO_PWMX_CFG_PARAM"
#define device_bar_CAVM_MIO_PWMX_CFG_PARAM(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MIO_PWMX_CFG_PARAM(a) (a)
#define arguments_CAVM_MIO_PWMX_CFG_PARAM(a) (a),-1,-1,-1

/**
 * Register (RSL32b) mio_pwm#_ctl
 *
 * PWM Control Register
 * This register contains control inputs from Processor.
 */
union cavm_mio_pwmx_ctl
{
    uint32_t u;
    struct cavm_mio_pwmx_ctl_s
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
    /* struct cavm_mio_pwmx_ctl_s cn; */
};
typedef union cavm_mio_pwmx_ctl cavm_mio_pwmx_ctl_t;

static inline uint64_t CAVM_MIO_PWMX_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MIO_PWMX_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e118000004ll + 0x1000000ll * ((a) & 0x3);
    __cavm_csr_fatal("MIO_PWMX_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MIO_PWMX_CTL(a) cavm_mio_pwmx_ctl_t
#define bustype_CAVM_MIO_PWMX_CTL(a) CSR_TYPE_RSL32b
#define basename_CAVM_MIO_PWMX_CTL(a) "MIO_PWMX_CTL"
#define device_bar_CAVM_MIO_PWMX_CTL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MIO_PWMX_CTL(a) (a)
#define arguments_CAVM_MIO_PWMX_CTL(a) (a),-1,-1,-1

/**
 * Register (RSL32b) mio_pwm#_frc
 *
 * PWM Free Running Counter Register
 * This register contains input Free running counter from Processor.
 */
union cavm_mio_pwmx_frc
{
    uint32_t u;
    struct cavm_mio_pwmx_frc_s
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
    /* struct cavm_mio_pwmx_frc_s cn; */
};
typedef union cavm_mio_pwmx_frc cavm_mio_pwmx_frc_t;

static inline uint64_t CAVM_MIO_PWMX_FRC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MIO_PWMX_FRC(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e118000008ll + 0x1000000ll * ((a) & 0x3);
    __cavm_csr_fatal("MIO_PWMX_FRC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MIO_PWMX_FRC(a) cavm_mio_pwmx_frc_t
#define bustype_CAVM_MIO_PWMX_FRC(a) CSR_TYPE_RSL32b
#define basename_CAVM_MIO_PWMX_FRC(a) "MIO_PWMX_FRC"
#define device_bar_CAVM_MIO_PWMX_FRC(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MIO_PWMX_FRC(a) (a)
#define arguments_CAVM_MIO_PWMX_FRC(a) (a),-1,-1,-1

/**
 * Register (RSL32b) mio_pwm#_sense_counter
 *
 * PWM Sense counter Register
 * This register contains Sense counter based on the input PWM_in value.
 */
union cavm_mio_pwmx_sense_counter
{
    uint32_t u;
    struct cavm_mio_pwmx_sense_counter_s
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
    /* struct cavm_mio_pwmx_sense_counter_s cn; */
};
typedef union cavm_mio_pwmx_sense_counter cavm_mio_pwmx_sense_counter_t;

static inline uint64_t CAVM_MIO_PWMX_SENSE_COUNTER(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MIO_PWMX_SENSE_COUNTER(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e11800000cll + 0x1000000ll * ((a) & 0x3);
    __cavm_csr_fatal("MIO_PWMX_SENSE_COUNTER", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MIO_PWMX_SENSE_COUNTER(a) cavm_mio_pwmx_sense_counter_t
#define bustype_CAVM_MIO_PWMX_SENSE_COUNTER(a) CSR_TYPE_RSL32b
#define basename_CAVM_MIO_PWMX_SENSE_COUNTER(a) "MIO_PWMX_SENSE_COUNTER"
#define device_bar_CAVM_MIO_PWMX_SENSE_COUNTER(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MIO_PWMX_SENSE_COUNTER(a) (a)
#define arguments_CAVM_MIO_PWMX_SENSE_COUNTER(a) (a),-1,-1,-1

#endif /* __CAVM_CSRS_MIO_PWM_H__ */
