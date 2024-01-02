#ifndef __CAVM_CSRS_RFOE_TX_AB_H__
#define __CAVM_CSRS_RFOE_TX_AB_H__
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
 * RFOE_TX_AB.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration rfoe_tx_l3_type_e
 *
 * RFOE TX Layer 3 Header Type Enumeration
 * Enumerates values of RFOE()_AB()_SLOT()_CONFIGURATION4[L3_TYPE]
 */
#define CAVM_RFOE_TX_L3_TYPE_E_IPV4 (2)
#define CAVM_RFOE_TX_L3_TYPE_E_IPV6 (3)
#define CAVM_RFOE_TX_L3_TYPE_E_NONE (0)
#define CAVM_RFOE_TX_L3_TYPE_E_RSVD (1)

/**
 * Enumeration rfoe_tx_l4_type_e
 *
 * RFOE TX Layer 4 Header Type Enumeration
 * Enumerates values of RFOE()_AB()_SLOT()_CONFIGURATION4[L4_TYPE]
 */
#define CAVM_RFOE_TX_L4_TYPE_E_ICMP_CKSUM (4)
#define CAVM_RFOE_TX_L4_TYPE_E_NONE (0)
#define CAVM_RFOE_TX_L4_TYPE_E_SCTP_CKSUM (2)
#define CAVM_RFOE_TX_L4_TYPE_E_TCP_CKSUM (1)
#define CAVM_RFOE_TX_L4_TYPE_E_UDP_CKSUM (3)

/**
 * Register (RSL) rfoe#_ab#_control
 *
 * RFOE AB Control Register
 */
union cavm_rfoex_abx_control
{
    uint64_t u;
    struct cavm_rfoex_abx_control_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t jobid2                : 16; /**< [ 63: 48](R/W/H) Job ID for slot 2. */
        uint64_t jobid1                : 16; /**< [ 47: 32](R/W/H) Job ID for slot 1. */
        uint64_t jobid0                : 16; /**< [ 31: 16](R/W/H) Job ID for slot 0. */
        uint64_t reserved_4_15         : 12;
        uint64_t start3                : 1;  /**< [  3:  3](R/W/H) Start processing job in slot 3. */
        uint64_t start2                : 1;  /**< [  2:  2](R/W/H) Start processing job in slot 2. */
        uint64_t start1                : 1;  /**< [  1:  1](R/W/H) Start processing job in slot 1. */
        uint64_t start0                : 1;  /**< [  0:  0](R/W/H) Start processing job in slot 0. */
#else /* Word 0 - Little Endian */
        uint64_t start0                : 1;  /**< [  0:  0](R/W/H) Start processing job in slot 0. */
        uint64_t start1                : 1;  /**< [  1:  1](R/W/H) Start processing job in slot 1. */
        uint64_t start2                : 1;  /**< [  2:  2](R/W/H) Start processing job in slot 2. */
        uint64_t start3                : 1;  /**< [  3:  3](R/W/H) Start processing job in slot 3. */
        uint64_t reserved_4_15         : 12;
        uint64_t jobid0                : 16; /**< [ 31: 16](R/W/H) Job ID for slot 0. */
        uint64_t jobid1                : 16; /**< [ 47: 32](R/W/H) Job ID for slot 1. */
        uint64_t jobid2                : 16; /**< [ 63: 48](R/W/H) Job ID for slot 2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_abx_control_s cn; */
};
typedef union cavm_rfoex_abx_control cavm_rfoex_abx_control_t;

