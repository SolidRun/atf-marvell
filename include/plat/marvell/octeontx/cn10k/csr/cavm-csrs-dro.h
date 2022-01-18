#ifndef __CAVM_CSRS_DRO_H__
#define __CAVM_CSRS_DRO_H__
/* This file is auto-generated. Do not edit */

/***********************license start***********************************
* Copyright (C) 2020-2022 Marvell
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
 * Enumeration dro_bar_e
 *
 * DRO Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define CAVM_DRO_BAR_E_DROX_PF_BAR0(a) (0x87e180000000ll + 0x1000000ll * (a))
#define CAVM_DRO_BAR_E_DROX_PF_BAR0_SIZE 0x1000000ull

/**
 * Register (RSL) dro#_blk_broadcast_ack_ret
 *
 * INTERNAL: DRO Block Broadcast Ack Return Register
 *
 * This register determines which DRO will return the ack back to RSL during a broadcast.
 */
union cavm_drox_blk_broadcast_ack_ret
{
    uint64_t u;
    struct cavm_drox_blk_broadcast_ack_ret_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t ack_ret               : 6;  /**< [  5:  0](R/W) Block number which will return RSL acknowledge during a broadcast. Must refer to
                                                                 the block which is physically furthest from MRML (typically DCP). Enumerated by
                                                                 DRO_BLOCKS_E. */
#else /* Word 0 - Little Endian */
        uint64_t ack_ret               : 6;  /**< [  5:  0](R/W) Block number which will return RSL acknowledge during a broadcast. Must refer to
                                                                 the block which is physically furthest from MRML (typically DCP). Enumerated by
                                                                 DRO_BLOCKS_E. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_drox_blk_broadcast_ack_ret_s cn; */
};
typedef union cavm_drox_blk_broadcast_ack_ret cavm_drox_blk_broadcast_ack_ret_t;

static inline uint64_t CAVM_DROX_BLK_BROADCAST_ACK_RET(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DROX_BLK_BROADCAST_ACK_RET(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=29) || (a==63)))
        return 0x87e180000040ll + 0x1000000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=21) || ((a>=36)&&(a<=52)) || (a==63)))
        return 0x87e180000040ll + 0x1000000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=11) || ((a>=18)&&(a<=21)) || ((a>=22)&&(a<=42)) || (a==63)))
        return 0x87e180000040ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DROX_BLK_BROADCAST_ACK_RET", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DROX_BLK_BROADCAST_ACK_RET(a) cavm_drox_blk_broadcast_ack_ret_t
#define bustype_CAVM_DROX_BLK_BROADCAST_ACK_RET(a) CSR_TYPE_RSL
#define basename_CAVM_DROX_BLK_BROADCAST_ACK_RET(a) "DROX_BLK_BROADCAST_ACK_RET"
#define device_bar_CAVM_DROX_BLK_BROADCAST_ACK_RET(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DROX_BLK_BROADCAST_ACK_RET(a) (a)
#define arguments_CAVM_DROX_BLK_BROADCAST_ACK_RET(a) (a),-1,-1,-1

/**
 * Register (RSL) dro#_blk_ce_ip_desc
 *
 * INTERNAL: DRO Block CE IP Description Register
 *
 * uptom14 description.
 */
union cavm_drox_blk_ce_ip_desc
{
    uint64_t u;
    struct cavm_drox_blk_ce_ip_desc_s
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
    /* struct cavm_drox_blk_ce_ip_desc_s cn; */
};
typedef union cavm_drox_blk_ce_ip_desc cavm_drox_blk_ce_ip_desc_t;

static inline uint64_t CAVM_DROX_BLK_CE_IP_DESC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DROX_BLK_CE_IP_DESC(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=29) || (a==63)))
        return 0x87e180000090ll + 0x1000000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=21) || ((a>=36)&&(a<=52)) || (a==63)))
        return 0x87e180000090ll + 0x1000000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=11) || ((a>=18)&&(a<=21)) || ((a>=22)&&(a<=42)) || (a==63)))
        return 0x87e180000090ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DROX_BLK_CE_IP_DESC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DROX_BLK_CE_IP_DESC(a) cavm_drox_blk_ce_ip_desc_t
#define bustype_CAVM_DROX_BLK_CE_IP_DESC(a) CSR_TYPE_RSL
#define basename_CAVM_DROX_BLK_CE_IP_DESC(a) "DROX_BLK_CE_IP_DESC"
#define device_bar_CAVM_DROX_BLK_CE_IP_DESC(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DROX_BLK_CE_IP_DESC(a) (a)
#define arguments_CAVM_DROX_BLK_CE_IP_DESC(a) (a),-1,-1,-1

/**
 * Register (RSL) dro#_blk_cfg_ctl
 *
 * INTERNAL: DRO Block Configuration Control Registers
 *
 * This register is the configuartion register.
 */
