#ifndef __CAVM_CSRS_DSUUB_H__
#define __CAVM_CSRS_DSUUB_H__
/* This file is auto-generated. Do not edit */

/***********************license start***********************************
* Copyright (C) 2020 Marvell International Ltd.
* SPDX-License-Identifier: BSD-3-Clause
* https://spdx.org/licenses
***********************license end**************************************/


/**
 * @file
 *
 * Configuration and status register (CSR) address and type definitions for
 * OcteonTX DSUUB.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration dsuub_bar_e
 *
 * DSUUB Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define CAVM_DSUUB_BAR_E_DSUUBX_PF_BAR0(a) (0x87e2c0000000ll + 0x1000000ll * (a))
#define CAVM_DSUUB_BAR_E_DSUUBX_PF_BAR0_SIZE 0x1000000ull

/**
 * Register (RSL32b) dsuub#_cluster_ppu_aidr
 *
 * DSUUB Cluster Architecture Identification Register
 * This register identifies the PPU architecture revision.
 */
union cavm_dsuubx_cluster_ppu_aidr
{
    uint32_t u;
    struct cavm_dsuubx_cluster_ppu_aidr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t arch_rev_major        : 4;  /**< [  7:  4](SRO) PPU architecture major revision.

                                                                 0b0001 = PPU architecture major revision 1. */
        uint32_t arch_rev_minor        : 4;  /**< [  3:  0](SRO) PPU architecture minor revision.

                                                                 0b0001 = PPU architecture minor revision 1. */
#else /* Word 0 - Little Endian */
        uint32_t arch_rev_minor        : 4;  /**< [  3:  0](SRO) PPU architecture minor revision.

                                                                 0b0001 = PPU architecture minor revision 1. */
        uint32_t arch_rev_major        : 4;  /**< [  7:  4](SRO) PPU architecture major revision.

                                                                 0b0001 = PPU architecture major revision 1. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_cluster_ppu_aidr_s cn; */
};
typedef union cavm_dsuubx_cluster_ppu_aidr cavm_dsuubx_cluster_ppu_aidr_t;

static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_AIDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_AIDR(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0030fccll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CLUSTER_PPU_AIDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTER_PPU_AIDR(a) cavm_dsuubx_cluster_ppu_aidr_t
#define bustype_CAVM_DSUUBX_CLUSTER_PPU_AIDR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTER_PPU_AIDR(a) "DSUUBX_CLUSTER_PPU_AIDR"
#define device_bar_CAVM_DSUUBX_CLUSTER_PPU_AIDR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTER_PPU_AIDR(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTER_PPU_AIDR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_aimr
 *
 * DSUUB Cluster Additional Interrupt Mask Register
 * This register controls the events that assert the interrupt output. Additional event
 * masking controls
 * are in the Interrupt Mask Register (DSUUB_PPU_IMR), Input Edge Sensitivity Register
 * (DSUUB_PPU_IESR),
 * and the Operating Mode Active Edge Sensitivity Register (DSUUB_PPU_OPSR).
 *
 * When an interrupt event is masked an occurrence of the event does not set the corresponding bit
 * in the interrupt status register.
 */
union cavm_dsuubx_cluster_ppu_aimr
{
    uint32_t u;
    struct cavm_dsuubx_cluster_ppu_aimr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_5_31         : 27;
        uint32_t sta_policy_op_irq_mask : 1; /**< [  4:  4](SR/W) Static operating policy transition completion
                                                                 event mask

                                                                 0 = Static operating policy transition
                                                                 completion event enabled.

                                                                 1 = Static operating policy transition
                                                                 completion event masked. */
        uint32_t sta_policy_pwr_irq_mask : 1;/**< [  3:  3](SR/W) Static power policy transition completion event
                                                                 mask

                                                                 0 = Static power policy transition completion
                                                                 event enabled.

                                                                 1 = Static power policy transition completion
                                                                 event masked. */
        uint32_t dyn_deny_irq_mask     : 1;  /**< [  2:  2](SR/W) Dynamic transition denial event mask

                                                                 0 = Dynamic transition denial event enabled.

                                                                 1 = Dynamic transition denial event masked. */
        uint32_t dyn_accept_irq_mask   : 1;  /**< [  1:  1](SR/W) Dynamic transition acceptance event mask

                                                                 0 = Dynamic transition acceptance event
                                                                 enabled.

                                                                 1 = Dynamic transition acceptance event
                                                                 masked. */
        uint32_t unspt_policy_irq_mask : 1;  /**< [  0:  0](SR/W) Unsupported policy event mask

                                                                 0 = Unsupported policy event enabled.

                                                                 1 = Unsupported policy event masked. */
#else /* Word 0 - Little Endian */
        uint32_t unspt_policy_irq_mask : 1;  /**< [  0:  0](SR/W) Unsupported policy event mask

                                                                 0 = Unsupported policy event enabled.

                                                                 1 = Unsupported policy event masked. */
        uint32_t dyn_accept_irq_mask   : 1;  /**< [  1:  1](SR/W) Dynamic transition acceptance event mask

                                                                 0 = Dynamic transition acceptance event
                                                                 enabled.

                                                                 1 = Dynamic transition acceptance event
                                                                 masked. */
        uint32_t dyn_deny_irq_mask     : 1;  /**< [  2:  2](SR/W) Dynamic transition denial event mask

                                                                 0 = Dynamic transition denial event enabled.

                                                                 1 = Dynamic transition denial event masked. */
        uint32_t sta_policy_pwr_irq_mask : 1;/**< [  3:  3](SR/W) Static power policy transition completion event
                                                                 mask

                                                                 0 = Static power policy transition completion
                                                                 event enabled.

                                                                 1 = Static power policy transition completion
                                                                 event masked. */
        uint32_t sta_policy_op_irq_mask : 1; /**< [  4:  4](SR/W) Static operating policy transition completion
                                                                 event mask

                                                                 0 = Static operating policy transition
                                                                 completion event enabled.

                                                                 1 = Static operating policy transition
                                                                 completion event masked. */
        uint32_t reserved_5_31         : 27;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_cluster_ppu_aimr_s cn; */
};
typedef union cavm_dsuubx_cluster_ppu_aimr cavm_dsuubx_cluster_ppu_aimr_t;

static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_AIMR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_AIMR(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0030034ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CLUSTER_PPU_AIMR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTER_PPU_AIMR(a) cavm_dsuubx_cluster_ppu_aimr_t
#define bustype_CAVM_DSUUBX_CLUSTER_PPU_AIMR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTER_PPU_AIMR(a) "DSUUBX_CLUSTER_PPU_AIMR"
#define device_bar_CAVM_DSUUBX_CLUSTER_PPU_AIMR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTER_PPU_AIMR(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTER_PPU_AIMR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_aisr
 *
 * DSUUB Cluster Additional Interrupt Status Register
 * This register contains information about events causing the assertion of the
 * interrupt output. It is
 * also used to clear interrupt events.
 *
 * A bit set to 1 indicates the event asserted the interrupt output. Multiple events
 * can be active at
 * the same time. When an interrupt event is masked an occurrence of that event does not set the
 * status bit.
 * A write of 1 to an event bit clears that event. A write of 0 has no effect. The
 * interrupt output
 * stays HIGH until all status bits in the Interrupt Status Register (DSUUB_PPU_ISR)
 * and the Additional
 * Interrupt Status Register (PPU_AISR) are set to 0b0.
 *
 * When an interrupt status is set to 1 in this register it sets the OTHER_IRQ bit in the Interrupt
 * Status Register (DSUUB_PPU_ISR). Status bits in this register are only cleared by
 * writing to this register.
 */
union cavm_dsuubx_cluster_ppu_aisr
{
    uint32_t u;
    struct cavm_dsuubx_cluster_ppu_aisr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_5_31         : 27;
        uint32_t sta_policy_op_irq     : 1;  /**< [  4:  4](SR/W1C/H) Static operating policy transition completion event
                                                                 status

                                                                 0 = No static operating policy transition
                                                                 completion event.

                                                                 1 = A static operating policy transition
                                                                 completion event asserted the interrupt
                                                                 output. */
        uint32_t sta_policy_pwr_irq    : 1;  /**< [  3:  3](SR/W1C/H) Static power policy transition completion event
                                                                 status

                                                                 0 = No static power policy transition
                                                                 completion event.

                                                                 1 = A static power policy transition completion
                                                                 event asserted the interrupt output. */
        uint32_t dyn_deny_irq          : 1;  /**< [  2:  2](SR/W1C/H) Dynamic transition denial event status

                                                                 0 = No dynamic transition denial event.

                                                                 1 = A dynamic transition denial event asserted
                                                                 the interrupt output. */
        uint32_t dyn_accept_irq        : 1;  /**< [  1:  1](SR/W1C/H) Dynamic transition acceptance event status

                                                                 0 = No dynamic transition acceptance event.

                                                                 1 = A dynamic transition acceptance event
                                                                 asserted the interrupt output. */
        uint32_t unspt_policy_irq      : 1;  /**< [  0:  0](SR/W1C/H) Unsupported policy event status

                                                                 0 = No unsupported policy event.

                                                                 1 = An unsupported policy event asserted the
                                                                 interrupt output. */
#else /* Word 0 - Little Endian */
        uint32_t unspt_policy_irq      : 1;  /**< [  0:  0](SR/W1C/H) Unsupported policy event status

                                                                 0 = No unsupported policy event.

                                                                 1 = An unsupported policy event asserted the
                                                                 interrupt output. */
        uint32_t dyn_accept_irq        : 1;  /**< [  1:  1](SR/W1C/H) Dynamic transition acceptance event status

                                                                 0 = No dynamic transition acceptance event.

                                                                 1 = A dynamic transition acceptance event
                                                                 asserted the interrupt output. */
        uint32_t dyn_deny_irq          : 1;  /**< [  2:  2](SR/W1C/H) Dynamic transition denial event status

                                                                 0 = No dynamic transition denial event.

                                                                 1 = A dynamic transition denial event asserted
                                                                 the interrupt output. */
        uint32_t sta_policy_pwr_irq    : 1;  /**< [  3:  3](SR/W1C/H) Static power policy transition completion event
                                                                 status

                                                                 0 = No static power policy transition
                                                                 completion event.

                                                                 1 = A static power policy transition completion
                                                                 event asserted the interrupt output. */
        uint32_t sta_policy_op_irq     : 1;  /**< [  4:  4](SR/W1C/H) Static operating policy transition completion event
                                                                 status

                                                                 0 = No static operating policy transition
                                                                 completion event.

                                                                 1 = A static operating policy transition
                                                                 completion event asserted the interrupt
                                                                 output. */
        uint32_t reserved_5_31         : 27;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_cluster_ppu_aisr_s cn; */
};
typedef union cavm_dsuubx_cluster_ppu_aisr cavm_dsuubx_cluster_ppu_aisr_t;

static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_AISR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_AISR(uint64_t a)
{
    if (a<=63)
        return 0x87e2c003003cll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CLUSTER_PPU_AISR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTER_PPU_AISR(a) cavm_dsuubx_cluster_ppu_aisr_t
#define bustype_CAVM_DSUUBX_CLUSTER_PPU_AISR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTER_PPU_AISR(a) "DSUUBX_CLUSTER_PPU_AISR"
#define device_bar_CAVM_DSUUBX_CLUSTER_PPU_AISR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTER_PPU_AISR(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTER_PPU_AISR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_cidr0
 *
 * DSUUB Cluster PPU Component Identification Register 0
 * Provides CoreSight discovery information.
 */
union cavm_dsuubx_cluster_ppu_cidr0
{
    uint32_t u;
    struct cavm_dsuubx_cluster_ppu_cidr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t prmbl_0               : 8;  /**< [  7:  0](SRO) CoreSight component identification preamble.

                                                                 0b00001101 = CoreSight component identification preamble. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_0               : 8;  /**< [  7:  0](SRO) CoreSight component identification preamble.

                                                                 0b00001101 = CoreSight component identification preamble. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_cluster_ppu_cidr0_s cn; */
};
typedef union cavm_dsuubx_cluster_ppu_cidr0 cavm_dsuubx_cluster_ppu_cidr0_t;

static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_CIDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_CIDR0(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0030ff0ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CLUSTER_PPU_CIDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTER_PPU_CIDR0(a) cavm_dsuubx_cluster_ppu_cidr0_t
#define bustype_CAVM_DSUUBX_CLUSTER_PPU_CIDR0(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTER_PPU_CIDR0(a) "DSUUBX_CLUSTER_PPU_CIDR0"
#define device_bar_CAVM_DSUUBX_CLUSTER_PPU_CIDR0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTER_PPU_CIDR0(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTER_PPU_CIDR0(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_cidr1
 *
 * DSUUB Cluster PPU Component Identification Register 1
 * Provides CoreSight discovery information.
 */
union cavm_dsuubx_cluster_ppu_cidr1
{
    uint32_t u;
    struct cavm_dsuubx_cluster_ppu_cidr1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t clas                  : 4;  /**< [  7:  4](SRO) CoreSight component class.

                                                                 0b1111 = CoreLink component. */
        uint32_t prmbl_1               : 4;  /**< [  3:  0](SRO) CoreSight component identification preamble.

                                                                 0b0000 = CoreSight component identification preamble. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_1               : 4;  /**< [  3:  0](SRO) CoreSight component identification preamble.

                                                                 0b0000 = CoreSight component identification preamble. */
        uint32_t clas                  : 4;  /**< [  7:  4](SRO) CoreSight component class.

                                                                 0b1111 = CoreLink component. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_cluster_ppu_cidr1_s cn; */
};
typedef union cavm_dsuubx_cluster_ppu_cidr1 cavm_dsuubx_cluster_ppu_cidr1_t;

static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_CIDR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_CIDR1(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0030ff4ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CLUSTER_PPU_CIDR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTER_PPU_CIDR1(a) cavm_dsuubx_cluster_ppu_cidr1_t
#define bustype_CAVM_DSUUBX_CLUSTER_PPU_CIDR1(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTER_PPU_CIDR1(a) "DSUUBX_CLUSTER_PPU_CIDR1"
#define device_bar_CAVM_DSUUBX_CLUSTER_PPU_CIDR1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTER_PPU_CIDR1(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTER_PPU_CIDR1(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_cidr2
 *
 * DSUUB Cluster PPU Component Identification Register 2
 * Provides CoreSight discovery information.
 */
union cavm_dsuubx_cluster_ppu_cidr2
{
    uint32_t u;
    struct cavm_dsuubx_cluster_ppu_cidr2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t prmbl_2               : 8;  /**< [  7:  0](SRO) CoreSight component identification preamble.

                                                                 0b00000101 = CoreSight component identification preamble. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_2               : 8;  /**< [  7:  0](SRO) CoreSight component identification preamble.

                                                                 0b00000101 = CoreSight component identification preamble. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_cluster_ppu_cidr2_s cn; */
};
typedef union cavm_dsuubx_cluster_ppu_cidr2 cavm_dsuubx_cluster_ppu_cidr2_t;

static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_CIDR2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_CIDR2(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0030ff8ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CLUSTER_PPU_CIDR2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTER_PPU_CIDR2(a) cavm_dsuubx_cluster_ppu_cidr2_t
#define bustype_CAVM_DSUUBX_CLUSTER_PPU_CIDR2(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTER_PPU_CIDR2(a) "DSUUBX_CLUSTER_PPU_CIDR2"
#define device_bar_CAVM_DSUUBX_CLUSTER_PPU_CIDR2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTER_PPU_CIDR2(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTER_PPU_CIDR2(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_dcdr0
 *
 * DSUUB Cluster Device Control Delay Configuration Register 0
 * This register is used to program device control delay parameters.
 */
union cavm_dsuubx_cluster_ppu_dcdr0
{
    uint32_t u;
    struct cavm_dsuubx_cluster_ppu_dcdr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_24_31        : 8;
        uint32_t rst_hwstat_dly        : 8;  /**< [ 23: 16](SR/W) Delay from reset de-assertion to HWSTAT update. */
        uint32_t iso_clken_dly         : 8;  /**< [ 15:  8](SR/W) Delay from isolation enable de-assertion to clock
                                                                 enable assertion. */
        uint32_t clken_rst_dly         : 8;  /**< [  7:  0](SR/W) Delay from clock enable assertion to reset de-
                                                                 assertion. */
#else /* Word 0 - Little Endian */
        uint32_t clken_rst_dly         : 8;  /**< [  7:  0](SR/W) Delay from clock enable assertion to reset de-
                                                                 assertion. */
        uint32_t iso_clken_dly         : 8;  /**< [ 15:  8](SR/W) Delay from isolation enable de-assertion to clock
                                                                 enable assertion. */
        uint32_t rst_hwstat_dly        : 8;  /**< [ 23: 16](SR/W) Delay from reset de-assertion to HWSTAT update. */
        uint32_t reserved_24_31        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_cluster_ppu_dcdr0_s cn; */
};
typedef union cavm_dsuubx_cluster_ppu_dcdr0 cavm_dsuubx_cluster_ppu_dcdr0_t;

static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_DCDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_DCDR0(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0030170ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CLUSTER_PPU_DCDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTER_PPU_DCDR0(a) cavm_dsuubx_cluster_ppu_dcdr0_t
#define bustype_CAVM_DSUUBX_CLUSTER_PPU_DCDR0(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTER_PPU_DCDR0(a) "DSUUBX_CLUSTER_PPU_DCDR0"
#define device_bar_CAVM_DSUUBX_CLUSTER_PPU_DCDR0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTER_PPU_DCDR0(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTER_PPU_DCDR0(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_dcdr1
 *
 * DSUUB Cluster Device Control Delay Configuration Register 1
 * This register is used to program device control delay parameters.
 */
union cavm_dsuubx_cluster_ppu_dcdr1
{
    uint32_t u;
    struct cavm_dsuubx_cluster_ppu_dcdr1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t clken_iso_dly         : 8;  /**< [ 15:  8](SR/W) Delay from clock enable de-assertion to isolation enable
                                                                 assertion. */
        uint32_t iso_rst_dly           : 8;  /**< [  7:  0](SR/W) Delay from isolation enable assertion to reset assertion. */
#else /* Word 0 - Little Endian */
        uint32_t iso_rst_dly           : 8;  /**< [  7:  0](SR/W) Delay from isolation enable assertion to reset assertion. */
        uint32_t clken_iso_dly         : 8;  /**< [ 15:  8](SR/W) Delay from clock enable de-assertion to isolation enable
                                                                 assertion. */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_cluster_ppu_dcdr1_s cn; */
};
typedef union cavm_dsuubx_cluster_ppu_dcdr1 cavm_dsuubx_cluster_ppu_dcdr1_t;

static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_DCDR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_DCDR1(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0030174ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CLUSTER_PPU_DCDR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTER_PPU_DCDR1(a) cavm_dsuubx_cluster_ppu_dcdr1_t
#define bustype_CAVM_DSUUBX_CLUSTER_PPU_DCDR1(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTER_PPU_DCDR1(a) "DSUUBX_CLUSTER_PPU_DCDR1"
#define device_bar_CAVM_DSUUBX_CLUSTER_PPU_DCDR1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTER_PPU_DCDR1(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTER_PPU_DCDR1(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_disr
 *
 * DSUUB Cluster Device Interface Input Current Status Register
 * This read-only register contains status reflecting the values of the device interface inputs.
 */
union cavm_dsuubx_cluster_ppu_disr
{
    uint32_t u;
    struct cavm_dsuubx_cluster_ppu_disr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_27_31        : 5;
        uint32_t op_devactive_status   : 3;  /**< [ 26: 24](SRO/H) Status of the operating mode DEVPACTIVE
                                                                 inputs.

                                                                 0b000 = Request for OPMODE_00, ONE_SLICE_
                                                                 SF_ONLY_ON.

                                                                 0b001 = Request for OPMODE_01, ONE_SLICE_
                                                                 HALF_RAM_ON.

                                                                 0b100 = Request for OPMODE_04, ALL_SLICE_
                                                                 SF_ONLY_ON.

                                                                 0b101 = Request for OPMODE_05, ALL_SLICE_
                                                                 HALF_RAM_ON.

                                                                 0b01x = Request for OPMODE_03, ONE_SLICE_
                                                                 FULL_RAM_ON.

                                                                 0b11x = Request for OPMODE_07, ALL_SLICE_
                                                                 FULL_RAM_ON. */
        uint32_t reserved_11_23        : 13;
        uint32_t pwr_devactive_status  : 11; /**< [ 10:  0](SRO/H) Status of the power mode DEVPACTIVE inputs.

                                                                 0b00000000000 = Request for OFF.

                                                                 0b0000000001x = Request for OFF_EMU.

                                                                 0b000000001xx = Request for MEM_RET.

                                                                 0b00000001xxx = Request for MEM_RET_EMU.

                                                                 0b0001xxxxxxx = Request for FUNC_RET.

                                                                 0b001xxxxxxxx = Request for ON.

                                                                 0b01xxxxxxxxx = Request for WARM_RST.

                                                                 0b1xxxxxxxxxx = Request for DBG_RECOV. */
#else /* Word 0 - Little Endian */
        uint32_t pwr_devactive_status  : 11; /**< [ 10:  0](SRO/H) Status of the power mode DEVPACTIVE inputs.

                                                                 0b00000000000 = Request for OFF.

                                                                 0b0000000001x = Request for OFF_EMU.

                                                                 0b000000001xx = Request for MEM_RET.

                                                                 0b00000001xxx = Request for MEM_RET_EMU.

                                                                 0b0001xxxxxxx = Request for FUNC_RET.

                                                                 0b001xxxxxxxx = Request for ON.

                                                                 0b01xxxxxxxxx = Request for WARM_RST.

                                                                 0b1xxxxxxxxxx = Request for DBG_RECOV. */
        uint32_t reserved_11_23        : 13;
        uint32_t op_devactive_status   : 3;  /**< [ 26: 24](SRO/H) Status of the operating mode DEVPACTIVE
                                                                 inputs.

                                                                 0b000 = Request for OPMODE_00, ONE_SLICE_
                                                                 SF_ONLY_ON.

                                                                 0b001 = Request for OPMODE_01, ONE_SLICE_
                                                                 HALF_RAM_ON.

                                                                 0b100 = Request for OPMODE_04, ALL_SLICE_
                                                                 SF_ONLY_ON.

                                                                 0b101 = Request for OPMODE_05, ALL_SLICE_
                                                                 HALF_RAM_ON.

                                                                 0b01x = Request for OPMODE_03, ONE_SLICE_
                                                                 FULL_RAM_ON.

                                                                 0b11x = Request for OPMODE_07, ALL_SLICE_
                                                                 FULL_RAM_ON. */
        uint32_t reserved_27_31        : 5;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_cluster_ppu_disr_s cn; */
};
typedef union cavm_dsuubx_cluster_ppu_disr cavm_dsuubx_cluster_ppu_disr_t;

static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_DISR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_DISR(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0030010ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CLUSTER_PPU_DISR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTER_PPU_DISR(a) cavm_dsuubx_cluster_ppu_disr_t
#define bustype_CAVM_DSUUBX_CLUSTER_PPU_DISR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTER_PPU_DISR(a) "DSUUBX_CLUSTER_PPU_DISR"
#define device_bar_CAVM_DSUUBX_CLUSTER_PPU_DISR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTER_PPU_DISR(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTER_PPU_DISR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_fulrr
 *
 * DSUUB Cluster Full Retention RAM Configuration Register
 * This register controls bits [15:8] of the PCSMPSTATE output when in FULL_RET mode. These
 * outputs are used by the PCSM to configure the logic regions and RAMs that are retained.
 */
union cavm_dsuubx_cluster_ppu_fulrr
{
    uint32_t u;
    struct cavm_dsuubx_cluster_ppu_fulrr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t full_ret_ram_cfg      : 8;  /**< [  7:  0](SR/W) FULL_RET RAM configuration bits. */
#else /* Word 0 - Little Endian */
        uint32_t full_ret_ram_cfg      : 8;  /**< [  7:  0](SR/W) FULL_RET RAM configuration bits. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_cluster_ppu_fulrr_s cn; */
};
typedef union cavm_dsuubx_cluster_ppu_fulrr cavm_dsuubx_cluster_ppu_fulrr_t;

static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_FULRR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_FULRR(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0030054ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CLUSTER_PPU_FULRR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTER_PPU_FULRR(a) cavm_dsuubx_cluster_ppu_fulrr_t
#define bustype_CAVM_DSUUBX_CLUSTER_PPU_FULRR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTER_PPU_FULRR(a) "DSUUBX_CLUSTER_PPU_FULRR"
#define device_bar_CAVM_DSUUBX_CLUSTER_PPU_FULRR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTER_PPU_FULRR(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTER_PPU_FULRR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_funrr
 *
 * DSUUB Cluster Functional Retention RAM Configuration Register
 * This register is reserved.
 */
union cavm_dsuubx_cluster_ppu_funrr
{
    uint32_t u;
    struct cavm_dsuubx_cluster_ppu_funrr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t func_ret_ram_cfg      : 8;  /**< [  7:  0](SR/W) FUNC_RET RAM configuration bits. If FUNC_RET
                                                                 is not supported, or FUNC_RET_RAM_REG_CFG is
                                                                 set to 0b0, this field is reserved.

                                                                 0b00000000 = Reserved */
#else /* Word 0 - Little Endian */
        uint32_t func_ret_ram_cfg      : 8;  /**< [  7:  0](SR/W) FUNC_RET RAM configuration bits. If FUNC_RET
                                                                 is not supported, or FUNC_RET_RAM_REG_CFG is
                                                                 set to 0b0, this field is reserved.

                                                                 0b00000000 = Reserved */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_cluster_ppu_funrr_s cn; */
};
typedef union cavm_dsuubx_cluster_ppu_funrr cavm_dsuubx_cluster_ppu_funrr_t;

static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_FUNRR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_FUNRR(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0030050ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CLUSTER_PPU_FUNRR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTER_PPU_FUNRR(a) cavm_dsuubx_cluster_ppu_funrr_t
#define bustype_CAVM_DSUUBX_CLUSTER_PPU_FUNRR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTER_PPU_FUNRR(a) "DSUUBX_CLUSTER_PPU_FUNRR"
#define device_bar_CAVM_DSUUBX_CLUSTER_PPU_FUNRR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTER_PPU_FUNRR(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTER_PPU_FUNRR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_idr0
 *
 * DSUUB Cluster PPU Identification Register 0
 * This read-only register contains information on the type and number of channels on the device
 * interface and power and operating modes supported.
 *
 * Additional information on optional features can be found in the PPU Identification
 * Register 1 (DSUUB_
 * PPU_IDR1).
 */
union cavm_dsuubx_cluster_ppu_idr0
{
    uint32_t u;
    struct cavm_dsuubx_cluster_ppu_idr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_30_31        : 2;
        uint32_t dyn_wrm_rst_spt       : 1;  /**< [ 29: 29](SRO) Dynamic WARM_RST support.

                                                                 1 = Dynamic WARM_RST supported. */
        uint32_t dyn_on_spt            : 1;  /**< [ 28: 28](SRO) Dynamic ON support.

                                                                 1 = Dynamic ON supported. */
        uint32_t dyn_func_ret_spt      : 1;  /**< [ 27: 27](SRO) Dynamic DYN_FUNC_RET_SPT support.

                                                                 1 = Dynamic DYN_FUNC_RET_SPT
                                                                 supported. */
        uint32_t dyn_full_ret_spt      : 1;  /**< [ 26: 26](SRO) Dynamic DYN_FULL_RET_SPT support.

                                                                 0 = Dynamic DYN_FULL_RET_SPT not
                                                                 supported. */
        uint32_t dyn_mem_off_spt       : 1;  /**< [ 25: 25](SRO) Dynamic MEM_OFF support.

                                                                 0 = Dynamic MEM_OFF not supported. */
        uint32_t dyn_lgc_ret_spt       : 1;  /**< [ 24: 24](SRO) Dynamic LOGIC_RET support.

                                                                 0 = Dynamic LOGIC_RET not supported. */
        uint32_t dyn_mem_ret_emu_spt   : 1;  /**< [ 23: 23](SRO) Dynamic DYN_MEM_RET_EMU_SPT support.

                                                                 1 = Dynamic DYN_MEM_RET_EMU_SPT
                                                                 supported. */
        uint32_t dyn_mem_ret_spt       : 1;  /**< [ 22: 22](SRO) Dynamic DYN_MEM_RET_SPT support.

                                                                 1 = Dynamic DYN_MEM_RET_SPT
                                                                 supported. */
        uint32_t dyn_off_emu_spt       : 1;  /**< [ 21: 21](SRO) Dynamic OFF_EMU support.

                                                                 1 = Dynamic OFF_EMU supported. */
        uint32_t dyn_off_spt           : 1;  /**< [ 20: 20](SRO) Dynamic OFF support.

                                                                 1 = Dynamic OFF supported. */
        uint32_t reserved_19           : 1;
        uint32_t sta_dbg_recov_spt     : 1;  /**< [ 18: 18](SRO) DBG_RECOV support.

                                                                 1 = DBG_RECOV supported. */
        uint32_t sta_wrm_rst_spt       : 1;  /**< [ 17: 17](SRO) WARM_RST support.

                                                                 1 = WRM_RST supported. */
        uint32_t sta_on_spt            : 1;  /**< [ 16: 16](SRO) ON support.

                                                                 1 = ON supported. */
        uint32_t sta_func_ret_spt      : 1;  /**< [ 15: 15](SRO) FUNC_RET support.

                                                                 1 = FUNC_RET supported. */
        uint32_t sta_full_ret_spt      : 1;  /**< [ 14: 14](SRO) FULL_RET support.

                                                                 0 = FULL_RET not supported. */
        uint32_t sta_mem_off_spt       : 1;  /**< [ 13: 13](SRO) MEM_OFF support.

                                                                 0 = MEM_OFF not supported. */
        uint32_t sta_lgc_ret_spt       : 1;  /**< [ 12: 12](SRO) LOGIC_RET support.

                                                                 0 = LOGIC_RET not supported. */
        uint32_t sta_mem_ret_emu_spt   : 1;  /**< [ 11: 11](SRO) MEM_RET_EMU support.

                                                                 1 = MEM_RET_EMU supported. */
        uint32_t sta_mem_ret_spt       : 1;  /**< [ 10: 10](SRO) MEM_RET support.

                                                                 1 = MEM_RET supported. */
        uint32_t sta_off_emu_spt       : 1;  /**< [  9:  9](SRO) OFF_EMU support.

                                                                 1 = OFF_EMU supported. */
        uint32_t sta_off_spt           : 1;  /**< [  8:  8](SRO) OFF support.

                                                                 1 = OFF supported. */
        uint32_t num_opmode            : 4;  /**< [  7:  4](SRO) No. of operating modes supported, minus 1.

                                                                 0b0101 = 6 operating modes supported. */
        uint32_t devchan               : 4;  /**< [  3:  0](SRO) No. of Device Interface Channels.

                                                                 0b0000 = 0 (P-channel PPU). */
#else /* Word 0 - Little Endian */
        uint32_t devchan               : 4;  /**< [  3:  0](SRO) No. of Device Interface Channels.

                                                                 0b0000 = 0 (P-channel PPU). */
        uint32_t num_opmode            : 4;  /**< [  7:  4](SRO) No. of operating modes supported, minus 1.

                                                                 0b0101 = 6 operating modes supported. */
        uint32_t sta_off_spt           : 1;  /**< [  8:  8](SRO) OFF support.

                                                                 1 = OFF supported. */
        uint32_t sta_off_emu_spt       : 1;  /**< [  9:  9](SRO) OFF_EMU support.

                                                                 1 = OFF_EMU supported. */
        uint32_t sta_mem_ret_spt       : 1;  /**< [ 10: 10](SRO) MEM_RET support.

                                                                 1 = MEM_RET supported. */
        uint32_t sta_mem_ret_emu_spt   : 1;  /**< [ 11: 11](SRO) MEM_RET_EMU support.

                                                                 1 = MEM_RET_EMU supported. */
        uint32_t sta_lgc_ret_spt       : 1;  /**< [ 12: 12](SRO) LOGIC_RET support.

                                                                 0 = LOGIC_RET not supported. */
        uint32_t sta_mem_off_spt       : 1;  /**< [ 13: 13](SRO) MEM_OFF support.

                                                                 0 = MEM_OFF not supported. */
        uint32_t sta_full_ret_spt      : 1;  /**< [ 14: 14](SRO) FULL_RET support.

                                                                 0 = FULL_RET not supported. */
        uint32_t sta_func_ret_spt      : 1;  /**< [ 15: 15](SRO) FUNC_RET support.

                                                                 1 = FUNC_RET supported. */
        uint32_t sta_on_spt            : 1;  /**< [ 16: 16](SRO) ON support.

                                                                 1 = ON supported. */
        uint32_t sta_wrm_rst_spt       : 1;  /**< [ 17: 17](SRO) WARM_RST support.

                                                                 1 = WRM_RST supported. */
        uint32_t sta_dbg_recov_spt     : 1;  /**< [ 18: 18](SRO) DBG_RECOV support.

                                                                 1 = DBG_RECOV supported. */
        uint32_t reserved_19           : 1;
        uint32_t dyn_off_spt           : 1;  /**< [ 20: 20](SRO) Dynamic OFF support.

                                                                 1 = Dynamic OFF supported. */
        uint32_t dyn_off_emu_spt       : 1;  /**< [ 21: 21](SRO) Dynamic OFF_EMU support.

                                                                 1 = Dynamic OFF_EMU supported. */
        uint32_t dyn_mem_ret_spt       : 1;  /**< [ 22: 22](SRO) Dynamic DYN_MEM_RET_SPT support.

                                                                 1 = Dynamic DYN_MEM_RET_SPT
                                                                 supported. */
        uint32_t dyn_mem_ret_emu_spt   : 1;  /**< [ 23: 23](SRO) Dynamic DYN_MEM_RET_EMU_SPT support.

                                                                 1 = Dynamic DYN_MEM_RET_EMU_SPT
                                                                 supported. */
        uint32_t dyn_lgc_ret_spt       : 1;  /**< [ 24: 24](SRO) Dynamic LOGIC_RET support.

                                                                 0 = Dynamic LOGIC_RET not supported. */
        uint32_t dyn_mem_off_spt       : 1;  /**< [ 25: 25](SRO) Dynamic MEM_OFF support.

                                                                 0 = Dynamic MEM_OFF not supported. */
        uint32_t dyn_full_ret_spt      : 1;  /**< [ 26: 26](SRO) Dynamic DYN_FULL_RET_SPT support.

                                                                 0 = Dynamic DYN_FULL_RET_SPT not
                                                                 supported. */
        uint32_t dyn_func_ret_spt      : 1;  /**< [ 27: 27](SRO) Dynamic DYN_FUNC_RET_SPT support.

                                                                 1 = Dynamic DYN_FUNC_RET_SPT
                                                                 supported. */
        uint32_t dyn_on_spt            : 1;  /**< [ 28: 28](SRO) Dynamic ON support.

                                                                 1 = Dynamic ON supported. */
        uint32_t dyn_wrm_rst_spt       : 1;  /**< [ 29: 29](SRO) Dynamic WARM_RST support.

                                                                 1 = Dynamic WARM_RST supported. */
        uint32_t reserved_30_31        : 2;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_cluster_ppu_idr0_s cn; */
};
typedef union cavm_dsuubx_cluster_ppu_idr0 cavm_dsuubx_cluster_ppu_idr0_t;

static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_IDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_IDR0(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0030fb0ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CLUSTER_PPU_IDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTER_PPU_IDR0(a) cavm_dsuubx_cluster_ppu_idr0_t
#define bustype_CAVM_DSUUBX_CLUSTER_PPU_IDR0(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTER_PPU_IDR0(a) "DSUUBX_CLUSTER_PPU_IDR0"
#define device_bar_CAVM_DSUUBX_CLUSTER_PPU_IDR0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTER_PPU_IDR0(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTER_PPU_IDR0(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_idr1
 *
 * DSUUB Cluster PPU Identification Register 1
 * This read-only register contains information on the optional features and configurations that are
 * supported by this PPU.
 *
 * Additional information on optional features can be found in the PPU Identification
 * Register 0 (DSUUB_
 * PPU_IDR0).
 */
union cavm_dsuubx_cluster_ppu_idr1
{
    uint32_t u;
    struct cavm_dsuubx_cluster_ppu_idr1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_13_31        : 19;
        uint32_t off_mem_ret_trans     : 1;  /**< [ 12: 12](SRO) OFF to MEM_RET direct transition. Indicates
                                                                 if direct transitions from OFF to MEM_RET
                                                                 and from OFF_EMU to MEM_RET_EMU are
                                                                 supported.

                                                                 1 = OFF to MEM_RET direct transition
                                                                 supported. */
        uint32_t reserved_11           : 1;
        uint32_t op_active             : 1;  /**< [ 10: 10](SRO) Operating mode use model for dynamic
                                                                 transitions.

                                                                 0 = Ladder use model. */
        uint32_t sta_policy_op_irq_spt : 1;  /**< [  9:  9](SRO) Operating policy transition completion event
                                                                 status.

                                                                 1 = Operating policy transition completion
                                                                 events supported. */
        uint32_t sta_policy_pwr_irq_spt : 1; /**< [  8:  8](SRO) Power policy transition completion event
                                                                 status.

                                                                 1 = Power policy transition completion
                                                                 events supported. */
        uint32_t reserved_7            : 1;
        uint32_t func_ret_ram_reg      : 1;  /**< [  6:  6](SRO) Indicates if the DSUUB_PPU_FUNRR register is
                                                                 present or reserved.

                                                                 0 = DSUUB_PPU_FUNRR is reserved. */
        uint32_t full_ret_ram_reg      : 1;  /**< [  5:  5](SRO) Indicates if the DSUUB_PPU_FULRR register is
                                                                 present or reserved.

                                                                 0 = DSUUB_PPU_FULRR is reserved. */
        uint32_t mem_ret_ram_reg       : 1;  /**< [  4:  4](SRO) Indicates if the DSUUB_PPU_MEMRR register is
                                                                 present or reserved.

                                                                 1 = DSUUB_PPU_MEMRR is present. */
        uint32_t reserved_3            : 1;
        uint32_t lock_spt              : 1;  /**< [  2:  2](SRO) Indicates if the lock and the lock interrupt
                                                                 event are supported.

                                                                 1 = Lock and the lock interrupt event are
                                                                 supported. */
        uint32_t sw_dev_del_spt        : 1;  /**< [  1:  1](SRO) Software device delay control configuration
                                                                 support.

                                                                 1 = Software device delay control
                                                                 configuration supported. */
        uint32_t pwr_mode_entry_del_spt : 1; /**< [  0:  0](SRO) Power mode entry delay support.

                                                                 0 = Power mode entry delay not supported. */
#else /* Word 0 - Little Endian */
        uint32_t pwr_mode_entry_del_spt : 1; /**< [  0:  0](SRO) Power mode entry delay support.

                                                                 0 = Power mode entry delay not supported. */
        uint32_t sw_dev_del_spt        : 1;  /**< [  1:  1](SRO) Software device delay control configuration
                                                                 support.

                                                                 1 = Software device delay control
                                                                 configuration supported. */
        uint32_t lock_spt              : 1;  /**< [  2:  2](SRO) Indicates if the lock and the lock interrupt
                                                                 event are supported.

                                                                 1 = Lock and the lock interrupt event are
                                                                 supported. */
        uint32_t reserved_3            : 1;
        uint32_t mem_ret_ram_reg       : 1;  /**< [  4:  4](SRO) Indicates if the DSUUB_PPU_MEMRR register is
                                                                 present or reserved.

                                                                 1 = DSUUB_PPU_MEMRR is present. */
        uint32_t full_ret_ram_reg      : 1;  /**< [  5:  5](SRO) Indicates if the DSUUB_PPU_FULRR register is
                                                                 present or reserved.

                                                                 0 = DSUUB_PPU_FULRR is reserved. */
        uint32_t func_ret_ram_reg      : 1;  /**< [  6:  6](SRO) Indicates if the DSUUB_PPU_FUNRR register is
                                                                 present or reserved.

                                                                 0 = DSUUB_PPU_FUNRR is reserved. */
        uint32_t reserved_7            : 1;
        uint32_t sta_policy_pwr_irq_spt : 1; /**< [  8:  8](SRO) Power policy transition completion event
                                                                 status.

                                                                 1 = Power policy transition completion
                                                                 events supported. */
        uint32_t sta_policy_op_irq_spt : 1;  /**< [  9:  9](SRO) Operating policy transition completion event
                                                                 status.

                                                                 1 = Operating policy transition completion
                                                                 events supported. */
        uint32_t op_active             : 1;  /**< [ 10: 10](SRO) Operating mode use model for dynamic
                                                                 transitions.

                                                                 0 = Ladder use model. */
        uint32_t reserved_11           : 1;
        uint32_t off_mem_ret_trans     : 1;  /**< [ 12: 12](SRO) OFF to MEM_RET direct transition. Indicates
                                                                 if direct transitions from OFF to MEM_RET
                                                                 and from OFF_EMU to MEM_RET_EMU are
                                                                 supported.

                                                                 1 = OFF to MEM_RET direct transition
                                                                 supported. */
        uint32_t reserved_13_31        : 19;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_cluster_ppu_idr1_s cn; */
};
typedef union cavm_dsuubx_cluster_ppu_idr1 cavm_dsuubx_cluster_ppu_idr1_t;

static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_IDR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_IDR1(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0030fb4ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CLUSTER_PPU_IDR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTER_PPU_IDR1(a) cavm_dsuubx_cluster_ppu_idr1_t
#define bustype_CAVM_DSUUBX_CLUSTER_PPU_IDR1(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTER_PPU_IDR1(a) "DSUUBX_CLUSTER_PPU_IDR1"
#define device_bar_CAVM_DSUUBX_CLUSTER_PPU_IDR1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTER_PPU_IDR1(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTER_PPU_IDR1(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_iesr
 *
 * DSUUB Cluster Input Edge Sensitivity Register
 * This register configures the transitions on the power mode DEVPACTIVE inputs that generate an
 * Input Edge interrupt event.
 *
 * When an event is masked an occurrence of the event does not set the corresponding bit in the
 * interrupt status register.
 */
union cavm_dsuubx_cluster_ppu_iesr
{
    uint32_t u;
    struct cavm_dsuubx_cluster_ppu_iesr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_22_31        : 10;
        uint32_t devactive10_edge      : 2;  /**< [ 21: 20](SR/W) Configures the transitions on the DEVPACTIVE[10]
                                                                 input (DBG_RECOV) that generate an Input Edge
                                                                 interrupt event.

                                                                 0b00 = Event masked.

                                                                 0b01 = Rising edge of event generates an interrupt.

                                                                 0b10 = Falling edge of event generates an interrupt.

                                                                 0b11 = Both edges of event generate an interrupt. */
        uint32_t devactive09_edge      : 2;  /**< [ 19: 18](SR/W) Configures the transitions on the DEVPACTIVE[9]
                                                                 input (WARM_RST) that generate an Input Edge
                                                                 interrupt event.

                                                                 0b00 = Event masked.

                                                                 0b01 = Rising edge of event generates an interrupt.

                                                                 0b10 = Falling edge of event generates an interrupt.

                                                                 0b11 = Both edges of event generate an interrupt. */
        uint32_t devactive08_edge      : 2;  /**< [ 17: 16](SR/W) Configures the transitions on the DEVPACTIVE[8]
                                                                 input (ON) that generate an Input Edge interrupt
                                                                 event.

                                                                 0b00 = Event masked.

                                                                 0b01 = Rising edge of event generates an interrupt.

                                                                 0b10 = Falling edge of event generates an interrupt.

                                                                 0b11 = Both edges of event generate an interrupt. */
        uint32_t devactive07_edge      : 2;  /**< [ 15: 14](SR/W) Configures the transitions on the DEVPACTIVE[7]
                                                                 input (FUNC_RET) that generate an Input Edge
                                                                 interrupt event.

                                                                 0b00 = Event masked.

                                                                 0b01 = Rising edge of event generates an interrupt.

                                                                 0b10 = Falling edge of event generates an interrupt.

                                                                 0b11 = Both edges of event generate an interrupt. */
        uint32_t reserved_8_13         : 6;
        uint32_t devactive03_edge      : 2;  /**< [  7:  6](SR/W) Configures the transitions on the DEVPACTIVE[3]
                                                                 input (MEM_RET_EMU) that generate an Input
                                                                 Edge interrupt event.

                                                                 0b00 = Event masked.

                                                                 0b01 = Rising edge of event generates an interrupt.

                                                                 0b10 = Falling edge of event generates an interrupt.

                                                                 0b11 = Both edges of event generate an interrupt. */
        uint32_t devactive02_edge      : 2;  /**< [  5:  4](SR/W) Configures the transitions on the DEVPACTIVE[2]
                                                                 input (MEM_RET) that generate an Input Edge
                                                                 interrupt event.

                                                                 0b00 = Event masked.

                                                                 0b01 = Rising edge of event generates an interrupt.

                                                                 0b10 = Falling edge of event generates an interrupt.

                                                                 0b11 = Both edges of event generate an interrupt. */
        uint32_t devactive01_edge      : 2;  /**< [  3:  2](SR/W) Configures the transitions on the DEVPACTIVE[1]
                                                                 input (OFF_EMU) that generate an Input Edge
                                                                 interrupt event.

                                                                 0b00 = Event masked.

                                                                 0b01 = Rising edge of event generates an interrupt.

                                                                 0b10 = Falling edge of event generates an interrupt.

                                                                 0b11 = Both edges of event generate an interrupt. */
        uint32_t reserved_0_1          : 2;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_1          : 2;
        uint32_t devactive01_edge      : 2;  /**< [  3:  2](SR/W) Configures the transitions on the DEVPACTIVE[1]
                                                                 input (OFF_EMU) that generate an Input Edge
                                                                 interrupt event.

                                                                 0b00 = Event masked.

                                                                 0b01 = Rising edge of event generates an interrupt.

                                                                 0b10 = Falling edge of event generates an interrupt.

                                                                 0b11 = Both edges of event generate an interrupt. */
        uint32_t devactive02_edge      : 2;  /**< [  5:  4](SR/W) Configures the transitions on the DEVPACTIVE[2]
                                                                 input (MEM_RET) that generate an Input Edge
                                                                 interrupt event.

                                                                 0b00 = Event masked.

                                                                 0b01 = Rising edge of event generates an interrupt.

                                                                 0b10 = Falling edge of event generates an interrupt.

                                                                 0b11 = Both edges of event generate an interrupt. */
        uint32_t devactive03_edge      : 2;  /**< [  7:  6](SR/W) Configures the transitions on the DEVPACTIVE[3]
                                                                 input (MEM_RET_EMU) that generate an Input
                                                                 Edge interrupt event.

                                                                 0b00 = Event masked.

                                                                 0b01 = Rising edge of event generates an interrupt.

                                                                 0b10 = Falling edge of event generates an interrupt.

                                                                 0b11 = Both edges of event generate an interrupt. */
        uint32_t reserved_8_13         : 6;
        uint32_t devactive07_edge      : 2;  /**< [ 15: 14](SR/W) Configures the transitions on the DEVPACTIVE[7]
                                                                 input (FUNC_RET) that generate an Input Edge
                                                                 interrupt event.

                                                                 0b00 = Event masked.

                                                                 0b01 = Rising edge of event generates an interrupt.

                                                                 0b10 = Falling edge of event generates an interrupt.

                                                                 0b11 = Both edges of event generate an interrupt. */
        uint32_t devactive08_edge      : 2;  /**< [ 17: 16](SR/W) Configures the transitions on the DEVPACTIVE[8]
                                                                 input (ON) that generate an Input Edge interrupt
                                                                 event.

                                                                 0b00 = Event masked.

                                                                 0b01 = Rising edge of event generates an interrupt.

                                                                 0b10 = Falling edge of event generates an interrupt.

                                                                 0b11 = Both edges of event generate an interrupt. */
        uint32_t devactive09_edge      : 2;  /**< [ 19: 18](SR/W) Configures the transitions on the DEVPACTIVE[9]
                                                                 input (WARM_RST) that generate an Input Edge
                                                                 interrupt event.

                                                                 0b00 = Event masked.

                                                                 0b01 = Rising edge of event generates an interrupt.

                                                                 0b10 = Falling edge of event generates an interrupt.

                                                                 0b11 = Both edges of event generate an interrupt. */
        uint32_t devactive10_edge      : 2;  /**< [ 21: 20](SR/W) Configures the transitions on the DEVPACTIVE[10]
                                                                 input (DBG_RECOV) that generate an Input Edge
                                                                 interrupt event.

                                                                 0b00 = Event masked.

                                                                 0b01 = Rising edge of event generates an interrupt.

                                                                 0b10 = Falling edge of event generates an interrupt.

                                                                 0b11 = Both edges of event generate an interrupt. */
        uint32_t reserved_22_31        : 10;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_cluster_ppu_iesr_s cn; */
};
typedef union cavm_dsuubx_cluster_ppu_iesr cavm_dsuubx_cluster_ppu_iesr_t;

static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_IESR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_IESR(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0030040ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CLUSTER_PPU_IESR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTER_PPU_IESR(a) cavm_dsuubx_cluster_ppu_iesr_t
#define bustype_CAVM_DSUUBX_CLUSTER_PPU_IESR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTER_PPU_IESR(a) "DSUUBX_CLUSTER_PPU_IESR"
#define device_bar_CAVM_DSUUBX_CLUSTER_PPU_IESR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTER_PPU_IESR(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTER_PPU_IESR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_iidr
 *
 * DSUUB Cluster Implementation Identification Register
 * This register provides information about the implementer and implementation of the PPU.
 */
union cavm_dsuubx_cluster_ppu_iidr
{
    uint32_t u;
    struct cavm_dsuubx_cluster_ppu_iidr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t product_id            : 12; /**< [ 31: 20](SRO) Value identifying the PPU part.

                                                                 0b010011101000 = Theodul Power Policy Unit. */
        uint32_t variant               : 4;  /**< [ 19: 16](SRO) Value used to distinguish product variants, or
                                                                 major revisions of the product.

                                                                 0b0000 = Product variant r0p0. */
        uint32_t revision              : 4;  /**< [ 15: 12](SRO) Value used to distinguish minor revisions of
                                                                 the product.

                                                                 0b0000 = No ECO fixes. */
        uint32_t implementer           : 12; /**< [ 11:  0](SRO) Implementer identification.

                                                                 0b010000111011 = Arm Limited. */
#else /* Word 0 - Little Endian */
        uint32_t implementer           : 12; /**< [ 11:  0](SRO) Implementer identification.

                                                                 0b010000111011 = Arm Limited. */
        uint32_t revision              : 4;  /**< [ 15: 12](SRO) Value used to distinguish minor revisions of
                                                                 the product.

                                                                 0b0000 = No ECO fixes. */
        uint32_t variant               : 4;  /**< [ 19: 16](SRO) Value used to distinguish product variants, or
                                                                 major revisions of the product.

                                                                 0b0000 = Product variant r0p0. */
        uint32_t product_id            : 12; /**< [ 31: 20](SRO) Value identifying the PPU part.

                                                                 0b010011101000 = Theodul Power Policy Unit. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_cluster_ppu_iidr_s cn; */
};
typedef union cavm_dsuubx_cluster_ppu_iidr cavm_dsuubx_cluster_ppu_iidr_t;

static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_IIDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_IIDR(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0030fc8ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CLUSTER_PPU_IIDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTER_PPU_IIDR(a) cavm_dsuubx_cluster_ppu_iidr_t
#define bustype_CAVM_DSUUBX_CLUSTER_PPU_IIDR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTER_PPU_IIDR(a) "DSUUBX_CLUSTER_PPU_IIDR"
#define device_bar_CAVM_DSUUBX_CLUSTER_PPU_IIDR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTER_PPU_IIDR(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTER_PPU_IIDR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_imr
 *
 * DSUUB Cluster Interrupt Mask Register
 * This register controls the events that assert the interrupt output. Additional event
 * masking controls
 * are in the Additional Interrupt Mask Register (DSUUB_PPU_AIMR), Input Edge
 * Sensitivity Register (DSUUB_
 * PPU_IESR), and the Operating Mode Active Edge Sensitivity Register (DSUUB_PPU_OPSR).
 *
 * When an interrupt event is masked an occurrence of the event does not set the corresponding bit
 * in the interrupt status register.
 */
union cavm_dsuubx_cluster_ppu_imr
{
    uint32_t u;
    struct cavm_dsuubx_cluster_ppu_imr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_6_31         : 26;
        uint32_t locked_irq_mask       : 1;  /**< [  5:  5](SR/W) Locked event mask

                                                                 0 = Locked event enabled.

                                                                 1 = Locked event masked. */
        uint32_t emu_deny_irq_mask     : 1;  /**< [  4:  4](SR/W) Emulation transition denial event mask

                                                                 0 = Emulation transition denial event enabled.

                                                                 1 = Emulation transition denial event masked. */
        uint32_t emu_accept_irq_mask   : 1;  /**< [  3:  3](SR/W) Emulation transition acceptance event mask

                                                                 0 = Emulation transition acceptance event
                                                                 enabled.

                                                                 1 = Emulation transition acceptance event
                                                                 masked. */
        uint32_t sta_deny_irq_mask     : 1;  /**< [  2:  2](SR/W) Static transition denial event mask

                                                                 0 = Static transition denial event enabled.

                                                                 1 = Static transition denial event masked. */
        uint32_t sta_accept_irq_mask   : 1;  /**< [  1:  1](SR/W) Static transition acceptance event mask

                                                                 0 = Static transition acceptance event
                                                                 enabled.

                                                                 1 = Static transition acceptance event
                                                                 masked. */
        uint32_t sta_policy_trn_irq_mask : 1;/**< [  0:  0](SR/W) Static full policy transition completion event
                                                                 mask

                                                                 0 = Static full policy transition completion
                                                                 event enabled.

                                                                 1 = Static full policy transition completion
                                                                 event masked. */
#else /* Word 0 - Little Endian */
        uint32_t sta_policy_trn_irq_mask : 1;/**< [  0:  0](SR/W) Static full policy transition completion event
                                                                 mask

                                                                 0 = Static full policy transition completion
                                                                 event enabled.

                                                                 1 = Static full policy transition completion
                                                                 event masked. */
        uint32_t sta_accept_irq_mask   : 1;  /**< [  1:  1](SR/W) Static transition acceptance event mask

                                                                 0 = Static transition acceptance event
                                                                 enabled.

                                                                 1 = Static transition acceptance event
                                                                 masked. */
        uint32_t sta_deny_irq_mask     : 1;  /**< [  2:  2](SR/W) Static transition denial event mask

                                                                 0 = Static transition denial event enabled.

                                                                 1 = Static transition denial event masked. */
        uint32_t emu_accept_irq_mask   : 1;  /**< [  3:  3](SR/W) Emulation transition acceptance event mask

                                                                 0 = Emulation transition acceptance event
                                                                 enabled.

                                                                 1 = Emulation transition acceptance event
                                                                 masked. */
        uint32_t emu_deny_irq_mask     : 1;  /**< [  4:  4](SR/W) Emulation transition denial event mask

                                                                 0 = Emulation transition denial event enabled.

                                                                 1 = Emulation transition denial event masked. */
        uint32_t locked_irq_mask       : 1;  /**< [  5:  5](SR/W) Locked event mask

                                                                 0 = Locked event enabled.

                                                                 1 = Locked event masked. */
        uint32_t reserved_6_31         : 26;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_cluster_ppu_imr_s cn; */
};
typedef union cavm_dsuubx_cluster_ppu_imr cavm_dsuubx_cluster_ppu_imr_t;

static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_IMR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_IMR(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0030030ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CLUSTER_PPU_IMR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTER_PPU_IMR(a) cavm_dsuubx_cluster_ppu_imr_t
#define bustype_CAVM_DSUUBX_CLUSTER_PPU_IMR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTER_PPU_IMR(a) "DSUUBX_CLUSTER_PPU_IMR"
#define device_bar_CAVM_DSUUBX_CLUSTER_PPU_IMR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTER_PPU_IMR(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTER_PPU_IMR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_isr
 *
 * DSUUB Cluster Interrupt Status Register
 * This register contains information about events causing the assertion of the
 * interrupt output. It is
 * also used to clear interrupt events.
 *
 * A bit set to 1 indicates the event asserted the interrupt output. Multiple events
 * can be active at
 * the same time. When an interrupt event is masked an occurrence of that event does not set the
 * status bit.
 *
 * A write of 1 to an event bit clears that event. A write of 0 to a bit has no
 * effect. The interrupt
 * output stays HIGH until all status bits in the Interrupt Status Register (PPU_ISR)
 * and the Additional
 * Interrupt Status Register (DSUUB_PPU_AISR) are 0b0.
 *
 * When the OTHER_IRQ bit is set, this indicates an event from the Additional Interrupt Status
 * Register (PPU_AISR) has caused the interrupt output to be asserted. This bit cannot be cleared by
 * writing to this register. It must be cleared by writing to the active event in the
 * Additional Interrupt
 * Status Register (DSUUB_PPU_AISR).
 */
union cavm_dsuubx_cluster_ppu_isr
{
    uint32_t u;
    struct cavm_dsuubx_cluster_ppu_isr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_27_31        : 5;
        uint32_t op_active_edge_irq2   : 1;  /**< [ 26: 26](SR/W1C/H) Indicates if operating mode DEVPACTIVE[18]
                                                                 input caused the input edge event.

                                                                 0 = DEVPACTIVE[18] input (All L3 Cache
                                                                 Slices active) did not assert the interrupt
                                                                 output.

                                                                 1 = DEVPACTIVE[18] input (All L3 Cache
                                                                 Slices active) asserted the interrupt
                                                                 output. */
        uint32_t op_active_edge_irq1   : 1;  /**< [ 25: 25](SR/W1C/H) Indicates if operating mode DEVPACTIVE[17]
                                                                 input caused the input edge event.

                                                                 0 = DEVPACTIVE[17] input (Upper L3
                                                                 Cache RAMs active) did not assert the
                                                                 interrupt output.

                                                                 1 = DEVPACTIVE[17] input (Upper L3
                                                                 Cache RAMs active) asserted the
                                                                 interrupt output. */
        uint32_t op_active_edge_irq0   : 1;  /**< [ 24: 24](SR/W1C/H) Indicates if operating mode DEVPACTIVE[16]
                                                                 input caused the input edge event.

                                                                 0 = DEVPACTIVE[16] input (Lower L3
                                                                 Cache RAMs active) did not assert the
                                                                 interrupt output.

                                                                 1 = DEVPACTIVE[16] input (Lower L3
                                                                 Cache RAMs active) asserted the
                                                                 interrupt output. */
        uint32_t reserved_19_23        : 5;
        uint32_t pwr_active_edge_irq10 : 1;  /**< [ 18: 18](SR/W1C/H) Indicates if power mode DEVPACTIVE[10]
                                                                 input caused the input edge event.

                                                                 0 = DEVPACTIVE[10] input (DBG_RECOV)
                                                                 did not assert the interrupt output.

                                                                 1 = DEVPACTIVE[10] input (DBG_RECOV)
                                                                 asserted the interrupt output. */
        uint32_t pwr_active_edge_irq9  : 1;  /**< [ 17: 17](SR/W1C/H) Indicates if power mode DEVPACTIVE[9] input
                                                                 caused the input edge event.

                                                                 0 = DEVPACTIVE[9] input (WARM_RST) did
                                                                 not assert the interrupt output.

                                                                 1 = DEVPACTIVE[9] input (WARM_RST)
                                                                 asserted the interrupt output. */
        uint32_t pwr_active_edge_irq8  : 1;  /**< [ 16: 16](SR/W1C/H) Indicates if power mode DEVPACTIVE[8] input
                                                                 caused the input edge event.

                                                                 0 = DEVPACTIVE[8] input (ON) did not
                                                                 assert the interrupt output.

                                                                 1 = DEVPACTIVE[8] input (ON) asserted the
                                                                 interrupt output. */
        uint32_t pwr_active_edge_irq7  : 1;  /**< [ 15: 15](SR/W1C/H) Indicates if power mode DEVPACTIVE[7] input
                                                                 caused the input edge event.

                                                                 0 = DEVPACTIVE[7] input (FUNC_RET) did
                                                                 not assert the interrupt output.

                                                                 1 = DEVPACTIVE[7] input (FUNC_RET)
                                                                 asserted the interrupt output. */
        uint32_t reserved_12_14        : 3;
        uint32_t pwr_active_edge_irq3  : 1;  /**< [ 11: 11](SR/W1C/H) Indicates if power mode DEVPACTIVE[3] input
                                                                 caused the input edge event.

                                                                 0 = DEVPACTIVE[3] input (MEM_RET_
                                                                 EMU) did not assert the interrupt
                                                                 output.

                                                                 1 = DEVPACTIVE[3] input (MEM_RET_
                                                                 EMU) asserted the interrupt output. */
        uint32_t pwr_active_edge_irq2  : 1;  /**< [ 10: 10](SR/W1C/H) Indicates if power mode DEVPACTIVE[2] input
                                                                 caused the input edge event.

                                                                 0 = DEVPACTIVE[2] input (MEM_RET) did
                                                                 not assert the interrupt output.

                                                                 1 = DEVPACTIVE[2] input (MEM_RET)
                                                                 asserted the interrupt output. */
        uint32_t pwr_active_edge_irq1  : 1;  /**< [  9:  9](SR/W1C/H) Indicates if power mode DEVPACTIVE[1] input
                                                                 caused the input edge event.

                                                                 0 = DEVPACTIVE[1] input (OFF_EMU) did
                                                                 not assert the interrupt output.

                                                                 1 = DEVPACTIVE[1] input (OFF_EMU)
                                                                 asserted the interrupt output. */
        uint32_t reserved_8            : 1;
        uint32_t other_irq             : 1;  /**< [  7:  7](SRO/H) Indicates there is an interrupt event pending
                                                                 in the Additional Interrupt Status Register (DSUUB_
                                                                 PPU_AISR).

                                                                 0 = No interrupt pending in DSUUB_PPU_AISR.

                                                                 1 = Interrupt pending in DSUUB_PPU_AISR. */
        uint32_t reserved_6            : 1;
        uint32_t locked_irq            : 1;  /**< [  5:  5](SR/W1C/H) Locked event status.

                                                                 0 = No locked event.

                                                                 1 = A locked event asserted the interrupt
                                                                 output. */
        uint32_t emu_deny_irq          : 1;  /**< [  4:  4](SR/W1C/H) Emulated transition denial event status.

                                                                 0 = No emulated transition denial event.

                                                                 1 = An emulated transition denial event
                                                                 asserted the interrupt output. */
        uint32_t emu_accept_irq        : 1;  /**< [  3:  3](SR/W1C/H) Emulated transition acceptance event status.

                                                                 0 = No emulated transition acceptance
                                                                 event.

                                                                 1 = An emulated transition acceptance event
                                                                 asserted the interrupt output. */
        uint32_t sta_deny_irq          : 1;  /**< [  2:  2](SR/W1C/H) Static transition denial event status.

                                                                 0 = No static transition denial event.

                                                                 1 = An static transition denial event asserted
                                                                 the interrupt output. */
        uint32_t sta_accept_irq        : 1;  /**< [  1:  1](SR/W1C/H) Static transition acceptance event status.

                                                                 0 = No static transition acceptance event.

                                                                 1 = An static transition acceptance event
                                                                 asserted the interrupt output. */
        uint32_t sta_policy_trn_irq    : 1;  /**< [  0:  0](SR/W1C/H) Static full policy transition completion event
                                                                 status.

                                                                 0 = No static full policy transition
                                                                 completion event.

                                                                 1 = An static full policy transition completion
                                                                 event asserted the interrupt output. */
#else /* Word 0 - Little Endian */
        uint32_t sta_policy_trn_irq    : 1;  /**< [  0:  0](SR/W1C/H) Static full policy transition completion event
                                                                 status.

                                                                 0 = No static full policy transition
                                                                 completion event.

                                                                 1 = An static full policy transition completion
                                                                 event asserted the interrupt output. */
        uint32_t sta_accept_irq        : 1;  /**< [  1:  1](SR/W1C/H) Static transition acceptance event status.

                                                                 0 = No static transition acceptance event.

                                                                 1 = An static transition acceptance event
                                                                 asserted the interrupt output. */
        uint32_t sta_deny_irq          : 1;  /**< [  2:  2](SR/W1C/H) Static transition denial event status.

                                                                 0 = No static transition denial event.

                                                                 1 = An static transition denial event asserted
                                                                 the interrupt output. */
        uint32_t emu_accept_irq        : 1;  /**< [  3:  3](SR/W1C/H) Emulated transition acceptance event status.

                                                                 0 = No emulated transition acceptance
                                                                 event.

                                                                 1 = An emulated transition acceptance event
                                                                 asserted the interrupt output. */
        uint32_t emu_deny_irq          : 1;  /**< [  4:  4](SR/W1C/H) Emulated transition denial event status.

                                                                 0 = No emulated transition denial event.

                                                                 1 = An emulated transition denial event
                                                                 asserted the interrupt output. */
        uint32_t locked_irq            : 1;  /**< [  5:  5](SR/W1C/H) Locked event status.

                                                                 0 = No locked event.

                                                                 1 = A locked event asserted the interrupt
                                                                 output. */
        uint32_t reserved_6            : 1;
        uint32_t other_irq             : 1;  /**< [  7:  7](SRO/H) Indicates there is an interrupt event pending
                                                                 in the Additional Interrupt Status Register (DSUUB_
                                                                 PPU_AISR).

                                                                 0 = No interrupt pending in DSUUB_PPU_AISR.

                                                                 1 = Interrupt pending in DSUUB_PPU_AISR. */
        uint32_t reserved_8            : 1;
        uint32_t pwr_active_edge_irq1  : 1;  /**< [  9:  9](SR/W1C/H) Indicates if power mode DEVPACTIVE[1] input
                                                                 caused the input edge event.

                                                                 0 = DEVPACTIVE[1] input (OFF_EMU) did
                                                                 not assert the interrupt output.

                                                                 1 = DEVPACTIVE[1] input (OFF_EMU)
                                                                 asserted the interrupt output. */
        uint32_t pwr_active_edge_irq2  : 1;  /**< [ 10: 10](SR/W1C/H) Indicates if power mode DEVPACTIVE[2] input
                                                                 caused the input edge event.

                                                                 0 = DEVPACTIVE[2] input (MEM_RET) did
                                                                 not assert the interrupt output.

                                                                 1 = DEVPACTIVE[2] input (MEM_RET)
                                                                 asserted the interrupt output. */
        uint32_t pwr_active_edge_irq3  : 1;  /**< [ 11: 11](SR/W1C/H) Indicates if power mode DEVPACTIVE[3] input
                                                                 caused the input edge event.

                                                                 0 = DEVPACTIVE[3] input (MEM_RET_
                                                                 EMU) did not assert the interrupt
                                                                 output.

                                                                 1 = DEVPACTIVE[3] input (MEM_RET_
                                                                 EMU) asserted the interrupt output. */
        uint32_t reserved_12_14        : 3;
        uint32_t pwr_active_edge_irq7  : 1;  /**< [ 15: 15](SR/W1C/H) Indicates if power mode DEVPACTIVE[7] input
                                                                 caused the input edge event.

                                                                 0 = DEVPACTIVE[7] input (FUNC_RET) did
                                                                 not assert the interrupt output.

                                                                 1 = DEVPACTIVE[7] input (FUNC_RET)
                                                                 asserted the interrupt output. */
        uint32_t pwr_active_edge_irq8  : 1;  /**< [ 16: 16](SR/W1C/H) Indicates if power mode DEVPACTIVE[8] input
                                                                 caused the input edge event.

                                                                 0 = DEVPACTIVE[8] input (ON) did not
                                                                 assert the interrupt output.

                                                                 1 = DEVPACTIVE[8] input (ON) asserted the
                                                                 interrupt output. */
        uint32_t pwr_active_edge_irq9  : 1;  /**< [ 17: 17](SR/W1C/H) Indicates if power mode DEVPACTIVE[9] input
                                                                 caused the input edge event.

                                                                 0 = DEVPACTIVE[9] input (WARM_RST) did
                                                                 not assert the interrupt output.

                                                                 1 = DEVPACTIVE[9] input (WARM_RST)
                                                                 asserted the interrupt output. */
        uint32_t pwr_active_edge_irq10 : 1;  /**< [ 18: 18](SR/W1C/H) Indicates if power mode DEVPACTIVE[10]
                                                                 input caused the input edge event.

                                                                 0 = DEVPACTIVE[10] input (DBG_RECOV)
                                                                 did not assert the interrupt output.

                                                                 1 = DEVPACTIVE[10] input (DBG_RECOV)
                                                                 asserted the interrupt output. */
        uint32_t reserved_19_23        : 5;
        uint32_t op_active_edge_irq0   : 1;  /**< [ 24: 24](SR/W1C/H) Indicates if operating mode DEVPACTIVE[16]
                                                                 input caused the input edge event.

                                                                 0 = DEVPACTIVE[16] input (Lower L3
                                                                 Cache RAMs active) did not assert the
                                                                 interrupt output.

                                                                 1 = DEVPACTIVE[16] input (Lower L3
                                                                 Cache RAMs active) asserted the
                                                                 interrupt output. */
        uint32_t op_active_edge_irq1   : 1;  /**< [ 25: 25](SR/W1C/H) Indicates if operating mode DEVPACTIVE[17]
                                                                 input caused the input edge event.

                                                                 0 = DEVPACTIVE[17] input (Upper L3
                                                                 Cache RAMs active) did not assert the
                                                                 interrupt output.

                                                                 1 = DEVPACTIVE[17] input (Upper L3
                                                                 Cache RAMs active) asserted the
                                                                 interrupt output. */
        uint32_t op_active_edge_irq2   : 1;  /**< [ 26: 26](SR/W1C/H) Indicates if operating mode DEVPACTIVE[18]
                                                                 input caused the input edge event.

                                                                 0 = DEVPACTIVE[18] input (All L3 Cache
                                                                 Slices active) did not assert the interrupt
                                                                 output.

                                                                 1 = DEVPACTIVE[18] input (All L3 Cache
                                                                 Slices active) asserted the interrupt
                                                                 output. */
        uint32_t reserved_27_31        : 5;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_cluster_ppu_isr_s cn; */
};
typedef union cavm_dsuubx_cluster_ppu_isr cavm_dsuubx_cluster_ppu_isr_t;

static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_ISR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_ISR(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0030038ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CLUSTER_PPU_ISR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTER_PPU_ISR(a) cavm_dsuubx_cluster_ppu_isr_t
#define bustype_CAVM_DSUUBX_CLUSTER_PPU_ISR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTER_PPU_ISR(a) "DSUUBX_CLUSTER_PPU_ISR"
#define device_bar_CAVM_DSUUBX_CLUSTER_PPU_ISR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTER_PPU_ISR(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTER_PPU_ISR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_memrr
 *
 * DSUUB Cluster Memory Retention RAM Configuration Register
 * This register controls bits [15:8] of the PCSMPSTATE output when in MEM_RET mode. These
 * outputs are used by the PCSM to configure the RAMs that are retained.
 */
union cavm_dsuubx_cluster_ppu_memrr
{
    uint32_t u;
    struct cavm_dsuubx_cluster_ppu_memrr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t mem_ret_ram_cfg       : 8;  /**< [  7:  0](SR/W) MEM_RET RAM configuration bits. */
#else /* Word 0 - Little Endian */
        uint32_t mem_ret_ram_cfg       : 8;  /**< [  7:  0](SR/W) MEM_RET RAM configuration bits. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_cluster_ppu_memrr_s cn; */
};
typedef union cavm_dsuubx_cluster_ppu_memrr cavm_dsuubx_cluster_ppu_memrr_t;

static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_MEMRR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_MEMRR(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0030058ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CLUSTER_PPU_MEMRR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTER_PPU_MEMRR(a) cavm_dsuubx_cluster_ppu_memrr_t
#define bustype_CAVM_DSUUBX_CLUSTER_PPU_MEMRR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTER_PPU_MEMRR(a) "DSUUBX_CLUSTER_PPU_MEMRR"
#define device_bar_CAVM_DSUUBX_CLUSTER_PPU_MEMRR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTER_PPU_MEMRR(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTER_PPU_MEMRR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_misr
 *
 * DSUUB Cluster Miscellaneous Input Current Status Register
 * This read-only register contains status reflecting the values of miscellaneous inputs.
 */
union cavm_dsuubx_cluster_ppu_misr
{
    uint32_t u;
    struct cavm_dsuubx_cluster_ppu_misr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_17_31        : 15;
        uint32_t devdeny_status        : 1;  /**< [ 16: 16](SRO/H) Status of the device interface DEVPDENY
                                                                 inputs.

                                                                 0 = DEVPDENY deasserted.

                                                                 1 = DEVPDENY asserted. */
        uint32_t reserved_9_15         : 7;
        uint32_t devaccept_status      : 1;  /**< [  8:  8](SRO/H) Status of the device interface DEVPACCEPT
                                                                 inputs.

                                                                 0 = DEVPACCEPT deasserted.

                                                                 1 = DEVPACCEPT asserted. */
        uint32_t reserved_1_7          : 7;
        uint32_t pcsmpaccept_status    : 1;  /**< [  0:  0](SRO/H) Status of the PCSMPACCEPT inputs.

                                                                 0 = PCSMPACCEPT deasserted.

                                                                 1 = PCSMPACCEPT asserted. */
#else /* Word 0 - Little Endian */
        uint32_t pcsmpaccept_status    : 1;  /**< [  0:  0](SRO/H) Status of the PCSMPACCEPT inputs.

                                                                 0 = PCSMPACCEPT deasserted.

                                                                 1 = PCSMPACCEPT asserted. */
        uint32_t reserved_1_7          : 7;
        uint32_t devaccept_status      : 1;  /**< [  8:  8](SRO/H) Status of the device interface DEVPACCEPT
                                                                 inputs.

                                                                 0 = DEVPACCEPT deasserted.

                                                                 1 = DEVPACCEPT asserted. */
        uint32_t reserved_9_15         : 7;
        uint32_t devdeny_status        : 1;  /**< [ 16: 16](SRO/H) Status of the device interface DEVPDENY
                                                                 inputs.

                                                                 0 = DEVPDENY deasserted.

                                                                 1 = DEVPDENY asserted. */
        uint32_t reserved_17_31        : 15;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_cluster_ppu_misr_s cn; */
};
typedef union cavm_dsuubx_cluster_ppu_misr cavm_dsuubx_cluster_ppu_misr_t;

static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_MISR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_MISR(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0030014ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CLUSTER_PPU_MISR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTER_PPU_MISR(a) cavm_dsuubx_cluster_ppu_misr_t
#define bustype_CAVM_DSUUBX_CLUSTER_PPU_MISR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTER_PPU_MISR(a) "DSUUBX_CLUSTER_PPU_MISR"
#define device_bar_CAVM_DSUUBX_CLUSTER_PPU_MISR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTER_PPU_MISR(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTER_PPU_MISR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_opsr
 *
 * DSUUB Cluster Input Edge Sensitivity Register
 * This register configures the transitions on the operating mode DEVPACTIVE inputs that generate
 * an Input Edge interrupt event.
 *
 * When an event is masked an occurrence of the event does not set the corresponding bit in the
 * interrupt status register.
 */
union cavm_dsuubx_cluster_ppu_opsr
{
    uint32_t u;
    struct cavm_dsuubx_cluster_ppu_opsr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_6_31         : 26;
        uint32_t devactive18_edge      : 2;  /**< [  5:  4](SR/W) Configures the transitions on the DEVPACTIVE[18]
                                                                 input (All L3 Cache Slices active) that generate an
                                                                 Input Edge interrupt event.

                                                                 0b00 = Event masked.

                                                                 0b01 = Rising edge of event generates an interrupt.

                                                                 0b10 = Falling edge of event generates an interrupt.

                                                                 0b11 = Both edges of event generate an interrupt. */
        uint32_t devactive17_edge      : 2;  /**< [  3:  2](SR/W) Configures the transitions on the DEVPACTIVE[17]
                                                                 input (Upper L3 Cache RAMs active) that generate
                                                                 an Input Edge interrupt event.

                                                                 0b00 = Event masked.

                                                                 0b01 = Rising edge of event generates an interrupt.

                                                                 0b10 = Falling edge of event generates an interrupt.

                                                                 0b11 = Both edges of event generate an interrupt. */
        uint32_t devactive16_edge      : 2;  /**< [  1:  0](SR/W) Configures the transitions on the DEVPACTIVE[16]
                                                                 input (Lower L3 Cache RAMs active) that generate
                                                                 an Input Edge interrupt event.

                                                                 0b00 = Event masked.

                                                                 0b01 = Rising edge of event generates an interrupt.

                                                                 0b10 = Falling edge of event generates an interrupt.

                                                                 0b11 = Both edges of event generate an interrupt. */
#else /* Word 0 - Little Endian */
        uint32_t devactive16_edge      : 2;  /**< [  1:  0](SR/W) Configures the transitions on the DEVPACTIVE[16]
                                                                 input (Lower L3 Cache RAMs active) that generate
                                                                 an Input Edge interrupt event.

                                                                 0b00 = Event masked.

                                                                 0b01 = Rising edge of event generates an interrupt.

                                                                 0b10 = Falling edge of event generates an interrupt.

                                                                 0b11 = Both edges of event generate an interrupt. */
        uint32_t devactive17_edge      : 2;  /**< [  3:  2](SR/W) Configures the transitions on the DEVPACTIVE[17]
                                                                 input (Upper L3 Cache RAMs active) that generate
                                                                 an Input Edge interrupt event.

                                                                 0b00 = Event masked.

                                                                 0b01 = Rising edge of event generates an interrupt.

                                                                 0b10 = Falling edge of event generates an interrupt.

                                                                 0b11 = Both edges of event generate an interrupt. */
        uint32_t devactive18_edge      : 2;  /**< [  5:  4](SR/W) Configures the transitions on the DEVPACTIVE[18]
                                                                 input (All L3 Cache Slices active) that generate an
                                                                 Input Edge interrupt event.

                                                                 0b00 = Event masked.

                                                                 0b01 = Rising edge of event generates an interrupt.

                                                                 0b10 = Falling edge of event generates an interrupt.

                                                                 0b11 = Both edges of event generate an interrupt. */
        uint32_t reserved_6_31         : 26;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_cluster_ppu_opsr_s cn; */
};
typedef union cavm_dsuubx_cluster_ppu_opsr cavm_dsuubx_cluster_ppu_opsr_t;

static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_OPSR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_OPSR(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0030044ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CLUSTER_PPU_OPSR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTER_PPU_OPSR(a) cavm_dsuubx_cluster_ppu_opsr_t
#define bustype_CAVM_DSUUBX_CLUSTER_PPU_OPSR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTER_PPU_OPSR(a) "DSUUBX_CLUSTER_PPU_OPSR"
#define device_bar_CAVM_DSUUBX_CLUSTER_PPU_OPSR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTER_PPU_OPSR(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTER_PPU_OPSR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_pidr0
 *
 * DSUUB Cluster PPU Peripheral Identification Register 0
 * Provides CoreSight discovery information.
 */
union cavm_dsuubx_cluster_ppu_pidr0
{
    uint32_t u;
    struct cavm_dsuubx_cluster_ppu_pidr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t part_0                : 8;  /**< [  7:  0](SRO) Part number bits [7:0].

                                                                 0b11101000 = Theodul Power Policy Unit. Bits [7:0] of part
                                                                 number 0x4E8. */
#else /* Word 0 - Little Endian */
        uint32_t part_0                : 8;  /**< [  7:  0](SRO) Part number bits [7:0].

                                                                 0b11101000 = Theodul Power Policy Unit. Bits [7:0] of part
                                                                 number 0x4E8. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_cluster_ppu_pidr0_s cn; */
};
typedef union cavm_dsuubx_cluster_ppu_pidr0 cavm_dsuubx_cluster_ppu_pidr0_t;

static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_PIDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_PIDR0(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0030fe0ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CLUSTER_PPU_PIDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTER_PPU_PIDR0(a) cavm_dsuubx_cluster_ppu_pidr0_t
#define bustype_CAVM_DSUUBX_CLUSTER_PPU_PIDR0(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTER_PPU_PIDR0(a) "DSUUBX_CLUSTER_PPU_PIDR0"
#define device_bar_CAVM_DSUUBX_CLUSTER_PPU_PIDR0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTER_PPU_PIDR0(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTER_PPU_PIDR0(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_pidr1
 *
 * DSUUB Cluster PPU Peripheral Identification Register 1
 * Provides CoreSight discovery information.
 */
union cavm_dsuubx_cluster_ppu_pidr1
{
    uint32_t u;
    struct cavm_dsuubx_cluster_ppu_pidr1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t des_0                 : 4;  /**< [  7:  4](SRO) JEP106 identification code bits [3:0].

                                                                 0b1011 = Arm Limited. Bits [3:0] of JEP106 identification code
                                                                 0x3B. */
        uint32_t part_1                : 4;  /**< [  3:  0](SRO) Part number bits [11:8].

                                                                 0b0100 = Theodul Power Policy Unit. Bits [11:8] of part number
                                                                 0x4E8. */
#else /* Word 0 - Little Endian */
        uint32_t part_1                : 4;  /**< [  3:  0](SRO) Part number bits [11:8].

                                                                 0b0100 = Theodul Power Policy Unit. Bits [11:8] of part number
                                                                 0x4E8. */
        uint32_t des_0                 : 4;  /**< [  7:  4](SRO) JEP106 identification code bits [3:0].

                                                                 0b1011 = Arm Limited. Bits [3:0] of JEP106 identification code
                                                                 0x3B. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_cluster_ppu_pidr1_s cn; */
};
typedef union cavm_dsuubx_cluster_ppu_pidr1 cavm_dsuubx_cluster_ppu_pidr1_t;

static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_PIDR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_PIDR1(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0030fe4ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CLUSTER_PPU_PIDR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTER_PPU_PIDR1(a) cavm_dsuubx_cluster_ppu_pidr1_t
#define bustype_CAVM_DSUUBX_CLUSTER_PPU_PIDR1(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTER_PPU_PIDR1(a) "DSUUBX_CLUSTER_PPU_PIDR1"
#define device_bar_CAVM_DSUUBX_CLUSTER_PPU_PIDR1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTER_PPU_PIDR1(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTER_PPU_PIDR1(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_pidr2
 *
 * DSUUB Cluster PPU Peripheral Identification Register 2
 * Provides CoreSight discovery information.
 */
union cavm_dsuubx_cluster_ppu_pidr2
{
    uint32_t u;
    struct cavm_dsuubx_cluster_ppu_pidr2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t revision              : 4;  /**< [  7:  4](SRO) Component revision.

                                                                 0b0000 = Revision r0p0. */
        uint32_t jedec                 : 1;  /**< [  3:  3](SRO) JEDEC assignee.

                                                                 1 = JEDEC-assignee values is used. */
        uint32_t des_1                 : 3;  /**< [  2:  0](SRO) JEP106 identification code bits [6:4].

                                                                 0b011 = Arm Limited. Bits [6:4] of JEP106 identification code
                                                                 0x3B. */
#else /* Word 0 - Little Endian */
        uint32_t des_1                 : 3;  /**< [  2:  0](SRO) JEP106 identification code bits [6:4].

                                                                 0b011 = Arm Limited. Bits [6:4] of JEP106 identification code
                                                                 0x3B. */
        uint32_t jedec                 : 1;  /**< [  3:  3](SRO) JEDEC assignee.

                                                                 1 = JEDEC-assignee values is used. */
        uint32_t revision              : 4;  /**< [  7:  4](SRO) Component revision.

                                                                 0b0000 = Revision r0p0. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_cluster_ppu_pidr2_s cn; */
};
typedef union cavm_dsuubx_cluster_ppu_pidr2 cavm_dsuubx_cluster_ppu_pidr2_t;

static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_PIDR2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_PIDR2(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0030fe8ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CLUSTER_PPU_PIDR2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTER_PPU_PIDR2(a) cavm_dsuubx_cluster_ppu_pidr2_t
#define bustype_CAVM_DSUUBX_CLUSTER_PPU_PIDR2(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTER_PPU_PIDR2(a) "DSUUBX_CLUSTER_PPU_PIDR2"
#define device_bar_CAVM_DSUUBX_CLUSTER_PPU_PIDR2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTER_PPU_PIDR2(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTER_PPU_PIDR2(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_pidr3
 *
 * DSUUB Cluster PPU Peripheral Identification Register 3
 * Provides CoreSight discovery information.
 */
union cavm_dsuubx_cluster_ppu_pidr3
{
    uint32_t u;
    struct cavm_dsuubx_cluster_ppu_pidr3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t revand                : 4;  /**< [  7:  4](SRO) Minor errata fixes.

                                                                 0b0000 = No ECO fixes. */
        uint32_t cmod                  : 4;  /**< [  3:  0](SRO) Customer Modified.

                                                                 0b0000 = The component is not modified from the original
                                                                 design. */
#else /* Word 0 - Little Endian */
        uint32_t cmod                  : 4;  /**< [  3:  0](SRO) Customer Modified.

                                                                 0b0000 = The component is not modified from the original
                                                                 design. */
        uint32_t revand                : 4;  /**< [  7:  4](SRO) Minor errata fixes.

                                                                 0b0000 = No ECO fixes. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_cluster_ppu_pidr3_s cn; */
};
typedef union cavm_dsuubx_cluster_ppu_pidr3 cavm_dsuubx_cluster_ppu_pidr3_t;

static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_PIDR3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_PIDR3(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0030fecll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CLUSTER_PPU_PIDR3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTER_PPU_PIDR3(a) cavm_dsuubx_cluster_ppu_pidr3_t
#define bustype_CAVM_DSUUBX_CLUSTER_PPU_PIDR3(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTER_PPU_PIDR3(a) "DSUUBX_CLUSTER_PPU_PIDR3"
#define device_bar_CAVM_DSUUBX_CLUSTER_PPU_PIDR3(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTER_PPU_PIDR3(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTER_PPU_PIDR3(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_pidr4
 *
 * DSUUB Cluster PPU Peripheral Identification Register 4
 * Provides CoreSight discovery information.
 */
union cavm_dsuubx_cluster_ppu_pidr4
{
    uint32_t u;
    struct cavm_dsuubx_cluster_ppu_pidr4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t size                  : 4;  /**< [  7:  4](SRO) 4KB count.

                                                                 0b0000 = The component uses a single 4KB block. */
        uint32_t des_2                 : 4;  /**< [  3:  0](SRO) JEP106 continuation code.

                                                                 0b0100 = Arm Limited. Number of 0x7F bytes in full JEP106 code 0x7F
                                                                 0x7F 0x7F 0x7F 0x3B. */
#else /* Word 0 - Little Endian */
        uint32_t des_2                 : 4;  /**< [  3:  0](SRO) JEP106 continuation code.

                                                                 0b0100 = Arm Limited. Number of 0x7F bytes in full JEP106 code 0x7F
                                                                 0x7F 0x7F 0x7F 0x3B. */
        uint32_t size                  : 4;  /**< [  7:  4](SRO) 4KB count.

                                                                 0b0000 = The component uses a single 4KB block. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_cluster_ppu_pidr4_s cn; */
};
typedef union cavm_dsuubx_cluster_ppu_pidr4 cavm_dsuubx_cluster_ppu_pidr4_t;

static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_PIDR4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_PIDR4(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0030fd0ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CLUSTER_PPU_PIDR4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTER_PPU_PIDR4(a) cavm_dsuubx_cluster_ppu_pidr4_t
#define bustype_CAVM_DSUUBX_CLUSTER_PPU_PIDR4(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTER_PPU_PIDR4(a) "DSUUBX_CLUSTER_PPU_PIDR4"
#define device_bar_CAVM_DSUUBX_CLUSTER_PPU_PIDR4(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTER_PPU_PIDR4(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTER_PPU_PIDR4(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_pidr5
 *
 * DSUUB Cluster PPU Peripheral Identification Register 5
 * Provides CoreSight discovery information.
 */
union cavm_dsuubx_cluster_ppu_pidr5
{
    uint32_t u;
    struct cavm_dsuubx_cluster_ppu_pidr5_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_cluster_ppu_pidr5_s cn; */
};
typedef union cavm_dsuubx_cluster_ppu_pidr5 cavm_dsuubx_cluster_ppu_pidr5_t;

static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_PIDR5(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_PIDR5(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0030fd4ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CLUSTER_PPU_PIDR5", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTER_PPU_PIDR5(a) cavm_dsuubx_cluster_ppu_pidr5_t
#define bustype_CAVM_DSUUBX_CLUSTER_PPU_PIDR5(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTER_PPU_PIDR5(a) "DSUUBX_CLUSTER_PPU_PIDR5"
#define device_bar_CAVM_DSUUBX_CLUSTER_PPU_PIDR5(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTER_PPU_PIDR5(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTER_PPU_PIDR5(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_pidr6
 *
 * DSUUB Cluster PPU Peripheral Identification Register 6
 * Provides CoreSight discovery information.
 */
union cavm_dsuubx_cluster_ppu_pidr6
{
    uint32_t u;
    struct cavm_dsuubx_cluster_ppu_pidr6_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_cluster_ppu_pidr6_s cn; */
};
typedef union cavm_dsuubx_cluster_ppu_pidr6 cavm_dsuubx_cluster_ppu_pidr6_t;

static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_PIDR6(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_PIDR6(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0030fd8ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CLUSTER_PPU_PIDR6", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTER_PPU_PIDR6(a) cavm_dsuubx_cluster_ppu_pidr6_t
#define bustype_CAVM_DSUUBX_CLUSTER_PPU_PIDR6(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTER_PPU_PIDR6(a) "DSUUBX_CLUSTER_PPU_PIDR6"
#define device_bar_CAVM_DSUUBX_CLUSTER_PPU_PIDR6(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTER_PPU_PIDR6(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTER_PPU_PIDR6(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_pidr7
 *
 * DSUUB Cluster PPU Peripheral Identification Register 7
 * Provides CoreSight discovery information.
 */
union cavm_dsuubx_cluster_ppu_pidr7
{
    uint32_t u;
    struct cavm_dsuubx_cluster_ppu_pidr7_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_cluster_ppu_pidr7_s cn; */
};
typedef union cavm_dsuubx_cluster_ppu_pidr7 cavm_dsuubx_cluster_ppu_pidr7_t;

static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_PIDR7(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_PIDR7(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0030fdcll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CLUSTER_PPU_PIDR7", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTER_PPU_PIDR7(a) cavm_dsuubx_cluster_ppu_pidr7_t
#define bustype_CAVM_DSUUBX_CLUSTER_PPU_PIDR7(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTER_PPU_PIDR7(a) "DSUUBX_CLUSTER_PPU_PIDR7"
#define device_bar_CAVM_DSUUBX_CLUSTER_PPU_PIDR7(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTER_PPU_PIDR7(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTER_PPU_PIDR7(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_pmer
 *
 * DSUUB Cluster Power Mode Emulation Enable Register
 * This register allows software to enable entry into emulated modes.
 */
union cavm_dsuubx_cluster_ppu_pmer
{
    uint32_t u;
    struct cavm_dsuubx_cluster_ppu_pmer_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_1_31         : 31;
        uint32_t emu_en                : 1;  /**< [  0:  0](SR/W) Power mode emulation enable.

                                                                 0 = Power mode emulation disabled.

                                                                 1 = Power mode emulation enabled. Transitions to OFF
                                                                 and MEM_RET instead transition to OFF_EMU and
                                                                 MEM_RET_EMU. */
#else /* Word 0 - Little Endian */
        uint32_t emu_en                : 1;  /**< [  0:  0](SR/W) Power mode emulation enable.

                                                                 0 = Power mode emulation disabled.

                                                                 1 = Power mode emulation enabled. Transitions to OFF
                                                                 and MEM_RET instead transition to OFF_EMU and
                                                                 MEM_RET_EMU. */
        uint32_t reserved_1_31         : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_cluster_ppu_pmer_s cn; */
};
typedef union cavm_dsuubx_cluster_ppu_pmer cavm_dsuubx_cluster_ppu_pmer_t;

static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_PMER(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_PMER(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0030004ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CLUSTER_PPU_PMER", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTER_PPU_PMER(a) cavm_dsuubx_cluster_ppu_pmer_t
#define bustype_CAVM_DSUUBX_CLUSTER_PPU_PMER(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTER_PPU_PMER(a) "DSUUBX_CLUSTER_PPU_PMER"
#define device_bar_CAVM_DSUUBX_CLUSTER_PPU_PMER(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTER_PPU_PMER(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTER_PPU_PMER(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_ptcr
 *
 * DSUUB Cluster Power Mode Transition Register
 * This register contains settings which affect the behaviour of certain power mode transitions.
 */
union cavm_dsuubx_cluster_ppu_ptcr
{
    uint32_t u;
    struct cavm_dsuubx_cluster_ppu_ptcr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_2_31         : 30;
        uint32_t dbg_recov_porst_en    : 1;  /**< [  1:  1](SR/W) Power-on reset behavior in DBG_RECOV.

                                                                 This bit should not be modified when the PPU
                                                                 is in DBG_RECOV or if the PPU is performing
                                                                 a transition, otherwise PPU behavior is
                                                                 UNPREDICTABLE.

                                                                 0 = DEVPORESETn is not asserted when in
                                                                 DBG_RECOV.

                                                                 1 = DEVPORESETn is asserted when in DBG_
                                                                 RECOV. */
        uint32_t warm_rst_devreqen     : 1;  /**< [  0:  0](SR/W) Device interface handshake behavior.

                                                                 This bit should not be modified when the PPU
                                                                 is in WARM_RST, or if the PPU is performing
                                                                 a transition, otherwise PPU behavior is
                                                                 UNPREDICTABLE.

                                                                 0 = The PPU does not perform a device
                                                                 interface handshake when transitioning
                                                                 between ON and WARM_RST.

                                                                 1 = The PPU performs a device interface
                                                                 handshake when transitioning between
                                                                 ON and WARM_RST. */
#else /* Word 0 - Little Endian */
        uint32_t warm_rst_devreqen     : 1;  /**< [  0:  0](SR/W) Device interface handshake behavior.

                                                                 This bit should not be modified when the PPU
                                                                 is in WARM_RST, or if the PPU is performing
                                                                 a transition, otherwise PPU behavior is
                                                                 UNPREDICTABLE.

                                                                 0 = The PPU does not perform a device
                                                                 interface handshake when transitioning
                                                                 between ON and WARM_RST.

                                                                 1 = The PPU performs a device interface
                                                                 handshake when transitioning between
                                                                 ON and WARM_RST. */
        uint32_t dbg_recov_porst_en    : 1;  /**< [  1:  1](SR/W) Power-on reset behavior in DBG_RECOV.

                                                                 This bit should not be modified when the PPU
                                                                 is in DBG_RECOV or if the PPU is performing
                                                                 a transition, otherwise PPU behavior is
                                                                 UNPREDICTABLE.

                                                                 0 = DEVPORESETn is not asserted when in
                                                                 DBG_RECOV.

                                                                 1 = DEVPORESETn is asserted when in DBG_
                                                                 RECOV. */
        uint32_t reserved_2_31         : 30;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_cluster_ppu_ptcr_s cn; */
};
typedef union cavm_dsuubx_cluster_ppu_ptcr cavm_dsuubx_cluster_ppu_ptcr_t;

static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_PTCR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_PTCR(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0030024ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CLUSTER_PPU_PTCR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTER_PPU_PTCR(a) cavm_dsuubx_cluster_ppu_ptcr_t
#define bustype_CAVM_DSUUBX_CLUSTER_PPU_PTCR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTER_PPU_PTCR(a) "DSUUBX_CLUSTER_PPU_PTCR"
#define device_bar_CAVM_DSUUBX_CLUSTER_PPU_PTCR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTER_PPU_PTCR(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTER_PPU_PTCR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_pwcr
 *
 * DSUUB Cluster Power Configuration Register
 * This register controls enabling and disabling of hardware control inputs to the PPU.
 *
 * Before software programs the DEVREQEN bits it must configure the PPU for static
 * transitions and ensure the requested power mode has been reached, this means that no
 * further transitions can occur, otherwise behavior is UNPREDICTABLE.
 *
 * The PWR_DEVACTIVEEN and OP_DEVACTIVEEN fields in this register control the ability of the
 * DEVACTIVE inputs to initiate power mode transitions, but not the ability to generate input edge
 * interrupt events.
 */
union cavm_dsuubx_cluster_ppu_pwcr
{
    uint32_t u;
    struct cavm_dsuubx_cluster_ppu_pwcr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_27_31        : 5;
        uint32_t op_devactiveen2       : 1;  /**< [ 26: 26](SR/W) Enables the operating mode DEVPACTIVE[18]
                                                                 input.

                                                                 0 = DEVPACTIVE[18] input (All L3 Cache
                                                                 Slices active) disabled.

                                                                 1 = DEVPACTIVE[18] input (All L3 Cache
                                                                 Slices active) enabled. */
        uint32_t op_devactiveen1       : 1;  /**< [ 25: 25](SR/W) Enables the operating mode DEVPACTIVE[17]
                                                                 input.

                                                                 0 = DEVPACTIVE[17] input (Upper L3 Cache
                                                                 RAMs active) disabled.

                                                                 1 = DEVPACTIVE[17] input (Upper L3 Cache
                                                                 RAMs active) enabled. */
        uint32_t op_devactiveen0       : 1;  /**< [ 24: 24](SR/W) Enables the operating mode DEVPACTIVE[16]
                                                                 input.

                                                                 0 = DEVPACTIVE[16] input (Lower L3 Cache
                                                                 RAMs active) disabled.

                                                                 1 = DEVPACTIVE[16] input (Lower L3 Cache
                                                                 RAMs active) enabled. */
        uint32_t reserved_19_23        : 5;
        uint32_t pwr_devactiveen10     : 1;  /**< [ 18: 18](SR/W) Enables the operating mode DEVPACTIVE[10]
                                                                 input.

                                                                 0 = DEVPACTIVE[10] input (DBG_RECOV)
                                                                 disabled.

                                                                 1 = DEVPACTIVE[10] input (DBG_RECOV)
                                                                 enabled. */
        uint32_t pwr_devactiveen9      : 1;  /**< [ 17: 17](SR/W) Enables the operating mode DEVPACTIVE[9]
                                                                 input.

                                                                 0 = DEVPACTIVE[9] input (WARM_RST)
                                                                 disabled.

                                                                 1 = DEVPACTIVE[9] input (WARM_RST)
                                                                 enabled. */
        uint32_t pwr_devactiveen8      : 1;  /**< [ 16: 16](SR/W) Enables the operating mode DEVPACTIVE[8]
                                                                 input.

                                                                 0 = DEVPACTIVE[8] input (ON) disabled.

                                                                 1 = DEVPACTIVE[8] input (ON) enabled. */
        uint32_t pwr_devactiveen7      : 1;  /**< [ 15: 15](SR/W) Enables the operating mode DEVPACTIVE[7]
                                                                 input.

                                                                 0 = DEVPACTIVE[7] input (FUNC_RET)
                                                                 disabled.

                                                                 1 = DEVPACTIVE[7] input (FUNC_RET)
                                                                 enabled. */
        uint32_t reserved_14           : 1;
        uint32_t pwr_devactiveen5      : 1;  /**< [ 13: 13](SR/W) Enables the operating mode DEVPACTIVE[5]
                                                                 input.

                                                                 0 = DEVPACTIVE[5] input (FULL_RET)
                                                                 disabled.

                                                                 1 = DEVPACTIVE[5] input (FULL_RET)
                                                                 enabled. */
        uint32_t reserved_12           : 1;
        uint32_t pwr_devactiveen3      : 1;  /**< [ 11: 11](SR/W) Enables the operating mode DEVPACTIVE[3]
                                                                 input.

                                                                 0 = DEVPACTIVE[3] input (MEM_RET_EMU)
                                                                 disabled.

                                                                 1 = DEVPACTIVE[3] input (MEM_RET_EMU)
                                                                 enabled. */
        uint32_t pwr_devactiveen2      : 1;  /**< [ 10: 10](SR/W) Enables the operating mode DEVPACTIVE[2]
                                                                 input.

                                                                 0 = DEVPACTIVE[2] input (MEM_RET)
                                                                 disabled.

                                                                 1 = DEVPACTIVE[2] input (MEM_RET)
                                                                 enabled. */
        uint32_t pwr_devactiveen1      : 1;  /**< [  9:  9](SR/W) Enables the operating mode DEVPACTIVE[1]
                                                                 input.

                                                                 0 = DEVPACTIVE[1] input (OFF_EMU)
                                                                 disabled.

                                                                 1 = DEVPACTIVE[1] input (OFF_EMU)
                                                                 enabled. */
        uint32_t reserved_1_8          : 8;
        uint32_t devreqen              : 1;  /**< [  0:  0](SR/W) Device interface handshake enable.

                                                                 0 = Device interface handshake disabled for
                                                                 transitions.

                                                                 1 = Device interface handshake enabled for
                                                                 transitions. */
#else /* Word 0 - Little Endian */
        uint32_t devreqen              : 1;  /**< [  0:  0](SR/W) Device interface handshake enable.

                                                                 0 = Device interface handshake disabled for
                                                                 transitions.

                                                                 1 = Device interface handshake enabled for
                                                                 transitions. */
        uint32_t reserved_1_8          : 8;
        uint32_t pwr_devactiveen1      : 1;  /**< [  9:  9](SR/W) Enables the operating mode DEVPACTIVE[1]
                                                                 input.

                                                                 0 = DEVPACTIVE[1] input (OFF_EMU)
                                                                 disabled.

                                                                 1 = DEVPACTIVE[1] input (OFF_EMU)
                                                                 enabled. */
        uint32_t pwr_devactiveen2      : 1;  /**< [ 10: 10](SR/W) Enables the operating mode DEVPACTIVE[2]
                                                                 input.

                                                                 0 = DEVPACTIVE[2] input (MEM_RET)
                                                                 disabled.

                                                                 1 = DEVPACTIVE[2] input (MEM_RET)
                                                                 enabled. */
        uint32_t pwr_devactiveen3      : 1;  /**< [ 11: 11](SR/W) Enables the operating mode DEVPACTIVE[3]
                                                                 input.

                                                                 0 = DEVPACTIVE[3] input (MEM_RET_EMU)
                                                                 disabled.

                                                                 1 = DEVPACTIVE[3] input (MEM_RET_EMU)
                                                                 enabled. */
        uint32_t reserved_12           : 1;
        uint32_t pwr_devactiveen5      : 1;  /**< [ 13: 13](SR/W) Enables the operating mode DEVPACTIVE[5]
                                                                 input.

                                                                 0 = DEVPACTIVE[5] input (FULL_RET)
                                                                 disabled.

                                                                 1 = DEVPACTIVE[5] input (FULL_RET)
                                                                 enabled. */
        uint32_t reserved_14           : 1;
        uint32_t pwr_devactiveen7      : 1;  /**< [ 15: 15](SR/W) Enables the operating mode DEVPACTIVE[7]
                                                                 input.

                                                                 0 = DEVPACTIVE[7] input (FUNC_RET)
                                                                 disabled.

                                                                 1 = DEVPACTIVE[7] input (FUNC_RET)
                                                                 enabled. */
        uint32_t pwr_devactiveen8      : 1;  /**< [ 16: 16](SR/W) Enables the operating mode DEVPACTIVE[8]
                                                                 input.

                                                                 0 = DEVPACTIVE[8] input (ON) disabled.

                                                                 1 = DEVPACTIVE[8] input (ON) enabled. */
        uint32_t pwr_devactiveen9      : 1;  /**< [ 17: 17](SR/W) Enables the operating mode DEVPACTIVE[9]
                                                                 input.

                                                                 0 = DEVPACTIVE[9] input (WARM_RST)
                                                                 disabled.

                                                                 1 = DEVPACTIVE[9] input (WARM_RST)
                                                                 enabled. */
        uint32_t pwr_devactiveen10     : 1;  /**< [ 18: 18](SR/W) Enables the operating mode DEVPACTIVE[10]
                                                                 input.

                                                                 0 = DEVPACTIVE[10] input (DBG_RECOV)
                                                                 disabled.

                                                                 1 = DEVPACTIVE[10] input (DBG_RECOV)
                                                                 enabled. */
        uint32_t reserved_19_23        : 5;
        uint32_t op_devactiveen0       : 1;  /**< [ 24: 24](SR/W) Enables the operating mode DEVPACTIVE[16]
                                                                 input.

                                                                 0 = DEVPACTIVE[16] input (Lower L3 Cache
                                                                 RAMs active) disabled.

                                                                 1 = DEVPACTIVE[16] input (Lower L3 Cache
                                                                 RAMs active) enabled. */
        uint32_t op_devactiveen1       : 1;  /**< [ 25: 25](SR/W) Enables the operating mode DEVPACTIVE[17]
                                                                 input.

                                                                 0 = DEVPACTIVE[17] input (Upper L3 Cache
                                                                 RAMs active) disabled.

                                                                 1 = DEVPACTIVE[17] input (Upper L3 Cache
                                                                 RAMs active) enabled. */
        uint32_t op_devactiveen2       : 1;  /**< [ 26: 26](SR/W) Enables the operating mode DEVPACTIVE[18]
                                                                 input.

                                                                 0 = DEVPACTIVE[18] input (All L3 Cache
                                                                 Slices active) disabled.

                                                                 1 = DEVPACTIVE[18] input (All L3 Cache
                                                                 Slices active) enabled. */
        uint32_t reserved_27_31        : 5;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_cluster_ppu_pwcr_s cn; */
};
typedef union cavm_dsuubx_cluster_ppu_pwcr cavm_dsuubx_cluster_ppu_pwcr_t;

static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_PWCR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_PWCR(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0030020ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CLUSTER_PPU_PWCR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTER_PPU_PWCR(a) cavm_dsuubx_cluster_ppu_pwcr_t
#define bustype_CAVM_DSUUBX_CLUSTER_PPU_PWCR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTER_PPU_PWCR(a) "DSUUBX_CLUSTER_PPU_PWCR"
#define device_bar_CAVM_DSUUBX_CLUSTER_PPU_PWCR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTER_PPU_PWCR(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTER_PPU_PWCR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_pwpr
 *
 * DSUUB Cluster Power Policy Register
 * This register enables software to program both power and operating mode policy. It also contains
 * related settings including the enable for dynamic transitions and the lock enable.
 *
 * This register does not reflect the current power mode value. The current power mode of the
 * domain is reflected in the Power Status Register (DSUUB_PPU_PWSR).
 */
union cavm_dsuubx_cluster_ppu_pwpr
{
    uint32_t u;
    struct cavm_dsuubx_cluster_ppu_pwpr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_25_31        : 7;
        uint32_t op_dyn_en             : 1;  /**< [ 24: 24](SR/W) Operating mode dynamic transition enable.

                                                                 0 = Dynamic transitions disabled for operating modes.

                                                                 1 = Dynamic transitions enabled for operating modes,
                                                                 allowing transitions to be initiated by changes on
                                                                 operating mode DEVACTIVE inputs. */
        uint32_t reserved_20_23        : 4;
        uint32_t op_policy             : 4;  /**< [ 19: 16](SR/W) Operating mode policy.

                                                                 When static operating mode transitions are enabled, OP_
                                                                 DYN_EN is set to 0b0, then this is the target operating
                                                                 mode for the PPU.

                                                                 When dynamic operating mode transitions are enabled,
                                                                 OP_DYN_EN is set to 0b1, then this is the minimum
                                                                 operating mode for the PPU.

                                                                 0b0000 = OPMODE_00: ONE_SLICE_SF_ONLY_ON: One
                                                                 L3 Cache slice is operational, the Cache RAM is
                                                                 powered down.

                                                                 0b0001 = OPMODE_01: ONE_SLICE_HALF_RAM_ON: One
                                                                 L3 Cache slice is operational, half of the Cache
                                                                 RAMs are powered on.

                                                                 0b0011 = OPMODE_03: ONE_SLICE_FULL_RAM_ON: One
                                                                 L3 Cache slice is operational, all of the Cache RAMs
                                                                 are powered on.

                                                                 0b0100 = OPMODE_04: ALL_SLICE_SF_ONLY_ON: All L3
                                                                 Cache slices are operational, the Cache RAMs in
                                                                 each slice are powered down.

                                                                 0b0101 = OPMODE_05: ALL_SLICE_HALF_RAM_ON: All
                                                                 L3 Cache slices are operational, half of the Cache
                                                                 RAMs are powered on.

                                                                 0b0111 = OPMODE_07: ALL_SLICE_FULL_RAM_ON: All L3
                                                                 Cache slices are operational, all of the Cache RAMs
                                                                 are powered on. */
        uint32_t reserved_13_15        : 3;
        uint32_t lock_en               : 1;  /**< [ 12: 12](SR/W) Lock enable bit.

                                                                 0 = Lock feature disabled.

                                                                 1 = Lock feature enabled. */
        uint32_t reserved_9_11         : 3;
        uint32_t pwr_dyn_en            : 1;  /**< [  8:  8](SR/W) Power mode dynamic transition enable.

                                                                 0 = Dynamic transitions disabled for power modes.

                                                                 1 = Dynamic transitions enabled for power modes,
                                                                 allowing transitions to be initiated by changes on
                                                                 power mode DEVACTIVE inputs. */
        uint32_t reserved_4_7          : 4;
        uint32_t pwr_policy            : 4;  /**< [  3:  0](SR/W) Power mode policy.

                                                                 When static power mode transitions are enabled, PWR_
                                                                 DYN_EN is set to 0b0, this is the target power mode for
                                                                 the PPU.

                                                                 When dynamic power mode transitions are enabled, PWR_
                                                                 DYN_EN is set to 0b1, this is the minimum power mode
                                                                 for the PPU.

                                                                 0b0000 = OFF. Logic off and RAM off.

                                                                 0b0001 = OFF_EMU. Emulated Off. Logic on with RAM
                                                                 on. This mode is used to emulate the functional
                                                                 condition of OFF without removing power.

                                                                 0b0010 = MEM_RET. Memory Retention. Logic off with RAM
                                                                 retained.

                                                                 0b0011 = MEM_RET_EMU. Emulated Memory Retention.
                                                                 Logic on with RAM on. This mode is used to
                                                                 emulate the functional condition of MEM_RET
                                                                 without removing power.

                                                                 0b0111 = FUNC_RET. Functional Retention. Logic on with L3
                                                                 Cache and Snoop Filter retained.

                                                                 0b1000 = ON. Logic on with RAM on, cluster is functional.

                                                                 0b1001 = WARM_RST. Warm Reset. Warm reset application
                                                                 with logic and RAM on.

                                                                 0b1010 = DBG_RECOV. Debug Recovery Reset. Warm reset
                                                                 application with logic and RAM on. */
#else /* Word 0 - Little Endian */
        uint32_t pwr_policy            : 4;  /**< [  3:  0](SR/W) Power mode policy.

                                                                 When static power mode transitions are enabled, PWR_
                                                                 DYN_EN is set to 0b0, this is the target power mode for
                                                                 the PPU.

                                                                 When dynamic power mode transitions are enabled, PWR_
                                                                 DYN_EN is set to 0b1, this is the minimum power mode
                                                                 for the PPU.

                                                                 0b0000 = OFF. Logic off and RAM off.

                                                                 0b0001 = OFF_EMU. Emulated Off. Logic on with RAM
                                                                 on. This mode is used to emulate the functional
                                                                 condition of OFF without removing power.

                                                                 0b0010 = MEM_RET. Memory Retention. Logic off with RAM
                                                                 retained.

                                                                 0b0011 = MEM_RET_EMU. Emulated Memory Retention.
                                                                 Logic on with RAM on. This mode is used to
                                                                 emulate the functional condition of MEM_RET
                                                                 without removing power.

                                                                 0b0111 = FUNC_RET. Functional Retention. Logic on with L3
                                                                 Cache and Snoop Filter retained.

                                                                 0b1000 = ON. Logic on with RAM on, cluster is functional.

                                                                 0b1001 = WARM_RST. Warm Reset. Warm reset application
                                                                 with logic and RAM on.

                                                                 0b1010 = DBG_RECOV. Debug Recovery Reset. Warm reset
                                                                 application with logic and RAM on. */
        uint32_t reserved_4_7          : 4;
        uint32_t pwr_dyn_en            : 1;  /**< [  8:  8](SR/W) Power mode dynamic transition enable.

                                                                 0 = Dynamic transitions disabled for power modes.

                                                                 1 = Dynamic transitions enabled for power modes,
                                                                 allowing transitions to be initiated by changes on
                                                                 power mode DEVACTIVE inputs. */
        uint32_t reserved_9_11         : 3;
        uint32_t lock_en               : 1;  /**< [ 12: 12](SR/W) Lock enable bit.

                                                                 0 = Lock feature disabled.

                                                                 1 = Lock feature enabled. */
        uint32_t reserved_13_15        : 3;
        uint32_t op_policy             : 4;  /**< [ 19: 16](SR/W) Operating mode policy.

                                                                 When static operating mode transitions are enabled, OP_
                                                                 DYN_EN is set to 0b0, then this is the target operating
                                                                 mode for the PPU.

                                                                 When dynamic operating mode transitions are enabled,
                                                                 OP_DYN_EN is set to 0b1, then this is the minimum
                                                                 operating mode for the PPU.

                                                                 0b0000 = OPMODE_00: ONE_SLICE_SF_ONLY_ON: One
                                                                 L3 Cache slice is operational, the Cache RAM is
                                                                 powered down.

                                                                 0b0001 = OPMODE_01: ONE_SLICE_HALF_RAM_ON: One
                                                                 L3 Cache slice is operational, half of the Cache
                                                                 RAMs are powered on.

                                                                 0b0011 = OPMODE_03: ONE_SLICE_FULL_RAM_ON: One
                                                                 L3 Cache slice is operational, all of the Cache RAMs
                                                                 are powered on.

                                                                 0b0100 = OPMODE_04: ALL_SLICE_SF_ONLY_ON: All L3
                                                                 Cache slices are operational, the Cache RAMs in
                                                                 each slice are powered down.

                                                                 0b0101 = OPMODE_05: ALL_SLICE_HALF_RAM_ON: All
                                                                 L3 Cache slices are operational, half of the Cache
                                                                 RAMs are powered on.

                                                                 0b0111 = OPMODE_07: ALL_SLICE_FULL_RAM_ON: All L3
                                                                 Cache slices are operational, all of the Cache RAMs
                                                                 are powered on. */
        uint32_t reserved_20_23        : 4;
        uint32_t op_dyn_en             : 1;  /**< [ 24: 24](SR/W) Operating mode dynamic transition enable.

                                                                 0 = Dynamic transitions disabled for operating modes.

                                                                 1 = Dynamic transitions enabled for operating modes,
                                                                 allowing transitions to be initiated by changes on
                                                                 operating mode DEVACTIVE inputs. */
        uint32_t reserved_25_31        : 7;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_cluster_ppu_pwpr_s cn; */
};
typedef union cavm_dsuubx_cluster_ppu_pwpr cavm_dsuubx_cluster_ppu_pwpr_t;

static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_PWPR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_PWPR(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0030000ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CLUSTER_PPU_PWPR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTER_PPU_PWPR(a) cavm_dsuubx_cluster_ppu_pwpr_t
#define bustype_CAVM_DSUUBX_CLUSTER_PPU_PWPR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTER_PPU_PWPR(a) "DSUUBX_CLUSTER_PPU_PWPR"
#define device_bar_CAVM_DSUUBX_CLUSTER_PPU_PWPR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTER_PPU_PWPR(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTER_PPU_PWPR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_pwsr
 *
 * DSUUB Cluster Power Status Register
 * This read-only register contains status information for the power mode, operating mode, dynamic
 * transitions, and lock feature.
 */
union cavm_dsuubx_cluster_ppu_pwsr
{
    uint32_t u;
    struct cavm_dsuubx_cluster_ppu_pwsr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_25_31        : 7;
        uint32_t op_dyn_status         : 1;  /**< [ 24: 24](SRO/H) Operating mode dynamic transition status.

                                                                 There might be a delay in dynamic transitions
                                                                 becoming active or inactive if the PPU is transitioning
                                                                 when DSUUB_PPU_PWPR.OP_DYN_EN is programmed.

                                                                 0 = Dynamic transitions disabled for operating
                                                                 modes.

                                                                 1 = Dynamic transitions enabled for operating
                                                                 modes. */
        uint32_t reserved_20_23        : 4;
        uint32_t op_status             : 4;  /**< [ 19: 16](SRO/H) Operating mode status.

                                                                 These bits reflect the current operating mode of the
                                                                 PPU.

                                                                 In the OFF, OFF_EMU, DBG_RECOV, and WARM_
                                                                 RST power modes, this field reflects the current
                                                                 programmed OP_POLICY even though the operating
                                                                 mode DEVPSTATE output bits are set to zero.

                                                                 0b0000 = OPMODE_00: ONE_SLICE_SF_ONLY_ON:
                                                                 One L3 Cache slice is operational, the Cache
                                                                 RAM is powered down.

                                                                 0b0001 = OPMODE_01: ONE_SLICE_HALF_RAM_ON:
                                                                 One L3 Cache slice is operational, half of the
                                                                 Cache RAMs are powered on.

                                                                 0b0011 = OPMODE_03: ONE_SLICE_FULL_RAM_ON:
                                                                 One L3 Cache slice is operational, all of the
                                                                 Cache RAMs are powered on.

                                                                 0b0100 = OPMODE_04: ALL_SLICE_SF_ONLY_ON: All
                                                                 L3 Cache slices are operational, the Cache
                                                                 RAMs in each slice are powered down.

                                                                 0b0101 = OPMODE_05: ALL_SLICE_HALF_RAM_ON:
                                                                 All L3 Cache slices are operational, half of the
                                                                 Cache RAMs are powered on.

                                                                 0b0111 = OPMODE_07: ALL_SLICE_FULL_RAM_ON:
                                                                 All L3 Cache slices are operational, all of the
                                                                 Cache RAMs are powered on. */
        uint32_t reserved_13_15        : 3;
        uint32_t lock_status           : 1;  /**< [ 12: 12](SRO/H) Lock status.

                                                                 0 = The PPU is not locked in the current mode.

                                                                 1 = The PPU is locked in the current mode. */
        uint32_t reserved_9_11         : 3;
        uint32_t pwr_dyn_status        : 1;  /**< [  8:  8](SRO/H) Power mode dynamic transition status.

                                                                 There might be a delay in dynamic transitions
                                                                 becoming active or inactive if the PPU is transitioning
                                                                 when DSUUB_PPU_PWPR.DYN_EN is programmed.

                                                                 0 = Dynamic transitions disabled for power
                                                                 modes.

                                                                 1 = Dynamic transitions enabled for power modes. */
        uint32_t reserved_4_7          : 4;
        uint32_t pwr_status            : 4;  /**< [  3:  0](SRO/H) Power mode status.

                                                                 These bits reflect the current power mode of the
                                                                 PPU.

                                                                 0b0000 = OFF. Logic off and RAM off.

                                                                 0b0001 = OFF_EMU. Emulated Off. Logic on with
                                                                 RAM on. This mode is used to emulate the
                                                                 functional condition of OFF without removing
                                                                 power.

                                                                 0b0010 = MEM_RET. Memory Retention. Logic off with
                                                                 RAM retained.

                                                                 0b0011 = MEM_RET_EMU. Emulated Memory
                                                                 Retention. Logic on with RAM on. This mode
                                                                 is used to emulate the functional condition of
                                                                 MEM_RET without removing power.

                                                                 0b0111 = FUNC_RET. Functional Retention. Logic on
                                                                 with L3 Cache and Snoop Filter retained.

                                                                 0b1000 = ON. Logic on with RAM on, cluster is
                                                                 functional.

                                                                 0b1001 = WARM_RST. Warm Reset. Warm reset
                                                                 application with logic and RAM on.

                                                                 0b1010 = DBG_RECOV. Debug Recovery Reset. Warm
                                                                 reset application with logic and RAM on. */
#else /* Word 0 - Little Endian */
        uint32_t pwr_status            : 4;  /**< [  3:  0](SRO/H) Power mode status.

                                                                 These bits reflect the current power mode of the
                                                                 PPU.

                                                                 0b0000 = OFF. Logic off and RAM off.

                                                                 0b0001 = OFF_EMU. Emulated Off. Logic on with
                                                                 RAM on. This mode is used to emulate the
                                                                 functional condition of OFF without removing
                                                                 power.

                                                                 0b0010 = MEM_RET. Memory Retention. Logic off with
                                                                 RAM retained.

                                                                 0b0011 = MEM_RET_EMU. Emulated Memory
                                                                 Retention. Logic on with RAM on. This mode
                                                                 is used to emulate the functional condition of
                                                                 MEM_RET without removing power.

                                                                 0b0111 = FUNC_RET. Functional Retention. Logic on
                                                                 with L3 Cache and Snoop Filter retained.

                                                                 0b1000 = ON. Logic on with RAM on, cluster is
                                                                 functional.

                                                                 0b1001 = WARM_RST. Warm Reset. Warm reset
                                                                 application with logic and RAM on.

                                                                 0b1010 = DBG_RECOV. Debug Recovery Reset. Warm
                                                                 reset application with logic and RAM on. */
        uint32_t reserved_4_7          : 4;
        uint32_t pwr_dyn_status        : 1;  /**< [  8:  8](SRO/H) Power mode dynamic transition status.

                                                                 There might be a delay in dynamic transitions
                                                                 becoming active or inactive if the PPU is transitioning
                                                                 when DSUUB_PPU_PWPR.DYN_EN is programmed.

                                                                 0 = Dynamic transitions disabled for power
                                                                 modes.

                                                                 1 = Dynamic transitions enabled for power modes. */
        uint32_t reserved_9_11         : 3;
        uint32_t lock_status           : 1;  /**< [ 12: 12](SRO/H) Lock status.

                                                                 0 = The PPU is not locked in the current mode.

                                                                 1 = The PPU is locked in the current mode. */
        uint32_t reserved_13_15        : 3;
        uint32_t op_status             : 4;  /**< [ 19: 16](SRO/H) Operating mode status.

                                                                 These bits reflect the current operating mode of the
                                                                 PPU.

                                                                 In the OFF, OFF_EMU, DBG_RECOV, and WARM_
                                                                 RST power modes, this field reflects the current
                                                                 programmed OP_POLICY even though the operating
                                                                 mode DEVPSTATE output bits are set to zero.

                                                                 0b0000 = OPMODE_00: ONE_SLICE_SF_ONLY_ON:
                                                                 One L3 Cache slice is operational, the Cache
                                                                 RAM is powered down.

                                                                 0b0001 = OPMODE_01: ONE_SLICE_HALF_RAM_ON:
                                                                 One L3 Cache slice is operational, half of the
                                                                 Cache RAMs are powered on.

                                                                 0b0011 = OPMODE_03: ONE_SLICE_FULL_RAM_ON:
                                                                 One L3 Cache slice is operational, all of the
                                                                 Cache RAMs are powered on.

                                                                 0b0100 = OPMODE_04: ALL_SLICE_SF_ONLY_ON: All
                                                                 L3 Cache slices are operational, the Cache
                                                                 RAMs in each slice are powered down.

                                                                 0b0101 = OPMODE_05: ALL_SLICE_HALF_RAM_ON:
                                                                 All L3 Cache slices are operational, half of the
                                                                 Cache RAMs are powered on.

                                                                 0b0111 = OPMODE_07: ALL_SLICE_FULL_RAM_ON:
                                                                 All L3 Cache slices are operational, all of the
                                                                 Cache RAMs are powered on. */
        uint32_t reserved_20_23        : 4;
        uint32_t op_dyn_status         : 1;  /**< [ 24: 24](SRO/H) Operating mode dynamic transition status.

                                                                 There might be a delay in dynamic transitions
                                                                 becoming active or inactive if the PPU is transitioning
                                                                 when DSUUB_PPU_PWPR.OP_DYN_EN is programmed.

                                                                 0 = Dynamic transitions disabled for operating
                                                                 modes.

                                                                 1 = Dynamic transitions enabled for operating
                                                                 modes. */
        uint32_t reserved_25_31        : 7;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_cluster_ppu_pwsr_s cn; */
};
typedef union cavm_dsuubx_cluster_ppu_pwsr cavm_dsuubx_cluster_ppu_pwsr_t;

static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_PWSR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_PWSR(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0030008ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CLUSTER_PPU_PWSR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTER_PPU_PWSR(a) cavm_dsuubx_cluster_ppu_pwsr_t
#define bustype_CAVM_DSUUBX_CLUSTER_PPU_PWSR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTER_PPU_PWSR(a) "DSUUBX_CLUSTER_PPU_PWSR"
#define device_bar_CAVM_DSUUBX_CLUSTER_PPU_PWSR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTER_PPU_PWSR(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTER_PPU_PWSR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_stsr
 *
 * DSUUB Cluster Stored Status Register
 * This register is reserved for P-Channel PPUs.
 */
union cavm_dsuubx_cluster_ppu_stsr
{
    uint32_t u;
    struct cavm_dsuubx_cluster_ppu_stsr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t stored_devdeny        : 8;  /**< [  7:  0](SRO/H) Status of the DEVDENY signals from the last device
                                                                 interface Q-Channel transition. This field is reserved.

                                                                 0b00000000 = Reserved for P-Channel PPUs. */
#else /* Word 0 - Little Endian */
        uint32_t stored_devdeny        : 8;  /**< [  7:  0](SRO/H) Status of the DEVDENY signals from the last device
                                                                 interface Q-Channel transition. This field is reserved.

                                                                 0b00000000 = Reserved for P-Channel PPUs. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_cluster_ppu_stsr_s cn; */
};
typedef union cavm_dsuubx_cluster_ppu_stsr cavm_dsuubx_cluster_ppu_stsr_t;

static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_STSR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_STSR(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0030018ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CLUSTER_PPU_STSR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTER_PPU_STSR(a) cavm_dsuubx_cluster_ppu_stsr_t
#define bustype_CAVM_DSUUBX_CLUSTER_PPU_STSR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTER_PPU_STSR(a) "DSUUBX_CLUSTER_PPU_STSR"
#define device_bar_CAVM_DSUUBX_CLUSTER_PPU_STSR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTER_PPU_STSR(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTER_PPU_STSR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_unlk
 *
 * DSUUB Cluster Unlock Register
 * This register allows software to unlock the PPU from a locked power mode.
 */
union cavm_dsuubx_cluster_ppu_unlk
{
    uint32_t u;
    struct cavm_dsuubx_cluster_ppu_unlk_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_1_31         : 31;
        uint32_t unlock                : 1;  /**< [  0:  0](SR/W) When is written to this bit the PPU is unlocked from a locked
                                                                 power mode. A read always returns 0b0. */
#else /* Word 0 - Little Endian */
        uint32_t unlock                : 1;  /**< [  0:  0](SR/W) When is written to this bit the PPU is unlocked from a locked
                                                                 power mode. A read always returns 0b0. */
        uint32_t reserved_1_31         : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_cluster_ppu_unlk_s cn; */
};
typedef union cavm_dsuubx_cluster_ppu_unlk cavm_dsuubx_cluster_ppu_unlk_t;

static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_UNLK(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_UNLK(uint64_t a)
{
    if (a<=63)
        return 0x87e2c003001cll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CLUSTER_PPU_UNLK", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTER_PPU_UNLK(a) cavm_dsuubx_cluster_ppu_unlk_t
#define bustype_CAVM_DSUUBX_CLUSTER_PPU_UNLK(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTER_PPU_UNLK(a) "DSUUBX_CLUSTER_PPU_UNLK"
#define device_bar_CAVM_DSUUBX_CLUSTER_PPU_UNLK(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTER_PPU_UNLK(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTER_PPU_UNLK(a) (a),-1,-1,-1

/**
 * Register (RSL) dsuub#_clusterbusqos
 *
 * DSUUB Cluster Bus QoS Control Register
 * Determines the value driven on the CHI bus QoS field.
 */
union cavm_dsuubx_clusterbusqos
{
    uint64_t u;
    struct cavm_dsuubx_clusterbusqos_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t qos                   : 4;  /**< [  3:  0](SR/W) Valid driven on the CHI bus QoS field. */
#else /* Word 0 - Little Endian */
        uint64_t qos                   : 4;  /**< [  3:  0](SR/W) Valid driven on the CHI bus QoS field. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_clusterbusqos_s cn; */
};
typedef union cavm_dsuubx_clusterbusqos cavm_dsuubx_clusterbusqos_t;

static inline uint64_t CAVM_DSUUBX_CLUSTERBUSQOS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTERBUSQOS(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0000048ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CLUSTERBUSQOS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTERBUSQOS(a) cavm_dsuubx_clusterbusqos_t
#define bustype_CAVM_DSUUBX_CLUSTERBUSQOS(a) CSR_TYPE_RSL
#define basename_CAVM_DSUUBX_CLUSTERBUSQOS(a) "DSUUBX_CLUSTERBUSQOS"
#define device_bar_CAVM_DSUUBX_CLUSTERBUSQOS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTERBUSQOS(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTERBUSQOS(a) (a),-1,-1,-1

/**
 * Register (RSL) dsuub#_clustercfr
 *
 * DSUUB Cluster Configuration Register
 * Contains details of the hardware configuration of the cluster.
 */
union cavm_dsuubx_clustercfr
{
    uint64_t u;
    struct cavm_dsuubx_clustercfr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t nodes                 : 3;  /**< [ 63: 61](SRO) Number of transport nodes.
                                                                 0b000 = Direct connect.
                                                                 0b001 = One node.
                                                                 0b010 = Two nodes.
                                                                 0b011 = Three nodes.
                                                                 0b100 = Four nodes.
                                                                 0b101 = Eight nodes. */
        uint64_t sfway                 : 2;  /**< [ 60: 59](SRO) Number of Snoop Filter ways.
                                                                 0b00 = 4 ways.
                                                                 0b01 = 6 ways.
                                                                 0b10 = 8 ways
                                                                 0b11 = 12 ways. */
        uint64_t sfidx                 : 4;  /**< [ 58: 55](SRO) Log2 of the number of snoop filter indexes. */
        uint64_t reserved_54           : 1;
        uint64_t l3slc                 : 3;  /**< [ 53: 51](SRO) Number of L3 cache slices.
                                                                 0b000 = Eight L3 cache slices.
                                                                 0b001 = One L3 cache slice.
                                                                 0b010 = Two L3 cache slices.
                                                                 0b100 = Four L3 cache slices. */
        uint64_t reserved_45_50        : 6;
        uint64_t crs                   : 16; /**< [ 44: 29](SRO) Core register slices. Each pair of bits represents a core with
                                                                 [30:29] for core 0 up to [44:43] for core 7.
                                                                 0b0000000000000000 = No register slices.
                                                                 0b0000000000000001 = One register slice.
                                                                 0b0000000000000010 = Two register slices. */
        uint64_t trsv                  : 2;  /**< [ 28: 27](SRO) Transport register slices, vertical.
                                                                 0b00 = No register slices.
                                                                 0b01 = One register slice.
                                                                 0b10 = Two register slices. */
        uint64_t trsh                  : 2;  /**< [ 26: 25](SRO) Transport register slices, horizontal.
                                                                 0b00 = No register slices.
                                                                 0b01 = One register slice.
                                                                 0b10 = Two register slices. */
        uint64_t reserved_24           : 1;
        uint64_t pp                    : 1;  /**< [ 23: 23](SRO) Peripheral port presence.
                                                                 0 = No peripheral port present.
                                                                 1 = Peripheral port present. */
        uint64_t ppw                   : 1;  /**< [ 22: 22](SRO) Peripheral port width.
                                                                 0 = 64 bit data width.
                                                                 1 = 256 bit data width. */
        uint64_t reserved_21           : 1;
        uint64_t acp                   : 1;  /**< [ 20: 20](SRO) ACP interface presence.
                                                                 0 = No ACP interface present.
                                                                 1 = ACP interface present. */
        uint64_t acpw                  : 1;  /**< [ 19: 19](SRO) ACP interface width.
                                                                 0 = 128 bit data width.
                                                                 1 = 256 bit data width. */
        uint64_t reserved_18           : 1;
        uint64_t mas                   : 1;  /**< [ 17: 17](SRO) Master bus interface type.
                                                                 0 = AXI interface.
                                                                 1 = CHI interface. */
        uint64_t nummas                : 2;  /**< [ 16: 15](SRO) Number of Master interfaces.
                                                                 0b00 = One master.
                                                                 0b01 = Two masters.
                                                                 0b10 = Three masters.
                                                                 0b11 = Four masters. */
        uint64_t ecc                   : 1;  /**< [ 14: 14](SRO) SCU-L3 ECC configuration.
                                                                 0 = SCU-L3 is configured with no ECC.
                                                                 1 = SCU-L3 is configured with ECC. */
        uint64_t rdslc                 : 1;  /**< [ 13: 13](SRO) L3 data RAM read register slice.
                                                                 0 = No register slice present.
                                                                 1 = Register slice present. */
        uint64_t rdlat                 : 1;  /**< [ 12: 12](SRO) L3 Data RAM read latency.
                                                                 0 = Two cycle output delay from L3 data RAMs.
                                                                 1 = Three cycle output delay from L3 data RAMs. */
        uint64_t wrlat                 : 2;  /**< [ 11: 10](SRO) L3 Data RAM write latency.
                                                                 0b00 = One cycle input delay from L3 data RAMs.
                                                                 0b01 = Two cycle input delay from L3 data RAMs.
                                                                 0b11 = Two cycle input delay plus a one cycle hold. */
        uint64_t l3                    : 1;  /**< [  9:  9](SRO) L3 cache presence.
                                                                 0 = No L3 cache present.
                                                                 1 = L3 cache present. */
        uint64_t reserved_8            : 1;
        uint64_t numpe                 : 4;  /**< [  7:  4](SRO) Number of PEs present in the cluster. For single threaded
                                                                 cores, this number will be the same as bits [2:0]; for multithreaded
                                                                 cores it will be larger. */
        uint64_t reserved_3            : 1;
        uint64_t numcore               : 3;  /**< [  2:  0](SRO) Number of cores present in the cluster.
                                                                 0b000 = One core.
                                                                 0b001 = Two cores.
                                                                 0b010 = Three cores.
                                                                 0b011 = Four cores.
                                                                 0b100 = Five cores.
                                                                 0b101 = Six cores.
                                                                 0b110 = Seven cores.
                                                                 0b111 = Eight cores. */
#else /* Word 0 - Little Endian */
        uint64_t numcore               : 3;  /**< [  2:  0](SRO) Number of cores present in the cluster.
                                                                 0b000 = One core.
                                                                 0b001 = Two cores.
                                                                 0b010 = Three cores.
                                                                 0b011 = Four cores.
                                                                 0b100 = Five cores.
                                                                 0b101 = Six cores.
                                                                 0b110 = Seven cores.
                                                                 0b111 = Eight cores. */
        uint64_t reserved_3            : 1;
        uint64_t numpe                 : 4;  /**< [  7:  4](SRO) Number of PEs present in the cluster. For single threaded
                                                                 cores, this number will be the same as bits [2:0]; for multithreaded
                                                                 cores it will be larger. */
        uint64_t reserved_8            : 1;
        uint64_t l3                    : 1;  /**< [  9:  9](SRO) L3 cache presence.
                                                                 0 = No L3 cache present.
                                                                 1 = L3 cache present. */
        uint64_t wrlat                 : 2;  /**< [ 11: 10](SRO) L3 Data RAM write latency.
                                                                 0b00 = One cycle input delay from L3 data RAMs.
                                                                 0b01 = Two cycle input delay from L3 data RAMs.
                                                                 0b11 = Two cycle input delay plus a one cycle hold. */
        uint64_t rdlat                 : 1;  /**< [ 12: 12](SRO) L3 Data RAM read latency.
                                                                 0 = Two cycle output delay from L3 data RAMs.
                                                                 1 = Three cycle output delay from L3 data RAMs. */
        uint64_t rdslc                 : 1;  /**< [ 13: 13](SRO) L3 data RAM read register slice.
                                                                 0 = No register slice present.
                                                                 1 = Register slice present. */
        uint64_t ecc                   : 1;  /**< [ 14: 14](SRO) SCU-L3 ECC configuration.
                                                                 0 = SCU-L3 is configured with no ECC.
                                                                 1 = SCU-L3 is configured with ECC. */
        uint64_t nummas                : 2;  /**< [ 16: 15](SRO) Number of Master interfaces.
                                                                 0b00 = One master.
                                                                 0b01 = Two masters.
                                                                 0b10 = Three masters.
                                                                 0b11 = Four masters. */
        uint64_t mas                   : 1;  /**< [ 17: 17](SRO) Master bus interface type.
                                                                 0 = AXI interface.
                                                                 1 = CHI interface. */
        uint64_t reserved_18           : 1;
        uint64_t acpw                  : 1;  /**< [ 19: 19](SRO) ACP interface width.
                                                                 0 = 128 bit data width.
                                                                 1 = 256 bit data width. */
        uint64_t acp                   : 1;  /**< [ 20: 20](SRO) ACP interface presence.
                                                                 0 = No ACP interface present.
                                                                 1 = ACP interface present. */
        uint64_t reserved_21           : 1;
        uint64_t ppw                   : 1;  /**< [ 22: 22](SRO) Peripheral port width.
                                                                 0 = 64 bit data width.
                                                                 1 = 256 bit data width. */
        uint64_t pp                    : 1;  /**< [ 23: 23](SRO) Peripheral port presence.
                                                                 0 = No peripheral port present.
                                                                 1 = Peripheral port present. */
        uint64_t reserved_24           : 1;
        uint64_t trsh                  : 2;  /**< [ 26: 25](SRO) Transport register slices, horizontal.
                                                                 0b00 = No register slices.
                                                                 0b01 = One register slice.
                                                                 0b10 = Two register slices. */
        uint64_t trsv                  : 2;  /**< [ 28: 27](SRO) Transport register slices, vertical.
                                                                 0b00 = No register slices.
                                                                 0b01 = One register slice.
                                                                 0b10 = Two register slices. */
        uint64_t crs                   : 16; /**< [ 44: 29](SRO) Core register slices. Each pair of bits represents a core with
                                                                 [30:29] for core 0 up to [44:43] for core 7.
                                                                 0b0000000000000000 = No register slices.
                                                                 0b0000000000000001 = One register slice.
                                                                 0b0000000000000010 = Two register slices. */
        uint64_t reserved_45_50        : 6;
        uint64_t l3slc                 : 3;  /**< [ 53: 51](SRO) Number of L3 cache slices.
                                                                 0b000 = Eight L3 cache slices.
                                                                 0b001 = One L3 cache slice.
                                                                 0b010 = Two L3 cache slices.
                                                                 0b100 = Four L3 cache slices. */
        uint64_t reserved_54           : 1;
        uint64_t sfidx                 : 4;  /**< [ 58: 55](SRO) Log2 of the number of snoop filter indexes. */
        uint64_t sfway                 : 2;  /**< [ 60: 59](SRO) Number of Snoop Filter ways.
                                                                 0b00 = 4 ways.
                                                                 0b01 = 6 ways.
                                                                 0b10 = 8 ways
                                                                 0b11 = 12 ways. */
        uint64_t nodes                 : 3;  /**< [ 63: 61](SRO) Number of transport nodes.
                                                                 0b000 = Direct connect.
                                                                 0b001 = One node.
                                                                 0b010 = Two nodes.
                                                                 0b011 = Three nodes.
                                                                 0b100 = Four nodes.
                                                                 0b101 = Eight nodes. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_clustercfr_s cn; */
};
typedef union cavm_dsuubx_clustercfr cavm_dsuubx_clustercfr_t;

static inline uint64_t CAVM_DSUUBX_CLUSTERCFR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTERCFR(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0000050ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CLUSTERCFR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTERCFR(a) cavm_dsuubx_clustercfr_t
#define bustype_CAVM_DSUUBX_CLUSTERCFR(a) CSR_TYPE_RSL
#define basename_CAVM_DSUUBX_CLUSTERCFR(a) "DSUUBX_CLUSTERCFR"
#define device_bar_CAVM_DSUUBX_CLUSTERCFR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTERCFR(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTERCFR(a) (a),-1,-1,-1

/**
 * Register (RSL) dsuub#_clusterectlr
 *
 * DSUUB Cluster Extended Control Register
 * This register should be used for dynamically changing implementation specific
 * control bits.
 */
union cavm_dsuubx_clusterectlr
{
    uint64_t u;
    struct cavm_dsuubx_clusterectlr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_46_63        : 18;
        uint64_t dcc                   : 2;  /**< [ 45: 44](SR/W) Downstream cache control. Controls whether evictions of
                                                                 clean cachelines send data on the CHI interface. Set this
                                                                 based on whether there is a cache on the path to memory.
                                                                 0b00 = Disables sending data when clean cachelines are evicted.
                                                                 0b01 = Enables sending WriteEvictFull transactions when
                                                                 Unique Clean cachelines are evicted. Shared Clean
                                                                 cacheline evictions do not send data.
                                                                 0b10 = Enables sending WriteEvictOrEvict transactions
                                                                 when Unique Clean or Shared Clean cachelines
                                                                 are evicted. This is the reset value for non-Direct
                                                                 Connect configurations. */
        uint64_t efc                   : 1;  /**< [ 43: 43](SR/W) Eviction flush control. Controls whether hardware cache
                                                                 flushes and DC CISW instructions send data when evicting
                                                                 clean cachelines on the CHI interface.
                                                                 0 = Disables sending data when hardware cache flushes
                                                                 or DC CISW instructions evict a clean cacheline.
                                                                 Sending of Evict transactions is controlled by
                                                                 Downstream Snoop Filter Present (DSFP). This is the
                                                                 reset value.
                                                                 1 = Sending of data when hardware cache flushes or
                                                                 DC CISW instructions evict clean cachelines is
                                                                 controlled by Downstream Cache Control (DCC).
                                                                 Sending of Evict transactions is controlled by
                                                                 Downstream Snoop Filter Present (DSFP). */
        uint64_t dsfp                  : 1;  /**< [ 42: 42](SR/W) Downstream snoop filter present. Enables sending Evict
                                                                 transactions on the CHI interface when clean cachelines
                                                                 are evicted without data. Enable this if there is at least one
                                                                 snoop filter in the path to memory.
                                                                 0 = Disables sending Evict transactions when clean
                                                                 cachelines are evicted without data.
                                                                 1 = Enables sending of Evict transactions when clean
                                                                 cachelines are evicted without data. This is the reset
                                                                 value. */
        uint64_t reserved_18_41        : 24;
        uint64_t l3rdlat               : 1;  /**< [ 17: 17](SR/W) L3 data RAM read (output) latency.
                                                                 0 = The L3 data RAM output latency is 2 cycles.
                                                                 1 = The L3 data RAM output latency is 3 cycles. */
        uint64_t l3wrlat               : 2;  /**< [ 16: 15](SR/W) L3 data RAM write (input) latency.
                                                                 0b00 = The L3 data RAM input latency is 1 cycle with an
                                                                 additional hold cycle.
                                                                 0b01 = The L3 data RAM input latency is 2 cycles without
                                                                 an additional hold cycle.
                                                                 0b10 = The L3 data RAM input latency is 2 cycles with an
                                                                 additional hold cycle. This is only usable if the L3
                                                                 data RAM output latency is 3 cycles. */
        uint64_t reserved_11_14        : 4;
        uint64_t pfmtch                : 3;  /**< [ 10:  8](SR/W) Prefetch matching delay. Controls the amount of tie a
                                                                 prefetch waits for a possible match with a later read.
                                                                 Encoded as powers of 2, from 1-128.
                                                                 0b000 = Wait for 1 cycle.
                                                                 0b001 = Wait for 2 cycles.
                                                                 0b010 = Wait for 4 cycles.
                                                                 0b011 = Wait for 8 cycles.
                                                                 0b100 = Wait for 16 cycles.
                                                                 0b101 = Wait for 32 cycles.
                                                                 0b110 = Wait for 64 cycles.
                                                                 0b111 = Wait for 128 cycles. */
        uint64_t disatom               : 1;  /**< [  7:  7](SR/W) Disable cacheable atomics being sent to the interconnect.
                                                                 0 = Cacheable atomics will be sent to the interconnect if
                                                                 the BROADCASTATOMIC pin is set.
                                                                 1 = Cacheable atomics will be handled inside the cluster */
        uint64_t nol3stash             : 2;  /**< [  6:  5](SR/W) CPU StashOnce request behaviour when L3 is not present
                                                                 or powered down.
                                                                 0b00 = Stashes are sent out to the interconnect, if supported.
                                                                 0b01 = Normal read request sent to interconnect.
                                                                 0b10 = StashOnce has no effect. */
        uint64_t enpoisn               : 1;  /**< [  4:  4](SR/W) Interconnect data poisoning support for the CHI Master(s).
                                                                 This bit is ignored for AXI configurations, which never
                                                                 support poisoning.
                                                                 0 = Interconnect does not support data poisoning, so
                                                                 nCLUSTERERRIREQ will be asserted when poisoned
                                                                 data is evicted from the cluster or returned on a
                                                                 snoop.
                                                                 1 = Interconnect supports data poisoning, so no error
                                                                 recovery interrupt will be generated when poisoned
                                                                 data is evicted from the cluster or returned on a
                                                                 snoop. */
        uint64_t disevict              : 1;  /**< [  3:  3](SR/W) Clean line eviction notification disable.
                                                                 0 = Enables notification to the interconnect of clean
                                                                 lines being evicted.
                                                                 1 = Disables notification when clean lines are evicted.
                                                                 For use only when the interconnect does not
                                                                 contain a system cache or snoop filter. */
        uint64_t disevpwr              : 1;  /**< [  2:  2](SR/W) WriteEvict disable on cache powerdown.
                                                                 0 = Allow WriteEvicts to occur when powering down the cache.
                                                                 1 = Do not allow WriteEvicts to occur when powering down the cache. */
        uint64_t enpoisnpp             : 1;  /**< [  1:  1](SR/W) Interconnect data poisoning support for the CHI Peripheral
                                                                 Port. This bit is ignored for AXI configurations, which never
                                                                 support poisoning.
                                                                 0 = Interconnect does not support data poisoning, so
                                                                 nCLUSTERERRIREQ will be asserted when poisoned
                                                                 data is evicted from the cluster or returned on a
                                                                 snoop.
                                                                 1 = Interconnect supports data poisoning, so no error
                                                                 recovery interrupt will be generated when poisoned
                                                                 data is evicted from the cluster or returned on a
                                                                 snoop. */
        uint64_t reserved_0            : 1;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0            : 1;
        uint64_t enpoisnpp             : 1;  /**< [  1:  1](SR/W) Interconnect data poisoning support for the CHI Peripheral
                                                                 Port. This bit is ignored for AXI configurations, which never
                                                                 support poisoning.
                                                                 0 = Interconnect does not support data poisoning, so
                                                                 nCLUSTERERRIREQ will be asserted when poisoned
                                                                 data is evicted from the cluster or returned on a
                                                                 snoop.
                                                                 1 = Interconnect supports data poisoning, so no error
                                                                 recovery interrupt will be generated when poisoned
                                                                 data is evicted from the cluster or returned on a
                                                                 snoop. */
        uint64_t disevpwr              : 1;  /**< [  2:  2](SR/W) WriteEvict disable on cache powerdown.
                                                                 0 = Allow WriteEvicts to occur when powering down the cache.
                                                                 1 = Do not allow WriteEvicts to occur when powering down the cache. */
        uint64_t disevict              : 1;  /**< [  3:  3](SR/W) Clean line eviction notification disable.
                                                                 0 = Enables notification to the interconnect of clean
                                                                 lines being evicted.
                                                                 1 = Disables notification when clean lines are evicted.
                                                                 For use only when the interconnect does not
                                                                 contain a system cache or snoop filter. */
        uint64_t enpoisn               : 1;  /**< [  4:  4](SR/W) Interconnect data poisoning support for the CHI Master(s).
                                                                 This bit is ignored for AXI configurations, which never
                                                                 support poisoning.
                                                                 0 = Interconnect does not support data poisoning, so
                                                                 nCLUSTERERRIREQ will be asserted when poisoned
                                                                 data is evicted from the cluster or returned on a
                                                                 snoop.
                                                                 1 = Interconnect supports data poisoning, so no error
                                                                 recovery interrupt will be generated when poisoned
                                                                 data is evicted from the cluster or returned on a
                                                                 snoop. */
        uint64_t nol3stash             : 2;  /**< [  6:  5](SR/W) CPU StashOnce request behaviour when L3 is not present
                                                                 or powered down.
                                                                 0b00 = Stashes are sent out to the interconnect, if supported.
                                                                 0b01 = Normal read request sent to interconnect.
                                                                 0b10 = StashOnce has no effect. */
        uint64_t disatom               : 1;  /**< [  7:  7](SR/W) Disable cacheable atomics being sent to the interconnect.
                                                                 0 = Cacheable atomics will be sent to the interconnect if
                                                                 the BROADCASTATOMIC pin is set.
                                                                 1 = Cacheable atomics will be handled inside the cluster */
        uint64_t pfmtch                : 3;  /**< [ 10:  8](SR/W) Prefetch matching delay. Controls the amount of tie a
                                                                 prefetch waits for a possible match with a later read.
                                                                 Encoded as powers of 2, from 1-128.
                                                                 0b000 = Wait for 1 cycle.
                                                                 0b001 = Wait for 2 cycles.
                                                                 0b010 = Wait for 4 cycles.
                                                                 0b011 = Wait for 8 cycles.
                                                                 0b100 = Wait for 16 cycles.
                                                                 0b101 = Wait for 32 cycles.
                                                                 0b110 = Wait for 64 cycles.
                                                                 0b111 = Wait for 128 cycles. */
        uint64_t reserved_11_14        : 4;
        uint64_t l3wrlat               : 2;  /**< [ 16: 15](SR/W) L3 data RAM write (input) latency.
                                                                 0b00 = The L3 data RAM input latency is 1 cycle with an
                                                                 additional hold cycle.
                                                                 0b01 = The L3 data RAM input latency is 2 cycles without
                                                                 an additional hold cycle.
                                                                 0b10 = The L3 data RAM input latency is 2 cycles with an
                                                                 additional hold cycle. This is only usable if the L3
                                                                 data RAM output latency is 3 cycles. */
        uint64_t l3rdlat               : 1;  /**< [ 17: 17](SR/W) L3 data RAM read (output) latency.
                                                                 0 = The L3 data RAM output latency is 2 cycles.
                                                                 1 = The L3 data RAM output latency is 3 cycles. */
        uint64_t reserved_18_41        : 24;
        uint64_t dsfp                  : 1;  /**< [ 42: 42](SR/W) Downstream snoop filter present. Enables sending Evict
                                                                 transactions on the CHI interface when clean cachelines
                                                                 are evicted without data. Enable this if there is at least one
                                                                 snoop filter in the path to memory.
                                                                 0 = Disables sending Evict transactions when clean
                                                                 cachelines are evicted without data.
                                                                 1 = Enables sending of Evict transactions when clean
                                                                 cachelines are evicted without data. This is the reset
                                                                 value. */
        uint64_t efc                   : 1;  /**< [ 43: 43](SR/W) Eviction flush control. Controls whether hardware cache
                                                                 flushes and DC CISW instructions send data when evicting
                                                                 clean cachelines on the CHI interface.
                                                                 0 = Disables sending data when hardware cache flushes
                                                                 or DC CISW instructions evict a clean cacheline.
                                                                 Sending of Evict transactions is controlled by
                                                                 Downstream Snoop Filter Present (DSFP). This is the
                                                                 reset value.
                                                                 1 = Sending of data when hardware cache flushes or
                                                                 DC CISW instructions evict clean cachelines is
                                                                 controlled by Downstream Cache Control (DCC).
                                                                 Sending of Evict transactions is controlled by
                                                                 Downstream Snoop Filter Present (DSFP). */
        uint64_t dcc                   : 2;  /**< [ 45: 44](SR/W) Downstream cache control. Controls whether evictions of
                                                                 clean cachelines send data on the CHI interface. Set this
                                                                 based on whether there is a cache on the path to memory.
                                                                 0b00 = Disables sending data when clean cachelines are evicted.
                                                                 0b01 = Enables sending WriteEvictFull transactions when
                                                                 Unique Clean cachelines are evicted. Shared Clean
                                                                 cacheline evictions do not send data.
                                                                 0b10 = Enables sending WriteEvictOrEvict transactions
                                                                 when Unique Clean or Shared Clean cachelines
                                                                 are evicted. This is the reset value for non-Direct
                                                                 Connect configurations. */
        uint64_t reserved_46_63        : 18;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_clusterectlr_s cn; */
};
typedef union cavm_dsuubx_clusterectlr cavm_dsuubx_clusterectlr_t;

static inline uint64_t CAVM_DSUUBX_CLUSTERECTLR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTERECTLR(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0000060ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CLUSTERECTLR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTERECTLR(a) cavm_dsuubx_clusterectlr_t
#define bustype_CAVM_DSUUBX_CLUSTERECTLR(a) CSR_TYPE_RSL
#define basename_CAVM_DSUUBX_CLUSTERECTLR(a) "DSUUBX_CLUSTERECTLR"
#define device_bar_CAVM_DSUUBX_CLUSTERECTLR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTERECTLR(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTERECTLR(a) (a),-1,-1,-1

/**
 * Register (RSL) dsuub#_clusteridr
 *
 * DSUUB Cluster Main Revision Register
 * Holds the revision and patch level of the cluster.
 */
union cavm_dsuubx_clusteridr
{
    uint64_t u;
    struct cavm_dsuubx_clusteridr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t variant               : 4;  /**< [  7:  4](SRO) An IMPLEMENTATION DEFINED variant number for the device. */
        uint64_t revision              : 4;  /**< [  3:  0](SRO) An IMPLEMENTATION DEFINED revision number for the device. */
#else /* Word 0 - Little Endian */
        uint64_t revision              : 4;  /**< [  3:  0](SRO) An IMPLEMENTATION DEFINED revision number for the device. */
        uint64_t variant               : 4;  /**< [  7:  4](SRO) An IMPLEMENTATION DEFINED variant number for the device. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_clusteridr_s cn; */
};
typedef union cavm_dsuubx_clusteridr cavm_dsuubx_clusteridr_t;

static inline uint64_t CAVM_DSUUBX_CLUSTERIDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTERIDR(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0000000ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CLUSTERIDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTERIDR(a) cavm_dsuubx_clusteridr_t
#define bustype_CAVM_DSUUBX_CLUSTERIDR(a) CSR_TYPE_RSL
#define basename_CAVM_DSUUBX_CLUSTERIDR(a) "DSUUBX_CLUSTERIDR"
#define device_bar_CAVM_DSUUBX_CLUSTERIDR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTERIDR(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTERIDR(a) (a),-1,-1,-1

/**
 * Register (RSL) dsuub#_clusterl3dnth0
 *
 * DSUUB Cluster L3 Downsize Threshold0 Register
 * This register is intended for use in algorithms for determining when to power up or
 * down cache portions.
 */
union cavm_dsuubx_clusterl3dnth0
{
    uint64_t u;
    struct cavm_dsuubx_clusterl3dnth0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t dnth0                 : 32; /**< [ 31:  0](SR/W) If all L3 ways are powered and the cache hit bandwidth falls below
                                                                 this threshold then the cache is downsized to half the ways. The
                                                                 value in this register is compared with the change in the cluster L3
                                                                 hit counter since the last time period. */
#else /* Word 0 - Little Endian */
        uint64_t dnth0                 : 32; /**< [ 31:  0](SR/W) If all L3 ways are powered and the cache hit bandwidth falls below
                                                                 this threshold then the cache is downsized to half the ways. The
                                                                 value in this register is compared with the change in the cluster L3
                                                                 hit counter since the last time period. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_clusterl3dnth0_s cn; */
};
typedef union cavm_dsuubx_clusterl3dnth0 cavm_dsuubx_clusterl3dnth0_t;

static inline uint64_t CAVM_DSUUBX_CLUSTERL3DNTH0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTERL3DNTH0(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0000028ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CLUSTERL3DNTH0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTERL3DNTH0(a) cavm_dsuubx_clusterl3dnth0_t
#define bustype_CAVM_DSUUBX_CLUSTERL3DNTH0(a) CSR_TYPE_RSL
#define basename_CAVM_DSUUBX_CLUSTERL3DNTH0(a) "DSUUBX_CLUSTERL3DNTH0"
#define device_bar_CAVM_DSUUBX_CLUSTERL3DNTH0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTERL3DNTH0(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTERL3DNTH0(a) (a),-1,-1,-1

/**
 * Register (RSL) dsuub#_clusterl3dnth1
 *
 * DSUUB Cluster L3 Downsize Threshold1 Register
 * This register is intended for use in algorithms for determining when to power up or
 * down cache portions.
 */
union cavm_dsuubx_clusterl3dnth1
{
    uint64_t u;
    struct cavm_dsuubx_clusterl3dnth1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t dnth0                 : 32; /**< [ 31:  0](SR/W) If all L3 ways are powered and the cache hit bandwidth falls below
                                                                 this threshold then the cache is downsized to none the ways. The
                                                                 value in this register is compared with the change in the cluster L3
                                                                 hit counter since the last time period. */
#else /* Word 0 - Little Endian */
        uint64_t dnth0                 : 32; /**< [ 31:  0](SR/W) If all L3 ways are powered and the cache hit bandwidth falls below
                                                                 this threshold then the cache is downsized to none the ways. The
                                                                 value in this register is compared with the change in the cluster L3
                                                                 hit counter since the last time period. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_clusterl3dnth1_s cn; */
};
typedef union cavm_dsuubx_clusterl3dnth1 cavm_dsuubx_clusterl3dnth1_t;

static inline uint64_t CAVM_DSUUBX_CLUSTERL3DNTH1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTERL3DNTH1(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0000030ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CLUSTERL3DNTH1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTERL3DNTH1(a) cavm_dsuubx_clusterl3dnth1_t
#define bustype_CAVM_DSUUBX_CLUSTERL3DNTH1(a) CSR_TYPE_RSL
#define basename_CAVM_DSUUBX_CLUSTERL3DNTH1(a) "DSUUBX_CLUSTERL3DNTH1"
#define device_bar_CAVM_DSUUBX_CLUSTERL3DNTH1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTERL3DNTH1(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTERL3DNTH1(a) (a),-1,-1,-1

/**
 * Register (RSL) dsuub#_clusterl3hit
 *
 * DSUUB Cluster L3 Hit Counter Register
 * This register is intended for use in algorithms for determining when to power up or
 * down cache portions.
 */
union cavm_dsuubx_clusterl3hit
{
    uint64_t u;
    struct cavm_dsuubx_clusterl3hit_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t hitcnt                : 32; /**< [ 31:  0](SRO/H) Count of number of L3 hits, for use in portion control calculations. */
#else /* Word 0 - Little Endian */
        uint64_t hitcnt                : 32; /**< [ 31:  0](SRO/H) Count of number of L3 hits, for use in portion control calculations. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_clusterl3hit_s cn; */
};
typedef union cavm_dsuubx_clusterl3hit cavm_dsuubx_clusterl3hit_t;

static inline uint64_t CAVM_DSUUBX_CLUSTERL3HIT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTERL3HIT(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0000018ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CLUSTERL3HIT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTERL3HIT(a) cavm_dsuubx_clusterl3hit_t
#define bustype_CAVM_DSUUBX_CLUSTERL3HIT(a) CSR_TYPE_RSL
#define basename_CAVM_DSUUBX_CLUSTERL3HIT(a) "DSUUBX_CLUSTERL3HIT"
#define device_bar_CAVM_DSUUBX_CLUSTERL3HIT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTERL3HIT(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTERL3HIT(a) (a),-1,-1,-1

/**
 * Register (RSL) dsuub#_clusterl3miss
 *
 * DSUUB Cluster L3 Miss Counter Register
 * This register is intended for use in algorithms for determining when to power up or
 * down cache portions.
 */
union cavm_dsuubx_clusterl3miss
{
    uint64_t u;
    struct cavm_dsuubx_clusterl3miss_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t misscnt               : 32; /**< [ 31:  0](SRO/H) Count of number of L3 misses, for use in portion control calculations. */
#else /* Word 0 - Little Endian */
        uint64_t misscnt               : 32; /**< [ 31:  0](SRO/H) Count of number of L3 misses, for use in portion control calculations. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_clusterl3miss_s cn; */
};
typedef union cavm_dsuubx_clusterl3miss cavm_dsuubx_clusterl3miss_t;

static inline uint64_t CAVM_DSUUBX_CLUSTERL3MISS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTERL3MISS(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0000020ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CLUSTERL3MISS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTERL3MISS(a) cavm_dsuubx_clusterl3miss_t
#define bustype_CAVM_DSUUBX_CLUSTERL3MISS(a) CSR_TYPE_RSL
#define basename_CAVM_DSUUBX_CLUSTERL3MISS(a) "DSUUBX_CLUSTERL3MISS"
#define device_bar_CAVM_DSUUBX_CLUSTERL3MISS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTERL3MISS(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTERL3MISS(a) (a),-1,-1,-1

/**
 * Register (RSL) dsuub#_clusterl3upth0
 *
 * DSUUB Cluster L3 Upsize Threshold0 Register
 * This register is intended for use in algorithms for determining when to power up or
 * down cache portions.
 */
union cavm_dsuubx_clusterl3upth0
{
    uint64_t u;
    struct cavm_dsuubx_clusterl3upth0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t upth0                 : 32; /**< [ 31:  0](SR/W) If no L3 ways are powered and the cache miss bandwidth rises
                                                                 above this threshold then the cache is upsized to half the ways.
                                                                 The value in this register is compared with the change in the
                                                                 cluster L3 hit counter since the last time period. */
#else /* Word 0 - Little Endian */
        uint64_t upth0                 : 32; /**< [ 31:  0](SR/W) If no L3 ways are powered and the cache miss bandwidth rises
                                                                 above this threshold then the cache is upsized to half the ways.
                                                                 The value in this register is compared with the change in the
                                                                 cluster L3 hit counter since the last time period. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_clusterl3upth0_s cn; */
};
typedef union cavm_dsuubx_clusterl3upth0 cavm_dsuubx_clusterl3upth0_t;

static inline uint64_t CAVM_DSUUBX_CLUSTERL3UPTH0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTERL3UPTH0(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0000038ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CLUSTERL3UPTH0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTERL3UPTH0(a) cavm_dsuubx_clusterl3upth0_t
#define bustype_CAVM_DSUUBX_CLUSTERL3UPTH0(a) CSR_TYPE_RSL
#define basename_CAVM_DSUUBX_CLUSTERL3UPTH0(a) "DSUUBX_CLUSTERL3UPTH0"
#define device_bar_CAVM_DSUUBX_CLUSTERL3UPTH0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTERL3UPTH0(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTERL3UPTH0(a) (a),-1,-1,-1

/**
 * Register (RSL) dsuub#_clusterl3upth1
 *
 * DSUUB Cluster L3 Upsize Threshold1 Register
 * This register is intended for use in algorithms for determining when to power up or
 * down cache portions.
 */
union cavm_dsuubx_clusterl3upth1
{
    uint64_t u;
    struct cavm_dsuubx_clusterl3upth1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t upth1                 : 32; /**< [ 31:  0](SR/W) If no L3 ways are powered and the cache miss bandwidth rises
                                                                 above this threshold then the cache is upsized to all of the ways.
                                                                 The value in this register is compared with the change in the
                                                                 cluster L3 hit counter since the last time period. */
#else /* Word 0 - Little Endian */
        uint64_t upth1                 : 32; /**< [ 31:  0](SR/W) If no L3 ways are powered and the cache miss bandwidth rises
                                                                 above this threshold then the cache is upsized to all of the ways.
                                                                 The value in this register is compared with the change in the
                                                                 cluster L3 hit counter since the last time period. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_clusterl3upth1_s cn; */
};
typedef union cavm_dsuubx_clusterl3upth1 cavm_dsuubx_clusterl3upth1_t;

static inline uint64_t CAVM_DSUUBX_CLUSTERL3UPTH1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTERL3UPTH1(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0000040ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CLUSTERL3UPTH1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTERL3UPTH1(a) cavm_dsuubx_clusterl3upth1_t
#define bustype_CAVM_DSUUBX_CLUSTERL3UPTH1(a) CSR_TYPE_RSL
#define basename_CAVM_DSUUBX_CLUSTERL3UPTH1(a) "DSUUBX_CLUSTERL3UPTH1"
#define device_bar_CAVM_DSUUBX_CLUSTERL3UPTH1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTERL3UPTH1(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTERL3UPTH1(a) (a),-1,-1,-1

/**
 * Register (RSL) dsuub#_clusterpwrctlr
 *
 * DSUUB Cluster Power Control Register
 * This register controls power features of the cluster.
 */
union cavm_dsuubx_clusterpwrctlr
{
    uint64_t u;
    struct cavm_dsuubx_clusterpwrctlr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_19_63        : 45;
        uint64_t lslp                  : 1;  /**< [ 18: 18](SR/W) Enable L3 RAM light sleep. */
        uint64_t reserved_15_17        : 3;
        uint64_t autoprtn              : 3;  /**< [ 14: 12](SR/W) Enable automatic RAM power down and configure
                                                                 evaluation time period. Note that a shorter time period
                                                                 allows better responsiveness to changing workloads,
                                                                 however if it is too short then the cost of frequent resizing
                                                                 can be too high.
                                                                 0b000 = Disabled.
                                                                 0b001 = 8,192 architectural timer ticks, time perious of 164us-819us.
                                                                 0b010 = 16,384 architectural timer ticks, time perious of 328us-1.6ms.
                                                                 0b011 = 32,768 architectural timer ticks, time perious of 655us-3.3ms.
                                                                 0b100 = 65,536 architectural timer ticks, time perious of 1.3ms-6.6ms.
                                                                 0b101 = 131,072 architectural timer ticks, time perious of 2.6ms-13ms.
                                                                 0b110 = 262,144 architectural timer ticks, time perious of 5.2ms-26ms.
                                                                 0b111 = 524,288 architectural timer ticks, time perious of 10ms-52ms. */
        uint64_t reserved_7_11         : 5;
        uint64_t slcrq                 : 1;  /**< [  6:  6](SR/W) Cache slice power request. These bits are passed to the PPU
                                                                 as an advisory request for which slices to power.
                                                                 0 = Request that one L3 cache slice is powered on.
                                                                 1 = Request that all L3 cache slices are powered on. */
        uint64_t prtnrq                : 2;  /**< [  5:  4](SR/W) Cache portion power request. These bits are passed to the
                                                                 PPU as an advisory request for which portions to power.
                                                                 Note that these bits are only used when AUTOPRTN bits are
                                                                 3'b000.
                                                                 0b00 = Request that none of the L3 cache portions in each slice is powered on.
                                                                 0b01 = Request that half of the L3 cache portions in each slice are powered on.
                                                                 0b11 = Request that both of the L3 cache portions in each slice are powered on. */
        uint64_t reserved_3            : 1;
        uint64_t retctl                : 3;  /**< [  2:  0](SR/W) L3 Data RAM retention control.
                                                                 0b000 = Disable the retention circuit.
                                                                 0b001 = 2 architectural timer ticks, 40ns-200ns minimum delay before retention.
                                                                 0b010 = 8 architectural timer ticks, 160ns-800ns minimum delay before retention.
                                                                 0b011 = 32 architectural timer ticks, 640ns-3,200ns minimum delay before retention.
                                                                 0b100 = 64 architectural timer ticks, 1280ns-6,400ns minimum delay before retention.
                                                                 0b101 = 128 architectural timer ticks, 2,560ns-12,800ns minimum delay before retention.
                                                                 0b110 = 256 architectural timer ticks, 5,120ns-25,600ns minimum delay before retention.
                                                                 0b111 = 512 architectural timer ticks, 10,240ns-51,200ns minimum delay before retention. */
#else /* Word 0 - Little Endian */
        uint64_t retctl                : 3;  /**< [  2:  0](SR/W) L3 Data RAM retention control.
                                                                 0b000 = Disable the retention circuit.
                                                                 0b001 = 2 architectural timer ticks, 40ns-200ns minimum delay before retention.
                                                                 0b010 = 8 architectural timer ticks, 160ns-800ns minimum delay before retention.
                                                                 0b011 = 32 architectural timer ticks, 640ns-3,200ns minimum delay before retention.
                                                                 0b100 = 64 architectural timer ticks, 1280ns-6,400ns minimum delay before retention.
                                                                 0b101 = 128 architectural timer ticks, 2,560ns-12,800ns minimum delay before retention.
                                                                 0b110 = 256 architectural timer ticks, 5,120ns-25,600ns minimum delay before retention.
                                                                 0b111 = 512 architectural timer ticks, 10,240ns-51,200ns minimum delay before retention. */
        uint64_t reserved_3            : 1;
        uint64_t prtnrq                : 2;  /**< [  5:  4](SR/W) Cache portion power request. These bits are passed to the
                                                                 PPU as an advisory request for which portions to power.
                                                                 Note that these bits are only used when AUTOPRTN bits are
                                                                 3'b000.
                                                                 0b00 = Request that none of the L3 cache portions in each slice is powered on.
                                                                 0b01 = Request that half of the L3 cache portions in each slice are powered on.
                                                                 0b11 = Request that both of the L3 cache portions in each slice are powered on. */
        uint64_t slcrq                 : 1;  /**< [  6:  6](SR/W) Cache slice power request. These bits are passed to the PPU
                                                                 as an advisory request for which slices to power.
                                                                 0 = Request that one L3 cache slice is powered on.
                                                                 1 = Request that all L3 cache slices are powered on. */
        uint64_t reserved_7_11         : 5;
        uint64_t autoprtn              : 3;  /**< [ 14: 12](SR/W) Enable automatic RAM power down and configure
                                                                 evaluation time period. Note that a shorter time period
                                                                 allows better responsiveness to changing workloads,
                                                                 however if it is too short then the cost of frequent resizing
                                                                 can be too high.
                                                                 0b000 = Disabled.
                                                                 0b001 = 8,192 architectural timer ticks, time perious of 164us-819us.
                                                                 0b010 = 16,384 architectural timer ticks, time perious of 328us-1.6ms.
                                                                 0b011 = 32,768 architectural timer ticks, time perious of 655us-3.3ms.
                                                                 0b100 = 65,536 architectural timer ticks, time perious of 1.3ms-6.6ms.
                                                                 0b101 = 131,072 architectural timer ticks, time perious of 2.6ms-13ms.
                                                                 0b110 = 262,144 architectural timer ticks, time perious of 5.2ms-26ms.
                                                                 0b111 = 524,288 architectural timer ticks, time perious of 10ms-52ms. */
        uint64_t reserved_15_17        : 3;
        uint64_t lslp                  : 1;  /**< [ 18: 18](SR/W) Enable L3 RAM light sleep. */
        uint64_t reserved_19_63        : 45;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_clusterpwrctlr_s cn; */
};
typedef union cavm_dsuubx_clusterpwrctlr cavm_dsuubx_clusterpwrctlr_t;

static inline uint64_t CAVM_DSUUBX_CLUSTERPWRCTLR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTERPWRCTLR(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0000010ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CLUSTERPWRCTLR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTERPWRCTLR(a) cavm_dsuubx_clusterpwrctlr_t
#define bustype_CAVM_DSUUBX_CLUSTERPWRCTLR(a) CSR_TYPE_RSL
#define basename_CAVM_DSUUBX_CLUSTERPWRCTLR(a) "DSUUBX_CLUSTERPWRCTLR"
#define device_bar_CAVM_DSUUBX_CLUSTERPWRCTLR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTERPWRCTLR(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTERPWRCTLR(a) (a),-1,-1,-1

/**
 * Register (RSL) dsuub#_clusterras_err0addr
 *
 * DSUUB  Error Record Address Register
 * This register is reserved since the implementation does not provide an address with RAS errors.
 */
union cavm_dsuubx_clusterras_err0addr
{
    uint64_t u;
    struct cavm_dsuubx_clusterras_err0addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_clusterras_err0addr_s cn; */
};
typedef union cavm_dsuubx_clusterras_err0addr cavm_dsuubx_clusterras_err0addr_t;

static inline uint64_t CAVM_DSUUBX_CLUSTERRAS_ERR0ADDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTERRAS_ERR0ADDR(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0020018ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CLUSTERRAS_ERR0ADDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTERRAS_ERR0ADDR(a) cavm_dsuubx_clusterras_err0addr_t
#define bustype_CAVM_DSUUBX_CLUSTERRAS_ERR0ADDR(a) CSR_TYPE_RSL
#define basename_CAVM_DSUUBX_CLUSTERRAS_ERR0ADDR(a) "DSUUBX_CLUSTERRAS_ERR0ADDR"
#define device_bar_CAVM_DSUUBX_CLUSTERRAS_ERR0ADDR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTERRAS_ERR0ADDR(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTERRAS_ERR0ADDR(a) (a),-1,-1,-1

/**
 * Register (RSL) dsuub#_clusterras_err0ctlr
 *
 * DSUUB  Error Record Control Register
 * The error control register contains enable bits for the node that writes to this record, which:
 *
 * - Enable error detection and correction.
 *
 * - Enable an error recovery interrupt.
 *
 * - Enable a fault handling interrupt.
 *
 * - Enable error recovery reporting as a read or write error response.
 *
 * - When ARMv.4-RAS is implemented, enable a critical error interrupt.
 * For each bit, if the selected node does not support the feature, then the bit is
 * RES0. The definition
 * of each record is IMPLEMENTATION DEFINED.
 */
union cavm_dsuubx_clusterras_err0ctlr
{
    uint64_t u;
    struct cavm_dsuubx_clusterras_err0ctlr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_14_63        : 50;
        uint64_t ci                    : 1;  /**< [ 13: 13](SR/W) Critical error interrupt enable.

                                                                 When enabled, the critical error interrupt is generated for a critical
                                                                 error condition.

                                                                 0 = Critical error interrupt not generated for critical errors.
                                                                 Critical errors are treated as Uncontained errors.

                                                                 1 = Critical error interrupt generated for critical errors. */
        uint64_t reserved_11_12        : 2;
        uint64_t dui                   : 1;  /**< [ 10: 10](SR/W) Error recovery interrupt for deferred errors enable. This control
                                                                 applies to errors arising from both reads and writes.

                                                                 When enabled, an error recovery interrupt is generated for all
                                                                 detected Deferred errors.

                                                                 0 = Error recovery interrupt not generated for deferred errors.

                                                                 1 = Error recovery interrupt generated for deferred errors. */
        uint64_t reserved_9            : 1;
        uint64_t cfi                   : 1;  /**< [  8:  8](SR/W) Fault handling interrupt for Corrected errors enable. This control
                                                                 applies to errors arising from both reads and writes.

                                                                 When enabled:

                                                                 If the node implements Corrected error counters, then the fault
                                                                 handling interrupt is generated when a counter overflows and the
                                                                 overflow bit for the counter is set to 1. For more information, see
                                                                 DSUUB_ERR\<n\>MISC0.

                                                                 Otherwise, the fault handling interrupt is generated for all detected
                                                                 Corrected errors.

                                                                 0 = Fault handling interrupt not generated for Corrected errors.

                                                                 1 = Fault handling interrupt generated for Corrected errors. */
        uint64_t reserved_5_7          : 3;
        uint64_t ue                    : 1;  /**< [  4:  4](SR/W) In-band Uncorrected error reporting enable.

                                                                 When enabled, responses to transactions that detect an
                                                                 Uncorrected error that cannot be deferred are signaled in-band as a
                                                                 detected Uncorrected error (External abort).

                                                                 0 = External abort response for Uncorrected errors disabled.

                                                                 1 = External abort response for Uncorrected errors enabled. */
        uint64_t fi                    : 1;  /**< [  3:  3](SR/W) Fault handling interrupt enable. This control applies to errors arising
                                                                 from both reads and writes.

                                                                 When enabled:

                                                                 The fault handling interrupt is generated for all detected Deferred
                                                                 errors and Uncorrected errors.

                                                                 If the fault handling interrupt for Corrected errors control is not
                                                                 implemented:

                                                                 *     If the node implements Corrected error counters, then the
                                                                 fault handling interrupt is also generated when a counter
                                                                 overflows and the overflow bit for the counter is set to 1.
                                                                 *     Otherwise, the fault handling interrupt is also generated for all
                                                                 detected Corrected errors.
                                                                 0 = Fault handling interrupt disabled.

                                                                 1 = Fault handling interrupt enabled. */
        uint64_t ui                    : 1;  /**< [  2:  2](SR/W) Uncorrected error recovery interrupt enable. This control applies to
                                                                 errors arising from both reads and writes.

                                                                 When enabled, the error recovery interrupt is generated for all
                                                                 detected Uncorrected errors that are not deferred.

                                                                 0 = Error recovery interrupt disabled.

                                                                 1 = Error recovery interrupt enabled. */
        uint64_t reserved_1            : 1;
        uint64_t ed                    : 1;  /**< [  0:  0](SR/W) Error reporting and logging enable.

                                                                 When disabled, the node behaves as if error detection and
                                                                 correction are disabled, and no errors are recorded or signaled
                                                                 by the node. Arm recommends that, when disabled, correct error
                                                                 detection and correction codes are written for writes, unless
                                                                 disabled by an IMPLEMENTATION DEFINED control for error injection.

                                                                 0 = Error reporting disabled.

                                                                 1 = Error reporting enabled. */
#else /* Word 0 - Little Endian */
        uint64_t ed                    : 1;  /**< [  0:  0](SR/W) Error reporting and logging enable.

                                                                 When disabled, the node behaves as if error detection and
                                                                 correction are disabled, and no errors are recorded or signaled
                                                                 by the node. Arm recommends that, when disabled, correct error
                                                                 detection and correction codes are written for writes, unless
                                                                 disabled by an IMPLEMENTATION DEFINED control for error injection.

                                                                 0 = Error reporting disabled.

                                                                 1 = Error reporting enabled. */
        uint64_t reserved_1            : 1;
        uint64_t ui                    : 1;  /**< [  2:  2](SR/W) Uncorrected error recovery interrupt enable. This control applies to
                                                                 errors arising from both reads and writes.

                                                                 When enabled, the error recovery interrupt is generated for all
                                                                 detected Uncorrected errors that are not deferred.

                                                                 0 = Error recovery interrupt disabled.

                                                                 1 = Error recovery interrupt enabled. */
        uint64_t fi                    : 1;  /**< [  3:  3](SR/W) Fault handling interrupt enable. This control applies to errors arising
                                                                 from both reads and writes.

                                                                 When enabled:

                                                                 The fault handling interrupt is generated for all detected Deferred
                                                                 errors and Uncorrected errors.

                                                                 If the fault handling interrupt for Corrected errors control is not
                                                                 implemented:

                                                                 *     If the node implements Corrected error counters, then the
                                                                 fault handling interrupt is also generated when a counter
                                                                 overflows and the overflow bit for the counter is set to 1.
                                                                 *     Otherwise, the fault handling interrupt is also generated for all
                                                                 detected Corrected errors.
                                                                 0 = Fault handling interrupt disabled.

                                                                 1 = Fault handling interrupt enabled. */
        uint64_t ue                    : 1;  /**< [  4:  4](SR/W) In-band Uncorrected error reporting enable.

                                                                 When enabled, responses to transactions that detect an
                                                                 Uncorrected error that cannot be deferred are signaled in-band as a
                                                                 detected Uncorrected error (External abort).

                                                                 0 = External abort response for Uncorrected errors disabled.

                                                                 1 = External abort response for Uncorrected errors enabled. */
        uint64_t reserved_5_7          : 3;
        uint64_t cfi                   : 1;  /**< [  8:  8](SR/W) Fault handling interrupt for Corrected errors enable. This control
                                                                 applies to errors arising from both reads and writes.

                                                                 When enabled:

                                                                 If the node implements Corrected error counters, then the fault
                                                                 handling interrupt is generated when a counter overflows and the
                                                                 overflow bit for the counter is set to 1. For more information, see
                                                                 DSUUB_ERR\<n\>MISC0.

                                                                 Otherwise, the fault handling interrupt is generated for all detected
                                                                 Corrected errors.

                                                                 0 = Fault handling interrupt not generated for Corrected errors.

                                                                 1 = Fault handling interrupt generated for Corrected errors. */
        uint64_t reserved_9            : 1;
        uint64_t dui                   : 1;  /**< [ 10: 10](SR/W) Error recovery interrupt for deferred errors enable. This control
                                                                 applies to errors arising from both reads and writes.

                                                                 When enabled, an error recovery interrupt is generated for all
                                                                 detected Deferred errors.

                                                                 0 = Error recovery interrupt not generated for deferred errors.

                                                                 1 = Error recovery interrupt generated for deferred errors. */
        uint64_t reserved_11_12        : 2;
        uint64_t ci                    : 1;  /**< [ 13: 13](SR/W) Critical error interrupt enable.

                                                                 When enabled, the critical error interrupt is generated for a critical
                                                                 error condition.

                                                                 0 = Critical error interrupt not generated for critical errors.
                                                                 Critical errors are treated as Uncontained errors.

                                                                 1 = Critical error interrupt generated for critical errors. */
        uint64_t reserved_14_63        : 50;
#endif /* Word 0 - End */
    } s;
    struct cavm_dsuubx_clusterras_err0ctlr_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_14_31        : 18;
        uint64_t ci                    : 1;  /**< [ 13: 13](SR/W) Critical error interrupt enable.

                                                                 When enabled, the critical error interrupt is generated for a critical
                                                                 error condition.

                                                                 0 = Critical error interrupt not generated for critical errors.
                                                                 Critical errors are treated as Uncontained errors.

                                                                 1 = Critical error interrupt generated for critical errors. */
        uint64_t reserved_11_12        : 2;
        uint64_t dui                   : 1;  /**< [ 10: 10](SR/W) Error recovery interrupt for deferred errors enable. This control
                                                                 applies to errors arising from both reads and writes.

                                                                 When enabled, an error recovery interrupt is generated for all
                                                                 detected Deferred errors.

                                                                 0 = Error recovery interrupt not generated for deferred errors.

                                                                 1 = Error recovery interrupt generated for deferred errors. */
        uint64_t reserved_9            : 1;
        uint64_t cfi                   : 1;  /**< [  8:  8](SR/W) Fault handling interrupt for Corrected errors enable. This control
                                                                 applies to errors arising from both reads and writes.

                                                                 When enabled:

                                                                 If the node implements Corrected error counters, then the fault
                                                                 handling interrupt is generated when a counter overflows and the
                                                                 overflow bit for the counter is set to 1. For more information, see
                                                                 DSUUB_ERR\<n\>MISC0.

                                                                 Otherwise, the fault handling interrupt is generated for all detected
                                                                 Corrected errors.

                                                                 0 = Fault handling interrupt not generated for Corrected errors.

                                                                 1 = Fault handling interrupt generated for Corrected errors. */
        uint64_t reserved_5_7          : 3;
        uint64_t ue                    : 1;  /**< [  4:  4](SR/W) In-band Uncorrected error reporting enable.

                                                                 When enabled, responses to transactions that detect an
                                                                 Uncorrected error that cannot be deferred are signaled in-band as a
                                                                 detected Uncorrected error (External abort).

                                                                 0 = External abort response for Uncorrected errors disabled.

                                                                 1 = External abort response for Uncorrected errors enabled. */
        uint64_t fi                    : 1;  /**< [  3:  3](SR/W) Fault handling interrupt enable. This control applies to errors arising
                                                                 from both reads and writes.

                                                                 When enabled:

                                                                 The fault handling interrupt is generated for all detected Deferred
                                                                 errors and Uncorrected errors.

                                                                 If the fault handling interrupt for Corrected errors control is not
                                                                 implemented:

                                                                 *     If the node implements Corrected error counters, then the
                                                                 fault handling interrupt is also generated when a counter
                                                                 overflows and the overflow bit for the counter is set to 1.
                                                                 *     Otherwise, the fault handling interrupt is also generated for all
                                                                 detected Corrected errors.
                                                                 0 = Fault handling interrupt disabled.

                                                                 1 = Fault handling interrupt enabled. */
        uint64_t ui                    : 1;  /**< [  2:  2](SR/W) Uncorrected error recovery interrupt enable. This control applies to
                                                                 errors arising from both reads and writes.

                                                                 When enabled, the error recovery interrupt is generated for all
                                                                 detected Uncorrected errors that are not deferred.

                                                                 0 = Error recovery interrupt disabled.

                                                                 1 = Error recovery interrupt enabled. */
        uint64_t reserved_1            : 1;
        uint64_t ed                    : 1;  /**< [  0:  0](SR/W) Error reporting and logging enable.

                                                                 When disabled, the node behaves as if error detection and
                                                                 correction are disabled, and no errors are recorded or signaled
                                                                 by the node. Arm recommends that, when disabled, correct error
                                                                 detection and correction codes are written for writes, unless
                                                                 disabled by an IMPLEMENTATION DEFINED control for error injection.

                                                                 0 = Error reporting disabled.

                                                                 1 = Error reporting enabled. */
#else /* Word 0 - Little Endian */
        uint64_t ed                    : 1;  /**< [  0:  0](SR/W) Error reporting and logging enable.

                                                                 When disabled, the node behaves as if error detection and
                                                                 correction are disabled, and no errors are recorded or signaled
                                                                 by the node. Arm recommends that, when disabled, correct error
                                                                 detection and correction codes are written for writes, unless
                                                                 disabled by an IMPLEMENTATION DEFINED control for error injection.

                                                                 0 = Error reporting disabled.

                                                                 1 = Error reporting enabled. */
        uint64_t reserved_1            : 1;
        uint64_t ui                    : 1;  /**< [  2:  2](SR/W) Uncorrected error recovery interrupt enable. This control applies to
                                                                 errors arising from both reads and writes.

                                                                 When enabled, the error recovery interrupt is generated for all
                                                                 detected Uncorrected errors that are not deferred.

                                                                 0 = Error recovery interrupt disabled.

                                                                 1 = Error recovery interrupt enabled. */
        uint64_t fi                    : 1;  /**< [  3:  3](SR/W) Fault handling interrupt enable. This control applies to errors arising
                                                                 from both reads and writes.

                                                                 When enabled:

                                                                 The fault handling interrupt is generated for all detected Deferred
                                                                 errors and Uncorrected errors.

                                                                 If the fault handling interrupt for Corrected errors control is not
                                                                 implemented:

                                                                 *     If the node implements Corrected error counters, then the
                                                                 fault handling interrupt is also generated when a counter
                                                                 overflows and the overflow bit for the counter is set to 1.
                                                                 *     Otherwise, the fault handling interrupt is also generated for all
                                                                 detected Corrected errors.
                                                                 0 = Fault handling interrupt disabled.

                                                                 1 = Fault handling interrupt enabled. */
        uint64_t ue                    : 1;  /**< [  4:  4](SR/W) In-band Uncorrected error reporting enable.

                                                                 When enabled, responses to transactions that detect an
                                                                 Uncorrected error that cannot be deferred are signaled in-band as a
                                                                 detected Uncorrected error (External abort).

                                                                 0 = External abort response for Uncorrected errors disabled.

                                                                 1 = External abort response for Uncorrected errors enabled. */
        uint64_t reserved_5_7          : 3;
        uint64_t cfi                   : 1;  /**< [  8:  8](SR/W) Fault handling interrupt for Corrected errors enable. This control
                                                                 applies to errors arising from both reads and writes.

                                                                 When enabled:

                                                                 If the node implements Corrected error counters, then the fault
                                                                 handling interrupt is generated when a counter overflows and the
                                                                 overflow bit for the counter is set to 1. For more information, see
                                                                 DSUUB_ERR\<n\>MISC0.

                                                                 Otherwise, the fault handling interrupt is generated for all detected
                                                                 Corrected errors.

                                                                 0 = Fault handling interrupt not generated for Corrected errors.

                                                                 1 = Fault handling interrupt generated for Corrected errors. */
        uint64_t reserved_9            : 1;
        uint64_t dui                   : 1;  /**< [ 10: 10](SR/W) Error recovery interrupt for deferred errors enable. This control
                                                                 applies to errors arising from both reads and writes.

                                                                 When enabled, an error recovery interrupt is generated for all
                                                                 detected Deferred errors.

                                                                 0 = Error recovery interrupt not generated for deferred errors.

                                                                 1 = Error recovery interrupt generated for deferred errors. */
        uint64_t reserved_11_12        : 2;
        uint64_t ci                    : 1;  /**< [ 13: 13](SR/W) Critical error interrupt enable.

                                                                 When enabled, the critical error interrupt is generated for a critical
                                                                 error condition.

                                                                 0 = Critical error interrupt not generated for critical errors.
                                                                 Critical errors are treated as Uncontained errors.

                                                                 1 = Critical error interrupt generated for critical errors. */
        uint64_t reserved_14_31        : 18;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_dsuubx_clusterras_err0ctlr cavm_dsuubx_clusterras_err0ctlr_t;

static inline uint64_t CAVM_DSUUBX_CLUSTERRAS_ERR0CTLR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTERRAS_ERR0CTLR(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0020008ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CLUSTERRAS_ERR0CTLR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTERRAS_ERR0CTLR(a) cavm_dsuubx_clusterras_err0ctlr_t
#define bustype_CAVM_DSUUBX_CLUSTERRAS_ERR0CTLR(a) CSR_TYPE_RSL
#define basename_CAVM_DSUUBX_CLUSTERRAS_ERR0CTLR(a) "DSUUBX_CLUSTERRAS_ERR0CTLR"
#define device_bar_CAVM_DSUUBX_CLUSTERRAS_ERR0CTLR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTERRAS_ERR0CTLR(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTERRAS_ERR0CTLR(a) (a),-1,-1,-1

/**
 * Register (RSL) dsuub#_clusterras_err0fr
 *
 * DSUUB  Error Record Feature Register
 * Defines whether \<n\> is the first record owned by a node. If \<n\> is the first record owned by the
 * node, also defines which of the common architecturally-defined features are implemented by the
 * node and, of the implemented features, which are software programmable.
 */
union cavm_dsuubx_clusterras_err0fr
{
    uint64_t u;
    struct cavm_dsuubx_clusterras_err0fr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_26_63        : 38;
        uint64_t ts                    : 2;  /**< [ 25: 24](SRO) Timestamp Extension.

                                                                 Indicates whether, for each error record \<m\> owned by this node,
                                                                 CLUSTERRAS_ERR0MISC3 is used as the timestamp register, and, if
                                                                 it is, the timebase used by the timestamp.

                                                                 0b00 = The node does not support a timestamp register. */
        uint64_t ci                    : 2;  /**< [ 23: 22](SRO) Critical error interrupt.

                                                                 Indicates whether the critical error interrupt and associated controls
                                                                 are implemented.

                                                                 0b10 = Critical error interrupt is supported and it can be enabled
                                                                 using associated controls. */
        uint64_t inj                   : 2;  /**< [ 21: 20](SRO) Fault Injection Extension.

                                                                 Indicates whether the RAS Common Fault Injection Model Extension
                                                                 is implemented.

                                                                 0b01 = The node implements the RAS Common Fault Injection
                                                                 Model Extension. See DSUUB_CLUSTERRAS_ERR0PFGF for more
                                                                 information. */
        uint64_t ceo                   : 2;  /**< [ 19: 18](SRO) Corrected Error overwrite.

                                                                 Indicates the behavior when a second Corrected error is detected
                                                                 after a first Corrected error has been recorded by an error record
                                                                 \<m\> owned by the node.

                                                                 0b00 = Counts Corrected errors. Keeps the previous error
                                                                 syndrome. If the counter overflows then CLUSTERRAS_
                                                                 ERR0STATUS.OF is set to 1. */
        uint64_t dui                   : 2;  /**< [ 17: 16](SRO) Error recovery interrupt for deferred errors.

                                                                 Indicates whether the node implements a control for enabling error
                                                                 recovery interrupts on deferred errors.

                                                                 0b00 = Does not support feature. DSUUB_CLUSTERRAS_ERR0CTLR.DUI
                                                                 is RES0. */
        uint64_t rp                    : 1;  /**< [ 15: 15](SRO) Repeat counter.

                                                                 Indicates whether the node implements a repeat Corrected error
                                                                 counter in CLUSTERRAS_ERR0MISC0 for each error record \<m\>
                                                                 owned by the node that implements a standard Corrected error
                                                                 counter.

                                                                 1 = A first (repeat) counter and a second (other) counter are
                                                                 implemented. The repeat counter is the same size as the
                                                                 primary error counter. */
        uint64_t cec                   : 3;  /**< [ 14: 12](SRO) Corrected Error Counter.

                                                                 Indicates whether the node implements standard Corrected error
                                                                 counter (CE counter) mechanisms in CLUSTERRAS_ERR0MISC0 for
                                                                 each error record \<m\> owned by the node that can record countable
                                                                 errors.

                                                                 0b010 = Implements an 8-bit Corrected error counter in
                                                                 CLUSTERRAS_ERR0MISC0[39:32]. */
        uint64_t cfi                   : 2;  /**< [ 11: 10](SRO) Fault handling interrupt for corrected errors.

                                                                 Indicates whether the node implements a control for enabling fault
                                                                 handling interrupts on corrected errors.

                                                                 0b10 = Feature is controllable using DSUUB_CLUSTERRAS_
                                                                 ERR0CTLR.CFI. */
        uint64_t ue                    : 2;  /**< [  9:  8](SRO) In-band uncorrected error reporting.

                                                                 Indicates whether the node implements in-band uncorrected error
                                                                 reporting (External aborts), and, if so, whether the node implements
                                                                 controls for enabling and disabling the reporting.

                                                                 0b01 = Feature always enabled. DSUUB_CLUSTERRAS_ERR0CTLR.UE is
                                                                 RES0. */
        uint64_t fi                    : 2;  /**< [  7:  6](SRO) Fault handling interrupt.

                                                                 Indicates whether the node implements a fault handling interrupt,
                                                                 and, if so, whether the node implements controls for enabling and
                                                                 disabling the interrupt.

                                                                 0b10 = Feature is controllable using DSUUB_CLUSTERRAS_ERR0CTLR.FI. */
        uint64_t ui                    : 2;  /**< [  5:  4](SRO) Error recovery interrupt for uncorrected errors.

                                                                 Indicates whether the node implements an error recovery interrupt,
                                                                 and, if so, whether the node implements controls for enabling and
                                                                 disabling the interrupt.

                                                                 0b10 = Feature is controllable using DSUUB_CLUSTERRAS_ERR0CTLR.UI. */
        uint64_t de                    : 2;  /**< [  3:  2](SRO) Deferred error enable.

                                                                 0b01 = Deferred errors is always enabled. */
        uint64_t ed                    : 2;  /**< [  1:  0](SRO) Error reporting and logging.

                                                                 Indicates this is the first record owned by the cluster. The cluster
                                                                 implements controls for enabling and disabling error reporting and
                                                                 logging.

                                                                 0b10 = Feature is controllable using DSUUB_CLUSTERRAS_
                                                                 ERR0CTLR.ED. */
#else /* Word 0 - Little Endian */
        uint64_t ed                    : 2;  /**< [  1:  0](SRO) Error reporting and logging.

                                                                 Indicates this is the first record owned by the cluster. The cluster
                                                                 implements controls for enabling and disabling error reporting and
                                                                 logging.

                                                                 0b10 = Feature is controllable using DSUUB_CLUSTERRAS_
                                                                 ERR0CTLR.ED. */
        uint64_t de                    : 2;  /**< [  3:  2](SRO) Deferred error enable.

                                                                 0b01 = Deferred errors is always enabled. */
        uint64_t ui                    : 2;  /**< [  5:  4](SRO) Error recovery interrupt for uncorrected errors.

                                                                 Indicates whether the node implements an error recovery interrupt,
                                                                 and, if so, whether the node implements controls for enabling and
                                                                 disabling the interrupt.

                                                                 0b10 = Feature is controllable using DSUUB_CLUSTERRAS_ERR0CTLR.UI. */
        uint64_t fi                    : 2;  /**< [  7:  6](SRO) Fault handling interrupt.

                                                                 Indicates whether the node implements a fault handling interrupt,
                                                                 and, if so, whether the node implements controls for enabling and
                                                                 disabling the interrupt.

                                                                 0b10 = Feature is controllable using DSUUB_CLUSTERRAS_ERR0CTLR.FI. */
        uint64_t ue                    : 2;  /**< [  9:  8](SRO) In-band uncorrected error reporting.

                                                                 Indicates whether the node implements in-band uncorrected error
                                                                 reporting (External aborts), and, if so, whether the node implements
                                                                 controls for enabling and disabling the reporting.

                                                                 0b01 = Feature always enabled. DSUUB_CLUSTERRAS_ERR0CTLR.UE is
                                                                 RES0. */
        uint64_t cfi                   : 2;  /**< [ 11: 10](SRO) Fault handling interrupt for corrected errors.

                                                                 Indicates whether the node implements a control for enabling fault
                                                                 handling interrupts on corrected errors.

                                                                 0b10 = Feature is controllable using DSUUB_CLUSTERRAS_
                                                                 ERR0CTLR.CFI. */
        uint64_t cec                   : 3;  /**< [ 14: 12](SRO) Corrected Error Counter.

                                                                 Indicates whether the node implements standard Corrected error
                                                                 counter (CE counter) mechanisms in CLUSTERRAS_ERR0MISC0 for
                                                                 each error record \<m\> owned by the node that can record countable
                                                                 errors.

                                                                 0b010 = Implements an 8-bit Corrected error counter in
                                                                 CLUSTERRAS_ERR0MISC0[39:32]. */
        uint64_t rp                    : 1;  /**< [ 15: 15](SRO) Repeat counter.

                                                                 Indicates whether the node implements a repeat Corrected error
                                                                 counter in CLUSTERRAS_ERR0MISC0 for each error record \<m\>
                                                                 owned by the node that implements a standard Corrected error
                                                                 counter.

                                                                 1 = A first (repeat) counter and a second (other) counter are
                                                                 implemented. The repeat counter is the same size as the
                                                                 primary error counter. */
        uint64_t dui                   : 2;  /**< [ 17: 16](SRO) Error recovery interrupt for deferred errors.

                                                                 Indicates whether the node implements a control for enabling error
                                                                 recovery interrupts on deferred errors.

                                                                 0b00 = Does not support feature. DSUUB_CLUSTERRAS_ERR0CTLR.DUI
                                                                 is RES0. */
        uint64_t ceo                   : 2;  /**< [ 19: 18](SRO) Corrected Error overwrite.

                                                                 Indicates the behavior when a second Corrected error is detected
                                                                 after a first Corrected error has been recorded by an error record
                                                                 \<m\> owned by the node.

                                                                 0b00 = Counts Corrected errors. Keeps the previous error
                                                                 syndrome. If the counter overflows then CLUSTERRAS_
                                                                 ERR0STATUS.OF is set to 1. */
        uint64_t inj                   : 2;  /**< [ 21: 20](SRO) Fault Injection Extension.

                                                                 Indicates whether the RAS Common Fault Injection Model Extension
                                                                 is implemented.

                                                                 0b01 = The node implements the RAS Common Fault Injection
                                                                 Model Extension. See DSUUB_CLUSTERRAS_ERR0PFGF for more
                                                                 information. */
        uint64_t ci                    : 2;  /**< [ 23: 22](SRO) Critical error interrupt.

                                                                 Indicates whether the critical error interrupt and associated controls
                                                                 are implemented.

                                                                 0b10 = Critical error interrupt is supported and it can be enabled
                                                                 using associated controls. */
        uint64_t ts                    : 2;  /**< [ 25: 24](SRO) Timestamp Extension.

                                                                 Indicates whether, for each error record \<m\> owned by this node,
                                                                 CLUSTERRAS_ERR0MISC3 is used as the timestamp register, and, if
                                                                 it is, the timebase used by the timestamp.

                                                                 0b00 = The node does not support a timestamp register. */
        uint64_t reserved_26_63        : 38;
#endif /* Word 0 - End */
    } s;
    struct cavm_dsuubx_clusterras_err0fr_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_26_31        : 6;
        uint64_t ts                    : 2;  /**< [ 25: 24](SRO) Timestamp Extension.

                                                                 Indicates whether, for each error record \<m\> owned by this node,
                                                                 CLUSTERRAS_ERR0MISC3 is used as the timestamp register, and, if
                                                                 it is, the timebase used by the timestamp.

                                                                 0b00 = The node does not support a timestamp register. */
        uint64_t ci                    : 2;  /**< [ 23: 22](SRO) Critical error interrupt.

                                                                 Indicates whether the critical error interrupt and associated controls
                                                                 are implemented.

                                                                 0b10 = Critical error interrupt is supported and it can be enabled
                                                                 using associated controls. */
        uint64_t inj                   : 2;  /**< [ 21: 20](SRO) Fault Injection Extension.

                                                                 Indicates whether the RAS Common Fault Injection Model Extension
                                                                 is implemented.

                                                                 0b01 = The node implements the RAS Common Fault Injection
                                                                 Model Extension. See DSUUB_CLUSTERRAS_ERR0PFGF for more
                                                                 information. */
        uint64_t ceo                   : 2;  /**< [ 19: 18](SRO) Corrected Error overwrite.

                                                                 Indicates the behavior when a second Corrected error is detected
                                                                 after a first Corrected error has been recorded by an error record
                                                                 \<m\> owned by the node.

                                                                 0b00 = Counts Corrected errors. Keeps the previous error
                                                                 syndrome. If the counter overflows then CLUSTERRAS_
                                                                 ERR0STATUS.OF is set to 1. */
        uint64_t dui                   : 2;  /**< [ 17: 16](SRO) Error recovery interrupt for deferred errors.

                                                                 Indicates whether the node implements a control for enabling error
                                                                 recovery interrupts on deferred errors.

                                                                 0b00 = Does not support feature. DSUUB_CLUSTERRAS_ERR0CTLR.DUI
                                                                 is RES0. */
        uint64_t rp                    : 1;  /**< [ 15: 15](SRO) Repeat counter.

                                                                 Indicates whether the node implements a repeat Corrected error
                                                                 counter in CLUSTERRAS_ERR0MISC0 for each error record \<m\>
                                                                 owned by the node that implements a standard Corrected error
                                                                 counter.

                                                                 1 = A first (repeat) counter and a second (other) counter are
                                                                 implemented. The repeat counter is the same size as the
                                                                 primary error counter. */
        uint64_t cec                   : 3;  /**< [ 14: 12](SRO) Corrected Error Counter.

                                                                 Indicates whether the node implements standard Corrected error
                                                                 counter (CE counter) mechanisms in CLUSTERRAS_ERR0MISC0 for
                                                                 each error record \<m\> owned by the node that can record countable
                                                                 errors.

                                                                 0b010 = Implements an 8-bit Corrected error counter in
                                                                 CLUSTERRAS_ERR0MISC0[39:32]. */
        uint64_t cfi                   : 2;  /**< [ 11: 10](SRO) Fault handling interrupt for corrected errors.

                                                                 Indicates whether the node implements a control for enabling fault
                                                                 handling interrupts on corrected errors.

                                                                 0b10 = Feature is controllable using DSUUB_CLUSTERRAS_
                                                                 ERR0CTLR.CFI. */
        uint64_t ue                    : 2;  /**< [  9:  8](SRO) In-band uncorrected error reporting.

                                                                 Indicates whether the node implements in-band uncorrected error
                                                                 reporting (External aborts), and, if so, whether the node implements
                                                                 controls for enabling and disabling the reporting.

                                                                 0b01 = Feature always enabled. DSUUB_CLUSTERRAS_ERR0CTLR.UE is
                                                                 RES0. */
        uint64_t fi                    : 2;  /**< [  7:  6](SRO) Fault handling interrupt.

                                                                 Indicates whether the node implements a fault handling interrupt,
                                                                 and, if so, whether the node implements controls for enabling and
                                                                 disabling the interrupt.

                                                                 0b10 = Feature is controllable using DSUUB_CLUSTERRAS_ERR0CTLR.FI. */
        uint64_t ui                    : 2;  /**< [  5:  4](SRO) Error recovery interrupt for uncorrected errors.

                                                                 Indicates whether the node implements an error recovery interrupt,
                                                                 and, if so, whether the node implements controls for enabling and
                                                                 disabling the interrupt.

                                                                 0b10 = Feature is controllable using DSUUB_CLUSTERRAS_ERR0CTLR.UI. */
        uint64_t de                    : 2;  /**< [  3:  2](SRO) Deferred error enable.

                                                                 0b01 = Deferred errors is always enabled. */
        uint64_t ed                    : 2;  /**< [  1:  0](SRO) Error reporting and logging.

                                                                 Indicates this is the first record owned by the cluster. The cluster
                                                                 implements controls for enabling and disabling error reporting and
                                                                 logging.

                                                                 0b10 = Feature is controllable using DSUUB_CLUSTERRAS_
                                                                 ERR0CTLR.ED. */
#else /* Word 0 - Little Endian */
        uint64_t ed                    : 2;  /**< [  1:  0](SRO) Error reporting and logging.

                                                                 Indicates this is the first record owned by the cluster. The cluster
                                                                 implements controls for enabling and disabling error reporting and
                                                                 logging.

                                                                 0b10 = Feature is controllable using DSUUB_CLUSTERRAS_
                                                                 ERR0CTLR.ED. */
        uint64_t de                    : 2;  /**< [  3:  2](SRO) Deferred error enable.

                                                                 0b01 = Deferred errors is always enabled. */
        uint64_t ui                    : 2;  /**< [  5:  4](SRO) Error recovery interrupt for uncorrected errors.

                                                                 Indicates whether the node implements an error recovery interrupt,
                                                                 and, if so, whether the node implements controls for enabling and
                                                                 disabling the interrupt.

                                                                 0b10 = Feature is controllable using DSUUB_CLUSTERRAS_ERR0CTLR.UI. */
        uint64_t fi                    : 2;  /**< [  7:  6](SRO) Fault handling interrupt.

                                                                 Indicates whether the node implements a fault handling interrupt,
                                                                 and, if so, whether the node implements controls for enabling and
                                                                 disabling the interrupt.

                                                                 0b10 = Feature is controllable using DSUUB_CLUSTERRAS_ERR0CTLR.FI. */
        uint64_t ue                    : 2;  /**< [  9:  8](SRO) In-band uncorrected error reporting.

                                                                 Indicates whether the node implements in-band uncorrected error
                                                                 reporting (External aborts), and, if so, whether the node implements
                                                                 controls for enabling and disabling the reporting.

                                                                 0b01 = Feature always enabled. DSUUB_CLUSTERRAS_ERR0CTLR.UE is
                                                                 RES0. */
        uint64_t cfi                   : 2;  /**< [ 11: 10](SRO) Fault handling interrupt for corrected errors.

                                                                 Indicates whether the node implements a control for enabling fault
                                                                 handling interrupts on corrected errors.

                                                                 0b10 = Feature is controllable using DSUUB_CLUSTERRAS_
                                                                 ERR0CTLR.CFI. */
        uint64_t cec                   : 3;  /**< [ 14: 12](SRO) Corrected Error Counter.

                                                                 Indicates whether the node implements standard Corrected error
                                                                 counter (CE counter) mechanisms in CLUSTERRAS_ERR0MISC0 for
                                                                 each error record \<m\> owned by the node that can record countable
                                                                 errors.

                                                                 0b010 = Implements an 8-bit Corrected error counter in
                                                                 CLUSTERRAS_ERR0MISC0[39:32]. */
        uint64_t rp                    : 1;  /**< [ 15: 15](SRO) Repeat counter.

                                                                 Indicates whether the node implements a repeat Corrected error
                                                                 counter in CLUSTERRAS_ERR0MISC0 for each error record \<m\>
                                                                 owned by the node that implements a standard Corrected error
                                                                 counter.

                                                                 1 = A first (repeat) counter and a second (other) counter are
                                                                 implemented. The repeat counter is the same size as the
                                                                 primary error counter. */
        uint64_t dui                   : 2;  /**< [ 17: 16](SRO) Error recovery interrupt for deferred errors.

                                                                 Indicates whether the node implements a control for enabling error
                                                                 recovery interrupts on deferred errors.

                                                                 0b00 = Does not support feature. DSUUB_CLUSTERRAS_ERR0CTLR.DUI
                                                                 is RES0. */
        uint64_t ceo                   : 2;  /**< [ 19: 18](SRO) Corrected Error overwrite.

                                                                 Indicates the behavior when a second Corrected error is detected
                                                                 after a first Corrected error has been recorded by an error record
                                                                 \<m\> owned by the node.

                                                                 0b00 = Counts Corrected errors. Keeps the previous error
                                                                 syndrome. If the counter overflows then CLUSTERRAS_
                                                                 ERR0STATUS.OF is set to 1. */
        uint64_t inj                   : 2;  /**< [ 21: 20](SRO) Fault Injection Extension.

                                                                 Indicates whether the RAS Common Fault Injection Model Extension
                                                                 is implemented.

                                                                 0b01 = The node implements the RAS Common Fault Injection
                                                                 Model Extension. See DSUUB_CLUSTERRAS_ERR0PFGF for more
                                                                 information. */
        uint64_t ci                    : 2;  /**< [ 23: 22](SRO) Critical error interrupt.

                                                                 Indicates whether the critical error interrupt and associated controls
                                                                 are implemented.

                                                                 0b10 = Critical error interrupt is supported and it can be enabled
                                                                 using associated controls. */
        uint64_t ts                    : 2;  /**< [ 25: 24](SRO) Timestamp Extension.

                                                                 Indicates whether, for each error record \<m\> owned by this node,
                                                                 CLUSTERRAS_ERR0MISC3 is used as the timestamp register, and, if
                                                                 it is, the timebase used by the timestamp.

                                                                 0b00 = The node does not support a timestamp register. */
        uint64_t reserved_26_31        : 6;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_dsuubx_clusterras_err0fr cavm_dsuubx_clusterras_err0fr_t;

static inline uint64_t CAVM_DSUUBX_CLUSTERRAS_ERR0FR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTERRAS_ERR0FR(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0020000ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CLUSTERRAS_ERR0FR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTERRAS_ERR0FR(a) cavm_dsuubx_clusterras_err0fr_t
#define bustype_CAVM_DSUUBX_CLUSTERRAS_ERR0FR(a) CSR_TYPE_RSL
#define basename_CAVM_DSUUBX_CLUSTERRAS_ERR0FR(a) "DSUUBX_CLUSTERRAS_ERR0FR"
#define device_bar_CAVM_DSUUBX_CLUSTERRAS_ERR0FR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTERRAS_ERR0FR(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTERRAS_ERR0FR(a) (a),-1,-1,-1

/**
 * Register (RSL) dsuub#_clusterras_err0misc0
 *
 * DSUUB  Error Record Miscellaneous Register 0
 * IMPLEMENTATION DEFINED      error syndrome register. The miscellaneous syndrome registers might
 * contain:
 *
 * - A Corrected error counter or counters.
 *
 * - Information to identify the FRU in which the error was detected, and might contain enough
 * information to locate the error within that FRU.
 *
 * - Other state information not present in the corresponding status and address registers.
 *
 * CLUSTERRAS_ERR0MISC0 implements the architecturally-defined error counter or counters.
 */
union cavm_dsuubx_clusterras_err0misc0
{
    uint64_t u;
    struct cavm_dsuubx_clusterras_err0misc0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t ofo                   : 1;  /**< [ 47: 47](SR/W/H) Sticky overflow bit, other.

                                                                 Set to 1 when the Corrected error count, other, field is
                                                                 incremented and wraps through zero.

                                                                 0 = Other counter has not overflowed.

                                                                 1 = Other counter has overflowed. */
        uint64_t ceco                  : 7;  /**< [ 46: 40](SR/W/H) Corrected error count, other.

                                                                 Incremented for each countable error that is not accounted for by
                                                                 incrementing CLUSTERRAS_ERR0MISC0.CECR. */
        uint64_t ofr                   : 1;  /**< [ 39: 39](SR/W/H) Sticky overflow bit, repeat.

                                                                 Set to 1 when the Corrected error count, repeat, field is
                                                                 incremented and wraps through zero.

                                                                 0 = Repeat counter has not overflowed.

                                                                 1 = Repeat counter has overflowed. */
        uint64_t cecr                  : 7;  /**< [ 38: 32](SR/W/H) Corrected error count, repeat.

                                                                 Incremented for the first countable error, which also records other
                                                                 syndrome for the error, and subsequently for each countable
                                                                 error that matches the recorded other syndrome. Corrected errors
                                                                 are countable errors. It is IMPLEMENTATION DEFINED and might be
                                                                 UNPREDICTABLE whether Deferred and Uncorrected errors are
                                                                 countable errors. */
        uint64_t way                   : 4;  /**< [ 31: 28](SRO/H) L3 Cache way that contained the error. */
        uint64_t reserved_24_27        : 4;
        uint64_t indx                  : 18; /**< [ 23:  6](SRO/H) L3 Cache index that contained the error. */
        uint64_t reserved_4_5          : 2;
        uint64_t lvl                   : 3;  /**< [  3:  1](SRO/H) L3 Cache level that contained the error. Always 0x2.

                                                                 0b010 = Level 3 cache. */
        uint64_t ind                   : 1;  /**< [  0:  0](SRO/H) L3 Cache instruction vs. data cache that contained the error.
                                                                 Always data (0x0).

                                                                 0 = Data cache error. */
#else /* Word 0 - Little Endian */
        uint64_t ind                   : 1;  /**< [  0:  0](SRO/H) L3 Cache instruction vs. data cache that contained the error.
                                                                 Always data (0x0).

                                                                 0 = Data cache error. */
        uint64_t lvl                   : 3;  /**< [  3:  1](SRO/H) L3 Cache level that contained the error. Always 0x2.

                                                                 0b010 = Level 3 cache. */
        uint64_t reserved_4_5          : 2;
        uint64_t indx                  : 18; /**< [ 23:  6](SRO/H) L3 Cache index that contained the error. */
        uint64_t reserved_24_27        : 4;
        uint64_t way                   : 4;  /**< [ 31: 28](SRO/H) L3 Cache way that contained the error. */
        uint64_t cecr                  : 7;  /**< [ 38: 32](SR/W/H) Corrected error count, repeat.

                                                                 Incremented for the first countable error, which also records other
                                                                 syndrome for the error, and subsequently for each countable
                                                                 error that matches the recorded other syndrome. Corrected errors
                                                                 are countable errors. It is IMPLEMENTATION DEFINED and might be
                                                                 UNPREDICTABLE whether Deferred and Uncorrected errors are
                                                                 countable errors. */
        uint64_t ofr                   : 1;  /**< [ 39: 39](SR/W/H) Sticky overflow bit, repeat.

                                                                 Set to 1 when the Corrected error count, repeat, field is
                                                                 incremented and wraps through zero.

                                                                 0 = Repeat counter has not overflowed.

                                                                 1 = Repeat counter has overflowed. */
        uint64_t ceco                  : 7;  /**< [ 46: 40](SR/W/H) Corrected error count, other.

                                                                 Incremented for each countable error that is not accounted for by
                                                                 incrementing CLUSTERRAS_ERR0MISC0.CECR. */
        uint64_t ofo                   : 1;  /**< [ 47: 47](SR/W/H) Sticky overflow bit, other.

                                                                 Set to 1 when the Corrected error count, other, field is
                                                                 incremented and wraps through zero.

                                                                 0 = Other counter has not overflowed.

                                                                 1 = Other counter has overflowed. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_clusterras_err0misc0_s cn; */
};
typedef union cavm_dsuubx_clusterras_err0misc0 cavm_dsuubx_clusterras_err0misc0_t;

static inline uint64_t CAVM_DSUUBX_CLUSTERRAS_ERR0MISC0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTERRAS_ERR0MISC0(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0020020ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CLUSTERRAS_ERR0MISC0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTERRAS_ERR0MISC0(a) cavm_dsuubx_clusterras_err0misc0_t
#define bustype_CAVM_DSUUBX_CLUSTERRAS_ERR0MISC0(a) CSR_TYPE_RSL
#define basename_CAVM_DSUUBX_CLUSTERRAS_ERR0MISC0(a) "DSUUBX_CLUSTERRAS_ERR0MISC0"
#define device_bar_CAVM_DSUUBX_CLUSTERRAS_ERR0MISC0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTERRAS_ERR0MISC0(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTERRAS_ERR0MISC0(a) (a),-1,-1,-1

/**
 * Register (RSL) dsuub#_clusterras_err0misc1
 *
 * DSUUB  Error Record Miscellaneous Register 1
 * IMPLEMENTATION DEFINED         error syndrome register. The miscellaneous syndrome registers can
 * contain:
 *
 * - A Corrected error counter or counters.
 *
 * - Information to identify the FRU in which the error was detected, and might contain enough
 * information to locate the error within that FRU.
 *
 * - Other state information not present in the corresponding status and address registers.
 */
union cavm_dsuubx_clusterras_err0misc1
{
    uint64_t u;
    struct cavm_dsuubx_clusterras_err0misc1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t none                  : 64; /**< [ 63:  0](SR/W/H) IMPLEMENTATION DEFINED syndrome. This field reads as an
                                                                 IMPLEMENTATION DEFINED   value and writes to this field have
                                                                 IMPLEMENTATION DEFINED   behavior. */
#else /* Word 0 - Little Endian */
        uint64_t none                  : 64; /**< [ 63:  0](SR/W/H) IMPLEMENTATION DEFINED syndrome. This field reads as an
                                                                 IMPLEMENTATION DEFINED   value and writes to this field have
                                                                 IMPLEMENTATION DEFINED   behavior. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_clusterras_err0misc1_s cn; */
};
typedef union cavm_dsuubx_clusterras_err0misc1 cavm_dsuubx_clusterras_err0misc1_t;

static inline uint64_t CAVM_DSUUBX_CLUSTERRAS_ERR0MISC1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTERRAS_ERR0MISC1(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0020028ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CLUSTERRAS_ERR0MISC1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTERRAS_ERR0MISC1(a) cavm_dsuubx_clusterras_err0misc1_t
#define bustype_CAVM_DSUUBX_CLUSTERRAS_ERR0MISC1(a) CSR_TYPE_RSL
#define basename_CAVM_DSUUBX_CLUSTERRAS_ERR0MISC1(a) "DSUUBX_CLUSTERRAS_ERR0MISC1"
#define device_bar_CAVM_DSUUBX_CLUSTERRAS_ERR0MISC1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTERRAS_ERR0MISC1(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTERRAS_ERR0MISC1(a) (a),-1,-1,-1

/**
 * Register (RSL) dsuub#_clusterras_err0misc2
 *
 * DSUUB  Error Record Miscellaneous Register 2
 * IMPLEMENTATION DEFINED    error syndrome register. The miscellaneous syndrome registers can
 * contain:
 *
 * - A Corrected error counter or counters.
 *
 * - Information to identify the FRU in which the error was detected, and might contain enough
 * information to locate the error within that FRU.
 */
union cavm_dsuubx_clusterras_err0misc2
{
    uint64_t u;
    struct cavm_dsuubx_clusterras_err0misc2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t none                  : 64; /**< [ 63:  0](SR/W/H) IMPLEMENTATION DEFINED syndrome. This field reads as an
                                                                 IMPLEMENTATION DEFINED   value and writes to this field have
                                                                 IMPLEMENTATION DEFINED   behavior. */
#else /* Word 0 - Little Endian */
        uint64_t none                  : 64; /**< [ 63:  0](SR/W/H) IMPLEMENTATION DEFINED syndrome. This field reads as an
                                                                 IMPLEMENTATION DEFINED   value and writes to this field have
                                                                 IMPLEMENTATION DEFINED   behavior. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_clusterras_err0misc2_s cn; */
};
typedef union cavm_dsuubx_clusterras_err0misc2 cavm_dsuubx_clusterras_err0misc2_t;

static inline uint64_t CAVM_DSUUBX_CLUSTERRAS_ERR0MISC2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTERRAS_ERR0MISC2(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0020030ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CLUSTERRAS_ERR0MISC2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTERRAS_ERR0MISC2(a) cavm_dsuubx_clusterras_err0misc2_t
#define bustype_CAVM_DSUUBX_CLUSTERRAS_ERR0MISC2(a) CSR_TYPE_RSL
#define basename_CAVM_DSUUBX_CLUSTERRAS_ERR0MISC2(a) "DSUUBX_CLUSTERRAS_ERR0MISC2"
#define device_bar_CAVM_DSUUBX_CLUSTERRAS_ERR0MISC2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTERRAS_ERR0MISC2(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTERRAS_ERR0MISC2(a) (a),-1,-1,-1

/**
 * Register (RSL) dsuub#_clusterras_err0misc3
 *
 * DSUUB  Error Record Miscellaneous Register 3
 * IMPLEMENTATION DEFINED         error syndrome register. The miscellaneous syndrome registers can
 * contain:
 *
 * - A Corrected error counter or counters.
 * - Information to identify the FRU in which the error was detected, and might contain enough
 * information to locate the error within that FRU.
 *
 * - Other state information not present in the corresponding status and address registers.
 */
union cavm_dsuubx_clusterras_err0misc3
{
    uint64_t u;
    struct cavm_dsuubx_clusterras_err0misc3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t none                  : 64; /**< [ 63:  0](SR/W/H) IMPLEMENTATION DEFINED syndrome. This field reads as an
                                                                 IMPLEMENTATION DEFINED   value and writes to this field have
                                                                 IMPLEMENTATION DEFINED   behavior. */
#else /* Word 0 - Little Endian */
        uint64_t none                  : 64; /**< [ 63:  0](SR/W/H) IMPLEMENTATION DEFINED syndrome. This field reads as an
                                                                 IMPLEMENTATION DEFINED   value and writes to this field have
                                                                 IMPLEMENTATION DEFINED   behavior. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_clusterras_err0misc3_s cn; */
};
typedef union cavm_dsuubx_clusterras_err0misc3 cavm_dsuubx_clusterras_err0misc3_t;

static inline uint64_t CAVM_DSUUBX_CLUSTERRAS_ERR0MISC3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTERRAS_ERR0MISC3(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0020038ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CLUSTERRAS_ERR0MISC3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTERRAS_ERR0MISC3(a) cavm_dsuubx_clusterras_err0misc3_t
#define bustype_CAVM_DSUUBX_CLUSTERRAS_ERR0MISC3(a) CSR_TYPE_RSL
#define basename_CAVM_DSUUBX_CLUSTERRAS_ERR0MISC3(a) "DSUUBX_CLUSTERRAS_ERR0MISC3"
#define device_bar_CAVM_DSUUBX_CLUSTERRAS_ERR0MISC3(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTERRAS_ERR0MISC3(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTERRAS_ERR0MISC3(a) (a),-1,-1,-1

/**
 * Register (RSL) dsuub#_clusterras_err0pfgcdn
 *
 * DSUUB  Pseudo-fault Generation Countdown Register
 * Register
 * Generates one of the errors enabled in the corresponding DSUUB_CLUSTERRAS_ERR0PFGCTL
 * register.
 */
union cavm_dsuubx_clusterras_err0pfgcdn
{
    uint64_t u;
    struct cavm_dsuubx_clusterras_err0pfgcdn_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t cdn                   : 32; /**< [ 31:  0](SR/W) Countdown value.

                                                                 This field is copied to Error Generation Counter when either:

                                                                 *   Software writes DSUUB_CLUSTERRAS_ERR0PFGCTL.CDNEN with
                                                                 1.
                                                                 *   The Error Generation Counter decrements to zero and DSUUB_
                                                                 CLUSTERRAS_ERR0PFGCTL.R == 1.
                                                                 While DSUUB_CLUSTERRAS_ERR0PFGCTL.CDNEN == 1 and the
                                                                 Error Generation Counter is nonzero, the counter decrements
                                                                 by 1 for each cycle at an IMPLEMENTATION DEFINED clock rate.
                                                                 When the counter reaches 0, one of the errors enabled in the
                                                                 DSUUB_CLUSTERRAS_ERR0PFGCTL register is generated. */
#else /* Word 0 - Little Endian */
        uint64_t cdn                   : 32; /**< [ 31:  0](SR/W) Countdown value.

                                                                 This field is copied to Error Generation Counter when either:

                                                                 *   Software writes DSUUB_CLUSTERRAS_ERR0PFGCTL.CDNEN with
                                                                 1.
                                                                 *   The Error Generation Counter decrements to zero and DSUUB_
                                                                 CLUSTERRAS_ERR0PFGCTL.R == 1.
                                                                 While DSUUB_CLUSTERRAS_ERR0PFGCTL.CDNEN == 1 and the
                                                                 Error Generation Counter is nonzero, the counter decrements
                                                                 by 1 for each cycle at an IMPLEMENTATION DEFINED clock rate.
                                                                 When the counter reaches 0, one of the errors enabled in the
                                                                 DSUUB_CLUSTERRAS_ERR0PFGCTL register is generated. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_clusterras_err0pfgcdn_s cn; */
};
typedef union cavm_dsuubx_clusterras_err0pfgcdn cavm_dsuubx_clusterras_err0pfgcdn_t;

static inline uint64_t CAVM_DSUUBX_CLUSTERRAS_ERR0PFGCDN(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTERRAS_ERR0PFGCDN(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0020810ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CLUSTERRAS_ERR0PFGCDN", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTERRAS_ERR0PFGCDN(a) cavm_dsuubx_clusterras_err0pfgcdn_t
#define bustype_CAVM_DSUUBX_CLUSTERRAS_ERR0PFGCDN(a) CSR_TYPE_RSL
#define basename_CAVM_DSUUBX_CLUSTERRAS_ERR0PFGCDN(a) "DSUUBX_CLUSTERRAS_ERR0PFGCDN"
#define device_bar_CAVM_DSUUBX_CLUSTERRAS_ERR0PFGCDN(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTERRAS_ERR0PFGCDN(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTERRAS_ERR0PFGCDN(a) (a),-1,-1,-1

/**
 * Register (RSL) dsuub#_clusterras_err0pfgctl
 *
 * DSUUB  Pseudo-fault Generation Control Register
 * Enables controlled fault generation.
 */
union cavm_dsuubx_clusterras_err0pfgctl
{
    uint64_t u;
    struct cavm_dsuubx_clusterras_err0pfgctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t cdnen                 : 1;  /**< [ 31: 31](SR/W) Countdown Enable. Controls transfers from the value that is held
                                                                 in the DSUUB_CLUSTERRAS_ERR0PFGCDN into the Error Generation
                                                                 Counter, and enables this counter.

                                                                 0 = The Error Generation Counter is disabled.

                                                                 1 = The Error Generation Counter is enabled. On a write of
                                                                 1 to this bit, the Error Generation Counter is set to DSUUB_
                                                                 CLUSTERRAS_ERR0PFGCDN.CDN. */
        uint64_t r                     : 1;  /**< [ 30: 30](SR/W) Restart. Controls whether, on reaching zero, the Error Generation
                                                                 Counter restarts from the DSUUB_CLUSTERRAS_ERR0PFGCDN value,
                                                                 or stops.

                                                                 0 = On reaching 0, the Error Generation Counter stops.

                                                                 1 = On reaching 0, the Error Generation Counter is set to DSUUB_
                                                                 CLUSTERRAS_ERR0PFGCDN.CDN. */
        uint64_t reserved_13_29        : 17;
        uint64_t mv                    : 1;  /**< [ 12: 12](SR/W) Miscellaneous syndrome. The value that is written to DSUUB_
                                                                 CLUSTERRAS_ERR0STATUS.MV when an injected error is
                                                                 recorded.

                                                                 0 = DSUUB_CLUSTERRAS_ERR0STATUS.MV is set to 0 when an
                                                                 injected error is recorded.

                                                                 1 = DSUUB_CLUSTERRAS_ERR0STATUS.MV is set to 1 when an
                                                                 injected error is recorded. */
        uint64_t av                    : 1;  /**< [ 11: 11](SR/W) Address syndrome. The value that is written to DSUUB_CLUSTERRAS_
                                                                 ERR0STATUS.AV when an injected error is recorded.

                                                                 0 = DSUUB_CLUSTERRAS_ERR0STATUS.AV is set to 0 when an
                                                                 injected error is recorded.

                                                                 1 = DSUUB_CLUSTERRAS_ERR0STATUS.AV is set to 1 when an
                                                                 injected error is recorded, */
        uint64_t pn                    : 1;  /**< [ 10: 10](SR/W) Poison flag. The value that is written to DSUUB_CLUSTERRAS_
                                                                 ERR0STATUS.PN when an injected error is recorded.

                                                                 0 = DSUUB_CLUSTERRAS_ERR0STATUS.PN is set to 0 when an
                                                                 injected error is recorded.

                                                                 1 = DSUUB_CLUSTERRAS_ERR0STATUS.PN is set to 1 when an
                                                                 injected error is recorded. */
        uint64_t er                    : 1;  /**< [  9:  9](SR/W) Error Reported flag. The value that is written to DSUUB_CLUSTERRAS_
                                                                 ERR0STATUS.ER when an injected error is recorded.

                                                                 0 = DSUUB_CLUSTERRAS_ERR0STATUS.ER is set to 0 when an
                                                                 injected error is recorded.

                                                                 1 = DSUUB_CLUSTERRAS_ERR0STATUS.ER is set to 1 when an
                                                                 injected error is recorded. */
        uint64_t ci                    : 1;  /**< [  8:  8](SR/W) Critical Error flag. The value that is written to DSUUB_CLUSTERRAS_
                                                                 ERR0STATUS.CI when an injected error is recorded.

                                                                 0 = DSUUB_CLUSTERRAS_ERR0STATUS.CI is set to 0 when an
                                                                 injected error is recorded.

                                                                 1 = DSUUB_CLUSTERRAS_ERR0STATUS.CI is set to 1 when an
                                                                 injected error is recorded. */
        uint64_t ce                    : 2;  /**< [  7:  6](SR/W) Corrected Error generation enable. Controls the type of Corrected
                                                                 Error condition that might be generated.

                                                                 0b00 = No error of this type is generated.

                                                                 0b01 = A non-specific Corrected Error, that is, a Corrected Error
                                                                 that is recorded as DSUUB_CLUSTERRAS_ERR0STATUS.CE
                                                                 == 0b10, might be generated when the Error Generation
                                                                 Counter decrements to zero.

                                                                 0b10 = A transient Corrected Error, that is, a Corrected Error that is
                                                                 recorded as DSUUB_CLUSTERRAS_ERR0STATUS.CE == 0b01,
                                                                 might be generated when the Error Generation Counter
                                                                 decrements to zero.

                                                                 0b11 = A persistent Corrected Error, that is, a Corrected Error that
                                                                 is recorded as DSUUB_CLUSTERRAS_ERR0STATUS.CE == 0b11,
                                                                 might be generated when the Error Generation Counter
                                                                 decrements to zero. */
        uint64_t de                    : 1;  /**< [  5:  5](SR/W) Deferred Error generation enable. Controls whether this type of
                                                                 error condition might be generated. It is IMPLEMENTATION DEFINED
                                                                 whether the error is generated if the data is not consumed.

                                                                 0 = No error of this type is generated.

                                                                 1 = An error of this type might be generated when the Error
                                                                 Generation Counter decrements to zero. */
        uint64_t ueo                   : 1;  /**< [  4:  4](SR/W) Latent or Restartable Error generation enable. Controls
                                                                 whether this type of error condition might be generated. It is
                                                                 IMPLEMENTATION DEFINED whether the error is generated if the data
                                                                 is not consumed.

                                                                 0 = No error of this type is generated.

                                                                 1 = An error of this type might be generated when the Error
                                                                 Generation Counter decrements to zero. */
        uint64_t uer                   : 1;  /**< [  3:  3](SR/W) Signaled or Recoverable Error generation enable. Controls
                                                                 whether this type of error condition might be generated. It is
                                                                 IMPLEMENTATION DEFINED whether the error is generated if the data
                                                                 is not consumed.

                                                                 0 = No error of this type is generated.

                                                                 1 = An error of this type might be generated when the Error
                                                                 Generation Counter decrements to zero. */
        uint64_t ueu                   : 1;  /**< [  2:  2](SR/W) Unrecoverable Error generation enable. Controls whether this
                                                                 type of error condition might be generated. It is IMPLEMENTATION
                                                                 DEFINED whether the error is generated if the data is not consumed.

                                                                 0 = No error of this type is generated.

                                                                 1 = An error of this type might be generated when the Error
                                                                 Generation Counter decrements to zero. */
        uint64_t uc                    : 1;  /**< [  1:  1](SR/W) Uncontainable Error generation enable. Controls whether this
                                                                 type of error condition might be generated. It is IMPLEMENTATION
                                                                 DEFINED whether the error is generated if the data is not consumed.

                                                                 0 = No error of this type is generated.

                                                                 1 = An error of this type might be generated when the Error
                                                                 Generation Counter decrements to zero. */
        uint64_t of                    : 1;  /**< [  0:  0](SR/W) Overflow flag. The value that is written to DSUUB_CLUSTERRAS_
                                                                 ERR0STATUS.OF when an injected error is recorded.

                                                                 0 = DSUUB_CLUSTERRAS_ERR0STATUS.OF is set to 0 when an
                                                                 injected error is recorded.

                                                                 1 = DSUUB_CLUSTERRAS_ERR0STATUS.OF is set to 1 when an
                                                                 injected error is recorded. */
#else /* Word 0 - Little Endian */
        uint64_t of                    : 1;  /**< [  0:  0](SR/W) Overflow flag. The value that is written to DSUUB_CLUSTERRAS_
                                                                 ERR0STATUS.OF when an injected error is recorded.

                                                                 0 = DSUUB_CLUSTERRAS_ERR0STATUS.OF is set to 0 when an
                                                                 injected error is recorded.

                                                                 1 = DSUUB_CLUSTERRAS_ERR0STATUS.OF is set to 1 when an
                                                                 injected error is recorded. */
        uint64_t uc                    : 1;  /**< [  1:  1](SR/W) Uncontainable Error generation enable. Controls whether this
                                                                 type of error condition might be generated. It is IMPLEMENTATION
                                                                 DEFINED whether the error is generated if the data is not consumed.

                                                                 0 = No error of this type is generated.

                                                                 1 = An error of this type might be generated when the Error
                                                                 Generation Counter decrements to zero. */
        uint64_t ueu                   : 1;  /**< [  2:  2](SR/W) Unrecoverable Error generation enable. Controls whether this
                                                                 type of error condition might be generated. It is IMPLEMENTATION
                                                                 DEFINED whether the error is generated if the data is not consumed.

                                                                 0 = No error of this type is generated.

                                                                 1 = An error of this type might be generated when the Error
                                                                 Generation Counter decrements to zero. */
        uint64_t uer                   : 1;  /**< [  3:  3](SR/W) Signaled or Recoverable Error generation enable. Controls
                                                                 whether this type of error condition might be generated. It is
                                                                 IMPLEMENTATION DEFINED whether the error is generated if the data
                                                                 is not consumed.

                                                                 0 = No error of this type is generated.

                                                                 1 = An error of this type might be generated when the Error
                                                                 Generation Counter decrements to zero. */
        uint64_t ueo                   : 1;  /**< [  4:  4](SR/W) Latent or Restartable Error generation enable. Controls
                                                                 whether this type of error condition might be generated. It is
                                                                 IMPLEMENTATION DEFINED whether the error is generated if the data
                                                                 is not consumed.

                                                                 0 = No error of this type is generated.

                                                                 1 = An error of this type might be generated when the Error
                                                                 Generation Counter decrements to zero. */
        uint64_t de                    : 1;  /**< [  5:  5](SR/W) Deferred Error generation enable. Controls whether this type of
                                                                 error condition might be generated. It is IMPLEMENTATION DEFINED
                                                                 whether the error is generated if the data is not consumed.

                                                                 0 = No error of this type is generated.

                                                                 1 = An error of this type might be generated when the Error
                                                                 Generation Counter decrements to zero. */
        uint64_t ce                    : 2;  /**< [  7:  6](SR/W) Corrected Error generation enable. Controls the type of Corrected
                                                                 Error condition that might be generated.

                                                                 0b00 = No error of this type is generated.

                                                                 0b01 = A non-specific Corrected Error, that is, a Corrected Error
                                                                 that is recorded as DSUUB_CLUSTERRAS_ERR0STATUS.CE
                                                                 == 0b10, might be generated when the Error Generation
                                                                 Counter decrements to zero.

                                                                 0b10 = A transient Corrected Error, that is, a Corrected Error that is
                                                                 recorded as DSUUB_CLUSTERRAS_ERR0STATUS.CE == 0b01,
                                                                 might be generated when the Error Generation Counter
                                                                 decrements to zero.

                                                                 0b11 = A persistent Corrected Error, that is, a Corrected Error that
                                                                 is recorded as DSUUB_CLUSTERRAS_ERR0STATUS.CE == 0b11,
                                                                 might be generated when the Error Generation Counter
                                                                 decrements to zero. */
        uint64_t ci                    : 1;  /**< [  8:  8](SR/W) Critical Error flag. The value that is written to DSUUB_CLUSTERRAS_
                                                                 ERR0STATUS.CI when an injected error is recorded.

                                                                 0 = DSUUB_CLUSTERRAS_ERR0STATUS.CI is set to 0 when an
                                                                 injected error is recorded.

                                                                 1 = DSUUB_CLUSTERRAS_ERR0STATUS.CI is set to 1 when an
                                                                 injected error is recorded. */
        uint64_t er                    : 1;  /**< [  9:  9](SR/W) Error Reported flag. The value that is written to DSUUB_CLUSTERRAS_
                                                                 ERR0STATUS.ER when an injected error is recorded.

                                                                 0 = DSUUB_CLUSTERRAS_ERR0STATUS.ER is set to 0 when an
                                                                 injected error is recorded.

                                                                 1 = DSUUB_CLUSTERRAS_ERR0STATUS.ER is set to 1 when an
                                                                 injected error is recorded. */
        uint64_t pn                    : 1;  /**< [ 10: 10](SR/W) Poison flag. The value that is written to DSUUB_CLUSTERRAS_
                                                                 ERR0STATUS.PN when an injected error is recorded.

                                                                 0 = DSUUB_CLUSTERRAS_ERR0STATUS.PN is set to 0 when an
                                                                 injected error is recorded.

                                                                 1 = DSUUB_CLUSTERRAS_ERR0STATUS.PN is set to 1 when an
                                                                 injected error is recorded. */
        uint64_t av                    : 1;  /**< [ 11: 11](SR/W) Address syndrome. The value that is written to DSUUB_CLUSTERRAS_
                                                                 ERR0STATUS.AV when an injected error is recorded.

                                                                 0 = DSUUB_CLUSTERRAS_ERR0STATUS.AV is set to 0 when an
                                                                 injected error is recorded.

                                                                 1 = DSUUB_CLUSTERRAS_ERR0STATUS.AV is set to 1 when an
                                                                 injected error is recorded, */
        uint64_t mv                    : 1;  /**< [ 12: 12](SR/W) Miscellaneous syndrome. The value that is written to DSUUB_
                                                                 CLUSTERRAS_ERR0STATUS.MV when an injected error is
                                                                 recorded.

                                                                 0 = DSUUB_CLUSTERRAS_ERR0STATUS.MV is set to 0 when an
                                                                 injected error is recorded.

                                                                 1 = DSUUB_CLUSTERRAS_ERR0STATUS.MV is set to 1 when an
                                                                 injected error is recorded. */
        uint64_t reserved_13_29        : 17;
        uint64_t r                     : 1;  /**< [ 30: 30](SR/W) Restart. Controls whether, on reaching zero, the Error Generation
                                                                 Counter restarts from the DSUUB_CLUSTERRAS_ERR0PFGCDN value,
                                                                 or stops.

                                                                 0 = On reaching 0, the Error Generation Counter stops.

                                                                 1 = On reaching 0, the Error Generation Counter is set to DSUUB_
                                                                 CLUSTERRAS_ERR0PFGCDN.CDN. */
        uint64_t cdnen                 : 1;  /**< [ 31: 31](SR/W) Countdown Enable. Controls transfers from the value that is held
                                                                 in the DSUUB_CLUSTERRAS_ERR0PFGCDN into the Error Generation
                                                                 Counter, and enables this counter.

                                                                 0 = The Error Generation Counter is disabled.

                                                                 1 = The Error Generation Counter is enabled. On a write of
                                                                 1 to this bit, the Error Generation Counter is set to DSUUB_
                                                                 CLUSTERRAS_ERR0PFGCDN.CDN. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_clusterras_err0pfgctl_s cn; */
};
typedef union cavm_dsuubx_clusterras_err0pfgctl cavm_dsuubx_clusterras_err0pfgctl_t;

static inline uint64_t CAVM_DSUUBX_CLUSTERRAS_ERR0PFGCTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTERRAS_ERR0PFGCTL(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0020808ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CLUSTERRAS_ERR0PFGCTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTERRAS_ERR0PFGCTL(a) cavm_dsuubx_clusterras_err0pfgctl_t
#define bustype_CAVM_DSUUBX_CLUSTERRAS_ERR0PFGCTL(a) CSR_TYPE_RSL
#define basename_CAVM_DSUUBX_CLUSTERRAS_ERR0PFGCTL(a) "DSUUBX_CLUSTERRAS_ERR0PFGCTL"
#define device_bar_CAVM_DSUUBX_CLUSTERRAS_ERR0PFGCTL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTERRAS_ERR0PFGCTL(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTERRAS_ERR0PFGCTL(a) (a),-1,-1,-1

/**
 * Register (RSL) dsuub#_clusterras_err0pfgf
 *
 * DSUUB  Pseudo-fault Generation Feature Register
 * Defines which common architecturally-defined fault generation features are implemented.
 */
union cavm_dsuubx_clusterras_err0pfgf
{
    uint64_t u;
    struct cavm_dsuubx_clusterras_err0pfgf_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_31_63        : 33;
        uint64_t r                     : 1;  /**< [ 30: 30](SRO) Restartable. Support for Error Generation Counter restart mode.

                                                                 1 = Feature controllable. */
        uint64_t syn                   : 1;  /**< [ 29: 29](SRO) Syndrome. Fault syndrome injection.

                                                                 1 = When an injected error is recorded, the node does not update
                                                                 the DSUUB_CLUSTERRAS_ERR0STATUS.{IERR, SERR} fields. DSUUB_
                                                                 CLUSTERRAS_ERR0STATUS.{IERR, SERR} are writable when
                                                                 DSUUB_CLUSTERRAS_ERR0STATUS.V == 0. */
        uint64_t reserved_13_28        : 16;
        uint64_t mv                    : 1;  /**< [ 12: 12](SRO) Miscellaneous syndrome.

                                                                 Additional syndrome injection. Defines whether software can
                                                                 control all or part of the syndrome recorded in the CLUSTERRAS_
                                                                 ERR0MISC\<m\> registers when an injected error is recorded.

                                                                 It is IMPLEMENTATION DEFINED which syndrome fields in CLUSTERRAS_
                                                                 ERR0MISC\<m\> this refers to, as some fields might always be recorded
                                                                 by an error. For example, a Corrected Error counter.

                                                                 1 = When an injected error is recorded, the node does not update
                                                                 all the syndrome fields in the CLUSTERRAS_ERR0MISC\<m\>
                                                                 and does one of:

                                                                 *   The node does not update any fields in CLUSTERRAS_
                                                                 ERR0MISC\<m\> and sets DSUUB_CLUSTERRAS_
                                                                 ERR0STATUS.MV to DSUUB_CLUSTERRAS_ERR0PFGCTL.MV.
                                                                 *   The node records some syndrome in CLUSTERRAS_
                                                                 ERR0MISC\<m\> and sets DSUUB_CLUSTERRAS_
                                                                 ERR0STATUS.MV to 1. CLUSTERRAS_ERR0PGFCTL.MV is
                                                                 RAO.
                                                                 The syndrome fields that the node does not update are
                                                                 unchanged and must be writable when DSUUB_CLUSTERRAS_
                                                                 ERR0STATUS.MV is set to 0. */
        uint64_t av                    : 1;  /**< [ 11: 11](SRO) Address syndrome. Address syndrome injection.

                                                                 0 = When an injected error is recorded, the node either sets
                                                                 DSUUB_CLUSTERRAS_ERR0ADDR and DSUUB_CLUSTERRAS_
                                                                 ERR0STATUS.AV for the access, or leaves these unchanged. */
        uint64_t pn                    : 1;  /**< [ 10: 10](SRO) Poison flag. Describes how the fault generation feature of the node
                                                                 sets the DSUUB_CLUSTERRAS_ERR0STATUS.PN status flag.

                                                                 1 = When an injected error is recorded, DSUUB_CLUSTERRAS_
                                                                 ERR0STATUS.PN is set to DSUUB_CLUSTERRAS_ERR0PFGCTL.PN. */
        uint64_t er                    : 1;  /**< [  9:  9](SRO) Error Reported flag. Describes how the fault generation feature of the
                                                                 node sets the DSUUB_CLUSTERRAS_ERR0STATUS.ER status flag.

                                                                 0 = When an injected error is recorded, the node sets DSUUB_
                                                                 CLUSTERRAS_ERR0STATUS.ER according to the architecture-
                                                                 defined rules for setting the ER bit. */
        uint64_t ci                    : 1;  /**< [  8:  8](SRO) Critical Error flag. Describes how the fault generation feature of the
                                                                 node sets the DSUUB_CLUSTERRAS_ERR0STATUS.CI status flag.

                                                                 1 = When an injected error is recorded, DSUUB_CLUSTERRAS_
                                                                 ERR0STATUS.CI is set to DSUUB_CLUSTERRAS_ERR0PFGCTL.CI. */
        uint64_t ce                    : 2;  /**< [  7:  6](SRO) Corrected Error generation. Describes the types of Corrected Error
                                                                 that the fault generation feature of the node can generate.

                                                                 0b01 = The fault generation feature of the node allows generation of a
                                                                 non-specific Corrected Error, that is, a Corrected Error that is
                                                                 recorded as DSUUB_CLUSTERRAS_ERR0STATUS.CE == 0b10. */
        uint64_t de                    : 1;  /**< [  5:  5](SRO) Deferred Error generation. Describes whether the fault generation
                                                                 feature of the node can generate this type of error.

                                                                 1 = The fault generation feature of the node allows generation of
                                                                 this type of error. */
        uint64_t ueo                   : 1;  /**< [  4:  4](SRO) Latent or Restartable Error generation. Describes whether the fault
                                                                 generation feature of the node can generate this type of error.

                                                                 0 = The fault generation feature of the node cannot generate this
                                                                 type of error. */
        uint64_t uer                   : 1;  /**< [  3:  3](SRO) Signaled or Recoverable Error generation. Describes whether the fault
                                                                 generation feature of the node can generate this type of error.

                                                                 0 = The fault generation feature of the node cannot generate this
                                                                 type of error. */
        uint64_t ueu                   : 1;  /**< [  2:  2](SRO) Unrecoverable Error generation. Describes whether the fault
                                                                 generation feature of the node can generate this type of error.

                                                                 0 = The fault generation feature of the node cannot generate this
                                                                 type of error. */
        uint64_t uc                    : 1;  /**< [  1:  1](SRO) Uncontainable Error generation. Describes whether the fault
                                                                 generation feature of the node can generate this type of error.

                                                                 1 = The fault generation feature of the node allows generation of
                                                                 this type of error. */
        uint64_t of                    : 1;  /**< [  0:  0](SRO) Overflow flag. Describes how the fault generation feature of the node
                                                                 sets the DSUUB_CLUSTERRAS_ERR0STATUS.OF status flag.

                                                                 1 = When an injected error is recorded, DSUUB_CLUSTERRAS_
                                                                 ERR0STATUS.OF is set to DSUUB_CLUSTERRAS_ERR0PFGCTL.OF.
                                                                 This behavior replaces the architecture-defined rules for setting
                                                                 the OF bit. */
#else /* Word 0 - Little Endian */
        uint64_t of                    : 1;  /**< [  0:  0](SRO) Overflow flag. Describes how the fault generation feature of the node
                                                                 sets the DSUUB_CLUSTERRAS_ERR0STATUS.OF status flag.

                                                                 1 = When an injected error is recorded, DSUUB_CLUSTERRAS_
                                                                 ERR0STATUS.OF is set to DSUUB_CLUSTERRAS_ERR0PFGCTL.OF.
                                                                 This behavior replaces the architecture-defined rules for setting
                                                                 the OF bit. */
        uint64_t uc                    : 1;  /**< [  1:  1](SRO) Uncontainable Error generation. Describes whether the fault
                                                                 generation feature of the node can generate this type of error.

                                                                 1 = The fault generation feature of the node allows generation of
                                                                 this type of error. */
        uint64_t ueu                   : 1;  /**< [  2:  2](SRO) Unrecoverable Error generation. Describes whether the fault
                                                                 generation feature of the node can generate this type of error.

                                                                 0 = The fault generation feature of the node cannot generate this
                                                                 type of error. */
        uint64_t uer                   : 1;  /**< [  3:  3](SRO) Signaled or Recoverable Error generation. Describes whether the fault
                                                                 generation feature of the node can generate this type of error.

                                                                 0 = The fault generation feature of the node cannot generate this
                                                                 type of error. */
        uint64_t ueo                   : 1;  /**< [  4:  4](SRO) Latent or Restartable Error generation. Describes whether the fault
                                                                 generation feature of the node can generate this type of error.

                                                                 0 = The fault generation feature of the node cannot generate this
                                                                 type of error. */
        uint64_t de                    : 1;  /**< [  5:  5](SRO) Deferred Error generation. Describes whether the fault generation
                                                                 feature of the node can generate this type of error.

                                                                 1 = The fault generation feature of the node allows generation of
                                                                 this type of error. */
        uint64_t ce                    : 2;  /**< [  7:  6](SRO) Corrected Error generation. Describes the types of Corrected Error
                                                                 that the fault generation feature of the node can generate.

                                                                 0b01 = The fault generation feature of the node allows generation of a
                                                                 non-specific Corrected Error, that is, a Corrected Error that is
                                                                 recorded as DSUUB_CLUSTERRAS_ERR0STATUS.CE == 0b10. */
        uint64_t ci                    : 1;  /**< [  8:  8](SRO) Critical Error flag. Describes how the fault generation feature of the
                                                                 node sets the DSUUB_CLUSTERRAS_ERR0STATUS.CI status flag.

                                                                 1 = When an injected error is recorded, DSUUB_CLUSTERRAS_
                                                                 ERR0STATUS.CI is set to DSUUB_CLUSTERRAS_ERR0PFGCTL.CI. */
        uint64_t er                    : 1;  /**< [  9:  9](SRO) Error Reported flag. Describes how the fault generation feature of the
                                                                 node sets the DSUUB_CLUSTERRAS_ERR0STATUS.ER status flag.

                                                                 0 = When an injected error is recorded, the node sets DSUUB_
                                                                 CLUSTERRAS_ERR0STATUS.ER according to the architecture-
                                                                 defined rules for setting the ER bit. */
        uint64_t pn                    : 1;  /**< [ 10: 10](SRO) Poison flag. Describes how the fault generation feature of the node
                                                                 sets the DSUUB_CLUSTERRAS_ERR0STATUS.PN status flag.

                                                                 1 = When an injected error is recorded, DSUUB_CLUSTERRAS_
                                                                 ERR0STATUS.PN is set to DSUUB_CLUSTERRAS_ERR0PFGCTL.PN. */
        uint64_t av                    : 1;  /**< [ 11: 11](SRO) Address syndrome. Address syndrome injection.

                                                                 0 = When an injected error is recorded, the node either sets
                                                                 DSUUB_CLUSTERRAS_ERR0ADDR and DSUUB_CLUSTERRAS_
                                                                 ERR0STATUS.AV for the access, or leaves these unchanged. */
        uint64_t mv                    : 1;  /**< [ 12: 12](SRO) Miscellaneous syndrome.

                                                                 Additional syndrome injection. Defines whether software can
                                                                 control all or part of the syndrome recorded in the CLUSTERRAS_
                                                                 ERR0MISC\<m\> registers when an injected error is recorded.

                                                                 It is IMPLEMENTATION DEFINED which syndrome fields in CLUSTERRAS_
                                                                 ERR0MISC\<m\> this refers to, as some fields might always be recorded
                                                                 by an error. For example, a Corrected Error counter.

                                                                 1 = When an injected error is recorded, the node does not update
                                                                 all the syndrome fields in the CLUSTERRAS_ERR0MISC\<m\>
                                                                 and does one of:

                                                                 *   The node does not update any fields in CLUSTERRAS_
                                                                 ERR0MISC\<m\> and sets DSUUB_CLUSTERRAS_
                                                                 ERR0STATUS.MV to DSUUB_CLUSTERRAS_ERR0PFGCTL.MV.
                                                                 *   The node records some syndrome in CLUSTERRAS_
                                                                 ERR0MISC\<m\> and sets DSUUB_CLUSTERRAS_
                                                                 ERR0STATUS.MV to 1. CLUSTERRAS_ERR0PGFCTL.MV is
                                                                 RAO.
                                                                 The syndrome fields that the node does not update are
                                                                 unchanged and must be writable when DSUUB_CLUSTERRAS_
                                                                 ERR0STATUS.MV is set to 0. */
        uint64_t reserved_13_28        : 16;
        uint64_t syn                   : 1;  /**< [ 29: 29](SRO) Syndrome. Fault syndrome injection.

                                                                 1 = When an injected error is recorded, the node does not update
                                                                 the DSUUB_CLUSTERRAS_ERR0STATUS.{IERR, SERR} fields. DSUUB_
                                                                 CLUSTERRAS_ERR0STATUS.{IERR, SERR} are writable when
                                                                 DSUUB_CLUSTERRAS_ERR0STATUS.V == 0. */
        uint64_t r                     : 1;  /**< [ 30: 30](SRO) Restartable. Support for Error Generation Counter restart mode.

                                                                 1 = Feature controllable. */
        uint64_t reserved_31_63        : 33;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_clusterras_err0pfgf_s cn; */
};
typedef union cavm_dsuubx_clusterras_err0pfgf cavm_dsuubx_clusterras_err0pfgf_t;

static inline uint64_t CAVM_DSUUBX_CLUSTERRAS_ERR0PFGF(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTERRAS_ERR0PFGF(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0020800ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CLUSTERRAS_ERR0PFGF", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTERRAS_ERR0PFGF(a) cavm_dsuubx_clusterras_err0pfgf_t
#define bustype_CAVM_DSUUBX_CLUSTERRAS_ERR0PFGF(a) CSR_TYPE_RSL
#define basename_CAVM_DSUUBX_CLUSTERRAS_ERR0PFGF(a) "DSUUBX_CLUSTERRAS_ERR0PFGF"
#define device_bar_CAVM_DSUUBX_CLUSTERRAS_ERR0PFGF(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTERRAS_ERR0PFGF(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTERRAS_ERR0PFGF(a) (a),-1,-1,-1

/**
 * Register (RSL) dsuub#_clusterras_err0status
 *
 * DSUUB  Error Record Primary Status Register
 * Contains status information for the error record, including:
 *
 * - Whether any error has been detected (valid).
 *
 * - Whether any detected error was not corrected, and returned to a master.
 *
 * - Whether any detected error was not corrected and deferred.
 *
 * - Whether an error record has been discarded because additional errors have been detected
 * before the first error was handled by software (overflow).
 *
 * - Whether any error has been reported.
 *
 * - Whether the other error record registers contain valid information.
 *
 * - Whether the error was recorded because poison data was detected or because a corrupt value
 * was detected by an error detection code.
 *
 * - A primary error code.
 *
 * - An IMPLEMENTATION DEFINED extended error code.
 *
 * Within this register:
 *
 * - The {AV, V, MV} bits are valid bits that define whether the error record registers are valid.
 *
 * - The {UE, OF, CE, DE, UET} bits encode the type of error or errors recorded.
 *
 * - The {CI, ER, PN, IERR, SERR} fields are syndrome fields.
 */
union cavm_dsuubx_clusterras_err0status
{
    uint64_t u;
    struct cavm_dsuubx_clusterras_err0status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t av                    : 1;  /**< [ 31: 31](SRO) Address Valid.

                                                                 0 = DSUUB_CLUSTERRAS_ERR0ADDR not valid. */
        uint64_t v                     : 1;  /**< [ 30: 30](SR/W1C/H) Status Register Valid.

                                                                 0 = CLUSTERRAS_ERR0STATUS not valid.

                                                                 1 = CLUSTERRAS_ERR0STATUS valid. At least one error
                                                                 has been recorded. */
        uint64_t ue                    : 1;  /**< [ 29: 29](SR/W1C/H) Uncorrected error.

                                                                 0 = No errors have been detected, or all detected errors
                                                                 have been either corrected or deferred.

                                                                 1 = At least one detected error was not corrected and
                                                                 not deferred. */
        uint64_t er                    : 1;  /**< [ 28: 28](SRO) Error Reported.

                                                                 0 = No in-band error (External abort) reported. */
        uint64_t of                    : 1;  /**< [ 27: 27](SR/W1C/H) Overflow.

                                                                 Indicates that multiple errors have been detected. This bit is
                                                                 set to 1 when one of the following occurs:

                                                                 *     A Corrected error counter is implemented, an error is
                                                                 counted, and the counter overflows.
                                                                 *     CLUSTERRAS_ERR0STATUS.V was previously set to
                                                                 1, a Corrected error counter is not implemented, and a
                                                                 Corrected error is recorded.
                                                                 *     CLUSTERRAS_ERR0STATUS.V was previously set to
                                                                 1, and a type of error other than a Corrected error is
                                                                 recorded.
                                                                 Otherwise, this bit is unchanged when an error is recorded.

                                                                 If a Corrected error counter is implemented:

                                                                 *     A direct write that modifies the counter overflow flag
                                                                 indirectly might set this bit to an UNKNOWN value.
                                                                 *     A direct write to this bit that clears this bit to zero
                                                                 might indirectly set the counter overflow flag to an
                                                                 UNKNOWN value.

                                                                 0 = Since this bit was last cleared to zero, no error
                                                                 syndrome has been discarded and, if a Corrected
                                                                 error counter is implemented, it has not overflowed.

                                                                 1 = Since this bit was last cleared to zero, at least
                                                                 one error syndrome has been discarded or, if a
                                                                 Corrected error counter is implemented, it might
                                                                 have overflowed. */
        uint64_t mv                    : 1;  /**< [ 26: 26](SR/W1C/H) Miscellaneous Registers Valid.

                                                                 0 = DSUUB_CLUSTERRAS_ERR0MISC0, DSUUB_CLUSTERRAS_
                                                                 ERR0MISC1, DSUUB_CLUSTERRAS_ERR0MISC2, and
                                                                 DSUUB_CLUSTERRAS_ERR0MISC3 are not valid.

                                                                 1 = The IMPLEMENTATION DEFINED contents of the DSUUB_
                                                                 CLUSTERRAS_ERR0MISC0, DSUUB_CLUSTERRAS_
                                                                 ERR0MISC1, DSUUB_CLUSTERRAS_ERR0MISC2, and
                                                                 DSUUB_CLUSTERRAS_ERR0MISC3 registers contain
                                                                 additional information for an error recorded by this
                                                                 record. */
        uint64_t ce                    : 2;  /**< [ 25: 24](SR/W1C/H) Corrected Error.

                                                                 0b00 = No errors were corrected.

                                                                 0b10 = At least one error was corrected. */
        uint64_t de                    : 1;  /**< [ 23: 23](SR/W1C/H) Deferred Error.

                                                                 0 = No errors were deferred.

                                                                 1 = At least one error was not corrected and deferred. */
        uint64_t pn                    : 1;  /**< [ 22: 22](SR/W1C/H) Poison.

                                                                 0 = Uncorrected error or Deferred error recorded
                                                                 because a corrupt value was detected, for example,
                                                                 by an error detection code (EDC).

                                                                 Note:       If a producer node detects a
                                                                 corrupt value and defers the error
                                                                 by producing a poison value, then
                                                                 this bit is set to 0 at the producer
                                                                 node.
                                                                 1 = Uncorrected error or Deferred error recorded
                                                                 because a poison value was detected.

                                                                 Note:       This might only be an indication
                                                                 of poison, because, in some EDC
                                                                 schemes, a poison value is encoded
                                                                 as an unlikely form of corrupt data,
                                                                 meaning it is possible to mistake a
                                                                 corrupt value as a poison value. */
        uint64_t uet                   : 2;  /**< [ 21: 20](SRO) Uncorrected Error Type.

                                                                 Describes the state of the component after detecting or
                                                                 consuming an Uncorrected error.

                                                                 0b00 = Uncorrected error, Uncontainable error (UC). */
        uint64_t ci                    : 1;  /**< [ 19: 19](SR/W1C/H) Critical error.

                                                                 Indicates whether a critical error condition has been
                                                                 recorded.

                                                                 0 = No critical error condition recorded.

                                                                 1 = Critical error condition recorded. */
        uint64_t reserved_16_18        : 3;
        uint64_t ierr                  : 8;  /**< [ 15:  8](SR/W) IMPLEMENTATION DEFINED error code.

                                                                 Used with any primary error code SERR value. Further
                                                                 IMPLEMENTATION DEFINED information can be placed in the
                                                                 MISC registers. */
        uint64_t serr                  : 8;  /**< [  7:  0](SR/W) Architecturally-defined primary error code.

                                                                 Indicates the type of error. The primary error code might
                                                                 be used by a fault handling agent to triage an error without
                                                                 requiring device-specific code. For example, to count and
                                                                 threshold corrected errors in software, or generate a short
                                                                 log entry.

                                                                 0b00000000 = No error.

                                                                 0b00000001 = IMPLEMENTATION DEFINED    error.

                                                                 0b00000010 = Data value from (non-associative) internal memory.
                                                                 For example, ECC from on-chip SRAM or buffer.

                                                                 0b00000011 = IMPLEMENTATION DEFINED    pin. For example, nSEI pin.

                                                                 0b00000100 = Assertion failure. For example, consistency failure.

                                                                 0b00000101 = Error detected on internal data path. For example,
                                                                 parity on ALU result.

                                                                 0b00000110 = Data value from associative memory. For example,
                                                                 ECC error on cache data.

                                                                 0b00000111 = Address/control value from associative memory. For
                                                                 example, ECC error on cache tag.

                                                                 0b00001000 = Data value from a TLB. For example, ECC error on
                                                                 TLB data.

                                                                 0b00001001 = Address/control value from a TLB. For example, ECC
                                                                 error on TLB tag.

                                                                 0b00001010 = Data value from producer. For example, parity error
                                                                 on write data bus.

                                                                 0b00001011 = Address/control value from producer. For example,
                                                                 parity error on address bus. */
#else /* Word 0 - Little Endian */
        uint64_t serr                  : 8;  /**< [  7:  0](SR/W) Architecturally-defined primary error code.

                                                                 Indicates the type of error. The primary error code might
                                                                 be used by a fault handling agent to triage an error without
                                                                 requiring device-specific code. For example, to count and
                                                                 threshold corrected errors in software, or generate a short
                                                                 log entry.

                                                                 0b00000000 = No error.

                                                                 0b00000001 = IMPLEMENTATION DEFINED    error.

                                                                 0b00000010 = Data value from (non-associative) internal memory.
                                                                 For example, ECC from on-chip SRAM or buffer.

                                                                 0b00000011 = IMPLEMENTATION DEFINED    pin. For example, nSEI pin.

                                                                 0b00000100 = Assertion failure. For example, consistency failure.

                                                                 0b00000101 = Error detected on internal data path. For example,
                                                                 parity on ALU result.

                                                                 0b00000110 = Data value from associative memory. For example,
                                                                 ECC error on cache data.

                                                                 0b00000111 = Address/control value from associative memory. For
                                                                 example, ECC error on cache tag.

                                                                 0b00001000 = Data value from a TLB. For example, ECC error on
                                                                 TLB data.

                                                                 0b00001001 = Address/control value from a TLB. For example, ECC
                                                                 error on TLB tag.

                                                                 0b00001010 = Data value from producer. For example, parity error
                                                                 on write data bus.

                                                                 0b00001011 = Address/control value from producer. For example,
                                                                 parity error on address bus. */
        uint64_t ierr                  : 8;  /**< [ 15:  8](SR/W) IMPLEMENTATION DEFINED error code.

                                                                 Used with any primary error code SERR value. Further
                                                                 IMPLEMENTATION DEFINED information can be placed in the
                                                                 MISC registers. */
        uint64_t reserved_16_18        : 3;
        uint64_t ci                    : 1;  /**< [ 19: 19](SR/W1C/H) Critical error.

                                                                 Indicates whether a critical error condition has been
                                                                 recorded.

                                                                 0 = No critical error condition recorded.

                                                                 1 = Critical error condition recorded. */
        uint64_t uet                   : 2;  /**< [ 21: 20](SRO) Uncorrected Error Type.

                                                                 Describes the state of the component after detecting or
                                                                 consuming an Uncorrected error.

                                                                 0b00 = Uncorrected error, Uncontainable error (UC). */
        uint64_t pn                    : 1;  /**< [ 22: 22](SR/W1C/H) Poison.

                                                                 0 = Uncorrected error or Deferred error recorded
                                                                 because a corrupt value was detected, for example,
                                                                 by an error detection code (EDC).

                                                                 Note:       If a producer node detects a
                                                                 corrupt value and defers the error
                                                                 by producing a poison value, then
                                                                 this bit is set to 0 at the producer
                                                                 node.
                                                                 1 = Uncorrected error or Deferred error recorded
                                                                 because a poison value was detected.

                                                                 Note:       This might only be an indication
                                                                 of poison, because, in some EDC
                                                                 schemes, a poison value is encoded
                                                                 as an unlikely form of corrupt data,
                                                                 meaning it is possible to mistake a
                                                                 corrupt value as a poison value. */
        uint64_t de                    : 1;  /**< [ 23: 23](SR/W1C/H) Deferred Error.

                                                                 0 = No errors were deferred.

                                                                 1 = At least one error was not corrected and deferred. */
        uint64_t ce                    : 2;  /**< [ 25: 24](SR/W1C/H) Corrected Error.

                                                                 0b00 = No errors were corrected.

                                                                 0b10 = At least one error was corrected. */
        uint64_t mv                    : 1;  /**< [ 26: 26](SR/W1C/H) Miscellaneous Registers Valid.

                                                                 0 = DSUUB_CLUSTERRAS_ERR0MISC0, DSUUB_CLUSTERRAS_
                                                                 ERR0MISC1, DSUUB_CLUSTERRAS_ERR0MISC2, and
                                                                 DSUUB_CLUSTERRAS_ERR0MISC3 are not valid.

                                                                 1 = The IMPLEMENTATION DEFINED contents of the DSUUB_
                                                                 CLUSTERRAS_ERR0MISC0, DSUUB_CLUSTERRAS_
                                                                 ERR0MISC1, DSUUB_CLUSTERRAS_ERR0MISC2, and
                                                                 DSUUB_CLUSTERRAS_ERR0MISC3 registers contain
                                                                 additional information for an error recorded by this
                                                                 record. */
        uint64_t of                    : 1;  /**< [ 27: 27](SR/W1C/H) Overflow.

                                                                 Indicates that multiple errors have been detected. This bit is
                                                                 set to 1 when one of the following occurs:

                                                                 *     A Corrected error counter is implemented, an error is
                                                                 counted, and the counter overflows.
                                                                 *     CLUSTERRAS_ERR0STATUS.V was previously set to
                                                                 1, a Corrected error counter is not implemented, and a
                                                                 Corrected error is recorded.
                                                                 *     CLUSTERRAS_ERR0STATUS.V was previously set to
                                                                 1, and a type of error other than a Corrected error is
                                                                 recorded.
                                                                 Otherwise, this bit is unchanged when an error is recorded.

                                                                 If a Corrected error counter is implemented:

                                                                 *     A direct write that modifies the counter overflow flag
                                                                 indirectly might set this bit to an UNKNOWN value.
                                                                 *     A direct write to this bit that clears this bit to zero
                                                                 might indirectly set the counter overflow flag to an
                                                                 UNKNOWN value.

                                                                 0 = Since this bit was last cleared to zero, no error
                                                                 syndrome has been discarded and, if a Corrected
                                                                 error counter is implemented, it has not overflowed.

                                                                 1 = Since this bit was last cleared to zero, at least
                                                                 one error syndrome has been discarded or, if a
                                                                 Corrected error counter is implemented, it might
                                                                 have overflowed. */
        uint64_t er                    : 1;  /**< [ 28: 28](SRO) Error Reported.

                                                                 0 = No in-band error (External abort) reported. */
        uint64_t ue                    : 1;  /**< [ 29: 29](SR/W1C/H) Uncorrected error.

                                                                 0 = No errors have been detected, or all detected errors
                                                                 have been either corrected or deferred.

                                                                 1 = At least one detected error was not corrected and
                                                                 not deferred. */
        uint64_t v                     : 1;  /**< [ 30: 30](SR/W1C/H) Status Register Valid.

                                                                 0 = CLUSTERRAS_ERR0STATUS not valid.

                                                                 1 = CLUSTERRAS_ERR0STATUS valid. At least one error
                                                                 has been recorded. */
        uint64_t av                    : 1;  /**< [ 31: 31](SRO) Address Valid.

                                                                 0 = DSUUB_CLUSTERRAS_ERR0ADDR not valid. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_clusterras_err0status_s cn; */
};
typedef union cavm_dsuubx_clusterras_err0status cavm_dsuubx_clusterras_err0status_t;

static inline uint64_t CAVM_DSUUBX_CLUSTERRAS_ERR0STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTERRAS_ERR0STATUS(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0020010ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CLUSTERRAS_ERR0STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTERRAS_ERR0STATUS(a) cavm_dsuubx_clusterras_err0status_t
#define bustype_CAVM_DSUUBX_CLUSTERRAS_ERR0STATUS(a) CSR_TYPE_RSL
#define basename_CAVM_DSUUBX_CLUSTERRAS_ERR0STATUS(a) "DSUUBX_CLUSTERRAS_ERR0STATUS"
#define device_bar_CAVM_DSUUBX_CLUSTERRAS_ERR0STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTERRAS_ERR0STATUS(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTERRAS_ERR0STATUS(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_clusterras_errcidr0
 *
 * DSUUB  Component Identification Register 0
 * Provides discovery information for the component.
 */
union cavm_dsuubx_clusterras_errcidr0
{
    uint32_t u;
    struct cavm_dsuubx_clusterras_errcidr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t prmbl_0               : 8;  /**< [  7:  0](SRO) Component identification preamble, segment 0. This field
                                                                 reads as 0x0D. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_0               : 8;  /**< [  7:  0](SRO) Component identification preamble, segment 0. This field
                                                                 reads as 0x0D. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_clusterras_errcidr0_s cn; */
};
typedef union cavm_dsuubx_clusterras_errcidr0 cavm_dsuubx_clusterras_errcidr0_t;

static inline uint64_t CAVM_DSUUBX_CLUSTERRAS_ERRCIDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTERRAS_ERRCIDR0(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0020ff0ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CLUSTERRAS_ERRCIDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTERRAS_ERRCIDR0(a) cavm_dsuubx_clusterras_errcidr0_t
#define bustype_CAVM_DSUUBX_CLUSTERRAS_ERRCIDR0(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTERRAS_ERRCIDR0(a) "DSUUBX_CLUSTERRAS_ERRCIDR0"
#define device_bar_CAVM_DSUUBX_CLUSTERRAS_ERRCIDR0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTERRAS_ERRCIDR0(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTERRAS_ERRCIDR0(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_clusterras_errcidr1
 *
 * DSUUB  Component Identification Register 1
 * Provides discovery information for the component.
 */
union cavm_dsuubx_clusterras_errcidr1
{
    uint32_t u;
    struct cavm_dsuubx_clusterras_errcidr1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t clas                  : 4;  /**< [  7:  4](SRO) Component class.

                                                                 0b1111 = Generic peripheral with IMPLEMENTATION DEFINED
                                                                 register layout. */
        uint32_t prmbl_1               : 4;  /**< [  3:  0](SRO) Component identification preamble, segment 1. This field
                                                                 reads as 0x0. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_1               : 4;  /**< [  3:  0](SRO) Component identification preamble, segment 1. This field
                                                                 reads as 0x0. */
        uint32_t clas                  : 4;  /**< [  7:  4](SRO) Component class.

                                                                 0b1111 = Generic peripheral with IMPLEMENTATION DEFINED
                                                                 register layout. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_clusterras_errcidr1_s cn; */
};
typedef union cavm_dsuubx_clusterras_errcidr1 cavm_dsuubx_clusterras_errcidr1_t;

static inline uint64_t CAVM_DSUUBX_CLUSTERRAS_ERRCIDR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTERRAS_ERRCIDR1(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0020ff4ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CLUSTERRAS_ERRCIDR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTERRAS_ERRCIDR1(a) cavm_dsuubx_clusterras_errcidr1_t
#define bustype_CAVM_DSUUBX_CLUSTERRAS_ERRCIDR1(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTERRAS_ERRCIDR1(a) "DSUUBX_CLUSTERRAS_ERRCIDR1"
#define device_bar_CAVM_DSUUBX_CLUSTERRAS_ERRCIDR1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTERRAS_ERRCIDR1(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTERRAS_ERRCIDR1(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_clusterras_errcidr2
 *
 * DSUUB  Component Identification Register 2
 * Provides discovery information for the component.
 */
union cavm_dsuubx_clusterras_errcidr2
{
    uint32_t u;
    struct cavm_dsuubx_clusterras_errcidr2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t prmbl_2               : 8;  /**< [  7:  0](SRO) Component identification preamble, segment 2. This field reads
                                                                 as 0x05. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_2               : 8;  /**< [  7:  0](SRO) Component identification preamble, segment 2. This field reads
                                                                 as 0x05. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_clusterras_errcidr2_s cn; */
};
typedef union cavm_dsuubx_clusterras_errcidr2 cavm_dsuubx_clusterras_errcidr2_t;

static inline uint64_t CAVM_DSUUBX_CLUSTERRAS_ERRCIDR2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTERRAS_ERRCIDR2(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0020ff8ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CLUSTERRAS_ERRCIDR2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTERRAS_ERRCIDR2(a) cavm_dsuubx_clusterras_errcidr2_t
#define bustype_CAVM_DSUUBX_CLUSTERRAS_ERRCIDR2(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTERRAS_ERRCIDR2(a) "DSUUBX_CLUSTERRAS_ERRCIDR2"
#define device_bar_CAVM_DSUUBX_CLUSTERRAS_ERRCIDR2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTERRAS_ERRCIDR2(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTERRAS_ERRCIDR2(a) (a),-1,-1,-1

/**
 * Register (RSL) dsuub#_clusterras_errdevaff
 *
 * DSUUB  Device Affinity Register
 * For a group that has affinity with a single PE or cluster of PEs, ERRDEVAFF is a copy of AArch64-
 * MPIDR_EL1 or part of AArch64-MPIDR_EL1:
 *
 * - If the group of error records has affinity with a single PE, the affinity level is
 * 0, ERRDEVAFF reads
 * the same value as AArch64-MPIDR_EL1, and ERRDEVAFF.F0V reads-as-one to indicate affinity
 * level 0.
 *
 * - If the group of error records has affinity with a cluster of PEs, the affinity
 * level is 1, 2, or 3,
 * parts of ERRDEVAFF reads the same value as parts of AArch64-MPIDR_EL1, and the rest of
 * ERRDEVAFF indicates the level.
 */
union cavm_dsuubx_clusterras_errdevaff
{
    uint64_t u;
    struct cavm_dsuubx_clusterras_errdevaff_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_40_63        : 24;
        uint64_t aff3                  : 8;  /**< [ 39: 32](SRO/H) Affinity level 3. The AArch64-MPIDR_EL1.Aff3 field,
                                                                 viewed from the highest Exception level of the associated
                                                                 PE or PEs. */
        uint64_t f0v                   : 1;  /**< [ 31: 31](SRO/H) Indicates that the ERRDEVAFF.Aff0 field is valid.

                                                                 0 = ERRDEVAFF.Aff0 is not valid, and the PE affinity
                                                                 level is 1, 2 or 3. */
        uint64_t u                     : 1;  /**< [ 30: 30](SRO/H) Uniprocessor. The AArch64-MPIDR_EL1.U bit viewed from
                                                                 the highest Exception level of the associated PE.

                                                                 0 = The PE is part of a multiprocessor system. */
        uint64_t reserved_25_29        : 5;
        uint64_t mt                    : 1;  /**< [ 24: 24](SRO/H) Multithreaded. The AArch64-MPIDR_EL1.MT bit viewed
                                                                 from the highest Exception level of the associated PE.

                                                                 0 = Performance of PEs at the lowest affinity level is
                                                                 largely independent. */
        uint64_t aff2                  : 8;  /**< [ 23: 16](SRO/H) Affinity level 2.

                                                                 This field is the AArch64-MPIDR_EL1.Aff2 field viewed
                                                                 from the highest Exception level of the associated PE or
                                                                 PEs. */
        uint64_t aff1                  : 8;  /**< [ 15:  8](SRO/H) Affinity level 1.

                                                                 0b10000000 = ERRDEVAFF.Aff2 is valid, and the PE affinity level
                                                                 is 2. */
        uint64_t aff0                  : 8;  /**< [  7:  0](SRO/H) Affinity level 0.

                                                                 0b10000000 = ERRDEVAFF.Aff1 is valid, and the PE affinity level
                                                                 is 1. */
#else /* Word 0 - Little Endian */
        uint64_t aff0                  : 8;  /**< [  7:  0](SRO/H) Affinity level 0.

                                                                 0b10000000 = ERRDEVAFF.Aff1 is valid, and the PE affinity level
                                                                 is 1. */
        uint64_t aff1                  : 8;  /**< [ 15:  8](SRO/H) Affinity level 1.

                                                                 0b10000000 = ERRDEVAFF.Aff2 is valid, and the PE affinity level
                                                                 is 2. */
        uint64_t aff2                  : 8;  /**< [ 23: 16](SRO/H) Affinity level 2.

                                                                 This field is the AArch64-MPIDR_EL1.Aff2 field viewed
                                                                 from the highest Exception level of the associated PE or
                                                                 PEs. */
        uint64_t mt                    : 1;  /**< [ 24: 24](SRO/H) Multithreaded. The AArch64-MPIDR_EL1.MT bit viewed
                                                                 from the highest Exception level of the associated PE.

                                                                 0 = Performance of PEs at the lowest affinity level is
                                                                 largely independent. */
        uint64_t reserved_25_29        : 5;
        uint64_t u                     : 1;  /**< [ 30: 30](SRO/H) Uniprocessor. The AArch64-MPIDR_EL1.U bit viewed from
                                                                 the highest Exception level of the associated PE.

                                                                 0 = The PE is part of a multiprocessor system. */
        uint64_t f0v                   : 1;  /**< [ 31: 31](SRO/H) Indicates that the ERRDEVAFF.Aff0 field is valid.

                                                                 0 = ERRDEVAFF.Aff0 is not valid, and the PE affinity
                                                                 level is 1, 2 or 3. */
        uint64_t aff3                  : 8;  /**< [ 39: 32](SRO/H) Affinity level 3. The AArch64-MPIDR_EL1.Aff3 field,
                                                                 viewed from the highest Exception level of the associated
                                                                 PE or PEs. */
        uint64_t reserved_40_63        : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_clusterras_errdevaff_s cn; */
};
typedef union cavm_dsuubx_clusterras_errdevaff cavm_dsuubx_clusterras_errdevaff_t;

static inline uint64_t CAVM_DSUUBX_CLUSTERRAS_ERRDEVAFF(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTERRAS_ERRDEVAFF(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0020fa8ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CLUSTERRAS_ERRDEVAFF", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTERRAS_ERRDEVAFF(a) cavm_dsuubx_clusterras_errdevaff_t
#define bustype_CAVM_DSUUBX_CLUSTERRAS_ERRDEVAFF(a) CSR_TYPE_RSL
#define basename_CAVM_DSUUBX_CLUSTERRAS_ERRDEVAFF(a) "DSUUBX_CLUSTERRAS_ERRDEVAFF"
#define device_bar_CAVM_DSUUBX_CLUSTERRAS_ERRDEVAFF(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTERRAS_ERRDEVAFF(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTERRAS_ERRDEVAFF(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_clusterras_errdevarch
 *
 * DSUUB  Device Architecture Register
 * Provides discovery information for the component.
 */
union cavm_dsuubx_clusterras_errdevarch
{
    uint32_t u;
    struct cavm_dsuubx_clusterras_errdevarch_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t architect             : 11; /**< [ 31: 21](SRO) Architect.

                                                                 Defines the architect of the component. Bits */
        uint32_t present               : 1;  /**< [ 20: 20](SRO) DEVARCH Present.

                                                                 Defines that the DEVARCH register is present.

                                                                 1 = Device Architecture information present. */
        uint32_t revision              : 4;  /**< [ 19: 16](SRO) Revision.

                                                                 Defines the architecture revision of the
                                                                 component. The defined values of this field are:

                                                                 0b0001 = RAS System Architecture v1.1:

                                                                 Simplifies DSUUB_CLUSTERRAS_
                                                                 ERR0STATUS.

                                                                 Adds support for additional
                                                                 CLUSTERRAS_ERR0MISC\<m\> registers.

                                                                 Adds support for the optional RAS
                                                                 Timestamp Extension.

                                                                 Adds support for the optional RAS
                                                                 Common Fault Injection Model
                                                                 Extension. */
        uint32_t archver               : 4;  /**< [ 15: 12](SRO) Architecture Version.

                                                                 Defines the architecture version of the
                                                                 component. The defined values of this field are:

                                                                 0b0000 = RAS System Architecture v1. */
        uint32_t archpart              : 12; /**< [ 11:  0](SRO) Architecture Part.

                                                                 Defines the architecture of the component.

                                                                 0b101000000000 = RAS system architecture. */
#else /* Word 0 - Little Endian */
        uint32_t archpart              : 12; /**< [ 11:  0](SRO) Architecture Part.

                                                                 Defines the architecture of the component.

                                                                 0b101000000000 = RAS system architecture. */
        uint32_t archver               : 4;  /**< [ 15: 12](SRO) Architecture Version.

                                                                 Defines the architecture version of the
                                                                 component. The defined values of this field are:

                                                                 0b0000 = RAS System Architecture v1. */
        uint32_t revision              : 4;  /**< [ 19: 16](SRO) Revision.

                                                                 Defines the architecture revision of the
                                                                 component. The defined values of this field are:

                                                                 0b0001 = RAS System Architecture v1.1:

                                                                 Simplifies DSUUB_CLUSTERRAS_
                                                                 ERR0STATUS.

                                                                 Adds support for additional
                                                                 CLUSTERRAS_ERR0MISC\<m\> registers.

                                                                 Adds support for the optional RAS
                                                                 Timestamp Extension.

                                                                 Adds support for the optional RAS
                                                                 Common Fault Injection Model
                                                                 Extension. */
        uint32_t present               : 1;  /**< [ 20: 20](SRO) DEVARCH Present.

                                                                 Defines that the DEVARCH register is present.

                                                                 1 = Device Architecture information present. */
        uint32_t architect             : 11; /**< [ 31: 21](SRO) Architect.

                                                                 Defines the architect of the component. Bits */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_clusterras_errdevarch_s cn; */
};
typedef union cavm_dsuubx_clusterras_errdevarch cavm_dsuubx_clusterras_errdevarch_t;

static inline uint64_t CAVM_DSUUBX_CLUSTERRAS_ERRDEVARCH(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTERRAS_ERRDEVARCH(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0020fbcll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CLUSTERRAS_ERRDEVARCH", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTERRAS_ERRDEVARCH(a) cavm_dsuubx_clusterras_errdevarch_t
#define bustype_CAVM_DSUUBX_CLUSTERRAS_ERRDEVARCH(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTERRAS_ERRDEVARCH(a) "DSUUBX_CLUSTERRAS_ERRDEVARCH"
#define device_bar_CAVM_DSUUBX_CLUSTERRAS_ERRDEVARCH(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTERRAS_ERRDEVARCH(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTERRAS_ERRDEVARCH(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_clusterras_errdevid
 *
 * DSUUB  Device Configuration Register
 * Provides discovery information for the component.
 */
union cavm_dsuubx_clusterras_errdevid
{
    uint32_t u;
    struct cavm_dsuubx_clusterras_errdevid_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t num                   : 16; /**< [ 15:  0](SRO) Highest numbered index of the error records in this group, plus one.
                                                                 Each implemented record is owned by a node. A node might own
                                                                 multiple records.

                                                                 This manual describes the memory-mapped view of a group with up
                                                                 to 56 records, the most that can be contained in a 4KB component,
                                                                 meaning the highest possible value for this field is 56.

                                                                 This field reads as an IMPLEMENTATION DEFINED value.

                                                                 0b0000000000000001 = One record implemented in this group. */
#else /* Word 0 - Little Endian */
        uint32_t num                   : 16; /**< [ 15:  0](SRO) Highest numbered index of the error records in this group, plus one.
                                                                 Each implemented record is owned by a node. A node might own
                                                                 multiple records.

                                                                 This manual describes the memory-mapped view of a group with up
                                                                 to 56 records, the most that can be contained in a 4KB component,
                                                                 meaning the highest possible value for this field is 56.

                                                                 This field reads as an IMPLEMENTATION DEFINED value.

                                                                 0b0000000000000001 = One record implemented in this group. */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_clusterras_errdevid_s cn; */
};
typedef union cavm_dsuubx_clusterras_errdevid cavm_dsuubx_clusterras_errdevid_t;

static inline uint64_t CAVM_DSUUBX_CLUSTERRAS_ERRDEVID(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTERRAS_ERRDEVID(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0020fc8ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CLUSTERRAS_ERRDEVID", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTERRAS_ERRDEVID(a) cavm_dsuubx_clusterras_errdevid_t
#define bustype_CAVM_DSUUBX_CLUSTERRAS_ERRDEVID(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTERRAS_ERRDEVID(a) "DSUUBX_CLUSTERRAS_ERRDEVID"
#define device_bar_CAVM_DSUUBX_CLUSTERRAS_ERRDEVID(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTERRAS_ERRDEVID(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTERRAS_ERRDEVID(a) (a),-1,-1,-1

/**
 * Register (RSL) dsuub#_clusterras_errgsr
 *
 * DSUUB  Error Group Status Register
 * ERRGSR shows the status for the records in the group.
 */
union cavm_dsuubx_clusterras_errgsr
{
    uint64_t u;
    struct cavm_dsuubx_clusterras_errgsr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t s0                    : 1;  /**< [  0:  0](SRO/H) The status for Error Record 0. A read-only copy of CLUSTERRAS_
                                                                 ERR0STATUS.V.

                                                                 0 = No error.

                                                                 1 = One or more errors. */
#else /* Word 0 - Little Endian */
        uint64_t s0                    : 1;  /**< [  0:  0](SRO/H) The status for Error Record 0. A read-only copy of CLUSTERRAS_
                                                                 ERR0STATUS.V.

                                                                 0 = No error.

                                                                 1 = One or more errors. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_clusterras_errgsr_s cn; */
};
typedef union cavm_dsuubx_clusterras_errgsr cavm_dsuubx_clusterras_errgsr_t;

static inline uint64_t CAVM_DSUUBX_CLUSTERRAS_ERRGSR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTERRAS_ERRGSR(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0020e00ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CLUSTERRAS_ERRGSR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTERRAS_ERRGSR(a) cavm_dsuubx_clusterras_errgsr_t
#define bustype_CAVM_DSUUBX_CLUSTERRAS_ERRGSR(a) CSR_TYPE_RSL
#define basename_CAVM_DSUUBX_CLUSTERRAS_ERRGSR(a) "DSUUBX_CLUSTERRAS_ERRGSR"
#define device_bar_CAVM_DSUUBX_CLUSTERRAS_ERRGSR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTERRAS_ERRGSR(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTERRAS_ERRGSR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_clusterras_erriidr
 *
 * DSUUB  Implementation Identification Register
 * Defines the implementer of the component.
 */
union cavm_dsuubx_clusterras_erriidr
{
    uint32_t u;
    struct cavm_dsuubx_clusterras_erriidr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t productid             : 12; /**< [ 31: 20](SRO) Part number, bits [11:0]. The part number is selected by the
                                                                 designer of the component. */
        uint32_t variant               : 4;  /**< [ 19: 16](SRO) Component major revision.

                                                                 This field distinguishes product variants or major revisions of
                                                                 the product. */
        uint32_t revision              : 4;  /**< [ 15: 12](SRO) Component minor revision.

                                                                 This field distinguishes minor revisions of the product. */
        uint32_t implementer           : 12; /**< [ 11:  0](SRO) Contains the JEP106 code of the company that implemented
                                                                 the RAS component. For an Arm implementation, this field
                                                                 has the value 0x43B. */
#else /* Word 0 - Little Endian */
        uint32_t implementer           : 12; /**< [ 11:  0](SRO) Contains the JEP106 code of the company that implemented
                                                                 the RAS component. For an Arm implementation, this field
                                                                 has the value 0x43B. */
        uint32_t revision              : 4;  /**< [ 15: 12](SRO) Component minor revision.

                                                                 This field distinguishes minor revisions of the product. */
        uint32_t variant               : 4;  /**< [ 19: 16](SRO) Component major revision.

                                                                 This field distinguishes product variants or major revisions of
                                                                 the product. */
        uint32_t productid             : 12; /**< [ 31: 20](SRO) Part number, bits [11:0]. The part number is selected by the
                                                                 designer of the component. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_clusterras_erriidr_s cn; */
};
typedef union cavm_dsuubx_clusterras_erriidr cavm_dsuubx_clusterras_erriidr_t;

static inline uint64_t CAVM_DSUUBX_CLUSTERRAS_ERRIIDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTERRAS_ERRIIDR(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0020e10ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CLUSTERRAS_ERRIIDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTERRAS_ERRIIDR(a) cavm_dsuubx_clusterras_erriidr_t
#define bustype_CAVM_DSUUBX_CLUSTERRAS_ERRIIDR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTERRAS_ERRIIDR(a) "DSUUBX_CLUSTERRAS_ERRIIDR"
#define device_bar_CAVM_DSUUBX_CLUSTERRAS_ERRIIDR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTERRAS_ERRIIDR(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTERRAS_ERRIIDR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_clusterras_errpidr0
 *
 * DSUUB  Peripheral Identification Register 0
 * Provides discovery information about the component.
 *
 * For more information, see About the Peripheral identification scheme in the Arm Architecture
 * Reference Manual, Armv8, for Armv8-A architecture profile.
 */
union cavm_dsuubx_clusterras_errpidr0
{
    uint32_t u;
    struct cavm_dsuubx_clusterras_errpidr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t part_0                : 8;  /**< [  7:  0](SRO) Part number, bits [7:0].

                                                                 The part number is a 12-bit part number stored in DSUUB_
                                                                 ERRPIDR1.PART_1 and this field.

                                                                 0b11101000 = Theodul Cluster RAS. Bits [7:0] of part number
                                                                 0x4E8. */
#else /* Word 0 - Little Endian */
        uint32_t part_0                : 8;  /**< [  7:  0](SRO) Part number, bits [7:0].

                                                                 The part number is a 12-bit part number stored in DSUUB_
                                                                 ERRPIDR1.PART_1 and this field.

                                                                 0b11101000 = Theodul Cluster RAS. Bits [7:0] of part number
                                                                 0x4E8. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_clusterras_errpidr0_s cn; */
};
typedef union cavm_dsuubx_clusterras_errpidr0 cavm_dsuubx_clusterras_errpidr0_t;

static inline uint64_t CAVM_DSUUBX_CLUSTERRAS_ERRPIDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTERRAS_ERRPIDR0(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0020fe0ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CLUSTERRAS_ERRPIDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTERRAS_ERRPIDR0(a) cavm_dsuubx_clusterras_errpidr0_t
#define bustype_CAVM_DSUUBX_CLUSTERRAS_ERRPIDR0(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTERRAS_ERRPIDR0(a) "DSUUBX_CLUSTERRAS_ERRPIDR0"
#define device_bar_CAVM_DSUUBX_CLUSTERRAS_ERRPIDR0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTERRAS_ERRPIDR0(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTERRAS_ERRPIDR0(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_clusterras_errpidr1
 *
 * DSUUB  Peripheral Identification Register 1
 * Provides discovery information about the component.
 *
 * For more information, see About the Peripheral identification scheme in the Arm Architecture
 * Reference Manual, Armv8, for Armv8-A architecture profile.
 */
union cavm_dsuubx_clusterras_errpidr1
{
    uint32_t u;
    struct cavm_dsuubx_clusterras_errpidr1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t des_0                 : 4;  /**< [  7:  4](SRO) Designer, JEP106 identification code, bits [3:0]. This field and DSUUB_
                                                                 ERRPIDR2.DES_1 together form the JEDEC-assigned JEP106
                                                                 identification code for the designer of the component.

                                                                 The code identifies the designer of the component, which might
                                                                 not be not the same as the implementer of the device containing
                                                                 the component.

                                                                 0b1011 = Arm Limited. Bits [3:0] of JEP106 identification code
                                                                 0x3B. */
        uint32_t part_1                : 4;  /**< [  3:  0](SRO) Part number, bits [11:8]

                                                                 The part number is a 12-bit part number stored in DSUUB_
                                                                 ERRPIDR0.PART_1 and this field.

                                                                 0b0100 = Theodul Cluster RAS. Bits [11:8] of part number 0x4E8. */
#else /* Word 0 - Little Endian */
        uint32_t part_1                : 4;  /**< [  3:  0](SRO) Part number, bits [11:8]

                                                                 The part number is a 12-bit part number stored in DSUUB_
                                                                 ERRPIDR0.PART_1 and this field.

                                                                 0b0100 = Theodul Cluster RAS. Bits [11:8] of part number 0x4E8. */
        uint32_t des_0                 : 4;  /**< [  7:  4](SRO) Designer, JEP106 identification code, bits [3:0]. This field and DSUUB_
                                                                 ERRPIDR2.DES_1 together form the JEDEC-assigned JEP106
                                                                 identification code for the designer of the component.

                                                                 The code identifies the designer of the component, which might
                                                                 not be not the same as the implementer of the device containing
                                                                 the component.

                                                                 0b1011 = Arm Limited. Bits [3:0] of JEP106 identification code
                                                                 0x3B. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_clusterras_errpidr1_s cn; */
};
typedef union cavm_dsuubx_clusterras_errpidr1 cavm_dsuubx_clusterras_errpidr1_t;

static inline uint64_t CAVM_DSUUBX_CLUSTERRAS_ERRPIDR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTERRAS_ERRPIDR1(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0020fe4ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CLUSTERRAS_ERRPIDR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTERRAS_ERRPIDR1(a) cavm_dsuubx_clusterras_errpidr1_t
#define bustype_CAVM_DSUUBX_CLUSTERRAS_ERRPIDR1(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTERRAS_ERRPIDR1(a) "DSUUBX_CLUSTERRAS_ERRPIDR1"
#define device_bar_CAVM_DSUUBX_CLUSTERRAS_ERRPIDR1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTERRAS_ERRPIDR1(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTERRAS_ERRPIDR1(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_clusterras_errpidr2
 *
 * DSUUB  Peripheral Identification Register 2
 * Provides discovery information about the component.
 *
 * For more information, see About the Peripheral identification scheme in the Arm Architecture
 * Reference Manual, Armv8, for Armv8-A architecture profile.
 */
union cavm_dsuubx_clusterras_errpidr2
{
    uint32_t u;
    struct cavm_dsuubx_clusterras_errpidr2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t revision              : 4;  /**< [  7:  4](SRO) Component major revision. This field and DSUUB_
                                                                 ERRPIDR3.REVAND together form the revision number of the
                                                                 component, with REVISION being the most significant part and
                                                                 REVAND the least significant part.

                                                                 This field reads as an IMPLEMENTATION DEFINED value.

                                                                 0b0000 = Revision r0p0. */
        uint32_t jedec                 : 1;  /**< [  3:  3](SRO) JEDEC-assigned JEP106 implementer code is used. This bit is
                                                                 RAO.

                                                                 1 = JEDEC-assignee values is used. */
        uint32_t des_1                 : 3;  /**< [  2:  0](SRO) Designer, JEP106 identification code, bits [6:4]. DSUUB_
                                                                 ERRPIDR1.DES_0 and this field together form the JEDEC-
                                                                 assigned JEP106 identification code for the designer of the
                                                                 component.

                                                                 This field reads as an IMPLEMENTATION DEFINED value.

                                                                 0b011 = Arm Limited. Bits [6:4] of JEP106 identification code
                                                                 0x3B. */
#else /* Word 0 - Little Endian */
        uint32_t des_1                 : 3;  /**< [  2:  0](SRO) Designer, JEP106 identification code, bits [6:4]. DSUUB_
                                                                 ERRPIDR1.DES_0 and this field together form the JEDEC-
                                                                 assigned JEP106 identification code for the designer of the
                                                                 component.

                                                                 This field reads as an IMPLEMENTATION DEFINED value.

                                                                 0b011 = Arm Limited. Bits [6:4] of JEP106 identification code
                                                                 0x3B. */
        uint32_t jedec                 : 1;  /**< [  3:  3](SRO) JEDEC-assigned JEP106 implementer code is used. This bit is
                                                                 RAO.

                                                                 1 = JEDEC-assignee values is used. */
        uint32_t revision              : 4;  /**< [  7:  4](SRO) Component major revision. This field and DSUUB_
                                                                 ERRPIDR3.REVAND together form the revision number of the
                                                                 component, with REVISION being the most significant part and
                                                                 REVAND the least significant part.

                                                                 This field reads as an IMPLEMENTATION DEFINED value.

                                                                 0b0000 = Revision r0p0. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_clusterras_errpidr2_s cn; */
};
typedef union cavm_dsuubx_clusterras_errpidr2 cavm_dsuubx_clusterras_errpidr2_t;

static inline uint64_t CAVM_DSUUBX_CLUSTERRAS_ERRPIDR2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTERRAS_ERRPIDR2(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0020fe8ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CLUSTERRAS_ERRPIDR2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTERRAS_ERRPIDR2(a) cavm_dsuubx_clusterras_errpidr2_t
#define bustype_CAVM_DSUUBX_CLUSTERRAS_ERRPIDR2(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTERRAS_ERRPIDR2(a) "DSUUBX_CLUSTERRAS_ERRPIDR2"
#define device_bar_CAVM_DSUUBX_CLUSTERRAS_ERRPIDR2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTERRAS_ERRPIDR2(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTERRAS_ERRPIDR2(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_clusterras_errpidr3
 *
 * DSUUB  Peripheral Identification Register 3
 * Provides discovery information about the component.
 *
 * For more information, see About the Peripheral identification scheme in the Arm Architecture
 * Reference Manual, Armv8, for Armv8-A architecture profile.
 */
union cavm_dsuubx_clusterras_errpidr3
{
    uint32_t u;
    struct cavm_dsuubx_clusterras_errpidr3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t revision              : 4;  /**< [  7:  4](SRO) Component revision.

                                                                 This field reads as an IMPLEMENTATION DEFINED value.

                                                                 0b0000 = No ECO fixes. */
        uint32_t cmod                  : 4;  /**< [  3:  0](SRO) Customer Modified. If the value of this field is non-zero, then
                                                                 the component has IMPLEMENTATION DEFINED modifications.

                                                                 0b0000 = The component is not modified from the original design. */
#else /* Word 0 - Little Endian */
        uint32_t cmod                  : 4;  /**< [  3:  0](SRO) Customer Modified. If the value of this field is non-zero, then
                                                                 the component has IMPLEMENTATION DEFINED modifications.

                                                                 0b0000 = The component is not modified from the original design. */
        uint32_t revision              : 4;  /**< [  7:  4](SRO) Component revision.

                                                                 This field reads as an IMPLEMENTATION DEFINED value.

                                                                 0b0000 = No ECO fixes. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_clusterras_errpidr3_s cn; */
};
typedef union cavm_dsuubx_clusterras_errpidr3 cavm_dsuubx_clusterras_errpidr3_t;

static inline uint64_t CAVM_DSUUBX_CLUSTERRAS_ERRPIDR3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTERRAS_ERRPIDR3(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0020fecll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CLUSTERRAS_ERRPIDR3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTERRAS_ERRPIDR3(a) cavm_dsuubx_clusterras_errpidr3_t
#define bustype_CAVM_DSUUBX_CLUSTERRAS_ERRPIDR3(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTERRAS_ERRPIDR3(a) "DSUUBX_CLUSTERRAS_ERRPIDR3"
#define device_bar_CAVM_DSUUBX_CLUSTERRAS_ERRPIDR3(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTERRAS_ERRPIDR3(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTERRAS_ERRPIDR3(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_clusterras_errpidr4
 *
 * DSUUB  Peripheral Identification Register 4
 * Provides discovery information about the component.
 *
 * For more information, see About the Peripheral identification scheme in the Arm Architecture
 * Reference Manual, Armv8, for Armv8-A architecture profile.
 */
union cavm_dsuubx_clusterras_errpidr4
{
    uint32_t u;
    struct cavm_dsuubx_clusterras_errpidr4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t size                  : 4;  /**< [  7:  4](SRO) Size of the component. The distance from the start of the address
                                                                 space used by this component to the end of the component
                                                                 identification registers.

                                                                 If the value of this field is non-zero, then the component occupies
                                                                 2ERRPIDR4.SIZE 4KB blocks.

                                                                 0b0000 = One of the following is true:

                                                                 *    The component uses a single 4KB block.
                                                                 *    The component uses an IMPLEMENTATION DEFINED number
                                                                 of 4KB blocks. */
        uint32_t des_2                 : 4;  /**< [  3:  0](SRO) Designer, JEP106 continuation code. This is the JEDEC-assigned
                                                                 JEP106 bank identifier for the designer of the component, minus 1.

                                                                 The code identifies the designer of the component, which might not
                                                                 be not the same as the implementer of the device containing the
                                                                 component.

                                                                 This field reads as an IMPLEMENTATION DEFINED value.

                                                                 0b0100 = Arm Limited. Number of 0x7F bytes in full JEP106 code 0x7F
                                                                 0x7F 0x7F 0x7F 0x3B. */
#else /* Word 0 - Little Endian */
        uint32_t des_2                 : 4;  /**< [  3:  0](SRO) Designer, JEP106 continuation code. This is the JEDEC-assigned
                                                                 JEP106 bank identifier for the designer of the component, minus 1.

                                                                 The code identifies the designer of the component, which might not
                                                                 be not the same as the implementer of the device containing the
                                                                 component.

                                                                 This field reads as an IMPLEMENTATION DEFINED value.

                                                                 0b0100 = Arm Limited. Number of 0x7F bytes in full JEP106 code 0x7F
                                                                 0x7F 0x7F 0x7F 0x3B. */
        uint32_t size                  : 4;  /**< [  7:  4](SRO) Size of the component. The distance from the start of the address
                                                                 space used by this component to the end of the component
                                                                 identification registers.

                                                                 If the value of this field is non-zero, then the component occupies
                                                                 2ERRPIDR4.SIZE 4KB blocks.

                                                                 0b0000 = One of the following is true:

                                                                 *    The component uses a single 4KB block.
                                                                 *    The component uses an IMPLEMENTATION DEFINED number
                                                                 of 4KB blocks. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_clusterras_errpidr4_s cn; */
};
typedef union cavm_dsuubx_clusterras_errpidr4 cavm_dsuubx_clusterras_errpidr4_t;

static inline uint64_t CAVM_DSUUBX_CLUSTERRAS_ERRPIDR4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTERRAS_ERRPIDR4(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0020fd0ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CLUSTERRAS_ERRPIDR4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTERRAS_ERRPIDR4(a) cavm_dsuubx_clusterras_errpidr4_t
#define bustype_CAVM_DSUUBX_CLUSTERRAS_ERRPIDR4(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTERRAS_ERRPIDR4(a) "DSUUBX_CLUSTERRAS_ERRPIDR4"
#define device_bar_CAVM_DSUUBX_CLUSTERRAS_ERRPIDR4(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTERRAS_ERRPIDR4(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTERRAS_ERRPIDR4(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_clusterras_errpidr5
 *
 * DSUUB  Peripheral Identification Register 5
 * Provides discovery information about the component.
 *
 * For more information, see About the Peripheral identification scheme in the Arm Architecture
 * Reference Manual, Armv8, for Armv8-A architecture profile.
 */
union cavm_dsuubx_clusterras_errpidr5
{
    uint32_t u;
    struct cavm_dsuubx_clusterras_errpidr5_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_clusterras_errpidr5_s cn; */
};
typedef union cavm_dsuubx_clusterras_errpidr5 cavm_dsuubx_clusterras_errpidr5_t;

static inline uint64_t CAVM_DSUUBX_CLUSTERRAS_ERRPIDR5(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTERRAS_ERRPIDR5(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0020fd4ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CLUSTERRAS_ERRPIDR5", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTERRAS_ERRPIDR5(a) cavm_dsuubx_clusterras_errpidr5_t
#define bustype_CAVM_DSUUBX_CLUSTERRAS_ERRPIDR5(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTERRAS_ERRPIDR5(a) "DSUUBX_CLUSTERRAS_ERRPIDR5"
#define device_bar_CAVM_DSUUBX_CLUSTERRAS_ERRPIDR5(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTERRAS_ERRPIDR5(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTERRAS_ERRPIDR5(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_clusterras_errpidr6
 *
 * DSUUB  Peripheral Identification Register 6
 * Provides discovery information about the component.
 *
 * For more information, see About the Peripheral identification scheme in the Arm Architecture
 * Reference Manual, Armv8, for Armv8-A architecture profile.
 */
union cavm_dsuubx_clusterras_errpidr6
{
    uint32_t u;
    struct cavm_dsuubx_clusterras_errpidr6_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_clusterras_errpidr6_s cn; */
};
typedef union cavm_dsuubx_clusterras_errpidr6 cavm_dsuubx_clusterras_errpidr6_t;

static inline uint64_t CAVM_DSUUBX_CLUSTERRAS_ERRPIDR6(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTERRAS_ERRPIDR6(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0020fd8ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CLUSTERRAS_ERRPIDR6", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTERRAS_ERRPIDR6(a) cavm_dsuubx_clusterras_errpidr6_t
#define bustype_CAVM_DSUUBX_CLUSTERRAS_ERRPIDR6(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTERRAS_ERRPIDR6(a) "DSUUBX_CLUSTERRAS_ERRPIDR6"
#define device_bar_CAVM_DSUUBX_CLUSTERRAS_ERRPIDR6(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTERRAS_ERRPIDR6(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTERRAS_ERRPIDR6(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_clusterras_errpidr7
 *
 * DSUUB  Peripheral Identification Register 7
 * Provides discovery information about the component.
 *
 * For more information, see About the Peripheral identification scheme in the Arm Architecture
 * Reference Manual, Armv8, for Armv8-A architecture profile.
 */
union cavm_dsuubx_clusterras_errpidr7
{
    uint32_t u;
    struct cavm_dsuubx_clusterras_errpidr7_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_clusterras_errpidr7_s cn; */
};
typedef union cavm_dsuubx_clusterras_errpidr7 cavm_dsuubx_clusterras_errpidr7_t;

static inline uint64_t CAVM_DSUUBX_CLUSTERRAS_ERRPIDR7(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTERRAS_ERRPIDR7(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0020fdcll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CLUSTERRAS_ERRPIDR7", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTERRAS_ERRPIDR7(a) cavm_dsuubx_clusterras_errpidr7_t
#define bustype_CAVM_DSUUBX_CLUSTERRAS_ERRPIDR7(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTERRAS_ERRPIDR7(a) "DSUUBX_CLUSTERRAS_ERRPIDR7"
#define device_bar_CAVM_DSUUBX_CLUSTERRAS_ERRPIDR7(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTERRAS_ERRPIDR7(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTERRAS_ERRPIDR7(a) (a),-1,-1,-1

/**
 * Register (RSL) dsuub#_clusterrevidr
 *
 * DSUUB Cluster ECO ID Register
 * Enables ECO patches to be applied to the cluster level to be identified by software.
 */
union cavm_dsuubx_clusterrevidr
{
    uint64_t u;
    struct cavm_dsuubx_clusterrevidr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ecoid                 : 64; /**< [ 63:  0](SRO) Contains ECO information. Refer to the errata documentation for any
                                                                 bit allocations. */
#else /* Word 0 - Little Endian */
        uint64_t ecoid                 : 64; /**< [ 63:  0](SRO) Contains ECO information. Refer to the errata documentation for any
                                                                 bit allocations. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_clusterrevidr_s cn; */
};
typedef union cavm_dsuubx_clusterrevidr cavm_dsuubx_clusterrevidr_t;

static inline uint64_t CAVM_DSUUBX_CLUSTERREVIDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTERREVIDR(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0000008ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CLUSTERREVIDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTERREVIDR(a) cavm_dsuubx_clusterrevidr_t
#define bustype_CAVM_DSUUBX_CLUSTERREVIDR(a) CSR_TYPE_RSL
#define basename_CAVM_DSUUBX_CLUSTERREVIDR(a) "DSUUBX_CLUSTERREVIDR"
#define device_bar_CAVM_DSUUBX_CLUSTERREVIDR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTERREVIDR(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTERREVIDR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_core_ppu_aidr
 *
 * DSUUB Core Architecture Identification Register
 * This register identifies the PPU architecture revision.
 */
union cavm_dsuubx_core_ppu_aidr
{
    uint32_t u;
    struct cavm_dsuubx_core_ppu_aidr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t arch_rev_major        : 4;  /**< [  7:  4](SRO) PPU architecture major revision.

                                                                 0b0001 = PPU architecture major revision 1. */
        uint32_t arch_rev_minor        : 4;  /**< [  3:  0](SRO) PPU architecture minor revision.

                                                                 0b0001 = PPU architecture minor revision 1. */
#else /* Word 0 - Little Endian */
        uint32_t arch_rev_minor        : 4;  /**< [  3:  0](SRO) PPU architecture minor revision.

                                                                 0b0001 = PPU architecture minor revision 1. */
        uint32_t arch_rev_major        : 4;  /**< [  7:  4](SRO) PPU architecture major revision.

                                                                 0b0001 = PPU architecture major revision 1. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_core_ppu_aidr_s cn; */
};
typedef union cavm_dsuubx_core_ppu_aidr cavm_dsuubx_core_ppu_aidr_t;

static inline uint64_t CAVM_DSUUBX_CORE_PPU_AIDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CORE_PPU_AIDR(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0080fccll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CORE_PPU_AIDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CORE_PPU_AIDR(a) cavm_dsuubx_core_ppu_aidr_t
#define bustype_CAVM_DSUUBX_CORE_PPU_AIDR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CORE_PPU_AIDR(a) "DSUUBX_CORE_PPU_AIDR"
#define device_bar_CAVM_DSUUBX_CORE_PPU_AIDR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CORE_PPU_AIDR(a) (a)
#define arguments_CAVM_DSUUBX_CORE_PPU_AIDR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_core_ppu_aimr
 *
 * DSUUB Core Additional Interrupt Mask Register
 * This register controls the events that assert the interrupt output. Additional event
 * masking controls
 * are in the Interrupt Mask Register (PPU_IMR), Input Edge Sensitivity Register (PPU_IESR), and the
 * Operating Mode Active Edge Sensitivity Register (PPU_OPSR).
 *
 * When an interrupt event is masked an occurrence of the event does not set the corresponding bit
 * in the interrupt status register.
 */
union cavm_dsuubx_core_ppu_aimr
{
    uint32_t u;
    struct cavm_dsuubx_core_ppu_aimr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_3_31         : 29;
        uint32_t dyn_deny_irq_mask     : 1;  /**< [  2:  2](SR/W) Dynamic transition denial event mask

                                                                 0 = Dynamic transition denial event enabled.

                                                                 1 = Dynamic transition denial event masked. */
        uint32_t dyn_accept_irq_mask   : 1;  /**< [  1:  1](SR/W) Dynamic transition acceptance event mask

                                                                 0 = Dynamic transition acceptance event
                                                                 enabled.

                                                                 1 = Dynamic transition acceptance event
                                                                 masked. */
        uint32_t unspt_policy_irq_mask : 1;  /**< [  0:  0](SR/W) Unsupported policy event mask

                                                                 0 = Unsupported policy event enabled.

                                                                 1 = Unsupported policy event masked. */
#else /* Word 0 - Little Endian */
        uint32_t unspt_policy_irq_mask : 1;  /**< [  0:  0](SR/W) Unsupported policy event mask

                                                                 0 = Unsupported policy event enabled.

                                                                 1 = Unsupported policy event masked. */
        uint32_t dyn_accept_irq_mask   : 1;  /**< [  1:  1](SR/W) Dynamic transition acceptance event mask

                                                                 0 = Dynamic transition acceptance event
                                                                 enabled.

                                                                 1 = Dynamic transition acceptance event
                                                                 masked. */
        uint32_t dyn_deny_irq_mask     : 1;  /**< [  2:  2](SR/W) Dynamic transition denial event mask

                                                                 0 = Dynamic transition denial event enabled.

                                                                 1 = Dynamic transition denial event masked. */
        uint32_t reserved_3_31         : 29;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_core_ppu_aimr_s cn; */
};
typedef union cavm_dsuubx_core_ppu_aimr cavm_dsuubx_core_ppu_aimr_t;

static inline uint64_t CAVM_DSUUBX_CORE_PPU_AIMR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CORE_PPU_AIMR(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0080034ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CORE_PPU_AIMR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CORE_PPU_AIMR(a) cavm_dsuubx_core_ppu_aimr_t
#define bustype_CAVM_DSUUBX_CORE_PPU_AIMR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CORE_PPU_AIMR(a) "DSUUBX_CORE_PPU_AIMR"
#define device_bar_CAVM_DSUUBX_CORE_PPU_AIMR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CORE_PPU_AIMR(a) (a)
#define arguments_CAVM_DSUUBX_CORE_PPU_AIMR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_core_ppu_aisr
 *
 * DSUUB Core Additional Interrupt Status Register
 * This register contains information about events causing the assertion of the
 * interrupt output. It is
 * also used to clear interrupt events.
 *
 * A bit set to 1 indicates the event asserted the interrupt output. Multiple events can be active
 * at the same time. When an interrupt event is masked by the corresponding bit in PPU_AIMR, an
 * occurrence of that event does not set the status bit.
 * A write of 1 to a set event bit clears that event. A write of 0 has no effect. The interrupt
 * output stays HIGH until all status bits in the Interrupt Status Register (PPU_ISR)
 * and the Additional
 * Interrupt Status Register (PPU_AISR) are set to 0b0.
 *
 * When an interrupt status is set to 1 in this register it sets the OTHER_IRQ bit in the Interrupt
 * Status Register (PPU_ISR). Status bits in this register (PPU_AISR) are only cleared
 * by writing to this
 * register.
 */
union cavm_dsuubx_core_ppu_aisr
{
    uint32_t u;
    struct cavm_dsuubx_core_ppu_aisr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_3_31         : 29;
        uint32_t dyn_deny_irq          : 1;  /**< [  2:  2](SR/W1C/H) Dynamic transition denial event status

                                                                 0 = No dynamic transition denial event.

                                                                 1 = A dynamic transition denial event asserted
                                                                 the interrupt output. */
        uint32_t dyn_accept_irq        : 1;  /**< [  1:  1](SR/W1C/H) Dynamic transition acceptance event status

                                                                 0 = No dynamic transition acceptance event.

                                                                 1 = A dynamic transition acceptance event
                                                                 asserted the interrupt output. */
        uint32_t unspt_policy_irq      : 1;  /**< [  0:  0](SR/W1C/H) Unsupported policy event status

                                                                 0 = No unsupported policy event.

                                                                 1 = An unsupported policy event asserted the
                                                                 interrupt output. */
#else /* Word 0 - Little Endian */
        uint32_t unspt_policy_irq      : 1;  /**< [  0:  0](SR/W1C/H) Unsupported policy event status

                                                                 0 = No unsupported policy event.

                                                                 1 = An unsupported policy event asserted the
                                                                 interrupt output. */
        uint32_t dyn_accept_irq        : 1;  /**< [  1:  1](SR/W1C/H) Dynamic transition acceptance event status

                                                                 0 = No dynamic transition acceptance event.

                                                                 1 = A dynamic transition acceptance event
                                                                 asserted the interrupt output. */
        uint32_t dyn_deny_irq          : 1;  /**< [  2:  2](SR/W1C/H) Dynamic transition denial event status

                                                                 0 = No dynamic transition denial event.

                                                                 1 = A dynamic transition denial event asserted
                                                                 the interrupt output. */
        uint32_t reserved_3_31         : 29;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_core_ppu_aisr_s cn; */
};
typedef union cavm_dsuubx_core_ppu_aisr cavm_dsuubx_core_ppu_aisr_t;

static inline uint64_t CAVM_DSUUBX_CORE_PPU_AISR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CORE_PPU_AISR(uint64_t a)
{
    if (a<=63)
        return 0x87e2c008003cll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CORE_PPU_AISR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CORE_PPU_AISR(a) cavm_dsuubx_core_ppu_aisr_t
#define bustype_CAVM_DSUUBX_CORE_PPU_AISR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CORE_PPU_AISR(a) "DSUUBX_CORE_PPU_AISR"
#define device_bar_CAVM_DSUUBX_CORE_PPU_AISR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CORE_PPU_AISR(a) (a)
#define arguments_CAVM_DSUUBX_CORE_PPU_AISR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_core_ppu_cidr0
 *
 * DSUUB Core PPU Component Identification Register 0
 * Provides CoreSight discovery information.
 */
union cavm_dsuubx_core_ppu_cidr0
{
    uint32_t u;
    struct cavm_dsuubx_core_ppu_cidr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t prmbl_0               : 8;  /**< [  7:  0](SRO) CoreSight component identification preamble.

                                                                 0b00001101 = CoreSight component identification preamble. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_0               : 8;  /**< [  7:  0](SRO) CoreSight component identification preamble.

                                                                 0b00001101 = CoreSight component identification preamble. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_core_ppu_cidr0_s cn; */
};
typedef union cavm_dsuubx_core_ppu_cidr0 cavm_dsuubx_core_ppu_cidr0_t;

static inline uint64_t CAVM_DSUUBX_CORE_PPU_CIDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CORE_PPU_CIDR0(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0080ff0ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CORE_PPU_CIDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CORE_PPU_CIDR0(a) cavm_dsuubx_core_ppu_cidr0_t
#define bustype_CAVM_DSUUBX_CORE_PPU_CIDR0(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CORE_PPU_CIDR0(a) "DSUUBX_CORE_PPU_CIDR0"
#define device_bar_CAVM_DSUUBX_CORE_PPU_CIDR0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CORE_PPU_CIDR0(a) (a)
#define arguments_CAVM_DSUUBX_CORE_PPU_CIDR0(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_core_ppu_cidr1
 *
 * DSUUB Core PPU Component Identification Register 1
 * Provides CoreSight discovery information.
 */
union cavm_dsuubx_core_ppu_cidr1
{
    uint32_t u;
    struct cavm_dsuubx_core_ppu_cidr1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t clas                  : 4;  /**< [  7:  4](SRO) CoreSight component class.

                                                                 0b1111 = CoreLink component. */
        uint32_t prmbl_1               : 4;  /**< [  3:  0](SRO) CoreSight component identification preamble.

                                                                 0b0000 = CoreSight component identification preamble. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_1               : 4;  /**< [  3:  0](SRO) CoreSight component identification preamble.

                                                                 0b0000 = CoreSight component identification preamble. */
        uint32_t clas                  : 4;  /**< [  7:  4](SRO) CoreSight component class.

                                                                 0b1111 = CoreLink component. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_core_ppu_cidr1_s cn; */
};
typedef union cavm_dsuubx_core_ppu_cidr1 cavm_dsuubx_core_ppu_cidr1_t;

static inline uint64_t CAVM_DSUUBX_CORE_PPU_CIDR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CORE_PPU_CIDR1(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0080ff4ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CORE_PPU_CIDR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CORE_PPU_CIDR1(a) cavm_dsuubx_core_ppu_cidr1_t
#define bustype_CAVM_DSUUBX_CORE_PPU_CIDR1(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CORE_PPU_CIDR1(a) "DSUUBX_CORE_PPU_CIDR1"
#define device_bar_CAVM_DSUUBX_CORE_PPU_CIDR1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CORE_PPU_CIDR1(a) (a)
#define arguments_CAVM_DSUUBX_CORE_PPU_CIDR1(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_core_ppu_cidr2
 *
 * DSUUB Core PPU Component Identification Register 2
 * Provides CoreSight discovery information.
 */
union cavm_dsuubx_core_ppu_cidr2
{
    uint32_t u;
    struct cavm_dsuubx_core_ppu_cidr2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t prmbl_2               : 8;  /**< [  7:  0](SRO) CoreSight component identification preamble.

                                                                 0b00000101 = CoreSight component identification preamble. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_2               : 8;  /**< [  7:  0](SRO) CoreSight component identification preamble.

                                                                 0b00000101 = CoreSight component identification preamble. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_core_ppu_cidr2_s cn; */
};
typedef union cavm_dsuubx_core_ppu_cidr2 cavm_dsuubx_core_ppu_cidr2_t;

static inline uint64_t CAVM_DSUUBX_CORE_PPU_CIDR2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CORE_PPU_CIDR2(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0080ff8ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CORE_PPU_CIDR2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CORE_PPU_CIDR2(a) cavm_dsuubx_core_ppu_cidr2_t
#define bustype_CAVM_DSUUBX_CORE_PPU_CIDR2(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CORE_PPU_CIDR2(a) "DSUUBX_CORE_PPU_CIDR2"
#define device_bar_CAVM_DSUUBX_CORE_PPU_CIDR2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CORE_PPU_CIDR2(a) (a)
#define arguments_CAVM_DSUUBX_CORE_PPU_CIDR2(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_core_ppu_dcdr0
 *
 * DSUUB Core Device Control Delay Configuration Register 0
 * This register is used to program device control delay parameters.
 */
union cavm_dsuubx_core_ppu_dcdr0
{
    uint32_t u;
    struct cavm_dsuubx_core_ppu_dcdr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_24_31        : 8;
        uint32_t rst_hwstat_dly        : 8;  /**< [ 23: 16](SR/W) Delay from reset de-assertion to HWSTAT update. */
        uint32_t iso_clken_dly         : 8;  /**< [ 15:  8](SR/W) Delay from isolation enable de-assertion to clock
                                                                 enable assertion. */
        uint32_t clken_rst_dly         : 8;  /**< [  7:  0](SR/W) Delay from clock enable assertion to reset de-
                                                                 assertion. */
#else /* Word 0 - Little Endian */
        uint32_t clken_rst_dly         : 8;  /**< [  7:  0](SR/W) Delay from clock enable assertion to reset de-
                                                                 assertion. */
        uint32_t iso_clken_dly         : 8;  /**< [ 15:  8](SR/W) Delay from isolation enable de-assertion to clock
                                                                 enable assertion. */
        uint32_t rst_hwstat_dly        : 8;  /**< [ 23: 16](SR/W) Delay from reset de-assertion to HWSTAT update. */
        uint32_t reserved_24_31        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_core_ppu_dcdr0_s cn; */
};
typedef union cavm_dsuubx_core_ppu_dcdr0 cavm_dsuubx_core_ppu_dcdr0_t;

static inline uint64_t CAVM_DSUUBX_CORE_PPU_DCDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CORE_PPU_DCDR0(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0080170ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CORE_PPU_DCDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CORE_PPU_DCDR0(a) cavm_dsuubx_core_ppu_dcdr0_t
#define bustype_CAVM_DSUUBX_CORE_PPU_DCDR0(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CORE_PPU_DCDR0(a) "DSUUBX_CORE_PPU_DCDR0"
#define device_bar_CAVM_DSUUBX_CORE_PPU_DCDR0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CORE_PPU_DCDR0(a) (a)
#define arguments_CAVM_DSUUBX_CORE_PPU_DCDR0(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_core_ppu_dcdr1
 *
 * DSUUB Core Device Control Delay Configuration Register 1
 * This register is used to program device control delay parameters.
 */
union cavm_dsuubx_core_ppu_dcdr1
{
    uint32_t u;
    struct cavm_dsuubx_core_ppu_dcdr1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t clken_iso_dly         : 8;  /**< [ 15:  8](SR/W) Delay from clock enable de-assertion to isolation enable
                                                                 assertion. */
        uint32_t iso_rst_dly           : 8;  /**< [  7:  0](SR/W) Delay from isolation enable assertion to reset assertion. */
#else /* Word 0 - Little Endian */
        uint32_t iso_rst_dly           : 8;  /**< [  7:  0](SR/W) Delay from isolation enable assertion to reset assertion. */
        uint32_t clken_iso_dly         : 8;  /**< [ 15:  8](SR/W) Delay from clock enable de-assertion to isolation enable
                                                                 assertion. */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_core_ppu_dcdr1_s cn; */
};
typedef union cavm_dsuubx_core_ppu_dcdr1 cavm_dsuubx_core_ppu_dcdr1_t;

static inline uint64_t CAVM_DSUUBX_CORE_PPU_DCDR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CORE_PPU_DCDR1(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0080174ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CORE_PPU_DCDR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CORE_PPU_DCDR1(a) cavm_dsuubx_core_ppu_dcdr1_t
#define bustype_CAVM_DSUUBX_CORE_PPU_DCDR1(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CORE_PPU_DCDR1(a) "DSUUBX_CORE_PPU_DCDR1"
#define device_bar_CAVM_DSUUBX_CORE_PPU_DCDR1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CORE_PPU_DCDR1(a) (a)
#define arguments_CAVM_DSUUBX_CORE_PPU_DCDR1(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_core_ppu_disr
 *
 * DSUUB Core Device Interface Input Current Status Register
 * This read-only register contains status reflecting the values of the device interface inputs.
 */
union cavm_dsuubx_core_ppu_disr
{
    uint32_t u;
    struct cavm_dsuubx_core_ppu_disr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_11_31        : 21;
        uint32_t pwr_devactive_status  : 11; /**< [ 10:  0](SRO/H) Status of the power mode DEVPACTIVE
                                                                 inputs.

                                                                 0b00000000000 = Minimum mode OFF.

                                                                 0b0000000001x = Minimum mode OFF_EMU.

                                                                 0b000001xxxxx = Minimum mode FULL_RET.

                                                                 0b0001xxxxxxx = Minimum mode FUNC_RET.

                                                                 0b001xxxxxxxx = Minimum mode ON.

                                                                 0b01xxxxxxxxx = Minimum mode WARM_RST.

                                                                 0b1xxxxxxxxxx = Minimum mode DBG_RECOV. */
#else /* Word 0 - Little Endian */
        uint32_t pwr_devactive_status  : 11; /**< [ 10:  0](SRO/H) Status of the power mode DEVPACTIVE
                                                                 inputs.

                                                                 0b00000000000 = Minimum mode OFF.

                                                                 0b0000000001x = Minimum mode OFF_EMU.

                                                                 0b000001xxxxx = Minimum mode FULL_RET.

                                                                 0b0001xxxxxxx = Minimum mode FUNC_RET.

                                                                 0b001xxxxxxxx = Minimum mode ON.

                                                                 0b01xxxxxxxxx = Minimum mode WARM_RST.

                                                                 0b1xxxxxxxxxx = Minimum mode DBG_RECOV. */
        uint32_t reserved_11_31        : 21;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_core_ppu_disr_s cn; */
};
typedef union cavm_dsuubx_core_ppu_disr cavm_dsuubx_core_ppu_disr_t;

static inline uint64_t CAVM_DSUUBX_CORE_PPU_DISR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CORE_PPU_DISR(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0080010ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CORE_PPU_DISR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CORE_PPU_DISR(a) cavm_dsuubx_core_ppu_disr_t
#define bustype_CAVM_DSUUBX_CORE_PPU_DISR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CORE_PPU_DISR(a) "DSUUBX_CORE_PPU_DISR"
#define device_bar_CAVM_DSUUBX_CORE_PPU_DISR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CORE_PPU_DISR(a) (a)
#define arguments_CAVM_DSUUBX_CORE_PPU_DISR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_core_ppu_fulrr
 *
 * DSUUB Core Full Retention RAM Configuration Register
 * This register controls bits [15:8] of the PCSMPSTATE output when in FULL_RET mode. These
 * outputs are used by the PCSM to configure the logic regions and RAMs that are retained.
 */
union cavm_dsuubx_core_ppu_fulrr
{
    uint32_t u;
    struct cavm_dsuubx_core_ppu_fulrr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t full_ret_ram_cfg      : 8;  /**< [  7:  0](SR/W) FULL_RET RAM configuration bits. */
#else /* Word 0 - Little Endian */
        uint32_t full_ret_ram_cfg      : 8;  /**< [  7:  0](SR/W) FULL_RET RAM configuration bits. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_core_ppu_fulrr_s cn; */
};
typedef union cavm_dsuubx_core_ppu_fulrr cavm_dsuubx_core_ppu_fulrr_t;

static inline uint64_t CAVM_DSUUBX_CORE_PPU_FULRR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CORE_PPU_FULRR(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0080054ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CORE_PPU_FULRR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CORE_PPU_FULRR(a) cavm_dsuubx_core_ppu_fulrr_t
#define bustype_CAVM_DSUUBX_CORE_PPU_FULRR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CORE_PPU_FULRR(a) "DSUUBX_CORE_PPU_FULRR"
#define device_bar_CAVM_DSUUBX_CORE_PPU_FULRR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CORE_PPU_FULRR(a) (a)
#define arguments_CAVM_DSUUBX_CORE_PPU_FULRR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_core_ppu_funrr
 *
 * DSUUB Core Functional Retention RAM Configuration Register
 * This register is reserved.
 */
union cavm_dsuubx_core_ppu_funrr
{
    uint32_t u;
    struct cavm_dsuubx_core_ppu_funrr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t func_ret_ram_cfg      : 8;  /**< [  7:  0](SR/W) FUNC_RET RAM configuration bits. If FUNC_RET
                                                                 is not supported, or FUNC_RET_RAM_REG_CFG is
                                                                 set to 0b0, this field is reserved.

                                                                 0b00000000 = Reserved */
#else /* Word 0 - Little Endian */
        uint32_t func_ret_ram_cfg      : 8;  /**< [  7:  0](SR/W) FUNC_RET RAM configuration bits. If FUNC_RET
                                                                 is not supported, or FUNC_RET_RAM_REG_CFG is
                                                                 set to 0b0, this field is reserved.

                                                                 0b00000000 = Reserved */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_core_ppu_funrr_s cn; */
};
typedef union cavm_dsuubx_core_ppu_funrr cavm_dsuubx_core_ppu_funrr_t;

static inline uint64_t CAVM_DSUUBX_CORE_PPU_FUNRR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CORE_PPU_FUNRR(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0080050ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CORE_PPU_FUNRR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CORE_PPU_FUNRR(a) cavm_dsuubx_core_ppu_funrr_t
#define bustype_CAVM_DSUUBX_CORE_PPU_FUNRR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CORE_PPU_FUNRR(a) "DSUUBX_CORE_PPU_FUNRR"
#define device_bar_CAVM_DSUUBX_CORE_PPU_FUNRR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CORE_PPU_FUNRR(a) (a)
#define arguments_CAVM_DSUUBX_CORE_PPU_FUNRR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_core_ppu_idr0
 *
 * DSUUB Core PPU Identification Register 0
 * This read-only register contains information on the type and number of channels on the device
 * interface and power and operating modes supported.
 *
 * Additional information on optional features can be found in the PPU Identification Register 1
 * (PPU_IDR1).
 */
union cavm_dsuubx_core_ppu_idr0
{
    uint32_t u;
    struct cavm_dsuubx_core_ppu_idr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_30_31        : 2;
        uint32_t dyn_wrm_rst_spt       : 1;  /**< [ 29: 29](SRO) Dynamic WARM_RST support.

                                                                 1 = Dynamic WARM_RST supported. */
        uint32_t dyn_on_spt            : 1;  /**< [ 28: 28](SRO) Dynamic ON support.

                                                                 1 = Dynamic ON supported. */
        uint32_t dyn_func_ret_spt      : 1;  /**< [ 27: 27](SRO) Dynamic DYN_FUNC_RET_SPT support.

                                                                 1 = Dynamic DYN_FUNC_RET_SPT
                                                                 supported. */
        uint32_t dyn_full_ret_spt      : 1;  /**< [ 26: 26](SRO) Dynamic DYN_FULL_RET_SPT support.

                                                                 1 = Dynamic DYN_FULL_RET_SPT
                                                                 supported. */
        uint32_t dyn_mem_off_spt       : 1;  /**< [ 25: 25](SRO) Dynamic MEM_OFF support.

                                                                 0 = Dynamic MEM_OFF not supported. */
        uint32_t dyn_lgc_ret_spt       : 1;  /**< [ 24: 24](SRO) Dynamic LOGIC_RET support.

                                                                 0 = Dynamic LOGIC_RET not supported. */
        uint32_t dyn_mem_ret_emu_spt   : 1;  /**< [ 23: 23](SRO) Dynamic DYN_MEM_RET_EMU_SPT support.

                                                                 0 = Dynamic DYN_MEM_RET_EMU_SPT
                                                                 not supported. */
        uint32_t dyn_mem_ret_spt       : 1;  /**< [ 22: 22](SRO) Dynamic DYN_MEM_RET_SPT support.

                                                                 0 = Dynamic DYN_MEM_RET_SPT not
                                                                 supported. */
        uint32_t dyn_off_emu_spt       : 1;  /**< [ 21: 21](SRO) Dynamic OFF_EMU support.

                                                                 1 = Dynamic OFF_EMU supported. */
        uint32_t dyn_off_spt           : 1;  /**< [ 20: 20](SRO) Dynamic OFF support.

                                                                 1 = Dynamic OFF supported. */
        uint32_t reserved_19           : 1;
        uint32_t sta_dbg_recov_spt     : 1;  /**< [ 18: 18](SRO) DBG_RECOV support.

                                                                 1 = DBG_RECOV supported. */
        uint32_t sta_wrm_rst_spt       : 1;  /**< [ 17: 17](SRO) WARM_RST support.

                                                                 1 = WRM_RST supported. */
        uint32_t sta_on_spt            : 1;  /**< [ 16: 16](SRO) ON support.

                                                                 1 = ON supported. */
        uint32_t sta_func_ret_spt      : 1;  /**< [ 15: 15](SRO) FUNC_RET support.

                                                                 1 = FUNC_RET supported. */
        uint32_t sta_full_ret_spt      : 1;  /**< [ 14: 14](SRO) FULL_RET support.

                                                                 1 = FULL_RET supported. */
        uint32_t sta_mem_off_spt       : 1;  /**< [ 13: 13](SRO) MEM_OFF support.

                                                                 0 = MEM_OFF not supported. */
        uint32_t sta_lgc_ret_spt       : 1;  /**< [ 12: 12](SRO) LOGIC_RET support.

                                                                 0 = LOGIC_RET not supported. */
        uint32_t sta_mem_ret_emu_spt   : 1;  /**< [ 11: 11](SRO) MEM_RET_EMU support.

                                                                 0 = MEM_RET_EMU not supported. */
        uint32_t sta_mem_ret_spt       : 1;  /**< [ 10: 10](SRO) MEM_RET support.

                                                                 0 = MEM_RET not supported. */
        uint32_t sta_off_emu_spt       : 1;  /**< [  9:  9](SRO) OFF_EMU support.

                                                                 1 = OFF_EMU supported. */
        uint32_t sta_off_spt           : 1;  /**< [  8:  8](SRO) OFF support.

                                                                 1 = OFF supported. */
        uint32_t num_opmode            : 4;  /**< [  7:  4](SRO) No. of operating modes supported, minus 1.

                                                                 0b0000 = 1 operating mode supported. */
        uint32_t devchan               : 4;  /**< [  3:  0](SRO) No. of Device Interface Channels.

                                                                 0b0000 = 0 (P-channel PPU). */
#else /* Word 0 - Little Endian */
        uint32_t devchan               : 4;  /**< [  3:  0](SRO) No. of Device Interface Channels.

                                                                 0b0000 = 0 (P-channel PPU). */
        uint32_t num_opmode            : 4;  /**< [  7:  4](SRO) No. of operating modes supported, minus 1.

                                                                 0b0000 = 1 operating mode supported. */
        uint32_t sta_off_spt           : 1;  /**< [  8:  8](SRO) OFF support.

                                                                 1 = OFF supported. */
        uint32_t sta_off_emu_spt       : 1;  /**< [  9:  9](SRO) OFF_EMU support.

                                                                 1 = OFF_EMU supported. */
        uint32_t sta_mem_ret_spt       : 1;  /**< [ 10: 10](SRO) MEM_RET support.

                                                                 0 = MEM_RET not supported. */
        uint32_t sta_mem_ret_emu_spt   : 1;  /**< [ 11: 11](SRO) MEM_RET_EMU support.

                                                                 0 = MEM_RET_EMU not supported. */
        uint32_t sta_lgc_ret_spt       : 1;  /**< [ 12: 12](SRO) LOGIC_RET support.

                                                                 0 = LOGIC_RET not supported. */
        uint32_t sta_mem_off_spt       : 1;  /**< [ 13: 13](SRO) MEM_OFF support.

                                                                 0 = MEM_OFF not supported. */
        uint32_t sta_full_ret_spt      : 1;  /**< [ 14: 14](SRO) FULL_RET support.

                                                                 1 = FULL_RET supported. */
        uint32_t sta_func_ret_spt      : 1;  /**< [ 15: 15](SRO) FUNC_RET support.

                                                                 1 = FUNC_RET supported. */
        uint32_t sta_on_spt            : 1;  /**< [ 16: 16](SRO) ON support.

                                                                 1 = ON supported. */
        uint32_t sta_wrm_rst_spt       : 1;  /**< [ 17: 17](SRO) WARM_RST support.

                                                                 1 = WRM_RST supported. */
        uint32_t sta_dbg_recov_spt     : 1;  /**< [ 18: 18](SRO) DBG_RECOV support.

                                                                 1 = DBG_RECOV supported. */
        uint32_t reserved_19           : 1;
        uint32_t dyn_off_spt           : 1;  /**< [ 20: 20](SRO) Dynamic OFF support.

                                                                 1 = Dynamic OFF supported. */
        uint32_t dyn_off_emu_spt       : 1;  /**< [ 21: 21](SRO) Dynamic OFF_EMU support.

                                                                 1 = Dynamic OFF_EMU supported. */
        uint32_t dyn_mem_ret_spt       : 1;  /**< [ 22: 22](SRO) Dynamic DYN_MEM_RET_SPT support.

                                                                 0 = Dynamic DYN_MEM_RET_SPT not
                                                                 supported. */
        uint32_t dyn_mem_ret_emu_spt   : 1;  /**< [ 23: 23](SRO) Dynamic DYN_MEM_RET_EMU_SPT support.

                                                                 0 = Dynamic DYN_MEM_RET_EMU_SPT
                                                                 not supported. */
        uint32_t dyn_lgc_ret_spt       : 1;  /**< [ 24: 24](SRO) Dynamic LOGIC_RET support.

                                                                 0 = Dynamic LOGIC_RET not supported. */
        uint32_t dyn_mem_off_spt       : 1;  /**< [ 25: 25](SRO) Dynamic MEM_OFF support.

                                                                 0 = Dynamic MEM_OFF not supported. */
        uint32_t dyn_full_ret_spt      : 1;  /**< [ 26: 26](SRO) Dynamic DYN_FULL_RET_SPT support.

                                                                 1 = Dynamic DYN_FULL_RET_SPT
                                                                 supported. */
        uint32_t dyn_func_ret_spt      : 1;  /**< [ 27: 27](SRO) Dynamic DYN_FUNC_RET_SPT support.

                                                                 1 = Dynamic DYN_FUNC_RET_SPT
                                                                 supported. */
        uint32_t dyn_on_spt            : 1;  /**< [ 28: 28](SRO) Dynamic ON support.

                                                                 1 = Dynamic ON supported. */
        uint32_t dyn_wrm_rst_spt       : 1;  /**< [ 29: 29](SRO) Dynamic WARM_RST support.

                                                                 1 = Dynamic WARM_RST supported. */
        uint32_t reserved_30_31        : 2;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_core_ppu_idr0_s cn; */
};
typedef union cavm_dsuubx_core_ppu_idr0 cavm_dsuubx_core_ppu_idr0_t;

static inline uint64_t CAVM_DSUUBX_CORE_PPU_IDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CORE_PPU_IDR0(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0080fb0ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CORE_PPU_IDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CORE_PPU_IDR0(a) cavm_dsuubx_core_ppu_idr0_t
#define bustype_CAVM_DSUUBX_CORE_PPU_IDR0(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CORE_PPU_IDR0(a) "DSUUBX_CORE_PPU_IDR0"
#define device_bar_CAVM_DSUUBX_CORE_PPU_IDR0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CORE_PPU_IDR0(a) (a)
#define arguments_CAVM_DSUUBX_CORE_PPU_IDR0(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_core_ppu_idr1
 *
 * DSUUB Core PPU Identification Register 1
 * This read-only register contains information on the optional features and configurations that are
 * supported by this PPU.
 *
 * Additional information on optional features can be found in the PPU Identification Register 0
 * (PPU_IDR0).
 */
union cavm_dsuubx_core_ppu_idr1
{
    uint32_t u;
    struct cavm_dsuubx_core_ppu_idr1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_13_31        : 19;
        uint32_t off_mem_ret_trans     : 1;  /**< [ 12: 12](SRO) OFF to MEM_RET direct transition. Indicates
                                                                 if direct transitions from OFF to MEM_RET
                                                                 and from OFF_EMU to MEM_RET_EMU are
                                                                 supported.

                                                                 0 = OFF to MEM_RET direct transition not
                                                                 supported. */
        uint32_t reserved_9_11         : 3;
        uint32_t sta_policy_pwr_irq_spt : 1; /**< [  8:  8](SRO) Power policy transition completion event
                                                                 status.

                                                                 1 = Power policy transition completion
                                                                 events supported. */
        uint32_t reserved_7            : 1;
        uint32_t func_ret_ram_reg      : 1;  /**< [  6:  6](SRO) Indicates if the PPU_FUNRR register is present
                                                                 or reserved.

                                                                 0 = PPU_FUNRR is reserved. */
        uint32_t full_ret_ram_reg      : 1;  /**< [  5:  5](SRO) Indicates if the PPU_FULRR register is present
                                                                 or reserved.

                                                                 1 = PPU_FULRR is present. */
        uint32_t mem_ret_ram_reg       : 1;  /**< [  4:  4](SRO) Indicates if the PPU_MEMRR register is present
                                                                 or reserved.

                                                                 0 = PPU_MEMRR is present. */
        uint32_t reserved_3            : 1;
        uint32_t lock_spt              : 1;  /**< [  2:  2](SRO) Indicates if the lock and the lock interrupt
                                                                 event are supported.

                                                                 1 = Lock and the lock interrupt event are
                                                                 supported. */
        uint32_t sw_dev_del_spt        : 1;  /**< [  1:  1](SRO) Software device delay control configuration
                                                                 support.

                                                                 1 = Software device delay control
                                                                 configuration supported. */
        uint32_t pwr_mode_entry_del_spt : 1; /**< [  0:  0](SRO) Power mode entry delay support.

                                                                 0 = Power mode entry delay not supported. */
#else /* Word 0 - Little Endian */
        uint32_t pwr_mode_entry_del_spt : 1; /**< [  0:  0](SRO) Power mode entry delay support.

                                                                 0 = Power mode entry delay not supported. */
        uint32_t sw_dev_del_spt        : 1;  /**< [  1:  1](SRO) Software device delay control configuration
                                                                 support.

                                                                 1 = Software device delay control
                                                                 configuration supported. */
        uint32_t lock_spt              : 1;  /**< [  2:  2](SRO) Indicates if the lock and the lock interrupt
                                                                 event are supported.

                                                                 1 = Lock and the lock interrupt event are
                                                                 supported. */
        uint32_t reserved_3            : 1;
        uint32_t mem_ret_ram_reg       : 1;  /**< [  4:  4](SRO) Indicates if the PPU_MEMRR register is present
                                                                 or reserved.

                                                                 0 = PPU_MEMRR is present. */
        uint32_t full_ret_ram_reg      : 1;  /**< [  5:  5](SRO) Indicates if the PPU_FULRR register is present
                                                                 or reserved.

                                                                 1 = PPU_FULRR is present. */
        uint32_t func_ret_ram_reg      : 1;  /**< [  6:  6](SRO) Indicates if the PPU_FUNRR register is present
                                                                 or reserved.

                                                                 0 = PPU_FUNRR is reserved. */
        uint32_t reserved_7            : 1;
        uint32_t sta_policy_pwr_irq_spt : 1; /**< [  8:  8](SRO) Power policy transition completion event
                                                                 status.

                                                                 1 = Power policy transition completion
                                                                 events supported. */
        uint32_t reserved_9_11         : 3;
        uint32_t off_mem_ret_trans     : 1;  /**< [ 12: 12](SRO) OFF to MEM_RET direct transition. Indicates
                                                                 if direct transitions from OFF to MEM_RET
                                                                 and from OFF_EMU to MEM_RET_EMU are
                                                                 supported.

                                                                 0 = OFF to MEM_RET direct transition not
                                                                 supported. */
        uint32_t reserved_13_31        : 19;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_core_ppu_idr1_s cn; */
};
typedef union cavm_dsuubx_core_ppu_idr1 cavm_dsuubx_core_ppu_idr1_t;

static inline uint64_t CAVM_DSUUBX_CORE_PPU_IDR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CORE_PPU_IDR1(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0080fb4ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CORE_PPU_IDR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CORE_PPU_IDR1(a) cavm_dsuubx_core_ppu_idr1_t
#define bustype_CAVM_DSUUBX_CORE_PPU_IDR1(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CORE_PPU_IDR1(a) "DSUUBX_CORE_PPU_IDR1"
#define device_bar_CAVM_DSUUBX_CORE_PPU_IDR1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CORE_PPU_IDR1(a) (a)
#define arguments_CAVM_DSUUBX_CORE_PPU_IDR1(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_core_ppu_iesr
 *
 * DSUUB Core Input Edge Sensitivity Register
 * This register configures the transitions on the power mode DEVPACTIVE inputs that generate an
 * Input Edge interrupt event.
 *
 * When an event is masked an occurrence of the event does not set the corresponding bit in the
 * interrupt status register.
 */
union cavm_dsuubx_core_ppu_iesr
{
    uint32_t u;
    struct cavm_dsuubx_core_ppu_iesr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_22_31        : 10;
        uint32_t devactive10_edge      : 2;  /**< [ 21: 20](SR/W) Configures the transitions on the
                                                                 DEVPACTIVE[10] input (DBG_RECOV) that
                                                                 generate an Input Edge interrupt event.

                                                                 0b00 = Event masked.

                                                                 0b01 = Rising edge of event generates an interrupt.

                                                                 0b10 = Falling edge of event generates an
                                                                 interrupt.

                                                                 0b11 = Both edges of event generate an interrupt. */
        uint32_t devactive09_edge      : 2;  /**< [ 19: 18](SR/W) Configures the transitions on the DEVPACTIVE[9]
                                                                 input (WARM_RST) that generate an Input Edge
                                                                 interrupt event.

                                                                 0b00 = Event masked.

                                                                 0b01 = Rising edge of event generates an interrupt.

                                                                 0b10 = Falling edge of event generates an
                                                                 interrupt.

                                                                 0b11 = Both edges of event generate an interrupt. */
        uint32_t devactive08_edge      : 2;  /**< [ 17: 16](SR/W) Configures the transitions on the DEVPACTIVE[8]
                                                                 input (ON) that generate an Input Edge interrupt
                                                                 event.

                                                                 0b00 = Event masked.

                                                                 0b01 = Rising edge of event generates an interrupt.

                                                                 0b10 = Falling edge of event generates an
                                                                 interrupt.

                                                                 0b11 = Both edges of event generate an interrupt. */
        uint32_t devactive07_edge      : 2;  /**< [ 15: 14](SR/W) Configures the transitions on the DEVPACTIVE[7]
                                                                 input (ON) that generate an Input Edge interrupt
                                                                 event.

                                                                 0b00 = Event masked.

                                                                 0b01 = Rising edge of event generates an interrupt.

                                                                 0b10 = Falling edge of event generates an
                                                                 interrupt.

                                                                 0b11 = Both edges of event generate an interrupt. */
        uint32_t reserved_12_13        : 2;
        uint32_t devactive05_edge      : 2;  /**< [ 11: 10](SR/W) Configures the transitions on the DEVPACTIVE[5]
                                                                 input (ON) that generate an Input Edge interrupt
                                                                 event.

                                                                 0b00 = Event masked.

                                                                 0b01 = Rising edge of event generates an interrupt.

                                                                 0b10 = Falling edge of event generates an
                                                                 interrupt.

                                                                 0b11 = Both edges of event generate an interrupt. */
        uint32_t reserved_4_9          : 6;
        uint32_t devactive01_edge      : 2;  /**< [  3:  2](SR/W) Configures the transitions on the DEVPACTIVE[1]
                                                                 input (OFF_EMU) that generate an Input Edge
                                                                 interrupt event.

                                                                 0b00 = Event masked.

                                                                 0b01 = Rising edge of event generates an interrupt.

                                                                 0b10 = Falling edge of event generates an
                                                                 interrupt.

                                                                 0b11 = Both edges of event generate an interrupt. */
        uint32_t reserved_0_1          : 2;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_1          : 2;
        uint32_t devactive01_edge      : 2;  /**< [  3:  2](SR/W) Configures the transitions on the DEVPACTIVE[1]
                                                                 input (OFF_EMU) that generate an Input Edge
                                                                 interrupt event.

                                                                 0b00 = Event masked.

                                                                 0b01 = Rising edge of event generates an interrupt.

                                                                 0b10 = Falling edge of event generates an
                                                                 interrupt.

                                                                 0b11 = Both edges of event generate an interrupt. */
        uint32_t reserved_4_9          : 6;
        uint32_t devactive05_edge      : 2;  /**< [ 11: 10](SR/W) Configures the transitions on the DEVPACTIVE[5]
                                                                 input (ON) that generate an Input Edge interrupt
                                                                 event.

                                                                 0b00 = Event masked.

                                                                 0b01 = Rising edge of event generates an interrupt.

                                                                 0b10 = Falling edge of event generates an
                                                                 interrupt.

                                                                 0b11 = Both edges of event generate an interrupt. */
        uint32_t reserved_12_13        : 2;
        uint32_t devactive07_edge      : 2;  /**< [ 15: 14](SR/W) Configures the transitions on the DEVPACTIVE[7]
                                                                 input (ON) that generate an Input Edge interrupt
                                                                 event.

                                                                 0b00 = Event masked.

                                                                 0b01 = Rising edge of event generates an interrupt.

                                                                 0b10 = Falling edge of event generates an
                                                                 interrupt.

                                                                 0b11 = Both edges of event generate an interrupt. */
        uint32_t devactive08_edge      : 2;  /**< [ 17: 16](SR/W) Configures the transitions on the DEVPACTIVE[8]
                                                                 input (ON) that generate an Input Edge interrupt
                                                                 event.

                                                                 0b00 = Event masked.

                                                                 0b01 = Rising edge of event generates an interrupt.

                                                                 0b10 = Falling edge of event generates an
                                                                 interrupt.

                                                                 0b11 = Both edges of event generate an interrupt. */
        uint32_t devactive09_edge      : 2;  /**< [ 19: 18](SR/W) Configures the transitions on the DEVPACTIVE[9]
                                                                 input (WARM_RST) that generate an Input Edge
                                                                 interrupt event.

                                                                 0b00 = Event masked.

                                                                 0b01 = Rising edge of event generates an interrupt.

                                                                 0b10 = Falling edge of event generates an
                                                                 interrupt.

                                                                 0b11 = Both edges of event generate an interrupt. */
        uint32_t devactive10_edge      : 2;  /**< [ 21: 20](SR/W) Configures the transitions on the
                                                                 DEVPACTIVE[10] input (DBG_RECOV) that
                                                                 generate an Input Edge interrupt event.

                                                                 0b00 = Event masked.

                                                                 0b01 = Rising edge of event generates an interrupt.

                                                                 0b10 = Falling edge of event generates an
                                                                 interrupt.

                                                                 0b11 = Both edges of event generate an interrupt. */
        uint32_t reserved_22_31        : 10;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_core_ppu_iesr_s cn; */
};
typedef union cavm_dsuubx_core_ppu_iesr cavm_dsuubx_core_ppu_iesr_t;

static inline uint64_t CAVM_DSUUBX_CORE_PPU_IESR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CORE_PPU_IESR(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0080040ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CORE_PPU_IESR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CORE_PPU_IESR(a) cavm_dsuubx_core_ppu_iesr_t
#define bustype_CAVM_DSUUBX_CORE_PPU_IESR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CORE_PPU_IESR(a) "DSUUBX_CORE_PPU_IESR"
#define device_bar_CAVM_DSUUBX_CORE_PPU_IESR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CORE_PPU_IESR(a) (a)
#define arguments_CAVM_DSUUBX_CORE_PPU_IESR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_core_ppu_iidr
 *
 * DSUUB Core Implementation Identification Register
 * This register provides information about the implementer and implementation of the PPU.
 */
union cavm_dsuubx_core_ppu_iidr
{
    uint32_t u;
    struct cavm_dsuubx_core_ppu_iidr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t product_id            : 12; /**< [ 31: 20](SRO) Value identifying the PPU part.

                                                                 0b000010110110 = Core Power Policy Unit. */
        uint32_t variant               : 4;  /**< [ 19: 16](SRO) Value used to distinguish product variants, or
                                                                 major revisions of the product.

                                                                 0b0000 = Product variant r0p0.

                                                                 0b0001 = Product variant r1p0. */
        uint32_t revision              : 4;  /**< [ 15: 12](SRO) Value used to distinguish minor revisions of
                                                                 the product.

                                                                 0b0000 = No ECO fixes. */
        uint32_t implementer           : 12; /**< [ 11:  0](SRO) Implementer identification.

                                                                 0b010000111011 = Arm Limited. */
#else /* Word 0 - Little Endian */
        uint32_t implementer           : 12; /**< [ 11:  0](SRO) Implementer identification.

                                                                 0b010000111011 = Arm Limited. */
        uint32_t revision              : 4;  /**< [ 15: 12](SRO) Value used to distinguish minor revisions of
                                                                 the product.

                                                                 0b0000 = No ECO fixes. */
        uint32_t variant               : 4;  /**< [ 19: 16](SRO) Value used to distinguish product variants, or
                                                                 major revisions of the product.

                                                                 0b0000 = Product variant r0p0.

                                                                 0b0001 = Product variant r1p0. */
        uint32_t product_id            : 12; /**< [ 31: 20](SRO) Value identifying the PPU part.

                                                                 0b000010110110 = Core Power Policy Unit. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_core_ppu_iidr_s cn; */
};
typedef union cavm_dsuubx_core_ppu_iidr cavm_dsuubx_core_ppu_iidr_t;

static inline uint64_t CAVM_DSUUBX_CORE_PPU_IIDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CORE_PPU_IIDR(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0080fc8ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CORE_PPU_IIDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CORE_PPU_IIDR(a) cavm_dsuubx_core_ppu_iidr_t
#define bustype_CAVM_DSUUBX_CORE_PPU_IIDR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CORE_PPU_IIDR(a) "DSUUBX_CORE_PPU_IIDR"
#define device_bar_CAVM_DSUUBX_CORE_PPU_IIDR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CORE_PPU_IIDR(a) (a)
#define arguments_CAVM_DSUUBX_CORE_PPU_IIDR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_core_ppu_imr
 *
 * DSUUB Core Interrupt Mask Register
 * This register controls the events that assert the interrupt output. Additional event
 * masking controls
 * are in the Additional Interrupt Mask Register (DSUUB_PPU_AIMR), Input Edge
 * Sensitivity Register (DSUUB_
 * PPU_IESR), and the Operating Mode Active Edge Sensitivity Register (DSUUB_PPU_OPSR).
 *
 * When an interrupt event is masked an occurrence of the event does not set the corresponding bit
 * in the interrupt status register.
 */
union cavm_dsuubx_core_ppu_imr
{
    uint32_t u;
    struct cavm_dsuubx_core_ppu_imr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_6_31         : 26;
        uint32_t locked_irq_mask       : 1;  /**< [  5:  5](SR/W) Locked event mask

                                                                 0 = Locked event enabled.

                                                                 1 = Locked event masked. */
        uint32_t emu_deny_irq_mask     : 1;  /**< [  4:  4](SR/W) Emulation transition denial event mask

                                                                 0 = Emulation transition denial event enabled.

                                                                 1 = Emulation transition denial event masked. */
        uint32_t emu_accept_irq_mask   : 1;  /**< [  3:  3](SR/W) Emulation transition acceptance event mask

                                                                 0 = Emulation transition acceptance event
                                                                 enabled.

                                                                 1 = Emulation transition acceptance event
                                                                 masked. */
        uint32_t sta_deny_irq_mask     : 1;  /**< [  2:  2](SR/W) Static transition denial event mask

                                                                 0 = Static transition denial event enabled.

                                                                 1 = Static transition denial event masked. */
        uint32_t sta_accept_irq_mask   : 1;  /**< [  1:  1](SR/W) Static transition acceptance event mask

                                                                 0 = Static transition acceptance event
                                                                 enabled.

                                                                 1 = Static transition acceptance event
                                                                 masked. */
        uint32_t sta_policy_trn_irq_mask : 1;/**< [  0:  0](SR/W) Static full policy transition completion event
                                                                 mask

                                                                 0 = Static full policy transition completion
                                                                 event enabled.

                                                                 1 = Static full policy transition completion
                                                                 event masked. */
#else /* Word 0 - Little Endian */
        uint32_t sta_policy_trn_irq_mask : 1;/**< [  0:  0](SR/W) Static full policy transition completion event
                                                                 mask

                                                                 0 = Static full policy transition completion
                                                                 event enabled.

                                                                 1 = Static full policy transition completion
                                                                 event masked. */
        uint32_t sta_accept_irq_mask   : 1;  /**< [  1:  1](SR/W) Static transition acceptance event mask

                                                                 0 = Static transition acceptance event
                                                                 enabled.

                                                                 1 = Static transition acceptance event
                                                                 masked. */
        uint32_t sta_deny_irq_mask     : 1;  /**< [  2:  2](SR/W) Static transition denial event mask

                                                                 0 = Static transition denial event enabled.

                                                                 1 = Static transition denial event masked. */
        uint32_t emu_accept_irq_mask   : 1;  /**< [  3:  3](SR/W) Emulation transition acceptance event mask

                                                                 0 = Emulation transition acceptance event
                                                                 enabled.

                                                                 1 = Emulation transition acceptance event
                                                                 masked. */
        uint32_t emu_deny_irq_mask     : 1;  /**< [  4:  4](SR/W) Emulation transition denial event mask

                                                                 0 = Emulation transition denial event enabled.

                                                                 1 = Emulation transition denial event masked. */
        uint32_t locked_irq_mask       : 1;  /**< [  5:  5](SR/W) Locked event mask

                                                                 0 = Locked event enabled.

                                                                 1 = Locked event masked. */
        uint32_t reserved_6_31         : 26;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_core_ppu_imr_s cn; */
};
typedef union cavm_dsuubx_core_ppu_imr cavm_dsuubx_core_ppu_imr_t;

static inline uint64_t CAVM_DSUUBX_CORE_PPU_IMR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CORE_PPU_IMR(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0080030ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CORE_PPU_IMR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CORE_PPU_IMR(a) cavm_dsuubx_core_ppu_imr_t
#define bustype_CAVM_DSUUBX_CORE_PPU_IMR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CORE_PPU_IMR(a) "DSUUBX_CORE_PPU_IMR"
#define device_bar_CAVM_DSUUBX_CORE_PPU_IMR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CORE_PPU_IMR(a) (a)
#define arguments_CAVM_DSUUBX_CORE_PPU_IMR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_core_ppu_isr
 *
 * DSUUB Core Interrupt Status Register
 * This register contains information about events causing the assertion of the
 * interrupt output. It is
 * also used to clear interrupt events.
 *
 * A bit set to 1 indicates the event asserted the interrupt output. Multiple events
 * can be active at
 * the same time. When an interrupt event is masked an occurrence of that event does not set the
 * status bit.
 *
 * A write of 1 to an event bit clears that event. A write of 0 to a bit has no
 * effect. The interrupt
 * output stays HIGH until all status bits in the Interrupt Status Register (PPU_ISR)
 * and the Additional
 * Interrupt Status Register (PPU_AISR) are 0b0.
 *
 * When the OTHER_IRQ bit is set, this indicates an event from the Additional Interrupt Status
 * Register (PPU_AISR) has caused the interrupt output to be asserted. This bit cannot be cleared by
 * writing to this register. It must be cleared by writing to the active event in the
 * Additional Interrupt
 * Status Register (PPU_AISR).
 */
union cavm_dsuubx_core_ppu_isr
{
    uint32_t u;
    struct cavm_dsuubx_core_ppu_isr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_19_31        : 13;
        uint32_t pwr_active_edge_irq10 : 1;  /**< [ 18: 18](SR/W1C/H) Indicates if power mode DEVPACTIVE[10]
                                                                 input caused the input edge event.

                                                                 0 = DEVPACTIVE[10] input (DBG_RECOV)
                                                                 did not assert the interrupt output.

                                                                 1 = DEVPACTIVE[10] input (DBG_RECOV)
                                                                 asserted the interrupt output. */
        uint32_t pwr_active_edge_irq9  : 1;  /**< [ 17: 17](SR/W1C/H) Indicates if power mode DEVPACTIVE[9] input
                                                                 caused the input edge event.

                                                                 0 = DEVPACTIVE[9] input (WARM_RST) did
                                                                 not assert the interrupt output.

                                                                 1 = DEVPACTIVE[9] input (WARM_RST)
                                                                 asserted the interrupt output. */
        uint32_t pwr_active_edge_irq8  : 1;  /**< [ 16: 16](SR/W1C/H) Indicates if power mode DEVPACTIVE[8] input
                                                                 caused the input edge event.

                                                                 0 = DEVPACTIVE[8] input (ON) did not
                                                                 assert the interrupt output.

                                                                 1 = DEVPACTIVE[8] input (ON) asserted the
                                                                 interrupt output. */
        uint32_t pwr_active_edge_irq7  : 1;  /**< [ 15: 15](SR/W1C/H) Indicates if power mode DEVPACTIVE[7] input
                                                                 caused the input edge event.

                                                                 0 = DEVPACTIVE[7] input (FUNC_RET) did
                                                                 not assert the interrupt output.

                                                                 1 = DEVPACTIVE[7] input (FUNC_RET)
                                                                 asserted the interrupt output. */
        uint32_t reserved_14           : 1;
        uint32_t pwr_active_edge_irq5  : 1;  /**< [ 13: 13](SR/W1C/H) Indicates if power mode DEVPACTIVE[5] input
                                                                 caused the input edge event.

                                                                 0 = DEVPACTIVE[5] input (FULL_RET) did
                                                                 not assert the interrupt output.

                                                                 1 = DEVPACTIVE[5] input (FULL_RET)
                                                                 asserted the interrupt output. */
        uint32_t reserved_10_12        : 3;
        uint32_t pwr_active_edge_irq1  : 1;  /**< [  9:  9](SR/W1C/H) Indicates if power mode DEVPACTIVE[1] input
                                                                 caused the input edge event.

                                                                 0 = DEVPACTIVE[1] input (OFF_EMU) did
                                                                 not assert the interrupt output.

                                                                 1 = DEVPACTIVE[1] input (OFF_EMU)
                                                                 asserted the interrupt output. */
        uint32_t reserved_8            : 1;
        uint32_t other_irq             : 1;  /**< [  7:  7](SRO/H) Indicates there is an interrupt event pending in
                                                                 the Additional Interrupt Status Register (PPU_
                                                                 AISR).

                                                                 0 = No interrupt pending in PPU_AISR.

                                                                 1 = Interrupt pending in PPU_AISR. */
        uint32_t reserved_6            : 1;
        uint32_t locked_irq            : 1;  /**< [  5:  5](SR/W1C/H) Locked event status.

                                                                 0 = No locked event.

                                                                 1 = A locked event asserted the interrupt
                                                                 output. */
        uint32_t emu_deny_irq          : 1;  /**< [  4:  4](SR/W1C/H) Emulated transition denial event status.

                                                                 0 = No emulated transition denial event.

                                                                 1 = An emulated transition denial event
                                                                 asserted the interrupt output. */
        uint32_t emu_accept_irq        : 1;  /**< [  3:  3](SR/W1C/H) Emulated transition acceptance event status.

                                                                 0 = No emulated transition acceptance
                                                                 event.

                                                                 1 = An emulated transition acceptance event
                                                                 asserted the interrupt output. */
        uint32_t sta_deny_irq          : 1;  /**< [  2:  2](SR/W1C/H) Static transition denial event status.

                                                                 0 = No static transition denial event.

                                                                 1 = A static transition denial event asserted
                                                                 the interrupt output. */
        uint32_t sta_accept_irq        : 1;  /**< [  1:  1](SR/W1C/H) Static transition acceptance event status.

                                                                 0 = No static transition acceptance event.

                                                                 1 = A static transition acceptance event
                                                                 asserted the interrupt output. */
        uint32_t sta_policy_trn_irq    : 1;  /**< [  0:  0](SR/W1C/H) Static full policy transition completion event
                                                                 status.

                                                                 0 = No static full policy transition
                                                                 completion event.

                                                                 1 = A static full policy transition completion
                                                                 event asserted the interrupt output. */
#else /* Word 0 - Little Endian */
        uint32_t sta_policy_trn_irq    : 1;  /**< [  0:  0](SR/W1C/H) Static full policy transition completion event
                                                                 status.

                                                                 0 = No static full policy transition
                                                                 completion event.

                                                                 1 = A static full policy transition completion
                                                                 event asserted the interrupt output. */
        uint32_t sta_accept_irq        : 1;  /**< [  1:  1](SR/W1C/H) Static transition acceptance event status.

                                                                 0 = No static transition acceptance event.

                                                                 1 = A static transition acceptance event
                                                                 asserted the interrupt output. */
        uint32_t sta_deny_irq          : 1;  /**< [  2:  2](SR/W1C/H) Static transition denial event status.

                                                                 0 = No static transition denial event.

                                                                 1 = A static transition denial event asserted
                                                                 the interrupt output. */
        uint32_t emu_accept_irq        : 1;  /**< [  3:  3](SR/W1C/H) Emulated transition acceptance event status.

                                                                 0 = No emulated transition acceptance
                                                                 event.

                                                                 1 = An emulated transition acceptance event
                                                                 asserted the interrupt output. */
        uint32_t emu_deny_irq          : 1;  /**< [  4:  4](SR/W1C/H) Emulated transition denial event status.

                                                                 0 = No emulated transition denial event.

                                                                 1 = An emulated transition denial event
                                                                 asserted the interrupt output. */
        uint32_t locked_irq            : 1;  /**< [  5:  5](SR/W1C/H) Locked event status.

                                                                 0 = No locked event.

                                                                 1 = A locked event asserted the interrupt
                                                                 output. */
        uint32_t reserved_6            : 1;
        uint32_t other_irq             : 1;  /**< [  7:  7](SRO/H) Indicates there is an interrupt event pending in
                                                                 the Additional Interrupt Status Register (PPU_
                                                                 AISR).

                                                                 0 = No interrupt pending in PPU_AISR.

                                                                 1 = Interrupt pending in PPU_AISR. */
        uint32_t reserved_8            : 1;
        uint32_t pwr_active_edge_irq1  : 1;  /**< [  9:  9](SR/W1C/H) Indicates if power mode DEVPACTIVE[1] input
                                                                 caused the input edge event.

                                                                 0 = DEVPACTIVE[1] input (OFF_EMU) did
                                                                 not assert the interrupt output.

                                                                 1 = DEVPACTIVE[1] input (OFF_EMU)
                                                                 asserted the interrupt output. */
        uint32_t reserved_10_12        : 3;
        uint32_t pwr_active_edge_irq5  : 1;  /**< [ 13: 13](SR/W1C/H) Indicates if power mode DEVPACTIVE[5] input
                                                                 caused the input edge event.

                                                                 0 = DEVPACTIVE[5] input (FULL_RET) did
                                                                 not assert the interrupt output.

                                                                 1 = DEVPACTIVE[5] input (FULL_RET)
                                                                 asserted the interrupt output. */
        uint32_t reserved_14           : 1;
        uint32_t pwr_active_edge_irq7  : 1;  /**< [ 15: 15](SR/W1C/H) Indicates if power mode DEVPACTIVE[7] input
                                                                 caused the input edge event.

                                                                 0 = DEVPACTIVE[7] input (FUNC_RET) did
                                                                 not assert the interrupt output.

                                                                 1 = DEVPACTIVE[7] input (FUNC_RET)
                                                                 asserted the interrupt output. */
        uint32_t pwr_active_edge_irq8  : 1;  /**< [ 16: 16](SR/W1C/H) Indicates if power mode DEVPACTIVE[8] input
                                                                 caused the input edge event.

                                                                 0 = DEVPACTIVE[8] input (ON) did not
                                                                 assert the interrupt output.

                                                                 1 = DEVPACTIVE[8] input (ON) asserted the
                                                                 interrupt output. */
        uint32_t pwr_active_edge_irq9  : 1;  /**< [ 17: 17](SR/W1C/H) Indicates if power mode DEVPACTIVE[9] input
                                                                 caused the input edge event.

                                                                 0 = DEVPACTIVE[9] input (WARM_RST) did
                                                                 not assert the interrupt output.

                                                                 1 = DEVPACTIVE[9] input (WARM_RST)
                                                                 asserted the interrupt output. */
        uint32_t pwr_active_edge_irq10 : 1;  /**< [ 18: 18](SR/W1C/H) Indicates if power mode DEVPACTIVE[10]
                                                                 input caused the input edge event.

                                                                 0 = DEVPACTIVE[10] input (DBG_RECOV)
                                                                 did not assert the interrupt output.

                                                                 1 = DEVPACTIVE[10] input (DBG_RECOV)
                                                                 asserted the interrupt output. */
        uint32_t reserved_19_31        : 13;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_core_ppu_isr_s cn; */
};
typedef union cavm_dsuubx_core_ppu_isr cavm_dsuubx_core_ppu_isr_t;

static inline uint64_t CAVM_DSUUBX_CORE_PPU_ISR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CORE_PPU_ISR(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0080038ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CORE_PPU_ISR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CORE_PPU_ISR(a) cavm_dsuubx_core_ppu_isr_t
#define bustype_CAVM_DSUUBX_CORE_PPU_ISR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CORE_PPU_ISR(a) "DSUUBX_CORE_PPU_ISR"
#define device_bar_CAVM_DSUUBX_CORE_PPU_ISR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CORE_PPU_ISR(a) (a)
#define arguments_CAVM_DSUUBX_CORE_PPU_ISR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_core_ppu_memrr
 *
 * DSUUB Core Memory Retention RAM Configuration Register
 * This register controls bits [15:8] of the PCSMPSTATE output when in MEM_RET mode. These
 * outputs are used by the PCSM to configure the RAMs that are retained.
 */
union cavm_dsuubx_core_ppu_memrr
{
    uint32_t u;
    struct cavm_dsuubx_core_ppu_memrr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_core_ppu_memrr_s cn; */
};
typedef union cavm_dsuubx_core_ppu_memrr cavm_dsuubx_core_ppu_memrr_t;

static inline uint64_t CAVM_DSUUBX_CORE_PPU_MEMRR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CORE_PPU_MEMRR(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0080058ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CORE_PPU_MEMRR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CORE_PPU_MEMRR(a) cavm_dsuubx_core_ppu_memrr_t
#define bustype_CAVM_DSUUBX_CORE_PPU_MEMRR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CORE_PPU_MEMRR(a) "DSUUBX_CORE_PPU_MEMRR"
#define device_bar_CAVM_DSUUBX_CORE_PPU_MEMRR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CORE_PPU_MEMRR(a) (a)
#define arguments_CAVM_DSUUBX_CORE_PPU_MEMRR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_core_ppu_misr
 *
 * DSUUB Core Miscellaneous Input Current Status Register
 * This read-only register contains status reflecting the values of miscellaneous inputs.
 */
union cavm_dsuubx_core_ppu_misr
{
    uint32_t u;
    struct cavm_dsuubx_core_ppu_misr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_17_31        : 15;
        uint32_t devdeny_status        : 1;  /**< [ 16: 16](SRO/H) Status of the device interface DEVPDENY
                                                                 inputs.

                                                                 0 = DEVPDENY deasserted.

                                                                 1 = DEVPDENY asserted. */
        uint32_t reserved_9_15         : 7;
        uint32_t devaccept_status      : 1;  /**< [  8:  8](SRO/H) Status of the device interface DEVPACCEPT
                                                                 inputs.

                                                                 0 = DEVPACCEPT deasserted.

                                                                 1 = DEVPACCEPT asserted. */
        uint32_t reserved_1_7          : 7;
        uint32_t pcsmpaccept_status    : 1;  /**< [  0:  0](SRO/H) Status of the PCSMPACCEPT inputs.

                                                                 0 = PCSMPACCEPT deasserted.

                                                                 1 = PCSMPACCEPT asserted. */
#else /* Word 0 - Little Endian */
        uint32_t pcsmpaccept_status    : 1;  /**< [  0:  0](SRO/H) Status of the PCSMPACCEPT inputs.

                                                                 0 = PCSMPACCEPT deasserted.

                                                                 1 = PCSMPACCEPT asserted. */
        uint32_t reserved_1_7          : 7;
        uint32_t devaccept_status      : 1;  /**< [  8:  8](SRO/H) Status of the device interface DEVPACCEPT
                                                                 inputs.

                                                                 0 = DEVPACCEPT deasserted.

                                                                 1 = DEVPACCEPT asserted. */
        uint32_t reserved_9_15         : 7;
        uint32_t devdeny_status        : 1;  /**< [ 16: 16](SRO/H) Status of the device interface DEVPDENY
                                                                 inputs.

                                                                 0 = DEVPDENY deasserted.

                                                                 1 = DEVPDENY asserted. */
        uint32_t reserved_17_31        : 15;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_core_ppu_misr_s cn; */
};
typedef union cavm_dsuubx_core_ppu_misr cavm_dsuubx_core_ppu_misr_t;

static inline uint64_t CAVM_DSUUBX_CORE_PPU_MISR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CORE_PPU_MISR(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0080014ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CORE_PPU_MISR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CORE_PPU_MISR(a) cavm_dsuubx_core_ppu_misr_t
#define bustype_CAVM_DSUUBX_CORE_PPU_MISR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CORE_PPU_MISR(a) "DSUUBX_CORE_PPU_MISR"
#define device_bar_CAVM_DSUUBX_CORE_PPU_MISR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CORE_PPU_MISR(a) (a)
#define arguments_CAVM_DSUUBX_CORE_PPU_MISR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_core_ppu_opsr
 *
 * DSUUB Core Input Edge Sensitivity Register
 * This register configures the transitions on the operating mode DEVPACTIVE inputs that generate
 * an Input Edge interrupt event.
 *
 * When an event is masked an occurrence of the event does not set the corresponding bit in the
 * interrupt status register.
 */
union cavm_dsuubx_core_ppu_opsr
{
    uint32_t u;
    struct cavm_dsuubx_core_ppu_opsr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_core_ppu_opsr_s cn; */
};
typedef union cavm_dsuubx_core_ppu_opsr cavm_dsuubx_core_ppu_opsr_t;

static inline uint64_t CAVM_DSUUBX_CORE_PPU_OPSR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CORE_PPU_OPSR(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0080044ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CORE_PPU_OPSR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CORE_PPU_OPSR(a) cavm_dsuubx_core_ppu_opsr_t
#define bustype_CAVM_DSUUBX_CORE_PPU_OPSR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CORE_PPU_OPSR(a) "DSUUBX_CORE_PPU_OPSR"
#define device_bar_CAVM_DSUUBX_CORE_PPU_OPSR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CORE_PPU_OPSR(a) (a)
#define arguments_CAVM_DSUUBX_CORE_PPU_OPSR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_core_ppu_pidr0
 *
 * DSUUB Core PPU Peripheral Identification Register 0
 * Provides CoreSight discovery information.
 */
union cavm_dsuubx_core_ppu_pidr0
{
    uint32_t u;
    struct cavm_dsuubx_core_ppu_pidr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t part_0                : 8;  /**< [  7:  0](SRO) Part number bits [7:0].

                                                                 0b11101000 = Core Power Policy Unit. Bits [7:0] of part
                                                                 number 0x4E8. */
#else /* Word 0 - Little Endian */
        uint32_t part_0                : 8;  /**< [  7:  0](SRO) Part number bits [7:0].

                                                                 0b11101000 = Core Power Policy Unit. Bits [7:0] of part
                                                                 number 0x4E8. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_core_ppu_pidr0_s cn; */
};
typedef union cavm_dsuubx_core_ppu_pidr0 cavm_dsuubx_core_ppu_pidr0_t;

static inline uint64_t CAVM_DSUUBX_CORE_PPU_PIDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CORE_PPU_PIDR0(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0080fe0ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CORE_PPU_PIDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CORE_PPU_PIDR0(a) cavm_dsuubx_core_ppu_pidr0_t
#define bustype_CAVM_DSUUBX_CORE_PPU_PIDR0(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CORE_PPU_PIDR0(a) "DSUUBX_CORE_PPU_PIDR0"
#define device_bar_CAVM_DSUUBX_CORE_PPU_PIDR0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CORE_PPU_PIDR0(a) (a)
#define arguments_CAVM_DSUUBX_CORE_PPU_PIDR0(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_core_ppu_pidr1
 *
 * DSUUB Core PPU Peripheral Identification Register 1
 * Provides CoreSight discovery information.
 */
union cavm_dsuubx_core_ppu_pidr1
{
    uint32_t u;
    struct cavm_dsuubx_core_ppu_pidr1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t des_0                 : 4;  /**< [  7:  4](SRO) JEP106 identification code bits [3:0].

                                                                 0b1011 = Arm Limited. Bits [3:0] of JEP106 identification code
                                                                 0x3B. */
        uint32_t part_1                : 4;  /**< [  3:  0](SRO) Part number bits [11:8].

                                                                 0b0100 = Core Power Policy Unit. Bits [11:8] of part number
                                                                 0x4E8. */
#else /* Word 0 - Little Endian */
        uint32_t part_1                : 4;  /**< [  3:  0](SRO) Part number bits [11:8].

                                                                 0b0100 = Core Power Policy Unit. Bits [11:8] of part number
                                                                 0x4E8. */
        uint32_t des_0                 : 4;  /**< [  7:  4](SRO) JEP106 identification code bits [3:0].

                                                                 0b1011 = Arm Limited. Bits [3:0] of JEP106 identification code
                                                                 0x3B. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_core_ppu_pidr1_s cn; */
};
typedef union cavm_dsuubx_core_ppu_pidr1 cavm_dsuubx_core_ppu_pidr1_t;

static inline uint64_t CAVM_DSUUBX_CORE_PPU_PIDR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CORE_PPU_PIDR1(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0080fe4ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CORE_PPU_PIDR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CORE_PPU_PIDR1(a) cavm_dsuubx_core_ppu_pidr1_t
#define bustype_CAVM_DSUUBX_CORE_PPU_PIDR1(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CORE_PPU_PIDR1(a) "DSUUBX_CORE_PPU_PIDR1"
#define device_bar_CAVM_DSUUBX_CORE_PPU_PIDR1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CORE_PPU_PIDR1(a) (a)
#define arguments_CAVM_DSUUBX_CORE_PPU_PIDR1(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_core_ppu_pidr2
 *
 * DSUUB Core PPU Peripheral Identification Register 2
 * Provides CoreSight discovery information.
 */
union cavm_dsuubx_core_ppu_pidr2
{
    uint32_t u;
    struct cavm_dsuubx_core_ppu_pidr2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t revision              : 4;  /**< [  7:  4](SRO) Component revision.

                                                                 0b0000 = Revision r0p0.

                                                                 0b0001 = Revision r1p0. */
        uint32_t jedec                 : 1;  /**< [  3:  3](SRO) JEDEC assignee.

                                                                 1 = JEDEC-assignee values is used. */
        uint32_t des_1                 : 3;  /**< [  2:  0](SRO) JEP106 identification code bits [6:4].

                                                                 0b011 = Arm Limited. Bits [6:4] of JEP106 identification code
                                                                 0x3B. */
#else /* Word 0 - Little Endian */
        uint32_t des_1                 : 3;  /**< [  2:  0](SRO) JEP106 identification code bits [6:4].

                                                                 0b011 = Arm Limited. Bits [6:4] of JEP106 identification code
                                                                 0x3B. */
        uint32_t jedec                 : 1;  /**< [  3:  3](SRO) JEDEC assignee.

                                                                 1 = JEDEC-assignee values is used. */
        uint32_t revision              : 4;  /**< [  7:  4](SRO) Component revision.

                                                                 0b0000 = Revision r0p0.

                                                                 0b0001 = Revision r1p0. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_core_ppu_pidr2_s cn; */
};
typedef union cavm_dsuubx_core_ppu_pidr2 cavm_dsuubx_core_ppu_pidr2_t;

static inline uint64_t CAVM_DSUUBX_CORE_PPU_PIDR2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CORE_PPU_PIDR2(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0080fe8ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CORE_PPU_PIDR2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CORE_PPU_PIDR2(a) cavm_dsuubx_core_ppu_pidr2_t
#define bustype_CAVM_DSUUBX_CORE_PPU_PIDR2(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CORE_PPU_PIDR2(a) "DSUUBX_CORE_PPU_PIDR2"
#define device_bar_CAVM_DSUUBX_CORE_PPU_PIDR2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CORE_PPU_PIDR2(a) (a)
#define arguments_CAVM_DSUUBX_CORE_PPU_PIDR2(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_core_ppu_pidr3
 *
 * DSUUB Core PPU Peripheral Identification Register 3
 * Provides CoreSight discovery information.
 */
union cavm_dsuubx_core_ppu_pidr3
{
    uint32_t u;
    struct cavm_dsuubx_core_ppu_pidr3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t revand                : 4;  /**< [  7:  4](SRO) Minor errata fixes.

                                                                 0b0000 = No ECO fixes. */
        uint32_t cmod                  : 4;  /**< [  3:  0](SRO) Customer Modified.

                                                                 0b0000 = The component is not modified from the original
                                                                 design. */
#else /* Word 0 - Little Endian */
        uint32_t cmod                  : 4;  /**< [  3:  0](SRO) Customer Modified.

                                                                 0b0000 = The component is not modified from the original
                                                                 design. */
        uint32_t revand                : 4;  /**< [  7:  4](SRO) Minor errata fixes.

                                                                 0b0000 = No ECO fixes. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_core_ppu_pidr3_s cn; */
};
typedef union cavm_dsuubx_core_ppu_pidr3 cavm_dsuubx_core_ppu_pidr3_t;

static inline uint64_t CAVM_DSUUBX_CORE_PPU_PIDR3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CORE_PPU_PIDR3(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0080fecll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CORE_PPU_PIDR3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CORE_PPU_PIDR3(a) cavm_dsuubx_core_ppu_pidr3_t
#define bustype_CAVM_DSUUBX_CORE_PPU_PIDR3(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CORE_PPU_PIDR3(a) "DSUUBX_CORE_PPU_PIDR3"
#define device_bar_CAVM_DSUUBX_CORE_PPU_PIDR3(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CORE_PPU_PIDR3(a) (a)
#define arguments_CAVM_DSUUBX_CORE_PPU_PIDR3(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_core_ppu_pidr4
 *
 * DSUUB Core PPU Peripheral Identification Register 4
 * Provides CoreSight discovery information.
 */
union cavm_dsuubx_core_ppu_pidr4
{
    uint32_t u;
    struct cavm_dsuubx_core_ppu_pidr4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t size                  : 4;  /**< [  7:  4](SRO) 4KB count.

                                                                 0b0000 = The component uses a single 4KB block. */
        uint32_t des_2                 : 4;  /**< [  3:  0](SRO) JEP106 continuation code.

                                                                 0b0100 = Arm Limited. Number of 0x7F bytes in full JEP106 code 0x7F
                                                                 0x7F 0x7F 0x7F 0x3B. */
#else /* Word 0 - Little Endian */
        uint32_t des_2                 : 4;  /**< [  3:  0](SRO) JEP106 continuation code.

                                                                 0b0100 = Arm Limited. Number of 0x7F bytes in full JEP106 code 0x7F
                                                                 0x7F 0x7F 0x7F 0x3B. */
        uint32_t size                  : 4;  /**< [  7:  4](SRO) 4KB count.

                                                                 0b0000 = The component uses a single 4KB block. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_core_ppu_pidr4_s cn; */
};
typedef union cavm_dsuubx_core_ppu_pidr4 cavm_dsuubx_core_ppu_pidr4_t;

static inline uint64_t CAVM_DSUUBX_CORE_PPU_PIDR4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CORE_PPU_PIDR4(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0080fd0ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CORE_PPU_PIDR4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CORE_PPU_PIDR4(a) cavm_dsuubx_core_ppu_pidr4_t
#define bustype_CAVM_DSUUBX_CORE_PPU_PIDR4(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CORE_PPU_PIDR4(a) "DSUUBX_CORE_PPU_PIDR4"
#define device_bar_CAVM_DSUUBX_CORE_PPU_PIDR4(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CORE_PPU_PIDR4(a) (a)
#define arguments_CAVM_DSUUBX_CORE_PPU_PIDR4(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_core_ppu_pidr5
 *
 * DSUUB Core PPU Peripheral Identification Register 5
 * Provides CoreSight discovery information.
 */
union cavm_dsuubx_core_ppu_pidr5
{
    uint32_t u;
    struct cavm_dsuubx_core_ppu_pidr5_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_core_ppu_pidr5_s cn; */
};
typedef union cavm_dsuubx_core_ppu_pidr5 cavm_dsuubx_core_ppu_pidr5_t;

static inline uint64_t CAVM_DSUUBX_CORE_PPU_PIDR5(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CORE_PPU_PIDR5(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0080fd4ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CORE_PPU_PIDR5", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CORE_PPU_PIDR5(a) cavm_dsuubx_core_ppu_pidr5_t
#define bustype_CAVM_DSUUBX_CORE_PPU_PIDR5(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CORE_PPU_PIDR5(a) "DSUUBX_CORE_PPU_PIDR5"
#define device_bar_CAVM_DSUUBX_CORE_PPU_PIDR5(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CORE_PPU_PIDR5(a) (a)
#define arguments_CAVM_DSUUBX_CORE_PPU_PIDR5(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_core_ppu_pidr6
 *
 * DSUUB Core PPU Peripheral Identification Register 6
 * Provides CoreSight discovery information.
 */
union cavm_dsuubx_core_ppu_pidr6
{
    uint32_t u;
    struct cavm_dsuubx_core_ppu_pidr6_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_core_ppu_pidr6_s cn; */
};
typedef union cavm_dsuubx_core_ppu_pidr6 cavm_dsuubx_core_ppu_pidr6_t;

static inline uint64_t CAVM_DSUUBX_CORE_PPU_PIDR6(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CORE_PPU_PIDR6(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0080fd8ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CORE_PPU_PIDR6", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CORE_PPU_PIDR6(a) cavm_dsuubx_core_ppu_pidr6_t
#define bustype_CAVM_DSUUBX_CORE_PPU_PIDR6(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CORE_PPU_PIDR6(a) "DSUUBX_CORE_PPU_PIDR6"
#define device_bar_CAVM_DSUUBX_CORE_PPU_PIDR6(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CORE_PPU_PIDR6(a) (a)
#define arguments_CAVM_DSUUBX_CORE_PPU_PIDR6(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_core_ppu_pidr7
 *
 * DSUUB Core PPU Peripheral Identification Register 7
 * Provides CoreSight discovery information.
 */
union cavm_dsuubx_core_ppu_pidr7
{
    uint32_t u;
    struct cavm_dsuubx_core_ppu_pidr7_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_core_ppu_pidr7_s cn; */
};
typedef union cavm_dsuubx_core_ppu_pidr7 cavm_dsuubx_core_ppu_pidr7_t;

static inline uint64_t CAVM_DSUUBX_CORE_PPU_PIDR7(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CORE_PPU_PIDR7(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0080fdcll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CORE_PPU_PIDR7", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CORE_PPU_PIDR7(a) cavm_dsuubx_core_ppu_pidr7_t
#define bustype_CAVM_DSUUBX_CORE_PPU_PIDR7(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CORE_PPU_PIDR7(a) "DSUUBX_CORE_PPU_PIDR7"
#define device_bar_CAVM_DSUUBX_CORE_PPU_PIDR7(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CORE_PPU_PIDR7(a) (a)
#define arguments_CAVM_DSUUBX_CORE_PPU_PIDR7(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_core_ppu_pmer
 *
 * DSUUB Core Power Mode Emulation Enable Register
 * This register allows software to enable entry into emulated modes.
 */
union cavm_dsuubx_core_ppu_pmer
{
    uint32_t u;
    struct cavm_dsuubx_core_ppu_pmer_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_1_31         : 31;
        uint32_t emu_en                : 1;  /**< [  0:  0](SR/W) Power mode emulation enable.

                                                                 0 = Power mode emulation disabled.

                                                                 1 = Power mode emulation enabled. Transitions to OFF
                                                                 and MEM_RET instead transition to OFF_EMU and
                                                                 MEM_RET_EMU. */
#else /* Word 0 - Little Endian */
        uint32_t emu_en                : 1;  /**< [  0:  0](SR/W) Power mode emulation enable.

                                                                 0 = Power mode emulation disabled.

                                                                 1 = Power mode emulation enabled. Transitions to OFF
                                                                 and MEM_RET instead transition to OFF_EMU and
                                                                 MEM_RET_EMU. */
        uint32_t reserved_1_31         : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_core_ppu_pmer_s cn; */
};
typedef union cavm_dsuubx_core_ppu_pmer cavm_dsuubx_core_ppu_pmer_t;

static inline uint64_t CAVM_DSUUBX_CORE_PPU_PMER(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CORE_PPU_PMER(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0080004ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CORE_PPU_PMER", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CORE_PPU_PMER(a) cavm_dsuubx_core_ppu_pmer_t
#define bustype_CAVM_DSUUBX_CORE_PPU_PMER(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CORE_PPU_PMER(a) "DSUUBX_CORE_PPU_PMER"
#define device_bar_CAVM_DSUUBX_CORE_PPU_PMER(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CORE_PPU_PMER(a) (a)
#define arguments_CAVM_DSUUBX_CORE_PPU_PMER(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_core_ppu_ptcr
 *
 * DSUUB Core Power Mode Transition Register
 * This register contains settings which affect the behaviour of certain power mode transitions.
 */
union cavm_dsuubx_core_ppu_ptcr
{
    uint32_t u;
    struct cavm_dsuubx_core_ppu_ptcr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_2_31         : 30;
        uint32_t dbg_recov_porst_en    : 1;  /**< [  1:  1](SR/W) Power-on reset behavior in DBG_RECOV.

                                                                 This bit should not be modified when the PPU
                                                                 is in DBG_RECOV or if the PPU is performing
                                                                 a transition, otherwise PPU behavior is
                                                                 UNPREDICTABLE.

                                                                 0 = DEVPORESETn is not asserted when in
                                                                 DBG_RECOV.

                                                                 1 = DEVPORESETn is asserted when in DBG_
                                                                 RECOV. */
        uint32_t warm_rst_devreqen     : 1;  /**< [  0:  0](SR/W) Device interface handshake behavior.

                                                                 This bit should not be modified when the PPU
                                                                 is in WARM_RST, or if the PPU is performing
                                                                 a transition, otherwise PPU behavior is
                                                                 UNPREDICTABLE.

                                                                 0 = The PPU does not perform a device
                                                                 interface handshake when transitioning
                                                                 between ON and WARM_RST.

                                                                 1 = The PPU performs a device interface
                                                                 handshake when transitioning between
                                                                 ON and WARM_RST. */
#else /* Word 0 - Little Endian */
        uint32_t warm_rst_devreqen     : 1;  /**< [  0:  0](SR/W) Device interface handshake behavior.

                                                                 This bit should not be modified when the PPU
                                                                 is in WARM_RST, or if the PPU is performing
                                                                 a transition, otherwise PPU behavior is
                                                                 UNPREDICTABLE.

                                                                 0 = The PPU does not perform a device
                                                                 interface handshake when transitioning
                                                                 between ON and WARM_RST.

                                                                 1 = The PPU performs a device interface
                                                                 handshake when transitioning between
                                                                 ON and WARM_RST. */
        uint32_t dbg_recov_porst_en    : 1;  /**< [  1:  1](SR/W) Power-on reset behavior in DBG_RECOV.

                                                                 This bit should not be modified when the PPU
                                                                 is in DBG_RECOV or if the PPU is performing
                                                                 a transition, otherwise PPU behavior is
                                                                 UNPREDICTABLE.

                                                                 0 = DEVPORESETn is not asserted when in
                                                                 DBG_RECOV.

                                                                 1 = DEVPORESETn is asserted when in DBG_
                                                                 RECOV. */
        uint32_t reserved_2_31         : 30;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_core_ppu_ptcr_s cn; */
};
typedef union cavm_dsuubx_core_ppu_ptcr cavm_dsuubx_core_ppu_ptcr_t;

static inline uint64_t CAVM_DSUUBX_CORE_PPU_PTCR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CORE_PPU_PTCR(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0080024ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CORE_PPU_PTCR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CORE_PPU_PTCR(a) cavm_dsuubx_core_ppu_ptcr_t
#define bustype_CAVM_DSUUBX_CORE_PPU_PTCR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CORE_PPU_PTCR(a) "DSUUBX_CORE_PPU_PTCR"
#define device_bar_CAVM_DSUUBX_CORE_PPU_PTCR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CORE_PPU_PTCR(a) (a)
#define arguments_CAVM_DSUUBX_CORE_PPU_PTCR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_core_ppu_pwcr
 *
 * DSUUB Core Power Configuration Register
 * This register controls enabling and disabling of hardware control inputs to the PPU.
 *
 * Before software programs the DEVREQEN bits it must configure the PPU for static
 * transitions and ensure the requested power mode has been reached, this means that no
 * further transitions can occur, otherwise behavior is UNPREDICTABLE.
 *
 * The PWR_DEVACTIVEEN and OP_DEVACTIVEEN fields in this register control the ability of the
 * DEVACTIVE inputs to initiate power mode transitions, but not the ability to generate input edge
 * interrupt events.
 */
union cavm_dsuubx_core_ppu_pwcr
{
    uint32_t u;
    struct cavm_dsuubx_core_ppu_pwcr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_19_31        : 13;
        uint32_t pwr_devactiveen10     : 1;  /**< [ 18: 18](SR/W) Enables the operating mode DEVPACTIVE[10]
                                                                 input.

                                                                 0 = DEVPACTIVE[10] input (DBG_RECOV)
                                                                 disabled.

                                                                 1 = DEVPACTIVE[10] input (DBG_RECOV)
                                                                 enabled. */
        uint32_t pwr_devactiveen9      : 1;  /**< [ 17: 17](SR/W) Enables the operating mode DEVPACTIVE[9]
                                                                 input.

                                                                 0 = DEVPACTIVE[9] input (WARM_RST)
                                                                 disabled.

                                                                 1 = DEVPACTIVE[9] input (WARM_RST)
                                                                 enabled. */
        uint32_t pwr_devactiveen8      : 1;  /**< [ 16: 16](SR/W) Enables the operating mode DEVPACTIVE[8]
                                                                 input.

                                                                 0 = DEVPACTIVE[8] input (ON) disabled.

                                                                 1 = DEVPACTIVE[8] input (ON) enabled. */
        uint32_t pwr_devactiveen7      : 1;  /**< [ 15: 15](SR/W) Enables the operating mode DEVPACTIVE[7]
                                                                 input.

                                                                 0 = DEVPACTIVE[7] input (FUNC_RET)
                                                                 disabled.

                                                                 1 = DEVPACTIVE[7] input (FUNC_RET)
                                                                 enabled. */
        uint32_t reserved_14           : 1;
        uint32_t pwr_devactiveen5      : 1;  /**< [ 13: 13](SR/W) Enables the operating mode DEVPACTIVE[5]
                                                                 input.

                                                                 0 = DEVPACTIVE[5] input (FULL_RET)
                                                                 disabled.

                                                                 1 = DEVPACTIVE[5] input (FULL_RET)
                                                                 enabled. */
        uint32_t reserved_10_12        : 3;
        uint32_t pwr_devactiveen1      : 1;  /**< [  9:  9](SR/W) Enables the operating mode DEVPACTIVE[1]
                                                                 input.

                                                                 0 = DEVPACTIVE[1] input (OFF_EMU)
                                                                 disabled.

                                                                 1 = DEVPACTIVE[1] input (OFF_EMU)
                                                                 enabled. */
        uint32_t reserved_1_8          : 8;
        uint32_t devreqen              : 1;  /**< [  0:  0](SR/W) Device interface handshake enable.

                                                                 0 = Device interface handshake disabled for
                                                                 transitions.

                                                                 1 = Device interface handshake enabled for
                                                                 transitions. */
#else /* Word 0 - Little Endian */
        uint32_t devreqen              : 1;  /**< [  0:  0](SR/W) Device interface handshake enable.

                                                                 0 = Device interface handshake disabled for
                                                                 transitions.

                                                                 1 = Device interface handshake enabled for
                                                                 transitions. */
        uint32_t reserved_1_8          : 8;
        uint32_t pwr_devactiveen1      : 1;  /**< [  9:  9](SR/W) Enables the operating mode DEVPACTIVE[1]
                                                                 input.

                                                                 0 = DEVPACTIVE[1] input (OFF_EMU)
                                                                 disabled.

                                                                 1 = DEVPACTIVE[1] input (OFF_EMU)
                                                                 enabled. */
        uint32_t reserved_10_12        : 3;
        uint32_t pwr_devactiveen5      : 1;  /**< [ 13: 13](SR/W) Enables the operating mode DEVPACTIVE[5]
                                                                 input.

                                                                 0 = DEVPACTIVE[5] input (FULL_RET)
                                                                 disabled.

                                                                 1 = DEVPACTIVE[5] input (FULL_RET)
                                                                 enabled. */
        uint32_t reserved_14           : 1;
        uint32_t pwr_devactiveen7      : 1;  /**< [ 15: 15](SR/W) Enables the operating mode DEVPACTIVE[7]
                                                                 input.

                                                                 0 = DEVPACTIVE[7] input (FUNC_RET)
                                                                 disabled.

                                                                 1 = DEVPACTIVE[7] input (FUNC_RET)
                                                                 enabled. */
        uint32_t pwr_devactiveen8      : 1;  /**< [ 16: 16](SR/W) Enables the operating mode DEVPACTIVE[8]
                                                                 input.

                                                                 0 = DEVPACTIVE[8] input (ON) disabled.

                                                                 1 = DEVPACTIVE[8] input (ON) enabled. */
        uint32_t pwr_devactiveen9      : 1;  /**< [ 17: 17](SR/W) Enables the operating mode DEVPACTIVE[9]
                                                                 input.

                                                                 0 = DEVPACTIVE[9] input (WARM_RST)
                                                                 disabled.

                                                                 1 = DEVPACTIVE[9] input (WARM_RST)
                                                                 enabled. */
        uint32_t pwr_devactiveen10     : 1;  /**< [ 18: 18](SR/W) Enables the operating mode DEVPACTIVE[10]
                                                                 input.

                                                                 0 = DEVPACTIVE[10] input (DBG_RECOV)
                                                                 disabled.

                                                                 1 = DEVPACTIVE[10] input (DBG_RECOV)
                                                                 enabled. */
        uint32_t reserved_19_31        : 13;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_core_ppu_pwcr_s cn; */
};
typedef union cavm_dsuubx_core_ppu_pwcr cavm_dsuubx_core_ppu_pwcr_t;

static inline uint64_t CAVM_DSUUBX_CORE_PPU_PWCR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CORE_PPU_PWCR(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0080020ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CORE_PPU_PWCR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CORE_PPU_PWCR(a) cavm_dsuubx_core_ppu_pwcr_t
#define bustype_CAVM_DSUUBX_CORE_PPU_PWCR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CORE_PPU_PWCR(a) "DSUUBX_CORE_PPU_PWCR"
#define device_bar_CAVM_DSUUBX_CORE_PPU_PWCR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CORE_PPU_PWCR(a) (a)
#define arguments_CAVM_DSUUBX_CORE_PPU_PWCR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_core_ppu_pwpr
 *
 * DSUUB Core Power Policy Register
 * This register enables software to program both power and operating mode policy. It also contains
 * related settings including the enable for dynamic transitions and the lock enable.
 *
 * This register does not reflect the current power mode value. The current power mode of the
 * domain is reflected in the Power Status Register (PPU_PWSR).
 */
union cavm_dsuubx_core_ppu_pwpr
{
    uint32_t u;
    struct cavm_dsuubx_core_ppu_pwpr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_13_31        : 19;
        uint32_t lock_en               : 1;  /**< [ 12: 12](SR/W) Lock enable bit.

                                                                 0 = Lock feature disabled.

                                                                 1 = Lock feature enabled. */
        uint32_t reserved_9_11         : 3;
        uint32_t pwr_dyn_en            : 1;  /**< [  8:  8](SR/W) Power mode dynamic transition enable.

                                                                 0 = Dynamic transitions disabled for power modes.

                                                                 1 = Dynamic transitions enabled for power modes,
                                                                 allowing transitions to be initiated by changes on
                                                                 power mode DEVACTIVE inputs. */
        uint32_t reserved_4_7          : 4;
        uint32_t pwr_policy            : 4;  /**< [  3:  0](SR/W) Power mode policy.

                                                                 When static power mode transitions are enabled, PWR_
                                                                 DYN_EN is set to 0b0, this is the target power mode for
                                                                 the PPU.

                                                                 When dynamic power mode transitions are enabled, PWR_
                                                                 DYN_EN is set to 0b1, this is the minimum power mode
                                                                 for the PPU.

                                                                 0b0000 = OFF. Logic off and RAM off.

                                                                 0b0001 = OFF_EMU. Emulated Off. Logic on with RAM
                                                                 on. This mode is used to emulate the functional
                                                                 condition of OFF without removing power.

                                                                 0b0101 = FULL_RET. Full Retention. Logic and RAM in
                                                                 retention.

                                                                 0b0111 = FUNC_RET. Functional Retention. Floating-point/
                                                                 Vector logic retained, rest of the core logic and
                                                                 RAM on, core is functional.

                                                                 0b1000 = ON. Logic on with RAM on, core is functional.

                                                                 0b1001 = WARM_RST. Warm Reset. Warm reset application
                                                                 with logic and RAM on.

                                                                 0b1010 = DBG_RECOV. Debug Recovery Reset. Warm reset
                                                                 application with logic and RAM on. */
#else /* Word 0 - Little Endian */
        uint32_t pwr_policy            : 4;  /**< [  3:  0](SR/W) Power mode policy.

                                                                 When static power mode transitions are enabled, PWR_
                                                                 DYN_EN is set to 0b0, this is the target power mode for
                                                                 the PPU.

                                                                 When dynamic power mode transitions are enabled, PWR_
                                                                 DYN_EN is set to 0b1, this is the minimum power mode
                                                                 for the PPU.

                                                                 0b0000 = OFF. Logic off and RAM off.

                                                                 0b0001 = OFF_EMU. Emulated Off. Logic on with RAM
                                                                 on. This mode is used to emulate the functional
                                                                 condition of OFF without removing power.

                                                                 0b0101 = FULL_RET. Full Retention. Logic and RAM in
                                                                 retention.

                                                                 0b0111 = FUNC_RET. Functional Retention. Floating-point/
                                                                 Vector logic retained, rest of the core logic and
                                                                 RAM on, core is functional.

                                                                 0b1000 = ON. Logic on with RAM on, core is functional.

                                                                 0b1001 = WARM_RST. Warm Reset. Warm reset application
                                                                 with logic and RAM on.

                                                                 0b1010 = DBG_RECOV. Debug Recovery Reset. Warm reset
                                                                 application with logic and RAM on. */
        uint32_t reserved_4_7          : 4;
        uint32_t pwr_dyn_en            : 1;  /**< [  8:  8](SR/W) Power mode dynamic transition enable.

                                                                 0 = Dynamic transitions disabled for power modes.

                                                                 1 = Dynamic transitions enabled for power modes,
                                                                 allowing transitions to be initiated by changes on
                                                                 power mode DEVACTIVE inputs. */
        uint32_t reserved_9_11         : 3;
        uint32_t lock_en               : 1;  /**< [ 12: 12](SR/W) Lock enable bit.

                                                                 0 = Lock feature disabled.

                                                                 1 = Lock feature enabled. */
        uint32_t reserved_13_31        : 19;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_core_ppu_pwpr_s cn; */
};
typedef union cavm_dsuubx_core_ppu_pwpr cavm_dsuubx_core_ppu_pwpr_t;

static inline uint64_t CAVM_DSUUBX_CORE_PPU_PWPR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CORE_PPU_PWPR(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0080000ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CORE_PPU_PWPR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CORE_PPU_PWPR(a) cavm_dsuubx_core_ppu_pwpr_t
#define bustype_CAVM_DSUUBX_CORE_PPU_PWPR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CORE_PPU_PWPR(a) "DSUUBX_CORE_PPU_PWPR"
#define device_bar_CAVM_DSUUBX_CORE_PPU_PWPR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CORE_PPU_PWPR(a) (a)
#define arguments_CAVM_DSUUBX_CORE_PPU_PWPR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_core_ppu_pwsr
 *
 * DSUUB Core Power Status Register
 * This read-only register contains status information for the power mode, operating mode, dynamic
 * transitions, and lock feature.
 */
union cavm_dsuubx_core_ppu_pwsr
{
    uint32_t u;
    struct cavm_dsuubx_core_ppu_pwsr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_13_31        : 19;
        uint32_t lock_status           : 1;  /**< [ 12: 12](SRO/H) Lock status.

                                                                 0 = The PPU is not locked in the current mode.

                                                                 1 = The PPU is locked in the current mode. */
        uint32_t reserved_9_11         : 3;
        uint32_t pwr_dyn_status        : 1;  /**< [  8:  8](SRO/H) Power mode dynamic transition status.

                                                                 There might be a delay in dynamic transitions
                                                                 becoming active or inactive if the PPU is
                                                                 transitioning when PPU_PWPR.DYN_EN is
                                                                 programmed.

                                                                 0 = Dynamic transitions disabled for power
                                                                 modes.

                                                                 1 = Dynamic transitions enabled for power
                                                                 modes. */
        uint32_t reserved_4_7          : 4;
        uint32_t pwr_status            : 4;  /**< [  3:  0](SRO/H) Power mode status.

                                                                 These bits reflect the current power mode of the
                                                                 PPU.

                                                                 0b0000 = OFF. Logic off and RAM off.

                                                                 0b0001 = OFF_EMU. Emulated Off. Logic on with
                                                                 RAM on. This mode is used to emulate
                                                                 the functional condition of OFF without
                                                                 removing power.

                                                                 0b0101 = FULL_RET. Full Retention. Logic and RAM in
                                                                 retention.

                                                                 0b0111 = FUNC_RET. Functional Retention. Floating-
                                                                 point/Vector logic retained, rest of the core
                                                                 logic and RAM on, core is functional.

                                                                 0b1000 = ON. Logic on with RAM on, core is functional.

                                                                 0b1001 = WARM_RST. Warm Reset. Warm reset
                                                                 application with logic and RAM on.

                                                                 0b1010 = DBG_RECOV. Debug Recovery Reset. Warm
                                                                 reset application with logic and RAM on. */
#else /* Word 0 - Little Endian */
        uint32_t pwr_status            : 4;  /**< [  3:  0](SRO/H) Power mode status.

                                                                 These bits reflect the current power mode of the
                                                                 PPU.

                                                                 0b0000 = OFF. Logic off and RAM off.

                                                                 0b0001 = OFF_EMU. Emulated Off. Logic on with
                                                                 RAM on. This mode is used to emulate
                                                                 the functional condition of OFF without
                                                                 removing power.

                                                                 0b0101 = FULL_RET. Full Retention. Logic and RAM in
                                                                 retention.

                                                                 0b0111 = FUNC_RET. Functional Retention. Floating-
                                                                 point/Vector logic retained, rest of the core
                                                                 logic and RAM on, core is functional.

                                                                 0b1000 = ON. Logic on with RAM on, core is functional.

                                                                 0b1001 = WARM_RST. Warm Reset. Warm reset
                                                                 application with logic and RAM on.

                                                                 0b1010 = DBG_RECOV. Debug Recovery Reset. Warm
                                                                 reset application with logic and RAM on. */
        uint32_t reserved_4_7          : 4;
        uint32_t pwr_dyn_status        : 1;  /**< [  8:  8](SRO/H) Power mode dynamic transition status.

                                                                 There might be a delay in dynamic transitions
                                                                 becoming active or inactive if the PPU is
                                                                 transitioning when PPU_PWPR.DYN_EN is
                                                                 programmed.

                                                                 0 = Dynamic transitions disabled for power
                                                                 modes.

                                                                 1 = Dynamic transitions enabled for power
                                                                 modes. */
        uint32_t reserved_9_11         : 3;
        uint32_t lock_status           : 1;  /**< [ 12: 12](SRO/H) Lock status.

                                                                 0 = The PPU is not locked in the current mode.

                                                                 1 = The PPU is locked in the current mode. */
        uint32_t reserved_13_31        : 19;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_core_ppu_pwsr_s cn; */
};
typedef union cavm_dsuubx_core_ppu_pwsr cavm_dsuubx_core_ppu_pwsr_t;

static inline uint64_t CAVM_DSUUBX_CORE_PPU_PWSR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CORE_PPU_PWSR(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0080008ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CORE_PPU_PWSR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CORE_PPU_PWSR(a) cavm_dsuubx_core_ppu_pwsr_t
#define bustype_CAVM_DSUUBX_CORE_PPU_PWSR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CORE_PPU_PWSR(a) "DSUUBX_CORE_PPU_PWSR"
#define device_bar_CAVM_DSUUBX_CORE_PPU_PWSR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CORE_PPU_PWSR(a) (a)
#define arguments_CAVM_DSUUBX_CORE_PPU_PWSR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_core_ppu_stsr
 *
 * DSUUB Core Stored Status Register
 * This register is reserved for P-Channel PPUs.
 */
union cavm_dsuubx_core_ppu_stsr
{
    uint32_t u;
    struct cavm_dsuubx_core_ppu_stsr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t stored_devdeny        : 8;  /**< [  7:  0](SRO/H) Status of the DEVDENY signals from the last device
                                                                 interface Q-Channel transition. This field is reserved.

                                                                 0b00000000 = Reserved for P-Channel PPUs. */
#else /* Word 0 - Little Endian */
        uint32_t stored_devdeny        : 8;  /**< [  7:  0](SRO/H) Status of the DEVDENY signals from the last device
                                                                 interface Q-Channel transition. This field is reserved.

                                                                 0b00000000 = Reserved for P-Channel PPUs. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_core_ppu_stsr_s cn; */
};
typedef union cavm_dsuubx_core_ppu_stsr cavm_dsuubx_core_ppu_stsr_t;

static inline uint64_t CAVM_DSUUBX_CORE_PPU_STSR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CORE_PPU_STSR(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0080018ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CORE_PPU_STSR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CORE_PPU_STSR(a) cavm_dsuubx_core_ppu_stsr_t
#define bustype_CAVM_DSUUBX_CORE_PPU_STSR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CORE_PPU_STSR(a) "DSUUBX_CORE_PPU_STSR"
#define device_bar_CAVM_DSUUBX_CORE_PPU_STSR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CORE_PPU_STSR(a) (a)
#define arguments_CAVM_DSUUBX_CORE_PPU_STSR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_core_ppu_unlk
 *
 * DSUUB Core Unlock Register
 * This register allows software to unlock the PPU from a locked power mode.
 */
union cavm_dsuubx_core_ppu_unlk
{
    uint32_t u;
    struct cavm_dsuubx_core_ppu_unlk_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_1_31         : 31;
        uint32_t unlock                : 1;  /**< [  0:  0](SR/W) When is written to this bit the PPU is unlocked from a locked
                                                                 power mode. A read always returns 0b0. */
#else /* Word 0 - Little Endian */
        uint32_t unlock                : 1;  /**< [  0:  0](SR/W) When is written to this bit the PPU is unlocked from a locked
                                                                 power mode. A read always returns 0b0. */
        uint32_t reserved_1_31         : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_core_ppu_unlk_s cn; */
};
typedef union cavm_dsuubx_core_ppu_unlk cavm_dsuubx_core_ppu_unlk_t;

static inline uint64_t CAVM_DSUUBX_CORE_PPU_UNLK(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CORE_PPU_UNLK(uint64_t a)
{
    if (a<=63)
        return 0x87e2c008001cll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_CORE_PPU_UNLK", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CORE_PPU_UNLK(a) cavm_dsuubx_core_ppu_unlk_t
#define bustype_CAVM_DSUUBX_CORE_PPU_UNLK(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CORE_PPU_UNLK(a) "DSUUBX_CORE_PPU_UNLK"
#define device_bar_CAVM_DSUUBX_CORE_PPU_UNLK(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CORE_PPU_UNLK(a) (a)
#define arguments_CAVM_DSUUBX_CORE_PPU_UNLK(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_mpamcfg_scpbm
 *
 * DSUUB MPAM (Secure) Cache Portion Bitmap Partition Configuration Register
 * The MPAMCFG_CPBM register is a read-write register that configures the cache portions that a
 * PARTID is allowed to allocate. After setting DSUUB_MPAMCFG_PART_SEL with a PARTID, software
 * (usually a hypervisor) writes to the MPAMCFG_CPBM register to configure which cache portions
 * the PARTID is allowed to allocate.
 * MPAMCFG_CPBM_s controls cache portions for the Secure PARTID selected by the Secure
 * instance of DSUUB_MPAMCFG_PART_SEL. MPAMCFG_CPBM_ns controls the cache portions for the
 * Non-secure PARTID selected by the Non-secure instance of DSUUB_MPAMCFG_PART_SEL.
 */
union cavm_dsuubx_mpamcfg_scpbm
{
    uint32_t u;
    struct cavm_dsuubx_mpamcfg_scpbm_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t cpbm7                 : 1;  /**< [  7:  7](R/W/H) Each bit, CPBM\<n\>, grants permission to the PARTID to allocate
                                                                 cache lines within cache portion n.
                                                                 0 = The PARTID is not permitted to allocate into cache portion n.
                                                                 1 = The PARTID is permitted to allocate within cache portion n. */
        uint32_t cpbm6                 : 1;  /**< [  6:  6](R/W/H) Each bit, CPBM\<n\>, grants permission to the PARTID to allocate
                                                                 cache lines within cache portion n.
                                                                 0 = The PARTID is not permitted to allocate into cache portion n.
                                                                 1 = The PARTID is permitted to allocate within cache portion n. */
        uint32_t cpbm5                 : 1;  /**< [  5:  5](R/W/H) Each bit, CPBM\<n\>, grants permission to the PARTID to allocate
                                                                 cache lines within cache portion n.
                                                                 0 = The PARTID is not permitted to allocate into cache portion n.
                                                                 1 = The PARTID is permitted to allocate within cache portion n. */
        uint32_t cpbm4                 : 1;  /**< [  4:  4](R/W/H) Each bit, CPBM\<n\>, grants permission to the PARTID to allocate
                                                                 cache lines within cache portion n.
                                                                 0 = The PARTID is not permitted to allocate into cache portion n.
                                                                 1 = The PARTID is permitted to allocate within cache portion n. */
        uint32_t cpbm3                 : 1;  /**< [  3:  3](R/W/H) Each bit, CPBM\<n\>, grants permission to the PARTID to allocate
                                                                 cache lines within cache portion n.
                                                                 0 = The PARTID is not permitted to allocate into cache portion n.
                                                                 1 = The PARTID is permitted to allocate within cache portion n. */
        uint32_t cpbm2                 : 1;  /**< [  2:  2](R/W/H) Each bit, CPBM\<n\>, grants permission to the PARTID to allocate
                                                                 cache lines within cache portion n.
                                                                 0 = The PARTID is not permitted to allocate into cache portion n.
                                                                 1 = The PARTID is permitted to allocate within cache portion n. */
        uint32_t cpbm1                 : 1;  /**< [  1:  1](R/W/H) Each bit, CPBM\<n\>, grants permission to the PARTID to allocate
                                                                 cache lines within cache portion n.
                                                                 0 = The PARTID is not permitted to allocate into cache portion n.
                                                                 1 = The PARTID is permitted to allocate within cache portion n. */
        uint32_t cpbm0                 : 1;  /**< [  0:  0](R/W/H) Each bit, CPBM\<n\>, grants permission to the PARTID to allocate
                                                                 cache lines within cache portion n.
                                                                 0 = The PARTID is not permitted to allocate into cache portion n.
                                                                 1 = The PARTID is permitted to allocate within cache portion n. */
#else /* Word 0 - Little Endian */
        uint32_t cpbm0                 : 1;  /**< [  0:  0](R/W/H) Each bit, CPBM\<n\>, grants permission to the PARTID to allocate
                                                                 cache lines within cache portion n.
                                                                 0 = The PARTID is not permitted to allocate into cache portion n.
                                                                 1 = The PARTID is permitted to allocate within cache portion n. */
        uint32_t cpbm1                 : 1;  /**< [  1:  1](R/W/H) Each bit, CPBM\<n\>, grants permission to the PARTID to allocate
                                                                 cache lines within cache portion n.
                                                                 0 = The PARTID is not permitted to allocate into cache portion n.
                                                                 1 = The PARTID is permitted to allocate within cache portion n. */
        uint32_t cpbm2                 : 1;  /**< [  2:  2](R/W/H) Each bit, CPBM\<n\>, grants permission to the PARTID to allocate
                                                                 cache lines within cache portion n.
                                                                 0 = The PARTID is not permitted to allocate into cache portion n.
                                                                 1 = The PARTID is permitted to allocate within cache portion n. */
        uint32_t cpbm3                 : 1;  /**< [  3:  3](R/W/H) Each bit, CPBM\<n\>, grants permission to the PARTID to allocate
                                                                 cache lines within cache portion n.
                                                                 0 = The PARTID is not permitted to allocate into cache portion n.
                                                                 1 = The PARTID is permitted to allocate within cache portion n. */
        uint32_t cpbm4                 : 1;  /**< [  4:  4](R/W/H) Each bit, CPBM\<n\>, grants permission to the PARTID to allocate
                                                                 cache lines within cache portion n.
                                                                 0 = The PARTID is not permitted to allocate into cache portion n.
                                                                 1 = The PARTID is permitted to allocate within cache portion n. */
        uint32_t cpbm5                 : 1;  /**< [  5:  5](R/W/H) Each bit, CPBM\<n\>, grants permission to the PARTID to allocate
                                                                 cache lines within cache portion n.
                                                                 0 = The PARTID is not permitted to allocate into cache portion n.
                                                                 1 = The PARTID is permitted to allocate within cache portion n. */
        uint32_t cpbm6                 : 1;  /**< [  6:  6](R/W/H) Each bit, CPBM\<n\>, grants permission to the PARTID to allocate
                                                                 cache lines within cache portion n.
                                                                 0 = The PARTID is not permitted to allocate into cache portion n.
                                                                 1 = The PARTID is permitted to allocate within cache portion n. */
        uint32_t cpbm7                 : 1;  /**< [  7:  7](R/W/H) Each bit, CPBM\<n\>, grants permission to the PARTID to allocate
                                                                 cache lines within cache portion n.
                                                                 0 = The PARTID is not permitted to allocate into cache portion n.
                                                                 1 = The PARTID is permitted to allocate within cache portion n. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_mpamcfg_scpbm_s cn; */
};
typedef union cavm_dsuubx_mpamcfg_scpbm cavm_dsuubx_mpamcfg_scpbm_t;

static inline uint64_t CAVM_DSUUBX_MPAMCFG_SCPBM(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_MPAMCFG_SCPBM(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0011100ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_MPAMCFG_SCPBM", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_MPAMCFG_SCPBM(a) cavm_dsuubx_mpamcfg_scpbm_t
#define bustype_CAVM_DSUUBX_MPAMCFG_SCPBM(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_MPAMCFG_SCPBM(a) "DSUUBX_MPAMCFG_SCPBM"
#define device_bar_CAVM_DSUUBX_MPAMCFG_SCPBM(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_MPAMCFG_SCPBM(a) (a)
#define arguments_CAVM_DSUUBX_MPAMCFG_SCPBM(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_mpamcfg_spart_sel
 *
 * DSUUB MPAM (Secure) Partition Configuration Selection Register
 * Selects a partition ID to configure. MPAMCFG_PART_SEL_s selects a Secure PARTID to configure.
 * MPAMCFG_PART_SEL_ns selects a Non-secure PARTID to configure.
 * After setting this register with a PARTID, software (usually a hypervisor) can perform a series of
 * accesses to MPAMCFG registers to configure parameters for MPAM resource controls to use
 * when requests have that PARTID.
 */
union cavm_dsuubx_mpamcfg_spart_sel
{
    uint32_t u;
    struct cavm_dsuubx_mpamcfg_spart_sel_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_17_31        : 15;
        uint32_t internal              : 1;  /**< [ 16: 16](R/W) Internal PARTID.
                                                                 If DSUUB_MPAMF_IDR.HAS_PARTID_NRW =0, this field is RAZ/WI.
                                                                 If DSUUB_MPAMF_IDR.HAS_PARTID_NRW = 1:
                                                                 0 = PARTID_SEL is interpreted as a request PARTID
                                                                 and ignored except for use with DSUUB_MPAMCFG_
                                                                 INTPARTID register access.
                                                                 1 = PARTID_SEL is interpreted as an internal PARTID and
                                                                 used for access to MPAMCFG control settings except
                                                                 for DSUUB_MPAMCFG_INTPARTID. */
        uint32_t partid_sel            : 16; /**< [ 15:  0](R/W) Selects the partition ID to configure.
                                                                 Reads and writes to other MPAMCFG registers are
                                                                 indexed by PARTID_SEL and by the NS bit used to access
                                                                 MPAMCFG_PART_SEL to access the configuration for a
                                                                 single partition. */
#else /* Word 0 - Little Endian */
        uint32_t partid_sel            : 16; /**< [ 15:  0](R/W) Selects the partition ID to configure.
                                                                 Reads and writes to other MPAMCFG registers are
                                                                 indexed by PARTID_SEL and by the NS bit used to access
                                                                 MPAMCFG_PART_SEL to access the configuration for a
                                                                 single partition. */
        uint32_t internal              : 1;  /**< [ 16: 16](R/W) Internal PARTID.
                                                                 If DSUUB_MPAMF_IDR.HAS_PARTID_NRW =0, this field is RAZ/WI.
                                                                 If DSUUB_MPAMF_IDR.HAS_PARTID_NRW = 1:
                                                                 0 = PARTID_SEL is interpreted as a request PARTID
                                                                 and ignored except for use with DSUUB_MPAMCFG_
                                                                 INTPARTID register access.
                                                                 1 = PARTID_SEL is interpreted as an internal PARTID and
                                                                 used for access to MPAMCFG control settings except
                                                                 for DSUUB_MPAMCFG_INTPARTID. */
        uint32_t reserved_17_31        : 15;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_mpamcfg_spart_sel_s cn; */
};
typedef union cavm_dsuubx_mpamcfg_spart_sel cavm_dsuubx_mpamcfg_spart_sel_t;

static inline uint64_t CAVM_DSUUBX_MPAMCFG_SPART_SEL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_MPAMCFG_SPART_SEL(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0010100ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_MPAMCFG_SPART_SEL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_MPAMCFG_SPART_SEL(a) cavm_dsuubx_mpamcfg_spart_sel_t
#define bustype_CAVM_DSUUBX_MPAMCFG_SPART_SEL(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_MPAMCFG_SPART_SEL(a) "DSUUBX_MPAMCFG_SPART_SEL"
#define device_bar_CAVM_DSUUBX_MPAMCFG_SPART_SEL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_MPAMCFG_SPART_SEL(a) (a)
#define arguments_CAVM_DSUUBX_MPAMCFG_SPART_SEL(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_mpamf_idrs
 *
 * DSUUB MPAM Features (Secure) Identification Register
 * Indicates which memory partitioning and monitoring features are present on this
 * MSC. MPAMF_IDR_s indicates the MPAM features accessed from the Secure MPAM feature
 * page. MPAMF_IDR_ns indicates the MPAM features accessed from the Non-secure MPAM
 * feature page.
 */
union cavm_dsuubx_mpamf_idrs
{
    uint32_t u;
    struct cavm_dsuubx_mpamf_idrs_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t has_partid_nrw        : 1;  /**< [ 31: 31](RO) Has PARTID narrowing.
                                                                 0 = Does not have DSUUB_MPAMF_PARTID_
                                                                 NRW_IDR, DSUUB_MPAMCFG_INTPARTID or
                                                                 intPARTID mapping support.
                                                                 1 = Supports the DSUUB_MPAMF_PARTID_NRW_IDR,
                                                                 DSUUB_MPAMCFG_INTPARTID registers. */
        uint32_t has_msmon             : 1;  /**< [ 30: 30](RO) Has resource monitors. Indicates whether this MSC
                                                                 has MPAM resource monitors.
                                                                 0 = Does not support MPAM resource monitoring
                                                                 by groups or DSUUB_MPAMF_MSMON_IDR.
                                                                 1 = Supports resource monitoring by matching a
                                                                 combination of PARTID and PMG. See DSUUB_
                                                                 MPAMF_MSMON_IDR. */
        uint32_t has_impl_idr          : 1;  /**< [ 29: 29](RO) Has DSUUB_MPAMF_IMPL_IDR. Indicates whether this
                                                                 MSC has the implementation-specific MPAM features
                                                                 register, DSUUB_MPAMF_IMPL_IDR.
                                                                 0 = Does not have DSUUB_MPAMF_IMPL_IDR.
                                                                 1 = Has DSUUB_MPAMF_IMPL_IDR. */
        uint32_t reserved_28           : 1;
        uint32_t has_pri_part          : 1;  /**< [ 27: 27](RO) Has priority partitioning. Indicates whether this MSC
                                                                 implements MPAM priority partitioning and DSUUB_
                                                                 MPAMF_PRI_IDR.
                                                                 0 = Does not support priority partitioning or have DSUUB_MPAMF_PRI_IDR.
                                                                 1 = Has DSUUB_MPAMF_PRI_IDR. */
        uint32_t has_mbw_part          : 1;  /**< [ 26: 26](RO) Has memory bandwidth partitioning. Indicates
                                                                 whether this MSC implements MPAM memory
                                                                 bandwidth partitioning and MPAMF_MBW_IDR.
                                                                 0 = Does not support memory bandwidth
                                                                 partitioning or have DSUUB_MPAMF_MBW_IDR
                                                                 register.
                                                                 1 = Has DSUUB_MPAMF_MBW_IDR register. */
        uint32_t has_cpor_part         : 1;  /**< [ 25: 25](RO) Has cache portion partitioning. Indicates whether this
                                                                 MSC implements MPAM cache portion partitioning
                                                                 and DSUUB_MPAMF_CPOR_IDR.
                                                                 0 = Does not support cache portion partitioning
                                                                 or have DSUUB_MPAMF_CPOR_IDR or DSUUB_MPAMCFG_CPBM registers.
                                                                 1 = Has DSUUB_MPAMF_CPOR_IDR and DSUUB_MPAMCFG_CPBM registers. */
        uint32_t has_ccap_part         : 1;  /**< [ 24: 24](RO) Has cache capacity partitioning. Indicates whether this
                                                                 MSC implements MPAM cache capacity partitioning
                                                                 and the MPAMF_CCAP_IDR and MPAMCFG_CMAX
                                                                 registers.
                                                                 0 = Does not support cache capacity partitioning
                                                                 or have DSUUB_MPAMF_CCAP_IDR and DSUUB_MPAMCFG_CMAX registers.
                                                                 1 = Has DSUUB_MPAMF_CCAP_IDR and DSUUB_MPAMCFG_CMAX registers. */
        uint32_t pmg_max               : 8;  /**< [ 23: 16](RO) Maximum value of Non-secure PMG supported by this component. */
        uint32_t partid_max            : 16; /**< [ 15:  0](RO) Maximum value of Non-secure PARTID supported by this component. */
#else /* Word 0 - Little Endian */
        uint32_t partid_max            : 16; /**< [ 15:  0](RO) Maximum value of Non-secure PARTID supported by this component. */
        uint32_t pmg_max               : 8;  /**< [ 23: 16](RO) Maximum value of Non-secure PMG supported by this component. */
        uint32_t has_ccap_part         : 1;  /**< [ 24: 24](RO) Has cache capacity partitioning. Indicates whether this
                                                                 MSC implements MPAM cache capacity partitioning
                                                                 and the MPAMF_CCAP_IDR and MPAMCFG_CMAX
                                                                 registers.
                                                                 0 = Does not support cache capacity partitioning
                                                                 or have DSUUB_MPAMF_CCAP_IDR and DSUUB_MPAMCFG_CMAX registers.
                                                                 1 = Has DSUUB_MPAMF_CCAP_IDR and DSUUB_MPAMCFG_CMAX registers. */
        uint32_t has_cpor_part         : 1;  /**< [ 25: 25](RO) Has cache portion partitioning. Indicates whether this
                                                                 MSC implements MPAM cache portion partitioning
                                                                 and DSUUB_MPAMF_CPOR_IDR.
                                                                 0 = Does not support cache portion partitioning
                                                                 or have DSUUB_MPAMF_CPOR_IDR or DSUUB_MPAMCFG_CPBM registers.
                                                                 1 = Has DSUUB_MPAMF_CPOR_IDR and DSUUB_MPAMCFG_CPBM registers. */
        uint32_t has_mbw_part          : 1;  /**< [ 26: 26](RO) Has memory bandwidth partitioning. Indicates
                                                                 whether this MSC implements MPAM memory
                                                                 bandwidth partitioning and MPAMF_MBW_IDR.
                                                                 0 = Does not support memory bandwidth
                                                                 partitioning or have DSUUB_MPAMF_MBW_IDR
                                                                 register.
                                                                 1 = Has DSUUB_MPAMF_MBW_IDR register. */
        uint32_t has_pri_part          : 1;  /**< [ 27: 27](RO) Has priority partitioning. Indicates whether this MSC
                                                                 implements MPAM priority partitioning and DSUUB_
                                                                 MPAMF_PRI_IDR.
                                                                 0 = Does not support priority partitioning or have DSUUB_MPAMF_PRI_IDR.
                                                                 1 = Has DSUUB_MPAMF_PRI_IDR. */
        uint32_t reserved_28           : 1;
        uint32_t has_impl_idr          : 1;  /**< [ 29: 29](RO) Has DSUUB_MPAMF_IMPL_IDR. Indicates whether this
                                                                 MSC has the implementation-specific MPAM features
                                                                 register, DSUUB_MPAMF_IMPL_IDR.
                                                                 0 = Does not have DSUUB_MPAMF_IMPL_IDR.
                                                                 1 = Has DSUUB_MPAMF_IMPL_IDR. */
        uint32_t has_msmon             : 1;  /**< [ 30: 30](RO) Has resource monitors. Indicates whether this MSC
                                                                 has MPAM resource monitors.
                                                                 0 = Does not support MPAM resource monitoring
                                                                 by groups or DSUUB_MPAMF_MSMON_IDR.
                                                                 1 = Supports resource monitoring by matching a
                                                                 combination of PARTID and PMG. See DSUUB_
                                                                 MPAMF_MSMON_IDR. */
        uint32_t has_partid_nrw        : 1;  /**< [ 31: 31](RO) Has PARTID narrowing.
                                                                 0 = Does not have DSUUB_MPAMF_PARTID_
                                                                 NRW_IDR, DSUUB_MPAMCFG_INTPARTID or
                                                                 intPARTID mapping support.
                                                                 1 = Supports the DSUUB_MPAMF_PARTID_NRW_IDR,
                                                                 DSUUB_MPAMCFG_INTPARTID registers. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_mpamf_idrs_s cn; */
};
typedef union cavm_dsuubx_mpamf_idrs cavm_dsuubx_mpamf_idrs_t;

static inline uint64_t CAVM_DSUUBX_MPAMF_IDRS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_MPAMF_IDRS(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0010000ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_MPAMF_IDRS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_MPAMF_IDRS(a) cavm_dsuubx_mpamf_idrs_t
#define bustype_CAVM_DSUUBX_MPAMF_IDRS(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_MPAMF_IDRS(a) "DSUUBX_MPAMF_IDRS"
#define device_bar_CAVM_DSUUBX_MPAMF_IDRS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_MPAMF_IDRS(a) (a)
#define arguments_CAVM_DSUUBX_MPAMF_IDRS(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_mpamf_saidr
 *
 * DSUUB MPAM (Secure) Architecure Identification Register
 * Identifies the version of the MPAM architecture that this MSC implements.
 * Note: The following values are defined for bits [7:0]:
 * * 0x01 == MPAM architecture v0.1.
 * * 0x10 == MPAM architecture v1.0.
 * * 0x11 == MPAM architecture v1.1.
 */
union cavm_dsuubx_mpamf_saidr
{
    uint32_t u;
    struct cavm_dsuubx_mpamf_saidr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t archmajorrev          : 4;  /**< [  7:  4](RO) Major revision of the MPAM architecture implemented by
                                                                 the MSC. */
        uint32_t archminorrev          : 4;  /**< [  3:  0](RO) Minor revision of the MPAM architecture implemented by
                                                                 the MSC. */
#else /* Word 0 - Little Endian */
        uint32_t archminorrev          : 4;  /**< [  3:  0](RO) Minor revision of the MPAM architecture implemented by
                                                                 the MSC. */
        uint32_t archmajorrev          : 4;  /**< [  7:  4](RO) Major revision of the MPAM architecture implemented by
                                                                 the MSC. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_mpamf_saidr_s cn; */
};
typedef union cavm_dsuubx_mpamf_saidr cavm_dsuubx_mpamf_saidr_t;

static inline uint64_t CAVM_DSUUBX_MPAMF_SAIDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_MPAMF_SAIDR(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0010020ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_MPAMF_SAIDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_MPAMF_SAIDR(a) cavm_dsuubx_mpamf_saidr_t
#define bustype_CAVM_DSUUBX_MPAMF_SAIDR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_MPAMF_SAIDR(a) "DSUUBX_MPAMF_SAIDR"
#define device_bar_CAVM_DSUUBX_MPAMF_SAIDR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_MPAMF_SAIDR(a) (a)
#define arguments_CAVM_DSUUBX_MPAMF_SAIDR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_mpamf_scpor_idr
 *
 * DSUUB MPAM Features (Secure) Cache Portion Partitioning ID Register
 * Indicates the number of bits in DSUUB_MPAMCFG_CPBM for this MSC. MPAMF_CPOR_IDR_s
 * indicates the number of bits in the Secure instance of DSUUB_MPAMCFG_CPBM.
 * MPAMF_CPOR_IDR_ns indicates the number of bits in the Non-secure instance of
 * DSUUB_MPAMCFG_CPBM.
 */
union cavm_dsuubx_mpamf_scpor_idr
{
    uint32_t u;
    struct cavm_dsuubx_mpamf_scpor_idr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t cpbm_wd               : 16; /**< [ 15:  0](RO) Number of bits in the cache portion partitioning bit map of
                                                                 this device. See DSUUB_MPAMCFG_CPBM.
                                                                 This field must contain a value from 1 to 32768, inclusive.
                                                                 Values greater than 32 require a group of 32-bit registers
                                                                 to access the CPBM, up to 1024 if CPBM_WD is the
                                                                 largest value. */
#else /* Word 0 - Little Endian */
        uint32_t cpbm_wd               : 16; /**< [ 15:  0](RO) Number of bits in the cache portion partitioning bit map of
                                                                 this device. See DSUUB_MPAMCFG_CPBM.
                                                                 This field must contain a value from 1 to 32768, inclusive.
                                                                 Values greater than 32 require a group of 32-bit registers
                                                                 to access the CPBM, up to 1024 if CPBM_WD is the
                                                                 largest value. */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_mpamf_scpor_idr_s cn; */
};
typedef union cavm_dsuubx_mpamf_scpor_idr cavm_dsuubx_mpamf_scpor_idr_t;

static inline uint64_t CAVM_DSUUBX_MPAMF_SCPOR_IDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_MPAMF_SCPOR_IDR(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0010030ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_MPAMF_SCPOR_IDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_MPAMF_SCPOR_IDR(a) cavm_dsuubx_mpamf_scpor_idr_t
#define bustype_CAVM_DSUUBX_MPAMF_SCPOR_IDR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_MPAMF_SCPOR_IDR(a) "DSUUBX_MPAMF_SCPOR_IDR"
#define device_bar_CAVM_DSUUBX_MPAMF_SCPOR_IDR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_MPAMF_SCPOR_IDR(a) (a)
#define arguments_CAVM_DSUUBX_MPAMF_SCPOR_IDR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_mpamf_secr
 *
 * DSUUB MPAM (Secure) Error Control Register
 * MPAMF_ECR is a 32-bit read-write register that controls MPAM error interrupts for this MSC.
 * MPAMF_ECR_s controls Secure MPAM error handling. MPAMF_ECR_ns controls Non-secure
 * MPAM error handling.
 */
union cavm_dsuubx_mpamf_secr
{
    uint32_t u;
    struct cavm_dsuubx_mpamf_secr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_1_31         : 31;
        uint32_t inten                 : 1;  /**< [  0:  0](R/W) Interrupt Enable.
                                                                 0 = MPAM error interrupts are not generated.
                                                                 1 = MPAM error interrupts are generated. */
#else /* Word 0 - Little Endian */
        uint32_t inten                 : 1;  /**< [  0:  0](R/W) Interrupt Enable.
                                                                 0 = MPAM error interrupts are not generated.
                                                                 1 = MPAM error interrupts are generated. */
        uint32_t reserved_1_31         : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_mpamf_secr_s cn; */
};
typedef union cavm_dsuubx_mpamf_secr cavm_dsuubx_mpamf_secr_t;

static inline uint64_t CAVM_DSUUBX_MPAMF_SECR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_MPAMF_SECR(uint64_t a)
{
    if (a<=63)
        return 0x87e2c00100f0ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_MPAMF_SECR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_MPAMF_SECR(a) cavm_dsuubx_mpamf_secr_t
#define bustype_CAVM_DSUUBX_MPAMF_SECR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_MPAMF_SECR(a) "DSUUBX_MPAMF_SECR"
#define device_bar_CAVM_DSUUBX_MPAMF_SECR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_MPAMF_SECR(a) (a)
#define arguments_CAVM_DSUUBX_MPAMF_SECR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_mpamf_sesr
 *
 * DSUUB MPAM Secure Error Status Register
 * Indicates MPAM error status for this MSC. MPAMF_ESR_s reports Secure MPAM errors.
 * MPAMF_ESR_ns reports Non-secure MPAM errors.
 * Software should write this register after reading the status of an error to reset ERRCODE to
 * 0x0000 and OVRWR to 0 so that future errors are not reported with OVRWR set.
 */
union cavm_dsuubx_mpamf_sesr
{
    uint32_t u;
    struct cavm_dsuubx_mpamf_sesr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t ovrwr                 : 1;  /**< [ 31: 31](R/W/H) Overwritten.
                                                                 If 0 and ERRCODE == 0b0000, no errors have occurred.
                                                                 If 0 and ERRCODE is non-zero, a single error has occurred
                                                                 and is recorded in this register.
                                                                 If 1 and ERRCODE is non-zero, multiple errors have
                                                                 occurred and this register records the most recent error. */
        uint32_t reserved_28_30        : 3;
        uint32_t errcode               : 4;  /**< [ 27: 24](R/W/H) Error code.
                                                                 0b0000 = No error.
                                                                 0b0001 = PARTID_SEL_Range.
                                                                 0b0010 = Req_PARTID_Range.
                                                                 0b0011 = MSMONCFG_ID_RANGE.
                                                                 0b0100 = Req_PMG_Range.
                                                                 0b0101 = Monitor_Range.
                                                                 0b0110 = intPARTID_Range.
                                                                 0b0111 = Unexpected_INTERNAL.
                                                                 0b1000 = Reserved.
                                                                 0b1001 = Reserved.
                                                                 0b1010 = Reserved.
                                                                 0b1011 = Reserved.
                                                                 0b1100 = Reserved.
                                                                 0b1101 = Reserved.
                                                                 0b1110 = Reserved.
                                                                 0b1111 = Reserved. */
        uint32_t pmg                   : 8;  /**< [ 23: 16](R/W/H) Program monitoring group.
                                                                 Set to the PMG on an error that captures PMG. Otherwise,
                                                                 set to 0x00 on an error that does not capture PMG. */
        uint32_t partid_mon            : 16; /**< [ 15:  0](R/W/H) PARTID or monitor.
                                                                 Set to the PARTID on an error that captures PARTID.
                                                                 Set to the monitor index on an error that captures MON.
                                                                 On an error that captures neither PARTID nor MON, this
                                                                 field is set to 0x0000. */
#else /* Word 0 - Little Endian */
        uint32_t partid_mon            : 16; /**< [ 15:  0](R/W/H) PARTID or monitor.
                                                                 Set to the PARTID on an error that captures PARTID.
                                                                 Set to the monitor index on an error that captures MON.
                                                                 On an error that captures neither PARTID nor MON, this
                                                                 field is set to 0x0000. */
        uint32_t pmg                   : 8;  /**< [ 23: 16](R/W/H) Program monitoring group.
                                                                 Set to the PMG on an error that captures PMG. Otherwise,
                                                                 set to 0x00 on an error that does not capture PMG. */
        uint32_t errcode               : 4;  /**< [ 27: 24](R/W/H) Error code.
                                                                 0b0000 = No error.
                                                                 0b0001 = PARTID_SEL_Range.
                                                                 0b0010 = Req_PARTID_Range.
                                                                 0b0011 = MSMONCFG_ID_RANGE.
                                                                 0b0100 = Req_PMG_Range.
                                                                 0b0101 = Monitor_Range.
                                                                 0b0110 = intPARTID_Range.
                                                                 0b0111 = Unexpected_INTERNAL.
                                                                 0b1000 = Reserved.
                                                                 0b1001 = Reserved.
                                                                 0b1010 = Reserved.
                                                                 0b1011 = Reserved.
                                                                 0b1100 = Reserved.
                                                                 0b1101 = Reserved.
                                                                 0b1110 = Reserved.
                                                                 0b1111 = Reserved. */
        uint32_t reserved_28_30        : 3;
        uint32_t ovrwr                 : 1;  /**< [ 31: 31](R/W/H) Overwritten.
                                                                 If 0 and ERRCODE == 0b0000, no errors have occurred.
                                                                 If 0 and ERRCODE is non-zero, a single error has occurred
                                                                 and is recorded in this register.
                                                                 If 1 and ERRCODE is non-zero, multiple errors have
                                                                 occurred and this register records the most recent error. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_mpamf_sesr_s cn; */
};
typedef union cavm_dsuubx_mpamf_sesr cavm_dsuubx_mpamf_sesr_t;

static inline uint64_t CAVM_DSUUBX_MPAMF_SESR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_MPAMF_SESR(uint64_t a)
{
    if (a<=63)
        return 0x87e2c00100f8ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_MPAMF_SESR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_MPAMF_SESR(a) cavm_dsuubx_mpamf_sesr_t
#define bustype_CAVM_DSUUBX_MPAMF_SESR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_MPAMF_SESR(a) "DSUUBX_MPAMF_SESR"
#define device_bar_CAVM_DSUUBX_MPAMF_SESR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_MPAMF_SESR(a) (a)
#define arguments_CAVM_DSUUBX_MPAMF_SESR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_mpamf_sidr
 *
 * DSUUB MPAM Features Secure Identification Register
 */
union cavm_dsuubx_mpamf_sidr
{
    uint32_t u;
    struct cavm_dsuubx_mpamf_sidr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_24_31        : 8;
        uint32_t s_pmg_max             : 8;  /**< [ 23: 16](SRO) Maximum value of Secure PMG supported by this component. */
        uint32_t s_partid_max          : 16; /**< [ 15:  0](SRO) Maximum value of Secure PARTID supported by this component. */
#else /* Word 0 - Little Endian */
        uint32_t s_partid_max          : 16; /**< [ 15:  0](SRO) Maximum value of Secure PARTID supported by this component. */
        uint32_t s_pmg_max             : 8;  /**< [ 23: 16](SRO) Maximum value of Secure PMG supported by this component. */
        uint32_t reserved_24_31        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_mpamf_sidr_s cn; */
};
typedef union cavm_dsuubx_mpamf_sidr cavm_dsuubx_mpamf_sidr_t;

static inline uint64_t CAVM_DSUUBX_MPAMF_SIDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_MPAMF_SIDR(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0010008ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_MPAMF_SIDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_MPAMF_SIDR(a) cavm_dsuubx_mpamf_sidr_t
#define bustype_CAVM_DSUUBX_MPAMF_SIDR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_MPAMF_SIDR(a) "DSUUBX_MPAMF_SIDR"
#define device_bar_CAVM_DSUUBX_MPAMF_SIDR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_MPAMF_SIDR(a) (a)
#define arguments_CAVM_DSUUBX_MPAMF_SIDR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_mpamf_siidr
 *
 * DSUUB MPAM (Secure) Implementation Identification Register
 * Uniquely identifies the MSC implementation by the combination of implementer, product ID,
 * variant and revision.
 */
union cavm_dsuubx_mpamf_siidr
{
    uint32_t u;
    struct cavm_dsuubx_mpamf_siidr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t productid             : 12; /**< [ 31: 20](RO) IMPLEMENTATION DEFINED value identifying the
                                                                 MPAM MSC.
                                                                 The MSC implementer as identified in the
                                                                 MPAMF_IIDR.Implementer field must assure each
                                                                 product has a unique ProductID from any other
                                                                 with the same Implementer value. */
        uint32_t variant               : 4;  /**< [ 19: 16](RO) IMPLEMENTATION DEFINED value used to
                                                                 distinguish product variants, or major revisions of
                                                                 the product.
                                                                 Note Implementations of ProductID
                                                                 with differing software
                                                                 interfaces are expected to have
                                                                 different values in the MPAMF_
                                                                 IIDR.Variant field. */
        uint32_t revision              : 4;  /**< [ 15: 12](RO) IMPLEMENTATION DEFINED value used to
                                                                 distinguish minor revisions of the product.
                                                                 Note This field is intended to
                                                                 differentiate product revisions
                                                                 that are minor changes and are
                                                                 largely software compatible with
                                                                 previous revisions. */
        uint32_t implementer           : 12; /**< [ 11:  0](RO) Contains the JEP106 code of the company that
                                                                 implemented the MPAM MSC.
                                                                 [11:8] must contain the JEP106 continuation
                                                                 code of the implementer.
                                                                 [7] must always be 0.
                                                                 [6:0] must contain the JEP106 identity code of
                                                                 the implementer.
                                                                 For an Arm implementation, bits[11:0] are 0x43B. */
#else /* Word 0 - Little Endian */
        uint32_t implementer           : 12; /**< [ 11:  0](RO) Contains the JEP106 code of the company that
                                                                 implemented the MPAM MSC.
                                                                 [11:8] must contain the JEP106 continuation
                                                                 code of the implementer.
                                                                 [7] must always be 0.
                                                                 [6:0] must contain the JEP106 identity code of
                                                                 the implementer.
                                                                 For an Arm implementation, bits[11:0] are 0x43B. */
        uint32_t revision              : 4;  /**< [ 15: 12](RO) IMPLEMENTATION DEFINED value used to
                                                                 distinguish minor revisions of the product.
                                                                 Note This field is intended to
                                                                 differentiate product revisions
                                                                 that are minor changes and are
                                                                 largely software compatible with
                                                                 previous revisions. */
        uint32_t variant               : 4;  /**< [ 19: 16](RO) IMPLEMENTATION DEFINED value used to
                                                                 distinguish product variants, or major revisions of
                                                                 the product.
                                                                 Note Implementations of ProductID
                                                                 with differing software
                                                                 interfaces are expected to have
                                                                 different values in the MPAMF_
                                                                 IIDR.Variant field. */
        uint32_t productid             : 12; /**< [ 31: 20](RO) IMPLEMENTATION DEFINED value identifying the
                                                                 MPAM MSC.
                                                                 The MSC implementer as identified in the
                                                                 MPAMF_IIDR.Implementer field must assure each
                                                                 product has a unique ProductID from any other
                                                                 with the same Implementer value. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_mpamf_siidr_s cn; */
};
typedef union cavm_dsuubx_mpamf_siidr cavm_dsuubx_mpamf_siidr_t;

static inline uint64_t CAVM_DSUUBX_MPAMF_SIIDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_MPAMF_SIIDR(uint64_t a)
{
    if (a<=63)
        return 0x87e2c0010018ll + 0x1000000ll * ((a) & 0x3f);
    __cavm_csr_fatal("DSUUBX_MPAMF_SIIDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_MPAMF_SIIDR(a) cavm_dsuubx_mpamf_siidr_t
#define bustype_CAVM_DSUUBX_MPAMF_SIIDR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_MPAMF_SIIDR(a) "DSUUBX_MPAMF_SIIDR"
#define device_bar_CAVM_DSUUBX_MPAMF_SIIDR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_MPAMF_SIIDR(a) (a)
#define arguments_CAVM_DSUUBX_MPAMF_SIIDR(a) (a),-1,-1,-1

#endif /* __CAVM_CSRS_DSUUB_H__ */
