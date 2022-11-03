#ifndef __CAVM_CSRS_MLAB_H__
#define __CAVM_CSRS_MLAB_H__
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
#define CAVM_MLAB_BAR_E_MLABX_PF_BAR0(a) (0x860020000000ll + 0x1000000000ll * (a))
#define CAVM_MLAB_BAR_E_MLABX_PF_BAR0_SIZE 0x20000000ull

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
 * Enumeration mlab_pnb_rd_cmd_e
 *
 * MLAB Read DMA Command Enumeration
 * This enumeration describes the different command types for reads from
 * LLC/DRAM.
 */
#define CAVM_MLAB_PNB_RD_CMD_E_LDD (0)
#define CAVM_MLAB_PNB_RD_CMD_E_LDT (1)
#define CAVM_MLAB_PNB_RD_CMD_E_LDWB (2)
#define CAVM_MLAB_PNB_RD_CMD_E_RSVD0 (3)

/**
 * Enumeration mlab_pnb_wr_cmd_e
 *
 * MLAB Write DMA Command Enumeration
 * This enumeration describes the different command types for writes to
 * LLC/DRAM.
 */
#define CAVM_MLAB_PNB_WR_CMD_E_RSVD0 (3)
#define CAVM_MLAB_PNB_WR_CMD_E_STF (1)
#define CAVM_MLAB_PNB_WR_CMD_E_STP (0)
#define CAVM_MLAB_PNB_WR_CMD_E_STT (2)

/**
 * Structure mlab_job_cmd_s
 *
 * MLAB Job Command Structure
 * Defines format of job command captured in MLAB_STG()_JCMD(). Similar to
 * PSM_CMD_ADDJOB_S, which defines the format of the job command enqueued to PSM.
 */
union cavm_mlab_job_cmd_s
{
    uint64_t u[2];
    struct cavm_mlab_job_cmd_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_62_63        : 2;
        uint64_t job_type              : 6;  /**< [ 61: 56] Same as PSM_CMD_ADDJOB_S[JOBTYPE]. */
        uint64_t reserved_53_55        : 3;
        uint64_t tmem_sel              : 1;  /**< [ 52: 52] Same as PSM_CMD_ADDJOB_S[TMEM]. */
        uint64_t reserved_49_51        : 3;
        uint64_t cmd_fifo_que          : 1;  /**< [ 48: 48] Same as PSM_CMD_ADDJOB_S[MABQ]. */
        uint64_t reserved_41_47        : 7;
        uint64_t cont_job              : 1;  /**< [ 40: 40] Continued job indicator. */
        uint64_t job_tag               : 16; /**< [ 39: 24] Same as PSM_CMD_ADDJOB_S[JOBTAG]. */
        uint64_t reserved_16_23        : 8;
        uint64_t qid                   : 8;  /**< [ 15:  8] Same as PSM_CMD_ADDJOB_S[QID]. */
        uint64_t reserved_6_7          : 2;
        uint64_t opcode                : 6;  /**< [  5:  0] Same as PSM_CMD_ADDJOB_S[OPCODE]. */
#else /* Word 0 - Little Endian */
        uint64_t opcode                : 6;  /**< [  5:  0] Same as PSM_CMD_ADDJOB_S[OPCODE]. */
        uint64_t reserved_6_7          : 2;
        uint64_t qid                   : 8;  /**< [ 15:  8] Same as PSM_CMD_ADDJOB_S[QID]. */
        uint64_t reserved_16_23        : 8;
        uint64_t job_tag               : 16; /**< [ 39: 24] Same as PSM_CMD_ADDJOB_S[JOBTAG]. */
        uint64_t cont_job              : 1;  /**< [ 40: 40] Continued job indicator. */
        uint64_t reserved_41_47        : 7;
        uint64_t cmd_fifo_que          : 1;  /**< [ 48: 48] Same as PSM_CMD_ADDJOB_S[MABQ]. */
        uint64_t reserved_49_51        : 3;
        uint64_t tmem_sel              : 1;  /**< [ 52: 52] Same as PSM_CMD_ADDJOB_S[TMEM]. */
        uint64_t reserved_53_55        : 3;
        uint64_t job_type              : 6;  /**< [ 61: 56] Same as PSM_CMD_ADDJOB_S[JOBTYPE]. */
        uint64_t reserved_62_63        : 2;
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t gmid                  : 3;  /**< [127:125] Same as PSM_CMD_ADDJOB_S[GMID]. */
        uint64_t reserved_117_124      : 8;
        uint64_t jptr                  : 53; /**< [116: 64] Same as PSM_CMD_ADDJOB_S[JOBPTR]. */
#else /* Word 1 - Little Endian */
        uint64_t jptr                  : 53; /**< [116: 64] Same as PSM_CMD_ADDJOB_S[JOBPTR]. */
        uint64_t reserved_117_124      : 8;
        uint64_t gmid                  : 3;  /**< [127:125] Same as PSM_CMD_ADDJOB_S[GMID]. */
#endif /* Word 1 - End */
    } s;
    /* struct cavm_mlab_job_cmd_s_s cn; */
};

/**
 * Register (NCB) mlab#_active_pc
 *
 * MLAB Conditional Coprocessor Clock Counter Register
 */
union cavm_mlabx_active_pc
{
    uint64_t u;
    struct cavm_mlabx_active_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t active_pc             : 64; /**< [ 63:  0](R/W/H) This register increments on every coprocessor-clock cycle that the MLAB conditional clocks
                                                                 are enabled. */
#else /* Word 0 - Little Endian */
        uint64_t active_pc             : 64; /**< [ 63:  0](R/W/H) This register increments on every coprocessor-clock cycle that the MLAB conditional clocks
                                                                 are enabled. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlabx_active_pc_s cn; */
};
typedef union cavm_mlabx_active_pc cavm_mlabx_active_pc_t;