union cavm_drox_blk_cfg_ctl
{
    uint64_t u;
    struct cavm_drox_blk_cfg_ctl_s
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
    /* struct cavm_drox_blk_cfg_ctl_s cn; */
};
typedef union cavm_drox_blk_cfg_ctl cavm_drox_blk_cfg_ctl_t;

static inline uint64_t CAVM_DROX_BLK_CFG_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DROX_BLK_CFG_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=29) || (a==63)))
        return 0x87e180000018ll + 0x1000000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=21) || ((a>=36)&&(a<=52)) || (a==63)))
        return 0x87e180000018ll + 0x1000000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=11) || ((a>=18)&&(a<=21)) || ((a>=22)&&(a<=42)) || (a==63)))
        return 0x87e180000018ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DROX_BLK_CFG_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DROX_BLK_CFG_CTL(a) cavm_drox_blk_cfg_ctl_t
#define bustype_CAVM_DROX_BLK_CFG_CTL(a) CSR_TYPE_RSL
#define basename_CAVM_DROX_BLK_CFG_CTL(a) "DROX_BLK_CFG_CTL"
#define device_bar_CAVM_DROX_BLK_CFG_CTL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DROX_BLK_CFG_CTL(a) (a)
#define arguments_CAVM_DROX_BLK_CFG_CTL(a) (a),-1,-1,-1

/**
 * Register (RSL) dro#_blk_const
 *
 * INTERNAL: DRO Block Constants Register
 *
 * This register contains constants for software discovery. Software must use
 * DROX_BLK_CONST[BLOCKS] to discover the number of blocks present (and thus number
 * of index {a}'s present in this register).
 */
union cavm_drox_blk_const
{
    uint64_t u;
    struct cavm_drox_blk_const_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_18_63        : 46;
        uint64_t block_type            : 2;  /**< [ 17: 16](RO) DRO type; 0 = gate RO and metal RO up to metal 4,
                                                                           1 = lib 280 gate RO and metal RO up to metal 4,
                                                                           2 = gate RO and metal RO upto metal 14,
                                                                           3 = Central Engineering DRO. */
        uint64_t blocks                : 8;  /**< [ 15:  8](RO) Max number of blocks supported. */
        uint64_t rings                 : 8;  /**< [  7:  0](RO) Max number of rings supported. */
#else /* Word 0 - Little Endian */
        uint64_t rings                 : 8;  /**< [  7:  0](RO) Max number of rings supported. */
        uint64_t blocks                : 8;  /**< [ 15:  8](RO) Max number of blocks supported. */
        uint64_t block_type            : 2;  /**< [ 17: 16](RO) DRO type; 0 = gate RO and metal RO up to metal 4,
                                                                           1 = lib 280 gate RO and metal RO up to metal 4,
                                                                           2 = gate RO and metal RO upto metal 14,
                                                                           3 = Central Engineering DRO. */
        uint64_t reserved_18_63        : 46;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_drox_blk_const_s cn; */
};
typedef union cavm_drox_blk_const cavm_drox_blk_const_t;

static inline uint64_t CAVM_DROX_BLK_CONST(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DROX_BLK_CONST(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=29) || (a==63)))
        return 0x87e180000000ll + 0x1000000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=21) || ((a>=36)&&(a<=52)) || (a==63)))
        return 0x87e180000000ll + 0x1000000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=11) || ((a>=18)&&(a<=21)) || ((a>=22)&&(a<=42)) || (a==63)))
        return 0x87e180000000ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DROX_BLK_CONST", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DROX_BLK_CONST(a) cavm_drox_blk_const_t
#define bustype_CAVM_DROX_BLK_CONST(a) CSR_TYPE_RSL
#define basename_CAVM_DROX_BLK_CONST(a) "DROX_BLK_CONST"
#define device_bar_CAVM_DROX_BLK_CONST(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DROX_BLK_CONST(a) (a)
#define arguments_CAVM_DROX_BLK_CONST(a) (a),-1,-1,-1

/**
 * Register (RSL) dro#_blk_eco
 *
 * INTERNAL: DRO Block ECO Register
 */
union cavm_drox_blk_eco
{
    uint64_t u;
    struct cavm_drox_blk_eco_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t eco_rw                : 32; /**< [ 31:  0](R/W) Reserved for ECO usage. */
#else /* Word 0 - Little Endian */
        uint64_t eco_rw                : 32; /**< [ 31:  0](R/W) Reserved for ECO usage. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_drox_blk_eco_s cn; */
};
typedef union cavm_drox_blk_eco cavm_drox_blk_eco_t;

static inline uint64_t CAVM_DROX_BLK_ECO(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DROX_BLK_ECO(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=29) || (a==63)))
        return 0x87e180000008ll + 0x1000000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=21) || ((a>=36)&&(a<=52)) || (a==63)))
        return 0x87e180000008ll + 0x1000000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=11) || ((a>=18)&&(a<=21)) || ((a>=22)&&(a<=42)) || (a==63)))
        return 0x87e180000008ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DROX_BLK_ECO", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DROX_BLK_ECO(a) cavm_drox_blk_eco_t
