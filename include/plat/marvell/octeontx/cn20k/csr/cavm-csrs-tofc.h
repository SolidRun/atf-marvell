#ifndef __CAVM_CSRS_TOFC_H__
#define __CAVM_CSRS_TOFC_H__
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
 * TOFC.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Structure tofc_dl_dynamic_param_s
 *
 * TOFC DL Dynamic Parameter Structure
 * Specifies the structure of the DL dynamic parameter stored in each location of the circular buffer.
 */
union cavm_tofc_dl_dynamic_param_s
{
    uint64_t u[4];
    struct cavm_tofc_dl_dynamic_param_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_60_63        : 4;
        uint64_t cp_size               : 12; /**< [ 59: 48] CP_SIZE for the given symbol to be sent directly to the SCSF Filter. */
        uint64_t reserved_46_47        : 2;
        uint64_t symbol_size           : 14; /**< [ 45: 32] Number of samples read for the given symbol -- before upsampling. */
        uint64_t symbol_read_offset    : 16; /**< [ 31: 16] Read offset in flits  (32byte units) in data buffer of the given symbol.
                                                                 Symbol read for each stream starts at:
                                                                 TOFC()_TX_STREAM()_BUF_CFG[BUFFER_BASE_ADDR] +
                                                                 (TOFC()_TX_STREAM()_BUF_CFG[BUFFER_SIZE]*antenna_number) +
                                                                 [SYMBOL_READ_OFFSET]. */
        uint64_t reserved_12_15        : 4;
        uint64_t symbol_index          : 4;  /**< [ 11:  8] Symbol index of given symbol. */
        uint64_t reserved_0_7          : 8;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_7          : 8;
        uint64_t symbol_index          : 4;  /**< [ 11:  8] Symbol index of given symbol. */
        uint64_t reserved_12_15        : 4;
        uint64_t symbol_read_offset    : 16; /**< [ 31: 16] Read offset in flits  (32byte units) in data buffer of the given symbol.
                                                                 Symbol read for each stream starts at:
                                                                 TOFC()_TX_STREAM()_BUF_CFG[BUFFER_BASE_ADDR] +
                                                                 (TOFC()_TX_STREAM()_BUF_CFG[BUFFER_SIZE]*antenna_number) +
                                                                 [SYMBOL_READ_OFFSET]. */
        uint64_t symbol_size           : 14; /**< [ 45: 32] Number of samples read for the given symbol -- before upsampling. */
        uint64_t reserved_46_47        : 2;
        uint64_t cp_size               : 12; /**< [ 59: 48] CP_SIZE for the given symbol to be sent directly to the SCSF Filter. */
        uint64_t reserved_60_63        : 4;
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t reserved_124_127      : 4;
        uint64_t scsf_a                : 4;  /**< [123:120] Input A for SCSF Filter. */
        uint64_t reserved_116_119      : 4;
        uint64_t ant_gain_scale        : 4;  /**< [115:112] Antenna gain scale. */
        uint64_t reserved_110_111      : 2;
        uint64_t ant_gain              : 14; /**< [109: 96] Antenna gain. */
        uint64_t reserved_93_95        : 3;
        uint64_t coeff_sel             : 5;  /**< [ 92: 88] Selects a set of 26 filter coefficients from the coefficient RAM. */
        uint64_t reserved_83_87        : 5;
        uint64_t upsample_sel          : 3;  /**< [ 82: 80] Selection config for upsampler.
                                                                           0x0 = No upsampling.
                                                                           0x1 = insert one 0's for every sample read.
                                                                           0x2 = insert three 0's for every sample read.
                                                                           0x3 = insert seven 0's for every sample read.
                                                                           0x4 = insert fifteen 0's for every sample read. */
        uint64_t nco                   : 16; /**< [ 79: 64] NCO value required by SCSF. */
#else /* Word 1 - Little Endian */
        uint64_t nco                   : 16; /**< [ 79: 64] NCO value required by SCSF. */
        uint64_t upsample_sel          : 3;  /**< [ 82: 80] Selection config for upsampler.
                                                                           0x0 = No upsampling.
                                                                           0x1 = insert one 0's for every sample read.
                                                                           0x2 = insert three 0's for every sample read.
                                                                           0x3 = insert seven 0's for every sample read.
                                                                           0x4 = insert fifteen 0's for every sample read. */
        uint64_t reserved_83_87        : 5;
        uint64_t coeff_sel             : 5;  /**< [ 92: 88] Selects a set of 26 filter coefficients from the coefficient RAM. */
        uint64_t reserved_93_95        : 3;
        uint64_t ant_gain              : 14; /**< [109: 96] Antenna gain. */
        uint64_t reserved_110_111      : 2;
        uint64_t ant_gain_scale        : 4;  /**< [115:112] Antenna gain scale. */
        uint64_t reserved_116_119      : 4;
        uint64_t scsf_a                : 4;  /**< [123:120] Input A for SCSF Filter. */
        uint64_t reserved_124_127      : 4;
#endif /* Word 1 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 2 - Big Endian */
        uint64_t reserved_129_191      : 63;
        uint64_t filter_bypass         : 1;  /**< [128:128] Enables Filter Bypass in B6G mode. */
#else /* Word 2 - Little Endian */
        uint64_t filter_bypass         : 1;  /**< [128:128] Enables Filter Bypass in B6G mode. */
        uint64_t reserved_129_191      : 63;
#endif /* Word 2 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 3 - Big Endian */
        uint64_t reserved_192_255      : 64;
#else /* Word 3 - Little Endian */
        uint64_t reserved_192_255      : 64;
#endif /* Word 3 - End */
    } s;
    /* struct cavm_tofc_dl_dynamic_param_s_s cn; */
};

/**
 * Structure tofc_ul_dynamic_param_s
 *
 * TOFC UL Dynamic Parameter Structure
 * Specifies the structure of the UL dynamic parameter stored in each location of the circular buffer.
 */
union cavm_tofc_ul_dynamic_param_s
{
    uint64_t u[4];
    struct cavm_tofc_ul_dynamic_param_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_60_63        : 4;
        uint64_t cp_size               : 12; /**< [ 59: 48] CP_SIZE for the given symbol to be sent directly to the SCSF Filter. */
        uint64_t reserved_46_47        : 2;
        uint64_t symbol_size           : 14; /**< [ 45: 32] Number of  samples per antenna written to memory for this symbol */
        uint64_t symbol_write_offset   : 16; /**< [ 31: 16] Write offset in flits (32byte units) in data buffer of the given symbol. Symbol write DMA
                                                                 for each stream starts at:
                                                                 _ TOFC()_TOFW_RX_DMA_MB_ADDR()[BUF_ADDR] +
                                                                 (TOFC()_TOFW_RX_DMA_MB_CFG()[BUF_SIZE]*antenna_number) +
                                                                 [SYMBOL_WRITE_OFFSET]. */
        uint64_t reserved_12_15        : 4;
        uint64_t symbol_index          : 4;  /**< [ 11:  8] Symbol index of given symbol. */
        uint64_t jd_idx                : 8;  /**< [  7:  0] Selects the JD to use in JCA completion message. */
#else /* Word 0 - Little Endian */
        uint64_t jd_idx                : 8;  /**< [  7:  0] Selects the JD to use in JCA completion message. */
        uint64_t symbol_index          : 4;  /**< [ 11:  8] Symbol index of given symbol. */
        uint64_t reserved_12_15        : 4;
        uint64_t symbol_write_offset   : 16; /**< [ 31: 16] Write offset in flits (32byte units) in data buffer of the given symbol. Symbol write DMA
                                                                 for each stream starts at:
                                                                 _ TOFC()_TOFW_RX_DMA_MB_ADDR()[BUF_ADDR] +
                                                                 (TOFC()_TOFW_RX_DMA_MB_CFG()[BUF_SIZE]*antenna_number) +
                                                                 [SYMBOL_WRITE_OFFSET]. */
        uint64_t symbol_size           : 14; /**< [ 45: 32] Number of  samples per antenna written to memory for this symbol */
        uint64_t reserved_46_47        : 2;
        uint64_t cp_size               : 12; /**< [ 59: 48] CP_SIZE for the given symbol to be sent directly to the SCSF Filter. */
        uint64_t reserved_60_63        : 4;
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t reserved_124_127      : 4;
        uint64_t scsf_a                : 4;  /**< [123:120] Input A for SCSF Filter. */
        uint64_t reserved_116_119      : 4;
        uint64_t scsf_c                : 4;  /**< [115:112] Input C for SCSF Filter. */
        uint64_t reserved_107_111      : 5;
        uint64_t scsf_b                : 11; /**< [106: 96] Input B for SCSF Filter. */
        uint64_t reserved_93_95        : 3;
        uint64_t coeff_sel             : 5;  /**< [ 92: 88] Selects a set of 26 filter coefficients from the coefficient RAM. */
        uint64_t reserved_84_87        : 4;
        uint64_t datastream_en         : 1;  /**< [ 83: 83] Datastream enable for downsampler. */
        uint64_t downsample_sel        : 3;  /**< [ 82: 80] Selection config for downsampler.
                                                                   0x0 = No downsampling.
                                                                   0x1 = drop one sample for every sample written.
                                                                   0x2 = drop three samples for every sample written.
                                                                   0x3 = drop seven samples for every sample written.
                                                                   0x4 = drop fifteen samples for every sample written. */
        uint64_t nco                   : 16; /**< [ 79: 64] NCO value required by SCSF. */
#else /* Word 1 - Little Endian */
        uint64_t nco                   : 16; /**< [ 79: 64] NCO value required by SCSF. */
        uint64_t downsample_sel        : 3;  /**< [ 82: 80] Selection config for downsampler.
                                                                   0x0 = No downsampling.
                                                                   0x1 = drop one sample for every sample written.
                                                                   0x2 = drop three samples for every sample written.
                                                                   0x3 = drop seven samples for every sample written.
                                                                   0x4 = drop fifteen samples for every sample written. */
        uint64_t datastream_en         : 1;  /**< [ 83: 83] Datastream enable for downsampler. */
        uint64_t reserved_84_87        : 4;
        uint64_t coeff_sel             : 5;  /**< [ 92: 88] Selects a set of 26 filter coefficients from the coefficient RAM. */
        uint64_t reserved_93_95        : 3;
        uint64_t scsf_b                : 11; /**< [106: 96] Input B for SCSF Filter. */
        uint64_t reserved_107_111      : 5;
        uint64_t scsf_c                : 4;  /**< [115:112] Input C for SCSF Filter. */
        uint64_t reserved_116_119      : 4;
        uint64_t scsf_a                : 4;  /**< [123:120] Input A for SCSF Filter. */
        uint64_t reserved_124_127      : 4;
#endif /* Word 1 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 2 - Big Endian */
        uint64_t reserved_129_191      : 63;
        uint64_t filter_bypass         : 1;  /**< [128:128] Enables Filter Bypass in B6G mode. */
#else /* Word 2 - Little Endian */
        uint64_t filter_bypass         : 1;  /**< [128:128] Enables Filter Bypass in B6G mode. */
        uint64_t reserved_129_191      : 63;
#endif /* Word 2 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 3 - Big Endian */
        uint64_t reserved_192_255      : 64;
#else /* Word 3 - Little Endian */
        uint64_t reserved_192_255      : 64;
#endif /* Word 3 - End */
    } s;
    /* struct cavm_tofc_ul_dynamic_param_s_s cn; */
};

/**
 * Register (RSL) tofc#_204c_rx#_bit_order
 *
 * JESD204C RX Bit Order Register
 */
union cavm_tofcx_204c_rxx_bit_order
{
    uint64_t u;
    struct cavm_tofcx_204c_rxx_bit_order_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t bit_order             : 4;  /**< [  3:  0](R/W) Bit ordering before and after scrambling.
                                                                 0x0 = No bit reversing.
                                                                 \<0\> - Bit reversing on descrambled data side before descrambler.
                                                                 \<1\> - Bit reversing on scrambled data side after descrambler.
                                                                 \<2\> - Bit reversing after scrambler before CRC/FEC.
                                                                 \<3\> - Bit reversing after FEC output. */
#else /* Word 0 - Little Endian */
        uint64_t bit_order             : 4;  /**< [  3:  0](R/W) Bit ordering before and after scrambling.
                                                                 0x0 = No bit reversing.
                                                                 \<0\> - Bit reversing on descrambled data side before descrambler.
                                                                 \<1\> - Bit reversing on scrambled data side after descrambler.
                                                                 \<2\> - Bit reversing after scrambler before CRC/FEC.
                                                                 \<3\> - Bit reversing after FEC output. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_204c_rxx_bit_order_s cn; */
};
typedef union cavm_tofcx_204c_rxx_bit_order cavm_tofcx_204c_rxx_bit_order_t;

static inline uint64_t CAVM_TOFCX_204C_RXX_BIT_ORDER(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_204C_RXX_BIT_ORDER(uint64_t a, uint64_t b)
{
    if ((a<=3) && (b==0))
        return 0x87e042e0b5b0ll + 0x80000ll * ((a) & 0x3) + 0x800ll * ((b) & 0x0);
    __cavm_csr_fatal("TOFCX_204C_RXX_BIT_ORDER", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_204C_RXX_BIT_ORDER(a,b) cavm_tofcx_204c_rxx_bit_order_t
#define bustype_CAVM_TOFCX_204C_RXX_BIT_ORDER(a,b) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_204C_RXX_BIT_ORDER(a,b) "TOFCX_204C_RXX_BIT_ORDER"
#define busnum_CAVM_TOFCX_204C_RXX_BIT_ORDER(a,b) (a)
#define arguments_CAVM_TOFCX_204C_RXX_BIT_ORDER(a,b) (a),(b),-1,-1

/**
 * Register (RSL) tofc#_204c_rx#_crc12_ena
 *
 * JESD204C RX CRC12 Enable Register
 */
union cavm_tofcx_204c_rxx_crc12_ena
{
    uint64_t u;
    struct cavm_tofcx_204c_rxx_crc12_ena_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t enable                : 1;  /**< [  0:  0](R/W) JESD204C RX CRC12 enable. */
#else /* Word 0 - Little Endian */
        uint64_t enable                : 1;  /**< [  0:  0](R/W) JESD204C RX CRC12 enable. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_204c_rxx_crc12_ena_s cn; */
};
typedef union cavm_tofcx_204c_rxx_crc12_ena cavm_tofcx_204c_rxx_crc12_ena_t;

static inline uint64_t CAVM_TOFCX_204C_RXX_CRC12_ENA(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_204C_RXX_CRC12_ENA(uint64_t a, uint64_t b)
{
    if ((a<=3) && (b==0))
        return 0x87e042e0b598ll + 0x80000ll * ((a) & 0x3) + 0x800ll * ((b) & 0x0);
    __cavm_csr_fatal("TOFCX_204C_RXX_CRC12_ENA", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_204C_RXX_CRC12_ENA(a,b) cavm_tofcx_204c_rxx_crc12_ena_t
#define bustype_CAVM_TOFCX_204C_RXX_CRC12_ENA(a,b) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_204C_RXX_CRC12_ENA(a,b) "TOFCX_204C_RXX_CRC12_ENA"
#define busnum_CAVM_TOFCX_204C_RXX_CRC12_ENA(a,b) (a)
#define arguments_CAVM_TOFCX_204C_RXX_CRC12_ENA(a,b) (a),(b),-1,-1

/**
 * Register (RSL) tofc#_204c_rx#_crc3_ena
 *
 * JESD204C RX CRC3 Enable Register
 */
union cavm_tofcx_204c_rxx_crc3_ena
{
    uint64_t u;
    struct cavm_tofcx_204c_rxx_crc3_ena_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t enable                : 1;  /**< [  0:  0](R/W) JESD204C RX CRC3 enable. */
#else /* Word 0 - Little Endian */
        uint64_t enable                : 1;  /**< [  0:  0](R/W) JESD204C RX CRC3 enable. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_204c_rxx_crc3_ena_s cn; */
};
typedef union cavm_tofcx_204c_rxx_crc3_ena cavm_tofcx_204c_rxx_crc3_ena_t;

static inline uint64_t CAVM_TOFCX_204C_RXX_CRC3_ENA(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_204C_RXX_CRC3_ENA(uint64_t a, uint64_t b)
{
    if ((a<=3) && (b==0))
        return 0x87e042e0b590ll + 0x80000ll * ((a) & 0x3) + 0x800ll * ((b) & 0x0);
    __cavm_csr_fatal("TOFCX_204C_RXX_CRC3_ENA", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_204C_RXX_CRC3_ENA(a,b) cavm_tofcx_204c_rxx_crc3_ena_t
#define bustype_CAVM_TOFCX_204C_RXX_CRC3_ENA(a,b) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_204C_RXX_CRC3_ENA(a,b) "TOFCX_204C_RXX_CRC3_ENA"
#define busnum_CAVM_TOFCX_204C_RXX_CRC3_ENA(a,b) (a)
#define arguments_CAVM_TOFCX_204C_RXX_CRC3_ENA(a,b) (a),(b),-1,-1

/**
 * Register (RSL) tofc#_204c_rx#_e
 *
 * JESD204C RX Extended Multiblock Size Register
 */
union cavm_tofcx_204c_rxx_e
{
    uint64_t u;
    struct cavm_tofcx_204c_rxx_e_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t e_size                : 8;  /**< [  7:  0](R/W) JESD204C RX extended multiblock size. Encoding is value minus 1. */
#else /* Word 0 - Little Endian */
        uint64_t e_size                : 8;  /**< [  7:  0](R/W) JESD204C RX extended multiblock size. Encoding is value minus 1. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_204c_rxx_e_s cn; */
};
typedef union cavm_tofcx_204c_rxx_e cavm_tofcx_204c_rxx_e_t;

static inline uint64_t CAVM_TOFCX_204C_RXX_E(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_204C_RXX_E(uint64_t a, uint64_t b)
{
    if ((a<=3) && (b==0))
        return 0x87e042e0b5a8ll + 0x80000ll * ((a) & 0x3) + 0x800ll * ((b) & 0x0);
    __cavm_csr_fatal("TOFCX_204C_RXX_E", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_204C_RXX_E(a,b) cavm_tofcx_204c_rxx_e_t
#define bustype_CAVM_TOFCX_204C_RXX_E(a,b) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_204C_RXX_E(a,b) "TOFCX_204C_RXX_E"
#define busnum_CAVM_TOFCX_204C_RXX_E(a,b) (a)
#define arguments_CAVM_TOFCX_204C_RXX_E(a,b) (a),(b),-1,-1

/**
 * Register (RSL) tofc#_204c_rx#_emb_err_thresh
 *
 * JESD204C RX EMB Error Threshold Register
 */
union cavm_tofcx_204c_rxx_emb_err_thresh
{
    uint64_t u;
    struct cavm_tofcx_204c_rxx_emb_err_thresh_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t threshold             : 6;  /**< [  5:  0](R/W) Extended Multi Block state machine error threshold */
#else /* Word 0 - Little Endian */
        uint64_t threshold             : 6;  /**< [  5:  0](R/W) Extended Multi Block state machine error threshold */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_204c_rxx_emb_err_thresh_s cn; */
};
typedef union cavm_tofcx_204c_rxx_emb_err_thresh cavm_tofcx_204c_rxx_emb_err_thresh_t;

static inline uint64_t CAVM_TOFCX_204C_RXX_EMB_ERR_THRESH(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_204C_RXX_EMB_ERR_THRESH(uint64_t a, uint64_t b)
{
    if ((a<=3) && (b==0))
        return 0x87e042e0b6c0ll + 0x80000ll * ((a) & 0x3) + 0x800ll * ((b) & 0x0);
    __cavm_csr_fatal("TOFCX_204C_RXX_EMB_ERR_THRESH", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_204C_RXX_EMB_ERR_THRESH(a,b) cavm_tofcx_204c_rxx_emb_err_thresh_t
#define bustype_CAVM_TOFCX_204C_RXX_EMB_ERR_THRESH(a,b) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_204C_RXX_EMB_ERR_THRESH(a,b) "TOFCX_204C_RXX_EMB_ERR_THRESH"
#define busnum_CAVM_TOFCX_204C_RXX_EMB_ERR_THRESH(a,b) (a)
#define arguments_CAVM_TOFCX_204C_RXX_EMB_ERR_THRESH(a,b) (a),(b),-1,-1

/**
 * Register (RSL) tofc#_204c_rx#_emb_lock_loss
 *
 * JESD204C RX EMB Lock Loss Status Register
 */
union cavm_tofcx_204c_rxx_emb_lock_loss
{
    uint64_t u;
    struct cavm_tofcx_204c_rxx_emb_lock_loss_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t lock_loss             : 4;  /**< [  3:  0](RO/H) Indicates if EMB lock was lost per lane. */
#else /* Word 0 - Little Endian */
        uint64_t lock_loss             : 4;  /**< [  3:  0](RO/H) Indicates if EMB lock was lost per lane. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_204c_rxx_emb_lock_loss_s cn; */
};
typedef union cavm_tofcx_204c_rxx_emb_lock_loss cavm_tofcx_204c_rxx_emb_lock_loss_t;

static inline uint64_t CAVM_TOFCX_204C_RXX_EMB_LOCK_LOSS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_204C_RXX_EMB_LOCK_LOSS(uint64_t a, uint64_t b)
{
    if ((a<=3) && (b==0))
        return 0x87e042e0b5f0ll + 0x80000ll * ((a) & 0x3) + 0x800ll * ((b) & 0x0);
    __cavm_csr_fatal("TOFCX_204C_RXX_EMB_LOCK_LOSS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_204C_RXX_EMB_LOCK_LOSS(a,b) cavm_tofcx_204c_rxx_emb_lock_loss_t
#define bustype_CAVM_TOFCX_204C_RXX_EMB_LOCK_LOSS(a,b) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_204C_RXX_EMB_LOCK_LOSS(a,b) "TOFCX_204C_RXX_EMB_LOCK_LOSS"
#define busnum_CAVM_TOFCX_204C_RXX_EMB_LOCK_LOSS(a,b) (a)
#define arguments_CAVM_TOFCX_204C_RXX_EMB_LOCK_LOSS(a,b) (a),(b),-1,-1

/**
 * Register (RSL) tofc#_204c_rx#_emb_lock_status
 *
 * JESD204C RX EMB Lock Status Register
 */
union cavm_tofcx_204c_rxx_emb_lock_status
{
    uint64_t u;
    struct cavm_tofcx_204c_rxx_emb_lock_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t lock                  : 4;  /**< [  3:  0](RO/H) EMB lock status per lane. */
#else /* Word 0 - Little Endian */
        uint64_t lock                  : 4;  /**< [  3:  0](RO/H) EMB lock status per lane. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_204c_rxx_emb_lock_status_s cn; */
};
typedef union cavm_tofcx_204c_rxx_emb_lock_status cavm_tofcx_204c_rxx_emb_lock_status_t;

static inline uint64_t CAVM_TOFCX_204C_RXX_EMB_LOCK_STATUS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_204C_RXX_EMB_LOCK_STATUS(uint64_t a, uint64_t b)
{
    if ((a<=3) && (b==0))
        return 0x87e042e0b5e8ll + 0x80000ll * ((a) & 0x3) + 0x800ll * ((b) & 0x0);
    __cavm_csr_fatal("TOFCX_204C_RXX_EMB_LOCK_STATUS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_204C_RXX_EMB_LOCK_STATUS(a,b) cavm_tofcx_204c_rxx_emb_lock_status_t
#define bustype_CAVM_TOFCX_204C_RXX_EMB_LOCK_STATUS(a,b) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_204C_RXX_EMB_LOCK_STATUS(a,b) "TOFCX_204C_RXX_EMB_LOCK_STATUS"
#define busnum_CAVM_TOFCX_204C_RXX_EMB_LOCK_STATUS(a,b) (a)
#define arguments_CAVM_TOFCX_204C_RXX_EMB_LOCK_STATUS(a,b) (a),(b),-1,-1

/**
 * Register (RSL) tofc#_204c_rx#_en_module
 *
 * JESD204C RX Enable Module Register
 */
union cavm_tofcx_204c_rxx_en_module
{
    uint64_t u;
    struct cavm_tofcx_204c_rxx_en_module_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t enable_module         : 1;  /**< [  0:  0](R/W) Enable operation of the module. */
#else /* Word 0 - Little Endian */
        uint64_t enable_module         : 1;  /**< [  0:  0](R/W) Enable operation of the module. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_204c_rxx_en_module_s cn; */
};
typedef union cavm_tofcx_204c_rxx_en_module cavm_tofcx_204c_rxx_en_module_t;

static inline uint64_t CAVM_TOFCX_204C_RXX_EN_MODULE(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_204C_RXX_EN_MODULE(uint64_t a, uint64_t b)
{
    if ((a<=3) && (b==0))
        return 0x87e042e0b0a0ll + 0x80000ll * ((a) & 0x3) + 0x800ll * ((b) & 0x0);
    __cavm_csr_fatal("TOFCX_204C_RXX_EN_MODULE", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_204C_RXX_EN_MODULE(a,b) cavm_tofcx_204c_rxx_en_module_t
#define bustype_CAVM_TOFCX_204C_RXX_EN_MODULE(a,b) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_204C_RXX_EN_MODULE(a,b) "TOFCX_204C_RXX_EN_MODULE"
#define busnum_CAVM_TOFCX_204C_RXX_EN_MODULE(a,b) (a)
#define arguments_CAVM_TOFCX_204C_RXX_EN_MODULE(a,b) (a),(b),-1,-1

/**
 * Register (RSL) tofc#_204c_rx#_fec_ena
 *
 * JESD204C RX FEC Enable Register
 */
union cavm_tofcx_204c_rxx_fec_ena
{
    uint64_t u;
    struct cavm_tofcx_204c_rxx_fec_ena_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t enable                : 1;  /**< [  0:  0](R/W) JESD204C RX FEC enable. */
#else /* Word 0 - Little Endian */
        uint64_t enable                : 1;  /**< [  0:  0](R/W) JESD204C RX FEC enable. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_204c_rxx_fec_ena_s cn; */
};
typedef union cavm_tofcx_204c_rxx_fec_ena cavm_tofcx_204c_rxx_fec_ena_t;

static inline uint64_t CAVM_TOFCX_204C_RXX_FEC_ENA(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_204C_RXX_FEC_ENA(uint64_t a, uint64_t b)
{
    if ((a<=3) && (b==0))
        return 0x87e042e0b588ll + 0x80000ll * ((a) & 0x3) + 0x800ll * ((b) & 0x0);
    __cavm_csr_fatal("TOFCX_204C_RXX_FEC_ENA", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_204C_RXX_FEC_ENA(a,b) cavm_tofcx_204c_rxx_fec_ena_t
#define bustype_CAVM_TOFCX_204C_RXX_FEC_ENA(a,b) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_204C_RXX_FEC_ENA(a,b) "TOFCX_204C_RXX_FEC_ENA"
#define busnum_CAVM_TOFCX_204C_RXX_FEC_ENA(a,b) (a)
#define arguments_CAVM_TOFCX_204C_RXX_FEC_ENA(a,b) (a),(b),-1,-1

/**
 * Register (RSL) tofc#_204c_rx#_int_mask
 *
 * JESD204C RX Interrupt Mask Register
 */
union cavm_tofcx_204c_rxx_int_mask
{
    uint64_t u;
    struct cavm_tofcx_204c_rxx_int_mask_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t overrun_mask          : 1;  /**< [  1:  1](R/W) Mask bit for overrun interrupt. */
        uint64_t underrun_mask         : 1;  /**< [  0:  0](R/W) Mask bit for underrun interrupt. */
#else /* Word 0 - Little Endian */
        uint64_t underrun_mask         : 1;  /**< [  0:  0](R/W) Mask bit for underrun interrupt. */
        uint64_t overrun_mask          : 1;  /**< [  1:  1](R/W) Mask bit for overrun interrupt. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_204c_rxx_int_mask_s cn; */
};
typedef union cavm_tofcx_204c_rxx_int_mask cavm_tofcx_204c_rxx_int_mask_t;

static inline uint64_t CAVM_TOFCX_204C_RXX_INT_MASK(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_204C_RXX_INT_MASK(uint64_t a, uint64_t b)
{
    if ((a<=3) && (b==0))
        return 0x87e042e0b248ll + 0x80000ll * ((a) & 0x3) + 0x800ll * ((b) & 0x0);
    __cavm_csr_fatal("TOFCX_204C_RXX_INT_MASK", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_204C_RXX_INT_MASK(a,b) cavm_tofcx_204c_rxx_int_mask_t
#define bustype_CAVM_TOFCX_204C_RXX_INT_MASK(a,b) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_204C_RXX_INT_MASK(a,b) "TOFCX_204C_RXX_INT_MASK"
#define busnum_CAVM_TOFCX_204C_RXX_INT_MASK(a,b) (a)
#define arguments_CAVM_TOFCX_204C_RXX_INT_MASK(a,b) (a),(b),-1,-1

/**
 * Register (RSL) tofc#_204c_rx#_int_status
 *
 * JESD204C RX Interrupt Status Register
 */
union cavm_tofcx_204c_rxx_int_status
{
    uint64_t u;
    struct cavm_tofcx_204c_rxx_int_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t overrun               : 1;  /**< [  1:  1](RC/W/H) Detected an overrun error condition. */
        uint64_t underrun              : 1;  /**< [  0:  0](RC/W/H) Detected an underrun error condition. */
#else /* Word 0 - Little Endian */
        uint64_t underrun              : 1;  /**< [  0:  0](RC/W/H) Detected an underrun error condition. */
        uint64_t overrun               : 1;  /**< [  1:  1](RC/W/H) Detected an overrun error condition. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_204c_rxx_int_status_s cn; */
};
typedef union cavm_tofcx_204c_rxx_int_status cavm_tofcx_204c_rxx_int_status_t;

static inline uint64_t CAVM_TOFCX_204C_RXX_INT_STATUS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_204C_RXX_INT_STATUS(uint64_t a, uint64_t b)
{
    if ((a<=3) && (b==0))
        return 0x87e042e0b250ll + 0x80000ll * ((a) & 0x3) + 0x800ll * ((b) & 0x0);
    __cavm_csr_fatal("TOFCX_204C_RXX_INT_STATUS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_204C_RXX_INT_STATUS(a,b) cavm_tofcx_204c_rxx_int_status_t
#define bustype_CAVM_TOFCX_204C_RXX_INT_STATUS(a,b) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_204C_RXX_INT_STATUS(a,b) "TOFCX_204C_RXX_INT_STATUS"
#define busnum_CAVM_TOFCX_204C_RXX_INT_STATUS(a,b) (a)
#define arguments_CAVM_TOFCX_204C_RXX_INT_STATUS(a,b) (a),(b),-1,-1

/**
 * Register (RSL) tofc#_204c_rx#_l
 *
 * JESD204C RX Lanes Register
 */
union cavm_tofcx_204c_rxx_l
{
    uint64_t u;
    struct cavm_tofcx_204c_rxx_l_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t l                     : 5;  /**< [  4:  0](R/W) Number of lanes per converter device minus one. */
#else /* Word 0 - Little Endian */
        uint64_t l                     : 5;  /**< [  4:  0](R/W) Number of lanes per converter device minus one. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_204c_rxx_l_s cn; */
};
typedef union cavm_tofcx_204c_rxx_l cavm_tofcx_204c_rxx_l_t;

static inline uint64_t CAVM_TOFCX_204C_RXX_L(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_204C_RXX_L(uint64_t a, uint64_t b)
{
    if ((a<=3) && (b==0))
        return 0x87e042e0b060ll + 0x80000ll * ((a) & 0x3) + 0x800ll * ((b) & 0x0);
    __cavm_csr_fatal("TOFCX_204C_RXX_L", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_204C_RXX_L(a,b) cavm_tofcx_204c_rxx_l_t
#define bustype_CAVM_TOFCX_204C_RXX_L(a,b) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_204C_RXX_L(a,b) "TOFCX_204C_RXX_L"
#define busnum_CAVM_TOFCX_204C_RXX_L(a,b) (a)
#define arguments_CAVM_TOFCX_204C_RXX_L(a,b) (a),(b),-1,-1

/**
 * Register (RSL) tofc#_204c_rx#_l#_err_rpt
 *
 * JESD204C RX Lane Error Report Register
 */
union cavm_tofcx_204c_rxx_lx_err_rpt
{
    uint64_t u;
    struct cavm_tofcx_204c_rxx_lx_err_rpt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_10_63        : 54;
        uint64_t err_rpt               : 10; /**< [  9:  0](RC/H) JESD204C RX ERROR REPORT.
                                                                   Bit[9] Reserved.
                                                                   Bit[8] Identifies "11" or "00" received in expected sync header location.  0:
                                                                 no error, 1: unexpected "11" or "00".
                                                                   Bit[7] Identifies the "00001" sequence in the pilot signal is received at an
                                                                 unexpected location in the sync word.  0: no error, 1: unexpected pilot signals.
                                                                   Bit[6] The EoEMB identifier in the pilot signal has an unexpected value.  0:
                                                                 no error, 1: unexpected EoEMB.
                                                                   Bit[5] Reserved.
                                                                   Bit[4] Reserved.
                                                                   Bit[3] Reserved.
                                                                   Bit[2] CRC3 error. 0: no error, 1: parity mismatch.
                                                                   Bit[1] CRC12 error. 0: no error, 1: parity mismatch.
                                                                   Bit[0] Uncorrectable FEC error. 0: no error, 1: error is detected that cannot be corrected. */
#else /* Word 0 - Little Endian */
        uint64_t err_rpt               : 10; /**< [  9:  0](RC/H) JESD204C RX ERROR REPORT.
                                                                   Bit[9] Reserved.
                                                                   Bit[8] Identifies "11" or "00" received in expected sync header location.  0:
                                                                 no error, 1: unexpected "11" or "00".
                                                                   Bit[7] Identifies the "00001" sequence in the pilot signal is received at an
                                                                 unexpected location in the sync word.  0: no error, 1: unexpected pilot signals.
                                                                   Bit[6] The EoEMB identifier in the pilot signal has an unexpected value.  0:
                                                                 no error, 1: unexpected EoEMB.
                                                                   Bit[5] Reserved.
                                                                   Bit[4] Reserved.
                                                                   Bit[3] Reserved.
                                                                   Bit[2] CRC3 error. 0: no error, 1: parity mismatch.
                                                                   Bit[1] CRC12 error. 0: no error, 1: parity mismatch.
                                                                   Bit[0] Uncorrectable FEC error. 0: no error, 1: error is detected that cannot be corrected. */
        uint64_t reserved_10_63        : 54;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_204c_rxx_lx_err_rpt_s cn; */
};
typedef union cavm_tofcx_204c_rxx_lx_err_rpt cavm_tofcx_204c_rxx_lx_err_rpt_t;

static inline uint64_t CAVM_TOFCX_204C_RXX_LX_ERR_RPT(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_204C_RXX_LX_ERR_RPT(uint64_t a, uint64_t b, uint64_t c)
{
    if ((a<=3) && (b==0) && (c<=3))
        return 0x87e042e0b600ll + 0x80000ll * ((a) & 0x3) + 0x800ll * ((b) & 0x0) + 8ll * ((c) & 0x3);
    __cavm_csr_fatal("TOFCX_204C_RXX_LX_ERR_RPT", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_204C_RXX_LX_ERR_RPT(a,b,c) cavm_tofcx_204c_rxx_lx_err_rpt_t
#define bustype_CAVM_TOFCX_204C_RXX_LX_ERR_RPT(a,b,c) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_204C_RXX_LX_ERR_RPT(a,b,c) "TOFCX_204C_RXX_LX_ERR_RPT"
#define busnum_CAVM_TOFCX_204C_RXX_LX_ERR_RPT(a,b,c) (a)
#define arguments_CAVM_TOFCX_204C_RXX_LX_ERR_RPT(a,b,c) (a),(b),(c),-1

/**
 * Register (RSL) tofc#_204c_rx#_lemc_bp
 *
 * JESD204C RX LEMC Boundary Phase Register
 */
union cavm_tofcx_204c_rxx_lemc_bp
{
    uint64_t u;
    struct cavm_tofcx_204c_rxx_lemc_bp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t phase                 : 8;  /**< [  7:  0](RO/H) JESD204C_RX_LEMC_BOUNDARY_PHASE. */
#else /* Word 0 - Little Endian */
        uint64_t phase                 : 8;  /**< [  7:  0](RO/H) JESD204C_RX_LEMC_BOUNDARY_PHASE. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_204c_rxx_lemc_bp_s cn; */
};
typedef union cavm_tofcx_204c_rxx_lemc_bp cavm_tofcx_204c_rxx_lemc_bp_t;

static inline uint64_t CAVM_TOFCX_204C_RXX_LEMC_BP(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_204C_RXX_LEMC_BP(uint64_t a, uint64_t b)
{
    if ((a<=3) && (b==0))
        return 0x87e042e0b5d0ll + 0x80000ll * ((a) & 0x3) + 0x800ll * ((b) & 0x0);
    __cavm_csr_fatal("TOFCX_204C_RXX_LEMC_BP", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_204C_RXX_LEMC_BP(a,b) cavm_tofcx_204c_rxx_lemc_bp_t
#define bustype_CAVM_TOFCX_204C_RXX_LEMC_BP(a,b) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_204C_RXX_LEMC_BP(a,b) "TOFCX_204C_RXX_LEMC_BP"
#define busnum_CAVM_TOFCX_204C_RXX_LEMC_BP(a,b) (a)
#define arguments_CAVM_TOFCX_204C_RXX_LEMC_BP(a,b) (a),(b),-1,-1

/**
 * Register (RSL) tofc#_204c_rx#_lemc_delay
 *
 * JESD204C RX LEMC Delay Register
 */
union cavm_tofcx_204c_rxx_lemc_delay
{
    uint64_t u;
    struct cavm_tofcx_204c_rxx_lemc_delay_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t lemc_delay            : 5;  /**< [  4:  0](R/W) The LEMC buffer is used to delay the data from the time SYSREF is received
                                                                 until the next LEMC. */
#else /* Word 0 - Little Endian */
        uint64_t lemc_delay            : 5;  /**< [  4:  0](R/W) The LEMC buffer is used to delay the data from the time SYSREF is received
                                                                 until the next LEMC. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_204c_rxx_lemc_delay_s cn; */
};
typedef union cavm_tofcx_204c_rxx_lemc_delay cavm_tofcx_204c_rxx_lemc_delay_t;

static inline uint64_t CAVM_TOFCX_204C_RXX_LEMC_DELAY(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_204C_RXX_LEMC_DELAY(uint64_t a, uint64_t b)
{
    if ((a<=3) && (b==0))
        return 0x87e042e0b5c0ll + 0x80000ll * ((a) & 0x3) + 0x800ll * ((b) & 0x0);
    __cavm_csr_fatal("TOFCX_204C_RXX_LEMC_DELAY", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_204C_RXX_LEMC_DELAY(a,b) cavm_tofcx_204c_rxx_lemc_delay_t
#define bustype_CAVM_TOFCX_204C_RXX_LEMC_DELAY(a,b) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_204C_RXX_LEMC_DELAY(a,b) "TOFCX_204C_RXX_LEMC_DELAY"
#define busnum_CAVM_TOFCX_204C_RXX_LEMC_DELAY(a,b) (a)
#define arguments_CAVM_TOFCX_204C_RXX_LEMC_DELAY(a,b) (a),(b),-1,-1

/**
 * Register (RSL) tofc#_204c_rx#_rbd_octets
 *
 * JESD204C RX RBD Length Octets Register
 */
union cavm_tofcx_204c_rxx_rbd_octets
{
    uint64_t u;
    struct cavm_tofcx_204c_rxx_rbd_octets_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_11_63        : 53;
        uint64_t cnt                   : 11; /**< [ 10:  0](R/W) JESD204C_RX RBD length octets.
                                                                 Receive buffer delay in RX. It is used to adjust the release of the
                                                                 elastic buffer on the receiver side. */
#else /* Word 0 - Little Endian */
        uint64_t cnt                   : 11; /**< [ 10:  0](R/W) JESD204C_RX RBD length octets.
                                                                 Receive buffer delay in RX. It is used to adjust the release of the
                                                                 elastic buffer on the receiver side. */
        uint64_t reserved_11_63        : 53;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_204c_rxx_rbd_octets_s cn; */
};
typedef union cavm_tofcx_204c_rxx_rbd_octets cavm_tofcx_204c_rxx_rbd_octets_t;

static inline uint64_t CAVM_TOFCX_204C_RXX_RBD_OCTETS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_204C_RXX_RBD_OCTETS(uint64_t a, uint64_t b)
{
    if ((a<=3) && (b==0))
        return 0x87e042e0b258ll + 0x80000ll * ((a) & 0x3) + 0x800ll * ((b) & 0x0);
    __cavm_csr_fatal("TOFCX_204C_RXX_RBD_OCTETS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_204C_RXX_RBD_OCTETS(a,b) cavm_tofcx_204c_rxx_rbd_octets_t
#define bustype_CAVM_TOFCX_204C_RXX_RBD_OCTETS(a,b) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_204C_RXX_RBD_OCTETS(a,b) "TOFCX_204C_RXX_RBD_OCTETS"
#define busnum_CAVM_TOFCX_204C_RXX_RBD_OCTETS(a,b) (a)
#define arguments_CAVM_TOFCX_204C_RXX_RBD_OCTETS(a,b) (a),(b),-1,-1

/**
 * Register (RSL) tofc#_204c_rx#_sh_err_thresh
 *
 * JESD204C RX SH Error Threshold Register
 */
union cavm_tofcx_204c_rxx_sh_err_thresh
{
    uint64_t u;
    struct cavm_tofcx_204c_rxx_sh_err_thresh_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t threshold             : 6;  /**< [  5:  0](R/W) Sync header state machine error threshold */
#else /* Word 0 - Little Endian */
        uint64_t threshold             : 6;  /**< [  5:  0](R/W) Sync header state machine error threshold */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_204c_rxx_sh_err_thresh_s cn; */
};
typedef union cavm_tofcx_204c_rxx_sh_err_thresh cavm_tofcx_204c_rxx_sh_err_thresh_t;

static inline uint64_t CAVM_TOFCX_204C_RXX_SH_ERR_THRESH(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_204C_RXX_SH_ERR_THRESH(uint64_t a, uint64_t b)
{
    if ((a<=3) && (b==0))
        return 0x87e042e0b6c8ll + 0x80000ll * ((a) & 0x3) + 0x800ll * ((b) & 0x0);
    __cavm_csr_fatal("TOFCX_204C_RXX_SH_ERR_THRESH", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_204C_RXX_SH_ERR_THRESH(a,b) cavm_tofcx_204c_rxx_sh_err_thresh_t
#define bustype_CAVM_TOFCX_204C_RXX_SH_ERR_THRESH(a,b) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_204C_RXX_SH_ERR_THRESH(a,b) "TOFCX_204C_RXX_SH_ERR_THRESH"
#define busnum_CAVM_TOFCX_204C_RXX_SH_ERR_THRESH(a,b) (a)
#define arguments_CAVM_TOFCX_204C_RXX_SH_ERR_THRESH(a,b) (a),(b),-1,-1

/**
 * Register (RSL) tofc#_204c_rx#_sh_lock_loss
 *
 * JESD204C RX SH Lock Loss Status Register
 */
union cavm_tofcx_204c_rxx_sh_lock_loss
{
    uint64_t u;
    struct cavm_tofcx_204c_rxx_sh_lock_loss_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t lock_loss             : 4;  /**< [  3:  0](RO/H) Indicates if SH lock was lost per lane. */
#else /* Word 0 - Little Endian */
        uint64_t lock_loss             : 4;  /**< [  3:  0](RO/H) Indicates if SH lock was lost per lane. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_204c_rxx_sh_lock_loss_s cn; */
};
typedef union cavm_tofcx_204c_rxx_sh_lock_loss cavm_tofcx_204c_rxx_sh_lock_loss_t;

static inline uint64_t CAVM_TOFCX_204C_RXX_SH_LOCK_LOSS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_204C_RXX_SH_LOCK_LOSS(uint64_t a, uint64_t b)
{
    if ((a<=3) && (b==0))
        return 0x87e042e0b5e0ll + 0x80000ll * ((a) & 0x3) + 0x800ll * ((b) & 0x0);
    __cavm_csr_fatal("TOFCX_204C_RXX_SH_LOCK_LOSS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_204C_RXX_SH_LOCK_LOSS(a,b) cavm_tofcx_204c_rxx_sh_lock_loss_t
#define bustype_CAVM_TOFCX_204C_RXX_SH_LOCK_LOSS(a,b) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_204C_RXX_SH_LOCK_LOSS(a,b) "TOFCX_204C_RXX_SH_LOCK_LOSS"
#define busnum_CAVM_TOFCX_204C_RXX_SH_LOCK_LOSS(a,b) (a)
#define arguments_CAVM_TOFCX_204C_RXX_SH_LOCK_LOSS(a,b) (a),(b),-1,-1

/**
 * Register (RSL) tofc#_204c_rx#_sh_lock_status
 *
 * JESD204C RX SH Lock Status Register
 */
union cavm_tofcx_204c_rxx_sh_lock_status
{
    uint64_t u;
    struct cavm_tofcx_204c_rxx_sh_lock_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t lock                  : 4;  /**< [  3:  0](RO/H) SH lock status per lane. */
#else /* Word 0 - Little Endian */
        uint64_t lock                  : 4;  /**< [  3:  0](RO/H) SH lock status per lane. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_204c_rxx_sh_lock_status_s cn; */
};
typedef union cavm_tofcx_204c_rxx_sh_lock_status cavm_tofcx_204c_rxx_sh_lock_status_t;

static inline uint64_t CAVM_TOFCX_204C_RXX_SH_LOCK_STATUS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_204C_RXX_SH_LOCK_STATUS(uint64_t a, uint64_t b)
{
    if ((a<=3) && (b==0))
        return 0x87e042e0b5d8ll + 0x80000ll * ((a) & 0x3) + 0x800ll * ((b) & 0x0);
    __cavm_csr_fatal("TOFCX_204C_RXX_SH_LOCK_STATUS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_204C_RXX_SH_LOCK_STATUS(a,b) cavm_tofcx_204c_rxx_sh_lock_status_t
#define bustype_CAVM_TOFCX_204C_RXX_SH_LOCK_STATUS(a,b) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_204C_RXX_SH_LOCK_STATUS(a,b) "TOFCX_204C_RXX_SH_LOCK_STATUS"
#define busnum_CAVM_TOFCX_204C_RXX_SH_LOCK_STATUS(a,b) (a)
#define arguments_CAVM_TOFCX_204C_RXX_SH_LOCK_STATUS(a,b) (a),(b),-1,-1

/**
 * Register (RSL) tofc#_204c_rx#_subclass
 *
 * JESD204C RX Sync Subclass Register
 */
union cavm_tofcx_204c_rxx_subclass
{
    uint64_t u;
    struct cavm_tofcx_204c_rxx_subclass_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t subclass              : 1;  /**< [  0:  0](R/W) Subclass mode of operation:
                                                                 0x0: Subclass 0.
                                                                 0x1: Subclass 1.
                                                                 0x2: Subclass 2.
                                                                 0x3-0x7: Reserved. */
#else /* Word 0 - Little Endian */
        uint64_t subclass              : 1;  /**< [  0:  0](R/W) Subclass mode of operation:
                                                                 0x0: Subclass 0.
                                                                 0x1: Subclass 1.
                                                                 0x2: Subclass 2.
                                                                 0x3-0x7: Reserved. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_204c_rxx_subclass_s cn; */
};
typedef union cavm_tofcx_204c_rxx_subclass cavm_tofcx_204c_rxx_subclass_t;

static inline uint64_t CAVM_TOFCX_204C_RXX_SUBCLASS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_204C_RXX_SUBCLASS(uint64_t a, uint64_t b)
{
    if ((a<=3) && (b==0))
        return 0x87e042e0b038ll + 0x80000ll * ((a) & 0x3) + 0x800ll * ((b) & 0x0);
    __cavm_csr_fatal("TOFCX_204C_RXX_SUBCLASS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_204C_RXX_SUBCLASS(a,b) cavm_tofcx_204c_rxx_subclass_t
#define bustype_CAVM_TOFCX_204C_RXX_SUBCLASS(a,b) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_204C_RXX_SUBCLASS(a,b) "TOFCX_204C_RXX_SUBCLASS"
#define busnum_CAVM_TOFCX_204C_RXX_SUBCLASS(a,b) (a)
#define arguments_CAVM_TOFCX_204C_RXX_SUBCLASS(a,b) (a),(b),-1,-1

/**
 * Register (RSL) tofc#_204c_rx#_sysref_ms
 *
 * JESD204C RX Maximum Shift Register
 */
union cavm_tofcx_204c_rxx_sysref_ms
{
    uint64_t u;
    struct cavm_tofcx_204c_rxx_sysref_ms_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t maxshift              : 5;  /**< [  4:  0](R/W) Maximum shift range. SYSREF will not be corrected if a new one arrives in
                                                                 the specified range. The system will therefore adjust to it without
                                                                 resetting the counters related to frame and other timing.
                                                                 When [MAXSHIFT] = 1, TOFC will accept a SYSREF pulse in cycle -1, 0 and +1,
                                                                 where 0 is the cycle when SYSREF is expected to arrive. */
#else /* Word 0 - Little Endian */
        uint64_t maxshift              : 5;  /**< [  4:  0](R/W) Maximum shift range. SYSREF will not be corrected if a new one arrives in
                                                                 the specified range. The system will therefore adjust to it without
                                                                 resetting the counters related to frame and other timing.
                                                                 When [MAXSHIFT] = 1, TOFC will accept a SYSREF pulse in cycle -1, 0 and +1,
                                                                 where 0 is the cycle when SYSREF is expected to arrive. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_204c_rxx_sysref_ms_s cn; */
};
typedef union cavm_tofcx_204c_rxx_sysref_ms cavm_tofcx_204c_rxx_sysref_ms_t;

static inline uint64_t CAVM_TOFCX_204C_RXX_SYSREF_MS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_204C_RXX_SYSREF_MS(uint64_t a, uint64_t b)
{
    if ((a<=3) && (b==0))
        return 0x87e042e0b5c8ll + 0x80000ll * ((a) & 0x3) + 0x800ll * ((b) & 0x0);
    __cavm_csr_fatal("TOFCX_204C_RXX_SYSREF_MS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_204C_RXX_SYSREF_MS(a,b) cavm_tofcx_204c_rxx_sysref_ms_t
#define bustype_CAVM_TOFCX_204C_RXX_SYSREF_MS(a,b) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_204C_RXX_SYSREF_MS(a,b) "TOFCX_204C_RXX_SYSREF_MS"
#define busnum_CAVM_TOFCX_204C_RXX_SYSREF_MS(a,b) (a)
#define arguments_CAVM_TOFCX_204C_RXX_SYSREF_MS(a,b) (a),(b),-1,-1

/**
 * Register (RSL) tofc#_204c_tx#_bit_order
 *
 * JESD204C TX Bit Order Register
 */
union cavm_tofcx_204c_txx_bit_order
{
    uint64_t u;
    struct cavm_tofcx_204c_txx_bit_order_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_3_63         : 61;
        uint64_t bit_order             : 3;  /**< [  2:  0](R/W) Bit ordering before and after scrambling.
                                                                 0x0 = no bit reversing.
                                                                 \<0\> - Bit reversing on descrambled data side.
                                                                 \<1\> - Bit reversing on scrambled data side.
                                                                 \<2\> - Bit reversing after scrambler before CRC/FEC. */
#else /* Word 0 - Little Endian */
        uint64_t bit_order             : 3;  /**< [  2:  0](R/W) Bit ordering before and after scrambling.
                                                                 0x0 = no bit reversing.
                                                                 \<0\> - Bit reversing on descrambled data side.
                                                                 \<1\> - Bit reversing on scrambled data side.
                                                                 \<2\> - Bit reversing after scrambler before CRC/FEC. */
        uint64_t reserved_3_63         : 61;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_204c_txx_bit_order_s cn; */
};
typedef union cavm_tofcx_204c_txx_bit_order cavm_tofcx_204c_txx_bit_order_t;

static inline uint64_t CAVM_TOFCX_204C_TXX_BIT_ORDER(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_204C_TXX_BIT_ORDER(uint64_t a, uint64_t b)
{
    if ((a<=3) && (b==0))
        return 0x87e042e095b0ll + 0x80000ll * ((a) & 0x3) + 0x800ll * ((b) & 0x0);
    __cavm_csr_fatal("TOFCX_204C_TXX_BIT_ORDER", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_204C_TXX_BIT_ORDER(a,b) cavm_tofcx_204c_txx_bit_order_t
#define bustype_CAVM_TOFCX_204C_TXX_BIT_ORDER(a,b) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_204C_TXX_BIT_ORDER(a,b) "TOFCX_204C_TXX_BIT_ORDER"
#define busnum_CAVM_TOFCX_204C_TXX_BIT_ORDER(a,b) (a)
#define arguments_CAVM_TOFCX_204C_TXX_BIT_ORDER(a,b) (a),(b),-1,-1

/**
 * Register (RSL) tofc#_204c_tx#_crc12_ena
 *
 * JESD204C TX CRC12 Enable Register
 */
union cavm_tofcx_204c_txx_crc12_ena
{
    uint64_t u;
    struct cavm_tofcx_204c_txx_crc12_ena_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t enable                : 1;  /**< [  0:  0](R/W) CRC12 enable.
                                                                 0 = CRC12 not used.
                                                                 1 = CRC12 used. */
#else /* Word 0 - Little Endian */
        uint64_t enable                : 1;  /**< [  0:  0](R/W) CRC12 enable.
                                                                 0 = CRC12 not used.
                                                                 1 = CRC12 used. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_204c_txx_crc12_ena_s cn; */
};
typedef union cavm_tofcx_204c_txx_crc12_ena cavm_tofcx_204c_txx_crc12_ena_t;

static inline uint64_t CAVM_TOFCX_204C_TXX_CRC12_ENA(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_204C_TXX_CRC12_ENA(uint64_t a, uint64_t b)
{
    if ((a<=3) && (b==0))
        return 0x87e042e09598ll + 0x80000ll * ((a) & 0x3) + 0x800ll * ((b) & 0x0);
    __cavm_csr_fatal("TOFCX_204C_TXX_CRC12_ENA", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_204C_TXX_CRC12_ENA(a,b) cavm_tofcx_204c_txx_crc12_ena_t
#define bustype_CAVM_TOFCX_204C_TXX_CRC12_ENA(a,b) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_204C_TXX_CRC12_ENA(a,b) "TOFCX_204C_TXX_CRC12_ENA"
#define busnum_CAVM_TOFCX_204C_TXX_CRC12_ENA(a,b) (a)
#define arguments_CAVM_TOFCX_204C_TXX_CRC12_ENA(a,b) (a),(b),-1,-1

/**
 * Register (RSL) tofc#_204c_tx#_crc3_ena
 *
 * JESD204C TX CRC3 Enable Register
 */
union cavm_tofcx_204c_txx_crc3_ena
{
    uint64_t u;
    struct cavm_tofcx_204c_txx_crc3_ena_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t enable                : 1;  /**< [  0:  0](R/W) CRC3 enable.
                                                                 0 = CRC3 not used.
                                                                 1 = CRC3 used. */
#else /* Word 0 - Little Endian */
        uint64_t enable                : 1;  /**< [  0:  0](R/W) CRC3 enable.
                                                                 0 = CRC3 not used.
                                                                 1 = CRC3 used. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_204c_txx_crc3_ena_s cn; */
};
typedef union cavm_tofcx_204c_txx_crc3_ena cavm_tofcx_204c_txx_crc3_ena_t;

static inline uint64_t CAVM_TOFCX_204C_TXX_CRC3_ENA(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_204C_TXX_CRC3_ENA(uint64_t a, uint64_t b)
{
    if ((a<=3) && (b==0))
        return 0x87e042e09590ll + 0x80000ll * ((a) & 0x3) + 0x800ll * ((b) & 0x0);
    __cavm_csr_fatal("TOFCX_204C_TXX_CRC3_ENA", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_204C_TXX_CRC3_ENA(a,b) cavm_tofcx_204c_txx_crc3_ena_t
#define bustype_CAVM_TOFCX_204C_TXX_CRC3_ENA(a,b) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_204C_TXX_CRC3_ENA(a,b) "TOFCX_204C_TXX_CRC3_ENA"
#define busnum_CAVM_TOFCX_204C_TXX_CRC3_ENA(a,b) (a)
#define arguments_CAVM_TOFCX_204C_TXX_CRC3_ENA(a,b) (a),(b),-1,-1

/**
 * Register (RSL) tofc#_204c_tx#_e
 *
 * JESD204C TX Extended Multiblock Size Register
 */
union cavm_tofcx_204c_txx_e
{
    uint64_t u;
    struct cavm_tofcx_204c_txx_e_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t e_size                : 8;  /**< [  7:  0](R/W) Number of multiblocks per extended multiblock.
                                                                 Encoding is value minus 1. */
#else /* Word 0 - Little Endian */
        uint64_t e_size                : 8;  /**< [  7:  0](R/W) Number of multiblocks per extended multiblock.
                                                                 Encoding is value minus 1. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_204c_txx_e_s cn; */
};
typedef union cavm_tofcx_204c_txx_e cavm_tofcx_204c_txx_e_t;

static inline uint64_t CAVM_TOFCX_204C_TXX_E(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_204C_TXX_E(uint64_t a, uint64_t b)
{
    if ((a<=3) && (b==0))
        return 0x87e042e095a8ll + 0x80000ll * ((a) & 0x3) + 0x800ll * ((b) & 0x0);
    __cavm_csr_fatal("TOFCX_204C_TXX_E", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_204C_TXX_E(a,b) cavm_tofcx_204c_txx_e_t
#define bustype_CAVM_TOFCX_204C_TXX_E(a,b) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_204C_TXX_E(a,b) "TOFCX_204C_TXX_E"
#define busnum_CAVM_TOFCX_204C_TXX_E(a,b) (a)
#define arguments_CAVM_TOFCX_204C_TXX_E(a,b) (a),(b),-1,-1

/**
 * Register (RSL) tofc#_204c_tx#_en_module
 *
 * JESD204C TX Enable Module Register
 */
union cavm_tofcx_204c_txx_en_module
{
    uint64_t u;
    struct cavm_tofcx_204c_txx_en_module_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t enable_module         : 1;  /**< [  0:  0](R/W) Enable module. */
#else /* Word 0 - Little Endian */
        uint64_t enable_module         : 1;  /**< [  0:  0](R/W) Enable module. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_204c_txx_en_module_s cn; */
};
typedef union cavm_tofcx_204c_txx_en_module cavm_tofcx_204c_txx_en_module_t;

static inline uint64_t CAVM_TOFCX_204C_TXX_EN_MODULE(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_204C_TXX_EN_MODULE(uint64_t a, uint64_t b)
{
    if ((a<=3) && (b==0))
        return 0x87e042e090a0ll + 0x80000ll * ((a) & 0x3) + 0x800ll * ((b) & 0x0);
    __cavm_csr_fatal("TOFCX_204C_TXX_EN_MODULE", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_204C_TXX_EN_MODULE(a,b) cavm_tofcx_204c_txx_en_module_t
#define bustype_CAVM_TOFCX_204C_TXX_EN_MODULE(a,b) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_204C_TXX_EN_MODULE(a,b) "TOFCX_204C_TXX_EN_MODULE"
#define busnum_CAVM_TOFCX_204C_TXX_EN_MODULE(a,b) (a)
#define arguments_CAVM_TOFCX_204C_TXX_EN_MODULE(a,b) (a),(b),-1,-1

/**
 * Register (RSL) tofc#_204c_tx#_fec_ena
 *
 * JESD204C TX FEC Enable Register
 */
union cavm_tofcx_204c_txx_fec_ena
{
    uint64_t u;
    struct cavm_tofcx_204c_txx_fec_ena_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t enable                : 1;  /**< [  0:  0](R/W) FEC enable.
                                                                 0 = FEC not used.
                                                                 1 = FEC used. */
#else /* Word 0 - Little Endian */
        uint64_t enable                : 1;  /**< [  0:  0](R/W) FEC enable.
                                                                 0 = FEC not used.
                                                                 1 = FEC used. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_204c_txx_fec_ena_s cn; */
};
typedef union cavm_tofcx_204c_txx_fec_ena cavm_tofcx_204c_txx_fec_ena_t;

static inline uint64_t CAVM_TOFCX_204C_TXX_FEC_ENA(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_204C_TXX_FEC_ENA(uint64_t a, uint64_t b)
{
    if ((a<=3) && (b==0))
        return 0x87e042e09588ll + 0x80000ll * ((a) & 0x3) + 0x800ll * ((b) & 0x0);
    __cavm_csr_fatal("TOFCX_204C_TXX_FEC_ENA", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_204C_TXX_FEC_ENA(a,b) cavm_tofcx_204c_txx_fec_ena_t
#define bustype_CAVM_TOFCX_204C_TXX_FEC_ENA(a,b) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_204C_TXX_FEC_ENA(a,b) "TOFCX_204C_TXX_FEC_ENA"
#define busnum_CAVM_TOFCX_204C_TXX_FEC_ENA(a,b) (a)
#define arguments_CAVM_TOFCX_204C_TXX_FEC_ENA(a,b) (a),(b),-1,-1

/**
 * Register (RSL) tofc#_204c_tx#_l
 *
 * JESD204C TX Lanes Register
 */
union cavm_tofcx_204c_txx_l
{
    uint64_t u;
    struct cavm_tofcx_204c_txx_l_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t l                     : 5;  /**< [  4:  0](R/W) Number of lanes per converter device minus one. */
#else /* Word 0 - Little Endian */
        uint64_t l                     : 5;  /**< [  4:  0](R/W) Number of lanes per converter device minus one. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_204c_txx_l_s cn; */
};
typedef union cavm_tofcx_204c_txx_l cavm_tofcx_204c_txx_l_t;

static inline uint64_t CAVM_TOFCX_204C_TXX_L(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_204C_TXX_L(uint64_t a, uint64_t b)
{
    if ((a<=3) && (b==0))
        return 0x87e042e09060ll + 0x80000ll * ((a) & 0x3) + 0x800ll * ((b) & 0x0);
    __cavm_csr_fatal("TOFCX_204C_TXX_L", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_204C_TXX_L(a,b) cavm_tofcx_204c_txx_l_t
#define bustype_CAVM_TOFCX_204C_TXX_L(a,b) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_204C_TXX_L(a,b) "TOFCX_204C_TXX_L"
#define busnum_CAVM_TOFCX_204C_TXX_L(a,b) (a)
#define arguments_CAVM_TOFCX_204C_TXX_L(a,b) (a),(b),-1,-1

/**
 * Register (RSL) tofc#_204c_tx#_lemc_delay
 *
 * JESD204C TX LEMC Delay Register
 */
union cavm_tofcx_204c_txx_lemc_delay
{
    uint64_t u;
    struct cavm_tofcx_204c_txx_lemc_delay_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t lemc_delay            : 5;  /**< [  4:  0](R/W) LEMC Delay. */
#else /* Word 0 - Little Endian */
        uint64_t lemc_delay            : 5;  /**< [  4:  0](R/W) LEMC Delay. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_204c_txx_lemc_delay_s cn; */
};
typedef union cavm_tofcx_204c_txx_lemc_delay cavm_tofcx_204c_txx_lemc_delay_t;

static inline uint64_t CAVM_TOFCX_204C_TXX_LEMC_DELAY(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_204C_TXX_LEMC_DELAY(uint64_t a, uint64_t b)
{
    if ((a<=3) && (b==0))
        return 0x87e042e095c0ll + 0x80000ll * ((a) & 0x3) + 0x800ll * ((b) & 0x0);
    __cavm_csr_fatal("TOFCX_204C_TXX_LEMC_DELAY", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_204C_TXX_LEMC_DELAY(a,b) cavm_tofcx_204c_txx_lemc_delay_t
#define bustype_CAVM_TOFCX_204C_TXX_LEMC_DELAY(a,b) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_204C_TXX_LEMC_DELAY(a,b) "TOFCX_204C_TXX_LEMC_DELAY"
#define busnum_CAVM_TOFCX_204C_TXX_LEMC_DELAY(a,b) (a)
#define arguments_CAVM_TOFCX_204C_TXX_LEMC_DELAY(a,b) (a),(b),-1,-1

/**
 * Register (RSL) tofc#_204c_tx#_sample_delay
 *
 * JESD204C TX Sample Delay Register
 */
union cavm_tofcx_204c_txx_sample_delay
{
    uint64_t u;
    struct cavm_tofcx_204c_txx_sample_delay_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t sample_delay          : 7;  /**< [  6:  0](R/W) Number of clock character cycles that the sample request is going to anticipate in
                                                                 relationship with Sysref. */
#else /* Word 0 - Little Endian */
        uint64_t sample_delay          : 7;  /**< [  6:  0](R/W) Number of clock character cycles that the sample request is going to anticipate in
                                                                 relationship with Sysref. */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_204c_txx_sample_delay_s cn; */
};
typedef union cavm_tofcx_204c_txx_sample_delay cavm_tofcx_204c_txx_sample_delay_t;

static inline uint64_t CAVM_TOFCX_204C_TXX_SAMPLE_DELAY(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_204C_TXX_SAMPLE_DELAY(uint64_t a, uint64_t b)
{
    if ((a<=3) && (b==0))
        return 0x87e042e09258ll + 0x80000ll * ((a) & 0x3) + 0x800ll * ((b) & 0x0);
    __cavm_csr_fatal("TOFCX_204C_TXX_SAMPLE_DELAY", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_204C_TXX_SAMPLE_DELAY(a,b) cavm_tofcx_204c_txx_sample_delay_t
#define bustype_CAVM_TOFCX_204C_TXX_SAMPLE_DELAY(a,b) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_204C_TXX_SAMPLE_DELAY(a,b) "TOFCX_204C_TXX_SAMPLE_DELAY"
#define busnum_CAVM_TOFCX_204C_TXX_SAMPLE_DELAY(a,b) (a)
#define arguments_CAVM_TOFCX_204C_TXX_SAMPLE_DELAY(a,b) (a),(b),-1,-1

/**
 * Register (RSL) tofc#_204c_tx#_subclass
 *
 * JESD204C TX Subclass Register
 */
union cavm_tofcx_204c_txx_subclass
{
    uint64_t u;
    struct cavm_tofcx_204c_txx_subclass_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t subclass              : 1;  /**< [  0:  0](R/W) Subclass mode of operation. */
#else /* Word 0 - Little Endian */
        uint64_t subclass              : 1;  /**< [  0:  0](R/W) Subclass mode of operation. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_204c_txx_subclass_s cn; */
};
typedef union cavm_tofcx_204c_txx_subclass cavm_tofcx_204c_txx_subclass_t;

static inline uint64_t CAVM_TOFCX_204C_TXX_SUBCLASS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_204C_TXX_SUBCLASS(uint64_t a, uint64_t b)
{
    if ((a<=3) && (b==0))
        return 0x87e042e09038ll + 0x80000ll * ((a) & 0x3) + 0x800ll * ((b) & 0x0);
    __cavm_csr_fatal("TOFCX_204C_TXX_SUBCLASS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_204C_TXX_SUBCLASS(a,b) cavm_tofcx_204c_txx_subclass_t
#define bustype_CAVM_TOFCX_204C_TXX_SUBCLASS(a,b) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_204C_TXX_SUBCLASS(a,b) "TOFCX_204C_TXX_SUBCLASS"
#define busnum_CAVM_TOFCX_204C_TXX_SUBCLASS(a,b) (a)
#define arguments_CAVM_TOFCX_204C_TXX_SUBCLASS(a,b) (a),(b),-1,-1

/**
 * Register (RSL) tofc#_204c_tx#_sysref_ms
 *
 * JESD204C TX Maximum Shift Register
 */
union cavm_tofcx_204c_txx_sysref_ms
{
    uint64_t u;
    struct cavm_tofcx_204c_txx_sysref_ms_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t maxshift              : 5;  /**< [  4:  0](R/W) Maximum shift range. SYSREF will not be corrected if a new one arrives in
                                                                 the specified range. The system will therefore adjust to it without
                                                                 resetting the counters related to frame and other timing.
                                                                 When [MAXSHIFT] = 1, TOFC will accept a SYSREF pulse in cycle -1, 0 and +1,
                                                                 where 0 is the cycle when SYSREF is expected to arrive. */
#else /* Word 0 - Little Endian */
        uint64_t maxshift              : 5;  /**< [  4:  0](R/W) Maximum shift range. SYSREF will not be corrected if a new one arrives in
                                                                 the specified range. The system will therefore adjust to it without
                                                                 resetting the counters related to frame and other timing.
                                                                 When [MAXSHIFT] = 1, TOFC will accept a SYSREF pulse in cycle -1, 0 and +1,
                                                                 where 0 is the cycle when SYSREF is expected to arrive. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_204c_txx_sysref_ms_s cn; */
};
typedef union cavm_tofcx_204c_txx_sysref_ms cavm_tofcx_204c_txx_sysref_ms_t;

static inline uint64_t CAVM_TOFCX_204C_TXX_SYSREF_MS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_204C_TXX_SYSREF_MS(uint64_t a, uint64_t b)
{
    if ((a<=3) && (b==0))
        return 0x87e042e095c8ll + 0x80000ll * ((a) & 0x3) + 0x800ll * ((b) & 0x0);
    __cavm_csr_fatal("TOFCX_204C_TXX_SYSREF_MS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_204C_TXX_SYSREF_MS(a,b) cavm_tofcx_204c_txx_sysref_ms_t
#define bustype_CAVM_TOFCX_204C_TXX_SYSREF_MS(a,b) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_204C_TXX_SYSREF_MS(a,b) "TOFCX_204C_TXX_SYSREF_MS"
#define busnum_CAVM_TOFCX_204C_TXX_SYSREF_MS(a,b) (a)
#define arguments_CAVM_TOFCX_204C_TXX_SYSREF_MS(a,b) (a),(b),-1,-1

/**
 * Register (RSL) tofc#_bmio_debug0
 *
 * TOFC Debug Register 0
 */
union cavm_tofcx_bmio_debug0
{
    uint64_t u;
    struct cavm_tofcx_bmio_debug0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_63           : 1;
        uint64_t pcc                   : 19; /**< [ 62: 44](RO/H) Period cycle counter, for value_out. */
        uint64_t reserved_43           : 1;
        uint64_t scc                   : 19; /**< [ 42: 24](RO/H) Subframe cycle counter. */
        uint64_t reserved_22_23        : 2;
        uint64_t fcc                   : 22; /**< [ 21:  0](RO/H) Frame cycle counter. */
#else /* Word 0 - Little Endian */
        uint64_t fcc                   : 22; /**< [ 21:  0](RO/H) Frame cycle counter. */
        uint64_t reserved_22_23        : 2;
        uint64_t scc                   : 19; /**< [ 42: 24](RO/H) Subframe cycle counter. */
        uint64_t reserved_43           : 1;
        uint64_t pcc                   : 19; /**< [ 62: 44](RO/H) Period cycle counter, for value_out. */
        uint64_t reserved_63           : 1;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_bmio_debug0_s cn; */
};
typedef union cavm_tofcx_bmio_debug0 cavm_tofcx_bmio_debug0_t;

static inline uint64_t CAVM_TOFCX_BMIO_DEBUG0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_BMIO_DEBUG0(uint64_t a)
{
    if (a<=3)
        return 0x87e042e0f030ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_BMIO_DEBUG0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_BMIO_DEBUG0(a) cavm_tofcx_bmio_debug0_t
#define bustype_CAVM_TOFCX_BMIO_DEBUG0(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_BMIO_DEBUG0(a) "TOFCX_BMIO_DEBUG0"
#define busnum_CAVM_TOFCX_BMIO_DEBUG0(a) (a)
#define arguments_CAVM_TOFCX_BMIO_DEBUG0(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_bmio_debug1
 *
 * TOFC Debug Register 1
 */
union cavm_tofcx_bmio_debug1
{
    uint64_t u;
    struct cavm_tofcx_bmio_debug1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_12_63        : 52;
        uint64_t drift_phase_detected  : 1;  /**< [ 11: 11](RO/H) One-bit counter incrementing when we detect an RFP event. */
        uint64_t drift_phase_expected  : 1;  /**< [ 10: 10](RO/H) One-bit counter incrementing when we expect an RFP event. */
        uint64_t pcc_running           : 1;  /**< [  9:  9](RO/H) Status showing that the period cycle counter is running. */
        uint64_t rfp_running           : 1;  /**< [  8:  8](RO/H) Status showing we are generating internal RFP and SOS. */
        uint64_t reserved_3_7          : 5;
        uint64_t ms_sysref             : 1;  /**< [  2:  2](R/W1C/H) Sticky bit generated from sysref pulse in bmio_ms struct. */
        uint64_t reserved_1            : 1;
        uint64_t ms_rfp                : 1;  /**< [  0:  0](RO/H) RFP from the bmio_ms struct. */
#else /* Word 0 - Little Endian */
        uint64_t ms_rfp                : 1;  /**< [  0:  0](RO/H) RFP from the bmio_ms struct. */
        uint64_t reserved_1            : 1;
        uint64_t ms_sysref             : 1;  /**< [  2:  2](R/W1C/H) Sticky bit generated from sysref pulse in bmio_ms struct. */
        uint64_t reserved_3_7          : 5;
        uint64_t rfp_running           : 1;  /**< [  8:  8](RO/H) Status showing we are generating internal RFP and SOS. */
        uint64_t pcc_running           : 1;  /**< [  9:  9](RO/H) Status showing that the period cycle counter is running. */
        uint64_t drift_phase_expected  : 1;  /**< [ 10: 10](RO/H) One-bit counter incrementing when we expect an RFP event. */
        uint64_t drift_phase_detected  : 1;  /**< [ 11: 11](RO/H) One-bit counter incrementing when we detect an RFP event. */
        uint64_t reserved_12_63        : 52;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_bmio_debug1_s cn; */
};
typedef union cavm_tofcx_bmio_debug1 cavm_tofcx_bmio_debug1_t;

static inline uint64_t CAVM_TOFCX_BMIO_DEBUG1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_BMIO_DEBUG1(uint64_t a)
{
    if (a<=3)
        return 0x87e042e0f038ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_BMIO_DEBUG1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_BMIO_DEBUG1(a) cavm_tofcx_bmio_debug1_t
#define bustype_CAVM_TOFCX_BMIO_DEBUG1(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_BMIO_DEBUG1(a) "TOFCX_BMIO_DEBUG1"
#define busnum_CAVM_TOFCX_BMIO_DEBUG1(a) (a)
#define arguments_CAVM_TOFCX_BMIO_DEBUG1(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_bmio_event_metrics
 *
 * TOFM BMIO Event Metrics Register
 */
union cavm_tofcx_bmio_event_metrics
{
    uint64_t u;
    struct cavm_tofcx_bmio_event_metrics_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_20_63        : 44;
        uint64_t rfp_to_sysref         : 20; /**< [ 19:  0](RO/H) Number of cycles between RFP external event and first sysref event. */
#else /* Word 0 - Little Endian */
        uint64_t rfp_to_sysref         : 20; /**< [ 19:  0](RO/H) Number of cycles between RFP external event and first sysref event. */
        uint64_t reserved_20_63        : 44;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_bmio_event_metrics_s cn; */
};
typedef union cavm_tofcx_bmio_event_metrics cavm_tofcx_bmio_event_metrics_t;

static inline uint64_t CAVM_TOFCX_BMIO_EVENT_METRICS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_BMIO_EVENT_METRICS(uint64_t a)
{
    if (a<=3)
        return 0x87e042e0f058ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_BMIO_EVENT_METRICS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_BMIO_EVENT_METRICS(a) cavm_tofcx_bmio_event_metrics_t
#define bustype_CAVM_TOFCX_BMIO_EVENT_METRICS(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_BMIO_EVENT_METRICS(a) "TOFCX_BMIO_EVENT_METRICS"
#define busnum_CAVM_TOFCX_BMIO_EVENT_METRICS(a) (a)
#define arguments_CAVM_TOFCX_BMIO_EVENT_METRICS(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_bmio_int
 *
 * TOFC BMIO Interrupt Register
 */
union cavm_tofcx_bmio_int
{
    uint64_t u;
    struct cavm_tofcx_bmio_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t period_tick           : 1;  /**< [  1:  1](R/W1C/H) A period_tick for value_out timing has happened. */
        uint64_t rfp_drift             : 1;  /**< [  0:  0](R/W1C/H) RFP has drifted out of range. */
#else /* Word 0 - Little Endian */
        uint64_t rfp_drift             : 1;  /**< [  0:  0](R/W1C/H) RFP has drifted out of range. */
        uint64_t period_tick           : 1;  /**< [  1:  1](R/W1C/H) A period_tick for value_out timing has happened. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_bmio_int_s cn; */
};
typedef union cavm_tofcx_bmio_int cavm_tofcx_bmio_int_t;

static inline uint64_t CAVM_TOFCX_BMIO_INT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_BMIO_INT(uint64_t a)
{
    if (a<=3)
        return 0x87e042e0f010ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_BMIO_INT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_BMIO_INT(a) cavm_tofcx_bmio_int_t
#define bustype_CAVM_TOFCX_BMIO_INT(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_BMIO_INT(a) "TOFCX_BMIO_INT"
#define busnum_CAVM_TOFCX_BMIO_INT(a) (a)
#define arguments_CAVM_TOFCX_BMIO_INT(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_bmio_int_ena_w1c
 *
 * TOFC Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_tofcx_bmio_int_ena_w1c
{
    uint64_t u;
    struct cavm_tofcx_bmio_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t period_tick           : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for TOFC(0..3)_BMIO_INT[PERIOD_TICK]. */
        uint64_t rfp_drift             : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for TOFC(0..3)_BMIO_INT[RFP_DRIFT]. */
#else /* Word 0 - Little Endian */
        uint64_t rfp_drift             : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for TOFC(0..3)_BMIO_INT[RFP_DRIFT]. */
        uint64_t period_tick           : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for TOFC(0..3)_BMIO_INT[PERIOD_TICK]. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_bmio_int_ena_w1c_s cn; */
};
typedef union cavm_tofcx_bmio_int_ena_w1c cavm_tofcx_bmio_int_ena_w1c_t;

static inline uint64_t CAVM_TOFCX_BMIO_INT_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_BMIO_INT_ENA_W1C(uint64_t a)
{
    if (a<=3)
        return 0x87e042e0f028ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_BMIO_INT_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_BMIO_INT_ENA_W1C(a) cavm_tofcx_bmio_int_ena_w1c_t
#define bustype_CAVM_TOFCX_BMIO_INT_ENA_W1C(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_BMIO_INT_ENA_W1C(a) "TOFCX_BMIO_INT_ENA_W1C"
#define busnum_CAVM_TOFCX_BMIO_INT_ENA_W1C(a) (a)
#define arguments_CAVM_TOFCX_BMIO_INT_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_bmio_int_ena_w1s
 *
 * TOFC Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_tofcx_bmio_int_ena_w1s
{
    uint64_t u;
    struct cavm_tofcx_bmio_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t period_tick           : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for TOFC(0..3)_BMIO_INT[PERIOD_TICK]. */
        uint64_t rfp_drift             : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for TOFC(0..3)_BMIO_INT[RFP_DRIFT]. */
#else /* Word 0 - Little Endian */
        uint64_t rfp_drift             : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for TOFC(0..3)_BMIO_INT[RFP_DRIFT]. */
        uint64_t period_tick           : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for TOFC(0..3)_BMIO_INT[PERIOD_TICK]. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_bmio_int_ena_w1s_s cn; */
};
typedef union cavm_tofcx_bmio_int_ena_w1s cavm_tofcx_bmio_int_ena_w1s_t;

static inline uint64_t CAVM_TOFCX_BMIO_INT_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_BMIO_INT_ENA_W1S(uint64_t a)
{
    if (a<=3)
        return 0x87e042e0f020ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_BMIO_INT_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_BMIO_INT_ENA_W1S(a) cavm_tofcx_bmio_int_ena_w1s_t
#define bustype_CAVM_TOFCX_BMIO_INT_ENA_W1S(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_BMIO_INT_ENA_W1S(a) "TOFCX_BMIO_INT_ENA_W1S"
#define busnum_CAVM_TOFCX_BMIO_INT_ENA_W1S(a) (a)
#define arguments_CAVM_TOFCX_BMIO_INT_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_bmio_int_w1s
 *
 * TOFC Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_tofcx_bmio_int_w1s
{
    uint64_t u;
    struct cavm_tofcx_bmio_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t period_tick           : 1;  /**< [  1:  1](R/W1S/H) Reads or sets TOFC(0..3)_BMIO_INT[PERIOD_TICK]. */
        uint64_t rfp_drift             : 1;  /**< [  0:  0](R/W1S/H) Reads or sets TOFC(0..3)_BMIO_INT[RFP_DRIFT]. */
#else /* Word 0 - Little Endian */
        uint64_t rfp_drift             : 1;  /**< [  0:  0](R/W1S/H) Reads or sets TOFC(0..3)_BMIO_INT[RFP_DRIFT]. */
        uint64_t period_tick           : 1;  /**< [  1:  1](R/W1S/H) Reads or sets TOFC(0..3)_BMIO_INT[PERIOD_TICK]. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_bmio_int_w1s_s cn; */
};
typedef union cavm_tofcx_bmio_int_w1s cavm_tofcx_bmio_int_w1s_t;

static inline uint64_t CAVM_TOFCX_BMIO_INT_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_BMIO_INT_W1S(uint64_t a)
{
    if (a<=3)
        return 0x87e042e0f018ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_BMIO_INT_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_BMIO_INT_W1S(a) cavm_tofcx_bmio_int_w1s_t
#define bustype_CAVM_TOFCX_BMIO_INT_W1S(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_BMIO_INT_W1S(a) "TOFCX_BMIO_INT_W1S"
#define busnum_CAVM_TOFCX_BMIO_INT_W1S(a) (a)
#define arguments_CAVM_TOFCX_BMIO_INT_W1S(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_bmio_limit_rfp_cycles
 *
 * TOFM BMIO RFP Drift Limits Register
 */
union cavm_tofcx_bmio_limit_rfp_cycles
{
    uint64_t u;
    struct cavm_tofcx_bmio_limit_rfp_cycles_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_26_63        : 38;
        uint64_t late                  : 10; /**< [ 25: 16](R/W) Max number of cycles RFP can show up late before tripping interrupt. */
        uint64_t reserved_10_15        : 6;
        uint64_t early                 : 10; /**< [  9:  0](R/W) Max number of cycles RFP can show up early before tripping interrupt. */
#else /* Word 0 - Little Endian */
        uint64_t early                 : 10; /**< [  9:  0](R/W) Max number of cycles RFP can show up early before tripping interrupt. */
        uint64_t reserved_10_15        : 6;
        uint64_t late                  : 10; /**< [ 25: 16](R/W) Max number of cycles RFP can show up late before tripping interrupt. */
        uint64_t reserved_26_63        : 38;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_bmio_limit_rfp_cycles_s cn; */
};
typedef union cavm_tofcx_bmio_limit_rfp_cycles cavm_tofcx_bmio_limit_rfp_cycles_t;

static inline uint64_t CAVM_TOFCX_BMIO_LIMIT_RFP_CYCLES(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_BMIO_LIMIT_RFP_CYCLES(uint64_t a)
{
    if (a<=3)
        return 0x87e042e0f040ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_BMIO_LIMIT_RFP_CYCLES", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_BMIO_LIMIT_RFP_CYCLES(a) cavm_tofcx_bmio_limit_rfp_cycles_t
#define bustype_CAVM_TOFCX_BMIO_LIMIT_RFP_CYCLES(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_BMIO_LIMIT_RFP_CYCLES(a) "TOFCX_BMIO_LIMIT_RFP_CYCLES"
#define busnum_CAVM_TOFCX_BMIO_LIMIT_RFP_CYCLES(a) (a)
#define arguments_CAVM_TOFCX_BMIO_LIMIT_RFP_CYCLES(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_bmio_main_control
 *
 * TOFM BMIO Control Register
 */
union cavm_tofcx_bmio_main_control
{
    uint64_t u;
    struct cavm_tofcx_bmio_main_control_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t force_clocks_on       : 1;  /**< [ 63: 63](R/W) Bit to force internal clock to be on (disable clock gating). */
        uint64_t reserved_39_62        : 24;
        uint64_t delay_sysref_link1    : 3;  /**< [ 38: 36](R/W) Add this many more cycles of delay from sysref to this link. */
        uint64_t reserved_35           : 1;
        uint64_t delay_sysref_link0    : 3;  /**< [ 34: 32](R/W) Add this many more cycles of delay from sysref to this link. */
        uint64_t reserved_20_31        : 12;
        uint64_t pulse_int_sysref      : 1;  /**< [ 19: 19](R/W/H) This field may be written to the TOFC master instance when DISABLE_EXT_SYSREF = 1.
                                                                 When this field is written with a 1, an internal one-shot SYSREF is generated to all TOFC
                                                                 instances. This bit is self-clearing. */
        uint64_t disable_ext_sysref    : 1;  /**< [ 18: 18](R/W) If set to 1, the external SYSREF input is blocked to TOFC. */
        uint64_t ignore_1st_sysref     : 1;  /**< [ 17: 17](R/W) When set, ignores the first Sysref pulse. */
        uint64_t reserved_16           : 1;
        uint64_t use_sysref_pos        : 1;  /**< [ 15: 15](R/W) Select sysref_pos (1) or sysref_neg(0) as source. */
        uint64_t reserved_13_14        : 2;
        uint64_t enable_tx_advance     : 1;  /**< [ 12: 12](R/W) Enable the tx advance (sos_dl) feature. */
        uint64_t enable_rx_retard      : 1;  /**< [ 11: 11](R/W) Enable the rx retard (sos_ul) feature. */
        uint64_t enable_global_vo      : 1;  /**< [ 10: 10](R/W) Enable the value out feature and drive GPIOs. */
        uint64_t use_ll_boundary       : 1;  /**< [  9:  9](R/W) If 0, RFP_TO_SYSREF uses the sync'ed SYSREF signal.

                                                                 If 1, RFP_TO_SYSREF uses input LL_BOUNDARY rising transition in place of SYSREF event. */
        uint64_t pulse_int_rfp         : 1;  /**< [  8:  8](R/W/H) This field may be written to the TOFC master instance when DISABLE_EXT_RFP = 1.
                                                                 When this field is written with a 1, an internal RFP is generated to all TOFC
                                                                 instances. This bit is self-clearing. */
        uint64_t disable_ext_rfp       : 1;  /**< [  7:  7](R/W) If set to 1, the external RFP input is blocked to TOFC. */
        uint64_t clear_rfp_count       : 1;  /**< [  6:  6](R/W/H) Clear RFP counters. When set, clears
                                                                 TOFC()_BMIO_RFP_RESULT
                                                                 [RFP_COUNT_GOOD] and
                                                                 TOFC()_BMIO_RFP_RESULTS[RFP_COUNT_BAD]. This bit is self-clearing. */
        uint64_t enable_rfp_drift      : 1;  /**< [  5:  5](R/W) Enable the RFP drift detection feature. */
        uint64_t rfp_polarity          : 1;  /**< [  4:  4](R/W) RFP polarity.
                                                                 0 = RFP is active low, detect RFP falling edge.
                                                                 1 = RFP is active high, detect RFP rising edge. */
        uint64_t enable_rfp_timing     : 1;  /**< [  3:  3](R/W) Enable RFP edge detection and internal generation. */
        uint64_t reserved_2            : 1;
        uint64_t instance_number       : 2;  /**< [  1:  0](R/W) Sets the Instance number of TOFC. */
#else /* Word 0 - Little Endian */
        uint64_t instance_number       : 2;  /**< [  1:  0](R/W) Sets the Instance number of TOFC. */
        uint64_t reserved_2            : 1;
        uint64_t enable_rfp_timing     : 1;  /**< [  3:  3](R/W) Enable RFP edge detection and internal generation. */
        uint64_t rfp_polarity          : 1;  /**< [  4:  4](R/W) RFP polarity.
                                                                 0 = RFP is active low, detect RFP falling edge.
                                                                 1 = RFP is active high, detect RFP rising edge. */
        uint64_t enable_rfp_drift      : 1;  /**< [  5:  5](R/W) Enable the RFP drift detection feature. */
        uint64_t clear_rfp_count       : 1;  /**< [  6:  6](R/W/H) Clear RFP counters. When set, clears
                                                                 TOFC()_BMIO_RFP_RESULT
                                                                 [RFP_COUNT_GOOD] and
                                                                 TOFC()_BMIO_RFP_RESULTS[RFP_COUNT_BAD]. This bit is self-clearing. */
        uint64_t disable_ext_rfp       : 1;  /**< [  7:  7](R/W) If set to 1, the external RFP input is blocked to TOFC. */
        uint64_t pulse_int_rfp         : 1;  /**< [  8:  8](R/W/H) This field may be written to the TOFC master instance when DISABLE_EXT_RFP = 1.
                                                                 When this field is written with a 1, an internal RFP is generated to all TOFC
                                                                 instances. This bit is self-clearing. */
        uint64_t use_ll_boundary       : 1;  /**< [  9:  9](R/W) If 0, RFP_TO_SYSREF uses the sync'ed SYSREF signal.

                                                                 If 1, RFP_TO_SYSREF uses input LL_BOUNDARY rising transition in place of SYSREF event. */
        uint64_t enable_global_vo      : 1;  /**< [ 10: 10](R/W) Enable the value out feature and drive GPIOs. */
        uint64_t enable_rx_retard      : 1;  /**< [ 11: 11](R/W) Enable the rx retard (sos_ul) feature. */
        uint64_t enable_tx_advance     : 1;  /**< [ 12: 12](R/W) Enable the tx advance (sos_dl) feature. */
        uint64_t reserved_13_14        : 2;
        uint64_t use_sysref_pos        : 1;  /**< [ 15: 15](R/W) Select sysref_pos (1) or sysref_neg(0) as source. */
        uint64_t reserved_16           : 1;
        uint64_t ignore_1st_sysref     : 1;  /**< [ 17: 17](R/W) When set, ignores the first Sysref pulse. */
        uint64_t disable_ext_sysref    : 1;  /**< [ 18: 18](R/W) If set to 1, the external SYSREF input is blocked to TOFC. */
        uint64_t pulse_int_sysref      : 1;  /**< [ 19: 19](R/W/H) This field may be written to the TOFC master instance when DISABLE_EXT_SYSREF = 1.
                                                                 When this field is written with a 1, an internal one-shot SYSREF is generated to all TOFC
                                                                 instances. This bit is self-clearing. */
        uint64_t reserved_20_31        : 12;
        uint64_t delay_sysref_link0    : 3;  /**< [ 34: 32](R/W) Add this many more cycles of delay from sysref to this link. */
        uint64_t reserved_35           : 1;
        uint64_t delay_sysref_link1    : 3;  /**< [ 38: 36](R/W) Add this many more cycles of delay from sysref to this link. */
        uint64_t reserved_39_62        : 24;
        uint64_t force_clocks_on       : 1;  /**< [ 63: 63](R/W) Bit to force internal clock to be on (disable clock gating). */
#endif /* Word 0 - End */
    } s;
    struct cavm_tofcx_bmio_main_control_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t force_clocks_on       : 1;  /**< [ 63: 63](R/W) Bit to force internal clock to be on (disable clock gating). */
        uint64_t reserved_39_62        : 24;
        uint64_t delay_sysref_link1    : 3;  /**< [ 38: 36](R/W) Add this many more cycles of delay from sysref to this link. */
        uint64_t reserved_35           : 1;
        uint64_t delay_sysref_link0    : 3;  /**< [ 34: 32](R/W) Add this many more cycles of delay from sysref to this link. */
        uint64_t reserved_24_31        : 8;
        uint64_t reserved_20_23        : 4;
        uint64_t pulse_int_sysref      : 1;  /**< [ 19: 19](R/W/H) This field may be written to the TOFC master instance when DISABLE_EXT_SYSREF = 1.
                                                                 When this field is written with a 1, an internal one-shot SYSREF is generated to all TOFC
                                                                 instances. This bit is self-clearing. */
        uint64_t disable_ext_sysref    : 1;  /**< [ 18: 18](R/W) If set to 1, the external SYSREF input is blocked to TOFC. */
        uint64_t ignore_1st_sysref     : 1;  /**< [ 17: 17](R/W) When set, ignores the first Sysref pulse. */
        uint64_t reserved_16           : 1;
        uint64_t use_sysref_pos        : 1;  /**< [ 15: 15](R/W) Select sysref_pos (1) or sysref_neg(0) as source. */
        uint64_t reserved_14           : 1;
        uint64_t reserved_13           : 1;
        uint64_t enable_tx_advance     : 1;  /**< [ 12: 12](R/W) Enable the tx advance (sos_dl) feature. */
        uint64_t enable_rx_retard      : 1;  /**< [ 11: 11](R/W) Enable the rx retard (sos_ul) feature. */
        uint64_t enable_global_vo      : 1;  /**< [ 10: 10](R/W) Enable the value out feature and drive GPIOs. */
        uint64_t use_ll_boundary       : 1;  /**< [  9:  9](R/W) If 0, RFP_TO_SYSREF uses the sync'ed SYSREF signal.

                                                                 If 1, RFP_TO_SYSREF uses input LL_BOUNDARY rising transition in place of SYSREF event. */
        uint64_t pulse_int_rfp         : 1;  /**< [  8:  8](R/W/H) This field may be written to the TOFC master instance when DISABLE_EXT_RFP = 1.
                                                                 When this field is written with a 1, an internal RFP is generated to all TOFC
                                                                 instances. This bit is self-clearing. */
        uint64_t disable_ext_rfp       : 1;  /**< [  7:  7](R/W) If set to 1, the external RFP input is blocked to TOFC. */
        uint64_t clear_rfp_count       : 1;  /**< [  6:  6](R/W/H) Clear RFP counters. When set, clears
                                                                 TOFC()_BMIO_RFP_RESULT
                                                                 [RFP_COUNT_GOOD] and
                                                                 TOFC()_BMIO_RFP_RESULTS[RFP_COUNT_BAD]. This bit is self-clearing. */
        uint64_t enable_rfp_drift      : 1;  /**< [  5:  5](R/W) Enable the RFP drift detection feature. */
        uint64_t rfp_polarity          : 1;  /**< [  4:  4](R/W) RFP polarity.
                                                                 0 = RFP is active low, detect RFP falling edge.
                                                                 1 = RFP is active high, detect RFP rising edge. */
        uint64_t enable_rfp_timing     : 1;  /**< [  3:  3](R/W) Enable RFP edge detection and internal generation. */
        uint64_t reserved_2            : 1;
        uint64_t instance_number       : 2;  /**< [  1:  0](R/W) Sets the Instance number of TOFC. */
#else /* Word 0 - Little Endian */
        uint64_t instance_number       : 2;  /**< [  1:  0](R/W) Sets the Instance number of TOFC. */
        uint64_t reserved_2            : 1;
        uint64_t enable_rfp_timing     : 1;  /**< [  3:  3](R/W) Enable RFP edge detection and internal generation. */
        uint64_t rfp_polarity          : 1;  /**< [  4:  4](R/W) RFP polarity.
                                                                 0 = RFP is active low, detect RFP falling edge.
                                                                 1 = RFP is active high, detect RFP rising edge. */
        uint64_t enable_rfp_drift      : 1;  /**< [  5:  5](R/W) Enable the RFP drift detection feature. */
        uint64_t clear_rfp_count       : 1;  /**< [  6:  6](R/W/H) Clear RFP counters. When set, clears
                                                                 TOFC()_BMIO_RFP_RESULT
                                                                 [RFP_COUNT_GOOD] and
                                                                 TOFC()_BMIO_RFP_RESULTS[RFP_COUNT_BAD]. This bit is self-clearing. */
        uint64_t disable_ext_rfp       : 1;  /**< [  7:  7](R/W) If set to 1, the external RFP input is blocked to TOFC. */
        uint64_t pulse_int_rfp         : 1;  /**< [  8:  8](R/W/H) This field may be written to the TOFC master instance when DISABLE_EXT_RFP = 1.
                                                                 When this field is written with a 1, an internal RFP is generated to all TOFC
                                                                 instances. This bit is self-clearing. */
        uint64_t use_ll_boundary       : 1;  /**< [  9:  9](R/W) If 0, RFP_TO_SYSREF uses the sync'ed SYSREF signal.

                                                                 If 1, RFP_TO_SYSREF uses input LL_BOUNDARY rising transition in place of SYSREF event. */
        uint64_t enable_global_vo      : 1;  /**< [ 10: 10](R/W) Enable the value out feature and drive GPIOs. */
        uint64_t enable_rx_retard      : 1;  /**< [ 11: 11](R/W) Enable the rx retard (sos_ul) feature. */
        uint64_t enable_tx_advance     : 1;  /**< [ 12: 12](R/W) Enable the tx advance (sos_dl) feature. */
        uint64_t reserved_13           : 1;
        uint64_t reserved_14           : 1;
        uint64_t use_sysref_pos        : 1;  /**< [ 15: 15](R/W) Select sysref_pos (1) or sysref_neg(0) as source. */
        uint64_t reserved_16           : 1;
        uint64_t ignore_1st_sysref     : 1;  /**< [ 17: 17](R/W) When set, ignores the first Sysref pulse. */
        uint64_t disable_ext_sysref    : 1;  /**< [ 18: 18](R/W) If set to 1, the external SYSREF input is blocked to TOFC. */
        uint64_t pulse_int_sysref      : 1;  /**< [ 19: 19](R/W/H) This field may be written to the TOFC master instance when DISABLE_EXT_SYSREF = 1.
                                                                 When this field is written with a 1, an internal one-shot SYSREF is generated to all TOFC
                                                                 instances. This bit is self-clearing. */
        uint64_t reserved_20_23        : 4;
        uint64_t reserved_24_31        : 8;
        uint64_t delay_sysref_link0    : 3;  /**< [ 34: 32](R/W) Add this many more cycles of delay from sysref to this link. */
        uint64_t reserved_35           : 1;
        uint64_t delay_sysref_link1    : 3;  /**< [ 38: 36](R/W) Add this many more cycles of delay from sysref to this link. */
        uint64_t reserved_39_62        : 24;
        uint64_t force_clocks_on       : 1;  /**< [ 63: 63](R/W) Bit to force internal clock to be on (disable clock gating). */
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_tofcx_bmio_main_control cavm_tofcx_bmio_main_control_t;

static inline uint64_t CAVM_TOFCX_BMIO_MAIN_CONTROL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_BMIO_MAIN_CONTROL(uint64_t a)
{
    if (a<=3)
        return 0x87e042e0f000ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_BMIO_MAIN_CONTROL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_BMIO_MAIN_CONTROL(a) cavm_tofcx_bmio_main_control_t
#define bustype_CAVM_TOFCX_BMIO_MAIN_CONTROL(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_BMIO_MAIN_CONTROL(a) "TOFCX_BMIO_MAIN_CONTROL"
#define busnum_CAVM_TOFCX_BMIO_MAIN_CONTROL(a) (a)
#define arguments_CAVM_TOFCX_BMIO_MAIN_CONTROL(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_bmio_main_cycles
 *
 * TOFM BMIO System Timing Register
 */
union cavm_tofcx_bmio_main_cycles
{
    uint64_t u;
    struct cavm_tofcx_bmio_main_cycles_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_51_63        : 13;
        uint64_t cycles_per_subframe   : 19; /**< [ 50: 32](R/W) The FW determined number of clock cycles in a 1ms subframe. */
        uint64_t reserved_22_31        : 10;
        uint64_t cycles_per_frame      : 22; /**< [ 21:  0](R/W) The FW determined number of clock cycles in a 10ms frame. */
#else /* Word 0 - Little Endian */
        uint64_t cycles_per_frame      : 22; /**< [ 21:  0](R/W) The FW determined number of clock cycles in a 10ms frame. */
        uint64_t reserved_22_31        : 10;
        uint64_t cycles_per_subframe   : 19; /**< [ 50: 32](R/W) The FW determined number of clock cycles in a 1ms subframe. */
        uint64_t reserved_51_63        : 13;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_bmio_main_cycles_s cn; */
};
typedef union cavm_tofcx_bmio_main_cycles cavm_tofcx_bmio_main_cycles_t;

static inline uint64_t CAVM_TOFCX_BMIO_MAIN_CYCLES(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_BMIO_MAIN_CYCLES(uint64_t a)
{
    if (a<=3)
        return 0x87e042e0f008ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_BMIO_MAIN_CYCLES", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_BMIO_MAIN_CYCLES(a) cavm_tofcx_bmio_main_cycles_t
#define bustype_CAVM_TOFCX_BMIO_MAIN_CYCLES(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_BMIO_MAIN_CYCLES(a) "TOFCX_BMIO_MAIN_CYCLES"
#define busnum_CAVM_TOFCX_BMIO_MAIN_CYCLES(a) (a)
#define arguments_CAVM_TOFCX_BMIO_MAIN_CYCLES(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_bmio_rfp_results
 *
 * TOFM BMIO RFP Drift Results Register
 */
union cavm_tofcx_bmio_rfp_results
{
    uint64_t u;
    struct cavm_tofcx_bmio_rfp_results_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t rfp_count_bad         : 16; /**< [ 63: 48](RO/H) Number of out-of-range RFP events detected. */
        uint64_t rfp_count_good        : 16; /**< [ 47: 32](RO/H) Number of in-range RFP events detected. */
        uint64_t reserved_19_31        : 13;
        uint64_t rfp_diff_cycles       : 19; /**< [ 18:  0](RO/H) Signed difference between expected RFP and detected RFP. */
#else /* Word 0 - Little Endian */
        uint64_t rfp_diff_cycles       : 19; /**< [ 18:  0](RO/H) Signed difference between expected RFP and detected RFP. */
        uint64_t reserved_19_31        : 13;
        uint64_t rfp_count_good        : 16; /**< [ 47: 32](RO/H) Number of in-range RFP events detected. */
        uint64_t rfp_count_bad         : 16; /**< [ 63: 48](RO/H) Number of out-of-range RFP events detected. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_bmio_rfp_results_s cn; */
};
typedef union cavm_tofcx_bmio_rfp_results cavm_tofcx_bmio_rfp_results_t;

static inline uint64_t CAVM_TOFCX_BMIO_RFP_RESULTS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_BMIO_RFP_RESULTS(uint64_t a)
{
    if (a<=3)
        return 0x87e042e0f048ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_BMIO_RFP_RESULTS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_BMIO_RFP_RESULTS(a) cavm_tofcx_bmio_rfp_results_t
#define bustype_CAVM_TOFCX_BMIO_RFP_RESULTS(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_BMIO_RFP_RESULTS(a) "TOFCX_BMIO_RFP_RESULTS"
#define busnum_CAVM_TOFCX_BMIO_RFP_RESULTS(a) (a)
#define arguments_CAVM_TOFCX_BMIO_RFP_RESULTS(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_bmio_rxtx_cycles
 *
 * TOFM BMIO RX and TX Cycles Register
 */
union cavm_tofcx_bmio_rxtx_cycles
{
    uint64_t u;
    struct cavm_tofcx_bmio_rxtx_cycles_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_54_63        : 10;
        uint64_t cycles_per_tx_advance : 22; /**< [ 53: 32](R/W) Number of cycles between SOS and SOS_DL. */
        uint64_t reserved_22_31        : 10;
        uint64_t cycles_per_rx_retard  : 22; /**< [ 21:  0](R/W) Number of cycles between SOS and SOS_UL. */
#else /* Word 0 - Little Endian */
        uint64_t cycles_per_rx_retard  : 22; /**< [ 21:  0](R/W) Number of cycles between SOS and SOS_UL. */
        uint64_t reserved_22_31        : 10;
        uint64_t cycles_per_tx_advance : 22; /**< [ 53: 32](R/W) Number of cycles between SOS and SOS_DL. */
        uint64_t reserved_54_63        : 10;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_bmio_rxtx_cycles_s cn; */
};
typedef union cavm_tofcx_bmio_rxtx_cycles cavm_tofcx_bmio_rxtx_cycles_t;

static inline uint64_t CAVM_TOFCX_BMIO_RXTX_CYCLES(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_BMIO_RXTX_CYCLES(uint64_t a)
{
    if (a<=3)
        return 0x87e042e0f060ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_BMIO_RXTX_CYCLES", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_BMIO_RXTX_CYCLES(a) cavm_tofcx_bmio_rxtx_cycles_t
#define bustype_CAVM_TOFCX_BMIO_RXTX_CYCLES(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_BMIO_RXTX_CYCLES(a) "TOFCX_BMIO_RXTX_CYCLES"
#define busnum_CAVM_TOFCX_BMIO_RXTX_CYCLES(a) (a)
#define arguments_CAVM_TOFCX_BMIO_RXTX_CYCLES(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_bmio_sysref_cntr
 *
 * TOFM BMIO Sysref Counter Register
 */
union cavm_tofcx_bmio_sysref_cntr
{
    uint64_t u;
    struct cavm_tofcx_bmio_sysref_cntr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_20_63        : 44;
        uint64_t cntr                  : 20; /**< [ 19:  0](RC/H) Counts the number of Sysref Pulses, including the ones generated by
                                                                 TOFC()_BMIO_MAIN_CONTROL[PULSE_INT_SYSREF]. The counter saturates
                                                                 when it reaches all 1s, and is cleared on read. */
#else /* Word 0 - Little Endian */
        uint64_t cntr                  : 20; /**< [ 19:  0](RC/H) Counts the number of Sysref Pulses, including the ones generated by
                                                                 TOFC()_BMIO_MAIN_CONTROL[PULSE_INT_SYSREF]. The counter saturates
                                                                 when it reaches all 1s, and is cleared on read. */
        uint64_t reserved_20_63        : 44;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_bmio_sysref_cntr_s cn; */
};
typedef union cavm_tofcx_bmio_sysref_cntr cavm_tofcx_bmio_sysref_cntr_t;

static inline uint64_t CAVM_TOFCX_BMIO_SYSREF_CNTR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_BMIO_SYSREF_CNTR(uint64_t a)
{
    if (a<=3)
        return 0x87e042e0f050ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_BMIO_SYSREF_CNTR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_BMIO_SYSREF_CNTR(a) cavm_tofcx_bmio_sysref_cntr_t
#define bustype_CAVM_TOFCX_BMIO_SYSREF_CNTR(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_BMIO_SYSREF_CNTR(a) "TOFCX_BMIO_SYSREF_CNTR"
#define busnum_CAVM_TOFCX_BMIO_SYSREF_CNTR(a) (a)
#define arguments_CAVM_TOFCX_BMIO_SYSREF_CNTR(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_bmio_vo
 *
 * TOFM BMIO Value Out Register
 */
union cavm_tofcx_bmio_vo
{
    uint64_t u;
    struct cavm_tofcx_bmio_vo_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_51_63        : 13;
        uint64_t cycles_per_vo_period  : 19; /**< [ 50: 32](R/W) The number of clock cycles for each period_tick for value_out. */
        uint64_t enable_per_vo         : 16; /**< [ 31: 16](R/W) Enable each bit of value out as a feature. */
        uint64_t value_out             : 16; /**< [ 15:  0](R/W) Values to drive on GPIOs. */
#else /* Word 0 - Little Endian */
        uint64_t value_out             : 16; /**< [ 15:  0](R/W) Values to drive on GPIOs. */
        uint64_t enable_per_vo         : 16; /**< [ 31: 16](R/W) Enable each bit of value out as a feature. */
        uint64_t cycles_per_vo_period  : 19; /**< [ 50: 32](R/W) The number of clock cycles for each period_tick for value_out. */
        uint64_t reserved_51_63        : 13;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_bmio_vo_s cn; */
};
typedef union cavm_tofcx_bmio_vo cavm_tofcx_bmio_vo_t;

static inline uint64_t CAVM_TOFCX_BMIO_VO(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_BMIO_VO(uint64_t a)
{
    if (a<=3)
        return 0x87e042e0f070ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_BMIO_VO", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_BMIO_VO(a) cavm_tofcx_bmio_vo_t
#define bustype_CAVM_TOFCX_BMIO_VO(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_BMIO_VO(a) "TOFCX_BMIO_VO"
#define busnum_CAVM_TOFCX_BMIO_VO(a) (a)
#define arguments_CAVM_TOFCX_BMIO_VO(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_bmio_vo_offset_pair#
 *
 * TOFM BMIO Value Offset Pair Registers
 */
union cavm_tofcx_bmio_vo_offset_pairx
{
    uint64_t u;
    struct cavm_tofcx_bmio_vo_offset_pairx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_51_63        : 13;
        uint64_t offset1               : 19; /**< [ 50: 32](R/W) Offset (cycles) for associated bit of value_out. */
        uint64_t reserved_19_31        : 13;
        uint64_t offset0               : 19; /**< [ 18:  0](R/W) Offset (cycles) for associated bit of value_out. */
#else /* Word 0 - Little Endian */
        uint64_t offset0               : 19; /**< [ 18:  0](R/W) Offset (cycles) for associated bit of value_out. */
        uint64_t reserved_19_31        : 13;
        uint64_t offset1               : 19; /**< [ 50: 32](R/W) Offset (cycles) for associated bit of value_out. */
        uint64_t reserved_51_63        : 13;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_bmio_vo_offset_pairx_s cn; */
};
typedef union cavm_tofcx_bmio_vo_offset_pairx cavm_tofcx_bmio_vo_offset_pairx_t;

static inline uint64_t CAVM_TOFCX_BMIO_VO_OFFSET_PAIRX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_BMIO_VO_OFFSET_PAIRX(uint64_t a, uint64_t b)
{
    if ((a<=3) && (b<=7))
        return 0x87e042e0f080ll + 0x80000ll * ((a) & 0x3) + 8ll * ((b) & 0x7);
    __cavm_csr_fatal("TOFCX_BMIO_VO_OFFSET_PAIRX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_BMIO_VO_OFFSET_PAIRX(a,b) cavm_tofcx_bmio_vo_offset_pairx_t
#define bustype_CAVM_TOFCX_BMIO_VO_OFFSET_PAIRX(a,b) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_BMIO_VO_OFFSET_PAIRX(a,b) "TOFCX_BMIO_VO_OFFSET_PAIRX"
#define busnum_CAVM_TOFCX_BMIO_VO_OFFSET_PAIRX(a,b) (a)
#define arguments_CAVM_TOFCX_BMIO_VO_OFFSET_PAIRX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) tofc#_bmiorfp_int_psm_msg_w0
 *
 * TOFC BMIO RFP Drift Interrupt Message w0 Register
 * JCA word 0 message to send for BMIO RFP drift related interrupts.
 */
union cavm_tofcx_bmiorfp_int_psm_msg_w0
{
    uint64_t u;
    struct cavm_tofcx_bmiorfp_int_psm_msg_w0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t w0                    : 64; /**< [ 63:  0](R/W) Word 0 of JCA message. */
#else /* Word 0 - Little Endian */
        uint64_t w0                    : 64; /**< [ 63:  0](R/W) Word 0 of JCA message. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_bmiorfp_int_psm_msg_w0_s cn; */
};
typedef union cavm_tofcx_bmiorfp_int_psm_msg_w0 cavm_tofcx_bmiorfp_int_psm_msg_w0_t;

static inline uint64_t CAVM_TOFCX_BMIORFP_INT_PSM_MSG_W0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_BMIORFP_INT_PSM_MSG_W0(uint64_t a)
{
    if (a<=3)
        return 0x87e042e00320ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_BMIORFP_INT_PSM_MSG_W0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_BMIORFP_INT_PSM_MSG_W0(a) cavm_tofcx_bmiorfp_int_psm_msg_w0_t
#define bustype_CAVM_TOFCX_BMIORFP_INT_PSM_MSG_W0(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_BMIORFP_INT_PSM_MSG_W0(a) "TOFCX_BMIORFP_INT_PSM_MSG_W0"
#define busnum_CAVM_TOFCX_BMIORFP_INT_PSM_MSG_W0(a) (a)
#define arguments_CAVM_TOFCX_BMIORFP_INT_PSM_MSG_W0(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_bmiorfp_int_psm_msg_w1
 *
 * TOFC BMIO RFP Drift Interrupt Message w1 Register
 * JCA word 1 message to send for BMIO RFP drift related interrupts.
 */
union cavm_tofcx_bmiorfp_int_psm_msg_w1
{
    uint64_t u;
    struct cavm_tofcx_bmiorfp_int_psm_msg_w1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t w1                    : 64; /**< [ 63:  0](R/W) Word 1 of JCA message. */
#else /* Word 0 - Little Endian */
        uint64_t w1                    : 64; /**< [ 63:  0](R/W) Word 1 of JCA message. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_bmiorfp_int_psm_msg_w1_s cn; */
};
typedef union cavm_tofcx_bmiorfp_int_psm_msg_w1 cavm_tofcx_bmiorfp_int_psm_msg_w1_t;

static inline uint64_t CAVM_TOFCX_BMIORFP_INT_PSM_MSG_W1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_BMIORFP_INT_PSM_MSG_W1(uint64_t a)
{
    if (a<=3)
        return 0x87e042e00328ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_BMIORFP_INT_PSM_MSG_W1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_BMIORFP_INT_PSM_MSG_W1(a) cavm_tofcx_bmiorfp_int_psm_msg_w1_t
#define bustype_CAVM_TOFCX_BMIORFP_INT_PSM_MSG_W1(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_BMIORFP_INT_PSM_MSG_W1(a) "TOFCX_BMIORFP_INT_PSM_MSG_W1"
#define busnum_CAVM_TOFCX_BMIORFP_INT_PSM_MSG_W1(a) (a)
#define arguments_CAVM_TOFCX_BMIORFP_INT_PSM_MSG_W1(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_bmiotick_int_psm_msg_w0
 *
 * TOFC BMIO Tick Notification Interrupt Message w0 Register
 * JCA word 0 message to send for BMIO tick notification related interrupts.
 */
union cavm_tofcx_bmiotick_int_psm_msg_w0
{
    uint64_t u;
    struct cavm_tofcx_bmiotick_int_psm_msg_w0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t w0                    : 64; /**< [ 63:  0](R/W) Word 0 of JCA message. */
#else /* Word 0 - Little Endian */
        uint64_t w0                    : 64; /**< [ 63:  0](R/W) Word 0 of JCA message. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_bmiotick_int_psm_msg_w0_s cn; */
};
typedef union cavm_tofcx_bmiotick_int_psm_msg_w0 cavm_tofcx_bmiotick_int_psm_msg_w0_t;

static inline uint64_t CAVM_TOFCX_BMIOTICK_INT_PSM_MSG_W0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_BMIOTICK_INT_PSM_MSG_W0(uint64_t a)
{
    if (a<=3)
        return 0x87e042e00330ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_BMIOTICK_INT_PSM_MSG_W0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_BMIOTICK_INT_PSM_MSG_W0(a) cavm_tofcx_bmiotick_int_psm_msg_w0_t
#define bustype_CAVM_TOFCX_BMIOTICK_INT_PSM_MSG_W0(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_BMIOTICK_INT_PSM_MSG_W0(a) "TOFCX_BMIOTICK_INT_PSM_MSG_W0"
#define busnum_CAVM_TOFCX_BMIOTICK_INT_PSM_MSG_W0(a) (a)
#define arguments_CAVM_TOFCX_BMIOTICK_INT_PSM_MSG_W0(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_bmiotick_int_psm_msg_w1
 *
 * TOFC BMIO Tick Notification Interrupt Message w1 Register
 * JCA word 1 message to send for BMIO tick notification related interrupts.
 */
union cavm_tofcx_bmiotick_int_psm_msg_w1
{
    uint64_t u;
    struct cavm_tofcx_bmiotick_int_psm_msg_w1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t w1                    : 64; /**< [ 63:  0](R/W) Word 1 of JCA message. */
#else /* Word 0 - Little Endian */
        uint64_t w1                    : 64; /**< [ 63:  0](R/W) Word 1 of JCA message. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_bmiotick_int_psm_msg_w1_s cn; */
};
typedef union cavm_tofcx_bmiotick_int_psm_msg_w1 cavm_tofcx_bmiotick_int_psm_msg_w1_t;

static inline uint64_t CAVM_TOFCX_BMIOTICK_INT_PSM_MSG_W1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_BMIOTICK_INT_PSM_MSG_W1(uint64_t a)
{
    if (a<=3)
        return 0x87e042e00338ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_BMIOTICK_INT_PSM_MSG_W1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_BMIOTICK_INT_PSM_MSG_W1(a) cavm_tofcx_bmiotick_int_psm_msg_w1_t
#define bustype_CAVM_TOFCX_BMIOTICK_INT_PSM_MSG_W1(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_BMIOTICK_INT_PSM_MSG_W1(a) "TOFCX_BMIOTICK_INT_PSM_MSG_W1"
#define busnum_CAVM_TOFCX_BMIOTICK_INT_PSM_MSG_W1(a) (a)
#define arguments_CAVM_TOFCX_BMIOTICK_INT_PSM_MSG_W1(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_control
 *
 * TOFC Control Register
 */
union cavm_tofcx_control
{
    uint64_t u;
    struct cavm_tofcx_control_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t rst_tofw_tx           : 1;  /**< [  1:  1](R/W) Soft reset for TOFW TX. Setting to 1 resets TOFW TX datapath but does not reset the CSRs.
                                                                 Software needs to disable DMA (TOFC(0..3)_TX_ENABLE[DMA_EN] =0) and then wait for
                                                                 all the defined bits in TOFC()_TX_STATUS to be 1 before setting this bit to reset TOFW TX. */
        uint64_t rst_tofw_rx           : 1;  /**< [  0:  0](R/W) Soft reset for TOFW RX. Setting to 1 resets TOFW RX datapath but does not reset the CSRs. */
#else /* Word 0 - Little Endian */
        uint64_t rst_tofw_rx           : 1;  /**< [  0:  0](R/W) Soft reset for TOFW RX. Setting to 1 resets TOFW RX datapath but does not reset the CSRs. */
        uint64_t rst_tofw_tx           : 1;  /**< [  1:  1](R/W) Soft reset for TOFW TX. Setting to 1 resets TOFW TX datapath but does not reset the CSRs.
                                                                 Software needs to disable DMA (TOFC(0..3)_TX_ENABLE[DMA_EN] =0) and then wait for
                                                                 all the defined bits in TOFC()_TX_STATUS to be 1 before setting this bit to reset TOFW TX. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_control_s cn; */
};
typedef union cavm_tofcx_control cavm_tofcx_control_t;

static inline uint64_t CAVM_TOFCX_CONTROL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_CONTROL(uint64_t a)
{
    if (a<=3)
        return 0x87e042e00000ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_CONTROL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_CONTROL(a) cavm_tofcx_control_t
#define bustype_CAVM_TOFCX_CONTROL(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_CONTROL(a) "TOFCX_CONTROL"
#define busnum_CAVM_TOFCX_CONTROL(a) (a)
#define arguments_CAVM_TOFCX_CONTROL(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_glbl_int
 *
 * TOFC Global Interrupt Register
 * These registers record interrupts due to different error or notification sources.
 * The bits are expected to be cleared one at a time.
 */
union cavm_tofcx_glbl_int
{
    uint64_t u;
    struct cavm_tofcx_glbl_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_9_63         : 55;
        uint64_t tofw_rx_err           : 1;  /**< [  8:  8](R/W1C/H) TOFW RX error interrupt. */
        uint64_t tofw_tx_err           : 1;  /**< [  7:  7](R/W1C/H) TOFW TX error interrupt. */
        uint64_t tofm_transport_err    : 1;  /**< [  6:  6](R/W1C/H) TOFM transport error interrupt. */
        uint64_t reserved_5            : 1;
        uint64_t tx_link0_err          : 1;  /**< [  4:  4](R/W1C/H) TX Link0 error interrupt from IP. */
        uint64_t reserved_3            : 1;
        uint64_t rx_link0_err          : 1;  /**< [  2:  2](R/W1C/H) RX Link0 error interrupt from IP. */
        uint64_t bmio_rfp_drift        : 1;  /**< [  1:  1](R/W1C/H) RFP drift error interrupt from BMIO. */
        uint64_t bmio_tick_notify      : 1;  /**< [  0:  0](R/W1C/H) Tick notification interrupt from BMIO. */
#else /* Word 0 - Little Endian */
        uint64_t bmio_tick_notify      : 1;  /**< [  0:  0](R/W1C/H) Tick notification interrupt from BMIO. */
        uint64_t bmio_rfp_drift        : 1;  /**< [  1:  1](R/W1C/H) RFP drift error interrupt from BMIO. */
        uint64_t rx_link0_err          : 1;  /**< [  2:  2](R/W1C/H) RX Link0 error interrupt from IP. */
        uint64_t reserved_3            : 1;
        uint64_t tx_link0_err          : 1;  /**< [  4:  4](R/W1C/H) TX Link0 error interrupt from IP. */
        uint64_t reserved_5            : 1;
        uint64_t tofm_transport_err    : 1;  /**< [  6:  6](R/W1C/H) TOFM transport error interrupt. */
        uint64_t tofw_tx_err           : 1;  /**< [  7:  7](R/W1C/H) TOFW TX error interrupt. */
        uint64_t tofw_rx_err           : 1;  /**< [  8:  8](R/W1C/H) TOFW RX error interrupt. */
        uint64_t reserved_9_63         : 55;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_glbl_int_s cn; */
};
typedef union cavm_tofcx_glbl_int cavm_tofcx_glbl_int_t;

static inline uint64_t CAVM_TOFCX_GLBL_INT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_GLBL_INT(uint64_t a)
{
    if (a<=3)
        return 0x87e042e00200ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_GLBL_INT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_GLBL_INT(a) cavm_tofcx_glbl_int_t
#define bustype_CAVM_TOFCX_GLBL_INT(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_GLBL_INT(a) "TOFCX_GLBL_INT"
#define busnum_CAVM_TOFCX_GLBL_INT(a) (a)
#define arguments_CAVM_TOFCX_GLBL_INT(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_glbl_int_ena_w1c
 *
 * TOFC Global Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_tofcx_glbl_int_ena_w1c
{
    uint64_t u;
    struct cavm_tofcx_glbl_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_9_63         : 55;
        uint64_t tofw_rx_err           : 1;  /**< [  8:  8](R/W1C/H) Reads or clears enable for TOFC(0..3)_GLBL_INT[TOFW_RX_ERR]. */
        uint64_t tofw_tx_err           : 1;  /**< [  7:  7](R/W1C/H) Reads or clears enable for TOFC(0..3)_GLBL_INT[TOFW_TX_ERR]. */
        uint64_t tofm_transport_err    : 1;  /**< [  6:  6](R/W1C/H) Reads or clears enable for TOFC(0..3)_GLBL_INT[TOFM_TRANSPORT_ERR]. */
        uint64_t reserved_5            : 1;
        uint64_t tx_link0_err          : 1;  /**< [  4:  4](R/W1C/H) Reads or clears enable for TOFC(0..3)_GLBL_INT[TX_LINK0_ERR]. */
        uint64_t reserved_3            : 1;
        uint64_t rx_link0_err          : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for TOFC(0..3)_GLBL_INT[RX_LINK0_ERR]. */
        uint64_t bmio_rfp_drift        : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for TOFC(0..3)_GLBL_INT[BMIO_RFP_DRIFT]. */
        uint64_t bmio_tick_notify      : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for TOFC(0..3)_GLBL_INT[BMIO_TICK_NOTIFY]. */
#else /* Word 0 - Little Endian */
        uint64_t bmio_tick_notify      : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for TOFC(0..3)_GLBL_INT[BMIO_TICK_NOTIFY]. */
        uint64_t bmio_rfp_drift        : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for TOFC(0..3)_GLBL_INT[BMIO_RFP_DRIFT]. */
        uint64_t rx_link0_err          : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for TOFC(0..3)_GLBL_INT[RX_LINK0_ERR]. */
        uint64_t reserved_3            : 1;
        uint64_t tx_link0_err          : 1;  /**< [  4:  4](R/W1C/H) Reads or clears enable for TOFC(0..3)_GLBL_INT[TX_LINK0_ERR]. */
        uint64_t reserved_5            : 1;
        uint64_t tofm_transport_err    : 1;  /**< [  6:  6](R/W1C/H) Reads or clears enable for TOFC(0..3)_GLBL_INT[TOFM_TRANSPORT_ERR]. */
        uint64_t tofw_tx_err           : 1;  /**< [  7:  7](R/W1C/H) Reads or clears enable for TOFC(0..3)_GLBL_INT[TOFW_TX_ERR]. */
        uint64_t tofw_rx_err           : 1;  /**< [  8:  8](R/W1C/H) Reads or clears enable for TOFC(0..3)_GLBL_INT[TOFW_RX_ERR]. */
        uint64_t reserved_9_63         : 55;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_glbl_int_ena_w1c_s cn; */
};
typedef union cavm_tofcx_glbl_int_ena_w1c cavm_tofcx_glbl_int_ena_w1c_t;

static inline uint64_t CAVM_TOFCX_GLBL_INT_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_GLBL_INT_ENA_W1C(uint64_t a)
{
    if (a<=3)
        return 0x87e042e00210ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_GLBL_INT_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_GLBL_INT_ENA_W1C(a) cavm_tofcx_glbl_int_ena_w1c_t
#define bustype_CAVM_TOFCX_GLBL_INT_ENA_W1C(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_GLBL_INT_ENA_W1C(a) "TOFCX_GLBL_INT_ENA_W1C"
#define busnum_CAVM_TOFCX_GLBL_INT_ENA_W1C(a) (a)
#define arguments_CAVM_TOFCX_GLBL_INT_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_glbl_int_ena_w1s
 *
 * TOFC Global Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_tofcx_glbl_int_ena_w1s
{
    uint64_t u;
    struct cavm_tofcx_glbl_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_9_63         : 55;
        uint64_t tofw_rx_err           : 1;  /**< [  8:  8](R/W1S/H) Reads or sets enable for TOFC(0..3)_GLBL_INT[TOFW_RX_ERR]. */
        uint64_t tofw_tx_err           : 1;  /**< [  7:  7](R/W1S/H) Reads or sets enable for TOFC(0..3)_GLBL_INT[TOFW_TX_ERR]. */
        uint64_t tofm_transport_err    : 1;  /**< [  6:  6](R/W1S/H) Reads or sets enable for TOFC(0..3)_GLBL_INT[TOFM_TRANSPORT_ERR]. */
        uint64_t reserved_5            : 1;
        uint64_t tx_link0_err          : 1;  /**< [  4:  4](R/W1S/H) Reads or sets enable for TOFC(0..3)_GLBL_INT[TX_LINK0_ERR]. */
        uint64_t reserved_3            : 1;
        uint64_t rx_link0_err          : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for TOFC(0..3)_GLBL_INT[RX_LINK0_ERR]. */
        uint64_t bmio_rfp_drift        : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for TOFC(0..3)_GLBL_INT[BMIO_RFP_DRIFT]. */
        uint64_t bmio_tick_notify      : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for TOFC(0..3)_GLBL_INT[BMIO_TICK_NOTIFY]. */
#else /* Word 0 - Little Endian */
        uint64_t bmio_tick_notify      : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for TOFC(0..3)_GLBL_INT[BMIO_TICK_NOTIFY]. */
        uint64_t bmio_rfp_drift        : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for TOFC(0..3)_GLBL_INT[BMIO_RFP_DRIFT]. */
        uint64_t rx_link0_err          : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for TOFC(0..3)_GLBL_INT[RX_LINK0_ERR]. */
        uint64_t reserved_3            : 1;
        uint64_t tx_link0_err          : 1;  /**< [  4:  4](R/W1S/H) Reads or sets enable for TOFC(0..3)_GLBL_INT[TX_LINK0_ERR]. */
        uint64_t reserved_5            : 1;
        uint64_t tofm_transport_err    : 1;  /**< [  6:  6](R/W1S/H) Reads or sets enable for TOFC(0..3)_GLBL_INT[TOFM_TRANSPORT_ERR]. */
        uint64_t tofw_tx_err           : 1;  /**< [  7:  7](R/W1S/H) Reads or sets enable for TOFC(0..3)_GLBL_INT[TOFW_TX_ERR]. */
        uint64_t tofw_rx_err           : 1;  /**< [  8:  8](R/W1S/H) Reads or sets enable for TOFC(0..3)_GLBL_INT[TOFW_RX_ERR]. */
        uint64_t reserved_9_63         : 55;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_glbl_int_ena_w1s_s cn; */
};
typedef union cavm_tofcx_glbl_int_ena_w1s cavm_tofcx_glbl_int_ena_w1s_t;

static inline uint64_t CAVM_TOFCX_GLBL_INT_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_GLBL_INT_ENA_W1S(uint64_t a)
{
    if (a<=3)
        return 0x87e042e00208ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_GLBL_INT_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_GLBL_INT_ENA_W1S(a) cavm_tofcx_glbl_int_ena_w1s_t
#define bustype_CAVM_TOFCX_GLBL_INT_ENA_W1S(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_GLBL_INT_ENA_W1S(a) "TOFCX_GLBL_INT_ENA_W1S"
#define busnum_CAVM_TOFCX_GLBL_INT_ENA_W1S(a) (a)
#define arguments_CAVM_TOFCX_GLBL_INT_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_glbl_int_w1s
 *
 * TOFC Global Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_tofcx_glbl_int_w1s
{
    uint64_t u;
    struct cavm_tofcx_glbl_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_9_63         : 55;
        uint64_t tofw_rx_err           : 1;  /**< [  8:  8](R/W1S/H) Reads or sets TOFC(0..3)_GLBL_INT[TOFW_RX_ERR]. */
        uint64_t tofw_tx_err           : 1;  /**< [  7:  7](R/W1S/H) Reads or sets TOFC(0..3)_GLBL_INT[TOFW_TX_ERR]. */
        uint64_t tofm_transport_err    : 1;  /**< [  6:  6](R/W1S/H) Reads or sets TOFC(0..3)_GLBL_INT[TOFM_TRANSPORT_ERR]. */
        uint64_t reserved_5            : 1;
        uint64_t tx_link0_err          : 1;  /**< [  4:  4](R/W1S/H) Reads or sets TOFC(0..3)_GLBL_INT[TX_LINK0_ERR]. */
        uint64_t reserved_3            : 1;
        uint64_t rx_link0_err          : 1;  /**< [  2:  2](R/W1S/H) Reads or sets TOFC(0..3)_GLBL_INT[RX_LINK0_ERR]. */
        uint64_t bmio_rfp_drift        : 1;  /**< [  1:  1](R/W1S/H) Reads or sets TOFC(0..3)_GLBL_INT[BMIO_RFP_DRIFT]. */
        uint64_t bmio_tick_notify      : 1;  /**< [  0:  0](R/W1S/H) Reads or sets TOFC(0..3)_GLBL_INT[BMIO_TICK_NOTIFY]. */
#else /* Word 0 - Little Endian */
        uint64_t bmio_tick_notify      : 1;  /**< [  0:  0](R/W1S/H) Reads or sets TOFC(0..3)_GLBL_INT[BMIO_TICK_NOTIFY]. */
        uint64_t bmio_rfp_drift        : 1;  /**< [  1:  1](R/W1S/H) Reads or sets TOFC(0..3)_GLBL_INT[BMIO_RFP_DRIFT]. */
        uint64_t rx_link0_err          : 1;  /**< [  2:  2](R/W1S/H) Reads or sets TOFC(0..3)_GLBL_INT[RX_LINK0_ERR]. */
        uint64_t reserved_3            : 1;
        uint64_t tx_link0_err          : 1;  /**< [  4:  4](R/W1S/H) Reads or sets TOFC(0..3)_GLBL_INT[TX_LINK0_ERR]. */
        uint64_t reserved_5            : 1;
        uint64_t tofm_transport_err    : 1;  /**< [  6:  6](R/W1S/H) Reads or sets TOFC(0..3)_GLBL_INT[TOFM_TRANSPORT_ERR]. */
        uint64_t tofw_tx_err           : 1;  /**< [  7:  7](R/W1S/H) Reads or sets TOFC(0..3)_GLBL_INT[TOFW_TX_ERR]. */
        uint64_t tofw_rx_err           : 1;  /**< [  8:  8](R/W1S/H) Reads or sets TOFC(0..3)_GLBL_INT[TOFW_RX_ERR]. */
        uint64_t reserved_9_63         : 55;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_glbl_int_w1s_s cn; */
};
typedef union cavm_tofcx_glbl_int_w1s cavm_tofcx_glbl_int_w1s_t;

static inline uint64_t CAVM_TOFCX_GLBL_INT_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_GLBL_INT_W1S(uint64_t a)
{
    if (a<=3)
        return 0x87e042e00218ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_GLBL_INT_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_GLBL_INT_W1S(a) cavm_tofcx_glbl_int_w1s_t
#define bustype_CAVM_TOFCX_GLBL_INT_W1S(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_GLBL_INT_W1S(a) "TOFCX_GLBL_INT_W1S"
#define busnum_CAVM_TOFCX_GLBL_INT_W1S(a) (a)
#define arguments_CAVM_TOFCX_GLBL_INT_W1S(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_rx_filter#_cfg0
 *
 * TOFC RX Filter Config 0 Register
 * Configures the circular buffers per-RX Stream for storing the dynamic parameters for
 * filtering and sampling in RX/UL.
 */
union cavm_tofcx_rx_filterx_cfg0
{
    uint64_t u;
    struct cavm_tofcx_rx_filterx_cfg0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t target_mem            : 1;  /**< [ 63: 63](R/W) Specifies the target memory for the address.
                                                                 0 = SMEM.
                                                                 1 = LLC/DRAM. */
        uint64_t buf_enable            : 1;  /**< [ 62: 62](R/W) Buffer enable. When the buffer is disabled, the read pointer is also reset to 0. */
        uint64_t cmd_type              : 2;  /**< [ 61: 60](R/W) Command type for LLC/DRAM writes. The read operations are
                                                                 enumerated by MHBW_PNB_RD_CMD_E. */
        uint64_t hp                    : 1;  /**< [ 59: 59](R/W) When set, buffer read requests are sent with high priority. */
        uint64_t dswap                 : 3;  /**< [ 58: 56](R/W) The byte swap mode for DMA to LLC/DRAM. Enumerated in MHBW_PNB_DSWAP_E.
                                                                 DMA to BPHY SMEM ignores this field. */
        uint64_t reserved_48_55        : 8;
        uint64_t buffer_base_addr      : 48; /**< [ 47:  0](R/W) Base address of the circular buffer; units in flits (1 flit = 32 bytes). */
#else /* Word 0 - Little Endian */
        uint64_t buffer_base_addr      : 48; /**< [ 47:  0](R/W) Base address of the circular buffer; units in flits (1 flit = 32 bytes). */
        uint64_t reserved_48_55        : 8;
        uint64_t dswap                 : 3;  /**< [ 58: 56](R/W) The byte swap mode for DMA to LLC/DRAM. Enumerated in MHBW_PNB_DSWAP_E.
                                                                 DMA to BPHY SMEM ignores this field. */
        uint64_t hp                    : 1;  /**< [ 59: 59](R/W) When set, buffer read requests are sent with high priority. */
        uint64_t cmd_type              : 2;  /**< [ 61: 60](R/W) Command type for LLC/DRAM writes. The read operations are
                                                                 enumerated by MHBW_PNB_RD_CMD_E. */
        uint64_t buf_enable            : 1;  /**< [ 62: 62](R/W) Buffer enable. When the buffer is disabled, the read pointer is also reset to 0. */
        uint64_t target_mem            : 1;  /**< [ 63: 63](R/W) Specifies the target memory for the address.
                                                                 0 = SMEM.
                                                                 1 = LLC/DRAM. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_rx_filterx_cfg0_s cn; */
};
typedef union cavm_tofcx_rx_filterx_cfg0 cavm_tofcx_rx_filterx_cfg0_t;

static inline uint64_t CAVM_TOFCX_RX_FILTERX_CFG0(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_RX_FILTERX_CFG0(uint64_t a, uint64_t b)
{
    if ((a<=3) && (b<=11))
        return 0x87e042e03048ll + 0x80000ll * ((a) & 0x3) + 0x100ll * ((b) & 0xf);
    __cavm_csr_fatal("TOFCX_RX_FILTERX_CFG0", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_RX_FILTERX_CFG0(a,b) cavm_tofcx_rx_filterx_cfg0_t
#define bustype_CAVM_TOFCX_RX_FILTERX_CFG0(a,b) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_RX_FILTERX_CFG0(a,b) "TOFCX_RX_FILTERX_CFG0"
#define busnum_CAVM_TOFCX_RX_FILTERX_CFG0(a,b) (a)
#define arguments_CAVM_TOFCX_RX_FILTERX_CFG0(a,b) (a),(b),-1,-1

/**
 * Register (RSL) tofc#_rx_filter#_cfg1
 *
 * TOFC RX Filter Config 1 Register
 * Configures the circular buffers per-RX stream for storing the dynamic parameters for
 * filtering and sampling in RX/UL.
 */
union cavm_tofcx_rx_filterx_cfg1
{
    uint64_t u;
    struct cavm_tofcx_rx_filterx_cfg1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t read_addr             : 16; /**< [ 31: 16](RO/H) Read address within the circular buffer for last DMA; units in flits (32byte units). */
        uint64_t buffer_size           : 16; /**< [ 15:  0](R/W) Circular buffer size; units in flits (1 flit = 32 bytes). */
#else /* Word 0 - Little Endian */
        uint64_t buffer_size           : 16; /**< [ 15:  0](R/W) Circular buffer size; units in flits (1 flit = 32 bytes). */
        uint64_t read_addr             : 16; /**< [ 31: 16](RO/H) Read address within the circular buffer for last DMA; units in flits (32byte units). */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_rx_filterx_cfg1_s cn; */
};
typedef union cavm_tofcx_rx_filterx_cfg1 cavm_tofcx_rx_filterx_cfg1_t;

static inline uint64_t CAVM_TOFCX_RX_FILTERX_CFG1(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_RX_FILTERX_CFG1(uint64_t a, uint64_t b)
{
    if ((a<=3) && (b<=11))
        return 0x87e042e03050ll + 0x80000ll * ((a) & 0x3) + 0x100ll * ((b) & 0xf);
    __cavm_csr_fatal("TOFCX_RX_FILTERX_CFG1", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_RX_FILTERX_CFG1(a,b) cavm_tofcx_rx_filterx_cfg1_t
#define bustype_CAVM_TOFCX_RX_FILTERX_CFG1(a,b) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_RX_FILTERX_CFG1(a,b) "TOFCX_RX_FILTERX_CFG1"
#define busnum_CAVM_TOFCX_RX_FILTERX_CFG1(a,b) (a)
#define arguments_CAVM_TOFCX_RX_FILTERX_CFG1(a,b) (a),(b),-1,-1

/**
 * Register (RSL) tofc#_rx_filter_coeff##
 *
 * TOFC RX Filter Coefficient Registers
 * RX filter coefficient RAM holding up to 32 sets ({b} index of this register) of
 * 26 coefficients.
 *
 * Each set has 8 address locations ({c} index of this register). Four 16-bit
 * coefficients are placed in each address location. The 26 coefficients of the
 * set are placed in the first 7 locations with the 8th location left unused.
 *
 * On reception of dynamic configuration for the next symbol,
 * TOFC_UL_DYNAMIC_PARAM_S[COEFF_SEL] specifies the coefficient set. Hardware
 * reads the 26 coefficients from the RAM and uses them to configure the SCSF when
 * the symbol arrives.
 */
union cavm_tofcx_rx_filter_coeffxx
{
    uint64_t u;
    struct cavm_tofcx_rx_filter_coeffxx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t coeff3                : 16; /**< [ 63: 48](R/W) SCSF Coefficient[{c}*4+3]. */
        uint64_t coeff2                : 16; /**< [ 47: 32](R/W) SCSF Coefficient[{c}*4+2]. */
        uint64_t coeff1                : 16; /**< [ 31: 16](R/W) SCSF Coefficient[{c}*4+1]. */
        uint64_t coeff0                : 16; /**< [ 15:  0](R/W) SCSF Coefficient[{c}*4+0]. */
#else /* Word 0 - Little Endian */
        uint64_t coeff0                : 16; /**< [ 15:  0](R/W) SCSF Coefficient[{c}*4+0]. */
        uint64_t coeff1                : 16; /**< [ 31: 16](R/W) SCSF Coefficient[{c}*4+1]. */
        uint64_t coeff2                : 16; /**< [ 47: 32](R/W) SCSF Coefficient[{c}*4+2]. */
        uint64_t coeff3                : 16; /**< [ 63: 48](R/W) SCSF Coefficient[{c}*4+3]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_rx_filter_coeffxx_s cn; */
};
typedef union cavm_tofcx_rx_filter_coeffxx cavm_tofcx_rx_filter_coeffxx_t;

static inline uint64_t CAVM_TOFCX_RX_FILTER_COEFFXX(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_RX_FILTER_COEFFXX(uint64_t a, uint64_t b, uint64_t c)
{
    if ((a<=3) && (b<=31) && (c<=7))
        return 0x87e042e04000ll + 0x80000ll * ((a) & 0x3) + 0x40ll * ((b) & 0x1f) + 8ll * ((c) & 0x7);
    __cavm_csr_fatal("TOFCX_RX_FILTER_COEFFXX", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_RX_FILTER_COEFFXX(a,b,c) cavm_tofcx_rx_filter_coeffxx_t
#define bustype_CAVM_TOFCX_RX_FILTER_COEFFXX(a,b,c) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_RX_FILTER_COEFFXX(a,b,c) "TOFCX_RX_FILTER_COEFFXX"
#define busnum_CAVM_TOFCX_RX_FILTER_COEFFXX(a,b,c) (a)
#define arguments_CAVM_TOFCX_RX_FILTER_COEFFXX(a,b,c) (a),(b),(c),-1

/**
 * Register (RSL) tofc#_rx_link0_int_psm_msg_w0
 *
 * TOFC RX Link Layer 0 Interrupt Message w0 Register
 * JCA word 0 message to send for RX link layer 0 related interrupts.
 */
union cavm_tofcx_rx_link0_int_psm_msg_w0
{
    uint64_t u;
    struct cavm_tofcx_rx_link0_int_psm_msg_w0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t w0                    : 64; /**< [ 63:  0](R/W) Word 0 of JCA message. */
#else /* Word 0 - Little Endian */
        uint64_t w0                    : 64; /**< [ 63:  0](R/W) Word 0 of JCA message. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_rx_link0_int_psm_msg_w0_s cn; */
};
typedef union cavm_tofcx_rx_link0_int_psm_msg_w0 cavm_tofcx_rx_link0_int_psm_msg_w0_t;

static inline uint64_t CAVM_TOFCX_RX_LINK0_INT_PSM_MSG_W0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_RX_LINK0_INT_PSM_MSG_W0(uint64_t a)
{
    if (a<=3)
        return 0x87e042e00350ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_RX_LINK0_INT_PSM_MSG_W0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_RX_LINK0_INT_PSM_MSG_W0(a) cavm_tofcx_rx_link0_int_psm_msg_w0_t
#define bustype_CAVM_TOFCX_RX_LINK0_INT_PSM_MSG_W0(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_RX_LINK0_INT_PSM_MSG_W0(a) "TOFCX_RX_LINK0_INT_PSM_MSG_W0"
#define busnum_CAVM_TOFCX_RX_LINK0_INT_PSM_MSG_W0(a) (a)
#define arguments_CAVM_TOFCX_RX_LINK0_INT_PSM_MSG_W0(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_rx_link0_int_psm_msg_w1
 *
 * TOFC RX Link Layer 0 Interrupt Message w1 Register
 * JCA word 1 message to send for RX link layer 0 related interrupts.
 */
union cavm_tofcx_rx_link0_int_psm_msg_w1
{
    uint64_t u;
    struct cavm_tofcx_rx_link0_int_psm_msg_w1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t w1                    : 64; /**< [ 63:  0](R/W) Word 1 of JCA message. */
#else /* Word 0 - Little Endian */
        uint64_t w1                    : 64; /**< [ 63:  0](R/W) Word 1 of JCA message. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_rx_link0_int_psm_msg_w1_s cn; */
};
typedef union cavm_tofcx_rx_link0_int_psm_msg_w1 cavm_tofcx_rx_link0_int_psm_msg_w1_t;

static inline uint64_t CAVM_TOFCX_RX_LINK0_INT_PSM_MSG_W1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_RX_LINK0_INT_PSM_MSG_W1(uint64_t a)
{
    if (a<=3)
        return 0x87e042e00358ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_RX_LINK0_INT_PSM_MSG_W1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_RX_LINK0_INT_PSM_MSG_W1(a) cavm_tofcx_rx_link0_int_psm_msg_w1_t
#define bustype_CAVM_TOFCX_RX_LINK0_INT_PSM_MSG_W1(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_RX_LINK0_INT_PSM_MSG_W1(a) "TOFCX_RX_LINK0_INT_PSM_MSG_W1"
#define busnum_CAVM_TOFCX_RX_LINK0_INT_PSM_MSG_W1(a) (a)
#define arguments_CAVM_TOFCX_RX_LINK0_INT_PSM_MSG_W1(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_ten_ms_counter
 *
 * TOFC 10 ms counter Register
 */
union cavm_tofcx_ten_ms_counter
{
    uint64_t u;
    struct cavm_tofcx_ten_ms_counter_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t cnt_limit             : 32; /**< [ 31:  0](R/W) 10ms counter limit. Must be set to the number of BCLK cycles per 10 ms.
                                                                 The reset value assumes BCLK frequency of 1GHz. */
#else /* Word 0 - Little Endian */
        uint64_t cnt_limit             : 32; /**< [ 31:  0](R/W) 10ms counter limit. Must be set to the number of BCLK cycles per 10 ms.
                                                                 The reset value assumes BCLK frequency of 1GHz. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_ten_ms_counter_s cn; */
};
typedef union cavm_tofcx_ten_ms_counter cavm_tofcx_ten_ms_counter_t;

static inline uint64_t CAVM_TOFCX_TEN_MS_COUNTER(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TEN_MS_COUNTER(uint64_t a)
{
    if (a<=3)
        return 0x87e042e03100ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_TEN_MS_COUNTER", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TEN_MS_COUNTER(a) cavm_tofcx_ten_ms_counter_t
#define bustype_CAVM_TOFCX_TEN_MS_COUNTER(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TEN_MS_COUNTER(a) "TOFCX_TEN_MS_COUNTER"
#define busnum_CAVM_TOFCX_TEN_MS_COUNTER(a) (a)
#define arguments_CAVM_TOFCX_TEN_MS_COUNTER(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_tofm_clk_control
 *
 * TOFM Clock Control Register
 */
union cavm_tofcx_tofm_clk_control
{
    uint64_t u;
    struct cavm_tofcx_tofm_clk_control_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t tofm_clk_disable      : 1;  /**< [  0:  0](R/W) When set, this disables both bclk and jclk which are the two main clocks that
                                                                 TOFM uses. It can be disabled by software if all the 4 lanes corresponding to
                                                                 this TOFM are turned off for power savings. */
#else /* Word 0 - Little Endian */
        uint64_t tofm_clk_disable      : 1;  /**< [  0:  0](R/W) When set, this disables both bclk and jclk which are the two main clocks that
                                                                 TOFM uses. It can be disabled by software if all the 4 lanes corresponding to
                                                                 this TOFM are turned off for power savings. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tofm_clk_control_s cn; */
};
typedef union cavm_tofcx_tofm_clk_control cavm_tofcx_tofm_clk_control_t;

static inline uint64_t CAVM_TOFCX_TOFM_CLK_CONTROL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TOFM_CLK_CONTROL(uint64_t a)
{
    if (a<=3)
        return 0x87e042e08018ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_TOFM_CLK_CONTROL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TOFM_CLK_CONTROL(a) cavm_tofcx_tofm_clk_control_t
#define bustype_CAVM_TOFCX_TOFM_CLK_CONTROL(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TOFM_CLK_CONTROL(a) "TOFCX_TOFM_CLK_CONTROL"
#define busnum_CAVM_TOFCX_TOFM_CLK_CONTROL(a) (a)
#define arguments_CAVM_TOFCX_TOFM_CLK_CONTROL(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_tofm_control
 *
 * TOFC TOFM Control Register
 */
union cavm_tofcx_tofm_control
{
    uint64_t u;
    struct cavm_tofcx_tofm_control_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t tofm_loopback_en      : 1;  /**< [ 63: 63](R/W) TOFM internal loopback mode enable. Loopback after TOFM TL, before Link.
                                                                 0 = (default) normal operation.
                                                                 1 = TOFM TX loop back to RX.

                                                                 For diagnostic use only. */
        uint64_t tofm_ll_loopback_en   : 1;  /**< [ 62: 62](R/W) TOFM link layer loopback mode enable.
                                                                 0 = (default) normal operation.
                                                                 1 = TOFM TX to RX loopback in link layer.

                                                                 For diagnostic use only.
                                                                 This feature has been disabled. */
        uint64_t tofm_gserj_loopback_en : 2; /**< [ 61: 60](R/W) TOFM GSERJ loopback mode enable
                                                                 0 = (default) normal operation
                                                                 1 = TOFM TX to RX loopback at GSERJ with parallel syncb
                                                                 2 = TOFM TX to RX loopback at GSERJ with combined syncb

                                                                 This feature has been deprecated. */
        uint64_t reserved_20_59        : 40;
        uint64_t rst_tofm_sdsif        : 1;  /**< [ 19: 19](R/W) Soft Reset for TOFM SerDes interface. This soft reset is set by default
                                                                 to allow the SerDes TX clock to begin running before deasserting reset. */
        uint64_t rst_tofm_bmio         : 1;  /**< [ 18: 18](R/W) Soft reset for TOFM BMIO. Setting to 1 resets TOFM BMIO datapath but does not reset the CSRs. */
        uint64_t rst_tofm_rx           : 1;  /**< [ 17: 17](R/W) Soft reset for TOFM RX. Setting to 1 resets TOFM RX datapath but does not reset the CSRs. */
        uint64_t rst_tofm_tx           : 1;  /**< [ 16: 16](R/W) Soft reset for TOFM TX. Setting to 1 resets TOFM TX datapath but does not reset the CSRs. */
        uint64_t num_conv_per_lane     : 8;  /**< [ 15:  8](R/W) Number of converters per lane divided by 4. Legal values:
                                                                 0x6 = 24 converters. (For MB1..MB6).
                                                                 0x8 = 32 converters. (For MB7..MB10; MA1..MA9).
                                                                 0xC = 48 converters. (For MB21..MB26). */
        uint64_t reserved_4_7          : 4;
        uint64_t num_lanes             : 1;  /**< [  3:  3](R/W) 0 = 4 lanes (all 4 lanes used)
                                                                 1 = 2 lanes (Lower 2 lanes used only) */
        uint64_t num_devices           : 1;  /**< [  2:  2](R/W) Number of 204C/B devices minus 1.
                                                                 0x0 = 1 device (4 lanes).
                                                                 Rest = Reserved. */
        uint64_t reserved_1            : 1;
        uint64_t run                   : 1;  /**< [  0:  0](R/W) Run bit.
                                                                 0 = No data pushed to 204C/B transmitter, and 204C/B received data will be discarded.
                                                                 1 = Running. Data can be transmitted/received with 204C/B device
                                                                 Note: When switching RUN bit from 1 to 0, the block must be reset before switching it back to a 1. */
#else /* Word 0 - Little Endian */
        uint64_t run                   : 1;  /**< [  0:  0](R/W) Run bit.
                                                                 0 = No data pushed to 204C/B transmitter, and 204C/B received data will be discarded.
                                                                 1 = Running. Data can be transmitted/received with 204C/B device
                                                                 Note: When switching RUN bit from 1 to 0, the block must be reset before switching it back to a 1. */
        uint64_t reserved_1            : 1;
        uint64_t num_devices           : 1;  /**< [  2:  2](R/W) Number of 204C/B devices minus 1.
                                                                 0x0 = 1 device (4 lanes).
                                                                 Rest = Reserved. */
        uint64_t num_lanes             : 1;  /**< [  3:  3](R/W) 0 = 4 lanes (all 4 lanes used)
                                                                 1 = 2 lanes (Lower 2 lanes used only) */
        uint64_t reserved_4_7          : 4;
        uint64_t num_conv_per_lane     : 8;  /**< [ 15:  8](R/W) Number of converters per lane divided by 4. Legal values:
                                                                 0x6 = 24 converters. (For MB1..MB6).
                                                                 0x8 = 32 converters. (For MB7..MB10; MA1..MA9).
                                                                 0xC = 48 converters. (For MB21..MB26). */
        uint64_t rst_tofm_tx           : 1;  /**< [ 16: 16](R/W) Soft reset for TOFM TX. Setting to 1 resets TOFM TX datapath but does not reset the CSRs. */
        uint64_t rst_tofm_rx           : 1;  /**< [ 17: 17](R/W) Soft reset for TOFM RX. Setting to 1 resets TOFM RX datapath but does not reset the CSRs. */
        uint64_t rst_tofm_bmio         : 1;  /**< [ 18: 18](R/W) Soft reset for TOFM BMIO. Setting to 1 resets TOFM BMIO datapath but does not reset the CSRs. */
        uint64_t rst_tofm_sdsif        : 1;  /**< [ 19: 19](R/W) Soft Reset for TOFM SerDes interface. This soft reset is set by default
                                                                 to allow the SerDes TX clock to begin running before deasserting reset. */
        uint64_t reserved_20_59        : 40;
        uint64_t tofm_gserj_loopback_en : 2; /**< [ 61: 60](R/W) TOFM GSERJ loopback mode enable
                                                                 0 = (default) normal operation
                                                                 1 = TOFM TX to RX loopback at GSERJ with parallel syncb
                                                                 2 = TOFM TX to RX loopback at GSERJ with combined syncb

                                                                 This feature has been deprecated. */
        uint64_t tofm_ll_loopback_en   : 1;  /**< [ 62: 62](R/W) TOFM link layer loopback mode enable.
                                                                 0 = (default) normal operation.
                                                                 1 = TOFM TX to RX loopback in link layer.

                                                                 For diagnostic use only.
                                                                 This feature has been disabled. */
        uint64_t tofm_loopback_en      : 1;  /**< [ 63: 63](R/W) TOFM internal loopback mode enable. Loopback after TOFM TL, before Link.
                                                                 0 = (default) normal operation.
                                                                 1 = TOFM TX loop back to RX.

                                                                 For diagnostic use only. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tofm_control_s cn; */
};
typedef union cavm_tofcx_tofm_control cavm_tofcx_tofm_control_t;

static inline uint64_t CAVM_TOFCX_TOFM_CONTROL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TOFM_CONTROL(uint64_t a)
{
    if (a<=3)
        return 0x87e042e08000ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_TOFM_CONTROL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TOFM_CONTROL(a) cavm_tofcx_tofm_control_t
#define bustype_CAVM_TOFCX_TOFM_CONTROL(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TOFM_CONTROL(a) "TOFCX_TOFM_CONTROL"
#define busnum_CAVM_TOFCX_TOFM_CONTROL(a) (a)
#define arguments_CAVM_TOFCX_TOFM_CONTROL(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_tofm_debug_status
 *
 * TOFC TOFM Debug Register
 */
union cavm_tofcx_tofm_debug_status
{
    uint64_t u;
    struct cavm_tofcx_tofm_debug_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t vdd_obs               : 2;  /**< [  1:  0](RO/H) VDD observation */
#else /* Word 0 - Little Endian */
        uint64_t vdd_obs               : 2;  /**< [  1:  0](RO/H) VDD observation */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tofm_debug_status_s cn; */
};
typedef union cavm_tofcx_tofm_debug_status cavm_tofcx_tofm_debug_status_t;

static inline uint64_t CAVM_TOFCX_TOFM_DEBUG_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TOFM_DEBUG_STATUS(uint64_t a)
{
    if (a<=3)
        return 0x87e042e080b0ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_TOFM_DEBUG_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TOFM_DEBUG_STATUS(a) cavm_tofcx_tofm_debug_status_t
#define bustype_CAVM_TOFCX_TOFM_DEBUG_STATUS(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TOFM_DEBUG_STATUS(a) "TOFCX_TOFM_DEBUG_STATUS"
#define busnum_CAVM_TOFCX_TOFM_DEBUG_STATUS(a) (a)
#define arguments_CAVM_TOFCX_TOFM_DEBUG_STATUS(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_tofm_int
 *
 * TOFM Interrupt Register
 * These registers record interrupts due to different error events in TOFM.
 */
union cavm_tofcx_tofm_int
{
    uint64_t u;
    struct cavm_tofcx_tofm_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_20_63        : 44;
        uint64_t tofm_rx_parity_err    : 1;  /**< [ 19: 19](R/W1C/H) TOFM RX Parity Error interrupt. This error is based on Bit[5] of the Error
                                                                 Report Register of any of the lanes */
        uint64_t tofm_rx_crc3_err      : 1;  /**< [ 18: 18](R/W1C/H) TOFM RX CRC3 Error interrupt. This error is based on Bit[2] of the Error Report
                                                                 Register of any of the lanes. */
        uint64_t tofm_rx_crc12_err     : 1;  /**< [ 17: 17](R/W1C/H) TOFM RX CRC12 Error interrupt. This error is based on Bit[1] of the Error Report
                                                                 Register of any of the lanes. */
        uint64_t tofm_rx_fec_err       : 1;  /**< [ 16: 16](R/W1C/H) TOFM RX FEC Error interrupt. This error is based on Bit[0] of the Error Report
                                                                 Register of any of the lanes. */
        uint64_t tofm_rx_sh_lock_loss  : 1;  /**< [ 15: 15](R/W1C/H) TOFM RX SH Lock Loss interrupt. */
        uint64_t tofm_rx_emb_lock_loss : 1;  /**< [ 14: 14](R/W1C/H) TOFM RX EMB Lock Loss interrupt. */
        uint64_t tx_lane3_sds_fifo_overflow : 1;/**< [ 13: 13](R/W1C/H) TX lane3 SerDes interface FIFO overflow. */
        uint64_t tx_lane2_sds_fifo_overflow : 1;/**< [ 12: 12](R/W1C/H) TX lane2 SerDes interface FIFO overflow. */
        uint64_t tx_lane3_sds_fifo_underflow : 1;/**< [ 11: 11](R/W1C/H) TX lane3 SerDes interface FIFO underflow. */
        uint64_t tx_lane2_sds_fifo_underflow : 1;/**< [ 10: 10](R/W1C/H) TX lane2 SerDes interface FIFO underflow. */
        uint64_t rx_testmode_sp_error  : 1;  /**< [  9:  9](R/W1C/H) RX test mode short pattern comparison error. */
        uint64_t rx_testmode_lp_error  : 1;  /**< [  8:  8](R/W1C/H) RX test mode long pattern comparison error. */
        uint64_t rx_lane3_fifo_overflow : 1; /**< [  7:  7](R/W1C/H) RX lane3 alignment FIFO overflow. */
        uint64_t rx_lane2_fifo_overflow : 1; /**< [  6:  6](R/W1C/H) RX lane2 alignment FIFO overflow. */
        uint64_t rx_lane1_fifo_overflow : 1; /**< [  5:  5](R/W1C/H) RX lane1 alignment FIFO overflow. */
        uint64_t rx_lane0_fifo_overflow : 1; /**< [  4:  4](R/W1C/H) RX lane0 alignment FIFO overflow. */
        uint64_t rx_async_fifo_overflow : 1; /**< [  3:  3](R/W1C/H) RX async FIFO overflow. */
        uint64_t tx_transport_underflow : 1; /**< [  2:  2](R/W1C/H) TX transport layer underflow. */
        uint64_t tx_async_fifo_overflow : 1; /**< [  1:  1](R/W1C/H) TX async FIFO overflow. */
        uint64_t tx_credit_fifo_overflow : 1;/**< [  0:  0](R/W1C/H) TX credit FIFO overflow. */
#else /* Word 0 - Little Endian */
        uint64_t tx_credit_fifo_overflow : 1;/**< [  0:  0](R/W1C/H) TX credit FIFO overflow. */
        uint64_t tx_async_fifo_overflow : 1; /**< [  1:  1](R/W1C/H) TX async FIFO overflow. */
        uint64_t tx_transport_underflow : 1; /**< [  2:  2](R/W1C/H) TX transport layer underflow. */
        uint64_t rx_async_fifo_overflow : 1; /**< [  3:  3](R/W1C/H) RX async FIFO overflow. */
        uint64_t rx_lane0_fifo_overflow : 1; /**< [  4:  4](R/W1C/H) RX lane0 alignment FIFO overflow. */
        uint64_t rx_lane1_fifo_overflow : 1; /**< [  5:  5](R/W1C/H) RX lane1 alignment FIFO overflow. */
        uint64_t rx_lane2_fifo_overflow : 1; /**< [  6:  6](R/W1C/H) RX lane2 alignment FIFO overflow. */
        uint64_t rx_lane3_fifo_overflow : 1; /**< [  7:  7](R/W1C/H) RX lane3 alignment FIFO overflow. */
        uint64_t rx_testmode_lp_error  : 1;  /**< [  8:  8](R/W1C/H) RX test mode long pattern comparison error. */
        uint64_t rx_testmode_sp_error  : 1;  /**< [  9:  9](R/W1C/H) RX test mode short pattern comparison error. */
        uint64_t tx_lane2_sds_fifo_underflow : 1;/**< [ 10: 10](R/W1C/H) TX lane2 SerDes interface FIFO underflow. */
        uint64_t tx_lane3_sds_fifo_underflow : 1;/**< [ 11: 11](R/W1C/H) TX lane3 SerDes interface FIFO underflow. */
        uint64_t tx_lane2_sds_fifo_overflow : 1;/**< [ 12: 12](R/W1C/H) TX lane2 SerDes interface FIFO overflow. */
        uint64_t tx_lane3_sds_fifo_overflow : 1;/**< [ 13: 13](R/W1C/H) TX lane3 SerDes interface FIFO overflow. */
        uint64_t tofm_rx_emb_lock_loss : 1;  /**< [ 14: 14](R/W1C/H) TOFM RX EMB Lock Loss interrupt. */
        uint64_t tofm_rx_sh_lock_loss  : 1;  /**< [ 15: 15](R/W1C/H) TOFM RX SH Lock Loss interrupt. */
        uint64_t tofm_rx_fec_err       : 1;  /**< [ 16: 16](R/W1C/H) TOFM RX FEC Error interrupt. This error is based on Bit[0] of the Error Report
                                                                 Register of any of the lanes. */
        uint64_t tofm_rx_crc12_err     : 1;  /**< [ 17: 17](R/W1C/H) TOFM RX CRC12 Error interrupt. This error is based on Bit[1] of the Error Report
                                                                 Register of any of the lanes. */
        uint64_t tofm_rx_crc3_err      : 1;  /**< [ 18: 18](R/W1C/H) TOFM RX CRC3 Error interrupt. This error is based on Bit[2] of the Error Report
                                                                 Register of any of the lanes. */
        uint64_t tofm_rx_parity_err    : 1;  /**< [ 19: 19](R/W1C/H) TOFM RX Parity Error interrupt. This error is based on Bit[5] of the Error
                                                                 Report Register of any of the lanes */
        uint64_t reserved_20_63        : 44;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tofm_int_s cn; */
};
typedef union cavm_tofcx_tofm_int cavm_tofcx_tofm_int_t;

static inline uint64_t CAVM_TOFCX_TOFM_INT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TOFM_INT(uint64_t a)
{
    if (a<=3)
        return 0x87e042e08020ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_TOFM_INT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TOFM_INT(a) cavm_tofcx_tofm_int_t
#define bustype_CAVM_TOFCX_TOFM_INT(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TOFM_INT(a) "TOFCX_TOFM_INT"
#define busnum_CAVM_TOFCX_TOFM_INT(a) (a)
#define arguments_CAVM_TOFCX_TOFM_INT(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_tofm_int_ena_w1c
 *
 * TOFM Error Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_tofcx_tofm_int_ena_w1c
{
    uint64_t u;
    struct cavm_tofcx_tofm_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_20_63        : 44;
        uint64_t tofm_rx_parity_err    : 1;  /**< [ 19: 19](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFM_INT[TOFM_RX_PARITY_ERR]. */
        uint64_t tofm_rx_crc3_err      : 1;  /**< [ 18: 18](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFM_INT[TOFM_RX_CRC3_ERR]. */
        uint64_t tofm_rx_crc12_err     : 1;  /**< [ 17: 17](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFM_INT[TOFM_RX_CRC12_ERR]. */
        uint64_t tofm_rx_fec_err       : 1;  /**< [ 16: 16](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFM_INT[TOFM_RX_FEC_ERR]. */
        uint64_t tofm_rx_sh_lock_loss  : 1;  /**< [ 15: 15](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFM_INT[TOFM_RX_SH_LOCK_LOSS]. */
        uint64_t tofm_rx_emb_lock_loss : 1;  /**< [ 14: 14](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFM_INT[TOFM_RX_EMB_LOCK_LOSS]. */
        uint64_t tx_lane3_sds_fifo_overflow : 1;/**< [ 13: 13](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFM_INT[TX_LANE3_SDS_FIFO_OVERFLOW]. */
        uint64_t tx_lane2_sds_fifo_overflow : 1;/**< [ 12: 12](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFM_INT[TX_LANE2_SDS_FIFO_OVERFLOW]. */
        uint64_t tx_lane3_sds_fifo_underflow : 1;/**< [ 11: 11](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFM_INT[TX_LANE3_SDS_FIFO_UNDERFLOW]. */
        uint64_t tx_lane2_sds_fifo_underflow : 1;/**< [ 10: 10](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFM_INT[TX_LANE2_SDS_FIFO_UNDERFLOW]. */
        uint64_t rx_testmode_sp_error  : 1;  /**< [  9:  9](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFM_INT[RX_TESTMODE_SP_ERROR]. */
        uint64_t rx_testmode_lp_error  : 1;  /**< [  8:  8](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFM_INT[RX_TESTMODE_LP_ERROR]. */
        uint64_t rx_lane3_fifo_overflow : 1; /**< [  7:  7](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFM_INT[RX_LANE3_FIFO_OVERFLOW]. */
        uint64_t rx_lane2_fifo_overflow : 1; /**< [  6:  6](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFM_INT[RX_LANE2_FIFO_OVERFLOW]. */
        uint64_t rx_lane1_fifo_overflow : 1; /**< [  5:  5](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFM_INT[RX_LANE1_FIFO_OVERFLOW]. */
        uint64_t rx_lane0_fifo_overflow : 1; /**< [  4:  4](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFM_INT[RX_LANE0_FIFO_OVERFLOW]. */
        uint64_t rx_async_fifo_overflow : 1; /**< [  3:  3](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFM_INT[RX_ASYNC_FIFO_OVERFLOW]. */
        uint64_t tx_transport_underflow : 1; /**< [  2:  2](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFM_INT[TX_TRANSPORT_UNDERFLOW]. */
        uint64_t tx_async_fifo_overflow : 1; /**< [  1:  1](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFM_INT[TX_ASYNC_FIFO_OVERFLOW]. */
        uint64_t tx_credit_fifo_overflow : 1;/**< [  0:  0](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFM_INT[TX_CREDIT_FIFO_OVERFLOW]. */
#else /* Word 0 - Little Endian */
        uint64_t tx_credit_fifo_overflow : 1;/**< [  0:  0](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFM_INT[TX_CREDIT_FIFO_OVERFLOW]. */
        uint64_t tx_async_fifo_overflow : 1; /**< [  1:  1](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFM_INT[TX_ASYNC_FIFO_OVERFLOW]. */
        uint64_t tx_transport_underflow : 1; /**< [  2:  2](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFM_INT[TX_TRANSPORT_UNDERFLOW]. */
        uint64_t rx_async_fifo_overflow : 1; /**< [  3:  3](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFM_INT[RX_ASYNC_FIFO_OVERFLOW]. */
        uint64_t rx_lane0_fifo_overflow : 1; /**< [  4:  4](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFM_INT[RX_LANE0_FIFO_OVERFLOW]. */
        uint64_t rx_lane1_fifo_overflow : 1; /**< [  5:  5](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFM_INT[RX_LANE1_FIFO_OVERFLOW]. */
        uint64_t rx_lane2_fifo_overflow : 1; /**< [  6:  6](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFM_INT[RX_LANE2_FIFO_OVERFLOW]. */
        uint64_t rx_lane3_fifo_overflow : 1; /**< [  7:  7](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFM_INT[RX_LANE3_FIFO_OVERFLOW]. */
        uint64_t rx_testmode_lp_error  : 1;  /**< [  8:  8](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFM_INT[RX_TESTMODE_LP_ERROR]. */
        uint64_t rx_testmode_sp_error  : 1;  /**< [  9:  9](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFM_INT[RX_TESTMODE_SP_ERROR]. */
        uint64_t tx_lane2_sds_fifo_underflow : 1;/**< [ 10: 10](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFM_INT[TX_LANE2_SDS_FIFO_UNDERFLOW]. */
        uint64_t tx_lane3_sds_fifo_underflow : 1;/**< [ 11: 11](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFM_INT[TX_LANE3_SDS_FIFO_UNDERFLOW]. */
        uint64_t tx_lane2_sds_fifo_overflow : 1;/**< [ 12: 12](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFM_INT[TX_LANE2_SDS_FIFO_OVERFLOW]. */
        uint64_t tx_lane3_sds_fifo_overflow : 1;/**< [ 13: 13](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFM_INT[TX_LANE3_SDS_FIFO_OVERFLOW]. */
        uint64_t tofm_rx_emb_lock_loss : 1;  /**< [ 14: 14](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFM_INT[TOFM_RX_EMB_LOCK_LOSS]. */
        uint64_t tofm_rx_sh_lock_loss  : 1;  /**< [ 15: 15](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFM_INT[TOFM_RX_SH_LOCK_LOSS]. */
        uint64_t tofm_rx_fec_err       : 1;  /**< [ 16: 16](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFM_INT[TOFM_RX_FEC_ERR]. */
        uint64_t tofm_rx_crc12_err     : 1;  /**< [ 17: 17](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFM_INT[TOFM_RX_CRC12_ERR]. */
        uint64_t tofm_rx_crc3_err      : 1;  /**< [ 18: 18](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFM_INT[TOFM_RX_CRC3_ERR]. */
        uint64_t tofm_rx_parity_err    : 1;  /**< [ 19: 19](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFM_INT[TOFM_RX_PARITY_ERR]. */
        uint64_t reserved_20_63        : 44;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tofm_int_ena_w1c_s cn; */
};
typedef union cavm_tofcx_tofm_int_ena_w1c cavm_tofcx_tofm_int_ena_w1c_t;

static inline uint64_t CAVM_TOFCX_TOFM_INT_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TOFM_INT_ENA_W1C(uint64_t a)
{
    if (a<=3)
        return 0x87e042e08030ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_TOFM_INT_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TOFM_INT_ENA_W1C(a) cavm_tofcx_tofm_int_ena_w1c_t
#define bustype_CAVM_TOFCX_TOFM_INT_ENA_W1C(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TOFM_INT_ENA_W1C(a) "TOFCX_TOFM_INT_ENA_W1C"
#define busnum_CAVM_TOFCX_TOFM_INT_ENA_W1C(a) (a)
#define arguments_CAVM_TOFCX_TOFM_INT_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_tofm_int_ena_w1s
 *
 * TOFM Error Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_tofcx_tofm_int_ena_w1s
{
    uint64_t u;
    struct cavm_tofcx_tofm_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_20_63        : 44;
        uint64_t tofm_rx_parity_err    : 1;  /**< [ 19: 19](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFM_INT[TOFM_RX_PARITY_ERR]. */
        uint64_t tofm_rx_crc3_err      : 1;  /**< [ 18: 18](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFM_INT[TOFM_RX_CRC3_ERR]. */
        uint64_t tofm_rx_crc12_err     : 1;  /**< [ 17: 17](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFM_INT[TOFM_RX_CRC12_ERR]. */
        uint64_t tofm_rx_fec_err       : 1;  /**< [ 16: 16](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFM_INT[TOFM_RX_FEC_ERR]. */
        uint64_t tofm_rx_sh_lock_loss  : 1;  /**< [ 15: 15](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFM_INT[TOFM_RX_SH_LOCK_LOSS]. */
        uint64_t tofm_rx_emb_lock_loss : 1;  /**< [ 14: 14](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFM_INT[TOFM_RX_EMB_LOCK_LOSS]. */
        uint64_t tx_lane3_sds_fifo_overflow : 1;/**< [ 13: 13](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFM_INT[TX_LANE3_SDS_FIFO_OVERFLOW]. */
        uint64_t tx_lane2_sds_fifo_overflow : 1;/**< [ 12: 12](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFM_INT[TX_LANE2_SDS_FIFO_OVERFLOW]. */
        uint64_t tx_lane3_sds_fifo_underflow : 1;/**< [ 11: 11](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFM_INT[TX_LANE3_SDS_FIFO_UNDERFLOW]. */
        uint64_t tx_lane2_sds_fifo_underflow : 1;/**< [ 10: 10](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFM_INT[TX_LANE2_SDS_FIFO_UNDERFLOW]. */
        uint64_t rx_testmode_sp_error  : 1;  /**< [  9:  9](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFM_INT[RX_TESTMODE_SP_ERROR]. */
        uint64_t rx_testmode_lp_error  : 1;  /**< [  8:  8](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFM_INT[RX_TESTMODE_LP_ERROR]. */
        uint64_t rx_lane3_fifo_overflow : 1; /**< [  7:  7](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFM_INT[RX_LANE3_FIFO_OVERFLOW]. */
        uint64_t rx_lane2_fifo_overflow : 1; /**< [  6:  6](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFM_INT[RX_LANE2_FIFO_OVERFLOW]. */
        uint64_t rx_lane1_fifo_overflow : 1; /**< [  5:  5](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFM_INT[RX_LANE1_FIFO_OVERFLOW]. */
        uint64_t rx_lane0_fifo_overflow : 1; /**< [  4:  4](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFM_INT[RX_LANE0_FIFO_OVERFLOW]. */
        uint64_t rx_async_fifo_overflow : 1; /**< [  3:  3](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFM_INT[RX_ASYNC_FIFO_OVERFLOW]. */
        uint64_t tx_transport_underflow : 1; /**< [  2:  2](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFM_INT[TX_TRANSPORT_UNDERFLOW]. */
        uint64_t tx_async_fifo_overflow : 1; /**< [  1:  1](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFM_INT[TX_ASYNC_FIFO_OVERFLOW]. */
        uint64_t tx_credit_fifo_overflow : 1;/**< [  0:  0](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFM_INT[TX_CREDIT_FIFO_OVERFLOW]. */
#else /* Word 0 - Little Endian */
        uint64_t tx_credit_fifo_overflow : 1;/**< [  0:  0](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFM_INT[TX_CREDIT_FIFO_OVERFLOW]. */
        uint64_t tx_async_fifo_overflow : 1; /**< [  1:  1](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFM_INT[TX_ASYNC_FIFO_OVERFLOW]. */
        uint64_t tx_transport_underflow : 1; /**< [  2:  2](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFM_INT[TX_TRANSPORT_UNDERFLOW]. */
        uint64_t rx_async_fifo_overflow : 1; /**< [  3:  3](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFM_INT[RX_ASYNC_FIFO_OVERFLOW]. */
        uint64_t rx_lane0_fifo_overflow : 1; /**< [  4:  4](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFM_INT[RX_LANE0_FIFO_OVERFLOW]. */
        uint64_t rx_lane1_fifo_overflow : 1; /**< [  5:  5](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFM_INT[RX_LANE1_FIFO_OVERFLOW]. */
        uint64_t rx_lane2_fifo_overflow : 1; /**< [  6:  6](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFM_INT[RX_LANE2_FIFO_OVERFLOW]. */
        uint64_t rx_lane3_fifo_overflow : 1; /**< [  7:  7](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFM_INT[RX_LANE3_FIFO_OVERFLOW]. */
        uint64_t rx_testmode_lp_error  : 1;  /**< [  8:  8](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFM_INT[RX_TESTMODE_LP_ERROR]. */
        uint64_t rx_testmode_sp_error  : 1;  /**< [  9:  9](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFM_INT[RX_TESTMODE_SP_ERROR]. */
        uint64_t tx_lane2_sds_fifo_underflow : 1;/**< [ 10: 10](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFM_INT[TX_LANE2_SDS_FIFO_UNDERFLOW]. */
        uint64_t tx_lane3_sds_fifo_underflow : 1;/**< [ 11: 11](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFM_INT[TX_LANE3_SDS_FIFO_UNDERFLOW]. */
        uint64_t tx_lane2_sds_fifo_overflow : 1;/**< [ 12: 12](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFM_INT[TX_LANE2_SDS_FIFO_OVERFLOW]. */
        uint64_t tx_lane3_sds_fifo_overflow : 1;/**< [ 13: 13](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFM_INT[TX_LANE3_SDS_FIFO_OVERFLOW]. */
        uint64_t tofm_rx_emb_lock_loss : 1;  /**< [ 14: 14](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFM_INT[TOFM_RX_EMB_LOCK_LOSS]. */
        uint64_t tofm_rx_sh_lock_loss  : 1;  /**< [ 15: 15](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFM_INT[TOFM_RX_SH_LOCK_LOSS]. */
        uint64_t tofm_rx_fec_err       : 1;  /**< [ 16: 16](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFM_INT[TOFM_RX_FEC_ERR]. */
        uint64_t tofm_rx_crc12_err     : 1;  /**< [ 17: 17](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFM_INT[TOFM_RX_CRC12_ERR]. */
        uint64_t tofm_rx_crc3_err      : 1;  /**< [ 18: 18](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFM_INT[TOFM_RX_CRC3_ERR]. */
        uint64_t tofm_rx_parity_err    : 1;  /**< [ 19: 19](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFM_INT[TOFM_RX_PARITY_ERR]. */
        uint64_t reserved_20_63        : 44;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tofm_int_ena_w1s_s cn; */
};
typedef union cavm_tofcx_tofm_int_ena_w1s cavm_tofcx_tofm_int_ena_w1s_t;

static inline uint64_t CAVM_TOFCX_TOFM_INT_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TOFM_INT_ENA_W1S(uint64_t a)
{
    if (a<=3)
        return 0x87e042e08028ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_TOFM_INT_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TOFM_INT_ENA_W1S(a) cavm_tofcx_tofm_int_ena_w1s_t
#define bustype_CAVM_TOFCX_TOFM_INT_ENA_W1S(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TOFM_INT_ENA_W1S(a) "TOFCX_TOFM_INT_ENA_W1S"
#define busnum_CAVM_TOFCX_TOFM_INT_ENA_W1S(a) (a)
#define arguments_CAVM_TOFCX_TOFM_INT_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_tofm_int_psm_msg_w0
 *
 * TOFC TOFM Transport Interrupt Message w0 Register
 * JCA word 0 message to send for TOFM transport related interrupts.
 */
union cavm_tofcx_tofm_int_psm_msg_w0
{
    uint64_t u;
    struct cavm_tofcx_tofm_int_psm_msg_w0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t w0                    : 64; /**< [ 63:  0](R/W) Word 0 of JCA message. */
#else /* Word 0 - Little Endian */
        uint64_t w0                    : 64; /**< [ 63:  0](R/W) Word 0 of JCA message. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tofm_int_psm_msg_w0_s cn; */
};
typedef union cavm_tofcx_tofm_int_psm_msg_w0 cavm_tofcx_tofm_int_psm_msg_w0_t;

static inline uint64_t CAVM_TOFCX_TOFM_INT_PSM_MSG_W0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TOFM_INT_PSM_MSG_W0(uint64_t a)
{
    if (a<=3)
        return 0x87e042e00340ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_TOFM_INT_PSM_MSG_W0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TOFM_INT_PSM_MSG_W0(a) cavm_tofcx_tofm_int_psm_msg_w0_t
#define bustype_CAVM_TOFCX_TOFM_INT_PSM_MSG_W0(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TOFM_INT_PSM_MSG_W0(a) "TOFCX_TOFM_INT_PSM_MSG_W0"
#define busnum_CAVM_TOFCX_TOFM_INT_PSM_MSG_W0(a) (a)
#define arguments_CAVM_TOFCX_TOFM_INT_PSM_MSG_W0(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_tofm_int_psm_msg_w1
 *
 * TOFC TOFM Transport Interrupt Message w1 Register
 * JCA word 1 message to send for TOFM transport related interrupts.
 */
union cavm_tofcx_tofm_int_psm_msg_w1
{
    uint64_t u;
    struct cavm_tofcx_tofm_int_psm_msg_w1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t w1                    : 64; /**< [ 63:  0](R/W) Word 1 of JCA message. */
#else /* Word 0 - Little Endian */
        uint64_t w1                    : 64; /**< [ 63:  0](R/W) Word 1 of JCA message. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tofm_int_psm_msg_w1_s cn; */
};
typedef union cavm_tofcx_tofm_int_psm_msg_w1 cavm_tofcx_tofm_int_psm_msg_w1_t;

static inline uint64_t CAVM_TOFCX_TOFM_INT_PSM_MSG_W1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TOFM_INT_PSM_MSG_W1(uint64_t a)
{
    if (a<=3)
        return 0x87e042e00348ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_TOFM_INT_PSM_MSG_W1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TOFM_INT_PSM_MSG_W1(a) cavm_tofcx_tofm_int_psm_msg_w1_t
#define bustype_CAVM_TOFCX_TOFM_INT_PSM_MSG_W1(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TOFM_INT_PSM_MSG_W1(a) "TOFCX_TOFM_INT_PSM_MSG_W1"
#define busnum_CAVM_TOFCX_TOFM_INT_PSM_MSG_W1(a) (a)
#define arguments_CAVM_TOFCX_TOFM_INT_PSM_MSG_W1(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_tofm_int_w1s
 *
 * TOFM Error Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_tofcx_tofm_int_w1s
{
    uint64_t u;
    struct cavm_tofcx_tofm_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_20_63        : 44;
        uint64_t tofm_rx_parity_err    : 1;  /**< [ 19: 19](R/W1S/H) Reads or sets TOFC(0..3)_TOFM_INT[TOFM_RX_PARITY_ERR]. */
        uint64_t tofm_rx_crc3_err      : 1;  /**< [ 18: 18](R/W1S/H) Reads or sets TOFC(0..3)_TOFM_INT[TOFM_RX_CRC3_ERR]. */
        uint64_t tofm_rx_crc12_err     : 1;  /**< [ 17: 17](R/W1S/H) Reads or sets TOFC(0..3)_TOFM_INT[TOFM_RX_CRC12_ERR]. */
        uint64_t tofm_rx_fec_err       : 1;  /**< [ 16: 16](R/W1S/H) Reads or sets TOFC(0..3)_TOFM_INT[TOFM_RX_FEC_ERR]. */
        uint64_t tofm_rx_sh_lock_loss  : 1;  /**< [ 15: 15](R/W1S/H) Reads or sets TOFC(0..3)_TOFM_INT[TOFM_RX_SH_LOCK_LOSS]. */
        uint64_t tofm_rx_emb_lock_loss : 1;  /**< [ 14: 14](R/W1S/H) Reads or sets TOFC(0..3)_TOFM_INT[TOFM_RX_EMB_LOCK_LOSS]. */
        uint64_t tx_lane3_sds_fifo_overflow : 1;/**< [ 13: 13](R/W1S/H) Reads or sets TOFC(0..3)_TOFM_INT[TX_LANE3_SDS_FIFO_OVERFLOW]. */
        uint64_t tx_lane2_sds_fifo_overflow : 1;/**< [ 12: 12](R/W1S/H) Reads or sets TOFC(0..3)_TOFM_INT[TX_LANE2_SDS_FIFO_OVERFLOW]. */
        uint64_t tx_lane3_sds_fifo_underflow : 1;/**< [ 11: 11](R/W1S/H) Reads or sets TOFC(0..3)_TOFM_INT[TX_LANE3_SDS_FIFO_UNDERFLOW]. */
        uint64_t tx_lane2_sds_fifo_underflow : 1;/**< [ 10: 10](R/W1S/H) Reads or sets TOFC(0..3)_TOFM_INT[TX_LANE2_SDS_FIFO_UNDERFLOW]. */
        uint64_t rx_testmode_sp_error  : 1;  /**< [  9:  9](R/W1S/H) Reads or sets TOFC(0..3)_TOFM_INT[RX_TESTMODE_SP_ERROR]. */
        uint64_t rx_testmode_lp_error  : 1;  /**< [  8:  8](R/W1S/H) Reads or sets TOFC(0..3)_TOFM_INT[RX_TESTMODE_LP_ERROR]. */
        uint64_t rx_lane3_fifo_overflow : 1; /**< [  7:  7](R/W1S/H) Reads or sets TOFC(0..3)_TOFM_INT[RX_LANE3_FIFO_OVERFLOW]. */
        uint64_t rx_lane2_fifo_overflow : 1; /**< [  6:  6](R/W1S/H) Reads or sets TOFC(0..3)_TOFM_INT[RX_LANE2_FIFO_OVERFLOW]. */
        uint64_t rx_lane1_fifo_overflow : 1; /**< [  5:  5](R/W1S/H) Reads or sets TOFC(0..3)_TOFM_INT[RX_LANE1_FIFO_OVERFLOW]. */
        uint64_t rx_lane0_fifo_overflow : 1; /**< [  4:  4](R/W1S/H) Reads or sets TOFC(0..3)_TOFM_INT[RX_LANE0_FIFO_OVERFLOW]. */
        uint64_t rx_async_fifo_overflow : 1; /**< [  3:  3](R/W1S/H) Reads or sets TOFC(0..3)_TOFM_INT[RX_ASYNC_FIFO_OVERFLOW]. */
        uint64_t tx_transport_underflow : 1; /**< [  2:  2](R/W1S/H) Reads or sets TOFC(0..3)_TOFM_INT[TX_TRANSPORT_UNDERFLOW]. */
        uint64_t tx_async_fifo_overflow : 1; /**< [  1:  1](R/W1S/H) Reads or sets TOFC(0..3)_TOFM_INT[TX_ASYNC_FIFO_OVERFLOW]. */
        uint64_t tx_credit_fifo_overflow : 1;/**< [  0:  0](R/W1S/H) Reads or sets TOFC(0..3)_TOFM_INT[TX_CREDIT_FIFO_OVERFLOW]. */
#else /* Word 0 - Little Endian */
        uint64_t tx_credit_fifo_overflow : 1;/**< [  0:  0](R/W1S/H) Reads or sets TOFC(0..3)_TOFM_INT[TX_CREDIT_FIFO_OVERFLOW]. */
        uint64_t tx_async_fifo_overflow : 1; /**< [  1:  1](R/W1S/H) Reads or sets TOFC(0..3)_TOFM_INT[TX_ASYNC_FIFO_OVERFLOW]. */
        uint64_t tx_transport_underflow : 1; /**< [  2:  2](R/W1S/H) Reads or sets TOFC(0..3)_TOFM_INT[TX_TRANSPORT_UNDERFLOW]. */
        uint64_t rx_async_fifo_overflow : 1; /**< [  3:  3](R/W1S/H) Reads or sets TOFC(0..3)_TOFM_INT[RX_ASYNC_FIFO_OVERFLOW]. */
        uint64_t rx_lane0_fifo_overflow : 1; /**< [  4:  4](R/W1S/H) Reads or sets TOFC(0..3)_TOFM_INT[RX_LANE0_FIFO_OVERFLOW]. */
        uint64_t rx_lane1_fifo_overflow : 1; /**< [  5:  5](R/W1S/H) Reads or sets TOFC(0..3)_TOFM_INT[RX_LANE1_FIFO_OVERFLOW]. */
        uint64_t rx_lane2_fifo_overflow : 1; /**< [  6:  6](R/W1S/H) Reads or sets TOFC(0..3)_TOFM_INT[RX_LANE2_FIFO_OVERFLOW]. */
        uint64_t rx_lane3_fifo_overflow : 1; /**< [  7:  7](R/W1S/H) Reads or sets TOFC(0..3)_TOFM_INT[RX_LANE3_FIFO_OVERFLOW]. */
        uint64_t rx_testmode_lp_error  : 1;  /**< [  8:  8](R/W1S/H) Reads or sets TOFC(0..3)_TOFM_INT[RX_TESTMODE_LP_ERROR]. */
        uint64_t rx_testmode_sp_error  : 1;  /**< [  9:  9](R/W1S/H) Reads or sets TOFC(0..3)_TOFM_INT[RX_TESTMODE_SP_ERROR]. */
        uint64_t tx_lane2_sds_fifo_underflow : 1;/**< [ 10: 10](R/W1S/H) Reads or sets TOFC(0..3)_TOFM_INT[TX_LANE2_SDS_FIFO_UNDERFLOW]. */
        uint64_t tx_lane3_sds_fifo_underflow : 1;/**< [ 11: 11](R/W1S/H) Reads or sets TOFC(0..3)_TOFM_INT[TX_LANE3_SDS_FIFO_UNDERFLOW]. */
        uint64_t tx_lane2_sds_fifo_overflow : 1;/**< [ 12: 12](R/W1S/H) Reads or sets TOFC(0..3)_TOFM_INT[TX_LANE2_SDS_FIFO_OVERFLOW]. */
        uint64_t tx_lane3_sds_fifo_overflow : 1;/**< [ 13: 13](R/W1S/H) Reads or sets TOFC(0..3)_TOFM_INT[TX_LANE3_SDS_FIFO_OVERFLOW]. */
        uint64_t tofm_rx_emb_lock_loss : 1;  /**< [ 14: 14](R/W1S/H) Reads or sets TOFC(0..3)_TOFM_INT[TOFM_RX_EMB_LOCK_LOSS]. */
        uint64_t tofm_rx_sh_lock_loss  : 1;  /**< [ 15: 15](R/W1S/H) Reads or sets TOFC(0..3)_TOFM_INT[TOFM_RX_SH_LOCK_LOSS]. */
        uint64_t tofm_rx_fec_err       : 1;  /**< [ 16: 16](R/W1S/H) Reads or sets TOFC(0..3)_TOFM_INT[TOFM_RX_FEC_ERR]. */
        uint64_t tofm_rx_crc12_err     : 1;  /**< [ 17: 17](R/W1S/H) Reads or sets TOFC(0..3)_TOFM_INT[TOFM_RX_CRC12_ERR]. */
        uint64_t tofm_rx_crc3_err      : 1;  /**< [ 18: 18](R/W1S/H) Reads or sets TOFC(0..3)_TOFM_INT[TOFM_RX_CRC3_ERR]. */
        uint64_t tofm_rx_parity_err    : 1;  /**< [ 19: 19](R/W1S/H) Reads or sets TOFC(0..3)_TOFM_INT[TOFM_RX_PARITY_ERR]. */
        uint64_t reserved_20_63        : 44;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tofm_int_w1s_s cn; */
};
typedef union cavm_tofcx_tofm_int_w1s cavm_tofcx_tofm_int_w1s_t;

static inline uint64_t CAVM_TOFCX_TOFM_INT_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TOFM_INT_W1S(uint64_t a)
{
    if (a<=3)
        return 0x87e042e08038ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_TOFM_INT_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TOFM_INT_W1S(a) cavm_tofcx_tofm_int_w1s_t
#define bustype_CAVM_TOFCX_TOFM_INT_W1S(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TOFM_INT_W1S(a) "TOFCX_TOFM_INT_W1S"
#define busnum_CAVM_TOFCX_TOFM_INT_W1S(a) (a)
#define arguments_CAVM_TOFCX_TOFM_INT_W1S(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_tofm_rx_cdr_sync_ctl
 *
 * TOFC TOFM RX Lane Synchronization and Control Register
 * Configures the TOFM GSER (receive) lane bringup modes. Must only change before
 * bringing up GSER lanes.
 */
union cavm_tofcx_tofm_rx_cdr_sync_ctl
{
    uint64_t u;
    struct cavm_tofcx_tofm_rx_cdr_sync_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_33_63        : 31;
        uint64_t cdr_combine_ena       : 1;  /**< [ 32: 32](R/W) Require all local and external lane RX clock ready to set before sending GSER data to Comcores IP.
                                                                 0 = No synchronization across lanes. As soon as CDR achieved on each lane, data
                                                                 is transfered to IP.
                                                                 1 = Require all enabled RX clock ready. local and external.

                                                                 Prior to CDR (combined or not combined), all data from GSER is dropped. */
        uint64_t reserved_20_31        : 12;
        uint64_t lcl_clk_rdy_ena       : 4;  /**< [ 19: 16](R/W) For [CDR_COMBINE_ENA]=1, provide individual enables for combining each
                                                                 local TOFC RX clock ready to be set before allowing any data to be sent to
                                                                 ComCores IP.
                                                                 Note:  Upper 2 bits need to be 0 for 1x2 modes */
        uint64_t reserved_12_15        : 4;
        uint64_t ext_clk_rdy_ena       : 12; /**< [ 11:  0](R/W) For [CDR_COMBINE_ENA]=1, provide individual enables for each external TOFC
                                                                 RX clock ready to be set before allowing any data to be sent to ComCores
                                                                 IP.
                                                                 Note: Bits corresponding to Lanes 2,3 need to be cleared for 1x2 modes. */
#else /* Word 0 - Little Endian */
        uint64_t ext_clk_rdy_ena       : 12; /**< [ 11:  0](R/W) For [CDR_COMBINE_ENA]=1, provide individual enables for each external TOFC
                                                                 RX clock ready to be set before allowing any data to be sent to ComCores
                                                                 IP.
                                                                 Note: Bits corresponding to Lanes 2,3 need to be cleared for 1x2 modes. */
        uint64_t reserved_12_15        : 4;
        uint64_t lcl_clk_rdy_ena       : 4;  /**< [ 19: 16](R/W) For [CDR_COMBINE_ENA]=1, provide individual enables for combining each
                                                                 local TOFC RX clock ready to be set before allowing any data to be sent to
                                                                 ComCores IP.
                                                                 Note:  Upper 2 bits need to be 0 for 1x2 modes */
        uint64_t reserved_20_31        : 12;
        uint64_t cdr_combine_ena       : 1;  /**< [ 32: 32](R/W) Require all local and external lane RX clock ready to set before sending GSER data to Comcores IP.
                                                                 0 = No synchronization across lanes. As soon as CDR achieved on each lane, data
                                                                 is transfered to IP.
                                                                 1 = Require all enabled RX clock ready. local and external.

                                                                 Prior to CDR (combined or not combined), all data from GSER is dropped. */
        uint64_t reserved_33_63        : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tofm_rx_cdr_sync_ctl_s cn; */
};
typedef union cavm_tofcx_tofm_rx_cdr_sync_ctl cavm_tofcx_tofm_rx_cdr_sync_ctl_t;

static inline uint64_t CAVM_TOFCX_TOFM_RX_CDR_SYNC_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TOFM_RX_CDR_SYNC_CTL(uint64_t a)
{
    if (a<=3)
        return 0x87e042e08100ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_TOFM_RX_CDR_SYNC_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TOFM_RX_CDR_SYNC_CTL(a) cavm_tofcx_tofm_rx_cdr_sync_ctl_t
#define bustype_CAVM_TOFCX_TOFM_RX_CDR_SYNC_CTL(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TOFM_RX_CDR_SYNC_CTL(a) "TOFCX_TOFM_RX_CDR_SYNC_CTL"
#define busnum_CAVM_TOFCX_TOFM_RX_CDR_SYNC_CTL(a) (a)
#define arguments_CAVM_TOFCX_TOFM_RX_CDR_SYNC_CTL(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_tofm_rx_cdr_sync_sts
 *
 * TOFC TOFM RX Lane Synchronization Status Register
 */
union cavm_tofcx_tofm_rx_cdr_sync_sts
{
    uint64_t u;
    struct cavm_tofcx_tofm_rx_cdr_sync_sts_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_21_63        : 43;
        uint64_t all_cdr_set           : 1;  /**< [ 20: 20](RO/H) For TOFC()_TOFM_RX_CDR_SYNC_CTL[CDR_COMBINE_ENA] = 1, all enabled RX clock
                                                                 ready are set and GSER valid is being sent to ComCores IP. */
        uint64_t lcl_clk_rdy           : 4;  /**< [ 19: 16](RO/H) Local TOFC lane RX clock ready status. */
        uint64_t reserved_12_15        : 4;
        uint64_t ext_clk_rdy           : 12; /**< [ 11:  0](RO/H) External TOFC lane RX clock ready status. */
#else /* Word 0 - Little Endian */
        uint64_t ext_clk_rdy           : 12; /**< [ 11:  0](RO/H) External TOFC lane RX clock ready status. */
        uint64_t reserved_12_15        : 4;
        uint64_t lcl_clk_rdy           : 4;  /**< [ 19: 16](RO/H) Local TOFC lane RX clock ready status. */
        uint64_t all_cdr_set           : 1;  /**< [ 20: 20](RO/H) For TOFC()_TOFM_RX_CDR_SYNC_CTL[CDR_COMBINE_ENA] = 1, all enabled RX clock
                                                                 ready are set and GSER valid is being sent to ComCores IP. */
        uint64_t reserved_21_63        : 43;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tofm_rx_cdr_sync_sts_s cn; */
};
typedef union cavm_tofcx_tofm_rx_cdr_sync_sts cavm_tofcx_tofm_rx_cdr_sync_sts_t;

static inline uint64_t CAVM_TOFCX_TOFM_RX_CDR_SYNC_STS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TOFM_RX_CDR_SYNC_STS(uint64_t a)
{
    if (a<=3)
        return 0x87e042e08108ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_TOFM_RX_CDR_SYNC_STS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TOFM_RX_CDR_SYNC_STS(a) cavm_tofcx_tofm_rx_cdr_sync_sts_t
#define bustype_CAVM_TOFCX_TOFM_RX_CDR_SYNC_STS(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TOFM_RX_CDR_SYNC_STS(a) "TOFCX_TOFM_RX_CDR_SYNC_STS"
#define busnum_CAVM_TOFCX_TOFM_RX_CDR_SYNC_STS(a) (a)
#define arguments_CAVM_TOFCX_TOFM_RX_CDR_SYNC_STS(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_tofm_rx_control
 *
 * TOFC TOFM RX Control Register
 */
union cavm_tofcx_tofm_rx_control
{
    uint64_t u;
    struct cavm_tofcx_tofm_rx_control_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t rx_retard_delay_204dev0 : 8;/**< [ 15:  8](R/W) RX retard delay count (character clocks) for lanes associated with
                                                                 JESD204 device 0. Count per frame depends on TOFC()_TOFM_CONTROL[NUM_CONV_PER_LANE].

                                                                 * When TOFC()_TOFM_CONTROL[NUM_CONV_PER_LANE] = 0x8:
                                                                 _ 0x08  = 1 frame.
                                                                 _ 0x10  = 2 frames.
                                                                 _ 0x18  = 3 frames.
                                                                 _ 0x20  = 4 frames.
                                                                 _ 0x28  = 5 frames.
                                                                 _ 0x30  = 6 frames (maximum value).

                                                                 * When TOFC()_TOFM_CONTROL[NUM_CONV_PER_LANE] = 0xC:
                                                                 _ 0x0C  = 1 frame.
                                                                 _ 0x18  = 2 frames.
                                                                 _ 0x24  = 3 frames.
                                                                 _ 0x30  = 4 frames (maximum value).

                                                                 * When TOFC()_TOFM_CONTROL[NUM_CONV_PER_LANE] = 0x6:
                                                                 _ 0x06  = 1 frame.
                                                                 _ 0x0C  = 2 frames.
                                                                 _ 0x12  = 3 frames.
                                                                 _ 0x18  = 4 frames
                                                                 _ 0x1E  = 5 frames
                                                                 _ 0x24  = 6 frames
                                                                 _ 0x2A  = 7 frames
                                                                 _ 0x30  = 8 frames (maximum value). */
        uint64_t reserved_1_7          : 7;
        uint64_t rx_retard_enable      : 1;  /**< [  0:  0](R/W) Enable RX retard:
                                                                 0 = RX retard function disabled; all data received.
                                                                 1 = Each device waits for the corresponding RX retard pulse before commencing
                                                                 data receive from 204C/B receiver.

                                                                 Note: TOFC()_TOFM_CONTROL[RUN] must be set to 1. */
#else /* Word 0 - Little Endian */
        uint64_t rx_retard_enable      : 1;  /**< [  0:  0](R/W) Enable RX retard:
                                                                 0 = RX retard function disabled; all data received.
                                                                 1 = Each device waits for the corresponding RX retard pulse before commencing
                                                                 data receive from 204C/B receiver.

                                                                 Note: TOFC()_TOFM_CONTROL[RUN] must be set to 1. */
        uint64_t reserved_1_7          : 7;
        uint64_t rx_retard_delay_204dev0 : 8;/**< [ 15:  8](R/W) RX retard delay count (character clocks) for lanes associated with
                                                                 JESD204 device 0. Count per frame depends on TOFC()_TOFM_CONTROL[NUM_CONV_PER_LANE].

                                                                 * When TOFC()_TOFM_CONTROL[NUM_CONV_PER_LANE] = 0x8:
                                                                 _ 0x08  = 1 frame.
                                                                 _ 0x10  = 2 frames.
                                                                 _ 0x18  = 3 frames.
                                                                 _ 0x20  = 4 frames.
                                                                 _ 0x28  = 5 frames.
                                                                 _ 0x30  = 6 frames (maximum value).

                                                                 * When TOFC()_TOFM_CONTROL[NUM_CONV_PER_LANE] = 0xC:
                                                                 _ 0x0C  = 1 frame.
                                                                 _ 0x18  = 2 frames.
                                                                 _ 0x24  = 3 frames.
                                                                 _ 0x30  = 4 frames (maximum value).

                                                                 * When TOFC()_TOFM_CONTROL[NUM_CONV_PER_LANE] = 0x6:
                                                                 _ 0x06  = 1 frame.
                                                                 _ 0x0C  = 2 frames.
                                                                 _ 0x12  = 3 frames.
                                                                 _ 0x18  = 4 frames
                                                                 _ 0x1E  = 5 frames
                                                                 _ 0x24  = 6 frames
                                                                 _ 0x2A  = 7 frames
                                                                 _ 0x30  = 8 frames (maximum value). */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tofm_rx_control_s cn; */
};
typedef union cavm_tofcx_tofm_rx_control cavm_tofcx_tofm_rx_control_t;

static inline uint64_t CAVM_TOFCX_TOFM_RX_CONTROL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TOFM_RX_CONTROL(uint64_t a)
{
    if (a<=3)
        return 0x87e042e08010ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_TOFM_RX_CONTROL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TOFM_RX_CONTROL(a) cavm_tofcx_tofm_rx_control_t
#define bustype_CAVM_TOFCX_TOFM_RX_CONTROL(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TOFM_RX_CONTROL(a) "TOFCX_TOFM_RX_CONTROL"
#define busnum_CAVM_TOFCX_TOFM_RX_CONTROL(a) (a)
#define arguments_CAVM_TOFCX_TOFM_RX_CONTROL(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_tofm_rx_debug_status
 *
 * TOFC TOFM Transport Layer RX Debug Register
 */
union cavm_tofcx_tofm_rx_debug_status
{
    uint64_t u;
    struct cavm_tofcx_tofm_rx_debug_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_20_63        : 44;
        uint64_t rx_lane3_fsm_state    : 3;  /**< [ 19: 17](RO/H) TOFM_RX lane 3 FSM state. */
        uint64_t rx_lane2_fsm_state    : 3;  /**< [ 16: 14](RO/H) TOFM_RX lane 2 FSM state. */
        uint64_t rx_lane1_fsm_state    : 3;  /**< [ 13: 11](RO/H) TOFM_RX lane 1 FSM state. */
        uint64_t rx_lane0_fsm_state    : 3;  /**< [ 10:  8](RO/H) TOFM_RX lane 0 FSM state. */
        uint64_t reserved_3_7          : 5;
        uint64_t rx_credit_16          : 1;  /**< [  2:  2](RO/H) Credit count for data transfer between TOFM to TOFW at 16 (max)
                                                                 TOFM can send data to TOFW RX. */
        uint64_t rx_credit_0           : 1;  /**< [  1:  1](RO/H) Credit count for data transfer between TOFM to TOFW at 0
                                                                 TOFM is backpressured from sending data to TOFW RX. */
        uint64_t rx_quiesce            : 1;  /**< [  0:  0](RO/H) TOFM RX is settled: FIFOs are empty, FSM's idle, pipelines drained. */
#else /* Word 0 - Little Endian */
        uint64_t rx_quiesce            : 1;  /**< [  0:  0](RO/H) TOFM RX is settled: FIFOs are empty, FSM's idle, pipelines drained. */
        uint64_t rx_credit_0           : 1;  /**< [  1:  1](RO/H) Credit count for data transfer between TOFM to TOFW at 0
                                                                 TOFM is backpressured from sending data to TOFW RX. */
        uint64_t rx_credit_16          : 1;  /**< [  2:  2](RO/H) Credit count for data transfer between TOFM to TOFW at 16 (max)
                                                                 TOFM can send data to TOFW RX. */
        uint64_t reserved_3_7          : 5;
        uint64_t rx_lane0_fsm_state    : 3;  /**< [ 10:  8](RO/H) TOFM_RX lane 0 FSM state. */
        uint64_t rx_lane1_fsm_state    : 3;  /**< [ 13: 11](RO/H) TOFM_RX lane 1 FSM state. */
        uint64_t rx_lane2_fsm_state    : 3;  /**< [ 16: 14](RO/H) TOFM_RX lane 2 FSM state. */
        uint64_t rx_lane3_fsm_state    : 3;  /**< [ 19: 17](RO/H) TOFM_RX lane 3 FSM state. */
        uint64_t reserved_20_63        : 44;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tofm_rx_debug_status_s cn; */
};
typedef union cavm_tofcx_tofm_rx_debug_status cavm_tofcx_tofm_rx_debug_status_t;

static inline uint64_t CAVM_TOFCX_TOFM_RX_DEBUG_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TOFM_RX_DEBUG_STATUS(uint64_t a)
{
    if (a<=3)
        return 0x87e042e080c0ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_TOFM_RX_DEBUG_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TOFM_RX_DEBUG_STATUS(a) cavm_tofcx_tofm_rx_debug_status_t
#define bustype_CAVM_TOFCX_TOFM_RX_DEBUG_STATUS(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TOFM_RX_DEBUG_STATUS(a) "TOFCX_TOFM_RX_DEBUG_STATUS"
#define busnum_CAVM_TOFCX_TOFM_RX_DEBUG_STATUS(a) (a)
#define arguments_CAVM_TOFCX_TOFM_RX_DEBUG_STATUS(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_tofm_testmode_control
 *
 * TOFC TOFM Test Mode Control Register
 */
union cavm_tofcx_tofm_testmode_control
{
    uint64_t u;
    struct cavm_tofcx_tofm_testmode_control_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_27_63        : 37;
        uint64_t lp_lane_order         : 1;  /**< [ 26: 26](R/W) LP lane selection order:
                                                                 0 = {L3, L2, L1, L0}.
                                                                 1 = {L0, L1, L2, L3}. */
        uint64_t lp_sample_byte_swap   : 1;  /**< [ 25: 25](R/W) LP sample byte swap:
                                                                 0 = {[15:8],[7:0]}.
                                                                 1 = {[7:0],[15:8]}. */
        uint64_t lp_sample_order       : 1;  /**< [ 24: 24](R/W) LP sample order:
                                                                 0 = {N, N-1, ..., 2, 1, 0}.
                                                                 1 = {0, 1, 2, ..., N-1, N}. */
        uint64_t lp_cycle_length       : 8;  /**< [ 23: 16](R/W) Long pattern cycle length-1 of Frame(i), where i\>=2.
                                                                 Determined by M*S; not inclusive of Frame0 and Frame1.
                                                                 Example values:
                                                                 * Case MB1..MB6       =\> 95 (96-1).
                                                                 * Case MB7..MB10 1x2  =\> 63 (64-1).
                                                                 * Case MB21..MB26 1x2 =\> 95 (64-1).
                                                                 * Case MB21..MB26 2x2 =\> 191 (192-1).
                                                                 * Case MA1..MA9 1x2   =\> 63 (64-1).
                                                                 * Case MA1..MA9 2x2   =\> 127 (128-1). */
        uint64_t frames_per_emb        : 8;  /**< [ 15:  8](R/W) Number of frames per extended multiblock (64B/66B and 64B/80B modes).
                                                                 OR Number of frames per multiframe (8B/10B mode).
                                                                 Only applies to test mode long pattern.
                                                                 This is closely related to the JESD204 parameter E and K
                                                                 Encoding is a binary value minus 1. */
        uint64_t reserved_3_7          : 5;
        uint64_t testmode_active       : 1;  /**< [  2:  2](R/W) Enables test mode error and match counters
                                                                 0 = Hold error/match counters
                                                                 1 = Enable error/match counters */
        uint64_t testmode_type         : 1;  /**< [  1:  1](R/W) Test mode type (JESD204C section 6.6).
                                                                 0 = Short test pattern.
                                                                 1 = Long test pattern. */
        uint64_t testmode_en           : 1;  /**< [  0:  0](R/W) Test mode enabled; overrides normal mode.
                                                                 0 = TX test mode disabled.
                                                                 1 = TX test mode enabled. */
#else /* Word 0 - Little Endian */
        uint64_t testmode_en           : 1;  /**< [  0:  0](R/W) Test mode enabled; overrides normal mode.
                                                                 0 = TX test mode disabled.
                                                                 1 = TX test mode enabled. */
        uint64_t testmode_type         : 1;  /**< [  1:  1](R/W) Test mode type (JESD204C section 6.6).
                                                                 0 = Short test pattern.
                                                                 1 = Long test pattern. */
        uint64_t testmode_active       : 1;  /**< [  2:  2](R/W) Enables test mode error and match counters
                                                                 0 = Hold error/match counters
                                                                 1 = Enable error/match counters */
        uint64_t reserved_3_7          : 5;
        uint64_t frames_per_emb        : 8;  /**< [ 15:  8](R/W) Number of frames per extended multiblock (64B/66B and 64B/80B modes).
                                                                 OR Number of frames per multiframe (8B/10B mode).
                                                                 Only applies to test mode long pattern.
                                                                 This is closely related to the JESD204 parameter E and K
                                                                 Encoding is a binary value minus 1. */
        uint64_t lp_cycle_length       : 8;  /**< [ 23: 16](R/W) Long pattern cycle length-1 of Frame(i), where i\>=2.
                                                                 Determined by M*S; not inclusive of Frame0 and Frame1.
                                                                 Example values:
                                                                 * Case MB1..MB6       =\> 95 (96-1).
                                                                 * Case MB7..MB10 1x2  =\> 63 (64-1).
                                                                 * Case MB21..MB26 1x2 =\> 95 (64-1).
                                                                 * Case MB21..MB26 2x2 =\> 191 (192-1).
                                                                 * Case MA1..MA9 1x2   =\> 63 (64-1).
                                                                 * Case MA1..MA9 2x2   =\> 127 (128-1). */
        uint64_t lp_sample_order       : 1;  /**< [ 24: 24](R/W) LP sample order:
                                                                 0 = {N, N-1, ..., 2, 1, 0}.
                                                                 1 = {0, 1, 2, ..., N-1, N}. */
        uint64_t lp_sample_byte_swap   : 1;  /**< [ 25: 25](R/W) LP sample byte swap:
                                                                 0 = {[15:8],[7:0]}.
                                                                 1 = {[7:0],[15:8]}. */
        uint64_t lp_lane_order         : 1;  /**< [ 26: 26](R/W) LP lane selection order:
                                                                 0 = {L3, L2, L1, L0}.
                                                                 1 = {L0, L1, L2, L3}. */
        uint64_t reserved_27_63        : 37;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tofm_testmode_control_s cn; */
};
typedef union cavm_tofcx_tofm_testmode_control cavm_tofcx_tofm_testmode_control_t;

static inline uint64_t CAVM_TOFCX_TOFM_TESTMODE_CONTROL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TOFM_TESTMODE_CONTROL(uint64_t a)
{
    if (a<=3)
        return 0x87e042e08040ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_TOFM_TESTMODE_CONTROL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TOFM_TESTMODE_CONTROL(a) cavm_tofcx_tofm_testmode_control_t
#define bustype_CAVM_TOFCX_TOFM_TESTMODE_CONTROL(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TOFM_TESTMODE_CONTROL(a) "TOFCX_TOFM_TESTMODE_CONTROL"
#define busnum_CAVM_TOFCX_TOFM_TESTMODE_CONTROL(a) (a)
#define arguments_CAVM_TOFCX_TOFM_TESTMODE_CONTROL(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_tofm_testmode_short_0
 *
 * TOFC TOFM Test Mode Short Pattern Look Up Register
 */
union cavm_tofcx_tofm_testmode_short_0
{
    uint64_t u;
    struct cavm_tofcx_tofm_testmode_short_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t short_lut0            : 64; /**< [ 63:  0](R/W) First 64 bits of the short transport layer test pattern. */
#else /* Word 0 - Little Endian */
        uint64_t short_lut0            : 64; /**< [ 63:  0](R/W) First 64 bits of the short transport layer test pattern. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tofm_testmode_short_0_s cn; */
};
typedef union cavm_tofcx_tofm_testmode_short_0 cavm_tofcx_tofm_testmode_short_0_t;

static inline uint64_t CAVM_TOFCX_TOFM_TESTMODE_SHORT_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TOFM_TESTMODE_SHORT_0(uint64_t a)
{
    if (a<=3)
        return 0x87e042e08050ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_TOFM_TESTMODE_SHORT_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TOFM_TESTMODE_SHORT_0(a) cavm_tofcx_tofm_testmode_short_0_t
#define bustype_CAVM_TOFCX_TOFM_TESTMODE_SHORT_0(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TOFM_TESTMODE_SHORT_0(a) "TOFCX_TOFM_TESTMODE_SHORT_0"
#define busnum_CAVM_TOFCX_TOFM_TESTMODE_SHORT_0(a) (a)
#define arguments_CAVM_TOFCX_TOFM_TESTMODE_SHORT_0(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_tofm_testmode_short_1
 *
 * TOFC TOFM Test Mode Short Pattern Look Up Register
 */
union cavm_tofcx_tofm_testmode_short_1
{
    uint64_t u;
    struct cavm_tofcx_tofm_testmode_short_1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t short_lut1            : 64; /**< [ 63:  0](R/W) Second 64 bits of the short transport layer test pattern. */
#else /* Word 0 - Little Endian */
        uint64_t short_lut1            : 64; /**< [ 63:  0](R/W) Second 64 bits of the short transport layer test pattern. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tofm_testmode_short_1_s cn; */
};
typedef union cavm_tofcx_tofm_testmode_short_1 cavm_tofcx_tofm_testmode_short_1_t;

static inline uint64_t CAVM_TOFCX_TOFM_TESTMODE_SHORT_1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TOFM_TESTMODE_SHORT_1(uint64_t a)
{
    if (a<=3)
        return 0x87e042e08058ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_TOFM_TESTMODE_SHORT_1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TOFM_TESTMODE_SHORT_1(a) cavm_tofcx_tofm_testmode_short_1_t
#define bustype_CAVM_TOFCX_TOFM_TESTMODE_SHORT_1(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TOFM_TESTMODE_SHORT_1(a) "TOFCX_TOFM_TESTMODE_SHORT_1"
#define busnum_CAVM_TOFCX_TOFM_TESTMODE_SHORT_1(a) (a)
#define arguments_CAVM_TOFCX_TOFM_TESTMODE_SHORT_1(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_tofm_testmode_short_10
 *
 * TOFC TOFM Test Mode Short Pattern Look Up Register
 */
union cavm_tofcx_tofm_testmode_short_10
{
    uint64_t u;
    struct cavm_tofcx_tofm_testmode_short_10_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t short_lut10           : 64; /**< [ 63:  0](R/W) Eleventh 64 bits of the short transport layer test pattern. */
#else /* Word 0 - Little Endian */
        uint64_t short_lut10           : 64; /**< [ 63:  0](R/W) Eleventh 64 bits of the short transport layer test pattern. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tofm_testmode_short_10_s cn; */
};
typedef union cavm_tofcx_tofm_testmode_short_10 cavm_tofcx_tofm_testmode_short_10_t;

static inline uint64_t CAVM_TOFCX_TOFM_TESTMODE_SHORT_10(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TOFM_TESTMODE_SHORT_10(uint64_t a)
{
    if (a<=3)
        return 0x87e042e080a0ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_TOFM_TESTMODE_SHORT_10", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TOFM_TESTMODE_SHORT_10(a) cavm_tofcx_tofm_testmode_short_10_t
#define bustype_CAVM_TOFCX_TOFM_TESTMODE_SHORT_10(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TOFM_TESTMODE_SHORT_10(a) "TOFCX_TOFM_TESTMODE_SHORT_10"
#define busnum_CAVM_TOFCX_TOFM_TESTMODE_SHORT_10(a) (a)
#define arguments_CAVM_TOFCX_TOFM_TESTMODE_SHORT_10(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_tofm_testmode_short_11
 *
 * TOFC TOFM Test Mode Short Pattern Look Up Register
 */
union cavm_tofcx_tofm_testmode_short_11
{
    uint64_t u;
    struct cavm_tofcx_tofm_testmode_short_11_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t short_lut11           : 64; /**< [ 63:  0](R/W) Twelveth 64 bits of the short transport layer test pattern. */
#else /* Word 0 - Little Endian */
        uint64_t short_lut11           : 64; /**< [ 63:  0](R/W) Twelveth 64 bits of the short transport layer test pattern. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tofm_testmode_short_11_s cn; */
};
typedef union cavm_tofcx_tofm_testmode_short_11 cavm_tofcx_tofm_testmode_short_11_t;

static inline uint64_t CAVM_TOFCX_TOFM_TESTMODE_SHORT_11(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TOFM_TESTMODE_SHORT_11(uint64_t a)
{
    if (a<=3)
        return 0x87e042e080a8ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_TOFM_TESTMODE_SHORT_11", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TOFM_TESTMODE_SHORT_11(a) cavm_tofcx_tofm_testmode_short_11_t
#define bustype_CAVM_TOFCX_TOFM_TESTMODE_SHORT_11(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TOFM_TESTMODE_SHORT_11(a) "TOFCX_TOFM_TESTMODE_SHORT_11"
#define busnum_CAVM_TOFCX_TOFM_TESTMODE_SHORT_11(a) (a)
#define arguments_CAVM_TOFCX_TOFM_TESTMODE_SHORT_11(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_tofm_testmode_short_2
 *
 * TOFC TOFM Test Mode Short Pattern Look Up Register
 */
union cavm_tofcx_tofm_testmode_short_2
{
    uint64_t u;
    struct cavm_tofcx_tofm_testmode_short_2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t short_lut2            : 64; /**< [ 63:  0](R/W) Third 64 bits of the short transport layer test pattern. */
#else /* Word 0 - Little Endian */
        uint64_t short_lut2            : 64; /**< [ 63:  0](R/W) Third 64 bits of the short transport layer test pattern. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tofm_testmode_short_2_s cn; */
};
typedef union cavm_tofcx_tofm_testmode_short_2 cavm_tofcx_tofm_testmode_short_2_t;

static inline uint64_t CAVM_TOFCX_TOFM_TESTMODE_SHORT_2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TOFM_TESTMODE_SHORT_2(uint64_t a)
{
    if (a<=3)
        return 0x87e042e08060ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_TOFM_TESTMODE_SHORT_2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TOFM_TESTMODE_SHORT_2(a) cavm_tofcx_tofm_testmode_short_2_t
#define bustype_CAVM_TOFCX_TOFM_TESTMODE_SHORT_2(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TOFM_TESTMODE_SHORT_2(a) "TOFCX_TOFM_TESTMODE_SHORT_2"
#define busnum_CAVM_TOFCX_TOFM_TESTMODE_SHORT_2(a) (a)
#define arguments_CAVM_TOFCX_TOFM_TESTMODE_SHORT_2(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_tofm_testmode_short_3
 *
 * TOFC TOFM Test Mode Short Pattern Look Up Register
 */
union cavm_tofcx_tofm_testmode_short_3
{
    uint64_t u;
    struct cavm_tofcx_tofm_testmode_short_3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t short_lut3            : 64; /**< [ 63:  0](R/W) Fourth 64 bits of the short transport layer test pattern. */
#else /* Word 0 - Little Endian */
        uint64_t short_lut3            : 64; /**< [ 63:  0](R/W) Fourth 64 bits of the short transport layer test pattern. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tofm_testmode_short_3_s cn; */
};
typedef union cavm_tofcx_tofm_testmode_short_3 cavm_tofcx_tofm_testmode_short_3_t;

static inline uint64_t CAVM_TOFCX_TOFM_TESTMODE_SHORT_3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TOFM_TESTMODE_SHORT_3(uint64_t a)
{
    if (a<=3)
        return 0x87e042e08068ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_TOFM_TESTMODE_SHORT_3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TOFM_TESTMODE_SHORT_3(a) cavm_tofcx_tofm_testmode_short_3_t
#define bustype_CAVM_TOFCX_TOFM_TESTMODE_SHORT_3(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TOFM_TESTMODE_SHORT_3(a) "TOFCX_TOFM_TESTMODE_SHORT_3"
#define busnum_CAVM_TOFCX_TOFM_TESTMODE_SHORT_3(a) (a)
#define arguments_CAVM_TOFCX_TOFM_TESTMODE_SHORT_3(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_tofm_testmode_short_4
 *
 * TOFC TOFM Test Mode Short Pattern Look Up Register
 */
union cavm_tofcx_tofm_testmode_short_4
{
    uint64_t u;
    struct cavm_tofcx_tofm_testmode_short_4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t short_lut4            : 64; /**< [ 63:  0](R/W) Fifth 64 bits of the short transport layer test pattern. */
#else /* Word 0 - Little Endian */
        uint64_t short_lut4            : 64; /**< [ 63:  0](R/W) Fifth 64 bits of the short transport layer test pattern. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tofm_testmode_short_4_s cn; */
};
typedef union cavm_tofcx_tofm_testmode_short_4 cavm_tofcx_tofm_testmode_short_4_t;

static inline uint64_t CAVM_TOFCX_TOFM_TESTMODE_SHORT_4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TOFM_TESTMODE_SHORT_4(uint64_t a)
{
    if (a<=3)
        return 0x87e042e08070ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_TOFM_TESTMODE_SHORT_4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TOFM_TESTMODE_SHORT_4(a) cavm_tofcx_tofm_testmode_short_4_t
#define bustype_CAVM_TOFCX_TOFM_TESTMODE_SHORT_4(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TOFM_TESTMODE_SHORT_4(a) "TOFCX_TOFM_TESTMODE_SHORT_4"
#define busnum_CAVM_TOFCX_TOFM_TESTMODE_SHORT_4(a) (a)
#define arguments_CAVM_TOFCX_TOFM_TESTMODE_SHORT_4(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_tofm_testmode_short_5
 *
 * TOFC TOFM Test Mode Short Pattern Look Up Register
 */
union cavm_tofcx_tofm_testmode_short_5
{
    uint64_t u;
    struct cavm_tofcx_tofm_testmode_short_5_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t short_lut5            : 64; /**< [ 63:  0](R/W) Sixth 64 bits of the short transport layer test pattern. */
#else /* Word 0 - Little Endian */
        uint64_t short_lut5            : 64; /**< [ 63:  0](R/W) Sixth 64 bits of the short transport layer test pattern. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tofm_testmode_short_5_s cn; */
};
typedef union cavm_tofcx_tofm_testmode_short_5 cavm_tofcx_tofm_testmode_short_5_t;

static inline uint64_t CAVM_TOFCX_TOFM_TESTMODE_SHORT_5(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TOFM_TESTMODE_SHORT_5(uint64_t a)
{
    if (a<=3)
        return 0x87e042e08078ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_TOFM_TESTMODE_SHORT_5", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TOFM_TESTMODE_SHORT_5(a) cavm_tofcx_tofm_testmode_short_5_t
#define bustype_CAVM_TOFCX_TOFM_TESTMODE_SHORT_5(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TOFM_TESTMODE_SHORT_5(a) "TOFCX_TOFM_TESTMODE_SHORT_5"
#define busnum_CAVM_TOFCX_TOFM_TESTMODE_SHORT_5(a) (a)
#define arguments_CAVM_TOFCX_TOFM_TESTMODE_SHORT_5(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_tofm_testmode_short_6
 *
 * TOFC TOFM Test Mode Short Pattern Look Up Register
 */
union cavm_tofcx_tofm_testmode_short_6
{
    uint64_t u;
    struct cavm_tofcx_tofm_testmode_short_6_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t short_lut6            : 64; /**< [ 63:  0](R/W) Seventh 64 bits of the short transport layer test pattern. */
#else /* Word 0 - Little Endian */
        uint64_t short_lut6            : 64; /**< [ 63:  0](R/W) Seventh 64 bits of the short transport layer test pattern. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tofm_testmode_short_6_s cn; */
};
typedef union cavm_tofcx_tofm_testmode_short_6 cavm_tofcx_tofm_testmode_short_6_t;

static inline uint64_t CAVM_TOFCX_TOFM_TESTMODE_SHORT_6(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TOFM_TESTMODE_SHORT_6(uint64_t a)
{
    if (a<=3)
        return 0x87e042e08080ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_TOFM_TESTMODE_SHORT_6", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TOFM_TESTMODE_SHORT_6(a) cavm_tofcx_tofm_testmode_short_6_t
#define bustype_CAVM_TOFCX_TOFM_TESTMODE_SHORT_6(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TOFM_TESTMODE_SHORT_6(a) "TOFCX_TOFM_TESTMODE_SHORT_6"
#define busnum_CAVM_TOFCX_TOFM_TESTMODE_SHORT_6(a) (a)
#define arguments_CAVM_TOFCX_TOFM_TESTMODE_SHORT_6(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_tofm_testmode_short_7
 *
 * TOFC TOFM Test Mode Short Pattern Look Up Register
 */
union cavm_tofcx_tofm_testmode_short_7
{
    uint64_t u;
    struct cavm_tofcx_tofm_testmode_short_7_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t short_lut7            : 64; /**< [ 63:  0](R/W) Eighth 64 bits of the short transport layer test pattern. */
#else /* Word 0 - Little Endian */
        uint64_t short_lut7            : 64; /**< [ 63:  0](R/W) Eighth 64 bits of the short transport layer test pattern. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tofm_testmode_short_7_s cn; */
};
typedef union cavm_tofcx_tofm_testmode_short_7 cavm_tofcx_tofm_testmode_short_7_t;

static inline uint64_t CAVM_TOFCX_TOFM_TESTMODE_SHORT_7(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TOFM_TESTMODE_SHORT_7(uint64_t a)
{
    if (a<=3)
        return 0x87e042e08088ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_TOFM_TESTMODE_SHORT_7", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TOFM_TESTMODE_SHORT_7(a) cavm_tofcx_tofm_testmode_short_7_t
#define bustype_CAVM_TOFCX_TOFM_TESTMODE_SHORT_7(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TOFM_TESTMODE_SHORT_7(a) "TOFCX_TOFM_TESTMODE_SHORT_7"
#define busnum_CAVM_TOFCX_TOFM_TESTMODE_SHORT_7(a) (a)
#define arguments_CAVM_TOFCX_TOFM_TESTMODE_SHORT_7(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_tofm_testmode_short_8
 *
 * TOFC TOFM Test Mode Short Pattern Look Up Register
 */
union cavm_tofcx_tofm_testmode_short_8
{
    uint64_t u;
    struct cavm_tofcx_tofm_testmode_short_8_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t short_lut8            : 64; /**< [ 63:  0](R/W) Ninth 64 bits of the short transport layer test pattern. */
#else /* Word 0 - Little Endian */
        uint64_t short_lut8            : 64; /**< [ 63:  0](R/W) Ninth 64 bits of the short transport layer test pattern. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tofm_testmode_short_8_s cn; */
};
typedef union cavm_tofcx_tofm_testmode_short_8 cavm_tofcx_tofm_testmode_short_8_t;

static inline uint64_t CAVM_TOFCX_TOFM_TESTMODE_SHORT_8(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TOFM_TESTMODE_SHORT_8(uint64_t a)
{
    if (a<=3)
        return 0x87e042e08090ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_TOFM_TESTMODE_SHORT_8", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TOFM_TESTMODE_SHORT_8(a) cavm_tofcx_tofm_testmode_short_8_t
#define bustype_CAVM_TOFCX_TOFM_TESTMODE_SHORT_8(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TOFM_TESTMODE_SHORT_8(a) "TOFCX_TOFM_TESTMODE_SHORT_8"
#define busnum_CAVM_TOFCX_TOFM_TESTMODE_SHORT_8(a) (a)
#define arguments_CAVM_TOFCX_TOFM_TESTMODE_SHORT_8(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_tofm_testmode_short_9
 *
 * TOFC TOFM Test Mode Short Pattern Look Up Register
 */
union cavm_tofcx_tofm_testmode_short_9
{
    uint64_t u;
    struct cavm_tofcx_tofm_testmode_short_9_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t short_lut9            : 64; /**< [ 63:  0](R/W) Tenth 64 bits of the short transport layer test pattern. */
#else /* Word 0 - Little Endian */
        uint64_t short_lut9            : 64; /**< [ 63:  0](R/W) Tenth 64 bits of the short transport layer test pattern. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tofm_testmode_short_9_s cn; */
};
typedef union cavm_tofcx_tofm_testmode_short_9 cavm_tofcx_tofm_testmode_short_9_t;

static inline uint64_t CAVM_TOFCX_TOFM_TESTMODE_SHORT_9(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TOFM_TESTMODE_SHORT_9(uint64_t a)
{
    if (a<=3)
        return 0x87e042e08098ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_TOFM_TESTMODE_SHORT_9", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TOFM_TESTMODE_SHORT_9(a) cavm_tofcx_tofm_testmode_short_9_t
#define bustype_CAVM_TOFCX_TOFM_TESTMODE_SHORT_9(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TOFM_TESTMODE_SHORT_9(a) "TOFCX_TOFM_TESTMODE_SHORT_9"
#define busnum_CAVM_TOFCX_TOFM_TESTMODE_SHORT_9(a) (a)
#define arguments_CAVM_TOFCX_TOFM_TESTMODE_SHORT_9(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_tofm_testmode_status
 *
 * TOFC TOFM Test Mode Status Register
 */
union cavm_tofcx_tofm_testmode_status
{
    uint64_t u;
    struct cavm_tofcx_tofm_testmode_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t testmode_sp_match_count : 8;/**< [ 31: 24](R/W1C/H) Test mode short pattern error count when TESTMODE_ACTIVE=1.
                                                                 Stops at max value. Write non-zero value to clear both error and match counts. */
        uint64_t testmode_lp_match_count : 8;/**< [ 23: 16](R/W1C/H) Test mode long pattern error count when TESTMODE_ACTIVE=1.
                                                                 Stops at max value. Write non-zero value to clear both error and match counts. */
        uint64_t testmode_sp_error_count : 8;/**< [ 15:  8](R/W1C/H) Test mode short pattern error count when TESTMODE_ACTIVE=1.
                                                                 Stops at max value. Write non-zero value to clear both error and match counts. */
        uint64_t testmode_lp_error_count : 8;/**< [  7:  0](R/W1C/H) Test mode long pattern error count when TESTMODE_ACTIVE=1.
                                                                 Stops at max value. Write non-zero value to clear both error and match counts. */
#else /* Word 0 - Little Endian */
        uint64_t testmode_lp_error_count : 8;/**< [  7:  0](R/W1C/H) Test mode long pattern error count when TESTMODE_ACTIVE=1.
                                                                 Stops at max value. Write non-zero value to clear both error and match counts. */
        uint64_t testmode_sp_error_count : 8;/**< [ 15:  8](R/W1C/H) Test mode short pattern error count when TESTMODE_ACTIVE=1.
                                                                 Stops at max value. Write non-zero value to clear both error and match counts. */
        uint64_t testmode_lp_match_count : 8;/**< [ 23: 16](R/W1C/H) Test mode long pattern error count when TESTMODE_ACTIVE=1.
                                                                 Stops at max value. Write non-zero value to clear both error and match counts. */
        uint64_t testmode_sp_match_count : 8;/**< [ 31: 24](R/W1C/H) Test mode short pattern error count when TESTMODE_ACTIVE=1.
                                                                 Stops at max value. Write non-zero value to clear both error and match counts. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tofm_testmode_status_s cn; */
};
typedef union cavm_tofcx_tofm_testmode_status cavm_tofcx_tofm_testmode_status_t;

static inline uint64_t CAVM_TOFCX_TOFM_TESTMODE_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TOFM_TESTMODE_STATUS(uint64_t a)
{
    if (a<=3)
        return 0x87e042e08048ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_TOFM_TESTMODE_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TOFM_TESTMODE_STATUS(a) cavm_tofcx_tofm_testmode_status_t
#define bustype_CAVM_TOFCX_TOFM_TESTMODE_STATUS(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TOFM_TESTMODE_STATUS(a) "TOFCX_TOFM_TESTMODE_STATUS"
#define busnum_CAVM_TOFCX_TOFM_TESTMODE_STATUS(a) (a)
#define arguments_CAVM_TOFCX_TOFM_TESTMODE_STATUS(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_tofm_tx_clkrdy_sync_ctl
 *
 * TOFC TOFM TX Lane Synchronization and Control Register
 * Configures the TOFM GSER (transmit) lane bringup modes. Must only change before
 * bringing up GSER lanes.
 */
union cavm_tofcx_tofm_tx_clkrdy_sync_ctl
{
    uint64_t u;
    struct cavm_tofcx_tofm_tx_clkrdy_sync_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_50_63        : 14;
        uint64_t disable_data_tx_to_serdes : 1;/**< [ 49: 49](R/W) Disables data transmission to SerDes.
                                                                 0 = Data transmitted as usual.
                                                                 1 = Data is not transmitted to SerDes even though the Link Layer is active. */
        uint64_t en_data_before_sysref : 1;  /**< [ 48: 48](R/W) Enables data transmission before Sysref by transmitting Scrambled 0 pattern
                                                                 when the sample data is not available.
                                                                 0 = Data not transmitted before Sysref.
                                                                 1 = Scrambled 0 data transmitted before Sysref. */
        uint64_t reserved_33_47        : 15;
        uint64_t clk_rdy_combine_ena   : 1;  /**< [ 32: 32](R/W) Require all enabled local and external lane TX clock ready to set before
                                                                 sending data to GSER from Comcores IP:
                                                                 0 = No synchronization across lanes. As soon as TX clock ready is set on
                                                                 each lane, data is transfered to GSER.
                                                                 1 = Require all enabled TX clock ready, local and external.

                                                                 Prior to TX clock ready (combined or not combined), all data from Comcores
                                                                 IP is dropped. */
        uint64_t reserved_20_31        : 12;
        uint64_t lcl_clk_rdy_ena       : 4;  /**< [ 19: 16](R/W) For [CLK_RDY_COMBINE_ENA]=1, provide individual enables for combining each
                                                                 local TOFC TX clock ready to be set before allowing any data to be sent to
                                                                 GSER from Comcores IP.
                                                                 Note:  Upper 2 bits need to be 0 for 1x2 modes */
        uint64_t reserved_12_15        : 4;
        uint64_t ext_clk_rdy_ena       : 12; /**< [ 11:  0](R/W) For [CLK_RDY_COMBINE_ENA]=1, provide individual enables for each external
                                                                 TOFC TX clock ready to be set before allowing any data to be sent to GSER
                                                                 from Comcores IP.
                                                                 Note: Bits corresponding to Lanes 2,3 need to be cleared for 1x2 modes. */
#else /* Word 0 - Little Endian */
        uint64_t ext_clk_rdy_ena       : 12; /**< [ 11:  0](R/W) For [CLK_RDY_COMBINE_ENA]=1, provide individual enables for each external
                                                                 TOFC TX clock ready to be set before allowing any data to be sent to GSER
                                                                 from Comcores IP.
                                                                 Note: Bits corresponding to Lanes 2,3 need to be cleared for 1x2 modes. */
        uint64_t reserved_12_15        : 4;
        uint64_t lcl_clk_rdy_ena       : 4;  /**< [ 19: 16](R/W) For [CLK_RDY_COMBINE_ENA]=1, provide individual enables for combining each
                                                                 local TOFC TX clock ready to be set before allowing any data to be sent to
                                                                 GSER from Comcores IP.
                                                                 Note:  Upper 2 bits need to be 0 for 1x2 modes */
        uint64_t reserved_20_31        : 12;
        uint64_t clk_rdy_combine_ena   : 1;  /**< [ 32: 32](R/W) Require all enabled local and external lane TX clock ready to set before
                                                                 sending data to GSER from Comcores IP:
                                                                 0 = No synchronization across lanes. As soon as TX clock ready is set on
                                                                 each lane, data is transfered to GSER.
                                                                 1 = Require all enabled TX clock ready, local and external.

                                                                 Prior to TX clock ready (combined or not combined), all data from Comcores
                                                                 IP is dropped. */
        uint64_t reserved_33_47        : 15;
        uint64_t en_data_before_sysref : 1;  /**< [ 48: 48](R/W) Enables data transmission before Sysref by transmitting Scrambled 0 pattern
                                                                 when the sample data is not available.
                                                                 0 = Data not transmitted before Sysref.
                                                                 1 = Scrambled 0 data transmitted before Sysref. */
        uint64_t disable_data_tx_to_serdes : 1;/**< [ 49: 49](R/W) Disables data transmission to SerDes.
                                                                 0 = Data transmitted as usual.
                                                                 1 = Data is not transmitted to SerDes even though the Link Layer is active. */
        uint64_t reserved_50_63        : 14;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tofm_tx_clkrdy_sync_ctl_s cn; */
};
typedef union cavm_tofcx_tofm_tx_clkrdy_sync_ctl cavm_tofcx_tofm_tx_clkrdy_sync_ctl_t;

static inline uint64_t CAVM_TOFCX_TOFM_TX_CLKRDY_SYNC_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TOFM_TX_CLKRDY_SYNC_CTL(uint64_t a)
{
    if (a<=3)
        return 0x87e042e08110ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_TOFM_TX_CLKRDY_SYNC_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TOFM_TX_CLKRDY_SYNC_CTL(a) cavm_tofcx_tofm_tx_clkrdy_sync_ctl_t
#define bustype_CAVM_TOFCX_TOFM_TX_CLKRDY_SYNC_CTL(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TOFM_TX_CLKRDY_SYNC_CTL(a) "TOFCX_TOFM_TX_CLKRDY_SYNC_CTL"
#define busnum_CAVM_TOFCX_TOFM_TX_CLKRDY_SYNC_CTL(a) (a)
#define arguments_CAVM_TOFCX_TOFM_TX_CLKRDY_SYNC_CTL(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_tofm_tx_clkrdy_sync_sts
 *
 * TOFC TOFM TX Lane Synchronization Status Register
 */
union cavm_tofcx_tofm_tx_clkrdy_sync_sts
{
    uint64_t u;
    struct cavm_tofcx_tofm_tx_clkrdy_sync_sts_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_21_63        : 43;
        uint64_t all_clk_rdy_set       : 1;  /**< [ 20: 20](RO/H) For TOFC()_TOFM_TX_CLKRDY_SYNC_CTL[CLK_RDY_COMBINE_ENA] = 1, all enabled
                                                                 TX clock ready are set and data is being sent to GSER from ComCores IP. */
        uint64_t lcl_clk_rdy           : 4;  /**< [ 19: 16](RO/H) Local TOFC lane TX clock ready status. */
        uint64_t reserved_12_15        : 4;
        uint64_t ext_clk_rdy           : 12; /**< [ 11:  0](RO/H) External TOFC lane TX clock ready status. */
#else /* Word 0 - Little Endian */
        uint64_t ext_clk_rdy           : 12; /**< [ 11:  0](RO/H) External TOFC lane TX clock ready status. */
        uint64_t reserved_12_15        : 4;
        uint64_t lcl_clk_rdy           : 4;  /**< [ 19: 16](RO/H) Local TOFC lane TX clock ready status. */
        uint64_t all_clk_rdy_set       : 1;  /**< [ 20: 20](RO/H) For TOFC()_TOFM_TX_CLKRDY_SYNC_CTL[CLK_RDY_COMBINE_ENA] = 1, all enabled
                                                                 TX clock ready are set and data is being sent to GSER from ComCores IP. */
        uint64_t reserved_21_63        : 43;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tofm_tx_clkrdy_sync_sts_s cn; */
};
typedef union cavm_tofcx_tofm_tx_clkrdy_sync_sts cavm_tofcx_tofm_tx_clkrdy_sync_sts_t;

static inline uint64_t CAVM_TOFCX_TOFM_TX_CLKRDY_SYNC_STS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TOFM_TX_CLKRDY_SYNC_STS(uint64_t a)
{
    if (a<=3)
        return 0x87e042e08118ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_TOFM_TX_CLKRDY_SYNC_STS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TOFM_TX_CLKRDY_SYNC_STS(a) cavm_tofcx_tofm_tx_clkrdy_sync_sts_t
#define bustype_CAVM_TOFCX_TOFM_TX_CLKRDY_SYNC_STS(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TOFM_TX_CLKRDY_SYNC_STS(a) "TOFCX_TOFM_TX_CLKRDY_SYNC_STS"
#define busnum_CAVM_TOFCX_TOFM_TX_CLKRDY_SYNC_STS(a) (a)
#define arguments_CAVM_TOFCX_TOFM_TX_CLKRDY_SYNC_STS(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_tofm_tx_control
 *
 * TOFC TOFM TX Control Register
 */
union cavm_tofcx_tofm_tx_control
{
    uint64_t u;
    struct cavm_tofcx_tofm_tx_control_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t tx_advance_enable     : 1;  /**< [  0:  0](R/W) Enable TX advance:
                                                                 0 = TX advance function disabled; all data transmitted.
                                                                 1 = Waits for TX advance pulse before commencing data push to 204C/B transmitter.
                                                                 Note: TOFC()_TOFM_CONTROL[RUN] must be set to 1. */
#else /* Word 0 - Little Endian */
        uint64_t tx_advance_enable     : 1;  /**< [  0:  0](R/W) Enable TX advance:
                                                                 0 = TX advance function disabled; all data transmitted.
                                                                 1 = Waits for TX advance pulse before commencing data push to 204C/B transmitter.
                                                                 Note: TOFC()_TOFM_CONTROL[RUN] must be set to 1. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tofm_tx_control_s cn; */
};
typedef union cavm_tofcx_tofm_tx_control cavm_tofcx_tofm_tx_control_t;

static inline uint64_t CAVM_TOFCX_TOFM_TX_CONTROL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TOFM_TX_CONTROL(uint64_t a)
{
    if (a<=3)
        return 0x87e042e08008ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_TOFM_TX_CONTROL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TOFM_TX_CONTROL(a) cavm_tofcx_tofm_tx_control_t
#define bustype_CAVM_TOFCX_TOFM_TX_CONTROL(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TOFM_TX_CONTROL(a) "TOFCX_TOFM_TX_CONTROL"
#define busnum_CAVM_TOFCX_TOFM_TX_CONTROL(a) (a)
#define arguments_CAVM_TOFCX_TOFM_TX_CONTROL(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_tofm_tx_debug_status
 *
 * TOFC TOFM Transport Layer TX Debug Register
 */
union cavm_tofcx_tofm_tx_debug_status
{
    uint64_t u;
    struct cavm_tofcx_tofm_tx_debug_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_11_63        : 53;
        uint64_t tx_fsm_state          : 3;  /**< [ 10:  8](RO/H) TOFM TX FSM state. */
        uint64_t reserved_3_7          : 5;
        uint64_t tx_credit_16          : 1;  /**< [  2:  2](RO/H) Credit count for data transfer between TOFW to TOFM at 16 (max).
                                                                 TOFW TX can send data to TOFM. */
        uint64_t tx_credit_0           : 1;  /**< [  1:  1](RO/H) Credit count for data transfer between TOFW to TOFM at 0.
                                                                 TOFW TX is back pressured from sending data to TOFM. */
        uint64_t tx_quiesce            : 1;  /**< [  0:  0](RO/H) TOFM TX is settled: FIFOs are empty, FSM's idle, pipelines drained. */
#else /* Word 0 - Little Endian */
        uint64_t tx_quiesce            : 1;  /**< [  0:  0](RO/H) TOFM TX is settled: FIFOs are empty, FSM's idle, pipelines drained. */
        uint64_t tx_credit_0           : 1;  /**< [  1:  1](RO/H) Credit count for data transfer between TOFW to TOFM at 0.
                                                                 TOFW TX is back pressured from sending data to TOFM. */
        uint64_t tx_credit_16          : 1;  /**< [  2:  2](RO/H) Credit count for data transfer between TOFW to TOFM at 16 (max).
                                                                 TOFW TX can send data to TOFM. */
        uint64_t reserved_3_7          : 5;
        uint64_t tx_fsm_state          : 3;  /**< [ 10:  8](RO/H) TOFM TX FSM state. */
        uint64_t reserved_11_63        : 53;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tofm_tx_debug_status_s cn; */
};
typedef union cavm_tofcx_tofm_tx_debug_status cavm_tofcx_tofm_tx_debug_status_t;

static inline uint64_t CAVM_TOFCX_TOFM_TX_DEBUG_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TOFM_TX_DEBUG_STATUS(uint64_t a)
{
    if (a<=3)
        return 0x87e042e080b8ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_TOFM_TX_DEBUG_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TOFM_TX_DEBUG_STATUS(a) cavm_tofcx_tofm_tx_debug_status_t
#define bustype_CAVM_TOFCX_TOFM_TX_DEBUG_STATUS(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TOFM_TX_DEBUG_STATUS(a) "TOFCX_TOFM_TX_DEBUG_STATUS"
#define busnum_CAVM_TOFCX_TOFM_TX_DEBUG_STATUS(a) (a)
#define arguments_CAVM_TOFCX_TOFM_TX_DEBUG_STATUS(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_tofw_clk_control
 *
 * TOFW Clock Control Register
 */
union cavm_tofcx_tofw_clk_control
{
    uint64_t u;
    struct cavm_tofcx_tofw_clk_control_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t tofw_clk_disable      : 1;  /**< [  0:  0](R/W) When set, this disables BCLK which is the clock that TOFW uses. It can be
                                                                 disabled by software if all the 4 lanes corresponding to this TOFW are turned
                                                                 off for power savings. */
#else /* Word 0 - Little Endian */
        uint64_t tofw_clk_disable      : 1;  /**< [  0:  0](R/W) When set, this disables BCLK which is the clock that TOFW uses. It can be
                                                                 disabled by software if all the 4 lanes corresponding to this TOFW are turned
                                                                 off for power savings. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tofw_clk_control_s cn; */
};
typedef union cavm_tofcx_tofw_clk_control cavm_tofcx_tofw_clk_control_t;

static inline uint64_t CAVM_TOFCX_TOFW_CLK_CONTROL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TOFW_CLK_CONTROL(uint64_t a)
{
    if (a<=3)
        return 0x87e042e00018ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_TOFW_CLK_CONTROL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TOFW_CLK_CONTROL(a) cavm_tofcx_tofw_clk_control_t
#define bustype_CAVM_TOFCX_TOFW_CLK_CONTROL(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TOFW_CLK_CONTROL(a) "TOFCX_TOFW_CLK_CONTROL"
#define busnum_CAVM_TOFCX_TOFW_CLK_CONTROL(a) (a)
#define arguments_CAVM_TOFCX_TOFW_CLK_CONTROL(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_tofw_rx0_psm_w0##
 *
 * TOFC TOFW RX0 PSM_CMD Register
 * TOFC()_TOFW_RX0_PSM_W1()() and TOFC()_TOFW_RX0_PSM_W0()()
 * ({b} = streams 0..5 for B6G/A6G
 * {c} = antennas 0..7 for B6G, or antennas 0..3 for A6G) store a 128-bit PSM command
 * that is submitted when a symbol
 * completes.
 *
 * In addition, TOFC replaces some fields.
 *
 * If the OPCODE is PSM_OPCODE_E::PSM_OP_ADDJOB or PSM_OPCODE_E::PSM_OP_CONTJOB, then TOFC:
 * * Replaces PSM_CMD_ADDJOB_S[TMEM] with TOFC()_TOFW_RX_DMA_JD_CFG()[JD_TMEM].
 * * Replaces PSM_CMD_ADDJOB_S[JOBPTR] with a pointer to the job descriptor
 * allocated from the job descriptor buffer.
 * * Replaces PSM_CMD_ADDJOB_S[JOBTAG] with a calculated jobtag defined by
 * TOFC()_TOFW_RX_ADDJOB_JOBTAG.
 *
 * If the OPCODE is PSM_OPCODE_E::PSM_OP_ADDWORK, then TOFC replaces
 * PSM_CMD_ADDWORK_S[WQEPTR] with a pointer to the job descriptor allocated
 * from the job descriptor buffer.
 *
 * For other OPCODE values, TOFC does no replacements for fields defined in the PSM CMD words.
 */
union cavm_tofcx_tofw_rx0_psm_w0xx
{
    uint64_t u;
    struct cavm_tofcx_tofw_rx0_psm_w0xx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t w0                    : 64; /**< [ 63:  0](R/W) PSM command word 0. See PSM_CMD_* structure definitions.
                                                                 Note: These set of registers are used if Stream ID is less than 6, and Antenna ID is less than 8 */
#else /* Word 0 - Little Endian */
        uint64_t w0                    : 64; /**< [ 63:  0](R/W) PSM command word 0. See PSM_CMD_* structure definitions.
                                                                 Note: These set of registers are used if Stream ID is less than 6, and Antenna ID is less than 8 */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tofw_rx0_psm_w0xx_s cn; */
};
typedef union cavm_tofcx_tofw_rx0_psm_w0xx cavm_tofcx_tofw_rx0_psm_w0xx_t;

static inline uint64_t CAVM_TOFCX_TOFW_RX0_PSM_W0XX(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TOFW_RX0_PSM_W0XX(uint64_t a, uint64_t b, uint64_t c)
{
    if ((a<=3) && (b<=5) && (c<=7))
        return 0x87e042e01800ll + 0x80000ll * ((a) & 0x3) + 0x40ll * ((b) & 0x7) + 8ll * ((c) & 0x7);
    __cavm_csr_fatal("TOFCX_TOFW_RX0_PSM_W0XX", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TOFW_RX0_PSM_W0XX(a,b,c) cavm_tofcx_tofw_rx0_psm_w0xx_t
#define bustype_CAVM_TOFCX_TOFW_RX0_PSM_W0XX(a,b,c) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TOFW_RX0_PSM_W0XX(a,b,c) "TOFCX_TOFW_RX0_PSM_W0XX"
#define busnum_CAVM_TOFCX_TOFW_RX0_PSM_W0XX(a,b,c) (a)
#define arguments_CAVM_TOFCX_TOFW_RX0_PSM_W0XX(a,b,c) (a),(b),(c),-1

/**
 * Register (RSL) tofc#_tofw_rx0_psm_w1##
 *
 * TOFC TOFW RX0 PSM_CMD 0 Register
 * See TOFC()_TOFW_RX0_PSM_W0()().
 */
union cavm_tofcx_tofw_rx0_psm_w1xx
{
    uint64_t u;
    struct cavm_tofcx_tofw_rx0_psm_w1xx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t w1                    : 64; /**< [ 63:  0](R/W) PSM command word 1. See PSM_CMD_* structure definitions.
                                                                 Note: These set of registers are used if Stream ID is less than 6, and Antenna ID is less than 8 */
#else /* Word 0 - Little Endian */
        uint64_t w1                    : 64; /**< [ 63:  0](R/W) PSM command word 1. See PSM_CMD_* structure definitions.
                                                                 Note: These set of registers are used if Stream ID is less than 6, and Antenna ID is less than 8 */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tofw_rx0_psm_w1xx_s cn; */
};
typedef union cavm_tofcx_tofw_rx0_psm_w1xx cavm_tofcx_tofw_rx0_psm_w1xx_t;

static inline uint64_t CAVM_TOFCX_TOFW_RX0_PSM_W1XX(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TOFW_RX0_PSM_W1XX(uint64_t a, uint64_t b, uint64_t c)
{
    if ((a<=3) && (b<=5) && (c<=7))
        return 0x87e042e01c00ll + 0x80000ll * ((a) & 0x3) + 0x40ll * ((b) & 0x7) + 8ll * ((c) & 0x7);
    __cavm_csr_fatal("TOFCX_TOFW_RX0_PSM_W1XX", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TOFW_RX0_PSM_W1XX(a,b,c) cavm_tofcx_tofw_rx0_psm_w1xx_t
#define bustype_CAVM_TOFCX_TOFW_RX0_PSM_W1XX(a,b,c) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TOFW_RX0_PSM_W1XX(a,b,c) "TOFCX_TOFW_RX0_PSM_W1XX"
#define busnum_CAVM_TOFCX_TOFW_RX0_PSM_W1XX(a,b,c) (a)
#define arguments_CAVM_TOFCX_TOFW_RX0_PSM_W1XX(a,b,c) (a),(b),(c),-1

/**
 * Register (RSL) tofc#_tofw_rx1_psm_w0##
 *
 * TOFC TOFW RX1 PSM_CMD Register
 * TOFC()_TOFW_RX1_PSM_W1()() and TOFC()_TOFW_RX1_PSM_W0()()
 * ( For B6G+64TRX -  {b} = streams 0..5, {c} = antennas 8..15
 *   For B6G+32TRX -  {b} = streams 6..11, {c} = antennas 0..7
 *   For A6G       -  {b} = streams 6..7, {c} = antennas 0..3
 *   This store a 128-bit PSM command that is submitted when a symbol completes.
 *
 * In addition, TOFC replaces some fields.
 *
 * If the OPCODE is PSM_OPCODE_E::PSM_OP_ADDJOB or PSM_OPCODE_E::PSM_OP_CONTJOB, then TOFC:
 * * Replaces PSM_CMD_ADDJOB_S[TMEM] with TOFC()_TOFW_RX_DMA_JD_CFG()[JD_TMEM].
 * * Replaces PSM_CMD_ADDJOB_S[JOBPTR] with a pointer to the job descriptor
 * allocated from the job descriptor buffer.
 * * Replaces PSM_CMD_ADDJOB_S[JOBTAG] with a calculated jobtag defined by
 * TOFC()_TOFW_RX_ADDJOB_JOBTAG.
 *
 * If the OPCODE is PSM_OPCODE_E::PSM_OP_ADDWORK, then TOFC replaces
 * PSM_CMD_ADDWORK_S[WQEPTR] with a pointer to the job descriptor allocated
 * from the job descriptor buffer.
 *
 * For other OPCODE values, TOFC does no replacements for fields defined in the PSM CMD words.
 */
union cavm_tofcx_tofw_rx1_psm_w0xx
{
    uint64_t u;
    struct cavm_tofcx_tofw_rx1_psm_w0xx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t w0                    : 64; /**< [ 63:  0](R/W) PSM command word 0. See PSM_CMD_* structure definitions. */
#else /* Word 0 - Little Endian */
        uint64_t w0                    : 64; /**< [ 63:  0](R/W) PSM command word 0. See PSM_CMD_* structure definitions. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tofw_rx1_psm_w0xx_s cn; */
};
typedef union cavm_tofcx_tofw_rx1_psm_w0xx cavm_tofcx_tofw_rx1_psm_w0xx_t;

static inline uint64_t CAVM_TOFCX_TOFW_RX1_PSM_W0XX(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TOFW_RX1_PSM_W0XX(uint64_t a, uint64_t b, uint64_t c)
{
    if ((a<=3) && (b<=5) && (c<=7))
        return 0x87e042e02000ll + 0x80000ll * ((a) & 0x3) + 0x40ll * ((b) & 0x7) + 8ll * ((c) & 0x7);
    __cavm_csr_fatal("TOFCX_TOFW_RX1_PSM_W0XX", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TOFW_RX1_PSM_W0XX(a,b,c) cavm_tofcx_tofw_rx1_psm_w0xx_t
#define bustype_CAVM_TOFCX_TOFW_RX1_PSM_W0XX(a,b,c) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TOFW_RX1_PSM_W0XX(a,b,c) "TOFCX_TOFW_RX1_PSM_W0XX"
#define busnum_CAVM_TOFCX_TOFW_RX1_PSM_W0XX(a,b,c) (a)
#define arguments_CAVM_TOFCX_TOFW_RX1_PSM_W0XX(a,b,c) (a),(b),(c),-1

/**
 * Register (RSL) tofc#_tofw_rx1_psm_w1##
 *
 * TOFC TOFW RX1 PSM_CMD 0 Register
 * See TOFC()_TOFW_RX1_PSM_W0()().
 */
union cavm_tofcx_tofw_rx1_psm_w1xx
{
    uint64_t u;
    struct cavm_tofcx_tofw_rx1_psm_w1xx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t w1                    : 64; /**< [ 63:  0](R/W) PSM command word 1. See PSM_CMD_* structure definitions. */
#else /* Word 0 - Little Endian */
        uint64_t w1                    : 64; /**< [ 63:  0](R/W) PSM command word 1. See PSM_CMD_* structure definitions. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tofw_rx1_psm_w1xx_s cn; */
};
typedef union cavm_tofcx_tofw_rx1_psm_w1xx cavm_tofcx_tofw_rx1_psm_w1xx_t;

static inline uint64_t CAVM_TOFCX_TOFW_RX1_PSM_W1XX(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TOFW_RX1_PSM_W1XX(uint64_t a, uint64_t b, uint64_t c)
{
    if ((a<=3) && (b<=5) && (c<=7))
        return 0x87e042e02400ll + 0x80000ll * ((a) & 0x3) + 0x40ll * ((b) & 0x7) + 8ll * ((c) & 0x7);
    __cavm_csr_fatal("TOFCX_TOFW_RX1_PSM_W1XX", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TOFW_RX1_PSM_W1XX(a,b,c) cavm_tofcx_tofw_rx1_psm_w1xx_t
#define bustype_CAVM_TOFCX_TOFW_RX1_PSM_W1XX(a,b,c) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TOFW_RX1_PSM_W1XX(a,b,c) "TOFCX_TOFW_RX1_PSM_W1XX"
#define busnum_CAVM_TOFCX_TOFW_RX1_PSM_W1XX(a,b,c) (a)
#define arguments_CAVM_TOFCX_TOFW_RX1_PSM_W1XX(a,b,c) (a),(b),(c),-1

/**
 * Register (RSL) tofc#_tofw_rx_addjob_jobtag
 *
 * TOFC TOFW RX JCA ADDJOB Message Jobtag Configuration Register
 * Defines value TOFC send for the PSM_CMD_ADDJOB_S[JOBTAG] and
 * PSM_CMD_CONTJOB_S[JOBTAG] values when sending new job commands to PSM:
 * _ command [JOBTAG] = ([BASE] & (0xffff \<\< [MASK_WIDTH])) | ([COUNT] & ~(0xffff \<\< [MASK_WIDTH])).
 */
union cavm_tofcx_tofw_rx_addjob_jobtag
{
    uint64_t u;
    struct cavm_tofcx_tofw_rx_addjob_jobtag_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t count                 : 16; /**< [ 47: 32](R/W/H) Current counter value. Increments on every ADDJOB
                                                                 and CONTJOB command sent to PSM. Counter increment wraps to 0x0 when current [COUNT] == 0xFFFF. */
        uint64_t reserved_21_31        : 11;
        uint64_t mask_width            : 5;  /**< [ 20: 16](R/W) Number of bits from counter to insert into lower bits of JOBTAG. */
        uint64_t base                  : 16; /**< [ 15:  0](R/W) Constant value part of the JOBTAG. */
#else /* Word 0 - Little Endian */
        uint64_t base                  : 16; /**< [ 15:  0](R/W) Constant value part of the JOBTAG. */
        uint64_t mask_width            : 5;  /**< [ 20: 16](R/W) Number of bits from counter to insert into lower bits of JOBTAG. */
        uint64_t reserved_21_31        : 11;
        uint64_t count                 : 16; /**< [ 47: 32](R/W/H) Current counter value. Increments on every ADDJOB
                                                                 and CONTJOB command sent to PSM. Counter increment wraps to 0x0 when current [COUNT] == 0xFFFF. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tofw_rx_addjob_jobtag_s cn; */
};
typedef union cavm_tofcx_tofw_rx_addjob_jobtag cavm_tofcx_tofw_rx_addjob_jobtag_t;

static inline uint64_t CAVM_TOFCX_TOFW_RX_ADDJOB_JOBTAG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TOFW_RX_ADDJOB_JOBTAG(uint64_t a)
{
    if (a<=3)
        return 0x87e042e01380ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_TOFW_RX_ADDJOB_JOBTAG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TOFW_RX_ADDJOB_JOBTAG(a) cavm_tofcx_tofw_rx_addjob_jobtag_t
#define bustype_CAVM_TOFCX_TOFW_RX_ADDJOB_JOBTAG(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TOFW_RX_ADDJOB_JOBTAG(a) "TOFCX_TOFW_RX_ADDJOB_JOBTAG"
#define busnum_CAVM_TOFCX_TOFW_RX_ADDJOB_JOBTAG(a) (a)
#define arguments_CAVM_TOFCX_TOFW_RX_ADDJOB_JOBTAG(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_tofw_rx_cfg
 *
 * TOFC TOFW RX General Configuration Register
 */
union cavm_tofcx_tofw_rx_cfg
{
    uint64_t u;
    struct cavm_tofcx_tofw_rx_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_60_63        : 4;
        uint64_t scsf_bypass_all       : 1;  /**< [ 59: 59](R/W) If set, bypasses all SCSF filters in Rx path. */
        uint64_t lane2                 : 1;  /**< [ 58: 58](R/W) Two Lane Mode. When set, it configures TOFW RX to receive data from
                                                                 TOFM in Lanes 0-1 only. Following combinations show the modes supported -
                                                                 {A6G,TWOxTWO,LANE2} = 000 -- Legacy Mode, 8 Ant, 4 Lane (1x4) (MB1-MB6)
                                                                 {A6G,TWOxTWO,LANE2} = 001 -- B6G Mode, 8 Ant, 2 Lane (1x2) (MB7-MB10, MB21-MB26)
                                                                 {A6G,TWOxTWO,LANE2} = 010 -- B6G Mode, 16 Ant, 4 Lane (2x2) (MB21-MB26)
                                                                 {A6G,TWOxTWO,LANE2} = 101 -- A6G Mode, 2 Ant, 2 Lane (1x2) (MA1-MA9)
                                                                 {A6G,TWOxTWO,LANE2} = 110 -- A6G Mode, 4 Ant, 4 Lane (2x2) (MA1-MA9) */
        uint64_t twoxtwo               : 1;  /**< [ 57: 57](R/W) 2x2 mode where each lane is doubled in speed to support 8 antennas each.
                                                                 When set, it configures TOFW RX to receive 2 frames of data from TOFM
                                                                 simultaneously, where one frame is received in Lanes 0-1 and the other frame in
                                                                 Lanes 2-3. */
        uint64_t a6g                   : 1;  /**< [ 56: 56](R/W) A6G Mode. When set, it configures TOFW RX to be in A6G mode. */
        uint64_t gmid_jd               : 3;  /**< [ 55: 53](R/W) GMID (Guest Machine ID) for JD. May have a non-zero value when accessing LLC/DRAM. */
        uint64_t reserved_52           : 1;
        uint64_t gmid_rx               : 3;  /**< [ 51: 49](R/W) GMID (Guest Machine ID) for Rx samples. */
        uint64_t wr_hp                 : 1;  /**< [ 48: 48](R/W) Priority for all SMEM write requests. */
        uint64_t reserved_46_47        : 2;
        uint64_t byte_swap_cfg         : 6;  /**< [ 45: 40](R/W) Controls byte order and frame endianess.
                                                                 * Byte swap: Independent control of flit byte order.
                                                                 * Sample endianess: Frame endianess order of samples. Done after the byte swaps.

                                                                 Bits defined as follows:
                                                                 * \<0\>: If 1, swaps endianness within a 16-bit I or a Q sample.
                                                                 * \<1\>: If 1, swaps I and Q positions within each sample.
                                                                   _ 0 = {Q,I} where I is in bits \<15:0\>, Q in bits \<31:16\>.
                                                                   _ 1 = {I,Q} where Q is in bits \<15:0\>, I in bits \<31:16\>.
                                                                 * \<2\>: If 1, changes sample endianness.
                                                                   _ 0 = Sample 0 on the LS side of the frame data.
                                                                   _ 1 = Sample 0 on the MS side of the frame data.
                                                                 * \<3\>:  If 1, Swap sample[n] with sample[n+1] for all (n%2 == 0).
                                                                   _ 0 = Sample n on bits \<31:0\>, Sample (n+1) on bits \<63:32\>.
                                                                   _ 1 = Sample n on bits \<63:32\>, Sample (n+1) on bits \<31:0\>.
                                                                 * \<4\>: Control swap of 64b data slices.
                                                                   _ 0 = no 64b swap.
                                                                   _ 1 = swap data \<63:0\> with data \<127:64\> and data \<191:128\> with data \<255:192\>.
                                                                 * \<5\>: Control swap of 128b data slices.
                                                                   _ 0 = no 128b swap.
                                                                   _ 1 = swap data \<127:0\> with data \<255:128\>. Note: This bit should not be set
                                                                 when using only 2 lanes. */
        uint64_t reserved_33_39        : 7;
        uint64_t sample_width_option   : 1;  /**< [ 32: 32](R/W) I/Q sample format. Determines how samples
                                                                 are expanded to 16 bits.
                                                                 0 = Sign-extend left.
                                                                 1 = Zero pad right. */
        uint64_t reserved_31           : 1;
        uint64_t cc7_wt                : 3;  /**< [ 30: 28](R/W) Selects the number of CC7 samples per antenna in each received JESD frame.

                                                                 Typical use cases:
                                                                 * MB1/MB21, 6x30.7Msps (reset value):
                                                                 _ [CC7_WT] = 0, [CC6_WT] = 0, [CC5_WT] = 1, [CC4_WT] = 1,
                                                                   [CC3_WT] = 1, [CC2_WT] = 1, [CC1_WT] = 1, [CC0_WT] = 1.
                                                                 * MB2/MB22, 61.4 + 4x30.7Msps:
                                                                 _ [CC7_WT] = 0, [CC6_WT] = 0, [CC5_WT] = 0, [CC4_WT] = 1,
                                                                   [CC3_WT] = 1, [CC2_WT] = 1, [CC1_WT] = 1, [CC0_WT] = 2.
                                                                 * MB3/MB23, 2x61.4 + 2x30.7Msps:
                                                                 _ [CC7_WT] = 0, [CC6_WT] = 0, [CC5_WT] = 0, [CC4_WT] = 0,
                                                                   [CC3_WT] = 1, [CC2_WT] = 1, [CC1_WT] = 2, [CC0_WT] = 2.
                                                                 * MB4/MB24, 3x61.4Msps:
                                                                 _ [CC7_WT] = 0, [CC6_WT] = 0, [CC5_WT] = 0, [CC4_WT] = 0,
                                                                   [CC3_WT] = 0, [CC2_WT] = 2, [CC1_WT] = 2, [CC0_WT] = 2.
                                                                 * MB5/MB25, 122.8 + 2x30.7Msps:
                                                                 _ [CC7_WT] = 0, [CC6_WT] = 0, [CC5_WT] = 0, [CC4_WT] = 0,
                                                                   [CC3_WT] = 0, [CC2_WT] = 1, [CC1_WT] = 1, [CC0_WT] = 4.
                                                                 * MB6/MB26, 122.8 + 61.4Msps:
                                                                 _ [CC7_WT] = 0, [CC6_WT] = 0, [CC5_WT] = 0, [CC4_WT] = 0,
                                                                   [CC3_WT] = 0, [CC2_WT] = 0, [CC1_WT] = 2, [CC0_WT] = 4.
                                                                 * MB7, 4x30.7Msps:
                                                                 _ [CC7_WT] = 0, [CC6_WT] = 0, [CC5_WT] = 0, [CC4_WT] = 0,
                                                                   [CC3_WT] = 1, [CC2_WT] = 1, [CC1_WT] = 1, [CC0_WT] = 1.
                                                                 * MB8, 61.4 + 2x30.7Msps:
                                                                 _ [CC7_WT] = 0, [CC6_WT] = 0, [CC5_WT] = 0, [CC4_WT] = 0,
                                                                   [CC3_WT] = 0, [CC2_WT] = 1, [CC1_WT] = 1, [CC0_WT] = 2.
                                                                 * MB9, 2x61.4Msps:
                                                                 _ [CC7_WT] = 0, [CC6_WT] = 0, [CC5_WT] = 0, [CC4_WT] = 0,
                                                                   [CC3_WT] = 0, [CC2_WT] = 0, [CC1_WT] = 2, [CC0_WT] = 2.
                                                                 * MB10, 122.8Msps:
                                                                 _ [CC7_WT] = 0, [CC6_WT] = 0, [CC5_WT] = 0, [CC4_WT] = 0,
                                                                   [CC3_WT] = 0, [CC2_WT] = 0, [CC1_WT] = 0, [CC0_WT] = 4.
                                                                 * MA1, 2x245.8Msps:
                                                                 _ [CC7_WT] = 0, [CC6_WT] = 0, [CC5_WT] = 0, [CC4_WT] = 0,
                                                                   [CC3_WT] = 0, [CC2_WT] = 0, [CC1_WT] = 4, [CC0_WT] = 4.
                                                                 * MA2, 245.8 + 2x122.8Msps:
                                                                 _ [CC7_WT] = 0, [CC6_WT] = 0, [CC5_WT] = 0, [CC4_WT] = 0,
                                                                   [CC3_WT] = 0, [CC2_WT] = 2, [CC1_WT] = 2, [CC0_WT] = 4.
                                                                 * MA3, 245.8 + 122.8 + 2x61.4Msps:
                                                                 _ [CC7_WT] = 0, [CC6_WT] = 0, [CC5_WT] = 0, [CC4_WT] = 0,
                                                                   [CC3_WT] = 1, [CC2_WT] = 1, [CC1_WT] = 2, [CC0_WT] = 4.
                                                                 * MA4, 245.8 + 4x61.4Msps:
                                                                 _ [CC7_WT] = 0, [CC6_WT] = 0, [CC5_WT] = 0, [CC4_WT] = 1,
                                                                   [CC3_WT] = 1, [CC2_WT] = 1, [CC1_WT] = 1, [CC0_WT] = 4.
                                                                 * MA5, 4x122.8Msps:
                                                                 _ [CC7_WT] = 0, [CC6_WT] = 0, [CC5_WT] = 0, [CC4_WT] = 0,
                                                                   [CC3_WT] = 2, [CC2_WT] = 2, [CC1_WT] = 2, [CC0_WT] = 2.
                                                                 * MA6, 3x122.8 + 2x61.4Msps:
                                                                 _ [CC7_WT] = 0, [CC6_WT] = 0, [CC5_WT] = 0, [CC4_WT] = 1,
                                                                   [CC3_WT] = 1, [CC2_WT] = 2, [CC1_WT] = 2, [CC0_WT] = 2.
                                                                 * MA7, 2x122.8 + 4x61.4Msps:
                                                                 _ [CC7_WT] = 0, [CC6_WT] = 0, [CC5_WT] = 1, [CC4_WT] = 1,
                                                                   [CC3_WT] = 1, [CC2_WT] = 1, [CC1_WT] = 2, [CC0_WT] = 2.
                                                                 * MA8, 122.8 + 6x61.4Msps:
                                                                 _ [CC7_WT] = 0, [CC6_WT] = 1, [CC5_WT] = 1, [CC4_WT] = 1,
                                                                   [CC3_WT] = 1, [CC2_WT] = 1, [CC1_WT] = 1, [CC0_WT] = 2.
                                                                 * MA9, 8x61.4Msps:
                                                                 _ [CC7_WT] = 1, [CC6_WT] = 1, [CC5_WT] = 1, [CC4_WT] = 1,
                                                                   [CC3_WT] = 1, [CC2_WT] = 1, [CC1_WT] = 1, [CC0_WT] = 1.

                                                                 Constraints:
                                                                 * Legal [CC7_WT] values: 0, 1.
                                                                 * Legal [CC6_WT] values: 0, 1.
                                                                 * Legal [CC5_WT] values: 0, 1.
                                                                 * Legal [CC4_WT] values: 0, 1.
                                                                 * Legal [CC3_WT] values: 0, 1, 2.
                                                                 * Legal [CC2_WT] values: 0, 1, 2.
                                                                 * Legal [CC1_WT] values: 0, 1, 2, 4.
                                                                 * Legal [CC0_WT] values: 0, 1, 2, 4.
                                                                 * B6G: Sum of all [CCn_WT] values: 4, or 6.
                                                                 * A6G: Sum of all [CCn_WT] values: 8
                                                                 * [CCi_WT] \<= [CCj_WT] for all (i \> j). */
        uint64_t reserved_27           : 1;
        uint64_t cc6_wt                : 3;  /**< [ 26: 24](R/W) Selects the number of CC6 samples per antenna in each received JESD frame.
                                                                 See [CC7_WT] */
        uint64_t reserved_23           : 1;
        uint64_t cc5_wt                : 3;  /**< [ 22: 20](R/W) Selects the number of CC5 samples per antenna in each received JESD frame.
                                                                 See [CC7_WT] */
        uint64_t reserved_19           : 1;
        uint64_t cc4_wt                : 3;  /**< [ 18: 16](R/W) Selects the number of CC4 samples per antenna in each received JESD frame.
                                                                 See [CC7_WT] */
        uint64_t reserved_15           : 1;
        uint64_t cc3_wt                : 3;  /**< [ 14: 12](R/W) Selects the number of CC3 samples per antenna in each received JESD
                                                                 frame. See [CC7_WT]. */
        uint64_t reserved_11           : 1;
        uint64_t cc2_wt                : 3;  /**< [ 10:  8](R/W) Selects the number of CC2 samples per antenna in each received JESD
                                                                 frame. See [CC7_WT]. */
        uint64_t reserved_7            : 1;
        uint64_t cc1_wt                : 3;  /**< [  6:  4](R/W) Selects the number of CC1 samples per antenna in each received JESD
                                                                 frame. See [CC7_WT]. */
        uint64_t reserved_3            : 1;
        uint64_t cc0_wt                : 3;  /**< [  2:  0](R/W) Selects the number of CC0 samples per antenna in each received JESD
                                                                 frame. See [CC7_WT]. */
#else /* Word 0 - Little Endian */
        uint64_t cc0_wt                : 3;  /**< [  2:  0](R/W) Selects the number of CC0 samples per antenna in each received JESD
                                                                 frame. See [CC7_WT]. */
        uint64_t reserved_3            : 1;
        uint64_t cc1_wt                : 3;  /**< [  6:  4](R/W) Selects the number of CC1 samples per antenna in each received JESD
                                                                 frame. See [CC7_WT]. */
        uint64_t reserved_7            : 1;
        uint64_t cc2_wt                : 3;  /**< [ 10:  8](R/W) Selects the number of CC2 samples per antenna in each received JESD
                                                                 frame. See [CC7_WT]. */
        uint64_t reserved_11           : 1;
        uint64_t cc3_wt                : 3;  /**< [ 14: 12](R/W) Selects the number of CC3 samples per antenna in each received JESD
                                                                 frame. See [CC7_WT]. */
        uint64_t reserved_15           : 1;
        uint64_t cc4_wt                : 3;  /**< [ 18: 16](R/W) Selects the number of CC4 samples per antenna in each received JESD frame.
                                                                 See [CC7_WT] */
        uint64_t reserved_19           : 1;
        uint64_t cc5_wt                : 3;  /**< [ 22: 20](R/W) Selects the number of CC5 samples per antenna in each received JESD frame.
                                                                 See [CC7_WT] */
        uint64_t reserved_23           : 1;
        uint64_t cc6_wt                : 3;  /**< [ 26: 24](R/W) Selects the number of CC6 samples per antenna in each received JESD frame.
                                                                 See [CC7_WT] */
        uint64_t reserved_27           : 1;
        uint64_t cc7_wt                : 3;  /**< [ 30: 28](R/W) Selects the number of CC7 samples per antenna in each received JESD frame.

                                                                 Typical use cases:
                                                                 * MB1/MB21, 6x30.7Msps (reset value):
                                                                 _ [CC7_WT] = 0, [CC6_WT] = 0, [CC5_WT] = 1, [CC4_WT] = 1,
                                                                   [CC3_WT] = 1, [CC2_WT] = 1, [CC1_WT] = 1, [CC0_WT] = 1.
                                                                 * MB2/MB22, 61.4 + 4x30.7Msps:
                                                                 _ [CC7_WT] = 0, [CC6_WT] = 0, [CC5_WT] = 0, [CC4_WT] = 1,
                                                                   [CC3_WT] = 1, [CC2_WT] = 1, [CC1_WT] = 1, [CC0_WT] = 2.
                                                                 * MB3/MB23, 2x61.4 + 2x30.7Msps:
                                                                 _ [CC7_WT] = 0, [CC6_WT] = 0, [CC5_WT] = 0, [CC4_WT] = 0,
                                                                   [CC3_WT] = 1, [CC2_WT] = 1, [CC1_WT] = 2, [CC0_WT] = 2.
                                                                 * MB4/MB24, 3x61.4Msps:
                                                                 _ [CC7_WT] = 0, [CC6_WT] = 0, [CC5_WT] = 0, [CC4_WT] = 0,
                                                                   [CC3_WT] = 0, [CC2_WT] = 2, [CC1_WT] = 2, [CC0_WT] = 2.
                                                                 * MB5/MB25, 122.8 + 2x30.7Msps:
                                                                 _ [CC7_WT] = 0, [CC6_WT] = 0, [CC5_WT] = 0, [CC4_WT] = 0,
                                                                   [CC3_WT] = 0, [CC2_WT] = 1, [CC1_WT] = 1, [CC0_WT] = 4.
                                                                 * MB6/MB26, 122.8 + 61.4Msps:
                                                                 _ [CC7_WT] = 0, [CC6_WT] = 0, [CC5_WT] = 0, [CC4_WT] = 0,
                                                                   [CC3_WT] = 0, [CC2_WT] = 0, [CC1_WT] = 2, [CC0_WT] = 4.
                                                                 * MB7, 4x30.7Msps:
                                                                 _ [CC7_WT] = 0, [CC6_WT] = 0, [CC5_WT] = 0, [CC4_WT] = 0,
                                                                   [CC3_WT] = 1, [CC2_WT] = 1, [CC1_WT] = 1, [CC0_WT] = 1.
                                                                 * MB8, 61.4 + 2x30.7Msps:
                                                                 _ [CC7_WT] = 0, [CC6_WT] = 0, [CC5_WT] = 0, [CC4_WT] = 0,
                                                                   [CC3_WT] = 0, [CC2_WT] = 1, [CC1_WT] = 1, [CC0_WT] = 2.
                                                                 * MB9, 2x61.4Msps:
                                                                 _ [CC7_WT] = 0, [CC6_WT] = 0, [CC5_WT] = 0, [CC4_WT] = 0,
                                                                   [CC3_WT] = 0, [CC2_WT] = 0, [CC1_WT] = 2, [CC0_WT] = 2.
                                                                 * MB10, 122.8Msps:
                                                                 _ [CC7_WT] = 0, [CC6_WT] = 0, [CC5_WT] = 0, [CC4_WT] = 0,
                                                                   [CC3_WT] = 0, [CC2_WT] = 0, [CC1_WT] = 0, [CC0_WT] = 4.
                                                                 * MA1, 2x245.8Msps:
                                                                 _ [CC7_WT] = 0, [CC6_WT] = 0, [CC5_WT] = 0, [CC4_WT] = 0,
                                                                   [CC3_WT] = 0, [CC2_WT] = 0, [CC1_WT] = 4, [CC0_WT] = 4.
                                                                 * MA2, 245.8 + 2x122.8Msps:
                                                                 _ [CC7_WT] = 0, [CC6_WT] = 0, [CC5_WT] = 0, [CC4_WT] = 0,
                                                                   [CC3_WT] = 0, [CC2_WT] = 2, [CC1_WT] = 2, [CC0_WT] = 4.
                                                                 * MA3, 245.8 + 122.8 + 2x61.4Msps:
                                                                 _ [CC7_WT] = 0, [CC6_WT] = 0, [CC5_WT] = 0, [CC4_WT] = 0,
                                                                   [CC3_WT] = 1, [CC2_WT] = 1, [CC1_WT] = 2, [CC0_WT] = 4.
                                                                 * MA4, 245.8 + 4x61.4Msps:
                                                                 _ [CC7_WT] = 0, [CC6_WT] = 0, [CC5_WT] = 0, [CC4_WT] = 1,
                                                                   [CC3_WT] = 1, [CC2_WT] = 1, [CC1_WT] = 1, [CC0_WT] = 4.
                                                                 * MA5, 4x122.8Msps:
                                                                 _ [CC7_WT] = 0, [CC6_WT] = 0, [CC5_WT] = 0, [CC4_WT] = 0,
                                                                   [CC3_WT] = 2, [CC2_WT] = 2, [CC1_WT] = 2, [CC0_WT] = 2.
                                                                 * MA6, 3x122.8 + 2x61.4Msps:
                                                                 _ [CC7_WT] = 0, [CC6_WT] = 0, [CC5_WT] = 0, [CC4_WT] = 1,
                                                                   [CC3_WT] = 1, [CC2_WT] = 2, [CC1_WT] = 2, [CC0_WT] = 2.
                                                                 * MA7, 2x122.8 + 4x61.4Msps:
                                                                 _ [CC7_WT] = 0, [CC6_WT] = 0, [CC5_WT] = 1, [CC4_WT] = 1,
                                                                   [CC3_WT] = 1, [CC2_WT] = 1, [CC1_WT] = 2, [CC0_WT] = 2.
                                                                 * MA8, 122.8 + 6x61.4Msps:
                                                                 _ [CC7_WT] = 0, [CC6_WT] = 1, [CC5_WT] = 1, [CC4_WT] = 1,
                                                                   [CC3_WT] = 1, [CC2_WT] = 1, [CC1_WT] = 1, [CC0_WT] = 2.
                                                                 * MA9, 8x61.4Msps:
                                                                 _ [CC7_WT] = 1, [CC6_WT] = 1, [CC5_WT] = 1, [CC4_WT] = 1,
                                                                   [CC3_WT] = 1, [CC2_WT] = 1, [CC1_WT] = 1, [CC0_WT] = 1.

                                                                 Constraints:
                                                                 * Legal [CC7_WT] values: 0, 1.
                                                                 * Legal [CC6_WT] values: 0, 1.
                                                                 * Legal [CC5_WT] values: 0, 1.
                                                                 * Legal [CC4_WT] values: 0, 1.
                                                                 * Legal [CC3_WT] values: 0, 1, 2.
                                                                 * Legal [CC2_WT] values: 0, 1, 2.
                                                                 * Legal [CC1_WT] values: 0, 1, 2, 4.
                                                                 * Legal [CC0_WT] values: 0, 1, 2, 4.
                                                                 * B6G: Sum of all [CCn_WT] values: 4, or 6.
                                                                 * A6G: Sum of all [CCn_WT] values: 8
                                                                 * [CCi_WT] \<= [CCj_WT] for all (i \> j). */
        uint64_t reserved_31           : 1;
        uint64_t sample_width_option   : 1;  /**< [ 32: 32](R/W) I/Q sample format. Determines how samples
                                                                 are expanded to 16 bits.
                                                                 0 = Sign-extend left.
                                                                 1 = Zero pad right. */
        uint64_t reserved_33_39        : 7;
        uint64_t byte_swap_cfg         : 6;  /**< [ 45: 40](R/W) Controls byte order and frame endianess.
                                                                 * Byte swap: Independent control of flit byte order.
                                                                 * Sample endianess: Frame endianess order of samples. Done after the byte swaps.

                                                                 Bits defined as follows:
                                                                 * \<0\>: If 1, swaps endianness within a 16-bit I or a Q sample.
                                                                 * \<1\>: If 1, swaps I and Q positions within each sample.
                                                                   _ 0 = {Q,I} where I is in bits \<15:0\>, Q in bits \<31:16\>.
                                                                   _ 1 = {I,Q} where Q is in bits \<15:0\>, I in bits \<31:16\>.
                                                                 * \<2\>: If 1, changes sample endianness.
                                                                   _ 0 = Sample 0 on the LS side of the frame data.
                                                                   _ 1 = Sample 0 on the MS side of the frame data.
                                                                 * \<3\>:  If 1, Swap sample[n] with sample[n+1] for all (n%2 == 0).
                                                                   _ 0 = Sample n on bits \<31:0\>, Sample (n+1) on bits \<63:32\>.
                                                                   _ 1 = Sample n on bits \<63:32\>, Sample (n+1) on bits \<31:0\>.
                                                                 * \<4\>: Control swap of 64b data slices.
                                                                   _ 0 = no 64b swap.
                                                                   _ 1 = swap data \<63:0\> with data \<127:64\> and data \<191:128\> with data \<255:192\>.
                                                                 * \<5\>: Control swap of 128b data slices.
                                                                   _ 0 = no 128b swap.
                                                                   _ 1 = swap data \<127:0\> with data \<255:128\>. Note: This bit should not be set
                                                                 when using only 2 lanes. */
        uint64_t reserved_46_47        : 2;
        uint64_t wr_hp                 : 1;  /**< [ 48: 48](R/W) Priority for all SMEM write requests. */
        uint64_t gmid_rx               : 3;  /**< [ 51: 49](R/W) GMID (Guest Machine ID) for Rx samples. */
        uint64_t reserved_52           : 1;
        uint64_t gmid_jd               : 3;  /**< [ 55: 53](R/W) GMID (Guest Machine ID) for JD. May have a non-zero value when accessing LLC/DRAM. */
        uint64_t a6g                   : 1;  /**< [ 56: 56](R/W) A6G Mode. When set, it configures TOFW RX to be in A6G mode. */
        uint64_t twoxtwo               : 1;  /**< [ 57: 57](R/W) 2x2 mode where each lane is doubled in speed to support 8 antennas each.
                                                                 When set, it configures TOFW RX to receive 2 frames of data from TOFM
                                                                 simultaneously, where one frame is received in Lanes 0-1 and the other frame in
                                                                 Lanes 2-3. */
        uint64_t lane2                 : 1;  /**< [ 58: 58](R/W) Two Lane Mode. When set, it configures TOFW RX to receive data from
                                                                 TOFM in Lanes 0-1 only. Following combinations show the modes supported -
                                                                 {A6G,TWOxTWO,LANE2} = 000 -- Legacy Mode, 8 Ant, 4 Lane (1x4) (MB1-MB6)
                                                                 {A6G,TWOxTWO,LANE2} = 001 -- B6G Mode, 8 Ant, 2 Lane (1x2) (MB7-MB10, MB21-MB26)
                                                                 {A6G,TWOxTWO,LANE2} = 010 -- B6G Mode, 16 Ant, 4 Lane (2x2) (MB21-MB26)
                                                                 {A6G,TWOxTWO,LANE2} = 101 -- A6G Mode, 2 Ant, 2 Lane (1x2) (MA1-MA9)
                                                                 {A6G,TWOxTWO,LANE2} = 110 -- A6G Mode, 4 Ant, 4 Lane (2x2) (MA1-MA9) */
        uint64_t scsf_bypass_all       : 1;  /**< [ 59: 59](R/W) If set, bypasses all SCSF filters in Rx path. */
        uint64_t reserved_60_63        : 4;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tofw_rx_cfg_s cn; */
};
typedef union cavm_tofcx_tofw_rx_cfg cavm_tofcx_tofw_rx_cfg_t;

static inline uint64_t CAVM_TOFCX_TOFW_RX_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TOFW_RX_CFG(uint64_t a)
{
    if (a<=3)
        return 0x87e042e01000ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_TOFW_RX_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TOFW_RX_CFG(a) cavm_tofcx_tofw_rx_cfg_t
#define bustype_CAVM_TOFCX_TOFW_RX_CFG(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TOFW_RX_CFG(a) "TOFCX_TOFW_RX_CFG"
#define busnum_CAVM_TOFCX_TOFW_RX_CFG(a) (a)
#define arguments_CAVM_TOFCX_TOFW_RX_CFG(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_tofw_rx_ctrl
 *
 * TOFC TOFW RX Control Register
 */
union cavm_tofcx_tofw_rx_ctrl
{
    uint64_t u;
    struct cavm_tofcx_tofw_rx_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t sproc_start_done      : 1;  /**< [  5:  5](RO/H) Set to 0 on 0-\>1 transition on [SAMPLE_START]. Hardware sets to 1 once all dynamic
                                                                 configuration is loaded into filter blocks. */
        uint64_t rx_idle               : 1;  /**< [  4:  4](RO/H) [RX_IDLE]=1 indicates RX side has finished processing all
                                                                 symbols [RX_IDLE] = 1. */
        uint64_t reserved_2_3          : 2;
        uint64_t sample_start          : 1;  /**< [  1:  1](R/W/H) Startup TOFC engine. On 0-\>1 transition, TOFW RX fetches dynamic configuration
                                                                 information from memory and prepares for symbol data from TOFM.
                                                                 * On 0-\>1 transition, hardware clears [SPROC_START_DONE].
                                                                 * When dynamic configuration is loaded for all enabled filters, hardware
                                                                 sets [SPROC_START_DONE]. A filter is enabled when
                                                                 TOFC()_TOFW_RX_SPROC_CFG()[SCSF_ENA], where {b} is the filter index. */
        uint64_t clock_gating_disable  : 1;  /**< [  0:  0](R/W) When set, disables clock gating. Note - Clock gating is done to save power on
                                                                 filter paths that are not used depending on static configuration */
#else /* Word 0 - Little Endian */
        uint64_t clock_gating_disable  : 1;  /**< [  0:  0](R/W) When set, disables clock gating. Note - Clock gating is done to save power on
                                                                 filter paths that are not used depending on static configuration */
        uint64_t sample_start          : 1;  /**< [  1:  1](R/W/H) Startup TOFC engine. On 0-\>1 transition, TOFW RX fetches dynamic configuration
                                                                 information from memory and prepares for symbol data from TOFM.
                                                                 * On 0-\>1 transition, hardware clears [SPROC_START_DONE].
                                                                 * When dynamic configuration is loaded for all enabled filters, hardware
                                                                 sets [SPROC_START_DONE]. A filter is enabled when
                                                                 TOFC()_TOFW_RX_SPROC_CFG()[SCSF_ENA], where {b} is the filter index. */
        uint64_t reserved_2_3          : 2;
        uint64_t rx_idle               : 1;  /**< [  4:  4](RO/H) [RX_IDLE]=1 indicates RX side has finished processing all
                                                                 symbols [RX_IDLE] = 1. */
        uint64_t sproc_start_done      : 1;  /**< [  5:  5](RO/H) Set to 0 on 0-\>1 transition on [SAMPLE_START]. Hardware sets to 1 once all dynamic
                                                                 configuration is loaded into filter blocks. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tofw_rx_ctrl_s cn; */
};
typedef union cavm_tofcx_tofw_rx_ctrl cavm_tofcx_tofw_rx_ctrl_t;

static inline uint64_t CAVM_TOFCX_TOFW_RX_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TOFW_RX_CTRL(uint64_t a)
{
    if (a<=3)
        return 0x87e042e01080ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_TOFW_RX_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TOFW_RX_CTRL(a) cavm_tofcx_tofw_rx_ctrl_t
#define bustype_CAVM_TOFCX_TOFW_RX_CTRL(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TOFW_RX_CTRL(a) "TOFCX_TOFW_RX_CTRL"
#define busnum_CAVM_TOFCX_TOFW_RX_CTRL(a) (a)
#define arguments_CAVM_TOFCX_TOFW_RX_CTRL(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_tofw_rx_dma_jd_addr#
 *
 * TOFC TOFW RX DMA Job Desriptor Address Register
 */
union cavm_tofcx_tofw_rx_dma_jd_addrx
{
    uint64_t u;
    struct cavm_tofcx_tofw_rx_dma_jd_addrx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t buf_addr              : 53; /**< [ 52:  0](R/W) Start of JD buffer storage for stream {b}. Units = 8 bits (byte).
                                                                 Required that JD be aligned to 64-bit word ([BUF_ADDR]\<2:0\> == 0). */
#else /* Word 0 - Little Endian */
        uint64_t buf_addr              : 53; /**< [ 52:  0](R/W) Start of JD buffer storage for stream {b}. Units = 8 bits (byte).
                                                                 Required that JD be aligned to 64-bit word ([BUF_ADDR]\<2:0\> == 0). */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tofw_rx_dma_jd_addrx_s cn; */
};
typedef union cavm_tofcx_tofw_rx_dma_jd_addrx cavm_tofcx_tofw_rx_dma_jd_addrx_t;

static inline uint64_t CAVM_TOFCX_TOFW_RX_DMA_JD_ADDRX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TOFW_RX_DMA_JD_ADDRX(uint64_t a, uint64_t b)
{
    if ((a<=3) && (b<=11))
        return 0x87e042e01280ll + 0x80000ll * ((a) & 0x3) + 8ll * ((b) & 0xf);
    __cavm_csr_fatal("TOFCX_TOFW_RX_DMA_JD_ADDRX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TOFW_RX_DMA_JD_ADDRX(a,b) cavm_tofcx_tofw_rx_dma_jd_addrx_t
#define bustype_CAVM_TOFCX_TOFW_RX_DMA_JD_ADDRX(a,b) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TOFW_RX_DMA_JD_ADDRX(a,b) "TOFCX_TOFW_RX_DMA_JD_ADDRX"
#define busnum_CAVM_TOFCX_TOFW_RX_DMA_JD_ADDRX(a,b) (a)
#define arguments_CAVM_TOFCX_TOFW_RX_DMA_JD_ADDRX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) tofc#_tofw_rx_dma_jd_cfg#
 *
 * TOFC TOFW RX DMA Job Desriptor Configuration Register
 * TOFW RX DMA job descriptor configuration for stream {b}.
 */
union cavm_tofcx_tofw_rx_dma_jd_cfgx
{
    uint64_t u;
    struct cavm_tofcx_tofw_rx_dma_jd_cfgx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t jca_ena               : 16; /**< [ 63: 48](R/W) JCA enable bit per antenna:
                                                                 0 = don't send JCA message on symbol completion.
                                                                 1 = send JCA message on completion. */
        uint64_t reserved_33_47        : 15;
        uint64_t jd_tmem               : 1;  /**< [ 32: 32](R/W) Job descriptor target memory:
                                                                 0 = SMEM.
                                                                 1 = LLC/DRAM. */
        uint64_t buf_size              : 16; /**< [ 31: 16](R/W) Size of memory allocated to each antenna within the stream's JD ring.
                                                                 Units = 64 bits (8 bytes). */
        uint64_t reserved_8_15         : 8;
        uint64_t jd_size               : 8;  /**< [  7:  0](R/W) Size of each JD entry. Units = 64 bits (8 bytes). */
#else /* Word 0 - Little Endian */
        uint64_t jd_size               : 8;  /**< [  7:  0](R/W) Size of each JD entry. Units = 64 bits (8 bytes). */
        uint64_t reserved_8_15         : 8;
        uint64_t buf_size              : 16; /**< [ 31: 16](R/W) Size of memory allocated to each antenna within the stream's JD ring.
                                                                 Units = 64 bits (8 bytes). */
        uint64_t jd_tmem               : 1;  /**< [ 32: 32](R/W) Job descriptor target memory:
                                                                 0 = SMEM.
                                                                 1 = LLC/DRAM. */
        uint64_t reserved_33_47        : 15;
        uint64_t jca_ena               : 16; /**< [ 63: 48](R/W) JCA enable bit per antenna:
                                                                 0 = don't send JCA message on symbol completion.
                                                                 1 = send JCA message on completion. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tofw_rx_dma_jd_cfgx_s cn; */
};
typedef union cavm_tofcx_tofw_rx_dma_jd_cfgx cavm_tofcx_tofw_rx_dma_jd_cfgx_t;

static inline uint64_t CAVM_TOFCX_TOFW_RX_DMA_JD_CFGX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TOFW_RX_DMA_JD_CFGX(uint64_t a, uint64_t b)
{
    if ((a<=3) && (b<=11))
        return 0x87e042e01300ll + 0x80000ll * ((a) & 0x3) + 8ll * ((b) & 0xf);
    __cavm_csr_fatal("TOFCX_TOFW_RX_DMA_JD_CFGX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TOFW_RX_DMA_JD_CFGX(a,b) cavm_tofcx_tofw_rx_dma_jd_cfgx_t
#define bustype_CAVM_TOFCX_TOFW_RX_DMA_JD_CFGX(a,b) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TOFW_RX_DMA_JD_CFGX(a,b) "TOFCX_TOFW_RX_DMA_JD_CFGX"
#define busnum_CAVM_TOFCX_TOFW_RX_DMA_JD_CFGX(a,b) (a)
#define arguments_CAVM_TOFCX_TOFW_RX_DMA_JD_CFGX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) tofc#_tofw_rx_dma_mb_addr#
 *
 * TOFC TOFW RX DMA Memory Buffer Address Register
 */
union cavm_tofcx_tofw_rx_dma_mb_addrx
{
    uint64_t u;
    struct cavm_tofcx_tofw_rx_dma_mb_addrx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_21_63        : 43;
        uint64_t buf_addr              : 21; /**< [ 20:  0](R/W) Start of memory buffer storage for stream {b}. Units = 256-bit (32-byte) addresses. */
#else /* Word 0 - Little Endian */
        uint64_t buf_addr              : 21; /**< [ 20:  0](R/W) Start of memory buffer storage for stream {b}. Units = 256-bit (32-byte) addresses. */
        uint64_t reserved_21_63        : 43;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tofw_rx_dma_mb_addrx_s cn; */
};
typedef union cavm_tofcx_tofw_rx_dma_mb_addrx cavm_tofcx_tofw_rx_dma_mb_addrx_t;

static inline uint64_t CAVM_TOFCX_TOFW_RX_DMA_MB_ADDRX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TOFW_RX_DMA_MB_ADDRX(uint64_t a, uint64_t b)
{
    if ((a<=3) && (b<=11))
        return 0x87e042e01180ll + 0x80000ll * ((a) & 0x3) + 8ll * ((b) & 0xf);
    __cavm_csr_fatal("TOFCX_TOFW_RX_DMA_MB_ADDRX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TOFW_RX_DMA_MB_ADDRX(a,b) cavm_tofcx_tofw_rx_dma_mb_addrx_t
#define bustype_CAVM_TOFCX_TOFW_RX_DMA_MB_ADDRX(a,b) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TOFW_RX_DMA_MB_ADDRX(a,b) "TOFCX_TOFW_RX_DMA_MB_ADDRX"
#define busnum_CAVM_TOFCX_TOFW_RX_DMA_MB_ADDRX(a,b) (a)
#define arguments_CAVM_TOFCX_TOFW_RX_DMA_MB_ADDRX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) tofc#_tofw_rx_dma_mb_cfg#
 *
 * TOFC TOFW RX DMA Memory Buffer Configuration Register
 */
union cavm_tofcx_tofw_rx_dma_mb_cfgx
{
    uint64_t u;
    struct cavm_tofcx_tofw_rx_dma_mb_cfgx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t buf_size              : 16; /**< [ 15:  0](R/W) Size of memory buffer for each antenna in memory buffer for stream {b}.
                                                                 Units = 256 bits (32-bytes). */
#else /* Word 0 - Little Endian */
        uint64_t buf_size              : 16; /**< [ 15:  0](R/W) Size of memory buffer for each antenna in memory buffer for stream {b}.
                                                                 Units = 256 bits (32-bytes). */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tofw_rx_dma_mb_cfgx_s cn; */
};
typedef union cavm_tofcx_tofw_rx_dma_mb_cfgx cavm_tofcx_tofw_rx_dma_mb_cfgx_t;

static inline uint64_t CAVM_TOFCX_TOFW_RX_DMA_MB_CFGX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TOFW_RX_DMA_MB_CFGX(uint64_t a, uint64_t b)
{
    if ((a<=3) && (b<=11))
        return 0x87e042e01200ll + 0x80000ll * ((a) & 0x3) + 8ll * ((b) & 0xf);
    __cavm_csr_fatal("TOFCX_TOFW_RX_DMA_MB_CFGX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TOFW_RX_DMA_MB_CFGX(a,b) cavm_tofcx_tofw_rx_dma_mb_cfgx_t
#define bustype_CAVM_TOFCX_TOFW_RX_DMA_MB_CFGX(a,b) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TOFW_RX_DMA_MB_CFGX(a,b) "TOFCX_TOFW_RX_DMA_MB_CFGX"
#define busnum_CAVM_TOFCX_TOFW_RX_DMA_MB_CFGX(a,b) (a)
#define arguments_CAVM_TOFCX_TOFW_RX_DMA_MB_CFGX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) tofc#_tofw_rx_dma_req_stat#
 *
 * TOFC RX Write Request Count Register
 * Number of write requests sent, per-stream.
 */
union cavm_tofcx_tofw_rx_dma_req_statx
{
    uint64_t u;
    struct cavm_tofcx_tofw_rx_dma_req_statx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t stat                  : 48; /**< [ 47:  0](R/W/H) The counter value. Wraps to zero at 2^48. */
#else /* Word 0 - Little Endian */
        uint64_t stat                  : 48; /**< [ 47:  0](R/W/H) The counter value. Wraps to zero at 2^48. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tofw_rx_dma_req_statx_s cn; */
};
typedef union cavm_tofcx_tofw_rx_dma_req_statx cavm_tofcx_tofw_rx_dma_req_statx_t;

static inline uint64_t CAVM_TOFCX_TOFW_RX_DMA_REQ_STATX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TOFW_RX_DMA_REQ_STATX(uint64_t a, uint64_t b)
{
    if ((a<=3) && (b<=11))
        return 0x87e042e02d80ll + 0x80000ll * ((a) & 0x3) + 8ll * ((b) & 0xf);
    __cavm_csr_fatal("TOFCX_TOFW_RX_DMA_REQ_STATX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TOFW_RX_DMA_REQ_STATX(a,b) cavm_tofcx_tofw_rx_dma_req_statx_t
#define bustype_CAVM_TOFCX_TOFW_RX_DMA_REQ_STATX(a,b) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TOFW_RX_DMA_REQ_STATX(a,b) "TOFCX_TOFW_RX_DMA_REQ_STATX"
#define busnum_CAVM_TOFCX_TOFW_RX_DMA_REQ_STATX(a,b) (a)
#define arguments_CAVM_TOFCX_TOFW_RX_DMA_REQ_STATX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) tofc#_tofw_rx_dma_sym_stat#
 *
 * TOFC RX Symbols DMAd Count Register
 * Number of symbols sent to memory, per-stream. Increments for every antenna in the stream.
 */
union cavm_tofcx_tofw_rx_dma_sym_statx
{
    uint64_t u;
    struct cavm_tofcx_tofw_rx_dma_sym_statx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t stat                  : 48; /**< [ 47:  0](R/W/H) The counter value. Wraps to zero at 2^48. */
#else /* Word 0 - Little Endian */
        uint64_t stat                  : 48; /**< [ 47:  0](R/W/H) The counter value. Wraps to zero at 2^48. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tofw_rx_dma_sym_statx_s cn; */
};
typedef union cavm_tofcx_tofw_rx_dma_sym_statx cavm_tofcx_tofw_rx_dma_sym_statx_t;

static inline uint64_t CAVM_TOFCX_TOFW_RX_DMA_SYM_STATX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TOFW_RX_DMA_SYM_STATX(uint64_t a, uint64_t b)
{
    if ((a<=3) && (b<=11))
        return 0x87e042e02e00ll + 0x80000ll * ((a) & 0x3) + 8ll * ((b) & 0xf);
    __cavm_csr_fatal("TOFCX_TOFW_RX_DMA_SYM_STATX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TOFW_RX_DMA_SYM_STATX(a,b) cavm_tofcx_tofw_rx_dma_sym_statx_t
#define bustype_CAVM_TOFCX_TOFW_RX_DMA_SYM_STATX(a,b) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TOFW_RX_DMA_SYM_STATX(a,b) "TOFCX_TOFW_RX_DMA_SYM_STATX"
#define busnum_CAVM_TOFCX_TOFW_RX_DMA_SYM_STATX(a,b) (a)
#define arguments_CAVM_TOFCX_TOFW_RX_DMA_SYM_STATX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) tofc#_tofw_rx_dyn_cfg_dbg_w0#
 *
 * Per Stream TOFC TOFW RX Dynamic Configuration Word 0 Register
 * Word0 dynamic parameters for the next symbol for stream {b}. This is the data from
 * the last dynamic parameter
 * read from memory. Bits are defined in TOFC_UL_DYNAMIC_PARAM_S, w0.
 */
union cavm_tofcx_tofw_rx_dyn_cfg_dbg_w0x
{
    uint64_t u;
    struct cavm_tofcx_tofw_rx_dyn_cfg_dbg_w0x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](RO/H) Parameter data. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](RO/H) Parameter data. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tofw_rx_dyn_cfg_dbg_w0x_s cn; */
};
typedef union cavm_tofcx_tofw_rx_dyn_cfg_dbg_w0x cavm_tofcx_tofw_rx_dyn_cfg_dbg_w0x_t;

static inline uint64_t CAVM_TOFCX_TOFW_RX_DYN_CFG_DBG_W0X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TOFW_RX_DYN_CFG_DBG_W0X(uint64_t a, uint64_t b)
{
    if ((a<=3) && (b<=11))
        return 0x87e042e02b00ll + 0x80000ll * ((a) & 0x3) + 8ll * ((b) & 0xf);
    __cavm_csr_fatal("TOFCX_TOFW_RX_DYN_CFG_DBG_W0X", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TOFW_RX_DYN_CFG_DBG_W0X(a,b) cavm_tofcx_tofw_rx_dyn_cfg_dbg_w0x_t
#define bustype_CAVM_TOFCX_TOFW_RX_DYN_CFG_DBG_W0X(a,b) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TOFW_RX_DYN_CFG_DBG_W0X(a,b) "TOFCX_TOFW_RX_DYN_CFG_DBG_W0X"
#define busnum_CAVM_TOFCX_TOFW_RX_DYN_CFG_DBG_W0X(a,b) (a)
#define arguments_CAVM_TOFCX_TOFW_RX_DYN_CFG_DBG_W0X(a,b) (a),(b),-1,-1

/**
 * Register (RSL) tofc#_tofw_rx_dyn_cfg_dbg_w1#
 *
 * Per Stream TOFC TOFW RX Dynamic Configuration Word 1 Register
 * Word1 dynamic parameters for the next symbol for stream {b}. This is the data from
 * the last dynamic parameter
 * read from memory. Bits are defined in TOFC_UL_DYNAMIC_PARAM_S, w1.
 * MSB however contains the TOFC_UL_DYNAMIC_PARAM_S[FILTER_BYPASS].
 */
union cavm_tofcx_tofw_rx_dyn_cfg_dbg_w1x
{
    uint64_t u;
    struct cavm_tofcx_tofw_rx_dyn_cfg_dbg_w1x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](RO/H) Parameter data. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](RO/H) Parameter data. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tofw_rx_dyn_cfg_dbg_w1x_s cn; */
};
typedef union cavm_tofcx_tofw_rx_dyn_cfg_dbg_w1x cavm_tofcx_tofw_rx_dyn_cfg_dbg_w1x_t;

static inline uint64_t CAVM_TOFCX_TOFW_RX_DYN_CFG_DBG_W1X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TOFW_RX_DYN_CFG_DBG_W1X(uint64_t a, uint64_t b)
{
    if ((a<=3) && (b<=11))
        return 0x87e042e02b80ll + 0x80000ll * ((a) & 0x3) + 8ll * ((b) & 0xf);
    __cavm_csr_fatal("TOFCX_TOFW_RX_DYN_CFG_DBG_W1X", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TOFW_RX_DYN_CFG_DBG_W1X(a,b) cavm_tofcx_tofw_rx_dyn_cfg_dbg_w1x_t
#define bustype_CAVM_TOFCX_TOFW_RX_DYN_CFG_DBG_W1X(a,b) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TOFW_RX_DYN_CFG_DBG_W1X(a,b) "TOFCX_TOFW_RX_DYN_CFG_DBG_W1X"
#define busnum_CAVM_TOFCX_TOFW_RX_DYN_CFG_DBG_W1X(a,b) (a)
#define arguments_CAVM_TOFCX_TOFW_RX_DYN_CFG_DBG_W1X(a,b) (a),(b),-1,-1

/**
 * Register (RSL) tofc#_tofw_rx_err_act_ena
 *
 * TOFC TOFW RX Error Action Enable Register
 * Enables drop or other action, if applicable, for RX errors.
 */
union cavm_tofcx_tofw_rx_err_act_ena
{
    uint64_t u;
    struct cavm_tofcx_tofw_rx_err_act_ena_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_13_63        : 51;
        uint64_t dyn_cfg_rsp_err       : 1;  /**< [ 12: 12](R/W) Enable drop on corrupted configuration. Should always keep this set to avoid
                                                                 causing other system errors as a result of this error. */
        uint64_t dyn_cfg_underflow     : 1;  /**< [ 11: 11](R/W) Enable drop on corrupted configuration. Should always keep this set to avoid
                                                                 causing other system errors as a result of this error. */
        uint64_t reserved_8_10         : 3;
        uint64_t dma_jd_range_err      : 1;  /**< [  7:  7](R/W) Enable drop on corrupted configuration. Should always keep this set to avoid
                                                                 causing other system errors as a result of this error. */
        uint64_t dma_mb_range_err      : 1;  /**< [  6:  6](R/W) Enable drop on corrupted configuration. Should always keep this set to avoid
                                                                 causing other system errors as a result of this error. */
        uint64_t reserved_0_5          : 6;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_5          : 6;
        uint64_t dma_mb_range_err      : 1;  /**< [  6:  6](R/W) Enable drop on corrupted configuration. Should always keep this set to avoid
                                                                 causing other system errors as a result of this error. */
        uint64_t dma_jd_range_err      : 1;  /**< [  7:  7](R/W) Enable drop on corrupted configuration. Should always keep this set to avoid
                                                                 causing other system errors as a result of this error. */
        uint64_t reserved_8_10         : 3;
        uint64_t dyn_cfg_underflow     : 1;  /**< [ 11: 11](R/W) Enable drop on corrupted configuration. Should always keep this set to avoid
                                                                 causing other system errors as a result of this error. */
        uint64_t dyn_cfg_rsp_err       : 1;  /**< [ 12: 12](R/W) Enable drop on corrupted configuration. Should always keep this set to avoid
                                                                 causing other system errors as a result of this error. */
        uint64_t reserved_13_63        : 51;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tofw_rx_err_act_ena_s cn; */
};
typedef union cavm_tofcx_tofw_rx_err_act_ena cavm_tofcx_tofw_rx_err_act_ena_t;

static inline uint64_t CAVM_TOFCX_TOFW_RX_ERR_ACT_ENA(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TOFW_RX_ERR_ACT_ENA(uint64_t a)
{
    if (a<=3)
        return 0x87e042e01088ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_TOFW_RX_ERR_ACT_ENA", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TOFW_RX_ERR_ACT_ENA(a) cavm_tofcx_tofw_rx_err_act_ena_t
#define bustype_CAVM_TOFCX_TOFW_RX_ERR_ACT_ENA(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TOFW_RX_ERR_ACT_ENA(a) "TOFCX_TOFW_RX_ERR_ACT_ENA"
#define busnum_CAVM_TOFCX_TOFW_RX_ERR_ACT_ENA(a) (a)
#define arguments_CAVM_TOFCX_TOFW_RX_ERR_ACT_ENA(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_tofw_rx_err_dbg_0
 *
 * TOFC TOFW RX Error Debug 0 Register
 * Provides information for errors reported in TOFC()_TOFW_RX_INT.
 */
union cavm_tofcx_tofw_rx_err_dbg_0
{
    uint64_t u;
    struct cavm_tofcx_tofw_rx_err_dbg_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_60_63        : 4;
        uint64_t dyn_cfg_rsp_err       : 12; /**< [ 59: 48](R/W1C/H) Per-stream indication that the stream saw a dynamic configuration response error and set
                                                                 TOFC()_TOFW_RX_INT[DYN_CFG_RSP_ERR]. [DYN_CFG_RSP_ERR] holds the event
                                                                 until reset or software writes a 1 to the bit. */
        uint64_t dyn_cfg_underflow     : 12; /**< [ 47: 36](R/W1C/H) Per-stream indication that the stream saw a dynamic configuration underflow and set
                                                                 TOFC()_TOFW_RX_INT[DYN_CFG_UNDERFLOW]. [DYN_CFG_UNDERFLOW] holds the event
                                                                 until reset or software writes a 1 to the bit. */
        uint64_t sproc_lane_overflow   : 12; /**< [ 35: 24](R/W1C/H) Per-stream indication that the stream set TOFC()_TOFW_RX_INT[SPROC_LANE_OVERFLOW].
                                                                 [SPROC_LANE_OVERFLOW] holds the event
                                                                 until reset or software writes a 1 to the bit. */
        uint64_t symbol_size_miscompare : 12;/**< [ 23: 12](R/W1C/H) Per-stream indication that the stream set
                                                                 TOFC()_TOFW_RX_INT[SYMBOL_SIZE_MISCOMPARE]. [SYMBOL_SIZE_MISCOMPARE] holds the
                                                                 event
                                                                 until reset or software writes a 1 to the bit. */
        uint64_t scsf_symbol_sync      : 12; /**< [ 11:  0](R/W1C/H) Per-stream indication that the stream set TOFC()_TOFW_RX_INT[SCSF_SYMBOL_SYNC].
                                                                 [SCSF_SYMBOL_SYNC] holds the event
                                                                 until reset or software writes a 1 to the bit. */
#else /* Word 0 - Little Endian */
        uint64_t scsf_symbol_sync      : 12; /**< [ 11:  0](R/W1C/H) Per-stream indication that the stream set TOFC()_TOFW_RX_INT[SCSF_SYMBOL_SYNC].
                                                                 [SCSF_SYMBOL_SYNC] holds the event
                                                                 until reset or software writes a 1 to the bit. */
        uint64_t symbol_size_miscompare : 12;/**< [ 23: 12](R/W1C/H) Per-stream indication that the stream set
                                                                 TOFC()_TOFW_RX_INT[SYMBOL_SIZE_MISCOMPARE]. [SYMBOL_SIZE_MISCOMPARE] holds the
                                                                 event
                                                                 until reset or software writes a 1 to the bit. */
        uint64_t sproc_lane_overflow   : 12; /**< [ 35: 24](R/W1C/H) Per-stream indication that the stream set TOFC()_TOFW_RX_INT[SPROC_LANE_OVERFLOW].
                                                                 [SPROC_LANE_OVERFLOW] holds the event
                                                                 until reset or software writes a 1 to the bit. */
        uint64_t dyn_cfg_underflow     : 12; /**< [ 47: 36](R/W1C/H) Per-stream indication that the stream saw a dynamic configuration underflow and set
                                                                 TOFC()_TOFW_RX_INT[DYN_CFG_UNDERFLOW]. [DYN_CFG_UNDERFLOW] holds the event
                                                                 until reset or software writes a 1 to the bit. */
        uint64_t dyn_cfg_rsp_err       : 12; /**< [ 59: 48](R/W1C/H) Per-stream indication that the stream saw a dynamic configuration response error and set
                                                                 TOFC()_TOFW_RX_INT[DYN_CFG_RSP_ERR]. [DYN_CFG_RSP_ERR] holds the event
                                                                 until reset or software writes a 1 to the bit. */
        uint64_t reserved_60_63        : 4;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tofw_rx_err_dbg_0_s cn; */
};
typedef union cavm_tofcx_tofw_rx_err_dbg_0 cavm_tofcx_tofw_rx_err_dbg_0_t;

static inline uint64_t CAVM_TOFCX_TOFW_RX_ERR_DBG_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TOFW_RX_ERR_DBG_0(uint64_t a)
{
    if (a<=3)
        return 0x87e042e02cf0ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_TOFW_RX_ERR_DBG_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TOFW_RX_ERR_DBG_0(a) cavm_tofcx_tofw_rx_err_dbg_0_t
#define bustype_CAVM_TOFCX_TOFW_RX_ERR_DBG_0(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TOFW_RX_ERR_DBG_0(a) "TOFCX_TOFW_RX_ERR_DBG_0"
#define busnum_CAVM_TOFCX_TOFW_RX_ERR_DBG_0(a) (a)
#define arguments_CAVM_TOFCX_TOFW_RX_ERR_DBG_0(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_tofw_rx_err_dbg_1
 *
 * TOFC TOFW RX Error Debug 1 Register
 * Provides information for errors reported in TOFC()_TOFW_RX_INT.
 */
union cavm_tofcx_tofw_rx_err_dbg_1
{
    uint64_t u;
    struct cavm_tofcx_tofw_rx_err_dbg_1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_40_63        : 24;
        uint64_t dma_jd_range_err      : 12; /**< [ 39: 28](R/W1C/H) Per-stream indication that the stream set TOFC()_TOFW_RX_INT[DMA_JD_RANGE_ERR].
                                                                 [DMA_JD_RANGE_ERR] holds the event
                                                                 until reset or software writes a 1 to the bit. */
        uint64_t dma_mb_range_err      : 12; /**< [ 27: 16](R/W1C/H) Per-stream indication that the stream set TOFC()_TOFW_RX_INT[DMA_MB_RANGE_ERR].
                                                                 [DMA_MB_RANGE_ERR] holds the event
                                                                 until reset or software writes a 1 to the bit. */
        uint64_t dma_lane_req_overflow : 16; /**< [ 15:  0](R/W1C/H) Per-stream indication that the stream set TOFC()_TOFW_RX_INT[DMA_LANE_REQ_OVERFLOW].
                                                                 [DMA_LANE_REQ_OVERFLOW] holds the event
                                                                 until reset or software writes a 1 to the bit. */
#else /* Word 0 - Little Endian */
        uint64_t dma_lane_req_overflow : 16; /**< [ 15:  0](R/W1C/H) Per-stream indication that the stream set TOFC()_TOFW_RX_INT[DMA_LANE_REQ_OVERFLOW].
                                                                 [DMA_LANE_REQ_OVERFLOW] holds the event
                                                                 until reset or software writes a 1 to the bit. */
        uint64_t dma_mb_range_err      : 12; /**< [ 27: 16](R/W1C/H) Per-stream indication that the stream set TOFC()_TOFW_RX_INT[DMA_MB_RANGE_ERR].
                                                                 [DMA_MB_RANGE_ERR] holds the event
                                                                 until reset or software writes a 1 to the bit. */
        uint64_t dma_jd_range_err      : 12; /**< [ 39: 28](R/W1C/H) Per-stream indication that the stream set TOFC()_TOFW_RX_INT[DMA_JD_RANGE_ERR].
                                                                 [DMA_JD_RANGE_ERR] holds the event
                                                                 until reset or software writes a 1 to the bit. */
        uint64_t reserved_40_63        : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tofw_rx_err_dbg_1_s cn; */
};
typedef union cavm_tofcx_tofw_rx_err_dbg_1 cavm_tofcx_tofw_rx_err_dbg_1_t;

static inline uint64_t CAVM_TOFCX_TOFW_RX_ERR_DBG_1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TOFW_RX_ERR_DBG_1(uint64_t a)
{
    if (a<=3)
        return 0x87e042e02cf8ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_TOFW_RX_ERR_DBG_1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TOFW_RX_ERR_DBG_1(a) cavm_tofcx_tofw_rx_err_dbg_1_t
#define bustype_CAVM_TOFCX_TOFW_RX_ERR_DBG_1(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TOFW_RX_ERR_DBG_1(a) "TOFCX_TOFW_RX_ERR_DBG_1"
#define busnum_CAVM_TOFCX_TOFW_RX_ERR_DBG_1(a) (a)
#define arguments_CAVM_TOFCX_TOFW_RX_ERR_DBG_1(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_tofw_rx_int
 *
 * TOFC Interrupt Register
 * These registers record interrupts due to different error events. Unless otherwise
 * noted, errors are fatal and require reseting TOFC.
 */
union cavm_tofcx_tofw_rx_int
{
    uint64_t u;
    struct cavm_tofcx_tofw_rx_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_13_63        : 51;
        uint64_t dyn_cfg_rsp_err       : 1;  /**< [ 12: 12](R/W1C/H) The read response for dynamic configuration shows a fatal error or NXM error.
                                                                 Read data is corrupted and the lane cannot continue. Lanes that see this drop
                                                                 the symbol and all subsequent symbols until reset. Error is detected in TX and also
                                                                 reported in TOFC()_TOFW_TX_INT[GAA_RD_ERR_FAT] and TOFC()_TOFW_TX_INT[GAA_RD_NXM]. */
        uint64_t dyn_cfg_underflow     : 1;  /**< [ 11: 11](R/W1C/H) Sample data is starting before required dynamic configuration is available.
                                                                 Dynamic configuration must be returned from memory before sample data is
                                                                 processed. Lanes that see this drop will drop the symbol and all subsequent symbols until reset. */
        uint64_t sproc_lane_overflow   : 1;  /**< [ 10: 10](R/W1C/H) Symbol processor lane sample FIFO overflow. FIFO before upsample is receiving sample data
                                                                 faster than upsampler is processing.
                                                                 Caused by improper configuration of TOFC()_TOFW_RX_SPROC_CFG()[UPSAMPLE_SEL]. */
        uint64_t symbol_size_miscompare : 1; /**< [  9:  9](R/W1C/H) End of Symbol from SCSF Filter output does not match with expected End of Symbol based
                                                                 on TOFC_UL_DYNAMIC_PARAM_S[SYMBOL_SIZE] and TOFC_UL_DYNAMIC_PARAM_S[DOWNSAMPLE_SEL] */
        uint64_t scsf_symbol_sync      : 1;  /**< [  8:  8](R/W1C/H) End of Symbol from SCSF Filter input does not match with expected End of Symbol based
                                                                 on TOFC_UL_DYNAMIC_PARAM_S[SYMBOL_SIZE] and TOFC_UL_DYNAMIC_PARAM_S[DOWNSAMPLE_SEL] */
        uint64_t dma_jd_range_err      : 1;  /**< [  7:  7](R/W1C/H) Symbol job descriptor went beyond TOFC()_TOFW_RX_DMA_JD_CFG()[BUF_SIZE]
                                                                 ({b} = stream index). JCA request was dropped.
                                                                 Caused by improper combination of TOFC()_TOFW_RX_DMA_JD_CFG()[BUF_SIZE],
                                                                 TOFC_UL_DYNAMIC_PARAM_S[JD_IDX], and TOFC()_TOFW_RX_DMA_JD_CFG()[JD_SIZE]. */
        uint64_t dma_mb_range_err      : 1;  /**< [  6:  6](R/W1C/H) Symbol DMA went beyond TOFC()_TOFW_RX_DMA_MB_CFG()[BUF_SIZE] ({b} = stream
                                                                 index). Write request was dropped.
                                                                 Caused by improper combination of
                                                                 TOFC()_TOFW_RX_DMA_MB_CFG()[BUF_SIZE],
                                                                 TOFC_UL_DYNAMIC_PARAM_S[SYMBOL_WRITE_OFFSET],
                                                                 TOFC_UL_DYNAMIC_PARAM_S[DOWNSAMPLE_SEL], and symbol size. */
        uint64_t dma_lane_req_overflow : 1;  /**< [  5:  5](R/W1C/H) DMA lane request overflow. Sum of multiple lane requests required more than
                                                                 one flit per cycle. Transaction was dropped. Caused by improper
                                                                 configuration of TOFC_UL_DYNAMIC_PARAM_S[DOWNSAMPLE_SEL]. */
        uint64_t dma_rxb_overflow      : 1;  /**< [  4:  4](R/W1C/H) RX bulk FIFO overflow. Path to GHB cannot keep up with sample data coming from filter downsampler. */
        uint64_t reserved_3            : 1;
        uint64_t gaa_wr_nxm            : 1;  /**< [  2:  2](R/W1C/H) Write request produced NXM error response. Write request address exceeded SMEM size. */
        uint64_t gaa_wr_fat            : 1;  /**< [  1:  1](R/W1C/H) Write request produced fatal error response. */
        uint64_t gaa_wr_nfat           : 1;  /**< [  0:  0](R/W1C/H) Write request produced non-fatal error response. Error is non-fatal. */
#else /* Word 0 - Little Endian */
        uint64_t gaa_wr_nfat           : 1;  /**< [  0:  0](R/W1C/H) Write request produced non-fatal error response. Error is non-fatal. */
        uint64_t gaa_wr_fat            : 1;  /**< [  1:  1](R/W1C/H) Write request produced fatal error response. */
        uint64_t gaa_wr_nxm            : 1;  /**< [  2:  2](R/W1C/H) Write request produced NXM error response. Write request address exceeded SMEM size. */
        uint64_t reserved_3            : 1;
        uint64_t dma_rxb_overflow      : 1;  /**< [  4:  4](R/W1C/H) RX bulk FIFO overflow. Path to GHB cannot keep up with sample data coming from filter downsampler. */
        uint64_t dma_lane_req_overflow : 1;  /**< [  5:  5](R/W1C/H) DMA lane request overflow. Sum of multiple lane requests required more than
                                                                 one flit per cycle. Transaction was dropped. Caused by improper
                                                                 configuration of TOFC_UL_DYNAMIC_PARAM_S[DOWNSAMPLE_SEL]. */
        uint64_t dma_mb_range_err      : 1;  /**< [  6:  6](R/W1C/H) Symbol DMA went beyond TOFC()_TOFW_RX_DMA_MB_CFG()[BUF_SIZE] ({b} = stream
                                                                 index). Write request was dropped.
                                                                 Caused by improper combination of
                                                                 TOFC()_TOFW_RX_DMA_MB_CFG()[BUF_SIZE],
                                                                 TOFC_UL_DYNAMIC_PARAM_S[SYMBOL_WRITE_OFFSET],
                                                                 TOFC_UL_DYNAMIC_PARAM_S[DOWNSAMPLE_SEL], and symbol size. */
        uint64_t dma_jd_range_err      : 1;  /**< [  7:  7](R/W1C/H) Symbol job descriptor went beyond TOFC()_TOFW_RX_DMA_JD_CFG()[BUF_SIZE]
                                                                 ({b} = stream index). JCA request was dropped.
                                                                 Caused by improper combination of TOFC()_TOFW_RX_DMA_JD_CFG()[BUF_SIZE],
                                                                 TOFC_UL_DYNAMIC_PARAM_S[JD_IDX], and TOFC()_TOFW_RX_DMA_JD_CFG()[JD_SIZE]. */
        uint64_t scsf_symbol_sync      : 1;  /**< [  8:  8](R/W1C/H) End of Symbol from SCSF Filter input does not match with expected End of Symbol based
                                                                 on TOFC_UL_DYNAMIC_PARAM_S[SYMBOL_SIZE] and TOFC_UL_DYNAMIC_PARAM_S[DOWNSAMPLE_SEL] */
        uint64_t symbol_size_miscompare : 1; /**< [  9:  9](R/W1C/H) End of Symbol from SCSF Filter output does not match with expected End of Symbol based
                                                                 on TOFC_UL_DYNAMIC_PARAM_S[SYMBOL_SIZE] and TOFC_UL_DYNAMIC_PARAM_S[DOWNSAMPLE_SEL] */
        uint64_t sproc_lane_overflow   : 1;  /**< [ 10: 10](R/W1C/H) Symbol processor lane sample FIFO overflow. FIFO before upsample is receiving sample data
                                                                 faster than upsampler is processing.
                                                                 Caused by improper configuration of TOFC()_TOFW_RX_SPROC_CFG()[UPSAMPLE_SEL]. */
        uint64_t dyn_cfg_underflow     : 1;  /**< [ 11: 11](R/W1C/H) Sample data is starting before required dynamic configuration is available.
                                                                 Dynamic configuration must be returned from memory before sample data is
                                                                 processed. Lanes that see this drop will drop the symbol and all subsequent symbols until reset. */
        uint64_t dyn_cfg_rsp_err       : 1;  /**< [ 12: 12](R/W1C/H) The read response for dynamic configuration shows a fatal error or NXM error.
                                                                 Read data is corrupted and the lane cannot continue. Lanes that see this drop
                                                                 the symbol and all subsequent symbols until reset. Error is detected in TX and also
                                                                 reported in TOFC()_TOFW_TX_INT[GAA_RD_ERR_FAT] and TOFC()_TOFW_TX_INT[GAA_RD_NXM]. */
        uint64_t reserved_13_63        : 51;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tofw_rx_int_s cn; */
};
typedef union cavm_tofcx_tofw_rx_int cavm_tofcx_tofw_rx_int_t;

static inline uint64_t CAVM_TOFCX_TOFW_RX_INT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TOFW_RX_INT(uint64_t a)
{
    if (a<=3)
        return 0x87e042e00220ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_TOFW_RX_INT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TOFW_RX_INT(a) cavm_tofcx_tofw_rx_int_t
#define bustype_CAVM_TOFCX_TOFW_RX_INT(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TOFW_RX_INT(a) "TOFCX_TOFW_RX_INT"
#define busnum_CAVM_TOFCX_TOFW_RX_INT(a) (a)
#define arguments_CAVM_TOFCX_TOFW_RX_INT(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_tofw_rx_int_ena_w1c
 *
 * TOFC Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_tofcx_tofw_rx_int_ena_w1c
{
    uint64_t u;
    struct cavm_tofcx_tofw_rx_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_13_63        : 51;
        uint64_t dyn_cfg_rsp_err       : 1;  /**< [ 12: 12](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFW_RX_INT[DYN_CFG_RSP_ERR]. */
        uint64_t dyn_cfg_underflow     : 1;  /**< [ 11: 11](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFW_RX_INT[DYN_CFG_UNDERFLOW]. */
        uint64_t sproc_lane_overflow   : 1;  /**< [ 10: 10](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFW_RX_INT[SPROC_LANE_OVERFLOW]. */
        uint64_t symbol_size_miscompare : 1; /**< [  9:  9](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFW_RX_INT[SYMBOL_SIZE_MISCOMPARE]. */
        uint64_t scsf_symbol_sync      : 1;  /**< [  8:  8](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFW_RX_INT[SCSF_SYMBOL_SYNC]. */
        uint64_t dma_jd_range_err      : 1;  /**< [  7:  7](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFW_RX_INT[DMA_JD_RANGE_ERR]. */
        uint64_t dma_mb_range_err      : 1;  /**< [  6:  6](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFW_RX_INT[DMA_MB_RANGE_ERR]. */
        uint64_t dma_lane_req_overflow : 1;  /**< [  5:  5](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFW_RX_INT[DMA_LANE_REQ_OVERFLOW]. */
        uint64_t dma_rxb_overflow      : 1;  /**< [  4:  4](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFW_RX_INT[DMA_RXB_OVERFLOW]. */
        uint64_t reserved_3            : 1;
        uint64_t gaa_wr_nxm            : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFW_RX_INT[GAA_WR_NXM]. */
        uint64_t gaa_wr_fat            : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFW_RX_INT[GAA_WR_FAT]. */
        uint64_t gaa_wr_nfat           : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFW_RX_INT[GAA_WR_NFAT]. */
#else /* Word 0 - Little Endian */
        uint64_t gaa_wr_nfat           : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFW_RX_INT[GAA_WR_NFAT]. */
        uint64_t gaa_wr_fat            : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFW_RX_INT[GAA_WR_FAT]. */
        uint64_t gaa_wr_nxm            : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFW_RX_INT[GAA_WR_NXM]. */
        uint64_t reserved_3            : 1;
        uint64_t dma_rxb_overflow      : 1;  /**< [  4:  4](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFW_RX_INT[DMA_RXB_OVERFLOW]. */
        uint64_t dma_lane_req_overflow : 1;  /**< [  5:  5](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFW_RX_INT[DMA_LANE_REQ_OVERFLOW]. */
        uint64_t dma_mb_range_err      : 1;  /**< [  6:  6](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFW_RX_INT[DMA_MB_RANGE_ERR]. */
        uint64_t dma_jd_range_err      : 1;  /**< [  7:  7](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFW_RX_INT[DMA_JD_RANGE_ERR]. */
        uint64_t scsf_symbol_sync      : 1;  /**< [  8:  8](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFW_RX_INT[SCSF_SYMBOL_SYNC]. */
        uint64_t symbol_size_miscompare : 1; /**< [  9:  9](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFW_RX_INT[SYMBOL_SIZE_MISCOMPARE]. */
        uint64_t sproc_lane_overflow   : 1;  /**< [ 10: 10](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFW_RX_INT[SPROC_LANE_OVERFLOW]. */
        uint64_t dyn_cfg_underflow     : 1;  /**< [ 11: 11](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFW_RX_INT[DYN_CFG_UNDERFLOW]. */
        uint64_t dyn_cfg_rsp_err       : 1;  /**< [ 12: 12](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFW_RX_INT[DYN_CFG_RSP_ERR]. */
        uint64_t reserved_13_63        : 51;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tofw_rx_int_ena_w1c_s cn; */
};
typedef union cavm_tofcx_tofw_rx_int_ena_w1c cavm_tofcx_tofw_rx_int_ena_w1c_t;

static inline uint64_t CAVM_TOFCX_TOFW_RX_INT_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TOFW_RX_INT_ENA_W1C(uint64_t a)
{
    if (a<=3)
        return 0x87e042e00230ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_TOFW_RX_INT_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TOFW_RX_INT_ENA_W1C(a) cavm_tofcx_tofw_rx_int_ena_w1c_t
#define bustype_CAVM_TOFCX_TOFW_RX_INT_ENA_W1C(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TOFW_RX_INT_ENA_W1C(a) "TOFCX_TOFW_RX_INT_ENA_W1C"
#define busnum_CAVM_TOFCX_TOFW_RX_INT_ENA_W1C(a) (a)
#define arguments_CAVM_TOFCX_TOFW_RX_INT_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_tofw_rx_int_ena_w1s
 *
 * TOFC Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_tofcx_tofw_rx_int_ena_w1s
{
    uint64_t u;
    struct cavm_tofcx_tofw_rx_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_13_63        : 51;
        uint64_t dyn_cfg_rsp_err       : 1;  /**< [ 12: 12](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFW_RX_INT[DYN_CFG_RSP_ERR]. */
        uint64_t dyn_cfg_underflow     : 1;  /**< [ 11: 11](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFW_RX_INT[DYN_CFG_UNDERFLOW]. */
        uint64_t sproc_lane_overflow   : 1;  /**< [ 10: 10](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFW_RX_INT[SPROC_LANE_OVERFLOW]. */
        uint64_t symbol_size_miscompare : 1; /**< [  9:  9](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFW_RX_INT[SYMBOL_SIZE_MISCOMPARE]. */
        uint64_t scsf_symbol_sync      : 1;  /**< [  8:  8](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFW_RX_INT[SCSF_SYMBOL_SYNC]. */
        uint64_t dma_jd_range_err      : 1;  /**< [  7:  7](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFW_RX_INT[DMA_JD_RANGE_ERR]. */
        uint64_t dma_mb_range_err      : 1;  /**< [  6:  6](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFW_RX_INT[DMA_MB_RANGE_ERR]. */
        uint64_t dma_lane_req_overflow : 1;  /**< [  5:  5](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFW_RX_INT[DMA_LANE_REQ_OVERFLOW]. */
        uint64_t dma_rxb_overflow      : 1;  /**< [  4:  4](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFW_RX_INT[DMA_RXB_OVERFLOW]. */
        uint64_t reserved_3            : 1;
        uint64_t gaa_wr_nxm            : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFW_RX_INT[GAA_WR_NXM]. */
        uint64_t gaa_wr_fat            : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFW_RX_INT[GAA_WR_FAT]. */
        uint64_t gaa_wr_nfat           : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFW_RX_INT[GAA_WR_NFAT]. */
#else /* Word 0 - Little Endian */
        uint64_t gaa_wr_nfat           : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFW_RX_INT[GAA_WR_NFAT]. */
        uint64_t gaa_wr_fat            : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFW_RX_INT[GAA_WR_FAT]. */
        uint64_t gaa_wr_nxm            : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFW_RX_INT[GAA_WR_NXM]. */
        uint64_t reserved_3            : 1;
        uint64_t dma_rxb_overflow      : 1;  /**< [  4:  4](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFW_RX_INT[DMA_RXB_OVERFLOW]. */
        uint64_t dma_lane_req_overflow : 1;  /**< [  5:  5](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFW_RX_INT[DMA_LANE_REQ_OVERFLOW]. */
        uint64_t dma_mb_range_err      : 1;  /**< [  6:  6](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFW_RX_INT[DMA_MB_RANGE_ERR]. */
        uint64_t dma_jd_range_err      : 1;  /**< [  7:  7](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFW_RX_INT[DMA_JD_RANGE_ERR]. */
        uint64_t scsf_symbol_sync      : 1;  /**< [  8:  8](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFW_RX_INT[SCSF_SYMBOL_SYNC]. */
        uint64_t symbol_size_miscompare : 1; /**< [  9:  9](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFW_RX_INT[SYMBOL_SIZE_MISCOMPARE]. */
        uint64_t sproc_lane_overflow   : 1;  /**< [ 10: 10](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFW_RX_INT[SPROC_LANE_OVERFLOW]. */
        uint64_t dyn_cfg_underflow     : 1;  /**< [ 11: 11](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFW_RX_INT[DYN_CFG_UNDERFLOW]. */
        uint64_t dyn_cfg_rsp_err       : 1;  /**< [ 12: 12](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFW_RX_INT[DYN_CFG_RSP_ERR]. */
        uint64_t reserved_13_63        : 51;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tofw_rx_int_ena_w1s_s cn; */
};
typedef union cavm_tofcx_tofw_rx_int_ena_w1s cavm_tofcx_tofw_rx_int_ena_w1s_t;

static inline uint64_t CAVM_TOFCX_TOFW_RX_INT_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TOFW_RX_INT_ENA_W1S(uint64_t a)
{
    if (a<=3)
        return 0x87e042e00228ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_TOFW_RX_INT_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TOFW_RX_INT_ENA_W1S(a) cavm_tofcx_tofw_rx_int_ena_w1s_t
#define bustype_CAVM_TOFCX_TOFW_RX_INT_ENA_W1S(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TOFW_RX_INT_ENA_W1S(a) "TOFCX_TOFW_RX_INT_ENA_W1S"
#define busnum_CAVM_TOFCX_TOFW_RX_INT_ENA_W1S(a) (a)
#define arguments_CAVM_TOFCX_TOFW_RX_INT_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_tofw_rx_int_psm_msg_w0
 *
 * TOFC TOFW RX Interrupt Message w0 Register
 * JCA word 0 message to send for TOFW RX related interrupts.
 */
union cavm_tofcx_tofw_rx_int_psm_msg_w0
{
    uint64_t u;
    struct cavm_tofcx_tofw_rx_int_psm_msg_w0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t w0                    : 64; /**< [ 63:  0](R/W) Word 0 of JCA message. */
#else /* Word 0 - Little Endian */
        uint64_t w0                    : 64; /**< [ 63:  0](R/W) Word 0 of JCA message. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tofw_rx_int_psm_msg_w0_s cn; */
};
typedef union cavm_tofcx_tofw_rx_int_psm_msg_w0 cavm_tofcx_tofw_rx_int_psm_msg_w0_t;

static inline uint64_t CAVM_TOFCX_TOFW_RX_INT_PSM_MSG_W0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TOFW_RX_INT_PSM_MSG_W0(uint64_t a)
{
    if (a<=3)
        return 0x87e042e00300ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_TOFW_RX_INT_PSM_MSG_W0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TOFW_RX_INT_PSM_MSG_W0(a) cavm_tofcx_tofw_rx_int_psm_msg_w0_t
#define bustype_CAVM_TOFCX_TOFW_RX_INT_PSM_MSG_W0(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TOFW_RX_INT_PSM_MSG_W0(a) "TOFCX_TOFW_RX_INT_PSM_MSG_W0"
#define busnum_CAVM_TOFCX_TOFW_RX_INT_PSM_MSG_W0(a) (a)
#define arguments_CAVM_TOFCX_TOFW_RX_INT_PSM_MSG_W0(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_tofw_rx_int_psm_msg_w1
 *
 * TOFC TOFW RX Interrupt Message w1 Register
 * JCA word 1 message to send for TOFW RX related interrupts.
 */
union cavm_tofcx_tofw_rx_int_psm_msg_w1
{
    uint64_t u;
    struct cavm_tofcx_tofw_rx_int_psm_msg_w1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t w1                    : 64; /**< [ 63:  0](R/W) Word 1 of JCA message. */
#else /* Word 0 - Little Endian */
        uint64_t w1                    : 64; /**< [ 63:  0](R/W) Word 1 of JCA message. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tofw_rx_int_psm_msg_w1_s cn; */
};
typedef union cavm_tofcx_tofw_rx_int_psm_msg_w1 cavm_tofcx_tofw_rx_int_psm_msg_w1_t;

static inline uint64_t CAVM_TOFCX_TOFW_RX_INT_PSM_MSG_W1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TOFW_RX_INT_PSM_MSG_W1(uint64_t a)
{
    if (a<=3)
        return 0x87e042e00308ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_TOFW_RX_INT_PSM_MSG_W1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TOFW_RX_INT_PSM_MSG_W1(a) cavm_tofcx_tofw_rx_int_psm_msg_w1_t
#define bustype_CAVM_TOFCX_TOFW_RX_INT_PSM_MSG_W1(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TOFW_RX_INT_PSM_MSG_W1(a) "TOFCX_TOFW_RX_INT_PSM_MSG_W1"
#define busnum_CAVM_TOFCX_TOFW_RX_INT_PSM_MSG_W1(a) (a)
#define arguments_CAVM_TOFCX_TOFW_RX_INT_PSM_MSG_W1(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_tofw_rx_int_w1s
 *
 * TOFC Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_tofcx_tofw_rx_int_w1s
{
    uint64_t u;
    struct cavm_tofcx_tofw_rx_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_13_63        : 51;
        uint64_t dyn_cfg_rsp_err       : 1;  /**< [ 12: 12](R/W1S/H) Reads or sets TOFC(0..3)_TOFW_RX_INT[DYN_CFG_RSP_ERR]. */
        uint64_t dyn_cfg_underflow     : 1;  /**< [ 11: 11](R/W1S/H) Reads or sets TOFC(0..3)_TOFW_RX_INT[DYN_CFG_UNDERFLOW]. */
        uint64_t sproc_lane_overflow   : 1;  /**< [ 10: 10](R/W1S/H) Reads or sets TOFC(0..3)_TOFW_RX_INT[SPROC_LANE_OVERFLOW]. */
        uint64_t symbol_size_miscompare : 1; /**< [  9:  9](R/W1S/H) Reads or sets TOFC(0..3)_TOFW_RX_INT[SYMBOL_SIZE_MISCOMPARE]. */
        uint64_t scsf_symbol_sync      : 1;  /**< [  8:  8](R/W1S/H) Reads or sets TOFC(0..3)_TOFW_RX_INT[SCSF_SYMBOL_SYNC]. */
        uint64_t dma_jd_range_err      : 1;  /**< [  7:  7](R/W1S/H) Reads or sets TOFC(0..3)_TOFW_RX_INT[DMA_JD_RANGE_ERR]. */
        uint64_t dma_mb_range_err      : 1;  /**< [  6:  6](R/W1S/H) Reads or sets TOFC(0..3)_TOFW_RX_INT[DMA_MB_RANGE_ERR]. */
        uint64_t dma_lane_req_overflow : 1;  /**< [  5:  5](R/W1S/H) Reads or sets TOFC(0..3)_TOFW_RX_INT[DMA_LANE_REQ_OVERFLOW]. */
        uint64_t dma_rxb_overflow      : 1;  /**< [  4:  4](R/W1S/H) Reads or sets TOFC(0..3)_TOFW_RX_INT[DMA_RXB_OVERFLOW]. */
        uint64_t reserved_3            : 1;
        uint64_t gaa_wr_nxm            : 1;  /**< [  2:  2](R/W1S/H) Reads or sets TOFC(0..3)_TOFW_RX_INT[GAA_WR_NXM]. */
        uint64_t gaa_wr_fat            : 1;  /**< [  1:  1](R/W1S/H) Reads or sets TOFC(0..3)_TOFW_RX_INT[GAA_WR_FAT]. */
        uint64_t gaa_wr_nfat           : 1;  /**< [  0:  0](R/W1S/H) Reads or sets TOFC(0..3)_TOFW_RX_INT[GAA_WR_NFAT]. */
#else /* Word 0 - Little Endian */
        uint64_t gaa_wr_nfat           : 1;  /**< [  0:  0](R/W1S/H) Reads or sets TOFC(0..3)_TOFW_RX_INT[GAA_WR_NFAT]. */
        uint64_t gaa_wr_fat            : 1;  /**< [  1:  1](R/W1S/H) Reads or sets TOFC(0..3)_TOFW_RX_INT[GAA_WR_FAT]. */
        uint64_t gaa_wr_nxm            : 1;  /**< [  2:  2](R/W1S/H) Reads or sets TOFC(0..3)_TOFW_RX_INT[GAA_WR_NXM]. */
        uint64_t reserved_3            : 1;
        uint64_t dma_rxb_overflow      : 1;  /**< [  4:  4](R/W1S/H) Reads or sets TOFC(0..3)_TOFW_RX_INT[DMA_RXB_OVERFLOW]. */
        uint64_t dma_lane_req_overflow : 1;  /**< [  5:  5](R/W1S/H) Reads or sets TOFC(0..3)_TOFW_RX_INT[DMA_LANE_REQ_OVERFLOW]. */
        uint64_t dma_mb_range_err      : 1;  /**< [  6:  6](R/W1S/H) Reads or sets TOFC(0..3)_TOFW_RX_INT[DMA_MB_RANGE_ERR]. */
        uint64_t dma_jd_range_err      : 1;  /**< [  7:  7](R/W1S/H) Reads or sets TOFC(0..3)_TOFW_RX_INT[DMA_JD_RANGE_ERR]. */
        uint64_t scsf_symbol_sync      : 1;  /**< [  8:  8](R/W1S/H) Reads or sets TOFC(0..3)_TOFW_RX_INT[SCSF_SYMBOL_SYNC]. */
        uint64_t symbol_size_miscompare : 1; /**< [  9:  9](R/W1S/H) Reads or sets TOFC(0..3)_TOFW_RX_INT[SYMBOL_SIZE_MISCOMPARE]. */
        uint64_t sproc_lane_overflow   : 1;  /**< [ 10: 10](R/W1S/H) Reads or sets TOFC(0..3)_TOFW_RX_INT[SPROC_LANE_OVERFLOW]. */
        uint64_t dyn_cfg_underflow     : 1;  /**< [ 11: 11](R/W1S/H) Reads or sets TOFC(0..3)_TOFW_RX_INT[DYN_CFG_UNDERFLOW]. */
        uint64_t dyn_cfg_rsp_err       : 1;  /**< [ 12: 12](R/W1S/H) Reads or sets TOFC(0..3)_TOFW_RX_INT[DYN_CFG_RSP_ERR]. */
        uint64_t reserved_13_63        : 51;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tofw_rx_int_w1s_s cn; */
};
typedef union cavm_tofcx_tofw_rx_int_w1s cavm_tofcx_tofw_rx_int_w1s_t;

static inline uint64_t CAVM_TOFCX_TOFW_RX_INT_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TOFW_RX_INT_W1S(uint64_t a)
{
    if (a<=3)
        return 0x87e042e00238ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_TOFW_RX_INT_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TOFW_RX_INT_W1S(a) cavm_tofcx_tofw_rx_int_w1s_t
#define bustype_CAVM_TOFCX_TOFW_RX_INT_W1S(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TOFW_RX_INT_W1S(a) "TOFCX_TOFW_RX_INT_W1S"
#define busnum_CAVM_TOFCX_TOFW_RX_INT_W1S(a) (a)
#define arguments_CAVM_TOFCX_TOFW_RX_INT_W1S(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_tofw_rx_jca_stat#
 *
 * TOFC RX JCA Message Count Register
 * Number of JCA messages sent from RX to the PSMIF, per-stream.
 */
union cavm_tofcx_tofw_rx_jca_statx
{
    uint64_t u;
    struct cavm_tofcx_tofw_rx_jca_statx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t stat                  : 48; /**< [ 47:  0](R/W/H) The counter value. Wraps to zero at 2^48. */
#else /* Word 0 - Little Endian */
        uint64_t stat                  : 48; /**< [ 47:  0](R/W/H) The counter value. Wraps to zero at 2^48. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tofw_rx_jca_statx_s cn; */
};
typedef union cavm_tofcx_tofw_rx_jca_statx cavm_tofcx_tofw_rx_jca_statx_t;

static inline uint64_t CAVM_TOFCX_TOFW_RX_JCA_STATX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TOFW_RX_JCA_STATX(uint64_t a, uint64_t b)
{
    if ((a<=3) && (b<=11))
        return 0x87e042e02d00ll + 0x80000ll * ((a) & 0x3) + 8ll * ((b) & 0xf);
    __cavm_csr_fatal("TOFCX_TOFW_RX_JCA_STATX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TOFW_RX_JCA_STATX(a,b) cavm_tofcx_tofw_rx_jca_statx_t
#define bustype_CAVM_TOFCX_TOFW_RX_JCA_STATX(a,b) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TOFW_RX_JCA_STATX(a,b) "TOFCX_TOFW_RX_JCA_STATX"
#define busnum_CAVM_TOFCX_TOFW_RX_JCA_STATX(a,b) (a)
#define arguments_CAVM_TOFCX_TOFW_RX_JCA_STATX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) tofc#_tofw_rx_smpl_stat#
 *
 * TOFC RX Sample Count from Frame Register
 * Number of samples from frame sent to symbol processors, per-stream. Increments for
 * every antenna in the stream.
 */
union cavm_tofcx_tofw_rx_smpl_statx
{
    uint64_t u;
    struct cavm_tofcx_tofw_rx_smpl_statx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t stat                  : 48; /**< [ 47:  0](R/W/H) The counter value. Wraps to zero at 2^48. */
#else /* Word 0 - Little Endian */
        uint64_t stat                  : 48; /**< [ 47:  0](R/W/H) The counter value. Wraps to zero at 2^48. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tofw_rx_smpl_statx_s cn; */
};
typedef union cavm_tofcx_tofw_rx_smpl_statx cavm_tofcx_tofw_rx_smpl_statx_t;

static inline uint64_t CAVM_TOFCX_TOFW_RX_SMPL_STATX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TOFW_RX_SMPL_STATX(uint64_t a, uint64_t b)
{
    if ((a<=3) && (b<=11))
        return 0x87e042e02e80ll + 0x80000ll * ((a) & 0x3) + 8ll * ((b) & 0xf);
    __cavm_csr_fatal("TOFCX_TOFW_RX_SMPL_STATX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TOFW_RX_SMPL_STATX(a,b) cavm_tofcx_tofw_rx_smpl_statx_t
#define bustype_CAVM_TOFCX_TOFW_RX_SMPL_STATX(a,b) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TOFW_RX_SMPL_STATX(a,b) "TOFCX_TOFW_RX_SMPL_STATX"
#define busnum_CAVM_TOFCX_TOFW_RX_SMPL_STATX(a,b) (a)
#define arguments_CAVM_TOFCX_TOFW_RX_SMPL_STATX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) tofc#_tofw_rx_sproc_cfg#
 *
 * TOFC TOFW RX Control Symbol Processor Configuration Register
 * Per-stream TOFW RX symbol processor configuration. Values are static and can only change
 * during initial configuration.
 */
union cavm_tofcx_tofw_rx_sproc_cfgx
{
    uint64_t u;
    struct cavm_tofcx_tofw_rx_sproc_cfgx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_42_63        : 22;
        uint64_t scs_type              : 2;  /**< [ 41: 40](R/W) Configures SCS type.
                                                                 Legal values: 0..2. */
        uint64_t reserved_37_39        : 3;
        uint64_t cp_type               : 1;  /**< [ 36: 36](R/W) Configures CP TYPE.  0: Normal CP, 1: Extended CP. */
        uint64_t cc_bandwidth          : 4;  /**< [ 35: 32](R/W) Configures CC bandwidth.
                                                                 Legal values: 1..10. */
        uint64_t reserved_11_31        : 21;
        uint64_t upsample_sel          : 3;  /**< [ 10:  8](R/W) Selects upsample rate for SCSF path {b}:
                                                                 0x0 = R0 122.88 -\> 122.88.
                                                                 0x1 = R1  61.44 -\> 122.88.
                                                                 0x2 = R2  30.72 -\> 122.88.

                                                                 Other values are illegal. Valid for B6G only. */
        uint64_t reserved_5_7          : 3;
        uint64_t scsf_ena              : 1;  /**< [  4:  4](R/W) Enable SCSF stream for B6G traffic.
                                                                 [SCSF_ENA] = 0 drops all samples on the stream and also the clock is disabled
                                                                 for that lane to save power. */
        uint64_t reserved_3            : 1;
        uint64_t scsf_cc_sel           : 3;  /**< [  2:  0](R/W) Select CC stream to drive SCSF path {b}. Hardware supports a subset of
                                                                 possible combinations. Legal values:
                                                                 * {b} = 0x0: [SCSF_CC_SEL] = 0x0.
                                                                 * {b} = 0x1: [SCSF_CC_SEL] = 0x0 or 0x1.
                                                                 * {b} = 0x2: [SCSF_CC_SEL] = 0x1 or 0x2.
                                                                 * {b} = 0x3: [SCSF_CC_SEL] = 0x1, 0x2 or 0x3.
                                                                 * {b} = 0x4: [SCSF_CC_SEL] = 0x2, 0x3 or 0x4.
                                                                 * {b} = 0x5: [SCSF_CC_SEL] = 0x2, 0x3, 0x4 or 0x5.
                                                                 * {b} = 0x6: [SCSF_CC_SEL] = 0x0.
                                                                 * {b} = 0x7: [SCSF_CC_SEL] = 0x1.
                                                                 * {b} = 0x8: [SCSF_CC_SEL] = 0x1 or 0x2.
                                                                 * {b} = 0x9: [SCSF_CC_SEL] = 0x2 or 0x3.
                                                                 * {b} = 0xa: [SCSF_CC_SEL] = 0x2 or 0x3 or 0x4.
                                                                 * {b} = 0xb: [SCSF_CC_SEL] = 0x3 or 0x4 or 0x5.

                                                                 Programming values outside of above ranges will produce indeterminate
                                                                 results. Valid for B6G only.

                                                                 This field's reset value is the register's {b} index, to match use case MB1, 6x30.7Msps.
                                                                 See TOFC()_TOFW_RX_CFG[CC7_WT]. */
#else /* Word 0 - Little Endian */
        uint64_t scsf_cc_sel           : 3;  /**< [  2:  0](R/W) Select CC stream to drive SCSF path {b}. Hardware supports a subset of
                                                                 possible combinations. Legal values:
                                                                 * {b} = 0x0: [SCSF_CC_SEL] = 0x0.
                                                                 * {b} = 0x1: [SCSF_CC_SEL] = 0x0 or 0x1.
                                                                 * {b} = 0x2: [SCSF_CC_SEL] = 0x1 or 0x2.
                                                                 * {b} = 0x3: [SCSF_CC_SEL] = 0x1, 0x2 or 0x3.
                                                                 * {b} = 0x4: [SCSF_CC_SEL] = 0x2, 0x3 or 0x4.
                                                                 * {b} = 0x5: [SCSF_CC_SEL] = 0x2, 0x3, 0x4 or 0x5.
                                                                 * {b} = 0x6: [SCSF_CC_SEL] = 0x0.
                                                                 * {b} = 0x7: [SCSF_CC_SEL] = 0x1.
                                                                 * {b} = 0x8: [SCSF_CC_SEL] = 0x1 or 0x2.
                                                                 * {b} = 0x9: [SCSF_CC_SEL] = 0x2 or 0x3.
                                                                 * {b} = 0xa: [SCSF_CC_SEL] = 0x2 or 0x3 or 0x4.
                                                                 * {b} = 0xb: [SCSF_CC_SEL] = 0x3 or 0x4 or 0x5.

                                                                 Programming values outside of above ranges will produce indeterminate
                                                                 results. Valid for B6G only.

                                                                 This field's reset value is the register's {b} index, to match use case MB1, 6x30.7Msps.
                                                                 See TOFC()_TOFW_RX_CFG[CC7_WT]. */
        uint64_t reserved_3            : 1;
        uint64_t scsf_ena              : 1;  /**< [  4:  4](R/W) Enable SCSF stream for B6G traffic.
                                                                 [SCSF_ENA] = 0 drops all samples on the stream and also the clock is disabled
                                                                 for that lane to save power. */
        uint64_t reserved_5_7          : 3;
        uint64_t upsample_sel          : 3;  /**< [ 10:  8](R/W) Selects upsample rate for SCSF path {b}:
                                                                 0x0 = R0 122.88 -\> 122.88.
                                                                 0x1 = R1  61.44 -\> 122.88.
                                                                 0x2 = R2  30.72 -\> 122.88.

                                                                 Other values are illegal. Valid for B6G only. */
        uint64_t reserved_11_31        : 21;
        uint64_t cc_bandwidth          : 4;  /**< [ 35: 32](R/W) Configures CC bandwidth.
                                                                 Legal values: 1..10. */
        uint64_t cp_type               : 1;  /**< [ 36: 36](R/W) Configures CP TYPE.  0: Normal CP, 1: Extended CP. */
        uint64_t reserved_37_39        : 3;
        uint64_t scs_type              : 2;  /**< [ 41: 40](R/W) Configures SCS type.
                                                                 Legal values: 0..2. */
        uint64_t reserved_42_63        : 22;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tofw_rx_sproc_cfgx_s cn; */
};
typedef union cavm_tofcx_tofw_rx_sproc_cfgx cavm_tofcx_tofw_rx_sproc_cfgx_t;

static inline uint64_t CAVM_TOFCX_TOFW_RX_SPROC_CFGX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TOFW_RX_SPROC_CFGX(uint64_t a, uint64_t b)
{
    if ((a<=3) && (b<=11))
        return 0x87e042e01100ll + 0x80000ll * ((a) & 0x3) + 8ll * ((b) & 0xf);
    __cavm_csr_fatal("TOFCX_TOFW_RX_SPROC_CFGX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TOFW_RX_SPROC_CFGX(a,b) cavm_tofcx_tofw_rx_sproc_cfgx_t
#define bustype_CAVM_TOFCX_TOFW_RX_SPROC_CFGX(a,b) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TOFW_RX_SPROC_CFGX(a,b) "TOFCX_TOFW_RX_SPROC_CFGX"
#define busnum_CAVM_TOFCX_TOFW_RX_SPROC_CFGX(a,b) (a)
#define arguments_CAVM_TOFCX_TOFW_RX_SPROC_CFGX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) tofc#_tofw_rx_status
 *
 * TOFC TOFW RX Block Status Register
 */
union cavm_tofcx_tofw_rx_status
{
    uint64_t u;
    struct cavm_tofcx_tofw_rx_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_61_63        : 3;
        uint64_t rxb_fif_lvl           : 9;  /**< [ 60: 52](RO/H) Level of outgoing RX FIFO. */
        uint64_t reserved_51           : 1;
        uint64_t blk_active2           : 3;  /**< [ 50: 48](RO/H) If nonzero, block is active. */
        uint64_t reserved_46_47        : 2;
        uint64_t blk_active1           : 18; /**< [ 45: 28](RO/H) If nonzero, block is active. */
        uint64_t reserved_27           : 1;
        uint64_t blk_active0           : 27; /**< [ 26:  0](RO/H) If nonzero, block is active. */
#else /* Word 0 - Little Endian */
        uint64_t blk_active0           : 27; /**< [ 26:  0](RO/H) If nonzero, block is active. */
        uint64_t reserved_27           : 1;
        uint64_t blk_active1           : 18; /**< [ 45: 28](RO/H) If nonzero, block is active. */
        uint64_t reserved_46_47        : 2;
        uint64_t blk_active2           : 3;  /**< [ 50: 48](RO/H) If nonzero, block is active. */
        uint64_t reserved_51           : 1;
        uint64_t rxb_fif_lvl           : 9;  /**< [ 60: 52](RO/H) Level of outgoing RX FIFO. */
        uint64_t reserved_61_63        : 3;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tofw_rx_status_s cn; */
};
typedef union cavm_tofcx_tofw_rx_status cavm_tofcx_tofw_rx_status_t;

static inline uint64_t CAVM_TOFCX_TOFW_RX_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TOFW_RX_STATUS(uint64_t a)
{
    if (a<=3)
        return 0x87e042e02ce0ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_TOFW_RX_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TOFW_RX_STATUS(a) cavm_tofcx_tofw_rx_status_t
#define bustype_CAVM_TOFCX_TOFW_RX_STATUS(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TOFW_RX_STATUS(a) "TOFCX_TOFW_RX_STATUS"
#define busnum_CAVM_TOFCX_TOFW_RX_STATUS(a) (a)
#define arguments_CAVM_TOFCX_TOFW_RX_STATUS(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_tofw_rx_tofm_flit_stat
 *
 * TOFC RX Flit Count Register
 * Number of flits received from TOFM. One flit = 256 bits or 8 samples.
 */
union cavm_tofcx_tofw_rx_tofm_flit_stat
{
    uint64_t u;
    struct cavm_tofcx_tofw_rx_tofm_flit_stat_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t stat                  : 48; /**< [ 47:  0](R/W/H) The counter value. Wraps to zero at 2^48. */
#else /* Word 0 - Little Endian */
        uint64_t stat                  : 48; /**< [ 47:  0](R/W/H) The counter value. Wraps to zero at 2^48. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tofw_rx_tofm_flit_stat_s cn; */
};
typedef union cavm_tofcx_tofw_rx_tofm_flit_stat cavm_tofcx_tofw_rx_tofm_flit_stat_t;

static inline uint64_t CAVM_TOFCX_TOFW_RX_TOFM_FLIT_STAT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TOFW_RX_TOFM_FLIT_STAT(uint64_t a)
{
    if (a<=3)
        return 0x87e042e02f00ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_TOFW_RX_TOFM_FLIT_STAT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TOFW_RX_TOFM_FLIT_STAT(a) cavm_tofcx_tofw_rx_tofm_flit_stat_t
#define bustype_CAVM_TOFCX_TOFW_RX_TOFM_FLIT_STAT(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TOFW_RX_TOFM_FLIT_STAT(a) "TOFCX_TOFW_RX_TOFM_FLIT_STAT"
#define busnum_CAVM_TOFCX_TOFW_RX_TOFM_FLIT_STAT(a) (a)
#define arguments_CAVM_TOFCX_TOFW_RX_TOFM_FLIT_STAT(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_tofw_tx_int
 *
 * TOFW TX Error Interrupt Register
 * These registers record interrupts due to different error events in TOFW TX.
 */
union cavm_tofcx_tofw_tx_int
{
    uint64_t u;
    struct cavm_tofcx_tofw_tx_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_14_63        : 50;
        uint64_t mapper_fifo_oflow     : 1;  /**< [ 13: 13](R/W1C/H) Mapper FIFO Overflow. */
        uint64_t mapper_fifo_uflow     : 1;  /**< [ 12: 12](R/W1C/H) Mapper FIFO Underflow. */
        uint64_t aligner_fifo_oflow    : 1;  /**< [ 11: 11](R/W1C/H) Aligner FIFO overflow. */
        uint64_t filter_oos            : 1;  /**< [ 10: 10](R/W1C/H) SCSF filter out-of-sync. */
        uint64_t strm_fifo_oflow       : 1;  /**< [  9:  9](R/W1C/H) Stream FIFO overflow. */
        uint64_t strm_fifo_uflow       : 1;  /**< [  8:  8](R/W1C/H) Stream FIFO underflow. */
        uint64_t dyn_cfg_uflow         : 1;  /**< [  7:  7](R/W1C/H) Dynamic configuration fetch underflow. */
        uint64_t rx_dyn_cfg_oos        : 1;  /**< [  6:  6](R/W1C/H) Dynamic configuration fetch has gone out-of-sync for Rx Dynamic Parameter. */
        uint64_t dyn_cfg_oos           : 1;  /**< [  5:  5](R/W1C/H) Dynamic configuration fetch has gone out-of-sync for Tx Dynamic Parameter. */
        uint64_t gaa_req_wrap_err      : 1;  /**< [  4:  4](R/W1C/H) Request for sample data had wraparound error. */
        uint64_t gaa_req_fifo_oflow    : 1;  /**< [  3:  3](R/W1C/H) Read request FIFO overflow. */
        uint64_t gaa_rd_nxm            : 1;  /**< [  2:  2](R/W1C/H) Read request produced NXM error response. Write request address exceeded SMEM size. */
        uint64_t gaa_rd_err_fat        : 1;  /**< [  1:  1](R/W1C/H) Read request produced fatal error response. */
        uint64_t gaa_rd_err_nfat       : 1;  /**< [  0:  0](R/W1C/H) Read request produced non-fatal error response. */
#else /* Word 0 - Little Endian */
        uint64_t gaa_rd_err_nfat       : 1;  /**< [  0:  0](R/W1C/H) Read request produced non-fatal error response. */
        uint64_t gaa_rd_err_fat        : 1;  /**< [  1:  1](R/W1C/H) Read request produced fatal error response. */
        uint64_t gaa_rd_nxm            : 1;  /**< [  2:  2](R/W1C/H) Read request produced NXM error response. Write request address exceeded SMEM size. */
        uint64_t gaa_req_fifo_oflow    : 1;  /**< [  3:  3](R/W1C/H) Read request FIFO overflow. */
        uint64_t gaa_req_wrap_err      : 1;  /**< [  4:  4](R/W1C/H) Request for sample data had wraparound error. */
        uint64_t dyn_cfg_oos           : 1;  /**< [  5:  5](R/W1C/H) Dynamic configuration fetch has gone out-of-sync for Tx Dynamic Parameter. */
        uint64_t rx_dyn_cfg_oos        : 1;  /**< [  6:  6](R/W1C/H) Dynamic configuration fetch has gone out-of-sync for Rx Dynamic Parameter. */
        uint64_t dyn_cfg_uflow         : 1;  /**< [  7:  7](R/W1C/H) Dynamic configuration fetch underflow. */
        uint64_t strm_fifo_uflow       : 1;  /**< [  8:  8](R/W1C/H) Stream FIFO underflow. */
        uint64_t strm_fifo_oflow       : 1;  /**< [  9:  9](R/W1C/H) Stream FIFO overflow. */
        uint64_t filter_oos            : 1;  /**< [ 10: 10](R/W1C/H) SCSF filter out-of-sync. */
        uint64_t aligner_fifo_oflow    : 1;  /**< [ 11: 11](R/W1C/H) Aligner FIFO overflow. */
        uint64_t mapper_fifo_uflow     : 1;  /**< [ 12: 12](R/W1C/H) Mapper FIFO Underflow. */
        uint64_t mapper_fifo_oflow     : 1;  /**< [ 13: 13](R/W1C/H) Mapper FIFO Overflow. */
        uint64_t reserved_14_63        : 50;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tofw_tx_int_s cn; */
};
typedef union cavm_tofcx_tofw_tx_int cavm_tofcx_tofw_tx_int_t;

static inline uint64_t CAVM_TOFCX_TOFW_TX_INT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TOFW_TX_INT(uint64_t a)
{
    if (a<=3)
        return 0x87e042e00240ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_TOFW_TX_INT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TOFW_TX_INT(a) cavm_tofcx_tofw_tx_int_t
#define bustype_CAVM_TOFCX_TOFW_TX_INT(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TOFW_TX_INT(a) "TOFCX_TOFW_TX_INT"
#define busnum_CAVM_TOFCX_TOFW_TX_INT(a) (a)
#define arguments_CAVM_TOFCX_TOFW_TX_INT(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_tofw_tx_int_ena_w1c
 *
 * TOFW TX Error Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_tofcx_tofw_tx_int_ena_w1c
{
    uint64_t u;
    struct cavm_tofcx_tofw_tx_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_14_63        : 50;
        uint64_t mapper_fifo_oflow     : 1;  /**< [ 13: 13](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFW_TX_INT[MAPPER_FIFO_OFLOW]. */
        uint64_t mapper_fifo_uflow     : 1;  /**< [ 12: 12](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFW_TX_INT[MAPPER_FIFO_UFLOW]. */
        uint64_t aligner_fifo_oflow    : 1;  /**< [ 11: 11](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFW_TX_INT[ALIGNER_FIFO_OFLOW]. */
        uint64_t filter_oos            : 1;  /**< [ 10: 10](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFW_TX_INT[FILTER_OOS]. */
        uint64_t strm_fifo_oflow       : 1;  /**< [  9:  9](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFW_TX_INT[STRM_FIFO_OFLOW]. */
        uint64_t strm_fifo_uflow       : 1;  /**< [  8:  8](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFW_TX_INT[STRM_FIFO_UFLOW]. */
        uint64_t dyn_cfg_uflow         : 1;  /**< [  7:  7](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFW_TX_INT[DYN_CFG_UFLOW]. */
        uint64_t rx_dyn_cfg_oos        : 1;  /**< [  6:  6](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFW_TX_INT[RX_DYN_CFG_OOS]. */
        uint64_t dyn_cfg_oos           : 1;  /**< [  5:  5](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFW_TX_INT[DYN_CFG_OOS]. */
        uint64_t gaa_req_wrap_err      : 1;  /**< [  4:  4](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFW_TX_INT[GAA_REQ_WRAP_ERR]. */
        uint64_t gaa_req_fifo_oflow    : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFW_TX_INT[GAA_REQ_FIFO_OFLOW]. */
        uint64_t gaa_rd_nxm            : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFW_TX_INT[GAA_RD_NXM]. */
        uint64_t gaa_rd_err_fat        : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFW_TX_INT[GAA_RD_ERR_FAT]. */
        uint64_t gaa_rd_err_nfat       : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFW_TX_INT[GAA_RD_ERR_NFAT]. */
#else /* Word 0 - Little Endian */
        uint64_t gaa_rd_err_nfat       : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFW_TX_INT[GAA_RD_ERR_NFAT]. */
        uint64_t gaa_rd_err_fat        : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFW_TX_INT[GAA_RD_ERR_FAT]. */
        uint64_t gaa_rd_nxm            : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFW_TX_INT[GAA_RD_NXM]. */
        uint64_t gaa_req_fifo_oflow    : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFW_TX_INT[GAA_REQ_FIFO_OFLOW]. */
        uint64_t gaa_req_wrap_err      : 1;  /**< [  4:  4](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFW_TX_INT[GAA_REQ_WRAP_ERR]. */
        uint64_t dyn_cfg_oos           : 1;  /**< [  5:  5](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFW_TX_INT[DYN_CFG_OOS]. */
        uint64_t rx_dyn_cfg_oos        : 1;  /**< [  6:  6](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFW_TX_INT[RX_DYN_CFG_OOS]. */
        uint64_t dyn_cfg_uflow         : 1;  /**< [  7:  7](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFW_TX_INT[DYN_CFG_UFLOW]. */
        uint64_t strm_fifo_uflow       : 1;  /**< [  8:  8](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFW_TX_INT[STRM_FIFO_UFLOW]. */
        uint64_t strm_fifo_oflow       : 1;  /**< [  9:  9](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFW_TX_INT[STRM_FIFO_OFLOW]. */
        uint64_t filter_oos            : 1;  /**< [ 10: 10](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFW_TX_INT[FILTER_OOS]. */
        uint64_t aligner_fifo_oflow    : 1;  /**< [ 11: 11](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFW_TX_INT[ALIGNER_FIFO_OFLOW]. */
        uint64_t mapper_fifo_uflow     : 1;  /**< [ 12: 12](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFW_TX_INT[MAPPER_FIFO_UFLOW]. */
        uint64_t mapper_fifo_oflow     : 1;  /**< [ 13: 13](R/W1C/H) Reads or clears enable for TOFC(0..3)_TOFW_TX_INT[MAPPER_FIFO_OFLOW]. */
        uint64_t reserved_14_63        : 50;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tofw_tx_int_ena_w1c_s cn; */
};
typedef union cavm_tofcx_tofw_tx_int_ena_w1c cavm_tofcx_tofw_tx_int_ena_w1c_t;

static inline uint64_t CAVM_TOFCX_TOFW_TX_INT_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TOFW_TX_INT_ENA_W1C(uint64_t a)
{
    if (a<=3)
        return 0x87e042e00250ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_TOFW_TX_INT_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TOFW_TX_INT_ENA_W1C(a) cavm_tofcx_tofw_tx_int_ena_w1c_t
#define bustype_CAVM_TOFCX_TOFW_TX_INT_ENA_W1C(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TOFW_TX_INT_ENA_W1C(a) "TOFCX_TOFW_TX_INT_ENA_W1C"
#define busnum_CAVM_TOFCX_TOFW_TX_INT_ENA_W1C(a) (a)
#define arguments_CAVM_TOFCX_TOFW_TX_INT_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_tofw_tx_int_ena_w1s
 *
 * TOFW TX Error Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_tofcx_tofw_tx_int_ena_w1s
{
    uint64_t u;
    struct cavm_tofcx_tofw_tx_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_14_63        : 50;
        uint64_t mapper_fifo_oflow     : 1;  /**< [ 13: 13](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFW_TX_INT[MAPPER_FIFO_OFLOW]. */
        uint64_t mapper_fifo_uflow     : 1;  /**< [ 12: 12](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFW_TX_INT[MAPPER_FIFO_UFLOW]. */
        uint64_t aligner_fifo_oflow    : 1;  /**< [ 11: 11](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFW_TX_INT[ALIGNER_FIFO_OFLOW]. */
        uint64_t filter_oos            : 1;  /**< [ 10: 10](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFW_TX_INT[FILTER_OOS]. */
        uint64_t strm_fifo_oflow       : 1;  /**< [  9:  9](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFW_TX_INT[STRM_FIFO_OFLOW]. */
        uint64_t strm_fifo_uflow       : 1;  /**< [  8:  8](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFW_TX_INT[STRM_FIFO_UFLOW]. */
        uint64_t dyn_cfg_uflow         : 1;  /**< [  7:  7](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFW_TX_INT[DYN_CFG_UFLOW]. */
        uint64_t rx_dyn_cfg_oos        : 1;  /**< [  6:  6](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFW_TX_INT[RX_DYN_CFG_OOS]. */
        uint64_t dyn_cfg_oos           : 1;  /**< [  5:  5](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFW_TX_INT[DYN_CFG_OOS]. */
        uint64_t gaa_req_wrap_err      : 1;  /**< [  4:  4](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFW_TX_INT[GAA_REQ_WRAP_ERR]. */
        uint64_t gaa_req_fifo_oflow    : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFW_TX_INT[GAA_REQ_FIFO_OFLOW]. */
        uint64_t gaa_rd_nxm            : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFW_TX_INT[GAA_RD_NXM]. */
        uint64_t gaa_rd_err_fat        : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFW_TX_INT[GAA_RD_ERR_FAT]. */
        uint64_t gaa_rd_err_nfat       : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFW_TX_INT[GAA_RD_ERR_NFAT]. */
#else /* Word 0 - Little Endian */
        uint64_t gaa_rd_err_nfat       : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFW_TX_INT[GAA_RD_ERR_NFAT]. */
        uint64_t gaa_rd_err_fat        : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFW_TX_INT[GAA_RD_ERR_FAT]. */
        uint64_t gaa_rd_nxm            : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFW_TX_INT[GAA_RD_NXM]. */
        uint64_t gaa_req_fifo_oflow    : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFW_TX_INT[GAA_REQ_FIFO_OFLOW]. */
        uint64_t gaa_req_wrap_err      : 1;  /**< [  4:  4](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFW_TX_INT[GAA_REQ_WRAP_ERR]. */
        uint64_t dyn_cfg_oos           : 1;  /**< [  5:  5](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFW_TX_INT[DYN_CFG_OOS]. */
        uint64_t rx_dyn_cfg_oos        : 1;  /**< [  6:  6](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFW_TX_INT[RX_DYN_CFG_OOS]. */
        uint64_t dyn_cfg_uflow         : 1;  /**< [  7:  7](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFW_TX_INT[DYN_CFG_UFLOW]. */
        uint64_t strm_fifo_uflow       : 1;  /**< [  8:  8](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFW_TX_INT[STRM_FIFO_UFLOW]. */
        uint64_t strm_fifo_oflow       : 1;  /**< [  9:  9](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFW_TX_INT[STRM_FIFO_OFLOW]. */
        uint64_t filter_oos            : 1;  /**< [ 10: 10](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFW_TX_INT[FILTER_OOS]. */
        uint64_t aligner_fifo_oflow    : 1;  /**< [ 11: 11](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFW_TX_INT[ALIGNER_FIFO_OFLOW]. */
        uint64_t mapper_fifo_uflow     : 1;  /**< [ 12: 12](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFW_TX_INT[MAPPER_FIFO_UFLOW]. */
        uint64_t mapper_fifo_oflow     : 1;  /**< [ 13: 13](R/W1S/H) Reads or sets enable for TOFC(0..3)_TOFW_TX_INT[MAPPER_FIFO_OFLOW]. */
        uint64_t reserved_14_63        : 50;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tofw_tx_int_ena_w1s_s cn; */
};
typedef union cavm_tofcx_tofw_tx_int_ena_w1s cavm_tofcx_tofw_tx_int_ena_w1s_t;

static inline uint64_t CAVM_TOFCX_TOFW_TX_INT_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TOFW_TX_INT_ENA_W1S(uint64_t a)
{
    if (a<=3)
        return 0x87e042e00248ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_TOFW_TX_INT_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TOFW_TX_INT_ENA_W1S(a) cavm_tofcx_tofw_tx_int_ena_w1s_t
#define bustype_CAVM_TOFCX_TOFW_TX_INT_ENA_W1S(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TOFW_TX_INT_ENA_W1S(a) "TOFCX_TOFW_TX_INT_ENA_W1S"
#define busnum_CAVM_TOFCX_TOFW_TX_INT_ENA_W1S(a) (a)
#define arguments_CAVM_TOFCX_TOFW_TX_INT_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_tofw_tx_int_psm_msg_w0
 *
 * TOFC TOFW TX Interrupt Message w0 Register
 * JCA word 0 message to send for TOFW TX related interrupts.
 */
union cavm_tofcx_tofw_tx_int_psm_msg_w0
{
    uint64_t u;
    struct cavm_tofcx_tofw_tx_int_psm_msg_w0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t w0                    : 64; /**< [ 63:  0](R/W) Word 0 of JCA message. */
#else /* Word 0 - Little Endian */
        uint64_t w0                    : 64; /**< [ 63:  0](R/W) Word 0 of JCA message. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tofw_tx_int_psm_msg_w0_s cn; */
};
typedef union cavm_tofcx_tofw_tx_int_psm_msg_w0 cavm_tofcx_tofw_tx_int_psm_msg_w0_t;

static inline uint64_t CAVM_TOFCX_TOFW_TX_INT_PSM_MSG_W0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TOFW_TX_INT_PSM_MSG_W0(uint64_t a)
{
    if (a<=3)
        return 0x87e042e00310ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_TOFW_TX_INT_PSM_MSG_W0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TOFW_TX_INT_PSM_MSG_W0(a) cavm_tofcx_tofw_tx_int_psm_msg_w0_t
#define bustype_CAVM_TOFCX_TOFW_TX_INT_PSM_MSG_W0(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TOFW_TX_INT_PSM_MSG_W0(a) "TOFCX_TOFW_TX_INT_PSM_MSG_W0"
#define busnum_CAVM_TOFCX_TOFW_TX_INT_PSM_MSG_W0(a) (a)
#define arguments_CAVM_TOFCX_TOFW_TX_INT_PSM_MSG_W0(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_tofw_tx_int_psm_msg_w1
 *
 * TOFC TOFW TX Interrupt Message w1 Register
 * JCA word 1 message to send for TOFW TX related interrupts.
 */
union cavm_tofcx_tofw_tx_int_psm_msg_w1
{
    uint64_t u;
    struct cavm_tofcx_tofw_tx_int_psm_msg_w1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t w1                    : 64; /**< [ 63:  0](R/W) Word 1 of JCA message. */
#else /* Word 0 - Little Endian */
        uint64_t w1                    : 64; /**< [ 63:  0](R/W) Word 1 of JCA message. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tofw_tx_int_psm_msg_w1_s cn; */
};
typedef union cavm_tofcx_tofw_tx_int_psm_msg_w1 cavm_tofcx_tofw_tx_int_psm_msg_w1_t;

static inline uint64_t CAVM_TOFCX_TOFW_TX_INT_PSM_MSG_W1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TOFW_TX_INT_PSM_MSG_W1(uint64_t a)
{
    if (a<=3)
        return 0x87e042e00318ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_TOFW_TX_INT_PSM_MSG_W1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TOFW_TX_INT_PSM_MSG_W1(a) cavm_tofcx_tofw_tx_int_psm_msg_w1_t
#define bustype_CAVM_TOFCX_TOFW_TX_INT_PSM_MSG_W1(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TOFW_TX_INT_PSM_MSG_W1(a) "TOFCX_TOFW_TX_INT_PSM_MSG_W1"
#define busnum_CAVM_TOFCX_TOFW_TX_INT_PSM_MSG_W1(a) (a)
#define arguments_CAVM_TOFCX_TOFW_TX_INT_PSM_MSG_W1(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_tofw_tx_int_w1s
 *
 * TOFW TX Error Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_tofcx_tofw_tx_int_w1s
{
    uint64_t u;
    struct cavm_tofcx_tofw_tx_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_14_63        : 50;
        uint64_t mapper_fifo_oflow     : 1;  /**< [ 13: 13](R/W1S/H) Reads or sets TOFC(0..3)_TOFW_TX_INT[MAPPER_FIFO_OFLOW]. */
        uint64_t mapper_fifo_uflow     : 1;  /**< [ 12: 12](R/W1S/H) Reads or sets TOFC(0..3)_TOFW_TX_INT[MAPPER_FIFO_UFLOW]. */
        uint64_t aligner_fifo_oflow    : 1;  /**< [ 11: 11](R/W1S/H) Reads or sets TOFC(0..3)_TOFW_TX_INT[ALIGNER_FIFO_OFLOW]. */
        uint64_t filter_oos            : 1;  /**< [ 10: 10](R/W1S/H) Reads or sets TOFC(0..3)_TOFW_TX_INT[FILTER_OOS]. */
        uint64_t strm_fifo_oflow       : 1;  /**< [  9:  9](R/W1S/H) Reads or sets TOFC(0..3)_TOFW_TX_INT[STRM_FIFO_OFLOW]. */
        uint64_t strm_fifo_uflow       : 1;  /**< [  8:  8](R/W1S/H) Reads or sets TOFC(0..3)_TOFW_TX_INT[STRM_FIFO_UFLOW]. */
        uint64_t dyn_cfg_uflow         : 1;  /**< [  7:  7](R/W1S/H) Reads or sets TOFC(0..3)_TOFW_TX_INT[DYN_CFG_UFLOW]. */
        uint64_t rx_dyn_cfg_oos        : 1;  /**< [  6:  6](R/W1S/H) Reads or sets TOFC(0..3)_TOFW_TX_INT[RX_DYN_CFG_OOS]. */
        uint64_t dyn_cfg_oos           : 1;  /**< [  5:  5](R/W1S/H) Reads or sets TOFC(0..3)_TOFW_TX_INT[DYN_CFG_OOS]. */
        uint64_t gaa_req_wrap_err      : 1;  /**< [  4:  4](R/W1S/H) Reads or sets TOFC(0..3)_TOFW_TX_INT[GAA_REQ_WRAP_ERR]. */
        uint64_t gaa_req_fifo_oflow    : 1;  /**< [  3:  3](R/W1S/H) Reads or sets TOFC(0..3)_TOFW_TX_INT[GAA_REQ_FIFO_OFLOW]. */
        uint64_t gaa_rd_nxm            : 1;  /**< [  2:  2](R/W1S/H) Reads or sets TOFC(0..3)_TOFW_TX_INT[GAA_RD_NXM]. */
        uint64_t gaa_rd_err_fat        : 1;  /**< [  1:  1](R/W1S/H) Reads or sets TOFC(0..3)_TOFW_TX_INT[GAA_RD_ERR_FAT]. */
        uint64_t gaa_rd_err_nfat       : 1;  /**< [  0:  0](R/W1S/H) Reads or sets TOFC(0..3)_TOFW_TX_INT[GAA_RD_ERR_NFAT]. */
#else /* Word 0 - Little Endian */
        uint64_t gaa_rd_err_nfat       : 1;  /**< [  0:  0](R/W1S/H) Reads or sets TOFC(0..3)_TOFW_TX_INT[GAA_RD_ERR_NFAT]. */
        uint64_t gaa_rd_err_fat        : 1;  /**< [  1:  1](R/W1S/H) Reads or sets TOFC(0..3)_TOFW_TX_INT[GAA_RD_ERR_FAT]. */
        uint64_t gaa_rd_nxm            : 1;  /**< [  2:  2](R/W1S/H) Reads or sets TOFC(0..3)_TOFW_TX_INT[GAA_RD_NXM]. */
        uint64_t gaa_req_fifo_oflow    : 1;  /**< [  3:  3](R/W1S/H) Reads or sets TOFC(0..3)_TOFW_TX_INT[GAA_REQ_FIFO_OFLOW]. */
        uint64_t gaa_req_wrap_err      : 1;  /**< [  4:  4](R/W1S/H) Reads or sets TOFC(0..3)_TOFW_TX_INT[GAA_REQ_WRAP_ERR]. */
        uint64_t dyn_cfg_oos           : 1;  /**< [  5:  5](R/W1S/H) Reads or sets TOFC(0..3)_TOFW_TX_INT[DYN_CFG_OOS]. */
        uint64_t rx_dyn_cfg_oos        : 1;  /**< [  6:  6](R/W1S/H) Reads or sets TOFC(0..3)_TOFW_TX_INT[RX_DYN_CFG_OOS]. */
        uint64_t dyn_cfg_uflow         : 1;  /**< [  7:  7](R/W1S/H) Reads or sets TOFC(0..3)_TOFW_TX_INT[DYN_CFG_UFLOW]. */
        uint64_t strm_fifo_uflow       : 1;  /**< [  8:  8](R/W1S/H) Reads or sets TOFC(0..3)_TOFW_TX_INT[STRM_FIFO_UFLOW]. */
        uint64_t strm_fifo_oflow       : 1;  /**< [  9:  9](R/W1S/H) Reads or sets TOFC(0..3)_TOFW_TX_INT[STRM_FIFO_OFLOW]. */
        uint64_t filter_oos            : 1;  /**< [ 10: 10](R/W1S/H) Reads or sets TOFC(0..3)_TOFW_TX_INT[FILTER_OOS]. */
        uint64_t aligner_fifo_oflow    : 1;  /**< [ 11: 11](R/W1S/H) Reads or sets TOFC(0..3)_TOFW_TX_INT[ALIGNER_FIFO_OFLOW]. */
        uint64_t mapper_fifo_uflow     : 1;  /**< [ 12: 12](R/W1S/H) Reads or sets TOFC(0..3)_TOFW_TX_INT[MAPPER_FIFO_UFLOW]. */
        uint64_t mapper_fifo_oflow     : 1;  /**< [ 13: 13](R/W1S/H) Reads or sets TOFC(0..3)_TOFW_TX_INT[MAPPER_FIFO_OFLOW]. */
        uint64_t reserved_14_63        : 50;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tofw_tx_int_w1s_s cn; */
};
typedef union cavm_tofcx_tofw_tx_int_w1s cavm_tofcx_tofw_tx_int_w1s_t;

static inline uint64_t CAVM_TOFCX_TOFW_TX_INT_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TOFW_TX_INT_W1S(uint64_t a)
{
    if (a<=3)
        return 0x87e042e00258ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_TOFW_TX_INT_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TOFW_TX_INT_W1S(a) cavm_tofcx_tofw_tx_int_w1s_t
#define bustype_CAVM_TOFCX_TOFW_TX_INT_W1S(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TOFW_TX_INT_W1S(a) "TOFCX_TOFW_TX_INT_W1S"
#define busnum_CAVM_TOFCX_TOFW_TX_INT_W1S(a) (a)
#define arguments_CAVM_TOFCX_TOFW_TX_INT_W1S(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_tx_align_fifo_thres
 *
 * TOFC TX Alignment FIFO Threshold Register
 */
union cavm_tofcx_tx_align_fifo_thres
{
    uint64_t u;
    struct cavm_tofcx_tx_align_fifo_thres_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t thres                 : 8;  /**< [  7:  0](R/W) Sets the threshold for the alignment FIFO. Read from corresponding stream FIFO is stalled
                                                                 if the alignment FIFO is above this threshold. The stalling happens at the end of reading
                                                                 last antenna data. */
#else /* Word 0 - Little Endian */
        uint64_t thres                 : 8;  /**< [  7:  0](R/W) Sets the threshold for the alignment FIFO. Read from corresponding stream FIFO is stalled
                                                                 if the alignment FIFO is above this threshold. The stalling happens at the end of reading
                                                                 last antenna data. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tx_align_fifo_thres_s cn; */
};
typedef union cavm_tofcx_tx_align_fifo_thres cavm_tofcx_tx_align_fifo_thres_t;

static inline uint64_t CAVM_TOFCX_TX_ALIGN_FIFO_THRES(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TX_ALIGN_FIFO_THRES(uint64_t a)
{
    if (a<=3)
        return 0x87e042e03208ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_TX_ALIGN_FIFO_THRES", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TX_ALIGN_FIFO_THRES(a) cavm_tofcx_tx_align_fifo_thres_t
#define bustype_CAVM_TOFCX_TX_ALIGN_FIFO_THRES(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TX_ALIGN_FIFO_THRES(a) "TOFCX_TX_ALIGN_FIFO_THRES"
#define busnum_CAVM_TOFCX_TX_ALIGN_FIFO_THRES(a) (a)
#define arguments_CAVM_TOFCX_TX_ALIGN_FIFO_THRES(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_tx_comb2_sel
 *
 * TOFC TX COMBINER2 SELECT Register
 * Configures how to select the second input of the second combiner for each CC path from
 * output of first combiners.
 */
union cavm_tofcx_tx_comb2_sel
{
    uint64_t u;
    struct cavm_tofcx_tx_comb2_sel_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t cc2_sel               : 2;  /**< [  5:  4](R/W) CC2 combiner select:
                                                                 0x0 = No Combination.
                                                                 0x1 = Select COMB1_3 output.
                                                                 0x2 = Select COMB1_4 output.
                                                                 0x3 = Select COMB1_5 output. */
        uint64_t cc1_sel               : 2;  /**< [  3:  2](R/W) CC1 combiner select:
                                                                 0x0 = No Combination.
                                                                 0x1 = Select COMB1_3 output.
                                                                 0x2 = Select COMB1_4 output.
                                                                 0x3 = Select COMB1_5 output. */
        uint64_t cc0_sel               : 2;  /**< [  1:  0](R/W) CC0 combiner select:
                                                                 0x0 = No Combination.
                                                                 0x1 = Select COMB1_3 output.
                                                                 0x2 = Select COMB1_4 output.
                                                                 0x3 = Select COMB1_5 output. */
#else /* Word 0 - Little Endian */
        uint64_t cc0_sel               : 2;  /**< [  1:  0](R/W) CC0 combiner select:
                                                                 0x0 = No Combination.
                                                                 0x1 = Select COMB1_3 output.
                                                                 0x2 = Select COMB1_4 output.
                                                                 0x3 = Select COMB1_5 output. */
        uint64_t cc1_sel               : 2;  /**< [  3:  2](R/W) CC1 combiner select:
                                                                 0x0 = No Combination.
                                                                 0x1 = Select COMB1_3 output.
                                                                 0x2 = Select COMB1_4 output.
                                                                 0x3 = Select COMB1_5 output. */
        uint64_t cc2_sel               : 2;  /**< [  5:  4](R/W) CC2 combiner select:
                                                                 0x0 = No Combination.
                                                                 0x1 = Select COMB1_3 output.
                                                                 0x2 = Select COMB1_4 output.
                                                                 0x3 = Select COMB1_5 output. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tx_comb2_sel_s cn; */
};
typedef union cavm_tofcx_tx_comb2_sel cavm_tofcx_tx_comb2_sel_t;

static inline uint64_t CAVM_TOFCX_TX_COMB2_SEL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TX_COMB2_SEL(uint64_t a)
{
    if (a<=3)
        return 0x87e042e03008ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_TX_COMB2_SEL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TX_COMB2_SEL(a) cavm_tofcx_tx_comb2_sel_t
#define bustype_CAVM_TOFCX_TX_COMB2_SEL(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TX_COMB2_SEL(a) "TOFCX_TX_COMB2_SEL"
#define busnum_CAVM_TOFCX_TX_COMB2_SEL(a) (a)
#define arguments_CAVM_TOFCX_TX_COMB2_SEL(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_tx_downsample_sel
 *
 * TOFC TX Downsample Select Register
 * Configures downsampling rate for each CC path.
 */
union cavm_tofcx_tx_downsample_sel
{
    uint64_t u;
    struct cavm_tofcx_tx_downsample_sel_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t cc7_sel               : 3;  /**< [ 23: 21](R/W) CC7 downsampling select. Legal values:
                                                                 0x0 = Sample every cycle.
                                                                 0x1 = Sample every two cycle.
                                                                 0x2 = Sample every four cycles.
                                                                 0x3-0x7 = Do not sample.

                                                                 Typical use cases:

                                                                 * MB1/MB21, 6x30.7Msps (reset value):
                                                                 _ [CC7_SEL] = 7, [CC6_SEL] = 7, [CC5_SEL] = 2, [CC4_SEL] = 2,
                                                                   [CC3_SEL] = 2, [CC2_SEL] = 2, [CC1_SEL] = 2, [CC0_SEL] = 2.
                                                                 * MB2/MB22, 61.4 + 4x30.7Msps:
                                                                 _ [CC7_SEL] = 7, [CC6_SEL] = 7, [CC5_SEL] = 7, [CC4_SEL] = 2,
                                                                   [CC3_SEL] = 2, [CC2_SEL] = 2, [CC1_SEL] = 2, [CC0_SEL] = 1.
                                                                 * MB3/MB23, 2x61.4 + 2x30.7Msps:
                                                                 _ [CC7_SEL] = 7, [CC6_SEL] = 7, [CC5_SEL] = 7, [CC4_SEL] = 7,
                                                                   [CC3_SEL] = 2, [CC2_SEL] = 2, [CC1_SEL] = 1, [CC0_SEL] = 1.
                                                                 * MB4/MB24, 3x61.4Msps:
                                                                 _ [CC7_SEL] = 7, [CC6_SEL] = 7, [CC5_SEL] = 7, [CC4_SEL] = 7,
                                                                   [CC3_SEL] = 7, [CC2_SEL] = 1, [CC1_SEL] = 1, [CC0_SEL] = 1.
                                                                 * MB5/MB25, 122.8 + 2x30.7Msps:
                                                                 _ [CC7_SEL] = 7, [CC6_SEL] = 7, [CC5_SEL] = 7, [CC4_SEL] = 7,
                                                                   [CC3_SEL] = 7, [CC2_SEL] = 2, [CC1_SEL] = 2, [CC0_SEL] = 0.
                                                                 * MB6/MB26, 122.8 + 61.4Msps:
                                                                 _ [CC7_SEL] = 7, [CC6_SEL] = 7, [CC5_SEL] = 7, [CC4_SEL] = 7,
                                                                   [CC3_SEL] = 7, [CC2_SEL] = 7, [CC1_SEL] = 1, [CC0_SEL] = 0.
                                                                 * MB7, 4x30.7Msps:
                                                                 _ [CC7_SEL] = 7, [CC6_SEL] = 7, [CC5_SEL] = 7, [CC4_SEL] = 7,
                                                                   [CC3_SEL] = 2, [CC2_SEL] = 2, [CC1_SEL] = 2, [CC0_SEL] = 2.
                                                                 * MB8, 61.4 + 2x30.7Msps:
                                                                 _ [CC7_SEL] = 7, [CC6_SEL] = 7, [CC5_SEL] = 7, [CC4_SEL] = 7,
                                                                   [CC3_SEL] = 7, [CC2_SEL] = 2, [CC1_SEL] = 2, [CC0_SEL] = 1.
                                                                 * MB9, 2x61.4Msps:
                                                                 _ [CC7_SEL] = 7, [CC6_SEL] = 7, [CC5_SEL] = 7, [CC4_SEL] = 7,
                                                                   [CC3_SEL] = 7, [CC2_SEL] = 7, [CC1_SEL] = 1, [CC0_SEL] = 1.
                                                                 * MB10, 122.8Msps:
                                                                 _ [CC7_SEL] = 7, [CC6_SEL] = 7, [CC5_SEL] = 7, [CC4_SEL] = 7,
                                                                   [CC3_SEL] = 7, [CC2_SEL] = 7, [CC1_SEL] = 7, [CC0_SEL] = 0.
                                                                 * MA1, 2x245.8Msps:
                                                                 _ [CC7_SEL] = 7, [CC6_SEL] = 7, [CC5_SEL] = 7, [CC4_SEL] = 7,
                                                                   [CC3_SEL] = 7, [CC2_SEL] = 7, [CC1_SEL] = 0, [CC0_SEL] = 0.
                                                                 * MA2, 245.8 + 2x122.8Msps:
                                                                 _ [CC7_SEL] = 7, [CC6_SEL] = 7, [CC5_SEL] = 7, [CC4_SEL] = 7,
                                                                   [CC3_SEL] = 7, [CC2_SEL] = 1, [CC1_SEL] = 1, [CC0_SEL] = 0.
                                                                 * MA3, 245.8 + 122.8 + 2x61.4Msps:
                                                                 _ [CC7_SEL] = 7, [CC6_SEL] = 7, [CC5_SEL] = 7, [CC4_SEL] = 7,
                                                                   [CC3_SEL] = 2, [CC2_SEL] = 2, [CC1_SEL] = 1, [CC0_SEL] = 0.
                                                                 * MA4, 245.8 + 4x61.4Msps:
                                                                 _ [CC7_SEL] = 7, [CC6_SEL] = 7, [CC5_SEL] = 7, [CC4_SEL] = 2,
                                                                   [CC3_SEL] = 2, [CC2_SEL] = 2, [CC1_SEL] = 2, [CC0_SEL] = 0.
                                                                 * MA5, 4x122.8Msps:
                                                                 _ [CC7_SEL] = 7, [CC6_SEL] = 7, [CC5_SEL] = 7, [CC4_SEL] = 7,
                                                                   [CC3_SEL] = 1, [CC2_SEL] = 1, [CC1_SEL] = 1, [CC0_SEL] = 1.
                                                                 * MA6, 3x122.8 + 2x61.4Msps:
                                                                 _ [CC7_SEL] = 7, [CC6_SEL] = 7, [CC5_SEL] = 7, [CC4_SEL] = 2,
                                                                   [CC3_SEL] = 2, [CC2_SEL] = 1, [CC1_SEL] = 1, [CC0_SEL] = 1.
                                                                 * MA7, 2x122.8 + 4x61.4Msps:
                                                                 _ [CC7_SEL] = 7, [CC6_SEL] = 7, [CC5_SEL] = 2, [CC4_SEL] = 2,
                                                                   [CC3_SEL] = 2, [CC2_SEL] = 2, [CC1_SEL] = 1, [CC0_SEL] = 1.
                                                                 * MA8, 122.8 + 6x61.4Msps:
                                                                 _ [CC7_SEL] = 7, [CC6_SEL] = 2, [CC5_SEL] = 2, [CC4_SEL] = 2,
                                                                   [CC3_SEL] = 2, [CC2_SEL] = 2, [CC1_SEL] = 2, [CC0_SEL] = 1.
                                                                 * MA9, 8x61.4Msps:
                                                                 _ [CC7_SEL] = 2, [CC6_SEL] = 2, [CC5_SEL] = 2, [CC4_SEL] = 2,
                                                                   [CC3_SEL] = 2, [CC2_SEL] = 2, [CC1_SEL] = 2, [CC0_SEL] = 2. */
        uint64_t cc6_sel               : 3;  /**< [ 20: 18](R/W) CC6 downsampling select. See [CC7_SEL]. */
        uint64_t cc5_sel               : 3;  /**< [ 17: 15](R/W) CC5 downsampling select. See [CC7_SEL]. */
        uint64_t cc4_sel               : 3;  /**< [ 14: 12](R/W) CC4 downsampling select. See [CC7_SEL]. */
        uint64_t cc3_sel               : 3;  /**< [ 11:  9](R/W) CC3 downsampling select. See [CC7_SEL]. */
        uint64_t cc2_sel               : 3;  /**< [  8:  6](R/W) CC2 downsampling select. See [CC7_SEL]. */
        uint64_t cc1_sel               : 3;  /**< [  5:  3](R/W) CC1 downsampling select. See [CC7_SEL]. */
        uint64_t cc0_sel               : 3;  /**< [  2:  0](R/W) CC0 downsampling select. See [CC7_SEL]. */
#else /* Word 0 - Little Endian */
        uint64_t cc0_sel               : 3;  /**< [  2:  0](R/W) CC0 downsampling select. See [CC7_SEL]. */
        uint64_t cc1_sel               : 3;  /**< [  5:  3](R/W) CC1 downsampling select. See [CC7_SEL]. */
        uint64_t cc2_sel               : 3;  /**< [  8:  6](R/W) CC2 downsampling select. See [CC7_SEL]. */
        uint64_t cc3_sel               : 3;  /**< [ 11:  9](R/W) CC3 downsampling select. See [CC7_SEL]. */
        uint64_t cc4_sel               : 3;  /**< [ 14: 12](R/W) CC4 downsampling select. See [CC7_SEL]. */
        uint64_t cc5_sel               : 3;  /**< [ 17: 15](R/W) CC5 downsampling select. See [CC7_SEL]. */
        uint64_t cc6_sel               : 3;  /**< [ 20: 18](R/W) CC6 downsampling select. See [CC7_SEL]. */
        uint64_t cc7_sel               : 3;  /**< [ 23: 21](R/W) CC7 downsampling select. Legal values:
                                                                 0x0 = Sample every cycle.
                                                                 0x1 = Sample every two cycle.
                                                                 0x2 = Sample every four cycles.
                                                                 0x3-0x7 = Do not sample.

                                                                 Typical use cases:

                                                                 * MB1/MB21, 6x30.7Msps (reset value):
                                                                 _ [CC7_SEL] = 7, [CC6_SEL] = 7, [CC5_SEL] = 2, [CC4_SEL] = 2,
                                                                   [CC3_SEL] = 2, [CC2_SEL] = 2, [CC1_SEL] = 2, [CC0_SEL] = 2.
                                                                 * MB2/MB22, 61.4 + 4x30.7Msps:
                                                                 _ [CC7_SEL] = 7, [CC6_SEL] = 7, [CC5_SEL] = 7, [CC4_SEL] = 2,
                                                                   [CC3_SEL] = 2, [CC2_SEL] = 2, [CC1_SEL] = 2, [CC0_SEL] = 1.
                                                                 * MB3/MB23, 2x61.4 + 2x30.7Msps:
                                                                 _ [CC7_SEL] = 7, [CC6_SEL] = 7, [CC5_SEL] = 7, [CC4_SEL] = 7,
                                                                   [CC3_SEL] = 2, [CC2_SEL] = 2, [CC1_SEL] = 1, [CC0_SEL] = 1.
                                                                 * MB4/MB24, 3x61.4Msps:
                                                                 _ [CC7_SEL] = 7, [CC6_SEL] = 7, [CC5_SEL] = 7, [CC4_SEL] = 7,
                                                                   [CC3_SEL] = 7, [CC2_SEL] = 1, [CC1_SEL] = 1, [CC0_SEL] = 1.
                                                                 * MB5/MB25, 122.8 + 2x30.7Msps:
                                                                 _ [CC7_SEL] = 7, [CC6_SEL] = 7, [CC5_SEL] = 7, [CC4_SEL] = 7,
                                                                   [CC3_SEL] = 7, [CC2_SEL] = 2, [CC1_SEL] = 2, [CC0_SEL] = 0.
                                                                 * MB6/MB26, 122.8 + 61.4Msps:
                                                                 _ [CC7_SEL] = 7, [CC6_SEL] = 7, [CC5_SEL] = 7, [CC4_SEL] = 7,
                                                                   [CC3_SEL] = 7, [CC2_SEL] = 7, [CC1_SEL] = 1, [CC0_SEL] = 0.
                                                                 * MB7, 4x30.7Msps:
                                                                 _ [CC7_SEL] = 7, [CC6_SEL] = 7, [CC5_SEL] = 7, [CC4_SEL] = 7,
                                                                   [CC3_SEL] = 2, [CC2_SEL] = 2, [CC1_SEL] = 2, [CC0_SEL] = 2.
                                                                 * MB8, 61.4 + 2x30.7Msps:
                                                                 _ [CC7_SEL] = 7, [CC6_SEL] = 7, [CC5_SEL] = 7, [CC4_SEL] = 7,
                                                                   [CC3_SEL] = 7, [CC2_SEL] = 2, [CC1_SEL] = 2, [CC0_SEL] = 1.
                                                                 * MB9, 2x61.4Msps:
                                                                 _ [CC7_SEL] = 7, [CC6_SEL] = 7, [CC5_SEL] = 7, [CC4_SEL] = 7,
                                                                   [CC3_SEL] = 7, [CC2_SEL] = 7, [CC1_SEL] = 1, [CC0_SEL] = 1.
                                                                 * MB10, 122.8Msps:
                                                                 _ [CC7_SEL] = 7, [CC6_SEL] = 7, [CC5_SEL] = 7, [CC4_SEL] = 7,
                                                                   [CC3_SEL] = 7, [CC2_SEL] = 7, [CC1_SEL] = 7, [CC0_SEL] = 0.
                                                                 * MA1, 2x245.8Msps:
                                                                 _ [CC7_SEL] = 7, [CC6_SEL] = 7, [CC5_SEL] = 7, [CC4_SEL] = 7,
                                                                   [CC3_SEL] = 7, [CC2_SEL] = 7, [CC1_SEL] = 0, [CC0_SEL] = 0.
                                                                 * MA2, 245.8 + 2x122.8Msps:
                                                                 _ [CC7_SEL] = 7, [CC6_SEL] = 7, [CC5_SEL] = 7, [CC4_SEL] = 7,
                                                                   [CC3_SEL] = 7, [CC2_SEL] = 1, [CC1_SEL] = 1, [CC0_SEL] = 0.
                                                                 * MA3, 245.8 + 122.8 + 2x61.4Msps:
                                                                 _ [CC7_SEL] = 7, [CC6_SEL] = 7, [CC5_SEL] = 7, [CC4_SEL] = 7,
                                                                   [CC3_SEL] = 2, [CC2_SEL] = 2, [CC1_SEL] = 1, [CC0_SEL] = 0.
                                                                 * MA4, 245.8 + 4x61.4Msps:
                                                                 _ [CC7_SEL] = 7, [CC6_SEL] = 7, [CC5_SEL] = 7, [CC4_SEL] = 2,
                                                                   [CC3_SEL] = 2, [CC2_SEL] = 2, [CC1_SEL] = 2, [CC0_SEL] = 0.
                                                                 * MA5, 4x122.8Msps:
                                                                 _ [CC7_SEL] = 7, [CC6_SEL] = 7, [CC5_SEL] = 7, [CC4_SEL] = 7,
                                                                   [CC3_SEL] = 1, [CC2_SEL] = 1, [CC1_SEL] = 1, [CC0_SEL] = 1.
                                                                 * MA6, 3x122.8 + 2x61.4Msps:
                                                                 _ [CC7_SEL] = 7, [CC6_SEL] = 7, [CC5_SEL] = 7, [CC4_SEL] = 2,
                                                                   [CC3_SEL] = 2, [CC2_SEL] = 1, [CC1_SEL] = 1, [CC0_SEL] = 1.
                                                                 * MA7, 2x122.8 + 4x61.4Msps:
                                                                 _ [CC7_SEL] = 7, [CC6_SEL] = 7, [CC5_SEL] = 2, [CC4_SEL] = 2,
                                                                   [CC3_SEL] = 2, [CC2_SEL] = 2, [CC1_SEL] = 1, [CC0_SEL] = 1.
                                                                 * MA8, 122.8 + 6x61.4Msps:
                                                                 _ [CC7_SEL] = 7, [CC6_SEL] = 2, [CC5_SEL] = 2, [CC4_SEL] = 2,
                                                                   [CC3_SEL] = 2, [CC2_SEL] = 2, [CC1_SEL] = 2, [CC0_SEL] = 1.
                                                                 * MA9, 8x61.4Msps:
                                                                 _ [CC7_SEL] = 2, [CC6_SEL] = 2, [CC5_SEL] = 2, [CC4_SEL] = 2,
                                                                   [CC3_SEL] = 2, [CC2_SEL] = 2, [CC1_SEL] = 2, [CC0_SEL] = 2. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tx_downsample_sel_s cn; */
};
typedef union cavm_tofcx_tx_downsample_sel cavm_tofcx_tx_downsample_sel_t;

static inline uint64_t CAVM_TOFCX_TX_DOWNSAMPLE_SEL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TX_DOWNSAMPLE_SEL(uint64_t a)
{
    if (a<=3)
        return 0x87e042e03028ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_TX_DOWNSAMPLE_SEL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TX_DOWNSAMPLE_SEL(a) cavm_tofcx_tx_downsample_sel_t
#define bustype_CAVM_TOFCX_TX_DOWNSAMPLE_SEL(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TX_DOWNSAMPLE_SEL(a) "TOFCX_TX_DOWNSAMPLE_SEL"
#define busnum_CAVM_TOFCX_TX_DOWNSAMPLE_SEL(a) (a)
#define arguments_CAVM_TOFCX_TX_DOWNSAMPLE_SEL(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_tx_dynamic_param0_strm#
 *
 * TOFC TX Filter Dynamic Parameter 0 Register
 * Stores the current dynamic parameters per TX stream and used for filtering and
 * sampling in TX/DL.
 * Additional parameters are stored in TOFC()_TX_DYNAMIC_PARAM1_STRM().
 */
union cavm_tofcx_tx_dynamic_param0_strmx
{
    uint64_t u;
    struct cavm_tofcx_tx_dynamic_param0_strmx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t symbol_read_offset    : 16; /**< [ 63: 48](RO/H) Symbol read offset in flits (32byte units). */
        uint64_t symbol_index          : 4;  /**< [ 47: 44](RO/H) Symbol index. */
        uint64_t symbol_size           : 14; /**< [ 43: 30](RO/H) Symbol size in sample units. */
        uint64_t upsample_sel          : 3;  /**< [ 29: 27](RO/H) Select for the upsampler.
                                                                        0x0 = Does not insert any zero.
                                                                        0x1 = Inserts 1 zero every sample.
                                                                        0x2 = Inserts 3 zeros every sample.
                                                                        0x3 = Inserts 7 zeros every sample.
                                                                        0x4 = Inserts 15 zeros every sample.
                                                                        0x5..0x7 = reserved. */
        uint64_t reserved_25_26        : 2;
        uint64_t coeff_sel             : 5;  /**< [ 24: 20](RO/H) Selects a set of 26 filter coefficients from the coefficient RAM. */
        uint64_t scsf_a                : 4;  /**< [ 19: 16](RO/H) Input A for SCSF Filter. */
        uint64_t nco                   : 16; /**< [ 15:  0](RO/H) NCO value. */
#else /* Word 0 - Little Endian */
        uint64_t nco                   : 16; /**< [ 15:  0](RO/H) NCO value. */
        uint64_t scsf_a                : 4;  /**< [ 19: 16](RO/H) Input A for SCSF Filter. */
        uint64_t coeff_sel             : 5;  /**< [ 24: 20](RO/H) Selects a set of 26 filter coefficients from the coefficient RAM. */
        uint64_t reserved_25_26        : 2;
        uint64_t upsample_sel          : 3;  /**< [ 29: 27](RO/H) Select for the upsampler.
                                                                        0x0 = Does not insert any zero.
                                                                        0x1 = Inserts 1 zero every sample.
                                                                        0x2 = Inserts 3 zeros every sample.
                                                                        0x3 = Inserts 7 zeros every sample.
                                                                        0x4 = Inserts 15 zeros every sample.
                                                                        0x5..0x7 = reserved. */
        uint64_t symbol_size           : 14; /**< [ 43: 30](RO/H) Symbol size in sample units. */
        uint64_t symbol_index          : 4;  /**< [ 47: 44](RO/H) Symbol index. */
        uint64_t symbol_read_offset    : 16; /**< [ 63: 48](RO/H) Symbol read offset in flits (32byte units). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tx_dynamic_param0_strmx_s cn; */
};
typedef union cavm_tofcx_tx_dynamic_param0_strmx cavm_tofcx_tx_dynamic_param0_strmx_t;

static inline uint64_t CAVM_TOFCX_TX_DYNAMIC_PARAM0_STRMX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TX_DYNAMIC_PARAM0_STRMX(uint64_t a, uint64_t b)
{
    if ((a<=3) && (b<=15))
        return 0x87e042e03060ll + 0x80000ll * ((a) & 0x3) + 0x100ll * ((b) & 0xf);
    __cavm_csr_fatal("TOFCX_TX_DYNAMIC_PARAM0_STRMX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TX_DYNAMIC_PARAM0_STRMX(a,b) cavm_tofcx_tx_dynamic_param0_strmx_t
#define bustype_CAVM_TOFCX_TX_DYNAMIC_PARAM0_STRMX(a,b) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TX_DYNAMIC_PARAM0_STRMX(a,b) "TOFCX_TX_DYNAMIC_PARAM0_STRMX"
#define busnum_CAVM_TOFCX_TX_DYNAMIC_PARAM0_STRMX(a,b) (a)
#define arguments_CAVM_TOFCX_TX_DYNAMIC_PARAM0_STRMX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) tofc#_tx_dynamic_param1_strm#
 *
 * TOFC TX Filter Dynamic Parameter 1 Register
 * Stores the current dynamic parameter per-TX stream and used for scaling in TX/DL.
 */
union cavm_tofcx_tx_dynamic_param1_strmx
{
    uint64_t u;
    struct cavm_tofcx_tx_dynamic_param1_strmx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_33_63        : 31;
        uint64_t filter_bypass         : 1;  /**< [ 32: 32](RAZ) Filter Bypass Enable. */
        uint64_t cp_size               : 12; /**< [ 31: 20](RAZ) CP Size. */
        uint64_t ant_gain_scale        : 4;  /**< [ 19: 16](RO/H) Antenna gain scale. */
        uint64_t reserved_14_15        : 2;
        uint64_t ant_gain              : 14; /**< [ 13:  0](RO/H) Antenna gain. */
#else /* Word 0 - Little Endian */
        uint64_t ant_gain              : 14; /**< [ 13:  0](RO/H) Antenna gain. */
        uint64_t reserved_14_15        : 2;
        uint64_t ant_gain_scale        : 4;  /**< [ 19: 16](RO/H) Antenna gain scale. */
        uint64_t cp_size               : 12; /**< [ 31: 20](RAZ) CP Size. */
        uint64_t filter_bypass         : 1;  /**< [ 32: 32](RAZ) Filter Bypass Enable. */
        uint64_t reserved_33_63        : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tx_dynamic_param1_strmx_s cn; */
};
typedef union cavm_tofcx_tx_dynamic_param1_strmx cavm_tofcx_tx_dynamic_param1_strmx_t;

static inline uint64_t CAVM_TOFCX_TX_DYNAMIC_PARAM1_STRMX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TX_DYNAMIC_PARAM1_STRMX(uint64_t a, uint64_t b)
{
    if ((a<=3) && (b<=15))
        return 0x87e042e03068ll + 0x80000ll * ((a) & 0x3) + 0x100ll * ((b) & 0xf);
    __cavm_csr_fatal("TOFCX_TX_DYNAMIC_PARAM1_STRMX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TX_DYNAMIC_PARAM1_STRMX(a,b) cavm_tofcx_tx_dynamic_param1_strmx_t
#define bustype_CAVM_TOFCX_TX_DYNAMIC_PARAM1_STRMX(a,b) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TX_DYNAMIC_PARAM1_STRMX(a,b) "TOFCX_TX_DYNAMIC_PARAM1_STRMX"
#define busnum_CAVM_TOFCX_TX_DYNAMIC_PARAM1_STRMX(a,b) (a)
#define arguments_CAVM_TOFCX_TX_DYNAMIC_PARAM1_STRMX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) tofc#_tx_enable
 *
 * TOFC TX ENABLE Register
 * Enables DMA along with individual streams.
 */
union cavm_tofcx_tx_enable
{
    uint64_t u;
    struct cavm_tofcx_tx_enable_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ready                 : 1;  /**< [ 63: 63](RO/H) Indicates TOFW-DL is ready to send data to the mapper. */
        uint64_t clock_gating_disable  : 1;  /**< [ 62: 62](R/W) When set, disables clock gating. Note - Clock gating is done to save power on
                                                                 filter paths that are not used depending on static configuration. */
        uint64_t reserved_17_61        : 45;
        uint64_t s7_en                 : 1;  /**< [ 16: 16](R/W) Enables DMA read for S7 SSB data stream (stream index 15). */
        uint64_t d7_en                 : 1;  /**< [ 15: 15](R/W) Enables DMA read for D7 data stream (stream index 14). */
        uint64_t s6_en                 : 1;  /**< [ 14: 14](R/W) Enables DMA read for S6 SSB data stream (stream index 13). */
        uint64_t d6_en                 : 1;  /**< [ 13: 13](R/W) Enables DMA read for D6 data stream (stream index 12). */
        uint64_t s5_en                 : 1;  /**< [ 12: 12](R/W) Enables DMA read for S5 SSB data stream (stream index 11). */
        uint64_t d5_en                 : 1;  /**< [ 11: 11](R/W) Enables DMA read for D5 data stream (stream index 10). */
        uint64_t s4_en                 : 1;  /**< [ 10: 10](R/W) Enables DMA read for S4 SSB data stream (stream index 9). */
        uint64_t d4_en                 : 1;  /**< [  9:  9](R/W) Enables DMA read for D4 data stream (stream index 8). */
        uint64_t s3_en                 : 1;  /**< [  8:  8](R/W) Enables DMA read for S3 SSB data stream (stream index 7). */
        uint64_t d3_en                 : 1;  /**< [  7:  7](R/W) Enables DMA read for D3 data stream (stream index 6). */
        uint64_t s2_en                 : 1;  /**< [  6:  6](R/W) Enables DMA read for S2 SSB data stream (stream index 5). */
        uint64_t d2_en                 : 1;  /**< [  5:  5](R/W) Enables DMA read for D2 data stream (stream index 4). */
        uint64_t s1_en                 : 1;  /**< [  4:  4](R/W) Enables DMA read for S1 SSB data stream (stream index 3). */
        uint64_t d1_en                 : 1;  /**< [  3:  3](R/W) Enables DMA read for D1 data stream (stream index 2). */
        uint64_t s0_en                 : 1;  /**< [  2:  2](R/W) Enables DMA read for S0 SSB data stream (stream index 1). */
        uint64_t d0_en                 : 1;  /**< [  1:  1](R/W) Enables DMA read for D0 data stream (stream index 0). */
        uint64_t dma_en                : 1;  /**< [  0:  0](R/W) Enables DMA. When set, it starts the DMA for the enabled streams.
                                                                 Individual streams are enabled by remaining bits of this register. */
#else /* Word 0 - Little Endian */
        uint64_t dma_en                : 1;  /**< [  0:  0](R/W) Enables DMA. When set, it starts the DMA for the enabled streams.
                                                                 Individual streams are enabled by remaining bits of this register. */
        uint64_t d0_en                 : 1;  /**< [  1:  1](R/W) Enables DMA read for D0 data stream (stream index 0). */
        uint64_t s0_en                 : 1;  /**< [  2:  2](R/W) Enables DMA read for S0 SSB data stream (stream index 1). */
        uint64_t d1_en                 : 1;  /**< [  3:  3](R/W) Enables DMA read for D1 data stream (stream index 2). */
        uint64_t s1_en                 : 1;  /**< [  4:  4](R/W) Enables DMA read for S1 SSB data stream (stream index 3). */
        uint64_t d2_en                 : 1;  /**< [  5:  5](R/W) Enables DMA read for D2 data stream (stream index 4). */
        uint64_t s2_en                 : 1;  /**< [  6:  6](R/W) Enables DMA read for S2 SSB data stream (stream index 5). */
        uint64_t d3_en                 : 1;  /**< [  7:  7](R/W) Enables DMA read for D3 data stream (stream index 6). */
        uint64_t s3_en                 : 1;  /**< [  8:  8](R/W) Enables DMA read for S3 SSB data stream (stream index 7). */
        uint64_t d4_en                 : 1;  /**< [  9:  9](R/W) Enables DMA read for D4 data stream (stream index 8). */
        uint64_t s4_en                 : 1;  /**< [ 10: 10](R/W) Enables DMA read for S4 SSB data stream (stream index 9). */
        uint64_t d5_en                 : 1;  /**< [ 11: 11](R/W) Enables DMA read for D5 data stream (stream index 10). */
        uint64_t s5_en                 : 1;  /**< [ 12: 12](R/W) Enables DMA read for S5 SSB data stream (stream index 11). */
        uint64_t d6_en                 : 1;  /**< [ 13: 13](R/W) Enables DMA read for D6 data stream (stream index 12). */
        uint64_t s6_en                 : 1;  /**< [ 14: 14](R/W) Enables DMA read for S6 SSB data stream (stream index 13). */
        uint64_t d7_en                 : 1;  /**< [ 15: 15](R/W) Enables DMA read for D7 data stream (stream index 14). */
        uint64_t s7_en                 : 1;  /**< [ 16: 16](R/W) Enables DMA read for S7 SSB data stream (stream index 15). */
        uint64_t reserved_17_61        : 45;
        uint64_t clock_gating_disable  : 1;  /**< [ 62: 62](R/W) When set, disables clock gating. Note - Clock gating is done to save power on
                                                                 filter paths that are not used depending on static configuration. */
        uint64_t ready                 : 1;  /**< [ 63: 63](RO/H) Indicates TOFW-DL is ready to send data to the mapper. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tx_enable_s cn; */
};
typedef union cavm_tofcx_tx_enable cavm_tofcx_tx_enable_t;

static inline uint64_t CAVM_TOFCX_TX_ENABLE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TX_ENABLE(uint64_t a)
{
    if (a<=3)
        return 0x87e042e03000ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_TX_ENABLE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TX_ENABLE(a) cavm_tofcx_tx_enable_t
#define bustype_CAVM_TOFCX_TX_ENABLE(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TX_ENABLE(a) "TOFCX_TX_ENABLE"
#define busnum_CAVM_TOFCX_TX_ENABLE(a) (a)
#define arguments_CAVM_TOFCX_TX_ENABLE(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_tx_filter#_cfg0
 *
 * TOFC TX Filter Config 0 Register
 * Configures the circular buffers per-TX stream for storing the dynamic parameters for
 * filtering and sampling in TX/DL.
 */
union cavm_tofcx_tx_filterx_cfg0
{
    uint64_t u;
    struct cavm_tofcx_tx_filterx_cfg0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t target_mem            : 1;  /**< [ 63: 63](R/W) Specifies the target memory for the address.
                                                                 0 = SMEM.
                                                                 1 = LLC/DRAM. */
        uint64_t buf_enable            : 1;  /**< [ 62: 62](R/W) Buffer enable. When the buffer is disabled, the read pointer is also reset to 0. */
        uint64_t cmd_type              : 2;  /**< [ 61: 60](R/W) Command type for LLC/DRAM writes. The read operations are
                                                                 enumerated by MHBW_PNB_RD_CMD_E. */
        uint64_t hp                    : 1;  /**< [ 59: 59](R/W) When set, buffer read requests are sent with high priority. */
        uint64_t dswap                 : 3;  /**< [ 58: 56](R/W) The byte swap mode for DMA to LLC/DRAM. Enumerated in MHBW_PNB_DSWAP_E.
                                                                 DMA to BPHY SMEM ignores this field. */
        uint64_t reserved_48_55        : 8;
        uint64_t buffer_base_addr      : 48; /**< [ 47:  0](R/W) Base address of the circular buffer; units in flits (1 flit = 32 bytes). */
#else /* Word 0 - Little Endian */
        uint64_t buffer_base_addr      : 48; /**< [ 47:  0](R/W) Base address of the circular buffer; units in flits (1 flit = 32 bytes). */
        uint64_t reserved_48_55        : 8;
        uint64_t dswap                 : 3;  /**< [ 58: 56](R/W) The byte swap mode for DMA to LLC/DRAM. Enumerated in MHBW_PNB_DSWAP_E.
                                                                 DMA to BPHY SMEM ignores this field. */
        uint64_t hp                    : 1;  /**< [ 59: 59](R/W) When set, buffer read requests are sent with high priority. */
        uint64_t cmd_type              : 2;  /**< [ 61: 60](R/W) Command type for LLC/DRAM writes. The read operations are
                                                                 enumerated by MHBW_PNB_RD_CMD_E. */
        uint64_t buf_enable            : 1;  /**< [ 62: 62](R/W) Buffer enable. When the buffer is disabled, the read pointer is also reset to 0. */
        uint64_t target_mem            : 1;  /**< [ 63: 63](R/W) Specifies the target memory for the address.
                                                                 0 = SMEM.
                                                                 1 = LLC/DRAM. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tx_filterx_cfg0_s cn; */
};
typedef union cavm_tofcx_tx_filterx_cfg0 cavm_tofcx_tx_filterx_cfg0_t;

static inline uint64_t CAVM_TOFCX_TX_FILTERX_CFG0(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TX_FILTERX_CFG0(uint64_t a, uint64_t b)
{
    if ((a<=3) && (b<=15))
        return 0x87e042e03038ll + 0x80000ll * ((a) & 0x3) + 0x100ll * ((b) & 0xf);
    __cavm_csr_fatal("TOFCX_TX_FILTERX_CFG0", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TX_FILTERX_CFG0(a,b) cavm_tofcx_tx_filterx_cfg0_t
#define bustype_CAVM_TOFCX_TX_FILTERX_CFG0(a,b) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TX_FILTERX_CFG0(a,b) "TOFCX_TX_FILTERX_CFG0"
#define busnum_CAVM_TOFCX_TX_FILTERX_CFG0(a,b) (a)
#define arguments_CAVM_TOFCX_TX_FILTERX_CFG0(a,b) (a),(b),-1,-1

/**
 * Register (RSL) tofc#_tx_filter#_cfg1
 *
 * TOFC TX Filter Config 1 Register
 * Configures the circular buffers per-TX stream for storing the dynamic parameters for
 * filtering and sampling in TX/DL.
 */
union cavm_tofcx_tx_filterx_cfg1
{
    uint64_t u;
    struct cavm_tofcx_tx_filterx_cfg1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t read_addr             : 16; /**< [ 31: 16](RO/H) Read address within the circular buffer for last DMA; units in flits (32byte units). */
        uint64_t buffer_size           : 16; /**< [ 15:  0](R/W) Circular buffer size; units in flits (1 flit = 32 bytes). */
#else /* Word 0 - Little Endian */
        uint64_t buffer_size           : 16; /**< [ 15:  0](R/W) Circular buffer size; units in flits (1 flit = 32 bytes). */
        uint64_t read_addr             : 16; /**< [ 31: 16](RO/H) Read address within the circular buffer for last DMA; units in flits (32byte units). */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tx_filterx_cfg1_s cn; */
};
typedef union cavm_tofcx_tx_filterx_cfg1 cavm_tofcx_tx_filterx_cfg1_t;

static inline uint64_t CAVM_TOFCX_TX_FILTERX_CFG1(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TX_FILTERX_CFG1(uint64_t a, uint64_t b)
{
    if ((a<=3) && (b<=15))
        return 0x87e042e03040ll + 0x80000ll * ((a) & 0x3) + 0x100ll * ((b) & 0xf);
    __cavm_csr_fatal("TOFCX_TX_FILTERX_CFG1", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TX_FILTERX_CFG1(a,b) cavm_tofcx_tx_filterx_cfg1_t
#define bustype_CAVM_TOFCX_TX_FILTERX_CFG1(a,b) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TX_FILTERX_CFG1(a,b) "TOFCX_TX_FILTERX_CFG1"
#define busnum_CAVM_TOFCX_TX_FILTERX_CFG1(a,b) (a)
#define arguments_CAVM_TOFCX_TX_FILTERX_CFG1(a,b) (a),(b),-1,-1

/**
 * Register (RSL) tofc#_tx_filter#_sp
 *
 * TOFC TX Filter Static Configuration Register
 * Configures the static parameters per-TX stream for filtering and sampling in TX/DL. The values are
 * sampled at the beginning of a symbol by the filter.
 */
union cavm_tofcx_tx_filterx_sp
{
    uint64_t u;
    struct cavm_tofcx_tx_filterx_sp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_10_63        : 54;
        uint64_t scs_type              : 2;  /**< [  9:  8](R/W) SCS type of the stream. */
        uint64_t cp_type               : 1;  /**< [  7:  7](R/W) CP type of the stream.  0: Normal CP, 1: Extended CP. */
        uint64_t reserved_4_6          : 3;
        uint64_t cc_bw                 : 4;  /**< [  3:  0](R/W) CC bandwidth of the stream. */
#else /* Word 0 - Little Endian */
        uint64_t cc_bw                 : 4;  /**< [  3:  0](R/W) CC bandwidth of the stream. */
        uint64_t reserved_4_6          : 3;
        uint64_t cp_type               : 1;  /**< [  7:  7](R/W) CP type of the stream.  0: Normal CP, 1: Extended CP. */
        uint64_t scs_type              : 2;  /**< [  9:  8](R/W) SCS type of the stream. */
        uint64_t reserved_10_63        : 54;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tx_filterx_sp_s cn; */
};
typedef union cavm_tofcx_tx_filterx_sp cavm_tofcx_tx_filterx_sp_t;

static inline uint64_t CAVM_TOFCX_TX_FILTERX_SP(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TX_FILTERX_SP(uint64_t a, uint64_t b)
{
    if ((a<=3) && (b<=15))
        return 0x87e042e03058ll + 0x80000ll * ((a) & 0x3) + 0x100ll * ((b) & 0xf);
    __cavm_csr_fatal("TOFCX_TX_FILTERX_SP", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TX_FILTERX_SP(a,b) cavm_tofcx_tx_filterx_sp_t
#define bustype_CAVM_TOFCX_TX_FILTERX_SP(a,b) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TX_FILTERX_SP(a,b) "TOFCX_TX_FILTERX_SP"
#define busnum_CAVM_TOFCX_TX_FILTERX_SP(a,b) (a)
#define arguments_CAVM_TOFCX_TX_FILTERX_SP(a,b) (a),(b),-1,-1

/**
 * Register (RSL) tofc#_tx_filter_#coeff#
 *
 * TOFC TX Filter Coefficient RAM Registers
 * TX filter coefficient RAM holding up to 32 sets ({b} index of this register) of
 * 26 coefficients.
 *
 * Each set has 8 address locations ({c} index of this register). Four 16-bit
 * coefficients are placed in each address location. The 26 coefficients of the
 * set are placed in the first 7 locations with the 8th location left unused.
 *
 * On reception of dynamic configuration for the next symbol,
 * TOFC_DL_DYNAMIC_PARAM_S[COEFF_SEL] specifies the coefficient set. Hardware
 * reads the 26 coefficients from the RAM and uses them to configure the SCSF when
 * the symbol arrives.
 */
union cavm_tofcx_tx_filter_xcoeffx
{
    uint64_t u;
    struct cavm_tofcx_tx_filter_xcoeffx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t coeff3                : 16; /**< [ 63: 48](R/W) SCSF Coefficient[{c}*4+3]. */
        uint64_t coeff2                : 16; /**< [ 47: 32](R/W) SCSF Coefficient[{c}*4+2]. */
        uint64_t coeff1                : 16; /**< [ 31: 16](R/W) SCSF Coefficient[{c}*4+1]. */
        uint64_t coeff0                : 16; /**< [ 15:  0](R/W) SCSF Coefficient[{c}*4+0]. */
#else /* Word 0 - Little Endian */
        uint64_t coeff0                : 16; /**< [ 15:  0](R/W) SCSF Coefficient[{c}*4+0]. */
        uint64_t coeff1                : 16; /**< [ 31: 16](R/W) SCSF Coefficient[{c}*4+1]. */
        uint64_t coeff2                : 16; /**< [ 47: 32](R/W) SCSF Coefficient[{c}*4+2]. */
        uint64_t coeff3                : 16; /**< [ 63: 48](R/W) SCSF Coefficient[{c}*4+3]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tx_filter_xcoeffx_s cn; */
};
typedef union cavm_tofcx_tx_filter_xcoeffx cavm_tofcx_tx_filter_xcoeffx_t;

static inline uint64_t CAVM_TOFCX_TX_FILTER_XCOEFFX(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TX_FILTER_XCOEFFX(uint64_t a, uint64_t b, uint64_t c)
{
    if ((a<=3) && (b<=31) && (c<=7))
        return 0x87e042e06000ll + 0x80000ll * ((a) & 0x3) + 0x40ll * ((b) & 0x1f) + 8ll * ((c) & 0x7);
    __cavm_csr_fatal("TOFCX_TX_FILTER_XCOEFFX", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TX_FILTER_XCOEFFX(a,b,c) cavm_tofcx_tx_filter_xcoeffx_t
#define bustype_CAVM_TOFCX_TX_FILTER_XCOEFFX(a,b,c) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TX_FILTER_XCOEFFX(a,b,c) "TOFCX_TX_FILTER_XCOEFFX"
#define busnum_CAVM_TOFCX_TX_FILTER_XCOEFFX(a,b,c) (a)
#define arguments_CAVM_TOFCX_TX_FILTER_XCOEFFX(a,b,c) (a),(b),(c),-1

/**
 * Register (RSL) tofc#_tx_ghb_control
 *
 * TOFC TX GHB CONTROL Register
 */
union cavm_tofcx_tx_ghb_control
{
    uint64_t u;
    struct cavm_tofcx_tx_ghb_control_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_23_63        : 41;
        uint64_t gmid_rxdp             : 3;  /**< [ 22: 20](R/W) GMID (Guest Machine ID) for RX DP buffer. May have a non-zero value when accessing LLC/DRAM. */
        uint64_t reserved_19           : 1;
        uint64_t gmid_txdp             : 3;  /**< [ 18: 16](R/W) GMID (Guest Machine ID) for TX DP buffer. May have a non-zero value when accessing LLC/DRAM. */
        uint64_t reserved_15           : 1;
        uint64_t gmid_tx               : 3;  /**< [ 14: 12](R/W) GMID (Guest Machine ID) for TX samples. */
        uint64_t ghb_rd_weight         : 6;  /**< [ 11:  6](R/W) The weighted round-robin arbitration weight used in the GHAB when
                                                                 arbitrating for read requests from this MHAB. A value of zero will
                                                                 only allow requests when there are no competing requests from other
                                                                 MHABs in the same GHAB, or when all competing MHABs have an effective
                                                                 weight of zero. A higher weight guarantees a greater share of the GHAB
                                                                 bandwidth. */
        uint64_t ghb_wr_weight         : 6;  /**< [  5:  0](R/W) The weighted round-robin arbitration weight used in the GHAB when
                                                                 arbitrating for write requests from this MHAB. A value of zero will
                                                                 only allow requests when there are no competing requests from other
                                                                 MHABs in the same GHAB, or when all competing MHABs have an effective
                                                                 weight of zero. A higher weight guarantees a greater share of the GHAB
                                                                 bandwidth. */
#else /* Word 0 - Little Endian */
        uint64_t ghb_wr_weight         : 6;  /**< [  5:  0](R/W) The weighted round-robin arbitration weight used in the GHAB when
                                                                 arbitrating for write requests from this MHAB. A value of zero will
                                                                 only allow requests when there are no competing requests from other
                                                                 MHABs in the same GHAB, or when all competing MHABs have an effective
                                                                 weight of zero. A higher weight guarantees a greater share of the GHAB
                                                                 bandwidth. */
        uint64_t ghb_rd_weight         : 6;  /**< [ 11:  6](R/W) The weighted round-robin arbitration weight used in the GHAB when
                                                                 arbitrating for read requests from this MHAB. A value of zero will
                                                                 only allow requests when there are no competing requests from other
                                                                 MHABs in the same GHAB, or when all competing MHABs have an effective
                                                                 weight of zero. A higher weight guarantees a greater share of the GHAB
                                                                 bandwidth. */
        uint64_t gmid_tx               : 3;  /**< [ 14: 12](R/W) GMID (Guest Machine ID) for TX samples. */
        uint64_t reserved_15           : 1;
        uint64_t gmid_txdp             : 3;  /**< [ 18: 16](R/W) GMID (Guest Machine ID) for TX DP buffer. May have a non-zero value when accessing LLC/DRAM. */
        uint64_t reserved_19           : 1;
        uint64_t gmid_rxdp             : 3;  /**< [ 22: 20](R/W) GMID (Guest Machine ID) for RX DP buffer. May have a non-zero value when accessing LLC/DRAM. */
        uint64_t reserved_23_63        : 41;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tx_ghb_control_s cn; */
};
typedef union cavm_tofcx_tx_ghb_control cavm_tofcx_tx_ghb_control_t;

static inline uint64_t CAVM_TOFCX_TX_GHB_CONTROL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TX_GHB_CONTROL(uint64_t a)
{
    if (a<=3)
        return 0x87e042e03210ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_TX_GHB_CONTROL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TX_GHB_CONTROL(a) cavm_tofcx_tx_ghb_control_t
#define bustype_CAVM_TOFCX_TX_GHB_CONTROL(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TX_GHB_CONTROL(a) "TOFCX_TX_GHB_CONTROL"
#define busnum_CAVM_TOFCX_TX_GHB_CONTROL(a) (a)
#define arguments_CAVM_TOFCX_TX_GHB_CONTROL(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_tx_link0_int_psm_msg_w0
 *
 * TOFC TX Link Layer 0 Interrupt Message w0 Register
 * JCA word 0 message to send for TX link layer 0 related interrupts.
 */
union cavm_tofcx_tx_link0_int_psm_msg_w0
{
    uint64_t u;
    struct cavm_tofcx_tx_link0_int_psm_msg_w0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t w0                    : 64; /**< [ 63:  0](R/W) Word 0 of JCA message. */
#else /* Word 0 - Little Endian */
        uint64_t w0                    : 64; /**< [ 63:  0](R/W) Word 0 of JCA message. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tx_link0_int_psm_msg_w0_s cn; */
};
typedef union cavm_tofcx_tx_link0_int_psm_msg_w0 cavm_tofcx_tx_link0_int_psm_msg_w0_t;

static inline uint64_t CAVM_TOFCX_TX_LINK0_INT_PSM_MSG_W0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TX_LINK0_INT_PSM_MSG_W0(uint64_t a)
{
    if (a<=3)
        return 0x87e042e00360ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_TX_LINK0_INT_PSM_MSG_W0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TX_LINK0_INT_PSM_MSG_W0(a) cavm_tofcx_tx_link0_int_psm_msg_w0_t
#define bustype_CAVM_TOFCX_TX_LINK0_INT_PSM_MSG_W0(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TX_LINK0_INT_PSM_MSG_W0(a) "TOFCX_TX_LINK0_INT_PSM_MSG_W0"
#define busnum_CAVM_TOFCX_TX_LINK0_INT_PSM_MSG_W0(a) (a)
#define arguments_CAVM_TOFCX_TX_LINK0_INT_PSM_MSG_W0(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_tx_link0_int_psm_msg_w1
 *
 * TOFC TX Link Layer 0 Interrupt Message w1 Register
 * JCA word 1 message to send for TX link layer 0 related interrupts.
 */
union cavm_tofcx_tx_link0_int_psm_msg_w1
{
    uint64_t u;
    struct cavm_tofcx_tx_link0_int_psm_msg_w1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t w1                    : 64; /**< [ 63:  0](R/W) Word 1 of JCA message. */
#else /* Word 0 - Little Endian */
        uint64_t w1                    : 64; /**< [ 63:  0](R/W) Word 1 of JCA message. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tx_link0_int_psm_msg_w1_s cn; */
};
typedef union cavm_tofcx_tx_link0_int_psm_msg_w1 cavm_tofcx_tx_link0_int_psm_msg_w1_t;

static inline uint64_t CAVM_TOFCX_TX_LINK0_INT_PSM_MSG_W1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TX_LINK0_INT_PSM_MSG_W1(uint64_t a)
{
    if (a<=3)
        return 0x87e042e00368ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_TX_LINK0_INT_PSM_MSG_W1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TX_LINK0_INT_PSM_MSG_W1(a) cavm_tofcx_tx_link0_int_psm_msg_w1_t
#define bustype_CAVM_TOFCX_TX_LINK0_INT_PSM_MSG_W1(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TX_LINK0_INT_PSM_MSG_W1(a) "TOFCX_TX_LINK0_INT_PSM_MSG_W1"
#define busnum_CAVM_TOFCX_TX_LINK0_INT_PSM_MSG_W1(a) (a)
#define arguments_CAVM_TOFCX_TX_LINK0_INT_PSM_MSG_W1(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_tx_mapper_cfg
 *
 * TOFC TX MAPPER Register
 * Contains configuration information for the mapper DL.
 */
union cavm_tofcx_tx_mapper_cfg
{
    uint64_t u;
    struct cavm_tofcx_tx_mapper_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_60_63        : 4;
        uint64_t scsf_bypass_all       : 1;  /**< [ 59: 59](R/W) If set, bypasses all SCSF filters in TX path. */
        uint64_t lane2                 : 1;  /**< [ 58: 58](R/W) Two Lane Mode. When set, it configures TOFW TX to transmit data to
                                                                 TOFM in Lanes 0-1 only. Following combinations show the modes supported -
                                                                 {A6G,TWOxTWO,LANE2} = 000 -- Legacy Mode, 8 Ant, 4 Lane (1x4) (MB1-MB6)
                                                                 {A6G,TWOxTWO,LANE2} = 001 -- B6G Mode, 8 Ant, 2 Lane (1x2) (MB7-MB10, MB21-MB26)
                                                                 {A6G,TWOxTWO,LANE2} = 010 -- B6G Mode, 16 Ant, 4 Lane (2x2) (MB21-MB26)
                                                                 {A6G,TWOxTWO,LANE2} = 101 -- A6G Mode, 2 Ant, 2 Lane (1x2) (MA1-MA9)
                                                                 {A6G,TWOxTWO,LANE2} = 110 -- A6G Mode, 4 Ant, 4 Lane (2x2) (MA1-MA9) */
        uint64_t twoxtwo               : 1;  /**< [ 57: 57](R/W) 2x2 mode where each lane is doubled in speed to support 8 antennas each.
                                                                 When set, it configures TOFW TX to send 2 frames of data to TOFM
                                                                 simultaneously, where one frame is sent on Lanes 0-1 and the other frame on
                                                                 Lanes 2-3. */
        uint64_t a6g                   : 1;  /**< [ 56: 56](R/W) A6G Mode. When set, it configures TOFW RX to be in A6G mode. */
        uint64_t reserved_38_55        : 18;
        uint64_t byte_swap_cfg         : 6;  /**< [ 37: 32](R/W) Bits defined as follows:
                                                                 * \<0\>: If 1, swaps endianness within a 16-bit I or a Q sample.
                                                                 * \<1\>: If 1, swaps I and Q positions within each sample.
                                                                   _ 0 = {Q,I} where I is in bits \<15:0\>, Q in bits \<31:16\>.
                                                                   _ 1 = {I,Q} where Q is in bits \<15:0\>, I in bits \<31:16\>.
                                                                 * \<2\>: If 1, changes sample endianness.
                                                                   _ 0 = Sample 0 on the LS side of the frame data.
                                                                   _ 1 = Sample 0 on the MS side of the frame data.
                                                                 * \<3\>: If 1, Swap sample[N] with sample[N+1] for all even values of N.
                                                                   _ 0 = Sample n on bits \<31:0\>, Sample (n+1) on bits \<63:32\>.
                                                                   _ 1 = Sample n on bits \<63:32\>, Sample (n+1) on bits \<31:0\>.
                                                                 * \<4\>: Control swap of 64b data slices.
                                                                   _ 0 = No 64b swap.
                                                                   _ 1 = Swap data \<63:0\> with data \<127:64\> and data \<191:128\> with data \<255:192\>.
                                                                 * \<5\>: Control swap of 128b data slices.
                                                                   _ 0 = No 128b swap.
                                                                   _ 1 = Swap data \<127:0\> with data \<255:128\>. Note: This bit should not be set
                                                                 when using only 2 lanes. */
        uint64_t reserved_31           : 1;
        uint64_t cc7_wt                : 3;  /**< [ 30: 28](R/W) Selects the number of CC7 samples per antenna in each received JESD frame.

                                                                 Typical use cases:
                                                                 * MB1/MB21, 6x30.7Msps (reset value):
                                                                 _ [CC7_WT] = 0, [CC6_WT] = 0, [CC5_WT] = 1, [CC4_WT] = 1,
                                                                   [CC3_WT] = 1, [CC2_WT] = 1, [CC1_WT] = 1, [CC0_WT] = 1.
                                                                 * MB2/MB22, 61.4 + 4x30.7Msps:
                                                                 _ [CC7_WT] = 0, [CC6_WT] = 0, [CC5_WT] = 0, [CC4_WT] = 1,
                                                                   [CC3_WT] = 1, [CC2_WT] = 1, [CC1_WT] = 1, [CC0_WT] = 2.
                                                                 * MB3/MB23, 2x61.4 + 2x30.7Msps:
                                                                 _ [CC7_WT] = 0, [CC6_WT] = 0, [CC5_WT] = 0, [CC4_WT] = 0,
                                                                   [CC3_WT] = 1, [CC2_WT] = 1, [CC1_WT] = 2, [CC0_WT] = 2.
                                                                 * MB4/MB24, 3x61.4Msps:
                                                                 _ [CC7_WT] = 0, [CC6_WT] = 0, [CC5_WT] = 0, [CC4_WT] = 0,
                                                                   [CC3_WT] = 0, [CC2_WT] = 2, [CC1_WT] = 2, [CC0_WT] = 2.
                                                                 * MB5/MB25, 122.8 + 2x30.7Msps:
                                                                 _ [CC7_WT] = 0, [CC6_WT] = 0, [CC5_WT] = 0, [CC4_WT] = 0,
                                                                   [CC3_WT] = 0, [CC2_WT] = 1, [CC1_WT] = 1, [CC0_WT] = 4.
                                                                 * MB6/MB26, 122.8 + 61.4Msps:
                                                                 _ [CC7_WT] = 0, [CC6_WT] = 0, [CC5_WT] = 0, [CC4_WT] = 0,
                                                                   [CC3_WT] = 0, [CC2_WT] = 0, [CC1_WT] = 2, [CC0_WT] = 4.
                                                                 * MB7, 4x30.7Msps:
                                                                 _ [CC7_WT] = 0, [CC6_WT] = 0, [CC5_WT] = 0, [CC4_WT] = 0,
                                                                   [CC3_WT] = 1, [CC2_WT] = 1, [CC1_WT] = 1, [CC0_WT] = 1.
                                                                 * MB8, 61.4 + 2x30.7Msps:
                                                                 _ [CC7_WT] = 0, [CC6_WT] = 0, [CC5_WT] = 0, [CC4_WT] = 0,
                                                                   [CC3_WT] = 0, [CC2_WT] = 1, [CC1_WT] = 1, [CC0_WT] = 2.
                                                                 * MB9, 2x61.4Msps:
                                                                 _ [CC7_WT] = 0, [CC6_WT] = 0, [CC5_WT] = 0, [CC4_WT] = 0,
                                                                   [CC3_WT] = 0, [CC2_WT] = 0, [CC1_WT] = 2, [CC0_WT] = 2.
                                                                 * MB10, 122.8Msps:
                                                                 _ [CC7_WT] = 0, [CC6_WT] = 0, [CC5_WT] = 0, [CC4_WT] = 0,
                                                                   [CC3_WT] = 0, [CC2_WT] = 0, [CC1_WT] = 0, [CC0_WT] = 4.
                                                                 * MA1, 2x245.8Msps:
                                                                 _ [CC7_WT] = 0, [CC6_WT] = 0, [CC5_WT] = 0, [CC4_WT] = 0,
                                                                   [CC3_WT] = 0, [CC2_WT] = 0, [CC1_WT] = 4, [CC0_WT] = 4.
                                                                 * MA2, 245.8 + 2x122.8Msps:
                                                                 _ [CC7_WT] = 0, [CC6_WT] = 0, [CC5_WT] = 0, [CC4_WT] = 0,
                                                                   [CC3_WT] = 0, [CC2_WT] = 2, [CC1_WT] = 2, [CC0_WT] = 4.
                                                                 * MA3, 245.8 + 122.8 + 2x61.4Msps:
                                                                 _ [CC7_WT] = 0, [CC6_WT] = 0, [CC5_WT] = 0, [CC4_WT] = 0,
                                                                   [CC3_WT] = 1, [CC2_WT] = 1, [CC1_WT] = 2, [CC0_WT] = 4.
                                                                 * MA4, 245.8 + 4x61.4Msps:
                                                                 _ [CC7_WT] = 0, [CC6_WT] = 0, [CC5_WT] = 0, [CC4_WT] = 1,
                                                                   [CC3_WT] = 1, [CC2_WT] = 1, [CC1_WT] = 1, [CC0_WT] = 4.
                                                                 * MA5, 4x122.8Msps:
                                                                 _ [CC7_WT] = 0, [CC6_WT] = 0, [CC5_WT] = 0, [CC4_WT] = 0,
                                                                   [CC3_WT] = 2, [CC2_WT] = 2, [CC1_WT] = 2, [CC0_WT] = 2.
                                                                 * MA6, 3x122.8 + 2x61.4Msps:
                                                                 _ [CC7_WT] = 0, [CC6_WT] = 0, [CC5_WT] = 0, [CC4_WT] = 1,
                                                                   [CC3_WT] = 1, [CC2_WT] = 2, [CC1_WT] = 2, [CC0_WT] = 2.
                                                                 * MA7, 2x122.8 + 4x61.4Msps:
                                                                 _ [CC7_WT] = 0, [CC6_WT] = 0, [CC5_WT] = 1, [CC4_WT] = 1,
                                                                   [CC3_WT] = 1, [CC2_WT] = 1, [CC1_WT] = 2, [CC0_WT] = 2.
                                                                 * MA8, 122.8 + 6x61.4Msps:
                                                                 _ [CC7_WT] = 0, [CC6_WT] = 1, [CC5_WT] = 1, [CC4_WT] = 1,
                                                                   [CC3_WT] = 1, [CC2_WT] = 1, [CC1_WT] = 1, [CC0_WT] = 2.
                                                                 * MA9, 8x61.4Msps:
                                                                 _ [CC7_WT] = 1, [CC6_WT] = 1, [CC5_WT] = 1, [CC4_WT] = 1,
                                                                   [CC3_WT] = 1, [CC2_WT] = 1, [CC1_WT] = 1, [CC0_WT] = 1.

                                                                 Constraints:
                                                                 * Legal [CC7_WT] values: 0, 1.
                                                                 * Legal [CC6_WT] values: 0, 1.
                                                                 * Legal [CC5_WT] values: 0, 1.
                                                                 * Legal [CC4_WT] values: 0, 1.
                                                                 * Legal [CC3_WT] values: 0, 1, 2.
                                                                 * Legal [CC2_WT] values: 0, 1, 2.
                                                                 * Legal [CC1_WT] values: 0, 1, 2, 4.
                                                                 * Legal [CC0_WT] values: 0, 1, 2, 4.
                                                                 * B6G: Sum of all [CCn_WT] values: 4, or 6.
                                                                 * A6G: Sum of all [CCn_WT] values: 8
                                                                 * [CCi_WT] \<= [CCj_WT] for all (i \> j). */
        uint64_t reserved_27           : 1;
        uint64_t cc6_wt                : 3;  /**< [ 26: 24](R/W) Selects the number of CC6 samples per antenna in each received JESD frame.
                                                                 See [CC7_WT] */
        uint64_t reserved_23           : 1;
        uint64_t cc5_wt                : 3;  /**< [ 22: 20](R/W) Selects the number of CC5 samples per antenna in each received JESD frame.
                                                                 See [CC7_WT] */
        uint64_t reserved_19           : 1;
        uint64_t cc4_wt                : 3;  /**< [ 18: 16](R/W) Selects the number of CC4 samples per antenna in each received JESD frame.
                                                                 See [CC7_WT] */
        uint64_t reserved_15           : 1;
        uint64_t cc3_wt                : 3;  /**< [ 14: 12](R/W) Selects the number of CC3 samples per antenna in each received JESD
                                                                 frame. See [CC7_WT]. */
        uint64_t reserved_11           : 1;
        uint64_t cc2_wt                : 3;  /**< [ 10:  8](R/W) Selects the number of CC2 samples per antenna in each received JESD
                                                                 frame. See [CC7_WT]. */
        uint64_t reserved_7            : 1;
        uint64_t cc1_wt                : 3;  /**< [  6:  4](R/W) Selects the number of CC1 samples per antenna in each received JESD
                                                                 frame. See [CC7_WT]. */
        uint64_t reserved_3            : 1;
        uint64_t cc0_wt                : 3;  /**< [  2:  0](R/W) Selects the number of CC0 samples per antenna in each received JESD
                                                                 frame. See [CC7_WT]. */
#else /* Word 0 - Little Endian */
        uint64_t cc0_wt                : 3;  /**< [  2:  0](R/W) Selects the number of CC0 samples per antenna in each received JESD
                                                                 frame. See [CC7_WT]. */
        uint64_t reserved_3            : 1;
        uint64_t cc1_wt                : 3;  /**< [  6:  4](R/W) Selects the number of CC1 samples per antenna in each received JESD
                                                                 frame. See [CC7_WT]. */
        uint64_t reserved_7            : 1;
        uint64_t cc2_wt                : 3;  /**< [ 10:  8](R/W) Selects the number of CC2 samples per antenna in each received JESD
                                                                 frame. See [CC7_WT]. */
        uint64_t reserved_11           : 1;
        uint64_t cc3_wt                : 3;  /**< [ 14: 12](R/W) Selects the number of CC3 samples per antenna in each received JESD
                                                                 frame. See [CC7_WT]. */
        uint64_t reserved_15           : 1;
        uint64_t cc4_wt                : 3;  /**< [ 18: 16](R/W) Selects the number of CC4 samples per antenna in each received JESD frame.
                                                                 See [CC7_WT] */
        uint64_t reserved_19           : 1;
        uint64_t cc5_wt                : 3;  /**< [ 22: 20](R/W) Selects the number of CC5 samples per antenna in each received JESD frame.
                                                                 See [CC7_WT] */
        uint64_t reserved_23           : 1;
        uint64_t cc6_wt                : 3;  /**< [ 26: 24](R/W) Selects the number of CC6 samples per antenna in each received JESD frame.
                                                                 See [CC7_WT] */
        uint64_t reserved_27           : 1;
        uint64_t cc7_wt                : 3;  /**< [ 30: 28](R/W) Selects the number of CC7 samples per antenna in each received JESD frame.

                                                                 Typical use cases:
                                                                 * MB1/MB21, 6x30.7Msps (reset value):
                                                                 _ [CC7_WT] = 0, [CC6_WT] = 0, [CC5_WT] = 1, [CC4_WT] = 1,
                                                                   [CC3_WT] = 1, [CC2_WT] = 1, [CC1_WT] = 1, [CC0_WT] = 1.
                                                                 * MB2/MB22, 61.4 + 4x30.7Msps:
                                                                 _ [CC7_WT] = 0, [CC6_WT] = 0, [CC5_WT] = 0, [CC4_WT] = 1,
                                                                   [CC3_WT] = 1, [CC2_WT] = 1, [CC1_WT] = 1, [CC0_WT] = 2.
                                                                 * MB3/MB23, 2x61.4 + 2x30.7Msps:
                                                                 _ [CC7_WT] = 0, [CC6_WT] = 0, [CC5_WT] = 0, [CC4_WT] = 0,
                                                                   [CC3_WT] = 1, [CC2_WT] = 1, [CC1_WT] = 2, [CC0_WT] = 2.
                                                                 * MB4/MB24, 3x61.4Msps:
                                                                 _ [CC7_WT] = 0, [CC6_WT] = 0, [CC5_WT] = 0, [CC4_WT] = 0,
                                                                   [CC3_WT] = 0, [CC2_WT] = 2, [CC1_WT] = 2, [CC0_WT] = 2.
                                                                 * MB5/MB25, 122.8 + 2x30.7Msps:
                                                                 _ [CC7_WT] = 0, [CC6_WT] = 0, [CC5_WT] = 0, [CC4_WT] = 0,
                                                                   [CC3_WT] = 0, [CC2_WT] = 1, [CC1_WT] = 1, [CC0_WT] = 4.
                                                                 * MB6/MB26, 122.8 + 61.4Msps:
                                                                 _ [CC7_WT] = 0, [CC6_WT] = 0, [CC5_WT] = 0, [CC4_WT] = 0,
                                                                   [CC3_WT] = 0, [CC2_WT] = 0, [CC1_WT] = 2, [CC0_WT] = 4.
                                                                 * MB7, 4x30.7Msps:
                                                                 _ [CC7_WT] = 0, [CC6_WT] = 0, [CC5_WT] = 0, [CC4_WT] = 0,
                                                                   [CC3_WT] = 1, [CC2_WT] = 1, [CC1_WT] = 1, [CC0_WT] = 1.
                                                                 * MB8, 61.4 + 2x30.7Msps:
                                                                 _ [CC7_WT] = 0, [CC6_WT] = 0, [CC5_WT] = 0, [CC4_WT] = 0,
                                                                   [CC3_WT] = 0, [CC2_WT] = 1, [CC1_WT] = 1, [CC0_WT] = 2.
                                                                 * MB9, 2x61.4Msps:
                                                                 _ [CC7_WT] = 0, [CC6_WT] = 0, [CC5_WT] = 0, [CC4_WT] = 0,
                                                                   [CC3_WT] = 0, [CC2_WT] = 0, [CC1_WT] = 2, [CC0_WT] = 2.
                                                                 * MB10, 122.8Msps:
                                                                 _ [CC7_WT] = 0, [CC6_WT] = 0, [CC5_WT] = 0, [CC4_WT] = 0,
                                                                   [CC3_WT] = 0, [CC2_WT] = 0, [CC1_WT] = 0, [CC0_WT] = 4.
                                                                 * MA1, 2x245.8Msps:
                                                                 _ [CC7_WT] = 0, [CC6_WT] = 0, [CC5_WT] = 0, [CC4_WT] = 0,
                                                                   [CC3_WT] = 0, [CC2_WT] = 0, [CC1_WT] = 4, [CC0_WT] = 4.
                                                                 * MA2, 245.8 + 2x122.8Msps:
                                                                 _ [CC7_WT] = 0, [CC6_WT] = 0, [CC5_WT] = 0, [CC4_WT] = 0,
                                                                   [CC3_WT] = 0, [CC2_WT] = 2, [CC1_WT] = 2, [CC0_WT] = 4.
                                                                 * MA3, 245.8 + 122.8 + 2x61.4Msps:
                                                                 _ [CC7_WT] = 0, [CC6_WT] = 0, [CC5_WT] = 0, [CC4_WT] = 0,
                                                                   [CC3_WT] = 1, [CC2_WT] = 1, [CC1_WT] = 2, [CC0_WT] = 4.
                                                                 * MA4, 245.8 + 4x61.4Msps:
                                                                 _ [CC7_WT] = 0, [CC6_WT] = 0, [CC5_WT] = 0, [CC4_WT] = 1,
                                                                   [CC3_WT] = 1, [CC2_WT] = 1, [CC1_WT] = 1, [CC0_WT] = 4.
                                                                 * MA5, 4x122.8Msps:
                                                                 _ [CC7_WT] = 0, [CC6_WT] = 0, [CC5_WT] = 0, [CC4_WT] = 0,
                                                                   [CC3_WT] = 2, [CC2_WT] = 2, [CC1_WT] = 2, [CC0_WT] = 2.
                                                                 * MA6, 3x122.8 + 2x61.4Msps:
                                                                 _ [CC7_WT] = 0, [CC6_WT] = 0, [CC5_WT] = 0, [CC4_WT] = 1,
                                                                   [CC3_WT] = 1, [CC2_WT] = 2, [CC1_WT] = 2, [CC0_WT] = 2.
                                                                 * MA7, 2x122.8 + 4x61.4Msps:
                                                                 _ [CC7_WT] = 0, [CC6_WT] = 0, [CC5_WT] = 1, [CC4_WT] = 1,
                                                                   [CC3_WT] = 1, [CC2_WT] = 1, [CC1_WT] = 2, [CC0_WT] = 2.
                                                                 * MA8, 122.8 + 6x61.4Msps:
                                                                 _ [CC7_WT] = 0, [CC6_WT] = 1, [CC5_WT] = 1, [CC4_WT] = 1,
                                                                   [CC3_WT] = 1, [CC2_WT] = 1, [CC1_WT] = 1, [CC0_WT] = 2.
                                                                 * MA9, 8x61.4Msps:
                                                                 _ [CC7_WT] = 1, [CC6_WT] = 1, [CC5_WT] = 1, [CC4_WT] = 1,
                                                                   [CC3_WT] = 1, [CC2_WT] = 1, [CC1_WT] = 1, [CC0_WT] = 1.

                                                                 Constraints:
                                                                 * Legal [CC7_WT] values: 0, 1.
                                                                 * Legal [CC6_WT] values: 0, 1.
                                                                 * Legal [CC5_WT] values: 0, 1.
                                                                 * Legal [CC4_WT] values: 0, 1.
                                                                 * Legal [CC3_WT] values: 0, 1, 2.
                                                                 * Legal [CC2_WT] values: 0, 1, 2.
                                                                 * Legal [CC1_WT] values: 0, 1, 2, 4.
                                                                 * Legal [CC0_WT] values: 0, 1, 2, 4.
                                                                 * B6G: Sum of all [CCn_WT] values: 4, or 6.
                                                                 * A6G: Sum of all [CCn_WT] values: 8
                                                                 * [CCi_WT] \<= [CCj_WT] for all (i \> j). */
        uint64_t reserved_31           : 1;
        uint64_t byte_swap_cfg         : 6;  /**< [ 37: 32](R/W) Bits defined as follows:
                                                                 * \<0\>: If 1, swaps endianness within a 16-bit I or a Q sample.
                                                                 * \<1\>: If 1, swaps I and Q positions within each sample.
                                                                   _ 0 = {Q,I} where I is in bits \<15:0\>, Q in bits \<31:16\>.
                                                                   _ 1 = {I,Q} where Q is in bits \<15:0\>, I in bits \<31:16\>.
                                                                 * \<2\>: If 1, changes sample endianness.
                                                                   _ 0 = Sample 0 on the LS side of the frame data.
                                                                   _ 1 = Sample 0 on the MS side of the frame data.
                                                                 * \<3\>: If 1, Swap sample[N] with sample[N+1] for all even values of N.
                                                                   _ 0 = Sample n on bits \<31:0\>, Sample (n+1) on bits \<63:32\>.
                                                                   _ 1 = Sample n on bits \<63:32\>, Sample (n+1) on bits \<31:0\>.
                                                                 * \<4\>: Control swap of 64b data slices.
                                                                   _ 0 = No 64b swap.
                                                                   _ 1 = Swap data \<63:0\> with data \<127:64\> and data \<191:128\> with data \<255:192\>.
                                                                 * \<5\>: Control swap of 128b data slices.
                                                                   _ 0 = No 128b swap.
                                                                   _ 1 = Swap data \<127:0\> with data \<255:128\>. Note: This bit should not be set
                                                                 when using only 2 lanes. */
        uint64_t reserved_38_55        : 18;
        uint64_t a6g                   : 1;  /**< [ 56: 56](R/W) A6G Mode. When set, it configures TOFW RX to be in A6G mode. */
        uint64_t twoxtwo               : 1;  /**< [ 57: 57](R/W) 2x2 mode where each lane is doubled in speed to support 8 antennas each.
                                                                 When set, it configures TOFW TX to send 2 frames of data to TOFM
                                                                 simultaneously, where one frame is sent on Lanes 0-1 and the other frame on
                                                                 Lanes 2-3. */
        uint64_t lane2                 : 1;  /**< [ 58: 58](R/W) Two Lane Mode. When set, it configures TOFW TX to transmit data to
                                                                 TOFM in Lanes 0-1 only. Following combinations show the modes supported -
                                                                 {A6G,TWOxTWO,LANE2} = 000 -- Legacy Mode, 8 Ant, 4 Lane (1x4) (MB1-MB6)
                                                                 {A6G,TWOxTWO,LANE2} = 001 -- B6G Mode, 8 Ant, 2 Lane (1x2) (MB7-MB10, MB21-MB26)
                                                                 {A6G,TWOxTWO,LANE2} = 010 -- B6G Mode, 16 Ant, 4 Lane (2x2) (MB21-MB26)
                                                                 {A6G,TWOxTWO,LANE2} = 101 -- A6G Mode, 2 Ant, 2 Lane (1x2) (MA1-MA9)
                                                                 {A6G,TWOxTWO,LANE2} = 110 -- A6G Mode, 4 Ant, 4 Lane (2x2) (MA1-MA9) */
        uint64_t scsf_bypass_all       : 1;  /**< [ 59: 59](R/W) If set, bypasses all SCSF filters in TX path. */
        uint64_t reserved_60_63        : 4;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tx_mapper_cfg_s cn; */
};
typedef union cavm_tofcx_tx_mapper_cfg cavm_tofcx_tx_mapper_cfg_t;

static inline uint64_t CAVM_TOFCX_TX_MAPPER_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TX_MAPPER_CFG(uint64_t a)
{
    if (a<=3)
        return 0x87e042e03018ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_TX_MAPPER_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TX_MAPPER_CFG(a) cavm_tofcx_tx_mapper_cfg_t
#define bustype_CAVM_TOFCX_TX_MAPPER_CFG(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TX_MAPPER_CFG(a) "TOFCX_TX_MAPPER_CFG"
#define busnum_CAVM_TOFCX_TX_MAPPER_CFG(a) (a)
#define arguments_CAVM_TOFCX_TX_MAPPER_CFG(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_tx_mapper_fifo_thres
 *
 * TOFC TX Mapper FIFO Threshold Register
 */
union cavm_tofcx_tx_mapper_fifo_thres
{
    uint64_t u;
    struct cavm_tofcx_tx_mapper_fifo_thres_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t upper_thres2          : 8;  /**< [ 23: 16](R/W) Sets the upper threshold of the mapper FIFO used to stop fetching from alignment
                                                                 FIFO to prevent from the FIFO going full. */
        uint64_t upper_thres1          : 8;  /**< [ 15:  8](R/W) Sets the upper threshold of the Mapper FIFO used to stop fetching from the stream FIFOs. */
        uint64_t lower_thres           : 8;  /**< [  7:  0](R/W) Sets the lower threshold of the mapper FIFO before the module is marked ready.
                                                                 It needs to have a minimum threshold to starting writing to the TOFM. */
#else /* Word 0 - Little Endian */
        uint64_t lower_thres           : 8;  /**< [  7:  0](R/W) Sets the lower threshold of the mapper FIFO before the module is marked ready.
                                                                 It needs to have a minimum threshold to starting writing to the TOFM. */
        uint64_t upper_thres1          : 8;  /**< [ 15:  8](R/W) Sets the upper threshold of the Mapper FIFO used to stop fetching from the stream FIFOs. */
        uint64_t upper_thres2          : 8;  /**< [ 23: 16](R/W) Sets the upper threshold of the mapper FIFO used to stop fetching from alignment
                                                                 FIFO to prevent from the FIFO going full. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tx_mapper_fifo_thres_s cn; */
};
typedef union cavm_tofcx_tx_mapper_fifo_thres cavm_tofcx_tx_mapper_fifo_thres_t;

static inline uint64_t CAVM_TOFCX_TX_MAPPER_FIFO_THRES(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TX_MAPPER_FIFO_THRES(uint64_t a)
{
    if (a<=3)
        return 0x87e042e03200ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_TX_MAPPER_FIFO_THRES", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TX_MAPPER_FIFO_THRES(a) cavm_tofcx_tx_mapper_fifo_thres_t
#define bustype_CAVM_TOFCX_TX_MAPPER_FIFO_THRES(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TX_MAPPER_FIFO_THRES(a) "TOFCX_TX_MAPPER_FIFO_THRES"
#define busnum_CAVM_TOFCX_TX_MAPPER_FIFO_THRES(a) (a)
#define arguments_CAVM_TOFCX_TX_MAPPER_FIFO_THRES(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_tx_sample_cnt_cc#
 *
 * TOFC TX Sample Count for CC Register
 * Counts number of samples (in flits) per-CC within the last 10 ms period for each output CC.
 */
union cavm_tofcx_tx_sample_cnt_ccx
{
    uint64_t u;
    struct cavm_tofcx_tx_sample_cnt_ccx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t sample_cnt            : 32; /**< [ 31:  0](R/W1C/H) Sample count (in flits) in the last 10 ms period. */
#else /* Word 0 - Little Endian */
        uint64_t sample_cnt            : 32; /**< [ 31:  0](R/W1C/H) Sample count (in flits) in the last 10 ms period. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tx_sample_cnt_ccx_s cn; */
};
typedef union cavm_tofcx_tx_sample_cnt_ccx cavm_tofcx_tx_sample_cnt_ccx_t;

static inline uint64_t CAVM_TOFCX_TX_SAMPLE_CNT_CCX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TX_SAMPLE_CNT_CCX(uint64_t a, uint64_t b)
{
    if ((a<=3) && (b<=7))
        return 0x87e042e030c0ll + 0x80000ll * ((a) & 0x3) + 0x100ll * ((b) & 0x7);
    __cavm_csr_fatal("TOFCX_TX_SAMPLE_CNT_CCX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TX_SAMPLE_CNT_CCX(a,b) cavm_tofcx_tx_sample_cnt_ccx_t
#define bustype_CAVM_TOFCX_TX_SAMPLE_CNT_CCX(a,b) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TX_SAMPLE_CNT_CCX(a,b) "TOFCX_TX_SAMPLE_CNT_CCX"
#define busnum_CAVM_TOFCX_TX_SAMPLE_CNT_CCX(a,b) (a)
#define arguments_CAVM_TOFCX_TX_SAMPLE_CNT_CCX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) tofc#_tx_sample_cnt_strm#
 *
 * TOFC TX Sample Count for Stream Register
 * Counts number of samples (in flits) per-TX stream within the last 10 ms period for
 * each input stream.
 */
union cavm_tofcx_tx_sample_cnt_strmx
{
    uint64_t u;
    struct cavm_tofcx_tx_sample_cnt_strmx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t sample_cnt            : 32; /**< [ 31:  0](R/W1C/H) Sample count (in flits) in the last 10 ms period. */
#else /* Word 0 - Little Endian */
        uint64_t sample_cnt            : 32; /**< [ 31:  0](R/W1C/H) Sample count (in flits) in the last 10 ms period. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tx_sample_cnt_strmx_s cn; */
};
typedef union cavm_tofcx_tx_sample_cnt_strmx cavm_tofcx_tx_sample_cnt_strmx_t;

static inline uint64_t CAVM_TOFCX_TX_SAMPLE_CNT_STRMX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TX_SAMPLE_CNT_STRMX(uint64_t a, uint64_t b)
{
    if ((a<=3) && (b<=15))
        return 0x87e042e030c8ll + 0x80000ll * ((a) & 0x3) + 0x100ll * ((b) & 0xf);
    __cavm_csr_fatal("TOFCX_TX_SAMPLE_CNT_STRMX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TX_SAMPLE_CNT_STRMX(a,b) cavm_tofcx_tx_sample_cnt_strmx_t
#define bustype_CAVM_TOFCX_TX_SAMPLE_CNT_STRMX(a,b) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TX_SAMPLE_CNT_STRMX(a,b) "TOFCX_TX_SAMPLE_CNT_STRMX"
#define busnum_CAVM_TOFCX_TX_SAMPLE_CNT_STRMX(a,b) (a)
#define arguments_CAVM_TOFCX_TX_SAMPLE_CNT_STRMX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) tofc#_tx_sample_width
 *
 * TOFC SAMPLE Width Configuration Register
 * Configures how the 16-bit sample from SMEM is to be converted to 15 bits.
 */
union cavm_tofcx_tx_sample_width
{
    uint64_t u;
    struct cavm_tofcx_tx_sample_width_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_3_63         : 61;
        uint64_t sample_width_sat_bypass : 1;/**< [  2:  2](R/W) Bypass sample saturation.
                                                                 _ 0 = Perform symmetric saturation to 15 bits.
                                                                 _ 1 = Bypass saturation. The rounded value is truncated instead of saturating.
                                                                       [SAMPLE_WIDTH_OPTION] must be one. */
        uint64_t sample_width_option   : 1;  /**< [  1:  1](R/W) Sample width conversion mode:
                                                                   0 = Y = SATn(X).
                                                                   1 = Y = SATn(ROUND(X)).

                                                                 SATn(X) is saturation to the range [-2^(14)+1, 2^(14)-1].

                                                                 ROUND(X) is symmetric rounding, defined as:
                                                                 _ if (X \>= 0) ROUND(X) = (X + 1)) \>\> 1;
                                                                 _ else ROUND(X) = -((-X + 1)) \>\> 1);

                                                                 Note that saturation can be bypassed by setting
                                                                 [SAMPLE_WIDTH_SAT_BYPASS]=1. */
        uint64_t sample_mode           : 1;  /**< [  0:  0](R/W) Enables width conversion of samples. */
#else /* Word 0 - Little Endian */
        uint64_t sample_mode           : 1;  /**< [  0:  0](R/W) Enables width conversion of samples. */
        uint64_t sample_width_option   : 1;  /**< [  1:  1](R/W) Sample width conversion mode:
                                                                   0 = Y = SATn(X).
                                                                   1 = Y = SATn(ROUND(X)).

                                                                 SATn(X) is saturation to the range [-2^(14)+1, 2^(14)-1].

                                                                 ROUND(X) is symmetric rounding, defined as:
                                                                 _ if (X \>= 0) ROUND(X) = (X + 1)) \>\> 1;
                                                                 _ else ROUND(X) = -((-X + 1)) \>\> 1);

                                                                 Note that saturation can be bypassed by setting
                                                                 [SAMPLE_WIDTH_SAT_BYPASS]=1. */
        uint64_t sample_width_sat_bypass : 1;/**< [  2:  2](R/W) Bypass sample saturation.
                                                                 _ 0 = Perform symmetric saturation to 15 bits.
                                                                 _ 1 = Bypass saturation. The rounded value is truncated instead of saturating.
                                                                       [SAMPLE_WIDTH_OPTION] must be one. */
        uint64_t reserved_3_63         : 61;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tx_sample_width_s cn; */
};
typedef union cavm_tofcx_tx_sample_width cavm_tofcx_tx_sample_width_t;

static inline uint64_t CAVM_TOFCX_TX_SAMPLE_WIDTH(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TX_SAMPLE_WIDTH(uint64_t a)
{
    if (a<=3)
        return 0x87e042e03020ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_TX_SAMPLE_WIDTH", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TX_SAMPLE_WIDTH(a) cavm_tofcx_tx_sample_width_t
#define bustype_CAVM_TOFCX_TX_SAMPLE_WIDTH(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TX_SAMPLE_WIDTH(a) "TOFCX_TX_SAMPLE_WIDTH"
#define busnum_CAVM_TOFCX_TX_SAMPLE_WIDTH(a) (a)
#define arguments_CAVM_TOFCX_TX_SAMPLE_WIDTH(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_tx_status
 *
 * TOFW TX Status Register
 */
union cavm_tofcx_tx_status
{
    uint64_t u;
    struct cavm_tofcx_tx_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t rx_dp_dma_rdy         : 1;  /**< [ 63: 63](RO/H) Indicates there are no pending requests from RX to be served to fetch its DP Config. */
        uint64_t reserved_48_62        : 15;
        uint64_t algn_fifo_empty       : 16; /**< [ 47: 32](RO/H) Indicates empty status of each alignment FIFO with Bit 0 corresponding to Stream 0. */
        uint64_t strm_fifo_empty       : 16; /**< [ 31: 16](RO/H) Indicates empty status of each stream FIFO with Bit 0 corresponding to stream 0. */
        uint64_t reserved_2_15         : 14;
        uint64_t mapper_fifo_empty     : 1;  /**< [  1:  1](RO/H) Indicates mapper FIFO is empty. */
        uint64_t txd_idle              : 1;  /**< [  0:  0](RO/H) Indicates TX DMA is totally idle with no requests in flight. */
#else /* Word 0 - Little Endian */
        uint64_t txd_idle              : 1;  /**< [  0:  0](RO/H) Indicates TX DMA is totally idle with no requests in flight. */
        uint64_t mapper_fifo_empty     : 1;  /**< [  1:  1](RO/H) Indicates mapper FIFO is empty. */
        uint64_t reserved_2_15         : 14;
        uint64_t strm_fifo_empty       : 16; /**< [ 31: 16](RO/H) Indicates empty status of each stream FIFO with Bit 0 corresponding to stream 0. */
        uint64_t algn_fifo_empty       : 16; /**< [ 47: 32](RO/H) Indicates empty status of each alignment FIFO with Bit 0 corresponding to Stream 0. */
        uint64_t reserved_48_62        : 15;
        uint64_t rx_dp_dma_rdy         : 1;  /**< [ 63: 63](RO/H) Indicates there are no pending requests from RX to be served to fetch its DP Config. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tx_status_s cn; */
};
typedef union cavm_tofcx_tx_status cavm_tofcx_tx_status_t;

static inline uint64_t CAVM_TOFCX_TX_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TX_STATUS(uint64_t a)
{
    if (a<=3)
        return 0x87e042e03218ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("TOFCX_TX_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TX_STATUS(a) cavm_tofcx_tx_status_t
#define bustype_CAVM_TOFCX_TX_STATUS(a) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TX_STATUS(a) "TOFCX_TX_STATUS"
#define busnum_CAVM_TOFCX_TX_STATUS(a) (a)
#define arguments_CAVM_TOFCX_TX_STATUS(a) (a),-1,-1,-1

/**
 * Register (RSL) tofc#_tx_stream#_buf_cfg
 *
 * TOFC TX Stream Buffer Configuration Register
 * Configures the circular buffers per-TX stream and same register is used by all
 * antenna within the stream.
 */
union cavm_tofcx_tx_streamx_buf_cfg
{
    uint64_t u;
    struct cavm_tofcx_tx_streamx_buf_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t read_addr             : 16; /**< [ 63: 48](RO/H) Read address within the circular buffer for last DMA; units in flits (32byte units). */
        uint64_t read_ant              : 4;  /**< [ 47: 44](RO/H) Read antenna number used for last DMA. */
        uint64_t hp                    : 1;  /**< [ 43: 43](R/W) When set, buffer read requests are sent with high priority. */
        uint64_t buf_enable            : 1;  /**< [ 42: 42](R/W) Buffer enable. When the buffer is disabled, the read pointer is also reset to 0. */
        uint64_t reserved_37_41        : 5;
        uint64_t buffer_base_addr      : 21; /**< [ 36: 16](R/W) Base address of the stream for antenna 0; units in flits (1 flit = 32 bytes). */
        uint64_t buffer_size           : 16; /**< [ 15:  0](R/W) Circular buffer size for each antenna; units in flits (1 flit = 32 bytes). The size should be kept
                                                                 large enough to hold 2-3 symbols. The symbol_size and symbol_read_offset read
                                                                 from dynamic config should be such that no wraparound is necessary. */
#else /* Word 0 - Little Endian */
        uint64_t buffer_size           : 16; /**< [ 15:  0](R/W) Circular buffer size for each antenna; units in flits (1 flit = 32 bytes). The size should be kept
                                                                 large enough to hold 2-3 symbols. The symbol_size and symbol_read_offset read
                                                                 from dynamic config should be such that no wraparound is necessary. */
        uint64_t buffer_base_addr      : 21; /**< [ 36: 16](R/W) Base address of the stream for antenna 0; units in flits (1 flit = 32 bytes). */
        uint64_t reserved_37_41        : 5;
        uint64_t buf_enable            : 1;  /**< [ 42: 42](R/W) Buffer enable. When the buffer is disabled, the read pointer is also reset to 0. */
        uint64_t hp                    : 1;  /**< [ 43: 43](R/W) When set, buffer read requests are sent with high priority. */
        uint64_t read_ant              : 4;  /**< [ 47: 44](RO/H) Read antenna number used for last DMA. */
        uint64_t read_addr             : 16; /**< [ 63: 48](RO/H) Read address within the circular buffer for last DMA; units in flits (32byte units). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tofcx_tx_streamx_buf_cfg_s cn; */
};
typedef union cavm_tofcx_tx_streamx_buf_cfg cavm_tofcx_tx_streamx_buf_cfg_t;

static inline uint64_t CAVM_TOFCX_TX_STREAMX_BUF_CFG(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOFCX_TX_STREAMX_BUF_CFG(uint64_t a, uint64_t b)
{
    if ((a<=3) && (b<=15))
        return 0x87e042e03030ll + 0x80000ll * ((a) & 0x3) + 0x100ll * ((b) & 0xf);
    __cavm_csr_fatal("TOFCX_TX_STREAMX_BUF_CFG", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_TOFCX_TX_STREAMX_BUF_CFG(a,b) cavm_tofcx_tx_streamx_buf_cfg_t
#define bustype_CAVM_TOFCX_TX_STREAMX_BUF_CFG(a,b) CSR_TYPE_RSL
#define basename_CAVM_TOFCX_TX_STREAMX_BUF_CFG(a,b) "TOFCX_TX_STREAMX_BUF_CFG"
#define busnum_CAVM_TOFCX_TX_STREAMX_BUF_CFG(a,b) (a)
#define arguments_CAVM_TOFCX_TX_STREAMX_BUF_CFG(a,b) (a),(b),-1,-1

#endif /* __CAVM_CSRS_TOFC_H__ */
