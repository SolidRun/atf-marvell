#ifndef __CAVM_CSRS_BMUL_H__
#define __CAVM_CSRS_BMUL_H__
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
 * BMUL.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Register (RSL) bmul#_bf_bundle_offset
 *
 * BMUL Bf Bundle Offset Register
 */
union cavm_bmulx_bf_bundle_offset
{
    uint64_t u;
    struct cavm_bmulx_bf_bundle_offset_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t boffset_incr          : 8;  /**< [ 15:  8](R/W) Bundle offset increment to be used in bundle control. It will tell the step size
                                                                 how much offset is incremented within one change. */
        uint64_t bf_index_offset       : 8;  /**< [  7:  0](R/W) To be used as extra offset possibility if needed, will be multiplied by 2 in the IP. */
#else /* Word 0 - Little Endian */
        uint64_t bf_index_offset       : 8;  /**< [  7:  0](R/W) To be used as extra offset possibility if needed, will be multiplied by 2 in the IP. */
        uint64_t boffset_incr          : 8;  /**< [ 15:  8](R/W) Bundle offset increment to be used in bundle control. It will tell the step size
                                                                 how much offset is incremented within one change. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bmulx_bf_bundle_offset_s cn; */
};
typedef union cavm_bmulx_bf_bundle_offset cavm_bmulx_bf_bundle_offset_t;

