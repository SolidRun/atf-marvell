#ifndef __CAVM_CSRS_MDN_H__
#define __CAVM_CSRS_MDN_H__
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
 * OcteonTX MDN.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration mdn_bist_status_e
 *
 * MDN BIST Status Enumeration
 * Enumerates MDN_BIST_STATUS[STATUS], which reports the state of the BIST state
 * machine.
 */
#define CAVM_MDN_BIST_STATUS_E_ACTIVE (7)
#define CAVM_MDN_BIST_STATUS_E_DONE_BIST_TIMEOUT (5)
#define CAVM_MDN_BIST_STATUS_E_DONE_BUS_ERROR (4)
#define CAVM_MDN_BIST_STATUS_E_DONE_FAIL (2)
#define CAVM_MDN_BIST_STATUS_E_DONE_FAIL_NO_FUSES (3)
#define CAVM_MDN_BIST_STATUS_E_DONE_PASS_CLEAN (0)
#define CAVM_MDN_BIST_STATUS_E_DONE_PASS_REPAIRABLE (1)
#define CAVM_MDN_BIST_STATUS_E_HALTED (6)

/**
 * Enumeration mdn_debug_algo_e
 *
 * MDN BIST Debug Algorithm Enumeration
 * Enumerates MDN_BIST_CONFIG[DEBUG_ALGO], which selects how defects are captured
 * for debug purposes.
 */
#define CAVM_MDN_DEBUG_ALGO_E_DEFECT_CAPTURE_FIRST (0)
#define CAVM_MDN_DEBUG_ALGO_E_DEFECT_CAPTURE_LAST (1)
#define CAVM_MDN_DEBUG_ALGO_E_DEFECT_CAPTURE_MAX (2)
#define CAVM_MDN_DEBUG_ALGO_E_DEFECT_CAPTURE_MIN (3)

/**
 * Enumeration mdn_debug_kind_e
 *
 * MDN BIST Debug Kind Enumeration
 * Enumerates MDN_BIST_CONFIG[DEBUG_KIND], which selects which defects are captured
 * for debug purposes.
 */
#define CAVM_MDN_DEBUG_KIND_E_DEFECT_CAPTURE_COL (1)
#define CAVM_MDN_DEBUG_KIND_E_DEFECT_CAPTURE_REP (2)
#define CAVM_MDN_DEBUG_KIND_E_DEFECT_CAPTURE_ROW (0)

/**
 * Register (MDSB) mdn_active_memtype
 *
 * MDN Active Memory Type Register
 */
union cavm_mdn_active_memtype
{
    uint32_t u;
    struct cavm_mdn_active_memtype_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_28_31        : 4;
        uint32_t bc_dis_action_no_match : 2; /**< [ 27: 26](WO) If [ACTIVE_MEMTYPE] does not match MEMTYPE, following action
                                                                 is taken on BROADCAST_DISABLE bit depending on this field:
                                                                 0x0,0x2 = BROADCAST_DISABLE remains unchanged.
                                                                 0x1 = Set BROADCAST_DISABLE to 0.
                                                                 0x3 = Set BROADCAST_DISABLE to 1. */
        uint32_t bc_dis_action_match   : 2;  /**< [ 25: 24](WO) If [ACTIVE_MEMTYPE] matches MEMTYPE, following action
                                                                 is taken on BROADCAST_DISABLE bit depending on this field:
                                                                 0x0,0x2 = BROADCAST_DISABLE remains unchanged.
                                                                 0x1 = Set BROADCAST_DISABLE to 0.
                                                                 0x3 = Set BROADCAST_DISABLE to 1. */
        uint32_t march_bc_dis_action_no_match : 2;/**< [ 23: 22](WO) If [ACTIVE_MEMTYPE] does not match MEMTYPE, following action
                                                                 is taken on MARCH_BROADCAST_DISABLE bit depending on this field:
                                                                 0x0,0x2 = BROADCAST_DISABLE remains unchanged.
                                                                 0x1 = Set BROADCAST_DISABLE to 0.
                                                                 0x3 = Set BROADCAST_DISABLE to 1. */
        uint32_t march_bc_dis_action_match : 2;/**< [ 21: 20](WO) If [ACTIVE_MEMTYPE] matches MEMTYPE, following action
                                                                 is taken on MARCH_BROADCAST_DISABLE bit depending on this field:
                                                                 0x0,0x2 = BROADCAST_DISABLE remains unchanged.
                                                                 0x1 = Set BROADCAST_DISABLE to 0.
                                                                 0x3 = Set BROADCAST_DISABLE to 1. */
        uint32_t reserved_5_19         : 15;
        uint32_t active_memtype        : 5;  /**< [  4:  0](WO) This field is compared with MEMTYPE parameter. Depending on
                                                                 whether it matches MEMTYPE or not, disable_broadcast and
                                                                 disable_march_broadcast bits get set, cleared, or remain
                                                                 unchanged depending on bits 27:20 of this register. */
#else /* Word 0 - Little Endian */
        uint32_t active_memtype        : 5;  /**< [  4:  0](WO) This field is compared with MEMTYPE parameter. Depending on
                                                                 whether it matches MEMTYPE or not, disable_broadcast and
                                                                 disable_march_broadcast bits get set, cleared, or remain
                                                                 unchanged depending on bits 27:20 of this register. */
        uint32_t reserved_5_19         : 15;
        uint32_t march_bc_dis_action_match : 2;/**< [ 21: 20](WO) If [ACTIVE_MEMTYPE] matches MEMTYPE, following action
                                                                 is taken on MARCH_BROADCAST_DISABLE bit depending on this field:
                                                                 0x0,0x2 = BROADCAST_DISABLE remains unchanged.
                                                                 0x1 = Set BROADCAST_DISABLE to 0.
                                                                 0x3 = Set BROADCAST_DISABLE to 1. */
        uint32_t march_bc_dis_action_no_match : 2;/**< [ 23: 22](WO) If [ACTIVE_MEMTYPE] does not match MEMTYPE, following action
                                                                 is taken on MARCH_BROADCAST_DISABLE bit depending on this field:
                                                                 0x0,0x2 = BROADCAST_DISABLE remains unchanged.
                                                                 0x1 = Set BROADCAST_DISABLE to 0.
                                                                 0x3 = Set BROADCAST_DISABLE to 1. */
        uint32_t bc_dis_action_match   : 2;  /**< [ 25: 24](WO) If [ACTIVE_MEMTYPE] matches MEMTYPE, following action
                                                                 is taken on BROADCAST_DISABLE bit depending on this field:
                                                                 0x0,0x2 = BROADCAST_DISABLE remains unchanged.
                                                                 0x1 = Set BROADCAST_DISABLE to 0.
                                                                 0x3 = Set BROADCAST_DISABLE to 1. */
        uint32_t bc_dis_action_no_match : 2; /**< [ 27: 26](WO) If [ACTIVE_MEMTYPE] does not match MEMTYPE, following action
                                                                 is taken on BROADCAST_DISABLE bit depending on this field:
                                                                 0x0,0x2 = BROADCAST_DISABLE remains unchanged.
                                                                 0x1 = Set BROADCAST_DISABLE to 0.
                                                                 0x3 = Set BROADCAST_DISABLE to 1. */
        uint32_t reserved_28_31        : 4;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdn_active_memtype_s cn; */
};
typedef union cavm_mdn_active_memtype cavm_mdn_active_memtype_t;

#define CAVM_MDN_ACTIVE_MEMTYPE CAVM_MDN_ACTIVE_MEMTYPE_FUNC()
static inline uint64_t CAVM_MDN_ACTIVE_MEMTYPE_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDN_ACTIVE_MEMTYPE_FUNC(void)
{
    return 0x64;
}

#define typedef_CAVM_MDN_ACTIVE_MEMTYPE cavm_mdn_active_memtype_t
#define bustype_CAVM_MDN_ACTIVE_MEMTYPE CSR_TYPE_MDSB
#define basename_CAVM_MDN_ACTIVE_MEMTYPE "MDN_ACTIVE_MEMTYPE"
#define busnum_CAVM_MDN_ACTIVE_MEMTYPE 0
#define arguments_CAVM_MDN_ACTIVE_MEMTYPE -1,-1,-1,-1

/**
 * Register (MDSB) mdn_active_nodes
 *
 * MDN Active Nodes Register
 */
union cavm_mdn_active_nodes
{
    uint32_t u;
    struct cavm_mdn_active_nodes_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t active_nodes          : 32; /**< [ 31:  0](WO) This allows BROADCAST_DISABLE and MARCH_BROADCAST_DISABLE
                                                                 fields of 32 nodes to be updated using a single write.
                                                                 Each bit of this field indicates how BROADCAST_DISABLE
                                                                 and MARCH_BROADCAST_DISABLE are to be updated in one of the
                                                                 32 nodes. Bit i is interpreted by
                                                                 nodes whose node_id[4:0] is i if bit [9:5] of node_id field
                                                                 in the WRITE command match the node's node_id[9:5].
                                                                 If bit 0 of node_id field in the WRITE command is 1,
                                                                 BROADCAST_DISABLE is set to [ACTIVE_NODES] bit corresponding to
                                                                 the node, otherwise BROADCAST_DISABLE remains unchanged.
                                                                 If bit 1 of node_id field in the WRITE command is 1,
                                                                 MARCH_BROADCAST_DISABLE is set to [ACTIVE_NODES] bit corresponding to
                                                                 the node, otherwise MARCH_BROADCAST_DISABLE remains unchanged. */
#else /* Word 0 - Little Endian */
        uint32_t active_nodes          : 32; /**< [ 31:  0](WO) This allows BROADCAST_DISABLE and MARCH_BROADCAST_DISABLE
                                                                 fields of 32 nodes to be updated using a single write.
                                                                 Each bit of this field indicates how BROADCAST_DISABLE
                                                                 and MARCH_BROADCAST_DISABLE are to be updated in one of the
                                                                 32 nodes. Bit i is interpreted by
                                                                 nodes whose node_id[4:0] is i if bit [9:5] of node_id field
                                                                 in the WRITE command match the node's node_id[9:5].
                                                                 If bit 0 of node_id field in the WRITE command is 1,
                                                                 BROADCAST_DISABLE is set to [ACTIVE_NODES] bit corresponding to
                                                                 the node, otherwise BROADCAST_DISABLE remains unchanged.
                                                                 If bit 1 of node_id field in the WRITE command is 1,
                                                                 MARCH_BROADCAST_DISABLE is set to [ACTIVE_NODES] bit corresponding to
                                                                 the node, otherwise MARCH_BROADCAST_DISABLE remains unchanged. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdn_active_nodes_s cn; */
};
typedef union cavm_mdn_active_nodes cavm_mdn_active_nodes_t;

