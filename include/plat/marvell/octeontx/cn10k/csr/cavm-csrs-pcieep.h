#ifndef __CAVM_CSRS_PCIEEP_H__
#define __CAVM_CSRS_PCIEEP_H__
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
 * OcteonTX PCIEEP.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Register (PCICONFIGEP) pcieep#_ack_freq
 *
 * PCIe EP PF Ack Frequency Register
 */
union cavm_pcieepx_ack_freq
{
    uint32_t u;
    struct cavm_pcieepx_ack_freq_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_31           : 1;
        uint32_t easpml1               : 1;  /**< [ 30: 30](R/W) Enter ASPM L1 without receive in L0s. Allow core to enter ASPM L1 even when link partner
                                                                 did not go to L0s (receive is not in L0s). When not set, core goes to ASPM L1 only after
                                                                 idle period, during which both receive and transmit are in L0s. */
        uint32_t l1el                  : 3;  /**< [ 29: 27](R/W) L1 entrance latency. Values correspond to:
                                                                 0x0 = 1 ms.
                                                                 0x1 = 2 ms.
                                                                 0x2 = 4 ms.
                                                                 0x3 = 8 ms.
                                                                 0x4 = 16 ms.
                                                                 0x5 = 32 ms.
                                                                 0x6 or 0x7 = 64 ms. */
        uint32_t l0el                  : 3;  /**< [ 26: 24](R/W) L0s entrance latency. Values correspond to:
                                                                 0x0 = 1 ms.
                                                                 0x1 = 2 ms.
                                                                 0x2 = 3 ms.
                                                                 0x3 = 4 ms.
                                                                 0x4 = 5 ms.
                                                                 0x5 = 6 ms.
                                                                 0x6 or 0x7 = 7 ms. */
        uint32_t n_fts_cc              : 8;  /**< [ 23: 16](RO) N_FTS when common clock is used.
                                                                 The number of fast training sequence (FTS) ordered sets to be transmitted when
                                                                 transitioning from L0s to L0 when common clock is used. The maximum number of
                                                                 FTS ordered sets that a component can request is 255.
                                                                 A value of zero is not supported; a value of zero can cause the LTSSM to go into the
                                                                 recovery state when exiting from L0s. */
        uint32_t n_fts                 : 8;  /**< [ 15:  8](R/W) The number of fast training sequence (FTS) ordered sets to be transmitted when
                                                                 transitioning from L0s to L0. The maximum number of FTS ordered sets that a component can
                                                                 request is 255.
                                                                 A value of zero is not supported; a value of zero can cause the LTSSM to go into the
                                                                 recovery state when exiting from L0s. */
        uint32_t ack_freq              : 8;  /**< [  7:  0](R/W) ACK frequency. The number of pending ACKs specified here (up to 255) before sending an ACK. */
#else /* Word 0 - Little Endian */
        uint32_t ack_freq              : 8;  /**< [  7:  0](R/W) ACK frequency. The number of pending ACKs specified here (up to 255) before sending an ACK. */
        uint32_t n_fts                 : 8;  /**< [ 15:  8](R/W) The number of fast training sequence (FTS) ordered sets to be transmitted when
                                                                 transitioning from L0s to L0. The maximum number of FTS ordered sets that a component can
                                                                 request is 255.
                                                                 A value of zero is not supported; a value of zero can cause the LTSSM to go into the
                                                                 recovery state when exiting from L0s. */
        uint32_t n_fts_cc              : 8;  /**< [ 23: 16](RO) N_FTS when common clock is used.
                                                                 The number of fast training sequence (FTS) ordered sets to be transmitted when
                                                                 transitioning from L0s to L0 when common clock is used. The maximum number of
                                                                 FTS ordered sets that a component can request is 255.
                                                                 A value of zero is not supported; a value of zero can cause the LTSSM to go into the
                                                                 recovery state when exiting from L0s. */
        uint32_t l0el                  : 3;  /**< [ 26: 24](R/W) L0s entrance latency. Values correspond to:
                                                                 0x0 = 1 ms.
                                                                 0x1 = 2 ms.
                                                                 0x2 = 3 ms.
                                                                 0x3 = 4 ms.
                                                                 0x4 = 5 ms.
                                                                 0x5 = 6 ms.
                                                                 0x6 or 0x7 = 7 ms. */
        uint32_t l1el                  : 3;  /**< [ 29: 27](R/W) L1 entrance latency. Values correspond to:
                                                                 0x0 = 1 ms.
                                                                 0x1 = 2 ms.
                                                                 0x2 = 4 ms.
                                                                 0x3 = 8 ms.
                                                                 0x4 = 16 ms.
                                                                 0x5 = 32 ms.
                                                                 0x6 or 0x7 = 64 ms. */
        uint32_t easpml1               : 1;  /**< [ 30: 30](R/W) Enter ASPM L1 without receive in L0s. Allow core to enter ASPM L1 even when link partner
                                                                 did not go to L0s (receive is not in L0s). When not set, core goes to ASPM L1 only after
                                                                 idle period, during which both receive and transmit are in L0s. */
        uint32_t reserved_31           : 1;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ack_freq_s cn; */
};
typedef union cavm_pcieepx_ack_freq cavm_pcieepx_ack_freq_t;

static inline uint64_t CAVM_PCIEEPX_ACK_FREQ(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_ACK_FREQ(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x70c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x70c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x70c + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x70c + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_ACK_FREQ", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_ACK_FREQ(a) cavm_pcieepx_ack_freq_t
#define bustype_CAVM_PCIEEPX_ACK_FREQ(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_ACK_FREQ(a) "PCIEEPX_ACK_FREQ"
#define busnum_CAVM_PCIEEPX_ACK_FREQ(a) (a)
#define arguments_CAVM_PCIEEPX_ACK_FREQ(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ack_timer
 *
 * PCIe EP PF Ack Latency Timer/Replay Timer Register
 */
union cavm_pcieepx_ack_timer
{
    uint32_t u;
    struct cavm_pcieepx_ack_timer_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rtl                   : 16; /**< [ 31: 16](R/W/H) Replay time limit. The replay timer expires when it reaches this limit. The PCI Express
                                                                 bus initiates a replay upon reception of a NAK or when the replay timer expires. This
                                                                 value is set correctly by the hardware out of reset or when the negotiated link width or
                                                                 payload size changes.

                                                                 The value is determined from Tables 3-4 of the PCIe 3.0 specification and divided by 4,
                                                                 since the Mac is architected to process 4 symbols per pipe clock.  The value is adjusted
                                                                 internally depending on the link speed to generate a value to corresponding to the
                                                                 appropriate value in Tables 3-4, 3-5, and 3-6.  Note that the value read will
                                                                 always reflect the Table 3-4 value regardless of current link speed.

                                                                 If the user changes this value, they should refer to the PCIe specification
                                                                 for the correct value. */
        uint32_t rtltl                 : 16; /**< [ 15:  0](R/W/H) Round trip latency time limit. The ACK/NAK latency timer expires when it reaches this
                                                                 limit. This value is set correctly by the hardware out of reset or when the negotiated
                                                                 link width or payload size changes.

                                                                 The value is determined from Tables 3-7 of the PCIe 3.0 specification and divided by 4,
                                                                 since the Mac is architected to process 4 symbols per pipe clock.  The value is adjusted
                                                                 internally depending on the link speed to generate a value to corresponding to the
                                                                 appropriate value in Tables 3-7, 3-8, 3-9.  Note that the value read will
                                                                 always reflect the Table 3-7 value regardless of current link speed.

                                                                 The limit must reflect the round trip latency from requester to completer. If there
                                                                 is a change in the payload size or link width, the controller will override any
                                                                 value that you have written to this register field, and reset the
                                                                 field back to the specification-defined value.

                                                                 If the user changes this value they should refer to the PCIe specification
                                                                 for the correct value. */
#else /* Word 0 - Little Endian */
        uint32_t rtltl                 : 16; /**< [ 15:  0](R/W/H) Round trip latency time limit. The ACK/NAK latency timer expires when it reaches this
                                                                 limit. This value is set correctly by the hardware out of reset or when the negotiated
                                                                 link width or payload size changes.

                                                                 The value is determined from Tables 3-7 of the PCIe 3.0 specification and divided by 4,
                                                                 since the Mac is architected to process 4 symbols per pipe clock.  The value is adjusted
                                                                 internally depending on the link speed to generate a value to corresponding to the
                                                                 appropriate value in Tables 3-7, 3-8, 3-9.  Note that the value read will
                                                                 always reflect the Table 3-7 value regardless of current link speed.

                                                                 The limit must reflect the round trip latency from requester to completer. If there
                                                                 is a change in the payload size or link width, the controller will override any
                                                                 value that you have written to this register field, and reset the
                                                                 field back to the specification-defined value.

                                                                 If the user changes this value they should refer to the PCIe specification
                                                                 for the correct value. */
        uint32_t rtl                   : 16; /**< [ 31: 16](R/W/H) Replay time limit. The replay timer expires when it reaches this limit. The PCI Express
                                                                 bus initiates a replay upon reception of a NAK or when the replay timer expires. This
                                                                 value is set correctly by the hardware out of reset or when the negotiated link width or
                                                                 payload size changes.

                                                                 The value is determined from Tables 3-4 of the PCIe 3.0 specification and divided by 4,
                                                                 since the Mac is architected to process 4 symbols per pipe clock.  The value is adjusted
                                                                 internally depending on the link speed to generate a value to corresponding to the
                                                                 appropriate value in Tables 3-4, 3-5, and 3-6.  Note that the value read will
                                                                 always reflect the Table 3-4 value regardless of current link speed.

                                                                 If the user changes this value, they should refer to the PCIe specification
                                                                 for the correct value. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ack_timer_s cn; */
};
typedef union cavm_pcieepx_ack_timer cavm_pcieepx_ack_timer_t;

static inline uint64_t CAVM_PCIEEPX_ACK_TIMER(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_ACK_TIMER(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x700 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x700 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x700 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x700 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_ACK_TIMER", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_ACK_TIMER(a) cavm_pcieepx_ack_timer_t
#define bustype_CAVM_PCIEEPX_ACK_TIMER(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_ACK_TIMER(a) "PCIEEPX_ACK_TIMER"
#define busnum_CAVM_PCIEEPX_ACK_TIMER(a) (a)
#define arguments_CAVM_PCIEEPX_ACK_TIMER(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_acs_cap_ctl
 *
 * PCIe RC ACS Capability and Control Register
 */
union cavm_pcieepx_acs_cap_ctl
{
    uint32_t u;
    struct cavm_pcieepx_acs_cap_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_23_31        : 9;
        uint32_t dte                   : 1;  /**< [ 22: 22](RO/WRSL) ACS direct translated P2P enable.  Writable only when [DT] is 1. */
        uint32_t ece                   : 1;  /**< [ 21: 21](RO/WRSL) ACS P2P egress control enable.  Writable only when [EC] is 1. */
        uint32_t ufe                   : 1;  /**< [ 20: 20](RO) ACS upstream forwarding enable.  Writable only when [UF] is 1. */
        uint32_t cre                   : 1;  /**< [ 19: 19](RO/WRSL) ACS P2P completion redirect enable.  Writable only when [CR] is 1. */
        uint32_t rre                   : 1;  /**< [ 18: 18](RO/WRSL) ACS P2P request redirect enable.  Writable only when [CR] is 1. */
        uint32_t tbe                   : 1;  /**< [ 17: 17](RO) ACS translation blocking enable. Writable only when [TB] 1. */
        uint32_t sve                   : 1;  /**< [ 16: 16](RO) ACS source validation enable. Writable only when [SV] 1. */
        uint32_t ecvs                  : 8;  /**< [ 15:  8](RO/WRSL) Egress control vector size.
                                                                 Writable through PEM()_CFG_TBL(). */
        uint32_t reserved_7            : 1;
        uint32_t dt                    : 1;  /**< [  6:  6](RO/WRSL) ACS direct translated P2P.
                                                                 Writable through PEM()_CFG_TBL(). */
        uint32_t ec                    : 1;  /**< [  5:  5](RO/WRSL) ACS P2P egress control.
                                                                 Writable through PEM()_CFG_TBL(). */
        uint32_t uf                    : 1;  /**< [  4:  4](RO) ACS upstream forwarding.
                                                                 Writable through PEM()_CFG_TBL(). */
        uint32_t cr                    : 1;  /**< [  3:  3](RO/WRSL) ACS P2P completion redirect.
                                                                 Writable through PEM()_CFG_TBL(). */
        uint32_t rr                    : 1;  /**< [  2:  2](RO/WRSL) ACS P2P request redirect.
                                                                 Writable through PEM()_CFG_TBL(). */
        uint32_t tb                    : 1;  /**< [  1:  1](RO) ACS translation blocking.
                                                                 Writable through PEM()_CFG_TBL(). */
        uint32_t sv                    : 1;  /**< [  0:  0](RO) ACS source validation.  Hardwired to 0 for upstream port.
                                                                 Writable through PEM()_CFG_TBL(). */
#else /* Word 0 - Little Endian */
        uint32_t sv                    : 1;  /**< [  0:  0](RO) ACS source validation.  Hardwired to 0 for upstream port.
                                                                 Writable through PEM()_CFG_TBL(). */
        uint32_t tb                    : 1;  /**< [  1:  1](RO) ACS translation blocking.
                                                                 Writable through PEM()_CFG_TBL(). */
        uint32_t rr                    : 1;  /**< [  2:  2](RO/WRSL) ACS P2P request redirect.
                                                                 Writable through PEM()_CFG_TBL(). */
        uint32_t cr                    : 1;  /**< [  3:  3](RO/WRSL) ACS P2P completion redirect.
                                                                 Writable through PEM()_CFG_TBL(). */
        uint32_t uf                    : 1;  /**< [  4:  4](RO) ACS upstream forwarding.
                                                                 Writable through PEM()_CFG_TBL(). */
        uint32_t ec                    : 1;  /**< [  5:  5](RO/WRSL) ACS P2P egress control.
                                                                 Writable through PEM()_CFG_TBL(). */
        uint32_t dt                    : 1;  /**< [  6:  6](RO/WRSL) ACS direct translated P2P.
                                                                 Writable through PEM()_CFG_TBL(). */
        uint32_t reserved_7            : 1;
        uint32_t ecvs                  : 8;  /**< [ 15:  8](RO/WRSL) Egress control vector size.
                                                                 Writable through PEM()_CFG_TBL(). */
        uint32_t sve                   : 1;  /**< [ 16: 16](RO) ACS source validation enable. Writable only when [SV] 1. */
        uint32_t tbe                   : 1;  /**< [ 17: 17](RO) ACS translation blocking enable. Writable only when [TB] 1. */
        uint32_t rre                   : 1;  /**< [ 18: 18](RO/WRSL) ACS P2P request redirect enable.  Writable only when [CR] is 1. */
        uint32_t cre                   : 1;  /**< [ 19: 19](RO/WRSL) ACS P2P completion redirect enable.  Writable only when [CR] is 1. */
        uint32_t ufe                   : 1;  /**< [ 20: 20](RO) ACS upstream forwarding enable.  Writable only when [UF] is 1. */
        uint32_t ece                   : 1;  /**< [ 21: 21](RO/WRSL) ACS P2P egress control enable.  Writable only when [EC] is 1. */
        uint32_t dte                   : 1;  /**< [ 22: 22](RO/WRSL) ACS direct translated P2P enable.  Writable only when [DT] is 1. */
        uint32_t reserved_23_31        : 9;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_acs_cap_ctl_s cn; */
};
typedef union cavm_pcieepx_acs_cap_ctl cavm_pcieepx_acs_cap_ctl_t;

static inline uint64_t CAVM_PCIEEPX_ACS_CAP_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_ACS_CAP_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x22c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x22c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x22c + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x22c + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_ACS_CAP_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_ACS_CAP_CTL(a) cavm_pcieepx_acs_cap_ctl_t
#define bustype_CAVM_PCIEEPX_ACS_CAP_CTL(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_ACS_CAP_CTL(a) "PCIEEPX_ACS_CAP_CTL"
#define busnum_CAVM_PCIEEPX_ACS_CAP_CTL(a) (a)
#define arguments_CAVM_PCIEEPX_ACS_CAP_CTL(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_acs_cap_hdr
 *
 * PCIe EP PCI Express ACS Extended Capability Header Register
 */
union cavm_pcieepx_acs_cap_hdr
{
    uint32_t u;
    struct cavm_pcieepx_acs_cap_hdr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t nco                   : 12; /**< [ 31: 20](RO/WRSL/H) Next capability offset.
                                                                 Writable through PEM()_CFG_TBL().

                                                                 Reset values:
                                                                 _ PF0:          0x234.
                                                                 _ PF1:          0x24c.

                                                                 For PF0, this points to the LTR Extended Capabilities by default.
                                                                 For all other PFs, this field points to the L1 Substates Extended Capabilities
                                                                 by default. */
        uint32_t cv                    : 4;  /**< [ 19: 16](RO/WRSL) Capability version.
                                                                 Writable through PEM()_CFG_TBL(). */
        uint32_t pcieec                : 16; /**< [ 15:  0](RO/WRSL) PCI Express extended capability.
                                                                 Writable through PEM()_CFG_TBL(). */
#else /* Word 0 - Little Endian */
        uint32_t pcieec                : 16; /**< [ 15:  0](RO/WRSL) PCI Express extended capability.
                                                                 Writable through PEM()_CFG_TBL(). */
        uint32_t cv                    : 4;  /**< [ 19: 16](RO/WRSL) Capability version.
                                                                 Writable through PEM()_CFG_TBL(). */
        uint32_t nco                   : 12; /**< [ 31: 20](RO/WRSL/H) Next capability offset.
                                                                 Writable through PEM()_CFG_TBL().

                                                                 Reset values:
                                                                 _ PF0:          0x234.
                                                                 _ PF1:          0x24c.

                                                                 For PF0, this points to the LTR Extended Capabilities by default.
                                                                 For all other PFs, this field points to the L1 Substates Extended Capabilities
                                                                 by default. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_acs_cap_hdr_s cn; */
};
typedef union cavm_pcieepx_acs_cap_hdr cavm_pcieepx_acs_cap_hdr_t;

static inline uint64_t CAVM_PCIEEPX_ACS_CAP_HDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_ACS_CAP_HDR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x228 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x228 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x228 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x228 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_ACS_CAP_HDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_ACS_CAP_HDR(a) cavm_pcieepx_acs_cap_hdr_t
#define bustype_CAVM_PCIEEPX_ACS_CAP_HDR(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_ACS_CAP_HDR(a) "PCIEEPX_ACS_CAP_HDR"
#define busnum_CAVM_PCIEEPX_ACS_CAP_HDR(a) (a)
#define arguments_CAVM_PCIEEPX_ACS_CAP_HDR(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_acs_egr_ctl_vec
 *
 * PCIe RC Egress Control Vector Register
 */
union cavm_pcieepx_acs_egr_ctl_vec
{
    uint32_t u;
    struct cavm_pcieepx_acs_egr_ctl_vec_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t unused                : 24; /**< [ 31:  8](RO) Reserved. */
        uint32_t ecv                   : 8;  /**< [  7:  0](R/W) Egress control vector. */
#else /* Word 0 - Little Endian */
        uint32_t ecv                   : 8;  /**< [  7:  0](R/W) Egress control vector. */
        uint32_t unused                : 24; /**< [ 31:  8](RO) Reserved. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_acs_egr_ctl_vec_s cn; */
};
typedef union cavm_pcieepx_acs_egr_ctl_vec cavm_pcieepx_acs_egr_ctl_vec_t;

static inline uint64_t CAVM_PCIEEPX_ACS_EGR_CTL_VEC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_ACS_EGR_CTL_VEC(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x230 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x230 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x230 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x230 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_ACS_EGR_CTL_VEC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_ACS_EGR_CTL_VEC(a) cavm_pcieepx_acs_egr_ctl_vec_t
#define bustype_CAVM_PCIEEPX_ACS_EGR_CTL_VEC(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_ACS_EGR_CTL_VEC(a) "PCIEEPX_ACS_EGR_CTL_VEC"
#define busnum_CAVM_PCIEEPX_ACS_EGR_CTL_VEC(a) (a)
#define arguments_CAVM_PCIEEPX_ACS_EGR_CTL_VEC(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_adv_err_cap_cntrl
 *
 * PCIe EP PF Advanced Error Capabilities and Control Register
 */
union cavm_pcieepx_adv_err_cap_cntrl
{
    uint32_t u;
    struct cavm_pcieepx_adv_err_cap_cntrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_12_31        : 20;
        uint32_t tlp_plp               : 1;  /**< [ 11: 11](RO) TLP prefix log present. */
        uint32_t mult_hdr_en           : 1;  /**< [ 10: 10](RO) Multiple header recording enable (not supported). */
        uint32_t mult_hdr_cap          : 1;  /**< [  9:  9](RO) Multiple header recording capability (not supported). */
        uint32_t ce                    : 1;  /**< [  8:  8](R/W) ECRC check enable. */
        uint32_t cc                    : 1;  /**< [  7:  7](RO) ECRC check capable. */
        uint32_t ge                    : 1;  /**< [  6:  6](R/W) ECRC generation enable. */
        uint32_t gc                    : 1;  /**< [  5:  5](RO) ECRC generation capability. */
        uint32_t fep                   : 5;  /**< [  4:  0](RO/H) First error pointer. */
#else /* Word 0 - Little Endian */
        uint32_t fep                   : 5;  /**< [  4:  0](RO/H) First error pointer. */
        uint32_t gc                    : 1;  /**< [  5:  5](RO) ECRC generation capability. */
        uint32_t ge                    : 1;  /**< [  6:  6](R/W) ECRC generation enable. */
        uint32_t cc                    : 1;  /**< [  7:  7](RO) ECRC check capable. */
        uint32_t ce                    : 1;  /**< [  8:  8](R/W) ECRC check enable. */
        uint32_t mult_hdr_cap          : 1;  /**< [  9:  9](RO) Multiple header recording capability (not supported). */
        uint32_t mult_hdr_en           : 1;  /**< [ 10: 10](RO) Multiple header recording enable (not supported). */
        uint32_t tlp_plp               : 1;  /**< [ 11: 11](RO) TLP prefix log present. */
        uint32_t reserved_12_31        : 20;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_adv_err_cap_cntrl_s cn; */
};
typedef union cavm_pcieepx_adv_err_cap_cntrl cavm_pcieepx_adv_err_cap_cntrl_t;

static inline uint64_t CAVM_PCIEEPX_ADV_ERR_CAP_CNTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_ADV_ERR_CAP_CNTRL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x118 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x118 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x118 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x118 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_ADV_ERR_CAP_CNTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_ADV_ERR_CAP_CNTRL(a) cavm_pcieepx_adv_err_cap_cntrl_t
#define bustype_CAVM_PCIEEPX_ADV_ERR_CAP_CNTRL(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_ADV_ERR_CAP_CNTRL(a) "PCIEEPX_ADV_ERR_CAP_CNTRL"
#define busnum_CAVM_PCIEEPX_ADV_ERR_CAP_CNTRL(a) (a)
#define arguments_CAVM_PCIEEPX_ADV_ERR_CAP_CNTRL(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ari_cap_ctl
 *
 * PCIe EP PF ARI Capability Register/PCI Express ARI Control Register
 */
union cavm_pcieepx_ari_cap_ctl
{
    uint32_t u;
    struct cavm_pcieepx_ari_cap_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_23_31        : 9;
        uint32_t fg                    : 3;  /**< [ 22: 20](RO) Function group. */
        uint32_t reserved_18_19        : 2;
        uint32_t acsfge                : 1;  /**< [ 17: 17](RO) ACS function groups enable (not supported). */
        uint32_t mfvcfge               : 1;  /**< [ 16: 16](RO) MFVC function groups enable (M). */
        uint32_t nfn                   : 8;  /**< [ 15:  8](RO) Next function number.
                                                                 This field indicates the function number of the next higher
                                                                 numbered function in the device, or 0x0 if there are no higher
                                                                 numbered functions.  Function 0 starts this linked list of
                                                                 functions. */
        uint32_t reserved_2_7          : 6;
        uint32_t acsfgc                : 1;  /**< [  1:  1](RO) ACS function groups capability (not supported). */
        uint32_t mfvcfgc               : 1;  /**< [  0:  0](RO) MFVC function groups capability (not supported). */
#else /* Word 0 - Little Endian */
        uint32_t mfvcfgc               : 1;  /**< [  0:  0](RO) MFVC function groups capability (not supported). */
        uint32_t acsfgc                : 1;  /**< [  1:  1](RO) ACS function groups capability (not supported). */
        uint32_t reserved_2_7          : 6;
        uint32_t nfn                   : 8;  /**< [ 15:  8](RO) Next function number.
                                                                 This field indicates the function number of the next higher
                                                                 numbered function in the device, or 0x0 if there are no higher
                                                                 numbered functions.  Function 0 starts this linked list of
                                                                 functions. */
        uint32_t mfvcfge               : 1;  /**< [ 16: 16](RO) MFVC function groups enable (M). */
        uint32_t acsfge                : 1;  /**< [ 17: 17](RO) ACS function groups enable (not supported). */
        uint32_t reserved_18_19        : 2;
        uint32_t fg                    : 3;  /**< [ 22: 20](RO) Function group. */
        uint32_t reserved_23_31        : 9;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ari_cap_ctl_s cn; */
};
typedef union cavm_pcieepx_ari_cap_ctl cavm_pcieepx_ari_cap_ctl_t;

static inline uint64_t CAVM_PCIEEPX_ARI_CAP_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_ARI_CAP_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x15c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x15c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x15c + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x15c + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_ARI_CAP_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_ARI_CAP_CTL(a) cavm_pcieepx_ari_cap_ctl_t
#define bustype_CAVM_PCIEEPX_ARI_CAP_CTL(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_ARI_CAP_CTL(a) "PCIEEPX_ARI_CAP_CTL"
#define busnum_CAVM_PCIEEPX_ARI_CAP_CTL(a) (a)
#define arguments_CAVM_PCIEEPX_ARI_CAP_CTL(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ari_cap_hdr
 *
 * PCIe EP PF ARI Capability Header Register
 */
union cavm_pcieepx_ari_cap_hdr
{
    uint32_t u;
    struct cavm_pcieepx_ari_cap_hdr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t nco                   : 12; /**< [ 31: 20](RO/WRSL/H) Next capability offset.

                                                                 Reset values:
                                                                 _ PF0:          0x168.
                                                                 _ PF1:          0x1e8.

                                                                 For PF0, this points to the secondary PCI Express capabilities
                                                                 by default.  For all other PFs, points to the PCIe SR-IOV
                                                                 Capability Header Register by default. */
        uint32_t cv                    : 4;  /**< [ 19: 16](RO/WRSL) Capability version. */
        uint32_t ariid                 : 16; /**< [ 15:  0](RO/WRSL) PCI Express extended capability. */
#else /* Word 0 - Little Endian */
        uint32_t ariid                 : 16; /**< [ 15:  0](RO/WRSL) PCI Express extended capability. */
        uint32_t cv                    : 4;  /**< [ 19: 16](RO/WRSL) Capability version. */
        uint32_t nco                   : 12; /**< [ 31: 20](RO/WRSL/H) Next capability offset.

                                                                 Reset values:
                                                                 _ PF0:          0x168.
                                                                 _ PF1:          0x1e8.

                                                                 For PF0, this points to the secondary PCI Express capabilities
                                                                 by default.  For all other PFs, points to the PCIe SR-IOV
                                                                 Capability Header Register by default. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ari_cap_hdr_s cn; */
};
typedef union cavm_pcieepx_ari_cap_hdr cavm_pcieepx_ari_cap_hdr_t;

static inline uint64_t CAVM_PCIEEPX_ARI_CAP_HDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_ARI_CAP_HDR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x158 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x158 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x158 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x158 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_ARI_CAP_HDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_ARI_CAP_HDR(a) cavm_pcieepx_ari_cap_hdr_t
#define bustype_CAVM_PCIEEPX_ARI_CAP_HDR(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_ARI_CAP_HDR(a) "PCIEEPX_ARI_CAP_HDR"
#define busnum_CAVM_PCIEEPX_ARI_CAP_HDR(a) (a)
#define arguments_CAVM_PCIEEPX_ARI_CAP_HDR(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_aux_clk_freq
 *
 * PCIe EP PF Auxiliary Clock Frequency Control Register
 */
union cavm_pcieepx_aux_clk_freq
{
    uint32_t u;
    struct cavm_pcieepx_aux_clk_freq_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_10_31        : 22;
        uint32_t upc_supp              : 10; /**< [  9:  0](R/W) The aux_clk frequency in MHz. This value is used to provide a 1 us reference for
                                                                 counting time during low-power states with aux_clk when the PHY has removed the
                                                                 pipe_clk. */
#else /* Word 0 - Little Endian */
        uint32_t upc_supp              : 10; /**< [  9:  0](R/W) The aux_clk frequency in MHz. This value is used to provide a 1 us reference for
                                                                 counting time during low-power states with aux_clk when the PHY has removed the
                                                                 pipe_clk. */
        uint32_t reserved_10_31        : 22;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_aux_clk_freq_s cn; */
};
typedef union cavm_pcieepx_aux_clk_freq cavm_pcieepx_aux_clk_freq_t;

static inline uint64_t CAVM_PCIEEPX_AUX_CLK_FREQ(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_AUX_CLK_FREQ(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0xb40 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0xb40 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0xb40 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0xb40 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_AUX_CLK_FREQ", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_AUX_CLK_FREQ(a) cavm_pcieepx_aux_clk_freq_t
#define bustype_CAVM_PCIEEPX_AUX_CLK_FREQ(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_AUX_CLK_FREQ(a) "PCIEEPX_AUX_CLK_FREQ"
#define busnum_CAVM_PCIEEPX_AUX_CLK_FREQ(a) (a)
#define arguments_CAVM_PCIEEPX_AUX_CLK_FREQ(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP_SHADOW) pcieep#_bar0_maskl
 *
 * PCIe EP PF BAR Mask 0 Low Register
 * The BAR 0 mask register is invisible to host software and not readable from the application.
 * The BAR 0 mask register is only writable through PEM()_CFG_TBL().
 */
union cavm_pcieepx_bar0_maskl
{
    uint32_t u;
    struct cavm_pcieepx_bar0_maskl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t lmask                 : 31; /**< [ 31:  1](WORSL/H) BAR mask low. */
        uint32_t enb                   : 1;  /**< [  0:  0](WORSL/H) BAR enable.
                                                                 0 = BAR 0 is disabled.
                                                                 1 = BAR 0 is enabled.

                                                                 Bit 0 is interpreted as BAR enable when writing to the BAR mask register rather than as a
                                                                 mask bit because bit 0 of a BAR is always masked from writing by host software. Bit 0 must
                                                                 be written prior to writing the other mask bits. */
#else /* Word 0 - Little Endian */
        uint32_t enb                   : 1;  /**< [  0:  0](WORSL/H) BAR enable.
                                                                 0 = BAR 0 is disabled.
                                                                 1 = BAR 0 is enabled.

                                                                 Bit 0 is interpreted as BAR enable when writing to the BAR mask register rather than as a
                                                                 mask bit because bit 0 of a BAR is always masked from writing by host software. Bit 0 must
                                                                 be written prior to writing the other mask bits. */
        uint32_t lmask                 : 31; /**< [ 31:  1](WORSL/H) BAR mask low. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_bar0_maskl_s cn; */
};
typedef union cavm_pcieepx_bar0_maskl cavm_pcieepx_bar0_maskl_t;

static inline uint64_t CAVM_PCIEEPX_BAR0_MASKL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_BAR0_MASKL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x10010 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x10010 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x10010 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x10010 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_BAR0_MASKL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_BAR0_MASKL(a) cavm_pcieepx_bar0_maskl_t
#define bustype_CAVM_PCIEEPX_BAR0_MASKL(a) CSR_TYPE_PCICONFIGEP_SHADOW
#define basename_CAVM_PCIEEPX_BAR0_MASKL(a) "PCIEEPX_BAR0_MASKL"
#define busnum_CAVM_PCIEEPX_BAR0_MASKL(a) (a)
#define arguments_CAVM_PCIEEPX_BAR0_MASKL(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP_SHADOW) pcieep#_bar0_masku
 *
 * PCIe EP PF BAR Mask 0 High Register
 * The BAR 0 mask register is invisible to host software and not readable from the application.
 * The BAR 0 mask register is only writable through PEM()_CFG_TBL().
 */
union cavm_pcieepx_bar0_masku
{
    uint32_t u;
    struct cavm_pcieepx_bar0_masku_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t umask                 : 32; /**< [ 31:  0](WORSL/H) BAR mask high. */
#else /* Word 0 - Little Endian */
        uint32_t umask                 : 32; /**< [ 31:  0](WORSL/H) BAR mask high. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_bar0_masku_s cn; */
};
typedef union cavm_pcieepx_bar0_masku cavm_pcieepx_bar0_masku_t;

static inline uint64_t CAVM_PCIEEPX_BAR0_MASKU(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_BAR0_MASKU(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x10014 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x10014 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x10014 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x10014 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_BAR0_MASKU", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_BAR0_MASKU(a) cavm_pcieepx_bar0_masku_t
#define bustype_CAVM_PCIEEPX_BAR0_MASKU(a) CSR_TYPE_PCICONFIGEP_SHADOW
#define basename_CAVM_PCIEEPX_BAR0_MASKU(a) "PCIEEPX_BAR0_MASKU"
#define busnum_CAVM_PCIEEPX_BAR0_MASKU(a) (a)
#define arguments_CAVM_PCIEEPX_BAR0_MASKU(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_bar0l
 *
 * PCIe EP PF Base Address 0 Low Register
 */
union cavm_pcieepx_bar0l
{
    uint32_t u;
    struct cavm_pcieepx_bar0l_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t lbab                  : 16; /**< [ 31: 16](R/W) Lower bits of the BAR 0 base address. */
        uint32_t reserved_4_15         : 12;
        uint32_t pf                    : 1;  /**< [  3:  3](RO/WRSL) Prefetchable. This field is writable through PEM()_CFG_TBL(). However, the application
                                                                 must not change this field. */
        uint32_t typ                   : 2;  /**< [  2:  1](RO/WRSL) BAR type.
                                                                 0x0 = 32-bit BAR.
                                                                 0x2 = 64-bit BAR.

                                                                 This field is writable through PEM()_CFG_TBL(). However, the application must not change
                                                                 this field. */
        uint32_t mspc                  : 1;  /**< [  0:  0](RO/WRSL) Memory space indicator.
                                                                 0 = BAR 0 is a memory BAR.
                                                                 1 = BAR 0 is an I/O BAR.

                                                                 This field is writable through PEM()_CFG_TBL(). However, the application must not change
                                                                 this field. */
#else /* Word 0 - Little Endian */
        uint32_t mspc                  : 1;  /**< [  0:  0](RO/WRSL) Memory space indicator.
                                                                 0 = BAR 0 is a memory BAR.
                                                                 1 = BAR 0 is an I/O BAR.

                                                                 This field is writable through PEM()_CFG_TBL(). However, the application must not change
                                                                 this field. */
        uint32_t typ                   : 2;  /**< [  2:  1](RO/WRSL) BAR type.
                                                                 0x0 = 32-bit BAR.
                                                                 0x2 = 64-bit BAR.

                                                                 This field is writable through PEM()_CFG_TBL(). However, the application must not change
                                                                 this field. */
        uint32_t pf                    : 1;  /**< [  3:  3](RO/WRSL) Prefetchable. This field is writable through PEM()_CFG_TBL(). However, the application
                                                                 must not change this field. */
        uint32_t reserved_4_15         : 12;
        uint32_t lbab                  : 16; /**< [ 31: 16](R/W) Lower bits of the BAR 0 base address. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_bar0l_s cn; */
};
typedef union cavm_pcieepx_bar0l cavm_pcieepx_bar0l_t;

static inline uint64_t CAVM_PCIEEPX_BAR0L(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_BAR0L(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x10 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x10 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x10 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x10 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_BAR0L", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_BAR0L(a) cavm_pcieepx_bar0l_t
#define bustype_CAVM_PCIEEPX_BAR0L(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_BAR0L(a) "PCIEEPX_BAR0L"
#define busnum_CAVM_PCIEEPX_BAR0L(a) (a)
#define arguments_CAVM_PCIEEPX_BAR0L(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_bar0u
 *
 * PCIe EP PF Base Address 0 High Register
 */
union cavm_pcieepx_bar0u
{
    uint32_t u;
    struct cavm_pcieepx_bar0u_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t ubab                  : 32; /**< [ 31:  0](R/W) Contains the upper 32 bits of the BAR 0 base address. */
#else /* Word 0 - Little Endian */
        uint32_t ubab                  : 32; /**< [ 31:  0](R/W) Contains the upper 32 bits of the BAR 0 base address. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_bar0u_s cn; */
};
typedef union cavm_pcieepx_bar0u cavm_pcieepx_bar0u_t;

static inline uint64_t CAVM_PCIEEPX_BAR0U(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_BAR0U(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x14 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x14 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x14 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x14 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_BAR0U", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_BAR0U(a) cavm_pcieepx_bar0u_t
#define bustype_CAVM_PCIEEPX_BAR0U(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_BAR0U(a) "PCIEEPX_BAR0U"
#define busnum_CAVM_PCIEEPX_BAR0U(a) (a)
#define arguments_CAVM_PCIEEPX_BAR0U(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP_SHADOW) pcieep#_bar2_maskl
 *
 * PCIe EP PF BAR Mask 2 Low Register
 * The BAR 2 mask register is invisible to host software and not readable from the application.
 * The BAR 2 mask register is only writable through PEM()_CFG_TBL().
 */
union cavm_pcieepx_bar2_maskl
{
    uint32_t u;
    struct cavm_pcieepx_bar2_maskl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t lmask                 : 31; /**< [ 31:  1](WORSL/H) BAR mask low. */
        uint32_t enb                   : 1;  /**< [  0:  0](WORSL/H) BAR enable.
                                                                 0 = BAR 2 is disabled.
                                                                 1 = BAR 2 is enabled.

                                                                 Bit 0 is interpreted as BAR enable when writing to the BAR mask register rather than as a
                                                                 mask bit because bit 0 of a BAR is always masked from writing by host software. Bit 0 must
                                                                 be written prior to writing the other mask bits. */
#else /* Word 0 - Little Endian */
        uint32_t enb                   : 1;  /**< [  0:  0](WORSL/H) BAR enable.
                                                                 0 = BAR 2 is disabled.
                                                                 1 = BAR 2 is enabled.

                                                                 Bit 0 is interpreted as BAR enable when writing to the BAR mask register rather than as a
                                                                 mask bit because bit 0 of a BAR is always masked from writing by host software. Bit 0 must
                                                                 be written prior to writing the other mask bits. */
        uint32_t lmask                 : 31; /**< [ 31:  1](WORSL/H) BAR mask low. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_bar2_maskl_s cn; */
};
typedef union cavm_pcieepx_bar2_maskl cavm_pcieepx_bar2_maskl_t;

static inline uint64_t CAVM_PCIEEPX_BAR2_MASKL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_BAR2_MASKL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x10018 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x10018 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x10018 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x10018 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_BAR2_MASKL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_BAR2_MASKL(a) cavm_pcieepx_bar2_maskl_t
#define bustype_CAVM_PCIEEPX_BAR2_MASKL(a) CSR_TYPE_PCICONFIGEP_SHADOW
#define basename_CAVM_PCIEEPX_BAR2_MASKL(a) "PCIEEPX_BAR2_MASKL"
#define busnum_CAVM_PCIEEPX_BAR2_MASKL(a) (a)
#define arguments_CAVM_PCIEEPX_BAR2_MASKL(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP_SHADOW) pcieep#_bar2_masku
 *
 * PCIe EP PF BAR Mask 2 High Register
 * The BAR 2 mask register is invisible to host software and not readable from the application.
 * The BAR 2 mask register is only writable through PEM()_CFG_TBL().
 */
union cavm_pcieepx_bar2_masku
{
    uint32_t u;
    struct cavm_pcieepx_bar2_masku_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t umask                 : 32; /**< [ 31:  0](WORSL/H) BAR mask high. */
#else /* Word 0 - Little Endian */
        uint32_t umask                 : 32; /**< [ 31:  0](WORSL/H) BAR mask high. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_bar2_masku_s cn; */
};
typedef union cavm_pcieepx_bar2_masku cavm_pcieepx_bar2_masku_t;

static inline uint64_t CAVM_PCIEEPX_BAR2_MASKU(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_BAR2_MASKU(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x1001c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x1001c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x1001c + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x1001c + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_BAR2_MASKU", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_BAR2_MASKU(a) cavm_pcieepx_bar2_masku_t
#define bustype_CAVM_PCIEEPX_BAR2_MASKU(a) CSR_TYPE_PCICONFIGEP_SHADOW
#define basename_CAVM_PCIEEPX_BAR2_MASKU(a) "PCIEEPX_BAR2_MASKU"
#define busnum_CAVM_PCIEEPX_BAR2_MASKU(a) (a)
#define arguments_CAVM_PCIEEPX_BAR2_MASKU(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_bar2l
 *
 * PCIe EP PF Base Address 2 Low Register
 */
union cavm_pcieepx_bar2l
{
    uint32_t u;
    struct cavm_pcieepx_bar2l_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t lbab                  : 12; /**< [ 31: 20](R/W) Lower bits of the BAR 2 base address. */
        uint32_t reserved_4_19         : 16;
        uint32_t pf                    : 1;  /**< [  3:  3](RO/WRSL) Prefetchable. This field is writable through PEM()_CFG_TBL(). However, the application
                                                                 must not change this field. */
        uint32_t typ                   : 2;  /**< [  2:  1](RO/WRSL) BAR type.
                                                                 0x0 = 32-bit BAR.
                                                                 0x2 = 64-bit BAR.

                                                                 This field is writable through PEM()_CFG_TBL(). However, the application must not change
                                                                 this field. */
        uint32_t mspc                  : 1;  /**< [  0:  0](RO/WRSL) Memory space indicator.
                                                                 0 = BAR 1 is a memory BAR.
                                                                 1 = BAR 1 is an I/O BAR.

                                                                 This field is writable through PEM()_CFG_TBL(). However, the application must not change
                                                                 this field. */
#else /* Word 0 - Little Endian */
        uint32_t mspc                  : 1;  /**< [  0:  0](RO/WRSL) Memory space indicator.
                                                                 0 = BAR 1 is a memory BAR.
                                                                 1 = BAR 1 is an I/O BAR.

                                                                 This field is writable through PEM()_CFG_TBL(). However, the application must not change
                                                                 this field. */
        uint32_t typ                   : 2;  /**< [  2:  1](RO/WRSL) BAR type.
                                                                 0x0 = 32-bit BAR.
                                                                 0x2 = 64-bit BAR.

                                                                 This field is writable through PEM()_CFG_TBL(). However, the application must not change
                                                                 this field. */
        uint32_t pf                    : 1;  /**< [  3:  3](RO/WRSL) Prefetchable. This field is writable through PEM()_CFG_TBL(). However, the application
                                                                 must not change this field. */
        uint32_t reserved_4_19         : 16;
        uint32_t lbab                  : 12; /**< [ 31: 20](R/W) Lower bits of the BAR 2 base address. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_bar2l_s cn; */
};
typedef union cavm_pcieepx_bar2l cavm_pcieepx_bar2l_t;

static inline uint64_t CAVM_PCIEEPX_BAR2L(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_BAR2L(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x18 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x18 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x18 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x18 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_BAR2L", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_BAR2L(a) cavm_pcieepx_bar2l_t
#define bustype_CAVM_PCIEEPX_BAR2L(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_BAR2L(a) "PCIEEPX_BAR2L"
#define busnum_CAVM_PCIEEPX_BAR2L(a) (a)
#define arguments_CAVM_PCIEEPX_BAR2L(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_bar2u
 *
 * PCIe EP PF Base Address 2 High Register
 */
union cavm_pcieepx_bar2u
{
    uint32_t u;
    struct cavm_pcieepx_bar2u_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t ubab                  : 32; /**< [ 31:  0](R/W) Contains the upper 32 bits of the BAR 2 base address. */
#else /* Word 0 - Little Endian */
        uint32_t ubab                  : 32; /**< [ 31:  0](R/W) Contains the upper 32 bits of the BAR 2 base address. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_bar2u_s cn; */
};
typedef union cavm_pcieepx_bar2u cavm_pcieepx_bar2u_t;

static inline uint64_t CAVM_PCIEEPX_BAR2U(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_BAR2U(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x1c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x1c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x1c + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x1c + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_BAR2U", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_BAR2U(a) cavm_pcieepx_bar2u_t
#define bustype_CAVM_PCIEEPX_BAR2U(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_BAR2U(a) "PCIEEPX_BAR2U"
#define busnum_CAVM_PCIEEPX_BAR2U(a) (a)
#define arguments_CAVM_PCIEEPX_BAR2U(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP_SHADOW) pcieep#_bar4_maskl
 *
 * PCIe EP PF BAR Mask 4 Low Register
 * The BAR 4 mask register is invisible to host software and not readable from the application.
 * The BAR 4 mask register is only writable through PEM()_CFG_TBL().
 */
union cavm_pcieepx_bar4_maskl
{
    uint32_t u;
    struct cavm_pcieepx_bar4_maskl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t lmask                 : 31; /**< [ 31:  1](WORSL/H) BAR mask low. */
        uint32_t enb                   : 1;  /**< [  0:  0](WORSL/H) BAR enable.
                                                                 0 = BAR 4 is disabled.
                                                                 1 = BAR 4 is enabled.

                                                                 Bit 0 is interpreted as BAR enable when writing to the BAR mask register rather than as a
                                                                 mask bit because bit 0 of a BAR is always masked from writing by host software. Bit 0 must
                                                                 be written prior to writing the other mask bits. */
#else /* Word 0 - Little Endian */
        uint32_t enb                   : 1;  /**< [  0:  0](WORSL/H) BAR enable.
                                                                 0 = BAR 4 is disabled.
                                                                 1 = BAR 4 is enabled.

                                                                 Bit 0 is interpreted as BAR enable when writing to the BAR mask register rather than as a
                                                                 mask bit because bit 0 of a BAR is always masked from writing by host software. Bit 0 must
                                                                 be written prior to writing the other mask bits. */
        uint32_t lmask                 : 31; /**< [ 31:  1](WORSL/H) BAR mask low. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_bar4_maskl_s cn; */
};
typedef union cavm_pcieepx_bar4_maskl cavm_pcieepx_bar4_maskl_t;

static inline uint64_t CAVM_PCIEEPX_BAR4_MASKL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_BAR4_MASKL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x10020 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x10020 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x10020 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x10020 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_BAR4_MASKL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_BAR4_MASKL(a) cavm_pcieepx_bar4_maskl_t
#define bustype_CAVM_PCIEEPX_BAR4_MASKL(a) CSR_TYPE_PCICONFIGEP_SHADOW
#define basename_CAVM_PCIEEPX_BAR4_MASKL(a) "PCIEEPX_BAR4_MASKL"
#define busnum_CAVM_PCIEEPX_BAR4_MASKL(a) (a)
#define arguments_CAVM_PCIEEPX_BAR4_MASKL(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP_SHADOW) pcieep#_bar4_masku
 *
 * PCIe EP PF BAR Mask 4 High Register
 * The BAR 4 mask register is invisible to host software and not readable from the application.
 * The BAR 4 mask register is only writable through PEM()_CFG_TBL().
 */
union cavm_pcieepx_bar4_masku
{
    uint32_t u;
    struct cavm_pcieepx_bar4_masku_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t umask                 : 32; /**< [ 31:  0](WORSL/H) BAR mask high. */
#else /* Word 0 - Little Endian */
        uint32_t umask                 : 32; /**< [ 31:  0](WORSL/H) BAR mask high. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_bar4_masku_s cn; */
};
typedef union cavm_pcieepx_bar4_masku cavm_pcieepx_bar4_masku_t;

static inline uint64_t CAVM_PCIEEPX_BAR4_MASKU(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_BAR4_MASKU(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x10024 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x10024 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x10024 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x10024 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_BAR4_MASKU", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_BAR4_MASKU(a) cavm_pcieepx_bar4_masku_t
#define bustype_CAVM_PCIEEPX_BAR4_MASKU(a) CSR_TYPE_PCICONFIGEP_SHADOW
#define basename_CAVM_PCIEEPX_BAR4_MASKU(a) "PCIEEPX_BAR4_MASKU"
#define busnum_CAVM_PCIEEPX_BAR4_MASKU(a) (a)
#define arguments_CAVM_PCIEEPX_BAR4_MASKU(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_bar4l
 *
 * PCIe EP PF Base Address 4 Low Register
 */
union cavm_pcieepx_bar4l
{
    uint32_t u;
    struct cavm_pcieepx_bar4l_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t lbab                  : 16; /**< [ 31: 16](R/W) Lower bits of the BAR 4 base address. */
        uint32_t reserved_4_15         : 12;
        uint32_t pf                    : 1;  /**< [  3:  3](RO/WRSL) Prefetchable. This field is writable through PEM()_CFG_TBL(). However, the application
                                                                 must not change this field. */
        uint32_t typ                   : 2;  /**< [  2:  1](RO/WRSL) BAR type.
                                                                 0x0 = 32-bit BAR.
                                                                 0x2 = 64-bit BAR.

                                                                 This field is writable through PEM()_CFG_TBL(). However, the application must not change
                                                                 this field. */
        uint32_t mspc                  : 1;  /**< [  0:  0](RO/WRSL) Memory space indicator.
                                                                 0 = BAR 2 is a memory BAR.
                                                                 1 = BAR 2 is an I/O BAR.

                                                                 This field is writable through PEM()_CFG_TBL(). However, the application must not change
                                                                 this field. */
#else /* Word 0 - Little Endian */
        uint32_t mspc                  : 1;  /**< [  0:  0](RO/WRSL) Memory space indicator.
                                                                 0 = BAR 2 is a memory BAR.
                                                                 1 = BAR 2 is an I/O BAR.

                                                                 This field is writable through PEM()_CFG_TBL(). However, the application must not change
                                                                 this field. */
        uint32_t typ                   : 2;  /**< [  2:  1](RO/WRSL) BAR type.
                                                                 0x0 = 32-bit BAR.
                                                                 0x2 = 64-bit BAR.

                                                                 This field is writable through PEM()_CFG_TBL(). However, the application must not change
                                                                 this field. */
        uint32_t pf                    : 1;  /**< [  3:  3](RO/WRSL) Prefetchable. This field is writable through PEM()_CFG_TBL(). However, the application
                                                                 must not change this field. */
        uint32_t reserved_4_15         : 12;
        uint32_t lbab                  : 16; /**< [ 31: 16](R/W) Lower bits of the BAR 4 base address. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_bar4l_s cn; */
};
typedef union cavm_pcieepx_bar4l cavm_pcieepx_bar4l_t;

static inline uint64_t CAVM_PCIEEPX_BAR4L(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_BAR4L(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x20 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x20 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x20 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x20 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_BAR4L", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_BAR4L(a) cavm_pcieepx_bar4l_t
#define bustype_CAVM_PCIEEPX_BAR4L(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_BAR4L(a) "PCIEEPX_BAR4L"
#define busnum_CAVM_PCIEEPX_BAR4L(a) (a)
#define arguments_CAVM_PCIEEPX_BAR4L(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_bar4u
 *
 * PCIe EP PF Base Address 2 High Register
 */
union cavm_pcieepx_bar4u
{
    uint32_t u;
    struct cavm_pcieepx_bar4u_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t ubab                  : 32; /**< [ 31:  0](R/W) Contains the upper 32 bits of the BAR 2 base address. */
#else /* Word 0 - Little Endian */
        uint32_t ubab                  : 32; /**< [ 31:  0](R/W) Contains the upper 32 bits of the BAR 2 base address. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_bar4u_s cn; */
};
typedef union cavm_pcieepx_bar4u cavm_pcieepx_bar4u_t;

static inline uint64_t CAVM_PCIEEPX_BAR4U(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_BAR4U(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x24 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x24 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x24 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x24 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_BAR4U", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_BAR4U(a) cavm_pcieepx_bar4u_t
#define bustype_CAVM_PCIEEPX_BAR4U(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_BAR4U(a) "PCIEEPX_BAR4U"
#define busnum_CAVM_PCIEEPX_BAR4U(a) (a)
#define arguments_CAVM_PCIEEPX_BAR4U(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_c_rcv_credit
 *
 * PCIe EP PF VC0 Completion Receive Queue Control Register
 */
union cavm_pcieepx_c_rcv_credit
{
    uint32_t u;
    struct cavm_pcieepx_c_rcv_credit_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_28_31        : 4;
        uint32_t vc0_cds               : 2;  /**< [ 27: 26](RO/WRSL) VC0 scale completion data credits. */
        uint32_t vc0_chs               : 2;  /**< [ 25: 24](RO/WRSL) VC0 scale completion header credits. */
        uint32_t queue_mode            : 3;  /**< [ 23: 21](RO/WRSL) VC0 completion TLP queue mode. The operating mode of the completion receive queue for VC0,
                                                                 used only in the segmented-buffer configuration, writable through
                                                                 PEM()_CFG_TBL().
                                                                 Only one bit can be set at a time:

                                                                 _ Bit 23 = Bypass.

                                                                 _ Bit 22 = Cut-through.

                                                                 _ Bit 21 = Store-and-forward.

                                                                 The application must not change this field. */
        uint32_t reserved_20           : 1;
        uint32_t header_credits        : 8;  /**< [ 19: 12](RO/WRSL/H) VC0 completion header credits. The number of initial completion header credits for VC0,
                                                                 used for all receive queue buffer configurations. This field is writable through
                                                                 PEM()_CFG_TBL(). */
        uint32_t data_credits          : 12; /**< [ 11:  0](RO/WRSL/H) VC0 completion data credits. The number of initial completion data credits for VC0, used
                                                                 for all receive queue buffer configurations. This field is writable through
                                                                 PEM()_CFG_TBL(). */
#else /* Word 0 - Little Endian */
        uint32_t data_credits          : 12; /**< [ 11:  0](RO/WRSL/H) VC0 completion data credits. The number of initial completion data credits for VC0, used
                                                                 for all receive queue buffer configurations. This field is writable through
                                                                 PEM()_CFG_TBL(). */
        uint32_t header_credits        : 8;  /**< [ 19: 12](RO/WRSL/H) VC0 completion header credits. The number of initial completion header credits for VC0,
                                                                 used for all receive queue buffer configurations. This field is writable through
                                                                 PEM()_CFG_TBL(). */
        uint32_t reserved_20           : 1;
        uint32_t queue_mode            : 3;  /**< [ 23: 21](RO/WRSL) VC0 completion TLP queue mode. The operating mode of the completion receive queue for VC0,
                                                                 used only in the segmented-buffer configuration, writable through
                                                                 PEM()_CFG_TBL().
                                                                 Only one bit can be set at a time:

                                                                 _ Bit 23 = Bypass.

                                                                 _ Bit 22 = Cut-through.

                                                                 _ Bit 21 = Store-and-forward.

                                                                 The application must not change this field. */
        uint32_t vc0_chs               : 2;  /**< [ 25: 24](RO/WRSL) VC0 scale completion header credits. */
        uint32_t vc0_cds               : 2;  /**< [ 27: 26](RO/WRSL) VC0 scale completion data credits. */
        uint32_t reserved_28_31        : 4;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_c_rcv_credit_s cn; */
};
typedef union cavm_pcieepx_c_rcv_credit cavm_pcieepx_c_rcv_credit_t;

static inline uint64_t CAVM_PCIEEPX_C_RCV_CREDIT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_C_RCV_CREDIT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x750 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x750 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x750 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x750 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_C_RCV_CREDIT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_C_RCV_CREDIT(a) cavm_pcieepx_c_rcv_credit_t
#define bustype_CAVM_PCIEEPX_C_RCV_CREDIT(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_C_RCV_CREDIT(a) "PCIEEPX_C_RCV_CREDIT"
#define busnum_CAVM_PCIEEPX_C_RCV_CREDIT(a) (a)
#define arguments_CAVM_PCIEEPX_C_RCV_CREDIT(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_c_xmit_credit
 *
 * PCIe EP PF Transmit Completion FC Credit Status Register
 */
union cavm_pcieepx_c_xmit_credit
{
    uint32_t u;
    struct cavm_pcieepx_c_xmit_credit_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_28_31        : 4;
        uint32_t tchfcc                : 12; /**< [ 27: 16](RO/H) Transmit completion header FC credits. The completion header credits advertised by the
                                                                 receiver at the other end of the link, updated with each UpdateFC DLLP. */
        uint32_t tcdfcc                : 16; /**< [ 15:  0](RO/H) Transmit completion data FC credits. The completion data credits advertised by the
                                                                 receiver at the other end of the link, updated with each UpdateFC DLLP. */
#else /* Word 0 - Little Endian */
        uint32_t tcdfcc                : 16; /**< [ 15:  0](RO/H) Transmit completion data FC credits. The completion data credits advertised by the
                                                                 receiver at the other end of the link, updated with each UpdateFC DLLP. */
        uint32_t tchfcc                : 12; /**< [ 27: 16](RO/H) Transmit completion header FC credits. The completion header credits advertised by the
                                                                 receiver at the other end of the link, updated with each UpdateFC DLLP. */
        uint32_t reserved_28_31        : 4;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_c_xmit_credit_s cn; */
};
typedef union cavm_pcieepx_c_xmit_credit cavm_pcieepx_c_xmit_credit_t;

static inline uint64_t CAVM_PCIEEPX_C_XMIT_CREDIT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_C_XMIT_CREDIT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x738 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x738 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x738 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x738 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_C_XMIT_CREDIT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_C_XMIT_CREDIT(a) cavm_pcieepx_c_xmit_credit_t
#define bustype_CAVM_PCIEEPX_C_XMIT_CREDIT(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_C_XMIT_CREDIT(a) "PCIEEPX_C_XMIT_CREDIT"
#define busnum_CAVM_PCIEEPX_C_XMIT_CREDIT(a) (a)
#define arguments_CAVM_PCIEEPX_C_XMIT_CREDIT(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_cap_ptr
 *
 * PCIe EP PF Capability Pointer Register
 */
union cavm_pcieepx_cap_ptr
{
    uint32_t u;
    struct cavm_pcieepx_cap_ptr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t cp                    : 8;  /**< [  7:  0](RO/WRSL) First capability pointer. Points to power management capability structure by default,
                                                                 writable through PEM()_CFG_TBL(). */
#else /* Word 0 - Little Endian */
        uint32_t cp                    : 8;  /**< [  7:  0](RO/WRSL) First capability pointer. Points to power management capability structure by default,
                                                                 writable through PEM()_CFG_TBL(). */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_cap_ptr_s cn; */
};
typedef union cavm_pcieepx_cap_ptr cavm_pcieepx_cap_ptr_t;

static inline uint64_t CAVM_PCIEEPX_CAP_PTR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_CAP_PTR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x34 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x34 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x34 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x34 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_CAP_PTR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_CAP_PTR(a) cavm_pcieepx_cap_ptr_t
#define bustype_CAVM_PCIEEPX_CAP_PTR(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_CAP_PTR(a) "PCIEEPX_CAP_PTR"
#define busnum_CAVM_PCIEEPX_CAP_PTR(a) (a)
#define arguments_CAVM_PCIEEPX_CAP_PTR(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_cardbus
 *
 * PCIe EP PF Card Bus CIS Pointer Register
 */
union cavm_pcieepx_cardbus
{
    uint32_t u;
    struct cavm_pcieepx_cardbus_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t cisp                  : 32; /**< [ 31:  0](RO/WRSL) CardBus CIS pointer. Optional, writable through PEM()_CFG_TBL(). */
#else /* Word 0 - Little Endian */
        uint32_t cisp                  : 32; /**< [ 31:  0](RO/WRSL) CardBus CIS pointer. Optional, writable through PEM()_CFG_TBL(). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_cardbus_s cn; */
};
typedef union cavm_pcieepx_cardbus cavm_pcieepx_cardbus_t;

static inline uint64_t CAVM_PCIEEPX_CARDBUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_CARDBUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x28 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x28 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x28 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x28 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_CARDBUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_CARDBUS(a) cavm_pcieepx_cardbus_t
#define bustype_CAVM_PCIEEPX_CARDBUS(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_CARDBUS(a) "PCIEEPX_CARDBUS"
#define busnum_CAVM_PCIEEPX_CARDBUS(a) (a)
#define arguments_CAVM_PCIEEPX_CARDBUS(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_clk_gating_ctl
 *
 * PCIe EP PF RADM clock gating enable control Register
 */
union cavm_pcieepx_clk_gating_ctl
{
    uint32_t u;
    struct cavm_pcieepx_clk_gating_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_1_31         : 31;
        uint32_t radm_clk_gating_en    : 1;  /**< [  0:  0](R/W) Enable RADM clock gating feature when there is no
                                                                 receive traffic, receive queues and pre/post-queue pipelines
                                                                 are empty, RADM completion LUT is empty, and there
                                                                 are no FLR actions pending.
                                                                 0x0 = Disable.
                                                                 0x1 = Enable. */
#else /* Word 0 - Little Endian */
        uint32_t radm_clk_gating_en    : 1;  /**< [  0:  0](R/W) Enable RADM clock gating feature when there is no
                                                                 receive traffic, receive queues and pre/post-queue pipelines
                                                                 are empty, RADM completion LUT is empty, and there
                                                                 are no FLR actions pending.
                                                                 0x0 = Disable.
                                                                 0x1 = Enable. */
        uint32_t reserved_1_31         : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_clk_gating_ctl_s cn; */
};
typedef union cavm_pcieepx_clk_gating_ctl cavm_pcieepx_clk_gating_ctl_t;

static inline uint64_t CAVM_PCIEEPX_CLK_GATING_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_CLK_GATING_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x88c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x88c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x88c + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x88c + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_CLK_GATING_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_CLK_GATING_CTL(a) cavm_pcieepx_clk_gating_ctl_t
#define bustype_CAVM_PCIEEPX_CLK_GATING_CTL(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_CLK_GATING_CTL(a) "PCIEEPX_CLK_GATING_CTL"
#define busnum_CAVM_PCIEEPX_CLK_GATING_CTL(a) (a)
#define arguments_CAVM_PCIEEPX_CLK_GATING_CTL(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_clsize
 *
 * PCIe EP PF BIST, Header Type, Master Latency Timer, Cache Line Size Register
 */
union cavm_pcieepx_clsize
{
    uint32_t u;
    struct cavm_pcieepx_clsize_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t bist                  : 8;  /**< [ 31: 24](RO) The BIST register functions are not supported. All 8 bits of the BIST register
                                                                 are hardwired to zero. */
        uint32_t mfd                   : 1;  /**< [ 23: 23](RO/WRSL) Multi function device. The multi function device bit is writable through PEM()_CFG_TBL().

                                                                 Reset values:
                                                                 _ UPEM:       0x1.
                                                                 _ BPEM:       0x0. */
        uint32_t chf                   : 7;  /**< [ 22: 16](RO) Configuration header format. Hardwired to 0x0 for type 0. */
        uint32_t lt                    : 8;  /**< [ 15:  8](RO) Master latency timer. Not applicable for PCI Express, hardwired to 0x0. */
        uint32_t cls                   : 8;  /**< [  7:  0](R/W) Cache line size. The cache line size register is R/W for legacy compatibility purposes and
                                                                 is not applicable to PCI Express device functionality. Writing to the cache line size
                                                                 register does not impact functionality of the PCI Express bus. */
#else /* Word 0 - Little Endian */
        uint32_t cls                   : 8;  /**< [  7:  0](R/W) Cache line size. The cache line size register is R/W for legacy compatibility purposes and
                                                                 is not applicable to PCI Express device functionality. Writing to the cache line size
                                                                 register does not impact functionality of the PCI Express bus. */
        uint32_t lt                    : 8;  /**< [ 15:  8](RO) Master latency timer. Not applicable for PCI Express, hardwired to 0x0. */
        uint32_t chf                   : 7;  /**< [ 22: 16](RO) Configuration header format. Hardwired to 0x0 for type 0. */
        uint32_t mfd                   : 1;  /**< [ 23: 23](RO/WRSL) Multi function device. The multi function device bit is writable through PEM()_CFG_TBL().

                                                                 Reset values:
                                                                 _ UPEM:       0x1.
                                                                 _ BPEM:       0x0. */
        uint32_t bist                  : 8;  /**< [ 31: 24](RO) The BIST register functions are not supported. All 8 bits of the BIST register
                                                                 are hardwired to zero. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_clsize_s cn; */
};
typedef union cavm_pcieepx_clsize cavm_pcieepx_clsize_t;

static inline uint64_t CAVM_PCIEEPX_CLSIZE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_CLSIZE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0xc + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0xc + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0xc + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0xc + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_CLSIZE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_CLSIZE(a) cavm_pcieepx_clsize_t
#define bustype_CAVM_PCIEEPX_CLSIZE(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_CLSIZE(a) "PCIEEPX_CLSIZE"
#define busnum_CAVM_PCIEEPX_CLSIZE(a) (a)
#define arguments_CAVM_PCIEEPX_CLSIZE(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_cmd
 *
 * PCIe EP PF Command/Status Register
 */
union cavm_pcieepx_cmd
{
    uint32_t u;
    struct cavm_pcieepx_cmd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t dpe                   : 1;  /**< [ 31: 31](R/W1C/H) Detected parity error. */
        uint32_t sse                   : 1;  /**< [ 30: 30](R/W1C/H) Signaled system error. */
        uint32_t rma                   : 1;  /**< [ 29: 29](R/W1C/H) Received master abort. */
        uint32_t rta                   : 1;  /**< [ 28: 28](R/W1C/H) Received target abort. */
        uint32_t sta                   : 1;  /**< [ 27: 27](R/W1C/H) Signaled target abort. */
        uint32_t devt                  : 2;  /**< [ 26: 25](RO) DEVSEL timing. Not applicable for PCI Express. Hardwired to 0x0. */
        uint32_t mdpe                  : 1;  /**< [ 24: 24](R/W1C/H) Master data parity error. */
        uint32_t fbb                   : 1;  /**< [ 23: 23](RO) Fast back-to-back capable. Not applicable for PCI Express. Hardwired to zero. */
        uint32_t reserved_22           : 1;
        uint32_t m66                   : 1;  /**< [ 21: 21](RO) 66 MHz capable. Not applicable for PCI Express. Hardwired to zero. */
        uint32_t cl                    : 1;  /**< [ 20: 20](RO) Capabilities list. Indicates presence of an extended capability item. Hardwired to one. */
        uint32_t i_stat                : 1;  /**< [ 19: 19](RO/H) INTx status. */
        uint32_t reserved_17_18        : 2;
        uint32_t imm_readiness         : 1;  /**< [ 16: 16](RO/H) Reserved. */
        uint32_t reserved_11_15        : 5;
        uint32_t i_dis                 : 1;  /**< [ 10: 10](R/W) INTx assertion disable. */
        uint32_t fbbe                  : 1;  /**< [  9:  9](RO) Fast back-to-back transaction enable. Not applicable for PCI Express. Must be hardwired to zero. */
        uint32_t see                   : 1;  /**< [  8:  8](R/W) SERR# enable. */
        uint32_t ids_wcc               : 1;  /**< [  7:  7](RO) IDSEL stepping/wait cycle control. Not applicable for PCI Express. Must be hardwired to zero. */
        uint32_t per                   : 1;  /**< [  6:  6](R/W) Parity error response. */
        uint32_t vps                   : 1;  /**< [  5:  5](RO) VGA palette snoop. Not applicable for PCI Express. Must be hardwired to zero. */
        uint32_t mwice                 : 1;  /**< [  4:  4](RO) Memory write and invalidate. Not applicable for PCI Express. Must be hardwired to zero. */
        uint32_t scse                  : 1;  /**< [  3:  3](RO) Special cycle enable. Not applicable for PCI Express. Must be hardwired to zero. */
        uint32_t me                    : 1;  /**< [  2:  2](R/W) Bus master enable.  If the PF or any of its VFs try to master the bus when this bit is
                                                                 not set, the request is discarded. An interrupt will be generated setting PEM()_DBG_INFO[BMD_E].
                                                                 Transactions are dropped in the client. Nonposted transactions returns a fault response
                                                                 to NCB/DPI soon thereafter. Bus master enable mimics the behavior of PEM()_FLR_PF()_STOPREQ. */
        uint32_t msae                  : 1;  /**< [  1:  1](R/W) Memory space access enable. */
        uint32_t isae                  : 1;  /**< [  0:  0](RO) I/O space access enable.
                                                                 There are no I/O BARs supported. */
#else /* Word 0 - Little Endian */
        uint32_t isae                  : 1;  /**< [  0:  0](RO) I/O space access enable.
                                                                 There are no I/O BARs supported. */
        uint32_t msae                  : 1;  /**< [  1:  1](R/W) Memory space access enable. */
        uint32_t me                    : 1;  /**< [  2:  2](R/W) Bus master enable.  If the PF or any of its VFs try to master the bus when this bit is
                                                                 not set, the request is discarded. An interrupt will be generated setting PEM()_DBG_INFO[BMD_E].
                                                                 Transactions are dropped in the client. Nonposted transactions returns a fault response
                                                                 to NCB/DPI soon thereafter. Bus master enable mimics the behavior of PEM()_FLR_PF()_STOPREQ. */
        uint32_t scse                  : 1;  /**< [  3:  3](RO) Special cycle enable. Not applicable for PCI Express. Must be hardwired to zero. */
        uint32_t mwice                 : 1;  /**< [  4:  4](RO) Memory write and invalidate. Not applicable for PCI Express. Must be hardwired to zero. */
        uint32_t vps                   : 1;  /**< [  5:  5](RO) VGA palette snoop. Not applicable for PCI Express. Must be hardwired to zero. */
        uint32_t per                   : 1;  /**< [  6:  6](R/W) Parity error response. */
        uint32_t ids_wcc               : 1;  /**< [  7:  7](RO) IDSEL stepping/wait cycle control. Not applicable for PCI Express. Must be hardwired to zero. */
        uint32_t see                   : 1;  /**< [  8:  8](R/W) SERR# enable. */
        uint32_t fbbe                  : 1;  /**< [  9:  9](RO) Fast back-to-back transaction enable. Not applicable for PCI Express. Must be hardwired to zero. */
        uint32_t i_dis                 : 1;  /**< [ 10: 10](R/W) INTx assertion disable. */
        uint32_t reserved_11_15        : 5;
        uint32_t imm_readiness         : 1;  /**< [ 16: 16](RO/H) Reserved. */
        uint32_t reserved_17_18        : 2;
        uint32_t i_stat                : 1;  /**< [ 19: 19](RO/H) INTx status. */
        uint32_t cl                    : 1;  /**< [ 20: 20](RO) Capabilities list. Indicates presence of an extended capability item. Hardwired to one. */
        uint32_t m66                   : 1;  /**< [ 21: 21](RO) 66 MHz capable. Not applicable for PCI Express. Hardwired to zero. */
        uint32_t reserved_22           : 1;
        uint32_t fbb                   : 1;  /**< [ 23: 23](RO) Fast back-to-back capable. Not applicable for PCI Express. Hardwired to zero. */
        uint32_t mdpe                  : 1;  /**< [ 24: 24](R/W1C/H) Master data parity error. */
        uint32_t devt                  : 2;  /**< [ 26: 25](RO) DEVSEL timing. Not applicable for PCI Express. Hardwired to 0x0. */
        uint32_t sta                   : 1;  /**< [ 27: 27](R/W1C/H) Signaled target abort. */
        uint32_t rta                   : 1;  /**< [ 28: 28](R/W1C/H) Received target abort. */
        uint32_t rma                   : 1;  /**< [ 29: 29](R/W1C/H) Received master abort. */
        uint32_t sse                   : 1;  /**< [ 30: 30](R/W1C/H) Signaled system error. */
        uint32_t dpe                   : 1;  /**< [ 31: 31](R/W1C/H) Detected parity error. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_cmd_s cn; */
};
typedef union cavm_pcieepx_cmd cavm_pcieepx_cmd_t;

static inline uint64_t CAVM_PCIEEPX_CMD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_CMD(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 4 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 4 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 4 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 4 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_CMD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_CMD(a) cavm_pcieepx_cmd_t
#define bustype_CAVM_PCIEEPX_CMD(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_CMD(a) "PCIEEPX_CMD"
#define busnum_CAVM_PCIEEPX_CMD(a) (a)
#define arguments_CAVM_PCIEEPX_CMD(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_cor_err_msk
 *
 * PCIe EP PF Correctable Error Mask Register
 */
union cavm_pcieepx_cor_err_msk
{
    uint32_t u;
    struct cavm_pcieepx_cor_err_msk_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t chlom                 : 1;  /**< [ 15: 15](R/W) Corrected header log overflow error mask. */
        uint32_t ciem                  : 1;  /**< [ 14: 14](R/W) Corrected internal error mask. */
        uint32_t anfem                 : 1;  /**< [ 13: 13](R/W) Advisory nonfatal error mask. */
        uint32_t rttm                  : 1;  /**< [ 12: 12](R/W) Replay timer timeout mask. */
        uint32_t reserved_9_11         : 3;
        uint32_t rnrm                  : 1;  /**< [  8:  8](R/W) REPLAY_NUM rollover mask. */
        uint32_t bdllpm                : 1;  /**< [  7:  7](R/W) Bad DLLP mask. */
        uint32_t btlpm                 : 1;  /**< [  6:  6](R/W) Bad TLP mask. */
        uint32_t reserved_1_5          : 5;
        uint32_t rem                   : 1;  /**< [  0:  0](R/W) Receiver error mask. */
#else /* Word 0 - Little Endian */
        uint32_t rem                   : 1;  /**< [  0:  0](R/W) Receiver error mask. */
        uint32_t reserved_1_5          : 5;
        uint32_t btlpm                 : 1;  /**< [  6:  6](R/W) Bad TLP mask. */
        uint32_t bdllpm                : 1;  /**< [  7:  7](R/W) Bad DLLP mask. */
        uint32_t rnrm                  : 1;  /**< [  8:  8](R/W) REPLAY_NUM rollover mask. */
        uint32_t reserved_9_11         : 3;
        uint32_t rttm                  : 1;  /**< [ 12: 12](R/W) Replay timer timeout mask. */
        uint32_t anfem                 : 1;  /**< [ 13: 13](R/W) Advisory nonfatal error mask. */
        uint32_t ciem                  : 1;  /**< [ 14: 14](R/W) Corrected internal error mask. */
        uint32_t chlom                 : 1;  /**< [ 15: 15](R/W) Corrected header log overflow error mask. */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_cor_err_msk_s cn; */
};
typedef union cavm_pcieepx_cor_err_msk cavm_pcieepx_cor_err_msk_t;

static inline uint64_t CAVM_PCIEEPX_COR_ERR_MSK(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_COR_ERR_MSK(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x114 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x114 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x114 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x114 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_COR_ERR_MSK", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_COR_ERR_MSK(a) cavm_pcieepx_cor_err_msk_t
#define bustype_CAVM_PCIEEPX_COR_ERR_MSK(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_COR_ERR_MSK(a) "PCIEEPX_COR_ERR_MSK"
#define busnum_CAVM_PCIEEPX_COR_ERR_MSK(a) (a)
#define arguments_CAVM_PCIEEPX_COR_ERR_MSK(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_cor_err_stat
 *
 * PCIe EP PF Correctable Error Status Register
 */
union cavm_pcieepx_cor_err_stat
{
    uint32_t u;
    struct cavm_pcieepx_cor_err_stat_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t chlo                  : 1;  /**< [ 15: 15](R/W1C/H) Corrected header log overflow status. */
        uint32_t cies                  : 1;  /**< [ 14: 14](R/W1C/H) Corrected internal error status. */
        uint32_t anfes                 : 1;  /**< [ 13: 13](R/W1C/H) Advisory nonfatal error status. */
        uint32_t rtts                  : 1;  /**< [ 12: 12](R/W1C/H) Replay timer timeout status. */
        uint32_t reserved_9_11         : 3;
        uint32_t rnrs                  : 1;  /**< [  8:  8](R/W1C/H) REPLAY_NUM rollover status. */
        uint32_t bdllps                : 1;  /**< [  7:  7](R/W1C/H) Bad DLLP status. */
        uint32_t btlps                 : 1;  /**< [  6:  6](R/W1C/H) Bad TLP status. */
        uint32_t reserved_1_5          : 5;
        uint32_t res                   : 1;  /**< [  0:  0](R/W1C/H) Receiver error status. */
#else /* Word 0 - Little Endian */
        uint32_t res                   : 1;  /**< [  0:  0](R/W1C/H) Receiver error status. */
        uint32_t reserved_1_5          : 5;
        uint32_t btlps                 : 1;  /**< [  6:  6](R/W1C/H) Bad TLP status. */
        uint32_t bdllps                : 1;  /**< [  7:  7](R/W1C/H) Bad DLLP status. */
        uint32_t rnrs                  : 1;  /**< [  8:  8](R/W1C/H) REPLAY_NUM rollover status. */
        uint32_t reserved_9_11         : 3;
        uint32_t rtts                  : 1;  /**< [ 12: 12](R/W1C/H) Replay timer timeout status. */
        uint32_t anfes                 : 1;  /**< [ 13: 13](R/W1C/H) Advisory nonfatal error status. */
        uint32_t cies                  : 1;  /**< [ 14: 14](R/W1C/H) Corrected internal error status. */
        uint32_t chlo                  : 1;  /**< [ 15: 15](R/W1C/H) Corrected header log overflow status. */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_cor_err_stat_s cn; */
};
typedef union cavm_pcieepx_cor_err_stat cavm_pcieepx_cor_err_stat_t;

static inline uint64_t CAVM_PCIEEPX_COR_ERR_STAT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_COR_ERR_STAT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x110 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x110 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x110 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x110 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_COR_ERR_STAT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_COR_ERR_STAT(a) cavm_pcieepx_cor_err_stat_t
#define bustype_CAVM_PCIEEPX_COR_ERR_STAT(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_COR_ERR_STAT(a) "PCIEEPX_COR_ERR_STAT"
#define busnum_CAVM_PCIEEPX_COR_ERR_STAT(a) (a)
#define arguments_CAVM_PCIEEPX_COR_ERR_STAT(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_cpl_lut_del_ent
 *
 * PCIe EP PF Target Completion LUT Delete Entry Control Register
 * Using this register you can delete on entry in the target completion LUT.  You should
 * only use this register when you know that your application will never send the completion
 * because of an FLR or any other reason.
 */
union cavm_pcieepx_cpl_lut_del_ent
{
    uint32_t u;
    struct cavm_pcieepx_cpl_lut_del_ent_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t den                   : 1;  /**< [ 31: 31](R/W1C/H) This is a one-shot bit. Writing a one triggers the deletion of the target
                                                                 completion LUT entry that is specified in [LUID]. This is a self-clearing
                                                                 register field. Reading from this register field always returns a zero. */
        uint32_t luid                  : 31; /**< [ 30:  0](R/W) This number selects one entry to delete from the target completion LUT. */
#else /* Word 0 - Little Endian */
        uint32_t luid                  : 31; /**< [ 30:  0](R/W) This number selects one entry to delete from the target completion LUT. */
        uint32_t den                   : 1;  /**< [ 31: 31](R/W1C/H) This is a one-shot bit. Writing a one triggers the deletion of the target
                                                                 completion LUT entry that is specified in [LUID]. This is a self-clearing
                                                                 register field. Reading from this register field always returns a zero. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_cpl_lut_del_ent_s cn; */
};
typedef union cavm_pcieepx_cpl_lut_del_ent cavm_pcieepx_cpl_lut_del_ent_t;

static inline uint64_t CAVM_PCIEEPX_CPL_LUT_DEL_ENT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_CPL_LUT_DEL_ENT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8c8 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x8c8 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8c8 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8c8 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_CPL_LUT_DEL_ENT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_CPL_LUT_DEL_ENT(a) cavm_pcieepx_cpl_lut_del_ent_t
#define bustype_CAVM_PCIEEPX_CPL_LUT_DEL_ENT(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_CPL_LUT_DEL_ENT(a) "PCIEEPX_CPL_LUT_DEL_ENT"
#define busnum_CAVM_PCIEEPX_CPL_LUT_DEL_ENT(a) (a)
#define arguments_CAVM_PCIEEPX_CPL_LUT_DEL_ENT(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_dbg0
 *
 * PCIe EP PF Debug Register 0
 */
union cavm_pcieepx_dbg0
{
    uint32_t u;
    struct cavm_pcieepx_dbg0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t dbg_info_l32          : 32; /**< [ 31:  0](RO/H) State of selected internal signals for debug purposes.
                                                                 State of selected internal signals for debug purposes.
                                                                 \<31:28\> = Link control bits advertised by link partner.
                                                                 \<27\> = Currently receiving k237 (PAD) in place of lane number.
                                                                 \<26\> = Currently receiving k237 (PAD) in place of link number.
                                                                 \<25\> = Receiver is receiving logical idle.
                                                                 \<24\> = Receiver 2nd symbol is also idle.
                                                                 \<23:8\> = mac_phy_txdata.
                                                                 \<7:6\> = mac_phy_txdatak.
                                                                 \<5:0\> = LTSSM current state. */
#else /* Word 0 - Little Endian */
        uint32_t dbg_info_l32          : 32; /**< [ 31:  0](RO/H) State of selected internal signals for debug purposes.
                                                                 State of selected internal signals for debug purposes.
                                                                 \<31:28\> = Link control bits advertised by link partner.
                                                                 \<27\> = Currently receiving k237 (PAD) in place of lane number.
                                                                 \<26\> = Currently receiving k237 (PAD) in place of link number.
                                                                 \<25\> = Receiver is receiving logical idle.
                                                                 \<24\> = Receiver 2nd symbol is also idle.
                                                                 \<23:8\> = mac_phy_txdata.
                                                                 \<7:6\> = mac_phy_txdatak.
                                                                 \<5:0\> = LTSSM current state. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_dbg0_s cn; */
};
typedef union cavm_pcieepx_dbg0 cavm_pcieepx_dbg0_t;

static inline uint64_t CAVM_PCIEEPX_DBG0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_DBG0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x728 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x728 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x728 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x728 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_DBG0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_DBG0(a) cavm_pcieepx_dbg0_t
#define bustype_CAVM_PCIEEPX_DBG0(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_DBG0(a) "PCIEEPX_DBG0"
#define busnum_CAVM_PCIEEPX_DBG0(a) (a)
#define arguments_CAVM_PCIEEPX_DBG0(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_dbg1
 *
 * PCIe EP PF Debug Register 1
 */
union cavm_pcieepx_dbg1
{
    uint32_t u;
    struct cavm_pcieepx_dbg1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t dbg_info_u32          : 32; /**< [ 31:  0](RO/H) State of selected internal signals for debug purposes.
                                                                 \<31\> = Scrambling disabled for the link.
                                                                 \<30\> = TSSM in DISABLE state. Link inoperable.
                                                                 \<29\> = LTSSM performing link training.
                                                                 \<28\> = LTSSM is in Polling.Configuration state.
                                                                 \<27\> = LTSSM-negotiated link reset.
                                                                 \<26:23\> = Reserved.
                                                                 \<22\> = PIPE receiver detect/loopback request.
                                                                 \<21\> = PIPE transmit electrical idle request.
                                                                 \<20\> = PIPE transmit compliance request.
                                                                 \<19\> = Application request to initiate training reset.
                                                                 \<18:16\> = Reserved.
                                                                 \<15:8\> = Link number advertised/confirmed by link partner.
                                                                 \<7:6\> = Reserved.
                                                                 \<5\> = A skip ordered set has been transmitted.
                                                                 \<4\> = LTSSM reports PHY link up or LTSSM is in Loop-back.Active for Loopback Master.
                                                                 \<3\> = Receiver reports skip reception.
                                                                 \<2\> = TS1 training sequence received (pulse).
                                                                 \<1\> = TS2 training sequence received (pulse).
                                                                 \<0\> = Receiver detected lane reversal. */
#else /* Word 0 - Little Endian */
        uint32_t dbg_info_u32          : 32; /**< [ 31:  0](RO/H) State of selected internal signals for debug purposes.
                                                                 \<31\> = Scrambling disabled for the link.
                                                                 \<30\> = TSSM in DISABLE state. Link inoperable.
                                                                 \<29\> = LTSSM performing link training.
                                                                 \<28\> = LTSSM is in Polling.Configuration state.
                                                                 \<27\> = LTSSM-negotiated link reset.
                                                                 \<26:23\> = Reserved.
                                                                 \<22\> = PIPE receiver detect/loopback request.
                                                                 \<21\> = PIPE transmit electrical idle request.
                                                                 \<20\> = PIPE transmit compliance request.
                                                                 \<19\> = Application request to initiate training reset.
                                                                 \<18:16\> = Reserved.
                                                                 \<15:8\> = Link number advertised/confirmed by link partner.
                                                                 \<7:6\> = Reserved.
                                                                 \<5\> = A skip ordered set has been transmitted.
                                                                 \<4\> = LTSSM reports PHY link up or LTSSM is in Loop-back.Active for Loopback Master.
                                                                 \<3\> = Receiver reports skip reception.
                                                                 \<2\> = TS1 training sequence received (pulse).
                                                                 \<1\> = TS2 training sequence received (pulse).
                                                                 \<0\> = Receiver detected lane reversal. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_dbg1_s cn; */
};
typedef union cavm_pcieepx_dbg1 cavm_pcieepx_dbg1_t;

static inline uint64_t CAVM_PCIEEPX_DBG1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_DBG1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x72c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x72c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x72c + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x72c + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_DBG1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_DBG1(a) cavm_pcieepx_dbg1_t
#define bustype_CAVM_PCIEEPX_DBG1(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_DBG1(a) "PCIEEPX_DBG1"
#define busnum_CAVM_PCIEEPX_DBG1(a) (a)
#define arguments_CAVM_PCIEEPX_DBG1(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_dev_cap
 *
 * PCIe EP PF Device Capabilities Register
 */
union cavm_pcieepx_dev_cap
{
    uint32_t u;
    struct cavm_pcieepx_dev_cap_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_29_31        : 3;
        uint32_t flr_cap               : 1;  /**< [ 28: 28](RO/WRSL) Function level reset capability. Set to 1 for SR-IOV core. */
        uint32_t cspls                 : 2;  /**< [ 27: 26](RO) Captured slot power limit scale. From message from RC, upstream port only. */
        uint32_t csplv                 : 8;  /**< [ 25: 18](RO) Captured slot power limit value. From message from RC, upstream port only. */
        uint32_t reserved_16_17        : 2;
        uint32_t rber                  : 1;  /**< [ 15: 15](RO/WRSL) Role-based error reporting, writable through PEM()_CFG_TBL(). */
        uint32_t reserved_12_14        : 3;
        uint32_t el1al                 : 3;  /**< [ 11:  9](RO/WRSL) Endpoint L1 acceptable latency, writable through PEM()_CFG_TBL(). */
        uint32_t el0al                 : 3;  /**< [  8:  6](RO/WRSL) Endpoint L0s acceptable latency, writable through PEM()_CFG_TBL(). */
        uint32_t etfs                  : 1;  /**< [  5:  5](RO/WRSL) Extended tag field supported. This bit is writable through
                                                                 PEM()_CFG_TBL(). */
        uint32_t pfs                   : 2;  /**< [  4:  3](RO/WRSL) Phantom function supported. This field is writable through
                                                                 PEM()_CFG_TBL(). However, phantom function is not supported. Therefore, the application
                                                                 must not write any value other than 0x0 to this field. */
        uint32_t mpss                  : 3;  /**< [  2:  0](RO/WRSL) Max_Payload_Size supported, writable through PEM()_CFG_TBL(). */
#else /* Word 0 - Little Endian */
        uint32_t mpss                  : 3;  /**< [  2:  0](RO/WRSL) Max_Payload_Size supported, writable through PEM()_CFG_TBL(). */
        uint32_t pfs                   : 2;  /**< [  4:  3](RO/WRSL) Phantom function supported. This field is writable through
                                                                 PEM()_CFG_TBL(). However, phantom function is not supported. Therefore, the application
                                                                 must not write any value other than 0x0 to this field. */
        uint32_t etfs                  : 1;  /**< [  5:  5](RO/WRSL) Extended tag field supported. This bit is writable through
                                                                 PEM()_CFG_TBL(). */
        uint32_t el0al                 : 3;  /**< [  8:  6](RO/WRSL) Endpoint L0s acceptable latency, writable through PEM()_CFG_TBL(). */
        uint32_t el1al                 : 3;  /**< [ 11:  9](RO/WRSL) Endpoint L1 acceptable latency, writable through PEM()_CFG_TBL(). */
        uint32_t reserved_12_14        : 3;
        uint32_t rber                  : 1;  /**< [ 15: 15](RO/WRSL) Role-based error reporting, writable through PEM()_CFG_TBL(). */
        uint32_t reserved_16_17        : 2;
        uint32_t csplv                 : 8;  /**< [ 25: 18](RO) Captured slot power limit value. From message from RC, upstream port only. */
        uint32_t cspls                 : 2;  /**< [ 27: 26](RO) Captured slot power limit scale. From message from RC, upstream port only. */
        uint32_t flr_cap               : 1;  /**< [ 28: 28](RO/WRSL) Function level reset capability. Set to 1 for SR-IOV core. */
        uint32_t reserved_29_31        : 3;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_dev_cap_s cn; */
};
typedef union cavm_pcieepx_dev_cap cavm_pcieepx_dev_cap_t;

static inline uint64_t CAVM_PCIEEPX_DEV_CAP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_DEV_CAP(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x74 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x74 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x74 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x74 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_DEV_CAP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_DEV_CAP(a) cavm_pcieepx_dev_cap_t
#define bustype_CAVM_PCIEEPX_DEV_CAP(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_DEV_CAP(a) "PCIEEPX_DEV_CAP"
#define busnum_CAVM_PCIEEPX_DEV_CAP(a) (a)
#define arguments_CAVM_PCIEEPX_DEV_CAP(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_dev_cap2
 *
 * PCIe EP PF Device Capabilities 2 Register
 */
union cavm_pcieepx_dev_cap2
{
    uint32_t u;
    struct cavm_pcieepx_dev_cap2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_24_31        : 8;
        uint32_t meetp                 : 2;  /**< [ 23: 22](RO) Max end-end TLP prefixes (Not supported).
                                                                 0x1 = 1.
                                                                 0x2 = 2.
                                                                 0x3 = 3.
                                                                 0x0 = 4. */
        uint32_t eetps                 : 1;  /**< [ 21: 21](RO) End-end TLP prefix (Not Supported). */
        uint32_t effs                  : 1;  /**< [ 20: 20](RO) Extended fmt field (Not Supported). */
        uint32_t obffs                 : 2;  /**< [ 19: 18](RO) Optimized buffer flush fill (OBFF Not Supported). */
        uint32_t tag10b_req_supp       : 1;  /**< [ 17: 17](RO) 10-bit tag requestor supported (Not Supported). */
        uint32_t tag10b_cpl_supp       : 1;  /**< [ 16: 16](RO) 10-bit tag completer supported. */
        uint32_t ln_sys_cls            : 2;  /**< [ 15: 14](RO) LN System CLS (not applicable for EP). */
        uint32_t tphs                  : 2;  /**< [ 13: 12](RO) TPH completer (Not Supported). */
        uint32_t ltrs                  : 1;  /**< [ 11: 11](RO/WRSL) Latency tolerance reporting (LTR) mechanism supported. */
        uint32_t noroprpr              : 1;  /**< [ 10: 10](RO/H) No RO-enabled PR-PR passing. (This bit applies to RCs.) */
        uint32_t atom128s              : 1;  /**< [  9:  9](RO) 128-bit AtomicOp supported.
                                                                 Note that inbound AtomicOps targeting BAR0 are not supported and are dropped as an
                                                                 unsupported request. */
        uint32_t atom64s               : 1;  /**< [  8:  8](RO) 64-bit AtomicOp supported. Note that inbound AtomicOps targeting BAR0 are not supported
                                                                 and are dropped as an unsupported request. */
        uint32_t atom32s               : 1;  /**< [  7:  7](RO) 32-bit AtomicOp supported.
                                                                 Note that inbound AtomicOps targeting BAR0 are not supported and are dropped as an
                                                                 unsupported request. */
        uint32_t atom_ops              : 1;  /**< [  6:  6](RO) AtomicOp routing supported (not applicable for EP). */
        uint32_t ari                   : 1;  /**< [  5:  5](RO) Alternate routing ID forwarding supported (not applicable for EP). */
        uint32_t ctds                  : 1;  /**< [  4:  4](RO) Completion timeout disable supported. */
        uint32_t ctrs                  : 4;  /**< [  3:  0](RO/H) Completion timeout ranges supported. */
#else /* Word 0 - Little Endian */
        uint32_t ctrs                  : 4;  /**< [  3:  0](RO/H) Completion timeout ranges supported. */
        uint32_t ctds                  : 1;  /**< [  4:  4](RO) Completion timeout disable supported. */
        uint32_t ari                   : 1;  /**< [  5:  5](RO) Alternate routing ID forwarding supported (not applicable for EP). */
        uint32_t atom_ops              : 1;  /**< [  6:  6](RO) AtomicOp routing supported (not applicable for EP). */
        uint32_t atom32s               : 1;  /**< [  7:  7](RO) 32-bit AtomicOp supported.
                                                                 Note that inbound AtomicOps targeting BAR0 are not supported and are dropped as an
                                                                 unsupported request. */
        uint32_t atom64s               : 1;  /**< [  8:  8](RO) 64-bit AtomicOp supported. Note that inbound AtomicOps targeting BAR0 are not supported
                                                                 and are dropped as an unsupported request. */
        uint32_t atom128s              : 1;  /**< [  9:  9](RO) 128-bit AtomicOp supported.
                                                                 Note that inbound AtomicOps targeting BAR0 are not supported and are dropped as an
                                                                 unsupported request. */
        uint32_t noroprpr              : 1;  /**< [ 10: 10](RO/H) No RO-enabled PR-PR passing. (This bit applies to RCs.) */
        uint32_t ltrs                  : 1;  /**< [ 11: 11](RO/WRSL) Latency tolerance reporting (LTR) mechanism supported. */
        uint32_t tphs                  : 2;  /**< [ 13: 12](RO) TPH completer (Not Supported). */
        uint32_t ln_sys_cls            : 2;  /**< [ 15: 14](RO) LN System CLS (not applicable for EP). */
        uint32_t tag10b_cpl_supp       : 1;  /**< [ 16: 16](RO) 10-bit tag completer supported. */
        uint32_t tag10b_req_supp       : 1;  /**< [ 17: 17](RO) 10-bit tag requestor supported (Not Supported). */
        uint32_t obffs                 : 2;  /**< [ 19: 18](RO) Optimized buffer flush fill (OBFF Not Supported). */
        uint32_t effs                  : 1;  /**< [ 20: 20](RO) Extended fmt field (Not Supported). */
        uint32_t eetps                 : 1;  /**< [ 21: 21](RO) End-end TLP prefix (Not Supported). */
        uint32_t meetp                 : 2;  /**< [ 23: 22](RO) Max end-end TLP prefixes (Not supported).
                                                                 0x1 = 1.
                                                                 0x2 = 2.
                                                                 0x3 = 3.
                                                                 0x0 = 4. */
        uint32_t reserved_24_31        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_dev_cap2_s cn; */
};
typedef union cavm_pcieepx_dev_cap2 cavm_pcieepx_dev_cap2_t;

static inline uint64_t CAVM_PCIEEPX_DEV_CAP2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_DEV_CAP2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x94 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x94 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x94 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x94 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_DEV_CAP2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_DEV_CAP2(a) cavm_pcieepx_dev_cap2_t
#define bustype_CAVM_PCIEEPX_DEV_CAP2(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_DEV_CAP2(a) "PCIEEPX_DEV_CAP2"
#define busnum_CAVM_PCIEEPX_DEV_CAP2(a) (a)
#define arguments_CAVM_PCIEEPX_DEV_CAP2(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_dev_ctl
 *
 * PCIe EP PF Device Control/Device Status Register
 */
union cavm_pcieepx_dev_ctl
{
    uint32_t u;
    struct cavm_pcieepx_dev_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_22_31        : 10;
        uint32_t tp                    : 1;  /**< [ 21: 21](RO/H) Transaction pending. Set to 1 when nonposted requests are not yet completed and set to 0
                                                                 when they are completed. */
        uint32_t ap_d                  : 1;  /**< [ 20: 20](RO) AUX power detected. Set to one if AUX power detected. */
        uint32_t ur_d                  : 1;  /**< [ 19: 19](R/W1C/H) Unsupported request detected. Errors are logged in this register regardless of whether or
                                                                 not error reporting is enabled in the device control register. [UR_D] occurs when PEM receives
                                                                 something unsupported. Unsupported requests are nonfatal errors, so [UR_D] should cause
                                                                 [NFE_D]. Receiving a vendor-defined message should cause an unsupported request. */
        uint32_t fe_d                  : 1;  /**< [ 18: 18](R/W1C/H) Fatal error detected. Errors are logged in this register regardless of whether or not
                                                                 error reporting is enabled in the device control register. This field is set if we receive
                                                                 any of the errors in PCIEEP_UCOR_ERR_MSK that has a severity set to fatal. Malformed
                                                                 TLPs generally fit into this category. */
        uint32_t nfe_d                 : 1;  /**< [ 17: 17](R/W1C/H) Nonfatal error detected. Errors are logged in this register regardless of whether or not
                                                                 error reporting is enabled in the device control register. This field is set if we receive
                                                                 any of the errors in PCIEEP_UCOR_ERR_MSK that has a severity set to nonfatal and does
                                                                 not meet advisory nonfatal criteria, which most poisoned TLPs should. */
        uint32_t ce_d                  : 1;  /**< [ 16: 16](R/W1C/H) Correctable error detected. Errors are logged in this register regardless of whether or
                                                                 not error reporting is enabled in the device control register. This field is set if we
                                                                 receive any of the errors in PCIEEP_COR_ERR_STAT, for example a replay-timer timeout.
                                                                 Also, it can be set if we get any of the errors in PCIEEP_UCOR_ERR_MSK that has a
                                                                 severity set to nonfatal and meets the advisory nonfatal criteria, which most ECRC errors should. */
        uint32_t i_flr                 : 1;  /**< [ 15: 15](R/W) Initiate function level reset.

                                                                 [I_FLR] must not be written to one via the indirect PEM()_CFG_TBL(). It should only ever
                                                                 be written to one via a direct PCIe access. */
        uint32_t mrrs                  : 3;  /**< [ 14: 12](R/W) Max read request size.
                                                                 0x0 =128 bytes.
                                                                 0x1 = 256 bytes.
                                                                 0x2 = 512 bytes.
                                                                 0x3 = 1024 bytes.
                                                                 0x4 = 2048 bytes.
                                                                 0x5 = 4096 bytes.

                                                                 DPI_SLI_PRT()_CFG[MRRS] must be set and properly must not exceed the desired
                                                                 max read request size. */
        uint32_t ns_en                 : 1;  /**< [ 11: 11](R/W) Enable no snoop. */
        uint32_t ap_en                 : 1;  /**< [ 10: 10](R/W) AUX power PM enable. */
        uint32_t pf_en                 : 1;  /**< [  9:  9](R/W) Phantom function enable. This bit should never be set; CNXXXX requests never uses phantom
                                                                 functions. */
        uint32_t etf_en                : 1;  /**< [  8:  8](R/W) Extended tag field enable. Set this bit to enable extended tags. */
        uint32_t mps                   : 3;  /**< [  7:  5](R/W) Max payload size. Legal values:
                                                                 0x0 = 128 bytes.
                                                                 0x1 = 256 bytes.
                                                                 0x2 = 512 bytes.
                                                                 0x3 = 1024 bytes.
                                                                 Larger sizes are not supported by CNXXXX.

                                                                 DPI_SLI_PRT()_CFG[MPS] must be set to the same value as this field for proper
                                                                 functionality. */
        uint32_t ro_en                 : 1;  /**< [  4:  4](R/W) Enable relaxed ordering. */
        uint32_t ur_en                 : 1;  /**< [  3:  3](R/W) Unsupported request reporting enable. */
        uint32_t fe_en                 : 1;  /**< [  2:  2](R/W) Fatal error reporting enable. */
        uint32_t nfe_en                : 1;  /**< [  1:  1](R/W) Nonfatal error reporting enable. */
        uint32_t ce_en                 : 1;  /**< [  0:  0](R/W) Correctable error reporting enable. */
#else /* Word 0 - Little Endian */
        uint32_t ce_en                 : 1;  /**< [  0:  0](R/W) Correctable error reporting enable. */
        uint32_t nfe_en                : 1;  /**< [  1:  1](R/W) Nonfatal error reporting enable. */
        uint32_t fe_en                 : 1;  /**< [  2:  2](R/W) Fatal error reporting enable. */
        uint32_t ur_en                 : 1;  /**< [  3:  3](R/W) Unsupported request reporting enable. */
        uint32_t ro_en                 : 1;  /**< [  4:  4](R/W) Enable relaxed ordering. */
        uint32_t mps                   : 3;  /**< [  7:  5](R/W) Max payload size. Legal values:
                                                                 0x0 = 128 bytes.
                                                                 0x1 = 256 bytes.
                                                                 0x2 = 512 bytes.
                                                                 0x3 = 1024 bytes.
                                                                 Larger sizes are not supported by CNXXXX.

                                                                 DPI_SLI_PRT()_CFG[MPS] must be set to the same value as this field for proper
                                                                 functionality. */
        uint32_t etf_en                : 1;  /**< [  8:  8](R/W) Extended tag field enable. Set this bit to enable extended tags. */
        uint32_t pf_en                 : 1;  /**< [  9:  9](R/W) Phantom function enable. This bit should never be set; CNXXXX requests never uses phantom
                                                                 functions. */
        uint32_t ap_en                 : 1;  /**< [ 10: 10](R/W) AUX power PM enable. */
        uint32_t ns_en                 : 1;  /**< [ 11: 11](R/W) Enable no snoop. */
        uint32_t mrrs                  : 3;  /**< [ 14: 12](R/W) Max read request size.
                                                                 0x0 =128 bytes.
                                                                 0x1 = 256 bytes.
                                                                 0x2 = 512 bytes.
                                                                 0x3 = 1024 bytes.
                                                                 0x4 = 2048 bytes.
                                                                 0x5 = 4096 bytes.

                                                                 DPI_SLI_PRT()_CFG[MRRS] must be set and properly must not exceed the desired
                                                                 max read request size. */
        uint32_t i_flr                 : 1;  /**< [ 15: 15](R/W) Initiate function level reset.

                                                                 [I_FLR] must not be written to one via the indirect PEM()_CFG_TBL(). It should only ever
                                                                 be written to one via a direct PCIe access. */
        uint32_t ce_d                  : 1;  /**< [ 16: 16](R/W1C/H) Correctable error detected. Errors are logged in this register regardless of whether or
                                                                 not error reporting is enabled in the device control register. This field is set if we
                                                                 receive any of the errors in PCIEEP_COR_ERR_STAT, for example a replay-timer timeout.
                                                                 Also, it can be set if we get any of the errors in PCIEEP_UCOR_ERR_MSK that has a
                                                                 severity set to nonfatal and meets the advisory nonfatal criteria, which most ECRC errors should. */
        uint32_t nfe_d                 : 1;  /**< [ 17: 17](R/W1C/H) Nonfatal error detected. Errors are logged in this register regardless of whether or not
                                                                 error reporting is enabled in the device control register. This field is set if we receive
                                                                 any of the errors in PCIEEP_UCOR_ERR_MSK that has a severity set to nonfatal and does
                                                                 not meet advisory nonfatal criteria, which most poisoned TLPs should. */
        uint32_t fe_d                  : 1;  /**< [ 18: 18](R/W1C/H) Fatal error detected. Errors are logged in this register regardless of whether or not
                                                                 error reporting is enabled in the device control register. This field is set if we receive
                                                                 any of the errors in PCIEEP_UCOR_ERR_MSK that has a severity set to fatal. Malformed
                                                                 TLPs generally fit into this category. */
        uint32_t ur_d                  : 1;  /**< [ 19: 19](R/W1C/H) Unsupported request detected. Errors are logged in this register regardless of whether or
                                                                 not error reporting is enabled in the device control register. [UR_D] occurs when PEM receives
                                                                 something unsupported. Unsupported requests are nonfatal errors, so [UR_D] should cause
                                                                 [NFE_D]. Receiving a vendor-defined message should cause an unsupported request. */
        uint32_t ap_d                  : 1;  /**< [ 20: 20](RO) AUX power detected. Set to one if AUX power detected. */
        uint32_t tp                    : 1;  /**< [ 21: 21](RO/H) Transaction pending. Set to 1 when nonposted requests are not yet completed and set to 0
                                                                 when they are completed. */
        uint32_t reserved_22_31        : 10;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_dev_ctl_s cn; */
};
typedef union cavm_pcieepx_dev_ctl cavm_pcieepx_dev_ctl_t;

static inline uint64_t CAVM_PCIEEPX_DEV_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_DEV_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x78 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x78 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x78 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x78 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_DEV_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_DEV_CTL(a) cavm_pcieepx_dev_ctl_t
#define bustype_CAVM_PCIEEPX_DEV_CTL(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_DEV_CTL(a) "PCIEEPX_DEV_CTL"
#define busnum_CAVM_PCIEEPX_DEV_CTL(a) (a)
#define arguments_CAVM_PCIEEPX_DEV_CTL(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_dev_ctl2
 *
 * PCIe EP PF Device Control 2 Register/Device Status 2 Register
 */
union cavm_pcieepx_dev_ctl2
{
    uint32_t u;
    struct cavm_pcieepx_dev_ctl2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t eetpb                 : 1;  /**< [ 15: 15](RO) End-end TLP prefix blocking. */
        uint32_t obffe                 : 2;  /**< [ 14: 13](RO) Optimized buffer flush fill (OBFF) enabled (not supported). */
        uint32_t tag10b_req_en         : 1;  /**< [ 12: 12](RO) 10-bit tag requester enable (not supported). */
        uint32_t reserved_11           : 1;
        uint32_t ltre                  : 1;  /**< [ 10: 10](R/W/H) Latency tolerance reporting (LTR) mechanism enable.
                                                                 This field is R/W only for function 0.  All other functions this field is read only zero. */
        uint32_t id0_cp                : 1;  /**< [  9:  9](R/W) ID based ordering completion enable. */
        uint32_t id0_rq                : 1;  /**< [  8:  8](R/W) ID based ordering request enable. */
        uint32_t atom_op_eb            : 1;  /**< [  7:  7](RO) AtomicOp egress blocking. (not applicable for EP). */
        uint32_t atom_op               : 1;  /**< [  6:  6](R/W) AtomicOp requester enable. */
        uint32_t ari                   : 1;  /**< [  5:  5](RO) Alternate routing ID forwarding supported (not applicable for EP). */
        uint32_t ctd                   : 1;  /**< [  4:  4](R/W) Completion timeout disable. */
        uint32_t ctv                   : 4;  /**< [  3:  0](R/W) Completion timeout value.
                                                                 0x0 = Default range: 16 ms to 55 ms.
                                                                 0x1 = 50 us to 100 us.
                                                                 0x2 = 1 ms to 10 ms.
                                                                 0x3 = 16 ms to 55 ms.
                                                                 0x6 = 65 ms to 210 ms.
                                                                 0x9 = 260 ms to 900 ms.
                                                                 0xA = 1 s to 3.5 s.
                                                                 0xD = 4 s to 13 s (not supported).
                                                                 0xE = 17 s to 64 s (not supported).

                                                                 Values not defined are reserved. */
#else /* Word 0 - Little Endian */
        uint32_t ctv                   : 4;  /**< [  3:  0](R/W) Completion timeout value.
                                                                 0x0 = Default range: 16 ms to 55 ms.
                                                                 0x1 = 50 us to 100 us.
                                                                 0x2 = 1 ms to 10 ms.
                                                                 0x3 = 16 ms to 55 ms.
                                                                 0x6 = 65 ms to 210 ms.
                                                                 0x9 = 260 ms to 900 ms.
                                                                 0xA = 1 s to 3.5 s.
                                                                 0xD = 4 s to 13 s (not supported).
                                                                 0xE = 17 s to 64 s (not supported).

                                                                 Values not defined are reserved. */
        uint32_t ctd                   : 1;  /**< [  4:  4](R/W) Completion timeout disable. */
        uint32_t ari                   : 1;  /**< [  5:  5](RO) Alternate routing ID forwarding supported (not applicable for EP). */
        uint32_t atom_op               : 1;  /**< [  6:  6](R/W) AtomicOp requester enable. */
        uint32_t atom_op_eb            : 1;  /**< [  7:  7](RO) AtomicOp egress blocking. (not applicable for EP). */
        uint32_t id0_rq                : 1;  /**< [  8:  8](R/W) ID based ordering request enable. */
        uint32_t id0_cp                : 1;  /**< [  9:  9](R/W) ID based ordering completion enable. */
        uint32_t ltre                  : 1;  /**< [ 10: 10](R/W/H) Latency tolerance reporting (LTR) mechanism enable.
                                                                 This field is R/W only for function 0.  All other functions this field is read only zero. */
        uint32_t reserved_11           : 1;
        uint32_t tag10b_req_en         : 1;  /**< [ 12: 12](RO) 10-bit tag requester enable (not supported). */
        uint32_t obffe                 : 2;  /**< [ 14: 13](RO) Optimized buffer flush fill (OBFF) enabled (not supported). */
        uint32_t eetpb                 : 1;  /**< [ 15: 15](RO) End-end TLP prefix blocking. */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_dev_ctl2_s cn; */
};
typedef union cavm_pcieepx_dev_ctl2 cavm_pcieepx_dev_ctl2_t;

static inline uint64_t CAVM_PCIEEPX_DEV_CTL2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_DEV_CTL2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x98 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x98 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x98 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x98 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_DEV_CTL2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_DEV_CTL2(a) cavm_pcieepx_dev_ctl2_t
#define bustype_CAVM_PCIEEPX_DEV_CTL2(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_DEV_CTL2(a) "PCIEEPX_DEV_CTL2"
#define busnum_CAVM_PCIEEPX_DEV_CTL2(a) (a)
#define arguments_CAVM_PCIEEPX_DEV_CTL2(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_dl_ft_cap_hdr
 *
 * PCIe EP PF Data Link Feature Extended Capability Header Register
 * Data Link Feature Extended Capability exists for PF0 only.
 */
union cavm_pcieepx_dl_ft_cap_hdr
{
    uint32_t u;
    struct cavm_pcieepx_dl_ft_cap_hdr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t nco                   : 12; /**< [ 31: 20](RO/WRSL/H) Next capability offset.
                                                                 Writable through PEM()_CFG_TBL().

                                                                 Reset values:
                                                                 _ PF0:          0x390.
                                                                 _ PF1:          0x0. */
        uint32_t cv                    : 4;  /**< [ 19: 16](RO/WRSL/H) Capability version.
                                                                 Writable through PEM()_CFG_TBL().

                                                                 Reset values:
                                                                 _ PF0:          0x1.
                                                                 _ PF1:          0x0. */
        uint32_t pcieec                : 16; /**< [ 15:  0](RO/WRSL/H) PCI Express extended capability.
                                                                 Writable through PEM()_CFG_TBL().

                                                                 Reset values:
                                                                 _ PF0:          0x25.
                                                                 _ PF1:          0x0. */
#else /* Word 0 - Little Endian */
        uint32_t pcieec                : 16; /**< [ 15:  0](RO/WRSL/H) PCI Express extended capability.
                                                                 Writable through PEM()_CFG_TBL().

                                                                 Reset values:
                                                                 _ PF0:          0x25.
                                                                 _ PF1:          0x0. */
        uint32_t cv                    : 4;  /**< [ 19: 16](RO/WRSL/H) Capability version.
                                                                 Writable through PEM()_CFG_TBL().

                                                                 Reset values:
                                                                 _ PF0:          0x1.
                                                                 _ PF1:          0x0. */
        uint32_t nco                   : 12; /**< [ 31: 20](RO/WRSL/H) Next capability offset.
                                                                 Writable through PEM()_CFG_TBL().

                                                                 Reset values:
                                                                 _ PF0:          0x390.
                                                                 _ PF1:          0x0. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_dl_ft_cap_hdr_s cn; */
};
typedef union cavm_pcieepx_dl_ft_cap_hdr cavm_pcieepx_dl_ft_cap_hdr_t;

static inline uint64_t CAVM_PCIEEPX_DL_FT_CAP_HDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_DL_FT_CAP_HDR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x384 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x384 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x384 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x384 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_DL_FT_CAP_HDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_DL_FT_CAP_HDR(a) cavm_pcieepx_dl_ft_cap_hdr_t
#define bustype_CAVM_PCIEEPX_DL_FT_CAP_HDR(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_DL_FT_CAP_HDR(a) "PCIEEPX_DL_FT_CAP_HDR"
#define busnum_CAVM_PCIEEPX_DL_FT_CAP_HDR(a) (a)
#define arguments_CAVM_PCIEEPX_DL_FT_CAP_HDR(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_dlink_cap
 *
 * PCIe EP PF Data Link Feature Capabilities Register
 * Data Link Feature Capability exists for PF0 only.
 */
union cavm_pcieepx_dlink_cap
{
    uint32_t u;
    struct cavm_pcieepx_dlink_cap_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t dfeen                 : 1;  /**< [ 31: 31](RO/WRSL/H) Data link feature exchange enable.

                                                                 Reset values:
                                                                 _ PF0:          0x1.
                                                                 _ PF1:          0x0. */
        uint32_t reserved_23_30        : 8;
        uint32_t ffs                   : 22; /**< [ 22:  1](RO/WRSL) Local future data link feature supported. */
        uint32_t sfcs                  : 1;  /**< [  0:  0](RO/WRSL/H) Local scaled flow control supported,

                                                                 Reset values:
                                                                 _ PF0:          0x1.
                                                                 _ PF1 - PF15:   0x0. */
#else /* Word 0 - Little Endian */
        uint32_t sfcs                  : 1;  /**< [  0:  0](RO/WRSL/H) Local scaled flow control supported,

                                                                 Reset values:
                                                                 _ PF0:          0x1.
                                                                 _ PF1 - PF15:   0x0. */
        uint32_t ffs                   : 22; /**< [ 22:  1](RO/WRSL) Local future data link feature supported. */
        uint32_t reserved_23_30        : 8;
        uint32_t dfeen                 : 1;  /**< [ 31: 31](RO/WRSL/H) Data link feature exchange enable.

                                                                 Reset values:
                                                                 _ PF0:          0x1.
                                                                 _ PF1:          0x0. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_dlink_cap_s cn; */
};
typedef union cavm_pcieepx_dlink_cap cavm_pcieepx_dlink_cap_t;

static inline uint64_t CAVM_PCIEEPX_DLINK_CAP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_DLINK_CAP(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x388 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x388 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x388 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x388 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_DLINK_CAP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_DLINK_CAP(a) cavm_pcieepx_dlink_cap_t
#define bustype_CAVM_PCIEEPX_DLINK_CAP(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_DLINK_CAP(a) "PCIEEPX_DLINK_CAP"
#define busnum_CAVM_PCIEEPX_DLINK_CAP(a) (a)
#define arguments_CAVM_PCIEEPX_DLINK_CAP(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_dlink_fstat
 *
 * PCIe EP FP Data Link Feature Status Register
 * Data Link Feature Capability exists for PF0 only.
 */
union cavm_pcieepx_dlink_fstat
{
    uint32_t u;
    struct cavm_pcieepx_dlink_fstat_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t dlfsv                 : 1;  /**< [ 31: 31](RO/H) Remote data link feature supported valid. */
        uint32_t reserved_24_30        : 7;
        uint32_t rdlfa                 : 1;  /**< [ 23: 23](RO) Indicates that remote port has received this port's data link feature DLLP. */
        uint32_t rdlfs                 : 23; /**< [ 22:  0](RO/H) Only bit 0 is currently defined - remote scaled flow control supported. */
#else /* Word 0 - Little Endian */
        uint32_t rdlfs                 : 23; /**< [ 22:  0](RO/H) Only bit 0 is currently defined - remote scaled flow control supported. */
        uint32_t rdlfa                 : 1;  /**< [ 23: 23](RO) Indicates that remote port has received this port's data link feature DLLP. */
        uint32_t reserved_24_30        : 7;
        uint32_t dlfsv                 : 1;  /**< [ 31: 31](RO/H) Remote data link feature supported valid. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_dlink_fstat_s cn; */
};
typedef union cavm_pcieepx_dlink_fstat cavm_pcieepx_dlink_fstat_t;

static inline uint64_t CAVM_PCIEEPX_DLINK_FSTAT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_DLINK_FSTAT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x38c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x38c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x38c + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x38c + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_DLINK_FSTAT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_DLINK_FSTAT(a) cavm_pcieepx_dlink_fstat_t
#define bustype_CAVM_PCIEEPX_DLINK_FSTAT(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_DLINK_FSTAT(a) "PCIEEPX_DLINK_FSTAT"
#define busnum_CAVM_PCIEEPX_DLINK_FSTAT(a) (a)
#define arguments_CAVM_PCIEEPX_DLINK_FSTAT(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_e_cap_list
 *
 * PCIe EP PF PCIe Capabilities/PCIe Capabilities List Register
 */
union cavm_pcieepx_e_cap_list
{
    uint32_t u;
    struct cavm_pcieepx_e_cap_list_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_30_31        : 2;
        uint32_t imn                   : 5;  /**< [ 29: 25](RO/WRSL) Interrupt message number. Updated by hardware, writable through
                                                                 PEM()_CFG_TBL(). */
        uint32_t si                    : 1;  /**< [ 24: 24](RO/WRSL) Slot implemented. This bit is writable through PEM()_CFG_TBL(). However, it must be 0 for
                                                                 an endpoint device. Therefore, the application must not write a one to this bit. */
        uint32_t dpt                   : 4;  /**< [ 23: 20](RO) Device port type.
                                                                 0x0 = PCI Express endpoint.
                                                                 0x1 = Legacy PCI Express endpoint.

                                                                 All other encodings are not supported. */
        uint32_t pciecv                : 4;  /**< [ 19: 16](RO) PCI Express capability version. */
        uint32_t ncp                   : 8;  /**< [ 15:  8](RO/WRSL) Next capability pointer. Points to the MSI-X Capabilities by default, writable through
                                                                 PEM()_CFG_TBL(). */
        uint32_t pcieid                : 8;  /**< [  7:  0](RO) PCI Express capability ID. */
#else /* Word 0 - Little Endian */
        uint32_t pcieid                : 8;  /**< [  7:  0](RO) PCI Express capability ID. */
        uint32_t ncp                   : 8;  /**< [ 15:  8](RO/WRSL) Next capability pointer. Points to the MSI-X Capabilities by default, writable through
                                                                 PEM()_CFG_TBL(). */
        uint32_t pciecv                : 4;  /**< [ 19: 16](RO) PCI Express capability version. */
        uint32_t dpt                   : 4;  /**< [ 23: 20](RO) Device port type.
                                                                 0x0 = PCI Express endpoint.
                                                                 0x1 = Legacy PCI Express endpoint.

                                                                 All other encodings are not supported. */
        uint32_t si                    : 1;  /**< [ 24: 24](RO/WRSL) Slot implemented. This bit is writable through PEM()_CFG_TBL(). However, it must be 0 for
                                                                 an endpoint device. Therefore, the application must not write a one to this bit. */
        uint32_t imn                   : 5;  /**< [ 29: 25](RO/WRSL) Interrupt message number. Updated by hardware, writable through
                                                                 PEM()_CFG_TBL(). */
        uint32_t reserved_30_31        : 2;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_e_cap_list_s cn; */
};
typedef union cavm_pcieepx_e_cap_list cavm_pcieepx_e_cap_list_t;

static inline uint64_t CAVM_PCIEEPX_E_CAP_LIST(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_E_CAP_LIST(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x70 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x70 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x70 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x70 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_E_CAP_LIST", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_E_CAP_LIST(a) cavm_pcieepx_e_cap_list_t
#define bustype_CAVM_PCIEEPX_E_CAP_LIST(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_E_CAP_LIST(a) "PCIEEPX_E_CAP_LIST"
#define busnum_CAVM_PCIEEPX_E_CAP_LIST(a) (a)
#define arguments_CAVM_PCIEEPX_E_CAP_LIST(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ebar
 *
 * PCIe EP PF Expansion ROM Base Address Register
 */
union cavm_pcieepx_ebar
{
    uint32_t u;
    struct cavm_pcieepx_ebar_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t eraddr                : 20; /**< [ 31: 12](RO) Expansion ROM address. */
        uint32_t reserved_1_11         : 11;
        uint32_t er_en                 : 1;  /**< [  0:  0](RO) Expansion ROM enable (Not Supported). */
#else /* Word 0 - Little Endian */
        uint32_t er_en                 : 1;  /**< [  0:  0](RO) Expansion ROM enable (Not Supported). */
        uint32_t reserved_1_11         : 11;
        uint32_t eraddr                : 20; /**< [ 31: 12](RO) Expansion ROM address. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ebar_s cn; */
};
typedef union cavm_pcieepx_ebar cavm_pcieepx_ebar_t;

static inline uint64_t CAVM_PCIEEPX_EBAR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_EBAR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x30 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x30 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x30 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x30 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_EBAR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_EBAR(a) cavm_pcieepx_ebar_t
#define bustype_CAVM_PCIEEPX_EBAR(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_EBAR(a) "PCIEEPX_EBAR"
#define busnum_CAVM_PCIEEPX_EBAR(a) (a)
#define arguments_CAVM_PCIEEPX_EBAR(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_eq_ctl01
 *
 * PCIe EP PF Equalization Control Lane 0/1 Register
 * Equalization Control Lane exists for PF0 only.
 */
union cavm_pcieepx_eq_ctl01
{
    uint32_t u;
    struct cavm_pcieepx_eq_ctl01_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_31           : 1;
        uint32_t l1urph                : 3;  /**< [ 30: 28](RO/H) Lane 1 upstream port receiver preset hint. */
        uint32_t l1utp                 : 4;  /**< [ 27: 24](RO/H) Lane 1 upstream port transmitter preset. */
        uint32_t reserved_23           : 1;
        uint32_t l1drph                : 3;  /**< [ 22: 20](RO) Lane 1 downstream port receiver preset hint.
                                                                 This field reserved if port is operating as a upstream port. */
        uint32_t l1dtp                 : 4;  /**< [ 19: 16](RO) Lane 1 downstream port transmitter preset.
                                                                 This field reserved if port is operating as a upstream port. */
        uint32_t reserved_15           : 1;
        uint32_t l0urph                : 3;  /**< [ 14: 12](RO/H) Lane 0 upstream port receiver preset hint. */
        uint32_t l0utp                 : 4;  /**< [ 11:  8](RO/H) Lane 0 upstream port transmitter preset. */
        uint32_t reserved_7            : 1;
        uint32_t l0drph                : 3;  /**< [  6:  4](RO) Lane 0 downstream port receiver preset hint.
                                                                 This field reserved if port is operating as a upstream port. */
        uint32_t l0dtp                 : 4;  /**< [  3:  0](RO) Lane 0 downstream port transmitter preset.
                                                                 This field reserved if port is operating as a Upstream Port. */
#else /* Word 0 - Little Endian */
        uint32_t l0dtp                 : 4;  /**< [  3:  0](RO) Lane 0 downstream port transmitter preset.
                                                                 This field reserved if port is operating as a Upstream Port. */
        uint32_t l0drph                : 3;  /**< [  6:  4](RO) Lane 0 downstream port receiver preset hint.
                                                                 This field reserved if port is operating as a upstream port. */
        uint32_t reserved_7            : 1;
        uint32_t l0utp                 : 4;  /**< [ 11:  8](RO/H) Lane 0 upstream port transmitter preset. */
        uint32_t l0urph                : 3;  /**< [ 14: 12](RO/H) Lane 0 upstream port receiver preset hint. */
        uint32_t reserved_15           : 1;
        uint32_t l1dtp                 : 4;  /**< [ 19: 16](RO) Lane 1 downstream port transmitter preset.
                                                                 This field reserved if port is operating as a upstream port. */
        uint32_t l1drph                : 3;  /**< [ 22: 20](RO) Lane 1 downstream port receiver preset hint.
                                                                 This field reserved if port is operating as a upstream port. */
        uint32_t reserved_23           : 1;
        uint32_t l1utp                 : 4;  /**< [ 27: 24](RO/H) Lane 1 upstream port transmitter preset. */
        uint32_t l1urph                : 3;  /**< [ 30: 28](RO/H) Lane 1 upstream port receiver preset hint. */
        uint32_t reserved_31           : 1;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_eq_ctl01_s cn; */
};
typedef union cavm_pcieepx_eq_ctl01 cavm_pcieepx_eq_ctl01_t;

static inline uint64_t CAVM_PCIEEPX_EQ_CTL01(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_EQ_CTL01(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x174 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x174 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x174 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x174 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_EQ_CTL01", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_EQ_CTL01(a) cavm_pcieepx_eq_ctl01_t
#define bustype_CAVM_PCIEEPX_EQ_CTL01(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_EQ_CTL01(a) "PCIEEPX_EQ_CTL01"
#define busnum_CAVM_PCIEEPX_EQ_CTL01(a) (a)
#define arguments_CAVM_PCIEEPX_EQ_CTL01(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_eq_ctl23
 *
 * PCIe EP PF Equalization Control Lane 2/3 Register
 * Equalization Control Lane exists for PF0 only.
 */
union cavm_pcieepx_eq_ctl23
{
    uint32_t u;
    struct cavm_pcieepx_eq_ctl23_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_31           : 1;
        uint32_t l3urph                : 3;  /**< [ 30: 28](RO/H) Lane 3 upstream port receiver preset hint. */
        uint32_t l3utp                 : 4;  /**< [ 27: 24](RO/H) Lane 3 upstream port transmitter preset. */
        uint32_t reserved_23           : 1;
        uint32_t l3drph                : 3;  /**< [ 22: 20](RO) Lane 3 downstream port receiver preset hint.
                                                                 This field reserved if port is operating as a upstream port. */
        uint32_t l3dtp                 : 4;  /**< [ 19: 16](RO) Lane 3 downstream port transmitter preset.
                                                                 This field reserved if port is operating as a upstream port. */
        uint32_t reserved_15           : 1;
        uint32_t l2urph                : 3;  /**< [ 14: 12](RO/H) Lane 2 upstream port receiver preset hint. */
        uint32_t l2utp                 : 4;  /**< [ 11:  8](RO/H) Lane 2 upstream port transmitter preset. */
        uint32_t reserved_7            : 1;
        uint32_t l2drph                : 3;  /**< [  6:  4](RO) Lane 2 downstream port receiver preset hint.
                                                                 This field reserved if port is operating as a upstream port. */
        uint32_t l2dtp                 : 4;  /**< [  3:  0](RO) Lane 2 downstream port transmitter preset.
                                                                 This field reserved if port is operating as a upstream port. */
#else /* Word 0 - Little Endian */
        uint32_t l2dtp                 : 4;  /**< [  3:  0](RO) Lane 2 downstream port transmitter preset.
                                                                 This field reserved if port is operating as a upstream port. */
        uint32_t l2drph                : 3;  /**< [  6:  4](RO) Lane 2 downstream port receiver preset hint.
                                                                 This field reserved if port is operating as a upstream port. */
        uint32_t reserved_7            : 1;
        uint32_t l2utp                 : 4;  /**< [ 11:  8](RO/H) Lane 2 upstream port transmitter preset. */
        uint32_t l2urph                : 3;  /**< [ 14: 12](RO/H) Lane 2 upstream port receiver preset hint. */
        uint32_t reserved_15           : 1;
        uint32_t l3dtp                 : 4;  /**< [ 19: 16](RO) Lane 3 downstream port transmitter preset.
                                                                 This field reserved if port is operating as a upstream port. */
        uint32_t l3drph                : 3;  /**< [ 22: 20](RO) Lane 3 downstream port receiver preset hint.
                                                                 This field reserved if port is operating as a upstream port. */
        uint32_t reserved_23           : 1;
        uint32_t l3utp                 : 4;  /**< [ 27: 24](RO/H) Lane 3 upstream port transmitter preset. */
        uint32_t l3urph                : 3;  /**< [ 30: 28](RO/H) Lane 3 upstream port receiver preset hint. */
        uint32_t reserved_31           : 1;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_eq_ctl23_s cn; */
};
typedef union cavm_pcieepx_eq_ctl23 cavm_pcieepx_eq_ctl23_t;

static inline uint64_t CAVM_PCIEEPX_EQ_CTL23(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_EQ_CTL23(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x178 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x178 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x178 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x178 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_EQ_CTL23", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_EQ_CTL23(a) cavm_pcieepx_eq_ctl23_t
#define bustype_CAVM_PCIEEPX_EQ_CTL23(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_EQ_CTL23(a) "PCIEEPX_EQ_CTL23"
#define busnum_CAVM_PCIEEPX_EQ_CTL23(a) (a)
#define arguments_CAVM_PCIEEPX_EQ_CTL23(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP_SHADOW) pcieep#_erom_mask
 *
 * PCIe EP PF Expansion ROM BAR Mask Register
 * The ROM mask register is invisible to host software and not readable from the application. The
 * ROM mask register is only writable through PEM()_CFG_TBL().
 */
union cavm_pcieepx_erom_mask
{
    uint32_t u;
    struct cavm_pcieepx_erom_mask_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t mask                  : 31; /**< [ 31:  1](WORSL/H) BAR mask low. */
        uint32_t enb                   : 1;  /**< [  0:  0](WORSL/H) BAR enable. 0 = BAR ROM is disabled; 1 = BAR ROM is enabled. Bit 0 is interpreted as BAR
                                                                 enable when writing to the BAR mask register rather than as a mask bit because bit 0 of a
                                                                 BAR is always masked from writing by host software. Bit 0 must be written prior to writing
                                                                 the other mask bits. */
#else /* Word 0 - Little Endian */
        uint32_t enb                   : 1;  /**< [  0:  0](WORSL/H) BAR enable. 0 = BAR ROM is disabled; 1 = BAR ROM is enabled. Bit 0 is interpreted as BAR
                                                                 enable when writing to the BAR mask register rather than as a mask bit because bit 0 of a
                                                                 BAR is always masked from writing by host software. Bit 0 must be written prior to writing
                                                                 the other mask bits. */
        uint32_t mask                  : 31; /**< [ 31:  1](WORSL/H) BAR mask low. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_erom_mask_s cn; */
};
typedef union cavm_pcieepx_erom_mask cavm_pcieepx_erom_mask_t;

static inline uint64_t CAVM_PCIEEPX_EROM_MASK(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_EROM_MASK(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x10030 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x10030 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x10030 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x10030 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_EROM_MASK", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_EROM_MASK(a) cavm_pcieepx_erom_mask_t
#define bustype_CAVM_PCIEEPX_EROM_MASK(a) CSR_TYPE_PCICONFIGEP_SHADOW
#define basename_CAVM_PCIEEPX_EROM_MASK(a) "PCIEEPX_EROM_MASK"
#define busnum_CAVM_PCIEEPX_EROM_MASK(a) (a)
#define arguments_CAVM_PCIEEPX_EROM_MASK(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ext_cap
 *
 * PCIe EP PF Advanced Error Reporting Extended Capability Header Register
 */
union cavm_pcieepx_ext_cap
{
    uint32_t u;
    struct cavm_pcieepx_ext_cap_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t nco                   : 12; /**< [ 31: 20](RO/WRSL) Next capability offset.
                                                                 Writable through PEM()_CFG_TBL(). */
        uint32_t cv                    : 4;  /**< [ 19: 16](RO/WRSL) Capability version.
                                                                 Writable through PEM()_CFG_TBL(). */
        uint32_t pcieec                : 16; /**< [ 15:  0](RO/WRSL) PCI Express extended capability.
                                                                 Writable through PEM()_CFG_TBL(). */
#else /* Word 0 - Little Endian */
        uint32_t pcieec                : 16; /**< [ 15:  0](RO/WRSL) PCI Express extended capability.
                                                                 Writable through PEM()_CFG_TBL(). */
        uint32_t cv                    : 4;  /**< [ 19: 16](RO/WRSL) Capability version.
                                                                 Writable through PEM()_CFG_TBL(). */
        uint32_t nco                   : 12; /**< [ 31: 20](RO/WRSL) Next capability offset.
                                                                 Writable through PEM()_CFG_TBL(). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ext_cap_s cn; */
};
typedef union cavm_pcieepx_ext_cap cavm_pcieepx_ext_cap_t;

static inline uint64_t CAVM_PCIEEPX_EXT_CAP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_EXT_CAP(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x100 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x100 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x100 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x100 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_EXT_CAP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_EXT_CAP(a) cavm_pcieepx_ext_cap_t
#define bustype_CAVM_PCIEEPX_EXT_CAP(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_EXT_CAP(a) "PCIEEPX_EXT_CAP"
#define busnum_CAVM_PCIEEPX_EXT_CAP(a) (a)
#define arguments_CAVM_PCIEEPX_EXT_CAP(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_filt_msk2
 *
 * PCIe EP PF Filter Mask Register 2
 */
union cavm_pcieepx_filt_msk2
{
    uint32_t u;
    struct cavm_pcieepx_filt_msk2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t m_prs                 : 1;  /**< [  7:  7](R/W) Mask PRS messages dropped silently. */
        uint32_t m_unmask_td           : 1;  /**< [  6:  6](R/W) Disable unmask TD bit. */
        uint32_t m_unmask_ur_pois      : 1;  /**< [  5:  5](R/W) Disable unmask UR Poison with TRGT0 destination. */
        uint32_t m_ln_vend1_drop       : 1;  /**< [  4:  4](R/W) Mask LN messages dropped silently. */
        uint32_t m_handle_flush        : 1;  /**< [  3:  3](R/W) Mask core filter to handle flush request. */
        uint32_t m_dabort_4ucpl        : 1;  /**< [  2:  2](R/W) Mask DLLP abort for unexpected CPL. */
        uint32_t m_vend1_drp           : 1;  /**< [  1:  1](R/W) Mask vendor MSG type 1 dropped silently. */
        uint32_t m_vend0_drp           : 1;  /**< [  0:  0](R/W) Mask vendor MSG type 0 dropped with UR error reporting. */
#else /* Word 0 - Little Endian */
        uint32_t m_vend0_drp           : 1;  /**< [  0:  0](R/W) Mask vendor MSG type 0 dropped with UR error reporting. */
        uint32_t m_vend1_drp           : 1;  /**< [  1:  1](R/W) Mask vendor MSG type 1 dropped silently. */
        uint32_t m_dabort_4ucpl        : 1;  /**< [  2:  2](R/W) Mask DLLP abort for unexpected CPL. */
        uint32_t m_handle_flush        : 1;  /**< [  3:  3](R/W) Mask core filter to handle flush request. */
        uint32_t m_ln_vend1_drop       : 1;  /**< [  4:  4](R/W) Mask LN messages dropped silently. */
        uint32_t m_unmask_ur_pois      : 1;  /**< [  5:  5](R/W) Disable unmask UR Poison with TRGT0 destination. */
        uint32_t m_unmask_td           : 1;  /**< [  6:  6](R/W) Disable unmask TD bit. */
        uint32_t m_prs                 : 1;  /**< [  7:  7](R/W) Mask PRS messages dropped silently. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_filt_msk2_s cn; */
};
typedef union cavm_pcieepx_filt_msk2 cavm_pcieepx_filt_msk2_t;

static inline uint64_t CAVM_PCIEEPX_FILT_MSK2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_FILT_MSK2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x720 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x720 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x720 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x720 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_FILT_MSK2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_FILT_MSK2(a) cavm_pcieepx_filt_msk2_t
#define bustype_CAVM_PCIEEPX_FILT_MSK2(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_FILT_MSK2(a) "PCIEEPX_FILT_MSK2"
#define busnum_CAVM_PCIEEPX_FILT_MSK2(a) (a)
#define arguments_CAVM_PCIEEPX_FILT_MSK2(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_gen2_port
 *
 * PCIe EP PF Gen2 Port Logic Register
 */
union cavm_pcieepx_gen2_port
{
    uint32_t u;
    struct cavm_pcieepx_gen2_port_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t mod_ts_en             : 1;  /**< [ 31: 31](RO/WRSL) Enable the controller to send the Modified TS OS if both sides of
                                                                 the link agree. */
        uint32_t force_lflip           : 1;  /**< [ 30: 30](R/W) Enable to force LANE_UTEST physical lane flips to logical
                                                                 lane 0.  All the other physical lanes are turned off.
                                                                 The PCIEEP_PORT_CTL[LME] must be set to 0x1. */
        uint32_t tx_mcmpl_pat_for_lpbk : 1;  /**< [ 29: 29](R/W) Require Loopback slave to transmit Modified Compliance
                                                                 Pattern in Loopback.Active state at Gen5 rate. */
        uint32_t eq_for_lpbk           : 1;  /**< [ 28: 28](R/W) Perform EQ in Loopback in Gen5 rate.
                                                                 Loopback master enters Loopback.Active only because
                                                                 of receiving 2 TS1s with Loopback but asserted. */
        uint32_t lane_utest            : 4;  /**< [ 27: 24](R/W) Lane selct for FORCE_LANE_FLIP or for EQ_FOR_LPBK.
                                                                 0x0 = Lane0.
                                                                 0x1 = Lane1.
                                                                 0x2 = Lane2.
                                                                 0x3 = Lane3.
                                                                 0x4-0xF = Reserved. */
        uint32_t sel_deemph_bit        : 1;  /**< [ 23: 23](R/W) The select deemphasis bit (Symbol 4 bit 6) of the
                                                                 transmitted TS2 Ordered Sets for DSP in Recovery.RcvrCfg
                                                                 state.
                                                                  0 = from PCIEEP_LINK_CTL2[SDE].
                                                                  1 = Requested by Upstream Port in Recovery.RcvrLock state. */
        uint32_t sel_deemph_var        : 1;  /**< [ 22: 22](R/W) The select deemphasis variable for DSP on entry to Recovery.RcvrCfg
                                                                 state.
                                                                  0 = Requested by Upstream Port in Recovery.RcvrLock state.
                                                                  1 = from PCIEEP_LINK_CTL2[SDE]. */
        uint32_t gen1_ei_inf           : 1;  /**< [ 21: 21](R/W) Electrical idle inference mode at Gen1 Rate. Programmable mode to determine
                                                                 inferred electrical idle (EI) in Recovery.Speed or Loopback.Active (as slave)
                                                                 state at Gen1 speed by looking for a one value on RxElecIdle instead of looking
                                                                 for a zero on RxValid. If the PHY fails to deassert the RxValid signal in
                                                                 Recovery.Speed or Loopback.Active (because of corrupted EIOS for example),
                                                                 then EI cannot be inferred successfully in the controller by just detecting the
                                                                 condition RxValid=0.
                                                                   0 = Use RxElecIdle signal to infer electrical idle.
                                                                   1 = Use RxValid signal to infer electrical idle. */
        uint32_t s_d_e                 : 1;  /**< [ 20: 20](R/W) Set the deemphasis level for upstream ports.
                                                                 0 = -6 dB.
                                                                 1 = -3.5 dB. */
        uint32_t ctcrb                 : 1;  /**< [ 19: 19](R/W) Config TX compliance receive bit. When set to one, signals LTSSM to transmit TS ordered sets
                                                                 with the compliance receive bit assert (equal to one). */
        uint32_t cpyts                 : 1;  /**< [ 18: 18](R/W) Config PHY TX swing. Indicates the voltage level that the PHY should drive. When set to one,
                                                                 indicates low swing. When set to 0, indicates full swing. */
        uint32_t dsc                   : 1;  /**< [ 17: 17](R/W/H) Directed speed change. A write of one initiates a speed change.
                                                                 When the speed change occurs, the controller will clear the contents of this field. */
        uint32_t alaneflip             : 1;  /**< [ 16: 16](R/W) Enable auto flipping of the lanes. */
        uint32_t pdetlane              : 3;  /**< [ 15: 13](R/W) Predetermined lane for auto flip. This field defines which
                                                                 physical lane is connected to logical Lane0 by the flip
                                                                 operation performed in detect.

                                                                 When non-zero, this field is used to restrict the receiver detect
                                                                 procedure to a particular lane when the default detect and polling
                                                                 procedure performed on all lanes cannot be successful. A notable
                                                                 example of when it is useful to program this field to a value
                                                                 different from the default, is when a lane is asymmetrically
                                                                 broken, that is, it is detected in Detect LTSSM state but it
                                                                 cannot exit Electrical Idle in Polling LTSSM state.

                                                                   0x0 = Connect logical Lane0 to physical lane 0 or lane 15,7,3,1
                                                                         depending on which lane is detected.
                                                                   0x1 = Connect logical Lane0 to physical lane 1.
                                                                   0x2 = Connect logical Lane0 to physical lane 3.
                                                                   0x3 = Connect logical Lane0 to physical lane 7.
                                                                   0x4 = Connect logical Lane0 to physical lane 15.
                                                                   0x5 - 0x7 = Reserved. */
        uint32_t nlanes                : 5;  /**< [ 12:  8](R/W) Predetermined number of lanes.  Defines the number of
                                                                 lanes which are connected and not bad. Used to limit the
                                                                 effective link width to ignore 'broken" or "unused" lanes that
                                                                 detect a receiver. Indicates the number of lanes to check for
                                                                 exit from electrical idle in Polling.Active and L2.Idle.

                                                                 0x1 = 1 lane.
                                                                 0x2 = 2 lanes.
                                                                 0x3 = 3 lanes.
                                                                 0x4 = 4 lanes.
                                                                 0x5-0x1F = Reserved.

                                                                 When you have unused lanes in your system, then you must
                                                                 change the value in this register to reflect the number of
                                                                 lanes. You must also change PCIEEP_PORT_CTL[LME]. */
        uint32_t n_fts                 : 8;  /**< [  7:  0](R/W) Sets the number of fast training sequences (N_FTS) that the core advertises as its
                                                                 N_FTS during GEN2 Link training. This value is used to inform the link partner about the
                                                                 PHY's ability to recover synchronization after a low power state.

                                                                 Do not set [N_FTS] to zero; doing so can cause the LTSSM to go into the recovery
                                                                 state when exiting from L0s. */
#else /* Word 0 - Little Endian */
        uint32_t n_fts                 : 8;  /**< [  7:  0](R/W) Sets the number of fast training sequences (N_FTS) that the core advertises as its
                                                                 N_FTS during GEN2 Link training. This value is used to inform the link partner about the
                                                                 PHY's ability to recover synchronization after a low power state.

                                                                 Do not set [N_FTS] to zero; doing so can cause the LTSSM to go into the recovery
                                                                 state when exiting from L0s. */
        uint32_t nlanes                : 5;  /**< [ 12:  8](R/W) Predetermined number of lanes.  Defines the number of
                                                                 lanes which are connected and not bad. Used to limit the
                                                                 effective link width to ignore 'broken" or "unused" lanes that
                                                                 detect a receiver. Indicates the number of lanes to check for
                                                                 exit from electrical idle in Polling.Active and L2.Idle.

                                                                 0x1 = 1 lane.
                                                                 0x2 = 2 lanes.
                                                                 0x3 = 3 lanes.
                                                                 0x4 = 4 lanes.
                                                                 0x5-0x1F = Reserved.

                                                                 When you have unused lanes in your system, then you must
                                                                 change the value in this register to reflect the number of
                                                                 lanes. You must also change PCIEEP_PORT_CTL[LME]. */
        uint32_t pdetlane              : 3;  /**< [ 15: 13](R/W) Predetermined lane for auto flip. This field defines which
                                                                 physical lane is connected to logical Lane0 by the flip
                                                                 operation performed in detect.

                                                                 When non-zero, this field is used to restrict the receiver detect
                                                                 procedure to a particular lane when the default detect and polling
                                                                 procedure performed on all lanes cannot be successful. A notable
                                                                 example of when it is useful to program this field to a value
                                                                 different from the default, is when a lane is asymmetrically
                                                                 broken, that is, it is detected in Detect LTSSM state but it
                                                                 cannot exit Electrical Idle in Polling LTSSM state.

                                                                   0x0 = Connect logical Lane0 to physical lane 0 or lane 15,7,3,1
                                                                         depending on which lane is detected.
                                                                   0x1 = Connect logical Lane0 to physical lane 1.
                                                                   0x2 = Connect logical Lane0 to physical lane 3.
                                                                   0x3 = Connect logical Lane0 to physical lane 7.
                                                                   0x4 = Connect logical Lane0 to physical lane 15.
                                                                   0x5 - 0x7 = Reserved. */
        uint32_t alaneflip             : 1;  /**< [ 16: 16](R/W) Enable auto flipping of the lanes. */
        uint32_t dsc                   : 1;  /**< [ 17: 17](R/W/H) Directed speed change. A write of one initiates a speed change.
                                                                 When the speed change occurs, the controller will clear the contents of this field. */
        uint32_t cpyts                 : 1;  /**< [ 18: 18](R/W) Config PHY TX swing. Indicates the voltage level that the PHY should drive. When set to one,
                                                                 indicates low swing. When set to 0, indicates full swing. */
        uint32_t ctcrb                 : 1;  /**< [ 19: 19](R/W) Config TX compliance receive bit. When set to one, signals LTSSM to transmit TS ordered sets
                                                                 with the compliance receive bit assert (equal to one). */
        uint32_t s_d_e                 : 1;  /**< [ 20: 20](R/W) Set the deemphasis level for upstream ports.
                                                                 0 = -6 dB.
                                                                 1 = -3.5 dB. */
        uint32_t gen1_ei_inf           : 1;  /**< [ 21: 21](R/W) Electrical idle inference mode at Gen1 Rate. Programmable mode to determine
                                                                 inferred electrical idle (EI) in Recovery.Speed or Loopback.Active (as slave)
                                                                 state at Gen1 speed by looking for a one value on RxElecIdle instead of looking
                                                                 for a zero on RxValid. If the PHY fails to deassert the RxValid signal in
                                                                 Recovery.Speed or Loopback.Active (because of corrupted EIOS for example),
                                                                 then EI cannot be inferred successfully in the controller by just detecting the
                                                                 condition RxValid=0.
                                                                   0 = Use RxElecIdle signal to infer electrical idle.
                                                                   1 = Use RxValid signal to infer electrical idle. */
        uint32_t sel_deemph_var        : 1;  /**< [ 22: 22](R/W) The select deemphasis variable for DSP on entry to Recovery.RcvrCfg
                                                                 state.
                                                                  0 = Requested by Upstream Port in Recovery.RcvrLock state.
                                                                  1 = from PCIEEP_LINK_CTL2[SDE]. */
        uint32_t sel_deemph_bit        : 1;  /**< [ 23: 23](R/W) The select deemphasis bit (Symbol 4 bit 6) of the
                                                                 transmitted TS2 Ordered Sets for DSP in Recovery.RcvrCfg
                                                                 state.
                                                                  0 = from PCIEEP_LINK_CTL2[SDE].
                                                                  1 = Requested by Upstream Port in Recovery.RcvrLock state. */
        uint32_t lane_utest            : 4;  /**< [ 27: 24](R/W) Lane selct for FORCE_LANE_FLIP or for EQ_FOR_LPBK.
                                                                 0x0 = Lane0.
                                                                 0x1 = Lane1.
                                                                 0x2 = Lane2.
                                                                 0x3 = Lane3.
                                                                 0x4-0xF = Reserved. */
        uint32_t eq_for_lpbk           : 1;  /**< [ 28: 28](R/W) Perform EQ in Loopback in Gen5 rate.
                                                                 Loopback master enters Loopback.Active only because
                                                                 of receiving 2 TS1s with Loopback but asserted. */
        uint32_t tx_mcmpl_pat_for_lpbk : 1;  /**< [ 29: 29](R/W) Require Loopback slave to transmit Modified Compliance
                                                                 Pattern in Loopback.Active state at Gen5 rate. */
        uint32_t force_lflip           : 1;  /**< [ 30: 30](R/W) Enable to force LANE_UTEST physical lane flips to logical
                                                                 lane 0.  All the other physical lanes are turned off.
                                                                 The PCIEEP_PORT_CTL[LME] must be set to 0x1. */
        uint32_t mod_ts_en             : 1;  /**< [ 31: 31](RO/WRSL) Enable the controller to send the Modified TS OS if both sides of
                                                                 the link agree. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_gen2_port_s cn; */
};
typedef union cavm_pcieepx_gen2_port cavm_pcieepx_gen2_port_t;

static inline uint64_t CAVM_PCIEEPX_GEN2_PORT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_GEN2_PORT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x80c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x80c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x80c + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x80c + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_GEN2_PORT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_GEN2_PORT(a) cavm_pcieepx_gen2_port_t
#define bustype_CAVM_PCIEEPX_GEN2_PORT(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_GEN2_PORT(a) "PCIEEPX_GEN2_PORT"
#define busnum_CAVM_PCIEEPX_GEN2_PORT(a) (a)
#define arguments_CAVM_PCIEEPX_GEN2_PORT(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_gen3_eq_ctl
 *
 * PCIe EP PF Gen3 EQ Control Register
 */
union cavm_pcieepx_gen3_eq_ctl
{
    uint32_t u;
    struct cavm_pcieepx_gen3_eq_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_27_31        : 5;
        uint32_t scefpm                : 1;  /**< [ 26: 26](R/W) Request core to send back-to-back EIEOS in Recovery.RcvrLock state until
                                                                 presets to coefficient mapping is complete. */
        uint32_t eq_pset_req           : 1;  /**< [ 25: 25](R/W) Reserved. */
        uint32_t iif                   : 1;  /**< [ 24: 24](R/W) Include initial FOM. Include, or not, the FOM feedback from the initial preset evaluation
                                                                 performed in the EQ master, when finding the highest FOM among all preset evaluations. */
        uint32_t prv                   : 16; /**< [ 23:  8](R/W) Preset request vector. Requesting of presets during the initial part of the EQ master
                                                                 phase. Encoding scheme as follows:

                                                                 Bit [15:0] = 0x0: No preset is requested and evaluated in the EQ master phase.

                                                                 Bit [i] = 1: Preset=i is requested and evaluated in the EQ master phase.

                                                                 _ 0b0000000000000000 = No preset req/evaluated in EQ master phase.

                                                                 _ 0b00000xxxxxxxxxx1 = Preset 0 req/evaluated in EQ master phase.

                                                                 _ 0b00000xxxxxxxxx1x = Preset 1 req/evaluated in EQ master phase.

                                                                 _ 0b00000xxxxxxxx1xx = Preset 2 req/evaluated in EQ master phase.

                                                                 _ 0b00000xxxxxxx1xxx = Preset 3 req/evaluated in EQ master phase.

                                                                 _ 0b00000xxxxxx1xxxx = Preset 4 req/evaluated in EQ master phase.

                                                                 _ 0b00000xxxxx1xxxxx = Preset 5 req/evaluated in EQ master phase.

                                                                 _ 0b00000xxxx1xxxxxx = Preset 6 req/evaluated in EQ master phase.

                                                                 _ 0b00000xxx1xxxxxxx = Preset 7 req/evaluated in EQ master phase.

                                                                 _ 0b00000xx1xxxxxxxx = Preset 8 req/evaluated in EQ master phase.

                                                                 _ 0b00000x1xxxxxxxxx = Preset 9 req/evaluated in EQ master phase.

                                                                 _ 0b000001xxxxxxxxxx = Preset 10 req/evaluated in EQ master phase.

                                                                 _ All other encodings = Reserved. */
        uint32_t reserved_7            : 1;
        uint32_t eq_redo_en            : 1;  /**< [  6:  6](R/W) Support EQ redo and lower rate change. */
        uint32_t p23td                 : 1;  /**< [  5:  5](R/W) Phase2_3 2 ms timeout disable. Determine behavior in Phase2 for USP (Phase3 if DSP) when
                                                                 the PHY does not respond within 2 ms to the assertion of RxEqEval:
                                                                 0 = Abort the current evaluation; stop any attempt to modify the remote transmitter
                                                                 settings. Phase2 will be terminated by the 24 ms timeout.
                                                                 1 = Ignore the 2 ms timeout and continue as normal. This is used to support PHYs that
                                                                 require more than 2 ms to respond to the assertion of RxEqEval. */
        uint32_t bt                    : 1;  /**< [  4:  4](R/W) Behavior after 24 ms timeout (when optimal settings are not found).

                                                                 For a USP: determine the next LTSSM state from Phase2:
                                                                 0 = Recovery.Speed.
                                                                 1 = Recovry.Equalization.Phase3.

                                                                 For a DSP: determine the next LTSSM state from Phase3:
                                                                 0 = Recovery.Speed.
                                                                 1 = Recovry.Equalization.RcrLock.

                                                                 When optimal settings are not found:
                                                                 * Equalization phase 3 successful status bit is not set in the link status register.
                                                                 * Equalization phase 3 complete status bit is set in the link status register. */
        uint32_t fm                    : 4;  /**< [  3:  0](R/W) Feedback mode.
                                                                 0 = Direction of change.
                                                                 1 = Figure of merit (Not Supported).
                                                                 2-15 = Reserved. */
#else /* Word 0 - Little Endian */
        uint32_t fm                    : 4;  /**< [  3:  0](R/W) Feedback mode.
                                                                 0 = Direction of change.
                                                                 1 = Figure of merit (Not Supported).
                                                                 2-15 = Reserved. */
        uint32_t bt                    : 1;  /**< [  4:  4](R/W) Behavior after 24 ms timeout (when optimal settings are not found).

                                                                 For a USP: determine the next LTSSM state from Phase2:
                                                                 0 = Recovery.Speed.
                                                                 1 = Recovry.Equalization.Phase3.

                                                                 For a DSP: determine the next LTSSM state from Phase3:
                                                                 0 = Recovery.Speed.
                                                                 1 = Recovry.Equalization.RcrLock.

                                                                 When optimal settings are not found:
                                                                 * Equalization phase 3 successful status bit is not set in the link status register.
                                                                 * Equalization phase 3 complete status bit is set in the link status register. */
        uint32_t p23td                 : 1;  /**< [  5:  5](R/W) Phase2_3 2 ms timeout disable. Determine behavior in Phase2 for USP (Phase3 if DSP) when
                                                                 the PHY does not respond within 2 ms to the assertion of RxEqEval:
                                                                 0 = Abort the current evaluation; stop any attempt to modify the remote transmitter
                                                                 settings. Phase2 will be terminated by the 24 ms timeout.
                                                                 1 = Ignore the 2 ms timeout and continue as normal. This is used to support PHYs that
                                                                 require more than 2 ms to respond to the assertion of RxEqEval. */
        uint32_t eq_redo_en            : 1;  /**< [  6:  6](R/W) Support EQ redo and lower rate change. */
        uint32_t reserved_7            : 1;
        uint32_t prv                   : 16; /**< [ 23:  8](R/W) Preset request vector. Requesting of presets during the initial part of the EQ master
                                                                 phase. Encoding scheme as follows:

                                                                 Bit [15:0] = 0x0: No preset is requested and evaluated in the EQ master phase.

                                                                 Bit [i] = 1: Preset=i is requested and evaluated in the EQ master phase.

                                                                 _ 0b0000000000000000 = No preset req/evaluated in EQ master phase.

                                                                 _ 0b00000xxxxxxxxxx1 = Preset 0 req/evaluated in EQ master phase.

                                                                 _ 0b00000xxxxxxxxx1x = Preset 1 req/evaluated in EQ master phase.

                                                                 _ 0b00000xxxxxxxx1xx = Preset 2 req/evaluated in EQ master phase.

                                                                 _ 0b00000xxxxxxx1xxx = Preset 3 req/evaluated in EQ master phase.

                                                                 _ 0b00000xxxxxx1xxxx = Preset 4 req/evaluated in EQ master phase.

                                                                 _ 0b00000xxxxx1xxxxx = Preset 5 req/evaluated in EQ master phase.

                                                                 _ 0b00000xxxx1xxxxxx = Preset 6 req/evaluated in EQ master phase.

                                                                 _ 0b00000xxx1xxxxxxx = Preset 7 req/evaluated in EQ master phase.

                                                                 _ 0b00000xx1xxxxxxxx = Preset 8 req/evaluated in EQ master phase.

                                                                 _ 0b00000x1xxxxxxxxx = Preset 9 req/evaluated in EQ master phase.

                                                                 _ 0b000001xxxxxxxxxx = Preset 10 req/evaluated in EQ master phase.

                                                                 _ All other encodings = Reserved. */
        uint32_t iif                   : 1;  /**< [ 24: 24](R/W) Include initial FOM. Include, or not, the FOM feedback from the initial preset evaluation
                                                                 performed in the EQ master, when finding the highest FOM among all preset evaluations. */
        uint32_t eq_pset_req           : 1;  /**< [ 25: 25](R/W) Reserved. */
        uint32_t scefpm                : 1;  /**< [ 26: 26](R/W) Request core to send back-to-back EIEOS in Recovery.RcvrLock state until
                                                                 presets to coefficient mapping is complete. */
        uint32_t reserved_27_31        : 5;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_gen3_eq_ctl_s cn; */
};
typedef union cavm_pcieepx_gen3_eq_ctl cavm_pcieepx_gen3_eq_ctl_t;

static inline uint64_t CAVM_PCIEEPX_GEN3_EQ_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_GEN3_EQ_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8a8 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x8a8 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8a8 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8a8 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_GEN3_EQ_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_GEN3_EQ_CTL(a) cavm_pcieepx_gen3_eq_ctl_t
#define bustype_CAVM_PCIEEPX_GEN3_EQ_CTL(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_GEN3_EQ_CTL(a) "PCIEEPX_GEN3_EQ_CTL"
#define busnum_CAVM_PCIEEPX_GEN3_EQ_CTL(a) (a)
#define arguments_CAVM_PCIEEPX_GEN3_EQ_CTL(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_gen3_pipe_lb
 *
 * PCIe EP PF Gen3 PIPE Loopback Register
 */
union cavm_pcieepx_gen3_pipe_lb
{
    uint32_t u;
    struct cavm_pcieepx_gen3_pipe_lb_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t ple                   : 1;  /**< [ 31: 31](R/W) Pipe loopback enable. */
        uint32_t reserved_16_30        : 15;
        uint32_t lpbk_rxvalid          : 16; /**< [ 15:  0](R/W) Loopback rxvalid (lane enable - 1 bit per lane). */
#else /* Word 0 - Little Endian */
        uint32_t lpbk_rxvalid          : 16; /**< [ 15:  0](R/W) Loopback rxvalid (lane enable - 1 bit per lane). */
        uint32_t reserved_16_30        : 15;
        uint32_t ple                   : 1;  /**< [ 31: 31](R/W) Pipe loopback enable. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_gen3_pipe_lb_s cn; */
};
typedef union cavm_pcieepx_gen3_pipe_lb cavm_pcieepx_gen3_pipe_lb_t;

static inline uint64_t CAVM_PCIEEPX_GEN3_PIPE_LB(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_GEN3_PIPE_LB(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8b8 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x8b8 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8b8 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8b8 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_GEN3_PIPE_LB", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_GEN3_PIPE_LB(a) cavm_pcieepx_gen3_pipe_lb_t
#define bustype_CAVM_PCIEEPX_GEN3_PIPE_LB(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_GEN3_PIPE_LB(a) "PCIEEPX_GEN3_PIPE_LB"
#define busnum_CAVM_PCIEEPX_GEN3_PIPE_LB(a) (a)
#define arguments_CAVM_PCIEEPX_GEN3_PIPE_LB(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_gen4_lane_margining_1
 *
 * PCIe RC Gen4 Lane Marginging Register 1
 */
union cavm_pcieepx_gen4_lane_margining_1
{
    uint32_t u;
    struct cavm_pcieepx_gen4_lane_margining_1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_30_31        : 2;
        uint32_t mvo                   : 6;  /**< [ 29: 24](R/W) Max voltage offset for lane margining at the receiver (Not supported). */
        uint32_t reserved_23           : 1;
        uint32_t nvs                   : 7;  /**< [ 22: 16](R/W) Num voltage steps for lane margining at the receiver. */
        uint32_t reserved_14_15        : 2;
        uint32_t mto                   : 6;  /**< [ 13:  8](R/W) Max timing offset for lane margining at the receiver. */
        uint32_t reserved_6_7          : 2;
        uint32_t nts                   : 6;  /**< [  5:  0](R/W) Num timing steps for lane margining at the receiver (Not supported). */
#else /* Word 0 - Little Endian */
        uint32_t nts                   : 6;  /**< [  5:  0](R/W) Num timing steps for lane margining at the receiver (Not supported). */
        uint32_t reserved_6_7          : 2;
        uint32_t mto                   : 6;  /**< [ 13:  8](R/W) Max timing offset for lane margining at the receiver. */
        uint32_t reserved_14_15        : 2;
        uint32_t nvs                   : 7;  /**< [ 22: 16](R/W) Num voltage steps for lane margining at the receiver. */
        uint32_t reserved_23           : 1;
        uint32_t mvo                   : 6;  /**< [ 29: 24](R/W) Max voltage offset for lane margining at the receiver (Not supported). */
        uint32_t reserved_30_31        : 2;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_gen4_lane_margining_1_s cn; */
};
typedef union cavm_pcieepx_gen4_lane_margining_1 cavm_pcieepx_gen4_lane_margining_1_t;

static inline uint64_t CAVM_PCIEEPX_GEN4_LANE_MARGINING_1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_GEN4_LANE_MARGINING_1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0xb80 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0xb80 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0xb80 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0xb80 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_GEN4_LANE_MARGINING_1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_GEN4_LANE_MARGINING_1(a) cavm_pcieepx_gen4_lane_margining_1_t
#define bustype_CAVM_PCIEEPX_GEN4_LANE_MARGINING_1(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_GEN4_LANE_MARGINING_1(a) "PCIEEPX_GEN4_LANE_MARGINING_1"
#define busnum_CAVM_PCIEEPX_GEN4_LANE_MARGINING_1(a) (a)
#define arguments_CAVM_PCIEEPX_GEN4_LANE_MARGINING_1(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_gen4_lane_margining_2
 *
 * PCIe RC Gen4 Lane Margining Register 2
 */
union cavm_pcieepx_gen4_lane_margining_2
{
    uint32_t u;
    struct cavm_pcieepx_gen4_lane_margining_2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_29_31        : 3;
        uint32_t ies                   : 1;  /**< [ 28: 28](R/W) Ind error sampler for lane margining at the receiver (Not supported). */
        uint32_t srm                   : 1;  /**< [ 27: 27](R/W) Sample reporting method for lane margining at the receiver (Not supported). */
        uint32_t ilrt                  : 1;  /**< [ 26: 26](R/W) Ind left right timing for lane margining at the receiver (Not supported). */
        uint32_t iudv                  : 1;  /**< [ 25: 25](R/W) Ind up down voltage for lane margining at the receiver (Not supported). */
        uint32_t volt_sup              : 1;  /**< [ 24: 24](R/W) Voltage supported for lane margining at the receiver (Not supported). */
        uint32_t reserved_21_23        : 3;
        uint32_t max_lanes             : 5;  /**< [ 20: 16](R/W) Max lanes for lane margining at the receiver. */
        uint32_t reserved_14_15        : 2;
        uint32_t srt                   : 6;  /**< [ 13:  8](R/W) Sample rate timing for lane margining at the receiver. */
        uint32_t reserved_6_7          : 2;
        uint32_t srv                   : 6;  /**< [  5:  0](R/W) Sample rate voltage for lane margining at the receiver. */
#else /* Word 0 - Little Endian */
        uint32_t srv                   : 6;  /**< [  5:  0](R/W) Sample rate voltage for lane margining at the receiver. */
        uint32_t reserved_6_7          : 2;
        uint32_t srt                   : 6;  /**< [ 13:  8](R/W) Sample rate timing for lane margining at the receiver. */
        uint32_t reserved_14_15        : 2;
        uint32_t max_lanes             : 5;  /**< [ 20: 16](R/W) Max lanes for lane margining at the receiver. */
        uint32_t reserved_21_23        : 3;
        uint32_t volt_sup              : 1;  /**< [ 24: 24](R/W) Voltage supported for lane margining at the receiver (Not supported). */
        uint32_t iudv                  : 1;  /**< [ 25: 25](R/W) Ind up down voltage for lane margining at the receiver (Not supported). */
        uint32_t ilrt                  : 1;  /**< [ 26: 26](R/W) Ind left right timing for lane margining at the receiver (Not supported). */
        uint32_t srm                   : 1;  /**< [ 27: 27](R/W) Sample reporting method for lane margining at the receiver (Not supported). */
        uint32_t ies                   : 1;  /**< [ 28: 28](R/W) Ind error sampler for lane margining at the receiver (Not supported). */
        uint32_t reserved_29_31        : 3;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_gen4_lane_margining_2_s cn; */
};
typedef union cavm_pcieepx_gen4_lane_margining_2 cavm_pcieepx_gen4_lane_margining_2_t;

static inline uint64_t CAVM_PCIEEPX_GEN4_LANE_MARGINING_2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_GEN4_LANE_MARGINING_2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0xb84 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0xb84 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0xb84 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0xb84 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_GEN4_LANE_MARGINING_2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_GEN4_LANE_MARGINING_2(a) cavm_pcieepx_gen4_lane_margining_2_t
#define bustype_CAVM_PCIEEPX_GEN4_LANE_MARGINING_2(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_GEN4_LANE_MARGINING_2(a) "PCIEEPX_GEN4_LANE_MARGINING_2"
#define busnum_CAVM_PCIEEPX_GEN4_LANE_MARGINING_2(a) (a)
#define arguments_CAVM_PCIEEPX_GEN4_LANE_MARGINING_2(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_hdr_log1
 *
 * PCIe EP PF Header Log Register 1
 * The header log registers collect the header for the TLP corresponding to a detected error.
 */
union cavm_pcieepx_hdr_log1
{
    uint32_t u;
    struct cavm_pcieepx_hdr_log1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t dword1                : 32; /**< [ 31:  0](RO/H) Header log register (first DWORD). */
#else /* Word 0 - Little Endian */
        uint32_t dword1                : 32; /**< [ 31:  0](RO/H) Header log register (first DWORD). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_hdr_log1_s cn; */
};
typedef union cavm_pcieepx_hdr_log1 cavm_pcieepx_hdr_log1_t;

static inline uint64_t CAVM_PCIEEPX_HDR_LOG1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_HDR_LOG1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x11c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x11c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x11c + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x11c + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_HDR_LOG1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_HDR_LOG1(a) cavm_pcieepx_hdr_log1_t
#define bustype_CAVM_PCIEEPX_HDR_LOG1(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_HDR_LOG1(a) "PCIEEPX_HDR_LOG1"
#define busnum_CAVM_PCIEEPX_HDR_LOG1(a) (a)
#define arguments_CAVM_PCIEEPX_HDR_LOG1(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_hdr_log2
 *
 * PCIe EP PF Header Log Register 2
 * The header log registers collect the header for the TLP corresponding to a detected error.
 */
union cavm_pcieepx_hdr_log2
{
    uint32_t u;
    struct cavm_pcieepx_hdr_log2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t dword2                : 32; /**< [ 31:  0](RO/H) Header log register (second DWORD). */
#else /* Word 0 - Little Endian */
        uint32_t dword2                : 32; /**< [ 31:  0](RO/H) Header log register (second DWORD). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_hdr_log2_s cn; */
};
typedef union cavm_pcieepx_hdr_log2 cavm_pcieepx_hdr_log2_t;

static inline uint64_t CAVM_PCIEEPX_HDR_LOG2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_HDR_LOG2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x120 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x120 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x120 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x120 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_HDR_LOG2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_HDR_LOG2(a) cavm_pcieepx_hdr_log2_t
#define bustype_CAVM_PCIEEPX_HDR_LOG2(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_HDR_LOG2(a) "PCIEEPX_HDR_LOG2"
#define busnum_CAVM_PCIEEPX_HDR_LOG2(a) (a)
#define arguments_CAVM_PCIEEPX_HDR_LOG2(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_hdr_log3
 *
 * PCIe EP PF Header Log Register 3
 * The header log registers collect the header for the TLP corresponding to a detected error.
 */
union cavm_pcieepx_hdr_log3
{
    uint32_t u;
    struct cavm_pcieepx_hdr_log3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t dword3                : 32; /**< [ 31:  0](RO/H) Header log register (third DWORD). */
#else /* Word 0 - Little Endian */
        uint32_t dword3                : 32; /**< [ 31:  0](RO/H) Header log register (third DWORD). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_hdr_log3_s cn; */
};
typedef union cavm_pcieepx_hdr_log3 cavm_pcieepx_hdr_log3_t;

static inline uint64_t CAVM_PCIEEPX_HDR_LOG3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_HDR_LOG3(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x124 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x124 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x124 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x124 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_HDR_LOG3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_HDR_LOG3(a) cavm_pcieepx_hdr_log3_t
#define bustype_CAVM_PCIEEPX_HDR_LOG3(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_HDR_LOG3(a) "PCIEEPX_HDR_LOG3"
#define busnum_CAVM_PCIEEPX_HDR_LOG3(a) (a)
#define arguments_CAVM_PCIEEPX_HDR_LOG3(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_hdr_log4
 *
 * PCIe EP PF Header Log Register 4
 * The header log registers collect the header for the TLP corresponding to a detected error.
 */
union cavm_pcieepx_hdr_log4
{
    uint32_t u;
    struct cavm_pcieepx_hdr_log4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t dword4                : 32; /**< [ 31:  0](RO/H) Header log register (fourth DWORD). */
#else /* Word 0 - Little Endian */
        uint32_t dword4                : 32; /**< [ 31:  0](RO/H) Header log register (fourth DWORD). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_hdr_log4_s cn; */
};
typedef union cavm_pcieepx_hdr_log4 cavm_pcieepx_hdr_log4_t;

static inline uint64_t CAVM_PCIEEPX_HDR_LOG4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_HDR_LOG4(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x128 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x128 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x128 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x128 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_HDR_LOG4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_HDR_LOG4(a) cavm_pcieepx_hdr_log4_t
#define bustype_CAVM_PCIEEPX_HDR_LOG4(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_HDR_LOG4(a) "PCIEEPX_HDR_LOG4"
#define busnum_CAVM_PCIEEPX_HDR_LOG4(a) (a)
#define arguments_CAVM_PCIEEPX_HDR_LOG4(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_hide_pf
 *
 * PCIe EP Hide PF Register
 */
union cavm_pcieepx_hide_pf
{
    uint32_t u;
    struct cavm_pcieepx_hide_pf_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t hide_pf15_pf2         : 28; /**< [ 31:  4](R/W) PF15 to PF2 hide control.  Not supported. */
        uint32_t hide_pf1              : 2;  /**< [  3:  2](R/W) PF1 hide control. Similar to [PF0]. */
        uint32_t hide_pf0              : 2;  /**< [  1:  0](R/W) PF0 hide control.

                                                                 0x0 = PF is visible.
                                                                 0x1 = Reserved.
                                                                 0x2 = PF is hidden. All config accesses to this function will receive UR.

                                                                 0x3 = PF is partially hidden. Config write accesses to this function will
                                                                 receive UR. Config read accesses to this function will receive SC, with a
                                                                 data payload of 0xFFFFFFFF.

                                                                 When the MSB of a PF's HIDE_PFn is non-zero, the PF is considered hidden, and
                                                                 the power management state for the PF is kept in the uninitialized state.

                                                                 RSL side writes to hidden PFs are also blocked.  Care must be taken to write [HIDE_PF*]
                                                                 only after the PCIEEP_SRIOV_VFS and PCIEEP_SRIOV_FO registers have been written
                                                                 to all the PFs.  Otherwise the PCIEEP_SRIOV_VFS[IVF] and PCIEEP_SRIOV_FO[FO] will
                                                                 retain their reset values and cause unexpected behavior. */
#else /* Word 0 - Little Endian */
        uint32_t hide_pf0              : 2;  /**< [  1:  0](R/W) PF0 hide control.

                                                                 0x0 = PF is visible.
                                                                 0x1 = Reserved.
                                                                 0x2 = PF is hidden. All config accesses to this function will receive UR.

                                                                 0x3 = PF is partially hidden. Config write accesses to this function will
                                                                 receive UR. Config read accesses to this function will receive SC, with a
                                                                 data payload of 0xFFFFFFFF.

                                                                 When the MSB of a PF's HIDE_PFn is non-zero, the PF is considered hidden, and
                                                                 the power management state for the PF is kept in the uninitialized state.

                                                                 RSL side writes to hidden PFs are also blocked.  Care must be taken to write [HIDE_PF*]
                                                                 only after the PCIEEP_SRIOV_VFS and PCIEEP_SRIOV_FO registers have been written
                                                                 to all the PFs.  Otherwise the PCIEEP_SRIOV_VFS[IVF] and PCIEEP_SRIOV_FO[FO] will
                                                                 retain their reset values and cause unexpected behavior. */
        uint32_t hide_pf1              : 2;  /**< [  3:  2](R/W) PF1 hide control. Similar to [PF0]. */
        uint32_t hide_pf15_pf2         : 28; /**< [ 31:  4](R/W) PF15 to PF2 hide control.  Not supported. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_hide_pf_s cn; */
};
typedef union cavm_pcieepx_hide_pf cavm_pcieepx_hide_pf_t;

static inline uint64_t CAVM_PCIEEPX_HIDE_PF(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_HIDE_PF(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8a0 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x8a0 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8a0 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8a0 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_HIDE_PF", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_HIDE_PF(a) cavm_pcieepx_hide_pf_t
#define bustype_CAVM_PCIEEPX_HIDE_PF(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_HIDE_PF(a) "PCIEEPX_HIDE_PF"
#define busnum_CAVM_PCIEEPX_HIDE_PF(a) (a)
#define arguments_CAVM_PCIEEPX_HIDE_PF(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_id
 *
 * PCIe EP PF Vendor and Device Register
 */
union cavm_pcieepx_id
{
    uint32_t u;
    struct cavm_pcieepx_id_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t devid                 : 16; /**< [ 31: 16](RO/WRSL) Device ID for PCIERP, writable through PEM()_CFG_TBL().
                                                                  Firmware must configure this field prior to starting the link.
                                                                  _ \<15:8\> is typically set to the appropriate chip number, from the
                                                                 FUSE_NUM_E::CHIP_TYPE() fuses, and as enumerated by PCC_PROD_E::CNXXXX.
                                                                  _ \<7:0\> is typically set to PCC_DEV_IDL_E::PCIERC. */
        uint32_t vendid                : 16; /**< [ 15:  0](RO/WRSL) Marvell's vendor ID, writable through PEM()_CFG_TBL().
                                                                 During an EPROM Load, if a value of 0xFFFF is loaded to this field and
                                                                 a value of 0xFFFF is loaded to the [DEVID] field of this register, the value will not be
                                                                 loaded, EEPROM load will stop, and the FastLinkEnable bit will be set in the
                                                                 PCIEEP_PORT_CTL register. */
#else /* Word 0 - Little Endian */
        uint32_t vendid                : 16; /**< [ 15:  0](RO/WRSL) Marvell's vendor ID, writable through PEM()_CFG_TBL().
                                                                 During an EPROM Load, if a value of 0xFFFF is loaded to this field and
                                                                 a value of 0xFFFF is loaded to the [DEVID] field of this register, the value will not be
                                                                 loaded, EEPROM load will stop, and the FastLinkEnable bit will be set in the
                                                                 PCIEEP_PORT_CTL register. */
        uint32_t devid                 : 16; /**< [ 31: 16](RO/WRSL) Device ID for PCIERP, writable through PEM()_CFG_TBL().
                                                                  Firmware must configure this field prior to starting the link.
                                                                  _ \<15:8\> is typically set to the appropriate chip number, from the
                                                                 FUSE_NUM_E::CHIP_TYPE() fuses, and as enumerated by PCC_PROD_E::CNXXXX.
                                                                  _ \<7:0\> is typically set to PCC_DEV_IDL_E::PCIERC. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_id_s cn; */
};
typedef union cavm_pcieepx_id cavm_pcieepx_id_t;

static inline uint64_t CAVM_PCIEEPX_ID(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_ID(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_ID", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_ID(a) cavm_pcieepx_id_t
#define bustype_CAVM_PCIEEPX_ID(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_ID(a) "PCIEEPX_ID"
#define busnum_CAVM_PCIEEPX_ID(a) (a)
#define arguments_CAVM_PCIEEPX_ID(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_int
 *
 * PCIe EP PF Interrupt Line/Interrupt Pin/Bridge Control Register
 */
union cavm_pcieepx_int
{
    uint32_t u;
    struct cavm_pcieepx_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t ml                    : 8;  /**< [ 31: 24](RO) Maximum latency (hardwired to 0x0). */
        uint32_t mg                    : 8;  /**< [ 23: 16](RO) Minimum grant (hardwired to 0x0). */
        uint32_t inta                  : 8;  /**< [ 15:  8](RO/WRSL) Interrupt pin. Identifies the legacy interrupt message that the device (or device
                                                                 function) uses. The interrupt pin register is writable through PEM()_CFG_TBL(). */
        uint32_t il                    : 8;  /**< [  7:  0](R/W) Interrupt line. */
#else /* Word 0 - Little Endian */
        uint32_t il                    : 8;  /**< [  7:  0](R/W) Interrupt line. */
        uint32_t inta                  : 8;  /**< [ 15:  8](RO/WRSL) Interrupt pin. Identifies the legacy interrupt message that the device (or device
                                                                 function) uses. The interrupt pin register is writable through PEM()_CFG_TBL(). */
        uint32_t mg                    : 8;  /**< [ 23: 16](RO) Minimum grant (hardwired to 0x0). */
        uint32_t ml                    : 8;  /**< [ 31: 24](RO) Maximum latency (hardwired to 0x0). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_int_s cn; */
};
typedef union cavm_pcieepx_int cavm_pcieepx_int_t;

static inline uint64_t CAVM_PCIEEPX_INT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_INT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x3c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x3c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x3c + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x3c + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_INT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_INT(a) cavm_pcieepx_int_t
#define bustype_CAVM_PCIEEPX_INT(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_INT(a) "PCIEEPX_INT"
#define busnum_CAVM_PCIEEPX_INT(a) (a)
#define arguments_CAVM_PCIEEPX_INT(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_l1_substates
 *
 * PCIe EP PF L1 Substates Timing Register
 */
union cavm_pcieepx_l1_substates
{
    uint32_t u;
    struct cavm_pcieepx_l1_substates_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_9_31         : 23;
        uint32_t l1sub_lpwr_clksm      : 1;  /**< [  8:  8](R/W) Low power clock switch mode.
                                                                 If this bit is set to one the reference clock will be running
                                                                 regardless of the PCI_CLKREQ_L setting. If this bit is set to 1'b0
                                                                 the reference clock may be gated off when PCI_CLKREQ_L is deasserted.
                                                                 If the bit is set to one the controller will delay the
                                                                 switching of aux_clk to the slow platform clock until it detects
                                                                 that the link partner has de-asserted PCI_CLKREQ_L. */
        uint32_t l1sub_t_pclkack       : 2;  /**< [  7:  6](R/W) Max delay (in 1 us units) between a MAC request to remove
                                                                 the clock on mac_phy_pclkreq_n and a PHY response on
                                                                 phy_mac_pclkack_n. If the PHY does not respond within this
                                                                 time the request is aborted. */
        uint32_t l1sub_t_l1_2          : 4;  /**< [  5:  2](R/W) Duration (in us) of L1.2. */
        uint32_t l1sub_t_power_off     : 2;  /**< [  1:  0](R/W) Duration (in us) of L1.2 entry. */
#else /* Word 0 - Little Endian */
        uint32_t l1sub_t_power_off     : 2;  /**< [  1:  0](R/W) Duration (in us) of L1.2 entry. */
        uint32_t l1sub_t_l1_2          : 4;  /**< [  5:  2](R/W) Duration (in us) of L1.2. */
        uint32_t l1sub_t_pclkack       : 2;  /**< [  7:  6](R/W) Max delay (in 1 us units) between a MAC request to remove
                                                                 the clock on mac_phy_pclkreq_n and a PHY response on
                                                                 phy_mac_pclkack_n. If the PHY does not respond within this
                                                                 time the request is aborted. */
        uint32_t l1sub_lpwr_clksm      : 1;  /**< [  8:  8](R/W) Low power clock switch mode.
                                                                 If this bit is set to one the reference clock will be running
                                                                 regardless of the PCI_CLKREQ_L setting. If this bit is set to 1'b0
                                                                 the reference clock may be gated off when PCI_CLKREQ_L is deasserted.
                                                                 If the bit is set to one the controller will delay the
                                                                 switching of aux_clk to the slow platform clock until it detects
                                                                 that the link partner has de-asserted PCI_CLKREQ_L. */
        uint32_t reserved_9_31         : 23;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_l1_substates_s cn; */
};
typedef union cavm_pcieepx_l1_substates cavm_pcieepx_l1_substates_t;

static inline uint64_t CAVM_PCIEEPX_L1_SUBSTATES(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_L1_SUBSTATES(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0xb44 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0xb44 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0xb44 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0xb44 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_L1_SUBSTATES", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_L1_SUBSTATES(a) cavm_pcieepx_l1_substates_t
#define bustype_CAVM_PCIEEPX_L1_SUBSTATES(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_L1_SUBSTATES(a) "PCIEEPX_L1_SUBSTATES"
#define busnum_CAVM_PCIEEPX_L1_SUBSTATES(a) (a)
#define arguments_CAVM_PCIEEPX_L1_SUBSTATES(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_l1sub_cap
 *
 * PCIe EP PF L1 Substates Capability Register
 * L1 Substates Capability exists for PF0 only.
 */
union cavm_pcieepx_l1sub_cap
{
    uint32_t u;
    struct cavm_pcieepx_l1sub_cap_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_24_31        : 8;
        uint32_t pwron_val             : 5;  /**< [ 23: 19](RO/WRSL) Port T power on value.
                                                                 Along with [PWRON_SCALE] sets the time (in us) that this
                                                                 Port requires the port on the opposite side of the Link to
                                                                 wait in L.1.2.Exit after sampling PCI_CLKREQ_L asserted before
                                                                 actively driving the interface. */
        uint32_t reserved_18           : 1;
        uint32_t pwron_scale           : 2;  /**< [ 17: 16](RO/WRSL) Port T power on scale.
                                                                 0x0 = 2 us.
                                                                 0x1 = 10 us.
                                                                 0x2 = 100 us.
                                                                 0x3 = Reserved. */
        uint32_t com_md_supp           : 8;  /**< [ 15:  8](RO/WRSL) Port common mode restore time.
                                                                 Time (in us) required for this Port to reestablish
                                                                 common mode. */
        uint32_t reserved_5_7          : 3;
        uint32_t l1_pmsub_sup          : 1;  /**< [  4:  4](RO/WRSL) L1 PM substates ECN supported. */
        uint32_t l1_1_aspm_sup         : 1;  /**< [  3:  3](RO/WRSL) ASPM L11 supported. */
        uint32_t l1_2_aspm_sup         : 1;  /**< [  2:  2](RO/WRSL) ASPM L12 supported. */
        uint32_t l1_1_pcipm_sup        : 1;  /**< [  1:  1](RO/WRSL) PCI-PM L11 supported. */
        uint32_t l1_2_pcipm_sup        : 1;  /**< [  0:  0](RO/WRSL) PCI-PM L12 supported. */
#else /* Word 0 - Little Endian */
        uint32_t l1_2_pcipm_sup        : 1;  /**< [  0:  0](RO/WRSL) PCI-PM L12 supported. */
        uint32_t l1_1_pcipm_sup        : 1;  /**< [  1:  1](RO/WRSL) PCI-PM L11 supported. */
        uint32_t l1_2_aspm_sup         : 1;  /**< [  2:  2](RO/WRSL) ASPM L12 supported. */
        uint32_t l1_1_aspm_sup         : 1;  /**< [  3:  3](RO/WRSL) ASPM L11 supported. */
        uint32_t l1_pmsub_sup          : 1;  /**< [  4:  4](RO/WRSL) L1 PM substates ECN supported. */
        uint32_t reserved_5_7          : 3;
        uint32_t com_md_supp           : 8;  /**< [ 15:  8](RO/WRSL) Port common mode restore time.
                                                                 Time (in us) required for this Port to reestablish
                                                                 common mode. */
        uint32_t pwron_scale           : 2;  /**< [ 17: 16](RO/WRSL) Port T power on scale.
                                                                 0x0 = 2 us.
                                                                 0x1 = 10 us.
                                                                 0x2 = 100 us.
                                                                 0x3 = Reserved. */
        uint32_t reserved_18           : 1;
        uint32_t pwron_val             : 5;  /**< [ 23: 19](RO/WRSL) Port T power on value.
                                                                 Along with [PWRON_SCALE] sets the time (in us) that this
                                                                 Port requires the port on the opposite side of the Link to
                                                                 wait in L.1.2.Exit after sampling PCI_CLKREQ_L asserted before
                                                                 actively driving the interface. */
        uint32_t reserved_24_31        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_l1sub_cap_s cn; */
};
typedef union cavm_pcieepx_l1sub_cap cavm_pcieepx_l1sub_cap_t;

static inline uint64_t CAVM_PCIEEPX_L1SUB_CAP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_L1SUB_CAP(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x240 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x240 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x240 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x240 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_L1SUB_CAP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_L1SUB_CAP(a) cavm_pcieepx_l1sub_cap_t
#define bustype_CAVM_PCIEEPX_L1SUB_CAP(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_L1SUB_CAP(a) "PCIEEPX_L1SUB_CAP"
#define busnum_CAVM_PCIEEPX_L1SUB_CAP(a) (a)
#define arguments_CAVM_PCIEEPX_L1SUB_CAP(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_l1sub_cap_hdr
 *
 * PCIe EP PF L1 Substates Extended Capability Header Register
 * L1 Substates Extended Capability Header exists for PF0 only.
 */
union cavm_pcieepx_l1sub_cap_hdr
{
    uint32_t u;
    struct cavm_pcieepx_l1sub_cap_hdr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t nco                   : 12; /**< [ 31: 20](RO/WRSL) Next capability offset.
                                                                 Writable through PEM()_CFG_TBL(). */
        uint32_t cv                    : 4;  /**< [ 19: 16](RO/WRSL) Capability version.
                                                                 Writable through PEM()_CFG_TBL(). */
        uint32_t pcieec                : 16; /**< [ 15:  0](RO/WRSL) PCI Express extended capability.
                                                                 Writable through PEM()_CFG_TBL(). */
#else /* Word 0 - Little Endian */
        uint32_t pcieec                : 16; /**< [ 15:  0](RO/WRSL) PCI Express extended capability.
                                                                 Writable through PEM()_CFG_TBL(). */
        uint32_t cv                    : 4;  /**< [ 19: 16](RO/WRSL) Capability version.
                                                                 Writable through PEM()_CFG_TBL(). */
        uint32_t nco                   : 12; /**< [ 31: 20](RO/WRSL) Next capability offset.
                                                                 Writable through PEM()_CFG_TBL(). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_l1sub_cap_hdr_s cn; */
};
typedef union cavm_pcieepx_l1sub_cap_hdr cavm_pcieepx_l1sub_cap_hdr_t;

static inline uint64_t CAVM_PCIEEPX_L1SUB_CAP_HDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_L1SUB_CAP_HDR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x23c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x23c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x23c + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x23c + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_L1SUB_CAP_HDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_L1SUB_CAP_HDR(a) cavm_pcieepx_l1sub_cap_hdr_t
#define bustype_CAVM_PCIEEPX_L1SUB_CAP_HDR(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_L1SUB_CAP_HDR(a) "PCIEEPX_L1SUB_CAP_HDR"
#define busnum_CAVM_PCIEEPX_L1SUB_CAP_HDR(a) (a)
#define arguments_CAVM_PCIEEPX_L1SUB_CAP_HDR(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_l1sub_ctl1
 *
 * PCIe EP L1 Substates Control 1 Register
 * L1 Substates Control 1 exists for PF0 only.
 */
union cavm_pcieepx_l1sub_ctl1
{
    uint32_t u;
    struct cavm_pcieepx_l1sub_ctl1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t l1_2_th_sca           : 3;  /**< [ 31: 29](R/W) LTR L12 threshold scale. */
        uint32_t reserved_26_28        : 3;
        uint32_t l1_2_th_val           : 10; /**< [ 25: 16](R/W) LTR L12 threshold value. */
        uint32_t t_com_mode            : 8;  /**< [ 15:  8](RO) Common mode restore time.  Reserved for upstream port. */
        uint32_t reserved_4_7          : 4;
        uint32_t l1_1_aspm_en          : 1;  /**< [  3:  3](R/W) ASPM L11 enable. */
        uint32_t l1_2_aspm_en          : 1;  /**< [  2:  2](R/W) ASPM L12 enable. */
        uint32_t l1_1_pcipm_en         : 1;  /**< [  1:  1](R/W) PCI-PM L11 enable. */
        uint32_t l1_2_pcipm_en         : 1;  /**< [  0:  0](R/W) PCI-PM L12 enable. */
#else /* Word 0 - Little Endian */
        uint32_t l1_2_pcipm_en         : 1;  /**< [  0:  0](R/W) PCI-PM L12 enable. */
        uint32_t l1_1_pcipm_en         : 1;  /**< [  1:  1](R/W) PCI-PM L11 enable. */
        uint32_t l1_2_aspm_en          : 1;  /**< [  2:  2](R/W) ASPM L12 enable. */
        uint32_t l1_1_aspm_en          : 1;  /**< [  3:  3](R/W) ASPM L11 enable. */
        uint32_t reserved_4_7          : 4;
        uint32_t t_com_mode            : 8;  /**< [ 15:  8](RO) Common mode restore time.  Reserved for upstream port. */
        uint32_t l1_2_th_val           : 10; /**< [ 25: 16](R/W) LTR L12 threshold value. */
        uint32_t reserved_26_28        : 3;
        uint32_t l1_2_th_sca           : 3;  /**< [ 31: 29](R/W) LTR L12 threshold scale. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_l1sub_ctl1_s cn; */
};
typedef union cavm_pcieepx_l1sub_ctl1 cavm_pcieepx_l1sub_ctl1_t;

static inline uint64_t CAVM_PCIEEPX_L1SUB_CTL1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_L1SUB_CTL1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x244 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x244 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x244 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x244 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_L1SUB_CTL1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_L1SUB_CTL1(a) cavm_pcieepx_l1sub_ctl1_t
#define bustype_CAVM_PCIEEPX_L1SUB_CTL1(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_L1SUB_CTL1(a) "PCIEEPX_L1SUB_CTL1"
#define busnum_CAVM_PCIEEPX_L1SUB_CTL1(a) (a)
#define arguments_CAVM_PCIEEPX_L1SUB_CTL1(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_l1sub_ctl2
 *
 * PCIe EP L1 Substates Control 2 Register
 * L1 Substates Control 2 exists for PF0 only.
 */
union cavm_pcieepx_l1sub_ctl2
{
    uint32_t u;
    struct cavm_pcieepx_l1sub_ctl2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t t_pwr_on_val          : 5;  /**< [  7:  3](R/W) T power on value.
                                                                 Along with the [T_PWR_ON_SCA], sets the minimum amount of time (in us)
                                                                 that the Port must wait in L.1.2.Exit after sampling PCI_CLKREQ_L asserted
                                                                 before actively driving the interface.

                                                                 If PCIEEP_L1SUB_CTL1[L1_2_PCIPM_SUP] is turned off, this field is zeroed
                                                                 and cannot be written. */
        uint32_t reserved_2            : 1;
        uint32_t t_pwr_on_sca          : 2;  /**< [  1:  0](R/W) T power on scale.
                                                                 0x0 = 2 us.
                                                                 0x1 = 10 us.
                                                                 0x2 = 100 us.
                                                                 0x3 = Reserved.

                                                                 If PCIEEP_L1SUB_CTL1[L1_2_PCIPM_SUP] is turned off, this field is zeroed
                                                                 and cannot be written. */
#else /* Word 0 - Little Endian */
        uint32_t t_pwr_on_sca          : 2;  /**< [  1:  0](R/W) T power on scale.
                                                                 0x0 = 2 us.
                                                                 0x1 = 10 us.
                                                                 0x2 = 100 us.
                                                                 0x3 = Reserved.

                                                                 If PCIEEP_L1SUB_CTL1[L1_2_PCIPM_SUP] is turned off, this field is zeroed
                                                                 and cannot be written. */
        uint32_t reserved_2            : 1;
        uint32_t t_pwr_on_val          : 5;  /**< [  7:  3](R/W) T power on value.
                                                                 Along with the [T_PWR_ON_SCA], sets the minimum amount of time (in us)
                                                                 that the Port must wait in L.1.2.Exit after sampling PCI_CLKREQ_L asserted
                                                                 before actively driving the interface.

                                                                 If PCIEEP_L1SUB_CTL1[L1_2_PCIPM_SUP] is turned off, this field is zeroed
                                                                 and cannot be written. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_l1sub_ctl2_s cn; */
};
typedef union cavm_pcieepx_l1sub_ctl2 cavm_pcieepx_l1sub_ctl2_t;

static inline uint64_t CAVM_PCIEEPX_L1SUB_CTL2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_L1SUB_CTL2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x248 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x248 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x248 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x248 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_L1SUB_CTL2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_L1SUB_CTL2(a) cavm_pcieepx_l1sub_ctl2_t
#define bustype_CAVM_PCIEEPX_L1SUB_CTL2(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_L1SUB_CTL2(a) "PCIEEPX_L1SUB_CTL2"
#define busnum_CAVM_PCIEEPX_L1SUB_CTL2(a) (a)
#define arguments_CAVM_PCIEEPX_L1SUB_CTL2(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_lane_err
 *
 * PCIe EP PF Lane Error Status Register
 * Lane Error Status exists for PF0 only.
 */
union cavm_pcieepx_lane_err
{
    uint32_t u;
    struct cavm_pcieepx_lane_err_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_4_31         : 28;
        uint32_t les                   : 4;  /**< [  3:  0](R/W1C) Lane error status bits. */
#else /* Word 0 - Little Endian */
        uint32_t les                   : 4;  /**< [  3:  0](R/W1C) Lane error status bits. */
        uint32_t reserved_4_31         : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_lane_err_s cn; */
};
typedef union cavm_pcieepx_lane_err cavm_pcieepx_lane_err_t;

static inline uint64_t CAVM_PCIEEPX_LANE_ERR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_LANE_ERR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x170 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x170 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x170 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x170 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_LANE_ERR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_LANE_ERR(a) cavm_pcieepx_lane_err_t
#define bustype_CAVM_PCIEEPX_LANE_ERR(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_LANE_ERR(a) "PCIEEPX_LANE_ERR"
#define busnum_CAVM_PCIEEPX_LANE_ERR(a) (a)
#define arguments_CAVM_PCIEEPX_LANE_ERR(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_lane_skew
 *
 * PCIe EP PF Lane Skew Register
 */
union cavm_pcieepx_lane_skew
{
    uint32_t u;
    struct cavm_pcieepx_lane_skew_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t dlld                  : 1;  /**< [ 31: 31](R/W) Disable lane-to-lane deskew. Disables the internal lane-to-lane deskew logic. */
        uint32_t inuml                 : 4;  /**< [ 30: 27](R/W) Implementation-specific number of lanes.
                                                                   0x0 = 1 lane.
                                                                   0x1 = 2 lanes.
                                                                   0x3 = 4 lanes.
                                                                   0x7 = 8 lanes.
                                                                   0xF = 16 lanes.
                                                                 The number of lanes to be used when in Loopback Master. The number of lanes
                                                                 programmed must be equal to or less than the valid number of lanes set in
                                                                 PCIEEP_PORT_CTL[LME]. You must configure this field before initiating Loopback by
                                                                 writing PCIEEP_PORT_CTL[LE]. The controller will transition from Loopback.Entry
                                                                 to Loopback.Active after receiving two consecutive TS1 Ordered Sets with the
                                                                 Loopback bit asserted on the implementation specific number of lanes configured in this field. */
        uint32_t ebm                   : 1;  /**< [ 26: 26](R/W) Selects Gen3/Gen4 elasticity buffer operating mode.
                                                                 0 = Nominal half full buffer mode.
                                                                 1 = Nominal empty buffer mode */
        uint32_t ack_nak               : 1;  /**< [ 25: 25](R/W) ACK/NAK disable. Prevents the PCI Express bus from sending Ack and Nak DLLPs. */
        uint32_t fcd                   : 1;  /**< [ 24: 24](R/W) Flow control disable. Prevents the PCI Express bus from sending FC DLLPs. */
        uint32_t ilst                  : 24; /**< [ 23:  0](R/W) Insert lane skew for transmit (not supported for *16). Causes skew between lanes for test
                                                                 purposes. There are three bits per lane. The value is in units of one symbol time. For
                                                                 example, the value 0x2 for a lane forces a skew of two symbol times for that lane. The
                                                                 maximum skew value for any lane is five symbol times. */
#else /* Word 0 - Little Endian */
        uint32_t ilst                  : 24; /**< [ 23:  0](R/W) Insert lane skew for transmit (not supported for *16). Causes skew between lanes for test
                                                                 purposes. There are three bits per lane. The value is in units of one symbol time. For
                                                                 example, the value 0x2 for a lane forces a skew of two symbol times for that lane. The
                                                                 maximum skew value for any lane is five symbol times. */
        uint32_t fcd                   : 1;  /**< [ 24: 24](R/W) Flow control disable. Prevents the PCI Express bus from sending FC DLLPs. */
        uint32_t ack_nak               : 1;  /**< [ 25: 25](R/W) ACK/NAK disable. Prevents the PCI Express bus from sending Ack and Nak DLLPs. */
        uint32_t ebm                   : 1;  /**< [ 26: 26](R/W) Selects Gen3/Gen4 elasticity buffer operating mode.
                                                                 0 = Nominal half full buffer mode.
                                                                 1 = Nominal empty buffer mode */
        uint32_t inuml                 : 4;  /**< [ 30: 27](R/W) Implementation-specific number of lanes.
                                                                   0x0 = 1 lane.
                                                                   0x1 = 2 lanes.
                                                                   0x3 = 4 lanes.
                                                                   0x7 = 8 lanes.
                                                                   0xF = 16 lanes.
                                                                 The number of lanes to be used when in Loopback Master. The number of lanes
                                                                 programmed must be equal to or less than the valid number of lanes set in
                                                                 PCIEEP_PORT_CTL[LME]. You must configure this field before initiating Loopback by
                                                                 writing PCIEEP_PORT_CTL[LE]. The controller will transition from Loopback.Entry
                                                                 to Loopback.Active after receiving two consecutive TS1 Ordered Sets with the
                                                                 Loopback bit asserted on the implementation specific number of lanes configured in this field. */
        uint32_t dlld                  : 1;  /**< [ 31: 31](R/W) Disable lane-to-lane deskew. Disables the internal lane-to-lane deskew logic. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_lane_skew_s cn; */
};
typedef union cavm_pcieepx_lane_skew cavm_pcieepx_lane_skew_t;

static inline uint64_t CAVM_PCIEEPX_LANE_SKEW(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_LANE_SKEW(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x714 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x714 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x714 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x714 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_LANE_SKEW", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_LANE_SKEW(a) cavm_pcieepx_lane_skew_t
#define bustype_CAVM_PCIEEPX_LANE_SKEW(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_LANE_SKEW(a) "PCIEEPX_LANE_SKEW"
#define busnum_CAVM_PCIEEPX_LANE_SKEW(a) (a)
#define arguments_CAVM_PCIEEPX_LANE_SKEW(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_link_cap
 *
 * PCIe EP PF Link Capabilities Register
 */
union cavm_pcieepx_link_cap
{
    uint32_t u;
    struct cavm_pcieepx_link_cap_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t pnum                  : 8;  /**< [ 31: 24](RO/WRSL) Port number, writable through PEM()_CFG_TBL(). */
        uint32_t reserved_23           : 1;
        uint32_t aspm                  : 1;  /**< [ 22: 22](RO/WRSL) ASPM optionality compliance. */
        uint32_t lbnc                  : 1;  /**< [ 21: 21](RO) Link bandwidth notification capability. Set to 0 for endpoint devices. */
        uint32_t dllarc                : 1;  /**< [ 20: 20](RO) Data link layer active reporting capable. */
        uint32_t sderc                 : 1;  /**< [ 19: 19](RO) Surprise down error reporting capable. Set to 0 for endpoint devices. */
        uint32_t cpm                   : 1;  /**< [ 18: 18](RO/WRSL) Clock power management. Indicates that component tolerates the removal of any
                                                                 reference clock(s) via the clock request (PCI_CLKREQ_L) mechanism when the Link
                                                                 is in the L1 and L2/L3 ready link states. */
        uint32_t l1el                  : 3;  /**< [ 17: 15](RO/WRSL) L1 exit latency. The default value is the value that software specifies during hardware
                                                                 configuration, writable through PEM()_CFG_TBL(). */
        uint32_t l0el                  : 3;  /**< [ 14: 12](RO/WRSL) L0s exit latency. The default value is the value that software specifies during hardware
                                                                 configuration, writable through PEM()_CFG_TBL(). */
        uint32_t aslpms                : 2;  /**< [ 11: 10](RO/WRSL) Active state link PM support. Only L1 is supported (L0s not supported).
                                                                 The default value is the value that software specifies during hardware
                                                                 configuration, writable through PEM()_CFG_TBL(). */
        uint32_t mlw                   : 6;  /**< [  9:  4](RO/WRSL/H) Maximum link width.
                                                                 The reset value of this field is determined by the value read from
                                                                 PEM()_CFG[LANES].

                                                                 This field is writable through PEM()_CFG_TBL(). */
        uint32_t mls                   : 4;  /**< [  3:  0](RO/WRSL) Maximum link speed.

                                                                 0x1 = 2.5 GHz supported.
                                                                 0x2 = 5.0 GHz and 2.5 GHz supported.
                                                                 0x3 = 8.0 GHz, 5.0 GHz and 2.5 GHz supported.
                                                                 0x4 = 16.0 GHz, 8.0 Ghz, 5.0 GHz, and 2.5 GHz supported.
                                                                 0x5 = 32.0GHz, 16.0 GHz, 8.0 GHz, 5.0 GHz, and 2.5 GHz supported.

                                                                 This field is writable through PEM()_CFG_TBL(). */
#else /* Word 0 - Little Endian */
        uint32_t mls                   : 4;  /**< [  3:  0](RO/WRSL) Maximum link speed.

                                                                 0x1 = 2.5 GHz supported.
                                                                 0x2 = 5.0 GHz and 2.5 GHz supported.
                                                                 0x3 = 8.0 GHz, 5.0 GHz and 2.5 GHz supported.
                                                                 0x4 = 16.0 GHz, 8.0 Ghz, 5.0 GHz, and 2.5 GHz supported.
                                                                 0x5 = 32.0GHz, 16.0 GHz, 8.0 GHz, 5.0 GHz, and 2.5 GHz supported.

                                                                 This field is writable through PEM()_CFG_TBL(). */
        uint32_t mlw                   : 6;  /**< [  9:  4](RO/WRSL/H) Maximum link width.
                                                                 The reset value of this field is determined by the value read from
                                                                 PEM()_CFG[LANES].

                                                                 This field is writable through PEM()_CFG_TBL(). */
        uint32_t aslpms                : 2;  /**< [ 11: 10](RO/WRSL) Active state link PM support. Only L1 is supported (L0s not supported).
                                                                 The default value is the value that software specifies during hardware
                                                                 configuration, writable through PEM()_CFG_TBL(). */
        uint32_t l0el                  : 3;  /**< [ 14: 12](RO/WRSL) L0s exit latency. The default value is the value that software specifies during hardware
                                                                 configuration, writable through PEM()_CFG_TBL(). */
        uint32_t l1el                  : 3;  /**< [ 17: 15](RO/WRSL) L1 exit latency. The default value is the value that software specifies during hardware
                                                                 configuration, writable through PEM()_CFG_TBL(). */
        uint32_t cpm                   : 1;  /**< [ 18: 18](RO/WRSL) Clock power management. Indicates that component tolerates the removal of any
                                                                 reference clock(s) via the clock request (PCI_CLKREQ_L) mechanism when the Link
                                                                 is in the L1 and L2/L3 ready link states. */
        uint32_t sderc                 : 1;  /**< [ 19: 19](RO) Surprise down error reporting capable. Set to 0 for endpoint devices. */
        uint32_t dllarc                : 1;  /**< [ 20: 20](RO) Data link layer active reporting capable. */
        uint32_t lbnc                  : 1;  /**< [ 21: 21](RO) Link bandwidth notification capability. Set to 0 for endpoint devices. */
        uint32_t aspm                  : 1;  /**< [ 22: 22](RO/WRSL) ASPM optionality compliance. */
        uint32_t reserved_23           : 1;
        uint32_t pnum                  : 8;  /**< [ 31: 24](RO/WRSL) Port number, writable through PEM()_CFG_TBL(). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_link_cap_s cn; */
};
typedef union cavm_pcieepx_link_cap cavm_pcieepx_link_cap_t;

static inline uint64_t CAVM_PCIEEPX_LINK_CAP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_LINK_CAP(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x7c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x7c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x7c + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x7c + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_LINK_CAP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_LINK_CAP(a) cavm_pcieepx_link_cap_t
#define bustype_CAVM_PCIEEPX_LINK_CAP(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_LINK_CAP(a) "PCIEEPX_LINK_CAP"
#define busnum_CAVM_PCIEEPX_LINK_CAP(a) (a)
#define arguments_CAVM_PCIEEPX_LINK_CAP(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_link_cap2
 *
 * PCIe EP PF Link Capabilities 2 Register
 */
union cavm_pcieepx_link_cap2
{
    uint32_t u;
    struct cavm_pcieepx_link_cap2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_25_31        : 7;
        uint32_t trtds                 : 1;  /**< [ 24: 24](RO/WRSL/H) Two retimers presence detect supported.

                                                                 This bit must be set to in a port when the SLSV indicates support
                                                                 for a Link speed of 16.0 GT/s or higher.

                                                                 It is permitted to be set to one regardless of the SLSV if [RTDS]
                                                                 is also set to one. */
        uint32_t rtds                  : 1;  /**< [ 23: 23](RO/WRSL) Retimer presence detect supported. */
        uint32_t reserved_9_22         : 14;
        uint32_t cls                   : 1;  /**< [  8:  8](RO) Crosslink supported. */
        uint32_t slsv                  : 7;  /**< [  7:  1](RO/WRSL) Supported link speeds vector. Indicates the supported link speeds of the associated port.
                                                                 For each bit, a value of 1 b indicates that the corresponding link speed is supported;
                                                                 otherwise, the link speed is not supported. Bit definitions are:

                                                                 _ Bit \<1\> = 2.5 GT/s.
                                                                 _ Bit \<2\> = 5.0 GT/s.
                                                                 _ Bit \<3\> = 8.0 GT/s.
                                                                 _ Bit \<4\> = 16.0 GT/s
                                                                 _ Bit \<5\> = 32.0 GT/s

                                                                 _ Bits \<7:6\> are reserved. */
        uint32_t reserved_0            : 1;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0            : 1;
        uint32_t slsv                  : 7;  /**< [  7:  1](RO/WRSL) Supported link speeds vector. Indicates the supported link speeds of the associated port.
                                                                 For each bit, a value of 1 b indicates that the corresponding link speed is supported;
                                                                 otherwise, the link speed is not supported. Bit definitions are:

                                                                 _ Bit \<1\> = 2.5 GT/s.
                                                                 _ Bit \<2\> = 5.0 GT/s.
                                                                 _ Bit \<3\> = 8.0 GT/s.
                                                                 _ Bit \<4\> = 16.0 GT/s
                                                                 _ Bit \<5\> = 32.0 GT/s

                                                                 _ Bits \<7:6\> are reserved. */
        uint32_t cls                   : 1;  /**< [  8:  8](RO) Crosslink supported. */
        uint32_t reserved_9_22         : 14;
        uint32_t rtds                  : 1;  /**< [ 23: 23](RO/WRSL) Retimer presence detect supported. */
        uint32_t trtds                 : 1;  /**< [ 24: 24](RO/WRSL/H) Two retimers presence detect supported.

                                                                 This bit must be set to in a port when the SLSV indicates support
                                                                 for a Link speed of 16.0 GT/s or higher.

                                                                 It is permitted to be set to one regardless of the SLSV if [RTDS]
                                                                 is also set to one. */
        uint32_t reserved_25_31        : 7;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_link_cap2_s cn; */
};
typedef union cavm_pcieepx_link_cap2 cavm_pcieepx_link_cap2_t;

static inline uint64_t CAVM_PCIEEPX_LINK_CAP2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_LINK_CAP2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x9c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x9c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x9c + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x9c + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_LINK_CAP2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_LINK_CAP2(a) cavm_pcieepx_link_cap2_t
#define bustype_CAVM_PCIEEPX_LINK_CAP2(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_LINK_CAP2(a) "PCIEEPX_LINK_CAP2"
#define busnum_CAVM_PCIEEPX_LINK_CAP2(a) (a)
#define arguments_CAVM_PCIEEPX_LINK_CAP2(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_link_ctl
 *
 * PCIe EP PF Link Control/Link Status Register
 */
union cavm_pcieepx_link_ctl
{
    uint32_t u;
    struct cavm_pcieepx_link_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t lab                   : 1;  /**< [ 31: 31](RO/H) Link autonomous bandwidth status. */
        uint32_t lbm                   : 1;  /**< [ 30: 30](RO/H) Link bandwidth management status. */
        uint32_t dlla                  : 1;  /**< [ 29: 29](RO) Data link layer active. Not applicable for an upstream port or endpoint device, hardwired to 0. */
        uint32_t scc                   : 1;  /**< [ 28: 28](RO/WRSL) Slot clock configuration. Indicates that the component uses the same physical reference
                                                                 clock that the platform provides on the connector. Writable through PEM()_CFG_TBL(). */
        uint32_t lt                    : 1;  /**< [ 27: 27](RO) Link training. Not applicable for an upstream port or endpoint device, hardwired to 0. */
        uint32_t reserved_26           : 1;
        uint32_t nlw                   : 6;  /**< [ 25: 20](RO/H) Negotiated link width. Set automatically by hardware after link initialization. Value is
                                                                 undefined when link is not up. */
        uint32_t ls                    : 4;  /**< [ 19: 16](RO/H) Current link speed. The encoded value specifies a bit location in the supported link
                                                                 speeds vector (in the link capabilities 2 register) that corresponds to the current link
                                                                 speed.
                                                                 0x1 = Supported link speeds vector field bit 0.
                                                                 0x2 = Supported link speeds vector field bit 1.
                                                                 0x3 = Supported link speeds vector field bit 2.
                                                                 0x4 = Supported link speeds vector field bit 3. */
        uint32_t drs_sc                : 2;  /**< [ 15: 14](RO) DRS signaling control. */
        uint32_t reserved_12_13        : 2;
        uint32_t lab_int_enb           : 1;  /**< [ 11: 11](RO) Link autonomous bandwidth interrupt enable. This bit is not applicable and is reserved for
                                                                 endpoints. */
        uint32_t lbm_int_enb           : 1;  /**< [ 10: 10](RO) Link bandwidth management interrupt enable. This bit is not applicable and is reserved for
                                                                 endpoints. */
        uint32_t hawd                  : 1;  /**< [  9:  9](R/W/H) Hardware autonomous width disable.
                                                                 This field is R/W only for function 0.  All other functions this field is read only zero. */
        uint32_t ecpm                  : 1;  /**< [  8:  8](R/W) Enable clock power management.
                                                                 This bit can be written through PEM()_CFG_TBL() if PCIEEP_LINK_CAP[CPM] is set
                                                                 (written) to 1 first. */
        uint32_t es                    : 1;  /**< [  7:  7](R/W) Extended synch. */
        uint32_t ccc                   : 1;  /**< [  6:  6](R/W) Common clock configuration. */
        uint32_t rl                    : 1;  /**< [  5:  5](RO) Retrain link. Not applicable for an upstream port or endpoint device. Hardwired to 0. */
        uint32_t ld                    : 1;  /**< [  4:  4](RO) Link disable. Not applicable for an upstream port or endpoint device. Hardwired to 0. */
        uint32_t rcb                   : 1;  /**< [  3:  3](R/W) Read completion boundary (RCB). */
        uint32_t reserved_2            : 1;
        uint32_t aslpc                 : 2;  /**< [  1:  0](R/W) Active state link PM control. */
#else /* Word 0 - Little Endian */
        uint32_t aslpc                 : 2;  /**< [  1:  0](R/W) Active state link PM control. */
        uint32_t reserved_2            : 1;
        uint32_t rcb                   : 1;  /**< [  3:  3](R/W) Read completion boundary (RCB). */
        uint32_t ld                    : 1;  /**< [  4:  4](RO) Link disable. Not applicable for an upstream port or endpoint device. Hardwired to 0. */
        uint32_t rl                    : 1;  /**< [  5:  5](RO) Retrain link. Not applicable for an upstream port or endpoint device. Hardwired to 0. */
        uint32_t ccc                   : 1;  /**< [  6:  6](R/W) Common clock configuration. */
        uint32_t es                    : 1;  /**< [  7:  7](R/W) Extended synch. */
        uint32_t ecpm                  : 1;  /**< [  8:  8](R/W) Enable clock power management.
                                                                 This bit can be written through PEM()_CFG_TBL() if PCIEEP_LINK_CAP[CPM] is set
                                                                 (written) to 1 first. */
        uint32_t hawd                  : 1;  /**< [  9:  9](R/W/H) Hardware autonomous width disable.
                                                                 This field is R/W only for function 0.  All other functions this field is read only zero. */
        uint32_t lbm_int_enb           : 1;  /**< [ 10: 10](RO) Link bandwidth management interrupt enable. This bit is not applicable and is reserved for
                                                                 endpoints. */
        uint32_t lab_int_enb           : 1;  /**< [ 11: 11](RO) Link autonomous bandwidth interrupt enable. This bit is not applicable and is reserved for
                                                                 endpoints. */
        uint32_t reserved_12_13        : 2;
        uint32_t drs_sc                : 2;  /**< [ 15: 14](RO) DRS signaling control. */
        uint32_t ls                    : 4;  /**< [ 19: 16](RO/H) Current link speed. The encoded value specifies a bit location in the supported link
                                                                 speeds vector (in the link capabilities 2 register) that corresponds to the current link
                                                                 speed.
                                                                 0x1 = Supported link speeds vector field bit 0.
                                                                 0x2 = Supported link speeds vector field bit 1.
                                                                 0x3 = Supported link speeds vector field bit 2.
                                                                 0x4 = Supported link speeds vector field bit 3. */
        uint32_t nlw                   : 6;  /**< [ 25: 20](RO/H) Negotiated link width. Set automatically by hardware after link initialization. Value is
                                                                 undefined when link is not up. */
        uint32_t reserved_26           : 1;
        uint32_t lt                    : 1;  /**< [ 27: 27](RO) Link training. Not applicable for an upstream port or endpoint device, hardwired to 0. */
        uint32_t scc                   : 1;  /**< [ 28: 28](RO/WRSL) Slot clock configuration. Indicates that the component uses the same physical reference
                                                                 clock that the platform provides on the connector. Writable through PEM()_CFG_TBL(). */
        uint32_t dlla                  : 1;  /**< [ 29: 29](RO) Data link layer active. Not applicable for an upstream port or endpoint device, hardwired to 0. */
        uint32_t lbm                   : 1;  /**< [ 30: 30](RO/H) Link bandwidth management status. */
        uint32_t lab                   : 1;  /**< [ 31: 31](RO/H) Link autonomous bandwidth status. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_link_ctl_s cn; */
};
typedef union cavm_pcieepx_link_ctl cavm_pcieepx_link_ctl_t;

static inline uint64_t CAVM_PCIEEPX_LINK_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_LINK_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x80 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x80 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x80 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x80 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_LINK_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_LINK_CTL(a) cavm_pcieepx_link_ctl_t
#define bustype_CAVM_PCIEEPX_LINK_CTL(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_LINK_CTL(a) "PCIEEPX_LINK_CTL"
#define busnum_CAVM_PCIEEPX_LINK_CTL(a) (a)
#define arguments_CAVM_PCIEEPX_LINK_CTL(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_link_ctl2
 *
 * PCIe EP PF Link Control 2 Register/Link Status 2 Register
 */
union cavm_pcieepx_link_ctl2
{
    uint32_t u;
    struct cavm_pcieepx_link_ctl2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t drs_mr                : 1;  /**< [ 31: 31](RO) DRS message received. */
        uint32_t dcp                   : 3;  /**< [ 30: 28](RO) Downstream component presence. */
        uint32_t reserved_26_27        : 2;
        uint32_t clr                   : 2;  /**< [ 25: 24](RO) Crosslink resolution (not supported). */
        uint32_t trtd                  : 1;  /**< [ 23: 23](RO) Two retimers presence detected. */
        uint32_t rtd                   : 1;  /**< [ 22: 22](RO) Retimer presence detected. */
        uint32_t ler                   : 1;  /**< [ 21: 21](R/W1C) Link equalization request 8.0 GT/s. */
        uint32_t ep3s                  : 1;  /**< [ 20: 20](RO/H) Equalization 8.0 GT/s phase 3 successful. */
        uint32_t ep2s                  : 1;  /**< [ 19: 19](RO/H) Equalization 8.0 GT/s phase 2 successful. */
        uint32_t ep1s                  : 1;  /**< [ 18: 18](RO/H) Equalization 8.0 GT/s phase 1 successful. */
        uint32_t eqc                   : 1;  /**< [ 17: 17](RO/H) Equalization 8.0 GT/s complete. */
        uint32_t cdl                   : 1;  /**< [ 16: 16](RO/H) Current deemphasis level. When the link is operating at 5 GT/s speed, this bit reflects
                                                                 the level of deemphasis.
                                                                 0 = -6 dB.
                                                                 1 = -3.5 dB.

                                                                 The value in this bit is undefined when the link is operating at 2.5 GT/s speed. */
        uint32_t cde                   : 4;  /**< [ 15: 12](R/W/H) Compliance deemphasis. This bit sets the deemphasis level in Polling.Compliance state if
                                                                 the entry occurred due to the TX compliance receive bit being one.
                                                                 0x0 = -6 dB.
                                                                 0x1 = -3.5 dB.

                                                                 When the link is operating at 2.5 GT/s, the setting of this bit has no effect.

                                                                 This field is R/W only for PF0.  All other functions this field is Reserved and
                                                                 will always read zeros. */
        uint32_t csos                  : 1;  /**< [ 11: 11](R/W/H) Compliance SOS. When set to one, the LTSSM is required to send SKP ordered sets periodically
                                                                 in between the (modified) compliance patterns.

                                                                 When the link is operating at 2.5 GT/s, the setting of this bit has no effect.

                                                                 This field is R/W only for PF0.  All other functions this field is Reserved and
                                                                 will always read zeros. */
        uint32_t emc                   : 1;  /**< [ 10: 10](R/W/H) Enter modified compliance. When this bit is set to one, the device transmits a modified
                                                                 compliance pattern if the LTSSM enters Polling.Compliance state.

                                                                 This field is R/W only for PF0.  All other functions this field is Reserved and
                                                                 will always read zeros. */
        uint32_t tm                    : 3;  /**< [  9:  7](R/W/H) Transmit margin. This field controls the value of the non-deemphasized voltage level at
                                                                 the transmitter pins:
                                                                 0x0 =  800-1200 mV for full swing 400-600 mV for half-swing.
                                                                 0x1-0x2 = Values must be monotonic with a nonzero slope.
                                                                 0x3 = 200-400 mV for full-swing and 100-200 mV for half-swing.
                                                                 0x4-0x7 = Reserved.

                                                                 This field is reset to 0x0 on entry to the LTSSM Polling.Compliance substate. When
                                                                 operating in 5.0 GT/s mode with full swing, the deemphasis ratio must be maintained within
                                                                 +/- 1 dB from the specification-defined operational value either -3.5 or -6 dB.

                                                                 This field is R/W only for PF0.  All other functions this field is Reserved and
                                                                 will always read zeros. */
        uint32_t sde                   : 1;  /**< [  6:  6](RO) Selectable deemphasis. Not applicable for an upstream port or endpoint device. Hardwired to 0. */
        uint32_t hasd                  : 1;  /**< [  5:  5](R/W/H) Hardware autonomous speed disable. When asserted, the application must disable hardware
                                                                 from changing the link speed for device-specific reasons other than attempting to correct
                                                                 unreliable link operation by reducing link speed. Initial transition to the highest
                                                                 supported common link speed is not blocked by this signal.

                                                                 This field is R/W only for PF0.  All other functions this field is Reserved and
                                                                 will always read zeros. */
        uint32_t ec                    : 1;  /**< [  4:  4](R/W/H) Enter compliance. Software is permitted to force a link to enter compliance mode at the
                                                                 speed indicated in the target link speed field by setting this bit to one in both components
                                                                 on a link and then initiating a hot reset on the link.

                                                                 This field is R/W only for PF0.  All other functions this field is Reserved and
                                                                 will always read zeros. */
        uint32_t tls                   : 4;  /**< [  3:  0](R/W) Target link speed. For downstream ports, this field sets an upper limit on link
                                                                 operational speed by restricting the values advertised by the upstream component in its
                                                                 training sequences:

                                                                 0x1 = 2.5 Gb/s target link speed.
                                                                 0x2 = 5 Gb/s target link speed.
                                                                 0x3 = 8 Gb/s target link speed.
                                                                 0x4 = 16 Gb/s target link speed.
                                                                 0x5 = 32 Gb/s target link speed.

                                                                 All other encodings are reserved.

                                                                 If a value is written to this field that does not correspond to a speed included in the
                                                                 supported link speeds field, the result is undefined. For both upstream and downstream
                                                                 ports, this field is used to set the target compliance mode speed when software is using
                                                                 the enter compliance bit to force a link into compliance mode.

                                                                 Reset values:
                                                                 _ PF0:          0x5.
                                                                 _ PF1:          0x0.

                                                                 This field is R/W only for PF0.  All other functions this field is Reserved and
                                                                 will always read zeros. */
#else /* Word 0 - Little Endian */
        uint32_t tls                   : 4;  /**< [  3:  0](R/W) Target link speed. For downstream ports, this field sets an upper limit on link
                                                                 operational speed by restricting the values advertised by the upstream component in its
                                                                 training sequences:

                                                                 0x1 = 2.5 Gb/s target link speed.
                                                                 0x2 = 5 Gb/s target link speed.
                                                                 0x3 = 8 Gb/s target link speed.
                                                                 0x4 = 16 Gb/s target link speed.
                                                                 0x5 = 32 Gb/s target link speed.

                                                                 All other encodings are reserved.

                                                                 If a value is written to this field that does not correspond to a speed included in the
                                                                 supported link speeds field, the result is undefined. For both upstream and downstream
                                                                 ports, this field is used to set the target compliance mode speed when software is using
                                                                 the enter compliance bit to force a link into compliance mode.

                                                                 Reset values:
                                                                 _ PF0:          0x5.
                                                                 _ PF1:          0x0.

                                                                 This field is R/W only for PF0.  All other functions this field is Reserved and
                                                                 will always read zeros. */
        uint32_t ec                    : 1;  /**< [  4:  4](R/W/H) Enter compliance. Software is permitted to force a link to enter compliance mode at the
                                                                 speed indicated in the target link speed field by setting this bit to one in both components
                                                                 on a link and then initiating a hot reset on the link.

                                                                 This field is R/W only for PF0.  All other functions this field is Reserved and
                                                                 will always read zeros. */
        uint32_t hasd                  : 1;  /**< [  5:  5](R/W/H) Hardware autonomous speed disable. When asserted, the application must disable hardware
                                                                 from changing the link speed for device-specific reasons other than attempting to correct
                                                                 unreliable link operation by reducing link speed. Initial transition to the highest
                                                                 supported common link speed is not blocked by this signal.

                                                                 This field is R/W only for PF0.  All other functions this field is Reserved and
                                                                 will always read zeros. */
        uint32_t sde                   : 1;  /**< [  6:  6](RO) Selectable deemphasis. Not applicable for an upstream port or endpoint device. Hardwired to 0. */
        uint32_t tm                    : 3;  /**< [  9:  7](R/W/H) Transmit margin. This field controls the value of the non-deemphasized voltage level at
                                                                 the transmitter pins:
                                                                 0x0 =  800-1200 mV for full swing 400-600 mV for half-swing.
                                                                 0x1-0x2 = Values must be monotonic with a nonzero slope.
                                                                 0x3 = 200-400 mV for full-swing and 100-200 mV for half-swing.
                                                                 0x4-0x7 = Reserved.

                                                                 This field is reset to 0x0 on entry to the LTSSM Polling.Compliance substate. When
                                                                 operating in 5.0 GT/s mode with full swing, the deemphasis ratio must be maintained within
                                                                 +/- 1 dB from the specification-defined operational value either -3.5 or -6 dB.

                                                                 This field is R/W only for PF0.  All other functions this field is Reserved and
                                                                 will always read zeros. */
        uint32_t emc                   : 1;  /**< [ 10: 10](R/W/H) Enter modified compliance. When this bit is set to one, the device transmits a modified
                                                                 compliance pattern if the LTSSM enters Polling.Compliance state.

                                                                 This field is R/W only for PF0.  All other functions this field is Reserved and
                                                                 will always read zeros. */
        uint32_t csos                  : 1;  /**< [ 11: 11](R/W/H) Compliance SOS. When set to one, the LTSSM is required to send SKP ordered sets periodically
                                                                 in between the (modified) compliance patterns.

                                                                 When the link is operating at 2.5 GT/s, the setting of this bit has no effect.

                                                                 This field is R/W only for PF0.  All other functions this field is Reserved and
                                                                 will always read zeros. */
        uint32_t cde                   : 4;  /**< [ 15: 12](R/W/H) Compliance deemphasis. This bit sets the deemphasis level in Polling.Compliance state if
                                                                 the entry occurred due to the TX compliance receive bit being one.
                                                                 0x0 = -6 dB.
                                                                 0x1 = -3.5 dB.

                                                                 When the link is operating at 2.5 GT/s, the setting of this bit has no effect.

                                                                 This field is R/W only for PF0.  All other functions this field is Reserved and
                                                                 will always read zeros. */
        uint32_t cdl                   : 1;  /**< [ 16: 16](RO/H) Current deemphasis level. When the link is operating at 5 GT/s speed, this bit reflects
                                                                 the level of deemphasis.
                                                                 0 = -6 dB.
                                                                 1 = -3.5 dB.

                                                                 The value in this bit is undefined when the link is operating at 2.5 GT/s speed. */
        uint32_t eqc                   : 1;  /**< [ 17: 17](RO/H) Equalization 8.0 GT/s complete. */
        uint32_t ep1s                  : 1;  /**< [ 18: 18](RO/H) Equalization 8.0 GT/s phase 1 successful. */
        uint32_t ep2s                  : 1;  /**< [ 19: 19](RO/H) Equalization 8.0 GT/s phase 2 successful. */
        uint32_t ep3s                  : 1;  /**< [ 20: 20](RO/H) Equalization 8.0 GT/s phase 3 successful. */
        uint32_t ler                   : 1;  /**< [ 21: 21](R/W1C) Link equalization request 8.0 GT/s. */
        uint32_t rtd                   : 1;  /**< [ 22: 22](RO) Retimer presence detected. */
        uint32_t trtd                  : 1;  /**< [ 23: 23](RO) Two retimers presence detected. */
        uint32_t clr                   : 2;  /**< [ 25: 24](RO) Crosslink resolution (not supported). */
        uint32_t reserved_26_27        : 2;
        uint32_t dcp                   : 3;  /**< [ 30: 28](RO) Downstream component presence. */
        uint32_t drs_mr                : 1;  /**< [ 31: 31](RO) DRS message received. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_link_ctl2_s cn; */
};
typedef union cavm_pcieepx_link_ctl2 cavm_pcieepx_link_ctl2_t;

static inline uint64_t CAVM_PCIEEPX_LINK_CTL2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_LINK_CTL2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0xa0 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0xa0 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0xa0 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0xa0 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_LINK_CTL2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_LINK_CTL2(a) cavm_pcieepx_link_ctl2_t
#define bustype_CAVM_PCIEEPX_LINK_CTL2(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_LINK_CTL2(a) "PCIEEPX_LINK_CTL2"
#define busnum_CAVM_PCIEEPX_LINK_CTL2(a) (a)
#define arguments_CAVM_PCIEEPX_LINK_CTL2(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_link_ctl3
 *
 * PCIe EP PF Link Control 3 Register
 * Link Control 3 exists for PF0 only.
 */
union cavm_pcieepx_link_ctl3
{
    uint32_t u;
    struct cavm_pcieepx_link_ctl3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_2_31         : 30;
        uint32_t eqrie                 : 1;  /**< [  1:  1](RO) Link equalization request interrupt enable. */
        uint32_t peq                   : 1;  /**< [  0:  0](RO) Perform equalization. */
#else /* Word 0 - Little Endian */
        uint32_t peq                   : 1;  /**< [  0:  0](RO) Perform equalization. */
        uint32_t eqrie                 : 1;  /**< [  1:  1](RO) Link equalization request interrupt enable. */
        uint32_t reserved_2_31         : 30;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_link_ctl3_s cn; */
};
typedef union cavm_pcieepx_link_ctl3 cavm_pcieepx_link_ctl3_t;

static inline uint64_t CAVM_PCIEEPX_LINK_CTL3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_LINK_CTL3(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x16c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x16c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x16c + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x16c + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_LINK_CTL3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_LINK_CTL3(a) cavm_pcieepx_link_ctl3_t
#define bustype_CAVM_PCIEEPX_LINK_CTL3(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_LINK_CTL3(a) "PCIEEPX_LINK_CTL3"
#define busnum_CAVM_PCIEEPX_LINK_CTL3(a) (a)
#define arguments_CAVM_PCIEEPX_LINK_CTL3(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ltr_cap_hdr
 *
 * PCIe EP PF LTR Extended Capability Header Register
 * LTR Capability exists for PF0 only.
 */
union cavm_pcieepx_ltr_cap_hdr
{
    uint32_t u;
    struct cavm_pcieepx_ltr_cap_hdr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t nco                   : 12; /**< [ 31: 20](RO/WRSL/H) Next capability offset.
                                                                 Writable through PEM()_CFG_TBL().

                                                                 Reset values:
                                                                 _ PF0:          0x23c.
                                                                 _ PF1:          0x0. */
        uint32_t cv                    : 4;  /**< [ 19: 16](RO/WRSL/H) Capability version.
                                                                 Writable through PEM()_CFG_TBL().

                                                                 Reset values:
                                                                 _ PF0:          0x1.
                                                                 _ PF1:          0x0. */
        uint32_t pcieec                : 16; /**< [ 15:  0](RO/WRSL/H) PCI Express extended capability.
                                                                 Writable through PEM()_CFG_TBL().

                                                                 Reset values:
                                                                 _ PF0:          0x18.
                                                                 _ PF1:          0x0. */
#else /* Word 0 - Little Endian */
        uint32_t pcieec                : 16; /**< [ 15:  0](RO/WRSL/H) PCI Express extended capability.
                                                                 Writable through PEM()_CFG_TBL().

                                                                 Reset values:
                                                                 _ PF0:          0x18.
                                                                 _ PF1:          0x0. */
        uint32_t cv                    : 4;  /**< [ 19: 16](RO/WRSL/H) Capability version.
                                                                 Writable through PEM()_CFG_TBL().

                                                                 Reset values:
                                                                 _ PF0:          0x1.
                                                                 _ PF1:          0x0. */
        uint32_t nco                   : 12; /**< [ 31: 20](RO/WRSL/H) Next capability offset.
                                                                 Writable through PEM()_CFG_TBL().

                                                                 Reset values:
                                                                 _ PF0:          0x23c.
                                                                 _ PF1:          0x0. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ltr_cap_hdr_s cn; */
};
typedef union cavm_pcieepx_ltr_cap_hdr cavm_pcieepx_ltr_cap_hdr_t;

static inline uint64_t CAVM_PCIEEPX_LTR_CAP_HDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_LTR_CAP_HDR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x234 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x234 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x234 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x234 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_LTR_CAP_HDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_LTR_CAP_HDR(a) cavm_pcieepx_ltr_cap_hdr_t
#define bustype_CAVM_PCIEEPX_LTR_CAP_HDR(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_LTR_CAP_HDR(a) "PCIEEPX_LTR_CAP_HDR"
#define busnum_CAVM_PCIEEPX_LTR_CAP_HDR(a) (a)
#define arguments_CAVM_PCIEEPX_LTR_CAP_HDR(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ltr_lat
 *
 * PCIe EP PF LTR Max Snoop and No-Snoop Latency Register
 * The LTR Extended Capability can only be read by PF0.
 * Accesses by other PF's will return zeros.
 */
union cavm_pcieepx_ltr_lat
{
    uint32_t u;
    struct cavm_pcieepx_ltr_lat_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_29_31        : 3;
        uint32_t mnsls                 : 3;  /**< [ 28: 26](R/W/H) Max no-snoop latency scale. */
        uint32_t mnsl                  : 10; /**< [ 25: 16](R/W) Max no-snoop latency value. */
        uint32_t reserved_13_15        : 3;
        uint32_t msls                  : 3;  /**< [ 12: 10](R/W/H) Max snoop latency scale. */
        uint32_t msl                   : 10; /**< [  9:  0](R/W/H) Max snoop latency value. */
#else /* Word 0 - Little Endian */
        uint32_t msl                   : 10; /**< [  9:  0](R/W/H) Max snoop latency value. */
        uint32_t msls                  : 3;  /**< [ 12: 10](R/W/H) Max snoop latency scale. */
        uint32_t reserved_13_15        : 3;
        uint32_t mnsl                  : 10; /**< [ 25: 16](R/W) Max no-snoop latency value. */
        uint32_t mnsls                 : 3;  /**< [ 28: 26](R/W/H) Max no-snoop latency scale. */
        uint32_t reserved_29_31        : 3;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ltr_lat_s cn; */
};
typedef union cavm_pcieepx_ltr_lat cavm_pcieepx_ltr_lat_t;

static inline uint64_t CAVM_PCIEEPX_LTR_LAT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_LTR_LAT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x238 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x238 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x238 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x238 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_LTR_LAT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_LTR_LAT(a) cavm_pcieepx_ltr_lat_t
#define bustype_CAVM_PCIEEPX_LTR_LAT(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_LTR_LAT(a) "PCIEEPX_LTR_LAT"
#define busnum_CAVM_PCIEEPX_LTR_LAT(a) (a)
#define arguments_CAVM_PCIEEPX_LTR_LAT(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_margin_ext_cap_hdr
 *
 * PCIe EP Margining Extended Capability Header Register
 * Margining Extended Capability Header exists for PF0 only.
 */
union cavm_pcieepx_margin_ext_cap_hdr
{
    uint32_t u;
    struct cavm_pcieepx_margin_ext_cap_hdr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t nco                   : 12; /**< [ 31: 20](RO/WRSL) Next capability offset.
                                                                 Writable through PEM()_CFG_TBL(). */
        uint32_t cv                    : 4;  /**< [ 19: 16](RO/WRSL) Capability version.
                                                                 Writable through PEM()_CFG_TBL(). */
        uint32_t pcieec                : 16; /**< [ 15:  0](RO/WRSL) PCIE Express extended capability.
                                                                 Writable through PEM()_CFG_TBL(). */
#else /* Word 0 - Little Endian */
        uint32_t pcieec                : 16; /**< [ 15:  0](RO/WRSL) PCIE Express extended capability.
                                                                 Writable through PEM()_CFG_TBL(). */
        uint32_t cv                    : 4;  /**< [ 19: 16](RO/WRSL) Capability version.
                                                                 Writable through PEM()_CFG_TBL(). */
        uint32_t nco                   : 12; /**< [ 31: 20](RO/WRSL) Next capability offset.
                                                                 Writable through PEM()_CFG_TBL(). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_margin_ext_cap_hdr_s cn; */
};
typedef union cavm_pcieepx_margin_ext_cap_hdr cavm_pcieepx_margin_ext_cap_hdr_t;

static inline uint64_t CAVM_PCIEEPX_MARGIN_EXT_CAP_HDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_MARGIN_EXT_CAP_HDR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x1ac + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x1ac + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x1ac + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x1ac + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_MARGIN_EXT_CAP_HDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_MARGIN_EXT_CAP_HDR(a) cavm_pcieepx_margin_ext_cap_hdr_t
#define bustype_CAVM_PCIEEPX_MARGIN_EXT_CAP_HDR(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_MARGIN_EXT_CAP_HDR(a) "PCIEEPX_MARGIN_EXT_CAP_HDR"
#define busnum_CAVM_PCIEEPX_MARGIN_EXT_CAP_HDR(a) (a)
#define arguments_CAVM_PCIEEPX_MARGIN_EXT_CAP_HDR(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_misc_ctl1
 *
 * PCIe EP Miscellaneous Control 1 Register
 */
union cavm_pcieepx_misc_ctl1
{
    uint32_t u;
    struct cavm_pcieepx_misc_ctl1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_23_31        : 9;
        uint32_t port_logic_wr_dis     : 1;  /**< [ 22: 22](R/W) Determines port logic register write from wire side. */
        uint32_t p2p_err_rpt           : 1;  /**< [ 21: 21](R/W) Determines whether to enable P2P error reporting.
                                                                 0 = Disable P2P error reporting.
                                                                 1 = Enable P2P error reporting. */
        uint32_t p2p_track_cpl         : 1;  /**< [ 20: 20](R/W) Determines whether to track completion of transmitted Non-Posted TLPs in
                                                                 P2P mode. */
        uint32_t trgt_above_cfg_limit  : 2;  /**< [ 19: 18](R/W) Cfg requests with an address greater then CFG_LIMIT are directed to either
                                                                 ELBI or TRTG1 based on the setting of this field.
                                                                 0x0 = Reserved.
                                                                 0x1 = ELBI.
                                                                 0x2 - TRGT1.
                                                                 0x3 = Reserved. */
        uint32_t cfg_limit             : 10; /**< [ 17:  8](R/W) Cfg requests are directed either to CDM or ELMI/RTRGT1.
                                                                 - Cfg requests with an address less then CFG_LIMIT are directed to CDM.
                                                                 - Cfg requests with an address greater then CFG_LIMIT are directed to
                                                                   ELBI or TRGT1 based on TRGT_ABOVE_CFG_LIMIT. */
        uint32_t cfg_tlp_byp_en        : 1;  /**< [  7:  7](R/W) Determines the destination of Configuration Requests.
                                                                 0 = Cfg TLPs are routed according to TRGT_ABOVE_CFG_LIMIT depending on
                                                                     the setting of CFG_LIMIT.
                                                                 1 = CFG TLPs are routed according to TRGT_ABOVE_CFG_LIMIT regardless
                                                                     of the value of CFG_LIMIT. */
        uint32_t cplq_mng_en           : 1;  /**< [  6:  6](R/W) This field configures the internal Completion Queue Management
                                                                 which is not supported as its performed in the application (external). */
        uint32_t ari_devn              : 1;  /**< [  5:  5](R/W) When ARI is enabled, enables use of the device ID. */
        uint32_t dis_auto_ltr_clr      : 1;  /**< [  4:  4](R/W) Disable the autonomous generation of LTR clear message in upstream port.
                                                                 0 = Allow the autonomous generation of LTR clear message.
                                                                 1 = Disable the autonomous generation of LTR clear message. */
        uint32_t simp_replay_timer     : 1;  /**< [  3:  3](R/W) Enables Simplified Replay Timer (Gen4).  Simplified replay timer values are:

                                                                   A value from 24,000 to 31,000 symbol times when extended synch is 0.
                                                                   A value from 80,000 to 100,000 symbol times when extended synch is 1. */
        uint32_t ur_c4_mask_4_trgt1    : 1;  /**< [  2:  2](R/W) This field only applies to request TLPs (with UR filtering status) that are
                                                                 chosen to forward to the application (when [DEF_TARGET] is set).

                                                                 When set, the core suppresses error logging, error message generation, and CPL
                                                                 generation (for non-posted requests). */
        uint32_t def_target            : 1;  /**< [  1:  1](R/W) Default target a received IO or MEM request with UR/CA/CRS
                                                                 is sent to be the controller.
                                                                 0x0 = The controller drops all incoming I/O or Mem (after
                                                                      corresponding error reporting). A completion with
                                                                      UR status will be generated for non-posted requests.
                                                                 0x1 = The controller forwards all incoming I/O or MEM
                                                                      requests with UR/CA/CRS status to your application. */
        uint32_t dbi_ro_wr_en          : 1;  /**< [  0:  0](R/W) Write to RO registers using DBI.  When you set this bit, then some
                                                                 RO bits are writable from the DBI. */
#else /* Word 0 - Little Endian */
        uint32_t dbi_ro_wr_en          : 1;  /**< [  0:  0](R/W) Write to RO registers using DBI.  When you set this bit, then some
                                                                 RO bits are writable from the DBI. */
        uint32_t def_target            : 1;  /**< [  1:  1](R/W) Default target a received IO or MEM request with UR/CA/CRS
                                                                 is sent to be the controller.
                                                                 0x0 = The controller drops all incoming I/O or Mem (after
                                                                      corresponding error reporting). A completion with
                                                                      UR status will be generated for non-posted requests.
                                                                 0x1 = The controller forwards all incoming I/O or MEM
                                                                      requests with UR/CA/CRS status to your application. */
        uint32_t ur_c4_mask_4_trgt1    : 1;  /**< [  2:  2](R/W) This field only applies to request TLPs (with UR filtering status) that are
                                                                 chosen to forward to the application (when [DEF_TARGET] is set).

                                                                 When set, the core suppresses error logging, error message generation, and CPL
                                                                 generation (for non-posted requests). */
        uint32_t simp_replay_timer     : 1;  /**< [  3:  3](R/W) Enables Simplified Replay Timer (Gen4).  Simplified replay timer values are:

                                                                   A value from 24,000 to 31,000 symbol times when extended synch is 0.
                                                                   A value from 80,000 to 100,000 symbol times when extended synch is 1. */
        uint32_t dis_auto_ltr_clr      : 1;  /**< [  4:  4](R/W) Disable the autonomous generation of LTR clear message in upstream port.
                                                                 0 = Allow the autonomous generation of LTR clear message.
                                                                 1 = Disable the autonomous generation of LTR clear message. */
        uint32_t ari_devn              : 1;  /**< [  5:  5](R/W) When ARI is enabled, enables use of the device ID. */
        uint32_t cplq_mng_en           : 1;  /**< [  6:  6](R/W) This field configures the internal Completion Queue Management
                                                                 which is not supported as its performed in the application (external). */
        uint32_t cfg_tlp_byp_en        : 1;  /**< [  7:  7](R/W) Determines the destination of Configuration Requests.
                                                                 0 = Cfg TLPs are routed according to TRGT_ABOVE_CFG_LIMIT depending on
                                                                     the setting of CFG_LIMIT.
                                                                 1 = CFG TLPs are routed according to TRGT_ABOVE_CFG_LIMIT regardless
                                                                     of the value of CFG_LIMIT. */
        uint32_t cfg_limit             : 10; /**< [ 17:  8](R/W) Cfg requests are directed either to CDM or ELMI/RTRGT1.
                                                                 - Cfg requests with an address less then CFG_LIMIT are directed to CDM.
                                                                 - Cfg requests with an address greater then CFG_LIMIT are directed to
                                                                   ELBI or TRGT1 based on TRGT_ABOVE_CFG_LIMIT. */
        uint32_t trgt_above_cfg_limit  : 2;  /**< [ 19: 18](R/W) Cfg requests with an address greater then CFG_LIMIT are directed to either
                                                                 ELBI or TRTG1 based on the setting of this field.
                                                                 0x0 = Reserved.
                                                                 0x1 = ELBI.
                                                                 0x2 - TRGT1.
                                                                 0x3 = Reserved. */
        uint32_t p2p_track_cpl         : 1;  /**< [ 20: 20](R/W) Determines whether to track completion of transmitted Non-Posted TLPs in
                                                                 P2P mode. */
        uint32_t p2p_err_rpt           : 1;  /**< [ 21: 21](R/W) Determines whether to enable P2P error reporting.
                                                                 0 = Disable P2P error reporting.
                                                                 1 = Enable P2P error reporting. */
        uint32_t port_logic_wr_dis     : 1;  /**< [ 22: 22](R/W) Determines port logic register write from wire side. */
        uint32_t reserved_23_31        : 9;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_misc_ctl1_s cn; */
};
typedef union cavm_pcieepx_misc_ctl1 cavm_pcieepx_misc_ctl1_t;

static inline uint64_t CAVM_PCIEEPX_MISC_CTL1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_MISC_CTL1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8bc + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x8bc + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8bc + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8bc + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_MISC_CTL1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_MISC_CTL1(a) cavm_pcieepx_misc_ctl1_t
#define bustype_CAVM_PCIEEPX_MISC_CTL1(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_MISC_CTL1(a) "PCIEEPX_MISC_CTL1"
#define busnum_CAVM_PCIEEPX_MISC_CTL1(a) (a)
#define arguments_CAVM_PCIEEPX_MISC_CTL1(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_mrg_lane_ctl_stat0
 *
 * PCIe EP Margining Lane Control and Status Register 0
 * Margining Lane Control and Status Registers exists for PF0 only.
 */
union cavm_pcieepx_mrg_lane_ctl_stat0
{
    uint32_t u;
    struct cavm_pcieepx_mrg_lane_ctl_stat0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t pl_stat               : 8;  /**< [ 31: 24](RO/H) Margin payload (status) for this lane. */
        uint32_t reserved_23           : 1;
        uint32_t um_stat               : 1;  /**< [ 22: 22](RO/H) Usage model (status) for this lane. */
        uint32_t mt_stat               : 3;  /**< [ 21: 19](RO/H) Margin type (status) for this lane. */
        uint32_t rnum_stat             : 3;  /**< [ 18: 16](RO/H) Receiver number (status) for this lane. */
        uint32_t mpl                   : 8;  /**< [ 15:  8](R/W) Margin payload for this lane. */
        uint32_t reserved_7            : 1;
        uint32_t um                    : 1;  /**< [  6:  6](R/W) Usage model for this lane. */
        uint32_t mt                    : 3;  /**< [  5:  3](R/W) Margin type for this lane. */
        uint32_t rnum                  : 3;  /**< [  2:  0](R/W) Receiver number for this lane. */
#else /* Word 0 - Little Endian */
        uint32_t rnum                  : 3;  /**< [  2:  0](R/W) Receiver number for this lane. */
        uint32_t mt                    : 3;  /**< [  5:  3](R/W) Margin type for this lane. */
        uint32_t um                    : 1;  /**< [  6:  6](R/W) Usage model for this lane. */
        uint32_t reserved_7            : 1;
        uint32_t mpl                   : 8;  /**< [ 15:  8](R/W) Margin payload for this lane. */
        uint32_t rnum_stat             : 3;  /**< [ 18: 16](RO/H) Receiver number (status) for this lane. */
        uint32_t mt_stat               : 3;  /**< [ 21: 19](RO/H) Margin type (status) for this lane. */
        uint32_t um_stat               : 1;  /**< [ 22: 22](RO/H) Usage model (status) for this lane. */
        uint32_t reserved_23           : 1;
        uint32_t pl_stat               : 8;  /**< [ 31: 24](RO/H) Margin payload (status) for this lane. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_mrg_lane_ctl_stat0_s cn; */
};
typedef union cavm_pcieepx_mrg_lane_ctl_stat0 cavm_pcieepx_mrg_lane_ctl_stat0_t;

static inline uint64_t CAVM_PCIEEPX_MRG_LANE_CTL_STAT0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_MRG_LANE_CTL_STAT0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x1b4 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x1b4 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x1b4 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x1b4 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_MRG_LANE_CTL_STAT0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_MRG_LANE_CTL_STAT0(a) cavm_pcieepx_mrg_lane_ctl_stat0_t
#define bustype_CAVM_PCIEEPX_MRG_LANE_CTL_STAT0(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_MRG_LANE_CTL_STAT0(a) "PCIEEPX_MRG_LANE_CTL_STAT0"
#define busnum_CAVM_PCIEEPX_MRG_LANE_CTL_STAT0(a) (a)
#define arguments_CAVM_PCIEEPX_MRG_LANE_CTL_STAT0(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_mrg_lane_ctl_stat1
 *
 * PCIe EP Margining Lane Control and Status Register 1
 */
union cavm_pcieepx_mrg_lane_ctl_stat1
{
    uint32_t u;
    struct cavm_pcieepx_mrg_lane_ctl_stat1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t pl_stat               : 8;  /**< [ 31: 24](RO/H) Margin payload (status) for this lane. */
        uint32_t reserved_23           : 1;
        uint32_t um_stat               : 1;  /**< [ 22: 22](RO/H) Usage model (status) for this lane. */
        uint32_t mt_stat               : 3;  /**< [ 21: 19](RO/H) Margin type (status) for this lane. */
        uint32_t rnum_stat             : 3;  /**< [ 18: 16](RO/H) Receiver number (status) for this lane. */
        uint32_t mpl                   : 8;  /**< [ 15:  8](R/W) Margin payload for this lane. */
        uint32_t reserved_7            : 1;
        uint32_t um                    : 1;  /**< [  6:  6](R/W) Usage model for this lane. */
        uint32_t mt                    : 3;  /**< [  5:  3](R/W) Margin type for this lane. */
        uint32_t rnum                  : 3;  /**< [  2:  0](R/W) Receiver number for this lane. */
#else /* Word 0 - Little Endian */
        uint32_t rnum                  : 3;  /**< [  2:  0](R/W) Receiver number for this lane. */
        uint32_t mt                    : 3;  /**< [  5:  3](R/W) Margin type for this lane. */
        uint32_t um                    : 1;  /**< [  6:  6](R/W) Usage model for this lane. */
        uint32_t reserved_7            : 1;
        uint32_t mpl                   : 8;  /**< [ 15:  8](R/W) Margin payload for this lane. */
        uint32_t rnum_stat             : 3;  /**< [ 18: 16](RO/H) Receiver number (status) for this lane. */
        uint32_t mt_stat               : 3;  /**< [ 21: 19](RO/H) Margin type (status) for this lane. */
        uint32_t um_stat               : 1;  /**< [ 22: 22](RO/H) Usage model (status) for this lane. */
        uint32_t reserved_23           : 1;
        uint32_t pl_stat               : 8;  /**< [ 31: 24](RO/H) Margin payload (status) for this lane. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_mrg_lane_ctl_stat1_s cn; */
};
typedef union cavm_pcieepx_mrg_lane_ctl_stat1 cavm_pcieepx_mrg_lane_ctl_stat1_t;

static inline uint64_t CAVM_PCIEEPX_MRG_LANE_CTL_STAT1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_MRG_LANE_CTL_STAT1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x1b8 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x1b8 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x1b8 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x1b8 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_MRG_LANE_CTL_STAT1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_MRG_LANE_CTL_STAT1(a) cavm_pcieepx_mrg_lane_ctl_stat1_t
#define bustype_CAVM_PCIEEPX_MRG_LANE_CTL_STAT1(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_MRG_LANE_CTL_STAT1(a) "PCIEEPX_MRG_LANE_CTL_STAT1"
#define busnum_CAVM_PCIEEPX_MRG_LANE_CTL_STAT1(a) (a)
#define arguments_CAVM_PCIEEPX_MRG_LANE_CTL_STAT1(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_mrg_lane_ctl_stat2
 *
 * PCIe EP Margining Lane Control and Status Register 2
 */
union cavm_pcieepx_mrg_lane_ctl_stat2
{
    uint32_t u;
    struct cavm_pcieepx_mrg_lane_ctl_stat2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t pl_stat               : 8;  /**< [ 31: 24](RO/H) Margin payload (status) for this lane. */
        uint32_t reserved_23           : 1;
        uint32_t um_stat               : 1;  /**< [ 22: 22](RO/H) Usage model (status) for this lane. */
        uint32_t mt_stat               : 3;  /**< [ 21: 19](RO/H) Margin type (status) for this lane. */
        uint32_t rnum_stat             : 3;  /**< [ 18: 16](RO/H) Receiver number (status) for this lane. */
        uint32_t mpl                   : 8;  /**< [ 15:  8](R/W) Margin payload for this lane. */
        uint32_t reserved_7            : 1;
        uint32_t um                    : 1;  /**< [  6:  6](R/W) Usage model for this lane. */
        uint32_t mt                    : 3;  /**< [  5:  3](R/W) Margin type for this lane. */
        uint32_t rnum                  : 3;  /**< [  2:  0](R/W) Receiver number for this lane. */
#else /* Word 0 - Little Endian */
        uint32_t rnum                  : 3;  /**< [  2:  0](R/W) Receiver number for this lane. */
        uint32_t mt                    : 3;  /**< [  5:  3](R/W) Margin type for this lane. */
        uint32_t um                    : 1;  /**< [  6:  6](R/W) Usage model for this lane. */
        uint32_t reserved_7            : 1;
        uint32_t mpl                   : 8;  /**< [ 15:  8](R/W) Margin payload for this lane. */
        uint32_t rnum_stat             : 3;  /**< [ 18: 16](RO/H) Receiver number (status) for this lane. */
        uint32_t mt_stat               : 3;  /**< [ 21: 19](RO/H) Margin type (status) for this lane. */
        uint32_t um_stat               : 1;  /**< [ 22: 22](RO/H) Usage model (status) for this lane. */
        uint32_t reserved_23           : 1;
        uint32_t pl_stat               : 8;  /**< [ 31: 24](RO/H) Margin payload (status) for this lane. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_mrg_lane_ctl_stat2_s cn; */
};
typedef union cavm_pcieepx_mrg_lane_ctl_stat2 cavm_pcieepx_mrg_lane_ctl_stat2_t;

static inline uint64_t CAVM_PCIEEPX_MRG_LANE_CTL_STAT2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_MRG_LANE_CTL_STAT2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x1bc + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x1bc + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x1bc + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x1bc + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_MRG_LANE_CTL_STAT2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_MRG_LANE_CTL_STAT2(a) cavm_pcieepx_mrg_lane_ctl_stat2_t
#define bustype_CAVM_PCIEEPX_MRG_LANE_CTL_STAT2(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_MRG_LANE_CTL_STAT2(a) "PCIEEPX_MRG_LANE_CTL_STAT2"
#define busnum_CAVM_PCIEEPX_MRG_LANE_CTL_STAT2(a) (a)
#define arguments_CAVM_PCIEEPX_MRG_LANE_CTL_STAT2(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_mrg_lane_ctl_stat3
 *
 * PCIe EP Margining Lane Control and Status Register 3
 */
union cavm_pcieepx_mrg_lane_ctl_stat3
{
    uint32_t u;
    struct cavm_pcieepx_mrg_lane_ctl_stat3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t pl_stat               : 8;  /**< [ 31: 24](RO/H) Margin payload (status) for this lane. */
        uint32_t reserved_23           : 1;
        uint32_t um_stat               : 1;  /**< [ 22: 22](RO/H) Usage model (status) for this lane. */
        uint32_t mt_stat               : 3;  /**< [ 21: 19](RO/H) Margin type (status) for this lane. */
        uint32_t rnum_stat             : 3;  /**< [ 18: 16](RO/H) Receiver number (status) for this lane. */
        uint32_t mpl                   : 8;  /**< [ 15:  8](R/W) Margin payload for this lane. */
        uint32_t reserved_7            : 1;
        uint32_t um                    : 1;  /**< [  6:  6](R/W) Usage model for this lane. */
        uint32_t mt                    : 3;  /**< [  5:  3](R/W) Margin type for this lane. */
        uint32_t rnum                  : 3;  /**< [  2:  0](R/W) Receiver number for this lane. */
#else /* Word 0 - Little Endian */
        uint32_t rnum                  : 3;  /**< [  2:  0](R/W) Receiver number for this lane. */
        uint32_t mt                    : 3;  /**< [  5:  3](R/W) Margin type for this lane. */
        uint32_t um                    : 1;  /**< [  6:  6](R/W) Usage model for this lane. */
        uint32_t reserved_7            : 1;
        uint32_t mpl                   : 8;  /**< [ 15:  8](R/W) Margin payload for this lane. */
        uint32_t rnum_stat             : 3;  /**< [ 18: 16](RO/H) Receiver number (status) for this lane. */
        uint32_t mt_stat               : 3;  /**< [ 21: 19](RO/H) Margin type (status) for this lane. */
        uint32_t um_stat               : 1;  /**< [ 22: 22](RO/H) Usage model (status) for this lane. */
        uint32_t reserved_23           : 1;
        uint32_t pl_stat               : 8;  /**< [ 31: 24](RO/H) Margin payload (status) for this lane. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_mrg_lane_ctl_stat3_s cn; */
};
typedef union cavm_pcieepx_mrg_lane_ctl_stat3 cavm_pcieepx_mrg_lane_ctl_stat3_t;

static inline uint64_t CAVM_PCIEEPX_MRG_LANE_CTL_STAT3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_MRG_LANE_CTL_STAT3(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x1c0 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x1c0 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x1c0 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x1c0 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_MRG_LANE_CTL_STAT3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_MRG_LANE_CTL_STAT3(a) cavm_pcieepx_mrg_lane_ctl_stat3_t
#define bustype_CAVM_PCIEEPX_MRG_LANE_CTL_STAT3(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_MRG_LANE_CTL_STAT3(a) "PCIEEPX_MRG_LANE_CTL_STAT3"
#define busnum_CAVM_PCIEEPX_MRG_LANE_CTL_STAT3(a) (a)
#define arguments_CAVM_PCIEEPX_MRG_LANE_CTL_STAT3(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_mrg_port_cap_stat
 *
 * PCIe EP Margining Port Capabilities and Status Register
 * Margining Port Capabilities and Status exists for PF0 only.
 */
union cavm_pcieepx_mrg_port_cap_stat
{
    uint32_t u;
    struct cavm_pcieepx_mrg_port_cap_stat_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_18_31        : 14;
        uint32_t m_swrdy               : 1;  /**< [ 17: 17](RO/H) Margining software ready. */
        uint32_t m_rdy                 : 1;  /**< [ 16: 16](RO/H) Margining ready. */
        uint32_t reserved_1_15         : 15;
        uint32_t m_drv                 : 1;  /**< [  0:  0](RO/WRSL) Margining uses driver software. */
#else /* Word 0 - Little Endian */
        uint32_t m_drv                 : 1;  /**< [  0:  0](RO/WRSL) Margining uses driver software. */
        uint32_t reserved_1_15         : 15;
        uint32_t m_rdy                 : 1;  /**< [ 16: 16](RO/H) Margining ready. */
        uint32_t m_swrdy               : 1;  /**< [ 17: 17](RO/H) Margining software ready. */
        uint32_t reserved_18_31        : 14;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_mrg_port_cap_stat_s cn; */
};
typedef union cavm_pcieepx_mrg_port_cap_stat cavm_pcieepx_mrg_port_cap_stat_t;

static inline uint64_t CAVM_PCIEEPX_MRG_PORT_CAP_STAT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_MRG_PORT_CAP_STAT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x1b0 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x1b0 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x1b0 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x1b0 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_MRG_PORT_CAP_STAT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_MRG_PORT_CAP_STAT(a) cavm_pcieepx_mrg_port_cap_stat_t
#define bustype_CAVM_PCIEEPX_MRG_PORT_CAP_STAT(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_MRG_PORT_CAP_STAT(a) "PCIEEPX_MRG_PORT_CAP_STAT"
#define busnum_CAVM_PCIEEPX_MRG_PORT_CAP_STAT(a) (a)
#define arguments_CAVM_PCIEEPX_MRG_PORT_CAP_STAT(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_msix_cap_cntrl
 *
 * PCIe EP PF MSI-X Capability ID/MSI-X Next Item Pointer/MSI-X Control Register
 */
union cavm_pcieepx_msix_cap_cntrl
{
    uint32_t u;
    struct cavm_pcieepx_msix_cap_cntrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t msixen                : 1;  /**< [ 31: 31](R/W) MSI-X enable. If MSI-X is enabled, MSI and INTx must be disabled. */
        uint32_t funm                  : 1;  /**< [ 30: 30](R/W) Function mask.
                                                                 0 = Each vectors mask bit determines whether the vector is masked or not.
                                                                 1 = All vectors associated with the function are masked, regardless of their respective
                                                                 per-vector mask bits. */
        uint32_t reserved_27_29        : 3;
        uint32_t msixts                : 11; /**< [ 26: 16](RO/WRSL) PF MSI-X table size encoded as (table size - 1).

                                                                 The VF MSI-X table size can be written through PCIEEPVF_MSIX_CAP_CNTRL_SHADOW[MSIXTS]. */
        uint32_t ncp                   : 8;  /**< [ 15:  8](RO/WRSL) Next capability offset. End of list.
                                                                 Writable through PEM()_CFG_TBL(). */
        uint32_t msixcid               : 8;  /**< [  7:  0](RO) MSI-X capability ID. */
#else /* Word 0 - Little Endian */
        uint32_t msixcid               : 8;  /**< [  7:  0](RO) MSI-X capability ID. */
        uint32_t ncp                   : 8;  /**< [ 15:  8](RO/WRSL) Next capability offset. End of list.
                                                                 Writable through PEM()_CFG_TBL(). */
        uint32_t msixts                : 11; /**< [ 26: 16](RO/WRSL) PF MSI-X table size encoded as (table size - 1).

                                                                 The VF MSI-X table size can be written through PCIEEPVF_MSIX_CAP_CNTRL_SHADOW[MSIXTS]. */
        uint32_t reserved_27_29        : 3;
        uint32_t funm                  : 1;  /**< [ 30: 30](R/W) Function mask.
                                                                 0 = Each vectors mask bit determines whether the vector is masked or not.
                                                                 1 = All vectors associated with the function are masked, regardless of their respective
                                                                 per-vector mask bits. */
        uint32_t msixen                : 1;  /**< [ 31: 31](R/W) MSI-X enable. If MSI-X is enabled, MSI and INTx must be disabled. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_msix_cap_cntrl_s cn; */
};
typedef union cavm_pcieepx_msix_cap_cntrl cavm_pcieepx_msix_cap_cntrl_t;

static inline uint64_t CAVM_PCIEEPX_MSIX_CAP_CNTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_MSIX_CAP_CNTRL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0xb0 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0xb0 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0xb0 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0xb0 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_MSIX_CAP_CNTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_MSIX_CAP_CNTRL(a) cavm_pcieepx_msix_cap_cntrl_t
#define bustype_CAVM_PCIEEPX_MSIX_CAP_CNTRL(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_MSIX_CAP_CNTRL(a) "PCIEEPX_MSIX_CAP_CNTRL"
#define busnum_CAVM_PCIEEPX_MSIX_CAP_CNTRL(a) (a)
#define arguments_CAVM_PCIEEPX_MSIX_CAP_CNTRL(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_msix_pba
 *
 * PCIe EP PF MSI-X PBA Offset and BIR Register
 */
union cavm_pcieepx_msix_pba
{
    uint32_t u;
    struct cavm_pcieepx_msix_pba_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t msixpoffs             : 29; /**< [ 31:  3](RO/WRSL) MSI-X table offset register. Base address of the MSI-X PBA, as an offset from the base
                                                                 address of the BAR indicated by the table PBA bits. Writable through PEM()_CFG_TBL(). */
        uint32_t msixpbir              : 3;  /**< [  2:  0](RO/WRSL) MSI-X PBA BAR indicator register (BIR). Indicates which BAR is used to map the MSI-X
                                                                 pending bit array into memory space. Writable through PEM()_CFG_TBL(). */
#else /* Word 0 - Little Endian */
        uint32_t msixpbir              : 3;  /**< [  2:  0](RO/WRSL) MSI-X PBA BAR indicator register (BIR). Indicates which BAR is used to map the MSI-X
                                                                 pending bit array into memory space. Writable through PEM()_CFG_TBL(). */
        uint32_t msixpoffs             : 29; /**< [ 31:  3](RO/WRSL) MSI-X table offset register. Base address of the MSI-X PBA, as an offset from the base
                                                                 address of the BAR indicated by the table PBA bits. Writable through PEM()_CFG_TBL(). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_msix_pba_s cn; */
};
typedef union cavm_pcieepx_msix_pba cavm_pcieepx_msix_pba_t;

static inline uint64_t CAVM_PCIEEPX_MSIX_PBA(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_MSIX_PBA(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0xb8 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0xb8 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0xb8 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0xb8 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_MSIX_PBA", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_MSIX_PBA(a) cavm_pcieepx_msix_pba_t
#define bustype_CAVM_PCIEEPX_MSIX_PBA(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_MSIX_PBA(a) "PCIEEPX_MSIX_PBA"
#define busnum_CAVM_PCIEEPX_MSIX_PBA(a) (a)
#define arguments_CAVM_PCIEEPX_MSIX_PBA(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_msix_table
 *
 * PCIe EP PF MSI-X Table Offset and BIR Register
 */
union cavm_pcieepx_msix_table
{
    uint32_t u;
    struct cavm_pcieepx_msix_table_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t msixtoffs             : 29; /**< [ 31:  3](RO/WRSL) MSI-X table offset register. Base address of the MSI-X table, as an offset from the base
                                                                 address of the BAR indicated by the table BIR bits. Writable through PEM()_CFG_TBL(). */
        uint32_t msixtbir              : 3;  /**< [  2:  0](RO/WRSL) MSI-X table BAR indicator register (BIR). Indicates which BAR is used to map the
                                                                 MSI-X table into memory space. Writable through PEM()_CFG_TBL(). */
#else /* Word 0 - Little Endian */
        uint32_t msixtbir              : 3;  /**< [  2:  0](RO/WRSL) MSI-X table BAR indicator register (BIR). Indicates which BAR is used to map the
                                                                 MSI-X table into memory space. Writable through PEM()_CFG_TBL(). */
        uint32_t msixtoffs             : 29; /**< [ 31:  3](RO/WRSL) MSI-X table offset register. Base address of the MSI-X table, as an offset from the base
                                                                 address of the BAR indicated by the table BIR bits. Writable through PEM()_CFG_TBL(). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_msix_table_s cn; */
};
typedef union cavm_pcieepx_msix_table cavm_pcieepx_msix_table_t;

static inline uint64_t CAVM_PCIEEPX_MSIX_TABLE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_MSIX_TABLE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0xb4 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0xb4 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0xb4 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0xb4 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_MSIX_TABLE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_MSIX_TABLE(a) cavm_pcieepx_msix_table_t
#define bustype_CAVM_PCIEEPX_MSIX_TABLE(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_MSIX_TABLE(a) "PCIEEPX_MSIX_TABLE"
#define busnum_CAVM_PCIEEPX_MSIX_TABLE(a) (a)
#define arguments_CAVM_PCIEEPX_MSIX_TABLE(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_np_rcv_credit
 *
 * PCIe EP PF VC0 Nonposted Receive Queue Control Register
 */
union cavm_pcieepx_np_rcv_credit
{
    uint32_t u;
    struct cavm_pcieepx_np_rcv_credit_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_28_31        : 4;
        uint32_t vc0_npds              : 2;  /**< [ 27: 26](RO/WRSL) VC0 scale non-posted data credits. */
        uint32_t vc0_nphs              : 2;  /**< [ 25: 24](RO/WRSL) VC0 scale non-posted header credits. */
        uint32_t queue_mode            : 3;  /**< [ 23: 21](RO/WRSL) VC0 nonposted TLP queue mode. The operating mode of the nonposted receive queue for VC0,
                                                                 used only in the segmented-buffer configuration, writable through PEM()_CFG_TBL().
                                                                 Only one bit can be set at a time:

                                                                 _ Bit 23 = Bypass.

                                                                 _ Bit 22 = Cut-through.

                                                                 _ Bit 21 = Store-and-forward.

                                                                 The application must not change this field. */
        uint32_t reserved_20           : 1;
        uint32_t header_credits        : 8;  /**< [ 19: 12](RO/WRSL) VC0 nonposted header credits. The number of initial nonposted header credits for VC0, used
                                                                 for all receive queue buffer configurations. This field is writable through
                                                                 PEM()_CFG_TBL(). */
        uint32_t data_credits          : 12; /**< [ 11:  0](RO/WRSL) VC0 nonposted data credits. The number of initial nonposted data credits for VC0, used for
                                                                 all receive queue buffer configurations. This field is writable through PEM()_CFG_TBL(). */
#else /* Word 0 - Little Endian */
        uint32_t data_credits          : 12; /**< [ 11:  0](RO/WRSL) VC0 nonposted data credits. The number of initial nonposted data credits for VC0, used for
                                                                 all receive queue buffer configurations. This field is writable through PEM()_CFG_TBL(). */
        uint32_t header_credits        : 8;  /**< [ 19: 12](RO/WRSL) VC0 nonposted header credits. The number of initial nonposted header credits for VC0, used
                                                                 for all receive queue buffer configurations. This field is writable through
                                                                 PEM()_CFG_TBL(). */
        uint32_t reserved_20           : 1;
        uint32_t queue_mode            : 3;  /**< [ 23: 21](RO/WRSL) VC0 nonposted TLP queue mode. The operating mode of the nonposted receive queue for VC0,
                                                                 used only in the segmented-buffer configuration, writable through PEM()_CFG_TBL().
                                                                 Only one bit can be set at a time:

                                                                 _ Bit 23 = Bypass.

                                                                 _ Bit 22 = Cut-through.

                                                                 _ Bit 21 = Store-and-forward.

                                                                 The application must not change this field. */
        uint32_t vc0_nphs              : 2;  /**< [ 25: 24](RO/WRSL) VC0 scale non-posted header credits. */
        uint32_t vc0_npds              : 2;  /**< [ 27: 26](RO/WRSL) VC0 scale non-posted data credits. */
        uint32_t reserved_28_31        : 4;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_np_rcv_credit_s cn; */
};
typedef union cavm_pcieepx_np_rcv_credit cavm_pcieepx_np_rcv_credit_t;

static inline uint64_t CAVM_PCIEEPX_NP_RCV_CREDIT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_NP_RCV_CREDIT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x74c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x74c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x74c + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x74c + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_NP_RCV_CREDIT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_NP_RCV_CREDIT(a) cavm_pcieepx_np_rcv_credit_t
#define bustype_CAVM_PCIEEPX_NP_RCV_CREDIT(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_NP_RCV_CREDIT(a) "PCIEEPX_NP_RCV_CREDIT"
#define busnum_CAVM_PCIEEPX_NP_RCV_CREDIT(a) (a)
#define arguments_CAVM_PCIEEPX_NP_RCV_CREDIT(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_np_xmit_credit
 *
 * PCIe EP PF Transmit Nonposted FC Credit Status Register
 */
union cavm_pcieepx_np_xmit_credit
{
    uint32_t u;
    struct cavm_pcieepx_np_xmit_credit_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_28_31        : 4;
        uint32_t tchfcc                : 12; /**< [ 27: 16](RO/H) Transmit nonposted header FC credits. The nonposted header credits advertised by the
                                                                 receiver at the other end of the link, updated with each UpdateFC DLLP. */
        uint32_t tcdfcc                : 16; /**< [ 15:  0](RO/H) Transmit nonposted data FC credits. The nonposted data credits advertised by the receiver
                                                                 at the other end of the link, updated with each UpdateFC DLLP. */
#else /* Word 0 - Little Endian */
        uint32_t tcdfcc                : 16; /**< [ 15:  0](RO/H) Transmit nonposted data FC credits. The nonposted data credits advertised by the receiver
                                                                 at the other end of the link, updated with each UpdateFC DLLP. */
        uint32_t tchfcc                : 12; /**< [ 27: 16](RO/H) Transmit nonposted header FC credits. The nonposted header credits advertised by the
                                                                 receiver at the other end of the link, updated with each UpdateFC DLLP. */
        uint32_t reserved_28_31        : 4;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_np_xmit_credit_s cn; */
};
typedef union cavm_pcieepx_np_xmit_credit cavm_pcieepx_np_xmit_credit_t;

static inline uint64_t CAVM_PCIEEPX_NP_XMIT_CREDIT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_NP_XMIT_CREDIT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x734 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x734 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x734 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x734 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_NP_XMIT_CREDIT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_NP_XMIT_CREDIT(a) cavm_pcieepx_np_xmit_credit_t
#define bustype_CAVM_PCIEEPX_NP_XMIT_CREDIT(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_NP_XMIT_CREDIT(a) "PCIEEPX_NP_XMIT_CREDIT"
#define busnum_CAVM_PCIEEPX_NP_XMIT_CREDIT(a) (a)
#define arguments_CAVM_PCIEEPX_NP_XMIT_CREDIT(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_omsg_ptr
 *
 * PCIe EP PF Other Message Register
 */
union cavm_pcieepx_omsg_ptr
{
    uint32_t u;
    struct cavm_pcieepx_omsg_ptr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t omr                   : 32; /**< [ 31:  0](R/W) Other message register. This register can be used for either of the following purposes:

                                                                 * To send a specific PCI Express message, the application writes the payload of the
                                                                 message into this register, then sets bit 0 of the port link control register to send the
                                                                 message.

                                                                 * To store a corruption pattern for corrupting the LCRC on all TLPs, the application
                                                                 places a 32-bit corruption pattern into this register and enables this function by setting
                                                                 bit 25 of the port link control register. When enabled, the transmit LCRC result is XORed
                                                                 with this pattern before inserting it into the packet. */
#else /* Word 0 - Little Endian */
        uint32_t omr                   : 32; /**< [ 31:  0](R/W) Other message register. This register can be used for either of the following purposes:

                                                                 * To send a specific PCI Express message, the application writes the payload of the
                                                                 message into this register, then sets bit 0 of the port link control register to send the
                                                                 message.

                                                                 * To store a corruption pattern for corrupting the LCRC on all TLPs, the application
                                                                 places a 32-bit corruption pattern into this register and enables this function by setting
                                                                 bit 25 of the port link control register. When enabled, the transmit LCRC result is XORed
                                                                 with this pattern before inserting it into the packet. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_omsg_ptr_s cn; */
};
typedef union cavm_pcieepx_omsg_ptr cavm_pcieepx_omsg_ptr_t;

static inline uint64_t CAVM_PCIEEPX_OMSG_PTR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_OMSG_PTR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x704 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x704 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x704 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x704 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_OMSG_PTR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_OMSG_PTR(a) cavm_pcieepx_omsg_ptr_t
#define bustype_CAVM_PCIEEPX_OMSG_PTR(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_OMSG_PTR(a) "PCIEEPX_OMSG_PTR"
#define busnum_CAVM_PCIEEPX_OMSG_PTR(a) (a)
#define arguments_CAVM_PCIEEPX_OMSG_PTR(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ord_rule_ctrl
 *
 * PCIe EP PF Order Rule Control Register
 */
union cavm_pcieepx_ord_rule_ctrl
{
    uint32_t u;
    struct cavm_pcieepx_ord_rule_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t cpl_pass_p            : 8;  /**< [ 15:  8](R/W) Completion passing posted ordering rule control.
                                                                 Determines if a CPL can pass halted P queue.
                                                                 0x0 = CPL can not pass P (recommended).
                                                                 0x1 = CPL can pass P.
                                                                 0x2-0xFF = Reserved. */
        uint32_t np_pass_p             : 8;  /**< [  7:  0](R/W) Non-Posted passing posted ordering rule control.
                                                                 Determines if a NP can pass halted P queue.
                                                                 0x0 = NP can not pass P (recommended).
                                                                 0x1 = NP can pass P.
                                                                 0x2-0xFF = Reserved. */
#else /* Word 0 - Little Endian */
        uint32_t np_pass_p             : 8;  /**< [  7:  0](R/W) Non-Posted passing posted ordering rule control.
                                                                 Determines if a NP can pass halted P queue.
                                                                 0x0 = NP can not pass P (recommended).
                                                                 0x1 = NP can pass P.
                                                                 0x2-0xFF = Reserved. */
        uint32_t cpl_pass_p            : 8;  /**< [ 15:  8](R/W) Completion passing posted ordering rule control.
                                                                 Determines if a CPL can pass halted P queue.
                                                                 0x0 = CPL can not pass P (recommended).
                                                                 0x1 = CPL can pass P.
                                                                 0x2-0xFF = Reserved. */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ord_rule_ctrl_s cn; */
};
typedef union cavm_pcieepx_ord_rule_ctrl cavm_pcieepx_ord_rule_ctrl_t;

static inline uint64_t CAVM_PCIEEPX_ORD_RULE_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_ORD_RULE_CTRL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8b4 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x8b4 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8b4 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8b4 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_ORD_RULE_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_ORD_RULE_CTRL(a) cavm_pcieepx_ord_rule_ctrl_t
#define bustype_CAVM_PCIEEPX_ORD_RULE_CTRL(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_ORD_RULE_CTRL(a) "PCIEEPX_ORD_RULE_CTRL"
#define busnum_CAVM_PCIEEPX_ORD_RULE_CTRL(a) (a)
#define arguments_CAVM_PCIEEPX_ORD_RULE_CTRL(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_p_rcv_credit
 *
 * PCIe EP PF VC0 Posted Receive Queue Control Register
 */
union cavm_pcieepx_p_rcv_credit
{
    uint32_t u;
    struct cavm_pcieepx_p_rcv_credit_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rx_queue_order        : 1;  /**< [ 31: 31](RO/WRSL) VC ordering for receive queues. Determines the VC ordering rule for the receive queues,
                                                                 used only in the segmented-buffer configuration, writable through PEM()_CFG_TBL():
                                                                 0 = Round robin.
                                                                 1 = Strict ordering, higher numbered VCs have higher priority. */
        uint32_t type_ordering         : 1;  /**< [ 30: 30](RO/WRSL) TLP type ordering for VC0. Determines the TLP type ordering rule for VC0 receive queues,
                                                                 used only in the segmented-buffer configuration, writable through
                                                                 PEM()_CFG_TBL():
                                                                 0 = Strict ordering for received TLPs: Posted, then completion, then NonPosted.
                                                                 1 = Ordering of received TLPs follows the rules in PCI Express Base Specification.

                                                                 The application must not change this field. */
        uint32_t reserved_28_29        : 2;
        uint32_t vc0_pds               : 2;  /**< [ 27: 26](RO/WRSL) VC0 scale posted data credits. */
        uint32_t vc0_phs               : 2;  /**< [ 25: 24](RO/WRSL) VC0 scale posted header credits. */
        uint32_t queue_mode            : 3;  /**< [ 23: 21](RO/WRSL) VC0 posted TLP queue mode. The operating mode of the posted receive queue for VC0, used
                                                                 only in the segmented-buffer configuration, writable through PEM()_CFG_TBL(). However,
                                                                 the application must not change this field.
                                                                 Only one bit can be set at a time:

                                                                 _ Bit 23 = Bypass.

                                                                 _ Bit 22 = Cut-through.

                                                                 _ Bit 21 = Store-and-forward. */
        uint32_t reserved_20           : 1;
        uint32_t header_credits        : 8;  /**< [ 19: 12](RO/WRSL/H) VC0 posted header credits. The number of initial posted header credits for VC0, used for
                                                                 all receive queue buffer configurations. This field is writable through PEM()_CFG_TBL(). */
        uint32_t data_credits          : 12; /**< [ 11:  0](RO/WRSL/H) VC0 posted data credits. The number of initial posted data credits for VC0, used for all
                                                                 receive queue buffer configurations. This field is writable through PEM()_CFG_TBL(). */
#else /* Word 0 - Little Endian */
        uint32_t data_credits          : 12; /**< [ 11:  0](RO/WRSL/H) VC0 posted data credits. The number of initial posted data credits for VC0, used for all
                                                                 receive queue buffer configurations. This field is writable through PEM()_CFG_TBL(). */
        uint32_t header_credits        : 8;  /**< [ 19: 12](RO/WRSL/H) VC0 posted header credits. The number of initial posted header credits for VC0, used for
                                                                 all receive queue buffer configurations. This field is writable through PEM()_CFG_TBL(). */
        uint32_t reserved_20           : 1;
        uint32_t queue_mode            : 3;  /**< [ 23: 21](RO/WRSL) VC0 posted TLP queue mode. The operating mode of the posted receive queue for VC0, used
                                                                 only in the segmented-buffer configuration, writable through PEM()_CFG_TBL(). However,
                                                                 the application must not change this field.
                                                                 Only one bit can be set at a time:

                                                                 _ Bit 23 = Bypass.

                                                                 _ Bit 22 = Cut-through.

                                                                 _ Bit 21 = Store-and-forward. */
        uint32_t vc0_phs               : 2;  /**< [ 25: 24](RO/WRSL) VC0 scale posted header credits. */
        uint32_t vc0_pds               : 2;  /**< [ 27: 26](RO/WRSL) VC0 scale posted data credits. */
        uint32_t reserved_28_29        : 2;
        uint32_t type_ordering         : 1;  /**< [ 30: 30](RO/WRSL) TLP type ordering for VC0. Determines the TLP type ordering rule for VC0 receive queues,
                                                                 used only in the segmented-buffer configuration, writable through
                                                                 PEM()_CFG_TBL():
                                                                 0 = Strict ordering for received TLPs: Posted, then completion, then NonPosted.
                                                                 1 = Ordering of received TLPs follows the rules in PCI Express Base Specification.

                                                                 The application must not change this field. */
        uint32_t rx_queue_order        : 1;  /**< [ 31: 31](RO/WRSL) VC ordering for receive queues. Determines the VC ordering rule for the receive queues,
                                                                 used only in the segmented-buffer configuration, writable through PEM()_CFG_TBL():
                                                                 0 = Round robin.
                                                                 1 = Strict ordering, higher numbered VCs have higher priority. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_p_rcv_credit_s cn; */
};
typedef union cavm_pcieepx_p_rcv_credit cavm_pcieepx_p_rcv_credit_t;

static inline uint64_t CAVM_PCIEEPX_P_RCV_CREDIT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_P_RCV_CREDIT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x748 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x748 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x748 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x748 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_P_RCV_CREDIT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_P_RCV_CREDIT(a) cavm_pcieepx_p_rcv_credit_t
#define bustype_CAVM_PCIEEPX_P_RCV_CREDIT(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_P_RCV_CREDIT(a) "PCIEEPX_P_RCV_CREDIT"
#define busnum_CAVM_PCIEEPX_P_RCV_CREDIT(a) (a)
#define arguments_CAVM_PCIEEPX_P_RCV_CREDIT(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_p_xmit_credit
 *
 * PCIe EP PF Transmit Posted FC Credit Status Register
 */
union cavm_pcieepx_p_xmit_credit
{
    uint32_t u;
    struct cavm_pcieepx_p_xmit_credit_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_28_31        : 4;
        uint32_t tphfcc                : 12; /**< [ 27: 16](RO/H) Transmit posted header FC credits. The posted header credits advertised by the receiver at
                                                                 the other end of the link, updated with each UpdateFC DLLP. */
        uint32_t tpdfcc                : 16; /**< [ 15:  0](RO/H) Transmit posted data FC credits. The posted data credits advertised by the receiver at the
                                                                 other end of the link, updated with each UpdateFC DLLP. */
#else /* Word 0 - Little Endian */
        uint32_t tpdfcc                : 16; /**< [ 15:  0](RO/H) Transmit posted data FC credits. The posted data credits advertised by the receiver at the
                                                                 other end of the link, updated with each UpdateFC DLLP. */
        uint32_t tphfcc                : 12; /**< [ 27: 16](RO/H) Transmit posted header FC credits. The posted header credits advertised by the receiver at
                                                                 the other end of the link, updated with each UpdateFC DLLP. */
        uint32_t reserved_28_31        : 4;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_p_xmit_credit_s cn; */
};
typedef union cavm_pcieepx_p_xmit_credit cavm_pcieepx_p_xmit_credit_t;

static inline uint64_t CAVM_PCIEEPX_P_XMIT_CREDIT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_P_XMIT_CREDIT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x730 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x730 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x730 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x730 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_P_XMIT_CREDIT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_P_XMIT_CREDIT(a) cavm_pcieepx_p_xmit_credit_t
#define bustype_CAVM_PCIEEPX_P_XMIT_CREDIT(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_P_XMIT_CREDIT(a) "PCIEEPX_P_XMIT_CREDIT"
#define busnum_CAVM_PCIEEPX_P_XMIT_CREDIT(a) (a)
#define arguments_CAVM_PCIEEPX_P_XMIT_CREDIT(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_phy_ctl
 *
 * PCIe EP PF PHY Control Register
 */
union cavm_pcieepx_phy_ctl
{
    uint32_t u;
    struct cavm_pcieepx_phy_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t phy_ctrl              : 32; /**< [ 31:  0](R/W) PHY control.  Sideband control signaling (not supported). */
#else /* Word 0 - Little Endian */
        uint32_t phy_ctrl              : 32; /**< [ 31:  0](R/W) PHY control.  Sideband control signaling (not supported). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_phy_ctl_s cn; */
};
typedef union cavm_pcieepx_phy_ctl cavm_pcieepx_phy_ctl_t;

static inline uint64_t CAVM_PCIEEPX_PHY_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_PHY_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x814 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x814 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x814 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x814 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_PHY_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_PHY_CTL(a) cavm_pcieepx_phy_ctl_t
#define bustype_CAVM_PCIEEPX_PHY_CTL(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_PHY_CTL(a) "PCIEEPX_PHY_CTL"
#define busnum_CAVM_PCIEEPX_PHY_CTL(a) (a)
#define arguments_CAVM_PCIEEPX_PHY_CTL(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_phy_gen3_ctl
 *
 * PCIe EP PF Gen3 Control Register
 */
union cavm_pcieepx_phy_gen3_ctl
{
    uint32_t u;
    struct cavm_pcieepx_phy_gen3_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_26_31        : 6;
        uint32_t rss                   : 2;  /**< [ 25: 24](R/W) Rate Shadow Select. This register value decide the Data Rate of shadow register.
                                                                 0x0 = Gen3 Data Rate is selected for shadow register.
                                                                 0x1 = Gen4 Data Rate is selected for shadow register.
                                                                 0x2 = Gen5 Data Rate is selected for shadow register.
                                                                 0x3 = Reserved.

                                                                 The following shadow registers are controlled by this field.
                                                                 _ PCIEEP_PHY_GEN3_CTL[EP2P3D].
                                                                 _ PCIEEP_PHY_GEN3_CTL[RXEQ_PH01_EN].
                                                                 _ PCIEEP_PHY_GEN3_CTL[AED].
                                                                 _ PCIEEP_PHY_GEN3_CTL[US8ETD].
                                                                 _ PCIEEP_GEN3_EQ_CTL[FM].
                                                                 _ PCIEEP_GEN3_EQ_CTL[BT].
                                                                 _ PCIEEP_GEN3_EQ_CTL[P23TD].
                                                                 _ PCIEEP_GEN3_EQ_CTL[PRV].
                                                                 _ PCIEEP_GEN3_EQ_CTL[IIF].
                                                                 _ PCIEEP_GEN3_EQ_CTL[EQ_PSET_REQ]. */
        uint32_t eiedd                 : 1;  /**< [ 23: 23](R/W) Eq InvalidRequest and RxEqEval different time assertion disable.  Disable the assertion of
                                                                 Eq InvalidRequest and RxEqEval at different time. */
        uint32_t us8etd                : 1;  /**< [ 22: 22](R/W/H) Upstream port send 8GT/s EQ TS2 disable. The base spec defines that USP can
                                                                 optionally send 8GT EQ TS2 and it means USP can set DSP TxPreset value in Gen4
                                                                 Data Rate. If this register set to 0, USP sends 8GT EQ TS2. If this register
                                                                 set to 1, USP does not send 8GT EQ TS2. This applies to upstream ports only.
                                                                 No Function for downstream ports.
                                                                 Note: When CX_GEN4_SPEED, this register is shadow register for Gen3 and Gen4 data
                                                                 rate. If PCIEEP_PHY_GEN3_CTL[RSS]=0x0, this register is RSVD and cannot be written.
                                                                 If PCIEEP_PHY_GEN3_CTL[RSS]=0x1, this register is for Gen4 data rate and can be written. */
        uint32_t aed                   : 1;  /**< [ 21: 21](R/W/H) Autonomous equalization disable. When the controller is in L0 state at Gen3
                                                                 data rate and equalization was completed successfully in Autonomous EQ Mechanism,
                                                                 setting this bit in DSP will not direct the controller to Recovery state to
                                                                 perform Gen4 equalization. Link stays in Gen3 rate and DSP sends DLLPs to USP.
                                                                 If the bit is 0, DSP will block DLLPs and direct the link to perform Gen4 EQ
                                                                 in Autonomous Mechanism.
                                                                 Note: When CX_GEN4_SPEED, this register is shadow register for Gen3 and Gen4 data
                                                                 rate. If PCIEEP_PHY_GEN3_CTL[RSS]=0x0, this register is RSVD and cannot be written.
                                                                 If PCIEEP_PHY_GEN3_CTL[RSS]=0x1, this register is for Gen4 data rate and can be written. */
        uint32_t reserved_19_20        : 2;
        uint32_t dcbd                  : 1;  /**< [ 18: 18](R/W) Disable balance disable. Disable DC balance feature. */
        uint32_t dtdd                  : 1;  /**< [ 17: 17](R/W) DLLP transmission delay disable. Disable delay transmission of DLLPs before equalization. */
        uint32_t ed                    : 1;  /**< [ 16: 16](R/W) Equalization disable. Disable equalization feature. */
        uint32_t reserved_14_15        : 2;
        uint32_t rxeq_rgrdless_rsts    : 1;  /**< [ 13: 13](R/W) The controller as Gen3 EQ master asserts RxEqEval to instruct the
                                                                 PHY to do Rx adaptation and evaluation.
                                                                 0x0 = Asserts after 1 us and 2 TS1 received from remote partner.
                                                                 0x1 = Asserts after 500 ns regardless of TS's received or not. */
        uint32_t rxeq_ph01_en          : 1;  /**< [ 12: 12](R/W) Rx equalization phase 0/phase 1 hold enable. */
        uint32_t erd                   : 1;  /**< [ 11: 11](R/W) Equalization redo disable. Disable autonomous mechanism for requesting to
                                                                 redo the equalization process. */
        uint32_t ecrd                  : 1;  /**< [ 10: 10](R/W) Equalization EIEOS count reset disable. Disable requesting reset of EIEOS count during
                                                                 equalization. */
        uint32_t ep2p3d                : 1;  /**< [  9:  9](R/W) Equalization phase 2 and phase 3 disable. This applies to downstream ports only. */
        uint32_t dsg3                  : 1;  /**< [  8:  8](R/W) Disable scrambler for Gen3 data rate. The Gen3 scrambler/descrambler within the core needs
                                                                 to be disabled when the scrambling function is implemented outside of the core (within the
                                                                 PHY). */
        uint32_t reserved_2_7          : 6;
        uint32_t no_seed_value_change  : 1;  /**< [  1:  1](R/W) When set, the seed value of LFSR for scrambler at Gen3/Gen4 rate
                                                                 does not change after LinkUp = 1. This feature requires both sides of the link. */
        uint32_t grizdnc               : 1;  /**< [  0:  0](R/W) Gen3 receiver impedance ZRX-DC not compliant. */
#else /* Word 0 - Little Endian */
        uint32_t grizdnc               : 1;  /**< [  0:  0](R/W) Gen3 receiver impedance ZRX-DC not compliant. */
        uint32_t no_seed_value_change  : 1;  /**< [  1:  1](R/W) When set, the seed value of LFSR for scrambler at Gen3/Gen4 rate
                                                                 does not change after LinkUp = 1. This feature requires both sides of the link. */
        uint32_t reserved_2_7          : 6;
        uint32_t dsg3                  : 1;  /**< [  8:  8](R/W) Disable scrambler for Gen3 data rate. The Gen3 scrambler/descrambler within the core needs
                                                                 to be disabled when the scrambling function is implemented outside of the core (within the
                                                                 PHY). */
        uint32_t ep2p3d                : 1;  /**< [  9:  9](R/W) Equalization phase 2 and phase 3 disable. This applies to downstream ports only. */
        uint32_t ecrd                  : 1;  /**< [ 10: 10](R/W) Equalization EIEOS count reset disable. Disable requesting reset of EIEOS count during
                                                                 equalization. */
        uint32_t erd                   : 1;  /**< [ 11: 11](R/W) Equalization redo disable. Disable autonomous mechanism for requesting to
                                                                 redo the equalization process. */
        uint32_t rxeq_ph01_en          : 1;  /**< [ 12: 12](R/W) Rx equalization phase 0/phase 1 hold enable. */
        uint32_t rxeq_rgrdless_rsts    : 1;  /**< [ 13: 13](R/W) The controller as Gen3 EQ master asserts RxEqEval to instruct the
                                                                 PHY to do Rx adaptation and evaluation.
                                                                 0x0 = Asserts after 1 us and 2 TS1 received from remote partner.
                                                                 0x1 = Asserts after 500 ns regardless of TS's received or not. */
        uint32_t reserved_14_15        : 2;
        uint32_t ed                    : 1;  /**< [ 16: 16](R/W) Equalization disable. Disable equalization feature. */
        uint32_t dtdd                  : 1;  /**< [ 17: 17](R/W) DLLP transmission delay disable. Disable delay transmission of DLLPs before equalization. */
        uint32_t dcbd                  : 1;  /**< [ 18: 18](R/W) Disable balance disable. Disable DC balance feature. */
        uint32_t reserved_19_20        : 2;
        uint32_t aed                   : 1;  /**< [ 21: 21](R/W/H) Autonomous equalization disable. When the controller is in L0 state at Gen3
                                                                 data rate and equalization was completed successfully in Autonomous EQ Mechanism,
                                                                 setting this bit in DSP will not direct the controller to Recovery state to
                                                                 perform Gen4 equalization. Link stays in Gen3 rate and DSP sends DLLPs to USP.
                                                                 If the bit is 0, DSP will block DLLPs and direct the link to perform Gen4 EQ
                                                                 in Autonomous Mechanism.
                                                                 Note: When CX_GEN4_SPEED, this register is shadow register for Gen3 and Gen4 data
                                                                 rate. If PCIEEP_PHY_GEN3_CTL[RSS]=0x0, this register is RSVD and cannot be written.
                                                                 If PCIEEP_PHY_GEN3_CTL[RSS]=0x1, this register is for Gen4 data rate and can be written. */
        uint32_t us8etd                : 1;  /**< [ 22: 22](R/W/H) Upstream port send 8GT/s EQ TS2 disable. The base spec defines that USP can
                                                                 optionally send 8GT EQ TS2 and it means USP can set DSP TxPreset value in Gen4
                                                                 Data Rate. If this register set to 0, USP sends 8GT EQ TS2. If this register
                                                                 set to 1, USP does not send 8GT EQ TS2. This applies to upstream ports only.
                                                                 No Function for downstream ports.
                                                                 Note: When CX_GEN4_SPEED, this register is shadow register for Gen3 and Gen4 data
                                                                 rate. If PCIEEP_PHY_GEN3_CTL[RSS]=0x0, this register is RSVD and cannot be written.
                                                                 If PCIEEP_PHY_GEN3_CTL[RSS]=0x1, this register is for Gen4 data rate and can be written. */
        uint32_t eiedd                 : 1;  /**< [ 23: 23](R/W) Eq InvalidRequest and RxEqEval different time assertion disable.  Disable the assertion of
                                                                 Eq InvalidRequest and RxEqEval at different time. */
        uint32_t rss                   : 2;  /**< [ 25: 24](R/W) Rate Shadow Select. This register value decide the Data Rate of shadow register.
                                                                 0x0 = Gen3 Data Rate is selected for shadow register.
                                                                 0x1 = Gen4 Data Rate is selected for shadow register.
                                                                 0x2 = Gen5 Data Rate is selected for shadow register.
                                                                 0x3 = Reserved.

                                                                 The following shadow registers are controlled by this field.
                                                                 _ PCIEEP_PHY_GEN3_CTL[EP2P3D].
                                                                 _ PCIEEP_PHY_GEN3_CTL[RXEQ_PH01_EN].
                                                                 _ PCIEEP_PHY_GEN3_CTL[AED].
                                                                 _ PCIEEP_PHY_GEN3_CTL[US8ETD].
                                                                 _ PCIEEP_GEN3_EQ_CTL[FM].
                                                                 _ PCIEEP_GEN3_EQ_CTL[BT].
                                                                 _ PCIEEP_GEN3_EQ_CTL[P23TD].
                                                                 _ PCIEEP_GEN3_EQ_CTL[PRV].
                                                                 _ PCIEEP_GEN3_EQ_CTL[IIF].
                                                                 _ PCIEEP_GEN3_EQ_CTL[EQ_PSET_REQ]. */
        uint32_t reserved_26_31        : 6;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_phy_gen3_ctl_s cn; */
};
typedef union cavm_pcieepx_phy_gen3_ctl cavm_pcieepx_phy_gen3_ctl_t;

static inline uint64_t CAVM_PCIEEPX_PHY_GEN3_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_PHY_GEN3_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x890 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x890 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x890 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x890 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_PHY_GEN3_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_PHY_GEN3_CTL(a) cavm_pcieepx_phy_gen3_ctl_t
#define bustype_CAVM_PCIEEPX_PHY_GEN3_CTL(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_PHY_GEN3_CTL(a) "PCIEEPX_PHY_GEN3_CTL"
#define busnum_CAVM_PCIEEPX_PHY_GEN3_CTL(a) (a)
#define arguments_CAVM_PCIEEPX_PHY_GEN3_CTL(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_phy_intop_ctl
 *
 * PHY Interoperability Control Register
 * This register is reserved for internal use.
 * You should not write to this register and change the default unless specifically
 * instructed by Synopsys support.
 */
union cavm_pcieepx_phy_intop_ctl
{
    uint32_t u;
    struct cavm_pcieepx_phy_intop_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_18_31        : 14;
        uint32_t phy_rst_timer         : 6;  /**< [ 17: 12](R/W) The number of aux clock cyc,es the PHY reset is asserted.
                                                                 0x0 = Zero cycles.
                                                                 0x1 = 1 cycle.

                                                                 0x3f = 63 cycles. */
        uint32_t p2nobeacon_en         : 1;  /**< [ 11: 11](RO) P2 NoBeacon Enable (Not Supported). */
        uint32_t l1_clk_sel            : 1;  /**< [ 10: 10](R/W) L1 clock control bit.
                                                                   0 = Controller requests aux_clk switch and core_clk gating in L1.
                                                                   1 = Controller does not request aux_clk switch and core_clk gating in L1. */
        uint32_t l1_nowait_p1          : 1;  /**< [  9:  9](R/W) L1 entry control bit. This field is reserved for internal use. */
        uint32_t l1sub_exit_mode       : 1;  /**< [  8:  8](R/W) L1 exit control using phy_mac_pclkack_n.
                                                                   0 = Core waits for the PHY to assert phy_mac_pclkack_n before exiting L1.
                                                                   1 = Core exits L1 without waiting for the PHY to assert phy_mac_pclkack_n. */
        uint32_t reserved_7            : 1;
        uint32_t rxstby_ctl            : 7;  /**< [  6:  0](R/W) Rxstandby control. Bits 0..5 determine if the controller asserts the RxStandby signal
                                                                 (mac_phy_rxstandby) in the indicated condition. Bit 6 enables the controller
                                                                 to perform the RxStandby/RxStandbyStatus handshake.
                                                                   0x0 = Rx EIOS and subsequent T TX-IDLE-MIN.
                                                                   0x1 = Rate Change.
                                                                   0x2 = Inactive lane for upconfigure/downconfigure.
                                                                   0x3 = PowerDown = P1orP2.
                                                                   0x4 = RxL0s.Idle.
                                                                   0x5 = EI Infer in L0.
                                                                   0x6 = Execute RxStandby/RxStandbyStatus Handshake. */
#else /* Word 0 - Little Endian */
        uint32_t rxstby_ctl            : 7;  /**< [  6:  0](R/W) Rxstandby control. Bits 0..5 determine if the controller asserts the RxStandby signal
                                                                 (mac_phy_rxstandby) in the indicated condition. Bit 6 enables the controller
                                                                 to perform the RxStandby/RxStandbyStatus handshake.
                                                                   0x0 = Rx EIOS and subsequent T TX-IDLE-MIN.
                                                                   0x1 = Rate Change.
                                                                   0x2 = Inactive lane for upconfigure/downconfigure.
                                                                   0x3 = PowerDown = P1orP2.
                                                                   0x4 = RxL0s.Idle.
                                                                   0x5 = EI Infer in L0.
                                                                   0x6 = Execute RxStandby/RxStandbyStatus Handshake. */
        uint32_t reserved_7            : 1;
        uint32_t l1sub_exit_mode       : 1;  /**< [  8:  8](R/W) L1 exit control using phy_mac_pclkack_n.
                                                                   0 = Core waits for the PHY to assert phy_mac_pclkack_n before exiting L1.
                                                                   1 = Core exits L1 without waiting for the PHY to assert phy_mac_pclkack_n. */
        uint32_t l1_nowait_p1          : 1;  /**< [  9:  9](R/W) L1 entry control bit. This field is reserved for internal use. */
        uint32_t l1_clk_sel            : 1;  /**< [ 10: 10](R/W) L1 clock control bit.
                                                                   0 = Controller requests aux_clk switch and core_clk gating in L1.
                                                                   1 = Controller does not request aux_clk switch and core_clk gating in L1. */
        uint32_t p2nobeacon_en         : 1;  /**< [ 11: 11](RO) P2 NoBeacon Enable (Not Supported). */
        uint32_t phy_rst_timer         : 6;  /**< [ 17: 12](R/W) The number of aux clock cyc,es the PHY reset is asserted.
                                                                 0x0 = Zero cycles.
                                                                 0x1 = 1 cycle.

                                                                 0x3f = 63 cycles. */
        uint32_t reserved_18_31        : 14;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_phy_intop_ctl_s cn; */
};
typedef union cavm_pcieepx_phy_intop_ctl cavm_pcieepx_phy_intop_ctl_t;

static inline uint64_t CAVM_PCIEEPX_PHY_INTOP_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_PHY_INTOP_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8c4 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x8c4 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8c4 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8c4 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_PHY_INTOP_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_PHY_INTOP_CTL(a) cavm_pcieepx_phy_intop_ctl_t
#define bustype_CAVM_PCIEEPX_PHY_INTOP_CTL(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_PHY_INTOP_CTL(a) "PCIEEPX_PHY_INTOP_CTL"
#define busnum_CAVM_PCIEEPX_PHY_INTOP_CTL(a) (a)
#define arguments_CAVM_PCIEEPX_PHY_INTOP_CTL(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_phy_status
 *
 * PCIe EP PF PHY Status Register
 */
union cavm_pcieepx_phy_status
{
    uint32_t u;
    struct cavm_pcieepx_phy_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t phy_stat              : 32; /**< [ 31:  0](RO/H) PHY status.  Sideband control signaling (not supported). */
#else /* Word 0 - Little Endian */
        uint32_t phy_stat              : 32; /**< [ 31:  0](RO/H) PHY status.  Sideband control signaling (not supported). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_phy_status_s cn; */
};
typedef union cavm_pcieepx_phy_status cavm_pcieepx_phy_status_t;

static inline uint64_t CAVM_PCIEEPX_PHY_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_PHY_STATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x810 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x810 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x810 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x810 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_PHY_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_PHY_STATUS(a) cavm_pcieepx_phy_status_t
#define bustype_CAVM_PCIEEPX_PHY_STATUS(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_PHY_STATUS(a) "PCIEEPX_PHY_STATUS"
#define busnum_CAVM_PCIEEPX_PHY_STATUS(a) (a)
#define arguments_CAVM_PCIEEPX_PHY_STATUS(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_pipe_rel
 *
 * PCIe EP Pipe Related Register
 */
union cavm_pcieepx_pipe_rel
{
    uint32_t u;
    struct cavm_pcieepx_pipe_rel_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_9_31         : 23;
        uint32_t pipe_garbage_dm       : 1;  /**< [  8:  8](R/W) PIPE garbage date mode.
                                                                 0 = PIPE spec compliant mode. The MAC discards any symbols received
                                                                 after the electrical idle ordered-set until RxValid is deasserted.

                                                                 1 = Special PHY support mode. The MAC discards any symbols received
                                                                 after the electrical idle ordered-set until any of the following
                                                                 three conditions are true:
                                                                   * RxValid is deasserted.
                                                                   * a valid RxStartBlock is received at 128b/130b encoding.
                                                                   * a valid COM symbol is received at 8b/10b encoding. */
        uint32_t tx_msg_wbuf_depth     : 4;  /**< [  7:  4](RO/H) Tx message bus write buffer depth. */
        uint32_t rx_msg_wbuf_depth     : 4;  /**< [  3:  0](RO/H) Rx message bus write buffer depth. */
#else /* Word 0 - Little Endian */
        uint32_t rx_msg_wbuf_depth     : 4;  /**< [  3:  0](RO/H) Rx message bus write buffer depth. */
        uint32_t tx_msg_wbuf_depth     : 4;  /**< [  7:  4](RO/H) Tx message bus write buffer depth. */
        uint32_t pipe_garbage_dm       : 1;  /**< [  8:  8](R/W) PIPE garbage date mode.
                                                                 0 = PIPE spec compliant mode. The MAC discards any symbols received
                                                                 after the electrical idle ordered-set until RxValid is deasserted.

                                                                 1 = Special PHY support mode. The MAC discards any symbols received
                                                                 after the electrical idle ordered-set until any of the following
                                                                 three conditions are true:
                                                                   * RxValid is deasserted.
                                                                   * a valid RxStartBlock is received at 128b/130b encoding.
                                                                   * a valid COM symbol is received at 8b/10b encoding. */
        uint32_t reserved_9_31         : 23;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_pipe_rel_s cn; */
};
typedef union cavm_pcieepx_pipe_rel cavm_pcieepx_pipe_rel_t;

static inline uint64_t CAVM_PCIEEPX_PIPE_REL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_PIPE_REL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0xb90 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0xb90 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0xb90 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0xb90 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_PIPE_REL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_PIPE_REL(a) cavm_pcieepx_pipe_rel_t
#define bustype_CAVM_PCIEEPX_PIPE_REL(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_PIPE_REL(a) "PCIEEPX_PIPE_REL"
#define busnum_CAVM_PCIEEPX_PIPE_REL(a) (a)
#define arguments_CAVM_PCIEEPX_PIPE_REL(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_pl16g_cap
 *
 * PCIe EP 16.0 GT/s Capabilities Register
 * Physical Layer 16.0 GT/s Capabilities exists for PF0 only.
 */
union cavm_pcieepx_pl16g_cap
{
    uint32_t u;
    struct cavm_pcieepx_pl16g_cap_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_pl16g_cap_s cn; */
};
typedef union cavm_pcieepx_pl16g_cap cavm_pcieepx_pl16g_cap_t;

static inline uint64_t CAVM_PCIEEPX_PL16G_CAP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_PL16G_CAP(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x18c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x18c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x18c + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x18c + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_PL16G_CAP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_PL16G_CAP(a) cavm_pcieepx_pl16g_cap_t
#define bustype_CAVM_PCIEEPX_PL16G_CAP(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_PL16G_CAP(a) "PCIEEPX_PL16G_CAP"
#define busnum_CAVM_PCIEEPX_PL16G_CAP(a) (a)
#define arguments_CAVM_PCIEEPX_PL16G_CAP(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_pl16g_ctl
 *
 * PCIe EP 16.0 GT/s Control Register
 * Physical Layer 16.0 GT/s Control exists for PF0 only.
 */
union cavm_pcieepx_pl16g_ctl
{
    uint32_t u;
    struct cavm_pcieepx_pl16g_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_pl16g_ctl_s cn; */
};
typedef union cavm_pcieepx_pl16g_ctl cavm_pcieepx_pl16g_ctl_t;

static inline uint64_t CAVM_PCIEEPX_PL16G_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_PL16G_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x190 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x190 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x190 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x190 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_PL16G_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_PL16G_CTL(a) cavm_pcieepx_pl16g_ctl_t
#define bustype_CAVM_PCIEEPX_PL16G_CTL(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_PL16G_CTL(a) "PCIEEPX_PL16G_CTL"
#define busnum_CAVM_PCIEEPX_PL16G_CTL(a) (a)
#define arguments_CAVM_PCIEEPX_PL16G_CTL(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_pl16g_eq_ctl0123
 *
 * PCIe EP 16.0 GT/s Lane Equalization Control for Lane 0-3 Register
 * This register is for debug and diagnostics.
 * This register exists for PF0 only.
 */
union cavm_pcieepx_pl16g_eq_ctl0123
{
    uint32_t u;
    struct cavm_pcieepx_pl16g_eq_ctl0123_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t l3utp                 : 4;  /**< [ 31: 28](RO/H) Captured transmit hint which will be used during GEN3 Phase 0/1. */
        uint32_t l3dtp                 : 4;  /**< [ 27: 24](RO) Reserved. */
        uint32_t l2utp                 : 4;  /**< [ 23: 20](RO/H) Captured transmit hint which will be used during GEN3 Phase 0/1. */
        uint32_t l2dtp                 : 4;  /**< [ 19: 16](RO) Reserved. */
        uint32_t l1utp                 : 4;  /**< [ 15: 12](RO/H) Captured transmit hint which will be used during GEN3 Phase 0/1. */
        uint32_t l1dtp                 : 4;  /**< [ 11:  8](RO) Reserved. */
        uint32_t l0utp                 : 4;  /**< [  7:  4](RO/H) Captured transmit hint which will be used during GEN3 Phase 0/1. */
        uint32_t l0dtp                 : 4;  /**< [  3:  0](RO) Reserved. */
#else /* Word 0 - Little Endian */
        uint32_t l0dtp                 : 4;  /**< [  3:  0](RO) Reserved. */
        uint32_t l0utp                 : 4;  /**< [  7:  4](RO/H) Captured transmit hint which will be used during GEN3 Phase 0/1. */
        uint32_t l1dtp                 : 4;  /**< [ 11:  8](RO) Reserved. */
        uint32_t l1utp                 : 4;  /**< [ 15: 12](RO/H) Captured transmit hint which will be used during GEN3 Phase 0/1. */
        uint32_t l2dtp                 : 4;  /**< [ 19: 16](RO) Reserved. */
        uint32_t l2utp                 : 4;  /**< [ 23: 20](RO/H) Captured transmit hint which will be used during GEN3 Phase 0/1. */
        uint32_t l3dtp                 : 4;  /**< [ 27: 24](RO) Reserved. */
        uint32_t l3utp                 : 4;  /**< [ 31: 28](RO/H) Captured transmit hint which will be used during GEN3 Phase 0/1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_pl16g_eq_ctl0123_s cn; */
};
typedef union cavm_pcieepx_pl16g_eq_ctl0123 cavm_pcieepx_pl16g_eq_ctl0123_t;

static inline uint64_t CAVM_PCIEEPX_PL16G_EQ_CTL0123(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_PL16G_EQ_CTL0123(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x1a8 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x1a8 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x1a8 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x1a8 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_PL16G_EQ_CTL0123", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_PL16G_EQ_CTL0123(a) cavm_pcieepx_pl16g_eq_ctl0123_t
#define bustype_CAVM_PCIEEPX_PL16G_EQ_CTL0123(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_PL16G_EQ_CTL0123(a) "PCIEEPX_PL16G_EQ_CTL0123"
#define busnum_CAVM_PCIEEPX_PL16G_EQ_CTL0123(a) (a)
#define arguments_CAVM_PCIEEPX_PL16G_EQ_CTL0123(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_pl16g_ext_cap_hdr
 *
 * PCIe EP Physical Layer 16.0 GT/s Extended Capability Header Register
 * Physical Layer 16.0 GT/s Extended Capability Header exists for PF0 only.
 */
union cavm_pcieepx_pl16g_ext_cap_hdr
{
    uint32_t u;
    struct cavm_pcieepx_pl16g_ext_cap_hdr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t nco                   : 12; /**< [ 31: 20](RO/WRSL) Next capability offset.
                                                                 Writable through PEM()_CFG_TBL(). */
        uint32_t cv                    : 4;  /**< [ 19: 16](RO/WRSL) Capability version.
                                                                 Writable through PEM()_CFG_TBL(). */
        uint32_t pcieec                : 16; /**< [ 15:  0](RO/WRSL) PCI Express extended capability.
                                                                 Writable through PEM()_CFG_TBL(). */
#else /* Word 0 - Little Endian */
        uint32_t pcieec                : 16; /**< [ 15:  0](RO/WRSL) PCI Express extended capability.
                                                                 Writable through PEM()_CFG_TBL(). */
        uint32_t cv                    : 4;  /**< [ 19: 16](RO/WRSL) Capability version.
                                                                 Writable through PEM()_CFG_TBL(). */
        uint32_t nco                   : 12; /**< [ 31: 20](RO/WRSL) Next capability offset.
                                                                 Writable through PEM()_CFG_TBL(). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_pl16g_ext_cap_hdr_s cn; */
};
typedef union cavm_pcieepx_pl16g_ext_cap_hdr cavm_pcieepx_pl16g_ext_cap_hdr_t;

static inline uint64_t CAVM_PCIEEPX_PL16G_EXT_CAP_HDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_PL16G_EXT_CAP_HDR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x188 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x188 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x188 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x188 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_PL16G_EXT_CAP_HDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_PL16G_EXT_CAP_HDR(a) cavm_pcieepx_pl16g_ext_cap_hdr_t
#define bustype_CAVM_PCIEEPX_PL16G_EXT_CAP_HDR(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_PL16G_EXT_CAP_HDR(a) "PCIEEPX_PL16G_EXT_CAP_HDR"
#define busnum_CAVM_PCIEEPX_PL16G_EXT_CAP_HDR(a) (a)
#define arguments_CAVM_PCIEEPX_PL16G_EXT_CAP_HDR(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_pl16g_fret_dpar_stat
 *
 * PCIe EP 16.0 GT/s First Retimer Data Parity Mismatch Status Register
 * Physical Layer 16.0 GT/s First Retimer Data Parity Mismatch Status exists for PF0 only.
 */
union cavm_pcieepx_pl16g_fret_dpar_stat
{
    uint32_t u;
    struct cavm_pcieepx_pl16g_fret_dpar_stat_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t frt_dp_status         : 16; /**< [ 15:  0](R/W1C/H) First retimer data parity mismatch status. */
#else /* Word 0 - Little Endian */
        uint32_t frt_dp_status         : 16; /**< [ 15:  0](R/W1C/H) First retimer data parity mismatch status. */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_pl16g_fret_dpar_stat_s cn; */
};
typedef union cavm_pcieepx_pl16g_fret_dpar_stat cavm_pcieepx_pl16g_fret_dpar_stat_t;

static inline uint64_t CAVM_PCIEEPX_PL16G_FRET_DPAR_STAT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_PL16G_FRET_DPAR_STAT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x19c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x19c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x19c + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x19c + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_PL16G_FRET_DPAR_STAT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_PL16G_FRET_DPAR_STAT(a) cavm_pcieepx_pl16g_fret_dpar_stat_t
#define bustype_CAVM_PCIEEPX_PL16G_FRET_DPAR_STAT(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_PL16G_FRET_DPAR_STAT(a) "PCIEEPX_PL16G_FRET_DPAR_STAT"
#define busnum_CAVM_PCIEEPX_PL16G_FRET_DPAR_STAT(a) (a)
#define arguments_CAVM_PCIEEPX_PL16G_FRET_DPAR_STAT(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_pl16g_lc_dpar_stat
 *
 * PCIe EP 16.0 GT/s Local Data Parity Mismatch Status Register
 * Physical Layer 16.0 GT/s Local Data Parity Mismatch Status exists for PF0 only.
 */
union cavm_pcieepx_pl16g_lc_dpar_stat
{
    uint32_t u;
    struct cavm_pcieepx_pl16g_lc_dpar_stat_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t ldp_status            : 16; /**< [ 15:  0](R/W1C/H) Local data parity mismatch status. */
#else /* Word 0 - Little Endian */
        uint32_t ldp_status            : 16; /**< [ 15:  0](R/W1C/H) Local data parity mismatch status. */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_pl16g_lc_dpar_stat_s cn; */
};
typedef union cavm_pcieepx_pl16g_lc_dpar_stat cavm_pcieepx_pl16g_lc_dpar_stat_t;

static inline uint64_t CAVM_PCIEEPX_PL16G_LC_DPAR_STAT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_PL16G_LC_DPAR_STAT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x198 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x198 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x198 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x198 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_PL16G_LC_DPAR_STAT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_PL16G_LC_DPAR_STAT(a) cavm_pcieepx_pl16g_lc_dpar_stat_t
#define bustype_CAVM_PCIEEPX_PL16G_LC_DPAR_STAT(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_PL16G_LC_DPAR_STAT(a) "PCIEEPX_PL16G_LC_DPAR_STAT"
#define busnum_CAVM_PCIEEPX_PL16G_LC_DPAR_STAT(a) (a)
#define arguments_CAVM_PCIEEPX_PL16G_LC_DPAR_STAT(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_pl16g_sret_dpar_stat
 *
 * PCIe EP 16.0 GT/s Second Retimer Data Parity Mismatch Status Register
 * Physical Layer 16.0 GT/s Second Retimer Data Parity Mismatch Status exists for PF0 only.
 */
union cavm_pcieepx_pl16g_sret_dpar_stat
{
    uint32_t u;
    struct cavm_pcieepx_pl16g_sret_dpar_stat_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t srt_dp_status         : 16; /**< [ 15:  0](R/W1C/H) Second retimer data parity mismatch status. */
#else /* Word 0 - Little Endian */
        uint32_t srt_dp_status         : 16; /**< [ 15:  0](R/W1C/H) Second retimer data parity mismatch status. */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_pl16g_sret_dpar_stat_s cn; */
};
typedef union cavm_pcieepx_pl16g_sret_dpar_stat cavm_pcieepx_pl16g_sret_dpar_stat_t;

static inline uint64_t CAVM_PCIEEPX_PL16G_SRET_DPAR_STAT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_PL16G_SRET_DPAR_STAT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x1a0 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x1a0 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x1a0 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x1a0 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_PL16G_SRET_DPAR_STAT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_PL16G_SRET_DPAR_STAT(a) cavm_pcieepx_pl16g_sret_dpar_stat_t
#define bustype_CAVM_PCIEEPX_PL16G_SRET_DPAR_STAT(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_PL16G_SRET_DPAR_STAT(a) "PCIEEPX_PL16G_SRET_DPAR_STAT"
#define busnum_CAVM_PCIEEPX_PL16G_SRET_DPAR_STAT(a) (a)
#define arguments_CAVM_PCIEEPX_PL16G_SRET_DPAR_STAT(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_pl16g_status
 *
 * PCIe EP 16.0 GT/s Status Register
 * Physical Layer 16.0 GT/s Status exists for PF0 only.
 */
union cavm_pcieepx_pl16g_status
{
    uint32_t u;
    struct cavm_pcieepx_pl16g_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_5_31         : 27;
        uint32_t leq_req               : 1;  /**< [  4:  4](R/W1C) Link equalization request 16.0 GT/s
                                                                 This field is W1C only for PF0.  All other functions a write has no affect. */
        uint32_t eq_cpl_p3             : 1;  /**< [  3:  3](RO/H) Equalization 16.0 GT/s phase 3 successful. */
        uint32_t eq_cpl_p2             : 1;  /**< [  2:  2](RO/H) Equalization 16.0 GT/s phase 3 successful. */
        uint32_t eq_cpl_p1             : 1;  /**< [  1:  1](RO/H) Equalization 16.0 GT/s phase 3 successful. */
        uint32_t eq_cpl                : 1;  /**< [  0:  0](RO/H) Equalization 16.0 GT/s complete. */
#else /* Word 0 - Little Endian */
        uint32_t eq_cpl                : 1;  /**< [  0:  0](RO/H) Equalization 16.0 GT/s complete. */
        uint32_t eq_cpl_p1             : 1;  /**< [  1:  1](RO/H) Equalization 16.0 GT/s phase 3 successful. */
        uint32_t eq_cpl_p2             : 1;  /**< [  2:  2](RO/H) Equalization 16.0 GT/s phase 3 successful. */
        uint32_t eq_cpl_p3             : 1;  /**< [  3:  3](RO/H) Equalization 16.0 GT/s phase 3 successful. */
        uint32_t leq_req               : 1;  /**< [  4:  4](R/W1C) Link equalization request 16.0 GT/s
                                                                 This field is W1C only for PF0.  All other functions a write has no affect. */
        uint32_t reserved_5_31         : 27;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_pl16g_status_s cn; */
};
typedef union cavm_pcieepx_pl16g_status cavm_pcieepx_pl16g_status_t;

static inline uint64_t CAVM_PCIEEPX_PL16G_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_PL16G_STATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x194 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x194 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x194 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x194 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_PL16G_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_PL16G_STATUS(a) cavm_pcieepx_pl16g_status_t
#define bustype_CAVM_PCIEEPX_PL16G_STATUS(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_PL16G_STATUS(a) "PCIEEPX_PL16G_STATUS"
#define busnum_CAVM_PCIEEPX_PL16G_STATUS(a) (a)
#define arguments_CAVM_PCIEEPX_PL16G_STATUS(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_pl32g_cap
 *
 * PCIe EP 32.0 GT/s Capabilities Register
 */
union cavm_pcieepx_pl32g_cap
{
    uint32_t u;
    struct cavm_pcieepx_pl32g_cap_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t mod_ts_rsvd_use_supp  : 5;  /**< [ 15: 11](RO) Modified TS reserved usage modes.
                                                                 Reserved bits for future usage modes. */
        uint32_t mod_ts_alt_prot_supp  : 1;  /**< [ 10: 10](RO) Modified (alternate protocol) TS usage mode 2 supported. */
        uint32_t mod_ts_tset_msg_supp  : 1;  /**< [  9:  9](RO) Modified (vendor specific training set) TS usage mode 1 supported. */
        uint32_t mod_ts_pcie_supp      : 1;  /**< [  8:  8](RO/WRSL) Modified (vendor specific) TS usage mode 0 supported. */
        uint32_t reserved_2_7          : 6;
        uint32_t no_eq_need_supp       : 1;  /**< [  1:  1](RO/WRSL) No equalization needed supported. */
        uint32_t eq_byp_hirate         : 1;  /**< [  0:  0](RO/WRSL) Equalization bypass to highest rate supported. */
#else /* Word 0 - Little Endian */
        uint32_t eq_byp_hirate         : 1;  /**< [  0:  0](RO/WRSL) Equalization bypass to highest rate supported. */
        uint32_t no_eq_need_supp       : 1;  /**< [  1:  1](RO/WRSL) No equalization needed supported. */
        uint32_t reserved_2_7          : 6;
        uint32_t mod_ts_pcie_supp      : 1;  /**< [  8:  8](RO/WRSL) Modified (vendor specific) TS usage mode 0 supported. */
        uint32_t mod_ts_tset_msg_supp  : 1;  /**< [  9:  9](RO) Modified (vendor specific training set) TS usage mode 1 supported. */
        uint32_t mod_ts_alt_prot_supp  : 1;  /**< [ 10: 10](RO) Modified (alternate protocol) TS usage mode 2 supported. */
        uint32_t mod_ts_rsvd_use_supp  : 5;  /**< [ 15: 11](RO) Modified TS reserved usage modes.
                                                                 Reserved bits for future usage modes. */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_pl32g_cap_s cn; */
};
typedef union cavm_pcieepx_pl32g_cap cavm_pcieepx_pl32g_cap_t;

static inline uint64_t CAVM_PCIEEPX_PL32G_CAP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_PL32G_CAP(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x1c8 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x1c8 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x1c8 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x1c8 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_PL32G_CAP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_PL32G_CAP(a) cavm_pcieepx_pl32g_cap_t
#define bustype_CAVM_PCIEEPX_PL32G_CAP(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_PL32G_CAP(a) "PCIEEPX_PL32G_CAP"
#define busnum_CAVM_PCIEEPX_PL32G_CAP(a) (a)
#define arguments_CAVM_PCIEEPX_PL32G_CAP(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_pl32g_ctl
 *
 * PCIe EP 32.0 GT/s Control Register
 */
union cavm_pcieepx_pl32g_ctl
{
    uint32_t u;
    struct cavm_pcieepx_pl32g_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_11_31        : 21;
        uint32_t mod_ts_use_mode_sel   : 3;  /**< [ 10:  8](RO) Modified TS usage mode selected (not supported). */
        uint32_t reserved_2_7          : 6;
        uint32_t no_eq_need_dis        : 1;  /**< [  1:  1](R/W) No equalization needed disable. */
        uint32_t eq_byp_hirate_dis     : 1;  /**< [  0:  0](R/W) Equalization bypass to highest rate disable. */
#else /* Word 0 - Little Endian */
        uint32_t eq_byp_hirate_dis     : 1;  /**< [  0:  0](R/W) Equalization bypass to highest rate disable. */
        uint32_t no_eq_need_dis        : 1;  /**< [  1:  1](R/W) No equalization needed disable. */
        uint32_t reserved_2_7          : 6;
        uint32_t mod_ts_use_mode_sel   : 3;  /**< [ 10:  8](RO) Modified TS usage mode selected (not supported). */
        uint32_t reserved_11_31        : 21;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_pl32g_ctl_s cn; */
};
typedef union cavm_pcieepx_pl32g_ctl cavm_pcieepx_pl32g_ctl_t;

static inline uint64_t CAVM_PCIEEPX_PL32G_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_PL32G_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x1cc + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x1cc + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x1cc + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x1cc + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_PL32G_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_PL32G_CTL(a) cavm_pcieepx_pl32g_ctl_t
#define bustype_CAVM_PCIEEPX_PL32G_CTL(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_PL32G_CTL(a) "PCIEEPX_PL32G_CTL"
#define busnum_CAVM_PCIEEPX_PL32G_CTL(a) (a)
#define arguments_CAVM_PCIEEPX_PL32G_CTL(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_pl32g_eq_ctl0123
 *
 * PCIe EP 32.0 GT/s Equalization Control Lane 0/12/3 Register
 */
union cavm_pcieepx_pl32g_eq_ctl0123
{
    uint32_t u;
    struct cavm_pcieepx_pl32g_eq_ctl0123_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t l3utp                 : 4;  /**< [ 31: 28](RO) Upstream port 32.0 GT/s transmitter preset 3. */
        uint32_t l3dtp                 : 4;  /**< [ 27: 24](RO) Downstream port 32.0 GT/s transmitter preset 3. */
        uint32_t l2utp                 : 4;  /**< [ 23: 20](RO) Upstream port 32.0 GT/s transmitter preset 2. */
        uint32_t l2dtp                 : 4;  /**< [ 19: 16](RO) Downstream port 32.0 GT/s transmitter preset 2. */
        uint32_t l1utp                 : 4;  /**< [ 15: 12](RO) Upstream port 32.0 GT/s transmitter preset 1. */
        uint32_t l1dtp                 : 4;  /**< [ 11:  8](RO) Downstream port 32.0 GT/s transmitter preset 1. */
        uint32_t l0utp                 : 4;  /**< [  7:  4](RO) Upstream port 32.0 GT/s transmitter preset 0. */
        uint32_t l0dtp                 : 4;  /**< [  3:  0](RO) Downstream port 32.0 GT/s transmitter preset 0. */
#else /* Word 0 - Little Endian */
        uint32_t l0dtp                 : 4;  /**< [  3:  0](RO) Downstream port 32.0 GT/s transmitter preset 0. */
        uint32_t l0utp                 : 4;  /**< [  7:  4](RO) Upstream port 32.0 GT/s transmitter preset 0. */
        uint32_t l1dtp                 : 4;  /**< [ 11:  8](RO) Downstream port 32.0 GT/s transmitter preset 1. */
        uint32_t l1utp                 : 4;  /**< [ 15: 12](RO) Upstream port 32.0 GT/s transmitter preset 1. */
        uint32_t l2dtp                 : 4;  /**< [ 19: 16](RO) Downstream port 32.0 GT/s transmitter preset 2. */
        uint32_t l2utp                 : 4;  /**< [ 23: 20](RO) Upstream port 32.0 GT/s transmitter preset 2. */
        uint32_t l3dtp                 : 4;  /**< [ 27: 24](RO) Downstream port 32.0 GT/s transmitter preset 3. */
        uint32_t l3utp                 : 4;  /**< [ 31: 28](RO) Upstream port 32.0 GT/s transmitter preset 3. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_pl32g_eq_ctl0123_s cn; */
};
typedef union cavm_pcieepx_pl32g_eq_ctl0123 cavm_pcieepx_pl32g_eq_ctl0123_t;

static inline uint64_t CAVM_PCIEEPX_PL32G_EQ_CTL0123(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_PL32G_EQ_CTL0123(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x1e4 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x1e4 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x1e4 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x1e4 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_PL32G_EQ_CTL0123", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_PL32G_EQ_CTL0123(a) cavm_pcieepx_pl32g_eq_ctl0123_t
#define bustype_CAVM_PCIEEPX_PL32G_EQ_CTL0123(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_PL32G_EQ_CTL0123(a) "PCIEEPX_PL32G_EQ_CTL0123"
#define busnum_CAVM_PCIEEPX_PL32G_EQ_CTL0123(a) (a)
#define arguments_CAVM_PCIEEPX_PL32G_EQ_CTL0123(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_pl32g_ext_cap_hdr
 *
 * PCIe EP Physical Layer 32.0 GT/s Extended Capability Header Register
 */
union cavm_pcieepx_pl32g_ext_cap_hdr
{
    uint32_t u;
    struct cavm_pcieepx_pl32g_ext_cap_hdr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t nco                   : 12; /**< [ 31: 20](RO/WRSL) Next capability offset.
                                                                 Writable through PEM()_CFG_TBL(). */
        uint32_t cv                    : 4;  /**< [ 19: 16](RO/WRSL) Capability version.
                                                                 Writable through PEM()_CFG_TBL(). */
        uint32_t pcieec                : 16; /**< [ 15:  0](RO/WRSL) PCI Express extended capability.
                                                                 Writable through PEM()_CFG_TBL(). */
#else /* Word 0 - Little Endian */
        uint32_t pcieec                : 16; /**< [ 15:  0](RO/WRSL) PCI Express extended capability.
                                                                 Writable through PEM()_CFG_TBL(). */
        uint32_t cv                    : 4;  /**< [ 19: 16](RO/WRSL) Capability version.
                                                                 Writable through PEM()_CFG_TBL(). */
        uint32_t nco                   : 12; /**< [ 31: 20](RO/WRSL) Next capability offset.
                                                                 Writable through PEM()_CFG_TBL(). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_pl32g_ext_cap_hdr_s cn; */
};
typedef union cavm_pcieepx_pl32g_ext_cap_hdr cavm_pcieepx_pl32g_ext_cap_hdr_t;

static inline uint64_t CAVM_PCIEEPX_PL32G_EXT_CAP_HDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_PL32G_EXT_CAP_HDR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x1c4 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x1c4 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x1c4 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x1c4 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_PL32G_EXT_CAP_HDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_PL32G_EXT_CAP_HDR(a) cavm_pcieepx_pl32g_ext_cap_hdr_t
#define bustype_CAVM_PCIEEPX_PL32G_EXT_CAP_HDR(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_PL32G_EXT_CAP_HDR(a) "PCIEEPX_PL32G_EXT_CAP_HDR"
#define busnum_CAVM_PCIEEPX_PL32G_EXT_CAP_HDR(a) (a)
#define arguments_CAVM_PCIEEPX_PL32G_EXT_CAP_HDR(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_pl32g_rmod_ts_data1
 *
 * PCIe EP 32.0 GT/s Received Modified TS Data 1 Register
 */
union cavm_pcieepx_pl32g_rmod_ts_data1
{
    uint32_t u;
    struct cavm_pcieepx_pl32g_rmod_ts_data1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rcvd_mod_ts_vend_id   : 16; /**< [ 31: 16](RO/H) Received Modified TS Vendor ID.
                                                                 If PCIEEP_PL32G_CTL[MOD_TS_USE_MODE_SEL] is set, this field contains the
                                                                 Modified TS Vendor ID field from the Modified TS1/TS2 Ordered Set received.

                                                                 _ Bits \<15:8\> = contain the value of Synbol 10.
                                                                 _ Bits \<7:0\> = contain the value of Synbol 11. */
        uint32_t rcvd_mod_ts_info1     : 13; /**< [ 15:  3](RO/H) Received Modified TS information 1.
                                                                 If PCIEEP_PL32G_CTL[MOD_TS_USE_MODE_SEL] is set, this field contains the
                                                                 Modified TS Information 1 field from the Modified TS1/TS2 ordered set.

                                                                 synopsys documentation looks wrong.
                                                                 _ Bits \<15:8\> = contain the value of Synbol 12.
                                                                 _ Bits \<16:8\> = contain the value of Synbol 13.
                                                                 _ Bits \<7:0\> = contain the value of Synbol 14. */
        uint32_t rcvd_mod_ts_use_mode  : 3;  /**< [  2:  0](RO/H) Received Modified TS Usage Mode.
                                                                 If PCIEEP_PL32G_CTL[MOD_TS_USE_MODE_SEL] is set, this field contains the
                                                                 Modified TS Usage field from the Modified TS/1TS2 Ordered Set. */
#else /* Word 0 - Little Endian */
        uint32_t rcvd_mod_ts_use_mode  : 3;  /**< [  2:  0](RO/H) Received Modified TS Usage Mode.
                                                                 If PCIEEP_PL32G_CTL[MOD_TS_USE_MODE_SEL] is set, this field contains the
                                                                 Modified TS Usage field from the Modified TS/1TS2 Ordered Set. */
        uint32_t rcvd_mod_ts_info1     : 13; /**< [ 15:  3](RO/H) Received Modified TS information 1.
                                                                 If PCIEEP_PL32G_CTL[MOD_TS_USE_MODE_SEL] is set, this field contains the
                                                                 Modified TS Information 1 field from the Modified TS1/TS2 ordered set.

                                                                 synopsys documentation looks wrong.
                                                                 _ Bits \<15:8\> = contain the value of Synbol 12.
                                                                 _ Bits \<16:8\> = contain the value of Synbol 13.
                                                                 _ Bits \<7:0\> = contain the value of Synbol 14. */
        uint32_t rcvd_mod_ts_vend_id   : 16; /**< [ 31: 16](RO/H) Received Modified TS Vendor ID.
                                                                 If PCIEEP_PL32G_CTL[MOD_TS_USE_MODE_SEL] is set, this field contains the
                                                                 Modified TS Vendor ID field from the Modified TS1/TS2 Ordered Set received.

                                                                 _ Bits \<15:8\> = contain the value of Synbol 10.
                                                                 _ Bits \<7:0\> = contain the value of Synbol 11. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_pl32g_rmod_ts_data1_s cn; */
};
typedef union cavm_pcieepx_pl32g_rmod_ts_data1 cavm_pcieepx_pl32g_rmod_ts_data1_t;

static inline uint64_t CAVM_PCIEEPX_PL32G_RMOD_TS_DATA1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_PL32G_RMOD_TS_DATA1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x1d4 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x1d4 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x1d4 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x1d4 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_PL32G_RMOD_TS_DATA1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_PL32G_RMOD_TS_DATA1(a) cavm_pcieepx_pl32g_rmod_ts_data1_t
#define bustype_CAVM_PCIEEPX_PL32G_RMOD_TS_DATA1(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_PL32G_RMOD_TS_DATA1(a) "PCIEEPX_PL32G_RMOD_TS_DATA1"
#define busnum_CAVM_PCIEEPX_PL32G_RMOD_TS_DATA1(a) (a)
#define arguments_CAVM_PCIEEPX_PL32G_RMOD_TS_DATA1(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_pl32g_rmod_ts_data2
 *
 * PCIe EP 32.0 GT/s Received Modified TS Data 2 Register
 */
union cavm_pcieepx_pl32g_rmod_ts_data2
{
    uint32_t u;
    struct cavm_pcieepx_pl32g_rmod_ts_data2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_26_31        : 6;
        uint32_t rcvd_alt_prot_neg_stat : 2; /**< [ 25: 24](RO/H) Alternate Protocol Negotiation Status.  Indicates the status of the Alternate
                                                                 Protocol Negotiation.

                                                                 0x0: Not Supported.
                                                                 0x1: Disabled.
                                                                 0x2: Failed.
                                                                 0x3: Succeeded. */
        uint32_t rcvd_mod_ts_info2     : 24; /**< [ 23:  0](RO/H) Received Modified TS information 2.
                                                                 If PCIEEP_PL32G_CTL[MOD_TS_USE_MODE_SEL] is set, this field contains the
                                                                 Modified TS Information 2 field from the Modified TS1/TS2 ordered set.

                                                                 synopsys documentation looks wrong.
                                                                 _ Bits \<23:16\> = contain the value of Synbol 12.
                                                                 _ Bits \<16:8\> = contain the value of Synbol 13.
                                                                 _ Bits \<7:0\> = contain the value of Synbol 14. */
#else /* Word 0 - Little Endian */
        uint32_t rcvd_mod_ts_info2     : 24; /**< [ 23:  0](RO/H) Received Modified TS information 2.
                                                                 If PCIEEP_PL32G_CTL[MOD_TS_USE_MODE_SEL] is set, this field contains the
                                                                 Modified TS Information 2 field from the Modified TS1/TS2 ordered set.

                                                                 synopsys documentation looks wrong.
                                                                 _ Bits \<23:16\> = contain the value of Synbol 12.
                                                                 _ Bits \<16:8\> = contain the value of Synbol 13.
                                                                 _ Bits \<7:0\> = contain the value of Synbol 14. */
        uint32_t rcvd_alt_prot_neg_stat : 2; /**< [ 25: 24](RO/H) Alternate Protocol Negotiation Status.  Indicates the status of the Alternate
                                                                 Protocol Negotiation.

                                                                 0x0: Not Supported.
                                                                 0x1: Disabled.
                                                                 0x2: Failed.
                                                                 0x3: Succeeded. */
        uint32_t reserved_26_31        : 6;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_pl32g_rmod_ts_data2_s cn; */
};
typedef union cavm_pcieepx_pl32g_rmod_ts_data2 cavm_pcieepx_pl32g_rmod_ts_data2_t;

static inline uint64_t CAVM_PCIEEPX_PL32G_RMOD_TS_DATA2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_PL32G_RMOD_TS_DATA2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x1d8 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x1d8 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x1d8 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x1d8 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_PL32G_RMOD_TS_DATA2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_PL32G_RMOD_TS_DATA2(a) cavm_pcieepx_pl32g_rmod_ts_data2_t
#define bustype_CAVM_PCIEEPX_PL32G_RMOD_TS_DATA2(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_PL32G_RMOD_TS_DATA2(a) "PCIEEPX_PL32G_RMOD_TS_DATA2"
#define busnum_CAVM_PCIEEPX_PL32G_RMOD_TS_DATA2(a) (a)
#define arguments_CAVM_PCIEEPX_PL32G_RMOD_TS_DATA2(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_pl32g_status
 *
 * PCIe EP 32.0 GT/s Status Register
 */
union cavm_pcieepx_pl32g_status
{
    uint32_t u;
    struct cavm_pcieepx_pl32g_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_11_31        : 21;
        uint32_t no_eq_needed_rcvd     : 1;  /**< [ 10: 10](RO/H) No Equalization Needed Received.
                                                                 This bit is Set when this Port either received a Modified
                                                                 TS1/TS2 with the No Equalization Needed bit Set or
                                                                 received a non-modified TS1/TS2 was received with the
                                                                 No Equalization Needed encoding. This bit is cleared on DL_Down. */
        uint32_t tx_precode_req        : 1;  /**< [  9:  9](R/W) Transmitter Precode Request.
                                                                 When set, this port will request the transmitter to use precoding by setting
                                                                 the Precoding Request bit in the TS1s/TS2s it transmits prior to entry to
                                                                 Recovery Speed. */
        uint32_t tx_precode_on         : 1;  /**< [  8:  8](RO/H) Transmitter Precoding on.
                                                                 This field indicates whether the receiver asked this transmitter to
                                                                 enable precoding.  This bit is cleard on DL_Down. */
        uint32_t rcvd_elbc             : 2;  /**< [  7:  6](RO/H) Received Enhanced Link behavior control.
                                                                 This field contains the Enhanced Link Behavior Control bits
                                                                 from the most recent TS1 or TS2 received in the Polling or Config states. */
        uint32_t mod_ts_rcvd           : 1;  /**< [  5:  5](RO/H) Modified TS Received.
                                                                 This bit is cleared with the link is down.
                                                                 This bit is set when the modified TS1/TS2 Ordered Set is received. */
        uint32_t leq_32g_req           : 1;  /**< [  4:  4](R/W1C) Link equalization request 32.0 GT/s
                                                                 This field is W1C only for PF0.  All other functions a write has no affect. */
        uint32_t eq_32g_cpl_p3         : 1;  /**< [  3:  3](RO/H) Equalization 32.0 GT/s phase 3 successful. */
        uint32_t eq_32g_cpl_p2         : 1;  /**< [  2:  2](RO/H) Equalization 32.0 GT/s phase 2 successful. */
        uint32_t eq_32g_cpl_p1         : 1;  /**< [  1:  1](RO/H) Equalization 32.0 GT/s phase 1 successful. */
        uint32_t eq_32g_cpl            : 1;  /**< [  0:  0](RO/H) Equalization 32.0 GT/s complete. */
#else /* Word 0 - Little Endian */
        uint32_t eq_32g_cpl            : 1;  /**< [  0:  0](RO/H) Equalization 32.0 GT/s complete. */
        uint32_t eq_32g_cpl_p1         : 1;  /**< [  1:  1](RO/H) Equalization 32.0 GT/s phase 1 successful. */
        uint32_t eq_32g_cpl_p2         : 1;  /**< [  2:  2](RO/H) Equalization 32.0 GT/s phase 2 successful. */
        uint32_t eq_32g_cpl_p3         : 1;  /**< [  3:  3](RO/H) Equalization 32.0 GT/s phase 3 successful. */
        uint32_t leq_32g_req           : 1;  /**< [  4:  4](R/W1C) Link equalization request 32.0 GT/s
                                                                 This field is W1C only for PF0.  All other functions a write has no affect. */
        uint32_t mod_ts_rcvd           : 1;  /**< [  5:  5](RO/H) Modified TS Received.
                                                                 This bit is cleared with the link is down.
                                                                 This bit is set when the modified TS1/TS2 Ordered Set is received. */
        uint32_t rcvd_elbc             : 2;  /**< [  7:  6](RO/H) Received Enhanced Link behavior control.
                                                                 This field contains the Enhanced Link Behavior Control bits
                                                                 from the most recent TS1 or TS2 received in the Polling or Config states. */
        uint32_t tx_precode_on         : 1;  /**< [  8:  8](RO/H) Transmitter Precoding on.
                                                                 This field indicates whether the receiver asked this transmitter to
                                                                 enable precoding.  This bit is cleard on DL_Down. */
        uint32_t tx_precode_req        : 1;  /**< [  9:  9](R/W) Transmitter Precode Request.
                                                                 When set, this port will request the transmitter to use precoding by setting
                                                                 the Precoding Request bit in the TS1s/TS2s it transmits prior to entry to
                                                                 Recovery Speed. */
        uint32_t no_eq_needed_rcvd     : 1;  /**< [ 10: 10](RO/H) No Equalization Needed Received.
                                                                 This bit is Set when this Port either received a Modified
                                                                 TS1/TS2 with the No Equalization Needed bit Set or
                                                                 received a non-modified TS1/TS2 was received with the
                                                                 No Equalization Needed encoding. This bit is cleared on DL_Down. */
        uint32_t reserved_11_31        : 21;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_pl32g_status_s cn; */
};
typedef union cavm_pcieepx_pl32g_status cavm_pcieepx_pl32g_status_t;

static inline uint64_t CAVM_PCIEEPX_PL32G_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_PL32G_STATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x1d0 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x1d0 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x1d0 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x1d0 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_PL32G_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_PL32G_STATUS(a) cavm_pcieepx_pl32g_status_t
#define bustype_CAVM_PCIEEPX_PL32G_STATUS(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_PL32G_STATUS(a) "PCIEEPX_PL32G_STATUS"
#define busnum_CAVM_PCIEEPX_PL32G_STATUS(a) (a)
#define arguments_CAVM_PCIEEPX_PL32G_STATUS(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_pl32g_tmod_ts_data1
 *
 * PCIe EP 32.0 GT/s Transmitted Modified TS Data 1 Register
 */
union cavm_pcieepx_pl32g_tmod_ts_data1
{
    uint32_t u;
    struct cavm_pcieepx_pl32g_tmod_ts_data1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t tx_mod_ts_vend_id     : 16; /**< [ 31: 16](RO/H) Transmitted Modified TS Vendor ID.
                                                                 If PCIEEP_PL32G_CTL[MOD_TS_USE_MODE_SEL] is set, this field contains the
                                                                 Modified TS Vendor ID field from the Modified TS1/TS2 Ordered Set transmitted
                                                                 during the most recent LTSSM state.

                                                                 _ Bits \<15:8\> = contain the value of Synbol 10.
                                                                 _ Bits \<7:0\> = contain the value of Synbol 11. */
        uint32_t tx_mod_ts_info1       : 13; /**< [ 15:  3](RO/H) Transmitted Modified TS information 1.
                                                                 If PCIEEP_PL32G_CTL[MOD_TS_USE_MODE_SEL] is set, this field contains the
                                                                 Modified TS Information 1 field from the Modified TS1/TS2 ordered set transmitted
                                                                 during the most recent LTSSM state.

                                                                 synopsys documentation looks wrong.
                                                                 _ Bits \<15:8\> = contain the value of Synbol 12.
                                                                 _ Bits \<16:8\> = contain the value of Synbol 13.
                                                                 _ Bits \<7:0\> = contain the value of Synbol 14. */
        uint32_t tx_mod_ts_use_mode    : 3;  /**< [  2:  0](RO/H) Transmitted Modified TS Usage Mode.
                                                                 If PCIEEP_PL32G_CTL[MOD_TS_USE_MODE_SEL] is set, this field contains the
                                                                 Modified TS Usage field from the Modified TS/1TS2 Ordered Set transmitted
                                                                 during the most recent LTSSM state. */
#else /* Word 0 - Little Endian */
        uint32_t tx_mod_ts_use_mode    : 3;  /**< [  2:  0](RO/H) Transmitted Modified TS Usage Mode.
                                                                 If PCIEEP_PL32G_CTL[MOD_TS_USE_MODE_SEL] is set, this field contains the
                                                                 Modified TS Usage field from the Modified TS/1TS2 Ordered Set transmitted
                                                                 during the most recent LTSSM state. */
        uint32_t tx_mod_ts_info1       : 13; /**< [ 15:  3](RO/H) Transmitted Modified TS information 1.
                                                                 If PCIEEP_PL32G_CTL[MOD_TS_USE_MODE_SEL] is set, this field contains the
                                                                 Modified TS Information 1 field from the Modified TS1/TS2 ordered set transmitted
                                                                 during the most recent LTSSM state.

                                                                 synopsys documentation looks wrong.
                                                                 _ Bits \<15:8\> = contain the value of Synbol 12.
                                                                 _ Bits \<16:8\> = contain the value of Synbol 13.
                                                                 _ Bits \<7:0\> = contain the value of Synbol 14. */
        uint32_t tx_mod_ts_vend_id     : 16; /**< [ 31: 16](RO/H) Transmitted Modified TS Vendor ID.
                                                                 If PCIEEP_PL32G_CTL[MOD_TS_USE_MODE_SEL] is set, this field contains the
                                                                 Modified TS Vendor ID field from the Modified TS1/TS2 Ordered Set transmitted
                                                                 during the most recent LTSSM state.

                                                                 _ Bits \<15:8\> = contain the value of Synbol 10.
                                                                 _ Bits \<7:0\> = contain the value of Synbol 11. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_pl32g_tmod_ts_data1_s cn; */
};
typedef union cavm_pcieepx_pl32g_tmod_ts_data1 cavm_pcieepx_pl32g_tmod_ts_data1_t;

static inline uint64_t CAVM_PCIEEPX_PL32G_TMOD_TS_DATA1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_PL32G_TMOD_TS_DATA1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x1dc + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x1dc + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x1dc + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x1dc + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_PL32G_TMOD_TS_DATA1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_PL32G_TMOD_TS_DATA1(a) cavm_pcieepx_pl32g_tmod_ts_data1_t
#define bustype_CAVM_PCIEEPX_PL32G_TMOD_TS_DATA1(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_PL32G_TMOD_TS_DATA1(a) "PCIEEPX_PL32G_TMOD_TS_DATA1"
#define busnum_CAVM_PCIEEPX_PL32G_TMOD_TS_DATA1(a) (a)
#define arguments_CAVM_PCIEEPX_PL32G_TMOD_TS_DATA1(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_pl32g_tmod_ts_data2
 *
 * PCIe EP 32.0 GT/s Transmitted Modified TS Data 2 Register
 */
union cavm_pcieepx_pl32g_tmod_ts_data2
{
    uint32_t u;
    struct cavm_pcieepx_pl32g_tmod_ts_data2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_26_31        : 6;
        uint32_t tx_alt_prot_neg_stat  : 2;  /**< [ 25: 24](RO/H) Alternate Protocol Negotiation Status.  Indicates the status of the Alternate
                                                                 Protocol Negotiation.

                                                                 0x0: Not Supported.
                                                                 0x1: Disabled.
                                                                 0x2: Failed.
                                                                 0x3: Succeeded. */
        uint32_t tx_mod_ts_info2       : 24; /**< [ 23:  0](RO/H) Received Modified TS information 2.
                                                                 If PCIEEP_PL32G_CTL[MOD_TS_USE_MODE_SEL] is set, this field contains the
                                                                 Modified TS Information 2 field from the Modified TS1/TS2 ordered set
                                                                 transmitted during the most recent LTSSM state.

                                                                 synopsys documentation looks wrong.
                                                                 _ Bits \<23:16\> = contain the value of Synbol 12.
                                                                 _ Bits \<16:8\> = contain the value of Synbol 13.
                                                                 _ Bits \<7:0\> = contain the value of Synbol 14. */
#else /* Word 0 - Little Endian */
        uint32_t tx_mod_ts_info2       : 24; /**< [ 23:  0](RO/H) Received Modified TS information 2.
                                                                 If PCIEEP_PL32G_CTL[MOD_TS_USE_MODE_SEL] is set, this field contains the
                                                                 Modified TS Information 2 field from the Modified TS1/TS2 ordered set
                                                                 transmitted during the most recent LTSSM state.

                                                                 synopsys documentation looks wrong.
                                                                 _ Bits \<23:16\> = contain the value of Synbol 12.
                                                                 _ Bits \<16:8\> = contain the value of Synbol 13.
                                                                 _ Bits \<7:0\> = contain the value of Synbol 14. */
        uint32_t tx_alt_prot_neg_stat  : 2;  /**< [ 25: 24](RO/H) Alternate Protocol Negotiation Status.  Indicates the status of the Alternate
                                                                 Protocol Negotiation.

                                                                 0x0: Not Supported.
                                                                 0x1: Disabled.
                                                                 0x2: Failed.
                                                                 0x3: Succeeded. */
        uint32_t reserved_26_31        : 6;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_pl32g_tmod_ts_data2_s cn; */
};
typedef union cavm_pcieepx_pl32g_tmod_ts_data2 cavm_pcieepx_pl32g_tmod_ts_data2_t;

static inline uint64_t CAVM_PCIEEPX_PL32G_TMOD_TS_DATA2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_PL32G_TMOD_TS_DATA2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x1e0 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x1e0 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x1e0 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x1e0 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_PL32G_TMOD_TS_DATA2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_PL32G_TMOD_TS_DATA2(a) cavm_pcieepx_pl32g_tmod_ts_data2_t
#define bustype_CAVM_PCIEEPX_PL32G_TMOD_TS_DATA2(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_PL32G_TMOD_TS_DATA2(a) "PCIEEPX_PL32G_TMOD_TS_DATA2"
#define busnum_CAVM_PCIEEPX_PL32G_TMOD_TS_DATA2(a) (a)
#define arguments_CAVM_PCIEEPX_PL32G_TMOD_TS_DATA2(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_pl_ltr_lat
 *
 * PCIe EP PF LTR Latency Register
 * For an upstream port, the register fields capture the corresponding fields in the
 * LTR messages that are transmitted by the port.  For a downstream port, the register
 * fields capture the corresponding fields in the LTR messages that are received by the port.
 * The full content of the register is reflected on the app_ltr_latency output.
 */
union cavm_pcieepx_pl_ltr_lat
{
    uint32_t u;
    struct cavm_pcieepx_pl_ltr_lat_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t nslr                  : 1;  /**< [ 31: 31](R/W) No snoop latency requirement. */
        uint32_t reserved_29_30        : 2;
        uint32_t nsls                  : 3;  /**< [ 28: 26](R/W) No snoop latency scale. */
        uint32_t nslv                  : 10; /**< [ 25: 16](R/W) No snoop latency value. */
        uint32_t slr                   : 1;  /**< [ 15: 15](R/W) Snoop latency requirement. */
        uint32_t reserved_13_14        : 2;
        uint32_t sls                   : 3;  /**< [ 12: 10](R/W) Snoop latency scale. */
        uint32_t slv                   : 10; /**< [  9:  0](R/W) Snoop latency value. */
#else /* Word 0 - Little Endian */
        uint32_t slv                   : 10; /**< [  9:  0](R/W) Snoop latency value. */
        uint32_t sls                   : 3;  /**< [ 12: 10](R/W) Snoop latency scale. */
        uint32_t reserved_13_14        : 2;
        uint32_t slr                   : 1;  /**< [ 15: 15](R/W) Snoop latency requirement. */
        uint32_t nslv                  : 10; /**< [ 25: 16](R/W) No snoop latency value. */
        uint32_t nsls                  : 3;  /**< [ 28: 26](R/W) No snoop latency scale. */
        uint32_t reserved_29_30        : 2;
        uint32_t nslr                  : 1;  /**< [ 31: 31](R/W) No snoop latency requirement. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_pl_ltr_lat_s cn; */
};
typedef union cavm_pcieepx_pl_ltr_lat cavm_pcieepx_pl_ltr_lat_t;

static inline uint64_t CAVM_PCIEEPX_PL_LTR_LAT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_PL_LTR_LAT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0xb30 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0xb30 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0xb30 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0xb30 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_PL_LTR_LAT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_PL_LTR_LAT(a) cavm_pcieepx_pl_ltr_lat_t
#define bustype_CAVM_PCIEEPX_PL_LTR_LAT(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_PL_LTR_LAT(a) "PCIEEPX_PL_LTR_LAT"
#define busnum_CAVM_PCIEEPX_PL_LTR_LAT(a) (a)
#define arguments_CAVM_PCIEEPX_PL_LTR_LAT(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_pm_cap_id
 *
 * PCIe EP PF Power Management Capability ID Register
 */
union cavm_pcieepx_pm_cap_id
{
    uint32_t u;
    struct cavm_pcieepx_pm_cap_id_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t pmes                  : 5;  /**< [ 31: 27](RO/WRSL/H) PME_Support. A value of 0x0 for any bit indicates that the device (or function) is not
                                                                 capable of generating PME messages while in that power state:

                                                                 _ Bit 27: If set, PME Messages can be generated from D0.

                                                                 _ Bit 28: If set, PME Messages can be generated from D1.

                                                                 _ Bit 29: If set, PME Messages can be generated from D2.

                                                                 _ Bit 30: If set, PME Messages can be generated from D3hot.

                                                                 _ Bit 31: If set, PME Messages can be generated from D3cold.

                                                                 This field is writable through PEM()_CFG_TBL(). */
        uint32_t d2s                   : 1;  /**< [ 26: 26](RO/WRSL) D2 support, writable through PEM()_CFG_TBL(). */
        uint32_t d1s                   : 1;  /**< [ 25: 25](RO/WRSL) D1 support, writable through PEM()_CFG_TBL(). */
        uint32_t auxc                  : 3;  /**< [ 24: 22](RO/WRSL) AUX current, writable through PEM()_CFG_TBL(). */
        uint32_t dsi                   : 1;  /**< [ 21: 21](RO/WRSL) Device specific initialization (DSI), writable through PEM()_CFG_TBL(). */
        uint32_t reserved_20           : 1;
        uint32_t pme_clock             : 1;  /**< [ 19: 19](RO) PME clock, hardwired to zero. */
        uint32_t pmsv                  : 3;  /**< [ 18: 16](RO/WRSL) Power management specification version, writable through
                                                                 PEM()_CFG_TBL(). */
        uint32_t ncp                   : 8;  /**< [ 15:  8](RO/WRSL) Next capability pointer. Points to the PCIe capabilities list by default, writable
                                                                 through PEM()_CFG_TBL(). */
        uint32_t pmcid                 : 8;  /**< [  7:  0](RO) Power management capability ID. */
#else /* Word 0 - Little Endian */
        uint32_t pmcid                 : 8;  /**< [  7:  0](RO) Power management capability ID. */
        uint32_t ncp                   : 8;  /**< [ 15:  8](RO/WRSL) Next capability pointer. Points to the PCIe capabilities list by default, writable
                                                                 through PEM()_CFG_TBL(). */
        uint32_t pmsv                  : 3;  /**< [ 18: 16](RO/WRSL) Power management specification version, writable through
                                                                 PEM()_CFG_TBL(). */
        uint32_t pme_clock             : 1;  /**< [ 19: 19](RO) PME clock, hardwired to zero. */
        uint32_t reserved_20           : 1;
        uint32_t dsi                   : 1;  /**< [ 21: 21](RO/WRSL) Device specific initialization (DSI), writable through PEM()_CFG_TBL(). */
        uint32_t auxc                  : 3;  /**< [ 24: 22](RO/WRSL) AUX current, writable through PEM()_CFG_TBL(). */
        uint32_t d1s                   : 1;  /**< [ 25: 25](RO/WRSL) D1 support, writable through PEM()_CFG_TBL(). */
        uint32_t d2s                   : 1;  /**< [ 26: 26](RO/WRSL) D2 support, writable through PEM()_CFG_TBL(). */
        uint32_t pmes                  : 5;  /**< [ 31: 27](RO/WRSL/H) PME_Support. A value of 0x0 for any bit indicates that the device (or function) is not
                                                                 capable of generating PME messages while in that power state:

                                                                 _ Bit 27: If set, PME Messages can be generated from D0.

                                                                 _ Bit 28: If set, PME Messages can be generated from D1.

                                                                 _ Bit 29: If set, PME Messages can be generated from D2.

                                                                 _ Bit 30: If set, PME Messages can be generated from D3hot.

                                                                 _ Bit 31: If set, PME Messages can be generated from D3cold.

                                                                 This field is writable through PEM()_CFG_TBL(). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_pm_cap_id_s cn; */
};
typedef union cavm_pcieepx_pm_cap_id cavm_pcieepx_pm_cap_id_t;

static inline uint64_t CAVM_PCIEEPX_PM_CAP_ID(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_PM_CAP_ID(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x40 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x40 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x40 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x40 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_PM_CAP_ID", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_PM_CAP_ID(a) cavm_pcieepx_pm_cap_id_t
#define bustype_CAVM_PCIEEPX_PM_CAP_ID(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_PM_CAP_ID(a) "PCIEEPX_PM_CAP_ID"
#define busnum_CAVM_PCIEEPX_PM_CAP_ID(a) (a)
#define arguments_CAVM_PCIEEPX_PM_CAP_ID(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_pm_ctl
 *
 * PCIe EP PF Power Management Control and Status Register
 */
union cavm_pcieepx_pm_ctl
{
    uint32_t u;
    struct cavm_pcieepx_pm_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t pmdia                 : 8;  /**< [ 31: 24](RO) Data register for additional information (not supported). */
        uint32_t bpccee                : 1;  /**< [ 23: 23](RO) Bus power/clock control enable, hardwired to zero. */
        uint32_t bd3h                  : 1;  /**< [ 22: 22](RO) B2/B3 support, hardwired to zero. */
        uint32_t reserved_16_21        : 6;
        uint32_t pmess                 : 1;  /**< [ 15: 15](R/W1C/H) PME status. Indicates whether or not a previously enabled PME event occurred. */
        uint32_t pmedsia               : 2;  /**< [ 14: 13](RO) Data scale (not supported). */
        uint32_t pmds                  : 4;  /**< [ 12:  9](RO) Data select (not supported). */
        uint32_t pmeens                : 1;  /**< [  8:  8](R/W) PME enable. A value of one indicates that the device is enabled to generate PME. */
        uint32_t reserved_4_7          : 4;
        uint32_t nsr                   : 1;  /**< [  3:  3](RO/WRSL) No soft reset, writable through PEM()_CFG_TBL(). */
        uint32_t reserved_2            : 1;
        uint32_t ps                    : 2;  /**< [  1:  0](R/W/H) Power state. Controls the device power state:
                                                                 0x0 = D0.
                                                                 0x1 = D1.
                                                                 0x2 = D2.
                                                                 0x3 = D3.

                                                                 The written value is ignored if the specific state is not supported. */
#else /* Word 0 - Little Endian */
        uint32_t ps                    : 2;  /**< [  1:  0](R/W/H) Power state. Controls the device power state:
                                                                 0x0 = D0.
                                                                 0x1 = D1.
                                                                 0x2 = D2.
                                                                 0x3 = D3.

                                                                 The written value is ignored if the specific state is not supported. */
        uint32_t reserved_2            : 1;
        uint32_t nsr                   : 1;  /**< [  3:  3](RO/WRSL) No soft reset, writable through PEM()_CFG_TBL(). */
        uint32_t reserved_4_7          : 4;
        uint32_t pmeens                : 1;  /**< [  8:  8](R/W) PME enable. A value of one indicates that the device is enabled to generate PME. */
        uint32_t pmds                  : 4;  /**< [ 12:  9](RO) Data select (not supported). */
        uint32_t pmedsia               : 2;  /**< [ 14: 13](RO) Data scale (not supported). */
        uint32_t pmess                 : 1;  /**< [ 15: 15](R/W1C/H) PME status. Indicates whether or not a previously enabled PME event occurred. */
        uint32_t reserved_16_21        : 6;
        uint32_t bd3h                  : 1;  /**< [ 22: 22](RO) B2/B3 support, hardwired to zero. */
        uint32_t bpccee                : 1;  /**< [ 23: 23](RO) Bus power/clock control enable, hardwired to zero. */
        uint32_t pmdia                 : 8;  /**< [ 31: 24](RO) Data register for additional information (not supported). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_pm_ctl_s cn; */
};
typedef union cavm_pcieepx_pm_ctl cavm_pcieepx_pm_ctl_t;

static inline uint64_t CAVM_PCIEEPX_PM_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_PM_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x44 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x44 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x44 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x44 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_PM_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_PM_CTL(a) cavm_pcieepx_pm_ctl_t
#define bustype_CAVM_PCIEEPX_PM_CTL(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_PM_CTL(a) "PCIEEPX_PM_CTL"
#define busnum_CAVM_PCIEEPX_PM_CTL(a) (a)
#define arguments_CAVM_PCIEEPX_PM_CTL(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_port_ctl
 *
 * PCIe EP PF Port Link Control Register
 */
union cavm_pcieepx_port_ctl
{
    uint32_t u;
    struct cavm_pcieepx_port_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_28_31        : 4;
        uint32_t xlr_en                : 1;  /**< [ 27: 27](R/W) Transmit lane reversible enable.  Internally reserved field, do not set. */
        uint32_t ex_synch              : 1;  /**< [ 26: 26](R/W) Extended synch.  Internally reserved field, do not set. */
        uint32_t clcrc_en              : 1;  /**< [ 25: 25](R/W) Corrupt LCRC enable.  Internally reserved field, do not set. */
        uint32_t beacon_en             : 1;  /**< [ 24: 24](R/W) Beacon enable.  Internally reserved field, do not set. */
        uint32_t cle                   : 2;  /**< [ 23: 22](RAZ) Reserved. */
        uint32_t lme                   : 6;  /**< [ 21: 16](R/W) Link mode enable set as follows:
                                                                 0x1 = x1.
                                                                 0x3 = x2.
                                                                 0x7 = x4.
                                                                 0xF = x8 (not supported).
                                                                 0x1F = x16 (not supported).
                                                                 0x3F = x32 (not supported).

                                                                 This field indicates the maximum number of lanes supported by the PCIe port. The value can
                                                                 be set less than 0x1F to limit the number of lanes that the PCIe will attempt to use. If
                                                                 the value of 0xF set by the hardware is not desired, this field can be programmed to a
                                                                 smaller value (i.e. EEPROM). See also PCIEEP_LINK_CAP[MLW].
                                                                 The value of this field does not indicate the number of lanes in use by the PCIe. This
                                                                 field sets the maximum number of lanes in the PCIe core that could be used. As per the
                                                                 PCIe specification, the PCIe core can negotiate a smaller link width, so all of x16, x8,
                                                                 x4, x2, and x1 are supported when [LME] = 0x1F, for example.

                                                                 This field is required to be set to a value which is greater then or equal to the
                                                                 configured pipe width in PEM()_CFG[LANES].  Smaller values will result in interoperability
                                                                 issues with the PHY. */
        uint32_t reserved_12_15        : 4;
        uint32_t link_rate             : 4;  /**< [ 11:  8](RO/H) Reserved. */
        uint32_t flm                   : 1;  /**< [  7:  7](R/W) Fast link mode. Sets all internal timers to fast mode for simulation purposes.
                                                                 The scaling factor is configured by PCIEEP_TIMER_CTL[FLMSF]. */
        uint32_t ldis                  : 1;  /**< [  6:  6](R/W) Link disable. Internally reserved field, do not set. */
        uint32_t dllle                 : 1;  /**< [  5:  5](R/W) DLL link enable. Enables link initialization. If DLL link enable = 0, the PCI Express bus
                                                                 does not transmit InitFC DLLPs and does not establish a link. */
        uint32_t reserved_4            : 1;
        uint32_t ra                    : 1;  /**< [  3:  3](R/W) Reset assert. Triggers a recovery and forces the LTSSM to the hot reset state (downstream
                                                                 port only). */
        uint32_t le                    : 1;  /**< [  2:  2](R/W) Loopback enable. Initiate loopback mode as a master. On a 0-\>1 transition, the PCIe core
                                                                 sends TS ordered sets with the loopback bit set to cause the link partner to enter into
                                                                 loopback mode as a slave. Normal transmission is not possible when LE=1. To exit loopback
                                                                 mode, take the link through a reset sequence. */
        uint32_t sd                    : 1;  /**< [  1:  1](R/W) Scramble disable. Setting this bit turns off data scrambling. */
        uint32_t omr                   : 1;  /**< [  0:  0](WO/H) Other message request. When software writes a one to this bit, the PCI Express bus transmits
                                                                 the message contained in the other message register. */
#else /* Word 0 - Little Endian */
        uint32_t omr                   : 1;  /**< [  0:  0](WO/H) Other message request. When software writes a one to this bit, the PCI Express bus transmits
                                                                 the message contained in the other message register. */
        uint32_t sd                    : 1;  /**< [  1:  1](R/W) Scramble disable. Setting this bit turns off data scrambling. */
        uint32_t le                    : 1;  /**< [  2:  2](R/W) Loopback enable. Initiate loopback mode as a master. On a 0-\>1 transition, the PCIe core
                                                                 sends TS ordered sets with the loopback bit set to cause the link partner to enter into
                                                                 loopback mode as a slave. Normal transmission is not possible when LE=1. To exit loopback
                                                                 mode, take the link through a reset sequence. */
        uint32_t ra                    : 1;  /**< [  3:  3](R/W) Reset assert. Triggers a recovery and forces the LTSSM to the hot reset state (downstream
                                                                 port only). */
        uint32_t reserved_4            : 1;
        uint32_t dllle                 : 1;  /**< [  5:  5](R/W) DLL link enable. Enables link initialization. If DLL link enable = 0, the PCI Express bus
                                                                 does not transmit InitFC DLLPs and does not establish a link. */
        uint32_t ldis                  : 1;  /**< [  6:  6](R/W) Link disable. Internally reserved field, do not set. */
        uint32_t flm                   : 1;  /**< [  7:  7](R/W) Fast link mode. Sets all internal timers to fast mode for simulation purposes.
                                                                 The scaling factor is configured by PCIEEP_TIMER_CTL[FLMSF]. */
        uint32_t link_rate             : 4;  /**< [ 11:  8](RO/H) Reserved. */
        uint32_t reserved_12_15        : 4;
        uint32_t lme                   : 6;  /**< [ 21: 16](R/W) Link mode enable set as follows:
                                                                 0x1 = x1.
                                                                 0x3 = x2.
                                                                 0x7 = x4.
                                                                 0xF = x8 (not supported).
                                                                 0x1F = x16 (not supported).
                                                                 0x3F = x32 (not supported).

                                                                 This field indicates the maximum number of lanes supported by the PCIe port. The value can
                                                                 be set less than 0x1F to limit the number of lanes that the PCIe will attempt to use. If
                                                                 the value of 0xF set by the hardware is not desired, this field can be programmed to a
                                                                 smaller value (i.e. EEPROM). See also PCIEEP_LINK_CAP[MLW].
                                                                 The value of this field does not indicate the number of lanes in use by the PCIe. This
                                                                 field sets the maximum number of lanes in the PCIe core that could be used. As per the
                                                                 PCIe specification, the PCIe core can negotiate a smaller link width, so all of x16, x8,
                                                                 x4, x2, and x1 are supported when [LME] = 0x1F, for example.

                                                                 This field is required to be set to a value which is greater then or equal to the
                                                                 configured pipe width in PEM()_CFG[LANES].  Smaller values will result in interoperability
                                                                 issues with the PHY. */
        uint32_t cle                   : 2;  /**< [ 23: 22](RAZ) Reserved. */
        uint32_t beacon_en             : 1;  /**< [ 24: 24](R/W) Beacon enable.  Internally reserved field, do not set. */
        uint32_t clcrc_en              : 1;  /**< [ 25: 25](R/W) Corrupt LCRC enable.  Internally reserved field, do not set. */
        uint32_t ex_synch              : 1;  /**< [ 26: 26](R/W) Extended synch.  Internally reserved field, do not set. */
        uint32_t xlr_en                : 1;  /**< [ 27: 27](R/W) Transmit lane reversible enable.  Internally reserved field, do not set. */
        uint32_t reserved_28_31        : 4;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_port_ctl_s cn; */
};
typedef union cavm_pcieepx_port_ctl cavm_pcieepx_port_ctl_t;

static inline uint64_t CAVM_PCIEEPX_PORT_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_PORT_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x710 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x710 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x710 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x710 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_PORT_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_PORT_CTL(a) cavm_pcieepx_port_ctl_t
#define bustype_CAVM_PCIEEPX_PORT_CTL(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_PORT_CTL(a) "PCIEEPX_PORT_CTL"
#define busnum_CAVM_PCIEEPX_PORT_CTL(a) (a)
#define arguments_CAVM_PCIEEPX_PORT_CTL(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_port_flink
 *
 * PCIe EP PF Port Force Link Register
 */
union cavm_pcieepx_port_flink
{
    uint32_t u;
    struct cavm_pcieepx_port_flink_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_24_31        : 8;
        uint32_t dskew_for_sris        : 1;  /**< [ 23: 23](R/W) Use the transitions from TS2 to logical idle symbol, SKP OS to logical idle symbol,
                                                                 and FTS sequence to SKP OS to do deskew for SRIS instead of using received SKP OS
                                                                 if DO_DESKEW_FOR_SRIS is set to 1. */
        uint32_t supp_planes_rxei_exit : 1;  /**< [ 22: 22](R/W) Support LTSSM transition from Polling.Active to
                                                                 Polling.Config based on Rx 8 TSs on any lanes which are Rx
                                                                 EI exit too from base spec after 24ms timeout. This prevents
                                                                 some lanes detected but not Rx EI exit and LTSSM cannot
                                                                 move to Polling.Config. */
        uint32_t link_state            : 6;  /**< [ 21: 16](R/W) Link state. The link state that the PCI Express bus is forced to when bit 15 (force link)
                                                                 is set. State encoding:
                                                                 0x0 = DETECT_QUIET.
                                                                 0x1 = DETECT_ACT.
                                                                 0x2 = POLL_ACTIVE.
                                                                 0x3 = POLL_COMPLIANCE.
                                                                 0x4 = POLL_CONFIG.
                                                                 0x5 = PRE_DETECT_QUIET.
                                                                 0x6 = DETECT_WAIT.
                                                                 0x7 = CFG_LINKWD_START.
                                                                 0x8 = CFG_LINKWD_ACEPT.
                                                                 0x9 = CFG_LANENUM_WAIT.
                                                                 0xA = CFG_LANENUM_ACEPT.
                                                                 0xB = CFG_COMPLETE.
                                                                 0xC = CFG_IDLE.
                                                                 0xD = RCVRY_LOCK.
                                                                 0xE = RCVRY_SPEED.
                                                                 0xF = RCVRY_RCVRCFG.
                                                                 0x10 = RCVRY_IDLE.
                                                                 0x11 = L0.
                                                                 0x12 = L0S.
                                                                 0x13 = L123_SEND_EIDLE.
                                                                 0x14 = L1_IDLE.
                                                                 0x15 = L2_IDLE.
                                                                 0x16 = L2_WAKE.
                                                                 0x17 = DISABLED_ENTRY.
                                                                 0x18 = DISABLED_IDLE.
                                                                 0x19 = DISABLED.
                                                                 0x1A = LPBK_ENTRY.
                                                                 0x1B = LPBK_ACTIVE.
                                                                 0x1C = LPBK_EXIT.
                                                                 0x1D = LPBK_EXIT_TIMEOUT.
                                                                 0x1E = HOT_RESET_ENTRY.
                                                                 0x1F = HOT_RESET. */
        uint32_t force_link            : 1;  /**< [ 15: 15](WO/H) Force link. Forces the link to the state specified by [LINK_STATE]. The force link
                                                                 pulse triggers link renegotiation.
                                                                 As the force link is a pulse, writing a 1 to it does trigger the forced link state event,
                                                                 even though reading it always returns a 0. */
        uint32_t reserved_12_14        : 3;
        uint32_t forced_ltssm          : 4;  /**< [ 11:  8](R/W) Forced link command. */
        uint32_t link_num              : 8;  /**< [  7:  0](RO/H) Link number. Not used for endpoint. */
#else /* Word 0 - Little Endian */
        uint32_t link_num              : 8;  /**< [  7:  0](RO/H) Link number. Not used for endpoint. */
        uint32_t forced_ltssm          : 4;  /**< [ 11:  8](R/W) Forced link command. */
        uint32_t reserved_12_14        : 3;
        uint32_t force_link            : 1;  /**< [ 15: 15](WO/H) Force link. Forces the link to the state specified by [LINK_STATE]. The force link
                                                                 pulse triggers link renegotiation.
                                                                 As the force link is a pulse, writing a 1 to it does trigger the forced link state event,
                                                                 even though reading it always returns a 0. */
        uint32_t link_state            : 6;  /**< [ 21: 16](R/W) Link state. The link state that the PCI Express bus is forced to when bit 15 (force link)
                                                                 is set. State encoding:
                                                                 0x0 = DETECT_QUIET.
                                                                 0x1 = DETECT_ACT.
                                                                 0x2 = POLL_ACTIVE.
                                                                 0x3 = POLL_COMPLIANCE.
                                                                 0x4 = POLL_CONFIG.
                                                                 0x5 = PRE_DETECT_QUIET.
                                                                 0x6 = DETECT_WAIT.
                                                                 0x7 = CFG_LINKWD_START.
                                                                 0x8 = CFG_LINKWD_ACEPT.
                                                                 0x9 = CFG_LANENUM_WAIT.
                                                                 0xA = CFG_LANENUM_ACEPT.
                                                                 0xB = CFG_COMPLETE.
                                                                 0xC = CFG_IDLE.
                                                                 0xD = RCVRY_LOCK.
                                                                 0xE = RCVRY_SPEED.
                                                                 0xF = RCVRY_RCVRCFG.
                                                                 0x10 = RCVRY_IDLE.
                                                                 0x11 = L0.
                                                                 0x12 = L0S.
                                                                 0x13 = L123_SEND_EIDLE.
                                                                 0x14 = L1_IDLE.
                                                                 0x15 = L2_IDLE.
                                                                 0x16 = L2_WAKE.
                                                                 0x17 = DISABLED_ENTRY.
                                                                 0x18 = DISABLED_IDLE.
                                                                 0x19 = DISABLED.
                                                                 0x1A = LPBK_ENTRY.
                                                                 0x1B = LPBK_ACTIVE.
                                                                 0x1C = LPBK_EXIT.
                                                                 0x1D = LPBK_EXIT_TIMEOUT.
                                                                 0x1E = HOT_RESET_ENTRY.
                                                                 0x1F = HOT_RESET. */
        uint32_t supp_planes_rxei_exit : 1;  /**< [ 22: 22](R/W) Support LTSSM transition from Polling.Active to
                                                                 Polling.Config based on Rx 8 TSs on any lanes which are Rx
                                                                 EI exit too from base spec after 24ms timeout. This prevents
                                                                 some lanes detected but not Rx EI exit and LTSSM cannot
                                                                 move to Polling.Config. */
        uint32_t dskew_for_sris        : 1;  /**< [ 23: 23](R/W) Use the transitions from TS2 to logical idle symbol, SKP OS to logical idle symbol,
                                                                 and FTS sequence to SKP OS to do deskew for SRIS instead of using received SKP OS
                                                                 if DO_DESKEW_FOR_SRIS is set to 1. */
        uint32_t reserved_24_31        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_port_flink_s cn; */
};
typedef union cavm_pcieepx_port_flink cavm_pcieepx_port_flink_t;

static inline uint64_t CAVM_PCIEEPX_PORT_FLINK(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_PORT_FLINK(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x708 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x708 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x708 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x708 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_PORT_FLINK", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_PORT_FLINK(a) cavm_pcieepx_port_flink_t
#define bustype_CAVM_PCIEEPX_PORT_FLINK(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_PORT_FLINK(a) "PCIEEPX_PORT_FLINK"
#define busnum_CAVM_PCIEEPX_PORT_FLINK(a) (a)
#define arguments_CAVM_PCIEEPX_PORT_FLINK(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ptm_cap
 *
 * PCIe EP PF PTM Capability Register
 * Precision Time Measurement Capability exists for PF0 only.
 */
union cavm_pcieepx_ptm_cap
{
    uint32_t u;
    struct cavm_pcieepx_ptm_cap_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t clkg                  : 8;  /**< [ 15:  8](RO/WRSL/H) PTM local clock granularity.

                                                                 Reset values:
                                                                 _ PF0:          0x10.
                                                                 _ PF1:          0x0. */
        uint32_t reserved_4_7          : 4;
        uint32_t eptm                  : 1;  /**< [  3:  3](RO/WRSL/H) ePTM capable.

                                                                 Reset values:
                                                                 _ PF0:          0x1.
                                                                 _ PF1:          0x0. */
        uint32_t rtc                   : 1;  /**< [  2:  2](RO/WRSL/H) PTM root capable.

                                                                 Reset values:
                                                                 _ PF0:          0x1.
                                                                 _ PF1:          0x0. */
        uint32_t rsc                   : 1;  /**< [  1:  1](RO/WRSL/H) PTM responder capable.  Writable only if [RTC] is 0, otherwise always 1.

                                                                 Reset values:
                                                                 _ PF0:          0x1.
                                                                 _ PF1:          0x0. */
        uint32_t rqc                   : 1;  /**< [  0:  0](RO/WRSL/H) PTM requester capable.
                                                                 Reset values:

                                                                 _ PF0:          0x1.
                                                                 _ PF1:          0x0. */
#else /* Word 0 - Little Endian */
        uint32_t rqc                   : 1;  /**< [  0:  0](RO/WRSL/H) PTM requester capable.
                                                                 Reset values:

                                                                 _ PF0:          0x1.
                                                                 _ PF1:          0x0. */
        uint32_t rsc                   : 1;  /**< [  1:  1](RO/WRSL/H) PTM responder capable.  Writable only if [RTC] is 0, otherwise always 1.

                                                                 Reset values:
                                                                 _ PF0:          0x1.
                                                                 _ PF1:          0x0. */
        uint32_t rtc                   : 1;  /**< [  2:  2](RO/WRSL/H) PTM root capable.

                                                                 Reset values:
                                                                 _ PF0:          0x1.
                                                                 _ PF1:          0x0. */
        uint32_t eptm                  : 1;  /**< [  3:  3](RO/WRSL/H) ePTM capable.

                                                                 Reset values:
                                                                 _ PF0:          0x1.
                                                                 _ PF1:          0x0. */
        uint32_t reserved_4_7          : 4;
        uint32_t clkg                  : 8;  /**< [ 15:  8](RO/WRSL/H) PTM local clock granularity.

                                                                 Reset values:
                                                                 _ PF0:          0x10.
                                                                 _ PF1:          0x0. */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ptm_cap_s cn; */
};
typedef union cavm_pcieepx_ptm_cap cavm_pcieepx_ptm_cap_t;

static inline uint64_t CAVM_PCIEEPX_PTM_CAP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_PTM_CAP(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x394 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x394 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x394 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x394 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_PTM_CAP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_PTM_CAP(a) cavm_pcieepx_ptm_cap_t
#define bustype_CAVM_PCIEEPX_PTM_CAP(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_PTM_CAP(a) "PCIEEPX_PTM_CAP"
#define busnum_CAVM_PCIEEPX_PTM_CAP(a) (a)
#define arguments_CAVM_PCIEEPX_PTM_CAP(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ptm_cap_hdr
 *
 * PCIe EP PF Precision Time Measurement Capability Header Register
 * Precision Time Measurement Capability exists for PF0 only.
 */
union cavm_pcieepx_ptm_cap_hdr
{
    uint32_t u;
    struct cavm_pcieepx_ptm_cap_hdr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t nco                   : 12; /**< [ 31: 20](RO/WRSL/H) Next capability offset.
                                                                 Writable through PEM()_CFG_TBL().

                                                                 Reset values:
                                                                 _ PF0:          0x39c.
                                                                 _ PF1:          0x0. */
        uint32_t cv                    : 4;  /**< [ 19: 16](RO/WRSL/H) Capability version.
                                                                 Writable through PEM()_CFG_TBL().

                                                                 Reset values:
                                                                 _ PF0:          0x1.
                                                                 _ PF1:          0x0. */
        uint32_t pcieec                : 16; /**< [ 15:  0](RO/WRSL/H) PCI Express extended capability.
                                                                 Writable through PEM()_CFG_TBL().

                                                                 Reset values:
                                                                 _ PF0:          0x1f.
                                                                 _ PF1:          0x0. */
#else /* Word 0 - Little Endian */
        uint32_t pcieec                : 16; /**< [ 15:  0](RO/WRSL/H) PCI Express extended capability.
                                                                 Writable through PEM()_CFG_TBL().

                                                                 Reset values:
                                                                 _ PF0:          0x1f.
                                                                 _ PF1:          0x0. */
        uint32_t cv                    : 4;  /**< [ 19: 16](RO/WRSL/H) Capability version.
                                                                 Writable through PEM()_CFG_TBL().

                                                                 Reset values:
                                                                 _ PF0:          0x1.
                                                                 _ PF1:          0x0. */
        uint32_t nco                   : 12; /**< [ 31: 20](RO/WRSL/H) Next capability offset.
                                                                 Writable through PEM()_CFG_TBL().

                                                                 Reset values:
                                                                 _ PF0:          0x39c.
                                                                 _ PF1:          0x0. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ptm_cap_hdr_s cn; */
};
typedef union cavm_pcieepx_ptm_cap_hdr cavm_pcieepx_ptm_cap_hdr_t;

static inline uint64_t CAVM_PCIEEPX_PTM_CAP_HDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_PTM_CAP_HDR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x390 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x390 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x390 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x390 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_PTM_CAP_HDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_PTM_CAP_HDR(a) cavm_pcieepx_ptm_cap_hdr_t
#define bustype_CAVM_PCIEEPX_PTM_CAP_HDR(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_PTM_CAP_HDR(a) "PCIEEPX_PTM_CAP_HDR"
#define busnum_CAVM_PCIEEPX_PTM_CAP_HDR(a) (a)
#define arguments_CAVM_PCIEEPX_PTM_CAP_HDR(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ptm_ctl
 *
 * PCIe EP PF Precision Time Measurement Control Register
 * Precision Time Measurement Capability exists for PF0 only.
 */
union cavm_pcieepx_ptm_ctl
{
    uint32_t u;
    struct cavm_pcieepx_ptm_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t eff_gran              : 8;  /**< [ 15:  8](RO/WRSL) PTM effective granularity. */
        uint32_t reserved_2_7          : 6;
        uint32_t rt_sel                : 1;  /**< [  1:  1](RO/WRSL/H) PTM root select.  When set this time source is the PTM root.

                                                                 Reset values:
                                                                 _ PF0:          0x1.
                                                                 _ PF1:          0x0. */
        uint32_t pen                   : 1;  /**< [  0:  0](R/W) PTM enable. When set, this function is permitted to participate in the PTM mechanism. */
#else /* Word 0 - Little Endian */
        uint32_t pen                   : 1;  /**< [  0:  0](R/W) PTM enable. When set, this function is permitted to participate in the PTM mechanism. */
        uint32_t rt_sel                : 1;  /**< [  1:  1](RO/WRSL/H) PTM root select.  When set this time source is the PTM root.

                                                                 Reset values:
                                                                 _ PF0:          0x1.
                                                                 _ PF1:          0x0. */
        uint32_t reserved_2_7          : 6;
        uint32_t eff_gran              : 8;  /**< [ 15:  8](RO/WRSL) PTM effective granularity. */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ptm_ctl_s cn; */
};
typedef union cavm_pcieepx_ptm_ctl cavm_pcieepx_ptm_ctl_t;

static inline uint64_t CAVM_PCIEEPX_PTM_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_PTM_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x398 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x398 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x398 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x398 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_PTM_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_PTM_CTL(a) cavm_pcieepx_ptm_ctl_t
#define bustype_CAVM_PCIEEPX_PTM_CTL(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_PTM_CTL(a) "PCIEEPX_PTM_CTL"
#define busnum_CAVM_PCIEEPX_PTM_CTL(a) (a)
#define arguments_CAVM_PCIEEPX_PTM_CTL(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ptm_req_cap_hdr
 *
 * PCIe EP PF PTM Requester Capability Header Register
 */
union cavm_pcieepx_ptm_req_cap_hdr
{
    uint32_t u;
    struct cavm_pcieepx_ptm_req_cap_hdr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t nco                   : 12; /**< [ 31: 20](RO/WRSL) Next capability offset.
                                                                 Writable through PEM()_CFG_TBL(). */
        uint32_t cv                    : 4;  /**< [ 19: 16](RO/WRSL) Capability version.
                                                                 Writable through PEM()_CFG_TBL(). */
        uint32_t pcieec                : 16; /**< [ 15:  0](RO/WRSL) PCI Express extended capability.
                                                                 Writable through PEM()_CFG_TBL(). */
#else /* Word 0 - Little Endian */
        uint32_t pcieec                : 16; /**< [ 15:  0](RO/WRSL) PCI Express extended capability.
                                                                 Writable through PEM()_CFG_TBL(). */
        uint32_t cv                    : 4;  /**< [ 19: 16](RO/WRSL) Capability version.
                                                                 Writable through PEM()_CFG_TBL(). */
        uint32_t nco                   : 12; /**< [ 31: 20](RO/WRSL) Next capability offset.
                                                                 Writable through PEM()_CFG_TBL(). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ptm_req_cap_hdr_s cn; */
};
typedef union cavm_pcieepx_ptm_req_cap_hdr cavm_pcieepx_ptm_req_cap_hdr_t;

static inline uint64_t CAVM_PCIEEPX_PTM_REQ_CAP_HDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_PTM_REQ_CAP_HDR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x39c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x39c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x39c + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x39c + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_PTM_REQ_CAP_HDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_PTM_REQ_CAP_HDR(a) cavm_pcieepx_ptm_req_cap_hdr_t
#define bustype_CAVM_PCIEEPX_PTM_REQ_CAP_HDR(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_PTM_REQ_CAP_HDR(a) "PCIEEPX_PTM_REQ_CAP_HDR"
#define busnum_CAVM_PCIEEPX_PTM_REQ_CAP_HDR(a) (a)
#define arguments_CAVM_PCIEEPX_PTM_REQ_CAP_HDR(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ptm_req_ctl
 *
 * PCIe EP PF PTM Requester Vendor Specific Control Register
 */
union cavm_pcieepx_ptm_req_ctl
{
    uint32_t u;
    struct cavm_pcieepx_ptm_req_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_17_31        : 15;
        uint32_t pd_byterev            : 1;  /**< [ 16: 16](R/W) PTM requester propagation delay byte reverse

                                                                 0 = The PTM propagation delay word in the PTM response
                                                                 message is implemented as high order byte first.

                                                                 1 = The PTM propagation delay word in the PTM response
                                                                 message is implemented as low order byte first, which is not
                                                                 in accordance with the PCI-SIG interpretation. */
        uint32_t rlt                   : 8;  /**< [ 15:  8](R/W) PTM requester long timer.
                                                                 Determines the period between each auto update PTM Dialogue in miliseconds.
                                                                 Update period is the register value +1 milisecond. For the Switch product
                                                                 this value must not be set larger than 0x9 for spec compliance. For more
                                                                 details, see the PTM section in the Databook. */
        uint32_t reserved_3_7          : 5;
        uint32_t rft                   : 1;  /**< [  2:  2](R/W) PTM fast timers.
                                                                 Debug mode for PTM timers. The 100us timer output will go high at 30us and
                                                                 the 10ms timer output will go high at 100us (The Long Timer Value is ignored).
                                                                 There is no change to the 1us timer. The requester operation will otherwise
                                                                 remain the same. For more details, see the PTM section in the Databook. */
        uint32_t rsd                   : 1;  /**< [  1:  1](R/W1C) PTM requester start update.
                                                                 When set the PTM Requester will attempt a PTM Dialogue to update it's context;
                                                                 This bit is self clearing. For more details, see the PTM section in the Databook. */
        uint32_t rauen                 : 1;  /**< [  0:  0](R/W) PTM requester auto update enabled.
                                                                 When enabled, PTM Requester will automatically attempt to update its context every 10ms. */
#else /* Word 0 - Little Endian */
        uint32_t rauen                 : 1;  /**< [  0:  0](R/W) PTM requester auto update enabled.
                                                                 When enabled, PTM Requester will automatically attempt to update its context every 10ms. */
        uint32_t rsd                   : 1;  /**< [  1:  1](R/W1C) PTM requester start update.
                                                                 When set the PTM Requester will attempt a PTM Dialogue to update it's context;
                                                                 This bit is self clearing. For more details, see the PTM section in the Databook. */
        uint32_t rft                   : 1;  /**< [  2:  2](R/W) PTM fast timers.
                                                                 Debug mode for PTM timers. The 100us timer output will go high at 30us and
                                                                 the 10ms timer output will go high at 100us (The Long Timer Value is ignored).
                                                                 There is no change to the 1us timer. The requester operation will otherwise
                                                                 remain the same. For more details, see the PTM section in the Databook. */
        uint32_t reserved_3_7          : 5;
        uint32_t rlt                   : 8;  /**< [ 15:  8](R/W) PTM requester long timer.
                                                                 Determines the period between each auto update PTM Dialogue in miliseconds.
                                                                 Update period is the register value +1 milisecond. For the Switch product
                                                                 this value must not be set larger than 0x9 for spec compliance. For more
                                                                 details, see the PTM section in the Databook. */
        uint32_t pd_byterev            : 1;  /**< [ 16: 16](R/W) PTM requester propagation delay byte reverse

                                                                 0 = The PTM propagation delay word in the PTM response
                                                                 message is implemented as high order byte first.

                                                                 1 = The PTM propagation delay word in the PTM response
                                                                 message is implemented as low order byte first, which is not
                                                                 in accordance with the PCI-SIG interpretation. */
        uint32_t reserved_17_31        : 15;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ptm_req_ctl_s cn; */
};
typedef union cavm_pcieepx_ptm_req_ctl cavm_pcieepx_ptm_req_ctl_t;

static inline uint64_t CAVM_PCIEEPX_PTM_REQ_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_PTM_REQ_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x3a4 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x3a4 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x3a4 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x3a4 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_PTM_REQ_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_PTM_REQ_CTL(a) cavm_pcieepx_ptm_req_ctl_t
#define bustype_CAVM_PCIEEPX_PTM_REQ_CTL(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_PTM_REQ_CTL(a) "PCIEEPX_PTM_REQ_CTL"
#define busnum_CAVM_PCIEEPX_PTM_REQ_CTL(a) (a)
#define arguments_CAVM_PCIEEPX_PTM_REQ_CTL(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ptm_req_hdr
 *
 * PCIe EP PF PTM Requester Vendor Specific Header Register
 */
union cavm_pcieepx_ptm_req_hdr
{
    uint32_t u;
    struct cavm_pcieepx_ptm_req_hdr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t prvl                  : 12; /**< [ 31: 20](RO/WRSL) PTM requester VSEC length. */
        uint32_t prvr                  : 4;  /**< [ 19: 16](RO/WRSL) PTM requester VSEC revision. */
        uint32_t prvid                 : 16; /**< [ 15:  0](RO/WRSL) PTM requester VSEC ID. */
#else /* Word 0 - Little Endian */
        uint32_t prvid                 : 16; /**< [ 15:  0](RO/WRSL) PTM requester VSEC ID. */
        uint32_t prvr                  : 4;  /**< [ 19: 16](RO/WRSL) PTM requester VSEC revision. */
        uint32_t prvl                  : 12; /**< [ 31: 20](RO/WRSL) PTM requester VSEC length. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ptm_req_hdr_s cn; */
};
typedef union cavm_pcieepx_ptm_req_hdr cavm_pcieepx_ptm_req_hdr_t;

static inline uint64_t CAVM_PCIEEPX_PTM_REQ_HDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_PTM_REQ_HDR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x3a0 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x3a0 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x3a0 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x3a0 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_PTM_REQ_HDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_PTM_REQ_HDR(a) cavm_pcieepx_ptm_req_hdr_t
#define bustype_CAVM_PCIEEPX_PTM_REQ_HDR(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_PTM_REQ_HDR(a) "PCIEEPX_PTM_REQ_HDR"
#define busnum_CAVM_PCIEEPX_PTM_REQ_HDR(a) (a)
#define arguments_CAVM_PCIEEPX_PTM_REQ_HDR(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ptm_req_locall
 *
 * PCIe EP PF PTM Requester Local Clock LSB Register
 */
union cavm_pcieepx_ptm_req_locall
{
    uint32_t u;
    struct cavm_pcieepx_ptm_req_locall_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rll                   : 32; /**< [ 31:  0](RO/WRSL/H) PTM requester local clock lower 32 bits. */
#else /* Word 0 - Little Endian */
        uint32_t rll                   : 32; /**< [ 31:  0](RO/WRSL/H) PTM requester local clock lower 32 bits. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ptm_req_locall_s cn; */
};
typedef union cavm_pcieepx_ptm_req_locall cavm_pcieepx_ptm_req_locall_t;

static inline uint64_t CAVM_PCIEEPX_PTM_REQ_LOCALL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_PTM_REQ_LOCALL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x3ac + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x3ac + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x3ac + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x3ac + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_PTM_REQ_LOCALL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_PTM_REQ_LOCALL(a) cavm_pcieepx_ptm_req_locall_t
#define bustype_CAVM_PCIEEPX_PTM_REQ_LOCALL(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_PTM_REQ_LOCALL(a) "PCIEEPX_PTM_REQ_LOCALL"
#define busnum_CAVM_PCIEEPX_PTM_REQ_LOCALL(a) (a)
#define arguments_CAVM_PCIEEPX_PTM_REQ_LOCALL(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ptm_req_localm
 *
 * PCIe EP PF PTM Requester Local Clock MSB Register
 */
union cavm_pcieepx_ptm_req_localm
{
    uint32_t u;
    struct cavm_pcieepx_ptm_req_localm_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rlm                   : 32; /**< [ 31:  0](RO/WRSL/H) PTM requester local clock upper 32 bits. */
#else /* Word 0 - Little Endian */
        uint32_t rlm                   : 32; /**< [ 31:  0](RO/WRSL/H) PTM requester local clock upper 32 bits. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ptm_req_localm_s cn; */
};
typedef union cavm_pcieepx_ptm_req_localm cavm_pcieepx_ptm_req_localm_t;

static inline uint64_t CAVM_PCIEEPX_PTM_REQ_LOCALM(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_PTM_REQ_LOCALM(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x3b0 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x3b0 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x3b0 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x3b0 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_PTM_REQ_LOCALM", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_PTM_REQ_LOCALM(a) cavm_pcieepx_ptm_req_localm_t
#define bustype_CAVM_PCIEEPX_PTM_REQ_LOCALM(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_PTM_REQ_LOCALM(a) "PCIEEPX_PTM_REQ_LOCALM"
#define busnum_CAVM_PCIEEPX_PTM_REQ_LOCALM(a) (a)
#define arguments_CAVM_PCIEEPX_PTM_REQ_LOCALM(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ptm_req_mas1l
 *
 * PCIe EP PF PTM Requester Master Time at T1 LSB Register
 */
union cavm_pcieepx_ptm_req_mas1l
{
    uint32_t u;
    struct cavm_pcieepx_ptm_req_mas1l_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rml                   : 32; /**< [ 31:  0](RO/H) PTM requester master time at t1 lower 32 bits of the calculated master time at t1 prime. */
#else /* Word 0 - Little Endian */
        uint32_t rml                   : 32; /**< [ 31:  0](RO/H) PTM requester master time at t1 lower 32 bits of the calculated master time at t1 prime. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ptm_req_mas1l_s cn; */
};
typedef union cavm_pcieepx_ptm_req_mas1l cavm_pcieepx_ptm_req_mas1l_t;

static inline uint64_t CAVM_PCIEEPX_PTM_REQ_MAS1L(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_PTM_REQ_MAS1L(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x3e0 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x3e0 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x3e0 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x3e0 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_PTM_REQ_MAS1L", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_PTM_REQ_MAS1L(a) cavm_pcieepx_ptm_req_mas1l_t
#define bustype_CAVM_PCIEEPX_PTM_REQ_MAS1L(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_PTM_REQ_MAS1L(a) "PCIEEPX_PTM_REQ_MAS1L"
#define busnum_CAVM_PCIEEPX_PTM_REQ_MAS1L(a) (a)
#define arguments_CAVM_PCIEEPX_PTM_REQ_MAS1L(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ptm_req_mas1m
 *
 * PCIe EP PF PTM Requester Master Time at T1 MSB Register
 */
union cavm_pcieepx_ptm_req_mas1m
{
    uint32_t u;
    struct cavm_pcieepx_ptm_req_mas1m_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rmm                   : 32; /**< [ 31:  0](RO/H) PTM requester master time at t1 upper 32 bits of the calculated master time at t1 prime. */
#else /* Word 0 - Little Endian */
        uint32_t rmm                   : 32; /**< [ 31:  0](RO/H) PTM requester master time at t1 upper 32 bits of the calculated master time at t1 prime. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ptm_req_mas1m_s cn; */
};
typedef union cavm_pcieepx_ptm_req_mas1m cavm_pcieepx_ptm_req_mas1m_t;

static inline uint64_t CAVM_PCIEEPX_PTM_REQ_MAS1M(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_PTM_REQ_MAS1M(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x3e4 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x3e4 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x3e4 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x3e4 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_PTM_REQ_MAS1M", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_PTM_REQ_MAS1M(a) cavm_pcieepx_ptm_req_mas1m_t
#define bustype_CAVM_PCIEEPX_PTM_REQ_MAS1M(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_PTM_REQ_MAS1M(a) "PCIEEPX_PTM_REQ_MAS1M"
#define busnum_CAVM_PCIEEPX_PTM_REQ_MAS1M(a) (a)
#define arguments_CAVM_PCIEEPX_PTM_REQ_MAS1M(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ptm_req_masl
 *
 * PCIe EP PF PTM Requester Master Time LSB Register
 */
union cavm_pcieepx_ptm_req_masl
{
    uint32_t u;
    struct cavm_pcieepx_ptm_req_masl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rml                   : 32; /**< [ 31:  0](RO/H) PTM requester master time lower 32 bits sent from PTM responder. */
#else /* Word 0 - Little Endian */
        uint32_t rml                   : 32; /**< [ 31:  0](RO/H) PTM requester master time lower 32 bits sent from PTM responder. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ptm_req_masl_s cn; */
};
typedef union cavm_pcieepx_ptm_req_masl cavm_pcieepx_ptm_req_masl_t;

static inline uint64_t CAVM_PCIEEPX_PTM_REQ_MASL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_PTM_REQ_MASL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x3d4 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x3d4 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x3d4 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x3d4 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_PTM_REQ_MASL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_PTM_REQ_MASL(a) cavm_pcieepx_ptm_req_masl_t
#define bustype_CAVM_PCIEEPX_PTM_REQ_MASL(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_PTM_REQ_MASL(a) "PCIEEPX_PTM_REQ_MASL"
#define busnum_CAVM_PCIEEPX_PTM_REQ_MASL(a) (a)
#define arguments_CAVM_PCIEEPX_PTM_REQ_MASL(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ptm_req_masm
 *
 * PCIe EP PF PTM Requester Master Time MSB Register
 */
union cavm_pcieepx_ptm_req_masm
{
    uint32_t u;
    struct cavm_pcieepx_ptm_req_masm_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rmm                   : 32; /**< [ 31:  0](RO/H) PTM requester master time upper 32 bits sent from PTM responder. */
#else /* Word 0 - Little Endian */
        uint32_t rmm                   : 32; /**< [ 31:  0](RO/H) PTM requester master time upper 32 bits sent from PTM responder. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ptm_req_masm_s cn; */
};
typedef union cavm_pcieepx_ptm_req_masm cavm_pcieepx_ptm_req_masm_t;

static inline uint64_t CAVM_PCIEEPX_PTM_REQ_MASM(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_PTM_REQ_MASM(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x3d8 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x3d8 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x3d8 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x3d8 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_PTM_REQ_MASM", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_PTM_REQ_MASM(a) cavm_pcieepx_ptm_req_masm_t
#define bustype_CAVM_PCIEEPX_PTM_REQ_MASM(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_PTM_REQ_MASM(a) "PCIEEPX_PTM_REQ_MASM"
#define busnum_CAVM_PCIEEPX_PTM_REQ_MASM(a) (a)
#define arguments_CAVM_PCIEEPX_PTM_REQ_MASM(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ptm_req_pdly
 *
 * PCIe EP PF PTM Requester Propagation Delay Register
 */
union cavm_pcieepx_ptm_req_pdly
{
    uint32_t u;
    struct cavm_pcieepx_ptm_req_pdly_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rpd                   : 32; /**< [ 31:  0](RO/H) PTM requester propagation delay sent from PTM responder. */
#else /* Word 0 - Little Endian */
        uint32_t rpd                   : 32; /**< [ 31:  0](RO/H) PTM requester propagation delay sent from PTM responder. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ptm_req_pdly_s cn; */
};
typedef union cavm_pcieepx_ptm_req_pdly cavm_pcieepx_ptm_req_pdly_t;

static inline uint64_t CAVM_PCIEEPX_PTM_REQ_PDLY(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_PTM_REQ_PDLY(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x3dc + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x3dc + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x3dc + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x3dc + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_PTM_REQ_PDLY", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_PTM_REQ_PDLY(a) cavm_pcieepx_ptm_req_pdly_t
#define bustype_CAVM_PCIEEPX_PTM_REQ_PDLY(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_PTM_REQ_PDLY(a) "PCIEEPX_PTM_REQ_PDLY"
#define busnum_CAVM_PCIEEPX_PTM_REQ_PDLY(a) (a)
#define arguments_CAVM_PCIEEPX_PTM_REQ_PDLY(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ptm_req_rlat
 *
 * PCIe EP PF PTM Requester RX Latency Register
 */
union cavm_pcieepx_ptm_req_rlat
{
    uint32_t u;
    struct cavm_pcieepx_ptm_req_rlat_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_12_31        : 20;
        uint32_t rrl                   : 12; /**< [ 11:  0](R/W) PTM requester RX latency. */
#else /* Word 0 - Little Endian */
        uint32_t rrl                   : 12; /**< [ 11:  0](R/W) PTM requester RX latency. */
        uint32_t reserved_12_31        : 20;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ptm_req_rlat_s cn; */
};
typedef union cavm_pcieepx_ptm_req_rlat cavm_pcieepx_ptm_req_rlat_t;

static inline uint64_t CAVM_PCIEEPX_PTM_REQ_RLAT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_PTM_REQ_RLAT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x3ec + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x3ec + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x3ec + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x3ec + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_PTM_REQ_RLAT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_PTM_REQ_RLAT(a) cavm_pcieepx_ptm_req_rlat_t
#define bustype_CAVM_PCIEEPX_PTM_REQ_RLAT(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_PTM_REQ_RLAT(a) "PCIEEPX_PTM_REQ_RLAT"
#define busnum_CAVM_PCIEEPX_PTM_REQ_RLAT(a) (a)
#define arguments_CAVM_PCIEEPX_PTM_REQ_RLAT(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ptm_req_stat
 *
 * PCIe EP PF PTM Requester Vendor Specific Status Register
 */
union cavm_pcieepx_ptm_req_stat
{
    uint32_t u;
    struct cavm_pcieepx_ptm_req_stat_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_2_31         : 30;
        uint32_t rmua                  : 1;  /**< [  1:  1](RO) PTM requester manual update allowed.
                                                                 Indicates whether or not a manual update can be signalled. */
        uint32_t rcv                   : 1;  /**< [  0:  0](RO) PTM requester context valid. */
#else /* Word 0 - Little Endian */
        uint32_t rcv                   : 1;  /**< [  0:  0](RO) PTM requester context valid. */
        uint32_t rmua                  : 1;  /**< [  1:  1](RO) PTM requester manual update allowed.
                                                                 Indicates whether or not a manual update can be signalled. */
        uint32_t reserved_2_31         : 30;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ptm_req_stat_s cn; */
};
typedef union cavm_pcieepx_ptm_req_stat cavm_pcieepx_ptm_req_stat_t;

static inline uint64_t CAVM_PCIEEPX_PTM_REQ_STAT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_PTM_REQ_STAT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x3a8 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x3a8 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x3a8 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x3a8 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_PTM_REQ_STAT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_PTM_REQ_STAT(a) cavm_pcieepx_ptm_req_stat_t
#define bustype_CAVM_PCIEEPX_PTM_REQ_STAT(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_PTM_REQ_STAT(a) "PCIEEPX_PTM_REQ_STAT"
#define busnum_CAVM_PCIEEPX_PTM_REQ_STAT(a) (a)
#define arguments_CAVM_PCIEEPX_PTM_REQ_STAT(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ptm_req_t1l
 *
 * PCIe EP PF PTM Requester T1 Timestamp LSB Register
 */
union cavm_pcieepx_ptm_req_t1l
{
    uint32_t u;
    struct cavm_pcieepx_ptm_req_t1l_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rtl                   : 32; /**< [ 31:  0](RO/H) PTM requester t1 timestamp lower 32 bits. */
#else /* Word 0 - Little Endian */
        uint32_t rtl                   : 32; /**< [ 31:  0](RO/H) PTM requester t1 timestamp lower 32 bits. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ptm_req_t1l_s cn; */
};
typedef union cavm_pcieepx_ptm_req_t1l cavm_pcieepx_ptm_req_t1l_t;

static inline uint64_t CAVM_PCIEEPX_PTM_REQ_T1L(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_PTM_REQ_T1L(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x3b4 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x3b4 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x3b4 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x3b4 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_PTM_REQ_T1L", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_PTM_REQ_T1L(a) cavm_pcieepx_ptm_req_t1l_t
#define bustype_CAVM_PCIEEPX_PTM_REQ_T1L(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_PTM_REQ_T1L(a) "PCIEEPX_PTM_REQ_T1L"
#define busnum_CAVM_PCIEEPX_PTM_REQ_T1L(a) (a)
#define arguments_CAVM_PCIEEPX_PTM_REQ_T1L(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ptm_req_t1m
 *
 * PCIe EP PF PTM Requester T1 Timestamp MSB Register
 */
union cavm_pcieepx_ptm_req_t1m
{
    uint32_t u;
    struct cavm_pcieepx_ptm_req_t1m_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rtm                   : 32; /**< [ 31:  0](RO/H) PTM requester t1 timestamp upper 32 bits. */
#else /* Word 0 - Little Endian */
        uint32_t rtm                   : 32; /**< [ 31:  0](RO/H) PTM requester t1 timestamp upper 32 bits. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ptm_req_t1m_s cn; */
};
typedef union cavm_pcieepx_ptm_req_t1m cavm_pcieepx_ptm_req_t1m_t;

static inline uint64_t CAVM_PCIEEPX_PTM_REQ_T1M(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_PTM_REQ_T1M(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x3b8 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x3b8 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x3b8 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x3b8 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_PTM_REQ_T1M", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_PTM_REQ_T1M(a) cavm_pcieepx_ptm_req_t1m_t
#define bustype_CAVM_PCIEEPX_PTM_REQ_T1M(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_PTM_REQ_T1M(a) "PCIEEPX_PTM_REQ_T1M"
#define busnum_CAVM_PCIEEPX_PTM_REQ_T1M(a) (a)
#define arguments_CAVM_PCIEEPX_PTM_REQ_T1M(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ptm_req_t1pl
 *
 * PCIe EP PF PTM Requester T1 Previous Timestamp LSB Register
 */
union cavm_pcieepx_ptm_req_t1pl
{
    uint32_t u;
    struct cavm_pcieepx_ptm_req_t1pl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rtl                   : 32; /**< [ 31:  0](RO/H) PTM requester t1 previous timestamp lower 32 bits. */
#else /* Word 0 - Little Endian */
        uint32_t rtl                   : 32; /**< [ 31:  0](RO/H) PTM requester t1 previous timestamp lower 32 bits. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ptm_req_t1pl_s cn; */
};
typedef union cavm_pcieepx_ptm_req_t1pl cavm_pcieepx_ptm_req_t1pl_t;

static inline uint64_t CAVM_PCIEEPX_PTM_REQ_T1PL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_PTM_REQ_T1PL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x3bc + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x3bc + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x3bc + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x3bc + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_PTM_REQ_T1PL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_PTM_REQ_T1PL(a) cavm_pcieepx_ptm_req_t1pl_t
#define bustype_CAVM_PCIEEPX_PTM_REQ_T1PL(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_PTM_REQ_T1PL(a) "PCIEEPX_PTM_REQ_T1PL"
#define busnum_CAVM_PCIEEPX_PTM_REQ_T1PL(a) (a)
#define arguments_CAVM_PCIEEPX_PTM_REQ_T1PL(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ptm_req_t1pm
 *
 * PCIe EP PF PTM Requester T1 Previous Timestamp MSB Register
 */
union cavm_pcieepx_ptm_req_t1pm
{
    uint32_t u;
    struct cavm_pcieepx_ptm_req_t1pm_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rtm                   : 32; /**< [ 31:  0](RO/H) PTM requester t1 previous timestamp upper 32 bits. */
#else /* Word 0 - Little Endian */
        uint32_t rtm                   : 32; /**< [ 31:  0](RO/H) PTM requester t1 previous timestamp upper 32 bits. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ptm_req_t1pm_s cn; */
};
typedef union cavm_pcieepx_ptm_req_t1pm cavm_pcieepx_ptm_req_t1pm_t;

static inline uint64_t CAVM_PCIEEPX_PTM_REQ_T1PM(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_PTM_REQ_T1PM(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x3c0 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x3c0 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x3c0 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x3c0 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_PTM_REQ_T1PM", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_PTM_REQ_T1PM(a) cavm_pcieepx_ptm_req_t1pm_t
#define bustype_CAVM_PCIEEPX_PTM_REQ_T1PM(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_PTM_REQ_T1PM(a) "PCIEEPX_PTM_REQ_T1PM"
#define busnum_CAVM_PCIEEPX_PTM_REQ_T1PM(a) (a)
#define arguments_CAVM_PCIEEPX_PTM_REQ_T1PM(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ptm_req_t4l
 *
 * PCIe EP PF PTM Requester T4 Timestamp LSB Register
 */
union cavm_pcieepx_ptm_req_t4l
{
    uint32_t u;
    struct cavm_pcieepx_ptm_req_t4l_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rtl                   : 32; /**< [ 31:  0](RO/H) PTM requester t4 timestamp lower 32 bits. */
#else /* Word 0 - Little Endian */
        uint32_t rtl                   : 32; /**< [ 31:  0](RO/H) PTM requester t4 timestamp lower 32 bits. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ptm_req_t4l_s cn; */
};
typedef union cavm_pcieepx_ptm_req_t4l cavm_pcieepx_ptm_req_t4l_t;

static inline uint64_t CAVM_PCIEEPX_PTM_REQ_T4L(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_PTM_REQ_T4L(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x3c4 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x3c4 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x3c4 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x3c4 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_PTM_REQ_T4L", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_PTM_REQ_T4L(a) cavm_pcieepx_ptm_req_t4l_t
#define bustype_CAVM_PCIEEPX_PTM_REQ_T4L(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_PTM_REQ_T4L(a) "PCIEEPX_PTM_REQ_T4L"
#define busnum_CAVM_PCIEEPX_PTM_REQ_T4L(a) (a)
#define arguments_CAVM_PCIEEPX_PTM_REQ_T4L(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ptm_req_t4m
 *
 * PCIe EP PF PTM Requester T4 Timestamp MSB Register
 */
union cavm_pcieepx_ptm_req_t4m
{
    uint32_t u;
    struct cavm_pcieepx_ptm_req_t4m_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rtm                   : 32; /**< [ 31:  0](RO/H) PTM requester t4 timestamp upper 32 bits. */
#else /* Word 0 - Little Endian */
        uint32_t rtm                   : 32; /**< [ 31:  0](RO/H) PTM requester t4 timestamp upper 32 bits. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ptm_req_t4m_s cn; */
};
typedef union cavm_pcieepx_ptm_req_t4m cavm_pcieepx_ptm_req_t4m_t;

static inline uint64_t CAVM_PCIEEPX_PTM_REQ_T4M(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_PTM_REQ_T4M(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x3c8 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x3c8 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x3c8 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x3c8 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_PTM_REQ_T4M", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_PTM_REQ_T4M(a) cavm_pcieepx_ptm_req_t4m_t
#define bustype_CAVM_PCIEEPX_PTM_REQ_T4M(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_PTM_REQ_T4M(a) "PCIEEPX_PTM_REQ_T4M"
#define busnum_CAVM_PCIEEPX_PTM_REQ_T4M(a) (a)
#define arguments_CAVM_PCIEEPX_PTM_REQ_T4M(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ptm_req_t4pl
 *
 * PCIe EP PF PTM Requester T4 Previous Timestamp LSB Register
 */
union cavm_pcieepx_ptm_req_t4pl
{
    uint32_t u;
    struct cavm_pcieepx_ptm_req_t4pl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rtl                   : 32; /**< [ 31:  0](RO/H) PTM requester t4 previous timestamp lower 32 bits. */
#else /* Word 0 - Little Endian */
        uint32_t rtl                   : 32; /**< [ 31:  0](RO/H) PTM requester t4 previous timestamp lower 32 bits. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ptm_req_t4pl_s cn; */
};
typedef union cavm_pcieepx_ptm_req_t4pl cavm_pcieepx_ptm_req_t4pl_t;

static inline uint64_t CAVM_PCIEEPX_PTM_REQ_T4PL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_PTM_REQ_T4PL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x3cc + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x3cc + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x3cc + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x3cc + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_PTM_REQ_T4PL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_PTM_REQ_T4PL(a) cavm_pcieepx_ptm_req_t4pl_t
#define bustype_CAVM_PCIEEPX_PTM_REQ_T4PL(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_PTM_REQ_T4PL(a) "PCIEEPX_PTM_REQ_T4PL"
#define busnum_CAVM_PCIEEPX_PTM_REQ_T4PL(a) (a)
#define arguments_CAVM_PCIEEPX_PTM_REQ_T4PL(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ptm_req_t4pm
 *
 * PCIe EP PF PTM Requester T4 Previous Timestamp MSB Register
 */
union cavm_pcieepx_ptm_req_t4pm
{
    uint32_t u;
    struct cavm_pcieepx_ptm_req_t4pm_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rtm                   : 32; /**< [ 31:  0](RO/H) PTM requester t4 previous timestamp upper 32 bits. */
#else /* Word 0 - Little Endian */
        uint32_t rtm                   : 32; /**< [ 31:  0](RO/H) PTM requester t4 previous timestamp upper 32 bits. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ptm_req_t4pm_s cn; */
};
typedef union cavm_pcieepx_ptm_req_t4pm cavm_pcieepx_ptm_req_t4pm_t;

static inline uint64_t CAVM_PCIEEPX_PTM_REQ_T4PM(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_PTM_REQ_T4PM(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x3d0 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x3d0 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x3d0 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x3d0 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_PTM_REQ_T4PM", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_PTM_REQ_T4PM(a) cavm_pcieepx_ptm_req_t4pm_t
#define bustype_CAVM_PCIEEPX_PTM_REQ_T4PM(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_PTM_REQ_T4PM(a) "PCIEEPX_PTM_REQ_T4PM"
#define busnum_CAVM_PCIEEPX_PTM_REQ_T4PM(a) (a)
#define arguments_CAVM_PCIEEPX_PTM_REQ_T4PM(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ptm_req_tlat
 *
 * PCIe EP PF PTM Requester TX Latency Register
 */
union cavm_pcieepx_ptm_req_tlat
{
    uint32_t u;
    struct cavm_pcieepx_ptm_req_tlat_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_12_31        : 20;
        uint32_t rtl                   : 12; /**< [ 11:  0](R/W) PTM requester TX latency. */
#else /* Word 0 - Little Endian */
        uint32_t rtl                   : 12; /**< [ 11:  0](R/W) PTM requester TX latency. */
        uint32_t reserved_12_31        : 20;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ptm_req_tlat_s cn; */
};
typedef union cavm_pcieepx_ptm_req_tlat cavm_pcieepx_ptm_req_tlat_t;

static inline uint64_t CAVM_PCIEEPX_PTM_REQ_TLAT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_PTM_REQ_TLAT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x3e8 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x3e8 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x3e8 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x3e8 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_PTM_REQ_TLAT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_PTM_REQ_TLAT(a) cavm_pcieepx_ptm_req_tlat_t
#define bustype_CAVM_PCIEEPX_PTM_REQ_TLAT(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_PTM_REQ_TLAT(a) "PCIEEPX_PTM_REQ_TLAT"
#define busnum_CAVM_PCIEEPX_PTM_REQ_TLAT(a) (a)
#define arguments_CAVM_PCIEEPX_PTM_REQ_TLAT(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_queue_status
 *
 * PCIe EP PF Queue Status Register
 */
union cavm_pcieepx_queue_status
{
    uint32_t u;
    struct cavm_pcieepx_queue_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t fcltoe                : 1;  /**< [ 31: 31](R/W) FC latency timer override enable. When this bit is set, the value in
                                                                 PCIEEP_QUEUE_STATUS[FCLTOV] will override the FC latency timer value that the
                                                                 core calculates according to the PCIe specification. */
        uint32_t reserved_29_30        : 2;
        uint32_t fcltov                : 13; /**< [ 28: 16](R/W) FC latency timer override value. When you set PCIEEP_QUEUE_STATUS[FCLTOE], the
                                                                 value in this field will override the FC latency timer value that the core
                                                                 calculates according to the PCIe specification. */
        uint32_t rsqre                 : 1;  /**< [ 15: 15](R/W1C) Receive serialization queue read error. Indicates the serialization queue has
                                                                 attempted to read an incorrectly formatted TLP. */
        uint32_t rsqwe                 : 1;  /**< [ 14: 14](R/W1C) Receive serialization queue write error. Indicates insufficient buffer space
                                                                 available to write to the serialization queue. */
        uint32_t rsqne                 : 1;  /**< [ 13: 13](RO/H) Receive serialization queue not empty. Indicates there is data in the serialization queue. */
        uint32_t reserved_4_12         : 9;
        uint32_t rqof                  : 1;  /**< [  3:  3](R/W1C) Receive credit queue overflow. Indicates insufficient buffer space available to
                                                                 write to the P/NP/CPL credit queue. */
        uint32_t rqne                  : 1;  /**< [  2:  2](RO/H) Received queue not empty. Indicates there is data in one or more of the receive buffers. */
        uint32_t trbne                 : 1;  /**< [  1:  1](RO/H) Transmit retry buffer not empty. Indicates that there is data in the transmit retry buffer. */
        uint32_t rtlpfccnr             : 1;  /**< [  0:  0](RO/H) Received TLP FC credits not returned. Indicates that the PCI Express bus has sent a TLP
                                                                 but has not yet received an UpdateFC DLLP indicating that the credits for that TLP have
                                                                 been restored by the receiver at the other end of the link. */
#else /* Word 0 - Little Endian */
        uint32_t rtlpfccnr             : 1;  /**< [  0:  0](RO/H) Received TLP FC credits not returned. Indicates that the PCI Express bus has sent a TLP
                                                                 but has not yet received an UpdateFC DLLP indicating that the credits for that TLP have
                                                                 been restored by the receiver at the other end of the link. */
        uint32_t trbne                 : 1;  /**< [  1:  1](RO/H) Transmit retry buffer not empty. Indicates that there is data in the transmit retry buffer. */
        uint32_t rqne                  : 1;  /**< [  2:  2](RO/H) Received queue not empty. Indicates there is data in one or more of the receive buffers. */
        uint32_t rqof                  : 1;  /**< [  3:  3](R/W1C) Receive credit queue overflow. Indicates insufficient buffer space available to
                                                                 write to the P/NP/CPL credit queue. */
        uint32_t reserved_4_12         : 9;
        uint32_t rsqne                 : 1;  /**< [ 13: 13](RO/H) Receive serialization queue not empty. Indicates there is data in the serialization queue. */
        uint32_t rsqwe                 : 1;  /**< [ 14: 14](R/W1C) Receive serialization queue write error. Indicates insufficient buffer space
                                                                 available to write to the serialization queue. */
        uint32_t rsqre                 : 1;  /**< [ 15: 15](R/W1C) Receive serialization queue read error. Indicates the serialization queue has
                                                                 attempted to read an incorrectly formatted TLP. */
        uint32_t fcltov                : 13; /**< [ 28: 16](R/W) FC latency timer override value. When you set PCIEEP_QUEUE_STATUS[FCLTOE], the
                                                                 value in this field will override the FC latency timer value that the core
                                                                 calculates according to the PCIe specification. */
        uint32_t reserved_29_30        : 2;
        uint32_t fcltoe                : 1;  /**< [ 31: 31](R/W) FC latency timer override enable. When this bit is set, the value in
                                                                 PCIEEP_QUEUE_STATUS[FCLTOV] will override the FC latency timer value that the
                                                                 core calculates according to the PCIe specification. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_queue_status_s cn; */
};
typedef union cavm_pcieepx_queue_status cavm_pcieepx_queue_status_t;

static inline uint64_t CAVM_PCIEEPX_QUEUE_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_QUEUE_STATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x73c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x73c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x73c + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x73c + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_QUEUE_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_QUEUE_STATUS(a) cavm_pcieepx_queue_status_t
#define bustype_CAVM_PCIEEPX_QUEUE_STATUS(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_QUEUE_STATUS(a) "PCIEEPX_QUEUE_STATUS"
#define busnum_CAVM_PCIEEPX_QUEUE_STATUS(a) (a)
#define arguments_CAVM_PCIEEPX_QUEUE_STATUS(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ras_des_cap_hdr
 *
 * PCIe EP Vendor Specific RAS DES Capability Header Register
 */
union cavm_pcieepx_ras_des_cap_hdr
{
    uint32_t u;
    struct cavm_pcieepx_ras_des_cap_hdr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t nco                   : 12; /**< [ 31: 20](RO/WRSL) Next capability offset.  Points to the Vendor Specific RAS Data Path Protection
                                                                 capabilities.
                                                                 Writable through PEM()_CFG_TBL(). */
        uint32_t cv                    : 4;  /**< [ 19: 16](RO/WRSL) Capability version.
                                                                 Writable through PEM()_CFG_TBL(). */
        uint32_t pcieec                : 16; /**< [ 15:  0](RO/WRSL) PCI Express extended capability.
                                                                 Writable through PEM()_CFG_TBL(). */
#else /* Word 0 - Little Endian */
        uint32_t pcieec                : 16; /**< [ 15:  0](RO/WRSL) PCI Express extended capability.
                                                                 Writable through PEM()_CFG_TBL(). */
        uint32_t cv                    : 4;  /**< [ 19: 16](RO/WRSL) Capability version.
                                                                 Writable through PEM()_CFG_TBL(). */
        uint32_t nco                   : 12; /**< [ 31: 20](RO/WRSL) Next capability offset.  Points to the Vendor Specific RAS Data Path Protection
                                                                 capabilities.
                                                                 Writable through PEM()_CFG_TBL(). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ras_des_cap_hdr_s cn; */
};
typedef union cavm_pcieepx_ras_des_cap_hdr cavm_pcieepx_ras_des_cap_hdr_t;

static inline uint64_t CAVM_PCIEEPX_RAS_DES_CAP_HDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_RAS_DES_CAP_HDR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x24c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x24c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x24c + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x24c + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_RAS_DES_CAP_HDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_RAS_DES_CAP_HDR(a) cavm_pcieepx_ras_des_cap_hdr_t
#define bustype_CAVM_PCIEEPX_RAS_DES_CAP_HDR(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_RAS_DES_CAP_HDR(a) "PCIEEPX_RAS_DES_CAP_HDR"
#define busnum_CAVM_PCIEEPX_RAS_DES_CAP_HDR(a) (a)
#define arguments_CAVM_PCIEEPX_RAS_DES_CAP_HDR(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ras_ec_ctl
 *
 * PCIe EP Vendor RAS DES Event Counter Control Register
 */
union cavm_pcieepx_ras_ec_ctl
{
    uint32_t u;
    struct cavm_pcieepx_ras_ec_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_28_31        : 4;
        uint32_t ev_cntr_data_sel      : 12; /**< [ 27: 16](R/W) Event counter data select.  This field in conjunction with [EV_CNTR_LANE_SEL]
                                                                 selects PCIEEP_RAS_EC_DATA[EV_CNTR_DATA].
                                                                 _ \<27:24\> = Group number (0..0x7).
                                                                 _ \<23:16\> = Event number (0..0x13). */
        uint32_t reserved_12_15        : 4;
        uint32_t ev_cntr_lane_sel      : 4;  /**< [ 11:  8](R/W) Event counter lane select.  This field in conjunction with [EV_CNTR_DATA_SEL]
                                                                 indexes the event counter data returned in the PCIEEP_RAS_EC_DATA[EV_CNTR_DATA].

                                                                 0x0-0x7 = Lane number.
                                                                 0x8-0xF = Reserved. */
        uint32_t ev_cntr_stat          : 1;  /**< [  7:  7](RO/H) Event counter status.  Returns the enable status of the event counter
                                                                 selected by [EV_CNTR_DATA_SEL] and [EV_CNTR_LANE_SEL]. */
        uint32_t reserved_5_6          : 2;
        uint32_t ev_cntr_en            : 3;  /**< [  4:  2](WO) Event counter enable.  Enables/disables the event counter
                                                                 selected by [EV_CNTR_DATA_SEL] and [EV_CNTR_LANE_SEL].
                                                                 By default, all event counters are disabled.  This field
                                                                 always reads zeros.

                                                                 0x0 = No change.
                                                                 0x1 = Per event off.
                                                                 0x2 = No change.
                                                                 0x3 = Per event on.
                                                                 0x4 = No change.
                                                                 0x5 = All off.
                                                                 0x6 = No change.
                                                                 0x7 = All on. */
        uint32_t ev_cntr_clr           : 2;  /**< [  1:  0](WO) Event counter clear. Clears the event counters
                                                                 selected by [EV_CNTR_DATA_SEL] and [EV_CNTR_LANE_SEL].
                                                                 By default, all event counters are disabled.  This field
                                                                 always reads zeros.

                                                                 0x0 = No change.
                                                                 0x1 = Per clear.
                                                                 0x2 = No change.
                                                                 0x3 = All clear. */
#else /* Word 0 - Little Endian */
        uint32_t ev_cntr_clr           : 2;  /**< [  1:  0](WO) Event counter clear. Clears the event counters
                                                                 selected by [EV_CNTR_DATA_SEL] and [EV_CNTR_LANE_SEL].
                                                                 By default, all event counters are disabled.  This field
                                                                 always reads zeros.

                                                                 0x0 = No change.
                                                                 0x1 = Per clear.
                                                                 0x2 = No change.
                                                                 0x3 = All clear. */
        uint32_t ev_cntr_en            : 3;  /**< [  4:  2](WO) Event counter enable.  Enables/disables the event counter
                                                                 selected by [EV_CNTR_DATA_SEL] and [EV_CNTR_LANE_SEL].
                                                                 By default, all event counters are disabled.  This field
                                                                 always reads zeros.

                                                                 0x0 = No change.
                                                                 0x1 = Per event off.
                                                                 0x2 = No change.
                                                                 0x3 = Per event on.
                                                                 0x4 = No change.
                                                                 0x5 = All off.
                                                                 0x6 = No change.
                                                                 0x7 = All on. */
        uint32_t reserved_5_6          : 2;
        uint32_t ev_cntr_stat          : 1;  /**< [  7:  7](RO/H) Event counter status.  Returns the enable status of the event counter
                                                                 selected by [EV_CNTR_DATA_SEL] and [EV_CNTR_LANE_SEL]. */
        uint32_t ev_cntr_lane_sel      : 4;  /**< [ 11:  8](R/W) Event counter lane select.  This field in conjunction with [EV_CNTR_DATA_SEL]
                                                                 indexes the event counter data returned in the PCIEEP_RAS_EC_DATA[EV_CNTR_DATA].

                                                                 0x0-0x7 = Lane number.
                                                                 0x8-0xF = Reserved. */
        uint32_t reserved_12_15        : 4;
        uint32_t ev_cntr_data_sel      : 12; /**< [ 27: 16](R/W) Event counter data select.  This field in conjunction with [EV_CNTR_LANE_SEL]
                                                                 selects PCIEEP_RAS_EC_DATA[EV_CNTR_DATA].
                                                                 _ \<27:24\> = Group number (0..0x7).
                                                                 _ \<23:16\> = Event number (0..0x13). */
        uint32_t reserved_28_31        : 4;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ras_ec_ctl_s cn; */
};
typedef union cavm_pcieepx_ras_ec_ctl cavm_pcieepx_ras_ec_ctl_t;

static inline uint64_t CAVM_PCIEEPX_RAS_EC_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_RAS_EC_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x254 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x254 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x254 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x254 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_RAS_EC_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_RAS_EC_CTL(a) cavm_pcieepx_ras_ec_ctl_t
#define bustype_CAVM_PCIEEPX_RAS_EC_CTL(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_RAS_EC_CTL(a) "PCIEEPX_RAS_EC_CTL"
#define busnum_CAVM_PCIEEPX_RAS_EC_CTL(a) (a)
#define arguments_CAVM_PCIEEPX_RAS_EC_CTL(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ras_ec_data
 *
 * PCIe EP Vendor RAS DES Data Register
 */
union cavm_pcieepx_ras_ec_data
{
    uint32_t u;
    struct cavm_pcieepx_ras_ec_data_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t ev_cntr_data          : 32; /**< [ 31:  0](RO/H) Event counter data.  This field returns data selected by
                                                                 PCIEEP_RAS_EC_CTL[EV_CNTR_DATA_SEL]
                                                                 and PCIEEP_RAS_EC_CTL[EV_CNTR_LANE_SEL]. */
#else /* Word 0 - Little Endian */
        uint32_t ev_cntr_data          : 32; /**< [ 31:  0](RO/H) Event counter data.  This field returns data selected by
                                                                 PCIEEP_RAS_EC_CTL[EV_CNTR_DATA_SEL]
                                                                 and PCIEEP_RAS_EC_CTL[EV_CNTR_LANE_SEL]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ras_ec_data_s cn; */
};
typedef union cavm_pcieepx_ras_ec_data cavm_pcieepx_ras_ec_data_t;

static inline uint64_t CAVM_PCIEEPX_RAS_EC_DATA(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_RAS_EC_DATA(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x258 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x258 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x258 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x258 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_RAS_EC_DATA", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_RAS_EC_DATA(a) cavm_pcieepx_ras_ec_data_t
#define bustype_CAVM_PCIEEPX_RAS_EC_DATA(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_RAS_EC_DATA(a) "PCIEEPX_RAS_EC_DATA"
#define busnum_CAVM_PCIEEPX_RAS_EC_DATA(a) (a)
#define arguments_CAVM_PCIEEPX_RAS_EC_DATA(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ras_einj_ctl0
 *
 * PCIe EP Vendor RAS DES Error Injection Control 0 (CRC) Register
 */
union cavm_pcieepx_ras_einj_ctl0
{
    uint32_t u;
    struct cavm_pcieepx_ras_einj_ctl0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_12_31        : 20;
        uint32_t einj0_crc_type        : 4;  /**< [ 11:  8](R/W) Error injection type.  Selects the type of CRC error tp in inserted.

                                                                 TX path:
                                                                 0x0 = New TLP's LCRC error injection.
                                                                 0x1 = 16bCRC error injection of ACK/NAK DLLP.
                                                                 0x2 = 16bCRC error injection of Update-FC DLLP.
                                                                 0x3 = New TLP's ECRC error injection.
                                                                 0x4 = TLP's FCRC error injection (128b/130b).
                                                                 0x5 = Parity error of TSOS (128b/130b).
                                                                 0x6 = Parity error of SKPOS (128b/130b).
                                                                 0x7 = Reserved.

                                                                 RX path:
                                                                 0x8 = LCRC error injection.
                                                                 0x9 = ECRC error injection.
                                                                 0xA - 0xF = Reserved. */
        uint32_t einj0_cnt             : 8;  /**< [  7:  0](R/W) Error injection count.  Indicates the number of errors.
                                                                 This register is decremented when errors are inserted.

                                                                 If the counter value is 0x1 and error is inserted,
                                                                 PCIEEP_RAS_EINJ_EN[EINJ0_EN] returns zero.

                                                                 If the counter value is 0x0 and PCIEEP_RAS_EINJ_EN[EINJ0_EN] is set,
                                                                 errors are inserted until PCIEEP_RAS_EINJ_EN[EINJ0_EN] is cleared. */
#else /* Word 0 - Little Endian */
        uint32_t einj0_cnt             : 8;  /**< [  7:  0](R/W) Error injection count.  Indicates the number of errors.
                                                                 This register is decremented when errors are inserted.

                                                                 If the counter value is 0x1 and error is inserted,
                                                                 PCIEEP_RAS_EINJ_EN[EINJ0_EN] returns zero.

                                                                 If the counter value is 0x0 and PCIEEP_RAS_EINJ_EN[EINJ0_EN] is set,
                                                                 errors are inserted until PCIEEP_RAS_EINJ_EN[EINJ0_EN] is cleared. */
        uint32_t einj0_crc_type        : 4;  /**< [ 11:  8](R/W) Error injection type.  Selects the type of CRC error tp in inserted.

                                                                 TX path:
                                                                 0x0 = New TLP's LCRC error injection.
                                                                 0x1 = 16bCRC error injection of ACK/NAK DLLP.
                                                                 0x2 = 16bCRC error injection of Update-FC DLLP.
                                                                 0x3 = New TLP's ECRC error injection.
                                                                 0x4 = TLP's FCRC error injection (128b/130b).
                                                                 0x5 = Parity error of TSOS (128b/130b).
                                                                 0x6 = Parity error of SKPOS (128b/130b).
                                                                 0x7 = Reserved.

                                                                 RX path:
                                                                 0x8 = LCRC error injection.
                                                                 0x9 = ECRC error injection.
                                                                 0xA - 0xF = Reserved. */
        uint32_t reserved_12_31        : 20;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ras_einj_ctl0_s cn; */
};
typedef union cavm_pcieepx_ras_einj_ctl0 cavm_pcieepx_ras_einj_ctl0_t;

static inline uint64_t CAVM_PCIEEPX_RAS_EINJ_CTL0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_RAS_EINJ_CTL0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x280 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x280 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x280 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x280 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_RAS_EINJ_CTL0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_RAS_EINJ_CTL0(a) cavm_pcieepx_ras_einj_ctl0_t
#define bustype_CAVM_PCIEEPX_RAS_EINJ_CTL0(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_RAS_EINJ_CTL0(a) "PCIEEPX_RAS_EINJ_CTL0"
#define busnum_CAVM_PCIEEPX_RAS_EINJ_CTL0(a) (a)
#define arguments_CAVM_PCIEEPX_RAS_EINJ_CTL0(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ras_einj_ctl1
 *
 * PCIe EP Vendor RAS DES Error Injection Control 1 (SEQNUM) Register
 */
union cavm_pcieepx_ras_einj_ctl1
{
    uint32_t u;
    struct cavm_pcieepx_ras_einj_ctl1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_29_31        : 3;
        uint32_t einj1_bad_seqnum      : 13; /**< [ 28: 16](R/W) Bad sequence number. Indicates the value to add/subtract
                                                                 from the naturally-assigned sequence numbers. This value is
                                                                 represented by two's complement.

                                                                 0x0FFF = +4095.

                                                                 0x0002 = +2.
                                                                 0x0001 = +1.
                                                                 0x0000 = 0.
                                                                 0x1FFF = -1.
                                                                 0x1FFE = -2.

                                                                 0x1001 = -4095. */
        uint32_t reserved_9_15         : 7;
        uint32_t einj1_seqnum_type     : 1;  /**< [  8:  8](R/W) Sequence number type.  Selects the type of sequence number.

                                                                 0x0 = Insertion of New TLP's SEQ error.
                                                                 0x1 = Insertion of ACK/NAK DLLP's SEQ error. */
        uint32_t einj1_cnt             : 8;  /**< [  7:  0](R/W) Error injection count.  Indicates the number of errors.
                                                                 This register is decremented when errors are inserted.

                                                                 If the counter value is 0x1 and error is inserted,
                                                                 PCIEEP_RAS_EINJ_EN[EINJ1_EN] returns zero.

                                                                 If the counter value is 0x0 and PCIEEP_RAS_EINJ_EN[EINJ1_EN] is set,
                                                                 errors are inserted until PCIEEP_RAS_EINJ_EN[EINJ1_EN] is cleared. */
#else /* Word 0 - Little Endian */
        uint32_t einj1_cnt             : 8;  /**< [  7:  0](R/W) Error injection count.  Indicates the number of errors.
                                                                 This register is decremented when errors are inserted.

                                                                 If the counter value is 0x1 and error is inserted,
                                                                 PCIEEP_RAS_EINJ_EN[EINJ1_EN] returns zero.

                                                                 If the counter value is 0x0 and PCIEEP_RAS_EINJ_EN[EINJ1_EN] is set,
                                                                 errors are inserted until PCIEEP_RAS_EINJ_EN[EINJ1_EN] is cleared. */
        uint32_t einj1_seqnum_type     : 1;  /**< [  8:  8](R/W) Sequence number type.  Selects the type of sequence number.

                                                                 0x0 = Insertion of New TLP's SEQ error.
                                                                 0x1 = Insertion of ACK/NAK DLLP's SEQ error. */
        uint32_t reserved_9_15         : 7;
        uint32_t einj1_bad_seqnum      : 13; /**< [ 28: 16](R/W) Bad sequence number. Indicates the value to add/subtract
                                                                 from the naturally-assigned sequence numbers. This value is
                                                                 represented by two's complement.

                                                                 0x0FFF = +4095.

                                                                 0x0002 = +2.
                                                                 0x0001 = +1.
                                                                 0x0000 = 0.
                                                                 0x1FFF = -1.
                                                                 0x1FFE = -2.

                                                                 0x1001 = -4095. */
        uint32_t reserved_29_31        : 3;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ras_einj_ctl1_s cn; */
};
typedef union cavm_pcieepx_ras_einj_ctl1 cavm_pcieepx_ras_einj_ctl1_t;

static inline uint64_t CAVM_PCIEEPX_RAS_EINJ_CTL1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_RAS_EINJ_CTL1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x284 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x284 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x284 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x284 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_RAS_EINJ_CTL1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_RAS_EINJ_CTL1(a) cavm_pcieepx_ras_einj_ctl1_t
#define bustype_CAVM_PCIEEPX_RAS_EINJ_CTL1(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_RAS_EINJ_CTL1(a) "PCIEEPX_RAS_EINJ_CTL1"
#define busnum_CAVM_PCIEEPX_RAS_EINJ_CTL1(a) (a)
#define arguments_CAVM_PCIEEPX_RAS_EINJ_CTL1(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ras_einj_ctl2
 *
 * PCIe EP Vendor RAS DES Error Injection Control 2 (DLLP) Register
 */
union cavm_pcieepx_ras_einj_ctl2
{
    uint32_t u;
    struct cavm_pcieepx_ras_einj_ctl2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_10_31        : 22;
        uint32_t einj2_dllp_type       : 2;  /**< [  9:  8](R/W) DLLP type.  Selects the type of DLLP errors to be inserted.

                                                                 0x0 = ACK/NAK DLLP transmission block.
                                                                 0x1 = Update FC DLLP's transmission block.
                                                                 0x2 = Always transmission for NAK DLLP.
                                                                 0x3 = Reserved. */
        uint32_t einj2_cnt             : 8;  /**< [  7:  0](R/W) Error injection count.  Indicates the number of errors.
                                                                 This register is decremented when errors are inserted.

                                                                 If the counter value is 0x1 and error is inserted,
                                                                 PCIEEP_RAS_EINJ_EN[EINJ2_EN] returns zero.

                                                                 If the counter value is 0x0 and PCIEEP_RAS_EINJ_EN[EINJ2_EN] is set,
                                                                 errors are inserted until PCIEEP_RAS_EINJ_EN[EINJ2_EN] is cleared. */
#else /* Word 0 - Little Endian */
        uint32_t einj2_cnt             : 8;  /**< [  7:  0](R/W) Error injection count.  Indicates the number of errors.
                                                                 This register is decremented when errors are inserted.

                                                                 If the counter value is 0x1 and error is inserted,
                                                                 PCIEEP_RAS_EINJ_EN[EINJ2_EN] returns zero.

                                                                 If the counter value is 0x0 and PCIEEP_RAS_EINJ_EN[EINJ2_EN] is set,
                                                                 errors are inserted until PCIEEP_RAS_EINJ_EN[EINJ2_EN] is cleared. */
        uint32_t einj2_dllp_type       : 2;  /**< [  9:  8](R/W) DLLP type.  Selects the type of DLLP errors to be inserted.

                                                                 0x0 = ACK/NAK DLLP transmission block.
                                                                 0x1 = Update FC DLLP's transmission block.
                                                                 0x2 = Always transmission for NAK DLLP.
                                                                 0x3 = Reserved. */
        uint32_t reserved_10_31        : 22;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ras_einj_ctl2_s cn; */
};
typedef union cavm_pcieepx_ras_einj_ctl2 cavm_pcieepx_ras_einj_ctl2_t;

static inline uint64_t CAVM_PCIEEPX_RAS_EINJ_CTL2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_RAS_EINJ_CTL2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x288 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x288 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x288 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x288 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_RAS_EINJ_CTL2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_RAS_EINJ_CTL2(a) cavm_pcieepx_ras_einj_ctl2_t
#define bustype_CAVM_PCIEEPX_RAS_EINJ_CTL2(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_RAS_EINJ_CTL2(a) "PCIEEPX_RAS_EINJ_CTL2"
#define busnum_CAVM_PCIEEPX_RAS_EINJ_CTL2(a) (a)
#define arguments_CAVM_PCIEEPX_RAS_EINJ_CTL2(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ras_einj_ctl3
 *
 * PCIe EP Vendor RAS DES Error Injection Control 3 (Symbol) Register
 */
union cavm_pcieepx_ras_einj_ctl3
{
    uint32_t u;
    struct cavm_pcieepx_ras_einj_ctl3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_11_31        : 21;
        uint32_t einj3_symbol_type     : 3;  /**< [ 10:  8](R/W) Error type, 8 b/10 b encoding - Mask K symbol.

                                                                 0x0 = Reserved.
                                                                 0x1 = COM/PAD(TS1 Order Set).
                                                                 0x2 = COM/PAD(TS2 Order Set).
                                                                 0x3 = COM/FTS(FTS Order Set).
                                                                 0x4 = COM/IDLE(E-Idle Order Set).
                                                                 0x5 = END/EDB Symbol.
                                                                 0x6 = STP/SDP Symbol.
                                                                 0x7 = COM/SKP(SKP Order set). */
        uint32_t einj3_cnt             : 8;  /**< [  7:  0](R/W) Error injection count.  Indicates the number of errors.
                                                                 This register is decremented when errors are inserted.

                                                                 If the counter value is 0x1 and error is inserted,
                                                                 PCIEEP_RAS_EINJ_EN[EINJ3_EN] returns zero.

                                                                 If the counter value is 0x0 and PCIEEP_RAS_EINJ_EN[EINJ3_EN] is set,
                                                                 errors are inserted until PCIEEP_RAS_EINJ_EN[EINJ3_EN] is cleared. */
#else /* Word 0 - Little Endian */
        uint32_t einj3_cnt             : 8;  /**< [  7:  0](R/W) Error injection count.  Indicates the number of errors.
                                                                 This register is decremented when errors are inserted.

                                                                 If the counter value is 0x1 and error is inserted,
                                                                 PCIEEP_RAS_EINJ_EN[EINJ3_EN] returns zero.

                                                                 If the counter value is 0x0 and PCIEEP_RAS_EINJ_EN[EINJ3_EN] is set,
                                                                 errors are inserted until PCIEEP_RAS_EINJ_EN[EINJ3_EN] is cleared. */
        uint32_t einj3_symbol_type     : 3;  /**< [ 10:  8](R/W) Error type, 8 b/10 b encoding - Mask K symbol.

                                                                 0x0 = Reserved.
                                                                 0x1 = COM/PAD(TS1 Order Set).
                                                                 0x2 = COM/PAD(TS2 Order Set).
                                                                 0x3 = COM/FTS(FTS Order Set).
                                                                 0x4 = COM/IDLE(E-Idle Order Set).
                                                                 0x5 = END/EDB Symbol.
                                                                 0x6 = STP/SDP Symbol.
                                                                 0x7 = COM/SKP(SKP Order set). */
        uint32_t reserved_11_31        : 21;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ras_einj_ctl3_s cn; */
};
typedef union cavm_pcieepx_ras_einj_ctl3 cavm_pcieepx_ras_einj_ctl3_t;

static inline uint64_t CAVM_PCIEEPX_RAS_EINJ_CTL3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_RAS_EINJ_CTL3(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x28c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x28c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x28c + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x28c + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_RAS_EINJ_CTL3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_RAS_EINJ_CTL3(a) cavm_pcieepx_ras_einj_ctl3_t
#define bustype_CAVM_PCIEEPX_RAS_EINJ_CTL3(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_RAS_EINJ_CTL3(a) "PCIEEPX_RAS_EINJ_CTL3"
#define busnum_CAVM_PCIEEPX_RAS_EINJ_CTL3(a) (a)
#define arguments_CAVM_PCIEEPX_RAS_EINJ_CTL3(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ras_einj_ctl4
 *
 * PCIe EP Vendor RAS DES Error Injection Control 4 (FC Credit) Register
 */
union cavm_pcieepx_ras_einj_ctl4
{
    uint32_t u;
    struct cavm_pcieepx_ras_einj_ctl4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_29_31        : 3;
        uint32_t einj4_bad_updfc_val   : 13; /**< [ 28: 16](R/W) Bad update-FC credit value.  Indicates the value to add/subtract
                                                                 from the UpdateFC credit.  The value is represented by two's
                                                                 compliment.

                                                                 0x0FFF = +4095.

                                                                 0x0002 = +2.
                                                                 0x0001 = +1.
                                                                 0x0000 = 0.
                                                                 0x1FFF = -1.
                                                                 0x1FFE = -2.

                                                                 0x1001 = -4095. */
        uint32_t reserved_15           : 1;
        uint32_t einj4_vc_num          : 3;  /**< [ 14: 12](R/W) VC number.  Indicates the target VC number. */
        uint32_t reserved_11           : 1;
        uint32_t einj4_vc_type         : 3;  /**< [ 10:  8](R/W) Update-FC type.  Selects the credit type.

                                                                 0x0 = Posted TLP header credit value control.
                                                                 0x1 = Non-Posted TLP header credit value control.
                                                                 0x2 = Completion TLP header credit value control.
                                                                 0x3 = Reserved.
                                                                 0x4 = Posted TLP data credit value control.
                                                                 0x5 = Non-Posted TLP data credit value control.
                                                                 0x6 = Completion TLP data credit value control.
                                                                 0x7 = Reserved. */
        uint32_t einj4_cnt             : 8;  /**< [  7:  0](R/W) Error injection count.  Indicates the number of errors.
                                                                 This register is decremented when errors are inserted.

                                                                 If the counter value is 0x1 and error is inserted,
                                                                 PCIEEP_RAS_EINJ_EN[EINJ4_EN] returns zero.

                                                                 If the counter value is 0x0 and PCIEEP_RAS_EINJ_EN[EINJ4_EN] is set,
                                                                 errors are inserted until PCIEEP_RAS_EINJ_EN[EINJ4_EN] is cleared. */
#else /* Word 0 - Little Endian */
        uint32_t einj4_cnt             : 8;  /**< [  7:  0](R/W) Error injection count.  Indicates the number of errors.
                                                                 This register is decremented when errors are inserted.

                                                                 If the counter value is 0x1 and error is inserted,
                                                                 PCIEEP_RAS_EINJ_EN[EINJ4_EN] returns zero.

                                                                 If the counter value is 0x0 and PCIEEP_RAS_EINJ_EN[EINJ4_EN] is set,
                                                                 errors are inserted until PCIEEP_RAS_EINJ_EN[EINJ4_EN] is cleared. */
        uint32_t einj4_vc_type         : 3;  /**< [ 10:  8](R/W) Update-FC type.  Selects the credit type.

                                                                 0x0 = Posted TLP header credit value control.
                                                                 0x1 = Non-Posted TLP header credit value control.
                                                                 0x2 = Completion TLP header credit value control.
                                                                 0x3 = Reserved.
                                                                 0x4 = Posted TLP data credit value control.
                                                                 0x5 = Non-Posted TLP data credit value control.
                                                                 0x6 = Completion TLP data credit value control.
                                                                 0x7 = Reserved. */
        uint32_t reserved_11           : 1;
        uint32_t einj4_vc_num          : 3;  /**< [ 14: 12](R/W) VC number.  Indicates the target VC number. */
        uint32_t reserved_15           : 1;
        uint32_t einj4_bad_updfc_val   : 13; /**< [ 28: 16](R/W) Bad update-FC credit value.  Indicates the value to add/subtract
                                                                 from the UpdateFC credit.  The value is represented by two's
                                                                 compliment.

                                                                 0x0FFF = +4095.

                                                                 0x0002 = +2.
                                                                 0x0001 = +1.
                                                                 0x0000 = 0.
                                                                 0x1FFF = -1.
                                                                 0x1FFE = -2.

                                                                 0x1001 = -4095. */
        uint32_t reserved_29_31        : 3;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ras_einj_ctl4_s cn; */
};
typedef union cavm_pcieepx_ras_einj_ctl4 cavm_pcieepx_ras_einj_ctl4_t;

static inline uint64_t CAVM_PCIEEPX_RAS_EINJ_CTL4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_RAS_EINJ_CTL4(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x290 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x290 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x290 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x290 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_RAS_EINJ_CTL4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_RAS_EINJ_CTL4(a) cavm_pcieepx_ras_einj_ctl4_t
#define bustype_CAVM_PCIEEPX_RAS_EINJ_CTL4(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_RAS_EINJ_CTL4(a) "PCIEEPX_RAS_EINJ_CTL4"
#define busnum_CAVM_PCIEEPX_RAS_EINJ_CTL4(a) (a)
#define arguments_CAVM_PCIEEPX_RAS_EINJ_CTL4(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ras_einj_ctl5
 *
 * PCIe EP Vendor RAS DES Error Injection Control 5 (Specific TLP) Register
 */
union cavm_pcieepx_ras_einj_ctl5
{
    uint32_t u;
    struct cavm_pcieepx_ras_einj_ctl5_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_9_31         : 23;
        uint32_t einj5_sp_tlp          : 1;  /**< [  8:  8](R/W) Specified TLP.  Selects the specified TLP to be inserted.

                                                                 0x0 = Generates duplicate TLPs by handling ACK DLLP as NAK DLLP.
                                                                 0x1 = Generates nullified TLP (Original TLP will be stored in retry buffer). */
        uint32_t einj5_cnt             : 8;  /**< [  7:  0](R/W) Error injection count.  Indicates the number of errors.
                                                                 This register is decremented when errors are inserted.

                                                                 If the counter value is 0x1 and error is inserted,
                                                                 PCIEEP_RAS_EINJ_EN[EINJ5_EN] returns zero.

                                                                 If the counter value is 0x0 and PCIEEP_RAS_EINJ_EN[EINJ5_EN] is set,
                                                                 errors are inserted until PCIEEP_RAS_EINJ_EN[EINJ5_EN] is cleared. */
#else /* Word 0 - Little Endian */
        uint32_t einj5_cnt             : 8;  /**< [  7:  0](R/W) Error injection count.  Indicates the number of errors.
                                                                 This register is decremented when errors are inserted.

                                                                 If the counter value is 0x1 and error is inserted,
                                                                 PCIEEP_RAS_EINJ_EN[EINJ5_EN] returns zero.

                                                                 If the counter value is 0x0 and PCIEEP_RAS_EINJ_EN[EINJ5_EN] is set,
                                                                 errors are inserted until PCIEEP_RAS_EINJ_EN[EINJ5_EN] is cleared. */
        uint32_t einj5_sp_tlp          : 1;  /**< [  8:  8](R/W) Specified TLP.  Selects the specified TLP to be inserted.

                                                                 0x0 = Generates duplicate TLPs by handling ACK DLLP as NAK DLLP.
                                                                 0x1 = Generates nullified TLP (Original TLP will be stored in retry buffer). */
        uint32_t reserved_9_31         : 23;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ras_einj_ctl5_s cn; */
};
typedef union cavm_pcieepx_ras_einj_ctl5 cavm_pcieepx_ras_einj_ctl5_t;

static inline uint64_t CAVM_PCIEEPX_RAS_EINJ_CTL5(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_RAS_EINJ_CTL5(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x294 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x294 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x294 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x294 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_RAS_EINJ_CTL5", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_RAS_EINJ_CTL5(a) cavm_pcieepx_ras_einj_ctl5_t
#define bustype_CAVM_PCIEEPX_RAS_EINJ_CTL5(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_RAS_EINJ_CTL5(a) "PCIEEPX_RAS_EINJ_CTL5"
#define busnum_CAVM_PCIEEPX_RAS_EINJ_CTL5(a) (a)
#define arguments_CAVM_PCIEEPX_RAS_EINJ_CTL5(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ras_einj_ctl6chgp0
 *
 * PCIe EP Vendor RAS DES Error Injection Control 6 (Change Point H0) Register
 */
union cavm_pcieepx_ras_einj_ctl6chgp0
{
    uint32_t u;
    struct cavm_pcieepx_ras_einj_ctl6chgp0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t einj6_chg_pt_h0       : 32; /**< [ 31:  0](R/W) Packet change point first DWORD.
                                                                 Specifies which TX TLP header DWORD0 bits to replace
                                                                 with the corresponding bits in PCIEEP_RAS_EINJ_CTL6CHGV0[EINJ6_CHG_VAL_H0]. */
#else /* Word 0 - Little Endian */
        uint32_t einj6_chg_pt_h0       : 32; /**< [ 31:  0](R/W) Packet change point first DWORD.
                                                                 Specifies which TX TLP header DWORD0 bits to replace
                                                                 with the corresponding bits in PCIEEP_RAS_EINJ_CTL6CHGV0[EINJ6_CHG_VAL_H0]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ras_einj_ctl6chgp0_s cn; */
};
typedef union cavm_pcieepx_ras_einj_ctl6chgp0 cavm_pcieepx_ras_einj_ctl6chgp0_t;

static inline uint64_t CAVM_PCIEEPX_RAS_EINJ_CTL6CHGP0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_RAS_EINJ_CTL6CHGP0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x2b8 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x2b8 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x2b8 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x2b8 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_RAS_EINJ_CTL6CHGP0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_RAS_EINJ_CTL6CHGP0(a) cavm_pcieepx_ras_einj_ctl6chgp0_t
#define bustype_CAVM_PCIEEPX_RAS_EINJ_CTL6CHGP0(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_RAS_EINJ_CTL6CHGP0(a) "PCIEEPX_RAS_EINJ_CTL6CHGP0"
#define busnum_CAVM_PCIEEPX_RAS_EINJ_CTL6CHGP0(a) (a)
#define arguments_CAVM_PCIEEPX_RAS_EINJ_CTL6CHGP0(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ras_einj_ctl6chgp1
 *
 * PCIe EP Vendor RAS DES Error Injection Control 6 (Change Point H1) Register
 */
union cavm_pcieepx_ras_einj_ctl6chgp1
{
    uint32_t u;
    struct cavm_pcieepx_ras_einj_ctl6chgp1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t einj6_chg_pt_h1       : 32; /**< [ 31:  0](R/W) Packet change point second DWORD.
                                                                 Specifies which TX TLP header DWORD0 bits to replace
                                                                 with the corresponding bits in PCIEEP_RAS_EINJ_CTL6CHGV1[EINJ6_CHG_VAL_H1]. */
#else /* Word 0 - Little Endian */
        uint32_t einj6_chg_pt_h1       : 32; /**< [ 31:  0](R/W) Packet change point second DWORD.
                                                                 Specifies which TX TLP header DWORD0 bits to replace
                                                                 with the corresponding bits in PCIEEP_RAS_EINJ_CTL6CHGV1[EINJ6_CHG_VAL_H1]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ras_einj_ctl6chgp1_s cn; */
};
typedef union cavm_pcieepx_ras_einj_ctl6chgp1 cavm_pcieepx_ras_einj_ctl6chgp1_t;

static inline uint64_t CAVM_PCIEEPX_RAS_EINJ_CTL6CHGP1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_RAS_EINJ_CTL6CHGP1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x2bc + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x2bc + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x2bc + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x2bc + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_RAS_EINJ_CTL6CHGP1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_RAS_EINJ_CTL6CHGP1(a) cavm_pcieepx_ras_einj_ctl6chgp1_t
#define bustype_CAVM_PCIEEPX_RAS_EINJ_CTL6CHGP1(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_RAS_EINJ_CTL6CHGP1(a) "PCIEEPX_RAS_EINJ_CTL6CHGP1"
#define busnum_CAVM_PCIEEPX_RAS_EINJ_CTL6CHGP1(a) (a)
#define arguments_CAVM_PCIEEPX_RAS_EINJ_CTL6CHGP1(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ras_einj_ctl6chgp2
 *
 * PCIe EP Vendor RAS DES Error Injection Control 6 (Change Point H2) Register
 */
union cavm_pcieepx_ras_einj_ctl6chgp2
{
    uint32_t u;
    struct cavm_pcieepx_ras_einj_ctl6chgp2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t einj6_chg_pt_h2       : 32; /**< [ 31:  0](R/W) Packet change point third DWORD.
                                                                 Specifies which TX TLP header DWORD2 bits to replace
                                                                 with the corresponding bits in PCIEEP_RAS_EINJ_CTL6CHGV2[EINJ6_CHG_VAL_H2]. */
#else /* Word 0 - Little Endian */
        uint32_t einj6_chg_pt_h2       : 32; /**< [ 31:  0](R/W) Packet change point third DWORD.
                                                                 Specifies which TX TLP header DWORD2 bits to replace
                                                                 with the corresponding bits in PCIEEP_RAS_EINJ_CTL6CHGV2[EINJ6_CHG_VAL_H2]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ras_einj_ctl6chgp2_s cn; */
};
typedef union cavm_pcieepx_ras_einj_ctl6chgp2 cavm_pcieepx_ras_einj_ctl6chgp2_t;

static inline uint64_t CAVM_PCIEEPX_RAS_EINJ_CTL6CHGP2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_RAS_EINJ_CTL6CHGP2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x2c0 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x2c0 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x2c0 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x2c0 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_RAS_EINJ_CTL6CHGP2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_RAS_EINJ_CTL6CHGP2(a) cavm_pcieepx_ras_einj_ctl6chgp2_t
#define bustype_CAVM_PCIEEPX_RAS_EINJ_CTL6CHGP2(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_RAS_EINJ_CTL6CHGP2(a) "PCIEEPX_RAS_EINJ_CTL6CHGP2"
#define busnum_CAVM_PCIEEPX_RAS_EINJ_CTL6CHGP2(a) (a)
#define arguments_CAVM_PCIEEPX_RAS_EINJ_CTL6CHGP2(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ras_einj_ctl6chgp3
 *
 * PCIe EP Vendor RAS DES Error Injection Control 6 (Change Point H3) Register
 */
union cavm_pcieepx_ras_einj_ctl6chgp3
{
    uint32_t u;
    struct cavm_pcieepx_ras_einj_ctl6chgp3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t einj6_chg_pt_h3       : 32; /**< [ 31:  0](R/W) Packet change point first DWORD.
                                                                 Specifies which TX TLP header DWORD3 bits to replace
                                                                 with the corresponding bits in PCIEEP_RAS_EINJ_CTL6CHGV3[EINJ6_CHG_VAL_H3]. */
#else /* Word 0 - Little Endian */
        uint32_t einj6_chg_pt_h3       : 32; /**< [ 31:  0](R/W) Packet change point first DWORD.
                                                                 Specifies which TX TLP header DWORD3 bits to replace
                                                                 with the corresponding bits in PCIEEP_RAS_EINJ_CTL6CHGV3[EINJ6_CHG_VAL_H3]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ras_einj_ctl6chgp3_s cn; */
};
typedef union cavm_pcieepx_ras_einj_ctl6chgp3 cavm_pcieepx_ras_einj_ctl6chgp3_t;

static inline uint64_t CAVM_PCIEEPX_RAS_EINJ_CTL6CHGP3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_RAS_EINJ_CTL6CHGP3(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x2c4 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x2c4 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x2c4 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x2c4 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_RAS_EINJ_CTL6CHGP3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_RAS_EINJ_CTL6CHGP3(a) cavm_pcieepx_ras_einj_ctl6chgp3_t
#define bustype_CAVM_PCIEEPX_RAS_EINJ_CTL6CHGP3(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_RAS_EINJ_CTL6CHGP3(a) "PCIEEPX_RAS_EINJ_CTL6CHGP3"
#define busnum_CAVM_PCIEEPX_RAS_EINJ_CTL6CHGP3(a) (a)
#define arguments_CAVM_PCIEEPX_RAS_EINJ_CTL6CHGP3(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ras_einj_ctl6chgv0
 *
 * PCIe EP Vendor RAS DES Error Injection Control 6 (Change Value H0) Register
 */
union cavm_pcieepx_ras_einj_ctl6chgv0
{
    uint32_t u;
    struct cavm_pcieepx_ras_einj_ctl6chgv0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t einj6_chg_val_h0      : 32; /**< [ 31:  0](R/W) Packet change value first DWORD.
                                                                 Specifies replacement values for the TX TLP header
                                                                 DWORD0 bits defined in the PCIEEP_RAS_EINJ_CTL6CHGP0[EINJ6_CHG_PT_H0].
                                                                 Only applies when PCIEEP_RAS_EINJ_CTL6PE[EINJ6_INV_CNTRL] is not set. */
#else /* Word 0 - Little Endian */
        uint32_t einj6_chg_val_h0      : 32; /**< [ 31:  0](R/W) Packet change value first DWORD.
                                                                 Specifies replacement values for the TX TLP header
                                                                 DWORD0 bits defined in the PCIEEP_RAS_EINJ_CTL6CHGP0[EINJ6_CHG_PT_H0].
                                                                 Only applies when PCIEEP_RAS_EINJ_CTL6PE[EINJ6_INV_CNTRL] is not set. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ras_einj_ctl6chgv0_s cn; */
};
typedef union cavm_pcieepx_ras_einj_ctl6chgv0 cavm_pcieepx_ras_einj_ctl6chgv0_t;

static inline uint64_t CAVM_PCIEEPX_RAS_EINJ_CTL6CHGV0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_RAS_EINJ_CTL6CHGV0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x2c8 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x2c8 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x2c8 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x2c8 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_RAS_EINJ_CTL6CHGV0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_RAS_EINJ_CTL6CHGV0(a) cavm_pcieepx_ras_einj_ctl6chgv0_t
#define bustype_CAVM_PCIEEPX_RAS_EINJ_CTL6CHGV0(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_RAS_EINJ_CTL6CHGV0(a) "PCIEEPX_RAS_EINJ_CTL6CHGV0"
#define busnum_CAVM_PCIEEPX_RAS_EINJ_CTL6CHGV0(a) (a)
#define arguments_CAVM_PCIEEPX_RAS_EINJ_CTL6CHGV0(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ras_einj_ctl6chgv1
 *
 * PCIe EP Vendor RAS DES Error Injection Control 6 (Change Value H1) Register
 */
union cavm_pcieepx_ras_einj_ctl6chgv1
{
    uint32_t u;
    struct cavm_pcieepx_ras_einj_ctl6chgv1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t einj6_chg_val_h1      : 32; /**< [ 31:  0](R/W) Packet change value second DWORD.
                                                                 Specifies replacement values for the TX TLP header
                                                                 DWORD1 bits defined in the PCIEEP_RAS_EINJ_CTL6CHGP1[EINJ6_CHG_PT_H1].
                                                                 Only applies when PCIEEP_RAS_EINJ_CTL6PE[EINJ6_INV_CNTRL] is not set. */
#else /* Word 0 - Little Endian */
        uint32_t einj6_chg_val_h1      : 32; /**< [ 31:  0](R/W) Packet change value second DWORD.
                                                                 Specifies replacement values for the TX TLP header
                                                                 DWORD1 bits defined in the PCIEEP_RAS_EINJ_CTL6CHGP1[EINJ6_CHG_PT_H1].
                                                                 Only applies when PCIEEP_RAS_EINJ_CTL6PE[EINJ6_INV_CNTRL] is not set. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ras_einj_ctl6chgv1_s cn; */
};
typedef union cavm_pcieepx_ras_einj_ctl6chgv1 cavm_pcieepx_ras_einj_ctl6chgv1_t;

static inline uint64_t CAVM_PCIEEPX_RAS_EINJ_CTL6CHGV1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_RAS_EINJ_CTL6CHGV1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x2cc + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x2cc + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x2cc + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x2cc + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_RAS_EINJ_CTL6CHGV1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_RAS_EINJ_CTL6CHGV1(a) cavm_pcieepx_ras_einj_ctl6chgv1_t
#define bustype_CAVM_PCIEEPX_RAS_EINJ_CTL6CHGV1(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_RAS_EINJ_CTL6CHGV1(a) "PCIEEPX_RAS_EINJ_CTL6CHGV1"
#define busnum_CAVM_PCIEEPX_RAS_EINJ_CTL6CHGV1(a) (a)
#define arguments_CAVM_PCIEEPX_RAS_EINJ_CTL6CHGV1(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ras_einj_ctl6chgv2
 *
 * PCIe EP Vendor RAS DES Error Injection Control 6 (Change Value H2) Register
 */
union cavm_pcieepx_ras_einj_ctl6chgv2
{
    uint32_t u;
    struct cavm_pcieepx_ras_einj_ctl6chgv2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t einj6_chg_val_h2      : 32; /**< [ 31:  0](R/W) Packet change value third DWORD.
                                                                 Specifies replacement values for the TX TLP header
                                                                 DWORD2 bits defined in the PCIEEP_RAS_EINJ_CTL6CHGP2[EINJ6_CHG_PT_H2].
                                                                 Only applies when PCIEEP_RAS_EINJ_CTL6PE[EINJ6_INV_CNTRL] is not set." */
#else /* Word 0 - Little Endian */
        uint32_t einj6_chg_val_h2      : 32; /**< [ 31:  0](R/W) Packet change value third DWORD.
                                                                 Specifies replacement values for the TX TLP header
                                                                 DWORD2 bits defined in the PCIEEP_RAS_EINJ_CTL6CHGP2[EINJ6_CHG_PT_H2].
                                                                 Only applies when PCIEEP_RAS_EINJ_CTL6PE[EINJ6_INV_CNTRL] is not set." */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ras_einj_ctl6chgv2_s cn; */
};
typedef union cavm_pcieepx_ras_einj_ctl6chgv2 cavm_pcieepx_ras_einj_ctl6chgv2_t;

static inline uint64_t CAVM_PCIEEPX_RAS_EINJ_CTL6CHGV2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_RAS_EINJ_CTL6CHGV2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x2d0 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x2d0 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x2d0 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x2d0 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_RAS_EINJ_CTL6CHGV2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_RAS_EINJ_CTL6CHGV2(a) cavm_pcieepx_ras_einj_ctl6chgv2_t
#define bustype_CAVM_PCIEEPX_RAS_EINJ_CTL6CHGV2(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_RAS_EINJ_CTL6CHGV2(a) "PCIEEPX_RAS_EINJ_CTL6CHGV2"
#define busnum_CAVM_PCIEEPX_RAS_EINJ_CTL6CHGV2(a) (a)
#define arguments_CAVM_PCIEEPX_RAS_EINJ_CTL6CHGV2(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ras_einj_ctl6chgv3
 *
 * PCIe EP Vendor RAS DES Error Injection Control 6 (Change Value H3) Register
 */
union cavm_pcieepx_ras_einj_ctl6chgv3
{
    uint32_t u;
    struct cavm_pcieepx_ras_einj_ctl6chgv3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t einj6_chg_val_h3      : 32; /**< [ 31:  0](R/W) Packet change value fourth DWORD.
                                                                 Specifies replacement values for the TX TLP header
                                                                 DWORD3 bits defined in the PCIEEP_RAS_EINJ_CTL6CHGP3[EINJ6_CHG_PT_H3].
                                                                 Only applies when PCIEEP_RAS_EINJ_CTL6PE[EINJ6_INV_CNTRL] is not set. */
#else /* Word 0 - Little Endian */
        uint32_t einj6_chg_val_h3      : 32; /**< [ 31:  0](R/W) Packet change value fourth DWORD.
                                                                 Specifies replacement values for the TX TLP header
                                                                 DWORD3 bits defined in the PCIEEP_RAS_EINJ_CTL6CHGP3[EINJ6_CHG_PT_H3].
                                                                 Only applies when PCIEEP_RAS_EINJ_CTL6PE[EINJ6_INV_CNTRL] is not set. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ras_einj_ctl6chgv3_s cn; */
};
typedef union cavm_pcieepx_ras_einj_ctl6chgv3 cavm_pcieepx_ras_einj_ctl6chgv3_t;

static inline uint64_t CAVM_PCIEEPX_RAS_EINJ_CTL6CHGV3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_RAS_EINJ_CTL6CHGV3(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x2d4 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x2d4 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x2d4 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x2d4 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_RAS_EINJ_CTL6CHGV3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_RAS_EINJ_CTL6CHGV3(a) cavm_pcieepx_ras_einj_ctl6chgv3_t
#define bustype_CAVM_PCIEEPX_RAS_EINJ_CTL6CHGV3(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_RAS_EINJ_CTL6CHGV3(a) "PCIEEPX_RAS_EINJ_CTL6CHGV3"
#define busnum_CAVM_PCIEEPX_RAS_EINJ_CTL6CHGV3(a) (a)
#define arguments_CAVM_PCIEEPX_RAS_EINJ_CTL6CHGV3(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ras_einj_ctl6cmpp0
 *
 * PCIe EP Vendor RAS DES Error Injection Control 6 (Compare Point H0) Register
 */
union cavm_pcieepx_ras_einj_ctl6cmpp0
{
    uint32_t u;
    struct cavm_pcieepx_ras_einj_ctl6cmpp0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t einj6_com_pt_h0       : 32; /**< [ 31:  0](R/W) Packet compare point first DWORD.
                                                                 Specifies which TX TLP header DWORD0 bits to compare
                                                                 with the corresponding bits in PCIEEP_RAS_EINJ_CTL6CMPV0[EINJ6_COM_VAL_H0].
                                                                 When all specified bits (in the TX TLP header and
                                                                 PCIEEP_RAS_EINJ_CTL6CMPV0[EINJ6_COM_VAL_H0] match, an error is inserted into the TLP. */
#else /* Word 0 - Little Endian */
        uint32_t einj6_com_pt_h0       : 32; /**< [ 31:  0](R/W) Packet compare point first DWORD.
                                                                 Specifies which TX TLP header DWORD0 bits to compare
                                                                 with the corresponding bits in PCIEEP_RAS_EINJ_CTL6CMPV0[EINJ6_COM_VAL_H0].
                                                                 When all specified bits (in the TX TLP header and
                                                                 PCIEEP_RAS_EINJ_CTL6CMPV0[EINJ6_COM_VAL_H0] match, an error is inserted into the TLP. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ras_einj_ctl6cmpp0_s cn; */
};
typedef union cavm_pcieepx_ras_einj_ctl6cmpp0 cavm_pcieepx_ras_einj_ctl6cmpp0_t;

static inline uint64_t CAVM_PCIEEPX_RAS_EINJ_CTL6CMPP0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_RAS_EINJ_CTL6CMPP0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x298 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x298 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x298 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x298 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_RAS_EINJ_CTL6CMPP0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_RAS_EINJ_CTL6CMPP0(a) cavm_pcieepx_ras_einj_ctl6cmpp0_t
#define bustype_CAVM_PCIEEPX_RAS_EINJ_CTL6CMPP0(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_RAS_EINJ_CTL6CMPP0(a) "PCIEEPX_RAS_EINJ_CTL6CMPP0"
#define busnum_CAVM_PCIEEPX_RAS_EINJ_CTL6CMPP0(a) (a)
#define arguments_CAVM_PCIEEPX_RAS_EINJ_CTL6CMPP0(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ras_einj_ctl6cmpp1
 *
 * PCIe EP Vendor RAS DES Error Injection Control 6 (Compare Point H1) Register
 */
union cavm_pcieepx_ras_einj_ctl6cmpp1
{
    uint32_t u;
    struct cavm_pcieepx_ras_einj_ctl6cmpp1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t einj6_com_pt_h1       : 32; /**< [ 31:  0](R/W) Packet compare point second DWORD.
                                                                 Specifies which TX TLP header DWORD1 bits to compare
                                                                 with the corresponding bits in PCIEEP_RAS_EINJ_CTL6CMPV1[EINJ6_COM_VAL_H1].
                                                                 When all specified bits (in the TX TLP header and
                                                                 PCIEEP_RAS_EINJ_CTL6CMPV1[EINJ6_COM_VAL_H1] match, an error is inserted into the TLP. */
#else /* Word 0 - Little Endian */
        uint32_t einj6_com_pt_h1       : 32; /**< [ 31:  0](R/W) Packet compare point second DWORD.
                                                                 Specifies which TX TLP header DWORD1 bits to compare
                                                                 with the corresponding bits in PCIEEP_RAS_EINJ_CTL6CMPV1[EINJ6_COM_VAL_H1].
                                                                 When all specified bits (in the TX TLP header and
                                                                 PCIEEP_RAS_EINJ_CTL6CMPV1[EINJ6_COM_VAL_H1] match, an error is inserted into the TLP. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ras_einj_ctl6cmpp1_s cn; */
};
typedef union cavm_pcieepx_ras_einj_ctl6cmpp1 cavm_pcieepx_ras_einj_ctl6cmpp1_t;

static inline uint64_t CAVM_PCIEEPX_RAS_EINJ_CTL6CMPP1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_RAS_EINJ_CTL6CMPP1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x29c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x29c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x29c + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x29c + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_RAS_EINJ_CTL6CMPP1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_RAS_EINJ_CTL6CMPP1(a) cavm_pcieepx_ras_einj_ctl6cmpp1_t
#define bustype_CAVM_PCIEEPX_RAS_EINJ_CTL6CMPP1(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_RAS_EINJ_CTL6CMPP1(a) "PCIEEPX_RAS_EINJ_CTL6CMPP1"
#define busnum_CAVM_PCIEEPX_RAS_EINJ_CTL6CMPP1(a) (a)
#define arguments_CAVM_PCIEEPX_RAS_EINJ_CTL6CMPP1(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ras_einj_ctl6cmpp2
 *
 * PCIe EP Vendor RAS DES Error Injection Control 6 (Compare Point H2) Register
 */
union cavm_pcieepx_ras_einj_ctl6cmpp2
{
    uint32_t u;
    struct cavm_pcieepx_ras_einj_ctl6cmpp2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t einj6_com_pt_h2       : 32; /**< [ 31:  0](R/W) Packet compare point third DWORD.
                                                                 Specifies which TX TLP header DWORD2 bits to compare
                                                                 with the corresponding bits in PCIEEP_RAS_EINJ_CTL6CMPV2[EINJ6_COM_VAL_H2].
                                                                 When all specified bits (in the TX TLP header and
                                                                 PCIEEP_RAS_EINJ_CTL6CMPV2[EINJ6_COM_VAL_H2] match, an error is inserted into the TLP. */
#else /* Word 0 - Little Endian */
        uint32_t einj6_com_pt_h2       : 32; /**< [ 31:  0](R/W) Packet compare point third DWORD.
                                                                 Specifies which TX TLP header DWORD2 bits to compare
                                                                 with the corresponding bits in PCIEEP_RAS_EINJ_CTL6CMPV2[EINJ6_COM_VAL_H2].
                                                                 When all specified bits (in the TX TLP header and
                                                                 PCIEEP_RAS_EINJ_CTL6CMPV2[EINJ6_COM_VAL_H2] match, an error is inserted into the TLP. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ras_einj_ctl6cmpp2_s cn; */
};
typedef union cavm_pcieepx_ras_einj_ctl6cmpp2 cavm_pcieepx_ras_einj_ctl6cmpp2_t;

static inline uint64_t CAVM_PCIEEPX_RAS_EINJ_CTL6CMPP2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_RAS_EINJ_CTL6CMPP2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x2a0 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x2a0 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x2a0 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x2a0 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_RAS_EINJ_CTL6CMPP2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_RAS_EINJ_CTL6CMPP2(a) cavm_pcieepx_ras_einj_ctl6cmpp2_t
#define bustype_CAVM_PCIEEPX_RAS_EINJ_CTL6CMPP2(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_RAS_EINJ_CTL6CMPP2(a) "PCIEEPX_RAS_EINJ_CTL6CMPP2"
#define busnum_CAVM_PCIEEPX_RAS_EINJ_CTL6CMPP2(a) (a)
#define arguments_CAVM_PCIEEPX_RAS_EINJ_CTL6CMPP2(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ras_einj_ctl6cmpp3
 *
 * PCIe EP Vendor RAS DES Error Injection Control 6 (Compare Point H3) Register
 */
union cavm_pcieepx_ras_einj_ctl6cmpp3
{
    uint32_t u;
    struct cavm_pcieepx_ras_einj_ctl6cmpp3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t einj6_com_pt_h3       : 32; /**< [ 31:  0](R/W) Packet compare point fourth DWORD.
                                                                 Specifies which TX TLP header DWORD3 bits to compare
                                                                 with the corresponding bits in PCIEEP_RAS_EINJ_CTL6CMPV3[EINJ6_COM_VAL_H3].
                                                                 When all specified bits (in the TX TLP header and
                                                                 PCIEEP_RAS_EINJ_CTL6CMPV3[EINJ6_COM_VAL_H3] match, an error is inserted into the TLP. */
#else /* Word 0 - Little Endian */
        uint32_t einj6_com_pt_h3       : 32; /**< [ 31:  0](R/W) Packet compare point fourth DWORD.
                                                                 Specifies which TX TLP header DWORD3 bits to compare
                                                                 with the corresponding bits in PCIEEP_RAS_EINJ_CTL6CMPV3[EINJ6_COM_VAL_H3].
                                                                 When all specified bits (in the TX TLP header and
                                                                 PCIEEP_RAS_EINJ_CTL6CMPV3[EINJ6_COM_VAL_H3] match, an error is inserted into the TLP. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ras_einj_ctl6cmpp3_s cn; */
};
typedef union cavm_pcieepx_ras_einj_ctl6cmpp3 cavm_pcieepx_ras_einj_ctl6cmpp3_t;

static inline uint64_t CAVM_PCIEEPX_RAS_EINJ_CTL6CMPP3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_RAS_EINJ_CTL6CMPP3(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x2a4 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x2a4 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x2a4 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x2a4 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_RAS_EINJ_CTL6CMPP3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_RAS_EINJ_CTL6CMPP3(a) cavm_pcieepx_ras_einj_ctl6cmpp3_t
#define bustype_CAVM_PCIEEPX_RAS_EINJ_CTL6CMPP3(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_RAS_EINJ_CTL6CMPP3(a) "PCIEEPX_RAS_EINJ_CTL6CMPP3"
#define busnum_CAVM_PCIEEPX_RAS_EINJ_CTL6CMPP3(a) (a)
#define arguments_CAVM_PCIEEPX_RAS_EINJ_CTL6CMPP3(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ras_einj_ctl6cmpv0
 *
 * PCIe EP Vendor RAS DES Error Injection Control 6 (Compare Value H0) Register
 */
union cavm_pcieepx_ras_einj_ctl6cmpv0
{
    uint32_t u;
    struct cavm_pcieepx_ras_einj_ctl6cmpv0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t einj6_com_val_h0      : 32; /**< [ 31:  0](R/W) Packet compare value first DWORD.
                                                                 Specifies the value to compare against TX the TLP header
                                                                 DWORD0 bits specified in PCIEEP_RAS_EINJ_CTL6CMPP0[EINJ6_COM_PT_H0]. */
#else /* Word 0 - Little Endian */
        uint32_t einj6_com_val_h0      : 32; /**< [ 31:  0](R/W) Packet compare value first DWORD.
                                                                 Specifies the value to compare against TX the TLP header
                                                                 DWORD0 bits specified in PCIEEP_RAS_EINJ_CTL6CMPP0[EINJ6_COM_PT_H0]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ras_einj_ctl6cmpv0_s cn; */
};
typedef union cavm_pcieepx_ras_einj_ctl6cmpv0 cavm_pcieepx_ras_einj_ctl6cmpv0_t;

static inline uint64_t CAVM_PCIEEPX_RAS_EINJ_CTL6CMPV0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_RAS_EINJ_CTL6CMPV0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x2a8 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x2a8 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x2a8 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x2a8 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_RAS_EINJ_CTL6CMPV0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_RAS_EINJ_CTL6CMPV0(a) cavm_pcieepx_ras_einj_ctl6cmpv0_t
#define bustype_CAVM_PCIEEPX_RAS_EINJ_CTL6CMPV0(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_RAS_EINJ_CTL6CMPV0(a) "PCIEEPX_RAS_EINJ_CTL6CMPV0"
#define busnum_CAVM_PCIEEPX_RAS_EINJ_CTL6CMPV0(a) (a)
#define arguments_CAVM_PCIEEPX_RAS_EINJ_CTL6CMPV0(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ras_einj_ctl6cmpv1
 *
 * PCIe EP Vendor RAS DES Error Injection Control 6 (Compare Value H1) Register
 */
union cavm_pcieepx_ras_einj_ctl6cmpv1
{
    uint32_t u;
    struct cavm_pcieepx_ras_einj_ctl6cmpv1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t einj6_com_val_h1      : 32; /**< [ 31:  0](R/W) Packet compare value second DWORD.
                                                                 Specifies the value to compare against TX the TLP header
                                                                 DWORD1 bits specified in PCIEEP_RAS_EINJ_CTL6CMPP1[EINJ6_COM_PT_H1]. */
#else /* Word 0 - Little Endian */
        uint32_t einj6_com_val_h1      : 32; /**< [ 31:  0](R/W) Packet compare value second DWORD.
                                                                 Specifies the value to compare against TX the TLP header
                                                                 DWORD1 bits specified in PCIEEP_RAS_EINJ_CTL6CMPP1[EINJ6_COM_PT_H1]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ras_einj_ctl6cmpv1_s cn; */
};
typedef union cavm_pcieepx_ras_einj_ctl6cmpv1 cavm_pcieepx_ras_einj_ctl6cmpv1_t;

static inline uint64_t CAVM_PCIEEPX_RAS_EINJ_CTL6CMPV1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_RAS_EINJ_CTL6CMPV1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x2ac + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x2ac + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x2ac + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x2ac + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_RAS_EINJ_CTL6CMPV1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_RAS_EINJ_CTL6CMPV1(a) cavm_pcieepx_ras_einj_ctl6cmpv1_t
#define bustype_CAVM_PCIEEPX_RAS_EINJ_CTL6CMPV1(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_RAS_EINJ_CTL6CMPV1(a) "PCIEEPX_RAS_EINJ_CTL6CMPV1"
#define busnum_CAVM_PCIEEPX_RAS_EINJ_CTL6CMPV1(a) (a)
#define arguments_CAVM_PCIEEPX_RAS_EINJ_CTL6CMPV1(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ras_einj_ctl6cmpv2
 *
 * PCIe EP Vendor RAS DES Error Injection Control 6 (Compare Value H2) Register
 */
union cavm_pcieepx_ras_einj_ctl6cmpv2
{
    uint32_t u;
    struct cavm_pcieepx_ras_einj_ctl6cmpv2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t einj6_com_val_h2      : 32; /**< [ 31:  0](R/W) Packet compare value third DWORD.
                                                                 Specifies the value to compare against TX the TLP header
                                                                 DWORD2 bits specified in the PCIEEP_RAS_EINJ_CTL6CMPP2[EINJ6_COM_PT_H2]. */
#else /* Word 0 - Little Endian */
        uint32_t einj6_com_val_h2      : 32; /**< [ 31:  0](R/W) Packet compare value third DWORD.
                                                                 Specifies the value to compare against TX the TLP header
                                                                 DWORD2 bits specified in the PCIEEP_RAS_EINJ_CTL6CMPP2[EINJ6_COM_PT_H2]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ras_einj_ctl6cmpv2_s cn; */
};
typedef union cavm_pcieepx_ras_einj_ctl6cmpv2 cavm_pcieepx_ras_einj_ctl6cmpv2_t;

static inline uint64_t CAVM_PCIEEPX_RAS_EINJ_CTL6CMPV2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_RAS_EINJ_CTL6CMPV2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x2b0 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x2b0 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x2b0 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x2b0 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_RAS_EINJ_CTL6CMPV2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_RAS_EINJ_CTL6CMPV2(a) cavm_pcieepx_ras_einj_ctl6cmpv2_t
#define bustype_CAVM_PCIEEPX_RAS_EINJ_CTL6CMPV2(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_RAS_EINJ_CTL6CMPV2(a) "PCIEEPX_RAS_EINJ_CTL6CMPV2"
#define busnum_CAVM_PCIEEPX_RAS_EINJ_CTL6CMPV2(a) (a)
#define arguments_CAVM_PCIEEPX_RAS_EINJ_CTL6CMPV2(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ras_einj_ctl6cmpv3
 *
 * PCIe EP Vendor RAS DES Error Injection Control 6 (Compare Value H3) Register
 */
union cavm_pcieepx_ras_einj_ctl6cmpv3
{
    uint32_t u;
    struct cavm_pcieepx_ras_einj_ctl6cmpv3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t einj6_com_val_h3      : 32; /**< [ 31:  0](R/W) Packet compare value fourth DWORD.
                                                                 Specifies the value to compare against TX the TLP header
                                                                 DWORD3 bits specified in the PCIEEP_RAS_EINJ_CTL6CMPP3[EINJ6_COM_PT_H3]. */
#else /* Word 0 - Little Endian */
        uint32_t einj6_com_val_h3      : 32; /**< [ 31:  0](R/W) Packet compare value fourth DWORD.
                                                                 Specifies the value to compare against TX the TLP header
                                                                 DWORD3 bits specified in the PCIEEP_RAS_EINJ_CTL6CMPP3[EINJ6_COM_PT_H3]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ras_einj_ctl6cmpv3_s cn; */
};
typedef union cavm_pcieepx_ras_einj_ctl6cmpv3 cavm_pcieepx_ras_einj_ctl6cmpv3_t;

static inline uint64_t CAVM_PCIEEPX_RAS_EINJ_CTL6CMPV3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_RAS_EINJ_CTL6CMPV3(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x2b4 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x2b4 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x2b4 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x2b4 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_RAS_EINJ_CTL6CMPV3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_RAS_EINJ_CTL6CMPV3(a) cavm_pcieepx_ras_einj_ctl6cmpv3_t
#define bustype_CAVM_PCIEEPX_RAS_EINJ_CTL6CMPV3(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_RAS_EINJ_CTL6CMPV3(a) "PCIEEPX_RAS_EINJ_CTL6CMPV3"
#define busnum_CAVM_PCIEEPX_RAS_EINJ_CTL6CMPV3(a) (a)
#define arguments_CAVM_PCIEEPX_RAS_EINJ_CTL6CMPV3(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ras_einj_ctl6pe
 *
 * PCIe EP Vendor RAS DES Error Injection Control 6 (Packet Error) Register
 */
union cavm_pcieepx_ras_einj_ctl6pe
{
    uint32_t u;
    struct cavm_pcieepx_ras_einj_ctl6pe_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_12_31        : 20;
        uint32_t einj6_pkt_typ         : 3;  /**< [ 11:  9](R/W) Packet type.  Selects the TLP packets to inject errors into.

                                                                 0x0 = TLP header.
                                                                 0x1 = TLP prefix 1st 4-DWORDs.
                                                                 0x2 = TLP prefix 2nd 4-DWORDs.
                                                                 0x3 - 0x7 = Reserved. */
        uint32_t einj6_inv_cntrl       : 1;  /**< [  8:  8](R/W) Inverted error injection control.

                                                                 0x0 = EINJ6_CHG_VAL_H[0/1/2/3] is used to replace bits specified by
                                                                 EINJ6_CHG_PT_H[0/1/2/3].
                                                                 0x1 = EINJ6_CHG_VAL_H[0/1/2/3] is ignored and inverts bits specified by
                                                                 EINJ6_CHG_PT_H[0/1/2/3]. */
        uint32_t einj6_cnt             : 8;  /**< [  7:  0](R/W) Error injection count.  Indicates the number of errors.
                                                                 This register is decremented when errors are inserted.

                                                                 If the counter value is 0x1 and error is inserted,
                                                                 PCIEEP_RAS_EINJ_EN[EINJ6_EN] returns zero.

                                                                 If the counter value is 0x0 and PCIEEP_RAS_EINJ_EN[EINJ6_EN] is set,
                                                                 errors are inserted until PCIEEP_RAS_EINJ_EN[EINJ6_EN] is cleared. */
#else /* Word 0 - Little Endian */
        uint32_t einj6_cnt             : 8;  /**< [  7:  0](R/W) Error injection count.  Indicates the number of errors.
                                                                 This register is decremented when errors are inserted.

                                                                 If the counter value is 0x1 and error is inserted,
                                                                 PCIEEP_RAS_EINJ_EN[EINJ6_EN] returns zero.

                                                                 If the counter value is 0x0 and PCIEEP_RAS_EINJ_EN[EINJ6_EN] is set,
                                                                 errors are inserted until PCIEEP_RAS_EINJ_EN[EINJ6_EN] is cleared. */
        uint32_t einj6_inv_cntrl       : 1;  /**< [  8:  8](R/W) Inverted error injection control.

                                                                 0x0 = EINJ6_CHG_VAL_H[0/1/2/3] is used to replace bits specified by
                                                                 EINJ6_CHG_PT_H[0/1/2/3].
                                                                 0x1 = EINJ6_CHG_VAL_H[0/1/2/3] is ignored and inverts bits specified by
                                                                 EINJ6_CHG_PT_H[0/1/2/3]. */
        uint32_t einj6_pkt_typ         : 3;  /**< [ 11:  9](R/W) Packet type.  Selects the TLP packets to inject errors into.

                                                                 0x0 = TLP header.
                                                                 0x1 = TLP prefix 1st 4-DWORDs.
                                                                 0x2 = TLP prefix 2nd 4-DWORDs.
                                                                 0x3 - 0x7 = Reserved. */
        uint32_t reserved_12_31        : 20;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ras_einj_ctl6pe_s cn; */
};
typedef union cavm_pcieepx_ras_einj_ctl6pe cavm_pcieepx_ras_einj_ctl6pe_t;

static inline uint64_t CAVM_PCIEEPX_RAS_EINJ_CTL6PE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_RAS_EINJ_CTL6PE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x2d8 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x2d8 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x2d8 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x2d8 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_RAS_EINJ_CTL6PE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_RAS_EINJ_CTL6PE(a) cavm_pcieepx_ras_einj_ctl6pe_t
#define bustype_CAVM_PCIEEPX_RAS_EINJ_CTL6PE(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_RAS_EINJ_CTL6PE(a) "PCIEEPX_RAS_EINJ_CTL6PE"
#define busnum_CAVM_PCIEEPX_RAS_EINJ_CTL6PE(a) (a)
#define arguments_CAVM_PCIEEPX_RAS_EINJ_CTL6PE(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ras_einj_en
 *
 * PCIe EP Vendor RAS DES Error Injection Enable Register
 */
union cavm_pcieepx_ras_einj_en
{
    uint32_t u;
    struct cavm_pcieepx_ras_einj_en_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_7_31         : 25;
        uint32_t einj6_en              : 1;  /**< [  6:  6](R/W) Specific TLP error injection enable.  Enables insertion of errors into the
                                                                 packet selected.  For more details, refer to PCIEEP_RAS_EINJ_CTL6CMPP0. */
        uint32_t einj5_en              : 1;  /**< [  5:  5](R/W) TLP duplicate/nullify error injection enable.  Enables insertion of duplicate/nullified
                                                                 TLPs.  For more details, refer to PCIEEP_RAS_EINJ_CTL5. */
        uint32_t einj4_en              : 1;  /**< [  4:  4](R/W) FC credit update error injection enable.  Enables insertion of errors into
                                                                 Updated FCs. See PCIEEP_RAS_EINJ_CTL4. */
        uint32_t einj3_en              : 1;  /**< [  3:  3](R/W) Symbol data mask or sync header error enable.  Enables data masking of special
                                                                 symbols or the breaking of the sync header.  See PCIEEP_RAS_EINJ_CTL3. */
        uint32_t einj2_en              : 1;  /**< [  2:  2](R/W) DLLP error injection enable.  enables insertion of DLLP errors.
                                                                 See PCIEEP_RAS_EINJ_CTL2. */
        uint32_t einj1_en              : 1;  /**< [  1:  1](R/W) Sequence number error injection enable.  Enables insertion of errors into
                                                                 sequence numbers.
                                                                 See PCIEEP_RAS_EINJ_CTL1. */
        uint32_t einj0_en              : 1;  /**< [  0:  0](R/W) CRC error injection enable.  Enables insertion of errors into various CRC.
                                                                 See PCIEEP_RAS_EINJ_CTL0. */
#else /* Word 0 - Little Endian */
        uint32_t einj0_en              : 1;  /**< [  0:  0](R/W) CRC error injection enable.  Enables insertion of errors into various CRC.
                                                                 See PCIEEP_RAS_EINJ_CTL0. */
        uint32_t einj1_en              : 1;  /**< [  1:  1](R/W) Sequence number error injection enable.  Enables insertion of errors into
                                                                 sequence numbers.
                                                                 See PCIEEP_RAS_EINJ_CTL1. */
        uint32_t einj2_en              : 1;  /**< [  2:  2](R/W) DLLP error injection enable.  enables insertion of DLLP errors.
                                                                 See PCIEEP_RAS_EINJ_CTL2. */
        uint32_t einj3_en              : 1;  /**< [  3:  3](R/W) Symbol data mask or sync header error enable.  Enables data masking of special
                                                                 symbols or the breaking of the sync header.  See PCIEEP_RAS_EINJ_CTL3. */
        uint32_t einj4_en              : 1;  /**< [  4:  4](R/W) FC credit update error injection enable.  Enables insertion of errors into
                                                                 Updated FCs. See PCIEEP_RAS_EINJ_CTL4. */
        uint32_t einj5_en              : 1;  /**< [  5:  5](R/W) TLP duplicate/nullify error injection enable.  Enables insertion of duplicate/nullified
                                                                 TLPs.  For more details, refer to PCIEEP_RAS_EINJ_CTL5. */
        uint32_t einj6_en              : 1;  /**< [  6:  6](R/W) Specific TLP error injection enable.  Enables insertion of errors into the
                                                                 packet selected.  For more details, refer to PCIEEP_RAS_EINJ_CTL6CMPP0. */
        uint32_t reserved_7_31         : 25;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ras_einj_en_s cn; */
};
typedef union cavm_pcieepx_ras_einj_en cavm_pcieepx_ras_einj_en_t;

static inline uint64_t CAVM_PCIEEPX_RAS_EINJ_EN(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_RAS_EINJ_EN(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x27c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x27c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x27c + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x27c + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_RAS_EINJ_EN", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_RAS_EINJ_EN(a) cavm_pcieepx_ras_einj_en_t
#define bustype_CAVM_PCIEEPX_RAS_EINJ_EN(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_RAS_EINJ_EN(a) "PCIEEPX_RAS_EINJ_EN"
#define busnum_CAVM_PCIEEPX_RAS_EINJ_EN(a) (a)
#define arguments_CAVM_PCIEEPX_RAS_EINJ_EN(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ras_hdr
 *
 * PCIe EP Vendor RAS DES Header Register
 */
union cavm_pcieepx_ras_hdr
{
    uint32_t u;
    struct cavm_pcieepx_ras_hdr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t vsec_length           : 12; /**< [ 31: 20](RO) VSEC length. */
        uint32_t vsec_rev              : 4;  /**< [ 19: 16](RO) Capability version. */
        uint32_t vsec_id               : 16; /**< [ 15:  0](RO) VSEC ID. */
#else /* Word 0 - Little Endian */
        uint32_t vsec_id               : 16; /**< [ 15:  0](RO) VSEC ID. */
        uint32_t vsec_rev              : 4;  /**< [ 19: 16](RO) Capability version. */
        uint32_t vsec_length           : 12; /**< [ 31: 20](RO) VSEC length. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ras_hdr_s cn; */
};
typedef union cavm_pcieepx_ras_hdr cavm_pcieepx_ras_hdr_t;

static inline uint64_t CAVM_PCIEEPX_RAS_HDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_RAS_HDR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x250 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x250 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x250 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x250 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_RAS_HDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_RAS_HDR(a) cavm_pcieepx_ras_hdr_t
#define bustype_CAVM_PCIEEPX_RAS_HDR(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_RAS_HDR(a) "PCIEEPX_RAS_HDR"
#define busnum_CAVM_PCIEEPX_RAS_HDR(a) (a)
#define arguments_CAVM_PCIEEPX_RAS_HDR(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ras_sd_ctl1
 *
 * PCIe EP Vendor RAS DES Silicon Debug Control 1 Register
 */
union cavm_pcieepx_ras_sd_ctl1
{
    uint32_t u;
    struct cavm_pcieepx_ras_sd_ctl1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_24_31        : 8;
        uint32_t lp_intv               : 2;  /**< [ 23: 22](R/W) Low power entry interval time.
                                                                 Interval time that the core starts monitoring RXELECIDLE
                                                                 signal after L0s/L1/L2 entry. You should set the value
                                                                 according to the latency from receiving EIOS to,
                                                                 RXELECIDLE assertion at the PHY

                                                                 0x0 = 40ns.
                                                                 0x1 = 160ns.
                                                                 0x2 = 320ns.
                                                                 0x3 - 640ns. */
        uint32_t tx_eios_num           : 2;  /**< [ 21: 20](R/W) Number of TX EIOS.
                                                                 This register sets the number of transmit EIOS for L0s/L1
                                                                 entry and disable/loopback/hot-reset exit. The core selects
                                                                 the greater value between this register and the value defined
                                                                 by the PCI-SIG specification.

                                                                 Gen1 or Gen3
                                                                 0x0 = 1.
                                                                 0x1 = 4.
                                                                 0x2 = 8.
                                                                 0x3 - 16.

                                                                 Gen2
                                                                 0x0 = 2.
                                                                 0x1 = 8.
                                                                 0x2 = 16.
                                                                 0x3 - 32. */
        uint32_t reserved_17_19        : 3;
        uint32_t force_detect_lane_en  : 1;  /**< [ 16: 16](R/W) Force detect lane enable.
                                                                 When this bit is set, the core ignores receiver detection from
                                                                 PHY during LTSSM detect state and uses
                                                                 [FORCE_DETECT_LANE]. */
        uint32_t force_detect_lane     : 16; /**< [ 15:  0](R/W) Force detect lane.
                                                                 When set, the core ignores receiver detection from PHY
                                                                 during LTSSM detect state and uses this value instead.
                                                                 _ Bit \<0\> = Lane 0.
                                                                 _ Bit \<1\> = Lane 1.
                                                                 _ Bit \<2\> = Lane 2.
                                                                 _ Bit \<3\> = Lane 3.

                                                                 _ Bit \<15:4\> = Lanes 4 through 15 (not supported). */
#else /* Word 0 - Little Endian */
        uint32_t force_detect_lane     : 16; /**< [ 15:  0](R/W) Force detect lane.
                                                                 When set, the core ignores receiver detection from PHY
                                                                 during LTSSM detect state and uses this value instead.
                                                                 _ Bit \<0\> = Lane 0.
                                                                 _ Bit \<1\> = Lane 1.
                                                                 _ Bit \<2\> = Lane 2.
                                                                 _ Bit \<3\> = Lane 3.

                                                                 _ Bit \<15:4\> = Lanes 4 through 15 (not supported). */
        uint32_t force_detect_lane_en  : 1;  /**< [ 16: 16](R/W) Force detect lane enable.
                                                                 When this bit is set, the core ignores receiver detection from
                                                                 PHY during LTSSM detect state and uses
                                                                 [FORCE_DETECT_LANE]. */
        uint32_t reserved_17_19        : 3;
        uint32_t tx_eios_num           : 2;  /**< [ 21: 20](R/W) Number of TX EIOS.
                                                                 This register sets the number of transmit EIOS for L0s/L1
                                                                 entry and disable/loopback/hot-reset exit. The core selects
                                                                 the greater value between this register and the value defined
                                                                 by the PCI-SIG specification.

                                                                 Gen1 or Gen3
                                                                 0x0 = 1.
                                                                 0x1 = 4.
                                                                 0x2 = 8.
                                                                 0x3 - 16.

                                                                 Gen2
                                                                 0x0 = 2.
                                                                 0x1 = 8.
                                                                 0x2 = 16.
                                                                 0x3 - 32. */
        uint32_t lp_intv               : 2;  /**< [ 23: 22](R/W) Low power entry interval time.
                                                                 Interval time that the core starts monitoring RXELECIDLE
                                                                 signal after L0s/L1/L2 entry. You should set the value
                                                                 according to the latency from receiving EIOS to,
                                                                 RXELECIDLE assertion at the PHY

                                                                 0x0 = 40ns.
                                                                 0x1 = 160ns.
                                                                 0x2 = 320ns.
                                                                 0x3 - 640ns. */
        uint32_t reserved_24_31        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ras_sd_ctl1_s cn; */
};
typedef union cavm_pcieepx_ras_sd_ctl1 cavm_pcieepx_ras_sd_ctl1_t;

static inline uint64_t CAVM_PCIEEPX_RAS_SD_CTL1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_RAS_SD_CTL1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x2ec + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x2ec + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x2ec + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x2ec + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_RAS_SD_CTL1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_RAS_SD_CTL1(a) cavm_pcieepx_ras_sd_ctl1_t
#define bustype_CAVM_PCIEEPX_RAS_SD_CTL1(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_RAS_SD_CTL1(a) "PCIEEPX_RAS_SD_CTL1"
#define busnum_CAVM_PCIEEPX_RAS_SD_CTL1(a) (a)
#define arguments_CAVM_PCIEEPX_RAS_SD_CTL1(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ras_sd_ctl2
 *
 * PCIe EP Vendor RAS DES Silicon Debug Control 2 Register
 */
union cavm_pcieepx_ras_sd_ctl2
{
    uint32_t u;
    struct cavm_pcieepx_ras_sd_ctl2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_17_31        : 15;
        uint32_t fr_err_rcvy_dis       : 1;  /**< [ 16: 16](R/W) Framing error recovery disable.
                                                                 This bit disables a transition to recovery state when a framing
                                                                 error has occurred. */
        uint32_t reserved_11_15        : 5;
        uint32_t dir_lpbslv_to_exit    : 1;  /**< [ 10: 10](R/W) Direct loopback slave to exit.
                                                                 When set and the LTSSM is in loopback slave active state,
                                                                 the LTSSM transitions to the loopback slave exit state. */
        uint32_t dir_polcmp_to_det     : 1;  /**< [  9:  9](R/W) Direct Polling.Compliance to detect.
                                                                 When this bit is set and the LTSSM is in polling compliance
                                                                 state, the LTSSM transitions to detect state. */
        uint32_t dir_recidle_config    : 1;  /**< [  8:  8](R/W) Direct Recovery.Idle to configuration.
                                                                 When this bit is set and the LTSSM is in recovery idle state,
                                                                 the LTSSM transitions to configuration state. */
        uint32_t reserved_3_7          : 5;
        uint32_t noack_force_lnkdn     : 1;  /**< [  2:  2](R/W) Force link down.
                                                                 When this bit is set and the core detects REPLY_NUM rolling
                                                                 over 4 times, the LTSSM transitions to detect state. */
        uint32_t rcry_req              : 1;  /**< [  1:  1](WO) Recovery request.
                                                                 When this bit is set in L0 or L0s, the LTSSM starts
                                                                 transitioning to recovery state. This request does not cause
                                                                 a speed change or reequalization. This bit always reads
                                                                 a zero. */
        uint32_t hold_ltssm            : 1;  /**< [  0:  0](R/W) Hold and release LTSSM.
                                                                 For as long as this is set, the core stays in the current
                                                                 LTSSM. */
#else /* Word 0 - Little Endian */
        uint32_t hold_ltssm            : 1;  /**< [  0:  0](R/W) Hold and release LTSSM.
                                                                 For as long as this is set, the core stays in the current
                                                                 LTSSM. */
        uint32_t rcry_req              : 1;  /**< [  1:  1](WO) Recovery request.
                                                                 When this bit is set in L0 or L0s, the LTSSM starts
                                                                 transitioning to recovery state. This request does not cause
                                                                 a speed change or reequalization. This bit always reads
                                                                 a zero. */
        uint32_t noack_force_lnkdn     : 1;  /**< [  2:  2](R/W) Force link down.
                                                                 When this bit is set and the core detects REPLY_NUM rolling
                                                                 over 4 times, the LTSSM transitions to detect state. */
        uint32_t reserved_3_7          : 5;
        uint32_t dir_recidle_config    : 1;  /**< [  8:  8](R/W) Direct Recovery.Idle to configuration.
                                                                 When this bit is set and the LTSSM is in recovery idle state,
                                                                 the LTSSM transitions to configuration state. */
        uint32_t dir_polcmp_to_det     : 1;  /**< [  9:  9](R/W) Direct Polling.Compliance to detect.
                                                                 When this bit is set and the LTSSM is in polling compliance
                                                                 state, the LTSSM transitions to detect state. */
        uint32_t dir_lpbslv_to_exit    : 1;  /**< [ 10: 10](R/W) Direct loopback slave to exit.
                                                                 When set and the LTSSM is in loopback slave active state,
                                                                 the LTSSM transitions to the loopback slave exit state. */
        uint32_t reserved_11_15        : 5;
        uint32_t fr_err_rcvy_dis       : 1;  /**< [ 16: 16](R/W) Framing error recovery disable.
                                                                 This bit disables a transition to recovery state when a framing
                                                                 error has occurred. */
        uint32_t reserved_17_31        : 15;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ras_sd_ctl2_s cn; */
};
typedef union cavm_pcieepx_ras_sd_ctl2 cavm_pcieepx_ras_sd_ctl2_t;

static inline uint64_t CAVM_PCIEEPX_RAS_SD_CTL2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_RAS_SD_CTL2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x2f0 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x2f0 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x2f0 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x2f0 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_RAS_SD_CTL2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_RAS_SD_CTL2(a) cavm_pcieepx_ras_sd_ctl2_t
#define bustype_CAVM_PCIEEPX_RAS_SD_CTL2(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_RAS_SD_CTL2(a) "PCIEEPX_RAS_SD_CTL2"
#define busnum_CAVM_PCIEEPX_RAS_SD_CTL2(a) (a)
#define arguments_CAVM_PCIEEPX_RAS_SD_CTL2(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ras_sd_eq_ctl1
 *
 * PCIe EP Vendor RAS DES Silicon Debug EQ Control 1 Register
 */
union cavm_pcieepx_ras_sd_eq_ctl1
{
    uint32_t u;
    struct cavm_pcieepx_ras_sd_eq_ctl1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t fom_target            : 8;  /**< [ 31: 24](R/W) FOM target.
                                                                 Indicates figure of merit target criteria value of EQ
                                                                 master (DSP in EQ Phase3/USP in EQ Phase2).
                                                                 This field is only valid when PCIEEP_GEN3_EQ_CTL[FM] is
                                                                 0x1 (figure of merit). */
        uint32_t fom_target_en         : 1;  /**< [ 23: 23](R/W) FOM target enable.
                                                                 Enables the [FOM_TARGET] field. */
        uint32_t reserved_18_22        : 5;
        uint32_t eval_interval_time    : 2;  /**< [ 17: 16](R/W) Eval interval time.
                                                                 Indicates interval time of RxEqEval assertion.
                                                                 0x0 = 500 ns.
                                                                 0x1 = 1 us.
                                                                 0x2 = 2 us.
                                                                 0x3 = 4 us.

                                                                 This field is used for EQ master (DSP in EQ Phase3/USP in
                                                                 EQ Phase2). */
        uint32_t reserved_10_15        : 6;
        uint32_t ext_eq_timeout        : 2;  /**< [  9:  8](R/W) Extends EQ Phase2/3 timeout.
                                                                 This field is used when the ltssm is in Recovery.EQ2/3.
                                                                 When this field is set, the value of the EQ2/3 timeout is
                                                                 extended.

                                                                 EQ master (DSP in EQ Phase 3/USP in EQ Phaase2)
                                                                 0x0 = 24 ms (default).
                                                                 0x1 = 48 ms
                                                                 0x2 = 240 ms.
                                                                 0x3 = No timeout.

                                                                 EQ slave (DSP in EQ Phase 2/USP in EQ Phaase3)
                                                                 0x0 = 32 ms (default).
                                                                 0x1 = 56 ms
                                                                 0x2 = 248 ms.
                                                                 0x3 = No timeout. */
        uint32_t reserved_6_7          : 2;
        uint32_t eq_rate_sel           : 2;  /**< [  5:  4](R/W) EQ status rate select.
                                                                 Setting this field in conjunction with [EQ_LANE_SEL]
                                                                 determines the per-lane silicon debug EQ status data
                                                                 returned by the SD_EQ_CONTROL[2/3] and
                                                                 SD_EQ_STATUS[1/2/3] viewport registers.
                                                                 0x0 = 8.0 GT/s speed.
                                                                 0x1 = 16.0 GT/s speed.
                                                                 0x2 = 32.0 GT/s speed.
                                                                 0x3 = Reserved. */
        uint32_t eq_lane_sel           : 4;  /**< [  3:  0](R/W) EQ status lane select.
                                                                 Setting this field in conjunction with [EQ_RATE_SEL]
                                                                 determines the per-lane silicon debug EQ status data
                                                                 returned by the SD_EQ_CONTROL[2/3] and
                                                                 SD_EQ_STATUS[1/2/3] viewport registers.
                                                                 0x0 = Lane0.
                                                                 0x1 = Lane1.
                                                                 0x2 = Lane2.
                                                                 _ ...
                                                                 0x7 = Lane7.
                                                                 0x8-0xF = Reserved. */
#else /* Word 0 - Little Endian */
        uint32_t eq_lane_sel           : 4;  /**< [  3:  0](R/W) EQ status lane select.
                                                                 Setting this field in conjunction with [EQ_RATE_SEL]
                                                                 determines the per-lane silicon debug EQ status data
                                                                 returned by the SD_EQ_CONTROL[2/3] and
                                                                 SD_EQ_STATUS[1/2/3] viewport registers.
                                                                 0x0 = Lane0.
                                                                 0x1 = Lane1.
                                                                 0x2 = Lane2.
                                                                 _ ...
                                                                 0x7 = Lane7.
                                                                 0x8-0xF = Reserved. */
        uint32_t eq_rate_sel           : 2;  /**< [  5:  4](R/W) EQ status rate select.
                                                                 Setting this field in conjunction with [EQ_LANE_SEL]
                                                                 determines the per-lane silicon debug EQ status data
                                                                 returned by the SD_EQ_CONTROL[2/3] and
                                                                 SD_EQ_STATUS[1/2/3] viewport registers.
                                                                 0x0 = 8.0 GT/s speed.
                                                                 0x1 = 16.0 GT/s speed.
                                                                 0x2 = 32.0 GT/s speed.
                                                                 0x3 = Reserved. */
        uint32_t reserved_6_7          : 2;
        uint32_t ext_eq_timeout        : 2;  /**< [  9:  8](R/W) Extends EQ Phase2/3 timeout.
                                                                 This field is used when the ltssm is in Recovery.EQ2/3.
                                                                 When this field is set, the value of the EQ2/3 timeout is
                                                                 extended.

                                                                 EQ master (DSP in EQ Phase 3/USP in EQ Phaase2)
                                                                 0x0 = 24 ms (default).
                                                                 0x1 = 48 ms
                                                                 0x2 = 240 ms.
                                                                 0x3 = No timeout.

                                                                 EQ slave (DSP in EQ Phase 2/USP in EQ Phaase3)
                                                                 0x0 = 32 ms (default).
                                                                 0x1 = 56 ms
                                                                 0x2 = 248 ms.
                                                                 0x3 = No timeout. */
        uint32_t reserved_10_15        : 6;
        uint32_t eval_interval_time    : 2;  /**< [ 17: 16](R/W) Eval interval time.
                                                                 Indicates interval time of RxEqEval assertion.
                                                                 0x0 = 500 ns.
                                                                 0x1 = 1 us.
                                                                 0x2 = 2 us.
                                                                 0x3 = 4 us.

                                                                 This field is used for EQ master (DSP in EQ Phase3/USP in
                                                                 EQ Phase2). */
        uint32_t reserved_18_22        : 5;
        uint32_t fom_target_en         : 1;  /**< [ 23: 23](R/W) FOM target enable.
                                                                 Enables the [FOM_TARGET] field. */
        uint32_t fom_target            : 8;  /**< [ 31: 24](R/W) FOM target.
                                                                 Indicates figure of merit target criteria value of EQ
                                                                 master (DSP in EQ Phase3/USP in EQ Phase2).
                                                                 This field is only valid when PCIEEP_GEN3_EQ_CTL[FM] is
                                                                 0x1 (figure of merit). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ras_sd_eq_ctl1_s cn; */
};
typedef union cavm_pcieepx_ras_sd_eq_ctl1 cavm_pcieepx_ras_sd_eq_ctl1_t;

static inline uint64_t CAVM_PCIEEPX_RAS_SD_EQ_CTL1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_RAS_SD_EQ_CTL1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x31c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x31c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x31c + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x31c + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_RAS_SD_EQ_CTL1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_RAS_SD_EQ_CTL1(a) cavm_pcieepx_ras_sd_eq_ctl1_t
#define bustype_CAVM_PCIEEPX_RAS_SD_EQ_CTL1(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_RAS_SD_EQ_CTL1(a) "PCIEEPX_RAS_SD_EQ_CTL1"
#define busnum_CAVM_PCIEEPX_RAS_SD_EQ_CTL1(a) (a)
#define arguments_CAVM_PCIEEPX_RAS_SD_EQ_CTL1(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ras_sd_eq_ctl2
 *
 * PCIe EP Vendor RAS DES Silicon Debug EQ Control 2 Register
 */
union cavm_pcieepx_ras_sd_eq_ctl2
{
    uint32_t u;
    struct cavm_pcieepx_ras_sd_eq_ctl2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_31           : 1;
        uint32_t force_loc_txpre_en    : 1;  /**< [ 30: 30](R/W) Force local transmitter preset enable. Enables [FORCE_LOC_TXPRE]. */
        uint32_t force_loc_rxhint_en   : 1;  /**< [ 29: 29](R/W) Force local receiver preset hint enable. Enables [FORCE_LOC_RXHINT]. */
        uint32_t force_loc_txcoef_en   : 1;  /**< [ 28: 28](R/W) Force local transmitter coefficient enable.
                                                                 Enables the following fields:
                                                                 [FORCE_LOC_TXPRE_CUR],
                                                                 [FORCE_LOC_TX_CUR],
                                                                 [FORCE_LOC_TXPOST_CUR]. */
        uint32_t force_loc_txpre       : 4;  /**< [ 27: 24](R/W) Force local transmitter preset.
                                                                 Indicates initial preset value of USP in EQ slave (EQ Phase2)
                                                                 instead of receiving EQ TS2. */
        uint32_t reserved_21_23        : 3;
        uint32_t force_loc_rxhint      : 3;  /**< [ 20: 18](R/W) Force local receiver preset hint.
                                                                 Indicates the RxPresetHint value of EQ slave (DSP in EQ
                                                                 Phase2/USP in EQ Phase3), instead of received or set value. */
        uint32_t force_loc_txpost_cur  : 6;  /**< [ 17: 12](R/W) Force local transmitter postcursor.
                                                                 Indicates the coefficient value of EQ slave (DSP in EQ
                                                                 Phase2/USP in EQ Phase3), instead of the value instructed
                                                                 from link partner. */
        uint32_t force_loc_tx_cur      : 6;  /**< [ 11:  6](R/W) Force local transmitter cursor.
                                                                 Indicates the coefficient value of EQ slave (DSP in EQ
                                                                 Phase2/USP in EQ Phase3), instead of the value instructed
                                                                 from link partner. */
        uint32_t force_loc_txpre_cur   : 6;  /**< [  5:  0](R/W) Force local transmitter precursor.
                                                                 Indicates the coefficient value of EQ slave (DSP in EQ
                                                                 Phase2/USP in EQ Phase3), instead of the value instructed
                                                                 from link partner. */
#else /* Word 0 - Little Endian */
        uint32_t force_loc_txpre_cur   : 6;  /**< [  5:  0](R/W) Force local transmitter precursor.
                                                                 Indicates the coefficient value of EQ slave (DSP in EQ
                                                                 Phase2/USP in EQ Phase3), instead of the value instructed
                                                                 from link partner. */
        uint32_t force_loc_tx_cur      : 6;  /**< [ 11:  6](R/W) Force local transmitter cursor.
                                                                 Indicates the coefficient value of EQ slave (DSP in EQ
                                                                 Phase2/USP in EQ Phase3), instead of the value instructed
                                                                 from link partner. */
        uint32_t force_loc_txpost_cur  : 6;  /**< [ 17: 12](R/W) Force local transmitter postcursor.
                                                                 Indicates the coefficient value of EQ slave (DSP in EQ
                                                                 Phase2/USP in EQ Phase3), instead of the value instructed
                                                                 from link partner. */
        uint32_t force_loc_rxhint      : 3;  /**< [ 20: 18](R/W) Force local receiver preset hint.
                                                                 Indicates the RxPresetHint value of EQ slave (DSP in EQ
                                                                 Phase2/USP in EQ Phase3), instead of received or set value. */
        uint32_t reserved_21_23        : 3;
        uint32_t force_loc_txpre       : 4;  /**< [ 27: 24](R/W) Force local transmitter preset.
                                                                 Indicates initial preset value of USP in EQ slave (EQ Phase2)
                                                                 instead of receiving EQ TS2. */
        uint32_t force_loc_txcoef_en   : 1;  /**< [ 28: 28](R/W) Force local transmitter coefficient enable.
                                                                 Enables the following fields:
                                                                 [FORCE_LOC_TXPRE_CUR],
                                                                 [FORCE_LOC_TX_CUR],
                                                                 [FORCE_LOC_TXPOST_CUR]. */
        uint32_t force_loc_rxhint_en   : 1;  /**< [ 29: 29](R/W) Force local receiver preset hint enable. Enables [FORCE_LOC_RXHINT]. */
        uint32_t force_loc_txpre_en    : 1;  /**< [ 30: 30](R/W) Force local transmitter preset enable. Enables [FORCE_LOC_TXPRE]. */
        uint32_t reserved_31           : 1;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ras_sd_eq_ctl2_s cn; */
};
typedef union cavm_pcieepx_ras_sd_eq_ctl2 cavm_pcieepx_ras_sd_eq_ctl2_t;

static inline uint64_t CAVM_PCIEEPX_RAS_SD_EQ_CTL2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_RAS_SD_EQ_CTL2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x320 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x320 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x320 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x320 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_RAS_SD_EQ_CTL2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_RAS_SD_EQ_CTL2(a) cavm_pcieepx_ras_sd_eq_ctl2_t
#define bustype_CAVM_PCIEEPX_RAS_SD_EQ_CTL2(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_RAS_SD_EQ_CTL2(a) "PCIEEPX_RAS_SD_EQ_CTL2"
#define busnum_CAVM_PCIEEPX_RAS_SD_EQ_CTL2(a) (a)
#define arguments_CAVM_PCIEEPX_RAS_SD_EQ_CTL2(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ras_sd_eq_ctl3
 *
 * PCIe EP Vendor RAS DES Silicon Debug EQ Control 3 Register
 */
union cavm_pcieepx_ras_sd_eq_ctl3
{
    uint32_t u;
    struct cavm_pcieepx_ras_sd_eq_ctl3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_29_31        : 3;
        uint32_t force_rem_txcoef_en   : 1;  /**< [ 28: 28](R/W) Force remote transmitter coefficient enable as selected by
                                                                 PCIEEP_RAS_SD_EQ_CTL1[EQ_LANE_SEL].
                                                                 Enables the following fields:
                                                                 [FORCE_REM_TXPRE_CUR],
                                                                 [FORCE_REM_TX_CUR],
                                                                 [FORCE_REM_TXPOST_CUR]. */
        uint32_t reserved_18_27        : 10;
        uint32_t force_rem_txpost_cur  : 6;  /**< [ 17: 12](R/W) Force remote transmitter postcursor as selected by
                                                                 PCIEEP_RAS_SD_EQ_CTL1[EQ_LANE_SEL].
                                                                 Indicates the coefficient value of EQ master (DSP in EQ
                                                                 Phase3/USP in EQ Phase2), instead of the value instructed
                                                                 from link partner. */
        uint32_t force_rem_tx_cur      : 6;  /**< [ 11:  6](R/W) Force remote transmitter cursor as selected by
                                                                 PCIEEP_RAS_SD_EQ_CTL1[EQ_LANE_SEL].
                                                                 Indicates the coefficient value of EQ master (DSP in EQ
                                                                 Phase3/USP in EQ Phase2), instead of the value instructed
                                                                 from link partner. */
        uint32_t force_rem_txpre_cur   : 6;  /**< [  5:  0](RAZ) Force remote transmitter pre-cursor as selected by
                                                                 PCIEEP_RAS_SD_EQ_CTL1[EQ_LANE_SEL].
                                                                 Indicates the coefficient value of EQ master (DSP in EQ
                                                                 Phase3/USP in EQ Phase2), instead of the value instructed
                                                                 from link partner. */
#else /* Word 0 - Little Endian */
        uint32_t force_rem_txpre_cur   : 6;  /**< [  5:  0](RAZ) Force remote transmitter pre-cursor as selected by
                                                                 PCIEEP_RAS_SD_EQ_CTL1[EQ_LANE_SEL].
                                                                 Indicates the coefficient value of EQ master (DSP in EQ
                                                                 Phase3/USP in EQ Phase2), instead of the value instructed
                                                                 from link partner. */
        uint32_t force_rem_tx_cur      : 6;  /**< [ 11:  6](R/W) Force remote transmitter cursor as selected by
                                                                 PCIEEP_RAS_SD_EQ_CTL1[EQ_LANE_SEL].
                                                                 Indicates the coefficient value of EQ master (DSP in EQ
                                                                 Phase3/USP in EQ Phase2), instead of the value instructed
                                                                 from link partner. */
        uint32_t force_rem_txpost_cur  : 6;  /**< [ 17: 12](R/W) Force remote transmitter postcursor as selected by
                                                                 PCIEEP_RAS_SD_EQ_CTL1[EQ_LANE_SEL].
                                                                 Indicates the coefficient value of EQ master (DSP in EQ
                                                                 Phase3/USP in EQ Phase2), instead of the value instructed
                                                                 from link partner. */
        uint32_t reserved_18_27        : 10;
        uint32_t force_rem_txcoef_en   : 1;  /**< [ 28: 28](R/W) Force remote transmitter coefficient enable as selected by
                                                                 PCIEEP_RAS_SD_EQ_CTL1[EQ_LANE_SEL].
                                                                 Enables the following fields:
                                                                 [FORCE_REM_TXPRE_CUR],
                                                                 [FORCE_REM_TX_CUR],
                                                                 [FORCE_REM_TXPOST_CUR]. */
        uint32_t reserved_29_31        : 3;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ras_sd_eq_ctl3_s cn; */
};
typedef union cavm_pcieepx_ras_sd_eq_ctl3 cavm_pcieepx_ras_sd_eq_ctl3_t;

static inline uint64_t CAVM_PCIEEPX_RAS_SD_EQ_CTL3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_RAS_SD_EQ_CTL3(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x324 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x324 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x324 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x324 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_RAS_SD_EQ_CTL3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_RAS_SD_EQ_CTL3(a) cavm_pcieepx_ras_sd_eq_ctl3_t
#define bustype_CAVM_PCIEEPX_RAS_SD_EQ_CTL3(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_RAS_SD_EQ_CTL3(a) "PCIEEPX_RAS_SD_EQ_CTL3"
#define busnum_CAVM_PCIEEPX_RAS_SD_EQ_CTL3(a) (a)
#define arguments_CAVM_PCIEEPX_RAS_SD_EQ_CTL3(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ras_sd_eq_stat1
 *
 * PCIe EP Vendor RAS DES Silicon Debug EQ Status 1 Register
 */
union cavm_pcieepx_ras_sd_eq_stat1
{
    uint32_t u;
    struct cavm_pcieepx_ras_sd_eq_stat1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t eq_reject_event       : 1;  /**< [  7:  7](RO/H) EQ reject event.
                                                                 Indicates that the core receives two consecutive TS1 OS
                                                                 w/Reject=1b during EQ master phase (DSP in EQ
                                                                 Phase3/USP in EQ Phase2). This bit is automatically cleared
                                                                 when the core starts EQ master phase again. */
        uint32_t eq_rulec_viol         : 1;  /**< [  6:  6](RO/H) EQ rule C violation.
                                                                 Indicates that coefficient rule C violation is detected in the
                                                                 values provided by PHY using direction change method
                                                                 during EQ master phase (DSP in EQ Phase3/USP in EQ
                                                                 Phase2). The coefficients rule C
                                                                 correspond to the rules c) from section "Rules for
                                                                 Transmitter Coefficients" in the PCI Express Base Specification.
                                                                 This bit is automatically cleared when the controller starts
                                                                 EQ master phase again. */
        uint32_t eq_ruleb_viol         : 1;  /**< [  5:  5](RO/H) EQ rule B violation.
                                                                 Indicates that coefficient rule B violation is detected in the
                                                                 values provided by PHY using direction change method
                                                                 during EQ master phase (DSP in EQ Phase3/USP in EQ
                                                                 Phase2). The coefficients rules B
                                                                 correspond to the rules b) from section "Rules for
                                                                 Transmitter Coefficients" in the PCI Express Base Specification.
                                                                 This bit is automatically cleared when the controller starts
                                                                 EQ master phase again. */
        uint32_t eq_rulea_viol         : 1;  /**< [  4:  4](RO/H) EQ rule A violation.
                                                                 Indicates that coefficient rule A violation is detected in the
                                                                 values provided by PHY using direction change method
                                                                 during EQ master phase (DSP in EQ Phase3/USP in EQ
                                                                 Phase2).  The coefficients rules A
                                                                 correspond to the rules a) from section "Rules for
                                                                 Transmitter Coefficients" in the PCI Express Base Specification.
                                                                 This bit is automatically cleared when the controller starts
                                                                 EQ master phase again. */
        uint32_t reserved_3            : 1;
        uint32_t eq_conv_info          : 2;  /**< [  2:  1](RO/H) EQ convergence info.
                                                                 Indicates equalization convergence information.
                                                                 0x0 = Equalization is not attempted.
                                                                 0x1 = Equalization finished successfully.
                                                                 0x2 = Equalization finished unsuccessfully.
                                                                 0x3 = Reserved.
                                                                 This bit is automatically cleared when the core starts EQ
                                                                 master phase again. */
        uint32_t eq_sequence           : 1;  /**< [  0:  0](RO) EQ sequence.
                                                                 Indicates that the core is starting the equalization sequence. */
#else /* Word 0 - Little Endian */
        uint32_t eq_sequence           : 1;  /**< [  0:  0](RO) EQ sequence.
                                                                 Indicates that the core is starting the equalization sequence. */
        uint32_t eq_conv_info          : 2;  /**< [  2:  1](RO/H) EQ convergence info.
                                                                 Indicates equalization convergence information.
                                                                 0x0 = Equalization is not attempted.
                                                                 0x1 = Equalization finished successfully.
                                                                 0x2 = Equalization finished unsuccessfully.
                                                                 0x3 = Reserved.
                                                                 This bit is automatically cleared when the core starts EQ
                                                                 master phase again. */
        uint32_t reserved_3            : 1;
        uint32_t eq_rulea_viol         : 1;  /**< [  4:  4](RO/H) EQ rule A violation.
                                                                 Indicates that coefficient rule A violation is detected in the
                                                                 values provided by PHY using direction change method
                                                                 during EQ master phase (DSP in EQ Phase3/USP in EQ
                                                                 Phase2).  The coefficients rules A
                                                                 correspond to the rules a) from section "Rules for
                                                                 Transmitter Coefficients" in the PCI Express Base Specification.
                                                                 This bit is automatically cleared when the controller starts
                                                                 EQ master phase again. */
        uint32_t eq_ruleb_viol         : 1;  /**< [  5:  5](RO/H) EQ rule B violation.
                                                                 Indicates that coefficient rule B violation is detected in the
                                                                 values provided by PHY using direction change method
                                                                 during EQ master phase (DSP in EQ Phase3/USP in EQ
                                                                 Phase2). The coefficients rules B
                                                                 correspond to the rules b) from section "Rules for
                                                                 Transmitter Coefficients" in the PCI Express Base Specification.
                                                                 This bit is automatically cleared when the controller starts
                                                                 EQ master phase again. */
        uint32_t eq_rulec_viol         : 1;  /**< [  6:  6](RO/H) EQ rule C violation.
                                                                 Indicates that coefficient rule C violation is detected in the
                                                                 values provided by PHY using direction change method
                                                                 during EQ master phase (DSP in EQ Phase3/USP in EQ
                                                                 Phase2). The coefficients rule C
                                                                 correspond to the rules c) from section "Rules for
                                                                 Transmitter Coefficients" in the PCI Express Base Specification.
                                                                 This bit is automatically cleared when the controller starts
                                                                 EQ master phase again. */
        uint32_t eq_reject_event       : 1;  /**< [  7:  7](RO/H) EQ reject event.
                                                                 Indicates that the core receives two consecutive TS1 OS
                                                                 w/Reject=1b during EQ master phase (DSP in EQ
                                                                 Phase3/USP in EQ Phase2). This bit is automatically cleared
                                                                 when the core starts EQ master phase again. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ras_sd_eq_stat1_s cn; */
};
typedef union cavm_pcieepx_ras_sd_eq_stat1 cavm_pcieepx_ras_sd_eq_stat1_t;

static inline uint64_t CAVM_PCIEEPX_RAS_SD_EQ_STAT1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_RAS_SD_EQ_STAT1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x32c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x32c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x32c + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x32c + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_RAS_SD_EQ_STAT1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_RAS_SD_EQ_STAT1(a) cavm_pcieepx_ras_sd_eq_stat1_t
#define bustype_CAVM_PCIEEPX_RAS_SD_EQ_STAT1(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_RAS_SD_EQ_STAT1(a) "PCIEEPX_RAS_SD_EQ_STAT1"
#define busnum_CAVM_PCIEEPX_RAS_SD_EQ_STAT1(a) (a)
#define arguments_CAVM_PCIEEPX_RAS_SD_EQ_STAT1(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ras_sd_eq_stat2
 *
 * PCIe EP Vendor RAS DES Silicon Debug EQ Status 2 Register
 */
union cavm_pcieepx_ras_sd_eq_stat2
{
    uint32_t u;
    struct cavm_pcieepx_ras_sd_eq_stat2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t eq_loc_fom_val        : 8;  /**< [ 31: 24](RO/H) EQ local figure of merit.
                                                                 Indicates local maximum figure of merit value. */
        uint32_t reserved_21_23        : 3;
        uint32_t eq_loc_rxhint         : 3;  /**< [ 20: 18](RO/H) EQ local receiver preset hint.
                                                                 Indicates local receiver preset hint value. */
        uint32_t eq_loc_post_cur       : 6;  /**< [ 17: 12](RO/H) EQ local postcursor.
                                                                 Indicates local post cursor coefficient value. */
        uint32_t eq_loc_cur            : 6;  /**< [ 11:  6](RO/H) EQ local cursor.
                                                                 Indicates local cursor coefficient value. */
        uint32_t eq_loc_pre_cur        : 6;  /**< [  5:  0](RO/H) EQ local precursor.
                                                                 Indicates local precursor coefficient value. */
#else /* Word 0 - Little Endian */
        uint32_t eq_loc_pre_cur        : 6;  /**< [  5:  0](RO/H) EQ local precursor.
                                                                 Indicates local precursor coefficient value. */
        uint32_t eq_loc_cur            : 6;  /**< [ 11:  6](RO/H) EQ local cursor.
                                                                 Indicates local cursor coefficient value. */
        uint32_t eq_loc_post_cur       : 6;  /**< [ 17: 12](RO/H) EQ local postcursor.
                                                                 Indicates local post cursor coefficient value. */
        uint32_t eq_loc_rxhint         : 3;  /**< [ 20: 18](RO/H) EQ local receiver preset hint.
                                                                 Indicates local receiver preset hint value. */
        uint32_t reserved_21_23        : 3;
        uint32_t eq_loc_fom_val        : 8;  /**< [ 31: 24](RO/H) EQ local figure of merit.
                                                                 Indicates local maximum figure of merit value. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ras_sd_eq_stat2_s cn; */
};
typedef union cavm_pcieepx_ras_sd_eq_stat2 cavm_pcieepx_ras_sd_eq_stat2_t;

static inline uint64_t CAVM_PCIEEPX_RAS_SD_EQ_STAT2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_RAS_SD_EQ_STAT2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x330 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x330 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x330 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x330 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_RAS_SD_EQ_STAT2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_RAS_SD_EQ_STAT2(a) cavm_pcieepx_ras_sd_eq_stat2_t
#define bustype_CAVM_PCIEEPX_RAS_SD_EQ_STAT2(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_RAS_SD_EQ_STAT2(a) "PCIEEPX_RAS_SD_EQ_STAT2"
#define busnum_CAVM_PCIEEPX_RAS_SD_EQ_STAT2(a) (a)
#define arguments_CAVM_PCIEEPX_RAS_SD_EQ_STAT2(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ras_sd_eq_stat3
 *
 * PCIe EP Vendor RAS DES Silicon Debug EQ Status 3 Register
 */
union cavm_pcieepx_ras_sd_eq_stat3
{
    uint32_t u;
    struct cavm_pcieepx_ras_sd_eq_stat3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_30_31        : 2;
        uint32_t eq_rem_fs             : 6;  /**< [ 29: 24](RO/H) EQ remote FS.
                                                                 Indicates remote FS value. */
        uint32_t eq_rem_lf             : 6;  /**< [ 23: 18](RO/H) EQ remote LF.
                                                                 Indicates remote LF value. */
        uint32_t eq_rem_post_cur       : 6;  /**< [ 17: 12](RO/H) EQ remote postcursor.
                                                                 Indicates remote postcursor coefficient value. */
        uint32_t eq_rem_cur            : 6;  /**< [ 11:  6](RO/H) EQ remote cursor.
                                                                 Indicates remote cursor coefficient value. */
        uint32_t eq_rem_pre_cur        : 6;  /**< [  5:  0](RO/H) EQ remote precursor.
                                                                 Indicates remote postcursor coefficient value. */
#else /* Word 0 - Little Endian */
        uint32_t eq_rem_pre_cur        : 6;  /**< [  5:  0](RO/H) EQ remote precursor.
                                                                 Indicates remote postcursor coefficient value. */
        uint32_t eq_rem_cur            : 6;  /**< [ 11:  6](RO/H) EQ remote cursor.
                                                                 Indicates remote cursor coefficient value. */
        uint32_t eq_rem_post_cur       : 6;  /**< [ 17: 12](RO/H) EQ remote postcursor.
                                                                 Indicates remote postcursor coefficient value. */
        uint32_t eq_rem_lf             : 6;  /**< [ 23: 18](RO/H) EQ remote LF.
                                                                 Indicates remote LF value. */
        uint32_t eq_rem_fs             : 6;  /**< [ 29: 24](RO/H) EQ remote FS.
                                                                 Indicates remote FS value. */
        uint32_t reserved_30_31        : 2;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ras_sd_eq_stat3_s cn; */
};
typedef union cavm_pcieepx_ras_sd_eq_stat3 cavm_pcieepx_ras_sd_eq_stat3_t;

static inline uint64_t CAVM_PCIEEPX_RAS_SD_EQ_STAT3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_RAS_SD_EQ_STAT3(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x334 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x334 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x334 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x334 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_RAS_SD_EQ_STAT3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_RAS_SD_EQ_STAT3(a) cavm_pcieepx_ras_sd_eq_stat3_t
#define bustype_CAVM_PCIEEPX_RAS_SD_EQ_STAT3(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_RAS_SD_EQ_STAT3(a) "PCIEEPX_RAS_SD_EQ_STAT3"
#define busnum_CAVM_PCIEEPX_RAS_SD_EQ_STAT3(a) (a)
#define arguments_CAVM_PCIEEPX_RAS_SD_EQ_STAT3(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ras_sd_l1lane
 *
 * PCIe EP Vendor RAS DES Silicon Debug Status L1Lane Register
 */
union cavm_pcieepx_ras_sd_l1lane
{
    uint32_t u;
    struct cavm_pcieepx_ras_sd_l1lane_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t deskew_ptr            : 8;  /**< [ 31: 24](RO/H) Deskew pointer.
                                                                 Indicates deskew pointer of internal deskew buffer of
                                                                 selected lane number ([LANE_SELECT]). */
        uint32_t reserved_21_23        : 3;
        uint32_t pipe_txelecidle       : 1;  /**< [ 20: 20](RO/H) PIPE:TxElecIdle.
                                                                 Indicates PIPE TXELECIDLE signal of selected lane
                                                                 number ([LANE_SELECT]). */
        uint32_t pipe_rxelecidle       : 1;  /**< [ 19: 19](RO/H) PIPE:RxElecIdle.
                                                                 Indicates PIPE RXELECIDLE signal of selected lane
                                                                 number ([LANE_SELECT]). */
        uint32_t pipe_rxvalid          : 1;  /**< [ 18: 18](RO/H) PIPE:RxValid.
                                                                 Indicates PIPE RXVALID signal of selected lane
                                                                 number ([LANE_SELECT]). */
        uint32_t pipe_det_lane         : 1;  /**< [ 17: 17](RO/H) PIPE:Detect Lane.
                                                                 Indicates whether PHY indicates receiver detection or not on
                                                                 selected lane number ([LANE_SELECT]). */
        uint32_t pipe_rxpol            : 1;  /**< [ 16: 16](RO/H) PIPE:RxPolarity.
                                                                 Indicates PIPE RXPOLARITY signal of selected lane
                                                                 number ([LANE_SELECT]). */
        uint32_t reserved_4_15         : 12;
        uint32_t lane_select           : 4;  /**< [  3:  0](R/W) Lane select.
                                                                 Lane select register for silicon debug status register of
                                                                 Layer1-PerLane.
                                                                 0x0 = Lane0.
                                                                 0x1 = Lane1.
                                                                 0x2 = Lane2.
                                                                 0x3 = Lane3.
                                                                 0x4-0xF = Reserved. */
#else /* Word 0 - Little Endian */
        uint32_t lane_select           : 4;  /**< [  3:  0](R/W) Lane select.
                                                                 Lane select register for silicon debug status register of
                                                                 Layer1-PerLane.
                                                                 0x0 = Lane0.
                                                                 0x1 = Lane1.
                                                                 0x2 = Lane2.
                                                                 0x3 = Lane3.
                                                                 0x4-0xF = Reserved. */
        uint32_t reserved_4_15         : 12;
        uint32_t pipe_rxpol            : 1;  /**< [ 16: 16](RO/H) PIPE:RxPolarity.
                                                                 Indicates PIPE RXPOLARITY signal of selected lane
                                                                 number ([LANE_SELECT]). */
        uint32_t pipe_det_lane         : 1;  /**< [ 17: 17](RO/H) PIPE:Detect Lane.
                                                                 Indicates whether PHY indicates receiver detection or not on
                                                                 selected lane number ([LANE_SELECT]). */
        uint32_t pipe_rxvalid          : 1;  /**< [ 18: 18](RO/H) PIPE:RxValid.
                                                                 Indicates PIPE RXVALID signal of selected lane
                                                                 number ([LANE_SELECT]). */
        uint32_t pipe_rxelecidle       : 1;  /**< [ 19: 19](RO/H) PIPE:RxElecIdle.
                                                                 Indicates PIPE RXELECIDLE signal of selected lane
                                                                 number ([LANE_SELECT]). */
        uint32_t pipe_txelecidle       : 1;  /**< [ 20: 20](RO/H) PIPE:TxElecIdle.
                                                                 Indicates PIPE TXELECIDLE signal of selected lane
                                                                 number ([LANE_SELECT]). */
        uint32_t reserved_21_23        : 3;
        uint32_t deskew_ptr            : 8;  /**< [ 31: 24](RO/H) Deskew pointer.
                                                                 Indicates deskew pointer of internal deskew buffer of
                                                                 selected lane number ([LANE_SELECT]). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ras_sd_l1lane_s cn; */
};
typedef union cavm_pcieepx_ras_sd_l1lane cavm_pcieepx_ras_sd_l1lane_t;

static inline uint64_t CAVM_PCIEEPX_RAS_SD_L1LANE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_RAS_SD_L1LANE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x2fc + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x2fc + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x2fc + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x2fc + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_RAS_SD_L1LANE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_RAS_SD_L1LANE(a) cavm_pcieepx_ras_sd_l1lane_t
#define bustype_CAVM_PCIEEPX_RAS_SD_L1LANE(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_RAS_SD_L1LANE(a) "PCIEEPX_RAS_SD_L1LANE"
#define busnum_CAVM_PCIEEPX_RAS_SD_L1LANE(a) (a)
#define arguments_CAVM_PCIEEPX_RAS_SD_L1LANE(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ras_sd_l1ltssm
 *
 * PCIe EP Vendor RAS DES Silicon Debug Status L1LTSSM Register
 */
union cavm_pcieepx_ras_sd_l1ltssm
{
    uint32_t u;
    struct cavm_pcieepx_ras_sd_l1ltssm_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t ltssm_var             : 16; /**< [ 31: 16](RO/H) LTSSM variable.
                                                                 Indicates internal LTSSM variables defined in the PCI
                                                                 Express base specification.
                                                                 0x0 = directed_speed change.
                                                                 0x1 = changed_speed_recovery.
                                                                 0x2 = successful_speed_negotiation.
                                                                 0x3 = upconfigure_capable; Set to one if both ports advertised
                                                                 the UpConfigure capability in the last Config.Complete.
                                                                 0x4 = select_deemphasis.
                                                                 0x5 = start_equalization_w_preset.
                                                                 0x6 = equalization_done_8GT_data_rate.
                                                                 0x7 = equalization_done_16GT_data_rate.
                                                                 0x8-0xF = idle_to_rlock_transitioned. */
        uint32_t lane_rev              : 1;  /**< [ 15: 15](RO/H) Lane reversal operation.
                                                                 Receiver detected lane reversal. */
        uint32_t reserved_11_14        : 4;
        uint32_t pipe_pwr_dwn          : 3;  /**< [ 10:  8](RO/H) PIPE:PowerDown.
                                                                 Indicates PIPE PowerDown signal. */
        uint32_t framing_err           : 1;  /**< [  7:  7](R/W1C/H) Framing error.
                                                                 Indicates framing error detection status. */
        uint32_t framing_err_ptr       : 7;  /**< [  6:  0](RO/H) First framing error pointer.
                                                                 Identifies the first framing error using the following
                                                                 encoding. The field contents are only valid value when
                                                                 [FRAMING_ERR] = 1.

                                                                 Received unexpected framing token:
                                                                 0x1 = When non-STP/SDP/IDL token was received and it
                                                                 was not in TLP/DLLP reception.
                                                                 0x02 = When current token was not a valid EDB token and
                                                                 previous token was an EDB. (128/256 bit core only).
                                                                 0x03 = When SDP token was received but not expected.
                                                                 0x04 = When STP token was received but not expected.
                                                                 0x05 = When EDS token was expected but not received or
                                                                 whenever an EDS token was received but not expected.
                                                                 0x06 = When a framing error was detected in the deskew
                                                                 block while a packet has been in progress in token_finder.
                                                                 Received Unexpected STP Token
                                                                 0x11 = When framing CRC in STP token did not match.
                                                                 0x12 = When framing parity in STP token did not match.
                                                                 0x13 = When framing TLP length in STP token was
                                                                 smaller than 5 DWORDs.

                                                                 \<page\>

                                                                 Received unexpected block:
                                                                 0x21 = When receiving an OS block following SDS in datastream state.n.
                                                                 0x22 = When data block followed by OS block different.
                                                                 from SKP, EI, EIE in datastream state.
                                                                 0x23 = When block with an undefined block type in datastream state.
                                                                 0x24 = When data stream without data over three cycles in datastream state.
                                                                 0x25 = When OS block during data stream in datastream state.
                                                                 0x26 = When RxStatus error was detected in datastream state.
                                                                 0x27 = When not all active lanes receiving SKP OS starting
                                                                 at same cycle time in SKPOS state.
                                                                 0x28 = When a two-block timeout occurs for SKP OS in SKPOS state.
                                                                 0x29 = When receiving consecutive OS blocks within a data stream in SKPOS state.n.
                                                                 0x2A = When PHY status error was detected in SKPOS state.
                                                                 0x2B = When not all active lanes receiving EIOS starting at
                                                                 same cycle time in EIOS state.
                                                                 0x2C = When at least one symbol from the first 4 symbols
                                                                 is not EIOS symbol in EIOS state (CX_NB=2 only).
                                                                 0x2D = When not all active lanes receiving EIEOS starting
                                                                 at same cycle time in EIEOS state.
                                                                 0x2E = When not full 16 EIEOS symbols are received in EIEOS state.

                                                                 All other values not listed above are reserved. */
#else /* Word 0 - Little Endian */
        uint32_t framing_err_ptr       : 7;  /**< [  6:  0](RO/H) First framing error pointer.
                                                                 Identifies the first framing error using the following
                                                                 encoding. The field contents are only valid value when
                                                                 [FRAMING_ERR] = 1.

                                                                 Received unexpected framing token:
                                                                 0x1 = When non-STP/SDP/IDL token was received and it
                                                                 was not in TLP/DLLP reception.
                                                                 0x02 = When current token was not a valid EDB token and
                                                                 previous token was an EDB. (128/256 bit core only).
                                                                 0x03 = When SDP token was received but not expected.
                                                                 0x04 = When STP token was received but not expected.
                                                                 0x05 = When EDS token was expected but not received or
                                                                 whenever an EDS token was received but not expected.
                                                                 0x06 = When a framing error was detected in the deskew
                                                                 block while a packet has been in progress in token_finder.
                                                                 Received Unexpected STP Token
                                                                 0x11 = When framing CRC in STP token did not match.
                                                                 0x12 = When framing parity in STP token did not match.
                                                                 0x13 = When framing TLP length in STP token was
                                                                 smaller than 5 DWORDs.

                                                                 \<page\>

                                                                 Received unexpected block:
                                                                 0x21 = When receiving an OS block following SDS in datastream state.n.
                                                                 0x22 = When data block followed by OS block different.
                                                                 from SKP, EI, EIE in datastream state.
                                                                 0x23 = When block with an undefined block type in datastream state.
                                                                 0x24 = When data stream without data over three cycles in datastream state.
                                                                 0x25 = When OS block during data stream in datastream state.
                                                                 0x26 = When RxStatus error was detected in datastream state.
                                                                 0x27 = When not all active lanes receiving SKP OS starting
                                                                 at same cycle time in SKPOS state.
                                                                 0x28 = When a two-block timeout occurs for SKP OS in SKPOS state.
                                                                 0x29 = When receiving consecutive OS blocks within a data stream in SKPOS state.n.
                                                                 0x2A = When PHY status error was detected in SKPOS state.
                                                                 0x2B = When not all active lanes receiving EIOS starting at
                                                                 same cycle time in EIOS state.
                                                                 0x2C = When at least one symbol from the first 4 symbols
                                                                 is not EIOS symbol in EIOS state (CX_NB=2 only).
                                                                 0x2D = When not all active lanes receiving EIEOS starting
                                                                 at same cycle time in EIEOS state.
                                                                 0x2E = When not full 16 EIEOS symbols are received in EIEOS state.

                                                                 All other values not listed above are reserved. */
        uint32_t framing_err           : 1;  /**< [  7:  7](R/W1C/H) Framing error.
                                                                 Indicates framing error detection status. */
        uint32_t pipe_pwr_dwn          : 3;  /**< [ 10:  8](RO/H) PIPE:PowerDown.
                                                                 Indicates PIPE PowerDown signal. */
        uint32_t reserved_11_14        : 4;
        uint32_t lane_rev              : 1;  /**< [ 15: 15](RO/H) Lane reversal operation.
                                                                 Receiver detected lane reversal. */
        uint32_t ltssm_var             : 16; /**< [ 31: 16](RO/H) LTSSM variable.
                                                                 Indicates internal LTSSM variables defined in the PCI
                                                                 Express base specification.
                                                                 0x0 = directed_speed change.
                                                                 0x1 = changed_speed_recovery.
                                                                 0x2 = successful_speed_negotiation.
                                                                 0x3 = upconfigure_capable; Set to one if both ports advertised
                                                                 the UpConfigure capability in the last Config.Complete.
                                                                 0x4 = select_deemphasis.
                                                                 0x5 = start_equalization_w_preset.
                                                                 0x6 = equalization_done_8GT_data_rate.
                                                                 0x7 = equalization_done_16GT_data_rate.
                                                                 0x8-0xF = idle_to_rlock_transitioned. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ras_sd_l1ltssm_s cn; */
};
typedef union cavm_pcieepx_ras_sd_l1ltssm cavm_pcieepx_ras_sd_l1ltssm_t;

static inline uint64_t CAVM_PCIEEPX_RAS_SD_L1LTSSM(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_RAS_SD_L1LTSSM(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x300 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x300 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x300 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x300 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_RAS_SD_L1LTSSM", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_RAS_SD_L1LTSSM(a) cavm_pcieepx_ras_sd_l1ltssm_t
#define bustype_CAVM_PCIEEPX_RAS_SD_L1LTSSM(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_RAS_SD_L1LTSSM(a) "PCIEEPX_RAS_SD_L1LTSSM"
#define busnum_CAVM_PCIEEPX_RAS_SD_L1LTSSM(a) (a)
#define arguments_CAVM_PCIEEPX_RAS_SD_L1LTSSM(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ras_sd_statusl2
 *
 * PCIe EP Vendor RAS DES Silicon Debug Status L2 Register
 */
union cavm_pcieepx_ras_sd_statusl2
{
    uint32_t u;
    struct cavm_pcieepx_ras_sd_statusl2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_28_31        : 4;
        uint32_t fc_init2              : 1;  /**< [ 27: 27](RO) Indicates the core is in FC_INIT2(VC0) state. */
        uint32_t fc_init1              : 1;  /**< [ 26: 26](RO) Indicates the core is in FC_INIT1(VC0) state. */
        uint32_t dlcmsm                : 2;  /**< [ 25: 24](RO/H) Indicates the current DLCMSM.
                                                                 0x0 = DL_INACTIVE.
                                                                 0x1 = DL_FC_INIT.
                                                                 0x2 = Reserved.
                                                                 0x3 = DL_ACTIVE. */
        uint32_t rx_ack_seq_no         : 12; /**< [ 23: 12](RO/H) RX ACK sequence number.
                                                                 Indicates the ACK sequence number which is updated by receiving
                                                                 ACK/NAK DLLP. */
        uint32_t tx_ack_seq_no         : 12; /**< [ 11:  0](RO/H) TX ACK sequence number.
                                                                 Indicates next transmit sequence number for transmit TLP. */
#else /* Word 0 - Little Endian */
        uint32_t tx_ack_seq_no         : 12; /**< [ 11:  0](RO/H) TX ACK sequence number.
                                                                 Indicates next transmit sequence number for transmit TLP. */
        uint32_t rx_ack_seq_no         : 12; /**< [ 23: 12](RO/H) RX ACK sequence number.
                                                                 Indicates the ACK sequence number which is updated by receiving
                                                                 ACK/NAK DLLP. */
        uint32_t dlcmsm                : 2;  /**< [ 25: 24](RO/H) Indicates the current DLCMSM.
                                                                 0x0 = DL_INACTIVE.
                                                                 0x1 = DL_FC_INIT.
                                                                 0x2 = Reserved.
                                                                 0x3 = DL_ACTIVE. */
        uint32_t fc_init1              : 1;  /**< [ 26: 26](RO) Indicates the core is in FC_INIT1(VC0) state. */
        uint32_t fc_init2              : 1;  /**< [ 27: 27](RO) Indicates the core is in FC_INIT2(VC0) state. */
        uint32_t reserved_28_31        : 4;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ras_sd_statusl2_s cn; */
};
typedef union cavm_pcieepx_ras_sd_statusl2 cavm_pcieepx_ras_sd_statusl2_t;

static inline uint64_t CAVM_PCIEEPX_RAS_SD_STATUSL2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_RAS_SD_STATUSL2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x308 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x308 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x308 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x308 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_RAS_SD_STATUSL2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_RAS_SD_STATUSL2(a) cavm_pcieepx_ras_sd_statusl2_t
#define bustype_CAVM_PCIEEPX_RAS_SD_STATUSL2(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_RAS_SD_STATUSL2(a) "PCIEEPX_RAS_SD_STATUSL2"
#define busnum_CAVM_PCIEEPX_RAS_SD_STATUSL2(a) (a)
#define arguments_CAVM_PCIEEPX_RAS_SD_STATUSL2(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ras_sd_statusl3
 *
 * PCIe EP Vendor RAS DES Silicon Debug Status L3 Register
 */
union cavm_pcieepx_ras_sd_statusl3
{
    uint32_t u;
    struct cavm_pcieepx_ras_sd_statusl3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t mftlp_status          : 1;  /**< [  7:  7](R/W1C) Malformed TLP status.
                                                                 Indicates malformed TLP has occurred. */
        uint32_t mftlp_ptr             : 7;  /**< [  6:  0](RO) First malformed TLP error pointer.
                                                                 Indicates the element of the received first malformed TLP.
                                                                 This pointer is validated by [MFTLP_STATUS].
                                                                 0x01 = AtomicOp address alignment.
                                                                 0x02 = AtomicOp operand.
                                                                 0x03 = AtomicOp byte enable.
                                                                 0x04 = TLP length miss match.
                                                                 0x05 = Max payload size.
                                                                 0x06 = Message TLP without TC0.
                                                                 0x07 = Invalid TC.
                                                                 0x08 = Unexpected route bit in message TLP.
                                                                 0x09 = Unexpected CRS status in completion TLP.
                                                                 0x0A = Byte enable.
                                                                 0x0B = Memory address 4KB boundary.
                                                                 0x0C = TLP prefix rules.
                                                                 0x0D = Translation request rules.
                                                                 0x0E = Invalid TLP type.
                                                                 0x0F = Completion rules.
                                                                 0x10-0x7E = Reserved.
                                                                 0x7F = Application. */
#else /* Word 0 - Little Endian */
        uint32_t mftlp_ptr             : 7;  /**< [  6:  0](RO) First malformed TLP error pointer.
                                                                 Indicates the element of the received first malformed TLP.
                                                                 This pointer is validated by [MFTLP_STATUS].
                                                                 0x01 = AtomicOp address alignment.
                                                                 0x02 = AtomicOp operand.
                                                                 0x03 = AtomicOp byte enable.
                                                                 0x04 = TLP length miss match.
                                                                 0x05 = Max payload size.
                                                                 0x06 = Message TLP without TC0.
                                                                 0x07 = Invalid TC.
                                                                 0x08 = Unexpected route bit in message TLP.
                                                                 0x09 = Unexpected CRS status in completion TLP.
                                                                 0x0A = Byte enable.
                                                                 0x0B = Memory address 4KB boundary.
                                                                 0x0C = TLP prefix rules.
                                                                 0x0D = Translation request rules.
                                                                 0x0E = Invalid TLP type.
                                                                 0x0F = Completion rules.
                                                                 0x10-0x7E = Reserved.
                                                                 0x7F = Application. */
        uint32_t mftlp_status          : 1;  /**< [  7:  7](R/W1C) Malformed TLP status.
                                                                 Indicates malformed TLP has occurred. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ras_sd_statusl3_s cn; */
};
typedef union cavm_pcieepx_ras_sd_statusl3 cavm_pcieepx_ras_sd_statusl3_t;

static inline uint64_t CAVM_PCIEEPX_RAS_SD_STATUSL3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_RAS_SD_STATUSL3(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x310 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x310 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x310 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x310 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_RAS_SD_STATUSL3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_RAS_SD_STATUSL3(a) cavm_pcieepx_ras_sd_statusl3_t
#define bustype_CAVM_PCIEEPX_RAS_SD_STATUSL3(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_RAS_SD_STATUSL3(a) "PCIEEPX_RAS_SD_STATUSL3"
#define busnum_CAVM_PCIEEPX_RAS_SD_STATUSL3(a) (a)
#define arguments_CAVM_PCIEEPX_RAS_SD_STATUSL3(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ras_sd_statusl3fc
 *
 * PCIe EP Vendor RAS DES Silicon Debug Status L2 Register
 */
union cavm_pcieepx_ras_sd_statusl3fc
{
    uint32_t u;
    struct cavm_pcieepx_ras_sd_statusl3fc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t credit_data1          : 12; /**< [ 31: 20](RO/H) Credit data 1.
                                                                 Current FC credit data selected by the [CREDIT_SEL_VC],
                                                                 [CREDIT_SEL_CREDIT_TYPE], [CREDIT_SEL_TLP_TYPE],
                                                                 and [CREDIT_SEL_HD] viewport-select fields.
                                                                 RX = Credit allocated value.
                                                                 TX = Credit limit value. This value is valid when DLCMSM=0x3(DL_ACTIVE). */
        uint32_t credit_data0          : 12; /**< [ 19:  8](RO/H) Credit data 0.
                                                                 Current FC credit data selected by the [CREDIT_SEL_VC],
                                                                 [CREDIT_SEL_CREDIT_TYPE], [CREDIT_SEL_TLP_TYPE],
                                                                 and [CREDIT_SEL_HD] viewport-select fields.
                                                                 RX = Credit received value.
                                                                 TX = Credit consumed value. */
        uint32_t reserved_7            : 1;
        uint32_t credit_sel_hd         : 1;  /**< [  6:  6](R/W) Credit select (HeaderData).
                                                                 This field in conjunction with the [CREDIT_SEL_VC],
                                                                 [CREDIT_SEL_CREDIT_TYPE], and
                                                                 [CREDIT_SEL_TLP_TYPE] viewport-select fields determines
                                                                 that data that is returned by the [CREDIT_DATA0] and
                                                                 [CREDIT_DATA1] data fields.
                                                                 0x0 = Header credit.
                                                                 0x1 = Data credit. */
        uint32_t credit_sel_tlp_type   : 2;  /**< [  5:  4](R/W) Credit select (TLP Type).
                                                                 This field in conjunction with the [CREDIT_SEL_VC],
                                                                 [CREDIT_SEL_CREDIT_TYPE], and [CREDIT_SEL_HD]
                                                                 viewport-select fields determines that data that is returned
                                                                 by the [CREDIT_DATA0] and [CREDIT_DATA1] data fields.
                                                                 0x0 = Posted.
                                                                 0x1 = Non-posted.
                                                                 0x2 = Completion.
                                                                 0x3 = Reserved. */
        uint32_t credit_sel_credit_type : 1; /**< [  3:  3](R/W) Credit select (credit type).
                                                                 This field in conjunction with the [CREDIT_SEL_VC],
                                                                 [CREDIT_SEL_TLP_TYPE], and [CREDIT_SEL_HD] viewport-select
                                                                 fields determines that data that is returned by the
                                                                 [CREDIT_DATA0] and [CREDIT_DATA1] data fields.
                                                                 0x0 = RX.
                                                                 0x1 = TX. */
        uint32_t credit_sel_vc         : 3;  /**< [  2:  0](R/W) Credit select (VC).
                                                                 This field in conjunction with the
                                                                 [CREDIT_SEL_CREDIT_TYPE], [CREDIT_SEL_TLP_TYPE],
                                                                 and [CREDIT_SEL_HD] viewport-select fields determines that
                                                                 data that is returned by the [CREDIT_DATA0] and
                                                                 [CREDIT_DATA1] data fields.
                                                                 0x0 = VC0.
                                                                 0x1 = VC1.
                                                                 0x2 = VC2.
                                                                 _ ...
                                                                 0x7 = VC7. */
#else /* Word 0 - Little Endian */
        uint32_t credit_sel_vc         : 3;  /**< [  2:  0](R/W) Credit select (VC).
                                                                 This field in conjunction with the
                                                                 [CREDIT_SEL_CREDIT_TYPE], [CREDIT_SEL_TLP_TYPE],
                                                                 and [CREDIT_SEL_HD] viewport-select fields determines that
                                                                 data that is returned by the [CREDIT_DATA0] and
                                                                 [CREDIT_DATA1] data fields.
                                                                 0x0 = VC0.
                                                                 0x1 = VC1.
                                                                 0x2 = VC2.
                                                                 _ ...
                                                                 0x7 = VC7. */
        uint32_t credit_sel_credit_type : 1; /**< [  3:  3](R/W) Credit select (credit type).
                                                                 This field in conjunction with the [CREDIT_SEL_VC],
                                                                 [CREDIT_SEL_TLP_TYPE], and [CREDIT_SEL_HD] viewport-select
                                                                 fields determines that data that is returned by the
                                                                 [CREDIT_DATA0] and [CREDIT_DATA1] data fields.
                                                                 0x0 = RX.
                                                                 0x1 = TX. */
        uint32_t credit_sel_tlp_type   : 2;  /**< [  5:  4](R/W) Credit select (TLP Type).
                                                                 This field in conjunction with the [CREDIT_SEL_VC],
                                                                 [CREDIT_SEL_CREDIT_TYPE], and [CREDIT_SEL_HD]
                                                                 viewport-select fields determines that data that is returned
                                                                 by the [CREDIT_DATA0] and [CREDIT_DATA1] data fields.
                                                                 0x0 = Posted.
                                                                 0x1 = Non-posted.
                                                                 0x2 = Completion.
                                                                 0x3 = Reserved. */
        uint32_t credit_sel_hd         : 1;  /**< [  6:  6](R/W) Credit select (HeaderData).
                                                                 This field in conjunction with the [CREDIT_SEL_VC],
                                                                 [CREDIT_SEL_CREDIT_TYPE], and
                                                                 [CREDIT_SEL_TLP_TYPE] viewport-select fields determines
                                                                 that data that is returned by the [CREDIT_DATA0] and
                                                                 [CREDIT_DATA1] data fields.
                                                                 0x0 = Header credit.
                                                                 0x1 = Data credit. */
        uint32_t reserved_7            : 1;
        uint32_t credit_data0          : 12; /**< [ 19:  8](RO/H) Credit data 0.
                                                                 Current FC credit data selected by the [CREDIT_SEL_VC],
                                                                 [CREDIT_SEL_CREDIT_TYPE], [CREDIT_SEL_TLP_TYPE],
                                                                 and [CREDIT_SEL_HD] viewport-select fields.
                                                                 RX = Credit received value.
                                                                 TX = Credit consumed value. */
        uint32_t credit_data1          : 12; /**< [ 31: 20](RO/H) Credit data 1.
                                                                 Current FC credit data selected by the [CREDIT_SEL_VC],
                                                                 [CREDIT_SEL_CREDIT_TYPE], [CREDIT_SEL_TLP_TYPE],
                                                                 and [CREDIT_SEL_HD] viewport-select fields.
                                                                 RX = Credit allocated value.
                                                                 TX = Credit limit value. This value is valid when DLCMSM=0x3(DL_ACTIVE). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ras_sd_statusl3fc_s cn; */
};
typedef union cavm_pcieepx_ras_sd_statusl3fc cavm_pcieepx_ras_sd_statusl3fc_t;

static inline uint64_t CAVM_PCIEEPX_RAS_SD_STATUSL3FC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_RAS_SD_STATUSL3FC(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x30c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x30c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x30c + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x30c + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_RAS_SD_STATUSL3FC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_RAS_SD_STATUSL3FC(a) cavm_pcieepx_ras_sd_statusl3fc_t
#define bustype_CAVM_PCIEEPX_RAS_SD_STATUSL3FC(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_RAS_SD_STATUSL3FC(a) "PCIEEPX_RAS_SD_STATUSL3FC"
#define busnum_CAVM_PCIEEPX_RAS_SD_STATUSL3FC(a) (a)
#define arguments_CAVM_PCIEEPX_RAS_SD_STATUSL3FC(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ras_sd_statuspm
 *
 * PCIe EP Vendor RAS DES Silicon Debug Status PM Register
 */
union cavm_pcieepx_ras_sd_statuspm
{
    uint32_t u;
    struct cavm_pcieepx_ras_sd_statuspm_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_24_31        : 8;
        uint32_t latched_nfts          : 8;  /**< [ 23: 16](RO/H) Latched N_FTS.
                                                                 Indicates the value of N_FTS in the received TS ordered
                                                                 sets from the link partner. */
        uint32_t l1sub_state           : 3;  /**< [ 15: 13](RO/H) Indicates the internal L1Sub state machine state. */
        uint32_t pme_rsnd_flag         : 1;  /**< [ 12: 12](RO) PME resend flag.
                                                                 When the DUT sends a PM_PME message TLP, the DUT
                                                                 sets PME_Status bit. If host software does not clear
                                                                 PME_Status bit for 100ms (+50%/-5%), the DUT resends the
                                                                 PM_PME message. This bit indicates that a PM_PME was
                                                                 resent. */
        uint32_t int_pm_sstate         : 4;  /**< [ 11:  8](RO/H) Internal PM state (slave).
                                                                 Indicates internal state machine of power management
                                                                 slave controller.
                                                                 0x00 = S_IDLE.
                                                                 0x01 = S_RESPOND_NAK.
                                                                 0x02 = S_BLOCK_TLP.
                                                                 0x03 = S_WAIT_LAST_TLP_ACK.
                                                                 0x04 = S_WAIT_EIDLE.
                                                                 0x08 = S_LINK_ENTR_L1.
                                                                 0x09 = S_L1.
                                                                 0x0A = S_L1_EXIT.
                                                                 0x0B = S_L23RDY.
                                                                 0x0C = S_LINK_ENTR_L23.
                                                                 0x0D = S_L23RDY_WAIT4ALIVE.
                                                                 0x0F = S_L23RDY_WAIT4IDLE.
                                                                 0x10 = S_WAIT_LAST_PMDLLP.
                                                                 0x10-0x1F = Reserved. */
        uint32_t reserved_5_7          : 3;
        uint32_t int_pm_mstate         : 5;  /**< [  4:  0](RO/H) Internal PM state (master).
                                                                 Indicates internal state machine of power management
                                                                 master controller.
                                                                 0x00 = IDLE.
                                                                 0x01 = L0.
                                                                 0x02 = L0S.
                                                                 0x03 = ENTER_L0S.
                                                                 0x04 = L0S_EXIT.
                                                                 0x08 = L1.
                                                                 0x09 = L1_BLOCK_TLP.
                                                                 0x0A = L1_WAIT_LAST_TLP_ACK.
                                                                 0x0B = L1_WAIT_PMDLLP_ACK.
                                                                 0x0C = L1_LINK_ENTR_L1.
                                                                 0x0D = L1_EXIT.
                                                                 0x0F = PREP_4L1.
                                                                 0x10 = L23_BLOCK_TLP.
                                                                 0x11 = L23_WAIT_LAST_TLP_ACK.
                                                                 0x12 = L23_WAIT_PMDLLP_ACK.
                                                                 0x13 = L23_ENTR_L23.
                                                                 0x14 = L23RDY.
                                                                 0x15 = PREP_4L23.
                                                                 0x16 = L23RDY_WAIT4ALIVE.
                                                                 0x17 = L0S_BLOCK_TLP.
                                                                 0x18 = WAIT_LAST_PMDLLP.
                                                                 0x19 = WAIT_DSTATE_UPDATE.
                                                                 0x20-0x1F = Reserved. */
#else /* Word 0 - Little Endian */
        uint32_t int_pm_mstate         : 5;  /**< [  4:  0](RO/H) Internal PM state (master).
                                                                 Indicates internal state machine of power management
                                                                 master controller.
                                                                 0x00 = IDLE.
                                                                 0x01 = L0.
                                                                 0x02 = L0S.
                                                                 0x03 = ENTER_L0S.
                                                                 0x04 = L0S_EXIT.
                                                                 0x08 = L1.
                                                                 0x09 = L1_BLOCK_TLP.
                                                                 0x0A = L1_WAIT_LAST_TLP_ACK.
                                                                 0x0B = L1_WAIT_PMDLLP_ACK.
                                                                 0x0C = L1_LINK_ENTR_L1.
                                                                 0x0D = L1_EXIT.
                                                                 0x0F = PREP_4L1.
                                                                 0x10 = L23_BLOCK_TLP.
                                                                 0x11 = L23_WAIT_LAST_TLP_ACK.
                                                                 0x12 = L23_WAIT_PMDLLP_ACK.
                                                                 0x13 = L23_ENTR_L23.
                                                                 0x14 = L23RDY.
                                                                 0x15 = PREP_4L23.
                                                                 0x16 = L23RDY_WAIT4ALIVE.
                                                                 0x17 = L0S_BLOCK_TLP.
                                                                 0x18 = WAIT_LAST_PMDLLP.
                                                                 0x19 = WAIT_DSTATE_UPDATE.
                                                                 0x20-0x1F = Reserved. */
        uint32_t reserved_5_7          : 3;
        uint32_t int_pm_sstate         : 4;  /**< [ 11:  8](RO/H) Internal PM state (slave).
                                                                 Indicates internal state machine of power management
                                                                 slave controller.
                                                                 0x00 = S_IDLE.
                                                                 0x01 = S_RESPOND_NAK.
                                                                 0x02 = S_BLOCK_TLP.
                                                                 0x03 = S_WAIT_LAST_TLP_ACK.
                                                                 0x04 = S_WAIT_EIDLE.
                                                                 0x08 = S_LINK_ENTR_L1.
                                                                 0x09 = S_L1.
                                                                 0x0A = S_L1_EXIT.
                                                                 0x0B = S_L23RDY.
                                                                 0x0C = S_LINK_ENTR_L23.
                                                                 0x0D = S_L23RDY_WAIT4ALIVE.
                                                                 0x0F = S_L23RDY_WAIT4IDLE.
                                                                 0x10 = S_WAIT_LAST_PMDLLP.
                                                                 0x10-0x1F = Reserved. */
        uint32_t pme_rsnd_flag         : 1;  /**< [ 12: 12](RO) PME resend flag.
                                                                 When the DUT sends a PM_PME message TLP, the DUT
                                                                 sets PME_Status bit. If host software does not clear
                                                                 PME_Status bit for 100ms (+50%/-5%), the DUT resends the
                                                                 PM_PME message. This bit indicates that a PM_PME was
                                                                 resent. */
        uint32_t l1sub_state           : 3;  /**< [ 15: 13](RO/H) Indicates the internal L1Sub state machine state. */
        uint32_t latched_nfts          : 8;  /**< [ 23: 16](RO/H) Latched N_FTS.
                                                                 Indicates the value of N_FTS in the received TS ordered
                                                                 sets from the link partner. */
        uint32_t reserved_24_31        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ras_sd_statuspm_s cn; */
};
typedef union cavm_pcieepx_ras_sd_statuspm cavm_pcieepx_ras_sd_statuspm_t;

static inline uint64_t CAVM_PCIEEPX_RAS_SD_STATUSPM(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_RAS_SD_STATUSPM(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x304 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x304 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x304 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x304 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_RAS_SD_STATUSPM", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_RAS_SD_STATUSPM(a) cavm_pcieepx_ras_sd_statuspm_t
#define bustype_CAVM_PCIEEPX_RAS_SD_STATUSPM(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_RAS_SD_STATUSPM(a) "PCIEEPX_RAS_SD_STATUSPM"
#define busnum_CAVM_PCIEEPX_RAS_SD_STATUSPM(a) (a)
#define arguments_CAVM_PCIEEPX_RAS_SD_STATUSPM(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ras_tba_ctl
 *
 * PCIe EP Vendor RAS DES Time Based Analysis Control Register
 */
union cavm_pcieepx_ras_tba_ctl
{
    uint32_t u;
    struct cavm_pcieepx_ras_tba_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t tbase_rpt_sel         : 8;  /**< [ 31: 24](R/W) Time-based report select. Selects what type of data is measured for the selected
                                                                 duration [TBASE_DUR_SEL]. Data is returned in PCIEEP_RAS_TBA_DATA[TBASE_DATA].

                                                                 Each type of data is measured using one of three types of units.

                                                                 Core clock cycles.
                                                                 0x0 = Duration of 1 cycle.
                                                                 0x1 = TxL0s.
                                                                 0x2 = RxL0s.
                                                                 0x3 = L0.
                                                                 0x4 = L1.
                                                                 0x7 = Configuration/recovery.

                                                                 Aux_clk cycles.
                                                                 0x5 = L1.1.
                                                                 0x6 = L1.2.

                                                                 Data bytes.  Actual amount is 16x value.
                                                                 0x20 = TX TLP Bytes.
                                                                 0x21 = RX TLP Bytes. */
        uint32_t reserved_16_23        : 8;
        uint32_t tbase_dur_sel         : 8;  /**< [ 15:  8](R/W) Time-based duration select.  Selects the duration of time-based
                                                                 analysis.

                                                                 0x0 = Manual control.  Analysis controlled by [TIMER_START].
                                                                 0x1 = 1 ms.
                                                                 0x2 = 10 ms.
                                                                 0x3 = 100 ms.
                                                                 0x4 = 1 s.
                                                                 0x5 = 2 s.
                                                                 0x6 = 4 s.
                                                                 0x7 - 0xF = Reserved. */
        uint32_t reserved_1_7          : 7;
        uint32_t timer_start           : 1;  /**< [  0:  0](R/W) Timer start.

                                                                 0x0 = Start/restart.
                                                                 0x1 = Stop.

                                                                 This bit will be cleared automatically when the measurement is finished. */
#else /* Word 0 - Little Endian */
        uint32_t timer_start           : 1;  /**< [  0:  0](R/W) Timer start.

                                                                 0x0 = Start/restart.
                                                                 0x1 = Stop.

                                                                 This bit will be cleared automatically when the measurement is finished. */
        uint32_t reserved_1_7          : 7;
        uint32_t tbase_dur_sel         : 8;  /**< [ 15:  8](R/W) Time-based duration select.  Selects the duration of time-based
                                                                 analysis.

                                                                 0x0 = Manual control.  Analysis controlled by [TIMER_START].
                                                                 0x1 = 1 ms.
                                                                 0x2 = 10 ms.
                                                                 0x3 = 100 ms.
                                                                 0x4 = 1 s.
                                                                 0x5 = 2 s.
                                                                 0x6 = 4 s.
                                                                 0x7 - 0xF = Reserved. */
        uint32_t reserved_16_23        : 8;
        uint32_t tbase_rpt_sel         : 8;  /**< [ 31: 24](R/W) Time-based report select. Selects what type of data is measured for the selected
                                                                 duration [TBASE_DUR_SEL]. Data is returned in PCIEEP_RAS_TBA_DATA[TBASE_DATA].

                                                                 Each type of data is measured using one of three types of units.

                                                                 Core clock cycles.
                                                                 0x0 = Duration of 1 cycle.
                                                                 0x1 = TxL0s.
                                                                 0x2 = RxL0s.
                                                                 0x3 = L0.
                                                                 0x4 = L1.
                                                                 0x7 = Configuration/recovery.

                                                                 Aux_clk cycles.
                                                                 0x5 = L1.1.
                                                                 0x6 = L1.2.

                                                                 Data bytes.  Actual amount is 16x value.
                                                                 0x20 = TX TLP Bytes.
                                                                 0x21 = RX TLP Bytes. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ras_tba_ctl_s cn; */
};
typedef union cavm_pcieepx_ras_tba_ctl cavm_pcieepx_ras_tba_ctl_t;

static inline uint64_t CAVM_PCIEEPX_RAS_TBA_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_RAS_TBA_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x25c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x25c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x25c + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x25c + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_RAS_TBA_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_RAS_TBA_CTL(a) cavm_pcieepx_ras_tba_ctl_t
#define bustype_CAVM_PCIEEPX_RAS_TBA_CTL(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_RAS_TBA_CTL(a) "PCIEEPX_RAS_TBA_CTL"
#define busnum_CAVM_PCIEEPX_RAS_TBA_CTL(a) (a)
#define arguments_CAVM_PCIEEPX_RAS_TBA_CTL(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ras_tba_data
 *
 * PCIe EP Vendor RAS DES Time Based Analysis Data Register
 */
union cavm_pcieepx_ras_tba_data
{
    uint32_t u;
    struct cavm_pcieepx_ras_tba_data_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t tbase_data            : 32; /**< [ 31:  0](RO/H) Time-based analysis data.  This register returns data selected in the
                                                                 PCIEEP_RAS_TBA_CTL[TBASE_RPT_SEL] field.  The results are cleared when
                                                                 the next measurement starts. */
#else /* Word 0 - Little Endian */
        uint32_t tbase_data            : 32; /**< [ 31:  0](RO/H) Time-based analysis data.  This register returns data selected in the
                                                                 PCIEEP_RAS_TBA_CTL[TBASE_RPT_SEL] field.  The results are cleared when
                                                                 the next measurement starts. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ras_tba_data_s cn; */
};
typedef union cavm_pcieepx_ras_tba_data cavm_pcieepx_ras_tba_data_t;

static inline uint64_t CAVM_PCIEEPX_RAS_TBA_DATA(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_RAS_TBA_DATA(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x260 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x260 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x260 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x260 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_RAS_TBA_DATA", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_RAS_TBA_DATA(a) cavm_pcieepx_ras_tba_data_t
#define bustype_CAVM_PCIEEPX_RAS_TBA_DATA(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_RAS_TBA_DATA(a) "PCIEEPX_RAS_TBA_DATA"
#define busnum_CAVM_PCIEEPX_RAS_TBA_DATA(a) (a)
#define arguments_CAVM_PCIEEPX_RAS_TBA_DATA(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_rasdp_cap_hdr
 *
 * PCIe EP Vendor RAS Data Path Protection Header Register
 */
union cavm_pcieepx_rasdp_cap_hdr
{
    uint32_t u;
    struct cavm_pcieepx_rasdp_cap_hdr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t nco                   : 12; /**< [ 31: 20](RO/WRSL/H) Next capability offset.
                                                                 Writable through PEM()_CFG_TBL().

                                                                 Reset values:
                                                                 _ PF0:          0x384.
                                                                 _ PF1:          0x39C

                                                                 For PF0, this points to the Data Link Feature Extended Capabilities.
                                                                 For all other PFs, this field points to PTM Requester Capabilities by default. */
        uint32_t cv                    : 4;  /**< [ 19: 16](RO/WRSL) Capability version.
                                                                 Writable through PEM()_CFG_TBL(). */
        uint32_t pcieec                : 16; /**< [ 15:  0](RO/WRSL) PCI Express extended capability.
                                                                 Writable through PEM()_CFG_TBL(). */
#else /* Word 0 - Little Endian */
        uint32_t pcieec                : 16; /**< [ 15:  0](RO/WRSL) PCI Express extended capability.
                                                                 Writable through PEM()_CFG_TBL(). */
        uint32_t cv                    : 4;  /**< [ 19: 16](RO/WRSL) Capability version.
                                                                 Writable through PEM()_CFG_TBL(). */
        uint32_t nco                   : 12; /**< [ 31: 20](RO/WRSL/H) Next capability offset.
                                                                 Writable through PEM()_CFG_TBL().

                                                                 Reset values:
                                                                 _ PF0:          0x384.
                                                                 _ PF1:          0x39C

                                                                 For PF0, this points to the Data Link Feature Extended Capabilities.
                                                                 For all other PFs, this field points to PTM Requester Capabilities by default. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_rasdp_cap_hdr_s cn; */
};
typedef union cavm_pcieepx_rasdp_cap_hdr cavm_pcieepx_rasdp_cap_hdr_t;

static inline uint64_t CAVM_PCIEEPX_RASDP_CAP_HDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_RASDP_CAP_HDR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x34c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x34c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x34c + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x34c + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_RASDP_CAP_HDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_RASDP_CAP_HDR(a) cavm_pcieepx_rasdp_cap_hdr_t
#define bustype_CAVM_PCIEEPX_RASDP_CAP_HDR(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_RASDP_CAP_HDR(a) "PCIEEPX_RASDP_CAP_HDR"
#define busnum_CAVM_PCIEEPX_RASDP_CAP_HDR(a) (a)
#define arguments_CAVM_PCIEEPX_RASDP_CAP_HDR(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_rasdp_ce_ctl
 *
 * PCIe EP RAS Data Path Correctable Error Control Register
 */
union cavm_pcieepx_rasdp_ce_ctl
{
    uint32_t u;
    struct cavm_pcieepx_rasdp_ce_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t corr_cnt_sel          : 8;  /**< [ 31: 24](R/W) Counter selection.  This field selects the counter ID (within
                                                                 the region defined by [CORR_CNT_SEL_REG]) whose contents
                                                                 can be read from PCIEEP_RAS_TBA_CTL.  You can
                                                                 cycle this field value from 0 to 255 to access all counters. */
        uint32_t corr_cnt_sel_reg      : 4;  /**< [ 23: 20](R/W) Selected correctable counter region.
                                                                 0x0 = ADM RX path.
                                                                 0x1 = Layer 3 RX path.
                                                                 0x2 = Layer 2 RX path.
                                                                 0x3 = DMA read engine inbound (not supported).
                                                                 0x4 = AXI bridge inbound request path (not supported).
                                                                 0x5 = AXI bridge inbound completion composer (not supported).
                                                                 0x6 = ADM TX path.
                                                                 0x7 = Layer 3 TX path.
                                                                 0x8 = Layer 2 TX path.
                                                                 0x9 = DMA outbound path (not supported).
                                                                 0xA = AXI bridge outbound request path (not supported).
                                                                 0xB = AXI bridge outbound master completion buffer path (not supported).
                                                                 0xC - 0xF = Reserved. */
        uint32_t reserved_5_19         : 15;
        uint32_t corr_en_cntrs         : 1;  /**< [  4:  4](R/W) Error correction disable for ADM RX path. */
        uint32_t reserved_1_3          : 3;
        uint32_t ep_dis_l3_rx          : 1;  /**< [  0:  0](R/W1C) Clears all correctable error counters. */
#else /* Word 0 - Little Endian */
        uint32_t ep_dis_l3_rx          : 1;  /**< [  0:  0](R/W1C) Clears all correctable error counters. */
        uint32_t reserved_1_3          : 3;
        uint32_t corr_en_cntrs         : 1;  /**< [  4:  4](R/W) Error correction disable for ADM RX path. */
        uint32_t reserved_5_19         : 15;
        uint32_t corr_cnt_sel_reg      : 4;  /**< [ 23: 20](R/W) Selected correctable counter region.
                                                                 0x0 = ADM RX path.
                                                                 0x1 = Layer 3 RX path.
                                                                 0x2 = Layer 2 RX path.
                                                                 0x3 = DMA read engine inbound (not supported).
                                                                 0x4 = AXI bridge inbound request path (not supported).
                                                                 0x5 = AXI bridge inbound completion composer (not supported).
                                                                 0x6 = ADM TX path.
                                                                 0x7 = Layer 3 TX path.
                                                                 0x8 = Layer 2 TX path.
                                                                 0x9 = DMA outbound path (not supported).
                                                                 0xA = AXI bridge outbound request path (not supported).
                                                                 0xB = AXI bridge outbound master completion buffer path (not supported).
                                                                 0xC - 0xF = Reserved. */
        uint32_t corr_cnt_sel          : 8;  /**< [ 31: 24](R/W) Counter selection.  This field selects the counter ID (within
                                                                 the region defined by [CORR_CNT_SEL_REG]) whose contents
                                                                 can be read from PCIEEP_RAS_TBA_CTL.  You can
                                                                 cycle this field value from 0 to 255 to access all counters. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_rasdp_ce_ctl_s cn; */
};
typedef union cavm_pcieepx_rasdp_ce_ctl cavm_pcieepx_rasdp_ce_ctl_t;

static inline uint64_t CAVM_PCIEEPX_RASDP_CE_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_RASDP_CE_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x358 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x358 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x358 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x358 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_RASDP_CE_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_RASDP_CE_CTL(a) cavm_pcieepx_rasdp_ce_ctl_t
#define bustype_CAVM_PCIEEPX_RASDP_CE_CTL(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_RASDP_CE_CTL(a) "PCIEEPX_RASDP_CE_CTL"
#define busnum_CAVM_PCIEEPX_RASDP_CE_CTL(a) (a)
#define arguments_CAVM_PCIEEPX_RASDP_CE_CTL(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_rasdp_ce_ictl
 *
 * PCIe EP RAS Data Correctable Error Injection Control Register
 */
union cavm_pcieepx_rasdp_ce_ictl
{
    uint32_t u;
    struct cavm_pcieepx_rasdp_ce_ictl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_24_31        : 8;
        uint32_t err_inj_loc           : 8;  /**< [ 23: 16](R/W) Error injection location.  Selects where error injection takes place.  You
                                                                 can cycle this field value from 0 to 255 to access all locations. */
        uint32_t err_inj_cnt           : 8;  /**< [ 15:  8](R/W) Error injection count.
                                                                 0x0 = errors are injected in every TLP until [ERR_INJ_EN] is cleared.
                                                                 0x1 - 0xFF = number of errors injected. */
        uint32_t reserved_6_7          : 2;
        uint32_t err_inj_type          : 2;  /**< [  5:  4](R/W) Error injection type.
                                                                 0x0 = None.
                                                                 0x1 = 1-bit.
                                                                 0x2 = 2-bit.
                                                                 0x3 = Reserved. */
        uint32_t reserved_1_3          : 3;
        uint32_t err_inj_en            : 1;  /**< [  0:  0](R/W) Error injection global enable.  When set, enables the error
                                                                 insertion logic. */
#else /* Word 0 - Little Endian */
        uint32_t err_inj_en            : 1;  /**< [  0:  0](R/W) Error injection global enable.  When set, enables the error
                                                                 insertion logic. */
        uint32_t reserved_1_3          : 3;
        uint32_t err_inj_type          : 2;  /**< [  5:  4](R/W) Error injection type.
                                                                 0x0 = None.
                                                                 0x1 = 1-bit.
                                                                 0x2 = 2-bit.
                                                                 0x3 = Reserved. */
        uint32_t reserved_6_7          : 2;
        uint32_t err_inj_cnt           : 8;  /**< [ 15:  8](R/W) Error injection count.
                                                                 0x0 = errors are injected in every TLP until [ERR_INJ_EN] is cleared.
                                                                 0x1 - 0xFF = number of errors injected. */
        uint32_t err_inj_loc           : 8;  /**< [ 23: 16](R/W) Error injection location.  Selects where error injection takes place.  You
                                                                 can cycle this field value from 0 to 255 to access all locations. */
        uint32_t reserved_24_31        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_rasdp_ce_ictl_s cn; */
};
typedef union cavm_pcieepx_rasdp_ce_ictl cavm_pcieepx_rasdp_ce_ictl_t;

static inline uint64_t CAVM_PCIEEPX_RASDP_CE_ICTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_RASDP_CE_ICTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x368 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x368 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x368 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x368 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_RASDP_CE_ICTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_RASDP_CE_ICTL(a) cavm_pcieepx_rasdp_ce_ictl_t
#define bustype_CAVM_PCIEEPX_RASDP_CE_ICTL(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_RASDP_CE_ICTL(a) "PCIEEPX_RASDP_CE_ICTL"
#define busnum_CAVM_PCIEEPX_RASDP_CE_ICTL(a) (a)
#define arguments_CAVM_PCIEEPX_RASDP_CE_ICTL(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_rasdp_ce_loc
 *
 * PCIe EP RAS Data Correctable Error Location Register
 */
union cavm_pcieepx_rasdp_ce_loc
{
    uint32_t u;
    struct cavm_pcieepx_rasdp_ce_loc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t loc_last_corr_err     : 8;  /**< [ 31: 24](RO) Location/ID of the last corrected error within the region defined by
                                                                 [REG_LAST_CORR_ERR]. */
        uint32_t reg_last_corr_err     : 4;  /**< [ 23: 20](RO) Region of last corrected error
                                                                 0x0 = ADM RX path.
                                                                 0x1 = Layer 3 RX path.
                                                                 0x2 = Layer 2 RX path.
                                                                 0x3 = DMA inbound path (not supported).
                                                                 0x4 = AXI bridge inbound request path (not supported).
                                                                 0x5 = AXI bridge inbound completion composer path (not supported).
                                                                 0x6 = ADM TX path.
                                                                 0x7 = Layer 3 TX path.
                                                                 0x8 = Layer 2 TX path.
                                                                 0x9 = DMA outbound path (not supported).
                                                                 0xA = AXI bridge outbound request path (not supported).
                                                                 0xB = AXI bridge outbound master completion path (not supported).
                                                                 0xC = CXS Tx/Rx path (not supported).
                                                                 0xD = DTIM Tx/Rx path (not supported).
                                                                 0xE - 0xF = Reserved. */
        uint32_t reserved_16_19        : 4;
        uint32_t loc_first_corr_err    : 8;  /**< [ 15:  8](RO) Location/ID of the first corrected error within the region defined by
                                                                 [REG_FIRST_CORR_ERR]. */
        uint32_t reg_first_corr_err    : 4;  /**< [  7:  4](RO) Region of first corrected error
                                                                 0x0 = ADM RX path.
                                                                 0x1 = Layer 3 RX path.
                                                                 0x2 = Layer 2 RX path.
                                                                 0x3 = DMA read engine (not supported).
                                                                 0x4 = AXI bridge inbound request path (not supported).
                                                                 0x5 = AXI bridge inbound completion composer (not supported).
                                                                 0x6 = ADM TX path.
                                                                 0x7 = Layer 3 TX path.
                                                                 0x8 = Layer 2 TX path.
                                                                 0x9 = DMA write engine (not supported).
                                                                 0xA = AXI bridge outbound request path (not supported).
                                                                 0xB = AXI bridge outbound master completion (not supported).
                                                                 0xC = CXS Tx/Rx path (not supported).
                                                                 0xD = DTIM Tx/Rx path (not supported).
                                                                 0xE - 0xF = Reserved. */
        uint32_t reserved_0_3          : 4;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_3          : 4;
        uint32_t reg_first_corr_err    : 4;  /**< [  7:  4](RO) Region of first corrected error
                                                                 0x0 = ADM RX path.
                                                                 0x1 = Layer 3 RX path.
                                                                 0x2 = Layer 2 RX path.
                                                                 0x3 = DMA read engine (not supported).
                                                                 0x4 = AXI bridge inbound request path (not supported).
                                                                 0x5 = AXI bridge inbound completion composer (not supported).
                                                                 0x6 = ADM TX path.
                                                                 0x7 = Layer 3 TX path.
                                                                 0x8 = Layer 2 TX path.
                                                                 0x9 = DMA write engine (not supported).
                                                                 0xA = AXI bridge outbound request path (not supported).
                                                                 0xB = AXI bridge outbound master completion (not supported).
                                                                 0xC = CXS Tx/Rx path (not supported).
                                                                 0xD = DTIM Tx/Rx path (not supported).
                                                                 0xE - 0xF = Reserved. */
        uint32_t loc_first_corr_err    : 8;  /**< [ 15:  8](RO) Location/ID of the first corrected error within the region defined by
                                                                 [REG_FIRST_CORR_ERR]. */
        uint32_t reserved_16_19        : 4;
        uint32_t reg_last_corr_err     : 4;  /**< [ 23: 20](RO) Region of last corrected error
                                                                 0x0 = ADM RX path.
                                                                 0x1 = Layer 3 RX path.
                                                                 0x2 = Layer 2 RX path.
                                                                 0x3 = DMA inbound path (not supported).
                                                                 0x4 = AXI bridge inbound request path (not supported).
                                                                 0x5 = AXI bridge inbound completion composer path (not supported).
                                                                 0x6 = ADM TX path.
                                                                 0x7 = Layer 3 TX path.
                                                                 0x8 = Layer 2 TX path.
                                                                 0x9 = DMA outbound path (not supported).
                                                                 0xA = AXI bridge outbound request path (not supported).
                                                                 0xB = AXI bridge outbound master completion path (not supported).
                                                                 0xC = CXS Tx/Rx path (not supported).
                                                                 0xD = DTIM Tx/Rx path (not supported).
                                                                 0xE - 0xF = Reserved. */
        uint32_t loc_last_corr_err     : 8;  /**< [ 31: 24](RO) Location/ID of the last corrected error within the region defined by
                                                                 [REG_LAST_CORR_ERR]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_rasdp_ce_loc_s cn; */
};
typedef union cavm_pcieepx_rasdp_ce_loc cavm_pcieepx_rasdp_ce_loc_t;

static inline uint64_t CAVM_PCIEEPX_RASDP_CE_LOC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_RASDP_CE_LOC(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x36c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x36c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x36c + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x36c + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_RASDP_CE_LOC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_RASDP_CE_LOC(a) cavm_pcieepx_rasdp_ce_loc_t
#define bustype_CAVM_PCIEEPX_RASDP_CE_LOC(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_RASDP_CE_LOC(a) "PCIEEPX_RASDP_CE_LOC"
#define busnum_CAVM_PCIEEPX_RASDP_CE_LOC(a) (a)
#define arguments_CAVM_PCIEEPX_RASDP_CE_LOC(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_rasdp_ce_rp
 *
 * PCIe EP RAS Data Path Correctable Error Report Register
 */
union cavm_pcieepx_rasdp_ce_rp
{
    uint32_t u;
    struct cavm_pcieepx_rasdp_ce_rp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t corr_cnt_sel          : 8;  /**< [ 31: 24](RO/H) Counter selection.  Returns the value set in PCIEEP_RASDP_CE_CTL[CORR_CNT_SEL]. */
        uint32_t corr_cnt_sel_reg      : 4;  /**< [ 23: 20](RO/H) Selected correctable counter region.
                                                                 0x0 = ADM RX path.
                                                                 0x1 = Layer 3 RX path.
                                                                 0x2 = Layer 2 RX path.
                                                                 0x3 = DMA inbound path (not supported).
                                                                 0x4 = AXI bridge inbound request path (not supported).
                                                                 0x5 = AXI bridge inbound completion composer path (not supported).
                                                                 0x6 = ADM TX path.
                                                                 0x7 = Layer 3 TX path.
                                                                 0x8 = Layer 2 TX path.
                                                                 0x9 = DMA outbound path (not supported).
                                                                 0xA = AXI bridge outbound request path (not supported).
                                                                 0xB = AXI bridge outbound master completion (not supported).
                                                                 0xC - 0xF = Reserved. */
        uint32_t reserved_8_19         : 12;
        uint32_t corr_count            : 8;  /**< [  7:  0](RO) Current corrected count for the selected counter. */
#else /* Word 0 - Little Endian */
        uint32_t corr_count            : 8;  /**< [  7:  0](RO) Current corrected count for the selected counter. */
        uint32_t reserved_8_19         : 12;
        uint32_t corr_cnt_sel_reg      : 4;  /**< [ 23: 20](RO/H) Selected correctable counter region.
                                                                 0x0 = ADM RX path.
                                                                 0x1 = Layer 3 RX path.
                                                                 0x2 = Layer 2 RX path.
                                                                 0x3 = DMA inbound path (not supported).
                                                                 0x4 = AXI bridge inbound request path (not supported).
                                                                 0x5 = AXI bridge inbound completion composer path (not supported).
                                                                 0x6 = ADM TX path.
                                                                 0x7 = Layer 3 TX path.
                                                                 0x8 = Layer 2 TX path.
                                                                 0x9 = DMA outbound path (not supported).
                                                                 0xA = AXI bridge outbound request path (not supported).
                                                                 0xB = AXI bridge outbound master completion (not supported).
                                                                 0xC - 0xF = Reserved. */
        uint32_t corr_cnt_sel          : 8;  /**< [ 31: 24](RO/H) Counter selection.  Returns the value set in PCIEEP_RASDP_CE_CTL[CORR_CNT_SEL]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_rasdp_ce_rp_s cn; */
};
typedef union cavm_pcieepx_rasdp_ce_rp cavm_pcieepx_rasdp_ce_rp_t;

static inline uint64_t CAVM_PCIEEPX_RASDP_CE_RP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_RASDP_CE_RP(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x35c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x35c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x35c + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x35c + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_RASDP_CE_RP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_RASDP_CE_RP(a) cavm_pcieepx_rasdp_ce_rp_t
#define bustype_CAVM_PCIEEPX_RASDP_CE_RP(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_RASDP_CE_RP(a) "PCIEEPX_RASDP_CE_RP"
#define busnum_CAVM_PCIEEPX_RASDP_CE_RP(a) (a)
#define arguments_CAVM_PCIEEPX_RASDP_CE_RP(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_rasdp_de_mc
 *
 * PCIe EP RAS Data Error Mode Clear Register
 */
union cavm_pcieepx_rasdp_de_mc
{
    uint32_t u;
    struct cavm_pcieepx_rasdp_de_mc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_1_31         : 31;
        uint32_t err_mode_clr          : 1;  /**< [  0:  0](R/W1C) Set this bit to take the core out of RASDP error mode.  The core will then report
                                                                 uncorrectable
                                                                 errors (through AER internal error reporting) and also stop nullifying/discarding TLPs. */
#else /* Word 0 - Little Endian */
        uint32_t err_mode_clr          : 1;  /**< [  0:  0](R/W1C) Set this bit to take the core out of RASDP error mode.  The core will then report
                                                                 uncorrectable
                                                                 errors (through AER internal error reporting) and also stop nullifying/discarding TLPs. */
        uint32_t reserved_1_31         : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_rasdp_de_mc_s cn; */
};
typedef union cavm_pcieepx_rasdp_de_mc cavm_pcieepx_rasdp_de_mc_t;

static inline uint64_t CAVM_PCIEEPX_RASDP_DE_MC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_RASDP_DE_MC(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x378 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x378 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x378 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x378 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_RASDP_DE_MC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_RASDP_DE_MC(a) cavm_pcieepx_rasdp_de_mc_t
#define bustype_CAVM_PCIEEPX_RASDP_DE_MC(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_RASDP_DE_MC(a) "PCIEEPX_RASDP_DE_MC"
#define busnum_CAVM_PCIEEPX_RASDP_DE_MC(a) (a)
#define arguments_CAVM_PCIEEPX_RASDP_DE_MC(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_rasdp_de_me
 *
 * PCIe EP RAS Data Error Mode Enable Register
 */
union cavm_pcieepx_rasdp_de_me
{
    uint32_t u;
    struct cavm_pcieepx_rasdp_de_me_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_2_31         : 30;
        uint32_t auto_lnk_dn_en        : 1;  /**< [  1:  1](R/W) Set this bit to enable the core to bring the link down when RASDP error mode is entered. */
        uint32_t err_mode_en           : 1;  /**< [  0:  0](R/W) Set this bit to enable the core to enter RASDP error mode when it detects an uncorrectable error. */
#else /* Word 0 - Little Endian */
        uint32_t err_mode_en           : 1;  /**< [  0:  0](R/W) Set this bit to enable the core to enter RASDP error mode when it detects an uncorrectable error. */
        uint32_t auto_lnk_dn_en        : 1;  /**< [  1:  1](R/W) Set this bit to enable the core to bring the link down when RASDP error mode is entered. */
        uint32_t reserved_2_31         : 30;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_rasdp_de_me_s cn; */
};
typedef union cavm_pcieepx_rasdp_de_me cavm_pcieepx_rasdp_de_me_t;

static inline uint64_t CAVM_PCIEEPX_RASDP_DE_ME(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_RASDP_DE_ME(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x374 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x374 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x374 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x374 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_RASDP_DE_ME", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_RASDP_DE_ME(a) cavm_pcieepx_rasdp_de_me_t
#define bustype_CAVM_PCIEEPX_RASDP_DE_ME(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_RASDP_DE_ME(a) "PCIEEPX_RASDP_DE_ME"
#define busnum_CAVM_PCIEEPX_RASDP_DE_ME(a) (a)
#define arguments_CAVM_PCIEEPX_RASDP_DE_ME(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_rasdp_ep_ctl
 *
 * PCIe EP RAS Data Path Error Protection Control Register
 */
union cavm_pcieepx_rasdp_ep_ctl
{
    uint32_t u;
    struct cavm_pcieepx_rasdp_ep_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_24_31        : 8;
        uint32_t ep_dis_cxs_rx         : 1;  /**< [ 23: 23](R/W) Error correction disable for CXS (PCIe) TX path. */
        uint32_t ep_dis_adm_rx         : 1;  /**< [ 22: 22](R/W) Error correction disable for ADM RX path. */
        uint32_t ep_dis_l3_rx          : 1;  /**< [ 21: 21](R/W) Error correction disable for layer 3 RX path. */
        uint32_t ep_dis_l2_rx          : 1;  /**< [ 20: 20](R/W) Error correction disable for layer 2 RX path. */
        uint32_t ep_dis_dma_rd         : 1;  /**< [ 19: 19](R/W) Error correction disable for DMA read (not supported). */
        uint32_t ep_dis_axib_inbr      : 1;  /**< [ 18: 18](R/W) Error correction disable for AXI bridge inbound request path (not supported). */
        uint32_t ep_dis_axib_inbc      : 1;  /**< [ 17: 17](R/W) Error correction disable for AXI bridge inbound completion composer (not supported). */
        uint32_t ep_dis_rx             : 1;  /**< [ 16: 16](R/W) Global error correction disable for all RX layers. */
        uint32_t reserved_9_15         : 7;
        uint32_t ep_dis_dtim_tx        : 1;  /**< [  8:  8](R/W) Error correction disable for DTIM TX path. */
        uint32_t ep_dis_cxs_tx         : 1;  /**< [  7:  7](R/W) Error correction disable for CXS (PCIe) TX path. */
        uint32_t ep_dis_adm_tx         : 1;  /**< [  6:  6](R/W) Error correction disable for ADM TX path. */
        uint32_t ep_dis_l3_tx          : 1;  /**< [  5:  5](R/W) Error correction disable for layer 3 TX path. */
        uint32_t ep_dis_l2_tx          : 1;  /**< [  4:  4](R/W) Error correction disable for layer 2 TX path. */
        uint32_t ep_dis_dma_wr         : 1;  /**< [  3:  3](R/W) Error correction disable for DMA write (not supported). */
        uint32_t ep_dis_axib_outb      : 1;  /**< [  2:  2](R/W) Error correction disable for AXI bridge outbound request path (not supported). */
        uint32_t ep_dis_axib_masc      : 1;  /**< [  1:  1](R/W) Error correction disable for AXI bridge master completion buffer (not supported). */
        uint32_t ep_dis_tx             : 1;  /**< [  0:  0](R/W) Global error correction disable for all TX layers. */
#else /* Word 0 - Little Endian */
        uint32_t ep_dis_tx             : 1;  /**< [  0:  0](R/W) Global error correction disable for all TX layers. */
        uint32_t ep_dis_axib_masc      : 1;  /**< [  1:  1](R/W) Error correction disable for AXI bridge master completion buffer (not supported). */
        uint32_t ep_dis_axib_outb      : 1;  /**< [  2:  2](R/W) Error correction disable for AXI bridge outbound request path (not supported). */
        uint32_t ep_dis_dma_wr         : 1;  /**< [  3:  3](R/W) Error correction disable for DMA write (not supported). */
        uint32_t ep_dis_l2_tx          : 1;  /**< [  4:  4](R/W) Error correction disable for layer 2 TX path. */
        uint32_t ep_dis_l3_tx          : 1;  /**< [  5:  5](R/W) Error correction disable for layer 3 TX path. */
        uint32_t ep_dis_adm_tx         : 1;  /**< [  6:  6](R/W) Error correction disable for ADM TX path. */
        uint32_t ep_dis_cxs_tx         : 1;  /**< [  7:  7](R/W) Error correction disable for CXS (PCIe) TX path. */
        uint32_t ep_dis_dtim_tx        : 1;  /**< [  8:  8](R/W) Error correction disable for DTIM TX path. */
        uint32_t reserved_9_15         : 7;
        uint32_t ep_dis_rx             : 1;  /**< [ 16: 16](R/W) Global error correction disable for all RX layers. */
        uint32_t ep_dis_axib_inbc      : 1;  /**< [ 17: 17](R/W) Error correction disable for AXI bridge inbound completion composer (not supported). */
        uint32_t ep_dis_axib_inbr      : 1;  /**< [ 18: 18](R/W) Error correction disable for AXI bridge inbound request path (not supported). */
        uint32_t ep_dis_dma_rd         : 1;  /**< [ 19: 19](R/W) Error correction disable for DMA read (not supported). */
        uint32_t ep_dis_l2_rx          : 1;  /**< [ 20: 20](R/W) Error correction disable for layer 2 RX path. */
        uint32_t ep_dis_l3_rx          : 1;  /**< [ 21: 21](R/W) Error correction disable for layer 3 RX path. */
        uint32_t ep_dis_adm_rx         : 1;  /**< [ 22: 22](R/W) Error correction disable for ADM RX path. */
        uint32_t ep_dis_cxs_rx         : 1;  /**< [ 23: 23](R/W) Error correction disable for CXS (PCIe) TX path. */
        uint32_t reserved_24_31        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_rasdp_ep_ctl_s cn; */
};
typedef union cavm_pcieepx_rasdp_ep_ctl cavm_pcieepx_rasdp_ep_ctl_t;

static inline uint64_t CAVM_PCIEEPX_RASDP_EP_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_RASDP_EP_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x354 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x354 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x354 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x354 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_RASDP_EP_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_RASDP_EP_CTL(a) cavm_pcieepx_rasdp_ep_ctl_t
#define bustype_CAVM_PCIEEPX_RASDP_EP_CTL(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_RASDP_EP_CTL(a) "PCIEEPX_RASDP_EP_CTL"
#define busnum_CAVM_PCIEEPX_RASDP_EP_CTL(a) (a)
#define arguments_CAVM_PCIEEPX_RASDP_EP_CTL(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_rasdp_hdr
 *
 * PCIe EP RAS Data Path Extended Capability Register
 */
union cavm_pcieepx_rasdp_hdr
{
    uint32_t u;
    struct cavm_pcieepx_rasdp_hdr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t vsec_length           : 12; /**< [ 31: 20](RO) VSEC length. */
        uint32_t vsec_rev              : 4;  /**< [ 19: 16](RO) Capability version. */
        uint32_t vsec_id               : 16; /**< [ 15:  0](RO) VSEC ID. */
#else /* Word 0 - Little Endian */
        uint32_t vsec_id               : 16; /**< [ 15:  0](RO) VSEC ID. */
        uint32_t vsec_rev              : 4;  /**< [ 19: 16](RO) Capability version. */
        uint32_t vsec_length           : 12; /**< [ 31: 20](RO) VSEC length. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_rasdp_hdr_s cn; */
};
typedef union cavm_pcieepx_rasdp_hdr cavm_pcieepx_rasdp_hdr_t;

static inline uint64_t CAVM_PCIEEPX_RASDP_HDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_RASDP_HDR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x350 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x350 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x350 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x350 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_RASDP_HDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_RASDP_HDR(a) cavm_pcieepx_rasdp_hdr_t
#define bustype_CAVM_PCIEEPX_RASDP_HDR(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_RASDP_HDR(a) "PCIEEPX_RASDP_HDR"
#define busnum_CAVM_PCIEEPX_RASDP_HDR(a) (a)
#define arguments_CAVM_PCIEEPX_RASDP_HDR(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_rasdp_radr_ce
 *
 * PCIe EP RAS RAM Address Corrected Error Register
 */
union cavm_pcieepx_rasdp_radr_ce
{
    uint32_t u;
    struct cavm_pcieepx_rasdp_radr_ce_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t ram_idx_corr_err      : 4;  /**< [ 31: 28](RO) RAM index where a corrected error has been detected. */
        uint32_t reserved_27           : 1;
        uint32_t ram_addr_corr_err     : 27; /**< [ 26:  0](RO) RAM address where a corrected error has been detected. */
#else /* Word 0 - Little Endian */
        uint32_t ram_addr_corr_err     : 27; /**< [ 26:  0](RO) RAM address where a corrected error has been detected. */
        uint32_t reserved_27           : 1;
        uint32_t ram_idx_corr_err      : 4;  /**< [ 31: 28](RO) RAM index where a corrected error has been detected. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_rasdp_radr_ce_s cn; */
};
typedef union cavm_pcieepx_rasdp_radr_ce cavm_pcieepx_rasdp_radr_ce_t;

static inline uint64_t CAVM_PCIEEPX_RASDP_RADR_CE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_RASDP_RADR_CE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x37c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x37c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x37c + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x37c + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_RASDP_RADR_CE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_RASDP_RADR_CE(a) cavm_pcieepx_rasdp_radr_ce_t
#define bustype_CAVM_PCIEEPX_RASDP_RADR_CE(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_RASDP_RADR_CE(a) "PCIEEPX_RASDP_RADR_CE"
#define busnum_CAVM_PCIEEPX_RASDP_RADR_CE(a) (a)
#define arguments_CAVM_PCIEEPX_RASDP_RADR_CE(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_rasdp_radr_uce
 *
 * PCIe EP RAS RAM Address Uncorrected Error Register
 */
union cavm_pcieepx_rasdp_radr_uce
{
    uint32_t u;
    struct cavm_pcieepx_rasdp_radr_uce_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t ram_idx_ucorr_err     : 4;  /**< [ 31: 28](RO) RAM index where a uncorrected error has been detected. */
        uint32_t reserved_27           : 1;
        uint32_t ram_addr_ucorr_err    : 27; /**< [ 26:  0](RO) RAM address where a uncorrected error has been detected. */
#else /* Word 0 - Little Endian */
        uint32_t ram_addr_ucorr_err    : 27; /**< [ 26:  0](RO) RAM address where a uncorrected error has been detected. */
        uint32_t reserved_27           : 1;
        uint32_t ram_idx_ucorr_err     : 4;  /**< [ 31: 28](RO) RAM index where a uncorrected error has been detected. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_rasdp_radr_uce_s cn; */
};
typedef union cavm_pcieepx_rasdp_radr_uce cavm_pcieepx_rasdp_radr_uce_t;

static inline uint64_t CAVM_PCIEEPX_RASDP_RADR_UCE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_RASDP_RADR_UCE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x380 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x380 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x380 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x380 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_RASDP_RADR_UCE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_RASDP_RADR_UCE(a) cavm_pcieepx_rasdp_radr_uce_t
#define bustype_CAVM_PCIEEPX_RASDP_RADR_UCE(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_RASDP_RADR_UCE(a) "PCIEEPX_RASDP_RADR_UCE"
#define busnum_CAVM_PCIEEPX_RASDP_RADR_UCE(a) (a)
#define arguments_CAVM_PCIEEPX_RASDP_RADR_UCE(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_rasdp_uce_ctl
 *
 * PCIe EP RAS Data Path Uncorrectable Error Control Register
 */
union cavm_pcieepx_rasdp_uce_ctl
{
    uint32_t u;
    struct cavm_pcieepx_rasdp_uce_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t ucorr_cnt_sel         : 8;  /**< [ 31: 24](R/W) Counter selection.  This field selects the counter ID (within
                                                                 the region defined by [UCORR_CNT_SEL_REG]) whose contents
                                                                 can be read from PCIEEP_RAS_TBA_CTL.  You can
                                                                 cycle this field value from 0 to 255 to access all counters. */
        uint32_t ucorr_cnt_sel_reg     : 4;  /**< [ 23: 20](R/W) Selected correctable counter region.
                                                                 0x0 = ADM RX path.
                                                                 0x1 = Layer 3 RX path.
                                                                 0x2 = Layer 2 RX path.
                                                                 0x3 = DMA inbound path (not supported).
                                                                 0x4 = AXI bridge inbound request path (not supported).
                                                                 0x5 = AXI bridge inbound completion composer path (not supported).
                                                                 0x6 = ADM TX path.
                                                                 0x7 = Layer 3 TX path.
                                                                 0x8 = Layer 2 TX path.
                                                                 0x9 = DMA outbound path (not supported).
                                                                 0xA = AXI bridge outbound request path (not supported).
                                                                 0xB = AXI bridge outbound master completion path (not supported).
                                                                 0xC - 0xF = Reserved. */
        uint32_t reserved_5_19         : 15;
        uint32_t ucorr_en_cntrs        : 1;  /**< [  4:  4](R/W) Error correction disable for ADM RX path. */
        uint32_t reserved_1_3          : 3;
        uint32_t ep_dis_l3_rx          : 1;  /**< [  0:  0](R/W1C) Clears all uncorrectable error counters. */
#else /* Word 0 - Little Endian */
        uint32_t ep_dis_l3_rx          : 1;  /**< [  0:  0](R/W1C) Clears all uncorrectable error counters. */
        uint32_t reserved_1_3          : 3;
        uint32_t ucorr_en_cntrs        : 1;  /**< [  4:  4](R/W) Error correction disable for ADM RX path. */
        uint32_t reserved_5_19         : 15;
        uint32_t ucorr_cnt_sel_reg     : 4;  /**< [ 23: 20](R/W) Selected correctable counter region.
                                                                 0x0 = ADM RX path.
                                                                 0x1 = Layer 3 RX path.
                                                                 0x2 = Layer 2 RX path.
                                                                 0x3 = DMA inbound path (not supported).
                                                                 0x4 = AXI bridge inbound request path (not supported).
                                                                 0x5 = AXI bridge inbound completion composer path (not supported).
                                                                 0x6 = ADM TX path.
                                                                 0x7 = Layer 3 TX path.
                                                                 0x8 = Layer 2 TX path.
                                                                 0x9 = DMA outbound path (not supported).
                                                                 0xA = AXI bridge outbound request path (not supported).
                                                                 0xB = AXI bridge outbound master completion path (not supported).
                                                                 0xC - 0xF = Reserved. */
        uint32_t ucorr_cnt_sel         : 8;  /**< [ 31: 24](R/W) Counter selection.  This field selects the counter ID (within
                                                                 the region defined by [UCORR_CNT_SEL_REG]) whose contents
                                                                 can be read from PCIEEP_RAS_TBA_CTL.  You can
                                                                 cycle this field value from 0 to 255 to access all counters. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_rasdp_uce_ctl_s cn; */
};
typedef union cavm_pcieepx_rasdp_uce_ctl cavm_pcieepx_rasdp_uce_ctl_t;

static inline uint64_t CAVM_PCIEEPX_RASDP_UCE_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_RASDP_UCE_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x360 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x360 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x360 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x360 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_RASDP_UCE_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_RASDP_UCE_CTL(a) cavm_pcieepx_rasdp_uce_ctl_t
#define bustype_CAVM_PCIEEPX_RASDP_UCE_CTL(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_RASDP_UCE_CTL(a) "PCIEEPX_RASDP_UCE_CTL"
#define busnum_CAVM_PCIEEPX_RASDP_UCE_CTL(a) (a)
#define arguments_CAVM_PCIEEPX_RASDP_UCE_CTL(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_rasdp_uce_loc
 *
 * PCIe EP RAS Data Uncorrectable Error Location Register
 */
union cavm_pcieepx_rasdp_uce_loc
{
    uint32_t u;
    struct cavm_pcieepx_rasdp_uce_loc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t loc_last_ucorr_err    : 8;  /**< [ 31: 24](RO) Location/ID of the last uncorrected error within the region defined by
                                                                 [REG_LAST_UCORR_ERR]. */
        uint32_t reg_last_ucorr_err    : 4;  /**< [ 23: 20](RO) Region of last uncorrected error
                                                                 0x0 = ADM RX path.
                                                                 0x1 = Layer 3 RX path.
                                                                 0x2 = Layer 2 RX path.
                                                                 0x3 = DMA inbound path (not supported).
                                                                 0x4 = AXI bridge inbound request path (not supported).
                                                                 0x5 = AXI bridge inbound completion composer path (not supported).
                                                                 0x6 = ADM TX path.
                                                                 0x7 = Layer 3 TX path.
                                                                 0x8 = Layer 2 TX path.
                                                                 0x9 = DMA outbound path (not supported).
                                                                 0xA = AXI bridge outbound request path (not supported).
                                                                 0xB = AXI bridge outbound master completion path (not supported).
                                                                 0xC = CXS Tx/Rx path (not supported).
                                                                 0xD = DTIM Tx/Rx path (not supported).
                                                                 0xE - 0xF = Reserved. */
        uint32_t reserved_16_19        : 4;
        uint32_t loc_first_ucorr_err   : 8;  /**< [ 15:  8](RO) Location/ID of the first uncorrected error within the region defined by
                                                                 [REG_FIRST_UCORR_ERR]. */
        uint32_t reg_first_ucorr_err   : 4;  /**< [  7:  4](RO) Region of first uncorrected error
                                                                 0x0 = ADM RX path.
                                                                 0x1 = Layer 3 RX path.
                                                                 0x2 = Layer 2 RX path.
                                                                 0x3 = DMA inbound path (not supported).
                                                                 0x4 = AXI bridge inbound request path (not supported).
                                                                 0x5 = AXI bridge inbound completion composer path (not supported).
                                                                 0x6 = ADM TX path.
                                                                 0x7 = Layer 3 TX path.
                                                                 0x8 = Layer 2 TX path.
                                                                 0x9 = DMA outbound path (not supported).
                                                                 0xA = AXI bridge outbound request path (not supported).
                                                                 0xB = AXI bridge outbound master completion path (not supported).
                                                                 0xC = CXS Tx/Rx path (not supported).
                                                                 0xD = DTIM Tx/Rx path (not supported).
                                                                 0xE - 0xF = Reserved. */
        uint32_t reserved_0_3          : 4;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_3          : 4;
        uint32_t reg_first_ucorr_err   : 4;  /**< [  7:  4](RO) Region of first uncorrected error
                                                                 0x0 = ADM RX path.
                                                                 0x1 = Layer 3 RX path.
                                                                 0x2 = Layer 2 RX path.
                                                                 0x3 = DMA inbound path (not supported).
                                                                 0x4 = AXI bridge inbound request path (not supported).
                                                                 0x5 = AXI bridge inbound completion composer path (not supported).
                                                                 0x6 = ADM TX path.
                                                                 0x7 = Layer 3 TX path.
                                                                 0x8 = Layer 2 TX path.
                                                                 0x9 = DMA outbound path (not supported).
                                                                 0xA = AXI bridge outbound request path (not supported).
                                                                 0xB = AXI bridge outbound master completion path (not supported).
                                                                 0xC = CXS Tx/Rx path (not supported).
                                                                 0xD = DTIM Tx/Rx path (not supported).
                                                                 0xE - 0xF = Reserved. */
        uint32_t loc_first_ucorr_err   : 8;  /**< [ 15:  8](RO) Location/ID of the first uncorrected error within the region defined by
                                                                 [REG_FIRST_UCORR_ERR]. */
        uint32_t reserved_16_19        : 4;
        uint32_t reg_last_ucorr_err    : 4;  /**< [ 23: 20](RO) Region of last uncorrected error
                                                                 0x0 = ADM RX path.
                                                                 0x1 = Layer 3 RX path.
                                                                 0x2 = Layer 2 RX path.
                                                                 0x3 = DMA inbound path (not supported).
                                                                 0x4 = AXI bridge inbound request path (not supported).
                                                                 0x5 = AXI bridge inbound completion composer path (not supported).
                                                                 0x6 = ADM TX path.
                                                                 0x7 = Layer 3 TX path.
                                                                 0x8 = Layer 2 TX path.
                                                                 0x9 = DMA outbound path (not supported).
                                                                 0xA = AXI bridge outbound request path (not supported).
                                                                 0xB = AXI bridge outbound master completion path (not supported).
                                                                 0xC = CXS Tx/Rx path (not supported).
                                                                 0xD = DTIM Tx/Rx path (not supported).
                                                                 0xE - 0xF = Reserved. */
        uint32_t loc_last_ucorr_err    : 8;  /**< [ 31: 24](RO) Location/ID of the last uncorrected error within the region defined by
                                                                 [REG_LAST_UCORR_ERR]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_rasdp_uce_loc_s cn; */
};
typedef union cavm_pcieepx_rasdp_uce_loc cavm_pcieepx_rasdp_uce_loc_t;

static inline uint64_t CAVM_PCIEEPX_RASDP_UCE_LOC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_RASDP_UCE_LOC(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x370 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x370 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x370 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x370 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_RASDP_UCE_LOC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_RASDP_UCE_LOC(a) cavm_pcieepx_rasdp_uce_loc_t
#define bustype_CAVM_PCIEEPX_RASDP_UCE_LOC(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_RASDP_UCE_LOC(a) "PCIEEPX_RASDP_UCE_LOC"
#define busnum_CAVM_PCIEEPX_RASDP_UCE_LOC(a) (a)
#define arguments_CAVM_PCIEEPX_RASDP_UCE_LOC(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_rasdp_uce_rp
 *
 * PCIe EP RAS Data Path Uncorrectable Error Report Register
 */
union cavm_pcieepx_rasdp_uce_rp
{
    uint32_t u;
    struct cavm_pcieepx_rasdp_uce_rp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t ucorr_cnt_sel         : 8;  /**< [ 31: 24](RO/H) Counter selection.  Returns the value set in PCIEEP_RASDP_UCE_CTL[UCORR_CNT_SEL]. */
        uint32_t ucorr_cnt_sel_reg     : 4;  /**< [ 23: 20](RO/H) Selected correctable counter region.
                                                                 0x0 = ADM RX path.
                                                                 0x1 = Layer 3 RX path.
                                                                 0x2 = Layer 2 RX path.
                                                                 0x3 = DMA inbound path (not supported).
                                                                 0x4 = AXI bridge inbound request path (not supported).
                                                                 0x5 = AXI bridge inbound completion composer path (not supported).
                                                                 0x6 = ADM TX path.
                                                                 0x7 = Layer 3 TX path.
                                                                 0x8 = Layer 2 TX path.
                                                                 0x9 = DMA outbound path (not supported).
                                                                 0xA = AXI bridge outbound request path (not supported).
                                                                 0xB = AXI bridge outbound master completion buffer path (not supported).
                                                                 0xC - 0xF = Reserved. */
        uint32_t reserved_8_19         : 12;
        uint32_t ucorr_count           : 8;  /**< [  7:  0](RO) Current uncorrected count for the selected counter. */
#else /* Word 0 - Little Endian */
        uint32_t ucorr_count           : 8;  /**< [  7:  0](RO) Current uncorrected count for the selected counter. */
        uint32_t reserved_8_19         : 12;
        uint32_t ucorr_cnt_sel_reg     : 4;  /**< [ 23: 20](RO/H) Selected correctable counter region.
                                                                 0x0 = ADM RX path.
                                                                 0x1 = Layer 3 RX path.
                                                                 0x2 = Layer 2 RX path.
                                                                 0x3 = DMA inbound path (not supported).
                                                                 0x4 = AXI bridge inbound request path (not supported).
                                                                 0x5 = AXI bridge inbound completion composer path (not supported).
                                                                 0x6 = ADM TX path.
                                                                 0x7 = Layer 3 TX path.
                                                                 0x8 = Layer 2 TX path.
                                                                 0x9 = DMA outbound path (not supported).
                                                                 0xA = AXI bridge outbound request path (not supported).
                                                                 0xB = AXI bridge outbound master completion buffer path (not supported).
                                                                 0xC - 0xF = Reserved. */
        uint32_t ucorr_cnt_sel         : 8;  /**< [ 31: 24](RO/H) Counter selection.  Returns the value set in PCIEEP_RASDP_UCE_CTL[UCORR_CNT_SEL]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_rasdp_uce_rp_s cn; */
};
typedef union cavm_pcieepx_rasdp_uce_rp cavm_pcieepx_rasdp_uce_rp_t;

static inline uint64_t CAVM_PCIEEPX_RASDP_UCE_RP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_RASDP_UCE_RP(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x364 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x364 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x364 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x364 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_RASDP_UCE_RP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_RASDP_UCE_RP(a) cavm_pcieepx_rasdp_uce_rp_t
#define bustype_CAVM_PCIEEPX_RASDP_UCE_RP(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_RASDP_UCE_RP(a) "PCIEEPX_RASDP_UCE_RP"
#define busnum_CAVM_PCIEEPX_RASDP_UCE_RP(a) (a)
#define arguments_CAVM_PCIEEPX_RASDP_UCE_RP(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_rbar_cap
 *
 * PCIe EP Resizable BAR (RBAR) Capability Register
 */
union cavm_pcieepx_rbar_cap
{
    uint32_t u;
    struct cavm_pcieepx_rbar_cap_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t srs                   : 28; /**< [ 31:  4](RO/WRSL) Supported resource sizes.
                                                                 The BAR is disabled at runtime by writing all zeros through PEM()_CFG_TBL() to this field.
                                                                 Note that when writing this field via PEM()_CFG_TBL(), all 28 bits must be updated at
                                                                 the same time, byte writes are ignored. */
        uint32_t reserved_0_3          : 4;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_3          : 4;
        uint32_t srs                   : 28; /**< [ 31:  4](RO/WRSL) Supported resource sizes.
                                                                 The BAR is disabled at runtime by writing all zeros through PEM()_CFG_TBL() to this field.
                                                                 Note that when writing this field via PEM()_CFG_TBL(), all 28 bits must be updated at
                                                                 the same time, byte writes are ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_rbar_cap_s cn; */
};
typedef union cavm_pcieepx_rbar_cap cavm_pcieepx_rbar_cap_t;

static inline uint64_t CAVM_PCIEEPX_RBAR_CAP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_RBAR_CAP(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x408 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x408 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x408 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x408 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_RBAR_CAP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_RBAR_CAP(a) cavm_pcieepx_rbar_cap_t
#define bustype_CAVM_PCIEEPX_RBAR_CAP(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_RBAR_CAP(a) "PCIEEPX_RBAR_CAP"
#define busnum_CAVM_PCIEEPX_RBAR_CAP(a) (a)
#define arguments_CAVM_PCIEEPX_RBAR_CAP(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_rbar_cap_hdr
 *
 * PCIe EP Resizable BAR (RBAR) Capability Header Register
 */
union cavm_pcieepx_rbar_cap_hdr
{
    uint32_t u;
    struct cavm_pcieepx_rbar_cap_hdr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t nco                   : 12; /**< [ 31: 20](RO/WRSL) Next capability offset.
                                                                 Writable through PEM()_CFG_TBL(). */
        uint32_t cv                    : 4;  /**< [ 19: 16](RO/WRSL) Capability version.
                                                                 Writable through PEM()_CFG_TBL(). */
        uint32_t pcieec                : 16; /**< [ 15:  0](RO/WRSL) PCI Express extended capability.
                                                                 Writable through PEM()_CFG_TBL(). */
#else /* Word 0 - Little Endian */
        uint32_t pcieec                : 16; /**< [ 15:  0](RO/WRSL) PCI Express extended capability.
                                                                 Writable through PEM()_CFG_TBL(). */
        uint32_t cv                    : 4;  /**< [ 19: 16](RO/WRSL) Capability version.
                                                                 Writable through PEM()_CFG_TBL(). */
        uint32_t nco                   : 12; /**< [ 31: 20](RO/WRSL) Next capability offset.
                                                                 Writable through PEM()_CFG_TBL(). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_rbar_cap_hdr_s cn; */
};
typedef union cavm_pcieepx_rbar_cap_hdr cavm_pcieepx_rbar_cap_hdr_t;

static inline uint64_t CAVM_PCIEEPX_RBAR_CAP_HDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_RBAR_CAP_HDR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x404 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x404 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x404 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x404 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_RBAR_CAP_HDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_RBAR_CAP_HDR(a) cavm_pcieepx_rbar_cap_hdr_t
#define bustype_CAVM_PCIEEPX_RBAR_CAP_HDR(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_RBAR_CAP_HDR(a) "PCIEEPX_RBAR_CAP_HDR"
#define busnum_CAVM_PCIEEPX_RBAR_CAP_HDR(a) (a)
#define arguments_CAVM_PCIEEPX_RBAR_CAP_HDR(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_rbar_ctl
 *
 * PCIe EP Resizable BAR (RBAR) Control Register
 */
union cavm_pcieepx_rbar_ctl
{
    uint32_t u;
    struct cavm_pcieepx_rbar_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t esrs                  : 16; /**< [ 31: 16](R/W) Extended supported resource sizes. PEM advertises the maximum allowable BAR size (512 GB)
                                                                 when the fus__bar2_size_conf is intact. When the fuse is blown, the CNXXXX
                                                                 advertises a BAR size of 4096TB (PCIEEP)_RBAR_CTL[SRS] = 0xFFF_FFFF and ESRS = 0x1F).
                                                                 The BAR is disabled at runtime by writing all zeros through PEM()_CFG_TBL() to this field. */
        uint32_t reserved_14_15        : 2;
        uint32_t rbars                 : 6;  /**< [ 13:  8](R/W) BAR Size. PEM advertises the minimum allowable BAR size of 0x0 (1MB) but will accept
                                                                 values as large as 0x2B (8EB). */
        uint32_t nrbar                 : 3;  /**< [  7:  5](RO) Number of resizable BARs. */
        uint32_t reserved_3_4          : 2;
        uint32_t rbari                 : 3;  /**< [  2:  0](RO) BAR Index. Points to BAR2. */
#else /* Word 0 - Little Endian */
        uint32_t rbari                 : 3;  /**< [  2:  0](RO) BAR Index. Points to BAR2. */
        uint32_t reserved_3_4          : 2;
        uint32_t nrbar                 : 3;  /**< [  7:  5](RO) Number of resizable BARs. */
        uint32_t rbars                 : 6;  /**< [ 13:  8](R/W) BAR Size. PEM advertises the minimum allowable BAR size of 0x0 (1MB) but will accept
                                                                 values as large as 0x2B (8EB). */
        uint32_t reserved_14_15        : 2;
        uint32_t esrs                  : 16; /**< [ 31: 16](R/W) Extended supported resource sizes. PEM advertises the maximum allowable BAR size (512 GB)
                                                                 when the fus__bar2_size_conf is intact. When the fuse is blown, the CNXXXX
                                                                 advertises a BAR size of 4096TB (PCIEEP)_RBAR_CTL[SRS] = 0xFFF_FFFF and ESRS = 0x1F).
                                                                 The BAR is disabled at runtime by writing all zeros through PEM()_CFG_TBL() to this field. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_rbar_ctl_s cn; */
};
typedef union cavm_pcieepx_rbar_ctl cavm_pcieepx_rbar_ctl_t;

static inline uint64_t CAVM_PCIEEPX_RBAR_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_RBAR_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x40c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x40c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x40c + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x40c + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_RBAR_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_RBAR_CTL(a) cavm_pcieepx_rbar_ctl_t
#define bustype_CAVM_PCIEEPX_RBAR_CTL(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_RBAR_CTL(a) "PCIEEPX_RBAR_CTL"
#define busnum_CAVM_PCIEEPX_RBAR_CTL(a) (a)
#define arguments_CAVM_PCIEEPX_RBAR_CTL(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_rev
 *
 * PCIe EP PF Class Code/Revision ID Register
 */
union cavm_pcieepx_rev
{
    uint32_t u;
    struct cavm_pcieepx_rev_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t bcc                   : 8;  /**< [ 31: 24](RO/WRSL) Base class code, writable through PEM()_CFG_TBL().
                                                                 0xB = Processor. */
        uint32_t sc                    : 8;  /**< [ 23: 16](RO/WRSL) Subclass code, writable through PEM()_CFG_TBL().
                                                                 0x80 = Other processors (no encoding exists for Arm.) */
        uint32_t pi                    : 8;  /**< [ 15:  8](RO/WRSL) Programming interface, writable through PEM()_CFG_TBL().
                                                                 0x0 = No standard interface. */
        uint32_t rid                   : 8;  /**< [  7:  0](RO/WRSL) Revision ID, writable through PEM()_CFG_TBL().

                                                                 Software must initialize this register if desired to represent the proper
                                                                 revision number, i.e. as read from FUSE_NUM_E::CHIP_ID(). */
#else /* Word 0 - Little Endian */
        uint32_t rid                   : 8;  /**< [  7:  0](RO/WRSL) Revision ID, writable through PEM()_CFG_TBL().

                                                                 Software must initialize this register if desired to represent the proper
                                                                 revision number, i.e. as read from FUSE_NUM_E::CHIP_ID(). */
        uint32_t pi                    : 8;  /**< [ 15:  8](RO/WRSL) Programming interface, writable through PEM()_CFG_TBL().
                                                                 0x0 = No standard interface. */
        uint32_t sc                    : 8;  /**< [ 23: 16](RO/WRSL) Subclass code, writable through PEM()_CFG_TBL().
                                                                 0x80 = Other processors (no encoding exists for Arm.) */
        uint32_t bcc                   : 8;  /**< [ 31: 24](RO/WRSL) Base class code, writable through PEM()_CFG_TBL().
                                                                 0xB = Processor. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_rev_s cn; */
};
typedef union cavm_pcieepx_rev cavm_pcieepx_rev_t;

static inline uint64_t CAVM_PCIEEPX_REV(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_REV(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 8 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 8 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 8 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 8 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_REV", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_REV(a) cavm_pcieepx_rev_t
#define bustype_CAVM_PCIEEPX_REV(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_REV(a) "PCIEEPX_REV"
#define busnum_CAVM_PCIEEPX_REV(a) (a)
#define arguments_CAVM_PCIEEPX_REV(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_scap_hdr
 *
 * PCIe EP PF Secondary Capability (Gen3) Header Register
 * Secondary Capability (Gen3) Header exists for PF0 only.
 */
union cavm_pcieepx_scap_hdr
{
    uint32_t u;
    struct cavm_pcieepx_scap_hdr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t nco                   : 12; /**< [ 31: 20](RO/WRSL) Next capability offset.
                                                                 Writable through PEM()_CFG_TBL(). */
        uint32_t cv                    : 4;  /**< [ 19: 16](RO/WRSL) Capability version.
                                                                 Writable through PEM()_CFG_TBL(). */
        uint32_t pcieec                : 16; /**< [ 15:  0](RO/WRSL) PCI Express extended capability.
                                                                 Writable through PEM()_CFG_TBL(). */
#else /* Word 0 - Little Endian */
        uint32_t pcieec                : 16; /**< [ 15:  0](RO/WRSL) PCI Express extended capability.
                                                                 Writable through PEM()_CFG_TBL(). */
        uint32_t cv                    : 4;  /**< [ 19: 16](RO/WRSL) Capability version.
                                                                 Writable through PEM()_CFG_TBL(). */
        uint32_t nco                   : 12; /**< [ 31: 20](RO/WRSL) Next capability offset.
                                                                 Writable through PEM()_CFG_TBL(). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_scap_hdr_s cn; */
};
typedef union cavm_pcieepx_scap_hdr cavm_pcieepx_scap_hdr_t;

static inline uint64_t CAVM_PCIEEPX_SCAP_HDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_SCAP_HDR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x168 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x168 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x168 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x168 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_SCAP_HDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_SCAP_HDR(a) cavm_pcieepx_scap_hdr_t
#define bustype_CAVM_PCIEEPX_SCAP_HDR(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_SCAP_HDR(a) "PCIEEPX_SCAP_HDR"
#define busnum_CAVM_PCIEEPX_SCAP_HDR(a) (a)
#define arguments_CAVM_PCIEEPX_SCAP_HDR(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_sn_base
 *
 * PCIe EP PF Device Serial Number Extended Capability Header Register
 */
union cavm_pcieepx_sn_base
{
    uint32_t u;
    struct cavm_pcieepx_sn_base_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t nco                   : 12; /**< [ 31: 20](RO/WRSL) Next capability offset.
                                                                 Writable through PEM()_CFG_TBL(). */
        uint32_t cv                    : 4;  /**< [ 19: 16](RO/WRSL) Capability version.
                                                                 Writable through PEM()_CFG_TBL(). */
        uint32_t pcieec                : 16; /**< [ 15:  0](RO/WRSL) PCI Express extended capability.
                                                                 Writable through PEM()_CFG_TBL(). */
#else /* Word 0 - Little Endian */
        uint32_t pcieec                : 16; /**< [ 15:  0](RO/WRSL) PCI Express extended capability.
                                                                 Writable through PEM()_CFG_TBL(). */
        uint32_t cv                    : 4;  /**< [ 19: 16](RO/WRSL) Capability version.
                                                                 Writable through PEM()_CFG_TBL(). */
        uint32_t nco                   : 12; /**< [ 31: 20](RO/WRSL) Next capability offset.
                                                                 Writable through PEM()_CFG_TBL(). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_sn_base_s cn; */
};
typedef union cavm_pcieepx_sn_base cavm_pcieepx_sn_base_t;

static inline uint64_t CAVM_PCIEEPX_SN_BASE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_SN_BASE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x148 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x148 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x148 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x148 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_SN_BASE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_SN_BASE(a) cavm_pcieepx_sn_base_t
#define bustype_CAVM_PCIEEPX_SN_BASE(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_SN_BASE(a) "PCIEEPX_SN_BASE"
#define busnum_CAVM_PCIEEPX_SN_BASE(a) (a)
#define arguments_CAVM_PCIEEPX_SN_BASE(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_sn_dw1
 *
 * PCIe EP PF Serial Number 1 Register
 */
union cavm_pcieepx_sn_dw1
{
    uint32_t u;
    struct cavm_pcieepx_sn_dw1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t dsn_dw1               : 32; /**< [ 31:  0](RO/WRSL) IEEE 64-bit device serial number (doubleword 1). */
#else /* Word 0 - Little Endian */
        uint32_t dsn_dw1               : 32; /**< [ 31:  0](RO/WRSL) IEEE 64-bit device serial number (doubleword 1). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_sn_dw1_s cn; */
};
typedef union cavm_pcieepx_sn_dw1 cavm_pcieepx_sn_dw1_t;

static inline uint64_t CAVM_PCIEEPX_SN_DW1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_SN_DW1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x14c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x14c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x14c + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x14c + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_SN_DW1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_SN_DW1(a) cavm_pcieepx_sn_dw1_t
#define bustype_CAVM_PCIEEPX_SN_DW1(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_SN_DW1(a) "PCIEEPX_SN_DW1"
#define busnum_CAVM_PCIEEPX_SN_DW1(a) (a)
#define arguments_CAVM_PCIEEPX_SN_DW1(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_sn_dw2
 *
 * PCIe EP PF Serial Number 2 Register
 */
union cavm_pcieepx_sn_dw2
{
    uint32_t u;
    struct cavm_pcieepx_sn_dw2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t dsn_dw2               : 32; /**< [ 31:  0](RO/WRSL) IEEE 64-bit device serial number (doubleword 2). */
#else /* Word 0 - Little Endian */
        uint32_t dsn_dw2               : 32; /**< [ 31:  0](RO/WRSL) IEEE 64-bit device serial number (doubleword 2). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_sn_dw2_s cn; */
};
typedef union cavm_pcieepx_sn_dw2 cavm_pcieepx_sn_dw2_t;

static inline uint64_t CAVM_PCIEEPX_SN_DW2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_SN_DW2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x150 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x150 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x150 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x150 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_SN_DW2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_SN_DW2(a) cavm_pcieepx_sn_dw2_t
#define bustype_CAVM_PCIEEPX_SN_DW2(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_SN_DW2(a) "PCIEEPX_SN_DW2"
#define busnum_CAVM_PCIEEPX_SN_DW2(a) (a)
#define arguments_CAVM_PCIEEPX_SN_DW2(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP_SHADOW) pcieep#_sriov_ari_fo
 *
 * PCIe EP PF SR-IOV ARI Stride and First Offset Register
 */
union cavm_pcieepx_sriov_ari_fo
{
    uint32_t u;
    struct cavm_pcieepx_sriov_ari_fo_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t vfs                   : 16; /**< [ 31: 16](RO/WRSL/H) VF stride.

                                                                 There are two VF stride registers;  one for each ARI capable
                                                                 and non-ARI capable hierarchies.  The PCIEEP_SRIOV_CTL[ACH] determines which one is
                                                                 being used for SR-IOV, and which one is accessed by a read request.

                                                                 This field is writable through PEM()_CFG_TBL(), PEM()_CFG_TBL()[ADDR[16]] determines
                                                                 which register is updated.
                                                                 0 = Accesses non-ARI capable hierarchy copy.
                                                                 1 = Accesses ARI capable hierarchy copy. */
        uint32_t fo                    : 16; /**< [ 15:  0](RO/WRSL/H) First VF offset.

                                                                 Reset values:
                                                                 _ PF0:   0x10.
                                                                 _ PF1:   0x1f.

                                                                 There are two first VF offset registers;  one for each ARI capable
                                                                 and non-ARI capable hierarchies.  The PCIEEP_SRIOV_CTL[ACH] determines which one is
                                                                 being used for SR-IOV, and which one is accessed by a read request.

                                                                 This field is writable through PEM()_CFG_TBL(), PEM()_CFG_TBL()[ADDR[16]] determines
                                                                 which register is updated.
                                                                 0 = Accesses non-ARI capable hierarchy copy.
                                                                 1 = Accesses ARI capable hierarchy copy. */
#else /* Word 0 - Little Endian */
        uint32_t fo                    : 16; /**< [ 15:  0](RO/WRSL/H) First VF offset.

                                                                 Reset values:
                                                                 _ PF0:   0x10.
                                                                 _ PF1:   0x1f.

                                                                 There are two first VF offset registers;  one for each ARI capable
                                                                 and non-ARI capable hierarchies.  The PCIEEP_SRIOV_CTL[ACH] determines which one is
                                                                 being used for SR-IOV, and which one is accessed by a read request.

                                                                 This field is writable through PEM()_CFG_TBL(), PEM()_CFG_TBL()[ADDR[16]] determines
                                                                 which register is updated.
                                                                 0 = Accesses non-ARI capable hierarchy copy.
                                                                 1 = Accesses ARI capable hierarchy copy. */
        uint32_t vfs                   : 16; /**< [ 31: 16](RO/WRSL/H) VF stride.

                                                                 There are two VF stride registers;  one for each ARI capable
                                                                 and non-ARI capable hierarchies.  The PCIEEP_SRIOV_CTL[ACH] determines which one is
                                                                 being used for SR-IOV, and which one is accessed by a read request.

                                                                 This field is writable through PEM()_CFG_TBL(), PEM()_CFG_TBL()[ADDR[16]] determines
                                                                 which register is updated.
                                                                 0 = Accesses non-ARI capable hierarchy copy.
                                                                 1 = Accesses ARI capable hierarchy copy. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_sriov_ari_fo_s cn; */
};
typedef union cavm_pcieepx_sriov_ari_fo cavm_pcieepx_sriov_ari_fo_t;

static inline uint64_t CAVM_PCIEEPX_SRIOV_ARI_FO(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_SRIOV_ARI_FO(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x101fc + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x101fc + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x101fc + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x101fc + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_SRIOV_ARI_FO", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_SRIOV_ARI_FO(a) cavm_pcieepx_sriov_ari_fo_t
#define bustype_CAVM_PCIEEPX_SRIOV_ARI_FO(a) CSR_TYPE_PCICONFIGEP_SHADOW
#define basename_CAVM_PCIEEPX_SRIOV_ARI_FO(a) "PCIEEPX_SRIOV_ARI_FO"
#define busnum_CAVM_PCIEEPX_SRIOV_ARI_FO(a) (a)
#define arguments_CAVM_PCIEEPX_SRIOV_ARI_FO(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP_SHADOW) pcieep#_sriov_bar0_maskl
 *
 * PCIe EP PF SR-IOV BAR Mask 0 Low Register
 * The BAR 0 mask register is invisible to host software and not readable from the application.
 * The BAR 0 mask register is only writable through PEM()_CFG_TBL().
 */
union cavm_pcieepx_sriov_bar0_maskl
{
    uint32_t u;
    struct cavm_pcieepx_sriov_bar0_maskl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t lmask                 : 31; /**< [ 31:  1](WORSL/H) BAR mask low. */
        uint32_t enb                   : 1;  /**< [  0:  0](WORSL/H) BAR enable.
                                                                 0 = BAR 0 is disabled.
                                                                 1 = BAR 0 is enabled.

                                                                 Bit 0 is interpreted as BAR enable when writing to the BAR mask register rather than as a
                                                                 mask bit because bit 0 of a BAR is always masked from writing by host software. Bit 0 must
                                                                 be written prior to writing the other mask bits. */
#else /* Word 0 - Little Endian */
        uint32_t enb                   : 1;  /**< [  0:  0](WORSL/H) BAR enable.
                                                                 0 = BAR 0 is disabled.
                                                                 1 = BAR 0 is enabled.

                                                                 Bit 0 is interpreted as BAR enable when writing to the BAR mask register rather than as a
                                                                 mask bit because bit 0 of a BAR is always masked from writing by host software. Bit 0 must
                                                                 be written prior to writing the other mask bits. */
        uint32_t lmask                 : 31; /**< [ 31:  1](WORSL/H) BAR mask low. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_sriov_bar0_maskl_s cn; */
};
typedef union cavm_pcieepx_sriov_bar0_maskl cavm_pcieepx_sriov_bar0_maskl_t;

static inline uint64_t CAVM_PCIEEPX_SRIOV_BAR0_MASKL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_SRIOV_BAR0_MASKL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x1020c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x1020c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x1020c + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x1020c + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_SRIOV_BAR0_MASKL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_SRIOV_BAR0_MASKL(a) cavm_pcieepx_sriov_bar0_maskl_t
#define bustype_CAVM_PCIEEPX_SRIOV_BAR0_MASKL(a) CSR_TYPE_PCICONFIGEP_SHADOW
#define basename_CAVM_PCIEEPX_SRIOV_BAR0_MASKL(a) "PCIEEPX_SRIOV_BAR0_MASKL"
#define busnum_CAVM_PCIEEPX_SRIOV_BAR0_MASKL(a) (a)
#define arguments_CAVM_PCIEEPX_SRIOV_BAR0_MASKL(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP_SHADOW) pcieep#_sriov_bar0_masku
 *
 * PCIe EP PF SR-IOV BAR Mask 0 High Register
 * The BAR 0 mask register is invisible to host software and not readable from the application.
 * The BAR 0 mask register is only writable through PEM()_CFG_TBL().
 */
union cavm_pcieepx_sriov_bar0_masku
{
    uint32_t u;
    struct cavm_pcieepx_sriov_bar0_masku_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t umask                 : 32; /**< [ 31:  0](WORSL/H) BAR mask high. */
#else /* Word 0 - Little Endian */
        uint32_t umask                 : 32; /**< [ 31:  0](WORSL/H) BAR mask high. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_sriov_bar0_masku_s cn; */
};
typedef union cavm_pcieepx_sriov_bar0_masku cavm_pcieepx_sriov_bar0_masku_t;

static inline uint64_t CAVM_PCIEEPX_SRIOV_BAR0_MASKU(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_SRIOV_BAR0_MASKU(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x10210 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x10210 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x10210 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x10210 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_SRIOV_BAR0_MASKU", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_SRIOV_BAR0_MASKU(a) cavm_pcieepx_sriov_bar0_masku_t
#define bustype_CAVM_PCIEEPX_SRIOV_BAR0_MASKU(a) CSR_TYPE_PCICONFIGEP_SHADOW
#define basename_CAVM_PCIEEPX_SRIOV_BAR0_MASKU(a) "PCIEEPX_SRIOV_BAR0_MASKU"
#define busnum_CAVM_PCIEEPX_SRIOV_BAR0_MASKU(a) (a)
#define arguments_CAVM_PCIEEPX_SRIOV_BAR0_MASKU(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_sriov_bar0l
 *
 * PCIe EP PF SR-IOV BAR 0 Lower Register
 */
union cavm_pcieepx_sriov_bar0l
{
    uint32_t u;
    struct cavm_pcieepx_sriov_bar0l_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t lbab                  : 17; /**< [ 31: 15](R/W) Lower bits of the VF BAR 0 base address. */
        uint32_t reserved_4_14         : 11;
        uint32_t pf                    : 1;  /**< [  3:  3](RO/H) Prefetchable. */
        uint32_t typ                   : 2;  /**< [  2:  1](RO/H) BAR type:
                                                                 0x0 = 32-bit BAR.
                                                                 0x2 = 64-bit BAR. */
        uint32_t mspc                  : 1;  /**< [  0:  0](RO/H) Memory space indicator:
                                                                 0 = BAR 0 is a memory BAR.
                                                                 1 = BAR 0 is an I/O BAR. */
#else /* Word 0 - Little Endian */
        uint32_t mspc                  : 1;  /**< [  0:  0](RO/H) Memory space indicator:
                                                                 0 = BAR 0 is a memory BAR.
                                                                 1 = BAR 0 is an I/O BAR. */
        uint32_t typ                   : 2;  /**< [  2:  1](RO/H) BAR type:
                                                                 0x0 = 32-bit BAR.
                                                                 0x2 = 64-bit BAR. */
        uint32_t pf                    : 1;  /**< [  3:  3](RO/H) Prefetchable. */
        uint32_t reserved_4_14         : 11;
        uint32_t lbab                  : 17; /**< [ 31: 15](R/W) Lower bits of the VF BAR 0 base address. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_sriov_bar0l_s cn; */
};
typedef union cavm_pcieepx_sriov_bar0l cavm_pcieepx_sriov_bar0l_t;

static inline uint64_t CAVM_PCIEEPX_SRIOV_BAR0L(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_SRIOV_BAR0L(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x20c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x20c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x20c + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x20c + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_SRIOV_BAR0L", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_SRIOV_BAR0L(a) cavm_pcieepx_sriov_bar0l_t
#define bustype_CAVM_PCIEEPX_SRIOV_BAR0L(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_SRIOV_BAR0L(a) "PCIEEPX_SRIOV_BAR0L"
#define busnum_CAVM_PCIEEPX_SRIOV_BAR0L(a) (a)
#define arguments_CAVM_PCIEEPX_SRIOV_BAR0L(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_sriov_bar0u
 *
 * PCIe EP PF SR-IOV BAR 0 Upper Register
 */
union cavm_pcieepx_sriov_bar0u
{
    uint32_t u;
    struct cavm_pcieepx_sriov_bar0u_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t ubab                  : 32; /**< [ 31:  0](R/W) Upper bits of the VF BAR 0 base address. */
#else /* Word 0 - Little Endian */
        uint32_t ubab                  : 32; /**< [ 31:  0](R/W) Upper bits of the VF BAR 0 base address. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_sriov_bar0u_s cn; */
};
typedef union cavm_pcieepx_sriov_bar0u cavm_pcieepx_sriov_bar0u_t;

static inline uint64_t CAVM_PCIEEPX_SRIOV_BAR0U(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_SRIOV_BAR0U(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x210 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x210 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x210 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x210 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_SRIOV_BAR0U", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_SRIOV_BAR0U(a) cavm_pcieepx_sriov_bar0u_t
#define bustype_CAVM_PCIEEPX_SRIOV_BAR0U(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_SRIOV_BAR0U(a) "PCIEEPX_SRIOV_BAR0U"
#define busnum_CAVM_PCIEEPX_SRIOV_BAR0U(a) (a)
#define arguments_CAVM_PCIEEPX_SRIOV_BAR0U(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_sriov_cap
 *
 * PCIe EP PF SR-IOV Capability Register
 */
union cavm_pcieepx_sriov_cap
{
    uint32_t u;
    struct cavm_pcieepx_sriov_cap_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_31           : 1;
        uint32_t vfmimn                : 10; /**< [ 30: 21](RO/H) VF migration interrupt message number. */
        uint32_t reserved_3_20         : 18;
        uint32_t tenbit_trc            : 1;  /**< [  2:  2](RO) VF 10-bit tag requester supported. */
        uint32_t arichp                : 1;  /**< [  1:  1](RO/WRSL/H) ARI capable hierarchy preserved.  Writable through PEM()_CFG_TBL().

                                                                 Reset values:
                                                                 _ PF0:          0x1.
                                                                 _ PF1:          0x0.

                                                                 This field is R/W only for PF0.  All other functions this field is read only zero. */
        uint32_t vfmc                  : 1;  /**< [  0:  0](RO/H) VF migration capable. */
#else /* Word 0 - Little Endian */
        uint32_t vfmc                  : 1;  /**< [  0:  0](RO/H) VF migration capable. */
        uint32_t arichp                : 1;  /**< [  1:  1](RO/WRSL/H) ARI capable hierarchy preserved.  Writable through PEM()_CFG_TBL().

                                                                 Reset values:
                                                                 _ PF0:          0x1.
                                                                 _ PF1:          0x0.

                                                                 This field is R/W only for PF0.  All other functions this field is read only zero. */
        uint32_t tenbit_trc            : 1;  /**< [  2:  2](RO) VF 10-bit tag requester supported. */
        uint32_t reserved_3_20         : 18;
        uint32_t vfmimn                : 10; /**< [ 30: 21](RO/H) VF migration interrupt message number. */
        uint32_t reserved_31           : 1;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_sriov_cap_s cn; */
};
typedef union cavm_pcieepx_sriov_cap cavm_pcieepx_sriov_cap_t;

static inline uint64_t CAVM_PCIEEPX_SRIOV_CAP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_SRIOV_CAP(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x1ec + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x1ec + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x1ec + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x1ec + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_SRIOV_CAP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_SRIOV_CAP(a) cavm_pcieepx_sriov_cap_t
#define bustype_CAVM_PCIEEPX_SRIOV_CAP(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_SRIOV_CAP(a) "PCIEEPX_SRIOV_CAP"
#define busnum_CAVM_PCIEEPX_SRIOV_CAP(a) (a)
#define arguments_CAVM_PCIEEPX_SRIOV_CAP(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_sriov_cap_hdr
 *
 * PCIe EP PF SR-IOV Capability Header Register
 */
union cavm_pcieepx_sriov_cap_hdr
{
    uint32_t u;
    struct cavm_pcieepx_sriov_cap_hdr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t nco                   : 12; /**< [ 31: 20](RO/WRSL) Next capability offset. */
        uint32_t cv                    : 4;  /**< [ 19: 16](RO/WRSL) Capability version. */
        uint32_t pcieec                : 16; /**< [ 15:  0](RO/WRSL) PCIE Express extended capability. */
#else /* Word 0 - Little Endian */
        uint32_t pcieec                : 16; /**< [ 15:  0](RO/WRSL) PCIE Express extended capability. */
        uint32_t cv                    : 4;  /**< [ 19: 16](RO/WRSL) Capability version. */
        uint32_t nco                   : 12; /**< [ 31: 20](RO/WRSL) Next capability offset. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_sriov_cap_hdr_s cn; */
};
typedef union cavm_pcieepx_sriov_cap_hdr cavm_pcieepx_sriov_cap_hdr_t;

static inline uint64_t CAVM_PCIEEPX_SRIOV_CAP_HDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_SRIOV_CAP_HDR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x1e8 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x1e8 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x1e8 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x1e8 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_SRIOV_CAP_HDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_SRIOV_CAP_HDR(a) cavm_pcieepx_sriov_cap_hdr_t
#define bustype_CAVM_PCIEEPX_SRIOV_CAP_HDR(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_SRIOV_CAP_HDR(a) "PCIEEPX_SRIOV_CAP_HDR"
#define busnum_CAVM_PCIEEPX_SRIOV_CAP_HDR(a) (a)
#define arguments_CAVM_PCIEEPX_SRIOV_CAP_HDR(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_sriov_ctl
 *
 * PCIe EP PF SR-IOV Control/Status Register
 */
union cavm_pcieepx_sriov_ctl
{
    uint32_t u;
    struct cavm_pcieepx_sriov_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_17_31        : 15;
        uint32_t ms                    : 1;  /**< [ 16: 16](RO/H) VF migration status. */
        uint32_t reserved_6_15         : 10;
        uint32_t tenbit_tre            : 1;  /**< [  5:  5](RO) VF 10-bit Tag Requester Enable.

                                                                 For UPEM, this bit is R/W and can be set to enable VF 10-bit
                                                                 tag requester enable.

                                                                 For BPEM, this bit is RO and cannot be written. */
        uint32_t ach                   : 1;  /**< [  4:  4](R/W) ARI capable hierarchy.
                                                                 0 = All PFs have non-ARI capable hierarchy.
                                                                 1 = All PFs have ARI capable hierarchy.

                                                                 This field is R/W only for PF0.  All other functions this field is read only.
                                                                 The value in this field in PF0 is used for all other physical functions. */
        uint32_t mse                   : 1;  /**< [  3:  3](R/W) VF MSE. */
        uint32_t mie                   : 1;  /**< [  2:  2](RO/H) VF migration interrupt enable. */
        uint32_t me                    : 1;  /**< [  1:  1](RO/H) VF migration enable. */
        uint32_t vfe                   : 1;  /**< [  0:  0](R/W) VF enable. */
#else /* Word 0 - Little Endian */
        uint32_t vfe                   : 1;  /**< [  0:  0](R/W) VF enable. */
        uint32_t me                    : 1;  /**< [  1:  1](RO/H) VF migration enable. */
        uint32_t mie                   : 1;  /**< [  2:  2](RO/H) VF migration interrupt enable. */
        uint32_t mse                   : 1;  /**< [  3:  3](R/W) VF MSE. */
        uint32_t ach                   : 1;  /**< [  4:  4](R/W) ARI capable hierarchy.
                                                                 0 = All PFs have non-ARI capable hierarchy.
                                                                 1 = All PFs have ARI capable hierarchy.

                                                                 This field is R/W only for PF0.  All other functions this field is read only.
                                                                 The value in this field in PF0 is used for all other physical functions. */
        uint32_t tenbit_tre            : 1;  /**< [  5:  5](RO) VF 10-bit Tag Requester Enable.

                                                                 For UPEM, this bit is R/W and can be set to enable VF 10-bit
                                                                 tag requester enable.

                                                                 For BPEM, this bit is RO and cannot be written. */
        uint32_t reserved_6_15         : 10;
        uint32_t ms                    : 1;  /**< [ 16: 16](RO/H) VF migration status. */
        uint32_t reserved_17_31        : 15;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_sriov_ctl_s cn; */
};
typedef union cavm_pcieepx_sriov_ctl cavm_pcieepx_sriov_ctl_t;

static inline uint64_t CAVM_PCIEEPX_SRIOV_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_SRIOV_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x1f0 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x1f0 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x1f0 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x1f0 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_SRIOV_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_SRIOV_CTL(a) cavm_pcieepx_sriov_ctl_t
#define bustype_CAVM_PCIEEPX_SRIOV_CTL(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_SRIOV_CTL(a) "PCIEEPX_SRIOV_CTL"
#define busnum_CAVM_PCIEEPX_SRIOV_CTL(a) (a)
#define arguments_CAVM_PCIEEPX_SRIOV_CTL(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_sriov_dev
 *
 * PCIe EP PF SR-IOV Device ID Register
 */
union cavm_pcieepx_sriov_dev
{
    uint32_t u;
    struct cavm_pcieepx_sriov_dev_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t vfdev                 : 16; /**< [ 31: 16](RO/WRSL) VF device ID. */
        uint32_t reserved_0_15         : 16;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_15         : 16;
        uint32_t vfdev                 : 16; /**< [ 31: 16](RO/WRSL) VF device ID. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_sriov_dev_s cn; */
};
typedef union cavm_pcieepx_sriov_dev cavm_pcieepx_sriov_dev_t;

static inline uint64_t CAVM_PCIEEPX_SRIOV_DEV(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_SRIOV_DEV(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x200 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x200 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x200 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x200 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_SRIOV_DEV", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_SRIOV_DEV(a) cavm_pcieepx_sriov_dev_t
#define bustype_CAVM_PCIEEPX_SRIOV_DEV(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_SRIOV_DEV(a) "PCIEEPX_SRIOV_DEV"
#define busnum_CAVM_PCIEEPX_SRIOV_DEV(a) (a)
#define arguments_CAVM_PCIEEPX_SRIOV_DEV(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_sriov_fo
 *
 * PCIe EP PF SR-IOV Non-ARI Stride and First Offset Register
 */
union cavm_pcieepx_sriov_fo
{
    uint32_t u;
    struct cavm_pcieepx_sriov_fo_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t vfs                   : 16; /**< [ 31: 16](RO/WRSL/H) VF stride.

                                                                 Reset values:
                                                                 _ ARI:          0x1.
                                                                 _ non-ARI:      0x1.

                                                                 There are two VF stride registers;  one for each ARI capable
                                                                 and non-ARI capable hierarchies.  The PCIEEP_SRIOV_CTL[ACH] determines which one is
                                                                 being used for SR-IOV, and which one is accessed by a read request.

                                                                 This field is writable through PEM()_CFG_TBL(), PEM()_CFG_TBL()[ADDR[16]] determines
                                                                 which VFS register is updated.
                                                                 0 = accesses non-ARI capable hierarchy copy of VFS.
                                                                 1 = accesses ARI capable hierarchy copy of VFS. */
        uint32_t fo                    : 16; /**< [ 15:  0](RO/WRSL/H) First VF offset.

                                                                 Reset values:
                                                                 _ PF0:          0x1.

                                                                 There are two first VF offset registers;  one for each ARI capable
                                                                 and non-ARI capable hierarchies.  The PCIEEP_SRIOV_CTL[ACH] determines which one is
                                                                 being used for SR-IOV, and which one is accessed by a read request.

                                                                 This field is writable through PEM()_CFG_TBL(), PEM()_CFG_TBL()[ADDR[16]] determines
                                                                 which register is updated.
                                                                 0 = Accesses non-ARI capable hierarchy copy.
                                                                 1 = Accesses ARI capable hierarchy copy. */
#else /* Word 0 - Little Endian */
        uint32_t fo                    : 16; /**< [ 15:  0](RO/WRSL/H) First VF offset.

                                                                 Reset values:
                                                                 _ PF0:          0x1.

                                                                 There are two first VF offset registers;  one for each ARI capable
                                                                 and non-ARI capable hierarchies.  The PCIEEP_SRIOV_CTL[ACH] determines which one is
                                                                 being used for SR-IOV, and which one is accessed by a read request.

                                                                 This field is writable through PEM()_CFG_TBL(), PEM()_CFG_TBL()[ADDR[16]] determines
                                                                 which register is updated.
                                                                 0 = Accesses non-ARI capable hierarchy copy.
                                                                 1 = Accesses ARI capable hierarchy copy. */
        uint32_t vfs                   : 16; /**< [ 31: 16](RO/WRSL/H) VF stride.

                                                                 Reset values:
                                                                 _ ARI:          0x1.
                                                                 _ non-ARI:      0x1.

                                                                 There are two VF stride registers;  one for each ARI capable
                                                                 and non-ARI capable hierarchies.  The PCIEEP_SRIOV_CTL[ACH] determines which one is
                                                                 being used for SR-IOV, and which one is accessed by a read request.

                                                                 This field is writable through PEM()_CFG_TBL(), PEM()_CFG_TBL()[ADDR[16]] determines
                                                                 which VFS register is updated.
                                                                 0 = accesses non-ARI capable hierarchy copy of VFS.
                                                                 1 = accesses ARI capable hierarchy copy of VFS. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_sriov_fo_s cn; */
};
typedef union cavm_pcieepx_sriov_fo cavm_pcieepx_sriov_fo_t;

static inline uint64_t CAVM_PCIEEPX_SRIOV_FO(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_SRIOV_FO(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x1fc + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x1fc + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x1fc + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x1fc + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_SRIOV_FO", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_SRIOV_FO(a) cavm_pcieepx_sriov_fo_t
#define bustype_CAVM_PCIEEPX_SRIOV_FO(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_SRIOV_FO(a) "PCIEEPX_SRIOV_FO"
#define busnum_CAVM_PCIEEPX_SRIOV_FO(a) (a)
#define arguments_CAVM_PCIEEPX_SRIOV_FO(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_sriov_ms
 *
 * PCIe EP PF SR-IOV Migration State Array Offset Register
 */
union cavm_pcieepx_sriov_ms
{
    uint32_t u;
    struct cavm_pcieepx_sriov_ms_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t mso                   : 29; /**< [ 31:  3](RO/H) VF migration state offset. */
        uint32_t msbir                 : 3;  /**< [  2:  0](RO/H) VF migration state BIR. */
#else /* Word 0 - Little Endian */
        uint32_t msbir                 : 3;  /**< [  2:  0](RO/H) VF migration state BIR. */
        uint32_t mso                   : 29; /**< [ 31:  3](RO/H) VF migration state offset. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_sriov_ms_s cn; */
};
typedef union cavm_pcieepx_sriov_ms cavm_pcieepx_sriov_ms_t;

static inline uint64_t CAVM_PCIEEPX_SRIOV_MS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_SRIOV_MS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x224 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x224 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x224 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x224 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_SRIOV_MS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_SRIOV_MS(a) cavm_pcieepx_sriov_ms_t
#define bustype_CAVM_PCIEEPX_SRIOV_MS(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_SRIOV_MS(a) "PCIEEPX_SRIOV_MS"
#define busnum_CAVM_PCIEEPX_SRIOV_MS(a) (a)
#define arguments_CAVM_PCIEEPX_SRIOV_MS(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_sriov_nvf
 *
 * PCIe EP PF SR-IOV Number of VFs Register/SR-IOV Function Dependency Link Register
 */
union cavm_pcieepx_sriov_nvf
{
    uint32_t u;
    struct cavm_pcieepx_sriov_nvf_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_24_31        : 8;
        uint32_t fdl                   : 8;  /**< [ 23: 16](RO/H) Function dependency link. Enables support for VF dependency link. */
        uint32_t nvf                   : 16; /**< [ 15:  0](R/W) Number of VFs that are visible. */
#else /* Word 0 - Little Endian */
        uint32_t nvf                   : 16; /**< [ 15:  0](R/W) Number of VFs that are visible. */
        uint32_t fdl                   : 8;  /**< [ 23: 16](RO/H) Function dependency link. Enables support for VF dependency link. */
        uint32_t reserved_24_31        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_sriov_nvf_s cn; */
};
typedef union cavm_pcieepx_sriov_nvf cavm_pcieepx_sriov_nvf_t;

static inline uint64_t CAVM_PCIEEPX_SRIOV_NVF(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_SRIOV_NVF(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x1f8 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x1f8 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x1f8 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x1f8 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_SRIOV_NVF", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_SRIOV_NVF(a) cavm_pcieepx_sriov_nvf_t
#define bustype_CAVM_PCIEEPX_SRIOV_NVF(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_SRIOV_NVF(a) "PCIEEPX_SRIOV_NVF"
#define busnum_CAVM_PCIEEPX_SRIOV_NVF(a) (a)
#define arguments_CAVM_PCIEEPX_SRIOV_NVF(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_sriov_ps
 *
 * PCIe EP PF SR-IOV System Page Sizes Register
 */
union cavm_pcieepx_sriov_ps
{
    uint32_t u;
    struct cavm_pcieepx_sriov_ps_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t ps                    : 32; /**< [ 31:  0](R/W) System page size. */
#else /* Word 0 - Little Endian */
        uint32_t ps                    : 32; /**< [ 31:  0](R/W) System page size. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_sriov_ps_s cn; */
};
typedef union cavm_pcieepx_sriov_ps cavm_pcieepx_sriov_ps_t;

static inline uint64_t CAVM_PCIEEPX_SRIOV_PS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_SRIOV_PS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x208 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x208 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x208 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x208 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_SRIOV_PS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_SRIOV_PS(a) cavm_pcieepx_sriov_ps_t
#define bustype_CAVM_PCIEEPX_SRIOV_PS(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_SRIOV_PS(a) "PCIEEPX_SRIOV_PS"
#define busnum_CAVM_PCIEEPX_SRIOV_PS(a) (a)
#define arguments_CAVM_PCIEEPX_SRIOV_PS(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_sriov_supps
 *
 * PCIe EP PF SR-IOV Supported Page Sizes Register
 */
union cavm_pcieepx_sriov_supps
{
    uint32_t u;
    struct cavm_pcieepx_sriov_supps_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t supps                 : 32; /**< [ 31:  0](RO/H) Supported page sizes. */
#else /* Word 0 - Little Endian */
        uint32_t supps                 : 32; /**< [ 31:  0](RO/H) Supported page sizes. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_sriov_supps_s cn; */
};
typedef union cavm_pcieepx_sriov_supps cavm_pcieepx_sriov_supps_t;

static inline uint64_t CAVM_PCIEEPX_SRIOV_SUPPS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_SRIOV_SUPPS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x204 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x204 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x204 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x204 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_SRIOV_SUPPS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_SRIOV_SUPPS(a) cavm_pcieepx_sriov_supps_t
#define bustype_CAVM_PCIEEPX_SRIOV_SUPPS(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_SRIOV_SUPPS(a) "PCIEEPX_SRIOV_SUPPS"
#define busnum_CAVM_PCIEEPX_SRIOV_SUPPS(a) (a)
#define arguments_CAVM_PCIEEPX_SRIOV_SUPPS(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_sriov_vfs
 *
 * PCIe EP PF SR-IOV Initial VFs/Total VFs Register
 */
union cavm_pcieepx_sriov_vfs
{
    uint32_t u;
    struct cavm_pcieepx_sriov_vfs_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t tvf                   : 16; /**< [ 31: 16](RO) Total VFs.  Read-only copy of PCIEEP_SRIOV_VFS[IVF]. */
        uint32_t ivf                   : 16; /**< [ 15:  0](RO/WRSL) Initial VFs.
                                                                 This field is writable through PEM()_CFG_TBL().

                                                                 Reset values:
                                                                 _ UPEM:       0x20.
                                                                 _ BPEM:       0x2. */
#else /* Word 0 - Little Endian */
        uint32_t ivf                   : 16; /**< [ 15:  0](RO/WRSL) Initial VFs.
                                                                 This field is writable through PEM()_CFG_TBL().

                                                                 Reset values:
                                                                 _ UPEM:       0x20.
                                                                 _ BPEM:       0x2. */
        uint32_t tvf                   : 16; /**< [ 31: 16](RO) Total VFs.  Read-only copy of PCIEEP_SRIOV_VFS[IVF]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_sriov_vfs_s cn; */
};
typedef union cavm_pcieepx_sriov_vfs cavm_pcieepx_sriov_vfs_t;

static inline uint64_t CAVM_PCIEEPX_SRIOV_VFS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_SRIOV_VFS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x1f4 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x1f4 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x1f4 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x1f4 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_SRIOV_VFS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_SRIOV_VFS(a) cavm_pcieepx_sriov_vfs_t
#define bustype_CAVM_PCIEEPX_SRIOV_VFS(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_SRIOV_VFS(a) "PCIEEPX_SRIOV_VFS"
#define busnum_CAVM_PCIEEPX_SRIOV_VFS(a) (a)
#define arguments_CAVM_PCIEEPX_SRIOV_VFS(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_subsys
 *
 * PCIe EP PF SubSystem ID/Subsystem Vendor ID Register
 */
union cavm_pcieepx_subsys
{
    uint32_t u;
    struct cavm_pcieepx_subsys_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t ssid                  : 16; /**< [ 31: 16](RO/WRSL) Subsystem ID.
                                                                 Assigned by PCI-SIG, writable through PEM()_CFG_TBL(). */
        uint32_t ssvid                 : 16; /**< [ 15:  0](RO/WRSL) Subsystem vendor ID.
                                                                 Assigned by PCI-SIG, writable through PEM()_CFG_TBL(). */
#else /* Word 0 - Little Endian */
        uint32_t ssvid                 : 16; /**< [ 15:  0](RO/WRSL) Subsystem vendor ID.
                                                                 Assigned by PCI-SIG, writable through PEM()_CFG_TBL(). */
        uint32_t ssid                  : 16; /**< [ 31: 16](RO/WRSL) Subsystem ID.
                                                                 Assigned by PCI-SIG, writable through PEM()_CFG_TBL(). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_subsys_s cn; */
};
typedef union cavm_pcieepx_subsys cavm_pcieepx_subsys_t;

static inline uint64_t CAVM_PCIEEPX_SUBSYS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_SUBSYS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x2c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x2c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x2c + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x2c + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_SUBSYS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_SUBSYS(a) cavm_pcieepx_subsys_t
#define bustype_CAVM_PCIEEPX_SUBSYS(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_SUBSYS(a) "PCIEEPX_SUBSYS"
#define busnum_CAVM_PCIEEPX_SUBSYS(a) (a)
#define arguments_CAVM_PCIEEPX_SUBSYS(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_symb_timer
 *
 * PCIe EP PF Symbol Timer/Filter Mask Register 1
 */
union cavm_pcieepx_symb_timer
{
    uint32_t u;
    struct cavm_pcieepx_symb_timer_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t m_cfg0_filt           : 1;  /**< [ 31: 31](R/W) Mask filtering of received configuration requests (RC mode only). */
        uint32_t m_io_filt             : 1;  /**< [ 30: 30](R/W) Mask filtering of received I/O requests (RC mode only). */
        uint32_t msg_ctrl              : 1;  /**< [ 29: 29](R/W) Message control. The application must not change this field. */
        uint32_t m_cpl_ecrc_filt       : 1;  /**< [ 28: 28](R/W) Mask ECRC error filtering for completions. */
        uint32_t m_ecrc_filt           : 1;  /**< [ 27: 27](R/W) Mask ECRC error filtering. */
        uint32_t m_cpl_len_err         : 1;  /**< [ 26: 26](R/W) Mask length mismatch error for received completions. */
        uint32_t m_cpl_attr_err        : 1;  /**< [ 25: 25](R/W) Mask attributes mismatch error for received completions. */
        uint32_t m_cpl_tc_err          : 1;  /**< [ 24: 24](R/W) Mask traffic class mismatch error for received completions. */
        uint32_t m_cpl_fun_err         : 1;  /**< [ 23: 23](R/W) Mask function mismatch error for received completions. */
        uint32_t m_cpl_rid_err         : 1;  /**< [ 22: 22](R/W) Mask requester ID mismatch error for received completions. */
        uint32_t m_cpl_tag_err         : 1;  /**< [ 21: 21](R/W) Mask tag error rules for received completions. */
        uint32_t m_lk_filt             : 1;  /**< [ 20: 20](R/W) Mask locked request filtering. */
        uint32_t m_cfg1_filt           : 1;  /**< [ 19: 19](R/W) Mask type 1 configuration request filtering. */
        uint32_t m_bar_match           : 1;  /**< [ 18: 18](R/W) Mask BAR match filtering. */
        uint32_t m_pois_filt           : 1;  /**< [ 17: 17](R/W) Mask poisoned TLP filtering. */
        uint32_t m_fun                 : 1;  /**< [ 16: 16](R/W) Mask function. */
        uint32_t dfcwt                 : 1;  /**< [ 15: 15](R/W) Disable FC watchdog timer. */
        uint32_t eidle_timer           : 4;  /**< [ 14: 11](RO/H) an internally reserved field.  Do not use. */
        uint32_t skpiv                 : 11; /**< [ 10:  0](R/W) SKP interval value.  The number of symbol times to wait
                                                                 between transmitting SKP ordered sets. Note that the
                                                                 controller actually waits the number of symbol times in this
                                                                 register plus one between transmitting SKP ordered sets.

                                                                 This value is not used at Gen3 speed; the skip interval
                                                                 is hardcoded to 370 blocks. */
#else /* Word 0 - Little Endian */
        uint32_t skpiv                 : 11; /**< [ 10:  0](R/W) SKP interval value.  The number of symbol times to wait
                                                                 between transmitting SKP ordered sets. Note that the
                                                                 controller actually waits the number of symbol times in this
                                                                 register plus one between transmitting SKP ordered sets.

                                                                 This value is not used at Gen3 speed; the skip interval
                                                                 is hardcoded to 370 blocks. */
        uint32_t eidle_timer           : 4;  /**< [ 14: 11](RO/H) an internally reserved field.  Do not use. */
        uint32_t dfcwt                 : 1;  /**< [ 15: 15](R/W) Disable FC watchdog timer. */
        uint32_t m_fun                 : 1;  /**< [ 16: 16](R/W) Mask function. */
        uint32_t m_pois_filt           : 1;  /**< [ 17: 17](R/W) Mask poisoned TLP filtering. */
        uint32_t m_bar_match           : 1;  /**< [ 18: 18](R/W) Mask BAR match filtering. */
        uint32_t m_cfg1_filt           : 1;  /**< [ 19: 19](R/W) Mask type 1 configuration request filtering. */
        uint32_t m_lk_filt             : 1;  /**< [ 20: 20](R/W) Mask locked request filtering. */
        uint32_t m_cpl_tag_err         : 1;  /**< [ 21: 21](R/W) Mask tag error rules for received completions. */
        uint32_t m_cpl_rid_err         : 1;  /**< [ 22: 22](R/W) Mask requester ID mismatch error for received completions. */
        uint32_t m_cpl_fun_err         : 1;  /**< [ 23: 23](R/W) Mask function mismatch error for received completions. */
        uint32_t m_cpl_tc_err          : 1;  /**< [ 24: 24](R/W) Mask traffic class mismatch error for received completions. */
        uint32_t m_cpl_attr_err        : 1;  /**< [ 25: 25](R/W) Mask attributes mismatch error for received completions. */
        uint32_t m_cpl_len_err         : 1;  /**< [ 26: 26](R/W) Mask length mismatch error for received completions. */
        uint32_t m_ecrc_filt           : 1;  /**< [ 27: 27](R/W) Mask ECRC error filtering. */
        uint32_t m_cpl_ecrc_filt       : 1;  /**< [ 28: 28](R/W) Mask ECRC error filtering for completions. */
        uint32_t msg_ctrl              : 1;  /**< [ 29: 29](R/W) Message control. The application must not change this field. */
        uint32_t m_io_filt             : 1;  /**< [ 30: 30](R/W) Mask filtering of received I/O requests (RC mode only). */
        uint32_t m_cfg0_filt           : 1;  /**< [ 31: 31](R/W) Mask filtering of received configuration requests (RC mode only). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_symb_timer_s cn; */
};
typedef union cavm_pcieepx_symb_timer cavm_pcieepx_symb_timer_t;

static inline uint64_t CAVM_PCIEEPX_SYMB_TIMER(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_SYMB_TIMER(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x71c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x71c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x71c + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x71c + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_SYMB_TIMER", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_SYMB_TIMER(a) cavm_pcieepx_symb_timer_t
#define bustype_CAVM_PCIEEPX_SYMB_TIMER(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_SYMB_TIMER(a) "PCIEEPX_SYMB_TIMER"
#define busnum_CAVM_PCIEEPX_SYMB_TIMER(a) (a)
#define arguments_CAVM_PCIEEPX_SYMB_TIMER(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_timer_ctl
 *
 * PCIe EP PF Timer Control and Max Function Number Register
 */
union cavm_pcieepx_timer_ctl
{
    uint32_t u;
    struct cavm_pcieepx_timer_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_31           : 1;
        uint32_t flmsf                 : 2;  /**< [ 30: 29](R/W) Fast link timer scaling factor. Sets the scaling factor of
                                                                 LTSSM timer when PCIEEP_PORT_CTL[FLM] is set.
                                                                 0x0 = Scaling factor is 1024 (1 ms is 1 us).
                                                                 0x1 = Scaling factor is 256 (1 ms is 4 us).
                                                                 0x2 = Scaling factor is 64 (1 ms is 16 us).
                                                                 0x3 = Scaling factor is 16 (1 ms is 64 us). */
        uint32_t updft                 : 5;  /**< [ 28: 24](R/W) Update frequency timer.  This is an internally reserved field, do not use. */
        uint32_t tmanlt                : 5;  /**< [ 23: 19](R/W) Timer modifier for ACK/NAK latency timer. Increases the timer value for the ACK/NAK
                                                                 latency timer, in increments of 64 clock cycles. */
        uint32_t tmrt                  : 5;  /**< [ 18: 14](R/W/H) Timer modifier for replay timer. Increases the timer value for the replay timer, in
                                                                 increments of 64 clock cycles. */
        uint32_t reserved_8_13         : 6;
        uint32_t mfuncn                : 8;  /**< [  7:  0](R/W/H) Max number of functions supported. Used for SR-IOV.

                                                                 Reset values:
                                                                 _ UPEM:      0x1.
                                                                 _ BPEM:      0x0. */
#else /* Word 0 - Little Endian */
        uint32_t mfuncn                : 8;  /**< [  7:  0](R/W/H) Max number of functions supported. Used for SR-IOV.

                                                                 Reset values:
                                                                 _ UPEM:      0x1.
                                                                 _ BPEM:      0x0. */
        uint32_t reserved_8_13         : 6;
        uint32_t tmrt                  : 5;  /**< [ 18: 14](R/W/H) Timer modifier for replay timer. Increases the timer value for the replay timer, in
                                                                 increments of 64 clock cycles. */
        uint32_t tmanlt                : 5;  /**< [ 23: 19](R/W) Timer modifier for ACK/NAK latency timer. Increases the timer value for the ACK/NAK
                                                                 latency timer, in increments of 64 clock cycles. */
        uint32_t updft                 : 5;  /**< [ 28: 24](R/W) Update frequency timer.  This is an internally reserved field, do not use. */
        uint32_t flmsf                 : 2;  /**< [ 30: 29](R/W) Fast link timer scaling factor. Sets the scaling factor of
                                                                 LTSSM timer when PCIEEP_PORT_CTL[FLM] is set.
                                                                 0x0 = Scaling factor is 1024 (1 ms is 1 us).
                                                                 0x1 = Scaling factor is 256 (1 ms is 4 us).
                                                                 0x2 = Scaling factor is 64 (1 ms is 16 us).
                                                                 0x3 = Scaling factor is 16 (1 ms is 64 us). */
        uint32_t reserved_31           : 1;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_timer_ctl_s cn; */
};
typedef union cavm_pcieepx_timer_ctl cavm_pcieepx_timer_ctl_t;

static inline uint64_t CAVM_PCIEEPX_TIMER_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_TIMER_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x718 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x718 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x718 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x718 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_TIMER_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_TIMER_CTL(a) cavm_pcieepx_timer_ctl_t
#define bustype_CAVM_PCIEEPX_TIMER_CTL(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_TIMER_CTL(a) "PCIEEPX_TIMER_CTL"
#define busnum_CAVM_PCIEEPX_TIMER_CTL(a) (a)
#define arguments_CAVM_PCIEEPX_TIMER_CTL(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_tlp_plog1
 *
 * PCIe EP PF TLP Prefix Log Register 1
 */
union cavm_pcieepx_tlp_plog1
{
    uint32_t u;
    struct cavm_pcieepx_tlp_plog1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t dword1                : 32; /**< [ 31:  0](RO/H) TLP prefix log register (first DWORD). */
#else /* Word 0 - Little Endian */
        uint32_t dword1                : 32; /**< [ 31:  0](RO/H) TLP prefix log register (first DWORD). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_tlp_plog1_s cn; */
};
typedef union cavm_pcieepx_tlp_plog1 cavm_pcieepx_tlp_plog1_t;

static inline uint64_t CAVM_PCIEEPX_TLP_PLOG1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_TLP_PLOG1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x138 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x138 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x138 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x138 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_TLP_PLOG1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_TLP_PLOG1(a) cavm_pcieepx_tlp_plog1_t
#define bustype_CAVM_PCIEEPX_TLP_PLOG1(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_TLP_PLOG1(a) "PCIEEPX_TLP_PLOG1"
#define busnum_CAVM_PCIEEPX_TLP_PLOG1(a) (a)
#define arguments_CAVM_PCIEEPX_TLP_PLOG1(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_tlp_plog2
 *
 * PCIe EP PF TLP Prefix Log Register 2
 */
union cavm_pcieepx_tlp_plog2
{
    uint32_t u;
    struct cavm_pcieepx_tlp_plog2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t dword2                : 32; /**< [ 31:  0](RO/H) TLP prefix log register (second DWORD). */
#else /* Word 0 - Little Endian */
        uint32_t dword2                : 32; /**< [ 31:  0](RO/H) TLP prefix log register (second DWORD). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_tlp_plog2_s cn; */
};
typedef union cavm_pcieepx_tlp_plog2 cavm_pcieepx_tlp_plog2_t;

static inline uint64_t CAVM_PCIEEPX_TLP_PLOG2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_TLP_PLOG2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x13c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x13c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x13c + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x13c + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_TLP_PLOG2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_TLP_PLOG2(a) cavm_pcieepx_tlp_plog2_t
#define bustype_CAVM_PCIEEPX_TLP_PLOG2(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_TLP_PLOG2(a) "PCIEEPX_TLP_PLOG2"
#define busnum_CAVM_PCIEEPX_TLP_PLOG2(a) (a)
#define arguments_CAVM_PCIEEPX_TLP_PLOG2(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_tlp_plog3
 *
 * PCIe EP PF TLP Prefix Log Register 3
 */
union cavm_pcieepx_tlp_plog3
{
    uint32_t u;
    struct cavm_pcieepx_tlp_plog3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t dword3                : 32; /**< [ 31:  0](RO/H) TLP prefix log register (third DWORD). */
#else /* Word 0 - Little Endian */
        uint32_t dword3                : 32; /**< [ 31:  0](RO/H) TLP prefix log register (third DWORD). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_tlp_plog3_s cn; */
};
typedef union cavm_pcieepx_tlp_plog3 cavm_pcieepx_tlp_plog3_t;

static inline uint64_t CAVM_PCIEEPX_TLP_PLOG3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_TLP_PLOG3(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x140 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x140 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x140 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x140 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_TLP_PLOG3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_TLP_PLOG3(a) cavm_pcieepx_tlp_plog3_t
#define bustype_CAVM_PCIEEPX_TLP_PLOG3(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_TLP_PLOG3(a) "PCIEEPX_TLP_PLOG3"
#define busnum_CAVM_PCIEEPX_TLP_PLOG3(a) (a)
#define arguments_CAVM_PCIEEPX_TLP_PLOG3(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_tlp_plog4
 *
 * PCIe EP PF TLP Prefix Log Register 4
 */
union cavm_pcieepx_tlp_plog4
{
    uint32_t u;
    struct cavm_pcieepx_tlp_plog4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t dword4                : 32; /**< [ 31:  0](RO/H) TLP prefix log register (fourth DWORD). */
#else /* Word 0 - Little Endian */
        uint32_t dword4                : 32; /**< [ 31:  0](RO/H) TLP prefix log register (fourth DWORD). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_tlp_plog4_s cn; */
};
typedef union cavm_pcieepx_tlp_plog4 cavm_pcieepx_tlp_plog4_t;

static inline uint64_t CAVM_PCIEEPX_TLP_PLOG4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_TLP_PLOG4(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x144 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x144 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x144 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x144 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_TLP_PLOG4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_TLP_PLOG4(a) cavm_pcieepx_tlp_plog4_t
#define bustype_CAVM_PCIEEPX_TLP_PLOG4(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_TLP_PLOG4(a) "PCIEEPX_TLP_PLOG4"
#define busnum_CAVM_PCIEEPX_TLP_PLOG4(a) (a)
#define arguments_CAVM_PCIEEPX_TLP_PLOG4(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ucor_err_msk
 *
 * PCIe EP PF Uncorrectable Error Mask Register
 */
union cavm_pcieepx_ucor_err_msk
{
    uint32_t u;
    struct cavm_pcieepx_ucor_err_msk_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_26_31        : 6;
        uint32_t tpbem                 : 1;  /**< [ 25: 25](RO) TLP prefix blocked error mask (not supported). */
        uint32_t uatombm               : 1;  /**< [ 24: 24](RO) Unsupported AtomicOp egress blocked mask. */
        uint32_t reserved_23           : 1;
        uint32_t uciem                 : 1;  /**< [ 22: 22](R/W) Uncorrectable internal error mask. */
        uint32_t acsvm                 : 1;  /**< [ 21: 21](R/W) ACS violation mask.  Writeable only when PCIEEP_ACS_CAP_CTL[ECE] is set. */
        uint32_t urem                  : 1;  /**< [ 20: 20](R/W) Unsupported request error mask. */
        uint32_t ecrcem                : 1;  /**< [ 19: 19](R/W) ECRC error mask. */
        uint32_t mtlpm                 : 1;  /**< [ 18: 18](R/W) Malformed TLP mask. */
        uint32_t rom                   : 1;  /**< [ 17: 17](R/W) Receiver overflow mask. */
        uint32_t ucm                   : 1;  /**< [ 16: 16](R/W) Unexpected completion mask. */
        uint32_t cam                   : 1;  /**< [ 15: 15](R/W) Completer abort mask. */
        uint32_t ctm                   : 1;  /**< [ 14: 14](R/W) Completion timeout mask. */
        uint32_t fcpem                 : 1;  /**< [ 13: 13](R/W) Flow control protocol error mask. */
        uint32_t ptlpm                 : 1;  /**< [ 12: 12](R/W) Poisoned TLP mask. */
        uint32_t reserved_6_11         : 6;
        uint32_t sdem                  : 1;  /**< [  5:  5](RO) Surprise down error mask. Set to 0 for endpoint devices. */
        uint32_t dlpem                 : 1;  /**< [  4:  4](R/W) Data link protocol error mask. */
        uint32_t reserved_0_3          : 4;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_3          : 4;
        uint32_t dlpem                 : 1;  /**< [  4:  4](R/W) Data link protocol error mask. */
        uint32_t sdem                  : 1;  /**< [  5:  5](RO) Surprise down error mask. Set to 0 for endpoint devices. */
        uint32_t reserved_6_11         : 6;
        uint32_t ptlpm                 : 1;  /**< [ 12: 12](R/W) Poisoned TLP mask. */
        uint32_t fcpem                 : 1;  /**< [ 13: 13](R/W) Flow control protocol error mask. */
        uint32_t ctm                   : 1;  /**< [ 14: 14](R/W) Completion timeout mask. */
        uint32_t cam                   : 1;  /**< [ 15: 15](R/W) Completer abort mask. */
        uint32_t ucm                   : 1;  /**< [ 16: 16](R/W) Unexpected completion mask. */
        uint32_t rom                   : 1;  /**< [ 17: 17](R/W) Receiver overflow mask. */
        uint32_t mtlpm                 : 1;  /**< [ 18: 18](R/W) Malformed TLP mask. */
        uint32_t ecrcem                : 1;  /**< [ 19: 19](R/W) ECRC error mask. */
        uint32_t urem                  : 1;  /**< [ 20: 20](R/W) Unsupported request error mask. */
        uint32_t acsvm                 : 1;  /**< [ 21: 21](R/W) ACS violation mask.  Writeable only when PCIEEP_ACS_CAP_CTL[ECE] is set. */
        uint32_t uciem                 : 1;  /**< [ 22: 22](R/W) Uncorrectable internal error mask. */
        uint32_t reserved_23           : 1;
        uint32_t uatombm               : 1;  /**< [ 24: 24](RO) Unsupported AtomicOp egress blocked mask. */
        uint32_t tpbem                 : 1;  /**< [ 25: 25](RO) TLP prefix blocked error mask (not supported). */
        uint32_t reserved_26_31        : 6;
#endif /* Word 0 - End */
    } s;
    struct cavm_pcieepx_ucor_err_msk_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_26_31        : 6;
        uint32_t tpbem                 : 1;  /**< [ 25: 25](RO) TLP prefix blocked error mask (not supported). */
        uint32_t uatombm               : 1;  /**< [ 24: 24](RO) Unsupported AtomicOp egress blocked mask. */
        uint32_t reserved_23           : 1;
        uint32_t uciem                 : 1;  /**< [ 22: 22](R/W) Uncorrectable internal error mask. */
        uint32_t acsvm                 : 1;  /**< [ 21: 21](R/W) ACS violation mask.  Writeable only when PCIEEP_ACS_CAP_CTL[ECE] is set. */
        uint32_t urem                  : 1;  /**< [ 20: 20](R/W) Unsupported request error mask. */
        uint32_t ecrcem                : 1;  /**< [ 19: 19](R/W) ECRC error mask. */
        uint32_t mtlpm                 : 1;  /**< [ 18: 18](R/W) Malformed TLP mask. */
        uint32_t rom                   : 1;  /**< [ 17: 17](R/W) Receiver overflow mask. */
        uint32_t ucm                   : 1;  /**< [ 16: 16](R/W) Unexpected completion mask. */
        uint32_t cam                   : 1;  /**< [ 15: 15](R/W) Completer abort mask. */
        uint32_t ctm                   : 1;  /**< [ 14: 14](R/W) Completion timeout mask. */
        uint32_t fcpem                 : 1;  /**< [ 13: 13](R/W) Flow control protocol error mask. */
        uint32_t ptlpm                 : 1;  /**< [ 12: 12](R/W) Poisoned TLP mask. */
        uint32_t reserved_6_11         : 6;
        uint32_t sdem                  : 1;  /**< [  5:  5](RO) Surprise down error mask. Set to 0 for endpoint devices. */
        uint32_t dlpem                 : 1;  /**< [  4:  4](R/W) Data link protocol error mask. */
        uint32_t reserved_1_3          : 3;
        uint32_t reserved_0            : 1;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0            : 1;
        uint32_t reserved_1_3          : 3;
        uint32_t dlpem                 : 1;  /**< [  4:  4](R/W) Data link protocol error mask. */
        uint32_t sdem                  : 1;  /**< [  5:  5](RO) Surprise down error mask. Set to 0 for endpoint devices. */
        uint32_t reserved_6_11         : 6;
        uint32_t ptlpm                 : 1;  /**< [ 12: 12](R/W) Poisoned TLP mask. */
        uint32_t fcpem                 : 1;  /**< [ 13: 13](R/W) Flow control protocol error mask. */
        uint32_t ctm                   : 1;  /**< [ 14: 14](R/W) Completion timeout mask. */
        uint32_t cam                   : 1;  /**< [ 15: 15](R/W) Completer abort mask. */
        uint32_t ucm                   : 1;  /**< [ 16: 16](R/W) Unexpected completion mask. */
        uint32_t rom                   : 1;  /**< [ 17: 17](R/W) Receiver overflow mask. */
        uint32_t mtlpm                 : 1;  /**< [ 18: 18](R/W) Malformed TLP mask. */
        uint32_t ecrcem                : 1;  /**< [ 19: 19](R/W) ECRC error mask. */
        uint32_t urem                  : 1;  /**< [ 20: 20](R/W) Unsupported request error mask. */
        uint32_t acsvm                 : 1;  /**< [ 21: 21](R/W) ACS violation mask.  Writeable only when PCIEEP_ACS_CAP_CTL[ECE] is set. */
        uint32_t uciem                 : 1;  /**< [ 22: 22](R/W) Uncorrectable internal error mask. */
        uint32_t reserved_23           : 1;
        uint32_t uatombm               : 1;  /**< [ 24: 24](RO) Unsupported AtomicOp egress blocked mask. */
        uint32_t tpbem                 : 1;  /**< [ 25: 25](RO) TLP prefix blocked error mask (not supported). */
        uint32_t reserved_26_31        : 6;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pcieepx_ucor_err_msk cavm_pcieepx_ucor_err_msk_t;

static inline uint64_t CAVM_PCIEEPX_UCOR_ERR_MSK(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_UCOR_ERR_MSK(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x108 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x108 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x108 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x108 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_UCOR_ERR_MSK", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_UCOR_ERR_MSK(a) cavm_pcieepx_ucor_err_msk_t
#define bustype_CAVM_PCIEEPX_UCOR_ERR_MSK(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_UCOR_ERR_MSK(a) "PCIEEPX_UCOR_ERR_MSK"
#define busnum_CAVM_PCIEEPX_UCOR_ERR_MSK(a) (a)
#define arguments_CAVM_PCIEEPX_UCOR_ERR_MSK(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ucor_err_sev
 *
 * PCIe EP PF Uncorrectable Error Severity Register
 */
union cavm_pcieepx_ucor_err_sev
{
    uint32_t u;
    struct cavm_pcieepx_ucor_err_sev_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_26_31        : 6;
        uint32_t tpbes                 : 1;  /**< [ 25: 25](RO) TLP prefix blocked error severity (not supported). */
        uint32_t uatombs               : 1;  /**< [ 24: 24](RO) Unsupported AtomicOp egress blocked severity. */
        uint32_t reserved_23           : 1;
        uint32_t ucies                 : 1;  /**< [ 22: 22](R/W) Uncorrectable internal error severity. */
        uint32_t avs                   : 1;  /**< [ 21: 21](R/W) AVCS violation severity. */
        uint32_t ures                  : 1;  /**< [ 20: 20](R/W) Unsupported request error severity. */
        uint32_t ecrces                : 1;  /**< [ 19: 19](R/W) ECRC error severity. */
        uint32_t mtlps                 : 1;  /**< [ 18: 18](R/W) Malformed TLP severity. */
        uint32_t ros                   : 1;  /**< [ 17: 17](R/W) Receiver overflow severity. */
        uint32_t ucs                   : 1;  /**< [ 16: 16](R/W) Unexpected completion severity. */
        uint32_t cas                   : 1;  /**< [ 15: 15](R/W) Completer abort severity. */
        uint32_t cts                   : 1;  /**< [ 14: 14](R/W) Completion timeout severity. */
        uint32_t fcpes                 : 1;  /**< [ 13: 13](R/W) Flow control protocol error severity. */
        uint32_t ptlps                 : 1;  /**< [ 12: 12](R/W) Poisoned TLP severity. */
        uint32_t reserved_6_11         : 6;
        uint32_t sdes                  : 1;  /**< [  5:  5](RO) Surprise down error severity. Set to 1 for endpoint devices. */
        uint32_t dlpes                 : 1;  /**< [  4:  4](R/W) Data link protocol error severity. */
        uint32_t reserved_0_3          : 4;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_3          : 4;
        uint32_t dlpes                 : 1;  /**< [  4:  4](R/W) Data link protocol error severity. */
        uint32_t sdes                  : 1;  /**< [  5:  5](RO) Surprise down error severity. Set to 1 for endpoint devices. */
        uint32_t reserved_6_11         : 6;
        uint32_t ptlps                 : 1;  /**< [ 12: 12](R/W) Poisoned TLP severity. */
        uint32_t fcpes                 : 1;  /**< [ 13: 13](R/W) Flow control protocol error severity. */
        uint32_t cts                   : 1;  /**< [ 14: 14](R/W) Completion timeout severity. */
        uint32_t cas                   : 1;  /**< [ 15: 15](R/W) Completer abort severity. */
        uint32_t ucs                   : 1;  /**< [ 16: 16](R/W) Unexpected completion severity. */
        uint32_t ros                   : 1;  /**< [ 17: 17](R/W) Receiver overflow severity. */
        uint32_t mtlps                 : 1;  /**< [ 18: 18](R/W) Malformed TLP severity. */
        uint32_t ecrces                : 1;  /**< [ 19: 19](R/W) ECRC error severity. */
        uint32_t ures                  : 1;  /**< [ 20: 20](R/W) Unsupported request error severity. */
        uint32_t avs                   : 1;  /**< [ 21: 21](R/W) AVCS violation severity. */
        uint32_t ucies                 : 1;  /**< [ 22: 22](R/W) Uncorrectable internal error severity. */
        uint32_t reserved_23           : 1;
        uint32_t uatombs               : 1;  /**< [ 24: 24](RO) Unsupported AtomicOp egress blocked severity. */
        uint32_t tpbes                 : 1;  /**< [ 25: 25](RO) TLP prefix blocked error severity (not supported). */
        uint32_t reserved_26_31        : 6;
#endif /* Word 0 - End */
    } s;
    struct cavm_pcieepx_ucor_err_sev_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_26_31        : 6;
        uint32_t tpbes                 : 1;  /**< [ 25: 25](RO) TLP prefix blocked error severity (not supported). */
        uint32_t uatombs               : 1;  /**< [ 24: 24](RO) Unsupported AtomicOp egress blocked severity. */
        uint32_t reserved_23           : 1;
        uint32_t ucies                 : 1;  /**< [ 22: 22](R/W) Uncorrectable internal error severity. */
        uint32_t avs                   : 1;  /**< [ 21: 21](R/W) AVCS violation severity. */
        uint32_t ures                  : 1;  /**< [ 20: 20](R/W) Unsupported request error severity. */
        uint32_t ecrces                : 1;  /**< [ 19: 19](R/W) ECRC error severity. */
        uint32_t mtlps                 : 1;  /**< [ 18: 18](R/W) Malformed TLP severity. */
        uint32_t ros                   : 1;  /**< [ 17: 17](R/W) Receiver overflow severity. */
        uint32_t ucs                   : 1;  /**< [ 16: 16](R/W) Unexpected completion severity. */
        uint32_t cas                   : 1;  /**< [ 15: 15](R/W) Completer abort severity. */
        uint32_t cts                   : 1;  /**< [ 14: 14](R/W) Completion timeout severity. */
        uint32_t fcpes                 : 1;  /**< [ 13: 13](R/W) Flow control protocol error severity. */
        uint32_t ptlps                 : 1;  /**< [ 12: 12](R/W) Poisoned TLP severity. */
        uint32_t reserved_6_11         : 6;
        uint32_t sdes                  : 1;  /**< [  5:  5](RO) Surprise down error severity. Set to 1 for endpoint devices. */
        uint32_t dlpes                 : 1;  /**< [  4:  4](R/W) Data link protocol error severity. */
        uint32_t reserved_1_3          : 3;
        uint32_t reserved_0            : 1;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0            : 1;
        uint32_t reserved_1_3          : 3;
        uint32_t dlpes                 : 1;  /**< [  4:  4](R/W) Data link protocol error severity. */
        uint32_t sdes                  : 1;  /**< [  5:  5](RO) Surprise down error severity. Set to 1 for endpoint devices. */
        uint32_t reserved_6_11         : 6;
        uint32_t ptlps                 : 1;  /**< [ 12: 12](R/W) Poisoned TLP severity. */
        uint32_t fcpes                 : 1;  /**< [ 13: 13](R/W) Flow control protocol error severity. */
        uint32_t cts                   : 1;  /**< [ 14: 14](R/W) Completion timeout severity. */
        uint32_t cas                   : 1;  /**< [ 15: 15](R/W) Completer abort severity. */
        uint32_t ucs                   : 1;  /**< [ 16: 16](R/W) Unexpected completion severity. */
        uint32_t ros                   : 1;  /**< [ 17: 17](R/W) Receiver overflow severity. */
        uint32_t mtlps                 : 1;  /**< [ 18: 18](R/W) Malformed TLP severity. */
        uint32_t ecrces                : 1;  /**< [ 19: 19](R/W) ECRC error severity. */
        uint32_t ures                  : 1;  /**< [ 20: 20](R/W) Unsupported request error severity. */
        uint32_t avs                   : 1;  /**< [ 21: 21](R/W) AVCS violation severity. */
        uint32_t ucies                 : 1;  /**< [ 22: 22](R/W) Uncorrectable internal error severity. */
        uint32_t reserved_23           : 1;
        uint32_t uatombs               : 1;  /**< [ 24: 24](RO) Unsupported AtomicOp egress blocked severity. */
        uint32_t tpbes                 : 1;  /**< [ 25: 25](RO) TLP prefix blocked error severity (not supported). */
        uint32_t reserved_26_31        : 6;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pcieepx_ucor_err_sev cavm_pcieepx_ucor_err_sev_t;

static inline uint64_t CAVM_PCIEEPX_UCOR_ERR_SEV(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_UCOR_ERR_SEV(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x10c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x10c + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x10c + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x10c + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_UCOR_ERR_SEV", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_UCOR_ERR_SEV(a) cavm_pcieepx_ucor_err_sev_t
#define bustype_CAVM_PCIEEPX_UCOR_ERR_SEV(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_UCOR_ERR_SEV(a) "PCIEEPX_UCOR_ERR_SEV"
#define busnum_CAVM_PCIEEPX_UCOR_ERR_SEV(a) (a)
#define arguments_CAVM_PCIEEPX_UCOR_ERR_SEV(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ucor_err_stat
 *
 * PCIe EP PF Uncorrectable Error Status Register
 */
union cavm_pcieepx_ucor_err_stat
{
    uint32_t u;
    struct cavm_pcieepx_ucor_err_stat_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_26_31        : 6;
        uint32_t tpbes                 : 1;  /**< [ 25: 25](R/W1C/H) Unsupported TLP prefix blocked error status. */
        uint32_t uatombs               : 1;  /**< [ 24: 24](R/W1C/H) Unsupported AtomicOp egress blocked status. */
        uint32_t reserved_23           : 1;
        uint32_t ucies                 : 1;  /**< [ 22: 22](R/W1C/H) Uncorrectable internal error status. */
        uint32_t avs                   : 1;  /**< [ 21: 21](R/W1C/H) ACS violation status. */
        uint32_t ures                  : 1;  /**< [ 20: 20](R/W1C/H) Unsupported request error status. */
        uint32_t ecrces                : 1;  /**< [ 19: 19](R/W1C/H) ECRC error status. */
        uint32_t mtlps                 : 1;  /**< [ 18: 18](R/W1C/H) Malformed TLP status. */
        uint32_t ros                   : 1;  /**< [ 17: 17](R/W1C/H) Receiver overflow status. */
        uint32_t ucs                   : 1;  /**< [ 16: 16](R/W1C/H) Unexpected completion status. */
        uint32_t cas                   : 1;  /**< [ 15: 15](R/W1C/H) Completer abort status. */
        uint32_t cts                   : 1;  /**< [ 14: 14](R/W1C/H) Completion timeout status. */
        uint32_t fcpes                 : 1;  /**< [ 13: 13](R/W1C/H) Flow control protocol error status. */
        uint32_t ptlps                 : 1;  /**< [ 12: 12](R/W1C/H) Poisoned TLP status. */
        uint32_t reserved_6_11         : 6;
        uint32_t sdes                  : 1;  /**< [  5:  5](R/W1C/H) Surprise link down error status. */
        uint32_t dlpes                 : 1;  /**< [  4:  4](R/W1C/H) Data link protocol error status. */
        uint32_t reserved_0_3          : 4;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_3          : 4;
        uint32_t dlpes                 : 1;  /**< [  4:  4](R/W1C/H) Data link protocol error status. */
        uint32_t sdes                  : 1;  /**< [  5:  5](R/W1C/H) Surprise link down error status. */
        uint32_t reserved_6_11         : 6;
        uint32_t ptlps                 : 1;  /**< [ 12: 12](R/W1C/H) Poisoned TLP status. */
        uint32_t fcpes                 : 1;  /**< [ 13: 13](R/W1C/H) Flow control protocol error status. */
        uint32_t cts                   : 1;  /**< [ 14: 14](R/W1C/H) Completion timeout status. */
        uint32_t cas                   : 1;  /**< [ 15: 15](R/W1C/H) Completer abort status. */
        uint32_t ucs                   : 1;  /**< [ 16: 16](R/W1C/H) Unexpected completion status. */
        uint32_t ros                   : 1;  /**< [ 17: 17](R/W1C/H) Receiver overflow status. */
        uint32_t mtlps                 : 1;  /**< [ 18: 18](R/W1C/H) Malformed TLP status. */
        uint32_t ecrces                : 1;  /**< [ 19: 19](R/W1C/H) ECRC error status. */
        uint32_t ures                  : 1;  /**< [ 20: 20](R/W1C/H) Unsupported request error status. */
        uint32_t avs                   : 1;  /**< [ 21: 21](R/W1C/H) ACS violation status. */
        uint32_t ucies                 : 1;  /**< [ 22: 22](R/W1C/H) Uncorrectable internal error status. */
        uint32_t reserved_23           : 1;
        uint32_t uatombs               : 1;  /**< [ 24: 24](R/W1C/H) Unsupported AtomicOp egress blocked status. */
        uint32_t tpbes                 : 1;  /**< [ 25: 25](R/W1C/H) Unsupported TLP prefix blocked error status. */
        uint32_t reserved_26_31        : 6;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ucor_err_stat_s cn; */
};
typedef union cavm_pcieepx_ucor_err_stat cavm_pcieepx_ucor_err_stat_t;

static inline uint64_t CAVM_PCIEEPX_UCOR_ERR_STAT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_UCOR_ERR_STAT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x104 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x104 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x104 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x104 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_UCOR_ERR_STAT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_UCOR_ERR_STAT(a) cavm_pcieepx_ucor_err_stat_t
#define bustype_CAVM_PCIEEPX_UCOR_ERR_STAT(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_UCOR_ERR_STAT(a) "PCIEEPX_UCOR_ERR_STAT"
#define busnum_CAVM_PCIEEPX_UCOR_ERR_STAT(a) (a)
#define arguments_CAVM_PCIEEPX_UCOR_ERR_STAT(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_upconfig
 *
 * PCIe EP UpConfigure Multi-lane Control Register
 */
union cavm_pcieepx_upconfig
{
    uint32_t u;
    struct cavm_pcieepx_upconfig_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t upc_supp              : 1;  /**< [  7:  7](R/W) Upconfigure support.
                                                                 The core sends this value to the link upconfigure capability in TS2 ordered
                                                                 sets in Configuration.Complete state. */
        uint32_t dir_lnk_wdth_chg      : 1;  /**< [  6:  6](R/W/H) Directed link width change.
                                                                 The core always moves to configuration state through recovery state
                                                                 when this bit is set.

                                                                 If PCIEEP_RAS_EINJ_CTL6PE[LTSSM_VAR] is set and PCIEEP_LINK_CTL2[HASD]
                                                                 is zero, the core starts upconfigure or autonomous width
                                                                 downsizing (to the [TRGT_LNK_WDTH] value) in the configuration
                                                                 state.

                                                                 If [TRGT_LNK_WDTH] is 0x0, the core does not start upconfigure or autonomous
                                                                 width downsizing in the configuration state.

                                                                 The core self-clears this field when the core accepts this
                                                                 request. */
        uint32_t trgt_lnk_wdth         : 6;  /**< [  5:  0](R/W/H) Target link width.
                                                                 0x0  = Core does not start upconfigure or autonomous width downsizing in configuration
                                                                 state.
                                                                 0x1  = x1.
                                                                 0x2  = x2.
                                                                 0x4  = x4.
                                                                 0x8  = x8 (Not supported).
                                                                 0x10 = x16 (Not supported).
                                                                 0x20 = x32 (Not supported). */
#else /* Word 0 - Little Endian */
        uint32_t trgt_lnk_wdth         : 6;  /**< [  5:  0](R/W/H) Target link width.
                                                                 0x0  = Core does not start upconfigure or autonomous width downsizing in configuration
                                                                 state.
                                                                 0x1  = x1.
                                                                 0x2  = x2.
                                                                 0x4  = x4.
                                                                 0x8  = x8 (Not supported).
                                                                 0x10 = x16 (Not supported).
                                                                 0x20 = x32 (Not supported). */
        uint32_t dir_lnk_wdth_chg      : 1;  /**< [  6:  6](R/W/H) Directed link width change.
                                                                 The core always moves to configuration state through recovery state
                                                                 when this bit is set.

                                                                 If PCIEEP_RAS_EINJ_CTL6PE[LTSSM_VAR] is set and PCIEEP_LINK_CTL2[HASD]
                                                                 is zero, the core starts upconfigure or autonomous width
                                                                 downsizing (to the [TRGT_LNK_WDTH] value) in the configuration
                                                                 state.

                                                                 If [TRGT_LNK_WDTH] is 0x0, the core does not start upconfigure or autonomous
                                                                 width downsizing in the configuration state.

                                                                 The core self-clears this field when the core accepts this
                                                                 request. */
        uint32_t upc_supp              : 1;  /**< [  7:  7](R/W) Upconfigure support.
                                                                 The core sends this value to the link upconfigure capability in TS2 ordered
                                                                 sets in Configuration.Complete state. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_upconfig_s cn; */
};
typedef union cavm_pcieepx_upconfig cavm_pcieepx_upconfig_t;

static inline uint64_t CAVM_PCIEEPX_UPCONFIG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_UPCONFIG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8c0 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x8c0 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8c0 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8c0 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_UPCONFIG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_UPCONFIG(a) cavm_pcieepx_upconfig_t
#define bustype_CAVM_PCIEEPX_UPCONFIG(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_UPCONFIG(a) "PCIEEPX_UPCONFIG"
#define busnum_CAVM_PCIEEPX_UPCONFIG(a) (a)
#define arguments_CAVM_PCIEEPX_UPCONFIG(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ver_num
 *
 * PCIe EP PF Controller IIP Release Version Number Register
 */
union cavm_pcieepx_ver_num
{
    uint32_t u;
    struct cavm_pcieepx_ver_num_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t vnum                  : 32; /**< [ 31:  0](RO) Version number. Convert hex characters to ASCII to interpret. */
#else /* Word 0 - Little Endian */
        uint32_t vnum                  : 32; /**< [ 31:  0](RO) Version number. Convert hex characters to ASCII to interpret. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ver_num_s cn; */
};
typedef union cavm_pcieepx_ver_num cavm_pcieepx_ver_num_t;

static inline uint64_t CAVM_PCIEEPX_VER_NUM(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_VER_NUM(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8f8 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x8f8 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8f8 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8f8 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_VER_NUM", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_VER_NUM(a) cavm_pcieepx_ver_num_t
#define bustype_CAVM_PCIEEPX_VER_NUM(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_VER_NUM(a) "PCIEEPX_VER_NUM"
#define busnum_CAVM_PCIEEPX_VER_NUM(a) (a)
#define arguments_CAVM_PCIEEPX_VER_NUM(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_ver_type
 *
 * PCIe EP PF Controller IIP Release Version Type Register
 */
union cavm_pcieepx_ver_type
{
    uint32_t u;
    struct cavm_pcieepx_ver_type_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t vtyp                  : 32; /**< [ 31:  0](RO) Version type. Convert hex characters to ASCII to interpret. */
#else /* Word 0 - Little Endian */
        uint32_t vtyp                  : 32; /**< [ 31:  0](RO) Version type. Convert hex characters to ASCII to interpret. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_ver_type_s cn; */
};
typedef union cavm_pcieepx_ver_type cavm_pcieepx_ver_type_t;

static inline uint64_t CAVM_PCIEEPX_VER_TYPE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_VER_TYPE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8fc + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x8fc + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8fc + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8fc + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_VER_TYPE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_VER_TYPE(a) cavm_pcieepx_ver_type_t
#define bustype_CAVM_PCIEEPX_VER_TYPE(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_VER_TYPE(a) "PCIEEPX_VER_TYPE"
#define busnum_CAVM_PCIEEPX_VER_TYPE(a) (a)
#define arguments_CAVM_PCIEEPX_VER_TYPE(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_vsecst_cap_hdr
 *
 * PCIe EP Vendor Specific Status Capability Header Register
 * Vendor Specific Status Capability Header exists for PF0 only.
 */
union cavm_pcieepx_vsecst_cap_hdr
{
    uint32_t u;
    struct cavm_pcieepx_vsecst_cap_hdr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t nco                   : 12; /**< [ 31: 20](RO/WRSL) Next capability offset.
                                                                 Writable through PEM()_CFG_TBL(). */
        uint32_t cv                    : 4;  /**< [ 19: 16](RO/WRSL) Capability version.
                                                                 Writable through PEM()_CFG_TBL(). */
        uint32_t pcieec                : 16; /**< [ 15:  0](RO/WRSL) PCI Express extended capability.
                                                                 Writable through PEM()_CFG_TBL(). */
#else /* Word 0 - Little Endian */
        uint32_t pcieec                : 16; /**< [ 15:  0](RO/WRSL) PCI Express extended capability.
                                                                 Writable through PEM()_CFG_TBL(). */
        uint32_t cv                    : 4;  /**< [ 19: 16](RO/WRSL) Capability version.
                                                                 Writable through PEM()_CFG_TBL(). */
        uint32_t nco                   : 12; /**< [ 31: 20](RO/WRSL) Next capability offset.
                                                                 Writable through PEM()_CFG_TBL(). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_vsecst_cap_hdr_s cn; */
};
typedef union cavm_pcieepx_vsecst_cap_hdr cavm_pcieepx_vsecst_cap_hdr_t;

static inline uint64_t CAVM_PCIEEPX_VSECST_CAP_HDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_VSECST_CAP_HDR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x410 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x410 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x410 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x410 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_VSECST_CAP_HDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_VSECST_CAP_HDR(a) cavm_pcieepx_vsecst_cap_hdr_t
#define bustype_CAVM_PCIEEPX_VSECST_CAP_HDR(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_VSECST_CAP_HDR(a) "PCIEEPX_VSECST_CAP_HDR"
#define busnum_CAVM_PCIEEPX_VSECST_CAP_HDR(a) (a)
#define arguments_CAVM_PCIEEPX_VSECST_CAP_HDR(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_vsecst_ctl
 *
 * PCIe EP Vendor Specific Status Control Register
 * Vendor Specific Status Control exists for PF0 only.
 */
union cavm_pcieepx_vsecst_ctl
{
    uint32_t u;
    struct cavm_pcieepx_vsecst_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t status                : 8;  /**< [  7:  0](RO/WRSL) Indicates status of internal core logic to host software driver. Typically
                                                                 0x0 would indicate to the host driver that CNXXXX firmware is not loaded,
                                                                 and non-zero values indicate some software-defined post-firmware
                                                                 loaded state information or failure code.

                                                                 This register will be reset on a core reset. This register is
                                                                 not RSL-writable (always reads 0x0 from host) for all PFs other than PF0. */
#else /* Word 0 - Little Endian */
        uint32_t status                : 8;  /**< [  7:  0](RO/WRSL) Indicates status of internal core logic to host software driver. Typically
                                                                 0x0 would indicate to the host driver that CNXXXX firmware is not loaded,
                                                                 and non-zero values indicate some software-defined post-firmware
                                                                 loaded state information or failure code.

                                                                 This register will be reset on a core reset. This register is
                                                                 not RSL-writable (always reads 0x0 from host) for all PFs other than PF0. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_vsecst_ctl_s cn; */
};
typedef union cavm_pcieepx_vsecst_ctl cavm_pcieepx_vsecst_ctl_t;

static inline uint64_t CAVM_PCIEEPX_VSECST_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_VSECST_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x418 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x418 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x418 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x418 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_VSECST_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_VSECST_CTL(a) cavm_pcieepx_vsecst_ctl_t
#define bustype_CAVM_PCIEEPX_VSECST_CTL(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_VSECST_CTL(a) "PCIEEPX_VSECST_CTL"
#define busnum_CAVM_PCIEEPX_VSECST_CTL(a) (a)
#define arguments_CAVM_PCIEEPX_VSECST_CTL(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_vsecst_hdr
 *
 * PCIe EP Vendor Specific Status Header Register
 * Vendor Specific Status Header exists for PF0 only.
 */
union cavm_pcieepx_vsecst_hdr
{
    uint32_t u;
    struct cavm_pcieepx_vsecst_hdr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t vsec_length           : 12; /**< [ 31: 20](RO/WRSL) VSEC length. */
        uint32_t vsec_rev              : 4;  /**< [ 19: 16](RO/WRSL) Capability version. */
        uint32_t vsec_id               : 16; /**< [ 15:  0](RO/WRSL) VSEC ID. */
#else /* Word 0 - Little Endian */
        uint32_t vsec_id               : 16; /**< [ 15:  0](RO/WRSL) VSEC ID. */
        uint32_t vsec_rev              : 4;  /**< [ 19: 16](RO/WRSL) Capability version. */
        uint32_t vsec_length           : 12; /**< [ 31: 20](RO/WRSL) VSEC length. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_vsecst_hdr_s cn; */
};
typedef union cavm_pcieepx_vsecst_hdr cavm_pcieepx_vsecst_hdr_t;

static inline uint64_t CAVM_PCIEEPX_VSECST_HDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_VSECST_HDR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x414 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x414 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x414 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x414 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_VSECST_HDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_VSECST_HDR(a) cavm_pcieepx_vsecst_hdr_t
#define bustype_CAVM_PCIEEPX_VSECST_HDR(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_VSECST_HDR(a) "PCIEEPX_VSECST_HDR"
#define busnum_CAVM_PCIEEPX_VSECST_HDR(a) (a)
#define arguments_CAVM_PCIEEPX_VSECST_HDR(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_xmit_arb1
 *
 * PCIe EP PF VC Transmit Arbitration Register 1
 */
union cavm_pcieepx_xmit_arb1
{
    uint32_t u;
    struct cavm_pcieepx_xmit_arb1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t wrr_vc3               : 8;  /**< [ 31: 24](RO) WRR weight for VC3. */
        uint32_t wrr_vc2               : 8;  /**< [ 23: 16](RO) WRR weight for VC2. */
        uint32_t wrr_vc1               : 8;  /**< [ 15:  8](RO) WRR weight for VC1. */
        uint32_t wrr_vc0               : 8;  /**< [  7:  0](RO) WRR weight for VC0. */
#else /* Word 0 - Little Endian */
        uint32_t wrr_vc0               : 8;  /**< [  7:  0](RO) WRR weight for VC0. */
        uint32_t wrr_vc1               : 8;  /**< [ 15:  8](RO) WRR weight for VC1. */
        uint32_t wrr_vc2               : 8;  /**< [ 23: 16](RO) WRR weight for VC2. */
        uint32_t wrr_vc3               : 8;  /**< [ 31: 24](RO) WRR weight for VC3. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_xmit_arb1_s cn; */
};
typedef union cavm_pcieepx_xmit_arb1 cavm_pcieepx_xmit_arb1_t;

static inline uint64_t CAVM_PCIEEPX_XMIT_ARB1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_XMIT_ARB1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x740 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x740 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x740 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x740 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_XMIT_ARB1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_XMIT_ARB1(a) cavm_pcieepx_xmit_arb1_t
#define bustype_CAVM_PCIEEPX_XMIT_ARB1(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_XMIT_ARB1(a) "PCIEEPX_XMIT_ARB1"
#define busnum_CAVM_PCIEEPX_XMIT_ARB1(a) (a)
#define arguments_CAVM_PCIEEPX_XMIT_ARB1(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP) pcieep#_xmit_arb2
 *
 * PCIe EP PF VC Transmit Arbitration Register 2
 */
union cavm_pcieepx_xmit_arb2
{
    uint32_t u;
    struct cavm_pcieepx_xmit_arb2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t wrr_vc7               : 8;  /**< [ 31: 24](RO) WRR weight for VC7. */
        uint32_t wrr_vc6               : 8;  /**< [ 23: 16](RO) WRR weight for VC6. */
        uint32_t wrr_vc5               : 8;  /**< [ 15:  8](RO) WRR weight for VC5. */
        uint32_t wrr_vc4               : 8;  /**< [  7:  0](RO) WRR weight for VC4. */
#else /* Word 0 - Little Endian */
        uint32_t wrr_vc4               : 8;  /**< [  7:  0](RO) WRR weight for VC4. */
        uint32_t wrr_vc5               : 8;  /**< [ 15:  8](RO) WRR weight for VC5. */
        uint32_t wrr_vc6               : 8;  /**< [ 23: 16](RO) WRR weight for VC6. */
        uint32_t wrr_vc7               : 8;  /**< [ 31: 24](RO) WRR weight for VC7. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepx_xmit_arb2_s cn; */
};
typedef union cavm_pcieepx_xmit_arb2 cavm_pcieepx_xmit_arb2_t;

static inline uint64_t CAVM_PCIEEPX_XMIT_ARB2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPX_XMIT_ARB2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x744 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x744 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x744 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x744 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPX_XMIT_ARB2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPX_XMIT_ARB2(a) cavm_pcieepx_xmit_arb2_t
#define bustype_CAVM_PCIEEPX_XMIT_ARB2(a) CSR_TYPE_PCICONFIGEP
#define basename_CAVM_PCIEEPX_XMIT_ARB2(a) "PCIEEPX_XMIT_ARB2"
#define busnum_CAVM_PCIEEPX_XMIT_ARB2(a) (a)
#define arguments_CAVM_PCIEEPX_XMIT_ARB2(a) (a),-1,-1,-1

/**
 * Register (PCICONFIGEP_SHADOW) pcieepvf#_msix_cap_cntrl_shadow
 *
 * PCIe EP PF VF MSI-X Capability ID/MSI-X Next Item Pointer/MSI-X Control Shadow Register
 * Shadow PCIEEP_MSIX_CAP_CNTRL register.
 */
union cavm_pcieepvfx_msix_cap_cntrl_shadow
{
    uint32_t u;
    struct cavm_pcieepvfx_msix_cap_cntrl_shadow_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t msixen                : 1;  /**< [ 31: 31](R/W) MSI-X enable. If MSI-X is enabled, MSI and INTx must be disabled. */
        uint32_t funm                  : 1;  /**< [ 30: 30](R/W) Function mask.
                                                                 0 = Each vectors mask bit determines whether the vector is masked or not.
                                                                 1 = All vectors associated with the function are masked, regardless of their respective
                                                                 per-vector mask bits. */
        uint32_t reserved_27_29        : 3;
        uint32_t msixts                : 11; /**< [ 26: 16](RO/WRSL) VF MSI-X table size encoded as (table size - 1).
                                                                 All VFs in a single PF have the same value for MSI-X Table Size. */
        uint32_t ncp                   : 8;  /**< [ 15:  8](RO/WRSL) Next capability pointer */
        uint32_t msixcid               : 8;  /**< [  7:  0](RO) MSI-X capability ID. */
#else /* Word 0 - Little Endian */
        uint32_t msixcid               : 8;  /**< [  7:  0](RO) MSI-X capability ID. */
        uint32_t ncp                   : 8;  /**< [ 15:  8](RO/WRSL) Next capability pointer */
        uint32_t msixts                : 11; /**< [ 26: 16](RO/WRSL) VF MSI-X table size encoded as (table size - 1).
                                                                 All VFs in a single PF have the same value for MSI-X Table Size. */
        uint32_t reserved_27_29        : 3;
        uint32_t funm                  : 1;  /**< [ 30: 30](R/W) Function mask.
                                                                 0 = Each vectors mask bit determines whether the vector is masked or not.
                                                                 1 = All vectors associated with the function are masked, regardless of their respective
                                                                 per-vector mask bits. */
        uint32_t msixen                : 1;  /**< [ 31: 31](R/W) MSI-X enable. If MSI-X is enabled, MSI and INTx must be disabled. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepvfx_msix_cap_cntrl_shadow_s cn; */
};
typedef union cavm_pcieepvfx_msix_cap_cntrl_shadow cavm_pcieepvfx_msix_cap_cntrl_shadow_t;

static inline uint64_t CAVM_PCIEEPVFX_MSIX_CAP_CNTRL_SHADOW(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPVFX_MSIX_CAP_CNTRL_SHADOW(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x100b0 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x100b0 + 0 * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x100b0 + 0 * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x100b0 + 0 * ((a) & 0x1);
    __cavm_csr_fatal("PCIEEPVFX_MSIX_CAP_CNTRL_SHADOW", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCIEEPVFX_MSIX_CAP_CNTRL_SHADOW(a) cavm_pcieepvfx_msix_cap_cntrl_shadow_t
#define bustype_CAVM_PCIEEPVFX_MSIX_CAP_CNTRL_SHADOW(a) CSR_TYPE_PCICONFIGEP_SHADOW
#define basename_CAVM_PCIEEPVFX_MSIX_CAP_CNTRL_SHADOW(a) "PCIEEPVFX_MSIX_CAP_CNTRL_SHADOW"
#define busnum_CAVM_PCIEEPVFX_MSIX_CAP_CNTRL_SHADOW(a) (a)
#define arguments_CAVM_PCIEEPVFX_MSIX_CAP_CNTRL_SHADOW(a) (a),-1,-1,-1

#endif /* __CAVM_CSRS_PCIEEP_H__ */