static inline uint64_t CAVM_BMULX_BF_BUNDLE_OFFSET(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BMULX_BF_BUNDLE_OFFSET(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=3))
        return 0x87e041602038ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("BMULX_BF_BUNDLE_OFFSET", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BMULX_BF_BUNDLE_OFFSET(a) cavm_bmulx_bf_bundle_offset_t
#define bustype_CAVM_BMULX_BF_BUNDLE_OFFSET(a) CSR_TYPE_RSL
#define basename_CAVM_BMULX_BF_BUNDLE_OFFSET(a) "BMULX_BF_BUNDLE_OFFSET"
#define busnum_CAVM_BMULX_BF_BUNDLE_OFFSET(a) (a)
#define arguments_CAVM_BMULX_BF_BUNDLE_OFFSET(a) (a),-1,-1,-1

/**
 * Register (RSL) bmul#_bypass
 *
 * BMUL Bypass Register
 */
union cavm_bmulx_bypass
{
    uint64_t u;
    struct cavm_bmulx_bypass_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t bypass                : 1;  /**< [  0:  0](R/W) To activate bypass mode( = '1'). */
#else /* Word 0 - Little Endian */
        uint64_t bypass                : 1;  /**< [  0:  0](R/W) To activate bypass mode( = '1'). */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bmulx_bypass_s cn; */
};
typedef union cavm_bmulx_bypass cavm_bmulx_bypass_t;

static inline uint64_t CAVM_BMULX_BYPASS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BMULX_BYPASS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=3))
        return 0x87e041602030ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("BMULX_BYPASS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BMULX_BYPASS(a) cavm_bmulx_bypass_t
#define bustype_CAVM_BMULX_BYPASS(a) CSR_TYPE_RSL
#define basename_CAVM_BMULX_BYPASS(a) "BMULX_BYPASS"
#define busnum_CAVM_BMULX_BYPASS(a) (a)
#define arguments_CAVM_BMULX_BYPASS(a) (a),-1,-1,-1

/**
 * Register (RSL) bmul#_cfg_fatal_job_form1
 *
 * BMUL Cfg Fatal Job Form1 Register
 * If the sync is lost then the data in that header is also lost and bf_mul cannot
 * locate the lost header, it can only store information from the header last seen to
 * help locating the error in configuration.
 */
union cavm_bmulx_cfg_fatal_job_form1
{
    uint64_t u;
    struct cavm_bmulx_cfg_fatal_job_form1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t job_id_magic          : 16; /**< [ 63: 48](R/W1C) The first jobID  that has problems.
                                                                 Software will reset this by writing the register. */
        uint64_t correct_headers       : 16; /**< [ 47: 32](R/W1C) How many headers are ok before the sync is lost.
                                                                 Software will reset this by writing the register. */
        uint64_t reserved_16_31        : 16;
        uint64_t fat_magicword         : 16; /**< [ 15:  0](R/W1C) "The #SxC seen in last valid header.
                                                                 Software will reset this by writing the register." */
#else /* Word 0 - Little Endian */
        uint64_t fat_magicword         : 16; /**< [ 15:  0](R/W1C) "The #SxC seen in last valid header.
                                                                 Software will reset this by writing the register." */
        uint64_t reserved_16_31        : 16;
        uint64_t correct_headers       : 16; /**< [ 47: 32](R/W1C) How many headers are ok before the sync is lost.
                                                                 Software will reset this by writing the register. */
        uint64_t job_id_magic          : 16; /**< [ 63: 48](R/W1C) The first jobID  that has problems.
                                                                 Software will reset this by writing the register. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bmulx_cfg_fatal_job_form1_s cn; */
};
typedef union cavm_bmulx_cfg_fatal_job_form1 cavm_bmulx_cfg_fatal_job_form1_t;

static inline uint64_t CAVM_BMULX_CFG_FATAL_JOB_FORM1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BMULX_CFG_FATAL_JOB_FORM1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=3))
        return 0x87e0416000c8ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("BMULX_CFG_FATAL_JOB_FORM1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BMULX_CFG_FATAL_JOB_FORM1(a) cavm_bmulx_cfg_fatal_job_form1_t
#define bustype_CAVM_BMULX_CFG_FATAL_JOB_FORM1(a) CSR_TYPE_RSL
#define basename_CAVM_BMULX_CFG_FATAL_JOB_FORM1(a) "BMULX_CFG_FATAL_JOB_FORM1"
#define busnum_CAVM_BMULX_CFG_FATAL_JOB_FORM1(a) (a)
#define arguments_CAVM_BMULX_CFG_FATAL_JOB_FORM1(a) (a),-1,-1,-1

/**
 * Register (RSL) bmul#_cfg_fatal_job_form2_4
 *
 * BMUL Cfg Fatal Job Form2 4 Register
 */
union cavm_bmulx_cfg_fatal_job_form2_4
{
    uint64_t u;
    struct cavm_bmulx_cfg_fatal_job_form2_4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t job_id_job2_4         : 16; /**< [ 63: 48](R/W1C) The first jobID  that has problems.
                                                                 Either job_form2 or job_from4.
                                                                 Software will reset this by writing the register. */
        uint64_t fatcnt_job_form2_4    : 16; /**< [ 47: 32](R/W1C) Count every occurrence of fat_sxc/axc/mm_scale_cfg.
                                                                 Either job_form2 or job_from4.
                                                                 Software will reset this by writing the register. */
        uint64_t reserved_3_31         : 29;
        uint64_t fat_mm_scale_cfg      : 1;  /**< [  2:  2](R/W1C) Fatal register's config error for scaling's scale factor after matrix
                                                                 multiplication: (scale factor not within range 0 -\> 36).
                                                                 Affect job_form2 or job form4.
                                                                 Software will reset this by writing the register. */
        uint64_t fat_axc_cfg           : 1;  /**< [  1:  1](R/W1C) Fatal register's config error for AxC: (AxC=0), or (AxC not 16|32|64), or (invalid start AxC).
                                                                 Affect job_form2 or job_form4.
                                                                 Software will reset this by writing the register. */
        uint64_t fat_sxc_cfg           : 1;  /**< [  0:  0](R/W1C) Fatal register's config error for SxC: (SxC= 0), or (SxC\>16), or (invalid start
                                                                 SxC), or (SxC not 2|4|8|16 when job_form=4).
                                                                 Affect job_form2 or job_form4.
                                                                 Software will reset this by writing the register. */
#else /* Word 0 - Little Endian */
        uint64_t fat_sxc_cfg           : 1;  /**< [  0:  0](R/W1C) Fatal register's config error for SxC: (SxC= 0), or (SxC\>16), or (invalid start
                                                                 SxC), or (SxC not 2|4|8|16 when job_form=4).
                                                                 Affect job_form2 or job_form4.
                                                                 Software will reset this by writing the register. */
        uint64_t fat_axc_cfg           : 1;  /**< [  1:  1](R/W1C) Fatal register's config error for AxC: (AxC=0), or (AxC not 16|32|64), or (invalid start AxC).
                                                                 Affect job_form2 or job_form4.
                                                                 Software will reset this by writing the register. */
        uint64_t fat_mm_scale_cfg      : 1;  /**< [  2:  2](R/W1C) Fatal register's config error for scaling's scale factor after matrix
                                                                 multiplication: (scale factor not within range 0 -\> 36).
                                                                 Affect job_form2 or job form4.
                                                                 Software will reset this by writing the register. */
        uint64_t reserved_3_31         : 29;
        uint64_t fatcnt_job_form2_4    : 16; /**< [ 47: 32](R/W1C) Count every occurrence of fat_sxc/axc/mm_scale_cfg.
                                                                 Either job_form2 or job_from4.
                                                                 Software will reset this by writing the register. */
        uint64_t job_id_job2_4         : 16; /**< [ 63: 48](R/W1C) The first jobID  that has problems.
                                                                 Either job_form2 or job_from4.
                                                                 Software will reset this by writing the register. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bmulx_cfg_fatal_job_form2_4_s cn; */
};
typedef union cavm_bmulx_cfg_fatal_job_form2_4 cavm_bmulx_cfg_fatal_job_form2_4_t;

static inline uint64_t CAVM_BMULX_CFG_FATAL_JOB_FORM2_4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BMULX_CFG_FATAL_JOB_FORM2_4(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=3))
        return 0x87e0416000d0ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("BMULX_CFG_FATAL_JOB_FORM2_4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BMULX_CFG_FATAL_JOB_FORM2_4(a) cavm_bmulx_cfg_fatal_job_form2_4_t
#define bustype_CAVM_BMULX_CFG_FATAL_JOB_FORM2_4(a) CSR_TYPE_RSL
#define basename_CAVM_BMULX_CFG_FATAL_JOB_FORM2_4(a) "BMULX_CFG_FATAL_JOB_FORM2_4"
#define busnum_CAVM_BMULX_CFG_FATAL_JOB_FORM2_4(a) (a)
#define arguments_CAVM_BMULX_CFG_FATAL_JOB_FORM2_4(a) (a),-1,-1,-1

/**
 * Register (RSL) bmul#_cfg_fatal_job_form4
 *
 * BMUL Cfg Fatal Job Form4 Register
 */
union cavm_bmulx_cfg_fatal_job_form4
{
    uint64_t u;
    struct cavm_bmulx_cfg_fatal_job_form4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t job_id_job4           : 16; /**< [ 63: 48](R/W1C) The first jobID  that has problems.
                                                                 Software will reset this by writing the register. */
        uint64_t fatcnt_job_form4      : 16; /**< [ 47: 32](R/W1C) Counts every occurrence of fat_re_cfg.
                                                                 Software will reset this by writing the register. */
        uint64_t reserved_1_31         : 31;
        uint64_t fat_re_cfg            : 1;  /**< [  0:  0](R/W1C) Fatal register's config error for RE: (RE not 4/8/12 when job_form=4).
                                                                 Affect job_form4.
                                                                 Software will reset this by writing the register. */
#else /* Word 0 - Little Endian */
        uint64_t fat_re_cfg            : 1;  /**< [  0:  0](R/W1C) Fatal register's config error for RE: (RE not 4/8/12 when job_form=4).
                                                                 Affect job_form4.
                                                                 Software will reset this by writing the register. */
        uint64_t reserved_1_31         : 31;
        uint64_t fatcnt_job_form4      : 16; /**< [ 47: 32](R/W1C) Counts every occurrence of fat_re_cfg.
                                                                 Software will reset this by writing the register. */
        uint64_t job_id_job4           : 16; /**< [ 63: 48](R/W1C) The first jobID  that has problems.
                                                                 Software will reset this by writing the register. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bmulx_cfg_fatal_job_form4_s cn; */
};
typedef union cavm_bmulx_cfg_fatal_job_form4 cavm_bmulx_cfg_fatal_job_form4_t;

static inline uint64_t CAVM_BMULX_CFG_FATAL_JOB_FORM4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BMULX_CFG_FATAL_JOB_FORM4(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=3))
        return 0x87e0416000d8ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("BMULX_CFG_FATAL_JOB_FORM4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BMULX_CFG_FATAL_JOB_FORM4(a) cavm_bmulx_cfg_fatal_job_form4_t
#define bustype_CAVM_BMULX_CFG_FATAL_JOB_FORM4(a) CSR_TYPE_RSL
#define basename_CAVM_BMULX_CFG_FATAL_JOB_FORM4(a) "BMULX_CFG_FATAL_JOB_FORM4"
#define busnum_CAVM_BMULX_CFG_FATAL_JOB_FORM4(a) (a)
#define arguments_CAVM_BMULX_CFG_FATAL_JOB_FORM4(a) (a),-1,-1,-1

/**
 * Register (RSL) bmul#_clr_job_form_counter
 *
 * BMUL Clr Job Form Counter Register
 */
union cavm_bmulx_clr_job_form_counter
{
    uint64_t u;
    struct cavm_bmulx_clr_job_form_counter_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t clr_job_form_cnt      : 1;  /**< [  0:  0](R/W/H) PULSE.
                                                                 Clear BMUL()_JOB_FORM_COUNTER. */
#else /* Word 0 - Little Endian */
        uint64_t clr_job_form_cnt      : 1;  /**< [  0:  0](R/W/H) PULSE.
                                                                 Clear BMUL()_JOB_FORM_COUNTER. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bmulx_clr_job_form_counter_s cn; */
};
typedef union cavm_bmulx_clr_job_form_counter cavm_bmulx_clr_job_form_counter_t;

static inline uint64_t CAVM_BMULX_CLR_JOB_FORM_COUNTER(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BMULX_CLR_JOB_FORM_COUNTER(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=3))
        return 0x87e041600100ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("BMULX_CLR_JOB_FORM_COUNTER", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BMULX_CLR_JOB_FORM_COUNTER(a) cavm_bmulx_clr_job_form_counter_t
#define bustype_CAVM_BMULX_CLR_JOB_FORM_COUNTER(a) CSR_TYPE_RSL
#define basename_CAVM_BMULX_CLR_JOB_FORM_COUNTER(a) "BMULX_CLR_JOB_FORM_COUNTER"
#define busnum_CAVM_BMULX_CLR_JOB_FORM_COUNTER(a) (a)
#define arguments_CAVM_BMULX_CLR_JOB_FORM_COUNTER(a) (a),-1,-1,-1

/**
 * Register (RSL) bmul#_err_enable_bits
 *
 * BMUL Err Enable Bits Register
 * In case of error event the corresponding status bit in registers 0xA8 and 0xB0 is
 * set only is enable bit is set.
 */
union cavm_bmulx_err_enable_bits
{
    uint64_t u;
    struct cavm_bmulx_err_enable_bits_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_37_63        : 27;
        uint64_t fat_mm_scale_cfg_ena  : 1;  /**< [ 36: 36](R/W) Enable (='1') fatal reporting of scaling configuration error after matrix multiplication scaler. */
        uint64_t fat_job_form4_cfg_ena : 1;  /**< [ 35: 35](R/W) Enable (='1') fatal reporting of job_form4 ROB configuration in mm_datapath. */
        uint64_t fat_axc_cfg_ena       : 1;  /**< [ 34: 34](R/W) Enable (='1') fatal reporting of AxC misconfiguration in mm_datapath. */
        uint64_t fat_sxc_cfg_ena       : 1;  /**< [ 33: 33](R/W) Enable (='1') fatal reporting of SxC misconfiguration in mm_datapath. */
        uint64_t fat_magicword_ena     : 1;  /**< [ 32: 32](R/W) Enable (='1') fatal reporting of magic word in header. */
        uint64_t reserved_4_31         : 28;
        uint64_t nfat_scaler_ena       : 1;  /**< [  3:  3](R/W) Enable (='1') non fatal reporting of scaler block. */
        uint64_t nfat_prec_ena         : 1;  /**< [  2:  2](R/W) Enable (='1') non fatal reporting of 4x4 precoding. */
        uint64_t nfat_txd_ena          : 1;  /**< [  1:  1](R/W) Enable (='1') non fatal reporting of TxD precoding. */
        uint64_t nfat_modec_ena        : 1;  /**< [  0:  0](R/W) Enable (='1') non fatal reporting of modulation decompression. */
#else /* Word 0 - Little Endian */
        uint64_t nfat_modec_ena        : 1;  /**< [  0:  0](R/W) Enable (='1') non fatal reporting of modulation decompression. */
        uint64_t nfat_txd_ena          : 1;  /**< [  1:  1](R/W) Enable (='1') non fatal reporting of TxD precoding. */
        uint64_t nfat_prec_ena         : 1;  /**< [  2:  2](R/W) Enable (='1') non fatal reporting of 4x4 precoding. */
        uint64_t nfat_scaler_ena       : 1;  /**< [  3:  3](R/W) Enable (='1') non fatal reporting of scaler block. */
        uint64_t reserved_4_31         : 28;
        uint64_t fat_magicword_ena     : 1;  /**< [ 32: 32](R/W) Enable (='1') fatal reporting of magic word in header. */
        uint64_t fat_sxc_cfg_ena       : 1;  /**< [ 33: 33](R/W) Enable (='1') fatal reporting of SxC misconfiguration in mm_datapath. */
        uint64_t fat_axc_cfg_ena       : 1;  /**< [ 34: 34](R/W) Enable (='1') fatal reporting of AxC misconfiguration in mm_datapath. */
        uint64_t fat_job_form4_cfg_ena : 1;  /**< [ 35: 35](R/W) Enable (='1') fatal reporting of job_form4 ROB configuration in mm_datapath. */
        uint64_t fat_mm_scale_cfg_ena  : 1;  /**< [ 36: 36](R/W) Enable (='1') fatal reporting of scaling configuration error after matrix multiplication scaler. */
        uint64_t reserved_37_63        : 27;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bmulx_err_enable_bits_s cn; */
};
typedef union cavm_bmulx_err_enable_bits cavm_bmulx_err_enable_bits_t;

static inline uint64_t CAVM_BMULX_ERR_ENABLE_BITS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BMULX_ERR_ENABLE_BITS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=3))
        return 0x87e0416000b8ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("BMULX_ERR_ENABLE_BITS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BMULX_ERR_ENABLE_BITS(a) cavm_bmulx_err_enable_bits_t
#define bustype_CAVM_BMULX_ERR_ENABLE_BITS(a) CSR_TYPE_RSL
#define basename_CAVM_BMULX_ERR_ENABLE_BITS(a) "BMULX_ERR_ENABLE_BITS"
#define busnum_CAVM_BMULX_ERR_ENABLE_BITS(a) (a)
#define arguments_CAVM_BMULX_ERR_ENABLE_BITS(a) (a),-1,-1,-1

/**
 * Register (RSL) bmul#_err_set_bits
 *
 * BMUL Err Set Bits Register
 * Forcing the error reporting active. The purpose of the error set bit is to make it
 * possible to generate error indications artificially for the software development and
 * testing purposes.
 */
union cavm_bmulx_err_set_bits
{
    uint64_t u;
    struct cavm_bmulx_err_set_bits_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_37_63        : 27;
        uint64_t fat_mm_scale_cfg_set  : 1;  /**< [ 36: 36](R/W) Set (='1') fatal reporting of scaling configuration error after matrix multiplication scaler. */
        uint64_t fat_job_form4_cfg_set : 1;  /**< [ 35: 35](R/W) Set (='1') fatal reporting of job_form4 configuration in mm_datapath. */
        uint64_t fat_axc_cfg_set       : 1;  /**< [ 34: 34](R/W) Set (='1') fatal reporting of AxC misconfiguration in mm_datapath. */
        uint64_t fat_sxc_cfg_set       : 1;  /**< [ 33: 33](R/W) Set (='1') fatal reporting of SxC misconfiguration in mm_datapath. */
        uint64_t fat_magicword_set     : 1;  /**< [ 32: 32](R/W) Set (='1') fatal case in next job in magic word in header. */
        uint64_t reserved_4_31         : 28;
        uint64_t nfat_scaler_set       : 1;  /**< [  3:  3](R/W) Set (='1') non fatal case in next job in scaler block. */
        uint64_t nfat_prec_set         : 1;  /**< [  2:  2](R/W) Set (='1') non fatal case in next job in 4x4 Precoding. */
        uint64_t nfat_txd_set          : 1;  /**< [  1:  1](R/W) Set (='1') non fatal case in next job in TxD precoding. */
        uint64_t nfat_modec_set        : 1;  /**< [  0:  0](R/W) Set (='1') non fatal case in next job in modulation decompression. */
#else /* Word 0 - Little Endian */
        uint64_t nfat_modec_set        : 1;  /**< [  0:  0](R/W) Set (='1') non fatal case in next job in modulation decompression. */
        uint64_t nfat_txd_set          : 1;  /**< [  1:  1](R/W) Set (='1') non fatal case in next job in TxD precoding. */
        uint64_t nfat_prec_set         : 1;  /**< [  2:  2](R/W) Set (='1') non fatal case in next job in 4x4 Precoding. */
        uint64_t nfat_scaler_set       : 1;  /**< [  3:  3](R/W) Set (='1') non fatal case in next job in scaler block. */
        uint64_t reserved_4_31         : 28;
        uint64_t fat_magicword_set     : 1;  /**< [ 32: 32](R/W) Set (='1') fatal case in next job in magic word in header. */
        uint64_t fat_sxc_cfg_set       : 1;  /**< [ 33: 33](R/W) Set (='1') fatal reporting of SxC misconfiguration in mm_datapath. */
        uint64_t fat_axc_cfg_set       : 1;  /**< [ 34: 34](R/W) Set (='1') fatal reporting of AxC misconfiguration in mm_datapath. */
        uint64_t fat_job_form4_cfg_set : 1;  /**< [ 35: 35](R/W) Set (='1') fatal reporting of job_form4 configuration in mm_datapath. */
        uint64_t fat_mm_scale_cfg_set  : 1;  /**< [ 36: 36](R/W) Set (='1') fatal reporting of scaling configuration error after matrix multiplication scaler. */
        uint64_t reserved_37_63        : 27;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bmulx_err_set_bits_s cn; */
};
typedef union cavm_bmulx_err_set_bits cavm_bmulx_err_set_bits_t;

static inline uint64_t CAVM_BMULX_ERR_SET_BITS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BMULX_ERR_SET_BITS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=3))
        return 0x87e0416000c0ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("BMULX_ERR_SET_BITS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BMULX_ERR_SET_BITS(a) cavm_bmulx_err_set_bits_t
#define bustype_CAVM_BMULX_ERR_SET_BITS(a) CSR_TYPE_RSL
#define basename_CAVM_BMULX_ERR_SET_BITS(a) "BMULX_ERR_SET_BITS"
#define busnum_CAVM_BMULX_ERR_SET_BITS(a) (a)
#define arguments_CAVM_BMULX_ERR_SET_BITS(a) (a),-1,-1,-1

/**
 * Register (RSL) bmul#_error_src0
 *
 * BMUL Error Src0 Register
 * Error Source Register 0 (interrupt event).
 */
union cavm_bmulx_error_src0
{
    uint64_t u;
    struct cavm_bmulx_error_src0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t err_job_id1           : 16; /**< [ 47: 32](R/W1C) [input Function: Port ERR_JOB_ID1_in].

                                                                 Read port overflow/underflow job ID 1 (optional). */
        uint64_t reserved_6_31         : 26;
        uint64_t rd_port_overflow1     : 1;  /**< [  5:  5](R/W1C) Read port1 overflow (optional).

                                                                 Asserted if (received amount of transactions \> expected amount of transaction). */
        uint64_t reserved_2_4          : 3;
        uint64_t rd_port_underflow1    : 1;  /**< [  1:  1](R/W1C) Read port1 underflow (optional).

                                                                 Asserted if (last is asserted) and (received amount of transactions \< expected
                                                                 amount of transaction). */
        uint64_t reserved_0            : 1;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0            : 1;
        uint64_t rd_port_underflow1    : 1;  /**< [  1:  1](R/W1C) Read port1 underflow (optional).

                                                                 Asserted if (last is asserted) and (received amount of transactions \< expected
                                                                 amount of transaction). */
        uint64_t reserved_2_4          : 3;
        uint64_t rd_port_overflow1     : 1;  /**< [  5:  5](R/W1C) Read port1 overflow (optional).

                                                                 Asserted if (received amount of transactions \> expected amount of transaction). */
        uint64_t reserved_6_31         : 26;
        uint64_t err_job_id1           : 16; /**< [ 47: 32](R/W1C) [input Function: Port ERR_JOB_ID1_in].

                                                                 Read port overflow/underflow job ID 1 (optional). */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bmulx_error_src0_s cn; */
};
typedef union cavm_bmulx_error_src0 cavm_bmulx_error_src0_t;

static inline uint64_t CAVM_BMULX_ERROR_SRC0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BMULX_ERROR_SRC0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=3))
        return 0x87e041600030ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("BMULX_ERROR_SRC0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BMULX_ERROR_SRC0(a) cavm_bmulx_error_src0_t
#define bustype_CAVM_BMULX_ERROR_SRC0(a) CSR_TYPE_RSL
#define basename_CAVM_BMULX_ERROR_SRC0(a) "BMULX_ERROR_SRC0"
#define busnum_CAVM_BMULX_ERROR_SRC0(a) (a)
#define arguments_CAVM_BMULX_ERROR_SRC0(a) (a),-1,-1,-1

/**
 * Register (RSL) bmul#_fatal_status
 *
 * BMUL Fatal Status Register
 * Status bit is reported only if enable bit is set in 0xB8 register.
 * Counter value is updated only for those events when enable bit it is NOT set.
 * JobID value is updated only for those events when enable bit it is NOT set.
 */
union cavm_bmulx_fatal_status
{
    uint64_t u;
    struct cavm_bmulx_fatal_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t fat_job_id            : 16; /**< [ 63: 48](R/W1C) Catch the very first jobID having error.
                                                                 Catch the very first jobID having error; errors that are not enabled.
                                                                 Software will reset this by writing the register. */
        uint64_t fat_cnt               : 16; /**< [ 47: 32](R/W1C) Counts every fatal error event not enabled. */
        uint64_t reserved_5_31         : 27;
        uint64_t fat_mm_scale_cfg_status : 1;/**< [  4:  4](R/W1C) There has been an error in configuration of scaling factor after multiplication block.
                                                                 Software will reset this by writing the register. */
        uint64_t fat_job_form4_cfg_status : 1;/**< [  3:  3](R/W1C) There has been an error in configuration of job_form4 ROB.
                                                                 Software will reset this by writing the register. */
        uint64_t fat_axc_cfg_status    : 1;  /**< [  2:  2](R/W1C) There has been an error in configuration of AxC.
                                                                 Software will reset this by writing the register. */
        uint64_t fat_sxc_cfg_status    : 1;  /**< [  1:  1](R/W1C) There has been an error in configuration of SxC.
                                                                 Software will reset this by writing the register. */
        uint64_t fat_magic_status      : 1;  /**< [  0:  0](R/W1C) Header is out of sync. In expected header there is no magic word.
                                                                 Software will reset this by writing the register. */
#else /* Word 0 - Little Endian */
        uint64_t fat_magic_status      : 1;  /**< [  0:  0](R/W1C) Header is out of sync. In expected header there is no magic word.
                                                                 Software will reset this by writing the register. */
        uint64_t fat_sxc_cfg_status    : 1;  /**< [  1:  1](R/W1C) There has been an error in configuration of SxC.
                                                                 Software will reset this by writing the register. */
        uint64_t fat_axc_cfg_status    : 1;  /**< [  2:  2](R/W1C) There has been an error in configuration of AxC.
                                                                 Software will reset this by writing the register. */
        uint64_t fat_job_form4_cfg_status : 1;/**< [  3:  3](R/W1C) There has been an error in configuration of job_form4 ROB.
                                                                 Software will reset this by writing the register. */
        uint64_t fat_mm_scale_cfg_status : 1;/**< [  4:  4](R/W1C) There has been an error in configuration of scaling factor after multiplication block.
                                                                 Software will reset this by writing the register. */
        uint64_t reserved_5_31         : 27;
        uint64_t fat_cnt               : 16; /**< [ 47: 32](R/W1C) Counts every fatal error event not enabled. */
        uint64_t fat_job_id            : 16; /**< [ 63: 48](R/W1C) Catch the very first jobID having error.
                                                                 Catch the very first jobID having error; errors that are not enabled.
                                                                 Software will reset this by writing the register. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bmulx_fatal_status_s cn; */
};
typedef union cavm_bmulx_fatal_status cavm_bmulx_fatal_status_t;

static inline uint64_t CAVM_BMULX_FATAL_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BMULX_FATAL_STATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=3))
        return 0x87e0416000b0ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("BMULX_FATAL_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BMULX_FATAL_STATUS(a) cavm_bmulx_fatal_status_t
#define bustype_CAVM_BMULX_FATAL_STATUS(a) CSR_TYPE_RSL
#define basename_CAVM_BMULX_FATAL_STATUS(a) "BMULX_FATAL_STATUS"
#define busnum_CAVM_BMULX_FATAL_STATUS(a) (a)
#define arguments_CAVM_BMULX_FATAL_STATUS(a) (a),-1,-1,-1

/**
 * Register (RSL) bmul#_hab_ctrl0
 *
 * BMUL HAB Ctrl0 Register
 */
union cavm_bmulx_hab_ctrl0
{
    uint64_t u;
    struct cavm_bmulx_hab_ctrl0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t job_id0               : 16; /**< [ 31: 16](R/W) Job ID 0. */
        uint64_t reserved_1_15         : 15;
        uint64_t start_cfg0            : 1;  /**< [  0:  0](R/W) Setting this bit starts the HAB per config in CONFIGURATION 0 (auto-clear).
                                                                 Ignored if BMUL()_HAB_STATUS[BUSY_CFG] is one. */
#else /* Word 0 - Little Endian */
        uint64_t start_cfg0            : 1;  /**< [  0:  0](R/W) Setting this bit starts the HAB per config in CONFIGURATION 0 (auto-clear).
                                                                 Ignored if BMUL()_HAB_STATUS[BUSY_CFG] is one. */
        uint64_t reserved_1_15         : 15;
        uint64_t job_id0               : 16; /**< [ 31: 16](R/W) Job ID 0. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bmulx_hab_ctrl0_s cn; */
};
typedef union cavm_bmulx_hab_ctrl0 cavm_bmulx_hab_ctrl0_t;

static inline uint64_t CAVM_BMULX_HAB_CTRL0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BMULX_HAB_CTRL0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=3))
        return 0x87e041600000ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("BMULX_HAB_CTRL0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BMULX_HAB_CTRL0(a) cavm_bmulx_hab_ctrl0_t
#define bustype_CAVM_BMULX_HAB_CTRL0(a) CSR_TYPE_RSL
#define basename_CAVM_BMULX_HAB_CTRL0(a) "BMULX_HAB_CTRL0"
#define busnum_CAVM_BMULX_HAB_CTRL0(a) (a)
#define arguments_CAVM_BMULX_HAB_CTRL0(a) (a),-1,-1,-1

/**
 * Register (RSL) bmul#_hab_status
 *
 * BMUL HAB Status Register
 * HAB Status.
 */
union cavm_bmulx_hab_status
{
    uint64_t u;
    struct cavm_bmulx_hab_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t misc_status           : 59; /**< [ 63:  5](RO/H) Contains other status such as FSM codes, etc. */
        uint64_t ready                 : 1;  /**< [  4:  4](RO/H) Ready - Ready to receive the next job. */
        uint64_t reserved_1_3          : 3;
        uint64_t busy_cfg0             : 1;  /**< [  0:  0](RO/H) Indicates if the HAB is busy processing a job with CONFIGURATION 0.
                                                                 '0' = ready (default)
                                                                 '1' = busy */
#else /* Word 0 - Little Endian */
        uint64_t busy_cfg0             : 1;  /**< [  0:  0](RO/H) Indicates if the HAB is busy processing a job with CONFIGURATION 0.
                                                                 '0' = ready (default)
                                                                 '1' = busy */
        uint64_t reserved_1_3          : 3;
        uint64_t ready                 : 1;  /**< [  4:  4](RO/H) Ready - Ready to receive the next job. */
        uint64_t misc_status           : 59; /**< [ 63:  5](RO/H) Contains other status such as FSM codes, etc. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bmulx_hab_status_s cn; */
};
typedef union cavm_bmulx_hab_status cavm_bmulx_hab_status_t;

static inline uint64_t CAVM_BMULX_HAB_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BMULX_HAB_STATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=3))
        return 0x87e041600018ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("BMULX_HAB_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BMULX_HAB_STATUS(a) cavm_bmulx_hab_status_t
#define bustype_CAVM_BMULX_HAB_STATUS(a) CSR_TYPE_RSL
#define basename_CAVM_BMULX_HAB_STATUS(a) "BMULX_HAB_STATUS"
#define busnum_CAVM_BMULX_HAB_STATUS(a) (a)
#define arguments_CAVM_BMULX_HAB_STATUS(a) (a),-1,-1,-1

/**
 * Register (RSL) bmul#_id
 *
 * BMUL ID Register
 */
union cavm_bmulx_id
{
    uint64_t u;
    struct cavm_bmulx_id_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t moduleid              : 32; /**< [ 31:  0](R/W) 0x0 = 32'h55555555 Synchronization word 0     Sync0.
                                                                 0x1 = 32'hAAAAAAAA Synchronization word 1     Sync1.
                                                                 0x2 = 32'h0002FE70 Component code             CompCode.
                                                                 0x3 = MODULEBUILDNUM_G Build number               Build.
                                                                 0x4 = InstanceNum bf_mul002 Instance number in SOC  Inst.

                                                                 Write: The ID pointer is defined by writing the three LSBs. The default value of
                                                                 the ID pointer is zero.
                                                                 Read: When the ID register is read the ID field pointed by the ID pointer is
                                                                 returned. After a read the ID pointer is automatically incremented by one. */
#else /* Word 0 - Little Endian */
        uint64_t moduleid              : 32; /**< [ 31:  0](R/W) 0x0 = 32'h55555555 Synchronization word 0     Sync0.
                                                                 0x1 = 32'hAAAAAAAA Synchronization word 1     Sync1.
                                                                 0x2 = 32'h0002FE70 Component code             CompCode.
                                                                 0x3 = MODULEBUILDNUM_G Build number               Build.
                                                                 0x4 = InstanceNum bf_mul002 Instance number in SOC  Inst.

                                                                 Write: The ID pointer is defined by writing the three LSBs. The default value of
                                                                 the ID pointer is zero.
                                                                 Read: When the ID register is read the ID field pointed by the ID pointer is
                                                                 returned. After a read the ID pointer is automatically incremented by one. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bmulx_id_s cn; */
};
typedef union cavm_bmulx_id cavm_bmulx_id_t;

static inline uint64_t CAVM_BMULX_ID(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BMULX_ID(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=3))
        return 0x87e0416000a0ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("BMULX_ID", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BMULX_ID(a) cavm_bmulx_id_t
#define bustype_CAVM_BMULX_ID(a) CSR_TYPE_RSL
#define basename_CAVM_BMULX_ID(a) "BMULX_ID"
#define busnum_CAVM_BMULX_ID(a) (a)
#define arguments_CAVM_BMULX_ID(a) (a),-1,-1,-1

/**
 * Register (RSL) bmul#_inrob_ctrl
 *
 * BMUL Inrob Ctrl Register
 * Control signals for reorder buffer of input stream.
 */
union cavm_bmulx_inrob_ctrl
{
    uint64_t u;
    struct cavm_bmulx_inrob_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t valid_row             : 8;  /**< [ 63: 56](R/W) Number of datain transactions ROB will receive before switching to sending dataout. */
        uint64_t valid_col             : 8;  /**< [ 55: 48](R/W) Number of dataout transactions ROB will send before finish sending dataout. */
        uint64_t start_row             : 8;  /**< [ 47: 40](R/W) The first row of data written to ROB's array of registers. */
        uint64_t start_col             : 8;  /**< [ 39: 32](R/W) The first col of data sent from ROB's array of registers. */
        uint64_t reserved_2_31         : 30;
        uint64_t bypass                : 1;  /**< [  1:  1](R/W) 0: bypass mode.
                                                                 1: ping pong reorder buffer mode. */
        uint64_t soft_reset            : 1;  /**< [  0:  0](R/W/H) PULSE.
                                                                 0: de-assert soft reset, work normally.
                                                                 1: assert soft reset (all buffer flushed, start from init state, won't accept
                                                                 data). */
#else /* Word 0 - Little Endian */
        uint64_t soft_reset            : 1;  /**< [  0:  0](R/W/H) PULSE.
                                                                 0: de-assert soft reset, work normally.
                                                                 1: assert soft reset (all buffer flushed, start from init state, won't accept
                                                                 data). */
        uint64_t bypass                : 1;  /**< [  1:  1](R/W) 0: bypass mode.
                                                                 1: ping pong reorder buffer mode. */
        uint64_t reserved_2_31         : 30;
        uint64_t start_col             : 8;  /**< [ 39: 32](R/W) The first col of data sent from ROB's array of registers. */
        uint64_t start_row             : 8;  /**< [ 47: 40](R/W) The first row of data written to ROB's array of registers. */
        uint64_t valid_col             : 8;  /**< [ 55: 48](R/W) Number of dataout transactions ROB will send before finish sending dataout. */
        uint64_t valid_row             : 8;  /**< [ 63: 56](R/W) Number of datain transactions ROB will receive before switching to sending dataout. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bmulx_inrob_ctrl_s cn; */
};
typedef union cavm_bmulx_inrob_ctrl cavm_bmulx_inrob_ctrl_t;

static inline uint64_t CAVM_BMULX_INROB_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BMULX_INROB_CTRL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=3))
        return 0x87e041602040ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("BMULX_INROB_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BMULX_INROB_CTRL(a) cavm_bmulx_inrob_ctrl_t
#define bustype_CAVM_BMULX_INROB_CTRL(a) CSR_TYPE_RSL
#define basename_CAVM_BMULX_INROB_CTRL(a) "BMULX_INROB_CTRL"
#define busnum_CAVM_BMULX_INROB_CTRL(a) (a)
#define arguments_CAVM_BMULX_INROB_CTRL(a) (a),-1,-1,-1

/**
 * Register (RSL) bmul#_job_form
 *
 * BMUL Job Form Register
 * Defines BMUL job configuration format.
 * Hardware loads the job configuration in this register. Software should
 * never directly write to this register.
 */
union cavm_bmulx_job_form
{
    uint64_t u;
    struct cavm_bmulx_job_form_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t job_form              : 4;  /**< [  3:  0](R/W) Job form:
                                                                 1 = BF-ctrl-weight-update
                                                                 2 = BF-dl
                                                                 3 = BF-ctrl-read
                                                                 4 = RAW-mul */
#else /* Word 0 - Little Endian */
        uint64_t job_form              : 4;  /**< [  3:  0](R/W) Job form:
                                                                 1 = BF-ctrl-weight-update
                                                                 2 = BF-dl
                                                                 3 = BF-ctrl-read
                                                                 4 = RAW-mul */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bmulx_job_form_s cn; */
};
typedef union cavm_bmulx_job_form cavm_bmulx_job_form_t;

static inline uint64_t CAVM_BMULX_JOB_FORM(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BMULX_JOB_FORM(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=3))
        return 0x87e041602000ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("BMULX_JOB_FORM", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BMULX_JOB_FORM(a) cavm_bmulx_job_form_t
#define bustype_CAVM_BMULX_JOB_FORM(a) CSR_TYPE_RSL
#define basename_CAVM_BMULX_JOB_FORM(a) "BMULX_JOB_FORM"
#define busnum_CAVM_BMULX_JOB_FORM(a) (a)
#define arguments_CAVM_BMULX_JOB_FORM(a) (a),-1,-1,-1

/**
 * Register (RSL) bmul#_job_form_counter
 *
 * BMUL Job Form Counter Register
 */
union cavm_bmulx_job_form_counter
{
    uint64_t u;
    struct cavm_bmulx_job_form_counter_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t job_form4_counter     : 16; /**< [ 63: 48](RO) Counts every job_form=4 jobs. Software can reset this by writing a new value in it. */
        uint64_t job_form3_counter     : 16; /**< [ 47: 32](RO) Counts every job_form=3 jobs. Software can reset this by writing a new value in it. */
        uint64_t job_form2_counter     : 16; /**< [ 31: 16](RO) Counts every job_form=2 jobs. Software can reset this by writing a new value in it. */
        uint64_t job_form1_counter     : 16; /**< [ 15:  0](RO) Counts every job_form=1 jobs. Software can reset this by writing a new value in it. */
#else /* Word 0 - Little Endian */
        uint64_t job_form1_counter     : 16; /**< [ 15:  0](RO) Counts every job_form=1 jobs. Software can reset this by writing a new value in it. */
        uint64_t job_form2_counter     : 16; /**< [ 31: 16](RO) Counts every job_form=2 jobs. Software can reset this by writing a new value in it. */
        uint64_t job_form3_counter     : 16; /**< [ 47: 32](RO) Counts every job_form=3 jobs. Software can reset this by writing a new value in it. */
        uint64_t job_form4_counter     : 16; /**< [ 63: 48](RO) Counts every job_form=4 jobs. Software can reset this by writing a new value in it. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bmulx_job_form_counter_s cn; */
};
typedef union cavm_bmulx_job_form_counter cavm_bmulx_job_form_counter_t;

static inline uint64_t CAVM_BMULX_JOB_FORM_COUNTER(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BMULX_JOB_FORM_COUNTER(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=3))
        return 0x87e041600108ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("BMULX_JOB_FORM_COUNTER", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BMULX_JOB_FORM_COUNTER(a) cavm_bmulx_job_form_counter_t
#define bustype_CAVM_BMULX_JOB_FORM_COUNTER(a) CSR_TYPE_RSL
#define basename_CAVM_BMULX_JOB_FORM_COUNTER(a) "BMULX_JOB_FORM_COUNTER"
#define busnum_CAVM_BMULX_JOB_FORM_COUNTER(a) (a)
#define arguments_CAVM_BMULX_JOB_FORM_COUNTER(a) (a),-1,-1,-1

/**
 * Register (RSL) bmul#_multiplication_size
 *
 * BMUL Multiplication Size Register
 */
union cavm_bmulx_multiplication_size
{
    uint64_t u;
    struct cavm_bmulx_multiplication_size_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t rob_swctrl            : 1;  /**< [ 63: 63](R/W) Enable software control of in & out ROB.
                                                                 0: Hardware generates ROB control internally.
                                                                 1: Software bypasses hardware to control ROB. */
        uint64_t reserved_24_62        : 39;
        uint64_t sxc_start             : 8;  /**< [ 23: 16](R/W) Starting SxC, default = 0.
                                                                 Valid sxc_start: 0 \<= sxc_start \<= 16 - sxc_count.

                                                                 Example: sxc_start=5, sxc_count=4, valid sxc = 5, 6, 7, 8. */
        uint64_t axc_count             : 8;  /**< [ 15:  8](R/W) Number of AxC, default = 64. Valid axc_count: 16/32/64. */
        uint64_t sxc_count             : 8;  /**< [  7:  0](R/W) Number of SxC, default = 16. Valid sxc_count: 1-\>16. */
#else /* Word 0 - Little Endian */
        uint64_t sxc_count             : 8;  /**< [  7:  0](R/W) Number of SxC, default = 16. Valid sxc_count: 1-\>16. */
        uint64_t axc_count             : 8;  /**< [ 15:  8](R/W) Number of AxC, default = 64. Valid axc_count: 16/32/64. */
        uint64_t sxc_start             : 8;  /**< [ 23: 16](R/W) Starting SxC, default = 0.
                                                                 Valid sxc_start: 0 \<= sxc_start \<= 16 - sxc_count.

                                                                 Example: sxc_start=5, sxc_count=4, valid sxc = 5, 6, 7, 8. */
        uint64_t reserved_24_62        : 39;
        uint64_t rob_swctrl            : 1;  /**< [ 63: 63](R/W) Enable software control of in & out ROB.
                                                                 0: Hardware generates ROB control internally.
                                                                 1: Software bypasses hardware to control ROB. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bmulx_multiplication_size_s cn; */
};
typedef union cavm_bmulx_multiplication_size cavm_bmulx_multiplication_size_t;

static inline uint64_t CAVM_BMULX_MULTIPLICATION_SIZE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BMULX_MULTIPLICATION_SIZE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=3))
        return 0x87e041602020ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("BMULX_MULTIPLICATION_SIZE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BMULX_MULTIPLICATION_SIZE(a) cavm_bmulx_multiplication_size_t
#define bustype_CAVM_BMULX_MULTIPLICATION_SIZE(a) CSR_TYPE_RSL
#define basename_CAVM_BMULX_MULTIPLICATION_SIZE(a) "BMULX_MULTIPLICATION_SIZE"
#define busnum_CAVM_BMULX_MULTIPLICATION_SIZE(a) (a)
#define arguments_CAVM_BMULX_MULTIPLICATION_SIZE(a) (a),-1,-1,-1

/**
 * Register (RSL) bmul#_nfatal_status
 *
 * BMUL Nfatal Status Register
 * Status bit is reported only if enable bit is set in 0xB8 register.
 * Counter value is updated only for those events  when enable bit it is NOT set.
 * JobID value is updated only for those events when enable bit it is NOT set.
 */
union cavm_bmulx_nfatal_status
{
    uint64_t u;
    struct cavm_bmulx_nfatal_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t nfat_job_id           : 16; /**< [ 63: 48](R/W1C) Catch the very first jobID having error; errors that are not enabled.
                                                                 Software will reset this by writing the register. */
        uint64_t nfat_cnt              : 16; /**< [ 47: 32](R/W1C) Count every non-enabled error events. */
        uint64_t reserved_4_31         : 28;
        uint64_t nfat_mm_scaler_man_sat_status : 1;/**< [  3:  3](R/W1C) There has been error in final scaling after matrix multiplication.
                                                                 Software will reset this by writing the register. */
        uint64_t nfat_prec_status      : 1;  /**< [  2:  2](R/W1C) There has been error in 4x4 precoding scaling.
                                                                 Software will reset this by writing the register. */
        uint64_t nfat_txd_status       : 1;  /**< [  1:  1](R/W1C) There has been configuration error in TxD precoding.
                                                                 Software will reset this by writing the register. */
        uint64_t nfat_modec_status     : 1;  /**< [  0:  0](R/W1C) There has been configuration error in (exp becomes negative or exp saturated).
                                                                 Software will reset this by writing the register. */
#else /* Word 0 - Little Endian */
        uint64_t nfat_modec_status     : 1;  /**< [  0:  0](R/W1C) There has been configuration error in (exp becomes negative or exp saturated).
                                                                 Software will reset this by writing the register. */
        uint64_t nfat_txd_status       : 1;  /**< [  1:  1](R/W1C) There has been configuration error in TxD precoding.
                                                                 Software will reset this by writing the register. */
        uint64_t nfat_prec_status      : 1;  /**< [  2:  2](R/W1C) There has been error in 4x4 precoding scaling.
                                                                 Software will reset this by writing the register. */
        uint64_t nfat_mm_scaler_man_sat_status : 1;/**< [  3:  3](R/W1C) There has been error in final scaling after matrix multiplication.
                                                                 Software will reset this by writing the register. */
        uint64_t reserved_4_31         : 28;
        uint64_t nfat_cnt              : 16; /**< [ 47: 32](R/W1C) Count every non-enabled error events. */
        uint64_t nfat_job_id           : 16; /**< [ 63: 48](R/W1C) Catch the very first jobID having error; errors that are not enabled.
                                                                 Software will reset this by writing the register. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bmulx_nfatal_status_s cn; */
};
typedef union cavm_bmulx_nfatal_status cavm_bmulx_nfatal_status_t;

static inline uint64_t CAVM_BMULX_NFATAL_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BMULX_NFATAL_STATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=3))
        return 0x87e0416000a8ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("BMULX_NFATAL_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BMULX_NFATAL_STATUS(a) cavm_bmulx_nfatal_status_t
#define bustype_CAVM_BMULX_NFATAL_STATUS(a) CSR_TYPE_RSL
#define basename_CAVM_BMULX_NFATAL_STATUS(a) "BMULX_NFATAL_STATUS"
#define busnum_CAVM_BMULX_NFATAL_STATUS(a) (a)
#define arguments_CAVM_BMULX_NFATAL_STATUS(a) (a),-1,-1,-1

/**
 * Register (RSL) bmul#_non_fatal_modec
 *
 * BMUL Non Fatal Modec Register
 */
union cavm_bmulx_non_fatal_modec
{
    uint64_t u;
    struct cavm_bmulx_non_fatal_modec_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t job_id_modec          : 16; /**< [ 63: 48](R/W1C) The first jobID  that has problems.
                                                                 Software will reset this by writing the register. */
        uint64_t nfat_modec_exp_sat    : 16; /**< [ 47: 32](R/W1C) "Reports in which #SxC  there has been event where exponent saturates in
                                                                 modulation decompression: (exp will saturate if scaled exp=15 and saturate
                                                                 occurs when scaling mantissa)
                                                                 Software will reset this by writing the register." */
        uint64_t nfat_modec_exp_neg    : 16; /**< [ 31: 16](R/W1C) "Reports in which #SxC  there has been event where exponent becomes negative in
                                                                 modulation decompression: (sample's exp \< mdExp)
                                                                 Software will reset this by writing the register." */
        uint64_t nfat_modec_scale      : 16; /**< [ 15:  0](R/W1C) "Reports in which #SxC  there has been configuration error mdScaler not
                                                                 normalized: (mdScaler \< 0x800 and mdExp not 15).
                                                                 !!Not in use currently!!
                                                                 Software will reset this by writing the register." */
#else /* Word 0 - Little Endian */
        uint64_t nfat_modec_scale      : 16; /**< [ 15:  0](R/W1C) "Reports in which #SxC  there has been configuration error mdScaler not
                                                                 normalized: (mdScaler \< 0x800 and mdExp not 15).
                                                                 !!Not in use currently!!
                                                                 Software will reset this by writing the register." */
        uint64_t nfat_modec_exp_neg    : 16; /**< [ 31: 16](R/W1C) "Reports in which #SxC  there has been event where exponent becomes negative in
                                                                 modulation decompression: (sample's exp \< mdExp)
                                                                 Software will reset this by writing the register." */
        uint64_t nfat_modec_exp_sat    : 16; /**< [ 47: 32](R/W1C) "Reports in which #SxC  there has been event where exponent saturates in
                                                                 modulation decompression: (exp will saturate if scaled exp=15 and saturate
                                                                 occurs when scaling mantissa)
                                                                 Software will reset this by writing the register." */
        uint64_t job_id_modec          : 16; /**< [ 63: 48](R/W1C) The first jobID  that has problems.
                                                                 Software will reset this by writing the register. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bmulx_non_fatal_modec_s cn; */
};
typedef union cavm_bmulx_non_fatal_modec cavm_bmulx_non_fatal_modec_t;

static inline uint64_t CAVM_BMULX_NON_FATAL_MODEC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BMULX_NON_FATAL_MODEC(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=3))
        return 0x87e0416000e0ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("BMULX_NON_FATAL_MODEC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BMULX_NON_FATAL_MODEC(a) cavm_bmulx_non_fatal_modec_t
#define bustype_CAVM_BMULX_NON_FATAL_MODEC(a) CSR_TYPE_RSL
#define basename_CAVM_BMULX_NON_FATAL_MODEC(a) "BMULX_NON_FATAL_MODEC"
#define busnum_CAVM_BMULX_NON_FATAL_MODEC(a) (a)
#define arguments_CAVM_BMULX_NON_FATAL_MODEC(a) (a),-1,-1,-1

/**
 * Register (RSL) bmul#_non_fatal_prec
 *
 * BMUL Non Fatal Prec Register
 */
union cavm_bmulx_non_fatal_prec
{
    uint64_t u;
    struct cavm_bmulx_non_fatal_prec_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t job_id_prec           : 16; /**< [ 63: 48](R/W1C) The first jobID  that has problems.
                                                                 Software will reset this by writing the register. */
        uint64_t nfatcnt_prec_sat      : 16; /**< [ 47: 32](R/W1C) Counts every RE that has mantissa saturation from precoder when scaling down
                                                                 after 4x4 multiplication 35+35b -\> 16+16b.
                                                                 Software will reset this by writing the register. */
        uint64_t reserved_16_31        : 16;
        uint64_t nfat_prec_sat         : 16; /**< [ 15:  0](R/W1C) "Reports in which #SxC there has been saturation in precoder when scaling down
                                                                 after 4x4 multiplication 35+35b -\> 16+16b.
                                                                 Software will reset this by writing the register." */
#else /* Word 0 - Little Endian */
        uint64_t nfat_prec_sat         : 16; /**< [ 15:  0](R/W1C) "Reports in which #SxC there has been saturation in precoder when scaling down
                                                                 after 4x4 multiplication 35+35b -\> 16+16b.
                                                                 Software will reset this by writing the register." */
        uint64_t reserved_16_31        : 16;
        uint64_t nfatcnt_prec_sat      : 16; /**< [ 47: 32](R/W1C) Counts every RE that has mantissa saturation from precoder when scaling down
                                                                 after 4x4 multiplication 35+35b -\> 16+16b.
                                                                 Software will reset this by writing the register. */
        uint64_t job_id_prec           : 16; /**< [ 63: 48](R/W1C) The first jobID  that has problems.
                                                                 Software will reset this by writing the register. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bmulx_non_fatal_prec_s cn; */
};
typedef union cavm_bmulx_non_fatal_prec cavm_bmulx_non_fatal_prec_t;

static inline uint64_t CAVM_BMULX_NON_FATAL_PREC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BMULX_NON_FATAL_PREC(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=3))
        return 0x87e0416000f0ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("BMULX_NON_FATAL_PREC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BMULX_NON_FATAL_PREC(a) cavm_bmulx_non_fatal_prec_t
#define bustype_CAVM_BMULX_NON_FATAL_PREC(a) CSR_TYPE_RSL
#define basename_CAVM_BMULX_NON_FATAL_PREC(a) "BMULX_NON_FATAL_PREC"
#define busnum_CAVM_BMULX_NON_FATAL_PREC(a) (a)
#define arguments_CAVM_BMULX_NON_FATAL_PREC(a) (a),-1,-1,-1

/**
 * Register (RSL) bmul#_non_fatal_scaler
 *
 * BMUL Non Fatal Scaler Register
 */
union cavm_bmulx_non_fatal_scaler
{
    uint64_t u;
    struct cavm_bmulx_non_fatal_scaler_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t job_id_scaler         : 16; /**< [ 63: 48](R/W1C) The first jobID  that has problems.
                                                                 Software will reset this by writing the register. */
        uint64_t nfatcnt_mm_scaler_sat : 16; /**< [ 47: 32](R/W1C) Counts every RE that has mantissa saturation from scaler.
                                                                 Software will reset this by writing the register. */
        uint64_t nfat_mm_scaler_sat    : 32; /**< [ 31:  0](R/W1C) All '1' if there's any final scaling saturation.
                                                                 Software will reset this by writing the register. */
#else /* Word 0 - Little Endian */
        uint64_t nfat_mm_scaler_sat    : 32; /**< [ 31:  0](R/W1C) All '1' if there's any final scaling saturation.
                                                                 Software will reset this by writing the register. */
        uint64_t nfatcnt_mm_scaler_sat : 16; /**< [ 47: 32](R/W1C) Counts every RE that has mantissa saturation from scaler.
                                                                 Software will reset this by writing the register. */
        uint64_t job_id_scaler         : 16; /**< [ 63: 48](R/W1C) The first jobID  that has problems.
                                                                 Software will reset this by writing the register. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bmulx_non_fatal_scaler_s cn; */
};
typedef union cavm_bmulx_non_fatal_scaler cavm_bmulx_non_fatal_scaler_t;

static inline uint64_t CAVM_BMULX_NON_FATAL_SCALER(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BMULX_NON_FATAL_SCALER(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=3))
        return 0x87e0416000f8ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("BMULX_NON_FATAL_SCALER", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BMULX_NON_FATAL_SCALER(a) cavm_bmulx_non_fatal_scaler_t
#define bustype_CAVM_BMULX_NON_FATAL_SCALER(a) CSR_TYPE_RSL
#define basename_CAVM_BMULX_NON_FATAL_SCALER(a) "BMULX_NON_FATAL_SCALER"
#define busnum_CAVM_BMULX_NON_FATAL_SCALER(a) (a)
#define arguments_CAVM_BMULX_NON_FATAL_SCALER(a) (a),-1,-1,-1

/**
 * Register (RSL) bmul#_non_fatal_txd
 *
 * BMUL Non Fatal Txd Register
 */
union cavm_bmulx_non_fatal_txd
{
    uint64_t u;
    struct cavm_bmulx_non_fatal_txd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t job_id_txd            : 16; /**< [ 63: 48](R/W1C) The first jobID  that has problems.
                                                                 Software will reset this by writing the register. */
        uint64_t nfatcnt_txdprec_cfg   : 16; /**< [ 47: 32](R/W1C) Counts every error from txd precoder (config change in the middle PRB).
                                                                 Software will reset this by writing the register. */
        uint64_t reserved_1_31         : 31;
        uint64_t nfat_txdprec_cfg      : 1;  /**< [  0:  0](R/W1C) Non fatal txd precoder's config change in the middle PRB, affect job_form2.
                                                                 Software will reset this by writing the register. */
#else /* Word 0 - Little Endian */
        uint64_t nfat_txdprec_cfg      : 1;  /**< [  0:  0](R/W1C) Non fatal txd precoder's config change in the middle PRB, affect job_form2.
                                                                 Software will reset this by writing the register. */
        uint64_t reserved_1_31         : 31;
        uint64_t nfatcnt_txdprec_cfg   : 16; /**< [ 47: 32](R/W1C) Counts every error from txd precoder (config change in the middle PRB).
                                                                 Software will reset this by writing the register. */
        uint64_t job_id_txd            : 16; /**< [ 63: 48](R/W1C) The first jobID  that has problems.
                                                                 Software will reset this by writing the register. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bmulx_non_fatal_txd_s cn; */
};
typedef union cavm_bmulx_non_fatal_txd cavm_bmulx_non_fatal_txd_t;

static inline uint64_t CAVM_BMULX_NON_FATAL_TXD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BMULX_NON_FATAL_TXD(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=3))
        return 0x87e0416000e8ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("BMULX_NON_FATAL_TXD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BMULX_NON_FATAL_TXD(a) cavm_bmulx_non_fatal_txd_t
#define bustype_CAVM_BMULX_NON_FATAL_TXD(a) CSR_TYPE_RSL
#define basename_CAVM_BMULX_NON_FATAL_TXD(a) "BMULX_NON_FATAL_TXD"
#define busnum_CAVM_BMULX_NON_FATAL_TXD(a) (a)
#define arguments_CAVM_BMULX_NON_FATAL_TXD(a) (a),-1,-1,-1

/**
 * Register (RSL) bmul#_outacc_ctrl
 *
 * BMUL Outacc Ctrl Register
 * Control signals for reorder buffer of 1st output stream.
 */
union cavm_bmulx_outacc_ctrl
{
    uint64_t u;
    struct cavm_bmulx_outacc_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t valid_row             : 8;  /**< [ 63: 56](R/W) Number of datain transactions ROB will receive before switching to sending dataout. */
        uint64_t valid_col             : 8;  /**< [ 55: 48](R/W) Number of dataout transactions ROB will send before finish sending dataout. */
        uint64_t start_row             : 8;  /**< [ 47: 40](R/W) The first row of data written to ROB's array of registers. */
        uint64_t start_col             : 8;  /**< [ 39: 32](R/W) The first col of data sent from ROB's array of registers. */
        uint64_t reserved_2_31         : 30;
        uint64_t bypass                : 1;  /**< [  1:  1](R/W) 0: bypass mode.
                                                                 1: ping pong reorder buffer mode. */
        uint64_t soft_reset            : 1;  /**< [  0:  0](R/W/H) PULSE.
                                                                 0: de-assert soft reset, work normally.
                                                                 1: assert soft reset (all buffer flushed, start from init state, won't accept
                                                                 data). */
#else /* Word 0 - Little Endian */
        uint64_t soft_reset            : 1;  /**< [  0:  0](R/W/H) PULSE.
                                                                 0: de-assert soft reset, work normally.
                                                                 1: assert soft reset (all buffer flushed, start from init state, won't accept
                                                                 data). */
        uint64_t bypass                : 1;  /**< [  1:  1](R/W) 0: bypass mode.
                                                                 1: ping pong reorder buffer mode. */
        uint64_t reserved_2_31         : 30;
        uint64_t start_col             : 8;  /**< [ 39: 32](R/W) The first col of data sent from ROB's array of registers. */
        uint64_t start_row             : 8;  /**< [ 47: 40](R/W) The first row of data written to ROB's array of registers. */
        uint64_t valid_col             : 8;  /**< [ 55: 48](R/W) Number of dataout transactions ROB will send before finish sending dataout. */
        uint64_t valid_row             : 8;  /**< [ 63: 56](R/W) Number of datain transactions ROB will receive before switching to sending dataout. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bmulx_outacc_ctrl_s cn; */
};
typedef union cavm_bmulx_outacc_ctrl cavm_bmulx_outacc_ctrl_t;

static inline uint64_t CAVM_BMULX_OUTACC_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BMULX_OUTACC_CTRL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=3))
        return 0x87e041602048ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("BMULX_OUTACC_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BMULX_OUTACC_CTRL(a) cavm_bmulx_outacc_ctrl_t
#define bustype_CAVM_BMULX_OUTACC_CTRL(a) CSR_TYPE_RSL
#define basename_CAVM_BMULX_OUTACC_CTRL(a) "BMULX_OUTACC_CTRL"
#define busnum_CAVM_BMULX_OUTACC_CTRL(a) (a)
#define arguments_CAVM_BMULX_OUTACC_CTRL(a) (a),-1,-1,-1

/**
 * Register (RSL) bmul#_outrob_ctrl
 *
 * BMUL Outrob Ctrl Register
 * Control signals for reorder buffer of 2nd output stream.
 */
union cavm_bmulx_outrob_ctrl
{
    uint64_t u;
    struct cavm_bmulx_outrob_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t valid_row             : 8;  /**< [ 63: 56](R/W) Number of datain transactions ROB will receive before switching to sending dataout. */
        uint64_t valid_col             : 8;  /**< [ 55: 48](R/W) Number of dataout transactions ROB will send before finish sending dataout. */
        uint64_t start_row             : 8;  /**< [ 47: 40](R/W) The first row of data written to ROB's array of registers. */
        uint64_t start_col             : 8;  /**< [ 39: 32](R/W) The first col of data sent from ROB's array of registers. */
        uint64_t reserved_2_31         : 30;
        uint64_t bypass                : 1;  /**< [  1:  1](R/W) 0: bypass mode.
                                                                 1: ping pong reorder buffer mode. */
        uint64_t soft_reset            : 1;  /**< [  0:  0](R/W/H) PULSE.
                                                                 0: de-assert soft reset, work normally.
                                                                 1: assert soft reset (all buffer flushed, start from init state, won't accept
                                                                 data). */
#else /* Word 0 - Little Endian */
        uint64_t soft_reset            : 1;  /**< [  0:  0](R/W/H) PULSE.
                                                                 0: de-assert soft reset, work normally.
                                                                 1: assert soft reset (all buffer flushed, start from init state, won't accept
                                                                 data). */
        uint64_t bypass                : 1;  /**< [  1:  1](R/W) 0: bypass mode.
                                                                 1: ping pong reorder buffer mode. */
        uint64_t reserved_2_31         : 30;
        uint64_t start_col             : 8;  /**< [ 39: 32](R/W) The first col of data sent from ROB's array of registers. */
        uint64_t start_row             : 8;  /**< [ 47: 40](R/W) The first row of data written to ROB's array of registers. */
        uint64_t valid_col             : 8;  /**< [ 55: 48](R/W) Number of dataout transactions ROB will send before finish sending dataout. */
        uint64_t valid_row             : 8;  /**< [ 63: 56](R/W) Number of datain transactions ROB will receive before switching to sending dataout. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bmulx_outrob_ctrl_s cn; */
};
typedef union cavm_bmulx_outrob_ctrl cavm_bmulx_outrob_ctrl_t;

static inline uint64_t CAVM_BMULX_OUTROB_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BMULX_OUTROB_CTRL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=3))
        return 0x87e041602050ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("BMULX_OUTROB_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BMULX_OUTROB_CTRL(a) cavm_bmulx_outrob_ctrl_t
#define bustype_CAVM_BMULX_OUTROB_CTRL(a) CSR_TYPE_RSL
#define basename_CAVM_BMULX_OUTROB_CTRL(a) "BMULX_OUTROB_CTRL"
#define busnum_CAVM_BMULX_OUTROB_CTRL(a) (a)
#define arguments_CAVM_BMULX_OUTROB_CTRL(a) (a),-1,-1,-1

/**
 * Register (RSL) bmul#_re_value
 *
 * BMUL Re Value Register
 * Controls the number of REs in PRB.
 */
union cavm_bmulx_re_value
{
    uint64_t u;
    struct cavm_bmulx_re_value_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t nlast_re              : 4;  /**< [  3:  0](R/W) Number of the last RE in PRB. Default = 11.
                                                                 Valid nlast_re: 3/7/11. */
#else /* Word 0 - Little Endian */
        uint64_t nlast_re              : 4;  /**< [  3:  0](R/W) Number of the last RE in PRB. Default = 11.
                                                                 Valid nlast_re: 3/7/11. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bmulx_re_value_s cn; */
};
typedef union cavm_bmulx_re_value cavm_bmulx_re_value_t;

static inline uint64_t CAVM_BMULX_RE_VALUE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BMULX_RE_VALUE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=3))
        return 0x87e041602058ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("BMULX_RE_VALUE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BMULX_RE_VALUE(a) cavm_bmulx_re_value_t
#define bustype_CAVM_BMULX_RE_VALUE(a) CSR_TYPE_RSL
#define basename_CAVM_BMULX_RE_VALUE(a) "BMULX_RE_VALUE"
#define busnum_CAVM_BMULX_RE_VALUE(a) (a)
#define arguments_CAVM_BMULX_RE_VALUE(a) (a),-1,-1,-1

/**
 * Register (RSL) bmul#_scaling
 *
 * BMUL Scaling Register
 */
union cavm_bmulx_scaling
{
    uint64_t u;
    struct cavm_bmulx_scaling_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t scale_factor          : 6;  /**< [  5:  0](R/W) Defines how many times the result must be right shifted to get final data.
                                                                 Valid scale_factor: 0-\>36. */
#else /* Word 0 - Little Endian */
        uint64_t scale_factor          : 6;  /**< [  5:  0](R/W) Defines how many times the result must be right shifted to get final data.
                                                                 Valid scale_factor: 0-\>36. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bmulx_scaling_s cn; */
};
typedef union cavm_bmulx_scaling cavm_bmulx_scaling_t;

static inline uint64_t CAVM_BMULX_SCALING(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BMULX_SCALING(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=3))
        return 0x87e041602028ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("BMULX_SCALING", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BMULX_SCALING(a) cavm_bmulx_scaling_t
#define bustype_CAVM_BMULX_SCALING(a) CSR_TYPE_RSL
#define basename_CAVM_BMULX_SCALING(a) "BMULX_SCALING"
#define busnum_CAVM_BMULX_SCALING(a) (a)
#define arguments_CAVM_BMULX_SCALING(a) (a),-1,-1,-1

/**
 * Register (RSL) bmul#_starting
 *
 * BMUL Starting Register
 * Start and ending.
 */
union cavm_bmulx_starting
{
    uint64_t u;
    struct cavm_bmulx_starting_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_25_63        : 39;
        uint64_t end_prb               : 9;  /**< [ 24: 16](R/W) Ending value of PRB/RE calculation. Valid is 0 -\> 272. */
        uint64_t reserved_9_15         : 7;
        uint64_t start_prb             : 9;  /**< [  8:  0](R/W) Starting value of PRB/RE calculation. Valid is 0 -\> 272. */
#else /* Word 0 - Little Endian */
        uint64_t start_prb             : 9;  /**< [  8:  0](R/W) Starting value of PRB/RE calculation. Valid is 0 -\> 272. */
        uint64_t reserved_9_15         : 7;
        uint64_t end_prb               : 9;  /**< [ 24: 16](R/W) Ending value of PRB/RE calculation. Valid is 0 -\> 272. */
        uint64_t reserved_25_63        : 39;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bmulx_starting_s cn; */
};
typedef union cavm_bmulx_starting cavm_bmulx_starting_t;

static inline uint64_t CAVM_BMULX_STARTING(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BMULX_STARTING(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=3))
        return 0x87e041602008ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("BMULX_STARTING", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BMULX_STARTING(a) cavm_bmulx_starting_t
#define bustype_CAVM_BMULX_STARTING(a) CSR_TYPE_RSL
#define basename_CAVM_BMULX_STARTING(a) "BMULX_STARTING"
#define busnum_CAVM_BMULX_STARTING(a) (a)
#define arguments_CAVM_BMULX_STARTING(a) (a),-1,-1,-1

/**
 * Register (RSL) bmul#_symbol
 *
 * BMUL Symbol Register
 */
union cavm_bmulx_symbol
{
    uint64_t u;
    struct cavm_bmulx_symbol_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_28_63        : 36;
        uint64_t pre_12_15_en          : 1;  /**< [ 27: 27](R/W) Enable 4x4 precoding of SxC12-\>15, '0': disable, '1': enable. */
        uint64_t pre_8_11_en           : 1;  /**< [ 26: 26](R/W) Enable 4x4 precoding of SxC8-\>11, '0': disable, '1': enable. */
        uint64_t pre_4_7_en            : 1;  /**< [ 25: 25](R/W) Enable 4x4 precoding of SxC4-\>7, '0': disable, '1': enable. */
        uint64_t pre_0_3_en            : 1;  /**< [ 24: 24](R/W) Enable 4x4 precoding of SxC0-\>3, '0': disable, '1': enable. */
        uint64_t reserved_18_23        : 6;
        uint64_t fxp_dout              : 1;  /**< [ 17: 17](R/W) The output number format in use, default '0'=IQFP, else '1'=FXP. */
        uint64_t efxp_din              : 1;  /**< [ 16: 16](R/W) The input number format in use, default '0'=IQFP, else '1'=eFXP. */
        uint64_t tag                   : 8;  /**< [ 15:  8](R/W) If tag is matching with tag value in PID line then PID line is accepted . If one
                                                                 ore both of these tag values are 0, then tag test is not done and PID line is
                                                                 automatically selected. */
        uint64_t reserved_4_7          : 4;
        uint64_t symbol                : 4;  /**< [  3:  0](R/W) Current symbol to calculate. */
#else /* Word 0 - Little Endian */
        uint64_t symbol                : 4;  /**< [  3:  0](R/W) Current symbol to calculate. */
        uint64_t reserved_4_7          : 4;
        uint64_t tag                   : 8;  /**< [ 15:  8](R/W) If tag is matching with tag value in PID line then PID line is accepted . If one
                                                                 ore both of these tag values are 0, then tag test is not done and PID line is
                                                                 automatically selected. */
        uint64_t efxp_din              : 1;  /**< [ 16: 16](R/W) The input number format in use, default '0'=IQFP, else '1'=eFXP. */
        uint64_t fxp_dout              : 1;  /**< [ 17: 17](R/W) The output number format in use, default '0'=IQFP, else '1'=FXP. */
        uint64_t reserved_18_23        : 6;
        uint64_t pre_0_3_en            : 1;  /**< [ 24: 24](R/W) Enable 4x4 precoding of SxC0-\>3, '0': disable, '1': enable. */
        uint64_t pre_4_7_en            : 1;  /**< [ 25: 25](R/W) Enable 4x4 precoding of SxC4-\>7, '0': disable, '1': enable. */
        uint64_t pre_8_11_en           : 1;  /**< [ 26: 26](R/W) Enable 4x4 precoding of SxC8-\>11, '0': disable, '1': enable. */
        uint64_t pre_12_15_en          : 1;  /**< [ 27: 27](R/W) Enable 4x4 precoding of SxC12-\>15, '0': disable, '1': enable. */
        uint64_t reserved_28_63        : 36;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bmulx_symbol_s cn; */
};
typedef union cavm_bmulx_symbol cavm_bmulx_symbol_t;

static inline uint64_t CAVM_BMULX_SYMBOL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BMULX_SYMBOL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=3))
        return 0x87e041602010ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("BMULX_SYMBOL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BMULX_SYMBOL(a) cavm_bmulx_symbol_t
#define bustype_CAVM_BMULX_SYMBOL(a) CSR_TYPE_RSL
#define basename_CAVM_BMULX_SYMBOL(a) "BMULX_SYMBOL"
#define busnum_CAVM_BMULX_SYMBOL(a) (a)
#define arguments_CAVM_BMULX_SYMBOL(a) (a),-1,-1,-1

/**
 * Register (RSL) bmul#_symbol_exponent
 *
 * BMUL Symbol Exponent Register
 */
union cavm_bmulx_symbol_exponent
{
    uint64_t u;
    struct cavm_bmulx_symbol_exponent_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t symexp_sxc_15         : 4;  /**< [ 63: 60](R/W) Symbol_level exponent. */
        uint64_t symexp_sxc_14         : 4;  /**< [ 59: 56](R/W) Symbol_level exponent. */
        uint64_t symexp_sxc_13         : 4;  /**< [ 55: 52](R/W) Symbol_level exponent. */
        uint64_t symexp_sxc_12         : 4;  /**< [ 51: 48](R/W) Symbol_level exponent. */
        uint64_t symexp_sxc_11         : 4;  /**< [ 47: 44](R/W) Symbol_level exponent. */
        uint64_t symexp_sxc_10         : 4;  /**< [ 43: 40](R/W) Symbol_level exponent. */
        uint64_t symexp_sxc_9          : 4;  /**< [ 39: 36](R/W) Symbol_level exponent. */
        uint64_t symexp_sxc_8          : 4;  /**< [ 35: 32](R/W) Symbol_level exponent. */
        uint64_t symexp_sxc_7          : 4;  /**< [ 31: 28](R/W) Symbol_level exponent. */
        uint64_t symexp_sxc_6          : 4;  /**< [ 27: 24](R/W) Symbol_level exponent. */
        uint64_t symexp_sxc_5          : 4;  /**< [ 23: 20](R/W) Symbol_level exponent. */
        uint64_t symexp_sxc_4          : 4;  /**< [ 19: 16](R/W) Symbol_level exponent. */
        uint64_t symexp_sxc_3          : 4;  /**< [ 15: 12](R/W) Symbol_level exponent. */
        uint64_t symexp_sxc_2          : 4;  /**< [ 11:  8](R/W) Symbol_level exponent. */
        uint64_t symexp_sxc_1          : 4;  /**< [  7:  4](R/W) Symbol_level exponent. */
        uint64_t symexp_sxc_0          : 4;  /**< [  3:  0](R/W) Symbol_level exponent. */
#else /* Word 0 - Little Endian */
        uint64_t symexp_sxc_0          : 4;  /**< [  3:  0](R/W) Symbol_level exponent. */
        uint64_t symexp_sxc_1          : 4;  /**< [  7:  4](R/W) Symbol_level exponent. */
        uint64_t symexp_sxc_2          : 4;  /**< [ 11:  8](R/W) Symbol_level exponent. */
        uint64_t symexp_sxc_3          : 4;  /**< [ 15: 12](R/W) Symbol_level exponent. */
        uint64_t symexp_sxc_4          : 4;  /**< [ 19: 16](R/W) Symbol_level exponent. */
        uint64_t symexp_sxc_5          : 4;  /**< [ 23: 20](R/W) Symbol_level exponent. */
        uint64_t symexp_sxc_6          : 4;  /**< [ 27: 24](R/W) Symbol_level exponent. */
        uint64_t symexp_sxc_7          : 4;  /**< [ 31: 28](R/W) Symbol_level exponent. */
        uint64_t symexp_sxc_8          : 4;  /**< [ 35: 32](R/W) Symbol_level exponent. */
        uint64_t symexp_sxc_9          : 4;  /**< [ 39: 36](R/W) Symbol_level exponent. */
        uint64_t symexp_sxc_10         : 4;  /**< [ 43: 40](R/W) Symbol_level exponent. */
        uint64_t symexp_sxc_11         : 4;  /**< [ 47: 44](R/W) Symbol_level exponent. */
        uint64_t symexp_sxc_12         : 4;  /**< [ 51: 48](R/W) Symbol_level exponent. */
        uint64_t symexp_sxc_13         : 4;  /**< [ 55: 52](R/W) Symbol_level exponent. */
        uint64_t symexp_sxc_14         : 4;  /**< [ 59: 56](R/W) Symbol_level exponent. */
        uint64_t symexp_sxc_15         : 4;  /**< [ 63: 60](R/W) Symbol_level exponent. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bmulx_symbol_exponent_s cn; */
};
typedef union cavm_bmulx_symbol_exponent cavm_bmulx_symbol_exponent_t;

static inline uint64_t CAVM_BMULX_SYMBOL_EXPONENT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BMULX_SYMBOL_EXPONENT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=3))
        return 0x87e041602018ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("BMULX_SYMBOL_EXPONENT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BMULX_SYMBOL_EXPONENT(a) cavm_bmulx_symbol_exponent_t
#define bustype_CAVM_BMULX_SYMBOL_EXPONENT(a) CSR_TYPE_RSL
#define basename_CAVM_BMULX_SYMBOL_EXPONENT(a) "BMULX_SYMBOL_EXPONENT"
#define busnum_CAVM_BMULX_SYMBOL_EXPONENT(a) (a)
#define arguments_CAVM_BMULX_SYMBOL_EXPONENT(a) (a),-1,-1,-1

#endif /* __CAVM_CSRS_BMUL_H__ */