#define CAVM_MDN_ACTIVE_NODES CAVM_MDN_ACTIVE_NODES_FUNC()
static inline uint64_t CAVM_MDN_ACTIVE_NODES_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDN_ACTIVE_NODES_FUNC(void)
{
    return 0x68;
}

#define typedef_CAVM_MDN_ACTIVE_NODES cavm_mdn_active_nodes_t
#define bustype_CAVM_MDN_ACTIVE_NODES CSR_TYPE_MDSB
#define basename_CAVM_MDN_ACTIVE_NODES "MDN_ACTIVE_NODES"
#define busnum_CAVM_MDN_ACTIVE_NODES 0
#define arguments_CAVM_MDN_ACTIVE_NODES -1,-1,-1,-1

/**
 * Register (MDSB) mdn_bisr_repair
 *
 * MDN BISR Repair Register
 * This register can only be written when domain reset is asserted. This protects the
 * RAMs repair from changing when the block is out of reset.
 */
union cavm_mdn_bisr_repair
{
    uint32_t u;
    struct cavm_mdn_bisr_repair_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_18_31        : 14;
        uint32_t soft_repair_disable   : 1;  /**< [ 17: 17](R/W) Set along with [VALID] to disable soft repair. Must be 0 if an
                                                                 actual repair is programmed in [REPAIR]. */
        uint32_t valid                 : 1;  /**< [ 16: 16](R/W/H) Set when [REPAIR] is valid. */
        uint32_t reserved_12_15        : 4;
        uint32_t repair                : 12; /**< [ 11:  0](R/W/H) BISR repair information. */
#else /* Word 0 - Little Endian */
        uint32_t repair                : 12; /**< [ 11:  0](R/W/H) BISR repair information. */
        uint32_t reserved_12_15        : 4;
        uint32_t valid                 : 1;  /**< [ 16: 16](R/W/H) Set when [REPAIR] is valid. */
        uint32_t soft_repair_disable   : 1;  /**< [ 17: 17](R/W) Set along with [VALID] to disable soft repair. Must be 0 if an
                                                                 actual repair is programmed in [REPAIR]. */
        uint32_t reserved_18_31        : 14;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdn_bisr_repair_s cn; */
};
typedef union cavm_mdn_bisr_repair cavm_mdn_bisr_repair_t;

#define CAVM_MDN_BISR_REPAIR CAVM_MDN_BISR_REPAIR_FUNC()
static inline uint64_t CAVM_MDN_BISR_REPAIR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDN_BISR_REPAIR_FUNC(void)
{
    return 0x28;
}

#define typedef_CAVM_MDN_BISR_REPAIR cavm_mdn_bisr_repair_t
#define bustype_CAVM_MDN_BISR_REPAIR CSR_TYPE_MDSB
#define basename_CAVM_MDN_BISR_REPAIR "MDN_BISR_REPAIR"
#define busnum_CAVM_MDN_BISR_REPAIR 0
#define arguments_CAVM_MDN_BISR_REPAIR -1,-1,-1,-1

/**
 * Register (MDSB) mdn_bist_addr_mask
 *
 * MDN BIST Start Mask Register
 */
union cavm_mdn_bist_addr_mask
{
    uint32_t u;
    struct cavm_mdn_bist_addr_mask_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_7_31         : 25;
        uint32_t mdh_start_ratio       : 3;  /**< [  6:  4](R/W) Controls the number of MDNs that respond to a given start BIST command
                                                                 by controlling which of the command's hub_id address bits are used for the
                                                                 node's address decode.  For a node to respond to the start command the
                                                                 command's hub_id ANDed with the compare mask must match the node's hub_id
                                                                 ANDed with the compare mask.  Valid values are 0 through 7.  The MDC typically
                                                                 programs this field with the contents of MDC_BIST_CONFIG[MDH_START_RATIO] prior to
                                                                 starting BIST.
                                                                   0x0 = Compare-mask is 0b000_0000; every MDH_ID matches (all bits are wild-cards).
                                                                   0x1 = Compare-mask is 0b000_0001; every 2nd MDH_ID matches (upper 6 bits are wild-cards).
                                                                   0x2 = Compare-mask is 0b000_0011; every 4th MDH_ID matches (upper 5 bits wild-cards).
                                                                   _ ...
                                                                   0x7 = Compare-mask is 0b111_1111; exact match (no bits are wild-cards). */
        uint32_t mdn_start_ratio       : 4;  /**< [  3:  0](R/W) Controls the number of MDNs that respond to a given start BIST command
                                                                 by controlling which of the command's node_id address bits are used for the
                                                                 node's address decode.  For a node to respond to the start command the
                                                                 command's node_id ANDed with the compare mask must match the node's node_id
                                                                 ANDed with the compare mask.  Valid values are 0 through 10.  The MDC typically
                                                                 programs this field with the contents of MDC_BIST_CONFIG[MDN_START_RATIO] prior to
                                                                 starting BIST.
                                                                   0x0 = Compare mask is 0b00_000_0000; every MDH_ID matches (all bits are wild-cards).
                                                                   0x1 = Compare mask is 0b00_000_0001; every 2nd MDH_ID matches (upper 9 bits are wild-cards).
                                                                   0x2 = Compare mask is 0b00_000_0011; every 4th MDH_ID matches (upper 8 bits are wild-cards).
                                                                   _ ...
                                                                   0xA = Compare mask is 0b11_1111_1111; exact match (no bits are wild-cards). */
#else /* Word 0 - Little Endian */
        uint32_t mdn_start_ratio       : 4;  /**< [  3:  0](R/W) Controls the number of MDNs that respond to a given start BIST command
                                                                 by controlling which of the command's node_id address bits are used for the
                                                                 node's address decode.  For a node to respond to the start command the
                                                                 command's node_id ANDed with the compare mask must match the node's node_id
                                                                 ANDed with the compare mask.  Valid values are 0 through 10.  The MDC typically
                                                                 programs this field with the contents of MDC_BIST_CONFIG[MDN_START_RATIO] prior to
                                                                 starting BIST.
                                                                   0x0 = Compare mask is 0b00_000_0000; every MDH_ID matches (all bits are wild-cards).
                                                                   0x1 = Compare mask is 0b00_000_0001; every 2nd MDH_ID matches (upper 9 bits are wild-cards).
                                                                   0x2 = Compare mask is 0b00_000_0011; every 4th MDH_ID matches (upper 8 bits are wild-cards).
                                                                   _ ...
                                                                   0xA = Compare mask is 0b11_1111_1111; exact match (no bits are wild-cards). */
        uint32_t mdh_start_ratio       : 3;  /**< [  6:  4](R/W) Controls the number of MDNs that respond to a given start BIST command
                                                                 by controlling which of the command's hub_id address bits are used for the
                                                                 node's address decode.  For a node to respond to the start command the
                                                                 command's hub_id ANDed with the compare mask must match the node's hub_id
                                                                 ANDed with the compare mask.  Valid values are 0 through 7.  The MDC typically
                                                                 programs this field with the contents of MDC_BIST_CONFIG[MDH_START_RATIO] prior to
                                                                 starting BIST.
                                                                   0x0 = Compare-mask is 0b000_0000; every MDH_ID matches (all bits are wild-cards).
                                                                   0x1 = Compare-mask is 0b000_0001; every 2nd MDH_ID matches (upper 6 bits are wild-cards).
                                                                   0x2 = Compare-mask is 0b000_0011; every 4th MDH_ID matches (upper 5 bits wild-cards).
                                                                   _ ...
                                                                   0x7 = Compare-mask is 0b111_1111; exact match (no bits are wild-cards). */
        uint32_t reserved_7_31         : 25;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdn_bist_addr_mask_s cn; */
};
typedef union cavm_mdn_bist_addr_mask cavm_mdn_bist_addr_mask_t;

#define CAVM_MDN_BIST_ADDR_MASK CAVM_MDN_BIST_ADDR_MASK_FUNC()
static inline uint64_t CAVM_MDN_BIST_ADDR_MASK_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDN_BIST_ADDR_MASK_FUNC(void)
{
    return 0x4c;
}

#define typedef_CAVM_MDN_BIST_ADDR_MASK cavm_mdn_bist_addr_mask_t
#define bustype_CAVM_MDN_BIST_ADDR_MASK CSR_TYPE_MDSB
#define basename_CAVM_MDN_BIST_ADDR_MASK "MDN_BIST_ADDR_MASK"
#define busnum_CAVM_MDN_BIST_ADDR_MASK 0
#define arguments_CAVM_MDN_BIST_ADDR_MASK -1,-1,-1,-1

/**
 * Register (MDSB) mdn_bist_config
 *
 * MDN Configuration Register
 */
