#ifndef __CAVM_CSRS_DRO_H__
#define __CAVM_CSRS_DRO_H__
/* This file is auto-generated. Do not edit */

/***********************license start***********************************
* Copyright (C) 2018-2020 Marvell International Ltd.
* SPDX-License-Identifier: BSD-3-Clause
* https://spdx.org/licenses
***********************license end**************************************/


/**
 * @file
 *
 * Configuration and status register (CSR) address and type definitions for
 * OcteonTX DRO.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration dro_blocks_e
 *
 * INTERNAL: DRO Block Placement Enumeration
 *
 * Enumerates the DRO block identifier (CSR addresses \<23:16\>) to their physical placement.
 * Value 0xFF indicates broadcast, i.e., select all blocks.
 *
 * Internal:
 * This enum width is MDC_BAR_E::MDC_PF_BAR2's pcc_bar_size_bits minus 16, e.g. 24-16=8.
 * For P1, further limited to 4 bits.
 */
#define CAVM_DRO_BLOCKS_E_DCPX(a) (9 + (a))
#define CAVM_DRO_BLOCKS_E_ROCX(a) (8 + (a))
#define CAVM_DRO_BLOCKS_E_TSNX(a) (0 + (a))

/**
 * Register (RSL) dro_blk#_broadcast_ack_ret
 *
 * INTERNAL: DRO Block Broadcast Ack Return Register
 *
 * This register determines which DRO will return the ack back to RSL during a broadcast.
 */
union cavm_dro_blkx_broadcast_ack_ret
{
    uint64_t u;
    struct cavm_dro_blkx_broadcast_ack_ret_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t ack_ret               : 8;  /**< [  7:  0](R/W) Block number which will return RSL acknowledge during a broadcast. Must refer to
                                                                 the block which is physically furthest from MRML (typically DCP). Enumerated by
                                                                 DRO_BLOCKS_E. */
#else /* Word 0 - Little Endian */
        uint64_t ack_ret               : 8;  /**< [  7:  0](R/W) Block number which will return RSL acknowledge during a broadcast. Must refer to
                                                                 the block which is physically furthest from MRML (typically DCP). Enumerated by
                                                                 DRO_BLOCKS_E. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dro_blkx_broadcast_ack_ret_s cn; */
};
typedef union cavm_dro_blkx_broadcast_ack_ret cavm_dro_blkx_broadcast_ack_ret_t;

