#ifndef __CAVM_CSRS_CEST_H__
#define __CAVM_CSRS_CEST_H__
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
 * CEST.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Register (RSL) cest#_chest_debug
 *
 * CEST Chest Debug Register
 */
union cavm_cestx_chest_debug
{
    uint64_t u;
    struct cavm_cestx_chest_debug_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_18_63        : 46;
        uint64_t numreceivedprb        : 9;  /**< [ 17:  9](RO) Number of prb's received by the chesteng. */
        uint64_t numprocessedprb       : 9;  /**< [  8:  0](RO) Number of prb's processed by the chesteng. */
#else /* Word 0 - Little Endian */
        uint64_t numprocessedprb       : 9;  /**< [  8:  0](RO) Number of prb's processed by the chesteng. */
        uint64_t numreceivedprb        : 9;  /**< [ 17:  9](RO) Number of prb's received by the chesteng. */
        uint64_t reserved_18_63        : 46;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cestx_chest_debug_s cn; */
};
typedef union cavm_cestx_chest_debug cavm_cestx_chest_debug_t;

static inline uint64_t CAVM_CESTX_CHEST_DEBUG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CESTX_CHEST_DEBUG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=3))
        return 0x87e041c007b0ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("CESTX_CHEST_DEBUG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CESTX_CHEST_DEBUG(a) cavm_cestx_chest_debug_t
#define bustype_CAVM_CESTX_CHEST_DEBUG(a) CSR_TYPE_RSL
#define basename_CAVM_CESTX_CHEST_DEBUG(a) "CESTX_CHEST_DEBUG"
#define busnum_CAVM_CESTX_CHEST_DEBUG(a) (a)
#define arguments_CAVM_CESTX_CHEST_DEBUG(a) (a),-1,-1,-1

/**
 * Register (RSL) cest#_coma_input_exp_0
 *
 * CEST Coma Input Exp 0 Register
 */
union cavm_cestx_coma_input_exp_0
{
    uint64_t u;
    struct cavm_cestx_coma_input_exp_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t antenna_15_to_0       : 64; /**< [ 63:  0](R/W) Antenna exponent values from ant. 0 to 15. Each value is 4 bits, and arrangement
                                                                 is antenna 0 in LSB and antenna 15 in MSB. ChEst data is shifted right by the
                                                                 given amount and truncated to 16 bits (divide by 2's power exponent). */
#else /* Word 0 - Little Endian */
        uint64_t antenna_15_to_0       : 64; /**< [ 63:  0](R/W) Antenna exponent values from ant. 0 to 15. Each value is 4 bits, and arrangement
                                                                 is antenna 0 in LSB and antenna 15 in MSB. ChEst data is shifted right by the
                                                                 given amount and truncated to 16 bits (divide by 2's power exponent). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cestx_coma_input_exp_0_s cn; */
};
typedef union cavm_cestx_coma_input_exp_0 cavm_cestx_coma_input_exp_0_t;

static inline uint64_t CAVM_CESTX_COMA_INPUT_EXP_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CESTX_COMA_INPUT_EXP_0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=3))
        return 0x87e041c02018ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("CESTX_COMA_INPUT_EXP_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CESTX_COMA_INPUT_EXP_0(a) cavm_cestx_coma_input_exp_0_t
#define bustype_CAVM_CESTX_COMA_INPUT_EXP_0(a) CSR_TYPE_RSL
#define basename_CAVM_CESTX_COMA_INPUT_EXP_0(a) "CESTX_COMA_INPUT_EXP_0"
#define busnum_CAVM_CESTX_COMA_INPUT_EXP_0(a) (a)
#define arguments_CAVM_CESTX_COMA_INPUT_EXP_0(a) (a),-1,-1,-1

/**
 * Register (RSL) cest#_coma_input_exp_1
 *
 * CEST Coma Input Exp 1 Register
 */
union cavm_cestx_coma_input_exp_1
{
    uint64_t u;
    struct cavm_cestx_coma_input_exp_1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t antenna_32_to_16      : 64; /**< [ 63:  0](R/W) Antenna exponent values from ant. 31 to 16. Each value is 4 bits, and
                                                                 arrangement is antenna 16 in LSB and antenna 31 in MSB. ChEst data is shifted
                                                                 right by the given amount and truncated to 16 bits (divide by 2's power
                                                                 exponent). */
#else /* Word 0 - Little Endian */
        uint64_t antenna_32_to_16      : 64; /**< [ 63:  0](R/W) Antenna exponent values from ant. 31 to 16. Each value is 4 bits, and
                                                                 arrangement is antenna 16 in LSB and antenna 31 in MSB. ChEst data is shifted
                                                                 right by the given amount and truncated to 16 bits (divide by 2's power
                                                                 exponent). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cestx_coma_input_exp_1_s cn; */
};
typedef union cavm_cestx_coma_input_exp_1 cavm_cestx_coma_input_exp_1_t;

static inline uint64_t CAVM_CESTX_COMA_INPUT_EXP_1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CESTX_COMA_INPUT_EXP_1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=3))
        return 0x87e041c02020ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("CESTX_COMA_INPUT_EXP_1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CESTX_COMA_INPUT_EXP_1(a) cavm_cestx_coma_input_exp_1_t
#define bustype_CAVM_CESTX_COMA_INPUT_EXP_1(a) CSR_TYPE_RSL
#define basename_CAVM_CESTX_COMA_INPUT_EXP_1(a) "CESTX_COMA_INPUT_EXP_1"
#define busnum_CAVM_CESTX_COMA_INPUT_EXP_1(a) (a)
#define arguments_CAVM_CESTX_COMA_INPUT_EXP_1(a) (a),-1,-1,-1

/**
 * Register (RSL) cest#_common_debug
 *
 * CEST Common Debug Register
 */
union cavm_cestx_common_debug
{
    uint64_t u;
    struct cavm_cestx_common_debug_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t job_wait_time_1       : 16; /**< [ 63: 48](RO) Number of clock cycles used to wait on output interface 1. */
        uint64_t job_wait_time_0       : 16; /**< [ 47: 32](RO) Number of clock cycles used to wait on output interface 0. */
        uint64_t tx_credit_count_1     : 6;  /**< [ 31: 26](RO) Tx credit count for port 1. */
        uint64_t tx_credit_count_0     : 6;  /**< [ 25: 20](RO) Tx credit count for port 0. */
        uint64_t job_processing_time   : 20; /**< [ 19:  0](RO) Number of clock cycles used to process the job (from job start to tlast). */
#else /* Word 0 - Little Endian */
        uint64_t job_processing_time   : 20; /**< [ 19:  0](RO) Number of clock cycles used to process the job (from job start to tlast). */
        uint64_t tx_credit_count_0     : 6;  /**< [ 25: 20](RO) Tx credit count for port 0. */
        uint64_t tx_credit_count_1     : 6;  /**< [ 31: 26](RO) Tx credit count for port 1. */
        uint64_t job_wait_time_0       : 16; /**< [ 47: 32](RO) Number of clock cycles used to wait on output interface 0. */
        uint64_t job_wait_time_1       : 16; /**< [ 63: 48](RO) Number of clock cycles used to wait on output interface 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cestx_common_debug_s cn; */
};
typedef union cavm_cestx_common_debug cavm_cestx_common_debug_t;

static inline uint64_t CAVM_CESTX_COMMON_DEBUG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CESTX_COMMON_DEBUG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=3))
        return 0x87e041c00798ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("CESTX_COMMON_DEBUG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CESTX_COMMON_DEBUG(a) cavm_cestx_common_debug_t
#define bustype_CAVM_CESTX_COMMON_DEBUG(a) CSR_TYPE_RSL
#define basename_CAVM_CESTX_COMMON_DEBUG(a) "CESTX_COMMON_DEBUG"
#define busnum_CAVM_CESTX_COMMON_DEBUG(a) (a)
#define arguments_CAVM_CESTX_COMMON_DEBUG(a) (a),-1,-1,-1

/**
 * Register (RSL) cest#_control_0
 *
 * CEST Control 0 Register
 */
union cavm_cestx_control_0
{
    uint64_t u;
    struct cavm_cestx_control_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t jobid_0               : 16; /**< [ 31: 16](R/W) Job ID 0 [Output Function: PORT]. */
        uint64_t reserved_1_15         : 15;
        uint64_t start                 : 1;  /**< [  0:  0](R/W) 1 = start the HAB per config. HAB start ignored if HAB status is busy.
                                                                 [Output Function: PULSE; PORT]. */
#else /* Word 0 - Little Endian */
        uint64_t start                 : 1;  /**< [  0:  0](R/W) 1 = start the HAB per config. HAB start ignored if HAB status is busy.
                                                                 [Output Function: PULSE; PORT]. */
        uint64_t reserved_1_15         : 15;
        uint64_t jobid_0               : 16; /**< [ 31: 16](R/W) Job ID 0 [Output Function: PORT]. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cestx_control_0_s cn; */
};
typedef union cavm_cestx_control_0 cavm_cestx_control_0_t;

static inline uint64_t CAVM_CESTX_CONTROL_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CESTX_CONTROL_0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=3))
        return 0x87e041c00000ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("CESTX_CONTROL_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CESTX_CONTROL_0(a) cavm_cestx_control_0_t
#define bustype_CAVM_CESTX_CONTROL_0(a) CSR_TYPE_RSL
#define basename_CAVM_CESTX_CONTROL_0(a) "CESTX_CONTROL_0"
#define busnum_CAVM_CESTX_CONTROL_0(a) (a)
#define arguments_CAVM_CESTX_CONTROL_0(a) (a),-1,-1,-1

/**
 * Register (RSL) cest#_dynamic_user_grp_0_1_cfg#
 *
 * CEST Dynamic User Grp 0 1 Cfg Register
 * In DMRS, max user per layer =50. In case of SRS,  max users per layer = 68. This
 * register set hold info about users in layer 0 and 1. (**see below).
 */
union cavm_cestx_dynamic_user_grp_0_1_cfgx
{
    uint64_t u;
    struct cavm_cestx_dynamic_user_grp_0_1_cfgx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_52_63        : 12;
        uint64_t dmrs_pilot_select_l1  : 1;  /**< [ 51: 51](R/W) This field is used to select the DMRS "CP-OFDMA Rel 16 or Rel 15" pilot sequence
                                                                 for the user. The value 0 indicates Rel 15 compatible user and value 1 indicates
                                                                 Rel 16 compatible user. This field is not used in SRS mode. */
        uint64_t active_l1             : 1;  /**< [ 50: 50](R/W) Indication whether the user is active or not. */
        uint64_t startprbuser_l1       : 9;  /**< [ 49: 41](R/W) Start PRB of the user. */
        uint64_t numprbuser_l1         : 9;  /**< [ 40: 32](R/W) Number of PRB's allocated for the user. */
        uint64_t reserved_20_31        : 12;
        uint64_t dmrs_pilot_select_l0  : 1;  /**< [ 19: 19](R/W) This field is used to select the DMRS "CP-OFDMA Rel 16 or Rel 15" pilot sequence
                                                                 for the user. The value 0 indicates Rel 15 compatible user and value 1 indicates
                                                                 Rel 16 compatible user. This field is not used in SRS mode. */
        uint64_t active_l0             : 1;  /**< [ 18: 18](R/W) Indication whether the user is active or not. */
        uint64_t startprbuser_l0       : 9;  /**< [ 17:  9](R/W) Start PRB of the user. */
        uint64_t numprbuser_l0         : 9;  /**< [  8:  0](R/W) Number of PRB's allocated for the user. */
#else /* Word 0 - Little Endian */
        uint64_t numprbuser_l0         : 9;  /**< [  8:  0](R/W) Number of PRB's allocated for the user. */
        uint64_t startprbuser_l0       : 9;  /**< [ 17:  9](R/W) Start PRB of the user. */
        uint64_t active_l0             : 1;  /**< [ 18: 18](R/W) Indication whether the user is active or not. */
        uint64_t dmrs_pilot_select_l0  : 1;  /**< [ 19: 19](R/W) This field is used to select the DMRS "CP-OFDMA Rel 16 or Rel 15" pilot sequence
                                                                 for the user. The value 0 indicates Rel 15 compatible user and value 1 indicates
                                                                 Rel 16 compatible user. This field is not used in SRS mode. */
        uint64_t reserved_20_31        : 12;
        uint64_t numprbuser_l1         : 9;  /**< [ 40: 32](R/W) Number of PRB's allocated for the user. */
        uint64_t startprbuser_l1       : 9;  /**< [ 49: 41](R/W) Start PRB of the user. */
        uint64_t active_l1             : 1;  /**< [ 50: 50](R/W) Indication whether the user is active or not. */
        uint64_t dmrs_pilot_select_l1  : 1;  /**< [ 51: 51](R/W) This field is used to select the DMRS "CP-OFDMA Rel 16 or Rel 15" pilot sequence
                                                                 for the user. The value 0 indicates Rel 15 compatible user and value 1 indicates
                                                                 Rel 16 compatible user. This field is not used in SRS mode. */
        uint64_t reserved_52_63        : 12;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cestx_dynamic_user_grp_0_1_cfgx_s cn; */
};
typedef union cavm_cestx_dynamic_user_grp_0_1_cfgx cavm_cestx_dynamic_user_grp_0_1_cfgx_t;

static inline uint64_t CAVM_CESTX_DYNAMIC_USER_GRP_0_1_CFGX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CESTX_DYNAMIC_USER_GRP_0_1_CFGX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=3) && (b<=67)))
        return 0x87e041c02028ll + 0x80000ll * ((a) & 0x3) + 8ll * ((b) & 0x7f);
    __cavm_csr_fatal("CESTX_DYNAMIC_USER_GRP_0_1_CFGX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CESTX_DYNAMIC_USER_GRP_0_1_CFGX(a,b) cavm_cestx_dynamic_user_grp_0_1_cfgx_t
#define bustype_CAVM_CESTX_DYNAMIC_USER_GRP_0_1_CFGX(a,b) CSR_TYPE_RSL
#define basename_CAVM_CESTX_DYNAMIC_USER_GRP_0_1_CFGX(a,b) "CESTX_DYNAMIC_USER_GRP_0_1_CFGX"
#define busnum_CAVM_CESTX_DYNAMIC_USER_GRP_0_1_CFGX(a,b) (a)
#define arguments_CAVM_CESTX_DYNAMIC_USER_GRP_0_1_CFGX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) cest#_dynamic_user_grp_2_3_cfg#
 *
 * CEST Dynamic User Grp 2 3 Cfg Register
 * Note: In DMRS, max user per layer =50. In case of SRS,  max users per layer = 68.
 * This register set hold info about users inlayer 2 and 3.
 */
union cavm_cestx_dynamic_user_grp_2_3_cfgx
{
    uint64_t u;
    struct cavm_cestx_dynamic_user_grp_2_3_cfgx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_52_63        : 12;
        uint64_t dmrs_pilot_select_l3  : 1;  /**< [ 51: 51](R/W) This field is used to select the DMRS "CP-OFDMA Rel 16 or Rel 15" pilot sequence
                                                                 for the user. The value 0 indicates Rel 15 compatible user and value 1 indicates
                                                                 Rel 16 compatible user. This field is not used in SRS mode. */
        uint64_t active_l3             : 1;  /**< [ 50: 50](R/W) Indication whether the user is active or not. */
        uint64_t startprbuser_l3       : 9;  /**< [ 49: 41](R/W) Start PRB of the user. */
        uint64_t numprbuser_l3         : 9;  /**< [ 40: 32](R/W) Number of PRB's allocated for the user. */
        uint64_t reserved_20_31        : 12;
        uint64_t dmrs_pilot_select_l2  : 1;  /**< [ 19: 19](R/W) This field is used to select the DMRS "CP-OFDMA Rel 16 or Rel 15" pilot sequence
                                                                 for the user. The value 0 indicates Rel 15 compatible user and value 1 indicates
                                                                 Rel 16 compatible user. This field is not used in SRS mode. */
        uint64_t active_l2             : 1;  /**< [ 18: 18](R/W) Indication whether the user is active or not. */
        uint64_t startprbuser_l2       : 9;  /**< [ 17:  9](R/W) Start PRB of the user. */
        uint64_t numprbuser_l2         : 9;  /**< [  8:  0](R/W) Number of PRB's allocated for the user. */
#else /* Word 0 - Little Endian */
        uint64_t numprbuser_l2         : 9;  /**< [  8:  0](R/W) Number of PRB's allocated for the user. */
        uint64_t startprbuser_l2       : 9;  /**< [ 17:  9](R/W) Start PRB of the user. */
        uint64_t active_l2             : 1;  /**< [ 18: 18](R/W) Indication whether the user is active or not. */
        uint64_t dmrs_pilot_select_l2  : 1;  /**< [ 19: 19](R/W) This field is used to select the DMRS "CP-OFDMA Rel 16 or Rel 15" pilot sequence
                                                                 for the user. The value 0 indicates Rel 15 compatible user and value 1 indicates
                                                                 Rel 16 compatible user. This field is not used in SRS mode. */
        uint64_t reserved_20_31        : 12;
        uint64_t numprbuser_l3         : 9;  /**< [ 40: 32](R/W) Number of PRB's allocated for the user. */
        uint64_t startprbuser_l3       : 9;  /**< [ 49: 41](R/W) Start PRB of the user. */
        uint64_t active_l3             : 1;  /**< [ 50: 50](R/W) Indication whether the user is active or not. */
        uint64_t dmrs_pilot_select_l3  : 1;  /**< [ 51: 51](R/W) This field is used to select the DMRS "CP-OFDMA Rel 16 or Rel 15" pilot sequence
                                                                 for the user. The value 0 indicates Rel 15 compatible user and value 1 indicates
                                                                 Rel 16 compatible user. This field is not used in SRS mode. */
        uint64_t reserved_52_63        : 12;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cestx_dynamic_user_grp_2_3_cfgx_s cn; */
};
typedef union cavm_cestx_dynamic_user_grp_2_3_cfgx cavm_cestx_dynamic_user_grp_2_3_cfgx_t;

static inline uint64_t CAVM_CESTX_DYNAMIC_USER_GRP_2_3_CFGX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CESTX_DYNAMIC_USER_GRP_2_3_CFGX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=3) && (b<=67)))
        return 0x87e041c02248ll + 0x80000ll * ((a) & 0x3) + 8ll * ((b) & 0x7f);
    __cavm_csr_fatal("CESTX_DYNAMIC_USER_GRP_2_3_CFGX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CESTX_DYNAMIC_USER_GRP_2_3_CFGX(a,b) cavm_cestx_dynamic_user_grp_2_3_cfgx_t
#define bustype_CAVM_CESTX_DYNAMIC_USER_GRP_2_3_CFGX(a,b) CSR_TYPE_RSL
#define basename_CAVM_CESTX_DYNAMIC_USER_GRP_2_3_CFGX(a,b) "CESTX_DYNAMIC_USER_GRP_2_3_CFGX"
#define busnum_CAVM_CESTX_DYNAMIC_USER_GRP_2_3_CFGX(a,b) (a)
#define arguments_CAVM_CESTX_DYNAMIC_USER_GRP_2_3_CFGX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) cest#_errcodes_fat
 *
 * CEST Errcodes Fat Register
 */
union cavm_cestx_errcodes_fat
{
    uint64_t u;
    struct cavm_cestx_errcodes_fat_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t job_id                : 16; /**< [ 63: 48](R/W1C) Job id for not-enabled errors which are not reported to the MHBW. (using job_id
                                                                 0 from the starting address).
                                                                 [Input Function: PORT reg_ERRCODES_FAT_job_id_in].
                                                                 [Output Function: STROBE reg_ERRCODES_FAT_job_id_out]. */
        uint64_t counter               : 16; /**< [ 47: 32](R/W1C) Counter for not-enabled errors which are not reported to the MHBW.
                                                                 [Input Function: PORT reg_ERRCODES_FAT_counter_in].
                                                                 [Output Function: STROBE reg_ERRCODES_FAT_counter_out]. */
        uint64_t errcode               : 32; /**< [ 31:  0](R/W1C) Fatal error status bits.
                                                                 [Input Function: PORT reg_ERRCODES_FAT_errcode_in].
                                                                 [Output Function: STROBE].
                                                                 _ Bit 0: Not used.
                                                                 _ Bit 1: The job type is unknown (wrongly configured), hence the expected busy job
                                                                 is 0, and job is idle.
                                                                 _ Bit 2: Flow control buffer config error as reported by flow control buffer
                                                                 (debug register has more info).
                                                                 _ Bit 3: Coma config error. Coma config type and numTrx config combination is
                                                                 wrong and not supported.
                                                                 _ Bit 4:  Incorrect active layers configuration for current configuration. From PG.
                                                                 _ Bit 5: Incorrect prb configuration in SRS, prb's not a multiple of 4. From PG.
                                                                 _ Bit 6: Incorrect Cyclic Shift configuration in SRS, comb2. CS value \>7. From PG.
                                                                 _ Bit 7: Incorrect Comb value configuration in 5G SRS. Comb value should be 2 or 4.
                                                                 _ Bit 8: Incorrect config u range.
                                                                 _ Bit 9: Incorrect skip range.
                                                                 _ Bit 10: Incorrect prb range.
                                                                 _ Bit 11: Incorrect total prb value.
                                                                 _ Bit 12: Unsupported comb layer combination.
                                                                 _ Bit 13: Unsupported comb cs combination.
                                                                 _ Bit 14: Unsupported number of active users. */
#else /* Word 0 - Little Endian */
        uint64_t errcode               : 32; /**< [ 31:  0](R/W1C) Fatal error status bits.
                                                                 [Input Function: PORT reg_ERRCODES_FAT_errcode_in].
                                                                 [Output Function: STROBE].
                                                                 _ Bit 0: Not used.
                                                                 _ Bit 1: The job type is unknown (wrongly configured), hence the expected busy job
                                                                 is 0, and job is idle.
                                                                 _ Bit 2: Flow control buffer config error as reported by flow control buffer
                                                                 (debug register has more info).
                                                                 _ Bit 3: Coma config error. Coma config type and numTrx config combination is
                                                                 wrong and not supported.
                                                                 _ Bit 4:  Incorrect active layers configuration for current configuration. From PG.
                                                                 _ Bit 5: Incorrect prb configuration in SRS, prb's not a multiple of 4. From PG.
                                                                 _ Bit 6: Incorrect Cyclic Shift configuration in SRS, comb2. CS value \>7. From PG.
                                                                 _ Bit 7: Incorrect Comb value configuration in 5G SRS. Comb value should be 2 or 4.
                                                                 _ Bit 8: Incorrect config u range.
                                                                 _ Bit 9: Incorrect skip range.
                                                                 _ Bit 10: Incorrect prb range.
                                                                 _ Bit 11: Incorrect total prb value.
                                                                 _ Bit 12: Unsupported comb layer combination.
                                                                 _ Bit 13: Unsupported comb cs combination.
                                                                 _ Bit 14: Unsupported number of active users. */
        uint64_t counter               : 16; /**< [ 47: 32](R/W1C) Counter for not-enabled errors which are not reported to the MHBW.
                                                                 [Input Function: PORT reg_ERRCODES_FAT_counter_in].
                                                                 [Output Function: STROBE reg_ERRCODES_FAT_counter_out]. */
        uint64_t job_id                : 16; /**< [ 63: 48](R/W1C) Job id for not-enabled errors which are not reported to the MHBW. (using job_id
                                                                 0 from the starting address).
                                                                 [Input Function: PORT reg_ERRCODES_FAT_job_id_in].
                                                                 [Output Function: STROBE reg_ERRCODES_FAT_job_id_out]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cestx_errcodes_fat_s cn; */
};
typedef union cavm_cestx_errcodes_fat cavm_cestx_errcodes_fat_t;

static inline uint64_t CAVM_CESTX_ERRCODES_FAT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CESTX_ERRCODES_FAT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=3))
        return 0x87e041c000b0ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("CESTX_ERRCODES_FAT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CESTX_ERRCODES_FAT(a) cavm_cestx_errcodes_fat_t
#define bustype_CAVM_CESTX_ERRCODES_FAT(a) CSR_TYPE_RSL
#define basename_CAVM_CESTX_ERRCODES_FAT(a) "CESTX_ERRCODES_FAT"
#define busnum_CAVM_CESTX_ERRCODES_FAT(a) (a)
#define arguments_CAVM_CESTX_ERRCODES_FAT(a) (a),-1,-1,-1

/**
 * Register (RSL) cest#_errcodes_nfat
 *
 * CEST Errcodes Nfat Register
 */
union cavm_cestx_errcodes_nfat
{
    uint64_t u;
    struct cavm_cestx_errcodes_nfat_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t job_id                : 16; /**< [ 63: 48](R/W1C) [Input Function: PORT reg_ERRCODES_NFAT_job_id_in].
                                                                 [Output Function: STROBE reg_ERRCODES_NFAT_job_id_out].
                                                                 job id for not-enabled errors which are not reported to the MHBW. (using job_id 0). */
        uint64_t counter               : 16; /**< [ 47: 32](R/W1C) Counter for not-enabled errors which are not reported to the MHBW.
                                                                 [Input Function: PORT reg_ERRCODES_NFAT_counter_in].
                                                                 [Output Function: STROBE reg_ERRCODES_NFAT_counter_out]. */
        uint64_t errcode               : 32; /**< [ 31:  0](R/W1C) Non-Fatal error status bits.
                                                                 [Input Function: PORT reg_ERRCODES_NFAT_errcode_in].
                                                                 [Output Function: STROBE reg_ERRCODES_NFAT_errcode_out]. */
#else /* Word 0 - Little Endian */
        uint64_t errcode               : 32; /**< [ 31:  0](R/W1C) Non-Fatal error status bits.
                                                                 [Input Function: PORT reg_ERRCODES_NFAT_errcode_in].
                                                                 [Output Function: STROBE reg_ERRCODES_NFAT_errcode_out]. */
        uint64_t counter               : 16; /**< [ 47: 32](R/W1C) Counter for not-enabled errors which are not reported to the MHBW.
                                                                 [Input Function: PORT reg_ERRCODES_NFAT_counter_in].
                                                                 [Output Function: STROBE reg_ERRCODES_NFAT_counter_out]. */
        uint64_t job_id                : 16; /**< [ 63: 48](R/W1C) [Input Function: PORT reg_ERRCODES_NFAT_job_id_in].
                                                                 [Output Function: STROBE reg_ERRCODES_NFAT_job_id_out].
                                                                 job id for not-enabled errors which are not reported to the MHBW. (using job_id 0). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cestx_errcodes_nfat_s cn; */
};
typedef union cavm_cestx_errcodes_nfat cavm_cestx_errcodes_nfat_t;

static inline uint64_t CAVM_CESTX_ERRCODES_NFAT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CESTX_ERRCODES_NFAT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=3))
        return 0x87e041c000a8ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("CESTX_ERRCODES_NFAT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CESTX_ERRCODES_NFAT(a) cavm_cestx_errcodes_nfat_t
#define bustype_CAVM_CESTX_ERRCODES_NFAT(a) CSR_TYPE_RSL
#define basename_CAVM_CESTX_ERRCODES_NFAT(a) "CESTX_ERRCODES_NFAT"
#define busnum_CAVM_CESTX_ERRCODES_NFAT(a) (a)
#define arguments_CAVM_CESTX_ERRCODES_NFAT(a) (a),-1,-1,-1

/**
 * Register (RSL) cest#_error_enable
 *
 * CEST Error Enable Register
 */
union cavm_cestx_error_enable
{
    uint64_t u;
    struct cavm_cestx_error_enable_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t fat_error_enable      : 32; /**< [ 63: 32](R/W) Fatal error enable:
                                                                  0 = Not enabled.
                                                                  1 = Enabled. */
        uint64_t nfat_error_enable     : 32; /**< [ 31:  0](R/W) Non-fatal error enable. */
#else /* Word 0 - Little Endian */
        uint64_t nfat_error_enable     : 32; /**< [ 31:  0](R/W) Non-fatal error enable. */
        uint64_t fat_error_enable      : 32; /**< [ 63: 32](R/W) Fatal error enable:
                                                                  0 = Not enabled.
                                                                  1 = Enabled. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cestx_error_enable_s cn; */
};
typedef union cavm_cestx_error_enable cavm_cestx_error_enable_t;

static inline uint64_t CAVM_CESTX_ERROR_ENABLE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CESTX_ERROR_ENABLE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=3))
        return 0x87e041c000b8ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("CESTX_ERROR_ENABLE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CESTX_ERROR_ENABLE(a) cavm_cestx_error_enable_t
#define bustype_CAVM_CESTX_ERROR_ENABLE(a) CSR_TYPE_RSL
#define basename_CAVM_CESTX_ERROR_ENABLE(a) "CESTX_ERROR_ENABLE"
#define busnum_CAVM_CESTX_ERROR_ENABLE(a) (a)
#define arguments_CAVM_CESTX_ERROR_ENABLE(a) (a),-1,-1,-1

/**
 * Register (RSL) cest#_error_enable_src
 *
 * CEST Error Enable Src Register
 */
union cavm_cestx_error_enable_src
{
    uint64_t u;
    struct cavm_cestx_error_enable_src_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t enable                : 1;  /**< [  0:  0](R/W) Error enable.
                                                                 0 = Disabled.
                                                                 1 = Enabled. */
#else /* Word 0 - Little Endian */
        uint64_t enable                : 1;  /**< [  0:  0](R/W) Error enable.
                                                                 0 = Disabled.
                                                                 1 = Enabled. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cestx_error_enable_src_s cn; */
};
typedef union cavm_cestx_error_enable_src cavm_cestx_error_enable_src_t;

static inline uint64_t CAVM_CESTX_ERROR_ENABLE_SRC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CESTX_ERROR_ENABLE_SRC(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=3))
        return 0x87e041c00040ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("CESTX_ERROR_ENABLE_SRC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CESTX_ERROR_ENABLE_SRC(a) cavm_cestx_error_enable_src_t
#define bustype_CAVM_CESTX_ERROR_ENABLE_SRC(a) CSR_TYPE_RSL
#define basename_CAVM_CESTX_ERROR_ENABLE_SRC(a) "CESTX_ERROR_ENABLE_SRC"
#define busnum_CAVM_CESTX_ERROR_ENABLE_SRC(a) (a)
#define arguments_CAVM_CESTX_ERROR_ENABLE_SRC(a) (a),-1,-1,-1

/**
 * Register (RSL) cest#_error_set
 *
 * CEST Error Set Register
 */
union cavm_cestx_error_set
{
    uint64_t u;
    struct cavm_cestx_error_set_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t fat                   : 32; /**< [ 63: 32](R/W) Set register for the error status/indication could help testing of error
                                                                 condition handling on SW. Read zero and writable (input latched and applied for
                                                                 the next job).
                                                                 [Output Function: PORT reg_ERROR_SET_fat_out]. */
        uint64_t nfat                  : 32; /**< [ 31:  0](R/W) Set register for the error status/indication could help testing of error
                                                                 condition handling on SW. Read zero and writable (input latched and applied for
                                                                 the next job).
                                                                 [Output Function: PORT reg_ERROR_SET_nfat_out]. */
#else /* Word 0 - Little Endian */
        uint64_t nfat                  : 32; /**< [ 31:  0](R/W) Set register for the error status/indication could help testing of error
                                                                 condition handling on SW. Read zero and writable (input latched and applied for
                                                                 the next job).
                                                                 [Output Function: PORT reg_ERROR_SET_nfat_out]. */
        uint64_t fat                   : 32; /**< [ 63: 32](R/W) Set register for the error status/indication could help testing of error
                                                                 condition handling on SW. Read zero and writable (input latched and applied for
                                                                 the next job).
                                                                 [Output Function: PORT reg_ERROR_SET_fat_out]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cestx_error_set_s cn; */
};
typedef union cavm_cestx_error_set cavm_cestx_error_set_t;

static inline uint64_t CAVM_CESTX_ERROR_SET(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CESTX_ERROR_SET(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=3))
        return 0x87e041c000c0ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("CESTX_ERROR_SET", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CESTX_ERROR_SET(a) cavm_cestx_error_set_t
#define bustype_CAVM_CESTX_ERROR_SET(a) CSR_TYPE_RSL
#define basename_CAVM_CESTX_ERROR_SET(a) "CESTX_ERROR_SET"
#define busnum_CAVM_CESTX_ERROR_SET(a) (a)
#define arguments_CAVM_CESTX_ERROR_SET(a) (a),-1,-1,-1

/**
 * Register (RSL) cest#_error_src
 *
 * CEST Error Src Register
 * Error source register 0 (interrupt event).
 */
union cavm_cestx_error_src
{
    uint64_t u;
    struct cavm_cestx_error_src_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t err_job_id0           : 16; /**< [ 31: 16](R/W1C) Read port overflow/underflow job ID 0.
                                                                 [Input Function: PORT reg_ERROR_SRC_err_job_id0_in].
                                                                 [Output Function: STROBE reg_ERROR_SRC_err_job_id0_out]. */
        uint64_t reserved_6_15         : 10;
        uint64_t rd_port_overflow1     : 1;  /**< [  5:  5](R/W1C) Read port1 overflow.
                                                                 [Input Function: PORT reg_ERROR_SRC_rd_port_overflow1_in].
                                                                 [Output Function: STROBE reg_ERROR_SRC_rd_port_overflow1_out]. */
        uint64_t rd_port_overflow0     : 1;  /**< [  4:  4](R/W1C) Read port0 overflow.
                                                                 [Input Function: PORT reg_ERROR_SRC_rd_port_overflow0_in].
                                                                 [Output Function: STROBE reg_ERROR_SRC_rd_port_overflow0_out]. */
        uint64_t reserved_2_3          : 2;
        uint64_t rd_port_underflow1    : 1;  /**< [  1:  1](R/W1C) Read port1 underflow.
                                                                 [Input Function: PORT reg_ERROR_SRC_rd_port_underflow1_in].
                                                                 [Output Function: STROBE reg_ERROR_SRC_rd_port_underflow1_out]. */
        uint64_t rd_port_underflow0    : 1;  /**< [  0:  0](R/W1C) Read port0 underflow.
                                                                 [Input Function: PORT reg_ERROR_SRC_rd_port_underflow0_in].
                                                                 [Output Function: STROBE reg_ERROR_SRC_rd_port_underflow0_out]. */
#else /* Word 0 - Little Endian */
        uint64_t rd_port_underflow0    : 1;  /**< [  0:  0](R/W1C) Read port0 underflow.
                                                                 [Input Function: PORT reg_ERROR_SRC_rd_port_underflow0_in].
                                                                 [Output Function: STROBE reg_ERROR_SRC_rd_port_underflow0_out]. */
        uint64_t rd_port_underflow1    : 1;  /**< [  1:  1](R/W1C) Read port1 underflow.
                                                                 [Input Function: PORT reg_ERROR_SRC_rd_port_underflow1_in].
                                                                 [Output Function: STROBE reg_ERROR_SRC_rd_port_underflow1_out]. */
        uint64_t reserved_2_3          : 2;
        uint64_t rd_port_overflow0     : 1;  /**< [  4:  4](R/W1C) Read port0 overflow.
                                                                 [Input Function: PORT reg_ERROR_SRC_rd_port_overflow0_in].
                                                                 [Output Function: STROBE reg_ERROR_SRC_rd_port_overflow0_out]. */
        uint64_t rd_port_overflow1     : 1;  /**< [  5:  5](R/W1C) Read port1 overflow.
                                                                 [Input Function: PORT reg_ERROR_SRC_rd_port_overflow1_in].
                                                                 [Output Function: STROBE reg_ERROR_SRC_rd_port_overflow1_out]. */
        uint64_t reserved_6_15         : 10;
        uint64_t err_job_id0           : 16; /**< [ 31: 16](R/W1C) Read port overflow/underflow job ID 0.
                                                                 [Input Function: PORT reg_ERROR_SRC_err_job_id0_in].
                                                                 [Output Function: STROBE reg_ERROR_SRC_err_job_id0_out]. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cestx_error_src_s cn; */
};
typedef union cavm_cestx_error_src cavm_cestx_error_src_t;

static inline uint64_t CAVM_CESTX_ERROR_SRC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CESTX_ERROR_SRC(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=3))
        return 0x87e041c00030ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("CESTX_ERROR_SRC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CESTX_ERROR_SRC(a) cavm_cestx_error_src_t
#define bustype_CAVM_CESTX_ERROR_SRC(a) CSR_TYPE_RSL
#define basename_CAVM_CESTX_ERROR_SRC(a) "CESTX_ERROR_SRC"
#define busnum_CAVM_CESTX_ERROR_SRC(a) (a)
#define arguments_CAVM_CESTX_ERROR_SRC(a) (a),-1,-1,-1

/**
 * Register (RSL) cest#_fc_buffer_debug
 *
 * CEST Fc Buffer Debug Register
 */
union cavm_cestx_fc_buffer_debug
{
    uint64_t u;
    struct cavm_cestx_fc_buffer_debug_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_63           : 1;
        uint64_t numstrls_stored       : 3;  /**< [ 62: 60](RO) Number of strls stored currently in FC buffer PRB storage. */
        uint64_t reserved_59           : 1;
        uint64_t numstrls_received     : 11; /**< [ 58: 48](RO) Number of received strls from chesteng in a job. */
        uint64_t reserved_41_47        : 7;
        uint64_t numprb_processed      : 9;  /**< [ 40: 32](RO) Number of PRBs processed in a job. */
        uint64_t numraceinsample_written : 16;/**< [ 31: 16](RO) Number of raceout axi samples written in a job. */
        uint64_t numraceoutsample_received : 16;/**< [ 15:  0](RO) Number of racein axi samples received in a job. */
#else /* Word 0 - Little Endian */
        uint64_t numraceoutsample_received : 16;/**< [ 15:  0](RO) Number of racein axi samples received in a job. */
        uint64_t numraceinsample_written : 16;/**< [ 31: 16](RO) Number of raceout axi samples written in a job. */
        uint64_t numprb_processed      : 9;  /**< [ 40: 32](RO) Number of PRBs processed in a job. */
        uint64_t reserved_41_47        : 7;
        uint64_t numstrls_received     : 11; /**< [ 58: 48](RO) Number of received strls from chesteng in a job. */
        uint64_t reserved_59           : 1;
        uint64_t numstrls_stored       : 3;  /**< [ 62: 60](RO) Number of strls stored currently in FC buffer PRB storage. */
        uint64_t reserved_63           : 1;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cestx_fc_buffer_debug_s cn; */
};
typedef union cavm_cestx_fc_buffer_debug cavm_cestx_fc_buffer_debug_t;

static inline uint64_t CAVM_CESTX_FC_BUFFER_DEBUG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CESTX_FC_BUFFER_DEBUG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=3))
        return 0x87e041c007a8ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("CESTX_FC_BUFFER_DEBUG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CESTX_FC_BUFFER_DEBUG(a) cavm_cestx_fc_buffer_debug_t
#define bustype_CAVM_CESTX_FC_BUFFER_DEBUG(a) CSR_TYPE_RSL
#define basename_CAVM_CESTX_FC_BUFFER_DEBUG(a) "CESTX_FC_BUFFER_DEBUG"
#define busnum_CAVM_CESTX_FC_BUFFER_DEBUG(a) (a)
#define arguments_CAVM_CESTX_FC_BUFFER_DEBUG(a) (a),-1,-1,-1

/**
 * Register (RSL) cest#_foc_0#
 *
 * CEST Foc 0 Register
 * First five FOC Coefficients for Layer 0.  12 bit real values each.
 */
union cavm_cestx_foc_0x
{
    uint64_t u;
    struct cavm_cestx_foc_0x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_60_63        : 4;
        uint64_t usercoeffs_4_l0       : 12; /**< [ 59: 48](R/W) FOC coefficients. */
        uint64_t usercoeffs_3_l0       : 12; /**< [ 47: 36](R/W) FOC coefficients. */
        uint64_t usercoeffs_2_l0       : 12; /**< [ 35: 24](R/W) FOC coefficients. */
        uint64_t usercoeffs_1_l0       : 12; /**< [ 23: 12](R/W) FOC coefficients. */
        uint64_t usercoeffs_0_l0       : 12; /**< [ 11:  0](R/W) FOC coefficients. */
#else /* Word 0 - Little Endian */
        uint64_t usercoeffs_0_l0       : 12; /**< [ 11:  0](R/W) FOC coefficients. */
        uint64_t usercoeffs_1_l0       : 12; /**< [ 23: 12](R/W) FOC coefficients. */
        uint64_t usercoeffs_2_l0       : 12; /**< [ 35: 24](R/W) FOC coefficients. */
        uint64_t usercoeffs_3_l0       : 12; /**< [ 47: 36](R/W) FOC coefficients. */
        uint64_t usercoeffs_4_l0       : 12; /**< [ 59: 48](R/W) FOC coefficients. */
        uint64_t reserved_60_63        : 4;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cestx_foc_0x_s cn; */
};
typedef union cavm_cestx_foc_0x cavm_cestx_foc_0x_t;

static inline uint64_t CAVM_CESTX_FOC_0X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CESTX_FOC_0X(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=3) && (b<=67)))
        return 0x87e041c02468ll + 0x80000ll * ((a) & 0x3) + 8ll * ((b) & 0x7f);
    __cavm_csr_fatal("CESTX_FOC_0X", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CESTX_FOC_0X(a,b) cavm_cestx_foc_0x_t
#define bustype_CAVM_CESTX_FOC_0X(a,b) CSR_TYPE_RSL
#define basename_CAVM_CESTX_FOC_0X(a,b) "CESTX_FOC_0X"
#define busnum_CAVM_CESTX_FOC_0X(a,b) (a)
#define arguments_CAVM_CESTX_FOC_0X(a,b) (a),(b),-1,-1

/**
 * Register (RSL) cest#_foc_1#
 *
 * CEST Foc 1 Register
 * From sixth till second last FOC coefficients for Layer 0. 12 bit real values each.
 */
union cavm_cestx_foc_1x
{
    uint64_t u;
    struct cavm_cestx_foc_1x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_60_63        : 4;
        uint64_t usercoeffs_9_l0       : 12; /**< [ 59: 48](R/W) FOC coefficients. */
        uint64_t usercoeffs_8_l0       : 12; /**< [ 47: 36](R/W) FOC coefficients. */
        uint64_t usercoeffs_7_l0       : 12; /**< [ 35: 24](R/W) FOC coefficients. */
        uint64_t usercoeffs_6_l0       : 12; /**< [ 23: 12](R/W) FOC coefficients. */
        uint64_t usercoeffs_5_l0       : 12; /**< [ 11:  0](R/W) FOC coefficients. */
#else /* Word 0 - Little Endian */
        uint64_t usercoeffs_5_l0       : 12; /**< [ 11:  0](R/W) FOC coefficients. */
        uint64_t usercoeffs_6_l0       : 12; /**< [ 23: 12](R/W) FOC coefficients. */
        uint64_t usercoeffs_7_l0       : 12; /**< [ 35: 24](R/W) FOC coefficients. */
        uint64_t usercoeffs_8_l0       : 12; /**< [ 47: 36](R/W) FOC coefficients. */
        uint64_t usercoeffs_9_l0       : 12; /**< [ 59: 48](R/W) FOC coefficients. */
        uint64_t reserved_60_63        : 4;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cestx_foc_1x_s cn; */
};
typedef union cavm_cestx_foc_1x cavm_cestx_foc_1x_t;

static inline uint64_t CAVM_CESTX_FOC_1X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CESTX_FOC_1X(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=3) && (b<=67)))
        return 0x87e041c02688ll + 0x80000ll * ((a) & 0x3) + 8ll * ((b) & 0x7f);
    __cavm_csr_fatal("CESTX_FOC_1X", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CESTX_FOC_1X(a,b) cavm_cestx_foc_1x_t
#define bustype_CAVM_CESTX_FOC_1X(a,b) CSR_TYPE_RSL
#define basename_CAVM_CESTX_FOC_1X(a,b) "CESTX_FOC_1X"
#define busnum_CAVM_CESTX_FOC_1X(a,b) (a)
#define arguments_CAVM_CESTX_FOC_1X(a,b) (a),(b),-1,-1

/**
 * Register (RSL) cest#_foc_2#
 *
 * CEST Foc 2 Register
 * First five FOC Coefficients for Layer 1. 12 bit real values each.
 */
union cavm_cestx_foc_2x
{
    uint64_t u;
    struct cavm_cestx_foc_2x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_60_63        : 4;
        uint64_t usercoeffs_4_l1       : 12; /**< [ 59: 48](R/W) FOC coefficients. */
        uint64_t usercoeffs_3_l1       : 12; /**< [ 47: 36](R/W) FOC coefficients. */
        uint64_t usercoeffs_2_l1       : 12; /**< [ 35: 24](R/W) FOC coefficients. */
        uint64_t usercoeffs_1_l1       : 12; /**< [ 23: 12](R/W) FOC coefficients. */
        uint64_t usercoeffs_0_l1       : 12; /**< [ 11:  0](R/W) FOC coefficients. */
#else /* Word 0 - Little Endian */
        uint64_t usercoeffs_0_l1       : 12; /**< [ 11:  0](R/W) FOC coefficients. */
        uint64_t usercoeffs_1_l1       : 12; /**< [ 23: 12](R/W) FOC coefficients. */
        uint64_t usercoeffs_2_l1       : 12; /**< [ 35: 24](R/W) FOC coefficients. */
        uint64_t usercoeffs_3_l1       : 12; /**< [ 47: 36](R/W) FOC coefficients. */
        uint64_t usercoeffs_4_l1       : 12; /**< [ 59: 48](R/W) FOC coefficients. */
        uint64_t reserved_60_63        : 4;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cestx_foc_2x_s cn; */
};
typedef union cavm_cestx_foc_2x cavm_cestx_foc_2x_t;

static inline uint64_t CAVM_CESTX_FOC_2X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CESTX_FOC_2X(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=3) && (b<=67)))
        return 0x87e041c028a8ll + 0x80000ll * ((a) & 0x3) + 8ll * ((b) & 0x7f);
    __cavm_csr_fatal("CESTX_FOC_2X", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CESTX_FOC_2X(a,b) cavm_cestx_foc_2x_t
#define bustype_CAVM_CESTX_FOC_2X(a,b) CSR_TYPE_RSL
#define basename_CAVM_CESTX_FOC_2X(a,b) "CESTX_FOC_2X"
#define busnum_CAVM_CESTX_FOC_2X(a,b) (a)
#define arguments_CAVM_CESTX_FOC_2X(a,b) (a),(b),-1,-1

/**
 * Register (RSL) cest#_foc_3#
 *
 * CEST Foc 3 Register
 * From sixth till second last FOC coefficients for Layer 1. 12 bit real values each.
 */
union cavm_cestx_foc_3x
{
    uint64_t u;
    struct cavm_cestx_foc_3x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_60_63        : 4;
        uint64_t usercoeffs_9_l1       : 12; /**< [ 59: 48](R/W) FOC coefficients. */
        uint64_t usercoeffs_8_l1       : 12; /**< [ 47: 36](R/W) FOC coefficients. */
        uint64_t usercoeffs_7_l1       : 12; /**< [ 35: 24](R/W) FOC coefficients. */
        uint64_t usercoeffs_6_l1       : 12; /**< [ 23: 12](R/W) FOC coefficients. */
        uint64_t usercoeffs_5_l1       : 12; /**< [ 11:  0](R/W) FOC coefficients. */
#else /* Word 0 - Little Endian */
        uint64_t usercoeffs_5_l1       : 12; /**< [ 11:  0](R/W) FOC coefficients. */
        uint64_t usercoeffs_6_l1       : 12; /**< [ 23: 12](R/W) FOC coefficients. */
        uint64_t usercoeffs_7_l1       : 12; /**< [ 35: 24](R/W) FOC coefficients. */
        uint64_t usercoeffs_8_l1       : 12; /**< [ 47: 36](R/W) FOC coefficients. */
        uint64_t usercoeffs_9_l1       : 12; /**< [ 59: 48](R/W) FOC coefficients. */
        uint64_t reserved_60_63        : 4;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cestx_foc_3x_s cn; */
};
typedef union cavm_cestx_foc_3x cavm_cestx_foc_3x_t;

static inline uint64_t CAVM_CESTX_FOC_3X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CESTX_FOC_3X(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=3) && (b<=67)))
        return 0x87e041c02ac8ll + 0x80000ll * ((a) & 0x3) + 8ll * ((b) & 0x7f);
    __cavm_csr_fatal("CESTX_FOC_3X", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CESTX_FOC_3X(a,b) cavm_cestx_foc_3x_t
#define bustype_CAVM_CESTX_FOC_3X(a,b) CSR_TYPE_RSL
#define basename_CAVM_CESTX_FOC_3X(a,b) "CESTX_FOC_3X"
#define busnum_CAVM_CESTX_FOC_3X(a,b) (a)
#define arguments_CAVM_CESTX_FOC_3X(a,b) (a),(b),-1,-1

/**
 * Register (RSL) cest#_foc_4#
 *
 * CEST Foc 4 Register
 * First five FOC Coefficients for Layer 2. 12 bit real values each.
 */
union cavm_cestx_foc_4x
{
    uint64_t u;
    struct cavm_cestx_foc_4x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_60_63        : 4;
        uint64_t usercoeffs_4_l2       : 12; /**< [ 59: 48](R/W) FOC coefficients. */
        uint64_t usercoeffs_3_l2       : 12; /**< [ 47: 36](R/W) FOC coefficients. */
        uint64_t usercoeffs_2_l2       : 12; /**< [ 35: 24](R/W) FOC coefficients. */
        uint64_t usercoeffs_1_l2       : 12; /**< [ 23: 12](R/W) FOC coefficients. */
        uint64_t usercoeffs_0_l2       : 12; /**< [ 11:  0](R/W) FOC coefficients. */
#else /* Word 0 - Little Endian */
        uint64_t usercoeffs_0_l2       : 12; /**< [ 11:  0](R/W) FOC coefficients. */
        uint64_t usercoeffs_1_l2       : 12; /**< [ 23: 12](R/W) FOC coefficients. */
        uint64_t usercoeffs_2_l2       : 12; /**< [ 35: 24](R/W) FOC coefficients. */
        uint64_t usercoeffs_3_l2       : 12; /**< [ 47: 36](R/W) FOC coefficients. */
        uint64_t usercoeffs_4_l2       : 12; /**< [ 59: 48](R/W) FOC coefficients. */
        uint64_t reserved_60_63        : 4;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cestx_foc_4x_s cn; */
};
typedef union cavm_cestx_foc_4x cavm_cestx_foc_4x_t;

static inline uint64_t CAVM_CESTX_FOC_4X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CESTX_FOC_4X(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=3) && (b<=67)))
        return 0x87e041c02ce8ll + 0x80000ll * ((a) & 0x3) + 8ll * ((b) & 0x7f);
    __cavm_csr_fatal("CESTX_FOC_4X", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CESTX_FOC_4X(a,b) cavm_cestx_foc_4x_t
#define bustype_CAVM_CESTX_FOC_4X(a,b) CSR_TYPE_RSL
#define basename_CAVM_CESTX_FOC_4X(a,b) "CESTX_FOC_4X"
#define busnum_CAVM_CESTX_FOC_4X(a,b) (a)
#define arguments_CAVM_CESTX_FOC_4X(a,b) (a),(b),-1,-1

/**
 * Register (RSL) cest#_foc_5#
 *
 * CEST Foc 5 Register
 * From sixth till second last FOC coefficients for Layer 2. 12 bit real values each.
 */
union cavm_cestx_foc_5x
{
    uint64_t u;
    struct cavm_cestx_foc_5x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_60_63        : 4;
        uint64_t usercoeffs_9_l2       : 12; /**< [ 59: 48](R/W) FOC coefficients. */
        uint64_t usercoeffs_8_l2       : 12; /**< [ 47: 36](R/W) FOC coefficients. */
        uint64_t usercoeffs_7_l2       : 12; /**< [ 35: 24](R/W) FOC coefficients. */
        uint64_t usercoeffs_6_l2       : 12; /**< [ 23: 12](R/W) FOC coefficients. */
        uint64_t usercoeffs_5_l2       : 12; /**< [ 11:  0](R/W) FOC coefficients. */
#else /* Word 0 - Little Endian */
        uint64_t usercoeffs_5_l2       : 12; /**< [ 11:  0](R/W) FOC coefficients. */
        uint64_t usercoeffs_6_l2       : 12; /**< [ 23: 12](R/W) FOC coefficients. */
        uint64_t usercoeffs_7_l2       : 12; /**< [ 35: 24](R/W) FOC coefficients. */
        uint64_t usercoeffs_8_l2       : 12; /**< [ 47: 36](R/W) FOC coefficients. */
        uint64_t usercoeffs_9_l2       : 12; /**< [ 59: 48](R/W) FOC coefficients. */
        uint64_t reserved_60_63        : 4;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cestx_foc_5x_s cn; */
};
typedef union cavm_cestx_foc_5x cavm_cestx_foc_5x_t;

static inline uint64_t CAVM_CESTX_FOC_5X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CESTX_FOC_5X(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=3) && (b<=67)))
        return 0x87e041c02f08ll + 0x80000ll * ((a) & 0x3) + 8ll * ((b) & 0x7f);
    __cavm_csr_fatal("CESTX_FOC_5X", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CESTX_FOC_5X(a,b) cavm_cestx_foc_5x_t
#define bustype_CAVM_CESTX_FOC_5X(a,b) CSR_TYPE_RSL
#define basename_CAVM_CESTX_FOC_5X(a,b) "CESTX_FOC_5X"
#define busnum_CAVM_CESTX_FOC_5X(a,b) (a)
#define arguments_CAVM_CESTX_FOC_5X(a,b) (a),(b),-1,-1

/**
 * Register (RSL) cest#_foc_6#
 *
 * CEST Foc 6 Register
 * First five FOC Coefficients for Layer 3. 12 bit real values each.
 */
union cavm_cestx_foc_6x
{
    uint64_t u;
    struct cavm_cestx_foc_6x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_60_63        : 4;
        uint64_t usercoeffs_4_l3       : 12; /**< [ 59: 48](R/W) FOC coefficients. */
        uint64_t usercoeffs_3_l3       : 12; /**< [ 47: 36](R/W) FOC coefficients. */
        uint64_t usercoeffs_2_l3       : 12; /**< [ 35: 24](R/W) FOC coefficients. */
        uint64_t usercoeffs_1_l3       : 12; /**< [ 23: 12](R/W) FOC coefficients. */
        uint64_t usercoeffs_0_l3       : 12; /**< [ 11:  0](R/W) FOC coefficients. */
#else /* Word 0 - Little Endian */
        uint64_t usercoeffs_0_l3       : 12; /**< [ 11:  0](R/W) FOC coefficients. */
        uint64_t usercoeffs_1_l3       : 12; /**< [ 23: 12](R/W) FOC coefficients. */
        uint64_t usercoeffs_2_l3       : 12; /**< [ 35: 24](R/W) FOC coefficients. */
        uint64_t usercoeffs_3_l3       : 12; /**< [ 47: 36](R/W) FOC coefficients. */
        uint64_t usercoeffs_4_l3       : 12; /**< [ 59: 48](R/W) FOC coefficients. */
        uint64_t reserved_60_63        : 4;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cestx_foc_6x_s cn; */
};
typedef union cavm_cestx_foc_6x cavm_cestx_foc_6x_t;

static inline uint64_t CAVM_CESTX_FOC_6X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CESTX_FOC_6X(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=3) && (b<=67)))
        return 0x87e041c03128ll + 0x80000ll * ((a) & 0x3) + 8ll * ((b) & 0x7f);
    __cavm_csr_fatal("CESTX_FOC_6X", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CESTX_FOC_6X(a,b) cavm_cestx_foc_6x_t
#define bustype_CAVM_CESTX_FOC_6X(a,b) CSR_TYPE_RSL
#define basename_CAVM_CESTX_FOC_6X(a,b) "CESTX_FOC_6X"
#define busnum_CAVM_CESTX_FOC_6X(a,b) (a)
#define arguments_CAVM_CESTX_FOC_6X(a,b) (a),(b),-1,-1

/**
 * Register (RSL) cest#_foc_7#
 *
 * CEST Foc 7 Register
 * From sixth till second last FOC coefficients for Layer 3. 12 bit real values each.
 */
union cavm_cestx_foc_7x
{
    uint64_t u;
    struct cavm_cestx_foc_7x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_60_63        : 4;
        uint64_t usercoeffs_9_l3       : 12; /**< [ 59: 48](R/W) FOC coefficients. */
        uint64_t usercoeffs_8_l3       : 12; /**< [ 47: 36](R/W) FOC coefficients. */
        uint64_t usercoeffs_7_l3       : 12; /**< [ 35: 24](R/W) FOC coefficients. */
        uint64_t usercoeffs_6_l3       : 12; /**< [ 23: 12](R/W) FOC coefficients. */
        uint64_t usercoeffs_5_l3       : 12; /**< [ 11:  0](R/W) FOC coefficients. */
#else /* Word 0 - Little Endian */
        uint64_t usercoeffs_5_l3       : 12; /**< [ 11:  0](R/W) FOC coefficients. */
        uint64_t usercoeffs_6_l3       : 12; /**< [ 23: 12](R/W) FOC coefficients. */
        uint64_t usercoeffs_7_l3       : 12; /**< [ 35: 24](R/W) FOC coefficients. */
        uint64_t usercoeffs_8_l3       : 12; /**< [ 47: 36](R/W) FOC coefficients. */
        uint64_t usercoeffs_9_l3       : 12; /**< [ 59: 48](R/W) FOC coefficients. */
        uint64_t reserved_60_63        : 4;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cestx_foc_7x_s cn; */
};
typedef union cavm_cestx_foc_7x cavm_cestx_foc_7x_t;

static inline uint64_t CAVM_CESTX_FOC_7X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CESTX_FOC_7X(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=3) && (b<=67)))
        return 0x87e041c03348ll + 0x80000ll * ((a) & 0x3) + 8ll * ((b) & 0x7f);
    __cavm_csr_fatal("CESTX_FOC_7X", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CESTX_FOC_7X(a,b) cavm_cestx_foc_7x_t
#define bustype_CAVM_CESTX_FOC_7X(a,b) CSR_TYPE_RSL
#define basename_CAVM_CESTX_FOC_7X(a,b) "CESTX_FOC_7X"
#define busnum_CAVM_CESTX_FOC_7X(a,b) (a)
#define arguments_CAVM_CESTX_FOC_7X(a,b) (a),(b),-1,-1

/**
 * Register (RSL) cest#_foc_8#
 *
 * CEST Foc 8 Register
 * Last or elleventh FOC coefficients for all layers.12 bit real values each.
 */
union cavm_cestx_foc_8x
{
    uint64_t u;
    struct cavm_cestx_foc_8x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t usercoeffs_10_l3      : 12; /**< [ 47: 36](R/W) FOC coefficients. */
        uint64_t usercoeffs_10_l2      : 12; /**< [ 35: 24](R/W) FOC coefficients. */
        uint64_t usercoeffs_10_l1      : 12; /**< [ 23: 12](R/W) FOC coefficients. */
        uint64_t usercoeffs_10_l0      : 12; /**< [ 11:  0](R/W) FOC coefficients. */
#else /* Word 0 - Little Endian */
        uint64_t usercoeffs_10_l0      : 12; /**< [ 11:  0](R/W) FOC coefficients. */
        uint64_t usercoeffs_10_l1      : 12; /**< [ 23: 12](R/W) FOC coefficients. */
        uint64_t usercoeffs_10_l2      : 12; /**< [ 35: 24](R/W) FOC coefficients. */
        uint64_t usercoeffs_10_l3      : 12; /**< [ 47: 36](R/W) FOC coefficients. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cestx_foc_8x_s cn; */
};
typedef union cavm_cestx_foc_8x cavm_cestx_foc_8x_t;

static inline uint64_t CAVM_CESTX_FOC_8X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CESTX_FOC_8X(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=3) && (b<=67)))
        return 0x87e041c03568ll + 0x80000ll * ((a) & 0x3) + 8ll * ((b) & 0x7f);
    __cavm_csr_fatal("CESTX_FOC_8X", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CESTX_FOC_8X(a,b) cavm_cestx_foc_8x_t
#define bustype_CAVM_CESTX_FOC_8X(a,b) CSR_TYPE_RSL
#define basename_CAVM_CESTX_FOC_8X(a,b) "CESTX_FOC_8X"
#define busnum_CAVM_CESTX_FOC_8X(a,b) (a)
#define arguments_CAVM_CESTX_FOC_8X(a,b) (a),(b),-1,-1

/**
 * Register (RSL) cest#_hab_status
 *
 * CEST Hab Status Register
 * HAB status.
 */
union cavm_cestx_hab_status
{
    uint64_t u;
    struct cavm_cestx_hab_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t misc_status           : 59; /**< [ 63:  5](RO/H) Contains other status such as FSM codes, etc. */
        uint64_t ready                 : 1;  /**< [  4:  4](RO/H) Ready - Ready to receive the next job. */
        uint64_t reserved_1_3          : 3;
        uint64_t busy_cfg0             : 1;  /**< [  0:  0](RO/H) Indicates if the HAB is busy processing a job with CONFIGURATION 0.
                                                                 0 = ready (default).
                                                                 1 = busy. */
#else /* Word 0 - Little Endian */
        uint64_t busy_cfg0             : 1;  /**< [  0:  0](RO/H) Indicates if the HAB is busy processing a job with CONFIGURATION 0.
                                                                 0 = ready (default).
                                                                 1 = busy. */
        uint64_t reserved_1_3          : 3;
        uint64_t ready                 : 1;  /**< [  4:  4](RO/H) Ready - Ready to receive the next job. */
        uint64_t misc_status           : 59; /**< [ 63:  5](RO/H) Contains other status such as FSM codes, etc. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cestx_hab_status_s cn; */
};
typedef union cavm_cestx_hab_status cavm_cestx_hab_status_t;

static inline uint64_t CAVM_CESTX_HAB_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CESTX_HAB_STATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=3))
        return 0x87e041c00018ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("CESTX_HAB_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CESTX_HAB_STATUS(a) cavm_cestx_hab_status_t
#define bustype_CAVM_CESTX_HAB_STATUS(a) CSR_TYPE_RSL
#define basename_CAVM_CESTX_HAB_STATUS(a) "CESTX_HAB_STATUS"
#define busnum_CAVM_CESTX_HAB_STATUS(a) (a)
#define arguments_CAVM_CESTX_HAB_STATUS(a) (a),-1,-1,-1

/**
 * Register (RSL) cest#_header_0
 *
 * CEST Header 0 Register
 */
union cavm_cestx_header_0
{
    uint64_t u;
    struct cavm_cestx_header_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reordering_mode       : 1;  /**< [ 31: 31](R/W) Value:
                                                                 0=normal mode enabled(default after reset), race output data will be arranged
                                                                 into SMEM in format: [PRB][tap][layer][ant], all 5 STRLS tap values are
                                                                 outputted.
                                                                 1=reordering mode enabled, race output data will be arranged into SMEM in
                                                                 format: [PRB][ant][layer][tap], only 4 STRLS tap values outputted. */
        uint64_t per_prb_pulsing_frequency : 8;/**< [ 30: 23](R/W) If value = 1, pulse after each 1 prb, if value=2, pulse after every 2 prb and so
                                                                 on. Always at the last prb, there will be a pulse irrespective of the value. If
                                                                 value =0 (reset),  pulse is disabled. This pulse signal is connected to
                                                                 ab_amm_hw1_wrcmt_req in MHAB. (Not used for coma output port) */
        uint64_t toc_first_sc_offset   : 6;  /**< [ 22: 17](R/W) This defines the index of the TOC coefficient of the first subcarrier of the job. The SW should configure this register as:  (12 x prb#) mod 64. */
        uint64_t numtrx                : 7;  /**< [ 16: 10](R/W) Number of active transmission antennas. We process only one polarization. So
                                                                 number(Antenna Processed) = numTrx/2 . Possible values of numTrx = 4,8,16,32 and
                                                                 64. (USED BY ALL BLOCKS) */
        uint64_t covconfigtype         : 1;  /**< [  9:  9](R/W) Value: 1 - IEBF(hor and ver) and 0 -FEBF(full cov) . (USED BY COMA) */
        uint64_t numprbtotal           : 9;  /**< [  8:  0](R/W) Total number of PRB's configured in a layer. All active and inactive user prb's
                                                                 are included. All layers have same number of PRB. (PG, CHESTEng, FC_BUFFER).
                                                                 Range: 1 to 272 in SRS and 1 to 273 in DMRS. */
#else /* Word 0 - Little Endian */
        uint64_t numprbtotal           : 9;  /**< [  8:  0](R/W) Total number of PRB's configured in a layer. All active and inactive user prb's
                                                                 are included. All layers have same number of PRB. (PG, CHESTEng, FC_BUFFER).
                                                                 Range: 1 to 272 in SRS and 1 to 273 in DMRS. */
        uint64_t covconfigtype         : 1;  /**< [  9:  9](R/W) Value: 1 - IEBF(hor and ver) and 0 -FEBF(full cov) . (USED BY COMA) */
        uint64_t numtrx                : 7;  /**< [ 16: 10](R/W) Number of active transmission antennas. We process only one polarization. So
                                                                 number(Antenna Processed) = numTrx/2 . Possible values of numTrx = 4,8,16,32 and
                                                                 64. (USED BY ALL BLOCKS) */
        uint64_t toc_first_sc_offset   : 6;  /**< [ 22: 17](R/W) This defines the index of the TOC coefficient of the first subcarrier of the job. The SW should configure this register as:  (12 x prb#) mod 64. */
        uint64_t per_prb_pulsing_frequency : 8;/**< [ 30: 23](R/W) If value = 1, pulse after each 1 prb, if value=2, pulse after every 2 prb and so
                                                                 on. Always at the last prb, there will be a pulse irrespective of the value. If
                                                                 value =0 (reset),  pulse is disabled. This pulse signal is connected to
                                                                 ab_amm_hw1_wrcmt_req in MHAB. (Not used for coma output port) */
        uint64_t reordering_mode       : 1;  /**< [ 31: 31](R/W) Value:
                                                                 0=normal mode enabled(default after reset), race output data will be arranged
                                                                 into SMEM in format: [PRB][tap][layer][ant], all 5 STRLS tap values are
                                                                 outputted.
                                                                 1=reordering mode enabled, race output data will be arranged into SMEM in
                                                                 format: [PRB][ant][layer][tap], only 4 STRLS tap values outputted. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cestx_header_0_s cn; */
};
typedef union cavm_cestx_header_0 cavm_cestx_header_0_t;

static inline uint64_t CAVM_CESTX_HEADER_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CESTX_HEADER_0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=3))
        return 0x87e041c02008ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("CESTX_HEADER_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CESTX_HEADER_0(a) cavm_cestx_header_0_t
#define bustype_CAVM_CESTX_HEADER_0(a) CSR_TYPE_RSL
#define basename_CAVM_CESTX_HEADER_0(a) "CESTX_HEADER_0"
#define busnum_CAVM_CESTX_HEADER_0(a) (a)
#define arguments_CAVM_CESTX_HEADER_0(a) (a),-1,-1,-1

/**
 * Register (RSL) cest#_header_1
 *
 * CEST Header 1 Register
 */
union cavm_cestx_header_1
{
    uint64_t u;
    struct cavm_cestx_header_1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_59_63        : 5;
        uint64_t occ_lte_en            : 1;  /**< [ 58: 58](R/W) Enable or disable lte occ in PG. Value 1 - enabled, 0 - disabled. */
        uint64_t comaoutputexponent    : 5;  /**< [ 57: 53](R/W) CoMa output scaling by exponent in range 0 to 16. Value 0 selects 16 MSB bits
                                                                 for output. Data is shifted right by the given amount (divide by 2's power
                                                                 exponent) */
        uint64_t chestoutputexponent   : 6;  /**< [ 52: 47](R/W) ChEst scaling by exponent in range -5 and 15. SIGNED VALUES. MSB bit is for
                                                                 sign. ChESt value is multiplied by 2^exp and truncated to 16 bits. */
        uint64_t layer_even_odd        : 1;  /**< [ 46: 46](R/W) Used in case 5G DMRS type 2, 6 port case.
                                                                 0 = even layers processed.
                                                                 1 = odd layers processed. */
        uint64_t skipprb               : 9;  /**< [ 45: 37](R/W) Number of PRBs to be skipped. Valid in 5G DMRS gold sequence only. Range 0-272 (USED BY PG). */
        uint64_t basesec_v             : 1;  /**< [ 36: 36](R/W) 0 or 1 . (USED BY PG) */
        uint64_t seqgrp_u              : 5;  /**< [ 35: 31](R/W) Valid for PG in ZC mode. Range 0-29. (USED BY PG). */
        uint64_t trnsfmprecoding       : 1;  /**< [ 30: 30](R/W) Value:
                                                                 1 = enabled.
                                                                 0 = disabled.

                                                                 Used for Zadoff-Chu sequence in 5G DMRS. (USED BY PG) */
        uint64_t activecs_l3           : 4;  /**< [ 29: 26](R/W) For comb 4(SRS) and comb 1(LTE DMRS), value can be from 0-11, for comb 2(SRS),
                                                                 range is 0-7 . Mapping the CS active on the particular layer. (Please see layers
                                                                 and comb page for details). */
        uint64_t activecs_l2           : 4;  /**< [ 25: 22](R/W) For comb 4(SRS) and comb 1(LTE DMRS), value can be from 0-11, for comb 2(SRS),
                                                                 range is 0-7 . Mapping the CS active on the particular layer. (Please see layers
                                                                 and comb page for details). */
        uint64_t activecs_l1           : 4;  /**< [ 21: 18](R/W) For comb 4(SRS) and comb 1(LTE DMRS), value can be from 0-11, for comb 2(SRS),
                                                                 range is 0-7 . Mapping the CS active on the particular layer. (Please see layers
                                                                 and comb page for details). */
        uint64_t activecs_l0           : 4;  /**< [ 17: 14](R/W) For comb 4(SRS) and comb 1(LTE DMRS), value can be from 0-11, for comb 2(SRS),
                                                                 range is 0-7 . Mapping the CS active on the particular layer. (Please see layers
                                                                 and comb page for details). */
        uint64_t occ_lte_type          : 1;  /**< [ 13: 13](R/W) Parameter for LTE DMRS. (USED BY PG) */
        uint64_t omega                 : 1;  /**< [ 12: 12](R/W) Parameter for LTE DMRS. (USED BY PG) */
        uint64_t delta                 : 1;  /**< [ 11: 11](R/W) Parameter for LTE DMRS. (USED BY PG) */
        uint64_t reserved_10           : 1;
        uint64_t occ_5g_en             : 1;  /**< [  9:  9](R/W) Enable FD-OCC in PG. Value: 1 - enable, 0- disable. (USED BY PG) */
        uint64_t dmrstype              : 1;  /**< [  8:  8](R/W) 0 = DMRS Type 1.
                                                                 1 = DMRS Type 2.

                                                                 Valid when it is gold sequence(transform precoding
                                                                 disabled). (USED BY PG, CHESTEng). */
        uint64_t modereferencesignal   : 1;  /**< [  7:  7](R/W) SRS/DMRS . 1 represents SRS and 0 represents DMRS mode is configured. */
        uint64_t lteor5gmode           : 1;  /**< [  6:  6](R/W) LTE/5G. 1 represents LTE and 0 represents 5G. */
        uint64_t activelayers          : 4;  /**< [  5:  2](R/W) The number of active layers that the CHEST job should process. Each bit
                                                                 represents one layer. LSB =layer0 and MSB = layer 3. Only possible number of
                                                                 layers active are 2, 3 and 4 and indicated by "0011", "0111" and "1111"
                                                                 respectively. In case of 2 active layers, always first 2 layers are active, in 3
                                                                 active layer case, always first 3 are active and in 4 active layer case all are
                                                                 active. Channel estimates, COMA are output for active layers only.
                                                                 Note: Layer Formation. Layers = numCombs x num FD-OCC. Hence when we say layers,
                                                                 combs are already included. */
        uint64_t combvalue             : 2;  /**< [  1:  0](R/W) Number of combs. "00" -1 comb, "01" - 2 comb, "10" - 3 comb, "11"- 4 comb.
                                                                 Note: DMRS type 1 has 2 and 4 combs and DMRS type 2 always has 3 combs. */
#else /* Word 0 - Little Endian */
        uint64_t combvalue             : 2;  /**< [  1:  0](R/W) Number of combs. "00" -1 comb, "01" - 2 comb, "10" - 3 comb, "11"- 4 comb.
                                                                 Note: DMRS type 1 has 2 and 4 combs and DMRS type 2 always has 3 combs. */
        uint64_t activelayers          : 4;  /**< [  5:  2](R/W) The number of active layers that the CHEST job should process. Each bit
                                                                 represents one layer. LSB =layer0 and MSB = layer 3. Only possible number of
                                                                 layers active are 2, 3 and 4 and indicated by "0011", "0111" and "1111"
                                                                 respectively. In case of 2 active layers, always first 2 layers are active, in 3
                                                                 active layer case, always first 3 are active and in 4 active layer case all are
                                                                 active. Channel estimates, COMA are output for active layers only.
                                                                 Note: Layer Formation. Layers = numCombs x num FD-OCC. Hence when we say layers,
                                                                 combs are already included. */
        uint64_t lteor5gmode           : 1;  /**< [  6:  6](R/W) LTE/5G. 1 represents LTE and 0 represents 5G. */
        uint64_t modereferencesignal   : 1;  /**< [  7:  7](R/W) SRS/DMRS . 1 represents SRS and 0 represents DMRS mode is configured. */
        uint64_t dmrstype              : 1;  /**< [  8:  8](R/W) 0 = DMRS Type 1.
                                                                 1 = DMRS Type 2.

                                                                 Valid when it is gold sequence(transform precoding
                                                                 disabled). (USED BY PG, CHESTEng). */
        uint64_t occ_5g_en             : 1;  /**< [  9:  9](R/W) Enable FD-OCC in PG. Value: 1 - enable, 0- disable. (USED BY PG) */
        uint64_t reserved_10           : 1;
        uint64_t delta                 : 1;  /**< [ 11: 11](R/W) Parameter for LTE DMRS. (USED BY PG) */
        uint64_t omega                 : 1;  /**< [ 12: 12](R/W) Parameter for LTE DMRS. (USED BY PG) */
        uint64_t occ_lte_type          : 1;  /**< [ 13: 13](R/W) Parameter for LTE DMRS. (USED BY PG) */
        uint64_t activecs_l0           : 4;  /**< [ 17: 14](R/W) For comb 4(SRS) and comb 1(LTE DMRS), value can be from 0-11, for comb 2(SRS),
                                                                 range is 0-7 . Mapping the CS active on the particular layer. (Please see layers
                                                                 and comb page for details). */
        uint64_t activecs_l1           : 4;  /**< [ 21: 18](R/W) For comb 4(SRS) and comb 1(LTE DMRS), value can be from 0-11, for comb 2(SRS),
                                                                 range is 0-7 . Mapping the CS active on the particular layer. (Please see layers
                                                                 and comb page for details). */
        uint64_t activecs_l2           : 4;  /**< [ 25: 22](R/W) For comb 4(SRS) and comb 1(LTE DMRS), value can be from 0-11, for comb 2(SRS),
                                                                 range is 0-7 . Mapping the CS active on the particular layer. (Please see layers
                                                                 and comb page for details). */
        uint64_t activecs_l3           : 4;  /**< [ 29: 26](R/W) For comb 4(SRS) and comb 1(LTE DMRS), value can be from 0-11, for comb 2(SRS),
                                                                 range is 0-7 . Mapping the CS active on the particular layer. (Please see layers
                                                                 and comb page for details). */
        uint64_t trnsfmprecoding       : 1;  /**< [ 30: 30](R/W) Value:
                                                                 1 = enabled.
                                                                 0 = disabled.

                                                                 Used for Zadoff-Chu sequence in 5G DMRS. (USED BY PG) */
        uint64_t seqgrp_u              : 5;  /**< [ 35: 31](R/W) Valid for PG in ZC mode. Range 0-29. (USED BY PG). */
        uint64_t basesec_v             : 1;  /**< [ 36: 36](R/W) 0 or 1 . (USED BY PG) */
        uint64_t skipprb               : 9;  /**< [ 45: 37](R/W) Number of PRBs to be skipped. Valid in 5G DMRS gold sequence only. Range 0-272 (USED BY PG). */
        uint64_t layer_even_odd        : 1;  /**< [ 46: 46](R/W) Used in case 5G DMRS type 2, 6 port case.
                                                                 0 = even layers processed.
                                                                 1 = odd layers processed. */
        uint64_t chestoutputexponent   : 6;  /**< [ 52: 47](R/W) ChEst scaling by exponent in range -5 and 15. SIGNED VALUES. MSB bit is for
                                                                 sign. ChESt value is multiplied by 2^exp and truncated to 16 bits. */
        uint64_t comaoutputexponent    : 5;  /**< [ 57: 53](R/W) CoMa output scaling by exponent in range 0 to 16. Value 0 selects 16 MSB bits
                                                                 for output. Data is shifted right by the given amount (divide by 2's power
                                                                 exponent) */
        uint64_t occ_lte_en            : 1;  /**< [ 58: 58](R/W) Enable or disable lte occ in PG. Value 1 - enabled, 0 - disabled. */
        uint64_t reserved_59_63        : 5;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cestx_header_1_s cn; */
};
typedef union cavm_cestx_header_1 cavm_cestx_header_1_t;

static inline uint64_t CAVM_CESTX_HEADER_1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CESTX_HEADER_1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=3))
        return 0x87e041c02010ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("CESTX_HEADER_1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CESTX_HEADER_1(a) cavm_cestx_header_1_t
#define bustype_CAVM_CESTX_HEADER_1(a) CSR_TYPE_RSL
#define basename_CAVM_CESTX_HEADER_1(a) "CESTX_HEADER_1"
#define busnum_CAVM_CESTX_HEADER_1(a) (a)
#define arguments_CAVM_CESTX_HEADER_1(a) (a),-1,-1,-1

/**
 * Register (RSL) cest#_id
 *
 * CEST Id Register
 * Module ID.
 */
union cavm_cestx_id
{
    uint64_t u;
    struct cavm_cestx_id_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t moduleid              : 32; /**< [ 31:  0](R/W/H) [Internal Function: ID].
                                                                 Value 0 : 32'h55555555 Synchronization word 0     Sync0.
                                                                 Value 1 : 32'hAAAAAAAA Synchronization word 1     Sync1.
                                                                 Value 2 : 32'h0002AC02 Component code             CompCode.
                                                                 Value 3 : MODULEBUILDNUM_G Build number               Build.
                                                                 Value 4 : InstanceNum BF_CHEST003 Instance number in SOC  Inst.

                                                                 Write: The ID pointer is defined by writing the three LSBs. The default value of
                                                                 the ID pointer is zero.

                                                                 Read: When the ID register is read the ID field pointed by the ID pointer is
                                                                 returned. After a read the ID pointer is automatically incremented by one. */
#else /* Word 0 - Little Endian */
        uint64_t moduleid              : 32; /**< [ 31:  0](R/W/H) [Internal Function: ID].
                                                                 Value 0 : 32'h55555555 Synchronization word 0     Sync0.
                                                                 Value 1 : 32'hAAAAAAAA Synchronization word 1     Sync1.
                                                                 Value 2 : 32'h0002AC02 Component code             CompCode.
                                                                 Value 3 : MODULEBUILDNUM_G Build number               Build.
                                                                 Value 4 : InstanceNum BF_CHEST003 Instance number in SOC  Inst.

                                                                 Write: The ID pointer is defined by writing the three LSBs. The default value of
                                                                 the ID pointer is zero.

                                                                 Read: When the ID register is read the ID field pointed by the ID pointer is
                                                                 returned. After a read the ID pointer is automatically incremented by one. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cestx_id_s cn; */
};
typedef union cavm_cestx_id cavm_cestx_id_t;

static inline uint64_t CAVM_CESTX_ID(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CESTX_ID(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=3))
        return 0x87e041c000a0ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("CESTX_ID", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CESTX_ID(a) cavm_cestx_id_t
#define bustype_CAVM_CESTX_ID(a) CSR_TYPE_RSL
#define basename_CAVM_CESTX_ID(a) "CESTX_ID"
#define busnum_CAVM_CESTX_ID(a) (a)
#define arguments_CAVM_CESTX_ID(a) (a),-1,-1,-1

/**
 * Register (RSL) cest#_input
 *
 * CEST Input Register
 */
union cavm_cestx_input
{
    uint64_t u;
    struct cavm_cestx_input_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](RO) The input words/vectors in the last job. (63: 32 --\> port 1 and 31:0 --\> port0). */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](RO) The input words/vectors in the last job. (63: 32 --\> port 1 and 31:0 --\> port0). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cestx_input_s cn; */
};
typedef union cavm_cestx_input cavm_cestx_input_t;