union cavm_mdn_bist_config
{
    uint32_t u;
    struct cavm_mdn_bist_config_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_18_31        : 14;
        uint32_t drf_rdwr_disable      : 1;  /**< [ 17: 17](R/W) BIST DRF_SIM_RD_WR march disable. This March is only valid for DRFs
                                                                 When this bit is cleared to zero, the simultaneous read-write march is enabled.
                                                                 When this bit is set to one the simultaneous read write march is disabled.
                                                                 If enabled, simultaneous read write march runs before marches 7 through 0
                                                                 (controlled by [MARCH_DISABLE] vector). */
        uint32_t march_broadcast_disable : 1;/**< [ 16: 16](R/W) March broadcast disable. When set, disables writing to
                                                                 MDN_PROG_MARCH0 and MDN_PROG_MARCH1 through broadcast writes. */
        uint32_t prog_march_disable    : 1;  /**< [ 15: 15](R/W) BIST programmable march disable.
                                                                 When this bit is cleared to zero, the programmable march is enabled.
                                                                 When this bit is set to one the programmable march is disabled.
                                                                 If enabled, programmable march runs before all other marches, i.e.,
                                                                 BIST DRF_SIM_RD_WR march (controlled by [DRF_RDWR_DISABLE]) and marches
                                                                 7 through 0 (controlled by [MARCH_DISABLE] vector). */
        uint32_t debug_kind            : 2;  /**< [ 14: 13](R/W) Selects row or column defect capture for debug according to the
                                                                 MDN_DEBUG_KIND_E enumeration. */
        uint32_t debug_algo            : 2;  /**< [ 12: 11](R/W) Selects the algorithm used to capture defects for debug according to the
                                                                 MDN_DEBUG_ALGO_E enumeration. */
        uint32_t continuous_enable     : 1;  /**< [ 10: 10](R/W) Run BIST continuously until turned off.  Use extreme caution when
                                                                 running in this mode as BIST can draw significant power. */
        uint32_t halt_enable           : 1;  /**< [  9:  9](R/W) BIST halt mode enable. When set, the BIST state machine will run until a defect
                                                                 is detected; then it will halt. If no defect is detected, the BIST state machine
                                                                 will run until it has finished and remove MDN_BIST_STATUS[STATUS] being
                                                                 MDN_BIST_STATUS_E::ACTIVE if a defect is detected, it will assert set
                                                                 MDN_BIST_STATUS[STATUS] to MDN_BIST_STATUS_E::HALTED and stop executing
                                                                 BIST. The BIST state machine can be restarted at the next location in its march
                                                                 by writing one to MDN_BIST_CONTROL[START]. */
        uint32_t broadcast_disable     : 1;  /**< [  8:  8](R/W) Broadcast start BIST disable.  When set, disables the BIST state
                                                                 machine performing BIST upon a broadcast write of one to
                                                                 MDN_BIST_CONTROL[START].
                                                                 Arbitrary sets of memories can be specified to run BIST by setting
                                                                 or clearing this bit in all memories. */
        uint32_t march_disable         : 8;  /**< [  7:  0](R/W) BIST march disable.  BIST can execute up to eight march patterns.  This
                                                                 8-bit vector controls which marches are disabled.  When a bit in the
                                                                 vector is cleared to zero, the associated march is enabled.  When a bit
                                                                 in the vector is set to one the associated march is disabled.  Marches
                                                                 7 through 4 are the retention patterns and are disabled by default.
                                                                 The marches execute from 7 down to 0.  The marches include:
                                                                   0x0 = Clear.
                                                                   0x1 = Read-hammer, binary-CAM or ternary-CAM.
                                                                   0x2 = MD2.
                                                                   0x3 = Checkerboard.
                                                                   0x4 = Inverse checkerboard read and compare.
                                                                   0x5 = Inverse checkerboard write.
                                                                   0x6 = Checkerboard read and compare.
                                                                   0x7 = Checkerboard write. */
#else /* Word 0 - Little Endian */
        uint32_t march_disable         : 8;  /**< [  7:  0](R/W) BIST march disable.  BIST can execute up to eight march patterns.  This
                                                                 8-bit vector controls which marches are disabled.  When a bit in the
                                                                 vector is cleared to zero, the associated march is enabled.  When a bit
                                                                 in the vector is set to one the associated march is disabled.  Marches
                                                                 7 through 4 are the retention patterns and are disabled by default.
                                                                 The marches execute from 7 down to 0.  The marches include:
                                                                   0x0 = Clear.
                                                                   0x1 = Read-hammer, binary-CAM or ternary-CAM.
                                                                   0x2 = MD2.
                                                                   0x3 = Checkerboard.
                                                                   0x4 = Inverse checkerboard read and compare.
                                                                   0x5 = Inverse checkerboard write.
                                                                   0x6 = Checkerboard read and compare.
                                                                   0x7 = Checkerboard write. */
        uint32_t broadcast_disable     : 1;  /**< [  8:  8](R/W) Broadcast start BIST disable.  When set, disables the BIST state
                                                                 machine performing BIST upon a broadcast write of one to
                                                                 MDN_BIST_CONTROL[START].
                                                                 Arbitrary sets of memories can be specified to run BIST by setting
                                                                 or clearing this bit in all memories. */
        uint32_t halt_enable           : 1;  /**< [  9:  9](R/W) BIST halt mode enable. When set, the BIST state machine will run until a defect
                                                                 is detected; then it will halt. If no defect is detected, the BIST state machine
                                                                 will run until it has finished and remove MDN_BIST_STATUS[STATUS] being
                                                                 MDN_BIST_STATUS_E::ACTIVE if a defect is detected, it will assert set
                                                                 MDN_BIST_STATUS[STATUS] to MDN_BIST_STATUS_E::HALTED and stop executing
                                                                 BIST. The BIST state machine can be restarted at the next location in its march
                                                                 by writing one to MDN_BIST_CONTROL[START]. */
        uint32_t continuous_enable     : 1;  /**< [ 10: 10](R/W) Run BIST continuously until turned off.  Use extreme caution when
                                                                 running in this mode as BIST can draw significant power. */
        uint32_t debug_algo            : 2;  /**< [ 12: 11](R/W) Selects the algorithm used to capture defects for debug according to the
                                                                 MDN_DEBUG_ALGO_E enumeration. */
        uint32_t debug_kind            : 2;  /**< [ 14: 13](R/W) Selects row or column defect capture for debug according to the
                                                                 MDN_DEBUG_KIND_E enumeration. */
        uint32_t prog_march_disable    : 1;  /**< [ 15: 15](R/W) BIST programmable march disable.
                                                                 When this bit is cleared to zero, the programmable march is enabled.
                                                                 When this bit is set to one the programmable march is disabled.
                                                                 If enabled, programmable march runs before all other marches, i.e.,
                                                                 BIST DRF_SIM_RD_WR march (controlled by [DRF_RDWR_DISABLE]) and marches
                                                                 7 through 0 (controlled by [MARCH_DISABLE] vector). */
        uint32_t march_broadcast_disable : 1;/**< [ 16: 16](R/W) March broadcast disable. When set, disables writing to
                                                                 MDN_PROG_MARCH0 and MDN_PROG_MARCH1 through broadcast writes. */
        uint32_t drf_rdwr_disable      : 1;  /**< [ 17: 17](R/W) BIST DRF_SIM_RD_WR march disable. This March is only valid for DRFs
                                                                 When this bit is cleared to zero, the simultaneous read-write march is enabled.
                                                                 When this bit is set to one the simultaneous read write march is disabled.
                                                                 If enabled, simultaneous read write march runs before marches 7 through 0
                                                                 (controlled by [MARCH_DISABLE] vector). */
        uint32_t reserved_18_31        : 14;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdn_bist_config_s cn; */
};
typedef union cavm_mdn_bist_config cavm_mdn_bist_config_t;

#define CAVM_MDN_BIST_CONFIG CAVM_MDN_BIST_CONFIG_FUNC()
static inline uint64_t CAVM_MDN_BIST_CONFIG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDN_BIST_CONFIG_FUNC(void)
{
    return 0;
}

#define typedef_CAVM_MDN_BIST_CONFIG cavm_mdn_bist_config_t
#define bustype_CAVM_MDN_BIST_CONFIG CSR_TYPE_MDSB
#define basename_CAVM_MDN_BIST_CONFIG "MDN_BIST_CONFIG"
#define busnum_CAVM_MDN_BIST_CONFIG 0
#define arguments_CAVM_MDN_BIST_CONFIG -1,-1,-1,-1

/**
 * Register (MDSB) mdn_bist_control
 *
 * MDN Configuration Register
 */
