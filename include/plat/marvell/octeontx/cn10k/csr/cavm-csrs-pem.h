#ifndef __CAVM_CSRS_PEM_H__
#define __CAVM_CSRS_PEM_H__
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
 * OcteonTX PEM.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration pem_bar_e
 *
 * PEM Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define CAVM_PEM_BAR_E_PEMX_PF_BAR0(a) (0x8e0000000000ll + 0x1000000000ll * (a))
#define CAVM_PEM_BAR_E_PEMX_PF_BAR0_SIZE 0x40000000ull
#define CAVM_PEM_BAR_E_PEMX_PF_BAR4(a) (0x8e0f00000000ll + 0x1000000000ll * (a))
#define CAVM_PEM_BAR_E_PEMX_PF_BAR4_SIZE 0x100000ull

/**
 * Enumeration pem_int_vec_e
 *
 * PEM MSI-X Vector Enumeration
 * Enumerates the MSI-X interrupt vectors.
 */
#define CAVM_PEM_INT_VEC_E_INTA (0)
#define CAVM_PEM_INT_VEC_E_INTA_CLEAR (1)
#define CAVM_PEM_INT_VEC_E_INTB (2)
#define CAVM_PEM_INT_VEC_E_INTB_CLEAR (3)
#define CAVM_PEM_INT_VEC_E_INTC (4)
#define CAVM_PEM_INT_VEC_E_INTC_CLEAR (5)
#define CAVM_PEM_INT_VEC_E_INTD (6)
#define CAVM_PEM_INT_VEC_E_INTD_CLEAR (7)
#define CAVM_PEM_INT_VEC_E_INT_SUM (8)
#define CAVM_PEM_INT_VEC_E_RST_INT (9)

/**
 * Enumeration pem_perf_bus_e
 *
 * PEM Performance Bus Enumeration
 * Enumerates the internal bus associated with performance tracking registers.
 */
#define CAVM_PEM_PERF_BUS_E_PERF_EBUS (1)
#define CAVM_PEM_PERF_BUS_E_PERF_NCB (0)

/**
 * Enumeration pem_perf_tlp_type_e
 *
 * PEM Performance TLP Type Enumeration
 * Enumerates the TLP type associated with performance tracking registers that are by type.
 */
#define CAVM_PEM_PERF_TLP_TYPE_E_PERF_CPL (2)
#define CAVM_PEM_PERF_TLP_TYPE_E_PERF_NPR (0)
#define CAVM_PEM_PERF_TLP_TYPE_E_PERF_PR (1)

/**
 * Enumeration pem_rst_source_e
 *
 * PEM Reset Cause Enumeration
 * Enumerates the reset sources for both reset domain mapping and cause of last reset,
 * corresponding to the bit numbers of PEM()_RST_LBOOT.
 */
#define CAVM_PEM_RST_SOURCE_E_L2 (2)
#define CAVM_PEM_RST_SOURCE_E_LINKDOWN (1)
#define CAVM_PEM_RST_SOURCE_E_PEM_PFFLR (3)
#define CAVM_PEM_RST_SOURCE_E_PEM_RSVD (4)
#define CAVM_PEM_RST_SOURCE_E_PERST_PIN (0)

/**
 * Structure pem_ncbo_norm_memio_s
 *
 * NCB to MAC Operation Structure
 * Core initiated load and store operations that are initiating MAC transactions form an address
 * with this structure through the PEM()_REG_NORM()_ACC table. 8-bit, 16-bit, 32-bit and 64-bit
 * reads and writes, in addition to atomics are supported to this region.
 */
union cavm_pem_ncbo_norm_memio_s
{
    uint64_t u;
    struct cavm_pem_ncbo_norm_memio_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_52_63        : 12;
        uint64_t io                    : 5;  /**< [ 51: 47] Indicates IO space. */
        uint64_t reserved_46           : 1;
        uint64_t node                  : 2;  /**< [ 45: 44] Reserved. */
        uint64_t did_hi                : 5;  /**< [ 43: 39] PEM high device ID bits \<7:3\>. */
        uint64_t region                : 8;  /**< [ 38: 31] ACC region.  Indexes into PEM()_REG_NORM()_ACC. */
        uint64_t addr                  : 31; /**< [ 30:  0] Register address within the device. */
#else /* Word 0 - Little Endian */
        uint64_t addr                  : 31; /**< [ 30:  0] Register address within the device. */
        uint64_t region                : 8;  /**< [ 38: 31] ACC region.  Indexes into PEM()_REG_NORM()_ACC. */
        uint64_t did_hi                : 5;  /**< [ 43: 39] PEM high device ID bits \<7:3\>. */
        uint64_t node                  : 2;  /**< [ 45: 44] Reserved. */
        uint64_t reserved_46           : 1;
        uint64_t io                    : 5;  /**< [ 51: 47] Indicates IO space. */
        uint64_t reserved_52_63        : 12;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pem_ncbo_norm_memio_s_s cn; */
};

/**
 * Register (NCB) pem#_bar2_mask
 *
 * PEM BAR2 Mask Register
 * This register contains the mask pattern that is ANDed with the address from the PCIe core for
 * inbound PF BAR2 hits in either RC or EP mode. This mask is only applied if
 * PEM()_EBUS_CTL[PF_BAR2_SEL] is clear and the address hits in the PCIEEP_BAR2L / PCIEEP_BAR2U
 * registers (EP mode) or PEM()_P2N_BAR2_START / PEM()_BAR_CTL[BAR2_SIZ] registers (RC mode).
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 */
union cavm_pemx_bar2_mask
{
    uint64_t u;
    struct cavm_pemx_bar2_mask_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t mask                  : 49; /**< [ 52:  4](R/W) The value to be ANDed with the address sent to memory (to IOB). */
        uint64_t reserved_0_3          : 4;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_3          : 4;
        uint64_t mask                  : 49; /**< [ 52:  4](R/W) The value to be ANDed with the address sent to memory (to IOB). */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_bar2_mask_s cn; */
};
typedef union cavm_pemx_bar2_mask cavm_pemx_bar2_mask_t;

static inline uint64_t CAVM_PEMX_BAR2_MASK(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_BAR2_MASK(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8e0000000048ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x8e0000000048ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8e0000000048ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8e0000000048ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("PEMX_BAR2_MASK", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_BAR2_MASK(a) cavm_pemx_bar2_mask_t
#define bustype_CAVM_PEMX_BAR2_MASK(a) CSR_TYPE_NCB
#define basename_CAVM_PEMX_BAR2_MASK(a) "PEMX_BAR2_MASK"
#define device_bar_CAVM_PEMX_BAR2_MASK(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_BAR2_MASK(a) (a)
#define arguments_CAVM_PEMX_BAR2_MASK(a) (a),-1,-1,-1

/**
 * Register (NCB) pem#_bar4_index#
 *
 * PEM BAR4 Index 0-15 Register
 * This register contains the address index and control bits for access to memory ranges of BAR4.
 * The index is built from the PCI inbound address \<25:22\>. The bits in this register only apply to
 * inbound accesses targeting the NCB bus in both RC and EP modes, this register is ignored
 * when PEM()_EBUS_CTL[PF_BAR4_SEL] is set.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 */
union cavm_pemx_bar4_indexx
{
    uint64_t u;
    struct cavm_pemx_bar4_indexx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_35_63        : 29;
        uint64_t addr_idx              : 31; /**< [ 34:  4](R/W) Address index. IOVA \<52:22\> sent to NCB. */
        uint64_t ca                    : 1;  /**< [  3:  3](R/W) Cached. Set to 1 when access is not to be cached in LLC. */
        uint64_t reserved_1_2          : 2;
        uint64_t addr_v                : 1;  /**< [  0:  0](R/W) Address valid. Set to 1 when the selected address range is valid. */
#else /* Word 0 - Little Endian */
        uint64_t addr_v                : 1;  /**< [  0:  0](R/W) Address valid. Set to 1 when the selected address range is valid. */
        uint64_t reserved_1_2          : 2;
        uint64_t ca                    : 1;  /**< [  3:  3](R/W) Cached. Set to 1 when access is not to be cached in LLC. */
        uint64_t addr_idx              : 31; /**< [ 34:  4](R/W) Address index. IOVA \<52:22\> sent to NCB. */
        uint64_t reserved_35_63        : 29;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_bar4_indexx_s cn; */
};
typedef union cavm_pemx_bar4_indexx cavm_pemx_bar4_indexx_t;

static inline uint64_t CAVM_PEMX_BAR4_INDEXX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_BAR4_INDEXX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=5) && (b<=15)))
        return 0x8e0000000700ll + 0x1000000000ll * ((a) & 0x7) + 8ll * ((b) & 0xf);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=5) && (b<=15)))
        return 0x8e0000000700ll + 0x1000000000ll * ((a) & 0x7) + 8ll * ((b) & 0xf);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=1) && (b<=15)))
        return 0x8e0000000700ll + 0x1000000000ll * ((a) & 0x1) + 8ll * ((b) & 0xf);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=1) && (b<=15)))
        return 0x8e0000000700ll + 0x1000000000ll * ((a) & 0x1) + 8ll * ((b) & 0xf);
    __cavm_csr_fatal("PEMX_BAR4_INDEXX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_BAR4_INDEXX(a,b) cavm_pemx_bar4_indexx_t
#define bustype_CAVM_PEMX_BAR4_INDEXX(a,b) CSR_TYPE_NCB
#define basename_CAVM_PEMX_BAR4_INDEXX(a,b) "PEMX_BAR4_INDEXX"
#define device_bar_CAVM_PEMX_BAR4_INDEXX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_BAR4_INDEXX(a,b) (a)
#define arguments_CAVM_PEMX_BAR4_INDEXX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) pem#_bar_ctl
 *
 * PEM BAR Control Register
 * This register contains control for BAR accesses. This control always
 * applies to memory accesses targeting the NCBI bus. Some of the fields also
 * apply to accesses targeting EBUS in RC mode only, see the individual field
 * descriptions for more detail.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 */
union cavm_pemx_bar_ctl
{
    uint64_t u;
    struct cavm_pemx_bar_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_41_63        : 23;
        uint64_t stream_bits           : 5;  /**< [ 40: 36](R/W) When in endpoint mode, determines the formation of the inbound transaction's SMMU stream ID.
                                                                 When in RC mode or [STREAM_BITS] is zero, the stream ID is the PEM bus's ECAM domain
                                                                 (PCC_DEV_CON_E::PCIERC()\<21:16\>), concatenated with the inbound 16-bit requester ID (see the
                                                                 PCC chapter). When in endpoint mode and [STREAM_BITS] is 1..16, [STREAM_BITS] number of least
                                                                 significant bits of the requester ID are zeroed out before performing the above concatenation.

                                                                 0x0  = Stream ID is {PEM ECAM domain\<21:16\>, PCIe inbound requester\<15:0\>}.
                                                                 0x1  = Stream ID is {PEM ECAM domain\<21:16\>, PCIe inbound requester\<15:1\>, 0\<0\>}.
                                                                 0x2  = Stream ID is {PEM ECAM domain\<21:16\>, PCIe inbound requester\<15:2\>, 0\<1:0\>}.
                                                                 _ ...
                                                                 0xf = Stream ID is {PEM ECAM domain\<21:16\>, PCIe inbound requester\<15\>, 0\<14:0\>}.
                                                                 0x10 = Stream ID is {PEM ECAM domain\<21:16\>, 0}.
                                                                 0x11 and above = Reserved. */
        uint64_t vf_bar0_enb           : 1;  /**< [ 35: 35](R/W) This bit controls whether BAR0 for all virtual functions is enabled.

                                                                 In RC mode:
                                                                 * VF BAR0 does not exist. This bit has no effect.

                                                                 In EP mode:

                                                                  * VF BAR0 hits are based on a combination of this bit and
                                                                  config registers PCIEEP_SRIOV_BAR0U, PCIEEP_SRIOV_BAR0L, and
                                                                  PCIEEP_SRIOV_CTL[VFE].  Both PCIEEP_SRIOV_CTL[VFE] and this
                                                                  bit must be set to enable a VF BAR0 hit to the PCI address
                                                                  specified by PCIEEP_SRIOV_BAR0U / PCIEEP_SRIOV_BAR0L. */
        uint64_t reserved_32_34        : 3;
        uint64_t bar4_enb              : 1;  /**< [ 31: 31](R/W) In RC mode:
                                                                  0 = BAR4 access will cause UR responses. This applies no
                                                                  matter the value of PEM()_EBUS_CTL[PF_BAR4_SEL].
                                                                  1 = BAR4 is enabled and will respond if the corresponding
                                                                  bits in PEM()_BAR4_INDEX() are set and the address matches
                                                                  an enabled indexed address range.

                                                                 In EP mode:

                                                                  * If PEM()_EBUS_CTL[PF_BAR4_SEL] is set, BAR4 hits are based on
                                                                  a combination of this bit and config registers PCIEEP_BAR4U / PCIEEP_BAR4L.
                                                                  Both enable bits must be set to enable a BAR4 hit.
                                                                  * If PEM()_EBUS_CTL[PF_BAR4_SEL] is clear, BAR4 hits are based
                                                                  on a combination of this bit, the config registers PCIEEP_BAR4U /
                                                                  PCIEEP_BAR4L, and the PEM()_BAR4_INDEX() registers.
                                                                  Both enable bits must be set along with the appropriate bits in
                                                                  PEM()_BAR4_INDEX() in order for a BAR4 access to respond. */
        uint64_t bar0_siz              : 5;  /**< [ 30: 26](R/W) PCIe BAR0 size.
                                                                 0x0 = Reserved.
                                                                 0x1 = 64 KB; 2^16.
                                                                 0x2 = 128 KB; 2^17.
                                                                 0x3 = 256 KB; 2^18.
                                                                 0x4 = 512 KB; 2^19.
                                                                 0x5 = 1 MB; 2^20.
                                                                 0x6 = 2 MB; 2^21.
                                                                 0x7 = 4 MB; 2^22.
                                                                 0x8 = 8 MB; 2^23.
                                                                 0x9 = 16 MB; 2^24.
                                                                 0xA = 32 MB; 2^25.
                                                                 0xB = 64 MB; 2^26.
                                                                 0xC - 0x1F = Reserved.

                                                                 This field may not be changed while any of [BAR0_ENB], [BAR2_ENB], [BAR4_ENB],
                                                                 or [VF_BAR0_ENB] are set. Wait 1 ms after writing this field to set any of
                                                                 the [*_ENB] bits. */
        uint64_t bar0_enb              : 1;  /**< [ 25: 25](R/W) In RC mode:
                                                                  0 = BAR0 access will cause UR responses. This applies no
                                                                  matter the value of PEM()_EBUS_CTL[PF_BAR0_SEL].
                                                                  1 = BAR0 is enabled and will respond.

                                                                 In EP mode:

                                                                  * BAR0 hits are based on a combination of this bit and
                                                                  config registers PCIEEP_BAR0U / PCIEEP_BAR0L. Both enable
                                                                  bits must be set to enable a BAR0 hit. */
        uint64_t reserved_19_24        : 6;
        uint64_t bar2_cbit             : 6;  /**< [ 18: 13](R/W) Address bit to be mapped to BAR2's CAX. When 0x0, BAR2's CAX is disabled;
                                                                 otherwise must be 16 to 63 inclusive. Not used if PEM()_EBUS_CTL[PF_BAR2_SEL]
                                                                 is set.

                                                                 This field may not be changed while any of [BAR0_ENB], [BAR2_ENB], [BAR4_ENB],
                                                                 or [VF_BAR0_ENB] are set. Wait 1 ms after writing this field to set any of
                                                                 the [*_ENB] bits. */
        uint64_t bar2_siz              : 6;  /**< [ 12:  7](R/W) BAR2 size. Encoded similar to PCIEEP_RBAR_CTL[RBARS]. Used in RC mode to create
                                                                 a mask that is ANDED with the address prior to applying
                                                                 [BAR2_CAX]. Defaults to 0x21 (8192 TB). */
        uint64_t bar4_siz              : 3;  /**< [  6:  4](R/W) PCIe Port 0 BAR4 size.
                                                                 0x0 = Reserved.
                                                                 0x1 = 64 MB; 2^26.
                                                                 0x2 = 128 MB; 2^27.
                                                                 0x3 = 256 MB; 2^28.
                                                                 0x4 = 512 MB; 2^29.
                                                                 0x5 = 1024 MB; 2^30.
                                                                 0x6 = 2048 MB; 2^31.
                                                                 0x7 = Reserved.

                                                                 This field may not be changed while any of [BAR0_ENB], [BAR2_ENB], [BAR4_ENB],
                                                                 or [VF_BAR0_ENB] are set. Wait 1 ms after writing this field to set any of
                                                                 the [*_ENB] bits. */
        uint64_t bar2_enb              : 1;  /**< [  3:  3](R/W) In RC mode:
                                                                  0 = BAR2 access will cause UR responses. This applies no
                                                                  matter the value of PEM()_EBUS_CTL[PF_BAR2_SEL].
                                                                  1 = BAR2 is enabled and will respond.

                                                                 In EP mode:

                                                                  * BAR2 hits are based on a combination of this bit and
                                                                  config registers PCIEEP_BAR2U / PCIEEP_BAR2L. Both enable
                                                                  bits must be set to enable a BAR2 hit. */
        uint64_t reserved_1_2          : 2;
        uint64_t bar2_cax              : 1;  /**< [  0:  0](R/W) Value is XORed with PCIe address as defined by [BAR2_CBIT] to determine the LLC
                                                                 cache attribute. Not cached in LLC if XOR result is 1. Not used if PEM()_EBUS_CTL[PF_BAR2_SEL]
                                                                 is set.

                                                                 This field may not be changed while any of [BAR0_ENB], [BAR2_ENB], [BAR4_ENB],
                                                                 or [VF_BAR0_ENB] are set. Wait 1 ms after writing this field to set any of
                                                                 the [*_ENB] bits. */
#else /* Word 0 - Little Endian */
        uint64_t bar2_cax              : 1;  /**< [  0:  0](R/W) Value is XORed with PCIe address as defined by [BAR2_CBIT] to determine the LLC
                                                                 cache attribute. Not cached in LLC if XOR result is 1. Not used if PEM()_EBUS_CTL[PF_BAR2_SEL]
                                                                 is set.

                                                                 This field may not be changed while any of [BAR0_ENB], [BAR2_ENB], [BAR4_ENB],
                                                                 or [VF_BAR0_ENB] are set. Wait 1 ms after writing this field to set any of
                                                                 the [*_ENB] bits. */
        uint64_t reserved_1_2          : 2;
        uint64_t bar2_enb              : 1;  /**< [  3:  3](R/W) In RC mode:
                                                                  0 = BAR2 access will cause UR responses. This applies no
                                                                  matter the value of PEM()_EBUS_CTL[PF_BAR2_SEL].
                                                                  1 = BAR2 is enabled and will respond.

                                                                 In EP mode:

                                                                  * BAR2 hits are based on a combination of this bit and
                                                                  config registers PCIEEP_BAR2U / PCIEEP_BAR2L. Both enable
                                                                  bits must be set to enable a BAR2 hit. */
        uint64_t bar4_siz              : 3;  /**< [  6:  4](R/W) PCIe Port 0 BAR4 size.
                                                                 0x0 = Reserved.
                                                                 0x1 = 64 MB; 2^26.
                                                                 0x2 = 128 MB; 2^27.
                                                                 0x3 = 256 MB; 2^28.
                                                                 0x4 = 512 MB; 2^29.
                                                                 0x5 = 1024 MB; 2^30.
                                                                 0x6 = 2048 MB; 2^31.
                                                                 0x7 = Reserved.

                                                                 This field may not be changed while any of [BAR0_ENB], [BAR2_ENB], [BAR4_ENB],
                                                                 or [VF_BAR0_ENB] are set. Wait 1 ms after writing this field to set any of
                                                                 the [*_ENB] bits. */
        uint64_t bar2_siz              : 6;  /**< [ 12:  7](R/W) BAR2 size. Encoded similar to PCIEEP_RBAR_CTL[RBARS]. Used in RC mode to create
                                                                 a mask that is ANDED with the address prior to applying
                                                                 [BAR2_CAX]. Defaults to 0x21 (8192 TB). */
        uint64_t bar2_cbit             : 6;  /**< [ 18: 13](R/W) Address bit to be mapped to BAR2's CAX. When 0x0, BAR2's CAX is disabled;
                                                                 otherwise must be 16 to 63 inclusive. Not used if PEM()_EBUS_CTL[PF_BAR2_SEL]
                                                                 is set.

                                                                 This field may not be changed while any of [BAR0_ENB], [BAR2_ENB], [BAR4_ENB],
                                                                 or [VF_BAR0_ENB] are set. Wait 1 ms after writing this field to set any of
                                                                 the [*_ENB] bits. */
        uint64_t reserved_19_24        : 6;
        uint64_t bar0_enb              : 1;  /**< [ 25: 25](R/W) In RC mode:
                                                                  0 = BAR0 access will cause UR responses. This applies no
                                                                  matter the value of PEM()_EBUS_CTL[PF_BAR0_SEL].
                                                                  1 = BAR0 is enabled and will respond.

                                                                 In EP mode:

                                                                  * BAR0 hits are based on a combination of this bit and
                                                                  config registers PCIEEP_BAR0U / PCIEEP_BAR0L. Both enable
                                                                  bits must be set to enable a BAR0 hit. */
        uint64_t bar0_siz              : 5;  /**< [ 30: 26](R/W) PCIe BAR0 size.
                                                                 0x0 = Reserved.
                                                                 0x1 = 64 KB; 2^16.
                                                                 0x2 = 128 KB; 2^17.
                                                                 0x3 = 256 KB; 2^18.
                                                                 0x4 = 512 KB; 2^19.
                                                                 0x5 = 1 MB; 2^20.
                                                                 0x6 = 2 MB; 2^21.
                                                                 0x7 = 4 MB; 2^22.
                                                                 0x8 = 8 MB; 2^23.
                                                                 0x9 = 16 MB; 2^24.
                                                                 0xA = 32 MB; 2^25.
                                                                 0xB = 64 MB; 2^26.
                                                                 0xC - 0x1F = Reserved.

                                                                 This field may not be changed while any of [BAR0_ENB], [BAR2_ENB], [BAR4_ENB],
                                                                 or [VF_BAR0_ENB] are set. Wait 1 ms after writing this field to set any of
                                                                 the [*_ENB] bits. */
        uint64_t bar4_enb              : 1;  /**< [ 31: 31](R/W) In RC mode:
                                                                  0 = BAR4 access will cause UR responses. This applies no
                                                                  matter the value of PEM()_EBUS_CTL[PF_BAR4_SEL].
                                                                  1 = BAR4 is enabled and will respond if the corresponding
                                                                  bits in PEM()_BAR4_INDEX() are set and the address matches
                                                                  an enabled indexed address range.

                                                                 In EP mode:

                                                                  * If PEM()_EBUS_CTL[PF_BAR4_SEL] is set, BAR4 hits are based on
                                                                  a combination of this bit and config registers PCIEEP_BAR4U / PCIEEP_BAR4L.
                                                                  Both enable bits must be set to enable a BAR4 hit.
                                                                  * If PEM()_EBUS_CTL[PF_BAR4_SEL] is clear, BAR4 hits are based
                                                                  on a combination of this bit, the config registers PCIEEP_BAR4U /
                                                                  PCIEEP_BAR4L, and the PEM()_BAR4_INDEX() registers.
                                                                  Both enable bits must be set along with the appropriate bits in
                                                                  PEM()_BAR4_INDEX() in order for a BAR4 access to respond. */
        uint64_t reserved_32_34        : 3;
        uint64_t vf_bar0_enb           : 1;  /**< [ 35: 35](R/W) This bit controls whether BAR0 for all virtual functions is enabled.

                                                                 In RC mode:
                                                                 * VF BAR0 does not exist. This bit has no effect.

                                                                 In EP mode:

                                                                  * VF BAR0 hits are based on a combination of this bit and
                                                                  config registers PCIEEP_SRIOV_BAR0U, PCIEEP_SRIOV_BAR0L, and
                                                                  PCIEEP_SRIOV_CTL[VFE].  Both PCIEEP_SRIOV_CTL[VFE] and this
                                                                  bit must be set to enable a VF BAR0 hit to the PCI address
                                                                  specified by PCIEEP_SRIOV_BAR0U / PCIEEP_SRIOV_BAR0L. */
        uint64_t stream_bits           : 5;  /**< [ 40: 36](R/W) When in endpoint mode, determines the formation of the inbound transaction's SMMU stream ID.
                                                                 When in RC mode or [STREAM_BITS] is zero, the stream ID is the PEM bus's ECAM domain
                                                                 (PCC_DEV_CON_E::PCIERC()\<21:16\>), concatenated with the inbound 16-bit requester ID (see the
                                                                 PCC chapter). When in endpoint mode and [STREAM_BITS] is 1..16, [STREAM_BITS] number of least
                                                                 significant bits of the requester ID are zeroed out before performing the above concatenation.

                                                                 0x0  = Stream ID is {PEM ECAM domain\<21:16\>, PCIe inbound requester\<15:0\>}.
                                                                 0x1  = Stream ID is {PEM ECAM domain\<21:16\>, PCIe inbound requester\<15:1\>, 0\<0\>}.
                                                                 0x2  = Stream ID is {PEM ECAM domain\<21:16\>, PCIe inbound requester\<15:2\>, 0\<1:0\>}.
                                                                 _ ...
                                                                 0xf = Stream ID is {PEM ECAM domain\<21:16\>, PCIe inbound requester\<15\>, 0\<14:0\>}.
                                                                 0x10 = Stream ID is {PEM ECAM domain\<21:16\>, 0}.
                                                                 0x11 and above = Reserved. */
        uint64_t reserved_41_63        : 23;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_bar_ctl_s cn; */
};
typedef union cavm_pemx_bar_ctl cavm_pemx_bar_ctl_t;

static inline uint64_t CAVM_PEMX_BAR_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_BAR_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8e0000000168ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x8e0000000168ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8e0000000168ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8e0000000168ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("PEMX_BAR_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_BAR_CTL(a) cavm_pemx_bar_ctl_t
#define bustype_CAVM_PEMX_BAR_CTL(a) CSR_TYPE_NCB
#define basename_CAVM_PEMX_BAR_CTL(a) "PEMX_BAR_CTL"
#define device_bar_CAVM_PEMX_BAR_CTL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_BAR_CTL(a) (a)
#define arguments_CAVM_PEMX_BAR_CTL(a) (a),-1,-1,-1

/**
 * Register (NCB) pem#_cfg
 *
 * PEM Application Configuration Register
 * This register configures the PCIe application.
 *
 * This register is accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on cold reset.
 */
union cavm_pemx_cfg
{
    uint64_t u;
    struct cavm_pemx_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_9_63         : 55;
        uint64_t auto_dp_clr           : 1;  /**< [  8:  8](R/W/H) Auto disable-port clearing of PEM()_DIS_PORT[DIS_PORT] when link LTSSM
                                                                 state reaches L0 after a MAC reset.

                                                                 0 = Do not auto-clear PEM()_DIS_PORT[DIS_PORT], which will require software to
                                                                 clear PEM()_DIS_PORT[DIS_PORT] after the link is reset.  Typical setting when in
                                                                 EP mode (PEM()_CFG[HOSTMD] = 0).

                                                                 1 = Auto-clear PEM()_DIS_PORT[DIS_PORT], which will typically allow outbound
                                                                 traffic to resume after reset is complete. Typical setting when in RC mode
                                                                 (PEM()_CFG[HOSTMD] = 1).

                                                                 Resets to 0 when strapped as an endpoint (GPIO_STRAP_PIN_E::PCIEn_EP_MODE is
                                                                 strapped high), otherwise 1. */
        uint64_t pipe_grp_ptr          : 3;  /**< [  7:  5](R/W) Configures the PEM to point to the RX Pipe quad containing
                                                                 Lane 0.
                                                                 0x0 = grp0 (lane 0).
                                                                 0x1 - 0x7 = Reserved. */
        uint64_t reserved_1_4          : 4;
        uint64_t hostmd                : 1;  /**< [  0:  0](R/W/H) Host mode.
                                                                 0 = PEM is configured to be an end point (EP mode).
                                                                 1 = PEM is configured to be a root complex (RC mode).
                                                                 The reset value for this bit is controlled by a strapping pin. */
#else /* Word 0 - Little Endian */
        uint64_t hostmd                : 1;  /**< [  0:  0](R/W/H) Host mode.
                                                                 0 = PEM is configured to be an end point (EP mode).
                                                                 1 = PEM is configured to be a root complex (RC mode).
                                                                 The reset value for this bit is controlled by a strapping pin. */
        uint64_t reserved_1_4          : 4;
        uint64_t pipe_grp_ptr          : 3;  /**< [  7:  5](R/W) Configures the PEM to point to the RX Pipe quad containing
                                                                 Lane 0.
                                                                 0x0 = grp0 (lane 0).
                                                                 0x1 - 0x7 = Reserved. */
        uint64_t auto_dp_clr           : 1;  /**< [  8:  8](R/W/H) Auto disable-port clearing of PEM()_DIS_PORT[DIS_PORT] when link LTSSM
                                                                 state reaches L0 after a MAC reset.

                                                                 0 = Do not auto-clear PEM()_DIS_PORT[DIS_PORT], which will require software to
                                                                 clear PEM()_DIS_PORT[DIS_PORT] after the link is reset.  Typical setting when in
                                                                 EP mode (PEM()_CFG[HOSTMD] = 0).

                                                                 1 = Auto-clear PEM()_DIS_PORT[DIS_PORT], which will typically allow outbound
                                                                 traffic to resume after reset is complete. Typical setting when in RC mode
                                                                 (PEM()_CFG[HOSTMD] = 1).

                                                                 Resets to 0 when strapped as an endpoint (GPIO_STRAP_PIN_E::PCIEn_EP_MODE is
                                                                 strapped high), otherwise 1. */
        uint64_t reserved_9_63         : 55;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_cfg_s cn10; */
    struct cavm_pemx_cfg_cn10ka
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_9_63         : 55;
        uint64_t auto_dp_clr           : 1;  /**< [  8:  8](R/W/H) Auto disable-port clearing of PEM()_DIS_PORT[DIS_PORT] when link LTSSM
                                                                 state reaches L0 after a MAC reset.

                                                                 0 = Do not auto-clear PEM()_DIS_PORT[DIS_PORT], which will require software to
                                                                 clear PEM()_DIS_PORT[DIS_PORT] after the link is reset.  Typical setting when in
                                                                 EP mode (PEM()_CFG[HOSTMD] = 0).

                                                                 1 = Auto-clear PEM()_DIS_PORT[DIS_PORT], which will typically allow outbound
                                                                 traffic to resume after reset is complete. Typical setting when in RC mode
                                                                 (PEM()_CFG[HOSTMD] = 1).

                                                                 Resets to 0 when strapped as an endpoint (GPIO_STRAP_PIN_E::PCIEn_EP_MODE is
                                                                 strapped high), otherwise 1. */
        uint64_t pipe_grp_ptr          : 3;  /**< [  7:  5](R/W) Configures the PEM to point to the RX Pipe quad containing
                                                                 Lane 0.
                                                                 0x0 = grp0 (lane 0).
                                                                 0x1 - 0x7 = Reserved. */
        uint64_t pipe                  : 2;  /**< [  4:  3](R/W) Configures the PEM pipe sources.
                                                                 0x0 = Pipe 0.
                                                                 0x1 - 0x3 = Reserved. */
        uint64_t lanes                 : 2;  /**< [  2:  1](R/W/H) Ties off RX Pipe for unused lanes.
                                                                 0x0 = 2 lanes.
                                                                 0x1 = 4 lanes (PEM only, not supported for BPEM).
                                                                 0x2 - 0x3 = Reserved.

                                                                 PCIERC_PORT_CTL[LME]/PCIEEP_PORT_CTL[LME] is required to be
                                                                 set to a value which is greater then or equal to [LANES]. */
        uint64_t hostmd                : 1;  /**< [  0:  0](R/W/H) Host mode.
                                                                 0 = PEM is configured to be an end point (EP mode).
                                                                 1 = PEM is configured to be a root complex (RC mode).
                                                                 The reset value for this bit is controlled by a strapping pin. */
#else /* Word 0 - Little Endian */
        uint64_t hostmd                : 1;  /**< [  0:  0](R/W/H) Host mode.
                                                                 0 = PEM is configured to be an end point (EP mode).
                                                                 1 = PEM is configured to be a root complex (RC mode).
                                                                 The reset value for this bit is controlled by a strapping pin. */
        uint64_t lanes                 : 2;  /**< [  2:  1](R/W/H) Ties off RX Pipe for unused lanes.
                                                                 0x0 = 2 lanes.
                                                                 0x1 = 4 lanes (PEM only, not supported for BPEM).
                                                                 0x2 - 0x3 = Reserved.

                                                                 PCIERC_PORT_CTL[LME]/PCIEEP_PORT_CTL[LME] is required to be
                                                                 set to a value which is greater then or equal to [LANES]. */
        uint64_t pipe                  : 2;  /**< [  4:  3](R/W) Configures the PEM pipe sources.
                                                                 0x0 = Pipe 0.
                                                                 0x1 - 0x3 = Reserved. */
        uint64_t pipe_grp_ptr          : 3;  /**< [  7:  5](R/W) Configures the PEM to point to the RX Pipe quad containing
                                                                 Lane 0.
                                                                 0x0 = grp0 (lane 0).
                                                                 0x1 - 0x7 = Reserved. */
        uint64_t auto_dp_clr           : 1;  /**< [  8:  8](R/W/H) Auto disable-port clearing of PEM()_DIS_PORT[DIS_PORT] when link LTSSM
                                                                 state reaches L0 after a MAC reset.

                                                                 0 = Do not auto-clear PEM()_DIS_PORT[DIS_PORT], which will require software to
                                                                 clear PEM()_DIS_PORT[DIS_PORT] after the link is reset.  Typical setting when in
                                                                 EP mode (PEM()_CFG[HOSTMD] = 0).

                                                                 1 = Auto-clear PEM()_DIS_PORT[DIS_PORT], which will typically allow outbound
                                                                 traffic to resume after reset is complete. Typical setting when in RC mode
                                                                 (PEM()_CFG[HOSTMD] = 1).

                                                                 Resets to 0 when strapped as an endpoint (GPIO_STRAP_PIN_E::PCIEn_EP_MODE is
                                                                 strapped high), otherwise 1. */
        uint64_t reserved_9_63         : 55;
#endif /* Word 0 - End */
    } cn10ka;
    struct cavm_pemx_cfg_cn10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_9_63         : 55;
        uint64_t auto_dp_clr           : 1;  /**< [  8:  8](R/W/H) Auto disable-port clearing of PEM()_DIS_PORT[DIS_PORT] when link LTSSM
                                                                 state reaches L0 after a MAC reset.

                                                                 0 = Do not auto-clear PEM()_DIS_PORT[DIS_PORT], which will require software to
                                                                 clear PEM()_DIS_PORT[DIS_PORT] after the link is reset.  Typical setting when in
                                                                 EP mode (PEM()_CFG[HOSTMD] = 0).

                                                                 1 = Auto-clear PEM()_DIS_PORT[DIS_PORT], which will typically allow outbound
                                                                 traffic to resume after reset is complete. Typical setting when in RC mode
                                                                 (PEM()_CFG[HOSTMD] = 1).

                                                                 Resets to 0 when strapped as an endpoint (GPIO_STRAP_PIN_E::PCIEn_EP_MODE is
                                                                 strapped high), otherwise 1. */
        uint64_t reserved_6_7          : 2;
        uint64_t pipe                  : 2;  /**< [  5:  4](R/W) Configures the PEM pipe sources.
                                                                 0x0 = Pipe 0.
                                                                 0x1 - 0x3 = Reserved. */
        uint64_t lanes                 : 3;  /**< [  3:  1](R/W/H) Ties off RX Pipe for unused lanes.
                                                                 0x0 = 1 lane.
                                                                 0x1 = 2 lanes (PEM only, not supported for BPEM).
                                                                 0x2 = 4 lanes (PEM only, not supported for BPEM).
                                                                 0x3 - 0x7 = Reserved.

                                                                 PCIERC_PORT_CTL[LME]/PCIEEP_PORT_CTL[LME] is required to be
                                                                 set to a value which is greater then or equal to [LANES]. */
        uint64_t hostmd                : 1;  /**< [  0:  0](R/W/H) Host mode.
                                                                 0 = PEM is configured to be an end point (EP mode).
                                                                 1 = PEM is configured to be a root complex (RC mode).
                                                                 The reset value for this bit is controlled by a strapping pin. */
#else /* Word 0 - Little Endian */
        uint64_t hostmd                : 1;  /**< [  0:  0](R/W/H) Host mode.
                                                                 0 = PEM is configured to be an end point (EP mode).
                                                                 1 = PEM is configured to be a root complex (RC mode).
                                                                 The reset value for this bit is controlled by a strapping pin. */
        uint64_t lanes                 : 3;  /**< [  3:  1](R/W/H) Ties off RX Pipe for unused lanes.
                                                                 0x0 = 1 lane.
                                                                 0x1 = 2 lanes (PEM only, not supported for BPEM).
                                                                 0x2 = 4 lanes (PEM only, not supported for BPEM).
                                                                 0x3 - 0x7 = Reserved.

                                                                 PCIERC_PORT_CTL[LME]/PCIEEP_PORT_CTL[LME] is required to be
                                                                 set to a value which is greater then or equal to [LANES]. */
        uint64_t pipe                  : 2;  /**< [  5:  4](R/W) Configures the PEM pipe sources.
                                                                 0x0 = Pipe 0.
                                                                 0x1 - 0x3 = Reserved. */
        uint64_t reserved_6_7          : 2;
        uint64_t auto_dp_clr           : 1;  /**< [  8:  8](R/W/H) Auto disable-port clearing of PEM()_DIS_PORT[DIS_PORT] when link LTSSM
                                                                 state reaches L0 after a MAC reset.

                                                                 0 = Do not auto-clear PEM()_DIS_PORT[DIS_PORT], which will require software to
                                                                 clear PEM()_DIS_PORT[DIS_PORT] after the link is reset.  Typical setting when in
                                                                 EP mode (PEM()_CFG[HOSTMD] = 0).

                                                                 1 = Auto-clear PEM()_DIS_PORT[DIS_PORT], which will typically allow outbound
                                                                 traffic to resume after reset is complete. Typical setting when in RC mode
                                                                 (PEM()_CFG[HOSTMD] = 1).

                                                                 Resets to 0 when strapped as an endpoint (GPIO_STRAP_PIN_E::PCIEn_EP_MODE is
                                                                 strapped high), otherwise 1. */
        uint64_t reserved_9_63         : 55;
#endif /* Word 0 - End */
    } cn10kb;
    /* struct cavm_pemx_cfg_cn10ka cnf10ka; */
    /* struct cavm_pemx_cfg_cn10ka cnf10kb; */
};
typedef union cavm_pemx_cfg cavm_pemx_cfg_t;

static inline uint64_t CAVM_PEMX_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_CFG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8e00000000d8ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x8e00000000d8ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8e00000000d8ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8e00000000d8ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("PEMX_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_CFG(a) cavm_pemx_cfg_t
#define bustype_CAVM_PEMX_CFG(a) CSR_TYPE_NCB
#define basename_CAVM_PEMX_CFG(a) "PEMX_CFG"
#define device_bar_CAVM_PEMX_CFG(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_CFG(a) (a)
#define arguments_CAVM_PEMX_CFG(a) (a),-1,-1,-1

/**
 * Register (NCB) pem#_cfg_tbl#
 *
 * PEM Configuration Table Registers
 * Software managed table with list of config registers to update when
 * PEM()_CTL_STATUS[LNK_ENB] is written with a 1. Typically the last
 * table action should be to set PEM()_CTL_STATUS[SCR_DONE].
 *
 * This register is accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on cold reset.
 */
union cavm_pemx_cfg_tblx
{
    uint64_t u;
    struct cavm_pemx_cfg_tblx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 32; /**< [ 63: 32](R/W) Data to write. */
        uint64_t broadcast             : 1;  /**< [ 31: 31](R/W) When set, [PF] field is ignored and the write will occur to every Physical Function.
                                                                 When set and [VF_ACTIVE] is set, write will occur to VF0 within every Physical Function. */
        uint64_t reserved_28_30        : 3;
        uint64_t vf                    : 6;  /**< [ 27: 22](R/W) The selected virtual function.  Must be zero when [VF_ACTIVE] is clear, or when configured
                                                                 for RC mode. */
        uint64_t reserved_19_21        : 3;
        uint64_t pf                    : 1;  /**< [ 18: 18](R/W) Physical function number associated with this access. In RC mode, this
                                                                 field must be zero. */
        uint64_t vf_active             : 1;  /**< [ 17: 17](R/W) VF active.
                                                                 0 = Write accesses the physical function.
                                                                 1 = Write accesses the virtual function selected by [VF] belonging to [PF].

                                                                 Must be zero when SR-IOV is not used in the physical function.
                                                                 Must be zero in RC mode. */
        uint64_t shadow                : 1;  /**< [ 16: 16](R/W) Shadow space.
                                                                 0 = The destination CSR is the standard PCI configuration write register.
                                                                 This may write WRSL fields.
                                                                 1 = The destination is the shadow CSR space, e.g. PCIEEP_BAR0_MASKL. */
        uint64_t wmask                 : 4;  /**< [ 15: 12](R/W) Byte mask to apply when writing data. If set, the corresponding byte will be written. */
        uint64_t offset                : 12; /**< [ 11:  0](R/W) Selects the PCIe config space register being written in the function. */
#else /* Word 0 - Little Endian */
        uint64_t offset                : 12; /**< [ 11:  0](R/W) Selects the PCIe config space register being written in the function. */
        uint64_t wmask                 : 4;  /**< [ 15: 12](R/W) Byte mask to apply when writing data. If set, the corresponding byte will be written. */
        uint64_t shadow                : 1;  /**< [ 16: 16](R/W) Shadow space.
                                                                 0 = The destination CSR is the standard PCI configuration write register.
                                                                 This may write WRSL fields.
                                                                 1 = The destination is the shadow CSR space, e.g. PCIEEP_BAR0_MASKL. */
        uint64_t vf_active             : 1;  /**< [ 17: 17](R/W) VF active.
                                                                 0 = Write accesses the physical function.
                                                                 1 = Write accesses the virtual function selected by [VF] belonging to [PF].

                                                                 Must be zero when SR-IOV is not used in the physical function.
                                                                 Must be zero in RC mode. */
        uint64_t pf                    : 1;  /**< [ 18: 18](R/W) Physical function number associated with this access. In RC mode, this
                                                                 field must be zero. */
        uint64_t reserved_19_21        : 3;
        uint64_t vf                    : 6;  /**< [ 27: 22](R/W) The selected virtual function.  Must be zero when [VF_ACTIVE] is clear, or when configured
                                                                 for RC mode. */
        uint64_t reserved_28_30        : 3;
        uint64_t broadcast             : 1;  /**< [ 31: 31](R/W) When set, [PF] field is ignored and the write will occur to every Physical Function.
                                                                 When set and [VF_ACTIVE] is set, write will occur to VF0 within every Physical Function. */
        uint64_t data                  : 32; /**< [ 63: 32](R/W) Data to write. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_cfg_tblx_s cn; */
};
typedef union cavm_pemx_cfg_tblx cavm_pemx_cfg_tblx_t;

static inline uint64_t CAVM_PEMX_CFG_TBLX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_CFG_TBLX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=5) && (b<=1023)))
        return 0x8e0000002000ll + 0x1000000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3ff);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=5) && (b<=1023)))
        return 0x8e0000002000ll + 0x1000000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3ff);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=1) && (b<=1023)))
        return 0x8e0000002000ll + 0x1000000000ll * ((a) & 0x1) + 8ll * ((b) & 0x3ff);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=1) && (b<=1023)))
        return 0x8e0000002000ll + 0x1000000000ll * ((a) & 0x1) + 8ll * ((b) & 0x3ff);
    __cavm_csr_fatal("PEMX_CFG_TBLX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_CFG_TBLX(a,b) cavm_pemx_cfg_tblx_t
#define bustype_CAVM_PEMX_CFG_TBLX(a,b) CSR_TYPE_NCB
#define basename_CAVM_PEMX_CFG_TBLX(a,b) "PEMX_CFG_TBLX"
#define device_bar_CAVM_PEMX_CFG_TBLX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_CFG_TBLX(a,b) (a)
#define arguments_CAVM_PEMX_CFG_TBLX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) pem#_cfg_tbl_size
 *
 * PEM Configuration Table Size Register
 * This register is accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on cold reset.
 */
union cavm_pemx_cfg_tbl_size
{
    uint64_t u;
    struct cavm_pemx_cfg_tbl_size_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_11_63        : 53;
        uint64_t size                  : 11; /**< [ 10:  0](R/W) The number of valid entries in PEM()_CFG_TBL(). When hardware plays out the
                                                                 PEM()_CFG_TBL() table, it will read PEM()_CFG_TBL() entries 0x0 through
                                                                 [SIZE]-1, or take no action if [SIZE] is 0x0.

                                                                 Software, before rewriting PEM()_CFG_TBL(), should clear [SIZE], write all of
                                                                 the desired entries, then write the [SIZE] with the number of written entries. */
#else /* Word 0 - Little Endian */
        uint64_t size                  : 11; /**< [ 10:  0](R/W) The number of valid entries in PEM()_CFG_TBL(). When hardware plays out the
                                                                 PEM()_CFG_TBL() table, it will read PEM()_CFG_TBL() entries 0x0 through
                                                                 [SIZE]-1, or take no action if [SIZE] is 0x0.

                                                                 Software, before rewriting PEM()_CFG_TBL(), should clear [SIZE], write all of
                                                                 the desired entries, then write the [SIZE] with the number of written entries. */
        uint64_t reserved_11_63        : 53;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_cfg_tbl_size_s cn; */
};
typedef union cavm_pemx_cfg_tbl_size cavm_pemx_cfg_tbl_size_t;

static inline uint64_t CAVM_PEMX_CFG_TBL_SIZE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_CFG_TBL_SIZE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8e0000000220ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x8e0000000220ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8e0000000220ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8e0000000220ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("PEMX_CFG_TBL_SIZE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_CFG_TBL_SIZE(a) cavm_pemx_cfg_tbl_size_t
#define bustype_CAVM_PEMX_CFG_TBL_SIZE(a) CSR_TYPE_NCB
#define basename_CAVM_PEMX_CFG_TBL_SIZE(a) "PEMX_CFG_TBL_SIZE"
#define device_bar_CAVM_PEMX_CFG_TBL_SIZE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_CFG_TBL_SIZE(a) (a)
#define arguments_CAVM_PEMX_CFG_TBL_SIZE(a) (a),-1,-1,-1

/**
 * Register (NCB) pem#_clk_en
 *
 * PEM Clock Enable Register
 * This register contains the clock enable for CSCLK and PCE_CLK.
 *
 * This register is accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on cold reset.
 */
union cavm_pemx_clk_en
{
    uint64_t u;
    struct cavm_pemx_clk_en_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t pclk_keep_on          : 1;  /**< [  5:  5](R/W) Turns pclk clock gating in pemc_pnr_retimer on. For diagnostic use only.
                                                                 0 = Forces pclk to be forced on at all times.
                                                                 1 = Enables coarse gain clock gating in retimer. */
        uint64_t pem_mdh_dis           : 1;  /**< [  4:  4](R/W) When set, the memory and diagnostic hubs inside PEM are disabled and
                                                                 will not respond commands from the MDC. If this PEM is not in use, this
                                                                 bit should be set to save power. */
        uint64_t pemc_macclk_force     : 1;  /**< [  3:  3](R/W) Force MAC clock. For diagnostic use only.
                                                                 0 = Aux_clk & radm_clk can be gated by the PEM core MAC.
                                                                 1 = Aux_clk & radm_clk are forced on at all times to the PEM core MAC. */
        uint64_t pceclk_gate           : 1;  /**< [  2:  2](R/W) Pipe clock gate.
                                                                 0 = PCE_CLK (pipe clock) is enabled in PEM core.
                                                                 1 = PCE_CLK (pipe clock) is gated off in PEM core.

                                                                 It is illegal to gate off PCE_CLK in a already active PEM. */
        uint64_t pemc_csclk_gate       : 1;  /**< [  1:  1](R/W) Conditional SCLK gate.
                                                                 0 = SCLK is enabled in PEM core.
                                                                 1 = SCLK is gated off in PEM core.

                                                                 It is illegal to gate off SCLK in a already active PEM. */
        uint64_t pemm_csclk_force      : 1;  /**< [  0:  0](R/W) Conditional SCLK force. For diagnostic use only.
                                                                 0 = CSCLK gating in PEM main is controlled by hardware.
                                                                 1 = CSCLK is forced on at all times in PEM main. */
#else /* Word 0 - Little Endian */
        uint64_t pemm_csclk_force      : 1;  /**< [  0:  0](R/W) Conditional SCLK force. For diagnostic use only.
                                                                 0 = CSCLK gating in PEM main is controlled by hardware.
                                                                 1 = CSCLK is forced on at all times in PEM main. */
        uint64_t pemc_csclk_gate       : 1;  /**< [  1:  1](R/W) Conditional SCLK gate.
                                                                 0 = SCLK is enabled in PEM core.
                                                                 1 = SCLK is gated off in PEM core.

                                                                 It is illegal to gate off SCLK in a already active PEM. */
        uint64_t pceclk_gate           : 1;  /**< [  2:  2](R/W) Pipe clock gate.
                                                                 0 = PCE_CLK (pipe clock) is enabled in PEM core.
                                                                 1 = PCE_CLK (pipe clock) is gated off in PEM core.

                                                                 It is illegal to gate off PCE_CLK in a already active PEM. */
        uint64_t pemc_macclk_force     : 1;  /**< [  3:  3](R/W) Force MAC clock. For diagnostic use only.
                                                                 0 = Aux_clk & radm_clk can be gated by the PEM core MAC.
                                                                 1 = Aux_clk & radm_clk are forced on at all times to the PEM core MAC. */
        uint64_t pem_mdh_dis           : 1;  /**< [  4:  4](R/W) When set, the memory and diagnostic hubs inside PEM are disabled and
                                                                 will not respond commands from the MDC. If this PEM is not in use, this
                                                                 bit should be set to save power. */
        uint64_t pclk_keep_on          : 1;  /**< [  5:  5](R/W) Turns pclk clock gating in pemc_pnr_retimer on. For diagnostic use only.
                                                                 0 = Forces pclk to be forced on at all times.
                                                                 1 = Enables coarse gain clock gating in retimer. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_clk_en_s cn; */
};
typedef union cavm_pemx_clk_en cavm_pemx_clk_en_t;

static inline uint64_t CAVM_PEMX_CLK_EN(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_CLK_EN(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8e00000000c8ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x8e00000000c8ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8e00000000c8ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8e00000000c8ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("PEMX_CLK_EN", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_CLK_EN(a) cavm_pemx_clk_en_t
#define bustype_CAVM_PEMX_CLK_EN(a) CSR_TYPE_NCB
#define basename_CAVM_PEMX_CLK_EN(a) "PEMX_CLK_EN"
#define device_bar_CAVM_PEMX_CLK_EN(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_CLK_EN(a) (a)
#define arguments_CAVM_PEMX_CLK_EN(a) (a),-1,-1,-1

/**
 * Register (NCB) pem#_cmerge_merged_pc
 *
 * PEM Merge Completions Merged Performance Counter Register
 * This register is a performance counter of how many completions merged within the
 * outbound completion merge units.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 */
union cavm_pemx_cmerge_merged_pc
{
    uint64_t u;
    struct cavm_pemx_cmerge_merged_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cmerge_merged         : 64; /**< [ 63:  0](R/W/H) Each NCBO completion operation that merges with a previous
                                                                 read will increment this count. */
#else /* Word 0 - Little Endian */
        uint64_t cmerge_merged         : 64; /**< [ 63:  0](R/W/H) Each NCBO completion operation that merges with a previous
                                                                 read will increment this count. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_cmerge_merged_pc_s cn; */
};
typedef union cavm_pemx_cmerge_merged_pc cavm_pemx_cmerge_merged_pc_t;

static inline uint64_t CAVM_PEMX_CMERGE_MERGED_PC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_CMERGE_MERGED_PC(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8e00000001b8ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8e00000001b8ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8e00000001b8ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("PEMX_CMERGE_MERGED_PC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_CMERGE_MERGED_PC(a) cavm_pemx_cmerge_merged_pc_t
#define bustype_CAVM_PEMX_CMERGE_MERGED_PC(a) CSR_TYPE_NCB
#define basename_CAVM_PEMX_CMERGE_MERGED_PC(a) "PEMX_CMERGE_MERGED_PC"
#define device_bar_CAVM_PEMX_CMERGE_MERGED_PC(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_CMERGE_MERGED_PC(a) (a)
#define arguments_CAVM_PEMX_CMERGE_MERGED_PC(a) (a),-1,-1,-1

/**
 * Register (NCB) pem#_cmerge_received_pc
 *
 * PEM Merge Completions Received Performance Counter Register
 * This register reports the number of reads that enter the outbound read merge unit.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 */
union cavm_pemx_cmerge_received_pc
{
    uint64_t u;
    struct cavm_pemx_cmerge_received_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cmerge_reads          : 64; /**< [ 63:  0](R/W/H) Each NCBO completion operation increments this count. */
#else /* Word 0 - Little Endian */
        uint64_t cmerge_reads          : 64; /**< [ 63:  0](R/W/H) Each NCBO completion operation increments this count. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_cmerge_received_pc_s cn; */
};
typedef union cavm_pemx_cmerge_received_pc cavm_pemx_cmerge_received_pc_t;

static inline uint64_t CAVM_PEMX_CMERGE_RECEIVED_PC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_CMERGE_RECEIVED_PC(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8e00000001b0ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8e00000001b0ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8e00000001b0ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("PEMX_CMERGE_RECEIVED_PC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_CMERGE_RECEIVED_PC(a) cavm_pemx_cmerge_received_pc_t
#define bustype_CAVM_PEMX_CMERGE_RECEIVED_PC(a) CSR_TYPE_NCB
#define basename_CAVM_PEMX_CMERGE_RECEIVED_PC(a) "PEMX_CMERGE_RECEIVED_PC"
#define device_bar_CAVM_PEMX_CMERGE_RECEIVED_PC(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_CMERGE_RECEIVED_PC(a) (a)
#define arguments_CAVM_PEMX_CMERGE_RECEIVED_PC(a) (a),-1,-1,-1

/**
 * Register (NCB) pem#_const_acc
 *
 * PEM Constant ACC Register
 * Contains contant attributes related to the PEM ACC tables.
 */
union cavm_pemx_const_acc
{
    uint64_t u;
    struct cavm_pemx_const_acc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t bits_norm             : 16; /**< [ 31: 16](RO) Number of bits in the address aperture for a normal-sized ACC table entry. See
                                                                 PEM()_REG_NORM()_ACC. */
        uint64_t num_norm              : 16; /**< [ 15:  0](RO) Number of normal-sized ACC table entries. See PEM()_REG_NORM()_ACC. */
#else /* Word 0 - Little Endian */
        uint64_t num_norm              : 16; /**< [ 15:  0](RO) Number of normal-sized ACC table entries. See PEM()_REG_NORM()_ACC. */
        uint64_t bits_norm             : 16; /**< [ 31: 16](RO) Number of bits in the address aperture for a normal-sized ACC table entry. See
                                                                 PEM()_REG_NORM()_ACC. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_const_acc_s cn; */
};
typedef union cavm_pemx_const_acc cavm_pemx_const_acc_t;

static inline uint64_t CAVM_PEMX_CONST_ACC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_CONST_ACC(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8e0000000218ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x8e0000000218ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8e0000000218ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8e0000000218ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("PEMX_CONST_ACC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_CONST_ACC(a) cavm_pemx_const_acc_t
#define bustype_CAVM_PEMX_CONST_ACC(a) CSR_TYPE_NCB
#define basename_CAVM_PEMX_CONST_ACC(a) "PEMX_CONST_ACC"
#define device_bar_CAVM_PEMX_CONST_ACC(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_CONST_ACC(a) (a)
#define arguments_CAVM_PEMX_CONST_ACC(a) (a),-1,-1,-1

/**
 * Register (NCB) pem#_cpl_lut_valid
 *
 * PEM Completion Lookup Table Valid Register
 * This register specifies how many tags are outstanding for reads.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on MAC reset.
 */
union cavm_pemx_cpl_lut_valid
{
    uint64_t u;
    struct cavm_pemx_cpl_lut_valid_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_10_63        : 54;
        uint64_t tag                   : 10; /**< [  9:  0](RO/H) Number of read tags outstanding for outbound reads on PCIe. */
#else /* Word 0 - Little Endian */
        uint64_t tag                   : 10; /**< [  9:  0](RO/H) Number of read tags outstanding for outbound reads on PCIe. */
        uint64_t reserved_10_63        : 54;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_cpl_lut_valid_s cn; */
};
typedef union cavm_pemx_cpl_lut_valid cavm_pemx_cpl_lut_valid_t;

static inline uint64_t CAVM_PEMX_CPL_LUT_VALID(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_CPL_LUT_VALID(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8e0000000040ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x8e0000000040ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8e0000000040ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8e0000000040ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("PEMX_CPL_LUT_VALID", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_CPL_LUT_VALID(a) cavm_pemx_cpl_lut_valid_t
#define bustype_CAVM_PEMX_CPL_LUT_VALID(a) CSR_TYPE_NCB
#define basename_CAVM_PEMX_CPL_LUT_VALID(a) "PEMX_CPL_LUT_VALID"
#define device_bar_CAVM_PEMX_CPL_LUT_VALID(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_CPL_LUT_VALID(a) (a)
#define arguments_CAVM_PEMX_CPL_LUT_VALID(a) (a),-1,-1,-1

/**
 * Register (NCB) pem#_csclk_active_pc
 *
 * PEM Conditional Coprocessor Clock Counter Register
 * This register counts conditional clocks for power management.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 */
union cavm_pemx_csclk_active_pc
{
    uint64_t u;
    struct cavm_pemx_csclk_active_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Count of conditional coprocessor-clock cycles since reset. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Count of conditional coprocessor-clock cycles since reset. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_csclk_active_pc_s cn; */
};
typedef union cavm_pemx_csclk_active_pc cavm_pemx_csclk_active_pc_t;

static inline uint64_t CAVM_PEMX_CSCLK_ACTIVE_PC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_CSCLK_ACTIVE_PC(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8e0000000058ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x8e0000000058ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8e0000000058ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8e0000000058ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("PEMX_CSCLK_ACTIVE_PC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_CSCLK_ACTIVE_PC(a) cavm_pemx_csclk_active_pc_t
#define bustype_CAVM_PEMX_CSCLK_ACTIVE_PC(a) CSR_TYPE_NCB
#define basename_CAVM_PEMX_CSCLK_ACTIVE_PC(a) "PEMX_CSCLK_ACTIVE_PC"
#define device_bar_CAVM_PEMX_CSCLK_ACTIVE_PC(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_CSCLK_ACTIVE_PC(a) (a)
#define arguments_CAVM_PEMX_CSCLK_ACTIVE_PC(a) (a),-1,-1,-1

/**
 * Register (NCB) pem#_ctl_status
 *
 * PEM Control Status Register
 * This is a general control and status register of the PEM.
 *
 * This register is accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on cold reset. Note this differs from PEM()_CTL_STATUS2's reset.
 */
union cavm_pemx_ctl_status
{
    uint64_t u;
    struct cavm_pemx_ctl_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_46_63        : 18;
        uint64_t auto_sd               : 1;  /**< [ 45: 45](RO/H) Link hardware autonomous speed disable. */
        uint64_t dnum                  : 5;  /**< [ 44: 40](RO/H) Primary bus device number. */
        uint64_t pbus                  : 8;  /**< [ 39: 32](RO/H) Primary bus number. */
        uint64_t reserved_16_31        : 16;
        uint64_t spares                : 2;  /**< [ 15: 14](R/W) Spare flops. */
        uint64_t scr_done              : 1;  /**< [ 13: 13](R/W) The ROM script (if present) can test this bit to see if the ROM script has
                                                                 already run. Typical usage is for the ROM script to test [SCR_DONE] and exit if
                                                                 true, else at the end of the ROM script, the script sets this bit. */
        uint64_t pm_xtoff              : 1;  /**< [ 12: 12](WO) When written with one, a single cycle pulse to request from application
                                                                 to generate a PM_Turn_Off message. RC mode. */
        uint64_t auto_mode             : 1;  /**< [ 11: 11](R/W) Hardware behavior after MAC reset occurs.

                                                                 0 = No hardware intervention for MAC reset / link down (including hot reset).
                                                                 Firmware is responsible for bringing the link up after detecting that a MAC reset has occurred.

                                                                 1 = After MAC reset has deasserted, hardware will automatically set [PLAY]=1.
                                                                 Upon completion of config writes from the Config Table ([PLAY]==0), hardware will set [LNK_ENB]=1.

                                                                 For CNXXXX, this bit should always be set. */
        uint64_t play                  : 1;  /**< [ 10: 10](R/W/H) When written with a one, config registers in PEM()_CFG_TBL() entries 0 through
                                                                 PEM()_CFG_TBL_SIZE[SIZE]-1
                                                                 will be read and the corresponding CSR writes performed. Hardware clears this bit when complete.
                                                                 Hardware automatically sets this bit after MAC reset when [AUTO_MODE] is set. */
        uint64_t ccrs                  : 1;  /**< [  9:  9](R/W) When set, PEM will automatically clear [FRC_RETRY] after the config replay is complete. */
        uint64_t clk_req_n             : 1;  /**< [  8:  8](R/W) Indicates that the application logic is ready to have reference clock
                                                                 removed.

                                                                 0 = The application does not want to have the reference clock removed.

                                                                 1 = The application is ready to have the reference clock removed through
                                                                 either L1 PM Sub-states or L1 CPM. */
        uint64_t rdy_entr_l23          : 1;  /**< [  7:  7](R/W) Application ready to enter L23.  Indication that the application is
                                                                 ready to enter the L23 state. This provides control of the L23 entry
                                                                 (in case certain tasks must be performed before going into L23).
                                                                 The Mac delays sending PM_Enter_L23 (in response to PM_Turn_Off)
                                                                 until this signal becomes active. When this signal has been asserted
                                                                 by the application, it must be kept asserted until L2 entry has completed */
        uint64_t margin_rdy            : 1;  /**< [  6:  6](R/W) Margining ready. Indicates when the PHY ready to accept margining commands. This
                                                                 signal is reflected in PCIEEP_MRG_PORT_CAP_STAT[M_RDY] /
                                                                 PCIERC_MRG_PORT_CAP_STAT[M_RDY]. */
        uint64_t frc_retry             : 1;  /**< [  5:  5](R/W) When set, forces CRS status to be returned for any config access.

                                                                 Hardware auto clears when CCRS is set and on the completion of
                                                                 config writes from the Config Table. */
        uint64_t lnk_enb               : 1;  /**< [  4:  4](R/W/H) Link Enable.

                                                                 Will hardware autoclear with Mac reset.

                                                                 Will hardware autoset if AUTOMODE is set and on the completion of
                                                                 config writes from the Config Table. */
        uint64_t l1_exit               : 1;  /**< [  3:  3](R/W) L1 exit control.
                                                                 0 = Hardware is allowed to enter L1 power state and will only exit when woken
                                                                 up by the remote link partner or traffic arrives on NCBO or EBO buses.
                                                                 1 = Entry into L1 state is disabled and if already in L1 state, will force an
                                                                 exit. */
        uint64_t fast_lm               : 1;  /**< [  2:  2](R/W) When set, forces fast link mode. */
        uint64_t inv_ecrc              : 1;  /**< [  1:  1](R/W) When set, causes the LSB of the ECRC to be inverted. */
        uint64_t inv_lcrc              : 1;  /**< [  0:  0](R/W) When set, causes the LSB of the LCRC to be inverted. */
#else /* Word 0 - Little Endian */
        uint64_t inv_lcrc              : 1;  /**< [  0:  0](R/W) When set, causes the LSB of the LCRC to be inverted. */
        uint64_t inv_ecrc              : 1;  /**< [  1:  1](R/W) When set, causes the LSB of the ECRC to be inverted. */
        uint64_t fast_lm               : 1;  /**< [  2:  2](R/W) When set, forces fast link mode. */
        uint64_t l1_exit               : 1;  /**< [  3:  3](R/W) L1 exit control.
                                                                 0 = Hardware is allowed to enter L1 power state and will only exit when woken
                                                                 up by the remote link partner or traffic arrives on NCBO or EBO buses.
                                                                 1 = Entry into L1 state is disabled and if already in L1 state, will force an
                                                                 exit. */
        uint64_t lnk_enb               : 1;  /**< [  4:  4](R/W/H) Link Enable.

                                                                 Will hardware autoclear with Mac reset.

                                                                 Will hardware autoset if AUTOMODE is set and on the completion of
                                                                 config writes from the Config Table. */
        uint64_t frc_retry             : 1;  /**< [  5:  5](R/W) When set, forces CRS status to be returned for any config access.

                                                                 Hardware auto clears when CCRS is set and on the completion of
                                                                 config writes from the Config Table. */
        uint64_t margin_rdy            : 1;  /**< [  6:  6](R/W) Margining ready. Indicates when the PHY ready to accept margining commands. This
                                                                 signal is reflected in PCIEEP_MRG_PORT_CAP_STAT[M_RDY] /
                                                                 PCIERC_MRG_PORT_CAP_STAT[M_RDY]. */
        uint64_t rdy_entr_l23          : 1;  /**< [  7:  7](R/W) Application ready to enter L23.  Indication that the application is
                                                                 ready to enter the L23 state. This provides control of the L23 entry
                                                                 (in case certain tasks must be performed before going into L23).
                                                                 The Mac delays sending PM_Enter_L23 (in response to PM_Turn_Off)
                                                                 until this signal becomes active. When this signal has been asserted
                                                                 by the application, it must be kept asserted until L2 entry has completed */
        uint64_t clk_req_n             : 1;  /**< [  8:  8](R/W) Indicates that the application logic is ready to have reference clock
                                                                 removed.

                                                                 0 = The application does not want to have the reference clock removed.

                                                                 1 = The application is ready to have the reference clock removed through
                                                                 either L1 PM Sub-states or L1 CPM. */
        uint64_t ccrs                  : 1;  /**< [  9:  9](R/W) When set, PEM will automatically clear [FRC_RETRY] after the config replay is complete. */
        uint64_t play                  : 1;  /**< [ 10: 10](R/W/H) When written with a one, config registers in PEM()_CFG_TBL() entries 0 through
                                                                 PEM()_CFG_TBL_SIZE[SIZE]-1
                                                                 will be read and the corresponding CSR writes performed. Hardware clears this bit when complete.
                                                                 Hardware automatically sets this bit after MAC reset when [AUTO_MODE] is set. */
        uint64_t auto_mode             : 1;  /**< [ 11: 11](R/W) Hardware behavior after MAC reset occurs.

                                                                 0 = No hardware intervention for MAC reset / link down (including hot reset).
                                                                 Firmware is responsible for bringing the link up after detecting that a MAC reset has occurred.

                                                                 1 = After MAC reset has deasserted, hardware will automatically set [PLAY]=1.
                                                                 Upon completion of config writes from the Config Table ([PLAY]==0), hardware will set [LNK_ENB]=1.

                                                                 For CNXXXX, this bit should always be set. */
        uint64_t pm_xtoff              : 1;  /**< [ 12: 12](WO) When written with one, a single cycle pulse to request from application
                                                                 to generate a PM_Turn_Off message. RC mode. */
        uint64_t scr_done              : 1;  /**< [ 13: 13](R/W) The ROM script (if present) can test this bit to see if the ROM script has
                                                                 already run. Typical usage is for the ROM script to test [SCR_DONE] and exit if
                                                                 true, else at the end of the ROM script, the script sets this bit. */
        uint64_t spares                : 2;  /**< [ 15: 14](R/W) Spare flops. */
        uint64_t reserved_16_31        : 16;
        uint64_t pbus                  : 8;  /**< [ 39: 32](RO/H) Primary bus number. */
        uint64_t dnum                  : 5;  /**< [ 44: 40](RO/H) Primary bus device number. */
        uint64_t auto_sd               : 1;  /**< [ 45: 45](RO/H) Link hardware autonomous speed disable. */
        uint64_t reserved_46_63        : 18;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_ctl_status_s cn; */
};
typedef union cavm_pemx_ctl_status cavm_pemx_ctl_status_t;

static inline uint64_t CAVM_PEMX_CTL_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_CTL_STATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8e0000000000ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x8e0000000000ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8e0000000000ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8e0000000000ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("PEMX_CTL_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_CTL_STATUS(a) cavm_pemx_ctl_status_t
#define bustype_CAVM_PEMX_CTL_STATUS(a) CSR_TYPE_NCB
#define basename_CAVM_PEMX_CTL_STATUS(a) "PEMX_CTL_STATUS"
#define device_bar_CAVM_PEMX_CTL_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_CTL_STATUS(a) (a)
#define arguments_CAVM_PEMX_CTL_STATUS(a) (a),-1,-1,-1

/**
 * Register (NCB) pem#_ctl_status2
 *
 * PEM Control Status 2 Register
 * This register contains additional general control and status of the PEM.
 *
 * This register is accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset. Note this differs from PEM()_CTL_STATUS's reset.
 */
union cavm_pemx_ctl_status2
{
    uint64_t u;
    struct cavm_pemx_ctl_status2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_33_63        : 31;
        uint64_t trgt1_ecc_cor_dis     : 1;  /**< [ 32: 32](R/W) Disable ECC error detection & correction on TRGT1 data from PEMC to PEMM. */
        uint64_t cfg_rtry              : 16; /**< [ 31: 16](R/W) The time in units of 655,360 ns clocks to wait for a CPL to an
                                                                 outbound configuration read that does not carry a retry status. Until such time
                                                                 that the timeout occurs and retry status is received for a configuration read,
                                                                 the read will be resent. A value of zero disables retries and treats a CPL retry
                                                                 as a CPL UR.

                                                                 To use, it is recommended [CFG_RTRY] be set value corresponding to 200 ms or
                                                                 less, although the PCI express base specification allows up to 900 ms for a
                                                                 device to send a successful completion.  When enabled, only one CFG RD may be
                                                                 issued until either successful completion or CPL UR. */
        uint64_t no_fwd_prg            : 16; /**< [ 15:  0](R/W) The time in units of 655,360 ns clocks to wait for the TLP FIFOs to be able to
                                                                 unload an outbound entry. If there is no forward progress, such that the timeout
                                                                 occurs, credits are returned to the originating bus and an interrupt (if enabled)
                                                                 is asserted. Further TLPs received are dropped on the floor and the credits
                                                                 associated with those TLPs are returned as well. Non-Posted are dropped with a
                                                                 completion returned (all 1's if config else completion with fault). Note that 0x0000
                                                                 will block detection of no forward progress.  Note that 0xFFFF is a reserved value
                                                                 that will immediately place the PEM into the 'forward progress stopped' state.
                                                                 This state holds until a MAC reset is received. */
#else /* Word 0 - Little Endian */
        uint64_t no_fwd_prg            : 16; /**< [ 15:  0](R/W) The time in units of 655,360 ns clocks to wait for the TLP FIFOs to be able to
                                                                 unload an outbound entry. If there is no forward progress, such that the timeout
                                                                 occurs, credits are returned to the originating bus and an interrupt (if enabled)
                                                                 is asserted. Further TLPs received are dropped on the floor and the credits
                                                                 associated with those TLPs are returned as well. Non-Posted are dropped with a
                                                                 completion returned (all 1's if config else completion with fault). Note that 0x0000
                                                                 will block detection of no forward progress.  Note that 0xFFFF is a reserved value
                                                                 that will immediately place the PEM into the 'forward progress stopped' state.
                                                                 This state holds until a MAC reset is received. */
        uint64_t cfg_rtry              : 16; /**< [ 31: 16](R/W) The time in units of 655,360 ns clocks to wait for a CPL to an
                                                                 outbound configuration read that does not carry a retry status. Until such time
                                                                 that the timeout occurs and retry status is received for a configuration read,
                                                                 the read will be resent. A value of zero disables retries and treats a CPL retry
                                                                 as a CPL UR.

                                                                 To use, it is recommended [CFG_RTRY] be set value corresponding to 200 ms or
                                                                 less, although the PCI express base specification allows up to 900 ms for a
                                                                 device to send a successful completion.  When enabled, only one CFG RD may be
                                                                 issued until either successful completion or CPL UR. */
        uint64_t trgt1_ecc_cor_dis     : 1;  /**< [ 32: 32](R/W) Disable ECC error detection & correction on TRGT1 data from PEMC to PEMM. */
        uint64_t reserved_33_63        : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_ctl_status2_s cn; */
};
typedef union cavm_pemx_ctl_status2 cavm_pemx_ctl_status2_t;

static inline uint64_t CAVM_PEMX_CTL_STATUS2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_CTL_STATUS2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8e0000000130ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x8e0000000130ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8e0000000130ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8e0000000130ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("PEMX_CTL_STATUS2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_CTL_STATUS2(a) cavm_pemx_ctl_status2_t
#define bustype_CAVM_PEMX_CTL_STATUS2(a) CSR_TYPE_NCB
#define basename_CAVM_PEMX_CTL_STATUS2(a) "PEMX_CTL_STATUS2"
#define device_bar_CAVM_PEMX_CTL_STATUS2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_CTL_STATUS2(a) (a)
#define arguments_CAVM_PEMX_CTL_STATUS2(a) (a),-1,-1,-1

/**
 * Register (NCB) pem#_dbg_info
 *
 * PEM Debug Information Register
 * This is a debug information register of the PEM.
 *
 * This register is accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 */
union cavm_pemx_dbg_info
{
    uint64_t u;
    struct cavm_pemx_dbg_info_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_52_63        : 12;
        uint64_t bad_zero              : 1;  /**< [ 51: 51](R/W1C/H) An access used ACC table to map to a zero-byte read but was not contained
                                                                 to a single QWord */
        uint64_t p_lswst               : 1;  /**< [ 50: 50](R/W1C/H) An NCBO store from IOBN P queue had no byte enables active. */
        uint64_t n_lswst               : 1;  /**< [ 49: 49](R/W1C/H) An NCBO store from IOBN N queue had no byte enables active. */
        uint64_t p_store_zero_byte     : 1;  /**< [ 48: 48](R/W1C/H) An NCBO store from IOBN P queue had no byte enables active. */
        uint64_t n_store_zero_byte     : 1;  /**< [ 47: 47](R/W1C/H) An NCBO store from IOBN N queue had no byte enables active. */
        uint64_t p_maps_to_n           : 1;  /**< [ 46: 46](R/W1C/H) A store access coming from the IOBN P queue is either an ECAM DID access or
                                                                 an ACC table access that maps to CFG or IO type. */
        uint64_t n_store               : 1;  /**< [ 45: 45](R/W1C/H) An NCBO store used ACC table to map to a CFG or IO type and was not contained
                                                                 to a single DWord. */
        uint64_t atomic_to_csr         : 1;  /**< [ 44: 44](R/W1C/H) An NCBO atomic access was within the CSR DID. */
        uint64_t csr_load              : 1;  /**< [ 43: 43](R/W1C/H) An NCBO load from CSR DID was improperly formatted based on size/alignment. Proper
                                                                 format is either DWord aligned DWord access or QWord aligned QWord access or,
                                                                 if an MSIX register, as long as it is contained within a single QWord. */
        uint64_t p_csr_store           : 1;  /**< [ 42: 42](R/W1C/H) An NCBO store to CSR DID and from IOBN P queue was improperly formatted based on
                                                                 size/alignment. Proper format is either DWord aligned DWord access or QWord aligned
                                                                 QWord access or, if an MSIX register, as long as it is contained within a single QWord. */
        uint64_t n_csr_store           : 1;  /**< [ 41: 41](R/W1C/H) An NCBO store to CSR DID and from IOBN N queue was improperly formatted based on
                                                                 size/alignment. Proper format is either DWord aligned DWord access or QWord aligned
                                                                 QWord access or, if an MSIX register, as long as it is contained within a single QWord. */
        uint64_t ecam_load             : 1;  /**< [ 40: 40](R/W1C/H) An NCBO load from ECAM DID was 64-bit. */
        uint64_t p_ecam_store          : 1;  /**< [ 39: 39](R/W1C/H) An NCBO store to ECAM DID was not contained within a single DWord and from IOBN P queue. */
        uint64_t n_ecam_store          : 1;  /**< [ 38: 38](R/W1C/H) An NCBO store to ECAM DID was not contained within a single DWord and from IOBN N queue. */
        uint64_t atomic_non_mem        : 1;  /**< [ 37: 37](R/W1C/H) An NCBO atomic to an ACC region mapped to CFG or IO. */
        uint64_t non_mem_load          : 1;  /**< [ 36: 36](R/W1C/H) An NCBO load to an ACC region mapped to CFG or IO and not contained to a single DWord. */
        uint64_t vf_en_off             : 1;  /**< [ 35: 35](R/W1C/H) A NP or P TLP was seen in the outbound path, but it was blocked due to
                                                                 being a VF-based access (vf_active set) while the VF enable was clear. */
        uint64_t in_flr                : 1;  /**< [ 34: 34](R/W1C/H) A NP or P TLP was seen in the outbound path, but it was blocked due to being in FLR. */
        uint64_t rasdp                 : 1;  /**< [ 33: 33](R/W1C/H) Core entered RAS data protection error mode. */
        uint64_t bmd_e                 : 1;  /**< [ 32: 32](R/W1C/H) A NP or P TLP was seen in the outbound path, but it was not allowed to master the bus.
                                                                 If a PF TLP and the PCIEEP_CMD[ME] is not set.
                                                                 For VF TLP, either the PCIEEP_CMD[ME]/PCIEEPVF_CMD[ME] are not set. */
        uint64_t lofp                  : 1;  /**< [ 31: 31](R/W1C/H) Lack of forward progress at TLP FIFOs timeout occurred. */
        uint64_t ecrc_e                : 1;  /**< [ 30: 30](R/W1C/H) Reserved. */
        uint64_t rawwpp                : 1;  /**< [ 29: 29](R/W1C/H) Reserved. */
        uint64_t racpp                 : 1;  /**< [ 28: 28](R/W1C/H) Reserved. */
        uint64_t ramtlp                : 1;  /**< [ 27: 27](R/W1C/H) Reserved. */
        uint64_t rarwdns               : 1;  /**< [ 26: 26](R/W1C/H) Reserved. */
        uint64_t caar                  : 1;  /**< [ 25: 25](R/W1C/H) Reserved. */
        uint64_t racca                 : 1;  /**< [ 24: 24](R/W1C/H) Reserved. */
        uint64_t racur                 : 1;  /**< [ 23: 23](R/W1C/H) Reserved. */
        uint64_t rauc                  : 1;  /**< [ 22: 22](R/W1C/H) Reserved.. */
        uint64_t rqo                   : 1;  /**< [ 21: 21](R/W1C/H) Reserved. */
        uint64_t fcuv                  : 1;  /**< [ 20: 20](R/W1C/H) Reserved. */
        uint64_t rpe                   : 1;  /**< [ 19: 19](R/W1C/H) Reserved. */
        uint64_t fcpvwt                : 1;  /**< [ 18: 18](R/W1C/H) Reserved. */
        uint64_t dpeoosd               : 1;  /**< [ 17: 17](R/W1C/H) Reserved. */
        uint64_t rtwdle                : 1;  /**< [ 16: 16](R/W1C/H) Reserved. */
        uint64_t rdwdle                : 1;  /**< [ 15: 15](R/W1C/H) Reserved. */
        uint64_t mre                   : 1;  /**< [ 14: 14](R/W1C/H) Reserved. */
        uint64_t rte                   : 1;  /**< [ 13: 13](R/W1C/H) Reserved. */
        uint64_t acto                  : 1;  /**< [ 12: 12](R/W1C/H) A completion timeout occurred. */
        uint64_t rvdm                  : 1;  /**< [ 11: 11](R/W1C/H) Received vendor-defined message. */
        uint64_t rumep                 : 1;  /**< [ 10: 10](R/W1C/H) Received unlock message (EP mode only). */
        uint64_t rptamrc               : 1;  /**< [  9:  9](R/W1C/H) Received PME turnoff acknowledge message (RC mode only). */
        uint64_t rpmerc                : 1;  /**< [  8:  8](R/W1C/H) Received PME message (RC mode only). */
        uint64_t rfemrc                : 1;  /**< [  7:  7](R/W1C/H) Received fatal-error message. This bit is set when a message with ERR_FATAL
                                                                 is received. */
        uint64_t rnfemrc               : 1;  /**< [  6:  6](R/W1C/H) Received nonfatal error message. */
        uint64_t rcemrc                : 1;  /**< [  5:  5](R/W1C/H) Received correctable error message. */
        uint64_t rpoison               : 1;  /**< [  4:  4](R/W1C/H) Received poisoned TLP not to be forwarded to the peer. */
        uint64_t recrce                : 1;  /**< [  3:  3](R/W1C/H) Received ECRC error. */
        uint64_t rtlplle               : 1;  /**< [  2:  2](R/W1C/H) Received TLP has link layer error. */
        uint64_t rtlpmal               : 1;  /**< [  1:  1](R/W1C/H) Received TLP is malformed or a message. If the core receives a MSG (or vendor message) or
                                                                 if a received AtomicOp violates address/length rules, this bit is set as well. */
        uint64_t spoison               : 1;  /**< [  0:  0](R/W1C/H) Poisoned TLP sent. This legacy interrupt is deprecated and is never set. */
#else /* Word 0 - Little Endian */
        uint64_t spoison               : 1;  /**< [  0:  0](R/W1C/H) Poisoned TLP sent. This legacy interrupt is deprecated and is never set. */
        uint64_t rtlpmal               : 1;  /**< [  1:  1](R/W1C/H) Received TLP is malformed or a message. If the core receives a MSG (or vendor message) or
                                                                 if a received AtomicOp violates address/length rules, this bit is set as well. */
        uint64_t rtlplle               : 1;  /**< [  2:  2](R/W1C/H) Received TLP has link layer error. */
        uint64_t recrce                : 1;  /**< [  3:  3](R/W1C/H) Received ECRC error. */
        uint64_t rpoison               : 1;  /**< [  4:  4](R/W1C/H) Received poisoned TLP not to be forwarded to the peer. */
        uint64_t rcemrc                : 1;  /**< [  5:  5](R/W1C/H) Received correctable error message. */
        uint64_t rnfemrc               : 1;  /**< [  6:  6](R/W1C/H) Received nonfatal error message. */
        uint64_t rfemrc                : 1;  /**< [  7:  7](R/W1C/H) Received fatal-error message. This bit is set when a message with ERR_FATAL
                                                                 is received. */
        uint64_t rpmerc                : 1;  /**< [  8:  8](R/W1C/H) Received PME message (RC mode only). */
        uint64_t rptamrc               : 1;  /**< [  9:  9](R/W1C/H) Received PME turnoff acknowledge message (RC mode only). */
        uint64_t rumep                 : 1;  /**< [ 10: 10](R/W1C/H) Received unlock message (EP mode only). */
        uint64_t rvdm                  : 1;  /**< [ 11: 11](R/W1C/H) Received vendor-defined message. */
        uint64_t acto                  : 1;  /**< [ 12: 12](R/W1C/H) A completion timeout occurred. */
        uint64_t rte                   : 1;  /**< [ 13: 13](R/W1C/H) Reserved. */
        uint64_t mre                   : 1;  /**< [ 14: 14](R/W1C/H) Reserved. */
        uint64_t rdwdle                : 1;  /**< [ 15: 15](R/W1C/H) Reserved. */
        uint64_t rtwdle                : 1;  /**< [ 16: 16](R/W1C/H) Reserved. */
        uint64_t dpeoosd               : 1;  /**< [ 17: 17](R/W1C/H) Reserved. */
        uint64_t fcpvwt                : 1;  /**< [ 18: 18](R/W1C/H) Reserved. */
        uint64_t rpe                   : 1;  /**< [ 19: 19](R/W1C/H) Reserved. */
        uint64_t fcuv                  : 1;  /**< [ 20: 20](R/W1C/H) Reserved. */
        uint64_t rqo                   : 1;  /**< [ 21: 21](R/W1C/H) Reserved. */
        uint64_t rauc                  : 1;  /**< [ 22: 22](R/W1C/H) Reserved.. */
        uint64_t racur                 : 1;  /**< [ 23: 23](R/W1C/H) Reserved. */
        uint64_t racca                 : 1;  /**< [ 24: 24](R/W1C/H) Reserved. */
        uint64_t caar                  : 1;  /**< [ 25: 25](R/W1C/H) Reserved. */
        uint64_t rarwdns               : 1;  /**< [ 26: 26](R/W1C/H) Reserved. */
        uint64_t ramtlp                : 1;  /**< [ 27: 27](R/W1C/H) Reserved. */
        uint64_t racpp                 : 1;  /**< [ 28: 28](R/W1C/H) Reserved. */
        uint64_t rawwpp                : 1;  /**< [ 29: 29](R/W1C/H) Reserved. */
        uint64_t ecrc_e                : 1;  /**< [ 30: 30](R/W1C/H) Reserved. */
        uint64_t lofp                  : 1;  /**< [ 31: 31](R/W1C/H) Lack of forward progress at TLP FIFOs timeout occurred. */
        uint64_t bmd_e                 : 1;  /**< [ 32: 32](R/W1C/H) A NP or P TLP was seen in the outbound path, but it was not allowed to master the bus.
                                                                 If a PF TLP and the PCIEEP_CMD[ME] is not set.
                                                                 For VF TLP, either the PCIEEP_CMD[ME]/PCIEEPVF_CMD[ME] are not set. */
        uint64_t rasdp                 : 1;  /**< [ 33: 33](R/W1C/H) Core entered RAS data protection error mode. */
        uint64_t in_flr                : 1;  /**< [ 34: 34](R/W1C/H) A NP or P TLP was seen in the outbound path, but it was blocked due to being in FLR. */
        uint64_t vf_en_off             : 1;  /**< [ 35: 35](R/W1C/H) A NP or P TLP was seen in the outbound path, but it was blocked due to
                                                                 being a VF-based access (vf_active set) while the VF enable was clear. */
        uint64_t non_mem_load          : 1;  /**< [ 36: 36](R/W1C/H) An NCBO load to an ACC region mapped to CFG or IO and not contained to a single DWord. */
        uint64_t atomic_non_mem        : 1;  /**< [ 37: 37](R/W1C/H) An NCBO atomic to an ACC region mapped to CFG or IO. */
        uint64_t n_ecam_store          : 1;  /**< [ 38: 38](R/W1C/H) An NCBO store to ECAM DID was not contained within a single DWord and from IOBN N queue. */
        uint64_t p_ecam_store          : 1;  /**< [ 39: 39](R/W1C/H) An NCBO store to ECAM DID was not contained within a single DWord and from IOBN P queue. */
        uint64_t ecam_load             : 1;  /**< [ 40: 40](R/W1C/H) An NCBO load from ECAM DID was 64-bit. */
        uint64_t n_csr_store           : 1;  /**< [ 41: 41](R/W1C/H) An NCBO store to CSR DID and from IOBN N queue was improperly formatted based on
                                                                 size/alignment. Proper format is either DWord aligned DWord access or QWord aligned
                                                                 QWord access or, if an MSIX register, as long as it is contained within a single QWord. */
        uint64_t p_csr_store           : 1;  /**< [ 42: 42](R/W1C/H) An NCBO store to CSR DID and from IOBN P queue was improperly formatted based on
                                                                 size/alignment. Proper format is either DWord aligned DWord access or QWord aligned
                                                                 QWord access or, if an MSIX register, as long as it is contained within a single QWord. */
        uint64_t csr_load              : 1;  /**< [ 43: 43](R/W1C/H) An NCBO load from CSR DID was improperly formatted based on size/alignment. Proper
                                                                 format is either DWord aligned DWord access or QWord aligned QWord access or,
                                                                 if an MSIX register, as long as it is contained within a single QWord. */
        uint64_t atomic_to_csr         : 1;  /**< [ 44: 44](R/W1C/H) An NCBO atomic access was within the CSR DID. */
        uint64_t n_store               : 1;  /**< [ 45: 45](R/W1C/H) An NCBO store used ACC table to map to a CFG or IO type and was not contained
                                                                 to a single DWord. */
        uint64_t p_maps_to_n           : 1;  /**< [ 46: 46](R/W1C/H) A store access coming from the IOBN P queue is either an ECAM DID access or
                                                                 an ACC table access that maps to CFG or IO type. */
        uint64_t n_store_zero_byte     : 1;  /**< [ 47: 47](R/W1C/H) An NCBO store from IOBN N queue had no byte enables active. */
        uint64_t p_store_zero_byte     : 1;  /**< [ 48: 48](R/W1C/H) An NCBO store from IOBN P queue had no byte enables active. */
        uint64_t n_lswst               : 1;  /**< [ 49: 49](R/W1C/H) An NCBO store from IOBN N queue had no byte enables active. */
        uint64_t p_lswst               : 1;  /**< [ 50: 50](R/W1C/H) An NCBO store from IOBN P queue had no byte enables active. */
        uint64_t bad_zero              : 1;  /**< [ 51: 51](R/W1C/H) An access used ACC table to map to a zero-byte read but was not contained
                                                                 to a single QWord */
        uint64_t reserved_52_63        : 12;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_dbg_info_s cn; */
};
typedef union cavm_pemx_dbg_info cavm_pemx_dbg_info_t;

static inline uint64_t CAVM_PEMX_DBG_INFO(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_DBG_INFO(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8e0000000108ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x8e0000000108ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8e0000000108ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8e0000000108ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("PEMX_DBG_INFO", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_DBG_INFO(a) cavm_pemx_dbg_info_t
#define bustype_CAVM_PEMX_DBG_INFO(a) CSR_TYPE_NCB
#define basename_CAVM_PEMX_DBG_INFO(a) "PEMX_DBG_INFO"
#define device_bar_CAVM_PEMX_DBG_INFO(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_DBG_INFO(a) (a)
#define arguments_CAVM_PEMX_DBG_INFO(a) (a),-1,-1,-1

/**
 * Register (NCB) pem#_debug
 *
 * PEM Debug Register
 * This register contains status of level interrupts for debugging purposes.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on cold reset.
 */
union cavm_pemx_debug
{
    uint64_t u;
    struct cavm_pemx_debug_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ib_drop_why           : 32; /**< [ 63: 32](R/W1C/H) Reasons why inbound TLPs were dropped.
                                                                 \<32\> = No NCB. The TLP targets NCBI but there is no NCBI connected to PEM in this chip.
                                                                 \<33\> = No EBUS. The TLP targets EBI but there is no EBI connected to PEM in this chip.
                                                                 \<34\> = No PSPI. The TLP targets PSPI (ROM) but there is no PSPI connected to PEM in this chip.
                                                                 \<35\> = Core Reset. The TLP was processed during core reset or core reset recovery process.
                                                                 \<36\> = IB Drop. A CFG or IO completion was dropped as marked by outbound at time of NP request.
                                                                 \<37\> = Illegal BAR. BAR miss or improper config to BAR0, BAR2 or BAR4.
                                                                 \<38\> = Illegal EBAR.  The TLP targets EBAR (EROM) but was NOT a read (writes not supported).
                                                                 \<39\> = Zero MemWr.  The TLP was a zero-length memory write operation which we do not support.
                                                                 \<40\> = Illegal PCIe Type.  Inbound TLP is not supported (examples: CFG, IO, RDLOCK).
                                                                 \<41\> = Unsupported AtomicOp.  The TLP was poisoned, to PSPI bus, or to EBI with atomic disabled.
                                                                 \<42\> = Malformed AtomicOp.  Unsupported size/alignment restrictions.
                                                                 \<43\> = Malformed AtomicOp EOT.  The AtomicOp did not indicate EOT on its first beat of data.
                                                                 \<44\> = Mac Reset. The TLP was processed when the Mac was in reset.
                                                                 \<45\> = SBRST.  The TLP was processed when the chip as RC initiates hot reset or link down event.
                                                                 \<46\> = No BME.  The TLP functions PCIEEP_CMD[ME]/PCIEEPVF_CMD[ME] (Bus Master
                                                                 Enable) set OR it was an AtomicOp and PCIERC_DEV_CTL2[ATOM_OP] (AtomicOp requster
                                                                 enable) was not set.
                                                                 \<47\> = In FLR.  The TLP's function (PF/VF) was in Function Level Reset.  Same as bit 54.
                                                                 \<48\> = IN RASDP.  The TLP was processed when the Mac indiacated RAS Data Protection mode.
                                                                 \<49\> = Framing.  The TLP was terminated due to incorrect framing (EOT on the expected beat).
                                                                 \<50\> = Max TLP Size.  The TLP DW length exceeded 256B.
                                                                 \<51\> = DLLP Error.  The TLP was flagged by the MAC as having a Data Link Error (LCRC) error.
                                                                 \<52\> = ECRC Error.  The TLP was flagged by the MAC as having an ECRC error on the received TLP.
                                                                 \<53\> = TLP Error.  The TLP was flagged by the MAC as being malformed on TRGT1
                                                                 (ECRC or LUT failure).
                                                                 \<54\> = In FLR.  The TLP's function (PF/VF) was in Function Level Reset.  Same as bit 47.
                                                                 \<63:55\> = Reserved. */
        uint64_t reserved_6_31         : 26;
        uint64_t intval                : 6;  /**< [  5:  0](RO/H) Status of INTX, PMEI, and AERI interrupts. */
#else /* Word 0 - Little Endian */
        uint64_t intval                : 6;  /**< [  5:  0](RO/H) Status of INTX, PMEI, and AERI interrupts. */
        uint64_t reserved_6_31         : 26;
        uint64_t ib_drop_why           : 32; /**< [ 63: 32](R/W1C/H) Reasons why inbound TLPs were dropped.
                                                                 \<32\> = No NCB. The TLP targets NCBI but there is no NCBI connected to PEM in this chip.
                                                                 \<33\> = No EBUS. The TLP targets EBI but there is no EBI connected to PEM in this chip.
                                                                 \<34\> = No PSPI. The TLP targets PSPI (ROM) but there is no PSPI connected to PEM in this chip.
                                                                 \<35\> = Core Reset. The TLP was processed during core reset or core reset recovery process.
                                                                 \<36\> = IB Drop. A CFG or IO completion was dropped as marked by outbound at time of NP request.
                                                                 \<37\> = Illegal BAR. BAR miss or improper config to BAR0, BAR2 or BAR4.
                                                                 \<38\> = Illegal EBAR.  The TLP targets EBAR (EROM) but was NOT a read (writes not supported).
                                                                 \<39\> = Zero MemWr.  The TLP was a zero-length memory write operation which we do not support.
                                                                 \<40\> = Illegal PCIe Type.  Inbound TLP is not supported (examples: CFG, IO, RDLOCK).
                                                                 \<41\> = Unsupported AtomicOp.  The TLP was poisoned, to PSPI bus, or to EBI with atomic disabled.
                                                                 \<42\> = Malformed AtomicOp.  Unsupported size/alignment restrictions.
                                                                 \<43\> = Malformed AtomicOp EOT.  The AtomicOp did not indicate EOT on its first beat of data.
                                                                 \<44\> = Mac Reset. The TLP was processed when the Mac was in reset.
                                                                 \<45\> = SBRST.  The TLP was processed when the chip as RC initiates hot reset or link down event.
                                                                 \<46\> = No BME.  The TLP functions PCIEEP_CMD[ME]/PCIEEPVF_CMD[ME] (Bus Master
                                                                 Enable) set OR it was an AtomicOp and PCIERC_DEV_CTL2[ATOM_OP] (AtomicOp requster
                                                                 enable) was not set.
                                                                 \<47\> = In FLR.  The TLP's function (PF/VF) was in Function Level Reset.  Same as bit 54.
                                                                 \<48\> = IN RASDP.  The TLP was processed when the Mac indiacated RAS Data Protection mode.
                                                                 \<49\> = Framing.  The TLP was terminated due to incorrect framing (EOT on the expected beat).
                                                                 \<50\> = Max TLP Size.  The TLP DW length exceeded 256B.
                                                                 \<51\> = DLLP Error.  The TLP was flagged by the MAC as having a Data Link Error (LCRC) error.
                                                                 \<52\> = ECRC Error.  The TLP was flagged by the MAC as having an ECRC error on the received TLP.
                                                                 \<53\> = TLP Error.  The TLP was flagged by the MAC as being malformed on TRGT1
                                                                 (ECRC or LUT failure).
                                                                 \<54\> = In FLR.  The TLP's function (PF/VF) was in Function Level Reset.  Same as bit 47.
                                                                 \<63:55\> = Reserved. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_debug_s cn10; */
    /* struct cavm_pemx_debug_s cn10ka; */
    struct cavm_pemx_debug_cn10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ib_drop_why           : 32; /**< [ 63: 32](R/W1C/H) Reasons why inbound TLPs were dropped.
                                                                 \<32\> = No NCB. The TLP targets NCBI but there is no NCBI connected to PEM in this chip.
                                                                 \<33\> = No EBUS. The TLP targets EBI but there is no EBI connected to PEM in this chip.
                                                                 \<34\> = No PSPI. The TLP targets PSPI (ROM) but there is no PSPI connected to PEM in this chip.
                                                                 \<35\> = Core Reset. The TLP was processed during core reset or core reset recovery process.
                                                                 \<36\> = IB Drop. A CFG or IO completion was dropped as marked by outbound at time of NP request.
                                                                 \<37\> = Illegal BAR. BAR miss or improper config to BAR0, BAR2 or BAR4.
                                                                 \<38\> = Illegal EBAR.  The TLP targets EBAR (EROM) but was NOT a read (writes not supported).
                                                                 \<39\> = Zero MemWr.  The TLP was a zero-length memory write operation which we do not support.
                                                                 \<40\> = Illegal PCIe Type.  Inbound TLP is not supported (examples: CFG, IO, RDLOCK).
                                                                 \<41\> = Unsupported AtomicOp.  The TLP was poisoned, to PSPI bus, or to EBI with atomic disabled.
                                                                 \<42\> = Malformed AtomicOp.  Unsupported size/alignment restrictions.
                                                                 \<43\> = Malformed AtomicOp EOT.  The AtomicOp did not indicate EOT on its first beat of data.
                                                                 \<44\> = Mac Reset. The TLP was processed when the Mac was in reset.
                                                                 \<45\> = SBRST.  The TLP was processed when the chip as RC initiates hot reset or link down event.
                                                                 \<46\> = No BME.  The TLP functions PCIEEP_CMD[ME]/PCIEEPVF_CMD[ME] (Bus Master
                                                                 Enable) set OR it was an AtomicOp and PCIERC_DEV_CTL2[ATOM_OP] (AtomicOp requster
                                                                 enable) was not set.
                                                                 \<47\> = In FLR.  The TLP's function (PF/VF) was in Function Level Reset.  Same as bit 54.
                                                                 \<48\> = IN RASDP.  The TLP was processed when the Mac indiacated RAS Data Protection mode.
                                                                 \<49\> = Framing.  The TLP was terminated due to incorrect framing (EOT on the expected beat).
                                                                 \<50\> = Max TLP Size.  The TLP DW length exceeded 256B.
                                                                 \<51\> = DLLP Error.  The TLP was flagged by the MAC as having a Data Link Error (LCRC) error.
                                                                 \<52\> = TLP Error.  The TLP was flagged by the MAC as being malformed on TRGT1
                                                                 (ECRC or LUT failure).
                                                                 \<53\> = ECRC Error.  The TLP was flagged by the MAC as having an ECRC error on the received TLP.
                                                                 \<54\> = In FLR.  The TLP's function (PF/VF) was in Function Level Reset.  Same as bit 47.
                                                                 \<63:55\> = Reserved. */
        uint64_t reserved_6_31         : 26;
        uint64_t intval                : 6;  /**< [  5:  0](RO/H) Status of INTX, PMEI, and AERI interrupts. */
#else /* Word 0 - Little Endian */
        uint64_t intval                : 6;  /**< [  5:  0](RO/H) Status of INTX, PMEI, and AERI interrupts. */
        uint64_t reserved_6_31         : 26;
        uint64_t ib_drop_why           : 32; /**< [ 63: 32](R/W1C/H) Reasons why inbound TLPs were dropped.
                                                                 \<32\> = No NCB. The TLP targets NCBI but there is no NCBI connected to PEM in this chip.
                                                                 \<33\> = No EBUS. The TLP targets EBI but there is no EBI connected to PEM in this chip.
                                                                 \<34\> = No PSPI. The TLP targets PSPI (ROM) but there is no PSPI connected to PEM in this chip.
                                                                 \<35\> = Core Reset. The TLP was processed during core reset or core reset recovery process.
                                                                 \<36\> = IB Drop. A CFG or IO completion was dropped as marked by outbound at time of NP request.
                                                                 \<37\> = Illegal BAR. BAR miss or improper config to BAR0, BAR2 or BAR4.
                                                                 \<38\> = Illegal EBAR.  The TLP targets EBAR (EROM) but was NOT a read (writes not supported).
                                                                 \<39\> = Zero MemWr.  The TLP was a zero-length memory write operation which we do not support.
                                                                 \<40\> = Illegal PCIe Type.  Inbound TLP is not supported (examples: CFG, IO, RDLOCK).
                                                                 \<41\> = Unsupported AtomicOp.  The TLP was poisoned, to PSPI bus, or to EBI with atomic disabled.
                                                                 \<42\> = Malformed AtomicOp.  Unsupported size/alignment restrictions.
                                                                 \<43\> = Malformed AtomicOp EOT.  The AtomicOp did not indicate EOT on its first beat of data.
                                                                 \<44\> = Mac Reset. The TLP was processed when the Mac was in reset.
                                                                 \<45\> = SBRST.  The TLP was processed when the chip as RC initiates hot reset or link down event.
                                                                 \<46\> = No BME.  The TLP functions PCIEEP_CMD[ME]/PCIEEPVF_CMD[ME] (Bus Master
                                                                 Enable) set OR it was an AtomicOp and PCIERC_DEV_CTL2[ATOM_OP] (AtomicOp requster
                                                                 enable) was not set.
                                                                 \<47\> = In FLR.  The TLP's function (PF/VF) was in Function Level Reset.  Same as bit 54.
                                                                 \<48\> = IN RASDP.  The TLP was processed when the Mac indiacated RAS Data Protection mode.
                                                                 \<49\> = Framing.  The TLP was terminated due to incorrect framing (EOT on the expected beat).
                                                                 \<50\> = Max TLP Size.  The TLP DW length exceeded 256B.
                                                                 \<51\> = DLLP Error.  The TLP was flagged by the MAC as having a Data Link Error (LCRC) error.
                                                                 \<52\> = TLP Error.  The TLP was flagged by the MAC as being malformed on TRGT1
                                                                 (ECRC or LUT failure).
                                                                 \<53\> = ECRC Error.  The TLP was flagged by the MAC as having an ECRC error on the received TLP.
                                                                 \<54\> = In FLR.  The TLP's function (PF/VF) was in Function Level Reset.  Same as bit 47.
                                                                 \<63:55\> = Reserved. */
#endif /* Word 0 - End */
    } cn10kb;
    /* struct cavm_pemx_debug_s cnf10ka; */
    /* struct cavm_pemx_debug_s cnf10kb; */
};
typedef union cavm_pemx_debug cavm_pemx_debug_t;

static inline uint64_t CAVM_PEMX_DEBUG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_DEBUG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8e0000000110ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x8e0000000110ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8e0000000110ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8e0000000110ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("PEMX_DEBUG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_DEBUG(a) cavm_pemx_debug_t
#define bustype_CAVM_PEMX_DEBUG(a) CSR_TYPE_NCB
#define basename_CAVM_PEMX_DEBUG(a) "PEMX_DEBUG"
#define device_bar_CAVM_PEMX_DEBUG(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_DEBUG(a) (a)
#define arguments_CAVM_PEMX_DEBUG(a) (a),-1,-1,-1

/**
 * Register (NCB) pem#_diag_status
 *
 * PEM Diagnostic Status Register
 * This register contains selection control for the core diagnostic bus.
 *
 * This register is accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on MAC reset.
 */
union cavm_pemx_diag_status
{
    uint64_t u;
    struct cavm_pemx_diag_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_43_63        : 21;
        uint64_t l1sub_fsm             : 3;  /**< [ 42: 40](RO/H) Power management L1sub FSM state.

                                                                 0x0 = Idle.
                                                                 0x1 = L1_0.
                                                                 0x2 = L1_0_WAIT4_ACK.
                                                                 0x3 = L1_0_WAIT4_CLKREQ.
                                                                 0x4 = L1_N_ENTRY.
                                                                 0x5 = L1_N.
                                                                 0x6 = L1_N_EXIT.
                                                                 0x7 = L1_N_ABORT. */
        uint64_t reserved_37_39        : 3;
        uint64_t pm_slv_fsm            : 5;  /**< [ 36: 32](RO/H) Power management slave FSM state.

                                                                 0x0 = Idle.
                                                                 0x1 = RESPOND_NAK.
                                                                 0x2 = BLOCK_TLP.
                                                                 0x3 = WAIT_LAST_TLP_ACK.
                                                                 0x4 = Reserved.
                                                                 0x5 = LINK_ENTR_L1.
                                                                 0x6 = L1.
                                                                 0x7 = L1_EXIT.
                                                                 0x8 = L23RDY.
                                                                 0x9 = LINK_ENTR_L23.
                                                                 0xa = L23RDY_WAIT4ALIVE.
                                                                 0xb = ACK_WAIT4IDLE.
                                                                 0xc = WAIT_LAST_PMDLLP.
                                                                 0xd = NAK_BLOCK_TLP.
                                                                 0xe = WAIT_NAK_TLP_ACK.
                                                                 0xf = WAIT_NAK_TIMER.
                                                                 0x10 - 0x1f = Reserved. */
        uint64_t reserved_29_31        : 3;
        uint64_t pm_mst_fsm            : 5;  /**< [ 28: 24](RO/H) Power management master FSM state.

                                                                 0X0 = IDLE.
                                                                 0X1 = L0.
                                                                 0X2 = L0S.
                                                                 0X3 = ENTER_L0S.
                                                                 0X4 = PEM_L0S_EXIT.
                                                                 0X5 = WAIT_PMCSR_CPL_SENT.
                                                                 0X6-0X7 = Reserved.
                                                                 0X8 = L1.
                                                                 0X9 = L1_BLOCK_TLP.
                                                                 0XA = L1_WAIT_LAST_TLP_ACK.
                                                                 0XB = L1_WAIT_PMDLLP_ACK.
                                                                 0XC = L1_LINK_ENTR_L1.
                                                                 0XD = L1_EXIT.
                                                                 0XE = Reserved.
                                                                 0XF = PREP_4L1.
                                                                 0X10 = L23_BLOCK_TLP.
                                                                 0X11 = L23_WAIT_LAST_TLP_ACK.
                                                                 0X12 = L23_WAIT_PMDLLP_ACK.
                                                                 0X13 = L23_ENTR_L23.
                                                                 0X14 = L23RDY.
                                                                 0X15 = PREP_4L23.
                                                                 0X16 = L23RDY_WAIT4ALIVE.
                                                                 0X17 = L0S_BLOCK_TLP.
                                                                 0X18 = WAIT_LAST_PMDLLP.
                                                                 0X19 = WAIT_DSTATE_UPDATE.
                                                                 0x1a-0x1f = Reserved. */
        uint64_t reserved_21_23        : 3;
        uint64_t pclkreqn              : 1;  /**< [ 20: 20](RO/H) Request PCLK removal.
                                                                 0x0 = Do not request PCLK removal.
                                                                 0x1 = Request PCLK removal for executing L1 with Clock PM. */
        uint64_t l1_entry_inprogress   : 1;  /**< [ 19: 19](RO/H) L1 entry process is in progress. */
        uint64_t sel_aux_clk           : 1;  /**< [ 18: 18](RO/H) When asserted, switches the source of aux_clk from core_clk to the low speed clock. */
        uint64_t lnk_up                : 1;  /**< [ 17: 17](RO/H) Link is up. */
        uint64_t lnkst_l1              : 1;  /**< [ 16: 16](RO/H) Power Management State in L1 state. */
        uint64_t lnkst_l1sub           : 1;  /**< [ 15: 15](RO/H) Power Management State in L1 substate. */
        uint64_t lnkst_l2              : 1;  /**< [ 14: 14](RO/H) Power Management State in L2 state. */
        uint64_t lnkst_l2_exit         : 1;  /**< [ 13: 13](RO/H) Power Management State in L2 exit state.
                                                                 Not applicable for downstream port. */
        uint64_t pclk_rate             : 3;  /**< [ 12: 10](RO/H) Current pclk rate.
                                                                 0x0 = GEN1.
                                                                 0x1 = GEN2.
                                                                 0x2 = GEN3.
                                                                 0x3 = GEN4.
                                                                 0x4 = GEN5.
                                                                 0x5 - 0x7 = Reserved. */
        uint64_t ltssm                 : 6;  /**< [  9:  4](RO/H) Current  smlh_ltssm_state. */
        uint64_t pwrdwn                : 4;  /**< [  3:  0](RO/H) Current pipe mac_phy_powerdown state.
                                                                 0x0 = P0.
                                                                 0x1 = P0s.
                                                                 0x2 = P1.
                                                                 0x3 = P2.
                                                                 0x4 - 0x7: Reserved. */
#else /* Word 0 - Little Endian */
        uint64_t pwrdwn                : 4;  /**< [  3:  0](RO/H) Current pipe mac_phy_powerdown state.
                                                                 0x0 = P0.
                                                                 0x1 = P0s.
                                                                 0x2 = P1.
                                                                 0x3 = P2.
                                                                 0x4 - 0x7: Reserved. */
        uint64_t ltssm                 : 6;  /**< [  9:  4](RO/H) Current  smlh_ltssm_state. */
        uint64_t pclk_rate             : 3;  /**< [ 12: 10](RO/H) Current pclk rate.
                                                                 0x0 = GEN1.
                                                                 0x1 = GEN2.
                                                                 0x2 = GEN3.
                                                                 0x3 = GEN4.
                                                                 0x4 = GEN5.
                                                                 0x5 - 0x7 = Reserved. */
        uint64_t lnkst_l2_exit         : 1;  /**< [ 13: 13](RO/H) Power Management State in L2 exit state.
                                                                 Not applicable for downstream port. */
        uint64_t lnkst_l2              : 1;  /**< [ 14: 14](RO/H) Power Management State in L2 state. */
        uint64_t lnkst_l1sub           : 1;  /**< [ 15: 15](RO/H) Power Management State in L1 substate. */
        uint64_t lnkst_l1              : 1;  /**< [ 16: 16](RO/H) Power Management State in L1 state. */
        uint64_t lnk_up                : 1;  /**< [ 17: 17](RO/H) Link is up. */
        uint64_t sel_aux_clk           : 1;  /**< [ 18: 18](RO/H) When asserted, switches the source of aux_clk from core_clk to the low speed clock. */
        uint64_t l1_entry_inprogress   : 1;  /**< [ 19: 19](RO/H) L1 entry process is in progress. */
        uint64_t pclkreqn              : 1;  /**< [ 20: 20](RO/H) Request PCLK removal.
                                                                 0x0 = Do not request PCLK removal.
                                                                 0x1 = Request PCLK removal for executing L1 with Clock PM. */
        uint64_t reserved_21_23        : 3;
        uint64_t pm_mst_fsm            : 5;  /**< [ 28: 24](RO/H) Power management master FSM state.

                                                                 0X0 = IDLE.
                                                                 0X1 = L0.
                                                                 0X2 = L0S.
                                                                 0X3 = ENTER_L0S.
                                                                 0X4 = PEM_L0S_EXIT.
                                                                 0X5 = WAIT_PMCSR_CPL_SENT.
                                                                 0X6-0X7 = Reserved.
                                                                 0X8 = L1.
                                                                 0X9 = L1_BLOCK_TLP.
                                                                 0XA = L1_WAIT_LAST_TLP_ACK.
                                                                 0XB = L1_WAIT_PMDLLP_ACK.
                                                                 0XC = L1_LINK_ENTR_L1.
                                                                 0XD = L1_EXIT.
                                                                 0XE = Reserved.
                                                                 0XF = PREP_4L1.
                                                                 0X10 = L23_BLOCK_TLP.
                                                                 0X11 = L23_WAIT_LAST_TLP_ACK.
                                                                 0X12 = L23_WAIT_PMDLLP_ACK.
                                                                 0X13 = L23_ENTR_L23.
                                                                 0X14 = L23RDY.
                                                                 0X15 = PREP_4L23.
                                                                 0X16 = L23RDY_WAIT4ALIVE.
                                                                 0X17 = L0S_BLOCK_TLP.
                                                                 0X18 = WAIT_LAST_PMDLLP.
                                                                 0X19 = WAIT_DSTATE_UPDATE.
                                                                 0x1a-0x1f = Reserved. */
        uint64_t reserved_29_31        : 3;
        uint64_t pm_slv_fsm            : 5;  /**< [ 36: 32](RO/H) Power management slave FSM state.

                                                                 0x0 = Idle.
                                                                 0x1 = RESPOND_NAK.
                                                                 0x2 = BLOCK_TLP.
                                                                 0x3 = WAIT_LAST_TLP_ACK.
                                                                 0x4 = Reserved.
                                                                 0x5 = LINK_ENTR_L1.
                                                                 0x6 = L1.
                                                                 0x7 = L1_EXIT.
                                                                 0x8 = L23RDY.
                                                                 0x9 = LINK_ENTR_L23.
                                                                 0xa = L23RDY_WAIT4ALIVE.
                                                                 0xb = ACK_WAIT4IDLE.
                                                                 0xc = WAIT_LAST_PMDLLP.
                                                                 0xd = NAK_BLOCK_TLP.
                                                                 0xe = WAIT_NAK_TLP_ACK.
                                                                 0xf = WAIT_NAK_TIMER.
                                                                 0x10 - 0x1f = Reserved. */
        uint64_t reserved_37_39        : 3;
        uint64_t l1sub_fsm             : 3;  /**< [ 42: 40](RO/H) Power management L1sub FSM state.

                                                                 0x0 = Idle.
                                                                 0x1 = L1_0.
                                                                 0x2 = L1_0_WAIT4_ACK.
                                                                 0x3 = L1_0_WAIT4_CLKREQ.
                                                                 0x4 = L1_N_ENTRY.
                                                                 0x5 = L1_N.
                                                                 0x6 = L1_N_EXIT.
                                                                 0x7 = L1_N_ABORT. */
        uint64_t reserved_43_63        : 21;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_diag_status_s cn; */
};
typedef union cavm_pemx_diag_status cavm_pemx_diag_status_t;

static inline uint64_t CAVM_PEMX_DIAG_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_DIAG_STATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8e0000000010ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x8e0000000010ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8e0000000010ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8e0000000010ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("PEMX_DIAG_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_DIAG_STATUS(a) cavm_pemx_diag_status_t
#define bustype_CAVM_PEMX_DIAG_STATUS(a) CSR_TYPE_NCB
#define basename_CAVM_PEMX_DIAG_STATUS(a) "PEMX_DIAG_STATUS"
#define device_bar_CAVM_PEMX_DIAG_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_DIAG_STATUS(a) (a)
#define arguments_CAVM_PEMX_DIAG_STATUS(a) (a),-1,-1,-1

/**
 * Register (NCB) pem#_dis_port
 *
 * PEM Disable Port Register
 * This register controls whether traffic is allowed to be sent out the PCIe link.
 *
 * This register is accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 */
union cavm_pemx_dis_port
{
    uint64_t u;
    struct cavm_pemx_dis_port_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t dis_port              : 1;  /**< [  0:  0](R/W1C/H) When set, outbound read and writes are disabled (dropped) and reads will
                                                                 return completion with fault over NCBI or EBUS.  For an endpoint, software
                                                                 must clear this bit after power-on reset to be able to send outbound traffic.
                                                                 Further, this bit will be set by hardware when either MAC reset or core reset
                                                                 completes an assertion phase. Writing a one to this location clears the bit and
                                                                 will allow outbound operations to be sent to the MAC at the beginning of the next
                                                                 transfer. This bit cannot be cleared while PEM()_ON[PEMOOR] is clear.

                                                                 This bit is automatically cleared by hardware when the link LTSSM reaches L0
                                                                 state after a MAC reset, and PEM()_CFG[AUTO_DP_CLR] is set. */
#else /* Word 0 - Little Endian */
        uint64_t dis_port              : 1;  /**< [  0:  0](R/W1C/H) When set, outbound read and writes are disabled (dropped) and reads will
                                                                 return completion with fault over NCBI or EBUS.  For an endpoint, software
                                                                 must clear this bit after power-on reset to be able to send outbound traffic.
                                                                 Further, this bit will be set by hardware when either MAC reset or core reset
                                                                 completes an assertion phase. Writing a one to this location clears the bit and
                                                                 will allow outbound operations to be sent to the MAC at the beginning of the next
                                                                 transfer. This bit cannot be cleared while PEM()_ON[PEMOOR] is clear.

                                                                 This bit is automatically cleared by hardware when the link LTSSM reaches L0
                                                                 state after a MAC reset, and PEM()_CFG[AUTO_DP_CLR] is set. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_dis_port_s cn; */
};
typedef union cavm_pemx_dis_port cavm_pemx_dis_port_t;

static inline uint64_t CAVM_PEMX_DIS_PORT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_DIS_PORT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8e0000000050ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x8e0000000050ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8e0000000050ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8e0000000050ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("PEMX_DIS_PORT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_DIS_PORT(a) cavm_pemx_dis_port_t
#define bustype_CAVM_PEMX_DIS_PORT(a) CSR_TYPE_NCB
#define basename_CAVM_PEMX_DIS_PORT(a) "PEMX_DIS_PORT"
#define device_bar_CAVM_PEMX_DIS_PORT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_DIS_PORT(a) (a)
#define arguments_CAVM_PEMX_DIS_PORT(a) (a),-1,-1,-1

/**
 * Register (NCB) pem#_ebi_tlp_credits
 *
 * PEM EBUS TLP Credits Register
 * This register specifies the number of credits for use in moving TLPs. When this register is
 * written, the credit values are reset to the register value. This register is for diagnostic
 * use only, and should only be written when PEM()_CTL_STATUS[LNK_ENB] is clear.
 *
 * This register is accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on MAC reset.
 */
union cavm_pemx_ebi_tlp_credits
{
    uint64_t u;
    struct cavm_pemx_ebi_tlp_credits_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t ebi_cpl               : 11; /**< [ 31: 21](R/W) TLP 32 B credits for completion TLPs in the PEMs inbound EBUS buffers.
                                                                 Legal values are 0x9 to 0x40. */
        uint64_t ebi_np                : 10; /**< [ 20: 11](R/W) TLP headers for non-posted TLPs in the PEMs inbound EBUS buffers.
                                                                 Legal values are 0x1 to 0x20. */
        uint64_t ebi_p                 : 11; /**< [ 10:  0](R/W) TLP 32 B credits for posted TLPs in the PEMs inbound EBUS buffers.
                                                                 Legal values are 0x8 to 0x40. */
#else /* Word 0 - Little Endian */
        uint64_t ebi_p                 : 11; /**< [ 10:  0](R/W) TLP 32 B credits for posted TLPs in the PEMs inbound EBUS buffers.
                                                                 Legal values are 0x8 to 0x40. */
        uint64_t ebi_np                : 10; /**< [ 20: 11](R/W) TLP headers for non-posted TLPs in the PEMs inbound EBUS buffers.
                                                                 Legal values are 0x1 to 0x20. */
        uint64_t ebi_cpl               : 11; /**< [ 31: 21](R/W) TLP 32 B credits for completion TLPs in the PEMs inbound EBUS buffers.
                                                                 Legal values are 0x9 to 0x40. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_ebi_tlp_credits_s cn; */
};
typedef union cavm_pemx_ebi_tlp_credits cavm_pemx_ebi_tlp_credits_t;

static inline uint64_t CAVM_PEMX_EBI_TLP_CREDITS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_EBI_TLP_CREDITS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8e0000000028ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x8e0000000028ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8e0000000028ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8e0000000028ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("PEMX_EBI_TLP_CREDITS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_EBI_TLP_CREDITS(a) cavm_pemx_ebi_tlp_credits_t
#define bustype_CAVM_PEMX_EBI_TLP_CREDITS(a) CSR_TYPE_NCB
#define basename_CAVM_PEMX_EBI_TLP_CREDITS(a) "PEMX_EBI_TLP_CREDITS"
#define device_bar_CAVM_PEMX_EBI_TLP_CREDITS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_EBI_TLP_CREDITS(a) (a)
#define arguments_CAVM_PEMX_EBI_TLP_CREDITS(a) (a),-1,-1,-1

/**
 * Register (NCB) pem#_ebo_fifo_status
 *
 * PEM EBO Offloading FIFO Status Register
 * This register contains status about the PEM EBO offloading FIFOs.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 */
union cavm_pemx_ebo_fifo_status
{
    uint64_t u;
    struct cavm_pemx_ebo_fifo_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_54_63        : 10;
        uint64_t c_cmd_volume          : 6;  /**< [ 53: 48](RO/H) Reports the number of valid EBO completion data beats currently held in the
                                                                 EBO completion buffer. Each entry represents a beat of the EBO bus related to a
                                                                 completion operation and the value read can range from 0x0 to a maximum of 0x20
                                                                 which would represent completely full. For diagnostic use only. */
        uint64_t reserved_46_47        : 2;
        uint64_t n_cmd_volume          : 6;  /**< [ 45: 40](RO/H) Reports the number of valid entries currently held in the EBO non-posted
                                                                 offloading FIFO. Each entry represents a beat of the EBO bus related to a
                                                                 Non-Posted operation and the value read can range from 0x0 to a maximum of 0x20
                                                                 which would represent completely full.
                                                                 For diagnostic use only. */
        uint64_t reserved_38_39        : 2;
        uint64_t p_cmd_volume          : 6;  /**< [ 37: 32](RO/H) Reports the number of valid entries currently held in the EBO posted offloading
                                                                 FIFO. Each entry represents a beat of the EBO bus related to a memory store and
                                                                 the value read can range from 0x0 to a maximum of 0x20 which would represent
                                                                 completely full.
                                                                 For diagnostic use only. */
        uint64_t c_data_volume         : 8;  /**< [ 31: 24](RO/H) Reports the number of valid EBO completion data beats currently held in the
                                                                 EBO completion buffer. Each entry represents a beat of the EBO bus related to a
                                                                 completion operation and the value read can range from 0x0 to a maximum of 0x40
                                                                 which would represent completely full. For diagnostic use only. */
        uint64_t reserved_20_23        : 4;
        uint64_t n_data_volume         : 8;  /**< [ 19: 12](RO/H) Reports the number of valid entries currently held in the EBO non-posted
                                                                 offloading FIFO. Each entry represents a beat of the EBO bus related to a
                                                                 Non-Posted operation and the value read can range from 0x0 to a maximum of 0x40
                                                                 which would represent completely full.
                                                                 For diagnostic use only. */
        uint64_t reserved_8_11         : 4;
        uint64_t p_data_volume         : 8;  /**< [  7:  0](RO/H) Reports the number of valid entries currently held in the EBO posted offloading
                                                                 FIFO. Each entry represents a beat of the EBO bus related to a memory store and
                                                                 the value read can range from 0x0 to a maximum of 0x40 which would represent
                                                                 completely full.
                                                                 For diagnostic use only. */
#else /* Word 0 - Little Endian */
        uint64_t p_data_volume         : 8;  /**< [  7:  0](RO/H) Reports the number of valid entries currently held in the EBO posted offloading
                                                                 FIFO. Each entry represents a beat of the EBO bus related to a memory store and
                                                                 the value read can range from 0x0 to a maximum of 0x40 which would represent
                                                                 completely full.
                                                                 For diagnostic use only. */
        uint64_t reserved_8_11         : 4;
        uint64_t n_data_volume         : 8;  /**< [ 19: 12](RO/H) Reports the number of valid entries currently held in the EBO non-posted
                                                                 offloading FIFO. Each entry represents a beat of the EBO bus related to a
                                                                 Non-Posted operation and the value read can range from 0x0 to a maximum of 0x40
                                                                 which would represent completely full.
                                                                 For diagnostic use only. */
        uint64_t reserved_20_23        : 4;
        uint64_t c_data_volume         : 8;  /**< [ 31: 24](RO/H) Reports the number of valid EBO completion data beats currently held in the
                                                                 EBO completion buffer. Each entry represents a beat of the EBO bus related to a
                                                                 completion operation and the value read can range from 0x0 to a maximum of 0x40
                                                                 which would represent completely full. For diagnostic use only. */
        uint64_t p_cmd_volume          : 6;  /**< [ 37: 32](RO/H) Reports the number of valid entries currently held in the EBO posted offloading
                                                                 FIFO. Each entry represents a beat of the EBO bus related to a memory store and
                                                                 the value read can range from 0x0 to a maximum of 0x20 which would represent
                                                                 completely full.
                                                                 For diagnostic use only. */
        uint64_t reserved_38_39        : 2;
        uint64_t n_cmd_volume          : 6;  /**< [ 45: 40](RO/H) Reports the number of valid entries currently held in the EBO non-posted
                                                                 offloading FIFO. Each entry represents a beat of the EBO bus related to a
                                                                 Non-Posted operation and the value read can range from 0x0 to a maximum of 0x20
                                                                 which would represent completely full.
                                                                 For diagnostic use only. */
        uint64_t reserved_46_47        : 2;
        uint64_t c_cmd_volume          : 6;  /**< [ 53: 48](RO/H) Reports the number of valid EBO completion data beats currently held in the
                                                                 EBO completion buffer. Each entry represents a beat of the EBO bus related to a
                                                                 completion operation and the value read can range from 0x0 to a maximum of 0x20
                                                                 which would represent completely full. For diagnostic use only. */
        uint64_t reserved_54_63        : 10;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_ebo_fifo_status_s cn; */
};
typedef union cavm_pemx_ebo_fifo_status cavm_pemx_ebo_fifo_status_t;

static inline uint64_t CAVM_PEMX_EBO_FIFO_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_EBO_FIFO_STATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8e0000000140ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x8e0000000140ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8e0000000140ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8e0000000140ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("PEMX_EBO_FIFO_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_EBO_FIFO_STATUS(a) cavm_pemx_ebo_fifo_status_t
#define bustype_CAVM_PEMX_EBO_FIFO_STATUS(a) CSR_TYPE_NCB
#define basename_CAVM_PEMX_EBO_FIFO_STATUS(a) "PEMX_EBO_FIFO_STATUS"
#define device_bar_CAVM_PEMX_EBO_FIFO_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_EBO_FIFO_STATUS(a) (a)
#define arguments_CAVM_PEMX_EBO_FIFO_STATUS(a) (a),-1,-1,-1

/**
 * Register (NCB) pem#_ebus_ctl
 *
 * PEM EBUS Control Register
 * This register contains EBUS related control bits.
 *
 * This register is accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on cold reset.
 */
union cavm_pemx_ebus_ctl
{
    uint64_t u;
    struct cavm_pemx_ebus_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_33_63        : 31;
        uint64_t ebo_stf               : 1;  /**< [ 32: 32](R/W) If set, force store and forward mode for offloading FIFOs on outbound EBUS.
                                                                 This might be useful in a system with an EBUS which cannot keep up with
                                                                 the PCIe link bandwidth (e.g. 128B EBUS or many idle cycles on EBUS) where
                                                                 idle cycles introduced in the packet stream could interfere with NCBO
                                                                 performance. In general it should not be set. */
        uint64_t reserved_16_31        : 16;
        uint64_t clken_force           : 1;  /**< [ 15: 15](R/W) Force clock enable on inbound EBUS to be always asserted. For diagnostic use only. */
        uint64_t erom_sel              : 1;  /**< [ 14: 14](R/W) If set, inbound PF EROM BAR accesses are directed to EBUS instead of NCB. This
                                                                 must be clear when the PEM is configured for RC mode.

                                                                 For CNXXXX this bit must be clear. */
        uint64_t reserved_12_13        : 2;
        uint64_t vf_bar0_sel           : 1;  /**< [ 11: 11](RO) If set, inbound VF BAR0 accesses are directed to EBUS instead of NCB. This bit is
                                                                 hard-coded to 1. */
        uint64_t pf_bar2_sel           : 1;  /**< [ 10: 10](R/W) If set, inbound PF BAR2 accesses are directed to EBUS instead of NCB. In RC mode,
                                                                 registers PEM()_P2N_BAR2_START / PEM()_BAR_CTL[BAR2_SIZ] are used to determine a BAR2 hit
                                                                 rather than standard PCIe config registers.

                                                                 For CNXXXX this bit must be clear. */
        uint64_t pf_bar4_sel           : 1;  /**< [  9:  9](R/W) If set, inbound PF BAR4 accesses are directed to EBUS instead of NCB. In RC mode,
                                                                 registers PEM()_P2N_BAR4_START / PEM()_BAR_CTL[BAR4_SIZ] are used to determine a BAR4 hit
                                                                 rather than standard PCIe config registers.

                                                                 For CNXXXX this bit must be clear. */
        uint64_t pf_bar0_sel           : 1;  /**< [  8:  8](R/W) If set, inbound PF BAR0 accesses are directed to EBUS instead of NCB. In RC mode,
                                                                 registers PEM()_P2N_BAR0_START / PEM()_BAR_CTL[BAR0_SIZ] are used to determine a BAR0 hit
                                                                 rather than standard PCIe config registers.

                                                                 For CNXXXX this bit must be set. */
        uint64_t reserved_6_7          : 2;
        uint64_t ntlp_ro_dis           : 1;  /**< [  5:  5](R/W) Relaxed ordering disable for non-posted TLPs. Forces relaxed ordering bit off
                                                                 when incoming non-posted TLPs arrive targeting EBUS. */
        uint64_t inv_par               : 1;  /**< [  4:  4](R/W) When set, causes the parity bit on inbound EBUS to be inverted. This bit is for
                                                                 debug only. */
        uint64_t atomic_dis            : 1;  /**< [  3:  3](R/W) If set, incoming atomics targeting EBUS are discarded and a completion with
                                                                 status of unsupported request is returned to the sender.

                                                                 This bit must be set. */
        uint64_t ctlp_ro_dis           : 1;  /**< [  2:  2](R/W) Relaxed ordering disable for completion TLPs. Forces relaxed ordering bit off
                                                                 when incoming completion TLPs arrive targeting EBUS. */
        uint64_t ptlp_ro_dis           : 1;  /**< [  1:  1](R/W) Relaxed ordering disable for posted TLPs. Forces relaxed ordering bit off when
                                                                 incoming posted TLPs arrive targeting EBUS. */
        uint64_t vdm_dis               : 1;  /**< [  0:  0](R/W) If set, incoming vendor defined messages from PCIe will be discarded rather than
                                                                 forwarded on EBUS.

                                                                 For CNXXXX this bit must be set. */
#else /* Word 0 - Little Endian */
        uint64_t vdm_dis               : 1;  /**< [  0:  0](R/W) If set, incoming vendor defined messages from PCIe will be discarded rather than
                                                                 forwarded on EBUS.

                                                                 For CNXXXX this bit must be set. */
        uint64_t ptlp_ro_dis           : 1;  /**< [  1:  1](R/W) Relaxed ordering disable for posted TLPs. Forces relaxed ordering bit off when
                                                                 incoming posted TLPs arrive targeting EBUS. */
        uint64_t ctlp_ro_dis           : 1;  /**< [  2:  2](R/W) Relaxed ordering disable for completion TLPs. Forces relaxed ordering bit off
                                                                 when incoming completion TLPs arrive targeting EBUS. */
        uint64_t atomic_dis            : 1;  /**< [  3:  3](R/W) If set, incoming atomics targeting EBUS are discarded and a completion with
                                                                 status of unsupported request is returned to the sender.

                                                                 This bit must be set. */
        uint64_t inv_par               : 1;  /**< [  4:  4](R/W) When set, causes the parity bit on inbound EBUS to be inverted. This bit is for
                                                                 debug only. */
        uint64_t ntlp_ro_dis           : 1;  /**< [  5:  5](R/W) Relaxed ordering disable for non-posted TLPs. Forces relaxed ordering bit off
                                                                 when incoming non-posted TLPs arrive targeting EBUS. */
        uint64_t reserved_6_7          : 2;
        uint64_t pf_bar0_sel           : 1;  /**< [  8:  8](R/W) If set, inbound PF BAR0 accesses are directed to EBUS instead of NCB. In RC mode,
                                                                 registers PEM()_P2N_BAR0_START / PEM()_BAR_CTL[BAR0_SIZ] are used to determine a BAR0 hit
                                                                 rather than standard PCIe config registers.

                                                                 For CNXXXX this bit must be set. */
        uint64_t pf_bar4_sel           : 1;  /**< [  9:  9](R/W) If set, inbound PF BAR4 accesses are directed to EBUS instead of NCB. In RC mode,
                                                                 registers PEM()_P2N_BAR4_START / PEM()_BAR_CTL[BAR4_SIZ] are used to determine a BAR4 hit
                                                                 rather than standard PCIe config registers.

                                                                 For CNXXXX this bit must be clear. */
        uint64_t pf_bar2_sel           : 1;  /**< [ 10: 10](R/W) If set, inbound PF BAR2 accesses are directed to EBUS instead of NCB. In RC mode,
                                                                 registers PEM()_P2N_BAR2_START / PEM()_BAR_CTL[BAR2_SIZ] are used to determine a BAR2 hit
                                                                 rather than standard PCIe config registers.

                                                                 For CNXXXX this bit must be clear. */
        uint64_t vf_bar0_sel           : 1;  /**< [ 11: 11](RO) If set, inbound VF BAR0 accesses are directed to EBUS instead of NCB. This bit is
                                                                 hard-coded to 1. */
        uint64_t reserved_12_13        : 2;
        uint64_t erom_sel              : 1;  /**< [ 14: 14](R/W) If set, inbound PF EROM BAR accesses are directed to EBUS instead of NCB. This
                                                                 must be clear when the PEM is configured for RC mode.

                                                                 For CNXXXX this bit must be clear. */
        uint64_t clken_force           : 1;  /**< [ 15: 15](R/W) Force clock enable on inbound EBUS to be always asserted. For diagnostic use only. */
        uint64_t reserved_16_31        : 16;
        uint64_t ebo_stf               : 1;  /**< [ 32: 32](R/W) If set, force store and forward mode for offloading FIFOs on outbound EBUS.
                                                                 This might be useful in a system with an EBUS which cannot keep up with
                                                                 the PCIe link bandwidth (e.g. 128B EBUS or many idle cycles on EBUS) where
                                                                 idle cycles introduced in the packet stream could interfere with NCBO
                                                                 performance. In general it should not be set. */
        uint64_t reserved_33_63        : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_ebus_ctl_s cn; */
};
typedef union cavm_pemx_ebus_ctl cavm_pemx_ebus_ctl_t;

static inline uint64_t CAVM_PEMX_EBUS_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_EBUS_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8e0000000080ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x8e0000000080ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8e0000000080ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8e0000000080ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("PEMX_EBUS_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_EBUS_CTL(a) cavm_pemx_ebus_ctl_t
#define bustype_CAVM_PEMX_EBUS_CTL(a) CSR_TYPE_NCB
#define basename_CAVM_PEMX_EBUS_CTL(a) "PEMX_EBUS_CTL"
#define device_bar_CAVM_PEMX_EBUS_CTL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_EBUS_CTL(a) (a)
#define arguments_CAVM_PEMX_EBUS_CTL(a) (a),-1,-1,-1

/**
 * Register (NCB) pem#_end_merge
 *
 * PEM End Merge Register
 * Any access (read or write) to this register over NCBO will create a merging barrier
 * for both the write and read streams within PEM outbound pipelines such that no NCBO
 * reads or writes received after this register's access will merge with any NCBO accesses
 * that occurred prior to this register's access.  Note that RSL accesses to this register
 * will have no effect on merging.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 */
union cavm_pemx_end_merge
{
    uint64_t u;
    struct cavm_pemx_end_merge_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_end_merge_s cn; */
};
typedef union cavm_pemx_end_merge cavm_pemx_end_merge_t;

static inline uint64_t CAVM_PEMX_END_MERGE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_END_MERGE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8e0000000188ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x8e0000000188ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8e0000000188ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8e0000000188ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("PEMX_END_MERGE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_END_MERGE(a) cavm_pemx_end_merge_t
#define bustype_CAVM_PEMX_END_MERGE(a) CSR_TYPE_NCB
#define basename_CAVM_PEMX_END_MERGE(a) "PEMX_END_MERGE"
#define device_bar_CAVM_PEMX_END_MERGE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_END_MERGE(a) (a)
#define arguments_CAVM_PEMX_END_MERGE(a) (a),-1,-1,-1

/**
 * Register (NCB) pem#_erom_bar_addr
 *
 * PEM EROM BAR Address Register
 * This register configures PEM EROM BAR accesses targeted at NCBI.
 * Fields in this register are only used when PEM()_EBUS_CTL[EROM_SEL]
 * is clear and the PEM is configured for EP mode.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 */
union cavm_pemx_erom_bar_addr
{
    uint64_t u;
    struct cavm_pemx_erom_bar_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t wvirt                 : 1;  /**< [ 63: 63](R/W) Virtual:
                                                                   0 = [RD_ADDR] is a physical addresses.
                                                                   1 = [RD_ADDR] is a virtual address. */
        uint64_t pspi_en               : 1;  /**< [ 62: 62](R/W) Reserved. */
        uint64_t reserved_53_61        : 9;
        uint64_t rd_addr               : 37; /**< [ 52: 16](R/W) Base address for PEM EROM BAR transactions that is appended to the offset. This
                                                                 field is only used when PEM()_EBUS_CTL[EROM_SEL] is clear, and PEM is configured for EP mode. */
        uint64_t reserved_0_15         : 16;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_15         : 16;
        uint64_t rd_addr               : 37; /**< [ 52: 16](R/W) Base address for PEM EROM BAR transactions that is appended to the offset. This
                                                                 field is only used when PEM()_EBUS_CTL[EROM_SEL] is clear, and PEM is configured for EP mode. */
        uint64_t reserved_53_61        : 9;
        uint64_t pspi_en               : 1;  /**< [ 62: 62](R/W) Reserved. */
        uint64_t wvirt                 : 1;  /**< [ 63: 63](R/W) Virtual:
                                                                   0 = [RD_ADDR] is a physical addresses.
                                                                   1 = [RD_ADDR] is a virtual address. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_erom_bar_addr_s cn; */
};
typedef union cavm_pemx_erom_bar_addr cavm_pemx_erom_bar_addr_t;

static inline uint64_t CAVM_PEMX_EROM_BAR_ADDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_EROM_BAR_ADDR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8e0000000160ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x8e0000000160ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8e0000000160ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8e0000000160ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("PEMX_EROM_BAR_ADDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_EROM_BAR_ADDR(a) cavm_pemx_erom_bar_addr_t
#define bustype_CAVM_PEMX_EROM_BAR_ADDR(a) CSR_TYPE_NCB
#define basename_CAVM_PEMX_EROM_BAR_ADDR(a) "PEMX_EROM_BAR_ADDR"
#define device_bar_CAVM_PEMX_EROM_BAR_ADDR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_EROM_BAR_ADDR(a) (a)
#define arguments_CAVM_PEMX_EROM_BAR_ADDR(a) (a),-1,-1,-1

/**
 * Register (NCB) pem#_erom_size
 *
 * PEM EROM BAR Address Register
 * This register configures PEM EROM BAR accesses targeted at NCBI.
 * Fields in this register are only used when PEM()_EBUS_CTL[EROM_SEL]
 * is clear and the PEM is configured for EP mode.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on cold reset.
 */
union cavm_pemx_erom_size
{
    uint64_t u;
    struct cavm_pemx_erom_size_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_3_63         : 61;
        uint64_t erom_siz              : 3;  /**< [  2:  0](R/W) PCIe EROM BAR size. Used to mask off upper bits of address
                                                                 when sending to NCBI or via private EROM interface to MIO.

                                                                 0x0 = Reserved.
                                                                 0x1 = 64 KB; 2^16.
                                                                 0x2 = 128 KB; 2^17.
                                                                 0x3 = 256 KB; 2^18.
                                                                 0x4 = 512 KB; 2^19.
                                                                 0x5 = 1 MB; 2^20.
                                                                 0x6 = 2 MB; 2^21.
                                                                 0x7 = 4 MB; 2^22. */
#else /* Word 0 - Little Endian */
        uint64_t erom_siz              : 3;  /**< [  2:  0](R/W) PCIe EROM BAR size. Used to mask off upper bits of address
                                                                 when sending to NCBI or via private EROM interface to MIO.

                                                                 0x0 = Reserved.
                                                                 0x1 = 64 KB; 2^16.
                                                                 0x2 = 128 KB; 2^17.
                                                                 0x3 = 256 KB; 2^18.
                                                                 0x4 = 512 KB; 2^19.
                                                                 0x5 = 1 MB; 2^20.
                                                                 0x6 = 2 MB; 2^21.
                                                                 0x7 = 4 MB; 2^22. */
        uint64_t reserved_3_63         : 61;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_erom_size_s cn; */
};
typedef union cavm_pemx_erom_size cavm_pemx_erom_size_t;

static inline uint64_t CAVM_PEMX_EROM_SIZE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_EROM_SIZE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8e0000000230ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x8e0000000230ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8e0000000230ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8e0000000230ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("PEMX_EROM_SIZE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_EROM_SIZE(a) cavm_pemx_erom_size_t
#define bustype_CAVM_PEMX_EROM_SIZE(a) CSR_TYPE_NCB
#define basename_CAVM_PEMX_EROM_SIZE(a) "PEMX_EROM_SIZE"
#define device_bar_CAVM_PEMX_EROM_SIZE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_EROM_SIZE(a) (a)
#define arguments_CAVM_PEMX_EROM_SIZE(a) (a),-1,-1,-1

/**
 * Register (NCB) pem#_flr_ctl
 *
 * PEM FLR Control Register
 * This register provides function level reset controls.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on cold reset.
 */
union cavm_pemx_flr_ctl
{
    uint64_t u;
    struct cavm_pemx_flr_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t chge                  : 1;  /**< [  5:  5](R/W) When set, the default 33 ms expiration of the function level reset
                                                                 global counter can be changed. */
        uint64_t inc                   : 1;  /**< [  4:  4](R/W) When [CHGE] is set, this bit determines if the 33 ms expiration of the function
                                                                 level reset global counter will be increased (set) or decreased (not set). */
        uint64_t delta                 : 2;  /**< [  3:  2](R/W) When [CHGE] is set, this field determines the delta time to increase/decrease
                                                                 the 33 ms expiration of the function level reset global counter.
                                                                 0x0 = 1 ms.
                                                                 0x1 = 2 ms.
                                                                 0x2 = 4 ms.
                                                                 0x3 = 8 ms. */
        uint64_t timer_ctl             : 2;  /**< [  1:  0](R/W) Each FLR indication can be cleared within 66-99 ms by use of a timer. Controls how
                                                                 FLR indication is cleared:
                                                                 0x0 = PEM()_FLR_REQ* can be used to clear the FLR indication, if not written before
                                                                 timer expires, the timer will auto-clear FLR.
                                                                 0x1 = PEM()_FLR_REQ* must be used to clear the FLR indication, timers are not used.
                                                                 0x2 = Only timers are used, PEM()_FLR_REQ* is ignored.
                                                                 0x3 = Reserved. */
#else /* Word 0 - Little Endian */
        uint64_t timer_ctl             : 2;  /**< [  1:  0](R/W) Each FLR indication can be cleared within 66-99 ms by use of a timer. Controls how
                                                                 FLR indication is cleared:
                                                                 0x0 = PEM()_FLR_REQ* can be used to clear the FLR indication, if not written before
                                                                 timer expires, the timer will auto-clear FLR.
                                                                 0x1 = PEM()_FLR_REQ* must be used to clear the FLR indication, timers are not used.
                                                                 0x2 = Only timers are used, PEM()_FLR_REQ* is ignored.
                                                                 0x3 = Reserved. */
        uint64_t delta                 : 2;  /**< [  3:  2](R/W) When [CHGE] is set, this field determines the delta time to increase/decrease
                                                                 the 33 ms expiration of the function level reset global counter.
                                                                 0x0 = 1 ms.
                                                                 0x1 = 2 ms.
                                                                 0x2 = 4 ms.
                                                                 0x3 = 8 ms. */
        uint64_t inc                   : 1;  /**< [  4:  4](R/W) When [CHGE] is set, this bit determines if the 33 ms expiration of the function
                                                                 level reset global counter will be increased (set) or decreased (not set). */
        uint64_t chge                  : 1;  /**< [  5:  5](R/W) When set, the default 33 ms expiration of the function level reset
                                                                 global counter can be changed. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_flr_ctl_s cn; */
};
typedef union cavm_pemx_flr_ctl cavm_pemx_flr_ctl_t;

static inline uint64_t CAVM_PEMX_FLR_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_FLR_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8e0000000070ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x8e0000000070ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8e0000000070ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8e0000000070ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("PEMX_FLR_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_FLR_CTL(a) cavm_pemx_flr_ctl_t
#define bustype_CAVM_PEMX_FLR_CTL(a) CSR_TYPE_NCB
#define basename_CAVM_PEMX_FLR_CTL(a) "PEMX_FLR_CTL"
#define device_bar_CAVM_PEMX_FLR_CTL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_FLR_CTL(a) (a)
#define arguments_CAVM_PEMX_FLR_CTL(a) (a),-1,-1,-1

/**
 * Register (NCB) pem#_flr_pf#_stopreq
 *
 * PEM PF Stop Request Register
 * PF function level reset stop outbound requests register.
 * Hardware automatically sets the STOPREQ bit for the PF when it enters a
 * function level reset (FLR).  Software is responsible for clearing the STOPREQ
 * bit but must not do so prior to hardware taking down the FLR, which could be
 * as long as 100 ms.  It may be appropriate for software to wait longer before clearing
 * STOPREQ, software may need to drain deep DPI queues for example.
 * Whenever PEM receives a PF or child VF request mastered by {ProductLine} over NCBO/EBUS
 * (i.e. P or NP), when STOPREQ is set for the function, PEM will discard the outgoing request
 * before sending it to the PCIe core.  If a NP, PEM will schedule an immediate completion
 * with error for the request - no timeout is required. STOPREQ mimics the behavior of
 * PCIEEP_CMD[ME] for outbound requests that will master the PCIe bus (P and NP).
 *
 * STOPREQ has no effect on NCBI/incoming EBUS traffic.
 *
 * STOPREQ will have no effect on completions returned by CNXXXX over NCBO/EBUS.
 *
 * When a PEM()_FLR_PF()_STOPREQ is set, none of the associated
 * PEM()_FLR_VF()_STOPREQ[VF_STOPREQ] will be set.
 *
 * STOPREQ is reset when the MAC is reset, and is not reset after a chip soft reset.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on MAC reset.
 */
union cavm_pemx_flr_pfx_stopreq
{
    uint64_t u;
    struct cavm_pemx_flr_pfx_stopreq_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t pf_stopreq            : 1;  /**< [  0:  0](R/W1C/H) PF STOPREQ bit. */
#else /* Word 0 - Little Endian */
        uint64_t pf_stopreq            : 1;  /**< [  0:  0](R/W1C/H) PF STOPREQ bit. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_flr_pfx_stopreq_s cn; */
};
typedef union cavm_pemx_flr_pfx_stopreq cavm_pemx_flr_pfx_stopreq_t;

static inline uint64_t CAVM_PEMX_FLR_PFX_STOPREQ(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_FLR_PFX_STOPREQ(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=5) && (b<=1)))
        return 0x8e0000000c00ll + 0x1000000000ll * ((a) & 0x7) + 8ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=5) && (b<=1)))
        return 0x8e0000000c00ll + 0x1000000000ll * ((a) & 0x7) + 8ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=1) && (b<=1)))
        return 0x8e0000000c00ll + 0x1000000000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=1) && (b<=1)))
        return 0x8e0000000c00ll + 0x1000000000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("PEMX_FLR_PFX_STOPREQ", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_FLR_PFX_STOPREQ(a,b) cavm_pemx_flr_pfx_stopreq_t
#define bustype_CAVM_PEMX_FLR_PFX_STOPREQ(a,b) CSR_TYPE_NCB
#define basename_CAVM_PEMX_FLR_PFX_STOPREQ(a,b) "PEMX_FLR_PFX_STOPREQ"
#define device_bar_CAVM_PEMX_FLR_PFX_STOPREQ(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_FLR_PFX_STOPREQ(a,b) (a)
#define arguments_CAVM_PEMX_FLR_PFX_STOPREQ(a,b) (a),(b),-1,-1

/**
 * Register (NCB) pem#_flr_stopreq_ctl
 *
 * PEM FLR Global Count Control Register
 * Function level reset STOPREQ control register.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on cold reset.
 */
union cavm_pemx_flr_stopreq_ctl
{
    uint64_t u;
    struct cavm_pemx_flr_stopreq_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t stopreqclr            : 1;  /**< [  0:  0](R/W) Stop request clear behavior.

                                                                 0 = Only software (and reset) can clear PEM()_FLR_PF()_STOPREQ[PF_STOPREQ] and
                                                                 PEM()_FLR_VF()_STOPREQ[VF_STOPREQ] bits.

                                                                 1 = PEM hardware also clears the STOPREQ bit when PEM completes an FLR to the
                                                                 PCIe core. In the case of a VF, only one STOPREQ bit gets cleared upon each FLR
                                                                 ack when [STOPREQCLR] is set.

                                                                 The srst will assert upon a PF FLR, and srst could be used to reset all STOPREQ
                                                                 bits regardless of [STOPREQCLR]. Otherwise, a PF FLR does not assert srst. */
#else /* Word 0 - Little Endian */
        uint64_t stopreqclr            : 1;  /**< [  0:  0](R/W) Stop request clear behavior.

                                                                 0 = Only software (and reset) can clear PEM()_FLR_PF()_STOPREQ[PF_STOPREQ] and
                                                                 PEM()_FLR_VF()_STOPREQ[VF_STOPREQ] bits.

                                                                 1 = PEM hardware also clears the STOPREQ bit when PEM completes an FLR to the
                                                                 PCIe core. In the case of a VF, only one STOPREQ bit gets cleared upon each FLR
                                                                 ack when [STOPREQCLR] is set.

                                                                 The srst will assert upon a PF FLR, and srst could be used to reset all STOPREQ
                                                                 bits regardless of [STOPREQCLR]. Otherwise, a PF FLR does not assert srst. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_flr_stopreq_ctl_s cn; */
};
typedef union cavm_pemx_flr_stopreq_ctl cavm_pemx_flr_stopreq_ctl_t;

static inline uint64_t CAVM_PEMX_FLR_STOPREQ_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_FLR_STOPREQ_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8e0000000078ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x8e0000000078ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8e0000000078ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8e0000000078ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("PEMX_FLR_STOPREQ_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_FLR_STOPREQ_CTL(a) cavm_pemx_flr_stopreq_ctl_t
#define bustype_CAVM_PEMX_FLR_STOPREQ_CTL(a) CSR_TYPE_NCB
#define basename_CAVM_PEMX_FLR_STOPREQ_CTL(a) "PEMX_FLR_STOPREQ_CTL"
#define device_bar_CAVM_PEMX_FLR_STOPREQ_CTL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_FLR_STOPREQ_CTL(a) (a)
#define arguments_CAVM_PEMX_FLR_STOPREQ_CTL(a) (a),-1,-1,-1

/**
 * Register (NCB) pem#_flr_vf_stopreq
 *
 * PEM VF Stop Request Register
 * VFI 0-63 virtual function level reset stop outbound requests register.
 * Hardware automatically sets the STOPREQ bit for the VF when it enters a
 * function level reset (FLR).  Software is responsible for clearing the STOPREQ
 * bit but must not do so prior to hardware taking down the FLR, which could be
 * as long as 100 ms.  It may be appropriate for software to wait longer before clearing
 * STOPREQ, software may need to drain deep DPI queues for example.
 *
 * Whenever PEM receives a request mastered by {ProductLine} over NCBO/EBUS (i.e. P or NP),
 * when STOPREQ is set for the function, PEM will discard the outgoing request
 * before sending it to the PCIe core.  If a NP, PEM will schedule an immediate
 * cpl w/error for the request - no timeout is required.
 * In both cases, the PEM()_DBG_INFO[IN_FLR] bit will be set.
 *
 * The index into this array is referred to as a "VFI" and will need to be calculated
 * by software based on the number of VFs assigned to each PF.  {PF0,VF0} is VFI0 and
 * for this VF, bit [0] would be used.  {PF1,VF0} is PCIEEP_SRIOV_VFS[IVF] for PF0.
 * In general, {PFx,VFy} is determined by SUM(PF0..PF(x-1))(PCIEEP_SRIOV_VFS[IVF]) + y.
 *
 * STOPREQ mimics the behavior of PCIEEPVF_CMD[ME] for outbound requests that will
 * master the PCIe bus (P and NP).
 *
 * Note that STOPREQ will have no effect on completions returned by {ProductLine} over the NCBO/EBUS.
 *
 * Note that STOPREQ will have no effect on NCBI or incoming EBUS traffic.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on MAC reset.
 */
union cavm_pemx_flr_vf_stopreq
{
    uint64_t u;
    struct cavm_pemx_flr_vf_stopreq_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t vf_stopreq            : 64; /**< [ 63:  0](R/W1C/H) STOPREQ for the pool of 64 VFs in shared by the 8 PFs.
                                                                 Each bit corresponds to one of the NVF virtual functions. */
#else /* Word 0 - Little Endian */
        uint64_t vf_stopreq            : 64; /**< [ 63:  0](R/W1C/H) STOPREQ for the pool of 64 VFs in shared by the 8 PFs.
                                                                 Each bit corresponds to one of the NVF virtual functions. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_flr_vf_stopreq_s cn; */
};
typedef union cavm_pemx_flr_vf_stopreq cavm_pemx_flr_vf_stopreq_t;

static inline uint64_t CAVM_PEMX_FLR_VF_STOPREQ(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_FLR_VF_STOPREQ(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8e0000000e00ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x8e0000000e00ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8e0000000e00ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8e0000000e00ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("PEMX_FLR_VF_STOPREQ", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_FLR_VF_STOPREQ(a) cavm_pemx_flr_vf_stopreq_t
#define bustype_CAVM_PEMX_FLR_VF_STOPREQ(a) CSR_TYPE_NCB
#define basename_CAVM_PEMX_FLR_VF_STOPREQ(a) "PEMX_FLR_VF_STOPREQ"
#define device_bar_CAVM_PEMX_FLR_VF_STOPREQ(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_FLR_VF_STOPREQ(a) (a)
#define arguments_CAVM_PEMX_FLR_VF_STOPREQ(a) (a),-1,-1,-1

/**
 * Register (NCB) pem#_ib_latency_pc#
 *
 * PEM Inbound Latency Time Registers
 * This register resets on core domain reset.  It measures the time portion
 * of the information set needed by software to calculate average inbound
 * read latency to the target bus.
 * Index {a} represents the internal target bus and is enumerated by PEM_PERF_BUS_E.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union cavm_pemx_ib_latency_pcx
{
    uint64_t u;
    struct cavm_pemx_ib_latency_pcx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t latency               : 64; /**< [ 63:  0](R/W/H) Number of inbound read requests currently in flight directed to the target bus and
                                                                 measured within PEMM from receipt of the read to first completion sent back to PEMC
                                                                 incremented every 10ns.  The intended purpose of this register is to allow latency
                                                                 measurement of the internal memory subsystem.  So the inherent variable divergence
                                                                 from PCIe measured latency due to only measuring at PEMM boundaries is considered
                                                                 acceptable.  This register cannot measure any queuing time of an inbound read held
                                                                 within PEMC prior to being transferred to PEMM. */
#else /* Word 0 - Little Endian */
        uint64_t latency               : 64; /**< [ 63:  0](R/W/H) Number of inbound read requests currently in flight directed to the target bus and
                                                                 measured within PEMM from receipt of the read to first completion sent back to PEMC
                                                                 incremented every 10ns.  The intended purpose of this register is to allow latency
                                                                 measurement of the internal memory subsystem.  So the inherent variable divergence
                                                                 from PCIe measured latency due to only measuring at PEMM boundaries is considered
                                                                 acceptable.  This register cannot measure any queuing time of an inbound read held
                                                                 within PEMC prior to being transferred to PEMM. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_ib_latency_pcx_s cn; */
};
typedef union cavm_pemx_ib_latency_pcx cavm_pemx_ib_latency_pcx_t;

static inline uint64_t CAVM_PEMX_IB_LATENCY_PCX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_IB_LATENCY_PCX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=5) && (b<=1)))
        return 0x8e0000005100ll + 0x1000000000ll * ((a) & 0x7) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("PEMX_IB_LATENCY_PCX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_IB_LATENCY_PCX(a,b) cavm_pemx_ib_latency_pcx_t
#define bustype_CAVM_PEMX_IB_LATENCY_PCX(a,b) CSR_TYPE_NCB
#define basename_CAVM_PEMX_IB_LATENCY_PCX(a,b) "PEMX_IB_LATENCY_PCX"
#define device_bar_CAVM_PEMX_IB_LATENCY_PCX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_IB_LATENCY_PCX(a,b) (a)
#define arguments_CAVM_PEMX_IB_LATENCY_PCX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) pem#_ib_reads_pc#
 *
 * PEM Inbound Read Count Registers
 * This register resets on core domain reset.  It measures the count portion
 * of the information set needed by software to calculate average inbound
 * read latency to the target bus.
 * Index {a} represents the internal target bus and is enumerated by PEM_PERF_BUS_E.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union cavm_pemx_ib_reads_pcx
{
    uint64_t u;
    struct cavm_pemx_ib_reads_pcx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reads                 : 64; /**< [ 63:  0](R/W/H) Number of inbound read requests.  Software can calculate the average inbound
                                                                 read latency with the following calculation:
                                                                   * Average latency = (PEM()_IB_LATENCY_PC[LATENCY] / PEM()_IB_READS_PC[READS]) * 10 ns */
#else /* Word 0 - Little Endian */
        uint64_t reads                 : 64; /**< [ 63:  0](R/W/H) Number of inbound read requests.  Software can calculate the average inbound
                                                                 read latency with the following calculation:
                                                                   * Average latency = (PEM()_IB_LATENCY_PC[LATENCY] / PEM()_IB_READS_PC[READS]) * 10 ns */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_ib_reads_pcx_s cn; */
};
typedef union cavm_pemx_ib_reads_pcx cavm_pemx_ib_reads_pcx_t;

static inline uint64_t CAVM_PEMX_IB_READS_PCX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_IB_READS_PCX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=5) && (b<=1)))
        return 0x8e0000005120ll + 0x1000000000ll * ((a) & 0x7) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("PEMX_IB_READS_PCX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_IB_READS_PCX(a,b) cavm_pemx_ib_reads_pcx_t
#define bustype_CAVM_PEMX_IB_READS_PCX(a,b) CSR_TYPE_NCB
#define basename_CAVM_PEMX_IB_READS_PCX(a,b) "PEMX_IB_READS_PCX"
#define device_bar_CAVM_PEMX_IB_READS_PCX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_IB_READS_PCX(a,b) (a)
#define arguments_CAVM_PEMX_IB_READS_PCX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) pem#_ib_req_no_ro_pc#
 *
 * PEM Inbound No Relaxed Ordering Registers
 * This register resets on core domain reset.  It measures the number of inbound requests
 * (non-posted/posted) directed to the target bus with the RO attribute not set.
 * Index {a} represents the internal target bus and is enumerated by PEM_PERF_BUS_E.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union cavm_pemx_ib_req_no_ro_pcx
{
    uint64_t u;
    struct cavm_pemx_ib_req_no_ro_pcx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Number of inbound requests with RO attribute not set */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Number of inbound requests with RO attribute not set */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_ib_req_no_ro_pcx_s cn; */
};
typedef union cavm_pemx_ib_req_no_ro_pcx cavm_pemx_ib_req_no_ro_pcx_t;

static inline uint64_t CAVM_PEMX_IB_REQ_NO_RO_PCX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_IB_REQ_NO_RO_PCX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=5) && (b<=1)))
        return 0x8e0000005140ll + 0x1000000000ll * ((a) & 0x7) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("PEMX_IB_REQ_NO_RO_PCX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_IB_REQ_NO_RO_PCX(a,b) cavm_pemx_ib_req_no_ro_pcx_t
#define bustype_CAVM_PEMX_IB_REQ_NO_RO_PCX(a,b) CSR_TYPE_NCB
#define basename_CAVM_PEMX_IB_REQ_NO_RO_PCX(a,b) "PEMX_IB_REQ_NO_RO_PCX"
#define device_bar_CAVM_PEMX_IB_REQ_NO_RO_PCX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_IB_REQ_NO_RO_PCX(a,b) (a)
#define arguments_CAVM_PEMX_IB_REQ_NO_RO_PCX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) pem#_ib_tlp#_dwords_pc#
 *
 * PEM Inbound TLP DWORDS Registers
 * This register resets on core domain reset.  Otherwise, it continuously accumulates
 * the number of DWORDS (including header overhead) in every inbound TLP received
 * from PCIe and headed to the target bus.
 * Index {a} represents the TLP type and is enumerated by PEM_PERF_TLP_TYPE_E.
 * Index {b} represents the internal target bus and is enumerated by PEM_PERF_BUS_E.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union cavm_pemx_ib_tlpx_dwords_pcx
{
    uint64_t u;
    struct cavm_pemx_ib_tlpx_dwords_pcx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t tlp_dwords            : 64; /**< [ 63:  0](R/W/H) TLP DWORD Count */
#else /* Word 0 - Little Endian */
        uint64_t tlp_dwords            : 64; /**< [ 63:  0](R/W/H) TLP DWORD Count */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_ib_tlpx_dwords_pcx_s cn; */
};
typedef union cavm_pemx_ib_tlpx_dwords_pcx cavm_pemx_ib_tlpx_dwords_pcx_t;

static inline uint64_t CAVM_PEMX_IB_TLPX_DWORDS_PCX(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_IB_TLPX_DWORDS_PCX(uint64_t a, uint64_t b, uint64_t c)
{
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=5) && (b<=2) && (c<=1)))
        return 0x8e0000005080ll + 0x1000000000ll * ((a) & 0x7) + 0x20ll * ((b) & 0x3) + 8ll * ((c) & 0x1);
    __cavm_csr_fatal("PEMX_IB_TLPX_DWORDS_PCX", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_PEMX_IB_TLPX_DWORDS_PCX(a,b,c) cavm_pemx_ib_tlpx_dwords_pcx_t
#define bustype_CAVM_PEMX_IB_TLPX_DWORDS_PCX(a,b,c) CSR_TYPE_NCB
#define basename_CAVM_PEMX_IB_TLPX_DWORDS_PCX(a,b,c) "PEMX_IB_TLPX_DWORDS_PCX"
#define device_bar_CAVM_PEMX_IB_TLPX_DWORDS_PCX(a,b,c) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_IB_TLPX_DWORDS_PCX(a,b,c) (a)
#define arguments_CAVM_PEMX_IB_TLPX_DWORDS_PCX(a,b,c) (a),(b),(c),-1

/**
 * Register (NCB) pem#_ib_tlp#_pc#
 *
 * PEM Inbound TLP Count Registers
 * This register resets on core domain reset.  Otherwise, it continuously increments
 * on every inbound TLP received from PCIe and headed to the target bus.
 * Index {a} represents the TLP type and is enumerated by PEM_PERF_TLP_TYPE_E.
 * Index {b} represents the internal target bus and is enumerated by PEM_PERF_BUS_E.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union cavm_pemx_ib_tlpx_pcx
{
    uint64_t u;
    struct cavm_pemx_ib_tlpx_pcx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) TLP Count */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) TLP Count */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_ib_tlpx_pcx_s cn; */
};
typedef union cavm_pemx_ib_tlpx_pcx cavm_pemx_ib_tlpx_pcx_t;

static inline uint64_t CAVM_PEMX_IB_TLPX_PCX(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_IB_TLPX_PCX(uint64_t a, uint64_t b, uint64_t c)
{
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=5) && (b<=2) && (c<=1)))
        return 0x8e0000005000ll + 0x1000000000ll * ((a) & 0x7) + 0x20ll * ((b) & 0x3) + 8ll * ((c) & 0x1);
    __cavm_csr_fatal("PEMX_IB_TLPX_PCX", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_PEMX_IB_TLPX_PCX(a,b,c) cavm_pemx_ib_tlpx_pcx_t
#define bustype_CAVM_PEMX_IB_TLPX_PCX(a,b,c) CSR_TYPE_NCB
#define basename_CAVM_PEMX_IB_TLPX_PCX(a,b,c) "PEMX_IB_TLPX_PCX"
#define device_bar_CAVM_PEMX_IB_TLPX_PCX(a,b,c) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_IB_TLPX_PCX(a,b,c) (a)
#define arguments_CAVM_PEMX_IB_TLPX_PCX(a,b,c) (a),(b),(c),-1

/**
 * Register (NCB) pem#_int_ena_w1c
 *
 * PEM Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_pemx_int_ena_w1c
{
    uint64_t u;
    struct cavm_pemx_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_25_63        : 39;
        uint64_t ptm_rq_unexp_rto      : 1;  /**< [ 24: 24](R/W1C/H) Reads or clears enable for PEM(0..5)_INT_SUM[PTM_RQ_UNEXP_RTO]. */
        uint64_t ptm_rq_duprx          : 1;  /**< [ 23: 23](R/W1C/H) Reads or clears enable for PEM(0..5)_INT_SUM[PTM_RQ_DUPRX]. */
        uint64_t ptm_rq_replaytx       : 1;  /**< [ 22: 22](R/W1C/H) Reads or clears enable for PEM(0..5)_INT_SUM[PTM_RQ_REPLAYTX]. */
        uint64_t un_vf_b0              : 1;  /**< [ 21: 21](R/W1C/H) Reads or clears enable for PEM(0..5)_INT_SUM[UN_VF_B0]. */
        uint64_t reserved_19_20        : 2;
        uint64_t up_vf_b0              : 1;  /**< [ 18: 18](R/W1C/H) Reads or clears enable for PEM(0..5)_INT_SUM[UP_VF_B0]. */
        uint64_t reserved_16_17        : 2;
        uint64_t ptm_rdy_val           : 1;  /**< [ 15: 15](R/W1C/H) Reads or clears enable for PEM(0..5)_INT_SUM[PTM_RDY_VAL]. */
        uint64_t un_b0                 : 1;  /**< [ 14: 14](R/W1C/H) Reads or clears enable for PEM(0..5)_INT_SUM[UN_B0]. */
        uint64_t up_b0                 : 1;  /**< [ 13: 13](R/W1C/H) Reads or clears enable for PEM(0..5)_INT_SUM[UP_B0]. */
        uint64_t surp_down             : 1;  /**< [ 12: 12](R/W1C/H) Reads or clears enable for PEM(0..5)_INT_SUM[SURP_DOWN]. */
        uint64_t cfg_inf               : 1;  /**< [ 11: 11](R/W1C/H) Reads or clears enable for PEM(0..5)_INT_SUM[CFG_INF]. */
        uint64_t crs_dr                : 1;  /**< [ 10: 10](R/W1C/H) Reads or clears enable for PEM(0..5)_INT_SUM[CRS_DR]. */
        uint64_t crs_er                : 1;  /**< [  9:  9](R/W1C/H) Reads or clears enable for PEM(0..5)_INT_SUM[CRS_ER]. */
        uint64_t rdlk                  : 1;  /**< [  8:  8](R/W1C/H) Reads or clears enable for PEM(0..5)_INT_SUM[RDLK]. */
        uint64_t un_bx                 : 1;  /**< [  7:  7](R/W1C/H) Reads or clears enable for PEM(0..5)_INT_SUM[UN_BX]. */
        uint64_t un_b2                 : 1;  /**< [  6:  6](R/W1C/H) Reads or clears enable for PEM(0..5)_INT_SUM[UN_B2]. */
        uint64_t un_b4                 : 1;  /**< [  5:  5](R/W1C/H) Reads or clears enable for PEM(0..5)_INT_SUM[UN_B4]. */
        uint64_t up_bx                 : 1;  /**< [  4:  4](R/W1C/H) Reads or clears enable for PEM(0..5)_INT_SUM[UP_BX]. */
        uint64_t up_b2                 : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for PEM(0..5)_INT_SUM[UP_B2]. */
        uint64_t up_b4                 : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for PEM(0..5)_INT_SUM[UP_B4]. */
        uint64_t up_b3                 : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for PEM(0..5)_INT_SUM[UP_B3]. */
        uint64_t se                    : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for PEM(0..5)_INT_SUM[SE]. */
#else /* Word 0 - Little Endian */
        uint64_t se                    : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for PEM(0..5)_INT_SUM[SE]. */
        uint64_t up_b3                 : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for PEM(0..5)_INT_SUM[UP_B3]. */
        uint64_t up_b4                 : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for PEM(0..5)_INT_SUM[UP_B4]. */
        uint64_t up_b2                 : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for PEM(0..5)_INT_SUM[UP_B2]. */
        uint64_t up_bx                 : 1;  /**< [  4:  4](R/W1C/H) Reads or clears enable for PEM(0..5)_INT_SUM[UP_BX]. */
        uint64_t un_b4                 : 1;  /**< [  5:  5](R/W1C/H) Reads or clears enable for PEM(0..5)_INT_SUM[UN_B4]. */
        uint64_t un_b2                 : 1;  /**< [  6:  6](R/W1C/H) Reads or clears enable for PEM(0..5)_INT_SUM[UN_B2]. */
        uint64_t un_bx                 : 1;  /**< [  7:  7](R/W1C/H) Reads or clears enable for PEM(0..5)_INT_SUM[UN_BX]. */
        uint64_t rdlk                  : 1;  /**< [  8:  8](R/W1C/H) Reads or clears enable for PEM(0..5)_INT_SUM[RDLK]. */
        uint64_t crs_er                : 1;  /**< [  9:  9](R/W1C/H) Reads or clears enable for PEM(0..5)_INT_SUM[CRS_ER]. */
        uint64_t crs_dr                : 1;  /**< [ 10: 10](R/W1C/H) Reads or clears enable for PEM(0..5)_INT_SUM[CRS_DR]. */
        uint64_t cfg_inf               : 1;  /**< [ 11: 11](R/W1C/H) Reads or clears enable for PEM(0..5)_INT_SUM[CFG_INF]. */
        uint64_t surp_down             : 1;  /**< [ 12: 12](R/W1C/H) Reads or clears enable for PEM(0..5)_INT_SUM[SURP_DOWN]. */
        uint64_t up_b0                 : 1;  /**< [ 13: 13](R/W1C/H) Reads or clears enable for PEM(0..5)_INT_SUM[UP_B0]. */
        uint64_t un_b0                 : 1;  /**< [ 14: 14](R/W1C/H) Reads or clears enable for PEM(0..5)_INT_SUM[UN_B0]. */
        uint64_t ptm_rdy_val           : 1;  /**< [ 15: 15](R/W1C/H) Reads or clears enable for PEM(0..5)_INT_SUM[PTM_RDY_VAL]. */
        uint64_t reserved_16_17        : 2;
        uint64_t up_vf_b0              : 1;  /**< [ 18: 18](R/W1C/H) Reads or clears enable for PEM(0..5)_INT_SUM[UP_VF_B0]. */
        uint64_t reserved_19_20        : 2;
        uint64_t un_vf_b0              : 1;  /**< [ 21: 21](R/W1C/H) Reads or clears enable for PEM(0..5)_INT_SUM[UN_VF_B0]. */
        uint64_t ptm_rq_replaytx       : 1;  /**< [ 22: 22](R/W1C/H) Reads or clears enable for PEM(0..5)_INT_SUM[PTM_RQ_REPLAYTX]. */
        uint64_t ptm_rq_duprx          : 1;  /**< [ 23: 23](R/W1C/H) Reads or clears enable for PEM(0..5)_INT_SUM[PTM_RQ_DUPRX]. */
        uint64_t ptm_rq_unexp_rto      : 1;  /**< [ 24: 24](R/W1C/H) Reads or clears enable for PEM(0..5)_INT_SUM[PTM_RQ_UNEXP_RTO]. */
        uint64_t reserved_25_63        : 39;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_int_ena_w1c_s cn10; */
    /* struct cavm_pemx_int_ena_w1c_s cn10ka; */
    /* struct cavm_pemx_int_ena_w1c_s cn10kb; */
    struct cavm_pemx_int_ena_w1c_cnf10ka
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_25_63        : 39;
        uint64_t ptm_rq_unexp_rto      : 1;  /**< [ 24: 24](R/W1C/H) Reads or clears enable for PEM(0..1)_INT_SUM[PTM_RQ_UNEXP_RTO]. */
        uint64_t ptm_rq_duprx          : 1;  /**< [ 23: 23](R/W1C/H) Reads or clears enable for PEM(0..1)_INT_SUM[PTM_RQ_DUPRX]. */
        uint64_t ptm_rq_replaytx       : 1;  /**< [ 22: 22](R/W1C/H) Reads or clears enable for PEM(0..1)_INT_SUM[PTM_RQ_REPLAYTX]. */
        uint64_t un_vf_b0              : 1;  /**< [ 21: 21](R/W1C/H) Reads or clears enable for PEM(0..1)_INT_SUM[UN_VF_B0]. */
        uint64_t reserved_19_20        : 2;
        uint64_t up_vf_b0              : 1;  /**< [ 18: 18](R/W1C/H) Reads or clears enable for PEM(0..1)_INT_SUM[UP_VF_B0]. */
        uint64_t reserved_16_17        : 2;
        uint64_t ptm_rdy_val           : 1;  /**< [ 15: 15](R/W1C/H) Reads or clears enable for PEM(0..1)_INT_SUM[PTM_RDY_VAL]. */
        uint64_t un_b0                 : 1;  /**< [ 14: 14](R/W1C/H) Reads or clears enable for PEM(0..1)_INT_SUM[UN_B0]. */
        uint64_t up_b0                 : 1;  /**< [ 13: 13](R/W1C/H) Reads or clears enable for PEM(0..1)_INT_SUM[UP_B0]. */
        uint64_t surp_down             : 1;  /**< [ 12: 12](R/W1C/H) Reads or clears enable for PEM(0..1)_INT_SUM[SURP_DOWN]. */
        uint64_t cfg_inf               : 1;  /**< [ 11: 11](R/W1C/H) Reads or clears enable for PEM(0..1)_INT_SUM[CFG_INF]. */
        uint64_t crs_dr                : 1;  /**< [ 10: 10](R/W1C/H) Reads or clears enable for PEM(0..1)_INT_SUM[CRS_DR]. */
        uint64_t crs_er                : 1;  /**< [  9:  9](R/W1C/H) Reads or clears enable for PEM(0..1)_INT_SUM[CRS_ER]. */
        uint64_t rdlk                  : 1;  /**< [  8:  8](R/W1C/H) Reads or clears enable for PEM(0..1)_INT_SUM[RDLK]. */
        uint64_t un_bx                 : 1;  /**< [  7:  7](R/W1C/H) Reads or clears enable for PEM(0..1)_INT_SUM[UN_BX]. */
        uint64_t un_b2                 : 1;  /**< [  6:  6](R/W1C/H) Reads or clears enable for PEM(0..1)_INT_SUM[UN_B2]. */
        uint64_t un_b4                 : 1;  /**< [  5:  5](R/W1C/H) Reads or clears enable for PEM(0..1)_INT_SUM[UN_B4]. */
        uint64_t up_bx                 : 1;  /**< [  4:  4](R/W1C/H) Reads or clears enable for PEM(0..1)_INT_SUM[UP_BX]. */
        uint64_t up_b2                 : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for PEM(0..1)_INT_SUM[UP_B2]. */
        uint64_t up_b4                 : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for PEM(0..1)_INT_SUM[UP_B4]. */
        uint64_t up_b3                 : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for PEM(0..1)_INT_SUM[UP_B3]. */
        uint64_t se                    : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for PEM(0..1)_INT_SUM[SE]. */
#else /* Word 0 - Little Endian */
        uint64_t se                    : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for PEM(0..1)_INT_SUM[SE]. */
        uint64_t up_b3                 : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for PEM(0..1)_INT_SUM[UP_B3]. */
        uint64_t up_b4                 : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for PEM(0..1)_INT_SUM[UP_B4]. */
        uint64_t up_b2                 : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for PEM(0..1)_INT_SUM[UP_B2]. */
        uint64_t up_bx                 : 1;  /**< [  4:  4](R/W1C/H) Reads or clears enable for PEM(0..1)_INT_SUM[UP_BX]. */
        uint64_t un_b4                 : 1;  /**< [  5:  5](R/W1C/H) Reads or clears enable for PEM(0..1)_INT_SUM[UN_B4]. */
        uint64_t un_b2                 : 1;  /**< [  6:  6](R/W1C/H) Reads or clears enable for PEM(0..1)_INT_SUM[UN_B2]. */
        uint64_t un_bx                 : 1;  /**< [  7:  7](R/W1C/H) Reads or clears enable for PEM(0..1)_INT_SUM[UN_BX]. */
        uint64_t rdlk                  : 1;  /**< [  8:  8](R/W1C/H) Reads or clears enable for PEM(0..1)_INT_SUM[RDLK]. */
        uint64_t crs_er                : 1;  /**< [  9:  9](R/W1C/H) Reads or clears enable for PEM(0..1)_INT_SUM[CRS_ER]. */
        uint64_t crs_dr                : 1;  /**< [ 10: 10](R/W1C/H) Reads or clears enable for PEM(0..1)_INT_SUM[CRS_DR]. */
        uint64_t cfg_inf               : 1;  /**< [ 11: 11](R/W1C/H) Reads or clears enable for PEM(0..1)_INT_SUM[CFG_INF]. */
        uint64_t surp_down             : 1;  /**< [ 12: 12](R/W1C/H) Reads or clears enable for PEM(0..1)_INT_SUM[SURP_DOWN]. */
        uint64_t up_b0                 : 1;  /**< [ 13: 13](R/W1C/H) Reads or clears enable for PEM(0..1)_INT_SUM[UP_B0]. */
        uint64_t un_b0                 : 1;  /**< [ 14: 14](R/W1C/H) Reads or clears enable for PEM(0..1)_INT_SUM[UN_B0]. */
        uint64_t ptm_rdy_val           : 1;  /**< [ 15: 15](R/W1C/H) Reads or clears enable for PEM(0..1)_INT_SUM[PTM_RDY_VAL]. */
        uint64_t reserved_16_17        : 2;
        uint64_t up_vf_b0              : 1;  /**< [ 18: 18](R/W1C/H) Reads or clears enable for PEM(0..1)_INT_SUM[UP_VF_B0]. */
        uint64_t reserved_19_20        : 2;
        uint64_t un_vf_b0              : 1;  /**< [ 21: 21](R/W1C/H) Reads or clears enable for PEM(0..1)_INT_SUM[UN_VF_B0]. */
        uint64_t ptm_rq_replaytx       : 1;  /**< [ 22: 22](R/W1C/H) Reads or clears enable for PEM(0..1)_INT_SUM[PTM_RQ_REPLAYTX]. */
        uint64_t ptm_rq_duprx          : 1;  /**< [ 23: 23](R/W1C/H) Reads or clears enable for PEM(0..1)_INT_SUM[PTM_RQ_DUPRX]. */
        uint64_t ptm_rq_unexp_rto      : 1;  /**< [ 24: 24](R/W1C/H) Reads or clears enable for PEM(0..1)_INT_SUM[PTM_RQ_UNEXP_RTO]. */
        uint64_t reserved_25_63        : 39;
#endif /* Word 0 - End */
    } cnf10ka;
    /* struct cavm_pemx_int_ena_w1c_cnf10ka cnf10kb; */
};
typedef union cavm_pemx_int_ena_w1c cavm_pemx_int_ena_w1c_t;

static inline uint64_t CAVM_PEMX_INT_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_INT_ENA_W1C(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8e00000000f8ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x8e00000000f8ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8e00000000f8ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8e00000000f8ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("PEMX_INT_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_INT_ENA_W1C(a) cavm_pemx_int_ena_w1c_t
#define bustype_CAVM_PEMX_INT_ENA_W1C(a) CSR_TYPE_NCB
#define basename_CAVM_PEMX_INT_ENA_W1C(a) "PEMX_INT_ENA_W1C"
#define device_bar_CAVM_PEMX_INT_ENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_INT_ENA_W1C(a) (a)
#define arguments_CAVM_PEMX_INT_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (NCB) pem#_int_ena_w1s
 *
 * PEM Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_pemx_int_ena_w1s
{
    uint64_t u;
    struct cavm_pemx_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_25_63        : 39;
        uint64_t ptm_rq_unexp_rto      : 1;  /**< [ 24: 24](R/W1S/H) Reads or sets enable for PEM(0..5)_INT_SUM[PTM_RQ_UNEXP_RTO]. */
        uint64_t ptm_rq_duprx          : 1;  /**< [ 23: 23](R/W1S/H) Reads or sets enable for PEM(0..5)_INT_SUM[PTM_RQ_DUPRX]. */
        uint64_t ptm_rq_replaytx       : 1;  /**< [ 22: 22](R/W1S/H) Reads or sets enable for PEM(0..5)_INT_SUM[PTM_RQ_REPLAYTX]. */
        uint64_t un_vf_b0              : 1;  /**< [ 21: 21](R/W1S/H) Reads or sets enable for PEM(0..5)_INT_SUM[UN_VF_B0]. */
        uint64_t reserved_19_20        : 2;
        uint64_t up_vf_b0              : 1;  /**< [ 18: 18](R/W1S/H) Reads or sets enable for PEM(0..5)_INT_SUM[UP_VF_B0]. */
        uint64_t reserved_16_17        : 2;
        uint64_t ptm_rdy_val           : 1;  /**< [ 15: 15](R/W1S/H) Reads or sets enable for PEM(0..5)_INT_SUM[PTM_RDY_VAL]. */
        uint64_t un_b0                 : 1;  /**< [ 14: 14](R/W1S/H) Reads or sets enable for PEM(0..5)_INT_SUM[UN_B0]. */
        uint64_t up_b0                 : 1;  /**< [ 13: 13](R/W1S/H) Reads or sets enable for PEM(0..5)_INT_SUM[UP_B0]. */
        uint64_t surp_down             : 1;  /**< [ 12: 12](R/W1S/H) Reads or sets enable for PEM(0..5)_INT_SUM[SURP_DOWN]. */
        uint64_t cfg_inf               : 1;  /**< [ 11: 11](R/W1S/H) Reads or sets enable for PEM(0..5)_INT_SUM[CFG_INF]. */
        uint64_t crs_dr                : 1;  /**< [ 10: 10](R/W1S/H) Reads or sets enable for PEM(0..5)_INT_SUM[CRS_DR]. */
        uint64_t crs_er                : 1;  /**< [  9:  9](R/W1S/H) Reads or sets enable for PEM(0..5)_INT_SUM[CRS_ER]. */
        uint64_t rdlk                  : 1;  /**< [  8:  8](R/W1S/H) Reads or sets enable for PEM(0..5)_INT_SUM[RDLK]. */
        uint64_t un_bx                 : 1;  /**< [  7:  7](R/W1S/H) Reads or sets enable for PEM(0..5)_INT_SUM[UN_BX]. */
        uint64_t un_b2                 : 1;  /**< [  6:  6](R/W1S/H) Reads or sets enable for PEM(0..5)_INT_SUM[UN_B2]. */
        uint64_t un_b4                 : 1;  /**< [  5:  5](R/W1S/H) Reads or sets enable for PEM(0..5)_INT_SUM[UN_B4]. */
        uint64_t up_bx                 : 1;  /**< [  4:  4](R/W1S/H) Reads or sets enable for PEM(0..5)_INT_SUM[UP_BX]. */
        uint64_t up_b2                 : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for PEM(0..5)_INT_SUM[UP_B2]. */
        uint64_t up_b4                 : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for PEM(0..5)_INT_SUM[UP_B4]. */
        uint64_t up_b3                 : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for PEM(0..5)_INT_SUM[UP_B3]. */
        uint64_t se                    : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for PEM(0..5)_INT_SUM[SE]. */
#else /* Word 0 - Little Endian */
        uint64_t se                    : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for PEM(0..5)_INT_SUM[SE]. */
        uint64_t up_b3                 : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for PEM(0..5)_INT_SUM[UP_B3]. */
        uint64_t up_b4                 : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for PEM(0..5)_INT_SUM[UP_B4]. */
        uint64_t up_b2                 : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for PEM(0..5)_INT_SUM[UP_B2]. */
        uint64_t up_bx                 : 1;  /**< [  4:  4](R/W1S/H) Reads or sets enable for PEM(0..5)_INT_SUM[UP_BX]. */
        uint64_t un_b4                 : 1;  /**< [  5:  5](R/W1S/H) Reads or sets enable for PEM(0..5)_INT_SUM[UN_B4]. */
        uint64_t un_b2                 : 1;  /**< [  6:  6](R/W1S/H) Reads or sets enable for PEM(0..5)_INT_SUM[UN_B2]. */
        uint64_t un_bx                 : 1;  /**< [  7:  7](R/W1S/H) Reads or sets enable for PEM(0..5)_INT_SUM[UN_BX]. */
        uint64_t rdlk                  : 1;  /**< [  8:  8](R/W1S/H) Reads or sets enable for PEM(0..5)_INT_SUM[RDLK]. */
        uint64_t crs_er                : 1;  /**< [  9:  9](R/W1S/H) Reads or sets enable for PEM(0..5)_INT_SUM[CRS_ER]. */
        uint64_t crs_dr                : 1;  /**< [ 10: 10](R/W1S/H) Reads or sets enable for PEM(0..5)_INT_SUM[CRS_DR]. */
        uint64_t cfg_inf               : 1;  /**< [ 11: 11](R/W1S/H) Reads or sets enable for PEM(0..5)_INT_SUM[CFG_INF]. */
        uint64_t surp_down             : 1;  /**< [ 12: 12](R/W1S/H) Reads or sets enable for PEM(0..5)_INT_SUM[SURP_DOWN]. */
        uint64_t up_b0                 : 1;  /**< [ 13: 13](R/W1S/H) Reads or sets enable for PEM(0..5)_INT_SUM[UP_B0]. */
        uint64_t un_b0                 : 1;  /**< [ 14: 14](R/W1S/H) Reads or sets enable for PEM(0..5)_INT_SUM[UN_B0]. */
        uint64_t ptm_rdy_val           : 1;  /**< [ 15: 15](R/W1S/H) Reads or sets enable for PEM(0..5)_INT_SUM[PTM_RDY_VAL]. */
        uint64_t reserved_16_17        : 2;
        uint64_t up_vf_b0              : 1;  /**< [ 18: 18](R/W1S/H) Reads or sets enable for PEM(0..5)_INT_SUM[UP_VF_B0]. */
        uint64_t reserved_19_20        : 2;
        uint64_t un_vf_b0              : 1;  /**< [ 21: 21](R/W1S/H) Reads or sets enable for PEM(0..5)_INT_SUM[UN_VF_B0]. */
        uint64_t ptm_rq_replaytx       : 1;  /**< [ 22: 22](R/W1S/H) Reads or sets enable for PEM(0..5)_INT_SUM[PTM_RQ_REPLAYTX]. */
        uint64_t ptm_rq_duprx          : 1;  /**< [ 23: 23](R/W1S/H) Reads or sets enable for PEM(0..5)_INT_SUM[PTM_RQ_DUPRX]. */
        uint64_t ptm_rq_unexp_rto      : 1;  /**< [ 24: 24](R/W1S/H) Reads or sets enable for PEM(0..5)_INT_SUM[PTM_RQ_UNEXP_RTO]. */
        uint64_t reserved_25_63        : 39;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_int_ena_w1s_s cn10; */
    /* struct cavm_pemx_int_ena_w1s_s cn10ka; */
    /* struct cavm_pemx_int_ena_w1s_s cn10kb; */
    struct cavm_pemx_int_ena_w1s_cnf10ka
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_25_63        : 39;
        uint64_t ptm_rq_unexp_rto      : 1;  /**< [ 24: 24](R/W1S/H) Reads or sets enable for PEM(0..1)_INT_SUM[PTM_RQ_UNEXP_RTO]. */
        uint64_t ptm_rq_duprx          : 1;  /**< [ 23: 23](R/W1S/H) Reads or sets enable for PEM(0..1)_INT_SUM[PTM_RQ_DUPRX]. */
        uint64_t ptm_rq_replaytx       : 1;  /**< [ 22: 22](R/W1S/H) Reads or sets enable for PEM(0..1)_INT_SUM[PTM_RQ_REPLAYTX]. */
        uint64_t un_vf_b0              : 1;  /**< [ 21: 21](R/W1S/H) Reads or sets enable for PEM(0..1)_INT_SUM[UN_VF_B0]. */
        uint64_t reserved_19_20        : 2;
        uint64_t up_vf_b0              : 1;  /**< [ 18: 18](R/W1S/H) Reads or sets enable for PEM(0..1)_INT_SUM[UP_VF_B0]. */
        uint64_t reserved_16_17        : 2;
        uint64_t ptm_rdy_val           : 1;  /**< [ 15: 15](R/W1S/H) Reads or sets enable for PEM(0..1)_INT_SUM[PTM_RDY_VAL]. */
        uint64_t un_b0                 : 1;  /**< [ 14: 14](R/W1S/H) Reads or sets enable for PEM(0..1)_INT_SUM[UN_B0]. */
        uint64_t up_b0                 : 1;  /**< [ 13: 13](R/W1S/H) Reads or sets enable for PEM(0..1)_INT_SUM[UP_B0]. */
        uint64_t surp_down             : 1;  /**< [ 12: 12](R/W1S/H) Reads or sets enable for PEM(0..1)_INT_SUM[SURP_DOWN]. */
        uint64_t cfg_inf               : 1;  /**< [ 11: 11](R/W1S/H) Reads or sets enable for PEM(0..1)_INT_SUM[CFG_INF]. */
        uint64_t crs_dr                : 1;  /**< [ 10: 10](R/W1S/H) Reads or sets enable for PEM(0..1)_INT_SUM[CRS_DR]. */
        uint64_t crs_er                : 1;  /**< [  9:  9](R/W1S/H) Reads or sets enable for PEM(0..1)_INT_SUM[CRS_ER]. */
        uint64_t rdlk                  : 1;  /**< [  8:  8](R/W1S/H) Reads or sets enable for PEM(0..1)_INT_SUM[RDLK]. */
        uint64_t un_bx                 : 1;  /**< [  7:  7](R/W1S/H) Reads or sets enable for PEM(0..1)_INT_SUM[UN_BX]. */
        uint64_t un_b2                 : 1;  /**< [  6:  6](R/W1S/H) Reads or sets enable for PEM(0..1)_INT_SUM[UN_B2]. */
        uint64_t un_b4                 : 1;  /**< [  5:  5](R/W1S/H) Reads or sets enable for PEM(0..1)_INT_SUM[UN_B4]. */
        uint64_t up_bx                 : 1;  /**< [  4:  4](R/W1S/H) Reads or sets enable for PEM(0..1)_INT_SUM[UP_BX]. */
        uint64_t up_b2                 : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for PEM(0..1)_INT_SUM[UP_B2]. */
        uint64_t up_b4                 : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for PEM(0..1)_INT_SUM[UP_B4]. */
        uint64_t up_b3                 : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for PEM(0..1)_INT_SUM[UP_B3]. */
        uint64_t se                    : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for PEM(0..1)_INT_SUM[SE]. */
#else /* Word 0 - Little Endian */
        uint64_t se                    : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for PEM(0..1)_INT_SUM[SE]. */
        uint64_t up_b3                 : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for PEM(0..1)_INT_SUM[UP_B3]. */
        uint64_t up_b4                 : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for PEM(0..1)_INT_SUM[UP_B4]. */
        uint64_t up_b2                 : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for PEM(0..1)_INT_SUM[UP_B2]. */
        uint64_t up_bx                 : 1;  /**< [  4:  4](R/W1S/H) Reads or sets enable for PEM(0..1)_INT_SUM[UP_BX]. */
        uint64_t un_b4                 : 1;  /**< [  5:  5](R/W1S/H) Reads or sets enable for PEM(0..1)_INT_SUM[UN_B4]. */
        uint64_t un_b2                 : 1;  /**< [  6:  6](R/W1S/H) Reads or sets enable for PEM(0..1)_INT_SUM[UN_B2]. */
        uint64_t un_bx                 : 1;  /**< [  7:  7](R/W1S/H) Reads or sets enable for PEM(0..1)_INT_SUM[UN_BX]. */
        uint64_t rdlk                  : 1;  /**< [  8:  8](R/W1S/H) Reads or sets enable for PEM(0..1)_INT_SUM[RDLK]. */
        uint64_t crs_er                : 1;  /**< [  9:  9](R/W1S/H) Reads or sets enable for PEM(0..1)_INT_SUM[CRS_ER]. */
        uint64_t crs_dr                : 1;  /**< [ 10: 10](R/W1S/H) Reads or sets enable for PEM(0..1)_INT_SUM[CRS_DR]. */
        uint64_t cfg_inf               : 1;  /**< [ 11: 11](R/W1S/H) Reads or sets enable for PEM(0..1)_INT_SUM[CFG_INF]. */
        uint64_t surp_down             : 1;  /**< [ 12: 12](R/W1S/H) Reads or sets enable for PEM(0..1)_INT_SUM[SURP_DOWN]. */
        uint64_t up_b0                 : 1;  /**< [ 13: 13](R/W1S/H) Reads or sets enable for PEM(0..1)_INT_SUM[UP_B0]. */
        uint64_t un_b0                 : 1;  /**< [ 14: 14](R/W1S/H) Reads or sets enable for PEM(0..1)_INT_SUM[UN_B0]. */
        uint64_t ptm_rdy_val           : 1;  /**< [ 15: 15](R/W1S/H) Reads or sets enable for PEM(0..1)_INT_SUM[PTM_RDY_VAL]. */
        uint64_t reserved_16_17        : 2;
        uint64_t up_vf_b0              : 1;  /**< [ 18: 18](R/W1S/H) Reads or sets enable for PEM(0..1)_INT_SUM[UP_VF_B0]. */
        uint64_t reserved_19_20        : 2;
        uint64_t un_vf_b0              : 1;  /**< [ 21: 21](R/W1S/H) Reads or sets enable for PEM(0..1)_INT_SUM[UN_VF_B0]. */
        uint64_t ptm_rq_replaytx       : 1;  /**< [ 22: 22](R/W1S/H) Reads or sets enable for PEM(0..1)_INT_SUM[PTM_RQ_REPLAYTX]. */
        uint64_t ptm_rq_duprx          : 1;  /**< [ 23: 23](R/W1S/H) Reads or sets enable for PEM(0..1)_INT_SUM[PTM_RQ_DUPRX]. */
        uint64_t ptm_rq_unexp_rto      : 1;  /**< [ 24: 24](R/W1S/H) Reads or sets enable for PEM(0..1)_INT_SUM[PTM_RQ_UNEXP_RTO]. */
        uint64_t reserved_25_63        : 39;
#endif /* Word 0 - End */
    } cnf10ka;
    /* struct cavm_pemx_int_ena_w1s_cnf10ka cnf10kb; */
};
typedef union cavm_pemx_int_ena_w1s cavm_pemx_int_ena_w1s_t;

static inline uint64_t CAVM_PEMX_INT_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_INT_ENA_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8e0000000100ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x8e0000000100ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8e0000000100ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8e0000000100ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("PEMX_INT_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_INT_ENA_W1S(a) cavm_pemx_int_ena_w1s_t
#define bustype_CAVM_PEMX_INT_ENA_W1S(a) CSR_TYPE_NCB
#define basename_CAVM_PEMX_INT_ENA_W1S(a) "PEMX_INT_ENA_W1S"
#define device_bar_CAVM_PEMX_INT_ENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_INT_ENA_W1S(a) (a)
#define arguments_CAVM_PEMX_INT_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) pem#_int_sum
 *
 * PEM Interrupt Summary Register
 * This register contains the different interrupt summary bits of the PEM.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 */
union cavm_pemx_int_sum
{
    uint64_t u;
    struct cavm_pemx_int_sum_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_25_63        : 39;
        uint64_t ptm_rq_unexp_rto      : 1;  /**< [ 24: 24](R/W1C/H) PTM Requester Unexpected Response Timeout.  Indicates 100us timeout
                                                                 occurred while waiting for a PTM Response/ResponseD message while a
                                                                 PTM update is in progress. */
        uint64_t ptm_rq_duprx          : 1;  /**< [ 23: 23](R/W1C/H) PTM Requester Duplicate Received.  Indicates PTM Requester
                                                                 received a duplicate TLP while either:
                                                                 - PTM Requester is in the process or updating local clock.
                                                                 - Following calculation of the update, when the PTM context is valid. */
        uint64_t ptm_rq_replaytx       : 1;  /**< [ 22: 22](R/W1C/H) PTM Requester Replay Sent.  PTM Requester detected a TLP replay
                                                                 being sent when ResponseD messages are in use while either:
                                                                 - PTM Requester is in the process or updating local clock.
                                                                 - Following calculation of the update, when the PTM context is valid. */
        uint64_t un_vf_b0              : 1;  /**< [ 21: 21](R/W1C/H) Received N-TLP for VF BAR0 when VF BAR0 is disabled. */
        uint64_t reserved_19_20        : 2;
        uint64_t up_vf_b0              : 1;  /**< [ 18: 18](R/W1C/H) Received P-TLP for  VF BAR0 when VF BAR0 is disabled. */
        uint64_t reserved_16_17        : 2;
        uint64_t ptm_rdy_val           : 1;  /**< [ 15: 15](R/W1C/H) PTM Root is ready to have to context validated.
                                                                 When PEM()_PTM_CTL[PTM_AUTO_LOAD] is not set, the Mac PTM logic does
                                                                 not have a permanently valid context.  Currently the core invalidates
                                                                 the responder context on two conditions
                                                                 * aux_clk is active
                                                                 * Link speed changes

                                                                 To clear this interrupt, The host programs PCIERC_PTM_RES_LOCAL_MSB and
                                                                 PCIERC_PTM_RES_LOCAL_LSB and then sets the context valid bit
                                                                 (PCIERC_PTM_RES_CTL[PRES_CTX_VLD]). */
        uint64_t un_b0                 : 1;  /**< [ 14: 14](R/W1C/H) Received N-TLP for BAR0 when BAR0 is disabled. */
        uint64_t up_b0                 : 1;  /**< [ 13: 13](R/W1C/H) Received P-TLP for BAR0 when BAR0 is disabled. */
        uint64_t surp_down             : 1;  /**< [ 12: 12](R/W1C/H) Indicates that a surprise down event is occurring in the controller. */
        uint64_t cfg_inf               : 1;  /**< [ 11: 11](R/W1C/H) AP cores sent a second config read while a current config read was within the timeout window. */
        uint64_t crs_dr                : 1;  /**< [ 10: 10](R/W1C/H) Received CRS when retries were disabled. */
        uint64_t crs_er                : 1;  /**< [  9:  9](R/W1C/H) Had a CRS timeout event. */
        uint64_t rdlk                  : 1;  /**< [  8:  8](R/W1C/H) Received read lock TLP. */
        uint64_t un_bx                 : 1;  /**< [  7:  7](R/W1C/H) Received N-TLP for unknown BAR. */
        uint64_t un_b2                 : 1;  /**< [  6:  6](R/W1C/H) Received N-TLP for BAR2 when BAR2 is disabled. */
        uint64_t un_b4                 : 1;  /**< [  5:  5](R/W1C/H) Received N-TLP for BAR4 when BAR4 is disabled. */
        uint64_t up_bx                 : 1;  /**< [  4:  4](R/W1C/H) Received P-TLP for an unknown BAR. */
        uint64_t up_b2                 : 1;  /**< [  3:  3](R/W1C/H) Received P-TLP for BAR2 when BAR2 is disabled. */
        uint64_t up_b4                 : 1;  /**< [  2:  2](R/W1C/H) Received P-TLP for BAR4 when BAR4 is disabled. */
        uint64_t up_b3                 : 1;  /**< [  1:  1](R/W1C/H) Received P-TLP for Expansion ROM. */
        uint64_t se                    : 1;  /**< [  0:  0](R/W1C/H) System error, RC mode only. */
#else /* Word 0 - Little Endian */
        uint64_t se                    : 1;  /**< [  0:  0](R/W1C/H) System error, RC mode only. */
        uint64_t up_b3                 : 1;  /**< [  1:  1](R/W1C/H) Received P-TLP for Expansion ROM. */
        uint64_t up_b4                 : 1;  /**< [  2:  2](R/W1C/H) Received P-TLP for BAR4 when BAR4 is disabled. */
        uint64_t up_b2                 : 1;  /**< [  3:  3](R/W1C/H) Received P-TLP for BAR2 when BAR2 is disabled. */
        uint64_t up_bx                 : 1;  /**< [  4:  4](R/W1C/H) Received P-TLP for an unknown BAR. */
        uint64_t un_b4                 : 1;  /**< [  5:  5](R/W1C/H) Received N-TLP for BAR4 when BAR4 is disabled. */
        uint64_t un_b2                 : 1;  /**< [  6:  6](R/W1C/H) Received N-TLP for BAR2 when BAR2 is disabled. */
        uint64_t un_bx                 : 1;  /**< [  7:  7](R/W1C/H) Received N-TLP for unknown BAR. */
        uint64_t rdlk                  : 1;  /**< [  8:  8](R/W1C/H) Received read lock TLP. */
        uint64_t crs_er                : 1;  /**< [  9:  9](R/W1C/H) Had a CRS timeout event. */
        uint64_t crs_dr                : 1;  /**< [ 10: 10](R/W1C/H) Received CRS when retries were disabled. */
        uint64_t cfg_inf               : 1;  /**< [ 11: 11](R/W1C/H) AP cores sent a second config read while a current config read was within the timeout window. */
        uint64_t surp_down             : 1;  /**< [ 12: 12](R/W1C/H) Indicates that a surprise down event is occurring in the controller. */
        uint64_t up_b0                 : 1;  /**< [ 13: 13](R/W1C/H) Received P-TLP for BAR0 when BAR0 is disabled. */
        uint64_t un_b0                 : 1;  /**< [ 14: 14](R/W1C/H) Received N-TLP for BAR0 when BAR0 is disabled. */
        uint64_t ptm_rdy_val           : 1;  /**< [ 15: 15](R/W1C/H) PTM Root is ready to have to context validated.
                                                                 When PEM()_PTM_CTL[PTM_AUTO_LOAD] is not set, the Mac PTM logic does
                                                                 not have a permanently valid context.  Currently the core invalidates
                                                                 the responder context on two conditions
                                                                 * aux_clk is active
                                                                 * Link speed changes

                                                                 To clear this interrupt, The host programs PCIERC_PTM_RES_LOCAL_MSB and
                                                                 PCIERC_PTM_RES_LOCAL_LSB and then sets the context valid bit
                                                                 (PCIERC_PTM_RES_CTL[PRES_CTX_VLD]). */
        uint64_t reserved_16_17        : 2;
        uint64_t up_vf_b0              : 1;  /**< [ 18: 18](R/W1C/H) Received P-TLP for  VF BAR0 when VF BAR0 is disabled. */
        uint64_t reserved_19_20        : 2;
        uint64_t un_vf_b0              : 1;  /**< [ 21: 21](R/W1C/H) Received N-TLP for VF BAR0 when VF BAR0 is disabled. */
        uint64_t ptm_rq_replaytx       : 1;  /**< [ 22: 22](R/W1C/H) PTM Requester Replay Sent.  PTM Requester detected a TLP replay
                                                                 being sent when ResponseD messages are in use while either:
                                                                 - PTM Requester is in the process or updating local clock.
                                                                 - Following calculation of the update, when the PTM context is valid. */
        uint64_t ptm_rq_duprx          : 1;  /**< [ 23: 23](R/W1C/H) PTM Requester Duplicate Received.  Indicates PTM Requester
                                                                 received a duplicate TLP while either:
                                                                 - PTM Requester is in the process or updating local clock.
                                                                 - Following calculation of the update, when the PTM context is valid. */
        uint64_t ptm_rq_unexp_rto      : 1;  /**< [ 24: 24](R/W1C/H) PTM Requester Unexpected Response Timeout.  Indicates 100us timeout
                                                                 occurred while waiting for a PTM Response/ResponseD message while a
                                                                 PTM update is in progress. */
        uint64_t reserved_25_63        : 39;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_int_sum_s cn; */
};
typedef union cavm_pemx_int_sum cavm_pemx_int_sum_t;

static inline uint64_t CAVM_PEMX_INT_SUM(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_INT_SUM(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8e00000000e8ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x8e00000000e8ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8e00000000e8ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8e00000000e8ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("PEMX_INT_SUM", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_INT_SUM(a) cavm_pemx_int_sum_t
#define bustype_CAVM_PEMX_INT_SUM(a) CSR_TYPE_NCB
#define basename_CAVM_PEMX_INT_SUM(a) "PEMX_INT_SUM"
#define device_bar_CAVM_PEMX_INT_SUM(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_INT_SUM(a) (a)
#define arguments_CAVM_PEMX_INT_SUM(a) (a),-1,-1,-1

/**
 * Register (NCB) pem#_int_sum_w1s
 *
 * PEM Interrupt Summary Register
 * This register sets interrupt bits.
 */
union cavm_pemx_int_sum_w1s
{
    uint64_t u;
    struct cavm_pemx_int_sum_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_25_63        : 39;
        uint64_t ptm_rq_unexp_rto      : 1;  /**< [ 24: 24](R/W1S/H) Reads or sets PEM(0..5)_INT_SUM[PTM_RQ_UNEXP_RTO]. */
        uint64_t ptm_rq_duprx          : 1;  /**< [ 23: 23](R/W1S/H) Reads or sets PEM(0..5)_INT_SUM[PTM_RQ_DUPRX]. */
        uint64_t ptm_rq_replaytx       : 1;  /**< [ 22: 22](R/W1S/H) Reads or sets PEM(0..5)_INT_SUM[PTM_RQ_REPLAYTX]. */
        uint64_t un_vf_b0              : 1;  /**< [ 21: 21](R/W1S/H) Reads or sets PEM(0..5)_INT_SUM[UN_VF_B0]. */
        uint64_t reserved_19_20        : 2;
        uint64_t up_vf_b0              : 1;  /**< [ 18: 18](R/W1S/H) Reads or sets PEM(0..5)_INT_SUM[UP_VF_B0]. */
        uint64_t reserved_16_17        : 2;
        uint64_t ptm_rdy_val           : 1;  /**< [ 15: 15](R/W1S/H) Reads or sets PEM(0..5)_INT_SUM[PTM_RDY_VAL]. */
        uint64_t un_b0                 : 1;  /**< [ 14: 14](R/W1S/H) Reads or sets PEM(0..5)_INT_SUM[UN_B0]. */
        uint64_t up_b0                 : 1;  /**< [ 13: 13](R/W1S/H) Reads or sets PEM(0..5)_INT_SUM[UP_B0]. */
        uint64_t surp_down             : 1;  /**< [ 12: 12](R/W1S/H) Reads or sets PEM(0..5)_INT_SUM[SURP_DOWN]. */
        uint64_t cfg_inf               : 1;  /**< [ 11: 11](R/W1S/H) Reads or sets PEM(0..5)_INT_SUM[CFG_INF]. */
        uint64_t crs_dr                : 1;  /**< [ 10: 10](R/W1S/H) Reads or sets PEM(0..5)_INT_SUM[CRS_DR]. */
        uint64_t crs_er                : 1;  /**< [  9:  9](R/W1S/H) Reads or sets PEM(0..5)_INT_SUM[CRS_ER]. */
        uint64_t rdlk                  : 1;  /**< [  8:  8](R/W1S/H) Reads or sets PEM(0..5)_INT_SUM[RDLK]. */
        uint64_t un_bx                 : 1;  /**< [  7:  7](R/W1S/H) Reads or sets PEM(0..5)_INT_SUM[UN_BX]. */
        uint64_t un_b2                 : 1;  /**< [  6:  6](R/W1S/H) Reads or sets PEM(0..5)_INT_SUM[UN_B2]. */
        uint64_t un_b4                 : 1;  /**< [  5:  5](R/W1S/H) Reads or sets PEM(0..5)_INT_SUM[UN_B4]. */
        uint64_t up_bx                 : 1;  /**< [  4:  4](R/W1S/H) Reads or sets PEM(0..5)_INT_SUM[UP_BX]. */
        uint64_t up_b2                 : 1;  /**< [  3:  3](R/W1S/H) Reads or sets PEM(0..5)_INT_SUM[UP_B2]. */
        uint64_t up_b4                 : 1;  /**< [  2:  2](R/W1S/H) Reads or sets PEM(0..5)_INT_SUM[UP_B4]. */
        uint64_t up_b3                 : 1;  /**< [  1:  1](R/W1S/H) Reads or sets PEM(0..5)_INT_SUM[UP_B3]. */
        uint64_t se                    : 1;  /**< [  0:  0](R/W1S/H) Reads or sets PEM(0..5)_INT_SUM[SE]. */
#else /* Word 0 - Little Endian */
        uint64_t se                    : 1;  /**< [  0:  0](R/W1S/H) Reads or sets PEM(0..5)_INT_SUM[SE]. */
        uint64_t up_b3                 : 1;  /**< [  1:  1](R/W1S/H) Reads or sets PEM(0..5)_INT_SUM[UP_B3]. */
        uint64_t up_b4                 : 1;  /**< [  2:  2](R/W1S/H) Reads or sets PEM(0..5)_INT_SUM[UP_B4]. */
        uint64_t up_b2                 : 1;  /**< [  3:  3](R/W1S/H) Reads or sets PEM(0..5)_INT_SUM[UP_B2]. */
        uint64_t up_bx                 : 1;  /**< [  4:  4](R/W1S/H) Reads or sets PEM(0..5)_INT_SUM[UP_BX]. */
        uint64_t un_b4                 : 1;  /**< [  5:  5](R/W1S/H) Reads or sets PEM(0..5)_INT_SUM[UN_B4]. */
        uint64_t un_b2                 : 1;  /**< [  6:  6](R/W1S/H) Reads or sets PEM(0..5)_INT_SUM[UN_B2]. */
        uint64_t un_bx                 : 1;  /**< [  7:  7](R/W1S/H) Reads or sets PEM(0..5)_INT_SUM[UN_BX]. */
        uint64_t rdlk                  : 1;  /**< [  8:  8](R/W1S/H) Reads or sets PEM(0..5)_INT_SUM[RDLK]. */
        uint64_t crs_er                : 1;  /**< [  9:  9](R/W1S/H) Reads or sets PEM(0..5)_INT_SUM[CRS_ER]. */
        uint64_t crs_dr                : 1;  /**< [ 10: 10](R/W1S/H) Reads or sets PEM(0..5)_INT_SUM[CRS_DR]. */
        uint64_t cfg_inf               : 1;  /**< [ 11: 11](R/W1S/H) Reads or sets PEM(0..5)_INT_SUM[CFG_INF]. */
        uint64_t surp_down             : 1;  /**< [ 12: 12](R/W1S/H) Reads or sets PEM(0..5)_INT_SUM[SURP_DOWN]. */
        uint64_t up_b0                 : 1;  /**< [ 13: 13](R/W1S/H) Reads or sets PEM(0..5)_INT_SUM[UP_B0]. */
        uint64_t un_b0                 : 1;  /**< [ 14: 14](R/W1S/H) Reads or sets PEM(0..5)_INT_SUM[UN_B0]. */
        uint64_t ptm_rdy_val           : 1;  /**< [ 15: 15](R/W1S/H) Reads or sets PEM(0..5)_INT_SUM[PTM_RDY_VAL]. */
        uint64_t reserved_16_17        : 2;
        uint64_t up_vf_b0              : 1;  /**< [ 18: 18](R/W1S/H) Reads or sets PEM(0..5)_INT_SUM[UP_VF_B0]. */
        uint64_t reserved_19_20        : 2;
        uint64_t un_vf_b0              : 1;  /**< [ 21: 21](R/W1S/H) Reads or sets PEM(0..5)_INT_SUM[UN_VF_B0]. */
        uint64_t ptm_rq_replaytx       : 1;  /**< [ 22: 22](R/W1S/H) Reads or sets PEM(0..5)_INT_SUM[PTM_RQ_REPLAYTX]. */
        uint64_t ptm_rq_duprx          : 1;  /**< [ 23: 23](R/W1S/H) Reads or sets PEM(0..5)_INT_SUM[PTM_RQ_DUPRX]. */
        uint64_t ptm_rq_unexp_rto      : 1;  /**< [ 24: 24](R/W1S/H) Reads or sets PEM(0..5)_INT_SUM[PTM_RQ_UNEXP_RTO]. */
        uint64_t reserved_25_63        : 39;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_int_sum_w1s_s cn10; */
    /* struct cavm_pemx_int_sum_w1s_s cn10ka; */
    /* struct cavm_pemx_int_sum_w1s_s cn10kb; */
    struct cavm_pemx_int_sum_w1s_cnf10ka
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_25_63        : 39;
        uint64_t ptm_rq_unexp_rto      : 1;  /**< [ 24: 24](R/W1S/H) Reads or sets PEM(0..1)_INT_SUM[PTM_RQ_UNEXP_RTO]. */
        uint64_t ptm_rq_duprx          : 1;  /**< [ 23: 23](R/W1S/H) Reads or sets PEM(0..1)_INT_SUM[PTM_RQ_DUPRX]. */
        uint64_t ptm_rq_replaytx       : 1;  /**< [ 22: 22](R/W1S/H) Reads or sets PEM(0..1)_INT_SUM[PTM_RQ_REPLAYTX]. */
        uint64_t un_vf_b0              : 1;  /**< [ 21: 21](R/W1S/H) Reads or sets PEM(0..1)_INT_SUM[UN_VF_B0]. */
        uint64_t reserved_19_20        : 2;
        uint64_t up_vf_b0              : 1;  /**< [ 18: 18](R/W1S/H) Reads or sets PEM(0..1)_INT_SUM[UP_VF_B0]. */
        uint64_t reserved_16_17        : 2;
        uint64_t ptm_rdy_val           : 1;  /**< [ 15: 15](R/W1S/H) Reads or sets PEM(0..1)_INT_SUM[PTM_RDY_VAL]. */
        uint64_t un_b0                 : 1;  /**< [ 14: 14](R/W1S/H) Reads or sets PEM(0..1)_INT_SUM[UN_B0]. */
        uint64_t up_b0                 : 1;  /**< [ 13: 13](R/W1S/H) Reads or sets PEM(0..1)_INT_SUM[UP_B0]. */
        uint64_t surp_down             : 1;  /**< [ 12: 12](R/W1S/H) Reads or sets PEM(0..1)_INT_SUM[SURP_DOWN]. */
        uint64_t cfg_inf               : 1;  /**< [ 11: 11](R/W1S/H) Reads or sets PEM(0..1)_INT_SUM[CFG_INF]. */
        uint64_t crs_dr                : 1;  /**< [ 10: 10](R/W1S/H) Reads or sets PEM(0..1)_INT_SUM[CRS_DR]. */
        uint64_t crs_er                : 1;  /**< [  9:  9](R/W1S/H) Reads or sets PEM(0..1)_INT_SUM[CRS_ER]. */
        uint64_t rdlk                  : 1;  /**< [  8:  8](R/W1S/H) Reads or sets PEM(0..1)_INT_SUM[RDLK]. */
        uint64_t un_bx                 : 1;  /**< [  7:  7](R/W1S/H) Reads or sets PEM(0..1)_INT_SUM[UN_BX]. */
        uint64_t un_b2                 : 1;  /**< [  6:  6](R/W1S/H) Reads or sets PEM(0..1)_INT_SUM[UN_B2]. */
        uint64_t un_b4                 : 1;  /**< [  5:  5](R/W1S/H) Reads or sets PEM(0..1)_INT_SUM[UN_B4]. */
        uint64_t up_bx                 : 1;  /**< [  4:  4](R/W1S/H) Reads or sets PEM(0..1)_INT_SUM[UP_BX]. */
        uint64_t up_b2                 : 1;  /**< [  3:  3](R/W1S/H) Reads or sets PEM(0..1)_INT_SUM[UP_B2]. */
        uint64_t up_b4                 : 1;  /**< [  2:  2](R/W1S/H) Reads or sets PEM(0..1)_INT_SUM[UP_B4]. */
        uint64_t up_b3                 : 1;  /**< [  1:  1](R/W1S/H) Reads or sets PEM(0..1)_INT_SUM[UP_B3]. */
        uint64_t se                    : 1;  /**< [  0:  0](R/W1S/H) Reads or sets PEM(0..1)_INT_SUM[SE]. */
#else /* Word 0 - Little Endian */
        uint64_t se                    : 1;  /**< [  0:  0](R/W1S/H) Reads or sets PEM(0..1)_INT_SUM[SE]. */
        uint64_t up_b3                 : 1;  /**< [  1:  1](R/W1S/H) Reads or sets PEM(0..1)_INT_SUM[UP_B3]. */
        uint64_t up_b4                 : 1;  /**< [  2:  2](R/W1S/H) Reads or sets PEM(0..1)_INT_SUM[UP_B4]. */
        uint64_t up_b2                 : 1;  /**< [  3:  3](R/W1S/H) Reads or sets PEM(0..1)_INT_SUM[UP_B2]. */
        uint64_t up_bx                 : 1;  /**< [  4:  4](R/W1S/H) Reads or sets PEM(0..1)_INT_SUM[UP_BX]. */
        uint64_t un_b4                 : 1;  /**< [  5:  5](R/W1S/H) Reads or sets PEM(0..1)_INT_SUM[UN_B4]. */
        uint64_t un_b2                 : 1;  /**< [  6:  6](R/W1S/H) Reads or sets PEM(0..1)_INT_SUM[UN_B2]. */
        uint64_t un_bx                 : 1;  /**< [  7:  7](R/W1S/H) Reads or sets PEM(0..1)_INT_SUM[UN_BX]. */
        uint64_t rdlk                  : 1;  /**< [  8:  8](R/W1S/H) Reads or sets PEM(0..1)_INT_SUM[RDLK]. */
        uint64_t crs_er                : 1;  /**< [  9:  9](R/W1S/H) Reads or sets PEM(0..1)_INT_SUM[CRS_ER]. */
        uint64_t crs_dr                : 1;  /**< [ 10: 10](R/W1S/H) Reads or sets PEM(0..1)_INT_SUM[CRS_DR]. */
        uint64_t cfg_inf               : 1;  /**< [ 11: 11](R/W1S/H) Reads or sets PEM(0..1)_INT_SUM[CFG_INF]. */
        uint64_t surp_down             : 1;  /**< [ 12: 12](R/W1S/H) Reads or sets PEM(0..1)_INT_SUM[SURP_DOWN]. */
        uint64_t up_b0                 : 1;  /**< [ 13: 13](R/W1S/H) Reads or sets PEM(0..1)_INT_SUM[UP_B0]. */
        uint64_t un_b0                 : 1;  /**< [ 14: 14](R/W1S/H) Reads or sets PEM(0..1)_INT_SUM[UN_B0]. */
        uint64_t ptm_rdy_val           : 1;  /**< [ 15: 15](R/W1S/H) Reads or sets PEM(0..1)_INT_SUM[PTM_RDY_VAL]. */
        uint64_t reserved_16_17        : 2;
        uint64_t up_vf_b0              : 1;  /**< [ 18: 18](R/W1S/H) Reads or sets PEM(0..1)_INT_SUM[UP_VF_B0]. */
        uint64_t reserved_19_20        : 2;
        uint64_t un_vf_b0              : 1;  /**< [ 21: 21](R/W1S/H) Reads or sets PEM(0..1)_INT_SUM[UN_VF_B0]. */
        uint64_t ptm_rq_replaytx       : 1;  /**< [ 22: 22](R/W1S/H) Reads or sets PEM(0..1)_INT_SUM[PTM_RQ_REPLAYTX]. */
        uint64_t ptm_rq_duprx          : 1;  /**< [ 23: 23](R/W1S/H) Reads or sets PEM(0..1)_INT_SUM[PTM_RQ_DUPRX]. */
        uint64_t ptm_rq_unexp_rto      : 1;  /**< [ 24: 24](R/W1S/H) Reads or sets PEM(0..1)_INT_SUM[PTM_RQ_UNEXP_RTO]. */
        uint64_t reserved_25_63        : 39;
#endif /* Word 0 - End */
    } cnf10ka;
    /* struct cavm_pemx_int_sum_w1s_cnf10ka cnf10kb; */
};
typedef union cavm_pemx_int_sum_w1s cavm_pemx_int_sum_w1s_t;

static inline uint64_t CAVM_PEMX_INT_SUM_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_INT_SUM_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8e00000000f0ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x8e00000000f0ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8e00000000f0ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8e00000000f0ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("PEMX_INT_SUM_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_INT_SUM_W1S(a) cavm_pemx_int_sum_w1s_t
#define bustype_CAVM_PEMX_INT_SUM_W1S(a) CSR_TYPE_NCB
#define basename_CAVM_PEMX_INT_SUM_W1S(a) "PEMX_INT_SUM_W1S"
#define device_bar_CAVM_PEMX_INT_SUM_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_INT_SUM_W1S(a) (a)
#define arguments_CAVM_PEMX_INT_SUM_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) pem#_latency_pc
 *
 * PEM Latency Count Register
 * This register contains read latency count for debugging purposes.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 */
union cavm_pemx_latency_pc
{
    uint64_t u;
    struct cavm_pemx_latency_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t latency               : 64; /**< [ 63:  0](R/W/H) Total read latency count in 10 ns units measured from an internal point in PEM
                                                                 after coming from either NCBO (but prior to any merging logic) or EBO, to an
                                                                 internal point in PEM where the corresponding completion is sent to the NCBI
                                                                 or EBI interface logic. PEM()_LATENCY_PC_CTL[EBO_SEL] controls which
                                                                 outbound bus has its reads latency tracked.  This register can only be written
                                                                 by software when PEM()_LATENCY_PC_CTL[ACTIVE] is clear. */
#else /* Word 0 - Little Endian */
        uint64_t latency               : 64; /**< [ 63:  0](R/W/H) Total read latency count in 10 ns units measured from an internal point in PEM
                                                                 after coming from either NCBO (but prior to any merging logic) or EBO, to an
                                                                 internal point in PEM where the corresponding completion is sent to the NCBI
                                                                 or EBI interface logic. PEM()_LATENCY_PC_CTL[EBO_SEL] controls which
                                                                 outbound bus has its reads latency tracked.  This register can only be written
                                                                 by software when PEM()_LATENCY_PC_CTL[ACTIVE] is clear. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_latency_pc_s cn; */
};
typedef union cavm_pemx_latency_pc cavm_pemx_latency_pc_t;

static inline uint64_t CAVM_PEMX_LATENCY_PC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_LATENCY_PC(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8e0000000118ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8e0000000118ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8e0000000118ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("PEMX_LATENCY_PC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_LATENCY_PC(a) cavm_pemx_latency_pc_t
#define bustype_CAVM_PEMX_LATENCY_PC(a) CSR_TYPE_NCB
#define basename_CAVM_PEMX_LATENCY_PC(a) "PEMX_LATENCY_PC"
#define device_bar_CAVM_PEMX_LATENCY_PC(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_LATENCY_PC(a) (a)
#define arguments_CAVM_PEMX_LATENCY_PC(a) (a),-1,-1,-1

/**
 * Register (NCB) pem#_latency_pc_ctl
 *
 * PEM Latency Control Register
 * This register controls read latency monitoring for debugging purposes.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 */
union cavm_pemx_latency_pc_ctl
{
    uint64_t u;
    struct cavm_pemx_latency_pc_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_3_63         : 61;
        uint64_t ebo_sel               : 1;  /**< [  2:  2](R/W) If set, latency will be measured on EBO reads instead of NCBO reads. */
        uint64_t complete              : 1;  /**< [  1:  1](RO/H) When software causes a rising edge on [ACTIVE], hardware will clear this
                                                                 bit. Later, when software clears [ACTIVE], hardware will wait for all
                                                                 outstanding reads to get their first data returned and then set this bit to
                                                                 indicate that measurement operations are completed. */
        uint64_t active                : 1;  /**< [  0:  0](R/W) When a software write causes a rising edge on [ACTIVE], PEM will begin a
                                                                 measurement using existing values for PEM()_LATENCY_PC and PEM()_READS_PC
                                                                 as well as clear [COMPLETE]. Only NCBO reads that occur
                                                                 after this rising edge will be added into the results. When software wants
                                                                 to halt measurement, it can clear this bit which will block further reads
                                                                 from being considered. When software reads [COMPLETE] as set,
                                                                 it can know that all measurement is completed and PEM()_LATENCY_PC and
                                                                 PEM()_READS_PC reflect a completely accurate and stable set of values.

                                                                 Note that [ACTIVE] does not need to be cleared in order to read
                                                                 PEM()_LATENCY_PC and PEM()_READS_PC to calculate average latency during active
                                                                 processing, but there will be some small error.

                                                                 Note that because software can write PEM()_LATENCY_PC and PEM()_READS_PC,
                                                                 PEM will not clear these values when a software write causes a rising edge on
                                                                 [ACTIVE].  Instead, software must initialize these two registers (probably
                                                                 both to 0) prior to starting a measurement. */
#else /* Word 0 - Little Endian */
        uint64_t active                : 1;  /**< [  0:  0](R/W) When a software write causes a rising edge on [ACTIVE], PEM will begin a
                                                                 measurement using existing values for PEM()_LATENCY_PC and PEM()_READS_PC
                                                                 as well as clear [COMPLETE]. Only NCBO reads that occur
                                                                 after this rising edge will be added into the results. When software wants
                                                                 to halt measurement, it can clear this bit which will block further reads
                                                                 from being considered. When software reads [COMPLETE] as set,
                                                                 it can know that all measurement is completed and PEM()_LATENCY_PC and
                                                                 PEM()_READS_PC reflect a completely accurate and stable set of values.

                                                                 Note that [ACTIVE] does not need to be cleared in order to read
                                                                 PEM()_LATENCY_PC and PEM()_READS_PC to calculate average latency during active
                                                                 processing, but there will be some small error.

                                                                 Note that because software can write PEM()_LATENCY_PC and PEM()_READS_PC,
                                                                 PEM will not clear these values when a software write causes a rising edge on
                                                                 [ACTIVE].  Instead, software must initialize these two registers (probably
                                                                 both to 0) prior to starting a measurement. */
        uint64_t complete              : 1;  /**< [  1:  1](RO/H) When software causes a rising edge on [ACTIVE], hardware will clear this
                                                                 bit. Later, when software clears [ACTIVE], hardware will wait for all
                                                                 outstanding reads to get their first data returned and then set this bit to
                                                                 indicate that measurement operations are completed. */
        uint64_t ebo_sel               : 1;  /**< [  2:  2](R/W) If set, latency will be measured on EBO reads instead of NCBO reads. */
        uint64_t reserved_3_63         : 61;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_latency_pc_ctl_s cn; */
};
typedef union cavm_pemx_latency_pc_ctl cavm_pemx_latency_pc_ctl_t;

static inline uint64_t CAVM_PEMX_LATENCY_PC_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_LATENCY_PC_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8e0000000128ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8e0000000128ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8e0000000128ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("PEMX_LATENCY_PC_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_LATENCY_PC_CTL(a) cavm_pemx_latency_pc_ctl_t
#define bustype_CAVM_PEMX_LATENCY_PC_CTL(a) CSR_TYPE_NCB
#define basename_CAVM_PEMX_LATENCY_PC_CTL(a) "PEMX_LATENCY_PC_CTL"
#define device_bar_CAVM_PEMX_LATENCY_PC_CTL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_LATENCY_PC_CTL(a) (a)
#define arguments_CAVM_PEMX_LATENCY_PC_CTL(a) (a),-1,-1,-1

/**
 * Register (NCB) pem#_ltr_latency
 *
 * PEM Latency Tolerance Reporting Register
 * This register contains the current LTR values reported and in-use
 * by the downstream device.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on MAC reset.
 */
union cavm_pemx_ltr_latency
{
    uint64_t u;
    struct cavm_pemx_ltr_latency_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t latency               : 32; /**< [ 31:  0](RO/H) Reflects the captured LTR values from received LTR message in RC mode. */
#else /* Word 0 - Little Endian */
        uint64_t latency               : 32; /**< [ 31:  0](RO/H) Reflects the captured LTR values from received LTR message in RC mode. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_ltr_latency_s cn; */
};
typedef union cavm_pemx_ltr_latency cavm_pemx_ltr_latency_t;

static inline uint64_t CAVM_PEMX_LTR_LATENCY(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_LTR_LATENCY(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8e00000000c0ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x8e00000000c0ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8e00000000c0ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8e00000000c0ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("PEMX_LTR_LATENCY", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_LTR_LATENCY(a) cavm_pemx_ltr_latency_t
#define bustype_CAVM_PEMX_LTR_LATENCY(a) CSR_TYPE_NCB
#define basename_CAVM_PEMX_LTR_LATENCY(a) "PEMX_LTR_LATENCY"
#define device_bar_CAVM_PEMX_LTR_LATENCY(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_LTR_LATENCY(a) (a)
#define arguments_CAVM_PEMX_LTR_LATENCY(a) (a),-1,-1,-1

/**
 * Register (NCB) pem#_ltr_val#
 *
 * PEM Latency Tolerance Reporting Register
 * This register contains the values to put into the latency tolerance reporting (LTM) message
 * when triggered by hardware.  EP Mode.
 *
 * This register is accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on cold reset.
 */
union cavm_pemx_ltr_valx
{
    uint64_t u;
    struct cavm_pemx_ltr_valx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t ns_lat                : 16; /**< [ 31: 16](R/W) No-snoop latency value to put into LTM message when triggered by hardware. */
        uint64_t snoop_lat             : 16; /**< [ 15:  0](R/W) Snoop latency value to put into LTM message when triggered by hardware. */
#else /* Word 0 - Little Endian */
        uint64_t snoop_lat             : 16; /**< [ 15:  0](R/W) Snoop latency value to put into LTM message when triggered by hardware. */
        uint64_t ns_lat                : 16; /**< [ 31: 16](R/W) No-snoop latency value to put into LTM message when triggered by hardware. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_ltr_valx_s cn; */
};
typedef union cavm_pemx_ltr_valx cavm_pemx_ltr_valx_t;

static inline uint64_t CAVM_PEMX_LTR_VALX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_LTR_VALX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=5) && (b<=1)))
        return 0x8e00000000b0ll + 0x1000000000ll * ((a) & 0x7) + 8ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=5) && (b<=1)))
        return 0x8e00000000b0ll + 0x1000000000ll * ((a) & 0x7) + 8ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=1) && (b<=1)))
        return 0x8e00000000b0ll + 0x1000000000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=1) && (b<=1)))
        return 0x8e00000000b0ll + 0x1000000000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("PEMX_LTR_VALX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_LTR_VALX(a,b) cavm_pemx_ltr_valx_t
#define bustype_CAVM_PEMX_LTR_VALX(a,b) CSR_TYPE_NCB
#define basename_CAVM_PEMX_LTR_VALX(a,b) "PEMX_LTR_VALX"
#define device_bar_CAVM_PEMX_LTR_VALX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_LTR_VALX(a,b) (a)
#define arguments_CAVM_PEMX_LTR_VALX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) pem#_mac_lane#_eq
 *
 * PEM MAC Lane RX/TX Equalization Info Register
 * This register specifies the per lane RX/TX Equalization values advertised
 * by the link partner.
 *
 * This register is accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on MAC reset.
 */
union cavm_pemx_mac_lanex_eq
{
    uint64_t u;
    struct cavm_pemx_mac_lanex_eq_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_50_63        : 14;
        uint64_t pset_coef             : 18; /**< [ 49: 32](RO/H) Presets and coefficients chosen by the PEM. */
        uint64_t reserved_15_31        : 17;
        uint64_t rxphint               : 3;  /**< [ 14: 12](RO/H) Represents the RX equalization preset hint
                                                                 for the receiver. */
        uint64_t lf                    : 6;  /**< [ 11:  6](RO/H) Represents the low frequency value of the remote transmitter
                                                                 captured in Recovery.Equalization Phase 1. */
        uint64_t fs                    : 6;  /**< [  5:  0](RO/H) Represents the full swing value of the remote transmitter
                                                                 captured in Recovery.Equalization Phase 1. */
#else /* Word 0 - Little Endian */
        uint64_t fs                    : 6;  /**< [  5:  0](RO/H) Represents the full swing value of the remote transmitter
                                                                 captured in Recovery.Equalization Phase 1. */
        uint64_t lf                    : 6;  /**< [ 11:  6](RO/H) Represents the low frequency value of the remote transmitter
                                                                 captured in Recovery.Equalization Phase 1. */
        uint64_t rxphint               : 3;  /**< [ 14: 12](RO/H) Represents the RX equalization preset hint
                                                                 for the receiver. */
        uint64_t reserved_15_31        : 17;
        uint64_t pset_coef             : 18; /**< [ 49: 32](RO/H) Presets and coefficients chosen by the PEM. */
        uint64_t reserved_50_63        : 14;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_mac_lanex_eq_s cn; */
};
typedef union cavm_pemx_mac_lanex_eq cavm_pemx_mac_lanex_eq_t;

static inline uint64_t CAVM_PEMX_MAC_LANEX_EQ(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_MAC_LANEX_EQ(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=5) && (b<=3)))
        return 0x8e0000000780ll + 0x1000000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=5) && (b<=3)))
        return 0x8e0000000780ll + 0x1000000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=1) && (b<=3)))
        return 0x8e0000000780ll + 0x1000000000ll * ((a) & 0x1) + 8ll * ((b) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=1) && (b<=3)))
        return 0x8e0000000780ll + 0x1000000000ll * ((a) & 0x1) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("PEMX_MAC_LANEX_EQ", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_MAC_LANEX_EQ(a,b) cavm_pemx_mac_lanex_eq_t
#define bustype_CAVM_PEMX_MAC_LANEX_EQ(a,b) CSR_TYPE_NCB
#define basename_CAVM_PEMX_MAC_LANEX_EQ(a,b) "PEMX_MAC_LANEX_EQ"
#define device_bar_CAVM_PEMX_MAC_LANEX_EQ(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_MAC_LANEX_EQ(a,b) (a)
#define arguments_CAVM_PEMX_MAC_LANEX_EQ(a,b) (a),(b),-1,-1

/**
 * Register (NCB) pem#_merge_timer_ctl
 *
 * PEM Merge Timer Control Register
 * This register controls merging timers and overrides for maximum merging size
 * for outbound reads, writes, and completions.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 */
union cavm_pemx_merge_timer_ctl
{
    uint64_t u;
    struct cavm_pemx_merge_timer_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cmerge_dis            : 1;  /**< [ 63: 63](R/W) For diagnostic use only.  If set, will disable outbound completion merging. */
        uint64_t cmerge_mps_limit      : 3;  /**< [ 62: 60](R/W) Completion merge maximum payload size limit value. Software can use this value
                                                                 to reduce the maximum size of a merged completion operation to a level below the
                                                                 MPS value coming from the PCIe core. A value of 0x0 limits to 128 bytes with
                                                                 each increase in value doubling the limit. The hardware is controlled by the
                                                                 lower of [CMERGE_MPS_LIMIT] and the MPS value coming from the PCIe core. Resets
                                                                 to a value guaranteed to be at least as large as any legal value for MPS coming
                                                                 from the PCIe core. */
        uint64_t cmerge_total_timer    : 7;  /**< [ 59: 53](R/W) Completion merge encapsulation timer. When PEM accepts an outbound completion
                                                                 which begins a completion merging process, [CMERGE_TOTAL_TIMER] specifies the
                                                                 maximum wait, in units of (coprocessor-clock cycles * 64), to merge additional
                                                                 completion transfers into one larger overall completion. The values for this
                                                                 field range from 1 to 127, with 0x0 used for diagnostics only and treated as
                                                                 never expire. This translates into a range of 64 to 8128 in units of
                                                                 co-processor-clock cycles. */
        uint64_t cmerge_segment_timer  : 7;  /**< [ 52: 46](R/W) Completion merge segment timer. The maximum wait, in coprocessor-clock cycles,
                                                                 to wait between each segment of the overall merge operation. Each iterative
                                                                 completion transfer added to the overall merge restarts this timer. The values
                                                                 for this field range from 1 to 127, with 0x0 used for diagnostics only and
                                                                 treated as never expire. This translates into a range of 64 to 8128 in units of
                                                                 co-processor-clock cycles. */
        uint64_t wmerge_mps_limit      : 3;  /**< [ 45: 43](R/W) Write merge maximum payload size limit value. Software can use this value to
                                                                 reduce the maximum size of a merged write operation to a level below the MPS
                                                                 value coming from the PCIe core. A value of 0 limits to 128 bytes with each
                                                                 increase in value doubling the limit. The hardware will be controlled by the
                                                                 LOWER of [WMERGE_MPS_LIMIT] and the MPS value coming from the PCIe core. Resets
                                                                 to a value guaranteed to be at least as large as any legal value for MPS coming
                                                                 from the PCIe core. */
        uint64_t wmerge_total_timer    : 10; /**< [ 42: 33](R/W) Write merge encapsulation timer. When PEM accepts an outbound write which begins
                                                                 a write merging process, [WMERGE_TOTAL_TIMER] specifies the maximum wait, in
                                                                 coprocessor-clock cycles, to merge additional write operations into one larger
                                                                 write. The values for this field range from 1 to 1023, with 0x0 used for
                                                                 diagnostics only and treated as never expire. */
        uint64_t wmerge_segment_timer  : 10; /**< [ 32: 23](R/W) Write merge segment timer. The maximum wait,
                                                                 in coprocessor-clock cycles, to wait between each segment of the overall merge
                                                                 operation.  Each iterative write operation added to the overall merge restarts this
                                                                 timer.  The values for this field range from 1 to 1023, with 0x0 used for
                                                                 diagnostics only and treated as never expire. */
        uint64_t rmerge_mrrs_limit     : 3;  /**< [ 22: 20](R/W) Read merge maximum read request size limit value. Software can use this value to
                                                                 reduce the maximum size of a merged read operation to a level below the MRRS
                                                                 value coming from the PCIe core. A value of 0x0 limits to 128 bytes with each
                                                                 increase in value doubling the limit. The hardware will be controlled by the
                                                                 LOWER of [RMERGE_MRRS_LIMIT] and the MRRS value coming from the PCIe
                                                                 core. Resets to a value guaranteed to be at least as large as any legal value
                                                                 for MRRS coming from the PCIe core. */
        uint64_t rmerge_total_timer    : 10; /**< [ 19: 10](R/W) Read merge encapsulation timer. When PEM accepts an outbound read which begins a
                                                                 read merging process, [RMERGE_TOTAL_TIMER] specifies the maximum wait, in
                                                                 coprocessor-clock cycles, to merge additional read operations into one larger
                                                                 read. The values for this field range from 1 to 1023, with 0x0 used for
                                                                 diagnostics only and treated as never expire. */
        uint64_t rmerge_segment_timer  : 10; /**< [  9:  0](R/W) Read merge segment timer. specifies the maximum wait, in coprocessor-clock
                                                                 cycles, to wait between each segment of the overall merge operation. Each
                                                                 iterative read operation added to the overall merge restarts this timer. The
                                                                 values for this field range from 1 to 1023, with 0x0 used for diagnostics only
                                                                 and treated as never expire. */
#else /* Word 0 - Little Endian */
        uint64_t rmerge_segment_timer  : 10; /**< [  9:  0](R/W) Read merge segment timer. specifies the maximum wait, in coprocessor-clock
                                                                 cycles, to wait between each segment of the overall merge operation. Each
                                                                 iterative read operation added to the overall merge restarts this timer. The
                                                                 values for this field range from 1 to 1023, with 0x0 used for diagnostics only
                                                                 and treated as never expire. */
        uint64_t rmerge_total_timer    : 10; /**< [ 19: 10](R/W) Read merge encapsulation timer. When PEM accepts an outbound read which begins a
                                                                 read merging process, [RMERGE_TOTAL_TIMER] specifies the maximum wait, in
                                                                 coprocessor-clock cycles, to merge additional read operations into one larger
                                                                 read. The values for this field range from 1 to 1023, with 0x0 used for
                                                                 diagnostics only and treated as never expire. */
        uint64_t rmerge_mrrs_limit     : 3;  /**< [ 22: 20](R/W) Read merge maximum read request size limit value. Software can use this value to
                                                                 reduce the maximum size of a merged read operation to a level below the MRRS
                                                                 value coming from the PCIe core. A value of 0x0 limits to 128 bytes with each
                                                                 increase in value doubling the limit. The hardware will be controlled by the
                                                                 LOWER of [RMERGE_MRRS_LIMIT] and the MRRS value coming from the PCIe
                                                                 core. Resets to a value guaranteed to be at least as large as any legal value
                                                                 for MRRS coming from the PCIe core. */
        uint64_t wmerge_segment_timer  : 10; /**< [ 32: 23](R/W) Write merge segment timer. The maximum wait,
                                                                 in coprocessor-clock cycles, to wait between each segment of the overall merge
                                                                 operation.  Each iterative write operation added to the overall merge restarts this
                                                                 timer.  The values for this field range from 1 to 1023, with 0x0 used for
                                                                 diagnostics only and treated as never expire. */
        uint64_t wmerge_total_timer    : 10; /**< [ 42: 33](R/W) Write merge encapsulation timer. When PEM accepts an outbound write which begins
                                                                 a write merging process, [WMERGE_TOTAL_TIMER] specifies the maximum wait, in
                                                                 coprocessor-clock cycles, to merge additional write operations into one larger
                                                                 write. The values for this field range from 1 to 1023, with 0x0 used for
                                                                 diagnostics only and treated as never expire. */
        uint64_t wmerge_mps_limit      : 3;  /**< [ 45: 43](R/W) Write merge maximum payload size limit value. Software can use this value to
                                                                 reduce the maximum size of a merged write operation to a level below the MPS
                                                                 value coming from the PCIe core. A value of 0 limits to 128 bytes with each
                                                                 increase in value doubling the limit. The hardware will be controlled by the
                                                                 LOWER of [WMERGE_MPS_LIMIT] and the MPS value coming from the PCIe core. Resets
                                                                 to a value guaranteed to be at least as large as any legal value for MPS coming
                                                                 from the PCIe core. */
        uint64_t cmerge_segment_timer  : 7;  /**< [ 52: 46](R/W) Completion merge segment timer. The maximum wait, in coprocessor-clock cycles,
                                                                 to wait between each segment of the overall merge operation. Each iterative
                                                                 completion transfer added to the overall merge restarts this timer. The values
                                                                 for this field range from 1 to 127, with 0x0 used for diagnostics only and
                                                                 treated as never expire. This translates into a range of 64 to 8128 in units of
                                                                 co-processor-clock cycles. */
        uint64_t cmerge_total_timer    : 7;  /**< [ 59: 53](R/W) Completion merge encapsulation timer. When PEM accepts an outbound completion
                                                                 which begins a completion merging process, [CMERGE_TOTAL_TIMER] specifies the
                                                                 maximum wait, in units of (coprocessor-clock cycles * 64), to merge additional
                                                                 completion transfers into one larger overall completion. The values for this
                                                                 field range from 1 to 127, with 0x0 used for diagnostics only and treated as
                                                                 never expire. This translates into a range of 64 to 8128 in units of
                                                                 co-processor-clock cycles. */
        uint64_t cmerge_mps_limit      : 3;  /**< [ 62: 60](R/W) Completion merge maximum payload size limit value. Software can use this value
                                                                 to reduce the maximum size of a merged completion operation to a level below the
                                                                 MPS value coming from the PCIe core. A value of 0x0 limits to 128 bytes with
                                                                 each increase in value doubling the limit. The hardware is controlled by the
                                                                 lower of [CMERGE_MPS_LIMIT] and the MPS value coming from the PCIe core. Resets
                                                                 to a value guaranteed to be at least as large as any legal value for MPS coming
                                                                 from the PCIe core. */
        uint64_t cmerge_dis            : 1;  /**< [ 63: 63](R/W) For diagnostic use only.  If set, will disable outbound completion merging. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_merge_timer_ctl_s cn; */
};
typedef union cavm_pemx_merge_timer_ctl cavm_pemx_merge_timer_ctl_t;

static inline uint64_t CAVM_PEMX_MERGE_TIMER_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_MERGE_TIMER_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8e0000000180ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x8e0000000180ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8e0000000180ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8e0000000180ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("PEMX_MERGE_TIMER_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_MERGE_TIMER_CTL(a) cavm_pemx_merge_timer_ctl_t
#define bustype_CAVM_PEMX_MERGE_TIMER_CTL(a) CSR_TYPE_NCB
#define basename_CAVM_PEMX_MERGE_TIMER_CTL(a) "PEMX_MERGE_TIMER_CTL"
#define device_bar_CAVM_PEMX_MERGE_TIMER_CTL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_MERGE_TIMER_CTL(a) (a)
#define arguments_CAVM_PEMX_MERGE_TIMER_CTL(a) (a),-1,-1,-1

/**
 * Register (NCB) pem#_msix_pba#
 *
 * PEM MSI-X Pending Bit Array Registers
 * This register is the MSI-X PBA table, the bit number is indexed by the PEM_INT_VEC_E enumeration.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 */
union cavm_pemx_msix_pbax
{
    uint64_t u;
    struct cavm_pemx_msix_pbax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message for the associated PEM_MSIX_VEC()_CTL, enumerated by PEM_INT_VEC_E. Bits
                                                                 that have no associated PEM_INT_VEC_E are zero. */
#else /* Word 0 - Little Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message for the associated PEM_MSIX_VEC()_CTL, enumerated by PEM_INT_VEC_E. Bits
                                                                 that have no associated PEM_INT_VEC_E are zero. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_msix_pbax_s cn; */
};
typedef union cavm_pemx_msix_pbax cavm_pemx_msix_pbax_t;

static inline uint64_t CAVM_PEMX_MSIX_PBAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_MSIX_PBAX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=5) && (b==0)))
        return 0x8e0f000f0000ll + 0x1000000000ll * ((a) & 0x7) + 8ll * ((b) & 0x0);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=5) && (b==0)))
        return 0x8e0f000f0000ll + 0x1000000000ll * ((a) & 0x7) + 8ll * ((b) & 0x0);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=1) && (b==0)))
        return 0x8e0f000f0000ll + 0x1000000000ll * ((a) & 0x1) + 8ll * ((b) & 0x0);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=1) && (b==0)))
        return 0x8e0f000f0000ll + 0x1000000000ll * ((a) & 0x1) + 8ll * ((b) & 0x0);
    __cavm_csr_fatal("PEMX_MSIX_PBAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_MSIX_PBAX(a,b) cavm_pemx_msix_pbax_t
#define bustype_CAVM_PEMX_MSIX_PBAX(a,b) CSR_TYPE_NCB
#define basename_CAVM_PEMX_MSIX_PBAX(a,b) "PEMX_MSIX_PBAX"
#define device_bar_CAVM_PEMX_MSIX_PBAX(a,b) 0x4 /* PF_BAR4 */
#define busnum_CAVM_PEMX_MSIX_PBAX(a,b) (a)
#define arguments_CAVM_PEMX_MSIX_PBAX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) pem#_msix_vec#_addr
 *
 * PEM MSI-X Vector Table Address Registers
 * This register is the MSI-X vector table, indexed by the PEM_INT_VEC_E enumeration.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 */
union cavm_pemx_msix_vecx_addr
{
    uint64_t u;
    struct cavm_pemx_msix_vecx_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_1            : 1;
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Secure vector.
                                                                 0 = This vector may be read or written by either secure or nonsecure states.
                                                                 The vector's IOVA is sent to the SMMU as nonsecure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1).

                                                                 1 = This vector's PEM()_MSIX_VEC()_ADDR, PEM()_MSIX_VEC()_CTL, and
                                                                 corresponding bit of PEM()_MSIX_PBA() are RAZ/WI and does not cause a fault when accessed
                                                                 by the nonsecure world.
                                                                 The vector's IOVA is sent to the SMMU as secure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1 or
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC_PHYS]=1).

                                                                 If PCCPF_PEM()_VSEC_SCTL[MSIX_SEC] (for documentation, see
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC]) is
                                                                 set, all vectors are secure and function as if [SECVEC] was set.

                                                                 Also note the following:
                                                                 * When PCCPF_XXX_VSEC_SCTL[MSIX_SEC_EN]=1, all secure vectors (including secure
                                                                 VF vectors) will act as if PCCPF/PCCVF_XXX_MSIX_CAP_HDR[MSIXEN]=1,
                                                                 PCCPF/PCCVF_XXX_MSIX_CAP_HDR[FUNM]=0 and PCCPF/PCCVF_XXX_CMD[ME]=1.
                                                                 * When PCCPF_XXX_VSEC_SCTL[MSIX_SEC_PHYS]=1, all secure vectors (including
                                                                 secure VF vectors) are considered physical, regardless of
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]. */
#else /* Word 0 - Little Endian */
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Secure vector.
                                                                 0 = This vector may be read or written by either secure or nonsecure states.
                                                                 The vector's IOVA is sent to the SMMU as nonsecure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1).

                                                                 1 = This vector's PEM()_MSIX_VEC()_ADDR, PEM()_MSIX_VEC()_CTL, and
                                                                 corresponding bit of PEM()_MSIX_PBA() are RAZ/WI and does not cause a fault when accessed
                                                                 by the nonsecure world.
                                                                 The vector's IOVA is sent to the SMMU as secure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1 or
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC_PHYS]=1).

                                                                 If PCCPF_PEM()_VSEC_SCTL[MSIX_SEC] (for documentation, see
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC]) is
                                                                 set, all vectors are secure and function as if [SECVEC] was set.

                                                                 Also note the following:
                                                                 * When PCCPF_XXX_VSEC_SCTL[MSIX_SEC_EN]=1, all secure vectors (including secure
                                                                 VF vectors) will act as if PCCPF/PCCVF_XXX_MSIX_CAP_HDR[MSIXEN]=1,
                                                                 PCCPF/PCCVF_XXX_MSIX_CAP_HDR[FUNM]=0 and PCCPF/PCCVF_XXX_CMD[ME]=1.
                                                                 * When PCCPF_XXX_VSEC_SCTL[MSIX_SEC_PHYS]=1, all secure vectors (including
                                                                 secure VF vectors) are considered physical, regardless of
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]. */
        uint64_t reserved_1            : 1;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_msix_vecx_addr_s cn; */
};
typedef union cavm_pemx_msix_vecx_addr cavm_pemx_msix_vecx_addr_t;

static inline uint64_t CAVM_PEMX_MSIX_VECX_ADDR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_MSIX_VECX_ADDR(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=5) && (b<=9)))
        return 0x8e0f00000000ll + 0x1000000000ll * ((a) & 0x7) + 0x10ll * ((b) & 0xf);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=5) && (b<=9)))
        return 0x8e0f00000000ll + 0x1000000000ll * ((a) & 0x7) + 0x10ll * ((b) & 0xf);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=1) && (b<=9)))
        return 0x8e0f00000000ll + 0x1000000000ll * ((a) & 0x1) + 0x10ll * ((b) & 0xf);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=1) && (b<=9)))
        return 0x8e0f00000000ll + 0x1000000000ll * ((a) & 0x1) + 0x10ll * ((b) & 0xf);
    __cavm_csr_fatal("PEMX_MSIX_VECX_ADDR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_MSIX_VECX_ADDR(a,b) cavm_pemx_msix_vecx_addr_t
#define bustype_CAVM_PEMX_MSIX_VECX_ADDR(a,b) CSR_TYPE_NCB
#define basename_CAVM_PEMX_MSIX_VECX_ADDR(a,b) "PEMX_MSIX_VECX_ADDR"
#define device_bar_CAVM_PEMX_MSIX_VECX_ADDR(a,b) 0x4 /* PF_BAR4 */
#define busnum_CAVM_PEMX_MSIX_VECX_ADDR(a,b) (a)
#define arguments_CAVM_PEMX_MSIX_VECX_ADDR(a,b) (a),(b),-1,-1

/**
 * Register (NCB) pem#_msix_vec#_ctl
 *
 * PEM MSI-X Vector Table Control and Data Registers
 * This register is the MSI-X vector table, indexed by the PEM_INT_VEC_E enumeration.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 */
union cavm_pemx_msix_vecx_ctl
{
    uint64_t u;
    struct cavm_pemx_msix_vecx_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_33_63        : 31;
        uint64_t mask                  : 1;  /**< [ 32: 32](R/W) When set, no MSI-X interrupts will be sent to this vector. */
        uint64_t data                  : 32; /**< [ 31:  0](R/W) Data to use for MSI-X delivery of this vector. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 32; /**< [ 31:  0](R/W) Data to use for MSI-X delivery of this vector. */
        uint64_t mask                  : 1;  /**< [ 32: 32](R/W) When set, no MSI-X interrupts will be sent to this vector. */
        uint64_t reserved_33_63        : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_msix_vecx_ctl_s cn; */
};
typedef union cavm_pemx_msix_vecx_ctl cavm_pemx_msix_vecx_ctl_t;

static inline uint64_t CAVM_PEMX_MSIX_VECX_CTL(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_MSIX_VECX_CTL(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=5) && (b<=9)))
        return 0x8e0f00000008ll + 0x1000000000ll * ((a) & 0x7) + 0x10ll * ((b) & 0xf);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=5) && (b<=9)))
        return 0x8e0f00000008ll + 0x1000000000ll * ((a) & 0x7) + 0x10ll * ((b) & 0xf);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=1) && (b<=9)))
        return 0x8e0f00000008ll + 0x1000000000ll * ((a) & 0x1) + 0x10ll * ((b) & 0xf);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=1) && (b<=9)))
        return 0x8e0f00000008ll + 0x1000000000ll * ((a) & 0x1) + 0x10ll * ((b) & 0xf);
    __cavm_csr_fatal("PEMX_MSIX_VECX_CTL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_MSIX_VECX_CTL(a,b) cavm_pemx_msix_vecx_ctl_t
#define bustype_CAVM_PEMX_MSIX_VECX_CTL(a,b) CSR_TYPE_NCB
#define basename_CAVM_PEMX_MSIX_VECX_CTL(a,b) "PEMX_MSIX_VECX_CTL"
#define device_bar_CAVM_PEMX_MSIX_VECX_CTL(a,b) 0x4 /* PF_BAR4 */
#define busnum_CAVM_PEMX_MSIX_VECX_CTL(a,b) (a)
#define arguments_CAVM_PEMX_MSIX_VECX_CTL(a,b) (a),(b),-1,-1

/**
 * Register (NCB) pem#_ncbi_ctl
 *
 * PEM Inbound NCBI Control Register
 * This register contains control bits for memory accesses targeting the NCBI bus.
 * This register is ignored when PEM()_EBUS_CTL[PF_BAR*_SEL] is set.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 */
union cavm_pemx_ncbi_ctl
{
    uint64_t u;
    struct cavm_pemx_ncbi_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_21_63        : 43;
        uint64_t bige                  : 1;  /**< [ 20: 20](R/W) Atomics sent on NCBI will be marked as big endian.  If the link partner is
                                                                 big-endian and the processors are big-endian, this allows exchange of big-endian
                                                                 atomics without byte swapping. */
        uint64_t reserved_11_19        : 9;
        uint64_t clken_force           : 1;  /**< [ 10: 10](R/W) Force clock enable on NCBI bus to always enabled. For diagnostic use only. */
        uint64_t ntlp_ro_dis           : 1;  /**< [  9:  9](R/W) Relaxed ordering disable for non-posted TLPs. Will force relaxed ordering bit off when
                                                                 non-posted TLPs are forwarded to IOB over NCBI. */
        uint64_t ctlp_ro_dis           : 1;  /**< [  8:  8](R/W) Relaxed ordering disable for completion TLPs. Will force relaxed ordering bit off when
                                                                 completion TLPs are forwarded to IOB over NCBI. */
        uint64_t ptlp_ro_dis           : 1;  /**< [  7:  7](R/W) Relaxed ordering disable for posted TLPs. Will force relaxed ordering bit off when posted
                                                                 TLPs are forwarded to IOB over NCBI. */
        uint64_t reserved_3_6          : 4;
        uint64_t ld_cmd                : 2;  /**< [  2:  1](R/W) When PEM issues a load command over NCBI to the LLC that is to be cached, this field
                                                                 selects the type of load command to use. Un-cached loads will use LDT:
                                                                 0x0 = LDD.
                                                                 0x1 = LDI.
                                                                 0x2 = LDE.
                                                                 0x3 = LDY. */
        uint64_t wait_com              : 1;  /**< [  0:  0](R/W) Wait for commit. For diagnostic use only.

                                                                 When set, replaces the default automatic store-store ordering with a more
                                                                 conservative and lower performing rule. This causes the PEM to wait for a store
                                                                 done from the NCB before sending additional stores to the NCB from the MAC. The
                                                                 PEM requests a commit on the last store if more than one STORE operation is
                                                                 required on NCBI. */
#else /* Word 0 - Little Endian */
        uint64_t wait_com              : 1;  /**< [  0:  0](R/W) Wait for commit. For diagnostic use only.

                                                                 When set, replaces the default automatic store-store ordering with a more
                                                                 conservative and lower performing rule. This causes the PEM to wait for a store
                                                                 done from the NCB before sending additional stores to the NCB from the MAC. The
                                                                 PEM requests a commit on the last store if more than one STORE operation is
                                                                 required on NCBI. */
        uint64_t ld_cmd                : 2;  /**< [  2:  1](R/W) When PEM issues a load command over NCBI to the LLC that is to be cached, this field
                                                                 selects the type of load command to use. Un-cached loads will use LDT:
                                                                 0x0 = LDD.
                                                                 0x1 = LDI.
                                                                 0x2 = LDE.
                                                                 0x3 = LDY. */
        uint64_t reserved_3_6          : 4;
        uint64_t ptlp_ro_dis           : 1;  /**< [  7:  7](R/W) Relaxed ordering disable for posted TLPs. Will force relaxed ordering bit off when posted
                                                                 TLPs are forwarded to IOB over NCBI. */
        uint64_t ctlp_ro_dis           : 1;  /**< [  8:  8](R/W) Relaxed ordering disable for completion TLPs. Will force relaxed ordering bit off when
                                                                 completion TLPs are forwarded to IOB over NCBI. */
        uint64_t ntlp_ro_dis           : 1;  /**< [  9:  9](R/W) Relaxed ordering disable for non-posted TLPs. Will force relaxed ordering bit off when
                                                                 non-posted TLPs are forwarded to IOB over NCBI. */
        uint64_t clken_force           : 1;  /**< [ 10: 10](R/W) Force clock enable on NCBI bus to always enabled. For diagnostic use only. */
        uint64_t reserved_11_19        : 9;
        uint64_t bige                  : 1;  /**< [ 20: 20](R/W) Atomics sent on NCBI will be marked as big endian.  If the link partner is
                                                                 big-endian and the processors are big-endian, this allows exchange of big-endian
                                                                 atomics without byte swapping. */
        uint64_t reserved_21_63        : 43;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemx_ncbi_ctl_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_21_63        : 43;
        uint64_t bige                  : 1;  /**< [ 20: 20](R/W) Atomics sent on NCBI will be marked as big endian.  If the link partner is
                                                                 big-endian and the processors are big-endian, this allows exchange of big-endian
                                                                 atomics without byte swapping. */
        uint64_t reserved_11_19        : 9;
        uint64_t clken_force           : 1;  /**< [ 10: 10](R/W) Force clock enable on NCBI bus to always enabled. For diagnostic use only. */
        uint64_t ntlp_ro_dis           : 1;  /**< [  9:  9](R/W) Relaxed ordering disable for non-posted TLPs. Will force relaxed ordering bit off when
                                                                 non-posted TLPs are forwarded to IOB over NCBI. */
        uint64_t ctlp_ro_dis           : 1;  /**< [  8:  8](R/W) Relaxed ordering disable for completion TLPs. Will force relaxed ordering bit off when
                                                                 completion TLPs are forwarded to IOB over NCBI. */
        uint64_t ptlp_ro_dis           : 1;  /**< [  7:  7](R/W) Relaxed ordering disable for posted TLPs. Will force relaxed ordering bit off when posted
                                                                 TLPs are forwarded to IOB over NCBI. */
        uint64_t reserved_5_6          : 2;
        uint64_t reserved_4            : 1;
        uint64_t reserved_3            : 1;
        uint64_t ld_cmd                : 2;  /**< [  2:  1](R/W) When PEM issues a load command over NCBI to the LLC that is to be cached, this field
                                                                 selects the type of load command to use. Un-cached loads will use LDT:
                                                                 0x0 = LDD.
                                                                 0x1 = LDI.
                                                                 0x2 = LDE.
                                                                 0x3 = LDY. */
        uint64_t wait_com              : 1;  /**< [  0:  0](R/W) Wait for commit. For diagnostic use only.

                                                                 When set, replaces the default automatic store-store ordering with a more
                                                                 conservative and lower performing rule. This causes the PEM to wait for a store
                                                                 done from the NCB before sending additional stores to the NCB from the MAC. The
                                                                 PEM requests a commit on the last store if more than one STORE operation is
                                                                 required on NCBI. */
#else /* Word 0 - Little Endian */
        uint64_t wait_com              : 1;  /**< [  0:  0](R/W) Wait for commit. For diagnostic use only.

                                                                 When set, replaces the default automatic store-store ordering with a more
                                                                 conservative and lower performing rule. This causes the PEM to wait for a store
                                                                 done from the NCB before sending additional stores to the NCB from the MAC. The
                                                                 PEM requests a commit on the last store if more than one STORE operation is
                                                                 required on NCBI. */
        uint64_t ld_cmd                : 2;  /**< [  2:  1](R/W) When PEM issues a load command over NCBI to the LLC that is to be cached, this field
                                                                 selects the type of load command to use. Un-cached loads will use LDT:
                                                                 0x0 = LDD.
                                                                 0x1 = LDI.
                                                                 0x2 = LDE.
                                                                 0x3 = LDY. */
        uint64_t reserved_3            : 1;
        uint64_t reserved_4            : 1;
        uint64_t reserved_5_6          : 2;
        uint64_t ptlp_ro_dis           : 1;  /**< [  7:  7](R/W) Relaxed ordering disable for posted TLPs. Will force relaxed ordering bit off when posted
                                                                 TLPs are forwarded to IOB over NCBI. */
        uint64_t ctlp_ro_dis           : 1;  /**< [  8:  8](R/W) Relaxed ordering disable for completion TLPs. Will force relaxed ordering bit off when
                                                                 completion TLPs are forwarded to IOB over NCBI. */
        uint64_t ntlp_ro_dis           : 1;  /**< [  9:  9](R/W) Relaxed ordering disable for non-posted TLPs. Will force relaxed ordering bit off when
                                                                 non-posted TLPs are forwarded to IOB over NCBI. */
        uint64_t clken_force           : 1;  /**< [ 10: 10](R/W) Force clock enable on NCBI bus to always enabled. For diagnostic use only. */
        uint64_t reserved_11_19        : 9;
        uint64_t bige                  : 1;  /**< [ 20: 20](R/W) Atomics sent on NCBI will be marked as big endian.  If the link partner is
                                                                 big-endian and the processors are big-endian, this allows exchange of big-endian
                                                                 atomics without byte swapping. */
        uint64_t reserved_21_63        : 43;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemx_ncbi_ctl cavm_pemx_ncbi_ctl_t;

static inline uint64_t CAVM_PEMX_NCBI_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_NCBI_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8e0000000178ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x8e0000000178ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8e0000000178ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8e0000000178ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("PEMX_NCBI_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_NCBI_CTL(a) cavm_pemx_ncbi_ctl_t
#define bustype_CAVM_PEMX_NCBI_CTL(a) CSR_TYPE_NCB
#define basename_CAVM_PEMX_NCBI_CTL(a) "PEMX_NCBI_CTL"
#define device_bar_CAVM_PEMX_NCBI_CTL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_NCBI_CTL(a) (a)
#define arguments_CAVM_PEMX_NCBI_CTL(a) (a),-1,-1,-1

/**
 * Register (NCB) pem#_ncbi_tlp_credits
 *
 * PEM NCB Inbound TLP Credits Register
 * This register specifies the number of credits for use in moving TLPs. When this register is
 * written, the credit values are reset to the register value. This register is for diagnostic
 * use only, and should only be written when PEM()_CTL_STATUS[LNK_ENB] is clear.
 *
 * This register is accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on MAC reset.
 */
union cavm_pemx_ncbi_tlp_credits
{
    uint64_t u;
    struct cavm_pemx_ncbi_tlp_credits_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t ncbi_cpl              : 11; /**< [ 31: 21](R/W) TLP 32 B credits for completion TLPs in the PEMs NCBI buffers.
                                                                 Legal values are 0x9 to 0x40. */
        uint64_t ncbi_np               : 10; /**< [ 20: 11](R/W) TLP headers for non-posted TLPs in the PEMs NCBI buffers.
                                                                 Legal values are 0x20 to 0x100. */
        uint64_t ncbi_p                : 11; /**< [ 10:  0](R/W) TLP 32 B credits for posted TLPs in the PEMs NCBI buffers.
                                                                 Legal values are 0x9 to 0x40. */
#else /* Word 0 - Little Endian */
        uint64_t ncbi_p                : 11; /**< [ 10:  0](R/W) TLP 32 B credits for posted TLPs in the PEMs NCBI buffers.
                                                                 Legal values are 0x9 to 0x40. */
        uint64_t ncbi_np               : 10; /**< [ 20: 11](R/W) TLP headers for non-posted TLPs in the PEMs NCBI buffers.
                                                                 Legal values are 0x20 to 0x100. */
        uint64_t ncbi_cpl              : 11; /**< [ 31: 21](R/W) TLP 32 B credits for completion TLPs in the PEMs NCBI buffers.
                                                                 Legal values are 0x9 to 0x40. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_ncbi_tlp_credits_s cn; */
};
typedef union cavm_pemx_ncbi_tlp_credits cavm_pemx_ncbi_tlp_credits_t;

static inline uint64_t CAVM_PEMX_NCBI_TLP_CREDITS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_NCBI_TLP_CREDITS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8e0000000030ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x8e0000000030ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8e0000000030ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8e0000000030ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("PEMX_NCBI_TLP_CREDITS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_NCBI_TLP_CREDITS(a) cavm_pemx_ncbi_tlp_credits_t
#define bustype_CAVM_PEMX_NCBI_TLP_CREDITS(a) CSR_TYPE_NCB
#define basename_CAVM_PEMX_NCBI_TLP_CREDITS(a) "PEMX_NCBI_TLP_CREDITS"
#define device_bar_CAVM_PEMX_NCBI_TLP_CREDITS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_NCBI_TLP_CREDITS(a) (a)
#define arguments_CAVM_PEMX_NCBI_TLP_CREDITS(a) (a),-1,-1,-1

/**
 * Register (NCB) pem#_ncbo_fifo_status
 *
 * PEM NCBO Offloading FIFO Status Register
 * This register contains status about the PEM NCBO offloading FIFOs.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 */
union cavm_pemx_ncbo_fifo_status
{
    uint64_t u;
    struct cavm_pemx_ncbo_fifo_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t csr_volume            : 8;  /**< [ 23: 16](RO/H) Reports the number of valid entries currently held in the NCBO CSR offloading
                                                                 FIFO. Each entry represents an NCBO-based CSR access and the value read can
                                                                 range from 0x0 to a maximum of 128 which would represent completely full.
                                                                 For diagnostic use only. */
        uint64_t reserved_15           : 1;
        uint64_t n_volume              : 7;  /**< [ 14:  8](RO/H) Reports the number of valid entries currently held in the NCBO nonposted
                                                                 offloading FIFO. Each entry represents a beat of the NCBO bus related to a
                                                                 nonposted operation and the value read can range from 0x0 to a maximum of 64
                                                                 which would represent completely full.
                                                                 For diagnostic use only. */
        uint64_t p_volume              : 8;  /**< [  7:  0](RO/H) Reports the number of valid entries currently held in the NCBO posted offloading
                                                                 FIFO. Each entry represents a beat of the NCBO bus related to a memory store and
                                                                 the value read can range from 0x0 to a maximum of 128 which would represent
                                                                 completely full.
                                                                 For diagnostic use only. */
#else /* Word 0 - Little Endian */
        uint64_t p_volume              : 8;  /**< [  7:  0](RO/H) Reports the number of valid entries currently held in the NCBO posted offloading
                                                                 FIFO. Each entry represents a beat of the NCBO bus related to a memory store and
                                                                 the value read can range from 0x0 to a maximum of 128 which would represent
                                                                 completely full.
                                                                 For diagnostic use only. */
        uint64_t n_volume              : 7;  /**< [ 14:  8](RO/H) Reports the number of valid entries currently held in the NCBO nonposted
                                                                 offloading FIFO. Each entry represents a beat of the NCBO bus related to a
                                                                 nonposted operation and the value read can range from 0x0 to a maximum of 64
                                                                 which would represent completely full.
                                                                 For diagnostic use only. */
        uint64_t reserved_15           : 1;
        uint64_t csr_volume            : 8;  /**< [ 23: 16](RO/H) Reports the number of valid entries currently held in the NCBO CSR offloading
                                                                 FIFO. Each entry represents an NCBO-based CSR access and the value read can
                                                                 range from 0x0 to a maximum of 128 which would represent completely full.
                                                                 For diagnostic use only. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_ncbo_fifo_status_s cn; */
};
typedef union cavm_pemx_ncbo_fifo_status cavm_pemx_ncbo_fifo_status_t;

static inline uint64_t CAVM_PEMX_NCBO_FIFO_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_NCBO_FIFO_STATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8e0000000138ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x8e0000000138ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8e0000000138ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8e0000000138ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("PEMX_NCBO_FIFO_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_NCBO_FIFO_STATUS(a) cavm_pemx_ncbo_fifo_status_t
#define bustype_CAVM_PEMX_NCBO_FIFO_STATUS(a) CSR_TYPE_NCB
#define basename_CAVM_PEMX_NCBO_FIFO_STATUS(a) "PEMX_NCBO_FIFO_STATUS"
#define device_bar_CAVM_PEMX_NCBO_FIFO_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_NCBO_FIFO_STATUS(a) (a)
#define arguments_CAVM_PEMX_NCBO_FIFO_STATUS(a) (a),-1,-1,-1

/**
 * Register (NCB) pem#_ob_cmerge_limit
 *
 * PEM Outbound Completion Merge Limit Register
 * This register provides a mechanism to artificially limit the number of active
 * outbound completion merging stations to assist in code coverage.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 */
union cavm_pemx_ob_cmerge_limit
{
    uint64_t u;
    struct cavm_pemx_ob_cmerge_limit_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t limit                 : 4;  /**< [  3:  0](R/W) Limit outbound completion merging stations. */
#else /* Word 0 - Little Endian */
        uint64_t limit                 : 4;  /**< [  3:  0](R/W) Limit outbound completion merging stations. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_ob_cmerge_limit_s cn; */
};
typedef union cavm_pemx_ob_cmerge_limit cavm_pemx_ob_cmerge_limit_t;

static inline uint64_t CAVM_PEMX_OB_CMERGE_LIMIT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_OB_CMERGE_LIMIT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8e0000000330ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x8e0000000330ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8e0000000330ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8e0000000330ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("PEMX_OB_CMERGE_LIMIT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_OB_CMERGE_LIMIT(a) cavm_pemx_ob_cmerge_limit_t
#define bustype_CAVM_PEMX_OB_CMERGE_LIMIT(a) CSR_TYPE_NCB
#define basename_CAVM_PEMX_OB_CMERGE_LIMIT(a) "PEMX_OB_CMERGE_LIMIT"
#define device_bar_CAVM_PEMX_OB_CMERGE_LIMIT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_OB_CMERGE_LIMIT(a) (a)
#define arguments_CAVM_PEMX_OB_CMERGE_LIMIT(a) (a),-1,-1,-1

/**
 * Register (NCB) pem#_ob_cpl_fifo_status
 *
 * PEM Outbound Completion FIFO Status Register
 * This register contains status about the PEM Outbound Completion FIFOs.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 */
union cavm_pemx_ob_cpl_fifo_status
{
    uint64_t u;
    struct cavm_pemx_ob_cpl_fifo_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_26_63        : 38;
        uint64_t ncbo_c_volume         : 10; /**< [ 25: 16](RO/H) Reports the number of valid entries currently held in the NCBO completion
                                                                 FIFO. Each entry represents a 256-bit beat of data.  The value read can
                                                                 range from 0x0 to a maximum of 512 which would represent completely full.
                                                                 For diagnostic use only. */
        uint64_t ebo_c_volume          : 8;  /**< [ 15:  8](RO/H) Reports the number of valid entries currently held in the EBO completion
                                                                 FIFO which is downstream and separate from the EBO completion offloading
                                                                 FIFO.  Each entry represents a 256-bit beat of data.  The value read can
                                                                 range from 0x0 to a maximum of 128 which would represent completely full.
                                                                 For diagnostic use only. */
        uint64_t pspi_c_volume         : 8;  /**< [  7:  0](RO/H) Reports the number of valid entries currently held in the PSPI completion
                                                                 FIFO. Each entry represents a 256-bit beat of data.  The value read can
                                                                 range from 0x0 to a maximum of 128 which would represent completely full.
                                                                 For diagnostic use only. */
#else /* Word 0 - Little Endian */
        uint64_t pspi_c_volume         : 8;  /**< [  7:  0](RO/H) Reports the number of valid entries currently held in the PSPI completion
                                                                 FIFO. Each entry represents a 256-bit beat of data.  The value read can
                                                                 range from 0x0 to a maximum of 128 which would represent completely full.
                                                                 For diagnostic use only. */
        uint64_t ebo_c_volume          : 8;  /**< [ 15:  8](RO/H) Reports the number of valid entries currently held in the EBO completion
                                                                 FIFO which is downstream and separate from the EBO completion offloading
                                                                 FIFO.  Each entry represents a 256-bit beat of data.  The value read can
                                                                 range from 0x0 to a maximum of 128 which would represent completely full.
                                                                 For diagnostic use only. */
        uint64_t ncbo_c_volume         : 10; /**< [ 25: 16](RO/H) Reports the number of valid entries currently held in the NCBO completion
                                                                 FIFO. Each entry represents a 256-bit beat of data.  The value read can
                                                                 range from 0x0 to a maximum of 512 which would represent completely full.
                                                                 For diagnostic use only. */
        uint64_t reserved_26_63        : 38;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_ob_cpl_fifo_status_s cn; */
};
typedef union cavm_pemx_ob_cpl_fifo_status cavm_pemx_ob_cpl_fifo_status_t;

static inline uint64_t CAVM_PEMX_OB_CPL_FIFO_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_OB_CPL_FIFO_STATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8e0000000170ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x8e0000000170ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8e0000000170ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8e0000000170ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("PEMX_OB_CPL_FIFO_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_OB_CPL_FIFO_STATUS(a) cavm_pemx_ob_cpl_fifo_status_t
#define bustype_CAVM_PEMX_OB_CPL_FIFO_STATUS(a) CSR_TYPE_NCB
#define basename_CAVM_PEMX_OB_CPL_FIFO_STATUS(a) "PEMX_OB_CPL_FIFO_STATUS"
#define device_bar_CAVM_PEMX_OB_CPL_FIFO_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_OB_CPL_FIFO_STATUS(a) (a)
#define arguments_CAVM_PEMX_OB_CPL_FIFO_STATUS(a) (a),-1,-1,-1

/**
 * Register (NCB) pem#_ob_latency_pc#
 *
 * PEM Outbound Latency Time Registers
 * This register resets on core domain reset.  It measures the time portion
 * of the information set needed by software to calculate average outbound
 * read latency originating from the target bus.
 * Index {a} represents the internal target bus and is enumerated by PEM_PERF_BUS_E.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union cavm_pemx_ob_latency_pcx
{
    uint64_t u;
    struct cavm_pemx_ob_latency_pcx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t latency               : 64; /**< [ 63:  0](R/W/H) Number of outbound read requests currently in flight originating from the target bus and
                                                                 measured within PEMM from start to first completion sent back internally incremented every 10ns. */
#else /* Word 0 - Little Endian */
        uint64_t latency               : 64; /**< [ 63:  0](R/W/H) Number of outbound read requests currently in flight originating from the target bus and
                                                                 measured within PEMM from start to first completion sent back internally incremented every 10ns. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_ob_latency_pcx_s cn; */
};
typedef union cavm_pemx_ob_latency_pcx cavm_pemx_ob_latency_pcx_t;

static inline uint64_t CAVM_PEMX_OB_LATENCY_PCX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_OB_LATENCY_PCX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=5) && (b<=1)))
        return 0x8e0000005300ll + 0x1000000000ll * ((a) & 0x7) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("PEMX_OB_LATENCY_PCX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_OB_LATENCY_PCX(a,b) cavm_pemx_ob_latency_pcx_t
#define bustype_CAVM_PEMX_OB_LATENCY_PCX(a,b) CSR_TYPE_NCB
#define basename_CAVM_PEMX_OB_LATENCY_PCX(a,b) "PEMX_OB_LATENCY_PCX"
#define device_bar_CAVM_PEMX_OB_LATENCY_PCX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_OB_LATENCY_PCX(a,b) (a)
#define arguments_CAVM_PEMX_OB_LATENCY_PCX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) pem#_ob_reads_pc#
 *
 * PEM Outbound Read Count Registers
 * This register resets on core domain reset.  It measures the count portion
 * of the information set needed by software to calculate average outbound
 * read latency originating from the target bus.
 * Index {a} represents the internal target bus and is enumerated by PEM_PERF_BUS_E.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union cavm_pemx_ob_reads_pcx
{
    uint64_t u;
    struct cavm_pemx_ob_reads_pcx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reads                 : 64; /**< [ 63:  0](R/W/H) Number of outbound read requests.  Software can calculate the average outbound
                                                                 read latency with the following calculation:
                                                                   * Average latency = (PEM()_OB_LATENCY_PC[LATENCY] / PEM()_OB_READS_PC[READS]) * 10 ns */
#else /* Word 0 - Little Endian */
        uint64_t reads                 : 64; /**< [ 63:  0](R/W/H) Number of outbound read requests.  Software can calculate the average outbound
                                                                 read latency with the following calculation:
                                                                   * Average latency = (PEM()_OB_LATENCY_PC[LATENCY] / PEM()_OB_READS_PC[READS]) * 10 ns */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_ob_reads_pcx_s cn; */
};
typedef union cavm_pemx_ob_reads_pcx cavm_pemx_ob_reads_pcx_t;

static inline uint64_t CAVM_PEMX_OB_READS_PCX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_OB_READS_PCX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=5) && (b<=1)))
        return 0x8e0000005320ll + 0x1000000000ll * ((a) & 0x7) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("PEMX_OB_READS_PCX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_OB_READS_PCX(a,b) cavm_pemx_ob_reads_pcx_t
#define bustype_CAVM_PEMX_OB_READS_PCX(a,b) CSR_TYPE_NCB
#define basename_CAVM_PEMX_OB_READS_PCX(a,b) "PEMX_OB_READS_PCX"
#define device_bar_CAVM_PEMX_OB_READS_PCX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_OB_READS_PCX(a,b) (a)
#define arguments_CAVM_PEMX_OB_READS_PCX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) pem#_ob_tlp#_dwords_pc#
 *
 * PEM Outbound TLP DWORDS Registers
 * This register resets on core domain reset.  Otherwise, it continuously accumulates
 * the number of DWORDS (including header overhead) in every outbound TLP received
 * from the target bus and headed to PCIe.
 * Index {a} represents the TLP type and is enumerated by PEM_PERF_TLP_TYPE_E.
 * Index {b} represents the internal target bus and is enumerated by PEM_PERF_BUS_E.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union cavm_pemx_ob_tlpx_dwords_pcx
{
    uint64_t u;
    struct cavm_pemx_ob_tlpx_dwords_pcx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t tlp_dwords            : 64; /**< [ 63:  0](R/W/H) TLP DWORD Count */
#else /* Word 0 - Little Endian */
        uint64_t tlp_dwords            : 64; /**< [ 63:  0](R/W/H) TLP DWORD Count */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_ob_tlpx_dwords_pcx_s cn; */
};
typedef union cavm_pemx_ob_tlpx_dwords_pcx cavm_pemx_ob_tlpx_dwords_pcx_t;

static inline uint64_t CAVM_PEMX_OB_TLPX_DWORDS_PCX(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_OB_TLPX_DWORDS_PCX(uint64_t a, uint64_t b, uint64_t c)
{
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=5) && (b<=2) && (c<=1)))
        return 0x8e0000005280ll + 0x1000000000ll * ((a) & 0x7) + 0x20ll * ((b) & 0x3) + 8ll * ((c) & 0x1);
    __cavm_csr_fatal("PEMX_OB_TLPX_DWORDS_PCX", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_PEMX_OB_TLPX_DWORDS_PCX(a,b,c) cavm_pemx_ob_tlpx_dwords_pcx_t
#define bustype_CAVM_PEMX_OB_TLPX_DWORDS_PCX(a,b,c) CSR_TYPE_NCB
#define basename_CAVM_PEMX_OB_TLPX_DWORDS_PCX(a,b,c) "PEMX_OB_TLPX_DWORDS_PCX"
#define device_bar_CAVM_PEMX_OB_TLPX_DWORDS_PCX(a,b,c) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_OB_TLPX_DWORDS_PCX(a,b,c) (a)
#define arguments_CAVM_PEMX_OB_TLPX_DWORDS_PCX(a,b,c) (a),(b),(c),-1

/**
 * Register (NCB) pem#_ob_tlp#_merges_pc
 *
 * PEM NCB Outbound Merge Count Register
 * This register resets on core domain reset.  Otherwise, it continuously tracks the
 * number of outbound transactions from NCBO that are part of a merging sequence.
 * Currently only NCBO transactions can be merged.
 * Index {a} represents the TLP type and is enumerated by PEM_PERF_TLP_TYPE_E.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union cavm_pemx_ob_tlpx_merges_pc
{
    uint64_t u;
    struct cavm_pemx_ob_tlpx_merges_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Transactions included in merging sequences */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Transactions included in merging sequences */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_ob_tlpx_merges_pc_s cn; */
};
typedef union cavm_pemx_ob_tlpx_merges_pc cavm_pemx_ob_tlpx_merges_pc_t;

static inline uint64_t CAVM_PEMX_OB_TLPX_MERGES_PC(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_OB_TLPX_MERGES_PC(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=5) && (b<=2)))
        return 0x8e0000005380ll + 0x1000000000ll * ((a) & 0x7) + 0x20ll * ((b) & 0x3);
    __cavm_csr_fatal("PEMX_OB_TLPX_MERGES_PC", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_OB_TLPX_MERGES_PC(a,b) cavm_pemx_ob_tlpx_merges_pc_t
#define bustype_CAVM_PEMX_OB_TLPX_MERGES_PC(a,b) CSR_TYPE_NCB
#define basename_CAVM_PEMX_OB_TLPX_MERGES_PC(a,b) "PEMX_OB_TLPX_MERGES_PC"
#define device_bar_CAVM_PEMX_OB_TLPX_MERGES_PC(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_OB_TLPX_MERGES_PC(a,b) (a)
#define arguments_CAVM_PEMX_OB_TLPX_MERGES_PC(a,b) (a),(b),-1,-1

/**
 * Register (NCB) pem#_ob_tlp#_pc#
 *
 * PEM Outbound TLP Count Registers
 * This register resets on core domain reset.  Otherwise, it continuously increments
 * on every outbound TLP received from the target bus and headed to PCIe.
 * Index {a} represents the TLP type and is enumerated by PEM_PERF_TLP_TYPE_E.
 * Index {b} represents the internal target bus and is enumerated by PEM_PERF_BUS_E.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union cavm_pemx_ob_tlpx_pcx
{
    uint64_t u;
    struct cavm_pemx_ob_tlpx_pcx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) TLP Count */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) TLP Count */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_ob_tlpx_pcx_s cn; */
};
typedef union cavm_pemx_ob_tlpx_pcx cavm_pemx_ob_tlpx_pcx_t;

static inline uint64_t CAVM_PEMX_OB_TLPX_PCX(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_OB_TLPX_PCX(uint64_t a, uint64_t b, uint64_t c)
{
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=5) && (b<=2) && (c<=1)))
        return 0x8e0000005200ll + 0x1000000000ll * ((a) & 0x7) + 0x20ll * ((b) & 0x3) + 8ll * ((c) & 0x1);
    __cavm_csr_fatal("PEMX_OB_TLPX_PCX", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_PEMX_OB_TLPX_PCX(a,b,c) cavm_pemx_ob_tlpx_pcx_t
#define bustype_CAVM_PEMX_OB_TLPX_PCX(a,b,c) CSR_TYPE_NCB
#define basename_CAVM_PEMX_OB_TLPX_PCX(a,b,c) "PEMX_OB_TLPX_PCX"
#define device_bar_CAVM_PEMX_OB_TLPX_PCX(a,b,c) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_OB_TLPX_PCX(a,b,c) (a)
#define arguments_CAVM_PEMX_OB_TLPX_PCX(a,b,c) (a),(b),(c),-1

/**
 * Register (NCB) pem#_on
 *
 * PEM On Status Register
 * This register indicates that PEM is configured and ready.
 *
 * This register is accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on cold reset.
 */
union cavm_pemx_on
{
    uint64_t u;
    struct cavm_pemx_on_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_3_63         : 61;
        uint64_t aclr                  : 1;  /**< [  2:  2](R/W) When this bit is set, [PEMON] will auto-clear on core domain reset, in addition
                                                                 to being reset on cold reset. [ACLR] should be 0 in an EP configuration where
                                                                 it is desired to leave the link operational while resetting the chip core.
                                                                 It should be 1 in root complex mode. */
        uint64_t pemoor                : 1;  /**< [  1:  1](RO/H) Indication to software that the PEM has been taken out of MAC reset and it
                                                                 is safe to configure CSRs marked as being on MAC reset, as well as all PCIe configuration
                                                                 registers. */
        uint64_t pemon                 : 1;  /**< [  0:  0](R/W/H) Indication to the centralized reset block that the PEM is out of domain reset,
                                                                 and PEM()_CLK_EN and PEM()_CFG have been configured. Setting this bit will allow the
                                                                 configured PIPE to be taken out of reset and MAC reset to be deasserted.
                                                                 This bit is set as part of the initialization/boot sequence for PCIe. */
#else /* Word 0 - Little Endian */
        uint64_t pemon                 : 1;  /**< [  0:  0](R/W/H) Indication to the centralized reset block that the PEM is out of domain reset,
                                                                 and PEM()_CLK_EN and PEM()_CFG have been configured. Setting this bit will allow the
                                                                 configured PIPE to be taken out of reset and MAC reset to be deasserted.
                                                                 This bit is set as part of the initialization/boot sequence for PCIe. */
        uint64_t pemoor                : 1;  /**< [  1:  1](RO/H) Indication to software that the PEM has been taken out of MAC reset and it
                                                                 is safe to configure CSRs marked as being on MAC reset, as well as all PCIe configuration
                                                                 registers. */
        uint64_t aclr                  : 1;  /**< [  2:  2](R/W) When this bit is set, [PEMON] will auto-clear on core domain reset, in addition
                                                                 to being reset on cold reset. [ACLR] should be 0 in an EP configuration where
                                                                 it is desired to leave the link operational while resetting the chip core.
                                                                 It should be 1 in root complex mode. */
        uint64_t reserved_3_63         : 61;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_on_s cn; */
};
typedef union cavm_pemx_on cavm_pemx_on_t;

static inline uint64_t CAVM_PEMX_ON(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_ON(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8e00000000e0ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x8e00000000e0ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8e00000000e0ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8e00000000e0ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("PEMX_ON", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_ON(a) cavm_pemx_on_t
#define bustype_CAVM_PEMX_ON(a) CSR_TYPE_NCB
#define basename_CAVM_PEMX_ON(a) "PEMX_ON"
#define device_bar_CAVM_PEMX_ON(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_ON(a) (a)
#define arguments_CAVM_PEMX_ON(a) (a),-1,-1,-1

/**
 * Register (NCB) pem#_p2n_bar0_start
 *
 * PEM PCIe RC BAR0 Start Register
 * This register specifies the starting address for memory requests that are to be forwarded to
 * NCB/EBUS in RC mode. In EP mode, the standard PCIe config space BAR registers are used, and
 * this register is ignored.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 */
union cavm_pemx_p2n_bar0_start
{
    uint64_t u;
    struct cavm_pemx_p2n_bar0_start_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t addr                  : 48; /**< [ 63: 16](R/W) The starting address of the BAR0 address space, sized as configured by the
                                                                 PEM()_BAR_CTL[BAR0_SIZ] which defaults to ADDR\<63:23\> and used to determine a RC BAR0 hit. */
        uint64_t reserved_0_15         : 16;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_15         : 16;
        uint64_t addr                  : 48; /**< [ 63: 16](R/W) The starting address of the BAR0 address space, sized as configured by the
                                                                 PEM()_BAR_CTL[BAR0_SIZ] which defaults to ADDR\<63:23\> and used to determine a RC BAR0 hit. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_p2n_bar0_start_s cn; */
};
typedef union cavm_pemx_p2n_bar0_start cavm_pemx_p2n_bar0_start_t;

static inline uint64_t CAVM_PEMX_P2N_BAR0_START(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_P2N_BAR0_START(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8e0000000158ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x8e0000000158ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8e0000000158ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8e0000000158ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("PEMX_P2N_BAR0_START", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_P2N_BAR0_START(a) cavm_pemx_p2n_bar0_start_t
#define bustype_CAVM_PEMX_P2N_BAR0_START(a) CSR_TYPE_NCB
#define basename_CAVM_PEMX_P2N_BAR0_START(a) "PEMX_P2N_BAR0_START"
#define device_bar_CAVM_PEMX_P2N_BAR0_START(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_P2N_BAR0_START(a) (a)
#define arguments_CAVM_PEMX_P2N_BAR0_START(a) (a),-1,-1,-1

/**
 * Register (NCB) pem#_p2n_bar2_start
 *
 * PEM PCIe RC BAR2 Start Register
 * This register specifies the starting address for memory requests that are to be forwarded to
 * NCB/EBUS in RC mode. In EP mode, the standard PCIe config space BAR registers are used, and
 * this register is ignored.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 */
union cavm_pemx_p2n_bar2_start
{
    uint64_t u;
    struct cavm_pemx_p2n_bar2_start_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t addr                  : 44; /**< [ 63: 20](R/W) The starting address of the BAR2 address space, sized as configured by the
                                                                 PEM()_BAR_CTL[BAR2_SIZ] which defaults to ADDR\<63:50\> and used to determine a RC BAR2 hit. */
        uint64_t reserved_0_19         : 20;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_19         : 20;
        uint64_t addr                  : 44; /**< [ 63: 20](R/W) The starting address of the BAR2 address space, sized as configured by the
                                                                 PEM()_BAR_CTL[BAR2_SIZ] which defaults to ADDR\<63:50\> and used to determine a RC BAR2 hit. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_p2n_bar2_start_s cn; */
};
typedef union cavm_pemx_p2n_bar2_start cavm_pemx_p2n_bar2_start_t;

static inline uint64_t CAVM_PEMX_P2N_BAR2_START(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_P2N_BAR2_START(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8e0000000150ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x8e0000000150ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8e0000000150ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8e0000000150ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("PEMX_P2N_BAR2_START", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_P2N_BAR2_START(a) cavm_pemx_p2n_bar2_start_t
#define bustype_CAVM_PEMX_P2N_BAR2_START(a) CSR_TYPE_NCB
#define basename_CAVM_PEMX_P2N_BAR2_START(a) "PEMX_P2N_BAR2_START"
#define device_bar_CAVM_PEMX_P2N_BAR2_START(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_P2N_BAR2_START(a) (a)
#define arguments_CAVM_PEMX_P2N_BAR2_START(a) (a),-1,-1,-1

/**
 * Register (NCB) pem#_p2n_bar4_start
 *
 * PEM PCIe RC BAR4 Start Register
 * This register specifies the starting address for memory requests that are to be forwarded to
 * NCB/EBUS in RC mode. In EP mode, the standard PCIe config space BAR registers are used, and
 * this register is ignored.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 */
union cavm_pemx_p2n_bar4_start
{
    uint64_t u;
    struct cavm_pemx_p2n_bar4_start_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t addr                  : 38; /**< [ 63: 26](R/W) The starting address of BAR4 address space. */
        uint64_t reserved_0_25         : 26;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_25         : 26;
        uint64_t addr                  : 38; /**< [ 63: 26](R/W) The starting address of BAR4 address space. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_p2n_bar4_start_s cn; */
};
typedef union cavm_pemx_p2n_bar4_start cavm_pemx_p2n_bar4_start_t;

static inline uint64_t CAVM_PEMX_P2N_BAR4_START(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_P2N_BAR4_START(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8e0000000148ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x8e0000000148ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8e0000000148ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8e0000000148ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("PEMX_P2N_BAR4_START", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_P2N_BAR4_START(a) cavm_pemx_p2n_bar4_start_t
#define bustype_CAVM_PEMX_P2N_BAR4_START(a) CSR_TYPE_NCB
#define basename_CAVM_PEMX_P2N_BAR4_START(a) "PEMX_P2N_BAR4_START"
#define device_bar_CAVM_PEMX_P2N_BAR4_START(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_P2N_BAR4_START(a) (a)
#define arguments_CAVM_PEMX_P2N_BAR4_START(a) (a),-1,-1,-1

/**
 * Register (NCB) pem#_perr_status
 *
 * PEM Parity Error Status Register
 * This register contains indications of parity errors detected inside PEM.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 */
union cavm_pemx_perr_status
{
    uint64_t u;
    struct cavm_pemx_perr_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t mac_rx_perr           : 1;  /**< [  6:  6](R/W1C/H) Set when the MAC core has detected a parity error in the receive datapath.
                                                                 Corresponds to app_parity_errs[2] output from MAC core. */
        uint64_t mac_txbe_perr         : 1;  /**< [  5:  5](R/W1C/H) Set when the MAC core has detected a parity error in the back end of the transmit
                                                                 datapath.
                                                                 Corresponds to app_parity_errs[1] output from MAC core. */
        uint64_t mac_txfe_perr         : 1;  /**< [  4:  4](R/W1C/H) Set when the MAC core has detected a parity error in the front end of the transmit
                                                                 datapath.
                                                                 Corresponds to app_parity_errs[0] output from MAC core. */
        uint64_t rasdp                 : 1;  /**< [  3:  3](R/W1C/H) Set when the MAC core has entered RASDP mode due to an uncorrectable error. */
        uint64_t dbe                   : 1;  /**< [  2:  2](R/W1C/H) Set when an uncorrectable (double-bit) error was detected in a RAM inside PEM. */
        uint64_t rx_perr               : 1;  /**< [  1:  1](R/W1C/H) Set when a ECC error was detected on the receive (TRGT1) datapath
                                                                 (PEM_CTL_STATUS2[TRGT1_ECC_COR_DIS] needs to be clear). */
        uint64_t tx_perr               : 1;  /**< [  0:  0](R/W1C/H) Set when a parity error was detected in the transmit datapath (only applies to traffic
                                                                 originating on EBO). */
#else /* Word 0 - Little Endian */
        uint64_t tx_perr               : 1;  /**< [  0:  0](R/W1C/H) Set when a parity error was detected in the transmit datapath (only applies to traffic
                                                                 originating on EBO). */
        uint64_t rx_perr               : 1;  /**< [  1:  1](R/W1C/H) Set when a ECC error was detected on the receive (TRGT1) datapath
                                                                 (PEM_CTL_STATUS2[TRGT1_ECC_COR_DIS] needs to be clear). */
        uint64_t dbe                   : 1;  /**< [  2:  2](R/W1C/H) Set when an uncorrectable (double-bit) error was detected in a RAM inside PEM. */
        uint64_t rasdp                 : 1;  /**< [  3:  3](R/W1C/H) Set when the MAC core has entered RASDP mode due to an uncorrectable error. */
        uint64_t mac_txfe_perr         : 1;  /**< [  4:  4](R/W1C/H) Set when the MAC core has detected a parity error in the front end of the transmit
                                                                 datapath.
                                                                 Corresponds to app_parity_errs[0] output from MAC core. */
        uint64_t mac_txbe_perr         : 1;  /**< [  5:  5](R/W1C/H) Set when the MAC core has detected a parity error in the back end of the transmit
                                                                 datapath.
                                                                 Corresponds to app_parity_errs[1] output from MAC core. */
        uint64_t mac_rx_perr           : 1;  /**< [  6:  6](R/W1C/H) Set when the MAC core has detected a parity error in the receive datapath.
                                                                 Corresponds to app_parity_errs[2] output from MAC core. */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_perr_status_s cn; */
};
typedef union cavm_pemx_perr_status cavm_pemx_perr_status_t;

static inline uint64_t CAVM_PEMX_PERR_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_PERR_STATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8e00000001d8ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x8e00000001d8ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8e00000001d8ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8e00000001d8ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("PEMX_PERR_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_PERR_STATUS(a) cavm_pemx_perr_status_t
#define bustype_CAVM_PEMX_PERR_STATUS(a) CSR_TYPE_NCB
#define basename_CAVM_PEMX_PERR_STATUS(a) "PEMX_PERR_STATUS"
#define device_bar_CAVM_PEMX_PERR_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_PERR_STATUS(a) (a)
#define arguments_CAVM_PEMX_PERR_STATUS(a) (a),-1,-1,-1

/**
 * Register (NCB) pem#_pf#_clr_flr_req
 *
 * PEM PF Clear FLR Request Register
 * This register provides clear request for PCIe PF function level reset (FLR).
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on MAC reset.
 */
union cavm_pemx_pfx_clr_flr_req
{
    uint64_t u;
    struct cavm_pemx_pfx_clr_flr_req_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t clr                   : 1;  /**< [  0:  0](R/W1C/H) When written with a 1, will cause hardware to clear the FLR condition.
                                                                 This bit always reads as a zero. */
#else /* Word 0 - Little Endian */
        uint64_t clr                   : 1;  /**< [  0:  0](R/W1C/H) When written with a 1, will cause hardware to clear the FLR condition.
                                                                 This bit always reads as a zero. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_pfx_clr_flr_req_s cn; */
};
typedef union cavm_pemx_pfx_clr_flr_req cavm_pemx_pfx_clr_flr_req_t;

static inline uint64_t CAVM_PEMX_PFX_CLR_FLR_REQ(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_PFX_CLR_FLR_REQ(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=5) && (b<=1)))
        return 0x8e0000000a00ll + 0x1000000000ll * ((a) & 0x7) + 8ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=5) && (b<=1)))
        return 0x8e0000000a00ll + 0x1000000000ll * ((a) & 0x7) + 8ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=1) && (b<=1)))
        return 0x8e0000000a00ll + 0x1000000000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=1) && (b<=1)))
        return 0x8e0000000a00ll + 0x1000000000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("PEMX_PFX_CLR_FLR_REQ", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_PFX_CLR_FLR_REQ(a,b) cavm_pemx_pfx_clr_flr_req_t
#define bustype_CAVM_PEMX_PFX_CLR_FLR_REQ(a,b) CSR_TYPE_NCB
#define basename_CAVM_PEMX_PFX_CLR_FLR_REQ(a,b) "PEMX_PFX_CLR_FLR_REQ"
#define device_bar_CAVM_PEMX_PFX_CLR_FLR_REQ(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_PFX_CLR_FLR_REQ(a,b) (a)
#define arguments_CAVM_PEMX_PFX_CLR_FLR_REQ(a,b) (a),(b),-1,-1

/**
 * Register (NCB) pem#_pf#_cs#_pfcfg#
 *
 * PEM PCIe Direct Config PF Registers
 * This register is used to modify PF configuration space. It can only be accessed
 * using 32-bit instructions (either [DATA_LO] or [DATA_HI] but not both
 * simultaneously.)  Although an unsupported 64-bit access attempt will have
 * unpredictable results, it will not cause a hang situation.
 *
 * Index {c} is the register number, which is the configuration offset divided by 0x2;
 * e.g. index 0 is either for PCIERC_CMD/PCIEEP_CMD (DATA_HI) or PCIERC_ID/PCIEEP_ID (DATA_LO).
 *
 * This register is accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on MAC reset.
 */
union cavm_pemx_pfx_csx_pfcfgx
{
    uint64_t u;
    struct cavm_pemx_pfx_csx_pfcfgx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data_hi               : 32; /**< [ 63: 32](R/W/H) Data bits to write to high config register, or bits read from selected config register. */
        uint64_t data_lo               : 32; /**< [ 31:  0](R/W/H) Data bits to write to low config register, or bits read from selected config register. */
#else /* Word 0 - Little Endian */
        uint64_t data_lo               : 32; /**< [ 31:  0](R/W/H) Data bits to write to low config register, or bits read from selected config register. */
        uint64_t data_hi               : 32; /**< [ 63: 32](R/W/H) Data bits to write to high config register, or bits read from selected config register. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_pfx_csx_pfcfgx_s cn; */
};
typedef union cavm_pemx_pfx_csx_pfcfgx cavm_pemx_pfx_csx_pfcfgx_t;

static inline uint64_t CAVM_PEMX_PFX_CSX_PFCFGX(uint64_t a, uint64_t b, uint64_t c, uint64_t d) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_PFX_CSX_PFCFGX(uint64_t a, uint64_t b, uint64_t c, uint64_t d)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=5) && (b<=1) && (c<=1) && (d<=511)))
        return 0x8e0000008000ll + 0x1000000000ll * ((a) & 0x7) + 0x40000ll * ((b) & 0x1) + 0x10000ll * ((c) & 0x1) + 8ll * ((d) & 0x1ff);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=5) && (b<=1) && (c<=1) && (d<=511)))
        return 0x8e0000008000ll + 0x1000000000ll * ((a) & 0x7) + 0x40000ll * ((b) & 0x1) + 0x10000ll * ((c) & 0x1) + 8ll * ((d) & 0x1ff);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=1) && (b<=1) && (c<=1) && (d<=511)))
        return 0x8e0000008000ll + 0x1000000000ll * ((a) & 0x1) + 0x40000ll * ((b) & 0x1) + 0x10000ll * ((c) & 0x1) + 8ll * ((d) & 0x1ff);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=1) && (b<=1) && (c<=1) && (d<=511)))
        return 0x8e0000008000ll + 0x1000000000ll * ((a) & 0x1) + 0x40000ll * ((b) & 0x1) + 0x10000ll * ((c) & 0x1) + 8ll * ((d) & 0x1ff);
    __cavm_csr_fatal("PEMX_PFX_CSX_PFCFGX", 4, a, b, c, d, 0, 0);
}

#define typedef_CAVM_PEMX_PFX_CSX_PFCFGX(a,b,c,d) cavm_pemx_pfx_csx_pfcfgx_t
#define bustype_CAVM_PEMX_PFX_CSX_PFCFGX(a,b,c,d) CSR_TYPE_NCB
#define basename_CAVM_PEMX_PFX_CSX_PFCFGX(a,b,c,d) "PEMX_PFX_CSX_PFCFGX"
#define device_bar_CAVM_PEMX_PFX_CSX_PFCFGX(a,b,c,d) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_PFX_CSX_PFCFGX(a,b,c,d) (a)
#define arguments_CAVM_PEMX_PFX_CSX_PFCFGX(a,b,c,d) (a),(b),(c),(d)

/**
 * Register (NCB) pem#_pf#_ctl_status
 *
 * PEM PF Control Status Register
 * This is a general PF control and status register of the PEM.
 * There is a register for each PF.
 *
 * This register is accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on MAC reset.
 */
union cavm_pemx_pfx_ctl_status
{
    uint64_t u;
    struct cavm_pemx_pfx_ctl_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t ob_p_cmd              : 1;  /**< [  4:  4](WO) Wake up.  Writing to a one to set this bit creates a pulse
                                                                 in the application to wake up the PMC state machine
                                                                 from a D1, D2 or D3 power state. This bit will always
                                                                 read a zero.
                                                                 Upon wake-up, the controller sends a PM_PME message. EP mode. */
        uint64_t pf_flr_en             : 1;  /**< [  3:  3](R/W) When a PF-FLR occurs, an indication will be sent to the central reset controller.
                                                                 The reset controller can decide whether to reset the chip core based on this indication.
                                                                 These bits control which PFs can notify of the reset controller.  If the corresponding
                                                                 bit is set, the PF-FLR will be forwarded to the reset controller. */
        uint64_t pm_dst                : 3;  /**< [  2:  0](RO/H) Current power management DSTATE.  There are 3 bits of
                                                                 D-state for each function.
                                                                 0x0 = D0.
                                                                 0x1 = D1.
                                                                 0x2 = D2.
                                                                 0x3 = D3.
                                                                 0x4 = Uninitialized.
                                                                 0x5 - 0x7 = Reserved. */
#else /* Word 0 - Little Endian */
        uint64_t pm_dst                : 3;  /**< [  2:  0](RO/H) Current power management DSTATE.  There are 3 bits of
                                                                 D-state for each function.
                                                                 0x0 = D0.
                                                                 0x1 = D1.
                                                                 0x2 = D2.
                                                                 0x3 = D3.
                                                                 0x4 = Uninitialized.
                                                                 0x5 - 0x7 = Reserved. */
        uint64_t pf_flr_en             : 1;  /**< [  3:  3](R/W) When a PF-FLR occurs, an indication will be sent to the central reset controller.
                                                                 The reset controller can decide whether to reset the chip core based on this indication.
                                                                 These bits control which PFs can notify of the reset controller.  If the corresponding
                                                                 bit is set, the PF-FLR will be forwarded to the reset controller. */
        uint64_t ob_p_cmd              : 1;  /**< [  4:  4](WO) Wake up.  Writing to a one to set this bit creates a pulse
                                                                 in the application to wake up the PMC state machine
                                                                 from a D1, D2 or D3 power state. This bit will always
                                                                 read a zero.
                                                                 Upon wake-up, the controller sends a PM_PME message. EP mode. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_pfx_ctl_status_s cn; */
};
typedef union cavm_pemx_pfx_ctl_status cavm_pemx_pfx_ctl_status_t;

static inline uint64_t CAVM_PEMX_PFX_CTL_STATUS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_PFX_CTL_STATUS(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=5) && (b<=1)))
        return 0x8e0000000800ll + 0x1000000000ll * ((a) & 0x7) + 8ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=5) && (b<=1)))
        return 0x8e0000000800ll + 0x1000000000ll * ((a) & 0x7) + 8ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=1) && (b<=1)))
        return 0x8e0000000800ll + 0x1000000000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=1) && (b<=1)))
        return 0x8e0000000800ll + 0x1000000000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("PEMX_PFX_CTL_STATUS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_PFX_CTL_STATUS(a,b) cavm_pemx_pfx_ctl_status_t
#define bustype_CAVM_PEMX_PFX_CTL_STATUS(a,b) CSR_TYPE_NCB
#define basename_CAVM_PEMX_PFX_CTL_STATUS(a,b) "PEMX_PFX_CTL_STATUS"
#define device_bar_CAVM_PEMX_PFX_CTL_STATUS(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_PFX_CTL_STATUS(a,b) (a)
#define arguments_CAVM_PEMX_PFX_CTL_STATUS(a,b) (a),(b),-1,-1

/**
 * Register (NCB) pem#_pf#_vf#_vfcfg#
 *
 * PEM PCIe Direct Config VF Registers
 * This register is used to modify VF configuration space. It can only be accessed
 * using 32-bit instructions (either [DATA_LO] or [DATA_HI] but not both
 * simultaneously.)  Although an unsupported 64-bit access attempt will have
 * unpredictable results, it will not cause a hang situation.
 *
 * Index {c} is the register number, which is the configuration offset divided by 0x2;
 * e.g. index 0 is either for PCIEEPVF_CMD (DATA_HI) or PCIEEPVF_ID (DATA_LO).
 *
 * This register is accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on MAC reset.
 */
union cavm_pemx_pfx_vfx_vfcfgx
{
    uint64_t u;
    struct cavm_pemx_pfx_vfx_vfcfgx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data_hi               : 32; /**< [ 63: 32](R/W/H) Data bits to write to high config register, or bits read from selected config register. */
        uint64_t data_lo               : 32; /**< [ 31:  0](R/W/H) Data bits to write to low config register, or bits read from selected config register. */
#else /* Word 0 - Little Endian */
        uint64_t data_lo               : 32; /**< [ 31:  0](R/W/H) Data bits to write to low config register, or bits read from selected config register. */
        uint64_t data_hi               : 32; /**< [ 63: 32](R/W/H) Data bits to write to high config register, or bits read from selected config register. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_pfx_vfx_vfcfgx_s cn; */
};
typedef union cavm_pemx_pfx_vfx_vfcfgx cavm_pemx_pfx_vfx_vfcfgx_t;

static inline uint64_t CAVM_PEMX_PFX_VFX_VFCFGX(uint64_t a, uint64_t b, uint64_t c, uint64_t d) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_PFX_VFX_VFCFGX(uint64_t a, uint64_t b, uint64_t c, uint64_t d)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=5) && (b<=1) && (c<=63) && (d<=511)))
        return 0x8e0000028000ll + 0x1000000000ll * ((a) & 0x7) + 0x40000ll * ((b) & 0x1) + 0x400000ll * ((c) & 0x3f) + 8ll * ((d) & 0x1ff);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=5) && (b<=1) && (c<=63) && (d<=511)))
        return 0x8e0000028000ll + 0x1000000000ll * ((a) & 0x7) + 0x40000ll * ((b) & 0x1) + 0x400000ll * ((c) & 0x3f) + 8ll * ((d) & 0x1ff);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=1) && (b<=1) && (c<=63) && (d<=511)))
        return 0x8e0000028000ll + 0x1000000000ll * ((a) & 0x1) + 0x40000ll * ((b) & 0x1) + 0x400000ll * ((c) & 0x3f) + 8ll * ((d) & 0x1ff);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=1) && (b<=1) && (c<=63) && (d<=511)))
        return 0x8e0000028000ll + 0x1000000000ll * ((a) & 0x1) + 0x40000ll * ((b) & 0x1) + 0x400000ll * ((c) & 0x3f) + 8ll * ((d) & 0x1ff);
    __cavm_csr_fatal("PEMX_PFX_VFX_VFCFGX", 4, a, b, c, d, 0, 0);
}

#define typedef_CAVM_PEMX_PFX_VFX_VFCFGX(a,b,c,d) cavm_pemx_pfx_vfx_vfcfgx_t
#define bustype_CAVM_PEMX_PFX_VFX_VFCFGX(a,b,c,d) CSR_TYPE_NCB
#define basename_CAVM_PEMX_PFX_VFX_VFCFGX(a,b,c,d) "PEMX_PFX_VFX_VFCFGX"
#define device_bar_CAVM_PEMX_PFX_VFX_VFCFGX(a,b,c,d) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_PFX_VFX_VFCFGX(a,b,c,d) (a)
#define arguments_CAVM_PEMX_PFX_VFX_VFCFGX(a,b,c,d) (a),(b),(c),(d)

/**
 * Register (NCB) pem#_pspi_tlp_credits
 *
 * PEM NCB Inbound TLP Credits Register
 * This register specifies the number of credits for use in moving TLPs. When this register is
 * written, the credit values are reset to the register value. This register is for diagnostic
 * use only, and should only be written when PEM()_CTL_STATUS[LNK_ENB] is clear.
 *
 * This register is accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on MAC reset.
 */
union cavm_pemx_pspi_tlp_credits
{
    uint64_t u;
    struct cavm_pemx_pspi_tlp_credits_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_21_63        : 43;
        uint64_t pspi_np               : 10; /**< [ 20: 11](R/W) TLP headers for non-posted TLPs in the PEMs inbound PSPI buffers.
                                                                 Legal values are 0x01 to 0x20. */
        uint64_t reserved_0_10         : 11;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_10         : 11;
        uint64_t pspi_np               : 10; /**< [ 20: 11](R/W) TLP headers for non-posted TLPs in the PEMs inbound PSPI buffers.
                                                                 Legal values are 0x01 to 0x20. */
        uint64_t reserved_21_63        : 43;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_pspi_tlp_credits_s cn; */
};
typedef union cavm_pemx_pspi_tlp_credits cavm_pemx_pspi_tlp_credits_t;

static inline uint64_t CAVM_PEMX_PSPI_TLP_CREDITS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_PSPI_TLP_CREDITS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8e0000000038ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x8e0000000038ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8e0000000038ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8e0000000038ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("PEMX_PSPI_TLP_CREDITS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_PSPI_TLP_CREDITS(a) cavm_pemx_pspi_tlp_credits_t
#define bustype_CAVM_PEMX_PSPI_TLP_CREDITS(a) CSR_TYPE_NCB
#define basename_CAVM_PEMX_PSPI_TLP_CREDITS(a) "PEMX_PSPI_TLP_CREDITS"
#define device_bar_CAVM_PEMX_PSPI_TLP_CREDITS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_PSPI_TLP_CREDITS(a) (a)
#define arguments_CAVM_PEMX_PSPI_TLP_CREDITS(a) (a),-1,-1,-1

/**
 * Register (NCB) pem#_ptm_ctl
 *
 * PEM Miscellaneous Control Register
 * This register contains precision timer control bits.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on cold reset.
 */
union cavm_pemx_ptm_ctl
{
    uint64_t u;
    struct cavm_pemx_ptm_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_12_63        : 52;
        uint64_t ptm_auto_update       : 1;  /**< [ 11: 11](R/W) When set, indicates the Mac should update the PTM requester context
                                                                 automatically every 10 ms. */
        uint64_t ptm_lcl_cap           : 1;  /**< [ 10: 10](WO) When set, causes a hardware pulse to update the following:

                                                                 The local time (PCIEEP_PTM_REQ_LOCALL & PCIEEP_PTM_REQ_LOCALM) is
                                                                 captured in PEM()_PTM_LCL_TIME.

                                                                 The master time master time (as selected by [PTM_MSTR_SEL]) is captured
                                                                 in PEM()_PTM_MAS_TIME.

                                                                 This bit will always read as a zero. */
        uint64_t ptm_auto_load         : 1;  /**< [  9:  9](R/W) Precision time management auto load to (PCIERC/PCIEEP_PTM_REQ_LOCALL and
                                                                 PCIERC/PCIEEP_PTM_REQ_LOCALM) will be loaded.
                                                                 0 = Software.
                                                                 1 = Hardware auto-load when in L0. */
        uint64_t ptm_mstr_sel          : 1;  /**< [  8:  8](R/W) Determines for precision time management protocol which master clock input to use.
                                                                 0 = Master clock from PTP timestamp.
                                                                 1 = Master clock from GTI_CC_CNTCV. */
        uint64_t ptm_mstr_adj          : 8;  /**< [  7:  0](R/W) This value (in ns) is added to the selected ([PTM_MSTR_SEL]) master time input
                                                                 to account for insertion (including clock domain crossing) delays, before
                                                                 being presented to the MAC.

                                                                 To calculate an accurate delay:

                                                                   [PTM_MSTR_ADJ] = 2 sclk cycles + channel_flop_delay + 3.5 core_clk cycles.

                                                                   channel_flop_delay (PEM2 and PEM3 when [PTM_MSTR_SEL] is 0) = 6 sclk cycles
                                                                   channel_flop_delay (All other cases) = 5 sclk cycles

                                                                 The default value assumes the MAC is operating at GEN1, and there are 2 channel
                                                                 flops on the master time inputs. */
#else /* Word 0 - Little Endian */
        uint64_t ptm_mstr_adj          : 8;  /**< [  7:  0](R/W) This value (in ns) is added to the selected ([PTM_MSTR_SEL]) master time input
                                                                 to account for insertion (including clock domain crossing) delays, before
                                                                 being presented to the MAC.

                                                                 To calculate an accurate delay:

                                                                   [PTM_MSTR_ADJ] = 2 sclk cycles + channel_flop_delay + 3.5 core_clk cycles.

                                                                   channel_flop_delay (PEM2 and PEM3 when [PTM_MSTR_SEL] is 0) = 6 sclk cycles
                                                                   channel_flop_delay (All other cases) = 5 sclk cycles

                                                                 The default value assumes the MAC is operating at GEN1, and there are 2 channel
                                                                 flops on the master time inputs. */
        uint64_t ptm_mstr_sel          : 1;  /**< [  8:  8](R/W) Determines for precision time management protocol which master clock input to use.
                                                                 0 = Master clock from PTP timestamp.
                                                                 1 = Master clock from GTI_CC_CNTCV. */
        uint64_t ptm_auto_load         : 1;  /**< [  9:  9](R/W) Precision time management auto load to (PCIERC/PCIEEP_PTM_REQ_LOCALL and
                                                                 PCIERC/PCIEEP_PTM_REQ_LOCALM) will be loaded.
                                                                 0 = Software.
                                                                 1 = Hardware auto-load when in L0. */
        uint64_t ptm_lcl_cap           : 1;  /**< [ 10: 10](WO) When set, causes a hardware pulse to update the following:

                                                                 The local time (PCIEEP_PTM_REQ_LOCALL & PCIEEP_PTM_REQ_LOCALM) is
                                                                 captured in PEM()_PTM_LCL_TIME.

                                                                 The master time master time (as selected by [PTM_MSTR_SEL]) is captured
                                                                 in PEM()_PTM_MAS_TIME.

                                                                 This bit will always read as a zero. */
        uint64_t ptm_auto_update       : 1;  /**< [ 11: 11](R/W) When set, indicates the Mac should update the PTM requester context
                                                                 automatically every 10 ms. */
        uint64_t reserved_12_63        : 52;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_ptm_ctl_s cn; */
};
typedef union cavm_pemx_ptm_ctl cavm_pemx_ptm_ctl_t;

static inline uint64_t CAVM_PEMX_PTM_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_PTM_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8e0000000098ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x8e0000000098ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8e0000000098ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8e0000000098ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("PEMX_PTM_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_PTM_CTL(a) cavm_pemx_ptm_ctl_t
#define bustype_CAVM_PEMX_PTM_CTL(a) CSR_TYPE_NCB
#define basename_CAVM_PEMX_PTM_CTL(a) "PEMX_PTM_CTL"
#define device_bar_CAVM_PEMX_PTM_CTL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_PTM_CTL(a) (a)
#define arguments_CAVM_PEMX_PTM_CTL(a) (a),-1,-1,-1

/**
 * Register (NCB) pem#_ptm_lcl_time
 *
 * PEM PTM Time Register
 * This register contains the PTM synchronized local time value.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on MAC reset.
 */
union cavm_pemx_ptm_lcl_time
{
    uint64_t u;
    struct cavm_pemx_ptm_lcl_time_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t val                   : 64; /**< [ 63:  0](RO/H) When an external hardware trigger occurs, or CSR bit PEM()_PTM_CTL[PTM_LCL_CAP] is written,
                                                                 the local time as tracked by the precision time management protocol
                                                                 PCIEEP_PTM_REQ_LOCALL & PCIEEP_PTM_REQ_LOCALM) is captured to this register. */
#else /* Word 0 - Little Endian */
        uint64_t val                   : 64; /**< [ 63:  0](RO/H) When an external hardware trigger occurs, or CSR bit PEM()_PTM_CTL[PTM_LCL_CAP] is written,
                                                                 the local time as tracked by the precision time management protocol
                                                                 PCIEEP_PTM_REQ_LOCALL & PCIEEP_PTM_REQ_LOCALM) is captured to this register. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_ptm_lcl_time_s cn; */
};
typedef union cavm_pemx_ptm_lcl_time cavm_pemx_ptm_lcl_time_t;

static inline uint64_t CAVM_PEMX_PTM_LCL_TIME(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_PTM_LCL_TIME(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8e00000000a0ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x8e00000000a0ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8e00000000a0ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8e00000000a0ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("PEMX_PTM_LCL_TIME", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_PTM_LCL_TIME(a) cavm_pemx_ptm_lcl_time_t
#define bustype_CAVM_PEMX_PTM_LCL_TIME(a) CSR_TYPE_NCB
#define basename_CAVM_PEMX_PTM_LCL_TIME(a) "PEMX_PTM_LCL_TIME"
#define device_bar_CAVM_PEMX_PTM_LCL_TIME(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_PTM_LCL_TIME(a) (a)
#define arguments_CAVM_PEMX_PTM_LCL_TIME(a) (a),-1,-1,-1

/**
 * Register (NCB) pem#_ptm_mas_time
 *
 * PEM PTM Time Register
 * This register contains the PTM synchronized local time value.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on MAC reset.
 */
union cavm_pemx_ptm_mas_time
{
    uint64_t u;
    struct cavm_pemx_ptm_mas_time_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t val                   : 64; /**< [ 63:  0](RO/H) When an external hardware trigger occurs, or CSR bit PEM()_PTM_CTL[PTM_LCL_CAP] is written,
                                                                 the master time as selected by PEM()_PTM_CTL[PTM_MSTR_SEL] is captured to this
                                                                 register. */
#else /* Word 0 - Little Endian */
        uint64_t val                   : 64; /**< [ 63:  0](RO/H) When an external hardware trigger occurs, or CSR bit PEM()_PTM_CTL[PTM_LCL_CAP] is written,
                                                                 the master time as selected by PEM()_PTM_CTL[PTM_MSTR_SEL] is captured to this
                                                                 register. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_ptm_mas_time_s cn; */
};
typedef union cavm_pemx_ptm_mas_time cavm_pemx_ptm_mas_time_t;

static inline uint64_t CAVM_PEMX_PTM_MAS_TIME(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_PTM_MAS_TIME(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8e00000000a8ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x8e00000000a8ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8e00000000a8ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8e00000000a8ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("PEMX_PTM_MAS_TIME", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_PTM_MAS_TIME(a) cavm_pemx_ptm_mas_time_t
#define bustype_CAVM_PEMX_PTM_MAS_TIME(a) CSR_TYPE_NCB
#define basename_CAVM_PEMX_PTM_MAS_TIME(a) "PEMX_PTM_MAS_TIME"
#define device_bar_CAVM_PEMX_PTM_MAS_TIME(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_PTM_MAS_TIME(a) (a)
#define arguments_CAVM_PEMX_PTM_MAS_TIME(a) (a),-1,-1,-1

/**
 * Register (NCB) pem#_ras_tba_ctl
 *
 * PEM RAS Time Based Analysis Control Register
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on MAC reset.
 */
union cavm_pemx_ras_tba_ctl
{
    uint64_t u;
    struct cavm_pemx_ras_tba_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t tba_ctrl              : 2;  /**< [  1:  0](WO) Controls the start/end of time based analysis (TBA) in the core.  Note that TBA can also
                                                                 be controlled
                                                                 by setting the contents of PCIERC_RAS_TBA_CTL, and that will also
                                                                 affect the contents of PCIERC_RAS_TBA_CTL[TIMER_START].
                                                                 0x0 = No action.
                                                                 0x1 = Start time based analysis.
                                                                 0x2 = End time based analysis.
                                                                       Only used if PCIERC_RAS_TBA_CTL[TBASE_DUR_SEL] is set to manual control,
                                                                       otherwise it is ignored.
                                                                 0x3 = Reserved. */
#else /* Word 0 - Little Endian */
        uint64_t tba_ctrl              : 2;  /**< [  1:  0](WO) Controls the start/end of time based analysis (TBA) in the core.  Note that TBA can also
                                                                 be controlled
                                                                 by setting the contents of PCIERC_RAS_TBA_CTL, and that will also
                                                                 affect the contents of PCIERC_RAS_TBA_CTL[TIMER_START].
                                                                 0x0 = No action.
                                                                 0x1 = Start time based analysis.
                                                                 0x2 = End time based analysis.
                                                                       Only used if PCIERC_RAS_TBA_CTL[TBASE_DUR_SEL] is set to manual control,
                                                                       otherwise it is ignored.
                                                                 0x3 = Reserved. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_ras_tba_ctl_s cn; */
};
typedef union cavm_pemx_ras_tba_ctl cavm_pemx_ras_tba_ctl_t;

static inline uint64_t CAVM_PEMX_RAS_TBA_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_RAS_TBA_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8e0000000068ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x8e0000000068ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8e0000000068ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8e0000000068ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("PEMX_RAS_TBA_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_RAS_TBA_CTL(a) cavm_pemx_ras_tba_ctl_t
#define bustype_CAVM_PEMX_RAS_TBA_CTL(a) CSR_TYPE_NCB
#define basename_CAVM_PEMX_RAS_TBA_CTL(a) "PEMX_RAS_TBA_CTL"
#define device_bar_CAVM_PEMX_RAS_TBA_CTL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_RAS_TBA_CTL(a) (a)
#define arguments_CAVM_PEMX_RAS_TBA_CTL(a) (a),-1,-1,-1

/**
 * Register (NCB) pem#_reads_pc
 *
 * PEM Read Count Register
 * This register contains read count for debugging purposes.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 */
union cavm_pemx_reads_pc
{
    uint64_t u;
    struct cavm_pemx_reads_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reads                 : 64; /**< [ 63:  0](R/W/H) Total number of NCBO or EBO reads from remote memory since latency tracking logic was
                                                                 enabled.  PEM()_LATENCY_PC_CTL[EBO_SEL] controls which outbound bus has its reads
                                                                 latency tracked.  This register can only be written by software when
                                                                 PEM()_LATENCY_PC_CTL[ACTIVE] is clear.  Software can calculate the average read
                                                                 latency through PEM and external PCIe interface with the following calculation:
                                                                   * Average Latency = PEM()_LATENCY_PC[LATENCY] / PEM()_READS_PC[READS] * 10 ns
                                                                 This calculation can be done at any time while PEM()_LATENCY_PC_CTL[ACTIVE] is set,
                                                                 but will only be fully accurate by following the control flow outlined in the
                                                                 PEM()_LATENCY_PC_CTL[ACTIVE] description. */
#else /* Word 0 - Little Endian */
        uint64_t reads                 : 64; /**< [ 63:  0](R/W/H) Total number of NCBO or EBO reads from remote memory since latency tracking logic was
                                                                 enabled.  PEM()_LATENCY_PC_CTL[EBO_SEL] controls which outbound bus has its reads
                                                                 latency tracked.  This register can only be written by software when
                                                                 PEM()_LATENCY_PC_CTL[ACTIVE] is clear.  Software can calculate the average read
                                                                 latency through PEM and external PCIe interface with the following calculation:
                                                                   * Average Latency = PEM()_LATENCY_PC[LATENCY] / PEM()_READS_PC[READS] * 10 ns
                                                                 This calculation can be done at any time while PEM()_LATENCY_PC_CTL[ACTIVE] is set,
                                                                 but will only be fully accurate by following the control flow outlined in the
                                                                 PEM()_LATENCY_PC_CTL[ACTIVE] description. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_reads_pc_s cn; */
};
typedef union cavm_pemx_reads_pc cavm_pemx_reads_pc_t;

static inline uint64_t CAVM_PEMX_READS_PC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_READS_PC(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8e0000000120ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8e0000000120ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8e0000000120ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("PEMX_READS_PC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_READS_PC(a) cavm_pemx_reads_pc_t
#define bustype_CAVM_PEMX_READS_PC(a) CSR_TYPE_NCB
#define basename_CAVM_PEMX_READS_PC(a) "PEMX_READS_PC"
#define device_bar_CAVM_PEMX_READS_PC(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_READS_PC(a) (a)
#define arguments_CAVM_PEMX_READS_PC(a) (a),-1,-1,-1

/**
 * Register (NCB) pem#_reg_ctl
 *
 * PEM CSR Control Register
 * This register contains control for register accesses.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 */
union cavm_pemx_reg_ctl
{
    uint64_t u;
    struct cavm_pemx_reg_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t gia_timeout           : 6;  /**< [  5:  0](R/W) GIA timeout (2^[GIA_TIMEOUT] clock cycles). Timeout for MSI-X commits. When zero, wait
                                                                 for commits is disabled. */
#else /* Word 0 - Little Endian */
        uint64_t gia_timeout           : 6;  /**< [  5:  0](R/W) GIA timeout (2^[GIA_TIMEOUT] clock cycles). Timeout for MSI-X commits. When zero, wait
                                                                 for commits is disabled. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_reg_ctl_s cn; */
};
typedef union cavm_pemx_reg_ctl cavm_pemx_reg_ctl_t;

static inline uint64_t CAVM_PEMX_REG_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_REG_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8e0000000060ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x8e0000000060ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8e0000000060ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8e0000000060ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("PEMX_REG_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_REG_CTL(a) cavm_pemx_reg_ctl_t
#define bustype_CAVM_PEMX_REG_CTL(a) CSR_TYPE_NCB
#define basename_CAVM_PEMX_REG_CTL(a) "PEMX_REG_CTL"
#define device_bar_CAVM_PEMX_REG_CTL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_REG_CTL(a) (a)
#define arguments_CAVM_PEMX_REG_CTL(a) (a),-1,-1,-1

/**
 * Register (NCB) pem#_reg_norm#_acc
 *
 * PEM Normal Region Access Registers
 * These registers contains address index and control bits for access to memory from cores.
 * Indexed using NCBO address\<38:31\>.
 *
 * See PEM()_CONST_ACC.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union cavm_pemx_reg_normx_acc
{
    uint64_t u;
    struct cavm_pemx_reg_normx_acc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_60_63        : 4;
        uint64_t vf                    : 6;  /**< [ 59: 54](R/W) Virtual function number associated with this access. In RC mode, this
                                                                 field must be zero. */
        uint64_t vf_active             : 1;  /**< [ 53: 53](R/W) Access is to virtual function if set.  Access is to physical function if
                                                                 clear. */
        uint64_t reserved_47_52        : 6;
        uint64_t pf                    : 1;  /**< [ 46: 46](R/W) Physical function number associated with this access. In RC mode, this
                                                                 field must be zero. */
        uint64_t ctype                 : 2;  /**< [ 45: 44](R/W) The command type to be generated:
                                                                 0x0 = PCI memory.
                                                                 0x1 = PCI configuration. Only operations that access bytes within a single aligned dword
                                                                 are supported.  Note normally the ECAM would be used in place of this CTYPE.
                                                                 0x2 = PCI I/O.  Only operations that access bytes within a single aligned dword are supported.
                                                                 0x3 = Reserved. */
        uint64_t zero                  : 1;  /**< [ 43: 43](R/W) Causes load operations that are eight bytes or less and stay within a single aligned quadword
                                                                 to become zero-length read operations which will return zeros to the EXEC for all read
                                                                 data.
                                                                 Load operations that do not meet the size/alignment requirements above and have [ZERO] set
                                                                 will have unpredictable behavior. */
        uint64_t wnmerge               : 1;  /**< [ 42: 42](R/W) When set, no write merging (aka write combining) is allowed in this
                                                                 window. Write combining may result in higher performance. Write combining is
                                                                 legal and typically used in endpoints, or embedded applications. Write combining
                                                                 is not technically permitted in standard operating system root complexes, but
                                                                 typically functions correctly. */
        uint64_t rnmerge               : 1;  /**< [ 41: 41](R/W) When set, no read merging (aka read combining) is allowed in this window. Read
                                                                 combining may result in higher performance. Read combining is typically used in
                                                                 endpoints, or embedded applications. Read combining is not typically used in
                                                                 standard operating system root complexes. */
        uint64_t wtype                 : 3;  /**< [ 40: 38](R/W) Write type. ADDRTYPE\<2:0\> for write operations to this region.
                                                                 ADDRTYPE\<0\> is the relaxed-order attribute.
                                                                 ADDRTYPE\<1\> is the no-snoop attribute.
                                                                 ADDRTYPE\<2\> is the id-based ordering attribute. */
        uint64_t rtype                 : 3;  /**< [ 37: 35](R/W) Read type. ADDRTYPE\<2:0\> for read operations to this region.
                                                                 ADDRTYPE\<0\> is the relaxed-order attribute.
                                                                 ADDRTYPE\<1\> is the no-snoop attribute.
                                                                 ADDRTYPE\<2\> is the id-based ordering attribute. */
        uint64_t reserved_33_34        : 2;
        uint64_t ba                    : 33; /**< [ 32:  0](R/W) Bus address. Address bits\<63:31\> for read/write operations that use this region. */
#else /* Word 0 - Little Endian */
        uint64_t ba                    : 33; /**< [ 32:  0](R/W) Bus address. Address bits\<63:31\> for read/write operations that use this region. */
        uint64_t reserved_33_34        : 2;
        uint64_t rtype                 : 3;  /**< [ 37: 35](R/W) Read type. ADDRTYPE\<2:0\> for read operations to this region.
                                                                 ADDRTYPE\<0\> is the relaxed-order attribute.
                                                                 ADDRTYPE\<1\> is the no-snoop attribute.
                                                                 ADDRTYPE\<2\> is the id-based ordering attribute. */
        uint64_t wtype                 : 3;  /**< [ 40: 38](R/W) Write type. ADDRTYPE\<2:0\> for write operations to this region.
                                                                 ADDRTYPE\<0\> is the relaxed-order attribute.
                                                                 ADDRTYPE\<1\> is the no-snoop attribute.
                                                                 ADDRTYPE\<2\> is the id-based ordering attribute. */
        uint64_t rnmerge               : 1;  /**< [ 41: 41](R/W) When set, no read merging (aka read combining) is allowed in this window. Read
                                                                 combining may result in higher performance. Read combining is typically used in
                                                                 endpoints, or embedded applications. Read combining is not typically used in
                                                                 standard operating system root complexes. */
        uint64_t wnmerge               : 1;  /**< [ 42: 42](R/W) When set, no write merging (aka write combining) is allowed in this
                                                                 window. Write combining may result in higher performance. Write combining is
                                                                 legal and typically used in endpoints, or embedded applications. Write combining
                                                                 is not technically permitted in standard operating system root complexes, but
                                                                 typically functions correctly. */
        uint64_t zero                  : 1;  /**< [ 43: 43](R/W) Causes load operations that are eight bytes or less and stay within a single aligned quadword
                                                                 to become zero-length read operations which will return zeros to the EXEC for all read
                                                                 data.
                                                                 Load operations that do not meet the size/alignment requirements above and have [ZERO] set
                                                                 will have unpredictable behavior. */
        uint64_t ctype                 : 2;  /**< [ 45: 44](R/W) The command type to be generated:
                                                                 0x0 = PCI memory.
                                                                 0x1 = PCI configuration. Only operations that access bytes within a single aligned dword
                                                                 are supported.  Note normally the ECAM would be used in place of this CTYPE.
                                                                 0x2 = PCI I/O.  Only operations that access bytes within a single aligned dword are supported.
                                                                 0x3 = Reserved. */
        uint64_t pf                    : 1;  /**< [ 46: 46](R/W) Physical function number associated with this access. In RC mode, this
                                                                 field must be zero. */
        uint64_t reserved_47_52        : 6;
        uint64_t vf_active             : 1;  /**< [ 53: 53](R/W) Access is to virtual function if set.  Access is to physical function if
                                                                 clear. */
        uint64_t vf                    : 6;  /**< [ 59: 54](R/W) Virtual function number associated with this access. In RC mode, this
                                                                 field must be zero. */
        uint64_t reserved_60_63        : 4;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_reg_normx_acc_s cn; */
};
typedef union cavm_pemx_reg_normx_acc cavm_pemx_reg_normx_acc_t;

static inline uint64_t CAVM_PEMX_REG_NORMX_ACC(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_REG_NORMX_ACC(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=5) && (b<=255)))
        return 0x8e0000004000ll + 0x1000000000ll * ((a) & 0x7) + 0x10ll * ((b) & 0xff);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=5) && (b<=255)))
        return 0x8e0000004000ll + 0x1000000000ll * ((a) & 0x7) + 0x10ll * ((b) & 0xff);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=1) && (b<=255)))
        return 0x8e0000004000ll + 0x1000000000ll * ((a) & 0x1) + 0x10ll * ((b) & 0xff);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=1) && (b<=255)))
        return 0x8e0000004000ll + 0x1000000000ll * ((a) & 0x1) + 0x10ll * ((b) & 0xff);
    __cavm_csr_fatal("PEMX_REG_NORMX_ACC", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_REG_NORMX_ACC(a,b) cavm_pemx_reg_normx_acc_t
#define bustype_CAVM_PEMX_REG_NORMX_ACC(a,b) CSR_TYPE_NCB
#define basename_CAVM_PEMX_REG_NORMX_ACC(a,b) "PEMX_REG_NORMX_ACC"
#define device_bar_CAVM_PEMX_REG_NORMX_ACC(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_REG_NORMX_ACC(a,b) (a)
#define arguments_CAVM_PEMX_REG_NORMX_ACC(a,b) (a),(b),-1,-1

/**
 * Register (NCB) pem#_reg_norm#_acc2
 *
 * PEM Normal Region Access 2 Registers
 * See PEM()_CONST_ACC.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union cavm_pemx_reg_normx_acc2
{
    uint64_t u;
    struct cavm_pemx_reg_normx_acc2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_reg_normx_acc2_s cn; */
};
typedef union cavm_pemx_reg_normx_acc2 cavm_pemx_reg_normx_acc2_t;

static inline uint64_t CAVM_PEMX_REG_NORMX_ACC2(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_REG_NORMX_ACC2(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=5) && (b<=255)))
        return 0x8e0000004008ll + 0x1000000000ll * ((a) & 0x7) + 0x10ll * ((b) & 0xff);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=5) && (b<=255)))
        return 0x8e0000004008ll + 0x1000000000ll * ((a) & 0x7) + 0x10ll * ((b) & 0xff);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=1) && (b<=255)))
        return 0x8e0000004008ll + 0x1000000000ll * ((a) & 0x1) + 0x10ll * ((b) & 0xff);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=1) && (b<=255)))
        return 0x8e0000004008ll + 0x1000000000ll * ((a) & 0x1) + 0x10ll * ((b) & 0xff);
    __cavm_csr_fatal("PEMX_REG_NORMX_ACC2", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_REG_NORMX_ACC2(a,b) cavm_pemx_reg_normx_acc2_t
#define bustype_CAVM_PEMX_REG_NORMX_ACC2(a,b) CSR_TYPE_NCB
#define basename_CAVM_PEMX_REG_NORMX_ACC2(a,b) "PEMX_REG_NORMX_ACC2"
#define device_bar_CAVM_PEMX_REG_NORMX_ACC2(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_REG_NORMX_ACC2(a,b) (a)
#define arguments_CAVM_PEMX_REG_NORMX_ACC2(a,b) (a),(b),-1,-1

/**
 * Register (NCB) pem#_rmerge_merged_pc
 *
 * PEM Merge Reads Merged Performance Counter Register
 * This register reports how many reads merged within the outbound read merge unit.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 */
union cavm_pemx_rmerge_merged_pc
{
    uint64_t u;
    struct cavm_pemx_rmerge_merged_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t rmerge_merged         : 64; /**< [ 63:  0](R/W/H) Each NCBO read operation mapped to MEM type by the ACC table that merges with a previous
                                                                 read will increment this count. */
#else /* Word 0 - Little Endian */
        uint64_t rmerge_merged         : 64; /**< [ 63:  0](R/W/H) Each NCBO read operation mapped to MEM type by the ACC table that merges with a previous
                                                                 read will increment this count. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_rmerge_merged_pc_s cn; */
};
typedef union cavm_pemx_rmerge_merged_pc cavm_pemx_rmerge_merged_pc_t;

static inline uint64_t CAVM_PEMX_RMERGE_MERGED_PC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_RMERGE_MERGED_PC(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8e00000001a8ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8e00000001a8ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8e00000001a8ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("PEMX_RMERGE_MERGED_PC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_RMERGE_MERGED_PC(a) cavm_pemx_rmerge_merged_pc_t
#define bustype_CAVM_PEMX_RMERGE_MERGED_PC(a) CSR_TYPE_NCB
#define basename_CAVM_PEMX_RMERGE_MERGED_PC(a) "PEMX_RMERGE_MERGED_PC"
#define device_bar_CAVM_PEMX_RMERGE_MERGED_PC(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_RMERGE_MERGED_PC(a) (a)
#define arguments_CAVM_PEMX_RMERGE_MERGED_PC(a) (a),-1,-1,-1

/**
 * Register (NCB) pem#_rmerge_received_pc
 *
 * PEM Merge Reads Received Performance Counter Register
 * This register reports the number of reads that enter the outbound read merge unit.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 */
union cavm_pemx_rmerge_received_pc
{
    uint64_t u;
    struct cavm_pemx_rmerge_received_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t rmerge_reads          : 64; /**< [ 63:  0](R/W/H) Each NCBO read operation mapped to MEM type by the ACC table will increment this count. */
#else /* Word 0 - Little Endian */
        uint64_t rmerge_reads          : 64; /**< [ 63:  0](R/W/H) Each NCBO read operation mapped to MEM type by the ACC table will increment this count. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_rmerge_received_pc_s cn; */
};
typedef union cavm_pemx_rmerge_received_pc cavm_pemx_rmerge_received_pc_t;

static inline uint64_t CAVM_PEMX_RMERGE_RECEIVED_PC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_RMERGE_RECEIVED_PC(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8e00000001a0ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8e00000001a0ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8e00000001a0ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("PEMX_RMERGE_RECEIVED_PC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_RMERGE_RECEIVED_PC(a) cavm_pemx_rmerge_received_pc_t
#define bustype_CAVM_PEMX_RMERGE_RECEIVED_PC(a) CSR_TYPE_NCB
#define basename_CAVM_PEMX_RMERGE_RECEIVED_PC(a) "PEMX_RMERGE_RECEIVED_PC"
#define device_bar_CAVM_PEMX_RMERGE_RECEIVED_PC(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_RMERGE_RECEIVED_PC(a) (a)
#define arguments_CAVM_PEMX_RMERGE_RECEIVED_PC(a) (a),-1,-1,-1

/**
 * Register (NCB) pem#_rst_cold_state_w1c
 *
 * PEM Interrupt Summary Register
 * This register contains the state of PEM()_RST_INT through core domain reset.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on cold reset.
 */
union cavm_pemx_rst_cold_state_w1c
{
    uint64_t u;
    struct cavm_pemx_rst_cold_state_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_3_63         : 61;
        uint64_t l2                    : 1;  /**< [  2:  2](R/W1C/H) Reset based on PEM()_RST_INT[L2]
                                                                 caused a domain reset specified by PEM()_S_RST_CTL[RESET_TYPE] and is preserved through
                                                                 core domain reset. */
        uint64_t linkdown              : 1;  /**< [  1:  1](R/W1C/H) Reset based on PEM()_RST_INT[LINKDOWN]
                                                                 caused a domain reset specified by PEM()_S_RST_CTL[RESET_TYPE] and is preserved through
                                                                 core domain reset. */
        uint64_t perst                 : 1;  /**< [  0:  0](R/W1C/H) Reset based on PEM()_RST_INT[PERST]
                                                                 caused a domain reset specified by PEM()_S_RST_CTL[RESET_TYPE] and is preserved through
                                                                 core domain reset. */
#else /* Word 0 - Little Endian */
        uint64_t perst                 : 1;  /**< [  0:  0](R/W1C/H) Reset based on PEM()_RST_INT[PERST]
                                                                 caused a domain reset specified by PEM()_S_RST_CTL[RESET_TYPE] and is preserved through
                                                                 core domain reset. */
        uint64_t linkdown              : 1;  /**< [  1:  1](R/W1C/H) Reset based on PEM()_RST_INT[LINKDOWN]
                                                                 caused a domain reset specified by PEM()_S_RST_CTL[RESET_TYPE] and is preserved through
                                                                 core domain reset. */
        uint64_t l2                    : 1;  /**< [  2:  2](R/W1C/H) Reset based on PEM()_RST_INT[L2]
                                                                 caused a domain reset specified by PEM()_S_RST_CTL[RESET_TYPE] and is preserved through
                                                                 core domain reset. */
        uint64_t reserved_3_63         : 61;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_rst_cold_state_w1c_s cn; */
};
typedef union cavm_pemx_rst_cold_state_w1c cavm_pemx_rst_cold_state_w1c_t;

static inline uint64_t CAVM_PEMX_RST_COLD_STATE_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_RST_COLD_STATE_W1C(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8e0000000320ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x8e0000000320ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8e0000000320ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8e0000000320ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("PEMX_RST_COLD_STATE_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_RST_COLD_STATE_W1C(a) cavm_pemx_rst_cold_state_w1c_t
#define bustype_CAVM_PEMX_RST_COLD_STATE_W1C(a) CSR_TYPE_NCB
#define basename_CAVM_PEMX_RST_COLD_STATE_W1C(a) "PEMX_RST_COLD_STATE_W1C"
#define device_bar_CAVM_PEMX_RST_COLD_STATE_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_RST_COLD_STATE_W1C(a) (a)
#define arguments_CAVM_PEMX_RST_COLD_STATE_W1C(a) (a),-1,-1,-1

/**
 * Register (NCB) pem#_rst_cold_state_w1s
 *
 * PEM Reset Cold State Interrupt Summary Register
 */
union cavm_pemx_rst_cold_state_w1s
{
    uint64_t u;
    struct cavm_pemx_rst_cold_state_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_3_63         : 61;
        uint64_t l2                    : 1;  /**< [  2:  2](R/W1C/H) Reset based on PEM()_RST_INT[L2]
                                                                 caused a domain reset specified by PEM()_S_RST_CTL[RESET_TYPE] and is preserved through
                                                                 core domain reset. */
        uint64_t linkdown              : 1;  /**< [  1:  1](R/W1C/H) Reset based on PEM()_RST_INT[LINKDOWN]
                                                                 caused a domain reset specified by PEM()_S_RST_CTL[RESET_TYPE] and is preserved through
                                                                 core domain reset. */
        uint64_t perst                 : 1;  /**< [  0:  0](R/W1C/H) Reset based on PEM()_RST_INT[PERST]
                                                                 caused a domain reset specified by PEM()_S_RST_CTL[RESET_TYPE] and is preserved through
                                                                 core domain reset. */
#else /* Word 0 - Little Endian */
        uint64_t perst                 : 1;  /**< [  0:  0](R/W1C/H) Reset based on PEM()_RST_INT[PERST]
                                                                 caused a domain reset specified by PEM()_S_RST_CTL[RESET_TYPE] and is preserved through
                                                                 core domain reset. */
        uint64_t linkdown              : 1;  /**< [  1:  1](R/W1C/H) Reset based on PEM()_RST_INT[LINKDOWN]
                                                                 caused a domain reset specified by PEM()_S_RST_CTL[RESET_TYPE] and is preserved through
                                                                 core domain reset. */
        uint64_t l2                    : 1;  /**< [  2:  2](R/W1C/H) Reset based on PEM()_RST_INT[L2]
                                                                 caused a domain reset specified by PEM()_S_RST_CTL[RESET_TYPE] and is preserved through
                                                                 core domain reset. */
        uint64_t reserved_3_63         : 61;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_rst_cold_state_w1s_s cn; */
};
typedef union cavm_pemx_rst_cold_state_w1s cavm_pemx_rst_cold_state_w1s_t;

static inline uint64_t CAVM_PEMX_RST_COLD_STATE_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_RST_COLD_STATE_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8e0000000328ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x8e0000000328ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8e0000000328ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8e0000000328ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("PEMX_RST_COLD_STATE_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_RST_COLD_STATE_W1S(a) cavm_pemx_rst_cold_state_w1s_t
#define bustype_CAVM_PEMX_RST_COLD_STATE_W1S(a) CSR_TYPE_NCB
#define basename_CAVM_PEMX_RST_COLD_STATE_W1S(a) "PEMX_RST_COLD_STATE_W1S"
#define device_bar_CAVM_PEMX_RST_COLD_STATE_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_RST_COLD_STATE_W1S(a) (a)
#define arguments_CAVM_PEMX_RST_COLD_STATE_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) pem#_rst_int
 *
 * PEM Interrupt Summary Register
 * This register contains the different interrupt summary bits of the PEM.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 */
union cavm_pemx_rst_int
{
    uint64_t u;
    struct cavm_pemx_rst_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_3_63         : 61;
        uint64_t l2                    : 1;  /**< [  2:  2](R/W1C/H) Reset based on Powerdown (L2) occurred while PEM()_S_RST_CTL[RST_L2] = 0.
                                                                 Software must assert then deassert PEM()_RST_SOFT_PERST[SOFT_PERST].

                                                                 This field is reinitialized by a core domain reset.
                                                                 Refer to PEM()_RST_COLD_STATE_W1C[L2], which will retain state. */
        uint64_t linkdown              : 1;  /**< [  1:  1](R/W1C/H) Reset based on link down event occurred while PEM()_S_RST_CTL[RST_LNKDWN] = 0.
                                                                 Software must assert then deassert PEM()_RST_SOFT_PERST[SOFT_PERST].

                                                                 This field is reinitialized by a core domain reset.
                                                                 Refer to PEM()_RST_COLD_STATE_W1C[L2], which will retain state. */
        uint64_t perst                 : 1;  /**< [  0:  0](R/W1C/H) Reset based on PERST_L pin when PEM()_S_RST_CTL[EN_PERST_RCV] = 1 and
                                                                 PEM()_S_RST_CTL[RST_PERST] = 0.

                                                                 This field is reinitialized by a core domain reset.
                                                                 Refer to PEM()_RST_COLD_STATE_W1C[L2], which will retain state. */
#else /* Word 0 - Little Endian */
        uint64_t perst                 : 1;  /**< [  0:  0](R/W1C/H) Reset based on PERST_L pin when PEM()_S_RST_CTL[EN_PERST_RCV] = 1 and
                                                                 PEM()_S_RST_CTL[RST_PERST] = 0.

                                                                 This field is reinitialized by a core domain reset.
                                                                 Refer to PEM()_RST_COLD_STATE_W1C[L2], which will retain state. */
        uint64_t linkdown              : 1;  /**< [  1:  1](R/W1C/H) Reset based on link down event occurred while PEM()_S_RST_CTL[RST_LNKDWN] = 0.
                                                                 Software must assert then deassert PEM()_RST_SOFT_PERST[SOFT_PERST].

                                                                 This field is reinitialized by a core domain reset.
                                                                 Refer to PEM()_RST_COLD_STATE_W1C[L2], which will retain state. */
        uint64_t l2                    : 1;  /**< [  2:  2](R/W1C/H) Reset based on Powerdown (L2) occurred while PEM()_S_RST_CTL[RST_L2] = 0.
                                                                 Software must assert then deassert PEM()_RST_SOFT_PERST[SOFT_PERST].

                                                                 This field is reinitialized by a core domain reset.
                                                                 Refer to PEM()_RST_COLD_STATE_W1C[L2], which will retain state. */
        uint64_t reserved_3_63         : 61;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_rst_int_s cn; */
};
typedef union cavm_pemx_rst_int cavm_pemx_rst_int_t;

static inline uint64_t CAVM_PEMX_RST_INT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_RST_INT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8e0000000300ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x8e0000000300ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8e0000000300ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8e0000000300ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("PEMX_RST_INT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_RST_INT(a) cavm_pemx_rst_int_t
#define bustype_CAVM_PEMX_RST_INT(a) CSR_TYPE_NCB
#define basename_CAVM_PEMX_RST_INT(a) "PEMX_RST_INT"
#define device_bar_CAVM_PEMX_RST_INT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_RST_INT(a) (a)
#define arguments_CAVM_PEMX_RST_INT(a) (a),-1,-1,-1

/**
 * Register (NCB) pem#_rst_int_ena_w1c
 *
 * PEM Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_pemx_rst_int_ena_w1c
{
    uint64_t u;
    struct cavm_pemx_rst_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_3_63         : 61;
        uint64_t l2                    : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for PEM(0..5)_RST_INT[L2]. */
        uint64_t linkdown              : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for PEM(0..5)_RST_INT[LINKDOWN]. */
        uint64_t perst                 : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for PEM(0..5)_RST_INT[PERST]. */
#else /* Word 0 - Little Endian */
        uint64_t perst                 : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for PEM(0..5)_RST_INT[PERST]. */
        uint64_t linkdown              : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for PEM(0..5)_RST_INT[LINKDOWN]. */
        uint64_t l2                    : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for PEM(0..5)_RST_INT[L2]. */
        uint64_t reserved_3_63         : 61;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_rst_int_ena_w1c_s cn10; */
    /* struct cavm_pemx_rst_int_ena_w1c_s cn10ka; */
    /* struct cavm_pemx_rst_int_ena_w1c_s cn10kb; */
    struct cavm_pemx_rst_int_ena_w1c_cnf10ka
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_3_63         : 61;
        uint64_t l2                    : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for PEM(0..1)_RST_INT[L2]. */
        uint64_t linkdown              : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for PEM(0..1)_RST_INT[LINKDOWN]. */
        uint64_t perst                 : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for PEM(0..1)_RST_INT[PERST]. */
#else /* Word 0 - Little Endian */
        uint64_t perst                 : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for PEM(0..1)_RST_INT[PERST]. */
        uint64_t linkdown              : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for PEM(0..1)_RST_INT[LINKDOWN]. */
        uint64_t l2                    : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for PEM(0..1)_RST_INT[L2]. */
        uint64_t reserved_3_63         : 61;
#endif /* Word 0 - End */
    } cnf10ka;
    /* struct cavm_pemx_rst_int_ena_w1c_cnf10ka cnf10kb; */
};
typedef union cavm_pemx_rst_int_ena_w1c cavm_pemx_rst_int_ena_w1c_t;

static inline uint64_t CAVM_PEMX_RST_INT_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_RST_INT_ENA_W1C(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8e0000000310ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x8e0000000310ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8e0000000310ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8e0000000310ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("PEMX_RST_INT_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_RST_INT_ENA_W1C(a) cavm_pemx_rst_int_ena_w1c_t
#define bustype_CAVM_PEMX_RST_INT_ENA_W1C(a) CSR_TYPE_NCB
#define basename_CAVM_PEMX_RST_INT_ENA_W1C(a) "PEMX_RST_INT_ENA_W1C"
#define device_bar_CAVM_PEMX_RST_INT_ENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_RST_INT_ENA_W1C(a) (a)
#define arguments_CAVM_PEMX_RST_INT_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (NCB) pem#_rst_int_ena_w1s
 *
 * PEM Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_pemx_rst_int_ena_w1s
{
    uint64_t u;
    struct cavm_pemx_rst_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_3_63         : 61;
        uint64_t l2                    : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for PEM(0..5)_RST_INT[L2]. */
        uint64_t linkdown              : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for PEM(0..5)_RST_INT[LINKDOWN]. */
        uint64_t perst                 : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for PEM(0..5)_RST_INT[PERST]. */
#else /* Word 0 - Little Endian */
        uint64_t perst                 : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for PEM(0..5)_RST_INT[PERST]. */
        uint64_t linkdown              : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for PEM(0..5)_RST_INT[LINKDOWN]. */
        uint64_t l2                    : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for PEM(0..5)_RST_INT[L2]. */
        uint64_t reserved_3_63         : 61;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_rst_int_ena_w1s_s cn10; */
    /* struct cavm_pemx_rst_int_ena_w1s_s cn10ka; */
    /* struct cavm_pemx_rst_int_ena_w1s_s cn10kb; */
    struct cavm_pemx_rst_int_ena_w1s_cnf10ka
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_3_63         : 61;
        uint64_t l2                    : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for PEM(0..1)_RST_INT[L2]. */
        uint64_t linkdown              : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for PEM(0..1)_RST_INT[LINKDOWN]. */
        uint64_t perst                 : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for PEM(0..1)_RST_INT[PERST]. */
#else /* Word 0 - Little Endian */
        uint64_t perst                 : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for PEM(0..1)_RST_INT[PERST]. */
        uint64_t linkdown              : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for PEM(0..1)_RST_INT[LINKDOWN]. */
        uint64_t l2                    : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for PEM(0..1)_RST_INT[L2]. */
        uint64_t reserved_3_63         : 61;
#endif /* Word 0 - End */
    } cnf10ka;
    /* struct cavm_pemx_rst_int_ena_w1s_cnf10ka cnf10kb; */
};
typedef union cavm_pemx_rst_int_ena_w1s cavm_pemx_rst_int_ena_w1s_t;

static inline uint64_t CAVM_PEMX_RST_INT_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_RST_INT_ENA_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8e0000000318ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x8e0000000318ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8e0000000318ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8e0000000318ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("PEMX_RST_INT_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_RST_INT_ENA_W1S(a) cavm_pemx_rst_int_ena_w1s_t
#define bustype_CAVM_PEMX_RST_INT_ENA_W1S(a) CSR_TYPE_NCB
#define basename_CAVM_PEMX_RST_INT_ENA_W1S(a) "PEMX_RST_INT_ENA_W1S"
#define device_bar_CAVM_PEMX_RST_INT_ENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_RST_INT_ENA_W1S(a) (a)
#define arguments_CAVM_PEMX_RST_INT_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) pem#_rst_int_w1s
 *
 * PEM Interrupt Summary Register
 * This register sets interrupt bits.
 */
union cavm_pemx_rst_int_w1s
{
    uint64_t u;
    struct cavm_pemx_rst_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_3_63         : 61;
        uint64_t l2                    : 1;  /**< [  2:  2](R/W1S/H) Reads or sets PEM(0..5)_RST_INT[L2]. */
        uint64_t linkdown              : 1;  /**< [  1:  1](R/W1S/H) Reads or sets PEM(0..5)_RST_INT[LINKDOWN]. */
        uint64_t perst                 : 1;  /**< [  0:  0](R/W1S/H) Reads or sets PEM(0..5)_RST_INT[PERST]. */
#else /* Word 0 - Little Endian */
        uint64_t perst                 : 1;  /**< [  0:  0](R/W1S/H) Reads or sets PEM(0..5)_RST_INT[PERST]. */
        uint64_t linkdown              : 1;  /**< [  1:  1](R/W1S/H) Reads or sets PEM(0..5)_RST_INT[LINKDOWN]. */
        uint64_t l2                    : 1;  /**< [  2:  2](R/W1S/H) Reads or sets PEM(0..5)_RST_INT[L2]. */
        uint64_t reserved_3_63         : 61;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_rst_int_w1s_s cn10; */
    /* struct cavm_pemx_rst_int_w1s_s cn10ka; */
    /* struct cavm_pemx_rst_int_w1s_s cn10kb; */
    struct cavm_pemx_rst_int_w1s_cnf10ka
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_3_63         : 61;
        uint64_t l2                    : 1;  /**< [  2:  2](R/W1S/H) Reads or sets PEM(0..1)_RST_INT[L2]. */
        uint64_t linkdown              : 1;  /**< [  1:  1](R/W1S/H) Reads or sets PEM(0..1)_RST_INT[LINKDOWN]. */
        uint64_t perst                 : 1;  /**< [  0:  0](R/W1S/H) Reads or sets PEM(0..1)_RST_INT[PERST]. */
#else /* Word 0 - Little Endian */
        uint64_t perst                 : 1;  /**< [  0:  0](R/W1S/H) Reads or sets PEM(0..1)_RST_INT[PERST]. */
        uint64_t linkdown              : 1;  /**< [  1:  1](R/W1S/H) Reads or sets PEM(0..1)_RST_INT[LINKDOWN]. */
        uint64_t l2                    : 1;  /**< [  2:  2](R/W1S/H) Reads or sets PEM(0..1)_RST_INT[L2]. */
        uint64_t reserved_3_63         : 61;
#endif /* Word 0 - End */
    } cnf10ka;
    /* struct cavm_pemx_rst_int_w1s_cnf10ka cnf10kb; */
};
typedef union cavm_pemx_rst_int_w1s cavm_pemx_rst_int_w1s_t;

static inline uint64_t CAVM_PEMX_RST_INT_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_RST_INT_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8e0000000308ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x8e0000000308ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8e0000000308ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8e0000000308ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("PEMX_RST_INT_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_RST_INT_W1S(a) cavm_pemx_rst_int_w1s_t
#define bustype_CAVM_PEMX_RST_INT_W1S(a) CSR_TYPE_NCB
#define basename_CAVM_PEMX_RST_INT_W1S(a) "PEMX_RST_INT_W1S"
#define device_bar_CAVM_PEMX_RST_INT_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_RST_INT_W1S(a) (a)
#define arguments_CAVM_PEMX_RST_INT_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) pem#_rst_lboot
 *
 * PEM Reset Last Boot Register
 * This register contains status last reset cause.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on cold reset.
 */
union cavm_pemx_rst_lboot
{
    uint64_t u;
    struct cavm_pemx_rst_lboot_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t lboot                 : 5;  /**< [  4:  0](R/W1C/H) Bit vector of last reset cause(es).  The value is reset with a
                                                                 cold domain reset.
                                                                 Bit numbers are enumerated by PEM_RST_SOURCE_E. */
#else /* Word 0 - Little Endian */
        uint64_t lboot                 : 5;  /**< [  4:  0](R/W1C/H) Bit vector of last reset cause(es).  The value is reset with a
                                                                 cold domain reset.
                                                                 Bit numbers are enumerated by PEM_RST_SOURCE_E. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_rst_lboot_s cn; */
};
typedef union cavm_pemx_rst_lboot cavm_pemx_rst_lboot_t;

static inline uint64_t CAVM_PEMX_RST_LBOOT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_RST_LBOOT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8e0000000280ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x8e0000000280ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8e0000000280ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8e0000000280ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("PEMX_RST_LBOOT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_RST_LBOOT(a) cavm_pemx_rst_lboot_t
#define bustype_CAVM_PEMX_RST_LBOOT(a) CSR_TYPE_NCB
#define basename_CAVM_PEMX_RST_LBOOT(a) "PEMX_RST_LBOOT"
#define device_bar_CAVM_PEMX_RST_LBOOT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_RST_LBOOT(a) (a)
#define arguments_CAVM_PEMX_RST_LBOOT(a) (a),-1,-1,-1

/**
 * Register (NCB) pem#_rst_mac
 *
 * PEM Reset Mac Register
 * This register provides a mechanism to reset the Mac.
 *
 * This register is accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on cold reset.
 */
union cavm_pemx_rst_mac
{
    uint64_t u;
    struct cavm_pemx_rst_mac_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t mac_perst             : 1;  /**< [  7:  7](R/W) When set, asserts PERST input to the MAC. */
        uint64_t ns_rst                : 1;  /**< [  6:  6](R/W) When set, asserts nonsticky reset which reset the root bridge or endpoint config space. */
        uint64_t ns_mode               : 1;  /**< [  5:  5](R/W) "* If set to 1, and PEM_CFG[HOSTMD] is 1, the nonsticky reset which controls the
                                                                   PCIe root bridge config space will get reset on a link down. This also enables
                                                                 PERST to be asserted
                                                                   to the MAC when asserted to the external device as an RC. This is the legacy behavior.
                                                                 * If set to 0, and PEM_CFG[HOSTMD] is 1, then the nonsticky reset will not get
                                                                 asserted on a link down,
                                                                   and PERST will not get asserted to the MAC. [ACLR] must be 1 in this case for proper operation.
                                                                 * If PEM_CFG[HOSTMD] is 0, then a link down will always cause a nonsticky reset,
                                                                 and PERST input will be
                                                                   driven to the MAC, and this bit has no effect." */
        uint64_t dis_pipe_rst          : 1;  /**< [  4:  4](R/W) For LTSSM transitions into DETECT_QUIET after reaching CONFIG, the application will
                                                                 insure the pipe reset is asserted.   Setting this bit will disable this function. */
        uint64_t diag_clr_phystatus    : 1;  /**< [  3:  3](R/W) This is a diagnostic bit to force the pipe phystatus inputs to the Mac low. */
        uint64_t pipe_rst_ovrd_en      : 1;  /**< [  2:  2](R/W) When set, [PIPE_RST] can be used to force the state of the reset to the PIPE PCS. */
        uint64_t pipe_rst              : 1;  /**< [  1:  1](R/W) When [PIPE_RST_OVRD_EN] is set, determines the state of the reset to the PIPE PCS. */
        uint64_t mac_rst               : 1;  /**< [  0:  0](R/W) When set, resets the PCIe Mac as well as its associated application logic. */
#else /* Word 0 - Little Endian */
        uint64_t mac_rst               : 1;  /**< [  0:  0](R/W) When set, resets the PCIe Mac as well as its associated application logic. */
        uint64_t pipe_rst              : 1;  /**< [  1:  1](R/W) When [PIPE_RST_OVRD_EN] is set, determines the state of the reset to the PIPE PCS. */
        uint64_t pipe_rst_ovrd_en      : 1;  /**< [  2:  2](R/W) When set, [PIPE_RST] can be used to force the state of the reset to the PIPE PCS. */
        uint64_t diag_clr_phystatus    : 1;  /**< [  3:  3](R/W) This is a diagnostic bit to force the pipe phystatus inputs to the Mac low. */
        uint64_t dis_pipe_rst          : 1;  /**< [  4:  4](R/W) For LTSSM transitions into DETECT_QUIET after reaching CONFIG, the application will
                                                                 insure the pipe reset is asserted.   Setting this bit will disable this function. */
        uint64_t ns_mode               : 1;  /**< [  5:  5](R/W) "* If set to 1, and PEM_CFG[HOSTMD] is 1, the nonsticky reset which controls the
                                                                   PCIe root bridge config space will get reset on a link down. This also enables
                                                                 PERST to be asserted
                                                                   to the MAC when asserted to the external device as an RC. This is the legacy behavior.
                                                                 * If set to 0, and PEM_CFG[HOSTMD] is 1, then the nonsticky reset will not get
                                                                 asserted on a link down,
                                                                   and PERST will not get asserted to the MAC. [ACLR] must be 1 in this case for proper operation.
                                                                 * If PEM_CFG[HOSTMD] is 0, then a link down will always cause a nonsticky reset,
                                                                 and PERST input will be
                                                                   driven to the MAC, and this bit has no effect." */
        uint64_t ns_rst                : 1;  /**< [  6:  6](R/W) When set, asserts nonsticky reset which reset the root bridge or endpoint config space. */
        uint64_t mac_perst             : 1;  /**< [  7:  7](R/W) When set, asserts PERST input to the MAC. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_rst_mac_s cn10; */
    struct cavm_pemx_rst_mac_cn10ka
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t dis_pipe_rst          : 1;  /**< [  4:  4](R/W) For LTSSM transitions into DETECT_QUIET after reaching CONFIG, the application will
                                                                 insure the pipe reset is asserted.   Setting this bit will disable this function. */
        uint64_t diag_clr_phystatus    : 1;  /**< [  3:  3](R/W) This is a diagnostic bit to force the pipe phystatus inputs to the Mac low. */
        uint64_t pipe_rst_ovrd_en      : 1;  /**< [  2:  2](R/W) When set, [PIPE_RST] can be used to force the state of the reset to the PIPE PCS. */
        uint64_t pipe_rst              : 1;  /**< [  1:  1](R/W) When [PIPE_RST_OVRD_EN] is set, determines the state of the reset to the PIPE PCS. */
        uint64_t mac_rst               : 1;  /**< [  0:  0](R/W) When set, resets the PCIe Mac as well as its associated application logic. */
#else /* Word 0 - Little Endian */
        uint64_t mac_rst               : 1;  /**< [  0:  0](R/W) When set, resets the PCIe Mac as well as its associated application logic. */
        uint64_t pipe_rst              : 1;  /**< [  1:  1](R/W) When [PIPE_RST_OVRD_EN] is set, determines the state of the reset to the PIPE PCS. */
        uint64_t pipe_rst_ovrd_en      : 1;  /**< [  2:  2](R/W) When set, [PIPE_RST] can be used to force the state of the reset to the PIPE PCS. */
        uint64_t diag_clr_phystatus    : 1;  /**< [  3:  3](R/W) This is a diagnostic bit to force the pipe phystatus inputs to the Mac low. */
        uint64_t dis_pipe_rst          : 1;  /**< [  4:  4](R/W) For LTSSM transitions into DETECT_QUIET after reaching CONFIG, the application will
                                                                 insure the pipe reset is asserted.   Setting this bit will disable this function. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } cn10ka;
    /* struct cavm_pemx_rst_mac_s cn10kb; */
    /* struct cavm_pemx_rst_mac_cn10ka cnf10ka; */
    /* struct cavm_pemx_rst_mac_cn10ka cnf10kb; */
};
typedef union cavm_pemx_rst_mac cavm_pemx_rst_mac_t;

static inline uint64_t CAVM_PEMX_RST_MAC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_RST_MAC(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8e0000000290ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x8e0000000290ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8e0000000290ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8e0000000290ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("PEMX_RST_MAC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_RST_MAC(a) cavm_pemx_rst_mac_t
#define bustype_CAVM_PEMX_RST_MAC(a) CSR_TYPE_NCB
#define basename_CAVM_PEMX_RST_MAC(a) "PEMX_RST_MAC"
#define device_bar_CAVM_PEMX_RST_MAC(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_RST_MAC(a) (a)
#define arguments_CAVM_PEMX_RST_MAC(a) (a),-1,-1,-1

/**
 * Register (NCB) pem#_rst_soft_perst
 *
 * PEM Reset Software PERST Register
 * This register provides a mechanism to drive the PCIe PERSTN pin.
 *
 * This register is accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union cavm_pemx_rst_soft_perst
{
    uint64_t u;
    struct cavm_pemx_rst_soft_perst_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t soft_perst            : 1;  /**< [  0:  0](R/W/H) Soft PCIe reset. Resets the PEM and corresponding GSER SerDes logic.
                                                                 This field is initialized as follows during cold domain resets:
                                                                 * If PEM()_CFG[HOSTMD] is clear, [SOFT_PERST] resets to 0.
                                                                 * If PEM()_CFG[HOSTMD] is set, [SOFT_PERST] resets to 1.

                                                                 It is set by hardware under three conditions:
                                                                 * If PEM()_CFG[HOSTMD] and the PEM domain is reset.
                                                                 * If PEM()_S_RST_CTL[PRST_LNKDWN] is set and the link goes down.
                                                                 * If PEM()_S_RST_CTL[PRST_L2] is set and the PEM goes into L2 (powered down).

                                                                 When PEM()_S_RST_CTL[EN_PERST_DRV] is set, this controls the output value on PERST*_L.
                                                                 While PEM()_S_RST_CTL[EN_PERST_DRV] is set, hardware does not guarantee a minimum assertion time.
                                                                 Table 2-4 in section 2.6.2 of the PCIE CEM spec states that PERST*_L must be
                                                                 asserted for at least 100 us.

                                                                 In the endpoint case, the hardware requires that this signal be set for a
                                                                 minimum of 5 us to guarantee that the PCIe interface shuts down completely.

                                                                 These time period must be implemented by software.

                                                                 When PEM()_S_RST_CTL[EN_PERST_DRV] is clear and [SOFT_PERST] has been set by either hardware
                                                                 or software, a minimum assertion time of 2uS is required. */
#else /* Word 0 - Little Endian */
        uint64_t soft_perst            : 1;  /**< [  0:  0](R/W/H) Soft PCIe reset. Resets the PEM and corresponding GSER SerDes logic.
                                                                 This field is initialized as follows during cold domain resets:
                                                                 * If PEM()_CFG[HOSTMD] is clear, [SOFT_PERST] resets to 0.
                                                                 * If PEM()_CFG[HOSTMD] is set, [SOFT_PERST] resets to 1.

                                                                 It is set by hardware under three conditions:
                                                                 * If PEM()_CFG[HOSTMD] and the PEM domain is reset.
                                                                 * If PEM()_S_RST_CTL[PRST_LNKDWN] is set and the link goes down.
                                                                 * If PEM()_S_RST_CTL[PRST_L2] is set and the PEM goes into L2 (powered down).

                                                                 When PEM()_S_RST_CTL[EN_PERST_DRV] is set, this controls the output value on PERST*_L.
                                                                 While PEM()_S_RST_CTL[EN_PERST_DRV] is set, hardware does not guarantee a minimum assertion time.
                                                                 Table 2-4 in section 2.6.2 of the PCIE CEM spec states that PERST*_L must be
                                                                 asserted for at least 100 us.

                                                                 In the endpoint case, the hardware requires that this signal be set for a
                                                                 minimum of 5 us to guarantee that the PCIe interface shuts down completely.

                                                                 These time period must be implemented by software.

                                                                 When PEM()_S_RST_CTL[EN_PERST_DRV] is clear and [SOFT_PERST] has been set by either hardware
                                                                 or software, a minimum assertion time of 2uS is required. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_rst_soft_perst_s cn; */
};
typedef union cavm_pemx_rst_soft_perst cavm_pemx_rst_soft_perst_t;

static inline uint64_t CAVM_PEMX_RST_SOFT_PERST(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_RST_SOFT_PERST(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8e0000000298ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x8e0000000298ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8e0000000298ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8e0000000298ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("PEMX_RST_SOFT_PERST", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_RST_SOFT_PERST(a) cavm_pemx_rst_soft_perst_t
#define bustype_CAVM_PEMX_RST_SOFT_PERST(a) CSR_TYPE_NCB
#define basename_CAVM_PEMX_RST_SOFT_PERST(a) "PEMX_RST_SOFT_PERST"
#define device_bar_CAVM_PEMX_RST_SOFT_PERST(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_RST_SOFT_PERST(a) (a)
#define arguments_CAVM_PEMX_RST_SOFT_PERST(a) (a),-1,-1,-1

/**
 * Register (NCB) pem#_s_rst_ctl
 *
 * PEM Secure Reset Controllers Register
 * This register is accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union cavm_pemx_s_rst_ctl
{
    uint64_t u;
    struct cavm_pemx_s_rst_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_14_63        : 50;
        uint64_t reset_type            : 1;  /**< [ 13: 13](SR/W) Type of reset generated internally by PCI MAC PF FLR, link down/hot reset, Powerdown  or
                                                                 PERST events. See [PF_FLR_CHIP], [RST_LNKDWN], [RST_L2] and [RST_PERST].

                                                                 0 = Chip and core domain reset. (A chip domain reset always also causes a core
                                                                 domain reset.)
                                                                 1 = Core domain reset.

                                                                 On cold reset, this field is initialized as follows:
                                                                 _ 0 when PEM()_CFG[HOSTD] = 0.
                                                                 _ 1 when PEM()_CFG[HOSTD] = 1. */
        uint64_t rst_l2                : 1;  /**< [ 12: 12](SR/W) Powerdown event internal reset enable.
                                                                 0 = PEM going into powerdown (L2) does not cause an internal reset.
                                                                 1 = PEM going into powerdown (L2) causes the internal reset
                                                                 specified by [RESET_TYPE].

                                                                 On a cold reset, the field is initialized as follows:
                                                                 _ 0 when PEM_CFG[HOSTMD] is set.
                                                                 _ 1 when PEM_CFG[HOSTMD] is cleared.

                                                                 This field should not be set to 1 when PEM_CFG[HOSTMD] is set.

                                                                 0 = Upon a Powerdown event PEM()_RST_COLD_STATE_W1S[RST_L2] will be set.
                                                                 1 = Upon a Powerdown event no L2 interrupt will occur, regardless of
                                                                 PEM()_RST_INT_ENA_W1S[RST_L2]

                                                                 Note that a powerdown event can never cause a domain reset when the
                                                                 Mac is already in reset (i.e. when PEM()_ON[PEMOOR] is clear). */
        uint64_t prst_l2               : 1;  /**< [ 11: 11](SR/W) PEM reset on power down.
                                                                 0 = PEM entering L2/P2 power state will set PEM()_RST_INT[RST_L2] for the
                                                                 corresponding controller, and (provided properly configured) the link should
                                                                 come back up automatically.
                                                                 1 = PEM entering L2/P2 power state will set PEM()_RST_INT[RST_L2] for
                                                                 the corresponding controller and set PEM()_RST_SOFT_PERST[SOFT_PERST]. This will
                                                                 hold the link in reset until software clears PEM()_RST_SOFT_PERST[SOFT_PERST].

                                                                 A core/chip reset does not change this field. On cold reset, this field is
                                                                 initialized to 0. */
        uint64_t rst_pfflr             : 1;  /**< [ 10: 10](SR/W) PF FLR internal reset enable.
                                                                 0 = PF FLR events will not cause an internal reset.
                                                                 1 = A PF FLR event received by the PCIe logic causes the internal reset
                                                                 specified by [RESET_TYPE].

                                                                 On cold reset, this field is initialized as follows:
                                                                 _ 0 when PEM_CFG[HOSTMD] = 1.
                                                                 _ 1 when PEM_CFG[HOSTMD] = 0

                                                                 This field should not be set to 1 when PEM_CFG[HOSTMD] is set. */
        uint64_t rst_lnkdwn            : 1;  /**< [  9:  9](SR/W) Link down / hot reset event internal reset enable.
                                                                 0 = Link down or hot reset do not cause an internal reset.
                                                                 1 = A link-down or hot-reset event on the PCIe interface causes the internal
                                                                 reset specified by [RESET_TYPE].

                                                                 On a cold reset, the field is initialized as follows:
                                                                 _ 0 when PEM()_CFG[HOSTMD] is set.
                                                                 _ 1 when PEM()_CFG[HOSTMD] is cleared.

                                                                 This field should not be set to 1 when PEM_CFG[HOSTMD] is set.

                                                                 0 = Upon a Linkdown event PEM()_RST_COLD_STATE_W1S[RST_LINKDWN] will be set.
                                                                 1 = Upon a Linkdown event no LINKDWN interrupt will occur, Regardless of
                                                                 PEM()_RST_INT_ENA_W1S[RST_LINKDWN]

                                                                 Note that a link-down event can never cause a domain reset when the
                                                                 Mac is already in reset (i.e. when PEM()_ON[PEMOOR] is clear). */
        uint64_t prst_lnkdwn           : 1;  /**< [  8:  8](SR/W) PEM reset on link down.
                                                                 0 = Link-down or hot-reset will set PEM()_RST_INT[RST_LNKDWN] for the corresponding
                                                                 controller, and (provided properly configured) the link should come back up
                                                                 automatically.
                                                                 1 = Link-down or hot-reset will set PEM()_RST_INT[RST_LNKDWN] for the corresponding
                                                                 controller, and set PEM()_RST_SOFT_PERST[SOFT_PERST]. This will hold the link in reset
                                                                 until software clears PEM()_RST_SOFT_PERST[SOFT_PERST].

                                                                 A core/chip reset does not change this field. On cold reset, this field is
                                                                 initialized to 0. */
        uint64_t rst_perst             : 1;  /**< [  7:  7](SR/W) PERST internal reset enable. When set along with [EN_PERST_RCV],
                                                                 logic will generate an internal reset specified by [RESET_TYPE]
                                                                 when the corresponding PERST_L pin is asserted.  When cleared or
                                                                 when [EN_PERST_RCV] is cleared, the PERST_L does not cause an internal reset.

                                                                 0 = Upon a PERST event PEM()_RST_COLD_STATE_W1S[RST_PERST] will be set.
                                                                 1 = Upon a PERST event no PERST interrupt will occur, Regardless of
                                                                 PEM()_RST_INT_ENA_W1S[RST_PERST]

                                                                 If this bit is written while PERST_L pin is asserted and [EN_PERST_RCV]=1 then an
                                                                 internal reset can occur unexpectedly.

                                                                 During a cold domain reset this field is initialized to zero. */
        uint64_t reserved_3_6          : 4;
        uint64_t en_perst_drv          : 1;  /**< [  2:  2](SR/W) Controls whether PERST_L is driven.
                                                                 This field is always reinitialized on a cold domain reset.
                                                                 The field is initialized as follows:
                                                                 _ 0 when PEM()_CFG.HOSTMD is cleared.
                                                                 _ 1 when PEM()_CFG.HOSTMD is set.

                                                                 This bit must not be changed in the same write that sets [EN_PERST_RCV]=1; separate
                                                                 writes to PEM()_S_RST_CTL are required to clear one bit and then set the other. */
        uint64_t en_perst_rcv          : 1;  /**< [  1:  1](SR/W) Reset received. Controls whether PERST_L is received.
                                                                 This field is always reinitialized on a cold domain reset.
                                                                 The field is initialized as follows:
                                                                 _ 0 when PEM()_CFG.HOSTMD is set.
                                                                 _ 1 when PEM()_CFG.HOSTMD is cleared.

                                                                 When [EN_PERST_RCV] = 1, the PERST_L value is received and can be used to reset the
                                                                 controller and (optionally, based on [RST_PERST]) cause a domain reset.

                                                                 When [EN_PERST_RCV] = 1 (and [RST_PERST] = 0), PEM()_RST_INT[PERST] gets set when the PERST_L
                                                                 pin asserts. (This interrupt can alert software whenever the external reset pin initiates
                                                                 a controller reset sequence.)

                                                                 [PERST_PIN] gives the PERST_L pin value when [EN_PERST_RCV] = 1.

                                                                 When [EN_PERST_RCV] = 0, the PERST_L pin value is ignored and always returns a 1.

                                                                 This bit must not be changed in the same write that sets [EN_PERST_DRV]=1; separate
                                                                 writes to PEM()_S_RST_CTL are required to clear one bit and then set the other.
                                                                 If this bit is written while PERST_L pin is de-asserted then the MAC can come
                                                                 out of reset unexpectedly. */
        uint64_t perst_pin             : 1;  /**< [  0:  0](SRO/H) Read-only access to PERST (inverted PERST_L). Unpredictable when [EN_PERST_RCV] = 0.

                                                                 Reads as 0 when [EN_PERST_RCV] = 1 and the PERST_L pin is not asserted.
                                                                 Reads as 1 when [EN_PERST_RCV] = 1 and the PERST_L pin is asserted. */
#else /* Word 0 - Little Endian */
        uint64_t perst_pin             : 1;  /**< [  0:  0](SRO/H) Read-only access to PERST (inverted PERST_L). Unpredictable when [EN_PERST_RCV] = 0.

                                                                 Reads as 0 when [EN_PERST_RCV] = 1 and the PERST_L pin is not asserted.
                                                                 Reads as 1 when [EN_PERST_RCV] = 1 and the PERST_L pin is asserted. */
        uint64_t en_perst_rcv          : 1;  /**< [  1:  1](SR/W) Reset received. Controls whether PERST_L is received.
                                                                 This field is always reinitialized on a cold domain reset.
                                                                 The field is initialized as follows:
                                                                 _ 0 when PEM()_CFG.HOSTMD is set.
                                                                 _ 1 when PEM()_CFG.HOSTMD is cleared.

                                                                 When [EN_PERST_RCV] = 1, the PERST_L value is received and can be used to reset the
                                                                 controller and (optionally, based on [RST_PERST]) cause a domain reset.

                                                                 When [EN_PERST_RCV] = 1 (and [RST_PERST] = 0), PEM()_RST_INT[PERST] gets set when the PERST_L
                                                                 pin asserts. (This interrupt can alert software whenever the external reset pin initiates
                                                                 a controller reset sequence.)

                                                                 [PERST_PIN] gives the PERST_L pin value when [EN_PERST_RCV] = 1.

                                                                 When [EN_PERST_RCV] = 0, the PERST_L pin value is ignored and always returns a 1.

                                                                 This bit must not be changed in the same write that sets [EN_PERST_DRV]=1; separate
                                                                 writes to PEM()_S_RST_CTL are required to clear one bit and then set the other.
                                                                 If this bit is written while PERST_L pin is de-asserted then the MAC can come
                                                                 out of reset unexpectedly. */
        uint64_t en_perst_drv          : 1;  /**< [  2:  2](SR/W) Controls whether PERST_L is driven.
                                                                 This field is always reinitialized on a cold domain reset.
                                                                 The field is initialized as follows:
                                                                 _ 0 when PEM()_CFG.HOSTMD is cleared.
                                                                 _ 1 when PEM()_CFG.HOSTMD is set.

                                                                 This bit must not be changed in the same write that sets [EN_PERST_RCV]=1; separate
                                                                 writes to PEM()_S_RST_CTL are required to clear one bit and then set the other. */
        uint64_t reserved_3_6          : 4;
        uint64_t rst_perst             : 1;  /**< [  7:  7](SR/W) PERST internal reset enable. When set along with [EN_PERST_RCV],
                                                                 logic will generate an internal reset specified by [RESET_TYPE]
                                                                 when the corresponding PERST_L pin is asserted.  When cleared or
                                                                 when [EN_PERST_RCV] is cleared, the PERST_L does not cause an internal reset.

                                                                 0 = Upon a PERST event PEM()_RST_COLD_STATE_W1S[RST_PERST] will be set.
                                                                 1 = Upon a PERST event no PERST interrupt will occur, Regardless of
                                                                 PEM()_RST_INT_ENA_W1S[RST_PERST]

                                                                 If this bit is written while PERST_L pin is asserted and [EN_PERST_RCV]=1 then an
                                                                 internal reset can occur unexpectedly.

                                                                 During a cold domain reset this field is initialized to zero. */
        uint64_t prst_lnkdwn           : 1;  /**< [  8:  8](SR/W) PEM reset on link down.
                                                                 0 = Link-down or hot-reset will set PEM()_RST_INT[RST_LNKDWN] for the corresponding
                                                                 controller, and (provided properly configured) the link should come back up
                                                                 automatically.
                                                                 1 = Link-down or hot-reset will set PEM()_RST_INT[RST_LNKDWN] for the corresponding
                                                                 controller, and set PEM()_RST_SOFT_PERST[SOFT_PERST]. This will hold the link in reset
                                                                 until software clears PEM()_RST_SOFT_PERST[SOFT_PERST].

                                                                 A core/chip reset does not change this field. On cold reset, this field is
                                                                 initialized to 0. */
        uint64_t rst_lnkdwn            : 1;  /**< [  9:  9](SR/W) Link down / hot reset event internal reset enable.
                                                                 0 = Link down or hot reset do not cause an internal reset.
                                                                 1 = A link-down or hot-reset event on the PCIe interface causes the internal
                                                                 reset specified by [RESET_TYPE].

                                                                 On a cold reset, the field is initialized as follows:
                                                                 _ 0 when PEM()_CFG[HOSTMD] is set.
                                                                 _ 1 when PEM()_CFG[HOSTMD] is cleared.

                                                                 This field should not be set to 1 when PEM_CFG[HOSTMD] is set.

                                                                 0 = Upon a Linkdown event PEM()_RST_COLD_STATE_W1S[RST_LINKDWN] will be set.
                                                                 1 = Upon a Linkdown event no LINKDWN interrupt will occur, Regardless of
                                                                 PEM()_RST_INT_ENA_W1S[RST_LINKDWN]

                                                                 Note that a link-down event can never cause a domain reset when the
                                                                 Mac is already in reset (i.e. when PEM()_ON[PEMOOR] is clear). */
        uint64_t rst_pfflr             : 1;  /**< [ 10: 10](SR/W) PF FLR internal reset enable.
                                                                 0 = PF FLR events will not cause an internal reset.
                                                                 1 = A PF FLR event received by the PCIe logic causes the internal reset
                                                                 specified by [RESET_TYPE].

                                                                 On cold reset, this field is initialized as follows:
                                                                 _ 0 when PEM_CFG[HOSTMD] = 1.
                                                                 _ 1 when PEM_CFG[HOSTMD] = 0

                                                                 This field should not be set to 1 when PEM_CFG[HOSTMD] is set. */
        uint64_t prst_l2               : 1;  /**< [ 11: 11](SR/W) PEM reset on power down.
                                                                 0 = PEM entering L2/P2 power state will set PEM()_RST_INT[RST_L2] for the
                                                                 corresponding controller, and (provided properly configured) the link should
                                                                 come back up automatically.
                                                                 1 = PEM entering L2/P2 power state will set PEM()_RST_INT[RST_L2] for
                                                                 the corresponding controller and set PEM()_RST_SOFT_PERST[SOFT_PERST]. This will
                                                                 hold the link in reset until software clears PEM()_RST_SOFT_PERST[SOFT_PERST].

                                                                 A core/chip reset does not change this field. On cold reset, this field is
                                                                 initialized to 0. */
        uint64_t rst_l2                : 1;  /**< [ 12: 12](SR/W) Powerdown event internal reset enable.
                                                                 0 = PEM going into powerdown (L2) does not cause an internal reset.
                                                                 1 = PEM going into powerdown (L2) causes the internal reset
                                                                 specified by [RESET_TYPE].

                                                                 On a cold reset, the field is initialized as follows:
                                                                 _ 0 when PEM_CFG[HOSTMD] is set.
                                                                 _ 1 when PEM_CFG[HOSTMD] is cleared.

                                                                 This field should not be set to 1 when PEM_CFG[HOSTMD] is set.

                                                                 0 = Upon a Powerdown event PEM()_RST_COLD_STATE_W1S[RST_L2] will be set.
                                                                 1 = Upon a Powerdown event no L2 interrupt will occur, regardless of
                                                                 PEM()_RST_INT_ENA_W1S[RST_L2]

                                                                 Note that a powerdown event can never cause a domain reset when the
                                                                 Mac is already in reset (i.e. when PEM()_ON[PEMOOR] is clear). */
        uint64_t reset_type            : 1;  /**< [ 13: 13](SR/W) Type of reset generated internally by PCI MAC PF FLR, link down/hot reset, Powerdown  or
                                                                 PERST events. See [PF_FLR_CHIP], [RST_LNKDWN], [RST_L2] and [RST_PERST].

                                                                 0 = Chip and core domain reset. (A chip domain reset always also causes a core
                                                                 domain reset.)
                                                                 1 = Core domain reset.

                                                                 On cold reset, this field is initialized as follows:
                                                                 _ 0 when PEM()_CFG[HOSTD] = 0.
                                                                 _ 1 when PEM()_CFG[HOSTD] = 1. */
        uint64_t reserved_14_63        : 50;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_s_rst_ctl_s cn; */
};
typedef union cavm_pemx_s_rst_ctl cavm_pemx_s_rst_ctl_t;

static inline uint64_t CAVM_PEMX_S_RST_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_S_RST_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8e0000000288ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x8e0000000288ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8e0000000288ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8e0000000288ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("PEMX_S_RST_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_S_RST_CTL(a) cavm_pemx_s_rst_ctl_t
#define bustype_CAVM_PEMX_S_RST_CTL(a) CSR_TYPE_NCB
#define basename_CAVM_PEMX_S_RST_CTL(a) "PEMX_S_RST_CTL"
#define device_bar_CAVM_PEMX_S_RST_CTL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_S_RST_CTL(a) (a)
#define arguments_CAVM_PEMX_S_RST_CTL(a) (a),-1,-1,-1

/**
 * Register (NCB) pem#_strap
 *
 * PEM Pin Strapping Register
 * This register is accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on cold reset.
 */
union cavm_pemx_strap
{
    uint64_t u;
    struct cavm_pemx_strap_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t pirc                  : 1;  /**< [  0:  0](RO/H) The inverted value of the endpoint strap (GPIO_STRAP_PIN_E::PCIE0_EP_MODE,
                                                                 GPIO_STRAP_PIN_E::PCIE2_EP_MODE, 1 for other PEMs) which is captured on
                                                                 DCOK assertion. It is not affected by any other reset. When set, PEM defaults to
                                                                 root complex mode. When clear, PEM defaults to endpoint mode. */
#else /* Word 0 - Little Endian */
        uint64_t pirc                  : 1;  /**< [  0:  0](RO/H) The inverted value of the endpoint strap (GPIO_STRAP_PIN_E::PCIE0_EP_MODE,
                                                                 GPIO_STRAP_PIN_E::PCIE2_EP_MODE, 1 for other PEMs) which is captured on
                                                                 DCOK assertion. It is not affected by any other reset. When set, PEM defaults to
                                                                 root complex mode. When clear, PEM defaults to endpoint mode. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_strap_s cn; */
};
typedef union cavm_pemx_strap cavm_pemx_strap_t;

static inline uint64_t CAVM_PEMX_STRAP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_STRAP(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8e00000000d0ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x8e00000000d0ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8e00000000d0ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8e00000000d0ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("PEMX_STRAP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_STRAP(a) cavm_pemx_strap_t
#define bustype_CAVM_PEMX_STRAP(a) CSR_TYPE_NCB
#define basename_CAVM_PEMX_STRAP(a) "PEMX_STRAP"
#define device_bar_CAVM_PEMX_STRAP(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_STRAP(a) (a)
#define arguments_CAVM_PEMX_STRAP(a) (a),-1,-1,-1

/**
 * Register (NCB) pem#_vf_clr_flr_req
 *
 * PEM FLR Request VF Clear Register
 * This register provides clear request for PCIe PF function level reset (FLR).
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on MAC reset.
 */
union cavm_pemx_vf_clr_flr_req
{
    uint64_t u;
    struct cavm_pemx_vf_clr_flr_req_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t vf_num                : 6;  /**< [  5:  0](R/W/H) When written, will cause hardware to clear one of the 64 VF FLR conditions
                                                                 indexed by [VF_NUM].
                                                                 This field always reads as zero. */
#else /* Word 0 - Little Endian */
        uint64_t vf_num                : 6;  /**< [  5:  0](R/W/H) When written, will cause hardware to clear one of the 64 VF FLR conditions
                                                                 indexed by [VF_NUM].
                                                                 This field always reads as zero. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_vf_clr_flr_req_s cn; */
};
typedef union cavm_pemx_vf_clr_flr_req cavm_pemx_vf_clr_flr_req_t;

static inline uint64_t CAVM_PEMX_VF_CLR_FLR_REQ(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_VF_CLR_FLR_REQ(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8e0000000228ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=5))
        return 0x8e0000000228ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8e0000000228ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8e0000000228ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("PEMX_VF_CLR_FLR_REQ", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_VF_CLR_FLR_REQ(a) cavm_pemx_vf_clr_flr_req_t
#define bustype_CAVM_PEMX_VF_CLR_FLR_REQ(a) CSR_TYPE_NCB
#define basename_CAVM_PEMX_VF_CLR_FLR_REQ(a) "PEMX_VF_CLR_FLR_REQ"
#define device_bar_CAVM_PEMX_VF_CLR_FLR_REQ(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_VF_CLR_FLR_REQ(a) (a)
#define arguments_CAVM_PEMX_VF_CLR_FLR_REQ(a) (a),-1,-1,-1

/**
 * Register (NCB) pem#_wmerge_merged_pc
 *
 * PEM Merge Writes Merged Performance Counter Register
 * This register reports how many writes merged within the outbound write merge unit.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 */
union cavm_pemx_wmerge_merged_pc
{
    uint64_t u;
    struct cavm_pemx_wmerge_merged_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t wmerge_merged         : 64; /**< [ 63:  0](R/W/H) Each NCBO write operation mapped to MEM type by the ACC table that merges with a previous
                                                                 write will increment this count. */
#else /* Word 0 - Little Endian */
        uint64_t wmerge_merged         : 64; /**< [ 63:  0](R/W/H) Each NCBO write operation mapped to MEM type by the ACC table that merges with a previous
                                                                 write will increment this count. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_wmerge_merged_pc_s cn; */
};
typedef union cavm_pemx_wmerge_merged_pc cavm_pemx_wmerge_merged_pc_t;

static inline uint64_t CAVM_PEMX_WMERGE_MERGED_PC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_WMERGE_MERGED_PC(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8e0000000198ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8e0000000198ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8e0000000198ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("PEMX_WMERGE_MERGED_PC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_WMERGE_MERGED_PC(a) cavm_pemx_wmerge_merged_pc_t
#define bustype_CAVM_PEMX_WMERGE_MERGED_PC(a) CSR_TYPE_NCB
#define basename_CAVM_PEMX_WMERGE_MERGED_PC(a) "PEMX_WMERGE_MERGED_PC"
#define device_bar_CAVM_PEMX_WMERGE_MERGED_PC(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_WMERGE_MERGED_PC(a) (a)
#define arguments_CAVM_PEMX_WMERGE_MERGED_PC(a) (a),-1,-1,-1

/**
 * Register (NCB) pem#_wmerge_received_pc
 *
 * PEM Merge Writes Received Performance Counter Register
 * This register reports the number of writes that enter the outbound write merge unit.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 */
union cavm_pemx_wmerge_received_pc
{
    uint64_t u;
    struct cavm_pemx_wmerge_received_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t wmerge_writes         : 64; /**< [ 63:  0](R/W/H) Each NCBO write operation mapped to MEM type by the ACC table will increment this count. */
#else /* Word 0 - Little Endian */
        uint64_t wmerge_writes         : 64; /**< [ 63:  0](R/W/H) Each NCBO write operation mapped to MEM type by the ACC table will increment this count. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemx_wmerge_received_pc_s cn; */
};
typedef union cavm_pemx_wmerge_received_pc cavm_pemx_wmerge_received_pc_t;

static inline uint64_t CAVM_PEMX_WMERGE_RECEIVED_PC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMX_WMERGE_RECEIVED_PC(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=5))
        return 0x8e0000000190ll + 0x1000000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x8e0000000190ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x8e0000000190ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("PEMX_WMERGE_RECEIVED_PC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMX_WMERGE_RECEIVED_PC(a) cavm_pemx_wmerge_received_pc_t
#define bustype_CAVM_PEMX_WMERGE_RECEIVED_PC(a) CSR_TYPE_NCB
#define basename_CAVM_PEMX_WMERGE_RECEIVED_PC(a) "PEMX_WMERGE_RECEIVED_PC"
#define device_bar_CAVM_PEMX_WMERGE_RECEIVED_PC(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMX_WMERGE_RECEIVED_PC(a) (a)
#define arguments_CAVM_PEMX_WMERGE_RECEIVED_PC(a) (a),-1,-1,-1

#endif /* __CAVM_CSRS_PEM_H__ */