#define bustype_CAVM_DROX_BLK_ECO(a) CSR_TYPE_RSL
#define basename_CAVM_DROX_BLK_ECO(a) "DROX_BLK_ECO"
#define device_bar_CAVM_DROX_BLK_ECO(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DROX_BLK_ECO(a) (a)
#define arguments_CAVM_DROX_BLK_ECO(a) (a),-1,-1,-1

/**
 * Register (RSL) dro#_blk_enable
 *
 * INTERNAL: DRO Block Enable Registers
 *
 * This register controls the start of ring oscillators.
 */
union cavm_drox_blk_enable
{
    uint64_t u;
    struct cavm_drox_blk_enable_s
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
    /* struct cavm_drox_blk_enable_s cn; */
};
typedef union cavm_drox_blk_enable cavm_drox_blk_enable_t;

static inline uint64_t CAVM_DROX_BLK_ENABLE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DROX_BLK_ENABLE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=29) || (a==63)))
        return 0x87e180000010ll + 0x1000000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=21) || ((a>=36)&&(a<=52)) || (a==63)))
        return 0x87e180000010ll + 0x1000000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=11) || ((a>=18)&&(a<=21)) || ((a>=22)&&(a<=42)) || (a==63)))
        return 0x87e180000010ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DROX_BLK_ENABLE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DROX_BLK_ENABLE(a) cavm_drox_blk_enable_t
#define bustype_CAVM_DROX_BLK_ENABLE(a) CSR_TYPE_RSL
#define basename_CAVM_DROX_BLK_ENABLE(a) "DROX_BLK_ENABLE"
#define device_bar_CAVM_DROX_BLK_ENABLE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DROX_BLK_ENABLE(a) (a)
#define arguments_CAVM_DROX_BLK_ENABLE(a) (a),-1,-1,-1

/**
 * Register (RSL) dro#_blk_error
 *
 * INTERNAL: DRO Block Error Registers
 *
 * This register is the error register.
 */
union cavm_drox_blk_error
{
    uint64_t u;
    struct cavm_drox_blk_error_s
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
    /* struct cavm_drox_blk_error_s cn; */
};
typedef union cavm_drox_blk_error cavm_drox_blk_error_t;

static inline uint64_t CAVM_DROX_BLK_ERROR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DROX_BLK_ERROR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=29) || (a==63)))
        return 0x87e180000020ll + 0x1000000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=21) || ((a>=36)&&(a<=52)) || (a==63)))
        return 0x87e180000020ll + 0x1000000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=11) || ((a>=18)&&(a<=21)) || ((a>=22)&&(a<=42)) || (a==63)))
        return 0x87e180000020ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DROX_BLK_ERROR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DROX_BLK_ERROR(a) cavm_drox_blk_error_t
#define bustype_CAVM_DROX_BLK_ERROR(a) CSR_TYPE_RSL
#define basename_CAVM_DROX_BLK_ERROR(a) "DROX_BLK_ERROR"
#define device_bar_CAVM_DROX_BLK_ERROR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DROX_BLK_ERROR(a) (a)
#define arguments_CAVM_DROX_BLK_ERROR(a) (a),-1,-1,-1

/**
 * Register (RSL) dro#_blk_force_clk_en
 *
 * INTERNAL: DRO Force Clock Enable Register
 *
 * This register controls the DRO.
 */
union cavm_drox_blk_force_clk_en
{
    uint64_t u;
    struct cavm_drox_blk_force_clk_en_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t clk_en                : 1;  /**< [  0:  0](R/W) Forces the conditional clocks on. For diagnostic use only. */
#else /* Word 0 - Little Endian */
        uint64_t clk_en                : 1;  /**< [  0:  0](R/W) Forces the conditional clocks on. For diagnostic use only. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_drox_blk_force_clk_en_s cn; */
};
typedef union cavm_drox_blk_force_clk_en cavm_drox_blk_force_clk_en_t;

static inline uint64_t CAVM_DROX_BLK_FORCE_CLK_EN(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DROX_BLK_FORCE_CLK_EN(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=29) || (a==63)))
        return 0x87e180000068ll + 0x1000000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=21) || ((a>=36)&&(a<=52)) || (a==63)))
        return 0x87e180000068ll + 0x1000000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=11) || ((a>=18)&&(a<=21)) || ((a>=22)&&(a<=42)) || (a==63)))
        return 0x87e180000068ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DROX_BLK_FORCE_CLK_EN", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DROX_BLK_FORCE_CLK_EN(a) cavm_drox_blk_force_clk_en_t
