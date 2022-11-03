#ifndef __CAVM_CSRS_LBK_H__
#define __CAVM_CSRS_LBK_H__
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
 * OcteonTX LBK.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration lbk_bar_e
 *
 * LBK Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define CAVM_LBK_BAR_E_LBKX_PF_BAR0(a) (0x87e018000000ll + 0x1000000ll * (a))
#define CAVM_LBK_BAR_E_LBKX_PF_BAR0_SIZE 0x10000ull

/**
 * Enumeration lbk_connect_e
 *
 * LBK Source Connection Enumeration
 * Enumerates LBK()_CONST[SRC] and LBK()_CONST[DEST].
 */
#define CAVM_LBK_CONNECT_E_NIXX(a) (0 + (a))

/**
 * Register (RSL) lbk#_ch#_pkind
 *
 * LBK Channel to Port Kind Register
 */
union cavm_lbkx_chx_pkind
{
    uint64_t u;
    struct cavm_lbkx_chx_pkind_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t pkind                 : 6;  /**< [  5:  0](R/W) Loopback pkind for the respective loopback channel. */
#else /* Word 0 - Little Endian */
        uint64_t pkind                 : 6;  /**< [  5:  0](R/W) Loopback pkind for the respective loopback channel. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_lbkx_chx_pkind_s cn; */
};
typedef union cavm_lbkx_chx_pkind cavm_lbkx_chx_pkind_t;

