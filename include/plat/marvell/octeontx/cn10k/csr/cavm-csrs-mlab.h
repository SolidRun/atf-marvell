#ifndef __CAVM_CSRS_MLAB_H__
#define __CAVM_CSRS_MLAB_H__
/* This file is auto-generated. Do not edit */

/***********************license start***********************************
* Copyright (C) 2020-2021 Marvell
* SPDX-License-Identifier: BSD-3-Clause
* https://spdx.org/licenses
***********************license end**************************************/


/**
 * @file
 *
 * Configuration and status register (CSR) address and type definitions for
 * OcteonTX MLAB.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration mlab_bar_e
 *
 * INTERNAL: MLAB Base Address Enumeration
 *
 * Enumerates internal sub-bar(s) which specify the address sub-regions used by
 * this block within the BPHY_BAR_E address regions.
 */
#define CAVM_MLAB_BAR_E_MLAB_PF_BAR0 (0x860020000000ll)
#define CAVM_MLAB_BAR_E_MLAB_PF_BAR0_SIZE 0x40000ull

/**
 * Enumeration mlab_job_stg_e
 *
 * MLAB Job Stages Enumeration
 * Enumerates the MLAB Job Stages
 */
#define CAVM_MLAB_JOB_STG_E_COMP (2)
#define CAVM_MLAB_JOB_STG_E_FETCH (0)
#define CAVM_MLAB_JOB_STG_E_RUN (1)

/**
 * Structure mlab_jce_s
 *
 * MLAB Job Completion Structure
 */
union cavm_mlab_jce_s
{
    uint64_t u[2];
    struct cavm_mlab_jce_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t tag                   : 32; /**< [ 63: 32] Tag. */
        uint64_t ggrp                  : 8;  /**< [ 31: 24] Unused[7] + Guest Group[6:0]. */
        uint64_t pf_func               : 16; /**< [ 23:  8] Physical function number. */
        uint64_t ttype                 : 2;  /**< [  7:  6] Tag type. */
        uint64_t ggrp_h                : 2;  /**< [  5:  4] Reserved for future architecture. */
        uint64_t reserved_0_3          : 4;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_3          : 4;
        uint64_t ggrp_h                : 2;  /**< [  5:  4] Reserved for future architecture. */
        uint64_t ttype                 : 2;  /**< [  7:  6] Tag type. */
        uint64_t pf_func               : 16; /**< [ 23:  8] Physical function number. */
        uint64_t ggrp                  : 8;  /**< [ 31: 24] Unused[7] + Guest Group[6:0]. */
        uint64_t tag                   : 32; /**< [ 63: 32] Tag. */
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t reserved_117_127      : 11;
        uint64_t wqp                   : 53; /**< [116: 64] Work Queue Pointer */
#else /* Word 1 - Little Endian */
        uint64_t wqp                   : 53; /**< [116: 64] Work Queue Pointer */
        uint64_t reserved_117_127      : 11;
#endif /* Word 1 - End */
    } s;
    /* struct cavm_mlab_jce_s_s cn; */
};

/**
 * Structure mlab_job_cmd_s
 *
 * MLAB Job Command Structure
 */
union cavm_mlab_job_cmd_s
{
    uint64_t u[2];
    struct cavm_mlab_job_cmd_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t reserved_117_127      : 11;
        uint64_t jobptr                : 53; /**< [116: 64] Job Pointer */
#else /* Word 1 - Little Endian */
        uint64_t jobptr                : 53; /**< [116: 64] Job Pointer */
        uint64_t reserved_117_127      : 11;
#endif /* Word 1 - End */
    } s;
    /* struct cavm_mlab_job_cmd_s_s cn; */
};

/**
 * Register (NCB) mlab_active_pc
 *
 * MLAB Conditional Coprocessor Clock Counter Register
 */
union cavm_mlab_active_pc
{
    uint64_t u;
    struct cavm_mlab_active_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t active_pc             : 64; /**< [ 63:  0](R/W/H) This register increments on every coprocessor-clock cycle that the MLAB conditional clocks
                                                                 are enabled. */
#else /* Word 0 - Little Endian */
        uint64_t active_pc             : 64; /**< [ 63:  0](R/W/H) This register increments on every coprocessor-clock cycle that the MLAB conditional clocks
                                                                 are enabled. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlab_active_pc_s cn; */
};
typedef union cavm_mlab_active_pc cavm_mlab_active_pc_t;

#define CAVM_MLAB_ACTIVE_PC CAVM_MLAB_ACTIVE_PC_FUNC()
static inline uint64_t CAVM_MLAB_ACTIVE_PC_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLAB_ACTIVE_PC_FUNC(void)
{
    return 0x8600200100f0ll;
}

#define typedef_CAVM_MLAB_ACTIVE_PC cavm_mlab_active_pc_t
#define bustype_CAVM_MLAB_ACTIVE_PC CSR_TYPE_NCB
#define basename_CAVM_MLAB_ACTIVE_PC "MLAB_ACTIVE_PC"
#define device_bar_CAVM_MLAB_ACTIVE_PC 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLAB_ACTIVE_PC 0
#define arguments_CAVM_MLAB_ACTIVE_PC -1,-1,-1,-1

/**
 * Register (NCB) mlab_axi_bridge_ctrl#
 *
 * MLAB Wrapper AXI Bridge Control Register
 * MLAB_AXI_BRIDGE_CTRL[0] is for ACC AXI bridge and MLAB_AXI_BRIDGE_CTRL[1] is for DMA AXI bridge.
 */
union cavm_mlab_axi_bridge_ctrlx
{
    uint64_t u;
    struct cavm_mlab_axi_bridge_ctrlx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_21_63        : 43;
        uint64_t force_rresp_ok        : 1;  /**< [ 20: 20](R/W) When set, the read response will be force to OK, no error read response will be returned. */
        uint64_t force_wresp_ok        : 1;  /**< [ 19: 19](R/W) When set, the write response will be force to OK, no error write response will be returned. */
        uint64_t busy                  : 1;  /**< [ 18: 18](RO/H) When set, there still pending transactions in AXI bridge. */
        uint64_t fence                 : 1;  /**< [ 17: 17](R/W) When set, the AXI bridge stops taking new request from external master. */
        uint64_t ncb_rd_blk            : 1;  /**< [ 16: 16](R/W) NCB Read block.  When set, the read request to NCB domain will be blocked if the barrier is set. */
        uint64_t csr_rd_blk            : 1;  /**< [ 15: 15](R/W) CSR Read block.  When set, the read request to CSR domain will be blocked if the barrier is set. */
        uint64_t ncb_wr_blk            : 1;  /**< [ 14: 14](R/W) NCB Write block.  When set, the write request to NCB domain will be blocked if the barrier is set. */
        uint64_t csr_wr_blk            : 1;  /**< [ 13: 13](R/W) CSR Write block.  When set, the write request to CSR domain will be blocked if the barrier is set. */
        uint64_t axi_id_mode           : 1;  /**< [ 12: 12](R/W) ID Mode.  0x0 = AXI IDs are bypassed.  0x1 = AXI IDs are forced. */
        uint64_t force_axi_id          : 10; /**< [ 11:  2](R/W) Force AXI ID.  10-bit value to be used for AXI transactions when AXI_ID_MODE = 1 */
        uint64_t bridge_ctrl_mode      : 1;  /**< [  1:  1](R/W) Control Mode.  0x0 = all AXI transactions will be forwarded to downstream
                                                                 modules.  0x1 = Bridge will provide early response for write transactions.
                                                                 External barrier is needed to guarantee the data coherency. */
        uint64_t axi_resp_ctrl         : 1;  /**< [  0:  0](R/W) Response Control.  0x0 = AXI read/write responses will be returned based on the
                                                                 request sequence.  0x1 = AXI read/write responses will be returned
                                                                 based on when they are received and is only used when 1) no reordering is
                                                                 required, 2) no back pressure on read/write response channels from AXI master.
                                                                 This mode cannot be used when AXI_ID_MODE = 1; This mode cannot be used when AXI
                                                                 master sends WRAP transactions. */
#else /* Word 0 - Little Endian */
        uint64_t axi_resp_ctrl         : 1;  /**< [  0:  0](R/W) Response Control.  0x0 = AXI read/write responses will be returned based on the
                                                                 request sequence.  0x1 = AXI read/write responses will be returned
                                                                 based on when they are received and is only used when 1) no reordering is
                                                                 required, 2) no back pressure on read/write response channels from AXI master.
                                                                 This mode cannot be used when AXI_ID_MODE = 1; This mode cannot be used when AXI
                                                                 master sends WRAP transactions. */
        uint64_t bridge_ctrl_mode      : 1;  /**< [  1:  1](R/W) Control Mode.  0x0 = all AXI transactions will be forwarded to downstream
                                                                 modules.  0x1 = Bridge will provide early response for write transactions.
                                                                 External barrier is needed to guarantee the data coherency. */
        uint64_t force_axi_id          : 10; /**< [ 11:  2](R/W) Force AXI ID.  10-bit value to be used for AXI transactions when AXI_ID_MODE = 1 */
        uint64_t axi_id_mode           : 1;  /**< [ 12: 12](R/W) ID Mode.  0x0 = AXI IDs are bypassed.  0x1 = AXI IDs are forced. */
        uint64_t csr_wr_blk            : 1;  /**< [ 13: 13](R/W) CSR Write block.  When set, the write request to CSR domain will be blocked if the barrier is set. */
        uint64_t ncb_wr_blk            : 1;  /**< [ 14: 14](R/W) NCB Write block.  When set, the write request to NCB domain will be blocked if the barrier is set. */
        uint64_t csr_rd_blk            : 1;  /**< [ 15: 15](R/W) CSR Read block.  When set, the read request to CSR domain will be blocked if the barrier is set. */
        uint64_t ncb_rd_blk            : 1;  /**< [ 16: 16](R/W) NCB Read block.  When set, the read request to NCB domain will be blocked if the barrier is set. */
        uint64_t fence                 : 1;  /**< [ 17: 17](R/W) When set, the AXI bridge stops taking new request from external master. */
        uint64_t busy                  : 1;  /**< [ 18: 18](RO/H) When set, there still pending transactions in AXI bridge. */
        uint64_t force_wresp_ok        : 1;  /**< [ 19: 19](R/W) When set, the write response will be force to OK, no error write response will be returned. */
        uint64_t force_rresp_ok        : 1;  /**< [ 20: 20](R/W) When set, the read response will be force to OK, no error read response will be returned. */
        uint64_t reserved_21_63        : 43;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlab_axi_bridge_ctrlx_s cn; */
};
typedef union cavm_mlab_axi_bridge_ctrlx cavm_mlab_axi_bridge_ctrlx_t;