#define bustype_CAVM_DROX_BLK_FORCE_CLK_EN(a) CSR_TYPE_RSL
#define basename_CAVM_DROX_BLK_FORCE_CLK_EN(a) "DROX_BLK_FORCE_CLK_EN"
#define device_bar_CAVM_DROX_BLK_FORCE_CLK_EN(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DROX_BLK_FORCE_CLK_EN(a) (a)
#define arguments_CAVM_DROX_BLK_FORCE_CLK_EN(a) (a),-1,-1,-1

/**
 * Register (RSL) dro#_blk_freeze
 *
 * INTERNAL: DRO Block Freeze Registers
 */
union cavm_drox_blk_freeze
{
    uint64_t u;
    struct cavm_drox_blk_freeze_s
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
    /* struct cavm_drox_blk_freeze_s cn; */
};
typedef union cavm_drox_blk_freeze cavm_drox_blk_freeze_t;

static inline uint64_t CAVM_DROX_BLK_FREEZE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DROX_BLK_FREEZE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=29) || (a==63)))
        return 0x87e180000030ll + 0x1000000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=21) || ((a>=36)&&(a<=52)) || (a==63)))
        return 0x87e180000030ll + 0x1000000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=11) || ((a>=18)&&(a<=21)) || ((a>=22)&&(a<=42)) || (a==63)))
        return 0x87e180000030ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DROX_BLK_FREEZE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DROX_BLK_FREEZE(a) cavm_drox_blk_freeze_t
#define bustype_CAVM_DROX_BLK_FREEZE(a) CSR_TYPE_RSL
#define basename_CAVM_DROX_BLK_FREEZE(a) "DROX_BLK_FREEZE"
#define device_bar_CAVM_DROX_BLK_FREEZE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DROX_BLK_FREEZE(a) (a)
#define arguments_CAVM_DROX_BLK_FREEZE(a) (a),-1,-1,-1

/**
 * Register (RSL) dro#_blk_rg#_desc
 *
 * INTERNAL: DRO Block Gate Ring Gate Description Register
 *
 * This register lists the type of gates used for each ring in the DRO.
 */
union cavm_drox_blk_rgx_desc
{
    uint64_t u;
    struct cavm_drox_blk_rgx_desc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_13_63        : 51;
        uint64_t gate_type             : 3;  /**< [ 12: 10](RO) GATE type:
                                                                 0 = INV,
                                                                 1 = NAND2,
                                                                 2 = NOR2,
                                                                 3 = SKEW P TYPE,
                                                                 4 = SKEW N TYPE,
                                                                 5 = CE DRO. */
        uint64_t gate_drive            : 7;  /**< [  9:  3](RO) GATE drive strength. */
        uint64_t gate_vt               : 3;  /**< [  2:  0](RO) GATE VT type;
                                                                 0 = LVT,
                                                                 1 = LVT_LL,
                                                                 2 = ULVT,
                                                                 3 = ULVT-LL,
                                                                 4 = ELVT. */
#else /* Word 0 - Little Endian */
        uint64_t gate_vt               : 3;  /**< [  2:  0](RO) GATE VT type;
                                                                 0 = LVT,
                                                                 1 = LVT_LL,
                                                                 2 = ULVT,
                                                                 3 = ULVT-LL,
                                                                 4 = ELVT. */
        uint64_t gate_drive            : 7;  /**< [  9:  3](RO) GATE drive strength. */
        uint64_t gate_type             : 3;  /**< [ 12: 10](RO) GATE type:
                                                                 0 = INV,
                                                                 1 = NAND2,
                                                                 2 = NOR2,
                                                                 3 = SKEW P TYPE,
                                                                 4 = SKEW N TYPE,
                                                                 5 = CE DRO. */
        uint64_t reserved_13_63        : 51;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_drox_blk_rgx_desc_s cn10; */
    /* struct cavm_drox_blk_rgx_desc_s cn10ka; */
    /* struct cavm_drox_blk_rgx_desc_s cnf10ka; */
    struct cavm_drox_blk_rgx_desc_cnf10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_13_63        : 51;
        uint64_t gate_type             : 3;  /**< [ 12: 10](RO) GATE type:
                                                                 0 = INV,
                                                                 1 = NAND2,
                                                                 2 = NOR2,
                                                                 3 = SKEW P TYPE,
                                                                 4 = SKEW N TYPE,
                                                                 5 = CE DRO. */
        uint64_t gate_drive            : 7;  /**< [  9:  3](RO) GATE drive strength. */
        uint64_t gate_vt               : 3;  /**< [  2:  0](RO) GATE VT type;
                                                                 0 = LVT,
                                                                 1 = LVT_LL,
                                                                 2 = ULVT,
                                                                 3 = ULVT-LL,
                                                                 4 = ELVT.
                                                                 5 = SVT. */
#else /* Word 0 - Little Endian */
        uint64_t gate_vt               : 3;  /**< [  2:  0](RO) GATE VT type;
                                                                 0 = LVT,
                                                                 1 = LVT_LL,
                                                                 2 = ULVT,
                                                                 3 = ULVT-LL,
                                                                 4 = ELVT.
                                                                 5 = SVT. */
        uint64_t gate_drive            : 7;  /**< [  9:  3](RO) GATE drive strength. */
        uint64_t gate_type             : 3;  /**< [ 12: 10](RO) GATE type:
                                                                 0 = INV,
                                                                 1 = NAND2,
                                                                 2 = NOR2,
                                                                 3 = SKEW P TYPE,
                                                                 4 = SKEW N TYPE,
                                                                 5 = CE DRO. */
        uint64_t reserved_13_63        : 51;
#endif /* Word 0 - End */
    } cnf10kb;
};
typedef union cavm_drox_blk_rgx_desc cavm_drox_blk_rgx_desc_t;