static inline uint64_t CAVM_CESTX_INPUT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CESTX_INPUT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=3))
        return 0x87e041c000d0ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("CESTX_INPUT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CESTX_INPUT(a) cavm_cestx_input_t
#define bustype_CAVM_CESTX_INPUT(a) CSR_TYPE_RSL
#define basename_CAVM_CESTX_INPUT(a) "CESTX_INPUT"
#define busnum_CAVM_CESTX_INPUT(a) (a)
#define arguments_CAVM_CESTX_INPUT(a) (a),-1,-1,-1

/**
 * Register (RSL) cest#_job
 *
 * CEST Job Register
 */
union cavm_cestx_job
{
    uint64_t u;
    struct cavm_cestx_job_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t count                 : 32; /**< [ 31:  0](RO) The number of jobs processed. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 32; /**< [ 31:  0](RO) The number of jobs processed. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cestx_job_s cn; */
};
typedef union cavm_cestx_job cavm_cestx_job_t;

static inline uint64_t CAVM_CESTX_JOB(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CESTX_JOB(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=3))
        return 0x87e041c000c8ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("CESTX_JOB", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CESTX_JOB(a) cavm_cestx_job_t
#define bustype_CAVM_CESTX_JOB(a) CSR_TYPE_RSL
#define basename_CAVM_CESTX_JOB(a) "CESTX_JOB"
#define busnum_CAVM_CESTX_JOB(a) (a)
#define arguments_CAVM_CESTX_JOB(a) (a),-1,-1,-1

/**
 * Register (RSL) cest#_job_debug
 *
 * CEST Job Debug Register
 */
union cavm_cestx_job_debug
{
    uint64_t u;
    struct cavm_cestx_job_debug_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_3_63         : 61;
        uint64_t job_control_state     : 2;  /**< [  2:  1](RO/H) 0 - idle, 1- waiting for end of input , 2- waiting for end of output, 3-other states */
        uint64_t job_control_reset     : 1;  /**< [  0:  0](R/W/H) "'1' = job control state is returned to idle, '0' - nothing.
                                                                 [Output Function: PULSE; PORT]" */
#else /* Word 0 - Little Endian */
        uint64_t job_control_reset     : 1;  /**< [  0:  0](R/W/H) "'1' = job control state is returned to idle, '0' - nothing.
                                                                 [Output Function: PULSE; PORT]" */
        uint64_t job_control_state     : 2;  /**< [  2:  1](RO/H) 0 - idle, 1- waiting for end of input , 2- waiting for end of output, 3-other states */
        uint64_t reserved_3_63         : 61;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cestx_job_debug_s cn; */
};
typedef union cavm_cestx_job_debug cavm_cestx_job_debug_t;

static inline uint64_t CAVM_CESTX_JOB_DEBUG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CESTX_JOB_DEBUG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=3))
        return 0x87e041c007a0ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("CESTX_JOB_DEBUG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CESTX_JOB_DEBUG(a) cavm_cestx_job_debug_t
#define bustype_CAVM_CESTX_JOB_DEBUG(a) CSR_TYPE_RSL
#define basename_CAVM_CESTX_JOB_DEBUG(a) "CESTX_JOB_DEBUG"
#define busnum_CAVM_CESTX_JOB_DEBUG(a) (a)
#define arguments_CAVM_CESTX_JOB_DEBUG(a) (a),-1,-1,-1

/**
 * Register (RSL) cest#_job_type
 *
 * CEST Job Type Register
 * Defines CEST job configuration format.
 * Hardware loads the job configuration in this register. Software should
 * never directly write to this register.
 */
union cavm_cestx_job_type
{
    uint64_t u;
    struct cavm_cestx_job_type_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_3_63         : 61;
        uint64_t activejob             : 3;  /**< [  2:  0](R/W) Value:
                                                                 0x1 = chest job.
                                                                 0x2 = chest + coma job.
                                                                 0x3 = coma job.
                                                                 0x4 = chest job with SW pilots.
                                                                 0x5 = chest + coma job with SW pilots. */
#else /* Word 0 - Little Endian */
        uint64_t activejob             : 3;  /**< [  2:  0](R/W) Value:
                                                                 0x1 = chest job.
                                                                 0x2 = chest + coma job.
                                                                 0x3 = coma job.
                                                                 0x4 = chest job with SW pilots.
                                                                 0x5 = chest + coma job with SW pilots. */
        uint64_t reserved_3_63         : 61;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cestx_job_type_s cn; */
};
typedef union cavm_cestx_job_type cavm_cestx_job_type_t;

static inline uint64_t CAVM_CESTX_JOB_TYPE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CESTX_JOB_TYPE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=3))
        return 0x87e041c02000ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("CESTX_JOB_TYPE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CESTX_JOB_TYPE(a) cavm_cestx_job_type_t
#define bustype_CAVM_CESTX_JOB_TYPE(a) CSR_TYPE_RSL
#define basename_CAVM_CESTX_JOB_TYPE(a) "CESTX_JOB_TYPE"
#define busnum_CAVM_CESTX_JOB_TYPE(a) (a)
#define arguments_CAVM_CESTX_JOB_TYPE(a) (a),-1,-1,-1

/**
 * Register (RSL) cest#_mode_static
 *
 * CEST Mode Static Register
 */
union cavm_cestx_mode_static
{
    uint64_t u;
    struct cavm_cestx_mode_static_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t reset_credits         : 1;  /**< [  4:  4](R/W) If value = 1, the output credits are reset on the job start. If value = 0, do nothing. */
        uint64_t bypass_race_aligner   : 1;  /**< [  3:  3](R/W) If value = 1, the race aligner will be bypassed. If value = 0, race aligner is in use. */
        uint64_t output_watchdog_en    : 1;  /**< [  2:  2](R/W) This register is used to enable output watchdog. Once job is started and the
                                                                 inputs phase is completed, the watchdog timer is initiated and if no output is
                                                                 provided within 128 clock cycle period, the job is terminated. Every time there
                                                                 is an output the watchdog timer is reset. */
        uint64_t thread_tx_size        : 2;  /**< [  1:  0](R/W) This register selects the number of data items transferred per thread before
                                                                 switching to next thread. Value: */
#else /* Word 0 - Little Endian */
        uint64_t thread_tx_size        : 2;  /**< [  1:  0](R/W) This register selects the number of data items transferred per thread before
                                                                 switching to next thread. Value: */
        uint64_t output_watchdog_en    : 1;  /**< [  2:  2](R/W) This register is used to enable output watchdog. Once job is started and the
                                                                 inputs phase is completed, the watchdog timer is initiated and if no output is
                                                                 provided within 128 clock cycle period, the job is terminated. Every time there
                                                                 is an output the watchdog timer is reset. */
        uint64_t bypass_race_aligner   : 1;  /**< [  3:  3](R/W) If value = 1, the race aligner will be bypassed. If value = 0, race aligner is in use. */
        uint64_t reset_credits         : 1;  /**< [  4:  4](R/W) If value = 1, the output credits are reset on the job start. If value = 0, do nothing. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cestx_mode_static_s cn; */
};
typedef union cavm_cestx_mode_static cavm_cestx_mode_static_t;

static inline uint64_t CAVM_CESTX_MODE_STATIC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CESTX_MODE_STATIC(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=3))
        return 0x87e041c00788ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("CESTX_MODE_STATIC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CESTX_MODE_STATIC(a) cavm_cestx_mode_static_t
#define bustype_CAVM_CESTX_MODE_STATIC(a) CSR_TYPE_RSL
#define basename_CAVM_CESTX_MODE_STATIC(a) "CESTX_MODE_STATIC"
#define busnum_CAVM_CESTX_MODE_STATIC(a) (a)
#define arguments_CAVM_CESTX_MODE_STATIC(a) (a),-1,-1,-1

/**
 * Register (RSL) cest#_output
 *
 * CEST Output Register
 */
union cavm_cestx_output
{
    uint64_t u;
    struct cavm_cestx_output_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](RO) The output words in the last job.(63: 32 --\> port 1 and 31:0 --\> port0). */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](RO) The output words in the last job.(63: 32 --\> port 1 and 31:0 --\> port0). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cestx_output_s cn; */
};
typedef union cavm_cestx_output cavm_cestx_output_t;