static inline uint64_t CAVM_MLAB_AXI_BRIDGE_CTRLX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLAB_AXI_BRIDGE_CTRLX(uint64_t a)
{
    if (a<=1)
        return 0x860020010020ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("MLAB_AXI_BRIDGE_CTRLX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MLAB_AXI_BRIDGE_CTRLX(a) cavm_mlab_axi_bridge_ctrlx_t
#define bustype_CAVM_MLAB_AXI_BRIDGE_CTRLX(a) CSR_TYPE_NCB
#define basename_CAVM_MLAB_AXI_BRIDGE_CTRLX(a) "MLAB_AXI_BRIDGE_CTRLX"
#define device_bar_CAVM_MLAB_AXI_BRIDGE_CTRLX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLAB_AXI_BRIDGE_CTRLX(a) (a)
#define arguments_CAVM_MLAB_AXI_BRIDGE_CTRLX(a) (a),-1,-1,-1

/**
 * Register (NCB) mlab_barrier
 *
 * MLAB Barrier Register
 */
union cavm_mlab_barrier
{
    uint64_t u;
    struct cavm_mlab_barrier_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t active                : 1;  /**< [  0:  0](R/W1S/H) Writing a one to set this bit inserts the barrier. Hardware keeps the bit set
                                                                 while the barrier is active and clears it when the barrier is satisfied. If a
                                                                 one is written while the bit is already set, the write and all AXI transactions
                                                                 are stalled until the barrier is satisfied and hardware clears the bit. */
#else /* Word 0 - Little Endian */
        uint64_t active                : 1;  /**< [  0:  0](R/W1S/H) Writing a one to set this bit inserts the barrier. Hardware keeps the bit set
                                                                 while the barrier is active and clears it when the barrier is satisfied. If a
                                                                 one is written while the bit is already set, the write and all AXI transactions
                                                                 are stalled until the barrier is satisfied and hardware clears the bit. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlab_barrier_s cn; */
};
typedef union cavm_mlab_barrier cavm_mlab_barrier_t;

#define CAVM_MLAB_BARRIER CAVM_MLAB_BARRIER_FUNC()
static inline uint64_t CAVM_MLAB_BARRIER_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLAB_BARRIER_FUNC(void)
{
    return 0x860020011300ll;
}

#define typedef_CAVM_MLAB_BARRIER cavm_mlab_barrier_t
#define bustype_CAVM_MLAB_BARRIER CSR_TYPE_NCB
#define basename_CAVM_MLAB_BARRIER "MLAB_BARRIER"
#define device_bar_CAVM_MLAB_BARRIER 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLAB_BARRIER 0
#define arguments_CAVM_MLAB_BARRIER -1,-1,-1,-1

/**
 * Register (NCB) mlab_cfg
 *
 * MLAB Configuration Register
 */
union cavm_mlab_cfg
{
    uint64_t u;
    struct cavm_mlab_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t ena                   : 1;  /**< [  6:  6](R/W) Enable new jobs. When clear, MLAB will drop new job commands. When set, MLAB will
                                                                 accept job commands. This bit can be cleared at any time. If [BUSY] is set,
                                                                 software must wait until [BUSY]==0 before setting this bit. */
        uint64_t mlip_clk_force        : 1;  /**< [  5:  5](R/W) Force the MLIP conditional clock active. Must be set and remain set for the
                                                                 duration of a firmware task that is unrelated to job execution, e.g. firmware
                                                                 boot. It is safe for software to set and clear this bit when MLAB jobs are in
                                                                 flight. */
        uint64_t wrap_clk_force        : 1;  /**< [  4:  4](R/W) Force conditional bus clocks to be always enabled. */
        uint64_t busy                  : 1;  /**< [  3:  3](RO/H) Set when MLAB has one or more jobs in flight. */
        uint64_t mlip_ena              : 1;  /**< [  2:  2](R/W) MLIP enable. Warm reset to MLIP is asserted when clear. */
        uint64_t jd_size               : 2;  /**< [  1:  0](R/W) Job descriptor size. 0x0 = Reserved. 0x1 = 64bytes. 0x2 = 96 bytes. 0x3 = 128 bytes. */
#else /* Word 0 - Little Endian */
        uint64_t jd_size               : 2;  /**< [  1:  0](R/W) Job descriptor size. 0x0 = Reserved. 0x1 = 64bytes. 0x2 = 96 bytes. 0x3 = 128 bytes. */
        uint64_t mlip_ena              : 1;  /**< [  2:  2](R/W) MLIP enable. Warm reset to MLIP is asserted when clear. */
        uint64_t busy                  : 1;  /**< [  3:  3](RO/H) Set when MLAB has one or more jobs in flight. */
        uint64_t wrap_clk_force        : 1;  /**< [  4:  4](R/W) Force conditional bus clocks to be always enabled. */
        uint64_t mlip_clk_force        : 1;  /**< [  5:  5](R/W) Force the MLIP conditional clock active. Must be set and remain set for the
                                                                 duration of a firmware task that is unrelated to job execution, e.g. firmware
                                                                 boot. It is safe for software to set and clear this bit when MLAB jobs are in
                                                                 flight. */
        uint64_t ena                   : 1;  /**< [  6:  6](R/W) Enable new jobs. When clear, MLAB will drop new job commands. When set, MLAB will
                                                                 accept job commands. This bit can be cleared at any time. If [BUSY] is set,
                                                                 software must wait until [BUSY]==0 before setting this bit. */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlab_cfg_s cn; */
};
typedef union cavm_mlab_cfg cavm_mlab_cfg_t;

#define CAVM_MLAB_CFG CAVM_MLAB_CFG_FUNC()
static inline uint64_t CAVM_MLAB_CFG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLAB_CFG_FUNC(void)
{
    return 0x860020010000ll;
}

#define typedef_CAVM_MLAB_CFG cavm_mlab_cfg_t
#define bustype_CAVM_MLAB_CFG CSR_TYPE_NCB
#define basename_CAVM_MLAB_CFG "MLAB_CFG"
#define device_bar_CAVM_MLAB_CFG 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLAB_CFG 0
#define arguments_CAVM_MLAB_CFG -1,-1,-1,-1

/**
 * Register (NCB) mlab_csr_base
 *
 * MLAB Wrapper Register Base Register
 */
union cavm_mlab_csr_base
{
    uint64_t u;
    struct cavm_mlab_csr_base_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_52_63        : 12;
        uint64_t base                  : 52; /**< [ 51:  0](R/W) MLAB Region Base */
#else /* Word 0 - Little Endian */
        uint64_t base                  : 52; /**< [ 51:  0](R/W) MLAB Region Base */
        uint64_t reserved_52_63        : 12;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlab_csr_base_s cn; */
};
typedef union cavm_mlab_csr_base cavm_mlab_csr_base_t;

#define CAVM_MLAB_CSR_BASE CAVM_MLAB_CSR_BASE_FUNC()
static inline uint64_t CAVM_MLAB_CSR_BASE_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLAB_CSR_BASE_FUNC(void)
{
    return 0x860020010010ll;
}

#define typedef_CAVM_MLAB_CSR_BASE cavm_mlab_csr_base_t
#define bustype_CAVM_MLAB_CSR_BASE CSR_TYPE_NCB
#define basename_CAVM_MLAB_CSR_BASE "MLAB_CSR_BASE"
#define device_bar_CAVM_MLAB_CSR_BASE 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLAB_CSR_BASE 0
#define arguments_CAVM_MLAB_CSR_BASE -1,-1,-1,-1

/**
 * Register (NCB) mlab_csr_mask
 *
 * MLAB Wrapper Register Mask Register
 */
union cavm_mlab_csr_mask
{
    uint64_t u;
    struct cavm_mlab_csr_mask_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_52_63        : 12;
        uint64_t base                  : 52; /**< [ 51:  0](R/W) MLAB Region Mask */
#else /* Word 0 - Little Endian */
        uint64_t base                  : 52; /**< [ 51:  0](R/W) MLAB Region Mask */
        uint64_t reserved_52_63        : 12;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlab_csr_mask_s cn; */
};
typedef union cavm_mlab_csr_mask cavm_mlab_csr_mask_t;

#define CAVM_MLAB_CSR_MASK CAVM_MLAB_CSR_MASK_FUNC()
static inline uint64_t CAVM_MLAB_CSR_MASK_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLAB_CSR_MASK_FUNC(void)
{
    return 0x860020010018ll;
}

#define typedef_CAVM_MLAB_CSR_MASK cavm_mlab_csr_mask_t
#define bustype_CAVM_MLAB_CSR_MASK CSR_TYPE_NCB
#define basename_CAVM_MLAB_CSR_MASK "MLAB_CSR_MASK"
#define device_bar_CAVM_MLAB_CSR_MASK 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLAB_CSR_MASK 0
#define arguments_CAVM_MLAB_CSR_MASK -1,-1,-1,-1

/**
 * Register (NCB) mlab_eco
 *
 * INTERNAL: MLAB ECO Register
 */
union cavm_mlab_eco
{
    uint64_t u;
    struct cavm_mlab_eco_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t eco_rw                : 32; /**< [ 31:  0](R/W) Reserved for ECO usage. */
#else /* Word 0 - Little Endian */
        uint64_t eco_rw                : 32; /**< [ 31:  0](R/W) Reserved for ECO usage. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlab_eco_s cn; */
};
typedef union cavm_mlab_eco cavm_mlab_eco_t;

#define CAVM_MLAB_ECO CAVM_MLAB_ECO_FUNC()
static inline uint64_t CAVM_MLAB_ECO_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLAB_ECO_FUNC(void)
{
    return 0x8600200100f8ll;
}

#define typedef_CAVM_MLAB_ECO cavm_mlab_eco_t
#define bustype_CAVM_MLAB_ECO CSR_TYPE_NCB
#define basename_CAVM_MLAB_ECO "MLAB_ECO"
#define device_bar_CAVM_MLAB_ECO 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLAB_ECO 0
#define arguments_CAVM_MLAB_ECO -1,-1,-1,-1

/**
 * Register (NCB) mlab_err_ena
 *
 * MLAB Wrapper Error Enable Register
 */
union cavm_mlab_err_ena
{
    uint64_t u;
    struct cavm_mlab_err_ena_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_22_63        : 42;
        uint64_t dma_csr_wresp_err     : 1;  /**< [ 21: 21](R/W) MLIP DMA write response error from CSR bus. */
        uint64_t dma_csr_rresp_err     : 1;  /**< [ 20: 20](R/W) MLIP DMA read response error from CSR bus. */
        uint64_t dma_ncb_wresp_err     : 1;  /**< [ 19: 19](R/W) MLIP DMA write response error from NCB bus. */
        uint64_t dma_ncb_rresp_err     : 1;  /**< [ 18: 18](R/W) MLIP DMA read response error from NCB bus. */
        uint64_t dma_waddr_err         : 1;  /**< [ 17: 17](R/W) MLIP DMA write request address out of bound. */
        uint64_t dma_raddr_err         : 1;  /**< [ 16: 16](R/W) MLIP DMA read request address out of bound. */
        uint64_t reserved_10_15        : 6;
        uint64_t acc_csr_wresp_err     : 1;  /**< [  9:  9](R/W) MLIP ACC write response error from CSR bus. */
        uint64_t acc_csr_rresp_err     : 1;  /**< [  8:  8](R/W) MLIP ACC read response error from CSR bus. */
        uint64_t acc_ncb_wresp_err     : 1;  /**< [  7:  7](R/W) MLIP ACC write response error from NCB bus. */
        uint64_t acc_ncb_rresp_err     : 1;  /**< [  6:  6](R/W) MLIP ACC read response error from NCB bus. */
        uint64_t acc_waddr_err         : 1;  /**< [  5:  5](R/W) MLIP ACC write request address out of bound. */
        uint64_t acc_raddr_err         : 1;  /**< [  4:  4](R/W) MLIP ACC read request address out of bound. */
        uint64_t jceq_ovfl             : 1;  /**< [  3:  3](R/W) MLAB job completion queue overflow. */
        uint64_t jcmdq_ovfl            : 1;  /**< [  2:  2](R/W) MLAB job command queue overflow. */
        uint64_t descriptor_err        : 1;  /**< [  1:  1](R/W) MLAB job descriptor fetch error. */
        uint64_t jobptr_err            : 1;  /**< [  0:  0](R/W) MLAB job pointer out of bound error. */
#else /* Word 0 - Little Endian */
        uint64_t jobptr_err            : 1;  /**< [  0:  0](R/W) MLAB job pointer out of bound error. */
        uint64_t descriptor_err        : 1;  /**< [  1:  1](R/W) MLAB job descriptor fetch error. */
        uint64_t jcmdq_ovfl            : 1;  /**< [  2:  2](R/W) MLAB job command queue overflow. */
        uint64_t jceq_ovfl             : 1;  /**< [  3:  3](R/W) MLAB job completion queue overflow. */
        uint64_t acc_raddr_err         : 1;  /**< [  4:  4](R/W) MLIP ACC read request address out of bound. */
        uint64_t acc_waddr_err         : 1;  /**< [  5:  5](R/W) MLIP ACC write request address out of bound. */
        uint64_t acc_ncb_rresp_err     : 1;  /**< [  6:  6](R/W) MLIP ACC read response error from NCB bus. */
        uint64_t acc_ncb_wresp_err     : 1;  /**< [  7:  7](R/W) MLIP ACC write response error from NCB bus. */
        uint64_t acc_csr_rresp_err     : 1;  /**< [  8:  8](R/W) MLIP ACC read response error from CSR bus. */
        uint64_t acc_csr_wresp_err     : 1;  /**< [  9:  9](R/W) MLIP ACC write response error from CSR bus. */
        uint64_t reserved_10_15        : 6;
        uint64_t dma_raddr_err         : 1;  /**< [ 16: 16](R/W) MLIP DMA read request address out of bound. */
        uint64_t dma_waddr_err         : 1;  /**< [ 17: 17](R/W) MLIP DMA write request address out of bound. */
        uint64_t dma_ncb_rresp_err     : 1;  /**< [ 18: 18](R/W) MLIP DMA read response error from NCB bus. */
        uint64_t dma_ncb_wresp_err     : 1;  /**< [ 19: 19](R/W) MLIP DMA write response error from NCB bus. */
        uint64_t dma_csr_rresp_err     : 1;  /**< [ 20: 20](R/W) MLIP DMA read response error from CSR bus. */
        uint64_t dma_csr_wresp_err     : 1;  /**< [ 21: 21](R/W) MLIP DMA write response error from CSR bus. */
        uint64_t reserved_22_63        : 42;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlab_err_ena_s cn; */
};
typedef union cavm_mlab_err_ena cavm_mlab_err_ena_t;

#define CAVM_MLAB_ERR_ENA CAVM_MLAB_ERR_ENA_FUNC()
static inline uint64_t CAVM_MLAB_ERR_ENA_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLAB_ERR_ENA_FUNC(void)
{
    return 0x860020010040ll;
}

#define typedef_CAVM_MLAB_ERR_ENA cavm_mlab_err_ena_t
#define bustype_CAVM_MLAB_ERR_ENA CSR_TYPE_NCB
#define basename_CAVM_MLAB_ERR_ENA "MLAB_ERR_ENA"
#define device_bar_CAVM_MLAB_ERR_ENA 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLAB_ERR_ENA 0
#define arguments_CAVM_MLAB_ERR_ENA -1,-1,-1,-1

/**
 * Register (NCB) mlab_err_mask
 *
 * MLAB Wrapper Error Mask Register
 * When set, error status will be masked out and no interrupt will be generated.
 */
union cavm_mlab_err_mask
{
    uint64_t u;
    struct cavm_mlab_err_mask_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_22_63        : 42;
        uint64_t dma_csr_wresp_err     : 1;  /**< [ 21: 21](R/W) MLIP DMA write response error from CSR bus. */
        uint64_t dma_csr_rresp_err     : 1;  /**< [ 20: 20](R/W) MLIP DMA read response error from CSR bus. */
        uint64_t dma_ncb_wresp_err     : 1;  /**< [ 19: 19](R/W) MLIP DMA write response error from NCB bus. */
        uint64_t dma_ncb_rresp_err     : 1;  /**< [ 18: 18](R/W) MLIP DMA read response error from NCB bus. */
        uint64_t dma_waddr_err         : 1;  /**< [ 17: 17](R/W) MLIP DMA write request address out of bound. */
        uint64_t dma_raddr_err         : 1;  /**< [ 16: 16](R/W) MLIP DMA read request address out of bound. */
        uint64_t reserved_10_15        : 6;
        uint64_t acc_csr_wresp_err     : 1;  /**< [  9:  9](R/W) MLIP ACC write response error from CSR bus. */
        uint64_t acc_csr_rresp_err     : 1;  /**< [  8:  8](R/W) MLIP ACC read response error from CSR bus. */
        uint64_t acc_ncb_wresp_err     : 1;  /**< [  7:  7](R/W) MLIP ACC write response error from NCB bus. */
        uint64_t acc_ncb_rresp_err     : 1;  /**< [  6:  6](R/W) MLIP ACC read response error from NCB bus. */
        uint64_t acc_waddr_err         : 1;  /**< [  5:  5](R/W) MLIP ACC write request address out of bound. */
        uint64_t acc_raddr_err         : 1;  /**< [  4:  4](R/W) MLIP ACC read request address out of bound. */
        uint64_t jceq_ovfl             : 1;  /**< [  3:  3](R/W) MLAB job completion queue overflow. */
        uint64_t jcmdq_ovfl            : 1;  /**< [  2:  2](R/W) MLAB job command queue overflow. */
        uint64_t descriptor_err        : 1;  /**< [  1:  1](R/W) MLAB job descriptor fetch error. */
        uint64_t jobptr_err            : 1;  /**< [  0:  0](R/W) MLAB job pointer out of bound error. */
#else /* Word 0 - Little Endian */
        uint64_t jobptr_err            : 1;  /**< [  0:  0](R/W) MLAB job pointer out of bound error. */
        uint64_t descriptor_err        : 1;  /**< [  1:  1](R/W) MLAB job descriptor fetch error. */
        uint64_t jcmdq_ovfl            : 1;  /**< [  2:  2](R/W) MLAB job command queue overflow. */
        uint64_t jceq_ovfl             : 1;  /**< [  3:  3](R/W) MLAB job completion queue overflow. */
        uint64_t acc_raddr_err         : 1;  /**< [  4:  4](R/W) MLIP ACC read request address out of bound. */
        uint64_t acc_waddr_err         : 1;  /**< [  5:  5](R/W) MLIP ACC write request address out of bound. */
        uint64_t acc_ncb_rresp_err     : 1;  /**< [  6:  6](R/W) MLIP ACC read response error from NCB bus. */
        uint64_t acc_ncb_wresp_err     : 1;  /**< [  7:  7](R/W) MLIP ACC write response error from NCB bus. */
        uint64_t acc_csr_rresp_err     : 1;  /**< [  8:  8](R/W) MLIP ACC read response error from CSR bus. */
        uint64_t acc_csr_wresp_err     : 1;  /**< [  9:  9](R/W) MLIP ACC write response error from CSR bus. */
        uint64_t reserved_10_15        : 6;
        uint64_t dma_raddr_err         : 1;  /**< [ 16: 16](R/W) MLIP DMA read request address out of bound. */
        uint64_t dma_waddr_err         : 1;  /**< [ 17: 17](R/W) MLIP DMA write request address out of bound. */
        uint64_t dma_ncb_rresp_err     : 1;  /**< [ 18: 18](R/W) MLIP DMA read response error from NCB bus. */
        uint64_t dma_ncb_wresp_err     : 1;  /**< [ 19: 19](R/W) MLIP DMA write response error from NCB bus. */
        uint64_t dma_csr_rresp_err     : 1;  /**< [ 20: 20](R/W) MLIP DMA read response error from CSR bus. */
        uint64_t dma_csr_wresp_err     : 1;  /**< [ 21: 21](R/W) MLIP DMA write response error from CSR bus. */
        uint64_t reserved_22_63        : 42;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlab_err_mask_s cn; */
};
typedef union cavm_mlab_err_mask cavm_mlab_err_mask_t;

#define CAVM_MLAB_ERR_MASK CAVM_MLAB_ERR_MASK_FUNC()
static inline uint64_t CAVM_MLAB_ERR_MASK_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLAB_ERR_MASK_FUNC(void)
{
    return 0x860020010048ll;
}

#define typedef_CAVM_MLAB_ERR_MASK cavm_mlab_err_mask_t
#define bustype_CAVM_MLAB_ERR_MASK CSR_TYPE_NCB
#define basename_CAVM_MLAB_ERR_MASK "MLAB_ERR_MASK"
#define device_bar_CAVM_MLAB_ERR_MASK 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLAB_ERR_MASK 0
#define arguments_CAVM_MLAB_ERR_MASK -1,-1,-1,-1

/**
 * Register (NCB) mlab_err_status
 *
 * MLAB Wrapper Error Status Register
 */
union cavm_mlab_err_status
{
    uint64_t u;
    struct cavm_mlab_err_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_22_63        : 42;
        uint64_t dma_csr_wresp_err     : 1;  /**< [ 21: 21](R/W1C/H) MLIP DMA write response error from CSR bus. */
        uint64_t dma_csr_rresp_err     : 1;  /**< [ 20: 20](R/W1C/H) MLIP DMA read response error from CSR bus. */
        uint64_t dma_ncb_wresp_err     : 1;  /**< [ 19: 19](R/W1C/H) MLIP DMA write response error from NCB bus. */
        uint64_t dma_ncb_rresp_err     : 1;  /**< [ 18: 18](R/W1C/H) MLIP DMA read response error from NCB bus. */
        uint64_t dma_waddr_err         : 1;  /**< [ 17: 17](R/W1C/H) MLIP DMA write request address out of bound. */
        uint64_t dma_raddr_err         : 1;  /**< [ 16: 16](R/W1C/H) MLIP DMA read request address out of bound. */
        uint64_t reserved_10_15        : 6;
        uint64_t acc_csr_wresp_err     : 1;  /**< [  9:  9](R/W1C/H) MLIP ACC write response error from CSR bus. */
        uint64_t acc_csr_rresp_err     : 1;  /**< [  8:  8](R/W1C/H) MLIP ACC read response error from CSR bus. */
        uint64_t acc_ncb_wresp_err     : 1;  /**< [  7:  7](R/W1C/H) MLIP ACC write response error from NCB bus. */
        uint64_t acc_ncb_rresp_err     : 1;  /**< [  6:  6](R/W1C/H) MLIP ACC read response error from NCB bus. */
        uint64_t acc_waddr_err         : 1;  /**< [  5:  5](R/W1C/H) MLIP ACC write request address out of bound. */
        uint64_t acc_raddr_err         : 1;  /**< [  4:  4](R/W1C/H) MLIP ACC read request address out of bound. */
        uint64_t jceq_ovfl             : 1;  /**< [  3:  3](R/W1C/H) MLAB job completion queue overflow. */
        uint64_t jcmdq_ovfl            : 1;  /**< [  2:  2](R/W1C/H) MLAB job command queue overflow. */
        uint64_t descriptor_err        : 1;  /**< [  1:  1](R/W1C/H) MLAB job descriptor fetch error. */
        uint64_t jobptr_err            : 1;  /**< [  0:  0](R/W1C/H) MLAB job pointer out of bound error. */
#else /* Word 0 - Little Endian */
        uint64_t jobptr_err            : 1;  /**< [  0:  0](R/W1C/H) MLAB job pointer out of bound error. */
        uint64_t descriptor_err        : 1;  /**< [  1:  1](R/W1C/H) MLAB job descriptor fetch error. */
        uint64_t jcmdq_ovfl            : 1;  /**< [  2:  2](R/W1C/H) MLAB job command queue overflow. */
        uint64_t jceq_ovfl             : 1;  /**< [  3:  3](R/W1C/H) MLAB job completion queue overflow. */
        uint64_t acc_raddr_err         : 1;  /**< [  4:  4](R/W1C/H) MLIP ACC read request address out of bound. */
        uint64_t acc_waddr_err         : 1;  /**< [  5:  5](R/W1C/H) MLIP ACC write request address out of bound. */
        uint64_t acc_ncb_rresp_err     : 1;  /**< [  6:  6](R/W1C/H) MLIP ACC read response error from NCB bus. */
        uint64_t acc_ncb_wresp_err     : 1;  /**< [  7:  7](R/W1C/H) MLIP ACC write response error from NCB bus. */
        uint64_t acc_csr_rresp_err     : 1;  /**< [  8:  8](R/W1C/H) MLIP ACC read response error from CSR bus. */
        uint64_t acc_csr_wresp_err     : 1;  /**< [  9:  9](R/W1C/H) MLIP ACC write response error from CSR bus. */
        uint64_t reserved_10_15        : 6;
        uint64_t dma_raddr_err         : 1;  /**< [ 16: 16](R/W1C/H) MLIP DMA read request address out of bound. */
        uint64_t dma_waddr_err         : 1;  /**< [ 17: 17](R/W1C/H) MLIP DMA write request address out of bound. */
        uint64_t dma_ncb_rresp_err     : 1;  /**< [ 18: 18](R/W1C/H) MLIP DMA read response error from NCB bus. */
        uint64_t dma_ncb_wresp_err     : 1;  /**< [ 19: 19](R/W1C/H) MLIP DMA write response error from NCB bus. */
        uint64_t dma_csr_rresp_err     : 1;  /**< [ 20: 20](R/W1C/H) MLIP DMA read response error from CSR bus. */
        uint64_t dma_csr_wresp_err     : 1;  /**< [ 21: 21](R/W1C/H) MLIP DMA write response error from CSR bus. */
        uint64_t reserved_22_63        : 42;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlab_err_status_s cn; */
};
typedef union cavm_mlab_err_status cavm_mlab_err_status_t;

#define CAVM_MLAB_ERR_STATUS CAVM_MLAB_ERR_STATUS_FUNC()
static inline uint64_t CAVM_MLAB_ERR_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLAB_ERR_STATUS_FUNC(void)
{
    return 0x860020010038ll;
}

#define typedef_CAVM_MLAB_ERR_STATUS cavm_mlab_err_status_t
#define bustype_CAVM_MLAB_ERR_STATUS CSR_TYPE_NCB
#define basename_CAVM_MLAB_ERR_STATUS "MLAB_ERR_STATUS"
#define device_bar_CAVM_MLAB_ERR_STATUS 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLAB_ERR_STATUS 0
#define arguments_CAVM_MLAB_ERR_STATUS -1,-1,-1,-1

/**
 * Register (NCB) mlab_int_hi_msg#
 *
 * INTERNAL: MLAB High Priority Interrupt Message Registers
 */
union cavm_mlab_int_hi_msgx
{
    uint64_t u;
    struct cavm_mlab_int_hi_msgx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W) These registers define a command/message sent to PSM on the active edge of the
                                                                 high priority interrupt from MLIP. Software will typically write a
                                                                 PSM_CMD_GPINT_S structure that sets one of the BPHY general purpose interrupts
                                                                 in PSM. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W) These registers define a command/message sent to PSM on the active edge of the
                                                                 high priority interrupt from MLIP. Software will typically write a
                                                                 PSM_CMD_GPINT_S structure that sets one of the BPHY general purpose interrupts
                                                                 in PSM. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlab_int_hi_msgx_s cn; */
};
typedef union cavm_mlab_int_hi_msgx cavm_mlab_int_hi_msgx_t;