static inline uint64_t CAVM_DROX_BLK_RGX_DESC(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DROX_BLK_RGX_DESC(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (((a<=29) || (a==63)) && (b<=42)))
        return 0x87e180000098ll + 0x1000000ll * ((a) & 0x3f) + 0x100ll * ((b) & 0x3f);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (((a<=21) || ((a>=36)&&(a<=52)) || (a==63)) && (b<=42)))
        return 0x87e180000098ll + 0x1000000ll * ((a) & 0x3f) + 0x100ll * ((b) & 0x3f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (((a<=11) || ((a>=18)&&(a<=21)) || ((a>=22)&&(a<=42)) || (a==63)) && (b<=42)))
        return 0x87e180000098ll + 0x1000000ll * ((a) & 0x3f) + 0x100ll * ((b) & 0x3f);
    __cavm_csr_fatal("DROX_BLK_RGX_DESC", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DROX_BLK_RGX_DESC(a,b) cavm_drox_blk_rgx_desc_t
#define bustype_CAVM_DROX_BLK_RGX_DESC(a,b) CSR_TYPE_RSL
#define basename_CAVM_DROX_BLK_RGX_DESC(a,b) "DROX_BLK_RGX_DESC"
#define device_bar_CAVM_DROX_BLK_RGX_DESC(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DROX_BLK_RGX_DESC(a,b) (a)
#define arguments_CAVM_DROX_BLK_RGX_DESC(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dro#_blk_rg#_mask
 *
 * INTERNAL: DRO Block Mask Registers
 */
union cavm_drox_blk_rgx_mask
{
    uint64_t u;
    struct cavm_drox_blk_rgx_mask_s
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
    /* struct cavm_drox_blk_rgx_mask_s cn; */
};
typedef union cavm_drox_blk_rgx_mask cavm_drox_blk_rgx_mask_t;

static inline uint64_t CAVM_DROX_BLK_RGX_MASK(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DROX_BLK_RGX_MASK(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (((a<=29) || (a==63)) && (b<=42)))
        return 0x87e180000028ll + 0x1000000ll * ((a) & 0x3f) + 0x100ll * ((b) & 0x3f);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (((a<=21) || ((a>=36)&&(a<=52)) || (a==63)) && (b<=42)))
        return 0x87e180000028ll + 0x1000000ll * ((a) & 0x3f) + 0x100ll * ((b) & 0x3f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (((a<=11) || ((a>=18)&&(a<=21)) || ((a>=22)&&(a<=42)) || (a==63)) && (b<=42)))
        return 0x87e180000028ll + 0x1000000ll * ((a) & 0x3f) + 0x100ll * ((b) & 0x3f);
    __cavm_csr_fatal("DROX_BLK_RGX_MASK", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DROX_BLK_RGX_MASK(a,b) cavm_drox_blk_rgx_mask_t
#define bustype_CAVM_DROX_BLK_RGX_MASK(a,b) CSR_TYPE_RSL
#define basename_CAVM_DROX_BLK_RGX_MASK(a,b) "DROX_BLK_RGX_MASK"
#define device_bar_CAVM_DROX_BLK_RGX_MASK(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DROX_BLK_RGX_MASK(a,b) (a)
#define arguments_CAVM_DROX_BLK_RGX_MASK(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dro#_blk_rg#_read
 *
 * INTERNAL: DRO Block Ring Counter Registers
 */
union cavm_drox_blk_rgx_read
{
    uint64_t u;
    struct cavm_drox_blk_rgx_read_s
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
    /* struct cavm_drox_blk_rgx_read_s cn; */
};
typedef union cavm_drox_blk_rgx_read cavm_drox_blk_rgx_read_t;

static inline uint64_t CAVM_DROX_BLK_RGX_READ(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DROX_BLK_RGX_READ(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (((a<=29) || (a==63)) && (b<=42)))
        return 0x87e180000038ll + 0x1000000ll * ((a) & 0x3f) + 0x100ll * ((b) & 0x3f);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (((a<=21) || ((a>=36)&&(a<=52)) || (a==63)) && (b<=42)))
        return 0x87e180000038ll + 0x1000000ll * ((a) & 0x3f) + 0x100ll * ((b) & 0x3f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (((a<=11) || ((a>=18)&&(a<=21)) || ((a>=22)&&(a<=42)) || (a==63)) && (b<=42)))
        return 0x87e180000038ll + 0x1000000ll * ((a) & 0x3f) + 0x100ll * ((b) & 0x3f);
    __cavm_csr_fatal("DROX_BLK_RGX_READ", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DROX_BLK_RGX_READ(a,b) cavm_drox_blk_rgx_read_t
#define bustype_CAVM_DROX_BLK_RGX_READ(a,b) CSR_TYPE_RSL
#define basename_CAVM_DROX_BLK_RGX_READ(a,b) "DROX_BLK_RGX_READ"
#define device_bar_CAVM_DROX_BLK_RGX_READ(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DROX_BLK_RGX_READ(a,b) (a)
#define arguments_CAVM_DROX_BLK_RGX_READ(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dro#_blk_uptom14_desc
 *
 * INTERNAL: DRO Block UPTO METAL 14 Description Register
 *
 * uptom14 description.
 */
union cavm_drox_blk_uptom14_desc
{
    uint64_t u;
    struct cavm_drox_blk_uptom14_desc_s
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
    /* struct cavm_drox_blk_uptom14_desc_s cn; */
};
typedef union cavm_drox_blk_uptom14_desc cavm_drox_blk_uptom14_desc_t;

static inline uint64_t CAVM_DROX_BLK_UPTOM14_DESC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DROX_BLK_UPTOM14_DESC(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=29) || (a==63)))
        return 0x87e180000088ll + 0x1000000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=21) || ((a>=36)&&(a<=52)) || (a==63)))
        return 0x87e180000088ll + 0x1000000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=11) || ((a>=18)&&(a<=21)) || ((a>=22)&&(a<=42)) || (a==63)))
        return 0x87e180000088ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DROX_BLK_UPTOM14_DESC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DROX_BLK_UPTOM14_DESC(a) cavm_drox_blk_uptom14_desc_t
