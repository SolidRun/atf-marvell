#ifndef __CAVM_CSRS_MDAB_H__
#define __CAVM_CSRS_MDAB_H__
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
 * OcteonTX MDAB.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration mdab_bar_e
 *
 * INTERNAL: MDAB Base Address Enumeration
 *
 * Enumerates internal sub-bar(s) which specify the address sub-regions used by
 * this block within the BPHY_BAR_E address regions.
 */
#define CAVM_MDAB_BAR_E_MDABX_PF_BAR0(a) (0x87e044000000ll + 0x80000ll * (a))
#define CAVM_MDAB_BAR_E_MDABX_PF_BAR0_SIZE 0x10000ull

/**
 * Enumeration mdab_rsl_subid_e
 *
 * MDAB RSL-SUBID Enumeration
 * Enumerates RSL addressing of MDABs. The base address of each
 * MDAB is:
 * _ BPHY_BAR_E::BPHY_PF_BAR2 | 0x4000000 | (RSL-SUBID)\<\<19
 */
#define CAVM_MDAB_RSL_SUBID_E_CBPX(a) (0 + (a))
#define CAVM_MDAB_RSL_SUBID_E_LBPX(a) (0x40 + (a))
#define CAVM_MDAB_RSL_SUBID_E_MASIX(a) (0x20 + (a))
#define CAVM_MDAB_RSL_SUBID_E_MBPX(a) (0 + (a))
#define CAVM_MDAB_RSL_SUBID_E_SBPX(a) (0x50 + (a))

/**
 * Register (MULTIRSL32b) mdab#_cfg_addr
 *
 * MDAB Configuration DMA Address Register
 * The starting address used by the CFG DMA engine when writing the job configuration to local
 * DSP memory.
 */
union cavm_mdabx_cfg_addr
{
    uint32_t u;
    struct cavm_mdabx_cfg_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t addr                  : 28; /**< [ 31:  4](R/W) The 128 bit-aligned starting address used by the CFG DMA engine when writing the job
                                                                 configuration to local DSP memory. See MDAB Memory MAP table.
                                                                 Software must program a valid DMEM or PMEM address into this register. */
        uint32_t reserved_0_3          : 4;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_3          : 4;
        uint32_t addr                  : 28; /**< [ 31:  4](R/W) The 128 bit-aligned starting address used by the CFG DMA engine when writing the job
                                                                 configuration to local DSP memory. See MDAB Memory MAP table.
                                                                 Software must program a valid DMEM or PMEM address into this register. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_cfg_addr_s cn; */
};
typedef union cavm_mdabx_cfg_addr cavm_mdabx_cfg_addr_t;

static inline uint64_t CAVM_MDABX_CFG_ADDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_CFG_ADDR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008030ll + 0x80000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e044008030ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_CFG_ADDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_CFG_ADDR(a) cavm_mdabx_cfg_addr_t
#define bustype_CAVM_MDABX_CFG_ADDR(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_CFG_ADDR(a) "MDABX_CFG_ADDR"
#define device_bar_CAVM_MDABX_CFG_ADDR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_CFG_ADDR(a) (a)
#define arguments_CAVM_MDABX_CFG_ADDR(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_cfg_length
 *
 * MDAB Configuration DMA Length Register
 * The actual 128-bit length of the most recent CFG DMA engine job configuration transfer.
 */
union cavm_mdabx_cfg_length
{
    uint32_t u;
    struct cavm_mdabx_cfg_length_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_18_31        : 14;
        uint32_t length                : 14; /**< [ 17:  4](RO/H) The actual 128-bit length of the most recent CFG-DMA engine job configuration transfer.

                                                                 Note: This field will be updated when the CFG DMA has been actually write committed to
                                                                 local DSP memory,
                                                                 which allows software to read (poll) the length field during the CFG DMA transfer to know how
                                                                 many 128-bit chunks are now currently available to be read and used. */
        uint32_t reserved_0_3          : 4;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_3          : 4;
        uint32_t length                : 14; /**< [ 17:  4](RO/H) The actual 128-bit length of the most recent CFG-DMA engine job configuration transfer.

                                                                 Note: This field will be updated when the CFG DMA has been actually write committed to
                                                                 local DSP memory,
                                                                 which allows software to read (poll) the length field during the CFG DMA transfer to know how
                                                                 many 128-bit chunks are now currently available to be read and used. */
        uint32_t reserved_18_31        : 14;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_cfg_length_s cn; */
};
typedef union cavm_mdabx_cfg_length cavm_mdabx_cfg_length_t;

static inline uint64_t CAVM_MDABX_CFG_LENGTH(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_CFG_LENGTH(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008050ll + 0x80000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e044008050ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_CFG_LENGTH", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_CFG_LENGTH(a) cavm_mdabx_cfg_length_t
#define bustype_CAVM_MDABX_CFG_LENGTH(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_CFG_LENGTH(a) "MDABX_CFG_LENGTH"
#define device_bar_CAVM_MDABX_CFG_LENGTH(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_CFG_LENGTH(a) (a)
#define arguments_CAVM_MDABX_CFG_LENGTH(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_cfg_limit
 *
 * MDAB Configuration DMA Limit Register
 * The maximum number of 128-bit sized chunks that the CFG DMA engine may write starting from the
 * 128-bit-aligned MDAB()_CFG_ADDR.
 */
union cavm_mdabx_cfg_limit
{
    uint32_t u;
    struct cavm_mdabx_cfg_limit_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t last                  : 1;  /**< [ 31: 31](R/W) Indicates the last CFG-DMA slice which may be written to address MDAB()_CFG_ADDR.
                                                                 DSP software may choose to segment the JD.CFG DMA data into multiple noncontiguous CFG DMA
                                                                 transfers to DSP local memory.

                                                                 Eventually, DSP software will indicate the [LAST] segment (or slice), to indicate this is
                                                                 the final CFG DMA sub-block transfer.
                                                                 Each CFG DMA operation's [LAST] will indicate when the last segment (or slice) CFG DMA
                                                                 operation has been set up, to complete the JD.CFG DMA data transfer.

                                                                 Software note: For every new CFG DMA slice operation, DSP software must signal [LAST] to indicate
                                                                 the final JD.CFG DMA data slice transfer. */
        uint32_t reserved_18_30        : 13;
        uint32_t limit                 : 14; /**< [ 17:  4](R/W) "The maximum number of 128-bit chunks that the CFG DMA engine may write at address
                                                                 MDAB()_CFG_ADDR.

                                                                 Typically, DSP software will allocate [LIMIT] buffer space (max) to be larger than the JD.JCFG
                                                                 data. DSP software is at liberty to break the total CFG DMA transfer into multiples segments (or
                                                                 DMA slices) using the LIMIT register. When either [LIMIT] has been reached (or if the last
                                                                 JD.JCFG data is detected), the CFG DMA is done.

                                                                 Software restriction #1: Software should never program [LIMIT] = 0x0.
                                                                 Indeterminate results can/will occur.

                                                                 Software restriction #2: Software should ensure that ADDR+LIMIT sizes fall
                                                                 within the instruction and data memory
                                                                 space; otherwise [DMA_ERROR] and indeterminate results can/will occur." */
        uint32_t reserved_0_3          : 4;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_3          : 4;
        uint32_t limit                 : 14; /**< [ 17:  4](R/W) "The maximum number of 128-bit chunks that the CFG DMA engine may write at address
                                                                 MDAB()_CFG_ADDR.

                                                                 Typically, DSP software will allocate [LIMIT] buffer space (max) to be larger than the JD.JCFG
                                                                 data. DSP software is at liberty to break the total CFG DMA transfer into multiples segments (or
                                                                 DMA slices) using the LIMIT register. When either [LIMIT] has been reached (or if the last
                                                                 JD.JCFG data is detected), the CFG DMA is done.

                                                                 Software restriction #1: Software should never program [LIMIT] = 0x0.
                                                                 Indeterminate results can/will occur.

                                                                 Software restriction #2: Software should ensure that ADDR+LIMIT sizes fall
                                                                 within the instruction and data memory
                                                                 space; otherwise [DMA_ERROR] and indeterminate results can/will occur." */
        uint32_t reserved_18_30        : 13;
        uint32_t last                  : 1;  /**< [ 31: 31](R/W) Indicates the last CFG-DMA slice which may be written to address MDAB()_CFG_ADDR.
                                                                 DSP software may choose to segment the JD.CFG DMA data into multiple noncontiguous CFG DMA
                                                                 transfers to DSP local memory.

                                                                 Eventually, DSP software will indicate the [LAST] segment (or slice), to indicate this is
                                                                 the final CFG DMA sub-block transfer.
                                                                 Each CFG DMA operation's [LAST] will indicate when the last segment (or slice) CFG DMA
                                                                 operation has been set up, to complete the JD.CFG DMA data transfer.

                                                                 Software note: For every new CFG DMA slice operation, DSP software must signal [LAST] to indicate
                                                                 the final JD.CFG DMA data slice transfer. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_cfg_limit_s cn; */
};
typedef union cavm_mdabx_cfg_limit cavm_mdabx_cfg_limit_t;

static inline uint64_t CAVM_MDABX_CFG_LIMIT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_CFG_LIMIT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008040ll + 0x80000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e044008040ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_CFG_LIMIT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_CFG_LIMIT(a) cavm_mdabx_cfg_limit_t
#define bustype_CAVM_MDABX_CFG_LIMIT(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_CFG_LIMIT(a) "MDABX_CFG_LIMIT"
#define device_bar_CAVM_MDABX_CFG_LIMIT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_CFG_LIMIT(a) (a)
#define arguments_CAVM_MDABX_CFG_LIMIT(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_cfg_status
 *
 * MDAB Configuration DMA Status Register
 * Reports the status for the CFG DMA engine.
 */
union cavm_mdabx_cfg_status
{
    uint32_t u;
    struct cavm_mdabx_cfg_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t job_tag               : 16; /**< [ 31: 16](RO/H) The JOB_TAG field from the PSM command for the last completed CFG DMA operation.
                                                                  When DSP software writes [START_BUSY] = 0 -\> 1, the CFG DMA engine will wait until the next
                                                                  available job has been enqueued, at which point the JOB_TAG will be latched in. */
        uint32_t reserved_10_15        : 6;
        uint32_t pending_slot          : 1;  /**< [  9:  9](RO/H) The job slot for the pending CFG DMA operation. Valid only when [START_BUSY] is 0 and
                                                                 [DMA_PENDING] is 1. */
        uint32_t job_slot              : 1;  /**< [  8:  8](RO/H) The job slot for the most recent CFG DMA operation. */
        uint32_t reserved_7            : 1;
        uint32_t dma_uflow             : 1;  /**< [  6:  6](RO/H) Set when the last CFG DMA operation encountered an underflow. */
        uint32_t dma_oflow             : 1;  /**< [  5:  5](RO/H) Set when the last CFG DMA operation encountered an overflow. */
        uint32_t dma_error             : 1;  /**< [  4:  4](RO/H) Set when the last CFG DMA operation encountered an error. */
        uint32_t last_dma_done         : 1;  /**< [  3:  3](RO/H) Set when the last CFG DMA operation transferred the last word of the job configuration
                                                                 section from the job descriptor. */
        uint32_t dma_pending           : 1;  /**< [  2:  2](RO/H) Set when a CFG DMA operation is pending for the engine and the internal interface needs to
                                                                 be programmed. */
        uint32_t post_reset            : 1;  /**< [  1:  1](RO/H) Set to one on MDAB reset and remains one until the CFG DMA engine starts its first
                                                                 CFG DMA transfer.

                                                                 Software note: DSP software can use this bit to qualify the [JOB_TAG],
                                                                 [JOB_SLOT], [DMA_ERROR], and [LAST_DMA_DONE]
                                                                 bits in this CSR. These status bits remain set and POST_RESET is used by software to know
                                                                 when they are truly valid.

                                                                 Set (hardware) = MDAB reset.

                                                                 Clear (software) = DSP writes [START_BUSY] = 0 -\> 1. */
        uint32_t start_busy            : 1;  /**< [  0:  0](R/W1S/H) When software writes a one to this register, hardware will write the job configuration
                                                                 section (JD.JCFG) for the next available job into the local memory starting at
                                                                 MDAB()_CFG_ADDR, up to
                                                                 MDAB()_CFG_ADDR+MDAB()_CFG_LIMIT or until the last JD.JCFG data has been transferred.
                                                                 If the CFG DMA engine has already transferred part but not all of the JD.JCFG section for
                                                                 a job, it will continue transferring data until it reaches the end of the JD.JCFG
                                                                 section, or until it writes
                                                                 MDAB()_CFG_LIMIT for the last CFG DMA slice, whichever comes first.

                                                                 This bit is reset to zero when the
                                                                 CFG DMA engine has completed the transfer and is ready to be re-initialized for another
                                                                 transfer. */
#else /* Word 0 - Little Endian */
        uint32_t start_busy            : 1;  /**< [  0:  0](R/W1S/H) When software writes a one to this register, hardware will write the job configuration
                                                                 section (JD.JCFG) for the next available job into the local memory starting at
                                                                 MDAB()_CFG_ADDR, up to
                                                                 MDAB()_CFG_ADDR+MDAB()_CFG_LIMIT or until the last JD.JCFG data has been transferred.
                                                                 If the CFG DMA engine has already transferred part but not all of the JD.JCFG section for
                                                                 a job, it will continue transferring data until it reaches the end of the JD.JCFG
                                                                 section, or until it writes
                                                                 MDAB()_CFG_LIMIT for the last CFG DMA slice, whichever comes first.

                                                                 This bit is reset to zero when the
                                                                 CFG DMA engine has completed the transfer and is ready to be re-initialized for another
                                                                 transfer. */
        uint32_t post_reset            : 1;  /**< [  1:  1](RO/H) Set to one on MDAB reset and remains one until the CFG DMA engine starts its first
                                                                 CFG DMA transfer.

                                                                 Software note: DSP software can use this bit to qualify the [JOB_TAG],
                                                                 [JOB_SLOT], [DMA_ERROR], and [LAST_DMA_DONE]
                                                                 bits in this CSR. These status bits remain set and POST_RESET is used by software to know
                                                                 when they are truly valid.

                                                                 Set (hardware) = MDAB reset.

                                                                 Clear (software) = DSP writes [START_BUSY] = 0 -\> 1. */
        uint32_t dma_pending           : 1;  /**< [  2:  2](RO/H) Set when a CFG DMA operation is pending for the engine and the internal interface needs to
                                                                 be programmed. */
        uint32_t last_dma_done         : 1;  /**< [  3:  3](RO/H) Set when the last CFG DMA operation transferred the last word of the job configuration
                                                                 section from the job descriptor. */
        uint32_t dma_error             : 1;  /**< [  4:  4](RO/H) Set when the last CFG DMA operation encountered an error. */
        uint32_t dma_oflow             : 1;  /**< [  5:  5](RO/H) Set when the last CFG DMA operation encountered an overflow. */
        uint32_t dma_uflow             : 1;  /**< [  6:  6](RO/H) Set when the last CFG DMA operation encountered an underflow. */
        uint32_t reserved_7            : 1;
        uint32_t job_slot              : 1;  /**< [  8:  8](RO/H) The job slot for the most recent CFG DMA operation. */
        uint32_t pending_slot          : 1;  /**< [  9:  9](RO/H) The job slot for the pending CFG DMA operation. Valid only when [START_BUSY] is 0 and
                                                                 [DMA_PENDING] is 1. */
        uint32_t reserved_10_15        : 6;
        uint32_t job_tag               : 16; /**< [ 31: 16](RO/H) The JOB_TAG field from the PSM command for the last completed CFG DMA operation.
                                                                  When DSP software writes [START_BUSY] = 0 -\> 1, the CFG DMA engine will wait until the next
                                                                  available job has been enqueued, at which point the JOB_TAG will be latched in. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_cfg_status_s cn; */
};
typedef union cavm_mdabx_cfg_status cavm_mdabx_cfg_status_t;

static inline uint64_t CAVM_MDABX_CFG_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_CFG_STATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008020ll + 0x80000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e044008020ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_CFG_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_CFG_STATUS(a) cavm_mdabx_cfg_status_t
#define bustype_CAVM_MDABX_CFG_STATUS(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_CFG_STATUS(a) "MDABX_CFG_STATUS"
#define device_bar_CAVM_MDABX_CFG_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_CFG_STATUS(a) (a)
#define arguments_CAVM_MDABX_CFG_STATUS(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_dac_ctrl
 *
 * MDAB DAC Control Register
 * Controls for the DAC bridge.
 */
union cavm_mdabx_dac_ctrl
{
    uint32_t u;
    struct cavm_mdabx_dac_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_26_31        : 6;
        uint32_t ipb_rd_req_limit      : 2;  /**< [ 25: 24](R/W) Limit the number of outstanding IPB read requests.
                                                                 0x0 = no limit.
                                                                 0x1 = 1/4 of max requests.
                                                                 0x2 = 1/2 of max requests.
                                                                 0x3 = 3/4 of max requests. */
        uint32_t epdp_rd_req_limit     : 2;  /**< [ 23: 22](R/W) Limit the number of outstanding EPDP read requests.
                                                                 0x0 = no limit.
                                                                 0x1 = 1/4 of max requests.
                                                                 0x2 = 1/2 of max requests.
                                                                 0x3 = 3/4 of max requests. */
        uint32_t edp_rd_req_limit      : 2;  /**< [ 21: 20](R/W) Limit the number of outstanding EDP read requests.
                                                                 0x0 = no limit.
                                                                 0x1 = 1/4 of max requests.
                                                                 0x2 = 1/2 of max requests.
                                                                 0x3 = 3/4 of max requests. */
        uint32_t epdp_wr_req_limit     : 2;  /**< [ 19: 18](R/W) Limit the number of outstanding EPDP write requests.
                                                                 0x0 = no limit.
                                                                 0x1 = 1/4 of max requests.
                                                                 0x2 = 1/2 of max requests.
                                                                 0x3 = 3/4 of max requests. */
        uint32_t edp_wr_req_limit      : 2;  /**< [ 17: 16](R/W) Limit the number of outstanding EDP write requests.
                                                                 0x0 = no limit.
                                                                 0x1 = 1/4 of max requests.
                                                                 0x2 = 1/2 of max requests.
                                                                 0x3 = 3/4 of max requests. */
        uint32_t reserved_5_15         : 11;
        uint32_t en_dspclk_gate        : 1;  /**< [  4:  4](R/W/H) Reserved. */
        uint32_t excl_en               : 1;  /**< [  3:  3](R/W/H) Enables exclusive accesses on the DSP master ports. When disabled the AXI interface
                                                                 will respond to exclusive requests with AXI_OK. */
        uint32_t stall_dac             : 1;  /**< [  2:  2](R/W) Stalls DSP complex master ports by not accepting new Transactions. */
        uint32_t wburst                : 1;  /**< [  1:  1](R/W) Enable DSP complex master write bursts to system memory. */
        uint32_t rburst                : 1;  /**< [  0:  0](R/W) Enable DSP complex master read bursts to system memory. */
#else /* Word 0 - Little Endian */
        uint32_t rburst                : 1;  /**< [  0:  0](R/W) Enable DSP complex master read bursts to system memory. */
        uint32_t wburst                : 1;  /**< [  1:  1](R/W) Enable DSP complex master write bursts to system memory. */
        uint32_t stall_dac             : 1;  /**< [  2:  2](R/W) Stalls DSP complex master ports by not accepting new Transactions. */
        uint32_t excl_en               : 1;  /**< [  3:  3](R/W/H) Enables exclusive accesses on the DSP master ports. When disabled the AXI interface
                                                                 will respond to exclusive requests with AXI_OK. */
        uint32_t en_dspclk_gate        : 1;  /**< [  4:  4](R/W/H) Reserved. */
        uint32_t reserved_5_15         : 11;
        uint32_t edp_wr_req_limit      : 2;  /**< [ 17: 16](R/W) Limit the number of outstanding EDP write requests.
                                                                 0x0 = no limit.
                                                                 0x1 = 1/4 of max requests.
                                                                 0x2 = 1/2 of max requests.
                                                                 0x3 = 3/4 of max requests. */
        uint32_t epdp_wr_req_limit     : 2;  /**< [ 19: 18](R/W) Limit the number of outstanding EPDP write requests.
                                                                 0x0 = no limit.
                                                                 0x1 = 1/4 of max requests.
                                                                 0x2 = 1/2 of max requests.
                                                                 0x3 = 3/4 of max requests. */
        uint32_t edp_rd_req_limit      : 2;  /**< [ 21: 20](R/W) Limit the number of outstanding EDP read requests.
                                                                 0x0 = no limit.
                                                                 0x1 = 1/4 of max requests.
                                                                 0x2 = 1/2 of max requests.
                                                                 0x3 = 3/4 of max requests. */
        uint32_t epdp_rd_req_limit     : 2;  /**< [ 23: 22](R/W) Limit the number of outstanding EPDP read requests.
                                                                 0x0 = no limit.
                                                                 0x1 = 1/4 of max requests.
                                                                 0x2 = 1/2 of max requests.
                                                                 0x3 = 3/4 of max requests. */
        uint32_t ipb_rd_req_limit      : 2;  /**< [ 25: 24](R/W) Limit the number of outstanding IPB read requests.
                                                                 0x0 = no limit.
                                                                 0x1 = 1/4 of max requests.
                                                                 0x2 = 1/2 of max requests.
                                                                 0x3 = 3/4 of max requests. */
        uint32_t reserved_26_31        : 6;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_dac_ctrl_s cn10; */
    struct cavm_mdabx_dac_ctrl_cnf10ka
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_26_31        : 6;
        uint32_t ipb_rd_req_limit      : 2;  /**< [ 25: 24](R/W) Limit the number of outstanding IPB read requests.
                                                                 0x0 = no limit.
                                                                 0x1 = 1/4 of max requests.
                                                                 0x2 = 1/2 of max requests.
                                                                 0x3 = 3/4 of max requests. */
        uint32_t epdp_rd_req_limit     : 2;  /**< [ 23: 22](R/W) Limit the number of outstanding EPDP read requests.
                                                                 0x0 = no limit.
                                                                 0x1 = 1/4 of max requests.
                                                                 0x2 = 1/2 of max requests.
                                                                 0x3 = 3/4 of max requests. */
        uint32_t edp_rd_req_limit      : 2;  /**< [ 21: 20](R/W) Limit the number of outstanding EDP read requests.
                                                                 0x0 = no limit.
                                                                 0x1 = 1/4 of max requests.
                                                                 0x2 = 1/2 of max requests.
                                                                 0x3 = 3/4 of max requests. */
        uint32_t epdp_wr_req_limit     : 2;  /**< [ 19: 18](R/W) Limit the number of outstanding EPDP write requests.
                                                                 0x0 = no limit.
                                                                 0x1 = 1/4 of max requests.
                                                                 0x2 = 1/2 of max requests.
                                                                 0x3 = 3/4 of max requests. */
        uint32_t edp_wr_req_limit      : 2;  /**< [ 17: 16](R/W) Limit the number of outstanding EDP write requests.
                                                                 0x0 = no limit.
                                                                 0x1 = 1/4 of max requests.
                                                                 0x2 = 1/2 of max requests.
                                                                 0x3 = 3/4 of max requests. */
        uint32_t reserved_5_15         : 11;
        uint32_t en_dspclk_gate        : 1;  /**< [  4:  4](R/W/H) Reserved. */
        uint32_t reserved_3            : 1;
        uint32_t stall_dac             : 1;  /**< [  2:  2](R/W) Stalls DSP complex master ports by not accepting new Transactions. */
        uint32_t wburst                : 1;  /**< [  1:  1](R/W) Enable DSP complex master write bursts to system memory. */
        uint32_t rburst                : 1;  /**< [  0:  0](R/W) Enable DSP complex master read bursts to system memory. */
#else /* Word 0 - Little Endian */
        uint32_t rburst                : 1;  /**< [  0:  0](R/W) Enable DSP complex master read bursts to system memory. */
        uint32_t wburst                : 1;  /**< [  1:  1](R/W) Enable DSP complex master write bursts to system memory. */
        uint32_t stall_dac             : 1;  /**< [  2:  2](R/W) Stalls DSP complex master ports by not accepting new Transactions. */
        uint32_t reserved_3            : 1;
        uint32_t en_dspclk_gate        : 1;  /**< [  4:  4](R/W/H) Reserved. */
        uint32_t reserved_5_15         : 11;
        uint32_t edp_wr_req_limit      : 2;  /**< [ 17: 16](R/W) Limit the number of outstanding EDP write requests.
                                                                 0x0 = no limit.
                                                                 0x1 = 1/4 of max requests.
                                                                 0x2 = 1/2 of max requests.
                                                                 0x3 = 3/4 of max requests. */
        uint32_t epdp_wr_req_limit     : 2;  /**< [ 19: 18](R/W) Limit the number of outstanding EPDP write requests.
                                                                 0x0 = no limit.
                                                                 0x1 = 1/4 of max requests.
                                                                 0x2 = 1/2 of max requests.
                                                                 0x3 = 3/4 of max requests. */
        uint32_t edp_rd_req_limit      : 2;  /**< [ 21: 20](R/W) Limit the number of outstanding EDP read requests.
                                                                 0x0 = no limit.
                                                                 0x1 = 1/4 of max requests.
                                                                 0x2 = 1/2 of max requests.
                                                                 0x3 = 3/4 of max requests. */
        uint32_t epdp_rd_req_limit     : 2;  /**< [ 23: 22](R/W) Limit the number of outstanding EPDP read requests.
                                                                 0x0 = no limit.
                                                                 0x1 = 1/4 of max requests.
                                                                 0x2 = 1/2 of max requests.
                                                                 0x3 = 3/4 of max requests. */
        uint32_t ipb_rd_req_limit      : 2;  /**< [ 25: 24](R/W) Limit the number of outstanding IPB read requests.
                                                                 0x0 = no limit.
                                                                 0x1 = 1/4 of max requests.
                                                                 0x2 = 1/2 of max requests.
                                                                 0x3 = 3/4 of max requests. */
        uint32_t reserved_26_31        : 6;
#endif /* Word 0 - End */
    } cnf10ka;
    struct cavm_mdabx_dac_ctrl_cnf10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_26_31        : 6;
        uint32_t ipb_rd_req_limit      : 2;  /**< [ 25: 24](R/W) Limit the number of outstanding IPB read requests.
                                                                 0x0 = no limit.
                                                                 0x1 = 1/4 of max requests.
                                                                 0x2 = 1/2 of max requests.
                                                                 0x3 = 3/4 of max requests. */
        uint32_t epdp_rd_req_limit     : 2;  /**< [ 23: 22](R/W) Limit the number of outstanding EPDP read requests.
                                                                 0x0 = no limit.
                                                                 0x1 = 1/4 of max requests.
                                                                 0x2 = 1/2 of max requests.
                                                                 0x3 = 3/4 of max requests. */
        uint32_t edp_rd_req_limit      : 2;  /**< [ 21: 20](R/W) Limit the number of outstanding EDP read requests.
                                                                 0x0 = no limit.
                                                                 0x1 = 1/4 of max requests.
                                                                 0x2 = 1/2 of max requests.
                                                                 0x3 = 3/4 of max requests. */
        uint32_t epdp_wr_req_limit     : 2;  /**< [ 19: 18](R/W) Limit the number of outstanding EPDP write requests.
                                                                 0x0 = no limit.
                                                                 0x1 = 1/4 of max requests.
                                                                 0x2 = 1/2 of max requests.
                                                                 0x3 = 3/4 of max requests. */
        uint32_t edp_wr_req_limit      : 2;  /**< [ 17: 16](R/W) Limit the number of outstanding EDP write requests.
                                                                 0x0 = no limit.
                                                                 0x1 = 1/4 of max requests.
                                                                 0x2 = 1/2 of max requests.
                                                                 0x3 = 3/4 of max requests. */
        uint32_t reserved_5_15         : 11;
        uint32_t en_dspclk_gate        : 1;  /**< [  4:  4](R/W/H) This Bit is functional for MASI only.
                                                                 When this bit is clear the clock to the MASI DSP will always run.
                                                                 Setting this bit at during a job allows the DAC to turn off the clock
                                                                 to the MASI DSP when the job ends.
                                                                 Automatically cleared at the start of a new job.
                                                                 This bit has no function for non-MASI DSPs. */
        uint32_t excl_en               : 1;  /**< [  3:  3](R/W/H) Enables exclusive accesses on the DSP master ports. When disabled the AXI interface
                                                                 will respond to exclusive requests with AXI_OK. */
        uint32_t stall_dac             : 1;  /**< [  2:  2](R/W) Stalls DSP complex master ports by not accepting new Transactions. */
        uint32_t wburst                : 1;  /**< [  1:  1](R/W) Enable DSP complex master write bursts to system memory. */
        uint32_t rburst                : 1;  /**< [  0:  0](R/W) Enable DSP complex master read bursts to system memory. */
#else /* Word 0 - Little Endian */
        uint32_t rburst                : 1;  /**< [  0:  0](R/W) Enable DSP complex master read bursts to system memory. */
        uint32_t wburst                : 1;  /**< [  1:  1](R/W) Enable DSP complex master write bursts to system memory. */
        uint32_t stall_dac             : 1;  /**< [  2:  2](R/W) Stalls DSP complex master ports by not accepting new Transactions. */
        uint32_t excl_en               : 1;  /**< [  3:  3](R/W/H) Enables exclusive accesses on the DSP master ports. When disabled the AXI interface
                                                                 will respond to exclusive requests with AXI_OK. */
        uint32_t en_dspclk_gate        : 1;  /**< [  4:  4](R/W/H) This Bit is functional for MASI only.
                                                                 When this bit is clear the clock to the MASI DSP will always run.
                                                                 Setting this bit at during a job allows the DAC to turn off the clock
                                                                 to the MASI DSP when the job ends.
                                                                 Automatically cleared at the start of a new job.
                                                                 This bit has no function for non-MASI DSPs. */
        uint32_t reserved_5_15         : 11;
        uint32_t edp_wr_req_limit      : 2;  /**< [ 17: 16](R/W) Limit the number of outstanding EDP write requests.
                                                                 0x0 = no limit.
                                                                 0x1 = 1/4 of max requests.
                                                                 0x2 = 1/2 of max requests.
                                                                 0x3 = 3/4 of max requests. */
        uint32_t epdp_wr_req_limit     : 2;  /**< [ 19: 18](R/W) Limit the number of outstanding EPDP write requests.
                                                                 0x0 = no limit.
                                                                 0x1 = 1/4 of max requests.
                                                                 0x2 = 1/2 of max requests.
                                                                 0x3 = 3/4 of max requests. */
        uint32_t edp_rd_req_limit      : 2;  /**< [ 21: 20](R/W) Limit the number of outstanding EDP read requests.
                                                                 0x0 = no limit.
                                                                 0x1 = 1/4 of max requests.
                                                                 0x2 = 1/2 of max requests.
                                                                 0x3 = 3/4 of max requests. */
        uint32_t epdp_rd_req_limit     : 2;  /**< [ 23: 22](R/W) Limit the number of outstanding EPDP read requests.
                                                                 0x0 = no limit.
                                                                 0x1 = 1/4 of max requests.
                                                                 0x2 = 1/2 of max requests.
                                                                 0x3 = 3/4 of max requests. */
        uint32_t ipb_rd_req_limit      : 2;  /**< [ 25: 24](R/W) Limit the number of outstanding IPB read requests.
                                                                 0x0 = no limit.
                                                                 0x1 = 1/4 of max requests.
                                                                 0x2 = 1/2 of max requests.
                                                                 0x3 = 3/4 of max requests. */
        uint32_t reserved_26_31        : 6;
#endif /* Word 0 - End */
    } cnf10kb;
};
typedef union cavm_mdabx_dac_ctrl cavm_mdabx_dac_ctrl_t;

static inline uint64_t CAVM_MDABX_DAC_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_DAC_CTRL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008b80ll + 0x80000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e044008b80ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_DAC_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_DAC_CTRL(a) cavm_mdabx_dac_ctrl_t
#define bustype_CAVM_MDABX_DAC_CTRL(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_DAC_CTRL(a) "MDABX_DAC_CTRL"
#define device_bar_CAVM_MDABX_DAC_CTRL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_DAC_CTRL(a) (a)
#define arguments_CAVM_MDABX_DAC_CTRL(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_dac_err_log_addr
 *
 * MDAB Address Error Log Address Register
 * Lock bits[31:4] of the address in case of an error in the DAC.
 */
union cavm_mdabx_dac_err_log_addr
{
    uint32_t u;
    struct cavm_mdabx_dac_err_log_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t addr                  : 28; /**< [ 31:  4](RO/H) This field locks the address of the erroneous transaction. Details of the transaction
                                                                 origin are described in MDAB_DAC_ERR_LOG_SRC */
        uint32_t reserved_1_3          : 3;
        uint32_t lock                  : 1;  /**< [  0:  0](R/W1C/H) Lock indication. When set address value and the value of  can not be overridden. */
#else /* Word 0 - Little Endian */
        uint32_t lock                  : 1;  /**< [  0:  0](R/W1C/H) Lock indication. When set address value and the value of  can not be overridden. */
        uint32_t reserved_1_3          : 3;
        uint32_t addr                  : 28; /**< [ 31:  4](RO/H) This field locks the address of the erroneous transaction. Details of the transaction
                                                                 origin are described in MDAB_DAC_ERR_LOG_SRC */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_dac_err_log_addr_s cn; */
};
typedef union cavm_mdabx_dac_err_log_addr cavm_mdabx_dac_err_log_addr_t;

static inline uint64_t CAVM_MDABX_DAC_ERR_LOG_ADDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_DAC_ERR_LOG_ADDR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e0440088e0ll + 0x80000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e0440088e0ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_DAC_ERR_LOG_ADDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_DAC_ERR_LOG_ADDR(a) cavm_mdabx_dac_err_log_addr_t
#define bustype_CAVM_MDABX_DAC_ERR_LOG_ADDR(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_DAC_ERR_LOG_ADDR(a) "MDABX_DAC_ERR_LOG_ADDR"
#define device_bar_CAVM_MDABX_DAC_ERR_LOG_ADDR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_DAC_ERR_LOG_ADDR(a) (a)
#define arguments_CAVM_MDABX_DAC_ERR_LOG_ADDR(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_dac_err_log_src
 *
 * MDAB DAC Error Log SRC Register
 * Locks the source and type of the DAC error. The LOCK bit in the DAC_ERR_LOG_ADDR register indicates
 * when there is valid data in this register.
 */
union cavm_mdabx_dac_err_log_src
{
    uint32_t u;
    struct cavm_mdabx_dac_err_log_src_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t error_type_2          : 4;  /**< [ 15: 12](RO/H) Encoded value providing the type of the DAC error corresponding to ERROR_SOURCE_2.

                                                                 Error Source == DSP Code Error:
                                                                     0x0: DSP Fatal Error.
                                                                     0x1: DSP Double ECC Error.

                                                                 Error Source == LD/ST/iFetch Master Port Error:
                                                                     0x0: WR Decode Error.
                                                                     0x1: RD Decode Error.
                                                                     0x2: CSR WR Error.
                                                                     0x3: CSR RD Error.
                                                                     0x4: WR Unsupported Burst Length.
                                                                     0x5: RD Unsupported Burst Length.
                                                                     0x6: WR Unsupported Burst Type.
                                                                     0x7: RD Unsupported Burst Type.
                                                                     0x8: WR Unsupported ID.
                                                                     0x9: RD Unsupported ID.
                                                                     0xA: WR Respond Fatal Error.
                                                                     0xB: Reserved.

                                                                 Error Source == iDMA Master Port Error:
                                                                     0x0: WR Decode Error.
                                                                     0x1: RD Decode Error.
                                                                     0x2: WR Unsupported Burst Length.
                                                                     0x3: RD Unsupported Burst Length.
                                                                     0x4: WR Unsupported Burst Type.
                                                                     0x5: RD Unsupported Burst Type.
                                                                     0x6: WR Respond Fatal Error.
                                                                     0x7: Reserved.

                                                                 Error Source == DSP Slave port Error:
                                                                     0x0: WR Respond Slave Error.
                                                                     0x1: RD Respond Slave Error.
                                                                     0x2: WR Respond Decode Error.
                                                                     0x3: Reserved.

                                                                 Error Source == IPB Error:
                                                                     0x0: Decode Error - address does not hit SMEM.

                                                                 Error Source == DAC Error:
                                                                     0x0: RD ROB Overflow.
                                                                     0x1: WR ROB Overflow.
                                                                     0x2: WR Respond Fatal Error from CMEM (as a result of RD DMA access).

                                                                 Error Source == Co-Processor Error:
                                                                     0x0: Job Queue overflowed

                                                                 Error Source == Filter Error:
                                                                     0x0: Underrun.
                                                                     0x1: Overrun.
                                                                     0x2: Job Cancel by Software.
                                                                     0x3: Job Config Error. */
        uint32_t error_type_1          : 4;  /**< [ 11:  8](RO/H) Reserved. */
        uint32_t error_source_2        : 4;  /**< [  7:  4](RO/H) Encoded value providing the source of the DAC error.
                                                                 0x0: Reserved.
                                                                 0x1: DSP Code Error.
                                                                 0x2: DSP DMA Error.
                                                                 0x3: DSP LD/ST/iFetch Master Port Error.
                                                                 0x4: DSP iDMA Master Port Error.
                                                                 0x5: DSP Slave port Error.
                                                                 0x6: IPB Error.
                                                                 0x7: DAC Error.
                                                                 0x8: Co-Processor Error.
                                                                 0x9: Filter Error.
                                                                 0xA-0xF: Reserved. */
        uint32_t error_source_1        : 4;  /**< [  3:  0](RO/H) Reserved. */
#else /* Word 0 - Little Endian */
        uint32_t error_source_1        : 4;  /**< [  3:  0](RO/H) Reserved. */
        uint32_t error_source_2        : 4;  /**< [  7:  4](RO/H) Encoded value providing the source of the DAC error.
                                                                 0x0: Reserved.
                                                                 0x1: DSP Code Error.
                                                                 0x2: DSP DMA Error.
                                                                 0x3: DSP LD/ST/iFetch Master Port Error.
                                                                 0x4: DSP iDMA Master Port Error.
                                                                 0x5: DSP Slave port Error.
                                                                 0x6: IPB Error.
                                                                 0x7: DAC Error.
                                                                 0x8: Co-Processor Error.
                                                                 0x9: Filter Error.
                                                                 0xA-0xF: Reserved. */
        uint32_t error_type_1          : 4;  /**< [ 11:  8](RO/H) Reserved. */
        uint32_t error_type_2          : 4;  /**< [ 15: 12](RO/H) Encoded value providing the type of the DAC error corresponding to ERROR_SOURCE_2.

                                                                 Error Source == DSP Code Error:
                                                                     0x0: DSP Fatal Error.
                                                                     0x1: DSP Double ECC Error.

                                                                 Error Source == LD/ST/iFetch Master Port Error:
                                                                     0x0: WR Decode Error.
                                                                     0x1: RD Decode Error.
                                                                     0x2: CSR WR Error.
                                                                     0x3: CSR RD Error.
                                                                     0x4: WR Unsupported Burst Length.
                                                                     0x5: RD Unsupported Burst Length.
                                                                     0x6: WR Unsupported Burst Type.
                                                                     0x7: RD Unsupported Burst Type.
                                                                     0x8: WR Unsupported ID.
                                                                     0x9: RD Unsupported ID.
                                                                     0xA: WR Respond Fatal Error.
                                                                     0xB: Reserved.

                                                                 Error Source == iDMA Master Port Error:
                                                                     0x0: WR Decode Error.
                                                                     0x1: RD Decode Error.
                                                                     0x2: WR Unsupported Burst Length.
                                                                     0x3: RD Unsupported Burst Length.
                                                                     0x4: WR Unsupported Burst Type.
                                                                     0x5: RD Unsupported Burst Type.
                                                                     0x6: WR Respond Fatal Error.
                                                                     0x7: Reserved.

                                                                 Error Source == DSP Slave port Error:
                                                                     0x0: WR Respond Slave Error.
                                                                     0x1: RD Respond Slave Error.
                                                                     0x2: WR Respond Decode Error.
                                                                     0x3: Reserved.

                                                                 Error Source == IPB Error:
                                                                     0x0: Decode Error - address does not hit SMEM.

                                                                 Error Source == DAC Error:
                                                                     0x0: RD ROB Overflow.
                                                                     0x1: WR ROB Overflow.
                                                                     0x2: WR Respond Fatal Error from CMEM (as a result of RD DMA access).

                                                                 Error Source == Co-Processor Error:
                                                                     0x0: Job Queue overflowed

                                                                 Error Source == Filter Error:
                                                                     0x0: Underrun.
                                                                     0x1: Overrun.
                                                                     0x2: Job Cancel by Software.
                                                                     0x3: Job Config Error. */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_dac_err_log_src_s cn10; */
    /* struct cavm_mdabx_dac_err_log_src_s cnf10ka; */
    struct cavm_mdabx_dac_err_log_src_cnf10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t error_type_2          : 4;  /**< [ 15: 12](RO/H) Reserved. */
        uint32_t error_type_1          : 4;  /**< [ 11:  8](RO/H) Encoded value providing the type of the DAC error corresponding to ERROR_SOURCE_1.

                                                                 Error Source == DSP ECC Error:
                                                                   0x0: DSP iCache TAG RAM ECC Error (CBP Only).
                                                                   0x1: For CPB - DSP iCache DATA RAM ECC Error.
                                                                        For MASI - double ECC Error.

                                                                 Error Source == DSP Code Error (CBP Only):
                                                                   0x0: DSP Undefined Op Code.
                                                                   0x1: Reserved.
                                                                   0x2: DSP Permission violation.
                                                                   0x3: DSP Access Protect Violation.

                                                                 Error Source == DSP DMA Error (CBP Only):
                                                                   0x0: QMAN Violation.
                                                                   0x1: BMAN Violation.

                                                                 Error Source == LD/ST/DDMA Master Port Error:
                                                                   0x0: WR Decode Error.
                                                                   0x1: RD Decode Error.
                                                                   0x2: CSR WR Error.
                                                                   0x3: CSR RD Error.
                                                                   0x4: WR Unsupported Burst Length.
                                                                   0x5: RD Unsupported Burst Length.
                                                                   0x6: WR Unsupported Burst Type.
                                                                   0x7: RD Unsupported Burst Type.
                                                                   0x8: WR Unsupported ID.
                                                                   0x9: RD Unsupported ID.
                                                                   0xA: WR Respond Fatal Error.
                                                                   0xB: Reserved.

                                                                 Error Source == iFetch Master Port Error (CBP Only):
                                                                   0x0: Reserved.
                                                                   0x1: RD Decode Error.
                                                                   0x2: Reserved.
                                                                   0x3: RD Unsupported Burst Length.
                                                                   0x4: Reserved.
                                                                   0x5: RD Unsupported Burst Type.
                                                                   0x6: Reserved.
                                                                   0x7: Reserved.
                                                                   0x8: Reserved.
                                                                   0x9: RD Unsupported ID.

                                                                 Error Source == DSP Slave port Error:
                                                                   0x0: WR Respond Slave Error.
                                                                   0x1: RD Respond Slave Error.
                                                                   0x2: WR Respond Decode Error.
                                                                   0x3: Reserved.

                                                                 Error Source == IPB Error (CBP Only):
                                                                   0x0: Decode Error - address does not hit SMEM.

                                                                 Error Source == DAC Error:
                                                                   0x0: RD ROB Overflow.
                                                                   0x1: WR ROB Overflow.
                                                                   0x2: WR Respond Fatal Error from CMEM (as a result of RD DMA access).

                                                                 Error Source == GVI:
                                                                   0x0: GVI. */
        uint32_t error_source_2        : 4;  /**< [  7:  4](RO/H) Reserved. */
        uint32_t error_source_1        : 4;  /**< [  3:  0](RO/H) Encoded value providing the source of the DAC error.
                                                                 0x0: DSP ECC Error.
                                                                 0x1: DSP Code Error.
                                                                 0x2: DSP DMA Error.
                                                                 0x3: DSP LD/ST/DDMA Master Port Error.
                                                                 0x4: DSP iFetch Master Port Error.
                                                                 0x5: DSP Slave port Error.
                                                                 0x6: IPB Error.
                                                                 0x7: DAC Error.
                                                                 0x8: GVI.
                                                                 0x9-0xF: Reserved. */
#else /* Word 0 - Little Endian */
        uint32_t error_source_1        : 4;  /**< [  3:  0](RO/H) Encoded value providing the source of the DAC error.
                                                                 0x0: DSP ECC Error.
                                                                 0x1: DSP Code Error.
                                                                 0x2: DSP DMA Error.
                                                                 0x3: DSP LD/ST/DDMA Master Port Error.
                                                                 0x4: DSP iFetch Master Port Error.
                                                                 0x5: DSP Slave port Error.
                                                                 0x6: IPB Error.
                                                                 0x7: DAC Error.
                                                                 0x8: GVI.
                                                                 0x9-0xF: Reserved. */
        uint32_t error_source_2        : 4;  /**< [  7:  4](RO/H) Reserved. */
        uint32_t error_type_1          : 4;  /**< [ 11:  8](RO/H) Encoded value providing the type of the DAC error corresponding to ERROR_SOURCE_1.

                                                                 Error Source == DSP ECC Error:
                                                                   0x0: DSP iCache TAG RAM ECC Error (CBP Only).
                                                                   0x1: For CPB - DSP iCache DATA RAM ECC Error.
                                                                        For MASI - double ECC Error.

                                                                 Error Source == DSP Code Error (CBP Only):
                                                                   0x0: DSP Undefined Op Code.
                                                                   0x1: Reserved.
                                                                   0x2: DSP Permission violation.
                                                                   0x3: DSP Access Protect Violation.

                                                                 Error Source == DSP DMA Error (CBP Only):
                                                                   0x0: QMAN Violation.
                                                                   0x1: BMAN Violation.

                                                                 Error Source == LD/ST/DDMA Master Port Error:
                                                                   0x0: WR Decode Error.
                                                                   0x1: RD Decode Error.
                                                                   0x2: CSR WR Error.
                                                                   0x3: CSR RD Error.
                                                                   0x4: WR Unsupported Burst Length.
                                                                   0x5: RD Unsupported Burst Length.
                                                                   0x6: WR Unsupported Burst Type.
                                                                   0x7: RD Unsupported Burst Type.
                                                                   0x8: WR Unsupported ID.
                                                                   0x9: RD Unsupported ID.
                                                                   0xA: WR Respond Fatal Error.
                                                                   0xB: Reserved.

                                                                 Error Source == iFetch Master Port Error (CBP Only):
                                                                   0x0: Reserved.
                                                                   0x1: RD Decode Error.
                                                                   0x2: Reserved.
                                                                   0x3: RD Unsupported Burst Length.
                                                                   0x4: Reserved.
                                                                   0x5: RD Unsupported Burst Type.
                                                                   0x6: Reserved.
                                                                   0x7: Reserved.
                                                                   0x8: Reserved.
                                                                   0x9: RD Unsupported ID.

                                                                 Error Source == DSP Slave port Error:
                                                                   0x0: WR Respond Slave Error.
                                                                   0x1: RD Respond Slave Error.
                                                                   0x2: WR Respond Decode Error.
                                                                   0x3: Reserved.

                                                                 Error Source == IPB Error (CBP Only):
                                                                   0x0: Decode Error - address does not hit SMEM.

                                                                 Error Source == DAC Error:
                                                                   0x0: RD ROB Overflow.
                                                                   0x1: WR ROB Overflow.
                                                                   0x2: WR Respond Fatal Error from CMEM (as a result of RD DMA access).

                                                                 Error Source == GVI:
                                                                   0x0: GVI. */
        uint32_t error_type_2          : 4;  /**< [ 15: 12](RO/H) Reserved. */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } cnf10kb;
};
typedef union cavm_mdabx_dac_err_log_src cavm_mdabx_dac_err_log_src_t;

static inline uint64_t CAVM_MDABX_DAC_ERR_LOG_SRC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_DAC_ERR_LOG_SRC(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e0440088f0ll + 0x80000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e0440088f0ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_DAC_ERR_LOG_SRC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_DAC_ERR_LOG_SRC(a) cavm_mdabx_dac_err_log_src_t
#define bustype_CAVM_MDABX_DAC_ERR_LOG_SRC(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_DAC_ERR_LOG_SRC(a) "MDABX_DAC_ERR_LOG_SRC"
#define device_bar_CAVM_MDABX_DAC_ERR_LOG_SRC(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_DAC_ERR_LOG_SRC(a) (a)
#define arguments_CAVM_MDABX_DAC_ERR_LOG_SRC(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_dsp_fyi
 *
 * MDAB DSP FYI Register
 * This register contains information about the DSP.
 */
union cavm_mdabx_dsp_fyi
{
    uint32_t u;
    struct cavm_mdabx_dsp_fyi_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t dsp_version           : 20; /**< [ 31: 12](RO/H) DSP version number. */
        uint32_t sw_version            : 4;  /**< [ 11:  8](RO/H) Software version number. */
        uint32_t dsp_type              : 4;  /**< [  7:  4](RO/H) DSP type depending on [VENDOR].

                                                                 When [VENDOR] == 0x0:
                                                                 0x0 = MBP.
                                                                 0x1 = LBP.
                                                                 0x2 = SSP.
                                                                 0x3-0xF = Reserved. */
        uint32_t vendor                : 4;  /**< [  3:  0](RO/H) DSP vendor:
                                                                 0x0 = Tensilica.
                                                                 0x1-0xF = Reserved. */
#else /* Word 0 - Little Endian */
        uint32_t vendor                : 4;  /**< [  3:  0](RO/H) DSP vendor:
                                                                 0x0 = Tensilica.
                                                                 0x1-0xF = Reserved. */
        uint32_t dsp_type              : 4;  /**< [  7:  4](RO/H) DSP type depending on [VENDOR].

                                                                 When [VENDOR] == 0x0:
                                                                 0x0 = MBP.
                                                                 0x1 = LBP.
                                                                 0x2 = SSP.
                                                                 0x3-0xF = Reserved. */
        uint32_t sw_version            : 4;  /**< [ 11:  8](RO/H) Software version number. */
        uint32_t dsp_version           : 20; /**< [ 31: 12](RO/H) DSP version number. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_dsp_fyi_s cn10; */
    /* struct cavm_mdabx_dsp_fyi_s cnf10ka; */
    struct cavm_mdabx_dsp_fyi_cnf10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t dsp_version           : 20; /**< [ 31: 12](RO/H) DSP version number. */
        uint32_t sw_version            : 4;  /**< [ 11:  8](RO/H) Software version number. */
        uint32_t dsp_type              : 4;  /**< [  7:  4](RO/H) DSP type depending on [VENDOR].

                                                                 When [VENDOR] == 0x1:
                                                                 0x0 = XC4500.
                                                                 0x1-0xF = Reserved.

                                                                 When [VENDOR] == 0x2:
                                                                 0x0 = MASI.
                                                                 0x1-0xF = Reserved. */
        uint32_t vendor                : 4;  /**< [  3:  0](RO/H) DSP vendor:
                                                                 0x0 = Reserved.
                                                                 0x1 = CEVA.
                                                                 0x2 = Nokia.
                                                                 0x3-0xF = Reserved. */
#else /* Word 0 - Little Endian */
        uint32_t vendor                : 4;  /**< [  3:  0](RO/H) DSP vendor:
                                                                 0x0 = Reserved.
                                                                 0x1 = CEVA.
                                                                 0x2 = Nokia.
                                                                 0x3-0xF = Reserved. */
        uint32_t dsp_type              : 4;  /**< [  7:  4](RO/H) DSP type depending on [VENDOR].

                                                                 When [VENDOR] == 0x1:
                                                                 0x0 = XC4500.
                                                                 0x1-0xF = Reserved.

                                                                 When [VENDOR] == 0x2:
                                                                 0x0 = MASI.
                                                                 0x1-0xF = Reserved. */
        uint32_t sw_version            : 4;  /**< [ 11:  8](RO/H) Software version number. */
        uint32_t dsp_version           : 20; /**< [ 31: 12](RO/H) DSP version number. */
#endif /* Word 0 - End */
    } cnf10kb;
};
typedef union cavm_mdabx_dsp_fyi cavm_mdabx_dsp_fyi_t;

static inline uint64_t CAVM_MDABX_DSP_FYI(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_DSP_FYI(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008f00ll + 0x80000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e044008f00ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_DSP_FYI", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_DSP_FYI(a) cavm_mdabx_dsp_fyi_t
#define bustype_CAVM_MDABX_DSP_FYI(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_DSP_FYI(a) "MDABX_DSP_FYI"
#define device_bar_CAVM_MDABX_DSP_FYI(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_DSP_FYI(a) (a)
#define arguments_CAVM_MDABX_DSP_FYI(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_dspintr_bar
 *
 * MDAB DSP Internal BAR Register
 * This register defines the base address for RSL access to DSP internal memories.
 */
union cavm_mdabx_dspintr_bar
{
    uint32_t u;
    struct cavm_mdabx_dspintr_bar_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rsl_acc_bar           : 20; /**< [ 31: 12](R/W) Base address for RSL access to internal memory space of a DSP. The window size is 256KB (fixed).
                                                                 Lower boundary is {RSL_ACC_BAR,12'h0}, upper boundary  RSL_ACC_BAR+18'h3FFFF. */
        uint32_t reserved_0_11         : 12;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_11         : 12;
        uint32_t rsl_acc_bar           : 20; /**< [ 31: 12](R/W) Base address for RSL access to internal memory space of a DSP. The window size is 256KB (fixed).
                                                                 Lower boundary is {RSL_ACC_BAR,12'h0}, upper boundary  RSL_ACC_BAR+18'h3FFFF. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_dspintr_bar_s cn; */
};
typedef union cavm_mdabx_dspintr_bar cavm_mdabx_dspintr_bar_t;

static inline uint64_t CAVM_MDABX_DSPINTR_BAR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_DSPINTR_BAR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008800ll + 0x80000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e044008800ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_DSPINTR_BAR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_DSPINTR_BAR(a) cavm_mdabx_dspintr_bar_t
#define bustype_CAVM_MDABX_DSPINTR_BAR(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_DSPINTR_BAR(a) "MDABX_DSPINTR_BAR"
#define device_bar_CAVM_MDABX_DSPINTR_BAR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_DSPINTR_BAR(a) (a)
#define arguments_CAVM_MDABX_DSPINTR_BAR(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_edap_sts
 *
 * MDAB EDAP Status Register
 * Status of the EDAP interface.
 */
union cavm_mdabx_edap_sts
{
    uint32_t u;
    struct cavm_mdabx_edap_sts_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_15_31        : 17;
        uint32_t edap_w_rsp_pend       : 1;  /**< [ 14: 14](RO/H) EDAP write channel request completion pending. */
        uint32_t edap_r_rsp_pend       : 1;  /**< [ 13: 13](RO/H) EDAP read channel request completion pending. */
        uint32_t edap_w_req_cnt        : 5;  /**< [ 12:  8](RO/H) EDAP write channel outstanding request count. */
        uint32_t edap_r_req_cnt        : 6;  /**< [  7:  2](RO/H) EDAP read channel outstanding request count. */
        uint32_t edap_w_fifo_bp        : 1;  /**< [  1:  1](RO/H) EDAP write channel FIFO back pressure status. */
        uint32_t edap_r_fifo_bp        : 1;  /**< [  0:  0](RO/H) EDAP read channel FIFO back pressure status. */
#else /* Word 0 - Little Endian */
        uint32_t edap_r_fifo_bp        : 1;  /**< [  0:  0](RO/H) EDAP read channel FIFO back pressure status. */
        uint32_t edap_w_fifo_bp        : 1;  /**< [  1:  1](RO/H) EDAP write channel FIFO back pressure status. */
        uint32_t edap_r_req_cnt        : 6;  /**< [  7:  2](RO/H) EDAP read channel outstanding request count. */
        uint32_t edap_w_req_cnt        : 5;  /**< [ 12:  8](RO/H) EDAP write channel outstanding request count. */
        uint32_t edap_r_rsp_pend       : 1;  /**< [ 13: 13](RO/H) EDAP read channel request completion pending. */
        uint32_t edap_w_rsp_pend       : 1;  /**< [ 14: 14](RO/H) EDAP write channel request completion pending. */
        uint32_t reserved_15_31        : 17;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_edap_sts_s cn; */
};
typedef union cavm_mdabx_edap_sts cavm_mdabx_edap_sts_t;

static inline uint64_t CAVM_MDABX_EDAP_STS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_EDAP_STS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008be0ll + 0x80000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e044008be0ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_EDAP_STS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_EDAP_STS(a) cavm_mdabx_edap_sts_t
#define bustype_CAVM_MDABX_EDAP_STS(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_EDAP_STS(a) "MDABX_EDAP_STS"
#define device_bar_CAVM_MDABX_EDAP_STS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_EDAP_STS(a) (a)
#define arguments_CAVM_MDABX_EDAP_STS(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_err_int_ena_w1c
 *
 * MDAB Error Cause Interrupt Enable Clear Register
 * This register is used to Clear MDAB error interrupt enable for the MDAB()_ERR_INT_SUM bits.
 */
union cavm_mdabx_err_int_ena_w1c
{
    uint32_t u;
    struct cavm_mdabx_err_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_18_31        : 14;
        uint32_t filter_err            : 1;  /**< [ 17: 17](R/W1C/H) FDEQ filter error. */
        uint32_t coprocessor_err       : 1;  /**< [ 16: 16](R/W1C/H) LFSR co-processor error. */
        uint32_t reserved_9_15         : 7;
        uint32_t dsp_gvi               : 1;  /**< [  8:  8](R/W1C/H) General violation error. */
        uint32_t dac_err               : 1;  /**< [  7:  7](R/W1C/H) DAC errors. */
        uint32_t dac_ipb_err           : 1;  /**< [  6:  6](R/W1C/H) Instruction Prefetch Buffer Error. */
        uint32_t dac_edap_err          : 1;  /**< [  5:  5](R/W1C/H) DSP complex slave port error. */
        uint32_t dac_epdp_err          : 1;  /**< [  4:  4](R/W1C/H) DSP complex iFetch master port errors. */
        uint32_t dac_edp_err           : 1;  /**< [  3:  3](R/W1C/H) DAC EDP AXI master port errors. */
        uint32_t dsp_dma_err           : 1;  /**< [  2:  2](R/W1C/H) Reserved. */
        uint32_t dsp_codeviol_err      : 1;  /**< [  1:  1](R/W1C/H) DSP code violation/fatal error. */
        uint32_t dsp_ecc_err           : 1;  /**< [  0:  0](R/W1C/H) DSP iCache ECC error on data RAM. */
#else /* Word 0 - Little Endian */
        uint32_t dsp_ecc_err           : 1;  /**< [  0:  0](R/W1C/H) DSP iCache ECC error on data RAM. */
        uint32_t dsp_codeviol_err      : 1;  /**< [  1:  1](R/W1C/H) DSP code violation/fatal error. */
        uint32_t dsp_dma_err           : 1;  /**< [  2:  2](R/W1C/H) Reserved. */
        uint32_t dac_edp_err           : 1;  /**< [  3:  3](R/W1C/H) DAC EDP AXI master port errors. */
        uint32_t dac_epdp_err          : 1;  /**< [  4:  4](R/W1C/H) DSP complex iFetch master port errors. */
        uint32_t dac_edap_err          : 1;  /**< [  5:  5](R/W1C/H) DSP complex slave port error. */
        uint32_t dac_ipb_err           : 1;  /**< [  6:  6](R/W1C/H) Instruction Prefetch Buffer Error. */
        uint32_t dac_err               : 1;  /**< [  7:  7](R/W1C/H) DAC errors. */
        uint32_t dsp_gvi               : 1;  /**< [  8:  8](R/W1C/H) General violation error. */
        uint32_t reserved_9_15         : 7;
        uint32_t coprocessor_err       : 1;  /**< [ 16: 16](R/W1C/H) LFSR co-processor error. */
        uint32_t filter_err            : 1;  /**< [ 17: 17](R/W1C/H) FDEQ filter error. */
        uint32_t reserved_18_31        : 14;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_err_int_ena_w1c_s cn10; */
    struct cavm_mdabx_err_int_ena_w1c_cnf10ka
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_18_31        : 14;
        uint32_t filter_err            : 1;  /**< [ 17: 17](R/W1C/H) FDEQ filter error. */
        uint32_t coprocessor_err       : 1;  /**< [ 16: 16](R/W1C/H) LFSR co-processor error. */
        uint32_t reserved_8_15         : 8;
        uint32_t dac_err               : 1;  /**< [  7:  7](R/W1C/H) DAC errors. */
        uint32_t dac_ipb_err           : 1;  /**< [  6:  6](R/W1C/H) Instruction Prefetch Buffer Error. */
        uint32_t dac_edap_err          : 1;  /**< [  5:  5](R/W1C/H) DSP complex slave port error. */
        uint32_t dac_epdp_err          : 1;  /**< [  4:  4](R/W1C/H) DSP complex iFetch master port errors. */
        uint32_t dac_edp_err           : 1;  /**< [  3:  3](R/W1C/H) DAC EDP AXI master port errors. */
        uint32_t dsp_dma_err           : 1;  /**< [  2:  2](R/W1C/H) Reserved. */
        uint32_t dsp_codeviol_err      : 1;  /**< [  1:  1](R/W1C/H) DSP code violation/fatal error. */
        uint32_t dsp_ecc_err           : 1;  /**< [  0:  0](R/W1C/H) DSP iCache ECC error on data RAM. */
#else /* Word 0 - Little Endian */
        uint32_t dsp_ecc_err           : 1;  /**< [  0:  0](R/W1C/H) DSP iCache ECC error on data RAM. */
        uint32_t dsp_codeviol_err      : 1;  /**< [  1:  1](R/W1C/H) DSP code violation/fatal error. */
        uint32_t dsp_dma_err           : 1;  /**< [  2:  2](R/W1C/H) Reserved. */
        uint32_t dac_edp_err           : 1;  /**< [  3:  3](R/W1C/H) DAC EDP AXI master port errors. */
        uint32_t dac_epdp_err          : 1;  /**< [  4:  4](R/W1C/H) DSP complex iFetch master port errors. */
        uint32_t dac_edap_err          : 1;  /**< [  5:  5](R/W1C/H) DSP complex slave port error. */
        uint32_t dac_ipb_err           : 1;  /**< [  6:  6](R/W1C/H) Instruction Prefetch Buffer Error. */
        uint32_t dac_err               : 1;  /**< [  7:  7](R/W1C/H) DAC errors. */
        uint32_t reserved_8_15         : 8;
        uint32_t coprocessor_err       : 1;  /**< [ 16: 16](R/W1C/H) LFSR co-processor error. */
        uint32_t filter_err            : 1;  /**< [ 17: 17](R/W1C/H) FDEQ filter error. */
        uint32_t reserved_18_31        : 14;
#endif /* Word 0 - End */
    } cnf10ka;
    struct cavm_mdabx_err_int_ena_w1c_cnf10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_18_31        : 14;
        uint32_t filter_err            : 1;  /**< [ 17: 17](R/W1C/H) Reserved. */
        uint32_t coprocessor_err       : 1;  /**< [ 16: 16](R/W1C/H) Reserved. */
        uint32_t reserved_9_15         : 7;
        uint32_t dsp_gvi               : 1;  /**< [  8:  8](R/W1C/H) General violation error. */
        uint32_t dac_err               : 1;  /**< [  7:  7](R/W1C/H) DAC errors. */
        uint32_t dac_ipb_err           : 1;  /**< [  6:  6](R/W1C/H) Instruction Prefetch Buffer Error. */
        uint32_t dac_edap_err          : 1;  /**< [  5:  5](R/W1C/H) DSP complex slave port error. */
        uint32_t dac_epdp_err          : 1;  /**< [  4:  4](R/W1C/H) DSP complex iFetch master port errors. */
        uint32_t dac_edp_err           : 1;  /**< [  3:  3](R/W1C/H) DAC EDP AXI master port errors. */
        uint32_t dsp_dma_err           : 1;  /**< [  2:  2](R/W1C/H) DAC DMA errors. */
        uint32_t dsp_codeviol_err      : 1;  /**< [  1:  1](R/W1C/H) DSP code violation/fatal error. */
        uint32_t dsp_ecc_err           : 1;  /**< [  0:  0](R/W1C/H) DSP iCache ECC error on data RAM. */
#else /* Word 0 - Little Endian */
        uint32_t dsp_ecc_err           : 1;  /**< [  0:  0](R/W1C/H) DSP iCache ECC error on data RAM. */
        uint32_t dsp_codeviol_err      : 1;  /**< [  1:  1](R/W1C/H) DSP code violation/fatal error. */
        uint32_t dsp_dma_err           : 1;  /**< [  2:  2](R/W1C/H) DAC DMA errors. */
        uint32_t dac_edp_err           : 1;  /**< [  3:  3](R/W1C/H) DAC EDP AXI master port errors. */
        uint32_t dac_epdp_err          : 1;  /**< [  4:  4](R/W1C/H) DSP complex iFetch master port errors. */
        uint32_t dac_edap_err          : 1;  /**< [  5:  5](R/W1C/H) DSP complex slave port error. */
        uint32_t dac_ipb_err           : 1;  /**< [  6:  6](R/W1C/H) Instruction Prefetch Buffer Error. */
        uint32_t dac_err               : 1;  /**< [  7:  7](R/W1C/H) DAC errors. */
        uint32_t dsp_gvi               : 1;  /**< [  8:  8](R/W1C/H) General violation error. */
        uint32_t reserved_9_15         : 7;
        uint32_t coprocessor_err       : 1;  /**< [ 16: 16](R/W1C/H) Reserved. */
        uint32_t filter_err            : 1;  /**< [ 17: 17](R/W1C/H) Reserved. */
        uint32_t reserved_18_31        : 14;
#endif /* Word 0 - End */
    } cnf10kb;
};
typedef union cavm_mdabx_err_int_ena_w1c cavm_mdabx_err_int_ena_w1c_t;

static inline uint64_t CAVM_MDABX_ERR_INT_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_ERR_INT_ENA_W1C(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008a90ll + 0x80000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e044008a90ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_ERR_INT_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_ERR_INT_ENA_W1C(a) cavm_mdabx_err_int_ena_w1c_t
#define bustype_CAVM_MDABX_ERR_INT_ENA_W1C(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_ERR_INT_ENA_W1C(a) "MDABX_ERR_INT_ENA_W1C"
#define device_bar_CAVM_MDABX_ERR_INT_ENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_ERR_INT_ENA_W1C(a) (a)
#define arguments_CAVM_MDABX_ERR_INT_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_err_int_ena_w1s
 *
 * MDAB Error Cause Interrupt Enable Set Register
 * This register is used to set MDAB error interrupt enable for the MDAB()_ERR_INT_SUM bits.
 */
union cavm_mdabx_err_int_ena_w1s
{
    uint32_t u;
    struct cavm_mdabx_err_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_18_31        : 14;
        uint32_t filter_err            : 1;  /**< [ 17: 17](R/W1S/H) FDEQ filter error. */
        uint32_t coprocessor_err       : 1;  /**< [ 16: 16](R/W1S/H) LFSR co-processor error. */
        uint32_t reserved_9_15         : 7;
        uint32_t dsp_gvi               : 1;  /**< [  8:  8](R/W1S/H) General violation error. */
        uint32_t dac_err               : 1;  /**< [  7:  7](R/W1S/H) DAC errors. */
        uint32_t dac_ipb_err           : 1;  /**< [  6:  6](R/W1S/H) Instruction prefetch buffer error. */
        uint32_t dac_edap_err          : 1;  /**< [  5:  5](R/W1S/H) DSP complex slave port error. */
        uint32_t dac_epdp_err          : 1;  /**< [  4:  4](R/W1S/H) DSP complex iFetch master port errors. */
        uint32_t dac_edp_err           : 1;  /**< [  3:  3](R/W1S/H) DSP complex LD/ST master port errors. */
        uint32_t dsp_dma_err           : 1;  /**< [  2:  2](R/W1S/H) Reserved. */
        uint32_t dsp_codeviol_err      : 1;  /**< [  1:  1](R/W1S/H) DSP code violation/fatal error. */
        uint32_t dsp_ecc_err           : 1;  /**< [  0:  0](R/W1S/H) DSP iCache ECC error on data RAM. */
#else /* Word 0 - Little Endian */
        uint32_t dsp_ecc_err           : 1;  /**< [  0:  0](R/W1S/H) DSP iCache ECC error on data RAM. */
        uint32_t dsp_codeviol_err      : 1;  /**< [  1:  1](R/W1S/H) DSP code violation/fatal error. */
        uint32_t dsp_dma_err           : 1;  /**< [  2:  2](R/W1S/H) Reserved. */
        uint32_t dac_edp_err           : 1;  /**< [  3:  3](R/W1S/H) DSP complex LD/ST master port errors. */
        uint32_t dac_epdp_err          : 1;  /**< [  4:  4](R/W1S/H) DSP complex iFetch master port errors. */
        uint32_t dac_edap_err          : 1;  /**< [  5:  5](R/W1S/H) DSP complex slave port error. */
        uint32_t dac_ipb_err           : 1;  /**< [  6:  6](R/W1S/H) Instruction prefetch buffer error. */
        uint32_t dac_err               : 1;  /**< [  7:  7](R/W1S/H) DAC errors. */
        uint32_t dsp_gvi               : 1;  /**< [  8:  8](R/W1S/H) General violation error. */
        uint32_t reserved_9_15         : 7;
        uint32_t coprocessor_err       : 1;  /**< [ 16: 16](R/W1S/H) LFSR co-processor error. */
        uint32_t filter_err            : 1;  /**< [ 17: 17](R/W1S/H) FDEQ filter error. */
        uint32_t reserved_18_31        : 14;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_err_int_ena_w1s_s cn10; */
    struct cavm_mdabx_err_int_ena_w1s_cnf10ka
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_18_31        : 14;
        uint32_t filter_err            : 1;  /**< [ 17: 17](R/W1S/H) FDEQ filter error. */
        uint32_t coprocessor_err       : 1;  /**< [ 16: 16](R/W1S/H) LFSR co-processor error. */
        uint32_t reserved_8_15         : 8;
        uint32_t dac_err               : 1;  /**< [  7:  7](R/W1S/H) DAC errors. */
        uint32_t dac_ipb_err           : 1;  /**< [  6:  6](R/W1S/H) Instruction prefetch buffer error. */
        uint32_t dac_edap_err          : 1;  /**< [  5:  5](R/W1S/H) DSP complex slave port error. */
        uint32_t dac_epdp_err          : 1;  /**< [  4:  4](R/W1S/H) DSP complex iFetch master port errors. */
        uint32_t dac_edp_err           : 1;  /**< [  3:  3](R/W1S/H) DSP complex LD/ST master port errors. */
        uint32_t dsp_dma_err           : 1;  /**< [  2:  2](R/W1S/H) Reserved. */
        uint32_t dsp_codeviol_err      : 1;  /**< [  1:  1](R/W1S/H) DSP code violation/fatal error. */
        uint32_t dsp_ecc_err           : 1;  /**< [  0:  0](R/W1S/H) DSP iCache ECC error on data RAM. */
#else /* Word 0 - Little Endian */
        uint32_t dsp_ecc_err           : 1;  /**< [  0:  0](R/W1S/H) DSP iCache ECC error on data RAM. */
        uint32_t dsp_codeviol_err      : 1;  /**< [  1:  1](R/W1S/H) DSP code violation/fatal error. */
        uint32_t dsp_dma_err           : 1;  /**< [  2:  2](R/W1S/H) Reserved. */
        uint32_t dac_edp_err           : 1;  /**< [  3:  3](R/W1S/H) DSP complex LD/ST master port errors. */
        uint32_t dac_epdp_err          : 1;  /**< [  4:  4](R/W1S/H) DSP complex iFetch master port errors. */
        uint32_t dac_edap_err          : 1;  /**< [  5:  5](R/W1S/H) DSP complex slave port error. */
        uint32_t dac_ipb_err           : 1;  /**< [  6:  6](R/W1S/H) Instruction prefetch buffer error. */
        uint32_t dac_err               : 1;  /**< [  7:  7](R/W1S/H) DAC errors. */
        uint32_t reserved_8_15         : 8;
        uint32_t coprocessor_err       : 1;  /**< [ 16: 16](R/W1S/H) LFSR co-processor error. */
        uint32_t filter_err            : 1;  /**< [ 17: 17](R/W1S/H) FDEQ filter error. */
        uint32_t reserved_18_31        : 14;
#endif /* Word 0 - End */
    } cnf10ka;
    struct cavm_mdabx_err_int_ena_w1s_cnf10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_18_31        : 14;
        uint32_t filter_err            : 1;  /**< [ 17: 17](R/W1S/H) Reserved. */
        uint32_t coprocessor_err       : 1;  /**< [ 16: 16](R/W1S/H) Reserved. */
        uint32_t reserved_9_15         : 7;
        uint32_t dsp_gvi               : 1;  /**< [  8:  8](R/W1S/H) General violation error. */
        uint32_t dac_err               : 1;  /**< [  7:  7](R/W1S/H) DAC errors. */
        uint32_t dac_ipb_err           : 1;  /**< [  6:  6](R/W1S/H) Instruction prefetch buffer error. */
        uint32_t dac_edap_err          : 1;  /**< [  5:  5](R/W1S/H) DSP complex slave port error. */
        uint32_t dac_epdp_err          : 1;  /**< [  4:  4](R/W1S/H) DSP complex iFetch master port errors. */
        uint32_t dac_edp_err           : 1;  /**< [  3:  3](R/W1S/H) DSP complex LD/ST master port errors. */
        uint32_t dsp_dma_err           : 1;  /**< [  2:  2](R/W1S/H) DAC DMA errors. */
        uint32_t dsp_codeviol_err      : 1;  /**< [  1:  1](R/W1S/H) DSP code violation/fatal error. */
        uint32_t dsp_ecc_err           : 1;  /**< [  0:  0](R/W1S/H) DSP iCache ECC error on data RAM. */
#else /* Word 0 - Little Endian */
        uint32_t dsp_ecc_err           : 1;  /**< [  0:  0](R/W1S/H) DSP iCache ECC error on data RAM. */
        uint32_t dsp_codeviol_err      : 1;  /**< [  1:  1](R/W1S/H) DSP code violation/fatal error. */
        uint32_t dsp_dma_err           : 1;  /**< [  2:  2](R/W1S/H) DAC DMA errors. */
        uint32_t dac_edp_err           : 1;  /**< [  3:  3](R/W1S/H) DSP complex LD/ST master port errors. */
        uint32_t dac_epdp_err          : 1;  /**< [  4:  4](R/W1S/H) DSP complex iFetch master port errors. */
        uint32_t dac_edap_err          : 1;  /**< [  5:  5](R/W1S/H) DSP complex slave port error. */
        uint32_t dac_ipb_err           : 1;  /**< [  6:  6](R/W1S/H) Instruction prefetch buffer error. */
        uint32_t dac_err               : 1;  /**< [  7:  7](R/W1S/H) DAC errors. */
        uint32_t dsp_gvi               : 1;  /**< [  8:  8](R/W1S/H) General violation error. */
        uint32_t reserved_9_15         : 7;
        uint32_t coprocessor_err       : 1;  /**< [ 16: 16](R/W1S/H) Reserved. */
        uint32_t filter_err            : 1;  /**< [ 17: 17](R/W1S/H) Reserved. */
        uint32_t reserved_18_31        : 14;
#endif /* Word 0 - End */
    } cnf10kb;
};
typedef union cavm_mdabx_err_int_ena_w1s cavm_mdabx_err_int_ena_w1s_t;

static inline uint64_t CAVM_MDABX_ERR_INT_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_ERR_INT_ENA_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008aa0ll + 0x80000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e044008aa0ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_ERR_INT_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_ERR_INT_ENA_W1S(a) cavm_mdabx_err_int_ena_w1s_t
#define bustype_CAVM_MDABX_ERR_INT_ENA_W1S(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_ERR_INT_ENA_W1S(a) "MDABX_ERR_INT_ENA_W1S"
#define device_bar_CAVM_MDABX_ERR_INT_ENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_ERR_INT_ENA_W1S(a) (a)
#define arguments_CAVM_MDABX_ERR_INT_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_err_int_int0_ena
 *
 * MDAB Error Cause Interrupt INT0 Enable Register
 * This register is used to Enable Reporting MDAB Secondary interrupts  To DSP INT0.
 */
union cavm_mdabx_err_int_int0_ena
{
    uint32_t u;
    struct cavm_mdabx_err_int_int0_ena_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_18_31        : 14;
        uint32_t filter_err            : 1;  /**< [ 17: 17](R/W) Reserved. */
        uint32_t coprocessor_err       : 1;  /**< [ 16: 16](R/W) Reserved. */
        uint32_t reserved_9_15         : 7;
        uint32_t dsp_gvi               : 1;  /**< [  8:  8](R/W) General violation error. */
        uint32_t dac_err               : 1;  /**< [  7:  7](R/W) DAC errors. */
        uint32_t dac_ipb_err           : 1;  /**< [  6:  6](R/W) Instruction prefetch buffer error. */
        uint32_t dac_edap_err          : 1;  /**< [  5:  5](R/W) DSP complex slave port error. */
        uint32_t dac_epdp_err          : 1;  /**< [  4:  4](R/W) DSP complex iFetch master port errors. */
        uint32_t dac_edp_err           : 1;  /**< [  3:  3](R/W) DSP complex LD/ST master port errors. */
        uint32_t dsp_dma_err           : 1;  /**< [  2:  2](R/W) DSP Master DMA errors. */
        uint32_t dsp_codeviol_err      : 1;  /**< [  1:  1](R/W) DSP code violation/fatal error. */
        uint32_t dsp_ecc_err           : 1;  /**< [  0:  0](R/W) DSP iCache ECC error on data RAM. */
#else /* Word 0 - Little Endian */
        uint32_t dsp_ecc_err           : 1;  /**< [  0:  0](R/W) DSP iCache ECC error on data RAM. */
        uint32_t dsp_codeviol_err      : 1;  /**< [  1:  1](R/W) DSP code violation/fatal error. */
        uint32_t dsp_dma_err           : 1;  /**< [  2:  2](R/W) DSP Master DMA errors. */
        uint32_t dac_edp_err           : 1;  /**< [  3:  3](R/W) DSP complex LD/ST master port errors. */
        uint32_t dac_epdp_err          : 1;  /**< [  4:  4](R/W) DSP complex iFetch master port errors. */
        uint32_t dac_edap_err          : 1;  /**< [  5:  5](R/W) DSP complex slave port error. */
        uint32_t dac_ipb_err           : 1;  /**< [  6:  6](R/W) Instruction prefetch buffer error. */
        uint32_t dac_err               : 1;  /**< [  7:  7](R/W) DAC errors. */
        uint32_t dsp_gvi               : 1;  /**< [  8:  8](R/W) General violation error. */
        uint32_t reserved_9_15         : 7;
        uint32_t coprocessor_err       : 1;  /**< [ 16: 16](R/W) Reserved. */
        uint32_t filter_err            : 1;  /**< [ 17: 17](R/W) Reserved. */
        uint32_t reserved_18_31        : 14;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_err_int_int0_ena_s cn; */
};
typedef union cavm_mdabx_err_int_int0_ena cavm_mdabx_err_int_int0_ena_t;

static inline uint64_t CAVM_MDABX_ERR_INT_INT0_ENA(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_ERR_INT_INT0_ENA(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e044008ab0ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_ERR_INT_INT0_ENA", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_ERR_INT_INT0_ENA(a) cavm_mdabx_err_int_int0_ena_t
#define bustype_CAVM_MDABX_ERR_INT_INT0_ENA(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_ERR_INT_INT0_ENA(a) "MDABX_ERR_INT_INT0_ENA"
#define device_bar_CAVM_MDABX_ERR_INT_INT0_ENA(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_ERR_INT_INT0_ENA(a) (a)
#define arguments_CAVM_MDABX_ERR_INT_INT0_ENA(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_err_int_sum
 *
 * MDAB Error Cause Interrupt Summary Register
 * This register reports the error interrupt sources status for the MDAB.
 * Software clears individual interrupts by writing one to the corresponding bit.
 */
union cavm_mdabx_err_int_sum
{
    uint32_t u;
    struct cavm_mdabx_err_int_sum_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_18_31        : 14;
        uint32_t filter_err            : 1;  /**< [ 17: 17](R/W1C/H) FDEQ filter error. */
        uint32_t coprocessor_err       : 1;  /**< [ 16: 16](R/W1C/H) LFSR co-processor error. */
        uint32_t reserved_9_15         : 7;
        uint32_t dsp_gvi               : 1;  /**< [  8:  8](R/W1C/H) General violation error. */
        uint32_t dac_err               : 1;  /**< [  7:  7](R/W1C/H) DAC errors. */
        uint32_t dac_ipb_err           : 1;  /**< [  6:  6](R/W1C/H) Instruction Prefetch Buffer Error. */
        uint32_t dac_edap_err          : 1;  /**< [  5:  5](R/W1C/H) DSP complex slave port error. */
        uint32_t dac_epdp_err          : 1;  /**< [  4:  4](R/W1C/H) DSP complex iFetch master port errors. */
        uint32_t dac_edp_err           : 1;  /**< [  3:  3](R/W1C/H) DSP complex LD/ST master port errors. */
        uint32_t dsp_dma_err           : 1;  /**< [  2:  2](R/W1C/H) Reserved. */
        uint32_t dsp_codeviol_err      : 1;  /**< [  1:  1](R/W1C/H) DSP code violation/fatal error. */
        uint32_t dsp_ecc_err           : 1;  /**< [  0:  0](R/W1C/H) DSP iCache ECC error on data RAM. */
#else /* Word 0 - Little Endian */
        uint32_t dsp_ecc_err           : 1;  /**< [  0:  0](R/W1C/H) DSP iCache ECC error on data RAM. */
        uint32_t dsp_codeviol_err      : 1;  /**< [  1:  1](R/W1C/H) DSP code violation/fatal error. */
        uint32_t dsp_dma_err           : 1;  /**< [  2:  2](R/W1C/H) Reserved. */
        uint32_t dac_edp_err           : 1;  /**< [  3:  3](R/W1C/H) DSP complex LD/ST master port errors. */
        uint32_t dac_epdp_err          : 1;  /**< [  4:  4](R/W1C/H) DSP complex iFetch master port errors. */
        uint32_t dac_edap_err          : 1;  /**< [  5:  5](R/W1C/H) DSP complex slave port error. */
        uint32_t dac_ipb_err           : 1;  /**< [  6:  6](R/W1C/H) Instruction Prefetch Buffer Error. */
        uint32_t dac_err               : 1;  /**< [  7:  7](R/W1C/H) DAC errors. */
        uint32_t dsp_gvi               : 1;  /**< [  8:  8](R/W1C/H) General violation error. */
        uint32_t reserved_9_15         : 7;
        uint32_t coprocessor_err       : 1;  /**< [ 16: 16](R/W1C/H) LFSR co-processor error. */
        uint32_t filter_err            : 1;  /**< [ 17: 17](R/W1C/H) FDEQ filter error. */
        uint32_t reserved_18_31        : 14;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_err_int_sum_s cn10; */
    struct cavm_mdabx_err_int_sum_cnf10ka
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_18_31        : 14;
        uint32_t filter_err            : 1;  /**< [ 17: 17](R/W1C/H) FDEQ filter error. */
        uint32_t coprocessor_err       : 1;  /**< [ 16: 16](R/W1C/H) LFSR co-processor error. */
        uint32_t reserved_8_15         : 8;
        uint32_t dac_err               : 1;  /**< [  7:  7](R/W1C/H) DAC errors. */
        uint32_t dac_ipb_err           : 1;  /**< [  6:  6](R/W1C/H) Instruction Prefetch Buffer Error. */
        uint32_t dac_edap_err          : 1;  /**< [  5:  5](R/W1C/H) DSP complex slave port error. */
        uint32_t dac_epdp_err          : 1;  /**< [  4:  4](R/W1C/H) DSP complex iFetch master port errors. */
        uint32_t dac_edp_err           : 1;  /**< [  3:  3](R/W1C/H) DSP complex LD/ST master port errors. */
        uint32_t dsp_dma_err           : 1;  /**< [  2:  2](R/W1C/H) Reserved. */
        uint32_t dsp_codeviol_err      : 1;  /**< [  1:  1](R/W1C/H) DSP code violation/fatal error. */
        uint32_t dsp_ecc_err           : 1;  /**< [  0:  0](R/W1C/H) DSP iCache ECC error on data RAM. */
#else /* Word 0 - Little Endian */
        uint32_t dsp_ecc_err           : 1;  /**< [  0:  0](R/W1C/H) DSP iCache ECC error on data RAM. */
        uint32_t dsp_codeviol_err      : 1;  /**< [  1:  1](R/W1C/H) DSP code violation/fatal error. */
        uint32_t dsp_dma_err           : 1;  /**< [  2:  2](R/W1C/H) Reserved. */
        uint32_t dac_edp_err           : 1;  /**< [  3:  3](R/W1C/H) DSP complex LD/ST master port errors. */
        uint32_t dac_epdp_err          : 1;  /**< [  4:  4](R/W1C/H) DSP complex iFetch master port errors. */
        uint32_t dac_edap_err          : 1;  /**< [  5:  5](R/W1C/H) DSP complex slave port error. */
        uint32_t dac_ipb_err           : 1;  /**< [  6:  6](R/W1C/H) Instruction Prefetch Buffer Error. */
        uint32_t dac_err               : 1;  /**< [  7:  7](R/W1C/H) DAC errors. */
        uint32_t reserved_8_15         : 8;
        uint32_t coprocessor_err       : 1;  /**< [ 16: 16](R/W1C/H) LFSR co-processor error. */
        uint32_t filter_err            : 1;  /**< [ 17: 17](R/W1C/H) FDEQ filter error. */
        uint32_t reserved_18_31        : 14;
#endif /* Word 0 - End */
    } cnf10ka;
    struct cavm_mdabx_err_int_sum_cnf10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_18_31        : 14;
        uint32_t filter_err            : 1;  /**< [ 17: 17](R/W1C/H) Reserved. */
        uint32_t coprocessor_err       : 1;  /**< [ 16: 16](R/W1C/H) Reserved. */
        uint32_t reserved_9_15         : 7;
        uint32_t dsp_gvi               : 1;  /**< [  8:  8](R/W1C/H) General violation error. */
        uint32_t dac_err               : 1;  /**< [  7:  7](R/W1C/H) DAC errors. */
        uint32_t dac_ipb_err           : 1;  /**< [  6:  6](R/W1C/H) Instruction Prefetch Buffer Error. */
        uint32_t dac_edap_err          : 1;  /**< [  5:  5](R/W1C/H) DSP complex slave port error. */
        uint32_t dac_epdp_err          : 1;  /**< [  4:  4](R/W1C/H) DSP complex iFetch master port errors. */
        uint32_t dac_edp_err           : 1;  /**< [  3:  3](R/W1C/H) DSP complex LD/ST master port errors. */
        uint32_t dsp_dma_err           : 1;  /**< [  2:  2](R/W1C/H) DSP DMA errors. */
        uint32_t dsp_codeviol_err      : 1;  /**< [  1:  1](R/W1C/H) DSP code violation/fatal error. */
        uint32_t dsp_ecc_err           : 1;  /**< [  0:  0](R/W1C/H) DSP iCache ECC error on data RAM. */
#else /* Word 0 - Little Endian */
        uint32_t dsp_ecc_err           : 1;  /**< [  0:  0](R/W1C/H) DSP iCache ECC error on data RAM. */
        uint32_t dsp_codeviol_err      : 1;  /**< [  1:  1](R/W1C/H) DSP code violation/fatal error. */
        uint32_t dsp_dma_err           : 1;  /**< [  2:  2](R/W1C/H) DSP DMA errors. */
        uint32_t dac_edp_err           : 1;  /**< [  3:  3](R/W1C/H) DSP complex LD/ST master port errors. */
        uint32_t dac_epdp_err          : 1;  /**< [  4:  4](R/W1C/H) DSP complex iFetch master port errors. */
        uint32_t dac_edap_err          : 1;  /**< [  5:  5](R/W1C/H) DSP complex slave port error. */
        uint32_t dac_ipb_err           : 1;  /**< [  6:  6](R/W1C/H) Instruction Prefetch Buffer Error. */
        uint32_t dac_err               : 1;  /**< [  7:  7](R/W1C/H) DAC errors. */
        uint32_t dsp_gvi               : 1;  /**< [  8:  8](R/W1C/H) General violation error. */
        uint32_t reserved_9_15         : 7;
        uint32_t coprocessor_err       : 1;  /**< [ 16: 16](R/W1C/H) Reserved. */
        uint32_t filter_err            : 1;  /**< [ 17: 17](R/W1C/H) Reserved. */
        uint32_t reserved_18_31        : 14;
#endif /* Word 0 - End */
    } cnf10kb;
};
typedef union cavm_mdabx_err_int_sum cavm_mdabx_err_int_sum_t;

static inline uint64_t CAVM_MDABX_ERR_INT_SUM(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_ERR_INT_SUM(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008a70ll + 0x80000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e044008a70ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_ERR_INT_SUM", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_ERR_INT_SUM(a) cavm_mdabx_err_int_sum_t
#define bustype_CAVM_MDABX_ERR_INT_SUM(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_ERR_INT_SUM(a) "MDABX_ERR_INT_SUM"
#define device_bar_CAVM_MDABX_ERR_INT_SUM(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_ERR_INT_SUM(a) (a)
#define arguments_CAVM_MDABX_ERR_INT_SUM(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_err_int_sum_w1s
 *
 * MDAB Error Cause Interrupt Summary Set Register
 * This register is used to artificially set MDAB interrupts described in
 * MDAB()_ERR_INT_SUM (for software debug/test).
 */
union cavm_mdabx_err_int_sum_w1s
{
    uint32_t u;
    struct cavm_mdabx_err_int_sum_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_18_31        : 14;
        uint32_t filter_err            : 1;  /**< [ 17: 17](R/W1S/H) FDEQ filter error. */
        uint32_t coprocessor_err       : 1;  /**< [ 16: 16](R/W1S/H) LFSR co-processor error. */
        uint32_t reserved_9_15         : 7;
        uint32_t dsp_gvi               : 1;  /**< [  8:  8](R/W1S/H) General violation error. */
        uint32_t dac_err               : 1;  /**< [  7:  7](R/W1S/H) DAC errors. */
        uint32_t dac_ipb_err           : 1;  /**< [  6:  6](R/W1S/H) Instruction Prefetch Buffer Error. */
        uint32_t dac_edap_err          : 1;  /**< [  5:  5](R/W1S/H) DSP complex slave port error. */
        uint32_t dac_epdp_err          : 1;  /**< [  4:  4](R/W1S/H) DSP complex iFetch master port errors. */
        uint32_t dac_edp_err           : 1;  /**< [  3:  3](R/W1S/H) DSP complex LD/ST master port errors. */
        uint32_t dsp_dma_err           : 1;  /**< [  2:  2](R/W1S/H) Reserved. */
        uint32_t dsp_codeviol_err      : 1;  /**< [  1:  1](R/W1S/H) DSP code violation/fatal error. */
        uint32_t dsp_ecc_err           : 1;  /**< [  0:  0](R/W1S/H) DSP iCache ECC error on data RAM. */
#else /* Word 0 - Little Endian */
        uint32_t dsp_ecc_err           : 1;  /**< [  0:  0](R/W1S/H) DSP iCache ECC error on data RAM. */
        uint32_t dsp_codeviol_err      : 1;  /**< [  1:  1](R/W1S/H) DSP code violation/fatal error. */
        uint32_t dsp_dma_err           : 1;  /**< [  2:  2](R/W1S/H) Reserved. */
        uint32_t dac_edp_err           : 1;  /**< [  3:  3](R/W1S/H) DSP complex LD/ST master port errors. */
        uint32_t dac_epdp_err          : 1;  /**< [  4:  4](R/W1S/H) DSP complex iFetch master port errors. */
        uint32_t dac_edap_err          : 1;  /**< [  5:  5](R/W1S/H) DSP complex slave port error. */
        uint32_t dac_ipb_err           : 1;  /**< [  6:  6](R/W1S/H) Instruction Prefetch Buffer Error. */
        uint32_t dac_err               : 1;  /**< [  7:  7](R/W1S/H) DAC errors. */
        uint32_t dsp_gvi               : 1;  /**< [  8:  8](R/W1S/H) General violation error. */
        uint32_t reserved_9_15         : 7;
        uint32_t coprocessor_err       : 1;  /**< [ 16: 16](R/W1S/H) LFSR co-processor error. */
        uint32_t filter_err            : 1;  /**< [ 17: 17](R/W1S/H) FDEQ filter error. */
        uint32_t reserved_18_31        : 14;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_err_int_sum_w1s_s cn10; */
    struct cavm_mdabx_err_int_sum_w1s_cnf10ka
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_18_31        : 14;
        uint32_t filter_err            : 1;  /**< [ 17: 17](R/W1S/H) FDEQ filter error. */
        uint32_t coprocessor_err       : 1;  /**< [ 16: 16](R/W1S/H) LFSR co-processor error. */
        uint32_t reserved_8_15         : 8;
        uint32_t dac_err               : 1;  /**< [  7:  7](R/W1S/H) DAC errors. */
        uint32_t dac_ipb_err           : 1;  /**< [  6:  6](R/W1S/H) Instruction Prefetch Buffer Error. */
        uint32_t dac_edap_err          : 1;  /**< [  5:  5](R/W1S/H) DSP complex slave port error. */
        uint32_t dac_epdp_err          : 1;  /**< [  4:  4](R/W1S/H) DSP complex iFetch master port errors. */
        uint32_t dac_edp_err           : 1;  /**< [  3:  3](R/W1S/H) DSP complex LD/ST master port errors. */
        uint32_t dsp_dma_err           : 1;  /**< [  2:  2](R/W1S/H) Reserved. */
        uint32_t dsp_codeviol_err      : 1;  /**< [  1:  1](R/W1S/H) DSP code violation/fatal error. */
        uint32_t dsp_ecc_err           : 1;  /**< [  0:  0](R/W1S/H) DSP iCache ECC error on data RAM. */
#else /* Word 0 - Little Endian */
        uint32_t dsp_ecc_err           : 1;  /**< [  0:  0](R/W1S/H) DSP iCache ECC error on data RAM. */
        uint32_t dsp_codeviol_err      : 1;  /**< [  1:  1](R/W1S/H) DSP code violation/fatal error. */
        uint32_t dsp_dma_err           : 1;  /**< [  2:  2](R/W1S/H) Reserved. */
        uint32_t dac_edp_err           : 1;  /**< [  3:  3](R/W1S/H) DSP complex LD/ST master port errors. */
        uint32_t dac_epdp_err          : 1;  /**< [  4:  4](R/W1S/H) DSP complex iFetch master port errors. */
        uint32_t dac_edap_err          : 1;  /**< [  5:  5](R/W1S/H) DSP complex slave port error. */
        uint32_t dac_ipb_err           : 1;  /**< [  6:  6](R/W1S/H) Instruction Prefetch Buffer Error. */
        uint32_t dac_err               : 1;  /**< [  7:  7](R/W1S/H) DAC errors. */
        uint32_t reserved_8_15         : 8;
        uint32_t coprocessor_err       : 1;  /**< [ 16: 16](R/W1S/H) LFSR co-processor error. */
        uint32_t filter_err            : 1;  /**< [ 17: 17](R/W1S/H) FDEQ filter error. */
        uint32_t reserved_18_31        : 14;
#endif /* Word 0 - End */
    } cnf10ka;
    struct cavm_mdabx_err_int_sum_w1s_cnf10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_18_31        : 14;
        uint32_t filter_err            : 1;  /**< [ 17: 17](R/W1S/H) Reserved. */
        uint32_t coprocessor_err       : 1;  /**< [ 16: 16](R/W1S/H) Reserved. */
        uint32_t reserved_9_15         : 7;
        uint32_t dsp_gvi               : 1;  /**< [  8:  8](R/W1S/H) General violation error. */
        uint32_t dac_err               : 1;  /**< [  7:  7](R/W1S/H) DAC errors. */
        uint32_t dac_ipb_err           : 1;  /**< [  6:  6](R/W1S/H) Instruction Prefetch Buffer Error. */
        uint32_t dac_edap_err          : 1;  /**< [  5:  5](R/W1S/H) DSP complex slave port error. */
        uint32_t dac_epdp_err          : 1;  /**< [  4:  4](R/W1S/H) DSP complex iFetch master port errors. */
        uint32_t dac_edp_err           : 1;  /**< [  3:  3](R/W1S/H) DSP complex LD/ST master port errors. */
        uint32_t dsp_dma_err           : 1;  /**< [  2:  2](R/W1S/H) DAC DMA errors. */
        uint32_t dsp_codeviol_err      : 1;  /**< [  1:  1](R/W1S/H) DSP code violation/fatal error. */
        uint32_t dsp_ecc_err           : 1;  /**< [  0:  0](R/W1S/H) DSP iCache ECC error on data RAM. */
#else /* Word 0 - Little Endian */
        uint32_t dsp_ecc_err           : 1;  /**< [  0:  0](R/W1S/H) DSP iCache ECC error on data RAM. */
        uint32_t dsp_codeviol_err      : 1;  /**< [  1:  1](R/W1S/H) DSP code violation/fatal error. */
        uint32_t dsp_dma_err           : 1;  /**< [  2:  2](R/W1S/H) DAC DMA errors. */
        uint32_t dac_edp_err           : 1;  /**< [  3:  3](R/W1S/H) DSP complex LD/ST master port errors. */
        uint32_t dac_epdp_err          : 1;  /**< [  4:  4](R/W1S/H) DSP complex iFetch master port errors. */
        uint32_t dac_edap_err          : 1;  /**< [  5:  5](R/W1S/H) DSP complex slave port error. */
        uint32_t dac_ipb_err           : 1;  /**< [  6:  6](R/W1S/H) Instruction Prefetch Buffer Error. */
        uint32_t dac_err               : 1;  /**< [  7:  7](R/W1S/H) DAC errors. */
        uint32_t dsp_gvi               : 1;  /**< [  8:  8](R/W1S/H) General violation error. */
        uint32_t reserved_9_15         : 7;
        uint32_t coprocessor_err       : 1;  /**< [ 16: 16](R/W1S/H) Reserved. */
        uint32_t filter_err            : 1;  /**< [ 17: 17](R/W1S/H) Reserved. */
        uint32_t reserved_18_31        : 14;
#endif /* Word 0 - End */
    } cnf10kb;
};
typedef union cavm_mdabx_err_int_sum_w1s cavm_mdabx_err_int_sum_w1s_t;

static inline uint64_t CAVM_MDABX_ERR_INT_SUM_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_ERR_INT_SUM_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008a80ll + 0x80000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e044008a80ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_ERR_INT_SUM_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_ERR_INT_SUM_W1S(a) cavm_mdabx_err_int_sum_w1s_t
#define bustype_CAVM_MDABX_ERR_INT_SUM_W1S(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_ERR_INT_SUM_W1S(a) "MDABX_ERR_INT_SUM_W1S"
#define device_bar_CAVM_MDABX_ERR_INT_SUM_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_ERR_INT_SUM_W1S(a) (a)
#define arguments_CAVM_MDABX_ERR_INT_SUM_W1S(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_gmid
 *
 * MDAB GMID Register
 */
union cavm_mdabx_gmid
{
    uint32_t u;
    struct cavm_mdabx_gmid_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_3_31         : 29;
        uint32_t dac_gmid              : 3;  /**< [  2:  0](R/W) This value is sent for every DSP LD/ST access to main memory, and for every
                                                                 master DMA access to the main memory. For Instruction fetch from main memory the
                                                                 GMID is always set to 0x0. */
#else /* Word 0 - Little Endian */
        uint32_t dac_gmid              : 3;  /**< [  2:  0](R/W) This value is sent for every DSP LD/ST access to main memory, and for every
                                                                 master DMA access to the main memory. For Instruction fetch from main memory the
                                                                 GMID is always set to 0x0. */
        uint32_t reserved_3_31         : 29;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_gmid_s cn; */
};
typedef union cavm_mdabx_gmid cavm_mdabx_gmid_t;

static inline uint64_t CAVM_MDABX_GMID(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_GMID(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008f20ll + 0x80000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e044008f20ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_GMID", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_GMID(a) cavm_mdabx_gmid_t
#define bustype_CAVM_MDABX_GMID(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_GMID(a) "MDABX_GMID"
#define device_bar_CAVM_MDABX_GMID(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_GMID(a) (a)
#define arguments_CAVM_MDABX_GMID(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_gp0
 *
 * MDAB General Purpose Register 0
 */
union cavm_mdabx_gp0
{
    uint32_t u;
    struct cavm_mdabx_gp0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t gp0                   : 32; /**< [ 31:  0](R/W) Scratch register 0. */
#else /* Word 0 - Little Endian */
        uint32_t gp0                   : 32; /**< [ 31:  0](R/W) Scratch register 0. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_gp0_s cn; */
};
typedef union cavm_mdabx_gp0 cavm_mdabx_gp0_t;

static inline uint64_t CAVM_MDABX_GP0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_GP0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008350ll + 0x80000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e044008350ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_GP0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_GP0(a) cavm_mdabx_gp0_t
#define bustype_CAVM_MDABX_GP0(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_GP0(a) "MDABX_GP0"
#define device_bar_CAVM_MDABX_GP0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_GP0(a) (a)
#define arguments_CAVM_MDABX_GP0(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_gp1
 *
 * MDAB General Purpose Register 1
 */
union cavm_mdabx_gp1
{
    uint32_t u;
    struct cavm_mdabx_gp1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t gp1                   : 32; /**< [ 31:  0](R/W) Scratch register 1. */
#else /* Word 0 - Little Endian */
        uint32_t gp1                   : 32; /**< [ 31:  0](R/W) Scratch register 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_gp1_s cn; */
};
typedef union cavm_mdabx_gp1 cavm_mdabx_gp1_t;

static inline uint64_t CAVM_MDABX_GP1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_GP1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008360ll + 0x80000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e044008360ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_GP1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_GP1(a) cavm_mdabx_gp1_t
#define bustype_CAVM_MDABX_GP1(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_GP1(a) "MDABX_GP1"
#define device_bar_CAVM_MDABX_GP1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_GP1(a) (a)
#define arguments_CAVM_MDABX_GP1(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_gp2
 *
 * MDAB General Purpose Register 2
 */
union cavm_mdabx_gp2
{
    uint32_t u;
    struct cavm_mdabx_gp2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t gp2                   : 32; /**< [ 31:  0](R/W) Scratch register 2. */
#else /* Word 0 - Little Endian */
        uint32_t gp2                   : 32; /**< [ 31:  0](R/W) Scratch register 2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_gp2_s cn; */
};
typedef union cavm_mdabx_gp2 cavm_mdabx_gp2_t;

static inline uint64_t CAVM_MDABX_GP2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_GP2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008370ll + 0x80000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e044008370ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_GP2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_GP2(a) cavm_mdabx_gp2_t
#define bustype_CAVM_MDABX_GP2(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_GP2(a) "MDABX_GP2"
#define device_bar_CAVM_MDABX_GP2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_GP2(a) (a)
#define arguments_CAVM_MDABX_GP2(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_gp3
 *
 * MDAB General Purpose Register 3
 */
union cavm_mdabx_gp3
{
    uint32_t u;
    struct cavm_mdabx_gp3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t gp3                   : 32; /**< [ 31:  0](R/W) Scratch register 3. */
#else /* Word 0 - Little Endian */
        uint32_t gp3                   : 32; /**< [ 31:  0](R/W) Scratch register 3. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_gp3_s cn; */
};
typedef union cavm_mdabx_gp3 cavm_mdabx_gp3_t;

static inline uint64_t CAVM_MDABX_GP3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_GP3(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008380ll + 0x80000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e044008380ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_GP3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_GP3(a) cavm_mdabx_gp3_t
#define bustype_CAVM_MDABX_GP3(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_GP3(a) "MDABX_GP3"
#define device_bar_CAVM_MDABX_GP3(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_GP3(a) (a)
#define arguments_CAVM_MDABX_GP3(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_gp4
 *
 * MDAB General Purpose Register 4
 */
union cavm_mdabx_gp4
{
    uint32_t u;
    struct cavm_mdabx_gp4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t gp4                   : 32; /**< [ 31:  0](R/W) Scratch register 4. */
#else /* Word 0 - Little Endian */
        uint32_t gp4                   : 32; /**< [ 31:  0](R/W) Scratch register 4. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_gp4_s cn; */
};
typedef union cavm_mdabx_gp4 cavm_mdabx_gp4_t;

static inline uint64_t CAVM_MDABX_GP4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_GP4(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008390ll + 0x80000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e044008390ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_GP4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_GP4(a) cavm_mdabx_gp4_t
#define bustype_CAVM_MDABX_GP4(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_GP4(a) "MDABX_GP4"
#define device_bar_CAVM_MDABX_GP4(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_GP4(a) (a)
#define arguments_CAVM_MDABX_GP4(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_gp5
 *
 * MDAB General Purpose Register 5
 */
union cavm_mdabx_gp5
{
    uint32_t u;
    struct cavm_mdabx_gp5_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t gp5                   : 32; /**< [ 31:  0](R/W) Scratch register 5. */
#else /* Word 0 - Little Endian */
        uint32_t gp5                   : 32; /**< [ 31:  0](R/W) Scratch register 5. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_gp5_s cn; */
};
typedef union cavm_mdabx_gp5 cavm_mdabx_gp5_t;

static inline uint64_t CAVM_MDABX_GP5(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_GP5(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e0440083a0ll + 0x80000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e0440083a0ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_GP5", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_GP5(a) cavm_mdabx_gp5_t
#define bustype_CAVM_MDABX_GP5(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_GP5(a) "MDABX_GP5"
#define device_bar_CAVM_MDABX_GP5(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_GP5(a) (a)
#define arguments_CAVM_MDABX_GP5(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_gp6
 *
 * MDAB General Purpose Register 6
 */
union cavm_mdabx_gp6
{
    uint32_t u;
    struct cavm_mdabx_gp6_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t gp6                   : 32; /**< [ 31:  0](R/W) Scratch register 6. */
#else /* Word 0 - Little Endian */
        uint32_t gp6                   : 32; /**< [ 31:  0](R/W) Scratch register 6. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_gp6_s cn; */
};
typedef union cavm_mdabx_gp6 cavm_mdabx_gp6_t;

static inline uint64_t CAVM_MDABX_GP6(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_GP6(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e0440083b0ll + 0x80000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e0440083b0ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_GP6", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_GP6(a) cavm_mdabx_gp6_t
#define bustype_CAVM_MDABX_GP6(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_GP6(a) "MDABX_GP6"
#define device_bar_CAVM_MDABX_GP6(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_GP6(a) (a)
#define arguments_CAVM_MDABX_GP6(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_gp7
 *
 * MDAB General Purpose Register 7
 */
union cavm_mdabx_gp7
{
    uint32_t u;
    struct cavm_mdabx_gp7_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t gp7                   : 32; /**< [ 31:  0](R/W) Scratch register 7. */
#else /* Word 0 - Little Endian */
        uint32_t gp7                   : 32; /**< [ 31:  0](R/W) Scratch register 7. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_gp7_s cn; */
};
typedef union cavm_mdabx_gp7 cavm_mdabx_gp7_t;

static inline uint64_t CAVM_MDABX_GP7(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_GP7(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e0440083c0ll + 0x80000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e0440083c0ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_GP7", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_GP7(a) cavm_mdabx_gp7_t
#define bustype_CAVM_MDABX_GP7(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_GP7(a) "MDABX_GP7"
#define device_bar_CAVM_MDABX_GP7(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_GP7(a) (a)
#define arguments_CAVM_MDABX_GP7(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_gpio_in
 *
 * MDAB GPIO Input Register
 */
union cavm_mdabx_gpio_in
{
    uint32_t u;
    struct cavm_mdabx_gpio_in_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t gpio_in               : 32; /**< [ 31:  0](R/W) DSP GPIO input. Allows DSP to read data from other hosts. */
#else /* Word 0 - Little Endian */
        uint32_t gpio_in               : 32; /**< [ 31:  0](R/W) DSP GPIO input. Allows DSP to read data from other hosts. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_gpio_in_s cn; */
};
typedef union cavm_mdabx_gpio_in cavm_mdabx_gpio_in_t;

static inline uint64_t CAVM_MDABX_GPIO_IN(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_GPIO_IN(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008320ll + 0x80000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e044008320ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_GPIO_IN", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_GPIO_IN(a) cavm_mdabx_gpio_in_t
#define bustype_CAVM_MDABX_GPIO_IN(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_GPIO_IN(a) "MDABX_GPIO_IN"
#define device_bar_CAVM_MDABX_GPIO_IN(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_GPIO_IN(a) (a)
#define arguments_CAVM_MDABX_GPIO_IN(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_gpio_out
 *
 * MDAB GPIO Output Register
 */
union cavm_mdabx_gpio_out
{
    uint32_t u;
    struct cavm_mdabx_gpio_out_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t gpio_out              : 32; /**< [ 31:  0](RO/H) DSP GPIO output. Allows DSP to output data for other hosts. */
#else /* Word 0 - Little Endian */
        uint32_t gpio_out              : 32; /**< [ 31:  0](RO/H) DSP GPIO output. Allows DSP to output data for other hosts. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_gpio_out_s cn; */
};
typedef union cavm_mdabx_gpio_out cavm_mdabx_gpio_out_t;

static inline uint64_t CAVM_MDABX_GPIO_OUT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_GPIO_OUT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008310ll + 0x80000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e044008310ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_GPIO_OUT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_GPIO_OUT(a) cavm_mdabx_gpio_out_t
#define bustype_CAVM_MDABX_GPIO_OUT(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_GPIO_OUT(a) "MDABX_GPIO_OUT"
#define device_bar_CAVM_MDABX_GPIO_OUT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_GPIO_OUT(a) (a)
#define arguments_CAVM_MDABX_GPIO_OUT(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_id
 *
 * MDAB ID Register
 * MDAB ID Register.
 */
union cavm_mdabx_id
{
    uint32_t u;
    struct cavm_mdabx_id_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t mdb_id                : 32; /**< [ 31:  0](RO/H) MBP IDs are 0x0-0x36
                                                                 LBP IDs are 0x0-0x0A
                                                                 SSP IDs are 0x0-0x01 */
#else /* Word 0 - Little Endian */
        uint32_t mdb_id                : 32; /**< [ 31:  0](RO/H) MBP IDs are 0x0-0x36
                                                                 LBP IDs are 0x0-0x0A
                                                                 SSP IDs are 0x0-0x01 */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_id_s cn10; */
    /* struct cavm_mdabx_id_s cnf10ka; */
    struct cavm_mdabx_id_cnf10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t mdb_id                : 32; /**< [ 31:  0](RO/H) CBP  IDs are 0x0-1x1F
                                                                 MASI IDs are 0x0-0x0F */
#else /* Word 0 - Little Endian */
        uint32_t mdb_id                : 32; /**< [ 31:  0](RO/H) CBP  IDs are 0x0-1x1F
                                                                 MASI IDs are 0x0-0x0F */
#endif /* Word 0 - End */
    } cnf10kb;
};
typedef union cavm_mdabx_id cavm_mdabx_id_t;

static inline uint64_t CAVM_MDABX_ID(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_ID(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008340ll + 0x80000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e044008340ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_ID", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_ID(a) cavm_mdabx_id_t
#define bustype_CAVM_MDABX_ID(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_ID(a) "MDABX_ID"
#define device_bar_CAVM_MDABX_ID(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_ID(a) (a)
#define arguments_CAVM_MDABX_ID(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_int_ena_w1c
 *
 * MDAB Interrupt Enable CLEAR Register
 * This register is used to clear MDAB programmable interrupt enables for the MDAB()_INT_SUM bits.
 */
union cavm_mdabx_int_ena_w1c
{
    uint32_t u;
    struct cavm_mdabx_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_17_31        : 15;
        uint32_t rd_dma_slice_fifo_oflow : 1;/**< [ 16: 16](R/W1C/H) Reads or clears the enable the MDAB()_INT_SUM[RD_DMA_SLICE_FIFO_OFLOW] interrupt bit. */
        uint32_t wr_dma_slice_fifo_oflow : 1;/**< [ 15: 15](R/W1C/H) Reads or clears the enable the MDAB()_INT_SUM[WR_DMA_SLICE_FIFO_OFLOW] interrupt bit. */
        uint32_t rd_dma_eob_err        : 1;  /**< [ 14: 14](R/W1C/H) Reads or clears the enable the MDAB()_INT_SUM[RD_DMA_EOB_ERR] interrupt bit. */
        uint32_t cfg_dma_eob_err       : 1;  /**< [ 13: 13](R/W1C/H) Reads or clears the enable the MDAB()_INT_SUM[CFG_DMA_EOB_ERR] interrupt bit. */
        uint32_t job_rdy1              : 1;  /**< [ 12: 12](R/W1C/H) Reads or clears the enable for the MDAB()_INT_SUM[JOB_RDY1] interrupt bit. */
        uint32_t job_rdy0              : 1;  /**< [ 11: 11](R/W1C/H) Reads or clears the enable for the MDAB()_INT_SUM[JOB_RDY0] interrupt bit. */
        uint32_t wr_dma_uflow          : 1;  /**< [ 10: 10](R/W1C/H) Reads or clears enables for the MDAB()_INT_SUM[WR_DMA_UFLOW]. */
        uint32_t wr_dma_oflow          : 1;  /**< [  9:  9](R/W1C/H) Reads or clears enables for the MDAB()_INT_SUM[WR_DMA_OFLOW]. */
        uint32_t wr_dma_last_done      : 1;  /**< [  8:  8](R/W1C/H) Reads or clears enables for the MDAB()_INT_SUM[WR_DMA_LAST_DONE]. */
        uint32_t wr_dma_slice_done     : 1;  /**< [  7:  7](R/W1C/H) Reads or clears enables for the MDAB()_INT_SUM[WR_DMA_SLICE_DONE]. */
        uint32_t wr_dma_pending        : 1;  /**< [  6:  6](R/W1C/H) Reads or clears enables for the MDAB()_INT_SUM[WR_DMA_PENDING]. */
        uint32_t rd_dma_last_done      : 1;  /**< [  5:  5](R/W1C/H) Reads or clears enables for the MDAB()_INT_SUM[RD_DMA_LAST_DONE]. */
        uint32_t rd_dma_slice_done     : 1;  /**< [  4:  4](R/W1C/H) Reads or clears enables for the MDAB()_INT_SUM[RD_DMA_SLICE_DONE]. */
        uint32_t rd_dma_pending        : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enables for the MDAB()_INT_SUM[RD_DMA_PENDING]. */
        uint32_t cfg_dma_last_done     : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enables for the MDAB()_INT_SUM[CFG_DMA_LAST_DONE]. */
        uint32_t cfg_dma_slice_done    : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enables for the MDAB()_INT_SUM[CFG_DMA_SLICE_DONE]. */
        uint32_t cfg_dma_pending       : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enables for the MDAB()_INT_SUM[CFG_DMA_PENDING]. */
#else /* Word 0 - Little Endian */
        uint32_t cfg_dma_pending       : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enables for the MDAB()_INT_SUM[CFG_DMA_PENDING]. */
        uint32_t cfg_dma_slice_done    : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enables for the MDAB()_INT_SUM[CFG_DMA_SLICE_DONE]. */
        uint32_t cfg_dma_last_done     : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enables for the MDAB()_INT_SUM[CFG_DMA_LAST_DONE]. */
        uint32_t rd_dma_pending        : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enables for the MDAB()_INT_SUM[RD_DMA_PENDING]. */
        uint32_t rd_dma_slice_done     : 1;  /**< [  4:  4](R/W1C/H) Reads or clears enables for the MDAB()_INT_SUM[RD_DMA_SLICE_DONE]. */
        uint32_t rd_dma_last_done      : 1;  /**< [  5:  5](R/W1C/H) Reads or clears enables for the MDAB()_INT_SUM[RD_DMA_LAST_DONE]. */
        uint32_t wr_dma_pending        : 1;  /**< [  6:  6](R/W1C/H) Reads or clears enables for the MDAB()_INT_SUM[WR_DMA_PENDING]. */
        uint32_t wr_dma_slice_done     : 1;  /**< [  7:  7](R/W1C/H) Reads or clears enables for the MDAB()_INT_SUM[WR_DMA_SLICE_DONE]. */
        uint32_t wr_dma_last_done      : 1;  /**< [  8:  8](R/W1C/H) Reads or clears enables for the MDAB()_INT_SUM[WR_DMA_LAST_DONE]. */
        uint32_t wr_dma_oflow          : 1;  /**< [  9:  9](R/W1C/H) Reads or clears enables for the MDAB()_INT_SUM[WR_DMA_OFLOW]. */
        uint32_t wr_dma_uflow          : 1;  /**< [ 10: 10](R/W1C/H) Reads or clears enables for the MDAB()_INT_SUM[WR_DMA_UFLOW]. */
        uint32_t job_rdy0              : 1;  /**< [ 11: 11](R/W1C/H) Reads or clears the enable for the MDAB()_INT_SUM[JOB_RDY0] interrupt bit. */
        uint32_t job_rdy1              : 1;  /**< [ 12: 12](R/W1C/H) Reads or clears the enable for the MDAB()_INT_SUM[JOB_RDY1] interrupt bit. */
        uint32_t cfg_dma_eob_err       : 1;  /**< [ 13: 13](R/W1C/H) Reads or clears the enable the MDAB()_INT_SUM[CFG_DMA_EOB_ERR] interrupt bit. */
        uint32_t rd_dma_eob_err        : 1;  /**< [ 14: 14](R/W1C/H) Reads or clears the enable the MDAB()_INT_SUM[RD_DMA_EOB_ERR] interrupt bit. */
        uint32_t wr_dma_slice_fifo_oflow : 1;/**< [ 15: 15](R/W1C/H) Reads or clears the enable the MDAB()_INT_SUM[WR_DMA_SLICE_FIFO_OFLOW] interrupt bit. */
        uint32_t rd_dma_slice_fifo_oflow : 1;/**< [ 16: 16](R/W1C/H) Reads or clears the enable the MDAB()_INT_SUM[RD_DMA_SLICE_FIFO_OFLOW] interrupt bit. */
        uint32_t reserved_17_31        : 15;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_int_ena_w1c_s cn; */
};
typedef union cavm_mdabx_int_ena_w1c cavm_mdabx_int_ena_w1c_t;

static inline uint64_t CAVM_MDABX_INT_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_INT_ENA_W1C(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008170ll + 0x80000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e044008170ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_INT_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_INT_ENA_W1C(a) cavm_mdabx_int_ena_w1c_t
#define bustype_CAVM_MDABX_INT_ENA_W1C(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_INT_ENA_W1C(a) "MDABX_INT_ENA_W1C"
#define device_bar_CAVM_MDABX_INT_ENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_INT_ENA_W1C(a) (a)
#define arguments_CAVM_MDABX_INT_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_int_ena_w1s
 *
 * MDAB Interrupt Enable SET Register
 * This register is used to set MDAB programmable interrupt enables for the MDAB()_INT_SUM bits.
 */
union cavm_mdabx_int_ena_w1s
{
    uint32_t u;
    struct cavm_mdabx_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_17_31        : 15;
        uint32_t rd_dma_slice_fifo_oflow : 1;/**< [ 16: 16](R/W1S/H) Reads or sets the enable the MDAB()_INT_SUM[RD_DMA_SLICE_FIFO_OFLOW] interrupt bit. */
        uint32_t wr_dma_slice_fifo_oflow : 1;/**< [ 15: 15](R/W1S/H) Reads or sets the enable the MDAB()_INT_SUM[WR_DMA_SLICE_FIFO_OFLOW] interrupt bit. */
        uint32_t rd_dma_eob_err        : 1;  /**< [ 14: 14](R/W1S/H) Reads or sets the enable the MDAB()_INT_SUM[RD_DMA_EOB_ERR] interrupt bit. */
        uint32_t cfg_dma_eob_err       : 1;  /**< [ 13: 13](R/W1S/H) Reads or sets the enable the MDAB()_INT_SUM[CFG_DMA_EOB_ERR] interrupt bit. */
        uint32_t job_rdy1              : 1;  /**< [ 12: 12](R/W1S/H) Reads or sets the enable for the MDAB()_INT_SUM[JOB_RDY1] interrupt bit. */
        uint32_t job_rdy0              : 1;  /**< [ 11: 11](R/W1S/H) Reads or sets the enable for the MDAB()_INT_SUM[JOB_RDY0] interrupt bit. */
        uint32_t wr_dma_uflow          : 1;  /**< [ 10: 10](R/W1S/H) Reads or sets enables for the MDAB()_INT_SUM[WR_DMA_UFLOW]. */
        uint32_t wr_dma_oflow          : 1;  /**< [  9:  9](R/W1S/H) Reads or sets enables for the MDAB()_INT_SUM[WR_DMA_OFLOW]. */
        uint32_t wr_dma_last_done      : 1;  /**< [  8:  8](R/W1S/H) Reads or sets enables for the MDAB()_INT_SUM[WR_DMA_LAST_DONE]. Note that this interrupt
                                                                 bit will NOT get
                                                                 set at the end of a store local operation. */
        uint32_t wr_dma_slice_done     : 1;  /**< [  7:  7](R/W1S/H) Reads or sets enables for the MDAB()_INT_SUM[WR_DMA_SLICE_DONE]. Note that this interrupt
                                                                 bit will NOT get
                                                                 set at the end of a store local operation. */
        uint32_t wr_dma_pending        : 1;  /**< [  6:  6](R/W1S/H) Reads or sets enables for the MDAB()_INT_SUM[WR_DMA_PENDING]. */
        uint32_t rd_dma_last_done      : 1;  /**< [  5:  5](R/W1S/H) Reads or sets enables for the MDAB()_INT_SUM[RD_DMA_LAST_DONE].  Note that this interrupt
                                                                 bit will NOT get
                                                                 set at the end of a load local operation. */
        uint32_t rd_dma_slice_done     : 1;  /**< [  4:  4](R/W1S/H) Reads or sets enables for the MDAB()_INT_SUM[RD_DMA_SLICE_DONE].  Note that this interrupt
                                                                 bit will NOT get
                                                                 set at the end of a load local operation. */
        uint32_t rd_dma_pending        : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enables for the MDAB()_INT_SUM[RD_DMA_PENDING]. */
        uint32_t cfg_dma_last_done     : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enables for the MDAB()_INT_SUM[CFG_DMA_LAST_DONE]. */
        uint32_t cfg_dma_slice_done    : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enables for the MDAB()_INT_SUM[CFG_DMA_SLICE_DONE]. */
        uint32_t cfg_dma_pending       : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enables for the MDAB()_INT_SUM[CFG_DMA_PENDING]. */
#else /* Word 0 - Little Endian */
        uint32_t cfg_dma_pending       : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enables for the MDAB()_INT_SUM[CFG_DMA_PENDING]. */
        uint32_t cfg_dma_slice_done    : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enables for the MDAB()_INT_SUM[CFG_DMA_SLICE_DONE]. */
        uint32_t cfg_dma_last_done     : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enables for the MDAB()_INT_SUM[CFG_DMA_LAST_DONE]. */
        uint32_t rd_dma_pending        : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enables for the MDAB()_INT_SUM[RD_DMA_PENDING]. */
        uint32_t rd_dma_slice_done     : 1;  /**< [  4:  4](R/W1S/H) Reads or sets enables for the MDAB()_INT_SUM[RD_DMA_SLICE_DONE].  Note that this interrupt
                                                                 bit will NOT get
                                                                 set at the end of a load local operation. */
        uint32_t rd_dma_last_done      : 1;  /**< [  5:  5](R/W1S/H) Reads or sets enables for the MDAB()_INT_SUM[RD_DMA_LAST_DONE].  Note that this interrupt
                                                                 bit will NOT get
                                                                 set at the end of a load local operation. */
        uint32_t wr_dma_pending        : 1;  /**< [  6:  6](R/W1S/H) Reads or sets enables for the MDAB()_INT_SUM[WR_DMA_PENDING]. */
        uint32_t wr_dma_slice_done     : 1;  /**< [  7:  7](R/W1S/H) Reads or sets enables for the MDAB()_INT_SUM[WR_DMA_SLICE_DONE]. Note that this interrupt
                                                                 bit will NOT get
                                                                 set at the end of a store local operation. */
        uint32_t wr_dma_last_done      : 1;  /**< [  8:  8](R/W1S/H) Reads or sets enables for the MDAB()_INT_SUM[WR_DMA_LAST_DONE]. Note that this interrupt
                                                                 bit will NOT get
                                                                 set at the end of a store local operation. */
        uint32_t wr_dma_oflow          : 1;  /**< [  9:  9](R/W1S/H) Reads or sets enables for the MDAB()_INT_SUM[WR_DMA_OFLOW]. */
        uint32_t wr_dma_uflow          : 1;  /**< [ 10: 10](R/W1S/H) Reads or sets enables for the MDAB()_INT_SUM[WR_DMA_UFLOW]. */
        uint32_t job_rdy0              : 1;  /**< [ 11: 11](R/W1S/H) Reads or sets the enable for the MDAB()_INT_SUM[JOB_RDY0] interrupt bit. */
        uint32_t job_rdy1              : 1;  /**< [ 12: 12](R/W1S/H) Reads or sets the enable for the MDAB()_INT_SUM[JOB_RDY1] interrupt bit. */
        uint32_t cfg_dma_eob_err       : 1;  /**< [ 13: 13](R/W1S/H) Reads or sets the enable the MDAB()_INT_SUM[CFG_DMA_EOB_ERR] interrupt bit. */
        uint32_t rd_dma_eob_err        : 1;  /**< [ 14: 14](R/W1S/H) Reads or sets the enable the MDAB()_INT_SUM[RD_DMA_EOB_ERR] interrupt bit. */
        uint32_t wr_dma_slice_fifo_oflow : 1;/**< [ 15: 15](R/W1S/H) Reads or sets the enable the MDAB()_INT_SUM[WR_DMA_SLICE_FIFO_OFLOW] interrupt bit. */
        uint32_t rd_dma_slice_fifo_oflow : 1;/**< [ 16: 16](R/W1S/H) Reads or sets the enable the MDAB()_INT_SUM[RD_DMA_SLICE_FIFO_OFLOW] interrupt bit. */
        uint32_t reserved_17_31        : 15;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_int_ena_w1s_s cn; */
};
typedef union cavm_mdabx_int_ena_w1s cavm_mdabx_int_ena_w1s_t;

static inline uint64_t CAVM_MDABX_INT_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_INT_ENA_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008180ll + 0x80000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e044008180ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_INT_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_INT_ENA_W1S(a) cavm_mdabx_int_ena_w1s_t
#define bustype_CAVM_MDABX_INT_ENA_W1S(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_INT_ENA_W1S(a) "MDABX_INT_ENA_W1S"
#define device_bar_CAVM_MDABX_INT_ENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_INT_ENA_W1S(a) (a)
#define arguments_CAVM_MDABX_INT_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_int_sel
 *
 * MDAB Interrupt Level Select Register
 * This register is used to configure the MDAB interrupts to the DSP cores.
 */
union cavm_mdabx_int_sel
{
    uint32_t u;
    struct cavm_mdabx_int_sel_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_4_31         : 28;
        uint32_t rout_err_int_sel      : 1;  /**< [  3:  3](R/W) Selects interrupt routing for MDAB()_ERR_INT_SUM interrupts.
                                                                 0 = NMI Enable
                                                                 1 = Int 5 Enable
                                                                 NOTE: To ensure correct generation of outstanding interrupts, this bit MUST be programmed
                                                                 prior to initial configuration of the interrupt enable register. */
        uint32_t ld_lcl_trig_style     : 1;  /**< [  2:  2](R/W) Determines whether load local start/finish interrupts are level or
                                                                 edge triggered:
                                                                 0 = Level-sensitive.
                                                                 1 = Edge-triggered.
                                                                 NOTE: To ensure correct generation of outstanding interrupts, this bit MUST be programmed
                                                                 prior to initial configuration of the interrupt enable register. */
        uint32_t dma_int_trig_style    : 1;  /**< [  1:  1](R/W) Determines whether interrupts reported via MDAB_INT_SUM are level or
                                                                 edge triggered:
                                                                 0 = Level-sensitive.
                                                                 1 = Edge-triggered.
                                                                 NOTE: To ensure correct generation of outstanding interrupts, this bit MUST be programmed
                                                                 prior to initial configuration of the interrupt enable register. */
        uint32_t int_rout_sel          : 1;  /**< [  0:  0](R/W) Selects interrupt routing for MDAB()_INT_SUM interrupts.
                                                                 0 = LEVEL 1 Interrupt.
                                                                 1 = LEVEL 2 Interrupt.
                                                                 NOTE: To ensure correct generation of outstanding interrupts, this bit MUST be programmed
                                                                 prior to initial configuration of the interrupt enable register. */
#else /* Word 0 - Little Endian */
        uint32_t int_rout_sel          : 1;  /**< [  0:  0](R/W) Selects interrupt routing for MDAB()_INT_SUM interrupts.
                                                                 0 = LEVEL 1 Interrupt.
                                                                 1 = LEVEL 2 Interrupt.
                                                                 NOTE: To ensure correct generation of outstanding interrupts, this bit MUST be programmed
                                                                 prior to initial configuration of the interrupt enable register. */
        uint32_t dma_int_trig_style    : 1;  /**< [  1:  1](R/W) Determines whether interrupts reported via MDAB_INT_SUM are level or
                                                                 edge triggered:
                                                                 0 = Level-sensitive.
                                                                 1 = Edge-triggered.
                                                                 NOTE: To ensure correct generation of outstanding interrupts, this bit MUST be programmed
                                                                 prior to initial configuration of the interrupt enable register. */
        uint32_t ld_lcl_trig_style     : 1;  /**< [  2:  2](R/W) Determines whether load local start/finish interrupts are level or
                                                                 edge triggered:
                                                                 0 = Level-sensitive.
                                                                 1 = Edge-triggered.
                                                                 NOTE: To ensure correct generation of outstanding interrupts, this bit MUST be programmed
                                                                 prior to initial configuration of the interrupt enable register. */
        uint32_t rout_err_int_sel      : 1;  /**< [  3:  3](R/W) Selects interrupt routing for MDAB()_ERR_INT_SUM interrupts.
                                                                 0 = NMI Enable
                                                                 1 = Int 5 Enable
                                                                 NOTE: To ensure correct generation of outstanding interrupts, this bit MUST be programmed
                                                                 prior to initial configuration of the interrupt enable register. */
        uint32_t reserved_4_31         : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_int_sel_s cn; */
};
typedef union cavm_mdabx_int_sel cavm_mdabx_int_sel_t;

static inline uint64_t CAVM_MDABX_INT_SEL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_INT_SEL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008190ll + 0x80000ll * ((a) & 0x7f);
    __cavm_csr_fatal("MDABX_INT_SEL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_INT_SEL(a) cavm_mdabx_int_sel_t
#define bustype_CAVM_MDABX_INT_SEL(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_INT_SEL(a) "MDABX_INT_SEL"
#define device_bar_CAVM_MDABX_INT_SEL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_INT_SEL(a) (a)
#define arguments_CAVM_MDABX_INT_SEL(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_int_sum
 *
 * MDAB Interrupt Summary Register
 * This register reports the interrupt status for the MDAB DMA engines.
 * Software clears individual interrupts by writing one to the corresponding bit.
 */
union cavm_mdabx_int_sum
{
    uint32_t u;
    struct cavm_mdabx_int_sum_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_17_31        : 15;
        uint32_t rd_dma_slice_fifo_oflow : 1;/**< [ 16: 16](R/W1C/H) Indicates that too many slice entries have been pushed to the read DMA slice FIFO. */
        uint32_t wr_dma_slice_fifo_oflow : 1;/**< [ 15: 15](R/W1C/H) Indicates that too many slice entries have been pushed to the write DMA slice FIFO. */
        uint32_t rd_dma_eob_err        : 1;  /**< [ 14: 14](R/W1C/H) Indicates an end of transfer alignment error when RD DMA writes to the PTCM.
                                                                 The last data of the transfer does not coincide with an AXI end of burst.
                                                                 Writing a 1 to this bit clears the interrupt. */
        uint32_t cfg_dma_eob_err       : 1;  /**< [ 13: 13](R/W1C/H) Indicates an end of transfer alignment error when CFG DMA writes to the PTCM.
                                                                 The last data of the transfer does not coincide with an AXI end of burst.
                                                                 Writing a 1 to this bit clears the interrupt. */
        uint32_t job_rdy1              : 1;  /**< [ 12: 12](R/W1C/H) Indicates a job is ready in slot 1. Writing a 1 to this bit clears the interrupt. */
        uint32_t job_rdy0              : 1;  /**< [ 11: 11](R/W1C/H) Indicates a job is ready in slot 0. Writing a 1 to this bit clears the interrupt. */
        uint32_t wr_dma_uflow          : 1;  /**< [ 10: 10](R/W1C/H) Output data DMA underflow. When set, indicates that the MDAB()_WR_LIMIT
                                                                 specified a DMA transfer that was smaller than the amount of output
                                                                 data described by the job descriptor and the DSP had data remaining
                                                                 in the buffer when the transaction completed. */
        uint32_t wr_dma_oflow          : 1;  /**< [  9:  9](R/W1C/H) Output data DMA overflow. When set, indicates that the MDAB()_WR_LIMIT
                                                                 specified a DMA transfer that exceeded the amount of output data
                                                                 described by the job descriptor and the DMA engine was unable to
                                                                 transfer all of the data between MDAB()_WR_ADDR and
                                                                 MDAB()_WR_ADDR+MDAB()_WR_LIMIT. */
        uint32_t wr_dma_last_done      : 1;  /**< [  8:  8](R/W1C/H) When set indicates that the WR-DMA engine completed transferring all
                                                                 output data described by the job descriptor (JD.WR-DMA). */
        uint32_t wr_dma_slice_done     : 1;  /**< [  7:  7](R/W1C/H) Output data WR-DMA slice done. When set, indicates that the WR-DMA
                                                                 engine completed an output data transfer but reached MDAB()_WR_LIMIT
                                                                 before transferring all of the output data described by the job descriptor. */
        uint32_t wr_dma_pending        : 1;  /**< [  6:  6](R/W1C/H) Output data WR-DMA pending. When set, software needs to program the
                                                                 output data WR-DMA engine to transfer the output data for a new job. */
        uint32_t rd_dma_last_done      : 1;  /**< [  5:  5](R/W1C/H) When set indicates that the input data RD-DMA engine completed
                                                                 transferring all input data for a job. */
        uint32_t rd_dma_slice_done     : 1;  /**< [  4:  4](R/W1C/H) RD-DMA slice done. When set, indicates that the RD-DMA engine
                                                                 completed an input data transfer but reached MDAB()_RD_LIMIT before
                                                                 transferring all of the input data for the job. */
        uint32_t rd_dma_pending        : 1;  /**< [  3:  3](R/W1C/H) RD-DMA pending. When set, software needs to program the RD-DMA engine
                                                                 to transfer the input data for a new job. */
        uint32_t cfg_dma_last_done     : 1;  /**< [  2:  2](R/W1C/H) CFG-DMA LAST Done detected: When set indicates that the CFG-DMA
                                                                 engine detected the last data transfer for the entire job
                                                                 configuration data (JD.JCFG) for a job. */
        uint32_t cfg_dma_slice_done    : 1;  /**< [  1:  1](R/W1C/H) CFG-DMA slice done. When set, indicates that the CFG-DMA engine
                                                                 completed a job configuration data slice transfer and reached the
                                                                 MDAB()_CFG_LIMIT before transferring the LAST data from job configuration
                                                                 data for the job (JD.JCFG). */
        uint32_t cfg_dma_pending       : 1;  /**< [  0:  0](R/W1C/H) CFG-DMA pending. When set, software needs to program the CFG-DMA
                                                                 engine to transfer the job configuration data for a new job. */
#else /* Word 0 - Little Endian */
        uint32_t cfg_dma_pending       : 1;  /**< [  0:  0](R/W1C/H) CFG-DMA pending. When set, software needs to program the CFG-DMA
                                                                 engine to transfer the job configuration data for a new job. */
        uint32_t cfg_dma_slice_done    : 1;  /**< [  1:  1](R/W1C/H) CFG-DMA slice done. When set, indicates that the CFG-DMA engine
                                                                 completed a job configuration data slice transfer and reached the
                                                                 MDAB()_CFG_LIMIT before transferring the LAST data from job configuration
                                                                 data for the job (JD.JCFG). */
        uint32_t cfg_dma_last_done     : 1;  /**< [  2:  2](R/W1C/H) CFG-DMA LAST Done detected: When set indicates that the CFG-DMA
                                                                 engine detected the last data transfer for the entire job
                                                                 configuration data (JD.JCFG) for a job. */
        uint32_t rd_dma_pending        : 1;  /**< [  3:  3](R/W1C/H) RD-DMA pending. When set, software needs to program the RD-DMA engine
                                                                 to transfer the input data for a new job. */
        uint32_t rd_dma_slice_done     : 1;  /**< [  4:  4](R/W1C/H) RD-DMA slice done. When set, indicates that the RD-DMA engine
                                                                 completed an input data transfer but reached MDAB()_RD_LIMIT before
                                                                 transferring all of the input data for the job. */
        uint32_t rd_dma_last_done      : 1;  /**< [  5:  5](R/W1C/H) When set indicates that the input data RD-DMA engine completed
                                                                 transferring all input data for a job. */
        uint32_t wr_dma_pending        : 1;  /**< [  6:  6](R/W1C/H) Output data WR-DMA pending. When set, software needs to program the
                                                                 output data WR-DMA engine to transfer the output data for a new job. */
        uint32_t wr_dma_slice_done     : 1;  /**< [  7:  7](R/W1C/H) Output data WR-DMA slice done. When set, indicates that the WR-DMA
                                                                 engine completed an output data transfer but reached MDAB()_WR_LIMIT
                                                                 before transferring all of the output data described by the job descriptor. */
        uint32_t wr_dma_last_done      : 1;  /**< [  8:  8](R/W1C/H) When set indicates that the WR-DMA engine completed transferring all
                                                                 output data described by the job descriptor (JD.WR-DMA). */
        uint32_t wr_dma_oflow          : 1;  /**< [  9:  9](R/W1C/H) Output data DMA overflow. When set, indicates that the MDAB()_WR_LIMIT
                                                                 specified a DMA transfer that exceeded the amount of output data
                                                                 described by the job descriptor and the DMA engine was unable to
                                                                 transfer all of the data between MDAB()_WR_ADDR and
                                                                 MDAB()_WR_ADDR+MDAB()_WR_LIMIT. */
        uint32_t wr_dma_uflow          : 1;  /**< [ 10: 10](R/W1C/H) Output data DMA underflow. When set, indicates that the MDAB()_WR_LIMIT
                                                                 specified a DMA transfer that was smaller than the amount of output
                                                                 data described by the job descriptor and the DSP had data remaining
                                                                 in the buffer when the transaction completed. */
        uint32_t job_rdy0              : 1;  /**< [ 11: 11](R/W1C/H) Indicates a job is ready in slot 0. Writing a 1 to this bit clears the interrupt. */
        uint32_t job_rdy1              : 1;  /**< [ 12: 12](R/W1C/H) Indicates a job is ready in slot 1. Writing a 1 to this bit clears the interrupt. */
        uint32_t cfg_dma_eob_err       : 1;  /**< [ 13: 13](R/W1C/H) Indicates an end of transfer alignment error when CFG DMA writes to the PTCM.
                                                                 The last data of the transfer does not coincide with an AXI end of burst.
                                                                 Writing a 1 to this bit clears the interrupt. */
        uint32_t rd_dma_eob_err        : 1;  /**< [ 14: 14](R/W1C/H) Indicates an end of transfer alignment error when RD DMA writes to the PTCM.
                                                                 The last data of the transfer does not coincide with an AXI end of burst.
                                                                 Writing a 1 to this bit clears the interrupt. */
        uint32_t wr_dma_slice_fifo_oflow : 1;/**< [ 15: 15](R/W1C/H) Indicates that too many slice entries have been pushed to the write DMA slice FIFO. */
        uint32_t rd_dma_slice_fifo_oflow : 1;/**< [ 16: 16](R/W1C/H) Indicates that too many slice entries have been pushed to the read DMA slice FIFO. */
        uint32_t reserved_17_31        : 15;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_int_sum_s cn; */
};
typedef union cavm_mdabx_int_sum cavm_mdabx_int_sum_t;

static inline uint64_t CAVM_MDABX_INT_SUM(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_INT_SUM(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008150ll + 0x80000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e044008150ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_INT_SUM", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_INT_SUM(a) cavm_mdabx_int_sum_t
#define bustype_CAVM_MDABX_INT_SUM(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_INT_SUM(a) "MDABX_INT_SUM"
#define device_bar_CAVM_MDABX_INT_SUM(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_INT_SUM(a) (a)
#define arguments_CAVM_MDABX_INT_SUM(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_int_sum_w1s
 *
 * MDAB Interrupt Summary SET Register
 * This register is used to artificially set MDAB interrupts described in
 * MDAB()_INT_SUM (for software debug/test), and also provides the hardware input to allow
 * the DMA controllers to set the appropriate interrupt bit.
 */
union cavm_mdabx_int_sum_w1s
{
    uint32_t u;
    struct cavm_mdabx_int_sum_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_17_31        : 15;
        uint32_t rd_dma_slice_fifo_oflow : 1;/**< [ 16: 16](R/W1S/H) Reads or sets the MDAB()_INT_SUM[RD_DMA_SLICE_FIFO_OFLOW] interrupt bit. */
        uint32_t wr_dma_slice_fifo_oflow : 1;/**< [ 15: 15](R/W1S/H) Reads or sets the MDAB()_INT_SUM[WR_DMA_SLICE_FIFO_OFLOW] interrupt bit. */
        uint32_t rd_dma_eob_err        : 1;  /**< [ 14: 14](R/W1S/H) Reads or sets the MDAB()_INT_SUM[RD_DMA_EOB_ERR] interrupt bit. */
        uint32_t cfg_dma_eob_err       : 1;  /**< [ 13: 13](R/W1S/H) Reads or sets the MDAB()_INT_SUM[CFG_DMA_EOB_ERR] interrupt bit. */
        uint32_t job_rdy1              : 1;  /**< [ 12: 12](R/W1S/H) Reads or sets the MDAB()_INT_SUM[JOB_RDY1] interrupt bit. */
        uint32_t job_rdy0              : 1;  /**< [ 11: 11](R/W1S/H) Reads or sets the MDAB()_INT_SUM[JOB_RDY0] interrupt bit. */
        uint32_t wr_dma_uflow          : 1;  /**< [ 10: 10](R/W1S/H) Reads or sets the MDAB()_INT_SUM[WR_DMA_UFLOW]. */
        uint32_t wr_dma_oflow          : 1;  /**< [  9:  9](R/W1S/H) Reads or sets the MDAB()_INT_SUM[WR_DMA_OFLOW]. */
        uint32_t wr_dma_last_done      : 1;  /**< [  8:  8](R/W1S/H) Reads or sets the MDAB()_INT_SUM[WR_DMA_LAST_DONE]. */
        uint32_t wr_dma_slice_done     : 1;  /**< [  7:  7](R/W1S/H) Reads or sets the MDAB()_INT_SUM[WR_DMA_SLICE_DONE]. */
        uint32_t wr_dma_pending        : 1;  /**< [  6:  6](R/W1S/H) Reads or sets the MDAB()_INT_SUM[WR_DMA_PENDING]. */
        uint32_t rd_dma_last_done      : 1;  /**< [  5:  5](R/W1S/H) Reads or sets the MDAB()_INT_SUM[RD_DMA_LAST_DONE]. */
        uint32_t rd_dma_slice_done     : 1;  /**< [  4:  4](R/W1S/H) Reads or sets the MDAB()_INT_SUM[RD_DMA_SLICE_DONE]. */
        uint32_t rd_dma_pending        : 1;  /**< [  3:  3](R/W1S/H) Reads or sets the MDAB()_INT_SUM[RD_DMA_PENDING]. */
        uint32_t cfg_dma_last_done     : 1;  /**< [  2:  2](R/W1S/H) Reads or sets the MDAB()_INT_SUM[CFG_DMA_LAST_DONE]. */
        uint32_t cfg_dma_slice_done    : 1;  /**< [  1:  1](R/W1S/H) Reads or sets the MDAB()_INT_SUM[CFG_DMA_SLICE_DONE]. */
        uint32_t cfg_dma_pending       : 1;  /**< [  0:  0](R/W1S/H) Reads or sets the MDAB()_INT_SUM[CFG_DMA_PENDING]. */
#else /* Word 0 - Little Endian */
        uint32_t cfg_dma_pending       : 1;  /**< [  0:  0](R/W1S/H) Reads or sets the MDAB()_INT_SUM[CFG_DMA_PENDING]. */
        uint32_t cfg_dma_slice_done    : 1;  /**< [  1:  1](R/W1S/H) Reads or sets the MDAB()_INT_SUM[CFG_DMA_SLICE_DONE]. */
        uint32_t cfg_dma_last_done     : 1;  /**< [  2:  2](R/W1S/H) Reads or sets the MDAB()_INT_SUM[CFG_DMA_LAST_DONE]. */
        uint32_t rd_dma_pending        : 1;  /**< [  3:  3](R/W1S/H) Reads or sets the MDAB()_INT_SUM[RD_DMA_PENDING]. */
        uint32_t rd_dma_slice_done     : 1;  /**< [  4:  4](R/W1S/H) Reads or sets the MDAB()_INT_SUM[RD_DMA_SLICE_DONE]. */
        uint32_t rd_dma_last_done      : 1;  /**< [  5:  5](R/W1S/H) Reads or sets the MDAB()_INT_SUM[RD_DMA_LAST_DONE]. */
        uint32_t wr_dma_pending        : 1;  /**< [  6:  6](R/W1S/H) Reads or sets the MDAB()_INT_SUM[WR_DMA_PENDING]. */
        uint32_t wr_dma_slice_done     : 1;  /**< [  7:  7](R/W1S/H) Reads or sets the MDAB()_INT_SUM[WR_DMA_SLICE_DONE]. */
        uint32_t wr_dma_last_done      : 1;  /**< [  8:  8](R/W1S/H) Reads or sets the MDAB()_INT_SUM[WR_DMA_LAST_DONE]. */
        uint32_t wr_dma_oflow          : 1;  /**< [  9:  9](R/W1S/H) Reads or sets the MDAB()_INT_SUM[WR_DMA_OFLOW]. */
        uint32_t wr_dma_uflow          : 1;  /**< [ 10: 10](R/W1S/H) Reads or sets the MDAB()_INT_SUM[WR_DMA_UFLOW]. */
        uint32_t job_rdy0              : 1;  /**< [ 11: 11](R/W1S/H) Reads or sets the MDAB()_INT_SUM[JOB_RDY0] interrupt bit. */
        uint32_t job_rdy1              : 1;  /**< [ 12: 12](R/W1S/H) Reads or sets the MDAB()_INT_SUM[JOB_RDY1] interrupt bit. */
        uint32_t cfg_dma_eob_err       : 1;  /**< [ 13: 13](R/W1S/H) Reads or sets the MDAB()_INT_SUM[CFG_DMA_EOB_ERR] interrupt bit. */
        uint32_t rd_dma_eob_err        : 1;  /**< [ 14: 14](R/W1S/H) Reads or sets the MDAB()_INT_SUM[RD_DMA_EOB_ERR] interrupt bit. */
        uint32_t wr_dma_slice_fifo_oflow : 1;/**< [ 15: 15](R/W1S/H) Reads or sets the MDAB()_INT_SUM[WR_DMA_SLICE_FIFO_OFLOW] interrupt bit. */
        uint32_t rd_dma_slice_fifo_oflow : 1;/**< [ 16: 16](R/W1S/H) Reads or sets the MDAB()_INT_SUM[RD_DMA_SLICE_FIFO_OFLOW] interrupt bit. */
        uint32_t reserved_17_31        : 15;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_int_sum_w1s_s cn; */
};
typedef union cavm_mdabx_int_sum_w1s cavm_mdabx_int_sum_w1s_t;

static inline uint64_t CAVM_MDABX_INT_SUM_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_INT_SUM_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008160ll + 0x80000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e044008160ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_INT_SUM_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_INT_SUM_W1S(a) cavm_mdabx_int_sum_w1s_t
#define bustype_CAVM_MDABX_INT_SUM_W1S(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_INT_SUM_W1S(a) "MDABX_INT_SUM_W1S"
#define device_bar_CAVM_MDABX_INT_SUM_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_INT_SUM_W1S(a) (a)
#define arguments_CAVM_MDABX_INT_SUM_W1S(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_int_vec_addr
 *
 * MDAB Interrupt Vector Address Register
 * This register sets the address for usage in case of INT Vec assertion. It is also
 * used upon reset exit for boot address when boot register is set.
 */
union cavm_mdabx_int_vec_addr
{
    uint32_t u;
    struct cavm_mdabx_int_vec_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t vecaddr               : 28; /**< [ 31:  4](R/W) Handler vector address. */
        uint32_t reserved_1_3          : 3;
        uint32_t vintc                 : 1;  /**< [  0:  0](R/W) Context switch control. */
#else /* Word 0 - Little Endian */
        uint32_t vintc                 : 1;  /**< [  0:  0](R/W) Context switch control. */
        uint32_t reserved_1_3          : 3;
        uint32_t vecaddr               : 28; /**< [ 31:  4](R/W) Handler vector address. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_int_vec_addr_s cn; */
};
typedef union cavm_mdabx_int_vec_addr cavm_mdabx_int_vec_addr_t;

static inline uint64_t CAVM_MDABX_INT_VEC_ADDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_INT_VEC_ADDR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e044008ae0ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_INT_VEC_ADDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_INT_VEC_ADDR(a) cavm_mdabx_int_vec_addr_t
#define bustype_CAVM_MDABX_INT_VEC_ADDR(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_INT_VEC_ADDR(a) "MDABX_INT_VEC_ADDR"
#define device_bar_CAVM_MDABX_INT_VEC_ADDR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_INT_VEC_ADDR(a) (a)
#define arguments_CAVM_MDABX_INT_VEC_ADDR(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_interrupt_active
 *
 * MDAB Interrupt Active Status Register
 * This register indicates which JOB interrupts are enabled and active.
 */
union cavm_mdabx_interrupt_active
{
    uint32_t u;
    struct cavm_mdabx_interrupt_active_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_17_31        : 15;
        uint32_t rd_dma_slice_fifo_oflow : 1;/**< [ 16: 16](RO/H) Indicates the RD_DMA_SLICE_FIFO_OFLOW interrupt is active. */
        uint32_t wr_dma_slice_fifo_oflow : 1;/**< [ 15: 15](RO/H) Indicates the WR_DMA_SLICE_FIFO_OFLOW interrupt is active. */
        uint32_t rd_dma_eob_err        : 1;  /**< [ 14: 14](RO/H) Indicates the RD_DMA_EOB_ERR interrupt is active. */
        uint32_t cfg_dma_eob_err       : 1;  /**< [ 13: 13](RO/H) Indicates the CFG_DMA_EOB_ERR interrupt is active. */
        uint32_t job_rdy1              : 1;  /**< [ 12: 12](RO/H) Indicates the JOB_RDY1 interrupt is active. */
        uint32_t job_rdy0              : 1;  /**< [ 11: 11](RO/H) Indicates the JOB_RDY0 interrupt is active. */
        uint32_t wr_dma_uflow          : 1;  /**< [ 10: 10](RO/H) Indicates the WR_DMA_UFLOW interrupt is active. */
        uint32_t wr_dma_oflow          : 1;  /**< [  9:  9](RO/H) Indicates the WR_DMA_OFLOW interrupt is active. */
        uint32_t wr_dma_last_done      : 1;  /**< [  8:  8](RO/H) Indicates the WR_DMA_LAST_DONE interrupt is active. */
        uint32_t wr_dma_slice_done     : 1;  /**< [  7:  7](RO/H) Indicates the WR_DMA_SLICE_DONE interrupt is active. */
        uint32_t wr_dma_pending        : 1;  /**< [  6:  6](RO/H) Indicates the WR_DMA_PENDING interrupt is active. */
        uint32_t rd_dma_last_done      : 1;  /**< [  5:  5](RO/H) Indicates the RD_DMA_LAST_DONE interrupt is active. */
        uint32_t rd_dma_slice_done     : 1;  /**< [  4:  4](RO/H) Indicates the RD_DMA_SLICE_DONE interrupt is active. */
        uint32_t rd_dma_pending        : 1;  /**< [  3:  3](RO/H) Indicates the RD_DMA_PENDING interrupt is active. */
        uint32_t cfg_dma_last_done     : 1;  /**< [  2:  2](RO/H) Indicates the CFG_DMA_LAST_DONE interrupt is active. */
        uint32_t cfg_dma_slice_done    : 1;  /**< [  1:  1](RO/H) Indicates the CFG_DMA_SLICE_DONE interrupt is active. */
        uint32_t cfg_dma_pending       : 1;  /**< [  0:  0](RO/H) Indicates the CFG_DMA_PENDING interrupt is active. */
#else /* Word 0 - Little Endian */
        uint32_t cfg_dma_pending       : 1;  /**< [  0:  0](RO/H) Indicates the CFG_DMA_PENDING interrupt is active. */
        uint32_t cfg_dma_slice_done    : 1;  /**< [  1:  1](RO/H) Indicates the CFG_DMA_SLICE_DONE interrupt is active. */
        uint32_t cfg_dma_last_done     : 1;  /**< [  2:  2](RO/H) Indicates the CFG_DMA_LAST_DONE interrupt is active. */
        uint32_t rd_dma_pending        : 1;  /**< [  3:  3](RO/H) Indicates the RD_DMA_PENDING interrupt is active. */
        uint32_t rd_dma_slice_done     : 1;  /**< [  4:  4](RO/H) Indicates the RD_DMA_SLICE_DONE interrupt is active. */
        uint32_t rd_dma_last_done      : 1;  /**< [  5:  5](RO/H) Indicates the RD_DMA_LAST_DONE interrupt is active. */
        uint32_t wr_dma_pending        : 1;  /**< [  6:  6](RO/H) Indicates the WR_DMA_PENDING interrupt is active. */
        uint32_t wr_dma_slice_done     : 1;  /**< [  7:  7](RO/H) Indicates the WR_DMA_SLICE_DONE interrupt is active. */
        uint32_t wr_dma_last_done      : 1;  /**< [  8:  8](RO/H) Indicates the WR_DMA_LAST_DONE interrupt is active. */
        uint32_t wr_dma_oflow          : 1;  /**< [  9:  9](RO/H) Indicates the WR_DMA_OFLOW interrupt is active. */
        uint32_t wr_dma_uflow          : 1;  /**< [ 10: 10](RO/H) Indicates the WR_DMA_UFLOW interrupt is active. */
        uint32_t job_rdy0              : 1;  /**< [ 11: 11](RO/H) Indicates the JOB_RDY0 interrupt is active. */
        uint32_t job_rdy1              : 1;  /**< [ 12: 12](RO/H) Indicates the JOB_RDY1 interrupt is active. */
        uint32_t cfg_dma_eob_err       : 1;  /**< [ 13: 13](RO/H) Indicates the CFG_DMA_EOB_ERR interrupt is active. */
        uint32_t rd_dma_eob_err        : 1;  /**< [ 14: 14](RO/H) Indicates the RD_DMA_EOB_ERR interrupt is active. */
        uint32_t wr_dma_slice_fifo_oflow : 1;/**< [ 15: 15](RO/H) Indicates the WR_DMA_SLICE_FIFO_OFLOW interrupt is active. */
        uint32_t rd_dma_slice_fifo_oflow : 1;/**< [ 16: 16](RO/H) Indicates the RD_DMA_SLICE_FIFO_OFLOW interrupt is active. */
        uint32_t reserved_17_31        : 15;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_interrupt_active_s cn; */
};
typedef union cavm_mdabx_interrupt_active cavm_mdabx_interrupt_active_t;

static inline uint64_t CAVM_MDABX_INTERRUPT_ACTIVE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_INTERRUPT_ACTIVE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008280ll + 0x80000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e044008280ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_INTERRUPT_ACTIVE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_INTERRUPT_ACTIVE(a) cavm_mdabx_interrupt_active_t
#define bustype_CAVM_MDABX_INTERRUPT_ACTIVE(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_INTERRUPT_ACTIVE(a) "MDABX_INTERRUPT_ACTIVE"
#define device_bar_CAVM_MDABX_INTERRUPT_ACTIVE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_INTERRUPT_ACTIVE(a) (a)
#define arguments_CAVM_MDABX_INTERRUPT_ACTIVE(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_ipb_ctl
 *
 * MDAB IPB Control Register
 * IPB Control Register.
 */
union cavm_mdabx_ipb_ctl
{
    uint32_t u;
    struct cavm_mdabx_ipb_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_6_31         : 26;
        uint32_t prefetch_size         : 6;  /**< [  5:  0](R/W) Defines the prefetch size in cache lines on a miss (maximum: 8).
                                                                 When configured to 0, IPB prefetch is disabled. */
#else /* Word 0 - Little Endian */
        uint32_t prefetch_size         : 6;  /**< [  5:  0](R/W) Defines the prefetch size in cache lines on a miss (maximum: 8).
                                                                 When configured to 0, IPB prefetch is disabled. */
        uint32_t reserved_6_31         : 26;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_ipb_ctl_s cn10; */
    /* struct cavm_mdabx_ipb_ctl_s cnf10ka; */
    struct cavm_mdabx_ipb_ctl_cnf10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_6_31         : 26;
        uint32_t prefetch_size         : 6;  /**< [  5:  0](R/W) Defines the prefetch size in cache lines on a miss (maximum: 32).
                                                                 When configured to 0, IPB prefetch is disabled. */
#else /* Word 0 - Little Endian */
        uint32_t prefetch_size         : 6;  /**< [  5:  0](R/W) Defines the prefetch size in cache lines on a miss (maximum: 32).
                                                                 When configured to 0, IPB prefetch is disabled. */
        uint32_t reserved_6_31         : 26;
#endif /* Word 0 - End */
    } cnf10kb;
};
typedef union cavm_mdabx_ipb_ctl cavm_mdabx_ipb_ctl_t;

static inline uint64_t CAVM_MDABX_IPB_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_IPB_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e0440082c0ll + 0x80000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e0440082c0ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_IPB_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_IPB_CTL(a) cavm_mdabx_ipb_ctl_t
#define bustype_CAVM_MDABX_IPB_CTL(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_IPB_CTL(a) "MDABX_IPB_CTL"
#define device_bar_CAVM_MDABX_IPB_CTL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_IPB_CTL(a) (a)
#define arguments_CAVM_MDABX_IPB_CTL(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_ipb_flush
 *
 * MDAB IPB Flush Register
 */
union cavm_mdabx_ipb_flush
{
    uint32_t u;
    struct cavm_mdabx_ipb_flush_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_2_31         : 30;
        uint32_t flush                 : 1;  /**< [  1:  1](R/W1S/H) Write to 1 to flush the IPB.
                                                                 This can be done only if field IPB IDLE is 1 and MDAB_IPB_PERF_CTL.ENABLE = 0. */
        uint32_t idle                  : 1;  /**< [  0:  0](RO/H) Set by the IPB whenever it is not servicing a cache miss request and the
                                                                 IPB Performance Measurement counters are disabled.
                                                                 For a flush operation, SW should turn off the IPB Performance Measurement counters by writing
                                                                 MDAB_IPB_PERF_CTL.ENABLE = 0, before reading this register.
                                                                 Performance Measurement counters may be re-enabled if desired, after the IPB Flush. */
#else /* Word 0 - Little Endian */
        uint32_t idle                  : 1;  /**< [  0:  0](RO/H) Set by the IPB whenever it is not servicing a cache miss request and the
                                                                 IPB Performance Measurement counters are disabled.
                                                                 For a flush operation, SW should turn off the IPB Performance Measurement counters by writing
                                                                 MDAB_IPB_PERF_CTL.ENABLE = 0, before reading this register.
                                                                 Performance Measurement counters may be re-enabled if desired, after the IPB Flush. */
        uint32_t flush                 : 1;  /**< [  1:  1](R/W1S/H) Write to 1 to flush the IPB.
                                                                 This can be done only if field IPB IDLE is 1 and MDAB_IPB_PERF_CTL.ENABLE = 0. */
        uint32_t reserved_2_31         : 30;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_ipb_flush_s cn; */
};
typedef union cavm_mdabx_ipb_flush cavm_mdabx_ipb_flush_t;

static inline uint64_t CAVM_MDABX_IPB_FLUSH(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_IPB_FLUSH(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e0440082f0ll + 0x80000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e0440082f0ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_IPB_FLUSH", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_IPB_FLUSH(a) cavm_mdabx_ipb_flush_t
#define bustype_CAVM_MDABX_IPB_FLUSH(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_IPB_FLUSH(a) "MDABX_IPB_FLUSH"
#define device_bar_CAVM_MDABX_IPB_FLUSH(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_IPB_FLUSH(a) (a)
#define arguments_CAVM_MDABX_IPB_FLUSH(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_ipb_perf_ctl
 *
 * IPB Performance Measurement Control Register
 * IPB Performance Measurement Control.
 */
union cavm_mdabx_ipb_perf_ctl
{
    uint32_t u;
    struct cavm_mdabx_ipb_perf_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_1_31         : 31;
        uint32_t enable                : 1;  /**< [  0:  0](R/W) Enable/disable IPB performance measurement. Write 1 to enable and 0 to disable. */
#else /* Word 0 - Little Endian */
        uint32_t enable                : 1;  /**< [  0:  0](R/W) Enable/disable IPB performance measurement. Write 1 to enable and 0 to disable. */
        uint32_t reserved_1_31         : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_ipb_perf_ctl_s cn; */
};
typedef union cavm_mdabx_ipb_perf_ctl cavm_mdabx_ipb_perf_ctl_t;

static inline uint64_t CAVM_MDABX_IPB_PERF_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_IPB_PERF_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e0440084a0ll + 0x80000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e0440084a0ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_IPB_PERF_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_IPB_PERF_CTL(a) cavm_mdabx_ipb_perf_ctl_t
#define bustype_CAVM_MDABX_IPB_PERF_CTL(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_IPB_PERF_CTL(a) "MDABX_IPB_PERF_CTL"
#define device_bar_CAVM_MDABX_IPB_PERF_CTL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_IPB_PERF_CTL(a) (a)
#define arguments_CAVM_MDABX_IPB_PERF_CTL(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_ipb_perf_hitcnt
 *
 * IPB Hit Register
 * Count number of IPB hits.
 */
union cavm_mdabx_ipb_perf_hitcnt
{
    uint32_t u;
    struct cavm_mdabx_ipb_perf_hitcnt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t hit_count             : 32; /**< [ 31:  0](RO/H) This counter is incremented each time the cache line requested is present in the IPB.
                                                                 Counter is cleared and enabled by writing 1 to field ENABLE of register IPB_PERF_CTL.
                                                                 Counter is disabled by writing 0 to field ENABLE of register IPB_PERF_CTL. */
#else /* Word 0 - Little Endian */
        uint32_t hit_count             : 32; /**< [ 31:  0](RO/H) This counter is incremented each time the cache line requested is present in the IPB.
                                                                 Counter is cleared and enabled by writing 1 to field ENABLE of register IPB_PERF_CTL.
                                                                 Counter is disabled by writing 0 to field ENABLE of register IPB_PERF_CTL. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_ipb_perf_hitcnt_s cn; */
};
typedef union cavm_mdabx_ipb_perf_hitcnt cavm_mdabx_ipb_perf_hitcnt_t;

static inline uint64_t CAVM_MDABX_IPB_PERF_HITCNT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_IPB_PERF_HITCNT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e0440084c0ll + 0x80000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e0440084c0ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_IPB_PERF_HITCNT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_IPB_PERF_HITCNT(a) cavm_mdabx_ipb_perf_hitcnt_t
#define bustype_CAVM_MDABX_IPB_PERF_HITCNT(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_IPB_PERF_HITCNT(a) "MDABX_IPB_PERF_HITCNT"
#define device_bar_CAVM_MDABX_IPB_PERF_HITCNT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_IPB_PERF_HITCNT(a) (a)
#define arguments_CAVM_MDABX_IPB_PERF_HITCNT(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_ipb_perf_misscnt
 *
 * IPB Cache Miss Request Register
 * Count number of cache miss requests received by the IPB.
 */
union cavm_mdabx_ipb_perf_misscnt
{
    uint32_t u;
    struct cavm_mdabx_ipb_perf_misscnt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t miss_count            : 32; /**< [ 31:  0](RO/H) This counter is incremented each time a cache miss request is received by the IPB.
                                                                 Counter is cleared and enabled by writing 1 to field ENABLE of register IPB_PERF_CTL.
                                                                 Counter is disabled by writing 0 to field ENABLE of register IPB_PERF_CTL. */
#else /* Word 0 - Little Endian */
        uint32_t miss_count            : 32; /**< [ 31:  0](RO/H) This counter is incremented each time a cache miss request is received by the IPB.
                                                                 Counter is cleared and enabled by writing 1 to field ENABLE of register IPB_PERF_CTL.
                                                                 Counter is disabled by writing 0 to field ENABLE of register IPB_PERF_CTL. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_ipb_perf_misscnt_s cn; */
};
typedef union cavm_mdabx_ipb_perf_misscnt cavm_mdabx_ipb_perf_misscnt_t;

static inline uint64_t CAVM_MDABX_IPB_PERF_MISSCNT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_IPB_PERF_MISSCNT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e0440084b0ll + 0x80000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e0440084b0ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_IPB_PERF_MISSCNT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_IPB_PERF_MISSCNT(a) cavm_mdabx_ipb_perf_misscnt_t
#define bustype_CAVM_MDABX_IPB_PERF_MISSCNT(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_IPB_PERF_MISSCNT(a) "MDABX_IPB_PERF_MISSCNT"
#define device_bar_CAVM_MDABX_IPB_PERF_MISSCNT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_IPB_PERF_MISSCNT(a) (a)
#define arguments_CAVM_MDABX_IPB_PERF_MISSCNT(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_ipb_pfrange_max
 *
 * MDAB IPB Maximum Prefetch Range Register
 */
union cavm_mdabx_ipb_pfrange_max
{
    uint32_t u;
    struct cavm_mdabx_ipb_pfrange_max_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t prefetch_max          : 28; /**< [ 31:  4](R/W) The upper (max) address bound for Prefetch Range check. Value must be aligned to cache line size.
                                                                 Address must be within the SMEM address space. For more details see "IPB Prefetch
                                                                 Range-Check" section. */
        uint32_t reserved_0_3          : 4;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_3          : 4;
        uint32_t prefetch_max          : 28; /**< [ 31:  4](R/W) The upper (max) address bound for Prefetch Range check. Value must be aligned to cache line size.
                                                                 Address must be within the SMEM address space. For more details see "IPB Prefetch
                                                                 Range-Check" section. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_ipb_pfrange_max_s cn; */
};
typedef union cavm_mdabx_ipb_pfrange_max cavm_mdabx_ipb_pfrange_max_t;

static inline uint64_t CAVM_MDABX_IPB_PFRANGE_MAX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_IPB_PFRANGE_MAX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e0440082e0ll + 0x80000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e0440082e0ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_IPB_PFRANGE_MAX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_IPB_PFRANGE_MAX(a) cavm_mdabx_ipb_pfrange_max_t
#define bustype_CAVM_MDABX_IPB_PFRANGE_MAX(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_IPB_PFRANGE_MAX(a) "MDABX_IPB_PFRANGE_MAX"
#define device_bar_CAVM_MDABX_IPB_PFRANGE_MAX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_IPB_PFRANGE_MAX(a) (a)
#define arguments_CAVM_MDABX_IPB_PFRANGE_MAX(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_ipb_pfrange_min
 *
 * MDAB IPB Minimum Prefetch Range Register
 */
union cavm_mdabx_ipb_pfrange_min
{
    uint32_t u;
    struct cavm_mdabx_ipb_pfrange_min_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t prefetch_min          : 28; /**< [ 31:  4](R/W) The lower (min) address bound for prefetch range check. Value must be aligned to cache line size.
                                                                 Address must be within the SMEM address space. For more details see "IPB Prefetch
                                                                 Range-Check" section. */
        uint32_t reserved_1_3          : 3;
        uint32_t prefetch_range        : 1;  /**< [  0:  0](R/W) When RANGE=0(IN) - All I$ Miss addresses \>= MIN AND \<= MAX
                                                                 will generate the 'n' programmable PFETCHes.
                                                                 When RANGE=1(OUT) - All I$ Miss addresses \< MIN OR \> MAX
                                                                 will generate the 'n' programmable PFETCHes. */
#else /* Word 0 - Little Endian */
        uint32_t prefetch_range        : 1;  /**< [  0:  0](R/W) When RANGE=0(IN) - All I$ Miss addresses \>= MIN AND \<= MAX
                                                                 will generate the 'n' programmable PFETCHes.
                                                                 When RANGE=1(OUT) - All I$ Miss addresses \< MIN OR \> MAX
                                                                 will generate the 'n' programmable PFETCHes. */
        uint32_t reserved_1_3          : 3;
        uint32_t prefetch_min          : 28; /**< [ 31:  4](R/W) The lower (min) address bound for prefetch range check. Value must be aligned to cache line size.
                                                                 Address must be within the SMEM address space. For more details see "IPB Prefetch
                                                                 Range-Check" section. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_ipb_pfrange_min_s cn; */
};
typedef union cavm_mdabx_ipb_pfrange_min cavm_mdabx_ipb_pfrange_min_t;

static inline uint64_t CAVM_MDABX_IPB_PFRANGE_MIN(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_IPB_PFRANGE_MIN(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e0440082d0ll + 0x80000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e0440082d0ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_IPB_PFRANGE_MIN", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_IPB_PFRANGE_MIN(a) cavm_mdabx_ipb_pfrange_min_t
#define bustype_CAVM_MDABX_IPB_PFRANGE_MIN(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_IPB_PFRANGE_MIN(a) "MDABX_IPB_PFRANGE_MIN"
#define device_bar_CAVM_MDABX_IPB_PFRANGE_MIN(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_IPB_PFRANGE_MIN(a) (a)
#define arguments_CAVM_MDABX_IPB_PFRANGE_MIN(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_job_ptr_hi#
 *
 * MDAB Job Pointer Upper Bits Register
 * Reports the upper pointer bits of the job in each slot. When a job is received from
 * the PSM, its pointer
 * will always be reflected in one of these two registers until the job completes. The job
 * will not complete until MDAB_JOB_STATUS(0..1)
 * bits 0..5 have all been set.
 */
union cavm_mdabx_job_ptr_hix
{
    uint32_t u;
    struct cavm_mdabx_job_ptr_hix_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_31           : 1;
        uint32_t gmid                  : 3;  /**< [ 30: 28](RO/H) The GMID field from the PSM command that created the job. */
        uint32_t reserved_21_27        : 7;
        uint32_t job_ptr_hi            : 21; /**< [ 20:  0](RO/H) The JOB_PTR field bits [52:32] from the PSM command that created the job.
                                                                 Since MDAB hardware updates this register, its contents are unpredictable in software. */
#else /* Word 0 - Little Endian */
        uint32_t job_ptr_hi            : 21; /**< [ 20:  0](RO/H) The JOB_PTR field bits [52:32] from the PSM command that created the job.
                                                                 Since MDAB hardware updates this register, its contents are unpredictable in software. */
        uint32_t reserved_21_27        : 7;
        uint32_t gmid                  : 3;  /**< [ 30: 28](RO/H) The GMID field from the PSM command that created the job. */
        uint32_t reserved_31           : 1;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_job_ptr_hix_s cn; */
};
typedef union cavm_mdabx_job_ptr_hix cavm_mdabx_job_ptr_hix_t;

static inline uint64_t CAVM_MDABX_JOB_PTR_HIX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_JOB_PTR_HIX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))) && (b<=1)))
        return 0x87e044008410ll + 0x80000ll * ((a) & 0x7f) + 0x20ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=47) && (b<=1)))
        return 0x87e044008410ll + 0x80000ll * ((a) & 0x3f) + 0x20ll * ((b) & 0x1);
    __cavm_csr_fatal("MDABX_JOB_PTR_HIX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_JOB_PTR_HIX(a,b) cavm_mdabx_job_ptr_hix_t
#define bustype_CAVM_MDABX_JOB_PTR_HIX(a,b) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_JOB_PTR_HIX(a,b) "MDABX_JOB_PTR_HIX"
#define device_bar_CAVM_MDABX_JOB_PTR_HIX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_JOB_PTR_HIX(a,b) (a)
#define arguments_CAVM_MDABX_JOB_PTR_HIX(a,b) (a),(b),-1,-1

/**
 * Register (MULTIRSL32b) mdab#_job_ptr_lo#
 *
 * MDAB Job Pointer Lower Bits Register
 * Reports the lower pointer bits of the job in each slot. When a job is received from
 * the PSM, its pointer
 * will always be reflected in one of these two registers until the job completes. The job
 * will not complete until MDAB_JOB_STATUS(0..1)
 * bits 0..5 have all been set.
 */
union cavm_mdabx_job_ptr_lox
{
    uint32_t u;
    struct cavm_mdabx_job_ptr_lox_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t job_ptr_lo            : 32; /**< [ 31:  0](RO/H) The JOB_PTR field bits [31:0] from the PSM command that created the job.
                                                                 Since MDAB hardware updates this register, its contents are unpredictable in software. */
#else /* Word 0 - Little Endian */
        uint32_t job_ptr_lo            : 32; /**< [ 31:  0](RO/H) The JOB_PTR field bits [31:0] from the PSM command that created the job.
                                                                 Since MDAB hardware updates this register, its contents are unpredictable in software. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_job_ptr_lox_s cn; */
};
typedef union cavm_mdabx_job_ptr_lox cavm_mdabx_job_ptr_lox_t;

static inline uint64_t CAVM_MDABX_JOB_PTR_LOX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_JOB_PTR_LOX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))) && (b<=1)))
        return 0x87e044008400ll + 0x80000ll * ((a) & 0x7f) + 0x20ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=47) && (b<=1)))
        return 0x87e044008400ll + 0x80000ll * ((a) & 0x3f) + 0x20ll * ((b) & 0x1);
    __cavm_csr_fatal("MDABX_JOB_PTR_LOX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_JOB_PTR_LOX(a,b) cavm_mdabx_job_ptr_lox_t
#define bustype_CAVM_MDABX_JOB_PTR_LOX(a,b) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_JOB_PTR_LOX(a,b) "MDABX_JOB_PTR_LOX"
#define device_bar_CAVM_MDABX_JOB_PTR_LOX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_JOB_PTR_LOX(a,b) (a)
#define arguments_CAVM_MDABX_JOB_PTR_LOX(a,b) (a),(b),-1,-1

/**
 * Register (MULTIRSL32b) mdab#_job_status#
 *
 * MDAB Job Status Register
 * Reports the status for the job in each slot. When a job is received from the PSM, its status
 * will always be reflected in one of these two status registers until the job completes. The job
 * will not complete until
 * bits 0..5 have all been set.
 */
union cavm_mdabx_job_statusx
{
    uint32_t u;
    struct cavm_mdabx_job_statusx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t job_tag               : 16; /**< [ 31: 16](RO/H) The JOB_TAG field from the PSM command that created the job.
                                                                 Since MDAB hardware updates this register, its contents are unpredictable in software. */
        uint32_t job_type              : 2;  /**< [ 15: 14](RO/H) The JOB_TYPE field from the PSM command that created the job.
                                                                 The MDBW_JD_HDR_WORD_0_S[DSP_JOB_TYPE] value from the job descriptor, enumerated
                                                                 by MDBW_DSP_JOB_SEL_E.
                                                                 Since MDAB hardware updates this register, its contents are unpredictable in software. */
        uint32_t reserved_6_13         : 8;
        uint32_t wr_dma_done           : 1;  /**< [  5:  5](RO/H) Set when hardware completes all write DMA transfers and all writes have been committed to
                                                                 SMEM or LLC/DRAM memory.
                                                                 Since MDAB hardware updates this register, its contents are unpredictable in software. */
        uint32_t rd_dma_done           : 1;  /**< [  4:  4](RO/H) Set when hardware completes all read DMA transfers and the data has been committed to
                                                                 DSP local instruction memory and local data memory.
                                                                 Since MDAB hardware updates this register, its contents are unpredictable in software. */
        uint32_t cfg_dma_done          : 1;  /**< [  3:  3](RO/H) Set when hardware completes all CFG DMA transfers for the job configuration and the
                                                                 configuration has been committed to DSP local instruction memory and local data memory. */
        uint32_t sw_done               : 1;  /**< [  2:  2](R/W1S/H) Software must set this bit to signal when it has finished all processing for a job. */
        uint32_t sw_started            : 1;  /**< [  1:  1](R/W1S/H) Software can set this bit to record when it began processing the job. The time when this
                                                                 bit is set will be used by the job watchdog timer and will be used to determine the job
                                                                 runtime
                                                                 recorded in the job log. */
        uint32_t valid                 : 1;  /**< [  0:  0](RO/H) Set to one when the status reflects a valid job has been received from the PSM. Set to
                                                                 zero
                                                                 when there is no job in the given slot. */
#else /* Word 0 - Little Endian */
        uint32_t valid                 : 1;  /**< [  0:  0](RO/H) Set to one when the status reflects a valid job has been received from the PSM. Set to
                                                                 zero
                                                                 when there is no job in the given slot. */
        uint32_t sw_started            : 1;  /**< [  1:  1](R/W1S/H) Software can set this bit to record when it began processing the job. The time when this
                                                                 bit is set will be used by the job watchdog timer and will be used to determine the job
                                                                 runtime
                                                                 recorded in the job log. */
        uint32_t sw_done               : 1;  /**< [  2:  2](R/W1S/H) Software must set this bit to signal when it has finished all processing for a job. */
        uint32_t cfg_dma_done          : 1;  /**< [  3:  3](RO/H) Set when hardware completes all CFG DMA transfers for the job configuration and the
                                                                 configuration has been committed to DSP local instruction memory and local data memory. */
        uint32_t rd_dma_done           : 1;  /**< [  4:  4](RO/H) Set when hardware completes all read DMA transfers and the data has been committed to
                                                                 DSP local instruction memory and local data memory.
                                                                 Since MDAB hardware updates this register, its contents are unpredictable in software. */
        uint32_t wr_dma_done           : 1;  /**< [  5:  5](RO/H) Set when hardware completes all write DMA transfers and all writes have been committed to
                                                                 SMEM or LLC/DRAM memory.
                                                                 Since MDAB hardware updates this register, its contents are unpredictable in software. */
        uint32_t reserved_6_13         : 8;
        uint32_t job_type              : 2;  /**< [ 15: 14](RO/H) The JOB_TYPE field from the PSM command that created the job.
                                                                 The MDBW_JD_HDR_WORD_0_S[DSP_JOB_TYPE] value from the job descriptor, enumerated
                                                                 by MDBW_DSP_JOB_SEL_E.
                                                                 Since MDAB hardware updates this register, its contents are unpredictable in software. */
        uint32_t job_tag               : 16; /**< [ 31: 16](RO/H) The JOB_TAG field from the PSM command that created the job.
                                                                 Since MDAB hardware updates this register, its contents are unpredictable in software. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_job_statusx_s cn; */
};
typedef union cavm_mdabx_job_statusx cavm_mdabx_job_statusx_t;

static inline uint64_t CAVM_MDABX_JOB_STATUSX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_JOB_STATUSX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))) && (b<=1)))
        return 0x87e044008000ll + 0x80000ll * ((a) & 0x7f) + 0x10ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=47) && (b<=1)))
        return 0x87e044008000ll + 0x80000ll * ((a) & 0x3f) + 0x10ll * ((b) & 0x1);
    __cavm_csr_fatal("MDABX_JOB_STATUSX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_JOB_STATUSX(a,b) cavm_mdabx_job_statusx_t
#define bustype_CAVM_MDABX_JOB_STATUSX(a,b) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_JOB_STATUSX(a,b) "MDABX_JOB_STATUSX"
#define device_bar_CAVM_MDABX_JOB_STATUSX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_JOB_STATUSX(a,b) (a)
#define arguments_CAVM_MDABX_JOB_STATUSX(a,b) (a),(b),-1,-1

/**
 * Register (MULTIRSL32b) mdab#_job_status1#
 *
 * MDAB Job Status1 Register
 * Additional job status information for software.
 */
union cavm_mdabx_job_status1x
{
    uint32_t u;
    struct cavm_mdabx_job_status1x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_9_31         : 23;
        uint32_t cfg_cnt               : 9;  /**< [  8:  0](RO/H) Contains the total CFG-DMA transfer count in 128B chunks. */
#else /* Word 0 - Little Endian */
        uint32_t cfg_cnt               : 9;  /**< [  8:  0](RO/H) Contains the total CFG-DMA transfer count in 128B chunks. */
        uint32_t reserved_9_31         : 23;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_job_status1x_s cn; */
};
typedef union cavm_mdabx_job_status1x cavm_mdabx_job_status1x_t;

static inline uint64_t CAVM_MDABX_JOB_STATUS1X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_JOB_STATUS1X(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))) && (b<=1)))
        return 0x87e0440080e0ll + 0x80000ll * ((a) & 0x7f) + 0x10ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=47) && (b<=1)))
        return 0x87e0440080e0ll + 0x80000ll * ((a) & 0x3f) + 0x10ll * ((b) & 0x1);
    __cavm_csr_fatal("MDABX_JOB_STATUS1X", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_JOB_STATUS1X(a,b) cavm_mdabx_job_status1x_t
#define bustype_CAVM_MDABX_JOB_STATUS1X(a,b) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_JOB_STATUS1X(a,b) "MDABX_JOB_STATUS1X"
#define device_bar_CAVM_MDABX_JOB_STATUS1X(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_JOB_STATUS1X(a,b) (a)
#define arguments_CAVM_MDABX_JOB_STATUS1X(a,b) (a),(b),-1,-1

/**
 * Register (MULTIRSL32b) mdab#_ld_int_ena_w1c
 *
 * MDAB Load Local Interrupt Enable Clear Register
 * This is the INT_ENA clear register for the load local start and done interrupts.
 */
union cavm_mdabx_ld_int_ena_w1c
{
    uint32_t u;
    struct cavm_mdabx_ld_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_2_31         : 30;
        uint32_t ld_lcl_done_int       : 1;  /**< [  1:  1](R/W1C/H) Writing a 1 to this bit disables the load local done interrupt. */
        uint32_t ld_lcl_start_int      : 1;  /**< [  0:  0](R/W1C/H) Writing a 1 to this bit disables the load local start interrupt. */
#else /* Word 0 - Little Endian */
        uint32_t ld_lcl_start_int      : 1;  /**< [  0:  0](R/W1C/H) Writing a 1 to this bit disables the load local start interrupt. */
        uint32_t ld_lcl_done_int       : 1;  /**< [  1:  1](R/W1C/H) Writing a 1 to this bit disables the load local done interrupt. */
        uint32_t reserved_2_31         : 30;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_ld_int_ena_w1c_s cn; */
};
typedef union cavm_mdabx_ld_int_ena_w1c cavm_mdabx_ld_int_ena_w1c_t;

static inline uint64_t CAVM_MDABX_LD_INT_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_LD_INT_ENA_W1C(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008240ll + 0x80000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e044008240ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_LD_INT_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_LD_INT_ENA_W1C(a) cavm_mdabx_ld_int_ena_w1c_t
#define bustype_CAVM_MDABX_LD_INT_ENA_W1C(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_LD_INT_ENA_W1C(a) "MDABX_LD_INT_ENA_W1C"
#define device_bar_CAVM_MDABX_LD_INT_ENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_LD_INT_ENA_W1C(a) (a)
#define arguments_CAVM_MDABX_LD_INT_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_ld_int_ena_w1s
 *
 * MDAB Load Local Interrupt Enable Set Register
 * This is the INT_ENA set register for the load local start and done interrupts.
 */
union cavm_mdabx_ld_int_ena_w1s
{
    uint32_t u;
    struct cavm_mdabx_ld_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_2_31         : 30;
        uint32_t ld_lcl_done_int       : 1;  /**< [  1:  1](R/W1S/H) Writing a 1 to this bit enables the load local done interrupt. */
        uint32_t ld_lcl_start_int      : 1;  /**< [  0:  0](R/W1S/H) Writing a 1 to this bit enables the load local start interrupt. */
#else /* Word 0 - Little Endian */
        uint32_t ld_lcl_start_int      : 1;  /**< [  0:  0](R/W1S/H) Writing a 1 to this bit enables the load local start interrupt. */
        uint32_t ld_lcl_done_int       : 1;  /**< [  1:  1](R/W1S/H) Writing a 1 to this bit enables the load local done interrupt. */
        uint32_t reserved_2_31         : 30;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_ld_int_ena_w1s_s cn; */
};
typedef union cavm_mdabx_ld_int_ena_w1s cavm_mdabx_ld_int_ena_w1s_t;

static inline uint64_t CAVM_MDABX_LD_INT_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_LD_INT_ENA_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008250ll + 0x80000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e044008250ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_LD_INT_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_LD_INT_ENA_W1S(a) cavm_mdabx_ld_int_ena_w1s_t
#define bustype_CAVM_MDABX_LD_INT_ENA_W1S(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_LD_INT_ENA_W1S(a) "MDABX_LD_INT_ENA_W1S"
#define device_bar_CAVM_MDABX_LD_INT_ENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_LD_INT_ENA_W1S(a) (a)
#define arguments_CAVM_MDABX_LD_INT_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_ld_int_sum
 *
 * MDAB Load Local Interrrupt Summary Clear Register
 * This is the INT_SUM clear register for the load local start and done interrupts.
 */
union cavm_mdabx_ld_int_sum
{
    uint32_t u;
    struct cavm_mdabx_ld_int_sum_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_2_31         : 30;
        uint32_t ld_lcl_done_int       : 1;  /**< [  1:  1](R/W1C/H) Writing a 1 to this bit clears the INT_SUM bit for the load local done interrupt. */
        uint32_t ld_lcl_start_int      : 1;  /**< [  0:  0](R/W1C/H) Writing a 1 to this bit clears the INT_SUM bit for the load local start interrupt. */
#else /* Word 0 - Little Endian */
        uint32_t ld_lcl_start_int      : 1;  /**< [  0:  0](R/W1C/H) Writing a 1 to this bit clears the INT_SUM bit for the load local start interrupt. */
        uint32_t ld_lcl_done_int       : 1;  /**< [  1:  1](R/W1C/H) Writing a 1 to this bit clears the INT_SUM bit for the load local done interrupt. */
        uint32_t reserved_2_31         : 30;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_ld_int_sum_s cn; */
};
typedef union cavm_mdabx_ld_int_sum cavm_mdabx_ld_int_sum_t;

static inline uint64_t CAVM_MDABX_LD_INT_SUM(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_LD_INT_SUM(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008220ll + 0x80000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e044008220ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_LD_INT_SUM", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_LD_INT_SUM(a) cavm_mdabx_ld_int_sum_t
#define bustype_CAVM_MDABX_LD_INT_SUM(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_LD_INT_SUM(a) "MDABX_LD_INT_SUM"
#define device_bar_CAVM_MDABX_LD_INT_SUM(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_LD_INT_SUM(a) (a)
#define arguments_CAVM_MDABX_LD_INT_SUM(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_ld_int_sum_w1s
 *
 * MDAB Load Local Interrupt Summary Set Register
 * This is the INT_SUM set register for the load local start and done interrupts.
 */
union cavm_mdabx_ld_int_sum_w1s
{
    uint32_t u;
    struct cavm_mdabx_ld_int_sum_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_2_31         : 30;
        uint32_t ld_lcl_done_int       : 1;  /**< [  1:  1](R/W1S/H) This bit is set by the read DMA load local logic when a load_local_without_reset slice
                                                                 completes.  Writing a 1 to this bit sets the INT_SUM bit for the load local done
                                                                 interrupt.
                                                                 This allows software to generate the interrupt if the corresponding enable bit is set. */
        uint32_t ld_lcl_start_int      : 1;  /**< [  0:  0](R/W1S/H) This bit is set by the read DMA load local logic when a load_local_without_reset slice
                                                                 operation
                                                                 starts.  Writing a 1 to this bit sets the INT_SUM bit for the load local start interrupt.
                                                                 This allows software to generate the interrupt if the corresponding enable bit is set. */
#else /* Word 0 - Little Endian */
        uint32_t ld_lcl_start_int      : 1;  /**< [  0:  0](R/W1S/H) This bit is set by the read DMA load local logic when a load_local_without_reset slice
                                                                 operation
                                                                 starts.  Writing a 1 to this bit sets the INT_SUM bit for the load local start interrupt.
                                                                 This allows software to generate the interrupt if the corresponding enable bit is set. */
        uint32_t ld_lcl_done_int       : 1;  /**< [  1:  1](R/W1S/H) This bit is set by the read DMA load local logic when a load_local_without_reset slice
                                                                 completes.  Writing a 1 to this bit sets the INT_SUM bit for the load local done
                                                                 interrupt.
                                                                 This allows software to generate the interrupt if the corresponding enable bit is set. */
        uint32_t reserved_2_31         : 30;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_ld_int_sum_w1s_s cn; */
};
typedef union cavm_mdabx_ld_int_sum_w1s cavm_mdabx_ld_int_sum_w1s_t;

static inline uint64_t CAVM_MDABX_LD_INT_SUM_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_LD_INT_SUM_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008230ll + 0x80000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e044008230ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_LD_INT_SUM_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_LD_INT_SUM_W1S(a) cavm_mdabx_ld_int_sum_w1s_t
#define bustype_CAVM_MDABX_LD_INT_SUM_W1S(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_LD_INT_SUM_W1S(a) "MDABX_LD_INT_SUM_W1S"
#define device_bar_CAVM_MDABX_LD_INT_SUM_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_LD_INT_SUM_W1S(a) (a)
#define arguments_CAVM_MDABX_LD_INT_SUM_W1S(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_lfsr_c_init
 *
 * MDAB LFSR Initial Value Shift Register
 * Initial value for LFSR register 1 in the sequence generator.
 */
union cavm_mdabx_lfsr_c_init
{
    uint32_t u;
    struct cavm_mdabx_lfsr_c_init_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_31           : 1;
        uint32_t c_init                : 31; /**< [ 30:  0](R/W) Initial value for LFSR register. */
#else /* Word 0 - Little Endian */
        uint32_t c_init                : 31; /**< [ 30:  0](R/W) Initial value for LFSR register. */
        uint32_t reserved_31           : 1;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_lfsr_c_init_s cn; */
};
typedef union cavm_mdabx_lfsr_c_init cavm_mdabx_lfsr_c_init_t;

static inline uint64_t CAVM_MDABX_LFSR_C_INIT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_LFSR_C_INIT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008e10ll + 0x80000ll * ((a) & 0x7f);
    __cavm_csr_fatal("MDABX_LFSR_C_INIT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_LFSR_C_INIT(a) cavm_mdabx_lfsr_c_init_t
#define bustype_CAVM_MDABX_LFSR_C_INIT(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_LFSR_C_INIT(a) "MDABX_LFSR_C_INIT"
#define device_bar_CAVM_MDABX_LFSR_C_INIT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_LFSR_C_INIT(a) (a)
#define arguments_CAVM_MDABX_LFSR_C_INIT(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_lfsr_cnt
 *
 * MDAB LFSR Count Register
 */
union cavm_mdabx_lfsr_cnt
{
    uint32_t u;
    struct cavm_mdabx_lfsr_cnt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t task_cnt              : 8;  /**< [  7:  0](R/W) This Register sets the number of tasks finished before issuing co-processor done interrupt.
                                                                 Software must not change this value while Co-processor is active else behavior is
                                                                 unpredictable. */
#else /* Word 0 - Little Endian */
        uint32_t task_cnt              : 8;  /**< [  7:  0](R/W) This Register sets the number of tasks finished before issuing co-processor done interrupt.
                                                                 Software must not change this value while Co-processor is active else behavior is
                                                                 unpredictable. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_lfsr_cnt_s cn; */
};
typedef union cavm_mdabx_lfsr_cnt cavm_mdabx_lfsr_cnt_t;

static inline uint64_t CAVM_MDABX_LFSR_CNT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_LFSR_CNT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008e50ll + 0x80000ll * ((a) & 0x7f);
    __cavm_csr_fatal("MDABX_LFSR_CNT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_LFSR_CNT(a) cavm_mdabx_lfsr_cnt_t
#define bustype_CAVM_MDABX_LFSR_CNT(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_LFSR_CNT(a) "MDABX_LFSR_CNT"
#define device_bar_CAVM_MDABX_LFSR_CNT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_LFSR_CNT(a) (a)
#define arguments_CAVM_MDABX_LFSR_CNT(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_lfsr_ctrl
 *
 * MDAB LFSR Control Register
 */
union cavm_mdabx_lfsr_ctrl
{
    uint32_t u;
    struct cavm_mdabx_lfsr_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_1_31         : 31;
        uint32_t pn_gen_disable        : 1;  /**< [  0:  0](R/W) Setting this bit to 1 disables sending transactions to the dsp.
                                                                 Will abort current task. */
#else /* Word 0 - Little Endian */
        uint32_t pn_gen_disable        : 1;  /**< [  0:  0](R/W) Setting this bit to 1 disables sending transactions to the dsp.
                                                                 Will abort current task. */
        uint32_t reserved_1_31         : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_lfsr_ctrl_s cn; */
};
typedef union cavm_mdabx_lfsr_ctrl cavm_mdabx_lfsr_ctrl_t;

static inline uint64_t CAVM_MDABX_LFSR_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_LFSR_CTRL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008e40ll + 0x80000ll * ((a) & 0x7f);
    __cavm_csr_fatal("MDABX_LFSR_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_LFSR_CTRL(a) cavm_mdabx_lfsr_ctrl_t
#define bustype_CAVM_MDABX_LFSR_CTRL(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_LFSR_CTRL(a) "MDABX_LFSR_CTRL"
#define device_bar_CAVM_MDABX_LFSR_CTRL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_LFSR_CTRL(a) (a)
#define arguments_CAVM_MDABX_LFSR_CTRL(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_lfsr_j_stt
 *
 * MDAB LFSR Job Status Register
 */
union cavm_mdabx_lfsr_j_stt
{
    uint32_t u;
    struct cavm_mdabx_lfsr_j_stt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_11_31        : 21;
        uint32_t len_index             : 10; /**< [ 10:  1](RO/H) The number of 16 bit flits completed for current job. */
        uint32_t job_done              : 1;  /**< [  0:  0](RO/H) Indicates that the current job is done. */
#else /* Word 0 - Little Endian */
        uint32_t job_done              : 1;  /**< [  0:  0](RO/H) Indicates that the current job is done. */
        uint32_t len_index             : 10; /**< [ 10:  1](RO/H) The number of 16 bit flits completed for current job. */
        uint32_t reserved_11_31        : 21;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_lfsr_j_stt_s cn; */
};
typedef union cavm_mdabx_lfsr_j_stt cavm_mdabx_lfsr_j_stt_t;

static inline uint64_t CAVM_MDABX_LFSR_J_STT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_LFSR_J_STT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008e70ll + 0x80000ll * ((a) & 0x7f);
    __cavm_csr_fatal("MDABX_LFSR_J_STT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_LFSR_J_STT(a) cavm_mdabx_lfsr_j_stt_t
#define bustype_CAVM_MDABX_LFSR_J_STT(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_LFSR_J_STT(a) "MDABX_LFSR_J_STT"
#define device_bar_CAVM_MDABX_LFSR_J_STT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_LFSR_J_STT(a) (a)
#define arguments_CAVM_MDABX_LFSR_J_STT(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_lfsr_j_stt_c_init
 *
 * MDAB LFSR Initial Value Shift Register
 * Initial value for LFSR reg 1 for the current job.
 */
union cavm_mdabx_lfsr_j_stt_c_init
{
    uint32_t u;
    struct cavm_mdabx_lfsr_j_stt_c_init_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_31           : 1;
        uint32_t c_init                : 31; /**< [ 30:  0](RO/H) This register describe the C_INIT of the current task executed. */
#else /* Word 0 - Little Endian */
        uint32_t c_init                : 31; /**< [ 30:  0](RO/H) This register describe the C_INIT of the current task executed. */
        uint32_t reserved_31           : 1;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_lfsr_j_stt_c_init_s cn; */
};
typedef union cavm_mdabx_lfsr_j_stt_c_init cavm_mdabx_lfsr_j_stt_c_init_t;

static inline uint64_t CAVM_MDABX_LFSR_J_STT_C_INIT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_LFSR_J_STT_C_INIT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008e90ll + 0x80000ll * ((a) & 0x7f);
    __cavm_csr_fatal("MDABX_LFSR_J_STT_C_INIT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_LFSR_J_STT_C_INIT(a) cavm_mdabx_lfsr_j_stt_c_init_t
#define bustype_CAVM_MDABX_LFSR_J_STT_C_INIT(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_LFSR_J_STT_C_INIT(a) "MDABX_LFSR_J_STT_C_INIT"
#define device_bar_CAVM_MDABX_LFSR_J_STT_C_INIT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_LFSR_J_STT_C_INIT(a) (a)
#define arguments_CAVM_MDABX_LFSR_J_STT_C_INIT(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_lfsr_j_stt_lngth
 *
 * MDAB LFSR Length Register
 * Number of 16b flits to generate for the current task.
 */
union cavm_mdabx_lfsr_j_stt_lngth
{
    uint32_t u;
    struct cavm_mdabx_lfsr_j_stt_lngth_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_10_31        : 22;
        uint32_t length                : 10; /**< [  9:  0](RO/H) Number of 16b flits of the current executed task. */
#else /* Word 0 - Little Endian */
        uint32_t length                : 10; /**< [  9:  0](RO/H) Number of 16b flits of the current executed task. */
        uint32_t reserved_10_31        : 22;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_lfsr_j_stt_lngth_s cn; */
};
typedef union cavm_mdabx_lfsr_j_stt_lngth cavm_mdabx_lfsr_j_stt_lngth_t;

static inline uint64_t CAVM_MDABX_LFSR_J_STT_LNGTH(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_LFSR_J_STT_LNGTH(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008eb0ll + 0x80000ll * ((a) & 0x7f);
    __cavm_csr_fatal("MDABX_LFSR_J_STT_LNGTH", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_LFSR_J_STT_LNGTH(a) cavm_mdabx_lfsr_j_stt_lngth_t
#define bustype_CAVM_MDABX_LFSR_J_STT_LNGTH(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_LFSR_J_STT_LNGTH(a) "MDABX_LFSR_J_STT_LNGTH"
#define device_bar_CAVM_MDABX_LFSR_J_STT_LNGTH(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_LFSR_J_STT_LNGTH(a) (a)
#define arguments_CAVM_MDABX_LFSR_J_STT_LNGTH(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_lfsr_j_stt_shft
 *
 * MDAB LFSR Initial Shift Register
 * Initial LFSR shift for the current task.
 */
union cavm_mdabx_lfsr_j_stt_shft
{
    uint32_t u;
    struct cavm_mdabx_lfsr_j_stt_shft_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t shift                 : 16; /**< [ 15:  0](RO/H) LFSR initial shift of the current task being executed. */
#else /* Word 0 - Little Endian */
        uint32_t shift                 : 16; /**< [ 15:  0](RO/H) LFSR initial shift of the current task being executed. */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_lfsr_j_stt_shft_s cn; */
};
typedef union cavm_mdabx_lfsr_j_stt_shft cavm_mdabx_lfsr_j_stt_shft_t;

static inline uint64_t CAVM_MDABX_LFSR_J_STT_SHFT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_LFSR_J_STT_SHFT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008ea0ll + 0x80000ll * ((a) & 0x7f);
    __cavm_csr_fatal("MDABX_LFSR_J_STT_SHFT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_LFSR_J_STT_SHFT(a) cavm_mdabx_lfsr_j_stt_shft_t
#define bustype_CAVM_MDABX_LFSR_J_STT_SHFT(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_LFSR_J_STT_SHFT(a) "MDABX_LFSR_J_STT_SHFT"
#define device_bar_CAVM_MDABX_LFSR_J_STT_SHFT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_LFSR_J_STT_SHFT(a) (a)
#define arguments_CAVM_MDABX_LFSR_J_STT_SHFT(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_lfsr_j_stt_taddr
 *
 * MDAB LFSR Target Address Register
 * This register contains the target address of the current job for the LFSR coprocessor.
 */
union cavm_mdabx_lfsr_j_stt_taddr
{
    uint32_t u;
    struct cavm_mdabx_lfsr_j_stt_taddr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t addr                  : 28; /**< [ 31:  4](RO/H) This status register describe start address of the current on-going task. */
        uint32_t reserved_0_3          : 4;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_3          : 4;
        uint32_t addr                  : 28; /**< [ 31:  4](RO/H) This status register describe start address of the current on-going task. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_lfsr_j_stt_taddr_s cn; */
};
typedef union cavm_mdabx_lfsr_j_stt_taddr cavm_mdabx_lfsr_j_stt_taddr_t;

static inline uint64_t CAVM_MDABX_LFSR_J_STT_TADDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_LFSR_J_STT_TADDR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008e80ll + 0x80000ll * ((a) & 0x7f);
    __cavm_csr_fatal("MDABX_LFSR_J_STT_TADDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_LFSR_J_STT_TADDR(a) cavm_mdabx_lfsr_j_stt_taddr_t
#define bustype_CAVM_MDABX_LFSR_J_STT_TADDR(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_LFSR_J_STT_TADDR(a) "MDABX_LFSR_J_STT_TADDR"
#define device_bar_CAVM_MDABX_LFSR_J_STT_TADDR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_LFSR_J_STT_TADDR(a) (a)
#define arguments_CAVM_MDABX_LFSR_J_STT_TADDR(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_lfsr_lngth
 *
 * MDAB LFSR Length Register
 * Number of 16b flits to generate.
 */
union cavm_mdabx_lfsr_lngth
{
    uint32_t u;
    struct cavm_mdabx_lfsr_lngth_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_10_31        : 22;
        uint32_t length                : 10; /**< [  9:  0](R/W) Number of 16b flits. */
#else /* Word 0 - Little Endian */
        uint32_t length                : 10; /**< [  9:  0](R/W) Number of 16b flits. */
        uint32_t reserved_10_31        : 22;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_lfsr_lngth_s cn; */
};
typedef union cavm_mdabx_lfsr_lngth cavm_mdabx_lfsr_lngth_t;

static inline uint64_t CAVM_MDABX_LFSR_LNGTH(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_LFSR_LNGTH(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008e30ll + 0x80000ll * ((a) & 0x7f);
    __cavm_csr_fatal("MDABX_LFSR_LNGTH", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_LFSR_LNGTH(a) cavm_mdabx_lfsr_lngth_t
#define bustype_CAVM_MDABX_LFSR_LNGTH(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_LFSR_LNGTH(a) "MDABX_LFSR_LNGTH"
#define device_bar_CAVM_MDABX_LFSR_LNGTH(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_LFSR_LNGTH(a) (a)
#define arguments_CAVM_MDABX_LFSR_LNGTH(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_lfsr_q_stt
 *
 * MDAB LFSR Queue Status Register
 */
union cavm_mdabx_lfsr_q_stt
{
    uint32_t u;
    struct cavm_mdabx_lfsr_q_stt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_5_31         : 27;
        uint32_t queue_cnt             : 5;  /**< [  4:  0](RO/H) Number of Tasks currently in the co-processor queue. Software must read this register and only
                                                                 queue up new tasks if the QUEUE_CNT is less than 16. */
#else /* Word 0 - Little Endian */
        uint32_t queue_cnt             : 5;  /**< [  4:  0](RO/H) Number of Tasks currently in the co-processor queue. Software must read this register and only
                                                                 queue up new tasks if the QUEUE_CNT is less than 16. */
        uint32_t reserved_5_31         : 27;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_lfsr_q_stt_s cn; */
};
typedef union cavm_mdabx_lfsr_q_stt cavm_mdabx_lfsr_q_stt_t;

static inline uint64_t CAVM_MDABX_LFSR_Q_STT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_LFSR_Q_STT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008e60ll + 0x80000ll * ((a) & 0x7f);
    __cavm_csr_fatal("MDABX_LFSR_Q_STT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_LFSR_Q_STT(a) cavm_mdabx_lfsr_q_stt_t
#define bustype_CAVM_MDABX_LFSR_Q_STT(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_LFSR_Q_STT(a) "MDABX_LFSR_Q_STT"
#define device_bar_CAVM_MDABX_LFSR_Q_STT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_LFSR_Q_STT(a) (a)
#define arguments_CAVM_MDABX_LFSR_Q_STT(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_lfsr_shft
 *
 * MDAB LFSR Initial Shift Register
 */
union cavm_mdabx_lfsr_shft
{
    uint32_t u;
    struct cavm_mdabx_lfsr_shft_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t shift                 : 16; /**< [ 15:  0](R/W) LFSR initial shift. */
#else /* Word 0 - Little Endian */
        uint32_t shift                 : 16; /**< [ 15:  0](R/W) LFSR initial shift. */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_lfsr_shft_s cn; */
};
typedef union cavm_mdabx_lfsr_shft cavm_mdabx_lfsr_shft_t;

static inline uint64_t CAVM_MDABX_LFSR_SHFT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_LFSR_SHFT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008e20ll + 0x80000ll * ((a) & 0x7f);
    __cavm_csr_fatal("MDABX_LFSR_SHFT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_LFSR_SHFT(a) cavm_mdabx_lfsr_shft_t
#define bustype_CAVM_MDABX_LFSR_SHFT(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_LFSR_SHFT(a) "MDABX_LFSR_SHFT"
#define device_bar_CAVM_MDABX_LFSR_SHFT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_LFSR_SHFT(a) (a)
#define arguments_CAVM_MDABX_LFSR_SHFT(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_lfsr_taddr
 *
 * MDAB LFSR Target Address Register
 * This register contains the target address of the LFSR coprocessor.
 */
union cavm_mdabx_lfsr_taddr
{
    uint32_t u;
    struct cavm_mdabx_lfsr_taddr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t addr                  : 28; /**< [ 31:  4](R/W) This register set the start address of the buffer which the co-processor access
                                                                 to store its output data. Bits 3..0 of this register are zeroed to force the
                                                                 address to be 128bit aligned.
                                                                 Writing this CSR will cause the LSFR coprocessor task to be added
                                                                 to the task queue. This will cause execution to start. This
                                                                 CSR should be written after the other LFSR configuration CSRs. */
        uint32_t reserved_0_3          : 4;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_3          : 4;
        uint32_t addr                  : 28; /**< [ 31:  4](R/W) This register set the start address of the buffer which the co-processor access
                                                                 to store its output data. Bits 3..0 of this register are zeroed to force the
                                                                 address to be 128bit aligned.
                                                                 Writing this CSR will cause the LSFR coprocessor task to be added
                                                                 to the task queue. This will cause execution to start. This
                                                                 CSR should be written after the other LFSR configuration CSRs. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_lfsr_taddr_s cn; */
};
typedef union cavm_mdabx_lfsr_taddr cavm_mdabx_lfsr_taddr_t;

static inline uint64_t CAVM_MDABX_LFSR_TADDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_LFSR_TADDR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008e00ll + 0x80000ll * ((a) & 0x7f);
    __cavm_csr_fatal("MDABX_LFSR_TADDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_LFSR_TADDR(a) cavm_mdabx_lfsr_taddr_t
#define bustype_CAVM_MDABX_LFSR_TADDR(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_LFSR_TADDR(a) "MDABX_LFSR_TADDR"
#define device_bar_CAVM_MDABX_LFSR_TADDR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_LFSR_TADDR(a) (a)
#define arguments_CAVM_MDABX_LFSR_TADDR(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_pfault_info_hi
 *
 * MDAB Processor Debug Register
 * This register contains the status of the PFaultInfo bus[63:32].
 */
union cavm_mdabx_pfault_info_hi
{
    uint32_t u;
    struct cavm_mdabx_pfault_info_hi_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t pfaultinfo_hi         : 32; /**< [ 31:  0](RO/H) Fault Informational Signal (mirrors the internal Fault Information Register).
                                                                 Every time the DSP indicates a PFaultInfoValid strobe, the PFaultInfo[31:0] bus is
                                                                 captured to this register. */
#else /* Word 0 - Little Endian */
        uint32_t pfaultinfo_hi         : 32; /**< [ 31:  0](RO/H) Fault Informational Signal (mirrors the internal Fault Information Register).
                                                                 Every time the DSP indicates a PFaultInfoValid strobe, the PFaultInfo[31:0] bus is
                                                                 captured to this register. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_pfault_info_hi_s cn; */
};
typedef union cavm_mdabx_pfault_info_hi cavm_mdabx_pfault_info_hi_t;

static inline uint64_t CAVM_MDABX_PFAULT_INFO_HI(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_PFAULT_INFO_HI(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008ed0ll + 0x80000ll * ((a) & 0x7f);
    __cavm_csr_fatal("MDABX_PFAULT_INFO_HI", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_PFAULT_INFO_HI(a) cavm_mdabx_pfault_info_hi_t
#define bustype_CAVM_MDABX_PFAULT_INFO_HI(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_PFAULT_INFO_HI(a) "MDABX_PFAULT_INFO_HI"
#define device_bar_CAVM_MDABX_PFAULT_INFO_HI(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_PFAULT_INFO_HI(a) (a)
#define arguments_CAVM_MDABX_PFAULT_INFO_HI(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_pfault_info_lo
 *
 * MDAB Processor Debug Register
 * This register contains the status of the PFaultInfo bus.
 */
union cavm_mdabx_pfault_info_lo
{
    uint32_t u;
    struct cavm_mdabx_pfault_info_lo_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t pfaultinfo_lo         : 32; /**< [ 31:  0](RO/H) Fault Informational Signal (mirrors the internal Fault Information Register).
                                                                 Every time the DSP indicates a PFaultInfoValid strobe, the PFaultInfo[31:0] bus is
                                                                 captured to this register. */
#else /* Word 0 - Little Endian */
        uint32_t pfaultinfo_lo         : 32; /**< [ 31:  0](RO/H) Fault Informational Signal (mirrors the internal Fault Information Register).
                                                                 Every time the DSP indicates a PFaultInfoValid strobe, the PFaultInfo[31:0] bus is
                                                                 captured to this register. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_pfault_info_lo_s cn; */
};
typedef union cavm_mdabx_pfault_info_lo cavm_mdabx_pfault_info_lo_t;

static inline uint64_t CAVM_MDABX_PFAULT_INFO_LO(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_PFAULT_INFO_LO(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008ec0ll + 0x80000ll * ((a) & 0x7f);
    __cavm_csr_fatal("MDABX_PFAULT_INFO_LO", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_PFAULT_INFO_LO(a) cavm_mdabx_pfault_info_lo_t
#define bustype_CAVM_MDABX_PFAULT_INFO_LO(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_PFAULT_INFO_LO(a) "MDABX_PFAULT_INFO_LO"
#define device_bar_CAVM_MDABX_PFAULT_INFO_LO(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_PFAULT_INFO_LO(a) (a)
#define arguments_CAVM_MDABX_PFAULT_INFO_LO(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_pflt_block_num
 *
 * PMEM Filter Block Number Register
 */
union cavm_mdabx_pflt_block_num
{
    uint32_t u;
    struct cavm_mdabx_pflt_block_num_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_17_31        : 15;
        uint32_t odd_numrbs_lastblock  : 1;  /**< [ 16: 16](R/W) Indicates an odd number of RBs in the last Hrs block
                                                                 with the last 128 bits of each stream (each antenna
                                                                 and each layer) in the block will be discarded. */
        uint32_t reserved_7_15         : 9;
        uint32_t num_mid_blocks        : 7;  /**< [  6:  0](R/W) Number of pairs of Hrs_Mid_Blocks and YrsXrs_Mid_Blocks. */
#else /* Word 0 - Little Endian */
        uint32_t num_mid_blocks        : 7;  /**< [  6:  0](R/W) Number of pairs of Hrs_Mid_Blocks and YrsXrs_Mid_Blocks. */
        uint32_t reserved_7_15         : 9;
        uint32_t odd_numrbs_lastblock  : 1;  /**< [ 16: 16](R/W) Indicates an odd number of RBs in the last Hrs block
                                                                 with the last 128 bits of each stream (each antenna
                                                                 and each layer) in the block will be discarded. */
        uint32_t reserved_17_31        : 15;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_pflt_block_num_s cn; */
};
typedef union cavm_mdabx_pflt_block_num cavm_mdabx_pflt_block_num_t;

static inline uint64_t CAVM_MDABX_PFLT_BLOCK_NUM(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_PFLT_BLOCK_NUM(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008d50ll + 0x80000ll * ((a) & 0x7f);
    __cavm_csr_fatal("MDABX_PFLT_BLOCK_NUM", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_PFLT_BLOCK_NUM(a) cavm_mdabx_pflt_block_num_t
#define bustype_CAVM_MDABX_PFLT_BLOCK_NUM(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_PFLT_BLOCK_NUM(a) "MDABX_PFLT_BLOCK_NUM"
#define device_bar_CAVM_MDABX_PFLT_BLOCK_NUM(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_PFLT_BLOCK_NUM(a) (a)
#define arguments_CAVM_MDABX_PFLT_BLOCK_NUM(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_pflt_buffer_xfr_sts
 *
 * PMEM Filter Buffer Transfer Status Register
 */
union cavm_mdabx_pflt_buffer_xfr_sts
{
    uint32_t u;
    struct cavm_mdabx_pflt_buffer_xfr_sts_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_25_31        : 7;
        uint32_t buffer_xfr_cnt        : 25; /**< [ 24:  0](RO/H) Internal buffer input transfer count (one per clock cycle) for filter mode
                                                                 while MDAB()_PFLT_RUN[RUN] is enabled. Counter is cleared at the start of
                                                                 each job when MDAB()_PFLT_RUN[RUN] transitions from 0 to 1. Only Hrs data
                                                                 is included in this count. */
#else /* Word 0 - Little Endian */
        uint32_t buffer_xfr_cnt        : 25; /**< [ 24:  0](RO/H) Internal buffer input transfer count (one per clock cycle) for filter mode
                                                                 while MDAB()_PFLT_RUN[RUN] is enabled. Counter is cleared at the start of
                                                                 each job when MDAB()_PFLT_RUN[RUN] transitions from 0 to 1. Only Hrs data
                                                                 is included in this count. */
        uint32_t reserved_25_31        : 7;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_pflt_buffer_xfr_sts_s cn; */
};
typedef union cavm_mdabx_pflt_buffer_xfr_sts cavm_mdabx_pflt_buffer_xfr_sts_t;

static inline uint64_t CAVM_MDABX_PFLT_BUFFER_XFR_STS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_PFLT_BUFFER_XFR_STS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008dc0ll + 0x80000ll * ((a) & 0x7f);
    __cavm_csr_fatal("MDABX_PFLT_BUFFER_XFR_STS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_PFLT_BUFFER_XFR_STS(a) cavm_mdabx_pflt_buffer_xfr_sts_t
#define bustype_CAVM_MDABX_PFLT_BUFFER_XFR_STS(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_PFLT_BUFFER_XFR_STS(a) "MDABX_PFLT_BUFFER_XFR_STS"
#define device_bar_CAVM_MDABX_PFLT_BUFFER_XFR_STS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_PFLT_BUFFER_XFR_STS(a) (a)
#define arguments_CAVM_MDABX_PFLT_BUFFER_XFR_STS(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_pflt_first_block_size
 *
 * PMEM Filter First Block Size Register
 * First block sizes.
 */
union cavm_mdabx_pflt_first_block_size
{
    uint32_t u;
    struct cavm_mdabx_pflt_first_block_size_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t first_yrsxrs_size     : 16; /**< [ 31: 16](R/W) Size of First YrsXrs Block (units of 256 bit words) which is discarded by PMEM filter.
                                                                 Can be non-zero only when the first RB of a job is not 256 bit aligned in SMEM. */
        uint32_t first_hrs_size        : 16; /**< [ 15:  0](R/W) Size of First Hrs Block (units of 256 bit words).
                                                                 Can be non-zero only when the first RB of a job is not 256 bit aligned in SMEM.
                                                                 The first 3*128 bits of each stream (each antenna of each layer) will be discarded.
                                                                 Configuration options:
                                                                 _ FIRST_HRS_SIZE = MID_HRS_SIZE.
                                                                 _ FIRST_HRS_SIZE = MID_HRS_SIZE + 3*ANTENNAS*LAYERS. */
#else /* Word 0 - Little Endian */
        uint32_t first_hrs_size        : 16; /**< [ 15:  0](R/W) Size of First Hrs Block (units of 256 bit words).
                                                                 Can be non-zero only when the first RB of a job is not 256 bit aligned in SMEM.
                                                                 The first 3*128 bits of each stream (each antenna of each layer) will be discarded.
                                                                 Configuration options:
                                                                 _ FIRST_HRS_SIZE = MID_HRS_SIZE.
                                                                 _ FIRST_HRS_SIZE = MID_HRS_SIZE + 3*ANTENNAS*LAYERS. */
        uint32_t first_yrsxrs_size     : 16; /**< [ 31: 16](R/W) Size of First YrsXrs Block (units of 256 bit words) which is discarded by PMEM filter.
                                                                 Can be non-zero only when the first RB of a job is not 256 bit aligned in SMEM. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_pflt_first_block_size_s cn; */
};
typedef union cavm_mdabx_pflt_first_block_size cavm_mdabx_pflt_first_block_size_t;

static inline uint64_t CAVM_MDABX_PFLT_FIRST_BLOCK_SIZE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_PFLT_FIRST_BLOCK_SIZE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008d20ll + 0x80000ll * ((a) & 0x7f);
    __cavm_csr_fatal("MDABX_PFLT_FIRST_BLOCK_SIZE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_PFLT_FIRST_BLOCK_SIZE(a) cavm_mdabx_pflt_first_block_size_t
#define bustype_CAVM_MDABX_PFLT_FIRST_BLOCK_SIZE(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_PFLT_FIRST_BLOCK_SIZE(a) "MDABX_PFLT_FIRST_BLOCK_SIZE"
#define device_bar_CAVM_MDABX_PFLT_FIRST_BLOCK_SIZE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_PFLT_FIRST_BLOCK_SIZE(a) (a)
#define arguments_CAVM_MDABX_PFLT_FIRST_BLOCK_SIZE(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_pflt_input_xfr_sts
 *
 * PMEM Filter Input Transfer Status Register
 */
union cavm_mdabx_pflt_input_xfr_sts
{
    uint32_t u;
    struct cavm_mdabx_pflt_input_xfr_sts_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_25_31        : 7;
        uint32_t input_xfr_cnt         : 25; /**< [ 24:  0](RO/H) Input interface 128 bit transfer count for filter mode while
                                                                 MDAB()_PFLT_RUN[RUN] is enabled.  Counter is cleared at the start of each
                                                                 job when MDAB()_PFLT_RUN[RUN] transitions from 0 to 1. */
#else /* Word 0 - Little Endian */
        uint32_t input_xfr_cnt         : 25; /**< [ 24:  0](RO/H) Input interface 128 bit transfer count for filter mode while
                                                                 MDAB()_PFLT_RUN[RUN] is enabled.  Counter is cleared at the start of each
                                                                 job when MDAB()_PFLT_RUN[RUN] transitions from 0 to 1. */
        uint32_t reserved_25_31        : 7;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_pflt_input_xfr_sts_s cn; */
};
typedef union cavm_mdabx_pflt_input_xfr_sts cavm_mdabx_pflt_input_xfr_sts_t;

static inline uint64_t CAVM_MDABX_PFLT_INPUT_XFR_STS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_PFLT_INPUT_XFR_STS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008db0ll + 0x80000ll * ((a) & 0x7f);
    __cavm_csr_fatal("MDABX_PFLT_INPUT_XFR_STS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_PFLT_INPUT_XFR_STS(a) cavm_mdabx_pflt_input_xfr_sts_t
#define bustype_CAVM_MDABX_PFLT_INPUT_XFR_STS(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_PFLT_INPUT_XFR_STS(a) "MDABX_PFLT_INPUT_XFR_STS"
#define device_bar_CAVM_MDABX_PFLT_INPUT_XFR_STS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_PFLT_INPUT_XFR_STS(a) (a)
#define arguments_CAVM_MDABX_PFLT_INPUT_XFR_STS(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_pflt_last_block_size
 *
 * PMEM Filter Last Block Size Register
 * Last block sizes.
 */
union cavm_mdabx_pflt_last_block_size
{
    uint32_t u;
    struct cavm_mdabx_pflt_last_block_size_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t last_yrsxrs_size      : 16; /**< [ 31: 16](R/W) Size of YrsXrs_Last_Block (units of 256 bit words) which is discarded by PMEM filter. */
        uint32_t last_hrs_size         : 16; /**< [ 15:  0](R/W) Size of Hrs_Last_Block (units of 256 bit words).
                                                                 If ODD_NUMRBS_LASTBLOCK is set, the last 128 bits
                                                                 of each stream (each antenna of each layer) in the block will be discarded.
                                                                 Configuration: LAST_HRS_SIZE = ceil(M*3/2)*antennas*layers,
                                                                 where M is the number of RBs processed in the last block */
#else /* Word 0 - Little Endian */
        uint32_t last_hrs_size         : 16; /**< [ 15:  0](R/W) Size of Hrs_Last_Block (units of 256 bit words).
                                                                 If ODD_NUMRBS_LASTBLOCK is set, the last 128 bits
                                                                 of each stream (each antenna of each layer) in the block will be discarded.
                                                                 Configuration: LAST_HRS_SIZE = ceil(M*3/2)*antennas*layers,
                                                                 where M is the number of RBs processed in the last block */
        uint32_t last_yrsxrs_size      : 16; /**< [ 31: 16](R/W) Size of YrsXrs_Last_Block (units of 256 bit words) which is discarded by PMEM filter. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_pflt_last_block_size_s cn; */
};
typedef union cavm_mdabx_pflt_last_block_size cavm_mdabx_pflt_last_block_size_t;

static inline uint64_t CAVM_MDABX_PFLT_LAST_BLOCK_SIZE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_PFLT_LAST_BLOCK_SIZE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008d40ll + 0x80000ll * ((a) & 0x7f);
    __cavm_csr_fatal("MDABX_PFLT_LAST_BLOCK_SIZE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_PFLT_LAST_BLOCK_SIZE(a) cavm_mdabx_pflt_last_block_size_t
#define bustype_CAVM_MDABX_PFLT_LAST_BLOCK_SIZE(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_PFLT_LAST_BLOCK_SIZE(a) "MDABX_PFLT_LAST_BLOCK_SIZE"
#define device_bar_CAVM_MDABX_PFLT_LAST_BLOCK_SIZE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_PFLT_LAST_BLOCK_SIZE(a) (a)
#define arguments_CAVM_MDABX_PFLT_LAST_BLOCK_SIZE(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_pflt_mid_block_size
 *
 * PMEM Filter Mid Block Size Register
 * Mid block sizes.
 */
union cavm_mdabx_pflt_mid_block_size
{
    uint32_t u;
    struct cavm_mdabx_pflt_mid_block_size_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t mid_yrsxrs_size       : 16; /**< [ 31: 16](R/W) Size of YrsXrs_Mid_Block (units of 256 bit words) which is discarded by PMEM filter. */
        uint32_t mid_hrs_size          : 16; /**< [ 15:  0](R/W) Size of Hrs_Mid_Block (units of 256 bit words).
                                                                 Configuration: K RBs are in each block where K = 2n (even).
                                                                 MID_HRS_SIZE = (K/2)*3*Antennas*Layers. */
#else /* Word 0 - Little Endian */
        uint32_t mid_hrs_size          : 16; /**< [ 15:  0](R/W) Size of Hrs_Mid_Block (units of 256 bit words).
                                                                 Configuration: K RBs are in each block where K = 2n (even).
                                                                 MID_HRS_SIZE = (K/2)*3*Antennas*Layers. */
        uint32_t mid_yrsxrs_size       : 16; /**< [ 31: 16](R/W) Size of YrsXrs_Mid_Block (units of 256 bit words) which is discarded by PMEM filter. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_pflt_mid_block_size_s cn; */
};
typedef union cavm_mdabx_pflt_mid_block_size cavm_mdabx_pflt_mid_block_size_t;

static inline uint64_t CAVM_MDABX_PFLT_MID_BLOCK_SIZE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_PFLT_MID_BLOCK_SIZE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008d30ll + 0x80000ll * ((a) & 0x7f);
    __cavm_csr_fatal("MDABX_PFLT_MID_BLOCK_SIZE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_PFLT_MID_BLOCK_SIZE(a) cavm_mdabx_pflt_mid_block_size_t
#define bustype_CAVM_MDABX_PFLT_MID_BLOCK_SIZE(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_PFLT_MID_BLOCK_SIZE(a) "MDABX_PFLT_MID_BLOCK_SIZE"
#define device_bar_CAVM_MDABX_PFLT_MID_BLOCK_SIZE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_PFLT_MID_BLOCK_SIZE(a) (a)
#define arguments_CAVM_MDABX_PFLT_MID_BLOCK_SIZE(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_pflt_output_xfr_sts
 *
 * PMEM Filter Output Transfer Status Register
 */
union cavm_mdabx_pflt_output_xfr_sts
{
    uint32_t u;
    struct cavm_mdabx_pflt_output_xfr_sts_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_25_31        : 7;
        uint32_t output_xfr_cnt        : 25; /**< [ 24:  0](RO/H) Output interface 128 bit transfer count for filter mode while
                                                                 MDAB()_PFLT_RUN[RUN]s enabled.  Counter is cleared at the start of each job
                                                                 when MDAB()_PFLT_RUN[RUN] transitions from 0 to 1. */
#else /* Word 0 - Little Endian */
        uint32_t output_xfr_cnt        : 25; /**< [ 24:  0](RO/H) Output interface 128 bit transfer count for filter mode while
                                                                 MDAB()_PFLT_RUN[RUN]s enabled.  Counter is cleared at the start of each job
                                                                 when MDAB()_PFLT_RUN[RUN] transitions from 0 to 1. */
        uint32_t reserved_25_31        : 7;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_pflt_output_xfr_sts_s cn; */
};
typedef union cavm_mdabx_pflt_output_xfr_sts cavm_mdabx_pflt_output_xfr_sts_t;

static inline uint64_t CAVM_MDABX_PFLT_OUTPUT_XFR_STS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_PFLT_OUTPUT_XFR_STS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008dd0ll + 0x80000ll * ((a) & 0x7f);
    __cavm_csr_fatal("MDABX_PFLT_OUTPUT_XFR_STS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_PFLT_OUTPUT_XFR_STS(a) cavm_mdabx_pflt_output_xfr_sts_t
#define bustype_CAVM_MDABX_PFLT_OUTPUT_XFR_STS(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_PFLT_OUTPUT_XFR_STS(a) "MDABX_PFLT_OUTPUT_XFR_STS"
#define device_bar_CAVM_MDABX_PFLT_OUTPUT_XFR_STS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_PFLT_OUTPUT_XFR_STS(a) (a)
#define arguments_CAVM_MDABX_PFLT_OUTPUT_XFR_STS(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_pflt_pmem_addr_sts
 *
 * PMEM Filter PMEM Address Status Register
 */
union cavm_mdabx_pflt_pmem_addr_sts
{
    uint32_t u;
    struct cavm_mdabx_pflt_pmem_addr_sts_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t pmem_pending_wr_cnt   : 8;  /**< [ 31: 24](RO/H) Number of PMEM writes which have been issued by PMEM Filter but have not completed. */
        uint32_t pmem_current_addr     : 24; /**< [ 23:  0](RO/H) Address of most recent PMEM write of filtered data (not bypass mode)
                                                                 which is 256 bit aligned */
#else /* Word 0 - Little Endian */
        uint32_t pmem_current_addr     : 24; /**< [ 23:  0](RO/H) Address of most recent PMEM write of filtered data (not bypass mode)
                                                                 which is 256 bit aligned */
        uint32_t pmem_pending_wr_cnt   : 8;  /**< [ 31: 24](RO/H) Number of PMEM writes which have been issued by PMEM Filter but have not completed. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_pflt_pmem_addr_sts_s cn; */
};
typedef union cavm_mdabx_pflt_pmem_addr_sts cavm_mdabx_pflt_pmem_addr_sts_t;

static inline uint64_t CAVM_MDABX_PFLT_PMEM_ADDR_STS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_PFLT_PMEM_ADDR_STS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008df0ll + 0x80000ll * ((a) & 0x7f);
    __cavm_csr_fatal("MDABX_PFLT_PMEM_ADDR_STS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_PFLT_PMEM_ADDR_STS(a) cavm_mdabx_pflt_pmem_addr_sts_t
#define bustype_CAVM_MDABX_PFLT_PMEM_ADDR_STS(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_PFLT_PMEM_ADDR_STS(a) "MDABX_PFLT_PMEM_ADDR_STS"
#define device_bar_CAVM_MDABX_PFLT_PMEM_ADDR_STS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_PFLT_PMEM_ADDR_STS(a) (a)
#define arguments_CAVM_MDABX_PFLT_PMEM_ADDR_STS(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_pflt_pmem_position
 *
 * PMEM Filter PMEM Position Register
 * PMEM data position configuration.
 */
union cavm_mdabx_pflt_pmem_position
{
    uint32_t u;
    struct cavm_mdabx_pflt_pmem_position_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_2_31         : 30;
        uint32_t pmem_job_column       : 2;  /**< [  1:  0](R/W) Indicates job column position for writing data into PMEM
                                                                 within a 512 bit boundary in PMEM. 0 position is aligned
                                                                 to the least significant bit position. Other job positions
                                                                 are relative to 0.
                                                                 Valid values for jobs with 2 column options: 0x0, 0x1.
                                                                 Valid values for jobs with 4 column options: 0x0, 0x1, 0x2, 0x3. */
#else /* Word 0 - Little Endian */
        uint32_t pmem_job_column       : 2;  /**< [  1:  0](R/W) Indicates job column position for writing data into PMEM
                                                                 within a 512 bit boundary in PMEM. 0 position is aligned
                                                                 to the least significant bit position. Other job positions
                                                                 are relative to 0.
                                                                 Valid values for jobs with 2 column options: 0x0, 0x1.
                                                                 Valid values for jobs with 4 column options: 0x0, 0x1, 0x2, 0x3. */
        uint32_t reserved_2_31         : 30;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_pflt_pmem_position_s cn; */
};
typedef union cavm_mdabx_pflt_pmem_position cavm_mdabx_pflt_pmem_position_t;

static inline uint64_t CAVM_MDABX_PFLT_PMEM_POSITION(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_PFLT_PMEM_POSITION(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008d80ll + 0x80000ll * ((a) & 0x7f);
    __cavm_csr_fatal("MDABX_PFLT_PMEM_POSITION", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_PFLT_PMEM_POSITION(a) cavm_mdabx_pflt_pmem_position_t
#define bustype_CAVM_MDABX_PFLT_PMEM_POSITION(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_PFLT_PMEM_POSITION(a) "MDABX_PFLT_PMEM_POSITION"
#define device_bar_CAVM_MDABX_PFLT_PMEM_POSITION(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_PFLT_PMEM_POSITION(a) (a)
#define arguments_CAVM_MDABX_PFLT_PMEM_POSITION(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_pflt_pmem_start_addr
 *
 * PMEM Filter PMEM Address Register
 * PMEM start address configuration.
 */
union cavm_mdabx_pflt_pmem_start_addr
{
    uint32_t u;
    struct cavm_mdabx_pflt_pmem_start_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t pmem_start_addr       : 27; /**< [ 31:  5](R/W) PMEM starting address for filtered data (not bypass mode)
                                                                 which is 256 bit aligned. Note that only bits 23:5 control
                                                                 the start address within PMEM. The size of PMEM must be
                                                                 considered when configuring the start address to constrain data
                                                                 within the available memory. */
        uint32_t reserved_0_4          : 5;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_4          : 5;
        uint32_t pmem_start_addr       : 27; /**< [ 31:  5](R/W) PMEM starting address for filtered data (not bypass mode)
                                                                 which is 256 bit aligned. Note that only bits 23:5 control
                                                                 the start address within PMEM. The size of PMEM must be
                                                                 considered when configuring the start address to constrain data
                                                                 within the available memory. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_pflt_pmem_start_addr_s cn; */
};
typedef union cavm_mdabx_pflt_pmem_start_addr cavm_mdabx_pflt_pmem_start_addr_t;

static inline uint64_t CAVM_MDABX_PFLT_PMEM_START_ADDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_PFLT_PMEM_START_ADDR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008d60ll + 0x80000ll * ((a) & 0x7f);
    __cavm_csr_fatal("MDABX_PFLT_PMEM_START_ADDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_PFLT_PMEM_START_ADDR(a) cavm_mdabx_pflt_pmem_start_addr_t
#define bustype_CAVM_MDABX_PFLT_PMEM_START_ADDR(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_PFLT_PMEM_START_ADDR(a) "MDABX_PFLT_PMEM_START_ADDR"
#define device_bar_CAVM_MDABX_PFLT_PMEM_START_ADDR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_PFLT_PMEM_START_ADDR(a) (a)
#define arguments_CAVM_MDABX_PFLT_PMEM_START_ADDR(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_pflt_pmem_stride
 *
 * PMEM Filter PMEM Stride Register
 * PMEM layer stride configuration.
 */
union cavm_mdabx_pflt_pmem_stride
{
    uint32_t u;
    struct cavm_mdabx_pflt_pmem_stride_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_24_31        : 8;
        uint32_t pmem_stride           : 19; /**< [ 23:  5](R/W) PMEM address stride between layers (not bypass mode)
                                                                 which is 256 bit aligned */
        uint32_t reserved_0_4          : 5;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_4          : 5;
        uint32_t pmem_stride           : 19; /**< [ 23:  5](R/W) PMEM address stride between layers (not bypass mode)
                                                                 which is 256 bit aligned */
        uint32_t reserved_24_31        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_pflt_pmem_stride_s cn; */
};
typedef union cavm_mdabx_pflt_pmem_stride cavm_mdabx_pflt_pmem_stride_t;

static inline uint64_t CAVM_MDABX_PFLT_PMEM_STRIDE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_PFLT_PMEM_STRIDE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008d70ll + 0x80000ll * ((a) & 0x7f);
    __cavm_csr_fatal("MDABX_PFLT_PMEM_STRIDE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_PFLT_PMEM_STRIDE(a) cavm_mdabx_pflt_pmem_stride_t
#define bustype_CAVM_MDABX_PFLT_PMEM_STRIDE(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_PFLT_PMEM_STRIDE(a) "MDABX_PFLT_PMEM_STRIDE"
#define device_bar_CAVM_MDABX_PFLT_PMEM_STRIDE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_PFLT_PMEM_STRIDE(a) (a)
#define arguments_CAVM_MDABX_PFLT_PMEM_STRIDE(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_pflt_pre_block_size
 *
 * PMEM Filter Pre Block Size Register
 * Pre Hrs block size.
 */
union cavm_mdabx_pflt_pre_block_size
{
    uint32_t u;
    struct cavm_mdabx_pflt_pre_block_size_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t ue_info_size          : 16; /**< [ 15:  0](R/W) Size of UE info block (units of 256 bit words) which is discarded. */
#else /* Word 0 - Little Endian */
        uint32_t ue_info_size          : 16; /**< [ 15:  0](R/W) Size of UE info block (units of 256 bit words) which is discarded. */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_pflt_pre_block_size_s cn; */
};
typedef union cavm_mdabx_pflt_pre_block_size cavm_mdabx_pflt_pre_block_size_t;

static inline uint64_t CAVM_MDABX_PFLT_PRE_BLOCK_SIZE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_PFLT_PRE_BLOCK_SIZE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008d10ll + 0x80000ll * ((a) & 0x7f);
    __cavm_csr_fatal("MDABX_PFLT_PRE_BLOCK_SIZE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_PFLT_PRE_BLOCK_SIZE(a) cavm_mdabx_pflt_pre_block_size_t
#define bustype_CAVM_MDABX_PFLT_PRE_BLOCK_SIZE(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_PFLT_PRE_BLOCK_SIZE(a) "MDABX_PFLT_PRE_BLOCK_SIZE"
#define device_bar_CAVM_MDABX_PFLT_PRE_BLOCK_SIZE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_PFLT_PRE_BLOCK_SIZE(a) (a)
#define arguments_CAVM_MDABX_PFLT_PRE_BLOCK_SIZE(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_pflt_rs_cfg
 *
 * PMEM Filter Reference Signal Configuration Register
 */
union cavm_mdabx_pflt_rs_cfg
{
    uint32_t u;
    struct cavm_mdabx_pflt_rs_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_26_31        : 6;
        uint32_t start_re_index        : 2;  /**< [ 25: 24](R/W) Starting index within a Resource Block for selecting Resource Elements to keep:
                                                                 0x0: valid for sparsity 0.25 and 0.6.
                                                                 0x1: valid for sparsity 0.25 and 0.5.
                                                                 0x2: valid for sparsity 0.25.
                                                                 0x3: valid for sparsity 0.25. */
        uint32_t reserved_18_23        : 6;
        uint32_t sparsity              : 2;  /**< [ 17: 16](R/W) Encoded fraction of Resource Elements per Resource Block to keep after filtering:
                                                                 0x0: keep all Resource Elements (sparsity = 1).
                                                                 0x1: keep every 2 Resource Elements (sparsity = 0.5).
                                                                 0x2: keep every 4 Resource Elements (sparsity = 0.25).
                                                                 0x3: reserved. */
        uint32_t reserved_10_15        : 6;
        uint32_t layers                : 2;  /**< [  9:  8](R/W) Encoded number of antenna layers:
                                                                 0x0: 1 layers (all antenna counts).
                                                                 0x1: 2 layers (all antenna counts).
                                                                 0x2: 4 layers (4, 8, 16 antennas only).
                                                                 0x3: 8 layers (16 antennas only). */
        uint32_t reserved_2_7          : 6;
        uint32_t antennas              : 2;  /**< [  1:  0](R/W) Encoded number of antennas:
                                                                 0x0: 2  antennas.
                                                                 0x1: 4  antennas.
                                                                 0x2: 8  antennas.
                                                                 0x3: 16 antennas. */
#else /* Word 0 - Little Endian */
        uint32_t antennas              : 2;  /**< [  1:  0](R/W) Encoded number of antennas:
                                                                 0x0: 2  antennas.
                                                                 0x1: 4  antennas.
                                                                 0x2: 8  antennas.
                                                                 0x3: 16 antennas. */
        uint32_t reserved_2_7          : 6;
        uint32_t layers                : 2;  /**< [  9:  8](R/W) Encoded number of antenna layers:
                                                                 0x0: 1 layers (all antenna counts).
                                                                 0x1: 2 layers (all antenna counts).
                                                                 0x2: 4 layers (4, 8, 16 antennas only).
                                                                 0x3: 8 layers (16 antennas only). */
        uint32_t reserved_10_15        : 6;
        uint32_t sparsity              : 2;  /**< [ 17: 16](R/W) Encoded fraction of Resource Elements per Resource Block to keep after filtering:
                                                                 0x0: keep all Resource Elements (sparsity = 1).
                                                                 0x1: keep every 2 Resource Elements (sparsity = 0.5).
                                                                 0x2: keep every 4 Resource Elements (sparsity = 0.25).
                                                                 0x3: reserved. */
        uint32_t reserved_18_23        : 6;
        uint32_t start_re_index        : 2;  /**< [ 25: 24](R/W) Starting index within a Resource Block for selecting Resource Elements to keep:
                                                                 0x0: valid for sparsity 0.25 and 0.6.
                                                                 0x1: valid for sparsity 0.25 and 0.5.
                                                                 0x2: valid for sparsity 0.25.
                                                                 0x3: valid for sparsity 0.25. */
        uint32_t reserved_26_31        : 6;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_pflt_rs_cfg_s cn; */
};
typedef union cavm_mdabx_pflt_rs_cfg cavm_mdabx_pflt_rs_cfg_t;

static inline uint64_t CAVM_MDABX_PFLT_RS_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_PFLT_RS_CFG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008d00ll + 0x80000ll * ((a) & 0x7f);
    __cavm_csr_fatal("MDABX_PFLT_RS_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_PFLT_RS_CFG(a) cavm_mdabx_pflt_rs_cfg_t
#define bustype_CAVM_MDABX_PFLT_RS_CFG(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_PFLT_RS_CFG(a) "MDABX_PFLT_RS_CFG"
#define device_bar_CAVM_MDABX_PFLT_RS_CFG(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_PFLT_RS_CFG(a) (a)
#define arguments_CAVM_MDABX_PFLT_RS_CFG(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_pflt_run
 *
 * PMEM Filter Run Control Register
 */
union cavm_mdabx_pflt_run
{
    uint32_t u;
    struct cavm_mdabx_pflt_run_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_1_31         : 31;
        uint32_t run                   : 1;  /**< [  0:  0](R/W/H) When written from 0 to 1, filter mode is enabled and the internal
                                                                 state of PMEM filter is cleared and initialized for a new job based upon
                                                                 configuration. Note that all PMEM Filter configuration must be written
                                                                 before this bit is set and must not be changed until after the filter
                                                                 job has completed. This bit is automatically cleared by hardware when the
                                                                 filter job completes. Writing this bit from 1 to 0 after a RD DMA has
                                                                 started is forbidden since it will result in unpredictable behavior. */
#else /* Word 0 - Little Endian */
        uint32_t run                   : 1;  /**< [  0:  0](R/W/H) When written from 0 to 1, filter mode is enabled and the internal
                                                                 state of PMEM filter is cleared and initialized for a new job based upon
                                                                 configuration. Note that all PMEM Filter configuration must be written
                                                                 before this bit is set and must not be changed until after the filter
                                                                 job has completed. This bit is automatically cleared by hardware when the
                                                                 filter job completes. Writing this bit from 1 to 0 after a RD DMA has
                                                                 started is forbidden since it will result in unpredictable behavior. */
        uint32_t reserved_1_31         : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_pflt_run_s cn; */
};
typedef union cavm_mdabx_pflt_run cavm_mdabx_pflt_run_t;

static inline uint64_t CAVM_MDABX_PFLT_RUN(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_PFLT_RUN(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008d90ll + 0x80000ll * ((a) & 0x7f);
    __cavm_csr_fatal("MDABX_PFLT_RUN", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_PFLT_RUN(a) cavm_mdabx_pflt_run_t
#define bustype_CAVM_MDABX_PFLT_RUN(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_PFLT_RUN(a) "MDABX_PFLT_RUN"
#define device_bar_CAVM_MDABX_PFLT_RUN(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_PFLT_RUN(a) (a)
#define arguments_CAVM_MDABX_PFLT_RUN(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_pflt_state_sts
 *
 * PMEM Filter State Status Register
 */
union cavm_mdabx_pflt_state_sts
{
    uint32_t u;
    struct cavm_mdabx_pflt_state_sts_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_14_31        : 18;
        uint32_t bfr_state1            : 2;  /**< [ 13: 12](RO/H) State of buffer 1:
                                                                 0x0: Input.
                                                                 0x1: Hold.
                                                                 0x2: Output. */
        uint32_t reserved_10_11        : 2;
        uint32_t bfr_state0            : 2;  /**< [  9:  8](RO/H) State of buffer 0:
                                                                 0x0: Input.
                                                                 0x1: Hold.
                                                                 0x2: Output. */
        uint32_t reserved_4_7          : 4;
        uint32_t input_state           : 4;  /**< [  3:  0](RO/H) Filter input state. */
#else /* Word 0 - Little Endian */
        uint32_t input_state           : 4;  /**< [  3:  0](RO/H) Filter input state. */
        uint32_t reserved_4_7          : 4;
        uint32_t bfr_state0            : 2;  /**< [  9:  8](RO/H) State of buffer 0:
                                                                 0x0: Input.
                                                                 0x1: Hold.
                                                                 0x2: Output. */
        uint32_t reserved_10_11        : 2;
        uint32_t bfr_state1            : 2;  /**< [ 13: 12](RO/H) State of buffer 1:
                                                                 0x0: Input.
                                                                 0x1: Hold.
                                                                 0x2: Output. */
        uint32_t reserved_14_31        : 18;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_pflt_state_sts_s cn; */
};
typedef union cavm_mdabx_pflt_state_sts cavm_mdabx_pflt_state_sts_t;

static inline uint64_t CAVM_MDABX_PFLT_STATE_STS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_PFLT_STATE_STS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008de0ll + 0x80000ll * ((a) & 0x7f);
    __cavm_csr_fatal("MDABX_PFLT_STATE_STS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_PFLT_STATE_STS(a) cavm_mdabx_pflt_state_sts_t
#define bustype_CAVM_MDABX_PFLT_STATE_STS(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_PFLT_STATE_STS(a) "MDABX_PFLT_STATE_STS"
#define device_bar_CAVM_MDABX_PFLT_STATE_STS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_PFLT_STATE_STS(a) (a)
#define arguments_CAVM_MDABX_PFLT_STATE_STS(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_pflt_sts
 *
 * PMEM Filter Status Register
 */
union cavm_mdabx_pflt_sts
{
    uint32_t u;
    struct cavm_mdabx_pflt_sts_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_1_31         : 31;
        uint32_t job_done              : 1;  /**< [  0:  0](RO/H) Indicates that a PMEM Filter job completed. JOB_DONE is cleared
                                                                 when MDAB()_PFLT_RUN[RUN] transitions from 0 to 1. */
#else /* Word 0 - Little Endian */
        uint32_t job_done              : 1;  /**< [  0:  0](RO/H) Indicates that a PMEM Filter job completed. JOB_DONE is cleared
                                                                 when MDAB()_PFLT_RUN[RUN] transitions from 0 to 1. */
        uint32_t reserved_1_31         : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_pflt_sts_s cn; */
};
typedef union cavm_mdabx_pflt_sts cavm_mdabx_pflt_sts_t;

static inline uint64_t CAVM_MDABX_PFLT_STS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_PFLT_STS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008da0ll + 0x80000ll * ((a) & 0x7f);
    __cavm_csr_fatal("MDABX_PFLT_STS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_PFLT_STS(a) cavm_mdabx_pflt_sts_t
#define bustype_CAVM_MDABX_PFLT_STS(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_PFLT_STS(a) "MDABX_PFLT_STS"
#define device_bar_CAVM_MDABX_PFLT_STS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_PFLT_STS(a) (a)
#define arguments_CAVM_MDABX_PFLT_STS(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_proc_ctl
 *
 * MDAB Processor Mode Control Register
 * This register contains controls for certain DSP operating modes.
 */
union cavm_mdabx_proc_ctl
{
    uint32_t u;
    struct cavm_mdabx_proc_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rcv_core              : 1;  /**< [ 31: 31](R/W) Reserved. */
        uint32_t sb_req                : 1;  /**< [ 30: 30](R/W) Reserved. */
        uint32_t boot_vec_sel          : 1;  /**< [ 29: 29](R/W) Reserved. */
        uint32_t powersave_stall_en    : 1;  /**< [ 28: 28](R/W) This bit enables the RUN_STALL powersaving mode. If set, the RUN_STALL signal is toggled
                                                                 according to [POWERSAVE_ON_CNT] and [POWERSAVE_OFF_CNT]. The RUN_STALL
                                                                 signal is toggled high for the number of clocks provided by [POWERSAVE_ON_CNT]+1. Likewise
                                                                 the RUN_STALL is toggled low for the number of clocks provided by [POWERSAVE_OFF_CNT]+1.
                                                                 Minimum valid count values are 15. */
        uint32_t powersave_off_cnt     : 10; /**< [ 27: 18](R/W) This register provides the off (low) count for RUN_STALL powersaving mode. The
                                                                 RUN_STALL signal will be driven low for
                                                                 this value +1 clocks. The minimum valid value is 15, which provides a count of
                                                                 16 clocks. This register provides
                                                                 a maximum count of 1024. */
        uint32_t powersave_on_cnt      : 10; /**< [ 17:  8](R/W) This register provides the on (high) count for RUN_STALL powersaving mode. The
                                                                 RUN_STALL signal will be driven high for
                                                                 this value +1 clocks. The minimum valid value is 15, which provides a count of
                                                                 16 clocks. This register provides
                                                                 a maximum count of 1024. */
        uint32_t cya_ld_lcl_rst_rs_clr : 1;  /**< [  7:  7](R/W) This register contains backdoor cleanup state. */
        uint32_t stlcl_stall           : 1;  /**< [  6:  6](R/W) Local stall bit.  During a ST_LCL transaction, if this
                                                                 bit is SET, the DAC hardware will assert the DSP RunStall input. If the bit
                                                                 is CLEAR, the DAC hardware will NOT assert the DSP RunStall input. */
        uint32_t ldlcl_stall           : 1;  /**< [  5:  5](R/W) Local stall bit.  During a LD_LCL (without reset) transaction, if this
                                                                 bit is set, the DAC hardware will assert the DSP external_wait input. If the bit
                                                                 is clear, the DAC hardware will not assert the DSP external_wait input.
                                                                 NOTE: */
        uint32_t breset                : 1;  /**< [  4:  4](R/W/H) Active High Reset.
                                                                 When software sets this bit, the entire DSP core and its memory system will be
                                                                 forced in the reset state. When
                                                                 software clears this bit, the DSP will come out of reset and start execution at the reset
                                                                 interrupt vector (if [RUN_STALL] is not asserted).  This bit is cleared at the start of
                                                                 a load local with reset operation so that the DSP reset input can be correctly controlled
                                                                 by the load local with reset logic. DSP debug logic is not held at reset while this bit is set. */
        uint32_t ocd_halt_on_reset     : 1;  /**< [  3:  3](R/W) Force the DSP to enter OCDHaltMode after reset. */
        uint32_t dreset                : 1;  /**< [  2:  2](R/W) Setting this bit asserts reset to the DSP debug system logic. */
        uint32_t inv_icache            : 1;  /**< [  1:  1](R/W) Reserved. */
        uint32_t run_stall             : 1;  /**< [  0:  0](R/W/H) When this bit is set, the DSP pipeline is being put into stall state (non-
                                                                 executing state) by hardware until this bit is cleared.
                                                                 This CSR bit is cleared at the start of a load_local_reset operation to enable
                                                                 the load_local_reset logic to control this hardware.
                                                                 At the end of the load_local_reset operation, when the last block of instruction/data
                                                                 has been loaded into the DSP memory, hardware releases the DSP to executing state. */
#else /* Word 0 - Little Endian */
        uint32_t run_stall             : 1;  /**< [  0:  0](R/W/H) When this bit is set, the DSP pipeline is being put into stall state (non-
                                                                 executing state) by hardware until this bit is cleared.
                                                                 This CSR bit is cleared at the start of a load_local_reset operation to enable
                                                                 the load_local_reset logic to control this hardware.
                                                                 At the end of the load_local_reset operation, when the last block of instruction/data
                                                                 has been loaded into the DSP memory, hardware releases the DSP to executing state. */
        uint32_t inv_icache            : 1;  /**< [  1:  1](R/W) Reserved. */
        uint32_t dreset                : 1;  /**< [  2:  2](R/W) Setting this bit asserts reset to the DSP debug system logic. */
        uint32_t ocd_halt_on_reset     : 1;  /**< [  3:  3](R/W) Force the DSP to enter OCDHaltMode after reset. */
        uint32_t breset                : 1;  /**< [  4:  4](R/W/H) Active High Reset.
                                                                 When software sets this bit, the entire DSP core and its memory system will be
                                                                 forced in the reset state. When
                                                                 software clears this bit, the DSP will come out of reset and start execution at the reset
                                                                 interrupt vector (if [RUN_STALL] is not asserted).  This bit is cleared at the start of
                                                                 a load local with reset operation so that the DSP reset input can be correctly controlled
                                                                 by the load local with reset logic. DSP debug logic is not held at reset while this bit is set. */
        uint32_t ldlcl_stall           : 1;  /**< [  5:  5](R/W) Local stall bit.  During a LD_LCL (without reset) transaction, if this
                                                                 bit is set, the DAC hardware will assert the DSP external_wait input. If the bit
                                                                 is clear, the DAC hardware will not assert the DSP external_wait input.
                                                                 NOTE: */
        uint32_t stlcl_stall           : 1;  /**< [  6:  6](R/W) Local stall bit.  During a ST_LCL transaction, if this
                                                                 bit is SET, the DAC hardware will assert the DSP RunStall input. If the bit
                                                                 is CLEAR, the DAC hardware will NOT assert the DSP RunStall input. */
        uint32_t cya_ld_lcl_rst_rs_clr : 1;  /**< [  7:  7](R/W) This register contains backdoor cleanup state. */
        uint32_t powersave_on_cnt      : 10; /**< [ 17:  8](R/W) This register provides the on (high) count for RUN_STALL powersaving mode. The
                                                                 RUN_STALL signal will be driven high for
                                                                 this value +1 clocks. The minimum valid value is 15, which provides a count of
                                                                 16 clocks. This register provides
                                                                 a maximum count of 1024. */
        uint32_t powersave_off_cnt     : 10; /**< [ 27: 18](R/W) This register provides the off (low) count for RUN_STALL powersaving mode. The
                                                                 RUN_STALL signal will be driven low for
                                                                 this value +1 clocks. The minimum valid value is 15, which provides a count of
                                                                 16 clocks. This register provides
                                                                 a maximum count of 1024. */
        uint32_t powersave_stall_en    : 1;  /**< [ 28: 28](R/W) This bit enables the RUN_STALL powersaving mode. If set, the RUN_STALL signal is toggled
                                                                 according to [POWERSAVE_ON_CNT] and [POWERSAVE_OFF_CNT]. The RUN_STALL
                                                                 signal is toggled high for the number of clocks provided by [POWERSAVE_ON_CNT]+1. Likewise
                                                                 the RUN_STALL is toggled low for the number of clocks provided by [POWERSAVE_OFF_CNT]+1.
                                                                 Minimum valid count values are 15. */
        uint32_t boot_vec_sel          : 1;  /**< [ 29: 29](R/W) Reserved. */
        uint32_t sb_req                : 1;  /**< [ 30: 30](R/W) Reserved. */
        uint32_t rcv_core              : 1;  /**< [ 31: 31](R/W) Reserved. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_proc_ctl_s cn10; */
    /* struct cavm_mdabx_proc_ctl_s cnf10ka; */
    struct cavm_mdabx_proc_ctl_cnf10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rcv_core              : 1;  /**< [ 31: 31](R/W) When this bit is set, a DSP core which is low-power state (standby or light
                                                                 sleep) would wake up and move to run state. */
        uint32_t sb_req                : 1;  /**< [ 30: 30](R/W) Standby request.
                                                                 1 = Request transition from light sleep to standby if in Light sleep state.
                                                                 0 = Request transition from standby to light sleep if in Standby state. */
        uint32_t boot_vec_sel          : 1;  /**< [ 29: 29](R/W) Setting this bit selects the alternative stationary vector base address. */
        uint32_t powersave_stall_en    : 1;  /**< [ 28: 28](R/W) This bit enables the RUN_STALL powersaving mode. If set, the RUN_STALL signal is toggled
                                                                 according to [POWERSAVE_ON_CNT] and [POWERSAVE_OFF_CNT]. The RUN_STALL
                                                                 signal is toggled high for the number of clocks provided by [POWERSAVE_ON_CNT]+1. Likewise
                                                                 the RUN_STALL is toggled low for the number of clocks provided by [POWERSAVE_OFF_CNT]+1.
                                                                 Minimum valid count values are 15. */
        uint32_t powersave_off_cnt     : 10; /**< [ 27: 18](R/W) This register provides the off (low) count for RUN_STALL powersaving mode. The
                                                                 RUN_STALL signal will be driven low for
                                                                 this value +1 clocks. The minimum valid value is 15, which provides a count of
                                                                 16 clocks. This register provides
                                                                 a maximum count of 1024. */
        uint32_t powersave_on_cnt      : 10; /**< [ 17:  8](R/W) This register provides the on (high) count for RUN_STALL powersaving mode. The
                                                                 RUN_STALL signal will be driven high for
                                                                 this value +1 clocks. The minimum valid value is 15, which provides a count of
                                                                 16 clocks. This register provides
                                                                 a maximum count of 1024. */
        uint32_t cya_ld_lcl_rst_rs_clr : 1;  /**< [  7:  7](R/W) This register contains backdoor cleanup state. */
        uint32_t stlcl_stall           : 1;  /**< [  6:  6](R/W) Local stall bit.  During a ST_LCL transaction, if this
                                                                 bit is SET, the DAC hardware will assert the DSP RunStall input. If the bit
                                                                 is CLEAR, the DAC hardware will NOT assert the DSP RunStall input. */
        uint32_t ldlcl_stall           : 1;  /**< [  5:  5](R/W) Local stall bit.  During a LD_LCL (without reset) transaction, if this
                                                                 bit is set, the DAC hardware will assert the DSP external_wait input. If the bit
                                                                 is clear, the DAC hardware will not assert the DSP external_wait input.
                                                                 NOTE: */
        uint32_t breset                : 1;  /**< [  4:  4](R/W/H) Active High Reset.
                                                                 When software sets this bit, the entire DSP core and its memory system will be
                                                                 forced in the reset state. When
                                                                 software clears this bit, the DSP will come out of reset and start execution at the reset
                                                                 interrupt vector (if [RUN_STALL] is not asserted).  This bit is cleared at the start of
                                                                 a load local with reset operation so that the DSP reset input can be correctly controlled
                                                                 by the load local with reset logic. DSP debug logic is not held at reset while this bit is set. */
        uint32_t ocd_halt_on_reset     : 1;  /**< [  3:  3](R/W) Reserved. */
        uint32_t dreset                : 1;  /**< [  2:  2](R/W) DSP system reset. Setting this bit resets the DSP Core, DSP Memory sub system and DSP debug system. */
        uint32_t inv_icache            : 1;  /**< [  1:  1](R/W) Setting this bit during DSP reset initiates iCache invalidation. Software must set this
                                                                 bit before issue DSP reset. */
        uint32_t run_stall             : 1;  /**< [  0:  0](R/W/H) When this bit is set, the DSP pipeline is being put into stall state (non-
                                                                 executing state) by hardware until this bit is cleared.
                                                                 This CSR bit is cleared at the start of a load_local_reset operation to enable
                                                                 the load_local_reset logic to control this hardware.
                                                                 At the end of the load_local_reset operation, when the last block of instruction/data
                                                                 has been loaded into the DSP memory, hardware releases the DSP to executing state. */
#else /* Word 0 - Little Endian */
        uint32_t run_stall             : 1;  /**< [  0:  0](R/W/H) When this bit is set, the DSP pipeline is being put into stall state (non-
                                                                 executing state) by hardware until this bit is cleared.
                                                                 This CSR bit is cleared at the start of a load_local_reset operation to enable
                                                                 the load_local_reset logic to control this hardware.
                                                                 At the end of the load_local_reset operation, when the last block of instruction/data
                                                                 has been loaded into the DSP memory, hardware releases the DSP to executing state. */
        uint32_t inv_icache            : 1;  /**< [  1:  1](R/W) Setting this bit during DSP reset initiates iCache invalidation. Software must set this
                                                                 bit before issue DSP reset. */
        uint32_t dreset                : 1;  /**< [  2:  2](R/W) DSP system reset. Setting this bit resets the DSP Core, DSP Memory sub system and DSP debug system. */
        uint32_t ocd_halt_on_reset     : 1;  /**< [  3:  3](R/W) Reserved. */
        uint32_t breset                : 1;  /**< [  4:  4](R/W/H) Active High Reset.
                                                                 When software sets this bit, the entire DSP core and its memory system will be
                                                                 forced in the reset state. When
                                                                 software clears this bit, the DSP will come out of reset and start execution at the reset
                                                                 interrupt vector (if [RUN_STALL] is not asserted).  This bit is cleared at the start of
                                                                 a load local with reset operation so that the DSP reset input can be correctly controlled
                                                                 by the load local with reset logic. DSP debug logic is not held at reset while this bit is set. */
        uint32_t ldlcl_stall           : 1;  /**< [  5:  5](R/W) Local stall bit.  During a LD_LCL (without reset) transaction, if this
                                                                 bit is set, the DAC hardware will assert the DSP external_wait input. If the bit
                                                                 is clear, the DAC hardware will not assert the DSP external_wait input.
                                                                 NOTE: */
        uint32_t stlcl_stall           : 1;  /**< [  6:  6](R/W) Local stall bit.  During a ST_LCL transaction, if this
                                                                 bit is SET, the DAC hardware will assert the DSP RunStall input. If the bit
                                                                 is CLEAR, the DAC hardware will NOT assert the DSP RunStall input. */
        uint32_t cya_ld_lcl_rst_rs_clr : 1;  /**< [  7:  7](R/W) This register contains backdoor cleanup state. */
        uint32_t powersave_on_cnt      : 10; /**< [ 17:  8](R/W) This register provides the on (high) count for RUN_STALL powersaving mode. The
                                                                 RUN_STALL signal will be driven high for
                                                                 this value +1 clocks. The minimum valid value is 15, which provides a count of
                                                                 16 clocks. This register provides
                                                                 a maximum count of 1024. */
        uint32_t powersave_off_cnt     : 10; /**< [ 27: 18](R/W) This register provides the off (low) count for RUN_STALL powersaving mode. The
                                                                 RUN_STALL signal will be driven low for
                                                                 this value +1 clocks. The minimum valid value is 15, which provides a count of
                                                                 16 clocks. This register provides
                                                                 a maximum count of 1024. */
        uint32_t powersave_stall_en    : 1;  /**< [ 28: 28](R/W) This bit enables the RUN_STALL powersaving mode. If set, the RUN_STALL signal is toggled
                                                                 according to [POWERSAVE_ON_CNT] and [POWERSAVE_OFF_CNT]. The RUN_STALL
                                                                 signal is toggled high for the number of clocks provided by [POWERSAVE_ON_CNT]+1. Likewise
                                                                 the RUN_STALL is toggled low for the number of clocks provided by [POWERSAVE_OFF_CNT]+1.
                                                                 Minimum valid count values are 15. */
        uint32_t boot_vec_sel          : 1;  /**< [ 29: 29](R/W) Setting this bit selects the alternative stationary vector base address. */
        uint32_t sb_req                : 1;  /**< [ 30: 30](R/W) Standby request.
                                                                 1 = Request transition from light sleep to standby if in Light sleep state.
                                                                 0 = Request transition from standby to light sleep if in Standby state. */
        uint32_t rcv_core              : 1;  /**< [ 31: 31](R/W) When this bit is set, a DSP core which is low-power state (standby or light
                                                                 sleep) would wake up and move to run state. */
#endif /* Word 0 - End */
    } cnf10kb;
};
typedef union cavm_mdabx_proc_ctl cavm_mdabx_proc_ctl_t;

static inline uint64_t CAVM_MDABX_PROC_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_PROC_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e0440081c0ll + 0x80000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e0440081c0ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_PROC_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_PROC_CTL(a) cavm_mdabx_proc_ctl_t
#define bustype_CAVM_MDABX_PROC_CTL(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_PROC_CTL(a) "MDABX_PROC_CTL"
#define device_bar_CAVM_MDABX_PROC_CTL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_PROC_CTL(a) (a)
#define arguments_CAVM_MDABX_PROC_CTL(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_proc_debug
 *
 * MDAB Processor Debug Register
 * This register contains iram data store and dram conditional store status bits.
 */
union cavm_mdabx_proc_debug
{
    uint32_t u;
    struct cavm_mdabx_proc_debug_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t dblexccnt             : 8;  /**< [ 15:  8](R/W/H) DSP double exception fault counter. Counts the number double exceptions which
                                                                 have occurred. write zeros to clear. */
        uint32_t pfatalerr             : 1;  /**< [  7:  7](RO/H) Sticky fatal error notification signal that is asserted when a fatal error condition occurs. */
        uint32_t debugmode             : 1;  /**< [  6:  6](RO/H) Non-maskable version of XOCDMode (DSP status output). */
        uint32_t iram1loadstore        : 1;  /**< [  5:  5](RO/H) Data load/store to iram 1. */
        uint32_t iram0loadstore        : 1;  /**< [  4:  4](RO/H) Data load/store to iram 0. */
        uint32_t reserved_0_3          : 4;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_3          : 4;
        uint32_t iram0loadstore        : 1;  /**< [  4:  4](RO/H) Data load/store to iram 0. */
        uint32_t iram1loadstore        : 1;  /**< [  5:  5](RO/H) Data load/store to iram 1. */
        uint32_t debugmode             : 1;  /**< [  6:  6](RO/H) Non-maskable version of XOCDMode (DSP status output). */
        uint32_t pfatalerr             : 1;  /**< [  7:  7](RO/H) Sticky fatal error notification signal that is asserted when a fatal error condition occurs. */
        uint32_t dblexccnt             : 8;  /**< [ 15:  8](R/W/H) DSP double exception fault counter. Counts the number double exceptions which
                                                                 have occurred. write zeros to clear. */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_proc_debug_s cn; */
};
typedef union cavm_mdabx_proc_debug cavm_mdabx_proc_debug_t;

static inline uint64_t CAVM_MDABX_PROC_DEBUG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_PROC_DEBUG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008ee0ll + 0x80000ll * ((a) & 0x7f);
    __cavm_csr_fatal("MDABX_PROC_DEBUG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_PROC_DEBUG(a) cavm_mdabx_proc_debug_t
#define bustype_CAVM_MDABX_PROC_DEBUG(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_PROC_DEBUG(a) "MDABX_PROC_DEBUG"
#define device_bar_CAVM_MDABX_PROC_DEBUG(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_PROC_DEBUG(a) (a)
#define arguments_CAVM_MDABX_PROC_DEBUG(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_proc_status
 *
 * MDAB Processor Status Register
 * This register indicates status value regarding the DSP state.
 */
union cavm_mdabx_proc_status
{
    uint32_t u;
    struct cavm_mdabx_proc_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_29_31        : 3;
        uint32_t xocd_state            : 1;  /**< [ 28: 28](RO/H) Indicates the DSP has entered the post reset OCD halt mode. */
        uint32_t dsp_op_mod            : 2;  /**< [ 27: 26](RO/H) Reserved. */
        uint32_t dsp_cbu_stt           : 2;  /**< [ 25: 24](RO/H) Reserved. */
        uint32_t dsp_pcu_stt           : 6;  /**< [ 23: 18](RO/H) Reserved. */
        uint32_t etm_pwron             : 1;  /**< [ 17: 17](RO/H) Reserved. */
        uint32_t ocem_dbg_mod          : 1;  /**< [ 16: 16](RO/H) Reserved. */
        uint32_t dsp_trap              : 1;  /**< [ 15: 15](RO/H) Reserved. */
        uint32_t etm_en                : 1;  /**< [ 14: 14](RO/H) Reserved. */
        uint32_t etm_fifo_empty        : 1;  /**< [ 13: 13](RO/H) Reserved. */
        uint32_t ocem_gp               : 4;  /**< [ 12:  9](RO/H) Reserved. */
        uint32_t reserved_4_8          : 5;
        uint32_t dsp_sb                : 1;  /**< [  3:  3](RO/H) Reserved. */
        uint32_t dsp_ack_sb            : 1;  /**< [  2:  2](RO/H) Reserved. */
        uint32_t core_stand_by         : 1;  /**< [  1:  1](RO/H) Reserved. */
        uint32_t reserved_0            : 1;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0            : 1;
        uint32_t core_stand_by         : 1;  /**< [  1:  1](RO/H) Reserved. */
        uint32_t dsp_ack_sb            : 1;  /**< [  2:  2](RO/H) Reserved. */
        uint32_t dsp_sb                : 1;  /**< [  3:  3](RO/H) Reserved. */
        uint32_t reserved_4_8          : 5;
        uint32_t ocem_gp               : 4;  /**< [ 12:  9](RO/H) Reserved. */
        uint32_t etm_fifo_empty        : 1;  /**< [ 13: 13](RO/H) Reserved. */
        uint32_t etm_en                : 1;  /**< [ 14: 14](RO/H) Reserved. */
        uint32_t dsp_trap              : 1;  /**< [ 15: 15](RO/H) Reserved. */
        uint32_t ocem_dbg_mod          : 1;  /**< [ 16: 16](RO/H) Reserved. */
        uint32_t etm_pwron             : 1;  /**< [ 17: 17](RO/H) Reserved. */
        uint32_t dsp_pcu_stt           : 6;  /**< [ 23: 18](RO/H) Reserved. */
        uint32_t dsp_cbu_stt           : 2;  /**< [ 25: 24](RO/H) Reserved. */
        uint32_t dsp_op_mod            : 2;  /**< [ 27: 26](RO/H) Reserved. */
        uint32_t xocd_state            : 1;  /**< [ 28: 28](RO/H) Indicates the DSP has entered the post reset OCD halt mode. */
        uint32_t reserved_29_31        : 3;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_proc_status_s cn10; */
    struct cavm_mdabx_proc_status_cnf10ka
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_29_31        : 3;
        uint32_t xocd_state            : 1;  /**< [ 28: 28](RO/H) Indicates the DSP has entered the post reset OCD halt mode. */
        uint32_t dsp_op_mod            : 2;  /**< [ 27: 26](RO/H) Reserved. */
        uint32_t dsp_cbu_stt           : 2;  /**< [ 25: 24](RO/H) Reserved. */
        uint32_t dsp_pcu_stt           : 6;  /**< [ 23: 18](RO/H) Reserved. */
        uint32_t etm_pwron             : 1;  /**< [ 17: 17](RO/H) Reserved. */
        uint32_t ocem_dbg_mod          : 1;  /**< [ 16: 16](RO/H) Reserved. */
        uint32_t dsp_trap              : 1;  /**< [ 15: 15](RO/H) Reserved. */
        uint32_t etm_en                : 1;  /**< [ 14: 14](RO/H) Reserved. */
        uint32_t etm_fifo_empty        : 1;  /**< [ 13: 13](RO/H) Reserved. */
        uint32_t ocem_gp               : 4;  /**< [ 12:  9](RO/H) Reserved. */
        uint32_t reserved_4_8          : 5;
        uint32_t dsp_sb                : 1;  /**< [  3:  3](RO/H) Reserved. */
        uint32_t dsp_ack_sb            : 1;  /**< [  2:  2](RO/H) Reserved. */
        uint32_t core_stand_by         : 1;  /**< [  1:  1](RO/H) Reserved. */
        uint32_t pwait_state           : 1;  /**< [  0:  0](RO/H) Indicates that the DSP core is in the sleep mode. Any enabled interrupt will wake the DSP. */
#else /* Word 0 - Little Endian */
        uint32_t pwait_state           : 1;  /**< [  0:  0](RO/H) Indicates that the DSP core is in the sleep mode. Any enabled interrupt will wake the DSP. */
        uint32_t core_stand_by         : 1;  /**< [  1:  1](RO/H) Reserved. */
        uint32_t dsp_ack_sb            : 1;  /**< [  2:  2](RO/H) Reserved. */
        uint32_t dsp_sb                : 1;  /**< [  3:  3](RO/H) Reserved. */
        uint32_t reserved_4_8          : 5;
        uint32_t ocem_gp               : 4;  /**< [ 12:  9](RO/H) Reserved. */
        uint32_t etm_fifo_empty        : 1;  /**< [ 13: 13](RO/H) Reserved. */
        uint32_t etm_en                : 1;  /**< [ 14: 14](RO/H) Reserved. */
        uint32_t dsp_trap              : 1;  /**< [ 15: 15](RO/H) Reserved. */
        uint32_t ocem_dbg_mod          : 1;  /**< [ 16: 16](RO/H) Reserved. */
        uint32_t etm_pwron             : 1;  /**< [ 17: 17](RO/H) Reserved. */
        uint32_t dsp_pcu_stt           : 6;  /**< [ 23: 18](RO/H) Reserved. */
        uint32_t dsp_cbu_stt           : 2;  /**< [ 25: 24](RO/H) Reserved. */
        uint32_t dsp_op_mod            : 2;  /**< [ 27: 26](RO/H) Reserved. */
        uint32_t xocd_state            : 1;  /**< [ 28: 28](RO/H) Indicates the DSP has entered the post reset OCD halt mode. */
        uint32_t reserved_29_31        : 3;
#endif /* Word 0 - End */
    } cnf10ka;
    struct cavm_mdabx_proc_status_cnf10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_29_31        : 3;
        uint32_t xocd_state            : 1;  /**< [ 28: 28](RO/H) Reserved. */
        uint32_t dsp_op_mod            : 2;  /**< [ 27: 26](RO/H) DSP operation mode. */
        uint32_t dsp_cbu_stt           : 2;  /**< [ 25: 24](RO/H) DSP CBU user status from modp register. */
        uint32_t dsp_pcu_stt           : 6;  /**< [ 23: 18](RO/H) DSP PCU user status from modp register. */
        uint32_t etm_pwron             : 1;  /**< [ 17: 17](RO/H) When set, ETM in use. */
        uint32_t ocem_dbg_mod          : 1;  /**< [ 16: 16](RO/H) DSP OECM debug mode indication. */
        uint32_t dsp_trap              : 1;  /**< [ 15: 15](RO/H) DSP core in a TRAP indication. */
        uint32_t etm_en                : 1;  /**< [ 14: 14](RO/H) DSP core ETM is enabled. */
        uint32_t etm_fifo_empty        : 1;  /**< [ 13: 13](RO/H) Reflect the status for the ETM FIFO, 0x0 - empty, 0x1 - occupied. */
        uint32_t ocem_gp               : 4;  /**< [ 12:  9](RO/H) Reflect the status at OCEM control register bits[15:12]. */
        uint32_t reserved_4_8          : 5;
        uint32_t dsp_sb                : 1;  /**< [  3:  3](RO/H) DSP in Standby Mode. */
        uint32_t dsp_ack_sb            : 1;  /**< [  2:  2](RO/H) Acknowledge hardware transition request from light sleep to standby. */
        uint32_t core_stand_by         : 1;  /**< [  1:  1](RO/H) Indicates the DSP core and its memory system are in sleep mode. Any enabled
                                                                 interrupt will wake the DSP up or setting in MDAB_(0..31,32..48)PROC_CTL[RCV_CORE]. */
        uint32_t core_light_sleep      : 1;  /**< [  0:  0](RO/H) Indicates that the DSP core is in the sleep mode. Any enabled interrupt will
                                                                 wake the DSP up or setting MDAB_PROC_CTL[RCV_CORE]. */
#else /* Word 0 - Little Endian */
        uint32_t core_light_sleep      : 1;  /**< [  0:  0](RO/H) Indicates that the DSP core is in the sleep mode. Any enabled interrupt will
                                                                 wake the DSP up or setting MDAB_PROC_CTL[RCV_CORE]. */
        uint32_t core_stand_by         : 1;  /**< [  1:  1](RO/H) Indicates the DSP core and its memory system are in sleep mode. Any enabled
                                                                 interrupt will wake the DSP up or setting in MDAB_(0..31,32..48)PROC_CTL[RCV_CORE]. */
        uint32_t dsp_ack_sb            : 1;  /**< [  2:  2](RO/H) Acknowledge hardware transition request from light sleep to standby. */
        uint32_t dsp_sb                : 1;  /**< [  3:  3](RO/H) DSP in Standby Mode. */
        uint32_t reserved_4_8          : 5;
        uint32_t ocem_gp               : 4;  /**< [ 12:  9](RO/H) Reflect the status at OCEM control register bits[15:12]. */
        uint32_t etm_fifo_empty        : 1;  /**< [ 13: 13](RO/H) Reflect the status for the ETM FIFO, 0x0 - empty, 0x1 - occupied. */
        uint32_t etm_en                : 1;  /**< [ 14: 14](RO/H) DSP core ETM is enabled. */
        uint32_t dsp_trap              : 1;  /**< [ 15: 15](RO/H) DSP core in a TRAP indication. */
        uint32_t ocem_dbg_mod          : 1;  /**< [ 16: 16](RO/H) DSP OECM debug mode indication. */
        uint32_t etm_pwron             : 1;  /**< [ 17: 17](RO/H) When set, ETM in use. */
        uint32_t dsp_pcu_stt           : 6;  /**< [ 23: 18](RO/H) DSP PCU user status from modp register. */
        uint32_t dsp_cbu_stt           : 2;  /**< [ 25: 24](RO/H) DSP CBU user status from modp register. */
        uint32_t dsp_op_mod            : 2;  /**< [ 27: 26](RO/H) DSP operation mode. */
        uint32_t xocd_state            : 1;  /**< [ 28: 28](RO/H) Reserved. */
        uint32_t reserved_29_31        : 3;
#endif /* Word 0 - End */
    } cnf10kb;
};
typedef union cavm_mdabx_proc_status cavm_mdabx_proc_status_t;

static inline uint64_t CAVM_MDABX_PROC_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_PROC_STATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e0440081b0ll + 0x80000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e0440081b0ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_PROC_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_PROC_STATUS(a) cavm_mdabx_proc_status_t
#define bustype_CAVM_MDABX_PROC_STATUS(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_PROC_STATUS(a) "MDABX_PROC_STATUS"
#define device_bar_CAVM_MDABX_PROC_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_PROC_STATUS(a) (a)
#define arguments_CAVM_MDABX_PROC_STATUS(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_psm_cmd#
 *
 * MDAB PSM Command Register
 * These four 32b registers comprise a full 128b job command which allows DSP software to enqueue new
 * 128-bit job command to the PSM Command FIFO. Software must write MDAB_PSM_CMD3 last; that
 * write pushes the command to the FIFO.
 * For more details see PSM Command FIFO section.
 */
union cavm_mdabx_psm_cmdx
{
    uint32_t u;
    struct cavm_mdabx_psm_cmdx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t word                  : 32; /**< [ 31:  0](R/W) The full 128-bit job command is comprised of the WORD[3:0] from EACH 1(of 4) 32b CSRs =
                                                                 {MDABx_PSM_CMD[3:0]} */
#else /* Word 0 - Little Endian */
        uint32_t word                  : 32; /**< [ 31:  0](R/W) The full 128-bit job command is comprised of the WORD[3:0] from EACH 1(of 4) 32b CSRs =
                                                                 {MDABx_PSM_CMD[3:0]} */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_psm_cmdx_s cn; */
};
typedef union cavm_mdabx_psm_cmdx cavm_mdabx_psm_cmdx_t;

static inline uint64_t CAVM_MDABX_PSM_CMDX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_PSM_CMDX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))) && (b<=3)))
        return 0x87e044008100ll + 0x80000ll * ((a) & 0x7f) + 0x10ll * ((b) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=47) && (b<=3)))
        return 0x87e044008100ll + 0x80000ll * ((a) & 0x3f) + 0x10ll * ((b) & 0x3);
    __cavm_csr_fatal("MDABX_PSM_CMDX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_PSM_CMDX(a,b) cavm_mdabx_psm_cmdx_t
#define bustype_CAVM_MDABX_PSM_CMDX(a,b) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_PSM_CMDX(a,b) "MDABX_PSM_CMDX"
#define device_bar_CAVM_MDABX_PSM_CMDX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_PSM_CMDX(a,b) (a)
#define arguments_CAVM_MDABX_PSM_CMDX(a,b) (a),(b),-1,-1

/**
 * Register (MULTIRSL32b) mdab#_psm_cmd_push
 *
 * MDAB PSM Command Register
 * This register causes the hardware to push a new job command currently in MDAB()_PSM_CMD_(0..3)
 * to the PSM.
 */
union cavm_mdabx_psm_cmd_push
{
    uint32_t u;
    struct cavm_mdabx_psm_cmd_push_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t psm_cnt               : 4;  /**< [  7:  4](RO/H) The number of enqueued commands in the PSM command FIFO. */
        uint32_t reserved_1_3          : 3;
        uint32_t start_busy            : 1;  /**< [  0:  0](R/W1S/H) When software writes a one, hardware will start sending all the PSM command stored in
                                                                 the 8 deep PSM command FIFO.  Hardware will clear this bit when the queue is empty.
                                                                 Software must not enqueue more commands while this bit is asserted. */
#else /* Word 0 - Little Endian */
        uint32_t start_busy            : 1;  /**< [  0:  0](R/W1S/H) When software writes a one, hardware will start sending all the PSM command stored in
                                                                 the 8 deep PSM command FIFO.  Hardware will clear this bit when the queue is empty.
                                                                 Software must not enqueue more commands while this bit is asserted. */
        uint32_t reserved_1_3          : 3;
        uint32_t psm_cnt               : 4;  /**< [  7:  4](RO/H) The number of enqueued commands in the PSM command FIFO. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_psm_cmd_push_s cn; */
};
typedef union cavm_mdabx_psm_cmd_push cavm_mdabx_psm_cmd_push_t;

static inline uint64_t CAVM_MDABX_PSM_CMD_PUSH(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_PSM_CMD_PUSH(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008140ll + 0x80000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e044008140ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_PSM_CMD_PUSH", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_PSM_CMD_PUSH(a) cavm_mdabx_psm_cmd_push_t
#define bustype_CAVM_MDABX_PSM_CMD_PUSH(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_PSM_CMD_PUSH(a) "MDABX_PSM_CMD_PUSH"
#define device_bar_CAVM_MDABX_PSM_CMD_PUSH(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_PSM_CMD_PUSH(a) (a)
#define arguments_CAVM_MDABX_PSM_CMD_PUSH(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_psm_timer_hi
 *
 * MDAB PSM Timer Broadcast Register
 * This register contains the upper 32 bits bits of the 64-bit BCN timer.
 * When the PSM detects a 10 ms frame interval, the PSM broadcasts the BCN Timer[63:24]
 * value which is latched into {MDAB()_PSM_TIMER_HI[TIMER_HI], MDAB()_PSM_TIMER_LO[TIMER_LO]}.
 */
union cavm_mdabx_psm_timer_hi
{
    uint32_t u;
    struct cavm_mdabx_psm_timer_hi_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t timer_hi              : 32; /**< [ 31:  0](RO/H) Bits\<31:16\> are always 0x0.
                                                                         Bits\<15:4\> capture the Frame value.
                                                                         Bits\<3:0\> capture the Sub Frame value. */
#else /* Word 0 - Little Endian */
        uint32_t timer_hi              : 32; /**< [ 31:  0](RO/H) Bits\<31:16\> are always 0x0.
                                                                         Bits\<15:4\> capture the Frame value.
                                                                         Bits\<3:0\> capture the Sub Frame value. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_psm_timer_hi_s cn10; */
    /* struct cavm_mdabx_psm_timer_hi_s cnf10ka; */
    struct cavm_mdabx_psm_timer_hi_cnf10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t timer_hi              : 32; /**< [ 31:  0](RO/H) This register capture bits \<63:32\> of the BCN timer value sent by the PSM.
                                                                 (PSM sends 40bit, the upper 32bits are being capture in this register and the
                                                                 other 8bits are being capture in MDAB()_PSM_LO[TIMER_LO]). */
#else /* Word 0 - Little Endian */
        uint32_t timer_hi              : 32; /**< [ 31:  0](RO/H) This register capture bits \<63:32\> of the BCN timer value sent by the PSM.
                                                                 (PSM sends 40bit, the upper 32bits are being capture in this register and the
                                                                 other 8bits are being capture in MDAB()_PSM_LO[TIMER_LO]). */
#endif /* Word 0 - End */
    } cnf10kb;
};
typedef union cavm_mdabx_psm_timer_hi cavm_mdabx_psm_timer_hi_t;

static inline uint64_t CAVM_MDABX_PSM_TIMER_HI(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_PSM_TIMER_HI(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e0440081f0ll + 0x80000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e0440081f0ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_PSM_TIMER_HI", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_PSM_TIMER_HI(a) cavm_mdabx_psm_timer_hi_t
#define bustype_CAVM_MDABX_PSM_TIMER_HI(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_PSM_TIMER_HI(a) "MDABX_PSM_TIMER_HI"
#define device_bar_CAVM_MDABX_PSM_TIMER_HI(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_PSM_TIMER_HI(a) (a)
#define arguments_CAVM_MDABX_PSM_TIMER_HI(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_psm_timer_lo
 *
 * MDAB PSM Timer Broadcast Register
 * This register contains the lower 32 bits bits of the 64-bit BCN timer.
 * When the PSM detects a 10 ms frame interval, the PSM broadcasts the BCN Timer\<63:24\>
 * value which is latched into {MDAB()_PSM_TIMER_HI[TIMER_HI], MDAB()_PSM_TIMER_LO[TIMER_LO]}.
 * This Register captures bits \<31:24\> into [TIMER_LO] field, and generates the
 * lower 24 bits of the timer based on a local timer running on the BPHY clock (BCLK).
 */
union cavm_mdabx_psm_timer_lo
{
    uint32_t u;
    struct cavm_mdabx_psm_timer_lo_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t timer_lo              : 8;  /**< [ 31: 24](RO/H) Reserved. */
        uint32_t timer_lsb             : 24; /**< [ 23:  0](R/W/H) Local timer that is incremented every BPHY clock cycle. This timer is reset every PSM timer
                                                                 broadcast, and together with the MDAB()_PSM_TIMER_HI[TIMER_HI\<15:0\>] provide an accurate BFN
                                                                 time.

                                                                 Software must read PSM_TIMER_LO first in order to capture the value of PSM_TIMER_HI for
                                                                 reading. */
#else /* Word 0 - Little Endian */
        uint32_t timer_lsb             : 24; /**< [ 23:  0](R/W/H) Local timer that is incremented every BPHY clock cycle. This timer is reset every PSM timer
                                                                 broadcast, and together with the MDAB()_PSM_TIMER_HI[TIMER_HI\<15:0\>] provide an accurate BFN
                                                                 time.

                                                                 Software must read PSM_TIMER_LO first in order to capture the value of PSM_TIMER_HI for
                                                                 reading. */
        uint32_t timer_lo              : 8;  /**< [ 31: 24](RO/H) Reserved. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_psm_timer_lo_s cn10; */
    /* struct cavm_mdabx_psm_timer_lo_s cnf10ka; */
    struct cavm_mdabx_psm_timer_lo_cnf10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t timer_lo              : 8;  /**< [ 31: 24](RO/H) Bits \<31:24\> of the BCN timer value sent by the PSM. */
        uint32_t timer_lsb             : 24; /**< [ 23:  0](R/W/H) "Bits \<23:0\> of the BCN timer. The value is generated using a local timer which is reset on
                                                                 a PSM_TIMER broadcast, which happens every 10 milliseconds. The timer is incremented every
                                                                 BPHY clock cycle.

                                                                 Software NOTES:
                                                                 1) The PSM_TIMER\<23:0\> value represents the # of [bcn_clk * 4] = (1.2288GHz) cycles within
                                                                    the 10ms frame. Each DSP's local TIMER_LSB\<23:0\> will be an approximation of the
                                                                    PSM_TIMER\<23:0\> system time offset value (within the 10ms interval).

                                                                 2) Software will have to convert the TIMER_LSB\<23:0\> value. which represents the number of
                                                                    BPHY clocks, to the number of [bcn_clks*4] based on BPHY clock frequency.

                                                                 In order to read the 64-bit BCN timer value, software must first read PSM_TIMER_LO CSR,
                                                                 which captures the PSM_TIMER_HI value into a shadow register. A subsequent read of
                                                                 PSM_TIMER_HI returns the captured value.

                                                                 \<pre\>
                                                                 PSM_TIMER\<63:24\> = { PSM_TIMER_HI[TIMER_HI]\<63:32\>, PSM_TIMER_LO[TIMER_LO]\<31:24\> }
                                                                 PSM_TIMER\<23:0\>  = PSM_TIMER_LO[TIMER_LSB]\<23:0\>
                                                                 \</pre\>" */
#else /* Word 0 - Little Endian */
        uint32_t timer_lsb             : 24; /**< [ 23:  0](R/W/H) "Bits \<23:0\> of the BCN timer. The value is generated using a local timer which is reset on
                                                                 a PSM_TIMER broadcast, which happens every 10 milliseconds. The timer is incremented every
                                                                 BPHY clock cycle.

                                                                 Software NOTES:
                                                                 1) The PSM_TIMER\<23:0\> value represents the # of [bcn_clk * 4] = (1.2288GHz) cycles within
                                                                    the 10ms frame. Each DSP's local TIMER_LSB\<23:0\> will be an approximation of the
                                                                    PSM_TIMER\<23:0\> system time offset value (within the 10ms interval).

                                                                 2) Software will have to convert the TIMER_LSB\<23:0\> value. which represents the number of
                                                                    BPHY clocks, to the number of [bcn_clks*4] based on BPHY clock frequency.

                                                                 In order to read the 64-bit BCN timer value, software must first read PSM_TIMER_LO CSR,
                                                                 which captures the PSM_TIMER_HI value into a shadow register. A subsequent read of
                                                                 PSM_TIMER_HI returns the captured value.

                                                                 \<pre\>
                                                                 PSM_TIMER\<63:24\> = { PSM_TIMER_HI[TIMER_HI]\<63:32\>, PSM_TIMER_LO[TIMER_LO]\<31:24\> }
                                                                 PSM_TIMER\<23:0\>  = PSM_TIMER_LO[TIMER_LSB]\<23:0\>
                                                                 \</pre\>" */
        uint32_t timer_lo              : 8;  /**< [ 31: 24](RO/H) Bits \<31:24\> of the BCN timer value sent by the PSM. */
#endif /* Word 0 - End */
    } cnf10kb;
};
typedef union cavm_mdabx_psm_timer_lo cavm_mdabx_psm_timer_lo_t;

static inline uint64_t CAVM_MDABX_PSM_TIMER_LO(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_PSM_TIMER_LO(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008200ll + 0x80000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e044008200ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_PSM_TIMER_LO", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_PSM_TIMER_LO(a) cavm_mdabx_psm_timer_lo_t
#define bustype_CAVM_MDABX_PSM_TIMER_LO(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_PSM_TIMER_LO(a) "MDABX_PSM_TIMER_LO"
#define device_bar_CAVM_MDABX_PSM_TIMER_LO(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_PSM_TIMER_LO(a) (a)
#define arguments_CAVM_MDABX_PSM_TIMER_LO(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_rd_addr
 *
 * MDAB Read DMA Address Register
 * The starting address used by the RD-DMA engine when writing RD-DMA data to local DSP memory.
 * During Job_Type = LD_LCL commands, hardware loads the RD_ADDR/RD_LIMIT registers directly.
 */
union cavm_mdabx_rd_addr
{
    uint32_t u;
    struct cavm_mdabx_rd_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t addr                  : 28; /**< [ 31:  4](R/W/H) The 128b-aligned starting address used by the RD-DMA engine when writing RD-DMA data to
                                                                 local DSP memory. For details see MDAB Memory Map table.
                                                                 Software must program a valid DMEM or PMEM address into this register. */
        uint32_t reserved_0_3          : 4;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_3          : 4;
        uint32_t addr                  : 28; /**< [ 31:  4](R/W/H) The 128b-aligned starting address used by the RD-DMA engine when writing RD-DMA data to
                                                                 local DSP memory. For details see MDAB Memory Map table.
                                                                 Software must program a valid DMEM or PMEM address into this register. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_rd_addr_s cn; */
};
typedef union cavm_mdabx_rd_addr cavm_mdabx_rd_addr_t;

static inline uint64_t CAVM_MDABX_RD_ADDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_RD_ADDR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008070ll + 0x80000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e044008070ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_RD_ADDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_RD_ADDR(a) cavm_mdabx_rd_addr_t
#define bustype_CAVM_MDABX_RD_ADDR(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_RD_ADDR(a) "MDABX_RD_ADDR"
#define device_bar_CAVM_MDABX_RD_ADDR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_RD_ADDR(a) (a)
#define arguments_CAVM_MDABX_RD_ADDR(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_rd_error_sts
 *
 * MDAB Slave Port Read Channel Error Status Register
 */
union cavm_mdabx_rd_error_sts
{
    uint32_t u;
    struct cavm_mdabx_rd_error_sts_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t addr                  : 28; /**< [ 31:  4](RO/H) When a DSP complex slave read channel access causes the SLVERR error bit to be
                                                                 set, this field captures the
                                                                 failing 16-byte aligned address as addr[31:4]. */
        uint32_t error_src             : 3;  /**< [  3:  1](RO/H) This field indicates the source of the transaction that caused the recorded error.
                                                                 0x0 = WDM.
                                                                 0x1 = Reserved
                                                                 0x2 = Reserved
                                                                 0x3 = CSR. */
        uint32_t mem_slverr            : 1;  /**< [  0:  0](R/W1C/H) This bit will be set when DSP complex slave read channel is accessed by JOB DMA
                                                                 engine or RSL access to a non existent
                                                                 instruction or data memory address, or when any other illegal access is performed */
#else /* Word 0 - Little Endian */
        uint32_t mem_slverr            : 1;  /**< [  0:  0](R/W1C/H) This bit will be set when DSP complex slave read channel is accessed by JOB DMA
                                                                 engine or RSL access to a non existent
                                                                 instruction or data memory address, or when any other illegal access is performed */
        uint32_t error_src             : 3;  /**< [  3:  1](RO/H) This field indicates the source of the transaction that caused the recorded error.
                                                                 0x0 = WDM.
                                                                 0x1 = Reserved
                                                                 0x2 = Reserved
                                                                 0x3 = CSR. */
        uint32_t addr                  : 28; /**< [ 31:  4](RO/H) When a DSP complex slave read channel access causes the SLVERR error bit to be
                                                                 set, this field captures the
                                                                 failing 16-byte aligned address as addr[31:4]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_rd_error_sts_s cn; */
};
typedef union cavm_mdabx_rd_error_sts cavm_mdabx_rd_error_sts_t;

static inline uint64_t CAVM_MDABX_RD_ERROR_STS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_RD_ERROR_STS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008270ll + 0x80000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e044008270ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_RD_ERROR_STS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_RD_ERROR_STS(a) cavm_mdabx_rd_error_sts_t
#define bustype_CAVM_MDABX_RD_ERROR_STS(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_RD_ERROR_STS(a) "MDABX_RD_ERROR_STS"
#define device_bar_CAVM_MDABX_RD_ERROR_STS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_RD_ERROR_STS(a) (a)
#define arguments_CAVM_MDABX_RD_ERROR_STS(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_rd_fifo_status
 *
 * MDAB Read DMA Slice FIFO Status Register
 * The entry status of the read DMA slice FIFO.
 */
union cavm_mdabx_rd_fifo_status
{
    uint32_t u;
    struct cavm_mdabx_rd_fifo_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_12_31        : 20;
        uint32_t slice_fifo_rem_cnt    : 4;  /**< [ 11:  8](RO/H) This field is the count of the remaining programmed FIFO entries. It is updated after every FIFO
                                                                 pop or push, and retains it's last value after a FIFO flush. */
        uint32_t slice_fifo_psh_cnt    : 8;  /**< [  7:  0](RO/H) This field provides the number of slices pushed to the FIFO since job start. */
#else /* Word 0 - Little Endian */
        uint32_t slice_fifo_psh_cnt    : 8;  /**< [  7:  0](RO/H) This field provides the number of slices pushed to the FIFO since job start. */
        uint32_t slice_fifo_rem_cnt    : 4;  /**< [ 11:  8](RO/H) This field is the count of the remaining programmed FIFO entries. It is updated after every FIFO
                                                                 pop or push, and retains it's last value after a FIFO flush. */
        uint32_t reserved_12_31        : 20;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_rd_fifo_status_s cn; */
};
typedef union cavm_mdabx_rd_fifo_status cavm_mdabx_rd_fifo_status_t;

static inline uint64_t CAVM_MDABX_RD_FIFO_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_RD_FIFO_STATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008480ll + 0x80000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e044008480ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_RD_FIFO_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_RD_FIFO_STATUS(a) cavm_mdabx_rd_fifo_status_t
#define bustype_CAVM_MDABX_RD_FIFO_STATUS(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_RD_FIFO_STATUS(a) "MDABX_RD_FIFO_STATUS"
#define device_bar_CAVM_MDABX_RD_FIFO_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_RD_FIFO_STATUS(a) (a)
#define arguments_CAVM_MDABX_RD_FIFO_STATUS(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_rd_length
 *
 * MDAB Read DMA Length Register
 * The actual 128-bit length of the most recent RD-DMA engine job configuration transfer.
 */
union cavm_mdabx_rd_length
{
    uint32_t u;
    struct cavm_mdabx_rd_length_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_18_31        : 14;
        uint32_t length                : 14; /**< [ 17:  4](RO/H) The actual 128-bit length of the most recent RD-DMA engine read DMA transfer.
                                                                 This field will be updated when the RD-DMA has been actually write committed to local DSP
                                                                 memory,
                                                                 which allows software to read (poll) the length field during the RD-DMA transfer to know how many
                                                                 128-bit chunks are now currently available to be read and used. */
        uint32_t reserved_0_3          : 4;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_3          : 4;
        uint32_t length                : 14; /**< [ 17:  4](RO/H) The actual 128-bit length of the most recent RD-DMA engine read DMA transfer.
                                                                 This field will be updated when the RD-DMA has been actually write committed to local DSP
                                                                 memory,
                                                                 which allows software to read (poll) the length field during the RD-DMA transfer to know how many
                                                                 128-bit chunks are now currently available to be read and used. */
        uint32_t reserved_18_31        : 14;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_rd_length_s cn; */
};
typedef union cavm_mdabx_rd_length cavm_mdabx_rd_length_t;

static inline uint64_t CAVM_MDABX_RD_LENGTH(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_RD_LENGTH(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008090ll + 0x80000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e044008090ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_RD_LENGTH", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_RD_LENGTH(a) cavm_mdabx_rd_length_t
#define bustype_CAVM_MDABX_RD_LENGTH(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_RD_LENGTH(a) "MDABX_RD_LENGTH"
#define device_bar_CAVM_MDABX_RD_LENGTH(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_RD_LENGTH(a) (a)
#define arguments_CAVM_MDABX_RD_LENGTH(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_rd_limit
 *
 * MDAB Read DMA Limit Register
 * The maximum number of 128-bit sized chunks that the RD-DMA engine may write starting from the
 * 128-bit-aligned MDAB()_RD_ADDR. During Job_Type = LD_LCL* commands, hardware loads
 * the RD_ADDR/RD_LIMIT
 * registers directly from the Job Descriptor's DMA section(s).
 */
union cavm_mdabx_rd_limit
{
    uint32_t u;
    struct cavm_mdabx_rd_limit_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t last                  : 1;  /**< [ 31: 31](R/W) Indicates the last RD-DMA slice which may be written to address MDAB()_RD_ADDR.
                                                                 DSP software may choose to segment the JD.RD-DMA data into multiple non-contiguous RD-DMA
                                                                 transfers to DSP local memory.
                                                                 Eventually, DSP software will indicate the LAST segment (or slice), to indicate this is
                                                                 the final RD-DMA sub-blk transfer.
                                                                 Each RD-DMA operation's LAST will indicate when the last segment (or slice) RD-DMA
                                                                 operation has been set up, to complete the JD.RD-DMA data transfer.
                                                                 SW_NOTE: For every new RD-DMA slice operation, DSP software *MUST* signal LAST to indicate
                                                                 the final JD.RD-DMA data slice transfer. */
        uint32_t reserved_18_30        : 13;
        uint32_t limit                 : 14; /**< [ 17:  4](R/W/H) "The maximum number of 128-bit chunks that the RD-DMA engine may write at address
                                                                 MDAB()_RD_ADDR.
                                                                 The JD.JCFG data typically will contain the total RD-DMA Length for each new job. The
                                                                 DSP software is at liberty to break the total RD-DMA transfer into multiples RD-DMA segments (or
                                                                 slices) using the LIMIT register. When either LIMIT has been reached (or if the last
                                                                 JD.RD-DMA data is detected), the RD-DMA is done.

                                                                 SW RESTRICTION #1: Software should never program LIMIT=0. INDETERMINATE results can/will occur.
                                                                 SW RESTRICTION #2: Software should ensure that ADDR+LIMIT SIZES fall within the I+D MEM space,
                                                                 otherwise DMA_ERROR and INDETERMINATE results can/will occur." */
        uint32_t reserved_0_3          : 4;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_3          : 4;
        uint32_t limit                 : 14; /**< [ 17:  4](R/W/H) "The maximum number of 128-bit chunks that the RD-DMA engine may write at address
                                                                 MDAB()_RD_ADDR.
                                                                 The JD.JCFG data typically will contain the total RD-DMA Length for each new job. The
                                                                 DSP software is at liberty to break the total RD-DMA transfer into multiples RD-DMA segments (or
                                                                 slices) using the LIMIT register. When either LIMIT has been reached (or if the last
                                                                 JD.RD-DMA data is detected), the RD-DMA is done.

                                                                 SW RESTRICTION #1: Software should never program LIMIT=0. INDETERMINATE results can/will occur.
                                                                 SW RESTRICTION #2: Software should ensure that ADDR+LIMIT SIZES fall within the I+D MEM space,
                                                                 otherwise DMA_ERROR and INDETERMINATE results can/will occur." */
        uint32_t reserved_18_30        : 13;
        uint32_t last                  : 1;  /**< [ 31: 31](R/W) Indicates the last RD-DMA slice which may be written to address MDAB()_RD_ADDR.
                                                                 DSP software may choose to segment the JD.RD-DMA data into multiple non-contiguous RD-DMA
                                                                 transfers to DSP local memory.
                                                                 Eventually, DSP software will indicate the LAST segment (or slice), to indicate this is
                                                                 the final RD-DMA sub-blk transfer.
                                                                 Each RD-DMA operation's LAST will indicate when the last segment (or slice) RD-DMA
                                                                 operation has been set up, to complete the JD.RD-DMA data transfer.
                                                                 SW_NOTE: For every new RD-DMA slice operation, DSP software *MUST* signal LAST to indicate
                                                                 the final JD.RD-DMA data slice transfer. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_rd_limit_s cn; */
};
typedef union cavm_mdabx_rd_limit cavm_mdabx_rd_limit_t;

static inline uint64_t CAVM_MDABX_RD_LIMIT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_RD_LIMIT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008080ll + 0x80000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e044008080ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_RD_LIMIT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_RD_LIMIT(a) cavm_mdabx_rd_limit_t
#define bustype_CAVM_MDABX_RD_LIMIT(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_RD_LIMIT(a) "MDABX_RD_LIMIT"
#define device_bar_CAVM_MDABX_RD_LIMIT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_RD_LIMIT(a) (a)
#define arguments_CAVM_MDABX_RD_LIMIT(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_rd_next_addr
 *
 * MDAB Read DMA Next Address Register
 * The next address for multi slice DMA transfers. Indicates the first unused slice starting address.
 */
union cavm_mdabx_rd_next_addr
{
    uint32_t u;
    struct cavm_mdabx_rd_next_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t next_addr             : 28; /**< [ 31:  4](RO/H) The next 128b-aligned starting address to be used by the RD-DMA engine when writing RD-DMA data to
                                                                 local DSP memory. This register is used to determine the address for unused slices. */
        uint32_t reserved_0_3          : 4;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_3          : 4;
        uint32_t next_addr             : 28; /**< [ 31:  4](RO/H) The next 128b-aligned starting address to be used by the RD-DMA engine when writing RD-DMA data to
                                                                 local DSP memory. This register is used to determine the address for unused slices. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_rd_next_addr_s cn; */
};
typedef union cavm_mdabx_rd_next_addr cavm_mdabx_rd_next_addr_t;

static inline uint64_t CAVM_MDABX_RD_NEXT_ADDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_RD_NEXT_ADDR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008460ll + 0x80000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e044008460ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_RD_NEXT_ADDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_RD_NEXT_ADDR(a) cavm_mdabx_rd_next_addr_t
#define bustype_CAVM_MDABX_RD_NEXT_ADDR(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_RD_NEXT_ADDR(a) "MDABX_RD_NEXT_ADDR"
#define device_bar_CAVM_MDABX_RD_NEXT_ADDR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_RD_NEXT_ADDR(a) (a)
#define arguments_CAVM_MDABX_RD_NEXT_ADDR(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_rd_status
 *
 * MDAB Read DMA Status Register
 * Reports the status for the RD DMA engine.
 */
union cavm_mdabx_rd_status
{
    uint32_t u;
    struct cavm_mdabx_rd_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t job_tag               : 16; /**< [ 31: 16](RO/H) The JOB_TAG field from the PSM command for the last completed RD DMA operation.
                                                                 When DSP software writes [START_BUSY] = 0 -\> 1, the RD DMA engine will wait until the next
                                                                 available job has been enqueued, at which point the JOB_TAG will be latched in. */
        uint32_t reserved_13_15        : 3;
        uint32_t slice_fifo_flush      : 1;  /**< [ 12: 12](R/W1S/H) Write one to flush the slice FIFO. This field will be automatically cleared. */
        uint32_t post_ld_lcl           : 1;  /**< [ 11: 11](RO/H) Set when a load local job has completed (last LOAD-LCL micro-op completes).
                                                                 Cleared when a normal job has completed. */
        uint32_t ld_lcl_busy           : 1;  /**< [ 10: 10](RO/H) Set when a load local operation is active. */
        uint32_t pending_slot          : 1;  /**< [  9:  9](RO/H) The job slot for the pending RD DMA operation. Valid only when [START_BUSY] == 0 and
                                                                 [DMA_PENDING] == 1. */
        uint32_t job_slot              : 1;  /**< [  8:  8](RO/H) The job slot for the most recent RD DMA operation. */
        uint32_t slice_fifo_oflow      : 1;  /**< [  7:  7](RO/H) Set when the slice FIFO overflows. */
        uint32_t dma_uflow             : 1;  /**< [  6:  6](RO/H) Set when the last RD DMA operation encountered an underflow. */
        uint32_t dma_oflow             : 1;  /**< [  5:  5](RO/H) Set when the last RD DMA operation encountered an overflow. */
        uint32_t dma_error             : 1;  /**< [  4:  4](RO/H) Set when the last RD DMA operation encountered an error. */
        uint32_t last_dma_done         : 1;  /**< [  3:  3](RO/H) Set when the last RD DMA operation transferred the last word of the RD DMA data from the
                                                                 job descriptor (JD.RD-DMA). */
        uint32_t dma_pending           : 1;  /**< [  2:  2](RO/H) Set when a RD DMA operation is pending for the engine and the internal interface needs to
                                                                 be programmed. */
        uint32_t post_reset            : 1;  /**< [  1:  1](RO/H) Set to one on MDAB reset and remains one until the RD-DMA engine starts its first
                                                                 RD-DMA transfer.
                                                                 SWNOTE: DSP software can use this bit to qualify the JOB_TAG, JOB_SLOT, DMA_ERROR, LAST_DMA_DONE
                                                                 bits in this CSR. [see: these status bits remain SET and POST_RESET is used
                                                                 by software to know when they are truly valid].
                                                                 SET(HW): MDAB reset
                                                                 CLR(SW): DSP writes START_BUSY=0-\>1 */
        uint32_t start_busy            : 1;  /**< [  0:  0](R/W1S/H) When software writes a one to this register, hardware will write the job descriptor's read
                                                                 DMA section (JD.RD-DMA) for the next available job into the local memory starting at
                                                                 MDAB()_RD_ADDR, up to MDAB()_RD_ADDR+MDAB()_RD_LIMIT or when the last 128-bit word of the JD.RD-
                                                                 DMA section is
                                                                 transferred (whichever comes first).
                                                                 If the RD-DMA engine has already transferred part but not all of the JD.RD-DMA section for
                                                                 a job, then it will continue transferring data until it reaches the end of the JD.RD-DMA
                                                                 section, or until it
                                                                 writes MDAB()_CFG_LIMIT for the LAST RD-DMA slice, whichever comes first. This bit is reset
                                                                 to zero when the
                                                                 RD-DMA engine has completed the transfer and is ready to be re-initialized for another
                                                                 transfer. */
#else /* Word 0 - Little Endian */
        uint32_t start_busy            : 1;  /**< [  0:  0](R/W1S/H) When software writes a one to this register, hardware will write the job descriptor's read
                                                                 DMA section (JD.RD-DMA) for the next available job into the local memory starting at
                                                                 MDAB()_RD_ADDR, up to MDAB()_RD_ADDR+MDAB()_RD_LIMIT or when the last 128-bit word of the JD.RD-
                                                                 DMA section is
                                                                 transferred (whichever comes first).
                                                                 If the RD-DMA engine has already transferred part but not all of the JD.RD-DMA section for
                                                                 a job, then it will continue transferring data until it reaches the end of the JD.RD-DMA
                                                                 section, or until it
                                                                 writes MDAB()_CFG_LIMIT for the LAST RD-DMA slice, whichever comes first. This bit is reset
                                                                 to zero when the
                                                                 RD-DMA engine has completed the transfer and is ready to be re-initialized for another
                                                                 transfer. */
        uint32_t post_reset            : 1;  /**< [  1:  1](RO/H) Set to one on MDAB reset and remains one until the RD-DMA engine starts its first
                                                                 RD-DMA transfer.
                                                                 SWNOTE: DSP software can use this bit to qualify the JOB_TAG, JOB_SLOT, DMA_ERROR, LAST_DMA_DONE
                                                                 bits in this CSR. [see: these status bits remain SET and POST_RESET is used
                                                                 by software to know when they are truly valid].
                                                                 SET(HW): MDAB reset
                                                                 CLR(SW): DSP writes START_BUSY=0-\>1 */
        uint32_t dma_pending           : 1;  /**< [  2:  2](RO/H) Set when a RD DMA operation is pending for the engine and the internal interface needs to
                                                                 be programmed. */
        uint32_t last_dma_done         : 1;  /**< [  3:  3](RO/H) Set when the last RD DMA operation transferred the last word of the RD DMA data from the
                                                                 job descriptor (JD.RD-DMA). */
        uint32_t dma_error             : 1;  /**< [  4:  4](RO/H) Set when the last RD DMA operation encountered an error. */
        uint32_t dma_oflow             : 1;  /**< [  5:  5](RO/H) Set when the last RD DMA operation encountered an overflow. */
        uint32_t dma_uflow             : 1;  /**< [  6:  6](RO/H) Set when the last RD DMA operation encountered an underflow. */
        uint32_t slice_fifo_oflow      : 1;  /**< [  7:  7](RO/H) Set when the slice FIFO overflows. */
        uint32_t job_slot              : 1;  /**< [  8:  8](RO/H) The job slot for the most recent RD DMA operation. */
        uint32_t pending_slot          : 1;  /**< [  9:  9](RO/H) The job slot for the pending RD DMA operation. Valid only when [START_BUSY] == 0 and
                                                                 [DMA_PENDING] == 1. */
        uint32_t ld_lcl_busy           : 1;  /**< [ 10: 10](RO/H) Set when a load local operation is active. */
        uint32_t post_ld_lcl           : 1;  /**< [ 11: 11](RO/H) Set when a load local job has completed (last LOAD-LCL micro-op completes).
                                                                 Cleared when a normal job has completed. */
        uint32_t slice_fifo_flush      : 1;  /**< [ 12: 12](R/W1S/H) Write one to flush the slice FIFO. This field will be automatically cleared. */
        uint32_t reserved_13_15        : 3;
        uint32_t job_tag               : 16; /**< [ 31: 16](RO/H) The JOB_TAG field from the PSM command for the last completed RD DMA operation.
                                                                 When DSP software writes [START_BUSY] = 0 -\> 1, the RD DMA engine will wait until the next
                                                                 available job has been enqueued, at which point the JOB_TAG will be latched in. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_rd_status_s cn; */
};
typedef union cavm_mdabx_rd_status cavm_mdabx_rd_status_t;

static inline uint64_t CAVM_MDABX_RD_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_RD_STATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008060ll + 0x80000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e044008060ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_RD_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_RD_STATUS(a) cavm_mdabx_rd_status_t
#define bustype_CAVM_MDABX_RD_STATUS(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_RD_STATUS(a) "MDABX_RD_STATUS"
#define device_bar_CAVM_MDABX_RD_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_RD_STATUS(a) (a)
#define arguments_CAVM_MDABX_RD_STATUS(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_rmp_dflt_win_addr_hi
 *
 * MDAB System Memory Default Remap Address High Register
 * Define the default remap address bits [52:32].
 */
union cavm_mdabx_rmp_dflt_win_addr_hi
{
    uint32_t u;
    struct cavm_mdabx_rmp_dflt_win_addr_hi_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_21_31        : 11;
        uint32_t haddr                 : 21; /**< [ 20:  0](R/W) The override value of address bits[52:32] of the
                                                                 address targeting system memory. */
#else /* Word 0 - Little Endian */
        uint32_t haddr                 : 21; /**< [ 20:  0](R/W) The override value of address bits[52:32] of the
                                                                 address targeting system memory. */
        uint32_t reserved_21_31        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_rmp_dflt_win_addr_hi_s cn; */
};
typedef union cavm_mdabx_rmp_dflt_win_addr_hi cavm_mdabx_rmp_dflt_win_addr_hi_t;

static inline uint64_t CAVM_MDABX_RMP_DFLT_WIN_ADDR_HI(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_RMP_DFLT_WIN_ADDR_HI(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e0440088c0ll + 0x80000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e0440088c0ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_RMP_DFLT_WIN_ADDR_HI", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_RMP_DFLT_WIN_ADDR_HI(a) cavm_mdabx_rmp_dflt_win_addr_hi_t
#define bustype_CAVM_MDABX_RMP_DFLT_WIN_ADDR_HI(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_RMP_DFLT_WIN_ADDR_HI(a) "MDABX_RMP_DFLT_WIN_ADDR_HI"
#define device_bar_CAVM_MDABX_RMP_DFLT_WIN_ADDR_HI(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_RMP_DFLT_WIN_ADDR_HI(a) (a)
#define arguments_CAVM_MDABX_RMP_DFLT_WIN_ADDR_HI(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_rmp_dflt_win_addr_low
 *
 * MDAB System Memory Default Remap Address Low Register
 * Define the DefaultRemap address bit [31].
 */
union cavm_mdabx_rmp_dflt_win_addr_low
{
    uint32_t u;
    struct cavm_mdabx_rmp_dflt_win_addr_low_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t laddr                 : 1;  /**< [ 31: 31](R/W) The override value of remapped address bits[31] of the
                                                                 address targeting system memory. */
        uint32_t reserved_0_30         : 31;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_30         : 31;
        uint32_t laddr                 : 1;  /**< [ 31: 31](R/W) The override value of remapped address bits[31] of the
                                                                 address targeting system memory. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_rmp_dflt_win_addr_low_s cn; */
};
typedef union cavm_mdabx_rmp_dflt_win_addr_low cavm_mdabx_rmp_dflt_win_addr_low_t;

static inline uint64_t CAVM_MDABX_RMP_DFLT_WIN_ADDR_LOW(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_RMP_DFLT_WIN_ADDR_LOW(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e0440088d0ll + 0x80000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e0440088d0ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_RMP_DFLT_WIN_ADDR_LOW", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_RMP_DFLT_WIN_ADDR_LOW(a) cavm_mdabx_rmp_dflt_win_addr_low_t
#define bustype_CAVM_MDABX_RMP_DFLT_WIN_ADDR_LOW(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_RMP_DFLT_WIN_ADDR_LOW(a) "MDABX_RMP_DFLT_WIN_ADDR_LOW"
#define device_bar_CAVM_MDABX_RMP_DFLT_WIN_ADDR_LOW(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_RMP_DFLT_WIN_ADDR_LOW(a) (a)
#define arguments_CAVM_MDABX_RMP_DFLT_WIN_ADDR_LOW(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_rmp_win_addr_hi
 *
 * MDAB System Memory Remap Address High Register
 * Define the remap address bits [52:32].
 */
union cavm_mdabx_rmp_win_addr_hi
{
    uint32_t u;
    struct cavm_mdabx_rmp_win_addr_hi_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_21_31        : 11;
        uint32_t haddr                 : 21; /**< [ 20:  0](R/W) Override value of address bits[52:32] for addresses targeting system memory. */
#else /* Word 0 - Little Endian */
        uint32_t haddr                 : 21; /**< [ 20:  0](R/W) Override value of address bits[52:32] for addresses targeting system memory. */
        uint32_t reserved_21_31        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_rmp_win_addr_hi_s cn; */
};
typedef union cavm_mdabx_rmp_win_addr_hi cavm_mdabx_rmp_win_addr_hi_t;

static inline uint64_t CAVM_MDABX_RMP_WIN_ADDR_HI(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_RMP_WIN_ADDR_HI(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008880ll + 0x80000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e044008880ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_RMP_WIN_ADDR_HI", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_RMP_WIN_ADDR_HI(a) cavm_mdabx_rmp_win_addr_hi_t
#define bustype_CAVM_MDABX_RMP_WIN_ADDR_HI(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_RMP_WIN_ADDR_HI(a) "MDABX_RMP_WIN_ADDR_HI"
#define device_bar_CAVM_MDABX_RMP_WIN_ADDR_HI(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_RMP_WIN_ADDR_HI(a) (a)
#define arguments_CAVM_MDABX_RMP_WIN_ADDR_HI(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_rmp_win_addr_low
 *
 * MDAB System Memory Remap Address Low Register
 * Define the remap address bits [31:0].
 */
union cavm_mdabx_rmp_win_addr_low
{
    uint32_t u;
    struct cavm_mdabx_rmp_win_addr_low_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t laddr                 : 20; /**< [ 31: 12](R/W) Override value of address bits[31:N] for addresses targeting system memory.
                                                                 Where N stands for the first bit in the system BAR size which is clear. */
        uint32_t reserved_0_11         : 12;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_11         : 12;
        uint32_t laddr                 : 20; /**< [ 31: 12](R/W) Override value of address bits[31:N] for addresses targeting system memory.
                                                                 Where N stands for the first bit in the system BAR size which is clear. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_rmp_win_addr_low_s cn; */
};
typedef union cavm_mdabx_rmp_win_addr_low cavm_mdabx_rmp_win_addr_low_t;

static inline uint64_t CAVM_MDABX_RMP_WIN_ADDR_LOW(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_RMP_WIN_ADDR_LOW(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008890ll + 0x80000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e044008890ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_RMP_WIN_ADDR_LOW", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_RMP_WIN_ADDR_LOW(a) cavm_mdabx_rmp_win_addr_low_t
#define bustype_CAVM_MDABX_RMP_WIN_ADDR_LOW(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_RMP_WIN_ADDR_LOW(a) "MDABX_RMP_WIN_ADDR_LOW"
#define device_bar_CAVM_MDABX_RMP_WIN_ADDR_LOW(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_RMP_WIN_ADDR_LOW(a) (a)
#define arguments_CAVM_MDABX_RMP_WIN_ADDR_LOW(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_rmp_win_base
 *
 * MDAB System Memory Remap Window Base Addr Register
 * Sets the base address of the system memory remap window.
 */
union cavm_mdabx_rmp_win_base
{
    uint32_t u;
    struct cavm_mdabx_rmp_win_base_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t baddr                 : 28; /**< [ 31:  4](R/W) Base address of the remap window (as seen by DSP).
                                                                 [BADDR] should be 4KB aligned. */
        uint32_t reserved_1_3          : 3;
        uint32_t rmp_win_en            : 1;  /**< [  0:  0](R/W) Enable the SYSMEM remap window.
                                                                 0 = Disable.
                                                                 1 = Enable. */
#else /* Word 0 - Little Endian */
        uint32_t rmp_win_en            : 1;  /**< [  0:  0](R/W) Enable the SYSMEM remap window.
                                                                 0 = Disable.
                                                                 1 = Enable. */
        uint32_t reserved_1_3          : 3;
        uint32_t baddr                 : 28; /**< [ 31:  4](R/W) Base address of the remap window (as seen by DSP).
                                                                 [BADDR] should be 4KB aligned. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_rmp_win_base_s cn; */
};
typedef union cavm_mdabx_rmp_win_base cavm_mdabx_rmp_win_base_t;

static inline uint64_t CAVM_MDABX_RMP_WIN_BASE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_RMP_WIN_BASE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e0440088a0ll + 0x80000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e0440088a0ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_RMP_WIN_BASE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_RMP_WIN_BASE(a) cavm_mdabx_rmp_win_base_t
#define bustype_CAVM_MDABX_RMP_WIN_BASE(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_RMP_WIN_BASE(a) "MDABX_RMP_WIN_BASE"
#define device_bar_CAVM_MDABX_RMP_WIN_BASE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_RMP_WIN_BASE(a) (a)
#define arguments_CAVM_MDABX_RMP_WIN_BASE(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_rmp_win_size
 *
 * MDAB System Memory Remap Window Size Register
 * Sets the size of the system memory remap window.
 */
union cavm_mdabx_rmp_win_size
{
    uint32_t u;
    struct cavm_mdabx_rmp_win_size_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t wsize                 : 32; /**< [ 31:  0](R/W) The size of the system memory remap window in bytes, minus 1.
                                                                 The size should be a power of two, with a minimum size of 4 KB, i.e.,
                                                                 min [WSIZE] is 0xFFF. */
#else /* Word 0 - Little Endian */
        uint32_t wsize                 : 32; /**< [ 31:  0](R/W) The size of the system memory remap window in bytes, minus 1.
                                                                 The size should be a power of two, with a minimum size of 4 KB, i.e.,
                                                                 min [WSIZE] is 0xFFF. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_rmp_win_size_s cn; */
};
typedef union cavm_mdabx_rmp_win_size cavm_mdabx_rmp_win_size_t;

static inline uint64_t CAVM_MDABX_RMP_WIN_SIZE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_RMP_WIN_SIZE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e0440088b0ll + 0x80000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e0440088b0ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_RMP_WIN_SIZE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_RMP_WIN_SIZE(a) cavm_mdabx_rmp_win_size_t
#define bustype_CAVM_MDABX_RMP_WIN_SIZE(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_RMP_WIN_SIZE(a) "MDABX_RMP_WIN_SIZE"
#define device_bar_CAVM_MDABX_RMP_WIN_SIZE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_RMP_WIN_SIZE(a) (a)
#define arguments_CAVM_MDABX_RMP_WIN_SIZE(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_rsp_pend_sts
 *
 * MDAB Response Pending Status Register
 * Indication of various outstanding response status.
 */
union cavm_mdabx_rsp_pend_sts
{
    uint32_t u;
    struct cavm_mdabx_rsp_pend_sts_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_11_31        : 21;
        uint32_t wr_pack_pend          : 1;  /**< [ 10: 10](RO/H) Write Cluster Memory packer response pending. */
        uint32_t rd_pack_pend          : 1;  /**< [  9:  9](RO/H) Read Cluster Memory packer response pending. */
        uint32_t cdm_rsp_pend          : 1;  /**< [  8:  8](RO/H) CFG DMA response is pending. */
        uint32_t wdm_rsp_pend          : 1;  /**< [  7:  7](RO/H) WR DMA response is pending. */
        uint32_t rdm_rsp_pend          : 1;  /**< [  6:  6](RO/H) RD DMA response is pending. */
        uint32_t edap_w_rsp_pend       : 1;  /**< [  5:  5](RO/H) EDAP write channel response is pending. */
        uint32_t edap_r_rsp_pend       : 1;  /**< [  4:  4](RO/H) EDAP read channel response is pending. */
        uint32_t epdp_w_rsp_pend       : 1;  /**< [  3:  3](RO/H) EPDP bridge write channel response is pending. */
        uint32_t epdp_r_rsp_pend       : 1;  /**< [  2:  2](RO/H) EPDP bridge read channel response is pending. */
        uint32_t edp_w_rsp_pend        : 1;  /**< [  1:  1](RO/H) EDP bridge write channel response is pending. */
        uint32_t edp_r_rsp_pend        : 1;  /**< [  0:  0](RO/H) EDP bridge read channel response is pending. */
#else /* Word 0 - Little Endian */
        uint32_t edp_r_rsp_pend        : 1;  /**< [  0:  0](RO/H) EDP bridge read channel response is pending. */
        uint32_t edp_w_rsp_pend        : 1;  /**< [  1:  1](RO/H) EDP bridge write channel response is pending. */
        uint32_t epdp_r_rsp_pend       : 1;  /**< [  2:  2](RO/H) EPDP bridge read channel response is pending. */
        uint32_t epdp_w_rsp_pend       : 1;  /**< [  3:  3](RO/H) EPDP bridge write channel response is pending. */
        uint32_t edap_r_rsp_pend       : 1;  /**< [  4:  4](RO/H) EDAP read channel response is pending. */
        uint32_t edap_w_rsp_pend       : 1;  /**< [  5:  5](RO/H) EDAP write channel response is pending. */
        uint32_t rdm_rsp_pend          : 1;  /**< [  6:  6](RO/H) RD DMA response is pending. */
        uint32_t wdm_rsp_pend          : 1;  /**< [  7:  7](RO/H) WR DMA response is pending. */
        uint32_t cdm_rsp_pend          : 1;  /**< [  8:  8](RO/H) CFG DMA response is pending. */
        uint32_t rd_pack_pend          : 1;  /**< [  9:  9](RO/H) Read Cluster Memory packer response pending. */
        uint32_t wr_pack_pend          : 1;  /**< [ 10: 10](RO/H) Write Cluster Memory packer response pending. */
        uint32_t reserved_11_31        : 21;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_rsp_pend_sts_s cn; */
};
typedef union cavm_mdabx_rsp_pend_sts cavm_mdabx_rsp_pend_sts_t;

static inline uint64_t CAVM_MDABX_RSP_PEND_STS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_RSP_PEND_STS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008bd0ll + 0x80000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e044008bd0ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_RSP_PEND_STS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_RSP_PEND_STS(a) cavm_mdabx_rsp_pend_sts_t
#define bustype_CAVM_MDABX_RSP_PEND_STS(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_RSP_PEND_STS(a) "MDABX_RSP_PEND_STS"
#define device_bar_CAVM_MDABX_RSP_PEND_STS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_RSP_PEND_STS(a) (a)
#define arguments_CAVM_MDABX_RSP_PEND_STS(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_sec_int_ena_w1c
 *
 * MDAB Secondary Interrupt Enable CLEAR Register
 * This register is used to clear MDAB secondary interrupt enables for the MDAB()_SEC_INT_SUM bits.
 */
union cavm_mdabx_sec_int_ena_w1c
{
    uint32_t u;
    struct cavm_mdabx_sec_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_17_31        : 15;
        uint32_t lfsr_job_done         : 1;  /**< [ 16: 16](R/W1C/H) Reads or clears the enable for the MDAB()_SEC_INT_SUM[LFSR_JOB_DONE] interrupt bit. */
        uint32_t reserved_9_15         : 7;
        uint32_t cti_int               : 1;  /**< [  8:  8](R/W1C/H) Reserved. */
        uint32_t reserved_2_7          : 6;
        uint32_t qman_int              : 1;  /**< [  1:  1](R/W1C/H) Reserved. */
        uint32_t sgi                   : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enables for the MDAB()_SEC_INT_SUM[SGI]. */
#else /* Word 0 - Little Endian */
        uint32_t sgi                   : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enables for the MDAB()_SEC_INT_SUM[SGI]. */
        uint32_t qman_int              : 1;  /**< [  1:  1](R/W1C/H) Reserved. */
        uint32_t reserved_2_7          : 6;
        uint32_t cti_int               : 1;  /**< [  8:  8](R/W1C/H) Reserved. */
        uint32_t reserved_9_15         : 7;
        uint32_t lfsr_job_done         : 1;  /**< [ 16: 16](R/W1C/H) Reads or clears the enable for the MDAB()_SEC_INT_SUM[LFSR_JOB_DONE] interrupt bit. */
        uint32_t reserved_17_31        : 15;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_sec_int_ena_w1c_s cn10; */
    /* struct cavm_mdabx_sec_int_ena_w1c_s cnf10ka; */
    struct cavm_mdabx_sec_int_ena_w1c_cnf10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_17_31        : 15;
        uint32_t lfsr_job_done         : 1;  /**< [ 16: 16](R/W1C/H) Reserved. */
        uint32_t reserved_9_15         : 7;
        uint32_t cti_int               : 1;  /**< [  8:  8](R/W1C/H) Reads or clears the enable for the MDAB()_SEC_INT_SUM[CTI_INT] interrupt bit. */
        uint32_t reserved_2_7          : 6;
        uint32_t qman_int              : 1;  /**< [  1:  1](R/W1C/H) Reads or clears the enable for the MDAB()_SEC_INT_SUM[QMAN_INT] interrupt bit. */
        uint32_t sgi                   : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enables for the MDAB()_SEC_INT_SUM[SGI]. */
#else /* Word 0 - Little Endian */
        uint32_t sgi                   : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enables for the MDAB()_SEC_INT_SUM[SGI]. */
        uint32_t qman_int              : 1;  /**< [  1:  1](R/W1C/H) Reads or clears the enable for the MDAB()_SEC_INT_SUM[QMAN_INT] interrupt bit. */
        uint32_t reserved_2_7          : 6;
        uint32_t cti_int               : 1;  /**< [  8:  8](R/W1C/H) Reads or clears the enable for the MDAB()_SEC_INT_SUM[CTI_INT] interrupt bit. */
        uint32_t reserved_9_15         : 7;
        uint32_t lfsr_job_done         : 1;  /**< [ 16: 16](R/W1C/H) Reserved. */
        uint32_t reserved_17_31        : 15;
#endif /* Word 0 - End */
    } cnf10kb;
};
typedef union cavm_mdabx_sec_int_ena_w1c cavm_mdabx_sec_int_ena_w1c_t;

static inline uint64_t CAVM_MDABX_SEC_INT_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_SEC_INT_ENA_W1C(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008a20ll + 0x80000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e044008a20ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_SEC_INT_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_SEC_INT_ENA_W1C(a) cavm_mdabx_sec_int_ena_w1c_t
#define bustype_CAVM_MDABX_SEC_INT_ENA_W1C(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_SEC_INT_ENA_W1C(a) "MDABX_SEC_INT_ENA_W1C"
#define device_bar_CAVM_MDABX_SEC_INT_ENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_SEC_INT_ENA_W1C(a) (a)
#define arguments_CAVM_MDABX_SEC_INT_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_sec_int_ena_w1s
 *
 * MDAB Secondary Interrupt Enable SET Register
 * This register is used to set MDAB secondary interrupt enables for the MDAB()_SEC_INT_SUM bits.
 */
union cavm_mdabx_sec_int_ena_w1s
{
    uint32_t u;
    struct cavm_mdabx_sec_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_17_31        : 15;
        uint32_t lfsr_job_done         : 1;  /**< [ 16: 16](R/W1S/H) Reads or sets the enable for the MDAB()_SEC_INT_SUM[LFSR_JOB_DONE] interrupt bit. */
        uint32_t reserved_9_15         : 7;
        uint32_t cti_int               : 1;  /**< [  8:  8](R/W1S/H) Reserved. */
        uint32_t reserved_2_7          : 6;
        uint32_t qman_irq              : 1;  /**< [  1:  1](R/W1S/H) Reserved. */
        uint32_t sgi                   : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enables for the MDAB()_SEC_INT_SUM[SGI]. */
#else /* Word 0 - Little Endian */
        uint32_t sgi                   : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enables for the MDAB()_SEC_INT_SUM[SGI]. */
        uint32_t qman_irq              : 1;  /**< [  1:  1](R/W1S/H) Reserved. */
        uint32_t reserved_2_7          : 6;
        uint32_t cti_int               : 1;  /**< [  8:  8](R/W1S/H) Reserved. */
        uint32_t reserved_9_15         : 7;
        uint32_t lfsr_job_done         : 1;  /**< [ 16: 16](R/W1S/H) Reads or sets the enable for the MDAB()_SEC_INT_SUM[LFSR_JOB_DONE] interrupt bit. */
        uint32_t reserved_17_31        : 15;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_sec_int_ena_w1s_s cn10; */
    /* struct cavm_mdabx_sec_int_ena_w1s_s cnf10ka; */
    struct cavm_mdabx_sec_int_ena_w1s_cnf10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_17_31        : 15;
        uint32_t lfsr_job_done         : 1;  /**< [ 16: 16](R/W1S/H) Reserved. */
        uint32_t reserved_9_15         : 7;
        uint32_t cti_int               : 1;  /**< [  8:  8](R/W1S/H) Reads or sets the enable for the MDAB()_SEC_INT_SUM[CTI_INT] interrupt bit. */
        uint32_t reserved_2_7          : 6;
        uint32_t qman_irq              : 1;  /**< [  1:  1](R/W1S/H) Reads or sets the enable for the MDAB()_SEC_INT_SUM[QMAN_IRQ] interrupt bit. */
        uint32_t sgi                   : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enables for the MDAB()_SEC_INT_SUM[SGI]. */
#else /* Word 0 - Little Endian */
        uint32_t sgi                   : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enables for the MDAB()_SEC_INT_SUM[SGI]. */
        uint32_t qman_irq              : 1;  /**< [  1:  1](R/W1S/H) Reads or sets the enable for the MDAB()_SEC_INT_SUM[QMAN_IRQ] interrupt bit. */
        uint32_t reserved_2_7          : 6;
        uint32_t cti_int               : 1;  /**< [  8:  8](R/W1S/H) Reads or sets the enable for the MDAB()_SEC_INT_SUM[CTI_INT] interrupt bit. */
        uint32_t reserved_9_15         : 7;
        uint32_t lfsr_job_done         : 1;  /**< [ 16: 16](R/W1S/H) Reserved. */
        uint32_t reserved_17_31        : 15;
#endif /* Word 0 - End */
    } cnf10kb;
};
typedef union cavm_mdabx_sec_int_ena_w1s cavm_mdabx_sec_int_ena_w1s_t;

static inline uint64_t CAVM_MDABX_SEC_INT_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_SEC_INT_ENA_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008a30ll + 0x80000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e044008a30ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_SEC_INT_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_SEC_INT_ENA_W1S(a) cavm_mdabx_sec_int_ena_w1s_t
#define bustype_CAVM_MDABX_SEC_INT_ENA_W1S(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_SEC_INT_ENA_W1S(a) "MDABX_SEC_INT_ENA_W1S"
#define device_bar_CAVM_MDABX_SEC_INT_ENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_SEC_INT_ENA_W1S(a) (a)
#define arguments_CAVM_MDABX_SEC_INT_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_sec_int_int1_ena
 *
 * MDAB Secondary Interrupt INT1 Enable Register
 * This register is used to enable reporting MDAB secondary interrupts to DSP INT1.
 */
union cavm_mdabx_sec_int_int1_ena
{
    uint32_t u;
    struct cavm_mdabx_sec_int_int1_ena_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_17_31        : 15;
        uint32_t lfsr_job_done         : 1;  /**< [ 16: 16](R/W) Reserved. */
        uint32_t reserved_9_15         : 7;
        uint32_t cti_int               : 1;  /**< [  8:  8](R/W) If enabled, CTI_INT event is reported to DSP INT1. 0x1 - Enable, 0x0 - Disable. */
        uint32_t reserved_2_7          : 6;
        uint32_t qman_irq              : 1;  /**< [  1:  1](R/W) If enabled, QMAN_IRQ event is reported to DSP INT1. 0x1 - Enable, 0x0 - Disable. */
        uint32_t sgi                   : 1;  /**< [  0:  0](R/W) If enabled, SGO event is reported to DSP INT1. 0x1 - Enable, 0x0 - Disable. */
#else /* Word 0 - Little Endian */
        uint32_t sgi                   : 1;  /**< [  0:  0](R/W) If enabled, SGO event is reported to DSP INT1. 0x1 - Enable, 0x0 - Disable. */
        uint32_t qman_irq              : 1;  /**< [  1:  1](R/W) If enabled, QMAN_IRQ event is reported to DSP INT1. 0x1 - Enable, 0x0 - Disable. */
        uint32_t reserved_2_7          : 6;
        uint32_t cti_int               : 1;  /**< [  8:  8](R/W) If enabled, CTI_INT event is reported to DSP INT1. 0x1 - Enable, 0x0 - Disable. */
        uint32_t reserved_9_15         : 7;
        uint32_t lfsr_job_done         : 1;  /**< [ 16: 16](R/W) Reserved. */
        uint32_t reserved_17_31        : 15;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_sec_int_int1_ena_s cn; */
};
typedef union cavm_mdabx_sec_int_int1_ena cavm_mdabx_sec_int_int1_ena_t;

static inline uint64_t CAVM_MDABX_SEC_INT_INT1_ENA(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_SEC_INT_INT1_ENA(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e044008a40ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_SEC_INT_INT1_ENA", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_SEC_INT_INT1_ENA(a) cavm_mdabx_sec_int_int1_ena_t
#define bustype_CAVM_MDABX_SEC_INT_INT1_ENA(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_SEC_INT_INT1_ENA(a) "MDABX_SEC_INT_INT1_ENA"
#define device_bar_CAVM_MDABX_SEC_INT_INT1_ENA(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_SEC_INT_INT1_ENA(a) (a)
#define arguments_CAVM_MDABX_SEC_INT_INT1_ENA(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_sec_int_intvec_ena
 *
 * MDAB Secondary Interrupt INTVEC Enable Register
 * This register is used to enable reporting MDAB secondary interrupts to DSP INT vector.
 */
union cavm_mdabx_sec_int_intvec_ena
{
    uint32_t u;
    struct cavm_mdabx_sec_int_intvec_ena_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_17_31        : 15;
        uint32_t lfsr_job_done         : 1;  /**< [ 16: 16](R/W) Reserved. */
        uint32_t reserved_9_15         : 7;
        uint32_t cti_int               : 1;  /**< [  8:  8](R/W) If enabled, CTI_INT event is reported to DSP INTVEC. 0x1 - Enable, 0x0 - Disable. */
        uint32_t reserved_2_7          : 6;
        uint32_t qman_irq              : 1;  /**< [  1:  1](R/W) If enabled, QMAN_IRQ event is reported to DSP INTVEC. 0x1 - Enable, 0x0 - Disable. */
        uint32_t sgi                   : 1;  /**< [  0:  0](R/W) If enabled, SGO event is reported to DSP INTVEC. 0x1 - Enable, 0x0 - Disable. */
#else /* Word 0 - Little Endian */
        uint32_t sgi                   : 1;  /**< [  0:  0](R/W) If enabled, SGO event is reported to DSP INTVEC. 0x1 - Enable, 0x0 - Disable. */
        uint32_t qman_irq              : 1;  /**< [  1:  1](R/W) If enabled, QMAN_IRQ event is reported to DSP INTVEC. 0x1 - Enable, 0x0 - Disable. */
        uint32_t reserved_2_7          : 6;
        uint32_t cti_int               : 1;  /**< [  8:  8](R/W) If enabled, CTI_INT event is reported to DSP INTVEC. 0x1 - Enable, 0x0 - Disable. */
        uint32_t reserved_9_15         : 7;
        uint32_t lfsr_job_done         : 1;  /**< [ 16: 16](R/W) Reserved. */
        uint32_t reserved_17_31        : 15;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_sec_int_intvec_ena_s cn; */
};
typedef union cavm_mdabx_sec_int_intvec_ena cavm_mdabx_sec_int_intvec_ena_t;

static inline uint64_t CAVM_MDABX_SEC_INT_INTVEC_ENA(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_SEC_INT_INTVEC_ENA(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e044008a50ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_SEC_INT_INTVEC_ENA", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_SEC_INT_INTVEC_ENA(a) cavm_mdabx_sec_int_intvec_ena_t
#define bustype_CAVM_MDABX_SEC_INT_INTVEC_ENA(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_SEC_INT_INTVEC_ENA(a) "MDABX_SEC_INT_INTVEC_ENA"
#define device_bar_CAVM_MDABX_SEC_INT_INTVEC_ENA(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_SEC_INT_INTVEC_ENA(a) (a)
#define arguments_CAVM_MDABX_SEC_INT_INTVEC_ENA(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_sec_int_nmi_ena
 *
 * MDAB Secondary Interrupt NMI Enable Register
 * This register is used to enable reporting MDAB secondary interrupts to DSP NMI.
 */
union cavm_mdabx_sec_int_nmi_ena
{
    uint32_t u;
    struct cavm_mdabx_sec_int_nmi_ena_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_17_31        : 15;
        uint32_t lfsr_job_done         : 1;  /**< [ 16: 16](R/W) Reserved. */
        uint32_t reserved_9_15         : 7;
        uint32_t cti_int               : 1;  /**< [  8:  8](R/W) If enabled, CTI_INT event is reported to DSP NMI. 0x1 - Enable, 0x0 - Disable. */
        uint32_t reserved_2_7          : 6;
        uint32_t qman_irq              : 1;  /**< [  1:  1](R/W) If enabled, QMAN_IRQ event is reported to DSP NMI. 0x1 - Enable, 0x0 - Disable. */
        uint32_t sgi                   : 1;  /**< [  0:  0](R/W) If enabled, SGO event is reported to DSP NMI. 0x1 - Enable, 0x0 - Disable. */
#else /* Word 0 - Little Endian */
        uint32_t sgi                   : 1;  /**< [  0:  0](R/W) If enabled, SGO event is reported to DSP NMI. 0x1 - Enable, 0x0 - Disable. */
        uint32_t qman_irq              : 1;  /**< [  1:  1](R/W) If enabled, QMAN_IRQ event is reported to DSP NMI. 0x1 - Enable, 0x0 - Disable. */
        uint32_t reserved_2_7          : 6;
        uint32_t cti_int               : 1;  /**< [  8:  8](R/W) If enabled, CTI_INT event is reported to DSP NMI. 0x1 - Enable, 0x0 - Disable. */
        uint32_t reserved_9_15         : 7;
        uint32_t lfsr_job_done         : 1;  /**< [ 16: 16](R/W) Reserved. */
        uint32_t reserved_17_31        : 15;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_sec_int_nmi_ena_s cn; */
};
typedef union cavm_mdabx_sec_int_nmi_ena cavm_mdabx_sec_int_nmi_ena_t;

static inline uint64_t CAVM_MDABX_SEC_INT_NMI_ENA(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_SEC_INT_NMI_ENA(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e044008a60ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_SEC_INT_NMI_ENA", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_SEC_INT_NMI_ENA(a) cavm_mdabx_sec_int_nmi_ena_t
#define bustype_CAVM_MDABX_SEC_INT_NMI_ENA(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_SEC_INT_NMI_ENA(a) "MDABX_SEC_INT_NMI_ENA"
#define device_bar_CAVM_MDABX_SEC_INT_NMI_ENA(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_SEC_INT_NMI_ENA(a) (a)
#define arguments_CAVM_MDABX_SEC_INT_NMI_ENA(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_sec_int_sum
 *
 * MDAB Secondary Interrupt Summary Register
 * This register reports the secondary interrupt sources status for the MDAB.
 * Software clears individual interrupts by writing one to the corresponding bit.
 */
union cavm_mdabx_sec_int_sum
{
    uint32_t u;
    struct cavm_mdabx_sec_int_sum_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_17_31        : 15;
        uint32_t lfsr_job_done         : 1;  /**< [ 16: 16](R/W1C/H) LFSR Job done. */
        uint32_t reserved_9_15         : 7;
        uint32_t cti_trigger           : 1;  /**< [  8:  8](R/W1C/H) Reserved. */
        uint32_t reserved_2_7          : 6;
        uint32_t qman_irq              : 1;  /**< [  1:  1](R/W1C/H) Reserved. */
        uint32_t sgi                   : 1;  /**< [  0:  0](R/W1C/H) Software generated interrupt. This can be used (for example) by AP or DSP
                                                                 software to trigger a software generated interrupt */
#else /* Word 0 - Little Endian */
        uint32_t sgi                   : 1;  /**< [  0:  0](R/W1C/H) Software generated interrupt. This can be used (for example) by AP or DSP
                                                                 software to trigger a software generated interrupt */
        uint32_t qman_irq              : 1;  /**< [  1:  1](R/W1C/H) Reserved. */
        uint32_t reserved_2_7          : 6;
        uint32_t cti_trigger           : 1;  /**< [  8:  8](R/W1C/H) Reserved. */
        uint32_t reserved_9_15         : 7;
        uint32_t lfsr_job_done         : 1;  /**< [ 16: 16](R/W1C/H) LFSR Job done. */
        uint32_t reserved_17_31        : 15;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_sec_int_sum_s cn10; */
    /* struct cavm_mdabx_sec_int_sum_s cnf10ka; */
    struct cavm_mdabx_sec_int_sum_cnf10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_17_31        : 15;
        uint32_t lfsr_job_done         : 1;  /**< [ 16: 16](R/W1C/H) Reserved. */
        uint32_t reserved_9_15         : 7;
        uint32_t cti_trigger           : 1;  /**< [  8:  8](R/W1C/H) Indicates CTI Event has occurred. */
        uint32_t reserved_2_7          : 6;
        uint32_t qman_irq              : 1;  /**< [  1:  1](R/W1C/H) Indicates QMAN IRQ event has occurred. */
        uint32_t sgi                   : 1;  /**< [  0:  0](R/W1C/H) Software generated interrupt. This can be used (for example) by AP or DSP
                                                                 software to trigger a software generated interrupt */
#else /* Word 0 - Little Endian */
        uint32_t sgi                   : 1;  /**< [  0:  0](R/W1C/H) Software generated interrupt. This can be used (for example) by AP or DSP
                                                                 software to trigger a software generated interrupt */
        uint32_t qman_irq              : 1;  /**< [  1:  1](R/W1C/H) Indicates QMAN IRQ event has occurred. */
        uint32_t reserved_2_7          : 6;
        uint32_t cti_trigger           : 1;  /**< [  8:  8](R/W1C/H) Indicates CTI Event has occurred. */
        uint32_t reserved_9_15         : 7;
        uint32_t lfsr_job_done         : 1;  /**< [ 16: 16](R/W1C/H) Reserved. */
        uint32_t reserved_17_31        : 15;
#endif /* Word 0 - End */
    } cnf10kb;
};
typedef union cavm_mdabx_sec_int_sum cavm_mdabx_sec_int_sum_t;

static inline uint64_t CAVM_MDABX_SEC_INT_SUM(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_SEC_INT_SUM(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008a00ll + 0x80000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e044008a00ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_SEC_INT_SUM", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_SEC_INT_SUM(a) cavm_mdabx_sec_int_sum_t
#define bustype_CAVM_MDABX_SEC_INT_SUM(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_SEC_INT_SUM(a) "MDABX_SEC_INT_SUM"
#define device_bar_CAVM_MDABX_SEC_INT_SUM(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_SEC_INT_SUM(a) (a)
#define arguments_CAVM_MDABX_SEC_INT_SUM(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_sec_int_sum_w1s
 *
 * MDAB Secondary Interrupt Summary SET Register
 * This register is used to artificially set MDAB interrupts described in
 * MDAB()_SEC_INT_SUM (for software debug/test).
 */
union cavm_mdabx_sec_int_sum_w1s
{
    uint32_t u;
    struct cavm_mdabx_sec_int_sum_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_17_31        : 15;
        uint32_t lfsr_job_done         : 1;  /**< [ 16: 16](R/W1S/H) Reads or sets the MDAB()_SEC_INT_SUM[LFSR_JOB_DONE] interrupt bit. */
        uint32_t reserved_9_15         : 7;
        uint32_t cti_int               : 1;  /**< [  8:  8](R/W1S/H) Reserved. */
        uint32_t reserved_2_7          : 6;
        uint32_t qman_irq              : 1;  /**< [  1:  1](R/W1S/H) Reserved. */
        uint32_t sgi                   : 1;  /**< [  0:  0](R/W1S/H) Reads or sets the MDAB()_SEC_INT_SUM[SGI]. */
#else /* Word 0 - Little Endian */
        uint32_t sgi                   : 1;  /**< [  0:  0](R/W1S/H) Reads or sets the MDAB()_SEC_INT_SUM[SGI]. */
        uint32_t qman_irq              : 1;  /**< [  1:  1](R/W1S/H) Reserved. */
        uint32_t reserved_2_7          : 6;
        uint32_t cti_int               : 1;  /**< [  8:  8](R/W1S/H) Reserved. */
        uint32_t reserved_9_15         : 7;
        uint32_t lfsr_job_done         : 1;  /**< [ 16: 16](R/W1S/H) Reads or sets the MDAB()_SEC_INT_SUM[LFSR_JOB_DONE] interrupt bit. */
        uint32_t reserved_17_31        : 15;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_sec_int_sum_w1s_s cn10; */
    /* struct cavm_mdabx_sec_int_sum_w1s_s cnf10ka; */
    struct cavm_mdabx_sec_int_sum_w1s_cnf10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_17_31        : 15;
        uint32_t lfsr_job_done         : 1;  /**< [ 16: 16](R/W1S/H) Reserved. */
        uint32_t reserved_9_15         : 7;
        uint32_t cti_int               : 1;  /**< [  8:  8](R/W1S/H) Reads or sets the MDAB()_SEC_INT_SUM[CTI_INT] interrupt bit. */
        uint32_t reserved_2_7          : 6;
        uint32_t qman_irq              : 1;  /**< [  1:  1](R/W1S/H) Reads or sets the MDAB()_SEC_INT_SUM[QMAN_INT] interrupt bit. */
        uint32_t sgi                   : 1;  /**< [  0:  0](R/W1S/H) Reads or sets the MDAB()_SEC_INT_SUM[SGI]. */
#else /* Word 0 - Little Endian */
        uint32_t sgi                   : 1;  /**< [  0:  0](R/W1S/H) Reads or sets the MDAB()_SEC_INT_SUM[SGI]. */
        uint32_t qman_irq              : 1;  /**< [  1:  1](R/W1S/H) Reads or sets the MDAB()_SEC_INT_SUM[QMAN_INT] interrupt bit. */
        uint32_t reserved_2_7          : 6;
        uint32_t cti_int               : 1;  /**< [  8:  8](R/W1S/H) Reads or sets the MDAB()_SEC_INT_SUM[CTI_INT] interrupt bit. */
        uint32_t reserved_9_15         : 7;
        uint32_t lfsr_job_done         : 1;  /**< [ 16: 16](R/W1S/H) Reserved. */
        uint32_t reserved_17_31        : 15;
#endif /* Word 0 - End */
    } cnf10kb;
};
typedef union cavm_mdabx_sec_int_sum_w1s cavm_mdabx_sec_int_sum_w1s_t;

static inline uint64_t CAVM_MDABX_SEC_INT_SUM_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_SEC_INT_SUM_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008a10ll + 0x80000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e044008a10ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_SEC_INT_SUM_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_SEC_INT_SUM_W1S(a) cavm_mdabx_sec_int_sum_w1s_t
#define bustype_CAVM_MDABX_SEC_INT_SUM_W1S(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_SEC_INT_SUM_W1S(a) "MDABX_SEC_INT_SUM_W1S"
#define device_bar_CAVM_MDABX_SEC_INT_SUM_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_SEC_INT_SUM_W1S(a) (a)
#define arguments_CAVM_MDABX_SEC_INT_SUM_W1S(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_slave_dma_ctrl
 *
 * MDAB SLAVE DMA Control Register
 * This register contains control for slave DMA operations.
 */
union cavm_mdabx_slave_dma_ctrl
{
    uint32_t u;
    struct cavm_mdabx_slave_dma_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_2_31         : 30;
        uint32_t edap_arb_mode         : 1;  /**< [  1:  1](R/W) Selects the arbitration mode for the EDAP read and write channel arbiters.
                                                                 Set to 0 for fixed priority mode and 1 for round-robin mode. */
        uint32_t auto_start_mode       : 1;  /**< [  0:  0](R/W) Enables hardware to automatically set START_BUSY when the read and write slice FIFOs are not empty.
                                                                 Set to 1 to enable auto start and set to 0 to require software setting of the START_BUSY bit. */
#else /* Word 0 - Little Endian */
        uint32_t auto_start_mode       : 1;  /**< [  0:  0](R/W) Enables hardware to automatically set START_BUSY when the read and write slice FIFOs are not empty.
                                                                 Set to 1 to enable auto start and set to 0 to require software setting of the START_BUSY bit. */
        uint32_t edap_arb_mode         : 1;  /**< [  1:  1](R/W) Selects the arbitration mode for the EDAP read and write channel arbiters.
                                                                 Set to 0 for fixed priority mode and 1 for round-robin mode. */
        uint32_t reserved_2_31         : 30;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_slave_dma_ctrl_s cn; */
};
typedef union cavm_mdabx_slave_dma_ctrl cavm_mdabx_slave_dma_ctrl_t;

static inline uint64_t CAVM_MDABX_SLAVE_DMA_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_SLAVE_DMA_CTRL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008bc0ll + 0x80000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e044008bc0ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_SLAVE_DMA_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_SLAVE_DMA_CTRL(a) cavm_mdabx_slave_dma_ctrl_t
#define bustype_CAVM_MDABX_SLAVE_DMA_CTRL(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_SLAVE_DMA_CTRL(a) "MDABX_SLAVE_DMA_CTRL"
#define device_bar_CAVM_MDABX_SLAVE_DMA_CTRL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_SLAVE_DMA_CTRL(a) (a)
#define arguments_CAVM_MDABX_SLAVE_DMA_CTRL(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_wr_addr
 *
 * MDAB Write DMA Address Register
 * The starting address used by the WR-DMA engine when reading WR-DMA data from local DSP memory.
 * During Job_Type = ST_LCL* commands, hardware loads the WR_ADDR/WR_LIMIT registers directly.
 */
union cavm_mdabx_wr_addr
{
    uint32_t u;
    struct cavm_mdabx_wr_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t addr                  : 28; /**< [ 31:  4](R/W/H) The 128b-aligned starting address used by the WR-DMA engine when reading WR-DMA data from
                                                                 local DSP memory. For details see MDAB Memory Map table.
                                                                 Software must program a valid DMEM or PMEM address into this register. */
        uint32_t reserved_0_3          : 4;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_3          : 4;
        uint32_t addr                  : 28; /**< [ 31:  4](R/W/H) The 128b-aligned starting address used by the WR-DMA engine when reading WR-DMA data from
                                                                 local DSP memory. For details see MDAB Memory Map table.
                                                                 Software must program a valid DMEM or PMEM address into this register. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_wr_addr_s cn; */
};
typedef union cavm_mdabx_wr_addr cavm_mdabx_wr_addr_t;

static inline uint64_t CAVM_MDABX_WR_ADDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_WR_ADDR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e0440080b0ll + 0x80000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e0440080b0ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_WR_ADDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_WR_ADDR(a) cavm_mdabx_wr_addr_t
#define bustype_CAVM_MDABX_WR_ADDR(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_WR_ADDR(a) "MDABX_WR_ADDR"
#define device_bar_CAVM_MDABX_WR_ADDR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_WR_ADDR(a) (a)
#define arguments_CAVM_MDABX_WR_ADDR(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_wr_error_sts
 *
 * MDAB Slave Port Write Channel Error Status Register
 */
union cavm_mdabx_wr_error_sts
{
    uint32_t u;
    struct cavm_mdabx_wr_error_sts_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t addr                  : 28; /**< [ 31:  4](RO/H) When a DSP complex slave write channel access causes the SLVERR error bit to be
                                                                 set, this field captures the
                                                                 failing 16B aligned address as addr[31:4]. */
        uint32_t error_src             : 3;  /**< [  3:  1](RO/H) This field indicates the source of the transaction that caused the recorded error.
                                                                 000: RDM
                                                                 001: Reserved
                                                                 010: CDM
                                                                 011: CSR
                                                                 100: Others */
        uint32_t mem_slverr            : 1;  /**< [  0:  0](R/W1C/H) This bit will be set when DSP complex slave port write channel is accessed by
                                                                 JOB DMA engine or RSL access to a non existent
                                                                 instruction or data memory address, or when any other illegal access is performed */
#else /* Word 0 - Little Endian */
        uint32_t mem_slverr            : 1;  /**< [  0:  0](R/W1C/H) This bit will be set when DSP complex slave port write channel is accessed by
                                                                 JOB DMA engine or RSL access to a non existent
                                                                 instruction or data memory address, or when any other illegal access is performed */
        uint32_t error_src             : 3;  /**< [  3:  1](RO/H) This field indicates the source of the transaction that caused the recorded error.
                                                                 000: RDM
                                                                 001: Reserved
                                                                 010: CDM
                                                                 011: CSR
                                                                 100: Others */
        uint32_t addr                  : 28; /**< [ 31:  4](RO/H) When a DSP complex slave write channel access causes the SLVERR error bit to be
                                                                 set, this field captures the
                                                                 failing 16B aligned address as addr[31:4]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_wr_error_sts_s cn; */
};
typedef union cavm_mdabx_wr_error_sts cavm_mdabx_wr_error_sts_t;

static inline uint64_t CAVM_MDABX_WR_ERROR_STS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_WR_ERROR_STS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008260ll + 0x80000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e044008260ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_WR_ERROR_STS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_WR_ERROR_STS(a) cavm_mdabx_wr_error_sts_t
#define bustype_CAVM_MDABX_WR_ERROR_STS(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_WR_ERROR_STS(a) "MDABX_WR_ERROR_STS"
#define device_bar_CAVM_MDABX_WR_ERROR_STS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_WR_ERROR_STS(a) (a)
#define arguments_CAVM_MDABX_WR_ERROR_STS(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_wr_fifo_status
 *
 * MDAB Write DMA Slice FIFO Status Register
 * The entry status of the write DMA slice FIFO.
 */
union cavm_mdabx_wr_fifo_status
{
    uint32_t u;
    struct cavm_mdabx_wr_fifo_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_12_31        : 20;
        uint32_t slice_fifo_rem_cnt    : 4;  /**< [ 11:  8](RO/H) This field is the count of the remaining programmed FIFO entries. It is updated after every FIFO
                                                                 pop or push, and retains it's last value after a FIFO flush. */
        uint32_t slice_fifo_psh_cnt    : 8;  /**< [  7:  0](RO/H) This field provides the number of slices pushed to the FIFO since job start. */
#else /* Word 0 - Little Endian */
        uint32_t slice_fifo_psh_cnt    : 8;  /**< [  7:  0](RO/H) This field provides the number of slices pushed to the FIFO since job start. */
        uint32_t slice_fifo_rem_cnt    : 4;  /**< [ 11:  8](RO/H) This field is the count of the remaining programmed FIFO entries. It is updated after every FIFO
                                                                 pop or push, and retains it's last value after a FIFO flush. */
        uint32_t reserved_12_31        : 20;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_wr_fifo_status_s cn; */
};
typedef union cavm_mdabx_wr_fifo_status cavm_mdabx_wr_fifo_status_t;

static inline uint64_t CAVM_MDABX_WR_FIFO_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_WR_FIFO_STATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008490ll + 0x80000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e044008490ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_WR_FIFO_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_WR_FIFO_STATUS(a) cavm_mdabx_wr_fifo_status_t
#define bustype_CAVM_MDABX_WR_FIFO_STATUS(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_WR_FIFO_STATUS(a) "MDABX_WR_FIFO_STATUS"
#define device_bar_CAVM_MDABX_WR_FIFO_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_WR_FIFO_STATUS(a) (a)
#define arguments_CAVM_MDABX_WR_FIFO_STATUS(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_wr_length
 *
 * MDAB Write DMA Length Register
 * The actual 128-bit length of the most recent WR-DMA engine job configuration transfer.
 */
union cavm_mdabx_wr_length
{
    uint32_t u;
    struct cavm_mdabx_wr_length_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_18_31        : 14;
        uint32_t length                : 14; /**< [ 17:  4](RO/H) The actual 128-bit length of the most recent WR-DMA engine write DMA
                                                                 transfer.

                                                                 NOTE: This field will be updated when the WR-DMA has been actually
                                                                 committed to SMEM or LLC/DDR Memory, which allows software to poll the
                                                                 length field during the WR-DMA transfer to know how many 128-bit
                                                                 chunks are currently available at their intended memory destinations
                                                                 before use by software or other hardware blocks. */
        uint32_t reserved_0_3          : 4;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_3          : 4;
        uint32_t length                : 14; /**< [ 17:  4](RO/H) The actual 128-bit length of the most recent WR-DMA engine write DMA
                                                                 transfer.

                                                                 NOTE: This field will be updated when the WR-DMA has been actually
                                                                 committed to SMEM or LLC/DDR Memory, which allows software to poll the
                                                                 length field during the WR-DMA transfer to know how many 128-bit
                                                                 chunks are currently available at their intended memory destinations
                                                                 before use by software or other hardware blocks. */
        uint32_t reserved_18_31        : 14;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_wr_length_s cn; */
};
typedef union cavm_mdabx_wr_length cavm_mdabx_wr_length_t;

static inline uint64_t CAVM_MDABX_WR_LENGTH(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_WR_LENGTH(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e0440080d0ll + 0x80000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e0440080d0ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_WR_LENGTH", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_WR_LENGTH(a) cavm_mdabx_wr_length_t
#define bustype_CAVM_MDABX_WR_LENGTH(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_WR_LENGTH(a) "MDABX_WR_LENGTH"
#define device_bar_CAVM_MDABX_WR_LENGTH(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_WR_LENGTH(a) (a)
#define arguments_CAVM_MDABX_WR_LENGTH(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_wr_limit
 *
 * MDAB Write DMA Limit Register
 * The maximum number of 128-bit sized chunks that the WR-DMA engine may read starting from the
 * 128-bit-aligned MDAB()_WR_ADDR. NOTE: During Job_Type = ST_LCL* commands, hardware loads the
 * WR_ADDR/WR_LIMIT registers
 * directly.
 */
union cavm_mdabx_wr_limit
{
    uint32_t u;
    struct cavm_mdabx_wr_limit_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t last                  : 1;  /**< [ 31: 31](R/W) Indicates the last WR-DMA slice which may be read from address MDAB()_WR_ADDR.
                                                                 DSP software may choose to segment the JD.WR-DMA data into multiple non-contiguous WR-DMA
                                                                 transfers from DSP local memory.
                                                                 Eventually, DSP software will indicate the LAST segment (or slice), to indicate this is
                                                                 the final WR-DMA sub-blk transfer.
                                                                 Each WR-DMA operation's LAST will indicate when the last segment (or slice) WR-DMA
                                                                 operation has been set up, to complete the JD.WR-DMA data transfer.
                                                                 SW_NOTE: For every new WR-DMA slice operation, DSP software *MUST* signal LAST to indicate
                                                                 the final JD.WR-DMA data slice transfer. */
        uint32_t reserved_18_30        : 13;
        uint32_t limit                 : 14; /**< [ 17:  4](R/W/H) "The maximum number of 128-bit chunks that the WR-DMA engine may read from address
                                                                 MDAB()_WR_ADDR.
                                                                 The JD.JCFG data typically will contain the total WR-DMA Length for each new job. The
                                                                 DSP software is at liberty to break the total WR-DMA transfer into multiple WR-DMA segments (or
                                                                 slices) using the LIMIT register.
                                                                 DSP software will set the LAST flag and a LIMIT for the final WR-DMA slice.
                                                                 When LIMIT has been reached during the LAST WR-DMA slice (or if the last JD.WR-DMA's write
                                                                 commit is detected), the WR-DMA is done.

                                                                 SW RESTRICTION #1: Software should never program LIMIT=0. INDETERMINATE results can/will occur.
                                                                 SW RESTRICTION #2: Software should ensure that ADDR+LIMIT SIZES fall within the I+D MEM space,
                                                                 otherwise DMA_ERROR and INDETERMINATE results can/will occur." */
        uint32_t reserved_0_3          : 4;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_3          : 4;
        uint32_t limit                 : 14; /**< [ 17:  4](R/W/H) "The maximum number of 128-bit chunks that the WR-DMA engine may read from address
                                                                 MDAB()_WR_ADDR.
                                                                 The JD.JCFG data typically will contain the total WR-DMA Length for each new job. The
                                                                 DSP software is at liberty to break the total WR-DMA transfer into multiple WR-DMA segments (or
                                                                 slices) using the LIMIT register.
                                                                 DSP software will set the LAST flag and a LIMIT for the final WR-DMA slice.
                                                                 When LIMIT has been reached during the LAST WR-DMA slice (or if the last JD.WR-DMA's write
                                                                 commit is detected), the WR-DMA is done.

                                                                 SW RESTRICTION #1: Software should never program LIMIT=0. INDETERMINATE results can/will occur.
                                                                 SW RESTRICTION #2: Software should ensure that ADDR+LIMIT SIZES fall within the I+D MEM space,
                                                                 otherwise DMA_ERROR and INDETERMINATE results can/will occur." */
        uint32_t reserved_18_30        : 13;
        uint32_t last                  : 1;  /**< [ 31: 31](R/W) Indicates the last WR-DMA slice which may be read from address MDAB()_WR_ADDR.
                                                                 DSP software may choose to segment the JD.WR-DMA data into multiple non-contiguous WR-DMA
                                                                 transfers from DSP local memory.
                                                                 Eventually, DSP software will indicate the LAST segment (or slice), to indicate this is
                                                                 the final WR-DMA sub-blk transfer.
                                                                 Each WR-DMA operation's LAST will indicate when the last segment (or slice) WR-DMA
                                                                 operation has been set up, to complete the JD.WR-DMA data transfer.
                                                                 SW_NOTE: For every new WR-DMA slice operation, DSP software *MUST* signal LAST to indicate
                                                                 the final JD.WR-DMA data slice transfer. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_wr_limit_s cn; */
};
typedef union cavm_mdabx_wr_limit cavm_mdabx_wr_limit_t;

static inline uint64_t CAVM_MDABX_WR_LIMIT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_WR_LIMIT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e0440080c0ll + 0x80000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e0440080c0ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_WR_LIMIT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_WR_LIMIT(a) cavm_mdabx_wr_limit_t
#define bustype_CAVM_MDABX_WR_LIMIT(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_WR_LIMIT(a) "MDABX_WR_LIMIT"
#define device_bar_CAVM_MDABX_WR_LIMIT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_WR_LIMIT(a) (a)
#define arguments_CAVM_MDABX_WR_LIMIT(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_wr_next_addr
 *
 * MDAB Write DMA Next Address Register
 * The next address for multi slice DMA transfers. Indicates the first unused slice starting address.
 */
union cavm_mdabx_wr_next_addr
{
    uint32_t u;
    struct cavm_mdabx_wr_next_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t next_addr             : 28; /**< [ 31:  4](RO/H) The next 128b-aligned starting address to be used by the WR-DMA engine when
                                                                 reading WR-DMA data from
                                                                 local DSP memory. This register is used to determine the address for unused slices. */
        uint32_t reserved_0_3          : 4;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_3          : 4;
        uint32_t next_addr             : 28; /**< [ 31:  4](RO/H) The next 128b-aligned starting address to be used by the WR-DMA engine when
                                                                 reading WR-DMA data from
                                                                 local DSP memory. This register is used to determine the address for unused slices. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_wr_next_addr_s cn; */
};
typedef union cavm_mdabx_wr_next_addr cavm_mdabx_wr_next_addr_t;

static inline uint64_t CAVM_MDABX_WR_NEXT_ADDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_WR_NEXT_ADDR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e044008470ll + 0x80000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e044008470ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_WR_NEXT_ADDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_WR_NEXT_ADDR(a) cavm_mdabx_wr_next_addr_t
#define bustype_CAVM_MDABX_WR_NEXT_ADDR(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_WR_NEXT_ADDR(a) "MDABX_WR_NEXT_ADDR"
#define device_bar_CAVM_MDABX_WR_NEXT_ADDR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_WR_NEXT_ADDR(a) (a)
#define arguments_CAVM_MDABX_WR_NEXT_ADDR(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) mdab#_wr_status
 *
 * MDAB Write DMA Status Register
 * Reports the status for the WR-DMA engine.
 */
union cavm_mdabx_wr_status
{
    uint32_t u;
    struct cavm_mdabx_wr_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t job_tag               : 16; /**< [ 31: 16](RO/H) The JOB_TAG field from the PSM command for the last completed WR-DMA operation.
                                                                 When DSP software writes START_BUSY=0-\>1, the WR-DMA engine will wait until the next
                                                                 available Job has been enqueued, at which point the JOB_TAG will be latched in. */
        uint32_t reserved_13_15        : 3;
        uint32_t slice_fifo_flush      : 1;  /**< [ 12: 12](R/W1S/H) Write one to flush the slice FIFO. This field will be automatically cleared. */
        uint32_t post_st_lcl           : 1;  /**< [ 11: 11](RO/H) Set when a Store-Local job has completed (last ST-LCL micro-op completes).
                                                                 Cleared when a Normal job has completed. */
        uint32_t st_lcl_busy           : 1;  /**< [ 10: 10](RO/H) Set when a Store-Local operation is active. */
        uint32_t pending_slot          : 1;  /**< [  9:  9](RO/H) The job slot for the pending WR-DMA operation. Valid only when START_BUSY == 0 and
                                                                 DMA_PENDING == 1. */
        uint32_t job_slot              : 1;  /**< [  8:  8](RO/H) The job slot for the most recent WR-DMA operation. */
        uint32_t slice_fifo_oflow      : 1;  /**< [  7:  7](RO/H) Set when the slice FIFO overflows. */
        uint32_t dma_uflow             : 1;  /**< [  6:  6](RO/H) Set when the last WR-DMA operation encountered an underflow. */
        uint32_t dma_oflow             : 1;  /**< [  5:  5](RO/H) Set when the last WR-DMA operation encountered an overflow. */
        uint32_t dma_error             : 1;  /**< [  4:  4](RO/H) Set when the last WR-DMA operation encountered an error. */
        uint32_t last_dma_done         : 1;  /**< [  3:  3](RO/H) Set when the last WR-DMA operation received the last write-commit for the WR-DMA data from
                                                                 the job descriptor (JD.WR-DMA). WR-DMAs are issued to either SMEM or LLC/DDR, and the WR-
                                                                 DMA engine will receive
                                                                 ordered write responses from the MHBW-AMM to indicate which writes have been committed. */
        uint32_t dma_pending           : 1;  /**< [  2:  2](RO/H) Set when a WR-DMA operation is pending for the engine and the internal interface needs to
                                                                 be programmed. */
        uint32_t post_reset            : 1;  /**< [  1:  1](RO/H) Set to one on MDAB reset and remains one until the WR-DMA engine starts its first
                                                                 WR-DMA transfer.
                                                                 SWNOTE: DSP software can use this bit to qualify the JOB_TAG, JOB_SLOT, DMA_ERROR, LAST_DMA_DONE
                                                                 bits in this CSR. [see: these status bits remain SET and POST_RESET is used
                                                                 by software to know when they are truly valid].
                                                                 SET(HW): MDAB reset
                                                                 CLR(SW): DSP writes START_BUSY=0-\>1 */
        uint32_t start_busy            : 1;  /**< [  0:  0](R/W1S/H) When software writes a one to this register, hardware will copy the data for the completed
                                                                 job from the local memory starting at MDAB()_WD_ADDR to the mdbw, up to
                                                                 MDAB()_WR_ADDR+MDAB()_WR_LIMIT
                                                                 or when the last 128-bit word of the JD.WR-DMA section is transferred (whichever comes
                                                                 first).
                                                                 If the WR-DMA engine has already transferred part but not all of the JD.WR-DMA section for
                                                                 a job, then it will continue transferring data until it reaches the end of the JD.WR-DMA
                                                                 section,
                                                                 or until it writes MDAB()_CFG_LIMIT for the LAST WR-DMA slice, whichever comes first.
                                                                 This bit is reset to zero when the WR-DMA engine has completed the transfer and is ready
                                                                 to be re-initialized for another transfer. */
#else /* Word 0 - Little Endian */
        uint32_t start_busy            : 1;  /**< [  0:  0](R/W1S/H) When software writes a one to this register, hardware will copy the data for the completed
                                                                 job from the local memory starting at MDAB()_WD_ADDR to the mdbw, up to
                                                                 MDAB()_WR_ADDR+MDAB()_WR_LIMIT
                                                                 or when the last 128-bit word of the JD.WR-DMA section is transferred (whichever comes
                                                                 first).
                                                                 If the WR-DMA engine has already transferred part but not all of the JD.WR-DMA section for
                                                                 a job, then it will continue transferring data until it reaches the end of the JD.WR-DMA
                                                                 section,
                                                                 or until it writes MDAB()_CFG_LIMIT for the LAST WR-DMA slice, whichever comes first.
                                                                 This bit is reset to zero when the WR-DMA engine has completed the transfer and is ready
                                                                 to be re-initialized for another transfer. */
        uint32_t post_reset            : 1;  /**< [  1:  1](RO/H) Set to one on MDAB reset and remains one until the WR-DMA engine starts its first
                                                                 WR-DMA transfer.
                                                                 SWNOTE: DSP software can use this bit to qualify the JOB_TAG, JOB_SLOT, DMA_ERROR, LAST_DMA_DONE
                                                                 bits in this CSR. [see: these status bits remain SET and POST_RESET is used
                                                                 by software to know when they are truly valid].
                                                                 SET(HW): MDAB reset
                                                                 CLR(SW): DSP writes START_BUSY=0-\>1 */
        uint32_t dma_pending           : 1;  /**< [  2:  2](RO/H) Set when a WR-DMA operation is pending for the engine and the internal interface needs to
                                                                 be programmed. */
        uint32_t last_dma_done         : 1;  /**< [  3:  3](RO/H) Set when the last WR-DMA operation received the last write-commit for the WR-DMA data from
                                                                 the job descriptor (JD.WR-DMA). WR-DMAs are issued to either SMEM or LLC/DDR, and the WR-
                                                                 DMA engine will receive
                                                                 ordered write responses from the MHBW-AMM to indicate which writes have been committed. */
        uint32_t dma_error             : 1;  /**< [  4:  4](RO/H) Set when the last WR-DMA operation encountered an error. */
        uint32_t dma_oflow             : 1;  /**< [  5:  5](RO/H) Set when the last WR-DMA operation encountered an overflow. */
        uint32_t dma_uflow             : 1;  /**< [  6:  6](RO/H) Set when the last WR-DMA operation encountered an underflow. */
        uint32_t slice_fifo_oflow      : 1;  /**< [  7:  7](RO/H) Set when the slice FIFO overflows. */
        uint32_t job_slot              : 1;  /**< [  8:  8](RO/H) The job slot for the most recent WR-DMA operation. */
        uint32_t pending_slot          : 1;  /**< [  9:  9](RO/H) The job slot for the pending WR-DMA operation. Valid only when START_BUSY == 0 and
                                                                 DMA_PENDING == 1. */
        uint32_t st_lcl_busy           : 1;  /**< [ 10: 10](RO/H) Set when a Store-Local operation is active. */
        uint32_t post_st_lcl           : 1;  /**< [ 11: 11](RO/H) Set when a Store-Local job has completed (last ST-LCL micro-op completes).
                                                                 Cleared when a Normal job has completed. */
        uint32_t slice_fifo_flush      : 1;  /**< [ 12: 12](R/W1S/H) Write one to flush the slice FIFO. This field will be automatically cleared. */
        uint32_t reserved_13_15        : 3;
        uint32_t job_tag               : 16; /**< [ 31: 16](RO/H) The JOB_TAG field from the PSM command for the last completed WR-DMA operation.
                                                                 When DSP software writes START_BUSY=0-\>1, the WR-DMA engine will wait until the next
                                                                 available Job has been enqueued, at which point the JOB_TAG will be latched in. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdabx_wr_status_s cn; */
};
typedef union cavm_mdabx_wr_status cavm_mdabx_wr_status_t;

static inline uint64_t CAVM_MDABX_WR_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDABX_WR_STATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=54) || ((a>=64)&&(a<=74)) || ((a>=80)&&(a<=81))))
        return 0x87e0440080a0ll + 0x80000ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x87e0440080a0ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MDABX_WR_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDABX_WR_STATUS(a) cavm_mdabx_wr_status_t
#define bustype_CAVM_MDABX_WR_STATUS(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MDABX_WR_STATUS(a) "MDABX_WR_STATUS"
#define device_bar_CAVM_MDABX_WR_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDABX_WR_STATUS(a) (a)
#define arguments_CAVM_MDABX_WR_STATUS(a) (a),-1,-1,-1

#endif /* __CAVM_CSRS_MDAB_H__ */
