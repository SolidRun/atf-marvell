#ifndef __CAVM_CSRS_SPI_H__
#define __CAVM_CSRS_SPI_H__
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
 * OcteonTX SPI.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration spi_bar_e
 *
 * SPI Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define CAVM_SPI_BAR_E_SPIX_PF_BAR0(a) (0x804000000000ll + 0x1000000000ll * (a))
#define CAVM_SPI_BAR_E_SPIX_PF_BAR0_SIZE 0x40000000ull
#define CAVM_SPI_BAR_E_SPIX_PF_BAR4(a) (0x804100000000ll + 0x1000000000ll * (a))
#define CAVM_SPI_BAR_E_SPIX_PF_BAR4_SIZE 0x100000ull

/**
 * Enumeration spi_int_vec_e
 *
 * SPI MSI-X Vector Enumeration
 * Enumerates the MSI-X interrupt vectors.
 */
#define CAVM_SPI_INT_VEC_E_SPI_INTR (0)

/**
 * Register (NCB) spi#_clk_ctrl
 *
 * SPI Clock Control Register
 */
union cavm_spix_clk_ctrl
{
    uint64_t u;
    struct cavm_spix_clk_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t xspi_supports_xfer    : 1;  /**< [  7:  7](RO) Indicates is SPI supports XFER function. 1 = SPI supports xfer function. 0 = SPI
                                                                 does not supports xfer function. */
        uint64_t spi_imsc_shadow       : 1;  /**< [  6:  6](R/W) SPI interrupt enable. 1 = SPI INTR IS UNMASKED. 0 = SPI INTR IS MASKED. */
        uint64_t spi_sclk_force        : 1;  /**< [  5:  5](R/W) EMMC sclk clk gate override. 0 = EMMC sclk gating is enabled. 1 = EMMC sclk gating is disabled. */
        uint64_t spi_io_clk_div        : 4;  /**< [  4:  1](R/W) SPI IO clock divide control.
                                                                 0x0 = Divide by 4.   SPI clock is 200 MHz.
                                                                 0x1 = Divide by 6.   SPI clock is 133.33 MHz.
                                                                 0x2 = Divide by 8.   SPI clock is 100 MHz.
                                                                 0x3 = Divide by 10.  SPI clock is 80 MHz.
                                                                 0x4 = Divide by 12.  SPI clock is 66.666 MHz.
                                                                 0x5 = Divide by 16.  SPI clock is 50 MHz.
                                                                 0x6 = Divide by 18.  SPI clock is 44.44 MHz.
                                                                 0x7 = Divide by 20.  SPI clock is 40 MHz.
                                                                 0x8 = Divide by 24.  SPI clock is 33.33 MHz.
                                                                 0x9 = Divide by 32.  SPI clock is 25 MHz.
                                                                 0xA = Divide by 40.  SPI clock is 20 MHz.
                                                                 0xB = Divide by 50.  SPI clock is 16 MHz.
                                                                 0xC = Divide by 64.  SPI clock is 12.5 MHz.
                                                                 0xD = Divide by 128. SPI clock is 6.25 MHz.
                                                                 0xE = Reserved.
                                                                 0xF = Reserved. */
        uint64_t spi_clk_en            : 1;  /**< [  0:  0](R/W) SPI IO clock enable. 0 = SPI IO clock is disabled. 1 = SPI IO clock is enabled. */
#else /* Word 0 - Little Endian */
        uint64_t spi_clk_en            : 1;  /**< [  0:  0](R/W) SPI IO clock enable. 0 = SPI IO clock is disabled. 1 = SPI IO clock is enabled. */
        uint64_t spi_io_clk_div        : 4;  /**< [  4:  1](R/W) SPI IO clock divide control.
                                                                 0x0 = Divide by 4.   SPI clock is 200 MHz.
                                                                 0x1 = Divide by 6.   SPI clock is 133.33 MHz.
                                                                 0x2 = Divide by 8.   SPI clock is 100 MHz.
                                                                 0x3 = Divide by 10.  SPI clock is 80 MHz.
                                                                 0x4 = Divide by 12.  SPI clock is 66.666 MHz.
                                                                 0x5 = Divide by 16.  SPI clock is 50 MHz.
                                                                 0x6 = Divide by 18.  SPI clock is 44.44 MHz.
                                                                 0x7 = Divide by 20.  SPI clock is 40 MHz.
                                                                 0x8 = Divide by 24.  SPI clock is 33.33 MHz.
                                                                 0x9 = Divide by 32.  SPI clock is 25 MHz.
                                                                 0xA = Divide by 40.  SPI clock is 20 MHz.
                                                                 0xB = Divide by 50.  SPI clock is 16 MHz.
                                                                 0xC = Divide by 64.  SPI clock is 12.5 MHz.
                                                                 0xD = Divide by 128. SPI clock is 6.25 MHz.
                                                                 0xE = Reserved.
                                                                 0xF = Reserved. */
        uint64_t spi_sclk_force        : 1;  /**< [  5:  5](R/W) EMMC sclk clk gate override. 0 = EMMC sclk gating is enabled. 1 = EMMC sclk gating is disabled. */
        uint64_t spi_imsc_shadow       : 1;  /**< [  6:  6](R/W) SPI interrupt enable. 1 = SPI INTR IS UNMASKED. 0 = SPI INTR IS MASKED. */
        uint64_t xspi_supports_xfer    : 1;  /**< [  7:  7](RO) Indicates is SPI supports XFER function. 1 = SPI supports xfer function. 0 = SPI
                                                                 does not supports xfer function. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_clk_ctrl_s cn10; */
    struct cavm_spix_clk_ctrl_cn10ka_p1
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t spi_io_clk_div        : 4;  /**< [  4:  1](R/W) SPI IO clock divide control.
                                                                 0x0 = Divide by 4.   SPI clock is 200 MHz.
                                                                 0x1 = Divide by 6.   SPI clock is 133.33 MHz.
                                                                 0x2 = Divide by 8.   SPI clock is 100 MHz.
                                                                 0x3 = Divide by 10.  SPI clock is 80 MHz.
                                                                 0x4 = Divide by 12.  SPI clock is 66.666 MHz.
                                                                 0x5 = Divide by 16.  SPI clock is 50 MHz.
                                                                 0x6 = Divide by 18.  SPI clock is 44.44 MHz.
                                                                 0x7 = Divide by 20.  SPI clock is 40 MHz.
                                                                 0x8 = Divide by 24.  SPI clock is 33.33 MHz.
                                                                 0x9 = Divide by 32.  SPI clock is 25 MHz.
                                                                 0xA = Divide by 40.  SPI clock is 20 MHz.
                                                                 0xB = Divide by 50.  SPI clock is 16 MHz.
                                                                 0xC = Divide by 64.  SPI clock is 12.5 MHz.
                                                                 0xD = Divide by 128. SPI clock is 6.25 MHz.
                                                                 0xE = Reserved.
                                                                 0xF = Reserved. */
        uint64_t spi_clk_en            : 1;  /**< [  0:  0](R/W) SPI IO clock enable. 0 = SPI IO clock is disabled. 1 = SPI IO clock is enabled. */
#else /* Word 0 - Little Endian */
        uint64_t spi_clk_en            : 1;  /**< [  0:  0](R/W) SPI IO clock enable. 0 = SPI IO clock is disabled. 1 = SPI IO clock is enabled. */
        uint64_t spi_io_clk_div        : 4;  /**< [  4:  1](R/W) SPI IO clock divide control.
                                                                 0x0 = Divide by 4.   SPI clock is 200 MHz.
                                                                 0x1 = Divide by 6.   SPI clock is 133.33 MHz.
                                                                 0x2 = Divide by 8.   SPI clock is 100 MHz.
                                                                 0x3 = Divide by 10.  SPI clock is 80 MHz.
                                                                 0x4 = Divide by 12.  SPI clock is 66.666 MHz.
                                                                 0x5 = Divide by 16.  SPI clock is 50 MHz.
                                                                 0x6 = Divide by 18.  SPI clock is 44.44 MHz.
                                                                 0x7 = Divide by 20.  SPI clock is 40 MHz.
                                                                 0x8 = Divide by 24.  SPI clock is 33.33 MHz.
                                                                 0x9 = Divide by 32.  SPI clock is 25 MHz.
                                                                 0xA = Divide by 40.  SPI clock is 20 MHz.
                                                                 0xB = Divide by 50.  SPI clock is 16 MHz.
                                                                 0xC = Divide by 64.  SPI clock is 12.5 MHz.
                                                                 0xD = Divide by 128. SPI clock is 6.25 MHz.
                                                                 0xE = Reserved.
                                                                 0xF = Reserved. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } cn10ka_p1;
    /* struct cavm_spix_clk_ctrl_s cn10ka_p2; */
    /* struct cavm_spix_clk_ctrl_s cn10kb; */
    /* struct cavm_spix_clk_ctrl_cn10ka_p1 cnf10ka; */
    /* struct cavm_spix_clk_ctrl_cn10ka_p1 cnf10kb_p1; */
    /* struct cavm_spix_clk_ctrl_s cnf10kb_p2; */
};
typedef union cavm_spix_clk_ctrl cavm_spix_clk_ctrl_t;

static inline uint64_t CAVM_SPIX_CLK_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_CLK_CTRL(uint64_t a)
{
    if (a<=1)
        return 0x804000004020ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_CLK_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_CLK_CTRL(a) cavm_spix_clk_ctrl_t
#define bustype_CAVM_SPIX_CLK_CTRL(a) CSR_TYPE_NCB
#define basename_CAVM_SPIX_CLK_CTRL(a) "SPIX_CLK_CTRL"
#define device_bar_CAVM_SPIX_CLK_CTRL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_CLK_CTRL(a) (a)
#define arguments_CAVM_SPIX_CLK_CTRL(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_cmn_seq_regs_direct_access_cfg
 *
 * SPI Cmn Seq Regs Direct Access Cfg Register
 * Register to hold configuration required only by DIRECT work mode.
 */
union cavm_spix_cmn_seq_regs_direct_access_cfg
{
    uint32_t u;
    struct cavm_spix_cmn_seq_regs_direct_access_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_29_31        : 3;
        uint32_t dac_addr_mask         : 13; /**< [ 28: 16](R/W) This mask is used for masking bits [44:32] of the system address for read/write
                                                                 transfers for PROFILE 2. */
        uint32_t reserved_13_15        : 3;
        uint32_t rmp_addr_en           : 1;  /**< [ 12: 12](R/W) Enables slave data interface address remapping. When set to 1, the incoming slave data interface
                                                                 address will be adopted and sent to the Flash device as (address - N), where N is the value stored
                                                                 in the remap address register. */
        uint32_t reserved_10_11        : 2;
        uint32_t mode_bit_xip_dis      : 1;  /**< [  9:  9](R/W) If set to 1, controller will send mode bits specified in the [XIP_DIS_MB_VAL] for next READ
                                                                 transaction and clear the [XIP_EN] bit. This will cause disabling XIP work mode for both device and
                                                                 controller. */
        uint32_t mode_bit_xip_en       : 1;  /**< [  8:  8](R/W) If set to 1, controller will send mode bits specified in the [XIP_EN_MB_VAL] for next READ
                                                                 transaction and set the [XIP_EN] bit. This will cause switching both device and controller into XIP
                                                                 work mode. */
        uint32_t reserved_3_7          : 5;
        uint32_t dac_bank_num          : 3;  /**< [  2:  0](R/W) Number of bank targeted by DIRECT work mode. */
#else /* Word 0 - Little Endian */
        uint32_t dac_bank_num          : 3;  /**< [  2:  0](R/W) Number of bank targeted by DIRECT work mode. */
        uint32_t reserved_3_7          : 5;
        uint32_t mode_bit_xip_en       : 1;  /**< [  8:  8](R/W) If set to 1, controller will send mode bits specified in the [XIP_EN_MB_VAL] for next READ
                                                                 transaction and set the [XIP_EN] bit. This will cause switching both device and controller into XIP
                                                                 work mode. */
        uint32_t mode_bit_xip_dis      : 1;  /**< [  9:  9](R/W) If set to 1, controller will send mode bits specified in the [XIP_DIS_MB_VAL] for next READ
                                                                 transaction and clear the [XIP_EN] bit. This will cause disabling XIP work mode for both device and
                                                                 controller. */
        uint32_t reserved_10_11        : 2;
        uint32_t rmp_addr_en           : 1;  /**< [ 12: 12](R/W) Enables slave data interface address remapping. When set to 1, the incoming slave data interface
                                                                 address will be adopted and sent to the Flash device as (address - N), where N is the value stored
                                                                 in the remap address register. */
        uint32_t reserved_13_15        : 3;
        uint32_t dac_addr_mask         : 13; /**< [ 28: 16](R/W) This mask is used for masking bits [44:32] of the system address for read/write
                                                                 transfers for PROFILE 2. */
        uint32_t reserved_29_31        : 3;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_cmn_seq_regs_direct_access_cfg_s cn; */
};
typedef union cavm_spix_cmn_seq_regs_direct_access_cfg cavm_spix_cmn_seq_regs_direct_access_cfg_t;

static inline uint64_t CAVM_SPIX_CMN_SEQ_REGS_DIRECT_ACCESS_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_CMN_SEQ_REGS_DIRECT_ACCESS_CFG(uint64_t a)
{
    if (a<=1)
        return 0x804000000398ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_CMN_SEQ_REGS_DIRECT_ACCESS_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_CMN_SEQ_REGS_DIRECT_ACCESS_CFG(a) cavm_spix_cmn_seq_regs_direct_access_cfg_t
#define bustype_CAVM_SPIX_CMN_SEQ_REGS_DIRECT_ACCESS_CFG(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_CMN_SEQ_REGS_DIRECT_ACCESS_CFG(a) "SPIX_CMN_SEQ_REGS_DIRECT_ACCESS_CFG"
#define device_bar_CAVM_SPIX_CMN_SEQ_REGS_DIRECT_ACCESS_CFG(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_CMN_SEQ_REGS_DIRECT_ACCESS_CFG(a) (a)
#define arguments_CAVM_SPIX_CMN_SEQ_REGS_DIRECT_ACCESS_CFG(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_cmn_seq_regs_direct_access_rmp
 *
 * SPI Cmn Seq Regs Direct Access Rmp Register
 * This register allows to the user to define the address offset for DIRECT work mode
 * for lower part of
 * input address on slave data interface.
 */
union cavm_spix_cmn_seq_regs_direct_access_rmp
{
    uint32_t u;
    struct cavm_spix_cmn_seq_regs_direct_access_rmp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rmp_addr_val          : 32; /**< [ 31:  0](R/W) Remapping of incoming address on slave data interface to a different address used by the Flash
                                                                 device. Value of this register must be aligned to 8 bytes. */
#else /* Word 0 - Little Endian */
        uint32_t rmp_addr_val          : 32; /**< [ 31:  0](R/W) Remapping of incoming address on slave data interface to a different address used by the Flash
                                                                 device. Value of this register must be aligned to 8 bytes. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_cmn_seq_regs_direct_access_rmp_s cn; */
};
typedef union cavm_spix_cmn_seq_regs_direct_access_rmp cavm_spix_cmn_seq_regs_direct_access_rmp_t;

static inline uint64_t CAVM_SPIX_CMN_SEQ_REGS_DIRECT_ACCESS_RMP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_CMN_SEQ_REGS_DIRECT_ACCESS_RMP(uint64_t a)
{
    if (a<=1)
        return 0x80400000039cll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_CMN_SEQ_REGS_DIRECT_ACCESS_RMP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_CMN_SEQ_REGS_DIRECT_ACCESS_RMP(a) cavm_spix_cmn_seq_regs_direct_access_rmp_t
#define bustype_CAVM_SPIX_CMN_SEQ_REGS_DIRECT_ACCESS_RMP(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_CMN_SEQ_REGS_DIRECT_ACCESS_RMP(a) "SPIX_CMN_SEQ_REGS_DIRECT_ACCESS_RMP"
#define device_bar_CAVM_SPIX_CMN_SEQ_REGS_DIRECT_ACCESS_RMP(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_CMN_SEQ_REGS_DIRECT_ACCESS_RMP(a) (a)
#define arguments_CAVM_SPIX_CMN_SEQ_REGS_DIRECT_ACCESS_RMP(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_cmn_seq_regs_direct_access_rmp_1
 *
 * SPI Cmn Seq Regs Direct Access Rmp 1 Register
 * This register allows to the user to define the address offset for DIRECT work mode
 * for upper part of
 * input address on Slave Data Interface.
 */
union cavm_spix_cmn_seq_regs_direct_access_rmp_1
{
    uint32_t u;
    struct cavm_spix_cmn_seq_regs_direct_access_rmp_1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rmp_addr_val_1        : 32; /**< [ 31:  0](R/W) Remapping of incoming address on slave data interface to a different address used by the Flash
                                                                 device. */
#else /* Word 0 - Little Endian */
        uint32_t rmp_addr_val_1        : 32; /**< [ 31:  0](R/W) Remapping of incoming address on slave data interface to a different address used by the Flash
                                                                 device. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_cmn_seq_regs_direct_access_rmp_1_s cn; */
};
typedef union cavm_spix_cmn_seq_regs_direct_access_rmp_1 cavm_spix_cmn_seq_regs_direct_access_rmp_1_t;

static inline uint64_t CAVM_SPIX_CMN_SEQ_REGS_DIRECT_ACCESS_RMP_1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_CMN_SEQ_REGS_DIRECT_ACCESS_RMP_1(uint64_t a)
{
    if (a<=1)
        return 0x8040000003a0ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_CMN_SEQ_REGS_DIRECT_ACCESS_RMP_1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_CMN_SEQ_REGS_DIRECT_ACCESS_RMP_1(a) cavm_spix_cmn_seq_regs_direct_access_rmp_1_t
#define bustype_CAVM_SPIX_CMN_SEQ_REGS_DIRECT_ACCESS_RMP_1(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_CMN_SEQ_REGS_DIRECT_ACCESS_RMP_1(a) "SPIX_CMN_SEQ_REGS_DIRECT_ACCESS_RMP_1"
#define device_bar_CAVM_SPIX_CMN_SEQ_REGS_DIRECT_ACCESS_RMP_1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_CMN_SEQ_REGS_DIRECT_ACCESS_RMP_1(a) (a)
#define arguments_CAVM_SPIX_CMN_SEQ_REGS_DIRECT_ACCESS_RMP_1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_cmn_seq_regs_global_seq_cfg
 *
 * SPI Cmn Seq Regs Global Seq Cfg Register
 * Register to configure common values for sequences in CDMA, PIO and DIRECT work mode.
 */
union cavm_spix_cmn_seq_regs_global_seq_cfg
{
    uint32_t u;
    struct cavm_spix_cmn_seq_regs_global_seq_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_25_31        : 7;
        uint32_t seq_type              : 2;  /**< [ 24: 23](R/W) Sequence type (common for all sequences):
                                                                 0x0 = PROFILE 1.
                                                                 0x1 = PROFILE 2 - HF (HyperFlash).
                                                                 0x2 = PROFILE 2 - HR (HyperRAM).
                                                                 0x3 = SPI NAND. */
        uint32_t reserved_22           : 1;
        uint32_t seq_data_per_addr     : 1;  /**< [ 21: 21](R/W) Selects data organization of the xSPI memory. Please note that xSPI address/pointer specified
                                                                 during sending CDMA/PIO and DIRECT command is always byte-aligned(i.e. if this field is set, xSPI
                                                                 address must be even).
                                                                 0 = 1B per single memory address (no translation of xSPI address),
                                                                 1 = 2B per single memory address (translation of xSPI address from byte address to word address
                                                                 will be performed automatically). */
        uint32_t seq_data_swap         : 1;  /**< [ 20: 20](R/W) Enables reversed byte order. This bit can be set only when data phase reflects Octal DDR mode.
                                                                 In other modes this bit must be set to a low.
                                                                 Allowed values are:
                                                                 0 = Disable.
                                                                 1 = Enable. */
        uint32_t reserved_19           : 1;
        uint32_t seq_tcms_en           : 1;  /**< [ 18: 18](R/W) It enables tCMS timing in PROFILE 1.
                                                                 Allowed values are:
                                                                 0 = Disable.
                                                                 1 = Enable. */
        uint32_t seq_crc_ual_chunk_chk : 1;  /**< [ 17: 17](R/W) It enables checking correctness of CRC unaligned chunk from Flash Device. It can be set high only
                                                                 if [SEQ_CRC_UAL_CHUNK_EN] = 1. It must be set low otherwise.
                                                                 Allowed values are:
                                                                 0 = Disable.
                                                                 1 = Enable. */
        uint32_t seq_crc_ual_chunk_en  : 1;  /**< [ 16: 16](R/W) It enables taking into consideration the command address to determine after how many bytes CRC
                                                                 data slice is expected to be returned by the Flash Device.
                                                                 Allowed values are:
                                                                 0 = Disable.
                                                                 1 = Enable. */
        uint32_t reserved_15           : 1;
        uint32_t seq_crc_chunk_size    : 3;  /**< [ 14: 12](R/W) Number of bytes after which CRC occurs.
                                                                 Allowed values are:
                                                                 0x0 = n/a.
                                                                 0x1 = 8B.
                                                                 0x2 = 16B.
                                                                 0x3 = 32B.
                                                                 0x4 = 64B.
                                                                 0x5 = 128B.
                                                                 0x6 = 256B.
                                                                 0x7 = 512B. */
        uint32_t reserved_11           : 1;
        uint32_t seq_crc_oe            : 1;  /**< [ 10: 10](R/W) "Determines if the controller expects the xSPI device to toggle CRC data on both SPI clock edges
                                                                 in CRC-\>CRC# sequence.
                                                                 Allowed values are:
                                                                 0 = Disable.
                                                                 1 = Enable." */
        uint32_t seq_crc_variant       : 1;  /**< [  9:  9](R/W) Selecting of CRC variant. Allowed values are:
                                                                 0 = CRC is calculated for all bytes of address transfer phase only and put on the bus after
                                                                 address transfer phase.
                                                                 1 = CRC is calculated for all bytes in sequence and put on the bus after all bytes in sequence. */
        uint32_t seq_crc_en            : 1;  /**< [  8:  8](R/W) It enables dynamic CRC calculation based on all previous bytes in the current sequence and puts
                                                                 this value on xSPI Flash Interface. Not required by Legacy Hyper Flash and xSPI Profile 2.0
                                                                 Devices but can be useful for external Flash Monitor to control data integrity.
                                                                 Allowed values are:
                                                                 0 = Disable.
                                                                 1 = Enable. */
        uint32_t seq_page_size_pgm     : 4;  /**< [  7:  4](R/W) Determines page size of device being used for PROGRAM operations.
                                                                 Number of bytes in page = 2^page_size.
                                                                 Allowed values are:
                                                                 0x0 = 1B.
                                                                 0x1 = 2B.
                                                                 _ ...
                                                                 0x7 = 256B.
                                                                 0x9 = 512B.
                                                                 0xA = 1024B.
                                                                 0xB = 2048B.
                                                                 0xC = 4096B.
                                                                 0xD = n/a.
                                                                 _ ...
                                                                 0xF = n/a.
                                                                 This field is not used in DIRECT mode for PROFILE 2 - HR or when SPI NAND device is selected. */
        uint32_t seq_page_size_rd      : 4;  /**< [  3:  0](R/W) Determines page size of device being used for READ operations.
                                                                 Number of bytes in page = 2^page_size.
                                                                 Allowed values are:
                                                                 0x0 = 1B.
                                                                 0x1 = 2B.
                                                                 _ ...
                                                                 0x7 = 256B.
                                                                 0x9 = 512B.
                                                                 0xA = 1024B.
                                                                 0xB = 2048B.
                                                                 0xC = 4096B.
                                                                 0xD = n/a.
                                                                 _ ...
                                                                 0xF = n/a. */
#else /* Word 0 - Little Endian */
        uint32_t seq_page_size_rd      : 4;  /**< [  3:  0](R/W) Determines page size of device being used for READ operations.
                                                                 Number of bytes in page = 2^page_size.
                                                                 Allowed values are:
                                                                 0x0 = 1B.
                                                                 0x1 = 2B.
                                                                 _ ...
                                                                 0x7 = 256B.
                                                                 0x9 = 512B.
                                                                 0xA = 1024B.
                                                                 0xB = 2048B.
                                                                 0xC = 4096B.
                                                                 0xD = n/a.
                                                                 _ ...
                                                                 0xF = n/a. */
        uint32_t seq_page_size_pgm     : 4;  /**< [  7:  4](R/W) Determines page size of device being used for PROGRAM operations.
                                                                 Number of bytes in page = 2^page_size.
                                                                 Allowed values are:
                                                                 0x0 = 1B.
                                                                 0x1 = 2B.
                                                                 _ ...
                                                                 0x7 = 256B.
                                                                 0x9 = 512B.
                                                                 0xA = 1024B.
                                                                 0xB = 2048B.
                                                                 0xC = 4096B.
                                                                 0xD = n/a.
                                                                 _ ...
                                                                 0xF = n/a.
                                                                 This field is not used in DIRECT mode for PROFILE 2 - HR or when SPI NAND device is selected. */
        uint32_t seq_crc_en            : 1;  /**< [  8:  8](R/W) It enables dynamic CRC calculation based on all previous bytes in the current sequence and puts
                                                                 this value on xSPI Flash Interface. Not required by Legacy Hyper Flash and xSPI Profile 2.0
                                                                 Devices but can be useful for external Flash Monitor to control data integrity.
                                                                 Allowed values are:
                                                                 0 = Disable.
                                                                 1 = Enable. */
        uint32_t seq_crc_variant       : 1;  /**< [  9:  9](R/W) Selecting of CRC variant. Allowed values are:
                                                                 0 = CRC is calculated for all bytes of address transfer phase only and put on the bus after
                                                                 address transfer phase.
                                                                 1 = CRC is calculated for all bytes in sequence and put on the bus after all bytes in sequence. */
        uint32_t seq_crc_oe            : 1;  /**< [ 10: 10](R/W) "Determines if the controller expects the xSPI device to toggle CRC data on both SPI clock edges
                                                                 in CRC-\>CRC# sequence.
                                                                 Allowed values are:
                                                                 0 = Disable.
                                                                 1 = Enable." */
        uint32_t reserved_11           : 1;
        uint32_t seq_crc_chunk_size    : 3;  /**< [ 14: 12](R/W) Number of bytes after which CRC occurs.
                                                                 Allowed values are:
                                                                 0x0 = n/a.
                                                                 0x1 = 8B.
                                                                 0x2 = 16B.
                                                                 0x3 = 32B.
                                                                 0x4 = 64B.
                                                                 0x5 = 128B.
                                                                 0x6 = 256B.
                                                                 0x7 = 512B. */
        uint32_t reserved_15           : 1;
        uint32_t seq_crc_ual_chunk_en  : 1;  /**< [ 16: 16](R/W) It enables taking into consideration the command address to determine after how many bytes CRC
                                                                 data slice is expected to be returned by the Flash Device.
                                                                 Allowed values are:
                                                                 0 = Disable.
                                                                 1 = Enable. */
        uint32_t seq_crc_ual_chunk_chk : 1;  /**< [ 17: 17](R/W) It enables checking correctness of CRC unaligned chunk from Flash Device. It can be set high only
                                                                 if [SEQ_CRC_UAL_CHUNK_EN] = 1. It must be set low otherwise.
                                                                 Allowed values are:
                                                                 0 = Disable.
                                                                 1 = Enable. */
        uint32_t seq_tcms_en           : 1;  /**< [ 18: 18](R/W) It enables tCMS timing in PROFILE 1.
                                                                 Allowed values are:
                                                                 0 = Disable.
                                                                 1 = Enable. */
        uint32_t reserved_19           : 1;
        uint32_t seq_data_swap         : 1;  /**< [ 20: 20](R/W) Enables reversed byte order. This bit can be set only when data phase reflects Octal DDR mode.
                                                                 In other modes this bit must be set to a low.
                                                                 Allowed values are:
                                                                 0 = Disable.
                                                                 1 = Enable. */
        uint32_t seq_data_per_addr     : 1;  /**< [ 21: 21](R/W) Selects data organization of the xSPI memory. Please note that xSPI address/pointer specified
                                                                 during sending CDMA/PIO and DIRECT command is always byte-aligned(i.e. if this field is set, xSPI
                                                                 address must be even).
                                                                 0 = 1B per single memory address (no translation of xSPI address),
                                                                 1 = 2B per single memory address (translation of xSPI address from byte address to word address
                                                                 will be performed automatically). */
        uint32_t reserved_22           : 1;
        uint32_t seq_type              : 2;  /**< [ 24: 23](R/W) Sequence type (common for all sequences):
                                                                 0x0 = PROFILE 1.
                                                                 0x1 = PROFILE 2 - HF (HyperFlash).
                                                                 0x2 = PROFILE 2 - HR (HyperRAM).
                                                                 0x3 = SPI NAND. */
        uint32_t reserved_25_31        : 7;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_cmn_seq_regs_global_seq_cfg_s cn; */
};
typedef union cavm_spix_cmn_seq_regs_global_seq_cfg cavm_spix_cmn_seq_regs_global_seq_cfg_t;

static inline uint64_t CAVM_SPIX_CMN_SEQ_REGS_GLOBAL_SEQ_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_CMN_SEQ_REGS_GLOBAL_SEQ_CFG(uint64_t a)
{
    if (a<=1)
        return 0x804000000390ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_CMN_SEQ_REGS_GLOBAL_SEQ_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_CMN_SEQ_REGS_GLOBAL_SEQ_CFG(a) cavm_spix_cmn_seq_regs_global_seq_cfg_t
#define bustype_CAVM_SPIX_CMN_SEQ_REGS_GLOBAL_SEQ_CFG(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_CMN_SEQ_REGS_GLOBAL_SEQ_CFG(a) "SPIX_CMN_SEQ_REGS_GLOBAL_SEQ_CFG"
#define device_bar_CAVM_SPIX_CMN_SEQ_REGS_GLOBAL_SEQ_CFG(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_CMN_SEQ_REGS_GLOBAL_SEQ_CFG(a) (a)
#define arguments_CAVM_SPIX_CMN_SEQ_REGS_GLOBAL_SEQ_CFG(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_cmn_seq_regs_global_seq_cfg_1
 *
 * SPI Cmn Seq Regs Global Seq Cfg 1 Register
 * Register to configure common values for sequences in CDMA, PIO and DIRECT work mode.
 */
union cavm_spix_cmn_seq_regs_global_seq_cfg_1
{
    uint32_t u;
    struct cavm_spix_cmn_seq_regs_global_seq_cfg_1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_30_31        : 2;
        uint32_t seq_plane_cnt         : 2;  /**< [ 29: 28](R/W) Number of planes in SPI NAND device (encoded as 2^N):
                                                                 0x0 = single plane.
                                                                 0x1 = two planes.
                                                                 0x2 = four planes.
                                                                 0x3 = reserved. */
        uint32_t reserved_27           : 1;
        uint32_t seq_page_per_block    : 3;  /**< [ 26: 24](R/W) Number of pages per blocks for SPI NAND device (encoded as 2^N):
                                                                 0x0 = 1 page per block.
                                                                 0x1 = 2 pages per block.
                                                                 _ ...
                                                                 0x6 = 64 pages per block.
                                                                 0x7 = 128 pages per block. */
        uint32_t reserved_17_23        : 7;
        uint32_t seq_page_ca_size      : 1;  /**< [ 16: 16](R/W) Width of the Column Address for SPI NAND devices. Value of this field is used to calculate the
                                                                 next page address in case when data size specified in sequence exceed the current page capacity.
                                                                 0 = 12-bit address width.
                                                                 1 = 13-bit address width. */
        uint32_t reserved_9_15         : 7;
        uint32_t seq_page_size_ext     : 9;  /**< [  8:  0](R/W) Determines the extended page size area (spare area size) for SPI NAND devices. Number of data
                                                                 bytes transmitted to/from each page will be extended by a value of this field. This field is not
                                                                 used in DIRECT mode. */
#else /* Word 0 - Little Endian */
        uint32_t seq_page_size_ext     : 9;  /**< [  8:  0](R/W) Determines the extended page size area (spare area size) for SPI NAND devices. Number of data
                                                                 bytes transmitted to/from each page will be extended by a value of this field. This field is not
                                                                 used in DIRECT mode. */
        uint32_t reserved_9_15         : 7;
        uint32_t seq_page_ca_size      : 1;  /**< [ 16: 16](R/W) Width of the Column Address for SPI NAND devices. Value of this field is used to calculate the
                                                                 next page address in case when data size specified in sequence exceed the current page capacity.
                                                                 0 = 12-bit address width.
                                                                 1 = 13-bit address width. */
        uint32_t reserved_17_23        : 7;
        uint32_t seq_page_per_block    : 3;  /**< [ 26: 24](R/W) Number of pages per blocks for SPI NAND device (encoded as 2^N):
                                                                 0x0 = 1 page per block.
                                                                 0x1 = 2 pages per block.
                                                                 _ ...
                                                                 0x6 = 64 pages per block.
                                                                 0x7 = 128 pages per block. */
        uint32_t reserved_27           : 1;
        uint32_t seq_plane_cnt         : 2;  /**< [ 29: 28](R/W) Number of planes in SPI NAND device (encoded as 2^N):
                                                                 0x0 = single plane.
                                                                 0x1 = two planes.
                                                                 0x2 = four planes.
                                                                 0x3 = reserved. */
        uint32_t reserved_30_31        : 2;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_cmn_seq_regs_global_seq_cfg_1_s cn; */
};
typedef union cavm_spix_cmn_seq_regs_global_seq_cfg_1 cavm_spix_cmn_seq_regs_global_seq_cfg_1_t;

static inline uint64_t CAVM_SPIX_CMN_SEQ_REGS_GLOBAL_SEQ_CFG_1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_CMN_SEQ_REGS_GLOBAL_SEQ_CFG_1(uint64_t a)
{
    if (a<=1)
        return 0x804000000394ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_CMN_SEQ_REGS_GLOBAL_SEQ_CFG_1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_CMN_SEQ_REGS_GLOBAL_SEQ_CFG_1(a) cavm_spix_cmn_seq_regs_global_seq_cfg_1_t
#define bustype_CAVM_SPIX_CMN_SEQ_REGS_GLOBAL_SEQ_CFG_1(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_CMN_SEQ_REGS_GLOBAL_SEQ_CFG_1(a) "SPIX_CMN_SEQ_REGS_GLOBAL_SEQ_CFG_1"
#define device_bar_CAVM_SPIX_CMN_SEQ_REGS_GLOBAL_SEQ_CFG_1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_CMN_SEQ_REGS_GLOBAL_SEQ_CFG_1(a) (a)
#define arguments_CAVM_SPIX_CMN_SEQ_REGS_GLOBAL_SEQ_CFG_1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_cmn_seq_regs_xip_mode_cfg
 *
 * SPI Cmn Seq Regs XIP Mode Cfg Register
 * Register designated to configure controller in XIP work mode in CDMA, PIO and DIRECT work mode.
 */
union cavm_spix_cmn_seq_regs_xip_mode_cfg
{
    uint32_t u;
    struct cavm_spix_cmn_seq_regs_xip_mode_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_24_31        : 8;
        uint32_t xip_dis_mb_val        : 8;  /**< [ 23: 16](R/W) Value of mode bits required to disable XIP mode. */
        uint32_t xip_en_mb_val         : 8;  /**< [ 15:  8](R/W) Value of mode bits required to enable XIP mode. */
        uint32_t xip_en                : 8;  /**< [  7:  0](R/W) XIP mode enable for selected memory bank. If XIP mode is enabled only READ sequences are valid.
                                                                 Invoking any other command sequence will be ignored and CMD_ERROR/DSC_ERROR/dir_cmd_err will be
                                                                 rise. */
#else /* Word 0 - Little Endian */
        uint32_t xip_en                : 8;  /**< [  7:  0](R/W) XIP mode enable for selected memory bank. If XIP mode is enabled only READ sequences are valid.
                                                                 Invoking any other command sequence will be ignored and CMD_ERROR/DSC_ERROR/dir_cmd_err will be
                                                                 rise. */
        uint32_t xip_en_mb_val         : 8;  /**< [ 15:  8](R/W) Value of mode bits required to enable XIP mode. */
        uint32_t xip_dis_mb_val        : 8;  /**< [ 23: 16](R/W) Value of mode bits required to disable XIP mode. */
        uint32_t reserved_24_31        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_cmn_seq_regs_xip_mode_cfg_s cn; */
};
typedef union cavm_spix_cmn_seq_regs_xip_mode_cfg cavm_spix_cmn_seq_regs_xip_mode_cfg_t;

static inline uint64_t CAVM_SPIX_CMN_SEQ_REGS_XIP_MODE_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_CMN_SEQ_REGS_XIP_MODE_CFG(uint64_t a)
{
    if (a<=1)
        return 0x804000000388ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_CMN_SEQ_REGS_XIP_MODE_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_CMN_SEQ_REGS_XIP_MODE_CFG(a) cavm_spix_cmn_seq_regs_xip_mode_cfg_t
#define bustype_CAVM_SPIX_CMN_SEQ_REGS_XIP_MODE_CFG(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_CMN_SEQ_REGS_XIP_MODE_CFG(a) "SPIX_CMN_SEQ_REGS_XIP_MODE_CFG"
#define device_bar_CAVM_SPIX_CMN_SEQ_REGS_XIP_MODE_CFG(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_CMN_SEQ_REGS_XIP_MODE_CFG(a) (a)
#define arguments_CAVM_SPIX_CMN_SEQ_REGS_XIP_MODE_CFG(a) (a),-1,-1,-1

/**
 * Register (NCB) spi#_const
 *
 * SPI Constants Register
 */
union cavm_spix_const
{
    uint64_t u;
    struct cavm_spix_const_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_const_s cn; */
};
typedef union cavm_spix_const cavm_spix_const_t;

static inline uint64_t CAVM_SPIX_CONST(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_CONST(uint64_t a)
{
    if (a<=1)
        return 0x804000001058ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_CONST", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_CONST(a) cavm_spix_const_t
#define bustype_CAVM_SPIX_CONST(a) CSR_TYPE_NCB
#define basename_CAVM_SPIX_CONST(a) "SPIX_CONST"
#define device_bar_CAVM_SPIX_CONST(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_CONST(a) (a)
#define arguments_CAVM_SPIX_CONST(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_ctrl_cfg_common_ctrl_config
 *
 * SPI Control Cfg Common Control Config Register
 * Device control register.
 */
union cavm_spix_ctrl_cfg_common_ctrl_config
{
    uint32_t u;
    struct cavm_spix_ctrl_cfg_common_ctrl_config_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_7_31         : 25;
        uint32_t work_mode             : 2;  /**< [  6:  5](R/W) Field selecting controllers work mode. Allowed values are:
                                                                 0x0 = DIRECT mode.
                                                                 0x1 = STIG mode.
                                                                 0x3 = ACMD mode. */
        uint32_t reserved_4            : 1;
        uint32_t cont_on_err           : 1;  /**< [  3:  3](R/W) If this bit is cleared and error occurs the controller will drop execution of all further
                                                                 operations programmed in single thread at the page (for read or program commands) or sector (for
                                                                 the sector erase command) boundary. It apply to both Command DMA and PIO work modes. When this bit
                                                                 is set execution will be continued. */
        uint32_t reserved_0_2          : 3;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_2          : 3;
        uint32_t cont_on_err           : 1;  /**< [  3:  3](R/W) If this bit is cleared and error occurs the controller will drop execution of all further
                                                                 operations programmed in single thread at the page (for read or program commands) or sector (for
                                                                 the sector erase command) boundary. It apply to both Command DMA and PIO work modes. When this bit
                                                                 is set execution will be continued. */
        uint32_t reserved_4            : 1;
        uint32_t work_mode             : 2;  /**< [  6:  5](R/W) Field selecting controllers work mode. Allowed values are:
                                                                 0x0 = DIRECT mode.
                                                                 0x1 = STIG mode.
                                                                 0x3 = ACMD mode. */
        uint32_t reserved_7_31         : 25;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_ctrl_cfg_common_ctrl_config_s cn; */
};
typedef union cavm_spix_ctrl_cfg_common_ctrl_config cavm_spix_ctrl_cfg_common_ctrl_config_t;

static inline uint64_t CAVM_SPIX_CTRL_CFG_COMMON_CTRL_CONFIG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_CTRL_CFG_COMMON_CTRL_CONFIG(uint64_t a)
{
    if (a<=1)
        return 0x804000000230ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_CTRL_CFG_COMMON_CTRL_CONFIG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_CTRL_CFG_COMMON_CTRL_CONFIG(a) cavm_spix_ctrl_cfg_common_ctrl_config_t
#define bustype_CAVM_SPIX_CTRL_CFG_COMMON_CTRL_CONFIG(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_CTRL_CFG_COMMON_CTRL_CONFIG(a) "SPIX_CTRL_CFG_COMMON_CTRL_CONFIG"
#define device_bar_CAVM_SPIX_CTRL_CFG_COMMON_CTRL_CONFIG(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_CTRL_CFG_COMMON_CTRL_CONFIG(a) (a)
#define arguments_CAVM_SPIX_CTRL_CFG_COMMON_CTRL_CONFIG(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_ctrl_cfg_common_discovery_control
 *
 * SPI Control Cfg Common Discovery Control Register
 * Device discovery control register.
 */
union cavm_spix_ctrl_cfg_common_discovery_control
{
    uint32_t u;
    struct cavm_spix_ctrl_cfg_common_discovery_control_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_19_31        : 13;
        uint32_t discovery_bank        : 3;  /**< [ 18: 16](R/W) Discovery bank select. This is a 3-bit value. Writing value of 0x0-0x7 selects a bank. This field
                                                                 is updated after initialization process. */
        uint32_t discovery_num_lines   : 4;  /**< [ 15: 12](R/W) Discovery mode. This is a 4-bit value. Writing a value selects number of xSPI I/Os used by device
                                                                 discovery.
                                                                 0x0 = Auto.
                                                                 0x1 = 1 line.
                                                                 0x2 = 2 lines.
                                                                 0x4 = 4 lines.
                                                                 0x8 = 8 lines.
                                                                 0xC = 8 lines for legacy hyper flash and xSPI Profile 2.0.
                                                                 0xE = 1 line for legacy SPI NAND.
                                                                 Other values are reserved.
                                                                 This field is updated after initialization process. */
        uint32_t discovery_abnum       : 1;  /**< [ 11: 11](R/W) Discovery 4-bit addressing enable.
                                                                 0 = 3-bit addressing.
                                                                 1 = 4-bit addressing.
                                                                 This field is updated after initialization process. */
        uint32_t discovery_dummy_cnt   : 1;  /**< [ 10: 10](R/W) Discovery number of dummy clock cycles.
                                                                 0 = 8 dummy clock cycles.
                                                                 1 = 20 dummy clock cycles.
                                                                 This field is updated after initialization process. */
        uint32_t discovery_cmd_type    : 2;  /**< [  9:  8](R/W) Discovery command type mode enable.
                                                                 0 = SDR mode enabled.
                                                                 1 = DDR mode enabled.
                                                                 2 = DTR mode enabled (QUAD mode only).
                                                                 This field is updated after initialization process. */
        uint32_t discovery_extop_en    : 1;  /**< [  7:  7](R/W) Discovery extended op-code enable.
                                                                 0 = Extended op-code disabled.
                                                                 1 = Extended op-code enabled.
                                                                 This field is updated after initialization process. */
        uint32_t discovery_extop_val   : 1;  /**< [  6:  6](R/W) Discovery extended op-code value.
                                                                 0 = Extended op-code is 0xA5.
                                                                 1 = Extended op-code is 0x5A.
                                                                 This field is updated after initialization process. */
        uint32_t discovery_inhibit     : 1;  /**< [  5:  5](RO) Discovery inhibit status. This is a status bit to inform whether device discovery is inhibited at
                                                                 power-on.
                                                                 0 = Discovery allowed.
                                                                 1 = Discovery inhibited. */
        uint32_t discovery_fail        : 2;  /**< [  4:  3](RO) Result of the last Discovery operation. Valid if [DISCOVERY_COMP] is 1.
                                                                 0x0 = xSPI or SPI NAND device detected.
                                                                 0x1 = Failed.
                                                                 0x2 = Legacy SPI device detected.
                                                                 0x3 = N/A. */
        uint32_t discovery_comp        : 1;  /**< [  2:  2](RO) Status of the last discovery operation. This bit is 1 when device discovery operation has finished.
                                                                 Result can be read from [DISCOVERY_FAIL]. */
        uint32_t discovery_req_type    : 1;  /**< [  1:  1](R/W) Discovery request type:
                                                                 0 = Perform full discovery process (try to detect device).
                                                                 1 = Configure registers only to selected mode (not full discovery process). */
        uint32_t discovery_req         : 1;  /**< [  0:  0](R/W) Discovery request signal. Writing 1 triggers device discovery operation. This bit is cleared by
                                                                 hardware when DD operation completes. */
#else /* Word 0 - Little Endian */
        uint32_t discovery_req         : 1;  /**< [  0:  0](R/W) Discovery request signal. Writing 1 triggers device discovery operation. This bit is cleared by
                                                                 hardware when DD operation completes. */
        uint32_t discovery_req_type    : 1;  /**< [  1:  1](R/W) Discovery request type:
                                                                 0 = Perform full discovery process (try to detect device).
                                                                 1 = Configure registers only to selected mode (not full discovery process). */
        uint32_t discovery_comp        : 1;  /**< [  2:  2](RO) Status of the last discovery operation. This bit is 1 when device discovery operation has finished.
                                                                 Result can be read from [DISCOVERY_FAIL]. */
        uint32_t discovery_fail        : 2;  /**< [  4:  3](RO) Result of the last Discovery operation. Valid if [DISCOVERY_COMP] is 1.
                                                                 0x0 = xSPI or SPI NAND device detected.
                                                                 0x1 = Failed.
                                                                 0x2 = Legacy SPI device detected.
                                                                 0x3 = N/A. */
        uint32_t discovery_inhibit     : 1;  /**< [  5:  5](RO) Discovery inhibit status. This is a status bit to inform whether device discovery is inhibited at
                                                                 power-on.
                                                                 0 = Discovery allowed.
                                                                 1 = Discovery inhibited. */
        uint32_t discovery_extop_val   : 1;  /**< [  6:  6](R/W) Discovery extended op-code value.
                                                                 0 = Extended op-code is 0xA5.
                                                                 1 = Extended op-code is 0x5A.
                                                                 This field is updated after initialization process. */
        uint32_t discovery_extop_en    : 1;  /**< [  7:  7](R/W) Discovery extended op-code enable.
                                                                 0 = Extended op-code disabled.
                                                                 1 = Extended op-code enabled.
                                                                 This field is updated after initialization process. */
        uint32_t discovery_cmd_type    : 2;  /**< [  9:  8](R/W) Discovery command type mode enable.
                                                                 0 = SDR mode enabled.
                                                                 1 = DDR mode enabled.
                                                                 2 = DTR mode enabled (QUAD mode only).
                                                                 This field is updated after initialization process. */
        uint32_t discovery_dummy_cnt   : 1;  /**< [ 10: 10](R/W) Discovery number of dummy clock cycles.
                                                                 0 = 8 dummy clock cycles.
                                                                 1 = 20 dummy clock cycles.
                                                                 This field is updated after initialization process. */
        uint32_t discovery_abnum       : 1;  /**< [ 11: 11](R/W) Discovery 4-bit addressing enable.
                                                                 0 = 3-bit addressing.
                                                                 1 = 4-bit addressing.
                                                                 This field is updated after initialization process. */
        uint32_t discovery_num_lines   : 4;  /**< [ 15: 12](R/W) Discovery mode. This is a 4-bit value. Writing a value selects number of xSPI I/Os used by device
                                                                 discovery.
                                                                 0x0 = Auto.
                                                                 0x1 = 1 line.
                                                                 0x2 = 2 lines.
                                                                 0x4 = 4 lines.
                                                                 0x8 = 8 lines.
                                                                 0xC = 8 lines for legacy hyper flash and xSPI Profile 2.0.
                                                                 0xE = 1 line for legacy SPI NAND.
                                                                 Other values are reserved.
                                                                 This field is updated after initialization process. */
        uint32_t discovery_bank        : 3;  /**< [ 18: 16](R/W) Discovery bank select. This is a 3-bit value. Writing value of 0x0-0x7 selects a bank. This field
                                                                 is updated after initialization process. */
        uint32_t reserved_19_31        : 13;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_ctrl_cfg_common_discovery_control_s cn; */
};
typedef union cavm_spix_ctrl_cfg_common_discovery_control cavm_spix_ctrl_cfg_common_discovery_control_t;

static inline uint64_t CAVM_SPIX_CTRL_CFG_COMMON_DISCOVERY_CONTROL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_CTRL_CFG_COMMON_DISCOVERY_CONTROL(uint64_t a)
{
    if (a<=1)
        return 0x804000000260ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_CTRL_CFG_COMMON_DISCOVERY_CONTROL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_CTRL_CFG_COMMON_DISCOVERY_CONTROL(a) cavm_spix_ctrl_cfg_common_discovery_control_t
#define bustype_CAVM_SPIX_CTRL_CFG_COMMON_DISCOVERY_CONTROL(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_CTRL_CFG_COMMON_DISCOVERY_CONTROL(a) "SPIX_CTRL_CFG_COMMON_DISCOVERY_CONTROL"
#define device_bar_CAVM_SPIX_CTRL_CFG_COMMON_DISCOVERY_CONTROL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_CTRL_CFG_COMMON_DISCOVERY_CONTROL(a) (a)
#define arguments_CAVM_SPIX_CTRL_CFG_COMMON_DISCOVERY_CONTROL(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_ctrl_cfg_common_dma_settings
 *
 * SPI Control Cfg Common DMA Settings Register
 * DMA settings register. It is common register for both master and slave interface.
 */
union cavm_spix_ctrl_cfg_common_dma_settings
{
    uint32_t u;
    struct cavm_spix_ctrl_cfg_common_dma_settings_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_20_31        : 12;
        uint32_t word_size             : 2;  /**< [ 19: 18](R/W) Field select a data word size that will be used to transfer data. Field encoding is as following:
                                                                 0x0 = Byte.
                                                                 0x1 = 16-bit word.
                                                                 0x2 = 32-bit word.
                                                                 0x3 = 64-bit word. */
        uint32_t sdma_err_rsp          : 1;  /**< [ 17: 17](R/W) If this bit is set then ERROR response will be returned if host tries to access unprepared Slave
                                                                 DMA interface. If this bit will be cleared the OK response is returned. */
        uint32_t ote                   : 1;  /**< [ 16: 16](R/W) Outstanding transaction enable. It only applies to the master interface, the slave interface will
                                                                 ignore this bit and will accept all incoming transactions. */
        uint32_t reserved_8_15         : 8;
        uint32_t burst_sel             : 8;  /**< [  7:  0](R/W) Sets the burst used by data DMA for transferring data to/from flash device. The maximum burst size
                                                                 can be calculated as burst_sel+1. This field should be changed only if controller is in IDLE state. */
#else /* Word 0 - Little Endian */
        uint32_t burst_sel             : 8;  /**< [  7:  0](R/W) Sets the burst used by data DMA for transferring data to/from flash device. The maximum burst size
                                                                 can be calculated as burst_sel+1. This field should be changed only if controller is in IDLE state. */
        uint32_t reserved_8_15         : 8;
        uint32_t ote                   : 1;  /**< [ 16: 16](R/W) Outstanding transaction enable. It only applies to the master interface, the slave interface will
                                                                 ignore this bit and will accept all incoming transactions. */
        uint32_t sdma_err_rsp          : 1;  /**< [ 17: 17](R/W) If this bit is set then ERROR response will be returned if host tries to access unprepared Slave
                                                                 DMA interface. If this bit will be cleared the OK response is returned. */
        uint32_t word_size             : 2;  /**< [ 19: 18](R/W) Field select a data word size that will be used to transfer data. Field encoding is as following:
                                                                 0x0 = Byte.
                                                                 0x1 = 16-bit word.
                                                                 0x2 = 32-bit word.
                                                                 0x3 = 64-bit word. */
        uint32_t reserved_20_31        : 12;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_ctrl_cfg_common_dma_settings_s cn; */
};
typedef union cavm_spix_ctrl_cfg_common_dma_settings cavm_spix_ctrl_cfg_common_dma_settings_t;

static inline uint64_t CAVM_SPIX_CTRL_CFG_COMMON_DMA_SETTINGS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_CTRL_CFG_COMMON_DMA_SETTINGS(uint64_t a)
{
    if (a<=1)
        return 0x80400000023cll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_CTRL_CFG_COMMON_DMA_SETTINGS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_CTRL_CFG_COMMON_DMA_SETTINGS(a) cavm_spix_ctrl_cfg_common_dma_settings_t
#define bustype_CAVM_SPIX_CTRL_CFG_COMMON_DMA_SETTINGS(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_CTRL_CFG_COMMON_DMA_SETTINGS(a) "SPIX_CTRL_CFG_COMMON_DMA_SETTINGS"
#define device_bar_CAVM_SPIX_CTRL_CFG_COMMON_DMA_SETTINGS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_CTRL_CFG_COMMON_DMA_SETTINGS(a) (a)
#define arguments_CAVM_SPIX_CTRL_CFG_COMMON_DMA_SETTINGS(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_ctrl_cfg_common_long_polling
 *
 * SPI Control Cfg Common Long Polling Register
 * Wait count value for long polling.
 */
union cavm_spix_ctrl_cfg_common_long_polling
{
    uint32_t u;
    struct cavm_spix_ctrl_cfg_common_long_polling_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t long_polling          : 16; /**< [ 15:  0](R/W) Number of system clock cycles after issue of erase/write operation before the controller starts to
                                                                 check device status (ready/busy and fail/pass). First status checking polling will happen after at
                                                                 least this many number of system clock cycles. Next status checking will happen every short polling
                                                                 cycles. The long polling value should be significantly larger the short polling value. */
#else /* Word 0 - Little Endian */
        uint32_t long_polling          : 16; /**< [ 15:  0](R/W) Number of system clock cycles after issue of erase/write operation before the controller starts to
                                                                 check device status (ready/busy and fail/pass). First status checking polling will happen after at
                                                                 least this many number of system clock cycles. Next status checking will happen every short polling
                                                                 cycles. The long polling value should be significantly larger the short polling value. */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_ctrl_cfg_common_long_polling_s cn; */
};
typedef union cavm_spix_ctrl_cfg_common_long_polling cavm_spix_ctrl_cfg_common_long_polling_t;

static inline uint64_t CAVM_SPIX_CTRL_CFG_COMMON_LONG_POLLING(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_CTRL_CFG_COMMON_LONG_POLLING(uint64_t a)
{
    if (a<=1)
        return 0x804000000208ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_CTRL_CFG_COMMON_LONG_POLLING", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_CTRL_CFG_COMMON_LONG_POLLING(a) cavm_spix_ctrl_cfg_common_long_polling_t
#define bustype_CAVM_SPIX_CTRL_CFG_COMMON_LONG_POLLING(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_CTRL_CFG_COMMON_LONG_POLLING(a) "SPIX_CTRL_CFG_COMMON_LONG_POLLING"
#define device_bar_CAVM_SPIX_CTRL_CFG_COMMON_LONG_POLLING(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_CTRL_CFG_COMMON_LONG_POLLING(a) (a)
#define arguments_CAVM_SPIX_CTRL_CFG_COMMON_LONG_POLLING(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_ctrl_cfg_common_sdma_addr0
 *
 * SPI Control Cfg Common SDMA Addr0 Register
 * This register stores the buffer address in the host memory that will be used as a
 * sink/source for the
 * SDMA transfer. The SDMA address is based on the Memory Pointer field that was
 * programed by the host as
 * part of the CDMA/PIO command. A single CDMA/PIO command can trigger multiple transfers on the slave
 * interface, so the SDMA address value will be automatically incremented and updated before each SDMA
 * transfer.
 */
union cavm_spix_ctrl_cfg_common_sdma_addr0
{
    uint32_t u;
    struct cavm_spix_ctrl_cfg_common_sdma_addr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sdma_addr_l           : 32; /**< [ 31:  0](RO) The SDMA destination/source address - lower part. */
#else /* Word 0 - Little Endian */
        uint32_t sdma_addr_l           : 32; /**< [ 31:  0](RO) The SDMA destination/source address - lower part. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_ctrl_cfg_common_sdma_addr0_s cn; */
};
typedef union cavm_spix_ctrl_cfg_common_sdma_addr0 cavm_spix_ctrl_cfg_common_sdma_addr0_t;

static inline uint64_t CAVM_SPIX_CTRL_CFG_COMMON_SDMA_ADDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_CTRL_CFG_COMMON_SDMA_ADDR0(uint64_t a)
{
    if (a<=1)
        return 0x80400000024cll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_CTRL_CFG_COMMON_SDMA_ADDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_CTRL_CFG_COMMON_SDMA_ADDR0(a) cavm_spix_ctrl_cfg_common_sdma_addr0_t
#define bustype_CAVM_SPIX_CTRL_CFG_COMMON_SDMA_ADDR0(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_CTRL_CFG_COMMON_SDMA_ADDR0(a) "SPIX_CTRL_CFG_COMMON_SDMA_ADDR0"
#define device_bar_CAVM_SPIX_CTRL_CFG_COMMON_SDMA_ADDR0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_CTRL_CFG_COMMON_SDMA_ADDR0(a) (a)
#define arguments_CAVM_SPIX_CTRL_CFG_COMMON_SDMA_ADDR0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_ctrl_cfg_common_sdma_addr1
 *
 * SPI Control Cfg Common SDMA Addr1 Register
 * This register stores the buffer address in the host memory that will be used as a
 * sink/source for the
 * SDMA transfer. The SDMA address is based on the Memory Pointer field that was
 * programed by the host as
 * part of the CDMA/PIO command. A single CDMA/PIO command can trigger multiple transfers on the slave
 * interface, so the SDMA address value will be automatically incremented and updated before each SDMA
 * transfer.
 */
union cavm_spix_ctrl_cfg_common_sdma_addr1
{
    uint32_t u;
    struct cavm_spix_ctrl_cfg_common_sdma_addr1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sdma_addr_h           : 32; /**< [ 31:  0](RO) The SDMA destination/source address - higher part. */
#else /* Word 0 - Little Endian */
        uint32_t sdma_addr_h           : 32; /**< [ 31:  0](RO) The SDMA destination/source address - higher part. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_ctrl_cfg_common_sdma_addr1_s cn; */
};
typedef union cavm_spix_ctrl_cfg_common_sdma_addr1 cavm_spix_ctrl_cfg_common_sdma_addr1_t;

static inline uint64_t CAVM_SPIX_CTRL_CFG_COMMON_SDMA_ADDR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_CTRL_CFG_COMMON_SDMA_ADDR1(uint64_t a)
{
    if (a<=1)
        return 0x804000000250ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_CTRL_CFG_COMMON_SDMA_ADDR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_CTRL_CFG_COMMON_SDMA_ADDR1(a) cavm_spix_ctrl_cfg_common_sdma_addr1_t
#define bustype_CAVM_SPIX_CTRL_CFG_COMMON_SDMA_ADDR1(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_CTRL_CFG_COMMON_SDMA_ADDR1(a) "SPIX_CTRL_CFG_COMMON_SDMA_ADDR1"
#define device_bar_CAVM_SPIX_CTRL_CFG_COMMON_SDMA_ADDR1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_CTRL_CFG_COMMON_SDMA_ADDR1(a) (a)
#define arguments_CAVM_SPIX_CTRL_CFG_COMMON_SDMA_ADDR1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_ctrl_cfg_common_sdma_size
 *
 * SPI Control Cfg Common SDMA Size Register
 * Transferred data block size for the slave DMA module.
 */
union cavm_spix_ctrl_cfg_common_sdma_size
{
    uint32_t u;
    struct cavm_spix_ctrl_cfg_common_sdma_size_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sdma_size             : 32; /**< [ 31:  0](RO) Transferred data block size in bytes for the slave DMA module. Data size is rounded up to the data
                                                                 bus word size. */
#else /* Word 0 - Little Endian */
        uint32_t sdma_size             : 32; /**< [ 31:  0](RO) Transferred data block size in bytes for the slave DMA module. Data size is rounded up to the data
                                                                 bus word size. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_ctrl_cfg_common_sdma_size_s cn; */
};
typedef union cavm_spix_ctrl_cfg_common_sdma_size cavm_spix_ctrl_cfg_common_sdma_size_t;

static inline uint64_t CAVM_SPIX_CTRL_CFG_COMMON_SDMA_SIZE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_CTRL_CFG_COMMON_SDMA_SIZE(uint64_t a)
{
    if (a<=1)
        return 0x804000000240ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_CTRL_CFG_COMMON_SDMA_SIZE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_CTRL_CFG_COMMON_SDMA_SIZE(a) cavm_spix_ctrl_cfg_common_sdma_size_t
#define bustype_CAVM_SPIX_CTRL_CFG_COMMON_SDMA_SIZE(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_CTRL_CFG_COMMON_SDMA_SIZE(a) "SPIX_CTRL_CFG_COMMON_SDMA_SIZE"
#define device_bar_CAVM_SPIX_CTRL_CFG_COMMON_SDMA_SIZE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_CTRL_CFG_COMMON_SDMA_SIZE(a) (a)
#define arguments_CAVM_SPIX_CTRL_CFG_COMMON_SDMA_SIZE(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_ctrl_cfg_common_sdma_trd_info
 *
 * SPI Control Cfg Common SDMA Thread Info Register
 * Information for current slave DMA transaction related with execution thread.
 */
union cavm_spix_ctrl_cfg_common_sdma_trd_info
{
    uint32_t u;
    struct cavm_spix_ctrl_cfg_common_sdma_trd_info_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_9_31         : 23;
        uint32_t sdma_dir              : 1;  /**< [  8:  8](RO) Transfer direction related to current slave DMA transfer (0 = read; 1 = write). */
        uint32_t reserved_3_7          : 5;
        uint32_t sdma_trd              : 3;  /**< [  2:  0](RO) Thread number associated with transferred data block for the slave DMA module. */
#else /* Word 0 - Little Endian */
        uint32_t sdma_trd              : 3;  /**< [  2:  0](RO) Thread number associated with transferred data block for the slave DMA module. */
        uint32_t reserved_3_7          : 5;
        uint32_t sdma_dir              : 1;  /**< [  8:  8](RO) Transfer direction related to current slave DMA transfer (0 = read; 1 = write). */
        uint32_t reserved_9_31         : 23;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_ctrl_cfg_common_sdma_trd_info_s cn; */
};
typedef union cavm_spix_ctrl_cfg_common_sdma_trd_info cavm_spix_ctrl_cfg_common_sdma_trd_info_t;

static inline uint64_t CAVM_SPIX_CTRL_CFG_COMMON_SDMA_TRD_INFO(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_CTRL_CFG_COMMON_SDMA_TRD_INFO(uint64_t a)
{
    if (a<=1)
        return 0x804000000244ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_CTRL_CFG_COMMON_SDMA_TRD_INFO", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_CTRL_CFG_COMMON_SDMA_TRD_INFO(a) cavm_spix_ctrl_cfg_common_sdma_trd_info_t
#define bustype_CAVM_SPIX_CTRL_CFG_COMMON_SDMA_TRD_INFO(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_CTRL_CFG_COMMON_SDMA_TRD_INFO(a) "SPIX_CTRL_CFG_COMMON_SDMA_TRD_INFO"
#define device_bar_CAVM_SPIX_CTRL_CFG_COMMON_SDMA_TRD_INFO(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_CTRL_CFG_COMMON_SDMA_TRD_INFO(a) (a)
#define arguments_CAVM_SPIX_CTRL_CFG_COMMON_SDMA_TRD_INFO(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_ctrl_cfg_common_short_polling
 *
 * SPI Control Cfg Common Short Polling Register
 * Status monitor cycle count value.
 */
union cavm_spix_ctrl_cfg_common_short_polling
{
    uint32_t u;
    struct cavm_spix_ctrl_cfg_common_short_polling_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t short_polling         : 16; /**< [ 15:  0](R/W) Number of minimum system clocks after long polling delay before the controller starts to poll for
                                                                 status if first status poll attempt returned information that controller is busy. The long polling
                                                                 value should be significantly larger the short polling value. */
#else /* Word 0 - Little Endian */
        uint32_t short_polling         : 16; /**< [ 15:  0](R/W) Number of minimum system clocks after long polling delay before the controller starts to poll for
                                                                 status if first status poll attempt returned information that controller is busy. The long polling
                                                                 value should be significantly larger the short polling value. */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_ctrl_cfg_common_short_polling_s cn; */
};
typedef union cavm_spix_ctrl_cfg_common_short_polling cavm_spix_ctrl_cfg_common_short_polling_t;

static inline uint64_t CAVM_SPIX_CTRL_CFG_COMMON_SHORT_POLLING(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_CTRL_CFG_COMMON_SHORT_POLLING(uint64_t a)
{
    if (a<=1)
        return 0x80400000020cll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_CTRL_CFG_COMMON_SHORT_POLLING", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_CTRL_CFG_COMMON_SHORT_POLLING(a) cavm_spix_ctrl_cfg_common_short_polling_t
#define bustype_CAVM_SPIX_CTRL_CFG_COMMON_SHORT_POLLING(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_CTRL_CFG_COMMON_SHORT_POLLING(a) "SPIX_CTRL_CFG_COMMON_SHORT_POLLING"
#define device_bar_CAVM_SPIX_CTRL_CFG_COMMON_SHORT_POLLING(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_CTRL_CFG_COMMON_SHORT_POLLING(a) (a)
#define arguments_CAVM_SPIX_CTRL_CFG_COMMON_SHORT_POLLING(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_ctrl_cmd_stat_boot_status
 *
 * SPI Control Command Stat Boot Status Register
 * This register provides status of the latest boot operation.
 */
union cavm_spix_ctrl_cmd_stat_boot_status
{
    uint32_t u;
    struct cavm_spix_ctrl_cmd_stat_boot_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_3_31         : 29;
        uint32_t boot_bus_err          : 1;  /**< [  2:  2](RO) This field describes bus status during boot process. If it is set to a high value, the boot
                                                                 process failed due to the bus interface receiving an error response from the target.
                                                                 Allowed values are:
                                                                 0 = no error detected.
                                                                 1 = error detected. */
        uint32_t boot_crc_err          : 1;  /**< [  1:  1](RO) This field describes CRC status during boot process. If it is set to a high value, the boot
                                                                 process failed due to the CRC error on the xSPI interface.
                                                                 Allowed values are:
                                                                 0 = no error detected,
                                                                 1 = error detected. */
        uint32_t boot_dqs_err          : 1;  /**< [  0:  0](RO) This field describes DQS status during boot process. If it is set to a high value, the boot
                                                                 process failed due to the DQS error on the xSPI interface.
                                                                 Allowed values are:
                                                                 0 = no error detected,
                                                                 1 = error detected. */
#else /* Word 0 - Little Endian */
        uint32_t boot_dqs_err          : 1;  /**< [  0:  0](RO) This field describes DQS status during boot process. If it is set to a high value, the boot
                                                                 process failed due to the DQS error on the xSPI interface.
                                                                 Allowed values are:
                                                                 0 = no error detected,
                                                                 1 = error detected. */
        uint32_t boot_crc_err          : 1;  /**< [  1:  1](RO) This field describes CRC status during boot process. If it is set to a high value, the boot
                                                                 process failed due to the CRC error on the xSPI interface.
                                                                 Allowed values are:
                                                                 0 = no error detected,
                                                                 1 = error detected. */
        uint32_t boot_bus_err          : 1;  /**< [  2:  2](RO) This field describes bus status during boot process. If it is set to a high value, the boot
                                                                 process failed due to the bus interface receiving an error response from the target.
                                                                 Allowed values are:
                                                                 0 = no error detected.
                                                                 1 = error detected. */
        uint32_t reserved_3_31         : 29;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_ctrl_cmd_stat_boot_status_s cn; */
};
typedef union cavm_spix_ctrl_cmd_stat_boot_status cavm_spix_ctrl_cmd_stat_boot_status_t;

static inline uint64_t CAVM_SPIX_CTRL_CMD_STAT_BOOT_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_CTRL_CMD_STAT_BOOT_STATUS(uint64_t a)
{
    if (a<=1)
        return 0x804000000158ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_CTRL_CMD_STAT_BOOT_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_CTRL_CMD_STAT_BOOT_STATUS(a) cavm_spix_ctrl_cmd_stat_boot_status_t
#define bustype_CAVM_SPIX_CTRL_CMD_STAT_BOOT_STATUS(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_CTRL_CMD_STAT_BOOT_STATUS(a) "SPIX_CTRL_CMD_STAT_BOOT_STATUS"
#define device_bar_CAVM_SPIX_CTRL_CMD_STAT_BOOT_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_CTRL_CMD_STAT_BOOT_STATUS(a) (a)
#define arguments_CAVM_SPIX_CTRL_CMD_STAT_BOOT_STATUS(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_ctrl_cmd_stat_cmd_reg0
 *
 * SPI Control Command Stat Command Register 0
 * Command register 0. Writing data to this register will initiate a new transaction of the xSPI Flash
 * Controller in CDMA/PIO and STIG work mode. Fields encoding of those registers
 * depends on selected work
 * mode.
 */
union cavm_spix_ctrl_cmd_stat_cmd_reg0
{
    uint32_t u;
    struct cavm_spix_ctrl_cmd_stat_cmd_reg0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t cmd0                  : 32; /**< [ 31:  0](R/W) Command 0 register field. */
#else /* Word 0 - Little Endian */
        uint32_t cmd0                  : 32; /**< [ 31:  0](R/W) Command 0 register field. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_ctrl_cmd_stat_cmd_reg0_s cn; */
};
typedef union cavm_spix_ctrl_cmd_stat_cmd_reg0 cavm_spix_ctrl_cmd_stat_cmd_reg0_t;

static inline uint64_t CAVM_SPIX_CTRL_CMD_STAT_CMD_REG0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_CTRL_CMD_STAT_CMD_REG0(uint64_t a)
{
    if (a<=1)
        return 0x804000000000ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_CTRL_CMD_STAT_CMD_REG0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_CTRL_CMD_STAT_CMD_REG0(a) cavm_spix_ctrl_cmd_stat_cmd_reg0_t
#define bustype_CAVM_SPIX_CTRL_CMD_STAT_CMD_REG0(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_CTRL_CMD_STAT_CMD_REG0(a) "SPIX_CTRL_CMD_STAT_CMD_REG0"
#define device_bar_CAVM_SPIX_CTRL_CMD_STAT_CMD_REG0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_CTRL_CMD_STAT_CMD_REG0(a) (a)
#define arguments_CAVM_SPIX_CTRL_CMD_STAT_CMD_REG0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_ctrl_cmd_stat_cmd_reg1
 *
 * SPI Control Command Stat Command Register 1
 * Command register 1.
 */
union cavm_spix_ctrl_cmd_stat_cmd_reg1
{
    uint32_t u;
    struct cavm_spix_ctrl_cmd_stat_cmd_reg1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t cmd1                  : 32; /**< [ 31:  0](R/W) Command 1 register field. */
#else /* Word 0 - Little Endian */
        uint32_t cmd1                  : 32; /**< [ 31:  0](R/W) Command 1 register field. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_ctrl_cmd_stat_cmd_reg1_s cn; */
};
typedef union cavm_spix_ctrl_cmd_stat_cmd_reg1 cavm_spix_ctrl_cmd_stat_cmd_reg1_t;

static inline uint64_t CAVM_SPIX_CTRL_CMD_STAT_CMD_REG1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_CTRL_CMD_STAT_CMD_REG1(uint64_t a)
{
    if (a<=1)
        return 0x804000000004ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_CTRL_CMD_STAT_CMD_REG1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_CTRL_CMD_STAT_CMD_REG1(a) cavm_spix_ctrl_cmd_stat_cmd_reg1_t
#define bustype_CAVM_SPIX_CTRL_CMD_STAT_CMD_REG1(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_CTRL_CMD_STAT_CMD_REG1(a) "SPIX_CTRL_CMD_STAT_CMD_REG1"
#define device_bar_CAVM_SPIX_CTRL_CMD_STAT_CMD_REG1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_CTRL_CMD_STAT_CMD_REG1(a) (a)
#define arguments_CAVM_SPIX_CTRL_CMD_STAT_CMD_REG1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_ctrl_cmd_stat_cmd_reg2
 *
 * SPI Control Command Stat Command Register 2
 * Command register 2.
 */
union cavm_spix_ctrl_cmd_stat_cmd_reg2
{
    uint32_t u;
    struct cavm_spix_ctrl_cmd_stat_cmd_reg2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t cmd2                  : 32; /**< [ 31:  0](R/W) Command 2 register field. */
#else /* Word 0 - Little Endian */
        uint32_t cmd2                  : 32; /**< [ 31:  0](R/W) Command 2 register field. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_ctrl_cmd_stat_cmd_reg2_s cn; */
};
typedef union cavm_spix_ctrl_cmd_stat_cmd_reg2 cavm_spix_ctrl_cmd_stat_cmd_reg2_t;

static inline uint64_t CAVM_SPIX_CTRL_CMD_STAT_CMD_REG2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_CTRL_CMD_STAT_CMD_REG2(uint64_t a)
{
    if (a<=1)
        return 0x804000000008ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_CTRL_CMD_STAT_CMD_REG2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_CTRL_CMD_STAT_CMD_REG2(a) cavm_spix_ctrl_cmd_stat_cmd_reg2_t
#define bustype_CAVM_SPIX_CTRL_CMD_STAT_CMD_REG2(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_CTRL_CMD_STAT_CMD_REG2(a) "SPIX_CTRL_CMD_STAT_CMD_REG2"
#define device_bar_CAVM_SPIX_CTRL_CMD_STAT_CMD_REG2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_CTRL_CMD_STAT_CMD_REG2(a) (a)
#define arguments_CAVM_SPIX_CTRL_CMD_STAT_CMD_REG2(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_ctrl_cmd_stat_cmd_reg3
 *
 * SPI Control Command Stat Command Register 3
 * Command register 3.
 */
union cavm_spix_ctrl_cmd_stat_cmd_reg3
{
    uint32_t u;
    struct cavm_spix_ctrl_cmd_stat_cmd_reg3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t cmd3                  : 32; /**< [ 31:  0](R/W) Command 3 register field. */
#else /* Word 0 - Little Endian */
        uint32_t cmd3                  : 32; /**< [ 31:  0](R/W) Command 3 register field. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_ctrl_cmd_stat_cmd_reg3_s cn; */
};
typedef union cavm_spix_ctrl_cmd_stat_cmd_reg3 cavm_spix_ctrl_cmd_stat_cmd_reg3_t;

static inline uint64_t CAVM_SPIX_CTRL_CMD_STAT_CMD_REG3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_CTRL_CMD_STAT_CMD_REG3(uint64_t a)
{
    if (a<=1)
        return 0x80400000000cll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_CTRL_CMD_STAT_CMD_REG3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_CTRL_CMD_STAT_CMD_REG3(a) cavm_spix_ctrl_cmd_stat_cmd_reg3_t
#define bustype_CAVM_SPIX_CTRL_CMD_STAT_CMD_REG3(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_CTRL_CMD_STAT_CMD_REG3(a) "SPIX_CTRL_CMD_STAT_CMD_REG3"
#define device_bar_CAVM_SPIX_CTRL_CMD_STAT_CMD_REG3(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_CTRL_CMD_STAT_CMD_REG3(a) (a)
#define arguments_CAVM_SPIX_CTRL_CMD_STAT_CMD_REG3(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_ctrl_cmd_stat_cmd_reg4
 *
 * SPI Control Command Stat Command Register 4
 * Command register 4.
 */
union cavm_spix_ctrl_cmd_stat_cmd_reg4
{
    uint32_t u;
    struct cavm_spix_ctrl_cmd_stat_cmd_reg4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t cmd4                  : 32; /**< [ 31:  0](R/W) Command 4 register field. */
#else /* Word 0 - Little Endian */
        uint32_t cmd4                  : 32; /**< [ 31:  0](R/W) Command 4 register field. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_ctrl_cmd_stat_cmd_reg4_s cn; */
};
typedef union cavm_spix_ctrl_cmd_stat_cmd_reg4 cavm_spix_ctrl_cmd_stat_cmd_reg4_t;

static inline uint64_t CAVM_SPIX_CTRL_CMD_STAT_CMD_REG4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_CTRL_CMD_STAT_CMD_REG4(uint64_t a)
{
    if (a<=1)
        return 0x804000000010ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_CTRL_CMD_STAT_CMD_REG4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_CTRL_CMD_STAT_CMD_REG4(a) cavm_spix_ctrl_cmd_stat_cmd_reg4_t
#define bustype_CAVM_SPIX_CTRL_CMD_STAT_CMD_REG4(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_CTRL_CMD_STAT_CMD_REG4(a) "SPIX_CTRL_CMD_STAT_CMD_REG4"
#define device_bar_CAVM_SPIX_CTRL_CMD_STAT_CMD_REG4(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_CTRL_CMD_STAT_CMD_REG4(a) (a)
#define arguments_CAVM_SPIX_CTRL_CMD_STAT_CMD_REG4(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_ctrl_cmd_stat_cmd_reg5
 *
 * SPI Control Command Stat Command Register 5
 * Command register 5.
 */
union cavm_spix_ctrl_cmd_stat_cmd_reg5
{
    uint32_t u;
    struct cavm_spix_ctrl_cmd_stat_cmd_reg5_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t cmd5                  : 32; /**< [ 31:  0](R/W) Command 5 register field. */
#else /* Word 0 - Little Endian */
        uint32_t cmd5                  : 32; /**< [ 31:  0](R/W) Command 5 register field. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_ctrl_cmd_stat_cmd_reg5_s cn; */
};
typedef union cavm_spix_ctrl_cmd_stat_cmd_reg5 cavm_spix_ctrl_cmd_stat_cmd_reg5_t;

static inline uint64_t CAVM_SPIX_CTRL_CMD_STAT_CMD_REG5(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_CTRL_CMD_STAT_CMD_REG5(uint64_t a)
{
    if (a<=1)
        return 0x804000000014ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_CTRL_CMD_STAT_CMD_REG5", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_CTRL_CMD_STAT_CMD_REG5(a) cavm_spix_ctrl_cmd_stat_cmd_reg5_t
#define bustype_CAVM_SPIX_CTRL_CMD_STAT_CMD_REG5(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_CTRL_CMD_STAT_CMD_REG5(a) "SPIX_CTRL_CMD_STAT_CMD_REG5"
#define device_bar_CAVM_SPIX_CTRL_CMD_STAT_CMD_REG5(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_CTRL_CMD_STAT_CMD_REG5(a) (a)
#define arguments_CAVM_SPIX_CTRL_CMD_STAT_CMD_REG5(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_ctrl_cmd_stat_cmd_status
 *
 * SPI Control Command Stat Command Status Register
 * Command status register for selected thread in ACMD work mode and for STIG work mode
 * when xSPI flash
 * transaction is completed.
 */
union cavm_spix_ctrl_cmd_stat_cmd_status
{
    uint32_t u;
    struct cavm_spix_ctrl_cmd_stat_cmd_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t cmd_status            : 32; /**< [ 31:  0](RO) Command status register field. This field gives the software direct access to selected thread
                                                                 descriptors status or STIG status. Number of accessed thread can be selected with
                                                                 SPI()_CTRL_CMD_STAT_CMD_STATUS_PTR (not applicable for STIG work mode). */
#else /* Word 0 - Little Endian */
        uint32_t cmd_status            : 32; /**< [ 31:  0](RO) Command status register field. This field gives the software direct access to selected thread
                                                                 descriptors status or STIG status. Number of accessed thread can be selected with
                                                                 SPI()_CTRL_CMD_STAT_CMD_STATUS_PTR (not applicable for STIG work mode). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_ctrl_cmd_stat_cmd_status_s cn; */
};
typedef union cavm_spix_ctrl_cmd_stat_cmd_status cavm_spix_ctrl_cmd_stat_cmd_status_t;

static inline uint64_t CAVM_SPIX_CTRL_CMD_STAT_CMD_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_CTRL_CMD_STAT_CMD_STATUS(uint64_t a)
{
    if (a<=1)
        return 0x804000000044ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_CTRL_CMD_STAT_CMD_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_CTRL_CMD_STAT_CMD_STATUS(a) cavm_spix_ctrl_cmd_stat_cmd_status_t
#define bustype_CAVM_SPIX_CTRL_CMD_STAT_CMD_STATUS(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_CTRL_CMD_STAT_CMD_STATUS(a) "SPIX_CTRL_CMD_STAT_CMD_STATUS"
#define device_bar_CAVM_SPIX_CTRL_CMD_STAT_CMD_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_CTRL_CMD_STAT_CMD_STATUS(a) (a)
#define arguments_CAVM_SPIX_CTRL_CMD_STAT_CMD_STATUS(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_ctrl_cmd_stat_cmd_status_ptr
 *
 * SPI Control Command Stat Command Status Ptr Register
 * Pointer register to select which thread status will be selected for ACMD work mode
 * (not applicable for
 * STIG and DIRECT work modes).
 */
union cavm_spix_ctrl_cmd_stat_cmd_status_ptr
{
    uint32_t u;
    struct cavm_spix_ctrl_cmd_stat_cmd_status_ptr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_3_31         : 29;
        uint32_t thrd_status_sel       : 3;  /**< [  2:  0](R/W) Number of thread for which status will be available in SPI()_CTRL_CMD_STAT_CMD_STATUS. */
#else /* Word 0 - Little Endian */
        uint32_t thrd_status_sel       : 3;  /**< [  2:  0](R/W) Number of thread for which status will be available in SPI()_CTRL_CMD_STAT_CMD_STATUS. */
        uint32_t reserved_3_31         : 29;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_ctrl_cmd_stat_cmd_status_ptr_s cn; */
};
typedef union cavm_spix_ctrl_cmd_stat_cmd_status_ptr cavm_spix_ctrl_cmd_stat_cmd_status_ptr_t;

static inline uint64_t CAVM_SPIX_CTRL_CMD_STAT_CMD_STATUS_PTR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_CTRL_CMD_STAT_CMD_STATUS_PTR(uint64_t a)
{
    if (a<=1)
        return 0x804000000040ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_CTRL_CMD_STAT_CMD_STATUS_PTR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_CTRL_CMD_STAT_CMD_STATUS_PTR(a) cavm_spix_ctrl_cmd_stat_cmd_status_ptr_t
#define bustype_CAVM_SPIX_CTRL_CMD_STAT_CMD_STATUS_PTR(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_CTRL_CMD_STAT_CMD_STATUS_PTR(a) "SPIX_CTRL_CMD_STAT_CMD_STATUS_PTR"
#define device_bar_CAVM_SPIX_CTRL_CMD_STAT_CMD_STATUS_PTR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_CTRL_CMD_STAT_CMD_STATUS_PTR(a) (a)
#define arguments_CAVM_SPIX_CTRL_CMD_STAT_CMD_STATUS_PTR(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_ctrl_cmd_stat_ctrl_status
 *
 * SPI Control Command Stat Control Status Register
 * Controller internal state.
 */
union cavm_spix_ctrl_cmd_stat_ctrl_status
{
    uint32_t u;
    struct cavm_spix_ctrl_cmd_stat_ctrl_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_17_31        : 15;
        uint32_t init_comp             : 1;  /**< [ 16: 16](RO) The xSPI controller has completed its reset and initialization process. */
        uint32_t reserved_10_15        : 6;
        uint32_t init_fail             : 2;  /**< [  9:  8](RO) Initialization process status:
                                                                 0x0 = xSPI device detected.
                                                                 0x1 = Failed.
                                                                 0x2 = Legacy SPI device detected.
                                                                 0x3 = N/A. */
        uint32_t ctrl_busy             : 1;  /**< [  7:  7](RO) This bit indicates if controller is in the busy state or not.
                                                                 0 = Controller is idle.
                                                                 1 = Controller is busy.
                                                                 This bit is routed to the controller interface as ctrl_busy pin. */
        uint32_t discovery_busy        : 1;  /**< [  6:  6](RO) If 1, the device discovery internal module is busy. When device discovery internal module is
                                                                 inhibited, then this bit is set during the initial delay and PHY initialization procedure. */
        uint32_t reserved_5            : 1;
        uint32_t gcmd_eng_mc_busy      : 1;  /**< [  4:  4](RO) If 1, the minicontroller waits for the next/last instruction in the glued chain
                                                                 or executes requested
                                                                 sequence on the xSPI interface. This flag is generated only in STIG work mode. */
        uint32_t gcmd_eng_busy         : 1;  /**< [  3:  3](RO) For DIRECT work mode: if set to 1, the DIRECT CMD generator internal module is
                                                                 busy and will not accept
                                                                 new requests on the slave data interface.
                                                                 For STIG work mode: if set to 1, the STIG internal module is busy. */
        uint32_t acmd_eng_busy         : 1;  /**< [  2:  2](RO) If set to 1, the auto command engine internal module is busy. */
        uint32_t mdma_busy             : 1;  /**< [  1:  1](RO) If set to 1, the master DMA internal module is busy. */
        uint32_t sdma_busy             : 1;  /**< [  0:  0](RO) If set to 1, the slave DMA internal module is busy. */
#else /* Word 0 - Little Endian */
        uint32_t sdma_busy             : 1;  /**< [  0:  0](RO) If set to 1, the slave DMA internal module is busy. */
        uint32_t mdma_busy             : 1;  /**< [  1:  1](RO) If set to 1, the master DMA internal module is busy. */
        uint32_t acmd_eng_busy         : 1;  /**< [  2:  2](RO) If set to 1, the auto command engine internal module is busy. */
        uint32_t gcmd_eng_busy         : 1;  /**< [  3:  3](RO) For DIRECT work mode: if set to 1, the DIRECT CMD generator internal module is
                                                                 busy and will not accept
                                                                 new requests on the slave data interface.
                                                                 For STIG work mode: if set to 1, the STIG internal module is busy. */
        uint32_t gcmd_eng_mc_busy      : 1;  /**< [  4:  4](RO) If 1, the minicontroller waits for the next/last instruction in the glued chain
                                                                 or executes requested
                                                                 sequence on the xSPI interface. This flag is generated only in STIG work mode. */
        uint32_t reserved_5            : 1;
        uint32_t discovery_busy        : 1;  /**< [  6:  6](RO) If 1, the device discovery internal module is busy. When device discovery internal module is
                                                                 inhibited, then this bit is set during the initial delay and PHY initialization procedure. */
        uint32_t ctrl_busy             : 1;  /**< [  7:  7](RO) This bit indicates if controller is in the busy state or not.
                                                                 0 = Controller is idle.
                                                                 1 = Controller is busy.
                                                                 This bit is routed to the controller interface as ctrl_busy pin. */
        uint32_t init_fail             : 2;  /**< [  9:  8](RO) Initialization process status:
                                                                 0x0 = xSPI device detected.
                                                                 0x1 = Failed.
                                                                 0x2 = Legacy SPI device detected.
                                                                 0x3 = N/A. */
        uint32_t reserved_10_15        : 6;
        uint32_t init_comp             : 1;  /**< [ 16: 16](RO) The xSPI controller has completed its reset and initialization process. */
        uint32_t reserved_17_31        : 15;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_ctrl_cmd_stat_ctrl_status_s cn; */
};
typedef union cavm_spix_ctrl_cmd_stat_ctrl_status cavm_spix_ctrl_cmd_stat_ctrl_status_t;

static inline uint64_t CAVM_SPIX_CTRL_CMD_STAT_CTRL_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_CTRL_CMD_STAT_CTRL_STATUS(uint64_t a)
{
    if (a<=1)
        return 0x804000000100ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_CTRL_CMD_STAT_CTRL_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_CTRL_CMD_STAT_CTRL_STATUS(a) cavm_spix_ctrl_cmd_stat_ctrl_status_t
#define bustype_CAVM_SPIX_CTRL_CMD_STAT_CTRL_STATUS(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_CTRL_CMD_STAT_CTRL_STATUS(a) "SPIX_CTRL_CMD_STAT_CTRL_STATUS"
#define device_bar_CAVM_SPIX_CTRL_CMD_STAT_CTRL_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_CTRL_CMD_STAT_CTRL_STATUS(a) (a)
#define arguments_CAVM_SPIX_CTRL_CMD_STAT_CTRL_STATUS(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_ctrl_cmd_stat_dma_target_error_h
 *
 * SPI Control Command Stat DMA Target Error H Register
 * Master data interface error address [63:32]. This register store address of request on the system
 * master data interface that caused setting [CDMA_TERR] or [DDMA_TERR] in
 * SPI()_CTRL_CMD_STAT_INTR_STATUS.
 * Address can be overwritten if error response is detected for the following command sequences.
 */
union cavm_spix_ctrl_cmd_stat_dma_target_error_h
{
    uint32_t u;
    struct cavm_spix_ctrl_cmd_stat_dma_target_error_h_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t target_err_h          : 32; /**< [ 31:  0](RO) Address of the first request on the master interface that returned error response. */
#else /* Word 0 - Little Endian */
        uint32_t target_err_h          : 32; /**< [ 31:  0](RO) Address of the first request on the master interface that returned error response. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_ctrl_cmd_stat_dma_target_error_h_s cn; */
};
typedef union cavm_spix_ctrl_cmd_stat_dma_target_error_h cavm_spix_ctrl_cmd_stat_dma_target_error_h_t;

static inline uint64_t CAVM_SPIX_CTRL_CMD_STAT_DMA_TARGET_ERROR_H(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_CTRL_CMD_STAT_DMA_TARGET_ERROR_H(uint64_t a)
{
    if (a<=1)
        return 0x804000000154ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_CTRL_CMD_STAT_DMA_TARGET_ERROR_H", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_CTRL_CMD_STAT_DMA_TARGET_ERROR_H(a) cavm_spix_ctrl_cmd_stat_dma_target_error_h_t
#define bustype_CAVM_SPIX_CTRL_CMD_STAT_DMA_TARGET_ERROR_H(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_CTRL_CMD_STAT_DMA_TARGET_ERROR_H(a) "SPIX_CTRL_CMD_STAT_DMA_TARGET_ERROR_H"
#define device_bar_CAVM_SPIX_CTRL_CMD_STAT_DMA_TARGET_ERROR_H(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_CTRL_CMD_STAT_DMA_TARGET_ERROR_H(a) (a)
#define arguments_CAVM_SPIX_CTRL_CMD_STAT_DMA_TARGET_ERROR_H(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_ctrl_cmd_stat_dma_target_error_l
 *
 * SPI Control Command Stat DMA Target Error L Register
 * Master data interface error address [31:0]. This register store address of request on the system
 * master data interface that caused setting [CDMA_TERR] or [DDMA_TERR] in
 * SPI()_CTRL_CMD_STAT_INTR_STATUS.
 * Address can be overwritten if an error response is detected for the following command sequences.
 */
union cavm_spix_ctrl_cmd_stat_dma_target_error_l
{
    uint32_t u;
    struct cavm_spix_ctrl_cmd_stat_dma_target_error_l_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t target_err_l          : 32; /**< [ 31:  0](RO) Address of the first request on the master interface that returned error response. */
#else /* Word 0 - Little Endian */
        uint32_t target_err_l          : 32; /**< [ 31:  0](RO) Address of the first request on the master interface that returned error response. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_ctrl_cmd_stat_dma_target_error_l_s cn; */
};
typedef union cavm_spix_ctrl_cmd_stat_dma_target_error_l cavm_spix_ctrl_cmd_stat_dma_target_error_l_t;

static inline uint64_t CAVM_SPIX_CTRL_CMD_STAT_DMA_TARGET_ERROR_L(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_CTRL_CMD_STAT_DMA_TARGET_ERROR_L(uint64_t a)
{
    if (a<=1)
        return 0x804000000150ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_CTRL_CMD_STAT_DMA_TARGET_ERROR_L", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_CTRL_CMD_STAT_DMA_TARGET_ERROR_L(a) cavm_spix_ctrl_cmd_stat_dma_target_error_l_t
#define bustype_CAVM_SPIX_CTRL_CMD_STAT_DMA_TARGET_ERROR_L(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_CTRL_CMD_STAT_DMA_TARGET_ERROR_L(a) "SPIX_CTRL_CMD_STAT_DMA_TARGET_ERROR_L"
#define device_bar_CAVM_SPIX_CTRL_CMD_STAT_DMA_TARGET_ERROR_L(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_CTRL_CMD_STAT_DMA_TARGET_ERROR_L(a) (a)
#define arguments_CAVM_SPIX_CTRL_CMD_STAT_DMA_TARGET_ERROR_L(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_ctrl_cmd_stat_intr_enable
 *
 * SPI Control Command Stat Interrupt Enable Register
 * Interrupt enable register. If selected bit of this register is set, rising edge of
 * the corresponding
 * bit in SPI(()_CTRL_CMD_STAT_INTR_STATUS will generate setting of external interrupt line.
 */
union cavm_spix_ctrl_cmd_stat_intr_enable
{
    uint32_t u;
    struct cavm_spix_ctrl_cmd_stat_intr_enable_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t intr_en               : 1;  /**< [ 31: 31](R/W) Global interrupts enable flag. */
        uint32_t reserved_29_30        : 2;
        uint32_t dir_dev_err_en        : 1;  /**< [ 28: 28](R/W) Enables interrupt when uncorrectable ECC or program fail error occurred in DIRECT work mode. */
        uint32_t dir_ecc_corr_err_en   : 1;  /**< [ 27: 27](R/W) Enables interrupt when correctable ECC error occurred in DIRECT work mode. */
        uint32_t dir_cmd_err_en        : 1;  /**< [ 26: 26](R/W) Enables interrupt when invalid command sequence has been detected in DIRECT work mode. */
        uint32_t dir_dqs_err_en        : 1;  /**< [ 25: 25](R/W) Enables interrupt when minicontroller returns DQS error after read or status checking command in
                                                                 DIRECT work mode. */
        uint32_t dir_crc_err_en        : 1;  /**< [ 24: 24](R/W) Enables interrupt when minicontroller returns CRC error after read or status checking command in
                                                                 DIRECT work mode. */
        uint32_t stig_done_en          : 1;  /**< [ 23: 23](R/W) Enables interrupt when instruction in a glued chain is completed. */
        uint32_t sdma_err_en           : 1;  /**< [ 22: 22](R/W) Enables interrupt when not allowed access to the slave DMA interface is detected. */
        uint32_t sdma_trigg_en         : 1;  /**< [ 21: 21](R/W) Enables interrupt when a trigger condition for the slave DMA is met. */
        uint32_t cmd_ignored_en        : 1;  /**< [ 20: 20](R/W) Interrupt enable for detecting of ignored command. */
        uint32_t reserved_19           : 1;
        uint32_t ddma_terr_en          : 1;  /**< [ 18: 18](R/W) Interrupt enable for detecting data DMA master target error. */
        uint32_t cdma_terr_en          : 1;  /**< [ 17: 17](R/W) Interrupt enable for detecting auto CMD engine target error. */
        uint32_t ctrl_idle_en          : 1;  /**< [ 16: 16](R/W) Interrupt enable for detecting that the controller has returned to the IDLE state. */
        uint32_t gp_open_drain_3_en    : 1;  /**< [ 15: 15](R/W) Interrupt enable for detecting the HIGH-to-LOW or LOW-to-HIGH transition on the
                                                                 xspi_dfi_gp_open_drain[3] input pin. */
        uint32_t gp_open_drain_2_en    : 1;  /**< [ 14: 14](R/W) Interrupt enable for detecting the HIGH-to-LOW or LOW-to-HIGH transition on the
                                                                 xspi_dfi_gp_open_drain[2] input pin. */
        uint32_t gp_open_drain_1_en    : 1;  /**< [ 13: 13](R/W) Interrupt enable for detecting the HIGH-to-LOW or LOW-to-HIGH transition on the
                                                                 xspi_dfi_gp_open_drain[1] input pin. */
        uint32_t gp_open_drain_0_en    : 1;  /**< [ 12: 12](R/W) Interrupt enable for detecting the HIGH-to-LOW or LOW-to-HIGH transition on the
                                                                 xspi_dfi_gp_open_drain[0] input pin. */
        uint32_t reserved_0_11         : 12;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_11         : 12;
        uint32_t gp_open_drain_0_en    : 1;  /**< [ 12: 12](R/W) Interrupt enable for detecting the HIGH-to-LOW or LOW-to-HIGH transition on the
                                                                 xspi_dfi_gp_open_drain[0] input pin. */
        uint32_t gp_open_drain_1_en    : 1;  /**< [ 13: 13](R/W) Interrupt enable for detecting the HIGH-to-LOW or LOW-to-HIGH transition on the
                                                                 xspi_dfi_gp_open_drain[1] input pin. */
        uint32_t gp_open_drain_2_en    : 1;  /**< [ 14: 14](R/W) Interrupt enable for detecting the HIGH-to-LOW or LOW-to-HIGH transition on the
                                                                 xspi_dfi_gp_open_drain[2] input pin. */
        uint32_t gp_open_drain_3_en    : 1;  /**< [ 15: 15](R/W) Interrupt enable for detecting the HIGH-to-LOW or LOW-to-HIGH transition on the
                                                                 xspi_dfi_gp_open_drain[3] input pin. */
        uint32_t ctrl_idle_en          : 1;  /**< [ 16: 16](R/W) Interrupt enable for detecting that the controller has returned to the IDLE state. */
        uint32_t cdma_terr_en          : 1;  /**< [ 17: 17](R/W) Interrupt enable for detecting auto CMD engine target error. */
        uint32_t ddma_terr_en          : 1;  /**< [ 18: 18](R/W) Interrupt enable for detecting data DMA master target error. */
        uint32_t reserved_19           : 1;
        uint32_t cmd_ignored_en        : 1;  /**< [ 20: 20](R/W) Interrupt enable for detecting of ignored command. */
        uint32_t sdma_trigg_en         : 1;  /**< [ 21: 21](R/W) Enables interrupt when a trigger condition for the slave DMA is met. */
        uint32_t sdma_err_en           : 1;  /**< [ 22: 22](R/W) Enables interrupt when not allowed access to the slave DMA interface is detected. */
        uint32_t stig_done_en          : 1;  /**< [ 23: 23](R/W) Enables interrupt when instruction in a glued chain is completed. */
        uint32_t dir_crc_err_en        : 1;  /**< [ 24: 24](R/W) Enables interrupt when minicontroller returns CRC error after read or status checking command in
                                                                 DIRECT work mode. */
        uint32_t dir_dqs_err_en        : 1;  /**< [ 25: 25](R/W) Enables interrupt when minicontroller returns DQS error after read or status checking command in
                                                                 DIRECT work mode. */
        uint32_t dir_cmd_err_en        : 1;  /**< [ 26: 26](R/W) Enables interrupt when invalid command sequence has been detected in DIRECT work mode. */
        uint32_t dir_ecc_corr_err_en   : 1;  /**< [ 27: 27](R/W) Enables interrupt when correctable ECC error occurred in DIRECT work mode. */
        uint32_t dir_dev_err_en        : 1;  /**< [ 28: 28](R/W) Enables interrupt when uncorrectable ECC or program fail error occurred in DIRECT work mode. */
        uint32_t reserved_29_30        : 2;
        uint32_t intr_en               : 1;  /**< [ 31: 31](R/W) Global interrupts enable flag. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_ctrl_cmd_stat_intr_enable_s cn; */
};
typedef union cavm_spix_ctrl_cmd_stat_intr_enable cavm_spix_ctrl_cmd_stat_intr_enable_t;

static inline uint64_t CAVM_SPIX_CTRL_CMD_STAT_INTR_ENABLE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_CTRL_CMD_STAT_INTR_ENABLE(uint64_t a)
{
    if (a<=1)
        return 0x804000000114ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_CTRL_CMD_STAT_INTR_ENABLE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_CTRL_CMD_STAT_INTR_ENABLE(a) cavm_spix_ctrl_cmd_stat_intr_enable_t
#define bustype_CAVM_SPIX_CTRL_CMD_STAT_INTR_ENABLE(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_CTRL_CMD_STAT_INTR_ENABLE(a) "SPIX_CTRL_CMD_STAT_INTR_ENABLE"
#define device_bar_CAVM_SPIX_CTRL_CMD_STAT_INTR_ENABLE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_CTRL_CMD_STAT_INTR_ENABLE(a) (a)
#define arguments_CAVM_SPIX_CTRL_CMD_STAT_INTR_ENABLE(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_ctrl_cmd_stat_intr_status
 *
 * SPI Control Command Stat Interrupt Status Register
 * Controller status register.
 */
union cavm_spix_ctrl_cmd_stat_intr_status
{
    uint32_t u;
    struct cavm_spix_ctrl_cmd_stat_intr_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_29_31        : 3;
        uint32_t dir_dev_err           : 1;  /**< [ 28: 28](R/W1C) This bit is set when an uncorrectable ECC error or program fail bit occurred in DIRECT work mode. */
        uint32_t dir_ecc_corr_err      : 1;  /**< [ 27: 27](R/W1C) This bit is set when a correctable ECC error occurred in DIRECT work mode. */
        uint32_t dir_cmd_err           : 1;  /**< [ 26: 26](R/W1C) This bit is set when an invalid command sequence has been detected in DIRECT work mode. */
        uint32_t dir_dqs_err           : 1;  /**< [ 25: 25](R/W1C) This bit is set when minicontroller returns a DQS error after the read or status
                                                                 checking command in
                                                                 DIRECT work mode. */
        uint32_t dir_crc_err           : 1;  /**< [ 24: 24](R/W1C) This bit is set when minicontroller returns a CRC error after the read or status
                                                                 checking command in
                                                                 DIRECT work mode. */
        uint32_t stig_done             : 1;  /**< [ 23: 23](R/W1C) This bit is set when the last instruction in glued chain is completed. */
        uint32_t sdma_err              : 1;  /**< [ 22: 22](R/W1C) This bit is set when not allowed access to the slave DMA interface is detected. */
        uint32_t sdma_trigg            : 1;  /**< [ 21: 21](R/W1C) This bit is set when a trigger condition for the slave DMA is met. */
        uint32_t cmd_ignored           : 1;  /**< [ 20: 20](R/W1C) ACMD work mode: detected sending of command to busy thread and ignored it.
                                                                 STIG work mode: detected sending of command to busy STIG engine module and ignored it. */
        uint32_t reserved_19           : 1;
        uint32_t ddma_terr             : 1;  /**< [ 18: 18](R/W1C) Master data DMA target error. This bit will be set if the master DMA data engine
                                                                 module detects a system
                                                                 bus error during reading or writing of data. */
        uint32_t cdma_terr             : 1;  /**< [ 17: 17](R/W1C) Command DMA target error.  This bit will be set if the auto command engine
                                                                 module detects a system bus
                                                                 error during reading descriptor from system memory or during descriptor status field write
                                                                 operation. */
        uint32_t ctrl_idle             : 1;  /**< [ 16: 16](R/W1C) The xSPI controller has returned to the IDLE state. */
        uint32_t gp_open_drain_3       : 1;  /**< [ 15: 15](R/W1C) The HIGH-to-LOW or LOW-to-HIGH transition detected on the xspi_dfi_gp_open_drain[3] input pin. */
        uint32_t gp_open_drain_2       : 1;  /**< [ 14: 14](R/W1C) The HIGH-to-LOW or LOW-to-HIGH transition detected on the xspi_dfi_gp_open_drain[2] input pin. */
        uint32_t gp_open_drain_1       : 1;  /**< [ 13: 13](R/W1C) The HIGH-to-LOW or LOW-to-HIGH transition detected on the xspi_dfi_gp_open_drain[1] input pin. */
        uint32_t gp_open_drain_0       : 1;  /**< [ 12: 12](R/W1C) The HIGH-to-LOW or LOW-to-HIGH transition detected on the xspi_dfi_gp_open_drain[0] input pin. */
        uint32_t reserved_0_11         : 12;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_11         : 12;
        uint32_t gp_open_drain_0       : 1;  /**< [ 12: 12](R/W1C) The HIGH-to-LOW or LOW-to-HIGH transition detected on the xspi_dfi_gp_open_drain[0] input pin. */
        uint32_t gp_open_drain_1       : 1;  /**< [ 13: 13](R/W1C) The HIGH-to-LOW or LOW-to-HIGH transition detected on the xspi_dfi_gp_open_drain[1] input pin. */
        uint32_t gp_open_drain_2       : 1;  /**< [ 14: 14](R/W1C) The HIGH-to-LOW or LOW-to-HIGH transition detected on the xspi_dfi_gp_open_drain[2] input pin. */
        uint32_t gp_open_drain_3       : 1;  /**< [ 15: 15](R/W1C) The HIGH-to-LOW or LOW-to-HIGH transition detected on the xspi_dfi_gp_open_drain[3] input pin. */
        uint32_t ctrl_idle             : 1;  /**< [ 16: 16](R/W1C) The xSPI controller has returned to the IDLE state. */
        uint32_t cdma_terr             : 1;  /**< [ 17: 17](R/W1C) Command DMA target error.  This bit will be set if the auto command engine
                                                                 module detects a system bus
                                                                 error during reading descriptor from system memory or during descriptor status field write
                                                                 operation. */
        uint32_t ddma_terr             : 1;  /**< [ 18: 18](R/W1C) Master data DMA target error. This bit will be set if the master DMA data engine
                                                                 module detects a system
                                                                 bus error during reading or writing of data. */
        uint32_t reserved_19           : 1;
        uint32_t cmd_ignored           : 1;  /**< [ 20: 20](R/W1C) ACMD work mode: detected sending of command to busy thread and ignored it.
                                                                 STIG work mode: detected sending of command to busy STIG engine module and ignored it. */
        uint32_t sdma_trigg            : 1;  /**< [ 21: 21](R/W1C) This bit is set when a trigger condition for the slave DMA is met. */
        uint32_t sdma_err              : 1;  /**< [ 22: 22](R/W1C) This bit is set when not allowed access to the slave DMA interface is detected. */
        uint32_t stig_done             : 1;  /**< [ 23: 23](R/W1C) This bit is set when the last instruction in glued chain is completed. */
        uint32_t dir_crc_err           : 1;  /**< [ 24: 24](R/W1C) This bit is set when minicontroller returns a CRC error after the read or status
                                                                 checking command in
                                                                 DIRECT work mode. */
        uint32_t dir_dqs_err           : 1;  /**< [ 25: 25](R/W1C) This bit is set when minicontroller returns a DQS error after the read or status
                                                                 checking command in
                                                                 DIRECT work mode. */
        uint32_t dir_cmd_err           : 1;  /**< [ 26: 26](R/W1C) This bit is set when an invalid command sequence has been detected in DIRECT work mode. */
        uint32_t dir_ecc_corr_err      : 1;  /**< [ 27: 27](R/W1C) This bit is set when a correctable ECC error occurred in DIRECT work mode. */
        uint32_t dir_dev_err           : 1;  /**< [ 28: 28](R/W1C) This bit is set when an uncorrectable ECC error or program fail bit occurred in DIRECT work mode. */
        uint32_t reserved_29_31        : 3;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_ctrl_cmd_stat_intr_status_s cn; */
};
typedef union cavm_spix_ctrl_cmd_stat_intr_status cavm_spix_ctrl_cmd_stat_intr_status_t;

static inline uint64_t CAVM_SPIX_CTRL_CMD_STAT_INTR_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_CTRL_CMD_STAT_INTR_STATUS(uint64_t a)
{
    if (a<=1)
        return 0x804000000110ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_CTRL_CMD_STAT_INTR_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_CTRL_CMD_STAT_INTR_STATUS(a) cavm_spix_ctrl_cmd_stat_intr_status_t
#define bustype_CAVM_SPIX_CTRL_CMD_STAT_INTR_STATUS(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_CTRL_CMD_STAT_INTR_STATUS(a) "SPIX_CTRL_CMD_STAT_INTR_STATUS"
#define device_bar_CAVM_SPIX_CTRL_CMD_STAT_INTR_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_CTRL_CMD_STAT_INTR_STATUS(a) (a)
#define arguments_CAVM_SPIX_CTRL_CMD_STAT_INTR_STATUS(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_ctrl_cmd_stat_trd_comp_intr_status
 *
 * SPI Control Command Stat Thread Comp Interrupt Status Register
 * Each bit of this field correspond to the auto command engine thread. Each bit
 * informs about descriptor
 * status for selected thread. It is set only when INT bit of the descriptor is set.
 */
union cavm_spix_ctrl_cmd_stat_trd_comp_intr_status
{
    uint32_t u;
    struct cavm_spix_ctrl_cmd_stat_trd_comp_intr_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t trd7_comp             : 1;  /**< [  7:  7](R/W1C) Thread 7 operation complete flag. */
        uint32_t trd6_comp             : 1;  /**< [  6:  6](R/W1C) Thread 6 operation complete flag. */
        uint32_t trd5_comp             : 1;  /**< [  5:  5](R/W1C) Thread 5 operation complete flag. */
        uint32_t trd4_comp             : 1;  /**< [  4:  4](R/W1C) Thread 4 operation complete flag. */
        uint32_t trd3_comp             : 1;  /**< [  3:  3](R/W1C) Thread 3 operation complete flag. */
        uint32_t trd2_comp             : 1;  /**< [  2:  2](R/W1C) Thread 2 operation complete flag. */
        uint32_t trd1_comp             : 1;  /**< [  1:  1](R/W1C) Thread 1 operation complete flag. */
        uint32_t trd0_comp             : 1;  /**< [  0:  0](R/W1C) Thread 0 operation complete flag. */
#else /* Word 0 - Little Endian */
        uint32_t trd0_comp             : 1;  /**< [  0:  0](R/W1C) Thread 0 operation complete flag. */
        uint32_t trd1_comp             : 1;  /**< [  1:  1](R/W1C) Thread 1 operation complete flag. */
        uint32_t trd2_comp             : 1;  /**< [  2:  2](R/W1C) Thread 2 operation complete flag. */
        uint32_t trd3_comp             : 1;  /**< [  3:  3](R/W1C) Thread 3 operation complete flag. */
        uint32_t trd4_comp             : 1;  /**< [  4:  4](R/W1C) Thread 4 operation complete flag. */
        uint32_t trd5_comp             : 1;  /**< [  5:  5](R/W1C) Thread 5 operation complete flag. */
        uint32_t trd6_comp             : 1;  /**< [  6:  6](R/W1C) Thread 6 operation complete flag. */
        uint32_t trd7_comp             : 1;  /**< [  7:  7](R/W1C) Thread 7 operation complete flag. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_ctrl_cmd_stat_trd_comp_intr_status_s cn; */
};
typedef union cavm_spix_ctrl_cmd_stat_trd_comp_intr_status cavm_spix_ctrl_cmd_stat_trd_comp_intr_status_t;

static inline uint64_t CAVM_SPIX_CTRL_CMD_STAT_TRD_COMP_INTR_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_CTRL_CMD_STAT_TRD_COMP_INTR_STATUS(uint64_t a)
{
    if (a<=1)
        return 0x804000000120ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_CTRL_CMD_STAT_TRD_COMP_INTR_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_CTRL_CMD_STAT_TRD_COMP_INTR_STATUS(a) cavm_spix_ctrl_cmd_stat_trd_comp_intr_status_t
#define bustype_CAVM_SPIX_CTRL_CMD_STAT_TRD_COMP_INTR_STATUS(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_CTRL_CMD_STAT_TRD_COMP_INTR_STATUS(a) "SPIX_CTRL_CMD_STAT_TRD_COMP_INTR_STATUS"
#define device_bar_CAVM_SPIX_CTRL_CMD_STAT_TRD_COMP_INTR_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_CTRL_CMD_STAT_TRD_COMP_INTR_STATUS(a) (a)
#define arguments_CAVM_SPIX_CTRL_CMD_STAT_TRD_COMP_INTR_STATUS(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_ctrl_cmd_stat_trd_error_intr_en
 *
 * SPI Control Command Stat Thread Error Interrupt En Register
 * Interrupt enable register. If the selected bit of this register is set, the rising edge of
 * corresponding bit
 * in SPI()_CTRL_CMD_STAT_TRD_ERROR_INTR_STATUS will cause setting of the external interrupt line.
 */
union cavm_spix_ctrl_cmd_stat_trd_error_intr_en
{
    uint32_t u;
    struct cavm_spix_ctrl_cmd_stat_trd_error_intr_en_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t trd_error_intr_en     : 8;  /**< [  7:  0](R/W) Interrupt enable for detecting thread error. */
#else /* Word 0 - Little Endian */
        uint32_t trd_error_intr_en     : 8;  /**< [  7:  0](R/W) Interrupt enable for detecting thread error. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_ctrl_cmd_stat_trd_error_intr_en_s cn; */
};
typedef union cavm_spix_ctrl_cmd_stat_trd_error_intr_en cavm_spix_ctrl_cmd_stat_trd_error_intr_en_t;

static inline uint64_t CAVM_SPIX_CTRL_CMD_STAT_TRD_ERROR_INTR_EN(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_CTRL_CMD_STAT_TRD_ERROR_INTR_EN(uint64_t a)
{
    if (a<=1)
        return 0x804000000134ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_CTRL_CMD_STAT_TRD_ERROR_INTR_EN", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_CTRL_CMD_STAT_TRD_ERROR_INTR_EN(a) cavm_spix_ctrl_cmd_stat_trd_error_intr_en_t
#define bustype_CAVM_SPIX_CTRL_CMD_STAT_TRD_ERROR_INTR_EN(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_CTRL_CMD_STAT_TRD_ERROR_INTR_EN(a) "SPIX_CTRL_CMD_STAT_TRD_ERROR_INTR_EN"
#define device_bar_CAVM_SPIX_CTRL_CMD_STAT_TRD_ERROR_INTR_EN(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_CTRL_CMD_STAT_TRD_ERROR_INTR_EN(a) (a)
#define arguments_CAVM_SPIX_CTRL_CMD_STAT_TRD_ERROR_INTR_EN(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_ctrl_cmd_stat_trd_error_intr_status
 *
 * SPI Control Command Stat Thread Error Interrupt Status Register
 * Thread error indicates that the auto command engine thread detected an error condition. To get more
 * information on the error, software must read the status field of the descriptor or
 * appropriate status
 * register depending on the current work mode.
 */
union cavm_spix_ctrl_cmd_stat_trd_error_intr_status
{
    uint32_t u;
    struct cavm_spix_ctrl_cmd_stat_trd_error_intr_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t trd7_error_stat       : 1;  /**< [  7:  7](R/W1C) Thread 7 error. */
        uint32_t trd6_error_stat       : 1;  /**< [  6:  6](R/W1C) Thread 6 error. */
        uint32_t trd5_error_stat       : 1;  /**< [  5:  5](R/W1C) Thread 5 error. */
        uint32_t trd4_error_stat       : 1;  /**< [  4:  4](R/W1C) Thread 4 error. */
        uint32_t trd3_error_stat       : 1;  /**< [  3:  3](R/W1C) Thread 3 error. */
        uint32_t trd2_error_stat       : 1;  /**< [  2:  2](R/W1C) Thread 2 error. */
        uint32_t trd1_error_stat       : 1;  /**< [  1:  1](R/W1C) Thread 1 error. */
        uint32_t trd0_error_stat       : 1;  /**< [  0:  0](R/W1C) Thread 0 error. */
#else /* Word 0 - Little Endian */
        uint32_t trd0_error_stat       : 1;  /**< [  0:  0](R/W1C) Thread 0 error. */
        uint32_t trd1_error_stat       : 1;  /**< [  1:  1](R/W1C) Thread 1 error. */
        uint32_t trd2_error_stat       : 1;  /**< [  2:  2](R/W1C) Thread 2 error. */
        uint32_t trd3_error_stat       : 1;  /**< [  3:  3](R/W1C) Thread 3 error. */
        uint32_t trd4_error_stat       : 1;  /**< [  4:  4](R/W1C) Thread 4 error. */
        uint32_t trd5_error_stat       : 1;  /**< [  5:  5](R/W1C) Thread 5 error. */
        uint32_t trd6_error_stat       : 1;  /**< [  6:  6](R/W1C) Thread 6 error. */
        uint32_t trd7_error_stat       : 1;  /**< [  7:  7](R/W1C) Thread 7 error. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_ctrl_cmd_stat_trd_error_intr_status_s cn; */
};
typedef union cavm_spix_ctrl_cmd_stat_trd_error_intr_status cavm_spix_ctrl_cmd_stat_trd_error_intr_status_t;

static inline uint64_t CAVM_SPIX_CTRL_CMD_STAT_TRD_ERROR_INTR_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_CTRL_CMD_STAT_TRD_ERROR_INTR_STATUS(uint64_t a)
{
    if (a<=1)
        return 0x804000000130ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_CTRL_CMD_STAT_TRD_ERROR_INTR_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_CTRL_CMD_STAT_TRD_ERROR_INTR_STATUS(a) cavm_spix_ctrl_cmd_stat_trd_error_intr_status_t
#define bustype_CAVM_SPIX_CTRL_CMD_STAT_TRD_ERROR_INTR_STATUS(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_CTRL_CMD_STAT_TRD_ERROR_INTR_STATUS(a) "SPIX_CTRL_CMD_STAT_TRD_ERROR_INTR_STATUS"
#define device_bar_CAVM_SPIX_CTRL_CMD_STAT_TRD_ERROR_INTR_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_CTRL_CMD_STAT_TRD_ERROR_INTR_STATUS(a) (a)
#define arguments_CAVM_SPIX_CTRL_CMD_STAT_TRD_ERROR_INTR_STATUS(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_ctrl_cmd_stat_trd_status
 *
 * SPI Control Command Stat Thread Status Register
 * Auto command engine threads state.
 */
union cavm_spix_ctrl_cmd_stat_trd_status
{
    uint32_t u;
    struct cavm_spix_ctrl_cmd_stat_trd_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t trd_busy              : 8;  /**< [  7:  0](RO) Indicates auto command engine thread busy status. If set to 1, the corresponding thread is busy. */
#else /* Word 0 - Little Endian */
        uint32_t trd_busy              : 8;  /**< [  7:  0](RO) Indicates auto command engine thread busy status. If set to 1, the corresponding thread is busy. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_ctrl_cmd_stat_trd_status_s cn; */
};
typedef union cavm_spix_ctrl_cmd_stat_trd_status cavm_spix_ctrl_cmd_stat_trd_status_t;

static inline uint64_t CAVM_SPIX_CTRL_CMD_STAT_TRD_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_CTRL_CMD_STAT_TRD_STATUS(uint64_t a)
{
    if (a<=1)
        return 0x804000000104ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_CTRL_CMD_STAT_TRD_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_CTRL_CMD_STAT_TRD_STATUS(a) cavm_spix_ctrl_cmd_stat_trd_status_t
#define bustype_CAVM_SPIX_CTRL_CMD_STAT_TRD_STATUS(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_CTRL_CMD_STAT_TRD_STATUS(a) "SPIX_CTRL_CMD_STAT_TRD_STATUS"
#define device_bar_CAVM_SPIX_CTRL_CMD_STAT_TRD_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_CTRL_CMD_STAT_TRD_STATUS(a) (a)
#define arguments_CAVM_SPIX_CTRL_CMD_STAT_TRD_STATUS(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_ctrl_consts_ctrl_features_reg
 *
 * SPI Control Consts Control Features Register
 * Shows available hardware features of the controller.
 */
union cavm_spix_ctrl_consts_ctrl_features_reg
{
    uint32_t u;
    struct cavm_spix_ctrl_consts_ctrl_features_reg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_26_31        : 6;
        uint32_t n_banks               : 2;  /**< [ 25: 24](RO) Maximum number of banks supported by hardware. This is an encoded value.
                                                                 0x0 = One bank.
                                                                 0x1 = Two banks.
                                                                 0x2 = Four banks.
                                                                 0x3 = Eight banks. */
        uint32_t sfr_intf              : 2;  /**< [ 23: 22](RO) SFR interface type  1-APB, other values reserved. */
        uint32_t dma_data_width        : 1;  /**< [ 21: 21](RO) Slave and Master DMA data width:
                                                                 0 = 32-bit.
                                                                 1 = 64-bit. */
        uint32_t dma_addr_width        : 1;  /**< [ 20: 20](RO) Slave and Master DMA address width:
                                                                 0 = 32-bit.
                                                                 1 = 64-bit. */
        uint32_t dma_intf              : 2;  /**< [ 19: 18](RO) DMA interface type (0-AXI4 other values reserved). */
        uint32_t reserved_17           : 1;
        uint32_t boot_available        : 1;  /**< [ 16: 16](RO) Boot feature present. */
        uint32_t reserved_13_15        : 3;
        uint32_t asf_available         : 1;  /**< [ 12: 12](RO) ASF features present. */
        uint32_t reserved_4_11         : 8;
        uint32_t n_threads             : 4;  /**< [  3:  0](RO) Number of threads available in the controller. The following decoding is used:
                                                                 0x0 = One thread.
                                                                 0x1 = Two threads.
                                                                 0x2 = Four threads.
                                                                 0x3 = Eight threads.
                                                                 0x4-0x15 = Reserved. */
#else /* Word 0 - Little Endian */
        uint32_t n_threads             : 4;  /**< [  3:  0](RO) Number of threads available in the controller. The following decoding is used:
                                                                 0x0 = One thread.
                                                                 0x1 = Two threads.
                                                                 0x2 = Four threads.
                                                                 0x3 = Eight threads.
                                                                 0x4-0x15 = Reserved. */
        uint32_t reserved_4_11         : 8;
        uint32_t asf_available         : 1;  /**< [ 12: 12](RO) ASF features present. */
        uint32_t reserved_13_15        : 3;
        uint32_t boot_available        : 1;  /**< [ 16: 16](RO) Boot feature present. */
        uint32_t reserved_17           : 1;
        uint32_t dma_intf              : 2;  /**< [ 19: 18](RO) DMA interface type (0-AXI4 other values reserved). */
        uint32_t dma_addr_width        : 1;  /**< [ 20: 20](RO) Slave and Master DMA address width:
                                                                 0 = 32-bit.
                                                                 1 = 64-bit. */
        uint32_t dma_data_width        : 1;  /**< [ 21: 21](RO) Slave and Master DMA data width:
                                                                 0 = 32-bit.
                                                                 1 = 64-bit. */
        uint32_t sfr_intf              : 2;  /**< [ 23: 22](RO) SFR interface type  1-APB, other values reserved. */
        uint32_t n_banks               : 2;  /**< [ 25: 24](RO) Maximum number of banks supported by hardware. This is an encoded value.
                                                                 0x0 = One bank.
                                                                 0x1 = Two banks.
                                                                 0x2 = Four banks.
                                                                 0x3 = Eight banks. */
        uint32_t reserved_26_31        : 6;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_ctrl_consts_ctrl_features_reg_s cn; */
};
typedef union cavm_spix_ctrl_consts_ctrl_features_reg cavm_spix_ctrl_consts_ctrl_features_reg_t;

static inline uint64_t CAVM_SPIX_CTRL_CONSTS_CTRL_FEATURES_REG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_CTRL_CONSTS_CTRL_FEATURES_REG(uint64_t a)
{
    if (a<=1)
        return 0x804000000f04ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_CTRL_CONSTS_CTRL_FEATURES_REG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_CTRL_CONSTS_CTRL_FEATURES_REG(a) cavm_spix_ctrl_consts_ctrl_features_reg_t
#define bustype_CAVM_SPIX_CTRL_CONSTS_CTRL_FEATURES_REG(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_CTRL_CONSTS_CTRL_FEATURES_REG(a) "SPIX_CTRL_CONSTS_CTRL_FEATURES_REG"
#define device_bar_CAVM_SPIX_CTRL_CONSTS_CTRL_FEATURES_REG(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_CTRL_CONSTS_CTRL_FEATURES_REG(a) (a)
#define arguments_CAVM_SPIX_CTRL_CONSTS_CTRL_FEATURES_REG(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_ctrl_consts_spi_ctrl_version
 *
 * SPI Control Consts xSPI Control Version Register
 * Register contains release identification number.
 */
union cavm_spix_ctrl_consts_spi_ctrl_version
{
    uint32_t u;
    struct cavm_spix_ctrl_consts_spi_ctrl_version_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t spi_ctrl_magic_number : 16; /**< [ 31: 16](RO) Controller's magic number. It is a unique number characteristic to the xSPI controller. */
        uint32_t spi_ctrl_fix          : 8;  /**< [ 15:  8](RO) Fixed number (minor revision number). */
        uint32_t spi_ctrl_rev          : 8;  /**< [  7:  0](RO) Controller revision number. */
#else /* Word 0 - Little Endian */
        uint32_t spi_ctrl_rev          : 8;  /**< [  7:  0](RO) Controller revision number. */
        uint32_t spi_ctrl_fix          : 8;  /**< [ 15:  8](RO) Fixed number (minor revision number). */
        uint32_t spi_ctrl_magic_number : 16; /**< [ 31: 16](RO) Controller's magic number. It is a unique number characteristic to the xSPI controller. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_ctrl_consts_spi_ctrl_version_s cn; */
};
typedef union cavm_spix_ctrl_consts_spi_ctrl_version cavm_spix_ctrl_consts_spi_ctrl_version_t;

static inline uint64_t CAVM_SPIX_CTRL_CONSTS_SPI_CTRL_VERSION(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_CTRL_CONSTS_SPI_CTRL_VERSION(uint64_t a)
{
    if (a<=1)
        return 0x804000000f00ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_CTRL_CONSTS_SPI_CTRL_VERSION", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_CTRL_CONSTS_SPI_CTRL_VERSION(a) cavm_spix_ctrl_consts_spi_ctrl_version_t
#define bustype_CAVM_SPIX_CTRL_CONSTS_SPI_CTRL_VERSION(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_CTRL_CONSTS_SPI_CTRL_VERSION(a) "SPIX_CTRL_CONSTS_SPI_CTRL_VERSION"
#define device_bar_CAVM_SPIX_CTRL_CONSTS_SPI_CTRL_VERSION(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_CTRL_CONSTS_SPI_CTRL_VERSION(a) (a)
#define arguments_CAVM_SPIX_CTRL_CONSTS_SPI_CTRL_VERSION(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_dev_seq_regs_ers_seq_cfg_0
 *
 * SPI Dev Seq Regs Ers Seq Cfg 0 Register
 * Register to configure ERASE_SECTOR sequence for PROFILE 1 and SPI NAND in ACMD work mode.
 */
union cavm_spix_dev_seq_regs_ers_seq_cfg_0
{
    uint32_t u;
    struct cavm_spix_dev_seq_regs_ers_seq_cfg_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_29_31        : 3;
        uint32_t erss_seq_p1_addr_edge : 1;  /**< [ 28: 28](R/W) Selecting between SDR/DDR mode for address phase. */
        uint32_t reserved_26_27        : 2;
        uint32_t erss_seq_p1_addr_ios  : 2;  /**< [ 25: 24](R/W) Number of lines used to send address phase. */
        uint32_t erss_seq_p1_cmd_ext_val : 8;/**< [ 23: 16](R/W) Command extension value if enabled. */
        uint32_t erss_seq_p1_cmd_ext_en : 1; /**< [ 15: 15](R/W) Command extension enable. */
        uint32_t erss_seq_p1_addr_cnt  : 3;  /**< [ 14: 12](R/W) Number of address bytes. */
        uint32_t erss_seq_p1_cmd_edge  : 1;  /**< [ 11: 11](R/W) Selecting between SDR/DDR mode for command phase. */
        uint32_t reserved_10           : 1;
        uint32_t erss_seq_p1_cmd_ios   : 2;  /**< [  9:  8](R/W) Number of lines used to send command phase. */
        uint32_t erss_seq_p1_cmd_val   : 8;  /**< [  7:  0](R/W) Command mnemonic value. */
#else /* Word 0 - Little Endian */
        uint32_t erss_seq_p1_cmd_val   : 8;  /**< [  7:  0](R/W) Command mnemonic value. */
        uint32_t erss_seq_p1_cmd_ios   : 2;  /**< [  9:  8](R/W) Number of lines used to send command phase. */
        uint32_t reserved_10           : 1;
        uint32_t erss_seq_p1_cmd_edge  : 1;  /**< [ 11: 11](R/W) Selecting between SDR/DDR mode for command phase. */
        uint32_t erss_seq_p1_addr_cnt  : 3;  /**< [ 14: 12](R/W) Number of address bytes. */
        uint32_t erss_seq_p1_cmd_ext_en : 1; /**< [ 15: 15](R/W) Command extension enable. */
        uint32_t erss_seq_p1_cmd_ext_val : 8;/**< [ 23: 16](R/W) Command extension value if enabled. */
        uint32_t erss_seq_p1_addr_ios  : 2;  /**< [ 25: 24](R/W) Number of lines used to send address phase. */
        uint32_t reserved_26_27        : 2;
        uint32_t erss_seq_p1_addr_edge : 1;  /**< [ 28: 28](R/W) Selecting between SDR/DDR mode for address phase. */
        uint32_t reserved_29_31        : 3;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_dev_seq_regs_ers_seq_cfg_0_s cn; */
};
typedef union cavm_spix_dev_seq_regs_ers_seq_cfg_0 cavm_spix_dev_seq_regs_ers_seq_cfg_0_t;

static inline uint64_t CAVM_SPIX_DEV_SEQ_REGS_ERS_SEQ_CFG_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_DEV_SEQ_REGS_ERS_SEQ_CFG_0(uint64_t a)
{
    if (a<=1)
        return 0x804000000410ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_DEV_SEQ_REGS_ERS_SEQ_CFG_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_DEV_SEQ_REGS_ERS_SEQ_CFG_0(a) cavm_spix_dev_seq_regs_ers_seq_cfg_0_t
#define bustype_CAVM_SPIX_DEV_SEQ_REGS_ERS_SEQ_CFG_0(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_DEV_SEQ_REGS_ERS_SEQ_CFG_0(a) "SPIX_DEV_SEQ_REGS_ERS_SEQ_CFG_0"
#define device_bar_CAVM_SPIX_DEV_SEQ_REGS_ERS_SEQ_CFG_0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_DEV_SEQ_REGS_ERS_SEQ_CFG_0(a) (a)
#define arguments_CAVM_SPIX_DEV_SEQ_REGS_ERS_SEQ_CFG_0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_dev_seq_regs_ers_seq_cfg_1
 *
 * SPI Dev Seq Regs Ers Seq Cfg 1 Register
 * Register to configure ERASE_SECTOR sequence for PROFILE 1 and SPI NAND in ACMD work mode.
 */
union cavm_spix_dev_seq_regs_ers_seq_cfg_1
{
    uint32_t u;
    struct cavm_spix_dev_seq_regs_ers_seq_cfg_1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_5_31         : 27;
        uint32_t erss_seq_p1_sect_size : 5;  /**< [  4:  0](R/W) Sector size. Value encoded as 2^erss_seq_p1_sect_size:
                                                                 0x00 - 1B.
                                                                 0x01 - 2B.
                                                                 0x02 - 4B.
                                                                 _ ...
                                                                 0x0F - 32kB.
                                                                 0x10 - 64kB.
                                                                 _ ...
                                                                 0x1F - (2^31)B. */
#else /* Word 0 - Little Endian */
        uint32_t erss_seq_p1_sect_size : 5;  /**< [  4:  0](R/W) Sector size. Value encoded as 2^erss_seq_p1_sect_size:
                                                                 0x00 - 1B.
                                                                 0x01 - 2B.
                                                                 0x02 - 4B.
                                                                 _ ...
                                                                 0x0F - 32kB.
                                                                 0x10 - 64kB.
                                                                 _ ...
                                                                 0x1F - (2^31)B. */
        uint32_t reserved_5_31         : 27;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_dev_seq_regs_ers_seq_cfg_1_s cn; */
};
typedef union cavm_spix_dev_seq_regs_ers_seq_cfg_1 cavm_spix_dev_seq_regs_ers_seq_cfg_1_t;

static inline uint64_t CAVM_SPIX_DEV_SEQ_REGS_ERS_SEQ_CFG_1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_DEV_SEQ_REGS_ERS_SEQ_CFG_1(uint64_t a)
{
    if (a<=1)
        return 0x804000000414ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_DEV_SEQ_REGS_ERS_SEQ_CFG_1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_DEV_SEQ_REGS_ERS_SEQ_CFG_1(a) cavm_spix_dev_seq_regs_ers_seq_cfg_1_t
#define bustype_CAVM_SPIX_DEV_SEQ_REGS_ERS_SEQ_CFG_1(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_DEV_SEQ_REGS_ERS_SEQ_CFG_1(a) "SPIX_DEV_SEQ_REGS_ERS_SEQ_CFG_1"
#define device_bar_CAVM_SPIX_DEV_SEQ_REGS_ERS_SEQ_CFG_1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_DEV_SEQ_REGS_ERS_SEQ_CFG_1(a) (a)
#define arguments_CAVM_SPIX_DEV_SEQ_REGS_ERS_SEQ_CFG_1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_dev_seq_regs_ers_seq_cfg_2
 *
 * SPI Dev Seq Regs Ers Seq Cfg 2 Register
 * Register to configure ERASE_ALL sequence for PROFILE 1 in ACMD work mode.
 */
union cavm_spix_dev_seq_regs_ers_seq_cfg_2
{
    uint32_t u;
    struct cavm_spix_dev_seq_regs_ers_seq_cfg_2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_24_31        : 8;
        uint32_t ersa_seq_p1_cmd_ext_val : 8;/**< [ 23: 16](R/W) Command extension value. */
        uint32_t ersa_seq_p1_cmd_ext_en : 1; /**< [ 15: 15](R/W) Command extension enable. */
        uint32_t reserved_12_14        : 3;
        uint32_t ersa_seq_p1_cmd_edge  : 1;  /**< [ 11: 11](R/W) Selecting between SDR/DDR mode for command phase. */
        uint32_t reserved_10           : 1;
        uint32_t ersa_seq_p1_cmd_ios   : 2;  /**< [  9:  8](R/W) Number of lines used to send command phase. */
        uint32_t ersa_seq_p1_cmd_val   : 8;  /**< [  7:  0](R/W) Command mnemonic value. */
#else /* Word 0 - Little Endian */
        uint32_t ersa_seq_p1_cmd_val   : 8;  /**< [  7:  0](R/W) Command mnemonic value. */
        uint32_t ersa_seq_p1_cmd_ios   : 2;  /**< [  9:  8](R/W) Number of lines used to send command phase. */
        uint32_t reserved_10           : 1;
        uint32_t ersa_seq_p1_cmd_edge  : 1;  /**< [ 11: 11](R/W) Selecting between SDR/DDR mode for command phase. */
        uint32_t reserved_12_14        : 3;
        uint32_t ersa_seq_p1_cmd_ext_en : 1; /**< [ 15: 15](R/W) Command extension enable. */
        uint32_t ersa_seq_p1_cmd_ext_val : 8;/**< [ 23: 16](R/W) Command extension value. */
        uint32_t reserved_24_31        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_dev_seq_regs_ers_seq_cfg_2_s cn; */
};
typedef union cavm_spix_dev_seq_regs_ers_seq_cfg_2 cavm_spix_dev_seq_regs_ers_seq_cfg_2_t;

static inline uint64_t CAVM_SPIX_DEV_SEQ_REGS_ERS_SEQ_CFG_2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_DEV_SEQ_REGS_ERS_SEQ_CFG_2(uint64_t a)
{
    if (a<=1)
        return 0x804000000418ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_DEV_SEQ_REGS_ERS_SEQ_CFG_2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_DEV_SEQ_REGS_ERS_SEQ_CFG_2(a) cavm_spix_dev_seq_regs_ers_seq_cfg_2_t
#define bustype_CAVM_SPIX_DEV_SEQ_REGS_ERS_SEQ_CFG_2(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_DEV_SEQ_REGS_ERS_SEQ_CFG_2(a) "SPIX_DEV_SEQ_REGS_ERS_SEQ_CFG_2"
#define device_bar_CAVM_SPIX_DEV_SEQ_REGS_ERS_SEQ_CFG_2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_DEV_SEQ_REGS_ERS_SEQ_CFG_2(a) (a)
#define arguments_CAVM_SPIX_DEV_SEQ_REGS_ERS_SEQ_CFG_2(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_dev_seq_regs_prog_seq_cfg_0
 *
 * SPI Dev Seq Regs Prog Seq Cfg 0 Register
 * Register to configure PROGRAM sequence for PROFILE 1 and SPI NAND in ACMD and DIRECT work modes.
 */
union cavm_spix_dev_seq_regs_prog_seq_cfg_0
{
    uint32_t u;
    struct cavm_spix_dev_seq_regs_prog_seq_cfg_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_30_31        : 2;
        uint32_t prog_seq_p1_dummy_cnt : 6;  /**< [ 29: 24](R/W) Number of dummy cycles in PROFILE 1. If 0 - dummy cycles disabled. */
        uint32_t prog_seq_p1_data_edge : 1;  /**< [ 23: 23](R/W) Selecting between SDR/DDR mode for data phase. */
        uint32_t reserved_22           : 1;
        uint32_t prog_seq_p1_data_ios  : 2;  /**< [ 21: 20](R/W) Number of lines used to send data phase. */
        uint32_t prog_seq_p1_addr_edge : 1;  /**< [ 19: 19](R/W) Selecting between SDR/DDR mode for address phase. */
        uint32_t reserved_18           : 1;
        uint32_t prog_seq_p1_addr_ios  : 2;  /**< [ 17: 16](R/W) Number of lines used to send address phase. */
        uint32_t reserved_15           : 1;
        uint32_t prog_seq_p1_addr_cnt  : 3;  /**< [ 14: 12](R/W) Number of address bytes. */
        uint32_t prog_seq_p1_cmd_edge  : 1;  /**< [ 11: 11](R/W) Selecting between SDR/DDR mode for command phase. */
        uint32_t reserved_10           : 1;
        uint32_t prog_seq_p1_cmd_ios   : 2;  /**< [  9:  8](R/W) Number of lines used to send command phase. */
        uint32_t prog_seq_p1_cmd_val   : 8;  /**< [  7:  0](R/W) Command mnemonic value. */
#else /* Word 0 - Little Endian */
        uint32_t prog_seq_p1_cmd_val   : 8;  /**< [  7:  0](R/W) Command mnemonic value. */
        uint32_t prog_seq_p1_cmd_ios   : 2;  /**< [  9:  8](R/W) Number of lines used to send command phase. */
        uint32_t reserved_10           : 1;
        uint32_t prog_seq_p1_cmd_edge  : 1;  /**< [ 11: 11](R/W) Selecting between SDR/DDR mode for command phase. */
        uint32_t prog_seq_p1_addr_cnt  : 3;  /**< [ 14: 12](R/W) Number of address bytes. */
        uint32_t reserved_15           : 1;
        uint32_t prog_seq_p1_addr_ios  : 2;  /**< [ 17: 16](R/W) Number of lines used to send address phase. */
        uint32_t reserved_18           : 1;
        uint32_t prog_seq_p1_addr_edge : 1;  /**< [ 19: 19](R/W) Selecting between SDR/DDR mode for address phase. */
        uint32_t prog_seq_p1_data_ios  : 2;  /**< [ 21: 20](R/W) Number of lines used to send data phase. */
        uint32_t reserved_22           : 1;
        uint32_t prog_seq_p1_data_edge : 1;  /**< [ 23: 23](R/W) Selecting between SDR/DDR mode for data phase. */
        uint32_t prog_seq_p1_dummy_cnt : 6;  /**< [ 29: 24](R/W) Number of dummy cycles in PROFILE 1. If 0 - dummy cycles disabled. */
        uint32_t reserved_30_31        : 2;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_dev_seq_regs_prog_seq_cfg_0_s cn; */
};
typedef union cavm_spix_dev_seq_regs_prog_seq_cfg_0 cavm_spix_dev_seq_regs_prog_seq_cfg_0_t;

static inline uint64_t CAVM_SPIX_DEV_SEQ_REGS_PROG_SEQ_CFG_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_DEV_SEQ_REGS_PROG_SEQ_CFG_0(uint64_t a)
{
    if (a<=1)
        return 0x804000000420ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_DEV_SEQ_REGS_PROG_SEQ_CFG_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_DEV_SEQ_REGS_PROG_SEQ_CFG_0(a) cavm_spix_dev_seq_regs_prog_seq_cfg_0_t
#define bustype_CAVM_SPIX_DEV_SEQ_REGS_PROG_SEQ_CFG_0(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_DEV_SEQ_REGS_PROG_SEQ_CFG_0(a) "SPIX_DEV_SEQ_REGS_PROG_SEQ_CFG_0"
#define device_bar_CAVM_SPIX_DEV_SEQ_REGS_PROG_SEQ_CFG_0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_DEV_SEQ_REGS_PROG_SEQ_CFG_0(a) (a)
#define arguments_CAVM_SPIX_DEV_SEQ_REGS_PROG_SEQ_CFG_0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_dev_seq_regs_prog_seq_cfg_1
 *
 * SPI Dev Seq Regs Prog Seq Cfg 1 Register
 * Register to configure PROGRAM sequence for PROFILE 1 and SPI NAND in ACMD and DIRECT work modes.
 */
union cavm_spix_dev_seq_regs_prog_seq_cfg_1
{
    uint32_t u;
    struct cavm_spix_dev_seq_regs_prog_seq_cfg_1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t prog_seq_p1_cmd_ext_val : 8;/**< [ 15:  8](R/W) Command extension value. */
        uint32_t reserved_1_7          : 7;
        uint32_t prog_seq_p1_cmd_ext_en : 1; /**< [  0:  0](R/W) Command extension enable. */
#else /* Word 0 - Little Endian */
        uint32_t prog_seq_p1_cmd_ext_en : 1; /**< [  0:  0](R/W) Command extension enable. */
        uint32_t reserved_1_7          : 7;
        uint32_t prog_seq_p1_cmd_ext_val : 8;/**< [ 15:  8](R/W) Command extension value. */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_dev_seq_regs_prog_seq_cfg_1_s cn; */
};
typedef union cavm_spix_dev_seq_regs_prog_seq_cfg_1 cavm_spix_dev_seq_regs_prog_seq_cfg_1_t;

static inline uint64_t CAVM_SPIX_DEV_SEQ_REGS_PROG_SEQ_CFG_1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_DEV_SEQ_REGS_PROG_SEQ_CFG_1(uint64_t a)
{
    if (a<=1)
        return 0x804000000424ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_DEV_SEQ_REGS_PROG_SEQ_CFG_1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_DEV_SEQ_REGS_PROG_SEQ_CFG_1(a) cavm_spix_dev_seq_regs_prog_seq_cfg_1_t
#define bustype_CAVM_SPIX_DEV_SEQ_REGS_PROG_SEQ_CFG_1(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_DEV_SEQ_REGS_PROG_SEQ_CFG_1(a) "SPIX_DEV_SEQ_REGS_PROG_SEQ_CFG_1"
#define device_bar_CAVM_SPIX_DEV_SEQ_REGS_PROG_SEQ_CFG_1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_DEV_SEQ_REGS_PROG_SEQ_CFG_1(a) (a)
#define arguments_CAVM_SPIX_DEV_SEQ_REGS_PROG_SEQ_CFG_1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_dev_seq_regs_prog_seq_cfg_2
 *
 * SPI Dev Seq Regs Prog Seq Cfg 2 Register
 * Register to configure PROGRAM sequence for PROFILE 2 in ACMD and DIRECT work modes.
 */
union cavm_spix_dev_seq_regs_prog_seq_cfg_2
{
    uint32_t u;
    struct cavm_spix_dev_seq_regs_prog_seq_cfg_2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_14_31        : 18;
        uint32_t prog_seq_p2_latency_cnt : 6;/**< [ 13:  8](R/W) Number of latency cycles for PROFILE 2 - HR only. Setting this bit to 0 will disable latency
                                                                 cycles. This value should be set to 'N-1', where 'N' is the number of latency clock cycles
                                                                 expected by the memory device. */
        uint32_t reserved_3_7          : 5;
        uint32_t prog_seq_p2_mask_cmd_mod : 1;/**< [  2:  2](R/W) Determines PROFILE 2 Command extension variant. Value of this bits influences the [44:40] bits of
                                                                 Command/Address. If this bit is set to 1 those bits will be set to 1. In DIRECT work mode if this
                                                                 bit is set to 0 those bits will be set to (sAWADDR[45:41] & dac_addr_mask[12:8]). In ACMD work
                                                                 mode if this bit is set to 0 those bits will be set to 0; */
        uint32_t prog_seq_p2_burst_type : 1; /**< [  1:  1](R/W) Burst type - corresponds to 45th Command/Address (CA) bit assignment.
                                                                 Allowed values are:
                                                                 0 = Wrapped burst.
                                                                 1 = Linear burst. */
        uint32_t prog_seq_p2_target    : 1;  /**< [  0:  0](R/W) Target space - corresponds to 46th Command/Address (CA) bit assignment.
                                                                 Allowed values are:
                                                                 0 = Memory space.
                                                                 1 = Register space. */
#else /* Word 0 - Little Endian */
        uint32_t prog_seq_p2_target    : 1;  /**< [  0:  0](R/W) Target space - corresponds to 46th Command/Address (CA) bit assignment.
                                                                 Allowed values are:
                                                                 0 = Memory space.
                                                                 1 = Register space. */
        uint32_t prog_seq_p2_burst_type : 1; /**< [  1:  1](R/W) Burst type - corresponds to 45th Command/Address (CA) bit assignment.
                                                                 Allowed values are:
                                                                 0 = Wrapped burst.
                                                                 1 = Linear burst. */
        uint32_t prog_seq_p2_mask_cmd_mod : 1;/**< [  2:  2](R/W) Determines PROFILE 2 Command extension variant. Value of this bits influences the [44:40] bits of
                                                                 Command/Address. If this bit is set to 1 those bits will be set to 1. In DIRECT work mode if this
                                                                 bit is set to 0 those bits will be set to (sAWADDR[45:41] & dac_addr_mask[12:8]). In ACMD work
                                                                 mode if this bit is set to 0 those bits will be set to 0; */
        uint32_t reserved_3_7          : 5;
        uint32_t prog_seq_p2_latency_cnt : 6;/**< [ 13:  8](R/W) Number of latency cycles for PROFILE 2 - HR only. Setting this bit to 0 will disable latency
                                                                 cycles. This value should be set to 'N-1', where 'N' is the number of latency clock cycles
                                                                 expected by the memory device. */
        uint32_t reserved_14_31        : 18;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_dev_seq_regs_prog_seq_cfg_2_s cn; */
};
typedef union cavm_spix_dev_seq_regs_prog_seq_cfg_2 cavm_spix_dev_seq_regs_prog_seq_cfg_2_t;

static inline uint64_t CAVM_SPIX_DEV_SEQ_REGS_PROG_SEQ_CFG_2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_DEV_SEQ_REGS_PROG_SEQ_CFG_2(uint64_t a)
{
    if (a<=1)
        return 0x804000000428ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_DEV_SEQ_REGS_PROG_SEQ_CFG_2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_DEV_SEQ_REGS_PROG_SEQ_CFG_2(a) cavm_spix_dev_seq_regs_prog_seq_cfg_2_t
#define bustype_CAVM_SPIX_DEV_SEQ_REGS_PROG_SEQ_CFG_2(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_DEV_SEQ_REGS_PROG_SEQ_CFG_2(a) "SPIX_DEV_SEQ_REGS_PROG_SEQ_CFG_2"
#define device_bar_CAVM_SPIX_DEV_SEQ_REGS_PROG_SEQ_CFG_2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_DEV_SEQ_REGS_PROG_SEQ_CFG_2(a) (a)
#define arguments_CAVM_SPIX_DEV_SEQ_REGS_PROG_SEQ_CFG_2(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_dev_seq_regs_read_seq_cfg_0
 *
 * SPI Dev Seq Regs Read Seq Cfg 0 Register
 * Register to configure READ sequence for PROFILE 1 and SPI NAND in ACMD and DIRECT work modes.
 */
union cavm_spix_dev_seq_regs_read_seq_cfg_0
{
    uint32_t u;
    struct cavm_spix_dev_seq_regs_read_seq_cfg_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_30_31        : 2;
        uint32_t read_seq_p1_dummy_cnt : 6;  /**< [ 29: 24](R/W) Number of dummy cycles. If 0 - dummy cycles disabled. This field is used when sending mode-bits is
                                                                 disabled. Otherwise the [READ_SEQ_PL_MB_DUMMY_CNT] is be used. */
        uint32_t read_seq_p1_data_edge : 1;  /**< [ 23: 23](R/W) Selecting between SDR/DDR mode for data phase. */
        uint32_t reserved_22           : 1;
        uint32_t read_seq_p1_data_ios  : 2;  /**< [ 21: 20](R/W) Number of lines used to send data phase. */
        uint32_t read_seq_p1_addr_edge : 1;  /**< [ 19: 19](R/W) Selecting between SDR/DDR mode for address phase. */
        uint32_t reserved_18           : 1;
        uint32_t read_seq_p1_addr_ios  : 2;  /**< [ 17: 16](R/W) Number of lines used to send address phase. */
        uint32_t reserved_15           : 1;
        uint32_t read_seq_p1_addr_cnt  : 3;  /**< [ 14: 12](R/W) Number of address bytes. */
        uint32_t read_seq_p1_cmd_edge  : 1;  /**< [ 11: 11](R/W) Selecting between SDR/DDR mode for command phase. */
        uint32_t reserved_10           : 1;
        uint32_t read_seq_p1_cmd_ios   : 2;  /**< [  9:  8](R/W) Number of lines used to send command phase. */
        uint32_t read_seq_p1_cmd_val   : 8;  /**< [  7:  0](R/W) Command mnemonic value. */
#else /* Word 0 - Little Endian */
        uint32_t read_seq_p1_cmd_val   : 8;  /**< [  7:  0](R/W) Command mnemonic value. */
        uint32_t read_seq_p1_cmd_ios   : 2;  /**< [  9:  8](R/W) Number of lines used to send command phase. */
        uint32_t reserved_10           : 1;
        uint32_t read_seq_p1_cmd_edge  : 1;  /**< [ 11: 11](R/W) Selecting between SDR/DDR mode for command phase. */
        uint32_t read_seq_p1_addr_cnt  : 3;  /**< [ 14: 12](R/W) Number of address bytes. */
        uint32_t reserved_15           : 1;
        uint32_t read_seq_p1_addr_ios  : 2;  /**< [ 17: 16](R/W) Number of lines used to send address phase. */
        uint32_t reserved_18           : 1;
        uint32_t read_seq_p1_addr_edge : 1;  /**< [ 19: 19](R/W) Selecting between SDR/DDR mode for address phase. */
        uint32_t read_seq_p1_data_ios  : 2;  /**< [ 21: 20](R/W) Number of lines used to send data phase. */
        uint32_t reserved_22           : 1;
        uint32_t read_seq_p1_data_edge : 1;  /**< [ 23: 23](R/W) Selecting between SDR/DDR mode for data phase. */
        uint32_t read_seq_p1_dummy_cnt : 6;  /**< [ 29: 24](R/W) Number of dummy cycles. If 0 - dummy cycles disabled. This field is used when sending mode-bits is
                                                                 disabled. Otherwise the [READ_SEQ_PL_MB_DUMMY_CNT] is be used. */
        uint32_t reserved_30_31        : 2;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_dev_seq_regs_read_seq_cfg_0_s cn; */
};
typedef union cavm_spix_dev_seq_regs_read_seq_cfg_0 cavm_spix_dev_seq_regs_read_seq_cfg_0_t;

static inline uint64_t CAVM_SPIX_DEV_SEQ_REGS_READ_SEQ_CFG_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_DEV_SEQ_REGS_READ_SEQ_CFG_0(uint64_t a)
{
    if (a<=1)
        return 0x804000000430ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_DEV_SEQ_REGS_READ_SEQ_CFG_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_DEV_SEQ_REGS_READ_SEQ_CFG_0(a) cavm_spix_dev_seq_regs_read_seq_cfg_0_t
#define bustype_CAVM_SPIX_DEV_SEQ_REGS_READ_SEQ_CFG_0(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_DEV_SEQ_REGS_READ_SEQ_CFG_0(a) "SPIX_DEV_SEQ_REGS_READ_SEQ_CFG_0"
#define device_bar_CAVM_SPIX_DEV_SEQ_REGS_READ_SEQ_CFG_0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_DEV_SEQ_REGS_READ_SEQ_CFG_0(a) (a)
#define arguments_CAVM_SPIX_DEV_SEQ_REGS_READ_SEQ_CFG_0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_dev_seq_regs_read_seq_cfg_1
 *
 * SPI Dev Seq Regs Read Seq Cfg 1 Register
 * Register to configure READ sequence for PROFILE 1 and SPI NAND in ACMD and DIRECT work modes.
 */
union cavm_spix_dev_seq_regs_read_seq_cfg_1
{
    uint32_t u;
    struct cavm_spix_dev_seq_regs_read_seq_cfg_1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t read_seq_p1_mb_en     : 1;  /**< [ 31: 31](R/W) Set to 1 to ensure the mode bits as defined in the [XIP_DIS_MB_VAL] are  sent following the
                                                                 address bytes. */
        uint32_t reserved_30           : 1;
        uint32_t read_seq_p1_mb_dummy_cnt : 6;/**< [ 29: 24](R/W) Number of dummy cycles. If 0 - dummy cycles are disabled. This field is used when sending mode-
                                                                 bits is enabled. */
        uint32_t reserved_16_23        : 8;
        uint32_t read_seq_p1_cmd_ext_val : 8;/**< [ 15:  8](R/W) Command extension value. */
        uint32_t reserved_5_7          : 3;
        uint32_t read_seq_p1_cache_random_read_en : 1;/**< [  4:  4](R/W) This bit changes behavior of the read sequence to utilize the Read Page Cache Random/Read Page
                                                                 Cache Random Last commands. This field is not used in DIRECT mode. */
        uint32_t reserved_1_3          : 3;
        uint32_t read_seq_p1_cmd_ext_en : 1; /**< [  0:  0](R/W) Command extension enable. */
#else /* Word 0 - Little Endian */
        uint32_t read_seq_p1_cmd_ext_en : 1; /**< [  0:  0](R/W) Command extension enable. */
        uint32_t reserved_1_3          : 3;
        uint32_t read_seq_p1_cache_random_read_en : 1;/**< [  4:  4](R/W) This bit changes behavior of the read sequence to utilize the Read Page Cache Random/Read Page
                                                                 Cache Random Last commands. This field is not used in DIRECT mode. */
        uint32_t reserved_5_7          : 3;
        uint32_t read_seq_p1_cmd_ext_val : 8;/**< [ 15:  8](R/W) Command extension value. */
        uint32_t reserved_16_23        : 8;
        uint32_t read_seq_p1_mb_dummy_cnt : 6;/**< [ 29: 24](R/W) Number of dummy cycles. If 0 - dummy cycles are disabled. This field is used when sending mode-
                                                                 bits is enabled. */
        uint32_t reserved_30           : 1;
        uint32_t read_seq_p1_mb_en     : 1;  /**< [ 31: 31](R/W) Set to 1 to ensure the mode bits as defined in the [XIP_DIS_MB_VAL] are  sent following the
                                                                 address bytes. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_dev_seq_regs_read_seq_cfg_1_s cn; */
};
typedef union cavm_spix_dev_seq_regs_read_seq_cfg_1 cavm_spix_dev_seq_regs_read_seq_cfg_1_t;

static inline uint64_t CAVM_SPIX_DEV_SEQ_REGS_READ_SEQ_CFG_1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_DEV_SEQ_REGS_READ_SEQ_CFG_1(uint64_t a)
{
    if (a<=1)
        return 0x804000000434ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_DEV_SEQ_REGS_READ_SEQ_CFG_1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_DEV_SEQ_REGS_READ_SEQ_CFG_1(a) cavm_spix_dev_seq_regs_read_seq_cfg_1_t
#define bustype_CAVM_SPIX_DEV_SEQ_REGS_READ_SEQ_CFG_1(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_DEV_SEQ_REGS_READ_SEQ_CFG_1(a) "SPIX_DEV_SEQ_REGS_READ_SEQ_CFG_1"
#define device_bar_CAVM_SPIX_DEV_SEQ_REGS_READ_SEQ_CFG_1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_DEV_SEQ_REGS_READ_SEQ_CFG_1(a) (a)
#define arguments_CAVM_SPIX_DEV_SEQ_REGS_READ_SEQ_CFG_1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_dev_seq_regs_read_seq_cfg_2
 *
 * SPI Dev Seq Regs Read Seq Cfg 2 Register
 * Register to configure READ sequence for PROFILE 2 in ACMD and DIRECT work modes.
 */
union cavm_spix_dev_seq_regs_read_seq_cfg_2
{
    uint32_t u;
    struct cavm_spix_dev_seq_regs_read_seq_cfg_2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_14_31        : 18;
        uint32_t read_seq_p2_latency_cnt : 6;/**< [ 13:  8](R/W) Number of latency cycles. Setting this bit to 0 disables latency clock cycles. This value should
                                                                 be set to 'N-1', where 'N' is the number of latency clock cycles expected by the memory device. */
        uint32_t reserved_4_7          : 4;
        uint32_t read_seq_p2_hf_bound_en : 1;/**< [  3:  3](R/W) It is used by the controller to calculate read transaction crossing page boundary. This field is
                                                                 valid only when PROFILE 2 - HF is selected.
                                                                 Allowed values are:
                                                                 0 = Disable.
                                                                 1 = Enable. */
        uint32_t read_seq_p2_mask_cmd_mod : 1;/**< [  2:  2](R/W) Determines PROFILE 2 Command extension variant. Value of this bits influences the [44:40] bits of
                                                                 Command/Address. If this bit is set to 1 those bits will be set to 1. In DIRECT work mode if this
                                                                 bit is set to 0 those bits will be set to (sARADDR[45:41] & dac_addr_mask[12:8]). In ACMD work
                                                                 mode if this bit is set to 0 those bits will be set to 0; */
        uint32_t read_seq_p2_burst_type : 1; /**< [  1:  1](R/W) Burst type - corresponds to 45th Command/Address (CA) bit assignment.
                                                                 Allowed values are:
                                                                 0 = Wrapped burst.
                                                                 1 = Linear burst. */
        uint32_t read_seq_p2_target    : 1;  /**< [  0:  0](R/W) Target space - corresponds to 46th Command/Address (CA) bit assignment.
                                                                 Allowed values are:
                                                                 0 = Memory space.
                                                                 1 = Register space. */
#else /* Word 0 - Little Endian */
        uint32_t read_seq_p2_target    : 1;  /**< [  0:  0](R/W) Target space - corresponds to 46th Command/Address (CA) bit assignment.
                                                                 Allowed values are:
                                                                 0 = Memory space.
                                                                 1 = Register space. */
        uint32_t read_seq_p2_burst_type : 1; /**< [  1:  1](R/W) Burst type - corresponds to 45th Command/Address (CA) bit assignment.
                                                                 Allowed values are:
                                                                 0 = Wrapped burst.
                                                                 1 = Linear burst. */
        uint32_t read_seq_p2_mask_cmd_mod : 1;/**< [  2:  2](R/W) Determines PROFILE 2 Command extension variant. Value of this bits influences the [44:40] bits of
                                                                 Command/Address. If this bit is set to 1 those bits will be set to 1. In DIRECT work mode if this
                                                                 bit is set to 0 those bits will be set to (sARADDR[45:41] & dac_addr_mask[12:8]). In ACMD work
                                                                 mode if this bit is set to 0 those bits will be set to 0; */
        uint32_t read_seq_p2_hf_bound_en : 1;/**< [  3:  3](R/W) It is used by the controller to calculate read transaction crossing page boundary. This field is
                                                                 valid only when PROFILE 2 - HF is selected.
                                                                 Allowed values are:
                                                                 0 = Disable.
                                                                 1 = Enable. */
        uint32_t reserved_4_7          : 4;
        uint32_t read_seq_p2_latency_cnt : 6;/**< [ 13:  8](R/W) Number of latency cycles. Setting this bit to 0 disables latency clock cycles. This value should
                                                                 be set to 'N-1', where 'N' is the number of latency clock cycles expected by the memory device. */
        uint32_t reserved_14_31        : 18;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_dev_seq_regs_read_seq_cfg_2_s cn; */
};
typedef union cavm_spix_dev_seq_regs_read_seq_cfg_2 cavm_spix_dev_seq_regs_read_seq_cfg_2_t;

static inline uint64_t CAVM_SPIX_DEV_SEQ_REGS_READ_SEQ_CFG_2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_DEV_SEQ_REGS_READ_SEQ_CFG_2(uint64_t a)
{
    if (a<=1)
        return 0x804000000438ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_DEV_SEQ_REGS_READ_SEQ_CFG_2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_DEV_SEQ_REGS_READ_SEQ_CFG_2(a) cavm_spix_dev_seq_regs_read_seq_cfg_2_t
#define bustype_CAVM_SPIX_DEV_SEQ_REGS_READ_SEQ_CFG_2(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_DEV_SEQ_REGS_READ_SEQ_CFG_2(a) "SPIX_DEV_SEQ_REGS_READ_SEQ_CFG_2"
#define device_bar_CAVM_SPIX_DEV_SEQ_REGS_READ_SEQ_CFG_2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_DEV_SEQ_REGS_READ_SEQ_CFG_2(a) (a)
#define arguments_CAVM_SPIX_DEV_SEQ_REGS_READ_SEQ_CFG_2(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_dev_seq_regs_rst_seq_cfg_0
 *
 * SPI Dev Seq Regs Rst Seq Cfg 0 Register
 * Register to configure RESET sequence for PROFILE 1 and SPI NAND in ACMD work mode.
 */
union cavm_spix_dev_seq_regs_rst_seq_cfg_0
{
    uint32_t u;
    struct cavm_spix_dev_seq_regs_rst_seq_cfg_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_29_31        : 3;
        uint32_t rst_seq_p1_cmd_edge   : 1;  /**< [ 28: 28](R/W) Selecting between SDR/DDR mode for both command phases. */
        uint32_t reserved_26_27        : 2;
        uint32_t rst_seq_p1_cmd_ios    : 2;  /**< [ 25: 24](R/W) Number of lines used to send commands for both command phases. */
        uint32_t reserved_23           : 1;
        uint32_t rst_seq_p1_data_en    : 1;  /**< [ 22: 22](R/W) Enable sending data phase (Confirmation Byte In) following CMD1 phase. */
        uint32_t rst_seq_p1_data_edge  : 1;  /**< [ 21: 21](R/W) Selecting between SDR/DDR mode for data phase (Confirmation Byte In) following CMD1 phase. */
        uint32_t reserved_20           : 1;
        uint32_t rst_seq_p1_data_ios   : 2;  /**< [ 19: 18](R/W) Number of lines used to send data phase (Confirmation Byte In) following CMD1 phase. */
        uint32_t reserved_17           : 1;
        uint32_t rst_seq_p1_cmd0_en    : 1;  /**< [ 16: 16](R/W) Enable bit for CMD0 phase. */
        uint32_t rst_seq_p1_cmd1_val   : 8;  /**< [ 15:  8](R/W) Command mnemonic value for CMD1 phase. */
        uint32_t rst_seq_p1_cmd0_val   : 8;  /**< [  7:  0](R/W) Command mnemonic value for CMD0 phase. */
#else /* Word 0 - Little Endian */
        uint32_t rst_seq_p1_cmd0_val   : 8;  /**< [  7:  0](R/W) Command mnemonic value for CMD0 phase. */
        uint32_t rst_seq_p1_cmd1_val   : 8;  /**< [ 15:  8](R/W) Command mnemonic value for CMD1 phase. */
        uint32_t rst_seq_p1_cmd0_en    : 1;  /**< [ 16: 16](R/W) Enable bit for CMD0 phase. */
        uint32_t reserved_17           : 1;
        uint32_t rst_seq_p1_data_ios   : 2;  /**< [ 19: 18](R/W) Number of lines used to send data phase (Confirmation Byte In) following CMD1 phase. */
        uint32_t reserved_20           : 1;
        uint32_t rst_seq_p1_data_edge  : 1;  /**< [ 21: 21](R/W) Selecting between SDR/DDR mode for data phase (Confirmation Byte In) following CMD1 phase. */
        uint32_t rst_seq_p1_data_en    : 1;  /**< [ 22: 22](R/W) Enable sending data phase (Confirmation Byte In) following CMD1 phase. */
        uint32_t reserved_23           : 1;
        uint32_t rst_seq_p1_cmd_ios    : 2;  /**< [ 25: 24](R/W) Number of lines used to send commands for both command phases. */
        uint32_t reserved_26_27        : 2;
        uint32_t rst_seq_p1_cmd_edge   : 1;  /**< [ 28: 28](R/W) Selecting between SDR/DDR mode for both command phases. */
        uint32_t reserved_29_31        : 3;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_dev_seq_regs_rst_seq_cfg_0_s cn; */
};
typedef union cavm_spix_dev_seq_regs_rst_seq_cfg_0 cavm_spix_dev_seq_regs_rst_seq_cfg_0_t;

static inline uint64_t CAVM_SPIX_DEV_SEQ_REGS_RST_SEQ_CFG_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_DEV_SEQ_REGS_RST_SEQ_CFG_0(uint64_t a)
{
    if (a<=1)
        return 0x804000000400ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_DEV_SEQ_REGS_RST_SEQ_CFG_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_DEV_SEQ_REGS_RST_SEQ_CFG_0(a) cavm_spix_dev_seq_regs_rst_seq_cfg_0_t
#define bustype_CAVM_SPIX_DEV_SEQ_REGS_RST_SEQ_CFG_0(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_DEV_SEQ_REGS_RST_SEQ_CFG_0(a) "SPIX_DEV_SEQ_REGS_RST_SEQ_CFG_0"
#define device_bar_CAVM_SPIX_DEV_SEQ_REGS_RST_SEQ_CFG_0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_DEV_SEQ_REGS_RST_SEQ_CFG_0(a) (a)
#define arguments_CAVM_SPIX_DEV_SEQ_REGS_RST_SEQ_CFG_0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_dev_seq_regs_rst_seq_cfg_1
 *
 * SPI Dev Seq Regs Rst Seq Cfg 1 Register
 * Register to configure RESET sequence for PROFILE 1 and SPI NAND in ACMD work mode.
 */
union cavm_spix_dev_seq_regs_rst_seq_cfg_1
{
    uint32_t u;
    struct cavm_spix_dev_seq_regs_rst_seq_cfg_1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rst_seq_p1_data_val   : 8;  /**< [ 31: 24](R/W) Value of Confirmation Byte In (if enabled) following CMD1 phase. */
        uint32_t rst_seq_p1_cmd1_ext_val : 8;/**< [ 23: 16](R/W) Command extension value of CMD1 phase (if enabled). */
        uint32_t rst_seq_p1_cmd0_ext_val : 8;/**< [ 15:  8](R/W) Command extension value of CMD0 phase (if enabled). */
        uint32_t reserved_2_7          : 6;
        uint32_t rst_seq_p1_cmd1_ext_en : 1; /**< [  1:  1](R/W) Command extension enable for CMD1 phase. */
        uint32_t rst_seq_p1_cmd0_ext_en : 1; /**< [  0:  0](R/W) Command extension enable for CMD0 phase. */
#else /* Word 0 - Little Endian */
        uint32_t rst_seq_p1_cmd0_ext_en : 1; /**< [  0:  0](R/W) Command extension enable for CMD0 phase. */
        uint32_t rst_seq_p1_cmd1_ext_en : 1; /**< [  1:  1](R/W) Command extension enable for CMD1 phase. */
        uint32_t reserved_2_7          : 6;
        uint32_t rst_seq_p1_cmd0_ext_val : 8;/**< [ 15:  8](R/W) Command extension value of CMD0 phase (if enabled). */
        uint32_t rst_seq_p1_cmd1_ext_val : 8;/**< [ 23: 16](R/W) Command extension value of CMD1 phase (if enabled). */
        uint32_t rst_seq_p1_data_val   : 8;  /**< [ 31: 24](R/W) Value of Confirmation Byte In (if enabled) following CMD1 phase. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_dev_seq_regs_rst_seq_cfg_1_s cn; */
};
typedef union cavm_spix_dev_seq_regs_rst_seq_cfg_1 cavm_spix_dev_seq_regs_rst_seq_cfg_1_t;

static inline uint64_t CAVM_SPIX_DEV_SEQ_REGS_RST_SEQ_CFG_1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_DEV_SEQ_REGS_RST_SEQ_CFG_1(uint64_t a)
{
    if (a<=1)
        return 0x804000000404ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_DEV_SEQ_REGS_RST_SEQ_CFG_1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_DEV_SEQ_REGS_RST_SEQ_CFG_1(a) cavm_spix_dev_seq_regs_rst_seq_cfg_1_t
#define bustype_CAVM_SPIX_DEV_SEQ_REGS_RST_SEQ_CFG_1(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_DEV_SEQ_REGS_RST_SEQ_CFG_1(a) "SPIX_DEV_SEQ_REGS_RST_SEQ_CFG_1"
#define device_bar_CAVM_SPIX_DEV_SEQ_REGS_RST_SEQ_CFG_1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_DEV_SEQ_REGS_RST_SEQ_CFG_1(a) (a)
#define arguments_CAVM_SPIX_DEV_SEQ_REGS_RST_SEQ_CFG_1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_dev_seq_regs_stat_seq_cfg_0
 *
 * SPI Dev Seq Regs Stat Seq Cfg 0 Register
 * Register to configure status checking sequence for PROFILE 1 and SPI NAND in ACMD and DIRECT work
 * modes.
 */
union cavm_spix_dev_seq_regs_stat_seq_cfg_0
{
    uint32_t u;
    struct cavm_spix_dev_seq_regs_stat_seq_cfg_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_23_31        : 9;
        uint32_t stat_seq_p1_data_edge : 1;  /**< [ 22: 22](R/W) Selecting between SDR/DDR mode for data phase. */
        uint32_t stat_seq_p1_data_ios  : 2;  /**< [ 21: 20](R/W) Number of lines used to send data phase. */
        uint32_t reserved_13_19        : 7;
        uint32_t stat_seq_p1_addr_edge : 1;  /**< [ 12: 12](R/W) Selecting between SDR/DDR mode for address phase. */
        uint32_t stat_seq_p1_addr_ios  : 2;  /**< [ 11: 10](R/W) Number of lines used to send address phase. */
        uint32_t stat_seq_p1_addr_cnt  : 2;  /**< [  9:  8](R/W) Number of address bytes for all status sequences.
                                                                 Field encoding is as following:
                                                                 0x0 = One address byte.
                                                                 0x1 = Two address bytes.
                                                                 0x2 = Three address bytes.
                                                                 0x3 = Four address bytes. */
        uint32_t reserved_6_7          : 2;
        uint32_t stat_seq_p1_cmd_ext_en : 1; /**< [  5:  5](R/W) Command extension enable. */
        uint32_t stat_seq_p1_cmd_edge  : 1;  /**< [  4:  4](R/W) Selecting between SDR/DDR mode for command phase. */
        uint32_t reserved_2_3          : 2;
        uint32_t stat_seq_p1_cmd_ios   : 2;  /**< [  1:  0](R/W) Number of lines used to send command. */
#else /* Word 0 - Little Endian */
        uint32_t stat_seq_p1_cmd_ios   : 2;  /**< [  1:  0](R/W) Number of lines used to send command. */
        uint32_t reserved_2_3          : 2;
        uint32_t stat_seq_p1_cmd_edge  : 1;  /**< [  4:  4](R/W) Selecting between SDR/DDR mode for command phase. */
        uint32_t stat_seq_p1_cmd_ext_en : 1; /**< [  5:  5](R/W) Command extension enable. */
        uint32_t reserved_6_7          : 2;
        uint32_t stat_seq_p1_addr_cnt  : 2;  /**< [  9:  8](R/W) Number of address bytes for all status sequences.
                                                                 Field encoding is as following:
                                                                 0x0 = One address byte.
                                                                 0x1 = Two address bytes.
                                                                 0x2 = Three address bytes.
                                                                 0x3 = Four address bytes. */
        uint32_t stat_seq_p1_addr_ios  : 2;  /**< [ 11: 10](R/W) Number of lines used to send address phase. */
        uint32_t stat_seq_p1_addr_edge : 1;  /**< [ 12: 12](R/W) Selecting between SDR/DDR mode for address phase. */
        uint32_t reserved_13_19        : 7;
        uint32_t stat_seq_p1_data_ios  : 2;  /**< [ 21: 20](R/W) Number of lines used to send data phase. */
        uint32_t stat_seq_p1_data_edge : 1;  /**< [ 22: 22](R/W) Selecting between SDR/DDR mode for data phase. */
        uint32_t reserved_23_31        : 9;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_dev_seq_regs_stat_seq_cfg_0_s cn; */
};
typedef union cavm_spix_dev_seq_regs_stat_seq_cfg_0 cavm_spix_dev_seq_regs_stat_seq_cfg_0_t;

static inline uint64_t CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_0(uint64_t a)
{
    if (a<=1)
        return 0x804000000450ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_0(a) cavm_spix_dev_seq_regs_stat_seq_cfg_0_t
#define bustype_CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_0(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_0(a) "SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_0"
#define device_bar_CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_0(a) (a)
#define arguments_CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_dev_seq_regs_stat_seq_cfg_1
 *
 * SPI Dev Seq Regs Stat Seq Cfg 1 Register
 * Register to configure status checking sequence for PROFILE 1 and SPI NAND ACMD and
 * DIRECT work modes.
 */
union cavm_spix_dev_seq_regs_stat_seq_cfg_1
{
    uint32_t u;
    struct cavm_spix_dev_seq_regs_stat_seq_cfg_1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_31           : 1;
        uint32_t stat_seq_p1_ers_fail_addr_en : 1;/**< [ 30: 30](R/W) Enables address phase for checking fail status after ERASE operation. This field is not utilized
                                                                 in DIRECT work mode. */
        uint32_t stat_seq_p1_ers_fail_dummy_cnt : 6;/**< [ 29: 24](R/W) Number of dummy clock cycles utilized to check fail status after ERASE operation. This field is
                                                                 not utilized in DIRECT work mode. */
        uint32_t reserved_23           : 1;
        uint32_t stat_seq_p1_prog_fail_addr_en : 1;/**< [ 22: 22](R/W) Enables address phase for checking fail status after PROGRAM operation. */
        uint32_t stat_seq_p1_prog_fail_dummy_cnt : 6;/**< [ 21: 16](R/W) Number of dummy clock cycles utilized to check fail status after PROGRAM operation. */
        uint32_t reserved_7_15         : 9;
        uint32_t stat_seq_p1_dev_rdy_addr_en : 1;/**< [  6:  6](R/W) Enables address phase for checking ready/busy status after PROGRAM/ERASE and SOFT RESET/READ (only
                                                                 for SPI NAND) operation. */
        uint32_t stat_seq_p1_dev_rdy_dummy_cnt : 6;/**< [  5:  0](R/W) Number of dummy clock cycles utilized to check ready/busy status after PROGRAM/ERASE and SOFT
                                                                 RESET/READ (only for SPI NAND) operation. */
#else /* Word 0 - Little Endian */
        uint32_t stat_seq_p1_dev_rdy_dummy_cnt : 6;/**< [  5:  0](R/W) Number of dummy clock cycles utilized to check ready/busy status after PROGRAM/ERASE and SOFT
                                                                 RESET/READ (only for SPI NAND) operation. */
        uint32_t stat_seq_p1_dev_rdy_addr_en : 1;/**< [  6:  6](R/W) Enables address phase for checking ready/busy status after PROGRAM/ERASE and SOFT RESET/READ (only
                                                                 for SPI NAND) operation. */
        uint32_t reserved_7_15         : 9;
        uint32_t stat_seq_p1_prog_fail_dummy_cnt : 6;/**< [ 21: 16](R/W) Number of dummy clock cycles utilized to check fail status after PROGRAM operation. */
        uint32_t stat_seq_p1_prog_fail_addr_en : 1;/**< [ 22: 22](R/W) Enables address phase for checking fail status after PROGRAM operation. */
        uint32_t reserved_23           : 1;
        uint32_t stat_seq_p1_ers_fail_dummy_cnt : 6;/**< [ 29: 24](R/W) Number of dummy clock cycles utilized to check fail status after ERASE operation. This field is
                                                                 not utilized in DIRECT work mode. */
        uint32_t stat_seq_p1_ers_fail_addr_en : 1;/**< [ 30: 30](R/W) Enables address phase for checking fail status after ERASE operation. This field is not utilized
                                                                 in DIRECT work mode. */
        uint32_t reserved_31           : 1;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_dev_seq_regs_stat_seq_cfg_1_s cn; */
};
typedef union cavm_spix_dev_seq_regs_stat_seq_cfg_1 cavm_spix_dev_seq_regs_stat_seq_cfg_1_t;

static inline uint64_t CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_1(uint64_t a)
{
    if (a<=1)
        return 0x804000000454ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_1(a) cavm_spix_dev_seq_regs_stat_seq_cfg_1_t
#define bustype_CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_1(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_1(a) "SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_1"
#define device_bar_CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_1(a) (a)
#define arguments_CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_dev_seq_regs_stat_seq_cfg_10
 *
 * SPI Dev Seq Regs Stat Seq Cfg 10 Register
 * Register to configure status checking sequence for SPI NAND devices in ACMD and DIRECT work modes.
 */
union cavm_spix_dev_seq_regs_stat_seq_cfg_10
{
    uint32_t u;
    struct cavm_spix_dev_seq_regs_stat_seq_cfg_10_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t stat_seq_ecc_fail_en  : 1;  /**< [ 31: 31](R/W) Enables checking ECC status after READ PAGE operation. */
        uint32_t reserved_28_30        : 3;
        uint32_t stat_seq_crdy_val     : 1;  /**< [ 27: 27](R/W) Value which will be compared with selected status bit in order to detect is the device in ready
                                                                 state after the Read Page Cache Random operation (CRBSY bit). This field is not used in DIRECT
                                                                 work mode. */
        uint32_t stat_seq_crdy_idx     : 3;  /**< [ 26: 24](R/W) This field determine which bit of the status word contains the Cache Read Busy (CRBSY) bit
                                                                 information for the SPI NAND Read Page Cache Random operation. This field is not used in DIRECT
                                                                 work mode. */
        uint32_t stat_seq_ecc_corr_val : 8;  /**< [ 23: 16](R/W) Value which will be compared with status word masked by [STAT_SEQ_ECC_FAIL_MASK] in order
                                                                 to detect if the device returned the correctable ECC error during SPI NAND Page Read operation.
                                                                 This method allows to detect single range of correctable errors returned by the XSPI device. */
        uint32_t stat_seq_ecc_fail_val : 8;  /**< [ 15:  8](R/W) Value which will be compared with status word masked by [STAT_SEQ_ECC_FAIL_MASK] in order
                                                                 to detect if the device returned the uncorrectable ECC error during SPI NAND Page Read operation. */
        uint32_t stat_seq_ecc_fail_mask : 8; /**< [  7:  0](R/W) Mask utilized to select which bits of status word carries the ECC status. */
#else /* Word 0 - Little Endian */
        uint32_t stat_seq_ecc_fail_mask : 8; /**< [  7:  0](R/W) Mask utilized to select which bits of status word carries the ECC status. */
        uint32_t stat_seq_ecc_fail_val : 8;  /**< [ 15:  8](R/W) Value which will be compared with status word masked by [STAT_SEQ_ECC_FAIL_MASK] in order
                                                                 to detect if the device returned the uncorrectable ECC error during SPI NAND Page Read operation. */
        uint32_t stat_seq_ecc_corr_val : 8;  /**< [ 23: 16](R/W) Value which will be compared with status word masked by [STAT_SEQ_ECC_FAIL_MASK] in order
                                                                 to detect if the device returned the correctable ECC error during SPI NAND Page Read operation.
                                                                 This method allows to detect single range of correctable errors returned by the XSPI device. */
        uint32_t stat_seq_crdy_idx     : 3;  /**< [ 26: 24](R/W) This field determine which bit of the status word contains the Cache Read Busy (CRBSY) bit
                                                                 information for the SPI NAND Read Page Cache Random operation. This field is not used in DIRECT
                                                                 work mode. */
        uint32_t stat_seq_crdy_val     : 1;  /**< [ 27: 27](R/W) Value which will be compared with selected status bit in order to detect is the device in ready
                                                                 state after the Read Page Cache Random operation (CRBSY bit). This field is not used in DIRECT
                                                                 work mode. */
        uint32_t reserved_28_30        : 3;
        uint32_t stat_seq_ecc_fail_en  : 1;  /**< [ 31: 31](R/W) Enables checking ECC status after READ PAGE operation. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_dev_seq_regs_stat_seq_cfg_10_s cn; */
};
typedef union cavm_spix_dev_seq_regs_stat_seq_cfg_10 cavm_spix_dev_seq_regs_stat_seq_cfg_10_t;

static inline uint64_t CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_10(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_10(uint64_t a)
{
    if (a<=1)
        return 0x804000000478ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_10", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_10(a) cavm_spix_dev_seq_regs_stat_seq_cfg_10_t
#define bustype_CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_10(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_10(a) "SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_10"
#define device_bar_CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_10(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_10(a) (a)
#define arguments_CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_10(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_dev_seq_regs_stat_seq_cfg_2
 *
 * SPI Dev Seq Regs Stat Seq Cfg 2 Register
 * Register to configure status checking sequence for PROFILE 1 and SPI NAND in ACMD and DIRECT work
 * modes.
 */
union cavm_spix_dev_seq_regs_stat_seq_cfg_2
{
    uint32_t u;
    struct cavm_spix_dev_seq_regs_stat_seq_cfg_2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t stat_seq_p1_prog_fail_cmd_val : 8;/**< [ 31: 24](R/W) Command mnemonic value for command utilized to check fail status after PROGRAM operation. */
        uint32_t reserved_16_23        : 8;
        uint32_t stat_seq_p1_ers_fail_cmd_val : 8;/**< [ 15:  8](R/W) Command mnemonic value for command utilized to check fail status after ERASE operation. This field
                                                                 is not utilized in DIRECT work mode. */
        uint32_t stat_seq_p1_dev_rdy_cmd_val : 8;/**< [  7:  0](R/W) Command mnemonic value for command utilized to check ready/busy status after PROGRAM/ERASE and
                                                                 SOFT RESET/READ (only for SPI NAND) operation. */
#else /* Word 0 - Little Endian */
        uint32_t stat_seq_p1_dev_rdy_cmd_val : 8;/**< [  7:  0](R/W) Command mnemonic value for command utilized to check ready/busy status after PROGRAM/ERASE and
                                                                 SOFT RESET/READ (only for SPI NAND) operation. */
        uint32_t stat_seq_p1_ers_fail_cmd_val : 8;/**< [ 15:  8](R/W) Command mnemonic value for command utilized to check fail status after ERASE operation. This field
                                                                 is not utilized in DIRECT work mode. */
        uint32_t reserved_16_23        : 8;
        uint32_t stat_seq_p1_prog_fail_cmd_val : 8;/**< [ 31: 24](R/W) Command mnemonic value for command utilized to check fail status after PROGRAM operation. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_dev_seq_regs_stat_seq_cfg_2_s cn; */
};
typedef union cavm_spix_dev_seq_regs_stat_seq_cfg_2 cavm_spix_dev_seq_regs_stat_seq_cfg_2_t;

static inline uint64_t CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_2(uint64_t a)
{
    if (a<=1)
        return 0x804000000458ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_2(a) cavm_spix_dev_seq_regs_stat_seq_cfg_2_t
#define bustype_CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_2(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_2(a) "SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_2"
#define device_bar_CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_2(a) (a)
#define arguments_CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_2(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_dev_seq_regs_stat_seq_cfg_3
 *
 * SPI Dev Seq Regs Stat Seq Cfg 3 Register
 * Register to configure status checking sequence for PROFILE 1 and SPI NAND in ACMD and DIRECT work
 * modes.
 */
union cavm_spix_dev_seq_regs_stat_seq_cfg_3
{
    uint32_t u;
    struct cavm_spix_dev_seq_regs_stat_seq_cfg_3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t stat_seq_p1_prog_fail_cmd_ext_val : 8;/**< [ 31: 24](R/W) Command extension value utilized to check fail status after PROGRAM operation. */
        uint32_t reserved_16_23        : 8;
        uint32_t stat_seq_p1_ers_fail_cmd_ext_val : 8;/**< [ 15:  8](R/W) Command extension value utilized to check fail status after ERASE operation. This field is not
                                                                 utilized in DIRECT work mode. */
        uint32_t stat_seq_p1_dev_rdy_cmd_ext_val : 8;/**< [  7:  0](R/W) Command extension value utilized to check ready/busy status after PROGRAM/ERASE and SOFT
                                                                 RESET/READ (only for SPI NAND) operation. */
#else /* Word 0 - Little Endian */
        uint32_t stat_seq_p1_dev_rdy_cmd_ext_val : 8;/**< [  7:  0](R/W) Command extension value utilized to check ready/busy status after PROGRAM/ERASE and SOFT
                                                                 RESET/READ (only for SPI NAND) operation. */
        uint32_t stat_seq_p1_ers_fail_cmd_ext_val : 8;/**< [ 15:  8](R/W) Command extension value utilized to check fail status after ERASE operation. This field is not
                                                                 utilized in DIRECT work mode. */
        uint32_t reserved_16_23        : 8;
        uint32_t stat_seq_p1_prog_fail_cmd_ext_val : 8;/**< [ 31: 24](R/W) Command extension value utilized to check fail status after PROGRAM operation. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_dev_seq_regs_stat_seq_cfg_3_s cn; */
};
typedef union cavm_spix_dev_seq_regs_stat_seq_cfg_3 cavm_spix_dev_seq_regs_stat_seq_cfg_3_t;

static inline uint64_t CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_3(uint64_t a)
{
    if (a<=1)
        return 0x80400000045cll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_3(a) cavm_spix_dev_seq_regs_stat_seq_cfg_3_t
#define bustype_CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_3(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_3(a) "SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_3"
#define device_bar_CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_3(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_3(a) (a)
#define arguments_CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_3(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_dev_seq_regs_stat_seq_cfg_4
 *
 * SPI Dev Seq Regs Stat Seq Cfg 4 Register
 * Register to configure status checking sequence for PROFILE 2 - HF in ACMD and DIRECT work modes.
 */
union cavm_spix_dev_seq_regs_stat_seq_cfg_4
{
    uint32_t u;
    struct cavm_spix_dev_seq_regs_stat_seq_cfg_4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_14_31        : 18;
        uint32_t stat_seq_p2_latency_cnt : 6;/**< [ 13:  8](R/W) Number of latency cycles between CA and STATUS reading. This value should be set to 'N-1', where
                                                                 'N' is the number of latency clock cycles expected by the memory device. */
        uint32_t reserved_3_7          : 5;
        uint32_t stat_seq_p2_mask_cmd_mod : 1;/**< [  2:  2](R/W) Determines PROFILE 2 Command extension variant. Value of this bits influences the [44:40] bits of
                                                                 Command/Address. If this bit is set to 1 those bits will be set to 1. Otherwise those bits will be
                                                                 set to 0. */
        uint32_t reserved_0_1          : 2;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_1          : 2;
        uint32_t stat_seq_p2_mask_cmd_mod : 1;/**< [  2:  2](R/W) Determines PROFILE 2 Command extension variant. Value of this bits influences the [44:40] bits of
                                                                 Command/Address. If this bit is set to 1 those bits will be set to 1. Otherwise those bits will be
                                                                 set to 0. */
        uint32_t reserved_3_7          : 5;
        uint32_t stat_seq_p2_latency_cnt : 6;/**< [ 13:  8](R/W) Number of latency cycles between CA and STATUS reading. This value should be set to 'N-1', where
                                                                 'N' is the number of latency clock cycles expected by the memory device. */
        uint32_t reserved_14_31        : 18;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_dev_seq_regs_stat_seq_cfg_4_s cn; */
};
typedef union cavm_spix_dev_seq_regs_stat_seq_cfg_4 cavm_spix_dev_seq_regs_stat_seq_cfg_4_t;

static inline uint64_t CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_4(uint64_t a)
{
    if (a<=1)
        return 0x804000000460ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_4(a) cavm_spix_dev_seq_regs_stat_seq_cfg_4_t
#define bustype_CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_4(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_4(a) "SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_4"
#define device_bar_CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_4(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_4(a) (a)
#define arguments_CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_4(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_dev_seq_regs_stat_seq_cfg_5
 *
 * SPI Dev Seq Regs Stat Seq Cfg 5 Register
 * Register to configure status checking sequence for PROFILE 1, SPI NAND and PROFILE 2
 * - HF in ACMD and
 * DIRECT work modes.
 */
union cavm_spix_dev_seq_regs_stat_seq_cfg_5
{
    uint32_t u;
    struct cavm_spix_dev_seq_regs_stat_seq_cfg_5_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_31           : 1;
        uint32_t stat_seq_prog_fail_en : 1;  /**< [ 30: 30](R/W) Enables checking fail status after PROGRAM operation. */
        uint32_t stat_seq_prog_fail_size : 1;/**< [ 29: 29](R/W) Size of status word (0-1B, 1-2B). */
        uint32_t stat_seq_prog_fail_val : 1; /**< [ 28: 28](R/W) Value which will be compared with selected status bit in order to detect is the device in fail
                                                                 state after PROGRAM operation. */
        uint32_t stat_seq_prog_fail_idx : 4; /**< [ 27: 24](R/W) This field determine which bit of the status word contains the fail information after the PROGRAM
                                                                 command. */
        uint32_t reserved_15_23        : 9;
        uint32_t stat_seq_ers_fail_en  : 1;  /**< [ 14: 14](R/W) Enables checking fail status after ERASE operation. This field is not utilized in DIRECT work mode. */
        uint32_t stat_seq_ers_fail_size : 1; /**< [ 13: 13](R/W) Size of status word (0-1B, 1-2B). This field is not utilized in DIRECT work mode. */
        uint32_t stat_seq_ers_fail_val : 1;  /**< [ 12: 12](R/W) Value which will be compared with selected status bit in order to detect is the device in ready
                                                                 state after ERASE operation. This field is not utilized in DIRECT work mode. */
        uint32_t stat_seq_ers_fail_idx : 4;  /**< [ 11:  8](R/W) This field determine which bit of the status word contains the fail information after the ERASE
                                                                 command. This field is not utilized in DIRECT work mode. */
        uint32_t reserved_7            : 1;
        uint32_t stat_seq_dev_rdy_en   : 1;  /**< [  6:  6](R/W) Enables checking RDY/BUSY status after PROGRAM/ERASE operations. */
        uint32_t stat_seq_dev_rdy_size : 1;  /**< [  5:  5](R/W) Size of status word (0-1B, 1-2B). */
        uint32_t stat_seq_dev_rdy_val  : 1;  /**< [  4:  4](R/W) Value which will be compared with selected status bit in order to detect is the device in ready
                                                                 state after PROGRAM/ERASE and SOFT RESET/READ (only for SPI NAND) operation. */
        uint32_t stat_seq_dev_rdy_idx  : 4;  /**< [  3:  0](R/W) This field determine which bit of the status word contains the ready/busy information after
                                                                 PROGRAM/ERASE and SOFT RESET/READ (only for SPI NAND) operation. */
#else /* Word 0 - Little Endian */
        uint32_t stat_seq_dev_rdy_idx  : 4;  /**< [  3:  0](R/W) This field determine which bit of the status word contains the ready/busy information after
                                                                 PROGRAM/ERASE and SOFT RESET/READ (only for SPI NAND) operation. */
        uint32_t stat_seq_dev_rdy_val  : 1;  /**< [  4:  4](R/W) Value which will be compared with selected status bit in order to detect is the device in ready
                                                                 state after PROGRAM/ERASE and SOFT RESET/READ (only for SPI NAND) operation. */
        uint32_t stat_seq_dev_rdy_size : 1;  /**< [  5:  5](R/W) Size of status word (0-1B, 1-2B). */
        uint32_t stat_seq_dev_rdy_en   : 1;  /**< [  6:  6](R/W) Enables checking RDY/BUSY status after PROGRAM/ERASE operations. */
        uint32_t reserved_7            : 1;
        uint32_t stat_seq_ers_fail_idx : 4;  /**< [ 11:  8](R/W) This field determine which bit of the status word contains the fail information after the ERASE
                                                                 command. This field is not utilized in DIRECT work mode. */
        uint32_t stat_seq_ers_fail_val : 1;  /**< [ 12: 12](R/W) Value which will be compared with selected status bit in order to detect is the device in ready
                                                                 state after ERASE operation. This field is not utilized in DIRECT work mode. */
        uint32_t stat_seq_ers_fail_size : 1; /**< [ 13: 13](R/W) Size of status word (0-1B, 1-2B). This field is not utilized in DIRECT work mode. */
        uint32_t stat_seq_ers_fail_en  : 1;  /**< [ 14: 14](R/W) Enables checking fail status after ERASE operation. This field is not utilized in DIRECT work mode. */
        uint32_t reserved_15_23        : 9;
        uint32_t stat_seq_prog_fail_idx : 4; /**< [ 27: 24](R/W) This field determine which bit of the status word contains the fail information after the PROGRAM
                                                                 command. */
        uint32_t stat_seq_prog_fail_val : 1; /**< [ 28: 28](R/W) Value which will be compared with selected status bit in order to detect is the device in fail
                                                                 state after PROGRAM operation. */
        uint32_t stat_seq_prog_fail_size : 1;/**< [ 29: 29](R/W) Size of status word (0-1B, 1-2B). */
        uint32_t stat_seq_prog_fail_en : 1;  /**< [ 30: 30](R/W) Enables checking fail status after PROGRAM operation. */
        uint32_t reserved_31           : 1;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_dev_seq_regs_stat_seq_cfg_5_s cn; */
};
typedef union cavm_spix_dev_seq_regs_stat_seq_cfg_5 cavm_spix_dev_seq_regs_stat_seq_cfg_5_t;

static inline uint64_t CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_5(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_5(uint64_t a)
{
    if (a<=1)
        return 0x804000000464ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_5", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_5(a) cavm_spix_dev_seq_regs_stat_seq_cfg_5_t
#define bustype_CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_5(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_5(a) "SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_5"
#define device_bar_CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_5(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_5(a) (a)
#define arguments_CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_5(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_dev_seq_regs_stat_seq_cfg_7
 *
 * SPI Dev Seq Regs Stat Seq Cfg 7 Register
 * Register to configure status checking sequence for PROFILE 1, SPI NAND and PROFILE 2
 * - HF in ACMD and
 * DIRECT work modes.
 */
union cavm_spix_dev_seq_regs_stat_seq_cfg_7
{
    uint32_t u;
    struct cavm_spix_dev_seq_regs_stat_seq_cfg_7_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t stat_seq_dev_rdy_addr : 32; /**< [ 31:  0](R/W) Value of address utilized to check rdy/busy status after PROGRAM/ERASE and SOFT RESET/READ (only
                                                                 for SPI NAND) operation. */
#else /* Word 0 - Little Endian */
        uint32_t stat_seq_dev_rdy_addr : 32; /**< [ 31:  0](R/W) Value of address utilized to check rdy/busy status after PROGRAM/ERASE and SOFT RESET/READ (only
                                                                 for SPI NAND) operation. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_dev_seq_regs_stat_seq_cfg_7_s cn; */
};
typedef union cavm_spix_dev_seq_regs_stat_seq_cfg_7 cavm_spix_dev_seq_regs_stat_seq_cfg_7_t;

static inline uint64_t CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_7(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_7(uint64_t a)
{
    if (a<=1)
        return 0x80400000046cll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_7", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_7(a) cavm_spix_dev_seq_regs_stat_seq_cfg_7_t
#define bustype_CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_7(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_7(a) "SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_7"
#define device_bar_CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_7(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_7(a) (a)
#define arguments_CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_7(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_dev_seq_regs_stat_seq_cfg_8
 *
 * SPI Dev Seq Regs Stat Seq Cfg 8 Register
 * Register to configure status checking sequence for PROFILE 1, SPI NAND and PROFILE 2
 * -HF in ACMD and
 * DIRECT work modes.
 */
union cavm_spix_dev_seq_regs_stat_seq_cfg_8
{
    uint32_t u;
    struct cavm_spix_dev_seq_regs_stat_seq_cfg_8_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t stat_seq_prog_fail_addr : 32;/**< [ 31:  0](R/W) Value of address utilized to check fail status after PROGRAM operation. */
#else /* Word 0 - Little Endian */
        uint32_t stat_seq_prog_fail_addr : 32;/**< [ 31:  0](R/W) Value of address utilized to check fail status after PROGRAM operation. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_dev_seq_regs_stat_seq_cfg_8_s cn; */
};
typedef union cavm_spix_dev_seq_regs_stat_seq_cfg_8 cavm_spix_dev_seq_regs_stat_seq_cfg_8_t;

static inline uint64_t CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_8(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_8(uint64_t a)
{
    if (a<=1)
        return 0x804000000470ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_8", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_8(a) cavm_spix_dev_seq_regs_stat_seq_cfg_8_t
#define bustype_CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_8(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_8(a) "SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_8"
#define device_bar_CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_8(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_8(a) (a)
#define arguments_CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_8(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_dev_seq_regs_stat_seq_cfg_9
 *
 * SPI Dev Seq Regs Stat Seq Cfg 9 Register
 * Register to configure status checking sequence for PROFILE 1, SPI NAND and PROFILE 2
 * - HF in ACMD work
 * mode.
 */
union cavm_spix_dev_seq_regs_stat_seq_cfg_9
{
    uint32_t u;
    struct cavm_spix_dev_seq_regs_stat_seq_cfg_9_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t stat_seq_ers_fail_addr : 32;/**< [ 31:  0](R/W) Value of address utilized to check fail status after ERASE operation. */
#else /* Word 0 - Little Endian */
        uint32_t stat_seq_ers_fail_addr : 32;/**< [ 31:  0](R/W) Value of address utilized to check fail status after ERASE operation. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_dev_seq_regs_stat_seq_cfg_9_s cn; */
};
typedef union cavm_spix_dev_seq_regs_stat_seq_cfg_9 cavm_spix_dev_seq_regs_stat_seq_cfg_9_t;

static inline uint64_t CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_9(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_9(uint64_t a)
{
    if (a<=1)
        return 0x804000000474ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_9", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_9(a) cavm_spix_dev_seq_regs_stat_seq_cfg_9_t
#define bustype_CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_9(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_9(a) "SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_9"
#define device_bar_CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_9(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_9(a) (a)
#define arguments_CAVM_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_9(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_dev_seq_regs_we_seq_cfg_0
 *
 * SPI Dev Seq Regs We Seq Cfg 0 Register
 * Register to configure Write Enable Latch (WEL) sequence for PROFILE 1 and SPI NAND
 * in ACMD and DIRECT
 * work modes.
 */
union cavm_spix_dev_seq_regs_we_seq_cfg_0
{
    uint32_t u;
    struct cavm_spix_dev_seq_regs_we_seq_cfg_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_25_31        : 7;
        uint32_t we_seq_p1_en          : 1;  /**< [ 24: 24](R/W) Enables sending WEL command. */
        uint32_t we_seq_p1_cmd_ext_val : 8;  /**< [ 23: 16](R/W) Command extension value. */
        uint32_t we_seq_p1_cmd_ext_en  : 1;  /**< [ 15: 15](R/W) Command extension enable. */
        uint32_t reserved_12_14        : 3;
        uint32_t we_seq_p1_cmd_edge    : 1;  /**< [ 11: 11](R/W) Selecting between SDR/DDR mode for command phase. */
        uint32_t reserved_10           : 1;
        uint32_t we_seq_p1_cmd_ios     : 2;  /**< [  9:  8](R/W) Number of lines used to send command phase. */
        uint32_t we_seq_p1_cmd_val     : 8;  /**< [  7:  0](R/W) Command mnemonic value. */
#else /* Word 0 - Little Endian */
        uint32_t we_seq_p1_cmd_val     : 8;  /**< [  7:  0](R/W) Command mnemonic value. */
        uint32_t we_seq_p1_cmd_ios     : 2;  /**< [  9:  8](R/W) Number of lines used to send command phase. */
        uint32_t reserved_10           : 1;
        uint32_t we_seq_p1_cmd_edge    : 1;  /**< [ 11: 11](R/W) Selecting between SDR/DDR mode for command phase. */
        uint32_t reserved_12_14        : 3;
        uint32_t we_seq_p1_cmd_ext_en  : 1;  /**< [ 15: 15](R/W) Command extension enable. */
        uint32_t we_seq_p1_cmd_ext_val : 8;  /**< [ 23: 16](R/W) Command extension value. */
        uint32_t we_seq_p1_en          : 1;  /**< [ 24: 24](R/W) Enables sending WEL command. */
        uint32_t reserved_25_31        : 7;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_dev_seq_regs_we_seq_cfg_0_s cn; */
};
typedef union cavm_spix_dev_seq_regs_we_seq_cfg_0 cavm_spix_dev_seq_regs_we_seq_cfg_0_t;

static inline uint64_t CAVM_SPIX_DEV_SEQ_REGS_WE_SEQ_CFG_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_DEV_SEQ_REGS_WE_SEQ_CFG_0(uint64_t a)
{
    if (a<=1)
        return 0x804000000440ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_DEV_SEQ_REGS_WE_SEQ_CFG_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_DEV_SEQ_REGS_WE_SEQ_CFG_0(a) cavm_spix_dev_seq_regs_we_seq_cfg_0_t
#define bustype_CAVM_SPIX_DEV_SEQ_REGS_WE_SEQ_CFG_0(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_DEV_SEQ_REGS_WE_SEQ_CFG_0(a) "SPIX_DEV_SEQ_REGS_WE_SEQ_CFG_0"
#define device_bar_CAVM_SPIX_DEV_SEQ_REGS_WE_SEQ_CFG_0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_DEV_SEQ_REGS_WE_SEQ_CFG_0(a) (a)
#define arguments_CAVM_SPIX_DEV_SEQ_REGS_WE_SEQ_CFG_0(a) (a),-1,-1,-1

/**
 * Register (NCB) spi#_direct_access#
 *
 * SPI Flash Direct map Registers
 * This register is for memory mapping the external Flash Device to access it in direct mode.
 * A read transaction to this register would initiate a SPI Read transfer.
 */
union cavm_spix_direct_accessx
{
    uint64_t u;
    struct cavm_spix_direct_accessx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W) This register is for memory mapping the external flash address to the system memory. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W) This register is for memory mapping the external flash address to the system memory. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_direct_accessx_s cn; */
};
typedef union cavm_spix_direct_accessx cavm_spix_direct_accessx_t;

static inline uint64_t CAVM_SPIX_DIRECT_ACCESSX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_DIRECT_ACCESSX(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=65535))
        return 0x804010000000ll + 0x1000000000ll * ((a) & 0x1) + 8ll * ((b) & 0xffff);
    __cavm_csr_fatal("SPIX_DIRECT_ACCESSX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_DIRECT_ACCESSX(a,b) cavm_spix_direct_accessx_t
#define bustype_CAVM_SPIX_DIRECT_ACCESSX(a,b) CSR_TYPE_NCB
#define basename_CAVM_SPIX_DIRECT_ACCESSX(a,b) "SPIX_DIRECT_ACCESSX"
#define device_bar_CAVM_SPIX_DIRECT_ACCESSX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_DIRECT_ACCESSX(a,b) (a)
#define arguments_CAVM_SPIX_DIRECT_ACCESSX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) spi#_intr
 *
 * SPI PF Interrupt Register
 * This register contains the different interrupt summary bits of the SPI.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on cold reset.
 */
union cavm_spix_intr
{
    uint64_t u;
    struct cavm_spix_intr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t spi_intr_out          : 1;  /**< [  0:  0](R/W1C/H) SPI interrupt output. */
#else /* Word 0 - Little Endian */
        uint64_t spi_intr_out          : 1;  /**< [  0:  0](R/W1C/H) SPI interrupt output. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_intr_s cn; */
};
typedef union cavm_spix_intr cavm_spix_intr_t;

static inline uint64_t CAVM_SPIX_INTR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_INTR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA_AX) && (a<=1))
        return 0x804000004000ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x804000004000ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB_AX) && (a<=1))
        return 0x804000004000ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_INTR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_INTR(a) cavm_spix_intr_t
#define bustype_CAVM_SPIX_INTR(a) CSR_TYPE_NCB
#define basename_CAVM_SPIX_INTR(a) "SPIX_INTR"
#define device_bar_CAVM_SPIX_INTR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_INTR(a) (a)
#define arguments_CAVM_SPIX_INTR(a) (a),-1,-1,-1

/**
 * Register (NCB) spi#_intr_ena_w1c
 *
 * SPI PF Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_spix_intr_ena_w1c
{
    uint64_t u;
    struct cavm_spix_intr_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t spi_intr_out          : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for SPI(0..1)_INTR[SPI_INTR_OUT]. */
#else /* Word 0 - Little Endian */
        uint64_t spi_intr_out          : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for SPI(0..1)_INTR[SPI_INTR_OUT]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_intr_ena_w1c_s cn; */
};
typedef union cavm_spix_intr_ena_w1c cavm_spix_intr_ena_w1c_t;

static inline uint64_t CAVM_SPIX_INTR_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_INTR_ENA_W1C(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA_AX) && (a<=1))
        return 0x804000004010ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x804000004010ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB_AX) && (a<=1))
        return 0x804000004010ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_INTR_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_INTR_ENA_W1C(a) cavm_spix_intr_ena_w1c_t
#define bustype_CAVM_SPIX_INTR_ENA_W1C(a) CSR_TYPE_NCB
#define basename_CAVM_SPIX_INTR_ENA_W1C(a) "SPIX_INTR_ENA_W1C"
#define device_bar_CAVM_SPIX_INTR_ENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_INTR_ENA_W1C(a) (a)
#define arguments_CAVM_SPIX_INTR_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (NCB) spi#_intr_ena_w1s
 *
 * SPI PF Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_spix_intr_ena_w1s
{
    uint64_t u;
    struct cavm_spix_intr_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t spi_intr_out          : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for SPI(0..1)_INTR[SPI_INTR_OUT]. */
#else /* Word 0 - Little Endian */
        uint64_t spi_intr_out          : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for SPI(0..1)_INTR[SPI_INTR_OUT]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_intr_ena_w1s_s cn; */
};
typedef union cavm_spix_intr_ena_w1s cavm_spix_intr_ena_w1s_t;

static inline uint64_t CAVM_SPIX_INTR_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_INTR_ENA_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA_AX) && (a<=1))
        return 0x804000004018ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x804000004018ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB_AX) && (a<=1))
        return 0x804000004018ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_INTR_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_INTR_ENA_W1S(a) cavm_spix_intr_ena_w1s_t
#define bustype_CAVM_SPIX_INTR_ENA_W1S(a) CSR_TYPE_NCB
#define basename_CAVM_SPIX_INTR_ENA_W1S(a) "SPIX_INTR_ENA_W1S"
#define device_bar_CAVM_SPIX_INTR_ENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_INTR_ENA_W1S(a) (a)
#define arguments_CAVM_SPIX_INTR_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) spi#_intr_w1s
 *
 * SPI PF Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_spix_intr_w1s
{
    uint64_t u;
    struct cavm_spix_intr_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t spi_intr_out          : 1;  /**< [  0:  0](R/W1S/H) Reads or sets SPI(0..1)_INTR[SPI_INTR_OUT]. */
#else /* Word 0 - Little Endian */
        uint64_t spi_intr_out          : 1;  /**< [  0:  0](R/W1S/H) Reads or sets SPI(0..1)_INTR[SPI_INTR_OUT]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_intr_w1s_s cn; */
};
typedef union cavm_spix_intr_w1s cavm_spix_intr_w1s_t;

static inline uint64_t CAVM_SPIX_INTR_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_INTR_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA_AX) && (a<=1))
        return 0x804000004008ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x804000004008ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB_AX) && (a<=1))
        return 0x804000004008ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_INTR_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_INTR_W1S(a) cavm_spix_intr_w1s_t
#define bustype_CAVM_SPIX_INTR_W1S(a) CSR_TYPE_NCB
#define basename_CAVM_SPIX_INTR_W1S(a) "SPIX_INTR_W1S"
#define device_bar_CAVM_SPIX_INTR_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_INTR_W1S(a) (a)
#define arguments_CAVM_SPIX_INTR_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) spi#_msix_pba#
 *
 * SPI MSI-X Pending Bit Array Registers
 * This register is the MSI-X PBA table, the bit number is indexed by the SPI_INT_VEC_E enumeration.
 */
union cavm_spix_msix_pbax
{
    uint64_t u;
    struct cavm_spix_msix_pbax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message for each interrupt, enumerated by SPI_INT_VEC_E. Bits that have no
                                                                 associated SPI_INT_VEC_E are zero. */
#else /* Word 0 - Little Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message for each interrupt, enumerated by SPI_INT_VEC_E. Bits that have no
                                                                 associated SPI_INT_VEC_E are zero. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_msix_pbax_s cn; */
};
typedef union cavm_spix_msix_pbax cavm_spix_msix_pbax_t;

static inline uint64_t CAVM_SPIX_MSIX_PBAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_MSIX_PBAX(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b==0))
        return 0x8041000f0000ll + 0x1000000000ll * ((a) & 0x1) + 8ll * ((b) & 0x0);
    __cavm_csr_fatal("SPIX_MSIX_PBAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_MSIX_PBAX(a,b) cavm_spix_msix_pbax_t
#define bustype_CAVM_SPIX_MSIX_PBAX(a,b) CSR_TYPE_NCB
#define basename_CAVM_SPIX_MSIX_PBAX(a,b) "SPIX_MSIX_PBAX"
#define device_bar_CAVM_SPIX_MSIX_PBAX(a,b) 0x4 /* PF_BAR4 */
#define busnum_CAVM_SPIX_MSIX_PBAX(a,b) (a)
#define arguments_CAVM_SPIX_MSIX_PBAX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) spi#_msix_vec#_addr
 *
 * SPI MSI-X Vector Table Address Registers
 * This register is the MSI-X vector table, indexed by the SPI_INT_VEC_E enumeration.
 */
union cavm_spix_msix_vecx_addr
{
    uint64_t u;
    struct cavm_spix_msix_vecx_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_1            : 1;
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Secure vector.
                                                                 0 = This vector may be read or written by either secure or nonsecure states.
                                                                 The vector's IOVA is sent to the SMMU as nonsecure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1).

                                                                 1 = This vector's SPI_MSIX_VEC()_ADDR, SPI_MSIX_VEC()_CTL, and
                                                                 corresponding bit of SPI_MSIX_PBA() are RAZ/WI and does not cause a fault when accessed
                                                                 by the nonsecure world. */
#else /* Word 0 - Little Endian */
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Secure vector.
                                                                 0 = This vector may be read or written by either secure or nonsecure states.
                                                                 The vector's IOVA is sent to the SMMU as nonsecure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1).

                                                                 1 = This vector's SPI_MSIX_VEC()_ADDR, SPI_MSIX_VEC()_CTL, and
                                                                 corresponding bit of SPI_MSIX_PBA() are RAZ/WI and does not cause a fault when accessed
                                                                 by the nonsecure world. */
        uint64_t reserved_1            : 1;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_msix_vecx_addr_s cn; */
};
typedef union cavm_spix_msix_vecx_addr cavm_spix_msix_vecx_addr_t;

static inline uint64_t CAVM_SPIX_MSIX_VECX_ADDR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_MSIX_VECX_ADDR(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b==0))
        return 0x804100000000ll + 0x1000000000ll * ((a) & 0x1) + 0x10ll * ((b) & 0x0);
    __cavm_csr_fatal("SPIX_MSIX_VECX_ADDR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_MSIX_VECX_ADDR(a,b) cavm_spix_msix_vecx_addr_t
#define bustype_CAVM_SPIX_MSIX_VECX_ADDR(a,b) CSR_TYPE_NCB
#define basename_CAVM_SPIX_MSIX_VECX_ADDR(a,b) "SPIX_MSIX_VECX_ADDR"
#define device_bar_CAVM_SPIX_MSIX_VECX_ADDR(a,b) 0x4 /* PF_BAR4 */
#define busnum_CAVM_SPIX_MSIX_VECX_ADDR(a,b) (a)
#define arguments_CAVM_SPIX_MSIX_VECX_ADDR(a,b) (a),(b),-1,-1

/**
 * Register (NCB) spi#_msix_vec#_ctl
 *
 * SPI MSI-X Vector Table Control and Data Registers
 * This register is the MSI-X vector table, indexed by the SPI_INT_VEC_E enumeration.
 */
union cavm_spix_msix_vecx_ctl
{
    uint64_t u;
    struct cavm_spix_msix_vecx_ctl_s
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
    /* struct cavm_spix_msix_vecx_ctl_s cn; */
};
typedef union cavm_spix_msix_vecx_ctl cavm_spix_msix_vecx_ctl_t;

static inline uint64_t CAVM_SPIX_MSIX_VECX_CTL(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_MSIX_VECX_CTL(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b==0))
        return 0x804100000008ll + 0x1000000000ll * ((a) & 0x1) + 0x10ll * ((b) & 0x0);
    __cavm_csr_fatal("SPIX_MSIX_VECX_CTL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_MSIX_VECX_CTL(a,b) cavm_spix_msix_vecx_ctl_t
#define bustype_CAVM_SPIX_MSIX_VECX_CTL(a,b) CSR_TYPE_NCB
#define basename_CAVM_SPIX_MSIX_VECX_CTL(a,b) "SPIX_MSIX_VECX_CTL"
#define device_bar_CAVM_SPIX_MSIX_VECX_CTL(a,b) 0x4 /* PF_BAR4 */
#define busnum_CAVM_SPIX_MSIX_VECX_CTL(a,b) (a)
#define arguments_CAVM_SPIX_MSIX_VECX_CTL(a,b) (a),(b),-1,-1

/**
 * Register (NCB32b) spi#_phy_ctb_rfile_phy_ctrl
 *
 * SPI PHY Ctb Rfile PHY Control Register
 * This register handles the global control settings for the PHY.
 */
union cavm_spix_phy_ctb_rfile_phy_ctrl
{
    uint32_t u;
    struct cavm_spix_phy_ctb_rfile_phy_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_22_31        : 10;
        uint32_t pu_pd_polarity        : 1;  /**< [ 21: 21](R/W) Defines the polarity of the ALE port that in SD works as pull-up/pull-down signal for bit 2 of the
                                                                 DATA.
                                                                 0 - ALE port is a copy of dfi_ale.
                                                                 1 - ALE port is inverted version of dfi_ale. */
        uint32_t low_freq_sel          : 1;  /**< [ 20: 20](R/W) If this field is set high the DFI interface is synchronous to the falling edge of the clock ie.
                                                                 the input signals are latched at the falling edge of the clk_ctrl and output signals are sync to
                                                                 falling edge of the clk_ctrl. Otherwise the interface is sync to the rising edge of the clk_ctrl. */
        uint32_t reserved_15_19        : 5;
        uint32_t sdr_dqs_value         : 1;  /**< [ 14: 14](R/W) The value that should be driven on the DQS pin while SDR operations are in progress. Please note
                                                                 that in the DDR modes of operations, the command and address cycles are still in SDR mode. This
                                                                 field informs the PHY of the value to be driven onto the DQS bus during these SDR cycles. */
        uint32_t reserved_10_13        : 4;
        uint32_t phony_dqs_timing      : 6;  /**< [  9:  4](R/W) The timing of assertion of phony DQS to the data slices. If the extended_read_mode is disabled the
                                                                 value should be zero. If the extended_read_mode is enabled the value should match the width of the
                                                                 rebar pulse in terms of clock PHY clock cycles reduced by 1. e.g. if rebar pulse width is 4 clock
                                                                 cycles the value of this field should be 3. */
        uint32_t reserved_1_3          : 3;
        uint32_t ctrl_clkperiod_delay  : 1;  /**< [  0:  0](R/W) Defines additional latency on the control signals ALE/CLE/WE/RE/CE/WP. */
#else /* Word 0 - Little Endian */
        uint32_t ctrl_clkperiod_delay  : 1;  /**< [  0:  0](R/W) Defines additional latency on the control signals ALE/CLE/WE/RE/CE/WP. */
        uint32_t reserved_1_3          : 3;
        uint32_t phony_dqs_timing      : 6;  /**< [  9:  4](R/W) The timing of assertion of phony DQS to the data slices. If the extended_read_mode is disabled the
                                                                 value should be zero. If the extended_read_mode is enabled the value should match the width of the
                                                                 rebar pulse in terms of clock PHY clock cycles reduced by 1. e.g. if rebar pulse width is 4 clock
                                                                 cycles the value of this field should be 3. */
        uint32_t reserved_10_13        : 4;
        uint32_t sdr_dqs_value         : 1;  /**< [ 14: 14](R/W) The value that should be driven on the DQS pin while SDR operations are in progress. Please note
                                                                 that in the DDR modes of operations, the command and address cycles are still in SDR mode. This
                                                                 field informs the PHY of the value to be driven onto the DQS bus during these SDR cycles. */
        uint32_t reserved_15_19        : 5;
        uint32_t low_freq_sel          : 1;  /**< [ 20: 20](R/W) If this field is set high the DFI interface is synchronous to the falling edge of the clock ie.
                                                                 the input signals are latched at the falling edge of the clk_ctrl and output signals are sync to
                                                                 falling edge of the clk_ctrl. Otherwise the interface is sync to the rising edge of the clk_ctrl. */
        uint32_t pu_pd_polarity        : 1;  /**< [ 21: 21](R/W) Defines the polarity of the ALE port that in SD works as pull-up/pull-down signal for bit 2 of the
                                                                 DATA.
                                                                 0 - ALE port is a copy of dfi_ale.
                                                                 1 - ALE port is inverted version of dfi_ale. */
        uint32_t reserved_22_31        : 10;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_phy_ctb_rfile_phy_ctrl_s cn; */
};
typedef union cavm_spix_phy_ctb_rfile_phy_ctrl cavm_spix_phy_ctb_rfile_phy_ctrl_t;

static inline uint64_t CAVM_SPIX_PHY_CTB_RFILE_PHY_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_PHY_CTB_RFILE_PHY_CTRL(uint64_t a)
{
    if (a<=1)
        return 0x804000002080ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_PHY_CTB_RFILE_PHY_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_PHY_CTB_RFILE_PHY_CTRL(a) cavm_spix_phy_ctb_rfile_phy_ctrl_t
#define bustype_CAVM_SPIX_PHY_CTB_RFILE_PHY_CTRL(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_PHY_CTB_RFILE_PHY_CTRL(a) "SPIX_PHY_CTB_RFILE_PHY_CTRL"
#define device_bar_CAVM_SPIX_PHY_CTB_RFILE_PHY_CTRL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_PHY_CTB_RFILE_PHY_CTRL(a) (a)
#define arguments_CAVM_SPIX_PHY_CTB_RFILE_PHY_CTRL(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_phy_ctb_rfile_phy_gpio_ctrl_0
 *
 * SPI PHY Ctb Rfile PHY Gpio Control 0 Register
 * This register is a general purpose register. The [31:0]vector is brought to the PHY I/Os. User may
 * choose to use these pins to control any static settings that may be required for
 * connected I/O pads.
 */
union cavm_spix_phy_ctb_rfile_phy_gpio_ctrl_0
{
    uint32_t u;
    struct cavm_spix_phy_ctb_rfile_phy_gpio_ctrl_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t phy_gpio_ctrl_0_value : 32; /**< [ 31:  0](R/W) General purpose register field. The [31:0] vector is brought to the PHY I/Os. User may choose to
                                                                 use these pins to control any static settings that may be required for the connected I/O pads. */
#else /* Word 0 - Little Endian */
        uint32_t phy_gpio_ctrl_0_value : 32; /**< [ 31:  0](R/W) General purpose register field. The [31:0] vector is brought to the PHY I/Os. User may choose to
                                                                 use these pins to control any static settings that may be required for the connected I/O pads. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_phy_ctb_rfile_phy_gpio_ctrl_0_s cn; */
};
typedef union cavm_spix_phy_ctb_rfile_phy_gpio_ctrl_0 cavm_spix_phy_ctb_rfile_phy_gpio_ctrl_0_t;

static inline uint64_t CAVM_SPIX_PHY_CTB_RFILE_PHY_GPIO_CTRL_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_PHY_CTB_RFILE_PHY_GPIO_CTRL_0(uint64_t a)
{
    if (a<=1)
        return 0x804000002088ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_PHY_CTB_RFILE_PHY_GPIO_CTRL_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_PHY_CTB_RFILE_PHY_GPIO_CTRL_0(a) cavm_spix_phy_ctb_rfile_phy_gpio_ctrl_0_t
#define bustype_CAVM_SPIX_PHY_CTB_RFILE_PHY_GPIO_CTRL_0(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_PHY_CTB_RFILE_PHY_GPIO_CTRL_0(a) "SPIX_PHY_CTB_RFILE_PHY_GPIO_CTRL_0"
#define device_bar_CAVM_SPIX_PHY_CTB_RFILE_PHY_GPIO_CTRL_0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_PHY_CTB_RFILE_PHY_GPIO_CTRL_0(a) (a)
#define arguments_CAVM_SPIX_PHY_CTB_RFILE_PHY_GPIO_CTRL_0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_phy_ctb_rfile_phy_gpio_ctrl_1
 *
 * SPI PHY Ctb Rfile PHY Gpio Control 1 Register
 * This register is a general purpose register. The [31:0] vector is brought to the PHY I/Os. User may
 * choose to use these pins to control any static settings that may be required for the
 * connected I/O pads.
 */
union cavm_spix_phy_ctb_rfile_phy_gpio_ctrl_1
{
    uint32_t u;
    struct cavm_spix_phy_ctb_rfile_phy_gpio_ctrl_1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t phy_gpio_ctrl_1_value : 32; /**< [ 31:  0](R/W) General purpose register field. The [31:0] vector is brought to the PHY I/Os. User may choose to
                                                                 use these pins to control any static settings that may be required for the connected IO pads. */
#else /* Word 0 - Little Endian */
        uint32_t phy_gpio_ctrl_1_value : 32; /**< [ 31:  0](R/W) General purpose register field. The [31:0] vector is brought to the PHY I/Os. User may choose to
                                                                 use these pins to control any static settings that may be required for the connected IO pads. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_phy_ctb_rfile_phy_gpio_ctrl_1_s cn; */
};
typedef union cavm_spix_phy_ctb_rfile_phy_gpio_ctrl_1 cavm_spix_phy_ctb_rfile_phy_gpio_ctrl_1_t;

static inline uint64_t CAVM_SPIX_PHY_CTB_RFILE_PHY_GPIO_CTRL_1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_PHY_CTB_RFILE_PHY_GPIO_CTRL_1(uint64_t a)
{
    if (a<=1)
        return 0x80400000208cll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_PHY_CTB_RFILE_PHY_GPIO_CTRL_1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_PHY_CTB_RFILE_PHY_GPIO_CTRL_1(a) cavm_spix_phy_ctb_rfile_phy_gpio_ctrl_1_t
#define bustype_CAVM_SPIX_PHY_CTB_RFILE_PHY_GPIO_CTRL_1(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_PHY_CTB_RFILE_PHY_GPIO_CTRL_1(a) "SPIX_PHY_CTB_RFILE_PHY_GPIO_CTRL_1"
#define device_bar_CAVM_SPIX_PHY_CTB_RFILE_PHY_GPIO_CTRL_1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_PHY_CTB_RFILE_PHY_GPIO_CTRL_1(a) (a)
#define arguments_CAVM_SPIX_PHY_CTB_RFILE_PHY_GPIO_CTRL_1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_phy_ctb_rfile_phy_gpio_status_0
 *
 * SPI PHY Ctb Rfile PHY Gpio Status 0 Register
 * This register is a general purpose register. A [31:0] vector is brought from the PHY I/Os to this
 * register. User may choose to use this as a status register.
 */
union cavm_spix_phy_ctb_rfile_phy_gpio_status_0
{
    uint32_t u;
    struct cavm_spix_phy_ctb_rfile_phy_gpio_status_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t phy_gpio_status_0_value : 32;/**< [ 31:  0](RO) This register is a general purpose register. A [31:0] vector is brought from the PHY IOs to this
                                                                 register. User may choose to use this as a status register. */
#else /* Word 0 - Little Endian */
        uint32_t phy_gpio_status_0_value : 32;/**< [ 31:  0](RO) This register is a general purpose register. A [31:0] vector is brought from the PHY IOs to this
                                                                 register. User may choose to use this as a status register. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_phy_ctb_rfile_phy_gpio_status_0_s cn; */
};
typedef union cavm_spix_phy_ctb_rfile_phy_gpio_status_0 cavm_spix_phy_ctb_rfile_phy_gpio_status_0_t;

static inline uint64_t CAVM_SPIX_PHY_CTB_RFILE_PHY_GPIO_STATUS_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_PHY_CTB_RFILE_PHY_GPIO_STATUS_0(uint64_t a)
{
    if (a<=1)
        return 0x804000002090ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_PHY_CTB_RFILE_PHY_GPIO_STATUS_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_PHY_CTB_RFILE_PHY_GPIO_STATUS_0(a) cavm_spix_phy_ctb_rfile_phy_gpio_status_0_t
#define bustype_CAVM_SPIX_PHY_CTB_RFILE_PHY_GPIO_STATUS_0(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_PHY_CTB_RFILE_PHY_GPIO_STATUS_0(a) "SPIX_PHY_CTB_RFILE_PHY_GPIO_STATUS_0"
#define device_bar_CAVM_SPIX_PHY_CTB_RFILE_PHY_GPIO_STATUS_0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_PHY_CTB_RFILE_PHY_GPIO_STATUS_0(a) (a)
#define arguments_CAVM_SPIX_PHY_CTB_RFILE_PHY_GPIO_STATUS_0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_phy_ctb_rfile_phy_gpio_status_1
 *
 * SPI PHY Ctb Rfile PHY Gpio Status 1 Register
 * This register is a general purpose register. A [31:0] vector is brought from the PHY IOs to this
 * register. User may choose to use this as a status register.
 */
union cavm_spix_phy_ctb_rfile_phy_gpio_status_1
{
    uint32_t u;
    struct cavm_spix_phy_ctb_rfile_phy_gpio_status_1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t phy_gpio_status_1_value : 32;/**< [ 31:  0](RO) This register is a general purpose register. A [31:0] vector is brought from the PHY I/Os to this
                                                                 register. User may choose to use this as a status register. */
#else /* Word 0 - Little Endian */
        uint32_t phy_gpio_status_1_value : 32;/**< [ 31:  0](RO) This register is a general purpose register. A [31:0] vector is brought from the PHY I/Os to this
                                                                 register. User may choose to use this as a status register. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_phy_ctb_rfile_phy_gpio_status_1_s cn; */
};
typedef union cavm_spix_phy_ctb_rfile_phy_gpio_status_1 cavm_spix_phy_ctb_rfile_phy_gpio_status_1_t;

static inline uint64_t CAVM_SPIX_PHY_CTB_RFILE_PHY_GPIO_STATUS_1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_PHY_CTB_RFILE_PHY_GPIO_STATUS_1(uint64_t a)
{
    if (a<=1)
        return 0x804000002094ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_PHY_CTB_RFILE_PHY_GPIO_STATUS_1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_PHY_CTB_RFILE_PHY_GPIO_STATUS_1(a) cavm_spix_phy_ctb_rfile_phy_gpio_status_1_t
#define bustype_CAVM_SPIX_PHY_CTB_RFILE_PHY_GPIO_STATUS_1(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_PHY_CTB_RFILE_PHY_GPIO_STATUS_1(a) "SPIX_PHY_CTB_RFILE_PHY_GPIO_STATUS_1"
#define device_bar_CAVM_SPIX_PHY_CTB_RFILE_PHY_GPIO_STATUS_1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_PHY_CTB_RFILE_PHY_GPIO_STATUS_1(a) (a)
#define arguments_CAVM_SPIX_PHY_CTB_RFILE_PHY_GPIO_STATUS_1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_phy_ctb_rfile_phy_tsel
 *
 * SPI PHY Ctb Rfile PHY Tsel Register
 * This register handles the global control settings for the termination selects for reads.
 * For SD and XSPI controllers this should be disabled.
 */
union cavm_spix_phy_ctb_rfile_phy_tsel
{
    uint32_t u;
    struct cavm_spix_phy_ctb_rfile_phy_tsel_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_24_31        : 8;
        uint32_t tsel_off_value_data   : 4;  /**< [ 23: 20](R/W) Termination select off value for the data. */
        uint32_t tsel_rd_value_data    : 4;  /**< [ 19: 16](R/W) Termination select read value for the data. */
        uint32_t tsel_off_value_dqs    : 4;  /**< [ 15: 12](R/W) Termination select off value for the data strobe. */
        uint32_t tsel_rd_value_dqs     : 4;  /**< [ 11:  8](R/W) Termination select read value for the data strobe. */
        uint32_t reserved_0_7          : 8;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_7          : 8;
        uint32_t tsel_rd_value_dqs     : 4;  /**< [ 11:  8](R/W) Termination select read value for the data strobe. */
        uint32_t tsel_off_value_dqs    : 4;  /**< [ 15: 12](R/W) Termination select off value for the data strobe. */
        uint32_t tsel_rd_value_data    : 4;  /**< [ 19: 16](R/W) Termination select read value for the data. */
        uint32_t tsel_off_value_data   : 4;  /**< [ 23: 20](R/W) Termination select off value for the data. */
        uint32_t reserved_24_31        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_phy_ctb_rfile_phy_tsel_s cn; */
};
typedef union cavm_spix_phy_ctb_rfile_phy_tsel cavm_spix_phy_ctb_rfile_phy_tsel_t;

static inline uint64_t CAVM_SPIX_PHY_CTB_RFILE_PHY_TSEL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_PHY_CTB_RFILE_PHY_TSEL(uint64_t a)
{
    if (a<=1)
        return 0x804000002084ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_PHY_CTB_RFILE_PHY_TSEL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_PHY_CTB_RFILE_PHY_TSEL(a) cavm_spix_phy_ctb_rfile_phy_tsel_t
#define bustype_CAVM_SPIX_PHY_CTB_RFILE_PHY_TSEL(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_PHY_CTB_RFILE_PHY_TSEL(a) "SPIX_PHY_CTB_RFILE_PHY_TSEL"
#define device_bar_CAVM_SPIX_PHY_CTB_RFILE_PHY_TSEL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_PHY_CTB_RFILE_PHY_TSEL(a) (a)
#define arguments_CAVM_SPIX_PHY_CTB_RFILE_PHY_TSEL(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_phy_dataslice_rfile_phy_dll_master_ctrl
 *
 * SPI PHY Dataslice Rfile PHY DLL Master Control Register
 * This register holds the control for the master DLL logic.
 */
union cavm_spix_phy_dataslice_rfile_phy_dll_master_ctrl
{
    uint32_t u;
    struct cavm_spix_phy_dataslice_rfile_phy_dll_master_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_24_31        : 8;
        uint32_t param_dll_bypass_mode : 1;  /**< [ 23: 23](R/W) DLL bypass mode control. Controls the bypass mode of the master and slave DLLs. The
                                                                 [PARAM_DLL_BYPASS_MODE] is intended to be used only for debug.
                                                                 0 = Normal operational mode. DLL functioning in normal mode of operation where the slave delay
                                                                 line settings are used as fractional delay of the master delay line encoder reading of the number
                                                                 of delays in one cycle.
                                                                 1 = Bypass mode on. Delays are defined in
                                                                 SPI()_PHY_DATASLICE_PHY_DLL_SLAVE_CTRL. Master DLL is disabled with only
                                                                 1 delay element in its delay line. The slave delay lines decode delays in absolute delay
                                                                 elements rather than as fractional delays. [DLL_LOCK] (bit [0]) of the
                                                                 SPI()_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_0
                                                                 parameter will be forced high. */
        uint32_t param_phase_detect_sel : 3; /**< [ 22: 20](R/W) Selects the number of delay elements to be inserted between the phase detect flip-flops.
                                                                 Defaults to 0x0 although the recommended value is 2 elements but if a lock condition is not
                                                                 detected, the user should increase the number of delay elements.
                                                                 0x0 = One delay element.
                                                                 0x1 = Two delay element.
                                                                 0x2 = Three delay element.
                                                                 0x3 = Four delay element.
                                                                 0x4 = Five delay element.
                                                                 0x5 = Six delay element.
                                                                 0x6 = Seven delay element.
                                                                 0x7 = Eight delay element. */
        uint32_t reserved_19           : 1;
        uint32_t param_dll_lock_num    : 3;  /**< [ 18: 16](R/W) Holds the number of consecutive increment or decrement indications that will trigger an unlock
                                                                 condition and increment the dll_unlock_cnt field (bits [7:3]) and either the lock_dec_dbg
                                                                 (bits [23:16]) or lock_inc_dbg (bits [31:24]) fields of the
                                                                 SPI()_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_0 parameter. */
        uint32_t reserved_8_15         : 8;
        uint32_t param_dll_start_point : 8;  /**< [  7:  0](R/W) This value is the initial delay value for the DLL. This value is also used as the increment value
                                                                 if the initial value is less than a half-clock cycle. This field should be set such that it is not
                                                                 greater than 7/8ths of a clock period given the worst case element delay. For example, if the
                                                                 frequency is 200MHz (5ns cycle time) with a worst case element 80ps delay, this field should be
                                                                 set to = 5 * (7/8) / .080 = 54 elements. This calculation helps determine the start point which
                                                                 achieves the fastest lock. However, a small value such as 0x04 may be used instead to ensure that
                                                                 the DLL does not lock on a harmonic. Note that with a small value like this, the initial lock time
                                                                 will be longer. Value smaller than 0x04 may cause no lock by DLL. */
#else /* Word 0 - Little Endian */
        uint32_t param_dll_start_point : 8;  /**< [  7:  0](R/W) This value is the initial delay value for the DLL. This value is also used as the increment value
                                                                 if the initial value is less than a half-clock cycle. This field should be set such that it is not
                                                                 greater than 7/8ths of a clock period given the worst case element delay. For example, if the
                                                                 frequency is 200MHz (5ns cycle time) with a worst case element 80ps delay, this field should be
                                                                 set to = 5 * (7/8) / .080 = 54 elements. This calculation helps determine the start point which
                                                                 achieves the fastest lock. However, a small value such as 0x04 may be used instead to ensure that
                                                                 the DLL does not lock on a harmonic. Note that with a small value like this, the initial lock time
                                                                 will be longer. Value smaller than 0x04 may cause no lock by DLL. */
        uint32_t reserved_8_15         : 8;
        uint32_t param_dll_lock_num    : 3;  /**< [ 18: 16](R/W) Holds the number of consecutive increment or decrement indications that will trigger an unlock
                                                                 condition and increment the dll_unlock_cnt field (bits [7:3]) and either the lock_dec_dbg
                                                                 (bits [23:16]) or lock_inc_dbg (bits [31:24]) fields of the
                                                                 SPI()_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_0 parameter. */
        uint32_t reserved_19           : 1;
        uint32_t param_phase_detect_sel : 3; /**< [ 22: 20](R/W) Selects the number of delay elements to be inserted between the phase detect flip-flops.
                                                                 Defaults to 0x0 although the recommended value is 2 elements but if a lock condition is not
                                                                 detected, the user should increase the number of delay elements.
                                                                 0x0 = One delay element.
                                                                 0x1 = Two delay element.
                                                                 0x2 = Three delay element.
                                                                 0x3 = Four delay element.
                                                                 0x4 = Five delay element.
                                                                 0x5 = Six delay element.
                                                                 0x6 = Seven delay element.
                                                                 0x7 = Eight delay element. */
        uint32_t param_dll_bypass_mode : 1;  /**< [ 23: 23](R/W) DLL bypass mode control. Controls the bypass mode of the master and slave DLLs. The
                                                                 [PARAM_DLL_BYPASS_MODE] is intended to be used only for debug.
                                                                 0 = Normal operational mode. DLL functioning in normal mode of operation where the slave delay
                                                                 line settings are used as fractional delay of the master delay line encoder reading of the number
                                                                 of delays in one cycle.
                                                                 1 = Bypass mode on. Delays are defined in
                                                                 SPI()_PHY_DATASLICE_PHY_DLL_SLAVE_CTRL. Master DLL is disabled with only
                                                                 1 delay element in its delay line. The slave delay lines decode delays in absolute delay
                                                                 elements rather than as fractional delays. [DLL_LOCK] (bit [0]) of the
                                                                 SPI()_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_0
                                                                 parameter will be forced high. */
        uint32_t reserved_24_31        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_phy_dataslice_rfile_phy_dll_master_ctrl_s cn; */
};
typedef union cavm_spix_phy_dataslice_rfile_phy_dll_master_ctrl cavm_spix_phy_dataslice_rfile_phy_dll_master_ctrl_t;

static inline uint64_t CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_MASTER_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_MASTER_CTRL(uint64_t a)
{
    if (a<=1)
        return 0x80400000200cll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_PHY_DATASLICE_RFILE_PHY_DLL_MASTER_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_MASTER_CTRL(a) cavm_spix_phy_dataslice_rfile_phy_dll_master_ctrl_t
#define bustype_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_MASTER_CTRL(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_MASTER_CTRL(a) "SPIX_PHY_DATASLICE_RFILE_PHY_DLL_MASTER_CTRL"
#define device_bar_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_MASTER_CTRL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_MASTER_CTRL(a) (a)
#define arguments_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_MASTER_CTRL(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_phy_dataslice_rfile_phy_dll_obs_reg_0
 *
 * SPI PHY Dataslice Rfile PHY DLL Obs Reg 0 Register
 * This register holds the following observable points in the PHY.
 */
union cavm_spix_phy_dataslice_rfile_phy_dll_obs_reg_0
{
    uint32_t u;
    struct cavm_spix_phy_dataslice_rfile_phy_dll_obs_reg_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t lock_inc_dbg          : 8;  /**< [ 31: 24](RO) Holds the state of the cumulative dll_lock_inc register when the dll_unlock_cnt field(bits [7:3])
                                                                 of this parameter was triggered to increment or was last saturated at a value of 0x1f. */
        uint32_t lock_dec_dbg          : 8;  /**< [ 23: 16](RO) Holds the state of the cumulative dll_lock_dec register when the dll_unlock_cnt field(bits [7:3])
                                                                 of this parameter was triggered to decrement or was last saturated at a value of 0x1f. */
        uint32_t dll_lock_value        : 8;  /**< [ 15:  8](RO) Reports the number of delay elements that the DLL has determined for lock in either full clock or
                                                                 half clock mode. In full clock mode, this value equals the number of delay elements in one cycle.
                                                                 In half clock mode, this value equals the number of delay elements in one half clock cycle. In
                                                                 saturation mode, this value equals the maximum number of delay elements. The slaves use this value
                                                                 to set up their delays for the clk_wr and read DQS signals. This value is valid only when locking
                                                                 mechanism is done. */
        uint32_t dll_unlock_cnt        : 5;  /**< [  7:  3](RO) Reports the number of times that the master DLL consecutive increment or decrement value
                                                                 programmed into the param_dll_lock_num field (bits [18:16]) of the phy_dll_master_ctrl_reg
                                                                 register has been triggered. The dll_unlock_cnt will saturate at a value of 0x1f. Asserting the
                                                                 dll_rst_n signal will reset this counter to 0. */
        uint32_t dll_locked_mode       : 2;  /**< [  2:  1](RO) Indicates status of DLL. Defines the mode in which the DLL has achieved the lock.
                                                                 0x0 = Full clock mode. The master delay line was long enough to lock on one full clock cycle of
                                                                 delay. In this mode, the dll_lock_value field (bits [15:8]) of this parameter indicates the number
                                                                 of delays in full clock cycles.
                                                                 0x1 = Reserved.
                                                                 0x2 = Half clock mode. The master delay line was not long enough to lock one full cycle of delay
                                                                 but could lock on a half-cycle of delay. In this mode, the dll_lock_value field (bits [15:8]) of
                                                                 this parameter indicates the number of delays in one half clock cycles.
                                                                 0x3 = Saturation mode. The master delay line was not long enough to lock on a full or a half-clock
                                                                 cycle. In this mode, the encoder value is fixed at the maximum delay line setting and the master
                                                                 DLL will be disabled. The slave delay lines continue to use the fractional delays based upon the
                                                                 fixed saturation value of the delay line. */
        uint32_t dll_lock              : 1;  /**< [  0:  0](RO) Indicates status of DLL. It indicates the DLL locking when the DLL lock logic found (not inc AND
                                                                 not dec) OR (an inc then dec) OR (a dec then inc). When param_dll_start_point is set smaller than
                                                                 half clock period the first found (a dec then inc) isn't the really DLL locking point but dll_lock
                                                                 is asserted.
                                                                 0 = DLL has not locked.
                                                                 1 = DLL is locked. */
#else /* Word 0 - Little Endian */
        uint32_t dll_lock              : 1;  /**< [  0:  0](RO) Indicates status of DLL. It indicates the DLL locking when the DLL lock logic found (not inc AND
                                                                 not dec) OR (an inc then dec) OR (a dec then inc). When param_dll_start_point is set smaller than
                                                                 half clock period the first found (a dec then inc) isn't the really DLL locking point but dll_lock
                                                                 is asserted.
                                                                 0 = DLL has not locked.
                                                                 1 = DLL is locked. */
        uint32_t dll_locked_mode       : 2;  /**< [  2:  1](RO) Indicates status of DLL. Defines the mode in which the DLL has achieved the lock.
                                                                 0x0 = Full clock mode. The master delay line was long enough to lock on one full clock cycle of
                                                                 delay. In this mode, the dll_lock_value field (bits [15:8]) of this parameter indicates the number
                                                                 of delays in full clock cycles.
                                                                 0x1 = Reserved.
                                                                 0x2 = Half clock mode. The master delay line was not long enough to lock one full cycle of delay
                                                                 but could lock on a half-cycle of delay. In this mode, the dll_lock_value field (bits [15:8]) of
                                                                 this parameter indicates the number of delays in one half clock cycles.
                                                                 0x3 = Saturation mode. The master delay line was not long enough to lock on a full or a half-clock
                                                                 cycle. In this mode, the encoder value is fixed at the maximum delay line setting and the master
                                                                 DLL will be disabled. The slave delay lines continue to use the fractional delays based upon the
                                                                 fixed saturation value of the delay line. */
        uint32_t dll_unlock_cnt        : 5;  /**< [  7:  3](RO) Reports the number of times that the master DLL consecutive increment or decrement value
                                                                 programmed into the param_dll_lock_num field (bits [18:16]) of the phy_dll_master_ctrl_reg
                                                                 register has been triggered. The dll_unlock_cnt will saturate at a value of 0x1f. Asserting the
                                                                 dll_rst_n signal will reset this counter to 0. */
        uint32_t dll_lock_value        : 8;  /**< [ 15:  8](RO) Reports the number of delay elements that the DLL has determined for lock in either full clock or
                                                                 half clock mode. In full clock mode, this value equals the number of delay elements in one cycle.
                                                                 In half clock mode, this value equals the number of delay elements in one half clock cycle. In
                                                                 saturation mode, this value equals the maximum number of delay elements. The slaves use this value
                                                                 to set up their delays for the clk_wr and read DQS signals. This value is valid only when locking
                                                                 mechanism is done. */
        uint32_t lock_dec_dbg          : 8;  /**< [ 23: 16](RO) Holds the state of the cumulative dll_lock_dec register when the dll_unlock_cnt field(bits [7:3])
                                                                 of this parameter was triggered to decrement or was last saturated at a value of 0x1f. */
        uint32_t lock_inc_dbg          : 8;  /**< [ 31: 24](RO) Holds the state of the cumulative dll_lock_inc register when the dll_unlock_cnt field(bits [7:3])
                                                                 of this parameter was triggered to increment or was last saturated at a value of 0x1f. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_phy_dataslice_rfile_phy_dll_obs_reg_0_s cn; */
};
typedef union cavm_spix_phy_dataslice_rfile_phy_dll_obs_reg_0 cavm_spix_phy_dataslice_rfile_phy_dll_obs_reg_0_t;

static inline uint64_t CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_0(uint64_t a)
{
    if (a<=1)
        return 0x80400000201cll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_0(a) cavm_spix_phy_dataslice_rfile_phy_dll_obs_reg_0_t
#define bustype_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_0(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_0(a) "SPIX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_0"
#define device_bar_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_0(a) (a)
#define arguments_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_phy_dataslice_rfile_phy_dll_obs_reg_1
 *
 * SPI PHY Dataslice Rfile PHY DLL Obs Reg 1 Register
 * This register holds the following observable points in the PHY.
 */
union cavm_spix_phy_dataslice_rfile_phy_dll_obs_reg_1
{
    uint32_t u;
    struct cavm_spix_phy_dataslice_rfile_phy_dll_obs_reg_1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_24_31        : 8;
        uint32_t decoder_out_wr        : 8;  /**< [ 23: 16](RO) Holds the encoded value for the clk_wr delay line for this slice. */
        uint32_t decoder_out_rd_cmd    : 8;  /**< [ 15:  8](RO) Holds the encoded value for the CMD read delay line for this slice. */
        uint32_t decoder_out_rd        : 8;  /**< [  7:  0](RO) Holds the encoded value for the read delay line for this slice. */
#else /* Word 0 - Little Endian */
        uint32_t decoder_out_rd        : 8;  /**< [  7:  0](RO) Holds the encoded value for the read delay line for this slice. */
        uint32_t decoder_out_rd_cmd    : 8;  /**< [ 15:  8](RO) Holds the encoded value for the CMD read delay line for this slice. */
        uint32_t decoder_out_wr        : 8;  /**< [ 23: 16](RO) Holds the encoded value for the clk_wr delay line for this slice. */
        uint32_t reserved_24_31        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_phy_dataslice_rfile_phy_dll_obs_reg_1_s cn; */
};
typedef union cavm_spix_phy_dataslice_rfile_phy_dll_obs_reg_1 cavm_spix_phy_dataslice_rfile_phy_dll_obs_reg_1_t;

static inline uint64_t CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_1(uint64_t a)
{
    if (a<=1)
        return 0x804000002020ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_1(a) cavm_spix_phy_dataslice_rfile_phy_dll_obs_reg_1_t
#define bustype_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_1(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_1(a) "SPIX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_1"
#define device_bar_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_1(a) (a)
#define arguments_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_phy_dataslice_rfile_phy_dll_obs_reg_2
 *
 * SPI PHY Dataslice Rfile PHY DLL Obs Reg 2 Register
 * This register holds the following observable points in the PHY.
 */
union cavm_spix_phy_dataslice_rfile_phy_dll_obs_reg_2
{
    uint32_t u;
    struct cavm_spix_phy_dataslice_rfile_phy_dll_obs_reg_2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t decoder_out_wrdqs     : 8;  /**< [  7:  0](RO) Holds the encoded value for the clk_wrdqs delay line for this slice. */
#else /* Word 0 - Little Endian */
        uint32_t decoder_out_wrdqs     : 8;  /**< [  7:  0](RO) Holds the encoded value for the clk_wrdqs delay line for this slice. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_phy_dataslice_rfile_phy_dll_obs_reg_2_s cn; */
};
typedef union cavm_spix_phy_dataslice_rfile_phy_dll_obs_reg_2 cavm_spix_phy_dataslice_rfile_phy_dll_obs_reg_2_t;

static inline uint64_t CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_2(uint64_t a)
{
    if (a<=1)
        return 0x804000002024ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_2(a) cavm_spix_phy_dataslice_rfile_phy_dll_obs_reg_2_t
#define bustype_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_2(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_2(a) "SPIX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_2"
#define device_bar_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_2(a) (a)
#define arguments_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_2(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_phy_dataslice_rfile_phy_dll_slave_ctrl
 *
 * SPI PHY Dataslice Rfile PHY DLL Slave Control Register
 * This register holds the control for the slave DLL logic.
 */
union cavm_spix_phy_dataslice_rfile_phy_dll_slave_ctrl
{
    uint32_t u;
    struct cavm_spix_phy_dataslice_rfile_phy_dll_slave_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t read_dqs_cmd_delay    : 8;  /**< [ 31: 24](R/W) Controls the read command DQS delay which adjusts the timing in 1/256th of the clock period when in
                                                                 normal DLL locked mode. In bypass mode, this field directly programs the number of delay elements. */
        uint32_t clk_wrdqs_delay       : 8;  /**< [ 23: 16](R/W) Controls the clk_wrdqs delay line which adjusts the write DQS timing in 1/256th steps of the clock
                                                                 period in normal DLL locked mode. In bypass mode, this field directly programs the number of delay
                                                                 elements. clk_wrdqs delay line is used to adjust the write CMD bit timing. */
        uint32_t clk_wr_delay          : 8;  /**< [ 15:  8](R/W) Controls the clk_wr delay line which adjusts the write DQ bit timing in 1/256th steps of the clock
                                                                 period in normal DLL locked mode. In bypass mode, this field directly programs the number of
                                                                 delay elements. */
        uint32_t read_dqs_delay        : 8;  /**< [  7:  0](R/W) Controls the read DQS delay which adjusts the timing in 1/256th of the clock period when in normal
                                                                 DLL locked mode. In bypass mode, this field directly programs the number of delay elements. */
#else /* Word 0 - Little Endian */
        uint32_t read_dqs_delay        : 8;  /**< [  7:  0](R/W) Controls the read DQS delay which adjusts the timing in 1/256th of the clock period when in normal
                                                                 DLL locked mode. In bypass mode, this field directly programs the number of delay elements. */
        uint32_t clk_wr_delay          : 8;  /**< [ 15:  8](R/W) Controls the clk_wr delay line which adjusts the write DQ bit timing in 1/256th steps of the clock
                                                                 period in normal DLL locked mode. In bypass mode, this field directly programs the number of
                                                                 delay elements. */
        uint32_t clk_wrdqs_delay       : 8;  /**< [ 23: 16](R/W) Controls the clk_wrdqs delay line which adjusts the write DQS timing in 1/256th steps of the clock
                                                                 period in normal DLL locked mode. In bypass mode, this field directly programs the number of delay
                                                                 elements. clk_wrdqs delay line is used to adjust the write CMD bit timing. */
        uint32_t read_dqs_cmd_delay    : 8;  /**< [ 31: 24](R/W) Controls the read command DQS delay which adjusts the timing in 1/256th of the clock period when in
                                                                 normal DLL locked mode. In bypass mode, this field directly programs the number of delay elements. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_phy_dataslice_rfile_phy_dll_slave_ctrl_s cn; */
};
typedef union cavm_spix_phy_dataslice_rfile_phy_dll_slave_ctrl cavm_spix_phy_dataslice_rfile_phy_dll_slave_ctrl_t;

static inline uint64_t CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_SLAVE_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_SLAVE_CTRL(uint64_t a)
{
    if (a<=1)
        return 0x804000002010ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_PHY_DATASLICE_RFILE_PHY_DLL_SLAVE_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_SLAVE_CTRL(a) cavm_spix_phy_dataslice_rfile_phy_dll_slave_ctrl_t
#define bustype_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_SLAVE_CTRL(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_SLAVE_CTRL(a) "SPIX_PHY_DATASLICE_RFILE_PHY_DLL_SLAVE_CTRL"
#define device_bar_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_SLAVE_CTRL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_SLAVE_CTRL(a) (a)
#define arguments_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_SLAVE_CTRL(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_phy_dataslice_rfile_phy_dq_timing
 *
 * SPI PHY Dataslice Rfile PHY Dq Timing Register
 * This register controls the DQ related timing.
 */
union cavm_spix_phy_dataslice_rfile_phy_dq_timing
{
    uint32_t u;
    struct cavm_spix_phy_dataslice_rfile_phy_dq_timing_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t io_mask_always_on     : 1;  /**< [ 31: 31](R/W) Defines if the I/O mask for DATA/CMD is always enabled.
                                                                 0 = disable i.e. start/end defines the I/O mask functionality. Recommended setting for SD/eMMC
                                                                 controller.
                                                                 1 = I/O mask is always ON. */
        uint32_t reserved_30           : 1;
        uint32_t io_mask_end           : 3;  /**< [ 29: 27](R/W) Adjusts the ending point of the DQ/CMD pad input mask enable. Defines the delay after
                                                                 dfi_wrdata_en/dfi_wrcmd_en goes high when the mask is disabled (data/cmd are blocked and 1
                                                                 are passed to PHY). */
        uint32_t io_mask_start         : 3;  /**< [ 26: 24](R/W) Adjusts the starting point of the DQ/CMD pad input mask enable. Defines the delay after
                                                                 dfi_wrdata_en/dfi_wrcmd_en goes low when the mask is enabled (data/cmd are passed to PHY). */
        uint32_t data_clkperiod_delay  : 8;  /**< [ 23: 16](R/W) Defines additional latency on the write datapath. It also adds a clock cycle delay for the data
                                                                 OE path which is equivalent of adding 2 to the [DATA_SELECT_OE_END] and [DATA_SELECT_OE_START]. */
        uint32_t data_select_tsel_start : 4; /**< [ 15: 12](R/W) Defines the DQ pad dynamic termination select enable time. Larger values add greater delay to when
                                                                 tsel turns on. Each bit changes the output enable time by a 1/2 cycle resolution. */
        uint32_t data_select_tsel_end  : 4;  /**< [ 11:  8](R/W) Defines the DQ pad dynamic termination select disable time. Larger values increase the delay to
                                                                 when tsel turns off. Each bit changes the output enable time by a 1/2 cycle resolution. */
        uint32_t reserved_7            : 1;
        uint32_t data_select_oe_start  : 3;  /**< [  6:  4](R/W) Adjusts the starting point of the DQ pad output enable window. Lower numbers pull the rising edge
                                                                 earlier in time and larger numbers cause the rising edge to be delayed. Each bit changes the
                                                                 output enable time by a 1/2 cycle resolution. */
        uint32_t reserved_3            : 1;
        uint32_t data_select_oe_end    : 3;  /**< [  2:  0](R/W) Adjusts the ending point of the DQ pad output enable window. Lower numbers pull the falling edge
                                                                 earlier in time and larger numbers cause the falling edge to be delayed. Each bit changes the
                                                                 output enable time by a 1/2 cycle resolution. */
#else /* Word 0 - Little Endian */
        uint32_t data_select_oe_end    : 3;  /**< [  2:  0](R/W) Adjusts the ending point of the DQ pad output enable window. Lower numbers pull the falling edge
                                                                 earlier in time and larger numbers cause the falling edge to be delayed. Each bit changes the
                                                                 output enable time by a 1/2 cycle resolution. */
        uint32_t reserved_3            : 1;
        uint32_t data_select_oe_start  : 3;  /**< [  6:  4](R/W) Adjusts the starting point of the DQ pad output enable window. Lower numbers pull the rising edge
                                                                 earlier in time and larger numbers cause the rising edge to be delayed. Each bit changes the
                                                                 output enable time by a 1/2 cycle resolution. */
        uint32_t reserved_7            : 1;
        uint32_t data_select_tsel_end  : 4;  /**< [ 11:  8](R/W) Defines the DQ pad dynamic termination select disable time. Larger values increase the delay to
                                                                 when tsel turns off. Each bit changes the output enable time by a 1/2 cycle resolution. */
        uint32_t data_select_tsel_start : 4; /**< [ 15: 12](R/W) Defines the DQ pad dynamic termination select enable time. Larger values add greater delay to when
                                                                 tsel turns on. Each bit changes the output enable time by a 1/2 cycle resolution. */
        uint32_t data_clkperiod_delay  : 8;  /**< [ 23: 16](R/W) Defines additional latency on the write datapath. It also adds a clock cycle delay for the data
                                                                 OE path which is equivalent of adding 2 to the [DATA_SELECT_OE_END] and [DATA_SELECT_OE_START]. */
        uint32_t io_mask_start         : 3;  /**< [ 26: 24](R/W) Adjusts the starting point of the DQ/CMD pad input mask enable. Defines the delay after
                                                                 dfi_wrdata_en/dfi_wrcmd_en goes low when the mask is enabled (data/cmd are passed to PHY). */
        uint32_t io_mask_end           : 3;  /**< [ 29: 27](R/W) Adjusts the ending point of the DQ/CMD pad input mask enable. Defines the delay after
                                                                 dfi_wrdata_en/dfi_wrcmd_en goes high when the mask is disabled (data/cmd are blocked and 1
                                                                 are passed to PHY). */
        uint32_t reserved_30           : 1;
        uint32_t io_mask_always_on     : 1;  /**< [ 31: 31](R/W) Defines if the I/O mask for DATA/CMD is always enabled.
                                                                 0 = disable i.e. start/end defines the I/O mask functionality. Recommended setting for SD/eMMC
                                                                 controller.
                                                                 1 = I/O mask is always ON. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_phy_dataslice_rfile_phy_dq_timing_s cn; */
};
typedef union cavm_spix_phy_dataslice_rfile_phy_dq_timing cavm_spix_phy_dataslice_rfile_phy_dq_timing_t;

static inline uint64_t CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_DQ_TIMING(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_DQ_TIMING(uint64_t a)
{
    if (a<=1)
        return 0x804000002000ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_PHY_DATASLICE_RFILE_PHY_DQ_TIMING", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_DQ_TIMING(a) cavm_spix_phy_dataslice_rfile_phy_dq_timing_t
#define bustype_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_DQ_TIMING(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_DQ_TIMING(a) "SPIX_PHY_DATASLICE_RFILE_PHY_DQ_TIMING"
#define device_bar_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_DQ_TIMING(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_DQ_TIMING(a) (a)
#define arguments_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_DQ_TIMING(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_phy_dataslice_rfile_phy_dqs_timing
 *
 * SPI PHY Dataslice Rfile PHY DQS Timing Register
 * This register controls the DQS related timing.
 */
union cavm_spix_phy_dataslice_rfile_phy_dqs_timing
{
    uint32_t u;
    struct cavm_spix_phy_dataslice_rfile_phy_dqs_timing_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_24_31        : 8;
        uint32_t dqs_clkperiod_delay   : 1;  /**< [ 23: 23](R/W) Defines additional latency on the write DQS path. It also adds a clock cycle delay for the DQS OE
                                                                 path which is equivalent of adding 2 to the [DQS_SELECT_OE_END] and [DQS_SELECT_OE_START]. */
        uint32_t use_ext_lpbk_dqs      : 1;  /**< [ 22: 22](R/W) Bit to choose lpbk_dqs to capture data for reads. It is valid when [USE_PHONY_DQS] and
                                                                 [USE_LPBK_DQS] fields are set high.
                                                                 0 = Use internal lpbk_dqs (mem_rebar_ipad) for data capture.
                                                                 1 = Use external lpbk_dqs (lpbk_dqs connected to the lpbk_dqs_IO PAD) for data capture. */
        uint32_t use_lpbk_dqs          : 1;  /**< [ 21: 21](R/W) Bit to choose lpbk_dqs to capture data for reads. It is valid when [USE_PHONY_DQS] is set high.
                                                                 0 = Use phony DQS for data capture.
                                                                 1 = Use lpbk_dqs for data capture. Recommended setting for SD/eMMC controller. */
        uint32_t use_phony_dqs         : 1;  /**< [ 20: 20](R/W) Bit to choose lpbk_dqs or phony DQS (generated in the control slice logic) or DQS from the device
                                                                 to capture data for reads.
                                                                 0 = Use DQS from device for data capture.
                                                                 1 = Use phony DQS or lpbk_dqs for data capture. Bit 21 of the phy_dqs_timing_reg is used the
                                                                 choose the source signal. */
        uint32_t use_phony_dqs_cmd     : 1;  /**< [ 19: 19](R/W) Bit to choose phony DQS (or lpbk_dqs) from the control slice logic or DQS from the device to
                                                                 capture command data for reads.
                                                                 0 = Use DQS from device for command data capture.
                                                                 1 = Use phony DQS or lpbk_dqs for command data capture. */
        uint32_t reserved_17_18        : 2;
        uint32_t phony_dqs_sel         : 1;  /**< [ 16: 16](R/W) If this bit is cleared the phony_dqs is synchronous with rising edge of the clk_phy before sending
                                                                 to the entry flops. If this bit is set high the phony_dqs is synchronous with falling edge of
                                                                 clk_phy before sending to the entry flops. */
        uint32_t dqs_select_tsel_start : 4;  /**< [ 15: 12](R/W) Defines the DQ pad dynamic termination select enable time. Larger values add greater delay to when
                                                                 tsel turns on. Each bit changes the output enable time by a 1/2 cycle resolution. */
        uint32_t dqs_select_tsel_end   : 4;  /**< [ 11:  8](R/W) Defines the DQ pad dynamic termination select disable time. Larger values increase the delay to
                                                                 when tsel turns off. Each bit changes the output enable time by a 1/2 cycle resolution. */
        uint32_t dqs_select_oe_start   : 4;  /**< [  7:  4](R/W) Adjusts the starting point of the DQS pad output enable window. Lower numbers pull the rising edge
                                                                 earlier in time and larger numbers cause the rising edge to be delayed. Each bit changes the
                                                                 output enable time by a 1/2 cycle resolution. */
        uint32_t dqs_select_oe_end     : 4;  /**< [  3:  0](R/W) Adjusts the ending point of the DQS pad output enable window. Lower numbers pull the falling edge
                                                                 earlier in time and larger numbers cause the falling edge to be delayed. Each bit changes the
                                                                 output enable time by a 1/2 cycle resolution. This field must be set to at least the value of bits
                                                                 [7:4]+2 to prevent disabling the pad before the data is completely written. */
#else /* Word 0 - Little Endian */
        uint32_t dqs_select_oe_end     : 4;  /**< [  3:  0](R/W) Adjusts the ending point of the DQS pad output enable window. Lower numbers pull the falling edge
                                                                 earlier in time and larger numbers cause the falling edge to be delayed. Each bit changes the
                                                                 output enable time by a 1/2 cycle resolution. This field must be set to at least the value of bits
                                                                 [7:4]+2 to prevent disabling the pad before the data is completely written. */
        uint32_t dqs_select_oe_start   : 4;  /**< [  7:  4](R/W) Adjusts the starting point of the DQS pad output enable window. Lower numbers pull the rising edge
                                                                 earlier in time and larger numbers cause the rising edge to be delayed. Each bit changes the
                                                                 output enable time by a 1/2 cycle resolution. */
        uint32_t dqs_select_tsel_end   : 4;  /**< [ 11:  8](R/W) Defines the DQ pad dynamic termination select disable time. Larger values increase the delay to
                                                                 when tsel turns off. Each bit changes the output enable time by a 1/2 cycle resolution. */
        uint32_t dqs_select_tsel_start : 4;  /**< [ 15: 12](R/W) Defines the DQ pad dynamic termination select enable time. Larger values add greater delay to when
                                                                 tsel turns on. Each bit changes the output enable time by a 1/2 cycle resolution. */
        uint32_t phony_dqs_sel         : 1;  /**< [ 16: 16](R/W) If this bit is cleared the phony_dqs is synchronous with rising edge of the clk_phy before sending
                                                                 to the entry flops. If this bit is set high the phony_dqs is synchronous with falling edge of
                                                                 clk_phy before sending to the entry flops. */
        uint32_t reserved_17_18        : 2;
        uint32_t use_phony_dqs_cmd     : 1;  /**< [ 19: 19](R/W) Bit to choose phony DQS (or lpbk_dqs) from the control slice logic or DQS from the device to
                                                                 capture command data for reads.
                                                                 0 = Use DQS from device for command data capture.
                                                                 1 = Use phony DQS or lpbk_dqs for command data capture. */
        uint32_t use_phony_dqs         : 1;  /**< [ 20: 20](R/W) Bit to choose lpbk_dqs or phony DQS (generated in the control slice logic) or DQS from the device
                                                                 to capture data for reads.
                                                                 0 = Use DQS from device for data capture.
                                                                 1 = Use phony DQS or lpbk_dqs for data capture. Bit 21 of the phy_dqs_timing_reg is used the
                                                                 choose the source signal. */
        uint32_t use_lpbk_dqs          : 1;  /**< [ 21: 21](R/W) Bit to choose lpbk_dqs to capture data for reads. It is valid when [USE_PHONY_DQS] is set high.
                                                                 0 = Use phony DQS for data capture.
                                                                 1 = Use lpbk_dqs for data capture. Recommended setting for SD/eMMC controller. */
        uint32_t use_ext_lpbk_dqs      : 1;  /**< [ 22: 22](R/W) Bit to choose lpbk_dqs to capture data for reads. It is valid when [USE_PHONY_DQS] and
                                                                 [USE_LPBK_DQS] fields are set high.
                                                                 0 = Use internal lpbk_dqs (mem_rebar_ipad) for data capture.
                                                                 1 = Use external lpbk_dqs (lpbk_dqs connected to the lpbk_dqs_IO PAD) for data capture. */
        uint32_t dqs_clkperiod_delay   : 1;  /**< [ 23: 23](R/W) Defines additional latency on the write DQS path. It also adds a clock cycle delay for the DQS OE
                                                                 path which is equivalent of adding 2 to the [DQS_SELECT_OE_END] and [DQS_SELECT_OE_START]. */
        uint32_t reserved_24_31        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_phy_dataslice_rfile_phy_dqs_timing_s cn; */
};
typedef union cavm_spix_phy_dataslice_rfile_phy_dqs_timing cavm_spix_phy_dataslice_rfile_phy_dqs_timing_t;

static inline uint64_t CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_DQS_TIMING(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_DQS_TIMING(uint64_t a)
{
    if (a<=1)
        return 0x804000002004ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_PHY_DATASLICE_RFILE_PHY_DQS_TIMING", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_DQS_TIMING(a) cavm_spix_phy_dataslice_rfile_phy_dqs_timing_t
#define bustype_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_DQS_TIMING(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_DQS_TIMING(a) "SPIX_PHY_DATASLICE_RFILE_PHY_DQS_TIMING"
#define device_bar_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_DQS_TIMING(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_DQS_TIMING(a) (a)
#define arguments_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_DQS_TIMING(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_phy_dataslice_rfile_phy_features
 *
 * SPI PHY Dataslice Rfile PHY Features Register
 * This register shows available hardware features.
 */
union cavm_spix_phy_dataslice_rfile_phy_features
{
    uint32_t u;
    struct cavm_spix_phy_dataslice_rfile_phy_features_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t asf_sup               : 1;  /**< [ 15: 15](RO) Support for Automotive Safety Feature. */
        uint32_t pll_sup               : 1;  /**< [ 14: 14](RO) Support for PLL. */
        uint32_t jtag_sup              : 1;  /**< [ 13: 13](RO) Support for JTAG muxes. */
        uint32_t ext_lpbk_dqs          : 1;  /**< [ 12: 12](RO) Support for external LPBK_DQS I/O pad. */
        uint32_t reg_intf              : 1;  /**< [ 11: 11](RO) SFR interface type.  This is an encoded value. 0 = DFI. 1 = APB. */
        uint32_t per_bit_deskew        : 1;  /**< [ 10: 10](RO) Support for per-bit deskew. */
        uint32_t dfi_clock_ratio       : 1;  /**< [  9:  9](RO) Support for clock ratio on DFI interface. This is an encoded value.
                                                                 0 = 1:1.
                                                                 1 = 1:2. */
        uint32_t aging                 : 1;  /**< [  8:  8](RO) Support for aging in delay lines. */
        uint32_t dll_tap_num           : 1;  /**< [  7:  7](RO) Number of taps in delay line. This is an encoded value. 0 = 128. 1 = 256. */
        uint32_t bank_num              : 2;  /**< [  6:  5](RO) Maximum number of banks supported by hardware. This is an encoded value.
                                                                 0x0 = One bank.
                                                                 0x1 = Two banks.
                                                                 0x2 = Four banks.
                                                                 0x3 = Eight banks. */
        uint32_t sd_emmc               : 1;  /**< [  4:  4](RO) Support for SD/eMMC. */
        uint32_t spi                   : 1;  /**< [  3:  3](RO) Support for XSPI. */
        uint32_t sdr_16bit             : 1;  /**< [  2:  2](RO) Support for 16bit in ONFI SDR work mode. */
        uint32_t onfi_41               : 1;  /**< [  1:  1](RO) Support for ONFI4.1 - NAND Flash. */
        uint32_t onfi_40               : 1;  /**< [  0:  0](RO) Support for ONFI4.0 - NAND Flash. */
#else /* Word 0 - Little Endian */
        uint32_t onfi_40               : 1;  /**< [  0:  0](RO) Support for ONFI4.0 - NAND Flash. */
        uint32_t onfi_41               : 1;  /**< [  1:  1](RO) Support for ONFI4.1 - NAND Flash. */
        uint32_t sdr_16bit             : 1;  /**< [  2:  2](RO) Support for 16bit in ONFI SDR work mode. */
        uint32_t spi                   : 1;  /**< [  3:  3](RO) Support for XSPI. */
        uint32_t sd_emmc               : 1;  /**< [  4:  4](RO) Support for SD/eMMC. */
        uint32_t bank_num              : 2;  /**< [  6:  5](RO) Maximum number of banks supported by hardware. This is an encoded value.
                                                                 0x0 = One bank.
                                                                 0x1 = Two banks.
                                                                 0x2 = Four banks.
                                                                 0x3 = Eight banks. */
        uint32_t dll_tap_num           : 1;  /**< [  7:  7](RO) Number of taps in delay line. This is an encoded value. 0 = 128. 1 = 256. */
        uint32_t aging                 : 1;  /**< [  8:  8](RO) Support for aging in delay lines. */
        uint32_t dfi_clock_ratio       : 1;  /**< [  9:  9](RO) Support for clock ratio on DFI interface. This is an encoded value.
                                                                 0 = 1:1.
                                                                 1 = 1:2. */
        uint32_t per_bit_deskew        : 1;  /**< [ 10: 10](RO) Support for per-bit deskew. */
        uint32_t reg_intf              : 1;  /**< [ 11: 11](RO) SFR interface type.  This is an encoded value. 0 = DFI. 1 = APB. */
        uint32_t ext_lpbk_dqs          : 1;  /**< [ 12: 12](RO) Support for external LPBK_DQS I/O pad. */
        uint32_t jtag_sup              : 1;  /**< [ 13: 13](RO) Support for JTAG muxes. */
        uint32_t pll_sup               : 1;  /**< [ 14: 14](RO) Support for PLL. */
        uint32_t asf_sup               : 1;  /**< [ 15: 15](RO) Support for Automotive Safety Feature. */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_phy_dataslice_rfile_phy_features_s cn; */
};
typedef union cavm_spix_phy_dataslice_rfile_phy_features cavm_spix_phy_dataslice_rfile_phy_features_t;

static inline uint64_t CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_FEATURES(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_FEATURES(uint64_t a)
{
    if (a<=1)
        return 0x804000002074ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_PHY_DATASLICE_RFILE_PHY_FEATURES", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_FEATURES(a) cavm_spix_phy_dataslice_rfile_phy_features_t
#define bustype_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_FEATURES(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_FEATURES(a) "SPIX_PHY_DATASLICE_RFILE_PHY_FEATURES"
#define device_bar_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_FEATURES(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_FEATURES(a) (a)
#define arguments_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_FEATURES(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_phy_dataslice_rfile_phy_gate_lpbk_ctrl
 *
 * SPI PHY Dataslice Rfile PHY Gate Lpbk Control Register
 * This register controls the gate and loopback control related timing.
 */
union cavm_spix_phy_dataslice_rfile_phy_gate_lpbk_ctrl
{
    uint32_t u;
    struct cavm_spix_phy_dataslice_rfile_phy_gate_lpbk_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sync_method           : 1;  /**< [ 31: 31](R/W) Defines the method of transferring the data from DQS domain flops to the clk_phy clock domain.
                                                                 0 = read pointer advances based upon a programmable delay of the dfi_rddata_en pulse from the DFI
                                                                 interface.
                                                                 1 = read pointer advances based upon a programmable delay of the empty signal. Recommended setting
                                                                 for SD/eMMC controller. */
        uint32_t sw_dqs_phase_bypass   : 1;  /**< [ 30: 30](R/W) 0 = Use phase detect circuit to determine the half_cycle_shift.
                                                                 1 = Use the clk_wrdqs_delay delay line setting to determine the half_cycle_shift. A delay line
                                                                 setting of 0x00-0x7f means half_cycle_shift = 0 and a delay line setting of 0x80-0xff means
                                                                 half_cycle_shift = 1. */
        uint32_t en_sw_half_cycle      : 1;  /**< [ 29: 29](R/W) Enables the software half cycle shift. This determines if write data is transferred to the
                                                                 clk_wrdqs domain on the positive or negative edge of the PHY clock. This field is valid when
                                                                 [SW_DQS_PHASE_BYPASS] is low.
                                                                 0 = Hardware automatically controls any shifting needed for the write level delay line.
                                                                 1 = The setting in [SW_HALF_CYCLE_SHIFT] (bit [28]) of the phy_gate_lpbk_ctrl_reg bit
                                                                 parameter defines the shift.
                                                                 Note: If the user chooses to control the half cycle shift manually, it is important that the
                                                                 [SW_HALF_CYCLE_SHIFT] (bit [28]) of the phy_gate_lpbk_ctrl_reg parameter be cleared to 0 if
                                                                 the delay is less than a 1/2 cycle and set to 1 if the delay is greater than a 1/2 cycle. It is
                                                                 recommended to allow the hardware to control this automatically. */
        uint32_t sw_half_cycle_shift   : 1;  /**< [ 28: 28](R/W) 0 = No effect.
                                                                 1 = Adds a half clock delay to the write data path. */
        uint32_t param_phase_detect_sel_oe : 3;/**< [ 27: 25](R/W) DLL Phase Detect Selector for DQS OE generation to handle the clock domain crossing between the
                                                                 clock and clk_wrdqs signal. Selects the number of delay elements to be inserted between the phase
                                                                 detect flip-flops. Defaults to 0x0.
                                                                 0x0 = One delay element.
                                                                 0x1 = Two delay element.
                                                                 0x2 = Three delay element.
                                                                 0x3 = Four delay element.
                                                                 0x4 = Five delay element.
                                                                 0x5 = Six delay element.
                                                                 0x6 = Seven delay element.
                                                                 0x7 = Eight delay element. */
        uint32_t rd_del_sel            : 6;  /**< [ 24: 19](R/W) Defines the read data delay. Holds the number of cycles to delay the dfi_rddata_en signal prior to
                                                                 enabling the read FIFO. After this delay, the read pointers begin incrementing the read FIFO.
                                                                 If [SYNC_METHOD] is set high the value of this field must take into account the synchronization
                                                                 time of the pointers in the entry FIFO (adding three clock cycles should be sufficient). */
        uint32_t underrun_suppress     : 1;  /**< [ 18: 18](R/W) This field turns off the generation of the underrun signal when [SYNC_METHOD] is set high.
                                                                 Recommended value is zero with an exception for SD/eMMC controller for which this field
                                                                 need to be set high. */
        uint32_t reserved_17           : 1;
        uint32_t rd_del_sel_empty      : 1;  /**< [ 16: 16](R/W) Defines the read data delay for the empty signal generated based on the incoming DQS strobes. For
                                                                 zero delay the data are passed from entry flops to the iodatain* flops one clock cycle after the
                                                                 !empty signals is asserted. Normally the zero value of this field is sufficient as the signal is
                                                                 generated based on the gray pointer synchronized with two stage synchronizer on clk_phy clock
                                                                 domain which gives minimum two clock cycle path from entry flop to the iodatain flop. Increasing
                                                                 the value of this field delays the moment of passing the data from entry flops to the iodatain
                                                                 flops. Increased value gives even more time to propagate the data but the bigger value the bigger
                                                                 probability to overflow the FIFO. Recommended value is zero. */
        uint32_t lpbk_err_check_timing : 3;  /**< [ 15: 13](R/W) Sets the cycle delay between the LFSR and loopback error check logic to ensure that the LFSR
                                                                 sourced data and data being looped back arrive at the same clock cycle for comparison. This value
                                                                 is related to the rd_del_sel field, and is equal to 7 - rd_del_sel. */
        uint32_t lpbk_fail_muxsel      : 1;  /**< [ 12: 12](R/W) Selects data output type for phy_obs_reg_0[23:8].
                                                                 0 = Return the expected data.
                                                                 1 = Return the actual data. */
        uint32_t loopback_control      : 2;  /**< [ 11: 10](R/W) Loopback control.
                                                                 0x0 = Normal Operation Mode.
                                                                 0x1 = lpbk_start; Enables loopback write mode.
                                                                 0x2 = lpbk_stop; Stop loopback to check error register.
                                                                 0x3 = clear; Clear loopback registers. */
        uint32_t lpbk_internal         : 1;  /**< [  9:  9](R/W) Controls the loopback read multiplexer.
                                                                 0 = External Loopback.
                                                                 1 = Internal loopback. */
        uint32_t lpbk_en               : 1;  /**< [  8:  8](R/W) Controls internal write multiplexer. 0x0 = Normal Operation. 0x1 = Enable loopback. */
        uint32_t reserved_7            : 1;
        uint32_t gate_cfg_always_on    : 1;  /**< [  6:  6](R/W) This parameter cause the gate to be always on.
                                                                 Recommended setting for SD/eMMC controller is 1. */
        uint32_t gate_cfg_close        : 2;  /**< [  5:  4](R/W) Normally the gate is closing when all bits of dfi_cebar are high or when dfi_rd_pre_post_amble and
                                                                 rebar_dfi are high. This parameter allows to extend the closing of the DQS gate. Recommended
                                                                 value is zero. */
        uint32_t gate_cfg              : 4;  /**< [  3:  0](R/W) Coarse adjust of gate open time. This value is the number of cycles to delay the dfi_rddata_en
                                                                 signal prior to opening the gate in full cycle increments. Decreasing this value pulls the gate
                                                                 earlier in time. This field should be programmed such that the gate signal lands in the valid DQS
                                                                 gate window. */
#else /* Word 0 - Little Endian */
        uint32_t gate_cfg              : 4;  /**< [  3:  0](R/W) Coarse adjust of gate open time. This value is the number of cycles to delay the dfi_rddata_en
                                                                 signal prior to opening the gate in full cycle increments. Decreasing this value pulls the gate
                                                                 earlier in time. This field should be programmed such that the gate signal lands in the valid DQS
                                                                 gate window. */
        uint32_t gate_cfg_close        : 2;  /**< [  5:  4](R/W) Normally the gate is closing when all bits of dfi_cebar are high or when dfi_rd_pre_post_amble and
                                                                 rebar_dfi are high. This parameter allows to extend the closing of the DQS gate. Recommended
                                                                 value is zero. */
        uint32_t gate_cfg_always_on    : 1;  /**< [  6:  6](R/W) This parameter cause the gate to be always on.
                                                                 Recommended setting for SD/eMMC controller is 1. */
        uint32_t reserved_7            : 1;
        uint32_t lpbk_en               : 1;  /**< [  8:  8](R/W) Controls internal write multiplexer. 0x0 = Normal Operation. 0x1 = Enable loopback. */
        uint32_t lpbk_internal         : 1;  /**< [  9:  9](R/W) Controls the loopback read multiplexer.
                                                                 0 = External Loopback.
                                                                 1 = Internal loopback. */
        uint32_t loopback_control      : 2;  /**< [ 11: 10](R/W) Loopback control.
                                                                 0x0 = Normal Operation Mode.
                                                                 0x1 = lpbk_start; Enables loopback write mode.
                                                                 0x2 = lpbk_stop; Stop loopback to check error register.
                                                                 0x3 = clear; Clear loopback registers. */
        uint32_t lpbk_fail_muxsel      : 1;  /**< [ 12: 12](R/W) Selects data output type for phy_obs_reg_0[23:8].
                                                                 0 = Return the expected data.
                                                                 1 = Return the actual data. */
        uint32_t lpbk_err_check_timing : 3;  /**< [ 15: 13](R/W) Sets the cycle delay between the LFSR and loopback error check logic to ensure that the LFSR
                                                                 sourced data and data being looped back arrive at the same clock cycle for comparison. This value
                                                                 is related to the rd_del_sel field, and is equal to 7 - rd_del_sel. */
        uint32_t rd_del_sel_empty      : 1;  /**< [ 16: 16](R/W) Defines the read data delay for the empty signal generated based on the incoming DQS strobes. For
                                                                 zero delay the data are passed from entry flops to the iodatain* flops one clock cycle after the
                                                                 !empty signals is asserted. Normally the zero value of this field is sufficient as the signal is
                                                                 generated based on the gray pointer synchronized with two stage synchronizer on clk_phy clock
                                                                 domain which gives minimum two clock cycle path from entry flop to the iodatain flop. Increasing
                                                                 the value of this field delays the moment of passing the data from entry flops to the iodatain
                                                                 flops. Increased value gives even more time to propagate the data but the bigger value the bigger
                                                                 probability to overflow the FIFO. Recommended value is zero. */
        uint32_t reserved_17           : 1;
        uint32_t underrun_suppress     : 1;  /**< [ 18: 18](R/W) This field turns off the generation of the underrun signal when [SYNC_METHOD] is set high.
                                                                 Recommended value is zero with an exception for SD/eMMC controller for which this field
                                                                 need to be set high. */
        uint32_t rd_del_sel            : 6;  /**< [ 24: 19](R/W) Defines the read data delay. Holds the number of cycles to delay the dfi_rddata_en signal prior to
                                                                 enabling the read FIFO. After this delay, the read pointers begin incrementing the read FIFO.
                                                                 If [SYNC_METHOD] is set high the value of this field must take into account the synchronization
                                                                 time of the pointers in the entry FIFO (adding three clock cycles should be sufficient). */
        uint32_t param_phase_detect_sel_oe : 3;/**< [ 27: 25](R/W) DLL Phase Detect Selector for DQS OE generation to handle the clock domain crossing between the
                                                                 clock and clk_wrdqs signal. Selects the number of delay elements to be inserted between the phase
                                                                 detect flip-flops. Defaults to 0x0.
                                                                 0x0 = One delay element.
                                                                 0x1 = Two delay element.
                                                                 0x2 = Three delay element.
                                                                 0x3 = Four delay element.
                                                                 0x4 = Five delay element.
                                                                 0x5 = Six delay element.
                                                                 0x6 = Seven delay element.
                                                                 0x7 = Eight delay element. */
        uint32_t sw_half_cycle_shift   : 1;  /**< [ 28: 28](R/W) 0 = No effect.
                                                                 1 = Adds a half clock delay to the write data path. */
        uint32_t en_sw_half_cycle      : 1;  /**< [ 29: 29](R/W) Enables the software half cycle shift. This determines if write data is transferred to the
                                                                 clk_wrdqs domain on the positive or negative edge of the PHY clock. This field is valid when
                                                                 [SW_DQS_PHASE_BYPASS] is low.
                                                                 0 = Hardware automatically controls any shifting needed for the write level delay line.
                                                                 1 = The setting in [SW_HALF_CYCLE_SHIFT] (bit [28]) of the phy_gate_lpbk_ctrl_reg bit
                                                                 parameter defines the shift.
                                                                 Note: If the user chooses to control the half cycle shift manually, it is important that the
                                                                 [SW_HALF_CYCLE_SHIFT] (bit [28]) of the phy_gate_lpbk_ctrl_reg parameter be cleared to 0 if
                                                                 the delay is less than a 1/2 cycle and set to 1 if the delay is greater than a 1/2 cycle. It is
                                                                 recommended to allow the hardware to control this automatically. */
        uint32_t sw_dqs_phase_bypass   : 1;  /**< [ 30: 30](R/W) 0 = Use phase detect circuit to determine the half_cycle_shift.
                                                                 1 = Use the clk_wrdqs_delay delay line setting to determine the half_cycle_shift. A delay line
                                                                 setting of 0x00-0x7f means half_cycle_shift = 0 and a delay line setting of 0x80-0xff means
                                                                 half_cycle_shift = 1. */
        uint32_t sync_method           : 1;  /**< [ 31: 31](R/W) Defines the method of transferring the data from DQS domain flops to the clk_phy clock domain.
                                                                 0 = read pointer advances based upon a programmable delay of the dfi_rddata_en pulse from the DFI
                                                                 interface.
                                                                 1 = read pointer advances based upon a programmable delay of the empty signal. Recommended setting
                                                                 for SD/eMMC controller. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_phy_dataslice_rfile_phy_gate_lpbk_ctrl_s cn; */
};
typedef union cavm_spix_phy_dataslice_rfile_phy_gate_lpbk_ctrl cavm_spix_phy_dataslice_rfile_phy_gate_lpbk_ctrl_t;

static inline uint64_t CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_GATE_LPBK_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_GATE_LPBK_CTRL(uint64_t a)
{
    if (a<=1)
        return 0x804000002008ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_PHY_DATASLICE_RFILE_PHY_GATE_LPBK_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_GATE_LPBK_CTRL(a) cavm_spix_phy_dataslice_rfile_phy_gate_lpbk_ctrl_t
#define bustype_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_GATE_LPBK_CTRL(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_GATE_LPBK_CTRL(a) "SPIX_PHY_DATASLICE_RFILE_PHY_GATE_LPBK_CTRL"
#define device_bar_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_GATE_LPBK_CTRL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_GATE_LPBK_CTRL(a) (a)
#define arguments_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_GATE_LPBK_CTRL(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_phy_dataslice_rfile_phy_ie_timing
 *
 * SPI PHY Dataslice Rfile PHY Ie Timing Register
 * This register controls the DQS related timing.
 */
union cavm_spix_phy_dataslice_rfile_phy_ie_timing
{
    uint32_t u;
    struct cavm_spix_phy_dataslice_rfile_phy_ie_timing_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_21_31        : 11;
        uint32_t ie_always_on          : 1;  /**< [ 20: 20](R/W) Forces the input enable(s) to be on always. */
        uint32_t reserved_19           : 1;
        uint32_t dq_ie_start           : 3;  /**< [ 18: 16](R/W) Define the start position for the DQ input enable. */
        uint32_t reserved_15           : 1;
        uint32_t dq_ie_stop            : 3;  /**< [ 14: 12](R/W) Define the stop position for the DQ input enable. */
        uint32_t reserved_11           : 1;
        uint32_t dqs_ie_start          : 3;  /**< [ 10:  8](R/W) Define the start position for the DQS input enable. */
        uint32_t reserved_7            : 1;
        uint32_t dqs_ie_stop           : 3;  /**< [  6:  4](R/W) Define the stop position for the DQS input enable. */
        uint32_t rddata_en_ie_dly      : 4;  /**< [  3:  0](R/W) Specifies the number of clocks of delay for the dfi_rddata_en signal to line it up with the true
                                                                 (normal) DFI read data position. The MC must deliver an early version of the read data enable to
                                                                 allow time for the input pads to turn on and this field allows the PHY to create the original
                                                                 timing. */
#else /* Word 0 - Little Endian */
        uint32_t rddata_en_ie_dly      : 4;  /**< [  3:  0](R/W) Specifies the number of clocks of delay for the dfi_rddata_en signal to line it up with the true
                                                                 (normal) DFI read data position. The MC must deliver an early version of the read data enable to
                                                                 allow time for the input pads to turn on and this field allows the PHY to create the original
                                                                 timing. */
        uint32_t dqs_ie_stop           : 3;  /**< [  6:  4](R/W) Define the stop position for the DQS input enable. */
        uint32_t reserved_7            : 1;
        uint32_t dqs_ie_start          : 3;  /**< [ 10:  8](R/W) Define the start position for the DQS input enable. */
        uint32_t reserved_11           : 1;
        uint32_t dq_ie_stop            : 3;  /**< [ 14: 12](R/W) Define the stop position for the DQ input enable. */
        uint32_t reserved_15           : 1;
        uint32_t dq_ie_start           : 3;  /**< [ 18: 16](R/W) Define the start position for the DQ input enable. */
        uint32_t reserved_19           : 1;
        uint32_t ie_always_on          : 1;  /**< [ 20: 20](R/W) Forces the input enable(s) to be on always. */
        uint32_t reserved_21_31        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_phy_dataslice_rfile_phy_ie_timing_s cn; */
};
typedef union cavm_spix_phy_dataslice_rfile_phy_ie_timing cavm_spix_phy_dataslice_rfile_phy_ie_timing_t;

static inline uint64_t CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_IE_TIMING(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_IE_TIMING(uint64_t a)
{
    if (a<=1)
        return 0x804000002014ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_PHY_DATASLICE_RFILE_PHY_IE_TIMING", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_IE_TIMING(a) cavm_spix_phy_dataslice_rfile_phy_ie_timing_t
#define bustype_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_IE_TIMING(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_IE_TIMING(a) "SPIX_PHY_DATASLICE_RFILE_PHY_IE_TIMING"
#define device_bar_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_IE_TIMING(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_IE_TIMING(a) (a)
#define arguments_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_IE_TIMING(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_phy_dataslice_rfile_phy_obs_reg_0
 *
 * SPI PHY Dataslice Rfile PHY Obs Reg 0 Register
 * This register holds the following observable points in the PHY.
 */
union cavm_spix_phy_dataslice_rfile_phy_obs_reg_0
{
    uint32_t u;
    struct cavm_spix_phy_dataslice_rfile_phy_obs_reg_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_28_31        : 4;
        uint32_t dqs_cmd_overflow      : 1;  /**< [ 27: 27](RO) CMD Status signal to indicate that the logic gate was closed too late, i.e. the number of DQS
                                                                 strobes exceed the capacity of the entry FIFO. It indicates that rd_del_sel signal value is too
                                                                 high and dfi_rddata are corrupted. It is possible that overflow status is asserted with underrun
                                                                 status - in such case the overflow takes the precedence. The dll_rst_n or rst_n clears this flag. */
        uint32_t dqs_cmd_underrun      : 1;  /**< [ 26: 26](RO) CMD Status signal to indicate that the logic gate had to be forced closed. It indicates that
                                                                 either the DQS strobe did not appear during read or rd_del_sel signal value is too low and
                                                                 dfi_rddata are corrupted. The dll_rst_n or rst_n clears this flag. */
        uint32_t dqs_overflow          : 1;  /**< [ 25: 25](RO) Status signal to indicate that the logic gate was closed too late ie. the number of DQS strobes
                                                                 exceed the capacity of the entry FIFO. It indicates that rd_del_sel signal value is too high
                                                                 and dfi_rddata are corrupted. It is possible that overflow status is asserted with underrun status
                                                                 - in such case the overflow takes the precedence. The dll_rst_n or rst_n clears this flag. */
        uint32_t dqs_underrun          : 1;  /**< [ 24: 24](RO) Status signal to indicate that the logic gate had to be forced closed. It indicates that either
                                                                 the DQS strobe did not appear during read or rd_del_sel signal value is too low and dfi_rddata are
                                                                 corrupted. The dll_rst_n or rst_n clears this flag. */
        uint32_t lpbk_dq_data          : 16; /**< [ 23:  8](RO) If errors are encountered in loopback test this field reports the actual data or the expected data,
                                                                 depending on the setting of the phy_gate_lpbk_ctrl_reg [12] parameter bit. This field is not clear
                                                                 by the clear state of the loopback. If there are no errors in loopback test the value is zero
                                                                 (or value from previous state). */
        uint32_t reserved_2_7          : 6;
        uint32_t lpbk_status           : 2;  /**< [  1:  0](RO) Loopback Status
                                                                 Bit0 - lpbk start; Defines the status of the loopback mode.
                                                                   0 = Not in loopback mode.
                                                                   1 = In loopback mode.
                                                                 Bit1 - lpbk status; Defines the status of the loopback mode.
                                                                   0 = Last Loopback test had no errors.
                                                                   1 = Last loopback test contained data errors. */
#else /* Word 0 - Little Endian */
        uint32_t lpbk_status           : 2;  /**< [  1:  0](RO) Loopback Status
                                                                 Bit0 - lpbk start; Defines the status of the loopback mode.
                                                                   0 = Not in loopback mode.
                                                                   1 = In loopback mode.
                                                                 Bit1 - lpbk status; Defines the status of the loopback mode.
                                                                   0 = Last Loopback test had no errors.
                                                                   1 = Last loopback test contained data errors. */
        uint32_t reserved_2_7          : 6;
        uint32_t lpbk_dq_data          : 16; /**< [ 23:  8](RO) If errors are encountered in loopback test this field reports the actual data or the expected data,
                                                                 depending on the setting of the phy_gate_lpbk_ctrl_reg [12] parameter bit. This field is not clear
                                                                 by the clear state of the loopback. If there are no errors in loopback test the value is zero
                                                                 (or value from previous state). */
        uint32_t dqs_underrun          : 1;  /**< [ 24: 24](RO) Status signal to indicate that the logic gate had to be forced closed. It indicates that either
                                                                 the DQS strobe did not appear during read or rd_del_sel signal value is too low and dfi_rddata are
                                                                 corrupted. The dll_rst_n or rst_n clears this flag. */
        uint32_t dqs_overflow          : 1;  /**< [ 25: 25](RO) Status signal to indicate that the logic gate was closed too late ie. the number of DQS strobes
                                                                 exceed the capacity of the entry FIFO. It indicates that rd_del_sel signal value is too high
                                                                 and dfi_rddata are corrupted. It is possible that overflow status is asserted with underrun status
                                                                 - in such case the overflow takes the precedence. The dll_rst_n or rst_n clears this flag. */
        uint32_t dqs_cmd_underrun      : 1;  /**< [ 26: 26](RO) CMD Status signal to indicate that the logic gate had to be forced closed. It indicates that
                                                                 either the DQS strobe did not appear during read or rd_del_sel signal value is too low and
                                                                 dfi_rddata are corrupted. The dll_rst_n or rst_n clears this flag. */
        uint32_t dqs_cmd_overflow      : 1;  /**< [ 27: 27](RO) CMD Status signal to indicate that the logic gate was closed too late, i.e. the number of DQS
                                                                 strobes exceed the capacity of the entry FIFO. It indicates that rd_del_sel signal value is too
                                                                 high and dfi_rddata are corrupted. It is possible that overflow status is asserted with underrun
                                                                 status - in such case the overflow takes the precedence. The dll_rst_n or rst_n clears this flag. */
        uint32_t reserved_28_31        : 4;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_phy_dataslice_rfile_phy_obs_reg_0_s cn; */
};
typedef union cavm_spix_phy_dataslice_rfile_phy_obs_reg_0 cavm_spix_phy_dataslice_rfile_phy_obs_reg_0_t;

static inline uint64_t CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_OBS_REG_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_OBS_REG_0(uint64_t a)
{
    if (a<=1)
        return 0x804000002018ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_PHY_DATASLICE_RFILE_PHY_OBS_REG_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_OBS_REG_0(a) cavm_spix_phy_dataslice_rfile_phy_obs_reg_0_t
#define bustype_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_OBS_REG_0(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_OBS_REG_0(a) "SPIX_PHY_DATASLICE_RFILE_PHY_OBS_REG_0"
#define device_bar_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_OBS_REG_0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_OBS_REG_0(a) (a)
#define arguments_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_OBS_REG_0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_phy_dataslice_rfile_phy_rd_deskew
 *
 * SPI PHY Dataslice Rfile PHY Rd Deskew Register
 * This register holds the values of delay of each DQ bit on the read path.
 */
union cavm_spix_phy_dataslice_rfile_phy_rd_deskew
{
    uint32_t u;
    struct cavm_spix_phy_dataslice_rfile_phy_rd_deskew_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rd_dq7_deskew_delay   : 4;  /**< [ 31: 28](R/W) Deskew delay for DQ bit 7. */
        uint32_t rd_dq6_deskew_delay   : 4;  /**< [ 27: 24](R/W) Deskew delay for DQ bit 6. */
        uint32_t rd_dq5_deskew_delay   : 4;  /**< [ 23: 20](R/W) Deskew delay for DQ bit 5. */
        uint32_t rd_dq4_deskew_delay   : 4;  /**< [ 19: 16](R/W) Deskew delay for DQ bit 4. */
        uint32_t rd_dq3_deskew_delay   : 4;  /**< [ 15: 12](R/W) Deskew delay for DQ bit 3. */
        uint32_t rd_dq2_deskew_delay   : 4;  /**< [ 11:  8](R/W) Deskew delay for DQ bit 2. */
        uint32_t rd_dq1_deskew_delay   : 4;  /**< [  7:  4](R/W) Deskew delay for DQ bit 1. */
        uint32_t rd_dq0_deskew_delay   : 4;  /**< [  3:  0](R/W) Deskew delay for DQ bit 0. */
#else /* Word 0 - Little Endian */
        uint32_t rd_dq0_deskew_delay   : 4;  /**< [  3:  0](R/W) Deskew delay for DQ bit 0. */
        uint32_t rd_dq1_deskew_delay   : 4;  /**< [  7:  4](R/W) Deskew delay for DQ bit 1. */
        uint32_t rd_dq2_deskew_delay   : 4;  /**< [ 11:  8](R/W) Deskew delay for DQ bit 2. */
        uint32_t rd_dq3_deskew_delay   : 4;  /**< [ 15: 12](R/W) Deskew delay for DQ bit 3. */
        uint32_t rd_dq4_deskew_delay   : 4;  /**< [ 19: 16](R/W) Deskew delay for DQ bit 4. */
        uint32_t rd_dq5_deskew_delay   : 4;  /**< [ 23: 20](R/W) Deskew delay for DQ bit 5. */
        uint32_t rd_dq6_deskew_delay   : 4;  /**< [ 27: 24](R/W) Deskew delay for DQ bit 6. */
        uint32_t rd_dq7_deskew_delay   : 4;  /**< [ 31: 28](R/W) Deskew delay for DQ bit 7. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_phy_dataslice_rfile_phy_rd_deskew_s cn; */
};
typedef union cavm_spix_phy_dataslice_rfile_phy_rd_deskew cavm_spix_phy_dataslice_rfile_phy_rd_deskew_t;

static inline uint64_t CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_RD_DESKEW(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_RD_DESKEW(uint64_t a)
{
    if (a<=1)
        return 0x80400000203cll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_PHY_DATASLICE_RFILE_PHY_RD_DESKEW", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_RD_DESKEW(a) cavm_spix_phy_dataslice_rfile_phy_rd_deskew_t
#define bustype_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_RD_DESKEW(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_RD_DESKEW(a) "SPIX_PHY_DATASLICE_RFILE_PHY_RD_DESKEW"
#define device_bar_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_RD_DESKEW(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_RD_DESKEW(a) (a)
#define arguments_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_RD_DESKEW(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_phy_dataslice_rfile_phy_static_togg
 *
 * SPI PHY Dataslice Rfile PHY Static Togg Register
 * This register controls the static aging feature of the PHY.
 */
union cavm_spix_phy_dataslice_rfile_phy_static_togg
{
    uint32_t u;
    struct cavm_spix_phy_dataslice_rfile_phy_static_togg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_25_31        : 7;
        uint32_t read_dqs_togg_enable  : 1;  /**< [ 24: 24](R/W) Enables the toggling for the active part of the read_dqs delay line in idle state. For SD and XSPI
                                                                 set this field to zero. Toggling on active part of the read_dqs delay line for those controllers
                                                                 should be disabled
                                                                 0 = disabled.
                                                                 1 = enabled. */
        uint32_t static_togg_enable    : 4;  /**< [ 23: 20](R/W) Control to enable the toggle signal during static activity. When low the feature is disabled.
                                                                 bit 0 = master delay line enable.
                                                                 bit 1 = read path delay line enable.
                                                                 bit 2 = write path delay line enable.
                                                                 bit 3 = write dqs path delay line enable. */
        uint32_t reserved_17_19        : 3;
        uint32_t static_togg_global_enable : 1;/**< [ 16: 16](R/W) Global control to enable the toggle signal during static activity. */
        uint32_t static_tog_clk_div    : 16; /**< [ 15:  0](R/W) Clock divider to create toggle signal. */
#else /* Word 0 - Little Endian */
        uint32_t static_tog_clk_div    : 16; /**< [ 15:  0](R/W) Clock divider to create toggle signal. */
        uint32_t static_togg_global_enable : 1;/**< [ 16: 16](R/W) Global control to enable the toggle signal during static activity. */
        uint32_t reserved_17_19        : 3;
        uint32_t static_togg_enable    : 4;  /**< [ 23: 20](R/W) Control to enable the toggle signal during static activity. When low the feature is disabled.
                                                                 bit 0 = master delay line enable.
                                                                 bit 1 = read path delay line enable.
                                                                 bit 2 = write path delay line enable.
                                                                 bit 3 = write dqs path delay line enable. */
        uint32_t read_dqs_togg_enable  : 1;  /**< [ 24: 24](R/W) Enables the toggling for the active part of the read_dqs delay line in idle state. For SD and XSPI
                                                                 set this field to zero. Toggling on active part of the read_dqs delay line for those controllers
                                                                 should be disabled
                                                                 0 = disabled.
                                                                 1 = enabled. */
        uint32_t reserved_25_31        : 7;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_phy_dataslice_rfile_phy_static_togg_s cn; */
};
typedef union cavm_spix_phy_dataslice_rfile_phy_static_togg cavm_spix_phy_dataslice_rfile_phy_static_togg_t;

static inline uint64_t CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_STATIC_TOGG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_STATIC_TOGG(uint64_t a)
{
    if (a<=1)
        return 0x804000002028ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_PHY_DATASLICE_RFILE_PHY_STATIC_TOGG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_STATIC_TOGG(a) cavm_spix_phy_dataslice_rfile_phy_static_togg_t
#define bustype_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_STATIC_TOGG(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_STATIC_TOGG(a) "SPIX_PHY_DATASLICE_RFILE_PHY_STATIC_TOGG"
#define device_bar_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_STATIC_TOGG(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_STATIC_TOGG(a) (a)
#define arguments_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_STATIC_TOGG(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_phy_dataslice_rfile_phy_version
 *
 * SPI PHY Dataslice Rfile PHY Version Register
 * This register contains release identification number.
 */
union cavm_spix_phy_dataslice_rfile_phy_version
{
    uint32_t u;
    struct cavm_spix_phy_dataslice_rfile_phy_version_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t combo_phy_magic_number : 16;/**< [ 31: 16](RO) Magic number. */
        uint32_t phy_fix               : 8;  /**< [ 15:  8](RO) Fixed number (minor revision number). */
        uint32_t phy_rev               : 8;  /**< [  7:  0](RO) PHY revision number. */
#else /* Word 0 - Little Endian */
        uint32_t phy_rev               : 8;  /**< [  7:  0](RO) PHY revision number. */
        uint32_t phy_fix               : 8;  /**< [ 15:  8](RO) Fixed number (minor revision number). */
        uint32_t combo_phy_magic_number : 16;/**< [ 31: 16](RO) Magic number. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_phy_dataslice_rfile_phy_version_s cn; */
};
typedef union cavm_spix_phy_dataslice_rfile_phy_version cavm_spix_phy_dataslice_rfile_phy_version_t;

static inline uint64_t CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_VERSION(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_VERSION(uint64_t a)
{
    if (a<=1)
        return 0x804000002070ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_PHY_DATASLICE_RFILE_PHY_VERSION", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_VERSION(a) cavm_spix_phy_dataslice_rfile_phy_version_t
#define bustype_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_VERSION(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_VERSION(a) "SPIX_PHY_DATASLICE_RFILE_PHY_VERSION"
#define device_bar_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_VERSION(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_VERSION(a) (a)
#define arguments_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_VERSION(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_phy_dataslice_rfile_phy_wr_deskew
 *
 * SPI PHY Dataslice Rfile PHY Wr Deskew Register
 * This register holds the values of delay of each DQ bit on the write path.
 */
union cavm_spix_phy_dataslice_rfile_phy_wr_deskew
{
    uint32_t u;
    struct cavm_spix_phy_dataslice_rfile_phy_wr_deskew_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t wr_dq7_deskew_delay   : 4;  /**< [ 31: 28](R/W) Deskew delay for DQ bit 7. */
        uint32_t wr_dq6_deskew_delay   : 4;  /**< [ 27: 24](R/W) Deskew delay for DQ bit 6. */
        uint32_t wr_dq5_deskew_delay   : 4;  /**< [ 23: 20](R/W) Deskew delay for DQ bit 5. */
        uint32_t wr_dq4_deskew_delay   : 4;  /**< [ 19: 16](R/W) Deskew delay for DQ bit 4. */
        uint32_t wr_dq3_deskew_delay   : 4;  /**< [ 15: 12](R/W) Deskew delay for DQ bit 3. */
        uint32_t wr_dq2_deskew_delay   : 4;  /**< [ 11:  8](R/W) Deskew delay for DQ bit 2. */
        uint32_t wr_dq1_deskew_delay   : 4;  /**< [  7:  4](R/W) Deskew delay for DQ bit 1. */
        uint32_t wr_dq0_deskew_delay   : 4;  /**< [  3:  0](R/W) Deskew delay for DQ bit 0. */
#else /* Word 0 - Little Endian */
        uint32_t wr_dq0_deskew_delay   : 4;  /**< [  3:  0](R/W) Deskew delay for DQ bit 0. */
        uint32_t wr_dq1_deskew_delay   : 4;  /**< [  7:  4](R/W) Deskew delay for DQ bit 1. */
        uint32_t wr_dq2_deskew_delay   : 4;  /**< [ 11:  8](R/W) Deskew delay for DQ bit 2. */
        uint32_t wr_dq3_deskew_delay   : 4;  /**< [ 15: 12](R/W) Deskew delay for DQ bit 3. */
        uint32_t wr_dq4_deskew_delay   : 4;  /**< [ 19: 16](R/W) Deskew delay for DQ bit 4. */
        uint32_t wr_dq5_deskew_delay   : 4;  /**< [ 23: 20](R/W) Deskew delay for DQ bit 5. */
        uint32_t wr_dq6_deskew_delay   : 4;  /**< [ 27: 24](R/W) Deskew delay for DQ bit 6. */
        uint32_t wr_dq7_deskew_delay   : 4;  /**< [ 31: 28](R/W) Deskew delay for DQ bit 7. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_phy_dataslice_rfile_phy_wr_deskew_s cn; */
};
typedef union cavm_spix_phy_dataslice_rfile_phy_wr_deskew cavm_spix_phy_dataslice_rfile_phy_wr_deskew_t;

static inline uint64_t CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW(uint64_t a)
{
    if (a<=1)
        return 0x80400000202cll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW(a) cavm_spix_phy_dataslice_rfile_phy_wr_deskew_t
#define bustype_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW(a) "SPIX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW"
#define device_bar_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW(a) (a)
#define arguments_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_phy_dataslice_rfile_phy_wr_deskew_pd_ctrl_0
 *
 * SPI PHY Dataslice Rfile PHY Wr Deskew Pd Control 0 Register
 * This register holds the values of phase detect block for each DQ bit on the write path.
 */
union cavm_spix_phy_dataslice_rfile_phy_wr_deskew_pd_ctrl_0
{
    uint32_t u;
    struct cavm_spix_phy_dataslice_rfile_phy_wr_deskew_pd_ctrl_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_31           : 1;
        uint32_t dq3_sw_dq_phase_bypass : 1; /**< [ 30: 30](R/W) 0 = Use phase detect circuit to determine the half_cycle_shift.
                                                                 1 = Use the clk_wr_delay delay line setting to determine the half_cycle_shift. A delay line
                                                                 setting of 0x00-0x7f means half_cycle_shift= 0 and a delay line setting of 0x80-0xff
                                                                 means half_cycle_shift = 1. */
        uint32_t dq3_en_sw_half_cycle  : 1;  /**< [ 29: 29](R/W) Enables the software half cycle shift. This determines if write data is transferred to the clk_wr
                                                                 domain on the positive or negative edge of the PHY clock. This field is valid when
                                                                 dq3_sw_dq_phase_bypass is low.
                                                                 0 = Hardware automatically controls any shifting needed for the write level delay line.
                                                                 1 = The setting in the dq3_sw_half_cycle_shift field this reg defines the shift.
                                                                 Note: If the user chooses to control the half cycle shift manually, it is important that the
                                                                 dq3_sw_half_cycle_shift field (bit [12]) of the phy_wr_deskew_pd_ctrl_reg parameter be cleared to
                                                                 '0' if the delay is less than a 1/2 cycle and set to '1' if the delay is greater than a 1/2 cycle.
                                                                 It is recommended to allow the hardware to control this automatically. */
        uint32_t dq3_sw_half_cycle_shift : 1;/**< [ 28: 28](R/W) 0 = No effect.
                                                                 1 = Adds a half clock delay to the bit 3 of the write data path. */
        uint32_t reserved_27           : 1;
        uint32_t dq3_phase_detect_sel  : 3;  /**< [ 26: 24](R/W) DLL Phase Detect Selector for DQ generation to handle the clock domain crossing between the clock
                                                                 and clk_wr signal. Selects the number of delay elements to be inserted between the phase detect
                                                                 flip-flops. Defaults to 0x0.
                                                                 0x0 = One delay element.
                                                                 0x1 = Two delay element.
                                                                 0x2 = Three delay element.
                                                                 0x3 = Four delay element.
                                                                 0x4 = Five delay element.
                                                                 0x5 = Six delay element.
                                                                 0x6 = Seven delay element.
                                                                 0x7 = Eight delay element. */
        uint32_t reserved_23           : 1;
        uint32_t dq2_sw_dq_phase_bypass : 1; /**< [ 22: 22](R/W) 0 = Use phase detect circuit to determine the half_cycle_shift.
                                                                 1 = Use the clk_wr_delay delay line setting to determine the half_cycle_shift. A delay line
                                                                 setting of 0x00-0x7f means half_cycle_shift= 0 and a delay line setting of 0x80-0xff means
                                                                 half_cycle_shift = 1. */
        uint32_t dq2_en_sw_half_cycle  : 1;  /**< [ 21: 21](R/W) Enables the software half cycle shift. This determines if write data is transferred to the clk_wr
                                                                 domain on the positive or negative edge of the PHY clock. This field is valid when
                                                                 dq2_sw_dq_phase_bypass is low.
                                                                 0 = Hardware automatically controls any shifting needed for the write level delay line.
                                                                 1 = The setting in the dq2_sw_half_cycle_shift field this reg defines the shift.
                                                                 Note: If the user chooses to control the half cycle shift manually, it is important that the
                                                                 dq2_sw_half_cycle_shift field (bit [8]) of the phy_wr_deskew_pd_ctrl_reg parameter be cleared to
                                                                 '0' if the delay is less than a 1/2 cycle and set to '1' if the delay is greater than a 1/2 cycle.
                                                                 It is recommended to allow the hardware to control this automatically. */
        uint32_t dq2_sw_half_cycle_shift : 1;/**< [ 20: 20](R/W) 0 = No effect.
                                                                 1 = Adds a half clock delay to the bit 2 of the write data path. */
        uint32_t reserved_19           : 1;
        uint32_t dq2_phase_detect_sel  : 3;  /**< [ 18: 16](R/W) DLL Phase Detect Selector for DQ generation to handle the clock domain crossing between the clock
                                                                 and clk_wr signal. Selects the number of delay elements to be inserted between the phase detect
                                                                 flip-flops. Defaults to 0x0.
                                                                 0x0 = One delay element.
                                                                 0x1 = Two delay element.
                                                                 0x2 = Three delay element.
                                                                 0x3 = Four delay element.
                                                                 0x4 = Five delay element.
                                                                 0x5 = Six delay element.
                                                                 0x6 = Seven delay element.
                                                                 0x7 = Eight delay element. */
        uint32_t reserved_15           : 1;
        uint32_t dq1_sw_dq_phase_bypass : 1; /**< [ 14: 14](R/W) 0 = Use phase detect circuit to determine the half_cycle_shift.
                                                                 1 = Use the clk_wr_delay delay line setting to determine the half_cycle_shift. A delay line
                                                                 setting of 0x00-0x7f means half_cycle_shift = 0 and a delay line setting of 0x80-0xff
                                                                 means half_cycle_shift = 1. */
        uint32_t dq1_en_sw_half_cycle  : 1;  /**< [ 13: 13](R/W) Enables the software half cycle shift. This determines if write data is transferred to the clk_wr
                                                                 domain on the positive or negative edge of the PHY clock. This field is valid when
                                                                 dq1_sw_dq_phase_bypass is low.
                                                                 0 = Hardware automatically controls any shifting needed for the write level delay line.
                                                                 1 = The setting in the dq1_sw_half_cycle_shift field this reg defines the shift.
                                                                 Note: If the user chooses to control the half cycle shift manually, it is important that the
                                                                 dq1_sw_half_cycle_shift field (bit [4]) of the phy_wr_deskew_pd_ctrl_reg parameter be cleared to
                                                                 '0' if the delay is less than a 1/2 cycle and set to '1' if the delay is greater than a 1/2 cycle.
                                                                 It is recommended to allow the hardware to control this automatically. */
        uint32_t dq1_sw_half_cycle_shift : 1;/**< [ 12: 12](R/W) 0 = No effect.
                                                                 1 = Adds a half clock delay to the bit 1 of the write data path. */
        uint32_t reserved_11           : 1;
        uint32_t dq1_phase_detect_sel  : 3;  /**< [ 10:  8](R/W) DLL Phase Detect Selector for DQ generation to handle the clock domain crossing between the clock
                                                                 and clk_wr signal. Selects the number of delay elements to be inserted between the phase detect
                                                                 flip-flops. Defaults to 0x0.
                                                                 0x0 = One delay element.
                                                                 0x1 = Two delay element.
                                                                 0x2 = Three delay element.
                                                                 0x3 = Four delay element.
                                                                 0x4 = Five delay element.
                                                                 0x5 = Six delay element.
                                                                 0x6 = Seven delay element.
                                                                 0x7 = Eight delay element. */
        uint32_t reserved_7            : 1;
        uint32_t dq0_sw_dq_phase_bypass : 1; /**< [  6:  6](R/W) 0 = Use phase detect circuit to determine the half_cycle_shift.
                                                                 1 = Use the clk_wr_delay delay line setting to determine the half_cycle_shift. A delay line
                                                                 setting of 0x00-0x7f means half_cycle_shift = 0 and a delay line setting of 0x80-0xff
                                                                 means half_cycle_shift = 1. */
        uint32_t dq0_en_sw_half_cycle  : 1;  /**< [  5:  5](R/W) Enables the software half cycle shift. This determines if write data is transferred to the clk_wr
                                                                 domain on the positive or negative edge of the PHY clock.
                                                                 This field is valid when dq0_sw_dq_phase_bypass is low.
                                                                 0 = Hardware automatically controls any shifting needed for the write level delay line.
                                                                 1 = The setting in the dq0_sw_half_cycle_shift field this reg defines the shift.
                                                                 Note: If the user chooses to control the half cycle shift manually, it is important that the
                                                                 dq0_sw_half_cycle_shift field (bit [0]) of the phy_wr_deskew_pd_ctrl_reg parameter be cleared to
                                                                 '0' if the delay is less than a 1/2 cycle and set to '1' if the delay is greater than a 1/2 cycle.
                                                                 It is recommended to allow the hardware to control this automatically. */
        uint32_t dq0_sw_half_cycle_shift : 1;/**< [  4:  4](R/W) 0 = No effect.
                                                                 1 = Adds a half clock delay to the bit 0 of the write data path. */
        uint32_t reserved_3            : 1;
        uint32_t dq0_phase_detect_sel  : 3;  /**< [  2:  0](R/W) DLL Phase Detect Selector for DQ generation to handle the clock domain crossing between the clock
                                                                 and clk_wr signal. Selects the number of delay elements to be inserted between the phase detect
                                                                 flip-flops. Defaults to 0x0.
                                                                 0x0 = One delay element.
                                                                 0x1 = Two delay element.
                                                                 0x2 = Three delay element.
                                                                 0x3 = Four delay element.
                                                                 0x4 = Five delay element.
                                                                 0x5 = Six delay element.
                                                                 0x6 = Seven delay element.
                                                                 0x7 = Eight delay element. */
#else /* Word 0 - Little Endian */
        uint32_t dq0_phase_detect_sel  : 3;  /**< [  2:  0](R/W) DLL Phase Detect Selector for DQ generation to handle the clock domain crossing between the clock
                                                                 and clk_wr signal. Selects the number of delay elements to be inserted between the phase detect
                                                                 flip-flops. Defaults to 0x0.
                                                                 0x0 = One delay element.
                                                                 0x1 = Two delay element.
                                                                 0x2 = Three delay element.
                                                                 0x3 = Four delay element.
                                                                 0x4 = Five delay element.
                                                                 0x5 = Six delay element.
                                                                 0x6 = Seven delay element.
                                                                 0x7 = Eight delay element. */
        uint32_t reserved_3            : 1;
        uint32_t dq0_sw_half_cycle_shift : 1;/**< [  4:  4](R/W) 0 = No effect.
                                                                 1 = Adds a half clock delay to the bit 0 of the write data path. */
        uint32_t dq0_en_sw_half_cycle  : 1;  /**< [  5:  5](R/W) Enables the software half cycle shift. This determines if write data is transferred to the clk_wr
                                                                 domain on the positive or negative edge of the PHY clock.
                                                                 This field is valid when dq0_sw_dq_phase_bypass is low.
                                                                 0 = Hardware automatically controls any shifting needed for the write level delay line.
                                                                 1 = The setting in the dq0_sw_half_cycle_shift field this reg defines the shift.
                                                                 Note: If the user chooses to control the half cycle shift manually, it is important that the
                                                                 dq0_sw_half_cycle_shift field (bit [0]) of the phy_wr_deskew_pd_ctrl_reg parameter be cleared to
                                                                 '0' if the delay is less than a 1/2 cycle and set to '1' if the delay is greater than a 1/2 cycle.
                                                                 It is recommended to allow the hardware to control this automatically. */
        uint32_t dq0_sw_dq_phase_bypass : 1; /**< [  6:  6](R/W) 0 = Use phase detect circuit to determine the half_cycle_shift.
                                                                 1 = Use the clk_wr_delay delay line setting to determine the half_cycle_shift. A delay line
                                                                 setting of 0x00-0x7f means half_cycle_shift = 0 and a delay line setting of 0x80-0xff
                                                                 means half_cycle_shift = 1. */
        uint32_t reserved_7            : 1;
        uint32_t dq1_phase_detect_sel  : 3;  /**< [ 10:  8](R/W) DLL Phase Detect Selector for DQ generation to handle the clock domain crossing between the clock
                                                                 and clk_wr signal. Selects the number of delay elements to be inserted between the phase detect
                                                                 flip-flops. Defaults to 0x0.
                                                                 0x0 = One delay element.
                                                                 0x1 = Two delay element.
                                                                 0x2 = Three delay element.
                                                                 0x3 = Four delay element.
                                                                 0x4 = Five delay element.
                                                                 0x5 = Six delay element.
                                                                 0x6 = Seven delay element.
                                                                 0x7 = Eight delay element. */
        uint32_t reserved_11           : 1;
        uint32_t dq1_sw_half_cycle_shift : 1;/**< [ 12: 12](R/W) 0 = No effect.
                                                                 1 = Adds a half clock delay to the bit 1 of the write data path. */
        uint32_t dq1_en_sw_half_cycle  : 1;  /**< [ 13: 13](R/W) Enables the software half cycle shift. This determines if write data is transferred to the clk_wr
                                                                 domain on the positive or negative edge of the PHY clock. This field is valid when
                                                                 dq1_sw_dq_phase_bypass is low.
                                                                 0 = Hardware automatically controls any shifting needed for the write level delay line.
                                                                 1 = The setting in the dq1_sw_half_cycle_shift field this reg defines the shift.
                                                                 Note: If the user chooses to control the half cycle shift manually, it is important that the
                                                                 dq1_sw_half_cycle_shift field (bit [4]) of the phy_wr_deskew_pd_ctrl_reg parameter be cleared to
                                                                 '0' if the delay is less than a 1/2 cycle and set to '1' if the delay is greater than a 1/2 cycle.
                                                                 It is recommended to allow the hardware to control this automatically. */
        uint32_t dq1_sw_dq_phase_bypass : 1; /**< [ 14: 14](R/W) 0 = Use phase detect circuit to determine the half_cycle_shift.
                                                                 1 = Use the clk_wr_delay delay line setting to determine the half_cycle_shift. A delay line
                                                                 setting of 0x00-0x7f means half_cycle_shift = 0 and a delay line setting of 0x80-0xff
                                                                 means half_cycle_shift = 1. */
        uint32_t reserved_15           : 1;
        uint32_t dq2_phase_detect_sel  : 3;  /**< [ 18: 16](R/W) DLL Phase Detect Selector for DQ generation to handle the clock domain crossing between the clock
                                                                 and clk_wr signal. Selects the number of delay elements to be inserted between the phase detect
                                                                 flip-flops. Defaults to 0x0.
                                                                 0x0 = One delay element.
                                                                 0x1 = Two delay element.
                                                                 0x2 = Three delay element.
                                                                 0x3 = Four delay element.
                                                                 0x4 = Five delay element.
                                                                 0x5 = Six delay element.
                                                                 0x6 = Seven delay element.
                                                                 0x7 = Eight delay element. */
        uint32_t reserved_19           : 1;
        uint32_t dq2_sw_half_cycle_shift : 1;/**< [ 20: 20](R/W) 0 = No effect.
                                                                 1 = Adds a half clock delay to the bit 2 of the write data path. */
        uint32_t dq2_en_sw_half_cycle  : 1;  /**< [ 21: 21](R/W) Enables the software half cycle shift. This determines if write data is transferred to the clk_wr
                                                                 domain on the positive or negative edge of the PHY clock. This field is valid when
                                                                 dq2_sw_dq_phase_bypass is low.
                                                                 0 = Hardware automatically controls any shifting needed for the write level delay line.
                                                                 1 = The setting in the dq2_sw_half_cycle_shift field this reg defines the shift.
                                                                 Note: If the user chooses to control the half cycle shift manually, it is important that the
                                                                 dq2_sw_half_cycle_shift field (bit [8]) of the phy_wr_deskew_pd_ctrl_reg parameter be cleared to
                                                                 '0' if the delay is less than a 1/2 cycle and set to '1' if the delay is greater than a 1/2 cycle.
                                                                 It is recommended to allow the hardware to control this automatically. */
        uint32_t dq2_sw_dq_phase_bypass : 1; /**< [ 22: 22](R/W) 0 = Use phase detect circuit to determine the half_cycle_shift.
                                                                 1 = Use the clk_wr_delay delay line setting to determine the half_cycle_shift. A delay line
                                                                 setting of 0x00-0x7f means half_cycle_shift= 0 and a delay line setting of 0x80-0xff means
                                                                 half_cycle_shift = 1. */
        uint32_t reserved_23           : 1;
        uint32_t dq3_phase_detect_sel  : 3;  /**< [ 26: 24](R/W) DLL Phase Detect Selector for DQ generation to handle the clock domain crossing between the clock
                                                                 and clk_wr signal. Selects the number of delay elements to be inserted between the phase detect
                                                                 flip-flops. Defaults to 0x0.
                                                                 0x0 = One delay element.
                                                                 0x1 = Two delay element.
                                                                 0x2 = Three delay element.
                                                                 0x3 = Four delay element.
                                                                 0x4 = Five delay element.
                                                                 0x5 = Six delay element.
                                                                 0x6 = Seven delay element.
                                                                 0x7 = Eight delay element. */
        uint32_t reserved_27           : 1;
        uint32_t dq3_sw_half_cycle_shift : 1;/**< [ 28: 28](R/W) 0 = No effect.
                                                                 1 = Adds a half clock delay to the bit 3 of the write data path. */
        uint32_t dq3_en_sw_half_cycle  : 1;  /**< [ 29: 29](R/W) Enables the software half cycle shift. This determines if write data is transferred to the clk_wr
                                                                 domain on the positive or negative edge of the PHY clock. This field is valid when
                                                                 dq3_sw_dq_phase_bypass is low.
                                                                 0 = Hardware automatically controls any shifting needed for the write level delay line.
                                                                 1 = The setting in the dq3_sw_half_cycle_shift field this reg defines the shift.
                                                                 Note: If the user chooses to control the half cycle shift manually, it is important that the
                                                                 dq3_sw_half_cycle_shift field (bit [12]) of the phy_wr_deskew_pd_ctrl_reg parameter be cleared to
                                                                 '0' if the delay is less than a 1/2 cycle and set to '1' if the delay is greater than a 1/2 cycle.
                                                                 It is recommended to allow the hardware to control this automatically. */
        uint32_t dq3_sw_dq_phase_bypass : 1; /**< [ 30: 30](R/W) 0 = Use phase detect circuit to determine the half_cycle_shift.
                                                                 1 = Use the clk_wr_delay delay line setting to determine the half_cycle_shift. A delay line
                                                                 setting of 0x00-0x7f means half_cycle_shift= 0 and a delay line setting of 0x80-0xff
                                                                 means half_cycle_shift = 1. */
        uint32_t reserved_31           : 1;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_phy_dataslice_rfile_phy_wr_deskew_pd_ctrl_0_s cn; */
};
typedef union cavm_spix_phy_dataslice_rfile_phy_wr_deskew_pd_ctrl_0 cavm_spix_phy_dataslice_rfile_phy_wr_deskew_pd_ctrl_0_t;

static inline uint64_t CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW_PD_CTRL_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW_PD_CTRL_0(uint64_t a)
{
    if (a<=1)
        return 0x804000002034ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW_PD_CTRL_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW_PD_CTRL_0(a) cavm_spix_phy_dataslice_rfile_phy_wr_deskew_pd_ctrl_0_t
#define bustype_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW_PD_CTRL_0(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW_PD_CTRL_0(a) "SPIX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW_PD_CTRL_0"
#define device_bar_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW_PD_CTRL_0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW_PD_CTRL_0(a) (a)
#define arguments_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW_PD_CTRL_0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_phy_dataslice_rfile_phy_wr_deskew_pd_ctrl_1
 *
 * SPI PHY Dataslice Rfile PHY Wr Deskew Pd Control 1 Register
 * This register holds the values of phase detect block for each DQ bit on the write path.
 */
union cavm_spix_phy_dataslice_rfile_phy_wr_deskew_pd_ctrl_1
{
    uint32_t u;
    struct cavm_spix_phy_dataslice_rfile_phy_wr_deskew_pd_ctrl_1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_31           : 1;
        uint32_t dq7_sw_dq_phase_bypass : 1; /**< [ 30: 30](R/W) 0 = Use phase detect circuit to determine the half_cycle_shift.
                                                                 1 = Use the clk_wr_delay delay line setting to determine the half_cycle_shift. A delay line
                                                                 setting of 0x00-0x7f means half_cycle_shift = 0 and a delay line setting of 0x80-0xff
                                                                 means half_cycle_shift = 1. */
        uint32_t dq7_en_sw_half_cycle  : 1;  /**< [ 29: 29](R/W) Enables the software half cycle shift. This determines if write data is transferred to the clk_wr
                                                                 domain on the positive or negative edge of the PHY clock. This field is valid when
                                                                 dq7_sw_dq_phase_bypass is low.
                                                                 0 = Hardware automatically controls any shifting needed for the write level delay line.
                                                                 1 = The setting in the dq7_sw_half_cycle_shift field of this reg defines the shift.
                                                                 Note: If the user chooses to control the half cycle shift manually, it is important that the
                                                                 dq7_sw_half_cycle_shift field (bit [28]) of the phy_wr_deskew_pd_ctrl_reg parameter be cleared to
                                                                 '0' if the delay is less than a 1/2 cycle and set to '1' if the delay is greater than a 1/2 cycle.
                                                                 It is recommended to allow the hardware to control this automatically. */
        uint32_t dq7_sw_half_cycle_shift : 1;/**< [ 28: 28](R/W) 0 = No effect.
                                                                 1 = Adds a half clock delay to the bit 7 of the write data path. */
        uint32_t reserved_27           : 1;
        uint32_t dq7_phase_detect_sel  : 3;  /**< [ 26: 24](R/W) DLL Phase Detect Selector for DQ generation to handle the clock domain crossing between the clock
                                                                 and clk_wr signal. Selects the number of delay elements to be inserted between the phase detect
                                                                 flip-flops. Defaults to 0x0.
                                                                 0x0 = One delay element.
                                                                 0x1 = Two delay element.
                                                                 0x2 = Three delay element.
                                                                 0x3 = Four delay element.
                                                                 0x4 = Five delay element.
                                                                 0x5 = Six delay element.
                                                                 0x6 = Seven delay element.
                                                                 0x7 = Eight delay element. */
        uint32_t reserved_23           : 1;
        uint32_t dq6_sw_dq_phase_bypass : 1; /**< [ 22: 22](R/W) 0 = Use phase detect circuit to determine the half_cycle_shift.
                                                                 1 = Use the clk_wr_delay delay line setting to determine the half_cycle_shift. A delay line
                                                                 setting of 0x00-0x7f means half_cycle_shift = 0 and a delay line setting of 0x80-0xff
                                                                 means half_cycle_shift = 1. */
        uint32_t dq6_en_sw_half_cycle  : 1;  /**< [ 21: 21](R/W) Enables the software half cycle shift. This determines if write data is transferred to the clk_wr
                                                                 domain on the positive or negative edge of the PHY clock. This field is valid when
                                                                 dq6_sw_dq_phase_bypass is low.
                                                                 0 = Hardware automatically controls any shifting needed for the write level delay line.
                                                                 1 = The setting in the dq6_sw_half_cycle_shift field this reg defines the shift.
                                                                 Note: If the user chooses to control the half cycle shift manually, it is important that the
                                                                 dq6_sw_half_cycle_shift field (bit [24]) of the phy_wr_deskew_pd_ctrl_reg parameter be cleared to
                                                                 '0' if the delay is less than a 1/2 cycle and set to '1' if the delay is greater than a 1/2 cycle.
                                                                 It is recommended to allow the hardware to control this automatically. */
        uint32_t dq6_sw_half_cycle_shift : 1;/**< [ 20: 20](R/W) 0 = No effect.
                                                                 1 = Adds a half clock delay to the bit 6 of the write data path. */
        uint32_t reserved_19           : 1;
        uint32_t dq6_phase_detect_sel  : 3;  /**< [ 18: 16](R/W) DLL Phase Detect Selector for DQ generation to handle the clock domain crossing between the clock
                                                                 and clk_wr signal. Selects the number of delay elements to be inserted between the phase detect
                                                                 flip-flops. Defaults to 0x0.
                                                                 0x0 = One delay element.
                                                                 0x1 = Two delay element.
                                                                 0x2 = Three delay element.
                                                                 0x3 = Four delay element.
                                                                 0x4 = Five delay element.
                                                                 0x5 = Six delay element.
                                                                 0x6 = Seven delay element.
                                                                 0x7 = Eight delay element. */
        uint32_t reserved_15           : 1;
        uint32_t dq5_sw_dq_phase_bypass : 1; /**< [ 14: 14](R/W) 0 = Use phase detect circuit to determine the half_cycle_shift.
                                                                 1 = Use the clk_wr_delay delay line setting to determine the half_cycle_shift. A delay line
                                                                 setting of 0x00-0x7f means half_cycle_shift = 0 and a delay line setting of 0x80-0xff
                                                                 means half_cycle_shift = 1. */
        uint32_t dq5_en_sw_half_cycle  : 1;  /**< [ 13: 13](R/W) Enables the software half cycle shift. This determines if write data is transferred to the clk_wr
                                                                 domain on the positive or negative edge of the PHY clock.
                                                                 This field is valid when dq5_sw_dq_phase_bypass is low.
                                                                 0 = Hardware automatically controls any shifting needed for the write level delay line.
                                                                 1 = The setting in the dq5_sw_half_cycle_shift field this reg defines the shift.
                                                                 Note: If the user chooses to control the half cycle shift manually, it is important that the
                                                                 dq5_sw_half_cycle_shift field (bit [20]) of the phy_wr_deskew_pd_ctrl_reg parameter be
                                                                 cleared to '0' if the delay is less than a 1/2 cycle and set to '1' if the delay is greater than
                                                                 a 1/2 cycle. It is recommended to allow the hardware to control this automatically. */
        uint32_t dq5_sw_half_cycle_shift : 1;/**< [ 12: 12](R/W) 0 = No effect.
                                                                 1 = Adds a half clock delay to the bit 5 of the write data path. */
        uint32_t reserved_11           : 1;
        uint32_t dq5_phase_detect_sel  : 3;  /**< [ 10:  8](R/W) DLL Phase Detect Selector for DQ generation to handle the clock domain crossing between the clock
                                                                 and clk_wr signal. Selects the number of delay elements to be inserted between the phase detect
                                                                 flip-flops. Defaults to 0x0.
                                                                 0x0 = One delay element.
                                                                 0x1 = Two delay element.
                                                                 0x2 = Three delay element.
                                                                 0x3 = Four delay element.
                                                                 0x4 = Five delay element.
                                                                 0x5 = Six delay element.
                                                                 0x6 = Seven delay element.
                                                                 0x7 = Eight delay element. */
        uint32_t reserved_7            : 1;
        uint32_t dq4_sw_dq_phase_bypass : 1; /**< [  6:  6](R/W) 0 = Use phase detect circuit to determine the half_cycle_shift.
                                                                 1 = Use the clk_wr_delay delay line setting to determine the half_cycle_shift. A delay line
                                                                 setting of 0x00-0x7f means half_cycle_shift = 0 and a delay line setting of 0x80-0xff
                                                                 means half_cycle_shift = 1. */
        uint32_t dq4_en_sw_half_cycle  : 1;  /**< [  5:  5](R/W) Enables the software half cycle shift. This determines if write data is transferred to the clk_wr
                                                                 domain on the positive or negative edge of the PHY clock.
                                                                 This field is valid when dq4_sw_dq_phase_bypass is low.
                                                                 0 = Hardware automatically controls any shifting needed for the write level delay line.
                                                                 1 = The setting in the dq4_sw_half_cycle_shift field this reg defines the shift.
                                                                 Note: If the user chooses to control the half cycle shift manually, it is important that the
                                                                 dq4_sw_half_cycle_shift field (bit [16]) of the phy_wr_deskew_pd_ctrl_reg parameter be
                                                                 cleared to '0' if the delay is less than a 1/2 cycle and set to '1' if the delay is greater than
                                                                 a 1/2 cycle. It is recommended to allow the hardware to control this automatically. */
        uint32_t dq4_sw_half_cycle_shift : 1;/**< [  4:  4](R/W) 0 = No effect.
                                                                 1 = Adds a half clock delay to the bit 4 of the write data path. */
        uint32_t reserved_3            : 1;
        uint32_t dq4_phase_detect_sel  : 3;  /**< [  2:  0](R/W) DLL Phase Detect Selector for DQ generation to handle the clock domain crossing between the clock
                                                                 and clk_wr signal. Selects the number of delay elements to be inserted between the phase detect
                                                                 flip-flops. Defaults to 0x0.
                                                                 0x0 = One delay element.
                                                                 0x1 = Two delay element.
                                                                 0x2 = Three delay element.
                                                                 0x3 = Four delay element.
                                                                 0x4 = Five delay element.
                                                                 0x5 = Six delay element.
                                                                 0x6 = Seven delay element.
                                                                 0x7 = Eight delay element. */
#else /* Word 0 - Little Endian */
        uint32_t dq4_phase_detect_sel  : 3;  /**< [  2:  0](R/W) DLL Phase Detect Selector for DQ generation to handle the clock domain crossing between the clock
                                                                 and clk_wr signal. Selects the number of delay elements to be inserted between the phase detect
                                                                 flip-flops. Defaults to 0x0.
                                                                 0x0 = One delay element.
                                                                 0x1 = Two delay element.
                                                                 0x2 = Three delay element.
                                                                 0x3 = Four delay element.
                                                                 0x4 = Five delay element.
                                                                 0x5 = Six delay element.
                                                                 0x6 = Seven delay element.
                                                                 0x7 = Eight delay element. */
        uint32_t reserved_3            : 1;
        uint32_t dq4_sw_half_cycle_shift : 1;/**< [  4:  4](R/W) 0 = No effect.
                                                                 1 = Adds a half clock delay to the bit 4 of the write data path. */
        uint32_t dq4_en_sw_half_cycle  : 1;  /**< [  5:  5](R/W) Enables the software half cycle shift. This determines if write data is transferred to the clk_wr
                                                                 domain on the positive or negative edge of the PHY clock.
                                                                 This field is valid when dq4_sw_dq_phase_bypass is low.
                                                                 0 = Hardware automatically controls any shifting needed for the write level delay line.
                                                                 1 = The setting in the dq4_sw_half_cycle_shift field this reg defines the shift.
                                                                 Note: If the user chooses to control the half cycle shift manually, it is important that the
                                                                 dq4_sw_half_cycle_shift field (bit [16]) of the phy_wr_deskew_pd_ctrl_reg parameter be
                                                                 cleared to '0' if the delay is less than a 1/2 cycle and set to '1' if the delay is greater than
                                                                 a 1/2 cycle. It is recommended to allow the hardware to control this automatically. */
        uint32_t dq4_sw_dq_phase_bypass : 1; /**< [  6:  6](R/W) 0 = Use phase detect circuit to determine the half_cycle_shift.
                                                                 1 = Use the clk_wr_delay delay line setting to determine the half_cycle_shift. A delay line
                                                                 setting of 0x00-0x7f means half_cycle_shift = 0 and a delay line setting of 0x80-0xff
                                                                 means half_cycle_shift = 1. */
        uint32_t reserved_7            : 1;
        uint32_t dq5_phase_detect_sel  : 3;  /**< [ 10:  8](R/W) DLL Phase Detect Selector for DQ generation to handle the clock domain crossing between the clock
                                                                 and clk_wr signal. Selects the number of delay elements to be inserted between the phase detect
                                                                 flip-flops. Defaults to 0x0.
                                                                 0x0 = One delay element.
                                                                 0x1 = Two delay element.
                                                                 0x2 = Three delay element.
                                                                 0x3 = Four delay element.
                                                                 0x4 = Five delay element.
                                                                 0x5 = Six delay element.
                                                                 0x6 = Seven delay element.
                                                                 0x7 = Eight delay element. */
        uint32_t reserved_11           : 1;
        uint32_t dq5_sw_half_cycle_shift : 1;/**< [ 12: 12](R/W) 0 = No effect.
                                                                 1 = Adds a half clock delay to the bit 5 of the write data path. */
        uint32_t dq5_en_sw_half_cycle  : 1;  /**< [ 13: 13](R/W) Enables the software half cycle shift. This determines if write data is transferred to the clk_wr
                                                                 domain on the positive or negative edge of the PHY clock.
                                                                 This field is valid when dq5_sw_dq_phase_bypass is low.
                                                                 0 = Hardware automatically controls any shifting needed for the write level delay line.
                                                                 1 = The setting in the dq5_sw_half_cycle_shift field this reg defines the shift.
                                                                 Note: If the user chooses to control the half cycle shift manually, it is important that the
                                                                 dq5_sw_half_cycle_shift field (bit [20]) of the phy_wr_deskew_pd_ctrl_reg parameter be
                                                                 cleared to '0' if the delay is less than a 1/2 cycle and set to '1' if the delay is greater than
                                                                 a 1/2 cycle. It is recommended to allow the hardware to control this automatically. */
        uint32_t dq5_sw_dq_phase_bypass : 1; /**< [ 14: 14](R/W) 0 = Use phase detect circuit to determine the half_cycle_shift.
                                                                 1 = Use the clk_wr_delay delay line setting to determine the half_cycle_shift. A delay line
                                                                 setting of 0x00-0x7f means half_cycle_shift = 0 and a delay line setting of 0x80-0xff
                                                                 means half_cycle_shift = 1. */
        uint32_t reserved_15           : 1;
        uint32_t dq6_phase_detect_sel  : 3;  /**< [ 18: 16](R/W) DLL Phase Detect Selector for DQ generation to handle the clock domain crossing between the clock
                                                                 and clk_wr signal. Selects the number of delay elements to be inserted between the phase detect
                                                                 flip-flops. Defaults to 0x0.
                                                                 0x0 = One delay element.
                                                                 0x1 = Two delay element.
                                                                 0x2 = Three delay element.
                                                                 0x3 = Four delay element.
                                                                 0x4 = Five delay element.
                                                                 0x5 = Six delay element.
                                                                 0x6 = Seven delay element.
                                                                 0x7 = Eight delay element. */
        uint32_t reserved_19           : 1;
        uint32_t dq6_sw_half_cycle_shift : 1;/**< [ 20: 20](R/W) 0 = No effect.
                                                                 1 = Adds a half clock delay to the bit 6 of the write data path. */
        uint32_t dq6_en_sw_half_cycle  : 1;  /**< [ 21: 21](R/W) Enables the software half cycle shift. This determines if write data is transferred to the clk_wr
                                                                 domain on the positive or negative edge of the PHY clock. This field is valid when
                                                                 dq6_sw_dq_phase_bypass is low.
                                                                 0 = Hardware automatically controls any shifting needed for the write level delay line.
                                                                 1 = The setting in the dq6_sw_half_cycle_shift field this reg defines the shift.
                                                                 Note: If the user chooses to control the half cycle shift manually, it is important that the
                                                                 dq6_sw_half_cycle_shift field (bit [24]) of the phy_wr_deskew_pd_ctrl_reg parameter be cleared to
                                                                 '0' if the delay is less than a 1/2 cycle and set to '1' if the delay is greater than a 1/2 cycle.
                                                                 It is recommended to allow the hardware to control this automatically. */
        uint32_t dq6_sw_dq_phase_bypass : 1; /**< [ 22: 22](R/W) 0 = Use phase detect circuit to determine the half_cycle_shift.
                                                                 1 = Use the clk_wr_delay delay line setting to determine the half_cycle_shift. A delay line
                                                                 setting of 0x00-0x7f means half_cycle_shift = 0 and a delay line setting of 0x80-0xff
                                                                 means half_cycle_shift = 1. */
        uint32_t reserved_23           : 1;
        uint32_t dq7_phase_detect_sel  : 3;  /**< [ 26: 24](R/W) DLL Phase Detect Selector for DQ generation to handle the clock domain crossing between the clock
                                                                 and clk_wr signal. Selects the number of delay elements to be inserted between the phase detect
                                                                 flip-flops. Defaults to 0x0.
                                                                 0x0 = One delay element.
                                                                 0x1 = Two delay element.
                                                                 0x2 = Three delay element.
                                                                 0x3 = Four delay element.
                                                                 0x4 = Five delay element.
                                                                 0x5 = Six delay element.
                                                                 0x6 = Seven delay element.
                                                                 0x7 = Eight delay element. */
        uint32_t reserved_27           : 1;
        uint32_t dq7_sw_half_cycle_shift : 1;/**< [ 28: 28](R/W) 0 = No effect.
                                                                 1 = Adds a half clock delay to the bit 7 of the write data path. */
        uint32_t dq7_en_sw_half_cycle  : 1;  /**< [ 29: 29](R/W) Enables the software half cycle shift. This determines if write data is transferred to the clk_wr
                                                                 domain on the positive or negative edge of the PHY clock. This field is valid when
                                                                 dq7_sw_dq_phase_bypass is low.
                                                                 0 = Hardware automatically controls any shifting needed for the write level delay line.
                                                                 1 = The setting in the dq7_sw_half_cycle_shift field of this reg defines the shift.
                                                                 Note: If the user chooses to control the half cycle shift manually, it is important that the
                                                                 dq7_sw_half_cycle_shift field (bit [28]) of the phy_wr_deskew_pd_ctrl_reg parameter be cleared to
                                                                 '0' if the delay is less than a 1/2 cycle and set to '1' if the delay is greater than a 1/2 cycle.
                                                                 It is recommended to allow the hardware to control this automatically. */
        uint32_t dq7_sw_dq_phase_bypass : 1; /**< [ 30: 30](R/W) 0 = Use phase detect circuit to determine the half_cycle_shift.
                                                                 1 = Use the clk_wr_delay delay line setting to determine the half_cycle_shift. A delay line
                                                                 setting of 0x00-0x7f means half_cycle_shift = 0 and a delay line setting of 0x80-0xff
                                                                 means half_cycle_shift = 1. */
        uint32_t reserved_31           : 1;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_phy_dataslice_rfile_phy_wr_deskew_pd_ctrl_1_s cn; */
};
typedef union cavm_spix_phy_dataslice_rfile_phy_wr_deskew_pd_ctrl_1 cavm_spix_phy_dataslice_rfile_phy_wr_deskew_pd_ctrl_1_t;

static inline uint64_t CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW_PD_CTRL_1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW_PD_CTRL_1(uint64_t a)
{
    if (a<=1)
        return 0x804000002038ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW_PD_CTRL_1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW_PD_CTRL_1(a) cavm_spix_phy_dataslice_rfile_phy_wr_deskew_pd_ctrl_1_t
#define bustype_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW_PD_CTRL_1(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW_PD_CTRL_1(a) "SPIX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW_PD_CTRL_1"
#define device_bar_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW_PD_CTRL_1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW_PD_CTRL_1(a) (a)
#define arguments_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW_PD_CTRL_1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_phy_dataslice_rfile_phy_wr_rd_deskew_cmd
 *
 * SPI PHY Dataslice Rfile PHY Wr Rd Deskew Command Register
 * This register holds the values of delay of CMD bit on the write and read path as
 * well as the values of
 * phase detect block for CMD bit on the write path.
 */
union cavm_spix_phy_dataslice_rfile_phy_wr_rd_deskew_cmd
{
    uint32_t u;
    struct cavm_spix_phy_dataslice_rfile_phy_wr_rd_deskew_cmd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_28_31        : 4;
        uint32_t rd_cmd_deskew_delay   : 4;  /**< [ 27: 24](R/W) Deskew delay for CMD signal. */
        uint32_t reserved_17_23        : 7;
        uint32_t cmd_clkperiod_delay   : 1;  /**< [ 16: 16](R/W) Defines additional latency on the CMD signal. */
        uint32_t reserved_15           : 1;
        uint32_t cmd_sw_dq_phase_bypass : 1; /**< [ 14: 14](R/W) 0x0 = Use phase detect circuit to determine the half_cycle_shift.
                                                                 0x1 = Use the clk_wr_delay delay line setting to determine the half_cycle_shift. A delay line
                                                                 setting of 0x00-0x7f means half_cycle_shift = 0 and a delay line setting of 0x80-0xff
                                                                 means half_cycle_shift = 1. */
        uint32_t cmd_en_sw_half_cycle  : 1;  /**< [ 13: 13](R/W) Enables the software half cycle shift. This determines if write data is transferred to the clk_wr
                                                                 domain on the positive or negative edge of the PHY clock. this field is valid when
                                                                 [CMD_SW_DQ_PHASE_BYPASS] is low.
                                                                 0 = Hardware automatically controls any shifting needed for the write level delay line.
                                                                 1 = The setting in [CMD_SW_HALF_CYCLE_SHIFT] of this reg defines the shift.
                                                                 Note: If the user chooses to control the half cycle shift manually, it is important that
                                                                 [CMD_SW_HALF_CYCLE_SHIFT] (bit [12]) of
                                                                 SPI()_PHY_DATASLICE_RFILE_PHY_WR_RD_DESKEW_CMD be cleared to
                                                                 '0' if the delay is less than a 1/2 cycle and set to '1' if the delay is greater than a 1/2 cycle.
                                                                 It is recommended to allow the hardware to control this automatically. */
        uint32_t cmd_sw_half_cycle_shift : 1;/**< [ 12: 12](R/W) 0 = No effect.
                                                                 1 = Adds a half clock delay to the bit of the write cmd path. */
        uint32_t reserved_11           : 1;
        uint32_t cmd_phase_detect_sel  : 3;  /**< [ 10:  8](R/W) DLL Phase Detect Selector for CMD generation to handle the clock domain crossing between the clock
                                                                 and clk_wr signal. Selects the number of delay elements to be inserted between the phase detect
                                                                 flip-flops. Defaults to 0x0.
                                                                 0x0 = One delay element.
                                                                 0x1 = Two delay element.
                                                                 0x2 = Three delay element.
                                                                 0x3 = Four delay element.
                                                                 0x4 = Five delay element.
                                                                 0x5 = Six delay element.
                                                                 0x6 = Seven delay element.
                                                                 0x7 = Eight delay element. */
        uint32_t reserved_4_7          : 4;
        uint32_t wr_cmd_deskew_delay   : 4;  /**< [  3:  0](R/W) Deskew delay for CMD signal. */
#else /* Word 0 - Little Endian */
        uint32_t wr_cmd_deskew_delay   : 4;  /**< [  3:  0](R/W) Deskew delay for CMD signal. */
        uint32_t reserved_4_7          : 4;
        uint32_t cmd_phase_detect_sel  : 3;  /**< [ 10:  8](R/W) DLL Phase Detect Selector for CMD generation to handle the clock domain crossing between the clock
                                                                 and clk_wr signal. Selects the number of delay elements to be inserted between the phase detect
                                                                 flip-flops. Defaults to 0x0.
                                                                 0x0 = One delay element.
                                                                 0x1 = Two delay element.
                                                                 0x2 = Three delay element.
                                                                 0x3 = Four delay element.
                                                                 0x4 = Five delay element.
                                                                 0x5 = Six delay element.
                                                                 0x6 = Seven delay element.
                                                                 0x7 = Eight delay element. */
        uint32_t reserved_11           : 1;
        uint32_t cmd_sw_half_cycle_shift : 1;/**< [ 12: 12](R/W) 0 = No effect.
                                                                 1 = Adds a half clock delay to the bit of the write cmd path. */
        uint32_t cmd_en_sw_half_cycle  : 1;  /**< [ 13: 13](R/W) Enables the software half cycle shift. This determines if write data is transferred to the clk_wr
                                                                 domain on the positive or negative edge of the PHY clock. this field is valid when
                                                                 [CMD_SW_DQ_PHASE_BYPASS] is low.
                                                                 0 = Hardware automatically controls any shifting needed for the write level delay line.
                                                                 1 = The setting in [CMD_SW_HALF_CYCLE_SHIFT] of this reg defines the shift.
                                                                 Note: If the user chooses to control the half cycle shift manually, it is important that
                                                                 [CMD_SW_HALF_CYCLE_SHIFT] (bit [12]) of
                                                                 SPI()_PHY_DATASLICE_RFILE_PHY_WR_RD_DESKEW_CMD be cleared to
                                                                 '0' if the delay is less than a 1/2 cycle and set to '1' if the delay is greater than a 1/2 cycle.
                                                                 It is recommended to allow the hardware to control this automatically. */
        uint32_t cmd_sw_dq_phase_bypass : 1; /**< [ 14: 14](R/W) 0x0 = Use phase detect circuit to determine the half_cycle_shift.
                                                                 0x1 = Use the clk_wr_delay delay line setting to determine the half_cycle_shift. A delay line
                                                                 setting of 0x00-0x7f means half_cycle_shift = 0 and a delay line setting of 0x80-0xff
                                                                 means half_cycle_shift = 1. */
        uint32_t reserved_15           : 1;
        uint32_t cmd_clkperiod_delay   : 1;  /**< [ 16: 16](R/W) Defines additional latency on the CMD signal. */
        uint32_t reserved_17_23        : 7;
        uint32_t rd_cmd_deskew_delay   : 4;  /**< [ 27: 24](R/W) Deskew delay for CMD signal. */
        uint32_t reserved_28_31        : 4;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_phy_dataslice_rfile_phy_wr_rd_deskew_cmd_s cn; */
};
typedef union cavm_spix_phy_dataslice_rfile_phy_wr_rd_deskew_cmd cavm_spix_phy_dataslice_rfile_phy_wr_rd_deskew_cmd_t;

static inline uint64_t CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_WR_RD_DESKEW_CMD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_WR_RD_DESKEW_CMD(uint64_t a)
{
    if (a<=1)
        return 0x804000002030ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_PHY_DATASLICE_RFILE_PHY_WR_RD_DESKEW_CMD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_WR_RD_DESKEW_CMD(a) cavm_spix_phy_dataslice_rfile_phy_wr_rd_deskew_cmd_t
#define bustype_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_WR_RD_DESKEW_CMD(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_WR_RD_DESKEW_CMD(a) "SPIX_PHY_DATASLICE_RFILE_PHY_WR_RD_DESKEW_CMD"
#define device_bar_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_WR_RD_DESKEW_CMD(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_WR_RD_DESKEW_CMD(a) (a)
#define arguments_CAVM_SPIX_PHY_DATASLICE_RFILE_PHY_WR_RD_DESKEW_CMD(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_rf_minictrl_regs_clock_mode_settings
 *
 * SPI Rf Minictrl Regs Clock Mode Settings Register
 * SPI clock mode.
 */
union cavm_spix_rf_minictrl_regs_clock_mode_settings
{
    uint32_t u;
    struct cavm_spix_rf_minictrl_regs_clock_mode_settings_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_1_31         : 31;
        uint32_t spi_clock_mode        : 1;  /**< [  0:  0](R/W) Defines SPI clock mode. For DDR transfers this bit should always be set low to meet DDR Flash
                                                                 timings. For SDR transfers, allowable values are as follows:
                                                                 0 = SPI MODE 0 (clock is low when SPI bus is in idle).
                                                                 1 = SPI MODE 3 (clock is high when SPI bus is in idle). */
#else /* Word 0 - Little Endian */
        uint32_t spi_clock_mode        : 1;  /**< [  0:  0](R/W) Defines SPI clock mode. For DDR transfers this bit should always be set low to meet DDR Flash
                                                                 timings. For SDR transfers, allowable values are as follows:
                                                                 0 = SPI MODE 0 (clock is low when SPI bus is in idle).
                                                                 1 = SPI MODE 3 (clock is high when SPI bus is in idle). */
        uint32_t reserved_1_31         : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_rf_minictrl_regs_clock_mode_settings_s cn; */
};
typedef union cavm_spix_rf_minictrl_regs_clock_mode_settings cavm_spix_rf_minictrl_regs_clock_mode_settings_t;

static inline uint64_t CAVM_SPIX_RF_MINICTRL_REGS_CLOCK_MODE_SETTINGS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_RF_MINICTRL_REGS_CLOCK_MODE_SETTINGS(uint64_t a)
{
    if (a<=1)
        return 0x804000001008ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_RF_MINICTRL_REGS_CLOCK_MODE_SETTINGS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_RF_MINICTRL_REGS_CLOCK_MODE_SETTINGS(a) cavm_spix_rf_minictrl_regs_clock_mode_settings_t
#define bustype_CAVM_SPIX_RF_MINICTRL_REGS_CLOCK_MODE_SETTINGS(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_RF_MINICTRL_REGS_CLOCK_MODE_SETTINGS(a) "SPIX_RF_MINICTRL_REGS_CLOCK_MODE_SETTINGS"
#define device_bar_CAVM_SPIX_RF_MINICTRL_REGS_CLOCK_MODE_SETTINGS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_RF_MINICTRL_REGS_CLOCK_MODE_SETTINGS(a) (a)
#define arguments_CAVM_SPIX_RF_MINICTRL_REGS_CLOCK_MODE_SETTINGS(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_rf_minictrl_regs_dev_active_max_reg
 *
 * SPI Rf Minictrl Regs Dev Active Max Register
 * "This register is used to introduce maximum number of xspi_clk cycles through which
 * CS# will be kept
 * active (low) on memory interface."
 */
union cavm_spix_rf_minictrl_regs_dev_active_max_reg
{
    uint32_t u;
    struct cavm_spix_rf_minictrl_regs_dev_active_max_reg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t dev_active_max        : 32; /**< [ 31:  0](R/W) The value in this field is only valid if bit[125] (TCMS_EN) of READ_PROFILE_1, PP_PROFILE_1 or
                                                                 CMD_CODE_SEQ is set high. This timing should be enabled only while working with RAM devices which
                                                                 require timing constraint for Chip Select low pulse width (the most common name is tCMS or tCEM in
                                                                 device specification). If any of READ_PROFILE_1, PP_PROFILE_1 or CMD_CODE_SEQ sequence is glued
                                                                 with DATA_SEQ, the controller internally calculates transaction timing (providing bit[125]
                                                                 (TCMS_EN) is enabled) and splits requested sequence for smaller  pieces keeping track on not
                                                                 exceeding [DEV_ACTIVE_MAX] (the transactions being split do not need to last
                                                                 exactly [DEV_ACTIVE_MAX]
                                                                 number of cycles but slightly less depending on word alignment). The software must configure this
                                                                 timing to be greater than the smallest possible to formulate minimal sub-sequence out of requested
                                                                 sequence: ([DEV_ACTIVE_MAX] \> CSSOT + Command/address phase + dummy phase + 8B (single system data
                                                                 word) + CSEOT + 1 (controller latency)). The assumption is made that operation frequency is
                                                                 selected fast enough to handle all other commands supported by xSPI RAM Device without Chip Select
                                                                 low pulse width timing violation. */
#else /* Word 0 - Little Endian */
        uint32_t dev_active_max        : 32; /**< [ 31:  0](R/W) The value in this field is only valid if bit[125] (TCMS_EN) of READ_PROFILE_1, PP_PROFILE_1 or
                                                                 CMD_CODE_SEQ is set high. This timing should be enabled only while working with RAM devices which
                                                                 require timing constraint for Chip Select low pulse width (the most common name is tCMS or tCEM in
                                                                 device specification). If any of READ_PROFILE_1, PP_PROFILE_1 or CMD_CODE_SEQ sequence is glued
                                                                 with DATA_SEQ, the controller internally calculates transaction timing (providing bit[125]
                                                                 (TCMS_EN) is enabled) and splits requested sequence for smaller  pieces keeping track on not
                                                                 exceeding [DEV_ACTIVE_MAX] (the transactions being split do not need to last
                                                                 exactly [DEV_ACTIVE_MAX]
                                                                 number of cycles but slightly less depending on word alignment). The software must configure this
                                                                 timing to be greater than the smallest possible to formulate minimal sub-sequence out of requested
                                                                 sequence: ([DEV_ACTIVE_MAX] \> CSSOT + Command/address phase + dummy phase + 8B (single system data
                                                                 word) + CSEOT + 1 (controller latency)). The assumption is made that operation frequency is
                                                                 selected fast enough to handle all other commands supported by xSPI RAM Device without Chip Select
                                                                 low pulse width timing violation. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_rf_minictrl_regs_dev_active_max_reg_s cn; */
};
typedef union cavm_spix_rf_minictrl_regs_dev_active_max_reg cavm_spix_rf_minictrl_regs_dev_active_max_reg_t;

static inline uint64_t CAVM_SPIX_RF_MINICTRL_REGS_DEV_ACTIVE_MAX_REG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_RF_MINICTRL_REGS_DEV_ACTIVE_MAX_REG(uint64_t a)
{
    if (a<=1)
        return 0x804000001018ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_RF_MINICTRL_REGS_DEV_ACTIVE_MAX_REG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_RF_MINICTRL_REGS_DEV_ACTIVE_MAX_REG(a) cavm_spix_rf_minictrl_regs_dev_active_max_reg_t
#define bustype_CAVM_SPIX_RF_MINICTRL_REGS_DEV_ACTIVE_MAX_REG(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_RF_MINICTRL_REGS_DEV_ACTIVE_MAX_REG(a) "SPIX_RF_MINICTRL_REGS_DEV_ACTIVE_MAX_REG"
#define device_bar_CAVM_SPIX_RF_MINICTRL_REGS_DEV_ACTIVE_MAX_REG(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_RF_MINICTRL_REGS_DEV_ACTIVE_MAX_REG(a) (a)
#define arguments_CAVM_SPIX_RF_MINICTRL_REGS_DEV_ACTIVE_MAX_REG(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_rf_minictrl_regs_dev_delay_reg
 *
 * SPI Rf Minictrl Regs Dev Delay Register
 * This register is used to introduce relative device selection delays with respect to generated xSPI
 * Flash Interface.
 */
union cavm_spix_rf_minictrl_regs_dev_delay_reg
{
    uint32_t u;
    struct cavm_spix_rf_minictrl_regs_dev_delay_reg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t csda_min_delay        : 8;  /**< [ 31: 24](R/W) Minimum chip select de-assertion timing. */
        uint32_t reserved_16_23        : 8;
        uint32_t cseot_delay           : 8;  /**< [ 15:  8](R/W) Chip select end-of-transfer. It allows to improve last active clock edge to CS de-assertion device
                                                                 timing. */
        uint32_t cssot_delay           : 8;  /**< [  7:  0](R/W) Chip select start-of-transfer. It allows to improve CS de-assertion device timing to first active
                                                                 clock edge. */
#else /* Word 0 - Little Endian */
        uint32_t cssot_delay           : 8;  /**< [  7:  0](R/W) Chip select start-of-transfer. It allows to improve CS de-assertion device timing to first active
                                                                 clock edge. */
        uint32_t cseot_delay           : 8;  /**< [ 15:  8](R/W) Chip select end-of-transfer. It allows to improve last active clock edge to CS de-assertion device
                                                                 timing. */
        uint32_t reserved_16_23        : 8;
        uint32_t csda_min_delay        : 8;  /**< [ 31: 24](R/W) Minimum chip select de-assertion timing. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_rf_minictrl_regs_dev_delay_reg_s cn; */
};
typedef union cavm_spix_rf_minictrl_regs_dev_delay_reg cavm_spix_rf_minictrl_regs_dev_delay_reg_t;

static inline uint64_t CAVM_SPIX_RF_MINICTRL_REGS_DEV_DELAY_REG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_RF_MINICTRL_REGS_DEV_DELAY_REG(uint64_t a)
{
    if (a<=1)
        return 0x804000001010ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_RF_MINICTRL_REGS_DEV_DELAY_REG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_RF_MINICTRL_REGS_DEV_DELAY_REG(a) cavm_spix_rf_minictrl_regs_dev_delay_reg_t
#define bustype_CAVM_SPIX_RF_MINICTRL_REGS_DEV_DELAY_REG(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_RF_MINICTRL_REGS_DEV_DELAY_REG(a) "SPIX_RF_MINICTRL_REGS_DEV_DELAY_REG"
#define device_bar_CAVM_SPIX_RF_MINICTRL_REGS_DEV_DELAY_REG(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_RF_MINICTRL_REGS_DEV_DELAY_REG(a) (a)
#define arguments_CAVM_SPIX_RF_MINICTRL_REGS_DEV_DELAY_REG(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_rf_minictrl_regs_dll_phy_ctrl
 *
 * SPI Rf Minictrl Regs DLL PHY Control Register
 * Configuration of the resynchronization of slave DLL of PHY. When the PHY is used
 * with the xSPI
 * controller, this register is automatically updated by the device discovery module during
 * initialization.
 */
union cavm_spix_rf_minictrl_regs_dll_phy_ctrl
{
    uint32_t u;
    struct cavm_spix_rf_minictrl_regs_dll_phy_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_26_31        : 6;
        uint32_t dfi_ctrlupd_req       : 1;  /**< [ 25: 25](R/W) Signal to re-synchronize the DLLs and read and write FIFO pointers. To send the update request to
                                                                 the PHY, the host must first set this field high then wait until this bit will be set low. This
                                                                 signal should not be used when automatic resync is enabled that is:. [DLL_PHY_UPDATE_CNT] is not
                                                                 zero. */
        uint32_t dll_rst_n             : 1;  /**< [ 24: 24](R/W) Signal to reset the DLLs of the PHY and start searching for lock again. */
        uint32_t reserved_22_23        : 2;
        uint32_t sdr_edge_active       : 1;  /**< [ 21: 21](R/W) The PHY samples data on both edges of sampling clock. In SDR Mode, only one sample is needed. If
                                                                 this bit is low, the controller propagates data from positive edge of PHY sampling clock. If this
                                                                 bit is high, the controller propagates data from negative edge of PHY sampling clock. In DDR Mode,
                                                                 this bit should be set low. */
        uint32_t dqs_last_data_drop_en : 1;  /**< [ 20: 20](R/W) This bit should be set when the Flash Device being used issues data on negative edge of Flash clock
                                                                 and returns them with DQS and the PHY is configured to sample data in DQS Mode. In this case,
                                                                 number of DQS edges equals to number of requested data + 1. If this bit is set, the controller
                                                                 internally requests this redundant data at the end of the transfer cleaning up the PHY FIFO. */
        uint32_t reserved_18_19        : 2;
        uint32_t extended_wr_mode      : 1;  /**< [ 17: 17](R/W) PHY functionality not applicable for xSPI flash controller. */
        uint32_t extended_rd_mode      : 1;  /**< [ 16: 16](R/W) PHY functionality not applicable for xSPI flash controller. */
        uint32_t reserved_12_15        : 4;
        uint32_t resync_high_wait_cnt  : 4;  /**< [ 11:  8](R/W) This field defines the number of minicontroller clock cycles (xspi_clk) for  which the DLL update
                                                                 request ([DFI_CTRLUPD_REQ]) has to be asserted to resynchronize the DLLs and read and write FIFO
                                                                 pointers. */
        uint32_t resync_idle_cnt       : 8;  /**< [  7:  0](R/W) This field defines the wait time (in terms of minicontroller clock cycles (xspi_clk)) between the
                                                                 de-assertion of the DLL update request ([DFI_CTRLUPD_REQ]) and resuming traffic to the PHY. */
#else /* Word 0 - Little Endian */
        uint32_t resync_idle_cnt       : 8;  /**< [  7:  0](R/W) This field defines the wait time (in terms of minicontroller clock cycles (xspi_clk)) between the
                                                                 de-assertion of the DLL update request ([DFI_CTRLUPD_REQ]) and resuming traffic to the PHY. */
        uint32_t resync_high_wait_cnt  : 4;  /**< [ 11:  8](R/W) This field defines the number of minicontroller clock cycles (xspi_clk) for  which the DLL update
                                                                 request ([DFI_CTRLUPD_REQ]) has to be asserted to resynchronize the DLLs and read and write FIFO
                                                                 pointers. */
        uint32_t reserved_12_15        : 4;
        uint32_t extended_rd_mode      : 1;  /**< [ 16: 16](R/W) PHY functionality not applicable for xSPI flash controller. */
        uint32_t extended_wr_mode      : 1;  /**< [ 17: 17](R/W) PHY functionality not applicable for xSPI flash controller. */
        uint32_t reserved_18_19        : 2;
        uint32_t dqs_last_data_drop_en : 1;  /**< [ 20: 20](R/W) This bit should be set when the Flash Device being used issues data on negative edge of Flash clock
                                                                 and returns them with DQS and the PHY is configured to sample data in DQS Mode. In this case,
                                                                 number of DQS edges equals to number of requested data + 1. If this bit is set, the controller
                                                                 internally requests this redundant data at the end of the transfer cleaning up the PHY FIFO. */
        uint32_t sdr_edge_active       : 1;  /**< [ 21: 21](R/W) The PHY samples data on both edges of sampling clock. In SDR Mode, only one sample is needed. If
                                                                 this bit is low, the controller propagates data from positive edge of PHY sampling clock. If this
                                                                 bit is high, the controller propagates data from negative edge of PHY sampling clock. In DDR Mode,
                                                                 this bit should be set low. */
        uint32_t reserved_22_23        : 2;
        uint32_t dll_rst_n             : 1;  /**< [ 24: 24](R/W) Signal to reset the DLLs of the PHY and start searching for lock again. */
        uint32_t dfi_ctrlupd_req       : 1;  /**< [ 25: 25](R/W) Signal to re-synchronize the DLLs and read and write FIFO pointers. To send the update request to
                                                                 the PHY, the host must first set this field high then wait until this bit will be set low. This
                                                                 signal should not be used when automatic resync is enabled that is:. [DLL_PHY_UPDATE_CNT] is not
                                                                 zero. */
        uint32_t reserved_26_31        : 6;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_rf_minictrl_regs_dll_phy_ctrl_s cn; */
};
typedef union cavm_spix_rf_minictrl_regs_dll_phy_ctrl cavm_spix_rf_minictrl_regs_dll_phy_ctrl_t;

static inline uint64_t CAVM_SPIX_RF_MINICTRL_REGS_DLL_PHY_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_RF_MINICTRL_REGS_DLL_PHY_CTRL(uint64_t a)
{
    if (a<=1)
        return 0x804000001034ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_RF_MINICTRL_REGS_DLL_PHY_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_RF_MINICTRL_REGS_DLL_PHY_CTRL(a) cavm_spix_rf_minictrl_regs_dll_phy_ctrl_t
#define bustype_CAVM_SPIX_RF_MINICTRL_REGS_DLL_PHY_CTRL(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_RF_MINICTRL_REGS_DLL_PHY_CTRL(a) "SPIX_RF_MINICTRL_REGS_DLL_PHY_CTRL"
#define device_bar_CAVM_SPIX_RF_MINICTRL_REGS_DLL_PHY_CTRL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_RF_MINICTRL_REGS_DLL_PHY_CTRL(a) (a)
#define arguments_CAVM_SPIX_RF_MINICTRL_REGS_DLL_PHY_CTRL(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_rf_minictrl_regs_dll_phy_update_cnt
 *
 * SPI Rf Minictrl Regs DLL PHY Update Cnt Register
 * Configuration of the resynchronization of slave DLL of PHY.
 */
union cavm_spix_rf_minictrl_regs_dll_phy_update_cnt
{
    uint32_t u;
    struct cavm_spix_rf_minictrl_regs_dll_phy_update_cnt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t resync_cnt            : 32; /**< [ 31:  0](R/W) This field defines the time interval (in terms of minicontroller clock cycles (xspi_clk)) to send
                                                                 an update (assert dfi_ctrlupd_req high) to the PHY to re-synchronize the slave DLL values with
                                                                 that of the master DLL and to also re-synchronize the read and write FIFO pointers in the read
                                                                 path. If the value in this field is zero, the controller will not send DLL update requests to the
                                                                 PHY after it completes last DLL update request (if there is one in progress). dfi_ctrlupd_req
                                                                 signal can be controlled directly by the host using
                                                                 SPI()_RF_MINICTRL_REGS_DLL_PHY_CTRL[DFI_CTRLUPD_REQ].
                                                                 NOTE: While this feature is enabled the access to the PHY registers shall not be performed. */
#else /* Word 0 - Little Endian */
        uint32_t resync_cnt            : 32; /**< [ 31:  0](R/W) This field defines the time interval (in terms of minicontroller clock cycles (xspi_clk)) to send
                                                                 an update (assert dfi_ctrlupd_req high) to the PHY to re-synchronize the slave DLL values with
                                                                 that of the master DLL and to also re-synchronize the read and write FIFO pointers in the read
                                                                 path. If the value in this field is zero, the controller will not send DLL update requests to the
                                                                 PHY after it completes last DLL update request (if there is one in progress). dfi_ctrlupd_req
                                                                 signal can be controlled directly by the host using
                                                                 SPI()_RF_MINICTRL_REGS_DLL_PHY_CTRL[DFI_CTRLUPD_REQ].
                                                                 NOTE: While this feature is enabled the access to the PHY registers shall not be performed. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_rf_minictrl_regs_dll_phy_update_cnt_s cn; */
};
typedef union cavm_spix_rf_minictrl_regs_dll_phy_update_cnt cavm_spix_rf_minictrl_regs_dll_phy_update_cnt_t;

static inline uint64_t CAVM_SPIX_RF_MINICTRL_REGS_DLL_PHY_UPDATE_CNT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_RF_MINICTRL_REGS_DLL_PHY_UPDATE_CNT(uint64_t a)
{
    if (a<=1)
        return 0x804000001030ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_RF_MINICTRL_REGS_DLL_PHY_UPDATE_CNT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_RF_MINICTRL_REGS_DLL_PHY_UPDATE_CNT(a) cavm_spix_rf_minictrl_regs_dll_phy_update_cnt_t
#define bustype_CAVM_SPIX_RF_MINICTRL_REGS_DLL_PHY_UPDATE_CNT(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_RF_MINICTRL_REGS_DLL_PHY_UPDATE_CNT(a) "SPIX_RF_MINICTRL_REGS_DLL_PHY_UPDATE_CNT"
#define device_bar_CAVM_SPIX_RF_MINICTRL_REGS_DLL_PHY_UPDATE_CNT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_RF_MINICTRL_REGS_DLL_PHY_UPDATE_CNT(a) (a)
#define arguments_CAVM_SPIX_RF_MINICTRL_REGS_DLL_PHY_UPDATE_CNT(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_rf_minictrl_regs_hf_offset_reg
 *
 * SPI Rf Minictrl Regs Hf Offset Register
 * This register is used to decode Legacy Hyper Flash and xSPI Profile 2.0 address into
 * interface address
 * taking into account "reserved" area in command format.
 */
union cavm_spix_rf_minictrl_regs_hf_offset_reg
{
    uint32_t u;
    struct cavm_spix_rf_minictrl_regs_hf_offset_reg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_14_31        : 18;
        uint32_t hf_offset_size        : 6;  /**< [ 13:  8](R/W) Offset size of reserved area in command format. */
        uint32_t reserved_6_7          : 2;
        uint32_t hf_offset_index       : 6;  /**< [  5:  0](R/W) Starting index of reserved area in command format. */
#else /* Word 0 - Little Endian */
        uint32_t hf_offset_index       : 6;  /**< [  5:  0](R/W) Starting index of reserved area in command format. */
        uint32_t reserved_6_7          : 2;
        uint32_t hf_offset_size        : 6;  /**< [ 13:  8](R/W) Offset size of reserved area in command format. */
        uint32_t reserved_14_31        : 18;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_rf_minictrl_regs_hf_offset_reg_s cn; */
};
typedef union cavm_spix_rf_minictrl_regs_hf_offset_reg cavm_spix_rf_minictrl_regs_hf_offset_reg_t;

static inline uint64_t CAVM_SPIX_RF_MINICTRL_REGS_HF_OFFSET_REG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_RF_MINICTRL_REGS_HF_OFFSET_REG(uint64_t a)
{
    if (a<=1)
        return 0x804000001020ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_RF_MINICTRL_REGS_HF_OFFSET_REG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_RF_MINICTRL_REGS_HF_OFFSET_REG(a) cavm_spix_rf_minictrl_regs_hf_offset_reg_t
#define bustype_CAVM_SPIX_RF_MINICTRL_REGS_HF_OFFSET_REG(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_RF_MINICTRL_REGS_HF_OFFSET_REG(a) "SPIX_RF_MINICTRL_REGS_HF_OFFSET_REG"
#define device_bar_CAVM_SPIX_RF_MINICTRL_REGS_HF_OFFSET_REG(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_RF_MINICTRL_REGS_HF_OFFSET_REG(a) (a)
#define arguments_CAVM_SPIX_RF_MINICTRL_REGS_HF_OFFSET_REG(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_rf_minictrl_regs_jedec_rst_timing_reg
 *
 * SPI Rf Minictrl Regs Jedec Rst Timing Register
 * This register is used to introduce relative device selection delays applicable for JEDEC reset
 * instruction.
 */
union cavm_spix_rf_minictrl_regs_jedec_rst_timing_reg
{
    uint32_t u;
    struct cavm_spix_rf_minictrl_regs_jedec_rst_timing_reg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t tcsl_delay            : 8;  /**< [ 15:  8](R/W) Defines how many xspi_clk cycles constitute tCSL timing of JEDEC reset instruction. */
        uint32_t tcsh_delay            : 8;  /**< [  7:  0](R/W) Defines how many xspi_clk cycles constitute tCSH timing of JEDEC reset instruction. */
#else /* Word 0 - Little Endian */
        uint32_t tcsh_delay            : 8;  /**< [  7:  0](R/W) Defines how many xspi_clk cycles constitute tCSH timing of JEDEC reset instruction. */
        uint32_t tcsl_delay            : 8;  /**< [ 15:  8](R/W) Defines how many xspi_clk cycles constitute tCSL timing of JEDEC reset instruction. */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_rf_minictrl_regs_jedec_rst_timing_reg_s cn; */
};
typedef union cavm_spix_rf_minictrl_regs_jedec_rst_timing_reg cavm_spix_rf_minictrl_regs_jedec_rst_timing_reg_t;

static inline uint64_t CAVM_SPIX_RF_MINICTRL_REGS_JEDEC_RST_TIMING_REG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_RF_MINICTRL_REGS_JEDEC_RST_TIMING_REG(uint64_t a)
{
    if (a<=1)
        return 0x80400000100cll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_RF_MINICTRL_REGS_JEDEC_RST_TIMING_REG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_RF_MINICTRL_REGS_JEDEC_RST_TIMING_REG(a) cavm_spix_rf_minictrl_regs_jedec_rst_timing_reg_t
#define bustype_CAVM_SPIX_RF_MINICTRL_REGS_JEDEC_RST_TIMING_REG(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_RF_MINICTRL_REGS_JEDEC_RST_TIMING_REG(a) "SPIX_RF_MINICTRL_REGS_JEDEC_RST_TIMING_REG"
#define device_bar_CAVM_SPIX_RF_MINICTRL_REGS_JEDEC_RST_TIMING_REG(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_RF_MINICTRL_REGS_JEDEC_RST_TIMING_REG(a) (a)
#define arguments_CAVM_SPIX_RF_MINICTRL_REGS_JEDEC_RST_TIMING_REG(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_rf_minictrl_regs_reset_pin_settings
 *
 * SPI Rf Minictrl Regs Reset Pin Settings Register
 * Software-controlled hardware RESET.
 */
union cavm_spix_rf_minictrl_regs_reset_pin_settings
{
    uint32_t u;
    struct cavm_spix_rf_minictrl_regs_reset_pin_settings_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t sw_ctrled_hw_rst_bank7 : 1; /**< [ 15: 15](R/W) "Activates 7th bank for software-controlled hardware reset signal execution as follows (applicable
                                                                 only for #RESET pin option):
                                                                 0 = CS[7] device is disabled for software-controlled hardware reset trigger.
                                                                 1 = CS[7] device is enabled for software-controlled hardware reset trigger." */
        uint32_t sw_ctrled_hw_rst_bank6 : 1; /**< [ 14: 14](R/W) "Activates 6th bank for software-controlled hardware reset signal execution as follows (applicable
                                                                 only for #RESET pin option):
                                                                 0 = CS[6] device is disabled for software-controlled hardware reset trigger.
                                                                 1 = CS[6] device is enabled for software-controlled hardware reset trigger." */
        uint32_t sw_ctrled_hw_rst_bank5 : 1; /**< [ 13: 13](R/W) "Activates 5th bank for software-controlled hardware reset signal execution as follows (applicable
                                                                 only for #RESET pin option):
                                                                 0 = CS[5] device is disabled for software-controlled hardware reset trigger.
                                                                 1 = CS[5] device is enabled for software-controlled hardware reset trigger." */
        uint32_t sw_ctrled_hw_rst_bank4 : 1; /**< [ 12: 12](R/W) "Activates 4th bank for software-controlled hardware reset signal execution as follows (applicable
                                                                 only for #RESET pin option):
                                                                 0 = CS[4] device is disabled for software-controlled hardware reset trigger.
                                                                 1 = CS[4] device is enabled for software-controlled hardware reset trigger." */
        uint32_t sw_ctrled_hw_rst_bank3 : 1; /**< [ 11: 11](R/W) "Activates 3rd bank for software-controlled hardware reset signal execution as follows (applicable
                                                                 only for #RESET pin option):
                                                                 0 = CS[3] device is disabled for software-controlled hardware reset trigger.
                                                                 1 = CS[3] device is enabled for software-controlled hardware reset trigger." */
        uint32_t sw_ctrled_hw_rst_bank2 : 1; /**< [ 10: 10](R/W) "Activates 2nd bank for software-controlled hardware reset signal execution as follows (applicable
                                                                 only for #RESET pin option):
                                                                 0 = CS[2] device is disabled for software-controlled hardware reset trigger.
                                                                 1 = CS[2] device is enabled for software-controlled hardware reset trigger.
                                                                 Reset trigger." */
        uint32_t sw_ctrled_hw_rst_bank1 : 1; /**< [  9:  9](R/W) "Activates 1st bank for software-controlled hardware reset signal execution as follows (applicable
                                                                 only for #RESET pin option):
                                                                 0 = CS[1] device is disabled for software-controlled hardware reset trigger.
                                                                 1 = CS[1] device is enabled for software-controlled hardware reset trigger." */
        uint32_t sw_ctrled_hw_rst_bank0 : 1; /**< [  8:  8](R/W) "Activates 0th bank for software-controlled hardware reset signal execution as follows (applicable
                                                                 only for #RESET pin option):
                                                                 0 = CS[0] device is disabled for software-controlled hardware reset trigger.
                                                                 1 = CS[0] device is enabled for software-controlled hardware reset trigger." */
        uint32_t reserved_5_7          : 3;
        uint32_t sw_ctrled_hw_rst_option : 1;/**< [  4:  4](R/W) "Defines Hardware RESET options as follows:
                                                                 0 = Device RESET# pin will be used for toggling device hardware reset functionality.
                                                                 1 = Device DQ3 pin will be used for toggling device hardware reset functionality." */
        uint32_t reserved_2_3          : 2;
        uint32_t rst_dq3_enable        : 1;  /**< [  1:  1](R/W) Enables passing RESET to the DQ3 port of the device (by switching direction of DQ3 pad). */
        uint32_t sw_ctrled_hw_rst      : 1;  /**< [  0:  0](R/W) "Software-controlled hardware reset signal. Value of this field is directly routed to the DQ3 or
                                                                 RESET# output signal (depending on [SW_CTRLED_HW_RST_OPTION]). The value can be changed only when
                                                                 xSPI Flash interface is in idle state (minicontroller does not perform any sequence). Value of the
                                                                 software-controlled hardware reset signal is overwritten in case DQ3 is valid transaction pin. The
                                                                 controller does not check the device hardware reset setup/hold timings - this must be ensured by
                                                                 the host. The host is also responsible for triggering suitable RESET method by selecting
                                                                 corresponding Bank Number and RESET method (as defined in this register). Controller does not
                                                                 drive RESET# value during read data phase of any active transfer (as transfer direction switches in
                                                                 this transfer part)." */
#else /* Word 0 - Little Endian */
        uint32_t sw_ctrled_hw_rst      : 1;  /**< [  0:  0](R/W) "Software-controlled hardware reset signal. Value of this field is directly routed to the DQ3 or
                                                                 RESET# output signal (depending on [SW_CTRLED_HW_RST_OPTION]). The value can be changed only when
                                                                 xSPI Flash interface is in idle state (minicontroller does not perform any sequence). Value of the
                                                                 software-controlled hardware reset signal is overwritten in case DQ3 is valid transaction pin. The
                                                                 controller does not check the device hardware reset setup/hold timings - this must be ensured by
                                                                 the host. The host is also responsible for triggering suitable RESET method by selecting
                                                                 corresponding Bank Number and RESET method (as defined in this register). Controller does not
                                                                 drive RESET# value during read data phase of any active transfer (as transfer direction switches in
                                                                 this transfer part)." */
        uint32_t rst_dq3_enable        : 1;  /**< [  1:  1](R/W) Enables passing RESET to the DQ3 port of the device (by switching direction of DQ3 pad). */
        uint32_t reserved_2_3          : 2;
        uint32_t sw_ctrled_hw_rst_option : 1;/**< [  4:  4](R/W) "Defines Hardware RESET options as follows:
                                                                 0 = Device RESET# pin will be used for toggling device hardware reset functionality.
                                                                 1 = Device DQ3 pin will be used for toggling device hardware reset functionality." */
        uint32_t reserved_5_7          : 3;
        uint32_t sw_ctrled_hw_rst_bank0 : 1; /**< [  8:  8](R/W) "Activates 0th bank for software-controlled hardware reset signal execution as follows (applicable
                                                                 only for #RESET pin option):
                                                                 0 = CS[0] device is disabled for software-controlled hardware reset trigger.
                                                                 1 = CS[0] device is enabled for software-controlled hardware reset trigger." */
        uint32_t sw_ctrled_hw_rst_bank1 : 1; /**< [  9:  9](R/W) "Activates 1st bank for software-controlled hardware reset signal execution as follows (applicable
                                                                 only for #RESET pin option):
                                                                 0 = CS[1] device is disabled for software-controlled hardware reset trigger.
                                                                 1 = CS[1] device is enabled for software-controlled hardware reset trigger." */
        uint32_t sw_ctrled_hw_rst_bank2 : 1; /**< [ 10: 10](R/W) "Activates 2nd bank for software-controlled hardware reset signal execution as follows (applicable
                                                                 only for #RESET pin option):
                                                                 0 = CS[2] device is disabled for software-controlled hardware reset trigger.
                                                                 1 = CS[2] device is enabled for software-controlled hardware reset trigger.
                                                                 Reset trigger." */
        uint32_t sw_ctrled_hw_rst_bank3 : 1; /**< [ 11: 11](R/W) "Activates 3rd bank for software-controlled hardware reset signal execution as follows (applicable
                                                                 only for #RESET pin option):
                                                                 0 = CS[3] device is disabled for software-controlled hardware reset trigger.
                                                                 1 = CS[3] device is enabled for software-controlled hardware reset trigger." */
        uint32_t sw_ctrled_hw_rst_bank4 : 1; /**< [ 12: 12](R/W) "Activates 4th bank for software-controlled hardware reset signal execution as follows (applicable
                                                                 only for #RESET pin option):
                                                                 0 = CS[4] device is disabled for software-controlled hardware reset trigger.
                                                                 1 = CS[4] device is enabled for software-controlled hardware reset trigger." */
        uint32_t sw_ctrled_hw_rst_bank5 : 1; /**< [ 13: 13](R/W) "Activates 5th bank for software-controlled hardware reset signal execution as follows (applicable
                                                                 only for #RESET pin option):
                                                                 0 = CS[5] device is disabled for software-controlled hardware reset trigger.
                                                                 1 = CS[5] device is enabled for software-controlled hardware reset trigger." */
        uint32_t sw_ctrled_hw_rst_bank6 : 1; /**< [ 14: 14](R/W) "Activates 6th bank for software-controlled hardware reset signal execution as follows (applicable
                                                                 only for #RESET pin option):
                                                                 0 = CS[6] device is disabled for software-controlled hardware reset trigger.
                                                                 1 = CS[6] device is enabled for software-controlled hardware reset trigger." */
        uint32_t sw_ctrled_hw_rst_bank7 : 1; /**< [ 15: 15](R/W) "Activates 7th bank for software-controlled hardware reset signal execution as follows (applicable
                                                                 only for #RESET pin option):
                                                                 0 = CS[7] device is disabled for software-controlled hardware reset trigger.
                                                                 1 = CS[7] device is enabled for software-controlled hardware reset trigger." */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_rf_minictrl_regs_reset_pin_settings_s cn; */
};
typedef union cavm_spix_rf_minictrl_regs_reset_pin_settings cavm_spix_rf_minictrl_regs_reset_pin_settings_t;

static inline uint64_t CAVM_SPIX_RF_MINICTRL_REGS_RESET_PIN_SETTINGS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_RF_MINICTRL_REGS_RESET_PIN_SETTINGS(uint64_t a)
{
    if (a<=1)
        return 0x804000001004ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_RF_MINICTRL_REGS_RESET_PIN_SETTINGS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_RF_MINICTRL_REGS_RESET_PIN_SETTINGS(a) cavm_spix_rf_minictrl_regs_reset_pin_settings_t
#define bustype_CAVM_SPIX_RF_MINICTRL_REGS_RESET_PIN_SETTINGS(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_RF_MINICTRL_REGS_RESET_PIN_SETTINGS(a) "SPIX_RF_MINICTRL_REGS_RESET_PIN_SETTINGS"
#define device_bar_CAVM_SPIX_RF_MINICTRL_REGS_RESET_PIN_SETTINGS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_RF_MINICTRL_REGS_RESET_PIN_SETTINGS(a) (a)
#define arguments_CAVM_SPIX_RF_MINICTRL_REGS_RESET_PIN_SETTINGS(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_rf_minictrl_regs_rst_recovery_reg
 *
 * SPI Rf Minictrl Regs Rst Recovery Register
 * This register is used to introduce relative reset recovery delay with respect to
 * generated xSPI Flash
 * Interface.
 */
union cavm_spix_rf_minictrl_regs_rst_recovery_reg
{
    uint32_t u;
    struct cavm_spix_rf_minictrl_regs_rst_recovery_reg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rst_recovery          : 32; /**< [ 31:  0](R/W) It defines additional delay for CS de-assertion to accommodate device reset recovery timing. */
#else /* Word 0 - Little Endian */
        uint32_t rst_recovery          : 32; /**< [ 31:  0](R/W) It defines additional delay for CS de-assertion to accommodate device reset recovery timing. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_rf_minictrl_regs_rst_recovery_reg_s cn; */
};
typedef union cavm_spix_rf_minictrl_regs_rst_recovery_reg cavm_spix_rf_minictrl_regs_rst_recovery_reg_t;

static inline uint64_t CAVM_SPIX_RF_MINICTRL_REGS_RST_RECOVERY_REG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_RF_MINICTRL_REGS_RST_RECOVERY_REG(uint64_t a)
{
    if (a<=1)
        return 0x804000001014ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_RF_MINICTRL_REGS_RST_RECOVERY_REG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_RF_MINICTRL_REGS_RST_RECOVERY_REG(a) cavm_spix_rf_minictrl_regs_rst_recovery_reg_t
#define bustype_CAVM_SPIX_RF_MINICTRL_REGS_RST_RECOVERY_REG(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_RF_MINICTRL_REGS_RST_RECOVERY_REG(a) "SPIX_RF_MINICTRL_REGS_RST_RECOVERY_REG"
#define device_bar_CAVM_SPIX_RF_MINICTRL_REGS_RST_RECOVERY_REG(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_RF_MINICTRL_REGS_RST_RECOVERY_REG(a) (a)
#define arguments_CAVM_SPIX_RF_MINICTRL_REGS_RST_RECOVERY_REG(a) (a),-1,-1,-1

/**
 * Register (NCB32b) spi#_rf_minictrl_regs_wp_settings
 *
 * SPI Rf Minictrl Regs Wp Settings Register
 * Write Protect.
 */
union cavm_spix_rf_minictrl_regs_wp_settings
{
    uint32_t u;
    struct cavm_spix_rf_minictrl_regs_wp_settings_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_2_31         : 30;
        uint32_t wp_enable             : 1;  /**< [  1:  1](R/W) Enables passing Write protect signal to the device (by switching direction of DQ2 pad). */
        uint32_t wp                    : 1;  /**< [  0:  0](R/W) Write protect signal for all devices. Value of this register is directly routed to the DQ2 output
                                                                 signal. The value can be changed only when xSPI Flash interface is in idle state (minicontroller
                                                                 does not perform any sequence). Value of the write protection signal is overwritten in case DQ2 is
                                                                 valid transaction pin. The controller does not check the write protect setup/hold timings - this
                                                                 must be ensured by the host. Controller does not drive Write Protect value during read data phase
                                                                 of any active transfer (as transfer direction switches in this transfer part). Write Protect on DQ2
                                                                 functionality is only supported by Flash Devices and the controller in single and dual SPI Modes. */
#else /* Word 0 - Little Endian */
        uint32_t wp                    : 1;  /**< [  0:  0](R/W) Write protect signal for all devices. Value of this register is directly routed to the DQ2 output
                                                                 signal. The value can be changed only when xSPI Flash interface is in idle state (minicontroller
                                                                 does not perform any sequence). Value of the write protection signal is overwritten in case DQ2 is
                                                                 valid transaction pin. The controller does not check the write protect setup/hold timings - this
                                                                 must be ensured by the host. Controller does not drive Write Protect value during read data phase
                                                                 of any active transfer (as transfer direction switches in this transfer part). Write Protect on DQ2
                                                                 functionality is only supported by Flash Devices and the controller in single and dual SPI Modes. */
        uint32_t wp_enable             : 1;  /**< [  1:  1](R/W) Enables passing Write protect signal to the device (by switching direction of DQ2 pad). */
        uint32_t reserved_2_31         : 30;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_rf_minictrl_regs_wp_settings_s cn; */
};
typedef union cavm_spix_rf_minictrl_regs_wp_settings cavm_spix_rf_minictrl_regs_wp_settings_t;

static inline uint64_t CAVM_SPIX_RF_MINICTRL_REGS_WP_SETTINGS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_RF_MINICTRL_REGS_WP_SETTINGS(uint64_t a)
{
    if (a<=1)
        return 0x804000001000ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_RF_MINICTRL_REGS_WP_SETTINGS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_RF_MINICTRL_REGS_WP_SETTINGS(a) cavm_spix_rf_minictrl_regs_wp_settings_t
#define bustype_CAVM_SPIX_RF_MINICTRL_REGS_WP_SETTINGS(a) CSR_TYPE_NCB32b
#define basename_CAVM_SPIX_RF_MINICTRL_REGS_WP_SETTINGS(a) "SPIX_RF_MINICTRL_REGS_WP_SETTINGS"
#define device_bar_CAVM_SPIX_RF_MINICTRL_REGS_WP_SETTINGS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_RF_MINICTRL_REGS_WP_SETTINGS(a) (a)
#define arguments_CAVM_SPIX_RF_MINICTRL_REGS_WP_SETTINGS(a) (a),-1,-1,-1

/**
 * Register (NCB) spi#_shim_cfg
 *
 * SPI Shim Configuration Register
 * This register allows configuration of various shim (xSPI) features. The fields XS_NCB_OOB_*
 * are captured when there are no outstanding OOB errors indicated in INTSTAT and a new OOB error
 * arrives. The fields XS_BAD_DMA_* are captured when there are no outstanding DMA errors
 * indicated in INTSTAT and a new DMA error arrives.
 */
union cavm_spix_shim_cfg
{
    uint64_t u;
    struct cavm_spix_shim_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t xs_ncb_oob_wrn        : 1;  /**< [ 63: 63](RO/H) Read/write error log for out-of-bound xSPI register access.
                                                                 0 = read.
                                                                 1 = write. */
        uint64_t reserved_60_62        : 3;
        uint64_t xs_ncb_oob_osrc       : 12; /**< [ 59: 48](RO/H) SRCID error log for out-of-bound xSPI register access. The NCB outbound SRCID for the OOB
                                                                 error.
                                                                 \<59:58\> = chipID.
                                                                 \<57\> = Request source: 0 = core, 1 = NCB-device.
                                                                 \<56:51\> = Core/NCB-device number. Note that for NCB devices, \<56\> is always 0.
                                                                 \<50:48\> = SubID. */
        uint64_t xm_bad_dma_wrn        : 1;  /**< [ 47: 47](RO/H) Read/write error log for bad DMA access from xSPI.
                                                                 0 = Read error log.
                                                                 1 = Write error log. */
        uint64_t reserved_44_46        : 3;
        uint64_t xm_bad_dma_type       : 4;  /**< [ 43: 40](RO/H) ErrType error log for bad DMA access from xSPI. Encodes the type of error encountered
                                                                 (error largest encoded value has priority). See SPI_XM_BAD_DMA_TYPE_E. */
        uint64_t reserved_14_39        : 26;
        uint64_t dma_read_cmd          : 2;  /**< [ 13: 12](R/W) Selects the NCB read command used by DMA accesses. See SPI_DMA_READ_CMD_E. */
        uint64_t reserved_11           : 1;
        uint64_t dma_write_cmd         : 1;  /**< [ 10: 10](R/W) Selects the NCB write command used by DMA accesses. See SPI_DMA_WRITE_CMD_E. */
        uint64_t reserved_0_9          : 10;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_9          : 10;
        uint64_t dma_write_cmd         : 1;  /**< [ 10: 10](R/W) Selects the NCB write command used by DMA accesses. See SPI_DMA_WRITE_CMD_E. */
        uint64_t reserved_11           : 1;
        uint64_t dma_read_cmd          : 2;  /**< [ 13: 12](R/W) Selects the NCB read command used by DMA accesses. See SPI_DMA_READ_CMD_E. */
        uint64_t reserved_14_39        : 26;
        uint64_t xm_bad_dma_type       : 4;  /**< [ 43: 40](RO/H) ErrType error log for bad DMA access from xSPI. Encodes the type of error encountered
                                                                 (error largest encoded value has priority). See SPI_XM_BAD_DMA_TYPE_E. */
        uint64_t reserved_44_46        : 3;
        uint64_t xm_bad_dma_wrn        : 1;  /**< [ 47: 47](RO/H) Read/write error log for bad DMA access from xSPI.
                                                                 0 = Read error log.
                                                                 1 = Write error log. */
        uint64_t xs_ncb_oob_osrc       : 12; /**< [ 59: 48](RO/H) SRCID error log for out-of-bound xSPI register access. The NCB outbound SRCID for the OOB
                                                                 error.
                                                                 \<59:58\> = chipID.
                                                                 \<57\> = Request source: 0 = core, 1 = NCB-device.
                                                                 \<56:51\> = Core/NCB-device number. Note that for NCB devices, \<56\> is always 0.
                                                                 \<50:48\> = SubID. */
        uint64_t reserved_60_62        : 3;
        uint64_t xs_ncb_oob_wrn        : 1;  /**< [ 63: 63](RO/H) Read/write error log for out-of-bound xSPI register access.
                                                                 0 = read.
                                                                 1 = write. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_shim_cfg_s cn; */
};
typedef union cavm_spix_shim_cfg cavm_spix_shim_cfg_t;

static inline uint64_t CAVM_SPIX_SHIM_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_SHIM_CFG(uint64_t a)
{
    if (a<=1)
        return 0x804000001050ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_SHIM_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_SHIM_CFG(a) cavm_spix_shim_cfg_t
#define bustype_CAVM_SPIX_SHIM_CFG(a) CSR_TYPE_NCB
#define basename_CAVM_SPIX_SHIM_CFG(a) "SPIX_SHIM_CFG"
#define device_bar_CAVM_SPIX_SHIM_CFG(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_SHIM_CFG(a) (a)
#define arguments_CAVM_SPIX_SHIM_CFG(a) (a),-1,-1,-1

/**
 * Register (NCB) spi#_spare_reg#
 *
 * SPI Transfer Function Read Data Register
 * This register has the read data from SPI device
 */
union cavm_spix_spare_regx
{
    uint64_t u;
    struct cavm_spix_spare_regx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t spare                 : 64; /**< [ 63:  0](R/W) Spare register for SPI. */
#else /* Word 0 - Little Endian */
        uint64_t spare                 : 64; /**< [ 63:  0](R/W) Spare register for SPI. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_spare_regx_s cn; */
};
typedef union cavm_spix_spare_regx cavm_spix_spare_regx_t;

static inline uint64_t CAVM_SPIX_SPARE_REGX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_SPARE_REGX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA_BX) && ((a<=1) && (b<=1)))
        return 0x804000008220ll + 0x1000000000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=1) && (b<=1)))
        return 0x804000008220ll + 0x1000000000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB_BX) && ((a<=1) && (b<=1)))
        return 0x804000008220ll + 0x1000000000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("SPIX_SPARE_REGX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_SPARE_REGX(a,b) cavm_spix_spare_regx_t
#define bustype_CAVM_SPIX_SPARE_REGX(a,b) CSR_TYPE_NCB
#define basename_CAVM_SPIX_SPARE_REGX(a,b) "SPIX_SPARE_REGX"
#define device_bar_CAVM_SPIX_SPARE_REGX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_SPARE_REGX(a,b) (a)
#define arguments_CAVM_SPIX_SPARE_REGX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) spi#_xfer_const
 *
 * SPI Constants Register
 */
union cavm_spix_xfer_const
{
    uint64_t u;
    struct cavm_spix_xfer_const_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t read_buf_depth        : 5;  /**< [  5:  1](RO/H) Depth of Read buffer in hexadecimal. Width of the FIFO is 64 bits. So total size
                                                                 would become 64*READ_BUF_DEPTH(Convert READ_BUF_DEPTH in decimal before multiply
                                                                 since 64 is in decimal). */
        uint64_t has_xfer_support      : 1;  /**< [  0:  0](RO/H) Indicates that xfer function is supported and that SPI_XFER_FUNC_CMD,
                                                                 SPI_XFER_FUNC_WDATA, SPI_XFER_FUNC_CTRL_STS, SPI_XFER_FUNC_CTRL_READ_DATA() are
                                                                 present. */
#else /* Word 0 - Little Endian */
        uint64_t has_xfer_support      : 1;  /**< [  0:  0](RO/H) Indicates that xfer function is supported and that SPI_XFER_FUNC_CMD,
                                                                 SPI_XFER_FUNC_WDATA, SPI_XFER_FUNC_CTRL_STS, SPI_XFER_FUNC_CTRL_READ_DATA() are
                                                                 present. */
        uint64_t read_buf_depth        : 5;  /**< [  5:  1](RO/H) Depth of Read buffer in hexadecimal. Width of the FIFO is 64 bits. So total size
                                                                 would become 64*READ_BUF_DEPTH(Convert READ_BUF_DEPTH in decimal before multiply
                                                                 since 64 is in decimal). */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_xfer_const_s cn; */
};
typedef union cavm_spix_xfer_const cavm_spix_xfer_const_t;

static inline uint64_t CAVM_SPIX_XFER_CONST(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_XFER_CONST(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA_BX) && (a<=1))
        return 0x804000008230ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x804000008230ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB_BX) && (a<=1))
        return 0x804000008230ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_XFER_CONST", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_XFER_CONST(a) cavm_spix_xfer_const_t
#define bustype_CAVM_SPIX_XFER_CONST(a) CSR_TYPE_NCB
#define basename_CAVM_SPIX_XFER_CONST(a) "SPIX_XFER_CONST"
#define device_bar_CAVM_SPIX_XFER_CONST(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_XFER_CONST(a) (a)
#define arguments_CAVM_SPIX_XFER_CONST(a) (a),-1,-1,-1

/**
 * Register (NCB) spi#_xfer_func_cmd
 *
 * SPI XFER Function Command Register
 * This register is used to issue the command for TX_RX_MODE, where the Xfer State Machine
 * is used to drive MOSI.
 */
union cavm_spix_xfer_func_cmd
{
    uint64_t u;
    struct cavm_spix_xfer_func_cmd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t wdata                 : 32; /**< [ 63: 32](R/W) If the write data size is upto 4 bytes, then use this field for of write data for write command. */
        uint64_t addr                  : 24; /**< [ 31:  8](R/W) Device address from where read write to be done in TX_RX_MODE . */
        uint64_t size                  : 6;  /**< [  7:  2](R/W) SPI Transfer size. 0x0 = 1 bytes transfer. 0x1 = 2 bytes transfer. 0x2 = 3 bytes
                                                                 transfer. 0x3 = 4 bytes transfer. ... 0x63 = 64 bytes transfer. */
        uint64_t reserved_1            : 1;
        uint64_t dir                   : 1;  /**< [  0:  0](R/W) SPI TPM transfer direction in . 0= Write. 1= Read; */
#else /* Word 0 - Little Endian */
        uint64_t dir                   : 1;  /**< [  0:  0](R/W) SPI TPM transfer direction in . 0= Write. 1= Read; */
        uint64_t reserved_1            : 1;
        uint64_t size                  : 6;  /**< [  7:  2](R/W) SPI Transfer size. 0x0 = 1 bytes transfer. 0x1 = 2 bytes transfer. 0x2 = 3 bytes
                                                                 transfer. 0x3 = 4 bytes transfer. ... 0x63 = 64 bytes transfer. */
        uint64_t addr                  : 24; /**< [ 31:  8](R/W) Device address from where read write to be done in TX_RX_MODE . */
        uint64_t wdata                 : 32; /**< [ 63: 32](R/W) If the write data size is upto 4 bytes, then use this field for of write data for write command. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_xfer_func_cmd_s cn; */
};
typedef union cavm_spix_xfer_func_cmd cavm_spix_xfer_func_cmd_t;

static inline uint64_t CAVM_SPIX_XFER_FUNC_CMD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_XFER_FUNC_CMD(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA_BX) && (a<=1))
        return 0x804000008200ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x804000008200ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB_BX) && (a<=1))
        return 0x804000008200ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_XFER_FUNC_CMD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_XFER_FUNC_CMD(a) cavm_spix_xfer_func_cmd_t
#define bustype_CAVM_SPIX_XFER_FUNC_CMD(a) CSR_TYPE_NCB
#define basename_CAVM_SPIX_XFER_FUNC_CMD(a) "SPIX_XFER_FUNC_CMD"
#define device_bar_CAVM_SPIX_XFER_FUNC_CMD(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_XFER_FUNC_CMD(a) (a)
#define arguments_CAVM_SPIX_XFER_FUNC_CMD(a) (a),-1,-1,-1

/**
 * Register (NCB) spi#_xfer_func_ctrl
 *
 * SPI XFER Function Control Register
 * This register is used to control the Xfer State Machine for both the modes.
 */
union cavm_spix_xfer_func_ctrl
{
    uint64_t u;
    struct cavm_spix_xfer_func_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_18_63        : 46;
        uint64_t read_buf_watermark    : 6;  /**< [ 17: 12](R/W) This bit can be used to set water mark level of READ buffer. */
        uint64_t soft_reset            : 1;  /**< [ 11: 11](R/W) This bit can be used to reset Xfer State Machine in addition to domain reset of spi.
                                                                 0 = reset is asserted . 1 = Reset is not asserted. */
        uint64_t flush_read_buf        : 1;  /**< [ 10: 10](R/W) This bit can be used to flush data from the READ buffer.
                                                                 0 = Flush read buffer data. 1 = Do not flush read buffer data. */
        uint64_t cs_n_hold             : 4;  /**< [  9:  6](R/W) Each bit is assigned to CS_N [3:0] line output to select the device. 0 = CS_N
                                                                 controlled by IP. 1 = CS_N controlled by Xfer State Machine. */
        uint64_t tpm_device            : 1;  /**< [  5:  5](R/W) Write this to 1 to indicate whether conneted device is TPM. 0 = Xfer State
                                                                 Machine will wait to detect READY on MISO line 1 = FSM will not wait to detect
                                                                 READY and directly start writing data on MOSI */
        uint64_t receive_enable        : 1;  /**< [  4:  4](R/W) Xfer State Machine will wotk in FULL_DUPLEX mode. 0 = XFER_FUNC_CTRL will move
                                                                 to IDLE state indicating read is finished. 1 = XFER_FUNC_CTRL to keep on reading
                                                                 MISO and store it in receive buffer */
        uint64_t xfer_func_enable      : 1;  /**< [  3:  3](R/W) 0 = MOSI/CS_N driven by IP. 1 = MOSI/CS_N driven by Xfer State Machine. */
        uint64_t clk_capture_pol       : 1;  /**< [  2:  2](R/W) Make sure CLK_DRIVE_POL and CLK_CAPTURE_POL opposite to each other
                                                                 0 = Capture data on falling edge of spi_clk. 1 = Capture data on
                                                                 rising edge of spi_clk. */
        uint64_t clk_drive_pol         : 1;  /**< [  1:  1](R/W) Make sure CLK_DRIVE_POL and CLK_CAPTURE_POL are opposite to each other
                                                                 0 = Drive data on falling edge of spi_clk. 1 = Drive data on
                                                                 rising edge of spi_clk. */
        uint64_t xfer_func_start       : 1;  /**< [  0:  0](R/W1/H) This is used to start the Xfer State Machine. 0 = Xfer State Machine will stay
                                                                 in Idel state. 1 = Xfer State Machine will start operation. */
#else /* Word 0 - Little Endian */
        uint64_t xfer_func_start       : 1;  /**< [  0:  0](R/W1/H) This is used to start the Xfer State Machine. 0 = Xfer State Machine will stay
                                                                 in Idel state. 1 = Xfer State Machine will start operation. */
        uint64_t clk_drive_pol         : 1;  /**< [  1:  1](R/W) Make sure CLK_DRIVE_POL and CLK_CAPTURE_POL are opposite to each other
                                                                 0 = Drive data on falling edge of spi_clk. 1 = Drive data on
                                                                 rising edge of spi_clk. */
        uint64_t clk_capture_pol       : 1;  /**< [  2:  2](R/W) Make sure CLK_DRIVE_POL and CLK_CAPTURE_POL opposite to each other
                                                                 0 = Capture data on falling edge of spi_clk. 1 = Capture data on
                                                                 rising edge of spi_clk. */
        uint64_t xfer_func_enable      : 1;  /**< [  3:  3](R/W) 0 = MOSI/CS_N driven by IP. 1 = MOSI/CS_N driven by Xfer State Machine. */
        uint64_t receive_enable        : 1;  /**< [  4:  4](R/W) Xfer State Machine will wotk in FULL_DUPLEX mode. 0 = XFER_FUNC_CTRL will move
                                                                 to IDLE state indicating read is finished. 1 = XFER_FUNC_CTRL to keep on reading
                                                                 MISO and store it in receive buffer */
        uint64_t tpm_device            : 1;  /**< [  5:  5](R/W) Write this to 1 to indicate whether conneted device is TPM. 0 = Xfer State
                                                                 Machine will wait to detect READY on MISO line 1 = FSM will not wait to detect
                                                                 READY and directly start writing data on MOSI */
        uint64_t cs_n_hold             : 4;  /**< [  9:  6](R/W) Each bit is assigned to CS_N [3:0] line output to select the device. 0 = CS_N
                                                                 controlled by IP. 1 = CS_N controlled by Xfer State Machine. */
        uint64_t flush_read_buf        : 1;  /**< [ 10: 10](R/W) This bit can be used to flush data from the READ buffer.
                                                                 0 = Flush read buffer data. 1 = Do not flush read buffer data. */
        uint64_t soft_reset            : 1;  /**< [ 11: 11](R/W) This bit can be used to reset Xfer State Machine in addition to domain reset of spi.
                                                                 0 = reset is asserted . 1 = Reset is not asserted. */
        uint64_t read_buf_watermark    : 6;  /**< [ 17: 12](R/W) This bit can be used to set water mark level of READ buffer. */
        uint64_t reserved_18_63        : 46;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_xfer_func_ctrl_s cn; */
};
typedef union cavm_spix_xfer_func_ctrl cavm_spix_xfer_func_ctrl_t;

static inline uint64_t CAVM_SPIX_XFER_FUNC_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_XFER_FUNC_CTRL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA_BX) && (a<=1))
        return 0x804000008210ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x804000008210ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB_BX) && (a<=1))
        return 0x804000008210ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_XFER_FUNC_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_XFER_FUNC_CTRL(a) cavm_spix_xfer_func_ctrl_t
#define bustype_CAVM_SPIX_XFER_FUNC_CTRL(a) CSR_TYPE_NCB
#define basename_CAVM_SPIX_XFER_FUNC_CTRL(a) "SPIX_XFER_FUNC_CTRL"
#define device_bar_CAVM_SPIX_XFER_FUNC_CTRL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_XFER_FUNC_CTRL(a) (a)
#define arguments_CAVM_SPIX_XFER_FUNC_CTRL(a) (a),-1,-1,-1

/**
 * Register (NCB) spi#_xfer_func_ctrl_read_data#
 *
 * SPI Transfer Function Read Data Register
 * This register has the read data from SPI device
 */
union cavm_spix_xfer_func_ctrl_read_datax
{
    uint64_t u;
    struct cavm_spix_xfer_func_ctrl_read_datax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t rdata                 : 64; /**< [ 63:  0](RO/H) This register has the read data from SPI device. This register needs to read in
                                                                 serial address after the data is availble when RECEIVE_BUF_EMPTY is not zero. */
#else /* Word 0 - Little Endian */
        uint64_t rdata                 : 64; /**< [ 63:  0](RO/H) This register has the read data from SPI device. This register needs to read in
                                                                 serial address after the data is availble when RECEIVE_BUF_EMPTY is not zero. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_xfer_func_ctrl_read_datax_s cn; */
};
typedef union cavm_spix_xfer_func_ctrl_read_datax cavm_spix_xfer_func_ctrl_read_datax_t;

static inline uint64_t CAVM_SPIX_XFER_FUNC_CTRL_READ_DATAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_XFER_FUNC_CTRL_READ_DATAX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA_BX) && ((a<=1) && (b<=31)))
        return 0x804000008000ll + 0x1000000000ll * ((a) & 0x1) + 8ll * ((b) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=1) && (b<=31)))
        return 0x804000008000ll + 0x1000000000ll * ((a) & 0x1) + 8ll * ((b) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB_BX) && ((a<=1) && (b<=31)))
        return 0x804000008000ll + 0x1000000000ll * ((a) & 0x1) + 8ll * ((b) & 0x1f);
    __cavm_csr_fatal("SPIX_XFER_FUNC_CTRL_READ_DATAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_XFER_FUNC_CTRL_READ_DATAX(a,b) cavm_spix_xfer_func_ctrl_read_datax_t
#define bustype_CAVM_SPIX_XFER_FUNC_CTRL_READ_DATAX(a,b) CSR_TYPE_NCB
#define basename_CAVM_SPIX_XFER_FUNC_CTRL_READ_DATAX(a,b) "SPIX_XFER_FUNC_CTRL_READ_DATAX"
#define device_bar_CAVM_SPIX_XFER_FUNC_CTRL_READ_DATAX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_XFER_FUNC_CTRL_READ_DATAX(a,b) (a)
#define arguments_CAVM_SPIX_XFER_FUNC_CTRL_READ_DATAX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) spi#_xfer_func_sts
 *
 * SPI XFER Function Control Read and write status Register
 * This register holds the status of the Xfer State Machine. This register should be
 * polled by software
 * to know read write operation is complete etc.
 */
union cavm_spix_xfer_func_sts
{
    uint64_t u;
    struct cavm_spix_xfer_func_sts_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_23_63        : 41;
        uint64_t num_entries_read_buf  : 6;  /**< [ 22: 17](RO/H) This will indicate current number of entries in READ buffer in terms 8 bytes per entry. */
        uint64_t num_entries_write_buf : 5;  /**< [ 16: 12](RO/H) This will indicate current number of entries in Write buffer in terms of 8 bytes per entry. */
        uint64_t write_buf_empty       : 1;  /**< [ 11: 11](RO/H) Write buffer used by Xfer state machine to store write data to be sent to device, when in
                                                                 XFER function mode.  This bit indicates the status of this write buffer.  This
                                                                 bit will become non zero when some data is written by software
                                                                 SPI_XFER_FUNC_WDATA 0 = Write buffer is not empty. 1 = Write buffer is empty. */
        uint64_t write_buf_full        : 1;  /**< [ 10: 10](RO/H) Write buffer used by Xfer state machine to store write data to be sent to device, when in
                                                                 XFER function mode.  This bit indicates the status of this write buffer.  This
                                                                 bit will become one then you can not write more data on SPI_XFER_FUNC_WDATA 0 =
                                                                 Write buffer is not Full. 1 = Write buffer is Full. */
        uint64_t water_mark_reached    : 1;  /**< [  9:  9](RO/H) When water mark set for read buffer reached this bit used to indicate that limt is reached. */
        uint64_t ready_received        : 1;  /**< [  8:  8](RO/H) TPM device can insert wait state after Command issue and before the it can
                                                                 accept write data or can issue read data. When the MISO lines goes from 0 to 1
                                                                 this indicates the device is ready. This bit indicates READY status of the
                                                                 device. 0 = READY is not recieved from memory device. 1 = READY reeived from
                                                                 memory device. */
        uint64_t xfer_cur_state        : 3;  /**< [  7:  5](RO/H) For diagnostic use only. To indicates current state of Xfer State Machine. */
        uint64_t xfer_ctrl_busy        : 1;  /**< [  4:  4](RO/H) 0 = Xfer State Machine is not busy.
                                                                 1 = Xfer State Machine is busy. */
        uint64_t receive_buf_empty     : 1;  /**< [  3:  3](RO/H) Read buffer used by Xfer state machine to store read data from device, when in
                                                                 XFER function mode.  This bit indicates the status of this read buffer.  When
                                                                 this is zero, it indicates there is valid data on read buffer and can be
                                                                 read. 0 = Receive buffer is not empty. 1 = Receive buffer is empty. */
        uint64_t receive_buf_full      : 1;  /**< [  2:  2](RO/H) Read buffer used by Xfer state machine to store read data from device, when in
                                                                 XFER function mode.  This bit indicates the status of this read buffer.  When
                                                                 this is one, it indicates that read buffer is full and the data comming on miso line is not stored.
                                                                 0 = Receive buffer is not full. 1 = Receive buffer is full. */
        uint64_t write_done            : 1;  /**< [  1:  1](R/W1C/H) When in TX_RX_MODE this bit indicates that the status of write transfer. 0 =
                                                                 Write not done. 1 = Write operation is complete. */
        uint64_t read_done             : 1;  /**< [  0:  0](R/W1C/H) When in TX_RX_MODE this bit indicates that the status of read transfer. 0 = Read
                                                                 not done. 1 = Read operation is complete. */
#else /* Word 0 - Little Endian */
        uint64_t read_done             : 1;  /**< [  0:  0](R/W1C/H) When in TX_RX_MODE this bit indicates that the status of read transfer. 0 = Read
                                                                 not done. 1 = Read operation is complete. */
        uint64_t write_done            : 1;  /**< [  1:  1](R/W1C/H) When in TX_RX_MODE this bit indicates that the status of write transfer. 0 =
                                                                 Write not done. 1 = Write operation is complete. */
        uint64_t receive_buf_full      : 1;  /**< [  2:  2](RO/H) Read buffer used by Xfer state machine to store read data from device, when in
                                                                 XFER function mode.  This bit indicates the status of this read buffer.  When
                                                                 this is one, it indicates that read buffer is full and the data comming on miso line is not stored.
                                                                 0 = Receive buffer is not full. 1 = Receive buffer is full. */
        uint64_t receive_buf_empty     : 1;  /**< [  3:  3](RO/H) Read buffer used by Xfer state machine to store read data from device, when in
                                                                 XFER function mode.  This bit indicates the status of this read buffer.  When
                                                                 this is zero, it indicates there is valid data on read buffer and can be
                                                                 read. 0 = Receive buffer is not empty. 1 = Receive buffer is empty. */
        uint64_t xfer_ctrl_busy        : 1;  /**< [  4:  4](RO/H) 0 = Xfer State Machine is not busy.
                                                                 1 = Xfer State Machine is busy. */
        uint64_t xfer_cur_state        : 3;  /**< [  7:  5](RO/H) For diagnostic use only. To indicates current state of Xfer State Machine. */
        uint64_t ready_received        : 1;  /**< [  8:  8](RO/H) TPM device can insert wait state after Command issue and before the it can
                                                                 accept write data or can issue read data. When the MISO lines goes from 0 to 1
                                                                 this indicates the device is ready. This bit indicates READY status of the
                                                                 device. 0 = READY is not recieved from memory device. 1 = READY reeived from
                                                                 memory device. */
        uint64_t water_mark_reached    : 1;  /**< [  9:  9](RO/H) When water mark set for read buffer reached this bit used to indicate that limt is reached. */
        uint64_t write_buf_full        : 1;  /**< [ 10: 10](RO/H) Write buffer used by Xfer state machine to store write data to be sent to device, when in
                                                                 XFER function mode.  This bit indicates the status of this write buffer.  This
                                                                 bit will become one then you can not write more data on SPI_XFER_FUNC_WDATA 0 =
                                                                 Write buffer is not Full. 1 = Write buffer is Full. */
        uint64_t write_buf_empty       : 1;  /**< [ 11: 11](RO/H) Write buffer used by Xfer state machine to store write data to be sent to device, when in
                                                                 XFER function mode.  This bit indicates the status of this write buffer.  This
                                                                 bit will become non zero when some data is written by software
                                                                 SPI_XFER_FUNC_WDATA 0 = Write buffer is not empty. 1 = Write buffer is empty. */
        uint64_t num_entries_write_buf : 5;  /**< [ 16: 12](RO/H) This will indicate current number of entries in Write buffer in terms of 8 bytes per entry. */
        uint64_t num_entries_read_buf  : 6;  /**< [ 22: 17](RO/H) This will indicate current number of entries in READ buffer in terms 8 bytes per entry. */
        uint64_t reserved_23_63        : 41;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_xfer_func_sts_s cn; */
};
typedef union cavm_spix_xfer_func_sts cavm_spix_xfer_func_sts_t;

static inline uint64_t CAVM_SPIX_XFER_FUNC_STS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_XFER_FUNC_STS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA_BX) && (a<=1))
        return 0x804000008218ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x804000008218ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB_BX) && (a<=1))
        return 0x804000008218ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_XFER_FUNC_STS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_XFER_FUNC_STS(a) cavm_spix_xfer_func_sts_t
#define bustype_CAVM_SPIX_XFER_FUNC_STS(a) CSR_TYPE_NCB
#define basename_CAVM_SPIX_XFER_FUNC_STS(a) "SPIX_XFER_FUNC_STS"
#define device_bar_CAVM_SPIX_XFER_FUNC_STS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_XFER_FUNC_STS(a) (a)
#define arguments_CAVM_SPIX_XFER_FUNC_STS(a) (a),-1,-1,-1

/**
 * Register (NCB) spi#_xfer_func_wdata
 *
 * SPI XFER Function Write Data Register
 * This register is used in TX_RX_MODE of Xfer State Machine when the SIZE is more than
 * 4 bytes and upto 64 bytes.
 */
union cavm_spix_xfer_func_wdata
{
    uint64_t u;
    struct cavm_spix_xfer_func_wdata_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t wdata                 : 64; /**< [ 63:  0](WO) Write data for write command. Zeroth byte and zeroth bit of the data goes on the
                                                                 MOSI line first and so on */
#else /* Word 0 - Little Endian */
        uint64_t wdata                 : 64; /**< [ 63:  0](WO) Write data for write command. Zeroth byte and zeroth bit of the data goes on the
                                                                 MOSI line first and so on */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_spix_xfer_func_wdata_s cn; */
};
typedef union cavm_spix_xfer_func_wdata cavm_spix_xfer_func_wdata_t;

static inline uint64_t CAVM_SPIX_XFER_FUNC_WDATA(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SPIX_XFER_FUNC_WDATA(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA_BX) && (a<=1))
        return 0x804000008208ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x804000008208ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB_BX) && (a<=1))
        return 0x804000008208ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("SPIX_XFER_FUNC_WDATA", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SPIX_XFER_FUNC_WDATA(a) cavm_spix_xfer_func_wdata_t
#define bustype_CAVM_SPIX_XFER_FUNC_WDATA(a) CSR_TYPE_NCB
#define basename_CAVM_SPIX_XFER_FUNC_WDATA(a) "SPIX_XFER_FUNC_WDATA"
#define device_bar_CAVM_SPIX_XFER_FUNC_WDATA(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SPIX_XFER_FUNC_WDATA(a) (a)
#define arguments_CAVM_SPIX_XFER_FUNC_WDATA(a) (a),-1,-1,-1

#endif /* __CAVM_CSRS_SPI_H__ */
