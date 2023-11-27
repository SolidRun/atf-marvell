#ifndef __CAVM_CSRS_DLFE_H__
#define __CAVM_CSRS_DLFE_H__
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
 * DLFE.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration dlfe_bar_e
 */
#define CAVM_DLFE_BAR_E_DLFEX_PF_BAR2(a) (0x87e040200000ll + 0x80000ll * (a))
#define CAVM_DLFE_BAR_E_DLFEX_PF_BAR2_SIZE 0x40000ull

/**
 * Structure dlfe_jcfg0_s
 *
 * DLFE JCFG0 Structure
 * This structure specifies the format for the first word of the job
 * configuration for Normal DLFE jobs.
 */
union cavm_dlfe_jcfg0_s
{
    uint64_t u;
    struct cavm_dlfe_jcfg0_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t job_type              : 1;  /**< [ 63: 63] The type of job configuration.
                                                                 0 = Semi-static parameter update (SSUP) job.
                                                                 1 = Normal DLFE pipeline job.
                                                                 Must be 1 when using DLFE_JCFG0_S (which is only for Normal jobs). */
        uint64_t ant_idx               : 7;  /**< [ 62: 56] Specifies the Antenna Index for the processing job. */
        uint64_t num_dma_words         : 10; /**< [ 55: 46] DMA block size to read from RD-DMA port, in 128-bit words. Each DMA word
                                                                 contains 4 baseband signal samples, since each baseband signal sample is
                                                                 (16b+16b) complex integer. The maximum RB size is 312, which is equal to 3744
                                                                 subcarriers. As such, [NUM_DMA_WORDS] must be in the range [1, 936]. */
        uint64_t fft_size_idx          : 4;  /**< [ 45: 42] Determines the FFT size. Only the specified values are valid.
                                                                 0x1 = 256
                                                                 0x2 = 512
                                                                 0x3 = 1024
                                                                 0x4 = 2048
                                                                 0x5 = 4096 */
        uint64_t cp_size               : 11; /**< [ 41: 31] Cyclic Prefix Size for current antenna symbol. Actual number of samples for CP
                                                                 size, 1 sample resolution. */
        uint64_t cdd_offset            : 12; /**< [ 30: 19] CDD Size for current antenna symbol. Actual number of samples for CDD (sample
                                                                 index rotation) with 1 sample resolution. */
        uint64_t k0                    : 12; /**< [ 18:  7] Subcarrier offset K0 parameter.
                                                                 Valid only when [FFT_SHIFT_ENABLE] = 1. When [FFT_SHIFT_ENABLE] = 0, no shift is
                                                                 applied. */
        uint64_t zero_dc_subcarrier    : 1;  /**< [  6:  6] Zero DC Subcarrier Insert Enable. When 1, Zero DC Subcarrier insertion is enabled. */
        uint64_t fft_shift_enable      : 1;  /**< [  5:  5] FFT Shift Enable Flag. When 1, enables zero padding, DC zero insert, and FFT shift procedure
                                                                 performed before IFFT. If disabled, [NUM_DMA_WORDS] must be set to
                                                                 (FFT size)/4, where the FFT size is determined by [FFT_SIZE_IDX]. */
        uint64_t calibration_enable    : 1;  /**< [  4:  4] Calibration Enable. When 1, Calibration is enabled. */
        uint64_t ifft_enable           : 1;  /**< [  3:  3] IFFT Enable. When 1, IFFT is enabled. For verification use only. */
        uint64_t reserved_2            : 1;
        uint64_t tssi_measurement_reset : 1; /**< [  1:  1] If 1, it resets the TSSI accumulator buffer for the current antenna at the start of the job. */
        uint64_t tssi_measurement_report : 1;/**< [  0:  0] If 1, the TSSI accumulator buffer for the current antenna will be reported to
                                                                 the CSR at the end of the job. */
#else /* Word 0 - Little Endian */
        uint64_t tssi_measurement_report : 1;/**< [  0:  0] If 1, the TSSI accumulator buffer for the current antenna will be reported to
                                                                 the CSR at the end of the job. */
        uint64_t tssi_measurement_reset : 1; /**< [  1:  1] If 1, it resets the TSSI accumulator buffer for the current antenna at the start of the job. */
        uint64_t reserved_2            : 1;
        uint64_t ifft_enable           : 1;  /**< [  3:  3] IFFT Enable. When 1, IFFT is enabled. For verification use only. */
        uint64_t calibration_enable    : 1;  /**< [  4:  4] Calibration Enable. When 1, Calibration is enabled. */
        uint64_t fft_shift_enable      : 1;  /**< [  5:  5] FFT Shift Enable Flag. When 1, enables zero padding, DC zero insert, and FFT shift procedure
                                                                 performed before IFFT. If disabled, [NUM_DMA_WORDS] must be set to
                                                                 (FFT size)/4, where the FFT size is determined by [FFT_SIZE_IDX]. */
        uint64_t zero_dc_subcarrier    : 1;  /**< [  6:  6] Zero DC Subcarrier Insert Enable. When 1, Zero DC Subcarrier insertion is enabled. */
        uint64_t k0                    : 12; /**< [ 18:  7] Subcarrier offset K0 parameter.
                                                                 Valid only when [FFT_SHIFT_ENABLE] = 1. When [FFT_SHIFT_ENABLE] = 0, no shift is
                                                                 applied. */
        uint64_t cdd_offset            : 12; /**< [ 30: 19] CDD Size for current antenna symbol. Actual number of samples for CDD (sample
                                                                 index rotation) with 1 sample resolution. */
        uint64_t cp_size               : 11; /**< [ 41: 31] Cyclic Prefix Size for current antenna symbol. Actual number of samples for CP
                                                                 size, 1 sample resolution. */
        uint64_t fft_size_idx          : 4;  /**< [ 45: 42] Determines the FFT size. Only the specified values are valid.
                                                                 0x1 = 256
                                                                 0x2 = 512
                                                                 0x3 = 1024
                                                                 0x4 = 2048
                                                                 0x5 = 4096 */
        uint64_t num_dma_words         : 10; /**< [ 55: 46] DMA block size to read from RD-DMA port, in 128-bit words. Each DMA word
                                                                 contains 4 baseband signal samples, since each baseband signal sample is
                                                                 (16b+16b) complex integer. The maximum RB size is 312, which is equal to 3744
                                                                 subcarriers. As such, [NUM_DMA_WORDS] must be in the range [1, 936]. */
        uint64_t ant_idx               : 7;  /**< [ 62: 56] Specifies the Antenna Index for the processing job. */
        uint64_t job_type              : 1;  /**< [ 63: 63] The type of job configuration.
                                                                 0 = Semi-static parameter update (SSUP) job.
                                                                 1 = Normal DLFE pipeline job.
                                                                 Must be 1 when using DLFE_JCFG0_S (which is only for Normal jobs). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dlfe_jcfg0_s_s cn; */
};