#define bustype_CAVM_DROX_BLK_UPTOM14_DESC(a) CSR_TYPE_RSL
#define basename_CAVM_DROX_BLK_UPTOM14_DESC(a) "DROX_BLK_UPTOM14_DESC"
#define device_bar_CAVM_DROX_BLK_UPTOM14_DESC(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DROX_BLK_UPTOM14_DESC(a) (a)
#define arguments_CAVM_DROX_BLK_UPTOM14_DESC(a) (a),-1,-1,-1

/**
 * Register (RSL) dro#_blk_uptom4_280_desc
 *
 * INTERNAL: DRO Block UPTO METAL 4 280 Description Register
 *
 * Lib 280 upto metal 4 dro description.
 */
union cavm_drox_blk_uptom4_280_desc
{
    uint64_t u;
    struct cavm_drox_blk_uptom4_280_desc_s
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
    /* struct cavm_drox_blk_uptom4_280_desc_s cn; */
};
typedef union cavm_drox_blk_uptom4_280_desc cavm_drox_blk_uptom4_280_desc_t;

static inline uint64_t CAVM_DROX_BLK_UPTOM4_280_DESC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DROX_BLK_UPTOM4_280_DESC(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=29) || (a==63)))
        return 0x87e180000080ll + 0x1000000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=21) || ((a>=36)&&(a<=52)) || (a==63)))
        return 0x87e180000080ll + 0x1000000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=11) || ((a>=18)&&(a<=21)) || ((a>=22)&&(a<=42)) || (a==63)))
        return 0x87e180000080ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DROX_BLK_UPTOM4_280_DESC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DROX_BLK_UPTOM4_280_DESC(a) cavm_drox_blk_uptom4_280_desc_t
#define bustype_CAVM_DROX_BLK_UPTOM4_280_DESC(a) CSR_TYPE_RSL
#define basename_CAVM_DROX_BLK_UPTOM4_280_DESC(a) "DROX_BLK_UPTOM4_280_DESC"
#define device_bar_CAVM_DROX_BLK_UPTOM4_280_DESC(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DROX_BLK_UPTOM4_280_DESC(a) (a)
#define arguments_CAVM_DROX_BLK_UPTOM4_280_DESC(a) (a),-1,-1,-1

/**
 * Register (RSL) dro#_blk_uptom4_desc
 *
 * INTERNAL: DRO Block UPTO METAL 4 Description Register
 *
 * Lib 210 upto metal 4 dro description.
 */
union cavm_drox_blk_uptom4_desc
{
    uint64_t u;
    struct cavm_drox_blk_uptom4_desc_s
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
    /* struct cavm_drox_blk_uptom4_desc_s cn; */
};
typedef union cavm_drox_blk_uptom4_desc cavm_drox_blk_uptom4_desc_t;