static inline uint64_t CAVM_MLAB_INT_HI_MSGX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLAB_INT_HI_MSGX(uint64_t a)
{
    if (a<=1)
        return 0x860020011370ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("MLAB_INT_HI_MSGX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MLAB_INT_HI_MSGX(a) cavm_mlab_int_hi_msgx_t
#define bustype_CAVM_MLAB_INT_HI_MSGX(a) CSR_TYPE_NCB
#define basename_CAVM_MLAB_INT_HI_MSGX(a) "MLAB_INT_HI_MSGX"
#define device_bar_CAVM_MLAB_INT_HI_MSGX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLAB_INT_HI_MSGX(a) (a)
#define arguments_CAVM_MLAB_INT_HI_MSGX(a) (a),-1,-1,-1

/**
 * Register (NCB) mlab_int_lo_msg#
 *
 * INTERNAL: MLAB Low Priority Interrupt Message Registers
 */
union cavm_mlab_int_lo_msgx
{
    uint64_t u;
    struct cavm_mlab_int_lo_msgx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W) Same as MLAB_INT_HI_MSG(), but for low priority interrupt from MLIP. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W) Same as MLAB_INT_HI_MSG(), but for low priority interrupt from MLIP. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlab_int_lo_msgx_s cn; */
};
typedef union cavm_mlab_int_lo_msgx cavm_mlab_int_lo_msgx_t;