/**
 * Structure dlfe_jcfg1_s
 *
 * DLFE JCFG1 Structure
 * This structure specifies the format of the second job configuration word
 * for Normal DLFE jobs.
 */
union cavm_dlfe_jcfg1_s
{
    uint64_t u;
    struct cavm_dlfe_jcfg1_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t complex_weight_im     : 12; /**< [ 63: 52] Complex weight imaginary part for symbol-by-symbol phase rotation. Complex
                                                                 weight rotation can be used to support BWP (bandwidth part). */
        uint64_t complex_weight_re     : 12; /**< [ 51: 40] Complex weight real part for symbol-by-symbol phase rotation. Complex weight
                                                                 rotation can be used to support BWP (bandwidth part). */
        uint64_t puncture_start        : 13; /**< [ 39: 27] Start index of punctured samples. The sample index which sample puncturing
                                                                 (setting the output sample(s) to 0) starts from. */
        uint64_t puncture_length       : 13; /**< [ 26: 14] Length of the punctured samples. The length of the samples to be set to 0 by
                                                                 sample puncturing. */
        uint64_t write_offset          : 2;  /**< [ 13: 12] DLFE output samples are written from this [WRITE_OFFSET] of the first 128-bit
                                                                 word. Data samples prior to this offset are filled with DLFE outout samples from
                                                                 the previous job. */
        uint64_t immediate_write       : 1;  /**< [ 11: 11] When [IMMEDIATE_WRITE] = 0, the DLFE does not write out the last DMA word if the
                                                                 data is not 128-bit aligned. When [IMMEDIATE_WRITE] = 1, the last DMA word of
                                                                 the job is written out unconditionally and will be padded with zeros if
                                                                 necessary to be 128-bit aligned. */
        uint64_t reserved_0_10         : 11;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_10         : 11;
        uint64_t immediate_write       : 1;  /**< [ 11: 11] When [IMMEDIATE_WRITE] = 0, the DLFE does not write out the last DMA word if the
                                                                 data is not 128-bit aligned. When [IMMEDIATE_WRITE] = 1, the last DMA word of
                                                                 the job is written out unconditionally and will be padded with zeros if
                                                                 necessary to be 128-bit aligned. */
        uint64_t write_offset          : 2;  /**< [ 13: 12] DLFE output samples are written from this [WRITE_OFFSET] of the first 128-bit
                                                                 word. Data samples prior to this offset are filled with DLFE outout samples from
                                                                 the previous job. */
        uint64_t puncture_length       : 13; /**< [ 26: 14] Length of the punctured samples. The length of the samples to be set to 0 by
                                                                 sample puncturing. */
        uint64_t puncture_start        : 13; /**< [ 39: 27] Start index of punctured samples. The sample index which sample puncturing
                                                                 (setting the output sample(s) to 0) starts from. */
        uint64_t complex_weight_re     : 12; /**< [ 51: 40] Complex weight real part for symbol-by-symbol phase rotation. Complex weight
                                                                 rotation can be used to support BWP (bandwidth part). */
        uint64_t complex_weight_im     : 12; /**< [ 63: 52] Complex weight imaginary part for symbol-by-symbol phase rotation. Complex
                                                                 weight rotation can be used to support BWP (bandwidth part). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dlfe_jcfg1_s_s cn; */
};

/**
 * Structure dlfe_jcfg2_s
 *
 * DLFE JCFG2 Structure
 * This structure specifies the format of the second job configuration word
 * for Normal DLFE jobs.
 */