static inline uint64_t CAVM_DROX_BLK_UPTOM4_DESC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DROX_BLK_UPTOM4_DESC(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=29) || (a==63)))
        return 0x87e180000078ll + 0x1000000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=21) || ((a>=36)&&(a<=52)) || (a==63)))
        return 0x87e180000078ll + 0x1000000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=11) || ((a>=18)&&(a<=21)) || ((a>=22)&&(a<=42)) || (a==63)))
        return 0x87e180000078ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DROX_BLK_UPTOM4_DESC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DROX_BLK_UPTOM4_DESC(a) cavm_drox_blk_uptom4_desc_t
#define bustype_CAVM_DROX_BLK_UPTOM4_DESC(a) CSR_TYPE_RSL
#define basename_CAVM_DROX_BLK_UPTOM4_DESC(a) "DROX_BLK_UPTOM4_DESC"
#define device_bar_CAVM_DROX_BLK_UPTOM4_DESC(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DROX_BLK_UPTOM4_DESC(a) (a)
#define arguments_CAVM_DROX_BLK_UPTOM4_DESC(a) (a),-1,-1,-1

/**
 * Register (RSL) dro#_blk_vdr_const
 *
 * INTERNAL: DRO Block VDR Constants Register
 *
 * This register contains info there a DRO has present or global feedback.Bit
 *     \<{a}\> corresponds to DRO BLK (\<a\>}. Bits enumerated by DRO_BLOCKS_E.
 */
union cavm_drox_blk_vdr_const
{
    uint64_t u;
    struct cavm_drox_blk_vdr_const_s
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
    /* struct cavm_drox_blk_vdr_const_s cn; */
};
typedef union cavm_drox_blk_vdr_const cavm_drox_blk_vdr_const_t;

static inline uint64_t CAVM_DROX_BLK_VDR_CONST(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DROX_BLK_VDR_CONST(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=29) || (a==63)))
        return 0x87e180000070ll + 0x1000000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=21) || ((a>=36)&&(a<=52)) || (a==63)))
        return 0x87e180000070ll + 0x1000000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=11) || ((a>=18)&&(a<=21)) || ((a>=22)&&(a<=42)) || (a==63)))
        return 0x87e180000070ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DROX_BLK_VDR_CONST", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DROX_BLK_VDR_CONST(a) cavm_drox_blk_vdr_const_t
#define bustype_CAVM_DROX_BLK_VDR_CONST(a) CSR_TYPE_RSL
#define basename_CAVM_DROX_BLK_VDR_CONST(a) "DROX_BLK_VDR_CONST"
#define device_bar_CAVM_DROX_BLK_VDR_CONST(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DROX_BLK_VDR_CONST(a) (a)
#define arguments_CAVM_DROX_BLK_VDR_CONST(a) (a),-1,-1,-1

/**
 * Register (RSL) dro#_blk_vdroop_ctl
 *
 * INTERNAL: DRO Block Voltage Droop Detector Control Register
 *
 * This register controls the voltage droop detector in the DROs if available.
 * For diagnostic use only.
 */
union cavm_drox_blk_vdroop_ctl
{
    uint64_t u;
    struct cavm_drox_blk_vdroop_ctl_s
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
    /* struct cavm_drox_blk_vdroop_ctl_s cn; */
};
typedef union cavm_drox_blk_vdroop_ctl cavm_drox_blk_vdroop_ctl_t;

static inline uint64_t CAVM_DROX_BLK_VDROOP_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DROX_BLK_VDROOP_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=29) || (a==63)))
        return 0x87e180000048ll + 0x1000000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=21) || ((a>=36)&&(a<=52)) || (a==63)))
        return 0x87e180000048ll + 0x1000000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=11) || ((a>=18)&&(a<=21)) || ((a>=22)&&(a<=42)) || (a==63)))
        return 0x87e180000048ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DROX_BLK_VDROOP_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DROX_BLK_VDROOP_CTL(a) cavm_drox_blk_vdroop_ctl_t
#define bustype_CAVM_DROX_BLK_VDROOP_CTL(a) CSR_TYPE_RSL
#define basename_CAVM_DROX_BLK_VDROOP_CTL(a) "DROX_BLK_VDROOP_CTL"
#define device_bar_CAVM_DROX_BLK_VDROOP_CTL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DROX_BLK_VDROOP_CTL(a) (a)
#define arguments_CAVM_DROX_BLK_VDROOP_CTL(a) (a),-1,-1,-1

/**
 * Register (RSL) dro#_blk_vdroop_local_cnt
 *
 * INTERNAL: DRO Block Voltage Droop Local Counter Register
 *
 * For diagnostic use only.
 */
