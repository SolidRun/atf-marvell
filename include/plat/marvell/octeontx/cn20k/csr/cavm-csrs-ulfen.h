#ifndef __CAVM_CSRS_ULFEN_H__
#define __CAVM_CSRS_ULFEN_H__
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
 * ULFEN.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration ulfen_bar_e
 */
#define CAVM_ULFEN_BAR_E_ULFENX_PF_BAR2(a) (0xc00840000000ll + 0x100000000ll * (a))
#define CAVM_ULFEN_BAR_E_ULFENX_PF_BAR2_SIZE 0x40000ull

/**
 * Structure ulfe_normal_job_s
 *
 * ULFE Normal Job Structure
 * This structure specifies the format of the job configuration for ULFE normal jobs.
 */
union cavm_ulfe_normal_job_s
{
    uint64_t u[11];
    struct cavm_ulfe_normal_job_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ant_idx               : 7;  /**< [ 63: 57] Logical antenna index. Valid range is [0,127]. This value points to the internal
                                                                 memory space required for the continuous signal processing on DC removal, RACH-FE
                                                                 decimation filters, and frequency shifters assigned for this antenna stream. */
        uint64_t trch_fe_enable        : 1;  /**< [ 56: 56] Traffic channel frontend processing control:
                                                                 0x0 = Disable traffic channel processing.
                                                                 0x1 = Enable traffic channel processing. */
        uint64_t fft_size_idx          : 4;  /**< [ 55: 52] FFT size index
                                                                 0x0 = 128.
                                                                 0x1 = 256.
                                                                 0x2 = 512.
                                                                 0x3 = 1024.
                                                                 0x4 = 2048.
                                                                 0x5 = 4096.
                                                                 0x6-0x7 = unused.
                                                                 0x8 = 192.
                                                                 0x9 = 384.
                                                                 0xA = 768.
                                                                 0xB = 1536.
                                                                 0xC = 3072. */
        uint64_t scs                   : 3;  /**< [ 51: 49] Subcarrier spacing:
                                                                 0x0 = 15 kHz.
                                                                 0x1 = 30 kHz.
                                                                 0x2 = 60 kHz.
                                                                 0x3 = 120 kHz.
                                                                 0x4 = 240 kHz.
                                                                 0x5-0x7 = Reserved. */
        uint64_t cp_size               : 11; /**< [ 48: 38] Cyclic prefix size. Valid range of [CP_SIZE] is [0,1024]. */
        uint64_t start_offset          : 2;  /**< [ 37: 36] Start sample offset where ULFE reads its input out of 4 samples in the first
                                                                 128b word. Valid range is [0,3]. */
        uint64_t num_rb                : 9;  /**< [ 35: 27] Number of RBs. Valid range is [6,320]. */
        uint64_t dcrm_coef_exp         : 5;  /**< [ 26: 22] DC removal filter coefficient exponent. The DC removal filter coefficient is
                                                                 [DCRM_COEF] x 2^(-[DCRM_COEF_EXP]). Valid range is [4,20]. */
        uint64_t dcrm_block_size       : 2;  /**< [ 21: 20] Block size in DC removal mode.
                                                                 0x0 = 30720.
                                                                 0x1 = 30720 x 2.
                                                                 0x2 = 30720 x 4.
                                                                 0x3 = 30720 x 8. */
        uint64_t freq_shift_enable     : 1;  /**< [ 19: 19] Enables frequency shift when set. */
        uint64_t freq_shift            : 18; /**< [ 18:  1] Frequency shift, in units of 100 Hz. This is a two's-complement signed value,
                                                                 with a valid range of [-131072,131071]. */
        uint64_t trch_hf_downshift     : 1;  /**< [  0:  0] Half-tone down shift for traffic channels.
                                                                 0x0 = Disable half tone down shift.
                                                                 0x1 = Enable half tone down shift. */
#else /* Word 0 - Little Endian */
        uint64_t trch_hf_downshift     : 1;  /**< [  0:  0] Half-tone down shift for traffic channels.
                                                                 0x0 = Disable half tone down shift.
                                                                 0x1 = Enable half tone down shift. */
        uint64_t freq_shift            : 18; /**< [ 18:  1] Frequency shift, in units of 100 Hz. This is a two's-complement signed value,
                                                                 with a valid range of [-131072,131071]. */
        uint64_t freq_shift_enable     : 1;  /**< [ 19: 19] Enables frequency shift when set. */
        uint64_t dcrm_block_size       : 2;  /**< [ 21: 20] Block size in DC removal mode.
                                                                 0x0 = 30720.
                                                                 0x1 = 30720 x 2.
                                                                 0x2 = 30720 x 4.
                                                                 0x3 = 30720 x 8. */
        uint64_t dcrm_coef_exp         : 5;  /**< [ 26: 22] DC removal filter coefficient exponent. The DC removal filter coefficient is
                                                                 [DCRM_COEF] x 2^(-[DCRM_COEF_EXP]). Valid range is [4,20]. */
        uint64_t num_rb                : 9;  /**< [ 35: 27] Number of RBs. Valid range is [6,320]. */
        uint64_t start_offset          : 2;  /**< [ 37: 36] Start sample offset where ULFE reads its input out of 4 samples in the first
                                                                 128b word. Valid range is [0,3]. */
        uint64_t cp_size               : 11; /**< [ 48: 38] Cyclic prefix size. Valid range of [CP_SIZE] is [0,1024]. */
        uint64_t scs                   : 3;  /**< [ 51: 49] Subcarrier spacing:
                                                                 0x0 = 15 kHz.
                                                                 0x1 = 30 kHz.
                                                                 0x2 = 60 kHz.
                                                                 0x3 = 120 kHz.
                                                                 0x4 = 240 kHz.
                                                                 0x5-0x7 = Reserved. */
        uint64_t fft_size_idx          : 4;  /**< [ 55: 52] FFT size index
                                                                 0x0 = 128.
                                                                 0x1 = 256.
                                                                 0x2 = 512.
                                                                 0x3 = 1024.
                                                                 0x4 = 2048.
                                                                 0x5 = 4096.
                                                                 0x6-0x7 = unused.
                                                                 0x8 = 192.
                                                                 0x9 = 384.
                                                                 0xA = 768.
                                                                 0xB = 1536.
                                                                 0xC = 3072. */
        uint64_t trch_fe_enable        : 1;  /**< [ 56: 56] Traffic channel frontend processing control:
                                                                 0x0 = Disable traffic channel processing.
                                                                 0x1 = Enable traffic channel processing. */
        uint64_t ant_idx               : 7;  /**< [ 63: 57] Logical antenna index. Valid range is [0,127]. This value points to the internal
                                                                 memory space required for the continuous signal processing on DC removal, RACH-FE
                                                                 decimation filters, and frequency shifters assigned for this antenna stream. */
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t user_def_phase        : 12; /**< [127:116] User defined phase rotation. Rotated phase is \pi x [USER_DEF_PHASE]/2048. Two's
                                                                 complement value in the range [-2048,2047]. */
        uint64_t cprm_offset           : 11; /**< [115:105] CP removal offset for first process. Valid range is [0,1024]. */
        uint64_t fft_enable            : 1;  /**< [104:104] Enable FFT. */
        uint64_t dcrm_reset            : 1;  /**< [103:103] DC removal reset control.
                                                                 0x0 = Do nothing.
                                                                 0x1 = Reset the DC removal state variables (i.e., sample count, block
                                                                 sum, and DC estimate). */
        uint64_t dcrm_enable           : 1;  /**< [102:102] Enable DC removal:
                                                                 0x0 = Disable (bypass) DC removal filter.
                                                                 0x1 = Enable DC removal filter. */
        uint64_t dcrm_mode             : 1;  /**< [101:101] DC removal mode:
                                                                 0x0 = Filter mode.
                                                                 0x1 = Block average mode. */
        uint64_t dcrm_coef             : 4;  /**< [100: 97] DC removal filter coefficient. See [DCRM_COEF_EXP]. */
        uint64_t select_reorder_enable : 1;  /**< [ 96: 96] Subcarrier reordering enable:
                                                                 0 = Bypass num_rb x 12  FFT output samples.
                                                                 1 = Reorder num_rb x 12 FFT output samples. */
        uint64_t cyclic_time_shift_enable : 1;/**< [ 95: 95] Enable cyclic time shift for both passes. */
        uint64_t cyclic_time_shift     : 13; /**< [ 94: 82] Cyclic time shift for the first pass. Two's complement value in the range [-4096,4095]. */
        uint64_t k0                    : 12; /**< [ 81: 70] Carrier offset. Whole subcarriers in the frequency domain are shifted by [K0].
                                                                 Valid range is [-2048, 2047]. */
        uint64_t td_rssi_reset         : 1;  /**< [ 69: 69] Reset measurement TD-RSSI values. */
        uint64_t td_rssi_trigger       : 1;  /**< [ 68: 68] Trigger measurement TD-RSSI accumulation.

                                                                 Accumulated values can be reported via DMA by setting
                                                                 [TD_RSSI_REPORT] for this job or on a subsequent symbol job. */
        uint64_t td_rssi_report        : 1;  /**< [ 67: 67] Enable measurement TD-RSSI report outputs. */
        uint64_t rach_config_update    : 1;  /**< [ 66: 66] RACH configuration update:
                                                                 0x0 = No update.
                                                                 0x1 = Update RACH FE configuration according to job config. */
        uint64_t reserved_64_65        : 2;
#else /* Word 1 - Little Endian */
        uint64_t reserved_64_65        : 2;
        uint64_t rach_config_update    : 1;  /**< [ 66: 66] RACH configuration update:
                                                                 0x0 = No update.
                                                                 0x1 = Update RACH FE configuration according to job config. */
        uint64_t td_rssi_report        : 1;  /**< [ 67: 67] Enable measurement TD-RSSI report outputs. */
        uint64_t td_rssi_trigger       : 1;  /**< [ 68: 68] Trigger measurement TD-RSSI accumulation.

                                                                 Accumulated values can be reported via DMA by setting
                                                                 [TD_RSSI_REPORT] for this job or on a subsequent symbol job. */
        uint64_t td_rssi_reset         : 1;  /**< [ 69: 69] Reset measurement TD-RSSI values. */
        uint64_t k0                    : 12; /**< [ 81: 70] Carrier offset. Whole subcarriers in the frequency domain are shifted by [K0].
                                                                 Valid range is [-2048, 2047]. */
        uint64_t cyclic_time_shift     : 13; /**< [ 94: 82] Cyclic time shift for the first pass. Two's complement value in the range [-4096,4095]. */
        uint64_t cyclic_time_shift_enable : 1;/**< [ 95: 95] Enable cyclic time shift for both passes. */
        uint64_t select_reorder_enable : 1;  /**< [ 96: 96] Subcarrier reordering enable:
                                                                 0 = Bypass num_rb x 12  FFT output samples.
                                                                 1 = Reorder num_rb x 12 FFT output samples. */
        uint64_t dcrm_coef             : 4;  /**< [100: 97] DC removal filter coefficient. See [DCRM_COEF_EXP]. */
        uint64_t dcrm_mode             : 1;  /**< [101:101] DC removal mode:
                                                                 0x0 = Filter mode.
                                                                 0x1 = Block average mode. */
        uint64_t dcrm_enable           : 1;  /**< [102:102] Enable DC removal:
                                                                 0x0 = Disable (bypass) DC removal filter.
                                                                 0x1 = Enable DC removal filter. */
        uint64_t dcrm_reset            : 1;  /**< [103:103] DC removal reset control.
                                                                 0x0 = Do nothing.
                                                                 0x1 = Reset the DC removal state variables (i.e., sample count, block
                                                                 sum, and DC estimate). */
        uint64_t fft_enable            : 1;  /**< [104:104] Enable FFT. */
        uint64_t cprm_offset           : 11; /**< [115:105] CP removal offset for first process. Valid range is [0,1024]. */
        uint64_t user_def_phase        : 12; /**< [127:116] User defined phase rotation. Rotated phase is \pi x [USER_DEF_PHASE]/2048. Two's
                                                                 complement value in the range [-2048,2047]. */
#endif /* Word 1 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 2 - Big Endian */
        uint64_t td_rssi_db_adj        : 12; /**< [191:180] TD-RSSI dB adjustment value. The adjustment value added to dB value converted
                                                                 from the TD-RSSI measurement. Valid range is [-2048,2047] which is equivalent to
                                                                 [-204.8, 204.7] dB in dB unit. */
        uint64_t reserved_128_179      : 52;
#else /* Word 2 - Little Endian */
        uint64_t reserved_128_179      : 52;
        uint64_t td_rssi_db_adj        : 12; /**< [191:180] TD-RSSI dB adjustment value. The adjustment value added to dB value converted
                                                                 from the TD-RSSI measurement. Valid range is [-2048,2047] which is equivalent to
                                                                 [-204.8, 204.7] dB in dB unit. */
#endif /* Word 2 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 3 - Big Endian */
        uint64_t rach_fe_enable0       : 1;  /**< [255:255] Enable RACH front-end 0. */
        uint64_t rach_freq_shift0      : 27; /**< [254:228] Frequency shift in RACH FE0. The frequency shift will be
                                                                 (-[RACH_FREQ_SHIFT0]*1.8310546875) Hz regardless of SCS.
                                                                 Note that the frequency of the input signal is shifted in the negative direction. */
        uint64_t oversample_ratio0     : 2;  /**< [227:226] Oversampling ratio for RACH FE0:
                                                                 0x0 = Bypass.
                                                                 0x1 = 2x oversampling.
                                                                 0x2 = 4x oversampling.
                                                                 0x3 = Reserved. */
        uint64_t decim_ratio0          : 6;  /**< [225:220] CIC decimation ratio for RACH FE0:

                                                                 _ 0x0, 0x1 = Bypass.

                                                                 _ 0x2-0x30 = Decimate [DECIM_RATIO0]-1 input samples of every [DECIM_RATIO0] samples. */
        uint64_t output_level_atten0   : 5;  /**< [219:215] Output level attenuation for RACH FE0. See [OUTPUT_LEVEL_ATTEN0]. */
        uint64_t state_reset0          : 1;  /**< [214:214] RACH FE1 sample rate converter/TD-RSSI reset.
                                                                 0x0 =  Hold.
                                                                 0x1 =  Reset (set to 0). */
        uint64_t rach_wr_offset0       : 2;  /**< [213:212] Write offset for RACH FE 0. */
        uint64_t reserved_192_211      : 20;
#else /* Word 3 - Little Endian */
        uint64_t reserved_192_211      : 20;
        uint64_t rach_wr_offset0       : 2;  /**< [213:212] Write offset for RACH FE 0. */
        uint64_t state_reset0          : 1;  /**< [214:214] RACH FE1 sample rate converter/TD-RSSI reset.
                                                                 0x0 =  Hold.
                                                                 0x1 =  Reset (set to 0). */
        uint64_t output_level_atten0   : 5;  /**< [219:215] Output level attenuation for RACH FE0. See [OUTPUT_LEVEL_ATTEN0]. */
        uint64_t decim_ratio0          : 6;  /**< [225:220] CIC decimation ratio for RACH FE0:

                                                                 _ 0x0, 0x1 = Bypass.

                                                                 _ 0x2-0x30 = Decimate [DECIM_RATIO0]-1 input samples of every [DECIM_RATIO0] samples. */
        uint64_t oversample_ratio0     : 2;  /**< [227:226] Oversampling ratio for RACH FE0:
                                                                 0x0 = Bypass.
                                                                 0x1 = 2x oversampling.
                                                                 0x2 = 4x oversampling.
                                                                 0x3 = Reserved. */
        uint64_t rach_freq_shift0      : 27; /**< [254:228] Frequency shift in RACH FE0. The frequency shift will be
                                                                 (-[RACH_FREQ_SHIFT0]*1.8310546875) Hz regardless of SCS.
                                                                 Note that the frequency of the input signal is shifted in the negative direction. */
        uint64_t rach_fe_enable0       : 1;  /**< [255:255] Enable RACH front-end 0. */
#endif /* Word 3 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 4 - Big Endian */
        uint64_t rach_fe_enable1       : 1;  /**< [319:319] Enable RACH front-end 1. */
        uint64_t rach_freq_shift1      : 27; /**< [318:292] Frequency shift in RACH FE1. The frequency shift will be
                                                                 (-[RACH_FREQ_SHIFT1]*1.8310546875) Hz regardless of SCS.
                                                                 Note that the frequency of the input signal is shifted in the negative direction. */
        uint64_t oversample_ratio1     : 2;  /**< [291:290] Oversampling ratio for RACH FE1:
                                                                 0x0 = Bypass.
                                                                 0x1 = 2x oversampling.
                                                                 0x2 = 4x oversampling.
                                                                 0x3 = Reserved. */
        uint64_t decim_ratio1          : 6;  /**< [289:284] CIC decimation ratio for RACH FE1:

                                                                 _ 0x0, 0x1 = Bypass.

                                                                 _ 0x2-0x30 = Decimate [DECIM_RATIO1]-1 input samples of every [DECIM_RATIO1] samples. */
        uint64_t output_level_atten1   : 5;  /**< [283:279] Output level attenuation for RACH FE1. Valid range is [0,26] which is equivalent
                                                                 to [0,-156] dB attenuation with 6 dB step. */
        uint64_t state_reset1          : 1;  /**< [278:278] RACH FE1 sample rate converter/TD-RSSI reset.
                                                                 0x0 =  Hold.
                                                                 0x1 =  Reset (set to 0). */
        uint64_t rach_wr_offset1       : 2;  /**< [277:276] Write offset for RACH FE 1. */
        uint64_t reserved_256_275      : 20;
#else /* Word 4 - Little Endian */
        uint64_t reserved_256_275      : 20;
        uint64_t rach_wr_offset1       : 2;  /**< [277:276] Write offset for RACH FE 1. */
        uint64_t state_reset1          : 1;  /**< [278:278] RACH FE1 sample rate converter/TD-RSSI reset.
                                                                 0x0 =  Hold.
                                                                 0x1 =  Reset (set to 0). */
        uint64_t output_level_atten1   : 5;  /**< [283:279] Output level attenuation for RACH FE1. Valid range is [0,26] which is equivalent
                                                                 to [0,-156] dB attenuation with 6 dB step. */
        uint64_t decim_ratio1          : 6;  /**< [289:284] CIC decimation ratio for RACH FE1:

                                                                 _ 0x0, 0x1 = Bypass.

                                                                 _ 0x2-0x30 = Decimate [DECIM_RATIO1]-1 input samples of every [DECIM_RATIO1] samples. */
        uint64_t oversample_ratio1     : 2;  /**< [291:290] Oversampling ratio for RACH FE1:
                                                                 0x0 = Bypass.
                                                                 0x1 = 2x oversampling.
                                                                 0x2 = 4x oversampling.
                                                                 0x3 = Reserved. */
        uint64_t rach_freq_shift1      : 27; /**< [318:292] Frequency shift in RACH FE1. The frequency shift will be
                                                                 (-[RACH_FREQ_SHIFT1]*1.8310546875) Hz regardless of SCS.
                                                                 Note that the frequency of the input signal is shifted in the negative direction. */
        uint64_t rach_fe_enable1       : 1;  /**< [319:319] Enable RACH front-end 1. */
#endif /* Word 4 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 5 - Big Endian */
        uint64_t rach_fe_enable2       : 1;  /**< [383:383] Enable RACH front-end 2. */
        uint64_t rach_freq_shift2      : 27; /**< [382:356] Frequency shift in RACH FE2. The frequency shift will be
                                                                 (-[RACH_FREQ_SHIFT2]*1.8310546875) Hz regardless of SCS.
                                                                 Note that the frequency of the input signal is shifted in the negative direction. */
        uint64_t oversample_ratio2     : 2;  /**< [355:354] Oversampling ratio for RACH FE2:
                                                                 0x0 = Bypass.
                                                                 0x1 = 2x oversampling.
                                                                 0x2 = 4x oversampling.
                                                                 0x3 = Reserved. */
        uint64_t decim_ratio2          : 6;  /**< [353:348] CIC decimation ratio for RACH FE2:

                                                                 _ 0x0, 0x1 = Bypass.

                                                                 _ 0x2-0x30 = Decimate [DECIM_RATIO2]-1 input samples of every [DECIM_RATIO2] samples. */
        uint64_t output_level_atten2   : 5;  /**< [347:343] Output level attenuation for RACH FE2. Valid range is [0,26] which is equivalent
                                                                 to [0,-156] dB attenuation with 6 dB step. */
        uint64_t state_reset2          : 1;  /**< [342:342] RACH FE2 sample rate converter/TD-RSSI reset.
                                                                 0x0 =  Hold.
                                                                 0x1 =  Reset (set to 0). */
        uint64_t rach_wr_offset2       : 2;  /**< [341:340] Write offset for RACH FE 2. */
        uint64_t reserved_320_339      : 20;
#else /* Word 5 - Little Endian */
        uint64_t reserved_320_339      : 20;
        uint64_t rach_wr_offset2       : 2;  /**< [341:340] Write offset for RACH FE 2. */
        uint64_t state_reset2          : 1;  /**< [342:342] RACH FE2 sample rate converter/TD-RSSI reset.
                                                                 0x0 =  Hold.
                                                                 0x1 =  Reset (set to 0). */
        uint64_t output_level_atten2   : 5;  /**< [347:343] Output level attenuation for RACH FE2. Valid range is [0,26] which is equivalent
                                                                 to [0,-156] dB attenuation with 6 dB step. */
        uint64_t decim_ratio2          : 6;  /**< [353:348] CIC decimation ratio for RACH FE2:

                                                                 _ 0x0, 0x1 = Bypass.

                                                                 _ 0x2-0x30 = Decimate [DECIM_RATIO2]-1 input samples of every [DECIM_RATIO2] samples. */
        uint64_t oversample_ratio2     : 2;  /**< [355:354] Oversampling ratio for RACH FE2:
                                                                 0x0 = Bypass.
                                                                 0x1 = 2x oversampling.
                                                                 0x2 = 4x oversampling.
                                                                 0x3 = Reserved. */
        uint64_t rach_freq_shift2      : 27; /**< [382:356] Frequency shift in RACH FE2. The frequency shift will be
                                                                 (-[RACH_FREQ_SHIFT2]*1.8310546875) Hz regardless of SCS.
                                                                 Note that the frequency of the input signal is shifted in the negative direction. */
        uint64_t rach_fe_enable2       : 1;  /**< [383:383] Enable RACH front-end 2. */
#endif /* Word 5 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 6 - Big Endian */
        uint64_t rach_fe_enable3       : 1;  /**< [447:447] Enable RACH front-end 3. */
        uint64_t rach_freq_shift3      : 27; /**< [446:420] Frequency shift in RACH FE3. The frequency shift will be
                                                                 (-[RACH_FREQ_SHIFT0]*1.8310546875) Hz regardless of SCS.
                                                                 Note that the frequency of the input signal is shifted in the negative direction. */
        uint64_t oversample_ratio3     : 2;  /**< [419:418] Oversampling ratio for RACH FE3:
                                                                 0x0 = Bypass.
                                                                 0x1 = 2x oversampling.
                                                                 0x2 = 4x oversampling.
                                                                 0x3 = Reserved. */
        uint64_t decim_ratio3          : 6;  /**< [417:412] CIC decimation ratio for RACH FE3:

                                                                 _ 0x0, 0x1 = Bypass.

                                                                 _ 0x2-0x30 = Decimate [DECIM_RATIO3]-1 input samples of every [DECIM_RATIO3] samples. */
        uint64_t output_level_atten3   : 5;  /**< [411:407] Output level attenuation for RACH FE3. Valid range is [0,26] which is equivalent
                                                                 to [0,-156] dB attenuation with 6 dB step. */
        uint64_t state_reset3          : 1;  /**< [406:406] RACH FE3 sample rate converter/TD-RSSI reset.
                                                                 0x0 =  Hold.
                                                                 0x1 =  Reset (set to 0). */
        uint64_t rach_wr_offset3       : 2;  /**< [405:404] Write offset for RACH FE 3. */
        uint64_t reserved_384_403      : 20;
#else /* Word 6 - Little Endian */
        uint64_t reserved_384_403      : 20;
        uint64_t rach_wr_offset3       : 2;  /**< [405:404] Write offset for RACH FE 3. */
        uint64_t state_reset3          : 1;  /**< [406:406] RACH FE3 sample rate converter/TD-RSSI reset.
                                                                 0x0 =  Hold.
                                                                 0x1 =  Reset (set to 0). */
        uint64_t output_level_atten3   : 5;  /**< [411:407] Output level attenuation for RACH FE3. Valid range is [0,26] which is equivalent
                                                                 to [0,-156] dB attenuation with 6 dB step. */
        uint64_t decim_ratio3          : 6;  /**< [417:412] CIC decimation ratio for RACH FE3:

                                                                 _ 0x0, 0x1 = Bypass.

                                                                 _ 0x2-0x30 = Decimate [DECIM_RATIO3]-1 input samples of every [DECIM_RATIO3] samples. */
        uint64_t oversample_ratio3     : 2;  /**< [419:418] Oversampling ratio for RACH FE3:
                                                                 0x0 = Bypass.
                                                                 0x1 = 2x oversampling.
                                                                 0x2 = 4x oversampling.
                                                                 0x3 = Reserved. */
        uint64_t rach_freq_shift3      : 27; /**< [446:420] Frequency shift in RACH FE3. The frequency shift will be
                                                                 (-[RACH_FREQ_SHIFT0]*1.8310546875) Hz regardless of SCS.
                                                                 Note that the frequency of the input signal is shifted in the negative direction. */
        uint64_t rach_fe_enable3       : 1;  /**< [447:447] Enable RACH front-end 3. */
#endif /* Word 6 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 7 - Big Endian */
        uint64_t rach_fe_enable4       : 1;  /**< [511:511] Enable RACH front-end 4. */
        uint64_t rach_freq_shift4      : 27; /**< [510:484] Frequency shift in RACH FE4. The frequency shift will be
                                                                 (-[RACH_FREQ_SHIFT4]*1.8310546875) Hz regardless of SCS.
                                                                 Note that the frequency of the input signal is shifted in the negative direction. */
        uint64_t oversample_ratio4     : 2;  /**< [483:482] Oversampling ratio for RACH FE4:
                                                                 0x0 = Bypass.
                                                                 0x1 = 2x oversampling.
                                                                 0x2 = 4x oversampling.
                                                                 0x3 = Reserved. */
        uint64_t decim_ratio4          : 6;  /**< [481:476] CIC decimation ratio for RACH FE4:

                                                                 _ 0x0, 0x1 = Bypass.

                                                                 _ 0x2-0x30 = Decimate [DECIM_RATIO4]-1 input samples of every [DECIM_RATIO4] samples. */
        uint64_t output_level_atten4   : 5;  /**< [475:471] Output level attenuation for RACH FE4. Valid range is [0,26] which is equivalent
                                                                 to [0,-156] dB attenuation with 6 dB step. */
        uint64_t state_reset4          : 1;  /**< [470:470] RACH FE4 sample rate converter/TD-RSSI reset.
                                                                 0x0 =  Hold.
                                                                 0x1 =  Reset (set to 0). */
        uint64_t rach_wr_offset4       : 2;  /**< [469:468] Write offset for RACH FE 4. */
        uint64_t reserved_448_467      : 20;
#else /* Word 7 - Little Endian */
        uint64_t reserved_448_467      : 20;
        uint64_t rach_wr_offset4       : 2;  /**< [469:468] Write offset for RACH FE 4. */
        uint64_t state_reset4          : 1;  /**< [470:470] RACH FE4 sample rate converter/TD-RSSI reset.
                                                                 0x0 =  Hold.
                                                                 0x1 =  Reset (set to 0). */
        uint64_t output_level_atten4   : 5;  /**< [475:471] Output level attenuation for RACH FE4. Valid range is [0,26] which is equivalent
                                                                 to [0,-156] dB attenuation with 6 dB step. */
        uint64_t decim_ratio4          : 6;  /**< [481:476] CIC decimation ratio for RACH FE4:

                                                                 _ 0x0, 0x1 = Bypass.

                                                                 _ 0x2-0x30 = Decimate [DECIM_RATIO4]-1 input samples of every [DECIM_RATIO4] samples. */
        uint64_t oversample_ratio4     : 2;  /**< [483:482] Oversampling ratio for RACH FE4:
                                                                 0x0 = Bypass.
                                                                 0x1 = 2x oversampling.
                                                                 0x2 = 4x oversampling.
                                                                 0x3 = Reserved. */
        uint64_t rach_freq_shift4      : 27; /**< [510:484] Frequency shift in RACH FE4. The frequency shift will be
                                                                 (-[RACH_FREQ_SHIFT4]*1.8310546875) Hz regardless of SCS.
                                                                 Note that the frequency of the input signal is shifted in the negative direction. */
        uint64_t rach_fe_enable4       : 1;  /**< [511:511] Enable RACH front-end 4. */
#endif /* Word 7 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 8 - Big Endian */
        uint64_t rach_fe_enable5       : 1;  /**< [575:575] Enable RACH front-end 5. */
        uint64_t rach_freq_shift5      : 27; /**< [574:548] Frequency shift in RACH FE5. The frequency shift will be
                                                                 (-[RACH_FREQ_SHIFT5]*1.8310546875) Hz regardless of SCS.
                                                                 Note that the frequency of the input signal is shifted in the negative direction. */
        uint64_t oversample_ratio5     : 2;  /**< [547:546] Oversampling ratio for RACH FE5:
                                                                 0x0 = Bypass.
                                                                 0x1 = 2x oversampling.
                                                                 0x2 = 4x oversampling.
                                                                 0x3 = Reserved. */
        uint64_t decim_ratio5          : 6;  /**< [545:540] CIC decimation ratio for RACH FE5:

                                                                 _ 0x0, 0x1 = Bypass.

                                                                 _ 0x2-0x30 = Decimate [DECIM_RATIO5]-1 input samples of every [DECIM_RATIO5] samples. */
        uint64_t output_level_atten5   : 5;  /**< [539:535] Output level attenuation for RACH FE5. Valid range is [0,26] which is equivalent
                                                                 to [0,-156] dB attenuation with 6 dB step. */
        uint64_t state_reset5          : 1;  /**< [534:534] RACH FE5 sample rate converter/TD-RSSI reset.
                                                                 0x0 =  Hold.
                                                                 0x1 =  Reset (set to 0). */
        uint64_t rach_wr_offset5       : 2;  /**< [533:532] Write offset for RACH FE 5. */
        uint64_t reserved_512_531      : 20;
#else /* Word 8 - Little Endian */
        uint64_t reserved_512_531      : 20;
        uint64_t rach_wr_offset5       : 2;  /**< [533:532] Write offset for RACH FE 5. */
        uint64_t state_reset5          : 1;  /**< [534:534] RACH FE5 sample rate converter/TD-RSSI reset.
                                                                 0x0 =  Hold.
                                                                 0x1 =  Reset (set to 0). */
        uint64_t output_level_atten5   : 5;  /**< [539:535] Output level attenuation for RACH FE5. Valid range is [0,26] which is equivalent
                                                                 to [0,-156] dB attenuation with 6 dB step. */
        uint64_t decim_ratio5          : 6;  /**< [545:540] CIC decimation ratio for RACH FE5:

                                                                 _ 0x0, 0x1 = Bypass.

                                                                 _ 0x2-0x30 = Decimate [DECIM_RATIO5]-1 input samples of every [DECIM_RATIO5] samples. */
        uint64_t oversample_ratio5     : 2;  /**< [547:546] Oversampling ratio for RACH FE5:
                                                                 0x0 = Bypass.
                                                                 0x1 = 2x oversampling.
                                                                 0x2 = 4x oversampling.
                                                                 0x3 = Reserved. */
        uint64_t rach_freq_shift5      : 27; /**< [574:548] Frequency shift in RACH FE5. The frequency shift will be
                                                                 (-[RACH_FREQ_SHIFT5]*1.8310546875) Hz regardless of SCS.
                                                                 Note that the frequency of the input signal is shifted in the negative direction. */
        uint64_t rach_fe_enable5       : 1;  /**< [575:575] Enable RACH front-end 5. */
#endif /* Word 8 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 9 - Big Endian */
        uint64_t rach_fe_enable6       : 1;  /**< [639:639] Enable RACH front-end 6. */
        uint64_t rach_freq_shift6      : 27; /**< [638:612] Frequency shift in RACH FE6. The frequency shift will be
                                                                 (-[RACH_FREQ_SHIFT6]*1.8310546875) Hz regardless of SCS.
                                                                 Note that the frequency of the input signal is shifted in the negative direction. */
        uint64_t oversample_ratio6     : 2;  /**< [611:610] Oversampling ratio for RACH FE6:
                                                                 0x0 = Bypass.
                                                                 0x1 = 2x oversampling.
                                                                 0x2 = 4x oversampling.
                                                                 0x3 = Reserved. */
        uint64_t decim_ratio6          : 6;  /**< [609:604] CIC decimation ratio for RACH FE6:

                                                                 _ 0x0, 0x1 = Bypass.

                                                                 _ 0x2-0x30 = Decimate [DECIM_RATIO6]-1 input samples of every [DECIM_RATIO6] samples. */
        uint64_t output_level_atten6   : 5;  /**< [603:599] Output level attenuation for RACH FE6. Valid range is [0,26] which is equivalent
                                                                 to [0,-156] dB attenuation with 6 dB step. */
        uint64_t state_reset6          : 1;  /**< [598:598] RACH FE6 sample rate converter/TD-RSSI reset.
                                                                 0x0 =  Hold.
                                                                 0x1 =  Reset (set to 0). */
        uint64_t rach_wr_offset6       : 2;  /**< [597:596] Write offset for RACH FE 6. */
        uint64_t reserved_576_595      : 20;
#else /* Word 9 - Little Endian */
        uint64_t reserved_576_595      : 20;
        uint64_t rach_wr_offset6       : 2;  /**< [597:596] Write offset for RACH FE 6. */
        uint64_t state_reset6          : 1;  /**< [598:598] RACH FE6 sample rate converter/TD-RSSI reset.
                                                                 0x0 =  Hold.
                                                                 0x1 =  Reset (set to 0). */
        uint64_t output_level_atten6   : 5;  /**< [603:599] Output level attenuation for RACH FE6. Valid range is [0,26] which is equivalent
                                                                 to [0,-156] dB attenuation with 6 dB step. */
        uint64_t decim_ratio6          : 6;  /**< [609:604] CIC decimation ratio for RACH FE6:

                                                                 _ 0x0, 0x1 = Bypass.

                                                                 _ 0x2-0x30 = Decimate [DECIM_RATIO6]-1 input samples of every [DECIM_RATIO6] samples. */
        uint64_t oversample_ratio6     : 2;  /**< [611:610] Oversampling ratio for RACH FE6:
                                                                 0x0 = Bypass.
                                                                 0x1 = 2x oversampling.
                                                                 0x2 = 4x oversampling.
                                                                 0x3 = Reserved. */
        uint64_t rach_freq_shift6      : 27; /**< [638:612] Frequency shift in RACH FE6. The frequency shift will be
                                                                 (-[RACH_FREQ_SHIFT6]*1.8310546875) Hz regardless of SCS.
                                                                 Note that the frequency of the input signal is shifted in the negative direction. */
        uint64_t rach_fe_enable6       : 1;  /**< [639:639] Enable RACH front-end 6. */
#endif /* Word 9 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 10 - Big Endian */
        uint64_t rach_fe_enable7       : 1;  /**< [703:703] Enable RACH front-end 7. */
        uint64_t rach_freq_shift7      : 27; /**< [702:676] Frequency shift in RACH FE7. The frequency shift will be
                                                                 (-[RACH_FREQ_SHIFT7]*1.8310546875) Hz regardless of SCS.
                                                                 Note that the frequency of the input signal is shifted in the negative direction. */
        uint64_t oversample_ratio7     : 2;  /**< [675:674] Oversampling ratio for RACH FE7:
                                                                 0x0 = Bypass.
                                                                 0x1 = 2x oversampling.
                                                                 0x2 = 4x oversampling.
                                                                 0x3 = Reserved. */
        uint64_t decim_ratio7          : 6;  /**< [673:668] CIC decimation ratio for RACH FE7:

                                                                 _ 0x0, 0x1 = Bypass.

                                                                 _ 0x2-0x30 = Decimate [DECIM_RATIO7]-1 input samples of every [DECIM_RATIO7] samples. */
        uint64_t output_level_atten7   : 5;  /**< [667:663] Output level attenuation for RACH FE7. Valid range is [0,26] which is equivalent
                                                                 to [0,-156] dB attenuation with 6 dB step. */
        uint64_t state_reset7          : 1;  /**< [662:662] RACH FE7 sample rate converter/TD-RSSI reset.
                                                                 0x0 =  Hold.
                                                                 0x1 =  Reset (set to 0). */
        uint64_t rach_wr_offset7       : 2;  /**< [661:660] Write offset for RACH FE 7. */
        uint64_t reserved_640_659      : 20;
#else /* Word 10 - Little Endian */
        uint64_t reserved_640_659      : 20;
        uint64_t rach_wr_offset7       : 2;  /**< [661:660] Write offset for RACH FE 7. */
        uint64_t state_reset7          : 1;  /**< [662:662] RACH FE7 sample rate converter/TD-RSSI reset.
                                                                 0x0 =  Hold.
                                                                 0x1 =  Reset (set to 0). */
        uint64_t output_level_atten7   : 5;  /**< [667:663] Output level attenuation for RACH FE7. Valid range is [0,26] which is equivalent
                                                                 to [0,-156] dB attenuation with 6 dB step. */
        uint64_t decim_ratio7          : 6;  /**< [673:668] CIC decimation ratio for RACH FE7:

                                                                 _ 0x0, 0x1 = Bypass.

                                                                 _ 0x2-0x30 = Decimate [DECIM_RATIO7]-1 input samples of every [DECIM_RATIO7] samples. */
        uint64_t oversample_ratio7     : 2;  /**< [675:674] Oversampling ratio for RACH FE7:
                                                                 0x0 = Bypass.
                                                                 0x1 = 2x oversampling.
                                                                 0x2 = 4x oversampling.
                                                                 0x3 = Reserved. */
        uint64_t rach_freq_shift7      : 27; /**< [702:676] Frequency shift in RACH FE7. The frequency shift will be
                                                                 (-[RACH_FREQ_SHIFT7]*1.8310546875) Hz regardless of SCS.
                                                                 Note that the frequency of the input signal is shifted in the negative direction. */
        uint64_t rach_fe_enable7       : 1;  /**< [703:703] Enable RACH front-end 7. */
#endif /* Word 10 - End */
    } s;
    /* struct cavm_ulfe_normal_job_s_s cn; */
};