union cavm_dlfe_jcfg2_s
{
    uint64_t u;
    struct cavm_dlfe_jcfg2_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t antenna_gain          : 14; /**< [ 63: 50] Antenna gain: signal gain to be applied = Antenna Gain / 2^11
                                                                 Signal gain ange in db is -inf to 18db (0x000 to 0x3ff). */
        uint64_t reserved_0_49         : 50;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_49         : 50;
        uint64_t antenna_gain          : 14; /**< [ 63: 50] Antenna gain: signal gain to be applied = Antenna Gain / 2^11
                                                                 Signal gain ange in db is -inf to 18db (0x000 to 0x3ff). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dlfe_jcfg2_s_s cn; */
};

/**
 * Structure dlfe_ssup_s
 *
 * DLFE SSUP Structure
 * This structure specifies the format for the first and only job configuration word for SSUP jobs.
 */
union cavm_dlfe_ssup_s
{
    uint64_t u;
    struct cavm_dlfe_ssup_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t job_type              : 1;  /**< [ 63: 63] The type of job configuration.
                                                                 0 = Semi-static parameter update (SSUP) job.
                                                                 1 = Normal DLFE pipeline job.
                                                                 Must be 0 when using DLFE_SSUP_S (which is only for SSUP jobs). */
        uint64_t reserved_58_62        : 5;
        uint64_t ss_param_type         : 2;  /**< [ 57: 56] Indicates which SSUP parameters to update, as follows:
                                                                 0x0 = Calibration coefficient for resource map.
                                                                 0x1 = Calibration coefficient.
                                                                 0x2 = Calibration coefficient exponent.
                                                                 0x3 = Antenna gain. */
        uint64_t reserved_55           : 1;
        uint64_t ant_idx               : 7;  /**< [ 54: 48] Specifies the antenna index for update of calibration coefficients.
                                                                 Only valid when [SS_PARAM_TYPE] = 0x1. */
        uint64_t reserved_14_47        : 34;
        uint64_t coeff_size            : 14; /**< [ 13:  0] Read DMA block size for calibration coefficient update, in 128-bit words.
                                                                 Only valid when [SS_PARAM_TYPE] = 0x1. */
#else /* Word 0 - Little Endian */
        uint64_t coeff_size            : 14; /**< [ 13:  0] Read DMA block size for calibration coefficient update, in 128-bit words.
                                                                 Only valid when [SS_PARAM_TYPE] = 0x1. */
        uint64_t reserved_14_47        : 34;
        uint64_t ant_idx               : 7;  /**< [ 54: 48] Specifies the antenna index for update of calibration coefficients.
                                                                 Only valid when [SS_PARAM_TYPE] = 0x1. */
        uint64_t reserved_55           : 1;
        uint64_t ss_param_type         : 2;  /**< [ 57: 56] Indicates which SSUP parameters to update, as follows:
                                                                 0x0 = Calibration coefficient for resource map.
                                                                 0x1 = Calibration coefficient.
                                                                 0x2 = Calibration coefficient exponent.
                                                                 0x3 = Antenna gain. */
        uint64_t reserved_58_62        : 5;
        uint64_t job_type              : 1;  /**< [ 63: 63] The type of job configuration.
                                                                 0 = Semi-static parameter update (SSUP) job.
                                                                 1 = Normal DLFE pipeline job.
                                                                 Must be 0 when using DLFE_SSUP_S (which is only for SSUP jobs). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dlfe_ssup_s_s cn; */
};

/**
 * Register (RSL) dlfe#_ab#_acal_addr
 *
 * DLFE ACAL Address Register
 * Antenna calibration memory address register.
 */
union cavm_dlfex_abx_acal_addr
{
    uint64_t u;
    struct cavm_dlfex_abx_acal_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_17_63        : 47;
        uint64_t addr                  : 17; /**< [ 16:  0](R/W) Address of ACAL coefficient to be operated upon. */
#else /* Word 0 - Little Endian */
        uint64_t addr                  : 17; /**< [ 16:  0](R/W) Address of ACAL coefficient to be operated upon. */
        uint64_t reserved_17_63        : 47;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dlfex_abx_acal_addr_s cn; */
};
typedef union cavm_dlfex_abx_acal_addr cavm_dlfex_abx_acal_addr_t;