union cavm_drox_blk_vdroop_local_cnt
{
    uint64_t u;
    struct cavm_drox_blk_vdroop_local_cnt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t count                 : 16; /**< [ 15:  0](RO/H) Voltage droop detector local counter, count of the rising edges of the droop detector. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 16; /**< [ 15:  0](RO/H) Voltage droop detector local counter, count of the rising edges of the droop detector. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_drox_blk_vdroop_local_cnt_s cn; */
};
typedef union cavm_drox_blk_vdroop_local_cnt cavm_drox_blk_vdroop_local_cnt_t;

static inline uint64_t CAVM_DROX_BLK_VDROOP_LOCAL_CNT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DROX_BLK_VDROOP_LOCAL_CNT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=29) || (a==63)))
        return 0x87e180000060ll + 0x1000000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=21) || ((a>=36)&&(a<=52)) || (a==63)))
        return 0x87e180000060ll + 0x1000000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=11) || ((a>=18)&&(a<=21)) || ((a>=22)&&(a<=42)) || (a==63)))
        return 0x87e180000060ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DROX_BLK_VDROOP_LOCAL_CNT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DROX_BLK_VDROOP_LOCAL_CNT(a) cavm_drox_blk_vdroop_local_cnt_t
#define bustype_CAVM_DROX_BLK_VDROOP_LOCAL_CNT(a) CSR_TYPE_RSL
#define basename_CAVM_DROX_BLK_VDROOP_LOCAL_CNT(a) "DROX_BLK_VDROOP_LOCAL_CNT"
#define device_bar_CAVM_DROX_BLK_VDROOP_LOCAL_CNT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DROX_BLK_VDROOP_LOCAL_CNT(a) (a)
#define arguments_CAVM_DROX_BLK_VDROOP_LOCAL_CNT(a) (a),-1,-1,-1

/**
 * Register (RSL) dro#_blk_vdroop_obs
 *
 * INTERNAL: DRO Block Voltage Droop Detector Observation Register
 *
 * This register observes the voltage droop detector in the DROs if available.
 * For diagnostic use only.
 */
union cavm_drox_blk_vdroop_obs
{
    uint64_t u;
    struct cavm_drox_blk_vdroop_obs_s
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
    /* struct cavm_drox_blk_vdroop_obs_s cn; */
};
typedef union cavm_drox_blk_vdroop_obs cavm_drox_blk_vdroop_obs_t;

static inline uint64_t CAVM_DROX_BLK_VDROOP_OBS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DROX_BLK_VDROOP_OBS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=29) || (a==63)))
        return 0x87e180000050ll + 0x1000000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=21) || ((a>=36)&&(a<=52)) || (a==63)))
        return 0x87e180000050ll + 0x1000000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=11) || ((a>=18)&&(a<=21)) || ((a>=22)&&(a<=42)) || (a==63)))
        return 0x87e180000050ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DROX_BLK_VDROOP_OBS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DROX_BLK_VDROOP_OBS(a) cavm_drox_blk_vdroop_obs_t
#define bustype_CAVM_DROX_BLK_VDROOP_OBS(a) CSR_TYPE_RSL
#define basename_CAVM_DROX_BLK_VDROOP_OBS(a) "DROX_BLK_VDROOP_OBS"
#define device_bar_CAVM_DROX_BLK_VDROOP_OBS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DROX_BLK_VDROOP_OBS(a) (a)
#define arguments_CAVM_DROX_BLK_VDROOP_OBS(a) (a),-1,-1,-1

/**
 * Register (RSL) dro#_blk_vdroop_rst
 *
 * INTERNAL: DRO Block Voltage Droop Detector Reset Register
 *
 * This register controls the droop detector. For diagnostic use only.
 */
union cavm_drox_blk_vdroop_rst
{
    uint64_t u;
    struct cavm_drox_blk_vdroop_rst_s
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
    /* struct cavm_drox_blk_vdroop_rst_s cn; */
};
typedef union cavm_drox_blk_vdroop_rst cavm_drox_blk_vdroop_rst_t;

static inline uint64_t CAVM_DROX_BLK_VDROOP_RST(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DROX_BLK_VDROOP_RST(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=29) || (a==63)))
        return 0x87e180000058ll + 0x1000000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=21) || ((a>=36)&&(a<=52)) || (a==63)))
        return 0x87e180000058ll + 0x1000000ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=11) || ((a>=18)&&(a<=21)) || ((a>=22)&&(a<=42)) || (a==63)))
        return 0x87e180000058ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DROX_BLK_VDROOP_RST", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DROX_BLK_VDROOP_RST(a) cavm_drox_blk_vdroop_rst_t
#define bustype_CAVM_DROX_BLK_VDROOP_RST(a) CSR_TYPE_RSL
#define basename_CAVM_DROX_BLK_VDROOP_RST(a) "DROX_BLK_VDROOP_RST"
#define device_bar_CAVM_DROX_BLK_VDROOP_RST(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DROX_BLK_VDROOP_RST(a) (a)
#define arguments_CAVM_DROX_BLK_VDROOP_RST(a) (a),-1,-1,-1

#endif /* __CAVM_CSRS_DRO_H__ */