union cavm_mdn_bist_control
{
    uint32_t u;
    struct cavm_mdn_bist_control_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t start                 : 1;  /**< [ 31: 31](R/W1) Starts or restarts the BIST state machine.  If the BIST state machine
                                                                 is idle, writing one will start it executing the first enabled march
                                                                 according to the MDN_BIST_CONFIG[PROG_MARCH_DISABLE] bit and
                                                                 the MDN_BIST_CONFIG[MARCH_DISABLE] vector.  If the BIST
                                                                 state machine is halted due to detecting a defect while
                                                                 MDN_BIST_CONFIG[HALT_ENABLE] is asserted, then writing one will
                                                                 restart it executing at the next enabled march element.   The values
                                                                 captured in MDN_DEBUG_DEFECT are reset each time BIST is started
                                                                 or restarted. */
        uint32_t clear                 : 1;  /**< [ 30: 30](R/W1) When asserted with [START], the BIST SM will execute the clear BIST operation. */
        uint32_t read                  : 1;  /**< [ 29: 29](R/W1) The BIST SM will perform a debug read using the specified [REP] and [ADDRESS]
                                                                 when [START] and [READ] are asserted simultaneously. Asserting [READ] without
                                                                 [START] has no effect. The BIST status will change to ACTIVE while the read
                                                                 occurs and then change to DONE_* when the read data is available via
                                                                 MDN_DEBUG_DATA(). Note that the BIST status may be any flavor of
                                                                 DONE_\<FAIL,REPAIRABLE,PASS\> but it simply means that the debug read has
                                                                 completed. */
        uint32_t reset                 : 1;  /**< [ 28: 28](R/W1) Resets the BIST state machine and sets MDN_BIST_STATUS[STATUS] back to
                                                                 MDN_BIST_STATUS_E::DONE_PASS_CLEAN. */
        uint32_t write                 : 1;  /**< [ 27: 27](R/W1) The BIST state machine will perform a debug write using the specified [REP] and
                                                                 [ADDRESS] when [START] and [WRITE] are asserted simultaneously. Asserting
                                                                 [WRITE] without [START] has no effect. The BIST status will change to ACTIVE
                                                                 while the write occurs and then change to DONE_*. Note the write data needs to
                                                                 be programmed in the MDN_DEBUG_DATA regrister prior to setting [WRITE]. BIST
                                                                 status may be any flavor of DONE_\<FAIL,REPAIRABLE,PASS\> but it simply means that
                                                                 the debug write has completed. */
        uint32_t tcam_dsel             : 1;  /**< [ 26: 26](R/W1) DSEL value. To Read/write Data or Mask into the TCAM. When '1' Data is
                                                                 presented, when '0' MASK value is presented. */
        uint32_t read_sweep            : 3;  /**< [ 25: 23](R/W) This field is programed to select the debug read data storage for RAMs with more than 1K Width.
                                                                 0x0 = 0000 - 1023 data bits are stored in MDN_DEBUG_DATA().
                                                                 0x1 = 1024 - 2047 data bits are stored in MDN_DEBUG_DATA().
                                                                 0x2 = 2048 - 3071 data bits are stored in MDN_DEBUG_DATA().
                                                                 0x8 = 3072 - 4095 data bits are stored in MDN_DEBUG_DATA(). */
        uint32_t one_rep               : 1;  /**< [ 22: 22](R/W1) When set to one, the BIST state machine performs BIST only upon the REP
                                                                 specified below.  When cleared to zero, the BIST state machine performs
                                                                 BIST starting at the [REP] specified which may include multiple REPs. */
        uint32_t rep                   : 8;  /**< [ 21: 14](R/W1) When the READ/WRITE field above is asserted this specifies the repetition
                                                                 used for a debug read.  When the [START] field is asserted this
                                                                 specifies repetition that BIST will start with.  Note that any value
                                                                 of REP can be used while halted; however, it must be set back to the
                                                                 value of MDN_DEBUG_MARCH[MARCH_REP] before restarting to continue the
                                                                 march. */
        uint32_t address               : 14; /**< [ 13:  0](R/W) Address of Legacy Debug Write, now deprecated. use MDN_BIST_CONTROL_DBG_ADDR instead. */
#else /* Word 0 - Little Endian */
        uint32_t address               : 14; /**< [ 13:  0](R/W) Address of Legacy Debug Write, now deprecated. use MDN_BIST_CONTROL_DBG_ADDR instead. */
        uint32_t rep                   : 8;  /**< [ 21: 14](R/W1) When the READ/WRITE field above is asserted this specifies the repetition
                                                                 used for a debug read.  When the [START] field is asserted this
                                                                 specifies repetition that BIST will start with.  Note that any value
                                                                 of REP can be used while halted; however, it must be set back to the
                                                                 value of MDN_DEBUG_MARCH[MARCH_REP] before restarting to continue the
                                                                 march. */
        uint32_t one_rep               : 1;  /**< [ 22: 22](R/W1) When set to one, the BIST state machine performs BIST only upon the REP
                                                                 specified below.  When cleared to zero, the BIST state machine performs
                                                                 BIST starting at the [REP] specified which may include multiple REPs. */
        uint32_t read_sweep            : 3;  /**< [ 25: 23](R/W) This field is programed to select the debug read data storage for RAMs with more than 1K Width.
                                                                 0x0 = 0000 - 1023 data bits are stored in MDN_DEBUG_DATA().
                                                                 0x1 = 1024 - 2047 data bits are stored in MDN_DEBUG_DATA().
                                                                 0x2 = 2048 - 3071 data bits are stored in MDN_DEBUG_DATA().
                                                                 0x8 = 3072 - 4095 data bits are stored in MDN_DEBUG_DATA(). */
        uint32_t tcam_dsel             : 1;  /**< [ 26: 26](R/W1) DSEL value. To Read/write Data or Mask into the TCAM. When '1' Data is
                                                                 presented, when '0' MASK value is presented. */
        uint32_t write                 : 1;  /**< [ 27: 27](R/W1) The BIST state machine will perform a debug write using the specified [REP] and
                                                                 [ADDRESS] when [START] and [WRITE] are asserted simultaneously. Asserting
                                                                 [WRITE] without [START] has no effect. The BIST status will change to ACTIVE
                                                                 while the write occurs and then change to DONE_*. Note the write data needs to
                                                                 be programmed in the MDN_DEBUG_DATA regrister prior to setting [WRITE]. BIST
                                                                 status may be any flavor of DONE_\<FAIL,REPAIRABLE,PASS\> but it simply means that
                                                                 the debug write has completed. */
        uint32_t reset                 : 1;  /**< [ 28: 28](R/W1) Resets the BIST state machine and sets MDN_BIST_STATUS[STATUS] back to
                                                                 MDN_BIST_STATUS_E::DONE_PASS_CLEAN. */
        uint32_t read                  : 1;  /**< [ 29: 29](R/W1) The BIST SM will perform a debug read using the specified [REP] and [ADDRESS]
                                                                 when [START] and [READ] are asserted simultaneously. Asserting [READ] without
                                                                 [START] has no effect. The BIST status will change to ACTIVE while the read
                                                                 occurs and then change to DONE_* when the read data is available via
                                                                 MDN_DEBUG_DATA(). Note that the BIST status may be any flavor of
                                                                 DONE_\<FAIL,REPAIRABLE,PASS\> but it simply means that the debug read has
                                                                 completed. */
        uint32_t clear                 : 1;  /**< [ 30: 30](R/W1) When asserted with [START], the BIST SM will execute the clear BIST operation. */
        uint32_t start                 : 1;  /**< [ 31: 31](R/W1) Starts or restarts the BIST state machine.  If the BIST state machine
                                                                 is idle, writing one will start it executing the first enabled march
                                                                 according to the MDN_BIST_CONFIG[PROG_MARCH_DISABLE] bit and
                                                                 the MDN_BIST_CONFIG[MARCH_DISABLE] vector.  If the BIST
                                                                 state machine is halted due to detecting a defect while
                                                                 MDN_BIST_CONFIG[HALT_ENABLE] is asserted, then writing one will
                                                                 restart it executing at the next enabled march element.   The values
                                                                 captured in MDN_DEBUG_DEFECT are reset each time BIST is started
                                                                 or restarted. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdn_bist_control_s cn; */
};
typedef union cavm_mdn_bist_control cavm_mdn_bist_control_t;

#define CAVM_MDN_BIST_CONTROL CAVM_MDN_BIST_CONTROL_FUNC()
static inline uint64_t CAVM_MDN_BIST_CONTROL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDN_BIST_CONTROL_FUNC(void)
{
    return 4;
}

#define typedef_CAVM_MDN_BIST_CONTROL cavm_mdn_bist_control_t
#define bustype_CAVM_MDN_BIST_CONTROL CSR_TYPE_MDSB
#define basename_CAVM_MDN_BIST_CONTROL "MDN_BIST_CONTROL"
#define busnum_CAVM_MDN_BIST_CONTROL 0
#define arguments_CAVM_MDN_BIST_CONTROL -1,-1,-1,-1

/**
 * Register (MDSB) mdn_bist_control_dbg_addr
 *
 * MDN BIST Control Debug Address Register
 */
union cavm_mdn_bist_control_dbg_addr
{
    uint32_t u;
    struct cavm_mdn_bist_control_dbg_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_26_31        : 6;
        uint32_t wr_be                 : 2;  /**< [ 25: 24](R/W) Debug write data byte enables. used the two bits to expand to the data width. */
        uint32_t wr_mask               : 2;  /**< [ 23: 22](R/W) Debug write data mask (in case of TCAMs). used the two bits to expand to the
                                                                 data width. */
        uint32_t wr_dat                : 2;  /**< [ 21: 20](R/W) Debug write data. used the two bits to expand to the data width. */
        uint32_t debug_addr            : 20; /**< [ 19:  0](R/W) Read address/ write address in case we support debug write. Write this register 1st
                                                                 followed by the MDN_BIST_CONTROL to enable hardware to use the same START bit to get the
                                                                 address to the FSM. This field must be written as zeros when starting or re-starting BIST. */
#else /* Word 0 - Little Endian */
        uint32_t debug_addr            : 20; /**< [ 19:  0](R/W) Read address/ write address in case we support debug write. Write this register 1st
                                                                 followed by the MDN_BIST_CONTROL to enable hardware to use the same START bit to get the
                                                                 address to the FSM. This field must be written as zeros when starting or re-starting BIST. */
        uint32_t wr_dat                : 2;  /**< [ 21: 20](R/W) Debug write data. used the two bits to expand to the data width. */
        uint32_t wr_mask               : 2;  /**< [ 23: 22](R/W) Debug write data mask (in case of TCAMs). used the two bits to expand to the
                                                                 data width. */
        uint32_t wr_be                 : 2;  /**< [ 25: 24](R/W) Debug write data byte enables. used the two bits to expand to the data width. */
        uint32_t reserved_26_31        : 6;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdn_bist_control_dbg_addr_s cn; */
};
typedef union cavm_mdn_bist_control_dbg_addr cavm_mdn_bist_control_dbg_addr_t;

#define CAVM_MDN_BIST_CONTROL_DBG_ADDR CAVM_MDN_BIST_CONTROL_DBG_ADDR_FUNC()
static inline uint64_t CAVM_MDN_BIST_CONTROL_DBG_ADDR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDN_BIST_CONTROL_DBG_ADDR_FUNC(void)
{
    return 0x50;
}