static inline uint64_t CAVM_MLABX_ACTIVE_PC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLABX_ACTIVE_PC(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a==0))
        return 0x8600200100f0ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("MLABX_ACTIVE_PC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MLABX_ACTIVE_PC(a) cavm_mlabx_active_pc_t
#define bustype_CAVM_MLABX_ACTIVE_PC(a) CSR_TYPE_NCB
#define basename_CAVM_MLABX_ACTIVE_PC(a) "MLABX_ACTIVE_PC"
#define device_bar_CAVM_MLABX_ACTIVE_PC(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLABX_ACTIVE_PC(a) (a)
#define arguments_CAVM_MLABX_ACTIVE_PC(a) (a),-1,-1,-1

/**
 * Register (NCB) mlab#_axi_bridge_ctrl#
 *
 * MLAB Wrapper AXI Bridge Control Register
 * MLAB_AXI_BRIDGE_CTRL[0] is for ACC AXI bridge and MLAB_AXI_BRIDGE_CTRL[1] is for DMA AXI bridge.
 */
union cavm_mlabx_axi_bridge_ctrlx
{
    uint64_t u;
    struct cavm_mlabx_axi_bridge_ctrlx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_41_63        : 23;
        uint64_t flush_write_data      : 1;  /**< [ 40: 40](R/W) Used with [FENCE] to flush any write data that gets through when doing MLIP reset. */
        uint64_t gaa_load_read_credits : 1;  /**< [ 39: 39](R/W) Load Write Credits (Rising edge triggered) */
        uint64_t gaa_load_write_credits : 1; /**< [ 38: 38](R/W) Load Write Credits (Rising edge triggered) */
        uint64_t gaa_read_credits      : 4;  /**< [ 37: 34](R/W) Number of Read Credits */
        uint64_t gaa_write_credits     : 4;  /**< [ 33: 30](R/W) Number of Write Credits */
        uint64_t csr_cutthrough_mode   : 1;  /**< [ 29: 29](R/W) Allows AXI CSR transactions to move ahead of GAA. */
        uint64_t rd_gear               : 3;  /**< [ 28: 26](R/W) Extra cycles for read valid to read data delay for async crossing.  Each bit will add a cycle. */
        uint64_t wr_cnt_gear           : 4;  /**< [ 25: 22](R/W) Relationship between Sclk and Bclk for passing write response counts */
        uint64_t csr_force_cmplt       : 1;  /**< [ 21: 21](R/W) Rising edge will trigger job completion without the use of barrier logic */
        uint64_t force_rresp_ok        : 1;  /**< [ 20: 20](R/W) When set, the read response will be force to OK, no error read response will be returned. */
        uint64_t force_wresp_ok        : 1;  /**< [ 19: 19](R/W) When set, the write response will be force to OK, no error write response will be returned. */
        uint64_t busy                  : 1;  /**< [ 18: 18](RO/H) When set, there still pending transactions in AXI bridge. */
        uint64_t fence                 : 1;  /**< [ 17: 17](R/W) When set, the AXI bridge stops taking new request from external master. */
        uint64_t reserved_15_16        : 2;
        uint64_t ncb_wr_blk            : 1;  /**< [ 14: 14](R/W) NCB Write block.  When set, the write request to NCB domain will be blocked if the barrier is set. */
        uint64_t job_fetch_addr_chk_disable : 1;/**< [ 13: 13](R/W) Disable the address check for Job Fetch. */
        uint64_t reserved_2_12         : 11;
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
        uint64_t reserved_2_12         : 11;
        uint64_t job_fetch_addr_chk_disable : 1;/**< [ 13: 13](R/W) Disable the address check for Job Fetch. */
        uint64_t ncb_wr_blk            : 1;  /**< [ 14: 14](R/W) NCB Write block.  When set, the write request to NCB domain will be blocked if the barrier is set. */
        uint64_t reserved_15_16        : 2;
        uint64_t fence                 : 1;  /**< [ 17: 17](R/W) When set, the AXI bridge stops taking new request from external master. */
        uint64_t busy                  : 1;  /**< [ 18: 18](RO/H) When set, there still pending transactions in AXI bridge. */
        uint64_t force_wresp_ok        : 1;  /**< [ 19: 19](R/W) When set, the write response will be force to OK, no error write response will be returned. */
        uint64_t force_rresp_ok        : 1;  /**< [ 20: 20](R/W) When set, the read response will be force to OK, no error read response will be returned. */
        uint64_t csr_force_cmplt       : 1;  /**< [ 21: 21](R/W) Rising edge will trigger job completion without the use of barrier logic */
        uint64_t wr_cnt_gear           : 4;  /**< [ 25: 22](R/W) Relationship between Sclk and Bclk for passing write response counts */
        uint64_t rd_gear               : 3;  /**< [ 28: 26](R/W) Extra cycles for read valid to read data delay for async crossing.  Each bit will add a cycle. */
        uint64_t csr_cutthrough_mode   : 1;  /**< [ 29: 29](R/W) Allows AXI CSR transactions to move ahead of GAA. */
        uint64_t gaa_write_credits     : 4;  /**< [ 33: 30](R/W) Number of Write Credits */
        uint64_t gaa_read_credits      : 4;  /**< [ 37: 34](R/W) Number of Read Credits */
        uint64_t gaa_load_write_credits : 1; /**< [ 38: 38](R/W) Load Write Credits (Rising edge triggered) */
        uint64_t gaa_load_read_credits : 1;  /**< [ 39: 39](R/W) Load Write Credits (Rising edge triggered) */
        uint64_t flush_write_data      : 1;  /**< [ 40: 40](R/W) Used with [FENCE] to flush any write data that gets through when doing MLIP reset. */
        uint64_t reserved_41_63        : 23;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlabx_axi_bridge_ctrlx_s cn; */
};
typedef union cavm_mlabx_axi_bridge_ctrlx cavm_mlabx_axi_bridge_ctrlx_t;

static inline uint64_t CAVM_MLABX_AXI_BRIDGE_CTRLX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLABX_AXI_BRIDGE_CTRLX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a==0) && (b<=1)))
        return 0x860020010020ll + 0x1000000000ll * ((a) & 0x0) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("MLABX_AXI_BRIDGE_CTRLX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MLABX_AXI_BRIDGE_CTRLX(a,b) cavm_mlabx_axi_bridge_ctrlx_t
#define bustype_CAVM_MLABX_AXI_BRIDGE_CTRLX(a,b) CSR_TYPE_NCB
#define basename_CAVM_MLABX_AXI_BRIDGE_CTRLX(a,b) "MLABX_AXI_BRIDGE_CTRLX"
#define device_bar_CAVM_MLABX_AXI_BRIDGE_CTRLX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLABX_AXI_BRIDGE_CTRLX(a,b) (a)
#define arguments_CAVM_MLABX_AXI_BRIDGE_CTRLX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) mlab#_barrier
 *
 * MLAB Barrier Register
 */
union cavm_mlabx_barrier
{
    uint64_t u;
    struct cavm_mlabx_barrier_s
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
    /* struct cavm_mlabx_barrier_s cn; */
};
typedef union cavm_mlabx_barrier cavm_mlabx_barrier_t;

static inline uint64_t CAVM_MLABX_BARRIER(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLABX_BARRIER(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a==0))
        return 0x860020011300ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("MLABX_BARRIER", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MLABX_BARRIER(a) cavm_mlabx_barrier_t
#define bustype_CAVM_MLABX_BARRIER(a) CSR_TYPE_NCB
#define basename_CAVM_MLABX_BARRIER(a) "MLABX_BARRIER"
#define device_bar_CAVM_MLABX_BARRIER(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLABX_BARRIER(a) (a)
#define arguments_CAVM_MLABX_BARRIER(a) (a),-1,-1,-1

/**
 * Register (NCB) mlab#_cfg
 *
 * MLAB Configuration Register
 */
union cavm_mlabx_cfg
{
    uint64_t u;
    struct cavm_mlabx_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t ena                   : 1;  /**< [  6:  6](R/W) Enable new jobs. When clear, MLAB will drop new job commands. MLAB sets
                                                                 PSM_CMD_RSP_S[NFAT_ERR] = 1 in the response for each job command that is
                                                                 dropped.

                                                                 When set, MLAB will accept job commands. This bit can be cleared at any
                                                                 time. If [BUSY] is set, software must wait until [BUSY]==0 before setting
                                                                 this bit. */
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
        uint64_t ena                   : 1;  /**< [  6:  6](R/W) Enable new jobs. When clear, MLAB will drop new job commands. MLAB sets
                                                                 PSM_CMD_RSP_S[NFAT_ERR] = 1 in the response for each job command that is
                                                                 dropped.

                                                                 When set, MLAB will accept job commands. This bit can be cleared at any
                                                                 time. If [BUSY] is set, software must wait until [BUSY]==0 before setting
                                                                 this bit. */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlabx_cfg_s cn; */
};
typedef union cavm_mlabx_cfg cavm_mlabx_cfg_t;

static inline uint64_t CAVM_MLABX_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLABX_CFG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a==0))
        return 0x860020010000ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("MLABX_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MLABX_CFG(a) cavm_mlabx_cfg_t
#define bustype_CAVM_MLABX_CFG(a) CSR_TYPE_NCB
#define basename_CAVM_MLABX_CFG(a) "MLABX_CFG"
#define device_bar_CAVM_MLABX_CFG(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLABX_CFG(a) (a)
#define arguments_CAVM_MLABX_CFG(a) (a),-1,-1,-1

/**
 * Register (NCB) mlab#_core_int_hi
 *
 * MLAB PF Interrupt Register
 */
union cavm_mlabx_core_int_hi
{
    uint64_t u;
    struct cavm_mlabx_core_int_hi_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t int_hi                : 1;  /**< [  0:  0](R/W1C/H) Hight priority interrupt from MLIP. Set when one or more bits in
                                                                 ML()_HIGH_PRI_HOST_MASK_W() is set and at least one of the corresponding
                                                                 bits in ML()_HIGH_PRI_HOST_MASK_W() is set, i.e.
                                                                 _ |(ML()_HIGH_PRI_INT_STATUS_W() & ML()_HIGH_PRI_HOST_MASK_W()) == 1 */
#else /* Word 0 - Little Endian */
        uint64_t int_hi                : 1;  /**< [  0:  0](R/W1C/H) Hight priority interrupt from MLIP. Set when one or more bits in
                                                                 ML()_HIGH_PRI_HOST_MASK_W() is set and at least one of the corresponding
                                                                 bits in ML()_HIGH_PRI_HOST_MASK_W() is set, i.e.
                                                                 _ |(ML()_HIGH_PRI_INT_STATUS_W() & ML()_HIGH_PRI_HOST_MASK_W()) == 1 */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlabx_core_int_hi_s cn; */
};
typedef union cavm_mlabx_core_int_hi cavm_mlabx_core_int_hi_t;

static inline uint64_t CAVM_MLABX_CORE_INT_HI(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLABX_CORE_INT_HI(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a==0))
        return 0x860020010160ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("MLABX_CORE_INT_HI", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MLABX_CORE_INT_HI(a) cavm_mlabx_core_int_hi_t
#define bustype_CAVM_MLABX_CORE_INT_HI(a) CSR_TYPE_NCB
#define basename_CAVM_MLABX_CORE_INT_HI(a) "MLABX_CORE_INT_HI"
#define device_bar_CAVM_MLABX_CORE_INT_HI(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLABX_CORE_INT_HI(a) (a)
#define arguments_CAVM_MLABX_CORE_INT_HI(a) (a),-1,-1,-1

/**
 * Register (NCB) mlab#_core_int_hi_ena_w1c
 *
 * MLAB PF Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_mlabx_core_int_hi_ena_w1c
{
    uint64_t u;
    struct cavm_mlabx_core_int_hi_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t int_hi                : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for MLAB(0)_CORE_INT_HI[INT_HI]. */
#else /* Word 0 - Little Endian */
        uint64_t int_hi                : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for MLAB(0)_CORE_INT_HI[INT_HI]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlabx_core_int_hi_ena_w1c_s cn; */
};
typedef union cavm_mlabx_core_int_hi_ena_w1c cavm_mlabx_core_int_hi_ena_w1c_t;

static inline uint64_t CAVM_MLABX_CORE_INT_HI_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLABX_CORE_INT_HI_ENA_W1C(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a==0))
        return 0x860020010170ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("MLABX_CORE_INT_HI_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MLABX_CORE_INT_HI_ENA_W1C(a) cavm_mlabx_core_int_hi_ena_w1c_t
#define bustype_CAVM_MLABX_CORE_INT_HI_ENA_W1C(a) CSR_TYPE_NCB
#define basename_CAVM_MLABX_CORE_INT_HI_ENA_W1C(a) "MLABX_CORE_INT_HI_ENA_W1C"
#define device_bar_CAVM_MLABX_CORE_INT_HI_ENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLABX_CORE_INT_HI_ENA_W1C(a) (a)
#define arguments_CAVM_MLABX_CORE_INT_HI_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (NCB) mlab#_core_int_hi_ena_w1s
 *
 * MLAB PF Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_mlabx_core_int_hi_ena_w1s
{
    uint64_t u;
    struct cavm_mlabx_core_int_hi_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t int_hi                : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for MLAB(0)_CORE_INT_HI[INT_HI]. */
#else /* Word 0 - Little Endian */
        uint64_t int_hi                : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for MLAB(0)_CORE_INT_HI[INT_HI]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlabx_core_int_hi_ena_w1s_s cn; */
};
typedef union cavm_mlabx_core_int_hi_ena_w1s cavm_mlabx_core_int_hi_ena_w1s_t;

static inline uint64_t CAVM_MLABX_CORE_INT_HI_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLABX_CORE_INT_HI_ENA_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a==0))
        return 0x860020010178ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("MLABX_CORE_INT_HI_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MLABX_CORE_INT_HI_ENA_W1S(a) cavm_mlabx_core_int_hi_ena_w1s_t
#define bustype_CAVM_MLABX_CORE_INT_HI_ENA_W1S(a) CSR_TYPE_NCB
#define basename_CAVM_MLABX_CORE_INT_HI_ENA_W1S(a) "MLABX_CORE_INT_HI_ENA_W1S"
#define device_bar_CAVM_MLABX_CORE_INT_HI_ENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLABX_CORE_INT_HI_ENA_W1S(a) (a)
#define arguments_CAVM_MLABX_CORE_INT_HI_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) mlab#_core_int_hi_w1s
 *
 * MLAB PF Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_mlabx_core_int_hi_w1s
{
    uint64_t u;
    struct cavm_mlabx_core_int_hi_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t int_hi                : 1;  /**< [  0:  0](R/W1S/H) Reads or sets MLAB(0)_CORE_INT_HI[INT_HI]. */
#else /* Word 0 - Little Endian */
        uint64_t int_hi                : 1;  /**< [  0:  0](R/W1S/H) Reads or sets MLAB(0)_CORE_INT_HI[INT_HI]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlabx_core_int_hi_w1s_s cn; */
};
typedef union cavm_mlabx_core_int_hi_w1s cavm_mlabx_core_int_hi_w1s_t;

static inline uint64_t CAVM_MLABX_CORE_INT_HI_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLABX_CORE_INT_HI_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a==0))
        return 0x860020010168ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("MLABX_CORE_INT_HI_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MLABX_CORE_INT_HI_W1S(a) cavm_mlabx_core_int_hi_w1s_t
#define bustype_CAVM_MLABX_CORE_INT_HI_W1S(a) CSR_TYPE_NCB
#define basename_CAVM_MLABX_CORE_INT_HI_W1S(a) "MLABX_CORE_INT_HI_W1S"
#define device_bar_CAVM_MLABX_CORE_INT_HI_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLABX_CORE_INT_HI_W1S(a) (a)
#define arguments_CAVM_MLABX_CORE_INT_HI_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) mlab#_core_int_lo
 *
 * MLAB Interrupt Register
 */
union cavm_mlabx_core_int_lo
{
    uint64_t u;
    struct cavm_mlabx_core_int_lo_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t int_lo                : 1;  /**< [  0:  0](R/W1C/H) Low priority interrupt from MLIP. Set when one or more bits in
                                                                 ML()_LOW_PRI_HOST_MASK_W() is set and at least one of the corresponding
                                                                 bits in ML()_LOW_PRI_HOST_MASK_W() is set, i.e.
                                                                 _ |(ML()_LOW_PRI_INT_STATUS_W() & ML()_LOW_PRI_HOST_MASK_W()) == 1 */
#else /* Word 0 - Little Endian */
        uint64_t int_lo                : 1;  /**< [  0:  0](R/W1C/H) Low priority interrupt from MLIP. Set when one or more bits in
                                                                 ML()_LOW_PRI_HOST_MASK_W() is set and at least one of the corresponding
                                                                 bits in ML()_LOW_PRI_HOST_MASK_W() is set, i.e.
                                                                 _ |(ML()_LOW_PRI_INT_STATUS_W() & ML()_LOW_PRI_HOST_MASK_W()) == 1 */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlabx_core_int_lo_s cn; */
};
typedef union cavm_mlabx_core_int_lo cavm_mlabx_core_int_lo_t;

static inline uint64_t CAVM_MLABX_CORE_INT_LO(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLABX_CORE_INT_LO(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a==0))
        return 0x860020010140ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("MLABX_CORE_INT_LO", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MLABX_CORE_INT_LO(a) cavm_mlabx_core_int_lo_t
#define bustype_CAVM_MLABX_CORE_INT_LO(a) CSR_TYPE_NCB
#define basename_CAVM_MLABX_CORE_INT_LO(a) "MLABX_CORE_INT_LO"
#define device_bar_CAVM_MLABX_CORE_INT_LO(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLABX_CORE_INT_LO(a) (a)
#define arguments_CAVM_MLABX_CORE_INT_LO(a) (a),-1,-1,-1

/**
 * Register (NCB) mlab#_core_int_lo_ena_w1c
 *
 * MLAB PF Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_mlabx_core_int_lo_ena_w1c
{
    uint64_t u;
    struct cavm_mlabx_core_int_lo_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t int_lo                : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for MLAB(0)_CORE_INT_LO[INT_LO]. */
#else /* Word 0 - Little Endian */
        uint64_t int_lo                : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for MLAB(0)_CORE_INT_LO[INT_LO]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlabx_core_int_lo_ena_w1c_s cn; */
};
typedef union cavm_mlabx_core_int_lo_ena_w1c cavm_mlabx_core_int_lo_ena_w1c_t;

static inline uint64_t CAVM_MLABX_CORE_INT_LO_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLABX_CORE_INT_LO_ENA_W1C(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a==0))
        return 0x860020010150ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("MLABX_CORE_INT_LO_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MLABX_CORE_INT_LO_ENA_W1C(a) cavm_mlabx_core_int_lo_ena_w1c_t
#define bustype_CAVM_MLABX_CORE_INT_LO_ENA_W1C(a) CSR_TYPE_NCB
#define basename_CAVM_MLABX_CORE_INT_LO_ENA_W1C(a) "MLABX_CORE_INT_LO_ENA_W1C"
#define device_bar_CAVM_MLABX_CORE_INT_LO_ENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLABX_CORE_INT_LO_ENA_W1C(a) (a)
#define arguments_CAVM_MLABX_CORE_INT_LO_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (NCB) mlab#_core_int_lo_ena_w1s
 *
 * MLAB PF Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_mlabx_core_int_lo_ena_w1s
{
    uint64_t u;
    struct cavm_mlabx_core_int_lo_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t int_lo                : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for MLAB(0)_CORE_INT_LO[INT_LO]. */
#else /* Word 0 - Little Endian */
        uint64_t int_lo                : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for MLAB(0)_CORE_INT_LO[INT_LO]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlabx_core_int_lo_ena_w1s_s cn; */
};
typedef union cavm_mlabx_core_int_lo_ena_w1s cavm_mlabx_core_int_lo_ena_w1s_t;

static inline uint64_t CAVM_MLABX_CORE_INT_LO_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLABX_CORE_INT_LO_ENA_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a==0))
        return 0x860020010158ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("MLABX_CORE_INT_LO_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MLABX_CORE_INT_LO_ENA_W1S(a) cavm_mlabx_core_int_lo_ena_w1s_t
#define bustype_CAVM_MLABX_CORE_INT_LO_ENA_W1S(a) CSR_TYPE_NCB
#define basename_CAVM_MLABX_CORE_INT_LO_ENA_W1S(a) "MLABX_CORE_INT_LO_ENA_W1S"
#define device_bar_CAVM_MLABX_CORE_INT_LO_ENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLABX_CORE_INT_LO_ENA_W1S(a) (a)
#define arguments_CAVM_MLABX_CORE_INT_LO_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) mlab#_core_int_lo_w1s
 *
 * MLAB PF Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_mlabx_core_int_lo_w1s
{
    uint64_t u;
    struct cavm_mlabx_core_int_lo_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t int_lo                : 1;  /**< [  0:  0](R/W1S/H) Reads or sets MLAB(0)_CORE_INT_LO[INT_LO]. */
#else /* Word 0 - Little Endian */
        uint64_t int_lo                : 1;  /**< [  0:  0](R/W1S/H) Reads or sets MLAB(0)_CORE_INT_LO[INT_LO]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlabx_core_int_lo_w1s_s cn; */
};
typedef union cavm_mlabx_core_int_lo_w1s cavm_mlabx_core_int_lo_w1s_t;

static inline uint64_t CAVM_MLABX_CORE_INT_LO_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLABX_CORE_INT_LO_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a==0))
        return 0x860020010148ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("MLABX_CORE_INT_LO_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MLABX_CORE_INT_LO_W1S(a) cavm_mlabx_core_int_lo_w1s_t
#define bustype_CAVM_MLABX_CORE_INT_LO_W1S(a) CSR_TYPE_NCB
#define basename_CAVM_MLABX_CORE_INT_LO_W1S(a) "MLABX_CORE_INT_LO_W1S"
#define device_bar_CAVM_MLABX_CORE_INT_LO_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLABX_CORE_INT_LO_W1S(a) (a)
#define arguments_CAVM_MLABX_CORE_INT_LO_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) mlab#_err_ena
 *
 * MLAB Wrapper Error Enable Register
 */
union cavm_mlabx_err_ena
{
    uint64_t u;
    struct cavm_mlabx_err_ena_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t gaa_fatal_err         : 1;  /**< [ 23: 23](R/W) GAA Fatal error enable. */
        uint64_t gaa_nonfatal_err      : 1;  /**< [ 22: 22](R/W) GAA Nonfatal error enable. */
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
        uint64_t gaa_nonfatal_err      : 1;  /**< [ 22: 22](R/W) GAA Nonfatal error enable. */
        uint64_t gaa_fatal_err         : 1;  /**< [ 23: 23](R/W) GAA Fatal error enable. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlabx_err_ena_s cn; */
};
typedef union cavm_mlabx_err_ena cavm_mlabx_err_ena_t;

static inline uint64_t CAVM_MLABX_ERR_ENA(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLABX_ERR_ENA(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a==0))
        return 0x860020010040ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("MLABX_ERR_ENA", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MLABX_ERR_ENA(a) cavm_mlabx_err_ena_t
#define bustype_CAVM_MLABX_ERR_ENA(a) CSR_TYPE_NCB
#define basename_CAVM_MLABX_ERR_ENA(a) "MLABX_ERR_ENA"
#define device_bar_CAVM_MLABX_ERR_ENA(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLABX_ERR_ENA(a) (a)
#define arguments_CAVM_MLABX_ERR_ENA(a) (a),-1,-1,-1

/**
 * Register (NCB) mlab#_err_status
 *
 * MLAB Wrapper Error Status Register
 */
union cavm_mlabx_err_status
{
    uint64_t u;
    struct cavm_mlabx_err_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t gaa_fatal_err         : 1;  /**< [ 23: 23](R/W1C/H) GAA Fatal error. */
        uint64_t gaa_nonfatal_err      : 1;  /**< [ 22: 22](R/W1C/H) GAA Nonfatal error. */
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
        uint64_t jceq_ovfl             : 1;  /**< [  3:  3](R/W1C/H) Reserved. */
        uint64_t jcmdq_ovfl            : 1;  /**< [  2:  2](R/W1C/H) Reserved. */
        uint64_t descriptor_err        : 1;  /**< [  1:  1](R/W1C/H) Reserved. */
        uint64_t jobptr_err            : 1;  /**< [  0:  0](R/W1C/H) Reserved. */
#else /* Word 0 - Little Endian */
        uint64_t jobptr_err            : 1;  /**< [  0:  0](R/W1C/H) Reserved. */
        uint64_t descriptor_err        : 1;  /**< [  1:  1](R/W1C/H) Reserved. */
        uint64_t jcmdq_ovfl            : 1;  /**< [  2:  2](R/W1C/H) Reserved. */
        uint64_t jceq_ovfl             : 1;  /**< [  3:  3](R/W1C/H) Reserved. */
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
        uint64_t gaa_nonfatal_err      : 1;  /**< [ 22: 22](R/W1C/H) GAA Nonfatal error. */
        uint64_t gaa_fatal_err         : 1;  /**< [ 23: 23](R/W1C/H) GAA Fatal error. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlabx_err_status_s cn; */
};
typedef union cavm_mlabx_err_status cavm_mlabx_err_status_t;

static inline uint64_t CAVM_MLABX_ERR_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLABX_ERR_STATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a==0))
        return 0x860020010038ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("MLABX_ERR_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MLABX_ERR_STATUS(a) cavm_mlabx_err_status_t
#define bustype_CAVM_MLABX_ERR_STATUS(a) CSR_TYPE_NCB
#define basename_CAVM_MLABX_ERR_STATUS(a) "MLABX_ERR_STATUS"
#define device_bar_CAVM_MLABX_ERR_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLABX_ERR_STATUS(a) (a)
#define arguments_CAVM_MLABX_ERR_STATUS(a) (a),-1,-1,-1

/**
 * Register (NCB) mlab#_ghb_control
 *
 * MLAB GigaHAB Control Register
 */
union cavm_mlabx_ghb_control
{
    uint64_t u;
    struct cavm_mlabx_ghb_control_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t ghb_rd_weight         : 6;  /**< [ 15: 10](R/W) The weighted round-robin arbitration weight used in the GHAB when
                                                                 arbitrating for read requests from this MHAB. A value of zero will
                                                                 only allow requests when there are no competing requests from other
                                                                 MHABs in the same GHAB, or when all competing MHABs have an effective
                                                                 weight of zero. A higher weight guarantees a greater share of the GHAB
                                                                 bandwidth. */
        uint64_t ghb_wr_weight         : 6;  /**< [  9:  4](R/W) The weighted round-robin arbitration weight used in the GHAB when
                                                                 arbitrating for write requests from this MHAB. A value of zero will
                                                                 only allow requests when there are no competing requests from other
                                                                 MHABs in the same GHAB, or when all competing MHABs have an effective
                                                                 weight of zero. A higher weight guarantees a greater share of the GHAB
                                                                 bandwidth. */
        uint64_t override_jd_gmid      : 1;  /**< [  3:  3](R/W) 0 = PSM_CMD_ADDJOB_S[GMID] is used for job descriptor fetch.
                                                                 1 = [DEFAULT_GMID] is used for job descriptor fetch. */
        uint64_t default_gmid          : 3;  /**< [  2:  0](R/W) GMID used for LLC/DRAM access by MLIP (ACC or DMA).
                                                                 When [OVERRIDE_JD_GMID] is set, this is also the GMID used by the wrapper
                                                                 for job descriptor. */
#else /* Word 0 - Little Endian */
        uint64_t default_gmid          : 3;  /**< [  2:  0](R/W) GMID used for LLC/DRAM access by MLIP (ACC or DMA).
                                                                 When [OVERRIDE_JD_GMID] is set, this is also the GMID used by the wrapper
                                                                 for job descriptor. */
        uint64_t override_jd_gmid      : 1;  /**< [  3:  3](R/W) 0 = PSM_CMD_ADDJOB_S[GMID] is used for job descriptor fetch.
                                                                 1 = [DEFAULT_GMID] is used for job descriptor fetch. */
        uint64_t ghb_wr_weight         : 6;  /**< [  9:  4](R/W) The weighted round-robin arbitration weight used in the GHAB when
                                                                 arbitrating for write requests from this MHAB. A value of zero will
                                                                 only allow requests when there are no competing requests from other
                                                                 MHABs in the same GHAB, or when all competing MHABs have an effective
                                                                 weight of zero. A higher weight guarantees a greater share of the GHAB
                                                                 bandwidth. */
        uint64_t ghb_rd_weight         : 6;  /**< [ 15: 10](R/W) The weighted round-robin arbitration weight used in the GHAB when
                                                                 arbitrating for read requests from this MHAB. A value of zero will
                                                                 only allow requests when there are no competing requests from other
                                                                 MHABs in the same GHAB, or when all competing MHABs have an effective
                                                                 weight of zero. A higher weight guarantees a greater share of the GHAB
                                                                 bandwidth. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlabx_ghb_control_s cn; */
};
typedef union cavm_mlabx_ghb_control cavm_mlabx_ghb_control_t;

static inline uint64_t CAVM_MLABX_GHB_CONTROL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLABX_GHB_CONTROL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a==0))
        return 0x860020010068ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("MLABX_GHB_CONTROL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MLABX_GHB_CONTROL(a) cavm_mlabx_ghb_control_t
#define bustype_CAVM_MLABX_GHB_CONTROL(a) CSR_TYPE_NCB
#define basename_CAVM_MLABX_GHB_CONTROL(a) "MLABX_GHB_CONTROL"
#define device_bar_CAVM_MLABX_GHB_CONTROL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLABX_GHB_CONTROL(a) (a)
#define arguments_CAVM_MLABX_GHB_CONTROL(a) (a),-1,-1,-1

/**
 * Register (NCB) mlab#_int_hi_msg#
 *
 * MLAB High Priority Interrupt Message Registers
 */
union cavm_mlabx_int_hi_msgx
{
    uint64_t u;
    struct cavm_mlabx_int_hi_msgx_s
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
    /* struct cavm_mlabx_int_hi_msgx_s cn; */
};
typedef union cavm_mlabx_int_hi_msgx cavm_mlabx_int_hi_msgx_t;

static inline uint64_t CAVM_MLABX_INT_HI_MSGX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLABX_INT_HI_MSGX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a==0) && (b<=1)))
        return 0x860020011370ll + 0x1000000000ll * ((a) & 0x0) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("MLABX_INT_HI_MSGX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MLABX_INT_HI_MSGX(a,b) cavm_mlabx_int_hi_msgx_t
#define bustype_CAVM_MLABX_INT_HI_MSGX(a,b) CSR_TYPE_NCB
#define basename_CAVM_MLABX_INT_HI_MSGX(a,b) "MLABX_INT_HI_MSGX"
#define device_bar_CAVM_MLABX_INT_HI_MSGX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLABX_INT_HI_MSGX(a,b) (a)
#define arguments_CAVM_MLABX_INT_HI_MSGX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) mlab#_int_lo_msg#
 *
 * MLAB Low Priority Interrupt Message Registers
 */
union cavm_mlabx_int_lo_msgx
{
    uint64_t u;
    struct cavm_mlabx_int_lo_msgx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W) Same as MLAB_INT_HI_MSG(), but for low priority interrupt from MLIP. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W) Same as MLAB_INT_HI_MSG(), but for low priority interrupt from MLIP. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlabx_int_lo_msgx_s cn; */
};
typedef union cavm_mlabx_int_lo_msgx cavm_mlabx_int_lo_msgx_t;