static inline uint64_t CAVM_CESTX_OUTPUT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CESTX_OUTPUT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=3))
        return 0x87e041c000d8ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("CESTX_OUTPUT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CESTX_OUTPUT(a) cavm_cestx_output_t
#define bustype_CAVM_CESTX_OUTPUT(a) CSR_TYPE_RSL
#define basename_CAVM_CESTX_OUTPUT(a) "CESTX_OUTPUT"
#define busnum_CAVM_CESTX_OUTPUT(a) (a)
#define arguments_CAVM_CESTX_OUTPUT(a) (a),-1,-1,-1

/**
 * Register (RSL) cest#_pg_0
 *
 * CEST Pg 0 Register
 * The PG.seed values for DMRS gold sequences. CP-OFDMA Rel 15 users use only the first
 * seed(PG.seed 0) and CP-OFDMA Rel 16 users use 2(for type 1) or 3(for type 2) seeds.
 */
union cavm_cestx_pg_0
{
    uint64_t u;
    struct cavm_cestx_pg_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_63           : 1;
        uint64_t seed_1                : 31; /**< [ 62: 32](R/W) 31 bits. (USED BY PG) */
        uint64_t reserved_31           : 1;
        uint64_t seed_0                : 31; /**< [ 30:  0](R/W) 31 bits. (USED BY PG) */
#else /* Word 0 - Little Endian */
        uint64_t seed_0                : 31; /**< [ 30:  0](R/W) 31 bits. (USED BY PG) */
        uint64_t reserved_31           : 1;
        uint64_t seed_1                : 31; /**< [ 62: 32](R/W) 31 bits. (USED BY PG) */
        uint64_t reserved_63           : 1;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cestx_pg_0_s cn; */
};
typedef union cavm_cestx_pg_0 cavm_cestx_pg_0_t;

static inline uint64_t CAVM_CESTX_PG_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CESTX_PG_0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=3))
        return 0x87e041c03788ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("CESTX_PG_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CESTX_PG_0(a) cavm_cestx_pg_0_t
#define bustype_CAVM_CESTX_PG_0(a) CSR_TYPE_RSL
#define basename_CAVM_CESTX_PG_0(a) "CESTX_PG_0"
#define busnum_CAVM_CESTX_PG_0(a) (a)
#define arguments_CAVM_CESTX_PG_0(a) (a),-1,-1,-1

/**
 * Register (RSL) cest#_pg_1
 *
 * CEST Pg 1 Register
 * Third PG seed value for the low PAPR CP-OFDMA pilot for type 2 (combValue=3) as we
 * process 3 CDM groups (combs) by one job.
 */
union cavm_cestx_pg_1
{
    uint64_t u;
    struct cavm_cestx_pg_1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_31_63        : 33;
        uint64_t seed_2                : 31; /**< [ 30:  0](R/W) 31 bits. (USED BY PG) */
#else /* Word 0 - Little Endian */
        uint64_t seed_2                : 31; /**< [ 30:  0](R/W) 31 bits. (USED BY PG) */
        uint64_t reserved_31_63        : 33;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cestx_pg_1_s cn; */
};
typedef union cavm_cestx_pg_1 cavm_cestx_pg_1_t;

static inline uint64_t CAVM_CESTX_PG_1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CESTX_PG_1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=3))
        return 0x87e041c03790ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("CESTX_PG_1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CESTX_PG_1(a) cavm_cestx_pg_1_t
#define bustype_CAVM_CESTX_PG_1(a) CSR_TYPE_RSL
#define basename_CAVM_CESTX_PG_1(a) "CESTX_PG_1"
#define busnum_CAVM_CESTX_PG_1(a) (a)
#define arguments_CAVM_CESTX_PG_1(a) (a),-1,-1,-1

/**
 * Register (RSL) cest#_reserved_error
 *
 * CEST Reserved Error Register
 */
union cavm_cestx_reserved_error
{
    uint64_t u;
    struct cavm_cestx_reserved_error_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cestx_reserved_error_s cn; */
};
typedef union cavm_cestx_reserved_error cavm_cestx_reserved_error_t;

static inline uint64_t CAVM_CESTX_RESERVED_ERROR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CESTX_RESERVED_ERROR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=3))
        return 0x87e041c00038ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("CESTX_RESERVED_ERROR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CESTX_RESERVED_ERROR(a) cavm_cestx_reserved_error_t
#define bustype_CAVM_CESTX_RESERVED_ERROR(a) CSR_TYPE_RSL
#define basename_CAVM_CESTX_RESERVED_ERROR(a) "CESTX_RESERVED_ERROR"
#define busnum_CAVM_CESTX_RESERVED_ERROR(a) (a)
#define arguments_CAVM_CESTX_RESERVED_ERROR(a) (a),-1,-1,-1

/**
 * Register (RSL) cest#_reserved_static
 *
 * CEST Reserved Static Register
 */
union cavm_cestx_reserved_static
{
    uint64_t u;
    struct cavm_cestx_reserved_static_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cestx_reserved_static_s cn; */
};
typedef union cavm_cestx_reserved_static cavm_cestx_reserved_static_t;

static inline uint64_t CAVM_CESTX_RESERVED_STATIC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CESTX_RESERVED_STATIC(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=3))
        return 0x87e041c00790ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("CESTX_RESERVED_STATIC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CESTX_RESERVED_STATIC(a) cavm_cestx_reserved_static_t
#define bustype_CAVM_CESTX_RESERVED_STATIC(a) CSR_TYPE_RSL
#define basename_CAVM_CESTX_RESERVED_STATIC(a) "CESTX_RESERVED_STATIC"
#define busnum_CAVM_CESTX_RESERVED_STATIC(a) (a)
#define arguments_CAVM_CESTX_RESERVED_STATIC(a) (a),-1,-1,-1

/**
 * Register (RSL) cest#_strls_coefficient#
 *
 * CEST Strls Coefficient Register
 * Total 360 coefficients = 12(onePRB) + 18(startPRB) + 24(middlePRB) + 18(endPRB)= 72
 * * 5 for 5 streams.
 *
 * Each category starts with index zero (onePRB: 0,1,2,..,11 ; startPRB: 0,1,2,...,17 ;
 * middlePRB: 0,1,2,...,23 ; endPRB: 0,1,2,...,17).
 */
union cavm_cestx_strls_coefficientx
{
    uint64_t u;
    struct cavm_cestx_strls_coefficientx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t coeff_1               : 32; /**< [ 63: 32](R/W) \<63:48\> --\> Q and \<47:32\> --\> I. */
        uint64_t coeff_0               : 32; /**< [ 31:  0](R/W) \<31:16\> --\> Q and \<15:0\> --\> I. */
#else /* Word 0 - Little Endian */
        uint64_t coeff_0               : 32; /**< [ 31:  0](R/W) \<31:16\> --\> Q and \<15:0\> --\> I. */
        uint64_t coeff_1               : 32; /**< [ 63: 32](R/W) \<63:48\> --\> Q and \<47:32\> --\> I. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cestx_strls_coefficientx_s cn; */
};
typedef union cavm_cestx_strls_coefficientx cavm_cestx_strls_coefficientx_t;

static inline uint64_t CAVM_CESTX_STRLS_COEFFICIENTX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CESTX_STRLS_COEFFICIENTX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=3) && (b<=179)))
        return 0x87e041c001e0ll + 0x80000ll * ((a) & 0x3) + 8ll * ((b) & 0xff);
    __cavm_csr_fatal("CESTX_STRLS_COEFFICIENTX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CESTX_STRLS_COEFFICIENTX(a,b) cavm_cestx_strls_coefficientx_t
#define bustype_CAVM_CESTX_STRLS_COEFFICIENTX(a,b) CSR_TYPE_RSL
#define basename_CAVM_CESTX_STRLS_COEFFICIENTX(a,b) "CESTX_STRLS_COEFFICIENTX"
#define busnum_CAVM_CESTX_STRLS_COEFFICIENTX(a,b) (a)
#define arguments_CAVM_CESTX_STRLS_COEFFICIENTX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) cest#_testreg
 *
 * CEST Testreg Register
 */
union cavm_cestx_testreg
{
    uint64_t u;
    struct cavm_cestx_testreg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t value                 : 64; /**< [ 63:  0](R/W) Just for testing purpose. */
#else /* Word 0 - Little Endian */
        uint64_t value                 : 64; /**< [ 63:  0](R/W) Just for testing purpose. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cestx_testreg_s cn; */
};
typedef union cavm_cestx_testreg cavm_cestx_testreg_t;

static inline uint64_t CAVM_CESTX_TESTREG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CESTX_TESTREG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=3))
        return 0x87e041c00780ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("CESTX_TESTREG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CESTX_TESTREG(a) cavm_cestx_testreg_t
#define bustype_CAVM_CESTX_TESTREG(a) CSR_TYPE_RSL
#define basename_CAVM_CESTX_TESTREG(a) "CESTX_TESTREG"
#define busnum_CAVM_CESTX_TESTREG(a) (a)
#define arguments_CAVM_CESTX_TESTREG(a) (a),-1,-1,-1

/**
 * Register (RSL) cest#_toc_coefficient#
 *
 * CEST Toc Coefficient Register
 * TOC coefficients are same for different SC's and users. 64 coeffs in total.
 */
union cavm_cestx_toc_coefficientx
{
    uint64_t u;
    struct cavm_cestx_toc_coefficientx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t coeff_1               : 32; /**< [ 63: 32](R/W) \<63:48\> --\> Q and \<47:32\> --\> I. */
        uint64_t coeff_0               : 32; /**< [ 31:  0](R/W) \<31:16\> --\> Q and \<15:0\> --\> I. */
#else /* Word 0 - Little Endian */
        uint64_t coeff_0               : 32; /**< [ 31:  0](R/W) \<31:16\> --\> Q and \<15:0\> --\> I. */
        uint64_t coeff_1               : 32; /**< [ 63: 32](R/W) \<63:48\> --\> Q and \<47:32\> --\> I. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cestx_toc_coefficientx_s cn; */
};
typedef union cavm_cestx_toc_coefficientx cavm_cestx_toc_coefficientx_t;

static inline uint64_t CAVM_CESTX_TOC_COEFFICIENTX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CESTX_TOC_COEFFICIENTX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=3) && (b<=31)))
        return 0x87e041c000e0ll + 0x80000ll * ((a) & 0x3) + 8ll * ((b) & 0x1f);
    __cavm_csr_fatal("CESTX_TOC_COEFFICIENTX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CESTX_TOC_COEFFICIENTX(a,b) cavm_cestx_toc_coefficientx_t
#define bustype_CAVM_CESTX_TOC_COEFFICIENTX(a,b) CSR_TYPE_RSL
#define basename_CAVM_CESTX_TOC_COEFFICIENTX(a,b) "CESTX_TOC_COEFFICIENTX"
#define busnum_CAVM_CESTX_TOC_COEFFICIENTX(a,b) (a)
#define arguments_CAVM_CESTX_TOC_COEFFICIENTX(a,b) (a),(b),-1,-1

#endif /* __CAVM_CSRS_CEST_H__ */