#define typedef_CAVM_MDN_BIST_CONTROL_DBG_ADDR cavm_mdn_bist_control_dbg_addr_t
#define bustype_CAVM_MDN_BIST_CONTROL_DBG_ADDR CSR_TYPE_MDSB
#define basename_CAVM_MDN_BIST_CONTROL_DBG_ADDR "MDN_BIST_CONTROL_DBG_ADDR"
#define busnum_CAVM_MDN_BIST_CONTROL_DBG_ADDR 0
#define arguments_CAVM_MDN_BIST_CONTROL_DBG_ADDR -1,-1,-1,-1

/**
 * Register (MDSB) mdn_bist_status
 *
 * MDN BIST Status Register
 */
union cavm_mdn_bist_status
{
    uint32_t u;
    struct cavm_mdn_bist_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t hub_id                : 7;  /**< [ 31: 25](RO/H) Hub identifier. */
        uint32_t node_id               : 10; /**< [ 24: 15](RO/H) MDN identifier. */
        uint32_t repair                : 12; /**< [ 14:  3](RO/H) Asserted when BIST state machine detects a defective column. */
        uint32_t status                : 3;  /**< [  2:  0](RO/H) Reports the state of the BIST state machine. Enumerated by MDN_BIST_STATUS_E. */
#else /* Word 0 - Little Endian */
        uint32_t status                : 3;  /**< [  2:  0](RO/H) Reports the state of the BIST state machine. Enumerated by MDN_BIST_STATUS_E. */
        uint32_t repair                : 12; /**< [ 14:  3](RO/H) Asserted when BIST state machine detects a defective column. */
        uint32_t node_id               : 10; /**< [ 24: 15](RO/H) MDN identifier. */
        uint32_t hub_id                : 7;  /**< [ 31: 25](RO/H) Hub identifier. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdn_bist_status_s cn; */
};
typedef union cavm_mdn_bist_status cavm_mdn_bist_status_t;

#define CAVM_MDN_BIST_STATUS CAVM_MDN_BIST_STATUS_FUNC()
static inline uint64_t CAVM_MDN_BIST_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDN_BIST_STATUS_FUNC(void)
{
    return 8;
}

#define typedef_CAVM_MDN_BIST_STATUS cavm_mdn_bist_status_t
#define bustype_CAVM_MDN_BIST_STATUS CSR_TYPE_MDSB
#define basename_CAVM_MDN_BIST_STATUS "MDN_BIST_STATUS"
#define busnum_CAVM_MDN_BIST_STATUS 0
#define arguments_CAVM_MDN_BIST_STATUS -1,-1,-1,-1

/**
 * Register (MDSB) mdn_bist_status_detail
 *
 * MDN BIST Detail Status Register
 */
union cavm_mdn_bist_status_detail
{
    uint32_t u;
    struct cavm_mdn_bist_status_detail_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_4_31         : 28;
        uint32_t status                : 4;  /**< [  3:  0](RO/H) Expansion of MDN_BIST_STATUS[STATUS] with four bits of BIST STATUS.
                                                                 The MSB signifies if the BIST has been RUN on the node. */
#else /* Word 0 - Little Endian */
        uint32_t status                : 4;  /**< [  3:  0](RO/H) Expansion of MDN_BIST_STATUS[STATUS] with four bits of BIST STATUS.
                                                                 The MSB signifies if the BIST has been RUN on the node. */
        uint32_t reserved_4_31         : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdn_bist_status_detail_s cn; */
};
typedef union cavm_mdn_bist_status_detail cavm_mdn_bist_status_detail_t;

#define CAVM_MDN_BIST_STATUS_DETAIL CAVM_MDN_BIST_STATUS_DETAIL_FUNC()
static inline uint64_t CAVM_MDN_BIST_STATUS_DETAIL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDN_BIST_STATUS_DETAIL_FUNC(void)
{
    return 0x58;
}

#define typedef_CAVM_MDN_BIST_STATUS_DETAIL cavm_mdn_bist_status_detail_t
#define bustype_CAVM_MDN_BIST_STATUS_DETAIL CSR_TYPE_MDSB
#define basename_CAVM_MDN_BIST_STATUS_DETAIL "MDN_BIST_STATUS_DETAIL"
#define busnum_CAVM_MDN_BIST_STATUS_DETAIL 0
#define arguments_CAVM_MDN_BIST_STATUS_DETAIL -1,-1,-1,-1

/**
 * Register (MDSB) mdn_const
 *
 * MDN Constants Register
 * This register has constants pertaining to this node for software discovery.
 * See also MDC_RAS_ROM().
 */
union cavm_mdn_const
{
    uint32_t u;
    struct cavm_mdn_const_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t virt                  : 1;  /**< [ 31: 31](RO) Asserted when this MDN is virtual. */
        uint32_t debug_read            : 1;  /**< [ 30: 30](RO) Asserted when this MDN has debug read capability via MDN_BIST_CONTROL and MDN_DEBUG_DATA(). */
        uint32_t ecc                   : 1;  /**< [ 29: 29](RO) Asserted when this MDH is capable or reporting ECC or parity error events. */
        uint32_t bisr                  : 1;  /**< [ 28: 28](RO) Asserted when BISR capable. */
        uint32_t bist                  : 1;  /**< [ 27: 27](RO) Asserted when BIST capable. */
        uint32_t rows                  : 14; /**< [ 26: 13](RO) Number of rows minus 1 in the SRAM or CAM (16K max). */
        uint32_t cols                  : 13; /**< [ 12:  0](RO) Number of columns minus 1 (data BIST) in the SRAM or CAM (8K max).
                                                                 The value includes any redundant bits for repair.  For multi-port RAMs
                                                                 the value is the sum of all data bits across all ports minus 1.  Thus
                                                                 a 20-bit 2RW RAM with BISR will have a value of (2 x (20 + 1)) - 1 = 41
                                                                 for 2 ports of 21 bits (including repair) minus 1. */
#else /* Word 0 - Little Endian */
        uint32_t cols                  : 13; /**< [ 12:  0](RO) Number of columns minus 1 (data BIST) in the SRAM or CAM (8K max).
                                                                 The value includes any redundant bits for repair.  For multi-port RAMs
                                                                 the value is the sum of all data bits across all ports minus 1.  Thus
                                                                 a 20-bit 2RW RAM with BISR will have a value of (2 x (20 + 1)) - 1 = 41
                                                                 for 2 ports of 21 bits (including repair) minus 1. */
        uint32_t rows                  : 14; /**< [ 26: 13](RO) Number of rows minus 1 in the SRAM or CAM (16K max). */
        uint32_t bist                  : 1;  /**< [ 27: 27](RO) Asserted when BIST capable. */
        uint32_t bisr                  : 1;  /**< [ 28: 28](RO) Asserted when BISR capable. */
        uint32_t ecc                   : 1;  /**< [ 29: 29](RO) Asserted when this MDH is capable or reporting ECC or parity error events. */
        uint32_t debug_read            : 1;  /**< [ 30: 30](RO) Asserted when this MDN has debug read capability via MDN_BIST_CONTROL and MDN_DEBUG_DATA(). */
        uint32_t virt                  : 1;  /**< [ 31: 31](RO) Asserted when this MDN is virtual. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdn_const_s cn; */
};
typedef union cavm_mdn_const cavm_mdn_const_t;

#define CAVM_MDN_CONST CAVM_MDN_CONST_FUNC()
static inline uint64_t CAVM_MDN_CONST_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDN_CONST_FUNC(void)
{
    return 0x40;
}

#define typedef_CAVM_MDN_CONST cavm_mdn_const_t
#define bustype_CAVM_MDN_CONST CSR_TYPE_MDSB
#define basename_CAVM_MDN_CONST "MDN_CONST"
#define busnum_CAVM_MDN_CONST 0
#define arguments_CAVM_MDN_CONST -1,-1,-1,-1

/**
 * Register (MDSB) mdn_const_row
 *
 * MDN Constants Row Register
 * This register has constants pertaining to this node for software discovery.
 * It captures the number of ROWs
 * See also MDC_RAS_ROM().
 */
union cavm_mdn_const_row
{
    uint32_t u;
    struct cavm_mdn_const_row_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_20_31        : 12;
        uint32_t rows                  : 20; /**< [ 19:  0](RO) Contains the number of entries in this MDN_ID. */
#else /* Word 0 - Little Endian */
        uint32_t rows                  : 20; /**< [ 19:  0](RO) Contains the number of entries in this MDN_ID. */
        uint32_t reserved_20_31        : 12;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdn_const_row_s cn; */
};
typedef union cavm_mdn_const_row cavm_mdn_const_row_t;

#define CAVM_MDN_CONST_ROW CAVM_MDN_CONST_ROW_FUNC()
static inline uint64_t CAVM_MDN_CONST_ROW_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDN_CONST_ROW_FUNC(void)
{
    return 0x6c;
}

#define typedef_CAVM_MDN_CONST_ROW cavm_mdn_const_row_t
#define bustype_CAVM_MDN_CONST_ROW CSR_TYPE_MDSB
#define basename_CAVM_MDN_CONST_ROW "MDN_CONST_ROW"
#define busnum_CAVM_MDN_CONST_ROW 0
#define arguments_CAVM_MDN_CONST_ROW -1,-1,-1,-1

/**
 * Register (MDSB) mdn_debug_data#
 *
 * MDN Debug Data Register
 */
union cavm_mdn_debug_datax
{
    uint32_t u;
    struct cavm_mdn_debug_datax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO/H) Read data according associated with a debug read issued via
                                                                 MDN_BIST_CONTROL[READ, REP and ADDRESS]. */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO/H) Read data according associated with a debug read issued via
                                                                 MDN_BIST_CONTROL[READ, REP and ADDRESS]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdn_debug_datax_s cn; */
};
typedef union cavm_mdn_debug_datax cavm_mdn_debug_datax_t;

