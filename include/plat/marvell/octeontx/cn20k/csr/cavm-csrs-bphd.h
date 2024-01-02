#ifndef __CAVM_CSRS_BPHD_H__
#define __CAVM_CSRS_BPHD_H__
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
 * BPHD.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration bphd_bar_e
 */
#define CAVM_BPHD_BAR_E_BPHDX_PF_BAR2(a) (0x87e042b80000ll + 0ll * (a))
#define CAVM_BPHD_BAR_E_BPHDX_PF_BAR2_SIZE 0x40000ull

/**
 * Structure bphd_hdma_ptr_high_s
 *
 * BPHD Host DMA Pointer Structure
 * DPI DMA pointer structure. Each pointer specifies a single unidirectional DMA
 * transfer between BPHY (local memory) and DPI (Host memory). This is the upper 64b.
 */
union cavm_bphd_hdma_ptr_high_s
{
    uint64_t u;
    struct cavm_bphd_hdma_ptr_high_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t address_ptr           : 64; /**< [ 63:  0] DMA start address in Host memory. */
#else /* Word 0 - Little Endian */
        uint64_t address_ptr           : 64; /**< [ 63:  0] DMA start address in Host memory. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bphd_hdma_ptr_high_s_s cn; */
};

/**
 * Structure bphd_hdma_ptr_low_s
 *
 * BPHD Host DMA Pointer Structure
 * DPI DMA pointer structure. Each pointer specifies a single unidirectional DMA
 * transfer between BPHY (local memory) and DPI (Host memory). This is the lower 64b.
 */
union cavm_bphd_hdma_ptr_low_s
{
    uint64_t u;
    struct cavm_bphd_hdma_ptr_low_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t transfer_length       : 24; /**< [ 23:  0] Byte transfer length. Permitted values are 0x1 - 24'hFFFFFF. */
#else /* Word 0 - Little Endian */
        uint64_t transfer_length       : 24; /**< [ 23:  0] Byte transfer length. Permitted values are 0x1 - 24'hFFFFFF. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bphd_hdma_ptr_low_s_s cn; */
};

/**
 * Register (RSL) bphd#_ab#_control
 *
 * BPHD Control Register
 */
union cavm_bphdx_abx_control
{
    uint64_t u;
    struct cavm_bphdx_abx_control_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t jobid1                : 16; /**< [ 47: 32](R/W/H) Job ID for slot 1. */
        uint64_t jobid0                : 16; /**< [ 31: 16](R/W/H) Job ID for slot 0. */
        uint64_t reserved_2_15         : 14;
        uint64_t start1                : 1;  /**< [  1:  1](R/W/H) Start processing job in slot 1. */
        uint64_t start0                : 1;  /**< [  0:  0](R/W/H) Start processing job in slot 0. */
#else /* Word 0 - Little Endian */
        uint64_t start0                : 1;  /**< [  0:  0](R/W/H) Start processing job in slot 0. */
        uint64_t start1                : 1;  /**< [  1:  1](R/W/H) Start processing job in slot 1. */
        uint64_t reserved_2_15         : 14;
        uint64_t jobid0                : 16; /**< [ 31: 16](R/W/H) Job ID for slot 0. */
        uint64_t jobid1                : 16; /**< [ 47: 32](R/W/H) Job ID for slot 1. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bphdx_abx_control_s cn; */
};
typedef union cavm_bphdx_abx_control cavm_bphdx_abx_control_t;