static inline uint64_t CAVM_DLFEX_ABX_ACAL_ADDR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DLFEX_ABX_ACAL_ADDR(uint64_t a, uint64_t b)
{
    if ((a<=3) && (b<=1))
        return 0x87e040200208ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("DLFEX_ABX_ACAL_ADDR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DLFEX_ABX_ACAL_ADDR(a,b) cavm_dlfex_abx_acal_addr_t
#define bustype_CAVM_DLFEX_ABX_ACAL_ADDR(a,b) CSR_TYPE_RSL
#define basename_CAVM_DLFEX_ABX_ACAL_ADDR(a,b) "DLFEX_ABX_ACAL_ADDR"
#define device_bar_CAVM_DLFEX_ABX_ACAL_ADDR(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_DLFEX_ABX_ACAL_ADDR(a,b) (a)
#define arguments_CAVM_DLFEX_ABX_ACAL_ADDR(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dlfe#_ab#_acal_coef
 *
 * DLFE ACAL COEFF Register
 * This register writes to, or reads antenna calibration coefficient at the address specified by
 * DLFE_ACAL_ADDR.
 * DLFE_ACAL_ADDR must be written to before reading or writing this register.
 */
union cavm_dlfex_abx_acal_coef
{
    uint64_t u;
    struct cavm_dlfex_abx_acal_coef_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t coef_im               : 12; /**< [ 23: 12](R/W/H) Imaginary component of calibration coefficient. */
        uint64_t coef_re               : 12; /**< [ 11:  0](R/W/H) Real component of calibration coefficient. */
#else /* Word 0 - Little Endian */
        uint64_t coef_re               : 12; /**< [ 11:  0](R/W/H) Real component of calibration coefficient. */
        uint64_t coef_im               : 12; /**< [ 23: 12](R/W/H) Imaginary component of calibration coefficient. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dlfex_abx_acal_coef_s cn; */
};
typedef union cavm_dlfex_abx_acal_coef cavm_dlfex_abx_acal_coef_t;

static inline uint64_t CAVM_DLFEX_ABX_ACAL_COEF(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DLFEX_ABX_ACAL_COEF(uint64_t a, uint64_t b)
{
    if ((a<=3) && (b<=1))
        return 0x87e040200200ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("DLFEX_ABX_ACAL_COEF", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DLFEX_ABX_ACAL_COEF(a,b) cavm_dlfex_abx_acal_coef_t
#define bustype_CAVM_DLFEX_ABX_ACAL_COEF(a,b) CSR_TYPE_RSL
#define basename_CAVM_DLFEX_ABX_ACAL_COEF(a,b) "DLFEX_ABX_ACAL_COEF"
#define device_bar_CAVM_DLFEX_ABX_ACAL_COEF(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_DLFEX_ABX_ACAL_COEF(a,b) (a)
#define arguments_CAVM_DLFEX_ABX_ACAL_COEF(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dlfe#_ab#_ant_exp#
 *
 * DLFE Antenna Exponent Register
 * This register contains the antenna calibration exponent values.
 */
union cavm_dlfex_abx_ant_expx
{
    uint64_t u;
    struct cavm_dlfex_abx_ant_expx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_60_63        : 4;
        uint64_t ant7                  : 4;  /**< [ 59: 56](R/W) ACAL exp 7. */
        uint64_t reserved_52_55        : 4;
        uint64_t ant6                  : 4;  /**< [ 51: 48](R/W) ACAL exp 6. */
        uint64_t reserved_44_47        : 4;
        uint64_t ant5                  : 4;  /**< [ 43: 40](R/W) ACAL exp 5. */
        uint64_t reserved_36_39        : 4;
        uint64_t ant4                  : 4;  /**< [ 35: 32](R/W) ACAL exp 4. */
        uint64_t reserved_28_31        : 4;
        uint64_t ant3                  : 4;  /**< [ 27: 24](R/W) ACAL exp 3. */
        uint64_t reserved_20_23        : 4;
        uint64_t ant2                  : 4;  /**< [ 19: 16](R/W) ACAL exp 2. */
        uint64_t reserved_12_15        : 4;
        uint64_t ant1                  : 4;  /**< [ 11:  8](R/W) ACAL exp 1. */
        uint64_t reserved_4_7          : 4;
        uint64_t ant0                  : 4;  /**< [  3:  0](R/W) ACAL exp 0. */
#else /* Word 0 - Little Endian */
        uint64_t ant0                  : 4;  /**< [  3:  0](R/W) ACAL exp 0. */
        uint64_t reserved_4_7          : 4;
        uint64_t ant1                  : 4;  /**< [ 11:  8](R/W) ACAL exp 1. */
        uint64_t reserved_12_15        : 4;
        uint64_t ant2                  : 4;  /**< [ 19: 16](R/W) ACAL exp 2. */
        uint64_t reserved_20_23        : 4;
        uint64_t ant3                  : 4;  /**< [ 27: 24](R/W) ACAL exp 3. */
        uint64_t reserved_28_31        : 4;
        uint64_t ant4                  : 4;  /**< [ 35: 32](R/W) ACAL exp 4. */
        uint64_t reserved_36_39        : 4;
        uint64_t ant5                  : 4;  /**< [ 43: 40](R/W) ACAL exp 5. */
        uint64_t reserved_44_47        : 4;
        uint64_t ant6                  : 4;  /**< [ 51: 48](R/W) ACAL exp 6. */
        uint64_t reserved_52_55        : 4;
        uint64_t ant7                  : 4;  /**< [ 59: 56](R/W) ACAL exp 7. */
        uint64_t reserved_60_63        : 4;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dlfex_abx_ant_expx_s cn; */
};
typedef union cavm_dlfex_abx_ant_expx cavm_dlfex_abx_ant_expx_t;

static inline uint64_t CAVM_DLFEX_ABX_ANT_EXPX(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DLFEX_ABX_ANT_EXPX(uint64_t a, uint64_t b, uint64_t c)
{
    if ((a<=3) && (b<=1) && (c<=15))
        return 0x87e040200300ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1) + 8ll * ((c) & 0xf);
    __cavm_csr_fatal("DLFEX_ABX_ANT_EXPX", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_DLFEX_ABX_ANT_EXPX(a,b,c) cavm_dlfex_abx_ant_expx_t
#define bustype_CAVM_DLFEX_ABX_ANT_EXPX(a,b,c) CSR_TYPE_RSL
#define basename_CAVM_DLFEX_ABX_ANT_EXPX(a,b,c) "DLFEX_ABX_ANT_EXPX"
#define device_bar_CAVM_DLFEX_ABX_ANT_EXPX(a,b,c) 0x2 /* PF_BAR2 */
#define busnum_CAVM_DLFEX_ABX_ANT_EXPX(a,b,c) (a)
#define arguments_CAVM_DLFEX_ABX_ANT_EXPX(a,b,c) (a),(b),(c),-1

/**
 * Register (RSL) dlfe#_ab#_config0_data#
 *
 * DLFE_CONFIG0 Registers
 * This register block contains the DLFE job 0 configuration data.
 */
union cavm_dlfex_abx_config0_datax
{
    uint64_t u;
    struct cavm_dlfex_abx_config0_datax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t jcfg0                 : 64; /**< [ 63:  0](R/W) DLFE Job Configuration Word. */
#else /* Word 0 - Little Endian */
        uint64_t jcfg0                 : 64; /**< [ 63:  0](R/W) DLFE Job Configuration Word. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dlfex_abx_config0_datax_s cn; */
};
typedef union cavm_dlfex_abx_config0_datax cavm_dlfex_abx_config0_datax_t;

static inline uint64_t CAVM_DLFEX_ABX_CONFIG0_DATAX(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DLFEX_ABX_CONFIG0_DATAX(uint64_t a, uint64_t b, uint64_t c)
{
    if ((a<=3) && (b<=1) && (c<=2))
        return 0x87e040202000ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1) + 8ll * ((c) & 0x3);
    __cavm_csr_fatal("DLFEX_ABX_CONFIG0_DATAX", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_DLFEX_ABX_CONFIG0_DATAX(a,b,c) cavm_dlfex_abx_config0_datax_t
#define bustype_CAVM_DLFEX_ABX_CONFIG0_DATAX(a,b,c) CSR_TYPE_RSL
#define basename_CAVM_DLFEX_ABX_CONFIG0_DATAX(a,b,c) "DLFEX_ABX_CONFIG0_DATAX"
#define device_bar_CAVM_DLFEX_ABX_CONFIG0_DATAX(a,b,c) 0x2 /* PF_BAR2 */
#define busnum_CAVM_DLFEX_ABX_CONFIG0_DATAX(a,b,c) (a)
#define arguments_CAVM_DLFEX_ABX_CONFIG0_DATAX(a,b,c) (a),(b),(c),-1

/**
 * Register (RSL) dlfe#_ab#_config1_data#
 *
 * DLFE_CONFIG1 Registers
 * This register block contains the DLFE job 1 configuration data.
 */
union cavm_dlfex_abx_config1_datax
{
    uint64_t u;
    struct cavm_dlfex_abx_config1_datax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t jcfg1                 : 64; /**< [ 63:  0](R/W) DLFE Job Configuration Word. */
#else /* Word 0 - Little Endian */
        uint64_t jcfg1                 : 64; /**< [ 63:  0](R/W) DLFE Job Configuration Word. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dlfex_abx_config1_datax_s cn; */
};
typedef union cavm_dlfex_abx_config1_datax cavm_dlfex_abx_config1_datax_t;

static inline uint64_t CAVM_DLFEX_ABX_CONFIG1_DATAX(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DLFEX_ABX_CONFIG1_DATAX(uint64_t a, uint64_t b, uint64_t c)
{
    if ((a<=3) && (b<=1) && (c<=2))
        return 0x87e040204000ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1) + 8ll * ((c) & 0x3);
    __cavm_csr_fatal("DLFEX_ABX_CONFIG1_DATAX", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_DLFEX_ABX_CONFIG1_DATAX(a,b,c) cavm_dlfex_abx_config1_datax_t
#define bustype_CAVM_DLFEX_ABX_CONFIG1_DATAX(a,b,c) CSR_TYPE_RSL
#define basename_CAVM_DLFEX_ABX_CONFIG1_DATAX(a,b,c) "DLFEX_ABX_CONFIG1_DATAX"
#define device_bar_CAVM_DLFEX_ABX_CONFIG1_DATAX(a,b,c) 0x2 /* PF_BAR2 */
#define busnum_CAVM_DLFEX_ABX_CONFIG1_DATAX(a,b,c) (a)
#define arguments_CAVM_DLFEX_ABX_CONFIG1_DATAX(a,b,c) (a),(b),(c),-1

/**
 * Register (RSL) dlfe#_ab#_config2_data#
 *
 * DLFE_CONFIG2 Registers
 * This register block contains the DLFE job 2 configuration data.
 */
union cavm_dlfex_abx_config2_datax
{
    uint64_t u;
    struct cavm_dlfex_abx_config2_datax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t jcfg2                 : 64; /**< [ 63:  0](R/W) DLFE Job Configuration Word. */
#else /* Word 0 - Little Endian */
        uint64_t jcfg2                 : 64; /**< [ 63:  0](R/W) DLFE Job Configuration Word. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dlfex_abx_config2_datax_s cn; */
};
typedef union cavm_dlfex_abx_config2_datax cavm_dlfex_abx_config2_datax_t;

static inline uint64_t CAVM_DLFEX_ABX_CONFIG2_DATAX(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DLFEX_ABX_CONFIG2_DATAX(uint64_t a, uint64_t b, uint64_t c)
{
    if ((a<=3) && (b<=1) && (c<=2))
        return 0x87e040206000ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1) + 8ll * ((c) & 0x3);
    __cavm_csr_fatal("DLFEX_ABX_CONFIG2_DATAX", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_DLFEX_ABX_CONFIG2_DATAX(a,b,c) cavm_dlfex_abx_config2_datax_t
#define bustype_CAVM_DLFEX_ABX_CONFIG2_DATAX(a,b,c) CSR_TYPE_RSL
#define basename_CAVM_DLFEX_ABX_CONFIG2_DATAX(a,b,c) "DLFEX_ABX_CONFIG2_DATAX"
#define device_bar_CAVM_DLFEX_ABX_CONFIG2_DATAX(a,b,c) 0x2 /* PF_BAR2 */
#define busnum_CAVM_DLFEX_ABX_CONFIG2_DATAX(a,b,c) (a)
#define arguments_CAVM_DLFEX_ABX_CONFIG2_DATAX(a,b,c) (a),(b),(c),-1

/**
 * Register (RSL) dlfe#_ab#_control
 *
 * DLFE_CONTROL Register
 * This register is used to start DLFE HAB processing.
 */
union cavm_dlfex_abx_control
{
    uint64_t u;
    struct cavm_dlfex_abx_control_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t jobid2                : 16; /**< [ 63: 48](R/W/H) Job ID2 */
        uint64_t jobid1                : 16; /**< [ 47: 32](R/W/H) Job ID1 */
        uint64_t jobid0                : 16; /**< [ 31: 16](R/W/H) Job ID0 */
        uint64_t reserved_3_15         : 13;
        uint64_t start2                : 1;  /**< [  2:  2](R/W/H) A write of 1 will start the HAB using the configuration in
                                                                 DLFE_CONFIG2_DATA(). This bit auto-clears, and it is ignored if the
                                                                 HAB status is busy (DLFE_STATUS[STATUS2] = 1). */
        uint64_t start1                : 1;  /**< [  1:  1](R/W/H) A write of 1 will start the HAB using the configuration in
                                                                 DLFE_CONFIG1_DATA(). This bit auto-clears, and it is ignored if the
                                                                 HAB status is busy (DLFE_STATUS[STATUS1] = 1). */
        uint64_t start0                : 1;  /**< [  0:  0](R/W/H) A write of 1 will start the HAB using the configuration in
                                                                 DLFE_CONFIG0_DATA(). This bit auto-clears, and it is ignored if the
                                                                 HAB status is busy (DLFE_STATUS[STATUS0] = 1). */
#else /* Word 0 - Little Endian */
        uint64_t start0                : 1;  /**< [  0:  0](R/W/H) A write of 1 will start the HAB using the configuration in
                                                                 DLFE_CONFIG0_DATA(). This bit auto-clears, and it is ignored if the
                                                                 HAB status is busy (DLFE_STATUS[STATUS0] = 1). */
        uint64_t start1                : 1;  /**< [  1:  1](R/W/H) A write of 1 will start the HAB using the configuration in
                                                                 DLFE_CONFIG1_DATA(). This bit auto-clears, and it is ignored if the
                                                                 HAB status is busy (DLFE_STATUS[STATUS1] = 1). */
        uint64_t start2                : 1;  /**< [  2:  2](R/W/H) A write of 1 will start the HAB using the configuration in
                                                                 DLFE_CONFIG2_DATA(). This bit auto-clears, and it is ignored if the
                                                                 HAB status is busy (DLFE_STATUS[STATUS2] = 1). */
        uint64_t reserved_3_15         : 13;
        uint64_t jobid0                : 16; /**< [ 31: 16](R/W/H) Job ID0 */
        uint64_t jobid1                : 16; /**< [ 47: 32](R/W/H) Job ID1 */
        uint64_t jobid2                : 16; /**< [ 63: 48](R/W/H) Job ID2 */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dlfex_abx_control_s cn; */
};
typedef union cavm_dlfex_abx_control cavm_dlfex_abx_control_t;

static inline uint64_t CAVM_DLFEX_ABX_CONTROL(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DLFEX_ABX_CONTROL(uint64_t a, uint64_t b)
{
    if ((a<=3) && (b<=1))
        return 0x87e040200000ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("DLFEX_ABX_CONTROL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DLFEX_ABX_CONTROL(a,b) cavm_dlfex_abx_control_t
#define bustype_CAVM_DLFEX_ABX_CONTROL(a,b) CSR_TYPE_RSL
#define basename_CAVM_DLFEX_ABX_CONTROL(a,b) "DLFEX_ABX_CONTROL"
#define device_bar_CAVM_DLFEX_ABX_CONTROL(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_DLFEX_ABX_CONTROL(a,b) (a)
#define arguments_CAVM_DLFEX_ABX_CONTROL(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dlfe#_ab#_error_enable0
 *
 * DLFE Error Enable 0 Register
 * This register enables error reporting for DLFE_ERROR_SOURCE0 register.
 */
union cavm_dlfex_abx_error_enable0
{
    uint64_t u;
    struct cavm_dlfex_abx_error_enable0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t rp0_of_en             : 1;  /**< [  1:  1](R/W) Read port 0 overflow enable. */
        uint64_t rp0_uf_en             : 1;  /**< [  0:  0](R/W) Read port 0 underflow enable. */
#else /* Word 0 - Little Endian */
        uint64_t rp0_uf_en             : 1;  /**< [  0:  0](R/W) Read port 0 underflow enable. */
        uint64_t rp0_of_en             : 1;  /**< [  1:  1](R/W) Read port 0 overflow enable. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dlfex_abx_error_enable0_s cn; */
};
typedef union cavm_dlfex_abx_error_enable0 cavm_dlfex_abx_error_enable0_t;

static inline uint64_t CAVM_DLFEX_ABX_ERROR_ENABLE0(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DLFEX_ABX_ERROR_ENABLE0(uint64_t a, uint64_t b)
{
    if ((a<=3) && (b<=1))
        return 0x87e040200040ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("DLFEX_ABX_ERROR_ENABLE0", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DLFEX_ABX_ERROR_ENABLE0(a,b) cavm_dlfex_abx_error_enable0_t
#define bustype_CAVM_DLFEX_ABX_ERROR_ENABLE0(a,b) CSR_TYPE_RSL
#define basename_CAVM_DLFEX_ABX_ERROR_ENABLE0(a,b) "DLFEX_ABX_ERROR_ENABLE0"
#define device_bar_CAVM_DLFEX_ABX_ERROR_ENABLE0(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_DLFEX_ABX_ERROR_ENABLE0(a,b) (a)
#define arguments_CAVM_DLFEX_ABX_ERROR_ENABLE0(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dlfe#_ab#_error_source0
 *
 * DLFE Error Source Register 0
 * This register reports the source of read DMA overflow/underflow errors.
 */
union cavm_dlfex_abx_error_source0
{
    uint64_t u;
    struct cavm_dlfex_abx_error_source0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t rp0_jobid             : 16; /**< [ 31: 16](RO/H) Job ID for read port 0 overflow/underflow. */
        uint64_t reserved_5_15         : 11;
        uint64_t rp0_of                : 1;  /**< [  4:  4](R/W1C/H) Read port 0 overflow. */
        uint64_t reserved_1_3          : 3;
        uint64_t rp0_uf                : 1;  /**< [  0:  0](R/W1C/H) Read port 0 underflow. */
#else /* Word 0 - Little Endian */
        uint64_t rp0_uf                : 1;  /**< [  0:  0](R/W1C/H) Read port 0 underflow. */
        uint64_t reserved_1_3          : 3;
        uint64_t rp0_of                : 1;  /**< [  4:  4](R/W1C/H) Read port 0 overflow. */
        uint64_t reserved_5_15         : 11;
        uint64_t rp0_jobid             : 16; /**< [ 31: 16](RO/H) Job ID for read port 0 overflow/underflow. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dlfex_abx_error_source0_s cn; */
};
typedef union cavm_dlfex_abx_error_source0 cavm_dlfex_abx_error_source0_t;

static inline uint64_t CAVM_DLFEX_ABX_ERROR_SOURCE0(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DLFEX_ABX_ERROR_SOURCE0(uint64_t a, uint64_t b)
{
    if ((a<=3) && (b<=1))
        return 0x87e040200030ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("DLFEX_ABX_ERROR_SOURCE0", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DLFEX_ABX_ERROR_SOURCE0(a,b) cavm_dlfex_abx_error_source0_t
#define bustype_CAVM_DLFEX_ABX_ERROR_SOURCE0(a,b) CSR_TYPE_RSL
#define basename_CAVM_DLFEX_ABX_ERROR_SOURCE0(a,b) "DLFEX_ABX_ERROR_SOURCE0"
#define device_bar_CAVM_DLFEX_ABX_ERROR_SOURCE0(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_DLFEX_ABX_ERROR_SOURCE0(a,b) (a)
#define arguments_CAVM_DLFEX_ABX_ERROR_SOURCE0(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dlfe#_ab#_res_map#
 *
 * DLFE Resource Map Register
 * This register contains the resource map values.
 */
union cavm_dlfex_abx_res_mapx
{
    uint64_t u;
    struct cavm_dlfex_abx_res_mapx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_63           : 1;
        uint64_t ptr3                  : 15; /**< [ 62: 48](R/W) ACAL pointer 3. */
        uint64_t reserved_47           : 1;
        uint64_t ptr2                  : 15; /**< [ 46: 32](R/W) ACAL pointer 2. */
        uint64_t reserved_31           : 1;
        uint64_t ptr1                  : 15; /**< [ 30: 16](R/W) ACAL pointer 1. */
        uint64_t reserved_15           : 1;
        uint64_t ptr0                  : 15; /**< [ 14:  0](R/W) ACAL pointer 0. */
#else /* Word 0 - Little Endian */
        uint64_t ptr0                  : 15; /**< [ 14:  0](R/W) ACAL pointer 0. */
        uint64_t reserved_15           : 1;
        uint64_t ptr1                  : 15; /**< [ 30: 16](R/W) ACAL pointer 1. */
        uint64_t reserved_31           : 1;
        uint64_t ptr2                  : 15; /**< [ 46: 32](R/W) ACAL pointer 2. */
        uint64_t reserved_47           : 1;
        uint64_t ptr3                  : 15; /**< [ 62: 48](R/W) ACAL pointer 3. */
        uint64_t reserved_63           : 1;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dlfex_abx_res_mapx_s cn; */
};
typedef union cavm_dlfex_abx_res_mapx cavm_dlfex_abx_res_mapx_t;

static inline uint64_t CAVM_DLFEX_ABX_RES_MAPX(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DLFEX_ABX_RES_MAPX(uint64_t a, uint64_t b, uint64_t c)
{
    if ((a<=3) && (b<=1) && (c<=31))
        return 0x87e040200400ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1) + 8ll * ((c) & 0x1f);
    __cavm_csr_fatal("DLFEX_ABX_RES_MAPX", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_DLFEX_ABX_RES_MAPX(a,b,c) cavm_dlfex_abx_res_mapx_t
#define bustype_CAVM_DLFEX_ABX_RES_MAPX(a,b,c) CSR_TYPE_RSL
#define basename_CAVM_DLFEX_ABX_RES_MAPX(a,b,c) "DLFEX_ABX_RES_MAPX"
#define device_bar_CAVM_DLFEX_ABX_RES_MAPX(a,b,c) 0x2 /* PF_BAR2 */
#define busnum_CAVM_DLFEX_ABX_RES_MAPX(a,b,c) (a)
#define arguments_CAVM_DLFEX_ABX_RES_MAPX(a,b,c) (a),(b),(c),-1

/**
 * Register (RSL) dlfe#_ab#_status
 *
 * DLFE Status Register
 * DLFE Status Register.
 */
union cavm_dlfex_abx_status
{
    uint64_t u;
    struct cavm_dlfex_abx_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t ready                 : 1;  /**< [  4:  4](RO/H) When set, indicates the DLFE HAB is ready to receive next job. */
        uint64_t reserved_3            : 1;
        uint64_t status2               : 1;  /**< [  2:  2](RO/H) When set, indicates the DLFE HAB is busy processing a job. */
        uint64_t status1               : 1;  /**< [  1:  1](RO/H) When set, indicates the DLFE HAB is busy processing a job. */
        uint64_t status0               : 1;  /**< [  0:  0](RO/H) When set, indicates the DLFE HAB is busy processing a job. */
#else /* Word 0 - Little Endian */
        uint64_t status0               : 1;  /**< [  0:  0](RO/H) When set, indicates the DLFE HAB is busy processing a job. */
        uint64_t status1               : 1;  /**< [  1:  1](RO/H) When set, indicates the DLFE HAB is busy processing a job. */
        uint64_t status2               : 1;  /**< [  2:  2](RO/H) When set, indicates the DLFE HAB is busy processing a job. */
        uint64_t reserved_3            : 1;
        uint64_t ready                 : 1;  /**< [  4:  4](RO/H) When set, indicates the DLFE HAB is ready to receive next job. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dlfex_abx_status_s cn; */
};
typedef union cavm_dlfex_abx_status cavm_dlfex_abx_status_t;

static inline uint64_t CAVM_DLFEX_ABX_STATUS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DLFEX_ABX_STATUS(uint64_t a, uint64_t b)
{
    if ((a<=3) && (b<=1))
        return 0x87e040200018ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("DLFEX_ABX_STATUS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DLFEX_ABX_STATUS(a,b) cavm_dlfex_abx_status_t
#define bustype_CAVM_DLFEX_ABX_STATUS(a,b) CSR_TYPE_RSL
#define basename_CAVM_DLFEX_ABX_STATUS(a,b) "DLFEX_ABX_STATUS"
#define device_bar_CAVM_DLFEX_ABX_STATUS(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_DLFEX_ABX_STATUS(a,b) (a)
#define arguments_CAVM_DLFEX_ABX_STATUS(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dlfe#_ab#_tssi#
 *
 * DLFE TSSI Register
 * This register reports TSSI values.
 */
union cavm_dlfex_abx_tssix
{
    uint64_t u;
    struct cavm_dlfex_abx_tssix_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t tssi                  : 64; /**< [ 63:  0](RO/H) TSSI Report value for Antenna(x) */
#else /* Word 0 - Little Endian */
        uint64_t tssi                  : 64; /**< [ 63:  0](RO/H) TSSI Report value for Antenna(x) */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dlfex_abx_tssix_s cn; */
};
typedef union cavm_dlfex_abx_tssix cavm_dlfex_abx_tssix_t;

static inline uint64_t CAVM_DLFEX_ABX_TSSIX(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DLFEX_ABX_TSSIX(uint64_t a, uint64_t b, uint64_t c)
{
    if ((a<=3) && (b<=1) && (c<=127))
        return 0x87e040200800ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1) + 8ll * ((c) & 0x7f);
    __cavm_csr_fatal("DLFEX_ABX_TSSIX", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_DLFEX_ABX_TSSIX(a,b,c) cavm_dlfex_abx_tssix_t
#define bustype_CAVM_DLFEX_ABX_TSSIX(a,b,c) CSR_TYPE_RSL
#define basename_CAVM_DLFEX_ABX_TSSIX(a,b,c) "DLFEX_ABX_TSSIX"
#define device_bar_CAVM_DLFEX_ABX_TSSIX(a,b,c) 0x2 /* PF_BAR2 */
#define busnum_CAVM_DLFEX_ABX_TSSIX(a,b,c) (a)
#define arguments_CAVM_DLFEX_ABX_TSSIX(a,b,c) (a),(b),(c),-1

#endif /* __CAVM_CSRS_DLFE_H__ */