static inline uint64_t CAVM_LBKX_CHX_PKIND(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_LBKX_CHX_PKIND(uint64_t a, uint64_t b)
{
    if ((a==0) && (b<=63))
        return 0x87e018000200ll + 0x1000000ll * ((a) & 0x0) + 8ll * ((b) & 0x3f);
    __cavm_csr_fatal("LBKX_CHX_PKIND", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_LBKX_CHX_PKIND(a,b) cavm_lbkx_chx_pkind_t
#define bustype_CAVM_LBKX_CHX_PKIND(a,b) CSR_TYPE_RSL
#define basename_CAVM_LBKX_CHX_PKIND(a,b) "LBKX_CHX_PKIND"
#define device_bar_CAVM_LBKX_CHX_PKIND(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_LBKX_CHX_PKIND(a,b) (a)
#define arguments_CAVM_LBKX_CHX_PKIND(a,b) (a),(b),-1,-1

/**
 * Register (RSL) lbk#_clk_gate_ctl
 *
 * LBK Reset Register
 * This register is for diagnostic use only.
 */
union cavm_lbkx_clk_gate_ctl
{
    uint64_t u;
    struct cavm_lbkx_clk_gate_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t dis                   : 1;  /**< [  0:  0](R/W) Clock gate disable. When set, forces gated clock to always on. For diagnostic
                                                                 use only. */
#else /* Word 0 - Little Endian */
        uint64_t dis                   : 1;  /**< [  0:  0](R/W) Clock gate disable. When set, forces gated clock to always on. For diagnostic
                                                                 use only. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_lbkx_clk_gate_ctl_s cn; */
};
typedef union cavm_lbkx_clk_gate_ctl cavm_lbkx_clk_gate_ctl_t;

static inline uint64_t CAVM_LBKX_CLK_GATE_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_LBKX_CLK_GATE_CTL(uint64_t a)
{
    if (a==0)
        return 0x87e018000008ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("LBKX_CLK_GATE_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_LBKX_CLK_GATE_CTL(a) cavm_lbkx_clk_gate_ctl_t
#define bustype_CAVM_LBKX_CLK_GATE_CTL(a) CSR_TYPE_RSL
#define basename_CAVM_LBKX_CLK_GATE_CTL(a) "LBKX_CLK_GATE_CTL"
#define device_bar_CAVM_LBKX_CLK_GATE_CTL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_LBKX_CLK_GATE_CTL(a) (a)
#define arguments_CAVM_LBKX_CLK_GATE_CTL(a) (a),-1,-1,-1

/**
 * Register (RSL) lbk#_const
 *
 * LBK Constants Register
 * This register contains constants for software discovery.
 */
union cavm_lbkx_const
{
    uint64_t u;
    struct cavm_lbkx_const_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t chan                  : 16; /**< [ 47: 32](RO) Number of channels supported. */
        uint64_t dest                  : 4;  /**< [ 31: 28](RO) What block this LBK transmits traffic to. Enumerated by LBK_CONNECT_E. */
        uint64_t src                   : 4;  /**< [ 27: 24](RO) What block this LBK receives traffic from. Enumerated by LBK_CONNECT_E. */
        uint64_t buf_size              : 24; /**< [ 23:  0](RO) Number of bytes in each loopback data FIFO. */
#else /* Word 0 - Little Endian */
        uint64_t buf_size              : 24; /**< [ 23:  0](RO) Number of bytes in each loopback data FIFO. */
        uint64_t src                   : 4;  /**< [ 27: 24](RO) What block this LBK receives traffic from. Enumerated by LBK_CONNECT_E. */
        uint64_t dest                  : 4;  /**< [ 31: 28](RO) What block this LBK transmits traffic to. Enumerated by LBK_CONNECT_E. */
        uint64_t chan                  : 16; /**< [ 47: 32](RO) Number of channels supported. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_lbkx_const_s cn; */
};
typedef union cavm_lbkx_const cavm_lbkx_const_t;

static inline uint64_t CAVM_LBKX_CONST(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_LBKX_CONST(uint64_t a)
{
    if (a==0)
        return 0x87e018000010ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("LBKX_CONST", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_LBKX_CONST(a) cavm_lbkx_const_t
#define bustype_CAVM_LBKX_CONST(a) CSR_TYPE_RSL
#define basename_CAVM_LBKX_CONST(a) "LBKX_CONST"
#define device_bar_CAVM_LBKX_CONST(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_LBKX_CONST(a) (a)
#define arguments_CAVM_LBKX_CONST(a) (a),-1,-1,-1

/**
 * Register (RSL) lbk#_const1
 *
 * LBK Constants 1 Register
 * This register contains constants for software discovery.
 */
union cavm_lbkx_const1
{
    uint64_t u;
    struct cavm_lbkx_const1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_lbkx_const1_s cn; */
};
typedef union cavm_lbkx_const1 cavm_lbkx_const1_t;

static inline uint64_t CAVM_LBKX_CONST1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_LBKX_CONST1(uint64_t a)
{
    if (a==0)
        return 0x87e018000018ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("LBKX_CONST1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_LBKX_CONST1(a) cavm_lbkx_const1_t
#define bustype_CAVM_LBKX_CONST1(a) CSR_TYPE_RSL
#define basename_CAVM_LBKX_CONST1(a) "LBKX_CONST1"
#define device_bar_CAVM_LBKX_CONST1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_LBKX_CONST1(a) (a)
#define arguments_CAVM_LBKX_CONST1(a) (a),-1,-1,-1

/**
 * Register (RSL) lbk#_credits_cfg
 *
 * Credits Configuration Register
 * Credits configurations for X2P2 interface.
 */
union cavm_lbkx_credits_cfg
{
    uint64_t u;
    struct cavm_lbkx_credits_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_13_63        : 51;
        uint64_t os_chan_credit        : 5;  /**< [ 12:  8](R/W) Outstanding channel return messages credits. */
        uint64_t os_x2p_req            : 8;  /**< [  7:  0](R/W) Max outstanding X2P request credits. */
#else /* Word 0 - Little Endian */
        uint64_t os_x2p_req            : 8;  /**< [  7:  0](R/W) Max outstanding X2P request credits. */
        uint64_t os_chan_credit        : 5;  /**< [ 12:  8](R/W) Outstanding channel return messages credits. */
        uint64_t reserved_13_63        : 51;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_lbkx_credits_cfg_s cn; */
};
typedef union cavm_lbkx_credits_cfg cavm_lbkx_credits_cfg_t;

static inline uint64_t CAVM_LBKX_CREDITS_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_LBKX_CREDITS_CFG(uint64_t a)
{
    if (a==0)
        return 0x87e018000410ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("LBKX_CREDITS_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_LBKX_CREDITS_CFG(a) cavm_lbkx_credits_cfg_t
#define bustype_CAVM_LBKX_CREDITS_CFG(a) CSR_TYPE_RSL
#define basename_CAVM_LBKX_CREDITS_CFG(a) "LBKX_CREDITS_CFG"
#define device_bar_CAVM_LBKX_CREDITS_CFG(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_LBKX_CREDITS_CFG(a) (a)
#define arguments_CAVM_LBKX_CREDITS_CFG(a) (a),-1,-1,-1

/**
 * Register (RSL) lbk#_csclk_active_pc
 *
 * LBK Conditional Clock Counter Register
 * This register counts conditional clocks cycles.
 */
union cavm_lbkx_csclk_active_pc
{
    uint64_t u;
    struct cavm_lbkx_csclk_active_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Count of conditional coprocessor-clock cycles since reset. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Count of conditional coprocessor-clock cycles since reset. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_lbkx_csclk_active_pc_s cn; */
};
typedef union cavm_lbkx_csclk_active_pc cavm_lbkx_csclk_active_pc_t;

static inline uint64_t CAVM_LBKX_CSCLK_ACTIVE_PC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_LBKX_CSCLK_ACTIVE_PC(uint64_t a)
{
    if (a==0)
        return 0x87e018000030ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("LBKX_CSCLK_ACTIVE_PC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_LBKX_CSCLK_ACTIVE_PC(a) cavm_lbkx_csclk_active_pc_t
#define bustype_CAVM_LBKX_CSCLK_ACTIVE_PC(a) CSR_TYPE_RSL
#define basename_CAVM_LBKX_CSCLK_ACTIVE_PC(a) "LBKX_CSCLK_ACTIVE_PC"
#define device_bar_CAVM_LBKX_CSCLK_ACTIVE_PC(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_LBKX_CSCLK_ACTIVE_PC(a) (a)
#define arguments_CAVM_LBKX_CSCLK_ACTIVE_PC(a) (a),-1,-1,-1

/**
 * Register (RSL) lbk#_idle_status
 *
 * LBK Idle Status Register
 * Tracks internal indicators.
 */
union cavm_lbkx_idle_status
{
    uint64_t u;
    struct cavm_lbkx_idle_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t skid_fifo_lvl         : 7;  /**< [ 63: 57](RO/H) P2X SKID FIFO level. */
        uint64_t skid_fifo_full        : 1;  /**< [ 56: 56](RO/H) P2X SKID FIFO full. */
        uint64_t mem_fifo_lvl          : 13; /**< [ 55: 43](RO/H) Data memory FIFO level. */
        uint64_t mem_fifo_full         : 1;  /**< [ 42: 42](RO/H) Data memory FIFO full. */
        uint64_t mem_pend_x2p_req      : 13; /**< [ 41: 29](RO/H) RAM memory entries pending to send X2P requests. */
        uint64_t tot_pend_x2p_req      : 13; /**< [ 28: 16](RO/H) SKID & RAM entries pending to send X2P requests. */
        uint64_t x2p_os_req_lvl        : 8;  /**< [ 15:  8](RO/H) X2P outstanding requests transmitted pending to receive grants. */
        uint64_t reserved_0_7          : 8;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_7          : 8;
        uint64_t x2p_os_req_lvl        : 8;  /**< [ 15:  8](RO/H) X2P outstanding requests transmitted pending to receive grants. */
        uint64_t tot_pend_x2p_req      : 13; /**< [ 28: 16](RO/H) SKID & RAM entries pending to send X2P requests. */
        uint64_t mem_pend_x2p_req      : 13; /**< [ 41: 29](RO/H) RAM memory entries pending to send X2P requests. */
        uint64_t mem_fifo_full         : 1;  /**< [ 42: 42](RO/H) Data memory FIFO full. */
        uint64_t mem_fifo_lvl          : 13; /**< [ 55: 43](RO/H) Data memory FIFO level. */
        uint64_t skid_fifo_full        : 1;  /**< [ 56: 56](RO/H) P2X SKID FIFO full. */
        uint64_t skid_fifo_lvl         : 7;  /**< [ 63: 57](RO/H) P2X SKID FIFO level. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_lbkx_idle_status_s cn; */
};
typedef union cavm_lbkx_idle_status cavm_lbkx_idle_status_t;

static inline uint64_t CAVM_LBKX_IDLE_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_LBKX_IDLE_STATUS(uint64_t a)
{
    if (a==0)
        return 0x87e018000418ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("LBKX_IDLE_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_LBKX_IDLE_STATUS(a) cavm_lbkx_idle_status_t
#define bustype_CAVM_LBKX_IDLE_STATUS(a) CSR_TYPE_RSL
#define basename_CAVM_LBKX_IDLE_STATUS(a) "LBKX_IDLE_STATUS"
#define device_bar_CAVM_LBKX_IDLE_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_LBKX_IDLE_STATUS(a) (a)
#define arguments_CAVM_LBKX_IDLE_STATUS(a) (a),-1,-1,-1

/**
 * Register (RSL) lbk#_idle_status_2
 *
 * LBK Idle Status Register
 * Tracks internal indicators.
 */
union cavm_lbkx_idle_status_2
{
    uint64_t u;
    struct cavm_lbkx_idle_status_2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_20_63        : 44;
        uint64_t credit_msg_lvl        : 9;  /**< [ 19: 11](RO/H) P2X credits return messages FIFO level. */
        uint64_t credit_msg_os_lvl     : 5;  /**< [ 10:  6](RO/H) P2X credits return messages transmitted without receiving ack. */
        uint64_t credit_return_sm      : 2;  /**< [  5:  4](RO/H) P2X credits return messages transmitting FSM. */
        uint64_t lbk_empty             : 1;  /**< [  3:  3](RO/H) No data is in LBK SKID FIFO, memory & buffers. No SKID read/memory
                                                                 write/reads are taking place. This ignore BP & channel credits messages fifo. */
        uint64_t x2p_bp_sm             : 2;  /**< [  2:  1](RO/H) X2P backpressure receive FSM. */
        uint64_t p2x_bp_sm             : 1;  /**< [  0:  0](RO/H) P2X backpressure transmit FSM. */
#else /* Word 0 - Little Endian */
        uint64_t p2x_bp_sm             : 1;  /**< [  0:  0](RO/H) P2X backpressure transmit FSM. */
        uint64_t x2p_bp_sm             : 2;  /**< [  2:  1](RO/H) X2P backpressure receive FSM. */
        uint64_t lbk_empty             : 1;  /**< [  3:  3](RO/H) No data is in LBK SKID FIFO, memory & buffers. No SKID read/memory
                                                                 write/reads are taking place. This ignore BP & channel credits messages fifo. */
        uint64_t credit_return_sm      : 2;  /**< [  5:  4](RO/H) P2X credits return messages transmitting FSM. */
        uint64_t credit_msg_os_lvl     : 5;  /**< [ 10:  6](RO/H) P2X credits return messages transmitted without receiving ack. */
        uint64_t credit_msg_lvl        : 9;  /**< [ 19: 11](RO/H) P2X credits return messages FIFO level. */
        uint64_t reserved_20_63        : 44;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_lbkx_idle_status_2_s cn; */
};
typedef union cavm_lbkx_idle_status_2 cavm_lbkx_idle_status_2_t;

static inline uint64_t CAVM_LBKX_IDLE_STATUS_2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_LBKX_IDLE_STATUS_2(uint64_t a)
{
    if (a==0)
        return 0x87e018000420ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("LBKX_IDLE_STATUS_2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_LBKX_IDLE_STATUS_2(a) cavm_lbkx_idle_status_2_t
#define bustype_CAVM_LBKX_IDLE_STATUS_2(a) CSR_TYPE_RSL
#define basename_CAVM_LBKX_IDLE_STATUS_2(a) "LBKX_IDLE_STATUS_2"
#define device_bar_CAVM_LBKX_IDLE_STATUS_2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_LBKX_IDLE_STATUS_2(a) (a)
#define arguments_CAVM_LBKX_IDLE_STATUS_2(a) (a),-1,-1,-1

/**
 * Register (RSL) lbk#_link_cfg_p2x
 *
 * Programmable LBK ID Register
 * Each register specifies the base channel (start channel) number and the range of
 * channels associated with the link.
 */
union cavm_lbkx_link_cfg_p2x
{
    uint64_t u;
    struct cavm_lbkx_link_cfg_p2x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_20_63        : 44;
        uint64_t log2_range            : 4;  /**< [ 19: 16](R/W) The channels range = 2LOG2_RANGE. The LBK supports only value=0x6, which means only 64 channels. */
        uint64_t reserved_12_15        : 4;
        uint64_t base_chan             : 12; /**< [ 11:  0](R/W) 6 MSB for LBK ID, 6 LSB for channel id. For LBK targets connecting NIX to itself
                                                                 both registers LBK_LINK_CFG_X2P & LBK_LINK_CFG_P2X should be configured to the
                                                                 same value. For connecting different NIXs, LBK_LINK_CFG_X2P register in the LBK
                                                                 that is connected to NIX (NIXRX) and LBK_LINK_CFG_P2X register in the LBK that
                                                                 is connected to the same NIX (NIXTX) should be configured to the same value. */
#else /* Word 0 - Little Endian */
        uint64_t base_chan             : 12; /**< [ 11:  0](R/W) 6 MSB for LBK ID, 6 LSB for channel id. For LBK targets connecting NIX to itself
                                                                 both registers LBK_LINK_CFG_X2P & LBK_LINK_CFG_P2X should be configured to the
                                                                 same value. For connecting different NIXs, LBK_LINK_CFG_X2P register in the LBK
                                                                 that is connected to NIX (NIXRX) and LBK_LINK_CFG_P2X register in the LBK that
                                                                 is connected to the same NIX (NIXTX) should be configured to the same value. */
        uint64_t reserved_12_15        : 4;
        uint64_t log2_range            : 4;  /**< [ 19: 16](R/W) The channels range = 2LOG2_RANGE. The LBK supports only value=0x6, which means only 64 channels. */
        uint64_t reserved_20_63        : 44;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_lbkx_link_cfg_p2x_s cn; */
};
typedef union cavm_lbkx_link_cfg_p2x cavm_lbkx_link_cfg_p2x_t;

static inline uint64_t CAVM_LBKX_LINK_CFG_P2X(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_LBKX_LINK_CFG_P2X(uint64_t a)
{
    if (a==0)
        return 0x87e018000400ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("LBKX_LINK_CFG_P2X", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_LBKX_LINK_CFG_P2X(a) cavm_lbkx_link_cfg_p2x_t
#define bustype_CAVM_LBKX_LINK_CFG_P2X(a) CSR_TYPE_RSL
#define basename_CAVM_LBKX_LINK_CFG_P2X(a) "LBKX_LINK_CFG_P2X"
#define device_bar_CAVM_LBKX_LINK_CFG_P2X(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_LBKX_LINK_CFG_P2X(a) (a)
#define arguments_CAVM_LBKX_LINK_CFG_P2X(a) (a),-1,-1,-1

/**
 * Register (RSL) lbk#_link_cfg_x2p
 *
 * Programmable LBK ID Register
 * Each register specifies the base channel (start channel) number and the range of
 * channels associated with the link.
 */
union cavm_lbkx_link_cfg_x2p
{
    uint64_t u;
    struct cavm_lbkx_link_cfg_x2p_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_20_63        : 44;
        uint64_t log2_range            : 4;  /**< [ 19: 16](R/W) The channels range = 2LOG2_RANGE. The LBK supports only value=0x6, which means only 64 channels. */
        uint64_t reserved_12_15        : 4;
        uint64_t base_chan             : 12; /**< [ 11:  0](R/W) 6 MSB for LBK ID, 6 LSB for channel id. For LBK targets connecting NIX to itself
                                                                 both registers LBK_LINK_CFG_X2P & LBK_LINK_CFG_P2X should be configured to the
                                                                 same value. For connecting different NIXs, LBK_LINK_CFG_X2P register in the LBK
                                                                 that is connected to NIX (NIXRX) and LBK_LINK_CFG_P2X register in the LBK that
                                                                 is connected to the same NIX (NIXTX) should be configured to the same value. */
#else /* Word 0 - Little Endian */
        uint64_t base_chan             : 12; /**< [ 11:  0](R/W) 6 MSB for LBK ID, 6 LSB for channel id. For LBK targets connecting NIX to itself
                                                                 both registers LBK_LINK_CFG_X2P & LBK_LINK_CFG_P2X should be configured to the
                                                                 same value. For connecting different NIXs, LBK_LINK_CFG_X2P register in the LBK
                                                                 that is connected to NIX (NIXRX) and LBK_LINK_CFG_P2X register in the LBK that
                                                                 is connected to the same NIX (NIXTX) should be configured to the same value. */
        uint64_t reserved_12_15        : 4;
        uint64_t log2_range            : 4;  /**< [ 19: 16](R/W) The channels range = 2LOG2_RANGE. The LBK supports only value=0x6, which means only 64 channels. */
        uint64_t reserved_20_63        : 44;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_lbkx_link_cfg_x2p_s cn; */
};
typedef union cavm_lbkx_link_cfg_x2p cavm_lbkx_link_cfg_x2p_t;

static inline uint64_t CAVM_LBKX_LINK_CFG_X2P(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_LBKX_LINK_CFG_X2P(uint64_t a)
{
    if (a==0)
        return 0x87e018000408ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("LBKX_LINK_CFG_X2P", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_LBKX_LINK_CFG_X2P(a) cavm_lbkx_link_cfg_x2p_t
#define bustype_CAVM_LBKX_LINK_CFG_X2P(a) CSR_TYPE_RSL
#define basename_CAVM_LBKX_LINK_CFG_X2P(a) "LBKX_LINK_CFG_X2P"
#define device_bar_CAVM_LBKX_LINK_CFG_X2P(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_LBKX_LINK_CFG_X2P(a) (a)
#define arguments_CAVM_LBKX_LINK_CFG_X2P(a) (a),-1,-1,-1

/**
 * Register (RSL) lbk#_sft_rst
 *
 * LBK Reset Register
 */
union cavm_lbkx_sft_rst
{
    uint64_t u;
    struct cavm_lbkx_sft_rst_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t reset                 : 1;  /**< [  0:  0](R/W1) Reset. When set, causes a reset of LBK, excluding RSL. */
#else /* Word 0 - Little Endian */
        uint64_t reset                 : 1;  /**< [  0:  0](R/W1) Reset. When set, causes a reset of LBK, excluding RSL. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_lbkx_sft_rst_s cn; */
};
typedef union cavm_lbkx_sft_rst cavm_lbkx_sft_rst_t;

static inline uint64_t CAVM_LBKX_SFT_RST(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_LBKX_SFT_RST(uint64_t a)
{
    if (a==0)
        return 0x87e018000000ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("LBKX_SFT_RST", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_LBKX_SFT_RST(a) cavm_lbkx_sft_rst_t
#define bustype_CAVM_LBKX_SFT_RST(a) CSR_TYPE_RSL
#define basename_CAVM_LBKX_SFT_RST(a) "LBKX_SFT_RST"
#define device_bar_CAVM_LBKX_SFT_RST(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_LBKX_SFT_RST(a) (a)
#define arguments_CAVM_LBKX_SFT_RST(a) (a),-1,-1,-1

#endif /* __CAVM_CSRS_LBK_H__ */