static inline uint64_t CAVM_MDN_DEBUG_DATAX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDN_DEBUG_DATAX(uint64_t a)
{
    if (a<=31)
        return 0x80 + 4 * ((a) & 0x1f);
    __cavm_csr_fatal("MDN_DEBUG_DATAX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MDN_DEBUG_DATAX(a) cavm_mdn_debug_datax_t
#define bustype_CAVM_MDN_DEBUG_DATAX(a) CSR_TYPE_MDSB
#define basename_CAVM_MDN_DEBUG_DATAX(a) "MDN_DEBUG_DATAX"
#define busnum_CAVM_MDN_DEBUG_DATAX(a) (a)
#define arguments_CAVM_MDN_DEBUG_DATAX(a) (a),-1,-1,-1

/**
 * Register (MDSB) mdn_debug_defect
 *
 * MDN BIST Debug Register
 * This register contains information about the most recently detected defect.
 * When MDN_BIST_CONFIG[HALT_ENABLE] is asserted this register will maintain
 * its value when the BIST state machine halts; otherwise, the value of this
 * register may change multiple times during a given BIST run.  The values
 * captured in this register are reset each time BIST is started or restarted.
 */
union cavm_mdn_debug_defect
{
    uint32_t u;
    struct cavm_mdn_debug_defect_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sm_latency            : 8;  /**< [ 31: 24](RO) Read latency in clock cycles.  This reports the depth of the MDN_DEBUG_SKID[SKID]
                                                                 buffer and the clock differential in MDN_DEBUG_MARCH. */
        uint32_t reserved_21_23        : 3;
        uint32_t other                 : 1;  /**< [ 20: 20](RO/H) Asserted for special-case defects.  For NPC TCAM this is asserted when more than
                                                                 one "way" has a defect. */
        uint32_t cam_valid_bit_fail    : 1;  /**< [ 19: 19](RAZ) Reserved. */
        uint32_t cam_hit_index_fail    : 1;  /**< [ 18: 18](RAZ) Reserved. */
        uint32_t cam_multi_hit_fail    : 1;  /**< [ 17: 17](RAZ) Reserved. */
        uint32_t cam_hit_fail          : 1;  /**< [ 16: 16](RAZ) Reserved. */
        uint32_t multi_col_fail        : 1;  /**< [ 15: 15](RO/H) Asserted if BIST detects multiple failing columns in the same row
                                                                 of a CAM or RAM. This is asserted if multiple faults are detected in same clock.
                                                                 Wont set if multi-bits faults in same Row are of SA1 and SA0 simultaneously.
                                                                 Only one would be detected in one cycle, due to March patterns here. */
        uint32_t valid                 : 1;  /**< [ 14: 14](RO/H) The [DEFECT] field is valid. */
        uint32_t defect                : 14; /**< [ 13:  0](RO/H) The maximum, minimum, first or last defect column is captured here
                                                                 according to the setting of MDN_BIST_CONFIG[DEBUG_KIND] and MDN_BIST_CONFIG[DEBUG_ALGO]. */
#else /* Word 0 - Little Endian */
        uint32_t defect                : 14; /**< [ 13:  0](RO/H) The maximum, minimum, first or last defect column is captured here
                                                                 according to the setting of MDN_BIST_CONFIG[DEBUG_KIND] and MDN_BIST_CONFIG[DEBUG_ALGO]. */
        uint32_t valid                 : 1;  /**< [ 14: 14](RO/H) The [DEFECT] field is valid. */
        uint32_t multi_col_fail        : 1;  /**< [ 15: 15](RO/H) Asserted if BIST detects multiple failing columns in the same row
                                                                 of a CAM or RAM. This is asserted if multiple faults are detected in same clock.
                                                                 Wont set if multi-bits faults in same Row are of SA1 and SA0 simultaneously.
                                                                 Only one would be detected in one cycle, due to March patterns here. */
        uint32_t cam_hit_fail          : 1;  /**< [ 16: 16](RAZ) Reserved. */
        uint32_t cam_multi_hit_fail    : 1;  /**< [ 17: 17](RAZ) Reserved. */
        uint32_t cam_hit_index_fail    : 1;  /**< [ 18: 18](RAZ) Reserved. */
        uint32_t cam_valid_bit_fail    : 1;  /**< [ 19: 19](RAZ) Reserved. */
        uint32_t other                 : 1;  /**< [ 20: 20](RO/H) Asserted for special-case defects.  For NPC TCAM this is asserted when more than
                                                                 one "way" has a defect. */
        uint32_t reserved_21_23        : 3;
        uint32_t sm_latency            : 8;  /**< [ 31: 24](RO) Read latency in clock cycles.  This reports the depth of the MDN_DEBUG_SKID[SKID]
                                                                 buffer and the clock differential in MDN_DEBUG_MARCH. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdn_debug_defect_s cn; */
};
typedef union cavm_mdn_debug_defect cavm_mdn_debug_defect_t;

#define CAVM_MDN_DEBUG_DEFECT CAVM_MDN_DEBUG_DEFECT_FUNC()
static inline uint64_t CAVM_MDN_DEBUG_DEFECT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDN_DEBUG_DEFECT_FUNC(void)
{
    return 0x1c;
}

#define typedef_CAVM_MDN_DEBUG_DEFECT cavm_mdn_debug_defect_t
#define bustype_CAVM_MDN_DEBUG_DEFECT CSR_TYPE_MDSB
#define basename_CAVM_MDN_DEBUG_DEFECT "MDN_DEBUG_DEFECT"
#define busnum_CAVM_MDN_DEBUG_DEFECT 0
#define arguments_CAVM_MDN_DEBUG_DEFECT -1,-1,-1,-1

/**
 * Register (MDSB) mdn_debug_defect_row
 *
 * MDN Debug Row Defect Register
 */
union cavm_mdn_debug_defect_row
{
    uint32_t u;
    struct cavm_mdn_debug_defect_row_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rep_defect            : 8;  /**< [ 31: 24](RO/H) Repetition at which the defect in the memory cell is found.
                                                                 The maximum, minimum, first or last defect row is captured
                                                                 according to the setting of MDN_BIST_CONFIG[DEBUG_ALGO]. The REP
                                                                 at which the Error was detected is recorded in this field. */
        uint32_t reserved_21_23        : 3;
        uint32_t valid_defect          : 1;  /**< [ 20: 20](RO/H) Defect captured in [ROW_DEFECT] is valid. */
        uint32_t row_defect            : 20; /**< [ 19:  0](RO/H) Row in the memory cell in which defect is found.
                                                                 The maximum, minimum, first or last defect row is captured here
                                                                 according to the setting of MDN_BIST_CONFIG[DEBUG_ALGO]. */
#else /* Word 0 - Little Endian */
        uint32_t row_defect            : 20; /**< [ 19:  0](RO/H) Row in the memory cell in which defect is found.
                                                                 The maximum, minimum, first or last defect row is captured here
                                                                 according to the setting of MDN_BIST_CONFIG[DEBUG_ALGO]. */
        uint32_t valid_defect          : 1;  /**< [ 20: 20](RO/H) Defect captured in [ROW_DEFECT] is valid. */
        uint32_t reserved_21_23        : 3;
        uint32_t rep_defect            : 8;  /**< [ 31: 24](RO/H) Repetition at which the defect in the memory cell is found.
                                                                 The maximum, minimum, first or last defect row is captured
                                                                 according to the setting of MDN_BIST_CONFIG[DEBUG_ALGO]. The REP
                                                                 at which the Error was detected is recorded in this field. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdn_debug_defect_row_s cn; */
};
typedef union cavm_mdn_debug_defect_row cavm_mdn_debug_defect_row_t;

#define CAVM_MDN_DEBUG_DEFECT_ROW CAVM_MDN_DEBUG_DEFECT_ROW_FUNC()
static inline uint64_t CAVM_MDN_DEBUG_DEFECT_ROW_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDN_DEBUG_DEFECT_ROW_FUNC(void)
{
    return 0x54;
}

#define typedef_CAVM_MDN_DEBUG_DEFECT_ROW cavm_mdn_debug_defect_row_t
#define bustype_CAVM_MDN_DEBUG_DEFECT_ROW CSR_TYPE_MDSB
#define basename_CAVM_MDN_DEBUG_DEFECT_ROW "MDN_DEBUG_DEFECT_ROW"
#define busnum_CAVM_MDN_DEBUG_DEFECT_ROW 0
#define arguments_CAVM_MDN_DEBUG_DEFECT_ROW -1,-1,-1,-1

/**
 * Register (MDSB) mdn_debug_march
 *
 * MDN BIST Debug March Register
 * When MDN_BIST_CONFIG[HALT_ENABLE] is asserted this register contains
 * information about the most recently detected defect. All the fields in
 * this CSR get their values from state variables in the BIST state machine.
 * Due to the state machine's pipelining these values will be ahead of those
 * corresponding to the actual defect according to the number of clock cycles
 * of the RAM/CAM's read latency.
 */
union cavm_mdn_debug_march
{
    uint32_t u;
    struct cavm_mdn_debug_march_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data_index            : 12; /**< [ 31: 20](RO/H) When MDN_BIST_CONFIG[HALT_ENABLE] is asserted, this field reports the
                                                                 value of the data bit index used when the BIST state machine halted.
                                                                 The data bit index is used to walk zeros or ones for testing CAM operation. */
        uint32_t march_rep             : 8;  /**< [ 19: 12](RO/H) When MDN_BIST_CONFIG[HALT_ENABLE] is asserted, this field reports what
                                                                 BIST state machine repetition was halted upon.  The BIST state machine
                                                                 performs multiple repetitions for certain RAMs.  A typical usage of
                                                                 repetitions is to test the ports of a multi-port RAM. */
        uint32_t march_sel             : 4;  /**< [ 11:  8](RO/H) When MDN_BIST_CONFIG[HALT_ENABLE] is asserted, this field reports
                                                                 the march that BIST state machine halted in.  This field has the
                                                                 same format as the MDN_BIST_CONFIG[MARCH_DISABLE] vector. */
        uint32_t march_row             : 3;  /**< [  7:  5](RO/H) When MDN_BIST_CONFIG[HALT_ENABLE] is asserted, this field reports
                                                                 the row in the march array that the BIST state machine halted upon. */
        uint32_t march_col             : 5;  /**< [  4:  0](RO/H) When MDN_BIST_CONFIG[HALT_ENABLE] is asserted, this field reports
                                                                 the column in the march array that the BIST state machine halted upon. */
#else /* Word 0 - Little Endian */
        uint32_t march_col             : 5;  /**< [  4:  0](RO/H) When MDN_BIST_CONFIG[HALT_ENABLE] is asserted, this field reports
                                                                 the column in the march array that the BIST state machine halted upon. */
        uint32_t march_row             : 3;  /**< [  7:  5](RO/H) When MDN_BIST_CONFIG[HALT_ENABLE] is asserted, this field reports
                                                                 the row in the march array that the BIST state machine halted upon. */
        uint32_t march_sel             : 4;  /**< [ 11:  8](RO/H) When MDN_BIST_CONFIG[HALT_ENABLE] is asserted, this field reports
                                                                 the march that BIST state machine halted in.  This field has the
                                                                 same format as the MDN_BIST_CONFIG[MARCH_DISABLE] vector. */
        uint32_t march_rep             : 8;  /**< [ 19: 12](RO/H) When MDN_BIST_CONFIG[HALT_ENABLE] is asserted, this field reports what
                                                                 BIST state machine repetition was halted upon.  The BIST state machine
                                                                 performs multiple repetitions for certain RAMs.  A typical usage of
                                                                 repetitions is to test the ports of a multi-port RAM. */
        uint32_t data_index            : 12; /**< [ 31: 20](RO/H) When MDN_BIST_CONFIG[HALT_ENABLE] is asserted, this field reports the
                                                                 value of the data bit index used when the BIST state machine halted.
                                                                 The data bit index is used to walk zeros or ones for testing CAM operation. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdn_debug_march_s cn; */
};
typedef union cavm_mdn_debug_march cavm_mdn_debug_march_t;

#define CAVM_MDN_DEBUG_MARCH CAVM_MDN_DEBUG_MARCH_FUNC()
static inline uint64_t CAVM_MDN_DEBUG_MARCH_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDN_DEBUG_MARCH_FUNC(void)
{
    return 0x20;
}

#define typedef_CAVM_MDN_DEBUG_MARCH cavm_mdn_debug_march_t
#define bustype_CAVM_MDN_DEBUG_MARCH CSR_TYPE_MDSB
#define basename_CAVM_MDN_DEBUG_MARCH "MDN_DEBUG_MARCH"
#define busnum_CAVM_MDN_DEBUG_MARCH 0
#define arguments_CAVM_MDN_DEBUG_MARCH -1,-1,-1,-1

/**
 * Register (MDSB) mdn_debug_skid
 *
 * MDN BIST Debug Skid Register
 * When MDN_BIST_CONFIG[HALT_ENABLE] is asserted this register contains
 * information about the most recently detected defects.  Since the BIST SM
 * is a pipelined design, when a defect is detected, and the BIST SM halted,
 * there will be some number of BIST operations still in flight.  For example,
 * in some of the custom BIST implementations in the AP core, there can be 16
 * or more operations in flight when a defect is detected.  The SKID field
 * records whether or not any additional defects were found in those in-flight
 * operations.
 */
union cavm_mdn_debug_skid
{
    uint32_t u;
    struct cavm_mdn_debug_skid_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t skid                  : 32; /**< [ 31:  0](RO/H) Skid FIFO for defect detection.  0 = No defect. 1 = Defect.
                                                                 Each bit corresponds to a clock-cycle pipeline delay from the time
                                                                 BIST SM was halted due to a defect detection.  Bit 0 corresponds to
                                                                 the clock-cycle of the halt plus 1, bit 1 = halt + 2 cycles, etc. */
#else /* Word 0 - Little Endian */
        uint32_t skid                  : 32; /**< [ 31:  0](RO/H) Skid FIFO for defect detection.  0 = No defect. 1 = Defect.
                                                                 Each bit corresponds to a clock-cycle pipeline delay from the time
                                                                 BIST SM was halted due to a defect detection.  Bit 0 corresponds to
                                                                 the clock-cycle of the halt plus 1, bit 1 = halt + 2 cycles, etc. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdn_debug_skid_s cn; */
};
typedef union cavm_mdn_debug_skid cavm_mdn_debug_skid_t;

#define CAVM_MDN_DEBUG_SKID CAVM_MDN_DEBUG_SKID_FUNC()
static inline uint64_t CAVM_MDN_DEBUG_SKID_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDN_DEBUG_SKID_FUNC(void)
{
    return 0x24;
}

#define typedef_CAVM_MDN_DEBUG_SKID cavm_mdn_debug_skid_t
#define bustype_CAVM_MDN_DEBUG_SKID CSR_TYPE_MDSB
#define basename_CAVM_MDN_DEBUG_SKID "MDN_DEBUG_SKID"
#define busnum_CAVM_MDN_DEBUG_SKID 0
#define arguments_CAVM_MDN_DEBUG_SKID -1,-1,-1,-1

/**
 * Register (MDSB) mdn_ecc_config
 *
 * MDN Configuration Register
 * This register exists only when MDN_CONST[ECC] is one, otherwise it is write-ignored
 * and read as zero.
 */
union cavm_mdn_ecc_config
{
    uint32_t u;
    struct cavm_mdn_ecc_config_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_5_31         : 27;
        uint32_t disable_dbe           : 1;  /**< [  4:  4](R/W) Disables this node from responding to broadcast reads of
                                                                 MDN_ECC_STATUS due to double-bit/uncorrectable error reporting.
                                                                 Overridden when [CORRECTION_DISABLE] is asserted. */
        uint32_t disable_sbe           : 1;  /**< [  3:  3](R/W) Disables this node from responding to broadcast reads of
                                                                 MDN_ECC_STATUS due to single-bit/correctable error reporting.
                                                                 Overridden when [CORRECTION_DISABLE] is asserted. */
        uint32_t error_inject          : 2;  /**< [  2:  1](R/W) This 2-bit field provides diagnostic ECC error injection by flipping
                                                                 the least significant two bits of the write path's ECC code.  This bit
                                                                 flipping is done for all writes while the field is asserted.
                                                                 Asserting a single bit causes a single bit ECC error and asserting
                                                                 both bits causes a double-bit ECC error.
                                                                 In this manner ECC errors are injected, triggering upstream events
                                                                 like ECC error interrupts and status capture, without corrupting the
                                                                 data. */
        uint32_t correction_disable    : 1;  /**< [  0:  0](R/W) This field disables ECC error correction by ignoring the ECC code
                                                                 associated with the data.  This also disables the reporting
                                                                 of single and double-bit ECC errors and overrides the [DISABLE_SBE] and
                                                                 [DISABLE_DBE] controls. */
#else /* Word 0 - Little Endian */
        uint32_t correction_disable    : 1;  /**< [  0:  0](R/W) This field disables ECC error correction by ignoring the ECC code
                                                                 associated with the data.  This also disables the reporting
                                                                 of single and double-bit ECC errors and overrides the [DISABLE_SBE] and
                                                                 [DISABLE_DBE] controls. */
        uint32_t error_inject          : 2;  /**< [  2:  1](R/W) This 2-bit field provides diagnostic ECC error injection by flipping
                                                                 the least significant two bits of the write path's ECC code.  This bit
                                                                 flipping is done for all writes while the field is asserted.
                                                                 Asserting a single bit causes a single bit ECC error and asserting
                                                                 both bits causes a double-bit ECC error.
                                                                 In this manner ECC errors are injected, triggering upstream events
                                                                 like ECC error interrupts and status capture, without corrupting the
                                                                 data. */
        uint32_t disable_sbe           : 1;  /**< [  3:  3](R/W) Disables this node from responding to broadcast reads of
                                                                 MDN_ECC_STATUS due to single-bit/correctable error reporting.
                                                                 Overridden when [CORRECTION_DISABLE] is asserted. */
        uint32_t disable_dbe           : 1;  /**< [  4:  4](R/W) Disables this node from responding to broadcast reads of
                                                                 MDN_ECC_STATUS due to double-bit/uncorrectable error reporting.
                                                                 Overridden when [CORRECTION_DISABLE] is asserted. */
        uint32_t reserved_5_31         : 27;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdn_ecc_config_s cn; */
};
typedef union cavm_mdn_ecc_config cavm_mdn_ecc_config_t;

#define CAVM_MDN_ECC_CONFIG CAVM_MDN_ECC_CONFIG_FUNC()
static inline uint64_t CAVM_MDN_ECC_CONFIG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDN_ECC_CONFIG_FUNC(void)
{
    return 0x2c;
}

#define typedef_CAVM_MDN_ECC_CONFIG cavm_mdn_ecc_config_t
#define bustype_CAVM_MDN_ECC_CONFIG CSR_TYPE_MDSB
#define basename_CAVM_MDN_ECC_CONFIG "MDN_ECC_CONFIG"
#define busnum_CAVM_MDN_ECC_CONFIG 0
#define arguments_CAVM_MDN_ECC_CONFIG -1,-1,-1,-1

/**
 * Register (MDSB) mdn_ecc_irq
 *
 * MDN ECC Interrupt Request Register
 * This register responds to broadcast reads when MDN_ECC_STATUS[DBE or SBE] fields are asserted.
 */
union cavm_mdn_ecc_irq
{
    uint32_t u;
    struct cavm_mdn_ecc_irq_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_31           : 1;
        uint32_t hub_id                : 7;  /**< [ 30: 24](RO/H) ECC hub identifier. */
        uint32_t node_id               : 10; /**< [ 23: 14](RO/H) ECC node identifier. */
        uint32_t reserved_0_13         : 14;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_13         : 14;
        uint32_t node_id               : 10; /**< [ 23: 14](RO/H) ECC node identifier. */
        uint32_t hub_id                : 7;  /**< [ 30: 24](RO/H) ECC hub identifier. */
        uint32_t reserved_31           : 1;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdn_ecc_irq_s cn; */
};
typedef union cavm_mdn_ecc_irq cavm_mdn_ecc_irq_t;

#define CAVM_MDN_ECC_IRQ CAVM_MDN_ECC_IRQ_FUNC()
static inline uint64_t CAVM_MDN_ECC_IRQ_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDN_ECC_IRQ_FUNC(void)
{
    return 0x30;
}

#define typedef_CAVM_MDN_ECC_IRQ cavm_mdn_ecc_irq_t
#define bustype_CAVM_MDN_ECC_IRQ CSR_TYPE_MDSB
#define basename_CAVM_MDN_ECC_IRQ "MDN_ECC_IRQ"
#define busnum_CAVM_MDN_ECC_IRQ 0
#define arguments_CAVM_MDN_ECC_IRQ -1,-1,-1,-1

/**
 * Register (MDSB) mdn_ecc_status
 *
 * MDN ECC Error Status Register
 */
union cavm_mdn_ecc_status
{
    uint32_t u;
    struct cavm_mdn_ecc_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_30_31        : 2;
        uint32_t row                   : 14; /**< [ 29: 16](RO/H) SRAM row address of the most recent double-bit/uncorrectable error (DBE) if
                                                                 [DBE] is asserted or the SRAM row address of the most recent
                                                                 single-bit/correctable error (SBE) is [DBE] is deasserted and [SBE] is
                                                                 asserted. */
        uint32_t reserved_4_15         : 12;
        uint32_t dbe_plus              : 1;  /**< [  3:  3](RO/H) Asserted when ECC detects another double-bit or single-bit error before the
                                                                 first error was processed by the interrupt handler. Note that the error
                                                                 reporting prioritizes DBEs over SBEs. Thus prior to being read, a DBE will
                                                                 overwrite MDN_ECC_IRQ[HUB_ID] and MDN_ECC_IRQ[NODE_ID] of a previous SBE. If
                                                                 [SBE] is set then PLUS indicates that additional SBEs have occurred beyond that
                                                                 first captures. If [DBE] is set then [DBE_PLUS] indicates that there was either
                                                                 a previous SBE or subsequent SBE or subsequent DBE. */
        uint32_t sbe_plus              : 1;  /**< [  2:  2](RO/H) Asserted when ECC detects another double-bit or single-bit error before the
                                                                 first error was processed by the interrupt handler. Note that the error
                                                                 reporting prioritizes DBEs over SBEs. Thus prior to being read, a DBE will
                                                                 overwrite MDN_ECC_IRQ[HUB_ID] and MDN_ECC_IRQ[NODE_ID] of a previous SBE. If
                                                                 [SBE] is set then PLUS indicates that additional SBEs have occurred beyond that
                                                                 first captures. If [DBE] is set then [SBE_PLUS] indicates that there was either
                                                                 a previous SBE or subsequent SBE or subsequent DBE. */
        uint32_t dbe                   : 1;  /**< [  1:  1](RO/H) Asserted when a double-bit/uncorrectable error is detected. */
        uint32_t sbe                   : 1;  /**< [  0:  0](RO/H) Asserted when a single-bit/correctable error is detected. */
#else /* Word 0 - Little Endian */
        uint32_t sbe                   : 1;  /**< [  0:  0](RO/H) Asserted when a single-bit/correctable error is detected. */
        uint32_t dbe                   : 1;  /**< [  1:  1](RO/H) Asserted when a double-bit/uncorrectable error is detected. */
        uint32_t sbe_plus              : 1;  /**< [  2:  2](RO/H) Asserted when ECC detects another double-bit or single-bit error before the
                                                                 first error was processed by the interrupt handler. Note that the error
                                                                 reporting prioritizes DBEs over SBEs. Thus prior to being read, a DBE will
                                                                 overwrite MDN_ECC_IRQ[HUB_ID] and MDN_ECC_IRQ[NODE_ID] of a previous SBE. If
                                                                 [SBE] is set then PLUS indicates that additional SBEs have occurred beyond that
                                                                 first captures. If [DBE] is set then [SBE_PLUS] indicates that there was either
                                                                 a previous SBE or subsequent SBE or subsequent DBE. */
        uint32_t dbe_plus              : 1;  /**< [  3:  3](RO/H) Asserted when ECC detects another double-bit or single-bit error before the
                                                                 first error was processed by the interrupt handler. Note that the error
                                                                 reporting prioritizes DBEs over SBEs. Thus prior to being read, a DBE will
                                                                 overwrite MDN_ECC_IRQ[HUB_ID] and MDN_ECC_IRQ[NODE_ID] of a previous SBE. If
                                                                 [SBE] is set then PLUS indicates that additional SBEs have occurred beyond that
                                                                 first captures. If [DBE] is set then [DBE_PLUS] indicates that there was either
                                                                 a previous SBE or subsequent SBE or subsequent DBE. */
        uint32_t reserved_4_15         : 12;
        uint32_t row                   : 14; /**< [ 29: 16](RO/H) SRAM row address of the most recent double-bit/uncorrectable error (DBE) if
                                                                 [DBE] is asserted or the SRAM row address of the most recent
                                                                 single-bit/correctable error (SBE) is [DBE] is deasserted and [SBE] is
                                                                 asserted. */
        uint32_t reserved_30_31        : 2;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdn_ecc_status_s cn; */
};
typedef union cavm_mdn_ecc_status cavm_mdn_ecc_status_t;

#define CAVM_MDN_ECC_STATUS CAVM_MDN_ECC_STATUS_FUNC()
static inline uint64_t CAVM_MDN_ECC_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDN_ECC_STATUS_FUNC(void)
{
    return 0x34;
}

#define typedef_CAVM_MDN_ECC_STATUS cavm_mdn_ecc_status_t
#define bustype_CAVM_MDN_ECC_STATUS CSR_TYPE_MDSB
#define basename_CAVM_MDN_ECC_STATUS "MDN_ECC_STATUS"
#define busnum_CAVM_MDN_ECC_STATUS 0
#define arguments_CAVM_MDN_ECC_STATUS -1,-1,-1,-1

/**
 * Register (MDSB) mdn_prog_march0
 *
 * MDN Programmable March Register 0
 */
union cavm_mdn_prog_march0
{
    uint32_t u;
    struct cavm_mdn_prog_march0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t prog_march            : 32; /**< [ 31:  0](WO) Lowest 32 bits of programmable march. These should be written first.
                                                                 Every time programmable marches need to be updated, this register should be written
                                                                 to reset the internal pointer. */
#else /* Word 0 - Little Endian */
        uint32_t prog_march            : 32; /**< [ 31:  0](WO) Lowest 32 bits of programmable march. These should be written first.
                                                                 Every time programmable marches need to be updated, this register should be written
                                                                 to reset the internal pointer. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdn_prog_march0_s cn; */
};
typedef union cavm_mdn_prog_march0 cavm_mdn_prog_march0_t;

#define CAVM_MDN_PROG_MARCH0 CAVM_MDN_PROG_MARCH0_FUNC()
static inline uint64_t CAVM_MDN_PROG_MARCH0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDN_PROG_MARCH0_FUNC(void)
{
    return 0x5c;
}

#define typedef_CAVM_MDN_PROG_MARCH0 cavm_mdn_prog_march0_t
#define bustype_CAVM_MDN_PROG_MARCH0 CSR_TYPE_MDSB
#define basename_CAVM_MDN_PROG_MARCH0 "MDN_PROG_MARCH0"
#define busnum_CAVM_MDN_PROG_MARCH0 0
#define arguments_CAVM_MDN_PROG_MARCH0 -1,-1,-1,-1

/**
 * Register (MDSB) mdn_prog_march1
 *
 * MDN Programmable March Register 1
 */
union cavm_mdn_prog_march1
{
    uint32_t u;
    struct cavm_mdn_prog_march1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t prog_march            : 32; /**< [ 31:  0](WO) 32 bits of programmable march. Every write to this register writes next 32 bits of
                                                                 programmable march. Lower bits are written first. */
#else /* Word 0 - Little Endian */
        uint32_t prog_march            : 32; /**< [ 31:  0](WO) 32 bits of programmable march. Every write to this register writes next 32 bits of
                                                                 programmable march. Lower bits are written first. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdn_prog_march1_s cn; */
};
typedef union cavm_mdn_prog_march1 cavm_mdn_prog_march1_t;

#define CAVM_MDN_PROG_MARCH1 CAVM_MDN_PROG_MARCH1_FUNC()
static inline uint64_t CAVM_MDN_PROG_MARCH1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDN_PROG_MARCH1_FUNC(void)
{
    return 0x60;
}

#define typedef_CAVM_MDN_PROG_MARCH1 cavm_mdn_prog_march1_t
#define bustype_CAVM_MDN_PROG_MARCH1 CSR_TYPE_MDSB
#define basename_CAVM_MDN_PROG_MARCH1 "MDN_PROG_MARCH1"
#define busnum_CAVM_MDN_PROG_MARCH1 0
#define arguments_CAVM_MDN_PROG_MARCH1 -1,-1,-1,-1

#endif /* __CAVM_CSRS_MDN_H__ */