static inline uint64_t CAVM_MLABX_INT_LO_MSGX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLABX_INT_LO_MSGX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a==0) && (b<=1)))
        return 0x860020011380ll + 0x1000000000ll * ((a) & 0x0) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("MLABX_INT_LO_MSGX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MLABX_INT_LO_MSGX(a,b) cavm_mlabx_int_lo_msgx_t
#define bustype_CAVM_MLABX_INT_LO_MSGX(a,b) CSR_TYPE_NCB
#define basename_CAVM_MLABX_INT_LO_MSGX(a,b) "MLABX_INT_LO_MSGX"
#define device_bar_CAVM_MLABX_INT_LO_MSGX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLABX_INT_LO_MSGX(a,b) (a)
#define arguments_CAVM_MLABX_INT_LO_MSGX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) mlab#_jceq_in#
 *
 * MLAB Job Completion Enqueue Register
 */
union cavm_mlabx_jceq_inx
{
    uint64_t u;
    struct cavm_mlabx_jceq_inx_s
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
    /* struct cavm_mlabx_jceq_inx_s cn; */
};
typedef union cavm_mlabx_jceq_inx cavm_mlabx_jceq_inx_t;

static inline uint64_t CAVM_MLABX_JCEQ_INX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLABX_JCEQ_INX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a==0) && (b<=1)))
        return 0x860020011320ll + 0x1000000000ll * ((a) & 0x0) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("MLABX_JCEQ_INX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MLABX_JCEQ_INX(a,b) cavm_mlabx_jceq_inx_t
#define bustype_CAVM_MLABX_JCEQ_INX(a,b) CSR_TYPE_NCB
#define basename_CAVM_MLABX_JCEQ_INX(a,b) "MLABX_JCEQ_INX"
#define device_bar_CAVM_MLABX_JCEQ_INX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLABX_JCEQ_INX(a,b) (a)
#define arguments_CAVM_MLABX_JCEQ_INX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) mlab#_jceq_status
 *
 * MLAB Job Completion Queue Status Register
 */
union cavm_mlabx_jceq_status
{
    uint64_t u;
    struct cavm_mlabx_jceq_status_s
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
    /* struct cavm_mlabx_jceq_status_s cn; */
};
typedef union cavm_mlabx_jceq_status cavm_mlabx_jceq_status_t;

static inline uint64_t CAVM_MLABX_JCEQ_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLABX_JCEQ_STATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a==0))
        return 0x860020011330ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("MLABX_JCEQ_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MLABX_JCEQ_STATUS(a) cavm_mlabx_jceq_status_t
#define bustype_CAVM_MLABX_JCEQ_STATUS(a) CSR_TYPE_NCB
#define basename_CAVM_MLABX_JCEQ_STATUS(a) "MLABX_JCEQ_STATUS"
#define device_bar_CAVM_MLABX_JCEQ_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLABX_JCEQ_STATUS(a) (a)
#define arguments_CAVM_MLABX_JCEQ_STATUS(a) (a),-1,-1,-1

/**
 * Register (NCB) mlab#_jd#
 *
 * MLAB Job Descriptor Register
 */
union cavm_mlabx_jdx
{
    uint64_t u;
    struct cavm_mlabx_jdx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W1S/H) Job descriptor word */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W1S/H) Job descriptor word */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlabx_jdx_s cn; */
};
typedef union cavm_mlabx_jdx cavm_mlabx_jdx_t;