static inline uint64_t CAVM_MLAB_INT_LO_MSGX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLAB_INT_LO_MSGX(uint64_t a)
{
    if (a<=1)
        return 0x860020011380ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("MLAB_INT_LO_MSGX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MLAB_INT_LO_MSGX(a) cavm_mlab_int_lo_msgx_t
#define bustype_CAVM_MLAB_INT_LO_MSGX(a) CSR_TYPE_NCB
#define basename_CAVM_MLAB_INT_LO_MSGX(a) "MLAB_INT_LO_MSGX"
#define device_bar_CAVM_MLAB_INT_LO_MSGX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLAB_INT_LO_MSGX(a) (a)
#define arguments_CAVM_MLAB_INT_LO_MSGX(a) (a),-1,-1,-1

/**
 * Register (NCB) mlab_jceq_in#
 *
 * MLAB Job Completion Enqueue Register
 */
union cavm_mlab_jceq_inx
{
    uint64_t u;
    struct cavm_mlab_jceq_inx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W) MLIP should write MLAB_JCEQ_IN(0) first and followed by MLAB_JCEQ_IN(1). The write
                                                                 to MLAB_JCEQ_IN(1) pushes the command to the JCE queue.
                                                                 MLAB_JCEQ_STATUS[AVAIL_COUNT] must be non-zero before writing to MLAB_JCEQ_IN(1).
                                                                 Data format is given in MLAB_JCE_S. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W) MLIP should write MLAB_JCEQ_IN(0) first and followed by MLAB_JCEQ_IN(1). The write
                                                                 to MLAB_JCEQ_IN(1) pushes the command to the JCE queue.
                                                                 MLAB_JCEQ_STATUS[AVAIL_COUNT] must be non-zero before writing to MLAB_JCEQ_IN(1).
                                                                 Data format is given in MLAB_JCE_S. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlab_jceq_inx_s cn; */
};
typedef union cavm_mlab_jceq_inx cavm_mlab_jceq_inx_t;