static inline uint64_t CAVM_RFOEX_ABX_CONTROL(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_ABX_CONTROL(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=6) && (b<=1)))
        return 0x87e042c00000ll + 0x80000ll * ((a) & 0x7) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("RFOEX_ABX_CONTROL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_ABX_CONTROL(a,b) cavm_rfoex_abx_control_t
#define bustype_CAVM_RFOEX_ABX_CONTROL(a,b) CSR_TYPE_RSL
#define basename_CAVM_RFOEX_ABX_CONTROL(a,b) "RFOEX_ABX_CONTROL"
#define busnum_CAVM_RFOEX_ABX_CONTROL(a,b) (a)
#define arguments_CAVM_RFOEX_ABX_CONTROL(a,b) (a),(b),-1,-1

/**
 * Register (RSL) rfoe#_ab#_control1
 *
 * RFOE AB Control1 Register
 */
union cavm_rfoex_abx_control1
{
    uint64_t u;
    struct cavm_rfoex_abx_control1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t jobid3                : 16; /**< [ 15:  0](R/W) Job ID for slot 3. */
#else /* Word 0 - Little Endian */
        uint64_t jobid3                : 16; /**< [ 15:  0](R/W) Job ID for slot 3. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_abx_control1_s cn; */
};
typedef union cavm_rfoex_abx_control1 cavm_rfoex_abx_control1_t;

static inline uint64_t CAVM_RFOEX_ABX_CONTROL1(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_ABX_CONTROL1(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=6) && (b<=1)))
        return 0x87e042c00008ll + 0x80000ll * ((a) & 0x7) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("RFOEX_ABX_CONTROL1", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_ABX_CONTROL1(a,b) cavm_rfoex_abx_control1_t
#define bustype_CAVM_RFOEX_ABX_CONTROL1(a,b) CSR_TYPE_RSL
#define basename_CAVM_RFOEX_ABX_CONTROL1(a,b) "RFOEX_ABX_CONTROL1"
#define busnum_CAVM_RFOEX_ABX_CONTROL1(a,b) (a)
#define arguments_CAVM_RFOEX_ABX_CONTROL1(a,b) (a),(b),-1,-1

/**
 * Register (RSL) rfoe#_ab#_slot#_configuration
 *
 * RFOE AB Job Configuration Register
 * This register space contains the RFOE job configuration data.
 *
 * Software should not write this register directly, but instead use this
 * format when writing the job configuration section of the job descriptor.
 */
union cavm_rfoex_abx_slotx_configuration
{
    uint64_t u;
    struct cavm_rfoex_abx_slotx_configuration_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t rfoe_mode             : 3;  /**< [ 63: 61](R/W) RFOE mode of operation. Indicates the current packet type being processed: eCPRI or RoE:
                                                                 0 = current packet type is RoE over Ethernet.
                                                                 1 = current packet type is eCPRI over Ethernet.
                                                                 6 = current packet type is generic IP over Ethernet.
                                                                 All other values are reserved. */
        uint64_t custom_timestamp_insert : 1;/**< [ 60: 60](R/W) When set to 1 and when [PKT_MODE] = 2, [RFOE_MODE] = 0, and [SUBTYPE]=0xFD,
                                                                 TX inserts custom timestamp into custom header field. */
        uint64_t orderinfo_insert      : 1;  /**< [ 59: 59](R/W) When [PKT_MODE] = 2,
                                                                 and [RFOE_MODE] = 0,
                                                                 when set to 1, for all RoE subtypes,
                                                                 TX inserts seqnum/timestamp into orderInfo field. */
        uint64_t eos                   : 1;  /**< [ 58: 58](R/W) End of symbol flag. Indicates last packet for current symbol. This field is
                                                                 inserted into custom header for [SUBTYPE]=0xFD and when
                                                                 [PKT_MODE] = 2,
                                                                 and [RFOE_MODE] = 0. */
        uint64_t sos                   : 1;  /**< [ 57: 57](R/W) Start of symbol flag. Indicates first packet for current symbol. This field is
                                                                 inserted into RoE header for [SUBTYPE]=0xFD and when
                                                                 [PKT_MODE] = 2,
                                                                 and [RFOE_MODE] = 0. */
        uint64_t symbol                : 8;  /**< [ 56: 49](R/W) Symbol number to insert into RoE header for [SUBTYPE]=0xFD and when
                                                                 [PKT_MODE] = 2,
                                                                 and [RFOE_MODE] = 0. */
        uint64_t antenna               : 8;  /**< [ 48: 41](R/W) Antenna number to insert into RoE header for [SUBTYPE]=0xFD and when
                                                                 [PKT_MODE] = 2,
                                                                 and [RFOE_MODE] = 0. */
        uint64_t orderinfooffset       : 5;  /**< [ 40: 36](R/W) Byte offset of RoE orderInfo field within header. Used when [PKT_MODE] = 2 to
                                                                 allow RFOE to replace orderInfo field,
                                                                 and [RFOE_MODE] = 0. */
        uint64_t orderinfotype         : 1;  /**< [ 35: 35](R/W) Format for IEEE 1914.3-2018 orderInfo enumerated by RFOE_ORDER_INFO_TYPE_E.
                                                                 Used when [RFOE_MODE] = 0. */
        uint64_t sample_width_sat_bypass : 1;/**< [ 34: 34](R/W) Bypass sample saturation.
                                                                 Used when [RFOE_MODE] = 0.
                                                                 0 = Perform symmetric saturation to [SAMPLE_WIDTH].
                                                                 o If [SAMPLE_WIDTH_OPTION]=0, use the [SAMPLE_WIDTH] to perform
                                                                 symmetric saturation to [SAMPLE_WIDTH].
                                                                 o If [SAMPLE_WIDTH_OPTION]=1, Reserved, not supported option.
                                                                 1 = Bypass saturation.
                                                                 o If [SAMPLE_WIDTH_OPTION]=0, use the [SAMPLE_WIDTH] most significant
                                                                 bits of the input sample.
                                                                 o If [SAMPLE_WIDTH_OPTION]=1, the rounded value is truncated instead
                                                                 of saturating. */
        uint64_t sample_width_option   : 1;  /**< [ 33: 33](R/W) Sample width conversion mode:
                                                                 Used when [RFOE_MODE] = 0.
                                                                 0: Y = SATn(X).
                                                                 1: Y = SATn(ROUND(X)).

                                                                 SATn(X) is saturation to the range [-2^(n-1)+1, 2^(n-1)-1].

                                                                 ROUND(X) is symmetric rounding, defined as:
                                                                 _ ROUND(X) = (X + 2^(m-1)) \>\> m, if X \>= 0.
                                                                 _ ROUND(X) = -((-X + 2^(m-1)) \>\> m), if X \< 0.
                                                                 _ where m = 16 - n, and when m=0, 2^(0-1) = 0.

                                                                 n is the sample bit width specified by [SAMPLE_WIDTH].

                                                                 Note that the saturation operation can be bypassed by setting
                                                                 [SAMPLE_WIDTH_SAT_BYPASS]=1. */
        uint64_t sample_width          : 5;  /**< [ 32: 28](R/W) Used when [RFOE_MODE] = 0.
                                                                 For [SAMPLE_MODE]=1, width in bits of I/Q samples in transmitted RoE
                                                                 packet. Samples read from memory are always assume to have 16-bit I
                                                                 and 16-bit Q components. */
        uint64_t sample_mode           : 1;  /**< [ 27: 27](R/W) Used when [RFOE_MODE] = 0.
                                                                 Enable sample mode. When set to 1, I/Q samples in the packet are
                                                                 read as 16-bit I/Q values, and converted to [SAMPLE_WIDTH] bits, as
                                                                 per [SAMPLE_WIDTH_OPTION]. Otherwise, samples are written to memory
                                                                 with no conversions. */
        uint64_t subtype               : 8;  /**< [ 26: 19](R/W) RoE subtype. Used when [RFOE_MODE] = 0. */
        uint64_t flowid                : 8;  /**< [ 18: 11](R/W) FLOWID for the FLOWID field in the RoE packet header.
                                                                 Used when [RFOE_MODE] = 0. */
        uint64_t etype_sel             : 3;  /**< [ 10:  8](R/W) When [PKT_MODE]=1, selects which RFOE()_TX_HDR_ETHERTYPE() register
                                                                 provides the EtherType field to insert in the Ethernet header. Ignored
                                                                 when [PKT_MODE] != 1. */
        uint64_t sa_sel                : 3;  /**< [  7:  5](R/W) When [PKT_MODE]=1, selects which RFOE()_TX_HDR_SA() register
                                                                 provides the source DMAC address to insert in the Ethernet header. Ignored
                                                                 when [PKT_MODE] != 1. */
        uint64_t da_sel                : 3;  /**< [  4:  2](R/W) When [PKT_MODE]=1, selects which RFOE()_TX_HDR_DA() register
                                                                 provides the destination DMAC address to insert in the Ethernet header. Ignored
                                                                 when [PKT_MODE] != 1. */
        uint64_t pkt_mode              : 2;  /**< [  1:  0](R/W) Packet mode.
                                                                 0x0 = Transparent mode (1 pointer in job descriptor).
                                                                       This mode is used for control packet transmit.
                                                                       Hardware does not access the Sequence Number configuration table.
                                                                 0x1 = Packet DMA with Ethernet header built from RFOE()_TX_HDR_*
                                                                       registers. This mode is used for Antenna symbol data transmit.
                                                                       Hardware updates the Sequence Number configuration table accordingly.
                                                                 0x2 = First DMA contains Ethernet, RoE header, Custom header and rbMap.
                                                                       Second DMA contains sample data.
                                                                       This mode is used for Antenna symbol data transmit.
                                                                       Hardware updates the Sequence Number configuration table accordingly.
                                                                 0x3 = Reserved. */
#else /* Word 0 - Little Endian */
        uint64_t pkt_mode              : 2;  /**< [  1:  0](R/W) Packet mode.
                                                                 0x0 = Transparent mode (1 pointer in job descriptor).
                                                                       This mode is used for control packet transmit.
                                                                       Hardware does not access the Sequence Number configuration table.
                                                                 0x1 = Packet DMA with Ethernet header built from RFOE()_TX_HDR_*
                                                                       registers. This mode is used for Antenna symbol data transmit.
                                                                       Hardware updates the Sequence Number configuration table accordingly.
                                                                 0x2 = First DMA contains Ethernet, RoE header, Custom header and rbMap.
                                                                       Second DMA contains sample data.
                                                                       This mode is used for Antenna symbol data transmit.
                                                                       Hardware updates the Sequence Number configuration table accordingly.
                                                                 0x3 = Reserved. */
        uint64_t da_sel                : 3;  /**< [  4:  2](R/W) When [PKT_MODE]=1, selects which RFOE()_TX_HDR_DA() register
                                                                 provides the destination DMAC address to insert in the Ethernet header. Ignored
                                                                 when [PKT_MODE] != 1. */
        uint64_t sa_sel                : 3;  /**< [  7:  5](R/W) When [PKT_MODE]=1, selects which RFOE()_TX_HDR_SA() register
                                                                 provides the source DMAC address to insert in the Ethernet header. Ignored
                                                                 when [PKT_MODE] != 1. */
        uint64_t etype_sel             : 3;  /**< [ 10:  8](R/W) When [PKT_MODE]=1, selects which RFOE()_TX_HDR_ETHERTYPE() register
                                                                 provides the EtherType field to insert in the Ethernet header. Ignored
                                                                 when [PKT_MODE] != 1. */
        uint64_t flowid                : 8;  /**< [ 18: 11](R/W) FLOWID for the FLOWID field in the RoE packet header.
                                                                 Used when [RFOE_MODE] = 0. */
        uint64_t subtype               : 8;  /**< [ 26: 19](R/W) RoE subtype. Used when [RFOE_MODE] = 0. */
        uint64_t sample_mode           : 1;  /**< [ 27: 27](R/W) Used when [RFOE_MODE] = 0.
                                                                 Enable sample mode. When set to 1, I/Q samples in the packet are
                                                                 read as 16-bit I/Q values, and converted to [SAMPLE_WIDTH] bits, as
                                                                 per [SAMPLE_WIDTH_OPTION]. Otherwise, samples are written to memory
                                                                 with no conversions. */
        uint64_t sample_width          : 5;  /**< [ 32: 28](R/W) Used when [RFOE_MODE] = 0.
                                                                 For [SAMPLE_MODE]=1, width in bits of I/Q samples in transmitted RoE
                                                                 packet. Samples read from memory are always assume to have 16-bit I
                                                                 and 16-bit Q components. */
        uint64_t sample_width_option   : 1;  /**< [ 33: 33](R/W) Sample width conversion mode:
                                                                 Used when [RFOE_MODE] = 0.
                                                                 0: Y = SATn(X).
                                                                 1: Y = SATn(ROUND(X)).

                                                                 SATn(X) is saturation to the range [-2^(n-1)+1, 2^(n-1)-1].

                                                                 ROUND(X) is symmetric rounding, defined as:
                                                                 _ ROUND(X) = (X + 2^(m-1)) \>\> m, if X \>= 0.
                                                                 _ ROUND(X) = -((-X + 2^(m-1)) \>\> m), if X \< 0.
                                                                 _ where m = 16 - n, and when m=0, 2^(0-1) = 0.

                                                                 n is the sample bit width specified by [SAMPLE_WIDTH].

                                                                 Note that the saturation operation can be bypassed by setting
                                                                 [SAMPLE_WIDTH_SAT_BYPASS]=1. */
        uint64_t sample_width_sat_bypass : 1;/**< [ 34: 34](R/W) Bypass sample saturation.
                                                                 Used when [RFOE_MODE] = 0.
                                                                 0 = Perform symmetric saturation to [SAMPLE_WIDTH].
                                                                 o If [SAMPLE_WIDTH_OPTION]=0, use the [SAMPLE_WIDTH] to perform
                                                                 symmetric saturation to [SAMPLE_WIDTH].
                                                                 o If [SAMPLE_WIDTH_OPTION]=1, Reserved, not supported option.
                                                                 1 = Bypass saturation.
                                                                 o If [SAMPLE_WIDTH_OPTION]=0, use the [SAMPLE_WIDTH] most significant
                                                                 bits of the input sample.
                                                                 o If [SAMPLE_WIDTH_OPTION]=1, the rounded value is truncated instead
                                                                 of saturating. */
        uint64_t orderinfotype         : 1;  /**< [ 35: 35](R/W) Format for IEEE 1914.3-2018 orderInfo enumerated by RFOE_ORDER_INFO_TYPE_E.
                                                                 Used when [RFOE_MODE] = 0. */
        uint64_t orderinfooffset       : 5;  /**< [ 40: 36](R/W) Byte offset of RoE orderInfo field within header. Used when [PKT_MODE] = 2 to
                                                                 allow RFOE to replace orderInfo field,
                                                                 and [RFOE_MODE] = 0. */
        uint64_t antenna               : 8;  /**< [ 48: 41](R/W) Antenna number to insert into RoE header for [SUBTYPE]=0xFD and when
                                                                 [PKT_MODE] = 2,
                                                                 and [RFOE_MODE] = 0. */
        uint64_t symbol                : 8;  /**< [ 56: 49](R/W) Symbol number to insert into RoE header for [SUBTYPE]=0xFD and when
                                                                 [PKT_MODE] = 2,
                                                                 and [RFOE_MODE] = 0. */
        uint64_t sos                   : 1;  /**< [ 57: 57](R/W) Start of symbol flag. Indicates first packet for current symbol. This field is
                                                                 inserted into RoE header for [SUBTYPE]=0xFD and when
                                                                 [PKT_MODE] = 2,
                                                                 and [RFOE_MODE] = 0. */
        uint64_t eos                   : 1;  /**< [ 58: 58](R/W) End of symbol flag. Indicates last packet for current symbol. This field is
                                                                 inserted into custom header for [SUBTYPE]=0xFD and when
                                                                 [PKT_MODE] = 2,
                                                                 and [RFOE_MODE] = 0. */
        uint64_t orderinfo_insert      : 1;  /**< [ 59: 59](R/W) When [PKT_MODE] = 2,
                                                                 and [RFOE_MODE] = 0,
                                                                 when set to 1, for all RoE subtypes,
                                                                 TX inserts seqnum/timestamp into orderInfo field. */
        uint64_t custom_timestamp_insert : 1;/**< [ 60: 60](R/W) When set to 1 and when [PKT_MODE] = 2, [RFOE_MODE] = 0, and [SUBTYPE]=0xFD,
                                                                 TX inserts custom timestamp into custom header field. */
        uint64_t rfoe_mode             : 3;  /**< [ 63: 61](R/W) RFOE mode of operation. Indicates the current packet type being processed: eCPRI or RoE:
                                                                 0 = current packet type is RoE over Ethernet.
                                                                 1 = current packet type is eCPRI over Ethernet.
                                                                 6 = current packet type is generic IP over Ethernet.
                                                                 All other values are reserved. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_abx_slotx_configuration_s cn; */
};
typedef union cavm_rfoex_abx_slotx_configuration cavm_rfoex_abx_slotx_configuration_t;

static inline uint64_t CAVM_RFOEX_ABX_SLOTX_CONFIGURATION(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_ABX_SLOTX_CONFIGURATION(uint64_t a, uint64_t b, uint64_t c)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=6) && (b<=1) && (c<=3)))
        return 0x87e042c02000ll + 0x80000ll * ((a) & 0x7) + 0x10000ll * ((b) & 0x1) + 0x2000ll * ((c) & 0x3);
    __cavm_csr_fatal("RFOEX_ABX_SLOTX_CONFIGURATION", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_ABX_SLOTX_CONFIGURATION(a,b,c) cavm_rfoex_abx_slotx_configuration_t
#define bustype_CAVM_RFOEX_ABX_SLOTX_CONFIGURATION(a,b,c) CSR_TYPE_RSL
#define basename_CAVM_RFOEX_ABX_SLOTX_CONFIGURATION(a,b,c) "RFOEX_ABX_SLOTX_CONFIGURATION"
#define busnum_CAVM_RFOEX_ABX_SLOTX_CONFIGURATION(a,b,c) (a)
#define arguments_CAVM_RFOEX_ABX_SLOTX_CONFIGURATION(a,b,c) (a),(b),(c),-1

/**
 * Register (RSL) rfoe#_ab#_slot#_configuration1
 *
 * RFOE AB Job Configuration Register
 * This register space contains the RFOE job configuration data.
 *
 * Software should not write this register directly, but instead use this
 * format when writing the job configuration section of the job descriptor.
 */
union cavm_rfoex_abx_slotx_configuration1
{
    uint64_t u;
    struct cavm_rfoex_abx_slotx_configuration1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t sof_mode              : 2;  /**< [ 63: 62](R/W) SOF bit setting in the Orderinfo Timestamp.
                                                                 This is used when RFOE()_AB()_SLOT()_CONFIGURATION[ORDERINFOTYPE]=1 and
                                                                 RFOE()_AB()_SLOT()_CONFIGURATION[ORDERINFO_INSERT]=1,
                                                                 and RFOE()_AB()_SLOT()_CONFIGURATION[RFOE_MODE] = 0.
                                                                 when [SOF_MODE] = 0: Sample SoF from the Timer bus from PSM.
                                                                 when [SOF_MODE] = 1: Sets SoF=0 in the orderInfo Timestamp field.
                                                                 when [SOF_MODE] = 2: Reserved.
                                                                 when [SOF_MODE] = 3: Sets SoF=1 in the orderInfo Timestamp field. */
        uint64_t reserved_61           : 1;
        uint64_t presentation_time_offset : 29;/**< [ 60: 32](R/W) Presentation time offset is used when RFOE()_AB()_SLOT()_CONFIGURATION[ORDERINFOTYPE]=1,
                                                                 and RFOE()_AB()_SLOT()_CONFIGURATION[RFOE_MODE] = 0.
                                                                 Presentation time offset is added to value of current timebus.tod and the resultant value
                                                                 sent out in the RoE header.

                                                                 _ Bits [60:37] indicate integer nanoseconds.

                                                                 _ Bits [36:32] indicate fractional nanoseconds.

                                                                 See IEEE 1914.3-2018. */
        uint64_t hdr_len               : 8;  /**< [ 31: 24](R/W) Header length in number of bytes. When
                                                                 RFOE()_AB()_SLOT()_CONFIGURATION[PKT_MODE]=0x2, indicates the number of
                                                                 header bytes contained in the read DMA data.
                                                                 When RFOE()_AB()_SLOT()_CONFIGURATION[PKT_MODE]=0x1 and PKT_HDR_MEM_SEL = 1,
                                                                 indicates the number of the valid header bytes in the entry pointed
                                                                 by PKT_HDR_MEM_ADDR. */
        uint64_t reserved_16_23        : 8;
        uint64_t pkt_hdr_mem_sel       : 1;  /**< [ 15: 15](R/W) When RFOE()_AB()_SLOT()_CONFIGURATION[PKT_MODE]=0x1 and
                                                                 when PKT_HDR_MEM_SEL = 1, enables the insertion of packet header from the PKT_HDR_MEM. */
        uint64_t pkt_hdr_mem_addr      : 7;  /**< [ 14:  8](R/W) Address of the PKT_HDR_MEM to read from.
                                                                 When RFOE()_TX_CTRL[PKT_HDR_MEM_CFG] = 0, the PKT_HDR_MEM_ADDR[0] is ignored. */
        uint64_t rbmap_bytes           : 8;  /**< [  7:  0](R/W) When RFOE()_AB()_SLOT()_CONFIGURATION[PKT_MODE] = 0x1
                                                                 and RFOE()_AB()_SLOT()_CONFIGURATION[RFOE_MODE] = 0,
                                                                 read the [RBMAP_BYTES] from the read DMA, and insert as-is, and then
                                                                 read sample data at the next 128-bit boundary. */
#else /* Word 0 - Little Endian */
        uint64_t rbmap_bytes           : 8;  /**< [  7:  0](R/W) When RFOE()_AB()_SLOT()_CONFIGURATION[PKT_MODE] = 0x1
                                                                 and RFOE()_AB()_SLOT()_CONFIGURATION[RFOE_MODE] = 0,
                                                                 read the [RBMAP_BYTES] from the read DMA, and insert as-is, and then
                                                                 read sample data at the next 128-bit boundary. */
        uint64_t pkt_hdr_mem_addr      : 7;  /**< [ 14:  8](R/W) Address of the PKT_HDR_MEM to read from.
                                                                 When RFOE()_TX_CTRL[PKT_HDR_MEM_CFG] = 0, the PKT_HDR_MEM_ADDR[0] is ignored. */
        uint64_t pkt_hdr_mem_sel       : 1;  /**< [ 15: 15](R/W) When RFOE()_AB()_SLOT()_CONFIGURATION[PKT_MODE]=0x1 and
                                                                 when PKT_HDR_MEM_SEL = 1, enables the insertion of packet header from the PKT_HDR_MEM. */
        uint64_t reserved_16_23        : 8;
        uint64_t hdr_len               : 8;  /**< [ 31: 24](R/W) Header length in number of bytes. When
                                                                 RFOE()_AB()_SLOT()_CONFIGURATION[PKT_MODE]=0x2, indicates the number of
                                                                 header bytes contained in the read DMA data.
                                                                 When RFOE()_AB()_SLOT()_CONFIGURATION[PKT_MODE]=0x1 and PKT_HDR_MEM_SEL = 1,
                                                                 indicates the number of the valid header bytes in the entry pointed
                                                                 by PKT_HDR_MEM_ADDR. */
        uint64_t presentation_time_offset : 29;/**< [ 60: 32](R/W) Presentation time offset is used when RFOE()_AB()_SLOT()_CONFIGURATION[ORDERINFOTYPE]=1,
                                                                 and RFOE()_AB()_SLOT()_CONFIGURATION[RFOE_MODE] = 0.
                                                                 Presentation time offset is added to value of current timebus.tod and the resultant value
                                                                 sent out in the RoE header.

                                                                 _ Bits [60:37] indicate integer nanoseconds.

                                                                 _ Bits [36:32] indicate fractional nanoseconds.

                                                                 See IEEE 1914.3-2018. */
        uint64_t reserved_61           : 1;
        uint64_t sof_mode              : 2;  /**< [ 63: 62](R/W) SOF bit setting in the Orderinfo Timestamp.
                                                                 This is used when RFOE()_AB()_SLOT()_CONFIGURATION[ORDERINFOTYPE]=1 and
                                                                 RFOE()_AB()_SLOT()_CONFIGURATION[ORDERINFO_INSERT]=1,
                                                                 and RFOE()_AB()_SLOT()_CONFIGURATION[RFOE_MODE] = 0.
                                                                 when [SOF_MODE] = 0: Sample SoF from the Timer bus from PSM.
                                                                 when [SOF_MODE] = 1: Sets SoF=0 in the orderInfo Timestamp field.
                                                                 when [SOF_MODE] = 2: Reserved.
                                                                 when [SOF_MODE] = 3: Sets SoF=1 in the orderInfo Timestamp field. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_abx_slotx_configuration1_s cn; */
};
typedef union cavm_rfoex_abx_slotx_configuration1 cavm_rfoex_abx_slotx_configuration1_t;

static inline uint64_t CAVM_RFOEX_ABX_SLOTX_CONFIGURATION1(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_ABX_SLOTX_CONFIGURATION1(uint64_t a, uint64_t b, uint64_t c)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=6) && (b<=1) && (c<=3)))
        return 0x87e042c02008ll + 0x80000ll * ((a) & 0x7) + 0x10000ll * ((b) & 0x1) + 0x2000ll * ((c) & 0x3);
    __cavm_csr_fatal("RFOEX_ABX_SLOTX_CONFIGURATION1", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_ABX_SLOTX_CONFIGURATION1(a,b,c) cavm_rfoex_abx_slotx_configuration1_t
#define bustype_CAVM_RFOEX_ABX_SLOTX_CONFIGURATION1(a,b,c) CSR_TYPE_RSL
#define basename_CAVM_RFOEX_ABX_SLOTX_CONFIGURATION1(a,b,c) "RFOEX_ABX_SLOTX_CONFIGURATION1"
#define busnum_CAVM_RFOEX_ABX_SLOTX_CONFIGURATION1(a,b,c) (a)
#define arguments_CAVM_RFOEX_ABX_SLOTX_CONFIGURATION1(a,b,c) (a),(b),(c),-1

/**
 * Register (RSL) rfoe#_ab#_slot#_configuration2
 *
 * RFOE AB Job Configuration Register
 * This register space contains the RFOE job configuration data.
 *
 * Software should not write this register directly, but instead use this
 * format when writing the job configuration section of the job descriptor.
 */
union cavm_rfoex_abx_slotx_configuration2
{
    uint64_t u;
    struct cavm_rfoex_abx_slotx_configuration2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_59_63        : 5;
        uint64_t ptp_ring_id           : 2;  /**< [ 58: 57](R/W) TX PTP timestamp buffer ring in memory to use when writing the log message.
                                                                 Refer to RFOE()_LINK()_TX_PTP_RING_CTL and RFOE()_LINK()_TX_PTP_RING_ADDR
                                                                 for the memory buffer details */
        uint64_t cc_mac_sec_en         : 1;  /**< [ 56: 56](R/W) Channel Credit MAC Sec enable.
                                                                 When set to 1, Enables requesting 2 extra channel credits for packets destined to this LMAC. */
        uint64_t ecpri_seq_id          : 16; /**< [ 55: 40](R/W) eCPRI Transport Header Sequence ID field.
                                                                 When RFOE()_AB()_SLOT()_CONFIGURATION[PKT_MODE] = 1,
                                                                 and when RFOE()_AB()_SLOT()_CONFIGURATION[RFOE_MODE] = 1,
                                                                 and when RFOE()_AB()_SLOT()_CONFIGURATION2[ECPRI_SEQ_ID_INSERT] = 1
                                                                 this field is inserted in the eCPRI Transport Header. */
        uint64_t ecpri_id              : 16; /**< [ 39: 24](R/W) eCPRI Transport Header ID field.
                                                                 When RFOE()_AB()_SLOT()_CONFIGURATION[PKT_MODE] = 1,
                                                                 and when RFOE()_AB()_SLOT()_CONFIGURATION[RFOE_MODE] = 1,
                                                                 and when RFOE()_AB()_SLOT()_CONFIGURATION2[ECPRI_ID_INSERT] = 1
                                                                 this field is inserted in the eCPRI Transport Header.
                                                                 This could be used as the PC_ID or RTC_ID in the eCPRI Transport Header. */
        uint64_t ecpri_msgtype         : 8;  /**< [ 23: 16](R/W) eCPRI Common Header Message Type field.
                                                                 When RFOE()_AB()_SLOT()_CONFIGURATION[PKT_MODE] = 1,
                                                                 and when RFOE()_AB()_SLOT()_CONFIGURATION[RFOE_MODE] = 1
                                                                 this field is inserted as the second byte of the eCPRI Common Header */
        uint64_t ecpri_rev             : 8;  /**< [ 15:  8](R/W) eCPRI Common Header Revision-Version field.
                                                                 When RFOE()_AB()_SLOT()_CONFIGURATION[PKT_MODE] = 1,
                                                                 and when RFOE()_AB()_SLOT()_CONFIGURATION[RFOE_MODE] = 1
                                                                 this field is inserted as the first byte of the eCPRI Common Header */
        uint64_t ecpri_seq_id_insert   : 1;  /**< [  7:  7](R/W) eCPRI Transport Header Sequence ID field Insert.
                                                                 Used When RFOE()_AB()_SLOT()_CONFIGURATION[PKT_MODE] = 1,
                                                                 and when RFOE()_AB()_SLOT()_CONFIGURATION[RFOE_MODE] = 1
                                                                 When set to 1, the RFOE()_AB()_SLOT()_CONFIGURATION2[ECPRI_SEQ_ID]
                                                                 field is inserted in the eCPRI Transport Header. */
        uint64_t ecpri_id_insert       : 1;  /**< [  6:  6](R/W) eCPRI Transport Header ID field Insert.
                                                                 Used When RFOE()_AB()_SLOT()_CONFIGURATION[PKT_MODE] = 1,
                                                                 and when RFOE()_AB()_SLOT()_CONFIGURATION[RFOE_MODE] = 1
                                                                 When set to 1, the RFOE()_AB()_SLOT()_CONFIGURATION2[ECPRI_ID]
                                                                 field is inserted in the eCPRI Transport Header. */
        uint64_t ptp_mode              : 1;  /**< [  5:  5](R/W) TX PTP timestamp marker.
                                                                 When set to 1, causes the RPM to mark the current packet for timestamping.
                                                                 Setting this bit to 1 on consecutive packets can cause packet stall, until
                                                                 the previous PTP marked packet is sent out of RPM block.
                                                                 Please refer to RPM block for more details. */
        uint64_t vlan_num              : 2;  /**< [  4:  3](R/W) When RFOE()_AB()_SLOT()_CONFIGURATION[PKT_MODE]=1, selects the number of
                                                                 VLANs to insert in the Ethernet Header.
                                                                 Possible values 0 to 2.
                                                                 Ignored when RFOE()_AB()_SLOT()_CONFIGURATION[PKT_MODE] != 1. */
        uint64_t vlan_sel              : 3;  /**< [  2:  0](R/W) When RFOE()_AB()_SLOT()_CONFIGURATION[PKT_MODE]=1, selects which
                                                                 RFOE()_TX_HDR_VLAN() register provides the VLAN fields to insert in the
                                                                 Ethernet header. Ignored when RFOE()_AB()_SLOT()_CONFIGURATION[PKT_MODE] !=
                                                                 1. */
#else /* Word 0 - Little Endian */
        uint64_t vlan_sel              : 3;  /**< [  2:  0](R/W) When RFOE()_AB()_SLOT()_CONFIGURATION[PKT_MODE]=1, selects which
                                                                 RFOE()_TX_HDR_VLAN() register provides the VLAN fields to insert in the
                                                                 Ethernet header. Ignored when RFOE()_AB()_SLOT()_CONFIGURATION[PKT_MODE] !=
                                                                 1. */
        uint64_t vlan_num              : 2;  /**< [  4:  3](R/W) When RFOE()_AB()_SLOT()_CONFIGURATION[PKT_MODE]=1, selects the number of
                                                                 VLANs to insert in the Ethernet Header.
                                                                 Possible values 0 to 2.
                                                                 Ignored when RFOE()_AB()_SLOT()_CONFIGURATION[PKT_MODE] != 1. */
        uint64_t ptp_mode              : 1;  /**< [  5:  5](R/W) TX PTP timestamp marker.
                                                                 When set to 1, causes the RPM to mark the current packet for timestamping.
                                                                 Setting this bit to 1 on consecutive packets can cause packet stall, until
                                                                 the previous PTP marked packet is sent out of RPM block.
                                                                 Please refer to RPM block for more details. */
        uint64_t ecpri_id_insert       : 1;  /**< [  6:  6](R/W) eCPRI Transport Header ID field Insert.
                                                                 Used When RFOE()_AB()_SLOT()_CONFIGURATION[PKT_MODE] = 1,
                                                                 and when RFOE()_AB()_SLOT()_CONFIGURATION[RFOE_MODE] = 1
                                                                 When set to 1, the RFOE()_AB()_SLOT()_CONFIGURATION2[ECPRI_ID]
                                                                 field is inserted in the eCPRI Transport Header. */
        uint64_t ecpri_seq_id_insert   : 1;  /**< [  7:  7](R/W) eCPRI Transport Header Sequence ID field Insert.
                                                                 Used When RFOE()_AB()_SLOT()_CONFIGURATION[PKT_MODE] = 1,
                                                                 and when RFOE()_AB()_SLOT()_CONFIGURATION[RFOE_MODE] = 1
                                                                 When set to 1, the RFOE()_AB()_SLOT()_CONFIGURATION2[ECPRI_SEQ_ID]
                                                                 field is inserted in the eCPRI Transport Header. */
        uint64_t ecpri_rev             : 8;  /**< [ 15:  8](R/W) eCPRI Common Header Revision-Version field.
                                                                 When RFOE()_AB()_SLOT()_CONFIGURATION[PKT_MODE] = 1,
                                                                 and when RFOE()_AB()_SLOT()_CONFIGURATION[RFOE_MODE] = 1
                                                                 this field is inserted as the first byte of the eCPRI Common Header */
        uint64_t ecpri_msgtype         : 8;  /**< [ 23: 16](R/W) eCPRI Common Header Message Type field.
                                                                 When RFOE()_AB()_SLOT()_CONFIGURATION[PKT_MODE] = 1,
                                                                 and when RFOE()_AB()_SLOT()_CONFIGURATION[RFOE_MODE] = 1
                                                                 this field is inserted as the second byte of the eCPRI Common Header */
        uint64_t ecpri_id              : 16; /**< [ 39: 24](R/W) eCPRI Transport Header ID field.
                                                                 When RFOE()_AB()_SLOT()_CONFIGURATION[PKT_MODE] = 1,
                                                                 and when RFOE()_AB()_SLOT()_CONFIGURATION[RFOE_MODE] = 1,
                                                                 and when RFOE()_AB()_SLOT()_CONFIGURATION2[ECPRI_ID_INSERT] = 1
                                                                 this field is inserted in the eCPRI Transport Header.
                                                                 This could be used as the PC_ID or RTC_ID in the eCPRI Transport Header. */
        uint64_t ecpri_seq_id          : 16; /**< [ 55: 40](R/W) eCPRI Transport Header Sequence ID field.
                                                                 When RFOE()_AB()_SLOT()_CONFIGURATION[PKT_MODE] = 1,
                                                                 and when RFOE()_AB()_SLOT()_CONFIGURATION[RFOE_MODE] = 1,
                                                                 and when RFOE()_AB()_SLOT()_CONFIGURATION2[ECPRI_SEQ_ID_INSERT] = 1
                                                                 this field is inserted in the eCPRI Transport Header. */
        uint64_t cc_mac_sec_en         : 1;  /**< [ 56: 56](R/W) Channel Credit MAC Sec enable.
                                                                 When set to 1, Enables requesting 2 extra channel credits for packets destined to this LMAC. */
        uint64_t ptp_ring_id           : 2;  /**< [ 58: 57](R/W) TX PTP timestamp buffer ring in memory to use when writing the log message.
                                                                 Refer to RFOE()_LINK()_TX_PTP_RING_CTL and RFOE()_LINK()_TX_PTP_RING_ADDR
                                                                 for the memory buffer details */
        uint64_t reserved_59_63        : 5;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_abx_slotx_configuration2_s cn; */
};
typedef union cavm_rfoex_abx_slotx_configuration2 cavm_rfoex_abx_slotx_configuration2_t;

static inline uint64_t CAVM_RFOEX_ABX_SLOTX_CONFIGURATION2(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_ABX_SLOTX_CONFIGURATION2(uint64_t a, uint64_t b, uint64_t c)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=6) && (b<=1) && (c<=3)))
        return 0x87e042c02010ll + 0x80000ll * ((a) & 0x7) + 0x10000ll * ((b) & 0x1) + 0x2000ll * ((c) & 0x3);
    __cavm_csr_fatal("RFOEX_ABX_SLOTX_CONFIGURATION2", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_ABX_SLOTX_CONFIGURATION2(a,b,c) cavm_rfoex_abx_slotx_configuration2_t
#define bustype_CAVM_RFOEX_ABX_SLOTX_CONFIGURATION2(a,b,c) CSR_TYPE_RSL
#define basename_CAVM_RFOEX_ABX_SLOTX_CONFIGURATION2(a,b,c) "RFOEX_ABX_SLOTX_CONFIGURATION2"
#define busnum_CAVM_RFOEX_ABX_SLOTX_CONFIGURATION2(a,b,c) (a)
#define arguments_CAVM_RFOEX_ABX_SLOTX_CONFIGURATION2(a,b,c) (a),(b),(c),-1

/**
 * Register (RSL) rfoe#_ab#_slot#_configuration3
 *
 * RFOE AB Job Configuration Register
 * This register space contains the RFOE job configuration data.
 *
 * Software should not write this register directly, but instead use this
 * format when writing the job configuration section of the job descriptor.
 */
union cavm_rfoex_abx_slotx_configuration3
{
    uint64_t u;
    struct cavm_rfoex_abx_slotx_configuration3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_33_63        : 31;
        uint64_t tx_err                : 1;  /**< [ 32: 32](R/W) TX Error
                                                                 When set to 1, indicates the packet is errored and drop the packet. */
        uint64_t reserved_28_31        : 4;
        uint64_t p2x_channel_id        : 12; /**< [ 27: 16](R/W) P2X Channel ID. Destination channel ID used on the P2X interface.
                                                                 The bit field P2X_CHANNEL_ID[5:4] represent the LMAC ID of the packet sent.
                                                                 LMAC destination ID. Must select an enabled LMAC on which to send the
                                                                 packet. */
        uint64_t pkt_len               : 16; /**< [ 15:  0](R/W) The packet length.
                                                                 * When RFOE()_AB()_SLOT()_CONFIGURATION[PKT_MODE] = 0x0, the number of bytes
                                                                 to read from the memory.

                                                                 * When RFOE()_AB()_SLOT()_CONFIGURATION[RFOE_MODE] = 0, and
                                                                 RFOE()_AB()_SLOT()_CONFIGURATION[PKT_MODE] = 0x1 or 0x2, the number of
                                                                 samples to read from memory. Samples in memory are always 32 bits, with
                                                                 16-bit I and 16-bit Q components. In this case, [PKT_LEN] must be a
                                                                 multiple of 4.

                                                                 * When RFOE()_AB()_SLOT()_CONFIGURATION[RFOE_MODE] = 1, and
                                                                 RFOE()_AB()_SLOT()_CONFIGURATION[PKT_MODE] = 0x1 or 0x2, the number of
                                                                 bytes to read from memory. */
#else /* Word 0 - Little Endian */
        uint64_t pkt_len               : 16; /**< [ 15:  0](R/W) The packet length.
                                                                 * When RFOE()_AB()_SLOT()_CONFIGURATION[PKT_MODE] = 0x0, the number of bytes
                                                                 to read from the memory.

                                                                 * When RFOE()_AB()_SLOT()_CONFIGURATION[RFOE_MODE] = 0, and
                                                                 RFOE()_AB()_SLOT()_CONFIGURATION[PKT_MODE] = 0x1 or 0x2, the number of
                                                                 samples to read from memory. Samples in memory are always 32 bits, with
                                                                 16-bit I and 16-bit Q components. In this case, [PKT_LEN] must be a
                                                                 multiple of 4.

                                                                 * When RFOE()_AB()_SLOT()_CONFIGURATION[RFOE_MODE] = 1, and
                                                                 RFOE()_AB()_SLOT()_CONFIGURATION[PKT_MODE] = 0x1 or 0x2, the number of
                                                                 bytes to read from memory. */
        uint64_t p2x_channel_id        : 12; /**< [ 27: 16](R/W) P2X Channel ID. Destination channel ID used on the P2X interface.
                                                                 The bit field P2X_CHANNEL_ID[5:4] represent the LMAC ID of the packet sent.
                                                                 LMAC destination ID. Must select an enabled LMAC on which to send the
                                                                 packet. */
        uint64_t reserved_28_31        : 4;
        uint64_t tx_err                : 1;  /**< [ 32: 32](R/W) TX Error
                                                                 When set to 1, indicates the packet is errored and drop the packet. */
        uint64_t reserved_33_63        : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_abx_slotx_configuration3_s cn; */
};
typedef union cavm_rfoex_abx_slotx_configuration3 cavm_rfoex_abx_slotx_configuration3_t;

static inline uint64_t CAVM_RFOEX_ABX_SLOTX_CONFIGURATION3(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_ABX_SLOTX_CONFIGURATION3(uint64_t a, uint64_t b, uint64_t c)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=6) && (b<=1) && (c<=3)))
        return 0x87e042c02018ll + 0x80000ll * ((a) & 0x7) + 0x10000ll * ((b) & 0x1) + 0x2000ll * ((c) & 0x3);
    __cavm_csr_fatal("RFOEX_ABX_SLOTX_CONFIGURATION3", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_ABX_SLOTX_CONFIGURATION3(a,b,c) cavm_rfoex_abx_slotx_configuration3_t
#define bustype_CAVM_RFOEX_ABX_SLOTX_CONFIGURATION3(a,b,c) CSR_TYPE_RSL
#define basename_CAVM_RFOEX_ABX_SLOTX_CONFIGURATION3(a,b,c) "RFOEX_ABX_SLOTX_CONFIGURATION3"
#define busnum_CAVM_RFOEX_ABX_SLOTX_CONFIGURATION3(a,b,c) (a)
#define arguments_CAVM_RFOEX_ABX_SLOTX_CONFIGURATION3(a,b,c) (a),(b),(c),-1

/**
 * Register (RSL) rfoe#_ab#_slot#_configuration4
 *
 * RFOE AB Job Configuration Register
 * This register space contains the RFOE job configuration data.
 *
 * Software should not write this register directly, but instead use this
 * format when writing the job configuration section of the job descriptor.
 */
union cavm_rfoex_abx_slotx_configuration4
{
    uint64_t u;
    struct cavm_rfoex_abx_slotx_configuration4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_55_63        : 9;
        uint64_t ol4_insert            : 1;  /**< [ 54: 54](R/W) When set to 1, enables the insertion of the L4 Checksum result
                                                                 RFOE does not allocate bytes as it inserts the Checksum result into the packet,
                                                                 it overwrites pre-supplied packet header bytes.
                                                                 This is used in RFOE()_AB()_SLOT()_CONFIGURATION[PKT_MODE]=0x1 and 0x2 */
        uint64_t ol3_insert            : 1;  /**< [ 53: 53](R/W) When set to 1, enables the insertion of the L3 Checksum result
                                                                 RFOE does not allocate bytes as it inserts the Checksum result into the packet,
                                                                 it overwrites pre-supplied packet header bytes.
                                                                 This is used in RFOE()_AB()_SLOT()_CONFIGURATION[PKT_MODE]=0x1 and 0x2 */
        uint64_t ol4_type              : 3;  /**< [ 52: 50](R/W) Outer Layer 4 type enumerated by RFOE_TX_L4_TYPE_E. If checksum
                                                                 generation is specified, hardware includes all packet data following
                                                                 the Outer layer 4 header in the checksum calculation.
                                                                 Hardware does not use IP or UDP length fields in the packet to
                                                                 determine the layer 4 checksum region. */
        uint64_t ol3_type              : 2;  /**< [ 49: 48](R/W) Outer Layer 3 type enumerated by RFOE_TX_L3_TYPE_E. */
        uint64_t ol4_ptr               : 8;  /**< [ 47: 40](R/W) Outer Layer 4 pointer. Byte offset from packet start to first byte of
                                                                 Outer L4 header, if present, before any VLAN or Vtag insertion. Must be even.
                                                                 Must be valid when used by a selected checksum algorithm.
                                                                 Note: The L4 Header must be contained within the first 255 bytes of
                                                                 packet data. */
        uint64_t ol3_ptr               : 8;  /**< [ 39: 32](R/W) Outer Layer 3 pointer. Byte offset from packet start to first byte of
                                                                 Outer L3 header, if present, before any VLAN or Vtag insertion. Must be even.
                                                                 Must be valid when used by a selected checksum algorithm. */
        uint64_t reserved_23_31        : 9;
        uint64_t il4_insert            : 1;  /**< [ 22: 22](R/W) When set to 1, enables the insertion of the L4 Checksum result
                                                                 RFOE does not allocate bytes as it inserts the Checksum result into the packet,
                                                                 it overwrites pre-supplied packet header bytes.
                                                                 This is used in RFOE()_AB()_SLOT()_CONFIGURATION[PKT_MODE]=0x1 and 0x2 */
        uint64_t il3_insert            : 1;  /**< [ 21: 21](R/W) When set to 1, enables the insertion of the L3 Checksum result
                                                                 RFOE does not allocate bytes as it inserts the Checksum result into the packet,
                                                                 it overwrites pre-supplied packet header bytes.
                                                                 This is used in RFOE()_AB()_SLOT()_CONFIGURATION[PKT_MODE]=0x1 and 0x2 */
        uint64_t il4_type              : 3;  /**< [ 20: 18](R/W) Inner Layer 4 type enumerated by RFOE_TX_L4_TYPE_E. If checksum
                                                                 generation is specified, hardware includes all packet data following
                                                                 the Inner layer 4 header in the checksum calculation.
                                                                 Hardware does not use IP or UDP length fields in the packet to
                                                                 determine the layer 4 checksum region. */
        uint64_t il3_type              : 2;  /**< [ 17: 16](R/W) Inner Layer 3 type enumerated by RFOE_TX_L3_TYPE_E. */
        uint64_t il4_ptr               : 8;  /**< [ 15:  8](R/W) Inner Layer 4 pointer. Byte offset from packet start to first byte of
                                                                 Inner L4 header, if present, before any VLAN or Vtag insertion. Must be even.
                                                                 Must be valid when used by a selected checksum algorithm.
                                                                 Note: The L4 Header must be contained within the first 255 bytes of
                                                                 packet data. */
        uint64_t il3_ptr               : 8;  /**< [  7:  0](R/W) Inner Layer 3 pointer. Byte offset from packet start to first byte of
                                                                 Inner L3 header, if present, before any VLAN or Vtag insertion. Must be even.
                                                                 Must be valid when used by a selected checksum algorithm. */
#else /* Word 0 - Little Endian */
        uint64_t il3_ptr               : 8;  /**< [  7:  0](R/W) Inner Layer 3 pointer. Byte offset from packet start to first byte of
                                                                 Inner L3 header, if present, before any VLAN or Vtag insertion. Must be even.
                                                                 Must be valid when used by a selected checksum algorithm. */
        uint64_t il4_ptr               : 8;  /**< [ 15:  8](R/W) Inner Layer 4 pointer. Byte offset from packet start to first byte of
                                                                 Inner L4 header, if present, before any VLAN or Vtag insertion. Must be even.
                                                                 Must be valid when used by a selected checksum algorithm.
                                                                 Note: The L4 Header must be contained within the first 255 bytes of
                                                                 packet data. */
        uint64_t il3_type              : 2;  /**< [ 17: 16](R/W) Inner Layer 3 type enumerated by RFOE_TX_L3_TYPE_E. */
        uint64_t il4_type              : 3;  /**< [ 20: 18](R/W) Inner Layer 4 type enumerated by RFOE_TX_L4_TYPE_E. If checksum
                                                                 generation is specified, hardware includes all packet data following
                                                                 the Inner layer 4 header in the checksum calculation.
                                                                 Hardware does not use IP or UDP length fields in the packet to
                                                                 determine the layer 4 checksum region. */
        uint64_t il3_insert            : 1;  /**< [ 21: 21](R/W) When set to 1, enables the insertion of the L3 Checksum result
                                                                 RFOE does not allocate bytes as it inserts the Checksum result into the packet,
                                                                 it overwrites pre-supplied packet header bytes.
                                                                 This is used in RFOE()_AB()_SLOT()_CONFIGURATION[PKT_MODE]=0x1 and 0x2 */
        uint64_t il4_insert            : 1;  /**< [ 22: 22](R/W) When set to 1, enables the insertion of the L4 Checksum result
                                                                 RFOE does not allocate bytes as it inserts the Checksum result into the packet,
                                                                 it overwrites pre-supplied packet header bytes.
                                                                 This is used in RFOE()_AB()_SLOT()_CONFIGURATION[PKT_MODE]=0x1 and 0x2 */
        uint64_t reserved_23_31        : 9;
        uint64_t ol3_ptr               : 8;  /**< [ 39: 32](R/W) Outer Layer 3 pointer. Byte offset from packet start to first byte of
                                                                 Outer L3 header, if present, before any VLAN or Vtag insertion. Must be even.
                                                                 Must be valid when used by a selected checksum algorithm. */
        uint64_t ol4_ptr               : 8;  /**< [ 47: 40](R/W) Outer Layer 4 pointer. Byte offset from packet start to first byte of
                                                                 Outer L4 header, if present, before any VLAN or Vtag insertion. Must be even.
                                                                 Must be valid when used by a selected checksum algorithm.
                                                                 Note: The L4 Header must be contained within the first 255 bytes of
                                                                 packet data. */
        uint64_t ol3_type              : 2;  /**< [ 49: 48](R/W) Outer Layer 3 type enumerated by RFOE_TX_L3_TYPE_E. */
        uint64_t ol4_type              : 3;  /**< [ 52: 50](R/W) Outer Layer 4 type enumerated by RFOE_TX_L4_TYPE_E. If checksum
                                                                 generation is specified, hardware includes all packet data following
                                                                 the Outer layer 4 header in the checksum calculation.
                                                                 Hardware does not use IP or UDP length fields in the packet to
                                                                 determine the layer 4 checksum region. */
        uint64_t ol3_insert            : 1;  /**< [ 53: 53](R/W) When set to 1, enables the insertion of the L3 Checksum result
                                                                 RFOE does not allocate bytes as it inserts the Checksum result into the packet,
                                                                 it overwrites pre-supplied packet header bytes.
                                                                 This is used in RFOE()_AB()_SLOT()_CONFIGURATION[PKT_MODE]=0x1 and 0x2 */
        uint64_t ol4_insert            : 1;  /**< [ 54: 54](R/W) When set to 1, enables the insertion of the L4 Checksum result
                                                                 RFOE does not allocate bytes as it inserts the Checksum result into the packet,
                                                                 it overwrites pre-supplied packet header bytes.
                                                                 This is used in RFOE()_AB()_SLOT()_CONFIGURATION[PKT_MODE]=0x1 and 0x2 */
        uint64_t reserved_55_63        : 9;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_abx_slotx_configuration4_s cn; */
};
typedef union cavm_rfoex_abx_slotx_configuration4 cavm_rfoex_abx_slotx_configuration4_t;

static inline uint64_t CAVM_RFOEX_ABX_SLOTX_CONFIGURATION4(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_ABX_SLOTX_CONFIGURATION4(uint64_t a, uint64_t b, uint64_t c)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=6) && (b<=1) && (c<=3)))
        return 0x87e042c02020ll + 0x80000ll * ((a) & 0x7) + 0x10000ll * ((b) & 0x1) + 0x2000ll * ((c) & 0x3);
    __cavm_csr_fatal("RFOEX_ABX_SLOTX_CONFIGURATION4", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_ABX_SLOTX_CONFIGURATION4(a,b,c) cavm_rfoex_abx_slotx_configuration4_t
#define bustype_CAVM_RFOEX_ABX_SLOTX_CONFIGURATION4(a,b,c) CSR_TYPE_RSL
#define basename_CAVM_RFOEX_ABX_SLOTX_CONFIGURATION4(a,b,c) "RFOEX_ABX_SLOTX_CONFIGURATION4"
#define busnum_CAVM_RFOEX_ABX_SLOTX_CONFIGURATION4(a,b,c) (a)
#define arguments_CAVM_RFOEX_ABX_SLOTX_CONFIGURATION4(a,b,c) (a),(b),(c),-1

#endif /* __CAVM_CSRS_RFOE_TX_AB_H__ */