static inline uint64_t CAVM_MLABX_JDX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLABX_JDX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a==0) && (b<=15)))
        return 0x860020011200ll + 0x1000000000ll * ((a) & 0x0) + 8ll * ((b) & 0xf);
    __cavm_csr_fatal("MLABX_JDX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MLABX_JDX(a,b) cavm_mlabx_jdx_t
#define bustype_CAVM_MLABX_JDX(a,b) CSR_TYPE_NCB
#define basename_CAVM_MLABX_JDX(a,b) "MLABX_JDX"
#define device_bar_CAVM_MLABX_JDX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLABX_JDX(a,b) (a)
#define arguments_CAVM_MLABX_JDX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) mlab#_job_mgr_ctrl
 *
 * MLAB Job Manager Control Register
 */
union cavm_mlabx_job_mgr_ctrl
{
    uint64_t u;
    struct cavm_mlabx_job_mgr_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_22_63        : 42;
        uint64_t stall_on_idle         : 1;  /**< [ 21: 21](R/W) When set, the ACC/DMA interface will be stalled if the job manager is not BUSY.
                                                                 No polling request from ACC will be accepted. */
        uint64_t busy                  : 1;  /**< [ 20: 20](RO/H) When set, the job manager has at least one unfinished job. */
        uint64_t reserved_0_19         : 20;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_19         : 20;
        uint64_t busy                  : 1;  /**< [ 20: 20](RO/H) When set, the job manager has at least one unfinished job. */
        uint64_t stall_on_idle         : 1;  /**< [ 21: 21](R/W) When set, the ACC/DMA interface will be stalled if the job manager is not BUSY.
                                                                 No polling request from ACC will be accepted. */
        uint64_t reserved_22_63        : 42;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlabx_job_mgr_ctrl_s cn; */
};
typedef union cavm_mlabx_job_mgr_ctrl cavm_mlabx_job_mgr_ctrl_t;

static inline uint64_t CAVM_MLABX_JOB_MGR_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLABX_JOB_MGR_CTRL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a==0))
        return 0x860020010060ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("MLABX_JOB_MGR_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MLABX_JOB_MGR_CTRL(a) cavm_mlabx_job_mgr_ctrl_t
#define bustype_CAVM_MLABX_JOB_MGR_CTRL(a) CSR_TYPE_NCB
#define basename_CAVM_MLABX_JOB_MGR_CTRL(a) "MLABX_JOB_MGR_CTRL"
#define device_bar_CAVM_MLABX_JOB_MGR_CTRL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLABX_JOB_MGR_CTRL(a) (a)
#define arguments_CAVM_MLABX_JOB_MGR_CTRL(a) (a),-1,-1,-1

/**
 * Register (NCB) mlab#_job_timer_cfg
 *
 * MLAB Job Timer Configuration Register
 */
union cavm_mlabx_job_timer_cfg
{
    uint64_t u;
    struct cavm_mlabx_job_timer_cfg_s
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
    /* struct cavm_mlabx_job_timer_cfg_s cn; */
};
typedef union cavm_mlabx_job_timer_cfg cavm_mlabx_job_timer_cfg_t;

static inline uint64_t CAVM_MLABX_JOB_TIMER_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLABX_JOB_TIMER_CFG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a==0))
        return 0x860020011350ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("MLABX_JOB_TIMER_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MLABX_JOB_TIMER_CFG(a) cavm_mlabx_job_timer_cfg_t
#define bustype_CAVM_MLABX_JOB_TIMER_CFG(a) CSR_TYPE_NCB
#define basename_CAVM_MLABX_JOB_TIMER_CFG(a) "MLABX_JOB_TIMER_CFG"
#define device_bar_CAVM_MLABX_JOB_TIMER_CFG(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLABX_JOB_TIMER_CFG(a) (a)
#define arguments_CAVM_MLABX_JOB_TIMER_CFG(a) (a),-1,-1,-1

/**
 * Register (NCB) mlab#_jobptr_end
 *
 * MLAB Job Pointer End Address Register
 */
union cavm_mlabx_jobptr_end
{
    uint64_t u;
    struct cavm_mlabx_jobptr_end_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t end_addr              : 53; /**< [ 52:  0](R/W) MLAB job pointer end address. */
#else /* Word 0 - Little Endian */
        uint64_t end_addr              : 53; /**< [ 52:  0](R/W) MLAB job pointer end address. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlabx_jobptr_end_s cn; */
};
typedef union cavm_mlabx_jobptr_end cavm_mlabx_jobptr_end_t;

static inline uint64_t CAVM_MLABX_JOBPTR_END(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLABX_JOBPTR_END(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a==0))
        return 0x860020010058ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("MLABX_JOBPTR_END", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MLABX_JOBPTR_END(a) cavm_mlabx_jobptr_end_t
#define bustype_CAVM_MLABX_JOBPTR_END(a) CSR_TYPE_NCB
#define basename_CAVM_MLABX_JOBPTR_END(a) "MLABX_JOBPTR_END"
#define device_bar_CAVM_MLABX_JOBPTR_END(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLABX_JOBPTR_END(a) (a)
#define arguments_CAVM_MLABX_JOBPTR_END(a) (a),-1,-1,-1

/**
 * Register (NCB) mlab#_jobptr_start
 *
 * MLAB Job Pointer Start Address Register
 */
union cavm_mlabx_jobptr_start
{
    uint64_t u;
    struct cavm_mlabx_jobptr_start_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t start_addr            : 53; /**< [ 52:  0](R/W) MLAB job pointer start address. */
#else /* Word 0 - Little Endian */
        uint64_t start_addr            : 53; /**< [ 52:  0](R/W) MLAB job pointer start address. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlabx_jobptr_start_s cn; */
};
typedef union cavm_mlabx_jobptr_start cavm_mlabx_jobptr_start_t;

static inline uint64_t CAVM_MLABX_JOBPTR_START(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLABX_JOBPTR_START(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a==0))
        return 0x860020010050ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("MLABX_JOBPTR_START", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MLABX_JOBPTR_START(a) cavm_mlabx_jobptr_start_t
#define bustype_CAVM_MLABX_JOBPTR_START(a) CSR_TYPE_NCB
#define basename_CAVM_MLABX_JOBPTR_START(a) "MLABX_JOBPTR_START"
#define device_bar_CAVM_MLABX_JOBPTR_START(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLABX_JOBPTR_START(a) (a)
#define arguments_CAVM_MLABX_JOBPTR_START(a) (a),-1,-1,-1

/**
 * Register (NCB) mlab#_mlr_base
 *
 * MLAB IP LLC Region Base Register
 */
union cavm_mlabx_mlr_base
{
    uint64_t u;
    struct cavm_mlabx_mlr_base_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_52_63        : 12;
        uint64_t base                  : 52; /**< [ 51:  0](R/W) Base IOVA of the ML region in LLC/DRAM. */
#else /* Word 0 - Little Endian */
        uint64_t base                  : 52; /**< [ 51:  0](R/W) Base IOVA of the ML region in LLC/DRAM. */
        uint64_t reserved_52_63        : 12;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlabx_mlr_base_s cn; */
};
typedef union cavm_mlabx_mlr_base cavm_mlabx_mlr_base_t;

static inline uint64_t CAVM_MLABX_MLR_BASE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLABX_MLR_BASE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a==0))
        return 0x860020010008ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("MLABX_MLR_BASE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MLABX_MLR_BASE(a) cavm_mlabx_mlr_base_t
#define bustype_CAVM_MLABX_MLR_BASE(a) CSR_TYPE_NCB
#define basename_CAVM_MLABX_MLR_BASE(a) "MLABX_MLR_BASE"
#define device_bar_CAVM_MLABX_MLR_BASE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLABX_MLR_BASE(a) (a)
#define arguments_CAVM_MLABX_MLR_BASE(a) (a),-1,-1,-1

/**
 * Register (NCB) mlab#_pnb_cmd_type
 *
 * MLAB PNB Command Type Register
 * These registers specify static configurations to LLC/DRAM accesses.
 */
union cavm_mlabx_pnb_cmd_type
{
    uint64_t u;
    struct cavm_mlabx_pnb_cmd_type_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t dma_wr_cmd_type       : 2;  /**< [  5:  4](R/W) Specifies the command type used when writing full cache line DMA data to main memory.
                                                                 Command types are enumerated in MLAB_PNB_WR_CMD_E.  Partial line is always
                                                                 written with MLAB_PNB_WR_CMD_E::STP command type. */
        uint64_t dma_rd_cmd_type       : 2;  /**< [  3:  2](R/W) Specifies the command type used when reading DMA data from main memory.
                                                                 Command types are enumerated in MLAB_PNB_RD_CMD_E.  Note that if
                                                                 MLAB_PNB_RD_CMD_E::LDWB is specified, then any requests for less than
                                                                 128 bytes will be automatically converted to type LDT to avoid
                                                                 accidental loss of data. */
        uint64_t jd_fetch_cmd_type     : 2;  /**< [  1:  0](R/W) Specifies the command type used when reading a job descriptor
                                                                 (including subdescriptor sections) from main memory. Command types
                                                                 are enumerated in MLAB_PNB_RD_CMD_E.  Note that if
                                                                 MLAB_PNB_RD_CMD_E::LDWB is specified, then any requests for less than
                                                                 128 bytes will be automatically converted to type LDT to avoid
                                                                 accidental loss of data. */
#else /* Word 0 - Little Endian */
        uint64_t jd_fetch_cmd_type     : 2;  /**< [  1:  0](R/W) Specifies the command type used when reading a job descriptor
                                                                 (including subdescriptor sections) from main memory. Command types
                                                                 are enumerated in MLAB_PNB_RD_CMD_E.  Note that if
                                                                 MLAB_PNB_RD_CMD_E::LDWB is specified, then any requests for less than
                                                                 128 bytes will be automatically converted to type LDT to avoid
                                                                 accidental loss of data. */
        uint64_t dma_rd_cmd_type       : 2;  /**< [  3:  2](R/W) Specifies the command type used when reading DMA data from main memory.
                                                                 Command types are enumerated in MLAB_PNB_RD_CMD_E.  Note that if
                                                                 MLAB_PNB_RD_CMD_E::LDWB is specified, then any requests for less than
                                                                 128 bytes will be automatically converted to type LDT to avoid
                                                                 accidental loss of data. */
        uint64_t dma_wr_cmd_type       : 2;  /**< [  5:  4](R/W) Specifies the command type used when writing full cache line DMA data to main memory.
                                                                 Command types are enumerated in MLAB_PNB_WR_CMD_E.  Partial line is always
                                                                 written with MLAB_PNB_WR_CMD_E::STP command type. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlabx_pnb_cmd_type_s cn; */
};
typedef union cavm_mlabx_pnb_cmd_type cavm_mlabx_pnb_cmd_type_t;

static inline uint64_t CAVM_MLABX_PNB_CMD_TYPE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLABX_PNB_CMD_TYPE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a==0))
        return 0x8600200113a0ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("MLABX_PNB_CMD_TYPE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MLABX_PNB_CMD_TYPE(a) cavm_mlabx_pnb_cmd_type_t
#define bustype_CAVM_MLABX_PNB_CMD_TYPE(a) CSR_TYPE_NCB
#define basename_CAVM_MLABX_PNB_CMD_TYPE(a) "MLABX_PNB_CMD_TYPE"
#define device_bar_CAVM_MLABX_PNB_CMD_TYPE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLABX_PNB_CMD_TYPE(a) (a)
#define arguments_CAVM_MLABX_PNB_CMD_TYPE(a) (a),-1,-1,-1

/**
 * Register (NCB) mlab#_scratch#
 *
 * MLAB Scratch Registers
 */
union cavm_mlabx_scratchx
{
    uint64_t u;
    struct cavm_mlabx_scratchx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t scratch               : 64; /**< [ 63:  0](R/W) These registers provide direct access to the wrapper's scratch memory. */
#else /* Word 0 - Little Endian */
        uint64_t scratch               : 64; /**< [ 63:  0](R/W) These registers provide direct access to the wrapper's scratch memory. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlabx_scratchx_s cn; */
};
typedef union cavm_mlabx_scratchx cavm_mlabx_scratchx_t;

static inline uint64_t CAVM_MLABX_SCRATCHX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLABX_SCRATCHX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a==0) && (b<=2047)))
        return 0x860020014000ll + 0x1000000000ll * ((a) & 0x0) + 8ll * ((b) & 0x7ff);
    __cavm_csr_fatal("MLABX_SCRATCHX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MLABX_SCRATCHX(a,b) cavm_mlabx_scratchx_t
#define bustype_CAVM_MLABX_SCRATCHX(a,b) CSR_TYPE_NCB
#define basename_CAVM_MLABX_SCRATCHX(a,b) "MLABX_SCRATCHX"
#define device_bar_CAVM_MLABX_SCRATCHX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLABX_SCRATCHX(a,b) (a)
#define arguments_CAVM_MLABX_SCRATCHX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) mlab#_stg#_jcmd#
 *
 * MLAB Stage Job Command Register
 */
union cavm_mlabx_stgx_jcmdx
{
    uint64_t u;
    struct cavm_mlabx_stgx_jcmdx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W1S/H) Job command. Format specified by MLAB_JOB_CMD_S. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W1S/H) Job command. Format specified by MLAB_JOB_CMD_S. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlabx_stgx_jcmdx_s cn; */
};
typedef union cavm_mlabx_stgx_jcmdx cavm_mlabx_stgx_jcmdx_t;