static inline uint64_t CAVM_MLAB_JCEQ_INX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLAB_JCEQ_INX(uint64_t a)
{
    if (a<=1)
        return 0x860020011320ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("MLAB_JCEQ_INX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MLAB_JCEQ_INX(a) cavm_mlab_jceq_inx_t
#define bustype_CAVM_MLAB_JCEQ_INX(a) CSR_TYPE_NCB
#define basename_CAVM_MLAB_JCEQ_INX(a) "MLAB_JCEQ_INX"
#define device_bar_CAVM_MLAB_JCEQ_INX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLAB_JCEQ_INX(a) (a)
#define arguments_CAVM_MLAB_JCEQ_INX(a) (a),-1,-1,-1

/**
 * Register (NCB) mlab_jceq_status
 *
 * MLAB Job Completion Queue Status Register
 */
union cavm_mlab_jceq_status
{
    uint64_t u;
    struct cavm_mlab_jceq_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t avail_count           : 5;  /**< [  4:  0](RO/H) Number of available entries in the JCE queue. MLAB_JCEQ_IN(1) should only be
                                                                 written when this field is non-zero. */
#else /* Word 0 - Little Endian */
        uint64_t avail_count           : 5;  /**< [  4:  0](RO/H) Number of available entries in the JCE queue. MLAB_JCEQ_IN(1) should only be
                                                                 written when this field is non-zero. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlab_jceq_status_s cn; */
};
typedef union cavm_mlab_jceq_status cavm_mlab_jceq_status_t;

#define CAVM_MLAB_JCEQ_STATUS CAVM_MLAB_JCEQ_STATUS_FUNC()
static inline uint64_t CAVM_MLAB_JCEQ_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLAB_JCEQ_STATUS_FUNC(void)
{
    return 0x860020011330ll;
}

#define typedef_CAVM_MLAB_JCEQ_STATUS cavm_mlab_jceq_status_t
#define bustype_CAVM_MLAB_JCEQ_STATUS CSR_TYPE_NCB
#define basename_CAVM_MLAB_JCEQ_STATUS "MLAB_JCEQ_STATUS"
#define device_bar_CAVM_MLAB_JCEQ_STATUS 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLAB_JCEQ_STATUS 0
#define arguments_CAVM_MLAB_JCEQ_STATUS -1,-1,-1,-1

/**
 * Register (NCB) mlab_jctl_debug
 *
 * INTERNAL: MLAB Job Controller Debug Register
 */
union cavm_mlab_jctl_debug
{
    uint64_t u;
    struct cavm_mlab_jctl_debug_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](RO/H) Debug register connected to job controller. Data format is given in MLAB_JCTL_DEBUG_S. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](RO/H) Debug register connected to job controller. Data format is given in MLAB_JCTL_DEBUG_S. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlab_jctl_debug_s cn; */
};
typedef union cavm_mlab_jctl_debug cavm_mlab_jctl_debug_t;