static inline uint64_t CAVM_BPHDX_ABX_CONTROL(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BPHDX_ABX_CONTROL(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a==0) && (b<=1)))
        return 0x87e042b80000ll + 0ll * ((a) & 0x0) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("BPHDX_ABX_CONTROL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_BPHDX_ABX_CONTROL(a,b) cavm_bphdx_abx_control_t
#define bustype_CAVM_BPHDX_ABX_CONTROL(a,b) CSR_TYPE_RSL
#define basename_CAVM_BPHDX_ABX_CONTROL(a,b) "BPHDX_ABX_CONTROL"
#define device_bar_CAVM_BPHDX_ABX_CONTROL(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_BPHDX_ABX_CONTROL(a,b) (a)
#define arguments_CAVM_BPHDX_ABX_CONTROL(a,b) (a),(b),-1,-1

/**
 * Register (RSL) bphd#_ab#_dpi_brarb_ctrl
 *
 * BPHD Bridge to DPI Control Register
 * BPHD DPI bridge/arbiter configuration register.
 */
union cavm_bphdx_abx_dpi_brarb_ctrl
{
    uint64_t u;
    struct cavm_bphdx_abx_dpi_brarb_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t dpi_timeout           : 32; /**< [ 63: 32](R/W) Timeout setting for DPI responses (commit for write, read data for read)
                                                                 0x0 = never timeout (default)
                                                                 \>0  = timeout time in TBD seconds */
        uint64_t scratch               : 8;  /**< [ 31: 24](R/W) Reserved. */
        uint64_t reserved_20_23        : 4;
        uint64_t dpi_rd_num_outstanding : 4; /**< [ 19: 16](R/W) Maximum number of read requests to DPI read interface + 1
                                                                 0x0 = 1 outstanding read requests
                                                                 0x1 = 2 outstanding read requests
                                                                 ...
                                                                 0x7 = 8 oustanding read requests (default)
                                                                 ... */
        uint64_t dpi_intf_bclk_disable : 1;  /**< [ 15: 15](R/W) DPI interface clock disable (BCLK)
                                                                 The DPI interface clock of the BPHD is used to maintain credit and
                                                                 interface logic running even if the MHAB AB clock has gone idle after
                                                                 job completion. This decouples the dependency of the AB clock from
                                                                 waiting for potentially long credit delays crossing between BPHY domain
                                                                 and the DPI domain. Since it is a free running clock, this bit provides
                                                                 additional power savings when the BPHD is not in use.

                                                                 0: Enable (default) BPHD DPI interface clock (BCLK).
                                                                 1: Disable BPHD DPI interface clock (BCLK) for power savings. */
        uint64_t reserved_1_14         : 14;
        uint64_t dpi_wr_skip_commit    : 1;  /**< [  0:  0](R/W) 0x0 = wait for final write commit (default)
                                                                 0x1 = do not wait for any write commits */
#else /* Word 0 - Little Endian */
        uint64_t dpi_wr_skip_commit    : 1;  /**< [  0:  0](R/W) 0x0 = wait for final write commit (default)
                                                                 0x1 = do not wait for any write commits */
        uint64_t reserved_1_14         : 14;
        uint64_t dpi_intf_bclk_disable : 1;  /**< [ 15: 15](R/W) DPI interface clock disable (BCLK)
                                                                 The DPI interface clock of the BPHD is used to maintain credit and
                                                                 interface logic running even if the MHAB AB clock has gone idle after
                                                                 job completion. This decouples the dependency of the AB clock from
                                                                 waiting for potentially long credit delays crossing between BPHY domain
                                                                 and the DPI domain. Since it is a free running clock, this bit provides
                                                                 additional power savings when the BPHD is not in use.

                                                                 0: Enable (default) BPHD DPI interface clock (BCLK).
                                                                 1: Disable BPHD DPI interface clock (BCLK) for power savings. */
        uint64_t dpi_rd_num_outstanding : 4; /**< [ 19: 16](R/W) Maximum number of read requests to DPI read interface + 1
                                                                 0x0 = 1 outstanding read requests
                                                                 0x1 = 2 outstanding read requests
                                                                 ...
                                                                 0x7 = 8 oustanding read requests (default)
                                                                 ... */
        uint64_t reserved_20_23        : 4;
        uint64_t scratch               : 8;  /**< [ 31: 24](R/W) Reserved. */
        uint64_t dpi_timeout           : 32; /**< [ 63: 32](R/W) Timeout setting for DPI responses (commit for write, read data for read)
                                                                 0x0 = never timeout (default)
                                                                 \>0  = timeout time in TBD seconds */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bphdx_abx_dpi_brarb_ctrl_s cn; */
};
typedef union cavm_bphdx_abx_dpi_brarb_ctrl cavm_bphdx_abx_dpi_brarb_ctrl_t;

static inline uint64_t CAVM_BPHDX_ABX_DPI_BRARB_CTRL(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BPHDX_ABX_DPI_BRARB_CTRL(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a==0) && (b<=1)))
        return 0x87e042b81000ll + 0ll * ((a) & 0x0) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("BPHDX_ABX_DPI_BRARB_CTRL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_BPHDX_ABX_DPI_BRARB_CTRL(a,b) cavm_bphdx_abx_dpi_brarb_ctrl_t
#define bustype_CAVM_BPHDX_ABX_DPI_BRARB_CTRL(a,b) CSR_TYPE_RSL
#define basename_CAVM_BPHDX_ABX_DPI_BRARB_CTRL(a,b) "BPHDX_ABX_DPI_BRARB_CTRL"
#define device_bar_CAVM_BPHDX_ABX_DPI_BRARB_CTRL(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_BPHDX_ABX_DPI_BRARB_CTRL(a,b) (a)
#define arguments_CAVM_BPHDX_ABX_DPI_BRARB_CTRL(a,b) (a),(b),-1,-1

/**
 * Register (RSL) bphd#_ab#_dpi_read_error_debug
 *
 * BPHD DPI Read Error Debug Register
 * BPHD captured DPI read error debug register.
 */
union cavm_bphdx_abx_dpi_read_error_debug
{
    uint64_t u;
    struct cavm_bphdx_abx_dpi_read_error_debug_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t dpi_rd_err_jobid      : 16; /**< [ 31: 16](R/W1C/H) job ID that experienced the DPI read error */
        uint64_t reserved_1_15         : 15;
        uint64_t dpi_rd_error          : 1;  /**< [  0:  0](R/W1C/H) Read Error received on DPI interface */
#else /* Word 0 - Little Endian */
        uint64_t dpi_rd_error          : 1;  /**< [  0:  0](R/W1C/H) Read Error received on DPI interface */
        uint64_t reserved_1_15         : 15;
        uint64_t dpi_rd_err_jobid      : 16; /**< [ 31: 16](R/W1C/H) job ID that experienced the DPI read error */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bphdx_abx_dpi_read_error_debug_s cn; */
};
typedef union cavm_bphdx_abx_dpi_read_error_debug cavm_bphdx_abx_dpi_read_error_debug_t;

static inline uint64_t CAVM_BPHDX_ABX_DPI_READ_ERROR_DEBUG(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BPHDX_ABX_DPI_READ_ERROR_DEBUG(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a==0) && (b<=1)))
        return 0x87e042b81e00ll + 0ll * ((a) & 0x0) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("BPHDX_ABX_DPI_READ_ERROR_DEBUG", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_BPHDX_ABX_DPI_READ_ERROR_DEBUG(a,b) cavm_bphdx_abx_dpi_read_error_debug_t
#define bustype_CAVM_BPHDX_ABX_DPI_READ_ERROR_DEBUG(a,b) CSR_TYPE_RSL
#define basename_CAVM_BPHDX_ABX_DPI_READ_ERROR_DEBUG(a,b) "BPHDX_ABX_DPI_READ_ERROR_DEBUG"
#define device_bar_CAVM_BPHDX_ABX_DPI_READ_ERROR_DEBUG(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_BPHDX_ABX_DPI_READ_ERROR_DEBUG(a,b) (a)
#define arguments_CAVM_BPHDX_ABX_DPI_READ_ERROR_DEBUG(a,b) (a),(b),-1,-1

/**
 * Register (RSL) bphd#_ab#_error_enable0
 *
 * Error Enable 0 Register
 * This register enables error reporting for read overflow/underflow errors.
 */
union cavm_bphdx_abx_error_enable0
{
    uint64_t u;
    struct cavm_bphdx_abx_error_enable0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t rp1_of_en             : 1;  /**< [  5:  5](R/W) Read port 0 overflow enable. */
        uint64_t rp0_of_en             : 1;  /**< [  4:  4](R/W) Read port 0 overflow enable. */
        uint64_t reserved_2_3          : 2;
        uint64_t rp1_uf_en             : 1;  /**< [  1:  1](R/W) Read Port 1 underflow enable. */
        uint64_t rp0_uf_en             : 1;  /**< [  0:  0](R/W) Read Port 0 underflow enable. */
#else /* Word 0 - Little Endian */
        uint64_t rp0_uf_en             : 1;  /**< [  0:  0](R/W) Read Port 0 underflow enable. */
        uint64_t rp1_uf_en             : 1;  /**< [  1:  1](R/W) Read Port 1 underflow enable. */
        uint64_t reserved_2_3          : 2;
        uint64_t rp0_of_en             : 1;  /**< [  4:  4](R/W) Read port 0 overflow enable. */
        uint64_t rp1_of_en             : 1;  /**< [  5:  5](R/W) Read port 0 overflow enable. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bphdx_abx_error_enable0_s cn; */
};
typedef union cavm_bphdx_abx_error_enable0 cavm_bphdx_abx_error_enable0_t;

static inline uint64_t CAVM_BPHDX_ABX_ERROR_ENABLE0(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BPHDX_ABX_ERROR_ENABLE0(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a==0) && (b<=1)))
        return 0x87e042b80040ll + 0ll * ((a) & 0x0) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("BPHDX_ABX_ERROR_ENABLE0", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_BPHDX_ABX_ERROR_ENABLE0(a,b) cavm_bphdx_abx_error_enable0_t
#define bustype_CAVM_BPHDX_ABX_ERROR_ENABLE0(a,b) CSR_TYPE_RSL
#define basename_CAVM_BPHDX_ABX_ERROR_ENABLE0(a,b) "BPHDX_ABX_ERROR_ENABLE0"
#define device_bar_CAVM_BPHDX_ABX_ERROR_ENABLE0(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_BPHDX_ABX_ERROR_ENABLE0(a,b) (a)
#define arguments_CAVM_BPHDX_ABX_ERROR_ENABLE0(a,b) (a),(b),-1,-1

/**
 * Register (RSL) bphd#_ab#_error_source0
 *
 * BPHD Error Source 0 Register
 * This register indicates the source of overflow/underflow errors.
 */
union cavm_bphdx_abx_error_source0
{
    uint64_t u;
    struct cavm_bphdx_abx_error_source0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t rp1_jobid             : 16; /**< [ 47: 32](RO/H) Job ID of the job which reported the Read Port 1 overflow/underflow error. */
        uint64_t rp0_jobid             : 16; /**< [ 31: 16](RO/H) Job ID of the job which reported the Read Port 0 overflow/underflow error. */
        uint64_t reserved_6_15         : 10;
        uint64_t rp1_of                : 1;  /**< [  5:  5](R/W1C/H) Read port 1 overflow. Note that due to the 32B granularity of the MHAB Read
                                                                 Port, if the overflow size is less than 32B, the hardware will not always be
                                                                 able to detect the overflow condition. */
        uint64_t rp0_of                : 1;  /**< [  4:  4](R/W1C/H) Read port 0 overflow. Note that due to the 32B granularity of the MHAB Read
                                                                 Port, if the overflow size is less than 32B, the hardware will not always be
                                                                 able to detect the overflow condition. */
        uint64_t reserved_2_3          : 2;
        uint64_t rp1_uf                : 1;  /**< [  1:  1](R/W1C/H) Read port 1 underflow. Note that due to the 32B granularity of the MHAB Read
                                                                 Port, if the underflow size is less than 32B, the hardware will not always be
                                                                 able to detect the underflow condition. */
        uint64_t rp0_uf                : 1;  /**< [  0:  0](R/W1C/H) Read port 0 underflow. Note that due to the 32B granularity of the MHAB Read
                                                                 Port, if the underflow size is less than 32B, the hardware will not always be
                                                                 able to detect the underflow condition. */
#else /* Word 0 - Little Endian */
        uint64_t rp0_uf                : 1;  /**< [  0:  0](R/W1C/H) Read port 0 underflow. Note that due to the 32B granularity of the MHAB Read
                                                                 Port, if the underflow size is less than 32B, the hardware will not always be
                                                                 able to detect the underflow condition. */
        uint64_t rp1_uf                : 1;  /**< [  1:  1](R/W1C/H) Read port 1 underflow. Note that due to the 32B granularity of the MHAB Read
                                                                 Port, if the underflow size is less than 32B, the hardware will not always be
                                                                 able to detect the underflow condition. */
        uint64_t reserved_2_3          : 2;
        uint64_t rp0_of                : 1;  /**< [  4:  4](R/W1C/H) Read port 0 overflow. Note that due to the 32B granularity of the MHAB Read
                                                                 Port, if the overflow size is less than 32B, the hardware will not always be
                                                                 able to detect the overflow condition. */
        uint64_t rp1_of                : 1;  /**< [  5:  5](R/W1C/H) Read port 1 overflow. Note that due to the 32B granularity of the MHAB Read
                                                                 Port, if the overflow size is less than 32B, the hardware will not always be
                                                                 able to detect the overflow condition. */
        uint64_t reserved_6_15         : 10;
        uint64_t rp0_jobid             : 16; /**< [ 31: 16](RO/H) Job ID of the job which reported the Read Port 0 overflow/underflow error. */
        uint64_t rp1_jobid             : 16; /**< [ 47: 32](RO/H) Job ID of the job which reported the Read Port 1 overflow/underflow error. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bphdx_abx_error_source0_s cn; */
};
typedef union cavm_bphdx_abx_error_source0 cavm_bphdx_abx_error_source0_t;

static inline uint64_t CAVM_BPHDX_ABX_ERROR_SOURCE0(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BPHDX_ABX_ERROR_SOURCE0(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a==0) && (b<=1)))
        return 0x87e042b80030ll + 0ll * ((a) & 0x0) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("BPHDX_ABX_ERROR_SOURCE0", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_BPHDX_ABX_ERROR_SOURCE0(a,b) cavm_bphdx_abx_error_source0_t
#define bustype_CAVM_BPHDX_ABX_ERROR_SOURCE0(a,b) CSR_TYPE_RSL
#define basename_CAVM_BPHDX_ABX_ERROR_SOURCE0(a,b) "BPHDX_ABX_ERROR_SOURCE0"
#define device_bar_CAVM_BPHDX_ABX_ERROR_SOURCE0(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_BPHDX_ABX_ERROR_SOURCE0(a,b) (a)
#define arguments_CAVM_BPHDX_ABX_ERROR_SOURCE0(a,b) (a),(b),-1,-1

/**
 * Register (RSL) bphd#_ab#_jd0_cfg_dma
 *
 * BPHD DMA Configuration Register
 * Job Descriptor Slot 0 configuration DMA parameters
 */
union cavm_bphdx_abx_jd0_cfg_dma
{
    uint64_t u;
    struct cavm_bphdx_abx_jd0_cfg_dma_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t transfer_dir          : 1;  /**< [ 63: 63](R/W) Transfer direction 0x0 = Outbound (PCIe write) 0x1 = Inbound (PCIe read) */
        uint64_t reserved_42_62        : 21;
        uint64_t ptp_ring              : 8;  /**< [ 41: 34](R/W) Ring */
        uint64_t ptp_block             : 1;  /**< [ 33: 33](R/W) 0x0 = SDP, 0x1 = VIO */
        uint64_t ptp_valid             : 1;  /**< [ 32: 32](R/W) PTP Time Stamp qualifier
                                                                 0: No PTP generation
                                                                 1: PTP generated after Outbound Job completed and commit confirmed */
        uint64_t reserved_29_31        : 3;
        uint64_t start_boffset         : 5;  /**< [ 28: 24](R/W) Starting byte offset for job data This register determines the starting position
                                                                 of the first valid byte in the data stream. If TRANSFER_DIR is Outbound, then
                                                                 this determines the first valid byte from the Read Port If TRANSFER_DIR is
                                                                 Inbound, then this determines the first valid byte to the Write Port.

                                                                 Legal Range: 0-31 bytes */
        uint64_t reserved_23           : 1;
        uint64_t physical_function     : 3;  /**< [ 22: 20](R/W) PCIe Physical Function index (Refer to DPI_DMA_CONTROL for description) */
        uint64_t virtual_function      : 12; /**< [ 19:  8](R/W) PCIe Virtual Function index (Refer to DPI_DMA_CONTROL for description) */
        uint64_t reserved_7            : 1;
        uint64_t wcommit               : 1;  /**< [  6:  6](R/W) Write commit. (To be depricated) */
        uint64_t portnum               : 2;  /**< [  5:  4](R/W) PEM port number for PCIe DMA transactions (Refer to DPI_DMA_CONTROL for description) */
        uint64_t endian_swap_mode      : 2;  /**< [  3:  2](R/W) Endian Swap mode attribute for PCIe DMA transactions (Refer to DPI_DMA_CONTROL for description) */
        uint64_t no_snoop              : 1;  /**< [  1:  1](R/W) No snoop attribute for PCIe DMA transactions (Refer to DPI_DMA_CONTROL for description) */
        uint64_t relaxed_ordering      : 1;  /**< [  0:  0](R/W) Relaxed ordering attribute for PCIe DMA transactions (Refer to DPI_DMA_CONTROL for description) */
#else /* Word 0 - Little Endian */
        uint64_t relaxed_ordering      : 1;  /**< [  0:  0](R/W) Relaxed ordering attribute for PCIe DMA transactions (Refer to DPI_DMA_CONTROL for description) */
        uint64_t no_snoop              : 1;  /**< [  1:  1](R/W) No snoop attribute for PCIe DMA transactions (Refer to DPI_DMA_CONTROL for description) */
        uint64_t endian_swap_mode      : 2;  /**< [  3:  2](R/W) Endian Swap mode attribute for PCIe DMA transactions (Refer to DPI_DMA_CONTROL for description) */
        uint64_t portnum               : 2;  /**< [  5:  4](R/W) PEM port number for PCIe DMA transactions (Refer to DPI_DMA_CONTROL for description) */
        uint64_t wcommit               : 1;  /**< [  6:  6](R/W) Write commit. (To be depricated) */
        uint64_t reserved_7            : 1;
        uint64_t virtual_function      : 12; /**< [ 19:  8](R/W) PCIe Virtual Function index (Refer to DPI_DMA_CONTROL for description) */
        uint64_t physical_function     : 3;  /**< [ 22: 20](R/W) PCIe Physical Function index (Refer to DPI_DMA_CONTROL for description) */
        uint64_t reserved_23           : 1;
        uint64_t start_boffset         : 5;  /**< [ 28: 24](R/W) Starting byte offset for job data This register determines the starting position
                                                                 of the first valid byte in the data stream. If TRANSFER_DIR is Outbound, then
                                                                 this determines the first valid byte from the Read Port If TRANSFER_DIR is
                                                                 Inbound, then this determines the first valid byte to the Write Port.

                                                                 Legal Range: 0-31 bytes */
        uint64_t reserved_29_31        : 3;
        uint64_t ptp_valid             : 1;  /**< [ 32: 32](R/W) PTP Time Stamp qualifier
                                                                 0: No PTP generation
                                                                 1: PTP generated after Outbound Job completed and commit confirmed */
        uint64_t ptp_block             : 1;  /**< [ 33: 33](R/W) 0x0 = SDP, 0x1 = VIO */
        uint64_t ptp_ring              : 8;  /**< [ 41: 34](R/W) Ring */
        uint64_t reserved_42_62        : 21;
        uint64_t transfer_dir          : 1;  /**< [ 63: 63](R/W) Transfer direction 0x0 = Outbound (PCIe write) 0x1 = Inbound (PCIe read) */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bphdx_abx_jd0_cfg_dma_s cn; */
};
typedef union cavm_bphdx_abx_jd0_cfg_dma cavm_bphdx_abx_jd0_cfg_dma_t;

static inline uint64_t CAVM_BPHDX_ABX_JD0_CFG_DMA(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BPHDX_ABX_JD0_CFG_DMA(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a==0) && (b<=1)))
        return 0x87e042b82000ll + 0ll * ((a) & 0x0) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("BPHDX_ABX_JD0_CFG_DMA", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_BPHDX_ABX_JD0_CFG_DMA(a,b) cavm_bphdx_abx_jd0_cfg_dma_t
#define bustype_CAVM_BPHDX_ABX_JD0_CFG_DMA(a,b) CSR_TYPE_RSL
#define basename_CAVM_BPHDX_ABX_JD0_CFG_DMA(a,b) "BPHDX_ABX_JD0_CFG_DMA"
#define device_bar_CAVM_BPHDX_ABX_JD0_CFG_DMA(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_BPHDX_ABX_JD0_CFG_DMA(a,b) (a)
#define arguments_CAVM_BPHDX_ABX_JD0_CFG_DMA(a,b) (a),(b),-1,-1

/**
 * Register (RSL) bphd#_ab#_jd1_cfg_dma
 *
 * BPHD DMA Configuration Register
 * Job Descriptor Slot 1 configuration DMA parameters
 */
union cavm_bphdx_abx_jd1_cfg_dma
{
    uint64_t u;
    struct cavm_bphdx_abx_jd1_cfg_dma_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t transfer_dir          : 1;  /**< [ 63: 63](R/W) Transfer direction 0x0 = Outbound (PCIe write) 0x1 = Inbound (PCIe read) */
        uint64_t reserved_42_62        : 21;
        uint64_t ptp_ring              : 8;  /**< [ 41: 34](R/W) Ring */
        uint64_t ptp_block             : 1;  /**< [ 33: 33](R/W) 0x0 = SDP, 0x1 = VIO */
        uint64_t ptp_valid             : 1;  /**< [ 32: 32](R/W) PTP Time Stamp qualifier
                                                                 0: No PTP generation
                                                                 1: PTP generated after Outbound Job completed and commit confirmed */
        uint64_t reserved_29_31        : 3;
        uint64_t start_boffset         : 5;  /**< [ 28: 24](R/W) Starting byte offset for job data This register determines the starting position
                                                                 of the first valid byte in the data stream. If TRANSFER_DIR is Outbound, then
                                                                 this determines the first valid byte from the Read Port If TRANSFER_DIR is
                                                                 Inbound, then this determines the first valid byte to the Write Port.

                                                                 Legal Range: 0-31 bytes */
        uint64_t reserved_23           : 1;
        uint64_t physical_function     : 3;  /**< [ 22: 20](R/W) PCIe Physical Function index (Refer to DPI_DMA_CONTROL for description) */
        uint64_t virtual_function      : 12; /**< [ 19:  8](R/W) PCIe Virtual Function index (Refer to DPI_DMA_CONTROL for description) */
        uint64_t reserved_7            : 1;
        uint64_t wcommit               : 1;  /**< [  6:  6](R/W) Write commit. (To be depricated) */
        uint64_t portnum               : 2;  /**< [  5:  4](R/W) PEM port number for PCIe DMA transactions (Refer to DPI_DMA_CONTROL for description) */
        uint64_t endian_swap_mode      : 2;  /**< [  3:  2](R/W) Endian Swap mode attribute for PCIe DMA transactions (Refer to DPI_DMA_CONTROL for description) */
        uint64_t no_snoop              : 1;  /**< [  1:  1](R/W) No snoop attribute for PCIe DMA transactions (Refer to DPI_DMA_CONTROL for description) */
        uint64_t relaxed_ordering      : 1;  /**< [  0:  0](R/W) Relaxed ordering attribute for PCIe DMA transactions (Refer to DPI_DMA_CONTROL for description) */
#else /* Word 0 - Little Endian */
        uint64_t relaxed_ordering      : 1;  /**< [  0:  0](R/W) Relaxed ordering attribute for PCIe DMA transactions (Refer to DPI_DMA_CONTROL for description) */
        uint64_t no_snoop              : 1;  /**< [  1:  1](R/W) No snoop attribute for PCIe DMA transactions (Refer to DPI_DMA_CONTROL for description) */
        uint64_t endian_swap_mode      : 2;  /**< [  3:  2](R/W) Endian Swap mode attribute for PCIe DMA transactions (Refer to DPI_DMA_CONTROL for description) */
        uint64_t portnum               : 2;  /**< [  5:  4](R/W) PEM port number for PCIe DMA transactions (Refer to DPI_DMA_CONTROL for description) */
        uint64_t wcommit               : 1;  /**< [  6:  6](R/W) Write commit. (To be depricated) */
        uint64_t reserved_7            : 1;
        uint64_t virtual_function      : 12; /**< [ 19:  8](R/W) PCIe Virtual Function index (Refer to DPI_DMA_CONTROL for description) */
        uint64_t physical_function     : 3;  /**< [ 22: 20](R/W) PCIe Physical Function index (Refer to DPI_DMA_CONTROL for description) */
        uint64_t reserved_23           : 1;
        uint64_t start_boffset         : 5;  /**< [ 28: 24](R/W) Starting byte offset for job data This register determines the starting position
                                                                 of the first valid byte in the data stream. If TRANSFER_DIR is Outbound, then
                                                                 this determines the first valid byte from the Read Port If TRANSFER_DIR is
                                                                 Inbound, then this determines the first valid byte to the Write Port.

                                                                 Legal Range: 0-31 bytes */
        uint64_t reserved_29_31        : 3;
        uint64_t ptp_valid             : 1;  /**< [ 32: 32](R/W) PTP Time Stamp qualifier
                                                                 0: No PTP generation
                                                                 1: PTP generated after Outbound Job completed and commit confirmed */
        uint64_t ptp_block             : 1;  /**< [ 33: 33](R/W) 0x0 = SDP, 0x1 = VIO */
        uint64_t ptp_ring              : 8;  /**< [ 41: 34](R/W) Ring */
        uint64_t reserved_42_62        : 21;
        uint64_t transfer_dir          : 1;  /**< [ 63: 63](R/W) Transfer direction 0x0 = Outbound (PCIe write) 0x1 = Inbound (PCIe read) */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bphdx_abx_jd1_cfg_dma_s cn; */
};
typedef union cavm_bphdx_abx_jd1_cfg_dma cavm_bphdx_abx_jd1_cfg_dma_t;

static inline uint64_t CAVM_BPHDX_ABX_JD1_CFG_DMA(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BPHDX_ABX_JD1_CFG_DMA(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a==0) && (b<=1)))
        return 0x87e042b84000ll + 0ll * ((a) & 0x0) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("BPHDX_ABX_JD1_CFG_DMA", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_BPHDX_ABX_JD1_CFG_DMA(a,b) cavm_bphdx_abx_jd1_cfg_dma_t
#define bustype_CAVM_BPHDX_ABX_JD1_CFG_DMA(a,b) CSR_TYPE_RSL
#define basename_CAVM_BPHDX_ABX_JD1_CFG_DMA(a,b) "BPHDX_ABX_JD1_CFG_DMA"
#define device_bar_CAVM_BPHDX_ABX_JD1_CFG_DMA(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_BPHDX_ABX_JD1_CFG_DMA(a,b) (a)
#define arguments_CAVM_BPHDX_ABX_JD1_CFG_DMA(a,b) (a),(b),-1,-1

/**
 * Register (RSL) bphd#_ab#_status
 *
 * BPHD Status Register
 */
union cavm_bphdx_abx_status
{
    uint64_t u;
    struct cavm_bphdx_abx_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t ready                 : 1;  /**< [  4:  4](RO/H) When set, the BPHD HAB is ready to receive the next job. */
        uint64_t reserved_2_3          : 2;
        uint64_t cfg1_busy             : 1;  /**< [  1:  1](RO/H) When set, slot 1 is busy processing a job. */
        uint64_t cfg0_busy             : 1;  /**< [  0:  0](RO/H) When set, slot 0 is busy processing a job. */
#else /* Word 0 - Little Endian */
        uint64_t cfg0_busy             : 1;  /**< [  0:  0](RO/H) When set, slot 0 is busy processing a job. */
        uint64_t cfg1_busy             : 1;  /**< [  1:  1](RO/H) When set, slot 1 is busy processing a job. */
        uint64_t reserved_2_3          : 2;
        uint64_t ready                 : 1;  /**< [  4:  4](RO/H) When set, the BPHD HAB is ready to receive the next job. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bphdx_abx_status_s cn; */
};
typedef union cavm_bphdx_abx_status cavm_bphdx_abx_status_t;

static inline uint64_t CAVM_BPHDX_ABX_STATUS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BPHDX_ABX_STATUS(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a==0) && (b<=1)))
        return 0x87e042b80018ll + 0ll * ((a) & 0x0) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("BPHDX_ABX_STATUS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_BPHDX_ABX_STATUS(a,b) cavm_bphdx_abx_status_t
#define bustype_CAVM_BPHDX_ABX_STATUS(a,b) CSR_TYPE_RSL
#define basename_CAVM_BPHDX_ABX_STATUS(a,b) "BPHDX_ABX_STATUS"
#define device_bar_CAVM_BPHDX_ABX_STATUS(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_BPHDX_ABX_STATUS(a,b) (a)
#define arguments_CAVM_BPHDX_ABX_STATUS(a,b) (a),(b),-1,-1

#endif /* __CAVM_CSRS_BPHD_H__ */