/**
 * Register (RSL) ulfe#_ab#_config0_data#
 *
 * ULFE_CONFIG0 Registers
 * This register block contains the ULFE job 0 configuration data.
 * Hardware loads the job configuration in these registers. Software should
 * never directly write to these registers.
 */
union cavm_ulfex_abx_config0_datax
{
    uint64_t u;
    struct cavm_ulfex_abx_config0_datax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t jcfg0                 : 64; /**< [ 63:  0](R/W) ULFE Job Configuration Word. */
#else /* Word 0 - Little Endian */
        uint64_t jcfg0                 : 64; /**< [ 63:  0](R/W) ULFE Job Configuration Word. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ulfex_abx_config0_datax_s cn; */
};
typedef union cavm_ulfex_abx_config0_datax cavm_ulfex_abx_config0_datax_t;

static inline uint64_t CAVM_ULFEX_ABX_CONFIG0_DATAX(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ULFEX_ABX_CONFIG0_DATAX(uint64_t a, uint64_t b, uint64_t c)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a==0) && (b<=1) && (c<=1)))
        return 0xc00840002000ll + 0x100000000ll * ((a) & 0x0) + 0x10000ll * ((b) & 0x1) + 8ll * ((c) & 0x1);
    __cavm_csr_fatal("ULFEX_ABX_CONFIG0_DATAX", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_ULFEX_ABX_CONFIG0_DATAX(a,b,c) cavm_ulfex_abx_config0_datax_t
#define bustype_CAVM_ULFEX_ABX_CONFIG0_DATAX(a,b,c) CSR_TYPE_RSL
#define basename_CAVM_ULFEX_ABX_CONFIG0_DATAX(a,b,c) "ULFEX_ABX_CONFIG0_DATAX"
#define device_bar_CAVM_ULFEX_ABX_CONFIG0_DATAX(a,b,c) 0x2 /* PF_BAR2 */
#define busnum_CAVM_ULFEX_ABX_CONFIG0_DATAX(a,b,c) (a)
#define arguments_CAVM_ULFEX_ABX_CONFIG0_DATAX(a,b,c) (a),(b),(c),-1

/**
 * Register (RSL) ulfe#_ab#_config1_data#
 *
 * ULFE_CONFIG1 Registers
 * This register block contains the ULFE job 1 configuration data.
 * Hardware loads the job configuration in these registers. Software should
 * never directly write to these registers.
 */
union cavm_ulfex_abx_config1_datax
{
    uint64_t u;
    struct cavm_ulfex_abx_config1_datax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t jcfg1                 : 64; /**< [ 63:  0](R/W) ULFE Job Configuration Word. */
#else /* Word 0 - Little Endian */
        uint64_t jcfg1                 : 64; /**< [ 63:  0](R/W) ULFE Job Configuration Word. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ulfex_abx_config1_datax_s cn; */
};
typedef union cavm_ulfex_abx_config1_datax cavm_ulfex_abx_config1_datax_t;

static inline uint64_t CAVM_ULFEX_ABX_CONFIG1_DATAX(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ULFEX_ABX_CONFIG1_DATAX(uint64_t a, uint64_t b, uint64_t c)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a==0) && (b<=1) && (c<=1)))
        return 0xc00840004000ll + 0x100000000ll * ((a) & 0x0) + 0x10000ll * ((b) & 0x1) + 8ll * ((c) & 0x1);
    __cavm_csr_fatal("ULFEX_ABX_CONFIG1_DATAX", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_ULFEX_ABX_CONFIG1_DATAX(a,b,c) cavm_ulfex_abx_config1_datax_t
#define bustype_CAVM_ULFEX_ABX_CONFIG1_DATAX(a,b,c) CSR_TYPE_RSL
#define basename_CAVM_ULFEX_ABX_CONFIG1_DATAX(a,b,c) "ULFEX_ABX_CONFIG1_DATAX"
#define device_bar_CAVM_ULFEX_ABX_CONFIG1_DATAX(a,b,c) 0x2 /* PF_BAR2 */
#define busnum_CAVM_ULFEX_ABX_CONFIG1_DATAX(a,b,c) (a)
#define arguments_CAVM_ULFEX_ABX_CONFIG1_DATAX(a,b,c) (a),(b),(c),-1

/**
 * Register (RSL) ulfe#_ab#_config2_data#
 *
 * ULFE_CONFIG2 Registers
 * This register block contains the ULFE job 2 configuration data.
 * Hardware loads the job configuration in these registers. Software should
 * never directly write to these registers.
 */
union cavm_ulfex_abx_config2_datax
{
    uint64_t u;
    struct cavm_ulfex_abx_config2_datax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t jcfg2                 : 64; /**< [ 63:  0](R/W) ULFE Job Configuration Word. */
#else /* Word 0 - Little Endian */
        uint64_t jcfg2                 : 64; /**< [ 63:  0](R/W) ULFE Job Configuration Word. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ulfex_abx_config2_datax_s cn; */
};
typedef union cavm_ulfex_abx_config2_datax cavm_ulfex_abx_config2_datax_t;

static inline uint64_t CAVM_ULFEX_ABX_CONFIG2_DATAX(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ULFEX_ABX_CONFIG2_DATAX(uint64_t a, uint64_t b, uint64_t c)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a==0) && (b<=1) && (c<=1)))
        return 0xc00840006000ll + 0x100000000ll * ((a) & 0x0) + 0x10000ll * ((b) & 0x1) + 8ll * ((c) & 0x1);
    __cavm_csr_fatal("ULFEX_ABX_CONFIG2_DATAX", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_ULFEX_ABX_CONFIG2_DATAX(a,b,c) cavm_ulfex_abx_config2_datax_t
#define bustype_CAVM_ULFEX_ABX_CONFIG2_DATAX(a,b,c) CSR_TYPE_RSL
#define basename_CAVM_ULFEX_ABX_CONFIG2_DATAX(a,b,c) "ULFEX_ABX_CONFIG2_DATAX"
#define device_bar_CAVM_ULFEX_ABX_CONFIG2_DATAX(a,b,c) 0x2 /* PF_BAR2 */
#define busnum_CAVM_ULFEX_ABX_CONFIG2_DATAX(a,b,c) (a)
#define arguments_CAVM_ULFEX_ABX_CONFIG2_DATAX(a,b,c) (a),(b),(c),-1

/**
 * Register (RSL) ulfe#_ab#_control
 *
 * ULFE_CONTROL Register
 * This register is used to start ULFE HAB processing.
 */
union cavm_ulfex_abx_control
{
    uint64_t u;
    struct cavm_ulfex_abx_control_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t jobid2                : 16; /**< [ 63: 48](R/W/H) Job ID2. */
        uint64_t jobid1                : 16; /**< [ 47: 32](R/W/H) Job ID1. */
        uint64_t jobid0                : 16; /**< [ 31: 16](R/W/H) Job ID0. */
        uint64_t reserved_3_15         : 13;
        uint64_t start2                : 1;  /**< [  2:  2](R/W/H) A write of 1 will start the HAB using the configuration in
                                                                 ULFE_CONFIG2_DATA(). This bit auto-clears, and it is ignored if the
                                                                 HAB status is busy (ULFE_STATUS[STATUS2] = 1). */
        uint64_t start1                : 1;  /**< [  1:  1](R/W/H) A write of 1 will start the HAB using the configuration in
                                                                 ULFE_CONFIG1_DATA(). This bit auto-clears, and it is ignored if the
                                                                 HAB status is busy (ULFE_STATUS[STATUS1] = 1). */
        uint64_t start0                : 1;  /**< [  0:  0](R/W/H) A write of 1 will start the HAB using the configuration in
                                                                 ULFE_CONFIG0_DATA(). This bit auto-clears, and it is ignored if the
                                                                 HAB status is busy (ULFE_STATUS[STATUS0] = 1). */
#else /* Word 0 - Little Endian */
        uint64_t start0                : 1;  /**< [  0:  0](R/W/H) A write of 1 will start the HAB using the configuration in
                                                                 ULFE_CONFIG0_DATA(). This bit auto-clears, and it is ignored if the
                                                                 HAB status is busy (ULFE_STATUS[STATUS0] = 1). */
        uint64_t start1                : 1;  /**< [  1:  1](R/W/H) A write of 1 will start the HAB using the configuration in
                                                                 ULFE_CONFIG1_DATA(). This bit auto-clears, and it is ignored if the
                                                                 HAB status is busy (ULFE_STATUS[STATUS1] = 1). */
        uint64_t start2                : 1;  /**< [  2:  2](R/W/H) A write of 1 will start the HAB using the configuration in
                                                                 ULFE_CONFIG2_DATA(). This bit auto-clears, and it is ignored if the
                                                                 HAB status is busy (ULFE_STATUS[STATUS2] = 1). */
        uint64_t reserved_3_15         : 13;
        uint64_t jobid0                : 16; /**< [ 31: 16](R/W/H) Job ID0. */
        uint64_t jobid1                : 16; /**< [ 47: 32](R/W/H) Job ID1. */
        uint64_t jobid2                : 16; /**< [ 63: 48](R/W/H) Job ID2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ulfex_abx_control_s cn; */
};
typedef union cavm_ulfex_abx_control cavm_ulfex_abx_control_t;

static inline uint64_t CAVM_ULFEX_ABX_CONTROL(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ULFEX_ABX_CONTROL(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a==0) && (b<=1)))
        return 0xc00840000000ll + 0x100000000ll * ((a) & 0x0) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("ULFEX_ABX_CONTROL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_ULFEX_ABX_CONTROL(a,b) cavm_ulfex_abx_control_t
#define bustype_CAVM_ULFEX_ABX_CONTROL(a,b) CSR_TYPE_RSL
#define basename_CAVM_ULFEX_ABX_CONTROL(a,b) "ULFEX_ABX_CONTROL"
#define device_bar_CAVM_ULFEX_ABX_CONTROL(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_ULFEX_ABX_CONTROL(a,b) (a)
#define arguments_CAVM_ULFEX_ABX_CONTROL(a,b) (a),(b),-1,-1

/**
 * Register (RSL) ulfe#_ab#_error_enable0
 *
 * ULFE Error Enable 0 Register
 * This register enables error reporting for ULFE_ERROR_SOURCE0 register.
 */
union cavm_ulfex_abx_error_enable0
{
    uint64_t u;
    struct cavm_ulfex_abx_error_enable0_s
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
    /* struct cavm_ulfex_abx_error_enable0_s cn; */
};
typedef union cavm_ulfex_abx_error_enable0 cavm_ulfex_abx_error_enable0_t;

static inline uint64_t CAVM_ULFEX_ABX_ERROR_ENABLE0(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ULFEX_ABX_ERROR_ENABLE0(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a==0) && (b<=1)))
        return 0xc00840000040ll + 0x100000000ll * ((a) & 0x0) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("ULFEX_ABX_ERROR_ENABLE0", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_ULFEX_ABX_ERROR_ENABLE0(a,b) cavm_ulfex_abx_error_enable0_t
#define bustype_CAVM_ULFEX_ABX_ERROR_ENABLE0(a,b) CSR_TYPE_RSL
#define basename_CAVM_ULFEX_ABX_ERROR_ENABLE0(a,b) "ULFEX_ABX_ERROR_ENABLE0"
#define device_bar_CAVM_ULFEX_ABX_ERROR_ENABLE0(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_ULFEX_ABX_ERROR_ENABLE0(a,b) (a)
#define arguments_CAVM_ULFEX_ABX_ERROR_ENABLE0(a,b) (a),(b),-1,-1

/**
 * Register (RSL) ulfe#_ab#_error_enable1
 *
 * ULFE Error Enable Register 1
 * This register enables report particular HAB errors.
 */
union cavm_ulfex_abx_error_enable1
{
    uint64_t u;
    struct cavm_ulfex_abx_error_enable1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t e48                   : 16; /**< [ 63: 48](R/W) Reserved. */
        uint64_t e47                   : 1;  /**< [ 47: 47](R/W) Reserved. */
        uint64_t e46                   : 1;  /**< [ 46: 46](R/W) Illegal rach7 output_level_atten. */
        uint64_t e45                   : 1;  /**< [ 45: 45](R/W) Illegal rach7 oversample_ratio. */
        uint64_t e44                   : 1;  /**< [ 44: 44](R/W) Illegal rach7 decimation. */
        uint64_t e43                   : 1;  /**< [ 43: 43](R/W) Reserved. */
        uint64_t e42                   : 1;  /**< [ 42: 42](R/W) Illegal rach6 output_level_atten. */
        uint64_t e41                   : 1;  /**< [ 41: 41](R/W) Illegal rach6 oversample_ratio. */
        uint64_t e40                   : 1;  /**< [ 40: 40](R/W) Illegal rach6 decimation. */
        uint64_t e39                   : 1;  /**< [ 39: 39](R/W) Reserved. */
        uint64_t e38                   : 1;  /**< [ 38: 38](R/W) Illegal rach5 output_level_atten. */
        uint64_t e37                   : 1;  /**< [ 37: 37](R/W) Illegal rach5 oversample_ratio. */
        uint64_t e36                   : 1;  /**< [ 36: 36](R/W) Illegal rach5 decimation. */
        uint64_t e35                   : 1;  /**< [ 35: 35](R/W) Reserved. */
        uint64_t e34                   : 1;  /**< [ 34: 34](RO/H) Illegal rach4 output_level_atten. */
        uint64_t e33                   : 1;  /**< [ 33: 33](R/W) Illegal rach4 oversample_ratio. */
        uint64_t e32                   : 1;  /**< [ 32: 32](R/W) Illegal rach4 decimation. */
        uint64_t e31                   : 1;  /**< [ 31: 31](R/W) Reserved. */
        uint64_t e30                   : 1;  /**< [ 30: 30](R/W) Illegal rach3 output_level_atten. */
        uint64_t e29                   : 1;  /**< [ 29: 29](R/W) Illegal rach3 oversample_ratio. */
        uint64_t e28                   : 1;  /**< [ 28: 28](R/W) Illegal rach3 decimation. */
        uint64_t e27                   : 1;  /**< [ 27: 27](R/W) Reserved. */
        uint64_t e26                   : 1;  /**< [ 26: 26](R/W) Illegal rach2 output_level_atten. */
        uint64_t e25                   : 1;  /**< [ 25: 25](R/W) Illegal rach2 oversample_ratio. */
        uint64_t e24                   : 1;  /**< [ 24: 24](R/W) Illegal rach2 decimation. */
        uint64_t e23                   : 1;  /**< [ 23: 23](R/W) Reserved. */
        uint64_t e22                   : 1;  /**< [ 22: 22](R/W) Illegal rach1 output_level_atten. */
        uint64_t e21                   : 1;  /**< [ 21: 21](R/W) Illegal rach1 oversample_ratio. */
        uint64_t e20                   : 1;  /**< [ 20: 20](R/W) Illegal rach1 decimation. */
        uint64_t e19                   : 1;  /**< [ 19: 19](R/W) Reserved. */
        uint64_t e18                   : 1;  /**< [ 18: 18](R/W) Illegal rach0 output_level_atten. */
        uint64_t e17                   : 1;  /**< [ 17: 17](R/W) Illegal rach0 oversample_ratio. */
        uint64_t e16                   : 1;  /**< [ 16: 16](R/W) Illegal rach0 decimation. */
        uint64_t e7                    : 9;  /**< [ 15:  7](R/W) Reserved. */
        uint64_t e6                    : 1;  /**< [  6:  6](R/W) Illegal cprm_offset. */
        uint64_t e5                    : 1;  /**< [  5:  5](R/W) Reserved. */
        uint64_t e4                    : 1;  /**< [  4:  4](R/W) Illegal cprm_offset. */
        uint64_t e3                    : 1;  /**< [  3:  3](R/W) Illegal num_rb. */
        uint64_t e2                    : 1;  /**< [  2:  2](R/W) Illegal cp_size. */
        uint64_t e1                    : 1;  /**< [  1:  1](R/W) Illegal scs. */
        uint64_t e0                    : 1;  /**< [  0:  0](R/W) Illegal ant_idx. */
#else /* Word 0 - Little Endian */
        uint64_t e0                    : 1;  /**< [  0:  0](R/W) Illegal ant_idx. */
        uint64_t e1                    : 1;  /**< [  1:  1](R/W) Illegal scs. */
        uint64_t e2                    : 1;  /**< [  2:  2](R/W) Illegal cp_size. */
        uint64_t e3                    : 1;  /**< [  3:  3](R/W) Illegal num_rb. */
        uint64_t e4                    : 1;  /**< [  4:  4](R/W) Illegal cprm_offset. */
        uint64_t e5                    : 1;  /**< [  5:  5](R/W) Reserved. */
        uint64_t e6                    : 1;  /**< [  6:  6](R/W) Illegal cprm_offset. */
        uint64_t e7                    : 9;  /**< [ 15:  7](R/W) Reserved. */
        uint64_t e16                   : 1;  /**< [ 16: 16](R/W) Illegal rach0 decimation. */
        uint64_t e17                   : 1;  /**< [ 17: 17](R/W) Illegal rach0 oversample_ratio. */
        uint64_t e18                   : 1;  /**< [ 18: 18](R/W) Illegal rach0 output_level_atten. */
        uint64_t e19                   : 1;  /**< [ 19: 19](R/W) Reserved. */
        uint64_t e20                   : 1;  /**< [ 20: 20](R/W) Illegal rach1 decimation. */
        uint64_t e21                   : 1;  /**< [ 21: 21](R/W) Illegal rach1 oversample_ratio. */
        uint64_t e22                   : 1;  /**< [ 22: 22](R/W) Illegal rach1 output_level_atten. */
        uint64_t e23                   : 1;  /**< [ 23: 23](R/W) Reserved. */
        uint64_t e24                   : 1;  /**< [ 24: 24](R/W) Illegal rach2 decimation. */
        uint64_t e25                   : 1;  /**< [ 25: 25](R/W) Illegal rach2 oversample_ratio. */
        uint64_t e26                   : 1;  /**< [ 26: 26](R/W) Illegal rach2 output_level_atten. */
        uint64_t e27                   : 1;  /**< [ 27: 27](R/W) Reserved. */
        uint64_t e28                   : 1;  /**< [ 28: 28](R/W) Illegal rach3 decimation. */
        uint64_t e29                   : 1;  /**< [ 29: 29](R/W) Illegal rach3 oversample_ratio. */
        uint64_t e30                   : 1;  /**< [ 30: 30](R/W) Illegal rach3 output_level_atten. */
        uint64_t e31                   : 1;  /**< [ 31: 31](R/W) Reserved. */
        uint64_t e32                   : 1;  /**< [ 32: 32](R/W) Illegal rach4 decimation. */
        uint64_t e33                   : 1;  /**< [ 33: 33](R/W) Illegal rach4 oversample_ratio. */
        uint64_t e34                   : 1;  /**< [ 34: 34](RO/H) Illegal rach4 output_level_atten. */
        uint64_t e35                   : 1;  /**< [ 35: 35](R/W) Reserved. */
        uint64_t e36                   : 1;  /**< [ 36: 36](R/W) Illegal rach5 decimation. */
        uint64_t e37                   : 1;  /**< [ 37: 37](R/W) Illegal rach5 oversample_ratio. */
        uint64_t e38                   : 1;  /**< [ 38: 38](R/W) Illegal rach5 output_level_atten. */
        uint64_t e39                   : 1;  /**< [ 39: 39](R/W) Reserved. */
        uint64_t e40                   : 1;  /**< [ 40: 40](R/W) Illegal rach6 decimation. */
        uint64_t e41                   : 1;  /**< [ 41: 41](R/W) Illegal rach6 oversample_ratio. */
        uint64_t e42                   : 1;  /**< [ 42: 42](R/W) Illegal rach6 output_level_atten. */
        uint64_t e43                   : 1;  /**< [ 43: 43](R/W) Reserved. */
        uint64_t e44                   : 1;  /**< [ 44: 44](R/W) Illegal rach7 decimation. */
        uint64_t e45                   : 1;  /**< [ 45: 45](R/W) Illegal rach7 oversample_ratio. */
        uint64_t e46                   : 1;  /**< [ 46: 46](R/W) Illegal rach7 output_level_atten. */
        uint64_t e47                   : 1;  /**< [ 47: 47](R/W) Reserved. */
        uint64_t e48                   : 16; /**< [ 63: 48](R/W) Reserved. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ulfex_abx_error_enable1_s cn; */
};
typedef union cavm_ulfex_abx_error_enable1 cavm_ulfex_abx_error_enable1_t;

static inline uint64_t CAVM_ULFEX_ABX_ERROR_ENABLE1(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ULFEX_ABX_ERROR_ENABLE1(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a==0) && (b<=1)))
        return 0xc00840000048ll + 0x100000000ll * ((a) & 0x0) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("ULFEX_ABX_ERROR_ENABLE1", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_ULFEX_ABX_ERROR_ENABLE1(a,b) cavm_ulfex_abx_error_enable1_t
#define bustype_CAVM_ULFEX_ABX_ERROR_ENABLE1(a,b) CSR_TYPE_RSL
#define basename_CAVM_ULFEX_ABX_ERROR_ENABLE1(a,b) "ULFEX_ABX_ERROR_ENABLE1"
#define device_bar_CAVM_ULFEX_ABX_ERROR_ENABLE1(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_ULFEX_ABX_ERROR_ENABLE1(a,b) (a)
#define arguments_CAVM_ULFEX_ABX_ERROR_ENABLE1(a,b) (a),(b),-1,-1

/**
 * Register (RSL) ulfe#_ab#_error_source0
 *
 * ULFE Error Source Register 0
 * This register reports the source of read DMA overflow/underflow errors.
 */
union cavm_ulfex_abx_error_source0
{
    uint64_t u;
    struct cavm_ulfex_abx_error_source0_s
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
    /* struct cavm_ulfex_abx_error_source0_s cn; */
};
typedef union cavm_ulfex_abx_error_source0 cavm_ulfex_abx_error_source0_t;

static inline uint64_t CAVM_ULFEX_ABX_ERROR_SOURCE0(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ULFEX_ABX_ERROR_SOURCE0(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a==0) && (b<=1)))
        return 0xc00840000030ll + 0x100000000ll * ((a) & 0x0) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("ULFEX_ABX_ERROR_SOURCE0", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_ULFEX_ABX_ERROR_SOURCE0(a,b) cavm_ulfex_abx_error_source0_t
#define bustype_CAVM_ULFEX_ABX_ERROR_SOURCE0(a,b) CSR_TYPE_RSL
#define basename_CAVM_ULFEX_ABX_ERROR_SOURCE0(a,b) "ULFEX_ABX_ERROR_SOURCE0"
#define device_bar_CAVM_ULFEX_ABX_ERROR_SOURCE0(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_ULFEX_ABX_ERROR_SOURCE0(a,b) (a)
#define arguments_CAVM_ULFEX_ABX_ERROR_SOURCE0(a,b) (a),(b),-1,-1

/**
 * Register (RSL) ulfe#_ab#_error_source1
 *
 * ULFE Error Source Register 1
 * This register reports the source of HAB specific errors.
 */
union cavm_ulfex_abx_error_source1
{
    uint64_t u;
    struct cavm_ulfex_abx_error_source1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_47_63        : 17;
        uint64_t e46                   : 1;  /**< [ 46: 46](RO/H) Illegal rach7 output_level_atten. */
        uint64_t e45                   : 1;  /**< [ 45: 45](RO/H) Illegal rach7 oversample_ratio. */
        uint64_t e44                   : 1;  /**< [ 44: 44](RO/H) Illegal rach7 decimation. */
        uint64_t reserved_43           : 1;
        uint64_t e42                   : 1;  /**< [ 42: 42](RO/H) Illegal rach6 output_level_atten. */
        uint64_t e41                   : 1;  /**< [ 41: 41](RO/H) Illegal rach6 oversample_ratio. */
        uint64_t e40                   : 1;  /**< [ 40: 40](RO/H) Illegal rach6 decimation. */
        uint64_t reserved_39           : 1;
        uint64_t e38                   : 1;  /**< [ 38: 38](RO/H) Illegal rach5 output_level_atten. */
        uint64_t e37                   : 1;  /**< [ 37: 37](RO/H) Illegal rach5 oversample_ratio. */
        uint64_t e36                   : 1;  /**< [ 36: 36](RO/H) Illegal rach5 decimation. */
        uint64_t reserved_35           : 1;
        uint64_t e34                   : 1;  /**< [ 34: 34](RO/H) Illegal rach4 output_level_atten. */
        uint64_t e33                   : 1;  /**< [ 33: 33](RO/H) Illegal rach4 oversample_ratio. */
        uint64_t e32                   : 1;  /**< [ 32: 32](RO/H) Illegal rach4 decimation. */
        uint64_t reserved_31           : 1;
        uint64_t e30                   : 1;  /**< [ 30: 30](RO/H) Illegal rach3 output_level_atten. */
        uint64_t e29                   : 1;  /**< [ 29: 29](RO/H) Illegal rach3 oversample_ratio. */
        uint64_t e28                   : 1;  /**< [ 28: 28](RO/H) Illegal rach3 decimation. */
        uint64_t reserved_27           : 1;
        uint64_t e26                   : 1;  /**< [ 26: 26](RO/H) Illegal rach2 output_level_atten. */
        uint64_t e25                   : 1;  /**< [ 25: 25](RO/H) Illegal rach2 oversample_ratio. */
        uint64_t e24                   : 1;  /**< [ 24: 24](RO/H) Illegal rach2 decimation. */
        uint64_t reserved_23           : 1;
        uint64_t e22                   : 1;  /**< [ 22: 22](RO/H) Illegal rach1 output_level_atten. */
        uint64_t e21                   : 1;  /**< [ 21: 21](RO/H) Illegal rach1 oversample_ratio. */
        uint64_t e20                   : 1;  /**< [ 20: 20](RO/H) Illegal rach1 decimation. */
        uint64_t reserved_19           : 1;
        uint64_t e18                   : 1;  /**< [ 18: 18](RO/H) Illegal rach0 output_level_atten. */
        uint64_t e17                   : 1;  /**< [ 17: 17](RO/H) Illegal rach0 oversample_ratio. */
        uint64_t e16                   : 1;  /**< [ 16: 16](RO/H) Illegal rach0 decimation. */
        uint64_t reserved_9_15         : 7;
        uint64_t e8                    : 1;  /**< [  8:  8](RO/H) Reserved. */
        uint64_t e7                    : 1;  /**< [  7:  7](RO/H) Reserved. */
        uint64_t e6                    : 1;  /**< [  6:  6](RO/H) Illegal cprm_offset. */
        uint64_t e5                    : 1;  /**< [  5:  5](RO/H) Reserved. */
        uint64_t e4                    : 1;  /**< [  4:  4](RO/H) Illegal cprm_offset. */
        uint64_t e3                    : 1;  /**< [  3:  3](RO/H) Illegal num_rb. */
        uint64_t e2                    : 1;  /**< [  2:  2](RO/H) Illegal cp_size. */
        uint64_t e1                    : 1;  /**< [  1:  1](RO/H) Illegal scs. */
        uint64_t e0                    : 1;  /**< [  0:  0](RO/H) Illegal ant_idx. */
#else /* Word 0 - Little Endian */
        uint64_t e0                    : 1;  /**< [  0:  0](RO/H) Illegal ant_idx. */
        uint64_t e1                    : 1;  /**< [  1:  1](RO/H) Illegal scs. */
        uint64_t e2                    : 1;  /**< [  2:  2](RO/H) Illegal cp_size. */
        uint64_t e3                    : 1;  /**< [  3:  3](RO/H) Illegal num_rb. */
        uint64_t e4                    : 1;  /**< [  4:  4](RO/H) Illegal cprm_offset. */
        uint64_t e5                    : 1;  /**< [  5:  5](RO/H) Reserved. */
        uint64_t e6                    : 1;  /**< [  6:  6](RO/H) Illegal cprm_offset. */
        uint64_t e7                    : 1;  /**< [  7:  7](RO/H) Reserved. */
        uint64_t e8                    : 1;  /**< [  8:  8](RO/H) Reserved. */
        uint64_t reserved_9_15         : 7;
        uint64_t e16                   : 1;  /**< [ 16: 16](RO/H) Illegal rach0 decimation. */
        uint64_t e17                   : 1;  /**< [ 17: 17](RO/H) Illegal rach0 oversample_ratio. */
        uint64_t e18                   : 1;  /**< [ 18: 18](RO/H) Illegal rach0 output_level_atten. */
        uint64_t reserved_19           : 1;
        uint64_t e20                   : 1;  /**< [ 20: 20](RO/H) Illegal rach1 decimation. */
        uint64_t e21                   : 1;  /**< [ 21: 21](RO/H) Illegal rach1 oversample_ratio. */
        uint64_t e22                   : 1;  /**< [ 22: 22](RO/H) Illegal rach1 output_level_atten. */
        uint64_t reserved_23           : 1;
        uint64_t e24                   : 1;  /**< [ 24: 24](RO/H) Illegal rach2 decimation. */
        uint64_t e25                   : 1;  /**< [ 25: 25](RO/H) Illegal rach2 oversample_ratio. */
        uint64_t e26                   : 1;  /**< [ 26: 26](RO/H) Illegal rach2 output_level_atten. */
        uint64_t reserved_27           : 1;
        uint64_t e28                   : 1;  /**< [ 28: 28](RO/H) Illegal rach3 decimation. */
        uint64_t e29                   : 1;  /**< [ 29: 29](RO/H) Illegal rach3 oversample_ratio. */
        uint64_t e30                   : 1;  /**< [ 30: 30](RO/H) Illegal rach3 output_level_atten. */
        uint64_t reserved_31           : 1;
        uint64_t e32                   : 1;  /**< [ 32: 32](RO/H) Illegal rach4 decimation. */
        uint64_t e33                   : 1;  /**< [ 33: 33](RO/H) Illegal rach4 oversample_ratio. */
        uint64_t e34                   : 1;  /**< [ 34: 34](RO/H) Illegal rach4 output_level_atten. */
        uint64_t reserved_35           : 1;
        uint64_t e36                   : 1;  /**< [ 36: 36](RO/H) Illegal rach5 decimation. */
        uint64_t e37                   : 1;  /**< [ 37: 37](RO/H) Illegal rach5 oversample_ratio. */
        uint64_t e38                   : 1;  /**< [ 38: 38](RO/H) Illegal rach5 output_level_atten. */
        uint64_t reserved_39           : 1;
        uint64_t e40                   : 1;  /**< [ 40: 40](RO/H) Illegal rach6 decimation. */
        uint64_t e41                   : 1;  /**< [ 41: 41](RO/H) Illegal rach6 oversample_ratio. */
        uint64_t e42                   : 1;  /**< [ 42: 42](RO/H) Illegal rach6 output_level_atten. */
        uint64_t reserved_43           : 1;
        uint64_t e44                   : 1;  /**< [ 44: 44](RO/H) Illegal rach7 decimation. */
        uint64_t e45                   : 1;  /**< [ 45: 45](RO/H) Illegal rach7 oversample_ratio. */
        uint64_t e46                   : 1;  /**< [ 46: 46](RO/H) Illegal rach7 output_level_atten. */
        uint64_t reserved_47_63        : 17;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ulfex_abx_error_source1_s cn; */
};
typedef union cavm_ulfex_abx_error_source1 cavm_ulfex_abx_error_source1_t;

static inline uint64_t CAVM_ULFEX_ABX_ERROR_SOURCE1(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ULFEX_ABX_ERROR_SOURCE1(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a==0) && (b<=1)))
        return 0xc00840000038ll + 0x100000000ll * ((a) & 0x0) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("ULFEX_ABX_ERROR_SOURCE1", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_ULFEX_ABX_ERROR_SOURCE1(a,b) cavm_ulfex_abx_error_source1_t
#define bustype_CAVM_ULFEX_ABX_ERROR_SOURCE1(a,b) CSR_TYPE_RSL
#define basename_CAVM_ULFEX_ABX_ERROR_SOURCE1(a,b) "ULFEX_ABX_ERROR_SOURCE1"
#define device_bar_CAVM_ULFEX_ABX_ERROR_SOURCE1(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_ULFEX_ABX_ERROR_SOURCE1(a,b) (a)
#define arguments_CAVM_ULFEX_ABX_ERROR_SOURCE1(a,b) (a),(b),-1,-1

/**
 * Register (RSL) ulfe#_ab#_status
 *
 * ULFE Status Register
 * ULFE Status Register.
 */
union cavm_ulfex_abx_status
{
    uint64_t u;
    struct cavm_ulfex_abx_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t ready                 : 1;  /**< [  4:  4](RO/H) When set, indicates the ULFE HAB is ready to receive next job. */
        uint64_t reserved_3            : 1;
        uint64_t status2               : 1;  /**< [  2:  2](RO/H) When set, indicates the ULFE HAB is busy processing a job. */
        uint64_t status1               : 1;  /**< [  1:  1](RO/H) When set, indicates the ULFE HAB is busy processing a job. */
        uint64_t status0               : 1;  /**< [  0:  0](RO/H) When set, indicates the ULFE HAB is busy processing a job. */
#else /* Word 0 - Little Endian */
        uint64_t status0               : 1;  /**< [  0:  0](RO/H) When set, indicates the ULFE HAB is busy processing a job. */
        uint64_t status1               : 1;  /**< [  1:  1](RO/H) When set, indicates the ULFE HAB is busy processing a job. */
        uint64_t status2               : 1;  /**< [  2:  2](RO/H) When set, indicates the ULFE HAB is busy processing a job. */
        uint64_t reserved_3            : 1;
        uint64_t ready                 : 1;  /**< [  4:  4](RO/H) When set, indicates the ULFE HAB is ready to receive next job. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ulfex_abx_status_s cn; */
};
typedef union cavm_ulfex_abx_status cavm_ulfex_abx_status_t;

static inline uint64_t CAVM_ULFEX_ABX_STATUS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ULFEX_ABX_STATUS(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a==0) && (b<=1)))
        return 0xc00840000018ll + 0x100000000ll * ((a) & 0x0) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("ULFEX_ABX_STATUS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_ULFEX_ABX_STATUS(a,b) cavm_ulfex_abx_status_t
#define bustype_CAVM_ULFEX_ABX_STATUS(a,b) CSR_TYPE_RSL
#define basename_CAVM_ULFEX_ABX_STATUS(a,b) "ULFEX_ABX_STATUS"
#define device_bar_CAVM_ULFEX_ABX_STATUS(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_ULFEX_ABX_STATUS(a,b) (a)
#define arguments_CAVM_ULFEX_ABX_STATUS(a,b) (a),(b),-1,-1

#endif /* __CAVM_CSRS_ULFEN_H__ */