#define CAVM_MLAB_JCTL_DEBUG CAVM_MLAB_JCTL_DEBUG_FUNC()
static inline uint64_t CAVM_MLAB_JCTL_DEBUG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLAB_JCTL_DEBUG_FUNC(void)
{
    return 0x860020011390ll;
}

#define typedef_CAVM_MLAB_JCTL_DEBUG cavm_mlab_jctl_debug_t
#define bustype_CAVM_MLAB_JCTL_DEBUG CSR_TYPE_NCB
#define basename_CAVM_MLAB_JCTL_DEBUG "MLAB_JCTL_DEBUG"
#define device_bar_CAVM_MLAB_JCTL_DEBUG 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLAB_JCTL_DEBUG 0
#define arguments_CAVM_MLAB_JCTL_DEBUG -1,-1,-1,-1

/**
 * Register (NCB) mlab_jd#
 *
 * MLAB Job Descriptor Register
 */
union cavm_mlab_jdx
{
    uint64_t u;
    struct cavm_mlab_jdx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W) Job descriptor word */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W) Job descriptor word */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlab_jdx_s cn; */
};
typedef union cavm_mlab_jdx cavm_mlab_jdx_t;

static inline uint64_t CAVM_MLAB_JDX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLAB_JDX(uint64_t a)
{
    if (a<=15)
        return 0x860020011200ll + 8ll * ((a) & 0xf);
    __cavm_csr_fatal("MLAB_JDX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MLAB_JDX(a) cavm_mlab_jdx_t
#define bustype_CAVM_MLAB_JDX(a) CSR_TYPE_NCB
#define basename_CAVM_MLAB_JDX(a) "MLAB_JDX"
#define device_bar_CAVM_MLAB_JDX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLAB_JDX(a) (a)
#define arguments_CAVM_MLAB_JDX(a) (a),-1,-1,-1

/**
 * Register (NCB) mlab_job_timer_cfg
 *
 * INTERNAL: MLAB Job Timer Configuration Register
 */
union cavm_mlab_job_timer_cfg
{
    uint64_t u;
    struct cavm_mlab_job_timer_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_43_63        : 21;
        uint64_t toth                  : 42; /**< [ 42:  1](R/W) Determines when a job's timer is started.
                                                                 0 = Start a job's timer in the fetch stage when hardware writes the job command
                                                                 to MLAB_STG(0)_JCMD().
                                                                 1 = Start a job's timer when the job is moved to the run stage, i.e. when
                                                                 MLAB_STG(1)_STATUS[VALID] gets set.
                                                                 If [START_ON_RUN] is set, firmware may write to this register to modify a job's
                                                                 timeout value before moving the job to the run stage by setting
                                                                 MLAB_STG_CONTROL[FETCH_TO_RUN]. */
        uint64_t start_on_run          : 1;  /**< [  0:  0](R/W) Job timeout threshold in number of sclk cycles. Hardware detects a job timeout
                                                                 when the job's timer (MLAB_STG()_STATUS[ELAPSED_TICKS]) reaches this value.
                                                                  The timer is disabled when TOTH = 0x0. */
#else /* Word 0 - Little Endian */
        uint64_t start_on_run          : 1;  /**< [  0:  0](R/W) Job timeout threshold in number of sclk cycles. Hardware detects a job timeout
                                                                 when the job's timer (MLAB_STG()_STATUS[ELAPSED_TICKS]) reaches this value.
                                                                  The timer is disabled when TOTH = 0x0. */
        uint64_t toth                  : 42; /**< [ 42:  1](R/W) Determines when a job's timer is started.
                                                                 0 = Start a job's timer in the fetch stage when hardware writes the job command
                                                                 to MLAB_STG(0)_JCMD().
                                                                 1 = Start a job's timer when the job is moved to the run stage, i.e. when
                                                                 MLAB_STG(1)_STATUS[VALID] gets set.
                                                                 If [START_ON_RUN] is set, firmware may write to this register to modify a job's
                                                                 timeout value before moving the job to the run stage by setting
                                                                 MLAB_STG_CONTROL[FETCH_TO_RUN]. */
        uint64_t reserved_43_63        : 21;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlab_job_timer_cfg_s cn; */
};
typedef union cavm_mlab_job_timer_cfg cavm_mlab_job_timer_cfg_t;

#define CAVM_MLAB_JOB_TIMER_CFG CAVM_MLAB_JOB_TIMER_CFG_FUNC()
static inline uint64_t CAVM_MLAB_JOB_TIMER_CFG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLAB_JOB_TIMER_CFG_FUNC(void)
{
    return 0x860020011350ll;
}

#define typedef_CAVM_MLAB_JOB_TIMER_CFG cavm_mlab_job_timer_cfg_t
#define bustype_CAVM_MLAB_JOB_TIMER_CFG CSR_TYPE_NCB
#define basename_CAVM_MLAB_JOB_TIMER_CFG "MLAB_JOB_TIMER_CFG"
#define device_bar_CAVM_MLAB_JOB_TIMER_CFG 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLAB_JOB_TIMER_CFG 0
#define arguments_CAVM_MLAB_JOB_TIMER_CFG -1,-1,-1,-1

/**
 * Register (NCB) mlab_jobptr_end
 *
 * MLAB Job Pointer End Address Register
 */
union cavm_mlab_jobptr_end
{
    uint64_t u;
    struct cavm_mlab_jobptr_end_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t end_addr              : 53; /**< [ 52:  0](R/W) MLAB job pointer end address. */
#else /* Word 0 - Little Endian */
        uint64_t end_addr              : 53; /**< [ 52:  0](R/W) MLAB job pointer end address. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlab_jobptr_end_s cn; */
};
typedef union cavm_mlab_jobptr_end cavm_mlab_jobptr_end_t;

#define CAVM_MLAB_JOBPTR_END CAVM_MLAB_JOBPTR_END_FUNC()
static inline uint64_t CAVM_MLAB_JOBPTR_END_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLAB_JOBPTR_END_FUNC(void)
{
    return 0x860020010058ll;
}

#define typedef_CAVM_MLAB_JOBPTR_END cavm_mlab_jobptr_end_t
#define bustype_CAVM_MLAB_JOBPTR_END CSR_TYPE_NCB
#define basename_CAVM_MLAB_JOBPTR_END "MLAB_JOBPTR_END"
#define device_bar_CAVM_MLAB_JOBPTR_END 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLAB_JOBPTR_END 0
#define arguments_CAVM_MLAB_JOBPTR_END -1,-1,-1,-1

/**
 * Register (NCB) mlab_jobptr_start
 *
 * MLAB Job Pointer Start Address Register
 */
union cavm_mlab_jobptr_start
{
    uint64_t u;
    struct cavm_mlab_jobptr_start_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t start_addr            : 53; /**< [ 52:  0](R/W) MLAB job pointer start address. */
#else /* Word 0 - Little Endian */
        uint64_t start_addr            : 53; /**< [ 52:  0](R/W) MLAB job pointer start address. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlab_jobptr_start_s cn; */
};
typedef union cavm_mlab_jobptr_start cavm_mlab_jobptr_start_t;

#define CAVM_MLAB_JOBPTR_START CAVM_MLAB_JOBPTR_START_FUNC()
static inline uint64_t CAVM_MLAB_JOBPTR_START_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLAB_JOBPTR_START_FUNC(void)
{
    return 0x860020010050ll;
}

#define typedef_CAVM_MLAB_JOBPTR_START cavm_mlab_jobptr_start_t
#define bustype_CAVM_MLAB_JOBPTR_START CSR_TYPE_NCB
#define basename_CAVM_MLAB_JOBPTR_START "MLAB_JOBPTR_START"
#define device_bar_CAVM_MLAB_JOBPTR_START 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLAB_JOBPTR_START 0
#define arguments_CAVM_MLAB_JOBPTR_START -1,-1,-1,-1

/**
 * Register (NCB) mlab_lwa_debug#
 *
 * INTERNAL: MLAB LWA TX Debug Register
 */
union cavm_mlab_lwa_debugx
{
    uint64_t u;
    struct cavm_mlab_lwa_debugx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W/H) Debug registers connected to LWA CSR interface. Data format is given in MLAB_LWA_DEBUG_S. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W/H) Debug registers connected to LWA CSR interface. Data format is given in MLAB_LWA_DEBUG_S. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlab_lwa_debugx_s cn; */
};
typedef union cavm_mlab_lwa_debugx cavm_mlab_lwa_debugx_t;