static inline uint64_t CAVM_DRO_BLKX_BROADCAST_ACK_RET(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DRO_BLKX_BROADCAST_ACK_RET(uint64_t a)
{
    if (a<=9)
        return 0x87e008000040ll + 0x10000ll * ((a) & 0xf);
    __cavm_csr_fatal("DRO_BLKX_BROADCAST_ACK_RET", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DRO_BLKX_BROADCAST_ACK_RET(a) cavm_dro_blkx_broadcast_ack_ret_t
#define bustype_CAVM_DRO_BLKX_BROADCAST_ACK_RET(a) CSR_TYPE_RSL
#define basename_CAVM_DRO_BLKX_BROADCAST_ACK_RET(a) "DRO_BLKX_BROADCAST_ACK_RET"
#define busnum_CAVM_DRO_BLKX_BROADCAST_ACK_RET(a) (a)
#define arguments_CAVM_DRO_BLKX_BROADCAST_ACK_RET(a) (a),-1,-1,-1

/**
 * Register (RSL) dro_blk#_cfg_ctl
 *
 * INTERNAL: DRO Block Configuration Control Registers
 *
 * This register is the configuartion register.
 */
union cavm_dro_blkx_cfg_ctl
{
    uint64_t u;
    struct cavm_dro_blkx_cfg_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t metal_shunt           : 1;  /**< [  3:  3](R/W) When set, remove the metal serpentines in the metal dominated rings. */
        uint64_t gate_shunt            : 3;  /**< [  2:  0](R/W) 0x0 = Disabled.
                                                                 0x1 = No shunt.
                                                                 0x2 = First shunt.
                                                                 0x4 = Second shunt. */
#else /* Word 0 - Little Endian */
        uint64_t gate_shunt            : 3;  /**< [  2:  0](R/W) 0x0 = Disabled.
                                                                 0x1 = No shunt.
                                                                 0x2 = First shunt.
                                                                 0x4 = Second shunt. */
        uint64_t metal_shunt           : 1;  /**< [  3:  3](R/W) When set, remove the metal serpentines in the metal dominated rings. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dro_blkx_cfg_ctl_s cn; */
};
typedef union cavm_dro_blkx_cfg_ctl cavm_dro_blkx_cfg_ctl_t;

static inline uint64_t CAVM_DRO_BLKX_CFG_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DRO_BLKX_CFG_CTL(uint64_t a)
{
    if (a<=9)
        return 0x87e008000018ll + 0x10000ll * ((a) & 0xf);
    __cavm_csr_fatal("DRO_BLKX_CFG_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DRO_BLKX_CFG_CTL(a) cavm_dro_blkx_cfg_ctl_t
#define bustype_CAVM_DRO_BLKX_CFG_CTL(a) CSR_TYPE_RSL
#define basename_CAVM_DRO_BLKX_CFG_CTL(a) "DRO_BLKX_CFG_CTL"
#define busnum_CAVM_DRO_BLKX_CFG_CTL(a) (a)
#define arguments_CAVM_DRO_BLKX_CFG_CTL(a) (a),-1,-1,-1

/**
 * Register (RSL) dro_blk#_const
 *
 * INTERNAL: DRO Block Constants Register
 *
 * This register contains constants for software discovery. Software must use
 * DRO_BLK(0)_CONST[BLOCKS] to discover the number of blocks present (and thus number
 * of index {a}'s present in this register).
 */
union cavm_dro_blkx_const
{
    uint64_t u;
    struct cavm_dro_blkx_const_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_35_63        : 29;
        uint64_t block0_type           : 2;  /**< [ 34: 33](RO) DRO type; 0 = uptom4, 1 = uptom10, 2 = uptom11. */
        uint64_t block1_type           : 2;  /**< [ 32: 31](RO) DRO type; 0 = uptom4, 1 = uptom10, 2 = uptom11. */
        uint64_t block2_type           : 2;  /**< [ 30: 29](RO) DRO type; 0 = uptom4, 1 = uptom10, 2 = uptom11. */
        uint64_t block3_type           : 2;  /**< [ 28: 27](RO) DRO type; 0 = uptom4, 1 = uptom10, 2 = uptom11. */
        uint64_t block4_type           : 2;  /**< [ 26: 25](RO) DRO type; 0 = uptom4, 1 = uptom10, 2 = uptom11. */
        uint64_t block5_type           : 2;  /**< [ 24: 23](RO) DRO type; 0 = uptom4, 1 = uptom10, 2 = uptom11. */
        uint64_t block6_type           : 2;  /**< [ 22: 21](RO) DRO type; 0 = uptom4, 1 = uptom10, 2 = uptom11. */
        uint64_t block7_type           : 2;  /**< [ 20: 19](RO) DRO type; 0 = uptom4, 1 = uptom10, 2 = uptom11. */
        uint64_t block8_type           : 2;  /**< [ 18: 17](RO) DRO type; 0 = uptom4, 1 = uptom10, 2 = uptom11. */
        uint64_t block9_type           : 2;  /**< [ 16: 15](RO) DRO type; 0 = uptom4, 1 = uptom10, 2 = uptom11. */
        uint64_t blocks                : 6;  /**< [ 14:  9](RO) Number of blocks supported. */
        uint64_t rings                 : 9;  /**< [  8:  0](RO) Number of rings supported. */
#else /* Word 0 - Little Endian */
        uint64_t rings                 : 9;  /**< [  8:  0](RO) Number of rings supported. */
        uint64_t blocks                : 6;  /**< [ 14:  9](RO) Number of blocks supported. */
        uint64_t block9_type           : 2;  /**< [ 16: 15](RO) DRO type; 0 = uptom4, 1 = uptom10, 2 = uptom11. */
        uint64_t block8_type           : 2;  /**< [ 18: 17](RO) DRO type; 0 = uptom4, 1 = uptom10, 2 = uptom11. */
        uint64_t block7_type           : 2;  /**< [ 20: 19](RO) DRO type; 0 = uptom4, 1 = uptom10, 2 = uptom11. */
        uint64_t block6_type           : 2;  /**< [ 22: 21](RO) DRO type; 0 = uptom4, 1 = uptom10, 2 = uptom11. */
        uint64_t block5_type           : 2;  /**< [ 24: 23](RO) DRO type; 0 = uptom4, 1 = uptom10, 2 = uptom11. */
        uint64_t block4_type           : 2;  /**< [ 26: 25](RO) DRO type; 0 = uptom4, 1 = uptom10, 2 = uptom11. */
        uint64_t block3_type           : 2;  /**< [ 28: 27](RO) DRO type; 0 = uptom4, 1 = uptom10, 2 = uptom11. */
        uint64_t block2_type           : 2;  /**< [ 30: 29](RO) DRO type; 0 = uptom4, 1 = uptom10, 2 = uptom11. */
        uint64_t block1_type           : 2;  /**< [ 32: 31](RO) DRO type; 0 = uptom4, 1 = uptom10, 2 = uptom11. */
        uint64_t block0_type           : 2;  /**< [ 34: 33](RO) DRO type; 0 = uptom4, 1 = uptom10, 2 = uptom11. */
        uint64_t reserved_35_63        : 29;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dro_blkx_const_s cn; */
};
typedef union cavm_dro_blkx_const cavm_dro_blkx_const_t;

static inline uint64_t CAVM_DRO_BLKX_CONST(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DRO_BLKX_CONST(uint64_t a)
{
    if (a<=9)
        return 0x87e008000000ll + 0x10000ll * ((a) & 0xf);
    __cavm_csr_fatal("DRO_BLKX_CONST", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DRO_BLKX_CONST(a) cavm_dro_blkx_const_t
#define bustype_CAVM_DRO_BLKX_CONST(a) CSR_TYPE_RSL
#define basename_CAVM_DRO_BLKX_CONST(a) "DRO_BLKX_CONST"
#define busnum_CAVM_DRO_BLKX_CONST(a) (a)
#define arguments_CAVM_DRO_BLKX_CONST(a) (a),-1,-1,-1

/**
 * Register (RSL) dro_blk#_eco
 *
 * INTERNAL: DRO Block ECO Register
 */
union cavm_dro_blkx_eco
{
    uint64_t u;
    struct cavm_dro_blkx_eco_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t eco_rw                : 32; /**< [ 31:  0](R/W) Reserved for ECO usage. */
#else /* Word 0 - Little Endian */
        uint64_t eco_rw                : 32; /**< [ 31:  0](R/W) Reserved for ECO usage. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dro_blkx_eco_s cn; */
};
typedef union cavm_dro_blkx_eco cavm_dro_blkx_eco_t;

static inline uint64_t CAVM_DRO_BLKX_ECO(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DRO_BLKX_ECO(uint64_t a)
{
    if (a<=9)
        return 0x87e008000008ll + 0x10000ll * ((a) & 0xf);
    __cavm_csr_fatal("DRO_BLKX_ECO", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DRO_BLKX_ECO(a) cavm_dro_blkx_eco_t
#define bustype_CAVM_DRO_BLKX_ECO(a) CSR_TYPE_RSL
#define basename_CAVM_DRO_BLKX_ECO(a) "DRO_BLKX_ECO"
#define busnum_CAVM_DRO_BLKX_ECO(a) (a)
#define arguments_CAVM_DRO_BLKX_ECO(a) (a),-1,-1,-1

/**
 * Register (RSL) dro_blk#_enable
 *
 * INTERNAL: DRO Block Enable Registers
 *
 * This register controls the start of ring oscillators.
 */
union cavm_dro_blkx_enable
{
    uint64_t u;
    struct cavm_dro_blkx_enable_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t enable                : 1;  /**< [  0:  0](R/W) 0x0 = Disabled.
                                                                 0x1 = Enable long path. */
#else /* Word 0 - Little Endian */
        uint64_t enable                : 1;  /**< [  0:  0](R/W) 0x0 = Disabled.
                                                                 0x1 = Enable long path. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dro_blkx_enable_s cn; */
};
typedef union cavm_dro_blkx_enable cavm_dro_blkx_enable_t;

static inline uint64_t CAVM_DRO_BLKX_ENABLE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DRO_BLKX_ENABLE(uint64_t a)
{
    if (a<=9)
        return 0x87e008000010ll + 0x10000ll * ((a) & 0xf);
    __cavm_csr_fatal("DRO_BLKX_ENABLE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DRO_BLKX_ENABLE(a) cavm_dro_blkx_enable_t
#define bustype_CAVM_DRO_BLKX_ENABLE(a) CSR_TYPE_RSL
#define basename_CAVM_DRO_BLKX_ENABLE(a) "DRO_BLKX_ENABLE"
#define busnum_CAVM_DRO_BLKX_ENABLE(a) (a)
#define arguments_CAVM_DRO_BLKX_ENABLE(a) (a),-1,-1,-1

/**
 * Register (RSL) dro_blk#_error
 *
 * INTERNAL: DRO Block Error Registers
 *
 * This register is the error register.
 */
union cavm_dro_blkx_error
{
    uint64_t u;
    struct cavm_dro_blkx_error_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t cfg_wr_er             : 1;  /**< [  4:  4](R/W1C/H) Config register write error. Set to indicate a write operation was performed on
                                                                 DRO_BLK()_CFG_CTL when enable is set. */
        uint64_t mask_wr_er            : 1;  /**< [  3:  3](R/W1C/H) Mask register write error. Set to indicate a write operation was performed on
                                                                 DRO_BLK()_RG()_MASK when enable is set. */
        uint64_t freeze_counter_rd_er  : 1;  /**< [  2:  2](R/W1C/H) Freeze counter read error. Set to indicate a read operation was performed on the
                                                                 counter when the value was not stable (enable is set and non-frozen). */
        uint64_t freeze_counter_wr_er  : 1;  /**< [  1:  1](R/W1C/H) Freeze counter write error. Set to indicate a write operation was performed on
                                                                 the counter when the value was not stable (enable is set and non-frozen). */
        uint64_t ring_counter_rd_er    : 1;  /**< [  0:  0](R/W1C/H) Ring counter read error. Set to indicate a read of the ring oscillator counter
                                                                 is done when the freeze state isn't complete. */
#else /* Word 0 - Little Endian */
        uint64_t ring_counter_rd_er    : 1;  /**< [  0:  0](R/W1C/H) Ring counter read error. Set to indicate a read of the ring oscillator counter
                                                                 is done when the freeze state isn't complete. */
        uint64_t freeze_counter_wr_er  : 1;  /**< [  1:  1](R/W1C/H) Freeze counter write error. Set to indicate a write operation was performed on
                                                                 the counter when the value was not stable (enable is set and non-frozen). */
        uint64_t freeze_counter_rd_er  : 1;  /**< [  2:  2](R/W1C/H) Freeze counter read error. Set to indicate a read operation was performed on the
                                                                 counter when the value was not stable (enable is set and non-frozen). */
        uint64_t mask_wr_er            : 1;  /**< [  3:  3](R/W1C/H) Mask register write error. Set to indicate a write operation was performed on
                                                                 DRO_BLK()_RG()_MASK when enable is set. */
        uint64_t cfg_wr_er             : 1;  /**< [  4:  4](R/W1C/H) Config register write error. Set to indicate a write operation was performed on
                                                                 DRO_BLK()_CFG_CTL when enable is set. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dro_blkx_error_s cn; */
};
typedef union cavm_dro_blkx_error cavm_dro_blkx_error_t;

static inline uint64_t CAVM_DRO_BLKX_ERROR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DRO_BLKX_ERROR(uint64_t a)
{
    if (a<=9)
        return 0x87e008000020ll + 0x10000ll * ((a) & 0xf);
    __cavm_csr_fatal("DRO_BLKX_ERROR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DRO_BLKX_ERROR(a) cavm_dro_blkx_error_t
#define bustype_CAVM_DRO_BLKX_ERROR(a) CSR_TYPE_RSL
#define basename_CAVM_DRO_BLKX_ERROR(a) "DRO_BLKX_ERROR"
#define busnum_CAVM_DRO_BLKX_ERROR(a) (a)
#define arguments_CAVM_DRO_BLKX_ERROR(a) (a),-1,-1,-1

/**
 * Register (RSL) dro_blk#_force_clk_en
 *
 * INTERNAL: DRO Force Clock Enable Register
 *
 * This register controls the DRO.
 */
union cavm_dro_blkx_force_clk_en
{
    uint64_t u;
    struct cavm_dro_blkx_force_clk_en_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t clk_en                : 1;  /**< [  0:  0](R/W) Forces the conditional clocks on. For diagnostic use only. */
#else /* Word 0 - Little Endian */
        uint64_t clk_en                : 1;  /**< [  0:  0](R/W) Forces the conditional clocks on. For diagnostic use only. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dro_blkx_force_clk_en_s cn; */
};
typedef union cavm_dro_blkx_force_clk_en cavm_dro_blkx_force_clk_en_t;

static inline uint64_t CAVM_DRO_BLKX_FORCE_CLK_EN(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DRO_BLKX_FORCE_CLK_EN(uint64_t a)
{
    if (a<=9)
        return 0x87e008000068ll + 0x10000ll * ((a) & 0xf);
    __cavm_csr_fatal("DRO_BLKX_FORCE_CLK_EN", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DRO_BLKX_FORCE_CLK_EN(a) cavm_dro_blkx_force_clk_en_t
#define bustype_CAVM_DRO_BLKX_FORCE_CLK_EN(a) CSR_TYPE_RSL
#define basename_CAVM_DRO_BLKX_FORCE_CLK_EN(a) "DRO_BLKX_FORCE_CLK_EN"
#define busnum_CAVM_DRO_BLKX_FORCE_CLK_EN(a) (a)
#define arguments_CAVM_DRO_BLKX_FORCE_CLK_EN(a) (a),-1,-1,-1

/**
 * Register (RSL) dro_blk#_freeze
 *
 * INTERNAL: DRO Block Freeze Registers
 */
union cavm_dro_blkx_freeze
{
    uint64_t u;
    struct cavm_dro_blkx_freeze_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t freeze                : 16; /**< [ 15:  0](R/W/H) Number of 10 ns clocks to count before freezing counters.
                                                                 _ [FREEZE]\<0x0, DRO_BLK()_ENABLE[ENABLE]!=0 = RO counter running.
                                                                 _ [FREEZE]=0x0, DRO_BLK()_ENABLE[ENABLE]!=0 = RO counter frozen.
                                                                 _ [FREEZE]\>=0x8000 is unpredictable. */
#else /* Word 0 - Little Endian */
        uint64_t freeze                : 16; /**< [ 15:  0](R/W/H) Number of 10 ns clocks to count before freezing counters.
                                                                 _ [FREEZE]\<0x0, DRO_BLK()_ENABLE[ENABLE]!=0 = RO counter running.
                                                                 _ [FREEZE]=0x0, DRO_BLK()_ENABLE[ENABLE]!=0 = RO counter frozen.
                                                                 _ [FREEZE]\>=0x8000 is unpredictable. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dro_blkx_freeze_s cn; */
};
typedef union cavm_dro_blkx_freeze cavm_dro_blkx_freeze_t;

static inline uint64_t CAVM_DRO_BLKX_FREEZE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DRO_BLKX_FREEZE(uint64_t a)
{
    if (a<=9)
        return 0x87e008000030ll + 0x10000ll * ((a) & 0xf);
    __cavm_csr_fatal("DRO_BLKX_FREEZE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DRO_BLKX_FREEZE(a) cavm_dro_blkx_freeze_t
#define bustype_CAVM_DRO_BLKX_FREEZE(a) CSR_TYPE_RSL
#define basename_CAVM_DRO_BLKX_FREEZE(a) "DRO_BLKX_FREEZE"
#define busnum_CAVM_DRO_BLKX_FREEZE(a) (a)
#define arguments_CAVM_DRO_BLKX_FREEZE(a) (a),-1,-1,-1

/**
 * Register (RSL) dro_blk#_gate_ring_desc
 *
 * INTERNAL: DRO Block Gate Ring Gate Description Register
 *
 * This register lists the type of gates used for each ring in the gate rings used in the DRO.
 */
union cavm_dro_blkx_gate_ring_desc
{
    uint64_t u;
    struct cavm_dro_blkx_gate_ring_desc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_40_63        : 24;
        uint64_t gate_r0_ring19_gate_type : 2;/**< [ 39: 38](RO) GATE type; 0 = INV2 for 210 or INV6 for , 280 1 = INV1 for 210 or INV5 for 280,
                                                                 2 = NAND2, 3 = NOR2. */
        uint64_t gate_ro_ring18_gate_type : 2;/**< [ 37: 36](RO) GATE type; 0 = INV2 for 210 or INV6 for , 280 1 = INV1 for 210 or INV5 for 280,
                                                                 2 = NAND2, 3 = NOR2,. */
        uint64_t gate_ro_ring17_gate_type : 2;/**< [ 35: 34](RO) GATE type; 0 = INV2 for 210 or INV6 for , 280 1 = INV1 for 210 or INV5 for 280,
                                                                 2 = NAND2, 3 = NOR2,. */
        uint64_t gate_ro_ring16_gate_type : 2;/**< [ 33: 32](RO) GATE type; 0 = INV2 for 210 or INV6 for , 280 1 = INV1 for 210 or INV5 for 280,
                                                                 2 = NAND2, 3 = NOR2,. */
        uint64_t gate_ro_ring15_gate_type : 2;/**< [ 31: 30](RO) GATE type; 0 = INV2 for 210 or INV6 for , 280 1 = INV1 for 210 or INV5 for 280,
                                                                 2 = NAND2, 3 = NOR2,. */
        uint64_t gate_ro_ring14_gate_type : 2;/**< [ 29: 28](RO) GATE type; 0 = INV2 for 210 or INV6 for , 280 1 = INV1 for 210 or INV5 for 280,
                                                                 2 = NAND2, 3 = NOR2,. */
        uint64_t gate_ro_ring13_gate_type : 2;/**< [ 27: 26](RO) GATE type; 0 = INV2 for 210 or INV6 for , 280 1 = INV1 for 210 or INV5 for 280,
                                                                 2 = NAND2, 3 = NOR2,. */
        uint64_t gate_ro_ring12_gate_type : 2;/**< [ 25: 24](RO) GATE type; 0 = INV2 for 210 or INV6 for , 280 1 = INV1 for 210 or INV5 for 280,
                                                                 2 = NAND2, 3 = NOR2,. */
        uint64_t gate_ro_ring11_gate_type : 2;/**< [ 23: 22](RO) GATE type; 0 = INV2 for 210 or INV6 for , 280 1 = INV1 for 210 or INV5 for 280,
                                                                 2 = NAND2, 3 = NOR2,. */
        uint64_t gate_ro_ring10_gate_type : 2;/**< [ 21: 20](RO) GATE type; 0 = INV2 for 210 or INV6 for , 280 1 = INV1 for 210 or INV5 for 280,
                                                                 2 = NAND2, 3 = NOR2,. */
        uint64_t gate_ro_ring9_gate_type : 2;/**< [ 19: 18](RO) GATE type; 0 = INV2 for 210 or INV6 for , 280 1 = INV1 for 210 or INV5 for 280,
                                                                 2 = NAND2, 3 = NOR2,. */
        uint64_t gate_ro_ring8_gate_type : 2;/**< [ 17: 16](RO) GATE type; 0 = INV2 for 210 or INV6 for , 280 1 = INV1 for 210 or INV5 for 280,
                                                                 2 = NAND2, 3 = NOR2,. */
        uint64_t gate_ro_ring7_gate_type : 2;/**< [ 15: 14](RO) GATE type; 0 = INV2 for 210 or INV6 for , 280 1 = INV1 for 210 or INV5 for 280,
                                                                 2 = NAND2, 3 = NOR2,. */
        uint64_t gate_ro_ring6_gate_type : 2;/**< [ 13: 12](RO) GATE type; 0 = INV2 for 210 or INV6 for , 280 1 = INV1 for 210 or INV5 for 280,
                                                                 2 = NAND2, 3 = NOR2,. */
        uint64_t gate_ro_ring5_gate_type : 2;/**< [ 11: 10](RO) GATE type; 0 = INV2 for 210 or INV6 for , 280 1 = INV1 for 210 or INV5 for 280,
                                                                 2 = NAND2, 3 = NOR2,. */
        uint64_t gate_ro_ring4_gate_type : 2;/**< [  9:  8](RO) GATE type; 0 = INV2 for 210 or INV6 for , 280 1 = INV1 for 210 or INV5 for 280,
                                                                 2 = NAND2, 3 = NOR2,. */
        uint64_t gate_ro_ring3_gate_type : 2;/**< [  7:  6](RO) GATE type; 0 = INV2 for 210 or INV6 for , 280 1 = INV1 for 210 or INV5 for 280,
                                                                 2 = NAND2, 3 = NOR2,. */
        uint64_t gate_r0_ring2_gate_type : 2;/**< [  5:  4](RO) GATE type; 0 = INV2 for 210 or INV6 for , 280 1 = INV1 for 210 or INV5 for 280,
                                                                 2 = NAND2, 3 = NOR2. */
        uint64_t gate_ro_ring1_gate_type : 2;/**< [  3:  2](RO) GATE type; 0 = INV2 for 210 or INV6 for , 280 1 = INV1 for 210 or INV5 for 280,
                                                                 2 = NAND2, 3 = NOR2. */
        uint64_t gate_ro_ring0_gate_type : 2;/**< [  1:  0](RO) GATE type; 0 = INV2 for 210 or INV6 for , 280 1 = INV1 for 210 or INV5 for 280,
                                                                 2 = NAND2, 3 = NOR2. */
#else /* Word 0 - Little Endian */
        uint64_t gate_ro_ring0_gate_type : 2;/**< [  1:  0](RO) GATE type; 0 = INV2 for 210 or INV6 for , 280 1 = INV1 for 210 or INV5 for 280,
                                                                 2 = NAND2, 3 = NOR2. */
        uint64_t gate_ro_ring1_gate_type : 2;/**< [  3:  2](RO) GATE type; 0 = INV2 for 210 or INV6 for , 280 1 = INV1 for 210 or INV5 for 280,
                                                                 2 = NAND2, 3 = NOR2. */
        uint64_t gate_r0_ring2_gate_type : 2;/**< [  5:  4](RO) GATE type; 0 = INV2 for 210 or INV6 for , 280 1 = INV1 for 210 or INV5 for 280,
                                                                 2 = NAND2, 3 = NOR2. */
        uint64_t gate_ro_ring3_gate_type : 2;/**< [  7:  6](RO) GATE type; 0 = INV2 for 210 or INV6 for , 280 1 = INV1 for 210 or INV5 for 280,
                                                                 2 = NAND2, 3 = NOR2,. */
        uint64_t gate_ro_ring4_gate_type : 2;/**< [  9:  8](RO) GATE type; 0 = INV2 for 210 or INV6 for , 280 1 = INV1 for 210 or INV5 for 280,
                                                                 2 = NAND2, 3 = NOR2,. */
        uint64_t gate_ro_ring5_gate_type : 2;/**< [ 11: 10](RO) GATE type; 0 = INV2 for 210 or INV6 for , 280 1 = INV1 for 210 or INV5 for 280,
                                                                 2 = NAND2, 3 = NOR2,. */
        uint64_t gate_ro_ring6_gate_type : 2;/**< [ 13: 12](RO) GATE type; 0 = INV2 for 210 or INV6 for , 280 1 = INV1 for 210 or INV5 for 280,
                                                                 2 = NAND2, 3 = NOR2,. */
        uint64_t gate_ro_ring7_gate_type : 2;/**< [ 15: 14](RO) GATE type; 0 = INV2 for 210 or INV6 for , 280 1 = INV1 for 210 or INV5 for 280,
                                                                 2 = NAND2, 3 = NOR2,. */
        uint64_t gate_ro_ring8_gate_type : 2;/**< [ 17: 16](RO) GATE type; 0 = INV2 for 210 or INV6 for , 280 1 = INV1 for 210 or INV5 for 280,
                                                                 2 = NAND2, 3 = NOR2,. */
        uint64_t gate_ro_ring9_gate_type : 2;/**< [ 19: 18](RO) GATE type; 0 = INV2 for 210 or INV6 for , 280 1 = INV1 for 210 or INV5 for 280,
                                                                 2 = NAND2, 3 = NOR2,. */
        uint64_t gate_ro_ring10_gate_type : 2;/**< [ 21: 20](RO) GATE type; 0 = INV2 for 210 or INV6 for , 280 1 = INV1 for 210 or INV5 for 280,
                                                                 2 = NAND2, 3 = NOR2,. */
        uint64_t gate_ro_ring11_gate_type : 2;/**< [ 23: 22](RO) GATE type; 0 = INV2 for 210 or INV6 for , 280 1 = INV1 for 210 or INV5 for 280,
                                                                 2 = NAND2, 3 = NOR2,. */
        uint64_t gate_ro_ring12_gate_type : 2;/**< [ 25: 24](RO) GATE type; 0 = INV2 for 210 or INV6 for , 280 1 = INV1 for 210 or INV5 for 280,
                                                                 2 = NAND2, 3 = NOR2,. */
        uint64_t gate_ro_ring13_gate_type : 2;/**< [ 27: 26](RO) GATE type; 0 = INV2 for 210 or INV6 for , 280 1 = INV1 for 210 or INV5 for 280,
                                                                 2 = NAND2, 3 = NOR2,. */
        uint64_t gate_ro_ring14_gate_type : 2;/**< [ 29: 28](RO) GATE type; 0 = INV2 for 210 or INV6 for , 280 1 = INV1 for 210 or INV5 for 280,
                                                                 2 = NAND2, 3 = NOR2,. */
        uint64_t gate_ro_ring15_gate_type : 2;/**< [ 31: 30](RO) GATE type; 0 = INV2 for 210 or INV6 for , 280 1 = INV1 for 210 or INV5 for 280,
                                                                 2 = NAND2, 3 = NOR2,. */
        uint64_t gate_ro_ring16_gate_type : 2;/**< [ 33: 32](RO) GATE type; 0 = INV2 for 210 or INV6 for , 280 1 = INV1 for 210 or INV5 for 280,
                                                                 2 = NAND2, 3 = NOR2,. */
        uint64_t gate_ro_ring17_gate_type : 2;/**< [ 35: 34](RO) GATE type; 0 = INV2 for 210 or INV6 for , 280 1 = INV1 for 210 or INV5 for 280,
                                                                 2 = NAND2, 3 = NOR2,. */
        uint64_t gate_ro_ring18_gate_type : 2;/**< [ 37: 36](RO) GATE type; 0 = INV2 for 210 or INV6 for , 280 1 = INV1 for 210 or INV5 for 280,
                                                                 2 = NAND2, 3 = NOR2,. */
        uint64_t gate_r0_ring19_gate_type : 2;/**< [ 39: 38](RO) GATE type; 0 = INV2 for 210 or INV6 for , 280 1 = INV1 for 210 or INV5 for 280,
                                                                 2 = NAND2, 3 = NOR2. */
        uint64_t reserved_40_63        : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dro_blkx_gate_ring_desc_s cn; */
};
typedef union cavm_dro_blkx_gate_ring_desc cavm_dro_blkx_gate_ring_desc_t;

static inline uint64_t CAVM_DRO_BLKX_GATE_RING_DESC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DRO_BLKX_GATE_RING_DESC(uint64_t a)
{
    if (a<=9)
        return 0x87e008000088ll + 0x10000ll * ((a) & 0xf);
    __cavm_csr_fatal("DRO_BLKX_GATE_RING_DESC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DRO_BLKX_GATE_RING_DESC(a) cavm_dro_blkx_gate_ring_desc_t
#define bustype_CAVM_DRO_BLKX_GATE_RING_DESC(a) CSR_TYPE_RSL
#define basename_CAVM_DRO_BLKX_GATE_RING_DESC(a) "DRO_BLKX_GATE_RING_DESC"
#define busnum_CAVM_DRO_BLKX_GATE_RING_DESC(a) (a)
#define arguments_CAVM_DRO_BLKX_GATE_RING_DESC(a) (a),-1,-1,-1

/**
 * Register (RSL) dro_blk#_gate_ring_vt_desc
 *
 * INTERNAL: DRO Block Gate Ring Gate Description Register
 *
 * This register lists the type of gates used for each ring in the gate rings used in the DRO.
 */
union cavm_dro_blkx_gate_ring_vt_desc
{
    uint64_t u;
    struct cavm_dro_blkx_gate_ring_vt_desc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_60_63        : 4;
        uint64_t gate_r0_ring19_vt     : 3;  /**< [ 59: 57](RO) GATE VT type; 0 = LVT, 1 = LVT_LL, 2 = ULVT-LL, 3 = ULVT, 4 = ELVT. */
        uint64_t gate_ro_ring18_vt     : 3;  /**< [ 56: 54](RO) GATE VT type; 0 = LVT, 1 = LVT_LL, 2 = ULVT-LL, 3 = ULVT, 4 = ELVT. */
        uint64_t gate_ro_ring17_vt     : 3;  /**< [ 53: 51](RO) GATE VT type; 0 = LVT, 1 = LVT_LL, 2 = ULVT-LL, 3 = ULVT, 4 = ELVT. */
        uint64_t gate_ro_ring16_vt     : 3;  /**< [ 50: 48](RO) GATE VT type; 0 = LVT, 1 = LVT_LL, 2 = ULVT-LL, 3 = ULVT, 4 = ELVT. */
        uint64_t gate_ro_ring15_vt     : 3;  /**< [ 47: 45](RO) GATE VT type; 0 = LVT, 1 = LVT_LL, 2 = ULVT-LL, 3 = ULVT, 4 = ELVT. */
        uint64_t gate_ro_ring14_vt     : 3;  /**< [ 44: 42](RO) GATE VT type; 0 = LVT, 1 = LVT_LL, 2 = ULVT-LL, 3 = ULVT, 4 = ELVT. */
        uint64_t gate_ro_ring13_vt     : 3;  /**< [ 41: 39](RO) GATE VT type; 0 = LVT, 1 = LVT_LL, 2 = ULVT-LL, 3 = ULVT, 4 = ELVT. */
        uint64_t gate_ro_ring12_vt     : 3;  /**< [ 38: 36](RO) GATE VT type; 0 = LVT, 1 = LVT_LL, 2 = ULVT-LL, 3 = ULVT, 4 = ELVT. */
        uint64_t gate_ro_ring11_vt     : 3;  /**< [ 35: 33](RO) GATE VT type; 0 = LVT, 1 = LVT_LL, 2 = ULVT-LL, 3 = ULVT, 4 = ELVT. */
        uint64_t gate_ro_ring10_vt     : 3;  /**< [ 32: 30](RO) GATE VT type; 0 = LVT, 1 = LVT_LL, 2 = ULVT-LL, 3 = ULVT, 4 = ELVT. */
        uint64_t gate_ro_ring9_vt      : 3;  /**< [ 29: 27](RO) GATE VT type; 0 = LVT, 1 = LVT_LL, 2 = ULVT-LL, 3 = ULVT, 4 = ELVT. */
        uint64_t gate_ro_ring8_vt      : 3;  /**< [ 26: 24](RO) GATE VT type; 0 = LVT, 1 = LVT_LL, 2 = ULVT-LL, 3 = ULVT, 4 = ELVT. */
        uint64_t gate_ro_ring7_vt      : 3;  /**< [ 23: 21](RO) GATE VT type; 0 = LVT, 1 = LVT_LL, 2 = ULVT-LL, 3 = ULVT, 4 = ELVT. */
        uint64_t gate_ro_ring6_vt      : 3;  /**< [ 20: 18](RO) GATE VT type; 0 = LVT, 1 = LVT_LL, 2 = ULVT-LL, 3 = ULVT, 4 = ELVT. */
        uint64_t gate_ro_ring5_vt      : 3;  /**< [ 17: 15](RO) GATE VT type; 0 = LVT, 1 = LVT_LL, 2 = ULVT-LL, 3 = ULVT, 4 = ELVT. */
        uint64_t gate_ro_ring4_vt      : 3;  /**< [ 14: 12](RO) GATE VT type; 0 = LVT, 1 = LVT_LL, 2 = ULVT-LL, 3 = ULVT, 4 = ELVT. */
        uint64_t gate_ro_ring3_vt      : 3;  /**< [ 11:  9](RO) GATE VT type; 0 = LVT, 1 = LVT_LL, 2 = ULVT-LL, 3 = ULVT, 4 = ELVT. */
        uint64_t gate_r0_ring2_vt      : 3;  /**< [  8:  6](RO) GATE VT type; 0 = LVT, 1 = LVT_LL, 2 = ULVT-LL, 3 = ULVT, 4 = ELVT. */
        uint64_t gate_ro_ring1_vt      : 3;  /**< [  5:  3](RO) GATE VT type; 0 = LVT, 1 = LVT_LL, 2 = ULVT-LL, 3 = ULVT, 4 = ELVT. */
        uint64_t gate_ro_ring0_vt      : 3;  /**< [  2:  0](RO) GATE VT type; 0 = LVT, 1 = LVT_LL, 2 = ULVT-LL, 3 = ULVT, 4 = ELVT. */
#else /* Word 0 - Little Endian */
        uint64_t gate_ro_ring0_vt      : 3;  /**< [  2:  0](RO) GATE VT type; 0 = LVT, 1 = LVT_LL, 2 = ULVT-LL, 3 = ULVT, 4 = ELVT. */
        uint64_t gate_ro_ring1_vt      : 3;  /**< [  5:  3](RO) GATE VT type; 0 = LVT, 1 = LVT_LL, 2 = ULVT-LL, 3 = ULVT, 4 = ELVT. */
        uint64_t gate_r0_ring2_vt      : 3;  /**< [  8:  6](RO) GATE VT type; 0 = LVT, 1 = LVT_LL, 2 = ULVT-LL, 3 = ULVT, 4 = ELVT. */
        uint64_t gate_ro_ring3_vt      : 3;  /**< [ 11:  9](RO) GATE VT type; 0 = LVT, 1 = LVT_LL, 2 = ULVT-LL, 3 = ULVT, 4 = ELVT. */
        uint64_t gate_ro_ring4_vt      : 3;  /**< [ 14: 12](RO) GATE VT type; 0 = LVT, 1 = LVT_LL, 2 = ULVT-LL, 3 = ULVT, 4 = ELVT. */
        uint64_t gate_ro_ring5_vt      : 3;  /**< [ 17: 15](RO) GATE VT type; 0 = LVT, 1 = LVT_LL, 2 = ULVT-LL, 3 = ULVT, 4 = ELVT. */
        uint64_t gate_ro_ring6_vt      : 3;  /**< [ 20: 18](RO) GATE VT type; 0 = LVT, 1 = LVT_LL, 2 = ULVT-LL, 3 = ULVT, 4 = ELVT. */
        uint64_t gate_ro_ring7_vt      : 3;  /**< [ 23: 21](RO) GATE VT type; 0 = LVT, 1 = LVT_LL, 2 = ULVT-LL, 3 = ULVT, 4 = ELVT. */
        uint64_t gate_ro_ring8_vt      : 3;  /**< [ 26: 24](RO) GATE VT type; 0 = LVT, 1 = LVT_LL, 2 = ULVT-LL, 3 = ULVT, 4 = ELVT. */
        uint64_t gate_ro_ring9_vt      : 3;  /**< [ 29: 27](RO) GATE VT type; 0 = LVT, 1 = LVT_LL, 2 = ULVT-LL, 3 = ULVT, 4 = ELVT. */
        uint64_t gate_ro_ring10_vt     : 3;  /**< [ 32: 30](RO) GATE VT type; 0 = LVT, 1 = LVT_LL, 2 = ULVT-LL, 3 = ULVT, 4 = ELVT. */
        uint64_t gate_ro_ring11_vt     : 3;  /**< [ 35: 33](RO) GATE VT type; 0 = LVT, 1 = LVT_LL, 2 = ULVT-LL, 3 = ULVT, 4 = ELVT. */
        uint64_t gate_ro_ring12_vt     : 3;  /**< [ 38: 36](RO) GATE VT type; 0 = LVT, 1 = LVT_LL, 2 = ULVT-LL, 3 = ULVT, 4 = ELVT. */
        uint64_t gate_ro_ring13_vt     : 3;  /**< [ 41: 39](RO) GATE VT type; 0 = LVT, 1 = LVT_LL, 2 = ULVT-LL, 3 = ULVT, 4 = ELVT. */
        uint64_t gate_ro_ring14_vt     : 3;  /**< [ 44: 42](RO) GATE VT type; 0 = LVT, 1 = LVT_LL, 2 = ULVT-LL, 3 = ULVT, 4 = ELVT. */
        uint64_t gate_ro_ring15_vt     : 3;  /**< [ 47: 45](RO) GATE VT type; 0 = LVT, 1 = LVT_LL, 2 = ULVT-LL, 3 = ULVT, 4 = ELVT. */
        uint64_t gate_ro_ring16_vt     : 3;  /**< [ 50: 48](RO) GATE VT type; 0 = LVT, 1 = LVT_LL, 2 = ULVT-LL, 3 = ULVT, 4 = ELVT. */
        uint64_t gate_ro_ring17_vt     : 3;  /**< [ 53: 51](RO) GATE VT type; 0 = LVT, 1 = LVT_LL, 2 = ULVT-LL, 3 = ULVT, 4 = ELVT. */
        uint64_t gate_ro_ring18_vt     : 3;  /**< [ 56: 54](RO) GATE VT type; 0 = LVT, 1 = LVT_LL, 2 = ULVT-LL, 3 = ULVT, 4 = ELVT. */
        uint64_t gate_r0_ring19_vt     : 3;  /**< [ 59: 57](RO) GATE VT type; 0 = LVT, 1 = LVT_LL, 2 = ULVT-LL, 3 = ULVT, 4 = ELVT. */
        uint64_t reserved_60_63        : 4;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dro_blkx_gate_ring_vt_desc_s cn; */
};
typedef union cavm_dro_blkx_gate_ring_vt_desc cavm_dro_blkx_gate_ring_vt_desc_t;

static inline uint64_t CAVM_DRO_BLKX_GATE_RING_VT_DESC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DRO_BLKX_GATE_RING_VT_DESC(uint64_t a)
{
    if (a<=9)
        return 0x87e008000090ll + 0x10000ll * ((a) & 0xf);
    __cavm_csr_fatal("DRO_BLKX_GATE_RING_VT_DESC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DRO_BLKX_GATE_RING_VT_DESC(a) cavm_dro_blkx_gate_ring_vt_desc_t
#define bustype_CAVM_DRO_BLKX_GATE_RING_VT_DESC(a) CSR_TYPE_RSL
#define basename_CAVM_DRO_BLKX_GATE_RING_VT_DESC(a) "DRO_BLKX_GATE_RING_VT_DESC"
#define busnum_CAVM_DRO_BLKX_GATE_RING_VT_DESC(a) (a)
#define arguments_CAVM_DRO_BLKX_GATE_RING_VT_DESC(a) (a),-1,-1,-1

/**
 * Register (RSL) dro_blk#_metal_ring_gate_desc
 *
 * INTERNAL: DRO Block Gate Ring Gate Description Register
 *
 * This register lists the type of gates used for each ring in the metal rings used in
 * the DRO. 0 = INVD12LVT, 1 = INVD16LVT, 2 = INVD36LVT.
 */
union cavm_dro_blkx_metal_ring_gate_desc
{
    uint64_t u;
    struct cavm_dro_blkx_metal_ring_gate_desc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_26_63        : 38;
        uint64_t metal_ro_ring12_type  : 2;  /**< [ 25: 24](RO) Metal RO RING12 GATE type. */
        uint64_t metal_ro_ring11_type  : 2;  /**< [ 23: 22](RO) Metal RO RING11 GATE type. */
        uint64_t metal_ro_ring10_type  : 2;  /**< [ 21: 20](RO) Metal RO RING10 GATE type. */
        uint64_t metal_ro_ring9_type   : 2;  /**< [ 19: 18](RO) Metal RO RING9 GATE type. */
        uint64_t metal_ro_ring8_type   : 2;  /**< [ 17: 16](RO) Metal RO RING8 GATE type. */
        uint64_t metal_ro_ring7_type   : 2;  /**< [ 15: 14](RO) Metal RO RING7 GATE type. */
        uint64_t metal_ro_ring6_type   : 2;  /**< [ 13: 12](RO) Metal RO RING6 GATE type. */
        uint64_t metal_ro_ring5_type   : 2;  /**< [ 11: 10](RO) Metal RO RING5 GATE type. */
        uint64_t metal_ro_ring4_type   : 2;  /**< [  9:  8](RO) Metal RO RING4 GATE type. */
        uint64_t metal_ro_ring3_type   : 2;  /**< [  7:  6](RO) Metal RO RING3 GATE type. */
        uint64_t metal_ro_ring2_type   : 2;  /**< [  5:  4](RO) Metal RO RING2 GATE type. */
        uint64_t metal_ro_ring1_type   : 2;  /**< [  3:  2](RO) Metal RO RING1 GATE type. */
        uint64_t metal_ro_ring0_type   : 2;  /**< [  1:  0](RO) Metal RO RING0 GATE type. */
#else /* Word 0 - Little Endian */
        uint64_t metal_ro_ring0_type   : 2;  /**< [  1:  0](RO) Metal RO RING0 GATE type. */
        uint64_t metal_ro_ring1_type   : 2;  /**< [  3:  2](RO) Metal RO RING1 GATE type. */
        uint64_t metal_ro_ring2_type   : 2;  /**< [  5:  4](RO) Metal RO RING2 GATE type. */
        uint64_t metal_ro_ring3_type   : 2;  /**< [  7:  6](RO) Metal RO RING3 GATE type. */
        uint64_t metal_ro_ring4_type   : 2;  /**< [  9:  8](RO) Metal RO RING4 GATE type. */
        uint64_t metal_ro_ring5_type   : 2;  /**< [ 11: 10](RO) Metal RO RING5 GATE type. */
        uint64_t metal_ro_ring6_type   : 2;  /**< [ 13: 12](RO) Metal RO RING6 GATE type. */
        uint64_t metal_ro_ring7_type   : 2;  /**< [ 15: 14](RO) Metal RO RING7 GATE type. */
        uint64_t metal_ro_ring8_type   : 2;  /**< [ 17: 16](RO) Metal RO RING8 GATE type. */
        uint64_t metal_ro_ring9_type   : 2;  /**< [ 19: 18](RO) Metal RO RING9 GATE type. */
        uint64_t metal_ro_ring10_type  : 2;  /**< [ 21: 20](RO) Metal RO RING10 GATE type. */
        uint64_t metal_ro_ring11_type  : 2;  /**< [ 23: 22](RO) Metal RO RING11 GATE type. */
        uint64_t metal_ro_ring12_type  : 2;  /**< [ 25: 24](RO) Metal RO RING12 GATE type. */
        uint64_t reserved_26_63        : 38;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dro_blkx_metal_ring_gate_desc_s cn; */
};
typedef union cavm_dro_blkx_metal_ring_gate_desc cavm_dro_blkx_metal_ring_gate_desc_t;

static inline uint64_t CAVM_DRO_BLKX_METAL_RING_GATE_DESC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DRO_BLKX_METAL_RING_GATE_DESC(uint64_t a)
{
    if (a<=9)
        return 0x87e008000098ll + 0x10000ll * ((a) & 0xf);
    __cavm_csr_fatal("DRO_BLKX_METAL_RING_GATE_DESC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DRO_BLKX_METAL_RING_GATE_DESC(a) cavm_dro_blkx_metal_ring_gate_desc_t
#define bustype_CAVM_DRO_BLKX_METAL_RING_GATE_DESC(a) CSR_TYPE_RSL
#define basename_CAVM_DRO_BLKX_METAL_RING_GATE_DESC(a) "DRO_BLKX_METAL_RING_GATE_DESC"
#define busnum_CAVM_DRO_BLKX_METAL_RING_GATE_DESC(a) (a)
#define arguments_CAVM_DRO_BLKX_METAL_RING_GATE_DESC(a) (a),-1,-1,-1

/**
 * Register (RSL) dro_blk#_rg#_mask
 *
 * INTERNAL: DRO Block Mask Registers
 */
union cavm_dro_blkx_rgx_mask
{
    uint64_t u;
    struct cavm_dro_blkx_rgx_mask_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t mask                  : 1;  /**< [  0:  0](R/W) DRO mask. Enable individual block or blocks and
                                                                 individual ring oscillator/oscillators within a block.
                                                                 0 = Block(s)/ring(s) disabled.
                                                                 1 = Block(s)/ring(s) enabled. */
#else /* Word 0 - Little Endian */
        uint64_t mask                  : 1;  /**< [  0:  0](R/W) DRO mask. Enable individual block or blocks and
                                                                 individual ring oscillator/oscillators within a block.
                                                                 0 = Block(s)/ring(s) disabled.
                                                                 1 = Block(s)/ring(s) enabled. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dro_blkx_rgx_mask_s cn; */
};
typedef union cavm_dro_blkx_rgx_mask cavm_dro_blkx_rgx_mask_t;

static inline uint64_t CAVM_DRO_BLKX_RGX_MASK(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DRO_BLKX_RGX_MASK(uint64_t a, uint64_t b)
{
    if ((a<=9) && (b<=39))
        return 0x87e008000028ll + 0x10000ll * ((a) & 0xf) + 0x100ll * ((b) & 0x3f);
    __cavm_csr_fatal("DRO_BLKX_RGX_MASK", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DRO_BLKX_RGX_MASK(a,b) cavm_dro_blkx_rgx_mask_t
#define bustype_CAVM_DRO_BLKX_RGX_MASK(a,b) CSR_TYPE_RSL
#define basename_CAVM_DRO_BLKX_RGX_MASK(a,b) "DRO_BLKX_RGX_MASK"
#define busnum_CAVM_DRO_BLKX_RGX_MASK(a,b) (a)
#define arguments_CAVM_DRO_BLKX_RGX_MASK(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dro_blk#_rg#_read
 *
 * INTERNAL: DRO Block Ring Counter Registers
 */
union cavm_dro_blkx_rgx_read
{
    uint64_t u;
    struct cavm_dro_blkx_rgx_read_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_21_63        : 43;
        uint64_t count_ovflow          : 1;  /**< [ 20: 20](RO/H) Count overflowed. Count value left at maximum value. */
        uint64_t count                 : 20; /**< [ 19:  0](RO/H) Count of number of ring loops completed within the freeze interval. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 20; /**< [ 19:  0](RO/H) Count of number of ring loops completed within the freeze interval. */
        uint64_t count_ovflow          : 1;  /**< [ 20: 20](RO/H) Count overflowed. Count value left at maximum value. */
        uint64_t reserved_21_63        : 43;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dro_blkx_rgx_read_s cn; */
};
typedef union cavm_dro_blkx_rgx_read cavm_dro_blkx_rgx_read_t;

static inline uint64_t CAVM_DRO_BLKX_RGX_READ(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DRO_BLKX_RGX_READ(uint64_t a, uint64_t b)
{
    if ((a<=9) && (b<=39))
        return 0x87e008000038ll + 0x10000ll * ((a) & 0xf) + 0x100ll * ((b) & 0x3f);
    __cavm_csr_fatal("DRO_BLKX_RGX_READ", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DRO_BLKX_RGX_READ(a,b) cavm_dro_blkx_rgx_read_t
#define bustype_CAVM_DRO_BLKX_RGX_READ(a,b) CSR_TYPE_RSL
#define basename_CAVM_DRO_BLKX_RGX_READ(a,b) "DRO_BLKX_RGX_READ"
#define busnum_CAVM_DRO_BLKX_RGX_READ(a,b) (a)
#define arguments_CAVM_DRO_BLKX_RGX_READ(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dro_blk#_uptom14_desc
 *
 * INTERNAL: DRO Block UPTOM10 Description Register
 *
 * uptom10 description.
 */
union cavm_dro_blkx_uptom14_desc
{
    uint64_t u;
    struct cavm_dro_blkx_uptom14_desc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_28_63        : 36;
        uint64_t gate_ro_num_gates     : 8;  /**< [ 27: 20](RO) Number of cells in the gate ro. */
        uint64_t metal_ro_num_gates    : 8;  /**< [ 19: 12](RO) Number of cells in the metal ro. */
        uint64_t gate_ro_count         : 6;  /**< [ 11:  6](RO) number of gate dros. */
        uint64_t metal_ro_count        : 6;  /**< [  5:  0](RO) number of metal dros. */
#else /* Word 0 - Little Endian */
        uint64_t metal_ro_count        : 6;  /**< [  5:  0](RO) number of metal dros. */
        uint64_t gate_ro_count         : 6;  /**< [ 11:  6](RO) number of gate dros. */
        uint64_t metal_ro_num_gates    : 8;  /**< [ 19: 12](RO) Number of cells in the metal ro. */
        uint64_t gate_ro_num_gates     : 8;  /**< [ 27: 20](RO) Number of cells in the gate ro. */
        uint64_t reserved_28_63        : 36;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dro_blkx_uptom14_desc_s cn; */
};
typedef union cavm_dro_blkx_uptom14_desc cavm_dro_blkx_uptom14_desc_t;

static inline uint64_t CAVM_DRO_BLKX_UPTOM14_DESC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DRO_BLKX_UPTOM14_DESC(uint64_t a)
{
    if (a<=9)
        return 0x87e008000080ll + 0x10000ll * ((a) & 0xf);
    __cavm_csr_fatal("DRO_BLKX_UPTOM14_DESC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DRO_BLKX_UPTOM14_DESC(a) cavm_dro_blkx_uptom14_desc_t
#define bustype_CAVM_DRO_BLKX_UPTOM14_DESC(a) CSR_TYPE_RSL
#define basename_CAVM_DRO_BLKX_UPTOM14_DESC(a) "DRO_BLKX_UPTOM14_DESC"
#define busnum_CAVM_DRO_BLKX_UPTOM14_DESC(a) (a)
#define arguments_CAVM_DRO_BLKX_UPTOM14_DESC(a) (a),-1,-1,-1

/**
 * Register (RSL) dro_blk#_uptom4_desc
 *
 * INTERNAL: DRO Block UPTOM4 Description Register
 *
 * uptom4 description.
 */
union cavm_dro_blkx_uptom4_desc
{
    uint64_t u;
    struct cavm_dro_blkx_uptom4_desc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_28_63        : 36;
        uint64_t gate_ro_num_gates     : 8;  /**< [ 27: 20](RO) Number of cells in the gate ro. */
        uint64_t metal_ro_num_gates    : 8;  /**< [ 19: 12](RO) Number of cells in the metal ro. */
        uint64_t gate_ro_count         : 6;  /**< [ 11:  6](RO) Number of gate dros. */
        uint64_t metal_ro_count        : 6;  /**< [  5:  0](RO) Number of metal dros. */
#else /* Word 0 - Little Endian */
        uint64_t metal_ro_count        : 6;  /**< [  5:  0](RO) Number of metal dros. */
        uint64_t gate_ro_count         : 6;  /**< [ 11:  6](RO) Number of gate dros. */
        uint64_t metal_ro_num_gates    : 8;  /**< [ 19: 12](RO) Number of cells in the metal ro. */
        uint64_t gate_ro_num_gates     : 8;  /**< [ 27: 20](RO) Number of cells in the gate ro. */
        uint64_t reserved_28_63        : 36;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dro_blkx_uptom4_desc_s cn; */
};
typedef union cavm_dro_blkx_uptom4_desc cavm_dro_blkx_uptom4_desc_t;

static inline uint64_t CAVM_DRO_BLKX_UPTOM4_DESC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DRO_BLKX_UPTOM4_DESC(uint64_t a)
{
    if (a<=9)
        return 0x87e008000078ll + 0x10000ll * ((a) & 0xf);
    __cavm_csr_fatal("DRO_BLKX_UPTOM4_DESC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DRO_BLKX_UPTOM4_DESC(a) cavm_dro_blkx_uptom4_desc_t
#define bustype_CAVM_DRO_BLKX_UPTOM4_DESC(a) CSR_TYPE_RSL
#define basename_CAVM_DRO_BLKX_UPTOM4_DESC(a) "DRO_BLKX_UPTOM4_DESC"
#define busnum_CAVM_DRO_BLKX_UPTOM4_DESC(a) (a)
#define arguments_CAVM_DRO_BLKX_UPTOM4_DESC(a) (a),-1,-1,-1

/**
 * Register (RSL) dro_blk#_vdr_const
 *
 * INTERNAL: DRO Block VDR Constants Register
 *
 * This register contains info there a DRO has present or global feedback.Bit
 *     \<{a}\> corresponds to DRO BLK (\<a\>}. Bits enumerated by DRO_BLOCKS_E.
 */
union cavm_dro_blkx_vdr_const
{
    uint64_t u;
    struct cavm_dro_blkx_vdr_const_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t present               : 32; /**< [ 63: 32](RO) If set, that corresponding DRO BLK has a voltage droop detector present. Bit
                                                                 \<{a}\> corresponds to DRO BLK (\<a\>}. Bits enumerated by DRO_BLOCKS_E. */
        uint64_t dglobal               : 32; /**< [ 31:  0](RO) If set, that corresponding DRO BLK has a voltage droop detector with global
                                                                 feedback. Bit \<{a}\> corresponds to DRO BLK (\<a\>}. Bits enumerated by
                                                                 DRO_BLOCKS_E. */
#else /* Word 0 - Little Endian */
        uint64_t dglobal               : 32; /**< [ 31:  0](RO) If set, that corresponding DRO BLK has a voltage droop detector with global
                                                                 feedback. Bit \<{a}\> corresponds to DRO BLK (\<a\>}. Bits enumerated by
                                                                 DRO_BLOCKS_E. */
        uint64_t present               : 32; /**< [ 63: 32](RO) If set, that corresponding DRO BLK has a voltage droop detector present. Bit
                                                                 \<{a}\> corresponds to DRO BLK (\<a\>}. Bits enumerated by DRO_BLOCKS_E. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dro_blkx_vdr_const_s cn; */
};
typedef union cavm_dro_blkx_vdr_const cavm_dro_blkx_vdr_const_t;

static inline uint64_t CAVM_DRO_BLKX_VDR_CONST(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DRO_BLKX_VDR_CONST(uint64_t a)
{
    if (a<=9)
        return 0x87e008000070ll + 0x10000ll * ((a) & 0xf);
    __cavm_csr_fatal("DRO_BLKX_VDR_CONST", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DRO_BLKX_VDR_CONST(a) cavm_dro_blkx_vdr_const_t
#define bustype_CAVM_DRO_BLKX_VDR_CONST(a) CSR_TYPE_RSL
#define basename_CAVM_DRO_BLKX_VDR_CONST(a) "DRO_BLKX_VDR_CONST"
#define busnum_CAVM_DRO_BLKX_VDR_CONST(a) (a)
#define arguments_CAVM_DRO_BLKX_VDR_CONST(a) (a),-1,-1,-1

/**
 * Register (RSL) dro_blk#_vdroop_ctl
 *
 * INTERNAL: DRO Block Voltage Droop Detector Control Register
 *
 * This register controls the voltage droop detector in the DROs if available.
 * For diagnostic use only.
 */
union cavm_dro_blkx_vdroop_ctl
{
    uint64_t u;
    struct cavm_dro_blkx_vdroop_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t enable                : 1;  /**< [ 63: 63](R/W) Enable voltage droop detection. */
        uint64_t reserved_4_62         : 59;
        uint64_t vref_sel              : 4;  /**< [  3:  0](R/W) Reference voltage setting. */
#else /* Word 0 - Little Endian */
        uint64_t vref_sel              : 4;  /**< [  3:  0](R/W) Reference voltage setting. */
        uint64_t reserved_4_62         : 59;
        uint64_t enable                : 1;  /**< [ 63: 63](R/W) Enable voltage droop detection. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dro_blkx_vdroop_ctl_s cn; */
};
typedef union cavm_dro_blkx_vdroop_ctl cavm_dro_blkx_vdroop_ctl_t;

static inline uint64_t CAVM_DRO_BLKX_VDROOP_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DRO_BLKX_VDROOP_CTL(uint64_t a)
{
    if (a<=9)
        return 0x87e008000048ll + 0x10000ll * ((a) & 0xf);
    __cavm_csr_fatal("DRO_BLKX_VDROOP_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DRO_BLKX_VDROOP_CTL(a) cavm_dro_blkx_vdroop_ctl_t
#define bustype_CAVM_DRO_BLKX_VDROOP_CTL(a) CSR_TYPE_RSL
#define basename_CAVM_DRO_BLKX_VDROOP_CTL(a) "DRO_BLKX_VDROOP_CTL"
#define busnum_CAVM_DRO_BLKX_VDROOP_CTL(a) (a)
#define arguments_CAVM_DRO_BLKX_VDROOP_CTL(a) (a),-1,-1,-1

/**
 * Register (RSL) dro_blk#_vdroop_local_cnt
 *
 * INTERNAL: DRO Block Voltage Droop Local Counter Register
 *
 * For diagnostic use only.
 */
union cavm_dro_blkx_vdroop_local_cnt
{
    uint64_t u;
    struct cavm_dro_blkx_vdroop_local_cnt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t count                 : 16; /**< [ 15:  0](RO/H) Voltage droop detector local counter, count of the rising edges of the droop detector. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 16; /**< [ 15:  0](RO/H) Voltage droop detector local counter, count of the rising edges of the droop detector. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dro_blkx_vdroop_local_cnt_s cn; */
};
typedef union cavm_dro_blkx_vdroop_local_cnt cavm_dro_blkx_vdroop_local_cnt_t;

static inline uint64_t CAVM_DRO_BLKX_VDROOP_LOCAL_CNT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DRO_BLKX_VDROOP_LOCAL_CNT(uint64_t a)
{
    if (a<=9)
        return 0x87e008000060ll + 0x10000ll * ((a) & 0xf);
    __cavm_csr_fatal("DRO_BLKX_VDROOP_LOCAL_CNT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DRO_BLKX_VDROOP_LOCAL_CNT(a) cavm_dro_blkx_vdroop_local_cnt_t
#define bustype_CAVM_DRO_BLKX_VDROOP_LOCAL_CNT(a) CSR_TYPE_RSL
#define basename_CAVM_DRO_BLKX_VDROOP_LOCAL_CNT(a) "DRO_BLKX_VDROOP_LOCAL_CNT"
#define busnum_CAVM_DRO_BLKX_VDROOP_LOCAL_CNT(a) (a)
#define arguments_CAVM_DRO_BLKX_VDROOP_LOCAL_CNT(a) (a),-1,-1,-1

/**
 * Register (RSL) dro_blk#_vdroop_obs
 *
 * INTERNAL: DRO Block Voltage Droop Detector Observation Register
 *
 * This register observes the voltage droop detector in the DROs if available.
 * For diagnostic use only.
 */
union cavm_dro_blkx_vdroop_obs
{
    uint64_t u;
    struct cavm_dro_blkx_vdroop_obs_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t event_count           : 16; /**< [ 31: 16](R/W/H) Count of voltage droop events. */
        uint64_t reserved_3_15         : 13;
        uint64_t ddet                  : 1;  /**< [  2:  2](RO/H) Voltage droop detected. */
        uint64_t dglobal               : 1;  /**< [  1:  1](RO/H) Enable this voltage droop detector to participate in global droop mitigation logic. */
        uint64_t present               : 1;  /**< [  0:  0](RO/H) Voltage droop detector present. */
#else /* Word 0 - Little Endian */
        uint64_t present               : 1;  /**< [  0:  0](RO/H) Voltage droop detector present. */
        uint64_t dglobal               : 1;  /**< [  1:  1](RO/H) Enable this voltage droop detector to participate in global droop mitigation logic. */
        uint64_t ddet                  : 1;  /**< [  2:  2](RO/H) Voltage droop detected. */
        uint64_t reserved_3_15         : 13;
        uint64_t event_count           : 16; /**< [ 31: 16](R/W/H) Count of voltage droop events. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dro_blkx_vdroop_obs_s cn; */
};
typedef union cavm_dro_blkx_vdroop_obs cavm_dro_blkx_vdroop_obs_t;

static inline uint64_t CAVM_DRO_BLKX_VDROOP_OBS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DRO_BLKX_VDROOP_OBS(uint64_t a)
{
    if (a<=9)
        return 0x87e008000050ll + 0x10000ll * ((a) & 0xf);
    __cavm_csr_fatal("DRO_BLKX_VDROOP_OBS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DRO_BLKX_VDROOP_OBS(a) cavm_dro_blkx_vdroop_obs_t
#define bustype_CAVM_DRO_BLKX_VDROOP_OBS(a) CSR_TYPE_RSL
#define basename_CAVM_DRO_BLKX_VDROOP_OBS(a) "DRO_BLKX_VDROOP_OBS"
#define busnum_CAVM_DRO_BLKX_VDROOP_OBS(a) (a)
#define arguments_CAVM_DRO_BLKX_VDROOP_OBS(a) (a),-1,-1,-1

/**
 * Register (RSL) dro_blk#_vdroop_rst
 *
 * INTERNAL: DRO Block Voltage Droop Detector Reset Register
 *
 * This register controls the droop detector. For diagnostic use only.
 */
union cavm_dro_blkx_vdroop_rst
{
    uint64_t u;
    struct cavm_dro_blkx_vdroop_rst_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_10_63        : 54;
        uint64_t rst                   : 10; /**< [  9:  0](R/W) Voltage droop detector reset. The value of the count down value. Once the 10 bit
                                                                 counter value reaches zero it triggers the reset of the droop detector. */
#else /* Word 0 - Little Endian */
        uint64_t rst                   : 10; /**< [  9:  0](R/W) Voltage droop detector reset. The value of the count down value. Once the 10 bit
                                                                 counter value reaches zero it triggers the reset of the droop detector. */
        uint64_t reserved_10_63        : 54;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dro_blkx_vdroop_rst_s cn; */
};
typedef union cavm_dro_blkx_vdroop_rst cavm_dro_blkx_vdroop_rst_t;

static inline uint64_t CAVM_DRO_BLKX_VDROOP_RST(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DRO_BLKX_VDROOP_RST(uint64_t a)
{
    if (a<=9)
        return 0x87e008000058ll + 0x10000ll * ((a) & 0xf);
    __cavm_csr_fatal("DRO_BLKX_VDROOP_RST", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DRO_BLKX_VDROOP_RST(a) cavm_dro_blkx_vdroop_rst_t
#define bustype_CAVM_DRO_BLKX_VDROOP_RST(a) CSR_TYPE_RSL
#define basename_CAVM_DRO_BLKX_VDROOP_RST(a) "DRO_BLKX_VDROOP_RST"
#define busnum_CAVM_DRO_BLKX_VDROOP_RST(a) (a)
#define arguments_CAVM_DRO_BLKX_VDROOP_RST(a) (a),-1,-1,-1

#endif /* __CAVM_CSRS_DRO_H__ */