static inline uint64_t CAVM_MLABX_STGX_JCMDX(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLABX_STGX_JCMDX(uint64_t a, uint64_t b, uint64_t c)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a==0) && (b<=2) && (c<=1)))
        return 0x860020011040ll + 0x1000000000ll * ((a) & 0x0) + 8ll * ((b) & 0x3) + 0x80ll * ((c) & 0x1);
    __cavm_csr_fatal("MLABX_STGX_JCMDX", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_MLABX_STGX_JCMDX(a,b,c) cavm_mlabx_stgx_jcmdx_t
#define bustype_CAVM_MLABX_STGX_JCMDX(a,b,c) CSR_TYPE_NCB
#define basename_CAVM_MLABX_STGX_JCMDX(a,b,c) "MLABX_STGX_JCMDX"
#define device_bar_CAVM_MLABX_STGX_JCMDX(a,b,c) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLABX_STGX_JCMDX(a,b,c) (a)
#define arguments_CAVM_MLABX_STGX_JCMDX(a,b,c) (a),(b),(c),-1

/**
 * Register (NCB) mlab#_stg#_status
 *
 * MLAB Stage Status Register
 */
union cavm_mlabx_stgx_status
{
    uint64_t u;
    struct cavm_mlabx_stgx_status_s
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
    /* struct cavm_mlabx_stgx_status_s cn; */
};
typedef union cavm_mlabx_stgx_status cavm_mlabx_stgx_status_t;

static inline uint64_t CAVM_MLABX_STGX_STATUS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLABX_STGX_STATUS(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a==0) && (b<=2)))
        return 0x860020011020ll + 0x1000000000ll * ((a) & 0x0) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("MLABX_STGX_STATUS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MLABX_STGX_STATUS(a,b) cavm_mlabx_stgx_status_t
#define bustype_CAVM_MLABX_STGX_STATUS(a,b) CSR_TYPE_NCB
#define basename_CAVM_MLABX_STGX_STATUS(a,b) "MLABX_STGX_STATUS"
#define device_bar_CAVM_MLABX_STGX_STATUS(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLABX_STGX_STATUS(a,b) (a)
#define arguments_CAVM_MLABX_STGX_STATUS(a,b) (a),(b),-1,-1

/**
 * Register (NCB) mlab#_stg_control
 *
 * MLAB Stage Control Register
 * Software writes to this register to move a job to the next execution stage.
 *
 * A one must not be written to both [FETCH_TO_RUN] and [RUN_TO_COMP] in the same
 * write to this register. Two consecutive writes can be done to set both bits.
 */
union cavm_mlabx_stg_control
{
    uint64_t u;
    struct cavm_mlabx_stg_control_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t run_to_comp           : 1;  /**< [  1:  1](R/W1S/H) When a one is written to this bit, hardware attempts to move a job from the
                                                                 run stage to the completion stage.
                                                                 If the run stage has a valid job and the completion stage is not available
                                                                 (MLAB_STG(1)_STATUS[VALID] == 1 and MLAB_STG(2)_STATUS[VALID] == 1), hardware
                                                                 waits until the completion stage is available. If the completion stage is
                                                                 available or when it becomes available (MLAB_STG(2)_STATUS[VALID] == 0), hardware
                                                                 moves the job from the run stage to the completion stage and clears this bit.
                                                                 MLIP must ensure that [RUN_TO_COMP] == 0 when it writes a one to set the bit.
                                                                 This will be the case if MLIP only issues transactions for a job when it is in
                                                                 the run stage, as specified by [FETCH_TO_RUN].
                                                                 If the run stage does not have a valid job (MLAB_STG(1)_STATUS[VALID] == 0),
                                                                 hardware ignores a one written to this bit */
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
        uint64_t run_to_comp           : 1;  /**< [  1:  1](R/W1S/H) When a one is written to this bit, hardware attempts to move a job from the
                                                                 run stage to the completion stage.
                                                                 If the run stage has a valid job and the completion stage is not available
                                                                 (MLAB_STG(1)_STATUS[VALID] == 1 and MLAB_STG(2)_STATUS[VALID] == 1), hardware
                                                                 waits until the completion stage is available. If the completion stage is
                                                                 available or when it becomes available (MLAB_STG(2)_STATUS[VALID] == 0), hardware
                                                                 moves the job from the run stage to the completion stage and clears this bit.
                                                                 MLIP must ensure that [RUN_TO_COMP] == 0 when it writes a one to set the bit.
                                                                 This will be the case if MLIP only issues transactions for a job when it is in
                                                                 the run stage, as specified by [FETCH_TO_RUN].
                                                                 If the run stage does not have a valid job (MLAB_STG(1)_STATUS[VALID] == 0),
                                                                 hardware ignores a one written to this bit */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlabx_stg_control_s cn; */
};
typedef union cavm_mlabx_stg_control cavm_mlabx_stg_control_t;

static inline uint64_t CAVM_MLABX_STG_CONTROL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLABX_STG_CONTROL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a==0))
        return 0x860020011100ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("MLABX_STG_CONTROL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MLABX_STG_CONTROL(a) cavm_mlabx_stg_control_t
#define bustype_CAVM_MLABX_STG_CONTROL(a) CSR_TYPE_NCB
#define basename_CAVM_MLABX_STG_CONTROL(a) "MLABX_STG_CONTROL"
#define device_bar_CAVM_MLABX_STG_CONTROL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLABX_STG_CONTROL(a) (a)
#define arguments_CAVM_MLABX_STG_CONTROL(a) (a),-1,-1,-1

/**
 * Register (NCB) mlab#_timeout_msg#
 *
 * MLAB Timeout Message Registers
 */
union cavm_mlabx_timeout_msgx
{
    uint64_t u;
    struct cavm_mlabx_timeout_msgx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W) These registers define a command/message sent to the PSM when a job timeout is
                                                                 detected. See MLAB_JOB_TIMER_CFG. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W) These registers define a command/message sent to the PSM when a job timeout is
                                                                 detected. See MLAB_JOB_TIMER_CFG. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlabx_timeout_msgx_s cn; */
};
typedef union cavm_mlabx_timeout_msgx cavm_mlabx_timeout_msgx_t;

static inline uint64_t CAVM_MLABX_TIMEOUT_MSGX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLABX_TIMEOUT_MSGX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a==0) && (b<=1)))
        return 0x860020011360ll + 0x1000000000ll * ((a) & 0x0) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("MLABX_TIMEOUT_MSGX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MLABX_TIMEOUT_MSGX(a,b) cavm_mlabx_timeout_msgx_t
#define bustype_CAVM_MLABX_TIMEOUT_MSGX(a,b) CSR_TYPE_NCB
#define basename_CAVM_MLABX_TIMEOUT_MSGX(a,b) "MLABX_TIMEOUT_MSGX"
#define device_bar_CAVM_MLABX_TIMEOUT_MSGX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLABX_TIMEOUT_MSGX(a,b) (a)
#define arguments_CAVM_MLABX_TIMEOUT_MSGX(a,b) (a),(b),-1,-1

#endif /* __CAVM_CSRS_MLAB_H__ */