static inline uint64_t CAVM_MLAB_LWA_DEBUGX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLAB_LWA_DEBUGX(uint64_t a)
{
    if (a<=1)
        return 0x860020011340ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("MLAB_LWA_DEBUGX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MLAB_LWA_DEBUGX(a) cavm_mlab_lwa_debugx_t
#define bustype_CAVM_MLAB_LWA_DEBUGX(a) CSR_TYPE_NCB
#define basename_CAVM_MLAB_LWA_DEBUGX(a) "MLAB_LWA_DEBUGX"
#define device_bar_CAVM_MLAB_LWA_DEBUGX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLAB_LWA_DEBUGX(a) (a)
#define arguments_CAVM_MLAB_LWA_DEBUGX(a) (a),-1,-1,-1

/**
 * Register (NCB) mlab_mlr_base
 *
 * MLAB IP LLC Region Base Register
 */
union cavm_mlab_mlr_base
{
    uint64_t u;
    struct cavm_mlab_mlr_base_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_52_63        : 12;
        uint64_t base                  : 52; /**< [ 51:  0](R/W) MLAB Region Base */
#else /* Word 0 - Little Endian */
        uint64_t base                  : 52; /**< [ 51:  0](R/W) MLAB Region Base */
        uint64_t reserved_52_63        : 12;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlab_mlr_base_s cn; */
};
typedef union cavm_mlab_mlr_base cavm_mlab_mlr_base_t;

#define CAVM_MLAB_MLR_BASE CAVM_MLAB_MLR_BASE_FUNC()
static inline uint64_t CAVM_MLAB_MLR_BASE_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLAB_MLR_BASE_FUNC(void)
{
    return 0x860020010008ll;
}

#define typedef_CAVM_MLAB_MLR_BASE cavm_mlab_mlr_base_t
#define bustype_CAVM_MLAB_MLR_BASE CSR_TYPE_NCB
#define basename_CAVM_MLAB_MLR_BASE "MLAB_MLR_BASE"
#define device_bar_CAVM_MLAB_MLR_BASE 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLAB_MLR_BASE 0
#define arguments_CAVM_MLAB_MLR_BASE -1,-1,-1,-1

/**
 * Register (NCB) mlab_outbound_addr_end
 *
 * ML IP Outbound Transactions End Address Register
 */
union cavm_mlab_outbound_addr_end
{
    uint64_t u;
    struct cavm_mlab_outbound_addr_end_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_40_63        : 24;
        uint64_t end_addr              : 40; /**< [ 39:  0](R/W) The end address of the outbound region in MLIP firmware's address map. */
#else /* Word 0 - Little Endian */
        uint64_t end_addr              : 40; /**< [ 39:  0](R/W) The end address of the outbound region in MLIP firmware's address map. */
        uint64_t reserved_40_63        : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlab_outbound_addr_end_s cn; */
};
typedef union cavm_mlab_outbound_addr_end cavm_mlab_outbound_addr_end_t;

#define CAVM_MLAB_OUTBOUND_ADDR_END CAVM_MLAB_OUTBOUND_ADDR_END_FUNC()
static inline uint64_t CAVM_MLAB_OUTBOUND_ADDR_END_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLAB_OUTBOUND_ADDR_END_FUNC(void)
{
    return 0x860020010078ll;
}

#define typedef_CAVM_MLAB_OUTBOUND_ADDR_END cavm_mlab_outbound_addr_end_t
#define bustype_CAVM_MLAB_OUTBOUND_ADDR_END CSR_TYPE_NCB
#define basename_CAVM_MLAB_OUTBOUND_ADDR_END "MLAB_OUTBOUND_ADDR_END"
#define device_bar_CAVM_MLAB_OUTBOUND_ADDR_END 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLAB_OUTBOUND_ADDR_END 0
#define arguments_CAVM_MLAB_OUTBOUND_ADDR_END -1,-1,-1,-1

/**
 * Register (NCB) mlab_outbound_addr_start
 *
 * ML IP Outbound Transactions Start Address Register
 */
union cavm_mlab_outbound_addr_start
{
    uint64_t u;
    struct cavm_mlab_outbound_addr_start_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_40_63        : 24;
        uint64_t start_addr            : 40; /**< [ 39:  0](R/W) The start address of the outbound region in MLIP firmware's address map. */
#else /* Word 0 - Little Endian */
        uint64_t start_addr            : 40; /**< [ 39:  0](R/W) The start address of the outbound region in MLIP firmware's address map. */
        uint64_t reserved_40_63        : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlab_outbound_addr_start_s cn; */
};
typedef union cavm_mlab_outbound_addr_start cavm_mlab_outbound_addr_start_t;

#define CAVM_MLAB_OUTBOUND_ADDR_START CAVM_MLAB_OUTBOUND_ADDR_START_FUNC()
static inline uint64_t CAVM_MLAB_OUTBOUND_ADDR_START_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLAB_OUTBOUND_ADDR_START_FUNC(void)
{
    return 0x860020010070ll;
}

#define typedef_CAVM_MLAB_OUTBOUND_ADDR_START cavm_mlab_outbound_addr_start_t
#define bustype_CAVM_MLAB_OUTBOUND_ADDR_START CSR_TYPE_NCB
#define basename_CAVM_MLAB_OUTBOUND_ADDR_START "MLAB_OUTBOUND_ADDR_START"
#define device_bar_CAVM_MLAB_OUTBOUND_ADDR_START 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLAB_OUTBOUND_ADDR_START 0
#define arguments_CAVM_MLAB_OUTBOUND_ADDR_START -1,-1,-1,-1

/**
 * Register (NCB) mlab_scratch#
 *
 * MLAB Scratch Registers
 */
union cavm_mlab_scratchx
{
    uint64_t u;
    struct cavm_mlab_scratchx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t scratch               : 64; /**< [ 63:  0](R/W) These registers provide direct access to the wrapper's scratch memory. */
#else /* Word 0 - Little Endian */
        uint64_t scratch               : 64; /**< [ 63:  0](R/W) These registers provide direct access to the wrapper's scratch memory. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlab_scratchx_s cn; */
};
typedef union cavm_mlab_scratchx cavm_mlab_scratchx_t;

static inline uint64_t CAVM_MLAB_SCRATCHX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLAB_SCRATCHX(uint64_t a)
{
    if (a<=2047)
        return 0x860020014000ll + 8ll * ((a) & 0x7ff);
    __cavm_csr_fatal("MLAB_SCRATCHX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MLAB_SCRATCHX(a) cavm_mlab_scratchx_t
#define bustype_CAVM_MLAB_SCRATCHX(a) CSR_TYPE_NCB
#define basename_CAVM_MLAB_SCRATCHX(a) "MLAB_SCRATCHX"
#define device_bar_CAVM_MLAB_SCRATCHX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLAB_SCRATCHX(a) (a)
#define arguments_CAVM_MLAB_SCRATCHX(a) (a),-1,-1,-1

/**
 * Register (NCB) mlab_stg#_jcmd#
 *
 * MLAB Stage Job Command Register
 */
union cavm_mlab_stgx_jcmdx
{
    uint64_t u;
    struct cavm_mlab_stgx_jcmdx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W1S/H) Job command. Format specified by MLAB_JOB_CMD_S. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W1S/H) Job command. Format specified by MLAB_JOB_CMD_S. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlab_stgx_jcmdx_s cn; */
};
typedef union cavm_mlab_stgx_jcmdx cavm_mlab_stgx_jcmdx_t;

static inline uint64_t CAVM_MLAB_STGX_JCMDX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLAB_STGX_JCMDX(uint64_t a, uint64_t b)
{
    if ((a<=2) && (b<=1))
        return 0x860020011040ll + 8ll * ((a) & 0x3) + 0x80ll * ((b) & 0x1);
    __cavm_csr_fatal("MLAB_STGX_JCMDX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MLAB_STGX_JCMDX(a,b) cavm_mlab_stgx_jcmdx_t
#define bustype_CAVM_MLAB_STGX_JCMDX(a,b) CSR_TYPE_NCB
#define basename_CAVM_MLAB_STGX_JCMDX(a,b) "MLAB_STGX_JCMDX"
#define device_bar_CAVM_MLAB_STGX_JCMDX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLAB_STGX_JCMDX(a,b) (a)
#define arguments_CAVM_MLAB_STGX_JCMDX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) mlab_stg#_status
 *
 * MLAB Stage Status Register
 */
union cavm_mlab_stgx_status
{
    uint64_t u;
    struct cavm_mlab_stgx_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t elapsed_ticks         : 42; /**< [ 47:  6](R/W1S/H) Elapsed Ticks. Value of job timer. Increments every SCLK when timer is enabled. */
        uint64_t job_err               : 1;  /**< [  5:  5](R/W1S/H) Job error. Copied to PSM_CMD_RSP_S[JOB] on job completion. */
        uint64_t nfat_err              : 1;  /**< [  4:  4](R/W1S/H) Non-fatal job error. Copied to PSM_CMD_RSP_S[NFAT_ERR] on job completion. */
        uint64_t timeout               : 1;  /**< [  3:  3](R/W1S/H) Job timeout. Copied to PSM_CMD_RSP_S[TIMEOUT] if the job completes after timing out. */
        uint64_t dma_err               : 1;  /**< [  2:  2](R/W1S/H) DMA error. Copied to PSM_CMD_RSP_S[DMAERR] on job completion. */
        uint64_t addr_err              : 1;  /**< [  1:  1](R/W1S/H) Address error. Copied to PSM_CMD_RSP_S[ADDR_ERR] on job completion. */
        uint64_t valid                 : 1;  /**< [  0:  0](R/W1S/H) Job Valid. The remaining fields in this register and the contents of
                                                                 MLAB_STG()_JCMD() are only meaningful when this bit is set. */
#else /* Word 0 - Little Endian */
        uint64_t valid                 : 1;  /**< [  0:  0](R/W1S/H) Job Valid. The remaining fields in this register and the contents of
                                                                 MLAB_STG()_JCMD() are only meaningful when this bit is set. */
        uint64_t addr_err              : 1;  /**< [  1:  1](R/W1S/H) Address error. Copied to PSM_CMD_RSP_S[ADDR_ERR] on job completion. */
        uint64_t dma_err               : 1;  /**< [  2:  2](R/W1S/H) DMA error. Copied to PSM_CMD_RSP_S[DMAERR] on job completion. */
        uint64_t timeout               : 1;  /**< [  3:  3](R/W1S/H) Job timeout. Copied to PSM_CMD_RSP_S[TIMEOUT] if the job completes after timing out. */
        uint64_t nfat_err              : 1;  /**< [  4:  4](R/W1S/H) Non-fatal job error. Copied to PSM_CMD_RSP_S[NFAT_ERR] on job completion. */
        uint64_t job_err               : 1;  /**< [  5:  5](R/W1S/H) Job error. Copied to PSM_CMD_RSP_S[JOB] on job completion. */
        uint64_t elapsed_ticks         : 42; /**< [ 47:  6](R/W1S/H) Elapsed Ticks. Value of job timer. Increments every SCLK when timer is enabled. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlab_stgx_status_s cn; */
};
typedef union cavm_mlab_stgx_status cavm_mlab_stgx_status_t;

static inline uint64_t CAVM_MLAB_STGX_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLAB_STGX_STATUS(uint64_t a)
{
    if (a<=2)
        return 0x860020011020ll + 8ll * ((a) & 0x3);
    __cavm_csr_fatal("MLAB_STGX_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MLAB_STGX_STATUS(a) cavm_mlab_stgx_status_t
#define bustype_CAVM_MLAB_STGX_STATUS(a) CSR_TYPE_NCB
#define basename_CAVM_MLAB_STGX_STATUS(a) "MLAB_STGX_STATUS"
#define device_bar_CAVM_MLAB_STGX_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLAB_STGX_STATUS(a) (a)
#define arguments_CAVM_MLAB_STGX_STATUS(a) (a),-1,-1,-1

/**
 * Register (NCB) mlab_stg_control
 *
 * MLAB Stage Control Register
 */
union cavm_mlab_stg_control
{
    uint64_t u;
    struct cavm_mlab_stg_control_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t run_to_comp           : 1;  /**< [  1:  1](R/W1S/H) When a one is written to set this bit, hardware attempts to move a job from the
                                                                 fetch stage to the run stage.
                                                                 If the fetch state has a valid job and the run state is not available
                                                                 (MLAB_STG(0)_STATUS[VALID] == 1 and MLAB_STG(1)_STATUS[VALID] == 1), hardware
                                                                 waits until the run state is available and this bit remains set . If the run
                                                                 state is available, or when it becomes available (MLAB_STG(1)_STATUS[VALID] ==
                                                                 0), hardware moves the job from the fetch state to the run state and clears this
                                                                 bit.
                                                                 If the fetch state does not have a valid job (MLAB_STG(0)_STATUS[VALID] == 0), a
                                                                 write that sets this bit is ignored and hardware immediately clears this bit.
                                                                 This bit is only expected to be used by firmware. Firmware must ensure that the
                                                                 bit is clear before it writes a one to set it. */
        uint64_t fetch_to_run          : 1;  /**< [  0:  0](R/W1S/H) When a one is written to set this bit, hardware attempts to move a job from the
                                                                 fetch stage to the run stage.
                                                                 If the fetch state has a valid job and the run state is not available
                                                                 (MLAB_STG(0)_STATUS[VALID] == 1 and MLAB_STG(1)_STATUS[VALID] == 1), hardware
                                                                 waits until the run state is available and this bit remains set . If the run
                                                                 state is available, or when it becomes available (MLAB_STG(1)_STATUS[VALID] ==
                                                                 0), hardware moves the job from the fetch state to the run state and clears this
                                                                 bit.
                                                                 If the fetch state does not have a valid job (MLAB_STG(0)_STATUS[VALID] == 0), a
                                                                 write that sets this bit is ignored and hardware immediately clears this bit.
                                                                 This bit is only expected to be used by firmware. Firmware must ensure that the
                                                                 bit is clear before it writes a one to set it. */
#else /* Word 0 - Little Endian */
        uint64_t fetch_to_run          : 1;  /**< [  0:  0](R/W1S/H) When a one is written to set this bit, hardware attempts to move a job from the
                                                                 fetch stage to the run stage.
                                                                 If the fetch state has a valid job and the run state is not available
                                                                 (MLAB_STG(0)_STATUS[VALID] == 1 and MLAB_STG(1)_STATUS[VALID] == 1), hardware
                                                                 waits until the run state is available and this bit remains set . If the run
                                                                 state is available, or when it becomes available (MLAB_STG(1)_STATUS[VALID] ==
                                                                 0), hardware moves the job from the fetch state to the run state and clears this
                                                                 bit.
                                                                 If the fetch state does not have a valid job (MLAB_STG(0)_STATUS[VALID] == 0), a
                                                                 write that sets this bit is ignored and hardware immediately clears this bit.
                                                                 This bit is only expected to be used by firmware. Firmware must ensure that the
                                                                 bit is clear before it writes a one to set it. */
        uint64_t run_to_comp           : 1;  /**< [  1:  1](R/W1S/H) When a one is written to set this bit, hardware attempts to move a job from the
                                                                 fetch stage to the run stage.
                                                                 If the fetch state has a valid job and the run state is not available
                                                                 (MLAB_STG(0)_STATUS[VALID] == 1 and MLAB_STG(1)_STATUS[VALID] == 1), hardware
                                                                 waits until the run state is available and this bit remains set . If the run
                                                                 state is available, or when it becomes available (MLAB_STG(1)_STATUS[VALID] ==
                                                                 0), hardware moves the job from the fetch state to the run state and clears this
                                                                 bit.
                                                                 If the fetch state does not have a valid job (MLAB_STG(0)_STATUS[VALID] == 0), a
                                                                 write that sets this bit is ignored and hardware immediately clears this bit.
                                                                 This bit is only expected to be used by firmware. Firmware must ensure that the
                                                                 bit is clear before it writes a one to set it. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlab_stg_control_s cn; */
};
typedef union cavm_mlab_stg_control cavm_mlab_stg_control_t;

#define CAVM_MLAB_STG_CONTROL CAVM_MLAB_STG_CONTROL_FUNC()
static inline uint64_t CAVM_MLAB_STG_CONTROL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLAB_STG_CONTROL_FUNC(void)
{
    return 0x860020011100ll;
}

#define typedef_CAVM_MLAB_STG_CONTROL cavm_mlab_stg_control_t
#define bustype_CAVM_MLAB_STG_CONTROL CSR_TYPE_NCB
#define basename_CAVM_MLAB_STG_CONTROL "MLAB_STG_CONTROL"
#define device_bar_CAVM_MLAB_STG_CONTROL 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLAB_STG_CONTROL 0
#define arguments_CAVM_MLAB_STG_CONTROL -1,-1,-1,-1

/**
 * Register (NCB) mlab_timeout_msg#
 *
 * INTERNAL: MLAB Timeout Message Registers
 */
union cavm_mlab_timeout_msgx
{
    uint64_t u;
    struct cavm_mlab_timeout_msgx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W) These registers define a command/message sent to the PSM when a job timeout is
                                                                 detected. See MLAB_JOB_TIMER_CFG. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W) These registers define a command/message sent to the PSM when a job timeout is
                                                                 detected. See MLAB_JOB_TIMER_CFG. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlab_timeout_msgx_s cn; */
};
typedef union cavm_mlab_timeout_msgx cavm_mlab_timeout_msgx_t;

static inline uint64_t CAVM_MLAB_TIMEOUT_MSGX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLAB_TIMEOUT_MSGX(uint64_t a)
{
    if (a<=1)
        return 0x860020011360ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("MLAB_TIMEOUT_MSGX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MLAB_TIMEOUT_MSGX(a) cavm_mlab_timeout_msgx_t
#define bustype_CAVM_MLAB_TIMEOUT_MSGX(a) CSR_TYPE_NCB
#define basename_CAVM_MLAB_TIMEOUT_MSGX(a) "MLAB_TIMEOUT_MSGX"
#define device_bar_CAVM_MLAB_TIMEOUT_MSGX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLAB_TIMEOUT_MSGX(a) (a)
#define arguments_CAVM_MLAB_TIMEOUT_MSGX(a) (a),-1,-1,-1

#endif /* __CAVM_CSRS_MLAB_H__ */
